
ulong critical_factorization_part_0(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_2 < 2) {
    lVar7 = 1;
    uVar9 = 0;
  }
  else {
    lVar8 = 1;
    lVar7 = 1;
    uVar2 = 0xffffffffffffffff;
    uVar6 = 0;
    uVar9 = 1;
    do {
      while( true ) {
        bVar4 = *(byte *)(param_1 + uVar9);
        if (bVar4 - 0x41 < 0x1a) {
          bVar4 = bVar4 + 0x20;
        }
        bVar3 = *(byte *)(param_1 + uVar2 + lVar7);
        if (bVar3 - 0x41 < 0x1a) {
          bVar3 = bVar3 + 0x20;
        }
        if (bVar3 <= bVar4) break;
        lVar7 = 1;
        lVar8 = uVar9 - uVar2;
LAB_00100047:
        uVar1 = uVar9 + lVar7;
        uVar6 = uVar9;
        uVar9 = uVar1;
        if (param_2 <= uVar1) goto LAB_001000a4;
      }
      if (bVar4 == bVar3) {
        if (lVar7 == lVar8) {
          uVar9 = uVar6 + lVar7;
          lVar7 = 1;
        }
        else {
          lVar7 = lVar7 + 1;
          uVar9 = uVar6;
        }
        goto LAB_00100047;
      }
      lVar7 = 1;
      lVar8 = 1;
      uVar9 = uVar6 + 2;
      uVar2 = uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar9 < param_2);
LAB_001000a4:
    *param_3 = lVar8;
    lVar7 = 1;
    lVar8 = 1;
    uVar1 = 0;
    uVar6 = 1;
    uVar9 = 0xffffffffffffffff;
    do {
      while( true ) {
        uVar5 = uVar1;
        bVar4 = *(byte *)(param_1 + uVar6);
        if (bVar4 - 0x41 < 0x1a) {
          bVar4 = bVar4 + 0x20;
        }
        bVar3 = *(byte *)(param_1 + lVar8 + uVar9);
        if (bVar3 - 0x41 < 0x1a) {
          bVar3 = bVar3 + 0x20;
        }
        if (bVar4 <= bVar3) break;
        lVar8 = 1;
        lVar7 = uVar6 - uVar9;
LAB_001000d7:
        uVar5 = lVar8 + uVar6;
        uVar1 = uVar6;
        uVar6 = uVar5;
        if (param_2 <= uVar5) goto LAB_00100131;
      }
      if (bVar3 == bVar4) {
        if (lVar7 == lVar8) {
          uVar6 = uVar5 + lVar7;
          lVar8 = 1;
        }
        else {
          lVar8 = lVar8 + 1;
          uVar6 = uVar5;
        }
        goto LAB_001000d7;
      }
      lVar8 = 1;
      lVar7 = 1;
      uVar1 = uVar5 + 1;
      uVar6 = uVar5 + 2;
      uVar9 = uVar5;
    } while (uVar5 + 2 < param_2);
LAB_00100131:
    uVar9 = uVar9 + 1;
    if (uVar9 < uVar2 + 1) {
      return uVar2 + 1;
    }
  }
  *param_3 = lVar7;
  return uVar9;
}



long two_way_long_needle(long param_1,long param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  void *pvVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  ulong local_880;
  ulong local_850;
  ulong local_848 [259];
  
  local_848[0x101] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 3) {
    local_880 = param_4 - 1;
    local_850 = 1;
  }
  else {
    local_880 = critical_factorization_part_0(param_3,param_4,&local_850);
  }
  uVar7 = local_850;
  puVar4 = local_848;
  do {
    *puVar4 = param_4;
    puVar4[1] = param_4;
    puVar5 = puVar4 + 4;
    puVar4[2] = param_4;
    puVar4[3] = param_4;
    puVar4 = puVar5;
  } while (puVar5 != local_848 + 0x100);
  if (param_4 == 0) {
    iVar3 = c_strncasecmp(param_3,param_3 + local_850,local_880);
    if (iVar3 == 0) {
LAB_001004d8:
      lVar10 = 0;
LAB_001004da:
      if (local_848[0x101] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return lVar10;
    }
    uVar15 = 0xffffffffffffffff;
  }
  else {
    uVar15 = param_4 - 1;
    pbVar8 = param_3;
    do {
      bVar1 = *pbVar8;
      uVar2 = (uint)bVar1;
      if (bVar1 - 0x41 < 0x1a) {
        uVar2 = bVar1 + 0x20;
      }
      lVar10 = uVar15 - (long)pbVar8;
      pbVar8 = pbVar8 + 1;
      local_848[(int)uVar2] = (ulong)(param_3 + lVar10);
    } while (pbVar8 != param_3 + param_4);
    iVar3 = c_strncasecmp(param_3,param_3 + local_850,local_880);
    if (iVar3 == 0) {
      lVar10 = 0;
      uVar13 = 0;
LAB_001002f4:
      do {
        lVar11 = lVar10 + param_4;
        pvVar6 = memchr((void *)(param_2 + param_1),0,lVar11 - param_2);
        if ((pvVar6 != (void *)0x0) || (lVar11 == 0)) goto LAB_001004d8;
        bVar1 = *(byte *)(param_1 + -1 + lVar11);
        uVar2 = (uint)bVar1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar2 = bVar1 + 0x20;
        }
        uVar12 = local_848[(int)uVar2];
        param_2 = lVar11;
        if (uVar12 == 0) {
          uVar12 = local_880;
          if (local_880 <= uVar13) {
            uVar12 = uVar13;
          }
          if (uVar12 < uVar15) {
            do {
              bVar1 = param_3[uVar12];
              uVar2 = (uint)bVar1;
              if (bVar1 - 0x41 < 0x1a) {
                uVar2 = bVar1 + 0x20;
              }
              bVar1 = *(byte *)(param_1 + lVar10 + uVar12);
              uVar9 = (uint)bVar1;
              if (bVar1 - 0x41 < 0x1a) {
                uVar9 = bVar1 + 0x20;
              }
              if (uVar9 != uVar2) {
                if (uVar12 < uVar15) {
                  uVar13 = 0;
                  lVar10 = (1 - local_880) + lVar10 + uVar12;
                  goto LAB_001002f4;
                }
                break;
              }
              uVar12 = uVar12 + 1;
            } while (uVar15 != uVar12);
          }
          uVar12 = local_880;
          if (uVar13 < local_880) {
            do {
              uVar14 = uVar12 - 1;
              bVar1 = param_3[uVar14];
              uVar2 = (uint)bVar1;
              if (bVar1 - 0x41 < 0x1a) {
                uVar2 = bVar1 + 0x20;
              }
              bVar1 = *(byte *)(param_1 + lVar10 + uVar14);
              uVar9 = (uint)bVar1;
              if (bVar1 - 0x41 < 0x1a) {
                uVar9 = bVar1 + 0x20;
              }
            } while ((uVar9 == uVar2) && (uVar12 = uVar14, uVar13 != uVar14));
          }
          if (uVar12 < uVar13 + 1) {
            lVar10 = param_1 + lVar10;
            goto LAB_001004da;
          }
          lVar10 = lVar10 + uVar7;
          uVar13 = param_4 - uVar7;
        }
        else {
          if ((uVar12 < uVar7) && (uVar13 != 0)) {
            uVar12 = param_4 - uVar7;
          }
          lVar10 = lVar10 + uVar12;
          uVar13 = 0;
        }
      } while( true );
    }
  }
  uVar7 = param_4 - local_880;
  if (param_4 - local_880 < local_880) {
    uVar7 = local_880;
  }
  lVar11 = 0;
LAB_00100426:
  do {
    lVar10 = lVar11 + param_4;
    pvVar6 = memchr((void *)(param_2 + param_1),0,lVar10 - param_2);
    if ((pvVar6 != (void *)0x0) || (lVar10 == 0)) goto LAB_001004d8;
    bVar1 = *(byte *)(param_1 + -1 + lVar10);
    uVar2 = (uint)bVar1;
    if (bVar1 - 0x41 < 0x1a) {
      uVar2 = bVar1 + 0x20;
    }
    uVar13 = local_848[(int)uVar2];
    param_2 = lVar10;
    if (local_848[(int)uVar2] == 0) {
      lVar10 = param_1 + lVar11;
      for (uVar13 = local_880; uVar12 = local_880, uVar13 < uVar15; uVar13 = uVar13 + 1) {
        bVar1 = param_3[uVar13];
        uVar2 = (uint)bVar1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar2 = bVar1 + 0x20;
        }
        bVar1 = *(byte *)(lVar10 + uVar13);
        uVar9 = (uint)bVar1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar9 = bVar1 + 0x20;
        }
        if (uVar9 != uVar2) {
          if (uVar13 < uVar15) {
            lVar11 = (1 - local_880) + lVar11 + uVar13;
            goto LAB_00100426;
          }
          break;
        }
      }
      do {
        if (uVar12 == 0) goto LAB_001004da;
        uVar12 = uVar12 - 1;
        bVar1 = param_3[uVar12];
        uVar2 = (uint)bVar1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar2 = bVar1 + 0x20;
        }
        bVar1 = *(byte *)(lVar10 + uVar12);
        uVar9 = (uint)bVar1;
        if (bVar1 - 0x41 < 0x1a) {
          uVar9 = bVar1 + 0x20;
        }
        uVar13 = uVar7 + 1;
      } while (uVar9 == uVar2);
    }
    lVar11 = lVar11 + uVar13;
  } while( true );
}



byte * c_strcasestr(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long in_FS_OFFSET;
  bool bVar17;
  long local_58;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = *param_1;
  if (bVar2 == 0) {
    pbVar5 = (byte *)0x0;
    if (*param_2 == 0) {
      pbVar5 = param_1;
    }
  }
  else {
    bVar17 = true;
    pbVar5 = param_1;
    pbVar1 = param_2;
    do {
      pbVar10 = pbVar1;
      uVar3 = (uint)bVar2;
      uVar9 = (uint)*pbVar10;
      pbVar1 = pbVar10;
      if (*pbVar10 == 0) goto joined_r0x00100687;
      pbVar5 = pbVar5 + 1;
      pbVar1 = pbVar10 + 1;
      if (uVar3 - 0x41 < 0x1a) {
        uVar3 = uVar3 + 0x20;
      }
      if (uVar9 - 0x41 < 0x1a) {
        uVar9 = uVar9 + 0x20;
      }
      bVar17 = (bool)(bVar17 & uVar9 == uVar3);
      bVar2 = *pbVar5;
    } while (bVar2 != 0);
    if (pbVar10[1] == 0) {
joined_r0x00100687:
      pbVar5 = param_1;
      if (!bVar17) {
        uVar11 = (long)pbVar1 - (long)param_2;
        pbVar5 = param_1 + 1;
        uVar15 = uVar11 - 1;
        if (uVar11 < 0x20) {
          if (uVar11 < 3) {
            local_58 = 1;
            uVar6 = uVar15;
          }
          else {
            uVar6 = critical_factorization_part_0(param_2,uVar11,&local_48);
            local_58 = local_48;
          }
          iVar4 = c_strncasecmp(param_2,param_2 + local_58,uVar6);
          if (iVar4 != 0) {
            uVar8 = uVar11 - uVar6;
            if (uVar11 - uVar6 < uVar6) {
              uVar8 = uVar6;
            }
            lVar16 = 0;
LAB_001008f3:
            do {
              uVar13 = uVar11 + lVar16;
              pvVar7 = memchr(pbVar5 + uVar15,0,uVar13 - uVar15);
              if ((uVar13 == 0) || (uVar12 = uVar6, pvVar7 != (void *)0x0)) goto LAB_001006e8;
              for (; uVar15 = uVar13, uVar12 < uVar11; uVar12 = uVar12 + 1) {
                bVar2 = param_2[uVar12];
                uVar3 = (uint)bVar2;
                if (bVar2 - 0x41 < 0x1a) {
                  uVar3 = bVar2 + 0x20;
                }
                bVar2 = param_1[uVar12 + 1 + lVar16];
                uVar9 = (uint)bVar2;
                if (bVar2 - 0x41 < 0x1a) {
                  uVar9 = bVar2 + 0x20;
                }
                if (uVar9 != uVar3) {
                  if (uVar12 < uVar11) {
                    lVar16 = (1 - uVar6) + lVar16 + uVar12;
                    goto LAB_001008f3;
                  }
                  break;
                }
              }
              lVar14 = uVar6 - 1;
              if (uVar6 - 1 == -1) {
LAB_001009e0:
                pbVar5 = pbVar5 + lVar16;
                goto LAB_001006ea;
              }
              while( true ) {
                bVar2 = param_2[lVar14];
                uVar3 = (uint)bVar2;
                if (bVar2 - 0x41 < 0x1a) {
                  uVar3 = bVar2 + 0x20;
                }
                bVar2 = param_1[lVar14 + 1 + lVar16];
                uVar9 = (uint)bVar2;
                if (bVar2 - 0x41 < 0x1a) {
                  uVar9 = bVar2 + 0x20;
                }
                if (uVar9 != uVar3) break;
                bVar17 = lVar14 == 0;
                lVar14 = lVar14 + -1;
                if (bVar17) goto LAB_001009e0;
              }
              lVar16 = lVar16 + uVar8 + 1;
            } while( true );
          }
          lVar16 = 0;
          uVar8 = 0;
LAB_001007a8:
          do {
            uVar13 = uVar11 + lVar16;
            pvVar7 = memchr(pbVar5 + uVar15,0,uVar13 - uVar15);
            if ((uVar13 == 0) || (pvVar7 != (void *)0x0)) goto LAB_001006e8;
            uVar12 = uVar8;
            if (uVar8 <= uVar6) {
              uVar12 = uVar6;
            }
            uVar15 = uVar13;
            if (uVar12 < uVar11) {
              do {
                bVar2 = param_2[uVar12];
                uVar3 = (uint)bVar2;
                if (bVar2 - 0x41 < 0x1a) {
                  uVar3 = bVar2 + 0x20;
                }
                bVar2 = param_1[uVar12 + 1 + lVar16];
                uVar9 = (uint)bVar2;
                if (bVar2 - 0x41 < 0x1a) {
                  uVar9 = bVar2 + 0x20;
                }
                if (uVar9 != uVar3) {
                  if (uVar12 < uVar11) {
                    uVar8 = 0;
                    lVar16 = (1 - uVar6) + lVar16 + uVar12;
                    goto LAB_001007a8;
                  }
                  break;
                }
                uVar12 = uVar12 + 1;
              } while (uVar11 != uVar12);
            }
            uVar13 = uVar6;
            if (uVar8 < uVar6) {
              do {
                uVar12 = uVar13 - 1;
                bVar2 = param_2[uVar12];
                uVar3 = (uint)bVar2;
                if (bVar2 - 0x41 < 0x1a) {
                  uVar3 = bVar2 + 0x20;
                }
                bVar2 = param_1[uVar13 + lVar16];
                uVar9 = (uint)bVar2;
                if (bVar2 - 0x41 < 0x1a) {
                  uVar9 = bVar2 + 0x20;
                }
              } while ((uVar9 == uVar3) && (uVar13 = uVar12, uVar8 != uVar12));
            }
            if (uVar13 < uVar8 + 1) {
              pbVar5 = pbVar5 + lVar16;
              goto LAB_001006ea;
            }
            lVar16 = lVar16 + local_58;
            uVar8 = uVar11 - local_58;
          } while( true );
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          pbVar5 = (byte *)two_way_long_needle(pbVar5,uVar15,param_2,uVar11);
          return pbVar5;
        }
        goto LAB_00100a16;
      }
    }
    else {
LAB_001006e8:
      pbVar5 = (byte *)0x0;
    }
  }
LAB_001006ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pbVar5;
  }
LAB_00100a16:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


