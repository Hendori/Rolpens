
/* SceneCacheInterface::_remove_node_cache(ObjectID) */

void __thiscall SceneCacheInterface::_remove_node_cache(SceneCacheInterface *this,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  uint uVar84;
  uint uVar85;
  uint uVar86;
  ulong uVar87;
  ulong uVar88;
  uint *puVar89;
  uint uVar90;
  int iVar91;
  ulong uVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  ulong uVar96;
  ulong uVar97;
  ulong uVar98;
  uint uVar99;
  uint *puVar100;
  long *plVar101;
  long lVar102;
  ulong uVar103;
  uint *puVar104;
  void *pvVar105;
  ulong uVar106;
  uint uVar107;
  uint *puVar108;
  undefined8 *local_88;
  uint local_78;
  
  lVar102 = *(long *)(this + 400);
  if (lVar102 == 0) {
    return;
  }
  if (*(int *)(this + 0x1b4) == 0) {
    return;
  }
  uVar87 = (ulong)*(uint *)(this + 0x1b0);
  lVar94 = *(long *)(this + 0x198);
  uVar103 = CONCAT44(0,(&hash_table_size_primes)[uVar87]);
  lVar8 = *(long *)(hash_table_size_primes_inv + uVar87 * 8);
  uVar88 = param_2 * 0x3ffff - 1;
  uVar88 = (uVar88 ^ uVar88 >> 0x1f) * 0x15;
  uVar88 = (uVar88 ^ uVar88 >> 0xb) * 0x41;
  uVar88 = uVar88 >> 0x16 ^ uVar88;
  uVar92 = 1;
  if ((int)uVar88 != 0) {
    uVar92 = uVar88 & 0xffffffff;
  }
  uVar84 = (uint)uVar92;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar92 * lVar8;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar103;
  lVar93 = SUB168(auVar12 * auVar48,8);
  uVar86 = *(uint *)(lVar94 + lVar93 * 4);
  uVar85 = SUB164(auVar12 * auVar48,8);
  if (uVar86 == 0) {
    return;
  }
  uVar99 = 0;
  while ((uVar84 != uVar86 || (param_2 != *(long *)(*(long *)(lVar102 + lVar93 * 8) + 0x10)))) {
    uVar99 = uVar99 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(uVar85 + 1) * lVar8;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar103;
    lVar93 = SUB168(auVar13 * auVar49,8);
    uVar86 = *(uint *)(lVar94 + lVar93 * 4);
    uVar85 = SUB164(auVar13 * auVar49,8);
    if (uVar86 == 0) {
      return;
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar86 * lVar8;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar103;
    auVar15._8_8_ = 0;
    auVar15._0_8_ =
         (ulong)(((&hash_table_size_primes)[uVar87] + uVar85) - SUB164(auVar14 * auVar50,8)) * lVar8
    ;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar103;
    if (SUB164(auVar15 * auVar51,8) < uVar99) {
      return;
    }
  }
  lVar8 = *(long *)(lVar102 + (ulong)uVar85 * 8);
  uVar86 = *(uint *)(lVar8 + 0x18);
  if ((uVar86 != 0) &&
     ((lVar93 = *(long *)(this + 0x1c0), lVar93 != 0 && (*(int *)(this + 0x1e4) != 0)))) {
    uVar85 = (&hash_table_size_primes)[*(uint *)(this + 0x1e0)];
    uVar103 = CONCAT44(0,uVar85);
    uVar88 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e0) * 8);
    uVar99 = (uVar86 >> 0x10 ^ uVar86) * -0x7a143595;
    uVar99 = (uVar99 ^ uVar99 >> 0xd) * -0x3d4d51cb;
    local_78 = uVar99 ^ uVar99 >> 0x10;
    if (uVar99 == uVar99 >> 0x10) {
      local_78 = 1;
      uVar97 = uVar88;
    }
    else {
      uVar97 = local_78 * uVar88;
    }
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar103;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar97;
    uVar97 = SUB168(auVar39 * auVar75,8);
    lVar95 = *(long *)(this + 0x1c8);
    uVar96 = (ulong)SUB164(auVar39 * auVar75,8);
    uVar99 = *(uint *)(lVar95 + uVar97 * 4);
    uVar106 = (ulong)uVar99;
    if (uVar99 != 0) {
      uVar99 = 0;
LAB_0010092d:
      auVar42._8_8_ = 0;
      auVar42._0_8_ = ((int)uVar96 + 1) * uVar88;
      auVar78._8_8_ = 0;
      auVar78._0_8_ = uVar103;
      uVar98 = SUB168(auVar42 * auVar78,8);
      uVar90 = SUB164(auVar42 * auVar78,8);
      if ((local_78 != (uint)uVar106) ||
         (uVar86 != *(uint *)(*(long *)(lVar93 + uVar97 * 8) + 0x10))) goto LAB_001008f0;
      puVar108 = (uint *)(lVar95 + uVar98 * 4);
      uVar86 = *puVar108;
      if ((uVar86 != 0) &&
         (auVar43._8_8_ = 0, auVar43._0_8_ = uVar86 * uVar88, auVar79._8_8_ = 0,
         auVar79._0_8_ = uVar103, auVar44._8_8_ = 0,
         auVar44._0_8_ = ((uVar90 + uVar85) - SUB164(auVar43 * auVar79,8)) * uVar88,
         auVar80._8_8_ = 0, auVar80._0_8_ = uVar103, uVar87 = (ulong)uVar90, uVar97 = uVar96,
         SUB164(auVar44 * auVar80,8) != 0)) {
        while( true ) {
          uVar96 = uVar87;
          puVar100 = (uint *)(lVar95 + uVar97 * 4);
          *puVar108 = *puVar100;
          puVar3 = (undefined8 *)(lVar93 + uVar98 * 8);
          *puVar100 = uVar86;
          puVar4 = (undefined8 *)(lVar93 + uVar97 * 8);
          uVar11 = *puVar3;
          *puVar3 = *puVar4;
          *puVar4 = uVar11;
          auVar47._8_8_ = 0;
          auVar47._0_8_ = ((int)uVar96 + 1) * uVar88;
          auVar83._8_8_ = 0;
          auVar83._0_8_ = uVar103;
          uVar98 = SUB168(auVar47 * auVar83,8);
          puVar108 = (uint *)(lVar95 + uVar98 * 4);
          uVar86 = *puVar108;
          if ((uVar86 == 0) ||
             (auVar45._8_8_ = 0, auVar45._0_8_ = uVar86 * uVar88, auVar81._8_8_ = 0,
             auVar81._0_8_ = uVar103, auVar46._8_8_ = 0,
             auVar46._0_8_ =
                  ((SUB164(auVar47 * auVar83,8) + uVar85) - SUB164(auVar45 * auVar81,8)) * uVar88,
             auVar82._8_8_ = 0, auVar82._0_8_ = uVar103, SUB164(auVar46 * auVar82,8) == 0)) break;
          uVar87 = uVar98 & 0xffffffff;
          uVar97 = uVar96;
        }
      }
      plVar5 = (long *)(lVar93 + uVar96 * 8);
      *(undefined4 *)(lVar95 + uVar96 * 4) = 0;
      plVar101 = (long *)*plVar5;
      if (*(long **)(this + 0x1d0) == plVar101) {
        *(long *)(this + 0x1d0) = *plVar101;
        plVar101 = (long *)*plVar5;
      }
      if (*(long **)(this + 0x1d8) == plVar101) {
        *(long *)(this + 0x1d8) = plVar101[1];
        plVar101 = (long *)*plVar5;
      }
      if ((long *)plVar101[1] != (long *)0x0) {
        *(long *)plVar101[1] = *plVar101;
        plVar101 = (long *)*plVar5;
      }
      if (*plVar101 != 0) {
        *(long *)(*plVar101 + 8) = plVar101[1];
        plVar101 = (long *)*plVar5;
      }
      Memory::free_static(plVar101,false);
      *(undefined8 *)(*(long *)(this + 0x1c0) + uVar96 * 8) = 0;
      *(int *)(this + 0x1e4) = *(int *)(this + 0x1e4) + -1;
      for (local_88 = *(undefined8 **)(lVar8 + 0x68); local_88 != (undefined8 *)0x0;
          local_88 = (undefined8 *)*local_88) {
LAB_00100160:
        uVar86 = *(uint *)(local_88 + 2);
        lVar102 = *(long *)(this + 0x1f0);
        if ((lVar102 != 0) && (*(int *)(this + 0x214) != 0)) {
          uVar88 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
          uVar85 = (uVar86 >> 0x10 ^ uVar86) * -0x7a143595;
          uVar85 = (uVar85 ^ uVar85 >> 0xd) * -0x3d4d51cb;
          uVar99 = uVar85 ^ uVar85 >> 0x10;
          if (uVar85 == uVar85 >> 0x10) {
            uVar99 = 1;
            uVar87 = uVar88;
          }
          else {
            uVar87 = uVar99 * uVar88;
          }
          uVar103 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x210)]);
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar103;
          auVar52._8_8_ = 0;
          auVar52._0_8_ = uVar87;
          lVar94 = SUB168(auVar16 * auVar52,8);
          uVar90 = SUB164(auVar16 * auVar52,8);
          uVar85 = *(uint *)(*(long *)(this + 0x1f8) + lVar94 * 4);
          if (uVar85 != 0) {
            uVar107 = 0;
            do {
              if ((uVar99 == uVar85) &&
                 (uVar86 == *(uint *)(*(long *)(lVar102 + lVar94 * 8) + 0x10))) {
                lVar102 = *(long *)(lVar102 + (ulong)uVar90 * 8);
                lVar94 = *(long *)(lVar102 + 0x48);
                if ((lVar94 == 0) || (*(int *)(lVar102 + 0x6c) == 0)) goto LAB_00100480;
                lVar8 = *(long *)(lVar102 + 0x60);
                uVar86 = (&hash_table_size_primes)[*(uint *)(lVar102 + 0x68)];
                uVar88 = CONCAT44(0,uVar86);
                lVar93 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar102 + 0x68) * 8
                                  );
                auVar20._8_8_ = 0;
                auVar20._0_8_ = uVar92 * lVar93;
                auVar56._8_8_ = 0;
                auVar56._0_8_ = uVar88;
                lVar95 = SUB168(auVar20 * auVar56,8);
                uVar85 = *(uint *)(lVar8 + lVar95 * 4);
                iVar91 = SUB164(auVar20 * auVar56,8);
                if (uVar85 == 0) goto LAB_00100480;
                uVar99 = 0;
                goto LAB_0010032a;
              }
              uVar107 = uVar107 + 1;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = (uVar90 + 1) * uVar88;
              auVar53._8_8_ = 0;
              auVar53._0_8_ = uVar103;
              lVar94 = SUB168(auVar17 * auVar53,8);
              uVar85 = *(uint *)(*(long *)(this + 0x1f8) + lVar94 * 4);
              uVar90 = SUB164(auVar17 * auVar53,8);
            } while ((uVar85 != 0) &&
                    (auVar18._8_8_ = 0, auVar18._0_8_ = uVar85 * uVar88, auVar54._8_8_ = 0,
                    auVar54._0_8_ = uVar103, auVar19._8_8_ = 0,
                    auVar19._0_8_ =
                         (((&hash_table_size_primes)[*(uint *)(this + 0x210)] + uVar90) -
                         SUB164(auVar18 * auVar54,8)) * uVar88, auVar55._8_8_ = 0,
                    auVar55._0_8_ = uVar103, uVar107 <= SUB164(auVar19 * auVar55,8)));
          }
        }
        _err_print_error("_remove_node_cache","modules/multiplayer/scene_cache_interface.cpp",0x43,
                         "Condition \"!pinfo\" is true. Continuing.",0,0);
LAB_00100480:
      }
      lVar102 = *(long *)(this + 400);
      if (lVar102 == 0) {
        return;
      }
      if (*(int *)(this + 0x1b4) == 0) {
        return;
      }
      uVar87 = (ulong)*(uint *)(this + 0x1b0);
      lVar94 = *(long *)(this + 0x198);
      goto LAB_001004cb;
    }
  }
LAB_00100149:
  local_88 = *(undefined8 **)(lVar8 + 0x68);
  if (local_88 != (undefined8 *)0x0) goto LAB_00100160;
LAB_001004cb:
  uVar86 = (&hash_table_size_primes)[uVar87];
  uVar103 = CONCAT44(0,uVar86);
  lVar8 = *(long *)(hash_table_size_primes_inv + uVar87 * 8);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar92 * lVar8;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = uVar103;
  uVar88 = SUB168(auVar30 * auVar66,8);
  uVar85 = *(uint *)(lVar94 + uVar88 * 4);
  uVar87 = (ulong)SUB164(auVar30 * auVar66,8);
  if (uVar85 != 0) {
    uVar99 = 0;
    do {
      auVar33._8_8_ = 0;
      auVar33._0_8_ = (ulong)((int)uVar87 + 1) * lVar8;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = uVar103;
      uVar92 = SUB168(auVar33 * auVar69,8);
      uVar90 = SUB164(auVar33 * auVar69,8);
      if ((uVar84 == uVar85) && (param_2 == *(long *)(*(long *)(lVar102 + uVar88 * 8) + 0x10))) {
        puVar108 = (uint *)(lVar94 + uVar92 * 4);
        uVar88 = (ulong)*puVar108;
        if ((*puVar108 != 0) &&
           (auVar34._8_8_ = 0, auVar34._0_8_ = uVar88 * lVar8, auVar70._8_8_ = 0,
           auVar70._0_8_ = uVar103, auVar35._8_8_ = 0,
           auVar35._0_8_ = (ulong)((uVar90 + uVar86) - SUB164(auVar34 * auVar70,8)) * lVar8,
           auVar71._8_8_ = 0, auVar71._0_8_ = uVar103, uVar97 = (ulong)uVar90,
           SUB164(auVar35 * auVar71,8) != 0)) {
          while( true ) {
            puVar100 = (uint *)(lVar94 + uVar87 * 4);
            *puVar108 = *puVar100;
            puVar3 = (undefined8 *)(lVar102 + uVar92 * 8);
            *puVar100 = (uint)uVar88;
            puVar4 = (undefined8 *)(lVar102 + uVar87 * 8);
            uVar11 = *puVar3;
            *puVar3 = *puVar4;
            *puVar4 = uVar11;
            auVar38._8_8_ = 0;
            auVar38._0_8_ = (ulong)((int)uVar97 + 1) * lVar8;
            auVar74._8_8_ = 0;
            auVar74._0_8_ = uVar103;
            uVar92 = SUB168(auVar38 * auVar74,8);
            puVar108 = (uint *)(lVar94 + uVar92 * 4);
            uVar88 = (ulong)*puVar108;
            uVar87 = uVar97;
            if ((*puVar108 == 0) ||
               (auVar36._8_8_ = 0, auVar36._0_8_ = uVar88 * lVar8, auVar72._8_8_ = 0,
               auVar72._0_8_ = uVar103, auVar37._8_8_ = 0,
               auVar37._0_8_ =
                    (ulong)((SUB164(auVar38 * auVar74,8) + uVar86) - SUB164(auVar36 * auVar72,8)) *
                    lVar8, auVar73._8_8_ = 0, auVar73._0_8_ = uVar103,
               SUB164(auVar37 * auVar73,8) == 0)) break;
            uVar97 = uVar92 & 0xffffffff;
          }
        }
        plVar5 = (long *)(lVar102 + uVar87 * 8);
        *(undefined4 *)(lVar94 + uVar87 * 4) = 0;
        plVar101 = (long *)*plVar5;
        if (*(long **)(this + 0x1a0) == plVar101) {
          *(long *)(this + 0x1a0) = *plVar101;
          plVar101 = (long *)*plVar5;
        }
        if (*(long **)(this + 0x1a8) == plVar101) {
          *(long *)(this + 0x1a8) = plVar101[1];
          plVar101 = (long *)*plVar5;
        }
        if ((long *)plVar101[1] != (long *)0x0) {
          *(long *)plVar101[1] = *plVar101;
          plVar101 = (long *)*plVar5;
        }
        if (*plVar101 != 0) {
          *(long *)(*plVar101 + 8) = plVar101[1];
          plVar101 = (long *)*plVar5;
        }
        pvVar105 = (void *)plVar101[0xb];
        if (pvVar105 != (void *)0x0) {
          if (*(int *)((long)plVar101 + 0x7c) != 0) {
            uVar86 = (&hash_table_size_primes)[*(uint *)(plVar101 + 0xf)];
            if (uVar86 == 0) {
              *(undefined4 *)((long)plVar101 + 0x7c) = 0;
              *(undefined1 (*) [16])(plVar101 + 0xd) = (undefined1  [16])0x0;
            }
            else {
              lVar102 = 0;
              do {
                if (*(int *)(plVar101[0xc] + lVar102) != 0) {
                  *(int *)(plVar101[0xc] + lVar102) = 0;
                  Memory::free_static(*(void **)((long)pvVar105 + lVar102 * 2),false);
                  pvVar105 = (void *)plVar101[0xb];
                  *(undefined8 *)((long)pvVar105 + lVar102 * 2) = 0;
                }
                lVar102 = lVar102 + 4;
              } while (lVar102 != (ulong)uVar86 * 4);
              *(undefined4 *)((long)plVar101 + 0x7c) = 0;
              *(undefined1 (*) [16])(plVar101 + 0xd) = (undefined1  [16])0x0;
              if (pvVar105 == (void *)0x0) goto LAB_001006f3;
            }
          }
          Memory::free_static(pvVar105,false);
          Memory::free_static((void *)plVar101[0xc],false);
        }
LAB_001006f3:
        pvVar105 = (void *)plVar101[5];
        if (pvVar105 != (void *)0x0) {
          if (*(int *)((long)plVar101 + 0x4c) != 0) {
            uVar86 = (&hash_table_size_primes)[*(uint *)(plVar101 + 9)];
            if (uVar86 == 0) {
              *(undefined4 *)((long)plVar101 + 0x4c) = 0;
              *(undefined1 (*) [16])(plVar101 + 7) = (undefined1  [16])0x0;
            }
            else {
              lVar102 = 0;
              do {
                if (*(int *)(plVar101[6] + lVar102) != 0) {
                  *(int *)(plVar101[6] + lVar102) = 0;
                  Memory::free_static(*(void **)((long)pvVar105 + lVar102 * 2),false);
                  pvVar105 = (void *)plVar101[5];
                  *(undefined8 *)((long)pvVar105 + lVar102 * 2) = 0;
                }
                lVar102 = lVar102 + 4;
              } while (lVar102 != (ulong)uVar86 * 4);
              *(undefined4 *)((long)plVar101 + 0x4c) = 0;
              *(undefined1 (*) [16])(plVar101 + 7) = (undefined1  [16])0x0;
              if (pvVar105 == (void *)0x0) goto LAB_00100777;
            }
          }
          Memory::free_static(pvVar105,false);
          Memory::free_static((void *)plVar101[6],false);
        }
LAB_00100777:
        Memory::free_static(plVar101,false);
        *(undefined8 *)(*(long *)(this + 400) + uVar87 * 8) = 0;
        *(int *)(this + 0x1b4) = *(int *)(this + 0x1b4) + -1;
        return;
      }
      uVar85 = *(uint *)(lVar94 + uVar92 * 4);
      uVar87 = uVar92 & 0xffffffff;
      uVar99 = uVar99 + 1;
    } while ((uVar85 != 0) &&
            (auVar31._8_8_ = 0, auVar31._0_8_ = (ulong)uVar85 * lVar8, auVar67._8_8_ = 0,
            auVar67._0_8_ = uVar103, auVar32._8_8_ = 0,
            auVar32._0_8_ = (ulong)((uVar86 + uVar90) - SUB164(auVar31 * auVar67,8)) * lVar8,
            auVar68._8_8_ = 0, auVar68._0_8_ = uVar103, uVar88 = uVar92,
            uVar99 <= SUB164(auVar32 * auVar68,8)));
  }
  return;
LAB_001008f0:
  uVar107 = *(uint *)(lVar95 + uVar98 * 4);
  uVar106 = (ulong)uVar107;
  uVar96 = uVar98 & 0xffffffff;
  uVar99 = uVar99 + 1;
  if ((uVar107 == 0) ||
     (auVar40._8_8_ = 0, auVar40._0_8_ = uVar106 * uVar88, auVar76._8_8_ = 0,
     auVar76._0_8_ = uVar103, auVar41._8_8_ = 0,
     auVar41._0_8_ = ((uVar85 + uVar90) - SUB164(auVar40 * auVar76,8)) * uVar88, auVar77._8_8_ = 0,
     auVar77._0_8_ = uVar103, uVar97 = uVar98, SUB164(auVar41 * auVar77,8) < uVar99))
  goto LAB_00100149;
  goto LAB_0010092d;
LAB_0010032a:
  if (uVar84 != uVar85) goto LAB_001002e0;
  lVar9 = *(long *)(lVar102 + 0x50);
  uVar85 = *(uint *)(lVar9 + lVar95 * 4);
  uVar87 = (ulong)uVar85;
  if (param_2 != *(long *)(lVar94 + uVar87 * 8)) goto LAB_001002e0;
  lVar10 = *(long *)(lVar102 + 0x58);
  puVar108 = (uint *)(lVar10 + uVar87 * 4);
  uVar99 = *puVar108;
  uVar103 = (ulong)uVar99;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = (ulong)(uVar99 + 1) * lVar93;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar88;
  lVar95 = SUB168(auVar24 * auVar60,8) * 4;
  uVar90 = SUB164(auVar24 * auVar60,8);
  uVar97 = (ulong)uVar90;
  puVar100 = (uint *)(lVar8 + lVar95);
  if ((*puVar100 == 0) ||
     (auVar25._8_8_ = 0, auVar25._0_8_ = (ulong)*puVar100 * lVar93, auVar61._8_8_ = 0,
     auVar61._0_8_ = uVar88, auVar26._8_8_ = 0,
     auVar26._0_8_ = (ulong)((uVar90 + uVar86) - SUB164(auVar25 * auVar61,8)) * lVar93,
     auVar62._8_8_ = 0, auVar62._0_8_ = uVar88, SUB164(auVar26 * auVar62,8) == 0)) {
    uVar97 = (ulong)uVar99;
  }
  else {
    while( true ) {
      puVar89 = (uint *)(lVar95 + lVar9);
      puVar6 = (uint *)(lVar9 + uVar103 * 4);
      puVar104 = (uint *)(uVar103 * 4 + lVar8);
      puVar1 = (undefined4 *)(lVar10 + (ulong)*puVar89 * 4);
      puVar2 = (undefined4 *)(lVar10 + (ulong)*puVar6 * 4);
      uVar7 = *puVar2;
      *puVar2 = *puVar1;
      *puVar1 = uVar7;
      uVar99 = *puVar100;
      *puVar100 = *puVar104;
      *puVar104 = uVar99;
      uVar99 = *puVar89;
      *puVar89 = *puVar6;
      *puVar6 = uVar99;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = (ulong)((int)uVar97 + 1) * lVar93;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = uVar88;
      uVar96 = SUB168(auVar29 * auVar65,8);
      lVar95 = uVar96 * 4;
      puVar100 = (uint *)(lVar8 + lVar95);
      if ((*puVar100 == 0) ||
         (auVar27._8_8_ = 0, auVar27._0_8_ = (ulong)*puVar100 * lVar93, auVar63._8_8_ = 0,
         auVar63._0_8_ = uVar88, auVar28._8_8_ = 0,
         auVar28._0_8_ =
              (ulong)((SUB164(auVar29 * auVar65,8) + uVar86) - SUB164(auVar27 * auVar63,8)) * lVar93
         , auVar64._8_8_ = 0, auVar64._0_8_ = uVar88, SUB164(auVar28 * auVar64,8) == 0)) break;
      uVar103 = uVar97;
      uVar97 = uVar96 & 0xffffffff;
    }
  }
  *(undefined4 *)(lVar8 + uVar97 * 4) = 0;
  uVar86 = *(int *)(lVar102 + 0x6c) - 1;
  *(uint *)(lVar102 + 0x6c) = uVar86;
  if (uVar85 < uVar86) {
    uVar99 = *(uint *)(lVar10 + (ulong)uVar86 * 4);
    *(undefined8 *)(lVar94 + uVar87 * 8) = *(undefined8 *)(lVar94 + (ulong)uVar86 * 8);
    *puVar108 = uVar99;
    *(uint *)(lVar9 + (ulong)*(uint *)(lVar10 + (ulong)*(uint *)(lVar102 + 0x6c) * 4) * 4) = uVar85;
  }
  goto LAB_00100480;
LAB_001002e0:
  uVar99 = uVar99 + 1;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = (ulong)(iVar91 + 1) * lVar93;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar88;
  lVar95 = SUB168(auVar21 * auVar57,8);
  uVar85 = *(uint *)(lVar8 + lVar95 * 4);
  iVar91 = SUB164(auVar21 * auVar57,8);
  if ((uVar85 == 0) ||
     (auVar22._8_8_ = 0, auVar22._0_8_ = (ulong)uVar85 * lVar93, auVar58._8_8_ = 0,
     auVar58._0_8_ = uVar88, auVar23._8_8_ = 0,
     auVar23._0_8_ = (ulong)((uVar86 + iVar91) - SUB164(auVar22 * auVar58,8)) * lVar93,
     auVar59._8_8_ = 0, auVar59._0_8_ = uVar88, SUB164(auVar23 * auVar59,8) < uVar99))
  goto LAB_00100480;
  goto LAB_0010032a;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = __n;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* SceneCacheInterface::process_confirm_path(int, unsigned char const*, int) */

void __thiscall
SceneCacheInterface::process_confirm_path
          (SceneCacheInterface *this,int param_1,uchar *param_2,int param_3)

{
  long *plVar1;
  NodePath *pNVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  char cVar27;
  NodePath NVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  ulong *puVar32;
  char *pcVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  uint uVar38;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint uVar43;
  long in_FS_OFFSET;
  bool bVar44;
  NodePath local_58 [8];
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 6) {
    pNVar2 = *(NodePath **)(SceneTree::singleton + 0x368);
    SceneMultiplayer::get_root_path();
    uVar42 = 0;
    lVar30 = Node::get_node(pNVar2);
    NodePath::~NodePath((NodePath *)&local_48);
    lVar34 = 0;
    if (lVar30 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar37 = 0x92;
        pcVar33 = "Parameter \"root_node\" is null.";
        goto LAB_0010115e;
      }
      goto LAB_001012c5;
    }
    do {
      lVar30 = lVar34 + 2;
      cVar27 = (char)lVar34;
      lVar34 = lVar34 + 1;
      uVar42 = uVar42 | (uint)param_2[lVar30] << (cVar27 * '\b' & 0x1fU);
    } while (lVar34 != 4);
    lVar30 = *(long *)(this + 0x1c0);
    if ((lVar30 != 0) && (*(int *)(this + 0x1e4) != 0)) {
      uVar39 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x1e0)]);
      uVar31 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e0) * 8);
      uVar29 = (uVar42 >> 0x10 ^ uVar42) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar43 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar43 = 1;
        uVar41 = uVar31;
      }
      else {
        uVar41 = uVar43 * uVar31;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar39;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar41;
      lVar34 = SUB168(auVar3 * auVar15,8);
      uVar29 = *(uint *)(*(long *)(this + 0x1c8) + lVar34 * 4);
      uVar38 = SUB164(auVar3 * auVar15,8);
      if (uVar29 != 0) {
        uVar40 = 0;
        do {
          if ((uVar29 == uVar43) && (uVar42 == *(uint *)(*(long *)(lVar30 + lVar34 * 8) + 0x10))) {
            lVar30 = *(long *)(lVar30 + (ulong)uVar38 * 8);
            uVar31 = *(ulong *)(lVar30 + 0x18);
            if (param_2[1] != '\0') goto LAB_00100eda;
            uVar42 = (uint)uVar31 & 0xffffff;
            if (uVar42 < (uint)ObjectDB::slot_max) goto LAB_00100de0;
            _err_print_error("get_instance","./core/object/object.h",0x418,
                             "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
            goto LAB_00101288;
          }
          uVar40 = uVar40 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (uVar38 + 1) * uVar31;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar39;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar29 = *(uint *)(*(long *)(this + 0x1c8) + lVar34 * 4);
          uVar38 = SUB164(auVar4 * auVar16,8);
        } while ((uVar29 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = uVar29 * uVar31, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar39, auVar6._8_8_ = 0,
                auVar6._0_8_ = (((&hash_table_size_primes)[*(uint *)(this + 0x1e0)] + uVar38) -
                               SUB164(auVar5 * auVar17,8)) * uVar31, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar39, uVar40 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  else {
    _err_print_error("process_confirm_path","modules/multiplayer/scene_cache_interface.cpp",0x90,
                     "Condition \"p_packet_len != 6\" is true.",
                     "Invalid packet received. Size too small.",0,0);
  }
  goto LAB_001010e4;
LAB_00100de0:
  while( true ) {
    local_48 = local_48 & 0xffffffffffffff00;
    LOCK();
    bVar44 = ObjectDB::spin_lock._0_1_ == (NodePath)0x0;
    NVar28 = ObjectDB::spin_lock._0_1_;
    if (bVar44) {
      ObjectDB::spin_lock._0_1_ = (NodePath)0x1;
      NVar28 = (NodePath)0x0;
    }
    UNLOCK();
    if (bVar44) break;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_48._0_1_ = NVar28;
    do {
    } while (ObjectDB::spin_lock._0_1_ != (NodePath)0x0);
  }
  puVar32 = (ulong *)((ulong)uVar42 * 0x10 + ObjectDB::object_slots);
  if ((uVar31 >> 0x18 & 0x7fffffffff) == (*puVar32 & 0x7fffffffff)) {
    uVar31 = puVar32[1];
    ObjectDB::spin_lock._0_1_ = (NodePath)0x0;
    if ((uVar31 != 0) &&
       (lVar34 = __dynamic_cast(uVar31,&Object::typeinfo,&Node::typeinfo,0), lVar34 != 0)) {
      Node::get_path();
      NodePath::operator_cast_to_String((NodePath *)&local_50);
      operator+((char *)&local_48,
                (String_conflict *)
                "The rpc node checksum failed. Make sure to have the same methods on both nodes. Node path: "
               );
      _err_print_error("process_confirm_path","modules/multiplayer/scene_cache_interface.cpp",0x9f,
                       (NodePath *)&local_48,0,0);
      uVar31 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(uVar31 - 0x10),false);
        }
      }
      lVar34 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar34 + -0x10),false);
        }
      }
      NodePath::~NodePath(local_58);
LAB_00100eda:
      lVar30 = *(long *)(lVar30 + 0x18);
      lVar34 = *(long *)(this + 400);
      if ((lVar34 != 0) && (*(int *)(this + 0x1b4) != 0)) {
        uVar39 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x1b0)]);
        lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b0) * 8);
        uVar31 = lVar30 * 0x3ffff - 1;
        uVar31 = (uVar31 ^ uVar31 >> 0x1f) * 0x15;
        uVar31 = (uVar31 ^ uVar31 >> 0xb) * 0x41;
        uVar31 = uVar31 >> 0x16 ^ uVar31;
        uVar41 = uVar31 & 0xffffffff;
        if ((int)uVar31 == 0) {
          uVar41 = 1;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar41 * lVar36;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar39;
        lVar35 = SUB168(auVar7 * auVar19,8);
        uVar42 = *(uint *)(*(long *)(this + 0x198) + lVar35 * 4);
        uVar29 = SUB164(auVar7 * auVar19,8);
        if (uVar42 != 0) {
          uVar43 = 0;
          do {
            if (((uint)uVar41 == uVar42) &&
               (lVar30 == *(long *)(*(long *)(lVar34 + lVar35 * 8) + 0x10))) {
              lVar30 = *(long *)(lVar34 + (ulong)uVar29 * 8);
              lVar34 = *(long *)(lVar30 + 0x58);
              if ((lVar34 == 0) || (*(int *)(lVar30 + 0x7c) == 0)) goto LAB_00101180;
              uVar39 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(lVar30 + 0x78)]);
              uVar31 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar30 + 0x78) * 8);
              uVar42 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
              uVar42 = (uVar42 ^ uVar42 >> 0xd) * -0x3d4d51cb;
              uVar29 = uVar42 ^ uVar42 >> 0x10;
              if (uVar42 == uVar42 >> 0x10) {
                uVar29 = 1;
                uVar41 = uVar31;
              }
              else {
                uVar41 = uVar29 * uVar31;
              }
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar39;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = uVar41;
              lVar36 = SUB168(auVar11 * auVar23,8);
              uVar42 = *(uint *)(*(long *)(lVar30 + 0x60) + lVar36 * 4);
              uVar43 = SUB164(auVar11 * auVar23,8);
              if (uVar42 == 0) goto LAB_00101180;
              uVar38 = 0;
              goto LAB_001010cd;
            }
            uVar43 = uVar43 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(uVar29 + 1) * lVar36;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar39;
            lVar35 = SUB168(auVar8 * auVar20,8);
            uVar42 = *(uint *)(*(long *)(this + 0x198) + lVar35 * 4);
            uVar29 = SUB164(auVar8 * auVar20,8);
          } while ((uVar42 != 0) &&
                  (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar42 * lVar36, auVar21._8_8_ = 0,
                  auVar21._0_8_ = uVar39, auVar10._8_8_ = 0,
                  auVar10._0_8_ =
                       (ulong)(((&hash_table_size_primes)[*(uint *)(this + 0x1b0)] + uVar29) -
                              SUB164(auVar9 * auVar21,8)) * lVar36, auVar22._8_8_ = 0,
                  auVar22._0_8_ = uVar39, uVar43 <= SUB164(auVar10 * auVar22,8)));
        }
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001012c5;
      uVar37 = 0xa3;
      pcVar33 = "Parameter \"cache\" is null.";
      goto LAB_0010115e;
    }
  }
  else {
    ObjectDB::spin_lock._0_1_ = (NodePath)0x0;
  }
LAB_00101288:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar37 = 0x9e;
    pcVar33 = "Parameter \"node\" is null.";
LAB_0010115e:
    _err_print_error("process_confirm_path","modules/multiplayer/scene_cache_interface.cpp",uVar37,
                     pcVar33,0,0);
    return;
  }
  goto LAB_001012c5;
  while( true ) {
    uVar38 = uVar38 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (uVar43 + 1) * uVar31;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar39;
    lVar36 = SUB168(auVar12 * auVar24,8);
    uVar42 = *(uint *)(*(long *)(lVar30 + 0x60) + lVar36 * 4);
    uVar43 = SUB164(auVar12 * auVar24,8);
    if ((uVar42 == 0) ||
       (auVar13._8_8_ = 0, auVar13._0_8_ = uVar42 * uVar31, auVar25._8_8_ = 0,
       auVar25._0_8_ = uVar39, auVar14._8_8_ = 0,
       auVar14._0_8_ =
            (((&hash_table_size_primes)[*(uint *)(lVar30 + 0x78)] + uVar43) -
            SUB164(auVar13 * auVar25,8)) * uVar31, auVar26._8_8_ = 0, auVar26._0_8_ = uVar39,
       SUB164(auVar14 * auVar26,8) < uVar38)) break;
LAB_001010cd:
    if ((uVar42 == uVar29) && (*(int *)(*(long *)(lVar34 + lVar36 * 8) + 0x10) == param_1)) {
      *(undefined1 *)(*(long *)(lVar34 + (ulong)uVar43 * 8) + 0x14) = 1;
      goto LAB_001010e4;
    }
  }
LAB_00101180:
  _err_print_error("process_confirm_path","modules/multiplayer/scene_cache_interface.cpp",0xa6,
                   "Parameter \"confirmed\" is null.",
                   "Invalid packet received. Tries to confirm a node which was not requested.",0,0);
LAB_001010e4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001012c5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneCacheInterface::is_cache_confirmed(Node*, int) */

undefined1 __thiscall
SceneCacheInterface::is_cache_confirmed(SceneCacheInterface *this,Node *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  
  if (param_1 == (Node *)0x0) {
    _err_print_error("is_cache_confirmed","modules/multiplayer/scene_cache_interface.cpp",0xd2,
                     "Parameter \"p_node\" is null.",0,0);
  }
  else {
    lVar1 = *(long *)(this + 400);
    if ((lVar1 != 0) && (*(int *)(this + 0x1b4) != 0)) {
      uVar22 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x1b0)]);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b0) * 8);
      uVar20 = *(long *)(param_1 + 0x60) * 0x3ffff - 1;
      uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
      uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
      uVar20 = uVar20 >> 0x16 ^ uVar20;
      uVar24 = uVar20 & 0xffffffff;
      if ((int)uVar20 == 0) {
        uVar24 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar24 * lVar2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar22;
      lVar21 = SUB168(auVar3 * auVar11,8);
      uVar19 = *(uint *)(*(long *)(this + 0x198) + lVar21 * 4);
      uVar23 = SUB164(auVar3 * auVar11,8);
      if (uVar19 != 0) {
        uVar26 = 0;
        while (((uint)uVar24 != uVar19 ||
               (*(long *)(param_1 + 0x60) != *(long *)(*(long *)(lVar1 + lVar21 * 8) + 0x10)))) {
          uVar26 = uVar26 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar23 + 1) * lVar2;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar22;
          lVar21 = SUB168(auVar4 * auVar12,8);
          uVar19 = *(uint *)(*(long *)(this + 0x198) + lVar21 * 4);
          uVar23 = SUB164(auVar4 * auVar12,8);
          if (uVar19 == 0) {
            return 0;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar19 * lVar2;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar22;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(((&hash_table_size_primes)[*(uint *)(this + 0x1b0)] + uVar23) -
                                SUB164(auVar5 * auVar13,8)) * lVar2;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar22;
          if (SUB164(auVar6 * auVar14,8) < uVar26) {
            return 0;
          }
        }
        lVar1 = *(long *)(lVar1 + (ulong)uVar23 * 8);
        lVar2 = *(long *)(lVar1 + 0x58);
        if ((lVar2 != 0) && (*(int *)(lVar1 + 0x7c) != 0)) {
          uVar24 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(lVar1 + 0x78)]);
          uVar20 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar1 + 0x78) * 8);
          uVar19 = ((uint)param_2 >> 0x10 ^ param_2) * -0x7a143595;
          uVar19 = (uVar19 ^ uVar19 >> 0xd) * -0x3d4d51cb;
          uVar23 = uVar19 ^ uVar19 >> 0x10;
          if (uVar19 == uVar19 >> 0x10) {
            uVar23 = 1;
            uVar22 = uVar20;
          }
          else {
            uVar22 = uVar23 * uVar20;
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar24;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar22;
          lVar21 = SUB168(auVar7 * auVar15,8);
          uVar19 = *(uint *)(*(long *)(lVar1 + 0x60) + lVar21 * 4);
          uVar26 = SUB164(auVar7 * auVar15,8);
          if (uVar19 != 0) {
            uVar25 = 0;
            do {
              if ((uVar23 == uVar19) && (*(int *)(*(long *)(lVar2 + lVar21 * 8) + 0x10) == param_2))
              {
                return *(undefined1 *)(*(long *)(lVar2 + (ulong)uVar26 * 8) + 0x14);
              }
              uVar25 = uVar25 + 1;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (uVar26 + 1) * uVar20;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar24;
              lVar21 = SUB168(auVar8 * auVar16,8);
              uVar19 = *(uint *)(*(long *)(lVar1 + 0x60) + lVar21 * 4);
              uVar26 = SUB164(auVar8 * auVar16,8);
            } while ((uVar19 != 0) &&
                    (auVar9._8_8_ = 0, auVar9._0_8_ = uVar19 * uVar20, auVar17._8_8_ = 0,
                    auVar17._0_8_ = uVar24, auVar10._8_8_ = 0,
                    auVar10._0_8_ =
                         (((&hash_table_size_primes)[*(uint *)(lVar1 + 0x78)] + uVar26) -
                         SUB164(auVar9 * auVar17,8)) * uVar20, auVar18._8_8_ = 0,
                    auVar18._0_8_ = uVar24, uVar25 <= SUB164(auVar10 * auVar18,8)));
          }
        }
      }
    }
  }
  return 0;
}



/* SceneCacheInterface::clear() */

void __thiscall SceneCacheInterface::clear(SceneCacheInterface *this)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  ulong *puVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  SceneCacheInterface local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar2 = *(undefined8 **)(this + 0x1a0); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    uVar7 = (uint)puVar2[2] & 0xffffff;
    if (uVar7 < (uint)ObjectDB::slot_max) {
      while( true ) {
        local_58[0] = (SceneCacheInterface)0x0;
        LOCK();
        bVar12 = (char)ObjectDB::spin_lock == '\0';
        if (bVar12) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar12) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
      if (((ulong)puVar2[2] >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
        ObjectDB::spin_lock._0_1_ = '\0';
        goto LAB_00101b46;
      }
      plVar3 = (long *)puVar8[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (plVar3 == (long *)0x0) goto LAB_00101b46;
      pcVar4 = *(code **)(*plVar3 + 0x110);
      create_custom_callable_function_pointer<SceneCacheInterface,ObjectID>
                (local_58,(char *)this,
                 (_func_void_ObjectID *)"&SceneCacheInterface::_remove_node_cache");
      (*pcVar4)(plVar3,SceneStringNames::singleton + 0x48,local_58);
      Callable::~Callable((Callable *)local_58);
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00101b46:
      _err_print_error("clear","modules/multiplayer/scene_cache_interface.cpp",300,
                       "Condition \"!obj\" is true. Continuing.",0,0);
    }
  }
  if ((*(long *)(this + 0x1f0) != 0) && (*(int *)(this + 0x214) != 0)) {
    uVar7 = (&hash_table_size_primes)[*(uint *)(this + 0x210)];
    lVar11 = 0;
    if (uVar7 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x1f8) + lVar11) != 0) {
          *(int *)(*(long *)(this + 0x1f8) + lVar11) = 0;
          pvVar5 = *(void **)(*(long *)(this + 0x1f0) + lVar11 * 2);
          pvVar10 = *(void **)((long)pvVar5 + 0x48);
          if (pvVar10 != (void *)0x0) {
            if (*(int *)((long)pvVar5 + 0x6c) != 0) {
              if ((&hash_table_size_primes)[*(uint *)((long)pvVar5 + 0x68)] != 0) {
                memset(*(void **)((long)pvVar5 + 0x60),0,
                       (ulong)(uint)(&hash_table_size_primes)[*(uint *)((long)pvVar5 + 0x68)] * 4);
              }
              *(undefined4 *)((long)pvVar5 + 0x6c) = 0;
            }
            Memory::free_static(pvVar10,false);
            Memory::free_static(*(void **)((long)pvVar5 + 0x58),false);
            Memory::free_static(*(void **)((long)pvVar5 + 0x50),false);
            Memory::free_static(*(void **)((long)pvVar5 + 0x60),false);
          }
          pvVar10 = *(void **)((long)pvVar5 + 0x20);
          if (pvVar10 != (void *)0x0) {
            if (*(int *)((long)pvVar5 + 0x44) != 0) {
              uVar1 = (&hash_table_size_primes)[*(uint *)((long)pvVar5 + 0x40)];
              if (uVar1 == 0) {
                *(undefined4 *)((long)pvVar5 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar5 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar9 = 0;
                do {
                  piVar6 = (int *)(*(long *)((long)pvVar5 + 0x28) + lVar9);
                  if (*piVar6 != 0) {
                    pvVar10 = *(void **)((long)pvVar10 + lVar9 * 2);
                    *piVar6 = 0;
                    NodePath::~NodePath((NodePath *)((long)pvVar10 + 0x20));
                    Memory::free_static(pvVar10,false);
                    pvVar10 = *(void **)((long)pvVar5 + 0x20);
                    *(undefined8 *)((long)pvVar10 + lVar9 * 2) = 0;
                  }
                  lVar9 = lVar9 + 4;
                } while ((ulong)uVar1 * 4 - lVar9 != 0);
                *(undefined4 *)((long)pvVar5 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar5 + 0x30) = (undefined1  [16])0x0;
                if (pvVar10 == (void *)0x0) goto LAB_001017eb;
              }
            }
            Memory::free_static(pvVar10,false);
            Memory::free_static(*(void **)((long)pvVar5 + 0x28),false);
          }
LAB_001017eb:
          Memory::free_static(pvVar5,false);
          *(undefined8 *)(*(long *)(this + 0x1f0) + lVar11 * 2) = 0;
        }
        lVar11 = lVar11 + 4;
      } while ((ulong)uVar7 * 4 != lVar11);
    }
    *(undefined4 *)(this + 0x214) = 0;
    *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 400) != 0) && (*(int *)(this + 0x1b4) != 0)) {
    lVar11 = 0;
    uVar7 = (&hash_table_size_primes)[*(uint *)(this + 0x1b0)];
    if (uVar7 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x198) + lVar11) != 0) {
          *(int *)(*(long *)(this + 0x198) + lVar11) = 0;
          pvVar5 = *(void **)(*(long *)(this + 400) + lVar11 * 2);
          pvVar10 = *(void **)((long)pvVar5 + 0x58);
          if (pvVar10 != (void *)0x0) {
            if (*(int *)((long)pvVar5 + 0x7c) != 0) {
              uVar1 = (&hash_table_size_primes)[*(uint *)((long)pvVar5 + 0x78)];
              if (uVar1 == 0) {
                *(undefined4 *)((long)pvVar5 + 0x7c) = 0;
                *(undefined1 (*) [16])((long)pvVar5 + 0x68) = (undefined1  [16])0x0;
              }
              else {
                lVar9 = 0;
                do {
                  piVar6 = (int *)(*(long *)((long)pvVar5 + 0x60) + lVar9);
                  if (*piVar6 != 0) {
                    *piVar6 = 0;
                    Memory::free_static(*(void **)((long)pvVar10 + lVar9 * 2),false);
                    pvVar10 = *(void **)((long)pvVar5 + 0x58);
                    *(undefined8 *)((long)pvVar10 + lVar9 * 2) = 0;
                  }
                  lVar9 = lVar9 + 4;
                } while ((ulong)uVar1 * 4 - lVar9 != 0);
                *(undefined4 *)((long)pvVar5 + 0x7c) = 0;
                *(undefined1 (*) [16])((long)pvVar5 + 0x68) = (undefined1  [16])0x0;
                if (pvVar10 == (void *)0x0) goto LAB_0010192f;
              }
            }
            Memory::free_static(pvVar10,false);
            Memory::free_static(*(void **)((long)pvVar5 + 0x60),false);
          }
LAB_0010192f:
          pvVar10 = *(void **)((long)pvVar5 + 0x28);
          if (pvVar10 != (void *)0x0) {
            if (*(int *)((long)pvVar5 + 0x4c) != 0) {
              uVar1 = (&hash_table_size_primes)[*(uint *)((long)pvVar5 + 0x48)];
              if (uVar1 == 0) {
                *(undefined4 *)((long)pvVar5 + 0x4c) = 0;
                *(undefined1 (*) [16])((long)pvVar5 + 0x38) = (undefined1  [16])0x0;
              }
              else {
                lVar9 = 0;
                do {
                  piVar6 = (int *)(*(long *)((long)pvVar5 + 0x30) + lVar9);
                  if (*piVar6 != 0) {
                    *piVar6 = 0;
                    Memory::free_static(*(void **)((long)pvVar10 + lVar9 * 2),false);
                    pvVar10 = *(void **)((long)pvVar5 + 0x28);
                    *(undefined8 *)((long)pvVar10 + lVar9 * 2) = 0;
                  }
                  lVar9 = lVar9 + 4;
                } while ((ulong)uVar1 * 4 - lVar9 != 0);
                *(undefined4 *)((long)pvVar5 + 0x4c) = 0;
                *(undefined1 (*) [16])((long)pvVar5 + 0x38) = (undefined1  [16])0x0;
                if (pvVar10 == (void *)0x0) goto LAB_001019b5;
              }
            }
            Memory::free_static(pvVar10,false);
            Memory::free_static(*(void **)((long)pvVar5 + 0x30),false);
          }
LAB_001019b5:
          Memory::free_static(pvVar5,false);
          *(undefined8 *)(*(long *)(this + 400) + lVar11 * 2) = 0;
        }
        lVar11 = lVar11 + 4;
      } while ((ulong)uVar7 * 4 - lVar11 != 0);
    }
    *(undefined4 *)(this + 0x1b4) = 0;
    *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0x1c0) != 0) && (*(int *)(this + 0x1e4) != 0)) {
    lVar11 = 0;
    uVar7 = (&hash_table_size_primes)[*(uint *)(this + 0x1e0)];
    if (uVar7 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x1c8) + lVar11) != 0) {
          *(int *)(*(long *)(this + 0x1c8) + lVar11) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0x1c0) + lVar11 * 2),false);
          *(undefined8 *)(*(long *)(this + 0x1c0) + lVar11 * 2) = 0;
        }
        lVar11 = lVar11 + 4;
      } while (lVar11 != (ulong)uVar7 << 2);
    }
    *(undefined4 *)(this + 0x1e4) = 0;
    *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  }
  *(undefined4 *)(this + 0x218) = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneCacheInterface::get_cached_object(int, unsigned int) */

long __thiscall
SceneCacheInterface::get_cached_object(SceneCacheInterface *this,int param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  NodePath *pNVar21;
  ulong *puVar22;
  char *pcVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  bool bVar32;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  lVar2 = *(long *)(this + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar2 != 0) && (*(int *)(this + 0x214) != 0)) {
    uVar31 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x210)]);
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
    uVar20 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar20 = (uVar20 ^ uVar20 >> 0xd) * -0x3d4d51cb;
    uVar30 = uVar20 ^ uVar20 >> 0x10;
    if (uVar20 == uVar20 >> 0x10) {
      uVar30 = 1;
      uVar26 = uVar3;
    }
    else {
      uVar26 = uVar30 * uVar3;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar31;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar26;
    lVar25 = SUB168(auVar4 * auVar12,8);
    uVar24 = SUB164(auVar4 * auVar12,8);
    uVar20 = *(uint *)(*(long *)(this + 0x1f8) + lVar25 * 4);
    if (uVar20 != 0) {
      uVar29 = 0;
      do {
        if ((uVar30 == uVar20) && (*(int *)(*(long *)(lVar2 + lVar25 * 8) + 0x10) == param_1)) {
          lVar2 = *(long *)(lVar2 + (ulong)uVar24 * 8);
          lVar25 = *(long *)(lVar2 + 0x20);
          if ((lVar25 == 0) || (*(int *)(lVar2 + 0x44) == 0)) goto LAB_00101e78;
          uVar31 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(lVar2 + 0x40)]);
          uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar2 + 0x40) * 8);
          uVar20 = (param_2 >> 0x10 ^ param_2) * -0x7a143595;
          uVar20 = (uVar20 ^ uVar20 >> 0xd) * -0x3d4d51cb;
          uVar30 = uVar20 ^ uVar20 >> 0x10;
          if (uVar20 == uVar20 >> 0x10) {
            uVar30 = 1;
            uVar26 = uVar3;
          }
          else {
            uVar26 = uVar30 * uVar3;
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar31;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar26;
          lVar27 = SUB168(auVar8 * auVar16,8);
          uVar20 = *(uint *)(*(long *)(lVar2 + 0x28) + lVar27 * 4);
          uVar24 = SUB164(auVar8 * auVar16,8);
          if (uVar20 == 0) goto LAB_00101e78;
          uVar29 = 0;
          goto LAB_00101d82;
        }
        uVar29 = uVar29 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (uVar24 + 1) * uVar3;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar31;
        lVar25 = SUB168(auVar5 * auVar13,8);
        uVar20 = *(uint *)(*(long *)(this + 0x1f8) + lVar25 * 4);
        uVar24 = SUB164(auVar5 * auVar13,8);
      } while ((uVar20 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar20 * uVar3, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar31, auVar7._8_8_ = 0,
              auVar7._0_8_ = (((&hash_table_size_primes)[*(uint *)(this + 0x210)] + uVar24) -
                             SUB164(auVar6 * auVar14,8)) * uVar3, auVar15._8_8_ = 0,
              auVar15._0_8_ = uVar31, uVar29 <= SUB164(auVar7 * auVar15,8)));
    }
  }
  _err_print_error("get_cached_object","modules/multiplayer/scene_cache_interface.cpp",0x117,
                   "Parameter \"pinfo\" is null.",0,0);
  lVar25 = 0;
  goto LAB_00101e32;
LAB_00101dc0:
  while( true ) {
    uVar31 = (ulong)local_58 >> 8;
    local_58 = (char *)(uVar31 << 8);
    LOCK();
    bVar32 = (char)ObjectDB::spin_lock == '\0';
    if (bVar32) {
      ObjectDB::spin_lock._0_1_ = '\x01';
    }
    UNLOCK();
    if (bVar32) break;
    local_58 = (char *)(uVar31 << 8);
    do {
    } while ((char)ObjectDB::spin_lock != '\0');
  }
  puVar22 = (ulong *)((ulong)uVar20 * 0x10 + ObjectDB::object_slots);
  if ((uVar3 >> 0x18 & 0x7fffffffff) == (*puVar22 & 0x7fffffffff)) {
    uVar3 = puVar22[1];
    ObjectDB::spin_lock._0_1_ = '\0';
    if ((uVar3 != 0) &&
       (lVar25 = __dynamic_cast(uVar3,&Object::typeinfo,&Node::typeinfo,0), lVar25 != 0))
    goto LAB_00101e32;
  }
  else {
    ObjectDB::spin_lock._0_1_ = '\0';
  }
LAB_00101f83:
  pNVar21 = *(NodePath **)(SceneTree::singleton + 0x368);
  SceneMultiplayer::get_root_path();
  pNVar21 = (NodePath *)Node::get_node(pNVar21);
  NodePath::~NodePath((NodePath *)&local_58);
  if (pNVar21 == (NodePath *)0x0) {
    _err_print_error("get_cached_object","modules/multiplayer/scene_cache_interface.cpp",0x11f,
                     "Parameter \"root_node\" is null.",0,0);
    lVar25 = 0;
    goto LAB_00101e32;
  }
  lVar25 = Node::get_node(pNVar21);
  if (lVar25 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar25 + 0x60);
    goto LAB_00101e32;
  }
  local_60 = 0;
  local_58 = "Failed to get cached node from peer %d with cache ID %d.";
  local_50 = 0x38;
  String::parse_latin1((StrRange *)&local_60);
  vformat<int,unsigned_int>((String_conflict *)&local_58,(int)(StrRange *)&local_60,param_1);
  pcVar23 = "Parameter \"node\" is null.";
  uVar28 = 0x125;
  goto LAB_00101ed2;
  while( true ) {
    uVar29 = uVar29 + 1;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (uVar24 + 1) * uVar3;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar31;
    lVar27 = SUB168(auVar9 * auVar17,8);
    uVar20 = *(uint *)(*(long *)(lVar2 + 0x28) + lVar27 * 4);
    uVar24 = SUB164(auVar9 * auVar17,8);
    if ((uVar20 == 0) ||
       (auVar10._8_8_ = 0, auVar10._0_8_ = uVar20 * uVar3, auVar18._8_8_ = 0, auVar18._0_8_ = uVar31
       , auVar11._8_8_ = 0,
       auVar11._0_8_ =
            (((&hash_table_size_primes)[*(uint *)(lVar2 + 0x40)] + uVar24) -
            SUB164(auVar10 * auVar18,8)) * uVar3, auVar19._8_8_ = 0, auVar19._0_8_ = uVar31,
       SUB164(auVar11 * auVar19,8) < uVar29)) break;
LAB_00101d82:
    if ((uVar20 == uVar30) && (param_2 == *(uint *)(*(long *)(lVar25 + lVar27 * 8) + 0x10))) {
      lVar2 = *(long *)(lVar25 + (ulong)uVar24 * 8);
      uVar3 = *(ulong *)(lVar2 + 0x18);
      uVar20 = (uint)uVar3 & 0xffffff;
      if (uVar20 < (uint)ObjectDB::slot_max) goto LAB_00101dc0;
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      goto LAB_00101f83;
    }
  }
LAB_00101e78:
  local_60 = 0;
  local_50 = 0x24;
  local_58 = "ID %d not found in cache of peer %d.";
  String::parse_latin1((StrRange *)&local_60);
  vformat<unsigned_int,int>((String_conflict *)&local_58,(uint)(StrRange *)&local_60,param_2);
  pcVar23 = "Parameter \"recv_node\" is null.";
  uVar28 = 0x11a;
LAB_00101ed2:
  _err_print_error("get_cached_object","modules/multiplayer/scene_cache_interface.cpp",uVar28,
                   pcVar23,&local_58,0,0);
  pcVar23 = local_58;
  if (local_58 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (char *)0x0;
      Memory::free_static(pcVar23 + -0x10,false);
    }
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar25 = 0;
LAB_00101e32:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar25;
}



/* SceneCacheInterface::_track(Node*) */

void __thiscall SceneCacheInterface::_track(SceneCacheInterface *this,Node *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  undefined4 *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  SceneCacheInterface local_a8 [16];
  Callable local_98 [16];
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_b8 = *(long *)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 400) != 0) && (*(int *)(this + 0x1b4) != 0)) {
    uVar16 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x1b0)]);
    lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b0) * 8);
    uVar10 = local_b8 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar14 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar14 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar14 * lVar18;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar16;
    lVar13 = SUB168(auVar2 * auVar6,8);
    uVar15 = *(uint *)(*(long *)(this + 0x198) + lVar13 * 4);
    iVar12 = SUB164(auVar2 * auVar6,8);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if (((uint)uVar14 == uVar15) &&
           (local_b8 == *(long *)(*(long *)(*(long *)(this + 400) + lVar13 * 8) + 0x10)))
        goto LAB_001023fc;
        uVar17 = uVar17 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar12 + 1) * lVar18;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        lVar13 = SUB168(auVar3 * auVar7,8);
        uVar15 = *(uint *)(*(long *)(this + 0x198) + lVar13 * 4);
        iVar12 = SUB164(auVar3 * auVar7,8);
      } while ((uVar15 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar15 * lVar18, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar16, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)(uint)(((&hash_table_size_primes)[*(uint *)(this + 0x1b0)] +
                                           iVar12) - SUB164(auVar4 * auVar8,8)) * lVar18,
              auVar9._8_8_ = 0, auVar9._0_8_ = uVar16, uVar17 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  puVar11 = (undefined4 *)
            HashMap<ObjectID,SceneCacheInterface::NodeCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneCacheInterface::NodeCache>>>
            ::operator[]((HashMap<ObjectID,SceneCacheInterface::NodeCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneCacheInterface::NodeCache>>>
                          *)(this + 0x188),(ObjectID *)&local_b8);
  *puVar11 = 0;
  uVar15 = puVar11[0xc];
  uVar17 = (&hash_table_size_primes)[uVar15];
  if ((puVar11[0xd] == 0) || (*(long *)(puVar11 + 4) == 0)) {
LAB_0010225b:
    if (uVar17 < 0x17) goto LAB_00102260;
  }
  else {
    lVar18 = 0;
    if (uVar17 != 0) {
      do {
        if (*(int *)(*(long *)(puVar11 + 6) + lVar18) != 0) {
          *(int *)(*(long *)(puVar11 + 6) + lVar18) = 0;
          Memory::free_static(*(void **)(*(long *)(puVar11 + 4) + lVar18 * 2),false);
          *(undefined8 *)(*(long *)(puVar11 + 4) + lVar18 * 2) = 0;
        }
        lVar18 = lVar18 + 4;
      } while (lVar18 != (ulong)uVar17 << 2);
      uVar15 = puVar11[0xc];
      puVar11[0xd] = 0;
      *(undefined1 (*) [16])(puVar11 + 8) = (undefined1  [16])0x0;
      uVar17 = (&hash_table_size_primes)[uVar15];
      goto LAB_0010225b;
    }
    puVar11[0xd] = 0;
    *(undefined1 (*) [16])(puVar11 + 8) = (undefined1  [16])0x0;
LAB_00102260:
    if (uVar15 != 0x1c) {
      uVar10 = (ulong)uVar15;
      do {
        uVar17 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar17;
        if (0x16 < (uint)(&hash_table_size_primes)[uVar10]) {
          if (uVar15 != uVar17) {
            if (*(long *)(puVar11 + 4) == 0) {
              puVar11[0xc] = uVar17;
            }
            else {
              HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
              ::_resize_and_rehash
                        ((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                          *)(puVar11 + 2),uVar17);
            }
          }
          goto LAB_001022b3;
        }
      } while (uVar17 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_001022b3:
  uVar15 = puVar11[0x18];
  uVar17 = (&hash_table_size_primes)[uVar15];
  if ((puVar11[0x19] == 0) || (*(long *)(puVar11 + 0x10) == 0)) {
LAB_001022d0:
    if (0x16 < uVar17) goto LAB_0010232a;
  }
  else {
    lVar18 = 0;
    if (uVar17 != 0) {
      do {
        if (*(int *)(*(long *)(puVar11 + 0x12) + lVar18) != 0) {
          *(int *)(*(long *)(puVar11 + 0x12) + lVar18) = 0;
          Memory::free_static(*(void **)(*(long *)(puVar11 + 0x10) + lVar18 * 2),false);
          *(undefined8 *)(*(long *)(puVar11 + 0x10) + lVar18 * 2) = 0;
        }
        lVar18 = lVar18 + 4;
      } while (lVar18 != (ulong)uVar17 << 2);
      uVar15 = puVar11[0x18];
      puVar11[0x19] = 0;
      *(undefined1 (*) [16])(puVar11 + 0x14) = (undefined1  [16])0x0;
      uVar17 = (&hash_table_size_primes)[uVar15];
      goto LAB_001022d0;
    }
    puVar11[0x19] = 0;
    *(undefined1 (*) [16])(puVar11 + 0x14) = (undefined1  [16])0x0;
  }
  if (uVar15 != 0x1c) {
    uVar10 = (ulong)uVar15;
    do {
      uVar17 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar17;
      if (0x16 < (uint)(&hash_table_size_primes)[uVar10]) {
        if (uVar15 != uVar17) {
          if (*(long *)(puVar11 + 0x10) == 0) {
            puVar11[0x18] = uVar17;
          }
          else {
            HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>
            ::_resize_and_rehash
                      ((HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>
                        *)(puVar11 + 0xe),uVar17);
          }
        }
        goto LAB_0010232a;
      }
    } while (uVar17 != 0x1c);
  }
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_0010232a:
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  create_custom_callable_function_pointer<SceneCacheInterface,ObjectID>
            (local_a8,(char *)this,(_func_void_ObjectID *)"&SceneCacheInterface::_remove_node_cache"
            );
  local_b0 = local_b8;
  Variant::Variant((Variant *)local_78,(ObjectID *)&local_b0);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)local_98,(int)local_a8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar1)(param_1,SceneStringNames::singleton + 0x48,local_98,4);
  Callable::~Callable(local_98);
  Callable::~Callable((Callable *)local_a8);
LAB_001023fc:
  HashMap<ObjectID,SceneCacheInterface::NodeCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneCacheInterface::NodeCache>>>
  ::operator[]((HashMap<ObjectID,SceneCacheInterface::NodeCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneCacheInterface::NodeCache>>>
                *)(this + 0x188),(ObjectID *)&local_b8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneCacheInterface::make_object_cache(Object*) */

int __thiscall SceneCacheInterface::make_object_cache(SceneCacheInterface *this,Object *param_1)

{
  int iVar1;
  undefined8 uVar2;
  Node *pNVar3;
  int *piVar4;
  undefined8 *puVar5;
  
  if (param_1 != (Object *)0x0) {
    pNVar3 = (Node *)__dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0);
    if (pNVar3 != (Node *)0x0) {
      piVar4 = (int *)_track(this,pNVar3);
      if (*piVar4 != 0) {
        return *piVar4;
      }
      iVar1 = *(int *)(this + 0x218);
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      *(int *)(this + 0x218) = iVar1 + 1;
      *piVar4 = iVar1;
      puVar5 = (undefined8 *)
               HashMap<int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,ObjectID>>>
               ::operator[]((HashMap<int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,ObjectID>>>
                             *)(this + 0x1b8),piVar4);
      *puVar5 = uVar2;
      return *piVar4;
    }
  }
  _err_print_error("make_object_cache","modules/multiplayer/scene_cache_interface.cpp",0xdb,
                   "Parameter \"node\" is null.",0,0);
  return -1;
}



/* SceneCacheInterface::PeerInfo::TEMPNAMEPLACEHOLDERVALUE(SceneCacheInterface::PeerInfo const&)
   [clone .isra.0] */

void __thiscall SceneCacheInterface::PeerInfo::operator=(PeerInfo *this,PeerInfo *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  int aiStack_48 [2];
  long local_40;
  ulong uVar8;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != this) {
    uVar13 = *(uint *)(this + 0x28);
    uVar7 = (&hash_table_size_primes)[uVar13];
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar7 != 0) {
        lVar10 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar10) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar10) = 0;
            pvVar2 = *(void **)(*(long *)(this + 8) + lVar10 * 2);
            NodePath::~NodePath((NodePath *)((long)pvVar2 + 0x20));
            Memory::free_static(pvVar2,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar10 * 2) = 0;
          }
          lVar10 = lVar10 + 4;
        } while ((ulong)uVar7 * 4 - lVar10 != 0);
        uVar13 = *(uint *)(this + 0x28);
        uVar7 = (&hash_table_size_primes)[uVar13];
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar7 < (uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x28)]) {
      if (uVar13 != 0x1c) {
        uVar8 = (ulong)uVar13;
        do {
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar7;
          if ((uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x28)] <=
              (uint)(&hash_table_size_primes)[uVar8]) {
            if (uVar7 != uVar13) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar7;
              }
              else {
                HashMap<int,SceneCacheInterface::RecvNode,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::RecvNode>>>
                ::_resize_and_rehash
                          ((HashMap<int,SceneCacheInterface::RecvNode,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::RecvNode>>>
                            *)this,uVar7);
              }
            }
            goto LAB_00102741;
          }
        } while (uVar7 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_00102741:
    if (*(long *)(param_1 + 8) != 0) {
      for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        HashMap<int,SceneCacheInterface::RecvNode,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::RecvNode>>>
        ::insert(aiStack_48,(RecvNode *)this,(bool)((char)puVar1 + '\x10'));
      }
    }
  }
  if (param_1 + 0x30 != this + 0x30) {
    pvVar2 = *(void **)(this + 0x30);
    if (pvVar2 != (void *)0x0) {
      if (*(int *)(this + 0x54) != 0) {
        if ((&hash_table_size_primes)[*(uint *)(this + 0x50)] != 0) {
          memset(*(void **)(this + 0x48),0,
                 (ulong)(uint)(&hash_table_size_primes)[*(uint *)(this + 0x50)] * 4);
        }
        *(undefined4 *)(this + 0x54) = 0;
      }
      Memory::free_static(pvVar2,false);
      Memory::free_static(*(void **)(this + 0x40),false);
      Memory::free_static(*(void **)(this + 0x38),false);
      Memory::free_static(*(void **)(this + 0x48),false);
      *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
    }
    uVar8 = *(ulong *)(param_1 + 0x50);
    *(ulong *)(this + 0x50) = uVar8;
    if ((int)(uVar8 >> 0x20) != 0) {
      uVar13 = (&hash_table_size_primes)[uVar8 & 0xffffffff];
      uVar8 = (ulong)uVar13 * 4;
      uVar9 = Memory::alloc_static(uVar8,false);
      *(undefined8 *)(this + 0x48) = uVar9;
      uVar9 = Memory::alloc_static((ulong)uVar13 * 8,false);
      *(undefined8 *)(this + 0x30) = uVar9;
      uVar9 = Memory::alloc_static(uVar8,false);
      *(undefined8 *)(this + 0x40) = uVar9;
      lVar10 = Memory::alloc_static(uVar8,false);
      *(long *)(this + 0x38) = lVar10;
      if (*(int *)(this + 0x54) != 0) {
        lVar3 = *(long *)(this + 0x30);
        lVar4 = *(long *)(param_1 + 0x30);
        lVar11 = 0;
        lVar5 = *(long *)(param_1 + 0x40);
        lVar6 = *(long *)(this + 0x40);
        do {
          *(undefined8 *)(lVar3 + lVar11 * 8) = *(undefined8 *)(lVar4 + lVar11 * 8);
          *(undefined4 *)(lVar6 + lVar11 * 4) = *(undefined4 *)(lVar5 + lVar11 * 4);
          lVar11 = lVar11 + 1;
        } while ((uint)lVar11 < *(uint *)(this + 0x54));
      }
      if (uVar13 != 0) {
        lVar3 = *(long *)(param_1 + 0x48);
        lVar4 = *(long *)(this + 0x48);
        uVar12 = 0;
        lVar5 = *(long *)(param_1 + 0x38);
        do {
          *(undefined4 *)(lVar4 + uVar12) = *(undefined4 *)(lVar3 + uVar12);
          *(undefined4 *)(lVar10 + uVar12) = *(undefined4 *)(lVar5 + uVar12);
          uVar12 = uVar12 + 4;
        } while (uVar12 != uVar8);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneCacheInterface::on_peer_change(int, bool) */

void __thiscall
SceneCacheInterface::on_peer_change(SceneCacheInterface *this,int param_1,bool param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  uint uVar89;
  ulong uVar90;
  uint uVar91;
  uint uVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  ulong uVar96;
  long lVar97;
  ulong uVar98;
  uint uVar99;
  uint uVar100;
  long *plVar101;
  ulong uVar102;
  long lVar103;
  uint uVar104;
  uint uVar105;
  long *plVar106;
  ulong uVar107;
  void *pvVar108;
  uint uVar109;
  long *plVar110;
  uint *puVar111;
  uint uVar112;
  long in_FS_OFFSET;
  long local_f0;
  int local_ac [3];
  int local_a0 [2];
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac[0] = param_1;
  if (param_2) {
    local_90 = (undefined1  [16])0x0;
    local_80 = (undefined1  [16])0x0;
    local_70 = _LC53;
    local_48 = _LC53;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
    ::insert(local_a0,(PeerInfo *)(this + 0x1e8),SUB81(local_ac,0));
  }
  else {
    lVar103 = *(long *)(this + 0x1f0);
    if ((lVar103 != 0) && (*(int *)(this + 0x214) != 0)) {
      uVar90 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
      uVar89 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
      uVar104 = (uVar89 ^ uVar89 >> 0xd) * -0x3d4d51cb;
      uVar91 = uVar104 >> 0x10;
      uVar89 = uVar104 ^ uVar91;
      if (uVar104 == uVar91) {
        uVar112 = 1;
        uVar102 = uVar90;
      }
      else {
        uVar102 = uVar89 * uVar90;
        uVar112 = uVar89;
      }
      uVar96 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x210)]);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar96;
      auVar48._8_8_ = 0;
      auVar48._0_8_ = uVar102;
      lVar93 = SUB168(auVar7 * auVar48,8);
      uVar92 = SUB164(auVar7 * auVar48,8);
      uVar105 = *(uint *)(*(long *)(this + 0x1f8) + lVar93 * 4);
      if (uVar105 != 0) {
        uVar109 = 0;
        while ((uVar112 != uVar105 || (param_1 != *(int *)(*(long *)(lVar103 + lVar93 * 8) + 0x10)))
              ) {
          uVar109 = uVar109 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (uVar92 + 1) * uVar90;
          auVar49._8_8_ = 0;
          auVar49._0_8_ = uVar96;
          lVar93 = SUB168(auVar8 * auVar49,8);
          uVar105 = *(uint *)(*(long *)(this + 0x1f8) + lVar93 * 4);
          uVar92 = SUB164(auVar8 * auVar49,8);
          if ((uVar105 == 0) ||
             (auVar9._8_8_ = 0, auVar9._0_8_ = uVar105 * uVar90, auVar50._8_8_ = 0,
             auVar50._0_8_ = uVar96, auVar10._8_8_ = 0,
             auVar10._0_8_ =
                  (((&hash_table_size_primes)[*(uint *)(this + 0x210)] + uVar92) -
                  SUB164(auVar9 * auVar50,8)) * uVar90, auVar51._8_8_ = 0, auVar51._0_8_ = uVar96,
             SUB164(auVar10 * auVar51,8) < uVar109)) goto LAB_00103670;
        }
        lVar103 = *(long *)(lVar103 + (ulong)uVar92 * 8);
        plVar110 = *(long **)(lVar103 + 0x30);
        if (plVar110 != (long *)0x0) {
          uVar105 = 1;
          if (uVar104 != uVar91) {
            uVar105 = uVar89;
          }
          do {
            local_98 = (undefined4)plVar110[2];
            local_90._0_8_ = plVar110[3];
            NodePath::NodePath((NodePath *)(local_90 + 8),(NodePath *)(plVar110 + 4));
            lVar93 = *(long *)(this + 400);
            if ((lVar93 != 0) && (*(int *)(this + 0x1b4) != 0)) {
              uVar96 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x1b0)]);
              lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b0) * 8);
              uVar90 = local_90._0_8_ * 0x3ffff - 1;
              uVar90 = (uVar90 ^ uVar90 >> 0x1f) * 0x15;
              uVar90 = (uVar90 ^ uVar90 >> 0xb) * 0x41;
              uVar90 = uVar90 >> 0x16 ^ uVar90;
              uVar102 = uVar90 & 0xffffffff;
              if ((int)uVar90 == 0) {
                uVar102 = 1;
              }
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar102 * lVar5;
              auVar52._8_8_ = 0;
              auVar52._0_8_ = uVar96;
              lVar94 = SUB168(auVar11 * auVar52,8);
              uVar92 = *(uint *)(*(long *)(this + 0x198) + lVar94 * 4);
              uVar109 = SUB164(auVar11 * auVar52,8);
              if (uVar92 != 0) {
                uVar99 = 0;
                while (((uint)uVar102 != uVar92 ||
                       (local_90._0_8_ != *(long *)(*(long *)(lVar93 + lVar94 * 8) + 0x10)))) {
                  uVar99 = uVar99 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = (ulong)(uVar109 + 1) * lVar5;
                  auVar53._8_8_ = 0;
                  auVar53._0_8_ = uVar96;
                  lVar94 = SUB168(auVar12 * auVar53,8);
                  uVar92 = *(uint *)(*(long *)(this + 0x198) + lVar94 * 4);
                  uVar109 = SUB164(auVar12 * auVar53,8);
                  if ((uVar92 == 0) ||
                     (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar92 * lVar5, auVar54._8_8_ = 0,
                     auVar54._0_8_ = uVar96, auVar14._8_8_ = 0,
                     auVar14._0_8_ =
                          (ulong)(((&hash_table_size_primes)[*(uint *)(this + 0x1b0)] + uVar109) -
                                 SUB164(auVar13 * auVar54,8)) * lVar5, auVar55._8_8_ = 0,
                     auVar55._0_8_ = uVar96, SUB164(auVar14 * auVar55,8) < uVar99))
                  goto LAB_00102e9b;
                }
                lVar93 = *(long *)(lVar93 + (ulong)uVar109 * 8);
                lVar5 = *(long *)(lVar93 + 0x28);
                if ((lVar5 != 0) && (*(int *)(lVar93 + 0x4c) != 0)) {
                  lVar94 = *(long *)(lVar93 + 0x30);
                  uVar92 = (&hash_table_size_primes)[*(uint *)(lVar93 + 0x48)];
                  uVar90 = CONCAT44(0,uVar92);
                  lVar97 = *(long *)(hash_table_size_primes_inv +
                                    (ulong)*(uint *)(lVar93 + 0x48) * 8);
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = (ulong)uVar105 * lVar97;
                  auVar56._8_8_ = 0;
                  auVar56._0_8_ = uVar90;
                  lVar95 = SUB168(auVar15 * auVar56,8);
                  uVar109 = *(uint *)(lVar94 + lVar95 * 4);
                  uVar99 = SUB164(auVar15 * auVar56,8);
                  if (uVar109 != 0) {
                    uVar100 = 0;
                    goto LAB_00102d4d;
                  }
                }
              }
            }
LAB_00102e9b:
            NodePath::~NodePath((NodePath *)(local_90 + 8));
            plVar110 = (long *)*plVar110;
          } while (plVar110 != (long *)0x0);
        }
        iVar4 = *(int *)(lVar103 + 0x6c);
        if (iVar4 == 0) {
LAB_0010323d:
          lVar103 = *(long *)(this + 0x1f0);
          if ((lVar103 == 0) || (*(int *)(this + 0x214) == 0)) goto LAB_0010353b;
          uVar105 = (&hash_table_size_primes)[*(uint *)(this + 0x210)];
          uVar96 = CONCAT44(0,uVar105);
          uVar90 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
          uVar102 = uVar90;
          if (uVar104 != uVar91) {
            uVar102 = uVar89 * uVar90;
          }
          auVar39._8_8_ = 0;
          auVar39._0_8_ = uVar96;
          auVar80._8_8_ = 0;
          auVar80._0_8_ = uVar102;
          uVar102 = SUB168(auVar39 * auVar80,8);
          lVar93 = *(long *)(this + 0x1f8);
          uVar107 = (ulong)SUB164(auVar39 * auVar80,8);
          uVar89 = *(uint *)(lVar93 + uVar102 * 4);
          if (uVar89 == 0) goto LAB_0010353b;
          uVar91 = 0;
          while( true ) {
            auVar42._8_8_ = 0;
            auVar42._0_8_ = ((int)uVar107 + 1) * uVar90;
            auVar83._8_8_ = 0;
            auVar83._0_8_ = uVar96;
            uVar98 = SUB168(auVar42 * auVar83,8);
            uVar104 = SUB164(auVar42 * auVar83,8);
            if ((uVar112 == uVar89) &&
               (param_1 == *(int *)(*(long *)(lVar103 + uVar102 * 8) + 0x10))) break;
            uVar89 = *(uint *)(lVar93 + uVar98 * 4);
            uVar107 = uVar98 & 0xffffffff;
            uVar91 = uVar91 + 1;
            if ((uVar89 == 0) ||
               (auVar40._8_8_ = 0, auVar40._0_8_ = uVar89 * uVar90, auVar81._8_8_ = 0,
               auVar81._0_8_ = uVar96, auVar41._8_8_ = 0,
               auVar41._0_8_ = ((uVar105 + uVar104) - SUB164(auVar40 * auVar81,8)) * uVar90,
               auVar82._8_8_ = 0, auVar82._0_8_ = uVar96, uVar102 = uVar98,
               SUB164(auVar41 * auVar82,8) < uVar91)) goto LAB_0010353b;
          }
          puVar111 = (uint *)(lVar93 + uVar98 * 4);
          uVar89 = *puVar111;
          if ((uVar89 != 0) &&
             (auVar43._8_8_ = 0, auVar43._0_8_ = uVar89 * uVar90, auVar84._8_8_ = 0,
             auVar84._0_8_ = uVar96, auVar44._8_8_ = 0,
             auVar44._0_8_ = ((uVar104 + uVar105) - SUB164(auVar43 * auVar84,8)) * uVar90,
             auVar85._8_8_ = 0, auVar85._0_8_ = uVar96, uVar102 = (ulong)uVar104,
             SUB164(auVar44 * auVar85,8) != 0)) {
            while( true ) {
              puVar1 = (uint *)(lVar93 + uVar107 * 4);
              *puVar111 = *puVar1;
              puVar2 = (undefined8 *)(lVar103 + uVar98 * 8);
              *puVar1 = uVar89;
              puVar3 = (undefined8 *)(lVar103 + uVar107 * 8);
              uVar6 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar6;
              auVar47._8_8_ = 0;
              auVar47._0_8_ = ((int)uVar102 + 1) * uVar90;
              auVar88._8_8_ = 0;
              auVar88._0_8_ = uVar96;
              uVar98 = SUB168(auVar47 * auVar88,8);
              puVar111 = (uint *)(lVar93 + uVar98 * 4);
              uVar89 = *puVar111;
              uVar107 = uVar102;
              if ((uVar89 == 0) ||
                 (auVar45._8_8_ = 0, auVar45._0_8_ = uVar89 * uVar90, auVar86._8_8_ = 0,
                 auVar86._0_8_ = uVar96, auVar46._8_8_ = 0,
                 auVar46._0_8_ =
                      ((SUB164(auVar47 * auVar88,8) + uVar105) - SUB164(auVar45 * auVar86,8)) *
                      uVar90, auVar87._8_8_ = 0, auVar87._0_8_ = uVar96,
                 SUB164(auVar46 * auVar87,8) == 0)) break;
              uVar102 = uVar98 & 0xffffffff;
            }
          }
          plVar110 = (long *)(lVar103 + uVar107 * 8);
          *(undefined4 *)(lVar93 + uVar107 * 4) = 0;
          plVar101 = (long *)*plVar110;
          if (*(long **)(this + 0x200) == plVar101) {
            *(long *)(this + 0x200) = *plVar101;
            plVar101 = (long *)*plVar110;
          }
          if (*(long **)(this + 0x208) == plVar101) {
            *(long *)(this + 0x208) = plVar101[1];
            plVar101 = (long *)*plVar110;
          }
          if ((long *)plVar101[1] != (long *)0x0) {
            *(long *)plVar101[1] = *plVar101;
            plVar101 = (long *)*plVar110;
          }
          if (*plVar101 != 0) {
            *(long *)(*plVar101 + 8) = plVar101[1];
            plVar101 = (long *)*plVar110;
          }
          pvVar108 = (void *)plVar101[9];
          if (pvVar108 != (void *)0x0) {
            if (*(int *)((long)plVar101 + 0x6c) != 0) {
              if ((&hash_table_size_primes)[*(uint *)(plVar101 + 0xd)] != 0) {
                memset((void *)plVar101[0xc],0,
                       (ulong)(uint)(&hash_table_size_primes)[*(uint *)(plVar101 + 0xd)] * 4);
              }
              *(undefined4 *)((long)plVar101 + 0x6c) = 0;
            }
            Memory::free_static(pvVar108,false);
            Memory::free_static((void *)plVar101[0xb],false);
            Memory::free_static((void *)plVar101[10],false);
            Memory::free_static((void *)plVar101[0xc],false);
          }
          pvVar108 = (void *)plVar101[4];
          if (pvVar108 != (void *)0x0) {
            if (*(int *)((long)plVar101 + 0x44) != 0) {
              uVar89 = (&hash_table_size_primes)[*(uint *)(plVar101 + 8)];
              if (uVar89 == 0) {
                *(undefined4 *)((long)plVar101 + 0x44) = 0;
                *(undefined1 (*) [16])(plVar101 + 6) = (undefined1  [16])0x0;
              }
              else {
                lVar103 = 0;
                do {
                  if (*(int *)(plVar101[5] + lVar103) != 0) {
                    pvVar108 = *(void **)((long)pvVar108 + lVar103 * 2);
                    *(int *)(plVar101[5] + lVar103) = 0;
                    NodePath::~NodePath((NodePath *)((long)pvVar108 + 0x20));
                    Memory::free_static(pvVar108,false);
                    pvVar108 = (void *)plVar101[4];
                    *(undefined8 *)((long)pvVar108 + lVar103 * 2) = 0;
                  }
                  lVar103 = lVar103 + 4;
                } while (lVar103 != (ulong)uVar89 * 4);
                *(undefined4 *)((long)plVar101 + 0x44) = 0;
                *(undefined1 (*) [16])(plVar101 + 6) = (undefined1  [16])0x0;
                if (pvVar108 == (void *)0x0) goto LAB_00103517;
              }
            }
            Memory::free_static(pvVar108,false);
            Memory::free_static((void *)plVar101[5],false);
          }
LAB_00103517:
          Memory::free_static(plVar101,false);
          *(undefined8 *)(*(long *)(this + 0x1f0) + uVar107 * 8) = 0;
          *(int *)(this + 0x214) = *(int *)(this + 0x214) + -1;
          goto LAB_0010353b;
        }
        lVar103 = *(long *)(lVar103 + 0x48);
        local_f0 = 0;
        uVar105 = 1;
        if (uVar104 != uVar91) {
          uVar105 = uVar89;
        }
        do {
          lVar93 = *(long *)(lVar103 + local_f0 * 8);
          lVar5 = *(long *)(this + 400);
          if ((lVar5 != 0) && (*(int *)(this + 0x1b4) != 0)) {
            uVar96 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x1b0)]);
            lVar94 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b0) * 8);
            uVar90 = lVar93 * 0x3ffff - 1;
            uVar90 = (uVar90 ^ uVar90 >> 0x1f) * 0x15;
            uVar90 = (uVar90 ^ uVar90 >> 0xb) * 0x41;
            uVar90 = uVar90 >> 0x16 ^ uVar90;
            uVar102 = uVar90 & 0xffffffff;
            if ((int)uVar90 == 0) {
              uVar102 = 1;
            }
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar102 * lVar94;
            auVar66._8_8_ = 0;
            auVar66._0_8_ = uVar96;
            lVar97 = SUB168(auVar25 * auVar66,8);
            uVar92 = *(uint *)(*(long *)(this + 0x198) + lVar97 * 4);
            uVar109 = SUB164(auVar25 * auVar66,8);
            if (uVar92 != 0) {
              uVar99 = 0;
              do {
                if (((uint)uVar102 == uVar92) &&
                   (lVar93 == *(long *)(*(long *)(lVar5 + lVar97 * 8) + 0x10))) {
                  lVar93 = *(long *)(lVar5 + (ulong)uVar109 * 8);
                  lVar5 = *(long *)(lVar93 + 0x58);
                  if ((lVar5 == 0) || (*(int *)(lVar93 + 0x7c) == 0)) goto LAB_00103214;
                  lVar94 = *(long *)(lVar93 + 0x60);
                  uVar92 = (&hash_table_size_primes)[*(uint *)(lVar93 + 0x78)];
                  uVar90 = CONCAT44(0,uVar92);
                  lVar97 = *(long *)(hash_table_size_primes_inv +
                                    (ulong)*(uint *)(lVar93 + 0x78) * 8);
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = (ulong)uVar105 * lVar97;
                  auVar70._8_8_ = 0;
                  auVar70._0_8_ = uVar90;
                  lVar95 = SUB168(auVar29 * auVar70,8);
                  uVar109 = *(uint *)(lVar94 + lVar95 * 4);
                  uVar99 = SUB164(auVar29 * auVar70,8);
                  if (uVar109 == 0) goto LAB_00103214;
                  uVar100 = 0;
                  goto LAB_001030dd;
                }
                uVar99 = uVar99 + 1;
                auVar26._8_8_ = 0;
                auVar26._0_8_ = (ulong)(uVar109 + 1) * lVar94;
                auVar67._8_8_ = 0;
                auVar67._0_8_ = uVar96;
                lVar97 = SUB168(auVar26 * auVar67,8);
                uVar92 = *(uint *)(*(long *)(this + 0x198) + lVar97 * 4);
                uVar109 = SUB164(auVar26 * auVar67,8);
              } while ((uVar92 != 0) &&
                      (auVar27._8_8_ = 0, auVar27._0_8_ = (ulong)uVar92 * lVar94, auVar68._8_8_ = 0,
                      auVar68._0_8_ = uVar96, auVar28._8_8_ = 0,
                      auVar28._0_8_ =
                           (ulong)(((&hash_table_size_primes)[*(uint *)(this + 0x1b0)] + uVar109) -
                                  SUB164(auVar27 * auVar68,8)) * lVar94, auVar69._8_8_ = 0,
                      auVar69._0_8_ = uVar96, uVar99 <= SUB164(auVar28 * auVar69,8)));
            }
          }
          _err_print_error("on_peer_change","modules/multiplayer/scene_cache_interface.cpp",0x59,
                           "Condition \"!nc\" is true. Continuing.",0,0);
LAB_00103214:
          if (iVar4 <= (int)local_f0 + 1) goto LAB_0010323d;
          local_f0 = local_f0 + 1;
        } while( true );
      }
    }
LAB_00103670:
    _err_print_error("on_peer_change","modules/multiplayer/scene_cache_interface.cpp",0x4e,
                     "Parameter \"pinfo\" is null.",0,0);
  }
LAB_0010353b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00102d4d:
  uVar102 = (ulong)uVar99;
  if ((uVar105 != uVar109) || (param_1 != *(int *)(*(long *)(lVar5 + lVar95 * 8) + 0x10)))
  goto LAB_00102d08;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = (ulong)(uVar99 + 1) * lVar97;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar90;
  uVar96 = SUB168(auVar19 * auVar60,8);
  puVar111 = (uint *)(lVar94 + uVar96 * 4);
  uVar99 = SUB164(auVar19 * auVar60,8);
  uVar109 = *puVar111;
  if ((uVar109 != 0) &&
     (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar109 * lVar97, auVar61._8_8_ = 0,
     auVar61._0_8_ = uVar90, auVar21._8_8_ = 0,
     auVar21._0_8_ = (ulong)((uVar99 + uVar92) - SUB164(auVar20 * auVar61,8)) * lVar97,
     auVar62._8_8_ = 0, auVar62._0_8_ = uVar90, uVar107 = (ulong)uVar99, uVar98 = uVar102,
     SUB164(auVar21 * auVar62,8) != 0)) {
    while( true ) {
      uVar102 = uVar107;
      puVar1 = (uint *)(lVar94 + uVar98 * 4);
      *puVar111 = *puVar1;
      puVar2 = (undefined8 *)(lVar5 + uVar96 * 8);
      *puVar1 = uVar109;
      puVar3 = (undefined8 *)(lVar5 + uVar98 * 8);
      uVar6 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar6;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = (ulong)((int)uVar102 + 1) * lVar97;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = uVar90;
      uVar96 = SUB168(auVar24 * auVar65,8);
      puVar111 = (uint *)(lVar94 + uVar96 * 4);
      uVar109 = *puVar111;
      if ((uVar109 == 0) ||
         (auVar22._8_8_ = 0, auVar22._0_8_ = (ulong)uVar109 * lVar97, auVar63._8_8_ = 0,
         auVar63._0_8_ = uVar90, auVar23._8_8_ = 0,
         auVar23._0_8_ =
              (ulong)((SUB164(auVar24 * auVar65,8) + uVar92) - SUB164(auVar22 * auVar63,8)) * lVar97
         , auVar64._8_8_ = 0, auVar64._0_8_ = uVar90, SUB164(auVar23 * auVar64,8) == 0)) break;
      uVar107 = uVar96 & 0xffffffff;
      uVar98 = uVar102;
    }
  }
  plVar101 = (long *)(lVar5 + uVar102 * 8);
  *(undefined4 *)(lVar94 + uVar102 * 4) = 0;
  plVar106 = (long *)*plVar101;
  if (*(long **)(lVar93 + 0x38) == plVar106) {
    *(long *)(lVar93 + 0x38) = *plVar106;
    plVar106 = (long *)*plVar101;
  }
  if (plVar106 == *(long **)(lVar93 + 0x40)) {
    *(long *)(lVar93 + 0x40) = plVar106[1];
    plVar106 = (long *)*plVar101;
  }
  if ((long *)plVar106[1] != (long *)0x0) {
    *(long *)plVar106[1] = *plVar106;
    plVar106 = (long *)*plVar101;
  }
  if (*plVar106 != 0) {
    *(long *)(*plVar106 + 8) = plVar106[1];
    plVar106 = (long *)*plVar101;
  }
  Memory::free_static(plVar106,false);
  *(undefined8 *)(*(long *)(lVar93 + 0x28) + uVar102 * 8) = 0;
  *(int *)(lVar93 + 0x4c) = *(int *)(lVar93 + 0x4c) + -1;
  goto LAB_00102e9b;
LAB_00102d08:
  uVar100 = uVar100 + 1;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (ulong)(uVar99 + 1) * lVar97;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar90;
  lVar95 = SUB168(auVar16 * auVar57,8);
  uVar109 = *(uint *)(lVar94 + lVar95 * 4);
  uVar99 = SUB164(auVar16 * auVar57,8);
  if ((uVar109 == 0) ||
     (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar109 * lVar97, auVar58._8_8_ = 0,
     auVar58._0_8_ = uVar90, auVar18._8_8_ = 0,
     auVar18._0_8_ = (ulong)((uVar92 + uVar99) - SUB164(auVar17 * auVar58,8)) * lVar97,
     auVar59._8_8_ = 0, auVar59._0_8_ = uVar90, SUB164(auVar18 * auVar59,8) < uVar100))
  goto LAB_00102e9b;
  goto LAB_00102d4d;
LAB_001030dd:
  uVar102 = (ulong)uVar99;
  if ((uVar105 != uVar109) || (param_1 != *(int *)(*(long *)(lVar5 + lVar95 * 8) + 0x10)))
  goto LAB_00103098;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = (ulong)(uVar99 + 1) * lVar97;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = uVar90;
  uVar96 = SUB168(auVar33 * auVar74,8);
  puVar111 = (uint *)(lVar94 + uVar96 * 4);
  uVar99 = SUB164(auVar33 * auVar74,8);
  uVar109 = *puVar111;
  if ((uVar109 != 0) &&
     (auVar34._8_8_ = 0, auVar34._0_8_ = (ulong)uVar109 * lVar97, auVar75._8_8_ = 0,
     auVar75._0_8_ = uVar90, auVar35._8_8_ = 0,
     auVar35._0_8_ = (ulong)((uVar99 + uVar92) - SUB164(auVar34 * auVar75,8)) * lVar97,
     auVar76._8_8_ = 0, auVar76._0_8_ = uVar90, uVar107 = (ulong)uVar99, uVar98 = uVar102,
     SUB164(auVar35 * auVar76,8) != 0)) {
    while( true ) {
      uVar102 = uVar107;
      puVar1 = (uint *)(lVar94 + uVar98 * 4);
      *puVar111 = *puVar1;
      puVar2 = (undefined8 *)(lVar5 + uVar96 * 8);
      *puVar1 = uVar109;
      puVar3 = (undefined8 *)(lVar5 + uVar98 * 8);
      uVar6 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar6;
      auVar38._8_8_ = 0;
      auVar38._0_8_ = (ulong)((int)uVar102 + 1) * lVar97;
      auVar79._8_8_ = 0;
      auVar79._0_8_ = uVar90;
      uVar96 = SUB168(auVar38 * auVar79,8);
      puVar111 = (uint *)(lVar94 + uVar96 * 4);
      uVar109 = *puVar111;
      if ((uVar109 == 0) ||
         (auVar36._8_8_ = 0, auVar36._0_8_ = (ulong)uVar109 * lVar97, auVar77._8_8_ = 0,
         auVar77._0_8_ = uVar90, auVar37._8_8_ = 0,
         auVar37._0_8_ =
              (ulong)((SUB164(auVar38 * auVar79,8) + uVar92) - SUB164(auVar36 * auVar77,8)) * lVar97
         , auVar78._8_8_ = 0, auVar78._0_8_ = uVar90, SUB164(auVar37 * auVar78,8) == 0)) break;
      uVar107 = uVar96 & 0xffffffff;
      uVar98 = uVar102;
    }
  }
  plVar110 = (long *)(lVar5 + uVar102 * 8);
  *(undefined4 *)(lVar94 + uVar102 * 4) = 0;
  plVar101 = (long *)*plVar110;
  if (*(long **)(lVar93 + 0x68) == plVar101) {
    *(long *)(lVar93 + 0x68) = *plVar101;
    plVar101 = (long *)*plVar110;
  }
  if (plVar101 == *(long **)(lVar93 + 0x70)) {
    *(long *)(lVar93 + 0x70) = plVar101[1];
    plVar101 = (long *)*plVar110;
  }
  if ((long *)plVar101[1] != (long *)0x0) {
    *(long *)plVar101[1] = *plVar101;
    plVar101 = (long *)*plVar110;
  }
  if (*plVar101 != 0) {
    *(long *)(*plVar101 + 8) = plVar101[1];
    plVar101 = (long *)*plVar110;
  }
  Memory::free_static(plVar101,false);
  *(undefined8 *)(*(long *)(lVar93 + 0x58) + uVar102 * 8) = 0;
  *(int *)(lVar93 + 0x7c) = *(int *)(lVar93 + 0x7c) + -1;
  goto LAB_00103214;
LAB_00103098:
  uVar100 = uVar100 + 1;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = (ulong)(uVar99 + 1) * lVar97;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = uVar90;
  lVar95 = SUB168(auVar30 * auVar71,8);
  uVar109 = *(uint *)(lVar94 + lVar95 * 4);
  uVar99 = SUB164(auVar30 * auVar71,8);
  if ((uVar109 == 0) ||
     (auVar31._8_8_ = 0, auVar31._0_8_ = (ulong)uVar109 * lVar97, auVar72._8_8_ = 0,
     auVar72._0_8_ = uVar90, auVar32._8_8_ = 0,
     auVar32._0_8_ = (ulong)((uVar92 + uVar99) - SUB164(auVar31 * auVar72,8)) * lVar97,
     auVar73._8_8_ = 0, auVar73._0_8_ = uVar90, SUB164(auVar32 * auVar73,8) < uVar100))
  goto LAB_00103214;
  goto LAB_001030dd;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_001038a6:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_001038a6;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00105c38();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_001037fc;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_001037fc:
  puVar8[-1] = param_1;
  return;
}



/* SceneCacheInterface::_send_confirm_path(Node*, SceneCacheInterface::NodeCache&, List<int,
   DefaultAllocator> const&) */

int __thiscall
SceneCacheInterface::_send_confirm_path
          (SceneCacheInterface *this,Node *param_1,NodeCache *param_2,List *param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  size_t sVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  undefined1 *puVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  int iVar27;
  long in_FS_OFFSET;
  uint *local_e0;
  int local_a4;
  uint local_8c;
  long local_88;
  long local_80;
  Object *local_78;
  ulong local_70;
  NodePath local_68 [8];
  undefined1 *local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  SceneMultiplayer::get_root_path();
  Node::get_path();
  NodePath::rel_path_to(local_68);
  NodePath::operator_cast_to_String((NodePath *)local_58);
  String::utf8();
  lVar22 = local_58[0];
  if (local_58[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_58[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58[0] = 0;
      Memory::free_static((void *)(lVar22 + -0x10),false);
    }
  }
  NodePath::~NodePath(local_68);
  NodePath::~NodePath((NodePath *)&local_70);
  NodePath::~NodePath((NodePath *)&local_78);
  pcVar16 = (char *)CharString::get_data();
  if (*pcVar16 == '\0') {
    lVar22 = 0x27;
  }
  else {
    sVar17 = strlen(pcVar16 + 1);
    lVar22 = (long)((int)sVar17 + 0x28);
  }
  SceneMultiplayer::get_rpc_md5((Object *)&local_80);
  local_60 = (undefined1 *)0x0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_60,lVar22);
  if (local_60 == (undefined1 *)0x0) {
    lVar22 = 0;
  }
  else {
    lVar22 = *(long *)(local_60 + -8);
    if (0 < lVar22) {
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
      lVar22 = *(long *)(local_60 + -8);
      *local_60 = 1;
      if (lVar22 < 2) {
        lVar19 = 1;
        goto LAB_00103fe9;
      }
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
      puVar2 = local_60;
      pcVar16 = local_60 + 1;
      String::utf8();
      pcVar18 = (char *)CharString::get_data();
      lVar22 = local_58[0];
      cVar13 = *pcVar18;
      if (cVar13 == '\0') {
        lVar19 = 2;
        iVar21 = 2;
        iVar27 = 0;
LAB_00103af1:
        *pcVar16 = '\0';
      }
      else {
        iVar27 = 0;
        do {
          iVar21 = iVar27;
          if (pcVar16 != (char *)0x0) {
            *pcVar16 = cVar13;
            pcVar16 = pcVar16 + 1;
          }
          cVar13 = pcVar18[1];
          pcVar18 = pcVar18 + 1;
          iVar27 = iVar21 + 1;
        } while (cVar13 != '\0');
        iVar21 = iVar21 + 3;
        lVar19 = (long)iVar21;
        if (pcVar16 != (char *)0x0) goto LAB_00103af1;
      }
      if (local_58[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_58[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58[0] = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      if (puVar2 == (undefined1 *)0x0) {
        lVar22 = 0;
        goto LAB_00103fe9;
      }
      lVar22 = *(long *)(puVar2 + -8);
      if (lVar22 <= lVar19) goto LAB_00103fe9;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
      puVar23 = local_60 + iVar21;
      uVar14 = *(uint *)param_2;
      puVar2 = puVar23 + 4;
      do {
        *puVar23 = (char)uVar14;
        puVar23 = puVar23 + 1;
        uVar14 = uVar14 >> 8;
      } while (puVar2 != puVar23);
      lVar19 = (long)(int)(iVar27 + 6U);
      if (lVar19 < 0) {
        lVar22 = 0;
        if (local_60 != (undefined1 *)0x0) {
          lVar22 = *(long *)(local_60 + -8);
        }
        goto LAB_00103fe9;
      }
      if (local_60 == (undefined1 *)0x0) {
        lVar22 = 0;
        goto LAB_00103fe9;
      }
      lVar22 = *(long *)(local_60 + -8);
      if (lVar22 <= lVar19) goto LAB_00103fe9;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
      puVar2 = local_60;
      pcVar16 = local_60 + (iVar27 + 6U);
      pcVar18 = (char *)CharString::get_data();
      cVar13 = *pcVar18;
      while (cVar13 != '\0') {
        pcVar18 = pcVar18 + 1;
        *pcVar16 = cVar13;
        pcVar16 = pcVar16 + 1;
        cVar13 = *pcVar18;
      }
      *pcVar16 = '\0';
      (**(code **)(**(long **)(this + 0x180) + 0x160))((NodePath *)&local_78);
      if (local_78 == (Object *)0x0) {
        _err_print_error("_send_confirm_path","modules/multiplayer/scene_cache_interface.cpp",0xc1,
                         "Condition \"multiplayer_peer.is_null()\" is true. Returning: ERR_BUG",0,0)
        ;
        local_a4 = 0x2f;
LAB_00103de2:
        if (local_78 == (Object *)0x0) goto LAB_00103df4;
      }
      else {
        if ((*(undefined8 **)param_3 != (undefined8 *)0x0) &&
           (local_e0 = (uint *)**(undefined8 **)param_3, local_e0 != (uint *)0x0)) {
          do {
            uVar14 = *local_e0;
            local_8c = uVar14;
            (**(code **)(*(long *)local_78 + 400))(local_78,0);
            (**(code **)(*(long *)local_78 + 0x1a0))(local_78,2);
            local_a4 = SceneMultiplayer::send_command
                                 ((int)*(undefined8 *)(this + 0x180),(uchar *)(ulong)uVar14,
                                  (int)puVar2);
            if (local_a4 != 0) {
              _err_print_error("_send_confirm_path","modules/multiplayer/scene_cache_interface.cpp",
                               200,"Condition \"err != OK\" is true. Returning: err",0,0);
              break;
            }
            local_70 = local_70 & 0xffffffffffffff00;
            HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>
            ::insert((int *)local_58,(bool *)(param_2 + 0x38),SUB81(&local_8c,0));
            if ((*(long *)(this + 0x1f0) != 0) && (*(int *)(this + 0x214) != 0)) {
              uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
              uVar15 = (uVar14 >> 0x10 ^ uVar14) * -0x7a143595;
              uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
              uVar24 = uVar15 ^ uVar15 >> 0x10;
              if (uVar15 == uVar15 >> 0x10) {
                uVar24 = 1;
                uVar20 = uVar3;
              }
              else {
                uVar20 = uVar24 * uVar3;
              }
              uVar25 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x210)]);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = uVar25;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar20;
              lVar22 = SUB168(auVar4 * auVar8,8);
              uVar15 = *(uint *)(*(long *)(this + 0x1f8) + lVar22 * 4);
              iVar27 = SUB164(auVar4 * auVar8,8);
              if (uVar15 != 0) {
                uVar26 = 0;
                do {
                  if ((uVar15 == uVar24) &&
                     (uVar14 == *(uint *)(*(long *)(*(long *)(this + 0x1f0) + lVar22 * 8) + 0x10)))
                  {
                    HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
                    ::operator[]((HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
                                  *)(this + 0x1e8),(int *)&local_8c);
                    local_70 = *(ulong *)(param_1 + 0x60);
                    HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::
                    insert((NodePath *)local_58);
                    goto LAB_00103dc6;
                  }
                  uVar26 = uVar26 + 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (iVar27 + 1) * uVar3;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar25;
                  lVar22 = SUB168(auVar5 * auVar9,8);
                  uVar15 = *(uint *)(*(long *)(this + 0x1f8) + lVar22 * 4);
                  iVar27 = SUB164(auVar5 * auVar9,8);
                } while ((uVar15 != 0) &&
                        (auVar6._8_8_ = 0, auVar6._0_8_ = uVar15 * uVar3, auVar10._8_8_ = 0,
                        auVar10._0_8_ = uVar25, auVar7._8_8_ = 0,
                        auVar7._0_8_ = (uint)(((&hash_table_size_primes)[*(uint *)(this + 0x210)] +
                                              iVar27) - SUB164(auVar6 * auVar10,8)) * uVar3,
                        auVar11._8_8_ = 0, auVar11._0_8_ = uVar25,
                        uVar26 <= SUB164(auVar7 * auVar11,8)));
              }
            }
            _err_print_error("_send_confirm_path","modules/multiplayer/scene_cache_interface.cpp",
                             0xcb,"Condition \"!peers_info.has(peer_id)\" is true. Continuing.",0,0)
            ;
LAB_00103dc6:
            local_e0 = *(uint **)(local_e0 + 2);
          } while (local_e0 != (uint *)0x0);
          goto LAB_00103de2;
        }
        local_a4 = 0;
      }
      cVar13 = RefCounted::unreference();
      if ((cVar13 != '\0') && (cVar13 = predelete_handler(local_78), cVar13 != '\0')) {
        (**(code **)(*(long *)local_78 + 0x140))(local_78);
        Memory::free_static(local_78,false);
      }
LAB_00103df4:
      if (puVar2 != (undefined1 *)0x0) {
        LOCK();
        plVar1 = (long *)(puVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_60 + -0x10,false);
        }
      }
      lVar22 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      lVar22 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar22 + -0x10),false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return local_a4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  lVar19 = 0;
LAB_00103fe9:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar19,lVar22,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}



/* SceneCacheInterface::send_object_cache(Object*, int, int&) */

undefined1 __thiscall
SceneCacheInterface::send_object_cache
          (SceneCacheInterface *this,Object *param_1,int param_2,int *param_3)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  int iVar31;
  Node *pNVar32;
  NodeCache *pNVar33;
  undefined4 *puVar34;
  undefined8 *puVar35;
  undefined1 (*pauVar36) [16];
  int *piVar37;
  uint uVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  uint uVar42;
  undefined1 uVar43;
  ulong uVar44;
  uint uVar45;
  uint uVar46;
  long *plVar47;
  long in_FS_OFFSET;
  undefined1 (*local_70) [16];
  undefined1 (*local_58) [16];
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (Object *)0x0) ||
     (pNVar32 = (Node *)__dynamic_cast(param_1,&Object::typeinfo,&Node::typeinfo,0),
     pNVar32 == (Node *)0x0)) {
    uVar43 = 0;
    _err_print_error("send_object_cache","modules/multiplayer/scene_cache_interface.cpp",0xe6,
                     "Parameter \"node\" is null.",0,0);
    goto LAB_00104367;
  }
  pNVar33 = (NodeCache *)_track(this,pNVar32);
  iVar31 = *(int *)pNVar33;
  if (iVar31 == 0) {
    iVar31 = *(int *)(this + 0x218);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(int *)(this + 0x218) = iVar31 + 1;
    *(int *)pNVar33 = iVar31;
    puVar35 = (undefined8 *)
              HashMap<int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,ObjectID>>>
              ::operator[]((HashMap<int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,ObjectID>>>
                            *)(this + 0x1b8),(int *)pNVar33);
    *puVar35 = uVar4;
    iVar31 = *(int *)pNVar33;
  }
  *param_3 = iVar31;
  local_58 = (undefined1 (*) [16])0x0;
  if (param_2 < 1) {
    plVar47 = *(long **)(this + 0x200);
    if (plVar47 == (long *)0x0) {
      uVar43 = 1;
      goto LAB_00104367;
    }
    local_70 = (undefined1 (*) [16])0x0;
    uVar43 = 1;
    do {
      if ((param_2 == 0) || (param_2 + (int)plVar47[2] != 0)) {
        uVar30 = *(uint *)(plVar47 + 2);
        lVar40 = *(long *)(pNVar33 + 0x40);
        if ((lVar40 != 0) && (*(int *)(pNVar33 + 100) != 0)) {
          uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(pNVar33 + 0x60) * 8);
          uVar29 = (uVar30 >> 0x10 ^ uVar30) * -0x7a143595;
          uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
          uVar42 = uVar29 ^ uVar29 >> 0x10;
          if (uVar29 == uVar29 >> 0x10) {
            uVar42 = 1;
            uVar41 = uVar2;
          }
          else {
            uVar41 = uVar42 * uVar2;
          }
          uVar44 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(pNVar33 + 0x60)]);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar44;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          lVar39 = SUB168(auVar5 * auVar17,8);
          uVar38 = SUB164(auVar5 * auVar17,8);
          uVar29 = *(uint *)(*(long *)(pNVar33 + 0x48) + lVar39 * 4);
          if (uVar29 != 0) {
            uVar45 = 0;
            do {
              if ((uVar29 == uVar42) && (uVar30 == *(uint *)(*(long *)(lVar40 + lVar39 * 8) + 0x10))
                 ) {
                if (*(char *)(*(long *)(lVar40 + (ulong)uVar38 * 8) + 0x14) == '\0') {
                  uVar43 = 0;
                }
                goto LAB_001042d7;
              }
              uVar45 = uVar45 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (uVar38 + 1) * uVar2;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar44;
              lVar39 = SUB168(auVar6 * auVar18,8);
              uVar29 = *(uint *)(*(long *)(pNVar33 + 0x48) + lVar39 * 4);
              uVar38 = SUB164(auVar6 * auVar18,8);
            } while ((uVar29 != 0) &&
                    (auVar7._8_8_ = 0, auVar7._0_8_ = uVar29 * uVar2, auVar19._8_8_ = 0,
                    auVar19._0_8_ = uVar44, auVar8._8_8_ = 0,
                    auVar8._0_8_ = (((&hash_table_size_primes)[*(uint *)(pNVar33 + 0x60)] + uVar38)
                                   - SUB164(auVar7 * auVar19,8)) * uVar2, auVar20._8_8_ = 0,
                    auVar20._0_8_ = uVar44, uVar45 <= SUB164(auVar8 * auVar20,8)));
          }
        }
        if (local_70 == (undefined1 (*) [16])0x0) {
          local_70 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)local_70[1] = 0;
          *local_70 = (undefined1  [16])0x0;
          local_58 = local_70;
        }
        puVar34 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
        lVar40 = plVar47[2];
        *(undefined8 *)(puVar34 + 2) = 0;
        *puVar34 = (int)lVar40;
        lVar40 = *(long *)(*local_70 + 8);
        *(undefined1 (**) [16])(puVar34 + 6) = local_70;
        *(long *)(puVar34 + 4) = lVar40;
        if (lVar40 != 0) {
          *(undefined4 **)(lVar40 + 8) = puVar34;
        }
        lVar40 = *(long *)*local_70;
        *(undefined4 **)(*local_70 + 8) = puVar34;
        if (lVar40 == 0) {
          *(undefined4 **)*local_70 = puVar34;
        }
        uVar43 = 0;
        *(int *)local_70[1] = *(int *)local_70[1] + 1;
      }
LAB_001042d7:
      plVar47 = (long *)*plVar47;
    } while (plVar47 != (long *)0x0);
    if (local_70 == (undefined1 (*) [16])0x0) goto LAB_00104367;
    iVar31 = *(int *)local_70[1];
    goto LAB_001042fd;
  }
  if ((*(long *)(this + 0x1f0) != 0) && (*(int *)(this + 0x214) != 0)) {
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
    uVar30 = ((uint)param_2 >> 0x10 ^ param_2) * -0x7a143595;
    uVar42 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
    uVar30 = uVar42 >> 0x10;
    uVar29 = uVar30 ^ uVar42;
    if (uVar42 == uVar30) {
      uVar38 = 1;
      uVar41 = uVar2;
    }
    else {
      uVar41 = uVar29 * uVar2;
      uVar38 = uVar29;
    }
    uVar44 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x210)]);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar44;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar41;
    lVar40 = SUB168(auVar9 * auVar21,8);
    uVar45 = *(uint *)(*(long *)(this + 0x1f8) + lVar40 * 4);
    iVar31 = SUB164(auVar9 * auVar21,8);
    if (uVar45 != 0) {
      uVar46 = 0;
      do {
        if ((uVar38 == uVar45) &&
           (*(int *)(*(long *)(*(long *)(this + 0x1f0) + lVar40 * 8) + 0x10) == param_2)) {
          lVar40 = *(long *)(pNVar33 + 0x40);
          if ((lVar40 == 0) || (*(int *)(pNVar33 + 100) == 0)) goto LAB_001046e0;
          uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(pNVar33 + 0x60) * 8);
          uVar41 = uVar2;
          if (uVar42 != uVar30) {
            uVar41 = uVar29 * uVar2;
          }
          uVar44 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(pNVar33 + 0x60)]);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar44;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar41;
          lVar39 = SUB168(auVar13 * auVar25,8);
          uVar29 = SUB164(auVar13 * auVar25,8);
          uVar30 = *(uint *)(*(long *)(pNVar33 + 0x48) + lVar39 * 4);
          if (uVar30 == 0) goto LAB_001046e0;
          uVar42 = 0;
          goto LAB_0010460b;
        }
        uVar46 = uVar46 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (iVar31 + 1) * uVar2;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar44;
        lVar40 = SUB168(auVar10 * auVar22,8);
        uVar45 = *(uint *)(*(long *)(this + 0x1f8) + lVar40 * 4);
        iVar31 = SUB164(auVar10 * auVar22,8);
      } while ((uVar45 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = uVar45 * uVar2, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar44, auVar12._8_8_ = 0,
              auVar12._0_8_ =
                   (uint)(((&hash_table_size_primes)[*(uint *)(this + 0x210)] + iVar31) -
                         SUB164(auVar11 * auVar23,8)) * uVar2, auVar24._8_8_ = 0,
              auVar24._0_8_ = uVar44, uVar46 <= SUB164(auVar12 * auVar24,8)));
    }
  }
  itos((long)&local_50);
  operator+((char *)&local_48,(String_conflict *)"Peer doesn\'t exist: ");
  _err_print_error("send_object_cache","modules/multiplayer/scene_cache_interface.cpp",0xf4,
                   "Condition \"!peers_info.has(p_peer_id)\" is true. Returning: false",&local_48,0,
                   0);
  lVar40 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar47 = (long *)(local_48 + -0x10);
    *plVar47 = *plVar47 + -1;
    UNLOCK();
    if (*plVar47 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar40 + -0x10),false);
    }
  }
  lVar40 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar47 = (long *)(local_50 + -0x10);
    *plVar47 = *plVar47 + -1;
    UNLOCK();
    if (*plVar47 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar40 + -0x10),false);
    }
  }
  uVar43 = 0;
  goto LAB_0010430a;
  while( true ) {
    uVar42 = uVar42 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (uVar29 + 1) * uVar2;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar44;
    lVar39 = SUB168(auVar14 * auVar26,8);
    uVar30 = *(uint *)(*(long *)(pNVar33 + 0x48) + lVar39 * 4);
    uVar29 = SUB164(auVar14 * auVar26,8);
    if ((uVar30 == 0) ||
       (auVar15._8_8_ = 0, auVar15._0_8_ = uVar30 * uVar2, auVar27._8_8_ = 0, auVar27._0_8_ = uVar44
       , auVar16._8_8_ = 0,
       auVar16._0_8_ =
            (((&hash_table_size_primes)[*(uint *)(pNVar33 + 0x60)] + uVar29) -
            SUB164(auVar15 * auVar27,8)) * uVar2, auVar28._8_8_ = 0, auVar28._0_8_ = uVar44,
       SUB164(auVar16 * auVar28,8) < uVar42)) break;
LAB_0010460b:
    if ((uVar38 == uVar30) && (*(int *)(*(long *)(lVar40 + lVar39 * 8) + 0x10) == param_2)) {
      uVar43 = *(undefined1 *)(*(long *)(lVar40 + (ulong)uVar29 * 8) + 0x14);
      goto LAB_00104367;
    }
  }
LAB_001046e0:
  pauVar36 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
  *(undefined4 *)pauVar36[1] = 0;
  *pauVar36 = (undefined1  [16])0x0;
  local_58 = pauVar36;
  piVar37 = (int *)operator_new(0x20,DefaultAllocator::alloc);
  lVar40 = *(long *)(*pauVar36 + 8);
  piVar37[2] = 0;
  piVar37[3] = 0;
  *piVar37 = param_2;
  *(long *)(piVar37 + 4) = lVar40;
  *(undefined1 (**) [16])(piVar37 + 6) = pauVar36;
  if (lVar40 != 0) {
    *(int **)(lVar40 + 8) = piVar37;
  }
  lVar40 = *(long *)*pauVar36;
  *(int **)(*pauVar36 + 8) = piVar37;
  if (lVar40 == 0) {
    *(int **)*pauVar36 = piVar37;
  }
  uVar43 = 0;
  iVar31 = *(int *)pauVar36[1] + 1;
  *(int *)pauVar36[1] = iVar31;
LAB_001042fd:
  if (iVar31 != 0) {
    _send_confirm_path(this,pNVar32,pNVar33,(List *)&local_58);
  }
LAB_0010430a:
  pauVar36 = local_58;
  if (local_58 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar3 = *(void **)*pauVar36;
        if (pvVar3 == (void *)0x0) {
          if (*(int *)pauVar36[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_00104367;
          }
          goto LAB_0010435d;
        }
        if (pauVar36 != *(undefined1 (**) [16])((long)pvVar3 + 0x18)) break;
        lVar40 = *(long *)((long)pvVar3 + 8);
        lVar39 = *(long *)((long)pvVar3 + 0x10);
        *(long *)*pauVar36 = lVar40;
        if (pvVar3 == *(void **)(*pauVar36 + 8)) {
          *(long *)(*pauVar36 + 8) = lVar39;
        }
        if (lVar39 != 0) {
          *(long *)(lVar39 + 8) = lVar40;
          lVar40 = *(long *)((long)pvVar3 + 8);
        }
        if (lVar40 != 0) {
          *(long *)(lVar40 + 0x10) = lVar39;
        }
        Memory::free_static(pvVar3,false);
        pauVar1 = pauVar36 + 1;
        *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
        if (*(int *)*pauVar1 == 0) goto LAB_0010435d;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar36[1] != 0);
LAB_0010435d:
    Memory::free_static(pauVar36,false);
  }
LAB_00104367:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar43;
}



/* SceneCacheInterface::process_simplify_path(int, unsigned char const*, int) */

void __thiscall
SceneCacheInterface::process_simplify_path
          (SceneCacheInterface *this,int param_1,uchar *param_2,int param_3)

{
  long *plVar1;
  Object *pOVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  code *pcVar20;
  char *pcVar21;
  undefined1 *puVar22;
  char cVar23;
  uint uVar24;
  NodePath *pNVar25;
  Node *pNVar26;
  RecvNode *pRVar27;
  undefined1 *puVar28;
  ulong uVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  Object *pOVar35;
  ulong uVar36;
  uint uVar37;
  long in_FS_OFFSET;
  uint local_8c [4];
  uint local_7c;
  long local_78;
  long local_70;
  NodePath local_68 [8];
  Object *local_60;
  char *local_58;
  undefined1 *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c[0] = param_1;
  if ((*(long *)(this + 0x1f0) != 0) && (*(int *)(this + 0x214) != 0)) {
    uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
    uVar24 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar24 = (uVar24 ^ uVar24 >> 0xd) * -0x3d4d51cb;
    uVar34 = uVar24 ^ uVar24 >> 0x10;
    if (uVar24 == uVar24 >> 0x10) {
      uVar34 = 1;
      uVar29 = uVar3;
    }
    else {
      uVar29 = uVar34 * uVar3;
    }
    uVar36 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x210)]);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar36;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar29;
    lVar31 = SUB168(auVar4 * auVar12,8);
    uVar24 = *(uint *)(*(long *)(this + 0x1f8) + lVar31 * 4);
    iVar30 = SUB164(auVar4 * auVar12,8);
    if (uVar24 != 0) {
      uVar37 = 0;
      do {
        if ((uVar34 == uVar24) &&
           (param_1 == *(int *)(*(long *)(*(long *)(this + 0x1f0) + lVar31 * 8) + 0x10))) {
          if (param_3 < 0x26) {
            _err_print_error("process_simplify_path","modules/multiplayer/scene_cache_interface.cpp"
                             ,0x62,"Condition \"p_packet_len < 38\" is true.",
                             "Invalid packet received. Size too small.",0,0);
          }
          else {
            pNVar25 = *(NodePath **)(SceneTree::singleton + 0x368);
            SceneMultiplayer::get_root_path();
            pNVar25 = (NodePath *)Node::get_node(pNVar25);
            NodePath::~NodePath((NodePath *)&local_58);
            if (pNVar25 == (NodePath *)0x0) {
              _err_print_error("process_simplify_path",
                               "modules/multiplayer/scene_cache_interface.cpp",100,
                               "Parameter \"root_node\" is null.",0,0);
            }
            else {
              uVar24 = 0;
              local_78 = 0;
              String::parse_utf8((char *)&local_78,(int)param_2 + 1,true);
              lVar31 = 0;
              do {
                lVar32 = lVar31 + 0x22;
                cVar23 = (char)lVar31;
                lVar31 = lVar31 + 1;
                uVar24 = uVar24 | (uint)param_2[lVar32] << (cVar23 * '\b' & 0x1fU);
              } while (lVar31 != 4);
              local_7c = uVar24;
              lVar31 = HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
                       ::operator[]((HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
                                     *)(this + 0x1e8),(int *)local_8c);
              if ((*(long *)(lVar31 + 8) == 0) || (*(int *)(lVar31 + 0x2c) == 0)) {
LAB_00104c88:
                local_70 = 0;
                String::parse_utf8((char *)&local_70,(int)param_2 + 0x26,
                                   (bool)((char)param_3 + -0x26));
                NodePath::NodePath(local_68,(String_conflict *)&local_70);
                pNVar26 = (Node *)Node::get_node(pNVar25);
                if (pNVar26 != (Node *)0x0) {
                  SceneMultiplayer::get_rpc_md5((Object *)&local_58);
                  cVar23 = String::operator==((String_conflict *)&local_58,
                                              (String_conflict *)&local_78);
                  pcVar21 = local_58;
                  if (local_58 != (char *)0x0) {
                    LOCK();
                    plVar1 = (long *)(local_58 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_58 = (char *)0x0;
                      Memory::free_static(pcVar21 + -0x10,false);
                    }
                  }
                  if (cVar23 == '\0') {
                    NodePath::operator_cast_to_String((NodePath *)&local_60);
                    operator+((char *)&local_58,
                              (String_conflict *)
                              "The rpc node checksum failed. Make sure to have the same methods on both nodes. Node path: "
                             );
                    _err_print_error("process_simplify_path",
                                     "modules/multiplayer/scene_cache_interface.cpp",0x79,
                                     (NodePath *)&local_58,0,0);
                    pcVar21 = local_58;
                    if (local_58 != (char *)0x0) {
                      LOCK();
                      plVar1 = (long *)(local_58 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        local_58 = (char *)0x0;
                        Memory::free_static(pcVar21 + -0x10,false);
                      }
                    }
                    pOVar35 = local_60;
                    if (local_60 != (Object *)0x0) {
                      LOCK();
                      pOVar2 = local_60 + -0x10;
                      *(long *)pOVar2 = *(long *)pOVar2 + -1;
                      UNLOCK();
                      if (*(long *)pOVar2 == 0) {
                        local_60 = (Object *)0x0;
                        Memory::free_static(pOVar35 + -0x10,false);
                      }
                    }
                  }
                  pRVar27 = (RecvNode *)
                            HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
                            ::operator[]((HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
                                          *)(this + 0x1e8),(int *)local_8c);
                  local_58 = *(char **)(pNVar26 + 0x60);
                  local_50[0] = (undefined1 *)0x0;
                  NodePath::operator=((NodePath *)local_50,local_68);
                  HashMap<int,SceneCacheInterface::RecvNode,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::RecvNode>>>
                  ::insert((int *)&local_60,pRVar27,SUB81(&local_7c,0));
                  NodePath::~NodePath((NodePath *)local_50);
                  lVar31 = _track(this,pNVar26);
                  HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                  ::insert((int *)&local_58,(int *)(lVar31 + 8),SUB81(local_8c,0));
                  local_50[0] = (undefined1 *)0x0;
                  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_50,6);
                  if (local_50[0] == (undefined1 *)0x0) {
                    lVar31 = 0;
                  }
                  else {
                    lVar31 = *(long *)(local_50[0] + -8);
                    if (0 < lVar31) {
                      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
                      lVar31 = *(long *)(local_50[0] + -8);
                      *local_50[0] = 2;
                      if (lVar31 < 2) {
                        lVar32 = 1;
                        goto LAB_0010518a;
                      }
                      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
                      lVar31 = *(long *)(local_50[0] + -8);
                      local_50[0][1] = cVar23;
                      if (lVar31 < 3) {
                        lVar32 = 2;
                        goto LAB_0010518a;
                      }
                      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_50);
                      puVar22 = local_50[0];
                      puVar28 = local_50[0] + 2;
                      do {
                        *puVar28 = (char)uVar24;
                        puVar28 = puVar28 + 1;
                        uVar24 = uVar24 >> 8;
                      } while (puVar28 != local_50[0] + 6);
                      (**(code **)(**(long **)(this + 0x180) + 0x160))((NodePath *)&local_60);
                      if (local_60 == (Object *)0x0) {
                        _err_print_error("process_simplify_path",
                                         "modules/multiplayer/scene_cache_interface.cpp",0x88,
                                         "Condition \"multiplayer_peer.is_null()\" is true.",0,0);
                        if (((local_60 != (Object *)0x0) &&
                            (cVar23 = RefCounted::unreference(), pOVar35 = local_60, cVar23 != '\0')
                            ) && (cVar23 = predelete_handler(local_60), cVar23 != '\0')) {
                          (**(code **)(*(long *)pOVar35 + 0x140))(pOVar35);
                          Memory::free_static(pOVar35,false);
                        }
joined_r0x00104faf:
                        if (puVar22 == (undefined1 *)0x0) goto LAB_00104f30;
                      }
                      else {
                        (**(code **)(*(long *)local_60 + 400))(local_60,0);
                        (**(code **)(*(long *)local_60 + 0x1a0))(local_60,2);
                        if (puVar22 == (undefined1 *)0x0) {
                          SceneMultiplayer::send_command
                                    ((int)*(undefined8 *)(this + 0x180),(uchar *)(ulong)local_8c[0],
                                     0);
                          if (((local_60 == (Object *)0x0) ||
                              (cVar23 = RefCounted::unreference(), pOVar35 = local_60,
                              cVar23 == '\0')) ||
                             (cVar23 = predelete_handler(local_60), cVar23 == '\0'))
                          goto LAB_00104f30;
LAB_00104f07:
                          (**(code **)(*(long *)pOVar35 + 0x140))(pOVar35);
                          Memory::free_static(pOVar35,false);
                          goto joined_r0x00104faf;
                        }
                        SceneMultiplayer::send_command
                                  ((int)*(undefined8 *)(this + 0x180),(uchar *)(ulong)local_8c[0],
                                   (int)puVar22);
                        if (((local_60 != (Object *)0x0) &&
                            (cVar23 = RefCounted::unreference(), pOVar35 = local_60, cVar23 != '\0')
                            ) && (cVar23 = predelete_handler(local_60), cVar23 != '\0'))
                        goto LAB_00104f07;
                      }
                      LOCK();
                      plVar1 = (long *)(puVar22 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        Memory::free_static(local_50[0] + -0x10,false);
                      }
                      goto LAB_00104f30;
                    }
                  }
                  lVar32 = 0;
LAB_0010518a:
                  _err_print_index_error
                            ("operator[]","./core/templates/vector.h",0x38,lVar32,lVar31,"p_index",
                             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar20 = (code *)invalidInstructionException();
                  (*pcVar20)();
                }
                _err_print_error("process_simplify_path",
                                 "modules/multiplayer/scene_cache_interface.cpp",0x76,
                                 "Parameter \"node\" is null.",0,0);
LAB_00104f30:
                NodePath::~NodePath(local_68);
                lVar31 = local_70;
                if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_70 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_70 = 0;
                    Memory::free_static((void *)(lVar31 + -0x10),false);
                  }
                }
              }
              else {
                uVar3 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar31 + 0x28) * 8)
                ;
                uVar34 = (uVar24 >> 0x10 ^ uVar24) * -0x7a143595;
                uVar34 = (uVar34 ^ uVar34 >> 0xd) * -0x3d4d51cb;
                uVar37 = uVar34 ^ uVar34 >> 0x10;
                if (uVar34 == uVar34 >> 0x10) {
                  uVar37 = 1;
                  uVar29 = uVar3;
                }
                else {
                  uVar29 = uVar37 * uVar3;
                }
                uVar36 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(lVar31 + 0x28)]);
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar36;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar29;
                lVar32 = SUB168(auVar8 * auVar16,8);
                uVar34 = *(uint *)(*(long *)(lVar31 + 0x10) + lVar32 * 4);
                iVar30 = SUB164(auVar8 * auVar16,8);
                if (uVar34 == 0) goto LAB_00104c88;
                uVar33 = 0;
                while ((uVar37 != uVar34 ||
                       (uVar24 != *(uint *)(*(long *)(*(long *)(lVar31 + 8) + lVar32 * 8) + 0x10))))
                {
                  uVar33 = uVar33 + 1;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (iVar30 + 1) * uVar3;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar36;
                  lVar32 = SUB168(auVar9 * auVar17,8);
                  uVar34 = *(uint *)(*(long *)(lVar31 + 0x10) + lVar32 * 4);
                  iVar30 = SUB164(auVar9 * auVar17,8);
                  if ((uVar34 == 0) ||
                     (auVar10._8_8_ = 0, auVar10._0_8_ = uVar34 * uVar3, auVar18._8_8_ = 0,
                     auVar18._0_8_ = uVar36, auVar11._8_8_ = 0,
                     auVar11._0_8_ =
                          (uint)(((&hash_table_size_primes)[*(uint *)(lVar31 + 0x28)] + iVar30) -
                                SUB164(auVar10 * auVar18,8)) * uVar3, auVar19._8_8_ = 0,
                     auVar19._0_8_ = uVar36, SUB164(auVar11 * auVar19,8) < uVar33))
                  goto LAB_00104c88;
                }
                local_60 = (Object *)0x0;
                local_58 = "Duplicate remote cache ID %d for peer %d";
                local_50[0] = (undefined1 *)0x28;
                String::parse_latin1((StrRange *)&local_60);
                vformat<int,int>((String_conflict *)&local_58,(int)(StrRange *)&local_60,uVar24);
                _err_print_error("process_simplify_path",
                                 "modules/multiplayer/scene_cache_interface.cpp",0x6e,
                                 "Condition \"peers_info[p_from].recv_nodes.has(id)\" is true.",
                                 (NodePath *)&local_58,0);
                pcVar21 = local_58;
                if (local_58 != (char *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_58 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_58 = (char *)0x0;
                    Memory::free_static(pcVar21 + -0x10,false);
                  }
                }
                pOVar35 = local_60;
                if (local_60 != (Object *)0x0) {
                  LOCK();
                  pOVar2 = local_60 + -0x10;
                  *(long *)pOVar2 = *(long *)pOVar2 + -1;
                  UNLOCK();
                  if (*(long *)pOVar2 == 0) {
                    local_60 = (Object *)0x0;
                    Memory::free_static(pOVar35 + -0x10,false);
                  }
                }
              }
              lVar31 = local_78;
              if (local_78 != 0) {
                LOCK();
                plVar1 = (long *)(local_78 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_78 = 0;
                  Memory::free_static((void *)(lVar31 + -0x10),false);
                }
              }
            }
          }
          goto LAB_00104c5b;
        }
        uVar37 = uVar37 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (iVar30 + 1) * uVar3;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar36;
        lVar31 = SUB168(auVar5 * auVar13,8);
        uVar24 = *(uint *)(*(long *)(this + 0x1f8) + lVar31 * 4);
        iVar30 = SUB164(auVar5 * auVar13,8);
      } while ((uVar24 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = uVar24 * uVar3, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar36, auVar7._8_8_ = 0,
              auVar7._0_8_ = (uint)(((&hash_table_size_primes)[*(uint *)(this + 0x210)] + iVar30) -
                                   SUB164(auVar6 * auVar14,8)) * uVar3, auVar15._8_8_ = 0,
              auVar15._0_8_ = uVar36, uVar37 <= SUB164(auVar7 * auVar15,8)));
    }
  }
  _err_print_error("process_simplify_path","modules/multiplayer/scene_cache_interface.cpp",0x61,
                   "Condition \"!peers_info.has(p_from)\" is true.",0,0);
LAB_00104c5b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* CallableCustomMethodPointer<SceneCacheInterface, void, ObjectID>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneCacheInterface, void, ObjectID>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID>::get_argument_count
          (CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<SceneCacheInterface, void, ObjectID>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<SceneCacheInterface, void, ObjectID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID>::get_object
          (CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010540d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010540d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010540d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105c38(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<SceneCacheInterface, void, ObjectID>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID>::call
          (CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  char cVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar4 << 8);
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_48 = (char *)(uVar4 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00105ea9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00105ea9;
    lVar2 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar3) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar7 = _LC15;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar7;
        }
        uVar7 = Variant::operator_cast_to_ObjectID(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar2 + lVar3),uVar7);
          return;
        }
        goto LAB_0010600f;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00105ea9:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)&local_60);
    operator+((char *)&local_58,(String_conflict *)"Invalid Object id \'");
    String::operator+((String_conflict *)&local_48,(String_conflict *)&local_58);
    _err_print_error(&_LC14,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String_conflict *)&local_48,0,0);
    pcVar5 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar2 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010600f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<SceneCacheInterface,
   ObjectID>(SceneCacheInterface*, char const*, void (SceneCacheInterface::*)(ObjectID)) */

SceneCacheInterface *
create_custom_callable_function_pointer<SceneCacheInterface,ObjectID>
          (SceneCacheInterface *param_1,char *param_2,_func_void_ObjectID *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC27;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010b090;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_ObjectID **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x001062a0) */
/* WARNING: Removing unreachable block (ram,0x001063d0) */
/* WARNING: Removing unreachable block (ram,0x00106549) */
/* WARNING: Removing unreachable block (ram,0x001063dc) */
/* WARNING: Removing unreachable block (ram,0x001063e6) */
/* WARNING: Removing unreachable block (ram,0x0010652b) */
/* WARNING: Removing unreachable block (ram,0x001063f2) */
/* WARNING: Removing unreachable block (ram,0x001063fc) */
/* WARNING: Removing unreachable block (ram,0x0010650d) */
/* WARNING: Removing unreachable block (ram,0x00106408) */
/* WARNING: Removing unreachable block (ram,0x00106412) */
/* WARNING: Removing unreachable block (ram,0x001064ef) */
/* WARNING: Removing unreachable block (ram,0x0010641e) */
/* WARNING: Removing unreachable block (ram,0x00106428) */
/* WARNING: Removing unreachable block (ram,0x001064d1) */
/* WARNING: Removing unreachable block (ram,0x00106434) */
/* WARNING: Removing unreachable block (ram,0x0010643e) */
/* WARNING: Removing unreachable block (ram,0x001064b3) */
/* WARNING: Removing unreachable block (ram,0x00106446) */
/* WARNING: Removing unreachable block (ram,0x00106450) */
/* WARNING: Removing unreachable block (ram,0x00106498) */
/* WARNING: Removing unreachable block (ram,0x00106458) */
/* WARNING: Removing unreachable block (ram,0x0010646e) */
/* WARNING: Removing unreachable block (ram,0x0010647a) */
/* String vformat<int, int>(String const&, int const, int const) */

String_conflict * vformat<int,int>(String_conflict *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> >::insert(ObjectID
   const&) */

undefined1  [16]
HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(ObjectID *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = (&hash_table_size_primes)[uVar32];
  lVar34 = *in_RSI;
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    local_70 = *in_RDX;
    uVar32 = *(uint *)(in_RSI + 4);
    if (lVar34 != 0) goto LAB_0010667f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_70 = *in_RDX;
LAB_0010667f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,(&hash_table_size_primes)[uVar32]);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = local_70 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(lVar34 + uStack_98 * 8) == local_70) goto LAB_00106b31;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)(uint)(((&hash_table_size_primes)[uVar32] + iVar35) -
                                  SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC37 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      lVar34 = *in_RSI;
      goto LAB_00106b31;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = (&hash_table_size_primes)[uVar33];
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = (&hash_table_size_primes)[*(uint *)(in_RSI + 4)];
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  lVar36 = *in_RDX;
  *(long *)(lVar34 + uVar42 * 8) = lVar36;
  uVar33 = lVar36 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = (&hash_table_size_primes)[uVar32];
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar36 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar6 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar36);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar2;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar2;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar6 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar36 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar36 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar36 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar36);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar6 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar36) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00106b31:
  *(uint *)(param_1 + 0xc) = uVar37;
  *(long *)param_1 = lVar34;
  *(uint *)(param_1 + 8) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, ObjectID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, ObjectID> > >::operator[](int const&) */

undefined1  [16] __thiscall
HashMap<int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,ObjectID>>>
::operator[](HashMap<int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,ObjectID>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = (&hash_table_size_primes)[uVar40];
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x1072b3;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00106e13;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar48)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x1072fc;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00107193;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar53 = 1;
        uVar45 = uVar48;
      }
      else {
        uVar45 = uVar53 * uVar48;
      }
      lVar52 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar52 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar50 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar53 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar56._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x18;
            auVar56._8_8_ = lVar47;
            return auVar56;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar54 + 1) * uVar48;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar52 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar48, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar54 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar48,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_00107193:
      uVar45 = CONCAT44(0,(&hash_table_size_primes)[uVar40]);
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar48;
      }
      else {
        uVar43 = uVar37 * uVar48;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar53 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar53 * 8);
            *(undefined8 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar47;
            goto LAB_00107174;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar53 + 1) * uVar48;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar53 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar48, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     (((&hash_table_size_primes)[uVar40] + uVar53) - SUB164(auVar18 * auVar34,8)) *
                     uVar48, auVar35._8_8_ = 0, auVar35._0_8_ = uVar45,
                lVar47 = SUB168(auVar19 * auVar35,8), uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_00106e13:
  if ((float)uVar51 * __LC37 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00107174;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = (&hash_table_size_primes)[uVar38];
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = (&hash_table_size_primes)[uVar40];
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar51 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar37 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
          uVar51 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar52 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar53 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            uVar50 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar50 < uVar54) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar50;
            }
            uVar54 = uVar54 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar52 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  iVar44 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(int *)pauVar42[1] = iVar44;
  *(undefined8 *)(pauVar42[1] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar53 = 0;
  lVar52 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar51 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lStack_90 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar51;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00107174:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 8;
  return auVar57;
}



/* WARNING: Removing unreachable block (ram,0x00107570) */
/* WARNING: Removing unreachable block (ram,0x001076a0) */
/* WARNING: Removing unreachable block (ram,0x00107819) */
/* WARNING: Removing unreachable block (ram,0x001076ac) */
/* WARNING: Removing unreachable block (ram,0x001076b6) */
/* WARNING: Removing unreachable block (ram,0x001077fb) */
/* WARNING: Removing unreachable block (ram,0x001076c2) */
/* WARNING: Removing unreachable block (ram,0x001076cc) */
/* WARNING: Removing unreachable block (ram,0x001077dd) */
/* WARNING: Removing unreachable block (ram,0x001076d8) */
/* WARNING: Removing unreachable block (ram,0x001076e2) */
/* WARNING: Removing unreachable block (ram,0x001077bf) */
/* WARNING: Removing unreachable block (ram,0x001076ee) */
/* WARNING: Removing unreachable block (ram,0x001076f8) */
/* WARNING: Removing unreachable block (ram,0x001077a1) */
/* WARNING: Removing unreachable block (ram,0x00107704) */
/* WARNING: Removing unreachable block (ram,0x0010770e) */
/* WARNING: Removing unreachable block (ram,0x00107783) */
/* WARNING: Removing unreachable block (ram,0x00107716) */
/* WARNING: Removing unreachable block (ram,0x00107720) */
/* WARNING: Removing unreachable block (ram,0x00107768) */
/* WARNING: Removing unreachable block (ram,0x00107728) */
/* WARNING: Removing unreachable block (ram,0x0010773e) */
/* WARNING: Removing unreachable block (ram,0x0010774a) */
/* String vformat<unsigned int, int>(String const&, unsigned int const, int const) */

String_conflict * vformat<unsigned_int,int>(String_conflict *param_1,uint param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00107990) */
/* WARNING: Removing unreachable block (ram,0x00107ac0) */
/* WARNING: Removing unreachable block (ram,0x00107c39) */
/* WARNING: Removing unreachable block (ram,0x00107acc) */
/* WARNING: Removing unreachable block (ram,0x00107ad6) */
/* WARNING: Removing unreachable block (ram,0x00107c1b) */
/* WARNING: Removing unreachable block (ram,0x00107ae2) */
/* WARNING: Removing unreachable block (ram,0x00107aec) */
/* WARNING: Removing unreachable block (ram,0x00107bfd) */
/* WARNING: Removing unreachable block (ram,0x00107af8) */
/* WARNING: Removing unreachable block (ram,0x00107b02) */
/* WARNING: Removing unreachable block (ram,0x00107bdf) */
/* WARNING: Removing unreachable block (ram,0x00107b0e) */
/* WARNING: Removing unreachable block (ram,0x00107b18) */
/* WARNING: Removing unreachable block (ram,0x00107bc1) */
/* WARNING: Removing unreachable block (ram,0x00107b24) */
/* WARNING: Removing unreachable block (ram,0x00107b2e) */
/* WARNING: Removing unreachable block (ram,0x00107ba3) */
/* WARNING: Removing unreachable block (ram,0x00107b36) */
/* WARNING: Removing unreachable block (ram,0x00107b40) */
/* WARNING: Removing unreachable block (ram,0x00107b88) */
/* WARNING: Removing unreachable block (ram,0x00107b48) */
/* WARNING: Removing unreachable block (ram,0x00107b5e) */
/* WARNING: Removing unreachable block (ram,0x00107b6a) */
/* String vformat<int, unsigned int>(String const&, int const, unsigned int const) */

String_conflict * vformat<int,unsigned_int>(String_conflict *param_1,int param_2,uint param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  uint in_ECX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
::_resize_and_rehash
          (HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::insert(int const&, int const&, bool) */

void HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
     ::insert(int *param_1,int *param_2,bool param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 (*pauVar21) [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  undefined8 uVar27;
  void *__s_00;
  undefined4 *in_RCX;
  int iVar28;
  undefined7 in_register_00000011;
  uint *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  char in_R8B;
  ulong uVar35;
  uint uVar36;
  undefined1 (*pauVar37) [16];
  
  puVar29 = (uint *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 2);
  uVar23 = (&hash_table_size_primes)[(uint)param_2[10]];
  if (__s_00 == (void *)0x0) {
    uVar30 = (ulong)uVar23;
    uVar33 = uVar30 * 4;
    uVar35 = uVar30 * 8;
    uVar27 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(param_2 + 4) = uVar27;
    __s_00 = (void *)Memory::alloc_static(uVar35,false);
    *(void **)(param_2 + 2) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 4);
      if ((__s < (void *)((long)__s_00 + uVar35)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar30 != uVar33);
        goto LAB_00107ee6;
      }
      memset(__s,0,uVar33);
      memset(__s_00,0,uVar35);
      iVar28 = param_2[0xb];
      uVar24 = *puVar29;
      goto LAB_00107ef1;
    }
    iVar28 = param_2[0xb];
    uVar24 = *puVar29;
    if (__s_00 != (void *)0x0) goto LAB_00107ef1;
  }
  else {
LAB_00107ee6:
    iVar28 = param_2[0xb];
    uVar24 = *puVar29;
LAB_00107ef1:
    if (iVar28 != 0) {
      uVar35 = CONCAT44(0,(&hash_table_size_primes)[(uint)param_2[10]]);
      uVar33 = *(ulong *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
      uVar22 = (uVar24 >> 0x10 ^ uVar24) * -0x7a143595;
      uVar22 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
      uVar34 = uVar22 ^ uVar22 >> 0x10;
      if (uVar22 == uVar22 >> 0x10) {
        uVar34 = 1;
        uVar30 = uVar33;
      }
      else {
        uVar30 = uVar34 * uVar33;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar30;
      lVar31 = SUB168(auVar5 * auVar13,8);
      uVar22 = *(uint *)(*(long *)(param_2 + 4) + lVar31 * 4);
      uVar25 = SUB164(auVar5 * auVar13,8);
      if (uVar22 != 0) {
        uVar36 = 0;
        do {
          if ((uVar34 == uVar22) &&
             (*(uint *)(*(long *)((long)__s_00 + lVar31 * 8) + 0x10) == uVar24)) {
            pauVar26 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar25 * 8);
            *(undefined4 *)(pauVar26[1] + 4) = *in_RCX;
            goto LAB_00108180;
          }
          uVar36 = uVar36 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar25 + 1) * uVar33;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar35;
          lVar31 = SUB168(auVar6 * auVar14,8);
          uVar22 = *(uint *)(*(long *)(param_2 + 4) + lVar31 * 4);
          uVar25 = SUB164(auVar6 * auVar14,8);
        } while ((uVar22 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar22 * uVar33, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar35, auVar8._8_8_ = 0,
                auVar8._0_8_ = (((&hash_table_size_primes)[(uint)param_2[10]] + uVar25) -
                               SUB164(auVar7 * auVar15,8)) * uVar33, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar35, uVar36 <= SUB164(auVar8 * auVar16,8)));
      }
    }
  }
  if ((float)uVar23 * __LC37 < (float)(iVar28 + 1)) {
    if (param_2[10] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar26 = (undefined1 (*) [16])0x0;
      goto LAB_00108180;
    }
    _resize_and_rehash((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                        *)param_2,param_2[10] + 1);
  }
  uVar1 = *in_RCX;
  uVar23 = *puVar29;
  pauVar26 = (undefined1 (*) [16])operator_new(0x18,"");
  *(ulong *)pauVar26[1] = CONCAT44(uVar1,uVar23);
  *pauVar26 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 6) = pauVar26;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar26;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar26;
    *(undefined8 **)(*pauVar26 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 8) = pauVar26;
  }
  else {
    lVar31 = *(long *)(param_2 + 6);
    *(undefined1 (**) [16])(lVar31 + 8) = pauVar26;
    *(long *)*pauVar26 = lVar31;
    *(undefined1 (**) [16])(param_2 + 6) = pauVar26;
  }
  uVar23 = (*puVar29 >> 0x10 ^ *puVar29) * -0x7a143595;
  uVar24 = (uVar23 ^ uVar23 >> 0xd) * -0x3d4d51cb;
  uVar23 = uVar24 ^ uVar24 >> 0x10;
  if (uVar24 == uVar24 >> 0x10) {
    uVar33 = 1;
    uVar23 = 1;
  }
  else {
    uVar33 = (ulong)uVar23;
  }
  lVar31 = *(long *)(param_2 + 4);
  uVar34 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8);
  uVar24 = (&hash_table_size_primes)[(uint)param_2[10]];
  uVar35 = CONCAT44(0,uVar24);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar33 * lVar3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar35;
  lVar32 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 2);
  puVar29 = (uint *)(lVar31 + lVar32 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar22 = *puVar29;
  pauVar21 = pauVar26;
  while (uVar22 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar22 * lVar3;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar35;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar24 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar3;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar35;
    uVar25 = SUB164(auVar11 * auVar19,8);
    pauVar37 = pauVar21;
    if (uVar25 < uVar34) {
      *puVar29 = uVar23;
      puVar2 = (undefined8 *)(lVar4 + lVar32 * 8);
      pauVar37 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar21;
      uVar23 = uVar22;
      uVar34 = uVar25;
    }
    uVar34 = uVar34 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar3;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    lVar32 = SUB168(auVar12 * auVar20,8);
    puVar29 = (uint *)(lVar31 + lVar32 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    pauVar21 = pauVar37;
    uVar22 = *puVar29;
  }
  *(undefined1 (**) [16])(lVar4 + lVar32 * 8) = pauVar21;
  *puVar29 = uVar23;
  param_2[0xb] = param_2[0xb] + 1;
LAB_00108180:
  *(undefined1 (**) [16])param_1 = pauVar26;
  return;
}



/* HashMap<int, bool, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, bool> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>
::_resize_and_rehash
          (HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, bool, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, bool> > >::insert(int const&, bool const&, bool) */

void HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>
     ::insert(int *param_1,bool *param_2,bool param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 (*pauVar21) [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  undefined8 uVar27;
  void *__s_00;
  undefined1 *in_RCX;
  int iVar28;
  undefined7 in_register_00000011;
  uint *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  char in_R8B;
  ulong uVar35;
  uint uVar36;
  undefined1 (*pauVar37) [16];
  
  puVar29 = (uint *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 8);
  uVar23 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (__s_00 == (void *)0x0) {
    uVar30 = (ulong)uVar23;
    uVar33 = uVar30 * 4;
    uVar35 = uVar30 * 8;
    uVar27 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(param_2 + 0x10) = uVar27;
    __s_00 = (void *)Memory::alloc_static(uVar35,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar35)) && (__s_00 < (void *)((long)__s + uVar33))) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)__s + uVar33 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar30 != uVar33);
        goto LAB_00108556;
      }
      memset(__s,0,uVar33);
      memset(__s_00,0,uVar35);
      iVar28 = *(int *)(param_2 + 0x2c);
      uVar24 = *puVar29;
      goto LAB_00108561;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    uVar24 = *puVar29;
    if (__s_00 != (void *)0x0) goto LAB_00108561;
  }
  else {
LAB_00108556:
    iVar28 = *(int *)(param_2 + 0x2c);
    uVar24 = *puVar29;
LAB_00108561:
    if (iVar28 != 0) {
      uVar35 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(param_2 + 0x28)]);
      uVar33 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar22 = (uVar24 >> 0x10 ^ uVar24) * -0x7a143595;
      uVar22 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
      uVar34 = uVar22 ^ uVar22 >> 0x10;
      if (uVar22 == uVar22 >> 0x10) {
        uVar34 = 1;
        uVar30 = uVar33;
      }
      else {
        uVar30 = uVar34 * uVar33;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar30;
      lVar31 = SUB168(auVar5 * auVar13,8);
      uVar22 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
      uVar25 = SUB164(auVar5 * auVar13,8);
      if (uVar22 != 0) {
        uVar36 = 0;
        do {
          if ((uVar34 == uVar22) &&
             (*(uint *)(*(long *)((long)__s_00 + lVar31 * 8) + 0x10) == uVar24)) {
            pauVar26 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar25 * 8);
            pauVar26[1][4] = *in_RCX;
            goto LAB_001087f0;
          }
          uVar36 = uVar36 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar25 + 1) * uVar33;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar35;
          lVar31 = SUB168(auVar6 * auVar14,8);
          uVar22 = *(uint *)(*(long *)(param_2 + 0x10) + lVar31 * 4);
          uVar25 = SUB164(auVar6 * auVar14,8);
        } while ((uVar22 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar22 * uVar33, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar35, auVar8._8_8_ = 0,
                auVar8._0_8_ = (((&hash_table_size_primes)[*(uint *)(param_2 + 0x28)] + uVar25) -
                               SUB164(auVar7 * auVar15,8)) * uVar33, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar35, uVar36 <= SUB164(auVar8 * auVar16,8)));
      }
    }
  }
  if ((float)uVar23 * __LC37 < (float)(iVar28 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar26 = (undefined1 (*) [16])0x0;
      goto LAB_001087f0;
    }
    _resize_and_rehash((HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  uVar23 = *puVar29;
  uVar1 = *in_RCX;
  pauVar26 = (undefined1 (*) [16])operator_new(0x18,"");
  *(uint *)pauVar26[1] = uVar23;
  pauVar26[1][4] = uVar1;
  *pauVar26 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar26;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar26;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pauVar26;
    *(undefined8 **)(*pauVar26 + 8) = puVar2;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar26;
  }
  else {
    lVar31 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar31 + 8) = pauVar26;
    *(long *)*pauVar26 = lVar31;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar26;
  }
  uVar23 = (*puVar29 >> 0x10 ^ *puVar29) * -0x7a143595;
  uVar24 = (uVar23 ^ uVar23 >> 0xd) * -0x3d4d51cb;
  uVar23 = uVar24 ^ uVar24 >> 0x10;
  if (uVar24 == uVar24 >> 0x10) {
    uVar33 = 1;
    uVar23 = 1;
  }
  else {
    uVar33 = (ulong)uVar23;
  }
  lVar31 = *(long *)(param_2 + 0x10);
  uVar34 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar24 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  uVar35 = CONCAT44(0,uVar24);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar33 * lVar3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar35;
  lVar32 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar29 = (uint *)(lVar31 + lVar32 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar22 = *puVar29;
  pauVar21 = pauVar26;
  while (uVar22 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar22 * lVar3;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar35;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar24 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar3;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar35;
    uVar25 = SUB164(auVar11 * auVar19,8);
    pauVar37 = pauVar21;
    if (uVar25 < uVar34) {
      *puVar29 = uVar23;
      puVar2 = (undefined8 *)(lVar4 + lVar32 * 8);
      pauVar37 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar21;
      uVar23 = uVar22;
      uVar34 = uVar25;
    }
    uVar34 = uVar34 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar3;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    lVar32 = SUB168(auVar12 * auVar20,8);
    puVar29 = (uint *)(lVar31 + lVar32 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    pauVar21 = pauVar37;
    uVar22 = *puVar29;
  }
  *(undefined1 (**) [16])(lVar4 + lVar32 * 8) = pauVar21;
  *puVar29 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_001087f0:
  *(undefined1 (**) [16])param_1 = pauVar26;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, SceneCacheInterface::NodeCache, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   SceneCacheInterface::NodeCache> > >::operator[](ObjectID const&) */

undefined1 * __thiscall
HashMap<ObjectID,SceneCacheInterface::NodeCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneCacheInterface::NodeCache>>>
::operator[](HashMap<ObjectID,SceneCacheInterface::NodeCache,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneCacheInterface::NodeCache>>>
             *this,ObjectID *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  long lVar43;
  int *piVar44;
  int iVar45;
  uint uVar46;
  long lVar47;
  long lVar48;
  uint uVar49;
  undefined8 uVar50;
  uint uVar51;
  uint uVar52;
  ulong uVar53;
  ulong uVar54;
  long lVar55;
  undefined1 (*pauVar56) [16];
  void *local_e8;
  
  local_e8 = *(void **)(this + 8);
  lVar43 = *(long *)param_1;
  uVar49 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar40 = CONCAT44(0,uVar49);
  if (local_e8 == (void *)0x0) {
    uVar39 = uVar40 * 4;
    uVar54 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    local_e8 = (void *)Memory::alloc_static(uVar54,false);
    *(void **)(this + 8) = local_e8;
    if (uVar49 == 0) {
      lVar43 = *(long *)param_1;
      iVar45 = *(int *)(this + 0x2c);
      if (local_e8 == (void *)0x0) goto LAB_00108aeb;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_e8 + uVar54)) &&
         (local_e8 < (void *)((long)pvVar3 + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar39 * 4) = 0;
          *(undefined8 *)((long)local_e8 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar40 != uVar39);
        lVar43 = *(long *)param_1;
        goto LAB_001090a5;
      }
      memset(pvVar3,0,uVar39);
      memset(local_e8,0,uVar54);
      lVar43 = *(long *)param_1;
      iVar45 = *(int *)(this + 0x2c);
    }
LAB_001090a8:
    if (iVar45 != 0) {
      uVar53 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x28)]);
      lVar55 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = lVar43 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar54 * lVar55;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar53;
      lVar47 = SUB168(auVar16 * auVar32,8);
      uVar49 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar46 = SUB164(auVar16 * auVar32,8);
      if (uVar49 != 0) {
        uVar38 = 0;
        do {
          if ((uVar49 == (uint)uVar54) &&
             (*(long *)(*(long *)((long)local_e8 + lVar47 * 8) + 0x10) == lVar43)) {
            lVar43 = *(long *)((long)local_e8 + (ulong)uVar46 * 8);
            uVar49 = *(uint *)(lVar43 + 0x48);
            *(undefined4 *)(lVar43 + 0x18) = 0;
            uVar38 = (&hash_table_size_primes)[uVar49];
            if ((*(int *)(lVar43 + 0x4c) == 0) || (*(long *)(lVar43 + 0x28) == 0))
            goto LAB_001091c5;
            lVar55 = 0;
            if (uVar38 != 0) goto LAB_00109430;
            *(undefined4 *)(lVar43 + 0x4c) = 0;
            *(undefined1 (*) [16])(lVar43 + 0x38) = (undefined1  [16])0x0;
            goto LAB_001091ca;
          }
          uVar38 = uVar38 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)(uVar46 + 1) * lVar55;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar53;
          lVar47 = SUB168(auVar17 * auVar33,8);
          uVar49 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar46 = SUB164(auVar17 * auVar33,8);
        } while ((uVar49 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar49 * lVar55, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar53, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     (ulong)(((&hash_table_size_primes)[*(uint *)(this + 0x28)] + uVar46) -
                            SUB164(auVar18 * auVar34,8)) * lVar55, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar53, uVar38 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
  else {
    iVar45 = 0;
    if (*(int *)(this + 0x2c) != 0) {
      lVar55 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = lVar43 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      uVar52 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar54 * lVar55;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar47 = SUB168(auVar4 * auVar20,8);
      uVar38 = SUB164(auVar4 * auVar20,8);
      uVar46 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      if (uVar46 != 0) {
        do {
          if ((uVar46 == (uint)uVar54) &&
             (lVar43 == *(long *)(*(long *)((long)local_e8 + lVar47 * 8) + 0x10))) {
            pauVar42 = *(undefined1 (**) [16])((long)local_e8 + (ulong)uVar38 * 8);
            goto LAB_00108ffa;
          }
          uVar52 = uVar52 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar38 + 1) * lVar55;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar40;
          lVar47 = SUB168(auVar5 * auVar21,8);
          uVar46 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar38 = SUB164(auVar5 * auVar21,8);
        } while ((uVar46 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar46 * lVar55, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar40, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar38 + uVar49) - SUB164(auVar6 * auVar22,8)) * lVar55,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar40, uVar52 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_001090a5:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_001090a8;
    }
  }
LAB_00108aeb:
  if ((float)uVar40 * __LC37 < (float)(iVar45 + 1)) {
    uVar49 = *(uint *)(this + 0x28);
    if (uVar49 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00108ffa;
    }
    uVar40 = (ulong)(uVar49 + 1);
    uVar46 = (&hash_table_size_primes)[uVar49];
    pvVar3 = *(void **)(this + 0x10);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar49 + 1 < 2) {
      uVar40 = 2;
    }
    uVar49 = (&hash_table_size_primes)[uVar40];
    *(int *)(this + 0x28) = (int)uVar40;
    uVar54 = (ulong)uVar49;
    uVar40 = uVar54 * 4;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    uVar39 = uVar54 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = __s_00;
    if (uVar49 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar54 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar39);
      }
    }
    if (uVar46 != 0) {
      uVar40 = 0;
      do {
        uVar49 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar49 != 0) {
          uVar51 = 0;
          lVar43 = *(long *)(this + 0x10);
          lVar55 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          uVar38 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
          uVar39 = CONCAT44(0,uVar38);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar49 * lVar55;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar39;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar2 = (uint *)(lVar43 + lVar47 * 4);
          iVar45 = SUB164(auVar8 * auVar24,8);
          uVar52 = *puVar2;
          uVar41 = *(undefined8 *)((long)local_e8 + uVar40 * 8);
          while (uVar52 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar52 * lVar55;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar39;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar9 * auVar25,8)) * lVar55;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar39;
            uVar37 = SUB164(auVar10 * auVar26,8);
            uVar50 = uVar41;
            if (uVar37 < uVar51) {
              *puVar2 = uVar49;
              puVar1 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar50 = *puVar1;
              *puVar1 = uVar41;
              uVar49 = uVar52;
              uVar51 = uVar37;
            }
            uVar51 = uVar51 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar45 + 1) * lVar55;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar39;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar2 = (uint *)(lVar43 + lVar47 * 4);
            iVar45 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar50;
            uVar52 = *puVar2;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar2 = uVar49;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar46);
      Memory::free_static(local_e8,false);
      Memory::free_static(pvVar3,false);
    }
  }
  uVar40 = 1;
  uVar41 = *(undefined8 *)param_1;
  do {
    if (0x16 < (uint)(&hash_table_size_primes)[uVar40]) goto LAB_00108d61;
    uVar40 = uVar40 + 1;
  } while (uVar40 != 0x1d);
  uVar40 = 0;
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_00108d61:
  uVar39 = 1;
  do {
    if (0x16 < (uint)(&hash_table_size_primes)[uVar39]) goto LAB_00108db2;
    uVar39 = uVar39 + 1;
  } while (uVar39 != 0x1d);
  uVar39 = 0;
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_00108db2:
  pauVar42 = (undefined1 (*) [16])operator_new(0x80,"");
  uVar49 = (&hash_table_size_primes)[uVar40 & 0xffffffff];
  *pauVar42 = (undefined1  [16])0x0;
  *(undefined4 *)(pauVar42[1] + 8) = 0;
  *(undefined8 *)pauVar42[1] = uVar41;
  lVar43 = 1;
  *(undefined8 *)(pauVar42[4] + 8) = 0;
  *(undefined1 (*) [16])(pauVar42[2] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar42[3] + 8) = (undefined1  [16])0x0;
  if (5 < uVar49) {
    do {
      if (uVar49 <= (uint)(&hash_table_size_primes)[lVar43]) {
        *(int *)(pauVar42[4] + 8) = (int)lVar43;
        goto LAB_00108e43;
      }
      lVar43 = lVar43 + 1;
    } while (lVar43 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00108e43:
  lVar43 = 1;
  *(undefined8 *)(pauVar42[7] + 8) = 0;
  uVar49 = (&hash_table_size_primes)[uVar39 & 0xffffffff];
  *(undefined1 (*) [16])(pauVar42[5] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar42[6] + 8) = (undefined1  [16])0x0;
  if (5 < uVar49) {
    do {
      if (uVar49 <= (uint)(&hash_table_size_primes)[lVar43]) {
        *(int *)(pauVar42[7] + 8) = (int)lVar43;
        puVar1 = *(undefined8 **)(this + 0x20);
        goto joined_r0x001092ef;
      }
      lVar43 = lVar43 + 1;
    } while (lVar43 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  puVar1 = *(undefined8 **)(this + 0x20);
joined_r0x001092ef:
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar1 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar1;
  }
  lVar43 = *(long *)param_1;
  lVar55 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = lVar43 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar39 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar39 = 1;
  }
  uVar52 = 0;
  lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar38 = (uint)uVar39;
  uVar49 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar40 = CONCAT44(0,uVar49);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar39 * lVar43;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar40;
  lVar48 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar55 + lVar48 * 4);
  iVar45 = SUB164(auVar12 * auVar28,8);
  uVar46 = *puVar2;
  pauVar36 = pauVar42;
  while (uVar46 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar46 * lVar43;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((iVar45 + uVar49) - SUB164(auVar13 * auVar29,8)) * lVar43;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uVar38 = SUB164(auVar14 * auVar30,8);
    pauVar56 = pauVar36;
    if (uVar38 < uVar52) {
      *puVar2 = (uint)uVar39;
      uVar39 = (ulong)uVar46;
      puVar1 = (undefined8 *)(lVar47 + lVar48 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar1;
      *puVar1 = pauVar36;
      uVar52 = uVar38;
    }
    uVar38 = (uint)uVar39;
    uVar52 = uVar52 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar45 + 1) * lVar43;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    lVar48 = SUB168(auVar15 * auVar31,8);
    puVar2 = (uint *)(lVar55 + lVar48 * 4);
    iVar45 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar56;
    uVar46 = *puVar2;
  }
  *(undefined1 (**) [16])(lVar47 + lVar48 * 8) = pauVar36;
  *puVar2 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  goto LAB_00108ffa;
LAB_00109430:
  do {
    piVar44 = (int *)(*(long *)(lVar43 + 0x30) + lVar55);
    if (*piVar44 != 0) {
      *piVar44 = 0;
      Memory::free_static(*(void **)(*(long *)(lVar43 + 0x28) + lVar55 * 2),false);
      *(undefined8 *)(*(long *)(lVar43 + 0x28) + lVar55 * 2) = 0;
    }
    lVar55 = lVar55 + 4;
  } while ((ulong)uVar38 << 2 != lVar55);
  uVar49 = *(uint *)(lVar43 + 0x48);
  *(undefined4 *)(lVar43 + 0x4c) = 0;
  *(undefined1 (*) [16])(lVar43 + 0x38) = (undefined1  [16])0x0;
  uVar38 = (&hash_table_size_primes)[uVar49];
LAB_001091c5:
  if (uVar38 < 0x17) {
LAB_001091ca:
    if (uVar49 != 0x1c) {
      uVar40 = (ulong)uVar49;
      do {
        uVar38 = (int)uVar40 + 1;
        uVar40 = (ulong)uVar38;
        if (0x16 < (uint)(&hash_table_size_primes)[uVar40]) {
          if (uVar38 != uVar49) {
            if (*(long *)(lVar43 + 0x28) == 0) {
              *(uint *)(lVar43 + 0x48) = uVar38;
            }
            else {
              HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
              ::_resize_and_rehash
                        ((HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                          *)(lVar43 + 0x20),uVar38);
            }
          }
          goto LAB_0010921b;
        }
      } while (uVar38 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010921b:
  uVar49 = *(uint *)(lVar43 + 0x78);
  uVar38 = (&hash_table_size_primes)[uVar49];
  if ((*(int *)(lVar43 + 0x7c) == 0) || (*(long *)(lVar43 + 0x58) == 0)) {
LAB_00109230:
    if (uVar38 < 0x17) goto LAB_00109235;
  }
  else {
    lVar55 = 0;
    if (uVar38 != 0) {
      do {
        piVar44 = (int *)(*(long *)(lVar43 + 0x60) + lVar55);
        if (*piVar44 != 0) {
          *piVar44 = 0;
          Memory::free_static(*(void **)(*(long *)(lVar43 + 0x58) + lVar55 * 2),false);
          *(undefined8 *)(*(long *)(lVar43 + 0x58) + lVar55 * 2) = 0;
        }
        lVar55 = lVar55 + 4;
      } while ((ulong)uVar38 << 2 != lVar55);
      uVar49 = *(uint *)(lVar43 + 0x78);
      *(undefined4 *)(lVar43 + 0x7c) = 0;
      *(undefined1 (*) [16])(lVar43 + 0x68) = (undefined1  [16])0x0;
      uVar38 = (&hash_table_size_primes)[uVar49];
      goto LAB_00109230;
    }
    *(undefined4 *)(lVar43 + 0x7c) = 0;
    *(undefined1 (*) [16])(lVar43 + 0x68) = (undefined1  [16])0x0;
LAB_00109235:
    if (uVar49 != 0x1c) {
      uVar40 = (ulong)uVar49;
      do {
        uVar38 = (int)uVar40 + 1;
        uVar40 = (ulong)uVar38;
        if (0x16 < (uint)(&hash_table_size_primes)[uVar40]) {
          if (uVar38 != uVar49) {
            if (*(long *)(lVar43 + 0x58) == 0) {
              *(uint *)(lVar43 + 0x78) = uVar38;
            }
            else {
              HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>
              ::_resize_and_rehash
                        ((HashMap<int,bool,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,bool>>>
                          *)(lVar43 + 0x50),uVar38);
            }
          }
          goto LAB_00109285;
        }
      } while (uVar38 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_00109285:
  pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar46 * 8);
LAB_00108ffa:
  return pauVar42[1] + 8;
}



/* HashMap<int, SceneCacheInterface::PeerInfo, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, SceneCacheInterface::PeerInfo> >
   >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
::_resize_and_rehash
          (HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* HashMap<int, SceneCacheInterface::RecvNode, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, SceneCacheInterface::RecvNode> >
   >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<int,SceneCacheInterface::RecvNode,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::RecvNode>>>
::_resize_and_rehash
          (HashMap<int,SceneCacheInterface::RecvNode,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::RecvNode>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, SceneCacheInterface::RecvNode, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, SceneCacheInterface::RecvNode> > >::insert(int const&,
   SceneCacheInterface::RecvNode const&, bool) */

int * HashMap<int,SceneCacheInterface::RecvNode,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::RecvNode>>>
      ::insert(int *param_1,RecvNode *param_2,bool param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long *plVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  void *__s_00;
  long *in_RCX;
  int iVar26;
  undefined7 in_register_00000011;
  uint *puVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  char in_R8B;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  long *plVar35;
  long in_FS_OFFSET;
  long *local_88;
  NodePath local_48 [8];
  long local_40;
  
  puVar27 = (uint *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (__s_00 == (void *)0x0) {
    uVar28 = (ulong)uVar22;
    uVar31 = uVar28 * 4;
    uVar32 = uVar28 * 8;
    uVar25 = Memory::alloc_static(uVar31,false);
    *(undefined8 *)(param_2 + 0x10) = uVar25;
    __s_00 = (void *)Memory::alloc_static(uVar32,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar22 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar32)) && (__s_00 < (void *)((long)__s + uVar31))) {
        uVar31 = 0;
        do {
          *(undefined4 *)((long)__s + uVar31 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar31 * 8) = 0;
          uVar31 = uVar31 + 1;
        } while (uVar28 != uVar31);
        goto LAB_001099d5;
      }
      memset(__s,0,uVar31);
      memset(__s_00,0,uVar32);
      uVar23 = *puVar27;
      iVar26 = *(int *)(param_2 + 0x2c);
      goto LAB_001099de;
    }
    uVar23 = *puVar27;
    iVar26 = *(int *)(param_2 + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_001099de;
  }
  else {
LAB_001099d5:
    uVar23 = *puVar27;
    iVar26 = *(int *)(param_2 + 0x2c);
LAB_001099de:
    if (iVar26 != 0) {
      uVar31 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar32 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(param_2 + 0x28)]);
      uVar21 = (uVar23 >> 0x10 ^ uVar23) * -0x7a143595;
      uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
      uVar34 = uVar21 ^ uVar21 >> 0x10;
      if (uVar21 == uVar21 >> 0x10) {
        uVar34 = 1;
        uVar28 = uVar31;
      }
      else {
        uVar28 = uVar34 * uVar31;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar32;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar28;
      lVar29 = SUB168(auVar4 * auVar12,8);
      uVar21 = *(uint *)(*(long *)(param_2 + 0x10) + lVar29 * 4);
      uVar24 = SUB164(auVar4 * auVar12,8);
      if (uVar21 != 0) {
        uVar33 = 0;
        do {
          if ((uVar34 == uVar21) &&
             (*(uint *)(*(long *)((long)__s_00 + lVar29 * 8) + 0x10) == uVar23)) {
            lVar29 = *(long *)((long)__s_00 + (ulong)uVar24 * 8);
            *(long *)(lVar29 + 0x18) = *in_RCX;
            NodePath::operator=((NodePath *)(lVar29 + 0x20),(NodePath *)(in_RCX + 1));
            local_88 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar24 * 8);
            goto LAB_00109cdb;
          }
          uVar33 = uVar33 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar24 + 1) * uVar31;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar32;
          lVar29 = SUB168(auVar5 * auVar13,8);
          uVar21 = *(uint *)(*(long *)(param_2 + 0x10) + lVar29 * 4);
          uVar24 = SUB164(auVar5 * auVar13,8);
        } while ((uVar21 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar21 * uVar31, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar32, auVar7._8_8_ = 0,
                auVar7._0_8_ = (((&hash_table_size_primes)[*(uint *)(param_2 + 0x28)] + uVar24) -
                               SUB164(auVar6 * auVar14,8)) * uVar31, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar32, uVar33 <= SUB164(auVar7 * auVar15,8)));
      }
    }
  }
  if ((float)uVar22 * __LC37 < (float)(iVar26 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_88 = (long *)0x0;
      goto LAB_00109cdb;
    }
    _resize_and_rehash((HashMap<int,SceneCacheInterface::RecvNode,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::RecvNode>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  uVar22 = *puVar27;
  lVar29 = *in_RCX;
  NodePath::NodePath(local_48,(NodePath *)(in_RCX + 1));
  local_88 = (long *)operator_new(0x28,"");
  *local_88 = 0;
  local_88[1] = 0;
  *(uint *)(local_88 + 2) = uVar22;
  local_88[3] = lVar29;
  NodePath::NodePath((NodePath *)(local_88 + 4),local_48);
  NodePath::~NodePath(local_48);
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_88;
    *(long **)(param_2 + 0x20) = local_88;
  }
  else if (in_R8B == '\0') {
    *puVar1 = local_88;
    local_88[1] = (long)puVar1;
    *(long **)(param_2 + 0x20) = local_88;
  }
  else {
    lVar29 = *(long *)(param_2 + 0x18);
    *(long **)(lVar29 + 8) = local_88;
    *local_88 = lVar29;
    *(long **)(param_2 + 0x18) = local_88;
  }
  uVar22 = (*puVar27 >> 0x10 ^ *puVar27) * -0x7a143595;
  uVar23 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
  uVar22 = uVar23 ^ uVar23 >> 0x10;
  if (uVar23 == uVar23 >> 0x10) {
    uVar31 = 1;
    uVar22 = 1;
  }
  else {
    uVar31 = (ulong)uVar22;
  }
  lVar29 = *(long *)(param_2 + 0x10);
  uVar34 = 0;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar23 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  uVar32 = CONCAT44(0,uVar23);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar31 * lVar2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar32;
  lVar30 = SUB168(auVar8 * auVar16,8);
  lVar3 = *(long *)(param_2 + 8);
  puVar27 = (uint *)(lVar29 + lVar30 * 4);
  iVar26 = SUB164(auVar8 * auVar16,8);
  uVar21 = *puVar27;
  plVar20 = local_88;
  while (uVar21 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar21 * lVar2;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar32;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar23 + iVar26) - SUB164(auVar9 * auVar17,8)) * lVar2;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar32;
    uVar24 = SUB164(auVar10 * auVar18,8);
    plVar35 = plVar20;
    if (uVar24 < uVar34) {
      *puVar27 = uVar22;
      puVar1 = (undefined8 *)(lVar3 + lVar30 * 8);
      plVar35 = (long *)*puVar1;
      *puVar1 = plVar20;
      uVar22 = uVar21;
      uVar34 = uVar24;
    }
    uVar34 = uVar34 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar26 + 1) * lVar2;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar32;
    lVar30 = SUB168(auVar11 * auVar19,8);
    puVar27 = (uint *)(lVar29 + lVar30 * 4);
    iVar26 = SUB164(auVar11 * auVar19,8);
    plVar20 = plVar35;
    uVar21 = *puVar27;
  }
  *(long **)(lVar3 + lVar30 * 8) = plVar20;
  *puVar27 = uVar22;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00109cdb:
  *(long **)param_1 = local_88;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, SceneCacheInterface::PeerInfo, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, SceneCacheInterface::PeerInfo> > >::operator[](int
   const&) */

undefined1 * __thiscall
HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
::operator[](HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 (*pauVar29) [16];
  undefined8 uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 (*pauVar34) [16];
  undefined8 uVar35;
  void *__s_00;
  ulong uVar36;
  int iVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  undefined1 (*pauVar45) [16];
  long in_FS_OFFSET;
  uint local_c8;
  uint local_a0;
  PeerInfo local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  uVar30 = _LC53;
  __s_00 = *(void **)(this + 8);
  uVar32 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar33 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar44 = CONCAT44(0,uVar33);
  if (__s_00 == (void *)0x0) {
    uVar36 = uVar44 * 4;
    local_90 = (undefined1  [16])0x0;
    uVar39 = uVar44 * 8;
    local_80 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_70 = _LC53;
    local_48 = _LC53;
    uVar35 = Memory::alloc_static(uVar36,false);
    *(undefined8 *)(this + 0x10) = uVar35;
    __s_00 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = __s_00;
    if (uVar33 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar39)) && (__s_00 < (void *)((long)__s + uVar36))) {
        uVar36 = 0;
        do {
          *(undefined4 *)((long)__s + uVar36 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar36 * 8) = 0;
          uVar36 = uVar36 + 1;
        } while (uVar44 != uVar36);
        uVar32 = *param_1;
        iVar37 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar36);
        memset(__s_00,0,uVar39);
        uVar32 = *param_1;
        iVar37 = *(int *)(this + 0x2c);
      }
      goto LAB_0010a001;
    }
    uVar32 = *param_1;
    iVar37 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_0010a001;
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar36 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar31 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar31 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
      uVar42 = uVar31 ^ uVar31 >> 0x10;
      if (uVar31 == uVar31 >> 0x10) {
        uVar42 = 1;
        uVar39 = uVar36;
      }
      else {
        uVar39 = uVar42 * uVar36;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar44;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar39;
      lVar38 = SUB168(auVar5 * auVar17,8);
      uVar43 = SUB164(auVar5 * auVar17,8);
      uVar31 = *(uint *)(*(long *)(this + 0x10) + lVar38 * 4);
      if (uVar31 != 0) {
        uVar41 = 0;
        do {
          if ((uVar42 == uVar31) &&
             (uVar32 == *(uint *)(*(long *)((long)__s_00 + lVar38 * 8) + 0x10))) {
            pauVar34 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar43 * 8);
            goto LAB_00109f9a;
          }
          uVar41 = uVar41 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar43 + 1) * uVar36;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar44;
          lVar38 = SUB168(auVar6 * auVar18,8);
          uVar31 = *(uint *)(*(long *)(this + 0x10) + lVar38 * 4);
          uVar43 = SUB164(auVar6 * auVar18,8);
        } while ((uVar31 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar31 * uVar36, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar44, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar43 + uVar33) - SUB164(auVar7 * auVar19,8)) * uVar36,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar44, uVar41 <= SUB164(auVar8 * auVar20,8)));
      }
    }
    local_90 = (undefined1  [16])0x0;
    local_70 = _LC53;
    local_48 = _LC53;
    local_80 = (undefined1  [16])0x0;
    iVar37 = *(int *)(this + 0x2c);
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
LAB_0010a001:
    if (iVar37 != 0) {
      uVar44 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar36 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0x28)]);
      uVar31 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar31 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
      local_a0 = uVar31 ^ uVar31 >> 0x10;
      if (uVar31 == uVar31 >> 0x10) {
        local_a0 = 1;
        uVar39 = uVar44;
      }
      else {
        uVar39 = local_a0 * uVar44;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar36;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar39;
      lVar38 = SUB168(auVar9 * auVar21,8);
      uVar42 = SUB164(auVar9 * auVar21,8);
      uVar31 = *(uint *)(*(long *)(this + 0x10) + lVar38 * 4);
      if (uVar31 != 0) {
        uVar43 = 0;
        do {
          if ((local_a0 == uVar31) &&
             (uVar32 == *(uint *)(*(long *)((long)__s_00 + lVar38 * 8) + 0x10))) {
            SceneCacheInterface::PeerInfo::operator=
                      ((PeerInfo *)(*(long *)((long)__s_00 + (ulong)uVar42 * 8) + 0x18),local_98);
            pauVar34 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar42 * 8);
            goto LAB_00109f9a;
          }
          uVar43 = uVar43 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (uVar42 + 1) * uVar44;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar36;
          lVar38 = SUB168(auVar10 * auVar22,8);
          uVar31 = *(uint *)(*(long *)(this + 0x10) + lVar38 * 4);
          uVar42 = SUB164(auVar10 * auVar22,8);
        } while ((uVar31 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = uVar31 * uVar44, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar36, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     (((&hash_table_size_primes)[*(uint *)(this + 0x28)] + uVar42) -
                     SUB164(auVar11 * auVar23,8)) * uVar44, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar36, uVar43 <= SUB164(auVar12 * auVar24,8)));
      }
    }
  }
  if ((float)uVar33 * __LC37 < (float)(iVar37 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar34 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00109f9a;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  uVar44 = 1;
  iVar37 = *param_1;
  do {
    if (0x16 < (uint)(&hash_table_size_primes)[uVar44]) goto LAB_0010a1aa;
    uVar44 = uVar44 + 1;
  } while (uVar44 != 0x1d);
  uVar44 = 0;
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_0010a1aa:
  pauVar34 = (undefined1 (*) [16])operator_new(0x70,"");
  uVar32 = (&hash_table_size_primes)[uVar44 & 0xffffffff];
  *(int *)pauVar34[1] = iVar37;
  *(undefined8 *)pauVar34[4] = 0;
  *pauVar34 = (undefined1  [16])0x0;
  pauVar34[2] = (undefined1  [16])0x0;
  pauVar34[3] = (undefined1  [16])0x0;
  lVar38 = 1;
  if (5 < uVar32) {
    do {
      if (uVar32 <= (uint)(&hash_table_size_primes)[lVar38]) {
        *(int *)pauVar34[4] = (int)lVar38;
        goto LAB_0010a231;
      }
      lVar38 = lVar38 + 1;
    } while (lVar38 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010a231:
  *(undefined1 (*) [16])(pauVar34[4] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar34[6] + 8) = uVar30;
  *(undefined1 (*) [16])(pauVar34[5] + 8) = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar34;
  }
  else {
    *puVar2 = pauVar34;
    *(undefined8 **)(*pauVar34 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar34;
  uVar32 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar33 = (uVar32 ^ uVar32 >> 0xd) * -0x3d4d51cb;
  uVar32 = uVar33 ^ uVar33 >> 0x10;
  if (uVar33 == uVar33 >> 0x10) {
    uVar44 = 1;
    uVar32 = 1;
  }
  else {
    uVar44 = (ulong)uVar32;
  }
  uVar42 = 0;
  lVar38 = *(long *)(this + 0x10);
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar33 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar36 = CONCAT44(0,uVar33);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar44 * lVar3;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar36;
  lVar40 = SUB168(auVar13 * auVar25,8);
  lVar4 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar38 + lVar40 * 4);
  iVar37 = SUB164(auVar13 * auVar25,8);
  uVar31 = *puVar1;
  pauVar29 = pauVar34;
  while (uVar31 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar31 * lVar3;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar36;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar33 + iVar37) - SUB164(auVar14 * auVar26,8)) * lVar3;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar36;
    local_c8 = SUB164(auVar15 * auVar27,8);
    pauVar45 = pauVar29;
    if (local_c8 < uVar42) {
      *puVar1 = uVar32;
      puVar2 = (undefined8 *)(lVar4 + lVar40 * 8);
      pauVar45 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar29;
      uVar32 = uVar31;
      uVar42 = local_c8;
    }
    uVar42 = uVar42 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar37 + 1) * lVar3;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar36;
    lVar40 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar38 + lVar40 * 4);
    iVar37 = SUB164(auVar16 * auVar28,8);
    pauVar29 = pauVar45;
    uVar31 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar4 + lVar40 * 8) = pauVar29;
  *puVar1 = uVar32;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00109f9a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar34[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, SceneCacheInterface::PeerInfo, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, SceneCacheInterface::PeerInfo> > >::insert(int const&,
   SceneCacheInterface::PeerInfo const&, bool) */

int * HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
      ::insert(int *param_1,PeerInfo *param_2,bool param_3)

{
  int *piVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  void *pvVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  void *pvVar30;
  undefined8 uVar31;
  PeerInfo *in_RCX;
  int iVar32;
  undefined7 in_register_00000011;
  uint *puVar33;
  ulong uVar34;
  long lVar35;
  uint uVar36;
  undefined8 *puVar37;
  ulong uVar38;
  char in_R8B;
  uint uVar39;
  undefined8 *puVar40;
  void *pvVar41;
  long *plVar42;
  long *plVar43;
  int *piVar44;
  long in_FS_OFFSET;
  undefined1 local_f8 [16];
  int local_e8;
  int local_c0 [2];
  undefined1 local_b8 [16];
  uint local_a8;
  RecvNode local_a0 [8];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  ulong local_50;
  long local_40;
  
  puVar33 = (uint *)CONCAT71(in_register_00000011,param_3);
  pvVar25 = *(void **)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar20 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (pvVar25 == (void *)0x0) {
    uVar34 = (ulong)uVar20;
    uVar23 = uVar34 * 4;
    uVar38 = uVar34 * 8;
    uVar31 = Memory::alloc_static(uVar23,false);
    *(undefined8 *)(param_2 + 0x10) = uVar31;
    pvVar25 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(param_2 + 8) = pvVar25;
    if (uVar20 != 0) {
      pvVar41 = *(void **)(param_2 + 0x10);
      if ((pvVar41 < (void *)((long)pvVar25 + uVar38)) &&
         (pvVar25 < (void *)((long)pvVar41 + uVar23))) {
        uVar23 = 0;
        do {
          *(undefined4 *)((long)pvVar41 + uVar23 * 4) = 0;
          *(undefined8 *)((long)pvVar25 + uVar23 * 8) = 0;
          uVar23 = uVar23 + 1;
        } while (uVar34 != uVar23);
        goto LAB_0010a58e;
      }
      memset(pvVar41,0,uVar23);
      memset(pvVar25,0,uVar38);
      uVar21 = *puVar33;
      iVar32 = *(int *)(param_2 + 0x2c);
      goto LAB_0010a59e;
    }
    iVar32 = *(int *)(param_2 + 0x2c);
    uVar21 = *puVar33;
    if (pvVar25 != (void *)0x0) goto LAB_0010a59e;
  }
  else {
LAB_0010a58e:
    uVar21 = *puVar33;
    iVar32 = *(int *)(param_2 + 0x2c);
LAB_0010a59e:
    if (iVar32 != 0) {
      uVar23 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar38 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(param_2 + 0x28)]);
      uVar19 = (uVar21 >> 0x10 ^ uVar21) * -0x7a143595;
      uVar19 = (uVar19 ^ uVar19 >> 0xd) * -0x3d4d51cb;
      uVar36 = uVar19 ^ uVar19 >> 0x10;
      if (uVar19 == uVar19 >> 0x10) {
        uVar36 = 1;
        uVar34 = uVar23;
      }
      else {
        uVar34 = uVar36 * uVar23;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar38;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar34;
      lVar35 = SUB168(auVar3 * auVar11,8);
      uVar22 = SUB164(auVar3 * auVar11,8);
      uVar19 = *(uint *)(*(long *)(param_2 + 0x10) + lVar35 * 4);
      if (uVar19 != 0) {
        uVar39 = 0;
        do {
          if ((uVar36 == uVar19) &&
             (*(uint *)(*(long *)((long)pvVar25 + lVar35 * 8) + 0x10) == uVar21)) {
            SceneCacheInterface::PeerInfo::operator=
                      ((PeerInfo *)(*(long *)((long)pvVar25 + (ulong)uVar22 * 8) + 0x18),in_RCX);
            plVar29 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar22 * 8);
            goto LAB_0010ac6f;
          }
          uVar39 = uVar39 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (uVar22 + 1) * uVar23;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar38;
          lVar35 = SUB168(auVar4 * auVar12,8);
          uVar19 = *(uint *)(*(long *)(param_2 + 0x10) + lVar35 * 4);
          uVar22 = SUB164(auVar4 * auVar12,8);
        } while ((uVar19 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = uVar19 * uVar23, auVar13._8_8_ = 0,
                auVar13._0_8_ = uVar38, auVar6._8_8_ = 0,
                auVar6._0_8_ = (((&hash_table_size_primes)[*(uint *)(param_2 + 0x28)] + uVar22) -
                               SUB164(auVar5 * auVar13,8)) * uVar23, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar38, uVar39 <= SUB164(auVar6 * auVar14,8)));
      }
    }
  }
  if ((float)uVar20 * __LC37 < (float)(iVar32 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      plVar29 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010ac6f;
    }
    _resize_and_rehash((HashMap<int,SceneCacheInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::PeerInfo>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  local_78 = 0;
  local_b8 = (undefined1  [16])0x0;
  uVar20 = *puVar33;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  uVar23 = 1;
  local_a8 = uVar20;
  if (5 < (uint)(&hash_table_size_primes)[*(uint *)(in_RCX + 0x28)]) {
    do {
      if ((uint)(&hash_table_size_primes)[*(uint *)(in_RCX + 0x28)] <=
          (uint)(&hash_table_size_primes)[uVar23]) {
        local_78 = uVar23 & 0xffffffff;
        if (*(int *)(in_RCX + 0x2c) != 0) goto LAB_0010a78c;
        local_e8 = 0;
        goto LAB_0010aca8;
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  local_e8 = *(int *)(in_RCX + 0x2c);
  if (local_e8 == 0) {
LAB_0010aca8:
    puVar40 = (undefined8 *)0x0;
    local_f8 = (undefined1  [16])0x0;
  }
  else {
LAB_0010a78c:
    plVar29 = *(long **)(in_RCX + 0x18);
    if (plVar29 == (long *)0x0) {
      local_e8 = 0;
      local_f8 = (undefined1  [16])0x0;
      puVar40 = (undefined8 *)0x0;
    }
    else {
      do {
        HashMap<int,SceneCacheInterface::RecvNode,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::RecvNode>>>
        ::insert(local_c0,local_a0,(bool)((char)plVar29 + '\x10'));
        plVar29 = (long *)*plVar29;
      } while (plVar29 != (long *)0x0);
      local_e8 = local_78._4_4_;
      local_f8 = local_b8;
      puVar40 = (undefined8 *)local_98._0_8_;
      uVar20 = local_a8;
    }
  }
  pvVar25 = (void *)0x0;
  local_70 = (undefined1  [16])0x0;
  uVar23 = *(ulong *)(in_RCX + 0x50);
  local_60 = (undefined1  [16])0x0;
  uVar21 = (uint)(uVar23 >> 0x20);
  local_50 = uVar23;
  if (uVar21 != 0) {
    uVar19 = (&hash_table_size_primes)[uVar23 & 0xffffffff];
    uVar38 = (ulong)uVar19 * 4;
    lVar24 = Memory::alloc_static(uVar38,false);
    local_60._8_8_ = lVar24;
    pvVar25 = (void *)Memory::alloc_static((ulong)uVar19 * 8,false);
    local_70._0_8_ = pvVar25;
    lVar26 = Memory::alloc_static(uVar38,false);
    local_60._0_8_ = lVar26;
    lVar27 = Memory::alloc_static(uVar38,false);
    lVar35 = *(long *)(in_RCX + 0x30);
    lVar2 = *(long *)(in_RCX + 0x40);
    local_70._8_8_ = lVar27;
    lVar28 = 0;
    do {
      *(undefined8 *)((long)pvVar25 + lVar28 * 2) = *(undefined8 *)(lVar35 + lVar28 * 2);
      *(undefined4 *)(lVar26 + lVar28) = *(undefined4 *)(lVar2 + lVar28);
      lVar28 = lVar28 + 4;
    } while (lVar28 != (ulong)uVar21 << 2);
    if (uVar19 != 0) {
      lVar35 = *(long *)(in_RCX + 0x48);
      lVar2 = *(long *)(in_RCX + 0x38);
      lVar26 = 0;
      do {
        *(undefined4 *)(lVar24 + lVar26) = *(undefined4 *)(lVar35 + lVar26);
        *(undefined4 *)(lVar27 + lVar26) = *(undefined4 *)(lVar2 + lVar26);
        lVar26 = lVar26 + 4;
      } while (uVar38 - lVar26 != 0);
    }
  }
  plVar29 = (long *)operator_new(0x70,"");
  *(uint *)(plVar29 + 2) = uVar20;
  plVar29[8] = 0;
  *plVar29 = local_f8._0_8_;
  plVar29[1] = local_f8._8_8_;
  *(undefined1 (*) [16])(plVar29 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(plVar29 + 6) = (undefined1  [16])0x0;
  uVar20 = (&hash_table_size_primes)[local_78 & 0xffffffff];
  lVar35 = 1;
  if (5 < uVar20) {
    do {
      if (uVar20 <= (uint)(&hash_table_size_primes)[lVar35]) {
        *(int *)(plVar29 + 8) = (int)lVar35;
        goto LAB_0010a9d6;
      }
      lVar35 = lVar35 + 1;
    } while (lVar35 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010a9d6:
  if ((local_e8 != 0) && ((long *)local_88._0_8_ != (long *)0x0)) {
    plVar42 = (long *)local_88._0_8_;
    do {
      HashMap<int,SceneCacheInterface::RecvNode,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneCacheInterface::RecvNode>>>
      ::insert(local_c0,(RecvNode *)(plVar29 + 3),(bool)((char)plVar42 + '\x10'));
      plVar42 = (long *)*plVar42;
    } while (plVar42 != (long *)0x0);
  }
  *(undefined1 (*) [16])(plVar29 + 9) = (undefined1  [16])0x0;
  plVar29[0xd] = uVar23;
  *(undefined1 (*) [16])(plVar29 + 0xb) = (undefined1  [16])0x0;
  if (uVar21 == 0) {
LAB_0010aa4b:
    if (pvVar25 != (void *)0x0) {
LAB_0010aa50:
      pvVar30 = (void *)local_60._8_8_;
      pvVar41 = (void *)local_70._8_8_;
      goto LAB_0010aa60;
    }
  }
  else {
    uVar21 = (&hash_table_size_primes)[uVar23 & 0xffffffff];
    uVar38 = (ulong)uVar21;
    uVar23 = uVar38 * 4;
    lVar35 = Memory::alloc_static(uVar23,false);
    plVar29[0xc] = lVar35;
    lVar35 = Memory::alloc_static(uVar38 * 8,false);
    plVar29[9] = lVar35;
    lVar35 = Memory::alloc_static(uVar23,false);
    plVar29[0xb] = lVar35;
    lVar35 = Memory::alloc_static(uVar23,false);
    plVar29[10] = lVar35;
    if (*(int *)((long)plVar29 + 0x6c) == 0) {
      if (uVar21 != 0) goto LAB_0010ad69;
      goto LAB_0010aa4b;
    }
    lVar2 = plVar29[9];
    lVar26 = 0;
    lVar24 = plVar29[0xb];
    do {
      *(undefined8 *)(lVar2 + lVar26 * 8) = *(undefined8 *)((long)pvVar25 + lVar26 * 8);
      *(undefined4 *)(lVar24 + lVar26 * 4) = *(undefined4 *)(local_60._0_8_ + lVar26 * 4);
      lVar26 = lVar26 + 1;
    } while ((uint)lVar26 < *(uint *)((long)plVar29 + 0x6c));
    if (uVar21 == 0) goto LAB_0010aa50;
LAB_0010ad69:
    lVar2 = plVar29[0xc];
    lVar24 = 0;
    pvVar41 = (void *)local_70._8_8_;
    do {
      *(undefined4 *)(lVar2 + lVar24) = *(undefined4 *)(local_60._8_8_ + lVar24);
      *(undefined4 *)(lVar35 + lVar24) = *(undefined4 *)(local_70._8_8_ + lVar24);
      lVar24 = lVar24 + 4;
    } while (uVar23 - lVar24 != 0);
    if (pvVar25 == (void *)0x0) goto LAB_0010aaa6;
    pvVar30 = memset((void *)local_60._8_8_,0,uVar38 * 4);
LAB_0010aa60:
    Memory::free_static(pvVar25,false);
    Memory::free_static((void *)local_60._0_8_,false);
    Memory::free_static(pvVar41,false);
    Memory::free_static(pvVar30,false);
  }
LAB_0010aaa6:
  if (puVar40 != (undefined8 *)0x0) {
    uVar31 = local_98._8_8_;
    if ((local_e8 != 0) && (uVar20 != 0)) {
      piVar1 = (int *)(local_98._8_8_ + (ulong)uVar20 * 4);
      puVar37 = puVar40;
      piVar44 = (int *)local_98._8_8_;
      do {
        if (*piVar44 != 0) {
          pvVar25 = (void *)*puVar37;
          *piVar44 = 0;
          NodePath::~NodePath((NodePath *)((long)pvVar25 + 0x20));
          Memory::free_static(pvVar25,false);
          *puVar37 = 0;
        }
        piVar44 = piVar44 + 1;
        puVar37 = puVar37 + 1;
      } while (piVar1 != piVar44);
    }
    Memory::free_static(puVar40,false);
    Memory::free_static((void *)uVar31,false);
  }
  puVar40 = *(undefined8 **)(param_2 + 0x20);
  if (puVar40 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar29;
    *(long **)(param_2 + 0x20) = plVar29;
  }
  else if (in_R8B == '\0') {
    *puVar40 = plVar29;
    plVar29[1] = (long)puVar40;
    *(long **)(param_2 + 0x20) = plVar29;
  }
  else {
    lVar35 = *(long *)(param_2 + 0x18);
    *(long **)(lVar35 + 8) = plVar29;
    *plVar29 = lVar35;
    *(long **)(param_2 + 0x18) = plVar29;
  }
  uVar20 = (*puVar33 >> 0x10 ^ *puVar33) * -0x7a143595;
  uVar21 = (uVar20 ^ uVar20 >> 0xd) * -0x3d4d51cb;
  uVar20 = uVar21 ^ uVar21 >> 0x10;
  if (uVar21 == uVar21 >> 0x10) {
    uVar23 = 1;
    uVar20 = 1;
  }
  else {
    uVar23 = (ulong)uVar20;
  }
  uVar36 = 0;
  lVar35 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar21 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  uVar38 = CONCAT44(0,uVar21);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar23 * lVar2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar38;
  lVar26 = SUB168(auVar7 * auVar15,8);
  lVar24 = *(long *)(param_2 + 8);
  puVar33 = (uint *)(lVar35 + lVar26 * 4);
  iVar32 = SUB164(auVar7 * auVar15,8);
  uVar19 = *puVar33;
  plVar42 = plVar29;
  while (uVar19 != 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar19 * lVar2;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar38;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)((uVar21 + iVar32) - SUB164(auVar8 * auVar16,8)) * lVar2;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar38;
    uVar22 = SUB164(auVar9 * auVar17,8);
    plVar43 = plVar42;
    if (uVar22 < uVar36) {
      *puVar33 = uVar20;
      puVar40 = (undefined8 *)(lVar24 + lVar26 * 8);
      plVar43 = (long *)*puVar40;
      *puVar40 = plVar42;
      uVar20 = uVar19;
      uVar36 = uVar22;
    }
    uVar36 = uVar36 + 1;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)(iVar32 + 1) * lVar2;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar38;
    lVar26 = SUB168(auVar10 * auVar18,8);
    puVar33 = (uint *)(lVar35 + lVar26 * 4);
    iVar32 = SUB164(auVar10 * auVar18,8);
    plVar42 = plVar43;
    uVar19 = *puVar33;
  }
  *(long **)(lVar24 + lVar26 * 8) = plVar42;
  *puVar33 = uVar20;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010ac6f:
  *(long **)param_1 = plVar29;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneCacheInterface, void, ObjectID>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneCacheInterface,void,ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


