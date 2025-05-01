
/* WARNING: Unknown calling convention */

size_t critical_factorization(uchar *needle,size_t needle_len,size_t *period)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  size_t sVar7;
  size_t sVar8;
  ulong uVar9;
  
  if (needle_len < 2) {
    sVar7 = 1;
    sVar8 = 0;
  }
  else {
    sVar8 = 1;
    sVar7 = 1;
    uVar1 = 0xffffffffffffffff;
    uVar4 = 0;
    uVar6 = 1;
    do {
      while( true ) {
        bVar2 = needle[uVar6];
        if (bVar2 - 0x41 < 0x1a) {
          bVar2 = bVar2 + 0x20;
        }
        bVar3 = needle[sVar7 + uVar1];
        if (bVar3 - 0x41 < 0x1a) {
          bVar3 = bVar3 + 0x20;
        }
        if (bVar3 <= bVar2) break;
        sVar7 = 1;
        sVar8 = uVar6 - uVar1;
LAB_00100047:
        uVar9 = uVar6 + sVar7;
        uVar4 = uVar6;
        uVar6 = uVar9;
        if (needle_len <= uVar9) goto LAB_001000a4;
      }
      if (bVar2 == bVar3) {
        if (sVar7 == sVar8) {
          uVar6 = uVar4 + sVar7;
          sVar7 = 1;
        }
        else {
          sVar7 = sVar7 + 1;
          uVar6 = uVar4;
        }
        goto LAB_00100047;
      }
      sVar7 = 1;
      sVar8 = 1;
      uVar6 = uVar4 + 2;
      uVar1 = uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar6 < needle_len);
LAB_001000a4:
    *period = sVar8;
    sVar7 = 1;
    sVar8 = 1;
    uVar4 = 0;
    uVar6 = 1;
    uVar9 = 0xffffffffffffffff;
    do {
      while( true ) {
        uVar5 = uVar4;
        bVar2 = needle[uVar6];
        if (bVar2 - 0x41 < 0x1a) {
          bVar2 = bVar2 + 0x20;
        }
        bVar3 = needle[uVar9 + sVar8];
        if (bVar3 - 0x41 < 0x1a) {
          bVar3 = bVar3 + 0x20;
        }
        if (bVar2 <= bVar3) break;
        sVar8 = 1;
        sVar7 = uVar6 - uVar9;
LAB_001000d7:
        uVar5 = uVar6 + sVar8;
        uVar4 = uVar6;
        uVar6 = uVar5;
        if (needle_len <= uVar5) goto LAB_00100133;
      }
      if (bVar2 == bVar3) {
        if (sVar7 == sVar8) {
          uVar6 = uVar5 + sVar7;
          sVar8 = 1;
        }
        else {
          sVar8 = sVar8 + 1;
          uVar6 = uVar5;
        }
        goto LAB_001000d7;
      }
      sVar8 = 1;
      sVar7 = 1;
      uVar4 = uVar5 + 1;
      uVar6 = uVar5 + 2;
      uVar9 = uVar5;
    } while (uVar5 + 2 < needle_len);
LAB_00100133:
    sVar8 = uVar9 + 1;
    if (sVar8 < uVar1 + 1) {
      return uVar1 + 1;
    }
  }
  *period = sVar7;
  return sVar8;
}



/* WARNING: Unknown calling convention */

char * two_way_long_needle(uchar *haystack,size_t haystack_len,uchar *needle,size_t needle_len)

{
  size_t sVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  size_t *psVar5;
  size_t *psVar6;
  void *pvVar7;
  ulong uVar8;
  size_t sVar9;
  uchar *puVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  ulong local_880;
  size_t period;
  size_t shift_table [256];
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (needle_len < 3) {
    local_880 = needle_len - 1;
    period = 1;
  }
  else {
    local_880 = critical_factorization(needle,needle_len,&period);
  }
  sVar1 = period;
  psVar5 = shift_table;
  do {
    *psVar5 = needle_len;
    psVar5[1] = needle_len;
    psVar6 = psVar5 + 4;
    psVar5[2] = needle_len;
    psVar5[3] = needle_len;
    psVar5 = psVar6;
  } while (psVar6 != &local_48);
  if (needle_len == 0) {
    iVar4 = c_strncasecmp(needle,needle + period,local_880);
    if (iVar4 == 0) {
LAB_001004d8:
      puVar10 = (uchar *)0x0;
LAB_001004da:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return (char *)puVar10;
    }
  }
  else {
    uVar8 = needle_len - 1;
    pbVar11 = needle;
    do {
      bVar2 = *pbVar11;
      uVar3 = (uint)bVar2;
      if (bVar2 - 0x41 < 0x1a) {
        uVar3 = bVar2 + 0x20;
      }
      lVar13 = uVar8 - (long)pbVar11;
      pbVar11 = pbVar11 + 1;
      shift_table[(int)uVar3] = (size_t)(needle + lVar13);
    } while (pbVar11 != needle + needle_len);
    iVar4 = c_strncasecmp(needle,needle + period,local_880);
    if (iVar4 == 0) {
      lVar13 = 0;
      uVar15 = 0;
LAB_001002f4:
      do {
        sVar9 = lVar13 + needle_len;
        pvVar7 = memchr(haystack + haystack_len,0,sVar9 - haystack_len);
        if ((sVar9 == 0) || (pvVar7 != (void *)0x0)) goto LAB_001004d8;
        bVar2 = haystack[sVar9 - 1];
        uVar3 = (uint)bVar2;
        if (bVar2 - 0x41 < 0x1a) {
          uVar3 = bVar2 + 0x20;
        }
        uVar14 = shift_table[(int)uVar3];
        haystack_len = sVar9;
        if (uVar14 == 0) {
          uVar14 = local_880;
          if (local_880 <= uVar15) {
            uVar14 = uVar15;
          }
          if (uVar14 < uVar8) {
            do {
              bVar2 = needle[uVar14];
              uVar3 = (uint)bVar2;
              if (bVar2 - 0x41 < 0x1a) {
                uVar3 = bVar2 + 0x20;
              }
              bVar2 = haystack[uVar14 + lVar13];
              uVar12 = (uint)bVar2;
              if (bVar2 - 0x41 < 0x1a) {
                uVar12 = bVar2 + 0x20;
              }
              if (uVar12 != uVar3) {
                if (uVar14 < uVar8) {
                  uVar15 = 0;
                  lVar13 = (1 - local_880) + lVar13 + uVar14;
                  goto LAB_001002f4;
                }
                break;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar8);
          }
          uVar14 = local_880;
          if (uVar15 < local_880) {
            do {
              uVar16 = uVar14 - 1;
              bVar2 = needle[uVar16];
              uVar3 = (uint)bVar2;
              if (bVar2 - 0x41 < 0x1a) {
                uVar3 = bVar2 + 0x20;
              }
              bVar2 = haystack[uVar16 + lVar13];
              uVar12 = (uint)bVar2;
              if (bVar2 - 0x41 < 0x1a) {
                uVar12 = bVar2 + 0x20;
              }
            } while ((uVar12 == uVar3) && (uVar14 = uVar16, uVar15 != uVar16));
          }
          if (uVar14 < uVar15 + 1) {
            puVar10 = haystack + lVar13;
            goto LAB_001004da;
          }
          lVar13 = lVar13 + sVar1;
          uVar15 = needle_len - sVar1;
        }
        else {
          if ((uVar14 < sVar1) && (uVar15 != 0)) {
            uVar14 = needle_len - sVar1;
          }
          lVar13 = lVar13 + uVar14;
          uVar15 = 0;
        }
      } while( true );
    }
  }
  uVar8 = needle_len - local_880;
  if (needle_len - local_880 < local_880) {
    uVar8 = local_880;
  }
  lVar13 = 0;
LAB_00100426:
  do {
    sVar1 = lVar13 + needle_len;
    pvVar7 = memchr(haystack + haystack_len,0,sVar1 - haystack_len);
    if ((sVar1 == 0) || (pvVar7 != (void *)0x0)) goto LAB_001004d8;
    bVar2 = haystack[sVar1 - 1];
    uVar3 = (uint)bVar2;
    if (bVar2 - 0x41 < 0x1a) {
      uVar3 = bVar2 + 0x20;
    }
    sVar9 = shift_table[(int)uVar3];
    haystack_len = sVar1;
    if (shift_table[(int)uVar3] == 0) {
      puVar10 = haystack + lVar13;
      for (uVar15 = local_880; uVar14 = local_880, uVar15 < needle_len - 1; uVar15 = uVar15 + 1) {
        bVar2 = needle[uVar15];
        uVar3 = (uint)bVar2;
        if (bVar2 - 0x41 < 0x1a) {
          uVar3 = bVar2 + 0x20;
        }
        bVar2 = puVar10[uVar15];
        uVar12 = (uint)bVar2;
        if (bVar2 - 0x41 < 0x1a) {
          uVar12 = bVar2 + 0x20;
        }
        if (uVar12 != uVar3) {
          if (uVar15 < needle_len - 1) {
            lVar13 = (1 - local_880) + lVar13 + uVar15;
            goto LAB_00100426;
          }
          break;
        }
      }
      do {
        if (uVar14 == 0) goto LAB_001004da;
        uVar14 = uVar14 - 1;
        bVar2 = needle[uVar14];
        uVar3 = (uint)bVar2;
        if (bVar2 - 0x41 < 0x1a) {
          uVar3 = bVar2 + 0x20;
        }
        bVar2 = puVar10[uVar14];
        uVar12 = (uint)bVar2;
        if (bVar2 - 0x41 < 0x1a) {
          uVar12 = bVar2 + 0x20;
        }
        sVar9 = uVar8 + 1;
      } while (uVar12 == uVar3);
    }
    lVar13 = lVar13 + sVar9;
  } while( true );
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

char * c_strcasestr(char *haystack_start,char *needle_start)

{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uchar *puVar8;
  size_t sVar9;
  void *pvVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  ulong needle_len;
  ulong uVar15;
  ulong uVar16;
  size_t sVar17;
  long lVar18;
  long in_FS_OFFSET;
  size_t local_58;
  size_t period;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = *haystack_start;
  if (bVar3 == 0) {
    puVar8 = (uchar *)0x0;
    if (*needle_start == '\0') {
      puVar8 = (uchar *)haystack_start;
    }
  }
  else {
    bVar4 = true;
    pbVar12 = (byte *)haystack_start;
    pbVar1 = (byte *)needle_start;
    do {
      pbVar14 = pbVar1;
      uVar5 = (uint)bVar3;
      uVar13 = (uint)*pbVar14;
      pbVar1 = pbVar14;
      if (*pbVar14 == 0) goto joined_r0x00100687;
      pbVar12 = pbVar12 + 1;
      pbVar1 = pbVar14 + 1;
      if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 + 0x20;
      }
      if (uVar13 - 0x41 < 0x1a) {
        uVar13 = uVar13 + 0x20;
      }
      bVar4 = (bool)(bVar4 & uVar13 == uVar5);
      bVar3 = *pbVar12;
    } while (bVar3 != 0);
    if (pbVar14[1] == 0) {
joined_r0x00100687:
      puVar8 = (uchar *)haystack_start;
      if (!bVar4) {
        needle_len = (long)pbVar1 - (long)needle_start;
        puVar8 = (uchar *)(haystack_start + 1);
        sVar17 = needle_len - 1;
        if (needle_len < 0x20) {
          if (needle_len < 3) {
            local_58 = 1;
            sVar9 = sVar17;
          }
          else {
            sVar9 = critical_factorization((uchar *)needle_start,needle_len,&period);
            local_58 = period;
          }
          iVar6 = c_strncasecmp(needle_start,needle_start + local_58,sVar9);
          if (iVar6 != 0) {
            uVar11 = needle_len - sVar9;
            if (needle_len - sVar9 < sVar9) {
              uVar11 = sVar9;
            }
            lVar18 = 0;
LAB_001008e3:
            do {
              sVar2 = needle_len + lVar18;
              pvVar10 = memchr(puVar8 + sVar17,0,sVar2 - sVar17);
              if ((sVar2 == 0) || (uVar15 = sVar9, pvVar10 != (void *)0x0)) goto LAB_001006f0;
              for (; uVar16 = sVar9, sVar17 = sVar2, uVar15 < needle_len; uVar15 = uVar15 + 1) {
                bVar3 = needle_start[uVar15];
                uVar5 = (uint)bVar3;
                if (bVar3 - 0x41 < 0x1a) {
                  uVar5 = bVar3 + 0x20;
                }
                bVar3 = haystack_start[uVar15 + 1 + lVar18];
                uVar13 = (uint)bVar3;
                if (bVar3 - 0x41 < 0x1a) {
                  uVar13 = bVar3 + 0x20;
                }
                if (uVar13 != uVar5) {
                  if (uVar15 < needle_len) {
                    lVar18 = lVar18 + (1 - sVar9) + uVar15;
                    goto LAB_001008e3;
                  }
                  break;
                }
              }
              do {
                if (uVar16 == 0) {
                  puVar8 = puVar8 + lVar18;
                  goto LAB_001006f2;
                }
                bVar3 = needle_start[uVar16 - 1];
                uVar5 = (uint)bVar3;
                if (bVar3 - 0x41 < 0x1a) {
                  uVar5 = bVar3 + 0x20;
                }
                bVar3 = haystack_start[uVar16 + lVar18];
                uVar13 = (uint)bVar3;
                if (bVar3 - 0x41 < 0x1a) {
                  uVar13 = bVar3 + 0x20;
                }
                uVar16 = uVar16 - 1;
              } while (uVar13 == uVar5);
              lVar18 = lVar18 + uVar11 + 1;
            } while( true );
          }
          lVar18 = 0;
          uVar11 = 0;
LAB_001007a8:
          do {
            sVar2 = needle_len + lVar18;
            pvVar10 = memchr(puVar8 + sVar17,0,sVar2 - sVar17);
            if ((sVar2 == 0) || (pvVar10 != (void *)0x0)) goto LAB_001006f0;
            uVar15 = sVar9;
            if (sVar9 <= uVar11) {
              uVar15 = uVar11;
            }
            sVar17 = sVar2;
            if (uVar15 < needle_len) {
              do {
                bVar3 = needle_start[uVar15];
                uVar5 = (uint)bVar3;
                if (bVar3 - 0x41 < 0x1a) {
                  uVar5 = bVar3 + 0x20;
                }
                bVar3 = haystack_start[uVar15 + 1 + lVar18];
                uVar13 = (uint)bVar3;
                if (bVar3 - 0x41 < 0x1a) {
                  uVar13 = bVar3 + 0x20;
                }
                if (uVar13 != uVar5) {
                  if (uVar15 < needle_len) {
                    uVar11 = 0;
                    lVar18 = (1 - sVar9) + lVar18 + uVar15;
                    goto LAB_001007a8;
                  }
                  break;
                }
                uVar15 = uVar15 + 1;
              } while (needle_len != uVar15);
            }
            uVar15 = sVar9;
            if (uVar11 < sVar9) {
              do {
                uVar16 = uVar15 - 1;
                bVar3 = needle_start[uVar16];
                uVar5 = (uint)bVar3;
                if (bVar3 - 0x41 < 0x1a) {
                  uVar5 = bVar3 + 0x20;
                }
                bVar3 = haystack_start[uVar15 + lVar18];
                uVar13 = (uint)bVar3;
                if (bVar3 - 0x41 < 0x1a) {
                  uVar13 = bVar3 + 0x20;
                }
              } while ((uVar13 == uVar5) && (uVar15 = uVar16, uVar11 != uVar16));
            }
            if (uVar15 < uVar11 + 1) {
              puVar8 = puVar8 + lVar18;
              goto LAB_001006f2;
            }
            lVar18 = lVar18 + local_58;
            uVar11 = needle_len - local_58;
          } while( true );
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          pcVar7 = two_way_long_needle(puVar8,sVar17,(uchar *)needle_start,needle_len);
          return pcVar7;
        }
        goto LAB_001009f7;
      }
    }
    else {
LAB_001006f0:
      puVar8 = (uchar *)0x0;
    }
  }
LAB_001006f2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)puVar8;
  }
LAB_001009f7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


