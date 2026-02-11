
/* graphite2::GlyphCache::~GlyphCache() */

void __thiscall graphite2::GlyphCache::~GlyphCache(GlyphCache *this)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long *__ptr;
  undefined8 *__ptr_00;
  long lVar5;
  long lVar6;
  
  __ptr = *(long **)(this + 0x18);
  if (__ptr != (long *)0x0) {
    if (*(long *)(this + 0x10) == 0) {
      lVar4 = *__ptr;
      if (lVar4 != 0) {
        lVar5 = lVar4 + *(long *)(lVar4 + -8) * 0x28;
        lVar6 = lVar5;
        if (lVar4 != lVar5) {
          do {
            lVar5 = lVar6 + -0x28;
            graphite2::sparse::~sparse((sparse *)(lVar6 + -0x10));
            lVar6 = lVar5;
          } while (**(long **)(this + 0x18) != lVar5);
        }
        free((void *)(lVar5 + -8));
        goto LAB_0010005a;
      }
    }
    else if (*(ushort *)(this + 0x28) != 0) {
      plVar1 = __ptr + *(ushort *)(this + 0x28);
      do {
        pvVar3 = (void *)*__ptr;
        if (pvVar3 != (void *)0x0) {
          graphite2::sparse::~sparse((sparse *)((long)pvVar3 + 0x18));
          free(pvVar3);
        }
        __ptr = __ptr + 1;
      } while (__ptr != plVar1);
LAB_0010005a:
      __ptr = *(long **)(this + 0x18);
    }
    free(__ptr);
  }
  __ptr_00 = *(undefined8 **)(this + 0x20);
  if (__ptr_00 == (undefined8 *)0x0) goto LAB_001000ae;
  if (*(long *)(this + 0x10) == 0) {
    free((void *)*__ptr_00);
LAB_001000a1:
    __ptr_00 = *(undefined8 **)(this + 0x20);
  }
  else if (*(ushort *)(this + 0x28) != 0) {
    puVar2 = __ptr_00 + *(ushort *)(this + 0x28);
    do {
      pvVar3 = (void *)*__ptr_00;
      __ptr_00 = __ptr_00 + 1;
      free(pvVar3);
    } while (puVar2 != __ptr_00);
    goto LAB_001000a1;
  }
  free(__ptr_00);
LAB_001000ae:
  pvVar3 = *(void **)(this + 0x10);
  if (pvVar3 != (void *)0x0) {
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    free(pvVar3);
    return;
  }
  return;
}



/* graphite2::GlyphCache::Loader::Loader(graphite2::Face const&) */

void __thiscall graphite2::GlyphCache::Loader::Loader(Loader *this,Face *param_1)

{
  uint *puVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  Table aTStack_98 [8];
  void *local_90;
  Table local_78 [32];
  Table local_58 [16];
  undefined8 local_48;
  undefined1 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  graphite2::Face::Table::Table((Table *)this,param_1,0x68656164,0xffffffff);
  graphite2::Face::Table::Table((Table *)(this + 0x20),param_1,0x68686561,0xffffffff);
  graphite2::Face::Table::Table((Table *)(this + 0x40),param_1,0x686d7478,0xffffffff);
  graphite2::Face::Table::Table((Table *)(this + 0x60),param_1,0x676c7966,0xffffffff);
  graphite2::Face::Table::Table((Table *)(this + 0x80),param_1,0x6c6f6361,0xffffffff);
  *(undefined8 *)(this + 0xb0) = 0;
  this[0xb8] = (Loader)0x0;
  *(undefined8 *)(this + 0xd0) = 0;
  this[0xd8] = (Loader)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
  if ((((*(long *)(this + 8) == 0) || (*(long *)(this + 0x28) == 0)) ||
      (*(long *)(this + 0x48) == 0)) ||
     ((*(long *)(this + 0x68) != 0) != (*(long *)(this + 0x88) != 0))) goto LAB_00100280;
  graphite2::Face::Table::Table(aTStack_98,param_1,0x6d617870,0xffffffff);
  if (local_90 == (void *)0x0) {
LAB_001004e8:
    local_40 = 0;
    local_58[0] = (Table)0x0;
    local_58[1] = (Table)0x0;
    local_58[2] = (Table)0x0;
    local_58[3] = (Table)0x0;
    local_58[4] = (Table)0x0;
    local_58[5] = (Table)0x0;
    local_58[6] = (Table)0x0;
    local_58[7] = (Table)0x0;
    local_58[8] = (Table)0x0;
    local_58[9] = (Table)0x0;
    local_58[10] = (Table)0x0;
    local_58[0xb] = (Table)0x0;
    local_58[0xc] = (Table)0x0;
    local_58[0xd] = (Table)0x0;
    local_58[0xe] = (Table)0x0;
    local_58[0xf] = (Table)0x0;
    local_48 = 0;
    graphite2::Face::Table::operator=((Table *)this,local_58);
    graphite2::Face::Table::release();
    goto LAB_001003b8;
  }
  sVar3 = graphite2::TtfUtil::GlyphCount(local_90);
  *(short *)(this + 0xe2) = sVar3;
  if (*(long *)(this + 0x68) != 0) {
    lVar6 = graphite2::TtfUtil::LocaLookup
                      (sVar3 - 1,*(void **)(this + 0x88),*(ulong *)(this + 0x90),
                       *(void **)(this + 8));
    if (lVar6 == -2) goto LAB_001004e8;
  }
  graphite2::Face::Table::Table(local_78,param_1,0x476c6174,0x30000);
  lVar6 = graphite2::Face::Table::operator=((Table *)(this + 0xa0),local_78);
  if (*(long *)(lVar6 + 8) == 0) {
    graphite2::Face::Table::release();
LAB_0010038e:
    local_40 = 0;
    local_48 = 0;
    local_58[0] = (Table)0x0;
    local_58[1] = (Table)0x0;
    local_58[2] = (Table)0x0;
    local_58[3] = (Table)0x0;
    local_58[4] = (Table)0x0;
    local_58[5] = (Table)0x0;
    local_58[6] = (Table)0x0;
    local_58[7] = (Table)0x0;
    local_58[8] = (Table)0x0;
    local_58[9] = (Table)0x0;
    local_58[10] = (Table)0x0;
    local_58[0xb] = (Table)0x0;
    local_58[0xc] = (Table)0x0;
    local_58[0xd] = (Table)0x0;
    local_58[0xe] = (Table)0x0;
    local_58[0xf] = (Table)0x0;
    graphite2::Face::Table::operator=((Table *)this,local_58);
    graphite2::Face::Table::release();
  }
  else {
    graphite2::Face::Table::Table(local_58,param_1,0x476c6f63,0xffffffff);
    lVar6 = graphite2::Face::Table::operator=((Table *)(this + 0xc0),local_58);
    if ((*(long *)(lVar6 + 8) == 0) || (*(ulong *)(this + 0xd0) < 8)) {
      graphite2::Face::Table::release();
      graphite2::Face::Table::release();
      goto LAB_0010038e;
    }
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    puVar1 = *(uint **)(this + 200);
    uVar5 = *puVar1;
    uVar2 = (ushort)puVar1[1] >> 8;
    uVar4 = *(ushort *)((long)puVar1 + 6) << 8 | *(ushort *)((long)puVar1 + 6) >> 8;
    this[0xe0] = SUB21((ushort)puVar1[1] >> 8,0);
    *(ushort *)(this + 0xe6) = uVar4;
    this[0xe0] = (Loader)((byte)this[0xe0] & 1);
    uVar7 = *(long *)(this + 0xd0) - 8U;
    if ((uVar2 & 2) != 0) {
      uVar7 = (*(long *)(this + 0xd0) - 8U) + (ulong)uVar4 * -2;
    }
    uVar7 = uVar7 / ((-(ulong)((uVar2 & 1) == 0) & 0xfffffffffffffffe) + 4) - 1;
    if (((0x2fff < (ulong)uVar4 - 1 ||
          0x1ffff < (int)(uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                         uVar5 << 0x18)) || (0xffff < uVar7)) ||
       (((long)uVar7 < (long)(ulong)*(ushort *)(this + 0xe2) || (*(ulong *)(this + 0xb0) < 4))))
    goto LAB_0010038e;
    *(short *)(this + 0xe4) = (short)uVar7;
    uVar5 = **(uint **)(this + 0xa8);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    if (0x3ffff < (int)uVar5) goto LAB_0010038e;
    if (0x2ffff < (int)uVar5) {
      if (*(ulong *)(this + 0xb0) < 8) goto LAB_0010038e;
      this[0xe1] = (Loader)0x1;
    }
  }
LAB_001003b8:
  graphite2::Face::Table::release();
LAB_00100280:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* graphite2::GlyphCache::Loader::read_glyph(unsigned short, graphite2::GlyphFace&, int*) const */

GlyphFace * __thiscall
graphite2::GlyphCache::Loader::read_glyph
          (Loader *this,ushort param_1,GlyphFace *param_2,int *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  ulong uVar5;
  void *pvVar6;
  uint *puVar7;
  ushort *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ushort uVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *puVar19;
  ushort *puVar20;
  long in_FS_OFFSET;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  undefined8 local_68;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < *(ushort *)(this + 0xe2)) {
    if (*(long *)(this + 0x68) == 0) {
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar25 = 0.0;
    }
    else {
      uVar5 = graphite2::TtfUtil::LocaLookup
                        (param_1,*(void **)(this + 0x88),*(ulong *)(this + 0x90),
                         *(void **)(this + 8));
      pvVar6 = (void *)graphite2::TtfUtil::GlyfLookup
                                 (*(void **)(this + 0x68),uVar5,*(ulong *)(this + 0x70));
      if ((pvVar6 == (void *)0x0) ||
         (cVar4 = graphite2::TtfUtil::GlyfBox(pvVar6,&local_50,&local_4c,&local_48,(int *)&local_44)
         , cVar4 == '\0')) {
        fVar21 = 0.0;
        fVar22 = 0.0;
        fVar23 = 0.0;
        fVar25 = 0.0;
      }
      else {
        if ((local_48 < local_50) || ((int)local_44 < local_4c)) goto LAB_001009a0;
        fVar21 = (float)local_50;
        fVar22 = (float)local_4c;
        fVar23 = (float)local_48;
        fVar25 = (float)(int)local_44;
      }
    }
    local_68 = CONCAT44(fVar22,fVar21);
    cVar4 = graphite2::TtfUtil::HorMetrics
                      (param_1,*(void **)(this + 0x48),*(ulong *)(this + 0x50),
                       *(void **)(this + 0x28),&local_48,&local_44);
    uVar24 = CONCAT44(fVar25,fVar23);
    fVar21 = 0.0;
    if (cVar4 != '\0') {
      fVar21 = (float)local_44;
    }
  }
  else {
    local_68 = 0;
    uVar24 = 0;
    fVar21 = 0.0;
  }
  if (*(ushort *)(this + 0xe4) <= param_1) goto LAB_0010062d;
  if (this[0xe0] == (Loader)0x0) {
    uVar5 = (ulong)param_1 * 2 + 8;
    if (uVar5 <= *(ulong *)(this + 0xd0)) {
      puVar8 = (ushort *)(*(long *)(this + 200) + uVar5);
      uVar11 = *puVar8;
      uVar2 = puVar8[1];
      uVar10 = (ulong)(ushort)(uVar11 << 8 | uVar11 >> 8);
      uVar5 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
      goto LAB_00100709;
    }
  }
  else {
    uVar5 = (ulong)param_1 * 4 + 8;
    if (uVar5 <= *(ulong *)(this + 0xd0)) {
      puVar7 = (uint *)(*(long *)(this + 200) + uVar5);
      uVar12 = *puVar7;
      uVar3 = puVar7[1];
      uVar10 = (ulong)(uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                      uVar12 << 0x18);
      uVar5 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                     uVar3 << 0x18);
LAB_00100709:
      uVar17 = *(ulong *)(this + 0xb0);
      if ((uVar10 < uVar17 - 1) && (uVar5 <= uVar17)) {
        puVar7 = *(uint **)(this + 0xa8);
        uVar12 = *puVar7;
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
        ;
        if (uVar12 < 0x30000) {
          if (uVar12 < 0x20000) {
            if ((3 < uVar5 - uVar10) && (uVar5 - uVar10 <= (ulong)*(ushort *)(this + 0xe6) << 2)) {
              puVar20 = (ushort *)(uVar10 + (long)puVar7);
              puVar1 = (ushort *)((long)puVar7 + (uVar5 - 1));
              *(undefined8 *)param_2 = local_68;
              *(undefined8 *)(param_2 + 8) = uVar24;
              puVar8 = puVar20 + 1;
              *(undefined4 *)(param_2 + 0x14) = 0;
              *(undefined2 *)(param_2 + 0x20) = 0;
              *(undefined8 *)(param_2 + 0x18) = 0;
              *(float *)(param_2 + 0x10) = fVar21;
              if (puVar8 < puVar1) {
                uVar10 = 0;
                lVar16 = 0;
                puVar14 = puVar8;
                puVar15 = puVar20;
                uVar5 = 0xffffffffffffffff;
                do {
                  uVar17 = uVar5;
                  if (*puVar14 != 0) {
                    uVar12 = (uint)(byte)*puVar15 + (int)uVar10;
                    uVar17 = (ulong)(uVar12 & 0xffff);
                    if ((long)uVar17 <= (long)uVar5) goto LAB_00100990;
                    uVar12 = uVar12 & 0xffff;
                    if (*(ushort *)(param_2 + 0x20) <= (ushort)(uVar12 / 0x30)) {
                      *(short *)(param_2 + 0x20) = (short)(uVar12 / 0x30) + 1;
                    }
                    lVar16 = lVar16 + 1;
                  }
                  uVar10 = uVar10 + 1;
                  puVar13 = puVar14 + 1;
                  if (uVar10 == *(byte *)((long)puVar15 + 1)) {
                    uVar10 = 0;
                    puVar13 = puVar14 + 2;
                    puVar15 = puVar14 + 1;
                  }
                  puVar14 = puVar13;
                  uVar5 = uVar17;
                } while (puVar13 < puVar1);
                if (*(ushort *)(param_2 + 0x20) == 0) goto LAB_001009b0;
                uVar5 = (ulong)*(ushort *)(param_2 + 0x20) * 4;
                puVar9 = (ulong *)calloc(lVar16 + uVar5,2);
                *(ulong **)(param_2 + 0x18) = puVar9;
                if (puVar9 == (ulong *)0x0) goto LAB_001009a0;
                *(short *)((long)puVar9 + 6) = (short)uVar5;
                uVar10 = 0;
                puVar14 = (ushort *)((long)puVar9 + (uVar5 & 0xffff) * 2);
                puVar18 = puVar9;
                do {
                  uVar11 = *puVar8;
                  puVar15 = puVar14;
                  puVar19 = puVar18;
                  if (uVar11 != 0) {
                    uVar12 = (uint)(byte)*puVar20 + (int)uVar10 & 0xffff;
                    puVar19 = puVar9 + (ulong)uVar12 / 0x30;
                    if (puVar18 != puVar19) {
                      *(short *)((long)puVar19 + 6) = (short)((long)puVar14 - (long)puVar9 >> 1);
                    }
                    puVar15 = puVar14 + 1;
                    uVar5 = *puVar19 & 0xffffffffffff | 1L << ((ulong)(0x2f - uVar12 % 0x30) & 0x3f)
                    ;
                    *(int *)puVar19 = (int)uVar5;
                    *(short *)((long)puVar19 + 4) = (short)(uVar5 >> 0x20);
                    *puVar14 = uVar11 << 8 | uVar11 >> 8;
                  }
                  uVar10 = uVar10 + 1;
                  puVar13 = puVar8 + 1;
                  if (uVar10 == *(byte *)((long)puVar20 + 1)) {
                    uVar10 = 0;
                    puVar20 = puVar13;
                    puVar13 = puVar8 + 2;
                  }
                  puVar14 = puVar15;
                  puVar18 = puVar19;
                  puVar8 = puVar13;
                } while (puVar13 < puVar1);
              }
              else {
LAB_001009b0:
                *(undefined8 **)(param_2 + 0x18) = &sparse::empty_chunk;
              }
LAB_001009bb:
              uVar5 = graphite2::sparse::capacity();
              if (*(ushort *)(this + 0xe6) < uVar5) {
                param_2 = (GlyphFace *)0x0;
              }
              goto LAB_0010062d;
            }
          }
          else {
LAB_001008a1:
            if (((5 < uVar5 - uVar10) &&
                (uVar5 - uVar10 <=
                 (ulong)((long)(int)((uint)*(ushort *)(this + 0xe6) +
                                    (uint)*(ushort *)(this + 0xe6) * 2) * 2))) &&
               (uVar10 <= uVar17 - 4)) {
              puVar20 = (ushort *)(uVar10 + (long)puVar7);
              puVar1 = (ushort *)((long)puVar7 + (uVar5 - 1));
              *(undefined8 *)param_2 = local_68;
              *(undefined8 *)(param_2 + 8) = uVar24;
              puVar8 = puVar20 + 2;
              *(undefined4 *)(param_2 + 0x14) = 0;
              *(undefined2 *)(param_2 + 0x20) = 0;
              *(undefined8 *)(param_2 + 0x18) = 0;
              *(float *)(param_2 + 0x10) = fVar21;
              if (puVar8 < puVar1) {
                uVar10 = 0;
                lVar16 = 0;
                puVar14 = puVar8;
                puVar15 = puVar20;
                uVar5 = 0xffffffffffffffff;
                do {
                  uVar17 = uVar5;
                  if (*puVar14 != 0) {
                    uVar12 = (uint)(ushort)(*puVar15 << 8 | *puVar15 >> 8) + (int)uVar10;
                    uVar17 = (ulong)(uVar12 & 0xffff);
                    if ((long)uVar17 <= (long)uVar5) goto LAB_00100990;
                    uVar12 = uVar12 & 0xffff;
                    if (*(ushort *)(param_2 + 0x20) <= (ushort)(uVar12 / 0x30)) {
                      *(short *)(param_2 + 0x20) = (short)(uVar12 / 0x30) + 1;
                    }
                    lVar16 = lVar16 + 1;
                  }
                  uVar10 = uVar10 + 1;
                  puVar13 = puVar14 + 1;
                  if (uVar10 == (ushort)(puVar15[1] << 8 | puVar15[1] >> 8)) {
                    uVar10 = 0;
                    puVar13 = puVar14 + 3;
                    puVar15 = puVar14 + 1;
                  }
                  puVar14 = puVar13;
                  uVar5 = uVar17;
                } while (puVar13 < puVar1);
                if (*(ushort *)(param_2 + 0x20) != 0) {
                  uVar5 = (ulong)*(ushort *)(param_2 + 0x20) * 4;
                  puVar9 = (ulong *)calloc(lVar16 + uVar5,2);
                  *(ulong **)(param_2 + 0x18) = puVar9;
                  if (puVar9 != (ulong *)0x0) {
                    *(short *)((long)puVar9 + 6) = (short)uVar5;
                    uVar10 = 0;
                    puVar14 = (ushort *)((long)puVar9 + (uVar5 & 0xffff) * 2);
                    puVar18 = puVar9;
                    do {
                      uVar11 = *puVar8;
                      puVar15 = puVar14;
                      puVar19 = puVar18;
                      if (uVar11 != 0) {
                        uVar12 = (uint)(ushort)(*puVar20 << 8 | *puVar20 >> 8) + (int)uVar10 &
                                 0xffff;
                        puVar19 = puVar9 + (ulong)uVar12 / 0x30;
                        if (puVar19 != puVar18) {
                          *(short *)((long)puVar19 + 6) = (short)((long)puVar14 - (long)puVar9 >> 1)
                          ;
                        }
                        puVar15 = puVar14 + 1;
                        uVar5 = *puVar19 & 0xffffffffffff |
                                1L << ((ulong)(0x2f - uVar12 % 0x30) & 0x3f);
                        *(int *)puVar19 = (int)uVar5;
                        *(short *)((long)puVar19 + 4) = (short)(uVar5 >> 0x20);
                        *puVar14 = uVar11 << 8 | uVar11 >> 8;
                      }
                      uVar10 = uVar10 + 1;
                      puVar13 = puVar8 + 1;
                      if (uVar10 == (ushort)(puVar20[1] << 8 | puVar20[1] >> 8)) {
                        uVar10 = 0;
                        puVar20 = puVar13;
                        puVar13 = puVar8 + 3;
                      }
                      puVar14 = puVar15;
                      puVar18 = puVar19;
                      puVar8 = puVar13;
                    } while (puVar13 < puVar1);
                    goto LAB_001009bb;
                  }
                  goto LAB_001009a0;
                }
              }
              goto LAB_001009b0;
            }
          }
        }
        else if (uVar10 < uVar5) {
          uVar11 = *(ushort *)((long)puVar7 + uVar10) << 8 | *(ushort *)((long)puVar7 + uVar10) >> 8
          ;
          uVar12 = (uint)uVar11 - (uVar11 >> 1 & 0x55555555);
          uVar12 = (uVar12 & 0x33333333) + (uVar12 >> 2 & 0x33333333);
          uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f) * 0x1010101 >> 0x18;
          if (param_3 != (int *)0x0) {
            *param_3 = *param_3 + uVar12;
          }
          uVar10 = uVar10 + (long)(int)(uVar12 * 8 + 6);
          if (uVar10 <= uVar5) goto LAB_001008a1;
        }
      }
    }
  }
LAB_001009a0:
  param_2 = (GlyphFace *)0x0;
LAB_0010062d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
LAB_00100990:
  *(undefined2 *)(param_2 + 0x20) = 0;
  goto LAB_001009a0;
}



/* readbox(graphite2::Rect&, unsigned char, unsigned char, unsigned char, unsigned char) */

undefined1  [16] readbox(Rect *param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  auVar4._0_4_ = (*(float *)(param_1 + 8) - fVar1) * (float)param_2;
  auVar4._4_4_ = (*(float *)(param_1 + 0xc) - fVar2) * (float)param_3;
  auVar4._8_4_ = (*(float *)(param_1 + 8) - fVar1) * (float)param_4;
  auVar4._12_4_ = (*(float *)(param_1 + 0xc) - fVar2) * (float)param_5;
  auVar5._4_4_ = _LC2;
  auVar5._0_4_ = _LC2;
  auVar5._8_4_ = _LC2;
  auVar5._12_4_ = _LC2;
  auVar4 = divps(auVar4,auVar5);
  auVar3._4_4_ = auVar4._4_4_ + fVar2;
  auVar3._0_4_ = auVar4._0_4_ + fVar1;
  auVar3._8_4_ = auVar4._8_4_ + fVar1;
  auVar3._12_4_ = auVar4._12_4_ + fVar2;
  return auVar3;
}



/* graphite2::GlyphCache::Loader::read_box(unsigned short, graphite2::GlyphBox*,
   graphite2::GlyphFace const&) const */

GlyphBox * __thiscall
graphite2::GlyphCache::Loader::read_box
          (Loader *this,ushort param_1,GlyphBox *param_2,GlyphFace *param_3)

{
  uchar *puVar1;
  ushort *puVar2;
  uchar *puVar3;
  uint *puVar4;
  ushort uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  GlyphBox *pGVar9;
  Rect *pRVar10;
  ulong uVar11;
  ushort *puVar12;
  uint uVar13;
  ulong uVar14;
  ushort uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < *(ushort *)(this + 0xe4)) {
    if (this[0xe0] == (Loader)0x0) {
      puVar12 = (ushort *)(*(long *)(this + 200) + 8 + (ulong)param_1 * 2);
      uVar15 = *puVar12;
      uVar5 = puVar12[1];
      uVar11 = (ulong)(ushort)(uVar15 << 8 | uVar15 >> 8);
      uVar14 = (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8);
    }
    else {
      puVar4 = (uint *)(*(long *)(this + 200) + 8 + (ulong)param_1 * 4);
      uVar7 = *puVar4;
      uVar13 = puVar4[1];
      uVar11 = (ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                      uVar7 << 0x18);
      uVar14 = (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18);
    }
    if ((uVar14 <= *(ulong *)(this + 0xb0)) && (uVar11 + 6 < uVar14)) {
      puVar12 = (ushort *)(uVar11 + *(long *)(this + 0xa8));
      uVar17 = *(undefined8 *)param_3;
      uVar6 = *(undefined8 *)(param_3 + 8);
      local_58._0_4_ = (float)uVar17;
      local_58._4_4_ = (float)((ulong)uVar17 >> 0x20);
      uStack_50._0_4_ = (float)uVar6;
      uStack_50._4_4_ = (float)((ulong)uVar6 >> 0x20);
      uVar15 = *puVar12 << 8 | *puVar12 >> 8;
      fStack_44 = (float)local_58 - uStack_50._4_4_;
      fStack_3c = (float)uStack_50 - local_58._4_4_;
      fVar18 = local_58._4_4_ + (float)local_58;
      fVar19 = (float)uStack_50 + uStack_50._4_4_;
      uVar7 = (uint)uVar15 - (uVar15 >> 1 & 0x55555555);
      uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
      local_58 = uVar17;
      uStack_50 = uVar6;
      local_48 = fVar18;
      fStack_40 = fVar19;
      uVar17 = readbox((Rect *)&local_48,(uchar)puVar12[1],(uchar)puVar12[2],
                       *(uchar *)((long)puVar12 + 3),*(uchar *)((long)puVar12 + 5));
      *(ushort *)(param_2 + 2) = uVar15;
      uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f) * 0x1010101;
      *(undefined8 *)(param_2 + 4) = uVar17;
      *(ulong *)(param_2 + 0xc) = CONCAT44(fVar19,fVar18);
      *(undefined1 (*) [16])(param_2 + 0x14) = (undefined1  [16])0x0;
      *param_2 = SUB41(uVar7 >> 0x18,0);
      if ((long)(int)((uVar7 >> 0x18) * 8) + uVar11 + 6 < uVar14) {
        uVar13 = (uVar7 >> 0x18) * 2;
        uVar11 = (ulong)uVar13;
        puVar12 = puVar12 + 3;
        uVar16 = 0;
        if (uVar7 >> 0x18 != 0) {
          do {
            puVar1 = (uchar *)((long)puVar12 + 1);
            puVar2 = puVar12 + 1;
            uVar15 = *puVar12;
            puVar3 = (uchar *)((long)puVar12 + 3);
            pRVar10 = (Rect *)&local_48;
            if ((uVar16 & 1) == 0) {
              pRVar10 = (Rect *)&local_58;
            }
            puVar12 = puVar12 + 2;
            uVar17 = readbox(pRVar10,(uchar)uVar15,(uchar)*puVar2,*puVar1,*puVar3);
            uVar7 = uVar16 + 1;
            lVar8 = (long)(int)((uVar16 & 0xfffffffe) + (uVar16 & 1)) + 1;
            *(undefined8 *)(param_2 + lVar8 * 0x10 + 4) = uVar17;
            *(ulong *)(param_2 + lVar8 * 0x10 + 0xc) = CONCAT44(fVar19,fVar18);
            uVar13 = (uint)uVar11;
            uVar16 = uVar7;
          } while (uVar7 != uVar13);
        }
        pGVar9 = param_2 + (long)(int)uVar13 * 0x10 + 0x24;
        goto LAB_00100e3a;
      }
    }
  }
  pGVar9 = (GlyphBox *)0x0;
LAB_00100e3a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pGVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* graphite2::GlyphCache::glyph(unsigned short) const */

Loader * __thiscall graphite2::GlyphCache::glyph(GlyphCache *this,ushort param_1)

{
  Loader *this_00;
  long *plVar1;
  GlyphFace *__ptr;
  Loader *this_01;
  GlyphBox *__ptr_00;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = *(long **)(this + 0x18);
  if (param_1 < *(ushort *)(this + 0x28)) {
    uVar3 = (ulong)param_1;
    plVar1 = plVar1 + uVar3;
    this_01 = (Loader *)*plVar1;
    if (this_01 != (Loader *)0x0) goto LAB_00100ec3;
    this_01 = *(Loader **)(this + 0x10);
    if (this_01 == (Loader *)0x0) goto LAB_00100ec3;
    local_44 = 0;
    __ptr = (GlyphFace *)malloc(0x28);
    *(undefined1 (*) [16])__ptr = (undefined1  [16])0x0;
    *(undefined8 *)(__ptr + 0x10) = 0;
    *(undefined2 *)(__ptr + 0x20) = 0;
    *(undefined8 **)(__ptr + 0x18) = &sparse::empty_chunk;
    this_01 = (Loader *)Loader::read_glyph(this_01,param_1,__ptr,&local_44);
    *plVar1 = (long)this_01;
    if (this_01 != (Loader *)0x0) {
      if (*(long *)(this + 0x20) != 0) {
        puVar4 = (undefined8 *)(uVar3 * 8 + *(long *)(this + 0x20));
        __ptr_00 = (GlyphBox *)malloc((long)(local_44 << 3) * 4 + 0x24);
        this_00 = *(Loader **)(this + 0x10);
        *puVar4 = __ptr_00;
        lVar2 = Loader::read_box(this_00,param_1,__ptr_00,
                                 *(GlyphFace **)(*(long *)(this + 0x18) + uVar3 * 8));
        if (lVar2 == 0) {
          free(__ptr_00);
          *puVar4 = 0;
          this_01 = (Loader *)*plVar1;
        }
      }
      goto LAB_00100ec3;
    }
    graphite2::sparse::~sparse((sparse *)(__ptr + 0x18));
    free(__ptr);
    plVar1 = *(long **)(this + 0x18);
  }
  this_01 = (Loader *)*plVar1;
LAB_00100ec3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* graphite2::GlyphCache::GlyphCache(graphite2::Face const&, unsigned int) */

void __thiscall graphite2::GlyphCache::GlyphCache(GlyphCache *this,Face *param_1,uint param_2)

{
  GlyphFace *pGVar1;
  Loader LVar2;
  ushort uVar3;
  long *plVar4;
  undefined2 uVar5;
  Loader *pLVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  ulong *__ptr;
  GlyphFace *pGVar10;
  undefined8 uVar11;
  GlyphBox *__ptr_00;
  GlyphBox *pGVar12;
  long lVar13;
  ulong uVar14;
  GlyphFace *pGVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  pLVar6 = (Loader *)malloc(0xe8);
  Loader::Loader(pLVar6,param_1);
  pvVar7 = *(void **)(pLVar6 + 8);
  *(Loader **)(this + 0x10) = pLVar6;
  if ((((pvVar7 == (void *)0x0) || (*(long *)(pLVar6 + 0x28) == 0)) ||
      (*(long *)(pLVar6 + 0x48) == 0)) ||
     ((*(long *)(pLVar6 + 0x68) != 0) != (*(long *)(pLVar6 + 0x88) != 0))) {
    LVar2 = pLVar6[0xe1];
    *(undefined8 *)(this + 0x18) = 0;
    if (LVar2 == (Loader)0x0) {
LAB_001010f6:
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined4 *)(this + 0x28) = 0;
      *(undefined2 *)(this + 0x2c) = 0;
      goto LAB_0010110d;
    }
    uVar3 = *(ushort *)(pLVar6 + 0xe4);
    if (*(ushort *)(pLVar6 + 0xe4) < *(ushort *)(pLVar6 + 0xe2)) {
      uVar3 = *(ushort *)(pLVar6 + 0xe2);
    }
    if (uVar3 != 0) {
      pvVar7 = calloc((ulong)uVar3,8);
      *(void **)(this + 0x20) = pvVar7;
      goto LAB_001010b9;
    }
    puVar16 = *(undefined8 **)(this + 0x18);
    *(undefined8 *)(this + 0x20) = 0;
LAB_0010144d:
    uVar5 = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  else {
    uVar3 = *(ushort *)(pLVar6 + 0xe2);
    if (*(ushort *)(pLVar6 + 0xe2) < *(ushort *)(pLVar6 + 0xe4)) {
      uVar3 = *(ushort *)(pLVar6 + 0xe4);
    }
    if (uVar3 == 0) {
      LVar2 = pLVar6[0xe1];
      *(undefined8 *)(this + 0x18) = 0;
      if (LVar2 == (Loader)0x0) goto LAB_001010f6;
      *(undefined8 *)(this + 0x20) = 0;
LAB_001010b9:
      puVar16 = *(undefined8 **)(this + 0x18);
      goto LAB_0010144d;
    }
    pvVar8 = calloc((ulong)uVar3,8);
    LVar2 = pLVar6[0xe1];
    *(void **)(this + 0x18) = pvVar8;
    if (LVar2 == (Loader)0x0) {
      *(undefined8 *)(this + 0x20) = 0;
      if (pvVar8 == (void *)0x0) {
        *(undefined2 *)(this + 0x2c) = 0;
        *(undefined4 *)(this + 0x28) = 0;
        goto LAB_0010110d;
      }
    }
    else {
      pvVar9 = calloc((ulong)uVar3,8);
      *(void **)(this + 0x20) = pvVar9;
      if (pvVar8 == (void *)0x0) goto LAB_001010b9;
    }
    *(uint *)(this + 0x28) = CONCAT22(*(undefined2 *)(pLVar6 + 0xe6),uVar3);
    uVar5 = graphite2::TtfUtil::DesignUnits(pvVar7);
    puVar16 = *(undefined8 **)(this + 0x18);
  }
  *(undefined2 *)(this + 0x2c) = uVar5;
  if (((param_2 & 2) != 0) && (pLVar6 = *(Loader **)(this + 0x10), pLVar6 != (Loader *)0x0)) {
    if (puVar16 == (undefined8 *)0x0) goto LAB_0010110d;
    uVar14 = (ulong)*(ushort *)(this + 0x28);
    local_44 = 0;
    __ptr = (ulong *)malloc(uVar14 * 0x28 + 8);
    pGVar1 = (GlyphFace *)(__ptr + 1);
    *__ptr = uVar14;
    pGVar15 = pGVar1;
    if (uVar14 != 0) {
      do {
        *(undefined8 *)(pGVar15 + 0x10) = 0;
        pGVar10 = pGVar15 + 0x28;
        *(undefined1 (*) [16])pGVar15 = (undefined1  [16])0x0;
        *(undefined2 *)(pGVar15 + 0x20) = 0;
        *(undefined8 **)(pGVar15 + 0x18) = &sparse::empty_chunk;
        pGVar15 = pGVar10;
      } while ((GlyphFace *)(__ptr + uVar14 * 5 + 1) != pGVar10);
    }
    uVar11 = Loader::read_glyph(pLVar6,0,pGVar1,&local_44);
    plVar4 = *(long **)(this + 0x18);
    *puVar16 = uVar11;
    lVar13 = *plVar4;
    uVar3 = 1;
    while (lVar13 != 0) {
      if (*(ushort *)(this + 0x28) == uVar3) {
        if ((local_44 < 1) ||
           (puVar16 = *(undefined8 **)(this + 0x20), puVar16 == (undefined8 *)0x0))
        goto LAB_00101320;
        __ptr_00 = (GlyphBox *)malloc(((ulong)uVar3 * 9 + (long)(local_44 << 3)) * 4);
        if (__ptr_00 == (GlyphBox *)0x0) goto LAB_0010130c;
        pLVar6 = *(Loader **)(this + 0x10);
        if (uVar3 == 0) goto LAB_00101324;
        lVar13 = *(long *)(this + 0x18);
        uVar14 = 0;
        pGVar12 = __ptr_00;
        goto LAB_001012f1;
      }
      lVar13 = Loader::read_glyph(*(Loader **)(this + 0x10),uVar3,pGVar1 + (ulong)uVar3 * 0x28,
                                  &local_44);
      plVar4 = *(long **)(this + 0x18);
      plVar4[uVar3] = lVar13;
      uVar3 = uVar3 + 1;
    }
    uVar14 = *__ptr;
    *plVar4 = 0;
    for (pGVar15 = pGVar1 + uVar14 * 0x28; pGVar1 != pGVar15; pGVar15 = pGVar15 + -0x28) {
      graphite2::sparse::~sparse((sparse *)(pGVar15 + -0x10));
    }
    free(__ptr);
    pLVar6 = *(Loader **)(this + 0x10);
    goto LAB_00101324;
  }
  goto LAB_0010138a;
LAB_0010130c:
  free(__ptr_00);
  *puVar16 = 0;
LAB_00101320:
  pLVar6 = *(Loader **)(this + 0x10);
  goto LAB_00101324;
  while (uVar14 = uVar14 + 1, uVar3 != uVar14) {
LAB_001012f1:
    puVar16[uVar14] = pGVar12;
    pGVar12 = (GlyphBox *)
              Loader::read_box(pLVar6,(ushort)uVar14,pGVar12,*(GlyphFace **)(lVar13 + uVar14 * 8));
    if (pGVar12 == (GlyphBox *)0x0) goto LAB_0010130c;
  }
LAB_00101324:
  if (pLVar6 != (Loader *)0x0) {
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    graphite2::Face::Table::release();
    free(pLVar6);
  }
  *(undefined8 *)(this + 0x10) = 0;
  puVar16 = *(undefined8 **)(this + 0x18);
LAB_0010138a:
  if ((puVar16 != (undefined8 *)0x0) && (lVar13 = glyph(this,0), lVar13 == 0)) {
    free(*(void **)(this + 0x18));
    *(undefined8 *)(this + 0x18) = 0;
    if (*(void **)(this + 0x20) != (void *)0x0) {
      free(*(void **)(this + 0x20));
      *(undefined8 *)(this + 0x20) = 0;
    }
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined2 *)(this + 0x2c) = 0;
  }
LAB_0010110d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


