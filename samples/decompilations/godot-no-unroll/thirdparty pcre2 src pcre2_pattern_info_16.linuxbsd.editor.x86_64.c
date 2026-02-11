
undefined8 pcre2_pattern_info_16(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((param_3 == (uint *)0x0) && (param_2 < 0x1b)) {
    uVar5 = 1L << ((byte)param_2 & 0x3f);
    if ((uVar5 & 0x6b7fb7f) != 0) {
      return 4;
    }
    if ((uVar5 & 0x1480480) != 0) {
      return 8;
    }
  }
  if (param_1 == 0) {
    return 0xffffffcd;
  }
  if (*(int *)(param_1 + 0x50) != 0x50435245) {
    return 0xffffffe1;
  }
  uVar4 = *(uint *)(param_1 + 0x60);
  if ((uVar4 & 2) == 0) {
    return 0xffffffe0;
  }
  switch(param_2) {
  case 0:
    uVar3 = 0;
    *param_3 = *(uint *)(param_1 + 0x58);
    break;
  case 1:
    uVar3 = 0;
    *param_3 = *(uint *)(param_1 + 0x54);
    break;
  case 2:
    uVar3 = 0;
    *param_3 = (uint)*(ushort *)(param_1 + 0x82);
    break;
  case 3:
    uVar3 = 0;
    *param_3 = (uint)*(ushort *)(param_1 + 0x78);
    break;
  case 4:
    uVar3 = 0;
    *param_3 = (uint)*(ushort *)(param_1 + 0x80);
    break;
  case 5:
    uVar4 = uVar4 & 0x10;
    if (uVar4 == 0) goto LAB_001000b6;
    *param_3 = *(uint *)(param_1 + 0x70);
    goto LAB_001000b8;
  case 6:
    uVar1 = uVar4 >> 8 & 2;
    if ((uVar4 & 0x10) != 0) {
      uVar1 = 1;
    }
    uVar3 = 0;
    *param_3 = uVar1;
    break;
  case 7:
    lVar2 = param_1 + 0x28;
    if ((uVar4 & 0x40) == 0) {
      lVar2 = 0;
    }
    uVar3 = 0;
    *(long *)param_3 = lVar2;
    break;
  case 8:
    uVar3 = 0;
    *param_3 = uVar4 >> 0xb & 1;
    break;
  case 9:
    uVar3 = 0;
    *param_3 = uVar4 >> 10 & 1;
    break;
  case 10:
    uVar3 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = _pcre2_jit_get_size_16();
    }
    goto LAB_001000c4;
  case 0xb:
    uVar4 = uVar4 & 0x80;
    if (uVar4 != 0) {
      *param_3 = *(uint *)(param_1 + 0x74);
      goto LAB_001000b8;
    }
    goto LAB_001000b6;
  case 0xc:
    uVar3 = 0;
    *param_3 = uVar4 >> 7 & 1;
    break;
  case 0xd:
    uVar3 = 0;
    *param_3 = uVar4 >> 0xd & 1;
    break;
  case 0xe:
    uVar4 = *(uint *)(param_1 + 0x68);
    *param_3 = uVar4;
    if (uVar4 != 0xffffffff) {
      return 0;
    }
    goto LAB_0010013e;
  case 0xf:
    uVar3 = 0;
    *param_3 = (uint)*(ushort *)(param_1 + 0x7c);
    break;
  case 0x10:
    uVar3 = 0;
    *param_3 = (uint)*(ushort *)(param_1 + 0x7e);
    break;
  case 0x11:
    uVar3 = 0;
    *param_3 = (uint)*(ushort *)(param_1 + 0x86);
    break;
  case 0x12:
    uVar3 = 0;
    *param_3 = (uint)*(ushort *)(param_1 + 0x84);
    break;
  case 0x13:
    uVar3 = 0;
    *(long *)param_3 = param_1 + 0x88;
    break;
  case 0x14:
    uVar3 = 0;
    *param_3 = (uint)*(ushort *)(param_1 + 0x7a);
    break;
  case 0x15:
    uVar4 = *(uint *)(param_1 + 0x6c);
    *param_3 = uVar4;
    goto joined_r0x00100088;
  case 0x16:
    uVar3 = *(undefined8 *)(param_1 + 0x48);
LAB_001000c4:
    *(undefined8 *)param_3 = uVar3;
    uVar3 = 0;
    break;
  case 0x17:
    uVar4 = uVar4 >> 0x16 & 1;
LAB_001000b6:
    *param_3 = uVar4;
LAB_001000b8:
    uVar3 = 0;
    break;
  case 0x18:
    uVar3 = 0;
    *(ulong *)param_3 = ((ulong)*(ushort *)(param_1 + 0x80) * 2 + 0x11) * 8;
    break;
  case 0x19:
    uVar4 = *(uint *)(param_1 + 100);
    *param_3 = uVar4;
joined_r0x00100088:
    if (uVar4 == 0xffffffff) {
LAB_0010013e:
      uVar3 = 0xffffffc9;
    }
    else {
      uVar3 = 0;
    }
    break;
  case 0x1a:
    uVar3 = 0;
    *param_3 = *(uint *)(param_1 + 0x5c);
    break;
  default:
    uVar3 = 0xffffffde;
  }
  return uVar3;
}



undefined8 pcre2_callout_enumerate_16(long param_1,code *param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ulong uVar5;
  ushort *puVar6;
  long in_FS_OFFSET;
  undefined4 local_68 [2];
  ulong local_60;
  ulong local_58;
  uint local_50;
  undefined1 local_48 [16];
  ushort *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar3 = 0xffffffcd;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x50) == 0x50435245) {
      if ((*(byte *)(param_1 + 0x60) & 2) != 0) {
        local_68[0] = 0;
        puVar6 = (ushort *)
                 (param_1 + 0x88 +
                 (long)(int)((uint)*(ushort *)(param_1 + 0x86) * (uint)*(ushort *)(param_1 + 0x84))
                 * 2);
LAB_00100350:
        do {
          uVar1 = *puVar6;
          while (uVar1 != 0x70) {
            if (uVar1 < 0x71) {
              if (uVar1 < 0x55) {
                if (0x1c < uVar1) {
                  puVar6 = puVar6 + (byte)(&_pcre2_OP_lengths_16)[uVar1];
                  if (((uVar2 & 0x80000) != 0) && ((puVar6[-1] & 0xfc00) == 0xd800)) {
                    puVar6 = puVar6 + 1;
                  }
                  goto LAB_00100350;
                }
                if (uVar1 == 0) {
                  uVar3 = 0;
                  goto LAB_0010037e;
                }
              }
              else if ((ushort)(uVar1 - 0x55) < 0xd) {
                puVar6 = puVar6 + (byte)(&_pcre2_OP_lengths_16)[uVar1];
                if ((ushort)(puVar6[-1] - 0xf) < 2) {
                  puVar6 = puVar6 + 2;
                }
                goto LAB_00100350;
              }
LAB_001004a8:
              puVar6 = puVar6 + (byte)(&_pcre2_OP_lengths_16)[uVar1];
              goto LAB_00100350;
            }
            uVar4 = uVar1 - 0x76;
            if (0x2c < uVar4) goto LAB_001004a8;
            uVar5 = 1L << ((byte)uVar4 & 0x3f);
            if ((uVar5 & 0x155000000000) != 0) {
              puVar6 = puVar6 + (int)((uint)(byte)(&_pcre2_OP_lengths_16)[uVar1] + (uint)puVar6[1]);
              goto LAB_00100350;
            }
            if (uVar4 == 1) {
              local_60 = (ulong)puVar6[1];
              local_50 = 0;
              local_58 = (ulong)puVar6[2];
              local_48._2_6_ = 0;
              local_48._0_2_ = puVar6[4];
              local_48._8_8_ = (long)(int)(puVar6[3] - 7);
              local_38 = puVar6 + 6;
              uVar3 = (*param_2)(local_68,param_3);
              if ((int)uVar3 != 0) goto LAB_0010037e;
              puVar6 = puVar6 + puVar6[3];
              goto LAB_00100350;
            }
            if ((uVar5 & 1) == 0) goto LAB_001004a8;
            local_60 = (ulong)puVar6[1];
            local_38 = (ushort *)0x0;
            local_58 = (ulong)puVar6[2];
            local_48 = (undefined1  [16])0x0;
            local_50 = (uint)puVar6[3];
            uVar3 = (*param_2)(local_68,param_3);
            if ((int)uVar3 != 0) goto LAB_0010037e;
            puVar6 = puVar6 + (byte)(&_pcre2_OP_lengths_16)[*puVar6];
            uVar1 = *puVar6;
          }
          puVar6 = puVar6 + puVar6[1];
        } while( true );
      }
      uVar3 = 0xffffffe0;
    }
    else {
      uVar3 = 0xffffffe1;
    }
  }
LAB_0010037e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 pcre2_pattern_info_16_cold(void)

{
  return 0xffffffde;
}


