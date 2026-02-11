
/* fillRadial(SwFill const*, unsigned int*, unsigned int, unsigned int, unsigned int, unsigned
   char*, unsigned char (*)(unsigned char*), unsigned char, unsigned char) */

void fillRadial(SwFill *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uchar *param_6,
               _func_uchar_uchar_ptr *param_7,uchar param_8,uchar param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  fVar5 = _LC8;
  fVar4 = _LC0;
  uVar12 = (ulong)param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_LC7 < *(float *)(param_1 + 0x34) || _LC7 == *(float *)(param_1 + 0x34)) {
    _calculateCoefficients
              (param_1,param_4,param_3,&local_54,&local_50,&local_4c,&local_48,&local_44);
    fVar5 = _LC8;
    fVar4 = _LC0;
    if (param_9 == 0xff) {
      if ((int)uVar12 != 0) {
        puVar10 = param_2;
        do {
          fVar1 = local_48;
          fVar15 = local_4c;
          fVar14 = local_54;
          bVar6 = (*param_7)(param_6);
          uVar7 = *puVar10;
          if (fVar15 < 0.0) {
            fVar13 = sqrtf(fVar15);
          }
          else {
            fVar13 = SQRT(fVar15);
          }
          iVar11 = *(int *)(param_1 + 0x40);
          uVar8 = (uint)((fVar13 - fVar14) * fVar5 + fVar4);
          if (iVar11 == 1) {
            uVar8 = (int)uVar8 % 0x800;
            if ((int)uVar8 < 0) {
              uVar8 = uVar8 + 0x800;
            }
            if (0x3ff < (int)uVar8) {
              uVar8 = 0x7ff - uVar8;
            }
          }
          else if (iVar11 == 2) {
            uVar8 = (int)uVar8 % 0x400;
            if ((int)uVar8 < 0) {
              uVar8 = uVar8 + 0x400;
            }
          }
          else if (iVar11 == 0) {
            if ((int)uVar8 < 0) {
              uVar8 = 0;
            }
            if (0x3ff < (int)uVar8) {
              uVar8 = 0x3ff;
            }
          }
          puVar9 = puVar10 + 1;
          uVar8 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar8 * 4);
          local_4c = fVar15 + fVar1;
          local_54 = fVar14 + local_50;
          param_6 = param_6 + param_8;
          local_48 = fVar1 + local_44;
          uVar8 = (uVar8 >> 8 & 0xff00ff) * (bVar6 + 1) & 0xff00ff00 |
                  (uVar8 & 0xff00ff) * (bVar6 + 1) >> 8 & 0xff00ff;
          iVar11 = (~uVar8 >> 0x18) + 1;
          *puVar10 = ((uVar7 >> 8 & 0xff00ff) * iVar11 & 0xff00ff00 |
                     (uVar7 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) + uVar8;
          puVar10 = puVar9;
        } while (puVar9 != param_2 + uVar12);
      }
    }
    else if ((int)uVar12 != 0) {
      puVar10 = param_2;
      do {
        fVar1 = local_48;
        fVar15 = local_4c;
        fVar14 = local_54;
        bVar6 = (*param_7)(param_6);
        uVar7 = *puVar10;
        if (fVar15 < 0.0) {
          fVar13 = sqrtf(fVar15);
        }
        else {
          fVar13 = SQRT(fVar15);
        }
        iVar11 = *(int *)(param_1 + 0x40);
        uVar8 = (uint)((fVar13 - fVar14) * fVar5 + fVar4);
        if (iVar11 == 1) {
          uVar8 = (int)uVar8 % 0x800;
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + 0x800;
          }
          if (0x3ff < (int)uVar8) {
            uVar8 = 0x7ff - uVar8;
          }
        }
        else if (iVar11 == 2) {
          uVar8 = (int)uVar8 % 0x400;
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + 0x400;
          }
        }
        else if (iVar11 == 0) {
          if ((int)uVar8 < 0) {
            uVar8 = 0;
          }
          if (0x3ff < (int)uVar8) {
            uVar8 = 0x3ff;
          }
        }
        iVar11 = ((int)((uint)bVar6 * (uint)param_9 + 0xff) >> 8) + 1;
        puVar9 = puVar10 + 1;
        uVar8 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar8 * 4);
        local_4c = fVar15 + fVar1;
        local_54 = fVar14 + local_50;
        param_6 = param_6 + param_8;
        local_48 = fVar1 + local_44;
        uVar8 = (uVar8 >> 8 & 0xff00ff) * iVar11 & 0xff00ff00 |
                (uVar8 & 0xff00ff) * iVar11 >> 8 & 0xff00ff;
        iVar11 = (~uVar8 >> 0x18) + 1;
        *puVar10 = ((uVar7 >> 8 & 0xff00ff) * iVar11 & 0xff00ff00 |
                   (uVar7 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) + uVar8;
        puVar10 = puVar9;
      } while (puVar9 != param_2 + uVar12);
    }
  }
  else {
    fVar15 = (*(float *)param_1 * ((float)param_4 + _LC0) +
              *(float *)(param_1 + 4) * ((float)param_3 + _LC0) + *(float *)(param_1 + 8)) -
             *(float *)(param_1 + 0x18);
    fVar14 = (((float)param_4 + _LC0) * *(float *)(param_1 + 0xc) +
              ((float)param_3 + _LC0) * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14)) -
             *(float *)(param_1 + 0x1c);
    if (param_9 == 0xff) {
      if (param_5 != 0) {
        puVar10 = param_2;
        do {
          fVar1 = *(float *)(param_1 + 0x20);
          fVar13 = *(float *)(param_1 + 0x2c);
          fVar2 = *(float *)(param_1 + 0x24);
          fVar3 = *(float *)(param_1 + 0x28);
          bVar6 = (*param_7)(param_6);
          iVar11 = *(int *)(param_1 + 0x40);
          uVar7 = (uint)(((((fVar15 * fVar15 + fVar14 * fVar14) - fVar1 * fVar1) * fVar4) /
                         (fVar1 * fVar13 + fVar15 * fVar2 + fVar14 * fVar3)) * fVar5 + fVar4);
          if (iVar11 == 1) {
            uVar7 = (int)uVar7 % 0x800;
            if ((int)uVar7 < 0) {
              uVar7 = uVar7 + 0x800;
            }
            if (0x3ff < (int)uVar7) {
              uVar7 = 0x7ff - uVar7;
            }
          }
          else if (iVar11 == 2) {
            uVar7 = (int)uVar7 % 0x400;
            if ((int)uVar7 < 0) {
              uVar7 = uVar7 + 0x400;
            }
          }
          else if (iVar11 == 0) {
            if ((int)uVar7 < 0) {
              uVar7 = 0;
            }
            if (0x3ff < (int)uVar7) {
              uVar7 = 0x3ff;
            }
          }
          puVar9 = puVar10 + 1;
          uVar7 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar7 * 4);
          fVar15 = fVar15 + *(float *)param_1;
          param_6 = param_6 + param_8;
          fVar14 = fVar14 + *(float *)(param_1 + 0xc);
          uVar7 = (uVar7 >> 8 & 0xff00ff) * (bVar6 + 1) & 0xff00ff00 |
                  (uVar7 & 0xff00ff) * (bVar6 + 1) >> 8 & 0xff00ff;
          iVar11 = (~uVar7 >> 0x18) + 1;
          *puVar10 = ((*puVar10 >> 8 & 0xff00ff) * iVar11 & 0xff00ff00 |
                     (*puVar10 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) + uVar7;
          puVar10 = puVar9;
        } while (puVar9 != param_2 + uVar12);
      }
    }
    else if (param_5 != 0) {
      puVar10 = param_2;
      do {
        fVar1 = *(float *)(param_1 + 0x20);
        fVar13 = *(float *)(param_1 + 0x2c);
        fVar2 = *(float *)(param_1 + 0x24);
        fVar3 = *(float *)(param_1 + 0x28);
        bVar6 = (*param_7)(param_6);
        iVar11 = *(int *)(param_1 + 0x40);
        uVar7 = (uint)(((((fVar15 * fVar15 + fVar14 * fVar14) - fVar1 * fVar1) * fVar4) /
                       (fVar1 * fVar13 + fVar15 * fVar2 + fVar14 * fVar3)) * fVar5 + fVar4);
        if (iVar11 == 1) {
          uVar7 = (int)uVar7 % 0x800;
          if ((int)uVar7 < 0) {
            uVar7 = uVar7 + 0x800;
          }
          if (0x3ff < (int)uVar7) {
            uVar7 = 0x7ff - uVar7;
          }
        }
        else if (iVar11 == 2) {
          uVar7 = (int)uVar7 % 0x400;
          if ((int)uVar7 < 0) {
            uVar7 = uVar7 + 0x400;
          }
        }
        else if (iVar11 == 0) {
          if ((int)uVar7 < 0) {
            uVar7 = 0;
          }
          if (0x3ff < (int)uVar7) {
            uVar7 = 0x3ff;
          }
        }
        puVar9 = puVar10 + 1;
        param_6 = param_6 + param_8;
        uVar7 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar7 * 4);
        iVar11 = ((int)((uint)bVar6 * (uint)param_9 + 0xff) >> 8) + 1;
        fVar15 = fVar15 + *(float *)param_1;
        fVar14 = fVar14 + *(float *)(param_1 + 0xc);
        uVar7 = (uVar7 >> 8 & 0xff00ff) * iVar11 & 0xff00ff00 |
                (uVar7 & 0xff00ff) * iVar11 >> 8 & 0xff00ff;
        iVar11 = (~uVar7 >> 0x18) + 1;
        *puVar10 = ((*puVar10 >> 8 & 0xff00ff) * iVar11 & 0xff00ff00 |
                   (*puVar10 & 0xff00ff) * iVar11 >> 8 & 0xff00ff) + uVar7;
        puVar10 = puVar9;
      } while (puVar9 != param_2 + uVar12);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* fillRadial(SwFill const*, unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int
   (*)(unsigned int, unsigned int, unsigned char), unsigned char) */

void fillRadial(SwFill *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
               _func_uint_uint_uint_uchar *param_6,uchar param_7)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  fVar4 = _LC8;
  fVar3 = _LC0;
  uVar7 = (ulong)param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_LC7 < *(float *)(param_1 + 0x34) || _LC7 == *(float *)(param_1 + 0x34)) {
    _calculateCoefficients
              (param_1,param_4,param_3,&local_54,&local_50,&local_4c,&local_48,&local_44);
    fVar4 = _LC8;
    fVar3 = _LC0;
    if ((int)uVar7 != 0) {
      puVar9 = param_2;
      do {
        fVar1 = local_48;
        fVar12 = local_4c;
        fVar11 = local_54;
        uVar5 = *puVar9;
        if (local_4c < 0.0) {
          fVar10 = sqrtf(local_4c);
        }
        else {
          fVar10 = SQRT(local_4c);
        }
        iVar2 = *(int *)(param_1 + 0x40);
        uVar6 = (uint)((fVar10 - fVar11) * fVar4 + fVar3);
        if (iVar2 == 1) {
          uVar6 = (int)uVar6 % 0x800;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0x800;
          }
          if (0x3ff < (int)uVar6) {
            uVar6 = 0x7ff - uVar6;
          }
        }
        else if (iVar2 == 2) {
          uVar6 = (int)uVar6 % 0x400;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0x400;
          }
        }
        else if (iVar2 == 0) {
          if ((int)uVar6 < 0) {
            uVar6 = 0;
          }
          if (0x3ff < (int)uVar6) {
            uVar6 = 0x3ff;
          }
        }
        puVar8 = puVar9 + 1;
        uVar5 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar6 * 4),uVar5,param_7);
        local_54 = fVar11 + local_50;
        *puVar9 = uVar5;
        local_4c = fVar12 + fVar1;
        local_48 = fVar1 + local_44;
        puVar9 = puVar8;
      } while (puVar8 != param_2 + uVar7);
    }
  }
  else {
    fVar12 = (*(float *)param_1 * ((float)param_4 + _LC0) +
              *(float *)(param_1 + 4) * ((float)param_3 + _LC0) + *(float *)(param_1 + 8)) -
             *(float *)(param_1 + 0x18);
    fVar11 = (((float)param_4 + _LC0) * *(float *)(param_1 + 0xc) +
              ((float)param_3 + _LC0) * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14)) -
             *(float *)(param_1 + 0x1c);
    if (param_5 != 0) {
      puVar9 = param_2;
      do {
        fVar1 = *(float *)(param_1 + 0x20);
        iVar2 = *(int *)(param_1 + 0x40);
        uVar5 = (uint)(((((fVar12 * fVar12 + fVar11 * fVar11) - fVar1 * fVar1) * fVar3) /
                       (fVar1 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x24) * fVar12 +
                       *(float *)(param_1 + 0x28) * fVar11)) * fVar4 + fVar3);
        if (iVar2 == 1) {
          uVar5 = (int)uVar5 % 0x800;
          if ((int)uVar5 < 0) {
            uVar5 = uVar5 + 0x800;
          }
          if (0x3ff < (int)uVar5) {
            uVar5 = 0x7ff - uVar5;
          }
        }
        else if (iVar2 == 2) {
          uVar5 = (int)uVar5 % 0x400;
          if ((int)uVar5 < 0) {
            uVar5 = uVar5 + 0x400;
          }
        }
        else if (iVar2 == 0) {
          if ((int)uVar5 < 0) {
            uVar5 = 0;
          }
          if (0x3ff < (int)uVar5) {
            uVar5 = 0x3ff;
          }
        }
        puVar8 = puVar9 + 1;
        uVar5 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar5 * 4),*puVar9,param_7);
        fVar12 = fVar12 + *(float *)param_1;
        fVar11 = fVar11 + *(float *)(param_1 + 0xc);
        *puVar9 = uVar5;
        puVar9 = puVar8;
      } while (puVar8 != param_2 + uVar7);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* fillRadial(SwFill const*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned char
   (*)(unsigned char, unsigned char, unsigned char), unsigned char) */

void fillRadial(SwFill *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5,
               _func_uchar_uchar_uchar_uchar *param_6,uchar param_7)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  uchar uVar6;
  uint uVar7;
  uchar *puVar8;
  uchar *puVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  fVar5 = _LC8;
  fVar4 = _LC0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_LC7 < *(float *)(param_1 + 0x34) || _LC7 == *(float *)(param_1 + 0x34)) {
    _calculateCoefficients
              (param_1,param_4,param_3,&local_54,&local_50,&local_4c,&local_48,&local_44);
    fVar5 = _LC8;
    fVar4 = _LC0;
    if (param_5 != 0) {
      puVar9 = param_2;
      do {
        fVar1 = local_48;
        fVar12 = local_4c;
        fVar11 = local_54;
        if (local_4c < 0.0) {
          fVar10 = sqrtf(local_4c);
        }
        else {
          fVar10 = SQRT(local_4c);
        }
        iVar2 = *(int *)(param_1 + 0x40);
        uVar7 = (uint)((fVar10 - fVar11) * fVar5 + fVar4);
        if (iVar2 == 1) {
          uVar7 = (int)uVar7 % 0x800;
          if ((int)uVar7 < 0) {
            uVar7 = uVar7 + 0x800;
          }
          if (0x3ff < (int)uVar7) {
            uVar7 = 0x7ff - uVar7;
          }
        }
        else if (iVar2 == 2) {
          uVar7 = (int)uVar7 % 0x400;
          if ((int)uVar7 < 0) {
            uVar7 = uVar7 + 0x400;
          }
        }
        else if (iVar2 == 0) {
          if ((int)uVar7 < 0) {
            uVar7 = 0;
          }
          if (0x3ff < (int)uVar7) {
            uVar7 = 0x3ff;
          }
        }
        puVar8 = puVar9 + 1;
        bVar3 = (byte)((uint)*(byte *)(*(long *)(param_1 + 0x38) + 3 + (ulong)uVar7 * 4) *
                       (uint)param_7 + 0xff >> 8);
        uVar6 = (*param_6)(bVar3,*puVar9,~bVar3);
        local_54 = fVar11 + local_50;
        *puVar9 = uVar6;
        local_4c = fVar12 + fVar1;
        local_48 = fVar1 + local_44;
        puVar9 = puVar8;
      } while (puVar8 != param_2 + param_5);
    }
  }
  else {
    fVar12 = (*(float *)param_1 * ((float)param_4 + _LC0) +
              *(float *)(param_1 + 4) * ((float)param_3 + _LC0) + *(float *)(param_1 + 8)) -
             *(float *)(param_1 + 0x18);
    fVar11 = (((float)param_4 + _LC0) * *(float *)(param_1 + 0xc) +
              ((float)param_3 + _LC0) * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14)) -
             *(float *)(param_1 + 0x1c);
    if (param_5 != 0) {
      puVar9 = param_2;
      do {
        fVar1 = *(float *)(param_1 + 0x20);
        iVar2 = *(int *)(param_1 + 0x40);
        uVar7 = (uint)(((((fVar12 * fVar12 + fVar11 * fVar11) - fVar1 * fVar1) * fVar4) /
                       (fVar1 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x24) * fVar12 +
                       *(float *)(param_1 + 0x28) * fVar11)) * fVar5 + fVar4);
        if (iVar2 == 1) {
          uVar7 = (int)uVar7 % 0x800;
          if ((int)uVar7 < 0) {
            uVar7 = uVar7 + 0x800;
          }
          if (0x3ff < (int)uVar7) {
            uVar7 = 0x7ff - uVar7;
          }
        }
        else if (iVar2 == 2) {
          uVar7 = (int)uVar7 % 0x400;
          if ((int)uVar7 < 0) {
            uVar7 = uVar7 + 0x400;
          }
        }
        else if (iVar2 == 0) {
          if ((int)uVar7 < 0) {
            uVar7 = 0;
          }
          if (0x3ff < (int)uVar7) {
            uVar7 = 0x3ff;
          }
        }
        puVar8 = puVar9 + 1;
        bVar3 = (byte)((uint)*(byte *)(*(long *)(param_1 + 0x38) + 3 + (ulong)uVar7 * 4) *
                       (uint)param_7 + 0xff >> 8);
        uVar6 = (*param_6)(bVar3,*puVar9,~bVar3);
        *puVar9 = uVar6;
        fVar12 = fVar12 + *(float *)param_1;
        fVar11 = fVar11 + *(float *)(param_1 + 0xc);
        puVar9 = puVar8;
      } while (puVar8 != param_2 + param_5);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* fillRadial(SwFill const*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned
   char*, unsigned char (*)(unsigned char, unsigned char, unsigned char), unsigned char) */

void fillRadial(SwFill *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5,uchar *param_6
               ,_func_uchar_uchar_uchar_uchar *param_7,uchar param_8)

{
  uchar uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  float fVar10;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_LC7 < *(float *)(param_1 + 0x34) || _LC7 == *(float *)(param_1 + 0x34)) {
    _calculateCoefficients
              (param_1,param_4,param_3,&local_54,&local_50,&local_4c,&local_48,&local_44);
    if (param_5 != 0) {
      pbVar9 = param_2;
      do {
        fVar5 = local_48;
        fVar4 = local_4c;
        fVar3 = local_54;
        if (local_4c < 0.0) {
          fVar10 = sqrtf(local_4c);
        }
        else {
          fVar10 = SQRT(local_4c);
        }
        iVar2 = *(int *)(param_1 + 0x40);
        uVar7 = (uint)(fVar10 * _LC8 + _LC0);
        if (iVar2 == 1) {
          uVar7 = (int)uVar7 % 0x800;
          if ((int)uVar7 < 0) {
            uVar7 = uVar7 + 0x800;
          }
          if (0x3ff < (int)uVar7) {
            uVar7 = 0x7ff - uVar7;
          }
        }
        else if (iVar2 == 2) {
          uVar7 = (int)uVar7 % 0x400;
          if ((int)uVar7 < 0) {
            uVar7 = uVar7 + 0x400;
          }
        }
        else if (iVar2 == 0) {
          if ((int)uVar7 < 0) {
            uVar7 = 0;
          }
          if (0x3ff < (int)uVar7) {
            uVar7 = 0x3ff;
          }
        }
        uVar1 = *param_6;
        pbVar8 = pbVar9 + 1;
        param_6 = param_6 + 1;
        bVar6 = (*param_7)((uchar)((uint)*(byte *)(*(long *)(param_1 + 0x38) + 3 + (ulong)uVar7 * 4)
                                   * (uint)param_8 + 0xff >> 8),uVar1,'\0');
        local_54 = fVar3 + local_50;
        local_4c = fVar4 + fVar5;
        local_48 = fVar5 + local_44;
        *pbVar9 = bVar6 + (char)((uint)*pbVar9 * (uint)(byte)~bVar6 + 0xff >> 8);
        pbVar9 = pbVar8;
      } while (pbVar8 != param_2 + param_5);
    }
  }
  else {
    pbVar9 = param_2;
    if (param_5 != 0) {
      do {
        pbVar8 = pbVar9 + 1;
        bVar6 = (*param_7)('\0',*param_6,'\0');
        param_6 = param_6 + 1;
        *pbVar9 = bVar6 + (char)((uint)(byte)~bVar6 * (uint)*pbVar9 + 0xff >> 8);
        pbVar9 = pbVar8;
      } while (pbVar8 != param_2 + param_5);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* fillRadial(SwFill const*, unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int
   (*)(unsigned int, unsigned int, unsigned char), unsigned int (*)(unsigned int, unsigned int,
   unsigned char), unsigned char) */

void fillRadial(SwFill *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
               _func_uint_uint_uint_uchar *param_6,_func_uint_uint_uint_uchar *param_7,uchar param_8
               )

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  fVar4 = _LC8;
  fVar3 = _LC0;
  uVar7 = (ulong)param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_LC7 < *(float *)(param_1 + 0x34) || _LC7 == *(float *)(param_1 + 0x34)) {
    _calculateCoefficients
              (param_1,param_4,param_3,&local_54,&local_50,&local_4c,&local_48,&local_44);
    fVar4 = _LC8;
    fVar3 = _LC0;
    if (param_8 == 0xff) {
      if ((int)uVar7 != 0) {
        puVar9 = param_2;
        do {
          fVar1 = local_48;
          fVar12 = local_4c;
          fVar11 = local_54;
          uVar6 = *puVar9;
          if (local_4c < 0.0) {
            fVar10 = sqrtf(local_4c);
          }
          else {
            fVar10 = SQRT(local_4c);
          }
          iVar2 = *(int *)(param_1 + 0x40);
          uVar5 = (uint)((fVar10 - fVar11) * fVar4 + fVar3);
          if (iVar2 == 1) {
            uVar5 = (int)uVar5 % 0x800;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0x800;
            }
            if (0x3ff < (int)uVar5) {
              uVar5 = 0x7ff - uVar5;
            }
          }
          else if (iVar2 == 2) {
            uVar5 = (int)uVar5 % 0x400;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0x400;
            }
          }
          else if (iVar2 == 0) {
            if ((int)uVar5 < 0) {
              uVar5 = 0;
            }
            if (0x3ff < (int)uVar5) {
              uVar5 = 0x3ff;
            }
          }
          puVar8 = puVar9 + 1;
          uVar6 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar5 * 4),uVar6,0xff);
          uVar6 = (*param_7)(uVar6,*puVar9,0xff);
          local_54 = fVar11 + local_50;
          *puVar9 = uVar6;
          local_4c = fVar12 + fVar1;
          local_48 = fVar1 + local_44;
          puVar9 = puVar8;
        } while (puVar8 != param_2 + uVar7);
      }
    }
    else if ((int)uVar7 != 0) {
      puVar9 = param_2;
      do {
        fVar1 = local_48;
        fVar12 = local_4c;
        fVar11 = local_54;
        uVar6 = *puVar9;
        if (local_4c < 0.0) {
          fVar10 = sqrtf(local_4c);
        }
        else {
          fVar10 = SQRT(local_4c);
        }
        iVar2 = *(int *)(param_1 + 0x40);
        uVar5 = (uint)((fVar10 - fVar11) * fVar4 + fVar3);
        if (iVar2 == 1) {
          uVar5 = (int)uVar5 % 0x800;
          if ((int)uVar5 < 0) {
            uVar5 = uVar5 + 0x800;
          }
          if (0x3ff < (int)uVar5) {
            uVar5 = 0x7ff - uVar5;
          }
        }
        else if (iVar2 == 2) {
          uVar5 = (int)uVar5 % 0x400;
          if ((int)uVar5 < 0) {
            uVar5 = uVar5 + 0x400;
          }
        }
        else if (iVar2 == 0) {
          if ((int)uVar5 < 0) {
            uVar5 = 0;
          }
          if (0x3ff < (int)uVar5) {
            uVar5 = 0x3ff;
          }
        }
        puVar8 = puVar9 + 1;
        uVar6 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar5 * 4),uVar6,0xff);
        uVar5 = (*param_7)(uVar6,*puVar9,0xff);
        uVar6 = *puVar9;
        local_4c = fVar12 + fVar1;
        local_48 = fVar1 + local_44;
        local_54 = fVar11 + local_50;
        *puVar9 = ((uVar5 >> 8 & 0xff00ff) - (uVar6 >> 8 & 0xff00ff)) * (uint)param_8 +
                  (uVar6 & 0xff00ff00) & 0xff00ff00 |
                  (((uVar5 & 0xff00ff) - (uVar6 & 0xff00ff)) * (uint)param_8 >> 8) +
                  (uVar6 & 0xff00ff) & 0xff00ff;
        puVar9 = puVar8;
      } while (puVar8 != param_2 + uVar7);
    }
  }
  else {
    fVar12 = (*(float *)param_1 * ((float)param_4 + _LC0) +
              *(float *)(param_1 + 4) * ((float)param_3 + _LC0) + *(float *)(param_1 + 8)) -
             *(float *)(param_1 + 0x18);
    fVar11 = (((float)param_4 + _LC0) * *(float *)(param_1 + 0xc) +
              ((float)param_3 + _LC0) * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x14)) -
             *(float *)(param_1 + 0x1c);
    if (param_8 == 0xff) {
      if (param_5 != 0) {
        puVar9 = param_2;
        do {
          fVar1 = *(float *)(param_1 + 0x20);
          iVar2 = *(int *)(param_1 + 0x40);
          uVar6 = (uint)(((((fVar12 * fVar12 + fVar11 * fVar11) - fVar1 * fVar1) * fVar3) /
                         (fVar1 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x24) * fVar12 +
                         *(float *)(param_1 + 0x28) * fVar11)) * fVar4 + fVar3);
          if (iVar2 == 1) {
            uVar6 = (int)uVar6 % 0x800;
            if ((int)uVar6 < 0) {
              uVar6 = uVar6 + 0x800;
            }
            if (0x3ff < (int)uVar6) {
              uVar6 = 0x7ff - uVar6;
            }
          }
          else if (iVar2 == 2) {
            uVar6 = (int)uVar6 % 0x400;
            if ((int)uVar6 < 0) {
              uVar6 = uVar6 + 0x400;
            }
          }
          else if (iVar2 == 0) {
            if ((int)uVar6 < 0) {
              uVar6 = 0;
            }
            if (0x3ff < (int)uVar6) {
              uVar6 = 0x3ff;
            }
          }
          puVar8 = puVar9 + 1;
          uVar6 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar6 * 4),*puVar9,0xff);
          uVar6 = (*param_7)(uVar6,*puVar9,0xff);
          fVar12 = fVar12 + *(float *)param_1;
          fVar11 = fVar11 + *(float *)(param_1 + 0xc);
          *puVar9 = uVar6;
          puVar9 = puVar8;
        } while (param_2 + uVar7 != puVar8);
      }
    }
    else if (param_5 != 0) {
      puVar9 = param_2;
      do {
        fVar1 = *(float *)(param_1 + 0x20);
        iVar2 = *(int *)(param_1 + 0x40);
        uVar6 = (uint)(((((fVar12 * fVar12 + fVar11 * fVar11) - fVar1 * fVar1) * fVar3) /
                       (fVar1 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x24) * fVar12 +
                       *(float *)(param_1 + 0x28) * fVar11)) * fVar4 + fVar3);
        if (iVar2 == 1) {
          uVar6 = (int)uVar6 % 0x800;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0x800;
          }
          if (0x3ff < (int)uVar6) {
            uVar6 = 0x7ff - uVar6;
          }
        }
        else if (iVar2 == 2) {
          uVar6 = (int)uVar6 % 0x400;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0x400;
          }
        }
        else if (iVar2 == 0) {
          if ((int)uVar6 < 0) {
            uVar6 = 0;
          }
          if (0x3ff < (int)uVar6) {
            uVar6 = 0x3ff;
          }
        }
        puVar8 = puVar9 + 1;
        uVar6 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar6 * 4),*puVar9,0xff);
        uVar5 = (*param_7)(uVar6,*puVar9,0xff);
        uVar6 = *puVar9;
        fVar12 = fVar12 + *(float *)param_1;
        fVar11 = fVar11 + *(float *)(param_1 + 0xc);
        *puVar9 = ((uVar5 >> 8 & 0xff00ff) - (uVar6 >> 8 & 0xff00ff)) * (uint)param_8 +
                  (uVar6 & 0xff00ff00) & 0xff00ff00 |
                  (((uVar5 & 0xff00ff) - (uVar6 & 0xff00ff)) * (uint)param_8 >> 8) +
                  (uVar6 & 0xff00ff) & 0xff00ff;
        puVar9 = puVar8;
      } while (puVar8 != param_2 + uVar7);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* fillLinear(SwFill const*, unsigned int*, unsigned int, unsigned int, unsigned int, unsigned
   char*, unsigned char (*)(unsigned char*), unsigned char, unsigned char) */

void fillLinear(SwFill *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uchar *param_6,
               _func_uchar_uchar_ptr *param_7,uchar param_8,uchar param_9)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint local_50;
  
  fVar1 = _LC12;
  fVar13 = *(float *)param_1 * _LC8;
  fVar11 = (((float)param_3 + _LC0) * *(float *)(param_1 + 4) +
            ((float)param_4 + _LC0) * *(float *)param_1 + *(float *)(param_1 + 8)) * _LC8;
  if (param_9 == 0xff) {
    if ((float)((uint)fVar13 & _LC2) <= _LC1) {
      iVar7 = *(int *)(param_1 + 0x40);
      iVar8 = (int)(fVar11 * _LC9) + 0x80;
      uVar6 = iVar8 >> 8;
      uVar4 = (ulong)uVar6;
      uVar3 = iVar8 >> 0x1f;
      if (iVar7 == 1) {
        uVar3 = uVar3 >> 0x15;
        uVar3 = (uVar6 + uVar3 & 0x7ff) - uVar3;
        if ((int)uVar3 < 0) {
          uVar3 = uVar3 + 0x800;
        }
        if (0x3ff < (int)uVar3) {
          uVar3 = 0x7ff - uVar3;
        }
        uVar4 = (ulong)uVar3;
      }
      else if (iVar7 == 2) {
        uVar3 = uVar3 >> 0x16;
        uVar3 = (uVar6 + uVar3 & 0x3ff) - uVar3;
        if ((int)uVar3 < 0) {
          uVar3 = uVar3 + 0x400;
        }
        uVar4 = (ulong)uVar3;
      }
      else if (iVar7 == 0) {
        if ((int)uVar6 < 0) {
          uVar4 = 0;
        }
        if (0x3ff < (int)uVar4) {
          uVar4 = 0x3ff;
        }
      }
      uVar3 = *(uint *)(*(long *)(param_1 + 0x38) + uVar4 * 4);
      if (param_5 != 0) {
        puVar10 = param_2;
        do {
          puVar9 = puVar10 + 1;
          bVar2 = (*param_7)(param_6);
          uVar6 = (bVar2 + 1) * (uVar3 & 0xff00ff) >> 8 & 0xff00ff |
                  (bVar2 + 1) * (uVar3 >> 8 & 0xff00ff) & 0xff00ff00;
          iVar7 = (~uVar6 >> 0x18) + 1;
          *puVar10 = ((*puVar10 >> 8 & 0xff00ff) * iVar7 & 0xff00ff00 |
                     (*puVar10 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) + uVar6;
          param_6 = param_6 + param_8;
          puVar10 = puVar9;
        } while (puVar9 != param_2 + param_5);
        return;
      }
    }
    else {
      uVar4 = (ulong)param_5;
      fVar12 = (float)uVar4 * fVar13 + fVar11;
      if ((_LC10 <= fVar12) || (fVar12 <= __LC11)) {
        if (param_5 != 0) {
          puVar10 = param_2;
          do {
            bVar2 = (*param_7)(param_6);
            iVar7 = *(int *)(param_1 + 0x40);
            uVar3 = (uint)(fVar1 * fVar11 * _LC8 + _LC0);
            if (iVar7 == 1) {
              uVar3 = (int)uVar3 % 0x800;
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 + 0x800;
              }
              if (0x3ff < (int)uVar3) {
                uVar3 = 0x7ff - uVar3;
              }
            }
            else if (iVar7 == 2) {
              uVar3 = (int)uVar3 % 0x400;
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 + 0x400;
              }
            }
            else if (iVar7 == 0) {
              if ((int)uVar3 < 0) {
                uVar3 = 0;
              }
              if (0x3ff < (int)uVar3) {
                uVar3 = 0x3ff;
              }
            }
            puVar9 = puVar10 + 1;
            uVar3 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar3 * 4);
            fVar11 = fVar11 + fVar13;
            param_6 = param_6 + param_8;
            uVar3 = (uVar3 >> 8 & 0xff00ff) * (bVar2 + 1) & 0xff00ff00 |
                    (uVar3 & 0xff00ff) * (bVar2 + 1) >> 8 & 0xff00ff;
            iVar7 = (~uVar3 >> 0x18) + 1;
            *puVar10 = ((*puVar10 >> 8 & 0xff00ff) * iVar7 & 0xff00ff00 |
                       (*puVar10 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) + uVar3;
            puVar10 = puVar9;
          } while (puVar9 != param_2 + uVar4);
        }
      }
      else {
        fVar13 = _LC9 * fVar13;
        if (param_5 != 0) {
          iVar7 = (int)(fVar11 * _LC9) + 0x80;
          puVar10 = param_2;
          do {
            bVar2 = (*param_7)(param_6);
            uVar3 = *(uint *)(param_1 + 0x40);
            uVar6 = iVar7 >> 8;
            uVar5 = (ulong)uVar6;
            if (uVar3 == 1) {
              uVar3 = (uint)(iVar7 >> 0x1f) >> 0x15;
              uVar3 = (uVar6 + uVar3 & 0x7ff) - uVar3;
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 + 0x800;
              }
              if (0x3ff < (int)uVar3) {
                uVar3 = 0x7ff - uVar3;
              }
              uVar5 = (ulong)uVar3;
            }
            else if (uVar3 == 2) {
              uVar3 = (uint)(iVar7 >> 0x1f) >> 0x16;
              uVar3 = (uVar6 + uVar3 & 0x3ff) - uVar3;
              if ((int)uVar3 < 0) {
                uVar3 = uVar3 + 0x400;
              }
              uVar5 = (ulong)uVar3;
            }
            else if (uVar3 == 0) {
              if ((int)uVar6 < 0) {
                uVar5 = (ulong)uVar3;
              }
              if (0x3ff < (int)uVar5) {
                uVar5 = 0x3ff;
              }
            }
            uVar3 = *(uint *)(*(long *)(param_1 + 0x38) + uVar5 * 4);
            puVar9 = puVar10 + 1;
            param_6 = param_6 + param_8;
            iVar7 = iVar7 + (int)fVar13;
            uVar3 = (uVar3 >> 8 & 0xff00ff) * (bVar2 + 1) & 0xff00ff00 |
                    (uVar3 & 0xff00ff) * (bVar2 + 1) >> 8 & 0xff00ff;
            iVar8 = (~uVar3 >> 0x18) + 1;
            *puVar10 = ((*puVar10 >> 8 & 0xff00ff) * iVar8 & 0xff00ff00 |
                       (*puVar10 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) + uVar3;
            puVar10 = puVar9;
          } while (puVar9 != param_2 + uVar4);
        }
      }
    }
  }
  else if ((float)((uint)fVar13 & _LC2) <= _LC1) {
    iVar7 = *(int *)(param_1 + 0x40);
    iVar8 = (int)(fVar11 * _LC9) + 0x80;
    uVar6 = iVar8 >> 8;
    uVar4 = (ulong)uVar6;
    uVar3 = iVar8 >> 0x1f;
    if (iVar7 == 1) {
      uVar3 = uVar3 >> 0x15;
      uVar3 = (uVar6 + uVar3 & 0x7ff) - uVar3;
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 + 0x800;
      }
      if (0x3ff < (int)uVar3) {
        uVar3 = 0x7ff - uVar3;
      }
      uVar4 = (ulong)uVar3;
    }
    else if (iVar7 == 2) {
      uVar3 = uVar3 >> 0x16;
      uVar3 = (uVar6 + uVar3 & 0x3ff) - uVar3;
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 + 0x400;
      }
      uVar4 = (ulong)uVar3;
    }
    else if (iVar7 == 0) {
      if ((int)uVar6 < 0) {
        uVar4 = 0;
      }
      if (0x3ff < (int)uVar4) {
        uVar4 = 0x3ff;
      }
    }
    uVar3 = *(uint *)(*(long *)(param_1 + 0x38) + uVar4 * 4);
    if (param_5 != 0) {
      local_50 = uVar3 >> 8 & 0xff00ff;
      puVar10 = param_2;
      do {
        puVar9 = puVar10 + 1;
        bVar2 = (*param_7)(param_6);
        iVar7 = ((int)((uint)bVar2 * (uint)param_9 + 0xff) >> 8) + 1;
        uVar6 = iVar7 * (uVar3 & 0xff00ff) >> 8 & 0xff00ff | iVar7 * local_50 & 0xff00ff00;
        iVar7 = (~uVar6 >> 0x18) + 1;
        *puVar10 = ((*puVar10 >> 8 & 0xff00ff) * iVar7 & 0xff00ff00 |
                   (*puVar10 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) + uVar6;
        param_6 = param_6 + param_8;
        puVar10 = puVar9;
      } while (puVar9 != param_2 + param_5);
    }
  }
  else {
    uVar4 = (ulong)param_5;
    fVar12 = (float)uVar4 * fVar13 + fVar11;
    if ((_LC10 <= fVar12) || (fVar12 <= __LC11)) {
      if (param_5 != 0) {
        puVar10 = param_2;
        do {
          bVar2 = (*param_7)(param_6);
          iVar7 = *(int *)(param_1 + 0x40);
          uVar3 = (uint)(fVar1 * fVar11 * _LC8 + _LC0);
          if (iVar7 == 1) {
            uVar3 = (int)uVar3 % 0x800;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0x800;
            }
            if (0x3ff < (int)uVar3) {
              uVar3 = 0x7ff - uVar3;
            }
          }
          else if (iVar7 == 2) {
            uVar3 = (int)uVar3 % 0x400;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0x400;
            }
          }
          else if (iVar7 == 0) {
            if ((int)uVar3 < 0) {
              uVar3 = 0;
            }
            if (0x3ff < (int)uVar3) {
              uVar3 = 0x3ff;
            }
          }
          iVar7 = ((int)((uint)bVar2 * (uint)param_9 + 0xff) >> 8) + 1;
          puVar9 = puVar10 + 1;
          uVar3 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar3 * 4);
          fVar11 = fVar11 + fVar13;
          param_6 = param_6 + param_8;
          uVar3 = (uVar3 & 0xff00ff) * iVar7 >> 8 & 0xff00ff |
                  (uVar3 >> 8 & 0xff00ff) * iVar7 & 0xff00ff00;
          iVar7 = (~uVar3 >> 0x18) + 1;
          *puVar10 = ((*puVar10 >> 8 & 0xff00ff) * iVar7 & 0xff00ff00 |
                     (*puVar10 & 0xff00ff) * iVar7 >> 8 & 0xff00ff) + uVar3;
          puVar10 = puVar9;
        } while (puVar9 != param_2 + uVar4);
      }
    }
    else {
      fVar13 = _LC9 * fVar13;
      if (param_5 != 0) {
        iVar7 = (int)(fVar11 * _LC9) + 0x80;
        puVar10 = param_2;
        do {
          bVar2 = (*param_7)(param_6);
          iVar8 = *(int *)(param_1 + 0x40);
          uVar3 = iVar7 >> 8;
          if (iVar8 == 1) {
            uVar6 = (uint)(iVar7 >> 0x1f) >> 0x15;
            uVar3 = (uVar3 + uVar6 & 0x7ff) - uVar6;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0x800;
            }
            if (0x3ff < (int)uVar3) {
              uVar3 = 0x7ff - uVar3;
            }
          }
          else if (iVar8 == 2) {
            uVar6 = (uint)(iVar7 >> 0x1f) >> 0x16;
            uVar3 = (uVar3 + uVar6 & 0x3ff) - uVar6;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0x400;
            }
          }
          else if (iVar8 == 0) {
            if ((int)uVar3 < 0) {
              uVar3 = 0;
            }
            if (0x3ff < (int)uVar3) {
              uVar3 = 0x3ff;
            }
          }
          iVar8 = ((int)((uint)bVar2 * (uint)param_9 + 0xff) >> 8) + 1;
          puVar9 = puVar10 + 1;
          uVar3 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar3 * 4);
          iVar7 = iVar7 + (int)fVar13;
          uVar3 = (uVar3 >> 8 & 0xff00ff) * iVar8 & 0xff00ff00 |
                  (uVar3 & 0xff00ff) * iVar8 >> 8 & 0xff00ff;
          iVar8 = (~uVar3 >> 0x18) + 1;
          *puVar10 = ((*puVar10 >> 8 & 0xff00ff) * iVar8 & 0xff00ff00 |
                     (*puVar10 & 0xff00ff) * iVar8 >> 8 & 0xff00ff) + uVar3;
          param_6 = param_6 + param_8;
          puVar10 = puVar9;
        } while (puVar9 != param_2 + uVar4);
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* fillLinear(SwFill const*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned char
   (*)(unsigned char, unsigned char, unsigned char), unsigned char) */

void fillLinear(SwFill *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5,
               _func_uchar_uchar_uchar_uchar *param_6,uchar param_7)

{
  byte bVar1;
  uchar uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uchar *puVar8;
  uchar *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = *(float *)param_1 * _LC8;
  fVar11 = (((float)param_3 + _LC0) * *(float *)(param_1 + 4) +
            ((float)param_4 + _LC0) * *(float *)param_1 + *(float *)(param_1 + 8)) * _LC8;
  if ((float)((uint)fVar13 & _LC2) <= _LC1) {
    iVar10 = *(int *)(param_1 + 0x40);
    iVar7 = (int)(fVar11 * _LC9) + 0x80;
    uVar4 = iVar7 >> 8;
    uVar6 = (ulong)uVar4;
    uVar3 = iVar7 >> 0x1f;
    if (iVar10 == 1) {
      uVar3 = uVar3 >> 0x15;
      uVar3 = (uVar4 + uVar3 & 0x7ff) - uVar3;
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 + 0x800;
      }
      if (0x3ff < (int)uVar3) {
        uVar3 = 0x7ff - uVar3;
      }
      uVar6 = (ulong)uVar3;
    }
    else if (iVar10 == 2) {
      uVar3 = uVar3 >> 0x16;
      uVar3 = (uVar4 + uVar3 & 0x3ff) - uVar3;
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 + 0x400;
      }
      uVar6 = (ulong)uVar3;
    }
    else if (iVar10 == 0) {
      if ((int)uVar4 < 0) {
        uVar6 = 0;
      }
      if (0x3ff < (int)uVar6) {
        uVar6 = 0x3ff;
      }
    }
    if (param_5 != 0) {
      bVar1 = (byte)((uint)param_7 * (uint)*(byte *)(*(long *)(param_1 + 0x38) + 3 + uVar6 * 4) +
                     0xff >> 8);
      puVar9 = param_2;
      do {
        puVar8 = puVar9 + 1;
        uVar2 = (*param_6)(bVar1,*puVar9,~bVar1);
        *puVar9 = uVar2;
        puVar9 = puVar8;
      } while (puVar8 != param_2 + param_5);
    }
  }
  else {
    uVar6 = (ulong)param_5;
    fVar12 = (float)uVar6 * fVar13 + fVar11;
    if ((_LC10 <= fVar12) || (fVar12 <= __LC11)) {
      puVar9 = param_2;
      if (param_5 != 0) {
        do {
          iVar10 = *(int *)(param_1 + 0x40);
          uVar3 = (uint)(_LC12 * fVar11 * _LC8 + _LC0);
          if (iVar10 == 1) {
            uVar3 = (int)uVar3 % 0x800;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0x800;
            }
            if (0x3ff < (int)uVar3) {
              uVar3 = 0x7ff - uVar3;
            }
          }
          else if (iVar10 == 2) {
            uVar3 = (int)uVar3 % 0x400;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0x400;
            }
          }
          else if (iVar10 == 0) {
            if ((int)uVar3 < 0) {
              uVar3 = 0;
            }
            if (0x3ff < (int)uVar3) {
              uVar3 = 0x3ff;
            }
          }
          puVar8 = puVar9 + 1;
          bVar1 = (byte)((uint)*(byte *)(*(long *)(param_1 + 0x38) + 3 + (ulong)uVar3 * 4) *
                         (uint)param_7 + 0xff >> 8);
          uVar2 = (*param_6)(bVar1,*puVar9,~bVar1);
          fVar11 = fVar11 + fVar13;
          *puVar9 = uVar2;
          puVar9 = puVar8;
        } while (puVar8 != param_2 + uVar6);
      }
    }
    else {
      fVar13 = _LC9 * fVar13;
      if (param_5 != 0) {
        iVar10 = (int)(fVar11 * _LC9) + 0x80;
        puVar9 = param_2;
        do {
          uVar3 = *(uint *)(param_1 + 0x40);
          uVar4 = iVar10 >> 8;
          uVar5 = (ulong)uVar4;
          if (uVar3 == 1) {
            uVar3 = (uint)(iVar10 >> 0x1f) >> 0x15;
            uVar3 = (uVar4 + uVar3 & 0x7ff) - uVar3;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0x800;
            }
            if (0x3ff < (int)uVar3) {
              uVar3 = 0x7ff - uVar3;
            }
            uVar5 = (ulong)uVar3;
          }
          else if (uVar3 == 2) {
            uVar3 = (uint)(iVar10 >> 0x1f) >> 0x16;
            uVar3 = (uVar4 + uVar3 & 0x3ff) - uVar3;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0x400;
            }
            uVar5 = (ulong)uVar3;
          }
          else if (uVar3 == 0) {
            if ((int)uVar4 < 0) {
              uVar5 = (ulong)uVar3;
            }
            if (0x3ff < (int)uVar5) {
              uVar5 = 0x3ff;
            }
          }
          puVar8 = puVar9 + 1;
          iVar10 = iVar10 + (int)fVar13;
          bVar1 = (byte)((uint)*(byte *)(*(long *)(param_1 + 0x38) + 3 + uVar5 * 4) * (uint)param_7
                         + 0xff >> 8);
          uVar2 = (*param_6)(bVar1,*puVar9,~bVar1);
          *puVar9 = uVar2;
          puVar9 = puVar8;
        } while (puVar8 != param_2 + uVar6);
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* fillLinear(SwFill const*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned
   char*, unsigned char (*)(unsigned char, unsigned char, unsigned char), unsigned char) */

void fillLinear(SwFill *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5,uchar *param_6
               ,_func_uchar_uchar_uchar_uchar *param_7,uchar param_8)

{
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar14 = *(float *)param_1 * _LC8;
  fVar12 = (((float)param_3 + _LC0) * *(float *)(param_1 + 4) +
            ((float)param_4 + _LC0) * *(float *)param_1 + *(float *)(param_1 + 8)) * _LC8;
  if ((float)((uint)fVar14 & _LC2) <= _LC1) {
    iVar10 = *(int *)(param_1 + 0x40);
    iVar8 = (int)(fVar12 * _LC9) + 0x80;
    uVar5 = iVar8 >> 8;
    uVar7 = (ulong)uVar5;
    uVar4 = iVar8 >> 0x1f;
    if (iVar10 == 1) {
      uVar4 = uVar4 >> 0x15;
      uVar4 = (uVar5 + uVar4 & 0x7ff) - uVar4;
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 + 0x800;
      }
      if (0x3ff < (int)uVar4) {
        uVar4 = 0x7ff - uVar4;
      }
      uVar7 = (ulong)uVar4;
    }
    else if (iVar10 == 2) {
      uVar4 = uVar4 >> 0x16;
      uVar4 = (uVar5 + uVar4 & 0x3ff) - uVar4;
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 + 0x400;
      }
      uVar7 = (ulong)uVar4;
    }
    else if (iVar10 == 0) {
      if ((int)uVar5 < 0) {
        uVar7 = 0;
      }
      if (0x3ff < (int)uVar7) {
        uVar7 = 0x3ff;
      }
    }
    bVar2 = *(byte *)(*(long *)(param_1 + 0x38) + 3 + uVar7 * 4);
    pbVar11 = param_2 + param_5;
    if (param_5 != 0) {
      do {
        pbVar9 = param_2 + 1;
        bVar3 = (*param_7)((uchar)((uint)param_8 * (uint)bVar2 + 0xff >> 8),*param_6,'\0');
        param_6 = param_6 + 1;
        *param_2 = bVar3 + (char)((uint)*param_2 * (uint)(byte)~bVar3 + 0xff >> 8);
        param_2 = pbVar9;
      } while (pbVar9 != pbVar11);
    }
  }
  else {
    uVar7 = (ulong)param_5;
    fVar13 = (float)uVar7 * fVar14 + fVar12;
    if ((_LC10 <= fVar13) || (fVar13 <= __LC11)) {
      pbVar11 = param_2;
      if (param_5 != 0) {
        do {
          iVar10 = *(int *)(param_1 + 0x40);
          uVar4 = (uint)(_LC12 * fVar12 * _LC8 + _LC0);
          if (iVar10 == 1) {
            uVar4 = (int)uVar4 % 0x800;
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 + 0x800;
            }
            if (0x3ff < (int)uVar4) {
              uVar4 = 0x7ff - uVar4;
            }
          }
          else if (iVar10 == 2) {
            uVar4 = (int)uVar4 % 0x400;
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 + 0x400;
            }
          }
          else if (iVar10 == 0) {
            if ((int)uVar4 < 0) {
              uVar4 = 0;
            }
            if (0x3ff < (int)uVar4) {
              uVar4 = 0x3ff;
            }
          }
          uVar1 = *param_6;
          pbVar9 = pbVar11 + 1;
          param_6 = param_6 + 1;
          bVar2 = (*param_7)((uchar)((uint)*(byte *)(*(long *)(param_1 + 0x38) + 3 +
                                                    (ulong)uVar4 * 4) * (uint)param_8 + 0xff >> 8),
                             uVar1,'\0');
          fVar12 = fVar12 + fVar14;
          *pbVar11 = bVar2 + (char)((uint)*pbVar11 * (uint)(byte)~bVar2 + 0xff >> 8);
          pbVar11 = pbVar9;
        } while (pbVar9 != param_2 + uVar7);
      }
    }
    else {
      fVar14 = _LC9 * fVar14;
      if (param_5 != 0) {
        iVar10 = (int)(fVar12 * _LC9) + 0x80;
        pbVar11 = param_2;
        do {
          uVar4 = *(uint *)(param_1 + 0x40);
          uVar5 = iVar10 >> 8;
          uVar6 = (ulong)uVar5;
          if (uVar4 == 1) {
            uVar4 = (uint)(iVar10 >> 0x1f) >> 0x15;
            uVar4 = (uVar5 + uVar4 & 0x7ff) - uVar4;
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 + 0x800;
            }
            if (0x3ff < (int)uVar4) {
              uVar4 = 0x7ff - uVar4;
            }
            uVar6 = (ulong)uVar4;
          }
          else if (uVar4 == 2) {
            uVar4 = (uint)(iVar10 >> 0x1f) >> 0x16;
            uVar4 = (uVar5 + uVar4 & 0x3ff) - uVar4;
            if ((int)uVar4 < 0) {
              uVar4 = uVar4 + 0x400;
            }
            uVar6 = (ulong)uVar4;
          }
          else if (uVar4 == 0) {
            if ((int)uVar5 < 0) {
              uVar6 = (ulong)uVar4;
            }
            if (0x3ff < (int)uVar6) {
              uVar6 = 0x3ff;
            }
          }
          pbVar9 = pbVar11 + 1;
          uVar1 = *param_6;
          param_6 = param_6 + 1;
          bVar2 = (*param_7)((uchar)((uint)*(byte *)(*(long *)(param_1 + 0x38) + 3 + uVar6 * 4) *
                                     (uint)param_8 + 0xff >> 8),uVar1,'\0');
          *pbVar11 = bVar2 + (char)((uint)*pbVar11 * (uint)(byte)~bVar2 + 0xff >> 8);
          iVar10 = iVar10 + (int)fVar14;
          pbVar11 = pbVar9;
        } while (pbVar9 != param_2 + uVar7);
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* fillLinear(SwFill const*, unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int
   (*)(unsigned int, unsigned int, unsigned char), unsigned char) */

void fillLinear(SwFill *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
               _func_uint_uint_uint_uchar *param_6,uchar param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = *(float *)param_1 * _LC8;
  fVar9 = (((float)param_3 + _LC0) * *(float *)(param_1 + 4) +
           ((float)param_4 + _LC0) * *(float *)param_1 + *(float *)(param_1 + 8)) * _LC8;
  if ((float)((uint)fVar11 & _LC2) <= _LC1) {
    iVar8 = *(int *)(param_1 + 0x40);
    iVar5 = (int)(fVar9 * _LC9) + 0x80;
    uVar2 = iVar5 >> 8;
    uVar4 = (ulong)uVar2;
    uVar1 = iVar5 >> 0x1f;
    if (iVar8 == 1) {
      uVar1 = uVar1 >> 0x15;
      uVar1 = (uVar2 + uVar1 & 0x7ff) - uVar1;
      if ((int)uVar1 < 0) {
        uVar1 = uVar1 + 0x800;
      }
      if (0x3ff < (int)uVar1) {
        uVar1 = 0x7ff - uVar1;
      }
      uVar4 = (ulong)uVar1;
    }
    else if (iVar8 == 2) {
      uVar1 = uVar1 >> 0x16;
      uVar1 = (uVar2 + uVar1 & 0x3ff) - uVar1;
      if ((int)uVar1 < 0) {
        uVar1 = uVar1 + 0x400;
      }
      uVar4 = (ulong)uVar1;
    }
    else if (iVar8 == 0) {
      if ((int)uVar2 < 0) {
        uVar4 = 0;
      }
      if (0x3ff < (int)uVar4) {
        uVar4 = 0x3ff;
      }
    }
    uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + uVar4 * 4);
    if (param_5 != 0) {
      puVar7 = param_2;
      do {
        puVar6 = puVar7 + 1;
        uVar2 = (*param_6)(uVar1,*puVar7,param_7);
        *puVar7 = uVar2;
        puVar7 = puVar6;
      } while (puVar6 != param_2 + param_5);
    }
  }
  else {
    uVar4 = (ulong)param_5;
    fVar10 = (float)uVar4 * fVar11 + fVar9;
    if ((_LC10 <= fVar10) || (fVar10 <= __LC11)) {
      if (param_5 != 0) {
        puVar7 = param_2;
        do {
          iVar8 = *(int *)(param_1 + 0x40);
          uVar1 = (uint)(_LC12 * fVar9 * _LC8 + _LC0);
          if (iVar8 == 1) {
            uVar1 = (int)uVar1 % 0x800;
            if ((int)uVar1 < 0) {
              uVar1 = uVar1 + 0x800;
            }
            if (0x3ff < (int)uVar1) {
              uVar1 = 0x7ff - uVar1;
            }
          }
          else if (iVar8 == 2) {
            uVar1 = (int)uVar1 % 0x400;
            if ((int)uVar1 < 0) {
              uVar1 = uVar1 + 0x400;
            }
          }
          else if (iVar8 == 0) {
            if ((int)uVar1 < 0) {
              uVar1 = 0;
            }
            if (0x3ff < (int)uVar1) {
              uVar1 = 0x3ff;
            }
          }
          puVar6 = puVar7 + 1;
          uVar1 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 4),*puVar7,param_7
                            );
          fVar9 = fVar9 + fVar11;
          *puVar7 = uVar1;
          puVar7 = puVar6;
        } while (puVar6 != param_2 + uVar4);
      }
    }
    else {
      fVar11 = _LC9 * fVar11;
      if (param_5 != 0) {
        iVar8 = (int)(fVar9 * _LC9) + 0x80;
        puVar7 = param_2;
        do {
          uVar1 = *(uint *)(param_1 + 0x40);
          uVar2 = iVar8 >> 8;
          uVar3 = (ulong)uVar2;
          if (uVar1 == 1) {
            uVar1 = (uint)(iVar8 >> 0x1f) >> 0x15;
            uVar1 = (uVar2 + uVar1 & 0x7ff) - uVar1;
            if ((int)uVar1 < 0) {
              uVar1 = uVar1 + 0x800;
            }
            if (0x3ff < (int)uVar1) {
              uVar1 = 0x7ff - uVar1;
            }
            uVar3 = (ulong)uVar1;
          }
          else if (uVar1 == 2) {
            uVar1 = (uint)(iVar8 >> 0x1f) >> 0x16;
            uVar1 = (uVar2 + uVar1 & 0x3ff) - uVar1;
            if ((int)uVar1 < 0) {
              uVar1 = uVar1 + 0x400;
            }
            uVar3 = (ulong)uVar1;
          }
          else if (uVar1 == 0) {
            if ((int)uVar2 < 0) {
              uVar3 = (ulong)uVar1;
            }
            if (0x3ff < (int)uVar3) {
              uVar3 = 0x3ff;
            }
          }
          puVar6 = puVar7 + 1;
          iVar8 = iVar8 + (int)fVar11;
          uVar1 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + uVar3 * 4),*puVar7,param_7);
          *puVar7 = uVar1;
          puVar7 = puVar6;
        } while (puVar6 != param_2 + uVar4);
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* fillLinear(SwFill const*, unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int
   (*)(unsigned int, unsigned int, unsigned char), unsigned int (*)(unsigned int, unsigned int,
   unsigned char), unsigned char) */

void fillLinear(SwFill *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
               _func_uint_uint_uint_uchar *param_6,_func_uint_uint_uint_uchar *param_7,uchar param_8
               )

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = _LC12;
  fVar13 = *(float *)param_1 * _LC8;
  fVar11 = (((float)param_3 + _LC0) * *(float *)(param_1 + 4) +
            ((float)param_4 + _LC0) * *(float *)param_1 + *(float *)(param_1 + 8)) * _LC8;
  if ((float)((uint)fVar13 & _LC2) <= _LC1) {
    iVar10 = *(int *)(param_1 + 0x40);
    iVar7 = (int)(fVar11 * _LC9) + 0x80;
    uVar2 = iVar7 >> 8;
    uVar5 = (ulong)uVar2;
    uVar6 = iVar7 >> 0x1f;
    if (iVar10 == 1) {
      uVar6 = uVar6 >> 0x15;
      uVar6 = (uVar2 + uVar6 & 0x7ff) - uVar6;
      if ((int)uVar6 < 0) {
        uVar6 = uVar6 + 0x800;
      }
      if (0x3ff < (int)uVar6) {
        uVar6 = 0x7ff - uVar6;
      }
      uVar5 = (ulong)uVar6;
    }
    else if (iVar10 == 2) {
      uVar6 = uVar6 >> 0x16;
      uVar6 = (uVar2 + uVar6 & 0x3ff) - uVar6;
      if ((int)uVar6 < 0) {
        uVar6 = uVar6 + 0x400;
      }
      uVar5 = (ulong)uVar6;
    }
    else if (iVar10 == 0) {
      if ((int)uVar2 < 0) {
        uVar5 = 0;
      }
      if (0x3ff < (int)uVar5) {
        uVar5 = 0x3ff;
      }
    }
    uVar6 = *(uint *)(*(long *)(param_1 + 0x38) + uVar5 * 4);
    if (param_8 == 0xff) {
      if (param_5 != 0) {
        puVar9 = param_2;
        do {
          puVar8 = puVar9 + 1;
          uVar2 = (*param_6)(uVar6,*puVar9,0xff);
          uVar2 = (*param_7)(uVar2,*puVar9,0xff);
          *puVar9 = uVar2;
          puVar9 = puVar8;
        } while (puVar8 != param_2 + param_5);
        return;
      }
    }
    else if (param_5 != 0) {
      puVar9 = param_2;
      do {
        puVar8 = puVar9 + 1;
        uVar2 = (*param_6)(uVar6,*puVar9,param_8);
        uVar3 = (*param_7)(uVar2,*puVar9,0xff);
        uVar2 = *puVar9;
        *puVar9 = (((uVar3 & 0xff00ff) - (uVar2 & 0xff00ff)) * (uint)param_8 >> 8) +
                  (uVar2 & 0xff00ff) & 0xff00ff |
                  ((uVar3 >> 8 & 0xff00ff) - (uVar2 >> 8 & 0xff00ff)) * (uint)param_8 +
                  (uVar2 & 0xff00ff00) & 0xff00ff00;
        puVar9 = puVar8;
      } while (puVar8 != param_2 + param_5);
    }
  }
  else {
    uVar5 = (ulong)param_5;
    fVar12 = (float)uVar5 * fVar13 + fVar11;
    if (param_8 == 0xff) {
      if ((_LC10 <= fVar12) || (fVar12 <= __LC11)) {
        if (param_5 != 0) {
          puVar9 = param_2;
          do {
            iVar10 = *(int *)(param_1 + 0x40);
            uVar6 = (uint)(fVar1 * fVar11 * _LC8 + _LC0);
            if (iVar10 == 1) {
              uVar6 = (int)uVar6 % 0x800;
              if ((int)uVar6 < 0) {
                uVar6 = uVar6 + 0x800;
              }
              if (0x3ff < (int)uVar6) {
                uVar6 = 0x7ff - uVar6;
              }
            }
            else if (iVar10 == 2) {
              uVar6 = (int)uVar6 % 0x400;
              if ((int)uVar6 < 0) {
                uVar6 = uVar6 + 0x400;
              }
            }
            else if (iVar10 == 0) {
              if ((int)uVar6 < 0) {
                uVar6 = 0;
              }
              if (0x3ff < (int)uVar6) {
                uVar6 = 0x3ff;
              }
            }
            puVar8 = puVar9 + 1;
            uVar6 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar6 * 4),*puVar9,0xff)
            ;
            uVar6 = (*param_7)(uVar6,*puVar9,0xff);
            fVar11 = fVar11 + fVar13;
            *puVar9 = uVar6;
            puVar9 = puVar8;
          } while (puVar8 != param_2 + uVar5);
        }
      }
      else {
        fVar13 = _LC9 * fVar13;
        if (param_5 != 0) {
          iVar10 = (int)(fVar11 * _LC9) + 0x80;
          puVar9 = param_2;
          do {
            uVar6 = *(uint *)(param_1 + 0x40);
            uVar2 = iVar10 >> 8;
            uVar4 = (ulong)uVar2;
            if (uVar6 == 1) {
              uVar6 = (uint)(iVar10 >> 0x1f) >> 0x15;
              uVar6 = (uVar2 + uVar6 & 0x7ff) - uVar6;
              if ((int)uVar6 < 0) {
                uVar6 = uVar6 + 0x800;
              }
              if (0x3ff < (int)uVar6) {
                uVar6 = 0x7ff - uVar6;
              }
              uVar4 = (ulong)uVar6;
            }
            else if (uVar6 == 2) {
              uVar6 = (uint)(iVar10 >> 0x1f) >> 0x16;
              uVar6 = (uVar2 + uVar6 & 0x3ff) - uVar6;
              if ((int)uVar6 < 0) {
                uVar6 = uVar6 + 0x400;
              }
              uVar4 = (ulong)uVar6;
            }
            else if (uVar6 == 0) {
              if ((int)uVar2 < 0) {
                uVar4 = (ulong)uVar6;
              }
              if (0x3ff < (int)uVar4) {
                uVar4 = 0x3ff;
              }
            }
            puVar8 = puVar9 + 1;
            iVar10 = iVar10 + (int)fVar13;
            uVar6 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + uVar4 * 4),*puVar9,0xff);
            uVar6 = (*param_7)(uVar6,*puVar9,0xff);
            *puVar9 = uVar6;
            puVar9 = puVar8;
          } while (puVar8 != param_2 + uVar5);
        }
      }
    }
    else if ((_LC10 <= fVar12) || (fVar12 <= __LC11)) {
      if (param_5 != 0) {
        puVar9 = param_2;
        do {
          iVar10 = *(int *)(param_1 + 0x40);
          uVar6 = (uint)(fVar1 * fVar11 * _LC8 + _LC0);
          if (iVar10 == 1) {
            uVar6 = (int)uVar6 % 0x800;
            if ((int)uVar6 < 0) {
              uVar6 = uVar6 + 0x800;
            }
            if (0x3ff < (int)uVar6) {
              uVar6 = 0x7ff - uVar6;
            }
          }
          else if (iVar10 == 2) {
            uVar6 = (int)uVar6 % 0x400;
            if ((int)uVar6 < 0) {
              uVar6 = uVar6 + 0x400;
            }
          }
          else if (iVar10 == 0) {
            if ((int)uVar6 < 0) {
              uVar6 = 0;
            }
            if (0x3ff < (int)uVar6) {
              uVar6 = 0x3ff;
            }
          }
          puVar8 = puVar9 + 1;
          uVar6 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar6 * 4),*puVar9,0xff);
          uVar2 = (*param_7)(uVar6,*puVar9,0xff);
          uVar6 = *puVar9;
          fVar11 = fVar11 + fVar13;
          *puVar9 = ((uVar2 >> 8 & 0xff00ff) - (uVar6 >> 8 & 0xff00ff)) * (uint)param_8 +
                    (uVar6 & 0xff00ff00) & 0xff00ff00 |
                    (((uVar2 & 0xff00ff) - (uVar6 & 0xff00ff)) * (uint)param_8 >> 8) +
                    (uVar6 & 0xff00ff) & 0xff00ff;
          puVar9 = puVar8;
        } while (puVar8 != param_2 + uVar5);
      }
    }
    else {
      fVar13 = _LC9 * fVar13;
      if (param_5 != 0) {
        iVar10 = (int)(fVar11 * _LC9) + 0x80;
        puVar9 = param_2;
        do {
          uVar6 = *(uint *)(param_1 + 0x40);
          uVar2 = iVar10 >> 8;
          uVar4 = (ulong)uVar2;
          if (uVar6 == 1) {
            uVar6 = (uint)(iVar10 >> 0x1f) >> 0x15;
            uVar6 = (uVar2 + uVar6 & 0x7ff) - uVar6;
            if ((int)uVar6 < 0) {
              uVar6 = uVar6 + 0x800;
            }
            if (0x3ff < (int)uVar6) {
              uVar6 = 0x7ff - uVar6;
            }
            uVar4 = (ulong)uVar6;
          }
          else if (uVar6 == 2) {
            uVar6 = (uint)(iVar10 >> 0x1f) >> 0x16;
            uVar6 = (uVar2 + uVar6 & 0x3ff) - uVar6;
            if ((int)uVar6 < 0) {
              uVar6 = uVar6 + 0x400;
            }
            uVar4 = (ulong)uVar6;
          }
          else if (uVar6 == 0) {
            if ((int)uVar2 < 0) {
              uVar4 = (ulong)uVar6;
            }
            if (0x3ff < (int)uVar4) {
              uVar4 = 0x3ff;
            }
          }
          puVar8 = puVar9 + 1;
          uVar6 = (*param_6)(*(uint *)(*(long *)(param_1 + 0x38) + uVar4 * 4),*puVar9,0xff);
          uVar2 = (*param_7)(uVar6,*puVar9,0xff);
          uVar6 = *puVar9;
          *puVar9 = ((uVar2 >> 8 & 0xff00ff) - (uVar6 >> 8 & 0xff00ff)) * (uint)param_8 +
                    (uVar6 & 0xff00ff00) & 0xff00ff00 |
                    (((uVar2 & 0xff00ff) - (uVar6 & 0xff00ff)) * (uint)param_8 >> 8) +
                    (uVar6 & 0xff00ff) & 0xff00ff;
          iVar10 = iVar10 + (int)fVar13;
          puVar9 = puVar8;
        } while (puVar8 != param_2 + uVar5);
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* fillGenColorTable(SwFill*, tvg::Fill const*, tvg::Matrix const&, SwSurface*, unsigned char, bool)
    */

ulong fillGenColorTable(SwFill *param_1,Fill *param_2,Matrix *param_3,SwSurface *param_4,
                       uchar param_5,bool param_6)

{
  float fVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  void *pvVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  undefined7 in_register_00000089;
  uint uVar20;
  int iVar21;
  long in_FS_OFFSET;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong local_78;
  uint local_54;
  float *local_48;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (SwFill *)0x0) {
LAB_00103c88:
    uVar18 = 0;
    goto LAB_00103c42;
  }
  uVar9 = tvg::Fill::spread();
  *(undefined4 *)(param_1 + 0x40) = uVar9;
  cVar8 = (**(code **)(*(long *)param_2 + 0x10))(param_2);
  if (cVar8 == '\n') {
    cVar8 = _prepareLinear(param_1,(LinearGradient *)param_2,param_3);
joined_r0x00103c80:
    if (cVar8 == '\0') goto LAB_00103c88;
  }
  else {
    cVar8 = (**(code **)(*(long *)param_2 + 0x10))(param_2);
    if (cVar8 == '\v') {
      cVar8 = _prepareRadial(param_1,(RadialGradient *)param_2,param_3);
      goto joined_r0x00103c80;
    }
  }
  uVar18 = 1;
  if (!param_6) goto LAB_00103c42;
  if (param_1[0x44] == (SwFill)0x0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      pvVar16 = malloc(0x1000);
      uVar18 = 0;
      *(void **)(param_1 + 0x38) = pvVar16;
      if (pvVar16 == (void *)0x0) goto LAB_00103c42;
    }
    iVar10 = tvg::Fill::colorStops((ColorStop **)param_2);
    uVar18 = 0;
    if ((iVar10 == 0) || (local_48 == (float *)0x0)) goto LAB_00103c42;
    iVar21 = (int)((uint)*(byte *)((long)local_48 + 7) * (uint)param_5 + 0xff) >> 8;
    if (iVar21 != 0xff) {
      param_1[0x45] = (SwFill)0x1;
    }
    uVar11 = (**(code **)(param_4 + 0x40))
                       (*(undefined1 *)(local_48 + 1),*(undefined1 *)((long)local_48 + 5),
                        *(undefined1 *)((long)local_48 + 6),iVar21);
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 2) {
      cVar8 = (**(code **)(*(long *)param_2 + 0x10))(param_2);
      pfVar5 = *(float **)(param_2 + 0x10);
      if (cVar8 == '\v') {
        if ((float)((uint)pfVar5[4] & _LC2) <= _LC1) goto LAB_00103d30;
        local_78 = (ulong)(_LC15 / pfVar5[4]);
      }
      else {
        fVar24 = pfVar5[2] - *pfVar5;
        fVar26 = pfVar5[3] - pfVar5[1];
        if (fVar24 < 0.0) {
          fVar24 = (float)((uint)fVar24 ^ __LC4);
        }
        if (fVar26 < 0.0) {
          fVar26 = (float)((uint)fVar26 ^ __LC4);
        }
        if (fVar24 <= fVar26) {
          fVar26 = fVar24 * __LC16 + fVar26;
          fVar24 = (float)((uint)fVar26 & _LC2);
        }
        else {
          fVar24 = fVar24 + fVar26 * __LC16;
          fVar26 = fVar24;
        }
        if (fVar24 <= _LC1) goto LAB_00103d30;
        local_78 = (ulong)(_LC15 / fVar26);
      }
    }
    else {
LAB_00103d30:
      local_78 = 0;
    }
    fVar26 = *local_48;
    puVar19 = *(uint **)(param_1 + 0x38);
    uVar17 = (uVar11 >> 8 & 0xff00ff | 0xff0000) * (iVar21 + 1) & 0xff00ff00 |
             (uVar11 & 0xff00ff) * (iVar21 + 1) >> 8 & 0xff00ff;
    bVar6 = fVar26 < _LC14;
    *puVar19 = uVar17;
    if (bVar6) {
      if (iVar10 != 1) {
        uVar20 = 1;
        fVar24 = _LC14;
        goto LAB_00103dd4;
      }
      uVar20 = 1;
LAB_00104428:
      local_54 = 0;
LAB_001040b8:
      puVar15 = puVar19 + uVar20;
      do {
        *puVar15 = uVar17;
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar19 + (ulong)(0x3ff - uVar20) + (ulong)uVar20 + 1);
    }
    else {
      bVar6 = _LC13 <= fVar26;
      puVar19[1] = uVar17;
      fVar22 = _LC12;
      uVar20 = 2;
      fVar24 = _LC13;
      if (bVar6) {
        do {
          fVar24 = fVar24 + fVar22;
          uVar12 = uVar20 - 1;
          uVar18 = (ulong)uVar20;
          uVar20 = uVar20 + 1;
          puVar19[uVar18] = puVar19[uVar12];
        } while (fVar24 <= fVar26);
        if (iVar10 != 1) goto LAB_00103dd4;
        local_54 = 0;
      }
      else {
        if (iVar10 == 1) goto LAB_00104428;
LAB_00103dd4:
        uVar18 = 0;
        local_54 = 0;
        do {
          if (((iVar2 == 2) && (local_54 == 0)) && (iVar10 + -2 == (int)uVar18)) {
            uVar17 = 0x28;
            if ((uint)local_78 < 0x29) {
              uVar17 = (uint)local_78;
            }
            local_54 = (uint)(long)((float)(0x400 - uVar20) * __LC17);
            if (uVar17 <= local_54) {
              local_54 = uVar17;
            }
          }
          pfVar5 = local_48 + uVar18 * 2;
          fVar26 = _LC6 / (pfVar5[2] - *pfVar5);
          iVar21 = (int)((uint)*(byte *)((long)pfVar5 + 0xf) * (uint)param_5 + 0xff) >> 8;
          if ((param_1[0x45] != (SwFill)0x1) && (iVar21 != 0xff)) {
            param_1[0x45] = (SwFill)0x1;
          }
          uVar17 = (**(code **)(param_4 + 0x40))
                             (*(undefined1 *)(pfVar5 + 3),*(undefined1 *)((long)pfVar5 + 0xd),
                              *(undefined1 *)((long)pfVar5 + 0xe),iVar21);
          fVar7 = _LC18;
          fVar23 = _LC12;
          fVar22 = pfVar5[2];
          if ((uVar20 < 0x400) && (fVar24 < fVar22)) {
            fVar1 = *pfVar5;
            puVar19 = (uint *)(*(long *)(param_1 + 0x38) + (ulong)uVar20 * 4);
            fVar25 = fVar24;
            do {
              fVar24 = fVar25 + fVar23;
              uVar20 = uVar20 + 1;
              uVar12 = 0xffU - (int)((fVar25 - fVar1) * fVar26 * fVar7) & 0xff;
              uVar13 = uVar12 * ((uVar11 >> 8 & 0xff00ff) - (uVar17 >> 8 & 0xff00ff)) +
                       (uVar17 & 0xff00ff00);
              iVar14 = (uVar13 >> 0x18) + 1;
              *puVar19 = ((uVar13 & 0xff00ff00) >> 8 | 0xff0000) * iVar14 & 0xff00ff00 |
                         iVar14 * ((uVar12 * ((uVar11 & 0xff00ff) - (uVar17 & 0xff00ff)) >> 8) +
                                   (uVar17 & 0xff00ff) & 0xff00ff) >> 8 & 0xff00ff;
              if (fVar22 <= fVar24) break;
              puVar19 = puVar19 + 1;
              fVar25 = fVar24;
            } while (uVar20 < 0x400);
          }
          if (((int)uVar18 == 0) && (iVar2 == 2)) {
            uVar11 = 0x28;
            if ((uint)local_78 < 0x29) {
              uVar11 = (uint)local_78;
            }
            uVar12 = (uint)(long)((float)(uVar20 - 1) * __LC17);
            if (uVar11 <= uVar12) {
              uVar12 = uVar11;
            }
            local_78 = (ulong)uVar12;
          }
          uVar18 = uVar18 + 1;
          uVar11 = uVar17;
        } while (uVar18 != iVar10 - 1);
        uVar17 = (uVar17 >> 8 & 0xff00ff | 0xff0000) * (iVar21 + 1) & 0xff00ff00 |
                 (uVar17 & 0xff00ff) * (iVar21 + 1) >> 8 & 0xff00ff;
      }
      if (uVar20 < 0x400) {
        puVar19 = *(uint **)(param_1 + 0x38);
        goto LAB_001040b8;
      }
    }
    fVar26 = _LC18;
    if (iVar2 == 2) {
      if (((uint)local_78 != 0) && (local_54 != 0)) {
        lVar4 = *(long *)(param_1 + 0x38);
        uVar17 = 0x400 - local_54;
        uVar11 = *(uint *)(lVar4 + (ulong)uVar17 * 4);
        if ((uVar11 >> 0x18 != 0xff) && (uVar11 >> 0x18 != 0)) {
          fVar24 = _LC18 / (float)(uVar11 >> 0x18);
          uVar11 = ((int)((float)(uVar11 >> 8 & 0xff) * fVar24) & 0xffU) << 8 |
                   (int)((float)(uVar11 & 0xff) * fVar24) & 0xffU | uVar11 & 0xff000000 |
                   ((int)((float)(uVar11 >> 0x10 & 0xff) * fVar24) & 0xffU) << 0x10;
        }
        uVar20 = *(uint *)(lVar4 + (local_78 & 0xffffffff) * 4);
        if ((uVar20 >> 0x18 != 0xff) && (uVar20 >> 0x18 != 0)) {
          fVar24 = _LC18 / (float)(uVar20 >> 0x18);
          uVar20 = ((int)((float)(uVar20 >> 8 & 0xff) * fVar24) & 0xffU) << 8 |
                   (int)((float)(uVar20 & 0xff) * fVar24) & 0xffU | uVar20 & 0xff000000 |
                   ((int)((float)(uVar20 >> 0x10 & 0xff) * fVar24) & 0xffU) << 0x10;
        }
        fVar24 = _LC6 / ((float)(local_54 + (uint)local_78) + _LC6);
        if (uVar17 != (uint)local_78) {
          uVar18 = (ulong)uVar17;
          fVar22 = fVar24;
          do {
            while( true ) {
              uVar13 = (int)uVar18 + 1;
              fVar23 = fVar22 + fVar24;
              uVar17 = 0xffU - (int)(fVar22 * fVar26) & 0xff;
              uVar12 = uVar17 * ((uVar11 >> 8 & 0xff00ff) - (uVar20 >> 8 & 0xff00ff)) +
                       (uVar20 & 0xff00ff00);
              iVar10 = (uVar12 >> 0x18) + 1;
              *(uint *)(lVar4 + uVar18 * 4) =
                   ((uVar12 & 0xff00ff00) >> 8 | 0xff0000) * iVar10 & 0xff00ff00 |
                   ((uVar17 * ((uVar11 & 0xff00ff) - (uVar20 & 0xff00ff)) >> 8) +
                    (uVar20 & 0xff00ff) & 0xff00ff) * iVar10 >> 8 & 0xff00ff;
              fVar22 = fVar23;
              if ((int)uVar18 != 0x3ff) break;
              uVar18 = 0;
            }
            uVar18 = (ulong)uVar13;
          } while ((uint)local_78 != uVar13);
        }
      }
    }
    else {
      *(uint *)(*(long *)(param_1 + 0x38) + 0xffc) = uVar17;
    }
  }
  uVar18 = CONCAT71(in_register_00000089,param_6) & 0xffffffff;
LAB_00103c42:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18;
}



/* fillFetchSolid(SwFill const*, tvg::Fill const*) */

long fillFetchSolid(SwFill *param_1,Fill *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0x44] != (SwFill)0x0) {
    uVar2 = tvg::Fill::colorStops((ColorStop **)param_2);
    if ((uVar2 != 0) && (local_18 != 0)) {
      lVar3 = local_18 + -8 + (ulong)uVar2 * 8;
      goto LAB_001044ed;
    }
  }
  lVar3 = 0;
LAB_001044ed:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* fillReset(SwFill*) */

void fillReset(SwFill *param_1)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    free(*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined2 *)(param_1 + 0x44) = 0;
  return;
}



/* fillFree(SwFill*) */

void fillFree(SwFill *param_1)

{
  if (param_1 != (SwFill *)0x0) {
    if (*(void **)(param_1 + 0x38) != (void *)0x0) {
      free(*(void **)(param_1 + 0x38));
    }
    free(param_1);
    return;
  }
  return;
}


