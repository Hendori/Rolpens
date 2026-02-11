
void check_location(long param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 & 0xb;
  if (param_2 != 0) {
    if ((~-param_2 & param_2) == 0) {
      return;
    }
    do {
      param_2 = param_2 & param_2 - 1;
    } while ((~-param_2 & param_2) != 0);
    return;
  }
  if ((*(byte *)(param_1 + 0x12d) & 0x80) == 0) {
    png_app_warning(param_1,"png_set_unknown_chunks now expects a valid location");
    uVar1 = *(uint *)(param_1 + 300) & 0xb;
    if (uVar1 != 0) {
      for (; (~-uVar1 & uVar1) != 0; uVar1 = uVar1 & uVar1 - 1) {
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"invalid location in png_set_unknown_chunks");
}



void png_set_sCAL_s_part_0
               (undefined8 param_1,long param_2,undefined1 param_3,char *param_4,char *param_5)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  
  if (param_4 != (char *)0x0) {
    sVar2 = strlen(param_4);
    if ((sVar2 != 0) && (*param_4 != '-')) {
      iVar1 = png_check_fp_string(param_4,sVar2);
      if (iVar1 != 0) {
        if (param_5 != (char *)0x0) {
          sVar3 = strlen(param_5);
          if ((sVar3 != 0) && (*param_5 != '-')) {
            iVar1 = png_check_fp_string(param_5,sVar3);
            if (iVar1 != 0) {
              *(undefined1 *)(param_2 + 0x154) = param_3;
              pvVar4 = (void *)png_malloc_warn(param_1,sVar2 + 1);
              *(void **)(param_2 + 0x158) = pvVar4;
              if (pvVar4 != (void *)0x0) {
                memcpy(pvVar4,param_4,sVar2 + 1);
                pvVar4 = (void *)png_malloc_warn(param_1,sVar3 + 1);
                *(void **)(param_2 + 0x160) = pvVar4;
                if (pvVar4 != (void *)0x0) {
                  memcpy(pvVar4,param_5,sVar3 + 1);
                  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000;
                  *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x100;
                  return;
                }
                png_free(param_1,*(undefined8 *)(param_2 + 0x158));
                *(undefined8 *)(param_2 + 0x158) = 0;
              }
              png_warning(param_1,"Memory allocation failed while processing sCAL");
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Invalid sCAL height");
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Invalid sCAL width");
}



void png_set_bKGD(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0 && param_3 != (undefined8 *)0x0) && (param_1 != 0)) {
    uVar1 = *param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
    *(undefined8 *)(param_2 + 0xd2) = uVar1;
    *(undefined2 *)(param_2 + 0xda) = *(undefined2 *)(param_3 + 1);
  }
  return;
}



void png_set_cHRM_fixed(long param_1,long param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (param_2 != 0)) {
    local_40 = param_7;
    local_3c = param_8;
    local_38 = param_9;
    local_34 = param_10;
    local_48 = param_5;
    local_44 = param_6;
    local_30 = param_3;
    local_2c = param_4;
    iVar1 = png_colorspace_set_chromaticities(param_1,param_2 + 0x34,&local_48,2);
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x7e) = *(ushort *)(param_2 + 0x7e) | 0x10;
    }
    png_colorspace_sync_info(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_set_cHRM_XYZ_fixed
               (long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (param_2 != 0)) {
    local_38 = param_7;
    local_34 = param_8;
    local_30 = param_9;
    local_2c = param_10;
    local_28 = param_11;
    local_48 = param_3;
    local_44 = param_4;
    local_40 = param_5;
    local_3c = param_6;
    iVar1 = png_colorspace_set_endpoints(param_1,param_2 + 0x34,&local_48,2);
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x7e) = *(ushort *)(param_2 + 0x7e) | 0x10;
    }
    png_colorspace_sync_info(param_1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_set_cHRM(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = png_fixed(param_8,param_9,"cHRM Blue Y");
  uVar2 = png_fixed(param_7,param_9,"cHRM Blue X");
  uVar3 = png_fixed(param_6,param_9,"cHRM Green Y");
  uVar4 = png_fixed(param_5,param_9,"cHRM Green X");
  uVar5 = png_fixed(param_4,param_9,"cHRM Red Y");
  uVar6 = png_fixed(param_3,param_9,"cHRM Red X");
  uVar7 = png_fixed(param_2,param_9,"cHRM White Y");
  uVar8 = png_fixed(param_1,param_9,"cHRM White X");
  png_set_cHRM_fixed(param_9,param_10,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}



void png_set_cHRM_XYZ(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 in_stack_00000008;
  
  uVar1 = png_fixed(in_stack_00000008,param_9,"cHRM Blue Z");
  uVar2 = png_fixed(param_8,param_9,"cHRM Blue Y");
  uVar3 = png_fixed(param_7,param_9,"cHRM Blue X");
  uVar4 = png_fixed(param_6,param_9,"cHRM Green Z");
  uVar5 = png_fixed(param_5,param_9,"cHRM Green Y");
  uVar6 = png_fixed(param_4,param_9,"cHRM Green X");
  uVar7 = png_fixed(param_3,param_9,"cHRM Red Z");
  uVar8 = png_fixed(param_2,param_9,"cHRM Red Y");
  uVar9 = png_fixed(param_1,param_9,"cHRM Red X");
  png_set_cHRM_XYZ_fixed(param_9,param_10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}



void png_set_cICP(long param_1,long param_2,undefined1 param_3,undefined1 param_4,char param_5,
                 undefined1 param_6)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 0x80) = CONCAT31(CONCAT21(CONCAT11(param_6,param_5),param_4),param_3);
    if (param_5 != '\0') {
      png_warning(param_1,"Invalid cICP matrix coefficients");
      return;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20000;
  }
  return;
}



void png_set_eXIf(undefined8 param_1)

{
  png_warning(param_1,"png_set_eXIf does not work; use png_set_eXIf_1");
  return;
}



void png_set_eXIf_1(long param_1,long param_2,uint param_3,void *param_4)

{
  void *__dest;
  
  if (param_1 == 0) {
    return;
  }
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x12d) & 0x40) == 0)) {
    __dest = (void *)png_malloc_warn(param_1,(ulong)param_3);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_4,(ulong)param_3);
      png_free_data(param_1,param_2,0x8000,0);
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10000;
      *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x8000;
      *(uint *)(param_2 + 0xf4) = param_3;
      *(void **)(param_2 + 0xf8) = __dest;
      return;
    }
    png_warning(param_1,"Insufficient memory for eXIf chunk data");
    return;
  }
  return;
}



void png_set_gAMA_fixed(long param_1,long param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    png_colorspace_set_gamma(param_1,param_2 + 0x34);
    png_colorspace_sync_info(param_1,param_2);
    return;
  }
  return;
}



void png_set_gAMA(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = png_fixed(param_1,"png_set_gAMA");
  if ((param_1 != 0) && (param_2 != 0)) {
    png_colorspace_set_gamma(param_1,param_2 + 0x34,uVar1);
    png_colorspace_sync_info(param_1,param_2);
    return;
  }
  return;
}



void png_set_hIST(long param_1,long param_2,void *param_3)

{
  void *__dest;
  char *pcVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  pcVar1 = "Invalid palette size, hIST allocation skipped";
  if ((ushort)(*(short *)(param_2 + 0x20) - 1U) < 0x100) {
    png_free_data(param_1,param_2,8,0);
    __dest = (void *)png_malloc_warn(param_1,0x200);
    *(void **)(param_2 + 0x108) = __dest;
    if (__dest != (void *)0x0) {
      if (*(ushort *)(param_2 + 0x20) != 0) {
        memcpy(__dest,param_3,(ulong)*(ushort *)(param_2 + 0x20) * 2);
      }
      *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 8;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
      return;
    }
    pcVar1 = "Insufficient memory for hIST chunk data";
  }
  png_warning(param_1,pcVar1);
  return;
}



void png_set_IHDR(long param_1,uint *param_2,uint param_3,uint param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != (uint *)0x0) {
    param_2[1] = param_4;
    *param_2 = param_3;
    param_2[9] = CONCAT31(CONCAT21(CONCAT11(param_9,param_8),param_6),param_5);
    *(undefined1 *)(param_2 + 10) = param_7;
    png_check_IHDR(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    bVar3 = *(byte *)((long)param_2 + 0x25);
    if (bVar3 == 3) {
      cVar2 = '\x01';
    }
    else {
      bVar1 = -((bVar3 & 2) == 0) & 0xfe;
      cVar2 = bVar1 + 3;
      if ((bVar3 & 4) != 0) {
        cVar2 = bVar1 + 4;
      }
    }
    bVar3 = cVar2 * (char)param_2[9];
    *(char *)((long)param_2 + 0x29) = cVar2;
    *(byte *)((long)param_2 + 0x2a) = bVar3;
    if (bVar3 < 8) {
      uVar4 = (ulong)bVar3 * (ulong)param_3 + 7 >> 3;
    }
    else {
      uVar4 = (ulong)(bVar3 >> 3) * (ulong)param_3;
    }
    *(ulong *)(param_2 + 4) = uVar4;
  }
  return;
}



void png_set_oFFs(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
                 )

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
    *(undefined4 *)(param_2 + 0xdc) = param_3;
    *(undefined4 *)(param_2 + 0xe0) = param_4;
    *(undefined1 *)(param_2 + 0xe4) = param_5;
  }
  return;
}



void png_set_pCAL(long param_1,long param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,uint param_7,char *param_8,undefined8 *param_9)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  undefined1 local_54;
  
  bVar11 = 0;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (char *)0x0)) ||
     ((param_8 == (char *)0x0 || ((0 < (int)param_7 && (param_9 == (undefined8 *)0x0)))))) {
    return;
  }
  sVar2 = strlen(param_3);
  pcVar7 = "Invalid pCAL equation type";
  if (param_6 < 4) {
    if (param_7 < 0x100) {
      if (0 < (int)param_7) {
        puVar5 = param_9;
        do {
          pcVar7 = (char *)*puVar5;
          if (pcVar7 == (char *)0x0) {
LAB_00100a81:
            pcVar7 = "Invalid format for pCAL parameter";
            goto LAB_00100a8d;
          }
          sVar3 = strlen(pcVar7);
          iVar1 = png_check_fp_string(pcVar7,sVar3);
          if (iVar1 == 0) goto LAB_00100a81;
          puVar5 = puVar5 + 1;
        } while (param_9 + (int)param_7 != puVar5);
      }
      pvVar4 = (void *)png_malloc_warn(param_1,sVar2 + 1);
      *(void **)(param_2 + 0x110) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        memcpy(pvVar4,param_3,sVar2 + 1);
        *(char *)(param_2 + 0x131) = (char)param_7;
        *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x80;
        *(undefined4 *)(param_2 + 0x118) = param_4;
        *(undefined4 *)(param_2 + 0x11c) = param_5;
        local_54 = (undefined1)param_6;
        *(undefined1 *)(param_2 + 0x130) = local_54;
        sVar2 = strlen(param_8);
        pvVar4 = (void *)png_malloc_warn(param_1,sVar2 + 1);
        *(void **)(param_2 + 0x120) = pvVar4;
        if (pvVar4 == (void *)0x0) {
          pcVar7 = "Insufficient memory for pCAL units";
        }
        else {
          uVar9 = (ulong)(param_7 + 1) << 3;
          memcpy(pvVar4,param_8,sVar2 + 1);
          puVar5 = (undefined8 *)png_malloc_warn(param_1,uVar9);
          *(undefined8 **)(param_2 + 0x128) = puVar5;
          if (puVar5 == (undefined8 *)0x0) {
            pcVar7 = "Insufficient memory for pCAL params";
          }
          else {
            *puVar5 = 0;
            *(undefined8 *)((long)puVar5 + ((uVar9 & 0xffffffff) - 8)) = 0;
            puVar8 = (undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
            for (uVar9 = (ulong)((uint)((int)uVar9 +
                                       ((int)puVar5 -
                                       (int)(undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8)
                                       )) >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar8 = 0;
              puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
            }
            if ((int)param_7 < 1) {
LAB_00100c48:
              *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
              return;
            }
            lVar10 = 0;
            while( true ) {
              sVar2 = strlen(*(char **)((long)param_9 + lVar10));
              uVar6 = png_malloc_warn(param_1,sVar2 + 1);
              *(undefined8 *)((long)puVar5 + lVar10) = uVar6;
              pvVar4 = *(void **)(*(long *)(param_2 + 0x128) + lVar10);
              if (pvVar4 == (void *)0x0) break;
              puVar5 = (undefined8 *)((long)param_9 + lVar10);
              lVar10 = lVar10 + 8;
              memcpy(pvVar4,(void *)*puVar5,sVar2 + 1);
              if (lVar10 == (long)(int)param_7 * 8) goto LAB_00100c48;
              puVar5 = *(undefined8 **)(param_2 + 0x128);
            }
            pcVar7 = "Insufficient memory for pCAL parameter";
          }
        }
        png_warning(param_1,pcVar7);
        return;
      }
      pcVar7 = "Insufficient memory for pCAL purpose";
    }
    else {
      pcVar7 = "Invalid pCAL parameter count";
    }
  }
LAB_00100a8d:
  png_chunk_report(param_1,pcVar7,1);
  return;
}



void png_set_sCAL_s(long param_1,long param_2,int param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 - 1U < 2) {
      png_set_sCAL_s_part_0();
      return;
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid sCAL unit");
  }
  return;
}



void png_set_sCAL(double param_1,double param_2,long param_3,long param_4,int param_5)

{
  char *pcVar1;
  long in_FS_OFFSET;
  undefined1 local_68 [32];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 <= 0.0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar1 = "Invalid sCAL width ignored";
LAB_00100d97:
      png_warning(param_3,pcVar1);
      return;
    }
  }
  else if (param_2 <= 0.0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar1 = "Invalid sCAL height ignored";
      goto LAB_00100d97;
    }
  }
  else {
    png_ascii_from_fp(param_3,local_68,0x12,5);
    png_ascii_from_fp(param_2,param_3,local_48,0x12,5);
    if ((param_3 != 0) && (param_4 != 0)) {
      if (1 < param_5 - 1U) {
                    /* WARNING: Subroutine does not return */
        png_error(param_3,"Invalid sCAL unit");
      }
      png_set_sCAL_s_part_0(param_3,param_4,param_5,local_68,local_48);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_set_sCAL_fixed(long param_1,long param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  long in_FS_OFFSET;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar1 = "Invalid sCAL width ignored";
LAB_00100ea7:
      png_warning(param_1,pcVar1);
      return;
    }
  }
  else if (param_5 < 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar1 = "Invalid sCAL height ignored";
      goto LAB_00100ea7;
    }
  }
  else {
    png_ascii_from_fixed(param_1,auStack_78,0x12);
    png_ascii_from_fixed(param_1,local_58,0x12,param_5);
    if ((param_1 != 0) && (param_2 != 0)) {
      if (1 < param_3 - 1U) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Invalid sCAL unit");
      }
      png_set_sCAL_s_part_0(param_1,param_2,param_3,auStack_78,local_58);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void png_set_pHYs(long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
                 )

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
    *(undefined4 *)(param_2 + 0xe8) = param_3;
    *(undefined4 *)(param_2 + 0xec) = param_4;
    *(undefined1 *)(param_2 + 0xf0) = param_5;
  }
  return;
}



void png_set_PLTE(long param_1,long param_2,void *param_3,uint param_4)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x25) == '\x03') {
      if ((1 << (*(byte *)(param_2 + 0x24) & 0x1f) < (int)param_4) || ((int)param_4 < 0)) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Invalid palette length");
      }
    }
    else if (0x100 < param_4) {
      png_warning(param_1,"Invalid palette length");
      return;
    }
    if ((0 < (int)param_4) && (param_3 == (void *)0x0)) {
LAB_00101029:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid palette");
    }
    if (param_4 == 0) {
      if ((*(byte *)(param_1 + 0x3e0) & 1) == 0) goto LAB_00101029;
      png_free_data(param_1,param_2,0x1000,0);
      pvVar1 = (void *)png_calloc(param_1,0x300);
      *(void **)(param_1 + 0x250) = pvVar1;
    }
    else {
      png_free_data(param_1,param_2,0x1000,0);
      pvVar1 = (void *)png_calloc(param_1,0x300);
      *(void **)(param_1 + 0x250) = pvVar1;
      pvVar1 = memcpy(pvVar1,param_3,(long)(int)param_4 * 3);
    }
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x1000;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
    *(void **)(param_2 + 0x18) = pvVar1;
    *(short *)(param_1 + 600) = (short)param_4;
    *(short *)(param_2 + 0x20) = (short)param_4;
  }
  return;
}



void png_set_sBIT(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != 0 && param_3 != (undefined4 *)0x0) && (param_1 != 0)) {
    uVar1 = *param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
    *(undefined4 *)(param_2 + 0xb8) = uVar1;
    *(undefined1 *)(param_2 + 0xbc) = *(undefined1 *)(param_3 + 1);
  }
  return;
}



void png_set_sRGB(long param_1,long param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    png_colorspace_set_sRGB(param_1,param_2 + 0x34);
    png_colorspace_sync_info(param_1,param_2);
    return;
  }
  return;
}



void png_set_sRGB_gAMA_and_cHRM(long param_1,long param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar1 = png_colorspace_set_sRGB(param_1,param_2 + 0x34);
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x7e) = *(ushort *)(param_2 + 0x7e) | 0x18;
    }
    png_colorspace_sync_info(param_1,param_2);
    return;
  }
  return;
}



void png_set_iCCP(long param_1,long param_2,char *param_3,int param_4,void *param_5,uint param_6)

{
  int iVar1;
  size_t sVar2;
  void *__dest;
  void *__dest_00;
  char *pcVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (((param_2 != 0) && (param_3 != (char *)0x0)) && (param_5 != (void *)0x0)) {
    if (param_4 != 0) {
      png_app_error(param_1,"Invalid iCCP compression method");
    }
    iVar1 = png_colorspace_set_ICC
                      (param_1,param_2 + 0x34,param_3,param_6,param_5,
                       *(undefined1 *)(param_2 + 0x25));
    png_colorspace_sync_info(param_1,param_2);
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x7e) = *(ushort *)(param_2 + 0x7e) | 0x18;
      sVar2 = strlen(param_3);
      __dest = (void *)png_malloc_warn(param_1,sVar2 + 1);
      if (__dest == (void *)0x0) {
        pcVar3 = "Insufficient memory to process iCCP chunk";
      }
      else {
        memcpy(__dest,param_3,sVar2 + 1);
        __dest_00 = (void *)png_malloc_warn(param_1,(ulong)param_6);
        if (__dest_00 != (void *)0x0) {
          memcpy(__dest_00,param_5,(ulong)param_6);
          png_free_data(param_1,param_2,0x10,0);
          *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x10;
          *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
          *(uint *)(param_2 + 0x98) = param_6;
          *(void **)(param_2 + 0x88) = __dest;
          *(void **)(param_2 + 0x90) = __dest_00;
          return;
        }
        png_free(param_1,__dest);
        pcVar3 = "Insufficient memory to process iCCP profile";
      }
      png_benign_error(param_1,pcVar3);
      return;
    }
  }
  return;
}



undefined8 png_set_text_2(long param_1,long param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char *__s;
  uint uVar3;
  size_t sVar4;
  void *pvVar5;
  size_t __n;
  undefined8 uVar6;
  int iVar7;
  size_t sVar8;
  size_t local_68;
  long local_60;
  size_t local_58;
  int local_50;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_4 < 1)) || (param_3 == (int *)0x0)) {
LAB_00101538:
    uVar6 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x9c);
    if (param_4 <= *(int *)(param_2 + 0xa0) - iVar2) {
      local_60 = *(long *)(param_2 + 0xa8);
LAB_00101358:
      local_50 = 0;
      do {
        if (*(char **)(param_3 + 2) != (char *)0x0) {
          iVar7 = *param_3;
          if (iVar7 + 1U < 4) {
            sVar4 = strlen(*(char **)(param_3 + 2));
            __s = *(char **)(param_3 + 4);
            if (iVar7 < 1) {
              if ((__s != (char *)0x0) && (*__s != '\0')) {
                local_58 = 0;
                local_68 = 0;
                goto LAB_0010156b;
              }
              local_58 = 0;
              iVar7 = -1;
              __n = 0;
              local_68 = 0;
            }
            else {
              local_68 = 0;
              if (*(char **)(param_3 + 10) != (char *)0x0) {
                local_68 = strlen(*(char **)(param_3 + 10));
              }
              if (*(char **)(param_3 + 0xc) == (char *)0x0) {
                local_58 = 0;
              }
              else {
                local_58 = strlen(*(char **)(param_3 + 0xc));
              }
              if ((__s == (char *)0x0) || (*__s == '\0')) {
                iVar7 = 1;
                __n = 0;
              }
              else {
LAB_0010156b:
                __n = strlen(__s);
              }
            }
            piVar1 = (int *)(local_60 + (long)iVar2 * 0x38);
            *piVar1 = iVar7;
            pvVar5 = (void *)png_malloc_base(param_1,__n + 4 + sVar4 + local_68 + local_58);
            *(void **)(piVar1 + 2) = pvVar5;
            if (pvVar5 == (void *)0x0) {
              png_chunk_report(param_1,"text chunk: out of memory",1);
              goto LAB_00101682;
            }
            pvVar5 = memcpy(pvVar5,*(void **)(param_3 + 2),sVar4);
            iVar2 = *param_3;
            *(undefined1 *)((long)pvVar5 + sVar4) = 0;
            pvVar5 = (void *)((long)pvVar5 + sVar4 + 1);
            if (iVar2 < 1) {
              *(void **)(piVar1 + 4) = pvVar5;
              *(undefined1 (*) [16])(piVar1 + 10) = (undefined1  [16])0x0;
            }
            else {
              *(void **)(piVar1 + 10) = pvVar5;
              pvVar5 = memcpy(pvVar5,*(void **)(param_3 + 10),local_68);
              *(undefined1 *)((long)pvVar5 + local_68) = 0;
              pvVar5 = (void *)(*(long *)(piVar1 + 10) + 1 + local_68);
              *(void **)(piVar1 + 0xc) = pvVar5;
              memcpy(pvVar5,*(void **)(param_3 + 0xc),local_58);
              *(undefined1 *)(*(long *)(piVar1 + 0xc) + local_58) = 0;
              pvVar5 = (void *)(*(long *)(piVar1 + 0xc) + 1 + local_58);
              *(void **)(piVar1 + 4) = pvVar5;
            }
            if (__n != 0) {
              memcpy(pvVar5,*(void **)(param_3 + 4),__n);
              pvVar5 = *(void **)(piVar1 + 4);
            }
            *(undefined1 *)((long)pvVar5 + __n) = 0;
            sVar4 = 0;
            sVar8 = __n;
            if (0 < *piVar1) {
              sVar8 = 0;
              sVar4 = __n;
            }
            *(int *)(param_2 + 0x9c) = *(int *)(param_2 + 0x9c) + 1;
            *(size_t *)(piVar1 + 8) = sVar4;
            *(size_t *)(piVar1 + 6) = sVar8;
          }
          else {
            png_chunk_report(param_1,"text compression mode is out of range",1);
          }
        }
        local_50 = local_50 + 1;
        param_3 = param_3 + 0xe;
        if (param_4 <= local_50) goto LAB_00101538;
        local_60 = *(long *)(param_2 + 0xa8);
        iVar2 = *(int *)(param_2 + 0x9c);
      } while( true );
    }
    iVar7 = 0x7fffffff - iVar2;
    if (param_4 <= iVar7) {
      uVar3 = 0x7fffffff;
      if (param_4 + iVar2 < 0x7ffffff7) {
        uVar3 = param_4 + iVar2 + 8U & 0xfffffff8;
        iVar7 = uVar3 - iVar2;
      }
      local_60 = png_realloc_array(param_1,*(undefined8 *)(param_2 + 0xa8),iVar2,iVar7,0x38);
      if (local_60 != 0) {
        png_free(param_1,*(undefined8 *)(param_2 + 0xa8));
        *(long *)(param_2 + 0xa8) = local_60;
        iVar2 = *(int *)(param_2 + 0x9c);
        *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x4000;
        *(uint *)(param_2 + 0xa0) = uVar3;
        goto LAB_00101358;
      }
    }
    png_chunk_report(param_1,"too many text chunks",1);
LAB_00101682:
    uVar6 = 1;
  }
  return uVar6;
}



void png_set_text(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = png_set_text_2();
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Insufficient memory to store text");
}



void png_set_tIME(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (((param_2 != 0 && param_3 != (undefined8 *)0x0) && (param_1 != 0)) &&
     ((*(byte *)(param_1 + 0x12d) & 2) == 0)) {
    if (((0xb < (byte)(*(char *)((long)param_3 + 2) - 1U)) ||
        (0x1e < (byte)(*(char *)((long)param_3 + 3) - 1U))) ||
       ((0x17 < *(byte *)((long)param_3 + 4) ||
        ((0x3b < *(byte *)((long)param_3 + 5) || (0x3c < *(byte *)((long)param_3 + 6))))))) {
      png_warning(param_1,"Ignoring invalid time value");
      return;
    }
    uVar1 = *param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
    *(undefined8 *)(param_2 + 0xb0) = uVar1;
  }
  return;
}



void png_set_tRNS(long param_1,long param_2,undefined8 *param_3,uint param_4,undefined8 *param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar6 = (ulong)param_4;
  if (param_3 == (undefined8 *)0x0) {
LAB_001017ab:
    if (param_5 == (undefined8 *)0x0) {
      *(short *)(param_2 + 0x22) = (short)param_4;
      if (param_4 == 0) {
        return;
      }
      uVar2 = *(uint *)(param_2 + 0x134) | 0x2000;
      uVar7 = *(uint *)(param_2 + 8) | 0x10;
      goto LAB_001017fa;
    }
    bVar10 = *(byte *)(param_2 + 0x24);
    if (bVar10 < 0x10) goto LAB_00101880;
LAB_001017c1:
    *(undefined8 *)(param_2 + 200) = *param_5;
    *(undefined2 *)(param_2 + 0xd0) = *(undefined2 *)(param_5 + 1);
    if (param_4 == 0) {
      *(undefined2 *)(param_2 + 0x22) = 1;
      uVar7 = *(uint *)(param_2 + 8) | 0x10;
      uVar2 = *(uint *)(param_2 + 0x134) | 0x2000;
      goto LAB_001017fa;
    }
    uVar2 = *(uint *)(param_2 + 0x134) | 0x2000;
    uVar7 = *(uint *)(param_2 + 8) | 0x10;
  }
  else {
    png_free_data(param_1,param_2,0x2000,0);
    if (0xff < param_4 - 1) {
      *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0xc0);
      goto LAB_001017ab;
    }
    puVar5 = (undefined8 *)png_malloc(param_1,0x100);
    *(undefined8 **)(param_2 + 0xc0) = puVar5;
    if (param_4 < 8) {
      if ((param_4 & 4) == 0) {
        if ((param_4 != 0) && (*(undefined1 *)puVar5 = *(undefined1 *)param_3, (param_4 & 2) != 0))
        {
          *(undefined2 *)((long)puVar5 + (uVar6 - 2)) = *(undefined2 *)((long)param_3 + (uVar6 - 2))
          ;
        }
      }
      else {
        *(undefined4 *)puVar5 = *(undefined4 *)param_3;
        *(undefined4 *)((long)puVar5 + (uVar6 - 4)) = *(undefined4 *)((long)param_3 + (uVar6 - 4));
      }
    }
    else {
      *puVar5 = *param_3;
      *(undefined8 *)((long)puVar5 + (uVar6 - 8)) = *(undefined8 *)((long)param_3 + (uVar6 - 8));
      lVar4 = (long)puVar5 - (long)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
      puVar8 = (undefined8 *)((long)param_3 - lVar4);
      puVar9 = (undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
      for (uVar6 = (ulong)(param_4 + (int)lVar4 >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
        puVar9 = puVar9 + (ulong)bVar10 * -2 + 1;
      }
    }
    uVar2 = *(uint *)(param_2 + 0x134);
    uVar7 = *(uint *)(param_2 + 8);
    *(undefined8 **)(param_1 + 0x2e8) = puVar5;
    uVar2 = uVar2 | 0x2000;
    uVar7 = uVar7 | 0x10;
    *(uint *)(param_2 + 0x134) = uVar2;
    *(uint *)(param_2 + 8) = uVar7;
    if (param_5 != (undefined8 *)0x0) {
      bVar10 = *(byte *)(param_2 + 0x24);
      if (0xf < bVar10) {
        *(undefined8 *)(param_2 + 200) = *param_5;
        *(undefined2 *)(param_2 + 0xd0) = *(undefined2 *)(param_5 + 1);
        goto LAB_0010191f;
      }
LAB_00101880:
      iVar3 = (1 << (bVar10 & 0x1f)) + -1;
      if (*(char *)(param_2 + 0x25) == '\0') {
        uVar1 = *(ushort *)(param_5 + 1);
joined_r0x00101905:
        if ((int)(uint)uVar1 <= iVar3) goto LAB_001017c1;
      }
      else {
        if (*(char *)(param_2 + 0x25) != '\x02') goto LAB_001017c1;
        if (((int)(uint)*(ushort *)((long)param_5 + 2) <= iVar3) &&
           ((int)(uint)*(ushort *)((long)param_5 + 4) <= iVar3)) {
          uVar1 = *(ushort *)((long)param_5 + 6);
          goto joined_r0x00101905;
        }
      }
      png_warning(param_1,"tRNS chunk has out-of-range samples for bit_depth");
      goto LAB_001017c1;
    }
  }
LAB_0010191f:
  *(short *)(param_2 + 0x22) = (short)param_4;
LAB_001017fa:
  *(uint *)(param_2 + 0x134) = uVar2;
  *(uint *)(param_2 + 8) = uVar7;
  return;
}



void png_set_sPLT(long param_1,long param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  void *__src;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  if (param_1 == 0) {
    return;
  }
  if (((param_2 != 0) && (0 < param_4)) && (param_3 != (undefined8 *)0x0)) {
    lVar2 = png_realloc_array(param_1,*(undefined8 *)(param_2 + 0x148),
                              *(undefined4 *)(param_2 + 0x150),param_4,0x20);
    if (lVar2 == 0) {
      pcVar6 = "too many sPLT chunks";
LAB_00101b56:
      png_chunk_report(param_1,pcVar6,1);
      return;
    }
    png_free(param_1,*(undefined8 *)(param_2 + 0x148));
    *(long *)(param_2 + 0x148) = lVar2;
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x20;
    puVar5 = (undefined8 *)(lVar2 + (long)*(int *)(param_2 + 0x150) * 0x20);
    do {
      while ((pcVar6 = (char *)*param_3, pcVar6 == (char *)0x0 || (param_3[2] == 0))) {
        png_app_error(param_1,"png_set_sPLT: invalid sPLT");
        param_4 = param_4 + -1;
        if (param_4 == 0) {
          return;
        }
      }
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(param_3 + 1);
      sVar3 = strlen(pcVar6);
      pvVar4 = (void *)png_malloc_base(param_1,sVar3 + 1);
      *puVar5 = pvVar4;
      if (pvVar4 == (void *)0x0) {
LAB_00101b45:
        if (param_4 < 1) {
          return;
        }
        pcVar6 = "sPLT out of memory";
        goto LAB_00101b56;
      }
      memcpy(pvVar4,(void *)*param_3,sVar3 + 1);
      pvVar4 = (void *)png_malloc_array(param_1,*(undefined4 *)(param_3 + 3),10);
      puVar5[2] = pvVar4;
      if (pvVar4 == (void *)0x0) {
        png_free(param_1,*puVar5);
        *puVar5 = 0;
        goto LAB_00101b45;
      }
      uVar1 = *(uint *)(param_3 + 3);
      __src = (void *)param_3[2];
      param_3 = param_3 + 4;
      *(uint *)(puVar5 + 3) = uVar1;
      memcpy(pvVar4,__src,(ulong)uVar1 * 10);
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
      *(int *)(param_2 + 0x150) = *(int *)(param_2 + 0x150) + 1;
      param_4 = param_4 + -1;
      puVar5 = puVar5 + 4;
    } while (param_4 != 0);
  }
  return;
}



void png_set_unknown_chunks(long param_1,long param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  void *__dest;
  undefined4 *puVar4;
  size_t __n;
  undefined4 *puVar5;
  
  if (param_1 == 0) {
    return;
  }
  if (((param_2 != 0) && (0 < (int)param_4)) && (param_3 != (undefined4 *)0x0)) {
    lVar3 = png_realloc_array(param_1,*(undefined8 *)(param_2 + 0x138),
                              *(undefined4 *)(param_2 + 0x140),(ulong)param_4,0x20);
    if (lVar3 == 0) {
      png_chunk_report(param_1,"too many unknown chunks",1);
      return;
    }
    puVar5 = param_3 + (ulong)param_4 * 8;
    png_free(param_1,*(undefined8 *)(param_2 + 0x138));
    *(long *)(param_2 + 0x138) = lVar3;
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 0x200;
    puVar4 = (undefined4 *)(lVar3 + (long)*(int *)(param_2 + 0x140) * 0x20);
    do {
      uVar1 = *param_3;
      uVar2 = *(undefined1 *)(param_3 + 6);
      *(undefined1 *)(puVar4 + 1) = 0;
      *puVar4 = uVar1;
      uVar2 = check_location(param_1,uVar2);
      lVar3 = *(long *)(param_3 + 4);
      *(undefined1 *)(puVar4 + 6) = uVar2;
      if (lVar3 == 0) {
        *(undefined8 *)(puVar4 + 2) = 0;
        __n = 0;
LAB_00101c30:
        *(int *)(param_2 + 0x140) = *(int *)(param_2 + 0x140) + 1;
        *(size_t *)(puVar4 + 4) = __n;
        puVar4 = puVar4 + 8;
      }
      else {
        __dest = (void *)png_malloc_base(param_1,lVar3);
        *(void **)(puVar4 + 2) = __dest;
        if (__dest != (void *)0x0) {
          __n = *(size_t *)(param_3 + 4);
          memcpy(__dest,*(void **)(param_3 + 2),__n);
          goto LAB_00101c30;
        }
        png_chunk_report(param_1,"unknown chunk: out of memory",1);
      }
      param_3 = param_3 + 8;
    } while (param_3 != puVar5);
  }
  return;
}



void png_set_unknown_chunk_location(long param_1,long param_2,int param_3,uint param_4)

{
  long lVar1;
  undefined1 uVar2;
  
  if ((((param_2 != 0 & (byte)~(byte)((uint)param_3 >> 0x18) >> 7) != 0) && (param_1 != 0)) &&
     (param_3 < *(int *)(param_2 + 0x140))) {
    if ((param_4 & 0xb) == 0) {
      png_app_error(param_1,"invalid unknown chunk location");
      param_4 = (-(uint)((param_4 & 4) == 0) & 0xfffffff9) + 8;
    }
    lVar1 = *(long *)(param_2 + 0x138);
    uVar2 = check_location(param_1,param_4);
    *(undefined1 *)((long)param_3 * 0x20 + lVar1 + 0x18) = uVar2;
    return;
  }
  return;
}



uint png_permit_mng_features(long param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x3e0) = param_2 & 5;
    return param_2 & 5;
  }
  return 0;
}



void png_set_keep_unknown_chunks(long param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  int *__dest;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 == 0) {
    return;
  }
  pcVar6 = "png_set_keep_unknown_chunks: invalid keep";
  if (3 < param_2) goto LAB_00101f68;
  if (0 < (int)param_4) {
    pcVar6 = "png_set_keep_unknown_chunks: no chunk list";
    if (param_3 == (undefined1 *)0x0) goto LAB_00101f68;
    piVar3 = *(int **)(param_1 + 0x3c8);
    uVar5 = *(uint *)(param_1 + 0x3c4);
    if (piVar3 != (int *)0x0) goto LAB_00101e08;
    uVar1 = param_4;
    if (param_4 < 0x33333334) goto LAB_00101f1f;
LAB_00101f61:
    pcVar6 = "png_set_keep_unknown_chunks: too many chunks";
LAB_00101f68:
    png_app_error(param_1,pcVar6);
    return;
  }
  *(uint *)(param_1 + 0x3c0) = param_2;
  if (param_4 == 0) {
    return;
  }
  piVar3 = *(int **)(param_1 + 0x3c8);
  uVar5 = *(uint *)(param_1 + 0x3c4);
  param_4 = 0x13;
  param_3 = chunks_to_ignore_0;
  uVar1 = 0x13;
  if (piVar3 == (int *)0x0) {
LAB_00101f1f:
    param_4 = uVar1;
    piVar3 = (int *)0x0;
    if (param_2 != 0) {
      __dest = (int *)png_malloc(param_1);
LAB_00102000:
      uVar8 = 0;
      if (__dest != (int *)0x0) goto LAB_00101e29;
      goto LAB_00101fe5;
    }
  }
  else {
LAB_00101e08:
    uVar8 = (ulong)uVar5;
    if (0x33333333 < param_4 + uVar5) goto LAB_00101f61;
    if (param_2 == 0) {
      __dest = piVar3;
      if (uVar5 == 0) {
        *(undefined4 *)(param_1 + 0x3c4) = 0;
        piVar4 = (int *)0x0;
        goto LAB_00101f3b;
      }
    }
    else {
      __dest = (int *)png_malloc(param_1);
      if (uVar5 == 0) goto LAB_00102000;
      memcpy(__dest,*(void **)(param_1 + 0x3c8),(ulong)(uVar5 * 5));
    }
LAB_00101e29:
    uVar7 = 0;
    do {
      piVar3 = __dest;
      if ((int)uVar8 != 0) {
        piVar3 = (int *)(uVar8 * 5 + (long)__dest);
        piVar4 = __dest;
        do {
          if (*piVar4 == *(int *)(param_3 + uVar7)) {
            *(char *)(piVar4 + 1) = (char)param_2;
            goto LAB_00101e69;
          }
          piVar4 = (int *)((long)piVar4 + 5);
        } while (piVar3 != piVar4);
      }
      if (param_2 != 0) {
        iVar2 = *(int *)(param_3 + uVar7);
        uVar8 = (ulong)((int)uVar8 + 1);
        *(char *)(piVar3 + 1) = (char)param_2;
        *piVar3 = iVar2;
      }
LAB_00101e69:
      uVar5 = (int)uVar7 + 5;
      uVar7 = (ulong)uVar5;
    } while (param_4 * 5 != uVar5);
    if ((int)uVar8 != 0) {
      iVar2 = 0;
      piVar3 = __dest;
      piVar4 = __dest;
      do {
        if ((char)piVar3[1] != '\0') {
          if (piVar3 != piVar4) {
            *piVar4 = *piVar3;
            *(char *)(piVar4 + 1) = (char)piVar3[1];
          }
          piVar4 = (int *)((long)piVar4 + 5);
          iVar2 = iVar2 + 1;
        }
        piVar3 = (int *)((long)piVar3 + 5);
      } while (piVar3 != (int *)(uVar8 * 5 + (long)__dest));
      piVar3 = *(int **)(param_1 + 0x3c8);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x3c4) = iVar2;
        if (piVar3 == __dest) {
          return;
        }
        piVar4 = __dest;
        if (piVar3 == (int *)0x0) {
          *(int **)(param_1 + 0x3c8) = __dest;
          return;
        }
        goto LAB_00101f3b;
      }
    }
    if (*(int **)(param_1 + 0x3c8) == __dest) {
      *(undefined4 *)(param_1 + 0x3c4) = 0;
      piVar4 = (int *)0x0;
      piVar3 = __dest;
      goto LAB_00101f3b;
    }
    png_free(param_1,__dest);
LAB_00101fe5:
    piVar3 = *(int **)(param_1 + 0x3c8);
  }
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  piVar4 = (int *)0x0;
  if (piVar3 == (int *)0x0) {
    return;
  }
LAB_00101f3b:
  png_free(param_1,piVar3);
  *(int **)(param_1 + 0x3c8) = piVar4;
  return;
}



void png_set_read_user_chunk_fn(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x3b8) = param_3;
    *(undefined8 *)(param_1 + 0x3b0) = param_2;
  }
  return;
}



void png_set_rows(long param_1,long param_2,long param_3)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x168) != 0) {
      if (*(long *)(param_2 + 0x168) == param_3) goto LAB_001020b0;
      png_free_data(param_1,param_2,0x40,0);
    }
    *(long *)(param_2 + 0x168) = param_3;
    if (param_3 != 0) {
LAB_001020b0:
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x8000;
      return;
    }
  }
  return;
}



void png_set_compression_buffer_size(long param_1,ulong param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (0x7ffffffe < param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"invalid compression buffer size");
  }
  if ((*(byte *)(param_1 + 0x12d) & 0x80) != 0) {
    *(int *)(param_1 + 0x470) = (int)param_2;
    return;
  }
  if (*(int *)(param_1 + 0x138) == 0) {
    if (param_2 < 6) {
      png_warning(param_1,"Compression buffer size cannot be reduced below 6");
      return;
    }
    if (*(uint *)(param_1 + 0x1b8) == param_2) {
      return;
    }
    png_free_buffer_list(param_1,param_1 + 0x1b0);
    *(int *)(param_1 + 0x1b8) = (int)param_2;
    return;
  }
  png_warning(param_1,"Compression buffer size cannot be changed because it is in use");
  return;
}



void png_set_invalid(long param_1,long param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & ~param_3;
  }
  return;
}



void png_set_user_limits(long param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x424) = param_2;
    *(undefined4 *)(param_1 + 0x428) = param_3;
  }
  return;
}



void png_set_chunk_cache_max(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x42c) = param_2;
  }
  return;
}



void png_set_chunk_malloc_max(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x430) = param_2;
  }
  return;
}



void png_set_benign_errors(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x130) & 0xff8fffff;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x130) | 0x700000;
  }
  *(uint *)(param_1 + 0x130) = uVar1;
  return;
}



void png_set_check_for_invalid_index(long param_1,int param_2)

{
  *(uint *)(param_1 + 0x25c) = -(uint)(param_2 < 1);
  return;
}



int png_check_keyword(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  byte bVar7;
  long in_FS_OFFSET;
  undefined1 auStack_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (byte *)0x0) || (bVar2 = *param_2, bVar2 == 0)) {
    *param_3 = 0;
  }
  else {
    bVar6 = true;
    bVar7 = 0;
    iVar4 = 0;
    pbVar5 = param_2;
    do {
      pbVar5 = pbVar5 + 1;
      if ((byte)(bVar2 - 0x21) < 0x5e) goto LAB_00102305;
      while( true ) {
        if (0xa0 < bVar2) goto LAB_00102305;
        if (bVar6) break;
        bVar6 = true;
        bVar1 = bVar2;
        if (bVar2 != 0x20) {
          bVar1 = 0x20;
          bVar7 = bVar2;
        }
        *param_3 = bVar1;
        bVar2 = *pbVar5;
        pbVar3 = param_3;
        while( true ) {
          iVar4 = iVar4 + 1;
          param_3 = pbVar3 + 1;
          if (bVar2 == 0) goto LAB_00102318;
          if (iVar4 == 0x4f) {
            if (!bVar6) {
              *param_3 = 0;
              goto LAB_00102388;
            }
            *pbVar3 = 0;
            iVar4 = 0x4e;
            if (bVar7 != 0) goto LAB_00102388;
            if (*pbVar5 == 0) {
              bVar7 = 0x20;
              iVar4 = 0x4e;
              goto LAB_001023be;
            }
            iVar4 = 0x4e;
            goto LAB_00102408;
          }
          pbVar5 = pbVar5 + 1;
          if (0x5d < (byte)(bVar2 - 0x21)) break;
LAB_00102305:
          *param_3 = bVar2;
          bVar2 = *pbVar5;
          bVar6 = false;
          pbVar3 = param_3;
        }
      }
      if (bVar7 == 0) {
        bVar7 = bVar2;
      }
      bVar2 = *pbVar5;
    } while (bVar2 != 0);
LAB_00102318:
    if ((iVar4 != 0) && (bVar6)) {
      iVar4 = iVar4 + -1;
      param_3 = param_3 + -1;
      if (bVar7 == 0) {
        bVar7 = 0x20;
      }
    }
    *param_3 = 0;
    if (iVar4 != 0) {
LAB_00102388:
      if (*pbVar5 == 0) {
        if (bVar7 != 0) {
LAB_001023be:
          png_warning_parameter(auStack_138,1,param_2);
          png_warning_parameter_signed(auStack_138,2,4,bVar7);
          png_formatted_warning(param_1,auStack_138,"keyword \"@1\": bad character \'0x@2\'");
        }
      }
      else {
LAB_00102408:
        png_warning(param_1,"keyword truncated");
      }
      goto LAB_0010233d;
    }
  }
  iVar4 = 0;
LAB_0010233d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


