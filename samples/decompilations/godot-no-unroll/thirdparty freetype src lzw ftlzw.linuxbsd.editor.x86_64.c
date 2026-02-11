
ulong ft_lzw_check_header(undefined8 param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  char local_12;
  char local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FT_Stream_Seek(param_1,0);
  if (((int)uVar1 == 0) && (uVar1 = FT_Stream_Read(param_1,&local_12,2), (int)uVar1 == 0)) {
    if (local_12 == '\x1f') {
      uVar1 = uVar1 & 0xffffffff;
      if (local_11 != -99) {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 3;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



uint ft_lzwstate_get_code(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  
  uVar5 = *(uint *)(param_1 + 0x3c);
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar8 = *(uint *)(param_1 + 0x44);
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (uVar8 <= uVar1) goto LAB_001000a7;
LAB_001001a8:
    *(undefined4 *)(param_1 + 0x3c) = 9;
    uVar5 = 9;
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined1 *)(param_1 + 0x20) = 0;
    goto LAB_001000da;
  }
  if (uVar2 < *(uint *)(param_1 + 0x1c)) {
    if (uVar8 <= uVar1) goto LAB_001000a7;
    uVar1 = uVar5 + uVar2;
    uVar8 = uVar2 & 7;
    uVar2 = uVar2 >> 3;
    bVar7 = 8 - (char)uVar8;
    lVar10 = (ulong)(uVar2 + 8) + param_1;
LAB_00100136:
    *(uint *)(param_1 + 0x18) = uVar1;
    pbVar9 = (byte *)(lVar10 + 1);
    uVar1 = (int)(uint)*(byte *)(param_1 + 8 + (ulong)uVar2) >> (sbyte)uVar8;
    uVar2 = (uVar5 + uVar8) - 8;
    bVar6 = bVar7;
    if (7 < uVar2) {
      pbVar9 = (byte *)(lVar10 + 2);
      bVar6 = 0x10 - (sbyte)uVar8;
      uVar2 = (uVar5 + uVar8) - 0x10;
      uVar1 = uVar1 | (uint)*(byte *)(lVar10 + 1) << (bVar7 & 0x1f);
    }
    if (uVar2 != 0) {
      uVar1 = uVar1 | (~(-1 << ((byte)uVar2 & 0x1f)) & (uint)*pbVar9) << (bVar6 & 0x1f);
    }
  }
  else {
    if (uVar1 < uVar8) {
LAB_001000da:
      if (*(int *)(param_1 + 4) == 0) {
        lVar10 = param_1 + 8;
        uVar3 = FT_Stream_TryRead(*(undefined8 *)(param_1 + 200),lVar10,
                                  *(undefined4 *)(param_1 + 0x3c));
        uVar2 = *(uint *)(param_1 + 0x3c);
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar3;
        *(undefined4 *)(param_1 + 0x18) = 0;
        uVar1 = (int)uVar3 * 8;
        *(uint *)(param_1 + 4) = (uint)(uVar3 < uVar2);
        if (uVar2 < uVar1) {
          bVar7 = 8;
          uVar8 = 0;
          *(uint *)(param_1 + 0x1c) = (uVar1 - uVar2) + 1;
          uVar2 = 0;
          uVar1 = uVar5;
          goto LAB_00100136;
        }
        *(uint *)(param_1 + 0x1c) = uVar1;
      }
    }
    else {
LAB_001000a7:
      uVar5 = uVar5 + 1;
      *(uint *)(param_1 + 0x3c) = uVar5;
      if (uVar5 < 0x11) {
        if (uVar5 < *(uint *)(param_1 + 0x30)) {
          iVar4 = (int)(1L << ((byte)uVar5 & 0x3f)) + -0x100;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x38) + 1;
        }
        *(int *)(param_1 + 0x44) = iVar4;
        if (*(char *)(param_1 + 0x20) != '\0') goto LAB_001001a8;
        goto LAB_001000da;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



undefined8 ft_lzwstate_stack_grow(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  uVar1 = *(ulong *)(param_1 + 0x80);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 <= *(uint *)(param_1 + 0x78)) {
    uVar4 = uVar1 + 4 + (uVar1 >> 1);
    if (*(long *)(param_1 + 0x70) == param_1 + 0x88) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (0x10000 < uVar4) {
        uVar4 = 0x10000;
      }
      puVar2 = (undefined8 *)ft_mem_qrealloc(*(undefined8 *)(param_1 + 0xd0),1,0,uVar4,0,&local_34);
      *(undefined8 **)(param_1 + 0x70) = puVar2;
      if (local_34 != 0) goto LAB_00100335;
LAB_00100307:
      uVar3 = *(undefined8 *)(param_1 + 0x90);
      *puVar2 = *(undefined8 *)(param_1 + 0x88);
      puVar2[1] = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      puVar2[2] = *(undefined8 *)(param_1 + 0x98);
      puVar2[3] = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0xb0);
      puVar2[4] = *(undefined8 *)(param_1 + 0xa8);
      puVar2[5] = uVar3;
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      puVar2[6] = *(undefined8 *)(param_1 + 0xb8);
      puVar2[7] = uVar3;
    }
    else {
      if (0x10000 < uVar4) {
        if (uVar1 == 0x10000) goto LAB_00100335;
        uVar4 = 0x10000;
      }
      puVar2 = (undefined8 *)
               ft_mem_qrealloc(*(undefined8 *)(param_1 + 0xd0),1,uVar1,uVar4,
                               *(long *)(param_1 + 0x70),&local_34);
      *(undefined8 **)(param_1 + 0x70) = puVar2;
      if (local_34 != 0) {
LAB_00100335:
        uVar3 = 0xffffffff;
        goto LAB_001002b2;
      }
      if (uVar1 == 0) goto LAB_00100307;
    }
    *(ulong *)(param_1 + 0x80) = uVar4;
  }
  uVar3 = 0;
LAB_001002b2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FT_Stream_OpenLZW(undefined1 (*param_1) [16],long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  long in_FS_OFFSET;
  byte bVar9;
  int local_44;
  long local_40;
  
  bVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (undefined1 (*) [16])0x0) || (param_2 == 0)) {
    iVar8 = 0x28;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    local_44 = ft_lzw_check_header(param_2);
    iVar8 = local_44;
    if (local_44 == 0) {
      param_1[3] = (undefined1  [16])0x0;
      *(undefined8 *)(param_1[3] + 8) = uVar1;
      *param_1 = (undefined1  [16])0x0;
      param_1[1] = (undefined1  [16])0x0;
      param_1[2] = (undefined1  [16])0x0;
      param_1[4] = (undefined1  [16])0x0;
      plVar5 = (long *)ft_mem_qalloc(uVar1,0x1108,&local_44);
      iVar8 = local_44;
      if (local_44 == 0) {
        plVar5[1] = (long)param_1;
        *plVar5 = param_2;
        lVar2 = *(long *)(param_1[3] + 8);
        plVar5[0x21e] = 0;
        plVar5[2] = lVar2;
        plVar5[0x21f] = (long)(plVar5 + 0x21e);
        plVar5[0x220] = (long)(plVar5 + 0x21e);
        iVar4 = ft_lzw_check_header(param_2);
        if (iVar4 != 0) {
          local_44 = iVar4;
          ft_mem_free(uVar1,plVar5);
          iVar8 = local_44;
          goto LAB_00100416;
        }
        plVar5[3] = 0;
        plVar5[0x1d] = 0;
        puVar7 = (undefined8 *)((ulong)(plVar5 + 4) & 0xfffffffffffffff8);
        for (uVar6 = (ulong)(((int)plVar5 -
                             (int)(undefined8 *)((ulong)(plVar5 + 4) & 0xfffffffffffffff8)) + 0xf0U
                            >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar7 = 0;
          puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
        }
        lVar2 = *(long *)(param_2 + 0x38);
        plVar5[0x11] = (long)(plVar5 + 0x14);
        plVar5[0x13] = 0x40;
        *(undefined4 *)((long)plVar5 + 0x54) = 9;
        plVar5[0x1c] = param_2;
        plVar5[0x1d] = lVar2;
        *(long **)(param_1[1] + 8) = plVar5;
      }
      uVar3 = _UNK_00100d08;
      uVar1 = __LC0;
      *(undefined8 *)*param_1 = 0;
      *(undefined8 *)(*param_1 + 8) = uVar1;
      *(undefined8 *)param_1[1] = uVar3;
      *(code **)(param_1[2] + 8) = ft_lzw_stream_io;
      *(code **)param_1[3] = ft_lzw_stream_close;
    }
  }
LAB_00100416:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ft_lzwstate_reset(undefined8 *param_1)

{
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 9;
  *param_1 = 0;
  return;
}



void ft_lzwstate_init(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[0x1a] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xd8U >> 3)
      ; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[0xe] = param_1 + 0x11;
  param_1[0x10] = 0x40;
  *(undefined4 *)((long)param_1 + 0x3c) = 9;
  param_1[0x19] = param_2;
  param_1[0x1a] = uVar1;
  return;
}



void ft_lzwstate_done(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  uVar1 = param_1[0x1a];
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 9;
  *param_1 = 0;
  if ((undefined8 *)param_1[0xe] != param_1 + 0x11) {
    ft_mem_free(uVar1);
    param_1[0xe] = 0;
  }
  ft_mem_free(uVar1,param_1[0xb]);
  *param_1 = 0;
  param_1[0x1a] = 0;
  puVar3 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar2 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xd8U >> 3)
      ; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  return;
}



void ft_lzw_stream_close(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 0x18);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    ft_lzwstate_done(pauVar1[1] + 8);
    *(undefined8 *)pauVar1[1] = 0;
    *pauVar1 = (undefined1  [16])0x0;
    ft_mem_free(uVar2,pauVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



long ft_lzwstate_io(int *param_1,undefined1 *param_2,long param_3)

{
  void *__dest;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  uint local_58;
  uint local_54;
  uint local_44;
  long local_40;
  
  lVar5 = 0;
  uVar9 = param_1[0x12];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_1[0x13];
  local_54 = param_1[0x14];
  if (param_3 == 0) goto LAB_00100700;
  iVar2 = *param_1;
  if (iVar2 == 1) {
LAB_0010076d:
    while (uVar3 = ft_lzwstate_get_code(param_1), -1 < (int)uVar3) {
      if (uVar3 == 0x100) {
        if (param_1[0xd] == 0) {
          if (param_1[0x10] == 0) {
LAB_00100a40:
            uVar4 = param_1[0x1e];
            uVar8 = (ulong)uVar4;
            if (*(ulong *)(param_1 + 0x20) <= uVar8) {
              iVar2 = ft_lzwstate_stack_grow(param_1);
              local_54 = uVar3;
              if (iVar2 < 0) break;
              uVar4 = param_1[0x1e];
              uVar8 = (ulong)uVar4;
            }
            param_1[0x1e] = uVar4 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x1c) + uVar8) = (undefined1)local_58;
            local_54 = uVar3;
            uVar4 = uVar9;
            uVar3 = uVar9;
            if (uVar9 < 0x100) goto LAB_001008ff;
          }
          else {
            local_54 = 0x100;
          }
LAB_00100943:
          lVar6 = *(long *)(param_1 + 0x16);
          do {
            if (lVar6 == 0) goto LAB_0010077c;
            uVar8 = (ulong)(uint)param_1[0x1e];
            if (*(ulong *)(param_1 + 0x20) <= uVar8) {
              iVar2 = ft_lzwstate_stack_grow(param_1);
              if (iVar2 < 0) goto LAB_0010077c;
              uVar8 = (ulong)(uint)param_1[0x1e];
            }
            param_1[0x1e] = (int)uVar8 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x1c) + uVar8) =
                 *(undefined1 *)(*(long *)(param_1 + 0x18) + (ulong)(uVar3 - 0x100));
            lVar6 = *(long *)(param_1 + 0x16);
            uVar1 = *(ushort *)(lVar6 + (ulong)(uVar3 - 0x100) * 2);
            uVar3 = (uint)uVar1;
            uVar4 = (uint)uVar1;
          } while (0xff < uVar1);
          goto LAB_001008ff;
        }
        param_1[0x10] = 0;
        *(undefined1 *)(param_1 + 8) = 1;
        local_58 = 0;
        uVar9 = 0;
      }
      else {
        local_54 = uVar3;
        uVar4 = uVar3;
        if (0xff < uVar3) {
          if (uVar3 - 0x100 < (uint)param_1[0x10]) goto LAB_00100943;
          if (uVar3 - 0x100 <= (uint)param_1[0x10]) goto LAB_00100a40;
          break;
        }
LAB_001008ff:
        local_58 = uVar4;
        uVar3 = param_1[0x1e];
        uVar8 = (ulong)uVar3;
        if (*(ulong *)(param_1 + 0x20) <= uVar8) {
          iVar2 = ft_lzwstate_stack_grow(param_1);
          if (iVar2 < 0) break;
          uVar3 = param_1[0x1e];
          uVar8 = (ulong)uVar3;
        }
        param_1[0x1e] = uVar3 + 1;
        *(char *)(*(long *)(param_1 + 0x1c) + uVar8) = (char)local_58;
        *param_1 = 2;
LAB_001007b5:
        while (param_1[0x1e] != 0) {
          uVar3 = param_1[0x1e] - 1;
          param_1[0x1e] = uVar3;
          if (param_2 != (undefined1 *)0x0) {
            param_2[lVar5] = *(undefined1 *)(*(long *)(param_1 + 0x1c) + (ulong)uVar3);
          }
          lVar5 = lVar5 + 1;
          if (param_3 == lVar5) goto LAB_00100700;
        }
        uVar3 = param_1[0x10];
        if (uVar3 < (uint)param_1[0xe]) {
          uVar4 = param_1[0x1a];
          uVar8 = (ulong)uVar4;
          if (uVar4 <= uVar3) {
            if (uVar4 == 0) {
              uVar10 = 0x200;
            }
            else {
              uVar10 = (ulong)((uVar4 >> 2) + uVar4);
            }
            lVar6 = ft_mem_realloc(*(undefined8 *)(param_1 + 0x34),3,uVar8,uVar10,
                                   *(undefined8 *)(param_1 + 0x16),&local_44);
            *(long *)(param_1 + 0x16) = lVar6;
            if (local_44 != 0) break;
            __dest = (void *)(lVar6 + uVar10 * 2);
            *(void **)(param_1 + 0x18) = __dest;
            memmove(__dest,(void *)(lVar6 + uVar8 * 2),uVar8);
            param_1[0x1a] = (int)uVar10;
            uVar3 = param_1[0x10];
          }
          *(short *)(*(long *)(param_1 + 0x16) + (ulong)uVar3 * 2) = (short)uVar9;
          *(undefined1 *)(*(long *)(param_1 + 0x18) + (ulong)uVar3) = (undefined1)local_58;
          param_1[0x10] = param_1[0x10] + 1;
        }
        *param_1 = 1;
        uVar9 = local_54;
      }
    }
LAB_0010077c:
    *param_1 = 3;
  }
  else {
    if (iVar2 == 2) goto LAB_001007b5;
    if (iVar2 != 0) goto LAB_00100700;
    iVar2 = FT_Stream_Seek(*(undefined8 *)(param_1 + 0x32),2);
    if ((iVar2 == 0) &&
       (lVar5 = FT_Stream_TryRead(*(undefined8 *)(param_1 + 0x32),&local_44,1), lVar5 == 1)) {
      bVar7 = (byte)local_44 & 0x1f;
      param_1[0xd] = local_44 & 0x80;
      param_1[0xc] = local_44 & 0x1f;
      iVar2 = (int)(1L << bVar7);
      param_1[0xe] = iVar2 + -0x100;
      if (bVar7 < 0x11) {
        param_1[0xf] = 9;
        param_1[0x10] = (uint)((local_44 & 0x80) != 0);
        iVar2 = iVar2 + -0xff;
        if (9 < bVar7) {
          iVar2 = 0x100;
        }
        param_1[0x11] = iVar2;
        uVar3 = ft_lzwstate_get_code(param_1);
        if (uVar3 < 0x100) {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = (char)uVar3;
          }
          uVar9 = uVar3;
          local_58 = uVar3;
          if (param_3 == 1) {
            lVar5 = 1;
            local_54 = 0;
            goto LAB_00100700;
          }
          *param_1 = 1;
          local_54 = 0;
          lVar5 = 1;
          goto LAB_0010076d;
        }
        local_54 = 0;
      }
    }
    *param_1 = 3;
    lVar5 = 0;
  }
LAB_00100700:
  param_1[0x12] = uVar9;
  param_1[0x13] = local_58;
  param_1[0x14] = local_54;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}



long ft_lzw_stream_io(long param_1,ulong param_2,long param_3,ulong param_4)

{
  void *__dest;
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  void *__src;
  long lVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uVar4 = puVar1[0x21e];
  if (param_2 < uVar4) {
    if (uVar4 - param_2 <= (ulong)(puVar1[0x21f] - (long)(puVar1 + 0x1e))) {
      puVar1[0x21e] = param_2;
      puVar1[0x21f] = puVar1[0x21f] + (param_2 - uVar4);
      goto LAB_00100b69;
    }
    iVar2 = FT_Stream_Seek(*puVar1,0);
    if (iVar2 != 0) {
      return 0;
    }
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    uVar4 = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    *(undefined4 *)((long)puVar1 + 0x54) = 9;
    puVar1[3] = 0;
    puVar1[0x21e] = 0;
    puVar1[0x21f] = puVar1 + 0x21e;
    puVar1[0x220] = puVar1 + 0x21e;
  }
  if (uVar4 < param_2) {
    param_2 = param_2 - uVar4;
    uVar5 = puVar1[0x220] - puVar1[0x21f];
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    puVar1[0x21f] = puVar1[0x21f] + uVar5;
    puVar1[0x21e] = uVar4 + uVar5;
    param_2 = param_2 - uVar5;
    if (param_2 != 0) {
      do {
        uVar4 = 0x1000;
        if (param_2 < 0x1001) {
          uVar4 = param_2;
        }
        uVar5 = ft_lzwstate_io(puVar1 + 3,0,uVar4);
        if (uVar5 < uVar4) {
          return 0;
        }
        puVar1[0x21e] = puVar1[0x21e] + uVar4;
        param_2 = param_2 - uVar4;
      } while (param_2 != 0);
    }
  }
LAB_00100b69:
  if (param_4 == 0) {
    return 0;
  }
  lVar6 = puVar1[0x220];
  __src = (void *)puVar1[0x21f];
  lVar7 = 0;
  while( true ) {
    __dest = (void *)(param_3 + lVar7);
    uVar4 = lVar6 - (long)__src;
    if (param_4 < (ulong)(lVar6 - (long)__src)) {
      uVar4 = param_4;
    }
    lVar7 = lVar7 + uVar4;
    memcpy(__dest,__src,uVar4);
    puVar1[0x21f] = puVar1[0x21f] + uVar4;
    puVar1[0x21e] = puVar1[0x21e] + uVar4;
    param_4 = param_4 - uVar4;
    if (param_4 == 0) break;
    puVar1[0x21f] = puVar1 + 0x1e;
    lVar3 = ft_lzwstate_io(puVar1 + 3,puVar1 + 0x1e,0x1000);
    __src = (void *)puVar1[0x21f];
    lVar6 = (long)__src + lVar3;
    puVar1[0x220] = lVar6;
    if (lVar3 == 0) {
      return lVar7;
    }
  }
  return lVar7;
}


