
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_serialize_cff_fdselect(hb_serialize_context_t*, unsigned int, CFF::FDSelect const&, unsigned
   int, unsigned int, unsigned int, hb_vector_t<CFF::code_pair_t, false> const&) */

undefined8
hb_serialize_cff_fdselect
          (hb_serialize_context_t *param_1,uint param_2,FDSelect *param_3,uint param_4,uint param_5,
          uint param_6,hb_vector_t *param_7)

{
  ushort uVar1;
  undefined1 *puVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  uint uVar9;
  uint *puVar10;
  ushort *puVar11;
  uint *puVar12;
  uint *__s;
  uint uVar13;
  ulong uVar14;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (0 < *(long *)(param_1 + 0x10) - (long)*(undefined1 **)(param_1 + 8)) {
      **(undefined1 **)(param_1 + 8) = 0;
      puVar2 = *(undefined1 **)(param_1 + 8);
      __s = (uint *)(puVar2 + 1);
      *(uint **)(param_1 + 8) = __s;
      if (puVar2 == (undefined1 *)0x0) {
        return 0;
      }
      *puVar2 = (char)param_5;
      uVar13 = param_6 - 1;
      if (param_5 == 3) {
        uVar14 = (ulong)uVar13;
        if (*(int *)(param_1 + 0x2c) != 0) {
          return 0;
        }
        if ((uVar14 < 0x80000000) && ((long)uVar14 <= *(long *)(param_1 + 0x10) - (long)__s)) {
          if (uVar13 == 0) {
            *(uint **)(param_1 + 8) = __s;
          }
          else {
            memset(__s,0,uVar14);
            __s = *(uint **)(param_1 + 8);
            *(ulong *)(param_1 + 8) = uVar14 + (long)__s;
            if (__s == (uint *)0x0) {
              return 0;
            }
          }
          uVar3 = *(ushort *)(param_7 + 4) << 8 | *(ushort *)(param_7 + 4) >> 8;
          *(ushort *)__s = uVar3;
          if (*(int *)(param_7 + 4) != 0) {
            puVar11 = (ushort *)((long)__s + 2);
            lVar5 = 0;
            do {
              uVar13 = (uint)lVar5;
              uVar1 = *(ushort *)(*(long *)(param_7 + 8) + 4 + lVar5 * 8);
              puVar8 = puVar11;
              if ((ushort)(uVar3 << 8 | uVar3 >> 8) <= uVar13) {
                __hb_CrapPool = CONCAT13(DAT_0010302b,(int3)__hb_NullPool);
                puVar8 = (ushort *)&_hb_CrapPool;
              }
              *puVar8 = uVar1 << 8 | uVar1 >> 8;
              uVar9 = *(uint *)(param_7 + 4);
              puVar7 = (undefined4 *)&_hb_NullPool;
              if (uVar13 < uVar9) {
                puVar7 = (undefined4 *)(*(long *)(param_7 + 8) + lVar5 * 8);
              }
              if (uVar13 < (ushort)((ushort)*__s << 8 | (ushort)*__s >> 8)) {
                uVar9 = *(uint *)(param_7 + 4);
                puVar8 = puVar11;
              }
              else {
                __hb_CrapPool = CONCAT13(DAT_0010302b,(int3)__hb_NullPool);
                puVar8 = (ushort *)&_hb_CrapPool;
              }
              lVar5 = lVar5 + 1;
              *(char *)(puVar8 + 1) = (char)*puVar7;
              puVar11 = (ushort *)((long)puVar11 + 3);
              uVar3 = (ushort)*__s;
            } while ((uint)lVar5 < uVar9);
          }
          uVar13 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
          if (uVar13 == 0) {
            __hb_CrapPool = CONCAT13(DAT_0010302b,(int3)__hb_NullPool);
            puVar6 = &_hb_CrapPool;
          }
          else {
            puVar6 = (undefined *)((ulong)(uVar13 - 1) * 3 + 2 + (long)__s);
          }
          *(ushort *)(puVar6 + 3) = (ushort)param_2 << 8 | (ushort)param_2 >> 8;
          return 1;
        }
      }
      else {
        if (param_5 != 4) {
          return 0;
        }
        uVar14 = (ulong)uVar13;
        if (*(int *)(param_1 + 0x2c) != 0) {
          return 0;
        }
        if ((uVar14 < 0x80000000) && ((long)uVar14 <= *(long *)(param_1 + 0x10) - (long)__s)) {
          if (uVar13 == 0) {
            *(uint **)(param_1 + 8) = __s;
          }
          else {
            memset(__s,0,uVar14);
            __s = *(uint **)(param_1 + 8);
            *(ulong *)(param_1 + 8) = uVar14 + (long)__s;
            if (__s == (uint *)0x0) {
              return 0;
            }
          }
          uVar13 = *(uint *)(param_7 + 4);
          uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                   uVar13 << 0x18;
          *__s = uVar13;
          if (*(int *)(param_7 + 4) != 0) {
            puVar12 = __s + 1;
            lVar5 = 0;
            do {
              uVar4 = (uint)lVar5;
              uVar9 = *(uint *)(*(long *)(param_7 + 8) + 4 + lVar5 * 8);
              puVar10 = puVar12;
              if ((uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                  uVar13 << 0x18) <= uVar4) {
                __hb_CrapPool = __hb_NullPool;
                _DAT_0010302c = _DAT_0010301c;
                puVar10 = (uint *)&_hb_CrapPool;
              }
              puVar11 = (ushort *)&_hb_NullPool;
              *puVar10 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                         uVar9 << 0x18;
              if (uVar4 < *(uint *)(param_7 + 4)) {
                puVar11 = (ushort *)(*(long *)(param_7 + 8) + lVar5 * 8);
              }
              uVar13 = *__s;
              puVar10 = puVar12;
              if ((uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                  uVar13 << 0x18) <= uVar4) {
                __hb_CrapPool = __hb_NullPool;
                _DAT_0010302c = _DAT_0010301c;
                puVar10 = (uint *)&_hb_CrapPool;
              }
              lVar5 = lVar5 + 1;
              puVar12 = (uint *)((long)puVar12 + 6);
              *(ushort *)(puVar10 + 1) = *puVar11 << 8 | *puVar11 >> 8;
              uVar13 = *__s;
            } while ((uint)lVar5 < *(uint *)(param_7 + 4));
          }
          uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                   uVar13 << 0x18;
          if (uVar13 == 0) {
            __hb_CrapPool = __hb_NullPool;
            _DAT_0010302c = _DAT_0010301c;
            puVar6 = &_hb_CrapPool;
          }
          else {
            puVar6 = (undefined *)((long)__s + (ulong)(uVar13 - 1) * 6 + 4);
          }
          *(uint *)(puVar6 + 6) =
               param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 |
               param_2 << 0x18;
          return 1;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 4;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_inc_bimap_t::add(unsigned int) [clone .isra.0] */

void __thiscall hb_inc_bimap_t::add(hb_inc_bimap_t *this,uint param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  uint *puVar4;
  long lVar5;
  void *pvVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  lVar11 = *(long *)(this + 0x28);
  uVar12 = *(uint *)(this + 0x20);
  puVar8 = (uint *)&minus_1;
  if (lVar11 == 0) {
LAB_00100443:
    uVar9 = *puVar8;
    if (*puVar8 != 0xffffffff) {
      return;
    }
  }
  else {
    uVar10 = (ulong)(param_1 * -0x61c8864f & 0x3fffffff) % (ulong)uVar12;
    puVar4 = (uint *)(lVar11 + uVar10 * 0xc);
    bVar1 = (byte)puVar4[1];
    if ((bVar1 & 2) == 0) goto LAB_00100443;
    iVar13 = 0;
    do {
      if (*puVar4 == param_1) {
        puVar8 = (uint *)&minus_1;
        if ((bVar1 & 1) != 0) {
          puVar8 = puVar4 + 2;
        }
        goto LAB_00100443;
      }
      iVar13 = iVar13 + 1;
      uVar10 = (ulong)((int)uVar10 + iVar13 & *(uint *)(this + 0x1c));
      puVar4 = (uint *)(lVar11 + uVar10 * 0xc);
      bVar1 = (byte)puVar4[1];
    } while ((bVar1 & 2) != 0);
    uVar9 = _minus_1;
    if (_minus_1 != 0xffffffff) {
      return;
    }
  }
  uVar14 = *(uint *)(this + 0x34);
  if (this[0x10] != (hb_inc_bimap_t)0x0) {
    uVar7 = *(uint *)(this + 0x18);
    if ((uVar7 >> 1) + uVar7 < *(uint *)(this + 0x1c)) {
LAB_0010048e:
      iVar13 = *(int *)(this + 0x14);
      uVar10 = (ulong)(param_1 * -0x61c8864f & 0x3fffffff) % (ulong)uVar12;
      lVar5 = uVar10 * 0xc;
      puVar8 = (uint *)(lVar11 + lVar5);
      bVar1 = (byte)puVar8[1];
      if ((bVar1 & 2) == 0) {
        *puVar8 = param_1;
        puVar8[2] = uVar14;
        puVar8[1] = param_1 * 0x78dde6c4 + 3;
        *(uint *)(this + 0x18) = uVar7 + 1;
        *(int *)(this + 0x14) = iVar13 + 1;
      }
      else {
        uVar12 = 0;
        do {
          if (*puVar8 == param_1) {
            if (uVar9 != 0xffffffff) goto LAB_00100503;
            goto LAB_0010050e;
          }
          if (((bVar1 & 1) == 0) && (uVar9 == 0xffffffff)) {
            uVar9 = (uint)uVar10;
          }
          uVar12 = uVar12 + 1;
          uVar10 = (ulong)((uint)uVar10 + uVar12 & *(uint *)(this + 0x1c));
          lVar5 = uVar10 * 0xc;
          puVar8 = (uint *)(lVar11 + lVar5);
          bVar1 = (byte)puVar8[1];
        } while ((bVar1 & 2) != 0);
        if (uVar9 == 0xffffffff) {
LAB_00100576:
          uVar7 = uVar7 + 1;
        }
        else {
LAB_00100503:
          lVar5 = (ulong)uVar9 * 0xc;
LAB_0010050e:
          puVar8 = (uint *)(lVar11 + lVar5);
          if (((byte)puVar8[1] & 2) == 0) goto LAB_00100576;
          iVar13 = iVar13 - ((byte)puVar8[1] & 1);
        }
        uVar2 = *(ushort *)(this + 0x12);
        *puVar8 = param_1;
        puVar8[2] = uVar14;
        puVar8[1] = param_1 * 0x78dde6c4 + 3;
        *(uint *)(this + 0x18) = uVar7;
        *(int *)(this + 0x14) = iVar13 + 1;
        if ((uVar2 < uVar12) && (*(uint *)(this + 0x1c) < uVar7 << 3)) {
          hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                    ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)this,*(uint *)(this + 0x1c) - 8
                    );
        }
      }
    }
    else {
      cVar3 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                        ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)this,0);
      if (cVar3 != '\0') {
        lVar11 = *(long *)(this + 0x28);
        uVar12 = *(uint *)(this + 0x20);
        uVar7 = *(uint *)(this + 0x18);
        goto LAB_0010048e;
      }
    }
    uVar14 = *(uint *)(this + 0x34);
  }
  uVar10 = (ulong)uVar14;
  uVar12 = *(uint *)(this + 0x30);
  uVar9 = uVar14 + 1;
  if ((int)uVar12 <= (int)uVar14) {
    if ((int)uVar12 < 0) {
      __hb_CrapPool = __hb_NullPool;
      return;
    }
    uVar14 = uVar12;
    if (uVar12 < uVar9) {
      do {
        uVar14 = uVar14 + 8 + (uVar14 >> 1);
      } while (uVar14 < uVar9);
      if (0x3fffffff < uVar14) {
LAB_0010063d:
        *(uint *)(this + 0x30) = ~uVar12;
        __hb_CrapPool = __hb_NullPool;
        return;
      }
      pvVar6 = realloc(*(void **)(this + 0x38),(ulong)uVar14 << 2);
      if (pvVar6 == (void *)0x0) {
        uVar12 = *(uint *)(this + 0x30);
        if (uVar12 < uVar14) goto LAB_0010063d;
      }
      else {
        *(void **)(this + 0x38) = pvVar6;
        *(uint *)(this + 0x30) = uVar14;
      }
      uVar10 = (ulong)*(uint *)(this + 0x34);
      uVar9 = *(uint *)(this + 0x34) + 1;
    }
  }
  *(uint *)(this + 0x34) = uVar9;
  *(uint *)(*(long *)(this + 0x38) + uVar10 * 4) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_plan_subset_cff_fdselect(hb_subset_plan_t const*, unsigned int, CFF::FDSelect const&, unsigned
   int&, unsigned int&, unsigned int&, hb_vector_t<CFF::code_pair_t, false>&, hb_inc_bimap_t&) */

undefined8
hb_plan_subset_cff_fdselect
          (hb_subset_plan_t *param_1,uint param_2,FDSelect *param_3,uint *param_4,uint *param_5,
          uint *param_6,hb_vector_t *param_7,hb_inc_bimap_t *param_8)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  void *pvVar18;
  FDSelect *pFVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 *puVar26;
  int *piVar27;
  ushort uVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  FDSelect *pFVar32;
  uint uVar33;
  undefined8 *puVar34;
  long in_FS_OFFSET;
  uint *local_f8;
  int local_e8;
  int local_dc;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  uVar31 = *(uint *)(param_1 + 0x58);
  if (uVar31 != 0) {
    local_78 = 1;
    local_48 = 0;
    local_88 = 1;
    local_84 = 1;
    local_80 = 0;
    local_70 = 0;
    local_68 = 0;
    local_e8 = *(int *)(param_1 + 0xc4);
    local_f8 = *(uint **)(param_1 + 200);
    local_58 = 0;
    puVar14 = (uint *)&_hb_NullPool;
    if (local_e8 != 0) {
      puVar14 = local_f8;
    }
    uVar13 = 0;
    uVar21 = 0;
    local_60 = 0;
    uVar22 = 0;
    uVar25 = *puVar14;
    uVar3 = puVar14[1];
    local_50 = 0;
    local_dc = 0;
    uVar23 = 0xffffffff;
    do {
      uVar24 = (uint)uVar13;
      uVar4 = uVar3;
      uVar33 = uVar24;
      if (uVar25 == uVar24) {
        puVar14 = (uint *)&_hb_NullPool;
        if (local_e8 != 0) {
          local_f8 = local_f8 + 2;
          local_e8 = local_e8 + -1;
          if (local_e8 != 0) {
            puVar14 = local_f8;
          }
        }
        uVar25 = *puVar14;
        uVar13 = (ulong)uVar3;
        uVar4 = puVar14[1];
        uVar33 = uVar3;
      }
      uVar3 = uVar4;
      if (uVar22 <= uVar33) {
        uVar33 = (uint)uVar13;
        if (param_3 == (FDSelect *)&_hb_NullPool) {
LAB_001009e0:
          uVar22 = 1;
          uVar21 = 0;
        }
        else if (*param_3 == (FDSelect)0x0) {
          uVar22 = uVar33 + 1;
          uVar21 = (uint)(byte)param_3[uVar13 + 1];
        }
        else {
          if (*param_3 != (FDSelect)0x3) goto LAB_001009e0;
          pFVar32 = (FDSelect *)&_hb_NullPool;
          if (*(short *)(param_3 + 1) != 0) {
            pFVar32 = param_3 + 3;
          }
          iVar29 = (ushort)(*(ushort *)(param_3 + 1) << 8 | *(ushort *)(param_3 + 1) >> 8) - 2;
          if (-1 < iVar29) {
            iVar10 = 0;
            do {
              while( true ) {
                uVar21 = (uint)(iVar10 + iVar29) >> 1;
                pFVar19 = pFVar32 + (ulong)uVar21 * 3;
                if ((ushort)(*(ushort *)pFVar19 << 8 | *(ushort *)pFVar19 >> 8) <= uVar33) break;
                iVar29 = uVar21 - 1;
                if (iVar29 < iVar10) goto LAB_00100970;
              }
              uVar22 = (uint)(ushort)(*(ushort *)(pFVar19 + 3) << 8 | *(ushort *)(pFVar19 + 3) >> 8)
              ;
              if (uVar33 < uVar22) {
                uVar21 = (uint)(byte)pFVar19[2];
                goto LAB_001007d9;
              }
              iVar10 = uVar21 + 1;
            } while (iVar10 <= iVar29);
          }
LAB_00100970:
          uVar28 = *(ushort *)(param_3 + 1);
          pFVar32 = (FDSelect *)&_hb_NullPool;
          uVar9 = uVar28 << 8 | uVar28 >> 8;
          uVar21 = (ushort)(uVar28 << 8 | uVar28 >> 8) - 1;
          if (uVar21 < uVar9) {
            uVar28 = *(ushort *)(param_3 + 1);
            pFVar32 = param_3 + (ulong)uVar21 * 3 + 3;
            uVar9 = *(ushort *)(param_3 + 1) << 8 | *(ushort *)(param_3 + 1) >> 8;
          }
          uVar21 = (uint)(byte)pFVar32[2];
          pFVar32 = (FDSelect *)&_hb_NullPool;
          uVar22 = (ushort)(uVar28 << 8 | uVar28 >> 8) - 1;
          if (uVar22 < uVar9) {
            pFVar32 = param_3 + (ulong)uVar22 * 3 + 3;
          }
          uVar22 = (uint)(ushort)(*(ushort *)pFVar32 << 8 | *(ushort *)pFVar32 >> 8);
        }
      }
LAB_001007d9:
      if (uVar21 != uVar23) {
        if ((char)local_48 == '\0') {
          if (local_78._0_1_ != (hb_bit_set_t)0x0) {
            local_78 = CONCAT44(0xffffffff,(undefined4)local_78);
            puVar12 = (undefined4 *)hb_bit_set_t::page_for((hb_bit_set_t *)&local_78,uVar21,true);
            if (puVar12 != (undefined4 *)0x0) {
              *(ulong *)(puVar12 + (ulong)(uVar21 >> 6) * 2 + 2) =
                   *(ulong *)(puVar12 + (ulong)(uVar21 >> 6) * 2 + 2) | 1L << ((byte)uVar21 & 0x3f);
              *puVar12 = 0xffffffff;
            }
          }
        }
        else if ((local_78._0_1_ != (hb_bit_set_t)0x0) &&
                (puVar12 = (undefined4 *)
                           hb_bit_set_t::page_for((hb_bit_set_t *)&local_78,uVar21,false),
                puVar12 != (undefined4 *)0x0)) {
          local_78 = CONCAT44(0xffffffff,(undefined4)local_78);
          bVar2 = (byte)uVar21 & 0x3f;
          *(ulong *)(puVar12 + (ulong)(uVar21 >> 6) * 2 + 2) =
               *(ulong *)(puVar12 + (ulong)(uVar21 >> 6) * 2 + 2) &
               (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
          *puVar12 = 0xffffffff;
        }
        uVar23 = *(uint *)(param_7 + 4);
        uVar13 = (ulong)uVar23;
        uVar4 = *(uint *)param_7;
        local_dc = local_dc + 1;
        uVar30 = uVar23 + 1;
        if ((int)uVar23 < (int)uVar4) {
LAB_00100861:
          pvVar18 = *(void **)(param_7 + 8);
LAB_00100865:
          puVar14 = (uint *)((long)pvVar18 + uVar13 * 8);
          *(uint *)(param_7 + 4) = uVar30;
          *puVar14 = uVar21;
          puVar14[1] = uVar24;
        }
        else {
          if (-1 < (int)uVar4) {
            uVar23 = uVar4;
            if (uVar30 <= uVar4) goto LAB_00100861;
            do {
              uVar23 = (uVar23 >> 1) + 8 + uVar23;
            } while (uVar23 < uVar30);
            if (0x1fffffff < uVar23) {
              *(uint *)param_7 = ~uVar4;
              goto LAB_00100ff8;
            }
            pvVar18 = realloc(*(void **)(param_7 + 8),(ulong)uVar23 << 3);
            if (pvVar18 == (void *)0x0) {
              if (*(uint *)param_7 < uVar23) {
                *(uint *)param_7 = ~*(uint *)param_7;
                goto LAB_00100ff8;
              }
              uVar13 = (ulong)*(uint *)(param_7 + 4);
              pvVar18 = *(void **)(param_7 + 8);
              uVar30 = *(uint *)(param_7 + 4) + 1;
            }
            else {
              *(void **)(param_7 + 8) = pvVar18;
              uVar13 = (ulong)*(uint *)(param_7 + 4);
              *(uint *)param_7 = uVar23;
              uVar30 = *(uint *)(param_7 + 4) + 1;
            }
            goto LAB_00100865;
          }
LAB_00100ff8:
          __hb_CrapPool = __hb_NullPool;
        }
        if (uVar33 == uVar24) {
          uVar24 = uVar22 - 1;
          if (uVar25 - 1 < uVar22 - 1) {
            uVar24 = uVar25 - 1;
          }
        }
      }
      uVar11 = local_48;
      uVar13 = (ulong)(uVar24 + 1);
      uVar23 = uVar21;
    } while (uVar24 + 1 < uVar31);
    uVar31 = local_78._4_4_;
    if ((char)local_48 == '\0') {
      if (local_78._4_4_ != 0xffffffff) goto LAB_00100ad3;
      uVar31 = local_58._4_4_;
      if (local_58._4_4_ != 0) {
        uVar31 = 0;
        puVar26 = (undefined8 *)(local_50 + 8);
        puVar15 = (undefined8 *)(local_50 + 0x48);
        puVar1 = puVar15 + (ulong)local_58._4_4_ * 9;
        do {
          iVar29 = *(int *)(puVar15 + -9);
          if (iVar29 == -1) {
            iVar29 = 0;
            puVar34 = puVar26;
            do {
              uVar5 = *puVar34;
              puVar34 = puVar34 + 1;
              iVar10 = __popcountdi2(uVar5);
              iVar29 = iVar29 + iVar10;
            } while (puVar15 != puVar34);
            *(int *)(puVar15 + -9) = iVar29;
          }
          puVar15 = puVar15 + 9;
          uVar31 = uVar31 + iVar29;
          puVar26 = puVar26 + 9;
        } while (puVar15 != puVar1);
      }
      local_78 = CONCAT44(uVar31,(undefined4)local_78);
      *param_4 = uVar31;
    }
    else {
      if (local_78._4_4_ == 0xffffffff) {
        uVar25 = local_58._4_4_;
        if (local_58._4_4_ != 0) {
          uVar25 = 0;
          puVar26 = (undefined8 *)(local_50 + 8);
          puVar15 = (undefined8 *)(local_50 + 0x48);
          puVar1 = puVar15 + (ulong)local_58._4_4_ * 9;
          do {
            iVar29 = *(int *)(puVar15 + -9);
            if (iVar29 == -1) {
              iVar29 = 0;
              puVar34 = puVar26;
              do {
                uVar5 = *puVar34;
                puVar34 = puVar34 + 1;
                iVar10 = __popcountdi2(uVar5);
                iVar29 = iVar29 + iVar10;
              } while (puVar15 != puVar34);
              *(int *)(puVar15 + -9) = iVar29;
            }
            puVar15 = puVar15 + 9;
            uVar25 = uVar25 + iVar29;
            puVar26 = puVar26 + 9;
          } while (puVar15 != puVar1);
          uVar31 = ~uVar25;
        }
        local_78 = CONCAT44(uVar25,(undefined4)local_78);
      }
      else {
        uVar31 = ~local_78._4_4_;
      }
LAB_00100ad3:
      *param_4 = uVar31;
    }
    if (param_2 != uVar31) {
      param_8[0x10] = (hb_inc_bimap_t)0x1;
      if (*(int *)(param_8 + 0x1c) != 0) {
        puVar16 = *(undefined4 **)(param_8 + 0x28);
        puVar12 = puVar16 + (ulong)(*(int *)(param_8 + 0x1c) + 1) * 3;
        for (; puVar16 != puVar12; puVar16 = puVar16 + 3) {
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
        }
      }
      *(undefined8 *)(param_8 + 0x14) = 0;
      if ((int)*(uint *)(param_8 + 0x30) < 0) {
        *(uint *)(param_8 + 0x30) = ~*(uint *)(param_8 + 0x30);
      }
      *(undefined4 *)(param_8 + 0x34) = 0;
      local_94 = 0xffffffff;
      do {
        uVar31 = local_94;
        if ((char)uVar11 == '\0') {
          cVar8 = hb_bit_set_t::next((hb_bit_set_t *)&local_78,&local_94);
          uVar25 = local_94;
          if (cVar8 == '\0') goto LAB_00100db0;
        }
        else {
          if (local_94 == 0xfffffffe) goto LAB_00100db0;
          local_90 = local_94;
          uVar25 = local_94 + 1;
          hb_bit_set_t::next((hb_bit_set_t *)&local_78,&local_90);
          if (local_90 <= uVar25) {
            local_8c = uVar31;
            cVar8 = hb_bit_set_t::next((hb_bit_set_t *)&local_78,&local_8c);
            uVar31 = local_8c;
            if (cVar8 == '\0') {
              local_94 = 0;
              uVar25 = local_94;
            }
            else {
              do {
                uVar25 = uVar31 + 1;
                local_90 = uVar31;
                cVar8 = hb_bit_set_t::next((hb_bit_set_t *)&local_78,&local_8c);
                if (cVar8 == '\0') break;
                uVar31 = uVar25;
              } while (local_8c == uVar25);
              local_94 = uVar25;
              if (uVar25 == 0xffffffff) goto LAB_00100db0;
            }
          }
        }
        local_94 = uVar25;
        hb_inc_bimap_t::add(param_8,local_94);
        uVar11 = local_48;
      } while( true );
    }
    if (param_8[0x10] != (hb_inc_bimap_t)0x0) {
      if (*(int *)(param_8 + 0x1c) != 0) {
        puVar16 = *(undefined4 **)(param_8 + 0x28);
        puVar12 = puVar16 + (ulong)(*(int *)(param_8 + 0x1c) + 1) * 3;
        for (; puVar16 != puVar12; puVar16 = puVar16 + 3) {
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
        }
      }
      *(undefined8 *)(param_8 + 0x14) = 0;
    }
    if (-1 < *(int *)(param_8 + 0x30)) {
      *(undefined4 *)(param_8 + 0x34) = 0;
    }
    uVar31 = 0;
    if (param_2 != 0) {
      do {
        uVar25 = uVar31 + 1;
        hb_inc_bimap_t::add(param_8,uVar31);
        uVar31 = uVar25;
      } while (param_2 != uVar25);
    }
    goto LAB_00100dc7;
  }
  goto LAB_001006c2;
LAB_00100db0:
  if (*param_4 != *(uint *)(param_8 + 0x14)) {
    hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t
              ((hb_sparseset_t<hb_bit_set_invertible_t> *)&local_88);
LAB_00100fec:
    uVar11 = 0;
    goto LAB_001006c7;
  }
LAB_00100dc7:
  uVar31 = *(uint *)(param_7 + 4);
  if (uVar31 != 0) {
    piVar6 = *(int **)(param_7 + 8);
    lVar7 = *(long *)(param_8 + 0x28);
    piVar27 = piVar6;
    do {
      piVar20 = (int *)&minus_1;
      if (lVar7 != 0) {
        uVar13 = (ulong)(*piVar27 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_8 + 0x20);
        piVar17 = (int *)(lVar7 + uVar13 * 0xc);
        bVar2 = *(byte *)(piVar17 + 1);
        if ((bVar2 & 2) != 0) {
          iVar29 = 0;
          do {
            if (*piVar27 == *piVar17) {
              piVar20 = piVar17 + 2;
              if ((bVar2 & 1) == 0) {
                piVar20 = (int *)&minus_1;
              }
              goto LAB_00100e60;
            }
            iVar29 = iVar29 + 1;
            uVar13 = (ulong)((int)uVar13 + iVar29 & *(uint *)(param_8 + 0x1c));
            piVar17 = (int *)(lVar7 + uVar13 * 0xc);
            bVar2 = *(byte *)(piVar17 + 1);
          } while ((bVar2 & 2) != 0);
          piVar20 = (int *)&minus_1;
        }
      }
LAB_00100e60:
      piVar17 = piVar27 + 2;
      *piVar27 = *piVar20;
      piVar27 = piVar17;
    } while (piVar17 != piVar6 + (ulong)uVar31 * 2);
  }
  hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t
            ((hb_sparseset_t<hb_bit_set_invertible_t> *)&local_88);
  if (*param_4 < 0x100) {
    *param_6 = 3;
    *param_5 = local_dc * 3 + 5;
  }
  else {
    if (*param_3 != (FDSelect)0x4) goto LAB_00100fec;
    *param_6 = 4;
    *param_5 = local_dc * 6 + 9;
  }
LAB_001006c2:
  uVar11 = 1;
LAB_001006c7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



/* CFF::FDSelect3_4<OT::IntType<unsigned short, 2u>, OT::IntType<unsigned char, 1u>
   >::_cmp_range(void const*, void const*) */

ulong CFF::FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>::_cmp_range
                (void *param_1,void *param_2)

{
  ulong uVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar1 = 0xffffffff;
  if ((uint)(ushort)(*param_2 << 8 | *param_2 >> 8) <= *param_1) {
    uVar1 = (ulong)((uint)(ushort)(*(ushort *)((long)param_2 + 3) << 8 |
                                  *(ushort *)((long)param_2 + 3) >> 8) <= *param_1);
  }
  return uVar1;
}



/* hb_bit_set_t::resize(unsigned int, bool, bool) */

hb_bit_set_t __thiscall
hb_bit_set_t::resize(hb_bit_set_t *this,uint param_1,bool param_2,bool param_3)

{
  hb_bit_set_t hVar1;
  void *pvVar2;
  hb_bit_set_t hVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  hVar1 = *this;
  if (hVar1 == (hb_bit_set_t)0x0) {
    return (hb_bit_set_t)0x0;
  }
  uVar4 = *(uint *)(this + 0x24);
  uVar7 = (ulong)uVar4;
  uVar5 = *(uint *)(this + 0x20);
  hVar3 = (hb_bit_set_t)(param_1 == 1 && uVar4 == 0);
  if (param_1 != 1 || uVar4 != 0) {
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    if ((int)uVar5 < 0) goto LAB_0010117c;
    hVar3 = (hb_bit_set_t)param_3;
    if (param_3) {
      uVar8 = param_1;
      if (param_1 <= uVar4) {
        uVar8 = uVar4;
      }
      if (uVar5 < uVar8) {
        if (uVar8 < 0x38e38e4) goto LAB_00101309;
      }
      else {
        if (uVar5 >> 2 <= uVar8) goto LAB_001010c3;
        if (uVar8 < 0x38e38e4) {
          pvVar2 = *(void **)(this + 0x28);
          if (uVar8 != 0) goto LAB_00101310;
          free(pvVar2);
          uVar8 = 0;
          pvVar2 = (void *)0x0;
          goto LAB_0010132c;
        }
      }
    }
    else {
      uVar8 = uVar5;
      if (param_1 <= uVar5) goto LAB_001010c3;
      do {
        uVar8 = (uVar8 >> 1) + 8 + uVar8;
      } while (uVar8 < param_1);
      if (uVar8 < 0x38e38e4) {
        pvVar2 = *(void **)(this + 0x28);
        goto LAB_00101310;
      }
    }
LAB_00101177:
    *(uint *)(this + 0x20) = ~uVar5;
    goto LAB_0010117c;
  }
  if ((int)uVar5 < 0) goto LAB_0010117c;
  if (uVar5 == 0) {
    param_1 = 1;
    uVar8 = 1;
LAB_00101309:
    pvVar2 = *(void **)(this + 0x28);
    param_3 = (bool)hVar1;
LAB_00101310:
    pvVar2 = realloc(pvVar2,(ulong)uVar8 * 0x48);
    if (pvVar2 == (void *)0x0) {
      uVar5 = *(uint *)(this + 0x20);
      if (uVar5 < uVar8) goto LAB_00101177;
    }
    else {
LAB_0010132c:
      *(void **)(this + 0x28) = pvVar2;
      *(uint *)(this + 0x20) = uVar8;
    }
    uVar7 = (ulong)*(uint *)(this + 0x24);
    hVar3 = (hb_bit_set_t)param_3;
  }
  else {
    if (7 < uVar5) {
      pvVar2 = *(void **)(this + 0x28);
      uVar8 = 1;
      param_1 = 1;
      param_3 = (bool)hVar3;
      goto LAB_00101310;
    }
    uVar7 = 0;
    param_1 = 1;
  }
LAB_001010c3:
  if (((uint)uVar7 < param_1) && (param_2)) {
    uVar4 = (param_1 - (uint)uVar7) * 0x48;
    if (uVar4 != 0) {
      memset((void *)(*(long *)(this + 0x28) + uVar7 * 0x48),0,(ulong)uVar4);
    }
  }
  uVar4 = *(uint *)(this + 0x10);
  *(uint *)(this + 0x24) = param_1;
  if (-1 < (int)uVar4) {
    if (hVar3 == (hb_bit_set_t)0x0) {
      uVar5 = uVar4;
      if (uVar4 < param_1) {
        do {
          uVar5 = (uVar5 >> 1) + 8 + uVar5;
        } while (uVar5 < param_1);
        if (uVar5 < 0x20000000) {
          pvVar2 = *(void **)(this + 0x18);
          uVar7 = (ulong)uVar5;
          goto LAB_00101374;
        }
        *(uint *)(this + 0x10) = ~uVar4;
        uVar5 = *(uint *)(this + 0x20);
        if ((int)uVar5 < 0) goto LAB_0010117c;
        uVar7 = (ulong)uVar5;
        uVar4 = 0;
        if (-1 < (int)*(uint *)(this + 0x14)) {
          uVar4 = *(uint *)(this + 0x14);
        }
        goto LAB_001011eb;
      }
    }
    else {
      uVar8 = *(uint *)(this + 0x14);
      uVar6 = (ulong)uVar8;
      uVar5 = param_1;
      if (param_1 <= uVar8) {
        uVar5 = uVar8;
      }
      uVar7 = (ulong)uVar5;
      if (uVar4 < uVar5) {
        if (0x1fffffff < uVar5) {
          *(uint *)(this + 0x10) = ~uVar4;
          uVar5 = *(uint *)(this + 0x20);
          if ((int)uVar5 < 0) goto LAB_0010117c;
          uVar6 = 0;
          if (-1 < (int)uVar8) {
            uVar6 = (ulong)uVar8;
          }
          goto LAB_00101276;
        }
        pvVar2 = *(void **)(this + 0x18);
LAB_00101374:
        uVar4 = (uint)uVar7;
        pvVar2 = realloc(pvVar2,uVar7 << 3);
        if (pvVar2 == (void *)0x0) {
          uVar5 = *(uint *)(this + 0x14);
          uVar6 = (ulong)uVar5;
          if (uVar4 <= *(uint *)(this + 0x10)) goto LAB_0010118f;
          *(uint *)(this + 0x10) = ~*(uint *)(this + 0x10);
          goto LAB_001013d3;
        }
      }
      else {
        if (uVar4 >> 2 <= uVar5) goto LAB_0010118f;
        pvVar2 = *(void **)(this + 0x18);
        if (uVar5 != 0) goto LAB_00101374;
        free(pvVar2);
        uVar4 = 0;
        pvVar2 = (void *)0x0;
      }
      *(void **)(this + 0x18) = pvVar2;
      *(uint *)(this + 0x10) = uVar4;
    }
    uVar6 = (ulong)*(uint *)(this + 0x14);
LAB_0010118f:
    if (((uint)uVar6 < param_1) && (param_2)) {
      uVar4 = (param_1 - (uint)uVar6) * 8;
      if (uVar4 != 0) {
        memset((void *)(*(long *)(this + 0x18) + uVar6 * 8),0,(ulong)uVar4);
      }
    }
    *(uint *)(this + 0x14) = param_1;
    return hVar1;
  }
  uVar5 = *(uint *)(this + 0x14);
LAB_001013d3:
  uVar4 = 0;
  if (-1 < (int)uVar5) {
    uVar4 = uVar5;
  }
  uVar6 = (ulong)uVar4;
  uVar5 = *(uint *)(this + 0x20);
  if ((int)uVar5 < 0) goto LAB_0010117c;
  uVar7 = (ulong)uVar5;
  if (hVar3 == (hb_bit_set_t)0x0) {
LAB_001011eb:
    uVar6 = uVar7;
    if (uVar5 < uVar4) {
      do {
        uVar8 = (int)uVar6 + 8 + (int)(uVar6 >> 1);
        uVar6 = (ulong)uVar8;
      } while (uVar8 < uVar4);
      goto LAB_00101200;
    }
LAB_00101234:
    uVar8 = *(uint *)(this + 0x24);
  }
  else {
LAB_00101276:
    uVar8 = *(uint *)(this + 0x24);
    uVar4 = (uint)uVar6;
    if (uVar4 <= uVar8) {
      uVar6 = (ulong)uVar8;
    }
    uVar9 = (uint)uVar6;
    if (uVar5 < uVar9) {
LAB_00101200:
      if (0x38e38e3 < (uint)uVar6) goto LAB_00101177;
      pvVar2 = *(void **)(this + 0x28);
LAB_00101211:
      uVar8 = (uint)uVar6;
      pvVar2 = realloc(pvVar2,uVar6 * 0x48);
      if (pvVar2 == (void *)0x0) {
        uVar5 = *(uint *)(this + 0x20);
        if (uVar5 < uVar8) goto LAB_00101177;
      }
      else {
LAB_0010122d:
        *(void **)(this + 0x28) = pvVar2;
        *(uint *)(this + 0x20) = uVar8;
      }
      goto LAB_00101234;
    }
    if (uVar9 < uVar5 >> 2) {
      if (0x38e38e3 < uVar9) goto LAB_00101177;
      pvVar2 = *(void **)(this + 0x28);
      if (uVar9 != 0) goto LAB_00101211;
      free(pvVar2);
      uVar8 = 0;
      pvVar2 = (void *)0x0;
      goto LAB_0010122d;
    }
  }
  if ((uVar8 < uVar4) && (param_2)) {
    uVar5 = (uVar4 - uVar8) * 0x48;
    if (uVar5 != 0) {
      memset((void *)(*(long *)(this + 0x28) + (ulong)uVar8 * 0x48),0,(ulong)uVar5);
    }
  }
  *(uint *)(this + 0x24) = uVar4;
LAB_0010117c:
  *this = (hb_bit_set_t)0x0;
  return (hb_bit_set_t)0x0;
}



/* hb_bit_set_t::next(unsigned int*) const */

undefined8 __thiscall hb_bit_set_t::next(hb_bit_set_t *this,uint *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  
  uVar3 = *param_1;
  if (uVar3 == 0xffffffff) {
    uVar3 = *(uint *)(this + 0x24);
    if (uVar3 != 0) {
      uVar8 = 0;
      do {
        piVar15 = (int *)&_hb_NullPool;
        if ((uint)uVar8 < *(uint *)(this + 0x14)) {
          piVar15 = (int *)(*(long *)(this + 0x18) + uVar8 * 8);
        }
        piVar11 = (int *)&_hb_NullPool;
        if ((uint)piVar15[1] < uVar3) {
          piVar11 = (int *)(*(long *)(this + 0x28) + (ulong)(uint)piVar15[1] * 0x48);
        }
        if (*piVar11 == -1) {
          plVar6 = (long *)(piVar11 + 2);
          do {
            if (*plVar6 != 0) goto LAB_0010164f;
            plVar6 = plVar6 + 1;
          } while (plVar6 != (long *)(piVar11 + 0x12));
        }
        else if (*piVar11 != 0) {
LAB_0010164f:
          uVar8 = 0;
          goto LAB_00101657;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    uVar7 = 0;
    uVar3 = 0xffffffff;
LAB_001016ea:
    *param_1 = uVar3;
    return uVar7;
  }
  lVar5 = *(long *)(this + 0x18);
  uVar9 = *(uint *)(this + 8);
  uVar2 = *(uint *)(this + 0x14);
  uVar16 = uVar3 >> 9;
  if (uVar9 < uVar2) {
    puVar13 = (uint *)(lVar5 + (ulong)uVar9 * 8);
    if (*puVar13 != uVar16) {
      if (-1 < (int)(uVar2 - 1)) goto LAB_00101681;
      uVar9 = 0;
      goto LAB_001016b4;
    }
    lVar14 = *(long *)(this + 0x28);
LAB_001014da:
    uVar2 = uVar3 + 1 & 0x1ff;
    if (uVar2 != 0) {
      uVar4 = (ulong)(uVar2 >> 6);
      lVar1 = lVar14 + (ulong)puVar13[1] * 0x48;
      uVar8 = -(1L << ((byte)(uVar3 + 1) & 0x3f)) & *(ulong *)(lVar1 + 8 + uVar4 * 8);
      while( true ) {
        if (uVar8 != 0) {
          iVar12 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            iVar12 = iVar12 + 1;
          }
          uVar3 = (int)uVar4 * 0x40 + iVar12;
          *param_1 = uVar3;
          *param_1 = uVar3 + *puVar13 * 0x200;
          return 1;
        }
        uVar4 = uVar4 + 1;
        if ((int)uVar4 == 8) break;
        uVar8 = *(ulong *)(lVar1 + 8 + uVar4 * 8);
      }
    }
    *param_1 = 0xffffffff;
    uVar9 = uVar9 + 1;
  }
  else {
    if ((int)(uVar2 - 1) < 0) {
      uVar9 = 0;
    }
    else {
LAB_00101681:
      iVar12 = uVar2 - 1;
      uVar9 = 0;
      do {
        while( true ) {
          uVar10 = iVar12 + uVar9 >> 1;
          uVar3 = *(uint *)(lVar5 + (ulong)uVar10 * 8);
          if ((int)(uVar16 - uVar3) < 0) break;
          uVar9 = uVar10;
          if ((uVar16 == uVar3) || (uVar9 = uVar10 + 1, iVar12 < (int)uVar9)) goto LAB_001016ab;
        }
        iVar12 = uVar10 - 1;
      } while ((int)uVar9 <= iVar12);
    }
LAB_001016ab:
    if (uVar2 <= uVar9) goto LAB_00101598;
LAB_001016b4:
    *(uint *)(this + 8) = uVar9;
    puVar13 = (uint *)(lVar5 + (ulong)uVar9 * 8);
    lVar14 = *(long *)(this + 0x28);
    if (*puVar13 == uVar16) {
      uVar3 = *param_1;
      goto LAB_001014da;
    }
  }
  if (uVar9 < *(uint *)(this + 0x14)) {
    piVar15 = (int *)(lVar5 + (ulong)uVar9 * 8);
    do {
      lVar5 = 0;
      do {
        uVar8 = *(ulong *)(lVar14 + (ulong)(uint)piVar15[1] * 0x48 + 8 + lVar5 * 8);
        if (uVar8 != 0) {
          iVar12 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            iVar12 = iVar12 + 1;
          }
          *param_1 = (int)lVar5 * 0x40 + *piVar15 * 0x200 + iVar12;
          *(uint *)(this + 8) = uVar9;
          return 1;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 8);
      uVar9 = uVar9 + 1;
      piVar15 = piVar15 + 2;
    } while (uVar9 != *(uint *)(this + 0x14));
  }
LAB_00101598:
  *param_1 = 0xffffffff;
  return 0;
LAB_00101657:
  uVar4 = *(ulong *)(piVar11 + uVar8 * 2 + 2);
  if (uVar4 != 0) {
    iVar12 = 0;
    for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
      iVar12 = iVar12 + 1;
    }
    uVar3 = (int)uVar8 * 0x40;
    uVar8 = (ulong)uVar3;
    iVar12 = uVar3 + iVar12;
LAB_0010166f:
    uVar3 = iVar12 + *piVar15 * 0x200;
    uVar7 = CONCAT71((int7)(uVar8 >> 8),uVar3 != 0xffffffff);
    goto LAB_001016ea;
  }
  uVar8 = uVar8 + 1;
  iVar12 = -1;
  if (uVar8 == 8) goto LAB_0010166f;
  goto LAB_00101657;
}



/* hb_bit_set_t::page_for(unsigned int, bool) */

long __thiscall hb_bit_set_t::page_for(hb_bit_set_t *this,uint param_1,bool param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  
  uVar9 = param_1 >> 9;
  if ((*(uint *)(this + 8) < *(uint *)(this + 0x14)) &&
     (puVar1 = (uint *)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 8) * 8), *puVar1 == uVar9))
  {
    return *(long *)(this + 0x28) + (ulong)puVar1[1] * 0x48;
  }
  uVar4 = *(uint *)(this + 0x24);
  iVar10 = *(uint *)(this + 0x14) - 1;
  if (iVar10 < 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      while( true ) {
        uVar7 = iVar10 + uVar8 >> 1;
        lVar11 = (ulong)uVar7 * 8;
        uVar3 = *(uint *)(*(long *)(this + 0x18) + (ulong)uVar7 * 8);
        if (-1 < (int)(uVar9 - uVar3)) break;
        iVar10 = uVar7 - 1;
        if (iVar10 < (int)uVar8) goto LAB_0010178c;
      }
      if (uVar9 == uVar3) goto LAB_00101825;
      uVar8 = uVar7 + 1;
    } while ((int)uVar8 <= iVar10);
  }
LAB_0010178c:
  if (param_2) {
    cVar6 = resize(this,uVar4 + 1,true,false);
    if (cVar6 != '\0') {
      lVar11 = (ulong)uVar8 * 8;
      puVar2 = (undefined4 *)(*(long *)(this + 0x28) + (ulong)uVar4 * 0x48);
      *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 6) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 0xe) = (undefined1  [16])0x0;
      lVar5 = *(long *)(this + 0x18);
      *puVar2 = 0;
      memmove((void *)(lVar5 + 8 + lVar11),(void *)(lVar5 + lVar11),
              (ulong)((~uVar8 + *(int *)(this + 0x14)) * 8));
      *(ulong *)(*(long *)(this + 0x18) + (ulong)uVar8 * 8) = CONCAT44(uVar4,uVar9);
      uVar7 = uVar8;
LAB_00101825:
      *(uint *)(this + 8) = uVar7;
      return *(long *)(this + 0x28) + (ulong)*(uint *)(*(long *)(this + 0x18) + 4 + lVar11) * 0x48;
    }
  }
  return 0;
}



/* hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t() */

void __thiscall
hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t
          (hb_sparseset_t<hb_bit_set_invertible_t> *this)

{
  long lVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  code *pcVar3;
  undefined8 uVar4;
  
  *(undefined4 *)this = 0xffff2153;
  __mutex = *(pthread_mutex_t **)(this + 8);
  if (__mutex == (pthread_mutex_t *)0x0) {
    iVar2 = *(int *)(this + 0x20);
  }
  else {
    if (*(int *)((long)__mutex + 0x2c) != 0) {
      do {
        pthread_mutex_lock(__mutex);
        iVar2 = *(int *)((long)__mutex + 0x2c);
        while( true ) {
          if (iVar2 == 0) {
            if (__mutex[1].__data.__lock != 0) {
              free(*(void **)((long)__mutex + 0x30));
            }
            __mutex[1].__align = 0;
            *(undefined8 *)((long)__mutex + 0x30) = 0;
            pthread_mutex_unlock(__mutex);
            goto LAB_0010195a;
          }
          lVar1 = *(long *)((long)__mutex + 0x30) + (ulong)(iVar2 - 1U) * 0x18;
          pcVar3 = *(code **)(lVar1 + 0x10);
          uVar4 = *(undefined8 *)(lVar1 + 8);
          *(uint *)((long)__mutex + 0x2c) = iVar2 - 1U;
          pthread_mutex_unlock(__mutex);
          if (pcVar3 == (code *)0x0) break;
          (*pcVar3)(uVar4);
          pthread_mutex_lock(__mutex);
          iVar2 = *(int *)((long)__mutex + 0x2c);
        }
      } while( true );
    }
    if (__mutex[1].__data.__lock != 0) {
      free(*(void **)((long)__mutex + 0x30));
    }
    __mutex[1].__align = 0;
    *(undefined8 *)((long)__mutex + 0x30) = 0;
LAB_0010195a:
    pthread_mutex_destroy(__mutex);
    free(__mutex);
    *(undefined8 *)(this + 8) = 0;
    iVar2 = *(int *)(this + 0x20);
  }
  if (iVar2 != 0) {
    free(*(void **)(this + 0x28));
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if ((*(int *)(this + 0x30) != 0) && (free(*(void **)(this + 0x38)), *(int *)(this + 0x20) != 0)) {
    free(*(void **)(this + 0x28));
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_hashmap_t<unsigned int, unsigned int, true>::alloc(unsigned int) */

hb_hashmap_t<unsigned_int,unsigned_int,true> __thiscall
hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
          (hb_hashmap_t<unsigned_int,unsigned_int,true> *this,uint param_1)

{
  byte bVar1;
  int *__ptr;
  long lVar2;
  char cVar3;
  void *pvVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  hb_hashmap_t<unsigned_int,unsigned_int,true> hVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  size_t __size;
  uint uVar16;
  int iVar17;
  short sVar18;
  long in_FS_OFFSET;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_40;
  
  hVar10 = this[0x10];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (hVar10 == (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
LAB_00101d53:
    hVar10 = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
  }
  else {
    if (param_1 == 0) {
      param_1 = *(uint *)(this + 0x14);
    }
    else {
      if ((param_1 >> 1) + param_1 < *(uint *)(this + 0x1c)) goto LAB_00101cbd;
      if (param_1 < *(uint *)(this + 0x14)) {
        param_1 = *(uint *)(this + 0x14);
      }
    }
    uVar14 = param_1 * 2 + 8;
    uVar9 = (ulong)uVar14;
    if (uVar14 == 0) {
      pvVar4 = malloc(0xc);
      if (pvVar4 == (void *)0x0) goto LAB_00101d4f;
      iVar17 = 0;
      sVar18 = 0;
      iVar7 = 0xc;
      __size = 0xc;
LAB_00101a99:
      pvVar4 = (void *)__memset_chk(pvVar4,0,iVar7,__size);
    }
    else {
      iVar7 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      uVar14 = iVar7 + 1;
      uVar9 = (ulong)uVar14;
      uVar16 = 1 << ((byte)uVar14 & 0x1f);
      __size = (ulong)uVar16 * 0xc;
      pvVar4 = malloc(__size);
      if (pvVar4 == (void *)0x0) {
LAB_00101d4f:
        this[0x10] = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
        goto LAB_00101d53;
      }
      sVar18 = (short)uVar14 * 2;
      iVar17 = uVar16 - 1;
      iVar7 = 0xc << ((byte)uVar14 & 0x1f);
      if (iVar7 != 0) goto LAB_00101a99;
    }
    uStack_c0 = _UNK_00101da8;
    uStack_c8 = __LC0;
    iVar7 = *(int *)(this + 0x1c);
    *(undefined8 *)(this + 0x14) = 0;
    *(int *)(this + 0x1c) = iVar17;
    __ptr = *(int **)(this + 0x28);
    uVar14 = (iVar7 + 1) - (uint)(iVar7 == 0);
    uStack_b8 = __LC1;
    uStack_b0 = _UNK_00101db8;
    uStack_a8 = __LC2;
    uStack_a0 = _UNK_00101dc8;
    uStack_98 = __LC3;
    uStack_90 = _UNK_00101dd8;
    uStack_88 = __LC4;
    uStack_80 = _UNK_00101de8;
    uStack_78 = __LC5;
    uStack_70 = _UNK_00101df8;
    uStack_68 = __LC6;
    uStack_60 = _UNK_00101e08;
    uStack_58 = __LC7;
    uStack_50 = _UNK_00101e18;
    if ((int)uVar9 == 0x20) {
      uVar8 = 0x7fffffff;
    }
    else {
      uVar8 = *(undefined4 *)((long)&uStack_c8 + uVar9 * 4);
    }
    *(undefined4 *)(this + 0x20) = uVar8;
    *(short *)(this + 0x12) = sVar18;
    *(void **)(this + 0x28) = pvVar4;
    if (uVar14 != 0) {
      piVar15 = __ptr;
      do {
        if (((*(byte *)(piVar15 + 1) & 1) != 0) &&
           (uVar16 = (uint)piVar15[1] >> 2,
           this[0x10] != (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0)) {
          uVar13 = *(uint *)(this + 0x18);
          if (*(uint *)(this + 0x1c) <= (uVar13 >> 1) + uVar13) {
            cVar3 = alloc(this,0);
            if (cVar3 == '\0') goto LAB_00101b60;
            uVar13 = *(uint *)(this + 0x18);
          }
          lVar2 = *(long *)(this + 0x28);
          iVar17 = *piVar15;
          uVar9 = (ulong)uVar16 % (ulong)*(uint *)(this + 0x20);
          iVar7 = *(int *)(this + 0x14);
          lVar5 = uVar9 * 0xc;
          piVar6 = (int *)(lVar2 + lVar5);
          bVar1 = *(byte *)(piVar6 + 1);
          if ((bVar1 & 2) == 0) {
            *piVar6 = iVar17;
            piVar6[2] = piVar15[2];
            piVar6[1] = uVar16 * 4 + 3;
            *(uint *)(this + 0x18) = uVar13 + 1;
            *(int *)(this + 0x14) = iVar7 + 1;
          }
          else {
            uVar11 = 0;
            uVar12 = 0xffffffff;
            do {
              if (*piVar6 == iVar17) {
                if (uVar12 == 0xffffffff) goto LAB_00101c1f;
                goto LAB_00101c14;
              }
              if (((bVar1 & 1) == 0) && (uVar12 == 0xffffffff)) {
                uVar12 = (uint)uVar9;
              }
              uVar11 = uVar11 + 1;
              uVar9 = (ulong)((uint)uVar9 + uVar11 & *(uint *)(this + 0x1c));
              lVar5 = uVar9 * 0xc;
              piVar6 = (int *)(lVar2 + lVar5);
              bVar1 = *(byte *)(piVar6 + 1);
            } while ((bVar1 & 2) != 0);
            if (uVar12 == 0xffffffff) {
LAB_00101cfa:
              uVar13 = uVar13 + 1;
            }
            else {
LAB_00101c14:
              lVar5 = (ulong)uVar12 * 0xc;
LAB_00101c1f:
              piVar6 = (int *)(lVar2 + lVar5);
              if ((*(byte *)(piVar6 + 1) & 2) == 0) goto LAB_00101cfa;
              iVar7 = iVar7 - (*(byte *)(piVar6 + 1) & 1);
              *(uint *)(this + 0x18) = uVar13 - 1;
              *(int *)(this + 0x14) = iVar7;
              iVar17 = *piVar15;
            }
            *piVar6 = iVar17;
            iVar17 = piVar15[2];
            piVar6[1] = uVar16 * 4 + 3;
            piVar6[2] = iVar17;
            *(uint *)(this + 0x18) = uVar13;
            *(int *)(this + 0x14) = iVar7 + 1;
            if ((*(ushort *)(this + 0x12) < uVar11) && (*(uint *)(this + 0x1c) < uVar13 << 3)) {
              alloc(this,*(uint *)(this + 0x1c) - 8);
            }
          }
        }
LAB_00101b60:
        piVar15 = piVar15 + 3;
      } while (__ptr + (ulong)uVar14 * 3 != piVar15);
    }
    free(__ptr);
  }
LAB_00101cbd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return hVar10;
}



/* WARNING: Control flow encountered bad instruction data */
/* hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t() */

void __thiscall
hb_sparseset_t<hb_bit_set_invertible_t>::~hb_sparseset_t
          (hb_sparseset_t<hb_bit_set_invertible_t> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


