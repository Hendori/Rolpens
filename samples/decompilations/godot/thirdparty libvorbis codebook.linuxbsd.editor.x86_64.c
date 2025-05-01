
ulong decode_packed_entry_number(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = *(int *)(param_1 + 0x4c);
  lVar2 = oggpack_look(param_2,*(undefined4 *)(param_1 + 0x48));
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    uVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x40) + lVar2 * 4);
    uVar5 = (ulong)uVar1;
    if (-1 < (int)uVar1) {
      oggpack_adv(param_2,(int)*(char *)(*(long *)(param_1 + 0x38) + -1 + uVar5));
      return uVar5 - 1;
    }
    uVar5 = (ulong)((uint)((long)uVar5 >> 0xf) & 0x7fff);
    lVar2 = *(long *)(param_1 + 0x10) - (ulong)(uVar1 & 0x7fff);
  }
  do {
    lVar3 = oggpack_look(param_2,iVar6);
    if (-1 < lVar3) {
LAB_0010007b:
      uVar1 = (uint)lVar3;
      uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = uVar1 >> 4 & 0xf0f0f0f | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = uVar1 >> 2 & 0x33333333 | (uVar1 & 0x33333333) << 2;
      lVar3 = lVar2 - uVar5;
      if (1 < lVar3) {
        do {
          uVar4 = lVar3 >> 1;
          bVar7 = (uVar1 >> 1 & 0x55555555 | uVar1 * 2 & 0xaaaaaaaa) <
                  *(uint *)(*(long *)(param_1 + 0x28) + (uVar4 + uVar5) * 4);
          uVar5 = uVar5 + ((ulong)bVar7 - 1 & uVar4);
          if (!bVar7) {
            uVar4 = 0;
          }
          lVar2 = lVar2 - uVar4;
          lVar3 = lVar2 - uVar5;
        } while (1 < lVar3);
      }
      if (iVar6 < *(char *)(*(long *)(param_1 + 0x38) + uVar5)) {
        oggpack_adv(param_2,iVar6);
LAB_00100165:
        uVar5 = 0xffffffffffffffff;
      }
      else {
        oggpack_adv(param_2);
      }
      return uVar5;
    }
    if (iVar6 < 2) {
      if (lVar3 < 0) goto LAB_00100165;
      goto LAB_0010007b;
    }
    iVar6 = iVar6 + -1;
  } while( true );
}



undefined8 vorbis_staticbook_pack(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  oggpack_write(param_2,0x564342,0x18);
  oggpack_write(param_2,*param_1,0x10);
  oggpack_write(param_2,param_1[1],0x18);
  lVar7 = param_1[1];
  if (lVar7 < 2) {
    lVar6 = 1;
LAB_001001f3:
    if (lVar7 != lVar6) {
      oggpack_write(param_2,0,1);
      lVar7 = param_1[1];
      lVar6 = 0;
      if (lVar7 < 1) {
LAB_00100233:
        if (lVar7 != lVar6) {
          oggpack_write(param_2,1,1);
          if (0 < (long)param_1[1]) {
            lVar7 = 0;
            do {
              while (*(char *)(param_1[2] + lVar7) == '\0') {
                lVar7 = lVar7 + 1;
                oggpack_write(param_2,0,1);
                if ((long)param_1[1] <= lVar7) goto LAB_001002c0;
              }
              oggpack_write(param_2,1,1);
              pcVar1 = (char *)(param_1[2] + lVar7);
              lVar7 = lVar7 + 1;
              oggpack_write(param_2,(long)(*pcVar1 + -1),5);
            } while (lVar7 < (long)param_1[1]);
          }
          goto LAB_001002c0;
        }
      }
      else {
        lVar6 = 0;
        do {
          if (*(char *)(param_1[2] + lVar6) == '\0') goto LAB_00100233;
          lVar6 = lVar6 + 1;
        } while (lVar6 != lVar7);
      }
      lVar7 = 0;
      oggpack_write(param_2,0,1);
      if (0 < (long)param_1[1]) {
        do {
          pcVar1 = (char *)(param_1[2] + lVar7);
          lVar7 = lVar7 + 1;
          oggpack_write(param_2,(long)(*pcVar1 + -1),5);
        } while (lVar7 < (long)param_1[1]);
      }
      goto LAB_001002c0;
    }
  }
  else {
    lVar6 = 1;
    do {
      cVar2 = *(char *)(param_1[2] + -1 + lVar6);
      if ((cVar2 == '\0') || (*(char *)(param_1[2] + lVar6) < cVar2)) goto LAB_001001f3;
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar7);
  }
  oggpack_write(param_2,1,1);
  oggpack_write(param_2,(long)(*(char *)param_1[2] + -1),5);
  lVar7 = param_1[1];
  if (lVar7 < 2) {
    lVar6 = 1;
    iVar4 = 0;
  }
  else {
    lVar9 = 1;
    lVar6 = 0;
    do {
      while( true ) {
        lVar8 = lVar9;
        cVar2 = *(char *)(param_1[2] + lVar8);
        cVar3 = *(char *)(param_1[2] + -1 + lVar8);
        lVar9 = (long)cVar3;
        if ((cVar2 <= cVar3) || (cVar2 <= lVar9)) break;
        do {
          lVar9 = lVar9 + 1;
          uVar5 = ov_ilog((int)lVar7 - (int)lVar6);
          oggpack_write(param_2,lVar8 - lVar6,uVar5);
          lVar7 = param_1[1];
          lVar6 = lVar8;
        } while (lVar9 != cVar2);
        lVar9 = lVar8 + 1;
        if (lVar7 <= lVar8 + 1) goto LAB_00100449;
      }
      lVar9 = lVar8 + 1;
    } while (lVar8 + 1 < lVar7);
LAB_00100449:
    iVar4 = (int)lVar6;
    lVar6 = (lVar8 + 1) - lVar6;
  }
  uVar5 = ov_ilog((int)lVar7 - iVar4);
  oggpack_write(param_2,lVar6,uVar5);
LAB_001002c0:
  oggpack_write(param_2,(long)*(int *)(param_1 + 3),4);
  if (*(int *)(param_1 + 3) != 0) {
    if (1 < *(int *)(param_1 + 3) - 1U) {
      return 0xffffffff;
    }
    if (param_1[7] == 0) {
      return 0xffffffff;
    }
    oggpack_write(param_2,param_1[4],0x20);
    oggpack_write(param_2,param_1[5],0x20);
    oggpack_write(param_2,(long)(*(int *)(param_1 + 6) + -1),4);
    oggpack_write(param_2,(long)*(int *)((long)param_1 + 0x34),1);
    if (*(int *)(param_1 + 3) == 1) {
      iVar4 = _book_maptype1_quantvals(param_1);
    }
    else {
      if (*(int *)(param_1 + 3) != 2) {
        return 0;
      }
      iVar4 = (int)*param_1 * *(int *)(param_1 + 1);
    }
    lVar7 = 0;
    if (0 < iVar4) {
      do {
        lVar6 = *(long *)(param_1[7] + lVar7 * 8);
        lVar9 = -lVar6;
        if (0 < lVar6) {
          lVar9 = lVar6;
        }
        lVar7 = lVar7 + 1;
        oggpack_write(param_2,lVar9,*(undefined4 *)(param_1 + 6));
      } while (iVar4 != lVar7);
    }
  }
  return 0;
}



long * vorbis_staticbook_unpack(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  size_t sVar10;
  
  plVar4 = (long *)calloc(1,0x48);
  *(undefined4 *)(plVar4 + 8) = 1;
  lVar5 = oggpack_read(param_1,0x18);
  if (lVar5 != 0x564342) goto LAB_00100770;
  lVar5 = oggpack_read(param_1,0x10);
  *plVar4 = lVar5;
  lVar5 = oggpack_read(param_1,0x18);
  plVar4[1] = lVar5;
  if (lVar5 == -1) goto LAB_00100770;
  iVar1 = ov_ilog((int)*plVar4);
  iVar2 = ov_ilog((int)plVar4[1]);
  if (0x18 < iVar1 + iVar2) goto LAB_00100770;
  iVar1 = oggpack_read(param_1,1);
  if (iVar1 == 0) {
    lVar9 = oggpack_read(param_1,1);
    lVar5 = plVar4[1];
    if (lVar9 == 0) {
      lVar9 = *(long *)(param_1 + 0x20);
      lVar7 = oggpack_bytes(param_1);
      if (lVar9 - lVar7 < lVar5 * 5 + 7 >> 3) goto LAB_00100770;
      sVar10 = plVar4[1];
      pvVar6 = malloc(sVar10);
      plVar4[2] = (long)pvVar6;
      lVar5 = 0;
      if (0 < (long)sVar10) {
        do {
          lVar9 = oggpack_read(param_1,5);
          if (lVar9 == -1) goto LAB_00100770;
          *(char *)(plVar4[2] + lVar5) = (char)lVar9 + '\x01';
          lVar5 = lVar5 + 1;
        } while (lVar5 < plVar4[1]);
      }
    }
    else {
      lVar9 = *(long *)(param_1 + 0x20);
      lVar7 = oggpack_bytes(param_1);
      if (lVar9 - lVar7 < lVar5 + 7 >> 3) goto LAB_00100770;
      sVar10 = plVar4[1];
      lVar5 = 0;
      pvVar6 = malloc(sVar10);
      plVar4[2] = (long)pvVar6;
      if (0 < (long)sVar10) {
        do {
          lVar9 = oggpack_read(param_1,1);
          if (lVar9 == 0) {
            *(undefined1 *)(plVar4[2] + lVar5) = 0;
          }
          else {
            lVar9 = oggpack_read(param_1,5);
            if (lVar9 == -1) goto LAB_00100770;
            *(char *)(plVar4[2] + lVar5) = (char)lVar9 + '\x01';
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < plVar4[1]);
      }
    }
  }
  else {
    if (iVar1 != 1) goto LAB_00100770;
    lVar5 = oggpack_read(param_1,5);
    lVar5 = lVar5 + 1;
    if (lVar5 == 0) goto LAB_00100770;
    sVar10 = plVar4[1];
    pvVar6 = malloc(sVar10);
    plVar4[2] = (long)pvVar6;
    if (0 < (long)sVar10) {
      lVar9 = 0;
      do {
        uVar3 = ov_ilog((int)sVar10 - (int)lVar9);
        lVar7 = oggpack_read(param_1,uVar3);
        if (((lVar7 == -1) || (0x20 < lVar5)) ||
           (sVar10 = plVar4[1], (long)(sVar10 - lVar9) < lVar7)) goto LAB_00100770;
        if (0 < lVar7) {
          if (1 < lVar7 + -1 >> ((char)lVar5 - 1U & 0x3f)) goto LAB_00100770;
          lVar7 = lVar7 + lVar9;
          do {
            *(char *)(plVar4[2] + lVar9) = (char)lVar5;
            lVar9 = lVar9 + 1;
          } while (lVar9 != lVar7);
          sVar10 = plVar4[1];
        }
        lVar5 = lVar5 + 1;
      } while (lVar9 < (long)sVar10);
    }
  }
  iVar1 = oggpack_read(param_1,4);
  *(int *)(plVar4 + 3) = iVar1;
  if (iVar1 == 0) {
    return plVar4;
  }
  if (1 < iVar1 - 1U) goto LAB_00100770;
  lVar5 = oggpack_read(param_1,0x20);
  plVar4[4] = lVar5;
  lVar5 = oggpack_read(param_1,0x20);
  plVar4[5] = lVar5;
  iVar1 = oggpack_read(param_1,4);
  *(int *)(plVar4 + 6) = iVar1 + 1;
  iVar1 = oggpack_read(param_1,1);
  *(int *)((long)plVar4 + 0x34) = iVar1;
  if (iVar1 == -1) goto LAB_00100770;
  if ((int)plVar4[3] == 1) {
    if (*plVar4 != 0) {
      iVar1 = _book_maptype1_quantvals(plVar4);
      goto LAB_00100843;
    }
  }
  else if ((int)plVar4[3] == 2) {
    iVar1 = (int)*plVar4 * (int)plVar4[1];
LAB_00100843:
    lVar9 = plVar4[6];
    lVar5 = *(long *)(param_1 + 0x20);
    lVar7 = oggpack_bytes(param_1);
    if ((long)((int)lVar9 * iVar1 + 7 >> 3) <= lVar5 - lVar7) {
      sVar10 = (long)iVar1 * 8;
      pvVar6 = malloc(sVar10);
      plVar4[7] = (long)pvVar6;
      if (iVar1 < 1) {
        if (iVar1 == 0) {
          return plVar4;
        }
      }
      else {
        lVar5 = 0;
        while( true ) {
          lVar9 = lVar5 * 8;
          lVar5 = lVar5 + 1;
          uVar8 = oggpack_read(param_1,(int)plVar4[6]);
          *(undefined8 *)((long)pvVar6 + lVar9) = uVar8;
          if (lVar5 == iVar1) break;
          pvVar6 = (void *)plVar4[7];
        }
      }
      if (*(long *)(plVar4[7] + -8 + sVar10) != -1) {
        return plVar4;
      }
    }
    goto LAB_00100770;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  lVar9 = oggpack_bytes();
  if (lVar9 <= lVar5) {
    pvVar6 = malloc(0);
    plVar4[7] = (long)pvVar6;
    return plVar4;
  }
LAB_00100770:
  vorbis_staticbook_destroy(plVar4);
  return (long *)0x0;
}



int vorbis_book_encode(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_2 < 0) {
    return 0;
  }
  lVar1 = (long)param_2;
  if (*(long *)(*(long *)(param_1 + 0x18) + 8) <= lVar1) {
    return 0;
  }
  oggpack_write(param_3,*(undefined4 *)(*(long *)(param_1 + 0x28) + lVar1 * 4),
                (int)*(char *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + lVar1));
  return (int)*(char *)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + lVar1);
}



long vorbis_book_decode(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) < 1) {
    return -1;
  }
  lVar1 = decode_packed_entry_number();
  if (-1 < lVar1) {
    return (long)*(int *)(*(long *)(param_1 + 0x30) + lVar1 * 4);
  }
  return -1;
}



long vorbis_book_decodevs_add(long *param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 *puVar11;
  long *plVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  long local_40;
  long *plVar10;
  undefined1 *puVar12;
  
  plVar9 = &local_78;
  plVar10 = &local_78;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar13 = &local_78;
  local_68 = param_2;
  local_50 = param_3;
  if (0 < param_1[2]) {
    lVar14 = *param_1;
    local_70 = (long)param_4 / lVar14;
    iVar4 = (int)local_70;
    local_78 = (long)iVar4;
    uVar8 = local_78 * 8 + 0x17;
    plVar13 = &local_78;
    while (plVar10 != (long *)((long)&local_78 - (uVar8 & 0xfffffffffffff000))) {
      plVar9 = (long *)((long)plVar13 + -0x1000);
      *(undefined8 *)((long)plVar13 + -8) = *(undefined8 *)((long)plVar13 + -8);
      plVar10 = (long *)((long)plVar13 + -0x1000);
      plVar13 = (long *)((long)plVar13 + -0x1000);
    }
    uVar7 = (ulong)((uint)uVar8 & 0xff0);
    lVar1 = -uVar7;
    puVar11 = (undefined1 *)((long)plVar9 + lVar1);
    puVar12 = (undefined1 *)((long)plVar9 + lVar1);
    if (uVar7 != 0) {
      *(undefined8 *)((long)plVar9 + -8) = *(undefined8 *)((long)plVar9 + -8);
    }
    local_60 = (ulong)((long)plVar9 + lVar1 + 0xf) & 0xfffffffffffffff0;
    puVar3 = (undefined1 *)((long)plVar9 + lVar1);
    while (puVar12 != (undefined1 *)((long)plVar9 + (lVar1 - (uVar8 & 0xfffffffffffff000)))) {
      puVar11 = puVar3 + -0x1000;
      *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
      puVar12 = puVar3 + -0x1000;
      puVar3 = puVar3 + -0x1000;
    }
    uVar8 = (ulong)((uint)uVar8 & 0xff0);
    lVar1 = -uVar8;
    plVar13 = (long *)(puVar11 + lVar1);
    if (uVar8 != 0) {
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
    }
    if (0 < iVar4) {
      local_58 = local_70 & 0xffffffff;
      uVar8 = 0;
      do {
        *(undefined8 *)(puVar11 + lVar1 + -8) = 0x100abc;
        lVar5 = decode_packed_entry_number(param_1,local_50);
        *(long *)(local_60 + uVar8 * 8) = lVar5;
        if (lVar5 == -1) goto LAB_00100b73;
        lVar14 = *param_1;
        *(long *)(((ulong)(puVar11 + lVar1 + 0xf) & 0xfffffffffffffff0) + uVar8 * 8) =
             param_1[4] + lVar5 * lVar14 * 4;
        uVar8 = uVar8 + 1;
      } while (uVar8 != local_58);
    }
    plVar13 = (long *)(puVar11 + lVar1);
    if (0 < lVar14) {
      lVar16 = 0;
      iVar15 = 0;
      lVar5 = local_68;
      do {
        if ((iVar15 < param_4) && (lVar6 = 1, 0 < (int)local_70)) {
          do {
            iVar2 = (int)lVar6;
            *(float *)(lVar5 + -4 + lVar6 * 4) =
                 *(float *)(lVar5 + -4 + lVar6 * 4) +
                 *(float *)(*(long *)((((ulong)(puVar11 + lVar1 + 0xf) & 0xfffffffffffffff0) - 8) +
                                     lVar6 * 8) + lVar16);
            lVar6 = lVar6 + 1;
          } while (iVar15 + iVar2 < param_4 && iVar2 < iVar4);
        }
        lVar16 = lVar16 + 4;
        iVar15 = iVar15 + iVar4;
        lVar5 = lVar5 + local_78 * 4;
        plVar13 = (long *)(puVar11 + lVar1);
      } while (lVar14 * 4 != lVar16);
    }
  }
  lVar5 = 0;
LAB_00100b73:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)plVar13 + -8) = &UNK_00100ba1;
  __stack_chk_fail();
}



undefined8 vorbis_book_decodev_add(long *param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[2] < 1) {
    return 0;
  }
  if (param_4 < 1) {
    return 0;
  }
  lVar6 = 0;
  do {
    iVar3 = decode_packed_entry_number(param_1,param_3);
    if (iVar3 == -1) {
      return 0xffffffffffffffff;
    }
    while( true ) {
      lVar1 = *param_1;
      lVar2 = param_1[4];
      if (param_4 <= (int)lVar6) {
        return 0;
      }
      if (lVar1 < 1) break;
      lVar5 = (long)((int)lVar6 + 1);
      do {
        *(float *)(param_2 + -4 + lVar5 * 4) =
             *(float *)(param_2 + -4 + lVar5 * 4) +
             *(float *)(lVar2 + (iVar3 * lVar1 - lVar6) * 4 + -4 + lVar5 * 4);
        iVar4 = (int)lVar5;
        if (param_4 <= iVar4) {
          return 0;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar1 + 1 + lVar6);
      lVar6 = (long)iVar4;
      if (param_4 <= iVar4) {
        return 0;
      }
      iVar3 = decode_packed_entry_number(param_1,param_3);
      if (iVar3 == -1) {
        return 0xffffffffffffffff;
      }
    }
  } while( true );
}



undefined8 vorbis_book_decodev_set(long *param_1,void *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[2] < 1) {
    if (0 < (int)param_4) {
      memset(param_2,0,(ulong)param_4 << 2);
    }
  }
  else if (0 < (int)param_4) {
    lVar6 = 0;
    do {
      iVar3 = decode_packed_entry_number(param_1,param_3);
      while( true ) {
        if (iVar3 == -1) {
          return 0xffffffffffffffff;
        }
        lVar1 = *param_1;
        lVar2 = param_1[4];
        if ((int)param_4 <= (int)lVar6) {
          return 0;
        }
        if (lVar1 < 1) break;
        lVar5 = (long)((int)lVar6 + 1);
        do {
          *(undefined4 *)((long)param_2 + lVar5 * 4 + -4) =
               *(undefined4 *)(lVar2 + (iVar3 * lVar1 - lVar6) * 4 + -4 + lVar5 * 4);
          iVar4 = (int)lVar5;
          if ((int)param_4 <= iVar4) {
            return 0;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 != lVar1 + 1 + lVar6);
        lVar6 = (long)iVar4;
        if ((int)param_4 <= iVar4) {
          return 0;
        }
        iVar3 = decode_packed_entry_number(param_1,param_3);
      }
    } while( true );
  }
  return 0;
}



undefined8
vorbis_book_decodevv_add
          (long *param_1,long param_2,long param_3,int param_4,undefined8 param_5,int param_6)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  int iVar9;
  
  if (0 < param_1[2]) {
    lVar6 = (long)param_4;
    lVar3 = param_3 / lVar6;
    pfVar7 = (float *)((param_6 + param_3) % lVar6);
    lVar6 = (long)(int)((param_6 + param_3) / lVar6);
    if (lVar3 < lVar6) {
      iVar9 = 0;
      do {
        lVar4 = decode_packed_entry_number(param_1,param_5,pfVar7);
        if (lVar4 == -1) {
          return 0xffffffffffffffff;
        }
        lVar1 = *param_1;
        pfVar2 = (float *)param_1[4];
        pfVar7 = pfVar2;
        if (0 < lVar1) {
          if (lVar6 <= lVar3) {
            return 0;
          }
          lVar5 = 0;
          while( true ) {
            lVar8 = (long)iVar9;
            iVar9 = iVar9 + 1;
            pfVar7 = (float *)(*(long *)(param_2 + lVar8 * 8) + lVar3 * 4);
            *pfVar7 = *pfVar7 + pfVar2[lVar4 * lVar1 + lVar5];
            if (param_4 == iVar9) {
              lVar3 = lVar3 + 1;
              iVar9 = 0;
            }
            lVar5 = lVar5 + 1;
            if (lVar1 <= lVar5) break;
            if (lVar6 <= lVar3) {
              return 0;
            }
          }
        }
      } while (lVar3 < lVar6);
    }
  }
  return 0;
}


