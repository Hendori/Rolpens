
uint ps_unicode_value(char *param_1)

{
  char cVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte bVar13;
  
  cVar1 = *param_1;
  uVar9 = (uint)cVar1;
  pcVar4 = param_1;
  if (cVar1 == 'u') {
    if ((param_1[1] == 'n') && (param_1[2] == 'i')) {
      pbVar2 = (byte *)(param_1 + 3);
      uVar6 = 0;
      iVar10 = 4;
      do {
        bVar13 = *pbVar2;
        uVar5 = bVar13 - 0x30;
        if (9 < uVar5) {
          if (5 < bVar13 - 0x41) goto LAB_00100052;
          uVar5 = (int)(char)bVar13 - 0x37;
        }
        pbVar2 = pbVar2 + 1;
        uVar6 = uVar6 * 0x10 + uVar5;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (*pbVar2 == 0) {
        return uVar6;
      }
      if (*pbVar2 != 0x2e) goto LAB_00100052;
    }
    else {
LAB_00100052:
      pbVar2 = (byte *)(param_1 + 1);
      uVar6 = 0;
      iVar10 = 6;
      do {
        bVar13 = *pbVar2;
        uVar5 = bVar13 - 0x30;
        if (9 < uVar5) {
          if (5 < bVar13 - 0x41) {
            if (2 < iVar10) goto LAB_00100028;
            break;
          }
          uVar5 = (int)(char)bVar13 - 0x37;
        }
        pbVar2 = pbVar2 + 1;
        uVar6 = uVar6 * 0x10 + uVar5;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (*pbVar2 == 0) {
        return uVar6;
      }
      if (*pbVar2 != 0x2e) goto LAB_00100028;
    }
    uVar6 = uVar6 | 0x80000000;
  }
  else {
    if ((cVar1 == '\0') || (cVar1 == '.')) {
      return 0;
    }
LAB_00100028:
    do {
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
      if (cVar1 == '\0') break;
    } while (cVar1 != '.');
    uVar6 = 0;
    if (param_1 < pcVar4) {
      iVar10 = 0;
      iVar11 = 0x34;
      while (iVar7 = iVar11, iVar10 < iVar7) {
        iVar11 = iVar7 + iVar10 >> 1;
        pbVar2 = ft_adobe_glyph_list +
                 (ushort)(*(ushort *)
                           (ft_adobe_glyph_list + (long)(int)(iVar7 + iVar10 & 0xfffffffe) + 2) << 8
                         | *(ushort *)
                            (ft_adobe_glyph_list + (long)(int)(iVar7 + iVar10 & 0xfffffffe) + 2) >>
                           8);
        bVar13 = *pbVar2;
        uVar6 = (uint)bVar13;
        uVar5 = uVar6 & 0x7f;
        if (uVar9 == uVar5) {
          param_1 = param_1 + 1;
          pbVar3 = pbVar2;
          if (param_1 < pcVar4) goto LAB_001001a9;
          goto LAB_001001de;
        }
        if (uVar9 != uVar5 && (int)uVar5 <= (int)uVar9) {
          iVar10 = iVar11 + 1;
          iVar11 = iVar7;
        }
      }
LAB_00100106:
      uVar9 = 0;
LAB_00100108:
      if (cVar1 == '.') {
        uVar9 = uVar9 | 0x80000000;
      }
      return uVar9;
    }
  }
  return uVar6;
LAB_001001a9:
  do {
    bVar13 = pbVar3[1];
    pbVar2 = pbVar3 + 1;
    uVar9 = bVar13 & 0x7f;
    if ((char)uVar6 < '\0') {
      uVar6 = (uint)bVar13;
      if ((int)*param_1 != uVar9) goto LAB_00100106;
    }
    else {
      pbVar12 = pbVar2;
      if ((char)bVar13 < '\0') {
        pbVar12 = pbVar3 + 3;
      }
      puVar8 = (ushort *)(pbVar12 + 1);
      if ((char)uVar9 == '\0') goto LAB_00100106;
      while( true ) {
        pbVar2 = ft_adobe_glyph_list + (ushort)(*puVar8 << 8 | *puVar8 >> 8);
        uVar6 = (uint)*pbVar2;
        if ((int)*param_1 == (*pbVar2 & 0x7f)) break;
        puVar8 = puVar8 + 1;
        if ((ushort *)(pbVar12 + (ulong)(uVar9 - 1) * 2 + 3) == puVar8) goto LAB_00100106;
      }
    }
    bVar13 = (byte)uVar6;
    param_1 = param_1 + 1;
    pbVar3 = pbVar2;
  } while (pcVar4 != param_1);
LAB_001001de:
  uVar9 = 0;
  if ((-1 < (char)bVar13) && ((char)pbVar2[1] < '\0')) {
    uVar9 = (uint)(ushort)(*(ushort *)(pbVar2 + 2) << 8 | *(ushort *)(pbVar2 + 2) >> 8);
  }
  goto LAB_00100108;
}



int compare_uni_maps(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if ((uVar1 & 0x7fffffff) == (uVar2 & 0x7fffffff)) {
    iVar3 = 1;
    if (uVar1 <= uVar2) {
      return -(uint)(uVar1 < uVar2);
    }
  }
  else {
    iVar3 = (-(uint)((uVar2 & 0x7fffffff) < (uVar1 & 0x7fffffff)) & 2) - 1;
  }
  return iVar3;
}



uint ps_unicodes_char_index(long param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  puVar3 = *(uint **)(param_1 + 0x20);
  if (puVar3 + (ulong)*(uint *)(param_1 + 0x18) * 2 <= puVar3) {
    return 0;
  }
  puVar1 = puVar3 + ((long)((ulong)*(uint *)(param_1 + 0x18) * 8) >> 4) * 2;
  puVar6 = puVar3 + (ulong)*(uint *)(param_1 + 0x18) * 2;
  puVar7 = (uint *)0x0;
  do {
    while( true ) {
      puVar2 = puVar1;
      if (*puVar2 == param_2) goto LAB_00100343;
      uVar4 = *puVar2 & 0x7fffffff;
      puVar8 = puVar2;
      if (param_2 != uVar4) break;
LAB_0010030c:
      bVar9 = puVar2 <= puVar3;
      puVar1 = puVar3 + ((long)puVar2 - (long)puVar3 >> 4) * 2;
      puVar6 = puVar2;
      puVar7 = puVar8;
      puVar2 = puVar8;
      if (bVar9) goto LAB_00100322;
    }
    puVar5 = puVar2;
    if (uVar4 < param_2) {
      puVar3 = puVar2 + 2;
      puVar5 = puVar6;
    }
    puVar1 = puVar2 + (ulong)(param_2 - uVar4) * 2;
    puVar2 = puVar5;
    puVar8 = puVar7;
    if ((puVar5 <= puVar1) || (puVar1 < puVar3)) goto LAB_0010030c;
    puVar6 = puVar5;
    puVar2 = puVar7;
  } while (puVar3 < puVar5);
LAB_00100322:
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
LAB_00100343:
  return puVar2[1];
}



uint ps_unicodes_char_next(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar5 = *param_2 + 1;
  uVar4 = uVar2 >> 1;
  if (uVar2 == 0) {
    uVar5 = 0;
    uVar9 = 0;
  }
  else {
    uVar7 = 0;
    uVar9 = 0;
    uVar8 = uVar2;
    do {
      while( true ) {
        puVar1 = (uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 8);
        if (*puVar1 == uVar5) {
          uVar9 = puVar1[1];
          goto LAB_001003f4;
        }
        uVar6 = *puVar1 & 0x7fffffff;
        if (uVar5 != uVar6) break;
        uVar9 = puVar1[1];
        uVar8 = uVar4;
LAB_001003b4:
        uVar6 = (uint)uVar7;
        uVar4 = (uVar8 - uVar6 >> 1) + uVar6;
        if (uVar8 <= uVar6) goto LAB_001003c0;
      }
      uVar3 = uVar4;
      if (uVar6 < uVar5) {
        uVar7 = (ulong)(uVar4 + 1);
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
      uVar4 = (uVar4 + uVar5) - uVar6;
      if ((uVar8 <= uVar4) || (uVar4 < (uint)uVar7)) goto LAB_001003b4;
    } while ((uint)uVar7 < uVar8);
LAB_001003c0:
    if ((uVar9 == 0) && (uVar5 = 0, (uint)uVar7 < uVar2)) {
      puVar1 = (uint *)(*(long *)(param_1 + 0x20) + uVar7 * 8);
      uVar5 = puVar1[1];
      *param_2 = *puVar1 & 0x7fffffff;
      return uVar5;
    }
  }
LAB_001003f4:
  *param_2 = uVar5;
  return uVar9;
}



undefined * ps_get_macintosh_name(uint param_1)

{
  long lVar1;
  
  lVar1 = 0xfd;
  if (param_1 < 0x102) {
    lVar1 = (long)*(short *)(ft_mac_names + (ulong)param_1 * 2);
  }
  return &ft_standard_glyph_names + lVar1;
}



undefined * ps_get_standard_strings(uint param_1)

{
  if (param_1 < 0x187) {
    return &ft_standard_glyph_names + *(short *)(ft_sid_names + (ulong)param_1 * 2);
  }
  return (undefined *)0x0;
}



void psnames_get_service(void)

{
  ft_service_list_lookup(pscmaps_services);
  return;
}



int ps_unicodes_init(undefined8 param_1,long param_2,uint param_3,code *param_4,code *param_5,
                    undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  char *__s2;
  uint *puVar3;
  ulong uVar4;
  uint *__base;
  uint uVar5;
  long lVar6;
  long in_FS_OFFSET;
  uint *local_d8;
  int local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  uint auStack_68 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_2 + 0x18) = 0;
  local_78 = 0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_d8 = (uint *)ft_mem_qrealloc(param_1,8,0,param_3 + 10,0,&local_9c);
  *(uint **)(param_2 + 0x20) = local_d8;
  iVar1 = local_9c;
  if (local_9c == 0) {
    __base = local_d8;
    if (param_3 != 0) {
      uVar5 = 0;
LAB_0010054f:
      do {
        __s2 = (char *)(*param_4)(param_6,uVar5);
        if ((__s2 != (char *)0x0) && (*__s2 != '\0')) {
          lVar6 = 0;
          do {
            iVar1 = strcmp("Delta" + (int)(&ft_extra_glyph_name_offsets)[lVar6],__s2);
            if (iVar1 == 0) {
              if (*(int *)(local_98 + lVar6 * 4) == 0) {
                *(int *)(local_98 + lVar6 * 4) = 1;
                auStack_68[lVar6] = uVar5;
                uVar2 = ps_unicode_value(__s2);
                goto joined_r0x001006ac;
              }
              break;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != 10);
          uVar2 = ps_unicode_value(__s2);
joined_r0x001006ac:
          if ((uVar2 & 0x7fffffff) != 0) {
            lVar6 = 0;
            do {
              if (uVar2 == (&ft_extra_glyph_unicodes)[lVar6]) {
                *(undefined4 *)(local_98 + lVar6 * 4) = 2;
                break;
              }
              lVar6 = lVar6 + 1;
            } while (lVar6 != 10);
            *local_d8 = uVar2;
            local_d8[1] = uVar5;
            local_d8 = local_d8 + 2;
          }
          if (param_5 != (code *)0x0) {
            uVar5 = uVar5 + 1;
            (*param_5)(param_6,__s2);
            if (param_3 == uVar5) break;
            goto LAB_0010054f;
          }
        }
        uVar5 = uVar5 + 1;
      } while (param_3 != uVar5);
      __base = *(uint **)(param_2 + 0x20);
    }
    lVar6 = 0;
    do {
      puVar3 = local_d8;
      if (*(int *)(local_98 + lVar6) == 1) {
        puVar3 = local_d8 + 2;
        *(ulong *)local_d8 =
             CONCAT44(*(undefined4 *)((long)auStack_68 + lVar6),
                      *(undefined4 *)((long)&ft_extra_glyph_unicodes + lVar6));
      }
      lVar6 = lVar6 + 4;
      local_d8 = puVar3;
    } while (lVar6 != 0x28);
    uVar4 = (long)puVar3 - (long)__base >> 3;
    uVar5 = (uint)uVar4;
    if (uVar5 == 0) {
      ft_mem_free(param_1,__base);
      *(undefined8 *)(param_2 + 0x20) = 0;
      iVar1 = local_9c;
      if (local_9c == 0) {
        iVar1 = 0xa3;
      }
    }
    else {
      uVar4 = uVar4 & 0xffffffff;
      if (uVar5 < param_3 >> 1) {
        __base = (uint *)ft_mem_qrealloc(param_1,8,param_3 + 10,uVar4,__base,&local_9c);
        local_9c = 0;
        *(uint **)(param_2 + 0x20) = __base;
      }
      qsort(__base,uVar4,8,compare_uni_maps);
      iVar1 = local_9c;
    }
    *(uint *)(param_2 + 0x18) = uVar5;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


