
void ft_gzip_free(void)

{
  ft_mem_free();
  return;
}



ulong ft_gzip_check_header(undefined8 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  uint local_28;
  char local_24;
  char local_23;
  char local_22;
  byte local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FT_Stream_Seek(param_1,0);
  local_28 = (uint)uVar3;
  if (local_28 == 0) {
    uVar3 = FT_Stream_Read(param_1,&local_24,4);
    local_28 = (uint)uVar3;
    if ((((local_28 == 0) && (uVar3 = 3, local_24 == '\x1f')) && (local_23 == -0x75)) &&
       ((local_22 == '\b' && (local_21 < 0x20)))) {
      local_28 = FT_Stream_Skip(param_1,6);
      if ((local_21 & 4) != 0) {
        uVar2 = FT_Stream_ReadUShortLE(param_1,&local_28);
        uVar3 = (ulong)local_28;
        if (local_28 != 0) goto LAB_00100037;
        uVar3 = FT_Stream_Skip(param_1,(short)uVar2,uVar2);
        local_28 = (uint)uVar3;
        if (local_28 != 0) goto LAB_00100037;
      }
      bVar1 = local_21 & 8;
      do {
        if (bVar1 == 0) {
          bVar1 = local_21 & 0x10;
          goto joined_r0x001000db;
        }
        bVar1 = FT_Stream_ReadByte(param_1,&local_28);
        uVar3 = (ulong)local_28;
      } while (local_28 == 0);
    }
  }
  goto LAB_00100037;
  while( true ) {
    bVar1 = FT_Stream_ReadByte(param_1,&local_28);
    uVar3 = (ulong)local_28;
    if (local_28 != 0) break;
joined_r0x001000db:
    if (bVar1 == 0) {
      if ((local_21 & 2) == 0) {
        uVar3 = (ulong)local_28;
      }
      else {
        uVar3 = FT_Stream_Skip(param_1,2);
      }
      break;
    }
  }
LAB_00100037:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void ft_gzip_alloc(undefined8 param_1,ulong param_2,uint param_3)

{
  long in_FS_OFFSET;
  undefined1 local_14 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ft_mem_alloc(param_1,(ulong)param_3 * (param_2 & 0xffffffff),local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ft_gzip_file_fill_output(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  
  bVar12 = 0;
  plVar1 = param_1 + 0x12;
  param_1[0x413] = (long)(param_1 + 0x212);
  param_1[6] = (long)(param_1 + 0x212);
  *(undefined4 *)(param_1 + 7) = 0x1000;
  while( true ) {
    if ((int)param_1[4] == 0) {
      plVar2 = (long *)*param_1;
      lVar6 = plVar2[2];
      if ((code *)plVar2[5] == (code *)0x0) {
        uVar5 = plVar2[1] - lVar6;
        if (uVar5 < 0x1001) {
          if (uVar5 == 0) break;
          uVar8 = (undefined4)uVar5;
        }
        else {
          uVar8 = 0x1000;
          uVar5 = 0x1000;
        }
        plVar9 = (long *)(lVar6 + *plVar2);
        uVar4 = (uint)uVar5;
        uVar7 = uVar5 & 0xffffffff;
        if (uVar4 < 8) {
          if ((uVar5 & 4) == 0) {
            if ((uVar4 != 0) && (*(char *)plVar1 = (char)*plVar9, (uVar5 & 2) != 0)) {
              *(undefined2 *)((long)param_1 + uVar7 + 0x8e) =
                   *(undefined2 *)((long)plVar9 + (uVar7 - 2));
            }
          }
          else {
            *(int *)plVar1 = (int)*plVar9;
            *(undefined4 *)((long)param_1 + uVar7 + 0x8c) =
                 *(undefined4 *)((long)plVar9 + (uVar7 - 4));
          }
        }
        else {
          *plVar1 = *plVar9;
          *(undefined8 *)((long)param_1 + (uVar5 & 0xffffffff) + 0x88) =
               *(undefined8 *)((long)plVar9 + ((uVar5 & 0xffffffff) - 8));
          lVar6 = (long)plVar1 - (long)((ulong)(param_1 + 0x13) & 0xfffffffffffffff8);
          puVar10 = (undefined8 *)((long)plVar9 - lVar6);
          puVar11 = (undefined8 *)((ulong)(param_1 + 0x13) & 0xfffffffffffffff8);
          for (uVar7 = (ulong)((int)lVar6 + uVar4 >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
            puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
          }
        }
      }
      else {
        uVar5 = (*(code *)plVar2[5])(plVar2,lVar6,plVar1,0x1000);
        if (uVar5 == 0) break;
        uVar8 = (undefined4)uVar5;
      }
      plVar2[2] = plVar2[2] + uVar5;
      param_1[3] = (long)plVar1;
      *(undefined4 *)(param_1 + 4) = uVar8;
    }
    iVar3 = inflate(param_1 + 3,0);
    if (iVar3 == 1) {
      param_1[0x414] = param_1[6];
      if (param_1[6] != param_1[0x413]) {
        return 0;
      }
      return 0x55;
    }
    if (iVar3 != 0) break;
    if ((int)param_1[7] == 0) {
      return 0;
    }
  }
  param_1[0x414] = param_1[0x413];
  return 0x55;
}



long ft_gzip_file_io(undefined8 *param_1,ulong param_2,void *param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = param_1[0x412];
  if (param_2 < uVar3) {
    iVar1 = FT_Stream_Seek(*param_1,param_1[0x11]);
    if (iVar1 != 0) {
      return 0;
    }
    inflateReset(param_1 + 3);
    *(undefined4 *)(param_1 + 4) = 0;
    uVar3 = 0;
    param_1[3] = param_1 + 0x12;
    param_1[6] = param_1 + 0x212;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[0x412] = 0;
    param_1[0x413] = param_1 + 0x412;
    param_1[0x414] = param_1 + 0x412;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 - uVar3;
    while( true ) {
      uVar2 = param_1[0x414] - param_1[0x413];
      if (param_2 < uVar2) {
        uVar2 = param_2;
      }
      param_1[0x413] = param_1[0x413] + uVar2;
      param_1[0x412] = uVar3 + uVar2;
      param_2 = param_2 - uVar2;
      if (param_2 == 0) goto LAB_00100379;
      iVar1 = ft_gzip_file_fill_output(param_1);
      if (iVar1 != 0) break;
      uVar3 = param_1[0x412];
    }
  }
  else {
LAB_00100379:
    lVar4 = 0;
    if (param_4 != 0) {
      do {
        uVar3 = param_1[0x414] - (long)param_1[0x413];
        if (param_4 < uVar3) {
          uVar3 = param_4;
        }
        lVar4 = lVar4 + uVar3;
        memcpy(param_3,(void *)param_1[0x413],uVar3);
        param_1[0x413] = param_1[0x413] + uVar3;
        param_1[0x412] = param_1[0x412] + uVar3;
        param_4 = param_4 - uVar3;
      } while ((param_4 != 0) &&
              (iVar1 = ft_gzip_file_fill_output(param_1), param_3 = (void *)((long)param_3 + uVar3),
              iVar1 == 0));
      return lVar4;
    }
  }
  return 0;
}



void ft_gzip_stream_io(long param_1)

{
  ft_gzip_file_io(*(undefined8 *)(param_1 + 0x18));
  return;
}



void ft_gzip_stream_close(undefined8 *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  
  pauVar1 = (undefined1 (*) [16])param_1[3];
  uVar2 = param_1[7];
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    inflateEnd(pauVar1[1] + 8);
    *(undefined8 *)(pauVar1[6] + 8) = 0;
    *(undefined8 *)pauVar1[3] = 0;
    *(undefined4 *)pauVar1[2] = 0;
    *(undefined4 *)(pauVar1[3] + 8) = 0;
    *(undefined1 (*) [16])(pauVar1[5] + 8) = (undefined1  [16])0x0;
    *pauVar1 = (undefined1  [16])0x0;
    pauVar1[1] = (undefined1  [16])0x0;
    ft_mem_free(uVar2,pauVar1);
    param_1[3] = 0;
  }
  if (param_1[5] != 0) {
    return;
  }
  ft_mem_free(uVar2,*param_1);
  *param_1 = 0;
  return;
}



int FT_Stream_OpenGzip(undefined1 (*param_1) [16],long param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (undefined1 (*) [16])0x0) || (param_2 == 0)) {
    iVar2 = 0x28;
    goto LAB_00100656;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  local_48 = ft_gzip_check_header(param_2);
  iVar2 = local_48;
  if (local_48 != 0) goto LAB_00100656;
  param_1[3] = (undefined1  [16])0x0;
  *(undefined8 *)(param_1[3] + 8) = uVar1;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[4] = (undefined1  [16])0x0;
  pauVar4 = (undefined1 (*) [16])ft_mem_qalloc(uVar1,0x20a8);
  if (local_48 == 0) {
    *(undefined1 (**) [16])(*pauVar4 + 8) = param_1;
    *(long *)*pauVar4 = param_2;
    uVar5 = *(undefined8 *)(param_1[3] + 8);
    *(undefined8 *)pauVar4[0x209] = 0;
    *(undefined8 *)pauVar4[1] = uVar5;
    *(undefined1 (**) [16])(pauVar4[0x209] + 8) = pauVar4 + 0x209;
    *(undefined1 (**) [16])pauVar4[0x20a] = pauVar4 + 0x209;
    iVar2 = ft_gzip_check_header(param_2);
    if (iVar2 == 0) {
      uVar5 = FT_Stream_Pos(param_2);
      *(undefined8 *)(pauVar4[8] + 8) = uVar5;
      *(code **)(pauVar4[5] + 8) = ft_gzip_alloc;
      *(undefined8 *)pauVar4[6] = 0x100000;
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      *(undefined4 *)pauVar4[2] = 0;
      *(undefined8 *)(pauVar4[6] + 8) = uVar5;
      *(undefined1 (**) [16])(pauVar4[1] + 8) = pauVar4 + 0x109;
      iVar2 = inflateInit2_(pauVar4[1] + 8,0xfffffff1,"1.3.1",0x70);
      if ((iVar2 == 0) && (*(long *)(pauVar4[1] + 8) != 0)) {
        local_48 = 0;
        *(undefined1 (**) [16])(param_1[1] + 8) = pauVar4;
        goto LAB_00100704;
      }
      iVar2 = 3;
    }
    local_48 = iVar2;
    ft_mem_free(uVar1,pauVar4);
    iVar2 = local_48;
    goto LAB_00100656;
  }
LAB_00100704:
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  iVar2 = FT_Stream_Seek(param_2,*(long *)(param_2 + 8) + -4);
  if (iVar2 == 0) {
    uVar3 = FT_Stream_ReadULongLE(param_2,&local_44);
    if (local_44 != 0) {
      FT_Stream_Seek(param_2,uVar5);
      goto LAB_00100721;
    }
    uVar7 = (ulong)uVar3;
    FT_Stream_Seek(param_2,uVar5);
    if (uVar7 - 1 < 0x9fff) {
      uVar5 = ft_mem_qalloc(uVar1,uVar7,&local_48);
      iVar2 = 0;
      if (local_48 == 0) {
        uVar6 = ft_gzip_file_io(pauVar4,0,uVar5,uVar7);
        if (uVar6 == uVar7) {
          inflateEnd(pauVar4[1] + 8);
          *(undefined8 *)(pauVar4[6] + 8) = 0;
          *(undefined8 *)pauVar4[3] = 0;
          *(undefined4 *)pauVar4[2] = 0;
          *(undefined4 *)(pauVar4[3] + 8) = 0;
          *(undefined1 (*) [16])(pauVar4[5] + 8) = (undefined1  [16])0x0;
          *pauVar4 = (undefined1  [16])0x0;
          pauVar4[1] = (undefined1  [16])0x0;
          ft_mem_free(uVar1,pauVar4);
          *(undefined8 *)*param_1 = uVar5;
          *(undefined8 *)(param_1[1] + 8) = 0;
          *(ulong *)(*param_1 + 8) = uVar6;
          *(undefined8 *)param_1[1] = 0;
          *(undefined8 *)(param_1[2] + 8) = 0;
          *(code **)param_1[3] = ft_gzip_stream_close;
          iVar2 = local_48;
          goto LAB_00100656;
        }
        ft_gzip_file_io(pauVar4,0,0,0);
        ft_mem_free(uVar1,uVar5);
      }
    }
    else {
      iVar2 = local_48;
      if (uVar7 == 0) {
        uVar7 = 0x7fffffff;
      }
    }
  }
  else {
LAB_00100721:
    uVar7 = 0x7fffffff;
    iVar2 = local_48;
  }
  *(ulong *)(*param_1 + 8) = uVar7;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)*param_1 = 0;
  *(code **)(param_1[2] + 8) = ft_gzip_stream_io;
  *(code **)param_1[3] = ft_gzip_stream_close;
LAB_00100656:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



long FT_Gzip_Uncompress(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                       undefined4 param_5)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined4 local_90;
  long local_80;
  undefined4 local_78;
  undefined8 local_70;
  code *local_58;
  undefined8 uStack_50;
  long local_48;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != (undefined8 *)0x0 && param_2 != 0) && (param_1 != 0)) {
    local_78 = (undefined4)*param_3;
    local_58 = ft_gzip_alloc;
    uStack_50 = 0x100000;
    local_98 = param_4;
    local_90 = param_5;
    local_80 = param_2;
    local_48 = param_1;
    iVar1 = inflateInit2_(&local_98,0x2f,"1.3.1",0x70);
    if (iVar1 == 0) {
      iVar1 = inflate(&local_98,4);
      if (iVar1 == 1) {
        *param_3 = local_70;
        iVar1 = inflateEnd(&local_98);
LAB_0010097c:
        if (iVar1 == -4) {
          lVar2 = 0x40;
          goto LAB_001009a5;
        }
        if (iVar1 != -5) {
          lVar2 = (ulong)(iVar1 == -3 || iVar1 == 2) << 3;
          goto LAB_001009a5;
        }
      }
      else {
        inflateEnd(&local_98);
        if (iVar1 != 0) goto LAB_0010097c;
      }
      lVar2 = 10;
      goto LAB_001009a5;
    }
  }
  lVar2 = 6;
LAB_001009a5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


