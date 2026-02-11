
long getndelim2(undefined8 *param_1,ulong *param_2,ulong param_3,ulong param_4,uint param_5,
               uint param_6,_IO_FILE *param_7)

{
  byte *pbVar1;
  int iVar2;
  void *__src;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *__dest;
  ulong uVar7;
  size_t __size;
  ulong uVar8;
  uint uVar9;
  bool bVar10;
  long in_FS_OFFSET;
  undefined1 *local_88;
  uint local_70;
  ulong local_48;
  long local_40;
  
  local_88 = (undefined1 *)*param_1;
  uVar8 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_88 == (undefined1 *)0x0) {
    uVar8 = 0x40;
    if (param_4 < 0x41) {
      uVar8 = param_4;
    }
    local_88 = (undefined1 *)malloc(uVar8);
    if (local_88 != (undefined1 *)0x0) goto LAB_00100045;
  }
  else {
LAB_00100045:
    if ((uVar8 < param_3) || (uVar7 = uVar8 - param_3, uVar7 == 0 && param_4 <= uVar8)) {
LAB_001001bf:
      *param_1 = local_88;
      *param_2 = uVar8;
    }
    else {
      uVar9 = param_6;
      if ((param_5 != 0xffffffff) && (uVar9 = param_5, param_6 == 0xffffffff)) {
        param_6 = param_5;
      }
      __dest = local_88 + param_3;
      do {
        while( true ) {
          __src = (void *)freadptr(param_7,&local_48);
          uVar5 = local_48;
          uVar6 = uVar8;
          if (__src == (void *)0x0) {
            pbVar1 = (byte *)param_7->_IO_read_ptr;
            if (pbVar1 < param_7->_IO_read_end) {
              param_7->_IO_read_ptr = (char *)(pbVar1 + 1);
              local_70 = (uint)*pbVar1;
            }
            else {
              local_70 = __uflow(param_7);
              if (local_70 == 0xffffffff) {
                puVar4 = __dest;
                if (__dest == local_88) goto LAB_001001bf;
                goto LAB_00100176;
              }
            }
            local_48 = 1;
            bVar10 = uVar9 == local_70 || param_6 == local_70;
            uVar5 = 2;
          }
          else if ((uVar9 == 0xffffffff) ||
                  (lVar3 = memchr2(__src,uVar9,param_6,local_48), lVar3 == 0)) {
            uVar5 = uVar5 + 1;
            bVar10 = false;
          }
          else {
            bVar10 = true;
            local_48 = (lVar3 - (long)__src) + 1;
            uVar5 = (lVar3 - (long)__src) + 2;
          }
          if ((uVar7 < uVar5) && (uVar8 < param_4)) {
            uVar6 = uVar8 * 2;
            if (uVar8 < 0x40) {
              uVar6 = uVar8 + 0x40;
            }
            lVar3 = (long)__dest - (long)local_88;
            if (uVar6 - lVar3 < uVar5) {
              uVar6 = lVar3 + uVar5;
            }
            if ((uVar6 <= uVar8) || (param_4 < uVar6)) {
              uVar6 = param_4;
            }
            if (((long)(uVar6 - param_3) < 0) &&
               (uVar6 = param_3 + 0x8000000000000000, uVar8 == uVar6)) goto LAB_001001bf;
            uVar7 = uVar6 - lVar3;
            __size = 1;
            if (uVar6 != 0) {
              __size = uVar6;
            }
            puVar4 = (undefined1 *)realloc(local_88,__size);
            if (puVar4 == (undefined1 *)0x0) goto LAB_001001bf;
            __dest = puVar4 + lVar3;
            local_88 = puVar4;
          }
          uVar8 = uVar6;
          if (uVar7 < 2) break;
          uVar5 = uVar7 - 1;
          if (local_48 < uVar7 - 1) {
            uVar5 = local_48;
          }
          puVar4 = __dest + uVar5;
          uVar7 = uVar7 - uVar5;
          if (__src != (void *)0x0) {
            memcpy(__dest,__src,uVar5);
            goto LAB_001000ed;
          }
          *__dest = (char)local_70;
LAB_00100102:
          __dest = puVar4;
          if (bVar10) goto LAB_00100176;
        }
        puVar4 = __dest;
        if (__src != (void *)0x0) {
LAB_001000ed:
          iVar2 = freadseek(param_7,local_48);
          if (iVar2 == 0) goto LAB_00100102;
          goto LAB_001001bf;
        }
      } while (!bVar10);
LAB_00100176:
      *puVar4 = 0;
      *param_1 = local_88;
      *param_2 = uVar6;
      lVar3 = (long)puVar4 - (long)(local_88 + param_3);
      if (lVar3 != 0) goto LAB_0010018c;
    }
  }
  lVar3 = -1;
LAB_0010018c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}


