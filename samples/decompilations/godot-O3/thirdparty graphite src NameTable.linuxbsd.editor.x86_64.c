
/* graphite2::NameTable::setPlatformEncoding(unsigned short, unsigned short) */

undefined8 __thiscall
graphite2::NameTable::setPlatformEncoding(NameTable *this,ushort param_1,ushort param_2)

{
  short sVar1;
  long lVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort uVar7;
  
  if (*(long *)(this + 0x18) == 0) {
    return 0;
  }
  lVar2 = *(long *)(this + 0x10);
  uVar7 = 0;
  sVar1 = *(short *)(lVar2 + 2);
  puVar6 = (ushort *)(lVar2 + 6);
  bVar4 = (byte)((ushort)sVar1 >> 8);
  uVar3 = CONCAT11((char)sVar1,bVar4);
  uVar5 = sVar1 << 8 | (ushort)bVar4;
  if (uVar3 != 0) {
    do {
      if ((param_1 == (ushort)((ushort)(((ulong)*puVar6 & 0xff) << 8) | *puVar6 >> 8)) &&
         (param_2 == (ushort)((ushort)(((ulong)puVar6[1] & 0xff) << 8) | puVar6[1] >> 8))) {
        *(ushort *)(this + 6) = uVar7;
        break;
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 6;
    } while (uVar7 != uVar5);
    uVar7 = uVar7 + 1;
    if (uVar7 < uVar3) {
      puVar6 = (ushort *)(lVar2 + 6 + (ulong)uVar7 * 0xc);
      do {
        if ((param_1 != (ushort)((ushort)(((ulong)*puVar6 & 0xff) << 8) | *puVar6 >> 8)) ||
           (param_2 != (ushort)((ushort)(((ulong)puVar6[1] & 0xff) << 8) | puVar6[1] >> 8))) break;
        *(ushort *)(this + 8) = uVar7;
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 6;
      } while (uVar7 < uVar5);
    }
  }
  *(ushort *)(this + 2) = param_2;
  *(ushort *)this = param_1;
  return 0;
}



/* graphite2::NameTable::NameTable(void const*, unsigned long, unsigned short, unsigned short) */

void __thiscall
graphite2::NameTable::NameTable
          (NameTable *this,void *param_1,ulong param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  void *pvVar2;
  
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  Locale2Lang::Locale2Lang((Locale2Lang *)(this + 0x20));
  pvVar2 = malloc(param_2);
  if (pvVar2 != (void *)0x0) {
    pvVar2 = (void *)__memcpy_chk(pvVar2,param_1,param_2,param_2);
    *(void **)(this + 0x10) = pvVar2;
    if ((0x12 < param_2) &&
       ((long)(int)(((uint)(((ulong)*(ushort *)((long)pvVar2 + 2) & 0xff) << 8) |
                    (uint)(byte)(*(ushort *)((long)pvVar2 + 2) >> 8)) - 1) * 0xc + 0x12U < param_2))
    {
      uVar1 = CONCAT11((char)*(undefined2 *)((long)pvVar2 + 4),
                       (char)((ushort)*(undefined2 *)((long)pvVar2 + 4) >> 8));
      if (uVar1 < param_2) {
        *(ulong *)(this + 0x18) = (long)pvVar2 + (ulong)uVar1;
        setPlatformEncoding(this,param_3,param_4);
        *(ushort *)(this + 10) = (short)param_2 - uVar1;
        return;
      }
    }
    free(pvVar2);
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}



/* graphite2::NameTable::getName(unsigned short&, unsigned short, gr_encform, unsigned int&) */

uint * __thiscall
graphite2::NameTable::getName
          (NameTable *this,ushort *param_1,ushort param_2,int param_4,uint *param_5)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint *__ptr;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  byte bVar14;
  ulong uVar12;
  uint *puVar13;
  ushort uVar15;
  uint *puVar16;
  byte bVar17;
  byte bVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  
  lVar10 = *(long *)(this + 0x10);
  if (lVar10 == 0) goto LAB_00100548;
  uVar15 = *(ushort *)(this + 8);
  uVar19 = *(ushort *)(this + 6);
  if (uVar15 < uVar19) goto LAB_00100548;
  uVar12 = 0;
  uVar22 = 0;
  uVar20 = 0;
LAB_00100249:
  do {
    lVar8 = lVar10 + (ulong)uVar19 * 0xc;
    uVar1 = *(ushort *)(lVar8 + 0xc);
    uVar21 = uVar20;
    if (param_2 == (ushort)((ushort)(((ulong)uVar1 & 0xff) << 8) | uVar1 >> 8)) {
      uVar1 = *(ushort *)(lVar8 + 10);
      bVar14 = (byte)(uVar1 >> 8);
      uVar7 = ((ulong)uVar1 & 0xff) << 8 | (ulong)bVar14;
      if (*param_1 == (ushort)uVar7) {
        uVar12 = (ulong)uVar19;
        goto joined_r0x00100530;
      }
      if ((byte)*param_1 != bVar14) {
        uVar21 = uVar19;
        if (uVar7 != 0x409) {
          uVar22 = uVar19;
          uVar21 = uVar20;
        }
        uVar19 = uVar19 + 1;
        uVar20 = uVar21;
        if (uVar15 < uVar19) break;
        goto LAB_00100249;
      }
      uVar12 = (ulong)uVar19;
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 <= uVar15);
  uVar19 = (ushort)uVar12;
joined_r0x00100530:
  if ((uVar19 == 0) && (uVar12 = (ulong)uVar21, uVar21 == 0)) {
    if (uVar22 == 0) goto LAB_00100548;
    uVar12 = (ulong)uVar22;
  }
  lVar10 = lVar10 + uVar12 * 0xc;
  *param_1 = (ushort)(((ulong)*(ushort *)(lVar10 + 10) & 0xff) << 8) | *(ushort *)(lVar10 + 10) >> 8
  ;
  bVar14 = (byte)(*(ushort *)(lVar10 + 0xe) >> 8);
  lVar8 = ((ulong)*(ushort *)(lVar10 + 0xe) & 0xff) << 8;
  uVar12 = ((ulong)*(ushort *)(lVar10 + 0x10) & 0xff) << 8 |
           (ulong)(byte)(*(ushort *)(lVar10 + 0x10) >> 8);
  if ((uint)*(ushort *)(this + 10) < (int)uVar12 + ((uint)lVar8 | (uint)bVar14)) goto LAB_00100548;
  uVar15 = (ushort)((ushort)lVar8 | (ushort)bVar14) >> 1;
  __ptr = (uint *)malloc((long)(int)(uVar15 + 1) * 2);
  if (__ptr == (uint *)0x0) goto LAB_00100548;
  lVar10 = *(long *)(this + 0x18);
  if (uVar15 == 0) {
    *(ushort *)__ptr = 0;
    puVar11 = __ptr;
LAB_00100394:
    if (param_4 == 2) {
      *param_5 = (uint)uVar15;
      return __ptr;
    }
    if (param_4 == 4) {
      puVar9 = (uint *)malloc((long)(int)(uVar15 + 1) * 4);
      if (puVar9 != (uint *)0x0) {
        puVar13 = puVar9;
        puVar16 = __ptr;
        if (__ptr < puVar11) {
          do {
            uVar6 = (uint)(ushort)*puVar16;
            lVar10 = 2;
            if (uVar6 - 0xd800 < 0x800) {
              if ((uVar6 < 0xdc00) && (*(ushort *)((long)puVar16 + 2) - 0xdc00 < 0x400)) {
                lVar10 = 4;
                uVar6 = *(ushort *)((long)puVar16 + 2) + 0xfca02400 + uVar6 * 0x400;
              }
              else {
                uVar6 = 0xfffd;
              }
            }
            puVar16 = (uint *)((long)puVar16 + lVar10);
            *puVar13 = uVar6;
            puVar13 = puVar13 + 1;
          } while (puVar16 < puVar11);
          uVar12 = (long)puVar13 - (long)puVar9 >> 2;
          uVar6 = (uint)uVar12;
          puVar11 = puVar9 + (uVar12 & 0xffffffff);
        }
        else {
          uVar6 = 0;
          puVar11 = puVar9;
        }
        *puVar11 = 0;
        *param_5 = uVar6;
        free(__ptr);
        return puVar9;
      }
LAB_0010066d:
      free(__ptr);
      *param_1 = 0;
      *param_5 = 0;
      return puVar9;
    }
    if (param_4 == 1) {
      puVar9 = (uint *)malloc((long)(int)((uint)uVar15 * 3 + 1));
      cVar5 = _LC0._3_1_;
      cVar4 = _LC0._2_1_;
      cVar3 = _LC0._1_1_;
      cVar2 = (char)_LC0;
      if (puVar9 != (uint *)0x0) {
        puVar13 = __ptr;
        puVar16 = puVar9;
        if (__ptr < puVar11) {
          do {
            while( true ) {
              uVar15 = (ushort)*puVar13;
              uVar6 = (uint)uVar15;
              if (uVar15 - 0xd800 < 0x800) break;
              bVar17 = (byte)uVar15;
              if (uVar6 < 0x80) {
                *(byte *)puVar16 = bVar17;
                lVar8 = 2;
                lVar10 = 1;
              }
              else {
                bVar18 = (byte)(uVar15 >> 6);
                if (0x7ff < uVar6) {
                  bVar14 = (byte)(uVar15 >> 0xc) - 0x20;
                  bVar18 = (bVar18 & 0x3f) + 0x80;
                  bVar17 = (bVar17 & 0x3f) + 0x80;
                  goto LAB_001004a5;
                }
                lVar10 = 2;
                *(byte *)puVar16 = bVar18 - 0x40;
                *(byte *)((long)puVar16 + 1) = (bVar17 & 0x3f) + 0x80;
                lVar8 = 2;
              }
LAB_00100458:
              puVar13 = (uint *)((long)puVar13 + lVar8);
              puVar16 = (uint *)((long)puVar16 + lVar10);
              if (puVar11 <= puVar13) goto LAB_001004c4;
            }
            if ((uVar6 < 0xdc00) && (*(ushort *)((long)puVar13 + 2) - 0xdc00 < 0x400)) {
              uVar6 = *(ushort *)((long)puVar13 + 2) + 0xfca02400 + uVar6 * 0x400;
              lVar8 = 4;
              lVar10 = 4;
              *puVar16 = CONCAT13(((byte)uVar6 & 0x3f) + cVar5,
                                  CONCAT12(((byte)(uVar6 >> 6) & 0x3f) + cVar4,
                                           CONCAT11(((byte)(uVar6 >> 0xc) & 0x3f) + cVar3,
                                                    (char)(uVar6 >> 0x12) + cVar2)));
              goto LAB_00100458;
            }
            bVar17 = 0xbd;
            bVar18 = 0xbf;
            bVar14 = 0xef;
LAB_001004a5:
            *(byte *)((long)puVar16 + 2) = bVar17;
            *(byte *)puVar16 = bVar14;
            puVar13 = (uint *)((long)puVar13 + 2);
            *(byte *)((long)puVar16 + 1) = bVar18;
            puVar16 = (uint *)((long)puVar16 + 3);
          } while (puVar13 < puVar11);
LAB_001004c4:
          uVar6 = (uint)((long)puVar16 - (long)puVar9);
          puVar11 = (uint *)((long)puVar9 + ((long)puVar16 - (long)puVar9 & 0xffffffffU));
        }
        else {
          uVar6 = 0;
          puVar11 = puVar9;
        }
        *(byte *)puVar11 = 0;
        *param_5 = uVar6;
        free(__ptr);
        return puVar9;
      }
      goto LAB_0010066d;
    }
  }
  else {
    uVar7 = 0;
    do {
      uVar19 = *(ushort *)(lVar10 + uVar12 + uVar7 * 2);
      *(ushort *)((long)__ptr + uVar7 * 2) = uVar19 << 8 | uVar19 >> 8;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar15);
    puVar11 = (uint *)((long)__ptr + uVar7 * 2);
    *(ushort *)puVar11 = 0;
    if (0x3ff < *(ushort *)((long)puVar11 + -2) - 0xd800) goto LAB_00100394;
  }
  free(__ptr);
LAB_00100548:
  *param_1 = 0;
  *param_5 = 0;
  return (uint *)0x0;
}



/* graphite2::NameTable::getLanguageId(char const*) */

int __thiscall graphite2::NameTable::getLanguageId(NameTable *this,char *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  ushort uVar7;
  ulong uVar8;
  size_t sVar9;
  ushort uVar10;
  
  iVar3 = Locale2Lang::getMsId((Locale2Lang *)(this + 0x20),param_1);
  puVar1 = *(ushort **)(this + 0x10);
  if ((puVar1 != (ushort *)0x0) &&
     ((((ulong)*puVar1 & 0xff) << 8 | (ulong)(byte)(*puVar1 >> 8)) == 1)) {
    puVar2 = *(ushort **)(this + 0x18);
    puVar1 = puVar1 + (long)(int)(((uint)(((ulong)puVar1[1] & 0xff) << 8) |
                                  (uint)(byte)(puVar1[1] >> 8)) - 1) * 6 + 9;
    uVar7 = *puVar1;
    uVar10 = uVar7 << 8 | uVar7 >> 8;
    if ((puVar1 + (ulong)uVar10 * 2 + 1 <= puVar2) && (uVar7 != 0)) {
      sVar4 = strlen(param_1);
      lVar6 = 0;
      do {
        uVar5 = ((ulong)puVar1[lVar6 * 2 + 2] & 0xff) << 8 |
                (ulong)(byte)(puVar1[lVar6 * 2 + 2] >> 8);
        uVar8 = ((ulong)puVar1[lVar6 * 2 + 1] & 0xff) << 8 |
                (ulong)(byte)(puVar1[lVar6 * 2 + 1] >> 8);
        if (((uint)((int)uVar5 + (int)uVar8) <= (uint)*(ushort *)(this + 10)) &&
           (sVar4 * 2 == uVar8)) {
          if (sVar4 == 0) {
LAB_001007da:
            return (int)lVar6 + -0x8000;
          }
          sVar9 = 0;
          while ((uVar7 = *(ushort *)((long)puVar2 + sVar9 * 2 + uVar5),
                 uVar7 = uVar7 << 8 | uVar7 >> 8, uVar7 < 0x80 &&
                 ((uint)uVar7 == (int)param_1[sVar9]))) {
            sVar9 = sVar9 + 1;
            if (sVar4 == sVar9) goto LAB_001007da;
          }
        }
        lVar6 = lVar6 + 1;
      } while ((ushort)lVar6 < uVar10);
    }
  }
  return iVar3;
}



/* graphite2::Locale2Lang::Locale2Lang() */

void __thiscall graphite2::Locale2Lang::Locale2Lang(Locale2Lang *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  size_t __size;
  void *__ptr;
  undefined1 *puVar10;
  long local_40;
  
  puVar10 = LANG_ENTRIES;
  __ptr = (void *)0x0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x1520) = 0x80;
  *(undefined8 *)(this + 0x1518) = 0;
  puVar7 = (undefined8 *)((ulong)(this + 8) & 0xfffffffffffffff8);
  for (uVar8 = (ulong)(((int)this - (int)(undefined8 *)((ulong)(this + 8) & 0xfffffffffffffff8)) +
                       0x1520U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  while( true ) {
    cVar1 = puVar10[2];
    cVar2 = puVar10[3];
    if (__ptr == (void *)0x0) {
      puVar7 = (undefined8 *)malloc(0x10);
      *(undefined8 **)(this + ((long)(cVar2 + -0x61) + (long)(cVar1 + -0x61) * 0x1a) * 8) = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = puVar10;
        puVar7[1] = 0;
      }
    }
    else {
      if (*(long *)((long)__ptr + 8) == 0) {
        local_40 = 8;
        __size = 0x18;
        iVar9 = 1;
      }
      else {
        lVar6 = 2;
        do {
          lVar4 = lVar6;
          lVar6 = lVar4 + 1;
        } while (*(long *)((long)__ptr + (lVar4 + 1) * 8 + -8) != 0);
        local_40 = lVar4 * 8;
        iVar9 = (int)lVar4;
        __size = (long)(iVar9 + 2) << 3;
      }
      pvVar5 = malloc(__size);
      lVar6 = (long)(cVar2 + -0x61) + (long)(cVar1 + -0x61) * 0x1a;
      *(void **)(this + lVar6 * 8) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        *(void **)(this + lVar6 * 8) = __ptr;
      }
      else {
        *(undefined8 *)((long)pvVar5 + (long)(iVar9 + 1) * 8) = 0;
        *(undefined1 **)((long)pvVar5 + local_40) = puVar10;
        lVar6 = (long)(iVar9 + -1);
        do {
          *(undefined8 *)((long)pvVar5 + lVar6 * 8) = *(undefined8 *)((long)__ptr + lVar6 * 8);
          lVar6 = lVar6 + -1;
        } while ((int)lVar6 != -1);
        free(__ptr);
      }
    }
    if (puVar10 == (undefined1 *)0x1014a2) break;
    __ptr = *(void **)(this + ((long)((char)puVar10[0xd] + -0x61) +
                              (long)((char)puVar10[0xc] + -0x61) * 0x1a) * 8);
    puVar10 = puVar10 + 10;
  }
  iVar9 = *(int *)(this + 0x1520) * 2;
  if (*(int *)(this + 0x1520) * 2 < 0xce) {
    do {
      iVar3 = iVar9;
      iVar9 = iVar3 * 2;
    } while (iVar9 < 0xce);
    *(int *)(this + 0x1520) = iVar3;
  }
  return;
}



/* graphite2::Locale2Lang::getMsId(char const*) const */

short __thiscall graphite2::Locale2Lang::getMsId(Locale2Lang *this,char *param_1)

{
  char *__s;
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  short *psVar8;
  int iVar9;
  char *__s_00;
  short sVar10;
  size_t __n;
  ulong uVar11;
  
  sVar4 = strlen(param_1);
  pcVar5 = strchr(param_1,0x2d);
  if ((pcVar5 != (char *)0x0) && (param_1 != pcVar5)) {
    lVar7 = sVar4 - 1;
    sVar4 = (long)pcVar5 - (long)param_1;
    uVar11 = lVar7 - sVar4;
    if (1 < uVar11) {
      __s = pcVar5 + 1;
      pcVar6 = strchr(__s,0x2d);
      if (pcVar6 == (char *)0x0) {
        __n = 0;
        __s_00 = (char *)0x0;
        if (uVar11 != 2) goto LAB_00100a99;
      }
      else {
        __s_00 = pcVar6 + 1;
        if ((long)pcVar6 - (long)__s != 2) {
          if ((long)pcVar6 - (long)__s == 4) {
            pcVar5 = strchr(__s_00,0x2d);
            if (pcVar5 == (char *)0x0) {
              __n = sVar4 - ((long)__s_00 - (long)param_1);
            }
            else {
              __n = (long)pcVar5 - (long)__s_00;
            }
          }
          else {
            __n = 0;
          }
          goto LAB_00100a99;
        }
      }
      __n = 0;
      if ((byte)(pcVar5[1] + 0xbfU) < 0x1a) {
        if ((byte)(pcVar5[2] + 0xbfU) < 0x1a) {
          __s_00 = __s;
        }
        __n = (size_t)(-(uint)((byte)(pcVar5[2] + 0xbfU) < 0x1a) & 2);
      }
      goto LAB_00100a99;
    }
  }
  __n = 0;
  __s_00 = (char *)0x0;
LAB_00100a99:
  if (sVar4 == 2) {
    if (((((ulong)(long)(*param_1 + -0x61) < 0x1a) && ((ulong)(long)(param_1[1] + -0x61) < 0x1a)) &&
        (puVar2 = *(undefined8 **)
                   (this + ((long)(param_1[1] + -0x61) + (long)(*param_1 + -0x61) * 0x1a) * 8),
        puVar2 != (undefined8 *)0x0)) && (psVar8 = (short *)*puVar2, psVar8 != (short *)0x0)) {
      iVar9 = 1;
      sVar10 = 0;
      do {
        if ((char)psVar8[2] == '\0') {
          if ((__s_00 != (char *)0x0) &&
             (iVar3 = strncmp((char *)(psVar8 + 3),__s_00,__n), iVar3 == 0)) goto LAB_00100c40;
          if (sVar10 == 0) {
            sVar10 = *psVar8;
          }
        }
        lVar7 = (long)iVar9;
        iVar9 = iVar9 + 1;
        psVar8 = (short *)puVar2[lVar7];
        if (psVar8 == (short *)0x0) {
          if (sVar10 != 0) {
            return sVar10;
          }
          return 0x409;
        }
      } while( true );
    }
  }
  else if (((sVar4 == 3) &&
           (puVar2 = *(undefined8 **)
                      (this + ((long)(param_1[1] + -0x61) + (long)(*param_1 + -0x61) * 0x1a) * 8),
           puVar2 != (undefined8 *)0x0)) && (psVar8 = (short *)*puVar2, psVar8 != (short *)0x0)) {
    cVar1 = param_1[2];
    sVar10 = 0;
    iVar9 = 1;
    do {
      if ((char)psVar8[2] == cVar1) {
        if ((__s_00 != (char *)0x0) &&
           (iVar3 = strncmp((char *)(psVar8 + 3),__s_00,__n), iVar3 == 0)) {
LAB_00100c40:
          if (*psVar8 != 0) {
            return *psVar8;
          }
          return 0x409;
        }
        if (sVar10 == 0) {
          sVar10 = *psVar8;
        }
      }
      lVar7 = (long)iVar9;
      iVar9 = iVar9 + 1;
      psVar8 = (short *)puVar2[lVar7];
      if (psVar8 == (short *)0x0) {
        if (sVar10 != 0) {
          return sVar10;
        }
        return 0x409;
      }
    } while( true );
  }
  return 0x409;
}



/* WARNING: Control flow encountered bad instruction data */
/* graphite2::Locale2Lang::Locale2Lang() */

void __thiscall graphite2::Locale2Lang::Locale2Lang(Locale2Lang *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


