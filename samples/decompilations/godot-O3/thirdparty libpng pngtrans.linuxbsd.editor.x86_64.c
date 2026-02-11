
void png_set_bgr(long param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 1;
  }
  return;
}



void png_set_swap(long param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x268) == '\x10')) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x10;
    return;
  }
  return;
}



void png_set_packing(long param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x268) < 8)) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 4;
    *(undefined1 *)(param_1 + 0x269) = 8;
  }
  return;
}



void png_set_packswap(long param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x268) < 8)) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x10000;
  }
  return;
}



void png_set_shift(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *param_2;
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 8;
    *(undefined4 *)(param_1 + 0x2dd) = uVar1;
    *(undefined1 *)(param_1 + 0x2e1) = *(undefined1 *)(param_2 + 1);
  }
  return;
}



undefined8 png_set_interlace_handling(long param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x264) != '\0')) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 2;
    return 7;
  }
  return 1;
}



void png_set_filler(long param_1,undefined2 param_2,int param_3)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x12d) & 0x80) == 0) {
      if (*(char *)(param_1 + 0x267) == '\0') {
        if (*(byte *)(param_1 + 0x268) < 8) {
          png_app_error(param_1,"png_set_filler is invalid for low bit depth gray output");
          return;
        }
        *(undefined1 *)(param_1 + 0x26c) = 2;
      }
      else {
        if (*(char *)(param_1 + 0x267) != '\x02') {
          png_app_error(param_1,"png_set_filler: inappropriate color type");
          return;
        }
        *(undefined1 *)(param_1 + 0x26c) = 4;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x272) = param_2;
    }
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x8000;
    uVar1 = *(uint *)(param_1 + 0x130) | 0x80;
    if (param_3 != 1) {
      uVar1 = *(uint *)(param_1 + 0x130) & 0xffffff7f;
    }
    *(uint *)(param_1 + 0x130) = uVar1;
  }
  return;
}



void png_set_add_alpha(long param_1,undefined2 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x12d) & 0x80) == 0) {
    if (*(char *)(param_1 + 0x267) == '\0') {
      if (*(byte *)(param_1 + 0x268) < 8) {
        pcVar3 = "png_set_filler is invalid for low bit depth gray output";
        goto LAB_00100237;
      }
      *(undefined1 *)(param_1 + 0x26c) = 2;
    }
    else {
      if (*(char *)(param_1 + 0x267) != '\x02') {
        pcVar3 = "png_set_filler: inappropriate color type";
LAB_00100237:
        png_app_error(param_1,pcVar3);
        uVar2 = *(uint *)(param_1 + 0x134);
        if ((uVar2 & 0x8000) == 0) {
          return;
        }
        goto LAB_001001d6;
      }
      *(undefined1 *)(param_1 + 0x26c) = 4;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x272) = param_2;
  }
  uVar2 = *(uint *)(param_1 + 0x134) | 0x8000;
  *(uint *)(param_1 + 0x134) = uVar2;
  uVar1 = *(uint *)(param_1 + 0x130) | 0x80;
  if (param_3 != 1) {
    uVar1 = *(uint *)(param_1 + 0x130) & 0xffffff7f;
  }
  *(uint *)(param_1 + 0x130) = uVar1;
LAB_001001d6:
  *(uint *)(param_1 + 0x134) = uVar2 | 0x1000000;
  return;
}



void png_set_swap_alpha(long param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x20000;
  }
  return;
}



void png_set_invert_alpha(long param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x80000;
  }
  return;
}



void png_set_invert_mono(long param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x20;
  }
  return;
}



void png_do_invert(long param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 != 0) {
      pbVar1 = param_2 + uVar2;
      if ((uVar2 & 1) != 0) {
        *param_2 = ~*param_2;
        param_2 = param_2 + 1;
        if (pbVar1 == param_2) {
          return;
        }
      }
      do {
        *param_2 = ~*param_2;
        param_2[1] = ~param_2[1];
        param_2 = param_2 + 2;
      } while (pbVar1 != param_2);
      return;
    }
  }
  else if (*(short *)(param_1 + 0x10) == 0x804) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 != 0) {
      *param_2 = ~*param_2;
      uVar3 = 2;
      if (uVar2 < 3) {
        return;
      }
      if ((uVar2 - 1 >> 1 & 1) != 0) {
        uVar3 = 4;
        param_2[2] = ~param_2[2];
        if (uVar2 < 5) {
          return;
        }
      }
      do {
        param_2[uVar3] = ~param_2[uVar3];
        param_2[uVar3 + 2] = ~param_2[uVar3 + 2];
        uVar3 = uVar3 + 4;
      } while (uVar3 < uVar2);
      return;
    }
  }
  else if ((*(short *)(param_1 + 0x10) == 0x1004) && (uVar2 = *(ulong *)(param_1 + 8), uVar2 != 0))
  {
    uVar3 = 0;
    do {
      *(ushort *)(param_2 + uVar3) = *(ushort *)(param_2 + uVar3) ^ 0xffff;
      uVar3 = uVar3 + 4;
    } while (uVar3 < uVar2);
    return;
  }
  return;
}



void png_do_swap(int *param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if ((*(char *)((long)param_1 + 0x11) == '\x10') &&
     (uVar1 = (uint)*(byte *)((long)param_1 + 0x12) * *param_1, uVar1 != 0)) {
    puVar2 = param_2;
    do {
      puVar3 = puVar2 + 1;
      *puVar2 = CONCAT11(*(undefined1 *)puVar2,*(undefined1 *)((long)puVar2 + 1));
      puVar2 = puVar3;
    } while (puVar3 != param_2 + uVar1);
    return;
  }
  return;
}



void png_do_packswap(long param_1,byte *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 < 8) {
    pbVar3 = param_2 + *(long *)(param_1 + 8);
    if (bVar1 == 2) {
      puVar2 = twobppswaptable;
    }
    else if (bVar1 == 4) {
      puVar2 = fourbppswaptable;
    }
    else {
      puVar2 = onebppswaptable;
      if (bVar1 != 1) {
        return;
      }
    }
    if (param_2 < pbVar3) {
      do {
        pbVar4 = param_2 + 1;
        *param_2 = puVar2[*param_2];
        param_2 = pbVar4;
      } while (pbVar3 != pbVar4);
    }
  }
  return;
}



void png_do_strip_channel(long param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar3 = param_2 + *(long *)(param_1 + 8);
  puVar7 = param_2;
  if (*(char *)(param_1 + 0x12) == '\x02') {
    cVar1 = *(char *)(param_1 + 0x11);
    if (cVar1 == '\b') {
      puVar8 = param_2 + 1;
      if (param_3 == 0) {
        puVar8 = param_2 + 2;
        puVar7 = param_2 + 1;
      }
      puVar4 = puVar7;
      puVar5 = puVar8;
      if (puVar8 < puVar3) {
        do {
          puVar6 = puVar5 + 2;
          *puVar4 = *puVar5;
          puVar4 = puVar4 + 1;
          puVar5 = puVar6;
        } while (puVar6 < puVar3);
        puVar7 = puVar7 + ((ulong)(puVar3 + (-1 - (long)puVar8)) >> 1) + 1;
      }
    }
    else {
      if (cVar1 != '\x10') {
        return;
      }
      puVar8 = param_2 + 2;
      if (param_3 == 0) {
        puVar8 = param_2 + 4;
        puVar7 = param_2 + 2;
      }
      puVar4 = puVar7;
      puVar5 = puVar8;
      if (puVar8 < puVar3) {
        do {
          puVar6 = puVar5 + 4;
          *puVar4 = *puVar5;
          puVar4[1] = puVar5[1];
          puVar4 = puVar4 + 2;
          puVar5 = puVar6;
        } while (puVar6 < puVar3);
        puVar7 = puVar7 + ((ulong)(puVar3 + (-1 - (long)puVar8)) >> 2) * 2 + 2;
      }
    }
    *(char *)(param_1 + 0x13) = cVar1;
    *(undefined1 *)(param_1 + 0x12) = 1;
    if (*(char *)(param_1 + 0x10) == '\x04') {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x12) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x11) == '\b') {
      if (param_3 == 0) {
        puVar8 = param_2 + 4;
        puVar7 = param_2 + 3;
      }
      else {
        puVar8 = param_2 + 1;
      }
      puVar4 = puVar7;
      puVar5 = puVar8;
      if (puVar8 < puVar3) {
        do {
          puVar6 = puVar5 + 4;
          *puVar4 = *puVar5;
          puVar4[1] = puVar5[1];
          puVar4[2] = puVar5[2];
          puVar4 = puVar4 + 3;
          puVar5 = puVar6;
        } while (puVar6 < puVar3);
        puVar7 = puVar7 + ((ulong)(puVar3 + (-1 - (long)puVar8)) >> 2) * 3 + 3;
      }
      uVar2 = 0x18;
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\x10') {
        return;
      }
      if (param_3 == 0) {
        puVar8 = param_2 + 8;
        puVar7 = param_2 + 6;
      }
      else {
        puVar8 = param_2 + 2;
      }
      puVar4 = puVar7;
      puVar5 = puVar8;
      if (puVar8 < puVar3) {
        do {
          puVar6 = puVar5 + 8;
          *puVar4 = *puVar5;
          puVar4[1] = puVar5[1];
          puVar4[2] = puVar5[2];
          puVar4[3] = puVar5[3];
          puVar4[4] = puVar5[4];
          puVar4[5] = puVar5[5];
          puVar4 = puVar4 + 6;
          puVar5 = puVar6;
        } while (puVar6 < puVar3);
        puVar7 = puVar7 + (((ulong)(puVar3 + (-1 - (long)puVar8)) >> 3) * 3 + 3) * 2;
      }
      uVar2 = 0x30;
    }
    *(undefined1 *)(param_1 + 0x13) = uVar2;
    *(undefined1 *)(param_1 + 0x12) = 3;
    if (*(char *)(param_1 + 0x10) == '\x06') {
      *(undefined1 *)(param_1 + 0x10) = 2;
    }
  }
  *(long *)(param_1 + 8) = (long)puVar7 - (long)param_2;
  return;
}



void png_do_bgr(uint *param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  
  bVar1 = (byte)param_1[4];
  if ((bVar1 & 2) != 0) {
    uVar4 = *param_1;
    uVar7 = (ulong)uVar4;
    if (*(char *)((long)param_1 + 0x11) == '\b') {
      if (bVar1 == 2) {
        if (uVar4 != 0) {
          puVar5 = param_2;
          do {
            uVar2 = *(undefined1 *)puVar5;
            puVar6 = (undefined2 *)((long)puVar5 + 3);
            *(undefined1 *)puVar5 = *(undefined1 *)(puVar5 + 1);
            *(undefined1 *)(puVar5 + 1) = uVar2;
            puVar5 = puVar6;
          } while ((undefined2 *)(uVar7 * 3 + (long)param_2) != puVar6);
          return;
        }
      }
      else if ((bVar1 == 6) && (uVar4 != 0)) {
        puVar5 = param_2;
        do {
          uVar2 = *(undefined1 *)puVar5;
          puVar6 = puVar5 + 2;
          *(undefined1 *)puVar5 = *(undefined1 *)(puVar5 + 1);
          *(undefined1 *)(puVar5 + 1) = uVar2;
          puVar5 = puVar6;
        } while (param_2 + uVar7 * 2 != puVar6);
        return;
      }
    }
    else if (*(char *)((long)param_1 + 0x11) == '\x10') {
      if (bVar1 == 2) {
        if (uVar4 != 0) {
          puVar5 = param_2;
          do {
            uVar3 = *puVar5;
            puVar6 = puVar5 + 3;
            *puVar5 = puVar5[2];
            puVar5[2] = uVar3;
            puVar5 = puVar6;
          } while (puVar6 != param_2 + uVar7 * 3);
          return;
        }
      }
      else if ((bVar1 == 6) && (uVar4 != 0)) {
        puVar5 = param_2;
        do {
          uVar3 = *puVar5;
          puVar6 = puVar5 + 4;
          *puVar5 = puVar5[2];
          puVar5[2] = uVar3;
          puVar5 = puVar6;
        } while (puVar6 != param_2 + uVar7 * 4);
        return;
      }
    }
  }
  return;
}



void png_do_check_palette_indexes(long param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  bVar1 = *(byte *)((long)param_2 + 0x11);
  if (((int)(uint)*(ushort *)(param_1 + 600) < 1 << (bVar1 & 0x1f)) &&
     (*(ushort *)(param_1 + 600) != 0)) {
    pbVar2 = *(byte **)(param_1 + 0x228);
    pbVar4 = pbVar2 + *(long *)(param_2 + 2);
    uVar6 = -((*param_2 & 7) * (uint)*(byte *)((long)param_2 + 0x13)) & 7;
    if (bVar1 == 4) {
      if (pbVar4 <= pbVar2) {
        return;
      }
      do {
        uVar5 = (int)(uint)*pbVar4 >> (sbyte)uVar6;
        uVar7 = uVar5 & 0xf;
        uVar6 = *(uint *)(param_1 + 0x25c);
        if ((int)*(uint *)(param_1 + 0x25c) < (int)uVar7) {
          *(uint *)(param_1 + 0x25c) = uVar7;
          uVar6 = uVar7;
        }
        iVar3 = (int)uVar5 >> 4;
        if ((int)uVar6 < iVar3) {
          *(int *)(param_1 + 0x25c) = iVar3;
        }
        pbVar4 = pbVar4 + -1;
        uVar6 = 0;
      } while (pbVar2 != pbVar4);
      return;
    }
    if (bVar1 < 5) {
      if (bVar1 != 1) {
        if (bVar1 != 2) {
          return;
        }
        if (pbVar4 <= pbVar2) {
          return;
        }
        do {
          uVar5 = (int)(uint)*pbVar4 >> (sbyte)uVar6;
          uVar7 = uVar5 & 3;
          uVar6 = *(uint *)(param_1 + 0x25c);
          if ((int)*(uint *)(param_1 + 0x25c) < (int)uVar7) {
            *(uint *)(param_1 + 0x25c) = uVar7;
            uVar6 = uVar7;
          }
          uVar7 = (int)uVar5 >> 2 & 3;
          if ((int)uVar6 < (int)uVar7) {
            *(uint *)(param_1 + 0x25c) = uVar7;
            uVar6 = uVar7;
          }
          uVar7 = (int)uVar5 >> 4 & 3;
          if ((int)uVar6 < (int)uVar7) {
            *(uint *)(param_1 + 0x25c) = uVar7;
            uVar6 = uVar7;
          }
          if ((int)uVar6 < (int)uVar5 >> 6) {
            *(int *)(param_1 + 0x25c) = (int)uVar5 >> 6;
          }
          pbVar4 = pbVar4 + -1;
          uVar6 = 0;
        } while (pbVar2 != pbVar4);
        return;
      }
      if (pbVar2 < pbVar4) {
        do {
          if ((int)(uint)*pbVar4 >> (sbyte)uVar6 != 0) {
            *(undefined4 *)(param_1 + 0x25c) = 1;
          }
          pbVar4 = pbVar4 + -1;
          uVar6 = 0;
        } while (pbVar2 != pbVar4);
        return;
      }
    }
    else if (bVar1 == 8) {
      if (pbVar4 <= pbVar2) {
        return;
      }
      do {
        if (*(int *)(param_1 + 0x25c) < (int)(uint)*pbVar4) {
          *(uint *)(param_1 + 0x25c) = (uint)*pbVar4;
        }
        pbVar4 = pbVar4 + -1;
      } while (pbVar2 != pbVar4);
      return;
    }
  }
  return;
}



void png_set_user_transform_info
               (long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  if (param_1 != 0) {
    if (((*(byte *)(param_1 + 0x12d) & 0x80) != 0) && ((*(byte *)(param_1 + 0x130) & 0x40) != 0)) {
      png_app_error(param_1,"info change after png_start_read_image or png_read_update_info");
      return;
    }
    *(undefined8 *)(param_1 + 0x120) = param_2;
    *(undefined1 *)(param_1 + 0x128) = param_3;
    *(undefined1 *)(param_1 + 0x129) = param_4;
  }
  return;
}



undefined8 png_get_user_transform_ptr(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x120);
  }
  return 0;
}



undefined4 png_get_current_row_number(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x214);
  }
  return uVar1;
}



undefined1 png_get_current_pass_number(long param_1)

{
  undefined1 uVar1;
  
  uVar1 = 8;
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x265);
  }
  return uVar1;
}


