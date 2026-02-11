
undefined4 isubase32(byte param_1)

{
  return CONCAT31((int3)(~(uint)(byte)base32_to_int[param_1] >> 8),
                  (byte)~(uint)(byte)base32_to_int[param_1] >> 7);
}



undefined4 isbase32(byte param_1)

{
  return CONCAT31((int3)(~(uint)(byte)base32_to_int[param_1] >> 8),
                  (byte)~(uint)(byte)base32_to_int[param_1] >> 7);
}



void base32_decode_ctx_init(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



void base32_encode(byte *param_1,long param_2,undefined1 *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  
  if (param_2 == 0) {
    if (param_4 != 0) {
      *param_3 = 0;
    }
  }
  else if (param_4 != 0) {
    bVar6 = *param_1;
    *param_3 = b32str_0[bVar6 >> 3];
    if (param_4 != 1) {
      pbVar1 = param_1 + param_2 + -1;
      pbVar2 = param_1 + param_2 + -3;
      pbVar3 = param_1 + param_2 + -2;
      pbVar4 = param_1 + param_2 + -5;
      pbVar5 = param_1 + param_2 + -4;
      do {
        if (pbVar1 == param_1) {
          param_3[1] = b32str_0[(uint)bVar6 * 4 & 0x1c];
          if (param_4 == 2) {
            return;
          }
          param_3[2] = 0x3d;
          if (param_4 == 3) {
            return;
          }
          param_3[3] = 0x3d;
          if (param_4 == 4) {
            return;
          }
LAB_00100221:
          param_3[4] = 0x3d;
          if (param_4 == 5) {
            return;
          }
LAB_0010022b:
          param_3[5] = 0x3d;
          if (param_4 == 6) {
            return;
          }
          param_3[6] = 0x3d;
joined_r0x0010023d:
          if (param_4 == 7) {
            return;
          }
          param_3[7] = 0x3d;
          if (param_4 == 8) {
            return;
          }
LAB_0010024d:
          param_3[8] = 0;
          return;
        }
        bVar7 = param_1[1];
        param_3[1] = b32str_0[(uint)bVar6 * 4 + (uint)(bVar7 >> 6) & 0x1f];
        if (param_4 == 2) {
          return;
        }
        param_3[2] = b32str_0[bVar7 >> 1 & 0x1f];
        if (param_4 == 3) {
          return;
        }
        if (pbVar3 == param_1) {
          param_3[3] = b32str_0[(uint)bVar7 * 0x10 & 0x10];
          if (param_4 == 4) {
            return;
          }
          goto LAB_00100221;
        }
        bVar6 = param_1[2];
        param_3[3] = b32str_0[(uint)bVar7 * 0x10 + (uint)(bVar6 >> 4) & 0x1f];
        if (param_4 == 4) {
          return;
        }
        if (pbVar2 == param_1) {
          param_3[4] = b32str_0[(uint)bVar6 + (uint)bVar6 & 0x1e];
          if (param_4 == 5) {
            return;
          }
          goto LAB_0010022b;
        }
        bVar7 = param_1[3];
        param_3[4] = b32str_0[(uint)bVar6 + (uint)bVar6 + (uint)(bVar7 >> 7) & 0x1f];
        if (param_4 == 5) {
          return;
        }
        param_3[5] = b32str_0[bVar7 >> 2 & 0x1f];
        if (param_4 == 6) {
          return;
        }
        if (pbVar5 == param_1) {
          param_3[6] = b32str_0[(uint)bVar7 * 8 & 0x18];
          goto joined_r0x0010023d;
        }
        bVar6 = param_1[4];
        param_3[6] = b32str_0[(uint)bVar7 * 8 + (uint)(bVar6 >> 5) & 0x1f];
        if (param_4 == 7) {
          return;
        }
        param_3[7] = b32str_0[bVar6 & 0x1f];
        param_4 = param_4 + -8;
        if (param_4 == 0) {
          return;
        }
        if (pbVar4 == param_1) goto LAB_0010024d;
        bVar6 = param_1[5];
        param_1 = param_1 + 5;
        param_3[8] = b32str_0[bVar6 >> 3];
        param_3 = param_3 + 8;
        if (param_4 == 1) {
          return;
        }
      } while( true );
    }
  }
  return;
}



size_t base32_encode_alloc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  size_t __size;
  
  lVar2 = param_2 / 5 + (ulong)(param_2 != (param_2 / 5) * 5);
  sVar3 = lVar2 * 8;
  if ((param_2 < 0) || (SEXT816((long)sVar3) != SEXT816(lVar2) * SEXT816(8))) {
    *param_3 = 0;
    __size = 0;
  }
  else {
    __size = sVar3 + 1;
    pvVar1 = malloc(__size);
    *param_3 = pvVar1;
    if (pvVar1 != (void *)0x0) {
      base32_encode(param_1,param_2,pvVar1,__size);
      return sVar3;
    }
  }
  return __size;
}



bool base32_decode_ctx(int *param_1,byte *param_2,long param_3,byte *param_4,long *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  bool bVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar16;
  bool bVar17;
  byte *local_50;
  
  bVar17 = param_1 == (int *)0x0;
  if (bVar17) {
    bVar12 = true;
  }
  else {
    bVar12 = *param_1 == 0 && param_3 != 0;
  }
  bVar16 = bVar17 || param_3 != 0;
  lVar13 = *param_5;
LAB_001003c8:
  do {
    if (bVar12) {
      for (; 7 < param_3; param_3 = param_3 + -8) {
        lVar7 = lVar13;
        if (((char)base32_to_int[*param_2] < '\0') ||
           (bVar1 = base32_to_int[param_2[1]], (char)bVar1 < '\0')) goto LAB_00100613;
        lVar8 = 0;
        pbVar14 = param_4;
        if (lVar13 != 0) {
          pbVar14 = param_4 + 1;
          lVar8 = lVar13 + -1;
          *param_4 = base32_to_int[*param_2] << 3 | (char)bVar1 >> 2;
        }
        lVar7 = lVar8;
        param_4 = pbVar14;
        if (param_2[2] == 0x3d) {
          if ((((param_2[3] != 0x3d) || (param_2[4] != 0x3d)) || (param_2[5] != 0x3d)) ||
             ((param_2[6] != 0x3d || (param_2[7] != 0x3d)))) goto LAB_00100613;
          bVar1 = bVar1 & 3;
joined_r0x001008e7:
          param_4 = pbVar14;
          if (bVar1 != 0) goto LAB_00100613;
        }
        else {
          if (((char)base32_to_int[param_2[2]] < '\0') ||
             (bVar2 = base32_to_int[param_2[3]], (char)bVar2 < '\0')) goto LAB_00100613;
          bVar3 = param_2[4];
          if (lVar8 == 0) {
            if (bVar3 == 0x3d) {
LAB_001008c6:
              if (((param_2[5] == 0x3d) && (param_2[6] == 0x3d)) && (param_2[7] == 0x3d)) {
                bVar1 = bVar2 & 0xf;
                pbVar14 = param_4;
                goto joined_r0x001008e7;
              }
              goto LAB_00100613;
            }
            uVar5 = (uint)(byte)base32_to_int[bVar3];
            if ((char)base32_to_int[bVar3] < '\0') goto LAB_00100613;
LAB_001006ff:
            bVar3 = param_2[5];
            pbVar14 = param_4;
          }
          else {
            param_4 = pbVar14 + 1;
            *pbVar14 = base32_to_int[param_2[2]] * '\x02' | bVar1 << 6 | (char)bVar2 >> 4;
            lVar7 = lVar8 + -1;
            if (bVar3 == 0x3d) goto LAB_001008c6;
            bVar1 = base32_to_int[bVar3];
            uVar5 = (uint)bVar1;
            if ((char)bVar1 < '\0') goto LAB_00100613;
            if (lVar7 == 0) {
              lVar8 = 0;
              goto LAB_001006ff;
            }
            lVar8 = lVar8 + -2;
            bVar3 = param_2[5];
            pbVar14[1] = bVar2 << 4 | (char)bVar1 >> 1;
            pbVar14 = pbVar14 + 2;
          }
          lVar7 = lVar8;
          param_4 = pbVar14;
          if (bVar3 == 0x3d) {
            if (((param_2[6] != 0x3d) || (param_2[7] != 0x3d)) || ((uVar5 & 1) != 0))
            goto LAB_00100613;
          }
          else {
            if (((char)base32_to_int[bVar3] < '\0') ||
               (bVar1 = base32_to_int[param_2[6]], (char)bVar1 < '\0')) goto LAB_00100613;
            bVar2 = param_2[7];
            if (lVar8 == 0) {
              if (bVar2 == 0x3d) {
                lVar7 = 0;
                goto LAB_00100a63;
              }
              if ((char)base32_to_int[bVar2] < '\0') goto LAB_00100613;
              lVar7 = 0;
            }
            else {
              param_4 = pbVar14 + 1;
              lVar7 = lVar8 + -1;
              *pbVar14 = (char)bVar1 >> 3 | base32_to_int[bVar3] << 2 | (byte)(uVar5 << 7);
              if (bVar2 == 0x3d) {
LAB_00100a63:
                bVar1 = bVar1 & 7;
                pbVar14 = param_4;
                goto joined_r0x001008e7;
              }
              if ((char)base32_to_int[bVar2] < '\0') goto LAB_00100613;
              if (lVar7 == 0) {
                lVar7 = 0;
                pbVar14 = param_4;
              }
              else {
                pbVar14[1] = bVar1 << 5 | base32_to_int[bVar2];
                lVar7 = lVar8 + -2;
                pbVar14 = pbVar14 + 2;
              }
            }
          }
        }
        param_2 = param_2 + 8;
        lVar13 = lVar7;
        param_4 = pbVar14;
      }
    }
    bVar4 = param_3 == 0 && bVar16;
    if (bVar4) goto LAB_0010045a;
    lVar7 = lVar13;
    if (param_3 == 0) {
      if (param_1 == (int *)0x0) {
LAB_00100a3e:
        bVar4 = true;
        goto LAB_0010045a;
      }
      iVar9 = *param_1;
      pbVar14 = param_2;
      if (iVar9 != 8) goto LAB_00100401;
LAB_00100648:
      *param_1 = 0;
      bVar4 = true;
      lVar7 = 0;
LAB_00100406:
      if ((param_3 < 8) || (!bVar4)) {
LAB_00100410:
        pbVar11 = param_2;
        if (param_2 < pbVar14) {
          do {
            bVar1 = *param_2;
            param_2 = param_2 + 1;
            pbVar11 = param_2;
            if (bVar1 != 10) {
              iVar9 = (int)lVar7 + 1;
              *param_1 = iVar9;
              *(byte *)((long)param_1 + lVar7 + 4) = bVar1;
              if (iVar9 == 8) {
                lVar7 = 8;
                break;
              }
              lVar7 = (long)iVar9;
            }
          } while (param_2 != pbVar14);
        }
        param_3 = (long)(int)lVar7;
        param_2 = (byte *)(param_1 + 1);
        if (param_3 != 0) goto LAB_0010044e;
        goto LAB_00100a3e;
      }
      pvVar6 = memchr(param_2,10,8);
      lVar7 = (long)(int)lVar7;
      if (pvVar6 != (void *)0x0) goto LAB_00100410;
      pbVar11 = param_2 + 8;
LAB_001004c8:
      if ((-1 < (char)base32_to_int[*param_2]) &&
         (bVar1 = base32_to_int[param_2[1]], -1 < (char)bVar1)) {
        local_50 = param_4;
        if (lVar13 != 0) {
          lVar13 = lVar13 + -1;
          local_50 = param_4 + 1;
          *param_4 = base32_to_int[*param_2] << 3 | (char)bVar1 >> 2;
        }
        if (param_2[2] == 0x3d) {
          if ((((param_2[3] == 0x3d) && (param_2[4] == 0x3d)) && (param_2[5] == 0x3d)) &&
             ((param_2[6] == 0x3d && (param_2[7] == 0x3d)))) {
            if ((bVar1 & 3) == 0) goto LAB_00100a53;
            bVar4 = false;
            goto LAB_0010045a;
          }
        }
        else if ((-1 < (char)base32_to_int[param_2[2]]) &&
                (bVar2 = base32_to_int[param_2[3]], -1 < (char)bVar2)) {
          bVar3 = param_2[4];
          if (lVar13 == 0) {
            lVar7 = lVar13;
            pbVar15 = local_50;
            if (bVar3 == 0x3d) goto LAB_001009eb;
            uVar5 = (uint)(byte)base32_to_int[bVar3];
            if ((char)base32_to_int[bVar3] < '\0') {
LAB_00100a80:
              bVar4 = false;
              lVar13 = 0;
              goto LAB_0010045a;
            }
LAB_0010055e:
            bVar3 = param_2[5];
            local_50 = pbVar15;
            uVar10 = uVar5;
            if (bVar3 == 0x3d) goto LAB_0010096e;
LAB_0010056b:
            if (((char)base32_to_int[bVar3] < '\0') ||
               (bVar1 = base32_to_int[param_2[6]], (char)bVar1 < '\0')) goto LAB_00100600;
            bVar2 = param_2[7];
            if (lVar13 == 0) {
              lVar7 = lVar13;
              pbVar15 = local_50;
              if (bVar2 == 0x3d) goto LAB_00100aa2;
              if ((char)base32_to_int[bVar2] < '\0') goto LAB_00100a80;
            }
            else {
              lVar7 = lVar13 + -1;
              *local_50 = (char)bVar1 >> 3 | base32_to_int[bVar3] << 2 | (byte)(uVar5 << 7);
              pbVar15 = local_50 + 1;
              if (bVar2 == 0x3d) {
LAB_00100aa2:
                local_50 = pbVar15;
                lVar13 = lVar7;
                if ((bVar1 & 7) != 0) {
                  bVar4 = false;
LAB_0010045a:
                  *param_5 = *param_5 - lVar13;
                  return bVar4;
                }
              }
              else {
                if ((char)base32_to_int[bVar2] < '\0') {
                  bVar4 = false;
                  lVar13 = lVar7;
                  goto LAB_0010045a;
                }
                if (lVar7 == 0) {
                  lVar13 = 0;
                  local_50 = local_50 + 1;
                }
                else {
                  lVar13 = lVar13 + -2;
                  local_50[1] = bVar1 << 5 | base32_to_int[bVar2];
                  local_50 = local_50 + 2;
                }
              }
            }
LAB_00100a53:
            param_3 = (long)pbVar14 - (long)pbVar11;
            param_2 = pbVar11;
            param_4 = local_50;
            goto LAB_001003c8;
          }
          pbVar15 = local_50 + 1;
          *local_50 = base32_to_int[param_2[2]] * '\x02' | bVar1 << 6 | (char)bVar2 >> 4;
          lVar7 = lVar13 + -1;
          if (bVar3 == 0x3d) {
LAB_001009eb:
            local_50 = pbVar15;
            lVar13 = lVar7;
            if ((((param_2[5] == 0x3d) && (param_2[6] == 0x3d)) && (param_2[7] == 0x3d)) &&
               ((bVar2 & 0xf) == 0)) goto LAB_00100a53;
          }
          else {
            bVar1 = base32_to_int[bVar3];
            uVar10 = (uint)bVar1;
            uVar5 = (uint)bVar1;
            if ((char)bVar1 < '\0') {
              bVar4 = false;
              lVar13 = lVar7;
              goto LAB_0010045a;
            }
            if (lVar7 == 0) {
              lVar13 = 0;
              uVar5 = uVar10;
              goto LAB_0010055e;
            }
            lVar13 = lVar13 + -2;
            pbVar15 = local_50 + 2;
            bVar3 = param_2[5];
            local_50[1] = bVar2 << 4 | (char)bVar1 >> 1;
            local_50 = pbVar15;
            if (bVar3 != 0x3d) goto LAB_0010056b;
LAB_0010096e:
            if ((param_2[6] == 0x3d) && (param_2[7] == 0x3d)) {
              if ((uVar10 & 1) == 0) goto LAB_00100a53;
              bVar4 = false;
              goto LAB_0010045a;
            }
          }
        }
      }
LAB_00100600:
      bVar4 = false;
      goto LAB_0010045a;
    }
LAB_00100613:
    pbVar11 = param_2;
    if (*param_2 != 10) {
      pbVar14 = param_2 + param_3;
      param_4 = param_4 + -(lVar13 - lVar7);
      if (param_1 != (int *)0x0) {
        iVar9 = *param_1;
        if (iVar9 == 8) goto LAB_00100648;
LAB_00100401:
        lVar7 = (long)iVar9;
        bVar4 = iVar9 == 0;
        goto LAB_00100406;
      }
LAB_0010044e:
      if (7 < param_3) goto LAB_001004c8;
      bVar4 = !bVar17 && bVar16;
      goto LAB_0010045a;
    }
    if (param_1 == (int *)0x0) {
      pbVar14 = param_2 + param_3;
      param_4 = param_4 + -(lVar13 - lVar7);
      goto LAB_0010044e;
    }
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    lVar13 = lVar7;
  } while( true );
}



undefined1
base32_decode_alloc_ctx
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,size_t *param_5)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  size_t local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (param_3 >> 3) * 5 + 5;
  pvVar3 = malloc(local_38);
  *param_4 = pvVar3;
  if (pvVar3 != (void *)0x0) {
    cVar1 = base32_decode_ctx(param_1,param_2,param_3,pvVar3,&local_38);
    if (cVar1 == '\0') {
      free((void *)*param_4);
      *param_4 = 0;
      uVar2 = 0;
      goto LAB_00100b68;
    }
    if (param_5 != (size_t *)0x0) {
      *param_5 = local_38;
    }
  }
  uVar2 = 1;
LAB_00100b68:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


