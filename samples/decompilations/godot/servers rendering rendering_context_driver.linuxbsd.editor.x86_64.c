
/* RenderingContextDriver::get_tracked_object_name(unsigned int) const */

char * RenderingContextDriver::get_tracked_object_name(uint param_1)

{
  return "Tracking Unsupported by API";
}



/* RenderingContextDriver::get_driver_total_memory() const */

undefined8 RenderingContextDriver::get_driver_total_memory(void)

{
  return 0;
}



/* RenderingContextDriver::get_driver_allocs_by_object_type(unsigned int) const */

undefined8 RenderingContextDriver::get_driver_allocs_by_object_type(uint param_1)

{
  return 0;
}



/* RenderingContextDriver::~RenderingContextDriver() */

void __thiscall RenderingContextDriver::~RenderingContextDriver(RenderingContextDriver *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined **)this = &DAT_00101b60;
  pvVar3 = *(void **)(this + 0x10);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x34) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x34) = 0;
      *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x18) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x18) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 0x10);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x34) = 0;
      *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x18),false);
  return;
}



/* RenderingContextDriver::~RenderingContextDriver() */

void __thiscall RenderingContextDriver::~RenderingContextDriver(RenderingContextDriver *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined **)this = &DAT_00101b60;
  pvVar3 = *(void **)(this + 0x10);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x34) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x34) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x18) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x18) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x10);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x34) = 0;
        *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010017f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x18),false);
  }
LAB_0010017f:
  operator_delete(this,0x38);
  return;
}



/* RenderingContextDriver::surface_get_from_window(int) const */

undefined8 __thiscall
RenderingContextDriver::surface_get_from_window(RenderingContextDriver *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  lVar1 = *(long *)(this + 0x10);
  if ((lVar1 == 0) || (*(int *)(this + 0x34) == 0)) {
    return 0;
  }
  uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4));
  uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
  uVar11 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  uVar15 = uVar11 ^ uVar11 >> 0x10;
  if (uVar11 == uVar11 >> 0x10) {
    uVar15 = 1;
    uVar13 = uVar2;
  }
  else {
    uVar13 = uVar15 * uVar2;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar17;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar13;
  lVar14 = SUB168(auVar3 * auVar7,8);
  uVar11 = *(uint *)(*(long *)(this + 0x18) + lVar14 * 4);
  uVar12 = SUB164(auVar3 * auVar7,8);
  if (uVar11 != 0) {
    uVar16 = 0;
    do {
      if ((uVar15 == uVar11) && (*(int *)(*(long *)(lVar1 + lVar14 * 8) + 0x10) == param_1)) {
        lVar1 = *(long *)(lVar1 + (ulong)uVar12 * 8);
        if (lVar1 == 0) {
          return 0;
        }
        return *(undefined8 *)(lVar1 + 0x18);
      }
      uVar16 = uVar16 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (uVar12 + 1) * uVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar17;
      lVar14 = SUB168(auVar4 * auVar8,8);
      uVar11 = *(uint *)(*(long *)(this + 0x18) + lVar14 * 4);
      uVar12 = SUB164(auVar4 * auVar8,8);
    } while ((uVar11 != 0) &&
            (auVar5._8_8_ = 0, auVar5._0_8_ = uVar11 * uVar2, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
            auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) +
                            uVar12) - SUB164(auVar5 * auVar9,8)) * uVar2, auVar10._8_8_ = 0,
            auVar10._0_8_ = uVar17, uVar16 <= SUB164(auVar6 * auVar10,8)));
  }
  return 0;
}



/* RenderingContextDriver::window_set_size(int, unsigned int, unsigned int) */

void __thiscall
RenderingContextDriver::window_set_size
          (RenderingContextDriver *this,int param_1,uint param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  lVar1 = *(long *)(this + 0x10);
  if ((lVar1 != 0) && (*(int *)(this + 0x34) != 0)) {
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4));
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
    uVar11 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
    uVar15 = uVar11 ^ uVar11 >> 0x10;
    if (uVar11 == uVar11 >> 0x10) {
      uVar15 = 1;
      uVar13 = uVar2;
    }
    else {
      uVar13 = uVar15 * uVar2;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar17;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar13;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(*(long *)(this + 0x18) + lVar14 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar16 = 0;
      while ((uVar15 != uVar11 || (param_1 != *(int *)(*(long *)(lVar1 + lVar14 * 8) + 0x10)))) {
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar12 + 1) * uVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(*(long *)(this + 0x18) + lVar14 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
        if (uVar11 == 0) {
          return;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar11 * uVar2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar17;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) +
                        uVar12) - SUB164(auVar5 * auVar9,8)) * uVar2;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar17;
        if (SUB164(auVar6 * auVar10,8) < uVar16) {
          return;
        }
      }
      lVar1 = *(long *)(lVar1 + (ulong)uVar12 * 8);
      if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x18), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00100406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x48))(this,lVar1,param_2,param_3);
        return;
      }
    }
  }
  return;
}



/* RenderingContextDriver::window_set_vsync_mode(int, DisplayServer::VSyncMode) */

void __thiscall
RenderingContextDriver::window_set_vsync_mode
          (RenderingContextDriver *this,uint param_1,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  lVar1 = *(long *)(this + 0x10);
  if ((lVar1 != 0) && (*(int *)(this + 0x34) != 0)) {
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4));
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
    uVar11 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
    uVar15 = uVar11 ^ uVar11 >> 0x10;
    if (uVar11 == uVar11 >> 0x10) {
      uVar15 = 1;
      uVar13 = uVar2;
    }
    else {
      uVar13 = uVar15 * uVar2;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar17;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar13;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(*(long *)(this + 0x18) + lVar14 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar16 = 0;
      while ((uVar15 != uVar11 || (param_1 != *(uint *)(*(long *)(lVar1 + lVar14 * 8) + 0x10)))) {
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar12 + 1) * uVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(*(long *)(this + 0x18) + lVar14 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
        if (uVar11 == 0) {
          return;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar11 * uVar2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar17;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) +
                        uVar12) - SUB164(auVar5 * auVar9,8)) * uVar2;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar17;
        if (SUB164(auVar6 * auVar10,8) < uVar16) {
          return;
        }
      }
      lVar1 = *(long *)(lVar1 + (ulong)uVar12 * 8);
      if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x18), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0010054a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x50))(this,lVar1,param_3);
        return;
      }
    }
  }
  return;
}



/* RenderingContextDriver::window_get_vsync_mode(int) const */

undefined8 __thiscall
RenderingContextDriver::window_get_vsync_mode(RenderingContextDriver *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  
  lVar1 = *(long *)(this + 0x10);
  if ((lVar1 != 0) && (*(int *)(this + 0x34) != 0)) {
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4));
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
    uVar11 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
    uVar16 = uVar11 ^ uVar11 >> 0x10;
    if (uVar11 == uVar11 >> 0x10) {
      uVar16 = 1;
      uVar14 = uVar2;
    }
    else {
      uVar14 = uVar16 * uVar2;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar18;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(*(long *)(this + 0x18) + lVar15 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar17 = 0;
      while ((uVar16 != uVar11 || (param_1 != *(int *)(*(long *)(lVar1 + lVar15 * 8) + 0x10)))) {
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar13 + 1) * uVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(*(long *)(this + 0x18) + lVar15 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
        if (uVar11 == 0) {
          return 0;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar11 * uVar2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) +
                        uVar13) - SUB164(auVar5 * auVar9,8)) * uVar2;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar18;
        if (SUB164(auVar6 * auVar10,8) < uVar17) {
          return 0;
        }
      }
      lVar1 = *(long *)(lVar1 + (ulong)uVar13 * 8);
      if ((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00100686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar12 = (**(code **)(*(long *)this + 0x58))(this);
        return uVar12;
      }
    }
  }
  return 0;
}



/* RenderingContextDriver::window_destroy(int) */

void __thiscall RenderingContextDriver::window_destroy(RenderingContextDriver *this,int param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
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
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  long lVar40;
  uint uVar41;
  long *plVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  ulong uVar46;
  uint *puVar47;
  uint local_48;
  
  lVar45 = *(long *)(this + 0x10);
  if ((lVar45 != 0) && (*(int *)(this + 0x34) != 0)) {
    uVar37 = (ulong)*(uint *)(this + 0x30);
    uVar46 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar37 * 4));
    uVar5 = *(ulong *)(hash_table_size_primes_inv + uVar37 * 8);
    uVar33 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar39 = (uVar33 ^ uVar33 >> 0xd) * -0x3d4d51cb;
    uVar33 = uVar39 >> 0x10;
    uVar44 = uVar39 ^ uVar33;
    if (uVar39 == uVar33) {
      local_48 = 1;
      uVar35 = uVar5;
    }
    else {
      uVar35 = uVar44 * uVar5;
      local_48 = uVar44;
    }
    lVar40 = *(long *)(this + 0x18);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar46;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    lVar36 = SUB168(auVar7 * auVar20,8);
    uVar41 = *(uint *)(lVar40 + lVar36 * 4);
    uVar34 = SUB164(auVar7 * auVar20,8);
    if (uVar41 != 0) {
      uVar43 = 0;
      while ((local_48 != uVar41 || (*(int *)(*(long *)(lVar45 + lVar36 * 8) + 0x10) != param_1))) {
        uVar43 = uVar43 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (uVar34 + 1) * uVar5;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar46;
        lVar36 = SUB168(auVar8 * auVar21,8);
        uVar41 = *(uint *)(lVar40 + lVar36 * 4);
        uVar34 = SUB164(auVar8 * auVar21,8);
        if ((uVar41 == 0) ||
           (auVar9._8_8_ = 0, auVar9._0_8_ = uVar41 * uVar5, auVar22._8_8_ = 0,
           auVar22._0_8_ = uVar46, auVar10._8_8_ = 0,
           auVar10._0_8_ =
                ((*(uint *)(hash_table_size_primes + uVar37 * 4) + uVar34) -
                SUB164(auVar9 * auVar22,8)) * uVar5, auVar23._8_8_ = 0, auVar23._0_8_ = uVar46,
           SUB164(auVar10 * auVar23,8) < uVar43)) goto LAB_0010081f;
      }
      lVar36 = *(long *)(lVar45 + (ulong)uVar34 * 8);
      if ((lVar36 != 0) && (lVar36 = *(long *)(lVar36 + 0x18), lVar36 != 0)) {
        (**(code **)(*(long *)this + 0x80))(this,lVar36);
        lVar45 = *(long *)(this + 0x10);
        if (lVar45 == 0) {
          return;
        }
        if (*(int *)(this + 0x34) == 0) {
          return;
        }
        uVar37 = (ulong)*(uint *)(this + 0x30);
        lVar40 = *(long *)(this + 0x18);
      }
    }
LAB_0010081f:
    uVar41 = *(uint *)(hash_table_size_primes + uVar37 * 4);
    uVar46 = CONCAT44(0,uVar41);
    uVar5 = *(ulong *)(hash_table_size_primes_inv + uVar37 * 8);
    if (uVar39 == uVar33) {
      uVar44 = 1;
      uVar37 = uVar5;
    }
    else {
      uVar37 = uVar44 * uVar5;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar46;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar37;
    uVar37 = SUB168(auVar11 * auVar24,8);
    uVar33 = *(uint *)(lVar40 + uVar37 * 4);
    uVar35 = (ulong)SUB164(auVar11 * auVar24,8);
    if (uVar33 != 0) {
      uVar39 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = ((int)uVar35 + 1) * uVar5;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar46;
        uVar38 = SUB168(auVar14 * auVar27,8);
        uVar34 = SUB164(auVar14 * auVar27,8);
        if ((uVar44 == uVar33) && (*(int *)(*(long *)(lVar45 + uVar37 * 8) + 0x10) == param_1)) {
          puVar47 = (uint *)(lVar40 + uVar38 * 4);
          uVar37 = (ulong)uVar34;
          uVar33 = *puVar47;
          if ((uVar33 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = uVar33 * uVar5, auVar28._8_8_ = 0,
             auVar28._0_8_ = uVar46, auVar16._8_8_ = 0,
             auVar16._0_8_ = ((uVar34 + uVar41) - SUB164(auVar15 * auVar28,8)) * uVar5,
             auVar29._8_8_ = 0, auVar29._0_8_ = uVar46, SUB164(auVar16 * auVar29,8) != 0)) {
            while( true ) {
              puVar1 = (uint *)(lVar40 + uVar35 * 4);
              *puVar47 = *puVar1;
              puVar2 = (undefined8 *)(lVar45 + uVar38 * 8);
              *puVar1 = uVar33;
              puVar3 = (undefined8 *)(lVar45 + uVar35 * 8);
              uVar6 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar6;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = ((int)uVar37 + 1) * uVar5;
              auVar32._8_8_ = 0;
              auVar32._0_8_ = uVar46;
              uVar38 = SUB168(auVar19 * auVar32,8);
              puVar47 = (uint *)(lVar40 + uVar38 * 4);
              uVar33 = *puVar47;
              uVar35 = uVar37;
              if ((uVar33 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = uVar33 * uVar5, auVar30._8_8_ = 0,
                 auVar30._0_8_ = uVar46, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      ((SUB164(auVar19 * auVar32,8) + uVar41) - SUB164(auVar17 * auVar30,8)) * uVar5
                 , auVar31._8_8_ = 0, auVar31._0_8_ = uVar46, SUB164(auVar18 * auVar31,8) == 0))
              break;
              uVar37 = uVar38 & 0xffffffff;
            }
          }
          plVar4 = (long *)(lVar45 + uVar35 * 8);
          *(undefined4 *)(lVar40 + uVar35 * 4) = 0;
          plVar42 = (long *)*plVar4;
          if (*(long **)(this + 0x20) == plVar42) {
            *(long *)(this + 0x20) = *plVar42;
            plVar42 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x28) == plVar42) {
            *(long *)(this + 0x28) = plVar42[1];
            plVar42 = (long *)*plVar4;
          }
          if ((long *)plVar42[1] != (long *)0x0) {
            *(long *)plVar42[1] = *plVar42;
            plVar42 = (long *)*plVar4;
          }
          if (*plVar42 != 0) {
            *(long *)(*plVar42 + 8) = plVar42[1];
            plVar42 = (long *)*plVar4;
          }
          Memory::free_static(plVar42,false);
          *(undefined8 *)(*(long *)(this + 0x10) + uVar35 * 8) = 0;
          *(int *)(this + 0x34) = *(int *)(this + 0x34) + -1;
          return;
        }
        uVar33 = *(uint *)(lVar40 + uVar38 * 4);
        uVar35 = uVar38 & 0xffffffff;
        uVar39 = uVar39 + 1;
      } while ((uVar33 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = uVar33 * uVar5, auVar25._8_8_ = 0,
              auVar25._0_8_ = uVar46, auVar13._8_8_ = 0,
              auVar13._0_8_ = ((uVar41 + uVar34) - SUB164(auVar12 * auVar25,8)) * uVar5,
              auVar26._8_8_ = 0, auVar26._0_8_ = uVar46, uVar37 = uVar38,
              uVar39 <= SUB164(auVar13 * auVar26,8)));
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderingContextDriver::get_driver_and_device_memory_report() const */

void RenderingContextDriver::get_driver_and_device_memory_report(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *in_RSI;
  char *pcVar5;
  bool bVar6;
  String *in_RDI;
  int iVar7;
  long in_FS_OFFSET;
  double dVar8;
  int local_4c;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *in_RSI;
  *(undefined8 *)in_RDI = 0;
  local_4c = 0;
  if (*(code **)(lVar2 + 0x98) != get_driver_total_memory) {
    local_4c = (**(code **)(lVar2 + 0x98))();
  }
  String::operator+=(in_RDI,"=== Driver Memory Report ===");
  String::operator+=(in_RDI,
                     "\nLaunch with --extra-gpu-memory-tracking and build with DEBUG_ENABLED for this functionality to work."
                    );
  String::operator+=(in_RDI,
                     "\nDevice memory may be unavailable if the API does not support it(e.g. VK_EXT_device_memory_report is unsupported)."
                    );
  String::operator+=(in_RDI,"\n");
  String::operator+=(in_RDI,"\nTotal Driver Memory:");
  dVar8 = 0.0;
  if (*(code **)(*in_RSI + 0xa0) != get_driver_total_memory) {
    uVar4 = (**(code **)(*in_RSI + 0xa0))();
    dVar8 = (double)uVar4 * __LC7;
  }
  bVar6 = SUB81((String *)&local_48,0);
  String::num_real(dVar8,bVar6);
  String::operator+=(in_RDI,(String *)&local_48);
  lVar2 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  String::operator+=(in_RDI," MB");
  String::operator+=(in_RDI,"\nTotal Driver Num Allocations: ");
  iVar7 = 0;
  if (*(code **)(*in_RSI + 0xa8) != get_driver_total_memory) {
    iVar7 = (**(code **)(*in_RSI + 0xa8))();
  }
  String::num_uint64((ulong)&local_48,iVar7,true);
  String::operator+=(in_RDI,(String *)&local_48);
  lVar2 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  String::operator+=(in_RDI,"\nTotal Device Memory:");
  dVar8 = 0.0;
  if (*(code **)(*in_RSI + 0xc0) != get_driver_total_memory) {
    uVar4 = (**(code **)(*in_RSI + 0xc0))();
    dVar8 = (double)uVar4 * __LC7;
  }
  String::num_real(dVar8,bVar6);
  String::operator+=(in_RDI,(String *)&local_48);
  lVar2 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  String::operator+=(in_RDI," MB");
  String::operator+=(in_RDI,"\nTotal Device Num Allocations: ");
  iVar7 = 0;
  if (*(code **)(*in_RSI + 200) != get_driver_total_memory) {
    iVar7 = (**(code **)(*in_RSI + 200))();
  }
  String::num_uint64((ulong)&local_48,iVar7,true);
  String::operator+=(in_RDI,(String *)&local_48);
  lVar2 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  iVar7 = 0;
  String::operator+=(in_RDI,"\n\nMemory use by object type (CSV format):");
  String::operator+=(in_RDI,
                     "\n\nCategory; Driver memory in MB; Driver Allocation Count; Device memory in MB; Device Allocation Count"
                    );
  if (local_4c != 0) {
    do {
      String::operator+=(in_RDI,"\n");
      pcVar5 = "Tracking Unsupported by API";
      if (*(code **)(*in_RSI + 0x90) != get_tracked_object_name) {
        pcVar5 = (char *)(**(code **)(*in_RSI + 0x90))();
      }
      String::operator+=(in_RDI,pcVar5);
      String::operator+=(in_RDI,";");
      dVar8 = 0.0;
      if (*(code **)(*in_RSI + 0xb0) != get_driver_allocs_by_object_type) {
        uVar4 = (**(code **)(*in_RSI + 0xb0))();
        dVar8 = (double)uVar4 * __LC7;
      }
      String::num_real(dVar8,bVar6);
      String::operator+=(in_RDI,(String *)&local_48);
      lVar2 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      String::operator+=(in_RDI,";");
      iVar3 = 0;
      if (*(code **)(*in_RSI + 0xb8) != get_driver_allocs_by_object_type) {
        iVar3 = (**(code **)(*in_RSI + 0xb8))();
      }
      String::num_uint64((ulong)&local_48,iVar3,true);
      String::operator+=(in_RDI,(String *)&local_48);
      lVar2 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      String::operator+=(in_RDI,";");
      dVar8 = 0.0;
      if (*(code **)(*in_RSI + 0xd0) != get_driver_allocs_by_object_type) {
        uVar4 = (**(code **)(*in_RSI + 0xd0))();
        dVar8 = (double)uVar4 * __LC7;
      }
      String::num_real(dVar8,bVar6);
      String::operator+=(in_RDI,(String *)&local_48);
      lVar2 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      String::operator+=(in_RDI,";");
      iVar3 = 0;
      if (*(code **)(*in_RSI + 0xd8) != get_driver_allocs_by_object_type) {
        iVar3 = (**(code **)(*in_RSI + 0xd8))();
      }
      String::num_uint64((ulong)&local_48,iVar3,true);
      String::operator+=(in_RDI,(String *)&local_48);
      lVar2 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != local_4c);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RenderingContextDriver::window_create(int, void const*) */

undefined8 __thiscall
RenderingContextDriver::window_create(RenderingContextDriver *this,int param_1,void *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  int local_1c [3];
  
  local_1c[0] = param_1;
  lVar1 = (**(code **)(*(long *)this + 0x40))(this,param_2);
  uVar2 = 0x14;
  if (lVar1 != 0) {
    plVar3 = (long *)HashMap<int,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_long>>>
                     ::operator[]((HashMap<int,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_long>>>
                                   *)(this + 8),local_1c);
    *plVar3 = lVar1;
    uVar2 = 0;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, unsigned long> > >::operator[](int const&) */

undefined1  [16] __thiscall
HashMap<int,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_long>>>
::operator[](HashMap<int,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,unsigned_long>>>
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
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x1019b3;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00101513;
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
        lStack_90 = 0x1019fc;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00101893;
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
LAB_00101893:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
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
            goto LAB_00101874;
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
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar53) -
                     SUB164(auVar18 * auVar34,8)) * uVar48, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_00101513:
  if ((float)uVar51 * __LC15 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00101874;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
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
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
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
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
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
LAB_00101874:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 8;
  return auVar57;
}


