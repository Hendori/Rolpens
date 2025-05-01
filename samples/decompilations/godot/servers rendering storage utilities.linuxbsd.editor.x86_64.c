
/* HashSet<Dependency*, HashMapHasherDefault, HashMapComparatorDefault<Dependency*>
   >::erase(Dependency* const&) [clone .isra.0] */

void __thiscall
HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::erase
          (HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>> *this,
          Dependency **param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  uint *puVar39;
  ulong uVar40;
  uint *puVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  
  lVar6 = *(long *)this;
  if ((lVar6 != 0) && (*(int *)(this + 0x24) != 0)) {
    lVar7 = *(long *)(this + 0x18);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar42 = CONCAT44(0,uVar31);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar32 = (long)*param_1 * 0x3ffff - 1;
    uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
    uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
    uVar32 = uVar32 >> 0x16 ^ uVar32;
    uVar40 = uVar32 & 0xffffffff;
    if ((int)uVar32 == 0) {
      uVar40 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar40 * lVar8;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar42;
    lVar37 = SUB168(auVar11 * auVar21,8);
    uVar44 = *(uint *)(lVar7 + lVar37 * 4);
    iVar35 = SUB164(auVar11 * auVar21,8);
    if (uVar44 != 0) {
      uVar33 = 0;
      do {
        if ((uint)uVar40 == uVar44) {
          lVar9 = *(long *)(this + 8);
          uVar44 = *(uint *)(lVar9 + lVar37 * 4);
          uVar32 = (ulong)uVar44;
          if (*param_1 == *(Dependency **)(lVar6 + uVar32 * 8)) {
            lVar10 = *(long *)(this + 0x10);
            puVar1 = (uint *)(lVar10 + uVar32 * 4);
            uVar33 = *puVar1;
            uVar40 = (ulong)uVar33;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(uVar33 + 1) * lVar8;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar42;
            lVar37 = SUB168(auVar15 * auVar25,8) * 4;
            uVar36 = SUB164(auVar15 * auVar25,8);
            uVar43 = (ulong)uVar36;
            puVar39 = (uint *)(lVar7 + lVar37);
            if ((*puVar39 == 0) ||
               (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)*puVar39 * lVar8, auVar26._8_8_ = 0,
               auVar26._0_8_ = uVar42, auVar17._8_8_ = 0,
               auVar17._0_8_ = (ulong)((uVar36 + uVar31) - SUB164(auVar16 * auVar26,8)) * lVar8,
               auVar27._8_8_ = 0, auVar27._0_8_ = uVar42, SUB164(auVar17 * auVar27,8) == 0)) {
              uVar43 = (ulong)uVar33;
            }
            else {
              while( true ) {
                puVar34 = (uint *)(lVar37 + lVar9);
                puVar4 = (uint *)(lVar9 + uVar40 * 4);
                puVar41 = (uint *)(uVar40 * 4 + lVar7);
                puVar2 = (undefined4 *)(lVar10 + (ulong)*puVar34 * 4);
                puVar3 = (undefined4 *)(lVar10 + (ulong)*puVar4 * 4);
                uVar5 = *puVar3;
                *puVar3 = *puVar2;
                *puVar2 = uVar5;
                uVar33 = *puVar39;
                *puVar39 = *puVar41;
                *puVar41 = uVar33;
                uVar33 = *puVar34;
                *puVar34 = *puVar4;
                *puVar4 = uVar33;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = (ulong)((int)uVar43 + 1) * lVar8;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = uVar42;
                uVar38 = SUB168(auVar20 * auVar30,8);
                lVar37 = uVar38 * 4;
                puVar39 = (uint *)(lVar7 + lVar37);
                if ((*puVar39 == 0) ||
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar39 * lVar8, auVar28._8_8_ = 0,
                   auVar28._0_8_ = uVar42, auVar19._8_8_ = 0,
                   auVar19._0_8_ =
                        (ulong)((SUB164(auVar20 * auVar30,8) + uVar31) - SUB164(auVar18 * auVar28,8)
                               ) * lVar8, auVar29._8_8_ = 0, auVar29._0_8_ = uVar42,
                   SUB164(auVar19 * auVar29,8) == 0)) break;
                uVar40 = uVar43;
                uVar43 = uVar38 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar7 + uVar43 * 4) = 0;
            uVar31 = *(int *)(this + 0x24) - 1;
            *(uint *)(this + 0x24) = uVar31;
            if (uVar31 <= uVar44) {
              return;
            }
            uVar33 = *(uint *)(lVar10 + (ulong)uVar31 * 4);
            *(undefined8 *)(lVar6 + uVar32 * 8) = *(undefined8 *)(lVar6 + (ulong)uVar31 * 8);
            *puVar1 = uVar33;
            *(uint *)(lVar9 + (ulong)*(uint *)(lVar10 + (ulong)*(uint *)(this + 0x24) * 4) * 4) =
                 uVar44;
            return;
          }
        }
        uVar33 = uVar33 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar8;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar42;
        lVar37 = SUB168(auVar12 * auVar22,8);
        uVar44 = *(uint *)(lVar7 + lVar37 * 4);
        iVar35 = SUB164(auVar12 * auVar22,8);
      } while ((uVar44 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar8, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar42, auVar14._8_8_ = 0,
              auVar14._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar13 * auVar23,8)) * lVar8,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar42, uVar33 <= SUB164(auVar14 * auVar24,8)));
    }
  }
  return;
}



/* Dependency::changed_notify(Dependency::DependencyChangedNotification) */

void __thiscall Dependency::changed_notify(Dependency *this,undefined4 param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(this + 0x18); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (*(code **)(puVar1[2] + 8) != (code *)0x0) {
      (**(code **)(puVar1[2] + 8))(param_2);
    }
  }
  return;
}



/* Dependency::deleted_notify(RID const&) */

void __thiscall Dependency::deleted_notify(Dependency *this,RID *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  Dependency *local_28;
  long local_20;
  
  plVar3 = *(long **)(this + 0x18);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar3 != (long *)0x0) {
    do {
      if (*(code **)(plVar3[2] + 0x10) != (code *)0x0) {
        (**(code **)(plVar3[2] + 0x10))(param_1);
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    for (puVar2 = *(undefined8 **)(this + 0x18); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      local_28 = this;
      HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::erase
                ((HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>> *)
                 (puVar2[2] + 0x20),&local_28);
    }
  }
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 != 0) {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar4) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar4) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 8) + lVar4 * 2),false);
          *(undefined8 *)(*(long *)(this + 8) + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while ((ulong)uVar1 << 2 != lVar4);
    }
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Dependency::~Dependency() */

void __thiscall Dependency::~Dependency(Dependency *this)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  Dependency *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x2c) == 0) {
    pvVar4 = *(void **)(this + 8);
    if (pvVar4 != (void *)0x0) {
LAB_001004f3:
      Memory::free_static(pvVar4,false);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(*(void **)(this + 0x10),false);
        return;
      }
      goto LAB_00100531;
    }
  }
  else {
    _err_print_error("~Dependency","servers/rendering/storage/utilities.cpp",0x38,
                     "Leaked instance dependency: Bug - did not call instance_notify_deleted when freeing."
                     ,0,1);
    for (puVar2 = *(undefined8 **)(this + 0x18); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      local_28 = this;
      HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::erase
                ((HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>> *)
                 (puVar2[2] + 0x20),&local_28);
    }
    pvVar4 = *(void **)(this + 8);
    if (pvVar4 != (void *)0x0) {
      if (*(int *)(this + 0x2c) != 0) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        if (uVar1 == 0) {
          *(undefined4 *)(this + 0x2c) = 0;
          *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
        }
        else {
          lVar3 = 0;
          do {
            if (*(int *)(*(long *)(this + 0x10) + lVar3) != 0) {
              *(int *)(*(long *)(this + 0x10) + lVar3) = 0;
              Memory::free_static(*(void **)((long)pvVar4 + lVar3 * 2),false);
              pvVar4 = *(void **)(this + 8);
              *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
            }
            lVar3 = lVar3 + 4;
          } while (lVar3 != (ulong)uVar1 << 2);
          *(undefined4 *)(this + 0x2c) = 0;
          *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
          if (pvVar4 == (void *)0x0) goto LAB_00100403;
        }
      }
      goto LAB_001004f3;
    }
  }
LAB_00100403:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100531:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


