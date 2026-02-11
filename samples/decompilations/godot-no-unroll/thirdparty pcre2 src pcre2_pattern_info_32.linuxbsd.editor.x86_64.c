
undefined8 pcre2_pattern_info_32(long param_1,uint param_2,uint *param_3)

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
  if ((uVar4 & 4) == 0) {
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
      uVar3 = _pcre2_jit_get_size_32();
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



undefined8 pcre2_callout_enumerate_32(long param_1,code *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  long in_FS_OFFSET;
  undefined4 local_78 [2];
  ulong local_70;
  ulong local_68;
  uint local_60;
  undefined1 local_58 [16];
  uint *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar2 = 0xffffffcd;
  }
  else if (*(int *)(param_1 + 0x50) == 0x50435245) {
    if ((*(byte *)(param_1 + 0x60) & 4) != 0) {
      local_78[0] = 0;
      puVar5 = (uint *)(param_1 + 0x88 +
                       (long)(int)((uint)*(ushort *)(param_1 + 0x86) *
                                  (uint)*(ushort *)(param_1 + 0x84)) * 4);
LAB_00100358:
      do {
        uVar1 = *puVar5;
        while (uVar1 != 0x70) {
          if (uVar1 < 0x71) {
            if (uVar1 == 0) {
              uVar2 = 0;
              goto LAB_00100442;
            }
            if (uVar1 - 0x55 < 0xd) {
              puVar5 = puVar5 + (byte)(&_pcre2_OP_lengths_32)[uVar1];
              if (puVar5[-1] - 0xf < 2) {
                puVar5 = puVar5 + 2;
              }
            }
            else {
LAB_00100430:
              puVar5 = puVar5 + (byte)(&_pcre2_OP_lengths_32)[uVar1];
            }
            goto LAB_00100358;
          }
          uVar3 = uVar1 - 0x76;
          if (0x2c < uVar3) goto LAB_00100430;
          uVar4 = 1L << ((byte)uVar3 & 0x3f);
          if ((uVar4 & 0x155000000000) != 0) {
            puVar5 = puVar5 + ((uint)(byte)(&_pcre2_OP_lengths_32)[uVar1] + puVar5[1]);
            goto LAB_00100358;
          }
          if (uVar3 == 1) {
            local_70 = (ulong)puVar5[1];
            local_60 = 0;
            local_68 = (ulong)puVar5[2];
            local_58._4_4_ = 0;
            local_58._0_4_ = puVar5[4];
            local_58._8_4_ = puVar5[3] - 7;
            local_58._12_4_ = 0;
            local_48 = puVar5 + 6;
            uVar2 = (*param_2)(local_78,param_3);
            if ((int)uVar2 != 0) goto LAB_00100442;
            puVar5 = puVar5 + puVar5[3];
            goto LAB_00100358;
          }
          if ((uVar4 & 1) == 0) goto LAB_00100430;
          local_70 = (ulong)puVar5[1];
          local_48 = (uint *)0x0;
          local_68 = (ulong)puVar5[2];
          local_58 = (undefined1  [16])0x0;
          local_60 = puVar5[3];
          uVar2 = (*param_2)(local_78,param_3);
          if ((int)uVar2 != 0) goto LAB_00100442;
          puVar5 = puVar5 + (byte)(&_pcre2_OP_lengths_32)[*puVar5];
          uVar1 = *puVar5;
        }
        puVar5 = puVar5 + puVar5[1];
      } while( true );
    }
    uVar2 = 0xffffffe0;
  }
  else {
    uVar2 = 0xffffffe1;
  }
LAB_00100442:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 pcre2_pattern_info_32_cold(void)

{
  return 0xffffffde;
}


