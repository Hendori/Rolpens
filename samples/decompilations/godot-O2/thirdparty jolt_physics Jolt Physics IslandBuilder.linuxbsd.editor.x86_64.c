
/* JPH::IslandBuilder::BuildConstraintIslands(unsigned int const*, unsigned int, unsigned int*&,
   unsigned int*&, JPH::TempAllocator*) const [clone .part.0] */

void __thiscall
JPH::IslandBuilder::BuildConstraintIslands
          (IslandBuilder *this,uint *param_1,uint param_2,uint **param_3,uint **param_4,
          TempAllocator *param_5)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = (uint *)(**(code **)(*(long *)param_5 + 0x10))(param_5,param_2 * 4);
  puVar2 = (uint *)(**(code **)(*(long *)param_5 + 0x10))(param_5,*(int *)(this + 0x6c) * 4 + 4);
  if (*(int *)(this + 0x6c) == 0) {
    if (param_2 == 0) goto LAB_00100102;
LAB_00100079:
    lVar3 = *(long *)this;
    puVar4 = param_1;
    do {
      uVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar2[*(int *)(lVar3 + 4 + (ulong)uVar7 * 8) + 1] =
           puVar2[*(int *)(lVar3 + 4 + (ulong)uVar7 * 8) + 1] + 1;
    } while (param_1 + param_2 != puVar4);
    if (1 < *(uint *)(this + 0x6c)) goto LAB_001000ac;
  }
  else {
    lVar3 = 0;
    do {
      puVar2[lVar3] = 0;
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(this + 0x6c));
    if (param_2 != 0) goto LAB_00100079;
    if (*(uint *)(this + 0x6c) < 2) goto LAB_00100102;
LAB_001000ac:
    uVar7 = *puVar2;
    uVar6 = 1;
    puVar4 = puVar2;
    do {
      puVar4 = puVar4 + 1;
      uVar7 = uVar7 + *puVar4;
      uVar6 = uVar6 + 1;
      *puVar4 = uVar7;
    } while (uVar6 < *(uint *)(this + 0x6c));
    if (param_2 == 0) goto LAB_00100102;
    lVar3 = *(long *)this;
  }
  uVar5 = 0;
  do {
    uVar7 = puVar2[*(uint *)(lVar3 + 4 + (ulong)param_1[uVar5] * 8)];
    puVar2[*(uint *)(lVar3 + 4 + (ulong)param_1[uVar5] * 8)] = uVar7 + 1;
    puVar1[uVar7] = (uint)uVar5;
    uVar5 = uVar5 + 1;
  } while (uVar5 != param_2);
LAB_00100102:
  *param_3 = puVar1;
  *param_4 = puVar2;
  return;
}



/* JPH::IslandBuilder::LinkBodies(unsigned int, unsigned int) [clone .part.0] */

void __thiscall JPH::IslandBuilder::LinkBodies(IslandBuilder *this,uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  
  uVar5 = param_1;
  uVar3 = param_2;
  do {
    while( true ) {
      lVar7 = *(long *)this;
      uVar6 = uVar5;
      do {
        uVar5 = *(uint *)(lVar7 + (ulong)uVar6 * 8);
        bVar8 = uVar6 != uVar5;
        uVar6 = uVar5;
      } while (bVar8);
      do {
        uVar4 = (ulong)uVar3;
        uVar6 = *(uint *)(lVar7 + uVar4 * 8);
        bVar8 = uVar3 != uVar6;
        uVar3 = uVar6;
      } while (bVar8);
      if (uVar6 == uVar5) goto LAB_0010018b;
      if (uVar6 <= uVar5) break;
      puVar1 = (uint *)(lVar7 + uVar4 * 8);
      LOCK();
      uVar3 = *puVar1;
      bVar8 = uVar6 == uVar3;
      if (bVar8) {
        *puVar1 = uVar5;
        uVar3 = uVar6;
      }
      UNLOCK();
      uVar6 = uVar3;
      if (bVar8) goto LAB_00100188;
    }
    puVar1 = (uint *)(lVar7 + (ulong)uVar5 * 8);
    LOCK();
    uVar2 = *puVar1;
    bVar8 = uVar5 == uVar2;
    if (bVar8) {
      *puVar1 = uVar6;
      uVar2 = uVar5;
    }
    uVar5 = uVar2;
    UNLOCK();
  } while (!bVar8);
LAB_00100188:
  lVar7 = *(long *)this;
LAB_0010018b:
  if (uVar6 < uVar5) {
    uVar5 = uVar6;
  }
  puVar1 = (uint *)(lVar7 + (ulong)param_1 * 8);
  uVar3 = *puVar1;
  do {
    if (uVar3 <= uVar5) break;
    LOCK();
    uVar6 = *puVar1;
    bVar8 = uVar3 == uVar6;
    if (bVar8) {
      *puVar1 = uVar5;
      uVar6 = uVar3;
    }
    uVar3 = uVar6;
    UNLOCK();
  } while (!bVar8);
  puVar1 = (uint *)(*(long *)this + (ulong)param_2 * 8);
  uVar3 = *puVar1;
  do {
    if (uVar3 <= uVar5) {
      return;
    }
    LOCK();
    uVar6 = *puVar1;
    bVar8 = uVar3 == uVar6;
    if (bVar8) {
      *puVar1 = uVar5;
      uVar6 = uVar3;
    }
    uVar3 = uVar6;
    UNLOCK();
  } while (!bVar8);
  return;
}



/* void JPH::QuickSort<unsigned int*,
   JPH::IslandBuilder::SortIslands(JPH::TempAllocator*)::{lambda(unsigned int, unsigned
   int)#1}>(unsigned int*, unsigned int*,
   JPH::IslandBuilder::SortIslands(JPH::TempAllocator*)::{lambda(unsigned int, unsigned int)#1}) */

void JPH::
     QuickSort<unsigned_int*,JPH::IslandBuilder::SortIslands(JPH::TempAllocator*)::_lambda(unsigned_int,unsigned_int)_1_>
               (uint *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  
  lVar3 = (long)param_2 - (long)param_1;
  while( true ) {
    if (lVar3 < 5) {
      return;
    }
    if (lVar3 < 0x81) break;
    uVar5 = *param_1;
    puVar8 = (uint *)(param_3 + (ulong)uVar5 * 4);
    puVar1 = (uint *)(((lVar3 >> 2) * 2 - 2U & 0xfffffffffffffffc) + (long)param_1);
    lVar3 = (long)param_2 + (-4 - (long)param_1) >> 5;
    uVar6 = *puVar8;
    puVar2 = param_1 + lVar3;
    puVar11 = param_1 + lVar3 * 2;
    if (uVar6 < *(uint *)(param_3 + (ulong)*puVar2 * 4)) {
      *param_1 = *puVar2;
      *puVar2 = uVar5;
      uVar5 = *param_1;
      puVar8 = (uint *)(param_3 + (ulong)uVar5 * 4);
      uVar6 = *puVar8;
    }
    uVar9 = *puVar11;
    uVar10 = *(uint *)(param_3 + (ulong)uVar9 * 4);
    if (uVar6 < uVar10) {
      *param_1 = uVar9;
      *puVar11 = uVar5;
      uVar10 = *puVar8;
      uVar9 = uVar5;
    }
    uVar5 = *puVar2;
    if (*(uint *)(param_3 + (ulong)uVar5 * 4) < uVar10) {
      *puVar2 = uVar9;
      *puVar11 = uVar5;
    }
    puVar8 = puVar1 + lVar3;
    puVar7 = puVar1 + -lVar3;
    uVar5 = *puVar7;
    puVar11 = (uint *)(param_3 + (ulong)uVar5 * 4);
    uVar6 = *puVar11;
    if (uVar6 < *(uint *)(param_3 + (ulong)*puVar1 * 4)) {
      *puVar7 = *puVar1;
      *puVar1 = uVar5;
      uVar5 = *puVar7;
      puVar11 = (uint *)(param_3 + (ulong)uVar5 * 4);
      uVar6 = *puVar11;
    }
    uVar9 = *puVar8;
    uVar10 = *(uint *)(param_3 + (ulong)uVar9 * 4);
    if (uVar6 < uVar10) {
      *puVar7 = uVar9;
      *puVar8 = uVar5;
      uVar10 = *puVar11;
      uVar9 = uVar5;
    }
    uVar5 = *puVar1;
    if (*(uint *)(param_3 + (ulong)uVar5 * 4) < uVar10) {
      *puVar1 = uVar9;
      *puVar8 = uVar5;
    }
    puVar11 = param_2 + (-1 - lVar3);
    puVar7 = param_2 + lVar3 * -2 + -1;
    uVar5 = *puVar7;
    puVar8 = (uint *)(param_3 + (ulong)uVar5 * 4);
    uVar6 = *puVar8;
    if (uVar6 < *(uint *)(param_3 + (ulong)*puVar11 * 4)) {
      *puVar7 = *puVar11;
      *puVar11 = uVar5;
      uVar5 = *puVar7;
      puVar8 = (uint *)(param_3 + (ulong)uVar5 * 4);
      uVar6 = *puVar8;
    }
    uVar9 = param_2[-1];
    uVar10 = *(uint *)(param_3 + (ulong)uVar9 * 4);
    if (uVar6 < uVar10) {
      *puVar7 = uVar9;
      param_2[-1] = uVar5;
      uVar10 = *puVar8;
      uVar9 = uVar5;
    }
    uVar5 = *puVar11;
    if (*(uint *)(param_3 + (ulong)uVar5 * 4) < uVar10) {
      *puVar11 = uVar9;
      param_2[-1] = uVar5;
    }
    uVar5 = *puVar2;
    puVar8 = (uint *)(param_3 + (ulong)uVar5 * 4);
    uVar6 = *puVar8;
    if (uVar6 < *(uint *)(param_3 + (ulong)*puVar1 * 4)) {
      *puVar2 = *puVar1;
      *puVar1 = uVar5;
      uVar5 = *puVar2;
      puVar8 = (uint *)(param_3 + (ulong)uVar5 * 4);
      uVar6 = *puVar8;
    }
    uVar9 = *puVar11;
    uVar10 = *(uint *)(param_3 + (ulong)uVar9 * 4);
    if (uVar6 < uVar10) {
      *puVar2 = uVar9;
      *puVar11 = uVar5;
      uVar10 = *puVar8;
      uVar9 = uVar5;
    }
    uVar5 = *puVar1;
    puVar8 = (uint *)(param_3 + (ulong)uVar5 * 4);
    uVar6 = *puVar8;
    puVar2 = param_2;
    puVar7 = param_1;
    if (uVar6 < uVar10) {
      *puVar1 = uVar9;
      *puVar11 = uVar5;
      puVar8 = (uint *)(param_3 + (ulong)*puVar1 * 4);
      uVar6 = *puVar8;
    }
    while( true ) {
      do {
        puVar11 = puVar7;
        uVar5 = *puVar11;
        puVar7 = puVar11 + 1;
      } while (uVar6 < *(uint *)(param_3 + (ulong)uVar5 * 4));
      do {
        puVar1 = puVar2;
        puVar2 = puVar1 + -1;
      } while (*(uint *)(param_3 + (ulong)puVar1[-1] * 4) < uVar6);
      if (puVar2 <= puVar11) break;
      *puVar11 = puVar1[-1];
      *puVar2 = uVar5;
      uVar6 = *puVar8;
    }
    lVar3 = (long)puVar1 - (long)param_1;
    if (lVar3 < (long)param_2 - (long)puVar1) {
      QuickSort<unsigned_int*,JPH::IslandBuilder::SortIslands(JPH::TempAllocator*)::_lambda(unsigned_int,unsigned_int)_1_>
                (param_1,puVar1,param_3);
      lVar3 = (long)param_2 - (long)puVar1;
      param_1 = puVar1;
    }
    else {
      QuickSort<unsigned_int*,JPH::IslandBuilder::SortIslands(JPH::TempAllocator*)::_lambda(unsigned_int,unsigned_int)_1_>
                (puVar1,param_2,param_3);
      param_2 = puVar1;
    }
  }
  if (param_2 == param_1) {
    return;
  }
  puVar8 = param_1 + 1;
  if (param_2 == puVar8) {
    return;
  }
  lVar3 = 0;
  do {
    uVar5 = *puVar8;
    puVar2 = (uint *)(param_3 + (ulong)uVar5 * 4);
    uVar6 = *puVar2;
    if (*(uint *)(param_3 + (ulong)*param_1 * 4) < uVar6) {
      if (puVar8 != param_1) {
        memmove((void *)((long)puVar8 + lVar3),param_1,4 - lVar3);
      }
      *param_1 = uVar5;
    }
    else {
      uVar4 = (ulong)puVar8[-1];
      puVar11 = puVar8;
      if (*(uint *)(param_3 + uVar4 * 4) < uVar6) {
        do {
          puVar1 = puVar11 + -1;
          *puVar11 = (uint)uVar4;
          uVar4 = (ulong)puVar11[-2];
          puVar11 = puVar1;
        } while (*(uint *)(param_3 + uVar4 * 4) < *puVar2);
        *puVar1 = uVar5;
      }
      else {
        *puVar8 = uVar5;
      }
    }
    lVar3 = lVar3 + -4;
    puVar8 = puVar8 + 1;
  } while (param_2 != puVar8);
  return;
}



/* JPH::IslandBuilder::~IslandBuilder() */

void __thiscall JPH::IslandBuilder::~IslandBuilder(IslandBuilder *this)

{
  if (*(long *)this != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010052c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::IslandBuilder::Init(unsigned int) */

void __thiscall JPH::IslandBuilder::Init(IslandBuilder *this,uint param_1)

{
  long lVar1;
  long lVar2;
  
  *(uint *)(this + 0x58) = param_1;
  lVar1 = (*_Allocate)((ulong)param_1 * 8);
  *(long *)this = lVar1;
  if (*(int *)(this + 0x58) != 0) {
    lVar2 = 0;
    while( true ) {
      *(int *)(lVar1 + lVar2 * 8) = (int)lVar2;
      lVar2 = lVar2 + 1;
      if (*(uint *)(this + 0x58) <= (uint)lVar2) break;
      lVar1 = *(long *)this;
    }
  }
  return;
}



/* JPH::IslandBuilder::PrepareContactConstraints(unsigned int, JPH::TempAllocator*) */

void __thiscall
JPH::IslandBuilder::PrepareContactConstraints
          (IslandBuilder *this,uint param_1,TempAllocator *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)param_2 + 0x10))(param_2,param_1 * 4);
  *(uint *)(this + 100) = param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}



/* JPH::IslandBuilder::PrepareNonContactConstraints(unsigned int, JPH::TempAllocator*) */

void __thiscall
JPH::IslandBuilder::PrepareNonContactConstraints
          (IslandBuilder *this,uint param_1,TempAllocator *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)param_2;
  *(uint *)(this + 0x60) = param_1;
  uVar2 = (**(code **)(lVar1 + 0x10))(param_2,param_1 << 2);
  *(undefined8 *)(this + 8) = uVar2;
  return;
}



/* JPH::IslandBuilder::GetLowestBodyIndex(unsigned int) const */

void __thiscall JPH::IslandBuilder::GetLowestBodyIndex(IslandBuilder *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  do {
    uVar1 = *(uint *)(*(long *)this + (ulong)param_1 * 8);
    bVar2 = param_1 != uVar1;
    param_1 = uVar1;
  } while (bVar2);
  return;
}



/* JPH::IslandBuilder::LinkBodies(unsigned int, unsigned int) */

void __thiscall JPH::IslandBuilder::LinkBodies(IslandBuilder *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 <= param_1) {
    uVar1 = param_1;
  }
  if (*(uint *)(this + 0x58) <= uVar1) {
    return;
  }
  LinkBodies(this,param_1,param_2);
  return;
}



/* JPH::IslandBuilder::LinkConstraint(unsigned int, unsigned int, unsigned int) */

void __thiscall
JPH::IslandBuilder::LinkConstraint(IslandBuilder *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 <= param_3) {
    uVar1 = param_3;
  }
  if (uVar1 < *(uint *)(this + 0x58)) {
    LinkBodies(this,param_2,param_3);
  }
  if (param_2 < param_3) {
    param_3 = param_2;
  }
  *(uint *)(*(long *)(this + 8) + (ulong)param_1 * 4) = param_3;
  return;
}



/* JPH::IslandBuilder::LinkContact(unsigned int, unsigned int, unsigned int) */

void __thiscall
JPH::IslandBuilder::LinkContact(IslandBuilder *this,uint param_1,uint param_2,uint param_3)

{
  if (param_2 < param_3) {
    param_3 = param_2;
  }
  *(uint *)(*(long *)(this + 0x10) + (ulong)param_1 * 4) = param_3;
  return;
}



/* JPH::IslandBuilder::BuildBodyIslands(JPH::BodyID const*, unsigned int, JPH::TempAllocator*) */

void __thiscall
JPH::IslandBuilder::BuildBodyIslands
          (IslandBuilder *this,BodyID *param_1,uint param_2,TempAllocator *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)param_3;
  *(uint *)(this + 0x5c) = param_2;
  uVar3 = (**(code **)(lVar8 + 0x10))(param_3,param_2 * 4);
  *(undefined8 *)(this + 0x18) = uVar3;
  piVar4 = (int *)(**(code **)(*(long *)param_3 + 0x10))(param_3,param_2 * 4 + 4);
  *piVar4 = 0;
  if (param_2 == 0) {
    if (*(uint *)(this + 0x6c) < 2) goto LAB_0010077c;
LAB_00100723:
    iVar7 = *piVar4;
    uVar9 = 1;
    piVar6 = piVar4;
    do {
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + *piVar6;
      uVar9 = uVar9 + 1;
      *piVar6 = iVar7;
    } while (uVar9 < *(uint *)(this + 0x6c));
    if (param_2 == 0) goto LAB_0010077c;
    lVar8 = *(long *)this;
  }
  else {
    lVar8 = *(long *)this;
    uVar5 = 0;
    do {
      while( true ) {
        puVar1 = (uint *)(lVar8 + uVar5 * 8);
        if (*puVar1 != (uint)uVar5) break;
        uVar9 = *(uint *)(this + 0x6c);
        uVar5 = uVar5 + 1;
        puVar1[1] = uVar9;
        uVar9 = uVar9 + 1;
        *(uint *)(this + 0x6c) = uVar9;
        piVar4[uVar9] = 1;
        if (param_2 == uVar5) goto LAB_0010071d;
      }
      uVar9 = *(uint *)(lVar8 + 4 + (ulong)*puVar1 * 8);
      uVar5 = uVar5 + 1;
      puVar1[1] = uVar9;
      piVar4[uVar9 + 1] = piVar4[uVar9 + 1] + 1;
    } while (param_2 != uVar5);
LAB_0010071d:
    if (1 < *(uint *)(this + 0x6c)) goto LAB_00100723;
  }
  uVar5 = 0;
  while( true ) {
    puVar2 = (undefined4 *)(lVar8 + uVar5 * 8);
    puVar1 = (uint *)(piVar4 + (uint)puVar2[1]);
    *(undefined4 *)(*(long *)(this + 0x18) + (ulong)*puVar1 * 4) =
         *(undefined4 *)(param_1 + uVar5 * 4);
    *puVar1 = *puVar1 + 1;
    *puVar2 = (int)uVar5;
    uVar5 = uVar5 + 1;
    if (uVar5 == param_2) break;
    lVar8 = *(long *)this;
  }
LAB_0010077c:
  *(int **)(this + 0x20) = piVar4;
  return;
}



/* JPH::IslandBuilder::BuildConstraintIslands(unsigned int const*, unsigned int, unsigned int*&,
   unsigned int*&, JPH::TempAllocator*) const */

void __thiscall
JPH::IslandBuilder::BuildConstraintIslands
          (IslandBuilder *this,uint *param_1,uint param_2,uint **param_3,uint **param_4,
          TempAllocator *param_5)

{
  if (param_2 != 0) {
    BuildConstraintIslands(this,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}



/* JPH::IslandBuilder::SortIslands(JPH::TempAllocator*) */

void __thiscall JPH::IslandBuilder::SortIslands(IslandBuilder *this,TempAllocator *param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  
  if ((*(int *)(this + 0x68) == 0) && (*(int *)(this + 0x60) == 0)) {
    return;
  }
  lVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1,*(int *)(this + 0x6c) * 4);
  iVar7 = *(int *)(this + 0x6c);
  *(long *)(this + 0x48) = lVar3;
  if (iVar7 != 0) {
    lVar6 = 0;
    do {
      *(int *)(lVar3 + lVar6 * 4) = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < *(uint *)(this + 0x6c));
    iVar7 = *(uint *)(this + 0x6c) << 2;
  }
  piVar4 = (int *)(**(code **)(*(long *)param_1 + 0x10))(param_1,iVar7);
  if (*(int *)(this + 0x68) == 0) {
    piVar1 = *(int **)(this + 0x30);
    *piVar4 = *piVar1;
    uVar5 = (ulong)*(uint *)(this + 0x6c);
    if (1 < *(uint *)(this + 0x6c)) {
      lVar3 = 0;
      do {
        piVar4[lVar3 + 1] = piVar1[lVar3 + 1] - piVar1[lVar3];
        uVar5 = (ulong)*(uint *)(this + 0x6c);
        iVar7 = (int)lVar3;
        lVar3 = lVar3 + 1;
      } while (iVar7 + 2U < *(uint *)(this + 0x6c));
    }
  }
  else {
    piVar1 = *(int **)(this + 0x40);
    if (*(int *)(this + 0x60) == 0) {
      *piVar4 = *piVar1;
      uVar5 = (ulong)*(uint *)(this + 0x6c);
      if (1 < *(uint *)(this + 0x6c)) {
        lVar3 = 0;
        do {
          piVar4[lVar3 + 1] = piVar1[lVar3 + 1] - piVar1[lVar3];
          uVar5 = (ulong)*(uint *)(this + 0x6c);
          iVar7 = (int)lVar3;
          lVar3 = lVar3 + 1;
        } while (iVar7 + 2U < *(uint *)(this + 0x6c));
      }
    }
    else {
      piVar2 = *(int **)(this + 0x30);
      *piVar4 = *piVar1 + *piVar2;
      uVar5 = (ulong)*(uint *)(this + 0x6c);
      if (1 < *(uint *)(this + 0x6c)) {
        lVar3 = 0;
        do {
          piVar4[lVar3 + 1] =
               ((piVar1[lVar3 + 1] + piVar2[lVar3 + 1]) - piVar2[lVar3]) - piVar1[lVar3];
          uVar5 = (ulong)*(uint *)(this + 0x6c);
          iVar7 = (int)lVar3;
          lVar3 = lVar3 + 1;
        } while (iVar7 + 2U < *(uint *)(this + 0x6c));
      }
    }
  }
  QuickSort<unsigned_int*,JPH::IslandBuilder::SortIslands(JPH::TempAllocator*)::_lambda(unsigned_int,unsigned_int)_1_>
            (*(long *)(this + 0x48),*(long *)(this + 0x48) + uVar5 * 4,piVar4);
                    /* WARNING: Could not recover jumptable at 0x0010088a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))(param_1,piVar4,*(int *)(this + 0x6c) << 2);
  return;
}



/* JPH::IslandBuilder::Finalize(JPH::BodyID const*, unsigned int, unsigned int, JPH::TempAllocator*)
    */

void __thiscall
JPH::IslandBuilder::Finalize
          (IslandBuilder *this,BodyID *param_1,uint param_2,uint param_3,TempAllocator *param_4)

{
  undefined8 uVar1;
  
  *(uint *)(this + 0x68) = param_3;
  BuildBodyIslands(this,param_1,param_2,param_4);
  if (*(uint *)(this + 0x60) != 0) {
    BuildConstraintIslands
              (this,*(uint **)(this + 8),*(uint *)(this + 0x60),(uint **)(this + 0x28),
               (uint **)(this + 0x30),param_4);
  }
  if (*(uint *)(this + 0x68) != 0) {
    BuildConstraintIslands
              (this,*(uint **)(this + 0x10),*(uint *)(this + 0x68),(uint **)(this + 0x38),
               (uint **)(this + 0x40),param_4);
  }
  SortIslands(this,param_4);
  uVar1 = (**(code **)(*(long *)param_4 + 0x10))(param_4,*(undefined4 *)(this + 0x6c));
  *(undefined8 *)(this + 0x50) = uVar1;
  return;
}



/* JPH::IslandBuilder::GetBodiesInIsland(unsigned int, JPH::BodyID*&, JPH::BodyID*&) const */

void __thiscall
JPH::IslandBuilder::GetBodiesInIsland
          (IslandBuilder *this,uint param_1,BodyID **param_2,BodyID **param_3)

{
  long lVar1;
  BodyID *pBVar2;
  
  if (*(long *)(this + 0x48) != 0) {
    param_1 = *(uint *)(*(long *)(this + 0x48) + (ulong)param_1 * 4);
  }
  lVar1 = *(long *)(this + 0x20);
  pBVar2 = *(BodyID **)(this + 0x18);
  if (param_1 != 0) {
    pBVar2 = pBVar2 + (ulong)*(uint *)(lVar1 + (ulong)(param_1 - 1) * 4) * 4;
  }
  *param_2 = pBVar2;
  *param_3 = (BodyID *)(*(long *)(this + 0x18) + (ulong)*(uint *)(lVar1 + (ulong)param_1 * 4) * 4);
  return;
}



/* JPH::IslandBuilder::GetConstraintsInIsland(unsigned int, unsigned int*&, unsigned int*&) const */

undefined8 __thiscall
JPH::IslandBuilder::GetConstraintsInIsland
          (IslandBuilder *this,uint param_1,uint **param_2,uint **param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (*(int *)(this + 0x60) == 0) {
    *param_2 = (uint *)0x0;
    *param_3 = (uint *)0x0;
    return 0;
  }
  uVar1 = *(uint *)(*(long *)(this + 0x48) + (ulong)param_1 * 4);
  puVar2 = *(uint **)(this + 0x28);
  if (uVar1 != 0) {
    puVar2 = puVar2 + *(uint *)(*(long *)(this + 0x30) + (ulong)(uVar1 - 1) * 4);
  }
  *param_2 = puVar2;
  puVar2 = (uint *)(*(long *)(this + 0x28) +
                   (ulong)*(uint *)(*(long *)(this + 0x30) + (ulong)uVar1 * 4) * 4);
  *param_3 = puVar2;
  return CONCAT71((int7)((ulong)puVar2 >> 8),*param_2 != puVar2);
}



/* JPH::IslandBuilder::GetContactsInIsland(unsigned int, unsigned int*&, unsigned int*&) const */

undefined8 __thiscall
JPH::IslandBuilder::GetContactsInIsland
          (IslandBuilder *this,uint param_1,uint **param_2,uint **param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (*(int *)(this + 0x68) == 0) {
    *param_2 = (uint *)0x0;
    *param_3 = (uint *)0x0;
    return 0;
  }
  uVar1 = *(uint *)(*(long *)(this + 0x48) + (ulong)param_1 * 4);
  puVar2 = *(uint **)(this + 0x38);
  if (uVar1 != 0) {
    puVar2 = puVar2 + *(uint *)(*(long *)(this + 0x40) + (ulong)(uVar1 - 1) * 4);
  }
  *param_2 = puVar2;
  puVar2 = (uint *)(*(long *)(this + 0x38) +
                   (ulong)*(uint *)(*(long *)(this + 0x40) + (ulong)uVar1 * 4) * 4);
  *param_3 = puVar2;
  return CONCAT71((int7)((ulong)puVar2 >> 8),*param_2 != puVar2);
}



/* JPH::IslandBuilder::ResetIslands(JPH::TempAllocator*) */

void __thiscall JPH::IslandBuilder::ResetIslands(IslandBuilder *this,TempAllocator *param_1)

{
  (**(code **)(*(long *)param_1 + 0x18))
            (param_1,*(undefined8 *)(this + 0x50),*(undefined4 *)(this + 0x6c));
  if (*(long *)(this + 0x48) != 0) {
    (**(code **)(*(long *)param_1 + 0x18))(param_1,*(long *)(this + 0x48),*(int *)(this + 0x6c) * 4)
    ;
    *(undefined8 *)(this + 0x48) = 0;
  }
  if (*(long *)(this + 0x38) != 0) {
    (**(code **)(*(long *)param_1 + 0x18))
              (param_1,*(undefined8 *)(this + 0x40),*(int *)(this + 0x6c) * 4 + 4);
    *(undefined8 *)(this + 0x40) = 0;
    (**(code **)(*(long *)param_1 + 0x18))
              (param_1,*(undefined8 *)(this + 0x38),*(int *)(this + 0x68) * 4);
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (*(long *)(this + 0x28) != 0) {
    (**(code **)(*(long *)param_1 + 0x18))
              (param_1,*(undefined8 *)(this + 0x30),*(int *)(this + 0x6c) * 4 + 4);
    *(undefined8 *)(this + 0x30) = 0;
    (**(code **)(*(long *)param_1 + 0x18))
              (param_1,*(undefined8 *)(this + 0x28),*(int *)(this + 0x60) * 4);
    *(undefined8 *)(this + 0x28) = 0;
  }
  (**(code **)(*(long *)param_1 + 0x18))
            (param_1,*(undefined8 *)(this + 0x20),*(int *)(this + 0x5c) * 4 + 4);
  *(undefined8 *)(this + 0x20) = 0;
  (**(code **)(*(long *)param_1 + 0x18))
            (param_1,*(undefined8 *)(this + 0x18),*(int *)(this + 0x5c) * 4);
  *(undefined8 *)(this + 0x18) = 0;
  (**(code **)(*(long *)param_1 + 0x18))
            (param_1,*(undefined8 *)(this + 8),*(int *)(this + 0x60) * 4);
  *(undefined8 *)(this + 8) = 0;
  (**(code **)(*(long *)param_1 + 0x18))
            (param_1,*(undefined8 *)(this + 0x10),*(int *)(this + 100) * 4);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined1 (*) [16])(this + 0x5c) = (undefined1  [16])0x0;
  return;
}



/* JPH::IslandBuilder::~IslandBuilder() */

void JPH::IslandBuilder::_GLOBAL__sub_I__IslandBuilder(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC0;
  }
  return;
}


