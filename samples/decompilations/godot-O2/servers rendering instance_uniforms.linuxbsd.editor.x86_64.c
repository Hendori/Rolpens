
/* SortArray<StringName, StringName::AlphCompare, true>::adjust_heap(long, long, long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::adjust_heap
               (long param_1,long param_2,long param_3,StringName_conflict *param_4,long param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  StringName_conflict *pSVar13;
  StringName_conflict *this;
  long lVar14;
  long in_FS_OFFSET;
  StringName_conflict *local_50;
  long local_48;
  long local_40;
  
  lVar11 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = param_2;
  if (lVar11 < param_3) {
    do {
      lVar9 = lVar11 + -1;
      this = (StringName_conflict *)(param_5 + (lVar9 + param_1) * 8);
      pSVar13 = (StringName_conflict *)(param_5 + (param_1 + lVar11) * 8);
      lVar6 = *(long *)this;
      lVar5 = *(long *)pSVar13;
      if (lVar5 == 0) {
        if (lVar6 != 0) {
          pbVar10 = *(byte **)(lVar6 + 8);
          uVar8 = 0;
          pbVar12 = &_LC0;
LAB_0010012c:
          if (pbVar10 == (byte *)0x0) {
            lVar5 = 0;
            uVar3 = **(uint **)(lVar6 + 0x10);
            if (uVar3 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_001000e0;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_001000e0;
                if (uVar3 < uVar8) break;
                uVar8 = (uint)(char)pbVar12[lVar5 + 1];
                uVar3 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
                lVar5 = lVar5 + 1;
              } while (uVar8 != 0 || uVar3 != 0);
            }
          }
          else {
            uVar3 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
LAB_0010017e:
            if (bVar4 != 0) {
              lVar6 = 1;
              do {
                if (uVar8 == 0) goto LAB_001000e0;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_001000e0;
                if (uVar3 < uVar8) break;
                pbVar1 = pbVar12 + lVar6;
                uVar8 = (uint)(char)*pbVar1;
                pbVar2 = pbVar10 + lVar6;
                uVar3 = (uint)(char)*pbVar2;
                lVar6 = lVar6 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar5 + 8);
        if (lVar6 == 0) {
          if (pbVar12 != (byte *)0x0) {
            bVar4 = *pbVar12;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC0;
            uVar3 = 0;
            goto LAB_0010017e;
          }
          uVar8 = 0;
          pbVar10 = &_LC0;
        }
        else {
          pbVar10 = *(byte **)(lVar6 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar12;
            goto LAB_0010012c;
          }
          if (pbVar10 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar6 + 0x10);
            uVar3 = **(uint **)(lVar5 + 0x10);
            if (uVar8 != 0 || uVar3 != 0) {
              do {
                if (uVar3 == 0) goto LAB_001000e0;
                if (uVar8 == 0) break;
                if (uVar3 < uVar8) goto LAB_001000e0;
                if (uVar8 < uVar3) break;
                uVar3 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar3 != 0 || uVar8 != 0);
            }
            goto LAB_00100108;
          }
          uVar8 = (uint)(char)*pbVar10;
        }
        lVar6 = 0;
        uVar3 = **(uint **)(lVar5 + 0x10);
        if (uVar3 != 0 || uVar8 != 0) {
          do {
            if (uVar3 == 0) goto LAB_001000e0;
            if (uVar8 == 0) break;
            if (uVar3 < uVar8) goto LAB_001000e0;
            if (uVar8 < uVar3) break;
            uVar3 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
            uVar8 = (uint)(char)pbVar10[lVar6 + 1];
            lVar6 = lVar6 + 1;
          } while (uVar3 != 0 || uVar8 != 0);
        }
      }
LAB_00100108:
      lVar9 = lVar11;
      this = pSVar13;
      lVar11 = lVar11 + 1;
LAB_001000e0:
      lVar11 = lVar11 * 2;
      StringName::operator=((StringName_conflict *)(param_5 + (lVar14 + param_1) * 8),this);
      lVar14 = lVar9;
    } while (lVar11 < param_3);
    pSVar13 = this;
    if (lVar11 == param_3) goto LAB_00100548;
  }
  else {
    this = (StringName_conflict *)(param_5 + (param_2 + param_1) * 8);
    if (lVar11 != param_3) {
      StringName::StringName((StringName_conflict *)&local_48,param_4);
      goto LAB_00100322;
    }
LAB_00100548:
    lVar9 = lVar11 + -1;
    pSVar13 = (StringName_conflict *)(param_5 + (param_1 + lVar9) * 8);
    StringName::operator=(this,pSVar13);
  }
  StringName::StringName((StringName_conflict *)&local_48,param_4);
  lVar11 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
  this = pSVar13;
  while (param_2 < lVar9) {
    lVar14 = lVar11 >> 1;
    this = (StringName_conflict *)(param_5 + (param_1 + lVar14) * 8);
    lVar11 = *(long *)this;
    if (lVar11 == 0) {
      if (local_48 != 0) {
        pbVar10 = *(byte **)(local_48 + 8);
        uVar3 = 0;
        uVar8 = 0;
        pbVar12 = &_LC0;
        if (pbVar10 != (byte *)0x0) goto LAB_001003e3;
LAB_00100385:
        uVar8 = **(uint **)(local_48 + 0x10);
        if (uVar8 != 0 || uVar3 != 0) {
          lVar11 = 0;
          while (uVar3 != 0) {
            if (uVar8 == 0) goto LAB_00100318;
            if (uVar3 < uVar8) break;
            if (uVar8 < uVar3) goto LAB_00100318;
            uVar3 = (uint)(char)pbVar12[lVar11 + 1];
            uVar8 = (*(uint **)(local_48 + 0x10))[lVar11 + 1];
            lVar11 = lVar11 + 1;
            if (uVar3 == 0 && uVar8 == 0) goto LAB_00100318;
          }
          goto LAB_001002e0;
        }
      }
LAB_00100318:
      this = (StringName_conflict *)(param_5 + (lVar9 + param_1) * 8);
      break;
    }
    pbVar12 = *(byte **)(lVar11 + 8);
    if (local_48 == 0) {
      uVar8 = 0;
      pbVar10 = &_LC0;
      if (pbVar12 != (byte *)0x0) {
        bVar4 = *pbVar12;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC0;
        uVar3 = 0;
        goto LAB_001003e9;
      }
LAB_0010044a:
      uVar3 = **(uint **)(lVar11 + 0x10);
      if (uVar3 == 0 && uVar8 == 0) goto LAB_00100318;
      lVar6 = 0;
      while (uVar3 != 0) {
        if (uVar8 == 0) goto LAB_00100318;
        if (uVar3 < uVar8) break;
        if (uVar8 < uVar3) goto LAB_00100318;
        uVar3 = (*(uint **)(lVar11 + 0x10))[lVar6 + 1];
        uVar8 = (uint)(char)pbVar10[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar3 == 0 && uVar8 == 0) goto LAB_00100318;
      }
    }
    else {
      pbVar10 = *(byte **)(local_48 + 8);
      if (pbVar12 == (byte *)0x0) {
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_0010044a;
        }
        uVar8 = **(uint **)(local_48 + 0x10);
        uVar3 = **(uint **)(lVar11 + 0x10);
        if (uVar8 == 0 && uVar3 == 0) goto LAB_00100318;
        lVar6 = 4;
        while (uVar3 != 0) {
          if (uVar8 == 0) goto LAB_00100318;
          if (uVar3 < uVar8) break;
          if (uVar8 < uVar3) goto LAB_00100318;
          uVar3 = *(uint *)((long)*(uint **)(lVar11 + 0x10) + lVar6);
          uVar8 = *(uint *)((long)*(uint **)(local_48 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar3 == 0 && uVar8 == 0) {
            this = (StringName_conflict *)(param_5 + (param_1 + lVar9) * 8);
            goto LAB_00100322;
          }
        }
      }
      else {
        uVar3 = (uint)(char)*pbVar12;
        uVar8 = uVar3;
        if (pbVar10 == (byte *)0x0) goto LAB_00100385;
LAB_001003e3:
        uVar3 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_001003e9:
        if (bVar4 == 0) goto LAB_00100318;
        lVar11 = 1;
        while (uVar8 != 0) {
          if (uVar3 == 0) goto LAB_00100318;
          if (uVar8 < uVar3) break;
          if (uVar3 < uVar8) goto LAB_00100318;
          pbVar1 = pbVar12 + lVar11;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar11;
          uVar3 = (uint)(char)*pbVar2;
          lVar11 = lVar11 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00100318;
        }
      }
    }
LAB_001002e0:
    StringName::operator=((StringName_conflict *)(param_5 + (lVar9 + param_1) * 8),this);
    lVar11 = (lVar14 + -1) - (lVar14 + -1 >> 0x3f);
    lVar9 = lVar14;
  }
LAB_00100322:
  local_50 = (StringName_conflict *)&local_48;
  StringName::operator=(this,local_50);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<StringName, StringName::AlphCompare, true>::unguarded_linear_insert(long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
               (long param_1,StringName_conflict *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  StringName_conflict *pSVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  pSVar3 = (StringName_conflict *)(param_3 + -8 + param_1 * 8);
  lVar6 = *(long *)pSVar3;
  lVar5 = *(long *)param_2;
  do {
    if (lVar5 == 0) {
      if (lVar6 == 0) goto LAB_0010078b;
      pbVar10 = *(byte **)(lVar6 + 8);
      uVar8 = 0;
      pbVar11 = &_LC0;
LAB_00100691:
      if (pbVar10 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_0010078b;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_0010078b;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_0010078b;
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar9 == 0) goto LAB_0010078b;
        }
      }
      else {
        uVar9 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_001006ee:
        if (bVar4 == 0) goto LAB_0010078b;
        lVar6 = 1;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_0010078b;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_0010078b;
          pbVar1 = pbVar11 + lVar6;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar6;
          uVar9 = (uint)(char)*pbVar2;
          lVar6 = lVar6 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010078b;
        }
      }
    }
    else {
      pbVar11 = *(byte **)(lVar5 + 8);
      if (lVar6 == 0) {
        if (pbVar11 != (byte *)0x0) {
          bVar4 = *pbVar11;
          uVar8 = (uint)(char)bVar4;
          pbVar10 = &_LC0;
          uVar9 = 0;
          goto LAB_001006ee;
        }
        uVar8 = 0;
        pbVar10 = &_LC0;
LAB_00100607:
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_0010078b;
        lVar6 = 0;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_0010078b;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_0010078b;
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar10[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_0010078b;
        }
      }
      else {
        pbVar10 = *(byte **)(lVar6 + 8);
        if (pbVar11 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar11;
          goto LAB_00100691;
        }
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_00100607;
        }
        uVar8 = **(uint **)(lVar6 + 0x10);
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar8 == 0 && uVar9 == 0) goto LAB_0010078b;
        lVar7 = 4;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_0010078b;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_0010078b;
          uVar9 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
          uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
          lVar7 = lVar7 + 4;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_0010078b;
        }
      }
    }
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      param_1 = 1;
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_0010078b:
      StringName::operator=((StringName_conflict *)(param_3 + param_1 * 8),param_2);
      return;
    }
    StringName::operator=(pSVar3 + 8,pSVar3);
    lVar5 = *(long *)param_2;
    lVar6 = *(long *)(pSVar3 + -8);
    pSVar3 = pSVar3 + -8;
  } while( true );
}



/* SortArray<StringName, StringName::AlphCompare, true>::linear_insert(long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::linear_insert
               (long param_1,long param_2,StringName_conflict *param_3)

{
  StringName_conflict *this;
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  StringName_conflict *this_00;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  this = param_3 + param_1 * 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName_conflict *)&local_50,param_3 + param_2 * 8);
  if (local_50 == 0) {
    lVar4 = *(long *)this;
    if (lVar4 != 0) {
      pbVar8 = *(byte **)(lVar4 + 8);
      uVar6 = 0;
      pbVar9 = &_LC0;
LAB_00100968:
      if (pbVar8 == (byte *)0x0) {
        uVar7 = **(uint **)(lVar4 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 0;
          do {
            if (uVar6 == 0) goto LAB_001008c0;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_001008c0;
            if (uVar7 < uVar6) break;
            uVar6 = (uint)(char)pbVar9[lVar5 + 1];
            uVar7 = (*(uint **)(lVar4 + 0x10))[lVar5 + 1];
            lVar5 = lVar5 + 1;
          } while (uVar6 != 0 || uVar7 != 0);
        }
      }
      else {
        uVar7 = (uint)(char)*pbVar8;
        bVar3 = *pbVar8 | (byte)uVar6;
LAB_00100a10:
        if (bVar3 != 0) {
          lVar4 = 1;
          do {
            if (uVar6 == 0) goto LAB_001008c0;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_001008c0;
            if (uVar7 < uVar6) break;
            pbVar1 = pbVar9 + lVar4;
            uVar6 = (uint)(char)*pbVar1;
            pbVar2 = pbVar8 + lVar4;
            uVar7 = (uint)(char)*pbVar2;
            lVar4 = lVar4 + 1;
          } while (*pbVar1 != 0 || *pbVar2 != 0);
        }
      }
    }
  }
  else {
    lVar4 = *(long *)this;
    pbVar9 = *(byte **)(local_50 + 8);
    if (lVar4 == 0) {
      if (pbVar9 != (byte *)0x0) {
        bVar3 = *pbVar9;
        uVar6 = (uint)(char)bVar3;
        pbVar8 = &_LC0;
        uVar7 = 0;
        goto LAB_00100a10;
      }
      uVar6 = 0;
      pbVar8 = &_LC0;
    }
    else {
      pbVar8 = *(byte **)(lVar4 + 8);
      if (pbVar9 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar9;
        goto LAB_00100968;
      }
      if (pbVar8 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar4 + 0x10);
        uVar7 = **(uint **)(local_50 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 4;
          do {
            if (uVar7 == 0) goto LAB_001008c0;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_001008c0;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(local_50 + 0x10) + lVar5);
            uVar6 = *(uint *)((long)*(uint **)(lVar4 + 0x10) + lVar5);
            lVar5 = lVar5 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_001009b8;
      }
      uVar6 = (uint)(char)*pbVar8;
    }
    uVar7 = **(uint **)(local_50 + 0x10);
    if (uVar6 != 0 || uVar7 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_001008c0;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_001008c0;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(local_50 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar8[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
LAB_001009b8:
  StringName::StringName((StringName_conflict *)&local_48,(StringName_conflict *)&local_50);
  unguarded_linear_insert(param_2,(StringName_conflict *)&local_48,param_3);
  if (StringName::configured == '\0') goto LAB_00100906;
  if (local_48 != 0) {
    StringName::unref();
    goto LAB_001008f2;
  }
  goto LAB_001008f6;
LAB_001008c0:
  this_00 = param_3 + param_2 * 8;
  if (param_1 < param_2) {
    do {
      param_2 = param_2 + -1;
      StringName::operator=(this_00,this_00 + -8);
      this_00 = this_00 + -8;
    } while (param_1 != param_2);
  }
  StringName::operator=(this,(StringName_conflict *)&local_50);
LAB_001008f2:
  if (StringName::configured == '\0') goto LAB_00100906;
LAB_001008f6:
  if (local_50 != 0) {
    StringName::unref();
  }
LAB_00100906:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::median_of_3(StringName const&, StringName
   const&, StringName const&) const [clone .isra.0] */

StringName_conflict *
SortArray<StringName,StringName::AlphCompare,true>::median_of_3
          (StringName_conflict *param_1,StringName_conflict *param_2,StringName_conflict *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  lVar8 = *(long *)param_1;
  lVar9 = *(long *)param_3;
  lVar13 = *(long *)param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC0;
    pbVar16 = &_LC0;
    if (lVar13 == 0) {
LAB_001013f0:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_00100cbe:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_00100cc4;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC0;
      if (*pbVar16 == 0) goto LAB_00100fb9;
LAB_00100e12:
      lVar8 = 1;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar6 == 0) break;
        if (uVar5 < uVar6) {
          return param_1;
        }
        if (uVar6 < uVar5) break;
        pbVar2 = pbVar16 + lVar8;
        uVar5 = (uint)(char)*pbVar2;
        pbVar1 = pbVar17 + lVar8;
        uVar6 = (uint)(char)*pbVar1;
        lVar8 = lVar8 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC0;
LAB_00100c42:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_00100d30:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x00100d78;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x00100d78;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_00100ca8;
        }
        goto LAB_001013f0;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x00100d78;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x00100d78;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00100ca8;
      }
      if (lVar9 == 0) goto LAB_00101011;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_00100cc4:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_00100e09;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_001012f6;
      lVar8 = 0;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar4 == 0) break;
        if (uVar5 < uVar4) {
          return param_1;
        }
        if (uVar4 < uVar5) break;
        uVar5 = (uint)(char)pbVar16[lVar8 + 1];
        uVar4 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_00100fa0:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_001012ff:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_2;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_00101186:
      uVar4 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_3;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if (uVar4 < uVar12) {
            return param_3;
          }
          if (uVar12 < uVar4) {
            return param_2;
          }
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_001011e8:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 < uVar6) {
          return param_3;
        }
        if (uVar6 < uVar4) break;
        uVar4 = (uint)(char)pbVar15[lVar8 + 1];
        uVar6 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar6 == 0) {
          return param_2;
        }
      }
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC0;
        goto LAB_00100d30;
      }
      uVar4 = 0;
      pbVar15 = &_LC0;
LAB_00100b29:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x00100d78;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x00100d78;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_00100ca8:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_00100cbe;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_001010a8:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_00101363;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
        uVar12 = *puVar10;
        uVar6 = uVar12 | uVar4;
        if (uVar6 != 0) {
          lVar8 = 4;
          do {
            if (uVar4 == 0) {
              return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
              return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_00100fa0;
        }
LAB_001012f6:
        if (pbVar15 != (byte *)0x0) goto LAB_001011e8;
        goto LAB_001012ff;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_001013c1;
      }
LAB_00101011:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC0;
LAB_00100e09:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_00100e12;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_00100c42;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_00100b29;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_00100f18:
            pbVar16 = (byte *)0x0;
            goto joined_r0x00100d78;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_00100f18;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_00100ca8;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_001010a8;
      }
LAB_001013c1:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC0;
      uVar6 = uVar4;
LAB_00101363:
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) {
            return param_1;
          }
          if (uVar12 < uVar4) break;
          uVar4 = puVar7[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00100fa0;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_00101186;
  }
LAB_00100fb9:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
    uVar4 = (uint)(char)bVar11;
    if (uVar4 == 0) {
      return param_3;
    }
    if (uVar12 == 0) {
      return param_2;
    }
    if (uVar4 < uVar12) {
      return param_3;
    }
    if (uVar12 < uVar4) break;
    bVar11 = pbVar15[lVar8];
    pbVar16 = pbVar17 + lVar8;
    uVar12 = (uint)(char)*pbVar16;
    lVar8 = lVar8 + 1;
    if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
    }
  }
  return param_2;
joined_r0x00100d78:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC0;
    if (pbVar15 != (byte *)0x0) goto LAB_00100e67;
LAB_00100d94:
    uVar6 = **(uint **)(lVar13 + 0x10);
    uVar4 = uVar6 | uVar12;
    if (uVar4 != 0) {
      lVar14 = 0;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar12 == 0) break;
        if (uVar6 < uVar12) {
          return param_2;
        }
        if (uVar12 < uVar6) break;
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_00100f30;
    }
LAB_001013fe:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_0010111e;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_00100d94;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_00101299;
      lVar14 = 4;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar6 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar6) break;
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
        uVar6 = (uint)(char)*pbVar15;
        uVar4 = *puVar7;
        uVar12 = uVar4 | uVar6;
        if (uVar12 != 0) {
          lVar13 = 0;
          do {
            if (uVar6 == 0) {
              return param_2;
            }
            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
              return param_2;
            }
            if (uVar4 < uVar6) break;
            uVar6 = (uint)(char)pbVar15[lVar13 + 1];
            uVar4 = puVar7[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_00100f30;
        }
LAB_00101299:
        if (pbVar16 == (byte *)0x0) goto LAB_0010129e;
        goto LAB_00101246;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_00100e67:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_001013fe;
      lVar13 = 1;
      do {
        uVar12 = (uint)(char)bVar3;
        if (uVar12 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar12 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar12) break;
        bVar3 = pbVar15[lVar13];
        pbVar2 = pbVar17 + lVar13;
        uVar4 = (uint)(char)*pbVar2;
        lVar13 = lVar13 + 1;
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_00100f30:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_0010129e:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_0010111e:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
        if (uVar12 == 0) {
          return param_3;
        }
        if (uVar4 == 0) {
          return param_1;
        }
        if (uVar12 < uVar4) {
          return param_3;
        }
        if (uVar4 < uVar12) break;
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_00101246:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar4 == 0 && uVar12 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar12 == 0) {
          return param_1;
        }
        if (uVar4 < uVar12) {
          return param_3;
        }
        if (uVar12 < uVar4) break;
        uVar4 = (uint)(char)pbVar16[lVar8 + 1];
        uVar12 = puVar7[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar12 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    bVar11 = *pbVar17;
    uVar4 = (uint)(char)bVar11;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0 && bVar11 == 0) {
    return param_1;
  }
  lVar8 = 1;
  while( true ) {
    uVar12 = (uint)(char)bVar3;
    if (uVar12 == 0) {
      return param_3;
    }
    if (uVar4 == 0) {
      return param_1;
    }
    if (uVar12 < uVar4) {
      return param_3;
    }
    if (uVar4 < uVar12) break;
    bVar3 = pbVar16[lVar8];
    pbVar15 = pbVar17 + lVar8;
    uVar4 = (uint)(char)*pbVar15;
    lVar8 = lVar8 + 1;
    if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
    }
  }
  return param_1;
}



/* SortArray<StringName, StringName::AlphCompare, true>::partitioner(long, long, StringName,
   StringName*) const [clone .isra.0] */

long SortArray<StringName,StringName::AlphCompare,true>::partitioner
               (long param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  byte *pbVar13;
  long *plVar14;
  
  lVar10 = *param_3;
  lVar3 = *(long *)(param_4 + param_1 * 8);
  lVar9 = param_1;
  lVar8 = param_2;
joined_r0x0010149f:
  if (lVar3 == 0) {
    if (lVar10 == 0) goto LAB_001015c0;
    pbVar5 = *(byte **)(lVar10 + 8);
    uVar6 = 0;
    pbVar13 = &_LC0;
LAB_00101556:
    if (pbVar5 == (byte *)0x0) {
      uVar7 = **(uint **)(lVar10 + 0x10);
      if (uVar7 != 0 || uVar6 != 0) {
        lVar3 = 0;
        do {
          if (uVar6 == 0) goto LAB_00101520;
          if (uVar7 == 0) break;
          if (uVar6 < uVar7) goto LAB_00101520;
          if (uVar7 < uVar6) break;
          uVar6 = (uint)(char)pbVar13[lVar3 + 1];
          uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
          lVar3 = lVar3 + 1;
        } while (uVar6 != 0 || uVar7 != 0);
      }
      goto LAB_001015c0;
    }
    uVar7 = (uint)(char)*pbVar5;
    bVar12 = (byte)uVar6 | *pbVar5;
LAB_00101896:
    if (bVar12 != 0) {
      lVar3 = 1;
      do {
        if (uVar6 == 0) goto LAB_00101520;
        if (uVar7 == 0) break;
        if (uVar6 < uVar7) goto LAB_00101520;
        if (uVar7 < uVar6) break;
        pbVar1 = pbVar13 + lVar3;
        uVar6 = (uint)(char)*pbVar1;
        pbVar2 = pbVar5 + lVar3;
        uVar7 = (uint)(char)*pbVar2;
        lVar3 = lVar3 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar13 = *(byte **)(lVar3 + 8);
    if (lVar10 == 0) {
      if (pbVar13 != (byte *)0x0) {
        bVar12 = *pbVar13;
        uVar6 = (uint)(char)bVar12;
        uVar7 = 0;
        pbVar5 = &_LC0;
        goto LAB_00101896;
      }
      uVar6 = 0;
      pbVar5 = &_LC0;
    }
    else {
      pbVar5 = *(byte **)(lVar10 + 8);
      if (pbVar13 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar13;
        goto LAB_00101556;
      }
      if (pbVar5 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar10 + 0x10);
        uVar7 = **(uint **)(lVar3 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar4 = 4;
          do {
            if (uVar7 == 0) goto LAB_00101520;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00101520;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_001015c0;
      }
      uVar6 = (uint)(char)*pbVar5;
    }
    uVar7 = **(uint **)(lVar3 + 0x10);
    if (uVar7 != 0 || uVar6 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_00101520;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_00101520;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar5[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
  goto LAB_001015c0;
LAB_00101520:
  if (param_2 + -1 == lVar9) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar10 = *param_3;
LAB_001015c0:
    plVar11 = (long *)(param_4 + -8 + lVar8 * 8);
LAB_001015d0:
    lVar8 = lVar8 + -1;
    lVar3 = *plVar11;
    if (lVar10 != 0) {
      pbVar13 = *(byte **)(lVar10 + 8);
      do {
        if (lVar3 == 0) {
          if (pbVar13 != (byte *)0x0) {
            bVar12 = *pbVar13;
            uVar7 = (uint)(char)bVar12;
            pbVar5 = &_LC0;
            uVar6 = 0;
            goto LAB_0010177e;
          }
          uVar6 = 0;
          pbVar5 = &_LC0;
LAB_0010169a:
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar7 == 0 && uVar6 == 0) goto LAB_001017f8;
          lVar3 = 0;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_001017f8;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_001017f8;
            uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
            uVar6 = (uint)(char)pbVar5[lVar3 + 1];
            lVar3 = lVar3 + 1;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_001017f8;
          }
        }
        else {
          pbVar5 = *(byte **)(lVar3 + 8);
          if (pbVar13 != (byte *)0x0) goto LAB_001017c0;
          if (pbVar5 != (byte *)0x0) {
            uVar6 = (uint)(char)*pbVar5;
            goto LAB_0010169a;
          }
          uVar6 = **(uint **)(lVar3 + 0x10);
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar6 == 0 && uVar7 == 0) goto LAB_001017f8;
          lVar4 = 4;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_001017f8;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_001017f8;
            uVar7 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_001017f8;
          }
        }
        plVar14 = plVar11;
        if (param_1 == lVar8) goto LAB_001017d0;
        lVar3 = plVar11[-1];
        lVar8 = lVar8 + -1;
        plVar11 = plVar11 + -1;
      } while( true );
    }
    if (lVar3 != 0) {
      pbVar5 = *(byte **)(lVar3 + 8);
      uVar7 = 0;
      bVar12 = 0;
      pbVar13 = &_LC0;
      goto LAB_00101709;
    }
    goto LAB_001017f8;
  }
LAB_0010152e:
  lVar9 = lVar9 + 1;
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  goto joined_r0x0010149f;
LAB_001017c0:
  bVar12 = *pbVar13;
  uVar7 = (uint)(char)bVar12;
LAB_00101709:
  if (pbVar5 == (byte *)0x0) {
    uVar6 = **(uint **)(lVar3 + 0x10);
    if (uVar6 == 0 && uVar7 == 0) goto LAB_001017f8;
    lVar4 = 0;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_001017f8;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_001017f8;
      uVar7 = (uint)(char)pbVar13[lVar4 + 1];
      uVar6 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
      lVar4 = lVar4 + 1;
      if (uVar7 == 0 && uVar6 == 0) goto LAB_001017f8;
    }
  }
  else {
    uVar6 = (uint)(char)*pbVar5;
    bVar12 = bVar12 | *pbVar5;
LAB_0010177e:
    if (bVar12 == 0) goto LAB_001017f8;
    lVar3 = 1;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_001017f8;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_001017f8;
      pbVar1 = pbVar13 + lVar3;
      uVar7 = (uint)(char)*pbVar1;
      pbVar2 = pbVar5 + lVar3;
      uVar6 = (uint)(char)*pbVar2;
      lVar3 = lVar3 + 1;
      if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001017f8;
    }
  }
  plVar11 = plVar14 + -1;
  if (param_1 == lVar8) goto LAB_001017d0;
  goto LAB_001015d0;
LAB_001017d0:
  plVar11 = plVar14;
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_001017f8:
  if (lVar8 <= lVar9) {
    return lVar9;
  }
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  *(undefined8 *)(param_4 + lVar9 * 8) = 0;
  if (*plVar11 != 0) {
    StringName::unref();
    *(long *)(param_4 + lVar9 * 8) = *plVar11;
    *plVar11 = 0;
  }
  if (lVar3 != 0) {
    StringName::unref();
    *plVar11 = lVar3;
  }
  lVar10 = *param_3;
  goto LAB_0010152e;
}



/* SortArray<StringName, StringName::AlphCompare, true>::partial_sort(long, long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::partial_sort
               (long param_1,long param_2,long param_3,StringName_conflict *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  StringName_conflict *pSVar13;
  long lVar14;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  lVar10 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar10 < 2) {
    if (param_2 <= param_3) goto LAB_00101c7b;
LAB_00101a66:
    lVar14 = param_3;
LAB_00101aa0:
    lVar6 = *(long *)(param_4 + lVar14 * 8);
    lVar5 = *(long *)(param_4 + param_1 * 8);
    if (lVar6 == 0) {
      if (lVar5 != 0) {
        pbVar11 = *(byte **)(lVar5 + 8);
        uVar8 = 0;
        pbVar12 = &_LC0;
LAB_00101cb4:
        if (pbVar11 == (byte *)0x0) {
          uVar9 = **(uint **)(lVar5 + 0x10);
          if (uVar9 != 0 || uVar8 != 0) {
            lVar6 = 0;
            do {
              if (uVar8 == 0) goto LAB_00101b20;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_00101b20;
              if (uVar9 < uVar8) break;
              uVar8 = (uint)(char)pbVar12[lVar6 + 1];
              uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
              lVar6 = lVar6 + 1;
            } while (uVar8 != 0 || uVar9 != 0);
          }
        }
        else {
          uVar9 = (uint)(char)*pbVar11;
          bVar4 = (byte)uVar8 | *pbVar11;
LAB_00101d16:
          if (bVar4 != 0) {
            lVar6 = 1;
            do {
              if (uVar8 == 0) goto LAB_00101b20;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_00101b20;
              if (uVar9 < uVar8) break;
              pbVar1 = pbVar12 + lVar6;
              uVar8 = (uint)(char)*pbVar1;
              pbVar2 = pbVar11 + lVar6;
              uVar9 = (uint)(char)*pbVar2;
              lVar6 = lVar6 + 1;
            } while (*pbVar1 != 0 || *pbVar2 != 0);
          }
        }
      }
    }
    else {
      pbVar12 = *(byte **)(lVar6 + 8);
      if (lVar5 == 0) {
        if (pbVar12 != (byte *)0x0) {
          bVar4 = *pbVar12;
          uVar8 = (uint)(char)bVar4;
          uVar9 = 0;
          pbVar11 = &_LC0;
          goto LAB_00101d16;
        }
        uVar8 = 0;
        pbVar11 = &_LC0;
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar12 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar12;
          goto LAB_00101cb4;
        }
        if (pbVar11 == (byte *)0x0) {
          uVar8 = **(uint **)(lVar5 + 0x10);
          uVar9 = **(uint **)(lVar6 + 0x10);
          if (uVar8 != 0 || uVar9 != 0) {
            lVar7 = 4;
            do {
              if (uVar9 == 0) goto LAB_00101b20;
              if (uVar8 == 0) break;
              if (uVar9 < uVar8) goto LAB_00101b20;
              if (uVar8 < uVar9) break;
              uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
              uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
              lVar7 = lVar7 + 4;
            } while (uVar9 != 0 || uVar8 != 0);
          }
          goto LAB_00101ba8;
        }
        uVar8 = (uint)(char)*pbVar11;
      }
      uVar9 = **(uint **)(lVar6 + 0x10);
      if (uVar9 != 0 || uVar8 != 0) {
        lVar5 = 0;
        do {
          if (uVar9 == 0) goto LAB_00101b20;
          if (uVar8 == 0) break;
          if (uVar9 < uVar8) goto LAB_00101b20;
          if (uVar8 < uVar9) break;
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
        } while (uVar9 != 0 || uVar8 != 0);
      }
    }
    goto LAB_00101ba8;
  }
  lVar14 = lVar10 + -2 >> 1;
  pSVar13 = param_4 + (param_1 + lVar14) * 8;
  while( true ) {
    StringName::StringName((StringName_conflict *)&local_48,pSVar13);
    adjust_heap(param_1,lVar14,lVar10,(StringName_conflict *)&local_48,param_4);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    if (lVar14 == 0) break;
    lVar14 = lVar14 + -1;
  }
  if (param_3 < param_2) goto LAB_00101a66;
  goto LAB_00101bdb;
LAB_00101b20:
  StringName::StringName((StringName_conflict *)&local_50,param_4 + lVar14 * 8);
  StringName::operator=(param_4 + lVar14 * 8,param_4 + param_1 * 8);
  StringName::StringName((StringName_conflict *)&local_48,(StringName_conflict *)&local_50);
  adjust_heap(param_1,0,lVar10,(StringName_conflict *)&local_48,param_4);
  if ((StringName::configured != '\0') &&
     (((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_50 != 0)))
     ) {
    StringName::unref();
  }
LAB_00101ba8:
  lVar14 = lVar14 + 1;
  if (param_2 <= lVar14) goto code_r0x00101bb5;
  goto LAB_00101aa0;
code_r0x00101bb5:
  if (lVar10 < 2) goto LAB_00101c7b;
LAB_00101bdb:
  pSVar13 = param_4 + param_3 * 8 + -8;
  lVar10 = (param_3 + -1) - param_1;
  do {
    StringName::StringName((StringName_conflict *)&local_50,pSVar13);
    StringName::operator=(pSVar13,param_4 + param_1 * 8);
    StringName::StringName((StringName_conflict *)&local_48,(StringName_conflict *)&local_50);
    adjust_heap(param_1,0,lVar10,(StringName_conflict *)&local_48,param_4);
    if (((StringName::configured != '\0') &&
        ((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_50 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    bVar3 = 1 < lVar10;
    lVar10 = lVar10 + -1;
  } while (bVar3);
LAB_00101c7b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::introsort(long, long, StringName*, long)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::introsort
               (long param_1,long param_2,StringName_conflict *param_3,long param_4)

{
  long lVar1;
  StringName_conflict *pSVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  long local_138;
  long local_120;
  long local_100;
  long local_f8;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
LAB_001028ca:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_4 != 0) {
      lVar12 = param_2 * 8;
      lVar3 = param_2;
LAB_00101f12:
      param_4 = param_4 + -1;
      pSVar2 = (StringName_conflict *)
               median_of_3(param_3 + param_1 * 8,param_3 + ((lVar1 >> 1) + param_1) * 8,
                           param_3 + lVar12 + -8);
      StringName::StringName((StringName_conflict *)&local_48,pSVar2);
      param_2 = partitioner(param_1,lVar3,(StringName_conflict *)&local_48,param_3);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      lVar1 = lVar3 - param_2;
      if (0x10 < lVar1) {
        if (param_4 != 0) {
          lVar12 = param_4;
          lVar4 = lVar3;
LAB_00101fd1:
          do {
            lVar12 = lVar12 + -1;
            pSVar2 = (StringName_conflict *)
                     median_of_3(param_3 + param_2 * 8,param_3 + ((lVar1 >> 1) + param_2) * 8,
                                 param_3 + lVar4 * 8 + -8);
            StringName::StringName((StringName_conflict *)&local_48,pSVar2);
            lVar3 = partitioner(param_2,lVar4,(StringName_conflict *)&local_48,param_3);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) {
              if (lVar12 != 0) {
                lVar13 = lVar12;
                local_138 = lVar4;
LAB_00102092:
                do {
                  lVar13 = lVar13 + -1;
                  pSVar2 = (StringName_conflict *)
                           median_of_3(param_3 + lVar3 * 8,param_3 + ((lVar1 >> 1) + lVar3) * 8,
                                       param_3 + local_138 * 8 + -8);
                  StringName::StringName((StringName_conflict *)&local_48,pSVar2);
                  lVar4 = partitioner(lVar3,local_138,(StringName_conflict *)&local_48,param_3);
                  if ((StringName::configured != '\0') && (local_48 != 0)) {
                    StringName::unref();
                  }
                  lVar1 = local_138 - lVar4;
                  if (0x10 < lVar1) {
                    if (lVar13 != 0) {
                      lVar11 = lVar13;
LAB_0010214c:
                      do {
                        lVar11 = lVar11 + -1;
                        lVar9 = local_138 * 8;
                        pSVar2 = (StringName_conflict *)
                                 median_of_3(param_3 + lVar4 * 8,
                                             param_3 + ((lVar1 >> 1) + lVar4) * 8,
                                             param_3 + lVar9 + -8);
                        StringName::StringName((StringName_conflict *)&local_48,pSVar2);
                        lVar5 = partitioner(lVar4,local_138,(StringName_conflict *)&local_48,param_3
                                           );
                        if ((StringName::configured != '\0') && (local_48 != 0)) {
                          StringName::unref();
                        }
                        lVar1 = local_138 - lVar5;
                        if (0x10 < lVar1) {
                          lVar6 = local_138;
                          if (lVar11 != 0) {
                            lVar7 = local_138;
                            local_100 = lVar11;
                            do {
                              local_100 = local_100 + -1;
                              pSVar2 = (StringName_conflict *)
                                       median_of_3(param_3 + lVar5 * 8,
                                                   param_3 + ((lVar1 >> 1) + lVar5) * 8,
                                                   param_3 + lVar9 + -8);
                              StringName::StringName((StringName_conflict *)&local_48,pSVar2);
                              lVar6 = partitioner(lVar5,lVar7,(StringName_conflict *)&local_48,
                                                  param_3);
                              if ((StringName::configured != '\0') && (local_48 != 0)) {
                                StringName::unref();
                              }
                              lVar1 = lVar7 - lVar6;
                              if (0x10 < lVar1) {
                                if (local_100 != 0) {
                                  lVar8 = lVar7;
                                  local_120 = local_100;
                                  do {
                                    local_120 = local_120 + -1;
                                    pSVar2 = (StringName_conflict *)
                                             median_of_3(param_3 + lVar6 * 8,
                                                         param_3 + ((lVar1 >> 1) + lVar6) * 8,
                                                         param_3 + lVar9 + -8);
                                    StringName::StringName((StringName_conflict *)&local_48,pSVar2);
                                    lVar7 = partitioner(lVar6,lVar8,(StringName_conflict *)&local_48
                                                        ,param_3);
                                    if ((StringName::configured != '\0') && (local_48 != 0)) {
                                      StringName::unref();
                                    }
                                    lVar1 = lVar8 - lVar7;
                                    if (0x10 < lVar1) {
                                      if (local_120 == 0) {
LAB_0010269e:
                                        partial_sort(lVar7,lVar8,lVar8,param_3);
                                      }
                                      else {
                                        lVar9 = lVar8;
                                        local_138 = local_120;
                                        do {
                                          while( true ) {
                                            local_138 = local_138 + -1;
                                            lVar14 = lVar9 * 8;
                                            pSVar2 = (StringName_conflict *)
                                                     median_of_3(param_3 + lVar7 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar7) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName
                                                      ((StringName_conflict *)&local_48,pSVar2);
                                            lVar8 = partitioner(lVar7,lVar9,
                                                                (StringName_conflict *)&local_48,
                                                                param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (0x10 < lVar1) break;
LAB_0010260e:
                                            lVar1 = lVar8 - lVar7;
                                            if (lVar1 < 0x11) {
                                              lVar1 = lVar7 - lVar6;
                                              if (lVar1 < 0x11) goto LAB_001025c0;
                                              goto LAB_00102669;
                                            }
                                            lVar9 = lVar8;
                                            if (local_138 == 0) goto LAB_0010269e;
                                          }
                                          if (local_138 == 0) {
LAB_001025fd:
                                            partial_sort(lVar8,lVar9,lVar9,param_3);
                                            goto LAB_0010260e;
                                          }
                                          lVar10 = lVar9;
                                          local_f8 = local_138;
                                          while( true ) {
                                            local_f8 = local_f8 + -1;
                                            pSVar2 = (StringName_conflict *)
                                                     median_of_3(param_3 + lVar8 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar8) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName
                                                      ((StringName_conflict *)&local_48,pSVar2);
                                            lVar9 = partitioner(lVar8,lVar10,
                                                                (StringName_conflict *)&local_48,
                                                                param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar10 - lVar9;
                                            if (0x10 < lVar1) {
                                              if (local_f8 != 0) {
                                                lVar14 = local_f8;
                                                lVar15 = lVar10;
                                                do {
                                                  lVar14 = lVar14 + -1;
                                                  pSVar2 = (StringName_conflict *)
                                                           median_of_3(param_3 + lVar9 * 8,
                                                                       param_3 + ((lVar1 >> 1) +
                                                                                 lVar9) * 8,
                                                                       param_3 + lVar15 * 8 + -8);
                                                  StringName::StringName
                                                            ((StringName_conflict *)&local_48,pSVar2
                                                            );
                                                  lVar10 = partitioner(lVar9,lVar15,
                                                                       (StringName_conflict *)
                                                                       &local_48,param_3);
                                                  if ((StringName::configured != '\0') &&
                                                     (local_48 != 0)) {
                                                    StringName::unref();
                                                  }
                                                  introsort(lVar10,lVar15,param_3,lVar14);
                                                  lVar1 = lVar10 - lVar9;
                                                  if (lVar1 < 0x11) {
                                                    lVar1 = lVar9 - lVar8;
                                                    if (lVar1 < 0x11) goto LAB_0010260e;
                                                    goto LAB_00102594;
                                                  }
                                                  lVar15 = lVar10;
                                                } while (lVar14 != 0);
                                              }
                                              partial_sort(lVar9,lVar10,lVar10,param_3);
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (lVar1 < 0x11) break;
                                            if (local_f8 == 0) goto LAB_001025fd;
LAB_00102594:
                                            lVar14 = lVar9 * 8;
                                            lVar10 = lVar9;
                                          }
                                          lVar1 = lVar8 - lVar7;
                                          lVar9 = lVar8;
                                        } while (0x10 < lVar1);
                                      }
                                    }
                                    lVar1 = lVar7 - lVar6;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar6 - lVar5;
                                      if (lVar1 < 0x11) goto LAB_001026e7;
                                      goto LAB_001025e1;
                                    }
                                    if (local_120 == 0) break;
LAB_00102669:
                                    lVar9 = lVar7 * 8;
                                    lVar8 = lVar7;
                                  } while( true );
                                }
                                partial_sort(lVar6,lVar7,lVar7,param_3);
                              }
LAB_001025c0:
                              lVar1 = lVar6 - lVar5;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar5 - lVar4;
                                local_138 = lVar5;
                                if (lVar1 < 0x11) goto LAB_001027a0;
                                goto LAB_0010214c;
                              }
                              if (local_100 == 0) break;
LAB_001025e1:
                              lVar9 = lVar6 * 8;
                              lVar7 = lVar6;
                            } while( true );
                          }
                          partial_sort(lVar5,lVar6,lVar6,param_3);
                        }
LAB_001026e7:
                        lVar1 = lVar5 - lVar4;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar4 - lVar3;
                          local_138 = lVar4;
                          if (lVar1 < 0x11) goto LAB_00102831;
                          goto LAB_00102092;
                        }
                        local_138 = lVar5;
                      } while (lVar11 != 0);
                    }
                    partial_sort(lVar4,local_138,local_138,param_3);
                  }
LAB_001027a0:
                  lVar1 = lVar4 - lVar3;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar3 - param_2;
                    lVar4 = lVar3;
                    if (lVar1 < 0x11) goto LAB_001028be;
                    goto LAB_00101fd1;
                  }
                  local_138 = lVar4;
                } while (lVar13 != 0);
              }
              partial_sort(lVar3,lVar4,lVar4,param_3);
            }
LAB_00102831:
            lVar1 = lVar3 - param_2;
            if (lVar1 < 0x11) goto LAB_001028be;
            lVar4 = lVar3;
            if (lVar12 == 0) break;
          } while( true );
        }
        partial_sort(param_2,lVar3,lVar3,param_3);
      }
      lVar1 = param_2 - param_1;
      if (0x10 < lVar1) {
        if (param_4 != 0) goto LAB_0010289d;
        goto LAB_001028fc;
      }
      goto LAB_001028ca;
    }
LAB_001028fc:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      partial_sort(param_1,param_2,param_2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001028be:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) goto LAB_001028ca;
LAB_0010289d:
  lVar12 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_00101f12;
}



/* InstanceUniforms::free(RID) */

void __thiscall InstanceUniforms::free(InstanceUniforms *this,long param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 0) {
    _err_print_error(&_LC7,"servers/rendering/instance_uniforms.cpp",0x24,
                     "Condition \"p_self.is_null()\" is true.",0,0);
    return;
  }
  if (*(int *)this != -1) {
    (**(code **)(*RenderingServerGlobals::material_storage + 0x60))();
    *(undefined4 *)this = 0xffffffff;
  }
  for (puVar1 = *(undefined8 **)(this + 0x20); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  return;
}



/* InstanceUniforms::materials_start() */

void __thiscall InstanceUniforms::materials_start(InstanceUniforms *this)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(this + 0x20); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  return;
}



/* InstanceUniforms::materials_finish(RID) */

ulong __thiscall InstanceUniforms::materials_finish(InstanceUniforms *this,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 unaff_R12;
  ulong uVar4;
  
  if (param_2 == 0) {
    _err_print_error("materials_finish","servers/rendering/instance_uniforms.cpp",0x4d,
                     "Condition \"p_self.is_null()\" is true. Returning: false",0,0);
    return 0;
  }
  iVar1 = *(int *)this;
  if (*(int *)(this + 0x34) == 0) {
    if (iVar1 == -1) {
      return 0;
    }
    free();
    uVar4 = 1;
  }
  else {
    uVar4 = CONCAT71((int7)((ulong)unaff_R12 >> 8),iVar1 == -1);
    if (iVar1 == -1) {
      uVar2 = (**(code **)(*RenderingServerGlobals::material_storage + 0x58))();
      *(undefined4 *)this = uVar2;
    }
    plVar3 = *(long **)(this + 0x20);
    if (plVar3 != (long *)0x0) {
      do {
        if ((int)plVar3[3] != -1) {
          (**(code **)(*RenderingServerGlobals::material_storage + 0x68))
                    (RenderingServerGlobals::material_storage,param_2,(int)plVar3[3],plVar3 + 4,
                     *(undefined4 *)((long)plVar3 + 0x1c));
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
      return uVar4 & 0xffffffff;
    }
  }
  return uVar4 & 0xffffffff;
}



/* InstanceUniforms::get(StringName const&) const */

StringName_conflict * InstanceUniforms::get(StringName_conflict *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long *in_RDX;
  long lVar13;
  long in_RSI;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  if ((*(long *)(in_RSI + 0x10) != 0) && (*(int *)(in_RSI + 0x34) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x30) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x30) * 8);
    if (*in_RDX == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*in_RDX + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(in_RSI + 0x18) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(in_RSI + 0x10) + lVar13 * 8) + 0x10) == *in_RDX)) {
          Variant::Variant((Variant *)param_1,
                           (Variant *)
                           (*(long *)(*(long *)(in_RSI + 0x10) + (ulong)uVar12 * 8) + 0x20));
          return param_1;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(in_RSI + 0x18) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  return param_1;
}



/* InstanceUniforms::get_default(StringName const&) const */

StringName_conflict * InstanceUniforms::get_default(StringName_conflict *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long *in_RDX;
  long lVar13;
  long in_RSI;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  if ((*(long *)(in_RSI + 0x10) != 0) && (*(int *)(in_RSI + 0x34) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x30) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x30) * 8);
    if (*in_RDX == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*in_RDX + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(in_RSI + 0x18) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(in_RSI + 0x10) + lVar13 * 8) + 0x10) == *in_RDX)) {
          Variant::Variant((Variant *)param_1,
                           (Variant *)
                           (*(long *)(*(long *)(in_RSI + 0x10) + (ulong)uVar12 * 8) + 0x38));
          return param_1;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(in_RSI + 0x18) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  return param_1;
}



/* InstanceUniforms::_init_param(InstanceUniforms::Item&,
   RendererMaterialStorage::InstanceShaderParam const&) const */

void __thiscall
InstanceUniforms::_init_param(InstanceUniforms *this,Item *param_1,InstanceShaderParam *param_2)

{
  Variant *this_00;
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined4 local_30;
  undefined8 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)param_2;
  if (*(long *)(param_1 + 0x40) != *(long *)(param_2 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x40),(CowData *)(param_2 + 8));
  }
  StringName::operator=
            ((StringName_conflict *)(param_1 + 0x48),(StringName_conflict *)(param_2 + 0x10));
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x18);
  if (*(long *)(param_1 + 0x58) != *(long *)(param_2 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0x58),(CowData *)(param_2 + 0x20));
  }
  this_00 = (Variant *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x28);
  Variant::operator=(this_00,(Variant *)(param_2 + 0x38));
  if (*(int *)(param_1 + 0x20) == 0) {
    local_30 = 0;
    local_2c = 0;
    Variant::construct(*(undefined4 *)(param_1 + 0x38),this_00,0,0,&local_30);
  }
  if (*(int *)(param_1 + 8) == 0) {
    Variant::operator=((Variant *)(param_1 + 8),this_00);
  }
  if (((*(int *)(param_1 + 0x50) == 6) && (*(long *)(param_1 + 0x58) != 0)) &&
     (iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x58) + -8), iVar2 != 0)) {
    if (iVar2 == 6) {
      *(undefined4 *)(param_1 + 4) = 2;
    }
    else if (iVar2 == 8) {
      *(undefined4 *)(param_1 + 4) = 3;
    }
    else if (iVar2 == 4) {
      *(undefined4 *)(param_1 + 4) = 1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InstanceUniforms::_invalidate_items() */

void __thiscall InstanceUniforms::_invalidate_items(InstanceUniforms *this)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(this + 0x20); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  return;
}



/* InstanceUniforms::set(RID, StringName const&, Variant const&) */

void __thiscall
InstanceUniforms::set
          (InstanceUniforms *this,long param_2,StringName_conflict *param_3,Variant *param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  undefined4 *puVar14;
  char *pcVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int local_a0 [2];
  undefined1 local_98 [16];
  int local_88 [2];
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  long local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar18 = 0x6f;
      pcVar15 = "Condition \"p_self.is_null()\" is true.";
LAB_00103292:
      _err_print_error(&_LC22,"servers/rendering/instance_uniforms.cpp",uVar18,pcVar15,0,0);
      return;
    }
  }
  else if (*(int *)param_4 == 0x18) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar18 = 0x70;
      pcVar15 = "Condition \"p_value.get_type() == Variant::OBJECT\" is true.";
      goto LAB_00103292;
    }
  }
  else {
    if ((*(long *)(this + 0x10) != 0) && (*(int *)(this + 0x34) != 0)) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
      uVar21 = CONCAT44(0,uVar2);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
      if (*(long *)param_3 == 0) {
        uVar13 = StringName::get_empty_hash();
      }
      else {
        uVar13 = *(uint *)(*(long *)param_3 + 0x20);
      }
      if (uVar13 == 0) {
        uVar13 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar13 * lVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar21;
      lVar17 = SUB168(auVar4 * auVar8,8);
      uVar19 = *(uint *)(*(long *)(this + 0x18) + lVar17 * 4);
      uVar16 = SUB164(auVar4 * auVar8,8);
      if (uVar19 != 0) {
        uVar20 = 0;
        do {
          if ((uVar19 == uVar13) &&
             (*(long *)(*(long *)(*(long *)(this + 0x10) + lVar17 * 8) + 0x10) == *(long *)param_3))
          {
            lVar3 = *(long *)(*(long *)(this + 0x10) + (ulong)uVar16 * 8);
            Variant::operator=((Variant *)(lVar3 + 0x20),param_4);
            if (*(int *)(lVar3 + 0x18) == -1) goto LAB_00103226;
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010309c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*RenderingServerGlobals::material_storage + 0x68))
                        (RenderingServerGlobals::material_storage,param_2,*(int *)(lVar3 + 0x18),
                         (Variant *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x1c));
              return;
            }
            goto LAB_001032fe;
          }
          uVar20 = uVar20 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar16 + 1) * lVar3;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar21;
          lVar17 = SUB168(auVar5 * auVar9,8);
          uVar19 = *(uint *)(*(long *)(this + 0x18) + lVar17 * 4);
          uVar16 = SUB164(auVar5 * auVar9,8);
        } while ((uVar19 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar19 * lVar3, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar2 + uVar16) - SUB164(auVar6 * auVar10,8)) * lVar3,
                auVar11._8_8_ = 0, auVar11._0_8_ = uVar21, uVar20 <= SUB164(auVar7 * auVar11,8)));
      }
    }
    uVar18 = _LC24;
    local_a0[0] = 0;
    local_98 = (undefined1  [16])0x0;
    local_80 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_70 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 6;
    Variant::operator=((Variant *)local_a0,param_4);
    puVar14 = (undefined4 *)
              HashMap<StringName,InstanceUniforms::Item,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InstanceUniforms::Item>>>
              ::operator[]((HashMap<StringName,InstanceUniforms::Item,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InstanceUniforms::Item>>>
                            *)(this + 8),param_3);
    local_a8 = (undefined4)uVar18;
    *puVar14 = local_a8;
    uStack_a4 = (undefined4)((ulong)uVar18 >> 0x20);
    puVar14[1] = uStack_a4;
    Variant::operator=((Variant *)(puVar14 + 2),(Variant *)local_a0);
    Variant::operator=((Variant *)(puVar14 + 8),(Variant *)local_88);
    puVar14[0xe] = local_70;
    if (*(long *)(puVar14 + 0x10) != local_68._0_8_) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar14 + 0x10),(CowData *)local_68);
    }
    StringName::operator=
              ((StringName_conflict *)(puVar14 + 0x12),(StringName_conflict *)(local_68 + 8));
    puVar14[0x14] = local_58;
    if (*(long *)(puVar14 + 0x16) != local_50) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar14 + 0x16),(CowData *)&local_50);
    }
    lVar3 = local_50;
    puVar14[0x18] = local_48;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_68._8_8_ != 0)) {
      StringName::unref();
    }
    uVar18 = local_68._0_8_;
    if (local_68._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_68._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_68._8_8_;
        local_68 = auVar12 << 0x40;
        Memory::free_static((void *)(uVar18 + -0x10),false);
      }
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_a0[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_00103226:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_001032fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InstanceUniforms::materials_append(RID) */

void __thiscall InstanceUniforms::materials_append(InstanceUniforms *this,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char *pcVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  InstanceShaderParam *pIVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  long *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_a0 [2];
  undefined1 local_98 [16];
  int local_88 [2];
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  long local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("materials_append","servers/rendering/instance_uniforms.cpp",0x33,
                       "Condition \"p_material.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    local_d8 = (long *)0x0;
    (**(code **)(*RenderingServerGlobals::material_storage + 0x120))
              (RenderingServerGlobals::material_storage,param_2,
               (List<RendererMaterialStorage::InstanceShaderParam,DefaultAllocator> *)&local_d8);
    if ((local_d8 != (long *)0x0) &&
       (pIVar19 = (InstanceShaderParam *)*local_d8, pIVar19 != (InstanceShaderParam *)0x0)) {
      do {
        StringName::StringName((StringName_conflict *)&local_d0,(String *)(pIVar19 + 8),false);
        if ((*(long *)(this + 0x10) != 0) && (*(int *)(this + 0x34) != 0)) {
          uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
          uVar22 = CONCAT44(0,uVar2);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
          if (local_d0 == 0) {
            uVar14 = StringName::get_empty_hash();
          }
          else {
            uVar14 = *(uint *)(local_d0 + 0x20);
          }
          if (uVar14 == 0) {
            uVar14 = 1;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar14 * lVar3;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar22;
          lVar17 = SUB168(auVar4 * auVar8,8);
          uVar20 = *(uint *)(*(long *)(this + 0x18) + lVar17 * 4);
          uVar16 = SUB164(auVar4 * auVar8,8);
          if (uVar20 != 0) {
            uVar21 = 0;
            do {
              if ((uVar20 == uVar14) &&
                 (*(long *)(*(long *)(*(long *)(this + 0x10) + lVar17 * 8) + 0x10) == local_d0)) {
                lVar3 = *(long *)(*(long *)(this + 0x10) + (ulong)uVar16 * 8);
                if (*(int *)(lVar3 + 0x18) == -1) {
                  _init_param(this,(Item *)(lVar3 + 0x18),pIVar19);
                  goto LAB_001035a0;
                }
                if (*(int *)(pIVar19 + 0x30) == *(int *)(lVar3 + 0x18)) {
                  if (*(int *)(lVar3 + 0x50) == *(int *)pIVar19) goto LAB_001035a0;
                  local_c0 = 0;
                  local_b8 = 
                  "\', but they do it with different data types. Only the first one (in order) will display correctly."
                  ;
                  local_b0 = 0x62;
                  String::parse_latin1((StrRange *)&local_c0);
                  operator+((char *)&local_c8,
                            (String *)
                            "More than one material in instance export the same instance shader uniform \'"
                           );
                  String::operator+((String *)&local_b8,(String *)&local_c8);
                  uVar18 = 0x41;
                }
                else {
                  local_c0 = 0;
                  local_b8 = 
                  "\', but they do it with different indices. Only the first one (in order) will display correctly."
                  ;
                  local_b0 = 0x5f;
                  String::parse_latin1((StrRange *)&local_c0);
                  operator+((char *)&local_c8,
                            (String *)
                            "More than one material in instance export the same instance shader uniform \'"
                           );
                  String::operator+((String *)&local_b8,(String *)&local_c8);
                  uVar18 = 0x3e;
                }
                _err_print_error("materials_append","servers/rendering/instance_uniforms.cpp",uVar18
                                 ,&local_b8,0,1);
                pcVar13 = local_b8;
                if (local_b8 != (char *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_b8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_b8 = (char *)0x0;
                    Memory::free_static(pcVar13 + -0x10,false);
                  }
                }
                lVar3 = local_c8;
                if (local_c8 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_c8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_c8 = 0;
                    Memory::free_static((void *)(lVar3 + -0x10),false);
                  }
                }
                lVar3 = local_c0;
                if (local_c0 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_c0 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_c0 = 0;
                    Memory::free_static((void *)(lVar3 + -0x10),false);
                  }
                }
                goto LAB_001035a0;
              }
              uVar21 = uVar21 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)(uVar16 + 1) * lVar3;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar22;
              lVar17 = SUB168(auVar5 * auVar9,8);
              uVar20 = *(uint *)(*(long *)(this + 0x18) + lVar17 * 4);
              uVar16 = SUB164(auVar5 * auVar9,8);
            } while ((uVar20 != 0) &&
                    (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar20 * lVar3, auVar10._8_8_ = 0,
                    auVar10._0_8_ = uVar22, auVar7._8_8_ = 0,
                    auVar7._0_8_ = (ulong)((uVar2 + uVar16) - SUB164(auVar6 * auVar10,8)) * lVar3,
                    auVar11._8_8_ = 0, auVar11._0_8_ = uVar22, uVar21 <= SUB164(auVar7 * auVar11,8))
                    );
          }
        }
        local_98 = (undefined1  [16])0x0;
        local_80 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_a8 = _LC24;
        local_a0[0] = 0;
        local_88[0] = 0;
        local_70 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 6;
        _init_param(this,(Item *)&local_a8,pIVar19);
        puVar15 = (undefined4 *)
                  HashMap<StringName,InstanceUniforms::Item,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InstanceUniforms::Item>>>
                  ::operator[]((HashMap<StringName,InstanceUniforms::Item,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InstanceUniforms::Item>>>
                                *)(this + 8),(StringName_conflict *)&local_d0);
        *puVar15 = (undefined4)local_a8;
        puVar15[1] = local_a8._4_4_;
        Variant::operator=((Variant *)(puVar15 + 2),(Variant *)local_a0);
        Variant::operator=((Variant *)(puVar15 + 8),(Variant *)local_88);
        puVar15[0xe] = local_70;
        if (*(long *)(puVar15 + 0x10) != local_68._0_8_) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar15 + 0x10),(CowData *)local_68);
        }
        StringName::operator=
                  ((StringName_conflict *)(puVar15 + 0x12),(StringName_conflict *)(local_68 + 8));
        puVar15[0x14] = local_58;
        if (*(long *)(puVar15 + 0x16) != local_50) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar15 + 0x16),(CowData *)&local_50);
        }
        lVar3 = local_50;
        puVar15[0x18] = local_48;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_68._8_8_ != 0)) {
          StringName::unref();
        }
        uVar18 = local_68._0_8_;
        if (local_68._0_8_ != 0) {
          LOCK();
          plVar1 = (long *)(local_68._0_8_ + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = local_68._8_8_;
            local_68 = auVar12 << 0x40;
            Memory::free_static((void *)(uVar18 + -0x10),false);
          }
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_a0[0]] != '\0') {
          Variant::_clear_internal();
        }
LAB_001035a0:
        if ((StringName::configured != '\0') && (local_d0 != 0)) {
          StringName::unref();
        }
        pIVar19 = *(InstanceShaderParam **)(pIVar19 + 0x50);
      } while (pIVar19 != (InstanceShaderParam *)0x0);
    }
    List<RendererMaterialStorage::InstanceShaderParam,DefaultAllocator>::~List
              ((List<RendererMaterialStorage::InstanceShaderParam,DefaultAllocator> *)&local_d8);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName_conflict *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName_conflict *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName_conflict *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName_conflict **)this = (StringName_conflict *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* InstanceUniforms::get_property_list(List<PropertyInfo, DefaultAllocator>&) const */

void __thiscall InstanceUniforms::get_property_list(InstanceUniforms *this,List *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 (*pauVar14) [16];
  long lVar15;
  uint uVar16;
  long lVar17;
  StringName_conflict *pSVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  StringName_conflict *pSVar24;
  long lVar25;
  long lVar26;
  long in_FS_OFFSET;
  CowData<StringName> *local_98;
  StringName_conflict *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  plVar21 = *(long **)(this + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (StringName_conflict *)0x0;
  if (plVar21 != (long *)0x0) {
    pSVar18 = (StringName_conflict *)0x0;
    do {
      if ((int)plVar21[3] != -1) {
        StringName::StringName
                  ((StringName_conflict *)&local_78,(StringName_conflict *)(plVar21 + 2));
        if (pSVar18 == (StringName_conflict *)0x0) {
          lVar17 = 1;
        }
        else {
          lVar17 = *(long *)(pSVar18 + -8) + 1;
        }
        iVar11 = CowData<StringName>::resize<false>((CowData<StringName> *)&local_80,lVar17);
        pSVar18 = local_80;
        if (iVar11 == 0) {
          if (local_80 == (StringName_conflict *)0x0) {
            lVar23 = -1;
            lVar17 = 0;
          }
          else {
            lVar17 = *(long *)(local_80 + -8);
            lVar23 = lVar17 + -1;
            if (-1 < lVar23) {
              CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_80);
              pSVar18 = local_80;
              StringName::operator=(local_80 + lVar23 * 8,(StringName_conflict *)&local_78);
              goto LAB_00103adb;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar23,lVar17,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
          pSVar18 = local_80;
        }
LAB_00103adb:
        if ((StringName::configured != '\0') && (CONCAT44(uStack_74,local_78) != 0)) {
          StringName::unref();
        }
      }
      plVar21 = (long *)*plVar21;
    } while (plVar21 != (long *)0x0);
    if (((pSVar18 != (StringName_conflict *)0x0) && (lVar17 = *(long *)(pSVar18 + -8), lVar17 != 0))
       && (CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_80), pSVar18 = local_80
          , lVar17 != 1)) {
      lVar23 = 0;
      lVar25 = lVar17;
      do {
        lVar25 = lVar25 >> 1;
        lVar23 = lVar23 + 1;
      } while (lVar25 != 1);
      lVar23 = lVar23 * 2;
      lVar25 = lVar17;
      if (lVar17 < 0x11) {
        lVar23 = 1;
        do {
          lVar25 = lVar23 + 1;
          SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0,lVar23,pSVar18);
          lVar23 = lVar25;
        } while (lVar17 != lVar25);
      }
      else {
        do {
          lVar23 = lVar23 + -1;
          pSVar24 = (StringName_conflict *)
                    SortArray<StringName,StringName::AlphCompare,true>::median_of_3
                              (pSVar18,pSVar18 + (lVar25 >> 1) * 8,pSVar18 + lVar25 * 8 + -8);
          StringName::StringName((StringName_conflict *)&local_78,pSVar24);
          lVar15 = SortArray<StringName,StringName::AlphCompare,true>::partitioner
                             (0,lVar25,(StringName_conflict *)&local_78,pSVar18);
          if ((StringName::configured != '\0') && (CONCAT44(uStack_74,local_78) != 0)) {
            StringName::unref();
          }
          SortArray<StringName,StringName::AlphCompare,true>::introsort
                    (lVar15,lVar25,pSVar18,lVar23);
          lVar26 = 1;
          if (lVar15 < 0x11) goto LAB_00103fa0;
          lVar25 = lVar15;
        } while (lVar23 != 0);
        SortArray<StringName,StringName::AlphCompare,true>::partial_sort(0,lVar15,lVar15,pSVar18);
LAB_00103fa0:
        do {
          lVar23 = lVar26 + 1;
          SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0,lVar26,pSVar18);
          lVar26 = lVar23;
        } while (lVar23 != 0x10);
        lVar23 = 0x10;
        do {
          StringName::StringName((StringName_conflict *)&local_78,pSVar18 + lVar23 * 8);
          SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
                    (lVar23,(StringName_conflict *)&local_78,pSVar18);
          if ((StringName::configured != '\0') && (CONCAT44(uStack_74,local_78) != 0)) {
            StringName::unref();
          }
          lVar23 = lVar23 + 1;
        } while (lVar17 != lVar23);
      }
    }
  }
  local_98 = (CowData<StringName> *)&local_80;
  CowData<StringName>::_copy_on_write(local_98);
  pSVar24 = local_80;
  CowData<StringName>::_copy_on_write(local_98);
  pSVar18 = local_80;
  if (local_80 != (StringName_conflict *)0x0) {
    pSVar18 = local_80 + *(long *)(local_80 + -8) * 8;
  }
  while( true ) {
    if (pSVar18 == pSVar24) {
      CowData<StringName>::_unref(local_98);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((*(long *)(this + 0x10) == 0) || (*(int *)(this + 0x34) == 0)) break;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
    uVar22 = CONCAT44(0,uVar1);
    lVar17 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
    if (*(long *)pSVar24 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(*(long *)pSVar24 + 0x20);
    }
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar12 * lVar17;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar22;
    lVar23 = SUB168(auVar2 * auVar6,8);
    uVar19 = *(uint *)(*(long *)(this + 0x18) + lVar23 * 4);
    uVar16 = SUB164(auVar2 * auVar6,8);
    if (uVar19 == 0) break;
    uVar20 = 0;
    while ((uVar12 != uVar19 ||
           (*(long *)(*(long *)(*(long *)(this + 0x10) + lVar23 * 8) + 0x10) != *(long *)pSVar24)))
    {
      uVar20 = uVar20 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)(uVar16 + 1) * lVar17;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar22;
      lVar23 = SUB168(auVar3 * auVar7,8);
      uVar19 = *(uint *)(*(long *)(this + 0x18) + lVar23 * 4);
      uVar16 = SUB164(auVar3 * auVar7,8);
      if ((uVar19 == 0) ||
         (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar19 * lVar17, auVar8._8_8_ = 0,
         auVar8._0_8_ = uVar22, auVar5._8_8_ = 0,
         auVar5._0_8_ = (ulong)((uVar1 + uVar16) - SUB164(auVar4 * auVar8,8)) * lVar17,
         auVar9._8_8_ = 0, auVar9._0_8_ = uVar22, SUB164(auVar5 * auVar9,8) < uVar20))
      goto LAB_00103e30;
    }
    lVar17 = *(long *)(*(long *)(this + 0x10) + (ulong)uVar16 * 8);
    local_78 = *(undefined4 *)(lVar17 + 0x50);
    local_70 = 0;
    if (*(long *)(lVar17 + 0x58) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar17 + 0x58));
    }
    StringName::StringName((StringName_conflict *)&local_68,(StringName_conflict *)(lVar17 + 0x60));
    local_60 = *(undefined4 *)(lVar17 + 0x68);
    local_58 = 0;
    if (*(long *)(lVar17 + 0x70) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar17 + 0x70));
    }
    local_50 = *(undefined4 *)(lVar17 + 0x78);
    if (*(long *)param_1 == 0) {
      pauVar14 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_1 = pauVar14;
      *(undefined4 *)pauVar14[1] = 0;
      *pauVar14 = (undefined1  [16])0x0;
    }
    puVar13 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar13 + 8) = 0;
    *(undefined1 (*) [16])(puVar13 + 2) = (undefined1  [16])0x0;
    *puVar13 = 0;
    puVar13[6] = 0;
    puVar13[10] = 6;
    *(undefined8 *)(puVar13 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar13 + 0xc) = (undefined1  [16])0x0;
    *puVar13 = local_78;
    if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 2),(CowData *)&local_70);
    }
    StringName::operator=((StringName_conflict *)(puVar13 + 4),(StringName_conflict *)&local_68);
    puVar13[6] = local_60;
    if (*(long *)(puVar13 + 8) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 8),(CowData *)&local_58);
    }
    lVar23 = local_58;
    puVar13[10] = local_50;
    plVar21 = *(long **)param_1;
    lVar17 = plVar21[1];
    *(undefined8 *)(puVar13 + 0xc) = 0;
    *(long **)(puVar13 + 0x10) = plVar21;
    *(long *)(puVar13 + 0xe) = lVar17;
    if (lVar17 != 0) {
      *(undefined4 **)(lVar17 + 0x30) = puVar13;
    }
    plVar21[1] = (long)puVar13;
    if (*plVar21 == 0) {
      *plVar21 = (long)puVar13;
    }
    *(int *)(plVar21 + 2) = (int)plVar21[2] + 1;
    if (local_58 != 0) {
      LOCK();
      plVar21 = (long *)(local_58 + -0x10);
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (*plVar21 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar23 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    lVar17 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar21 = (long *)(local_70 + -0x10);
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (*plVar21 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar17 + -0x10),false);
      }
    }
    pSVar24 = pSVar24 + 8;
  }
LAB_00103e30:
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* List<RendererMaterialStorage::InstanceShaderParam, DefaultAllocator>::~List() */

void __thiscall
List<RendererMaterialStorage::InstanceShaderParam,DefaultAllocator>::~List
          (List<RendererMaterialStorage::InstanceShaderParam,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)this;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*puVar4;
    if (pvVar2 == (void *)0x0) {
      if (*(int *)(puVar4 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar2 + 0x60) == puVar4) {
      *puVar4 = *(undefined8 *)((long)pvVar2 + 0x50);
      if (pvVar2 == (void *)puVar4[1]) {
        puVar4[1] = *(undefined8 *)((long)pvVar2 + 0x58);
      }
      if (*(long *)((long)pvVar2 + 0x58) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x58) + 0x50) =
             *(undefined8 *)((long)pvVar2 + 0x50);
      }
      if (*(long *)((long)pvVar2 + 0x50) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar2 + 0x50) + 0x58) =
             *(undefined8 *)((long)pvVar2 + 0x58);
      }
      if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x38)] != '\0') {
        Variant::_clear_internal();
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar4 = *(undefined8 **)this;
  } while (*(int *)(puVar4 + 2) != 0);
  Memory::free_static(puVar4,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, InstanceUniforms::Item, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   InstanceUniforms::Item> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,InstanceUniforms::Item,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InstanceUniforms::Item>>>
::operator[](HashMap<StringName,InstanceUniforms::Item,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,InstanceUniforms::Item>>>
             *this,StringName_conflict *param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 *puVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  void *pvVar44;
  long lVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  undefined8 *puVar49;
  ulong uVar50;
  undefined8 uVar51;
  int *piVar52;
  uint uVar53;
  ulong uVar54;
  uint uVar55;
  uint uVar56;
  long lVar57;
  undefined8 *puVar58;
  long in_FS_OFFSET;
  byte bVar59;
  int aiStack_130 [2];
  undefined1 local_128 [16];
  int local_118 [2];
  undefined1 local_110 [16];
  undefined4 local_100;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [16];
  long local_b8;
  undefined8 local_b0;
  int local_a8 [6];
  int local_90 [6];
  undefined4 local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  bVar59 = 0;
  lVar57 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar40);
  if ((lVar57 != 0) && (*(int *)(this + 0x2c) != 0)) {
    lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar39 = StringName::get_empty_hash();
      lVar57 = *(long *)(this + 8);
    }
    else {
      uVar39 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar39 == 0) {
      uVar39 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar39 * lVar45;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar42;
    lVar47 = SUB168(auVar5 * auVar21,8);
    uVar41 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
    uVar53 = SUB164(auVar5 * auVar21,8);
    if (uVar41 != 0) {
      uVar55 = 0;
      do {
        if ((uVar39 == uVar41) &&
           (*(long *)(*(long *)(lVar57 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
          puVar49 = (undefined8 *)(*(long *)(lVar57 + (ulong)uVar53 * 8) + 0x18);
          goto LAB_00105104;
        }
        uVar55 = uVar55 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar45;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar42;
        lVar47 = SUB168(auVar6 * auVar22,8);
        uVar41 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
        uVar53 = SUB164(auVar6 * auVar22,8);
      } while ((uVar41 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar41 * lVar45, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar42, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar53 + uVar40) - SUB164(auVar7 * auVar23,8)) * lVar45,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar42, uVar55 <= SUB164(auVar8 * auVar24,8)));
    }
  }
  local_d8 = 0;
  piVar52 = aiStack_130;
  for (lVar45 = 0xc; lVar45 != 0; lVar45 = lVar45 + -1) {
    piVar52[0] = 0;
    piVar52[1] = 0;
    piVar52 = piVar52 + ((ulong)bVar59 * -2 + 1) * 2;
  }
  local_128 = (undefined1  [16])0x0;
  local_110 = (undefined1  [16])0x0;
  aiStack_130[0] = 0;
  local_118[0] = 0;
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = CONCAT44(local_d8._4_4_,6);
  local_f8 = (undefined1  [16])0x0;
  if (lVar57 == 0) {
    uVar50 = (ulong)uVar40;
    uVar42 = uVar50 * 4;
    uVar54 = uVar50 * 8;
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    pvVar44 = (void *)Memory::alloc_static(uVar54,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar40 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar44 + uVar54)) && (pvVar44 < (void *)((long)pvVar4 + uVar42))
         ) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar42 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar50 != uVar42);
      }
      else {
        memset(pvVar4,0,uVar42);
        memset(pvVar44,0,uVar54);
      }
      goto LAB_0010491a;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00104abe;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00104926;
LAB_00104ae4:
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      puVar49 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00105057;
    }
    uVar42 = (ulong)(uVar40 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar42 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    uVar50 = (ulong)uVar40;
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar44 = *(void **)(this + 8);
    uVar42 = uVar50 * 4;
    uVar54 = uVar50 * 8;
    pvVar4 = *(void **)(this + 0x10);
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar54,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar54)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar50);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar54);
      }
    }
    if (uVar39 != 0) {
      uVar42 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar4 + uVar42 * 4);
        if (uVar40 != 0) {
          lVar57 = *(long *)(this + 0x10);
          uVar55 = 0;
          uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar54 = CONCAT44(0,uVar41);
          lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar40 * lVar45;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar54;
          lVar47 = SUB168(auVar13 * auVar29,8);
          puVar2 = (uint *)(lVar57 + lVar47 * 4);
          iVar46 = SUB164(auVar13 * auVar29,8);
          uVar53 = *puVar2;
          uVar43 = *(undefined8 *)((long)pvVar44 + uVar42 * 8);
          while (uVar53 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar53 * lVar45;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar54;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((uVar41 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar45;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar54;
            uVar56 = SUB164(auVar15 * auVar31,8);
            uVar51 = uVar43;
            if (uVar56 < uVar55) {
              *puVar2 = uVar40;
              puVar49 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar49;
              *puVar49 = uVar43;
              uVar40 = uVar53;
              uVar55 = uVar56;
            }
            uVar55 = uVar55 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar45;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar54;
            lVar47 = SUB168(auVar16 * auVar32,8);
            puVar2 = (uint *)(lVar57 + lVar47 * 4);
            iVar46 = SUB164(auVar16 * auVar32,8);
            uVar43 = uVar51;
            uVar53 = *puVar2;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar43;
          *puVar2 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar39 != uVar42);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
LAB_0010491a:
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
LAB_00104926:
      uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar42 = CONCAT44(0,uVar39);
      lVar57 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar41 = StringName::get_empty_hash();
      }
      else {
        uVar41 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar41 == 0) {
        uVar41 = 1;
      }
      uVar56 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar41 * lVar57;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar42;
      lVar45 = SUB168(auVar9 * auVar25,8);
      uVar53 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
      uVar55 = SUB164(auVar9 * auVar25,8);
      if (uVar53 != 0) {
        do {
          if ((uVar41 == uVar53) &&
             (*(long *)(*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10) == *(long *)param_1)) {
            lVar57 = *(long *)(*(long *)(this + 8) + (ulong)uVar55 * 8);
            *(undefined8 *)(lVar57 + 0x18) = 0xffffffff;
            Variant::operator=((Variant *)(lVar57 + 0x20),(Variant *)aiStack_130);
            Variant::operator=((Variant *)(lVar57 + 0x38),(Variant *)local_118);
            *(undefined4 *)(lVar57 + 0x50) = local_100;
            if (*(long *)(lVar57 + 0x58) != local_f8._0_8_) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar57 + 0x58),(CowData *)local_f8);
            }
            StringName::operator=
                      ((StringName_conflict *)(lVar57 + 0x60),(StringName_conflict *)(local_f8 + 8))
            ;
            *(undefined4 *)(lVar57 + 0x68) = local_e8;
            if (*(long *)(lVar57 + 0x70) != local_e0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(lVar57 + 0x70),(CowData *)&local_e0);
            }
            *(undefined4 *)(lVar57 + 0x78) = (undefined4)local_d8;
            puVar49 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
            goto LAB_00105057;
          }
          uVar56 = uVar56 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar55 + 1) * lVar57;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar42;
          lVar45 = SUB168(auVar10 * auVar26,8);
          uVar53 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
          uVar55 = SUB164(auVar10 * auVar26,8);
        } while ((uVar53 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar53 * lVar57, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar42, auVar12._8_8_ = 0,
                auVar12._0_8_ = (ulong)((uVar39 + uVar55) - SUB164(auVar11 * auVar27,8)) * lVar57,
                auVar28._8_8_ = 0, auVar28._0_8_ = uVar42, uVar56 <= SUB164(auVar12 * auVar28,8)));
      }
      iVar46 = *(int *)(this + 0x2c);
    }
LAB_00104abe:
    if ((float)uVar40 * __LC15 < (float)(iVar46 + 1)) goto LAB_00104ae4;
  }
  local_c8 = (undefined1  [16])0x0;
  StringName::StringName((StringName_conflict *)&local_b8,param_1);
  local_b0 = 0xffffffff;
  Variant::Variant((Variant *)local_a8,(Variant *)aiStack_130);
  Variant::Variant((Variant *)local_90,(Variant *)local_118);
  local_70 = 0;
  local_78 = local_100;
  if (local_f8._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)local_f8);
  }
  StringName::StringName((StringName_conflict *)&local_68,(StringName_conflict *)(local_f8 + 8));
  local_58 = 0;
  local_60 = local_e8;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_e0);
  }
  local_50 = (undefined4)local_d8;
  puVar49 = (undefined8 *)operator_new(0x80,"");
  *puVar49 = local_c8._0_8_;
  puVar49[1] = local_c8._8_8_;
  StringName::StringName((StringName_conflict *)(puVar49 + 2),(StringName_conflict *)&local_b8);
  puVar49[3] = local_b0;
  Variant::Variant((Variant *)(puVar49 + 4),(Variant *)local_a8);
  Variant::Variant((Variant *)(puVar49 + 7),(Variant *)local_90);
  puVar49[0xb] = 0;
  *(undefined4 *)(puVar49 + 10) = local_78;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar49 + 0xb),(CowData *)&local_70);
  }
  StringName::StringName((StringName_conflict *)(puVar49 + 0xc),(StringName_conflict *)&local_68);
  puVar49[0xe] = 0;
  *(undefined4 *)(puVar49 + 0xd) = local_60;
  if (local_58 == 0) {
    *(undefined4 *)(puVar49 + 0xf) = local_50;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar49 + 0xe),(CowData *)&local_58);
    lVar57 = local_58;
    *(undefined4 *)(puVar49 + 0xf) = local_50;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar57 + -0x10),false);
      }
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar57 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar57 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[local_90[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar49;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar49;
    puVar49[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar49;
  if (*(long *)param_1 == 0) {
    uVar40 = StringName::get_empty_hash();
  }
  else {
    uVar40 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar40 == 0) {
    uVar40 = 1;
  }
  uVar42 = (ulong)uVar40;
  lVar57 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar54 = CONCAT44(0,uVar39);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar42 * lVar45;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar54;
  lVar48 = SUB168(auVar17 * auVar33,8);
  lVar47 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar57 + lVar48 * 4);
  iVar46 = SUB164(auVar17 * auVar33,8);
  uVar41 = *puVar2;
  puVar38 = puVar49;
  while (uVar41 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar41 * lVar45;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar54;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar18 * auVar34,8)) * lVar45;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar54;
    uVar40 = SUB164(auVar19 * auVar35,8);
    puVar58 = puVar38;
    if (uVar40 < uVar53) {
      *puVar2 = (uint)uVar42;
      uVar42 = (ulong)uVar41;
      puVar3 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar58 = (undefined8 *)*puVar3;
      *puVar3 = puVar38;
      uVar53 = uVar40;
    }
    uVar40 = (uint)uVar42;
    uVar53 = uVar53 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar46 + 1) * lVar45;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar54;
    lVar48 = SUB168(auVar20 * auVar36,8);
    puVar2 = (uint *)(lVar57 + lVar48 * 4);
    iVar46 = SUB164(auVar20 * auVar36,8);
    puVar38 = puVar58;
    uVar41 = *puVar2;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar38;
  *puVar2 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00105057:
  lVar57 = local_e0;
  puVar49 = puVar49 + 3;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar57 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8._8_8_ != 0)) {
    StringName::unref();
  }
  uVar43 = local_f8._0_8_;
  if (local_f8._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f8._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar37._8_8_ = 0;
      auVar37._0_8_ = local_f8._8_8_;
      local_f8 = auVar37 << 0x40;
      Memory::free_static((void *)(uVar43 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[local_118[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[aiStack_130[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00105104:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar49;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00105790:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_00105790;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0010566a:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0010566a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_00105637;
  }
  if (lVar8 == lVar5) {
LAB_0010570b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00105637:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_001056eb;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0010570b;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_001056eb:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<RendererMaterialStorage::InstanceShaderParam, DefaultAllocator>::~List() */

void __thiscall
List<RendererMaterialStorage::InstanceShaderParam,DefaultAllocator>::~List
          (List<RendererMaterialStorage::InstanceShaderParam,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


