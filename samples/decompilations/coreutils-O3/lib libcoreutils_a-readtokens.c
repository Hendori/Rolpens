
void init_tokenbuffer(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



long readtoken(_IO_FILE *param_1,byte *param_2,long param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  long local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  pbVar3 = param_2 + param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_3 == 0) goto LAB_001000bd;
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    *(ulong *)(local_68 + (bVar1 >> 3 & 0x18)) =
         *(ulong *)(local_68 + (bVar1 >> 3 & 0x18)) | 1L << (bVar1 & 0x3f);
  } while (param_2 != pbVar3);
  pbVar3 = (byte *)param_1->_IO_read_ptr;
  if (param_1->_IO_read_end <= pbVar3) goto LAB_001000c7;
LAB_001000a0:
  param_1->_IO_read_ptr = (char *)(pbVar3 + 1);
  uVar6 = (ulong)*pbVar3;
  do {
    if ((*(ulong *)(local_68 + ((ulong)(long)(int)uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
      local_70 = *param_4;
      lVar4 = param_4[1];
      lVar5 = 0;
      while( true ) {
        if (lVar5 == local_70) {
          lVar4 = xpalloc(lVar4,&local_70,1,0xffffffffffffffff,1);
        }
        if (((int)uVar6 < 0) ||
           ((*(ulong *)(local_68 + ((ulong)(long)(int)uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0))
        break;
        *(undefined1 *)(lVar4 + lVar5) = (char)uVar6;
        lVar5 = lVar5 + 1;
        pbVar3 = (byte *)param_1->_IO_read_ptr;
        if (pbVar3 < param_1->_IO_read_end) {
          param_1->_IO_read_ptr = (char *)(pbVar3 + 1);
          uVar6 = (ulong)*pbVar3;
        }
        else {
          uVar2 = __uflow(param_1);
          uVar6 = (ulong)uVar2;
        }
      }
      *(undefined1 *)(lVar4 + lVar5) = 0;
      param_4[1] = lVar4;
      *param_4 = local_70;
LAB_00100180:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return lVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
LAB_001000bd:
    pbVar3 = (byte *)param_1->_IO_read_ptr;
    if (pbVar3 < param_1->_IO_read_end) goto LAB_001000a0;
LAB_001000c7:
    uVar2 = __uflow(param_1);
    uVar6 = (ulong)uVar2;
    if ((int)uVar2 < 0) {
      lVar5 = -1;
      goto LAB_00100180;
    }
  } while( true );
}



/* WARNING: Type propagation algorithm not settling */

long readtokens(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
               undefined8 *param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  void *__ptr;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60 [2];
  void *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    local_60[0] = 0x40;
  }
  else {
    local_60[0] = param_2 + 1;
  }
  lVar8 = 0;
  lVar5 = xnmalloc(local_60[0],8);
  __ptr = (void *)xnmalloc(local_60[0],8);
  local_60[1] = 0;
  local_50 = (void *)0x0;
  while( true ) {
    lVar7 = readtoken(param_1,param_3,param_4,local_60 + 1);
    if (local_60[0] <= lVar8) {
      lVar5 = xpalloc(lVar5,local_60,1,0xffffffffffffffff,8);
      __ptr = (void *)xreallocarray(__ptr,local_60[0],8);
    }
    pvVar4 = local_50;
    plVar2 = (long *)((long)__ptr + lVar8 * 8);
    puVar3 = (undefined8 *)(lVar5 + lVar8 * 8);
    if (lVar7 == -1) break;
    lVar1 = lVar7 + 1;
    lVar8 = lVar8 + 1;
    uVar6 = xnmalloc(lVar1,1);
    *plVar2 = lVar7;
    uVar6 = __memcpy_chk(uVar6,pvVar4,lVar1,lVar1);
    *puVar3 = uVar6;
  }
  *puVar3 = 0;
  *plVar2 = 0;
  free(local_50);
  *param_5 = lVar5;
  if (param_6 == (undefined8 *)0x0) {
    free(__ptr);
  }
  else {
    *param_6 = __ptr;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


