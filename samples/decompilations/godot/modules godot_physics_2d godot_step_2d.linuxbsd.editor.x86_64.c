
/* GodotStep2D::_setup_constraint(unsigned int, void*) */

void GodotStep2D::_setup_constraint(uint param_1,void *param_2)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_register_0000003c;
  long lVar2;
  
  lVar2 = CONCAT44(in_register_0000003c,param_1);
  if ((uint)param_2 < *(uint *)(lVar2 + 0x30)) {
    puVar1 = *(undefined8 **)(*(long *)(lVar2 + 0x38) + ((ulong)param_2 & 0xffffffff) * 8);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar1;
                    /* WARNING: Could not recover jumptable at 0x00100025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined4 *)(lVar2 + 0xc),puVar1,(ulong)param_2 & 0xffffffff,UNRECOVERED_JUMPTABLE
              );
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)param_2 & 0xffffffff,
             (ulong)*(uint *)(lVar2 + 0x30),"p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
  (*UNRECOVERED_JUMPTABLE)();
}



/* GodotStep2D::_solve_island(unsigned int, void*) const */

void GodotStep2D::_solve_island(uint param_1,void *param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  uint *puVar5;
  undefined4 in_register_0000003c;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  lVar6 = CONCAT44(in_register_0000003c,param_1);
  uVar2 = *(uint *)(lVar6 + 0x20);
  if ((uint)param_2 < uVar2) {
    iVar8 = 0;
    puVar5 = (uint *)(((ulong)param_2 & 0xffffffff) * 0x10 + *(long *)(lVar6 + 0x28));
    if (0 < *(int *)(lVar6 + 8)) {
      do {
        uVar2 = *puVar5;
        if (uVar2 != 0) {
          uVar7 = (ulong)uVar2;
          uVar4 = 0;
          while( true ) {
            if (uVar2 <= (uint)uVar4) goto LAB_0010010c;
            lVar1 = uVar4 * 8;
            uVar4 = uVar4 + 1;
            (**(code **)(**(long **)(*(long *)(puVar5 + 2) + lVar1) + 0x10))
                      (*(undefined4 *)(lVar6 + 0xc));
            if (uVar4 == uVar7) break;
            uVar2 = *puVar5;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar6 + 8));
    }
    return;
  }
  uVar4 = (ulong)param_2 & 0xffffffff;
LAB_0010010c:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,uVar4,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* LocalVector<GodotBody2D*, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<GodotBody2D*,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GodotStep2D::_populate_island(GodotBody2D*, LocalVector<GodotBody2D*, unsigned int, false,
   false>&, LocalVector<GodotConstraint2D*, unsigned int, false, false>&) */

void __thiscall
GodotStep2D::_populate_island
          (GodotStep2D *this,GodotBody2D *param_1,LocalVector *param_2,LocalVector *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  GodotBody2D *pGVar4;
  code *pcVar5;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)this;
  iVar6 = GodotBody2D::get_mode();
  if (1 < iVar6) {
    uVar1 = *(uint *)param_2;
    pvVar7 = *(void **)(param_2 + 8);
    if (uVar1 == *(uint *)(param_2 + 4)) {
      uVar8 = (ulong)(uVar1 * 2);
      if (uVar1 * 2 == 0) {
        uVar8 = 1;
      }
      *(int *)(param_2 + 4) = (int)uVar8;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar8 * 8,false);
      *(void **)(param_2 + 8) = pvVar7;
      if (pvVar7 == (void *)0x0) {
LAB_00100356:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar1 = *(uint *)param_2;
    }
    *(uint *)param_2 = uVar1 + 1;
    *(GodotBody2D **)((long)pvVar7 + (ulong)uVar1 * 8) = param_1;
  }
  if (*(undefined8 **)(param_1 + 0x1d8) != (undefined8 *)0x0) {
    for (plVar2 = (long *)**(undefined8 **)(param_1 + 0x1d8); plVar2 != (long *)0x0;
        plVar2 = (long *)plVar2[2]) {
      lVar3 = *plVar2;
      if (*(long *)this != *(long *)(lVar3 + 0x18)) {
        uVar1 = *(uint *)param_3;
        pvVar7 = *(void **)(param_3 + 8);
        *(long *)(lVar3 + 0x18) = *(long *)this;
        if (uVar1 == *(uint *)(param_3 + 4)) {
          uVar8 = (ulong)(uVar1 * 2);
          if (uVar1 * 2 == 0) {
            uVar8 = 1;
          }
          *(int *)(param_3 + 4) = (int)uVar8;
          pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar8 * 8,false);
          *(void **)(param_3 + 8) = pvVar7;
          if (pvVar7 == (void *)0x0) goto LAB_00100356;
          uVar1 = *(uint *)param_3;
        }
        *(uint *)param_3 = uVar1 + 1;
        *(long *)((long)pvVar7 + (ulong)uVar1 * 8) = lVar3;
        uVar1 = *(uint *)(this + 0x30);
        pvVar7 = *(void **)(this + 0x38);
        if (uVar1 == *(uint *)(this + 0x34)) {
          uVar8 = (ulong)(uVar1 * 2);
          if (uVar1 * 2 == 0) {
            uVar8 = 1;
          }
          *(int *)(this + 0x34) = (int)uVar8;
          pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar8 * 8,false);
          *(void **)(this + 0x38) = pvVar7;
          if (pvVar7 == (void *)0x0) goto LAB_00100356;
          uVar1 = *(uint *)(this + 0x30);
        }
        *(uint *)(this + 0x30) = uVar1 + 1;
        iVar6 = *(int *)(lVar3 + 0x10);
        *(long *)((long)pvVar7 + (ulong)uVar1 * 8) = lVar3;
        if (0 < iVar6) {
          lVar9 = 0;
          do {
            if ((((int)plVar2[1] != (int)lVar9) &&
                (pGVar4 = *(GodotBody2D **)(*(long *)(lVar3 + 8) + lVar9 * 8),
                *(long *)this != *(long *)(pGVar4 + 0x228))) &&
               (iVar6 = GodotBody2D::get_mode(), iVar6 != 0)) {
              _populate_island(this,pGVar4,param_2,param_3);
            }
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < *(int *)(lVar3 + 0x10));
        }
      }
    }
  }
  return;
}



/* GodotStep2D::_pre_solve_island(LocalVector<GodotConstraint2D*, unsigned int, false, false>&)
   const */

void __thiscall GodotStep2D::_pre_solve_island(GodotStep2D *this,LocalVector *param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  void *pvVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar14 = (ulong)*(uint *)param_1;
  if (*(uint *)param_1 != 0) {
    uVar9 = 0;
    uVar13 = 0;
    uVar7 = uVar14;
LAB_0010040d:
    do {
      uVar8 = uVar9;
      if ((uint)uVar7 <= (uint)uVar9) {
LAB_0010049e:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,uVar7,"p_index","count"
                   ,"",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      plVar1 = *(long **)(*(long *)(param_1 + 8) + uVar9 * 8);
      cVar3 = (**(code **)(*plVar1 + 8))(*(undefined4 *)(this + 0xc),plVar1);
      if (cVar3 == '\0') {
        uVar9 = uVar9 + 1;
        uVar5 = *(uint *)param_1;
        uVar7 = (ulong)uVar5;
        if (uVar9 == uVar14) break;
        goto LAB_0010040d;
      }
      uVar5 = *(uint *)param_1;
      uVar7 = (ulong)uVar5;
      uVar8 = uVar13;
      if (uVar5 <= (uint)uVar13) goto LAB_0010049e;
      uVar9 = uVar9 + 1;
      *(long **)(*(long *)(param_1 + 8) + uVar13 * 8) = plVar1;
      uVar13 = (ulong)((uint)uVar13 + 1);
    } while (uVar9 != uVar14);
    uVar12 = (uint)uVar13;
    if (uVar5 <= uVar12) {
      if (uVar12 <= uVar5) {
        return;
      }
      if (*(uint *)(param_1 + 4) < uVar12) {
        pvVar11 = *(void **)(param_1 + 8);
        uVar5 = uVar12 - 1 >> 1 | uVar12 - 1;
        uVar5 = uVar5 | uVar5 >> 2;
        uVar5 = uVar5 | uVar5 >> 4;
        uVar5 = uVar5 | uVar5 >> 8;
        uVar5 = (uVar5 | uVar5 >> 0x10) + 1;
        *(uint *)(param_1 + 4) = uVar5;
        puVar10 = (uint *)((ulong)uVar5 * 8);
        lVar6 = Memory::realloc_static(pvVar11,(ulong)puVar10,false);
        *(long *)(param_1 + 8) = lVar6;
        if (lVar6 == 0) {
          LocalVector<GodotBody2D*,unsigned_int,false,false>::resize((uint)pvVar11);
          uVar14 = (ulong)*puVar10;
          if (*puVar10 == 0) {
            return;
          }
          uVar9 = 0;
          cVar3 = '\x01';
          uVar7 = uVar14;
          do {
            if ((uint)uVar7 <= (uint)uVar9) goto LAB_001005c1;
            cVar4 = GodotBody2D::sleep_test(*(float *)((long)pvVar11 + 0xc));
            uVar7 = (ulong)*puVar10;
            if (cVar4 == '\0') {
              cVar3 = '\0';
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar14);
          for (uVar9 = 0; (uint)uVar9 < (uint)uVar7; uVar9 = uVar9 + 1) {
            lVar6 = *(long *)(*(long *)(puVar10 + 2) + uVar9 * 8);
            if (cVar3 == *(char *)(lVar6 + 0x1bd)) {
              GodotBody2D::set_active(SUB81(lVar6,0));
            }
            if (uVar9 + 1 == uVar14) {
              return;
            }
            uVar7 = (ulong)*puVar10;
          }
LAB_001005c1:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,uVar7,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
    }
    *(uint *)param_1 = uVar12;
  }
  return;
}



/* GodotStep2D::_check_suspend(LocalVector<GodotBody2D*, unsigned int, false, false>&) const */

void __thiscall GodotStep2D::_check_suspend(GodotStep2D *this,LocalVector *param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(uint *)param_1;
  if (*(uint *)param_1 == 0) {
    return;
  }
  uVar5 = 0;
  cVar6 = '\x01';
  uVar4 = uVar7;
  do {
    if ((uint)uVar4 <= (uint)uVar5) goto LAB_001005c1;
    cVar3 = GodotBody2D::sleep_test(*(float *)(this + 0xc));
    uVar4 = (ulong)*(uint *)param_1;
    if (cVar3 == '\0') {
      cVar6 = '\0';
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != uVar7);
  for (uVar5 = 0; (uint)uVar5 < (uint)uVar4; uVar5 = uVar5 + 1) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + uVar5 * 8);
    if (cVar6 == *(char *)(lVar1 + 0x1bd)) {
      GodotBody2D::set_active(SUB81(lVar1,0));
    }
    if (uVar5 + 1 == uVar7) {
      return;
    }
    uVar4 = (ulong)*(uint *)param_1;
  }
LAB_001005c1:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar5,uVar4,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* GodotStep2D::GodotStep2D() */

void __thiscall GodotStep2D::GodotStep2D(GodotStep2D *this)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = _LC9;
  *(undefined8 *)this = 1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  lVar3 = Memory::realloc_static((void *)0x0,0x800,false);
  *(long *)(this + 0x18) = lVar3;
  if (lVar3 != 0) {
    if (*(uint *)(this + 0x24) < 0x80) {
      *(undefined4 *)(this + 0x24) = 0x80;
      lVar3 = Memory::realloc_static(*(void **)(this + 0x28),0x800,false);
      *(long *)(this + 0x28) = lVar3;
      if (lVar3 == 0) goto LAB_00100710;
    }
    if (*(uint *)(this + 0x34) < 0x400) {
      *(undefined4 *)(this + 0x34) = 0x400;
      lVar3 = Memory::realloc_static(*(void **)(this + 0x38),0x2000,false);
      *(long *)(this + 0x38) = lVar3;
      if (lVar3 == 0) goto LAB_00100710;
    }
    return;
  }
LAB_00100710:
  _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GodotStep2D::step(GodotSpace2D*, float) */

void __thiscall GodotStep2D::step(GodotStep2D *this,GodotSpace2D *param_1,float param_2)

{
  uint uVar1;
  GodotBody2D *pGVar2;
  char *pcVar3;
  code *pcVar4;
  Callable *pCVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  LocalVector *pLVar17;
  int iVar18;
  uint *puVar19;
  uint uVar21;
  uint uVar22;
  LocalVector *pLVar23;
  ulong uVar24;
  int iVar25;
  long in_FS_OFFSET;
  bool bVar26;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  ulong uVar20;
  
  iVar25 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  GodotSpace2D::lock();
  GodotSpace2D::setup();
  *(float *)(param_1 + 0x60e8) = param_2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0xc0);
  *(float *)(this + 0xc) = param_2;
  plVar7 = (long *)GodotSpace2D::get_active_body_list();
  plVar8 = (long *)OS::get_singleton();
  lVar9 = (**(code **)(*plVar8 + 0x208))(plVar8);
  for (lVar13 = *plVar7; lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x10)) {
    iVar25 = iVar25 + 1;
    GodotBody2D::integrate_forces(param_2);
  }
  *(int *)(param_1 + 0x60f0) = iVar25;
  GodotSpace2D::update();
  plVar8 = (long *)OS::get_singleton();
  lVar10 = (**(code **)(*plVar8 + 0x208))(plVar8);
  *(long *)param_1 = lVar10 - lVar9;
  plVar8 = (long *)GodotSpace2D::get_moved_area_list();
  lVar13 = *plVar8;
  if (lVar13 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      iVar25 = *(int *)(*(long *)(lVar13 + 8) + 0x1bc);
      if (iVar25 != 0) {
        lVar13 = *(long *)(*(long *)(lVar13 + 8) + 0x198);
        lVar9 = 0;
        do {
          lVar15 = *(long *)(lVar13 + lVar9 * 8);
          if (*(long *)this != *(long *)(lVar15 + 0x18)) {
            uVar21 = *(uint *)(this + 0x20);
            uVar16 = (uint)uVar11 + 1;
            *(long *)(lVar15 + 0x18) = *(long *)this;
            if (uVar21 < uVar16) {
              LocalVector<LocalVector<GodotConstraint2D*,unsigned_int,false,false>,unsigned_int,false,false>
              ::resize((LocalVector<LocalVector<GodotConstraint2D*,unsigned_int,false,false>,unsigned_int,false,false>
                        *)(this + 0x20),uVar16);
              uVar21 = *(uint *)(this + 0x20);
            }
            if (uVar21 <= (uint)uVar11) {
              uVar24 = (ulong)uVar21;
              goto LAB_00100abe;
            }
            puVar19 = (uint *)(uVar11 * 0x10 + *(long *)(this + 0x28));
            if (*puVar19 != 0) {
              *puVar19 = 0;
            }
            uVar21 = *(uint *)(this + 0x30);
            pvVar12 = *(void **)(this + 0x38);
            if (uVar21 == *(uint *)(this + 0x34)) {
              uVar11 = (ulong)(uVar21 * 2);
              if (uVar21 * 2 == 0) {
                uVar11 = 1;
              }
              *(int *)(this + 0x34) = (int)uVar11;
              pvVar12 = (void *)Memory::realloc_static(pvVar12,uVar11 * 8,false);
              *(void **)(this + 0x38) = pvVar12;
              if (pvVar12 == (void *)0x0) goto LAB_00100b60;
              uVar21 = *(uint *)(this + 0x30);
            }
            *(uint *)(this + 0x30) = uVar21 + 1;
            *(long *)((long)pvVar12 + (ulong)uVar21 * 8) = lVar15;
            uVar21 = *puVar19;
            pvVar12 = *(void **)(puVar19 + 2);
            if (uVar21 == puVar19[1]) {
              uVar11 = (ulong)(uVar21 * 2);
              if (uVar21 * 2 == 0) {
                uVar11 = 1;
              }
              puVar19[1] = (uint)uVar11;
              pvVar12 = (void *)Memory::realloc_static(pvVar12,uVar11 * 8,false);
              *(void **)(puVar19 + 2) = pvVar12;
              if (pvVar12 == (void *)0x0) {
LAB_00100b60:
                _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                                 "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              uVar21 = *puVar19;
            }
            uVar11 = (ulong)uVar16;
            *puVar19 = uVar21 + 1;
            *(long *)((long)pvVar12 + (ulong)uVar21 * 8) = lVar15;
          }
          if (iVar25 <= (int)lVar9 + 1) break;
          lVar9 = lVar9 + 1;
        } while( true );
      }
      GodotSpace2D::area_remove_from_moved_list((SelfList *)param_1);
      lVar13 = *plVar8;
    } while (lVar13 != 0);
  }
  lVar13 = *plVar7;
  if (lVar13 == 0) {
    uVar21 = 0;
    uVar20 = uVar11;
  }
  else {
    uVar21 = 0;
    do {
      pGVar2 = *(GodotBody2D **)(lVar13 + 8);
      if (*(long *)this != *(long *)(pGVar2 + 0x228)) {
        uVar1 = *(uint *)(this + 0x10);
        uVar16 = uVar21 + 1;
        if (uVar1 < uVar16) {
          LocalVector<LocalVector<GodotBody2D*,unsigned_int,false,false>,unsigned_int,false,false>::
          resize((LocalVector<LocalVector<GodotBody2D*,unsigned_int,false,false>,unsigned_int,false,false>
                  *)(this + 0x10),uVar16);
          uVar1 = *(uint *)(this + 0x10);
        }
        uVar24 = (ulong)uVar1;
        if (uVar1 <= uVar21) {
          uVar11 = (ulong)uVar21;
          goto LAB_00100abe;
        }
        pLVar23 = (LocalVector *)((ulong)uVar21 * 0x10 + *(long *)(this + 0x18));
        if (*(int *)pLVar23 != 0) {
          *(undefined4 *)pLVar23 = 0;
        }
        if (*(uint *)(pLVar23 + 4) < 0x200) {
          *(undefined4 *)(pLVar23 + 4) = 0x200;
          lVar9 = Memory::realloc_static(*(void **)(pLVar23 + 8),0x1000,false);
          *(long *)(pLVar23 + 8) = lVar9;
          if (lVar9 == 0) goto LAB_00100be5;
        }
        uVar1 = *(uint *)(this + 0x20);
        uVar22 = (uint)uVar11 + 1;
        if (uVar1 < uVar22) {
          LocalVector<LocalVector<GodotConstraint2D*,unsigned_int,false,false>,unsigned_int,false,false>
          ::resize((LocalVector<LocalVector<GodotConstraint2D*,unsigned_int,false,false>,unsigned_int,false,false>
                    *)(this + 0x20),uVar22);
          uVar1 = *(uint *)(this + 0x20);
        }
        uVar24 = (ulong)uVar1;
        if (uVar1 <= (uint)uVar11) goto LAB_00100abe;
        pLVar17 = (LocalVector *)(uVar11 * 0x10 + *(long *)(this + 0x28));
        if (*(int *)pLVar17 != 0) {
          *(undefined4 *)pLVar17 = 0;
        }
        if (*(uint *)(pLVar17 + 4) < 0x200) {
          *(undefined4 *)(pLVar17 + 4) = 0x200;
          lVar9 = Memory::realloc_static(*(void **)(pLVar17 + 8),0x1000,false);
          *(long *)(pLVar17 + 8) = lVar9;
          if (lVar9 == 0) {
LAB_00100be5:
            _err_print_error("reserve","./core/templates/local_vector.h",0x92,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
        }
        _populate_island(this,pGVar2,pLVar23,pLVar17);
        if (*(int *)pLVar23 != 0) {
          uVar21 = uVar16;
        }
        if (*(int *)pLVar17 != 0) {
          uVar11 = (ulong)uVar22;
        }
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      uVar20 = uVar11;
    } while (lVar13 != 0);
  }
  iVar18 = (int)uVar20;
  *(int *)(param_1 + 0x60ec) = iVar18;
  plVar8 = (long *)OS::get_singleton();
  lVar13 = (**(code **)(*plVar8 + 0x208))(plVar8);
  *(long *)(param_1 + 8) = lVar13 - lVar10;
  pCVar5 = WorkerThreadPool::singleton;
  iVar25 = *(int *)(this + 0x30);
  if ((step(GodotSpace2D*,float)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&step(GodotSpace2D*,float)::{lambda()#1}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&step(GodotSpace2D*,float)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &step(GodotSpace2D*,float)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&step(GodotSpace2D*,float)::{lambda()#1}::operator()()::sname);
  }
  lVar9 = step(GodotSpace2D*,float)::{lambda()#1}::operator()()::sname;
  if (step(GodotSpace2D*,float)::{lambda()#1}::operator()()::sname != 0) {
    pcVar3 = *(char **)(step(GodotSpace2D*,float)::{lambda()#1}::operator()()::sname + 8);
    local_60 = 0;
    if (pcVar3 != (char *)0x0) {
      local_50 = strlen(pcVar3);
      local_58 = pcVar3;
      String::parse_latin1((StrRange *)&local_60);
      goto LAB_00100d3f;
    }
    plVar8 = (long *)(*(long *)(step(GodotSpace2D*,float)::{lambda()#1}::operator()()::sname + 0x10)
                     + -0x10);
    if (*(long *)(step(GodotSpace2D*,float)::{lambda()#1}::operator()()::sname + 0x10) != 0) {
      do {
        lVar10 = *plVar8;
        if (lVar10 == 0) goto LAB_00101045;
        LOCK();
        lVar15 = *plVar8;
        bVar26 = lVar10 == lVar15;
        if (bVar26) {
          *plVar8 = lVar10 + 1;
          lVar15 = lVar10;
        }
        UNLOCK();
      } while (!bVar26);
      if (lVar15 != -1) {
        local_60 = *(long *)(lVar9 + 0x10);
        goto LAB_00100d3f;
      }
    }
  }
LAB_00101045:
  local_60 = 0;
LAB_00100d3f:
  puVar14 = (undefined8 *)operator_new(0x28,"");
  *puVar14 = &PTR_callback_001017e8;
  puVar14[1] = this;
  puVar14[2] = 0x100000;
  puVar14[3] = 0;
  puVar14[4] = 0;
  local_58 = (char *)0x0;
  local_50 = 0;
  WorkerThreadPool::_add_group_task
            (pCVar5,(_func_void_void_ptr_uint *)&local_58,(void *)0x0,(BaseTemplateUserdata *)0x0,
             (int)puVar14,iVar25,true,(String *)0x1);
  Callable::~Callable((Callable *)&local_58);
  lVar9 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar8 = (long *)(local_60 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  uVar11 = 0;
  WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);
  plVar8 = (long *)OS::get_singleton();
  lVar9 = (**(code **)(*plVar8 + 0x208))(plVar8);
  *(long *)(param_1 + 0x10) = lVar9 - lVar13;
  if (iVar18 != 0) {
    do {
      uVar24 = (ulong)*(uint *)(this + 0x20);
      if (*(uint *)(this + 0x20) <= (uint)uVar11) goto LAB_00100abe;
      uVar24 = uVar11 + 1;
      _pre_solve_island(this,(LocalVector *)(uVar11 * 0x10 + *(long *)(this + 0x28)));
      uVar11 = uVar24;
    } while (uVar20 != uVar24);
  }
  pCVar5 = WorkerThreadPool::singleton;
  if ((step(GodotSpace2D*,float)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar25 = __cxa_guard_acquire(&step(GodotSpace2D*,float)::{lambda()#2}::operator()()::sname),
     iVar25 != 0)) {
    _scs_create((char *)&step(GodotSpace2D*,float)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &step(GodotSpace2D*,float)::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&step(GodotSpace2D*,float)::{lambda()#2}::operator()()::sname);
  }
  lVar13 = step(GodotSpace2D*,float)::{lambda()#2}::operator()()::sname;
  if (step(GodotSpace2D*,float)::{lambda()#2}::operator()()::sname == 0) {
    local_60 = 0;
  }
  else {
    pcVar3 = *(char **)(step(GodotSpace2D*,float)::{lambda()#2}::operator()()::sname + 8);
    local_60 = 0;
    if (pcVar3 == (char *)0x0) {
      plVar8 = (long *)(*(long *)(step(GodotSpace2D*,float)::{lambda()#2}::operator()()::sname +
                                 0x10) + -0x10);
      if (*(long *)(step(GodotSpace2D*,float)::{lambda()#2}::operator()()::sname + 0x10) != 0) {
        do {
          lVar10 = *plVar8;
          if (lVar10 == 0) goto LAB_00100ed6;
          LOCK();
          lVar15 = *plVar8;
          bVar26 = lVar10 == lVar15;
          if (bVar26) {
            *plVar8 = lVar10 + 1;
            lVar15 = lVar10;
          }
          UNLOCK();
        } while (!bVar26);
        if (lVar15 != -1) {
          local_60 = *(long *)(lVar13 + 0x10);
        }
      }
    }
    else {
      local_50 = strlen(pcVar3);
      local_58 = pcVar3;
      String::parse_latin1((StrRange *)&local_60);
    }
  }
LAB_00100ed6:
  puVar14 = (undefined8 *)operator_new(0x28,"");
  *puVar14 = &PTR_callback_00101818;
  puVar14[1] = this;
  puVar14[2] = _solve_island;
  puVar14[3] = 0;
  puVar14[4] = 0;
  local_58 = (char *)0x0;
  local_50 = 0;
  WorkerThreadPool::_add_group_task
            (pCVar5,(_func_void_void_ptr_uint *)&local_58,(void *)0x0,(BaseTemplateUserdata *)0x0,
             (int)puVar14,iVar18,true,(String *)0x1);
  Callable::~Callable((Callable *)&local_58);
  lVar13 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar8 = (long *)(local_60 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  WorkerThreadPool::wait_for_group_task_completion((long)WorkerThreadPool::singleton);
  plVar8 = (long *)OS::get_singleton();
  lVar10 = (**(code **)(*plVar8 + 0x208))(plVar8);
  *(long *)(param_1 + 0x18) = lVar10 - lVar9;
  lVar13 = *plVar7;
  while (lVar13 != 0) {
    lVar13 = *(long *)(lVar13 + 0x10);
    GodotBody2D::integrate_velocities(param_2);
  }
  uVar11 = 0;
  if (uVar21 != 0) {
    do {
      uVar24 = (ulong)*(uint *)(this + 0x10);
      if (*(uint *)(this + 0x10) <= (uint)uVar11) {
LAB_00100abe:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,uVar24,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar24 = uVar11 + 1;
      _check_suspend(this,(LocalVector *)(uVar11 * 0x10 + *(long *)(this + 0x18)));
      uVar11 = uVar24;
    } while (uVar21 != uVar24);
  }
  plVar7 = (long *)OS::get_singleton();
  lVar13 = (**(code **)(*plVar7 + 0x208))(plVar7);
  iVar25 = *(int *)(this + 0x30);
  *(long *)(param_1 + 0x20) = lVar13 - lVar10;
  if (iVar25 != 0) {
    *(undefined4 *)(this + 0x30) = 0;
  }
  GodotSpace2D::unlock();
  *(long *)this = *(long *)this + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotStep2D::~GodotStep2D() */

void __thiscall GodotStep2D::~GodotStep2D(GodotStep2D *this)

{
  if (*(void **)(this + 0x38) != (void *)0x0) {
    if (*(int *)(this + 0x30) != 0) {
      *(undefined4 *)(this + 0x30) = 0;
    }
    Memory::free_static(*(void **)(this + 0x38),false);
  }
  if (*(long *)(this + 0x28) != 0) {
    LocalVector<LocalVector<GodotConstraint2D*,unsigned_int,false,false>,unsigned_int,false,false>::
    resize((LocalVector<LocalVector<GodotConstraint2D*,unsigned_int,false,false>,unsigned_int,false,false>
            *)(this + 0x20),0);
    if (*(void **)(this + 0x28) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x28),false);
    }
  }
  if (*(long *)(this + 0x18) != 0) {
    LocalVector<LocalVector<GodotBody2D*,unsigned_int,false,false>,unsigned_int,false,false>::resize
              ((LocalVector<LocalVector<GodotBody2D*,unsigned_int,false,false>,unsigned_int,false,false>
                *)(this + 0x10),0);
    if (*(void **)(this + 0x18) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x18),false);
      return;
    }
  }
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* WorkerThreadPool::BaseTemplateUserdata::callback() */

void WorkerThreadPool::BaseTemplateUserdata::callback(void)

{
  return;
}



/* WorkerThreadPool::GroupUserData<GodotStep2D, void (GodotStep2D::*)(unsigned int, void*) const,
   decltype(nullptr)>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*)const,decltype(nullptr)>::
~GroupUserData(GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*)const,decltype(nullptr)>
               *this)

{
  return;
}



/* WorkerThreadPool::GroupUserData<GodotStep2D, void (GodotStep2D::*)(unsigned int, void*),
   decltype(nullptr)>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*),decltype(nullptr)>::
~GroupUserData(GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*),decltype(nullptr)>
               *this)

{
  return;
}



/* WorkerThreadPool::GroupUserData<GodotStep2D, void (GodotStep2D::*)(unsigned int, void*) const,
   decltype(nullptr)>::callback_indexed(unsigned int) */

void __thiscall
WorkerThreadPool::
GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*)const,decltype(nullptr)>::
callback_indexed(GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*)const,decltype(nullptr)>
                 *this,uint param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x10);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 8)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x18) + *(long *)(this + 8)),param_1,0,UNRECOVERED_JUMPTABLE)
  ;
  return;
}



/* WorkerThreadPool::GroupUserData<GodotStep2D, void (GodotStep2D::*)(unsigned int, void*),
   decltype(nullptr)>::callback_indexed(unsigned int) */

void __thiscall
WorkerThreadPool::
GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*),decltype(nullptr)>::
callback_indexed(GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*),decltype(nullptr)>
                 *this,uint param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x10);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + *(long *)(this + 8)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x18) + *(long *)(this + 8)),param_1,0,UNRECOVERED_JUMPTABLE)
  ;
  return;
}



/* WorkerThreadPool::GroupUserData<GodotStep2D, void (GodotStep2D::*)(unsigned int, void*),
   decltype(nullptr)>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*),decltype(nullptr)>::
~GroupUserData(GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*),decltype(nullptr)>
               *this)

{
  operator_delete(this,0x28);
  return;
}



/* WorkerThreadPool::GroupUserData<GodotStep2D, void (GodotStep2D::*)(unsigned int, void*) const,
   decltype(nullptr)>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*)const,decltype(nullptr)>::
~GroupUserData(GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*)const,decltype(nullptr)>
               *this)

{
  operator_delete(this,0x28);
  return;
}



/* LocalVector<LocalVector<GodotConstraint2D*, unsigned int, false, false>, unsigned int, false,
   false>::resize(unsigned int) */

void __thiscall
LocalVector<LocalVector<GodotConstraint2D*,unsigned_int,false,false>,unsigned_int,false,false>::
resize(LocalVector<LocalVector<GodotConstraint2D*,unsigned_int,false,false>,unsigned_int,false,false>
       *this,uint param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)this;
  if (param_1 < uVar7) {
    lVar6 = (ulong)param_1 << 4;
    uVar7 = param_1;
    do {
      piVar2 = (int *)(*(long *)(this + 8) + lVar6);
      if (*(void **)(piVar2 + 2) != (void *)0x0) {
        if (*piVar2 != 0) {
          *piVar2 = 0;
        }
        Memory::free_static(*(void **)(piVar2 + 2),false);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar7 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar7) {
      return;
    }
    uVar5 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar7 = uVar5 >> 1 | uVar5;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar7;
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar7 << 4,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar7 = *(uint *)this;
      if (param_1 <= uVar7) goto LAB_00101499;
    }
    lVar6 = *(long *)(this + 8);
    puVar3 = (undefined8 *)((ulong)uVar7 * 0x10 + lVar6);
    do {
      *puVar3 = 0;
      puVar4 = puVar3 + 2;
      puVar3[1] = 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)(lVar6 + 0x10 + ((ulong)(uVar5 - uVar7) + (ulong)uVar7) * 0x10)
            );
  }
LAB_00101499:
  *(uint *)this = param_1;
  return;
}



/* LocalVector<LocalVector<GodotBody2D*, unsigned int, false, false>, unsigned int, false,
   false>::resize(unsigned int) */

void __thiscall
LocalVector<LocalVector<GodotBody2D*,unsigned_int,false,false>,unsigned_int,false,false>::resize
          (LocalVector<LocalVector<GodotBody2D*,unsigned_int,false,false>,unsigned_int,false,false>
           *this,uint param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = *(uint *)this;
  if (param_1 < uVar7) {
    lVar6 = (ulong)param_1 << 4;
    uVar7 = param_1;
    do {
      piVar2 = (int *)(*(long *)(this + 8) + lVar6);
      if (*(void **)(piVar2 + 2) != (void *)0x0) {
        if (*piVar2 != 0) {
          *piVar2 = 0;
        }
        Memory::free_static(*(void **)(piVar2 + 2),false);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar7 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar7) {
      return;
    }
    uVar5 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar7 = uVar5 >> 1 | uVar5;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar7;
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar7 << 4,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar7 = *(uint *)this;
      if (param_1 <= uVar7) goto LAB_001015e9;
    }
    lVar6 = *(long *)(this + 8);
    puVar3 = (undefined8 *)((ulong)uVar7 * 0x10 + lVar6);
    do {
      *puVar3 = 0;
      puVar4 = puVar3 + 2;
      puVar3[1] = 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)(lVar6 + 0x10 + ((ulong)(uVar5 - uVar7) + (ulong)uVar7) * 0x10)
            );
  }
LAB_001015e9:
  *(uint *)this = param_1;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WorkerThreadPool::GroupUserData<GodotStep2D, void (GodotStep2D::*)(unsigned int, void*),
   decltype(nullptr)>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*),decltype(nullptr)>::
~GroupUserData(GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*),decltype(nullptr)>
               *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* WorkerThreadPool::GroupUserData<GodotStep2D, void (GodotStep2D::*)(unsigned int, void*) const,
   decltype(nullptr)>::~GroupUserData() */

void __thiscall
WorkerThreadPool::
GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*)const,decltype(nullptr)>::
~GroupUserData(GroupUserData<GodotStep2D,void(GodotStep2D::*)(unsigned_int,void*)const,decltype(nullptr)>
               *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


