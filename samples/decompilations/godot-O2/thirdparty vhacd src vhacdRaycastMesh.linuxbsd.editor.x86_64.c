
/* VHACD::RaycastMesh::createRaycastMesh(unsigned int, double const*, unsigned int, unsigned int
   const*) */

undefined8 *
VHACD::RaycastMesh::createRaycastMesh(uint param_1,double *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  
  puVar3 = (undefined8 *)operator_new(0x28);
  *puVar3 = &PTR_raycast_001006e8;
  *(uint *)(puVar3 + 1) = param_1;
  pvVar4 = operator_new__((ulong)(param_1 * 3) << 3);
  iVar2 = *(int *)(puVar3 + 1);
  puVar3[2] = pvVar4;
  if (iVar2 != 0) {
    uVar5 = 1;
    do {
      *(double *)((long)pvVar4 + (ulong)(uVar5 - 1) * 8) = *param_2;
      *(double *)((long)pvVar4 + (ulong)uVar5 * 8) = param_2[1];
      uVar1 = uVar5 + 1;
      uVar5 = uVar5 + 3;
      *(double *)((long)pvVar4 + (ulong)uVar1 * 8) = param_2[2];
      param_2 = param_2 + 3;
    } while (uVar5 != iVar2 * 3 + 1U);
  }
  *(uint *)(puVar3 + 3) = param_3;
  pvVar4 = operator_new__((ulong)(param_3 * 3) << 2);
  iVar2 = *(int *)(puVar3 + 3);
  puVar3[4] = pvVar4;
  if (iVar2 != 0) {
    uVar5 = 1;
    do {
      *(uint *)((long)pvVar4 + (ulong)(uVar5 - 1) * 4) = *param_4;
      *(uint *)((long)pvVar4 + (ulong)uVar5 * 4) = param_4[1];
      uVar1 = uVar5 + 1;
      uVar5 = uVar5 + 3;
      *(uint *)((long)pvVar4 + (ulong)uVar1 * 4) = param_4[2];
      param_4 = param_4 + 3;
    } while (uVar5 != iVar2 * 3 + 1U);
  }
  return puVar3;
}



/* VHACD::RaycastMesh::createRaycastMesh(unsigned int, float const*, unsigned int, unsigned int
   const*) */

undefined8 *
VHACD::RaycastMesh::createRaycastMesh(uint param_1,float *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  
  puVar3 = (undefined8 *)operator_new(0x28);
  *puVar3 = &PTR_raycast_001006e8;
  *(uint *)(puVar3 + 1) = param_1;
  pvVar4 = operator_new__((ulong)(param_1 * 3) << 3);
  iVar2 = *(int *)(puVar3 + 1);
  puVar3[2] = pvVar4;
  if (iVar2 != 0) {
    uVar5 = 1;
    do {
      *(double *)((long)pvVar4 + (ulong)(uVar5 - 1) * 8) = (double)*param_2;
      *(double *)((long)pvVar4 + (ulong)uVar5 * 8) = (double)param_2[1];
      uVar1 = uVar5 + 1;
      uVar5 = uVar5 + 3;
      *(double *)((long)pvVar4 + (ulong)uVar1 * 8) = (double)param_2[2];
      param_2 = param_2 + 3;
    } while (uVar5 != iVar2 * 3 + 1U);
  }
  *(uint *)(puVar3 + 3) = param_3;
  pvVar4 = operator_new__((ulong)(param_3 * 3) << 2);
  iVar2 = *(int *)(puVar3 + 3);
  puVar3[4] = pvVar4;
  if (iVar2 != 0) {
    uVar5 = 1;
    do {
      *(uint *)((long)pvVar4 + (ulong)(uVar5 - 1) * 4) = *param_4;
      *(uint *)((long)pvVar4 + (ulong)uVar5 * 4) = param_4[1];
      uVar1 = uVar5 + 1;
      uVar5 = uVar5 + 3;
      *(uint *)((long)pvVar4 + (ulong)uVar1 * 4) = param_4[2];
      param_4 = param_4 + 3;
    } while (uVar5 != iVar2 * 3 + 1U);
  }
  return puVar3;
}



/* RAYCAST_MESH::MyRaycastMesh::~MyRaycastMesh() */

void __thiscall RAYCAST_MESH::MyRaycastMesh::~MyRaycastMesh(MyRaycastMesh *this)

{
  *(undefined ***)this = &PTR_raycast_001006e8;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RAYCAST_MESH::MyRaycastMesh::raycast(double const*, double const*, double const*, double*,
   double*) */

undefined8 __thiscall
RAYCAST_MESH::MyRaycastMesh::raycast
          (MyRaycastMesh *this,double *param_1,double *param_2,double *param_3,double *param_4,
          double *param_5)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double local_30;
  
  uVar7 = 0;
  dVar10 = param_2[2] - param_1[2];
  dVar13 = *param_2 - *param_1;
  dVar15 = param_2[1] - param_1[1];
  local_30 = SQRT(dVar13 * dVar13 + dVar15 * dVar15 + dVar10 * dVar10);
  if (_LC0 <= local_30) {
    iVar3 = *(int *)(this + 0x18);
    lVar4 = *(long *)(this + 0x20);
    lVar5 = *(long *)(this + 0x10);
    dVar8 = _LC1 / local_30;
    dVar10 = dVar10 * dVar8;
    dVar13 = dVar8 * dVar13;
    dVar8 = dVar8 * dVar15;
    if (iVar3 != 0) {
      uVar6 = 0;
      do {
        pdVar1 = (double *)(lVar5 + (ulong)(uint)(*(int *)(lVar4 + (ulong)uVar6 * 4) * 3) * 8);
        dVar15 = pdVar1[2];
        dVar12 = pdVar1[1];
        dVar19 = *pdVar1;
        pdVar1 = (double *)(lVar5 + (ulong)(uint)(*(int *)(lVar4 + (ulong)(uVar6 + 1) * 4) * 3) * 8)
        ;
        dVar23 = *pdVar1 - dVar19;
        pdVar2 = (double *)(lVar5 + (ulong)(uint)(*(int *)(lVar4 + (ulong)(uVar6 + 2) * 4) * 3) * 8)
        ;
        dVar17 = pdVar1[1] - dVar12;
        dVar22 = pdVar1[2] - dVar15;
        dVar18 = pdVar2[2] - dVar15;
        dVar21 = pdVar2[1] - dVar12;
        dVar20 = *pdVar2 - dVar19;
        dVar16 = dVar8 * dVar18 - dVar10 * dVar21;
        dVar14 = dVar13 * dVar21 - dVar8 * dVar20;
        dVar9 = dVar10 * dVar20 - dVar13 * dVar18;
        dVar11 = dVar22 * dVar14 + dVar17 * dVar9 + dVar23 * dVar16;
        if ((dVar11 <= __LC2) || (_LC3 <= dVar11)) {
          dVar11 = _LC1 / dVar11;
          dVar19 = *param_1 - dVar19;
          dVar12 = param_1[1] - dVar12;
          dVar15 = param_1[2] - dVar15;
          dVar9 = (dVar9 * dVar12 + dVar16 * dVar19 + dVar14 * dVar15) * dVar11;
          if ((0.0 <= dVar9) && (dVar9 <= _LC1)) {
            dVar14 = dVar22 * dVar12 - dVar17 * dVar15;
            dVar16 = dVar15 * dVar23 - dVar22 * dVar19;
            dVar12 = dVar17 * dVar19 - dVar23 * dVar12;
            dVar15 = (dVar8 * dVar16 + dVar13 * dVar14 + dVar10 * dVar12) * dVar11;
            if (((0.0 <= dVar15) && (dVar9 + dVar15 <= _LC1)) &&
               (dVar11 = (dVar20 * dVar14 + dVar21 * dVar16 + dVar18 * dVar12) * dVar11,
               0.0 < dVar11)) {
              dVar9 = dVar11 * dVar13 + *param_1;
              dVar14 = dVar11 * dVar8 + param_1[1];
              dVar12 = dVar11 * dVar10 + param_1[2];
              dVar15 = dVar9 - *param_3;
              dVar11 = dVar12 - param_3[2];
              dVar19 = dVar14 - param_3[1];
              dVar15 = SQRT(dVar19 * dVar19 + dVar15 * dVar15 + dVar11 * dVar11);
              if (dVar15 < local_30) {
                if (param_4 != (double *)0x0) {
                  *param_4 = dVar9;
                  param_4[1] = dVar14;
                  param_4[2] = dVar12;
                }
                if (param_5 != (double *)0x0) {
                  *param_5 = dVar15;
                }
                uVar7 = 1;
                local_30 = dVar15;
              }
            }
          }
        }
        uVar6 = uVar6 + 3;
      } while (uVar6 != iVar3 * 3);
    }
  }
  return uVar7;
}



/* RAYCAST_MESH::MyRaycastMesh::~MyRaycastMesh() */

void __thiscall RAYCAST_MESH::MyRaycastMesh::~MyRaycastMesh(MyRaycastMesh *this)

{
  *(undefined ***)this = &PTR_raycast_001006e8;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  operator_delete(this,0x28);
  return;
}



/* RAYCAST_MESH::MyRaycastMesh::release() */

void __thiscall RAYCAST_MESH::MyRaycastMesh::release(MyRaycastMesh *this)

{
  if (*(code **)(*(long *)this + 0x18) == ~MyRaycastMesh) {
    *(undefined ***)this = &PTR_raycast_001006e8;
    if (*(void **)(this + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x10));
    }
    if (*(void **)(this + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x20));
    }
    operator_delete(this,0x28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))();
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* RAYCAST_MESH::MyRaycastMesh::~MyRaycastMesh() */

void __thiscall RAYCAST_MESH::MyRaycastMesh::~MyRaycastMesh(MyRaycastMesh *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


