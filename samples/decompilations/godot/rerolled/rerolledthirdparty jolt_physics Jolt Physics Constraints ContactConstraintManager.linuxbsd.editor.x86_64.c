/* JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::Iterator::TEMPNAMEPLACEHOLDERVALUE() [clone
   .isra.0] */

void __thiscall
JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::Iterator::
operator++(Iterator *this)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)this;
  if ((*(uint *)(this + 0xc) != 0xffffffff) &&
     (iVar1 = *(int *)(*(long *)*puVar3 + 0x10 + (ulong)*(uint *)(this + 0xc)),
     *(int *)(this + 0xc) = iVar1, iVar1 != -1)) {
    return;
  }
  while( true ) {
    uVar2 = *(int *)(this + 8) + 1;
    *(uint *)(this + 8) = uVar2;
    if ((*(uint *)(puVar3 + 2) <= uVar2) ||
       (iVar1 = *(int *)(puVar3[1] + (ulong)uVar2 * 4), *(int *)(this + 0xc) = iVar1, iVar1 != -1))
    break;
    puVar3 = *(undefined8 **)this;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MotionProperties::GetInverseInertiaForRotation(JPH::Mat44 const&) const [clone .isra.0] */

Mat44 * JPH::MotionProperties::GetInverseInertiaForRotation(Mat44 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long in_RSI;
  long in_FS_OFFSET;
  float in_XMM0_Da;
  float fVar5;
  float in_XMM0_Db;
  float in_XMM0_Dc;
  float fVar6;
  float in_XMM0_Dd;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float fVar7;
  float in_XMM1_Dd;
  float in_XMM2_Da;
  uint uVar8;
  float in_XMM2_Db;
  uint uVar10;
  float in_XMM2_Dc;
  uint uVar11;
  float in_XMM2_Dd;
  undefined1 auVar9 [16];
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_98 [16];
  undefined1 local_58 [4];
  float afStack_54 [3];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar14 = (float)*(undefined8 *)(in_RSI + 0x38);
  fVar5 = (float)((ulong)*(undefined8 *)(in_RSI + 0x38) >> 0x20);
  fVar6 = (float)*(undefined8 *)(in_RSI + 0x30);
  fVar18 = fVar14 * (fVar14 + fVar14);
  fVar7 = (float)((ulong)*(undefined8 *)(in_RSI + 0x30) >> 0x20);
  fVar16 = fVar6 + fVar6;
  fVar17 = fVar7 + fVar7;
  fVar15 = (fVar14 + fVar14) * fVar5;
  local_58 = (_LC1 - fVar7 * fVar17) - fVar18;
  lVar4 = 0;
  register0x00001304 = fVar7 * fVar16 + fVar15;
  register0x00001308 = fVar14 * fVar16 - fVar17 * fVar5;
  register0x0000130c = 0;
  local_48._4_4_ = (_LC1 - fVar18) - fVar6 * fVar16;
  local_48._0_4_ = fVar7 * fVar16 - fVar15;
  local_48._8_4_ = fVar16 * fVar5 + fVar14 * fVar17;
  local_48._12_4_ = 0;
  local_38._4_4_ = fVar14 * fVar17 - fVar16 * fVar5;
  local_38._0_4_ = fVar14 * fVar16 + fVar17 * fVar5;
  local_38._8_4_ = (_LC1 - fVar6 * fVar16) - fVar7 * fVar17;
  local_38._12_4_ = 0;
  do {
    fVar6 = *(float *)(local_58 + lVar4);
    fVar7 = *(float *)(local_58 + lVar4 + 4);
    fVar14 = *(float *)(local_58 + lVar4 + 8);
    *(float *)((long)local_98 + lVar4) =
         fVar14 * in_XMM2_Da + fVar6 * in_XMM0_Da + fVar7 * in_XMM1_Da;
    *(float *)((long)local_98 + lVar4 + 4) =
         fVar14 * in_XMM2_Db + fVar6 * in_XMM0_Db + fVar7 * in_XMM1_Db;
    *(float *)((long)local_98 + lVar4 + 8) =
         fVar14 * in_XMM2_Dc + fVar6 * in_XMM0_Dc + fVar7 * in_XMM1_Dc;
    *(float *)((long)local_98 + lVar4 + 0xc) =
         fVar14 * in_XMM2_Dd + fVar6 * in_XMM0_Dd + fVar7 * in_XMM1_Dd;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x30);
  fVar6 = *(float *)(in_RSI + 0x20);
  fVar7 = *(float *)(in_RSI + 0x24);
  fVar14 = *(float *)(in_RSI + 0x28);
  bVar1 = *(byte *)(in_RSI + 0x7a);
  fVar16 = fVar7 * local_98[4];
  fVar17 = fVar7 * local_98[5];
  fVar7 = fVar7 * local_98[6];
  uVar2 = CONCAT44(_LC1,_UNK_001162f8);
  fVar5 = fVar6 * local_98[0];
  fVar15 = fVar6 * local_98[1];
  fVar6 = fVar6 * local_98[2];
  fVar18 = fVar14 * local_98[8];
  fVar13 = fVar14 * local_98[9];
  fVar14 = fVar14 * local_98[10];
  *(undefined8 *)(param_1 + 0x30) = __LC2;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  auVar9._1_3_ = 0;
  auVar9[0] = bVar1;
  auVar9[4] = bVar1;
  auVar9._5_3_ = 0;
  auVar9[8] = bVar1;
  auVar9._9_3_ = 0;
  auVar9[0xc] = bVar1;
  auVar9._13_3_ = 0;
  auVar3._4_4_ = _UNK_00116304;
  auVar3._0_4_ = __LC4;
  auVar3._8_4_ = _UNK_00116308;
  auVar3._12_4_ = _UNK_0011630c;
  auVar9 = auVar9 & auVar3;
  uVar8 = -(uint)(auVar9._0_4_ == __LC4);
  uVar10 = -(uint)(auVar9._4_4_ == _UNK_00116304);
  uVar11 = -(uint)(auVar9._8_4_ == _UNK_00116308);
  uVar12 = -(uint)(auVar9._12_4_ == _UNK_0011630c);
  *(uint *)param_1 =
       (uint)(fVar16 * local_98[4] + fVar5 * local_98[0] + fVar18 * local_98[8]) & uVar8;
  *(uint *)(param_1 + 4) =
       (uint)(fVar16 * local_98[5] + fVar5 * local_98[1] + fVar18 * local_98[9]) & uVar8 & uVar10;
  *(uint *)(param_1 + 8) =
       (uint)(fVar16 * local_98[6] + fVar5 * local_98[2] + fVar18 * local_98[10]) & uVar8 & uVar11;
  *(uint *)(param_1 + 0xc) =
       (uint)(fVar16 * local_98[7] + fVar5 * local_98[3] + fVar18 * local_98[0xb]) & uVar8 & uVar12;
  *(uint *)(param_1 + 0x10) =
       (uint)(fVar17 * local_98[4] + fVar15 * local_98[0] + fVar13 * local_98[8]) & uVar10 & uVar8;
  *(uint *)(param_1 + 0x14) =
       (uint)(fVar17 * local_98[5] + fVar15 * local_98[1] + fVar13 * local_98[9]) & uVar10;
  *(uint *)(param_1 + 0x18) =
       (uint)(fVar17 * local_98[6] + fVar15 * local_98[2] + fVar13 * local_98[10]) & uVar10 & uVar11
  ;
  *(uint *)(param_1 + 0x1c) =
       (uint)(fVar17 * local_98[7] + fVar15 * local_98[3] + fVar13 * local_98[0xb]) &
       uVar10 & uVar12;
  *(uint *)(param_1 + 0x20) =
       (uint)(fVar7 * local_98[4] + fVar6 * local_98[0] + fVar14 * local_98[8]) & uVar11 & uVar8;
  *(uint *)(param_1 + 0x24) =
       (uint)(fVar7 * local_98[5] + fVar6 * local_98[1] + fVar14 * local_98[9]) & uVar11 & uVar10;
  *(uint *)(param_1 + 0x28) =
       (uint)(fVar7 * local_98[6] + fVar6 * local_98[2] + fVar14 * local_98[10]) & uVar11;
  *(uint *)(param_1 + 0x2c) =
       (uint)(fVar7 * local_98[7] + fVar6 * local_98[3] + fVar14 * local_98[0xb]) & uVar11 & uVar12;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void JPH::QuickSort<JPH::LockFreeHashMap<JPH::BodyPair,
   JPH::ContactConstraintManager::CachedBodyPair>::KeyValue const**,
   JPH::ContactConstraintManager::ManifoldCache::GetAllBodyPairsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::BodyPair,
   JPH::ContactConstraintManager::CachedBodyPair>::KeyValue const*,
   JPH::STLAllocator<JPH::LockFreeHashMap<JPH::BodyPair,
   JPH::ContactConstraintManager::CachedBodyPair>::KeyValue const*> >&)
   const::{lambda(JPH::LockFreeHashMap<JPH::BodyPair,
   JPH::ContactConstraintManager::CachedBodyPair>::KeyValue const*,
   JPH::LockFreeHashMap<JPH::BodyPair, JPH::ContactConstraintManager::CachedBodyPair>::KeyValue
   const*)#1}>(JPH::LockFreeHashMap<JPH::BodyPair,
   JPH::ContactConstraintManager::CachedBodyPair>::KeyValue const**,
   JPH::LockFreeHashMap<JPH::BodyPair, JPH::ContactConstraintManager::CachedBodyPair>::KeyValue
   const**,
   JPH::ContactConstraintManager::ManifoldCache::GetAllBodyPairsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::BodyPair,
   JPH::ContactConstraintManager::CachedBodyPair>::KeyValue const*,
   JPH::STLAllocator<JPH::LockFreeHashMap<JPH::BodyPair,
   JPH::ContactConstraintManager::CachedBodyPair>::KeyValue const*> >&)
   const::{lambda(JPH::LockFreeHashMap<JPH::BodyPair,
   JPH::ContactConstraintManager::CachedBodyPair>::KeyValue const*,
   JPH::LockFreeHashMap<JPH::BodyPair, JPH::ContactConstraintManager::CachedBodyPair>::KeyValue
   const*)#1}) [clone .isra.0] */

void JPH::
     QuickSort<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllBodyPairsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*,JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*)_1_>
               (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (lVar4 < 9) {
    return;
  }
  while (0x100 < lVar4) {
    puVar3 = (ulong *)*param_1;
    uVar8 = *puVar3;
    puVar1 = (undefined8 *)(((lVar4 >> 3) * 4 - 4U & 0xfffffffffffffff8) + (long)param_1);
    lVar4 = (long)param_2 + (-8 - (long)param_1) >> 6;
    puVar2 = param_1 + lVar4;
    puVar5 = param_1 + lVar4 * 2;
    if (*(ulong *)*puVar2 < uVar8) {
      *param_1 = (ulong *)*puVar2;
      *puVar2 = puVar3;
      puVar3 = (ulong *)*param_1;
      uVar8 = *puVar3;
    }
    puVar6 = (ulong *)*puVar5;
    uVar9 = *puVar6;
    if (*puVar6 < uVar8) {
      *param_1 = puVar6;
      *puVar5 = puVar3;
      puVar6 = puVar3;
      uVar9 = uVar8;
    }
    puVar3 = (ulong *)*puVar2;
    if (uVar9 < *puVar3) {
      *puVar2 = puVar6;
      *puVar5 = puVar3;
    }
    puVar5 = puVar1 + lVar4;
    puVar7 = puVar1 + -lVar4;
    puVar3 = (ulong *)*puVar7;
    uVar8 = *puVar3;
    if (*(ulong *)*puVar1 < uVar8) {
      *puVar7 = (ulong *)*puVar1;
      *puVar1 = puVar3;
      puVar3 = (ulong *)*puVar7;
      uVar8 = *puVar3;
    }
    puVar6 = (ulong *)*puVar5;
    uVar9 = *puVar6;
    if (*puVar6 < uVar8) {
      *puVar7 = puVar6;
      *puVar5 = puVar3;
      puVar6 = puVar3;
      uVar9 = uVar8;
    }
    puVar3 = (ulong *)*puVar1;
    if (uVar9 < *puVar3) {
      *puVar1 = puVar6;
      *puVar5 = puVar3;
    }
    puVar5 = param_2 + (-1 - lVar4);
    puVar7 = param_2 + lVar4 * -2 + -1;
    puVar3 = (ulong *)*puVar7;
    uVar8 = *puVar3;
    if (*(ulong *)*puVar5 < uVar8) {
      *puVar7 = (ulong *)*puVar5;
      *puVar5 = puVar3;
      puVar3 = (ulong *)*puVar7;
      uVar8 = *puVar3;
    }
    puVar6 = (ulong *)param_2[-1];
    uVar9 = *puVar6;
    if (*puVar6 < uVar8) {
      *puVar7 = puVar6;
      param_2[-1] = puVar3;
      puVar6 = puVar3;
      uVar9 = uVar8;
    }
    puVar3 = (ulong *)*puVar5;
    if (uVar9 < *puVar3) {
      *puVar5 = puVar6;
      param_2[-1] = puVar3;
    }
    puVar3 = (ulong *)*puVar2;
    uVar8 = *puVar3;
    if (*(ulong *)*puVar1 < uVar8) {
      *puVar2 = (ulong *)*puVar1;
      *puVar1 = puVar3;
      puVar3 = (ulong *)*puVar2;
      uVar8 = *puVar3;
    }
    puVar6 = (ulong *)*puVar5;
    uVar9 = *puVar6;
    if (*puVar6 < uVar8) {
      *puVar2 = puVar6;
      *puVar5 = puVar3;
      puVar6 = puVar3;
      uVar9 = uVar8;
    }
    puVar3 = (ulong *)*puVar1;
    uVar8 = *puVar3;
    puVar2 = param_2;
    puVar7 = param_1;
    if (uVar9 < uVar8) {
      *puVar1 = puVar6;
      *puVar5 = puVar3;
      uVar8 = *(ulong *)*puVar1;
    }
    while( true ) {
      do {
        puVar5 = puVar7;
        puVar3 = (ulong *)*puVar5;
        puVar7 = puVar5 + 1;
      } while (*puVar3 < uVar8);
      do {
        puVar1 = puVar2;
        puVar2 = puVar1 + -1;
      } while (uVar8 < *(ulong *)puVar1[-1]);
      if (puVar2 <= puVar5) break;
      *puVar5 = (ulong *)puVar1[-1];
      *puVar2 = puVar3;
    }
    lVar4 = (long)puVar1 - (long)param_1;
    lVar10 = (long)param_2 - (long)puVar1;
    if (lVar4 < lVar10) {
      QuickSort<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllBodyPairsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*,JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*)_1_>
                (param_1,puVar1);
      param_1 = puVar1;
      puVar1 = param_2;
      lVar4 = lVar10;
    }
    else {
      QuickSort<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllBodyPairsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*,JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*)_1_>
                (puVar1,param_2);
    }
    param_2 = puVar1;
    if (lVar4 < 9) {
      return;
    }
  }
  if (param_2 == param_1) {
    return;
  }
  puVar2 = param_1 + 1;
  if (puVar2 == param_2) {
    return;
  }
  lVar4 = 0;
  do {
    puVar3 = (ulong *)*puVar2;
    uVar8 = *puVar3;
    if (uVar8 < *(ulong *)*param_1) {
      if (param_1 != puVar2) {
        memmove((void *)((long)puVar2 + lVar4),param_1,8 - lVar4);
      }
      *param_1 = puVar3;
    }
    else {
      puVar6 = (ulong *)puVar2[-1];
      puVar5 = puVar2;
      if (uVar8 < *puVar6) {
        do {
          puVar1 = puVar5 + -1;
          *puVar5 = puVar6;
          puVar6 = (ulong *)puVar5[-2];
          puVar5 = puVar1;
        } while (uVar8 < *puVar6);
        *puVar1 = puVar3;
      }
      else {
        *puVar2 = puVar3;
      }
    }
    lVar4 = lVar4 + -8;
    puVar2 = puVar2 + 1;
  } while (puVar2 != param_2);
  return;
}



/* void JPH::QuickSort<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const**,
   JPH::ContactConstraintManager::ManifoldCache::GetAllManifoldsSorted(JPH::ContactConstraintManager::CachedBodyPair
   const&, JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*,
   JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*> >&)
   const::{lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*,
   JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue
   const*)#1}>(JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const**,
   JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const**,
   JPH::ContactConstraintManager::ManifoldCache::GetAllManifoldsSorted(JPH::ContactConstraintManager::CachedBodyPair
   const&, JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*,
   JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*> >&)
   const::{lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*,
   JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*)#1}) [clone .isra.0] */

void JPH::
     QuickSort<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllManifoldsSorted(JPH::ContactConstraintManager::CachedBodyPair_const&,JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*)_1_>
               (undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  bool bVar12;
  
  lVar3 = (long)param_2 - (long)param_1;
  if (lVar3 < 9) {
    return;
  }
joined_r0x001005f2:
  if (0x100 < lVar3) {
    puVar6 = (uint *)*param_1;
    uVar5 = *puVar6;
    puVar4 = (undefined8 *)(((lVar3 >> 3) * 4 - 4U & 0xfffffffffffffff8) + (long)param_1);
    lVar3 = (long)param_2 + (-8 - (long)param_1) >> 6;
    puVar7 = param_1 + lVar3;
    puVar2 = param_1 + lVar3 * 2;
    puVar8 = (uint *)*puVar7;
    bVar12 = *puVar8 < uVar5;
    if (((*puVar8 == uVar5) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *param_1 = puVar8;
      *puVar7 = puVar6;
      puVar6 = (uint *)*param_1;
      uVar5 = *puVar6;
    }
    puVar8 = (uint *)*puVar2;
    uVar9 = *puVar8;
    bVar12 = uVar9 < uVar5;
    if (((uVar9 == uVar5) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *param_1 = puVar8;
      *puVar2 = puVar6;
      puVar8 = puVar6;
      uVar9 = uVar5;
    }
    puVar6 = (uint *)*puVar7;
    if (*puVar6 == uVar9) {
      bVar12 = puVar8[1] < puVar6[1];
      if ((puVar8[1] == puVar6[1]) && (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
        bVar12 = puVar8[3] < puVar6[3];
      }
    }
    else {
      bVar12 = uVar9 < *puVar6;
    }
    if (bVar12) {
      *puVar7 = puVar8;
      *puVar2 = puVar6;
    }
    puVar2 = puVar4 + lVar3;
    puVar6 = (uint *)*puVar4;
    puVar10 = puVar4 + -lVar3;
    puVar8 = (uint *)*puVar10;
    uVar5 = *puVar8;
    bVar12 = *puVar6 < uVar5;
    if (((*puVar6 == uVar5) && (bVar12 = puVar6[1] < puVar8[1], puVar6[1] == puVar8[1])) &&
       (bVar12 = puVar6[2] < puVar8[2], puVar6[2] == puVar8[2])) {
      bVar12 = puVar6[3] < puVar8[3];
    }
    if (bVar12) {
      *puVar10 = puVar6;
      *puVar4 = puVar8;
      puVar8 = (uint *)*puVar10;
      uVar5 = *puVar8;
    }
    puVar6 = (uint *)*puVar2;
    uVar9 = *puVar6;
    bVar12 = uVar9 < uVar5;
    if (((uVar9 == uVar5) && (bVar12 = puVar6[1] < puVar8[1], puVar6[1] == puVar8[1])) &&
       (bVar12 = puVar6[2] < puVar8[2], puVar6[2] == puVar8[2])) {
      bVar12 = puVar6[3] < puVar8[3];
    }
    if (bVar12) {
      *puVar10 = puVar6;
      *puVar2 = puVar8;
      puVar6 = puVar8;
      uVar9 = uVar5;
    }
    puVar8 = (uint *)*puVar4;
    if (*puVar8 == uVar9) {
      bVar12 = puVar6[1] < puVar8[1];
      if ((puVar6[1] == puVar8[1]) && (bVar12 = puVar6[2] < puVar8[2], puVar6[2] == puVar8[2])) {
        bVar12 = puVar6[3] < puVar8[3];
      }
    }
    else {
      bVar12 = uVar9 < *puVar8;
    }
    if (bVar12) {
      *puVar4 = puVar6;
      *puVar2 = puVar8;
    }
    puVar2 = param_2 + (-1 - lVar3);
    puVar10 = param_2 + lVar3 * -2 + -1;
    puVar6 = (uint *)*puVar10;
    puVar8 = (uint *)*puVar2;
    uVar5 = *puVar6;
    bVar12 = *puVar8 < uVar5;
    if (((*puVar8 == uVar5) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *puVar10 = puVar8;
      *puVar2 = puVar6;
      puVar6 = (uint *)*puVar10;
      uVar5 = *puVar6;
    }
    puVar8 = (uint *)param_2[-1];
    uVar9 = *puVar8;
    if (uVar5 == uVar9) {
      bVar12 = puVar8[1] < puVar6[1];
      if ((puVar8[1] == puVar6[1]) && (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
        bVar12 = puVar8[3] < puVar6[3];
      }
    }
    else {
      bVar12 = uVar9 < uVar5;
    }
    if (bVar12) {
      *puVar10 = puVar8;
      param_2[-1] = puVar6;
      puVar8 = puVar6;
      uVar9 = uVar5;
    }
    puVar6 = (uint *)*puVar2;
    bVar12 = uVar9 < *puVar6;
    if (((uVar9 == *puVar6) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *puVar2 = puVar8;
      param_2[-1] = puVar6;
    }
    puVar6 = (uint *)*puVar7;
    puVar8 = (uint *)*puVar4;
    uVar5 = *puVar6;
    bVar12 = *puVar8 < uVar5;
    if (((*puVar8 == uVar5) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *puVar7 = puVar8;
      *puVar4 = puVar6;
      puVar6 = (uint *)*puVar7;
      uVar5 = *puVar6;
    }
    puVar8 = (uint *)*puVar2;
    uVar9 = *puVar8;
    bVar12 = uVar9 < uVar5;
    if (((uVar9 == uVar5) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *puVar7 = puVar8;
      *puVar2 = puVar6;
      puVar8 = puVar6;
      uVar9 = uVar5;
    }
    puVar6 = (uint *)*puVar4;
    uVar5 = *puVar6;
    if (uVar5 == uVar9) {
      bVar12 = puVar8[1] < puVar6[1];
      if ((puVar8[1] == puVar6[1]) && (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
        bVar12 = puVar8[3] < puVar6[3];
      }
    }
    else {
      bVar12 = uVar9 < uVar5;
    }
    if (bVar12) {
      *puVar4 = puVar8;
      *puVar2 = puVar6;
      puVar6 = (uint *)*puVar4;
      uVar5 = *puVar6;
    }
    puVar8 = (uint *)*param_1;
    puVar7 = param_1 + 1;
    uVar9 = *puVar8;
    puVar2 = param_2;
    if (uVar5 == uVar9) goto LAB_0010086e;
    do {
      bVar12 = uVar9 < uVar5;
LAB_00100805:
      if (!bVar12) {
        do {
          while( true ) {
            puVar4 = puVar2;
            puVar1 = (uint *)puVar4[-1];
            puVar2 = puVar4 + -1;
            bVar12 = uVar5 < *puVar1;
            if (((uVar5 != *puVar1) || (bVar12 = puVar6[1] < puVar1[1], puVar6[1] != puVar1[1])) ||
               (bVar12 = puVar6[2] < puVar1[2], puVar6[2] != puVar1[2])) break;
            if (puVar1[3] <= puVar6[3]) goto LAB_00100850;
          }
        } while (bVar12);
LAB_00100850:
        if (puVar2 <= puVar7 + -1) {
          lVar3 = (long)puVar4 - (long)param_1;
          lVar11 = (long)param_2 - (long)puVar4;
          if (lVar3 < lVar11) {
            QuickSort<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllManifoldsSorted(JPH::ContactConstraintManager::CachedBodyPair_const&,JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*)_1_>
                      (param_1,puVar4);
            param_1 = puVar4;
            puVar4 = param_2;
            lVar3 = lVar11;
          }
          else {
            QuickSort<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllManifoldsSorted(JPH::ContactConstraintManager::CachedBodyPair_const&,JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*)_1_>
                      (puVar4,param_2);
          }
          param_2 = puVar4;
          if (lVar3 < 9) {
            return;
          }
          goto joined_r0x001005f2;
        }
        puVar7[-1] = puVar1;
        *puVar2 = puVar8;
      }
      puVar8 = (uint *)*puVar7;
      puVar7 = puVar7 + 1;
      uVar9 = *puVar8;
    } while (uVar5 != uVar9);
LAB_0010086e:
    bVar12 = puVar8[1] < puVar6[1];
    if ((puVar8[1] == puVar6[1]) && (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    goto LAB_00100805;
  }
  if ((param_2 == param_1) || (puVar7 = param_1 + 1, puVar7 == param_2)) {
    return;
  }
  lVar3 = 0;
LAB_00100924:
  while( true ) {
    puVar6 = (uint *)*puVar7;
    puVar8 = (uint *)*param_1;
    uVar5 = *puVar6;
    bVar12 = uVar5 < *puVar8;
    if (((uVar5 == *puVar8) && (bVar12 = puVar6[1] < puVar8[1], puVar6[1] == puVar8[1])) &&
       (bVar12 = puVar6[2] < puVar8[2], puVar6[2] == puVar8[2])) {
      bVar12 = puVar6[3] < puVar8[3];
    }
    puVar2 = puVar7;
    if (!bVar12) break;
    if (param_1 != puVar7) {
      memmove((void *)((long)puVar7 + lVar3),param_1,8 - lVar3);
    }
    puVar7 = puVar7 + 1;
    *param_1 = puVar6;
    lVar3 = lVar3 + -8;
    if (puVar7 == param_2) {
      return;
    }
  }
  do {
    puVar8 = (uint *)puVar2[-1];
    bVar12 = uVar5 < *puVar8;
    if (((uVar5 == *puVar8) && (bVar12 = puVar6[1] < puVar8[1], puVar6[1] == puVar8[1])) &&
       (bVar12 = puVar6[2] < puVar8[2], puVar6[2] == puVar8[2])) {
      if (puVar8[3] <= puVar6[3]) break;
    }
    else if (!bVar12) break;
    *puVar2 = puVar8;
    puVar2 = puVar2 + -1;
  } while( true );
  puVar7 = puVar7 + 1;
  *puVar2 = puVar6;
  lVar3 = lVar3 + -8;
  if (puVar7 == param_2) {
    return;
  }
  goto LAB_00100924;
}



/* void JPH::QuickSort<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const**,
   JPH::ContactConstraintManager::ManifoldCache::GetAllCCDManifoldsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*,
   JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*> >&)
   const::{lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*,
   JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue
   const*)#1}>(JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const**,
   JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const**,
   JPH::ContactConstraintManager::ManifoldCache::GetAllCCDManifoldsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*,
   JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*> >&)
   const::{lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*,
   JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*)#1}) [clone .isra.0] */

void JPH::
     QuickSort<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllCCDManifoldsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*)_1_>
               (undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  bool bVar12;
  
  lVar3 = (long)param_2 - (long)param_1;
  if (lVar3 < 9) {
    return;
  }
joined_r0x00100c02:
  if (0x100 < lVar3) {
    puVar6 = (uint *)*param_1;
    uVar5 = *puVar6;
    puVar4 = (undefined8 *)(((lVar3 >> 3) * 4 - 4U & 0xfffffffffffffff8) + (long)param_1);
    lVar3 = (long)param_2 + (-8 - (long)param_1) >> 6;
    puVar7 = param_1 + lVar3;
    puVar2 = param_1 + lVar3 * 2;
    puVar8 = (uint *)*puVar7;
    bVar12 = *puVar8 < uVar5;
    if (((*puVar8 == uVar5) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *param_1 = puVar8;
      *puVar7 = puVar6;
      puVar6 = (uint *)*param_1;
      uVar5 = *puVar6;
    }
    puVar8 = (uint *)*puVar2;
    uVar9 = *puVar8;
    bVar12 = uVar9 < uVar5;
    if (((uVar9 == uVar5) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *param_1 = puVar8;
      *puVar2 = puVar6;
      puVar8 = puVar6;
      uVar9 = uVar5;
    }
    puVar6 = (uint *)*puVar7;
    if (*puVar6 == uVar9) {
      bVar12 = puVar8[1] < puVar6[1];
      if ((puVar8[1] == puVar6[1]) && (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
        bVar12 = puVar8[3] < puVar6[3];
      }
    }
    else {
      bVar12 = uVar9 < *puVar6;
    }
    if (bVar12) {
      *puVar7 = puVar8;
      *puVar2 = puVar6;
    }
    puVar2 = puVar4 + lVar3;
    puVar6 = (uint *)*puVar4;
    puVar10 = puVar4 + -lVar3;
    puVar8 = (uint *)*puVar10;
    uVar5 = *puVar8;
    bVar12 = *puVar6 < uVar5;
    if (((*puVar6 == uVar5) && (bVar12 = puVar6[1] < puVar8[1], puVar6[1] == puVar8[1])) &&
       (bVar12 = puVar6[2] < puVar8[2], puVar6[2] == puVar8[2])) {
      bVar12 = puVar6[3] < puVar8[3];
    }
    if (bVar12) {
      *puVar10 = puVar6;
      *puVar4 = puVar8;
      puVar8 = (uint *)*puVar10;
      uVar5 = *puVar8;
    }
    puVar6 = (uint *)*puVar2;
    uVar9 = *puVar6;
    bVar12 = uVar9 < uVar5;
    if (((uVar9 == uVar5) && (bVar12 = puVar6[1] < puVar8[1], puVar6[1] == puVar8[1])) &&
       (bVar12 = puVar6[2] < puVar8[2], puVar6[2] == puVar8[2])) {
      bVar12 = puVar6[3] < puVar8[3];
    }
    if (bVar12) {
      *puVar10 = puVar6;
      *puVar2 = puVar8;
      puVar6 = puVar8;
      uVar9 = uVar5;
    }
    puVar8 = (uint *)*puVar4;
    if (*puVar8 == uVar9) {
      bVar12 = puVar6[1] < puVar8[1];
      if ((puVar6[1] == puVar8[1]) && (bVar12 = puVar6[2] < puVar8[2], puVar6[2] == puVar8[2])) {
        bVar12 = puVar6[3] < puVar8[3];
      }
    }
    else {
      bVar12 = uVar9 < *puVar8;
    }
    if (bVar12) {
      *puVar4 = puVar6;
      *puVar2 = puVar8;
    }
    puVar2 = param_2 + (-1 - lVar3);
    puVar10 = param_2 + lVar3 * -2 + -1;
    puVar6 = (uint *)*puVar10;
    puVar8 = (uint *)*puVar2;
    uVar5 = *puVar6;
    bVar12 = *puVar8 < uVar5;
    if (((*puVar8 == uVar5) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *puVar10 = puVar8;
      *puVar2 = puVar6;
      puVar6 = (uint *)*puVar10;
      uVar5 = *puVar6;
    }
    puVar8 = (uint *)param_2[-1];
    uVar9 = *puVar8;
    if (uVar5 == uVar9) {
      bVar12 = puVar8[1] < puVar6[1];
      if ((puVar8[1] == puVar6[1]) && (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
        bVar12 = puVar8[3] < puVar6[3];
      }
    }
    else {
      bVar12 = uVar9 < uVar5;
    }
    if (bVar12) {
      *puVar10 = puVar8;
      param_2[-1] = puVar6;
      puVar8 = puVar6;
      uVar9 = uVar5;
    }
    puVar6 = (uint *)*puVar2;
    bVar12 = uVar9 < *puVar6;
    if (((uVar9 == *puVar6) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *puVar2 = puVar8;
      param_2[-1] = puVar6;
    }
    puVar6 = (uint *)*puVar7;
    puVar8 = (uint *)*puVar4;
    uVar5 = *puVar6;
    bVar12 = *puVar8 < uVar5;
    if (((*puVar8 == uVar5) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *puVar7 = puVar8;
      *puVar4 = puVar6;
      puVar6 = (uint *)*puVar7;
      uVar5 = *puVar6;
    }
    puVar8 = (uint *)*puVar2;
    uVar9 = *puVar8;
    bVar12 = uVar9 < uVar5;
    if (((uVar9 == uVar5) && (bVar12 = puVar8[1] < puVar6[1], puVar8[1] == puVar6[1])) &&
       (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    if (bVar12) {
      *puVar7 = puVar8;
      *puVar2 = puVar6;
      puVar8 = puVar6;
      uVar9 = uVar5;
    }
    puVar6 = (uint *)*puVar4;
    uVar5 = *puVar6;
    if (uVar5 == uVar9) {
      bVar12 = puVar8[1] < puVar6[1];
      if ((puVar8[1] == puVar6[1]) && (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
        bVar12 = puVar8[3] < puVar6[3];
      }
    }
    else {
      bVar12 = uVar9 < uVar5;
    }
    if (bVar12) {
      *puVar4 = puVar8;
      *puVar2 = puVar6;
      puVar6 = (uint *)*puVar4;
      uVar5 = *puVar6;
    }
    puVar8 = (uint *)*param_1;
    puVar7 = param_1 + 1;
    uVar9 = *puVar8;
    puVar2 = param_2;
    if (uVar5 == uVar9) goto LAB_00100e7e;
    do {
      bVar12 = uVar9 < uVar5;
LAB_00100e15:
      if (!bVar12) {
        do {
          while( true ) {
            puVar4 = puVar2;
            puVar1 = (uint *)puVar4[-1];
            puVar2 = puVar4 + -1;
            bVar12 = uVar5 < *puVar1;
            if (((uVar5 != *puVar1) || (bVar12 = puVar6[1] < puVar1[1], puVar6[1] != puVar1[1])) ||
               (bVar12 = puVar6[2] < puVar1[2], puVar6[2] != puVar1[2])) break;
            if (puVar1[3] <= puVar6[3]) goto LAB_00100e60;
          }
        } while (bVar12);
LAB_00100e60:
        if (puVar2 <= puVar7 + -1) {
          lVar3 = (long)puVar4 - (long)param_1;
          lVar11 = (long)param_2 - (long)puVar4;
          if (lVar3 < lVar11) {
            QuickSort<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllCCDManifoldsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*)_1_>
                      (param_1,puVar4);
            param_1 = puVar4;
            puVar4 = param_2;
            lVar3 = lVar11;
          }
          else {
            QuickSort<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllCCDManifoldsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*)_1_>
                      (puVar4,param_2);
          }
          param_2 = puVar4;
          if (lVar3 < 9) {
            return;
          }
          goto joined_r0x00100c02;
        }
        puVar7[-1] = puVar1;
        *puVar2 = puVar8;
      }
      puVar8 = (uint *)*puVar7;
      puVar7 = puVar7 + 1;
      uVar9 = *puVar8;
    } while (uVar5 != uVar9);
LAB_00100e7e:
    bVar12 = puVar8[1] < puVar6[1];
    if ((puVar8[1] == puVar6[1]) && (bVar12 = puVar8[2] < puVar6[2], puVar8[2] == puVar6[2])) {
      bVar12 = puVar8[3] < puVar6[3];
    }
    goto LAB_00100e15;
  }
  if ((param_2 == param_1) || (puVar7 = param_1 + 1, puVar7 == param_2)) {
    return;
  }
  lVar3 = 0;
LAB_00100f34:
  while( true ) {
    puVar6 = (uint *)*puVar7;
    puVar8 = (uint *)*param_1;
    uVar5 = *puVar6;
    bVar12 = uVar5 < *puVar8;
    if (((uVar5 == *puVar8) && (bVar12 = puVar6[1] < puVar8[1], puVar6[1] == puVar8[1])) &&
       (bVar12 = puVar6[2] < puVar8[2], puVar6[2] == puVar8[2])) {
      bVar12 = puVar6[3] < puVar8[3];
    }
    puVar2 = puVar7;
    if (!bVar12) break;
    if (param_1 != puVar7) {
      memmove((void *)((long)puVar7 + lVar3),param_1,8 - lVar3);
    }
    puVar7 = puVar7 + 1;
    *param_1 = puVar6;
    lVar3 = lVar3 + -8;
    if (puVar7 == param_2) {
      return;
    }
  }
  do {
    puVar8 = (uint *)puVar2[-1];
    bVar12 = uVar5 < *puVar8;
    if (((uVar5 == *puVar8) && (bVar12 = puVar6[1] < puVar8[1], puVar6[1] == puVar8[1])) &&
       (bVar12 = puVar6[2] < puVar8[2], puVar6[2] == puVar8[2])) {
      if (puVar8[3] <= puVar6[3]) break;
    }
    else if (!bVar12) break;
    *puVar2 = puVar8;
    puVar2 = puVar2 + -1;
  } while( true );
  puVar7 = puVar7 + 1;
  *puVar2 = puVar6;
  lVar3 = lVar3 + -8;
  if (puVar7 == param_2) {
    return;
  }
  goto LAB_00100f34;
}



/* void JPH::QuickSort<unsigned int*, JPH::ContactConstraintManager::SortContacts(unsigned int*,
   unsigned int*) const::{lambda(unsigned int, unsigned int)#1}>(unsigned int*, unsigned int*,
   JPH::ContactConstraintManager::SortContacts(unsigned int*, unsigned int*) const::{lambda(unsigned
   int, unsigned int)#1}) */

void JPH::
     QuickSort<unsigned_int*,JPH::ContactConstraintManager::SortContacts(unsigned_int*,unsigned_int*)const::_lambda(unsigned_int,unsigned_int)_1_>
               (uint *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  
  lVar4 = (long)param_2 - (long)param_1;
  if (4 < lVar4) {
    if (0x80 < lVar4) {
      lVar15 = *(long *)(param_3 + 0xb0);
      puVar7 = param_2;
LAB_00101229:
      uVar8 = *param_1;
      puVar1 = (uint *)(((lVar4 >> 2) * 2 - 2U & 0xfffffffffffffffc) + (long)param_1);
      lVar4 = (long)puVar7 + (-4 - (long)param_1) >> 5;
      puVar6 = param_1 + lVar4;
      puVar3 = param_1 + lVar4 * 2;
      plVar2 = (long *)((ulong)*puVar6 * 0x360 + lVar15);
      plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
      uVar9 = plVar5[2];
      bVar16 = (ulong)plVar2[2] < uVar9;
      if (plVar2[2] == uVar9) {
        if (*plVar2 != *plVar5) {
          bVar16 = *(uint *)(*plVar2 + 0x70) < *(uint *)(*plVar5 + 0x70);
          goto LAB_001012b1;
        }
        if (plVar2[1] != plVar5[1]) {
          bVar16 = *(uint *)(plVar2[1] + 0x70) < *(uint *)(plVar5[1] + 0x70);
          goto LAB_001012b1;
        }
      }
      else {
LAB_001012b1:
        if (bVar16) {
          *param_1 = *puVar6;
          *puVar6 = uVar8;
          uVar8 = *param_1;
          plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
          uVar9 = plVar5[2];
        }
      }
      uVar12 = *puVar3;
      plVar2 = (long *)((ulong)uVar12 * 0x360 + lVar15);
      uVar10 = plVar2[2];
      bVar16 = uVar10 < uVar9;
      if (uVar10 == uVar9) {
        lVar14 = *plVar2;
        lVar13 = *plVar5;
        if (lVar14 != lVar13) {
LAB_00101301:
          bVar16 = *(uint *)(lVar14 + 0x70) < *(uint *)(lVar13 + 0x70);
          goto LAB_00101309;
        }
        lVar14 = plVar2[1];
        lVar13 = plVar5[1];
        if (lVar14 != lVar13) goto LAB_00101301;
      }
      else {
LAB_00101309:
        if (bVar16) {
          *param_1 = uVar12;
          *puVar3 = uVar8;
          plVar2 = plVar5;
          uVar10 = uVar9;
          uVar12 = uVar8;
        }
      }
      uVar8 = *puVar6;
      plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
      if (plVar5[2] == uVar10) {
        if (*plVar2 != *plVar5) {
          bVar16 = *(uint *)(*plVar2 + 0x70) < *(uint *)(*plVar5 + 0x70);
          goto LAB_00101349;
        }
        if (plVar2[1] != plVar5[1]) {
          bVar16 = *(uint *)(plVar2[1] + 0x70) < *(uint *)(plVar5[1] + 0x70);
          goto LAB_00101349;
        }
      }
      else {
        bVar16 = uVar10 < (ulong)plVar5[2];
LAB_00101349:
        if (bVar16) {
          *puVar6 = uVar12;
          *puVar3 = uVar8;
        }
      }
      puVar3 = puVar1 + lVar4;
      puVar11 = puVar1 + -lVar4;
      uVar8 = *puVar11;
      plVar2 = (long *)((ulong)*puVar1 * 0x360 + lVar15);
      plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
      uVar9 = plVar5[2];
      bVar16 = (ulong)plVar2[2] < uVar9;
      if (plVar2[2] == uVar9) {
        if (*plVar2 != *plVar5) {
          bVar16 = *(uint *)(*plVar2 + 0x70) < *(uint *)(*plVar5 + 0x70);
          goto LAB_001013b5;
        }
        if (plVar2[1] != plVar5[1]) {
          bVar16 = *(uint *)(plVar2[1] + 0x70) < *(uint *)(plVar5[1] + 0x70);
          goto LAB_001013b5;
        }
      }
      else {
LAB_001013b5:
        if (bVar16) {
          *puVar11 = *puVar1;
          *puVar1 = uVar8;
          uVar8 = *puVar11;
          plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
          uVar9 = plVar5[2];
        }
      }
      uVar12 = *puVar3;
      plVar2 = (long *)((ulong)uVar12 * 0x360 + lVar15);
      uVar10 = plVar2[2];
      bVar16 = uVar10 < uVar9;
      if (uVar10 == uVar9) {
        lVar14 = *plVar2;
        lVar13 = *plVar5;
        if (lVar14 != lVar13) {
LAB_00101405:
          bVar16 = *(uint *)(lVar14 + 0x70) < *(uint *)(lVar13 + 0x70);
          goto LAB_0010140d;
        }
        lVar14 = plVar2[1];
        lVar13 = plVar5[1];
        if (lVar14 != lVar13) goto LAB_00101405;
      }
      else {
LAB_0010140d:
        if (bVar16) {
          *puVar11 = uVar12;
          *puVar3 = uVar8;
          plVar2 = plVar5;
          uVar10 = uVar9;
          uVar12 = uVar8;
        }
      }
      uVar8 = *puVar1;
      plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
      if (plVar5[2] == uVar10) {
        if (*plVar2 != *plVar5) {
          bVar16 = *(uint *)(*plVar2 + 0x70) < *(uint *)(*plVar5 + 0x70);
          goto LAB_0010144d;
        }
        if (plVar2[1] != plVar5[1]) {
          bVar16 = *(uint *)(plVar2[1] + 0x70) < *(uint *)(plVar5[1] + 0x70);
          goto LAB_0010144d;
        }
      }
      else {
        bVar16 = uVar10 < (ulong)plVar5[2];
LAB_0010144d:
        if (bVar16) {
          *puVar1 = uVar12;
          *puVar3 = uVar8;
        }
      }
      puVar3 = puVar7 + (-1 - lVar4);
      puVar11 = puVar7 + lVar4 * -2 + -1;
      uVar8 = *puVar11;
      plVar2 = (long *)((ulong)*puVar3 * 0x360 + lVar15);
      plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
      uVar9 = plVar5[2];
      bVar16 = (ulong)plVar2[2] < uVar9;
      if (plVar2[2] == uVar9) {
        if (*plVar2 != *plVar5) {
          bVar16 = *(uint *)(*plVar2 + 0x70) < *(uint *)(*plVar5 + 0x70);
          goto LAB_001014bf;
        }
        if (plVar2[1] != plVar5[1]) {
          bVar16 = *(uint *)(plVar2[1] + 0x70) < *(uint *)(plVar5[1] + 0x70);
          goto LAB_001014bf;
        }
      }
      else {
LAB_001014bf:
        if (bVar16) {
          *puVar11 = *puVar3;
          *puVar3 = uVar8;
          uVar8 = *puVar11;
          plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
          uVar9 = plVar5[2];
        }
      }
      uVar12 = puVar7[-1];
      plVar2 = (long *)((ulong)uVar12 * 0x360 + lVar15);
      uVar10 = plVar2[2];
      bVar16 = uVar10 < uVar9;
      if (uVar10 == uVar9) {
        lVar4 = *plVar2;
        lVar14 = *plVar5;
        if (lVar4 != lVar14) {
LAB_00101511:
          bVar16 = *(uint *)(lVar4 + 0x70) < *(uint *)(lVar14 + 0x70);
          goto LAB_00101518;
        }
        lVar4 = plVar2[1];
        lVar14 = plVar5[1];
        if (lVar4 != lVar14) goto LAB_00101511;
      }
      else {
LAB_00101518:
        if (bVar16) {
          *puVar11 = uVar12;
          puVar7[-1] = uVar8;
          plVar2 = plVar5;
          uVar10 = uVar9;
          uVar12 = uVar8;
        }
      }
      uVar8 = *puVar3;
      plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
      if (plVar5[2] == uVar10) {
        if (*plVar2 != *plVar5) {
          bVar16 = *(uint *)(*plVar2 + 0x70) < *(uint *)(*plVar5 + 0x70);
          goto LAB_00101557;
        }
        if (plVar2[1] != plVar5[1]) {
          bVar16 = *(uint *)(plVar2[1] + 0x70) < *(uint *)(plVar5[1] + 0x70);
          goto LAB_00101557;
        }
      }
      else {
        bVar16 = uVar10 < (ulong)plVar5[2];
LAB_00101557:
        if (bVar16) {
          *puVar3 = uVar12;
          puVar7[-1] = uVar8;
        }
      }
      uVar8 = *puVar6;
      plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
      plVar2 = (long *)((ulong)*puVar1 * 0x360 + lVar15);
      uVar9 = plVar5[2];
      bVar16 = (ulong)plVar2[2] < uVar9;
      if (plVar2[2] == uVar9) {
        if (*plVar2 != *plVar5) {
          bVar16 = *(uint *)(*plVar2 + 0x70) < *(uint *)(*plVar5 + 0x70);
          goto LAB_001015ae;
        }
        if (plVar2[1] != plVar5[1]) {
          bVar16 = *(uint *)(plVar2[1] + 0x70) < *(uint *)(plVar5[1] + 0x70);
          goto LAB_001015ae;
        }
      }
      else {
LAB_001015ae:
        if (bVar16) {
          *puVar6 = *puVar1;
          *puVar1 = uVar8;
          uVar8 = *puVar6;
          plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
          uVar9 = plVar5[2];
        }
      }
      uVar12 = *puVar3;
      plVar2 = (long *)((ulong)uVar12 * 0x360 + lVar15);
      uVar10 = plVar2[2];
      bVar16 = uVar10 < uVar9;
      if (uVar10 == uVar9) {
        lVar4 = *plVar2;
        lVar14 = *plVar5;
        if (lVar4 != lVar14) {
LAB_001015fc:
          bVar16 = *(uint *)(lVar4 + 0x70) < *(uint *)(lVar14 + 0x70);
          goto LAB_00101603;
        }
        lVar4 = plVar2[1];
        lVar14 = plVar5[1];
        if (lVar4 != lVar14) goto LAB_001015fc;
      }
      else {
LAB_00101603:
        if (bVar16) {
          *puVar6 = uVar12;
          *puVar3 = uVar8;
          plVar2 = plVar5;
          uVar10 = uVar9;
          uVar12 = uVar8;
        }
      }
      uVar8 = *puVar1;
      plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar15);
      uVar9 = plVar5[2];
      puVar6 = puVar7;
      puVar11 = param_1;
      if (uVar9 == uVar10) {
        if (*plVar2 == *plVar5) {
          if (plVar2[1] == plVar5[1]) goto LAB_00101682;
          bVar16 = *(uint *)(plVar2[1] + 0x70) < *(uint *)(plVar5[1] + 0x70);
        }
        else {
          bVar16 = *(uint *)(*plVar2 + 0x70) < *(uint *)(*plVar5 + 0x70);
        }
      }
      else {
        bVar16 = uVar10 < uVar9;
      }
      if (bVar16) {
        *puVar1 = uVar12;
        *puVar3 = uVar8;
        plVar5 = (long *)((ulong)*puVar1 * 0x360 + lVar15);
        uVar9 = plVar5[2];
      }
LAB_00101682:
      puVar3 = puVar11;
      uVar8 = *puVar3;
      plVar2 = (long *)((ulong)uVar8 * 0x360 + lVar15);
      bVar16 = (ulong)plVar2[2] < uVar9;
      puVar11 = puVar3 + 1;
      if (plVar2[2] != uVar9) goto LAB_0010167a;
      if (*plVar2 != *plVar5) {
        bVar16 = *(uint *)(*plVar2 + 0x70) < *(uint *)(*plVar5 + 0x70);
        goto LAB_0010167a;
      }
      if (plVar2[1] != plVar5[1]) {
        bVar16 = *(uint *)(plVar2[1] + 0x70) < *(uint *)(plVar5[1] + 0x70);
        goto LAB_0010167a;
      }
      goto LAB_001016c1;
    }
LAB_0010178f:
    if ((param_2 != param_1) && (puVar7 = param_1 + 1, puVar7 != param_2)) {
      lVar15 = 0;
      lVar4 = *(long *)(param_3 + 0xb0);
LAB_00101806:
      uVar8 = *puVar7;
      plVar5 = (long *)((ulong)uVar8 * 0x360 + lVar4);
      uVar9 = plVar5[2];
      plVar2 = (long *)((ulong)*param_1 * 0x360 + lVar4);
      bVar16 = uVar9 < (ulong)plVar2[2];
      puVar6 = puVar7;
      if (uVar9 == plVar2[2]) {
        if (*plVar5 == *plVar2) {
          if (plVar5[1] == plVar2[1]) goto LAB_00101a76;
          bVar16 = *(uint *)(plVar5[1] + 0x70) < *(uint *)(plVar2[1] + 0x70);
        }
        else {
          bVar16 = *(uint *)(*plVar5 + 0x70) < *(uint *)(*plVar2 + 0x70);
        }
      }
      if (!bVar16) {
LAB_00101a76:
        do {
          plVar2 = (long *)((ulong)puVar6[-1] * 0x360 + lVar4);
          bVar16 = uVar9 < (ulong)plVar2[2];
          if (uVar9 == plVar2[2]) {
            if (*plVar5 == *plVar2) {
              if (plVar5[1] == plVar2[1]) goto LAB_00101ab5;
              bVar16 = *(uint *)(plVar5[1] + 0x70) < *(uint *)(plVar2[1] + 0x70);
            }
            else {
              bVar16 = *(uint *)(*plVar5 + 0x70) < *(uint *)(*plVar2 + 0x70);
            }
          }
          if (!bVar16) goto LAB_00101ab5;
          *puVar6 = puVar6[-1];
          puVar6 = puVar6 + -1;
        } while( true );
      }
      if (puVar7 != param_1) {
        memmove((void *)((long)puVar7 + lVar15),param_1,4 - lVar15);
      }
      *param_1 = uVar8;
      goto LAB_001017f5;
    }
  }
  return;
LAB_0010167a:
  if (bVar16) goto LAB_00101682;
LAB_001016c1:
  do {
    param_2 = puVar6;
    puVar6 = param_2 + -1;
    plVar2 = (long *)((ulong)param_2[-1] * 0x360 + lVar15);
    if (plVar2[2] == uVar9) {
      if (*plVar5 == *plVar2) {
        if (plVar5[1] == plVar2[1]) break;
        bVar16 = *(uint *)(plVar5[1] + 0x70) < *(uint *)(plVar2[1] + 0x70);
      }
      else {
        bVar16 = *(uint *)(*plVar5 + 0x70) < *(uint *)(*plVar2 + 0x70);
      }
    }
    else {
      bVar16 = uVar9 < (ulong)plVar2[2];
    }
  } while (bVar16);
  if (puVar3 < puVar6) {
    *puVar3 = param_2[-1];
    *puVar6 = uVar8;
    goto LAB_00101682;
  }
  lVar4 = (long)param_2 - (long)param_1;
  lVar14 = (long)puVar7 - (long)param_2;
  if (lVar4 < lVar14) {
    QuickSort<unsigned_int*,JPH::ContactConstraintManager::SortContacts(unsigned_int*,unsigned_int*)const::_lambda(unsigned_int,unsigned_int)_1_>
              (param_1,param_2,param_3);
    param_1 = param_2;
    param_2 = puVar7;
    lVar4 = lVar14;
  }
  else {
    QuickSort<unsigned_int*,JPH::ContactConstraintManager::SortContacts(unsigned_int*,unsigned_int*)const::_lambda(unsigned_int,unsigned_int)_1_>
              (param_2,puVar7,param_3);
  }
  if (lVar4 < 5) {
    return;
  }
  puVar7 = param_2;
  if (lVar4 < 0x81) goto LAB_0010178f;
  goto LAB_00101229;
LAB_00101ab5:
  *puVar6 = uVar8;
LAB_001017f5:
  puVar7 = puVar7 + 1;
  lVar15 = lVar15 + -4;
  if (puVar7 == param_2) {
    return;
  }
  goto LAB_00101806;
}



/* JPH::ContactConstraintManager::WorldContactPoint::CalculateNonPenetrationConstraintProperties(JPH::Body
   const&, float, float, JPH::Body const&, float, float, JPH::Vec3, JPH::Vec3, JPH::Vec3) */

void __thiscall
JPH::ContactConstraintManager::WorldContactPoint::CalculateNonPenetrationConstraintProperties
          (AxisConstraintPart *param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,float *param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = (float)param_7;
  fStack_14 = (float)((ulong)param_7 >> 0x20);
  fStack_10 = (float)param_8;
  fStack_c = (float)((ulong)param_8 >> 0x20);
  local_28 = CONCAT44((fStack_14 + (float)((ulong)param_5 >> 0x20)) * _LC6 - param_1[1],
                      (local_18 + (float)param_5) * _LC6 - *param_1);
  uStack_20 = CONCAT44((fStack_c + (float)((ulong)param_6 >> 0x20)) * _LC6 - param_1[3],
                       (fStack_10 + (float)param_6) * _LC6 - param_1[2]);
  AxisConstraintPart::CalculateConstraintPropertiesWithMassOverride
            (param_1_00,param_2,local_28,uStack_20);
  return;
}



/* JPH::ContactConstraintManager::ContactConstraint::Draw(JPH::DebugRenderer*, JPH::Color) const */

void __thiscall
JPH::ContactConstraintManager::ContactConstraint::Draw
          (ContactConstraint *this,long *param_1,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ContactConstraint *pCVar14;
  ContactConstraint *pCVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float local_f8;
  float fStack_f4;
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  float local_48;
  float fStack_44;
  
  uVar1 = *(uint *)(this + 0x38);
  if (uVar1 != 0) {
    puVar2 = *(undefined8 **)this;
    puVar3 = *(undefined8 **)(this + 8);
    fVar10 = (float)puVar2[2];
    fVar13 = (float)puVar2[3];
    fVar11 = (float)((ulong)puVar2[2] >> 0x20);
    fVar30 = fVar10 + fVar10;
    fVar37 = fVar11 + fVar11;
    fVar22 = (float)((ulong)puVar2[3] >> 0x20);
    fVar20 = *(float *)(puVar2 + 1);
    local_f8 = (float)*puVar2;
    fStack_f4 = (float)((ulong)*puVar2 >> 0x20);
    fVar23 = fVar22 * (fVar13 + fVar13);
    fVar39 = fVar13 * (fVar13 + fVar13);
    fVar28 = fVar13 * fVar30 - fVar37 * fVar22;
    fVar42 = fVar13 * fVar37 - fVar30 * fVar22;
    fVar40 = fVar13 * fVar30 + fVar37 * fVar22;
    fVar31 = fVar30 * fVar22 + fVar13 * fVar37;
    fVar34 = (_LC1 - fVar10 * fVar30) - fVar11 * fVar37;
    fVar35 = fVar11 * fVar30 - fVar23;
    fVar23 = fVar23 + fVar11 * fVar30;
    fVar41 = (_LC1 - fVar39) - fVar10 * fVar30;
    fVar30 = (float)puVar3[2];
    fVar12 = (float)((ulong)puVar3[2] >> 0x20);
    fVar36 = fVar12 + fVar12;
    fVar39 = (_LC1 - fVar11 * fVar37) - fVar39;
    fVar37 = (float)puVar3[3];
    fVar32 = fVar30 + fVar30;
    fVar25 = (float)((ulong)puVar3[3] >> 0x20);
    fVar10 = *(float *)(puVar3 + 1);
    fVar38 = fVar37 * (fVar37 + fVar37);
    fVar29 = fVar25 * (fVar37 + fVar37);
    fVar33 = _LC1 - fVar30 * fVar32;
    uVar4 = *puVar3;
    fVar24 = _LC1 - fVar12 * fVar36;
    fVar43 = _LC1 - fVar38;
    pfVar5 = *(float **)(this + (ulong)(uVar1 - 1) * 200 + 0x100);
    fVar11 = *pfVar5;
    fVar13 = pfVar5[1];
    fVar22 = pfVar5[2];
    local_e8._4_4_ = fVar22 * fVar42 + fVar13 * fVar41 + fVar11 * fVar23 + fStack_f4;
    local_e8._0_4_ = fVar22 * fVar40 + fVar13 * fVar35 + fVar11 * fVar39 + local_f8;
    uStack_e0._0_4_ = fVar22 * fVar34 + fVar13 * fVar31 + fVar11 * fVar28 + fVar20;
    uStack_e0._4_4_ = fVar22 * 0.0 + fVar13 * 0.0 + fVar11 * 0.0 + 1.0;
    pCVar14 = this + 0x40;
    do {
      pfVar5 = *(float **)(pCVar14 + 0xc0);
      pCVar15 = pCVar14 + 200;
      fVar11 = *pfVar5;
      fVar13 = pfVar5[1];
      fVar22 = pfVar5[2];
      fVar16 = fVar22 * fVar40 + fVar11 * fVar39 + fVar13 * fVar35 + local_f8;
      fVar18 = fVar22 * fVar42 + fVar11 * fVar23 + fVar13 * fVar41 + fStack_f4;
      fVar19 = fVar22 * fVar34 + fVar11 * fVar28 + fVar13 * fVar31 + fVar20;
      fVar21 = fVar22 * 0.0 + fVar11 * 0.0 + fVar13 * 0.0 + 1.0;
      uVar9 = CONCAT44(fVar21,fVar19);
      uVar8 = CONCAT44(fVar18,fVar16);
      JPH::DebugRenderer::DrawMarker(uVar8,uVar9,param_1,(undefined4)Color::sCyan);
      lVar6 = *(long *)(pCVar14 + 0xc0);
      fVar11 = *(float *)(lVar6 + 0xc);
      fVar13 = *(float *)(lVar6 + 0x10);
      fVar22 = *(float *)(lVar6 + 0x14);
      local_48 = (float)uVar4;
      fStack_44 = (float)((ulong)uVar4 >> 0x20);
      JPH::DebugRenderer::DrawMarker
                (CONCAT44(fVar22 * (fVar37 * fVar36 - fVar32 * fVar25) +
                          fVar11 * (fVar12 * fVar32 + fVar29) + fVar13 * (fVar43 - fVar30 * fVar32)
                          + fStack_44,
                          fVar22 * (fVar37 * fVar32 + fVar36 * fVar25) +
                          fVar11 * (fVar24 - fVar38) + fVar13 * (fVar12 * fVar32 - fVar29) +
                          local_48),
                 CONCAT44(fVar22 * 0.0 + fVar11 * 0.0 + fVar13 * 0.0 + 1.0,
                          fVar22 * (fVar33 - fVar12 * fVar36) +
                          fVar11 * (fVar37 * fVar32 - fVar36 * fVar25) +
                          fVar13 * (fVar32 * fVar25 + fVar37 * fVar36) + fVar10),param_1,
                 (undefined4)Color::sPurple);
      JPH::DebugRenderer::DrawArrow(local_e8,uStack_e0,uVar8,uVar9,_LC9,param_1,param_3);
      local_e8._4_4_ = fVar18;
      local_e8._0_4_ = fVar16;
      uStack_e0._0_4_ = fVar19;
      uStack_e0._4_4_ = fVar21;
      pCVar14 = pCVar15;
    } while (this + 0x40 + (ulong)uVar1 * 200 != pCVar15);
    pfVar5 = *(float **)(this + 0x100);
    fVar10 = *pfVar5;
    fVar11 = pfVar5[1];
    fVar13 = pfVar5[2];
    local_f8 = fVar13 * fVar40 + fVar10 * fVar39 + fVar11 * fVar35 + local_f8;
    fStack_f4 = fVar13 * fVar42 + fVar10 * fVar23 + fVar11 * fVar41 + fStack_f4;
    fVar20 = fVar13 * fVar34 + fVar10 * fVar28 + fVar11 * fVar31 + fVar20;
    fVar22 = fVar13 * 0.0 + fVar10 * 0.0 + fVar11 * 0.0 + 1.0;
    local_e8._4_4_ = *(float *)(this + 0x1c) + fStack_f4;
    local_e8._0_4_ = *(float *)(this + 0x18) + local_f8;
    uStack_e0._0_4_ = *(float *)(this + 0x20) + fVar20;
    uStack_e0._4_4_ = *(float *)(this + 0x24) + fVar22;
    JPH::DebugRenderer::DrawArrow
              (CONCAT44(fStack_f4,local_f8),CONCAT44(fVar22,fVar20),local_e8,uStack_e0,_LC9,param_1,
               (undefined4)Color::sRed);
    fVar10 = *(float *)(this + 0x18);
    fVar11 = *(float *)(this + 0x1c);
    fVar13 = *(float *)(this + 0x20);
    if ((float)((uint)fVar11 & _LC10) < (float)(_LC10 & (uint)fVar10)) {
      auVar17._12_4_ = (uint)fVar10 ^ _LC20;
      auVar17._8_4_ = (uint)fVar10 ^ _LC20;
      auVar17._4_4_ = 0;
      auVar17._0_4_ = fVar13;
      fVar30 = SQRT(fVar13 * fVar13 + fVar10 * fVar10);
      auVar27._4_4_ = fVar30;
      auVar27._0_4_ = fVar30;
      auVar27._8_4_ = fVar30;
      auVar27._12_4_ = fVar30;
      auVar17 = divps(auVar17,auVar27);
    }
    else {
      auVar7._8_4_ = (uint)fVar11 ^ _LC20;
      auVar7._4_4_ = (uint)fVar11 ^ _LC20;
      fVar30 = SQRT(fVar11 * fVar11 + fVar13 * fVar13);
      auVar7._0_4_ = fVar13;
      auVar7._12_4_ = 0;
      auVar26._4_4_ = fVar30;
      auVar26._0_4_ = fVar30;
      auVar26._8_4_ = fVar30;
      auVar26._12_4_ = fVar30;
      auVar17 = divps(auVar7 << 0x20,auVar26);
    }
    fVar30 = auVar17._0_4_;
    fVar12 = auVar17._4_4_;
    fVar37 = auVar17._8_4_;
    local_e8._4_4_ = fVar12 + fStack_f4;
    local_e8._0_4_ = fVar30 + local_f8;
    uStack_e0._0_4_ = fVar37 + fVar20;
    uStack_e0._4_4_ = auVar17._12_4_ + fVar22;
    fVar25 = fVar12 * fVar10 - fVar11 * fVar30;
    (**(code **)(*param_1 + 0x10))
              (CONCAT44(fStack_f4,local_f8),CONCAT44(fVar22,fVar20),local_e8,uStack_e0,param_1,
               (undefined4)Color::sGreen);
                    /* WARNING: Could not recover jumptable at 0x00102151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))
              (CONCAT44(fStack_f4,local_f8),CONCAT44(fVar22,fVar20),
               CONCAT44((fVar30 * fVar13 - fVar10 * fVar37) + fStack_f4,
                        (fVar37 * fVar11 - fVar13 * fVar12) + local_f8),
               CONCAT44(fVar25 + fVar22,fVar25 + fVar20),param_1,(undefined4)Color::sBlue);
    return;
  }
  return;
}



/* JPH::ContactConstraintManager::CachedContactPoint::SaveState(JPH::StateRecorder&) const */

void __thiscall
JPH::ContactConstraintManager::CachedContactPoint::SaveState
          (CachedContactPoint *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  
  pSVar1 = param_1 + 8;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xc,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x18,4);
                    /* WARNING: Could not recover jumptable at 0x00102222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x1c,8);
  return;
}



/* JPH::ContactConstraintManager::CachedContactPoint::RestoreState(JPH::StateRecorder&) */

void __thiscall
JPH::ContactConstraintManager::CachedContactPoint::RestoreState
          (CachedContactPoint *this,StateRecorder *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x18,4);
                    /* WARNING: Could not recover jumptable at 0x0010228e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1c,8);
  return;
}



/* JPH::ContactConstraintManager::CachedManifold::SaveState(JPH::StateRecorder&) const */

void __thiscall
JPH::ContactConstraintManager::CachedManifold::SaveState
          (CachedManifold *this,StateRecorder *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001022af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 4,0xc);
  return;
}



/* JPH::ContactConstraintManager::CachedManifold::RestoreState(JPH::StateRecorder&) */

void __thiscall
JPH::ContactConstraintManager::CachedManifold::RestoreState
          (CachedManifold *this,StateRecorder *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001022da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 4,0xc);
  return;
}



/* JPH::ContactConstraintManager::CachedBodyPair::SaveState(JPH::StateRecorder&) const */

void __thiscall
JPH::ContactConstraintManager::CachedBodyPair::SaveState
          (CachedBodyPair *this,StateRecorder *param_1)

{
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this,0xc);
                    /* WARNING: Could not recover jumptable at 0x0010231c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 0xc,0xc);
  return;
}



/* JPH::ContactConstraintManager::CachedBodyPair::RestoreState(JPH::StateRecorder&) */

void __thiscall
JPH::ContactConstraintManager::CachedBodyPair::RestoreState
          (CachedBodyPair *this,StateRecorder *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,0xc);
                    /* WARNING: Could not recover jumptable at 0x0010235a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,0xc);
  return;
}



/* JPH::ContactConstraintManager::ManifoldCache::Init(unsigned int, unsigned int, unsigned int) */

void __thiscall
JPH::ContactConstraintManager::ManifoldCache::Init
          (ManifoldCache *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = param_3 + param_1 * 0x28;
  *(int *)(this + 8) = iVar4;
  uVar2 = (*AlignedAllocate)(iVar4,0x10);
  *(undefined8 *)this = uVar2;
  if (param_2 < 2) {
    lVar5 = 4;
    uVar1 = 1;
  }
  else {
    iVar4 = 0x1f;
    if (param_2 - 1 != 0) {
      for (; param_2 - 1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    uVar1 = 1 << ((char)iVar4 + 1U & 0x1f);
    lVar5 = (ulong)uVar1 << 2;
  }
  *(ulong *)(this + 0x20) = CONCAT44(uVar1,uVar1);
  pvVar3 = (void *)(*AlignedAllocate)(lVar5,0x10);
  *(void **)(this + 0x18) = pvVar3;
  if (pvVar3 < (void *)((long)pvVar3 + (ulong)*(uint *)(this + 0x20) * 4)) {
    memset(pvVar3,0xff,((ulong)*(uint *)(this + 0x20) * 4 - 1 & 0xfffffffffffffff0) + 0x10);
  }
  if (param_1 < 2) {
    lVar5 = 4;
    uVar1 = 1;
  }
  else {
    iVar4 = 0x1f;
    if (param_1 - 1 != 0) {
      for (; param_1 - 1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    uVar1 = 1 << ((char)iVar4 + 1U & 0x1f);
    lVar5 = (ulong)uVar1 << 2;
  }
  *(ulong *)(this + 0x38) = CONCAT44(uVar1,uVar1);
  pvVar3 = (void *)(*AlignedAllocate)(lVar5,0x10);
  *(void **)(this + 0x30) = pvVar3;
  if (pvVar3 < (void *)((long)pvVar3 + (ulong)*(uint *)(this + 0x38) * 4)) {
    memset(pvVar3,0xff,((ulong)*(uint *)(this + 0x38) * 4 - 1 & 0xfffffffffffffff0) + 0x10);
    return;
  }
  return;
}



/* JPH::ContactConstraintManager::ManifoldCache::Clear() */

undefined4 __thiscall JPH::ContactConstraintManager::ManifoldCache::Clear(ManifoldCache *this)

{
  undefined4 uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 < (void *)((long)pvVar2 + (ulong)*(uint *)(this + 0x20) * 4)) {
    memset(pvVar2,0xff,((ulong)*(uint *)(this + 0x20) * 4 - 1 & 0xfffffffffffffff0) + 0x10);
  }
  pvVar2 = *(void **)(this + 0x30);
  if (pvVar2 < (void *)((long)pvVar2 + (ulong)*(uint *)(this + 0x38) * 4)) {
    memset(pvVar2,0xff,((ulong)*(uint *)(this + 0x38) * 4 - 1 & 0xfffffffffffffff0) + 0x10);
  }
  LOCK();
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(this + 0xc) = 0;
  UNLOCK();
  return uVar1;
}



/* JPH::ContactConstraintManager::ManifoldCache::Prepare(unsigned int, unsigned int) */

void __thiscall
JPH::ContactConstraintManager::ManifoldCache::Prepare(ManifoldCache *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x400;
  if (1 < param_2) {
    iVar1 = 0x1f;
    if (param_2 - 1 != 0) {
      for (; param_2 - 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar2 = 1 << ((char)iVar1 + 1U & 0x1f);
    if (uVar2 < 0x400) {
      uVar2 = 0x400;
    }
  }
  if (*(uint *)(this + 0x24) < uVar2) {
    uVar2 = *(uint *)(this + 0x24);
  }
  *(uint *)(this + 0x20) = uVar2;
  uVar2 = 0x400;
  if (1 < param_1) {
    iVar1 = 0x1f;
    if (param_1 - 1 != 0) {
      for (; param_1 - 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar2 = 1 << ((char)iVar1 + 1U & 0x1f);
    if (uVar2 < 0x400) {
      uVar2 = 0x400;
    }
  }
  if (*(uint *)(this + 0x3c) < uVar2) {
    uVar2 = *(uint *)(this + 0x3c);
  }
  *(uint *)(this + 0x38) = uVar2;
  return;
}



/* JPH::ContactConstraintManager::ManifoldCache::Find(JPH::SubShapeIDPair const&, unsigned long)
   const */

int * __thiscall
JPH::ContactConstraintManager::ManifoldCache::Find
          (ManifoldCache *this,SubShapeIDPair *param_1,ulong param_2)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auVar5 [16];
  long *plVar4;
  
  uVar3 = *(uint *)(*(long *)(this + 0x18) + (*(int *)(this + 0x20) - 1 & param_2) * 4);
  if (uVar3 != 0xffffffff) {
    plVar4 = *(long **)(this + 0x10);
    lVar1 = *plVar4;
    do {
      piVar2 = (int *)((ulong)uVar3 + lVar1);
      auVar5._0_4_ = -(uint)(*piVar2 == *(int *)param_1);
      auVar5._4_4_ = -(uint)(piVar2[1] == *(int *)(param_1 + 4));
      auVar5._8_4_ = -(uint)(piVar2[2] == *(int *)(param_1 + 8));
      auVar5._12_4_ = -(uint)(piVar2[3] == *(int *)(param_1 + 0xc));
      uVar3 = movmskps((int)plVar4,auVar5);
      plVar4 = (long *)(ulong)uVar3;
      if (uVar3 == 0xf) {
        return piVar2;
      }
      uVar3 = piVar2[4];
    } while (uVar3 != 0xffffffff);
  }
  return (int *)0x0;
}



/* JPH::ContactConstraintManager::ManifoldCache::Create(JPH::ContactConstraintManager::ContactAllocator&,
   JPH::SubShapeIDPair const&, unsigned long, int) */

undefined8 * __thiscall
JPH::ContactConstraintManager::ManifoldCache::Create
          (ManifoldCache *this,ContactAllocator *param_1,SubShapeIDPair *param_2,ulong param_3,
          int param_4)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  bool bVar11;
  
  uVar10 = *(uint *)(param_1 + 0x10);
  iVar6 = param_4 + -1;
  if (param_4 + -1 < 0) {
    iVar6 = 0;
  }
  uVar8 = *(uint *)(param_1 + 0xc);
  iVar6 = iVar6 * 0x24 + 0x4c;
  uVar7 = -uVar8 & 3;
  if (uVar10 - uVar8 < iVar6 + uVar7) {
    lVar3 = *(long *)param_1;
    iVar2 = *(int *)(param_1 + 8);
    puVar1 = (uint *)(lVar3 + 0xc);
    if (*(uint *)(lVar3 + 0xc) < *(uint *)(lVar3 + 8)) {
      LOCK();
      uVar7 = *puVar1;
      *puVar1 = *puVar1 + iVar2;
      UNLOCK();
      uVar8 = *(uint *)(lVar3 + 8);
      uVar10 = iVar2 + uVar7;
      if (uVar8 < uVar10) {
        uVar10 = uVar8;
      }
      if (uVar7 <= uVar8) {
        uVar8 = uVar7;
      }
      if (uVar7 == *(uint *)(param_1 + 0x10)) {
        uVar8 = *(uint *)(param_1 + 0xc);
      }
      *(uint *)(param_1 + 0xc) = uVar8;
      *(uint *)(param_1 + 0x10) = uVar10;
    }
    uVar7 = -uVar8 & 3;
    if (uVar10 - uVar8 < iVar6 + uVar7) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
      return (undefined8 *)0x0;
    }
  }
  uVar8 = uVar8 + uVar7;
  uVar4 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 8);
  puVar9 = (undefined8 *)((ulong)uVar8 + **(long **)(this + 0x10));
  iVar2 = *(int *)(this + 0x20);
  lVar3 = *(long *)(this + 0x18);
  *(uint *)(param_1 + 0xc) = iVar6 + uVar8;
  *(undefined8 *)((long)puVar9 + 0x44) = 0;
  *puVar9 = uVar4;
  puVar9[1] = uVar5;
  puVar1 = (uint *)(lVar3 + (iVar2 - 1 & param_3) * 4);
  *(undefined1 (*) [16])((long)puVar9 + 0x14) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)puVar9 + 0x24) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)puVar9 + 0x34) = (undefined1  [16])0x0;
  uVar10 = *puVar1;
  do {
    *(uint *)(puVar9 + 2) = uVar10;
    LOCK();
    uVar7 = *puVar1;
    bVar11 = uVar10 == uVar7;
    if (bVar11) {
      *puVar1 = uVar8;
      uVar7 = uVar10;
    }
    uVar10 = uVar7;
    UNLOCK();
  } while (!bVar11);
  *(short *)((long)puVar9 + 0x26) = (short)param_4;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return puVar9;
}



/* JPH::ContactConstraintManager::ManifoldCache::FindOrCreate(JPH::ContactConstraintManager::ContactAllocator&,
   JPH::SubShapeIDPair const&, unsigned long, int) */

void __thiscall
JPH::ContactConstraintManager::ManifoldCache::FindOrCreate
          (ManifoldCache *this,ContactAllocator *param_1,SubShapeIDPair *param_2,ulong param_3,
          int param_4)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auVar5 [16];
  long *plVar4;
  
  uVar3 = *(uint *)(*(long *)(this + 0x18) + (*(int *)(this + 0x20) - 1 & param_3) * 4);
  if (uVar3 != 0xffffffff) {
    plVar4 = *(long **)(this + 0x10);
    lVar1 = *plVar4;
    do {
      piVar2 = (int *)((ulong)uVar3 + lVar1);
      auVar5._0_4_ = -(uint)(*piVar2 == *(int *)param_2);
      auVar5._4_4_ = -(uint)(piVar2[1] == *(int *)(param_2 + 4));
      auVar5._8_4_ = -(uint)(piVar2[2] == *(int *)(param_2 + 8));
      auVar5._12_4_ = -(uint)(piVar2[3] == *(int *)(param_2 + 0xc));
      uVar3 = movmskps((int)plVar4,auVar5);
      plVar4 = (long *)(ulong)uVar3;
      if (uVar3 == 0xf) {
        return;
      }
      uVar3 = piVar2[4];
    } while (uVar3 != 0xffffffff);
  }
  Create(this,param_1,param_2,param_3,param_4);
  return;
}



/* JPH::ContactConstraintManager::ManifoldCache::ToHandle(JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*) const */

int __thiscall
JPH::ContactConstraintManager::ManifoldCache::ToHandle(ManifoldCache *this,KeyValue *param_1)

{
  return (int)param_1 - **(int **)(this + 0x10);
}



/* JPH::ContactConstraintManager::ManifoldCache::FromHandle(unsigned int) const */

long __thiscall
JPH::ContactConstraintManager::ManifoldCache::FromHandle(ManifoldCache *this,uint param_1)

{
  return (ulong)param_1 + **(long **)(this + 0x10);
}



/* JPH::ContactConstraintManager::ManifoldCache::Find(JPH::BodyPair const&, unsigned long) const */

long * __thiscall
JPH::ContactConstraintManager::ManifoldCache::Find
          (ManifoldCache *this,BodyPair *param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = *(uint *)(*(long *)(this + 0x30) + (*(int *)(this + 0x38) - 1 & param_2) * 4);
  if (uVar1 != 0xffffffff) {
    do {
      plVar2 = (long *)((ulong)uVar1 + **(long **)(this + 0x28));
      if (*plVar2 == *(long *)param_1) {
        return plVar2;
      }
      uVar1 = *(uint *)(plVar2 + 1);
    } while (uVar1 != 0xffffffff);
  }
  return (long *)0x0;
}



/* JPH::ContactConstraintManager::ManifoldCache::Create(JPH::ContactConstraintManager::ContactAllocator&,
   JPH::BodyPair const&, unsigned long) */

undefined8 * __thiscall
JPH::ContactConstraintManager::ManifoldCache::Create
          (ManifoldCache *this,ContactAllocator *param_1,BodyPair *param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  bool bVar9;
  
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar8 = *(uint *)(param_1 + 0x10);
  uVar5 = -uVar6 & 7;
  if (uVar8 - uVar6 < uVar5 + 0x28) {
    lVar4 = *(long *)param_1;
    iVar2 = *(int *)(param_1 + 8);
    puVar1 = (uint *)(lVar4 + 0xc);
    if (*(uint *)(lVar4 + 0xc) < *(uint *)(lVar4 + 8)) {
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 + iVar2;
      UNLOCK();
      uVar6 = *(uint *)(lVar4 + 8);
      uVar8 = iVar2 + uVar5;
      if (uVar6 < uVar8) {
        uVar8 = uVar6;
      }
      if (uVar5 <= uVar6) {
        uVar6 = uVar5;
      }
      if (uVar5 == *(uint *)(param_1 + 0x10)) {
        uVar6 = *(uint *)(param_1 + 0xc);
      }
      *(uint *)(param_1 + 0xc) = uVar6;
      *(uint *)(param_1 + 0x10) = uVar8;
    }
    uVar5 = -uVar6 & 7;
    if (uVar8 - uVar6 < uVar5 + 0x28) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
      return (undefined8 *)0x0;
    }
  }
  uVar6 = uVar6 + uVar5;
  *(uint *)(param_1 + 0xc) = uVar6 + 0x28;
  puVar7 = (undefined8 *)((ulong)uVar6 + **(long **)(this + 0x28));
  uVar3 = *(undefined8 *)param_2;
  *(undefined1 (*) [16])((long)puVar7 + 0xc) = (undefined1  [16])0x0;
  *puVar7 = uVar3;
  iVar2 = *(int *)(this + 0x38);
  lVar4 = *(long *)(this + 0x30);
  *(undefined1 (*) [16])(puVar7 + 3) = (undefined1  [16])0x0;
  puVar1 = (uint *)(lVar4 + (iVar2 - 1 & param_3) * 4);
  uVar8 = *puVar1;
  do {
    *(uint *)(puVar7 + 1) = uVar8;
    LOCK();
    uVar5 = *puVar1;
    bVar9 = uVar8 == uVar5;
    if (bVar9) {
      *puVar1 = uVar6;
      uVar5 = uVar8;
    }
    uVar8 = uVar5;
    UNLOCK();
  } while (!bVar9);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return puVar7;
}



/* JPH::ContactConstraintManager::ManifoldCache::GetAllBodyPairsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::BodyPair,
   JPH::ContactConstraintManager::CachedBodyPair>::KeyValue const*,
   JPH::STLAllocator<JPH::LockFreeHashMap<JPH::BodyPair,
   JPH::ContactConstraintManager::CachedBodyPair>::KeyValue const*> >&) const */

void __thiscall
JPH::ContactConstraintManager::ManifoldCache::GetAllBodyPairsSorted
          (ManifoldCache *this,Array *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  
  puVar8 = *(uint **)(this + 0x30);
  if (puVar8 < puVar8 + *(uint *)(this + 0x38)) {
    do {
      uVar4 = *puVar8;
      if (uVar4 != 0xffffffff) {
        lVar5 = *(long *)(param_1 + 0x10);
        uVar6 = *(ulong *)param_1;
        do {
          while( true ) {
            uVar3 = *(ulong *)(param_1 + 8);
            uVar1 = uVar6 + 1;
            lVar7 = (ulong)uVar4 + **(long **)(this + 0x28);
            if (uVar3 < uVar1) break;
            uVar4 = *(uint *)(lVar7 + 8);
            *(ulong *)param_1 = uVar1;
            *(long *)(lVar5 + uVar6 * 8) = lVar7;
            uVar6 = uVar1;
            if (uVar4 == 0xffffffff) goto LAB_00102977;
          }
          uVar6 = uVar3 * 2;
          if (uVar3 * 2 < uVar1) {
            uVar6 = uVar1;
          }
          lVar5 = (*Reallocate)(lVar5,uVar3 << 3,uVar6 * 8);
          lVar2 = *(long *)param_1;
          *(ulong *)(param_1 + 8) = uVar6;
          *(long *)(param_1 + 0x10) = lVar5;
          uVar4 = *(uint *)(lVar7 + 8);
          uVar6 = lVar2 + 1;
          *(ulong *)param_1 = uVar6;
          *(long *)(lVar5 + lVar2 * 8) = lVar7;
        } while (uVar4 != 0xffffffff);
      }
LAB_00102977:
      puVar8 = puVar8 + 1;
    } while (puVar8 < (uint *)(*(long *)(this + 0x30) + (ulong)*(uint *)(this + 0x38) * 4));
  }
  QuickSort<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllBodyPairsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*,JPH::LockFreeHashMap<JPH::BodyPair,JPH::ContactConstraintManager::CachedBodyPair>::KeyValue_const*)_1_>
            (*(long *)(param_1 + 0x10),*(long *)(param_1 + 0x10) + *(long *)param_1 * 8);
  return;
}



/* JPH::ContactConstraintManager::ManifoldCache::GetAllManifoldsSorted(JPH::ContactConstraintManager::CachedBodyPair
   const&, JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*,
   JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*> >&) const */

void __thiscall
JPH::ContactConstraintManager::ManifoldCache::GetAllManifoldsSorted
          (ManifoldCache *this,CachedBodyPair *param_1,Array *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  lVar5 = *(long *)(param_2 + 0x10);
  uVar7 = *(ulong *)param_2;
  if (uVar4 != 0xffffffff) {
    lVar8 = **(long **)(this + 0x10);
    uVar6 = uVar7;
    do {
      while( true ) {
        uVar3 = *(ulong *)(param_2 + 8);
        uVar7 = uVar6 + 1;
        lVar1 = lVar8 + (ulong)uVar4;
        if (uVar3 < uVar7) break;
        uVar4 = *(uint *)(lVar1 + 0x14);
        *(ulong *)param_2 = uVar7;
        *(long *)(lVar5 + uVar6 * 8) = lVar1;
        uVar6 = uVar7;
        if (uVar4 == 0xffffffff) goto LAB_00102a57;
      }
      uVar6 = uVar3 * 2;
      if (uVar3 * 2 < uVar7) {
        uVar6 = uVar7;
      }
      lVar5 = (*Reallocate)(lVar5,uVar3 << 3,uVar6 * 8);
      lVar2 = *(long *)param_2;
      *(ulong *)(param_2 + 8) = uVar6;
      *(long *)(param_2 + 0x10) = lVar5;
      uVar7 = lVar2 + 1;
      lVar8 = **(long **)(this + 0x10);
      *(ulong *)param_2 = uVar7;
      *(long *)(lVar5 + lVar2 * 8) = lVar1;
      uVar4 = *(uint *)(lVar8 + (ulong)uVar4 + 0x14);
      uVar6 = uVar7;
    } while (uVar4 != 0xffffffff);
  }
LAB_00102a57:
  QuickSort<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllManifoldsSorted(JPH::ContactConstraintManager::CachedBodyPair_const&,JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*)_1_>
            (lVar5,lVar5 + uVar7 * 8);
  return;
}



/* JPH::ContactConstraintManager::ManifoldCache::GetAllCCDManifoldsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*,
   JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,
   JPH::ContactConstraintManager::CachedManifold>::KeyValue const*> >&) const */

void __thiscall
JPH::ContactConstraintManager::ManifoldCache::GetAllCCDManifoldsSorted
          (ManifoldCache *this,Array *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  
  puVar10 = *(uint **)(this + 0x18);
  if (puVar10 < puVar10 + *(uint *)(this + 0x20)) {
    do {
      uVar7 = *puVar10;
      if (uVar7 != 0xffffffff) {
        lVar5 = *(long *)(param_1 + 0x10);
        uVar8 = *(ulong *)param_1;
        do {
          while( true ) {
            uVar3 = *(ulong *)(param_1 + 8);
            uVar1 = uVar8 + 1;
            lVar9 = (ulong)uVar7 + **(long **)(this + 0x10);
            if (uVar3 < uVar1) break;
            uVar7 = *(uint *)(lVar9 + 0x10);
            *(ulong *)param_1 = uVar1;
            *(long *)(lVar5 + uVar8 * 8) = lVar9;
            uVar8 = uVar1;
            if (uVar7 == 0xffffffff) goto LAB_00102b24;
          }
          uVar8 = uVar3 * 2;
          if (uVar3 * 2 < uVar1) {
            uVar8 = uVar1;
          }
          lVar5 = (*Reallocate)(lVar5,uVar3 << 3,uVar8 * 8);
          lVar6 = *(long *)param_1;
          *(ulong *)(param_1 + 8) = uVar8;
          *(long *)(param_1 + 0x10) = lVar5;
          uVar7 = *(uint *)(lVar9 + 0x10);
          uVar8 = lVar6 + 1;
          *(ulong *)param_1 = uVar8;
          *(long *)(lVar5 + lVar6 * 8) = lVar9;
        } while (uVar7 != 0xffffffff);
      }
LAB_00102b24:
      puVar10 = puVar10 + 1;
    } while (puVar10 < (uint *)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 0x20) * 4));
  }
  lVar5 = *(long *)param_1;
  lVar9 = *(long *)(param_1 + 0x10);
  uVar7 = (int)lVar5 - 1;
  if (-1 < (int)uVar7) {
    lVar6 = (long)(int)uVar7 << 3;
    do {
      plVar2 = (long *)(lVar9 + lVar6);
      lVar9 = *(long *)(param_1 + 0x10);
      if ((*(ushort *)(*plVar2 + 0x24) & 2) == 0) {
        lVar4 = *(long *)param_1;
        *(undefined8 *)(lVar9 + lVar6) = *(undefined8 *)(lVar9 + -8 + lVar4 * 8);
        *(long *)param_1 = lVar4 + -1;
      }
      lVar6 = lVar6 + -8;
    } while (((long)(int)lVar5 - (ulong)uVar7) * 8 + -0x10 != lVar6);
    lVar5 = *(long *)param_1;
  }
  QuickSort<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const**,JPH::ContactConstraintManager::ManifoldCache::GetAllCCDManifoldsSorted(JPH::Array<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::STLAllocator<JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*>>&)const::_lambda(JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*,JPH::LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::KeyValue_const*)_1_>
            (lVar9,lVar9 + lVar5 * 8);
  return;
}



/* JPH::ContactConstraintManager::ManifoldCache::ContactPointRemovedCallbacks(JPH::ContactListener*)
    */

void __thiscall
JPH::ContactConstraintManager::ManifoldCache::ContactPointRemovedCallbacks
          (ManifoldCache *this,ContactListener *param_1)

{
  ManifoldCache *pMVar1;
  uint uVar2;
  long in_FS_OFFSET;
  ManifoldCache *local_58;
  undefined8 local_50;
  long local_40;
  
  pMVar1 = this + 0x10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50._4_4_ = **(int **)(this + 0x18);
  local_50._0_4_ = 0;
  local_58 = pMVar1;
  if (local_50._4_4_ == -1) {
    LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::Iterator::
    operator++((Iterator *)&local_58);
  }
  uVar2 = *(uint *)(this + 0x20);
  while ((pMVar1 != local_58 || (local_50 != ((ulong)uVar2 | 0xffffffff00000000)))) {
    if (((*(ushort *)((local_50 >> 0x20) + **(long **)local_58 + 0x24) & 1) == 0) &&
       (*(code **)(*(long *)param_1 + 0x28) != ContactListener::OnContactRemoved)) {
      (**(code **)(*(long *)param_1 + 0x28))(param_1);
    }
    LockFreeHashMap<JPH::SubShapeIDPair,JPH::ContactConstraintManager::CachedManifold>::Iterator::
    operator++((Iterator *)&local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ContactConstraintManager::ManifoldCache::SaveState(JPH::StateRecorder&,
   JPH::StateRecorderFilter const*) const */

void __thiscall
JPH::ContactConstraintManager::ManifoldCache::SaveState
          (ManifoldCache *this,StateRecorder *param_1,StateRecorderFilter *param_2)

{
  StateRecorder *pSVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  char cVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  CachedContactPoint *this_00;
  long in_FS_OFFSET;
  long *local_d8;
  undefined4 *local_c0;
  long *local_a0;
  long *local_98;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  long *local_68;
  undefined1 local_58 [16];
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (long *)0x0;
  GetAllBodyPairsSorted(this,(Array *)local_78);
  plVar8 = local_68;
  uVar9 = local_78._0_8_;
  if (param_2 == (StateRecorderFilter *)0x0) {
    local_a0 = local_68;
    local_68 = (long *)0x0;
    local_98 = (long *)0x0;
    local_78 = (undefined1  [16])0x0;
    uVar11 = uVar9;
LAB_001030c1:
    pSVar1 = param_1 + 8;
    local_80 = (undefined4)uVar11;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,&local_80,4);
    if (local_a0 != local_a0 + uVar11) {
      plVar8 = local_a0;
      do {
        local_c0 = &local_7c;
        lVar3 = *plVar8;
        (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3,8);
        (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,(CachedBodyPair *)(lVar3 + 0xc),0xc);
        (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x18,0xc);
        local_48 = (long *)0x0;
        local_58 = (undefined1  [16])0x0;
        GetAllManifoldsSorted(this,(CachedBodyPair *)(lVar3 + 0xc),(Array *)local_58);
        uVar5 = local_58._0_8_;
        local_7c = local_58._0_4_;
        (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,local_c0,4);
        plVar6 = local_48;
        plVar12 = local_48 + uVar5;
        for (plVar13 = local_48; plVar13 != plVar12; plVar13 = plVar13 + 1) {
          lVar3 = *plVar13;
          uVar14 = 0;
          this_00 = (CachedContactPoint *)(lVar3 + 0x28);
          (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3,0x10);
          (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x26,2);
          (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,lVar3 + 0x18,0xc);
          if (*(short *)(lVar3 + 0x26) != 0) {
            do {
              uVar14 = uVar14 + 1;
              CachedContactPoint::SaveState(this_00,param_1);
              this_00 = this_00 + 0x24;
            } while (uVar14 < *(ushort *)(lVar3 + 0x26));
          }
        }
        if (plVar6 != (long *)0x0) {
          (*Free)();
        }
        plVar8 = plVar8 + 1;
      } while (local_a0 + uVar11 != plVar8);
    }
    local_48 = (long *)0x0;
    local_58 = (undefined1  [16])0x0;
    GetAllCCDManifoldsSorted(this,(Array *)local_58);
    plVar8 = local_48;
    if (param_2 != (StateRecorderFilter *)0x0) goto LAB_00102d8d;
    local_d8 = (long *)0x0;
    local_48 = (long *)0x0;
    uVar9 = local_58._0_8_;
LAB_00102f5d:
    local_c0 = &local_7c;
    pSVar1 = param_1 + 8;
    local_7c = (undefined4)uVar9;
    (**(code **)(*(long *)pSVar1 + 0x10))(pSVar1,local_c0,4);
    for (plVar12 = plVar8; plVar8 + uVar9 != plVar12; plVar12 = plVar12 + 1) {
      (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,*plVar12,0x10);
    }
  }
  else {
    local_a0 = (long *)0x0;
    local_98 = local_68;
    if (local_78._0_8_ != 0) {
      local_a0 = (long *)(*Reallocate)(0,0,local_78._0_8_ * 8);
      plVar12 = plVar8 + uVar9;
      if (plVar12 != plVar8) {
        uVar10 = 0;
        do {
          while( true ) {
            lVar3 = *plVar8;
            if ((*(code **)(*(long *)param_2 + 0x20) != StateRecorderFilter::ShouldSaveContact) &&
               (cVar7 = (**(code **)(*(long *)param_2 + 0x20))(param_2,lVar3,lVar3 + 4),
               cVar7 == '\0')) break;
            uVar11 = uVar10 + 1;
            if (uVar9 < uVar11) {
              uVar4 = uVar9 * 2;
              lVar2 = uVar9 * 8;
              uVar9 = uVar4;
              if (uVar4 < uVar11) {
                uVar9 = uVar11;
              }
              local_a0 = (long *)(*Reallocate)(local_a0,lVar2,uVar9 * 8);
            }
            plVar8 = plVar8 + 1;
            local_a0[uVar10] = lVar3;
            uVar10 = uVar11;
            if (plVar12 == plVar8) goto LAB_001030c1;
          }
          plVar8 = plVar8 + 1;
          uVar11 = uVar10;
        } while (plVar12 != plVar8);
        goto LAB_001030c1;
      }
    }
    local_80 = 0;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,&local_80,4);
    local_48 = (long *)0x0;
    local_58 = (undefined1  [16])0x0;
    GetAllCCDManifoldsSorted(this,(Array *)local_58);
LAB_00102d8d:
    plVar12 = local_48;
    local_c0 = &local_7c;
    uVar11 = local_58._0_8_;
    plVar8 = (long *)0x0;
    local_d8 = local_48;
    if (local_58._0_8_ != 0) {
      plVar8 = (long *)(*Reallocate)(0,0,local_58._0_8_ * 8);
      plVar13 = plVar12 + uVar11;
      if (plVar13 != plVar12) {
        uVar10 = 0;
        do {
          while( true ) {
            lVar3 = *plVar12;
            if ((*(code **)(*(long *)param_2 + 0x20) != StateRecorderFilter::ShouldSaveContact) &&
               (cVar7 = (**(code **)(*(long *)param_2 + 0x20))(param_2,lVar3,lVar3 + 8),
               cVar7 == '\0')) break;
            uVar9 = uVar10 + 1;
            if (uVar11 < uVar9) {
              uVar4 = uVar11 * 2;
              lVar2 = uVar11 * 8;
              uVar11 = uVar4;
              if (uVar4 < uVar9) {
                uVar11 = uVar9;
              }
              plVar8 = (long *)(*Reallocate)(plVar8,lVar2,uVar11 * 8);
            }
            plVar12 = plVar12 + 1;
            plVar8[uVar10] = lVar3;
            uVar10 = uVar9;
            if (plVar13 == plVar12) goto LAB_00102f5d;
          }
          plVar12 = plVar12 + 1;
          uVar9 = uVar10;
        } while (plVar13 != plVar12);
        goto LAB_00102f5d;
      }
    }
    local_7c = 0;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,local_c0,4);
  }
  if (plVar8 != (long *)0x0) {
    (*Free)(plVar8);
  }
  if (local_d8 != (long *)0x0) {
    (*Free)(local_d8);
  }
  if (local_a0 != (long *)0x0) {
    (*Free)(local_a0);
  }
  if (local_98 != (long *)0x0) {
    (*Free)(local_98);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ContactConstraintManager::ManifoldCache::RestoreState(JPH::ContactConstraintManager::ManifoldCache
   const&, JPH::StateRecorder&, JPH::StateRecorderFilter const*) */

undefined1 __thiscall
JPH::ContactConstraintManager::ManifoldCache::RestoreState
          (ManifoldCache *this,ManifoldCache *param_1,StateRecorder *param_2,
          StateRecorderFilter *param_3)

{
  SubShapeIDPair SVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  SubShapeIDPair *pSVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  CachedContactPoint *this_00;
  uint uVar14;
  long in_FS_OFFSET;
  ulong local_138;
  undefined8 *local_128;
  int local_118;
  undefined1 local_111;
  ushort local_fa;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  long local_c8;
  undefined1 local_b8 [16];
  long local_a8;
  ManifoldCache *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_74 [12];
  undefined2 local_68;
  CachedContactPoint local_64 [36];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = __LC12;
  uStack_88 = _UNK_00116348;
  local_80 = 0;
  local_c8 = 0;
  local_d8 = (undefined1  [16])0x0;
  local_98 = this;
  if ((param_2[0x10] != (StateRecorder)0x0) &&
     (GetAllBodyPairsSorted(param_1,(Array *)local_d8), param_2[0x10] != (StateRecorder)0x0)) {
    local_f8 = local_d8._0_4_;
  }
  (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_f8,4);
  if (local_f8 == 0) {
    local_111 = 1;
  }
  else {
    local_111 = 1;
    local_138 = 0;
    do {
      local_f0 = _LC48;
      if ((param_2[0x10] != (StateRecorder)0x0) && (local_138 < (ulong)local_d8._0_8_)) {
        local_f0 = **(long **)(local_c8 + local_138 * 8);
      }
      (**(code **)(*(long *)param_2 + 0x10))(param_2,(BodyPair *)&local_f0,8);
      if (((param_3 == (StateRecorderFilter *)0x0) ||
          (*(code **)(*(long *)param_3 + 0x28) == StateRecorderFilter::ShouldRestoreContact)) ||
         (cVar6 = (**(code **)(*(long *)param_3 + 0x28))
                            (param_3,(BodyPair *)&local_f0,(long)&local_f0 + 4), cVar6 != '\0')) {
        uVar8 = local_f0 * 0x1fffff - 1;
        uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
        uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
        lVar9 = Create(this,(ContactAllocator *)&local_98,(BodyPair *)&local_f0,
                       (uVar8 ^ uVar8 >> 0x1c) * 0x80000001);
        if (lVar9 == 0) {
          local_111 = 0;
          break;
        }
        if ((param_2[0x10] != (StateRecorder)0x0) && (local_138 < (ulong)local_d8._0_8_)) {
          lVar3 = *(long *)(local_c8 + local_138 * 8);
          uVar4 = *(undefined8 *)(lVar3 + 0x14);
          *(undefined8 *)(lVar9 + 0xc) = *(undefined8 *)(lVar3 + 0xc);
          *(undefined8 *)(lVar9 + 0x14) = uVar4;
          uVar4 = *(undefined8 *)(lVar3 + 0x20);
          *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
          *(undefined8 *)(lVar9 + 0x20) = uVar4;
        }
        (**(code **)(*(long *)param_2 + 0x10))(param_2,lVar9 + 0xc,0xc);
        (**(code **)(*(long *)param_2 + 0x10))(param_2,lVar9 + 0x18,0xc);
        local_a8 = 0;
        local_b8 = (undefined1  [16])0x0;
        if (param_2[0x10] == (StateRecorder)0x0) {
          local_f4 = 0;
        }
        else {
          GetAllManifoldsSorted
                    (param_1,(CachedBodyPair *)(*(long *)(local_c8 + local_138 * 8) + 0xc),
                     (Array *)local_b8);
          local_f4 = 0;
          if (param_2[0x10] != (StateRecorder)0x0) {
            local_f4 = local_b8._0_4_;
          }
        }
        lVar3 = local_a8;
        (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_f4,4);
        if (local_f4 == 0) {
          local_118 = -1;
        }
        else {
          uVar8 = 0;
          local_118 = -1;
          do {
            local_e8 = 0xffffffffffffffff;
            uStack_e0 = 0xffffffffffffffff;
            if ((param_2[0x10] != (StateRecorder)0x0) && (uVar8 < (ulong)local_b8._0_8_)) {
              puVar2 = *(undefined8 **)(lVar3 + uVar8 * 8);
              local_e8 = *puVar2;
              uStack_e0 = puVar2[1];
            }
            (**(code **)(*(long *)param_2 + 0x10))(param_2,(SubShapeIDPair *)&local_e8,0x10);
            uVar12 = 0xcbf29ce484222325;
            pSVar10 = (SubShapeIDPair *)&local_e8;
            do {
              SVar1 = *pSVar10;
              pSVar10 = pSVar10 + 1;
              uVar12 = (uVar12 ^ (byte)SVar1) * 0x100000001b3;
            } while (pSVar10 != (SubShapeIDPair *)local_d8);
            local_fa = 0;
            if ((param_2[0x10] != (StateRecorder)0x0) && (uVar8 < (ulong)local_b8._0_8_)) {
              local_fa = *(ushort *)(*(long *)(lVar3 + uVar8 * 8) + 0x26);
            }
            (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_fa,2);
            lVar11 = Create(this,(ContactAllocator *)&local_98,(SubShapeIDPair *)&local_e8,uVar12,
                            (uint)local_fa);
            uVar5 = local_fa;
            if (lVar11 == 0) {
              local_111 = 0;
              break;
            }
            if ((param_2[0x10] != (StateRecorder)0x0) && (uVar8 < (ulong)local_b8._0_8_)) {
              iVar7 = local_fa - 1;
              if (iVar7 < 0) {
                iVar7 = 0;
              }
              memcpy((void *)(lVar11 + 0x14),(void *)(*(long *)(lVar3 + uVar8 * 8) + 0x14),
                     (ulong)(iVar7 * 0x24 + 0x38));
              *(ushort *)(lVar11 + 0x26) = uVar5;
            }
            uVar14 = 0;
            (**(code **)(*(long *)param_2 + 0x10))(param_2,lVar11 + 0x18,0xc);
            *(int *)(lVar11 + 0x14) = local_118;
            local_118 = (int)lVar11 - **(int **)(this + 0x10);
            this_00 = (CachedContactPoint *)(lVar11 + 0x28);
            if (local_fa != 0) {
              do {
                uVar14 = uVar14 + 1;
                CachedContactPoint::RestoreState(this_00,param_2);
                this_00 = this_00 + 0x24;
              } while (uVar14 < local_fa);
            }
            uVar8 = uVar8 + 1;
          } while ((uint)uVar8 < local_f4);
        }
        *(int *)(lVar9 + 0x24) = local_118;
        if (lVar3 != 0) {
          (*Free)(lVar3);
        }
      }
      else {
        (**(code **)(*(long *)param_2 + 0x10))(param_2,local_b8,0xc);
        (**(code **)(*(long *)param_2 + 0x10))(param_2,local_b8 + 0xc,0xc);
        local_f4 = 0;
        (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_f4,4);
        if (local_f4 != 0) {
          uVar14 = 0;
          do {
            local_e8 = 0xffffffffffffffff;
            uStack_e0 = 0xffffffffffffffff;
            uVar13 = 0;
            (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_e8,0x10);
            (**(code **)(*(long *)param_2 + 0x10))(param_2,&local_fa,2);
            local_68 = 0;
            (**(code **)(*(long *)param_2 + 0x10))(param_2,local_74,0xc);
            if (local_fa != 0) {
              do {
                uVar13 = uVar13 + 1;
                CachedContactPoint::RestoreState(local_64,param_2);
              } while (uVar13 < local_fa);
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < local_f4);
        }
      }
      local_138 = local_138 + 1;
    } while ((uint)local_138 < local_f8);
  }
  local_128 = &local_f0;
  local_a8 = 0;
  local_b8 = (undefined1  [16])0x0;
  if ((param_2[0x10] != (StateRecorder)0x0) &&
     (GetAllCCDManifoldsSorted(param_1,(Array *)local_b8), param_2[0x10] != (StateRecorder)0x0)) {
    local_f0 = CONCAT44(local_f0._4_4_,local_b8._0_4_);
  }
  (**(code **)(*(long *)param_2 + 0x10))(param_2,local_128,4);
  if ((uint)local_f0 != 0) {
    uVar8 = 0;
    do {
      local_e8 = 0xffffffffffffffff;
      uStack_e0 = 0xffffffffffffffff;
      if ((param_2[0x10] != (StateRecorder)0x0) && (uVar8 < (ulong)local_b8._0_8_)) {
        puVar2 = *(undefined8 **)(local_a8 + uVar8 * 8);
        local_e8 = *puVar2;
        uStack_e0 = puVar2[1];
      }
      (**(code **)(*(long *)param_2 + 0x10))(param_2,(SubShapeIDPair *)&local_e8,0x10);
      if (((param_3 == (StateRecorderFilter *)0x0) ||
          (*(code **)(*(long *)param_3 + 0x28) == StateRecorderFilter::ShouldRestoreContact)) ||
         (cVar6 = (**(code **)(*(long *)param_3 + 0x28))
                            (param_3,(SubShapeIDPair *)&local_e8,&uStack_e0), cVar6 != '\0')) {
        uVar12 = 0xcbf29ce484222325;
        pSVar10 = (SubShapeIDPair *)&local_e8;
        do {
          SVar1 = *pSVar10;
          pSVar10 = pSVar10 + 1;
          uVar12 = (uVar12 ^ (byte)SVar1) * 0x100000001b3;
        } while (pSVar10 != (SubShapeIDPair *)local_d8);
        lVar9 = Create(this,(ContactAllocator *)&local_98,(SubShapeIDPair *)&local_e8,uVar12,0);
        if (lVar9 == 0) {
          local_111 = 0;
          break;
        }
        LOCK();
        *(ushort *)(lVar9 + 0x24) = *(ushort *)(lVar9 + 0x24) | 2;
        UNLOCK();
      }
      uVar8 = uVar8 + 1;
    } while ((uint)uVar8 < (uint)local_f0);
  }
  if (local_a8 != 0) {
    (*Free)();
  }
  if (local_c8 != 0) {
    (*Free)();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_111;
}



/* JPH::ContactConstraintManager::ContactConstraintManager(JPH::PhysicsSettings const&) */

void __thiscall
JPH::ContactConstraintManager::ContactConstraintManager
          (ContactConstraintManager *this,PhysicsSettings *param_1)

{
  ContactConstraintManager *pCVar1;
  ContactConstraintManager *pCVar2;
  
  pCVar1 = this + 8;
  do {
    *(ContactConstraintManager **)(pCVar1 + 0x10) = pCVar1;
    *(undefined8 *)(pCVar1 + 0x18) = 0;
    *(undefined8 *)(pCVar1 + 0x20) = 0;
    *(ContactConstraintManager **)(pCVar1 + 0x28) = pCVar1;
    pCVar2 = pCVar1 + 0x40;
    *(undefined1 (*) [16])pCVar1 = (undefined1  [16])0x0;
    *(undefined8 *)(pCVar1 + 0x30) = 0;
    *(undefined8 *)(pCVar1 + 0x38) = 0;
    pCVar1 = pCVar2;
  } while (pCVar2 != this + 0x88);
  *(undefined4 *)(this + 0x88) = 0;
  *(PhysicsSettings **)(this + 0x90) = param_1;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(code **)(this + 0xa0) =
       mCombineFriction::
       {lambda(JPH::Body_const&,JPH::SubShapeID_const&,JPH::Body_const,JPH::SubShapeID_const)#1}::
       _FUN;
  *(code **)(this + 0xa8) =
       mCombineRestitution::
       {lambda(JPH::Body_const&,JPH::SubShapeID_const&,JPH::Body_const,JPH::SubShapeID_const)#1}::
       _FUN;
  return;
}



/* JPH::ContactConstraintManager::~ContactConstraintManager() */

void __thiscall
JPH::ContactConstraintManager::~ContactConstraintManager(ContactConstraintManager *this)

{
  ContactConstraintManager *pCVar1;
  ContactConstraintManager *pCVar2;
  
  pCVar1 = this + 0x48;
  do {
    pCVar2 = pCVar1 + -0x40;
    (*AlignedFree)(*(undefined8 *)(pCVar1 + 0x30));
    (*AlignedFree)(*(undefined8 *)(pCVar1 + 0x18));
    (*AlignedFree)(*(undefined8 *)pCVar1);
    pCVar1 = pCVar2;
  } while (pCVar2 != this + -0x38);
  return;
}



/* JPH::ContactConstraintManager::Init(unsigned int, unsigned int) */

void __thiscall
JPH::ContactConstraintManager::Init(ContactConstraintManager *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0xb8) = param_2;
  ManifoldCache::Init((ManifoldCache *)(this + 8),param_1,param_2,param_2 * 0xa4);
  ManifoldCache::Init((ManifoldCache *)(this + 0x48),param_1,param_2,param_2 * 0xa4);
  return;
}



/* JPH::ContactConstraintManager::PrepareConstraintBuffer(JPH::PhysicsUpdateContext*) */

void __thiscall
JPH::ContactConstraintManager::PrepareConstraintBuffer
          (ContactConstraintManager *this,PhysicsUpdateContext *param_1)

{
  undefined8 uVar1;
  
  *(PhysicsUpdateContext **)(this + 0xc0) = param_1;
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                    (*(long **)(param_1 + 8),*(int *)(this + 0xb8) * 0x360);
  *(undefined8 *)(this + 0xb0) = uVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ContactConstraintManager::GetContactsFromCache(JPH::ContactConstraintManager::ContactAllocator&,
   JPH::Body&, JPH::Body&, bool&, bool&) */

void __thiscall
JPH::ContactConstraintManager::GetContactsFromCache
          (ContactConstraintManager *this,ContactAllocator *param_1,Body *param_2,Body *param_3,
          bool *param_4,bool *param_5)

{
  ContactConstraint *pCVar1;
  ManifoldCache *this_00;
  ContactConstraintManager *pCVar2;
  float fVar3;
  undefined4 uVar4;
  Body BVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  SubShapeIDPair *pSVar20;
  SubShapeIDPair *pSVar21;
  long lVar22;
  float *pfVar23;
  float *pfVar24;
  ContactConstraint *pCVar25;
  long lVar26;
  long lVar27;
  ContactConstraint *pCVar28;
  float *pfVar29;
  uint uVar30;
  long *plVar31;
  ContactConstraint *pCVar32;
  uint uVar33;
  SubShapeIDPair *pSVar34;
  Body *pBVar35;
  ulong uVar36;
  long in_FS_OFFSET;
  byte bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar55;
  float fVar57;
  float fVar58;
  undefined1 auVar45 [16];
  float fVar56;
  float fVar59;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar60;
  float fVar61;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar68;
  float fVar69;
  undefined1 auVar70 [12];
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  int local_b20;
  float local_a88;
  float fStack_a84;
  float local_a78;
  float fStack_a74;
  undefined1 local_a28 [12];
  uint local_920;
  uint uStack_91c;
  float local_918;
  float local_914;
  float local_910;
  float fStack_90c;
  float fStack_908;
  float fStack_904;
  byte local_900;
  undefined1 local_8f8 [8];
  float fStack_8f0;
  undefined1 local_8e8 [8];
  float fStack_8e0;
  float local_8d8 [16];
  float local_898;
  float afStack_894 [3];
  undefined1 local_888 [16];
  float local_878;
  undefined4 local_874;
  undefined4 uStack_870;
  uint local_868;
  float local_858 [256];
  uint local_458;
  float local_448 [258];
  long local_40;
  
  bVar37 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = *(uint *)(param_2 + 0x70);
  local_920 = *(uint *)(param_3 + 0x70);
  *param_5 = false;
  *param_4 = false;
  pBVar35 = param_2;
  uStack_91c = uVar30;
  if (uVar30 < local_920) {
    pBVar35 = param_3;
    param_3 = param_2;
    uStack_91c = local_920;
    local_920 = uVar30;
  }
  uVar36 = (long)*(int *)(this + 0x88) ^ 1;
  uVar18 = CONCAT44(uStack_91c,local_920) * 0x1fffff - 1;
  uVar18 = (uVar18 ^ uVar18 >> 0x18) * 0x109;
  uVar18 = (uVar18 ^ uVar18 >> 0xe) * 0x15;
  uVar18 = (uVar18 ^ uVar18 >> 0x1c) * 0x80000001;
  uVar30 = *(uint *)(*(long *)(this + uVar36 * 0x40 + 0x38) +
                    (*(int *)(this + uVar36 * 0x40 + 0x40) - 1 & uVar18) * 4);
  if (uVar30 != 0xffffffff) {
    do {
      plVar31 = (long *)((ulong)uVar30 + **(long **)(this + uVar36 * 0x40 + 0x30));
      if (*plVar31 == CONCAT44(uStack_91c,local_920)) {
        fVar58 = *(float *)(param_3 + 0x10);
        fVar3 = *(float *)(param_3 + 0x14);
        fVar16 = *(float *)(param_3 + 0x18);
        fVar39 = *(float *)(param_3 + 0x1c);
        fVar38 = *(float *)pBVar35 - *(float *)param_3;
        fVar55 = *(float *)(pBVar35 + 4) - *(float *)(param_3 + 4);
        fVar57 = *(float *)(pBVar35 + 8) - *(float *)(param_3 + 8);
        fVar68 = (float)((uint)fVar58 ^ __LC17);
        fVar76 = (float)((uint)fVar3 ^ _UNK_00116354);
        fVar77 = (float)((uint)fVar16 ^ _UNK_00116358);
        fVar78 = (float)((uint)fVar39 ^ _UNK_0011635c);
        fVar113 = (fVar68 * 0.0 + fVar38 * fVar78 + fVar57 * fVar76) - fVar77 * fVar55;
        fVar112 = (fVar78 * fVar55 - fVar68 * fVar57) + fVar76 * 0.0 + fVar38 * fVar77;
        fVar107 = ((fVar68 * fVar55 + fVar57 * fVar78) - fVar38 * fVar76) + fVar77 * 0.0;
        fVar38 = ((fVar78 * 0.0 - fVar38 * fVar68) - fVar55 * fVar76) - fVar57 * fVar77;
        fVar55 = ((fVar112 * fVar16 + fVar58 * fVar38 + fVar113 * fVar39) - fVar107 * fVar3) -
                 *(float *)((long)plVar31 + 0xc);
        fVar57 = (fVar112 * fVar39 + (fVar3 * fVar38 - fVar113 * fVar16) + fVar107 * fVar58) -
                 *(float *)(plVar31 + 2);
        fVar58 = (((fVar16 * fVar38 + fVar113 * fVar3) - fVar112 * fVar58) + fVar107 * fVar39) -
                 *(float *)((long)plVar31 + 0x14);
        fVar58 = fVar58 * fVar58 + fVar55 * fVar55 + 0.0 + fVar57 * fVar57;
        pfVar23 = (float *)(*(long *)(this + 0x90) + 0x28);
        if (fVar58 < *pfVar23 || fVar58 == *pfVar23) {
          fVar55 = (float)*(undefined8 *)(pBVar35 + 0x10);
          fVar39 = (float)*(undefined8 *)(pBVar35 + 0x18);
          fVar38 = (float)((ulong)*(undefined8 *)(pBVar35 + 0x18) >> 0x20);
          fVar57 = (float)((ulong)*(undefined8 *)(pBVar35 + 0x10) >> 0x20);
          fVar58 = *(float *)((long)plVar31 + 0x1c);
          fVar3 = *(float *)(plVar31 + 3);
          fVar16 = *(float *)(plVar31 + 4);
          fVar112 = _LC1 - (fVar16 * fVar16 + fVar58 * fVar58 + fVar3 * fVar3 + 0.0);
          fVar107 = 0.0;
          if (0.0 <= fVar112) {
            fVar107 = SQRT(fVar112);
          }
          if (*(float *)(*(long *)(this + 0x90) + 0x2c) <=
              (float)((uint)(((fVar55 * fVar78 + fVar68 * fVar38 + fVar39 * fVar76) -
                             fVar57 * fVar77) * fVar3 +
                             ((fVar57 * fVar78 - fVar68 * fVar39) + fVar38 * fVar76 +
                             fVar55 * fVar77) * fVar58 +
                            (((fVar39 * fVar78 + fVar68 * fVar57) - fVar55 * fVar76) +
                            fVar38 * fVar77) * fVar16 +
                            (((fVar38 * fVar78 - fVar68 * fVar55) - fVar76 * fVar57) -
                            fVar39 * fVar77) * fVar107) & _LC10)) {
            iVar17 = *(int *)(this + 0x88);
            *param_4 = true;
            this_00 = (ManifoldCache *)(this + (long)iVar17 * 0x40 + 8);
            lVar19 = ManifoldCache::Create(this_00,param_1,(BodyPair *)&local_920,uVar18);
            if (lVar19 != 0) {
              uVar8 = *(undefined8 *)((long)plVar31 + 0x14);
              *(undefined8 *)(lVar19 + 0xc) = *(undefined8 *)((long)plVar31 + 0xc);
              *(undefined8 *)(lVar19 + 0x14) = uVar8;
              lVar22 = plVar31[4];
              *(long *)(lVar19 + 0x18) = plVar31[3];
              *(long *)(lVar19 + 0x20) = lVar22;
              uVar30 = *(uint *)((long)plVar31 + 0x24);
              if (uVar30 != 0xffffffff) {
                fVar39 = (float)*(undefined8 *)(param_3 + 0x18);
                fVar38 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
                fVar3 = *(float *)(param_3 + 8);
                fVar58 = (float)*(undefined8 *)(param_3 + 0x10);
                fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
                uVar8 = *(undefined8 *)param_3;
                fVar55 = fVar58 + fVar58;
                fVar68 = fVar16 + fVar16;
                fVar107 = fVar39 * (fVar39 + fVar39);
                fVar76 = fVar38 * (fVar39 + fVar39);
                fVar79 = (_LC1 - fVar58 * fVar55) - fVar16 * fVar68;
                fVar114 = fVar39 * fVar55 + fVar68 * fVar38;
                fVar91 = fVar39 * fVar55 - fVar68 * fVar38;
                fVar118 = fVar39 * fVar68 - fVar55 * fVar38;
                fVar78 = fVar55 * fVar38 + fVar39 * fVar68;
                fVar57 = fVar16 * fVar55 + fVar76;
                fVar76 = fVar16 * fVar55 - fVar76;
                fVar115 = (_LC1 - fVar107) - fVar58 * fVar55;
                fVar58 = (float)*(undefined8 *)(pBVar35 + 0x10);
                fVar38 = (float)*(undefined8 *)(pBVar35 + 0x18);
                fVar113 = fVar38 * (fVar38 + fVar38);
                fVar107 = (_LC1 - fVar16 * fVar68) - fVar107;
                fVar39 = (float)((ulong)*(undefined8 *)(pBVar35 + 0x10) >> 0x20);
                uVar9 = *(undefined8 *)pBVar35;
                fVar68 = fVar58 + fVar58;
                fVar55 = (float)((ulong)*(undefined8 *)(pBVar35 + 0x18) >> 0x20);
                fVar16 = *(float *)(pBVar35 + 8);
                fVar92 = fVar39 + fVar39;
                fVar77 = fVar55 * (fVar38 + fVar38);
                fVar119 = fVar38 * fVar92 - fVar68 * fVar55;
                fVar112 = fVar68 * fVar55 + fVar38 * fVar92;
                fVar116 = fVar38 * fVar68 + fVar92 * fVar55;
                fVar84 = fVar38 * fVar68 - fVar92 * fVar55;
                fVar80 = (_LC1 - fVar58 * fVar68) - fVar39 * fVar92;
                fVar38 = fVar39 * fVar68 + fVar77;
                fVar77 = fVar39 * fVar68 - fVar77;
                fVar117 = (_LC1 - fVar113) - fVar58 * fVar68;
                fVar113 = (_LC1 - fVar39 * fVar92) - fVar113;
                local_b20 = -1;
                fVar58 = *(float *)(*(long **)(this + 0xc0) + 4);
                lVar22 = **(long **)(this + 0xc0);
                fVar39 = fVar58 * *(float *)(lVar22 + 0x400);
                fVar55 = fVar58 * *(float *)(lVar22 + 0x404);
                fVar68 = fVar58 * *(float *)(lVar22 + 0x408);
                goto LAB_001044a0;
              }
            }
          }
        }
        break;
      }
      uVar30 = *(uint *)(plVar31 + 1);
    } while (uVar30 != 0xffffffff);
  }
  goto LAB_001040fa;
  while( true ) {
    LOCK();
    *(ushort *)(pSVar34 + 0x24) = *(ushort *)(pSVar34 + 0x24) | 1;
    UNLOCK();
    uVar30 = *(uint *)(pSVar34 + 0x14);
    if (uVar30 == 0xffffffff) break;
LAB_001044a0:
    uVar18 = 0xcbf29ce484222325;
    pSVar34 = (SubShapeIDPair *)((ulong)uVar30 + **(long **)(this + uVar36 * 0x40 + 0x18));
    pSVar20 = pSVar34;
    if (pSVar34 < pSVar34 + 0x10) {
      do {
        pSVar21 = pSVar20 + 1;
        uVar18 = (uVar18 ^ (byte)*pSVar20) * 0x100000001b3;
        pSVar20 = pSVar21;
      } while (pSVar21 != pSVar34 + 0x10);
    }
    lVar22 = ManifoldCache::Create(this_00,param_1,pSVar34,uVar18,(uint)*(ushort *)(pSVar34 + 0x26))
    ;
    if (lVar22 == 0) break;
    iVar17 = *(ushort *)(pSVar34 + 0x26) - 1;
    if (iVar17 < 0) {
      iVar17 = 0;
    }
    memcpy((void *)(lVar22 + 0x14),pSVar34 + 0x14,(ulong)(iVar17 * 0x24 + 0x38));
    local_910 = _LC1;
    piVar10 = *(int **)(this_00 + 0x10);
    *(int *)(lVar22 + 0x14) = local_b20;
    local_b20 = (int)lVar22 - *piVar10;
    fStack_90c = local_910;
    fStack_908 = local_910;
    fStack_904 = local_910;
    _local_8f8 = (undefined1  [16])0x0;
    _local_8e8 = (undefined1  [16])0x0;
    local_918 = (float)(**(code **)(this + 0xa0))(param_3,pSVar34 + 4,pBVar35);
    local_914 = (float)(**(code **)(this + 0xa8))(param_3,pSVar34 + 4,pBVar35,pSVar34 + 0xc);
    BVar5 = param_3[0x79];
    if (((byte)BVar5 & 1) == 0) {
      BVar5 = pBVar35[0x79];
    }
    local_900 = (byte)BVar5 & 1;
    fVar92 = *(float *)(lVar22 + 0x18);
    fVar120 = *(float *)(lVar22 + 0x1c);
    fVar121 = *(float *)(lVar22 + 0x20);
    plVar31 = *(long **)(this + 0x98);
    auVar62._0_4_ = fVar92 * fVar113 + fVar120 * fVar77 + fVar121 * fVar116;
    auVar62._4_4_ = fVar92 * fVar38 + fVar120 * fVar117 + fVar121 * fVar119;
    auVar62._8_4_ = fVar92 * fVar84 + fVar120 * fVar112 + fVar121 * fVar80;
    auVar62._12_4_ = fVar92 * 0.0 + fVar120 * 0.0 + fVar121 * 0.0;
    auVar63._0_4_ =
         SQRT(auVar62._8_4_ * auVar62._8_4_ +
              auVar62._4_4_ * auVar62._4_4_ + auVar62._0_4_ * auVar62._0_4_ + 0.0);
    auVar63._4_4_ = auVar63._0_4_;
    auVar63._8_4_ = auVar63._0_4_;
    auVar63._12_4_ = auVar63._0_4_;
    auVar63 = divps(auVar62,auVar63);
    local_a88 = (float)uVar8;
    fStack_a84 = (float)((ulong)uVar8 >> 0x20);
    local_a78 = (float)uVar9;
    fStack_a74 = (float)((ulong)uVar9 >> 0x20);
    if (plVar31 != (long *)0x0) {
      uVar6 = *(ushort *)(lVar22 + 0x26);
      local_898 = local_a88;
      afStack_894[0] = fStack_a84;
      afStack_894[2] = 1.0;
      _local_874 = CONCAT44(*(undefined4 *)(pSVar34 + 0xc),*(undefined4 *)(pSVar34 + 4));
      local_868 = (uint)uVar6;
      local_878 = _LC15;
      local_458 = local_868;
      if (uVar6 != 0) {
        pfVar23 = (float *)(lVar22 + 0x28);
        pfVar29 = local_858;
        fVar92 = _LC15;
        do {
          fVar120 = *pfVar23;
          fVar121 = pfVar23[1];
          fVar40 = pfVar23[2];
          pfVar24 = pfVar23 + 9;
          *pfVar29 = fVar120 * fVar107 + fVar121 * fVar76 + fVar40 * fVar114;
          pfVar29[1] = fVar120 * fVar57 + fVar121 * fVar115 + fVar40 * fVar118;
          pfVar29[2] = fVar120 * fVar91 + fVar121 * fVar78 + fVar40 * fVar79;
          pfVar29[3] = fVar120 * 0.0 + fVar121 * 0.0 + fVar40 * 0.0;
          fVar120 = pfVar23[3];
          fVar121 = pfVar23[4];
          fVar40 = pfVar23[5];
          pfVar29[0x104] =
               fVar120 * fVar113 + fVar121 * fVar77 + fVar40 * fVar116 +
               (0.0 - local_a88) + local_a78;
          pfVar29[0x105] =
               fVar120 * fVar38 + fVar121 * fVar117 + fVar40 * fVar119 +
               (0.0 - fStack_a84) + fStack_a74;
          pfVar29[0x106] =
               fVar120 * fVar84 + fVar121 * fVar112 + fVar40 * fVar80 + (0.0 - fVar3) + fVar16;
          pfVar29[0x107] = fVar120 * 0.0 + fVar121 * 0.0 + fVar40 * 0.0 + 1.0;
          local_878 = (local_858[2] - local_448[2]) * auVar63._8_4_ +
                      (local_858[1] - local_448[1]) * auVar63._4_4_ +
                      (local_858[0] - local_448[0]) * auVar63._0_4_ + 0.0;
          if (local_878 <= fVar92) {
            local_878 = fVar92;
          }
          pfVar23 = pfVar24;
          pfVar29 = pfVar29 + 4;
          fVar92 = local_878;
        } while ((float *)(lVar22 + 0x4c + (ulong)(uVar6 - 1) * 0x24) != pfVar24);
      }
      afStack_894[1] = fVar3;
      local_888 = auVar63;
      if (*(code **)(*plVar31 + 0x20) != ContactListener::OnContactPersisted) {
        (**(code **)(*plVar31 + 0x20))(plVar31,param_3,pBVar35,&local_898,&local_918);
      }
    }
    fVar121 = fStack_904;
    fVar120 = fStack_90c;
    fVar92 = local_918;
    if ((local_900 == 0) &&
       (((param_3[0x78] == (Body)0x2 && (local_910 != 0.0)) ||
        ((pBVar35[0x78] == (Body)0x2 && (fStack_908 != 0.0)))))) {
      LOCK();
      pCVar2 = this + 0xbc;
      uVar30 = *(uint *)pCVar2;
      *(uint *)pCVar2 = *(uint *)pCVar2 + 1;
      UNLOCK();
      if (*(uint *)(this + 0xb8) <= uVar30) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
        break;
      }
      *param_5 = true;
      pCVar32 = (ContactConstraint *)((ulong)uVar30 * 0x360 + *(long *)(this + 0xb0));
      pCVar28 = pCVar32;
      for (lVar27 = 0x6c; lVar27 != 0; lVar27 = lVar27 + -1) {
        *(undefined8 *)pCVar28 = 0;
        pCVar28 = pCVar28 + (ulong)bVar37 * -0x10 + 8;
      }
      *(ulong *)(pCVar32 + 0x10) = uVar18;
      *(float *)(pCVar32 + 0x18) = auVar63._0_4_;
      pfVar23 = *(float **)(param_3 + 0x48);
      *(float *)(pCVar32 + 0x1c) = auVar63._4_4_;
      fVar40 = 0.0;
      *(Body **)pCVar32 = param_3;
      *(Body **)(pCVar32 + 8) = pBVar35;
      *(float *)(pCVar32 + 0x20) = auVar63._8_4_;
      *(float *)(pCVar32 + 0x24) = local_918;
      if (pfVar23 != (float *)0x0) {
        fVar40 = local_910 * pfVar23[0x16];
      }
      pfVar29 = *(float **)(pBVar35 + 0x48);
      *(ulong *)(pCVar32 + 0x28) = CONCAT44(fStack_90c,fVar40);
      fVar40 = 0.0;
      if (pfVar29 != (float *)0x0) {
        fVar40 = fStack_908 * pfVar29[0x16];
      }
      uVar6 = *(ushort *)(lVar22 + 0x26);
      pCVar28 = pCVar32 + 0x40;
      *(ulong *)(pCVar32 + 0x30) = CONCAT44(fStack_904,fVar40);
      lVar27 = (ulong)uVar6 * 200;
      pCVar1 = pCVar28 + lVar27;
      if (pCVar28 < pCVar1) {
        uVar18 = 0;
        pCVar25 = pCVar32 + 0xf0;
        do {
          uVar18 = uVar18 + 1;
          *(undefined1 (*) [16])(pCVar25 + -0x80) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar25 + -0x40) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])pCVar25 = (undefined1  [16])0x0;
          pCVar25 = pCVar25 + 200;
        } while (uVar18 < (ulong)(pCVar1 + (-0x41 - (long)pCVar32)) / 200 + 1);
      }
      *(uint *)(pCVar32 + 0x38) = (uint)uVar6;
      if (uVar6 != 0) {
        lVar26 = lVar22 + 0x28;
        pCVar25 = pCVar32 + 0x7c;
        do {
          *(undefined4 *)pCVar25 = *(undefined4 *)(lVar26 + 0x18);
          *(undefined4 *)(pCVar25 + 0x40) = *(undefined4 *)(lVar26 + 0x1c);
          uVar4 = *(undefined4 *)(lVar26 + 0x20);
          *(long *)(pCVar25 + 0x84) = lVar26;
          lVar26 = lVar26 + 0x24;
          *(undefined4 *)(pCVar25 + 0x80) = uVar4;
          pCVar25 = pCVar25 + 200;
        } while (lVar26 != lVar22 + 0x4c + (ulong)(uVar6 - 1) * 0x24);
      }
      BVar5 = param_3[0x78];
      lVar22 = *(long *)(this + 0x90);
      if (BVar5 == (Body)0x1) {
        MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_898);
        uVar33 = _LC20;
        fVar92 = _LC6;
        lVar26 = 0;
        do {
          fVar120 = *(float *)((long)afStack_894 + lVar26 + 4);
          fVar40 = *(float *)(local_888 + lVar26 + -4);
          *(float *)((long)local_8d8 + lVar26) = *(float *)((Mat44 *)&local_898 + lVar26) * fVar121;
          *(float *)((long)local_8d8 + lVar26 + 4) =
               *(float *)((long)afStack_894 + lVar26) * fVar121;
          *(float *)((long)local_8d8 + lVar26 + 8) = fVar120 * fVar121;
          *(float *)((long)local_8d8 + lVar26 + 0xc) = fVar40 * fVar121;
          lVar26 = lVar26 + 0x10;
        } while (lVar26 != 0x40);
        auVar63 = *(undefined1 (*) [16])(pCVar32 + 0x18);
        fVar120 = auVar63._0_4_;
        fVar121 = auVar63._4_4_;
        fVar40 = auVar63._8_4_;
        if ((float)((uint)fVar121 & _LC10) < (float)((uint)fVar120 & _LC10)) {
          auVar73._4_4_ = 0;
          auVar73._0_4_ = fVar40;
          auVar73._12_4_ = (uint)fVar120 ^ _LC20;
          auVar73._8_4_ = (uint)fVar120 ^ _LC20;
          auVar49._0_4_ = SQRT(fVar120 * fVar120 + fVar40 * fVar40);
          auVar49._4_4_ = auVar49._0_4_;
          auVar49._8_4_ = auVar49._0_4_;
          auVar49._12_4_ = auVar49._0_4_;
          auVar63 = divps(auVar73,auVar49);
          local_a28 = auVar63._0_12_;
        }
        else {
          auVar12._8_4_ = (uint)fVar121 ^ _LC20;
          auVar12._4_4_ = (uint)fVar121 ^ _LC20;
          auVar12._0_4_ = fVar40;
          auVar12._12_4_ = 0;
          auVar47._0_4_ = SQRT(fVar121 * fVar121 + fVar40 * fVar40);
          auVar47._4_4_ = auVar47._0_4_;
          auVar47._8_4_ = auVar47._0_4_;
          auVar47._12_4_ = auVar47._0_4_;
          auVar63 = divps(auVar12 << 0x20,auVar47);
          local_a28 = auVar63._0_12_;
        }
        fVar109 = local_a28._0_4_;
        fVar87 = local_a28._4_4_;
        fVar93 = local_a28._8_4_;
        fVar85 = fVar87 * fVar120 - fVar109 * fVar121;
        fVar89 = fVar93 * fVar121 - fVar87 * fVar40;
        fVar95 = fVar109 * fVar40 - fVar93 * fVar120;
        if (lVar27 != 0) {
          fVar97 = (float)(*(uint *)(lVar22 + 0x40) ^ _LC20);
          do {
            pfVar24 = *(float **)(pCVar28 + 0xc0);
            fVar108 = *(float *)(pCVar32 + 0x30);
            fVar110 = *pfVar24;
            fVar111 = pfVar24[1];
            fVar41 = pfVar24[2];
            fVar69 = pfVar24[3];
            fVar61 = pfVar24[4];
            fVar42 = pfVar24[5];
            fVar43 = fVar111 * fVar76 + fVar110 * fVar107 + fVar41 * fVar114 + local_a88;
            fVar59 = fVar111 * fVar115 + fVar110 * fVar57 + fVar41 * fVar118 + fStack_a84;
            fVar110 = fVar111 * fVar78 + fVar110 * fVar91 + fVar41 * fVar79 + fVar3;
            fVar64 = fVar61 * fVar77 + fVar69 * fVar113 + fVar42 * fVar116 + local_a78;
            fVar66 = fVar61 * fVar117 + fVar69 * fVar38 + fVar42 * fVar119 + fStack_a74;
            fVar86 = fVar61 * fVar112 + fVar69 * fVar84 + fVar42 * fVar80 + fVar16;
            fVar111 = (fVar43 + fVar64) * fVar92;
            fVar69 = (fVar59 + fVar66) * fVar92;
            fVar42 = (fVar110 + fVar86) * fVar92;
            fVar41 = fVar111 - *(float *)pBVar35;
            fVar61 = fVar69 - *(float *)(pBVar35 + 4);
            fVar60 = fVar42 - *(float *)(pBVar35 + 8);
            fVar111 = fVar111 - *(float *)param_3;
            fVar69 = fVar69 - *(float *)(param_3 + 4);
            fVar42 = fVar42 - *(float *)(param_3 + 8);
            fVar110 = (float)((uint)((fVar110 - fVar86) * fVar40 +
                                    (fVar59 - fVar66) * fVar121 + fVar120 * (fVar43 - fVar64) + 0.0)
                             ^ uVar33) / fVar58;
            if (fVar110 <= 0.0) {
              fVar110 = 0.0;
            }
            if (((0.0 < local_914) &&
                (fVar43 = (((fVar61 * pfVar29[4] - pfVar29[5] * fVar41) + pfVar29[2]) -
                          ((fVar69 * pfVar23[4] - pfVar23[5] * fVar111) + pfVar23[2])) * fVar40 +
                          (((fVar41 * pfVar29[6] - pfVar29[4] * fVar60) + pfVar29[1]) -
                          ((fVar111 * pfVar23[6] - pfVar23[4] * fVar42) + pfVar23[1])) * fVar121 +
                          fVar120 * (((fVar60 * pfVar29[5] - pfVar29[6] * fVar61) + *pfVar29) -
                                    ((fVar42 * pfVar23[5] - pfVar23[6] * fVar69) + *pfVar23)) + 0.0,
                fVar43 < fVar97)) && (fVar43 < (float)(uVar33 ^ (uint)fVar110))) {
              fVar110 = (fVar43 - (pfVar29[0x1b] - pfVar23[0x1b]) *
                                  (fVar68 * fVar40 + fVar55 * fVar121 + fVar120 * fVar39 + 0.0)) *
                        local_914;
            }
            fVar59 = fVar121 * fVar41 - fVar120 * fVar61;
            fVar64 = fVar40 * fVar61 - fVar121 * fVar60;
            fVar66 = fVar120 * fVar60 - fVar40 * fVar41;
            *(float *)pCVar28 = fVar40 * fVar69 - fVar121 * fVar42;
            *(float *)(pCVar28 + 4) = fVar120 * fVar42 - fVar40 * fVar111;
            *(float *)(pCVar28 + 8) = fVar121 * fVar111 - fVar120 * fVar69;
            *(float *)(pCVar28 + 0xc) = fVar64;
            *(ulong *)(pCVar28 + 0x10) = CONCAT44(fVar59,fVar66);
            fVar86 = fVar64 * local_8d8[0] + fVar66 * local_8d8[4] + fVar59 * local_8d8[8];
            fVar88 = fVar64 * local_8d8[1] + fVar66 * local_8d8[5] + fVar59 * local_8d8[9];
            fVar44 = fVar64 * local_8d8[2] + fVar66 * local_8d8[6] + fVar59 * local_8d8[10];
            *(ulong *)(pCVar28 + 0x24) = CONCAT44(fVar88,fVar86);
            *(float *)(pCVar28 + 0x2c) = fVar44;
            fVar43 = _LC1;
            fVar59 = fVar59 * fVar44 + fVar88 * fVar66 + fVar86 * fVar64 + 0.0 + fVar108 + 0.0;
            if (fVar59 == 0.0) {
              *(undefined4 *)(pCVar28 + 0x3c) = 0;
              fVar43 = 0.0;
            }
            else {
              *(undefined4 *)(pCVar28 + 0x38) = 0;
              *(float *)(pCVar28 + 0x34) = fVar110;
              fVar43 = fVar43 / fVar59;
            }
            *(float *)(pCVar28 + 0x30) = fVar43;
            if (local_918 <= 0.0) {
              *(undefined4 *)(pCVar28 + 0x70) = 0;
              *(undefined4 *)(pCVar28 + 0x7c) = 0;
              *(undefined4 *)(pCVar28 + 0xb0) = 0;
              *(undefined4 *)(pCVar28 + 0xbc) = 0;
            }
            else {
              fVar43 = (fVar42 * (float)local_8e8._4_4_ - fStack_8e0 * fVar69) +
                       (float)local_8f8._0_4_;
              fVar64 = (fVar111 * fStack_8e0 - (float)local_8e8._0_4_ * fVar42) +
                       (float)local_8f8._4_4_;
              fVar86 = (fVar69 * (float)local_8e8._0_4_ - (float)local_8e8._4_4_ * fVar111) +
                       fStack_8f0;
              fVar59 = fVar87 * fVar41 - fVar109 * fVar61;
              fVar66 = fVar93 * fVar61 - fVar87 * fVar60;
              fVar88 = fVar109 * fVar60 - fVar93 * fVar41;
              *(float *)(pCVar28 + 0x40) = fVar93 * fVar69 - fVar87 * fVar42;
              *(float *)(pCVar28 + 0x44) = fVar109 * fVar42 - fVar93 * fVar111;
              *(float *)(pCVar28 + 0x48) = fVar87 * fVar111 - fVar109 * fVar69;
              *(float *)(pCVar28 + 0x4c) = fVar66;
              *(ulong *)(pCVar28 + 0x50) = CONCAT44(fVar59,fVar88);
              fVar44 = fVar66 * local_8d8[0] + fVar88 * local_8d8[4] + fVar59 * local_8d8[8];
              fVar56 = fVar66 * local_8d8[1] + fVar88 * local_8d8[5] + fVar59 * local_8d8[9];
              fVar90 = fVar66 * local_8d8[2] + fVar88 * local_8d8[6] + fVar59 * local_8d8[10];
              *(ulong *)(pCVar28 + 100) = CONCAT44(fVar56,fVar44);
              *(float *)(pCVar28 + 0x6c) = fVar90;
              fVar110 = _LC1;
              fVar59 = fVar59 * fVar90 + fVar56 * fVar88 + fVar44 * fVar66 + 0.0 + fVar108 + 0.0;
              if (fVar59 == 0.0) {
                *(undefined4 *)(pCVar28 + 0x7c) = 0;
                fVar110 = 0.0;
              }
              else {
                *(undefined4 *)(pCVar28 + 0x78) = 0;
                fVar110 = fVar110 / fVar59;
                *(float *)(pCVar28 + 0x74) =
                     fVar93 * fVar86 + fVar109 * fVar43 + 0.0 + fVar87 * fVar64;
              }
              *(float *)(pCVar28 + 0x70) = fVar110;
              fVar59 = fVar41 * fVar95 - fVar61 * fVar89;
              fVar61 = fVar61 * fVar85 - fVar60 * fVar95;
              fVar60 = fVar60 * fVar89 - fVar41 * fVar85;
              *(float *)(pCVar28 + 0x80) = fVar85 * fVar69 - fVar42 * fVar95;
              *(float *)(pCVar28 + 0x84) = fVar89 * fVar42 - fVar111 * fVar85;
              *(float *)(pCVar28 + 0x88) = fVar95 * fVar111 - fVar69 * fVar89;
              *(float *)(pCVar28 + 0x8c) = fVar61;
              *(ulong *)(pCVar28 + 0x90) = CONCAT44(fVar59,fVar60);
              fVar111 = fVar61 * local_8d8[0] + fVar60 * local_8d8[4] + fVar59 * local_8d8[8];
              fVar41 = fVar61 * local_8d8[1] + fVar60 * local_8d8[5] + fVar59 * local_8d8[9];
              fVar69 = fVar61 * local_8d8[2] + fVar60 * local_8d8[6] + fVar59 * local_8d8[10];
              *(ulong *)(pCVar28 + 0xa4) = CONCAT44(fVar41,fVar111);
              *(float *)(pCVar28 + 0xac) = fVar69;
              fVar110 = _LC1;
              fVar108 = fVar59 * fVar69 + fVar41 * fVar60 + fVar111 * fVar61 + 0.0 + fVar108 + 0.0;
              if (fVar108 == 0.0) {
                *(undefined4 *)(pCVar28 + 0xbc) = 0;
                fVar110 = 0.0;
              }
              else {
                *(undefined4 *)(pCVar28 + 0xb8) = 0;
                fVar110 = fVar110 / fVar108;
                *(float *)(pCVar28 + 0xb4) =
                     fVar85 * fVar86 + fVar64 * fVar95 + fVar43 * fVar89 + 0.0;
              }
              *(float *)(pCVar28 + 0xb0) = fVar110;
            }
            pCVar28 = pCVar28 + 200;
          } while (pCVar1 != pCVar28);
          goto LAB_00106a98;
        }
LAB_00105259:
        uVar33 = (uint)*(undefined8 *)(*(long *)(this + 0xc0) + 0x40);
LAB_00105218:
        fVar92 = -NAN;
        if (pfVar23 != (float *)0x0) goto LAB_00105222;
      }
      else {
        if (BVar5 != (Body)0x2) {
          if (BVar5 == (Body)0x0) {
            MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_898);
            uVar33 = _LC20;
            fVar120 = _LC6;
            lVar26 = 0;
            do {
              fVar40 = *(float *)((long)afStack_894 + lVar26 + 4);
              fVar109 = *(float *)(local_888 + lVar26 + -4);
              *(float *)((long)local_8d8 + lVar26) =
                   *(float *)((Mat44 *)&local_898 + lVar26) * fVar121;
              *(float *)((long)local_8d8 + lVar26 + 4) =
                   *(float *)((long)afStack_894 + lVar26) * fVar121;
              *(float *)((long)local_8d8 + lVar26 + 8) = fVar40 * fVar121;
              *(float *)((long)local_8d8 + lVar26 + 0xc) = fVar109 * fVar121;
              lVar26 = lVar26 + 0x10;
            } while (lVar26 != 0x40);
            fVar121 = *(float *)(pCVar32 + 0x18);
            fVar40 = *(float *)(pCVar32 + 0x1c);
            fVar109 = *(float *)(pCVar32 + 0x20);
            auVar70 = *(undefined1 (*) [12])(pCVar32 + 0x18);
            if ((float)((uint)fVar40 & _LC10) < (float)((uint)fVar121 & _LC10)) {
              auVar72._4_4_ = 0;
              auVar72._0_4_ = fVar109;
              auVar72._12_4_ = (uint)fVar121 ^ _LC20;
              auVar72._8_4_ = (uint)fVar121 ^ _LC20;
              auVar48._0_4_ = SQRT(fVar121 * fVar121 + fVar109 * fVar109);
              auVar48._4_4_ = auVar48._0_4_;
              auVar48._8_4_ = auVar48._0_4_;
              auVar48._12_4_ = auVar48._0_4_;
              auVar63 = divps(auVar72,auVar48);
              local_a28 = auVar63._0_12_;
            }
            else {
              auVar11._8_4_ = (uint)fVar40 ^ _LC20;
              auVar11._4_4_ = (uint)fVar40 ^ _LC20;
              auVar11._0_4_ = fVar109;
              auVar11._12_4_ = 0;
              auVar45._0_4_ = SQRT(fVar40 * fVar40 + fVar109 * fVar109);
              auVar45._4_4_ = auVar45._0_4_;
              auVar45._8_4_ = auVar45._0_4_;
              auVar45._12_4_ = auVar45._0_4_;
              auVar63 = divps(auVar11 << 0x20,auVar45);
              local_a28 = auVar63._0_12_;
            }
            fVar93 = local_a28._0_4_;
            fVar95 = local_a28._4_4_;
            fVar97 = local_a28._8_4_;
            fVar108 = auVar70._0_4_;
            fVar110 = auVar70._4_4_;
            fVar111 = auVar70._8_4_;
            fVar85 = fVar108 * fVar95 - fVar93 * fVar110;
            fVar87 = fVar110 * fVar97 - fVar95 * fVar111;
            fVar89 = fVar111 * fVar93 - fVar97 * fVar108;
            if (lVar27 != 0) {
              fVar41 = (float)(*(uint *)(lVar22 + 0x40) ^ _LC20);
              do {
                pfVar24 = *(float **)(pCVar28 + 0xc0);
                fVar69 = *(float *)(pCVar32 + 0x30);
                fVar61 = *(float *)param_3;
                fVar42 = *(float *)(param_3 + 4);
                fVar43 = *(float *)(param_3 + 8);
                fVar59 = *pfVar24;
                fVar60 = pfVar24[1];
                fVar64 = pfVar24[2];
                fVar66 = pfVar24[3];
                fVar86 = pfVar24[4];
                fVar88 = pfVar24[5];
                fVar44 = fVar60 * fVar76 + fVar59 * fVar107 + fVar64 * fVar114 + local_a88;
                fVar56 = fVar60 * fVar115 + fVar59 * fVar57 + fVar64 * fVar118 + fStack_a84;
                fVar59 = fVar60 * fVar78 + fVar59 * fVar91 + fVar64 * fVar79 + fVar3;
                fVar60 = fVar86 * fVar77 + fVar66 * fVar113 + fVar88 * fVar116 + local_a78;
                fVar64 = fVar86 * fVar117 + fVar66 * fVar38 + fVar88 * fVar119 + fStack_a74;
                fVar66 = fVar86 * fVar112 + fVar66 * fVar84 + fVar88 * fVar80 + fVar16;
                fVar99 = (fVar44 + fVar60) * fVar120;
                fVar101 = (fVar56 + fVar64) * fVar120;
                fVar104 = (fVar59 + fVar66) * fVar120;
                fVar86 = fVar99 - *(float *)pBVar35;
                fVar88 = fVar101 - *(float *)(pBVar35 + 4);
                fVar90 = fVar104 - *(float *)(pBVar35 + 8);
                fVar59 = (float)((uint)((fVar59 - fVar66) * fVar109 +
                                       (fVar56 - fVar64) * fVar40 +
                                       fVar121 * (fVar44 - fVar60) + 0.0) ^ uVar33) / fVar58;
                if (fVar59 <= 0.0) {
                  fVar59 = 0.0;
                }
                if (((0.0 < local_914) &&
                    (fVar60 = fVar109 * ((fVar88 * pfVar29[4] - pfVar29[5] * fVar86) + pfVar29[2]) +
                              fVar121 * ((fVar90 * pfVar29[5] - pfVar29[6] * fVar88) + *pfVar29) +
                              0.0 + ((fVar86 * pfVar29[6] - pfVar29[4] * fVar90) + pfVar29[1]) *
                                    fVar40, fVar60 < fVar41)) &&
                   (fVar60 < (float)(uVar33 ^ (uint)fVar59))) {
                  fVar59 = local_914 *
                           (fVar60 - (fVar68 * fVar109 + fVar55 * fVar40 + fVar121 * fVar39 + 0.0) *
                                     pfVar29[0x1b]);
                }
                fVar64 = fVar110 * fVar86 - fVar108 * fVar88;
                fVar66 = fVar111 * fVar88 - fVar110 * fVar90;
                fVar44 = fVar108 * fVar90 - fVar111 * fVar86;
                *(float *)(pCVar28 + 0x14) = fVar64;
                *(ulong *)(pCVar28 + 0xc) = CONCAT44(fVar44,fVar66);
                fVar56 = fVar66 * local_8d8[0] + fVar44 * local_8d8[4] + fVar64 * local_8d8[8];
                fVar65 = fVar66 * local_8d8[1] + fVar44 * local_8d8[5] + fVar64 * local_8d8[9];
                fVar67 = fVar66 * local_8d8[2] + fVar44 * local_8d8[6] + fVar64 * local_8d8[10];
                *(ulong *)(pCVar28 + 0x24) = CONCAT44(fVar65,fVar56);
                *(float *)(pCVar28 + 0x2c) = fVar67;
                fVar60 = _LC1;
                fVar64 = fVar64 * fVar67 + fVar65 * fVar44 + fVar56 * fVar66 + 0.0 + fVar69 + 0.0;
                if (fVar64 == 0.0) {
                  *(undefined4 *)(pCVar28 + 0x3c) = 0;
                  fVar60 = 0.0;
                }
                else {
                  *(undefined4 *)(pCVar28 + 0x38) = 0;
                  *(float *)(pCVar28 + 0x34) = fVar59;
                  fVar60 = fVar60 / fVar64;
                }
                *(float *)(pCVar28 + 0x30) = fVar60;
                if (fVar92 <= 0.0) {
                  *(undefined4 *)(pCVar28 + 0x70) = 0;
                  *(undefined4 *)(pCVar28 + 0x7c) = 0;
                  *(undefined4 *)(pCVar28 + 0xb0) = 0;
                  *(undefined4 *)(pCVar28 + 0xbc) = 0;
                }
                else {
                  fVar99 = fVar99 - fVar61;
                  fVar101 = fVar101 - fVar42;
                  fVar104 = fVar104 - fVar43;
                  fVar42 = (fVar104 * (float)local_8e8._4_4_ - fStack_8e0 * fVar101) +
                           (float)local_8f8._0_4_;
                  fVar59 = (fVar99 * fStack_8e0 - (float)local_8e8._0_4_ * fVar104) +
                           (float)local_8f8._4_4_;
                  fVar64 = (fVar101 * (float)local_8e8._0_4_ - (float)local_8e8._4_4_ * fVar99) +
                           fStack_8f0;
                  fVar43 = fVar95 * fVar86 - fVar93 * fVar88;
                  fVar60 = fVar97 * fVar88 - fVar95 * fVar90;
                  fVar66 = fVar93 * fVar90 - fVar97 * fVar86;
                  *(float *)(pCVar28 + 0x54) = fVar43;
                  *(ulong *)(pCVar28 + 0x4c) = CONCAT44(fVar66,fVar60);
                  fVar44 = fVar60 * local_8d8[0] + fVar66 * local_8d8[4] + fVar43 * local_8d8[8];
                  fVar56 = fVar60 * local_8d8[1] + fVar66 * local_8d8[5] + fVar43 * local_8d8[9];
                  fVar99 = fVar60 * local_8d8[2] + fVar66 * local_8d8[6] + fVar43 * local_8d8[10];
                  *(ulong *)(pCVar28 + 100) = CONCAT44(fVar56,fVar44);
                  *(float *)(pCVar28 + 0x6c) = fVar99;
                  fVar61 = _LC1;
                  fVar43 = fVar43 * fVar99 + fVar56 * fVar66 + fVar44 * fVar60 + 0.0 + fVar69 + 0.0;
                  if (fVar43 == 0.0) {
                    *(undefined4 *)(pCVar28 + 0x7c) = 0;
                    fVar61 = 0.0;
                  }
                  else {
                    *(undefined4 *)(pCVar28 + 0x78) = 0;
                    fVar61 = fVar61 / fVar43;
                    *(float *)(pCVar28 + 0x74) =
                         fVar97 * fVar64 + fVar93 * fVar42 + 0.0 + fVar95 * fVar59;
                  }
                  *(float *)(pCVar28 + 0x70) = fVar61;
                  fVar43 = fVar89 * fVar86 - fVar88 * fVar87;
                  fVar60 = fVar85 * fVar88 - fVar90 * fVar89;
                  fVar66 = fVar87 * fVar90 - fVar86 * fVar85;
                  *(float *)(pCVar28 + 0x94) = fVar43;
                  *(ulong *)(pCVar28 + 0x8c) = CONCAT44(fVar66,fVar60);
                  fVar86 = fVar60 * local_8d8[0] + fVar66 * local_8d8[4] + fVar43 * local_8d8[8];
                  fVar88 = fVar60 * local_8d8[1] + fVar66 * local_8d8[5] + fVar43 * local_8d8[9];
                  fVar44 = fVar60 * local_8d8[2] + fVar66 * local_8d8[6] + fVar43 * local_8d8[10];
                  *(float *)(pCVar28 + 0xa4) = fVar86;
                  *(float *)(pCVar28 + 0xa8) = fVar88;
                  *(float *)(pCVar28 + 0xac) = fVar44;
                  fVar61 = _LC1;
                  fVar69 = fVar43 * fVar44 + fVar88 * fVar66 + fVar86 * fVar60 + 0.0 + fVar69 + 0.0;
                  if (fVar69 == 0.0) {
                    *(undefined4 *)(pCVar28 + 0xbc) = 0;
                    fVar61 = 0.0;
                  }
                  else {
                    *(undefined4 *)(pCVar28 + 0xb8) = 0;
                    fVar61 = fVar61 / fVar69;
                    *(float *)(pCVar28 + 0xb4) =
                         fVar85 * fVar64 + fVar59 * fVar89 + fVar42 * fVar87 + 0.0;
                  }
                  *(float *)(pCVar28 + 0xb0) = fVar61;
                }
                pCVar28 = pCVar28 + 200;
              } while (pCVar1 != pCVar28);
            }
            goto LAB_00105259;
          }
LAB_00105202:
          uVar33 = (uint)*(undefined8 *)(*(long *)(this + 0xc0) + 0x40);
          goto LAB_00105218;
        }
        BVar5 = pBVar35[0x78];
        if (BVar5 == (Body)0x1) {
          MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_898);
          uVar33 = _LC20;
          fVar92 = _LC6;
          lVar26 = 0;
          do {
            fVar121 = *(float *)((long)afStack_894 + lVar26 + 4);
            fVar40 = *(float *)(local_888 + lVar26 + -4);
            *(float *)((long)local_8d8 + lVar26) =
                 *(float *)((Mat44 *)&local_898 + lVar26) * fVar120;
            *(float *)((long)local_8d8 + lVar26 + 4) =
                 *(float *)((long)afStack_894 + lVar26) * fVar120;
            *(float *)((long)local_8d8 + lVar26 + 8) = fVar121 * fVar120;
            *(float *)((long)local_8d8 + lVar26 + 0xc) = fVar40 * fVar120;
            lVar26 = lVar26 + 0x10;
          } while (lVar26 != 0x40);
          auVar63 = *(undefined1 (*) [16])(pCVar32 + 0x18);
          fVar120 = auVar63._0_4_;
          fVar121 = auVar63._4_4_;
          fVar40 = auVar63._8_4_;
          if ((float)((uint)fVar120 & _LC10) <= (float)((uint)fVar121 & _LC10)) {
            auVar15._8_4_ = (uint)fVar121 ^ _LC20;
            auVar15._4_4_ = (uint)fVar121 ^ _LC20;
            auVar15._0_4_ = fVar40;
            auVar15._12_4_ = 0;
            auVar54._0_4_ = SQRT(fVar121 * fVar121 + fVar40 * fVar40);
            auVar54._4_4_ = auVar54._0_4_;
            auVar54._8_4_ = auVar54._0_4_;
            auVar54._12_4_ = auVar54._0_4_;
            auVar63 = divps(auVar15 << 0x20,auVar54);
            auVar70 = auVar63._0_12_;
          }
          else {
            auVar74._4_4_ = 0;
            auVar74._0_4_ = fVar40;
            auVar74._12_4_ = (uint)fVar120 ^ _LC20;
            auVar74._8_4_ = (uint)fVar120 ^ _LC20;
            auVar50._0_4_ = SQRT(fVar120 * fVar120 + fVar40 * fVar40);
            auVar50._4_4_ = auVar50._0_4_;
            auVar50._8_4_ = auVar50._0_4_;
            auVar50._12_4_ = auVar50._0_4_;
            auVar63 = divps(auVar74,auVar50);
            auVar70 = auVar63._0_12_;
          }
          fVar89 = auVar70._0_4_;
          fVar93 = auVar70._4_4_;
          fVar95 = auVar70._8_4_;
          fVar109 = fVar93 * fVar120 - fVar121 * fVar89;
          fVar85 = fVar95 * fVar121 - fVar40 * fVar93;
          fVar87 = fVar89 * fVar40 - fVar120 * fVar95;
          if (lVar27 != 0) {
            fVar97 = (float)(*(uint *)(lVar22 + 0x40) ^ _LC20);
            do {
              pfVar24 = *(float **)(pCVar28 + 0xc0);
              fVar108 = *(float *)(pCVar32 + 0x28);
              fVar110 = *pfVar24;
              fVar111 = pfVar24[1];
              fVar41 = pfVar24[2];
              fVar69 = pfVar24[3];
              fVar61 = pfVar24[4];
              fVar42 = pfVar24[5];
              fVar43 = fVar111 * fVar76 + fVar110 * fVar107 + fVar41 * fVar114 + local_a88;
              fVar59 = fVar111 * fVar115 + fVar110 * fVar57 + fVar41 * fVar118 + fStack_a84;
              fVar60 = fVar111 * fVar78 + fVar110 * fVar91 + fVar41 * fVar79 + fVar3;
              fVar66 = local_a78 + fVar61 * fVar77 + fVar69 * fVar113 + fVar42 * fVar116;
              fVar86 = fStack_a74 + fVar61 * fVar117 + fVar69 * fVar38 + fVar42 * fVar119;
              fVar69 = fVar16 + fVar61 * fVar112 + fVar69 * fVar84 + fVar42 * fVar80;
              fVar110 = (fVar43 + fVar66) * fVar92;
              fVar111 = (fVar59 + fVar86) * fVar92;
              fVar41 = (fVar60 + fVar69) * fVar92;
              fVar61 = fVar110 - *(float *)pBVar35;
              fVar42 = fVar111 - *(float *)(pBVar35 + 4);
              fVar64 = fVar41 - *(float *)(pBVar35 + 8);
              fVar110 = fVar110 - *(float *)param_3;
              fVar111 = fVar111 - *(float *)(param_3 + 4);
              fVar41 = fVar41 - *(float *)(param_3 + 8);
              fVar69 = (float)((uint)((fVar60 - fVar69) * fVar40 +
                                     (fVar59 - fVar86) * fVar121 + fVar120 * (fVar43 - fVar66) + 0.0
                                     ) ^ uVar33) / fVar58;
              if (fVar69 <= 0.0) {
                fVar69 = 0.0;
              }
              if (((0.0 < local_914) &&
                  (fVar43 = (((fVar42 * pfVar29[4] - pfVar29[5] * fVar61) + pfVar29[2]) -
                            ((fVar111 * pfVar23[4] - pfVar23[5] * fVar110) + pfVar23[2])) * fVar40 +
                            (((fVar61 * pfVar29[6] - pfVar29[4] * fVar64) + pfVar29[1]) -
                            ((fVar110 * pfVar23[6] - pfVar23[4] * fVar41) + pfVar23[1])) * fVar121 +
                            fVar120 * (((fVar64 * pfVar29[5] - pfVar29[6] * fVar42) + *pfVar29) -
                                      ((fVar41 * pfVar23[5] - pfVar23[6] * fVar111) + *pfVar23)) +
                            0.0, fVar43 < fVar97)) && (fVar43 < (float)(uVar33 ^ (uint)fVar69))) {
                fVar69 = (fVar43 - (pfVar29[0x1b] - pfVar23[0x1b]) *
                                   (fVar68 * fVar40 + fVar55 * fVar121 + fVar120 * fVar39 + 0.0)) *
                         local_914;
              }
              fVar59 = fVar121 * fVar110 - fVar120 * fVar111;
              fVar60 = fVar40 * fVar111 - fVar121 * fVar41;
              fVar66 = fVar120 * fVar41 - fVar40 * fVar110;
              fVar86 = local_8d8[0] * fVar60 + fVar66 * local_8d8[4] + fVar59 * local_8d8[8];
              fVar88 = local_8d8[1] * fVar60 + fVar66 * local_8d8[5] + fVar59 * local_8d8[9];
              fVar44 = local_8d8[2] * fVar60 + fVar66 * local_8d8[6] + fVar59 * local_8d8[10];
              *(float *)pCVar28 = fVar60;
              *(float *)(pCVar28 + 4) = fVar66;
              *(float *)(pCVar28 + 8) = fVar59;
              *(float *)(pCVar28 + 0xc) = fVar40 * fVar42 - fVar121 * fVar64;
              *(float *)(pCVar28 + 0x10) = fVar120 * fVar64 - fVar40 * fVar61;
              *(float *)(pCVar28 + 0x14) = fVar121 * fVar61 - fVar120 * fVar42;
              *(float *)(pCVar28 + 0x18) = fVar86;
              *(float *)(pCVar28 + 0x1c) = fVar88;
              *(float *)(pCVar28 + 0x20) = fVar44;
              fVar43 = _LC1;
              fVar59 = fVar59 * fVar44 + fVar66 * fVar88 + fVar60 * fVar86 + 0.0 + fVar108;
              if (fVar59 == 0.0) {
                *(undefined4 *)(pCVar28 + 0x3c) = 0;
                fVar43 = 0.0;
              }
              else {
                *(undefined4 *)(pCVar28 + 0x38) = 0;
                *(float *)(pCVar28 + 0x34) = fVar69;
                fVar43 = fVar43 / fVar59;
              }
              *(float *)(pCVar28 + 0x30) = fVar43;
              if (local_918 <= 0.0) {
                *(undefined4 *)(pCVar28 + 0x70) = 0;
                *(undefined4 *)(pCVar28 + 0x7c) = 0;
                *(undefined4 *)(pCVar28 + 0xb0) = 0;
                *(undefined4 *)(pCVar28 + 0xbc) = 0;
              }
              else {
                fVar43 = (fVar41 * (float)local_8e8._4_4_ - fStack_8e0 * fVar111) +
                         (float)local_8f8._0_4_;
                fVar60 = (fVar110 * fStack_8e0 - (float)local_8e8._0_4_ * fVar41) +
                         (float)local_8f8._4_4_;
                fVar86 = (fVar111 * (float)local_8e8._0_4_ - (float)local_8e8._4_4_ * fVar110) +
                         fStack_8f0;
                fVar59 = fVar93 * fVar110 - fVar89 * fVar111;
                fVar66 = fVar95 * fVar111 - fVar93 * fVar41;
                fVar88 = fVar89 * fVar41 - fVar95 * fVar110;
                fVar44 = local_8d8[0] * fVar66 + fVar88 * local_8d8[4] + fVar59 * local_8d8[8];
                fVar56 = local_8d8[1] * fVar66 + fVar88 * local_8d8[5] + fVar59 * local_8d8[9];
                fVar90 = local_8d8[2] * fVar66 + fVar88 * local_8d8[6] + fVar59 * local_8d8[10];
                *(float *)(pCVar28 + 0x40) = fVar66;
                *(float *)(pCVar28 + 0x44) = fVar88;
                *(float *)(pCVar28 + 0x48) = fVar59;
                *(float *)(pCVar28 + 0x4c) = fVar95 * fVar42 - fVar93 * fVar64;
                *(float *)(pCVar28 + 0x50) = fVar89 * fVar64 - fVar95 * fVar61;
                *(float *)(pCVar28 + 0x54) = fVar93 * fVar61 - fVar89 * fVar42;
                *(float *)(pCVar28 + 0x58) = fVar44;
                *(float *)(pCVar28 + 0x5c) = fVar56;
                *(float *)(pCVar28 + 0x60) = fVar90;
                fVar69 = _LC1;
                fVar59 = fVar59 * fVar90 + fVar56 * fVar88 + fVar66 * fVar44 + 0.0 + fVar108;
                if (fVar59 == 0.0) {
                  *(undefined4 *)(pCVar28 + 0x7c) = 0;
                  fVar69 = 0.0;
                }
                else {
                  *(undefined4 *)(pCVar28 + 0x78) = 0;
                  fVar69 = fVar69 / fVar59;
                  *(float *)(pCVar28 + 0x74) =
                       fVar95 * fVar86 + fVar89 * fVar43 + 0.0 + fVar93 * fVar60;
                }
                *(float *)(pCVar28 + 0x70) = fVar69;
                fVar69 = fVar110 * fVar87 - fVar111 * fVar85;
                fVar111 = fVar111 * fVar109 - fVar41 * fVar87;
                fVar41 = fVar41 * fVar85 - fVar110 * fVar109;
                fVar59 = local_8d8[0] * fVar111 + fVar41 * local_8d8[4] + fVar69 * local_8d8[8];
                fVar66 = local_8d8[1] * fVar111 + fVar41 * local_8d8[5] + fVar69 * local_8d8[9];
                fVar88 = local_8d8[2] * fVar111 + fVar41 * local_8d8[6] + fVar69 * local_8d8[10];
                *(float *)(pCVar28 + 0x80) = fVar111;
                *(float *)(pCVar28 + 0x84) = fVar41;
                *(float *)(pCVar28 + 0x88) = fVar69;
                *(float *)(pCVar28 + 0x8c) = fVar42 * fVar109 - fVar64 * fVar87;
                *(float *)(pCVar28 + 0x90) = fVar64 * fVar85 - fVar61 * fVar109;
                *(float *)(pCVar28 + 0x94) = fVar61 * fVar87 - fVar42 * fVar85;
                *(float *)(pCVar28 + 0x98) = fVar59;
                *(float *)(pCVar28 + 0x9c) = fVar66;
                *(float *)(pCVar28 + 0xa0) = fVar88;
                fVar110 = _LC1;
                fVar108 = fVar69 * fVar88 + fVar66 * fVar41 + fVar111 * fVar59 + 0.0 + fVar108;
                if (fVar108 == 0.0) {
                  *(undefined4 *)(pCVar28 + 0xbc) = 0;
                  fVar110 = 0.0;
                }
                else {
                  *(undefined4 *)(pCVar28 + 0xb8) = 0;
                  fVar110 = fVar110 / fVar108;
                  *(float *)(pCVar28 + 0xb4) =
                       fVar109 * fVar86 + fVar60 * fVar87 + fVar43 * fVar85 + 0.0;
                }
                *(float *)(pCVar28 + 0xb0) = fVar110;
              }
              pCVar28 = pCVar28 + 200;
            } while (pCVar1 != pCVar28);
            goto LAB_00106a98;
          }
          uVar33 = (uint)*(undefined8 *)(*(long *)(this + 0xc0) + 0x40);
        }
        else if (BVar5 == (Body)0x2) {
          MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_898);
          lVar26 = 0;
          do {
            fVar92 = *(float *)((long)afStack_894 + lVar26 + 4);
            fVar40 = *(float *)(local_888 + lVar26 + -4);
            *(float *)((long)local_8d8 + lVar26) =
                 *(float *)((Mat44 *)&local_898 + lVar26) * fVar120;
            fVar109 = local_8d8[0];
            *(float *)((long)local_8d8 + lVar26 + 4) =
                 *(float *)((long)afStack_894 + lVar26) * fVar120;
            fVar85 = local_8d8[1];
            *(float *)((long)local_8d8 + lVar26 + 8) = fVar92 * fVar120;
            fVar92 = local_8d8[2];
            *(float *)((long)local_8d8 + lVar26 + 0xc) = fVar40 * fVar120;
            fVar97 = local_8d8[10];
            fVar95 = local_8d8[9];
            fVar93 = local_8d8[8];
            fVar89 = local_8d8[6];
            fVar87 = local_8d8[5];
            fVar40 = local_8d8[4];
            lVar26 = lVar26 + 0x10;
          } while (lVar26 != 0x40);
          MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_898);
          uVar33 = _LC20;
          fVar120 = _LC6;
          lVar26 = 0;
          do {
            fVar108 = *(float *)((long)afStack_894 + lVar26 + 4);
            fVar110 = *(float *)(local_888 + lVar26 + -4);
            *(float *)((long)local_8d8 + lVar26) =
                 *(float *)((Mat44 *)&local_898 + lVar26) * fVar121;
            *(float *)((long)local_8d8 + lVar26 + 4) =
                 *(float *)((long)afStack_894 + lVar26) * fVar121;
            *(float *)((long)local_8d8 + lVar26 + 8) = fVar108 * fVar121;
            *(float *)((long)local_8d8 + lVar26 + 0xc) = fVar110 * fVar121;
            lVar26 = lVar26 + 0x10;
          } while (lVar26 != 0x40);
          auVar63 = *(undefined1 (*) [16])(pCVar32 + 0x18);
          fVar121 = auVar63._0_4_;
          fVar108 = auVar63._4_4_;
          fVar110 = auVar63._8_4_;
          if ((float)((uint)fVar121 & _LC10) <= (float)((uint)fVar108 & _LC10)) {
            auVar13._8_4_ = (uint)fVar108 ^ _LC20;
            auVar13._4_4_ = (uint)fVar108 ^ _LC20;
            auVar13._0_4_ = fVar110;
            auVar13._12_4_ = 0;
            auVar52._0_4_ = SQRT(fVar108 * fVar108 + fVar110 * fVar110);
            auVar52._4_4_ = auVar52._0_4_;
            auVar52._8_4_ = auVar52._0_4_;
            auVar52._12_4_ = auVar52._0_4_;
            auVar63 = divps(auVar13 << 0x20,auVar52);
            auVar70 = auVar63._0_12_;
          }
          else {
            auVar75._4_4_ = 0;
            auVar75._0_4_ = fVar110;
            auVar75._12_4_ = (uint)fVar121 ^ _LC20;
            auVar75._8_4_ = (uint)fVar121 ^ _LC20;
            auVar51._0_4_ = SQRT(fVar121 * fVar121 + fVar110 * fVar110);
            auVar51._4_4_ = auVar51._0_4_;
            auVar51._8_4_ = auVar51._0_4_;
            auVar51._12_4_ = auVar51._0_4_;
            auVar63 = divps(auVar75,auVar51);
            auVar70 = auVar63._0_12_;
          }
          fVar61 = auVar70._0_4_;
          fVar42 = auVar70._4_4_;
          fVar43 = auVar70._8_4_;
          fVar111 = fVar42 * fVar121 - fVar108 * fVar61;
          fVar41 = fVar43 * fVar108 - fVar110 * fVar42;
          fVar69 = fVar61 * fVar110 - fVar121 * fVar43;
          if (lVar27 != 0) {
            fVar59 = (float)(*(uint *)(lVar22 + 0x40) ^ _LC20);
            do {
              pfVar24 = *(float **)(pCVar28 + 0xc0);
              fVar60 = *(float *)(pCVar32 + 0x30);
              fVar64 = *(float *)(pCVar32 + 0x28);
              fVar66 = *pfVar24;
              fVar86 = pfVar24[1];
              fVar88 = pfVar24[2];
              fVar44 = pfVar24[3];
              fVar56 = pfVar24[4];
              fVar90 = pfVar24[5];
              fVar99 = fVar86 * fVar76 + fVar66 * fVar107 + fVar88 * fVar114 + local_a88;
              fVar101 = fVar86 * fVar115 + fVar66 * fVar57 + fVar88 * fVar118 + fStack_a84;
              fVar66 = fVar86 * fVar78 + fVar66 * fVar91 + fVar88 * fVar79 + fVar3;
              fVar65 = local_a78 + fVar56 * fVar77 + fVar44 * fVar113 + fVar90 * fVar116;
              fVar67 = fStack_a74 + fVar56 * fVar117 + fVar44 * fVar38 + fVar90 * fVar119;
              fVar82 = fVar16 + fVar56 * fVar112 + fVar44 * fVar84 + fVar90 * fVar80;
              fVar86 = (fVar99 + fVar65) * fVar120;
              fVar44 = (fVar101 + fVar67) * fVar120;
              fVar90 = (fVar66 + fVar82) * fVar120;
              fVar88 = fVar86 - *(float *)pBVar35;
              fVar56 = fVar44 - *(float *)(pBVar35 + 4);
              fVar104 = fVar90 - *(float *)(pBVar35 + 8);
              fVar86 = fVar86 - *(float *)param_3;
              fVar44 = fVar44 - *(float *)(param_3 + 4);
              fVar90 = fVar90 - *(float *)(param_3 + 8);
              fVar66 = (float)((uint)((fVar66 - fVar82) * fVar110 +
                                     (fVar101 - fVar67) * fVar108 +
                                     fVar121 * (fVar99 - fVar65) + 0.0) ^ uVar33) / fVar58;
              if (fVar66 <= 0.0) {
                fVar66 = 0.0;
              }
              if (((0.0 < local_914) &&
                  (fVar99 = (((fVar56 * pfVar29[4] - pfVar29[5] * fVar88) + pfVar29[2]) -
                            ((fVar44 * pfVar23[4] - pfVar23[5] * fVar86) + pfVar23[2])) * fVar110 +
                            (((fVar88 * pfVar29[6] - pfVar29[4] * fVar104) + pfVar29[1]) -
                            ((fVar86 * pfVar23[6] - pfVar23[4] * fVar90) + pfVar23[1])) * fVar108 +
                            fVar121 * (((fVar104 * pfVar29[5] - pfVar29[6] * fVar56) + *pfVar29) -
                                      ((fVar90 * pfVar23[5] - pfVar23[6] * fVar44) + *pfVar23)) +
                            0.0, fVar99 < fVar59)) && (fVar99 < (float)(uVar33 ^ (uint)fVar66))) {
                fVar66 = (fVar99 - (pfVar29[0x1b] - pfVar23[0x1b]) *
                                   (fVar68 * fVar110 + fVar55 * fVar108 + fVar121 * fVar39 + 0.0)) *
                         local_914;
              }
              fVar82 = fVar108 * fVar86 - fVar121 * fVar44;
              fVar81 = fVar110 * fVar44 - fVar108 * fVar90;
              fVar83 = fVar121 * fVar90 - fVar110 * fVar86;
              fVar101 = fVar108 * fVar88 - fVar121 * fVar56;
              fVar65 = fVar110 * fVar56 - fVar108 * fVar104;
              fVar67 = fVar121 * fVar104 - fVar110 * fVar88;
              fVar100 = fVar109 * fVar81 + fVar83 * fVar40 + fVar82 * fVar93;
              fVar103 = fVar85 * fVar81 + fVar83 * fVar87 + fVar82 * fVar95;
              fVar106 = fVar92 * fVar81 + fVar83 * fVar89 + fVar82 * fVar97;
              fVar94 = local_8d8[0] * fVar65 + fVar67 * local_8d8[4] + fVar101 * local_8d8[8];
              fVar96 = local_8d8[1] * fVar65 + fVar67 * local_8d8[5] + fVar101 * local_8d8[9];
              fVar98 = local_8d8[2] * fVar65 + fVar67 * local_8d8[6] + fVar101 * local_8d8[10];
              *(float *)pCVar28 = fVar81;
              *(float *)(pCVar28 + 4) = fVar83;
              *(float *)(pCVar28 + 8) = fVar82;
              *(float *)(pCVar28 + 0xc) = fVar65;
              *(float *)(pCVar28 + 0x10) = fVar67;
              *(float *)(pCVar28 + 0x14) = fVar101;
              *(float *)(pCVar28 + 0x18) = fVar100;
              *(float *)(pCVar28 + 0x1c) = fVar103;
              *(float *)(pCVar28 + 0x20) = fVar106;
              *(float *)(pCVar28 + 0x24) = fVar94;
              *(float *)(pCVar28 + 0x28) = fVar96;
              *(float *)(pCVar28 + 0x2c) = fVar98;
              fVar99 = _LC1;
              fVar101 = fVar101 * fVar98 + fVar67 * fVar96 + fVar65 * fVar94 + 0.0 + fVar60 +
                        fVar82 * fVar106 + fVar81 * fVar100 + 0.0 + fVar83 * fVar103 + fVar64;
              if (fVar101 == 0.0) {
                *(undefined4 *)(pCVar28 + 0x3c) = 0;
                fVar99 = 0.0;
              }
              else {
                *(undefined4 *)(pCVar28 + 0x38) = 0;
                *(float *)(pCVar28 + 0x34) = fVar66;
                fVar99 = fVar99 / fVar101;
              }
              *(float *)(pCVar28 + 0x30) = fVar99;
              if (local_918 <= 0.0) {
                *(undefined4 *)(pCVar28 + 0x70) = 0;
                *(undefined4 *)(pCVar28 + 0x7c) = 0;
                *(undefined4 *)(pCVar28 + 0xb0) = 0;
                *(undefined4 *)(pCVar28 + 0xbc) = 0;
              }
              else {
                fVar99 = (fVar90 * (float)local_8e8._4_4_ - fStack_8e0 * fVar44) +
                         (float)local_8f8._0_4_;
                fVar65 = (fVar86 * fStack_8e0 - (float)local_8e8._0_4_ * fVar90) +
                         (float)local_8f8._4_4_;
                fVar82 = (fVar44 * (float)local_8e8._0_4_ - (float)local_8e8._4_4_ * fVar86) +
                         fStack_8f0;
                fVar83 = fVar42 * fVar86 - fVar61 * fVar44;
                fVar94 = fVar43 * fVar44 - fVar42 * fVar90;
                fVar96 = fVar61 * fVar90 - fVar43 * fVar86;
                fVar101 = fVar42 * fVar88 - fVar61 * fVar56;
                fVar67 = fVar43 * fVar56 - fVar42 * fVar104;
                fVar81 = fVar61 * fVar104 - fVar43 * fVar88;
                fVar106 = fVar109 * fVar94 + fVar96 * fVar40 + fVar83 * fVar93;
                fVar102 = fVar85 * fVar94 + fVar96 * fVar87 + fVar83 * fVar95;
                fVar105 = fVar92 * fVar94 + fVar96 * fVar89 + fVar83 * fVar97;
                fVar98 = local_8d8[0] * fVar67 + fVar81 * local_8d8[4] + fVar101 * local_8d8[8];
                fVar100 = local_8d8[1] * fVar67 + fVar81 * local_8d8[5] + fVar101 * local_8d8[9];
                fVar103 = local_8d8[2] * fVar67 + fVar81 * local_8d8[6] + fVar101 * local_8d8[10];
                *(float *)(pCVar28 + 0x40) = fVar94;
                *(float *)(pCVar28 + 0x44) = fVar96;
                *(float *)(pCVar28 + 0x48) = fVar83;
                *(float *)(pCVar28 + 0x4c) = fVar67;
                *(float *)(pCVar28 + 0x50) = fVar81;
                *(float *)(pCVar28 + 0x54) = fVar101;
                *(float *)(pCVar28 + 0x58) = fVar106;
                *(float *)(pCVar28 + 0x5c) = fVar102;
                *(float *)(pCVar28 + 0x60) = fVar105;
                *(float *)(pCVar28 + 100) = fVar98;
                *(float *)(pCVar28 + 0x68) = fVar100;
                *(float *)(pCVar28 + 0x6c) = fVar103;
                fVar66 = _LC1;
                fVar101 = fVar101 * fVar103 + fVar81 * fVar100 + fVar98 * fVar67 + 0.0 + fVar60 +
                          fVar83 * fVar105 + fVar94 * fVar106 + 0.0 + fVar96 * fVar102 + fVar64;
                if (fVar101 == 0.0) {
                  *(undefined4 *)(pCVar28 + 0x7c) = 0;
                  fVar66 = 0.0;
                }
                else {
                  *(undefined4 *)(pCVar28 + 0x78) = 0;
                  fVar66 = fVar66 / fVar101;
                  *(float *)(pCVar28 + 0x74) =
                       fVar43 * fVar82 + fVar61 * fVar99 + 0.0 + fVar42 * fVar65;
                }
                *(float *)(pCVar28 + 0x70) = fVar66;
                fVar101 = fVar86 * fVar69 - fVar44 * fVar41;
                fVar67 = fVar44 * fVar111 - fVar90 * fVar69;
                fVar81 = fVar90 * fVar41 - fVar86 * fVar111;
                fVar44 = fVar88 * fVar69 - fVar56 * fVar41;
                fVar56 = fVar56 * fVar111 - fVar104 * fVar69;
                fVar90 = fVar104 * fVar41 - fVar88 * fVar111;
                fVar104 = fVar109 * fVar67 + fVar81 * fVar40 + fVar101 * fVar93;
                fVar83 = fVar85 * fVar67 + fVar81 * fVar87 + fVar101 * fVar95;
                fVar94 = fVar92 * fVar67 + fVar81 * fVar89 + fVar101 * fVar97;
                fVar66 = local_8d8[0] * fVar56 + fVar90 * local_8d8[4] + fVar44 * local_8d8[8];
                fVar86 = local_8d8[1] * fVar56 + fVar90 * local_8d8[5] + fVar44 * local_8d8[9];
                fVar88 = local_8d8[2] * fVar56 + fVar90 * local_8d8[6] + fVar44 * local_8d8[10];
                *(float *)(pCVar28 + 0x80) = fVar67;
                *(float *)(pCVar28 + 0x84) = fVar81;
                *(float *)(pCVar28 + 0x88) = fVar101;
                *(float *)(pCVar28 + 0x8c) = fVar56;
                *(float *)(pCVar28 + 0x90) = fVar90;
                *(float *)(pCVar28 + 0x94) = fVar44;
                *(float *)(pCVar28 + 0x98) = fVar104;
                *(float *)(pCVar28 + 0x9c) = fVar83;
                *(float *)(pCVar28 + 0xa0) = fVar94;
                *(float *)(pCVar28 + 0xa4) = fVar66;
                *(float *)(pCVar28 + 0xa8) = fVar86;
                *(float *)(pCVar28 + 0xac) = fVar88;
                fVar60 = fVar44 * fVar88 + fVar90 * fVar86 + fVar66 * fVar56 + 0.0 + fVar60 +
                         fVar101 * fVar94 + fVar67 * fVar104 + 0.0 + fVar81 * fVar83 + fVar64;
                if (fVar60 == 0.0) {
                  *(undefined4 *)(pCVar28 + 0xbc) = 0;
                  fVar60 = 0.0;
                }
                else {
                  *(undefined4 *)(pCVar28 + 0xb8) = 0;
                  fVar60 = _LC1 / fVar60;
                  *(float *)(pCVar28 + 0xb4) =
                       fVar111 * fVar82 + fVar65 * fVar69 + fVar99 * fVar41 + 0.0;
                }
                *(float *)(pCVar28 + 0xb0) = fVar60;
              }
              pCVar28 = pCVar28 + 200;
            } while (pCVar1 != pCVar28);
          }
LAB_00106a98:
          uVar33 = (uint)*(undefined8 *)(*(long *)(this + 0xc0) + 0x40);
        }
        else {
          if (BVar5 != (Body)0x0) goto LAB_00105202;
          MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_898);
          uVar33 = _LC20;
          fVar92 = _LC6;
          lVar26 = 0;
          do {
            fVar121 = *(float *)((long)afStack_894 + lVar26 + 4);
            fVar40 = *(float *)(local_888 + lVar26 + -4);
            *(float *)((long)local_8d8 + lVar26) =
                 *(float *)((Mat44 *)&local_898 + lVar26) * fVar120;
            *(float *)((long)local_8d8 + lVar26 + 4) =
                 *(float *)((long)afStack_894 + lVar26) * fVar120;
            *(float *)((long)local_8d8 + lVar26 + 8) = fVar121 * fVar120;
            *(float *)((long)local_8d8 + lVar26 + 0xc) = fVar40 * fVar120;
            lVar26 = lVar26 + 0x10;
          } while (lVar26 != 0x40);
          auVar63 = *(undefined1 (*) [16])(pCVar32 + 0x18);
          fVar120 = auVar63._0_4_;
          fVar121 = auVar63._4_4_;
          fVar40 = auVar63._8_4_;
          if ((float)((uint)fVar120 & _LC10) <= (float)((uint)fVar121 & _LC10)) {
            auVar14._8_4_ = _LC20 ^ (uint)fVar121;
            auVar14._4_4_ = _LC20 ^ (uint)fVar121;
            auVar14._0_4_ = fVar40;
            auVar14._12_4_ = 0;
            auVar53._0_4_ = SQRT(fVar121 * fVar121 + fVar40 * fVar40);
            auVar53._4_4_ = auVar53._0_4_;
            auVar53._8_4_ = auVar53._0_4_;
            auVar53._12_4_ = auVar53._0_4_;
            auVar63 = divps(auVar14 << 0x20,auVar53);
            auVar70 = auVar63._0_12_;
          }
          else {
            auVar71._4_4_ = 0;
            auVar71._0_4_ = fVar40;
            auVar71._12_4_ = _LC20 ^ (uint)fVar120;
            auVar71._8_4_ = _LC20 ^ (uint)fVar120;
            auVar46._0_4_ = SQRT(fVar120 * fVar120 + fVar40 * fVar40);
            auVar46._4_4_ = auVar46._0_4_;
            auVar46._8_4_ = auVar46._0_4_;
            auVar46._12_4_ = auVar46._0_4_;
            auVar63 = divps(auVar71,auVar46);
            auVar70 = auVar63._0_12_;
          }
          fVar89 = auVar70._0_4_;
          fVar93 = auVar70._4_4_;
          fVar95 = auVar70._8_4_;
          uVar7 = *(uint *)(lVar22 + 0x40);
          fVar109 = fVar93 * fVar120 - fVar121 * fVar89;
          fVar85 = fVar95 * fVar121 - fVar40 * fVar93;
          fVar87 = fVar89 * fVar40 - fVar120 * fVar95;
          if (lVar27 != 0) {
            do {
              pfVar29 = *(float **)(pCVar28 + 0xc0);
              fVar97 = *(float *)(pCVar32 + 0x28);
              fVar108 = *pfVar29;
              fVar110 = pfVar29[1];
              fVar111 = pfVar29[2];
              fVar41 = pfVar29[3];
              fVar69 = pfVar29[4];
              fVar61 = pfVar29[5];
              fVar42 = fVar110 * fVar76 + fVar108 * fVar107 + fVar111 * fVar114 + local_a88;
              fVar43 = fVar110 * fVar115 + fVar108 * fVar57 + fVar111 * fVar118 + fStack_a84;
              fVar108 = fVar110 * fVar78 + fVar108 * fVar91 + fVar111 * fVar79 + fVar3;
              fVar110 = fVar69 * fVar77 + fVar41 * fVar113 + fVar61 * fVar116 + local_a78;
              fVar111 = fVar69 * fVar117 + fVar41 * fVar38 + fVar61 * fVar119 + fStack_a74;
              fVar41 = fVar69 * fVar112 + fVar41 * fVar84 + fVar61 * fVar80 + fVar16;
              fVar69 = (fVar42 + fVar110) * fVar92 - *(float *)param_3;
              fVar61 = (fVar43 + fVar111) * fVar92 - *(float *)(param_3 + 4);
              fVar59 = (fVar108 + fVar41) * fVar92 - *(float *)(param_3 + 8);
              fVar108 = (float)((uint)((fVar108 - fVar41) * fVar40 +
                                      (fVar43 - fVar111) * fVar121 +
                                      (fVar42 - fVar110) * fVar120 + 0.0) ^ uVar33) / fVar58;
              if (fVar108 <= 0.0) {
                fVar108 = 0.0;
              }
              if (((0.0 < local_914) &&
                  (fVar110 = (0.0 - ((fVar61 * pfVar23[4] - pfVar23[5] * fVar69) + pfVar23[2])) *
                             fVar40 + (0.0 - ((fVar59 * pfVar23[5] - pfVar23[6] * fVar61) + *pfVar23
                                             )) * fVar120 + 0.0 +
                                      (0.0 - ((fVar69 * pfVar23[6] - pfVar23[4] * fVar59) +
                                             pfVar23[1])) * fVar121,
                  fVar110 < (float)(uVar7 ^ uVar33))) && (fVar110 < (float)(uVar33 ^ (uint)fVar108))
                 ) {
                fVar108 = (fVar110 -
                          (fVar68 * fVar40 + fVar55 * fVar121 + fVar39 * fVar120 + 0.0) *
                          pfVar23[0x1b]) * local_914;
              }
              fVar43 = fVar121 * fVar69 - fVar120 * fVar61;
              fVar60 = fVar40 * fVar61 - fVar121 * fVar59;
              fVar64 = fVar120 * fVar59 - fVar40 * fVar69;
              *(float *)(pCVar28 + 8) = fVar43;
              *(ulong *)pCVar28 = CONCAT44(fVar64,fVar60);
              fVar111 = local_8d8[0] * fVar60 + fVar64 * local_8d8[4] + fVar43 * local_8d8[8];
              fVar41 = local_8d8[1] * fVar60 + fVar64 * local_8d8[5] + fVar43 * local_8d8[9];
              fVar42 = local_8d8[2] * fVar60 + fVar64 * local_8d8[6] + fVar43 * local_8d8[10];
              *(ulong *)(pCVar28 + 0x18) = CONCAT44(fVar41,fVar111);
              *(float *)(pCVar28 + 0x20) = fVar42;
              fVar110 = _LC1;
              fVar111 = fVar43 * fVar42 + fVar41 * fVar64 + fVar111 * fVar60 + 0.0 + fVar97;
              if (fVar111 == 0.0) {
                *(undefined4 *)(pCVar28 + 0x3c) = 0;
                fVar110 = 0.0;
              }
              else {
                *(undefined4 *)(pCVar28 + 0x38) = 0;
                *(float *)(pCVar28 + 0x34) = fVar108;
                fVar110 = fVar110 / fVar111;
              }
              *(float *)(pCVar28 + 0x30) = fVar110;
              if (local_918 <= 0.0) {
                *(undefined4 *)(pCVar28 + 0x70) = 0;
                *(undefined4 *)(pCVar28 + 0x7c) = 0;
                *(undefined4 *)(pCVar28 + 0xb0) = 0;
                *(undefined4 *)(pCVar28 + 0xbc) = 0;
              }
              else {
                fVar110 = (fVar59 * (float)local_8e8._4_4_ - fStack_8e0 * fVar61) +
                          (float)local_8f8._0_4_;
                fVar41 = (fVar69 * fStack_8e0 - (float)local_8e8._0_4_ * fVar59) +
                         (float)local_8f8._4_4_;
                fVar43 = (fVar61 * (float)local_8e8._0_4_ - (float)local_8e8._4_4_ * fVar69) +
                         fStack_8f0;
                fVar111 = fVar93 * fVar69 - fVar89 * fVar61;
                fVar42 = fVar95 * fVar61 - fVar93 * fVar59;
                fVar60 = fVar89 * fVar59 - fVar95 * fVar69;
                *(float *)(pCVar28 + 0x48) = fVar111;
                *(ulong *)(pCVar28 + 0x40) = CONCAT44(fVar60,fVar42);
                fVar64 = local_8d8[0] * fVar42 + fVar60 * local_8d8[4] + fVar111 * local_8d8[8];
                fVar66 = local_8d8[1] * fVar42 + fVar60 * local_8d8[5] + fVar111 * local_8d8[9];
                fVar86 = local_8d8[2] * fVar42 + fVar60 * local_8d8[6] + fVar111 * local_8d8[10];
                *(ulong *)(pCVar28 + 0x58) = CONCAT44(fVar66,fVar64);
                *(float *)(pCVar28 + 0x60) = fVar86;
                fVar108 = _LC1;
                fVar111 = fVar111 * fVar86 + fVar66 * fVar60 + fVar64 * fVar42 + 0.0 + fVar97;
                if (fVar111 == 0.0) {
                  *(undefined4 *)(pCVar28 + 0x7c) = 0;
                  fVar108 = 0.0;
                }
                else {
                  *(undefined4 *)(pCVar28 + 0x78) = 0;
                  fVar108 = fVar108 / fVar111;
                  *(float *)(pCVar28 + 0x74) =
                       fVar95 * fVar43 + fVar89 * fVar110 + 0.0 + fVar93 * fVar41;
                }
                *(float *)(pCVar28 + 0x70) = fVar108;
                fVar111 = fVar87 * fVar69 - fVar61 * fVar85;
                fVar61 = fVar109 * fVar61 - fVar59 * fVar87;
                fVar69 = fVar85 * fVar59 - fVar69 * fVar109;
                *(float *)(pCVar28 + 0x88) = fVar111;
                *(ulong *)(pCVar28 + 0x80) = CONCAT44(fVar69,fVar61);
                fVar42 = local_8d8[0] * fVar61 + fVar69 * local_8d8[4] + fVar111 * local_8d8[8];
                fVar59 = local_8d8[1] * fVar61 + fVar69 * local_8d8[5] + fVar111 * local_8d8[9];
                fVar60 = local_8d8[2] * fVar61 + fVar69 * local_8d8[6] + fVar111 * local_8d8[10];
                *(ulong *)(pCVar28 + 0x98) = CONCAT44(fVar59,fVar42);
                *(float *)(pCVar28 + 0xa0) = fVar60;
                fVar108 = _LC1;
                fVar97 = fVar111 * fVar60 + fVar59 * fVar69 + fVar42 * fVar61 + 0.0 + fVar97;
                if (fVar97 == 0.0) {
                  *(undefined4 *)(pCVar28 + 0xbc) = 0;
                  fVar108 = 0.0;
                }
                else {
                  *(undefined4 *)(pCVar28 + 0xb8) = 0;
                  fVar108 = fVar108 / fVar97;
                  *(float *)(pCVar28 + 0xb4) =
                       fVar43 * fVar109 + fVar41 * fVar87 + fVar110 * fVar85 + 0.0;
                }
                *(float *)(pCVar28 + 0xb0) = fVar108;
              }
              pCVar28 = pCVar28 + 200;
            } while (pCVar1 != pCVar28);
          }
          uVar33 = (uint)*(undefined8 *)(*(long *)(this + 0xc0) + 0x40);
        }
LAB_00105222:
        fVar92 = pfVar23[0x1c];
      }
      JPH::IslandBuilder::LinkContact(uVar33,uVar30,(uint)fVar92);
      if (sDrawContactManifolds != '\0') {
        ContactConstraint::Draw(pCVar32,DebugRenderer::sInstance,(undefined4)Color::sYellow);
      }
    }
  }
  *(int *)(lVar19 + 0x24) = local_b20;
LAB_001040fa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ContactConstraintManager::AddBodyPair(JPH::ContactConstraintManager::ContactAllocator&,
   JPH::Body const&, JPH::Body const&) */

long __thiscall
JPH::ContactConstraintManager::AddBodyPair
          (ContactConstraintManager *this,ContactAllocator *param_1,Body *param_2,Body *param_3)

{
  undefined1 auVar1 [12];
  float fVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  Body *pBVar8;
  float fVar9;
  float fVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_28;
  uint uStack_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = *(uint *)(param_2 + 0x70);
  local_28 = *(uint *)(param_3 + 0x70);
  pBVar8 = param_2;
  uStack_24 = uVar18;
  if (uVar18 < local_28) {
    pBVar8 = param_3;
    param_3 = param_2;
    uStack_24 = local_28;
    local_28 = uVar18;
  }
  uVar3 = CONCAT44(uStack_24,local_28) * 0x1fffff - 1;
  uVar3 = (uVar3 ^ uVar3 >> 0x18) * 0x109;
  uVar3 = (uVar3 ^ uVar3 >> 0xe) * 0x15;
  lVar4 = ManifoldCache::Create
                    ((ManifoldCache *)(this + (long)*(int *)(this + 0x88) * 0x40 + 8),param_1,
                     (BodyPair *)&local_28,(uVar3 ^ uVar3 >> 0x1c) * 0x80000001);
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    fVar5 = *(float *)(param_3 + 0x10);
    fVar6 = *(float *)(param_3 + 0x14);
    fVar9 = *(float *)(param_3 + 0x18);
    fVar10 = *(float *)(param_3 + 0x1c);
    fVar15 = *(float *)pBVar8;
    fVar16 = *(float *)(pBVar8 + 4);
    fVar17 = *(float *)(pBVar8 + 8);
    fVar2 = *(float *)(pBVar8 + 0xc);
    lVar7 = lVar4 + 0xc;
    *(undefined4 *)(lVar4 + 0x24) = 0xffffffff;
    fVar15 = fVar15 - *(float *)param_3;
    fVar16 = fVar16 - *(float *)(param_3 + 4);
    fVar17 = fVar17 - *(float *)(param_3 + 8);
    fVar11 = (float)((uint)fVar5 ^ __LC17);
    fVar12 = (float)((uint)fVar6 ^ _UNK_00116354);
    fVar13 = (float)((uint)fVar9 ^ _UNK_00116358);
    fVar14 = (float)((uint)fVar10 ^ _UNK_0011635c);
    fVar24 = (fVar15 * fVar14 + fVar11 * 0.0 + fVar12 * fVar17) - fVar13 * fVar16;
    fVar23 = (fVar14 * fVar16 - fVar11 * fVar17) + fVar12 * 0.0 + fVar15 * fVar13;
    fVar22 = ((fVar14 * fVar17 + fVar11 * fVar16) - fVar15 * fVar12) + fVar13 * 0.0;
    fVar15 = ((fVar14 * 0.0 - fVar15 * fVar11) - fVar16 * fVar12) - fVar17 * fVar13;
    auVar19._0_4_ = fVar22 * fVar6;
    auVar19._4_4_ = fVar22 * fVar5;
    auVar19._8_4_ = fVar14 * fVar9;
    auVar19._12_4_ = fVar14 * fVar10;
    fVar16 = (fVar2 - *(float *)(param_3 + 0xc)) * fVar10;
    auVar1._4_8_ = auVar19._8_8_;
    auVar1._0_4_ = auVar19._4_4_ + (fVar15 * fVar6 - fVar24 * fVar9) + fVar23 * fVar10;
    auVar20._0_8_ = auVar1._0_8_ << 0x20;
    auVar20._8_4_ =
         auVar19._8_4_ + (fVar9 * 0.0 - fVar17 * fVar9) + fVar14 * (fVar9 * 0.0 + fVar17 * fVar9);
    auVar20._12_4_ = auVar19._12_4_ + (fVar10 * 0.0 - fVar16) + fVar14 * (fVar10 * 0.0 + fVar16);
    auVar21._4_12_ = auVar20._4_12_;
    auVar21._0_4_ = (fVar15 * fVar5 + fVar24 * fVar10 + fVar23 * fVar9) - auVar19._0_4_;
    *(long *)(lVar4 + 0xc) = auVar21._0_8_;
    *(float *)(lVar4 + 0x14) =
         ((fVar9 * fVar15 + fVar6 * fVar24) - fVar5 * fVar23) + fVar10 * fVar22;
    fVar5 = (float)*(undefined8 *)(pBVar8 + 0x18);
    fVar9 = (float)*(undefined8 *)(pBVar8 + 0x10);
    fVar6 = (float)((ulong)*(undefined8 *)(pBVar8 + 0x18) >> 0x20);
    fVar10 = (float)((ulong)*(undefined8 *)(pBVar8 + 0x10) >> 0x20);
    fVar15 = ((fVar6 * fVar14 - fVar9 * fVar11) - fVar10 * fVar12) - fVar5 * fVar13;
    uVar18 = (uint)fVar15 & _LC20;
    *(ulong *)(lVar4 + 0x18) =
         CONCAT44((uint)((fVar10 * fVar14 - fVar5 * fVar11) + fVar6 * fVar12 + fVar9 * fVar13) ^
                  (uint)fVar15 & _LC20,
                  (uint)((fVar9 * fVar14 + fVar6 * fVar11 + fVar5 * fVar12) - fVar10 * fVar13) ^
                  (uint)fVar15 & _LC20);
    *(uint *)(lVar4 + 0x20) =
         (uint)(((fVar14 * fVar5 + fVar10 * fVar11) - fVar9 * fVar12) + fVar6 * fVar13) ^ uVar18;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ContactConstraintManager::OnCCDContactAdded(JPH::ContactConstraintManager::ContactAllocator&,
   JPH::Body const&, JPH::Body const&, JPH::ContactManifold const&, JPH::ContactSettings&) */

void __thiscall
JPH::ContactConstraintManager::OnCCDContactAdded
          (ContactConstraintManager *this,ContactAllocator *param_1,Body *param_2,Body *param_3,
          ContactManifold *param_4,ContactSettings *param_5)

{
  SubShapeIDPair SVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  SubShapeIDPair *pSVar6;
  int *piVar7;
  undefined1 *__src;
  ulong uVar8;
  ulong uVar9;
  Body *pBVar10;
  uint uVar11;
  long lVar13;
  long in_FS_OFFSET;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int local_10f8;
  int iStack_10f4;
  int iStack_10f0;
  int iStack_10ec;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined4 local_10c8;
  undefined8 local_10c4;
  uint local_10b8;
  undefined1 local_10a8 [1024];
  uint local_ca8;
  undefined1 local_c98 [1024];
  undefined8 local_898;
  undefined8 uStack_890;
  float local_888;
  float fStack_884;
  float fStack_880;
  float fStack_87c;
  undefined4 local_878;
  undefined4 local_874;
  undefined4 local_870;
  uint local_868;
  undefined1 local_858 [1024];
  uint local_458;
  undefined1 local_448 [1032];
  long local_40;
  long *plVar12;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = (**(code **)(this + 0xa0))(param_2,param_4 + 0x24,param_3);
  *(undefined4 *)param_5 = uVar14;
  uVar14 = (**(code **)(this + 0xa8))(param_2,param_4 + 0x24,param_3,param_4 + 0x28);
  lVar13 = *(long *)(this + 0x98);
  param_5[0x18] = (ContactSettings)0x0;
  *(undefined4 *)(param_5 + 4) = uVar14;
  if (lVar13 == 0) goto LAB_00107da6;
  local_10b8 = 0;
  local_10c4 = 0xffffffffffffffff;
  local_ca8 = 0;
  pBVar10 = param_2;
  if (*(uint *)(param_3 + 0x70) < *(uint *)(param_2 + 0x70)) {
    local_868 = 0;
    uVar14 = *(undefined4 *)(param_4 + 0x20);
    local_874 = *(undefined4 *)(param_4 + 0x28);
    uVar11 = *(uint *)(param_4 + 0x440);
    local_898 = *(undefined8 *)param_4;
    uStack_890 = *(undefined8 *)(param_4 + 8);
    local_888 = 0.0 - *(float *)(param_4 + 0x10);
    fStack_884 = 0.0 - *(float *)(param_4 + 0x14);
    fStack_880 = 0.0 - *(float *)(param_4 + 0x18);
    fStack_87c = 0.0 - *(float *)(param_4 + 0x1c);
    local_870 = *(undefined4 *)(param_4 + 0x24);
    local_878 = uVar14;
    if (uVar11 != 0) {
      memcpy(local_858,param_4 + 0x450,(ulong)uVar11 << 4);
      local_868 = uVar11;
    }
    local_458 = 0;
    uVar2 = *(uint *)(param_4 + 0x30);
    local_10c8 = uVar14;
    if (uVar2 == 0) {
      local_10e8 = local_898;
      uStack_10e0 = uStack_890;
      local_10d8 = CONCAT44(fStack_884,local_888);
      uStack_10d0 = CONCAT44(fStack_87c,fStack_880);
      local_10c4 = CONCAT44(local_870,local_874);
      if (uVar11 != 0) goto LAB_00107ee1;
      local_ca8 = 0;
    }
    else {
      __src = (undefined1 *)memcpy(local_448,param_4 + 0x40,(ulong)uVar2 << 4);
      local_10d8 = CONCAT44(fStack_884,local_888);
      uStack_10d0 = CONCAT44(fStack_87c,fStack_880);
      local_10e8 = local_898;
      uStack_10e0 = uStack_890;
      local_10c4 = CONCAT44(local_870,local_874);
      local_458 = uVar2;
      if (uVar11 != 0) {
LAB_00107ee1:
        local_10e8 = local_898;
        uStack_10e0 = uStack_890;
        memcpy(local_10a8,local_858,(ulong)uVar11 << 4);
        local_10b8 = uVar11;
        local_ca8 = 0;
        if (uVar2 == 0) goto LAB_00107f4c;
        __src = local_448;
      }
      memcpy(local_c98,__src,(ulong)uVar2 << 4);
      local_ca8 = uVar2;
    }
LAB_00107f4c:
    param_4 = (ContactManifold *)&local_10e8;
    pBVar10 = param_3;
    param_3 = param_2;
  }
  uVar8 = 0xcbf29ce484222325;
  local_10f8 = *(int *)(pBVar10 + 0x70);
  iStack_10f4 = *(int *)((SubShapeIDPair *)param_4 + 0x24);
  iStack_10f0 = *(int *)(param_3 + 0x70);
  iStack_10ec = *(int *)((SubShapeIDPair *)param_4 + 0x28);
  pSVar6 = (SubShapeIDPair *)&local_10f8;
  do {
    SVar1 = *pSVar6;
    pSVar6 = pSVar6 + 1;
    uVar8 = (uVar8 ^ (byte)SVar1) * 0x100000001b3;
  } while (pSVar6 != (SubShapeIDPair *)&local_10e8);
  lVar13 = (long)*(int *)(this + 0x88);
  uVar11 = *(uint *)(*(long *)(this + lVar13 * 0x40 + 0x20) +
                    (*(int *)(this + lVar13 * 0x40 + 0x28) - 1 & uVar8) * 4);
  if (uVar11 != 0xffffffff) {
    plVar12 = *(long **)(this + lVar13 * 0x40 + 0x18);
    lVar3 = *plVar12;
    do {
      piVar7 = (int *)((ulong)uVar11 + lVar3);
      auVar15._0_4_ = -(uint)(*piVar7 == *(int *)(pBVar10 + 0x70));
      auVar15._4_4_ = -(uint)(piVar7[1] == *(int *)((SubShapeIDPair *)param_4 + 0x24));
      auVar15._8_4_ = -(uint)(piVar7[2] == *(int *)(param_3 + 0x70));
      auVar15._12_4_ = -(uint)(piVar7[3] == *(int *)((SubShapeIDPair *)param_4 + 0x28));
      uVar11 = movmskps((int)plVar12,auVar15);
      plVar12 = (long *)(ulong)uVar11;
      if (uVar11 == 0xf) {
        pcVar4 = *(code **)(**(long **)(this + 0x98) + 0x20);
        if (pcVar4 != ContactListener::OnContactPersisted) {
          (*pcVar4)(*(long **)(this + 0x98),pBVar10,param_3,param_4,param_5);
        }
        goto joined_r0x00107da0;
      }
      uVar11 = piVar7[4];
    } while (uVar11 != 0xffffffff);
  }
  lVar13 = ManifoldCache::Create
                     ((ManifoldCache *)(this + lVar13 * 0x40 + 8),param_1,
                      (SubShapeIDPair *)&local_10f8,uVar8,0);
  uVar9 = (long)*(int *)(this + 0x88) ^ 1;
  uVar11 = *(uint *)(*(long *)(this + uVar9 * 0x40 + 0x20) +
                    (*(int *)(this + uVar9 * 0x40 + 0x28) - 1 & uVar8) * 4);
  if (uVar11 != 0xffffffff) {
    do {
      piVar7 = (int *)(**(long **)(this + uVar9 * 0x40 + 0x18) + (ulong)uVar11);
      auVar17._0_4_ = -(uint)(*piVar7 == local_10f8);
      auVar17._4_4_ = -(uint)(piVar7[1] == iStack_10f4);
      auVar17._8_4_ = -(uint)(piVar7[2] == iStack_10f0);
      auVar17._12_4_ = -(uint)(piVar7[3] == iStack_10ec);
      iVar5 = movmskps(uVar11,auVar17);
      if (iVar5 == 0xf) {
        pcVar4 = *(code **)(**(long **)(this + 0x98) + 0x20);
        if (pcVar4 != ContactListener::OnContactPersisted) {
          (*pcVar4)(*(long **)(this + 0x98),pBVar10,param_3,param_4,param_5);
        }
        LOCK();
        *(ushort *)(piVar7 + 9) = *(ushort *)(piVar7 + 9) | 1;
        UNLOCK();
        goto LAB_0010802f;
      }
      uVar11 = piVar7[4];
    } while (uVar11 != 0xffffffff);
  }
  pcVar4 = *(code **)(**(long **)(this + 0x98) + 0x18);
  if (pcVar4 != ContactListener::OnContactAdded) {
    (*pcVar4)(*(long **)(this + 0x98),pBVar10,param_3,param_4,param_5);
  }
LAB_0010802f:
  if (lVar13 != 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(lVar13 + 0x20) = 0;
    LOCK();
    *(ushort *)(lVar13 + 0x24) = *(ushort *)(lVar13 + 0x24) | 2;
    UNLOCK();
  }
joined_r0x00107da0:
  if (param_4 == (ContactManifold *)&local_10e8) {
    auVar15 = *(undefined1 (*) [16])(param_5 + 8);
    auVar16._0_8_ = auVar15._8_8_;
    auVar16._8_4_ = auVar15._0_4_;
    auVar16._12_4_ = auVar15._4_4_;
    *(undefined1 (*) [16])(param_5 + 8) = auVar16;
  }
LAB_00107da6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::ContactConstraintManager::SortContacts(unsigned int*, unsigned int*) const */

void __thiscall
JPH::ContactConstraintManager::SortContacts
          (ContactConstraintManager *this,uint *param_1,uint *param_2)

{
  QuickSort<unsigned_int*,JPH::ContactConstraintManager::SortContacts(unsigned_int*,unsigned_int*)const::_lambda(unsigned_int,unsigned_int)_1_>
            (param_1,param_2,this);
  return;
}



/* JPH::ContactConstraintManager::FinalizeContactCacheAndCallContactPointRemovedCallbacks(unsigned
   int, unsigned int) */

void __thiscall
JPH::ContactConstraintManager::FinalizeContactCacheAndCallContactPointRemovedCallbacks
          (ContactConstraintManager *this,uint param_1,uint param_2)

{
  ManifoldCache *this_00;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x88);
  *(uint *)(this + 0x88) = uVar1 ^ 1;
  this_00 = (ManifoldCache *)(this + (long)(int)(uVar1 ^ 1) * 0x40 + 8);
  if (*(ContactListener **)(this + 0x98) != (ContactListener *)0x0) {
    ManifoldCache::ContactPointRemovedCallbacks(this_00,*(ContactListener **)(this + 0x98));
  }
  ManifoldCache::Clear(this_00);
  ManifoldCache::Prepare(this_00,param_1,param_2);
  return;
}



/* JPH::ContactConstraintManager::WereBodiesInContact(JPH::BodyID const&, JPH::BodyID const&) const
    */

undefined8 __thiscall
JPH::ContactConstraintManager::WereBodiesInContact
          (ContactConstraintManager *this,BodyID *param_1,BodyID *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)param_2;
  uVar6 = *(uint *)(this + 0x88) ^ 1;
  uVar3 = uVar2;
  if (uVar1 < uVar2) {
    uVar3 = uVar1;
    uVar1 = uVar2;
  }
  uVar4 = CONCAT44(uVar1,uVar3) * 0x1fffff - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  uVar2 = *(uint *)(*(long *)(this + (long)(int)uVar6 * 0x40 + 0x38) +
                   ((uVar4 ^ uVar4 >> 0x1c) * 0x80000001 &
                   (ulong)(*(int *)(this + (long)(int)uVar6 * 0x40 + 0x40) - 1)) * 4);
  if (uVar2 != 0xffffffff) {
    do {
      plVar5 = (long *)((ulong)uVar2 + **(long **)(this + (long)(int)uVar6 * 0x40 + 0x30));
      if (CONCAT44(uVar1,uVar3) == *plVar5) {
        return CONCAT71((int7)((ulong)plVar5 >> 8),*(int *)((long)plVar5 + 0x24) != -1);
      }
      uVar2 = *(uint *)(plVar5 + 1);
    } while (uVar2 != 0xffffffff);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ContactConstraintManager::SolveVelocityConstraints(unsigned int const*, unsigned int const*)
    */

uint __thiscall
JPH::ContactConstraintManager::SolveVelocityConstraints
          (ContactConstraintManager *this,uint *param_1,uint *param_2)

{
  long *plVar1;
  float *pfVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  bool bVar11;
  bool bVar12;
  bool bVar13;
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
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  float *pfVar37;
  float *pfVar38;
  long *plVar39;
  float *pfVar40;
  long *plVar41;
  long *plVar42;
  uint uVar43;
  long *plVar44;
  uint uVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
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
  float fVar61;
  float fVar76;
  float fVar77;
  undefined1 auVar63 [16];
  float fVar62;
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
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar88;
  undefined1 auVar91 [16];
  float fVar92;
  float fVar93;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar101;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar102 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 local_48 [16];
  
  if (param_2 <= param_1) {
    return 0;
  }
  lVar8 = *(long *)(this + 0xb0);
  uVar46 = 0;
  do {
    while( true ) {
      plVar44 = (long *)((ulong)*param_1 * 0x360 + lVar8);
      cVar4 = *(char *)(*plVar44 + 0x78);
      pauVar9 = *(undefined1 (**) [16])(*plVar44 + 0x48);
      cVar5 = *(char *)(plVar44[1] + 0x78);
      pauVar10 = *(undefined1 (**) [16])(plVar44[1] + 0x48);
      if (cVar4 != '\x01') break;
      fVar105 = *(float *)(plVar44 + 3);
      fVar104 = *(float *)((long)plVar44 + 0x1c);
      fVar48 = *(float *)(plVar44 + 4);
      if ((float)((uint)fVar105 & _LC10) <= (float)((uint)fVar104 & _LC10)) {
        auVar15._8_4_ = (uint)fVar104 ^ _LC20;
        auVar15._4_4_ = (uint)fVar104 ^ _LC20;
        auVar15._0_4_ = fVar48;
        auVar15._12_4_ = 0;
        fVar88 = SQRT(fVar104 * fVar104 + fVar48 * fVar48);
        auVar68._4_4_ = fVar88;
        auVar68._0_4_ = fVar88;
        auVar68._8_4_ = fVar88;
        auVar68._12_4_ = fVar88;
        local_48 = divps(auVar15 << 0x20,auVar68);
      }
      else {
        auVar80._4_4_ = 0;
        auVar80._0_4_ = fVar48;
        auVar80._12_4_ = (uint)fVar105 ^ _LC20;
        auVar80._8_4_ = (uint)fVar105 ^ _LC20;
        auVar66._0_4_ = SQRT(fVar105 * fVar105 + fVar48 * fVar48);
        auVar66._4_4_ = auVar66._0_4_;
        auVar66._8_4_ = auVar66._0_4_;
        auVar66._12_4_ = auVar66._0_4_;
        local_48 = divps(auVar80,auVar66);
      }
      fVar88 = local_48._0_4_;
      fVar92 = local_48._4_4_;
      fVar96 = local_48._8_4_;
      pfVar40 = (float *)(plVar44 + 8);
      pfVar2 = pfVar40 + (ulong)*(uint *)(plVar44 + 7) * 0x32;
      fVar103 = fVar92 * fVar105 - fVar104 * fVar88;
      fVar104 = fVar96 * fVar104 - fVar48 * fVar92;
      fVar105 = fVar88 * fVar48 - fVar105 * fVar96;
      if ((ulong)*(uint *)(plVar44 + 7) * 200 != 0) {
        uVar43 = 0;
        pfVar37 = pfVar40;
        do {
          while( true ) {
            if ((pfVar37[0x1c] != 0.0) || (pfVar37[0x2c] != 0.0)) break;
LAB_00108d08:
            pfVar37 = pfVar37 + 0x32;
            if (pfVar37 == pfVar2) goto LAB_00108fa8;
          }
          auVar79 = *pauVar10;
          fVar77 = *(float *)*pauVar9 - auVar79._0_4_;
          fVar93 = *(float *)(*pauVar9 + 4) - auVar79._4_4_;
          fVar97 = *(float *)(*pauVar9 + 8) - auVar79._8_4_;
          fVar48 = pfVar37[0x1f];
          fVar62 = (float)*(undefined8 *)pauVar9[1];
          fVar61 = (float)*(undefined8 *)(pauVar9[1] + 8);
          fVar101 = (float)((ulong)*(undefined8 *)pauVar9[1] >> 0x20);
          fVar87 = (float)*(undefined8 *)pauVar10[1];
          fVar47 = (float)((ulong)*(undefined8 *)pauVar10[1] >> 0x20);
          fVar76 = (float)*(undefined8 *)(pauVar10[1] + 8);
          fVar3 = pfVar37[0x2f];
          fVar98 = (((fVar103 * fVar97 + fVar93 * fVar105 + fVar77 * fVar104 + 0.0 +
                     fVar61 * pfVar37[0x22] + fVar101 * pfVar37[0x21] + fVar62 * pfVar37[0x20] + 0.0
                     ) - (fVar76 * pfVar37[0x25] +
                         fVar87 * pfVar37[0x23] + 0.0 + fVar47 * pfVar37[0x24])) -
                   (pfVar37[0x2e] * fVar3 + pfVar37[0x2d])) * pfVar37[0x2c] + fVar3;
          fVar62 = (((pfVar37[0x12] * fVar61 +
                      pfVar37[0x11] * fVar101 + pfVar37[0x10] * fVar62 + 0.0 +
                     fVar96 * fVar97 + fVar92 * fVar93 + fVar88 * fVar77 + 0.0) -
                    (pfVar37[0x15] * fVar76 + fVar47 * pfVar37[0x14] + pfVar37[0x13] * fVar87 + 0.0)
                    ) - (pfVar37[0x1e] * fVar48 + pfVar37[0x1d])) * pfVar37[0x1c] + fVar48;
          fVar47 = fVar62 * fVar62 + fVar98 * fVar98;
          fVar87 = *(float *)((long)plVar44 + 0x24) * pfVar37[0xf];
          if (fVar87 * fVar87 < fVar47) {
            fVar87 = fVar87 / SQRT(fVar47);
            fVar62 = fVar62 * fVar87;
            fVar98 = fVar98 * fVar87;
          }
          fVar87 = *(float *)(plVar44 + 6);
          pfVar37[0x1f] = fVar62;
          fVar62 = fVar62 - fVar48;
          if (fVar62 != 0.0) {
            fVar87 = fVar87 * fVar62;
            bVar6 = pauVar10[7][10];
            auVar82._1_3_ = 0;
            auVar82[0] = bVar6;
            uVar43 = 1;
            auVar82[4] = bVar6;
            auVar82._5_3_ = 0;
            auVar82[8] = bVar6;
            auVar82._9_3_ = 0;
            auVar82[0xc] = bVar6;
            auVar82._13_3_ = 0;
            auVar32._4_4_ = _UNK_00116364;
            auVar32._0_4_ = __LC22;
            auVar32._8_4_ = _UNK_00116368;
            auVar32._12_4_ = _UNK_0011636c;
            auVar82 = auVar82 & auVar32;
            bVar11 = auVar82._4_4_ == _UNK_00116364;
            bVar12 = auVar82._8_4_ == _UNK_00116368;
            bVar13 = auVar82._12_4_ == _UNK_0011636c;
            *(uint *)*pauVar10 =
                 (uint)(fVar87 * fVar88 + auVar79._0_4_) & -(uint)(auVar82._0_4_ == __LC22);
            *(uint *)(*pauVar10 + 4) = (uint)(fVar87 * fVar92 + auVar79._4_4_) & -(uint)bVar11;
            *(uint *)(*pauVar10 + 8) = (uint)(fVar87 * fVar96 + auVar79._8_4_) & -(uint)bVar12;
            *(uint *)(*pauVar10 + 0xc) =
                 (uint)(fVar87 * local_48._12_4_ + auVar79._12_4_) & -(uint)bVar13;
            fVar48 = pfVar37[0x1a];
            fVar87 = pfVar37[0x1b];
            fVar47 = pfVar37[0x1c];
            fVar61 = *(float *)(pauVar10[1] + 4);
            fVar76 = *(float *)(pauVar10[1] + 8);
            fVar77 = *(float *)(pauVar10[1] + 0xc);
            *(float *)pauVar10[1] = pfVar37[0x19] * fVar62 + *(float *)pauVar10[1];
            *(float *)(pauVar10[1] + 4) = fVar48 * fVar62 + fVar61;
            *(float *)(pauVar10[1] + 8) = fVar87 * fVar62 + fVar76;
            *(float *)(pauVar10[1] + 0xc) = fVar47 * fVar62 + fVar77;
          }
          fVar48 = *(float *)(plVar44 + 6);
          pfVar37[0x2f] = fVar98;
          fVar98 = fVar98 - fVar3;
          if (fVar98 == 0.0) goto LAB_00108d08;
          fVar48 = fVar48 * fVar98;
          bVar6 = pauVar10[7][10];
          pfVar38 = pfVar37 + 0x32;
          auVar67._1_3_ = 0;
          auVar67[0] = bVar6;
          uVar43 = 1;
          auVar67[4] = bVar6;
          auVar67._5_3_ = 0;
          auVar67[8] = bVar6;
          auVar67._9_3_ = 0;
          auVar67[0xc] = bVar6;
          auVar67._13_3_ = 0;
          auVar30._4_4_ = _UNK_00116364;
          auVar30._0_4_ = __LC22;
          auVar30._8_4_ = _UNK_00116368;
          auVar30._12_4_ = _UNK_0011636c;
          auVar67 = auVar67 & auVar30;
          bVar11 = auVar67._4_4_ == _UNK_00116364;
          bVar12 = auVar67._8_4_ == _UNK_00116368;
          bVar13 = auVar67._12_4_ == _UNK_0011636c;
          fVar3 = *(float *)(*pauVar10 + 4);
          fVar62 = *(float *)(*pauVar10 + 8);
          fVar87 = *(float *)(*pauVar10 + 0xc);
          *(uint *)*pauVar10 =
               (uint)(fVar48 * fVar104 + *(float *)*pauVar10) & -(uint)(auVar67._0_4_ == __LC22);
          *(uint *)(*pauVar10 + 4) = (uint)(fVar48 * fVar105 + fVar3) & -(uint)bVar11;
          *(uint *)(*pauVar10 + 8) = (uint)(fVar48 * fVar103 + fVar62) & -(uint)bVar12;
          *(uint *)(*pauVar10 + 0xc) = (uint)(fVar48 * fVar103 + fVar87) & -(uint)bVar13;
          fVar48 = pfVar37[0x2a];
          fVar3 = pfVar37[0x2b];
          fVar62 = pfVar37[0x2c];
          fVar87 = *(float *)(pauVar10[1] + 4);
          fVar47 = *(float *)(pauVar10[1] + 8);
          fVar61 = *(float *)(pauVar10[1] + 0xc);
          *(float *)pauVar10[1] = pfVar37[0x29] * fVar98 + *(float *)pauVar10[1];
          *(float *)(pauVar10[1] + 4) = fVar48 * fVar98 + fVar87;
          *(float *)(pauVar10[1] + 8) = fVar3 * fVar98 + fVar47;
          *(float *)(pauVar10[1] + 0xc) = fVar62 * fVar98 + fVar61;
          pfVar37 = pfVar38;
        } while (pfVar38 != pfVar2);
LAB_00108fa8:
        auVar79 = *(undefined1 (*) [16])(plVar44 + 3);
        do {
          auVar83 = *pauVar10;
          fVar105 = *(float *)(plVar44 + 6);
          fVar104 = pfVar40[0xf];
          fVar48 = ((((float)*(undefined8 *)(pauVar9[1] + 8) * pfVar40[2] +
                      (float)((ulong)*(undefined8 *)pauVar9[1] >> 0x20) * pfVar40[1] +
                      (float)*(undefined8 *)pauVar9[1] * *pfVar40 + 0.0 +
                     (*(float *)(*pauVar9 + 8) - auVar83._8_4_) * auVar79._8_4_ +
                     (*(float *)(*pauVar9 + 4) - auVar83._4_4_) * auVar79._4_4_ +
                     (*(float *)*pauVar9 - auVar83._0_4_) * auVar79._0_4_ + 0.0) -
                    ((float)((ulong)*(undefined8 *)pauVar10[1] >> 0x20) * pfVar40[4] +
                     (float)*(undefined8 *)pauVar10[1] * pfVar40[3] + 0.0 +
                    (float)*(undefined8 *)(pauVar10[1] + 8) * pfVar40[5])) -
                   (pfVar40[0xe] * fVar104 + pfVar40[0xd])) * pfVar40[0xc] + fVar104;
          if (0.0 <= fVar48) {
            if (_LC23 < fVar48) {
              fVar48 = _LC23;
            }
          }
          else {
            fVar48 = 0.0;
          }
          pfVar40[0xf] = fVar48;
          fVar48 = fVar48 - fVar104;
          if (fVar48 != 0.0) {
            bVar6 = pauVar10[7][10];
            uVar43 = 1;
            fVar105 = fVar105 * fVar48;
            auVar89._1_3_ = 0;
            auVar89[0] = bVar6;
            auVar89[4] = bVar6;
            auVar89._5_3_ = 0;
            auVar89[8] = bVar6;
            auVar89._9_3_ = 0;
            auVar89[0xc] = bVar6;
            auVar89._13_3_ = 0;
            auVar31._4_4_ = _UNK_00116364;
            auVar31._0_4_ = __LC22;
            auVar31._8_4_ = _UNK_00116368;
            auVar31._12_4_ = _UNK_0011636c;
            auVar89 = auVar89 & auVar31;
            bVar11 = auVar89._4_4_ == _UNK_00116364;
            bVar12 = auVar89._8_4_ == _UNK_00116368;
            bVar13 = auVar89._12_4_ == _UNK_0011636c;
            *(uint *)*pauVar10 =
                 (uint)(fVar105 * auVar79._0_4_ + auVar83._0_4_) & -(uint)(auVar89._0_4_ == __LC22);
            *(uint *)(*pauVar10 + 4) =
                 (uint)(fVar105 * auVar79._4_4_ + auVar83._4_4_) & -(uint)bVar11;
            *(uint *)(*pauVar10 + 8) =
                 (uint)(fVar105 * auVar79._8_4_ + auVar83._8_4_) & -(uint)bVar12;
            *(uint *)(*pauVar10 + 0xc) =
                 (uint)(fVar105 * auVar79._12_4_ + auVar83._12_4_) & -(uint)bVar13;
            auVar52._0_4_ = pfVar40[9] * fVar48 + *(float *)pauVar10[1];
            auVar52._4_4_ = pfVar40[10] * fVar48 + *(float *)(pauVar10[1] + 4);
            auVar52._8_4_ = pfVar40[0xb] * fVar48 + *(float *)(pauVar10[1] + 8);
            auVar52._12_4_ = pfVar40[0xc] * fVar48 + *(float *)(pauVar10[1] + 0xc);
            pauVar10[1] = auVar52;
          }
          pfVar40 = pfVar40 + 0x32;
        } while (pfVar2 != pfVar40);
        goto LAB_00108760;
      }
LAB_00108763:
      param_1 = param_1 + 1;
      if (param_2 <= param_1) {
        return uVar46;
      }
    }
    if (cVar4 == '\x02') {
      if (cVar5 == '\x01') {
        fVar105 = *(float *)(plVar44 + 3);
        fVar104 = *(float *)((long)plVar44 + 0x1c);
        fVar48 = *(float *)(plVar44 + 4);
        if ((float)((uint)fVar104 & _LC10) < (float)(_LC10 & (uint)fVar105)) {
          auVar79._4_4_ = 0;
          auVar79._0_4_ = fVar48;
          auVar79._12_4_ = (uint)fVar105 ^ _LC20;
          auVar79._8_4_ = (uint)fVar105 ^ _LC20;
          auVar83._0_4_ = SQRT(fVar105 * fVar105 + fVar48 * fVar48);
          auVar83._4_4_ = auVar83._0_4_;
          auVar83._8_4_ = auVar83._0_4_;
          auVar83._12_4_ = auVar83._0_4_;
          local_48 = divps(auVar79,auVar83);
        }
        else {
          auVar18._8_4_ = (uint)fVar104 ^ _LC20;
          auVar18._4_4_ = (uint)fVar104 ^ _LC20;
          auVar18._0_4_ = fVar48;
          auVar18._12_4_ = 0;
          fVar88 = SQRT(fVar104 * fVar104 + fVar48 * fVar48);
          auVar72._4_4_ = fVar88;
          auVar72._0_4_ = fVar88;
          auVar72._8_4_ = fVar88;
          auVar72._12_4_ = fVar88;
          local_48 = divps(auVar18 << 0x20,auVar72);
        }
        fVar92 = local_48._0_4_;
        fVar96 = local_48._4_4_;
        fVar103 = local_48._8_4_;
        pfVar40 = (float *)(plVar44 + 8);
        pfVar2 = pfVar40 + (ulong)*(uint *)(plVar44 + 7) * 0x32;
        fVar88 = fVar96 * fVar105 - fVar104 * fVar92;
        fVar104 = fVar103 * fVar104 - fVar48 * fVar96;
        fVar105 = fVar92 * fVar48 - fVar105 * fVar103;
        if ((ulong)*(uint *)(plVar44 + 7) * 200 != 0) {
          uVar43 = 0;
          pfVar37 = pfVar40;
          do {
            while( true ) {
              if ((pfVar37[0x1c] != 0.0) || (pfVar37[0x2c] != 0.0)) break;
LAB_00109970:
              pfVar37 = pfVar37 + 0x32;
              if (pfVar37 == pfVar2) goto LAB_00109c11;
            }
            auVar79 = *pauVar9;
            fVar93 = auVar79._0_4_ - *(float *)*pauVar10;
            fVar97 = auVar79._4_4_ - *(float *)(*pauVar10 + 4);
            fVar98 = auVar79._8_4_ - *(float *)(*pauVar10 + 8);
            fVar62 = (float)*(undefined8 *)pauVar9[1];
            fVar101 = (float)((ulong)*(undefined8 *)pauVar9[1] >> 0x20);
            fVar61 = (float)*(undefined8 *)(pauVar9[1] + 8);
            fVar48 = pfVar37[0x1f];
            fVar87 = (float)*(undefined8 *)pauVar10[1];
            fVar47 = (float)((ulong)*(undefined8 *)pauVar10[1] >> 0x20);
            fVar76 = (float)*(undefined8 *)(pauVar10[1] + 8);
            fVar3 = pfVar37[0x2f];
            fVar77 = (((fVar88 * fVar98 + fVar97 * fVar105 + fVar93 * fVar104 + 0.0 +
                       fVar61 * pfVar37[0x22] +
                       fVar101 * pfVar37[0x21] + fVar62 * pfVar37[0x20] + 0.0) -
                      (fVar76 * pfVar37[0x25] +
                      fVar87 * pfVar37[0x23] + 0.0 + fVar47 * pfVar37[0x24])) -
                     (pfVar37[0x2e] * fVar3 + pfVar37[0x2d])) * pfVar37[0x2c] + fVar3;
            fVar62 = (((pfVar37[0x12] * fVar61 +
                        pfVar37[0x11] * fVar101 + pfVar37[0x10] * fVar62 + 0.0 +
                       fVar103 * fVar98 + fVar96 * fVar97 + fVar92 * fVar93 + 0.0) -
                      (pfVar37[0x15] * fVar76 +
                      fVar47 * pfVar37[0x14] + pfVar37[0x13] * fVar87 + 0.0)) -
                     (pfVar37[0x1e] * fVar48 + pfVar37[0x1d])) * pfVar37[0x1c] + fVar48;
            fVar47 = fVar62 * fVar62 + fVar77 * fVar77;
            fVar87 = *(float *)((long)plVar44 + 0x24) * pfVar37[0xf];
            if (fVar87 * fVar87 < fVar47) {
              fVar87 = fVar87 / SQRT(fVar47);
              fVar62 = fVar62 * fVar87;
              fVar77 = fVar77 * fVar87;
            }
            fVar87 = *(float *)(plVar44 + 5);
            pfVar37[0x1f] = fVar62;
            fVar62 = fVar62 - fVar48;
            if (fVar62 != 0.0) {
              fVar87 = fVar87 * fVar62;
              bVar6 = pauVar9[7][10];
              uVar43 = 1;
              auVar59._1_3_ = 0;
              auVar59[0] = bVar6;
              auVar59[4] = bVar6;
              auVar59._5_3_ = 0;
              auVar59[8] = bVar6;
              auVar59._9_3_ = 0;
              auVar59[0xc] = bVar6;
              auVar59._13_3_ = 0;
              auVar29._4_4_ = _UNK_00116364;
              auVar29._0_4_ = __LC22;
              auVar29._8_4_ = _UNK_00116368;
              auVar29._12_4_ = _UNK_0011636c;
              auVar59 = auVar59 & auVar29;
              auVar106._0_4_ =
                   (uint)(auVar79._0_4_ - fVar87 * fVar92) & -(uint)(auVar59._0_4_ == __LC22);
              auVar106._4_4_ =
                   (uint)(auVar79._4_4_ - fVar87 * fVar96) & -(uint)(auVar59._4_4_ == _UNK_00116364)
              ;
              auVar106._8_4_ =
                   (uint)(auVar79._8_4_ - fVar87 * fVar103) &
                   -(uint)(auVar59._8_4_ == _UNK_00116368);
              auVar106._12_4_ =
                   (uint)(auVar79._12_4_ - fVar87 * local_48._12_4_) &
                   -(uint)(auVar59._12_4_ == _UNK_0011636c);
              fVar48 = *(float *)pauVar9[1];
              fVar87 = *(float *)(pauVar9[1] + 4);
              fVar47 = *(float *)(pauVar9[1] + 8);
              fVar61 = *(float *)(pauVar9[1] + 0xc);
              *pauVar9 = auVar106;
              auVar79 = *(undefined1 (*) [16])(pfVar37 + 0x16);
              *(float *)pauVar9[1] = fVar48 - fVar62 * auVar79._0_4_;
              *(float *)(pauVar9[1] + 4) = fVar87 - fVar62 * auVar79._4_4_;
              *(float *)(pauVar9[1] + 8) = fVar47 - fVar62 * auVar79._8_4_;
              *(float *)(pauVar9[1] + 0xc) = fVar61 - fVar62 * auVar79._12_4_;
            }
            fVar48 = *(float *)(plVar44 + 5);
            pfVar37[0x2f] = fVar77;
            fVar77 = fVar77 - fVar3;
            if (fVar77 == 0.0) goto LAB_00109970;
            fVar48 = fVar48 * fVar77;
            bVar6 = pauVar9[7][10];
            fVar3 = *(float *)(*pauVar9 + 4);
            fVar62 = *(float *)(*pauVar9 + 8);
            fVar87 = *(float *)(*pauVar9 + 0xc);
            pfVar38 = pfVar37 + 0x32;
            uVar43 = 1;
            auVar73._1_3_ = 0;
            auVar73[0] = bVar6;
            auVar73[4] = bVar6;
            auVar73._5_3_ = 0;
            auVar73[8] = bVar6;
            auVar73._9_3_ = 0;
            auVar73[0xc] = bVar6;
            auVar73._13_3_ = 0;
            auVar27._4_4_ = _UNK_00116364;
            auVar27._0_4_ = __LC22;
            auVar27._8_4_ = _UNK_00116368;
            auVar27._12_4_ = _UNK_0011636c;
            auVar73 = auVar73 & auVar27;
            bVar11 = auVar73._4_4_ == _UNK_00116364;
            bVar12 = auVar73._8_4_ == _UNK_00116368;
            bVar13 = auVar73._12_4_ == _UNK_0011636c;
            *(uint *)*pauVar9 =
                 -(uint)(auVar73._0_4_ == __LC22) & (uint)(*(float *)*pauVar9 - fVar48 * fVar104);
            *(uint *)(*pauVar9 + 4) = -(uint)bVar11 & (uint)(fVar3 - fVar48 * fVar105);
            *(uint *)(*pauVar9 + 8) = -(uint)bVar12 & (uint)(fVar62 - fVar48 * fVar88);
            *(uint *)(*pauVar9 + 0xc) = -(uint)bVar13 & (uint)(fVar87 - fVar48 * fVar88);
            fVar48 = pfVar37[0x27];
            fVar3 = pfVar37[0x28];
            fVar62 = pfVar37[0x29];
            fVar87 = *(float *)(pauVar9[1] + 4);
            fVar47 = *(float *)(pauVar9[1] + 8);
            fVar61 = *(float *)(pauVar9[1] + 0xc);
            *(float *)pauVar9[1] = *(float *)pauVar9[1] - pfVar37[0x26] * fVar77;
            *(float *)(pauVar9[1] + 4) = fVar87 - fVar48 * fVar77;
            *(float *)(pauVar9[1] + 8) = fVar47 - fVar3 * fVar77;
            *(float *)(pauVar9[1] + 0xc) = fVar61 - fVar62 * fVar77;
            pfVar37 = pfVar38;
          } while (pfVar38 != pfVar2);
LAB_00109c11:
          iVar36 = _UNK_0011636c;
          iVar35 = _UNK_00116368;
          iVar34 = _UNK_00116364;
          iVar33 = __LC22;
          auVar79 = *(undefined1 (*) [16])(plVar44 + 3);
          auVar28._4_4_ = _UNK_00116364;
          auVar28._0_4_ = __LC22;
          auVar28._8_4_ = _UNK_00116368;
          auVar28._12_4_ = _UNK_0011636c;
          do {
            auVar83 = *pauVar9;
            fVar105 = *(float *)(plVar44 + 5);
            fVar104 = pfVar40[0xf];
            fVar48 = ((((auVar83._8_4_ - *(float *)(*pauVar10 + 8)) * auVar79._8_4_ +
                        (auVar83._4_4_ - *(float *)(*pauVar10 + 4)) * auVar79._4_4_ +
                        (auVar83._0_4_ - *(float *)*pauVar10) * auVar79._0_4_ + 0.0 +
                       (float)((ulong)*(undefined8 *)pauVar9[1] >> 0x20) * pfVar40[1] +
                       (float)*(undefined8 *)pauVar9[1] * *pfVar40 + 0.0 +
                       (float)*(undefined8 *)(pauVar9[1] + 8) * pfVar40[2]) -
                      ((float)((ulong)*(undefined8 *)pauVar10[1] >> 0x20) * pfVar40[4] +
                       (float)*(undefined8 *)pauVar10[1] * pfVar40[3] + 0.0 +
                      (float)*(undefined8 *)(pauVar10[1] + 8) * pfVar40[5])) -
                     (pfVar40[0xe] * fVar104 + pfVar40[0xd])) * pfVar40[0xc] + fVar104;
            if (0.0 <= fVar48) {
              if (_LC23 < fVar48) {
                fVar48 = _LC23;
              }
            }
            else {
              fVar48 = 0.0;
            }
            pfVar40[0xf] = fVar48;
            fVar48 = fVar48 - fVar104;
            if (fVar48 != 0.0) {
              fVar105 = fVar105 * fVar48;
              bVar6 = pauVar9[7][10];
              auVar53._1_3_ = 0;
              auVar53[0] = bVar6;
              uVar43 = 1;
              auVar53[4] = bVar6;
              auVar53._5_3_ = 0;
              auVar53[8] = bVar6;
              auVar53._9_3_ = 0;
              auVar53[0xc] = bVar6;
              auVar53._13_3_ = 0;
              auVar53 = auVar53 & auVar28;
              fVar104 = *(float *)pauVar9[1];
              fVar88 = *(float *)(pauVar9[1] + 4);
              fVar92 = *(float *)(pauVar9[1] + 8);
              fVar96 = *(float *)(pauVar9[1] + 0xc);
              *(uint *)*pauVar9 =
                   (uint)(auVar83._0_4_ - fVar105 * auVar79._0_4_) &
                   -(uint)(auVar53._0_4_ == iVar33);
              *(uint *)(*pauVar9 + 4) =
                   (uint)(auVar83._4_4_ - fVar105 * auVar79._4_4_) &
                   -(uint)(auVar53._4_4_ == iVar34);
              *(uint *)(*pauVar9 + 8) =
                   (uint)(auVar83._8_4_ - fVar105 * auVar79._8_4_) &
                   -(uint)(auVar53._8_4_ == iVar35);
              *(uint *)(*pauVar9 + 0xc) =
                   (uint)(auVar83._12_4_ - fVar105 * auVar79._12_4_) &
                   -(uint)(auVar53._12_4_ == iVar36);
              auVar54._0_4_ = fVar104 - pfVar40[6] * fVar48;
              auVar54._4_4_ = fVar88 - pfVar40[7] * fVar48;
              auVar54._8_4_ = fVar92 - pfVar40[8] * fVar48;
              auVar54._12_4_ = fVar96 - pfVar40[9] * fVar48;
              pauVar9[1] = auVar54;
            }
            pfVar40 = pfVar40 + 0x32;
          } while (pfVar2 != pfVar40);
LAB_00108760:
          uVar46 = uVar46 | uVar43;
        }
      }
      else if (cVar5 == '\x02') {
        fVar105 = *(float *)(plVar44 + 3);
        fVar104 = *(float *)((long)plVar44 + 0x1c);
        fVar48 = *(float *)(plVar44 + 4);
        if ((float)((uint)fVar104 & _LC10) < (float)(_LC10 & (uint)fVar105)) {
          auVar74._4_4_ = 0;
          auVar74._0_4_ = fVar48;
          auVar74._12_4_ = (uint)fVar105 ^ _LC20;
          auVar74._8_4_ = (uint)fVar105 ^ _LC20;
          auVar84._0_4_ = SQRT(fVar105 * fVar105 + fVar48 * fVar48);
          auVar84._4_4_ = auVar84._0_4_;
          auVar84._8_4_ = auVar84._0_4_;
          auVar84._12_4_ = auVar84._0_4_;
          local_48 = divps(auVar74,auVar84);
        }
        else {
          auVar17._8_4_ = (uint)fVar104 ^ _LC20;
          auVar17._4_4_ = (uint)fVar104 ^ _LC20;
          auVar17._0_4_ = fVar48;
          auVar17._12_4_ = 0;
          fVar88 = SQRT(fVar104 * fVar104 + fVar48 * fVar48);
          auVar70._4_4_ = fVar88;
          auVar70._0_4_ = fVar88;
          auVar70._8_4_ = fVar88;
          auVar70._12_4_ = fVar88;
          local_48 = divps(auVar17 << 0x20,auVar70);
        }
        fVar92 = local_48._0_4_;
        fVar96 = local_48._4_4_;
        fVar103 = local_48._8_4_;
        pfVar40 = (float *)(plVar44 + 8);
        pfVar2 = pfVar40 + (ulong)*(uint *)(plVar44 + 7) * 0x32;
        fVar88 = fVar96 * fVar105 - fVar104 * fVar92;
        fVar104 = fVar103 * fVar104 - fVar48 * fVar96;
        fVar105 = fVar92 * fVar48 - fVar105 * fVar103;
        if ((ulong)*(uint *)(plVar44 + 7) * 200 != 0) {
          uVar43 = 0;
          pfVar37 = pfVar40;
          do {
            while( true ) {
              if ((pfVar37[0x1c] != 0.0) || (pfVar37[0x2c] != 0.0)) break;
LAB_00109408:
              pfVar37 = pfVar37 + 0x32;
              if (pfVar37 == pfVar2) goto LAB_00109700;
            }
            auVar79 = *pauVar9;
            fVar93 = auVar79._0_4_ - *(float *)*pauVar10;
            fVar97 = auVar79._4_4_ - *(float *)(*pauVar10 + 4);
            fVar98 = auVar79._8_4_ - *(float *)(*pauVar10 + 8);
            fVar62 = (float)*(undefined8 *)pauVar9[1];
            fVar101 = (float)((ulong)*(undefined8 *)pauVar9[1] >> 0x20);
            fVar61 = (float)*(undefined8 *)(pauVar9[1] + 8);
            fVar48 = pfVar37[0x1f];
            fVar3 = pfVar37[0x2f];
            fVar87 = (float)*(undefined8 *)pauVar10[1];
            fVar47 = (float)((ulong)*(undefined8 *)pauVar10[1] >> 0x20);
            fVar76 = (float)*(undefined8 *)(pauVar10[1] + 8);
            fVar77 = (((fVar88 * fVar98 + fVar97 * fVar105 + fVar93 * fVar104 + 0.0 +
                       fVar61 * pfVar37[0x22] +
                       fVar101 * pfVar37[0x21] + fVar62 * pfVar37[0x20] + 0.0) -
                      (fVar76 * pfVar37[0x25] +
                      fVar47 * pfVar37[0x24] + fVar87 * pfVar37[0x23] + 0.0)) -
                     (pfVar37[0x2e] * fVar3 + pfVar37[0x2d])) * pfVar37[0x2c] + fVar3;
            fVar62 = (((pfVar37[0x12] * fVar61 +
                        pfVar37[0x11] * fVar101 + pfVar37[0x10] * fVar62 + 0.0 +
                       fVar103 * fVar98 + fVar96 * fVar97 + fVar92 * fVar93 + 0.0) -
                      (pfVar37[0x15] * fVar76 +
                      fVar47 * pfVar37[0x14] + pfVar37[0x13] * fVar87 + 0.0)) -
                     (pfVar37[0x1e] * fVar48 + pfVar37[0x1d])) * pfVar37[0x1c] + fVar48;
            fVar47 = fVar62 * fVar62 + fVar77 * fVar77;
            fVar87 = *(float *)((long)plVar44 + 0x24) * pfVar37[0xf];
            if (fVar87 * fVar87 < fVar47) {
              fVar87 = fVar87 / SQRT(fVar47);
              fVar62 = fVar62 * fVar87;
              fVar77 = fVar77 * fVar87;
            }
            fVar87 = *(float *)(plVar44 + 6);
            fVar47 = *(float *)(plVar44 + 5);
            pfVar37[0x1f] = fVar62;
            iVar36 = _UNK_0011636c;
            iVar35 = _UNK_00116368;
            iVar34 = _UNK_00116364;
            iVar33 = __LC22;
            fVar62 = fVar62 - fVar48;
            if (fVar62 != 0.0) {
              fVar47 = fVar47 * fVar62;
              bVar6 = pauVar9[7][10];
              auVar26._4_4_ = _UNK_00116364;
              auVar26._0_4_ = __LC22;
              auVar26._8_4_ = _UNK_00116368;
              auVar26._12_4_ = _UNK_0011636c;
              fVar87 = fVar87 * fVar62;
              auVar60._1_3_ = 0;
              auVar60[0] = bVar6;
              bVar7 = pauVar10[7][10];
              auVar60[4] = bVar6;
              auVar60._5_3_ = 0;
              auVar60[8] = bVar6;
              auVar60._9_3_ = 0;
              auVar60[0xc] = bVar6;
              auVar60._13_3_ = 0;
              auVar60 = auVar60 & auVar26;
              auVar107._0_4_ =
                   (uint)(auVar79._0_4_ - fVar47 * fVar92) & -(uint)(auVar60._0_4_ == __LC22);
              auVar107._4_4_ =
                   (uint)(auVar79._4_4_ - fVar47 * fVar96) & -(uint)(auVar60._4_4_ == _UNK_00116364)
              ;
              auVar107._8_4_ =
                   (uint)(auVar79._8_4_ - fVar47 * fVar103) &
                   -(uint)(auVar60._8_4_ == _UNK_00116368);
              auVar107._12_4_ =
                   (uint)(auVar79._12_4_ - fVar47 * local_48._12_4_) &
                   -(uint)(auVar60._12_4_ == _UNK_0011636c);
              fVar48 = *(float *)pauVar9[1];
              fVar47 = *(float *)(pauVar9[1] + 4);
              fVar61 = *(float *)(pauVar9[1] + 8);
              fVar76 = *(float *)(pauVar9[1] + 0xc);
              *pauVar9 = auVar107;
              fVar93 = pfVar37[0x17];
              fVar97 = pfVar37[0x18];
              fVar98 = pfVar37[0x19];
              *(float *)pauVar9[1] = fVar48 - pfVar37[0x16] * fVar62;
              *(float *)(pauVar9[1] + 4) = fVar47 - fVar93 * fVar62;
              *(float *)(pauVar9[1] + 8) = fVar61 - fVar97 * fVar62;
              *(float *)(pauVar9[1] + 0xc) = fVar76 - fVar98 * fVar62;
              auVar95._1_3_ = 0;
              auVar95[0] = bVar7;
              uVar43 = 1;
              auVar95[4] = bVar7;
              auVar95._5_3_ = 0;
              auVar95[8] = bVar7;
              auVar95._9_3_ = 0;
              auVar95[0xc] = bVar7;
              auVar95._13_3_ = 0;
              auVar95 = auVar95 & auVar26;
              fVar48 = *(float *)(*pauVar10 + 4);
              fVar47 = *(float *)(*pauVar10 + 8);
              fVar61 = *(float *)(*pauVar10 + 0xc);
              *(uint *)*pauVar10 =
                   (uint)(fVar87 * fVar92 + *(float *)*pauVar10) & -(uint)(auVar95._0_4_ == iVar33);
              *(uint *)(*pauVar10 + 4) =
                   (uint)(fVar87 * fVar96 + fVar48) & -(uint)(auVar95._4_4_ == iVar34);
              *(uint *)(*pauVar10 + 8) =
                   (uint)(fVar87 * fVar103 + fVar47) & -(uint)(auVar95._8_4_ == iVar35);
              *(uint *)(*pauVar10 + 0xc) =
                   (uint)(fVar87 * local_48._12_4_ + fVar61) & -(uint)(auVar95._12_4_ == iVar36);
              fVar48 = pfVar37[0x1a];
              fVar87 = pfVar37[0x1b];
              fVar47 = pfVar37[0x1c];
              fVar61 = *(float *)(pauVar10[1] + 4);
              fVar76 = *(float *)(pauVar10[1] + 8);
              fVar93 = *(float *)(pauVar10[1] + 0xc);
              *(float *)pauVar10[1] = pfVar37[0x19] * fVar62 + *(float *)pauVar10[1];
              *(float *)(pauVar10[1] + 4) = fVar48 * fVar62 + fVar61;
              *(float *)(pauVar10[1] + 8) = fVar87 * fVar62 + fVar76;
              *(float *)(pauVar10[1] + 0xc) = fVar47 * fVar62 + fVar93;
            }
            fVar48 = *(float *)(plVar44 + 6);
            fVar62 = *(float *)(plVar44 + 5);
            pfVar37[0x2f] = fVar77;
            iVar36 = _UNK_0011636c;
            iVar35 = _UNK_00116368;
            iVar34 = _UNK_00116364;
            iVar33 = __LC22;
            fVar77 = fVar77 - fVar3;
            if (fVar77 == 0.0) goto LAB_00109408;
            fVar62 = fVar62 * fVar77;
            bVar6 = pauVar9[7][10];
            pfVar38 = pfVar37 + 0x32;
            fVar3 = *(float *)(*pauVar9 + 4);
            fVar87 = *(float *)(*pauVar9 + 8);
            fVar47 = *(float *)(*pauVar9 + 0xc);
            fVar48 = fVar48 * fVar77;
            auVar71._1_3_ = 0;
            auVar71[0] = bVar6;
            bVar7 = pauVar10[7][10];
            auVar94._4_4_ = _UNK_00116364;
            auVar94._0_4_ = __LC22;
            auVar94._8_4_ = _UNK_00116368;
            auVar94._12_4_ = _UNK_0011636c;
            auVar71[4] = bVar6;
            auVar71._5_3_ = 0;
            auVar71[8] = bVar6;
            auVar71._9_3_ = 0;
            auVar71[0xc] = bVar6;
            auVar71._13_3_ = 0;
            auVar71 = auVar71 & auVar94;
            bVar11 = auVar71._4_4_ == _UNK_00116364;
            bVar12 = auVar71._8_4_ == _UNK_00116368;
            bVar13 = auVar71._12_4_ == _UNK_0011636c;
            auVar99._1_3_ = 0;
            auVar99[0] = bVar7;
            uVar43 = 1;
            *(uint *)*pauVar9 =
                 (uint)(*(float *)*pauVar9 - fVar62 * fVar104) & -(uint)(auVar71._0_4_ == __LC22);
            *(uint *)(*pauVar9 + 4) = (uint)(fVar3 - fVar62 * fVar105) & -(uint)bVar11;
            *(uint *)(*pauVar9 + 8) = (uint)(fVar87 - fVar62 * fVar88) & -(uint)bVar12;
            *(uint *)(*pauVar9 + 0xc) = (uint)(fVar47 - fVar62 * fVar88) & -(uint)bVar13;
            auVar99[4] = bVar7;
            auVar99._5_3_ = 0;
            auVar99[8] = bVar7;
            auVar99._9_3_ = 0;
            auVar99[0xc] = bVar7;
            auVar99._13_3_ = 0;
            auVar94 = auVar94 & auVar99;
            auVar102._0_4_ = *(float *)pauVar9[1] - pfVar37[0x26] * fVar77;
            auVar102._4_4_ = *(float *)(pauVar9[1] + 4) - pfVar37[0x27] * fVar77;
            auVar102._8_4_ = *(float *)(pauVar9[1] + 8) - pfVar37[0x28] * fVar77;
            auVar102._12_4_ = *(float *)(pauVar9[1] + 0xc) - pfVar37[0x29] * fVar77;
            pauVar9[1] = auVar102;
            fVar3 = *(float *)(*pauVar10 + 4);
            fVar62 = *(float *)(*pauVar10 + 8);
            fVar87 = *(float *)(*pauVar10 + 0xc);
            *(uint *)*pauVar10 =
                 (uint)(fVar48 * fVar104 + *(float *)*pauVar10) & -(uint)(iVar33 == auVar94._0_4_);
            *(uint *)(*pauVar10 + 4) =
                 (uint)(fVar48 * fVar105 + fVar3) & -(uint)(iVar34 == auVar94._4_4_);
            *(uint *)(*pauVar10 + 8) =
                 (uint)(fVar48 * fVar88 + fVar62) & -(uint)(iVar35 == auVar94._8_4_);
            *(uint *)(*pauVar10 + 0xc) =
                 (uint)(fVar48 * fVar88 + fVar87) & -(uint)(iVar36 == auVar94._12_4_);
            fVar48 = pfVar37[0x2a];
            fVar3 = pfVar37[0x2b];
            fVar62 = pfVar37[0x2c];
            fVar87 = *(float *)(pauVar10[1] + 4);
            fVar47 = *(float *)(pauVar10[1] + 8);
            fVar61 = *(float *)(pauVar10[1] + 0xc);
            *(float *)pauVar10[1] = pfVar37[0x29] * fVar77 + *(float *)pauVar10[1];
            *(float *)(pauVar10[1] + 4) = fVar48 * fVar77 + fVar87;
            *(float *)(pauVar10[1] + 8) = fVar3 * fVar77 + fVar47;
            *(float *)(pauVar10[1] + 0xc) = fVar62 * fVar77 + fVar61;
            pfVar37 = pfVar38;
          } while (pfVar38 != pfVar2);
LAB_00109700:
          iVar36 = _UNK_0011636c;
          iVar35 = _UNK_00116368;
          iVar34 = _UNK_00116364;
          iVar33 = __LC22;
          auVar79 = *(undefined1 (*) [16])(plVar44 + 3);
          fVar105 = auVar79._0_4_;
          fVar104 = auVar79._4_4_;
          fVar48 = auVar79._8_4_;
          auVar25._4_4_ = _UNK_00116364;
          auVar25._0_4_ = __LC22;
          auVar25._8_4_ = _UNK_00116368;
          auVar25._12_4_ = _UNK_0011636c;
          do {
            auVar83 = *pauVar9;
            fVar88 = *(float *)(plVar44 + 6);
            fVar92 = *(float *)(plVar44 + 5);
            fVar96 = pfVar40[0xf];
            fVar103 = ((((auVar83._8_4_ - *(float *)(*pauVar10 + 8)) * fVar48 +
                         (auVar83._4_4_ - *(float *)(*pauVar10 + 4)) * fVar104 +
                         (auVar83._0_4_ - *(float *)*pauVar10) * fVar105 + 0.0 +
                        (float)*(undefined8 *)(pauVar9[1] + 8) * pfVar40[2] +
                        (float)((ulong)*(undefined8 *)pauVar9[1] >> 0x20) * pfVar40[1] +
                        (float)*(undefined8 *)pauVar9[1] * *pfVar40 + 0.0) -
                       ((float)((ulong)*(undefined8 *)pauVar10[1] >> 0x20) * pfVar40[4] +
                        (float)*(undefined8 *)pauVar10[1] * pfVar40[3] + 0.0 +
                       (float)*(undefined8 *)(pauVar10[1] + 8) * pfVar40[5])) -
                      (pfVar40[0xe] * fVar96 + pfVar40[0xd])) * pfVar40[0xc] + fVar96;
            if (0.0 <= fVar103) {
              if (_LC23 < fVar103) {
                fVar103 = _LC23;
              }
            }
            else {
              fVar103 = 0.0;
            }
            pfVar40[0xf] = fVar103;
            fVar103 = fVar103 - fVar96;
            if (fVar103 != 0.0) {
              fVar92 = fVar92 * fVar103;
              bVar6 = pauVar9[7][10];
              fVar88 = fVar88 * fVar103;
              auVar55._1_3_ = 0;
              auVar55[0] = bVar6;
              bVar7 = pauVar10[7][10];
              auVar55[4] = bVar6;
              auVar55._5_3_ = 0;
              auVar55[8] = bVar6;
              auVar55._9_3_ = 0;
              auVar55[0xc] = bVar6;
              auVar55._13_3_ = 0;
              auVar55 = auVar55 & auVar25;
              fVar96 = *(float *)pauVar9[1];
              fVar3 = *(float *)(pauVar9[1] + 4);
              fVar62 = *(float *)(pauVar9[1] + 8);
              fVar87 = *(float *)(pauVar9[1] + 0xc);
              *(uint *)*pauVar9 =
                   (uint)(auVar83._0_4_ - fVar92 * fVar105) & -(uint)(auVar55._0_4_ == iVar33);
              *(uint *)(*pauVar9 + 4) =
                   (uint)(auVar83._4_4_ - fVar92 * fVar104) & -(uint)(auVar55._4_4_ == iVar34);
              *(uint *)(*pauVar9 + 8) =
                   (uint)(auVar83._8_4_ - fVar92 * fVar48) & -(uint)(auVar55._8_4_ == iVar35);
              *(uint *)(*pauVar9 + 0xc) =
                   (uint)(auVar83._12_4_ - fVar92 * auVar79._12_4_) &
                   -(uint)(auVar55._12_4_ == iVar36);
              fVar92 = pfVar40[7];
              fVar47 = pfVar40[8];
              fVar61 = pfVar40[9];
              *(float *)pauVar9[1] = fVar96 - pfVar40[6] * fVar103;
              *(float *)(pauVar9[1] + 4) = fVar3 - fVar92 * fVar103;
              *(float *)(pauVar9[1] + 8) = fVar62 - fVar47 * fVar103;
              *(float *)(pauVar9[1] + 0xc) = fVar87 - fVar61 * fVar103;
              auVar86._1_3_ = 0;
              auVar86[0] = bVar7;
              uVar43 = 1;
              auVar86[4] = bVar7;
              auVar86._5_3_ = 0;
              auVar86[8] = bVar7;
              auVar86._9_3_ = 0;
              auVar86[0xc] = bVar7;
              auVar86._13_3_ = 0;
              auVar86 = auVar86 & auVar25;
              fVar92 = *(float *)(*pauVar10 + 4);
              fVar96 = *(float *)(*pauVar10 + 8);
              fVar3 = *(float *)(*pauVar10 + 0xc);
              *(uint *)*pauVar10 =
                   (uint)(fVar88 * fVar105 + *(float *)*pauVar10) & -(uint)(auVar86._0_4_ == iVar33)
              ;
              *(uint *)(*pauVar10 + 4) =
                   (uint)(fVar88 * fVar104 + fVar92) & -(uint)(auVar86._4_4_ == iVar34);
              *(uint *)(*pauVar10 + 8) =
                   (uint)(fVar88 * fVar48 + fVar96) & -(uint)(auVar86._8_4_ == iVar35);
              *(uint *)(*pauVar10 + 0xc) =
                   (uint)(fVar88 * auVar79._12_4_ + fVar3) & -(uint)(auVar86._12_4_ == iVar36);
              auVar56._0_4_ = pfVar40[9] * fVar103 + *(float *)pauVar10[1];
              auVar56._4_4_ = pfVar40[10] * fVar103 + *(float *)(pauVar10[1] + 4);
              auVar56._8_4_ = pfVar40[0xb] * fVar103 + *(float *)(pauVar10[1] + 8);
              auVar56._12_4_ = pfVar40[0xc] * fVar103 + *(float *)(pauVar10[1] + 0xc);
              pauVar10[1] = auVar56;
            }
            pfVar40 = pfVar40 + 0x32;
          } while (pfVar2 != pfVar40);
          goto LAB_00108760;
        }
      }
      else if (cVar5 == '\0') {
        fVar105 = *(float *)(plVar44 + 3);
        fVar104 = *(float *)((long)plVar44 + 0x1c);
        fVar48 = *(float *)(plVar44 + 4);
        if ((float)((uint)fVar104 & _LC10) < (float)(_LC10 & (uint)fVar105)) {
          auVar75._12_4_ = (uint)fVar105 ^ _LC20;
          auVar75._8_4_ = (uint)fVar105 ^ _LC20;
          auVar75._4_4_ = 0;
          auVar75._0_4_ = fVar48;
          auVar85._0_4_ = SQRT(fVar105 * fVar105 + fVar48 * fVar48);
          auVar85._4_4_ = auVar85._0_4_;
          auVar85._8_4_ = auVar85._0_4_;
          auVar85._12_4_ = auVar85._0_4_;
          auVar79 = divps(auVar75,auVar85);
        }
        else {
          auVar14._8_4_ = (uint)fVar104 ^ _LC20;
          auVar14._4_4_ = (uint)fVar104 ^ _LC20;
          auVar14._0_4_ = fVar48;
          auVar14._12_4_ = 0;
          fVar88 = SQRT(fVar104 * fVar104 + fVar48 * fVar48);
          auVar65._4_4_ = fVar88;
          auVar65._0_4_ = fVar88;
          auVar65._8_4_ = fVar88;
          auVar65._12_4_ = fVar88;
          auVar79 = divps(auVar14 << 0x20,auVar65);
        }
        fVar92 = auVar79._0_4_;
        fVar96 = auVar79._4_4_;
        fVar103 = auVar79._8_4_;
        pfVar40 = (float *)(plVar44 + 8);
        pfVar2 = pfVar40 + (ulong)*(uint *)(plVar44 + 7) * 0x32;
        fVar88 = fVar96 * fVar105 - fVar104 * fVar92;
        fVar104 = fVar103 * fVar104 - fVar48 * fVar96;
        fVar105 = fVar92 * fVar48 - fVar105 * fVar103;
        if ((ulong)*(uint *)(plVar44 + 7) * 200 != 0) {
          uVar43 = 0;
          pfVar37 = pfVar40;
          do {
            while( true ) {
              if ((pfVar37[0x1c] != 0.0) || (pfVar37[0x2c] != 0.0)) break;
LAB_001088a8:
              pfVar37 = pfVar37 + 0x32;
              if (pfVar37 == pfVar2) goto LAB_00108ae7;
            }
            fVar47 = (float)*(undefined8 *)*pauVar9;
            fVar62 = (float)*(undefined8 *)(*pauVar9 + 8);
            fVar93 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
            fVar87 = (float)*(undefined8 *)pauVar9[1];
            fVar77 = (float)((ulong)*(undefined8 *)pauVar9[1] >> 0x20);
            fVar48 = pfVar37[0x1f];
            fVar61 = (float)*(undefined8 *)(pauVar9[1] + 8);
            fVar76 = ((fVar103 * fVar62 + fVar96 * fVar93 + fVar92 * fVar47 + 0.0 +
                      pfVar37[0x12] * fVar61 + pfVar37[0x11] * fVar77 + pfVar37[0x10] * fVar87 + 0.0
                      ) - (pfVar37[0x1e] * fVar48 + pfVar37[0x1d])) * pfVar37[0x1c] + fVar48;
            fVar3 = pfVar37[0x2f];
            fVar62 = ((fVar88 * fVar62 + fVar105 * fVar93 + fVar47 * fVar104 + 0.0 +
                      fVar61 * pfVar37[0x22] + pfVar37[0x21] * fVar77 + pfVar37[0x20] * fVar87 + 0.0
                      ) - (pfVar37[0x2e] * fVar3 + pfVar37[0x2d])) * pfVar37[0x2c] + fVar3;
            fVar47 = fVar76 * fVar76 + fVar62 * fVar62;
            fVar87 = *(float *)((long)plVar44 + 0x24) * pfVar37[0xf];
            if (fVar87 * fVar87 < fVar47) {
              fVar87 = fVar87 / SQRT(fVar47);
              fVar76 = fVar76 * fVar87;
              fVar62 = fVar62 * fVar87;
            }
            fVar87 = *(float *)(plVar44 + 5);
            pfVar37[0x1f] = fVar76;
            fVar76 = fVar76 - fVar48;
            if (fVar76 != 0.0) {
              bVar6 = pauVar9[7][10];
              fVar87 = fVar87 * fVar76;
              auVar91._1_3_ = 0;
              auVar91[0] = bVar6;
              uVar43 = 1;
              auVar91[4] = bVar6;
              auVar91._5_3_ = 0;
              auVar91[8] = bVar6;
              auVar91._9_3_ = 0;
              auVar91[0xc] = bVar6;
              auVar91._13_3_ = 0;
              auVar24._4_4_ = _UNK_00116364;
              auVar24._0_4_ = __LC22;
              auVar24._8_4_ = _UNK_00116368;
              auVar24._12_4_ = _UNK_0011636c;
              auVar91 = auVar91 & auVar24;
              auVar100._0_4_ =
                   (uint)(*(float *)*pauVar9 - fVar87 * fVar92) & -(uint)(auVar91._0_4_ == __LC22);
              auVar100._4_4_ =
                   (uint)(*(float *)(*pauVar9 + 4) - fVar87 * fVar96) &
                   -(uint)(auVar91._4_4_ == _UNK_00116364);
              auVar100._8_4_ =
                   (uint)(*(float *)(*pauVar9 + 8) - fVar87 * fVar103) &
                   -(uint)(auVar91._8_4_ == _UNK_00116368);
              auVar100._12_4_ =
                   (uint)(*(float *)(*pauVar9 + 0xc) - fVar87 * auVar79._12_4_) &
                   -(uint)(auVar91._12_4_ == _UNK_0011636c);
              *pauVar9 = auVar100;
              fVar48 = pfVar37[0x17];
              fVar87 = pfVar37[0x18];
              fVar47 = pfVar37[0x19];
              fVar61 = *(float *)(pauVar9[1] + 4);
              fVar77 = *(float *)(pauVar9[1] + 8);
              fVar93 = *(float *)(pauVar9[1] + 0xc);
              *(float *)pauVar9[1] = *(float *)pauVar9[1] - pfVar37[0x16] * fVar76;
              *(float *)(pauVar9[1] + 4) = fVar61 - fVar48 * fVar76;
              *(float *)(pauVar9[1] + 8) = fVar77 - fVar87 * fVar76;
              *(float *)(pauVar9[1] + 0xc) = fVar93 - fVar47 * fVar76;
            }
            fVar48 = *(float *)(plVar44 + 5);
            pfVar37[0x2f] = fVar62;
            fVar62 = fVar62 - fVar3;
            if (fVar62 == 0.0) goto LAB_001088a8;
            fVar48 = fVar48 * fVar62;
            bVar6 = pauVar9[7][10];
            pfVar38 = pfVar37 + 0x32;
            auVar49._1_3_ = 0;
            auVar49[0] = bVar6;
            uVar43 = 1;
            fVar3 = *(float *)(*pauVar9 + 4);
            fVar87 = *(float *)(*pauVar9 + 8);
            fVar47 = *(float *)(*pauVar9 + 0xc);
            auVar49[4] = bVar6;
            auVar49._5_3_ = 0;
            auVar49[8] = bVar6;
            auVar49._9_3_ = 0;
            auVar49[0xc] = bVar6;
            auVar49._13_3_ = 0;
            auVar22._4_4_ = _UNK_00116364;
            auVar22._0_4_ = __LC22;
            auVar22._8_4_ = _UNK_00116368;
            auVar22._12_4_ = _UNK_0011636c;
            auVar49 = auVar49 & auVar22;
            bVar11 = auVar49._4_4_ == _UNK_00116364;
            bVar12 = auVar49._8_4_ == _UNK_00116368;
            bVar13 = auVar49._12_4_ == _UNK_0011636c;
            *(uint *)*pauVar9 =
                 -(uint)(auVar49._0_4_ == __LC22) & (uint)(*(float *)*pauVar9 - fVar48 * fVar104);
            *(uint *)(*pauVar9 + 4) = -(uint)bVar11 & (uint)(fVar3 - fVar48 * fVar105);
            *(uint *)(*pauVar9 + 8) = -(uint)bVar12 & (uint)(fVar87 - fVar48 * fVar88);
            *(uint *)(*pauVar9 + 0xc) = -(uint)bVar13 & (uint)(fVar47 - fVar48 * fVar88);
            auVar83 = *(undefined1 (*) [16])(pfVar37 + 0x26);
            auVar50._0_4_ = *(float *)pauVar9[1] - fVar62 * auVar83._0_4_;
            auVar50._4_4_ = *(float *)(pauVar9[1] + 4) - fVar62 * auVar83._4_4_;
            auVar50._8_4_ = *(float *)(pauVar9[1] + 8) - fVar62 * auVar83._8_4_;
            auVar50._12_4_ = *(float *)(pauVar9[1] + 0xc) - fVar62 * auVar83._12_4_;
            pauVar9[1] = auVar50;
            pfVar37 = pfVar38;
          } while (pfVar38 != pfVar2);
LAB_00108ae7:
          iVar36 = _UNK_0011636c;
          iVar35 = _UNK_00116368;
          iVar34 = _UNK_00116364;
          iVar33 = __LC22;
          auVar79 = *(undefined1 (*) [16])(plVar44 + 3);
          auVar23._4_4_ = _UNK_00116364;
          auVar23._0_4_ = __LC22;
          auVar23._8_4_ = _UNK_00116368;
          auVar23._12_4_ = _UNK_0011636c;
          do {
            fVar105 = pfVar40[0xf];
            fVar104 = *(float *)(plVar44 + 5);
            fVar48 = (((float)*(undefined8 *)(pauVar9[1] + 8) * pfVar40[2] +
                       (float)((ulong)*(undefined8 *)pauVar9[1] >> 0x20) * pfVar40[1] +
                       (float)*(undefined8 *)pauVar9[1] * *pfVar40 + 0.0 +
                      (float)*(undefined8 *)(*pauVar9 + 8) * auVar79._8_4_ +
                      (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20) * auVar79._4_4_ +
                      (float)*(undefined8 *)*pauVar9 * auVar79._0_4_ + 0.0) -
                     (pfVar40[0xe] * fVar105 + pfVar40[0xd])) * pfVar40[0xc] + fVar105;
            if (0.0 <= fVar48) {
              if (_LC23 < fVar48) {
                fVar48 = _LC23;
              }
            }
            else {
              fVar48 = 0.0;
            }
            pfVar40[0xf] = fVar48;
            fVar48 = fVar48 - fVar105;
            if (fVar48 != 0.0) {
              fVar104 = fVar104 * fVar48;
              bVar6 = pauVar9[7][10];
              fVar105 = *(float *)(*pauVar9 + 4);
              fVar88 = *(float *)(*pauVar9 + 8);
              fVar92 = *(float *)(*pauVar9 + 0xc);
              uVar43 = 1;
              auVar57._1_3_ = 0;
              auVar57[0] = bVar6;
              auVar57[4] = bVar6;
              auVar57._5_3_ = 0;
              auVar57[8] = bVar6;
              auVar57._9_3_ = 0;
              auVar57[0xc] = bVar6;
              auVar57._13_3_ = 0;
              auVar57 = auVar57 & auVar23;
              *(uint *)*pauVar9 =
                   -(uint)(auVar57._0_4_ == iVar33) &
                   (uint)(*(float *)*pauVar9 - fVar104 * auVar79._0_4_);
              *(uint *)(*pauVar9 + 4) =
                   -(uint)(auVar57._4_4_ == iVar34) & (uint)(fVar105 - fVar104 * auVar79._4_4_);
              *(uint *)(*pauVar9 + 8) =
                   -(uint)(auVar57._8_4_ == iVar35) & (uint)(fVar88 - fVar104 * auVar79._8_4_);
              *(uint *)(*pauVar9 + 0xc) =
                   -(uint)(auVar57._12_4_ == iVar36) & (uint)(fVar92 - fVar104 * auVar79._12_4_);
              auVar58._0_4_ = *(float *)pauVar9[1] - fVar48 * pfVar40[6];
              auVar58._4_4_ = *(float *)(pauVar9[1] + 4) - fVar48 * pfVar40[7];
              auVar58._8_4_ = *(float *)(pauVar9[1] + 8) - fVar48 * pfVar40[8];
              auVar58._12_4_ = *(float *)(pauVar9[1] + 0xc) - fVar48 * pfVar40[9];
              pauVar9[1] = auVar58;
            }
            pfVar40 = pfVar40 + 0x32;
          } while (pfVar2 != pfVar40);
          goto LAB_00109178;
        }
      }
      goto LAB_00108763;
    }
    if (cVar4 != '\0') goto LAB_00108763;
    fVar105 = *(float *)(plVar44 + 3);
    fVar104 = *(float *)((long)plVar44 + 0x1c);
    fVar48 = *(float *)(plVar44 + 4);
    if ((float)(_LC10 & (uint)fVar105) <= (float)((uint)fVar104 & _LC10)) {
      auVar16._8_4_ = (uint)fVar104 ^ _LC20;
      auVar16._4_4_ = (uint)fVar104 ^ _LC20;
      auVar16._0_4_ = fVar48;
      auVar16._12_4_ = 0;
      fVar88 = SQRT(fVar104 * fVar104 + fVar48 * fVar48);
      auVar69._4_4_ = fVar88;
      auVar69._0_4_ = fVar88;
      auVar69._8_4_ = fVar88;
      auVar69._12_4_ = fVar88;
      auVar79 = divps(auVar16 << 0x20,auVar69);
    }
    else {
      auVar78._4_4_ = 0;
      auVar78._0_4_ = fVar48;
      auVar78._12_4_ = (uint)fVar105 ^ _LC20;
      auVar78._8_4_ = (uint)fVar105 ^ _LC20;
      auVar63._0_4_ = SQRT(fVar105 * fVar105 + fVar48 * fVar48);
      auVar63._4_4_ = auVar63._0_4_;
      auVar63._8_4_ = auVar63._0_4_;
      auVar63._12_4_ = auVar63._0_4_;
      auVar79 = divps(auVar78,auVar63);
    }
    fVar88 = auVar79._0_4_;
    fVar92 = auVar79._4_4_;
    fVar96 = auVar79._8_4_;
    plVar39 = plVar44 + 8;
    plVar1 = plVar39 + (ulong)*(uint *)(plVar44 + 7) * 0x19;
    fVar103 = fVar92 * fVar105 - fVar104 * fVar88;
    fVar104 = fVar96 * fVar104 - fVar48 * fVar92;
    fVar105 = fVar88 * fVar48 - fVar105 * fVar96;
    if ((ulong)*(uint *)(plVar44 + 7) * 200 == 0) goto LAB_00108763;
    uVar45 = 0;
    plVar41 = plVar39;
    do {
      while( true ) {
        if ((*(float *)(plVar41 + 0xe) != 0.0) || (*(float *)(plVar41 + 0x16) != 0.0)) break;
LAB_00108407:
        plVar41 = plVar41 + 0x19;
        if (plVar41 == plVar1) goto LAB_00108640;
      }
      auVar83 = *pauVar10;
      fVar61 = 0.0 - auVar83._0_4_;
      fVar76 = 0.0 - auVar83._4_4_;
      fVar77 = 0.0 - auVar83._8_4_;
      fVar87 = (float)*(undefined8 *)pauVar10[1];
      fVar93 = (float)((ulong)*(undefined8 *)pauVar10[1] >> 0x20);
      fVar62 = (float)*(undefined8 *)(pauVar10[1] + 8);
      fVar48 = *(float *)((long)plVar41 + 0x7c);
      fVar3 = *(float *)((long)plVar41 + 0xbc);
      fVar47 = (((fVar96 * fVar77 + fVar92 * fVar76 + fVar88 * fVar61 + 0.0) -
                (*(float *)((long)plVar41 + 0x54) * fVar62 +
                *(float *)(plVar41 + 10) * fVar93 + *(float *)((long)plVar41 + 0x4c) * fVar87 + 0.0)
                ) - (*(float *)(plVar41 + 0xf) * fVar48 + *(float *)((long)plVar41 + 0x74))) *
               *(float *)(plVar41 + 0xe) + fVar48;
      fVar62 = (((fVar103 * fVar77 + fVar76 * fVar105 + fVar61 * fVar104 + 0.0) -
                (*(float *)((long)plVar41 + 0x94) * fVar62 +
                *(float *)(plVar41 + 0x12) * fVar93 +
                *(float *)((long)plVar41 + 0x8c) * fVar87 + 0.0)) -
               (*(float *)(plVar41 + 0x17) * fVar3 + *(float *)((long)plVar41 + 0xb4))) *
               *(float *)(plVar41 + 0x16) + fVar3;
      fVar61 = fVar47 * fVar47 + fVar62 * fVar62;
      fVar87 = *(float *)((long)plVar44 + 0x24) * *(float *)((long)plVar41 + 0x3c);
      if (fVar87 * fVar87 < fVar61) {
        fVar87 = fVar87 / SQRT(fVar61);
        fVar47 = fVar47 * fVar87;
        fVar62 = fVar62 * fVar87;
      }
      fVar87 = *(float *)(plVar44 + 6);
      *(float *)((long)plVar41 + 0x7c) = fVar47;
      fVar47 = fVar47 - fVar48;
      if (fVar47 != 0.0) {
        fVar87 = fVar87 * fVar47;
        bVar6 = pauVar10[7][10];
        uVar45 = 1;
        auVar90._1_3_ = 0;
        auVar90[0] = bVar6;
        auVar90[4] = bVar6;
        auVar90._5_3_ = 0;
        auVar90[8] = bVar6;
        auVar90._9_3_ = 0;
        auVar90[0xc] = bVar6;
        auVar90._13_3_ = 0;
        auVar21._4_4_ = _UNK_00116364;
        auVar21._0_4_ = __LC22;
        auVar21._8_4_ = _UNK_00116368;
        auVar21._12_4_ = _UNK_0011636c;
        auVar90 = auVar90 & auVar21;
        bVar11 = auVar90._4_4_ == _UNK_00116364;
        bVar12 = auVar90._8_4_ == _UNK_00116368;
        bVar13 = auVar90._12_4_ == _UNK_0011636c;
        *(uint *)*pauVar10 =
             (uint)(fVar87 * fVar88 + auVar83._0_4_) & -(uint)(auVar90._0_4_ == __LC22);
        *(uint *)(*pauVar10 + 4) = (uint)(fVar87 * fVar92 + auVar83._4_4_) & -(uint)bVar11;
        *(uint *)(*pauVar10 + 8) = (uint)(fVar87 * fVar96 + auVar83._8_4_) & -(uint)bVar12;
        *(uint *)(*pauVar10 + 0xc) =
             (uint)(fVar87 * auVar79._12_4_ + auVar83._12_4_) & -(uint)bVar13;
        fVar48 = *(float *)(plVar41 + 0xd);
        fVar87 = *(float *)((long)plVar41 + 0x6c);
        fVar61 = *(float *)(plVar41 + 0xe);
        fVar76 = *(float *)(pauVar10[1] + 4);
        fVar77 = *(float *)(pauVar10[1] + 8);
        fVar93 = *(float *)(pauVar10[1] + 0xc);
        *(float *)pauVar10[1] = *(float *)((long)plVar41 + 100) * fVar47 + *(float *)pauVar10[1];
        *(float *)(pauVar10[1] + 4) = fVar48 * fVar47 + fVar76;
        *(float *)(pauVar10[1] + 8) = fVar87 * fVar47 + fVar77;
        *(float *)(pauVar10[1] + 0xc) = fVar61 * fVar47 + fVar93;
      }
      fVar48 = *(float *)(plVar44 + 6);
      *(float *)((long)plVar41 + 0xbc) = fVar62;
      fVar62 = fVar62 - fVar3;
      if (fVar62 == 0.0) goto LAB_00108407;
      fVar48 = fVar48 * fVar62;
      bVar6 = pauVar10[7][10];
      plVar42 = plVar41 + 0x19;
      uVar45 = 1;
      auVar64._1_3_ = 0;
      auVar64[0] = bVar6;
      auVar64[4] = bVar6;
      auVar64._5_3_ = 0;
      auVar64[8] = bVar6;
      auVar64._9_3_ = 0;
      auVar64[0xc] = bVar6;
      auVar64._13_3_ = 0;
      auVar19._4_4_ = _UNK_00116364;
      auVar19._0_4_ = __LC22;
      auVar19._8_4_ = _UNK_00116368;
      auVar19._12_4_ = _UNK_0011636c;
      auVar64 = auVar64 & auVar19;
      bVar11 = auVar64._4_4_ == _UNK_00116364;
      bVar12 = auVar64._8_4_ == _UNK_00116368;
      bVar13 = auVar64._12_4_ == _UNK_0011636c;
      fVar3 = *(float *)(*pauVar10 + 4);
      fVar87 = *(float *)(*pauVar10 + 8);
      fVar47 = *(float *)(*pauVar10 + 0xc);
      *(uint *)*pauVar10 =
           (uint)(fVar48 * fVar104 + *(float *)*pauVar10) & -(uint)(auVar64._0_4_ == __LC22);
      *(uint *)(*pauVar10 + 4) = (uint)(fVar48 * fVar105 + fVar3) & -(uint)bVar11;
      *(uint *)(*pauVar10 + 8) = (uint)(fVar48 * fVar103 + fVar87) & -(uint)bVar12;
      *(uint *)(*pauVar10 + 0xc) = (uint)(fVar48 * fVar103 + fVar47) & -(uint)bVar13;
      fVar48 = *(float *)(plVar41 + 0x15);
      fVar3 = *(float *)((long)plVar41 + 0xac);
      fVar87 = *(float *)(plVar41 + 0x16);
      fVar47 = *(float *)(pauVar10[1] + 4);
      fVar61 = *(float *)(pauVar10[1] + 8);
      fVar76 = *(float *)(pauVar10[1] + 0xc);
      *(float *)pauVar10[1] = *(float *)((long)plVar41 + 0xa4) * fVar62 + *(float *)pauVar10[1];
      *(float *)(pauVar10[1] + 4) = fVar48 * fVar62 + fVar47;
      *(float *)(pauVar10[1] + 8) = fVar3 * fVar62 + fVar61;
      *(float *)(pauVar10[1] + 0xc) = fVar87 * fVar62 + fVar76;
      plVar41 = plVar42;
    } while (plVar42 != plVar1);
LAB_00108640:
    auVar79 = *(undefined1 (*) [16])(plVar44 + 3);
    do {
      while( true ) {
        uVar43 = uVar45;
        auVar83 = *pauVar10;
        fVar105 = *(float *)(plVar44 + 6);
        fVar104 = *(float *)((long)plVar39 + 0x3c);
        fVar48 = ((((0.0 - auVar83._8_4_) * auVar79._8_4_ +
                   (0.0 - auVar83._4_4_) * auVar79._4_4_ +
                   (0.0 - auVar83._0_4_) * auVar79._0_4_ + 0.0) -
                  ((float)((ulong)*(undefined8 *)pauVar10[1] >> 0x20) * *(float *)(plVar39 + 2) +
                   (float)*(undefined8 *)pauVar10[1] * *(float *)((long)plVar39 + 0xc) + 0.0 +
                  (float)*(undefined8 *)(pauVar10[1] + 8) * *(float *)((long)plVar39 + 0x14))) -
                 (*(float *)(plVar39 + 7) * fVar104 + *(float *)((long)plVar39 + 0x34))) *
                 *(float *)(plVar39 + 6) + fVar104;
        if (0.0 <= fVar48) {
          if (_LC23 < fVar48) {
            fVar48 = _LC23;
          }
        }
        else {
          fVar48 = 0.0;
        }
        *(float *)((long)plVar39 + 0x3c) = fVar48;
        fVar48 = fVar48 - fVar104;
        if (fVar48 != 0.0) break;
        plVar39 = plVar39 + 0x19;
        uVar45 = uVar43;
        if (plVar39 == plVar1) goto LAB_00109178;
      }
      bVar6 = pauVar10[7][10];
      plVar41 = plVar39 + 0x19;
      uVar43 = 1;
      fVar105 = fVar105 * fVar48;
      auVar81._1_3_ = 0;
      auVar81[0] = bVar6;
      auVar81[4] = bVar6;
      auVar81._5_3_ = 0;
      auVar81[8] = bVar6;
      auVar81._9_3_ = 0;
      auVar81[0xc] = bVar6;
      auVar81._13_3_ = 0;
      auVar20._4_4_ = _UNK_00116364;
      auVar20._0_4_ = __LC22;
      auVar20._8_4_ = _UNK_00116368;
      auVar20._12_4_ = _UNK_0011636c;
      auVar81 = auVar81 & auVar20;
      bVar11 = auVar81._4_4_ == _UNK_00116364;
      bVar12 = auVar81._8_4_ == _UNK_00116368;
      bVar13 = auVar81._12_4_ == _UNK_0011636c;
      *(uint *)*pauVar10 =
           (uint)(fVar105 * auVar79._0_4_ + auVar83._0_4_) & -(uint)(auVar81._0_4_ == __LC22);
      *(uint *)(*pauVar10 + 4) = (uint)(fVar105 * auVar79._4_4_ + auVar83._4_4_) & -(uint)bVar11;
      *(uint *)(*pauVar10 + 8) = (uint)(fVar105 * auVar79._8_4_ + auVar83._8_4_) & -(uint)bVar12;
      *(uint *)(*pauVar10 + 0xc) = (uint)(fVar105 * auVar79._12_4_ + auVar83._12_4_) & -(uint)bVar13
      ;
      auVar51._0_4_ = *(float *)((long)plVar39 + 0x24) * fVar48 + *(float *)pauVar10[1];
      auVar51._4_4_ = *(float *)(plVar39 + 5) * fVar48 + *(float *)(pauVar10[1] + 4);
      auVar51._8_4_ = *(float *)((long)plVar39 + 0x2c) * fVar48 + *(float *)(pauVar10[1] + 8);
      auVar51._12_4_ = *(float *)(plVar39 + 6) * fVar48 + *(float *)(pauVar10[1] + 0xc);
      pauVar10[1] = auVar51;
      plVar39 = plVar41;
      uVar45 = 1;
    } while (plVar41 != plVar1);
LAB_00109178:
    param_1 = param_1 + 1;
    uVar46 = uVar46 | uVar43;
    if (param_2 <= param_1) {
      return uVar46;
    }
  } while( true );
}



/* JPH::ContactConstraintManager::StoreAppliedImpulses(unsigned int const*, unsigned int const*)
   const */

void __thiscall
JPH::ContactConstraintManager::StoreAppliedImpulses
          (ContactConstraintManager *this,uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 < param_2) {
    lVar1 = *(long *)(this + 0xb0);
    do {
      lVar4 = (ulong)*param_1 * 0x360 + lVar1;
      lVar2 = lVar4 + 0x40;
      lVar5 = (ulong)*(uint *)(lVar4 + 0x38) * 200;
      lVar4 = lVar2 + lVar5;
      if (lVar5 != 0) {
        do {
          lVar3 = lVar2 + 200;
          lVar5 = *(long *)(lVar2 + 0xc0);
          *(ulong *)(lVar5 + 0x18) =
               CONCAT44((int)*(undefined8 *)(lVar2 + 0x7c),(int)*(undefined8 *)(lVar2 + 0x3c));
          *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar2 + 0xbc);
          lVar2 = lVar3;
        } while (lVar4 != lVar3);
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ContactConstraintManager::SolvePositionConstraints(unsigned int const*, unsigned int const*)
    */

undefined1 __thiscall
JPH::ContactConstraintManager::SolvePositionConstraints
          (ContactConstraintManager *this,uint *param_1,uint *param_2)

{
  long *plVar1;
  AxisConstraintPart *pAVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  long lVar10;
  float *pfVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  AxisConstraintPart *pAVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  uint uVar32;
  float fVar37;
  uint uVar38;
  float fVar39;
  uint uVar40;
  float fVar41;
  uint uVar42;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar47 [16];
  float fVar46;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
  float fVar53;
  float fVar54;
  int iVar55;
  int iVar57;
  int iVar58;
  int iVar59;
  undefined1 auVar56 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float local_158;
  float fStack_154;
  float local_f8;
  float fStack_f4;
  undefined1 local_39;
  
  if (param_2 <= param_1) {
    return 0;
  }
  lVar6 = *(long *)(this + 0xb0);
  local_39 = 0;
  do {
    plVar1 = (long *)(lVar6 + (ulong)*param_1 * 0x360);
    pfVar7 = (float *)*plVar1;
    pfVar8 = (float *)plVar1[1];
    fVar20 = (float)*(undefined8 *)(pfVar7 + 4);
    fVar25 = (float)*(undefined8 *)(pfVar7 + 6);
    uVar9 = *(undefined8 *)pfVar8;
    fVar21 = (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20);
    fVar43 = fVar20 + fVar20;
    fVar53 = fVar21 + fVar21;
    fVar26 = (float)((ulong)*(undefined8 *)(pfVar7 + 6) >> 0x20);
    fVar4 = pfVar7[2];
    pAVar24 = (AxisConstraintPart *)(plVar1 + 8);
    fVar66 = fVar25 * (fVar25 + fVar25);
    fVar60 = _LC1 - fVar20 * fVar43;
    fVar30 = fVar26 * (fVar25 + fVar25);
    fVar74 = _LC1 - fVar21 * fVar53;
    fVar22 = (float)*(undefined8 *)(pfVar8 + 4);
    fVar61 = _LC1 - fVar66;
    fVar67 = (float)*(undefined8 *)(pfVar8 + 6);
    fVar68 = (float)((ulong)*(undefined8 *)(pfVar8 + 6) >> 0x20);
    fVar23 = (float)((ulong)*(undefined8 *)(pfVar8 + 4) >> 0x20);
    local_f8 = (float)*(undefined8 *)pfVar7;
    fStack_f4 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
    fVar49 = fVar23 + fVar23;
    fVar5 = pfVar8[2];
    fVar44 = fVar22 + fVar22;
    fVar54 = fVar67 * (fVar67 + fVar67);
    fVar31 = fVar68 * (fVar67 + fVar67);
    fVar76 = _LC1 - fVar22 * fVar44;
    fVar77 = _LC1 - fVar54;
    fVar45 = _LC1 - fVar23 * fVar49;
    fVar15 = *(float *)(plVar1 + 3);
    fVar16 = *(float *)((long)plVar1 + 0x1c);
    fVar17 = *(float *)(plVar1 + 4);
    fVar18 = *(float *)((long)plVar1 + 0x24);
    pAVar2 = pAVar24 + (ulong)*(uint *)(plVar1 + 7) * 200;
    if ((ulong)*(uint *)(plVar1 + 7) * 200 != 0) {
      lVar10 = *(long *)(this + 0x90);
      do {
        while( true ) {
          pfVar11 = *(float **)(pAVar24 + 0xc0);
          fVar75 = *pfVar11;
          fVar63 = pfVar11[1];
          fVar37 = pfVar11[2];
          fVar39 = pfVar11[3];
          fVar41 = pfVar11[4];
          fVar46 = pfVar11[5];
          local_158 = (float)uVar9;
          fStack_154 = (float)((ulong)uVar9 >> 0x20);
          fVar62 = (float)(*(uint *)(lVar10 + 0x24) ^ _LC20);
          fVar75 = fVar17 * ((fVar39 * (fVar67 * fVar44 - fVar49 * fVar68) +
                              fVar41 * (fVar44 * fVar68 + fVar67 * fVar49) +
                              fVar46 * (fVar76 - fVar23 * fVar49) + fVar5) -
                            (fVar75 * (fVar25 * fVar43 - fVar53 * fVar26) +
                             fVar63 * (fVar43 * fVar26 + fVar25 * fVar53) +
                             fVar37 * (fVar60 - fVar21 * fVar53) + fVar4)) +
                   ((fVar39 * (fVar23 * fVar44 + fVar31) + fVar41 * (fVar77 - fVar22 * fVar44) +
                     fVar46 * (fVar67 * fVar49 - fVar44 * fVar68) + fStack_154) -
                   (fVar75 * (fVar21 * fVar43 + fVar30) + fVar63 * (fVar61 - fVar20 * fVar43) +
                    fVar37 * (fVar25 * fVar53 - fVar43 * fVar26) + fStack_f4)) * fVar16 +
                   fVar15 * ((fVar39 * (fVar45 - fVar54) + fVar41 * (fVar23 * fVar44 - fVar31) +
                              fVar46 * (fVar67 * fVar44 + fVar49 * fVar68) + local_158) -
                            (fVar75 * (fVar74 - fVar66) + fVar63 * (fVar21 * fVar43 - fVar30) +
                             fVar37 * (fVar25 * fVar43 + fVar53 * fVar26) + local_f8)) + 0.0 +
                   *(float *)(lVar10 + 0x14);
          if (fVar62 <= fVar75) {
            fVar62 = fVar75;
          }
          if ((fVar62 < 0.0) &&
             (AxisConstraintPart::CalculateConstraintPropertiesWithMassOverride
                        (pAVar24,pfVar7,pfVar8), *(float *)(pAVar24 + 0x38) == 0.0)) break;
          pAVar24 = pAVar24 + 200;
          if (pAVar24 == pAVar2) goto LAB_0010a748;
        }
        fVar75 = *(float *)(plVar1 + 6);
        fVar62 = (float)(*(uint *)(pAVar24 + 0x30) ^ _LC20) * *(float *)(lVar10 + 0xc) * fVar62;
        if (*(char *)(pfVar7 + 0x1e) == '\x02') {
          fVar63 = *(float *)(plVar1 + 5) * fVar62;
          bVar3 = *(byte *)(*(long *)(pfVar7 + 0x12) + 0x7a);
          auVar48._1_3_ = 0;
          auVar48[0] = bVar3;
          auVar48[4] = bVar3;
          auVar48._5_3_ = 0;
          auVar48[8] = bVar3;
          auVar48._9_3_ = 0;
          auVar48[0xc] = bVar3;
          auVar48._13_3_ = 0;
          auVar28._4_4_ = _UNK_00116364;
          auVar28._0_4_ = __LC22;
          auVar28._8_4_ = _UNK_00116368;
          auVar28._12_4_ = _UNK_0011636c;
          auVar48 = auVar48 & auVar28;
          bVar12 = auVar48._4_4_ == _UNK_00116364;
          bVar13 = auVar48._8_4_ == _UNK_00116368;
          bVar14 = auVar48._12_4_ == _UNK_0011636c;
          *pfVar7 = *pfVar7 - (float)((uint)(fVar63 * fVar15) & -(uint)(auVar48._0_4_ == __LC22));
          pfVar7[1] = pfVar7[1] - (float)((uint)(fVar63 * fVar16) & -(uint)bVar12);
          pfVar7[2] = pfVar7[2] - (float)((uint)(fVar63 * fVar17) & -(uint)bVar13);
          pfVar7[3] = pfVar7[3] - (float)((uint)(fVar63 * fVar18) & -(uint)bVar14);
          auVar28 = *(undefined1 (*) [16])(pAVar24 + 0x18);
          auVar35._0_4_ = fVar62 * auVar28._0_4_;
          auVar35._4_4_ = fVar62 * auVar28._4_4_;
          auVar35._8_4_ = fVar62 * auVar28._8_4_;
          auVar35._12_4_ = fVar62 * auVar28._12_4_;
          fVar63 = SQRT(auVar35._8_4_ * auVar35._8_4_ +
                        auVar35._4_4_ * auVar35._4_4_ + auVar35._0_4_ * auVar35._0_4_ + 0.0);
          if (__LC24 < fVar63) {
            fVar72 = _LC47 * fVar63;
            fVar37 = (float)(__LC25 & (uint)fVar72 ^ (uint)fVar72);
            fVar39 = (float)(_UNK_00116374 & (uint)fVar72 ^ (uint)fVar72);
            fVar64 = (float)(_UNK_00116378 & (uint)fVar72 ^ (uint)fVar72);
            fVar65 = (float)(_UNK_0011637c & (uint)fVar72 ^ (uint)fVar72);
            iVar55 = (int)(_LC27 * fVar37 + _LC6);
            iVar57 = (int)(_LC27 * fVar39 + _UNK_00116314);
            iVar58 = (int)(_LC27 * fVar64 + _UNK_00116318);
            iVar59 = (int)(_LC27 * fVar65 + _UNK_0011631c);
            fVar41 = (float)iVar55;
            fVar46 = (float)iVar57;
            fVar70 = (float)iVar58;
            fVar71 = (float)iVar59;
            fVar41 = ((fVar37 - _LC29 * fVar41) - _LC31 * fVar41) - fVar41 * _LC33;
            fVar46 = ((fVar39 - _LC29 * fVar46) - _LC31 * fVar46) - fVar46 * _LC33;
            fVar64 = ((fVar64 - _LC29 * fVar70) - _LC31 * fVar70) - fVar70 * _LC33;
            fVar65 = ((fVar65 - _LC29 * fVar71) - _LC31 * fVar71) - fVar71 * _LC33;
            fVar37 = fVar41 * fVar41;
            fVar39 = fVar46 * fVar46;
            fVar73 = fVar64 * fVar64;
            fVar69 = fVar65 * fVar65;
            fVar70 = ((_LC39 + (_LC37 + _LC35 * fVar37) * fVar37) * fVar37 * fVar37 - _LC6 * fVar37)
                     + _LC1;
            fVar71 = ((_LC39 + (_LC37 + _LC35 * fVar39) * fVar39) * fVar39 * fVar39 -
                     _UNK_00116314 * fVar39) + _LC1;
            fVar51 = ((_LC39 + (_LC37 + _LC35 * fVar73) * fVar73) * fVar73 * fVar73 -
                     _UNK_00116318 * fVar73) + _LC1;
            fVar52 = ((_LC39 + (_LC37 + _LC35 * fVar69) * fVar69) * fVar69 * fVar69 -
                     _UNK_0011631c * fVar69) + _LC1;
            fVar41 = ((_LC41 * fVar37 + _LC43) * fVar37 + _LC45) * fVar37 * fVar41 + fVar41;
            fVar46 = ((_LC41 * fVar39 + _LC43) * fVar39 + _LC45) * fVar39 * fVar46 + fVar46;
            fVar64 = ((_LC41 * fVar73 + _LC43) * fVar73 + _LC45) * fVar73 * fVar64 + fVar64;
            fVar65 = ((_LC41 * fVar69 + _LC43) * fVar69 + _LC45) * fVar69 * fVar65 + fVar65;
            uVar32 = (iVar55 << 0x1f) >> 0x1f;
            uVar38 = (iVar57 << 0x1f) >> 0x1f;
            uVar40 = (iVar58 << 0x1f) >> 0x1f;
            uVar42 = (iVar59 << 0x1f) >> 0x1f;
            auVar50._4_4_ = fVar63;
            auVar50._0_4_ = fVar63;
            auVar50._8_4_ = fVar63;
            auVar50._12_4_ = fVar63;
            auVar28 = divps(auVar35,auVar50);
            fVar39 = (float)*(undefined8 *)(pfVar7 + 6);
            fVar73 = (float)((ulong)*(undefined8 *)(pfVar7 + 6) >> 0x20);
            fVar63 = (float)*(undefined8 *)(pfVar7 + 4);
            fVar37 = (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20);
            fVar41 = (float)(__LC46 & (__LC25 & iVar55 << 0x1e ^ iVar55 << 0x1f ^
                                      ((uint)fVar41 & uVar32 | ~uVar32 & (uint)fVar70)) |
                            ~__LC46 & (uint)(auVar28._0_4_ *
                                            (float)(((uint)fVar72 ^ iVar55 << 0x1e) & __LC25 ^
                                                   ((uint)fVar70 & uVar32 | ~uVar32 & (uint)fVar41))
                                            ));
            fVar46 = (float)(_UNK_00116384 &
                             (_UNK_00116374 & iVar57 << 0x1e ^ iVar57 << 0x1f ^
                             ((uint)fVar46 & uVar38 | ~uVar38 & (uint)fVar71)) |
                            ~_UNK_00116384 &
                            (uint)(auVar28._4_4_ *
                                  (float)(((uint)fVar72 ^ iVar57 << 0x1e) & _UNK_00116374 ^
                                         ((uint)fVar71 & uVar38 | ~uVar38 & (uint)fVar46))));
            fVar64 = (float)(_UNK_00116388 &
                             (_UNK_00116378 & iVar58 << 0x1e ^ iVar58 << 0x1f ^
                             ((uint)fVar64 & uVar40 | ~uVar40 & (uint)fVar51)) |
                            ~_UNK_00116388 &
                            (uint)(auVar28._8_4_ *
                                  (float)(((uint)fVar72 ^ iVar58 << 0x1e) & _UNK_00116378 ^
                                         ((uint)fVar51 & uVar40 | ~uVar40 & (uint)fVar64))));
            fVar65 = (float)(_UNK_0011638c &
                             (_UNK_0011637c & iVar59 << 0x1e ^ iVar59 << 0x1f ^
                             ((uint)fVar65 & uVar42 | ~uVar42 & (uint)fVar52)) |
                            ~_UNK_0011638c &
                            (uint)(auVar28._12_4_ *
                                  (float)(((uint)fVar72 ^ iVar59 << 0x1e) & _UNK_0011637c ^
                                         ((uint)fVar52 & uVar42 | ~uVar42 & (uint)fVar65))));
            fVar71 = fVar64 * fVar63 + (fVar37 * fVar65 - fVar41 * fVar39) + fVar46 * fVar73;
            fVar51 = fVar64 * fVar73 + ((fVar41 * fVar37 + fVar39 * fVar65) - fVar46 * fVar63);
            fVar70 = (fVar41 * fVar73 + fVar63 * fVar65 + fVar46 * fVar39) - fVar64 * fVar37;
            fVar63 = ((fVar73 * fVar65 - fVar41 * fVar63) - fVar46 * fVar37) - fVar64 * fVar39;
            auVar56._4_4_ = fVar71;
            auVar56._0_4_ = fVar70;
            auVar56._8_4_ = fVar51;
            auVar56._12_4_ = fVar63;
            auVar36._0_4_ =
                 SQRT(fVar70 * fVar70 + fVar71 * fVar71 + fVar51 * fVar51 + fVar63 * fVar63);
            auVar36._4_4_ = auVar36._0_4_;
            auVar36._8_4_ = auVar36._0_4_;
            auVar36._12_4_ = auVar36._0_4_;
            auVar28 = divps(auVar56,auVar36);
            *(undefined1 (*) [16])(pfVar7 + 4) = auVar28;
          }
        }
        if (*(char *)(pfVar8 + 0x1e) == '\x02') {
          fVar75 = fVar75 * fVar62;
          bVar3 = *(byte *)(*(long *)(pfVar8 + 0x12) + 0x7a);
          auVar47._1_3_ = 0;
          auVar47[0] = bVar3;
          auVar47[4] = bVar3;
          auVar47._5_3_ = 0;
          auVar47[8] = bVar3;
          auVar47._9_3_ = 0;
          auVar47[0xc] = bVar3;
          auVar47._13_3_ = 0;
          auVar19._4_4_ = _UNK_00116364;
          auVar19._0_4_ = __LC22;
          auVar19._8_4_ = _UNK_00116368;
          auVar19._12_4_ = _UNK_0011636c;
          auVar47 = auVar47 & auVar19;
          bVar12 = auVar47._4_4_ == _UNK_00116364;
          bVar13 = auVar47._8_4_ == _UNK_00116368;
          bVar14 = auVar47._12_4_ == _UNK_0011636c;
          *pfVar8 = (float)((uint)(fVar75 * fVar15) & -(uint)(auVar47._0_4_ == __LC22)) + *pfVar8;
          pfVar8[1] = (float)((uint)(fVar75 * fVar16) & -(uint)bVar12) + pfVar8[1];
          pfVar8[2] = (float)((uint)(fVar75 * fVar17) & -(uint)bVar13) + pfVar8[2];
          pfVar8[3] = (float)((uint)(fVar75 * fVar18) & -(uint)bVar14) + pfVar8[3];
          auVar27._0_4_ = fVar62 * *(float *)(pAVar24 + 0x24);
          auVar27._4_4_ = fVar62 * *(float *)(pAVar24 + 0x28);
          auVar27._8_4_ = fVar62 * *(float *)(pAVar24 + 0x2c);
          auVar27._12_4_ = fVar62 * *(float *)(pAVar24 + 0x30);
          auVar33._0_4_ =
               SQRT(auVar27._8_4_ * auVar27._8_4_ +
                    auVar27._4_4_ * auVar27._4_4_ + auVar27._0_4_ * auVar27._0_4_ + 0.0);
          if (__LC24 < auVar33._0_4_) {
            fVar46 = _LC6 * auVar33._0_4_;
            fVar75 = (float)(__LC25 & (uint)fVar46 ^ (uint)fVar46);
            fVar37 = (float)(_UNK_00116374 & (uint)fVar46 ^ (uint)fVar46);
            fVar39 = (float)(_UNK_00116378 & (uint)fVar46 ^ (uint)fVar46);
            fVar41 = (float)(_UNK_0011637c & (uint)fVar46 ^ (uint)fVar46);
            iVar55 = (int)(_LC27 * fVar75 + _LC6);
            iVar57 = (int)(_LC27 * fVar37 + _UNK_00116314);
            iVar58 = (int)(_LC27 * fVar39 + _UNK_00116318);
            iVar59 = (int)(_LC27 * fVar41 + _UNK_0011631c);
            fVar63 = (float)iVar55;
            fVar62 = (float)iVar57;
            fVar64 = (float)iVar58;
            fVar65 = (float)iVar59;
            fVar63 = ((fVar75 - _LC29 * fVar63) - _LC31 * fVar63) - fVar63 * _LC33;
            fVar37 = ((fVar37 - _LC29 * fVar62) - _LC31 * fVar62) - fVar62 * _LC33;
            fVar39 = ((fVar39 - _LC29 * fVar64) - _LC31 * fVar64) - fVar64 * _LC33;
            fVar41 = ((fVar41 - _LC29 * fVar65) - _LC31 * fVar65) - fVar65 * _LC33;
            fVar75 = fVar63 * fVar63;
            fVar62 = fVar37 * fVar37;
            fVar64 = fVar39 * fVar39;
            fVar65 = fVar41 * fVar41;
            fVar70 = ((_LC39 + (_LC35 * fVar75 + _LC37) * fVar75) * fVar75 * fVar75 - _LC6 * fVar75)
                     + _LC1;
            fVar71 = ((_LC39 + (_LC35 * fVar62 + _LC37) * fVar62) * fVar62 * fVar62 -
                     _UNK_00116314 * fVar62) + _LC1;
            fVar72 = ((_LC39 + (_LC35 * fVar64 + _LC37) * fVar64) * fVar64 * fVar64 -
                     _UNK_00116318 * fVar64) + _LC1;
            fVar73 = ((_LC39 + (_LC35 * fVar65 + _LC37) * fVar65) * fVar65 * fVar65 -
                     _UNK_0011631c * fVar65) + _LC1;
            fVar63 = (_LC45 + (_LC43 + _LC41 * fVar75) * fVar75) * fVar75 * fVar63 + fVar63;
            fVar37 = (_LC45 + (_LC43 + _LC41 * fVar62) * fVar62) * fVar62 * fVar37 + fVar37;
            fVar39 = (_LC45 + (_LC43 + _LC41 * fVar64) * fVar64) * fVar64 * fVar39 + fVar39;
            fVar41 = (_LC45 + (_LC43 + _LC41 * fVar65) * fVar65) * fVar65 * fVar41 + fVar41;
            uVar32 = (iVar55 << 0x1f) >> 0x1f;
            uVar38 = (iVar57 << 0x1f) >> 0x1f;
            uVar40 = (iVar58 << 0x1f) >> 0x1f;
            uVar42 = (iVar59 << 0x1f) >> 0x1f;
            fVar65 = (float)*(undefined8 *)(pfVar8 + 4);
            fVar51 = (float)((ulong)*(undefined8 *)(pfVar8 + 4) >> 0x20);
            fVar75 = (float)*(undefined8 *)(pfVar8 + 6);
            auVar33._4_4_ = auVar33._0_4_;
            auVar33._8_4_ = auVar33._0_4_;
            auVar33._12_4_ = auVar33._0_4_;
            auVar28 = divps(auVar27,auVar33);
            fVar52 = (float)((ulong)*(undefined8 *)(pfVar8 + 6) >> 0x20);
            fVar63 = (float)(__LC46 & (__LC25 & iVar55 << 0x1e ^ iVar55 << 0x1f ^
                                      (uVar32 & (uint)fVar63 | ~uVar32 & (uint)fVar70)) |
                            ~__LC46 & (uint)(auVar28._0_4_ *
                                            (float)(((uint)fVar46 ^ iVar55 << 0x1e) & __LC25 ^
                                                   ((uint)fVar70 & uVar32 | ~uVar32 & (uint)fVar63))
                                            ));
            fVar37 = (float)(_UNK_00116384 &
                             (_UNK_00116374 & iVar57 << 0x1e ^ iVar57 << 0x1f ^
                             (uVar38 & (uint)fVar37 | ~uVar38 & (uint)fVar71)) |
                            ~_UNK_00116384 &
                            (uint)(auVar28._4_4_ *
                                  (float)(((uint)fVar46 ^ iVar57 << 0x1e) & _UNK_00116374 ^
                                         ((uint)fVar71 & uVar38 | ~uVar38 & (uint)fVar37))));
            fVar39 = (float)(_UNK_00116388 &
                             (_UNK_00116378 & iVar58 << 0x1e ^ iVar58 << 0x1f ^
                             (uVar40 & (uint)fVar39 | ~uVar40 & (uint)fVar72)) |
                            ~_UNK_00116388 &
                            (uint)(auVar28._8_4_ *
                                  (float)(((uint)fVar46 ^ iVar58 << 0x1e) & _UNK_00116378 ^
                                         ((uint)fVar72 & uVar40 | ~uVar40 & (uint)fVar39))));
            fVar41 = (float)(_UNK_0011638c &
                             (_UNK_0011637c & iVar59 << 0x1e ^ iVar59 << 0x1f ^
                             (uVar42 & (uint)fVar41 | ~uVar42 & (uint)fVar73)) |
                            ~_UNK_0011638c &
                            (uint)(auVar28._12_4_ *
                                  (float)(((uint)fVar46 ^ iVar59 << 0x1e) & _UNK_0011637c ^
                                         ((uint)fVar73 & uVar42 | ~uVar42 & (uint)fVar41))));
            fVar46 = fVar39 * fVar65 + fVar37 * fVar52 + (fVar41 * fVar51 - fVar63 * fVar75);
            fVar62 = fVar39 * fVar52 + ((fVar63 * fVar51 + fVar41 * fVar75) - fVar37 * fVar65);
            fVar64 = (fVar37 * fVar75 + fVar63 * fVar52 + fVar41 * fVar65) - fVar39 * fVar51;
            fVar75 = ((fVar41 * fVar52 - fVar63 * fVar65) - fVar37 * fVar51) - fVar39 * fVar75;
            auVar34._4_4_ = fVar46;
            auVar34._0_4_ = fVar64;
            auVar34._8_4_ = fVar62;
            auVar34._12_4_ = fVar75;
            auVar29._0_4_ =
                 SQRT(fVar64 * fVar64 + fVar46 * fVar46 + fVar62 * fVar62 + fVar75 * fVar75);
            auVar29._4_4_ = auVar29._0_4_;
            auVar29._8_4_ = auVar29._0_4_;
            auVar29._12_4_ = auVar29._0_4_;
            auVar28 = divps(auVar34,auVar29);
            *(undefined1 (*) [16])(pfVar8 + 4) = auVar28;
          }
        }
        pAVar24 = pAVar24 + 200;
        local_39 = 1;
      } while (pAVar24 != pAVar2);
    }
LAB_0010a748:
    param_1 = param_1 + 1;
    if (param_2 <= param_1) {
      return local_39;
    }
  } while( true );
}



/* JPH::ContactConstraintManager::RecycleConstraintBuffer() */

undefined4 __thiscall
JPH::ContactConstraintManager::RecycleConstraintBuffer(ContactConstraintManager *this)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(this + 0xbc);
  *(undefined4 *)(this + 0xbc) = 0;
  UNLOCK();
  return uVar1;
}



/* JPH::ContactConstraintManager::FinishConstraintBuffer() */

undefined4 __thiscall
JPH::ContactConstraintManager::FinishConstraintBuffer(ContactConstraintManager *this)

{
  undefined4 uVar1;
  
  (**(code **)(**(long **)(*(long *)(this + 0xc0) + 8) + 0x18))
            (*(long **)(*(long *)(this + 0xc0) + 8),*(undefined8 *)(this + 0xb0),
             *(int *)(this + 0xb8) * 0x360);
  *(undefined8 *)(this + 0xb0) = 0;
  LOCK();
  uVar1 = *(undefined4 *)(this + 0xbc);
  *(undefined4 *)(this + 0xbc) = 0;
  UNLOCK();
  *(undefined8 *)(this + 0xc0) = 0;
  return uVar1;
}



/* JPH::ContactConstraintManager::SaveState(JPH::StateRecorder&, JPH::StateRecorderFilter const*)
   const */

void __thiscall
JPH::ContactConstraintManager::SaveState
          (ContactConstraintManager *this,StateRecorder *param_1,StateRecorderFilter *param_2)

{
  ManifoldCache::SaveState
            ((ManifoldCache *)(this + ((long)*(int *)(this + 0x88) ^ 1U) * 0x40 + 8),param_1,param_2
            );
  return;
}



/* JPH::ContactConstraintManager::RestoreState(JPH::StateRecorder&, JPH::StateRecorderFilter const*)
    */

undefined4 __thiscall
JPH::ContactConstraintManager::RestoreState
          (ContactConstraintManager *this,StateRecorder *param_1,StateRecorderFilter *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = ManifoldCache::RestoreState
                    ((ManifoldCache *)(this + (long)(int)*(uint *)(this + 0x88) * 0x40 + 8),
                     (ManifoldCache *)(this + (long)(int)(*(uint *)(this + 0x88) ^ 1) * 0x40 + 8),
                     param_1,param_2);
  if (param_1[0x11] == (StateRecorder)0x0) {
    return uVar2;
  }
  uVar1 = *(uint *)(this + 0x88);
  *(uint *)(this + 0x88) = uVar1 ^ 1;
  ManifoldCache::Clear((ManifoldCache *)(this + (long)(int)(uVar1 ^ 1) * 0x40 + 8));
  return uVar2;
}



/* JPH::ContactConstraintManager::AddContactConstraint(JPH::ContactConstraintManager::ContactAllocator&,
   void*, JPH::Body&, JPH::Body&, JPH::ContactManifold const&) */

bool __thiscall
JPH::ContactConstraintManager::AddContactConstraint
          (ContactConstraintManager *this,ContactAllocator *param_1,void *param_2,Body *param_3,
          Body *param_4,ContactManifold *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  Body BVar4;
  bool bVar5;
  undefined1 *__src;
  Body *pBVar6;
  long in_FS_OFFSET;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined4 local_10c8;
  undefined8 local_10c4;
  uint local_10b8;
  undefined1 local_10a8 [1024];
  uint local_ca8;
  undefined1 local_c98 [1024];
  undefined8 local_898;
  undefined8 uStack_890;
  float local_888;
  float fStack_884;
  float fStack_880;
  float fStack_87c;
  undefined4 local_878;
  undefined4 local_874;
  undefined4 local_870;
  uint local_868;
  undefined1 local_858 [1024];
  uint local_458;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_10b8 = 0;
  local_10c4 = 0xffffffffffffffff;
  local_ca8 = 0;
  if (*(uint *)(param_4 + 0x70) < *(uint *)(param_3 + 0x70)) {
    local_874 = *(undefined4 *)(param_5 + 0x28);
    local_888 = 0.0 - *(float *)(param_5 + 0x10);
    fStack_884 = 0.0 - *(float *)(param_5 + 0x14);
    fStack_880 = 0.0 - *(float *)(param_5 + 0x18);
    fStack_87c = 0.0 - *(float *)(param_5 + 0x1c);
    local_868 = 0;
    uVar1 = *(undefined4 *)(param_5 + 0x20);
    local_898 = *(undefined8 *)param_5;
    uStack_890 = *(undefined8 *)(param_5 + 8);
    uVar2 = *(uint *)(param_5 + 0x440);
    local_870 = *(undefined4 *)(param_5 + 0x24);
    local_878 = uVar1;
    if (uVar2 != 0) {
      memcpy(local_858,param_5 + 0x450,(ulong)uVar2 << 4);
      local_868 = uVar2;
    }
    local_458 = 0;
    uVar3 = *(uint *)(param_5 + 0x30);
    local_10c8 = uVar1;
    if (uVar3 == 0) {
      local_10e8 = local_898;
      uStack_10e0 = uStack_890;
      local_10d8 = CONCAT44(fStack_884,local_888);
      uStack_10d0 = CONCAT44(fStack_87c,fStack_880);
      local_10c4 = CONCAT44(local_870,local_874);
      if (uVar2 != 0) goto LAB_0010b0f6;
      local_ca8 = 0;
    }
    else {
      __src = (undefined1 *)memcpy(local_448,param_5 + 0x40,(ulong)uVar3 << 4);
      local_10d8 = CONCAT44(fStack_884,local_888);
      uStack_10d0 = CONCAT44(fStack_87c,fStack_880);
      local_10e8 = local_898;
      uStack_10e0 = uStack_890;
      local_10c4 = CONCAT44(local_870,local_874);
      local_458 = uVar3;
      if (uVar2 != 0) {
LAB_0010b0f6:
        local_10e8 = local_898;
        uStack_10e0 = uStack_890;
        memcpy(local_10a8,local_858,(ulong)uVar2 << 4);
        local_ca8 = 0;
        local_10b8 = uVar2;
        if (uVar3 == 0) goto LAB_0010b151;
        __src = local_448;
      }
      memcpy(local_c98,__src,(ulong)uVar3 << 4);
      local_ca8 = uVar3;
    }
LAB_0010b151:
    param_5 = (ContactManifold *)&local_10e8;
    BVar4 = param_4[0x78];
    pBVar6 = param_4;
    param_4 = param_3;
    if (BVar4 == (Body)0x1) goto LAB_0010b16b;
LAB_0010af3e:
    if (BVar4 == (Body)0x2) {
      BVar4 = param_4[0x78];
      if (BVar4 == (Body)0x1) {
        bVar5 = TemplatedAddContactConstraint<(JPH::EMotionType)2,(JPH::EMotionType)1>
                          (this,param_1,param_2,pBVar6,param_4,param_5);
        goto LAB_0010afba;
      }
      if (BVar4 == (Body)0x2) {
        bVar5 = TemplatedAddContactConstraint<(JPH::EMotionType)2,(JPH::EMotionType)2>
                          (this,param_1,param_2,pBVar6,param_4,param_5);
        goto LAB_0010afba;
      }
      if (BVar4 == (Body)0x0) {
        bVar5 = TemplatedAddContactConstraint<(JPH::EMotionType)2,(JPH::EMotionType)0>
                          (this,param_1,param_2,pBVar6,param_4,param_5);
        goto LAB_0010afba;
      }
    }
    else if (BVar4 == (Body)0x0) {
      if (param_4[0x78] == (Body)0x1) {
        bVar5 = TemplatedAddContactConstraint<(JPH::EMotionType)0,(JPH::EMotionType)1>
                          (this,param_1,param_2,pBVar6,param_4,param_5);
      }
      else {
        bVar5 = false;
        if (param_4[0x78] == (Body)0x2) {
          bVar5 = TemplatedAddContactConstraint<(JPH::EMotionType)0,(JPH::EMotionType)2>
                            (this,param_1,param_2,pBVar6,param_4,param_5);
        }
      }
      goto LAB_0010afba;
    }
  }
  else {
    BVar4 = param_3[0x78];
    pBVar6 = param_3;
    if (BVar4 != (Body)0x1) goto LAB_0010af3e;
LAB_0010b16b:
    BVar4 = param_4[0x78];
    if (BVar4 == (Body)0x1) {
      bVar5 = TemplatedAddContactConstraint<(JPH::EMotionType)1,(JPH::EMotionType)1>
                        (this,param_1,param_2,pBVar6,param_4,param_5);
      goto LAB_0010afba;
    }
    if (BVar4 == (Body)0x2) {
      bVar5 = TemplatedAddContactConstraint<(JPH::EMotionType)1,(JPH::EMotionType)2>
                        (this,param_1,param_2,pBVar6,param_4,param_5);
      goto LAB_0010afba;
    }
    if (BVar4 == (Body)0x0) {
      bVar5 = TemplatedAddContactConstraint<(JPH::EMotionType)1,(JPH::EMotionType)0>
                        (this,param_1,param_2,pBVar6,param_4,param_5);
      goto LAB_0010afba;
    }
  }
  bVar5 = false;
LAB_0010afba:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ContactListener::OnContactAdded(JPH::Body const&, JPH::Body const&, JPH::ContactManifold
   const&, JPH::ContactSettings&) */

void JPH::ContactListener::OnContactAdded
               (Body *param_1,Body *param_2,ContactManifold *param_3,ContactSettings *param_4)

{
  return;
}



/* JPH::ContactListener::OnContactPersisted(JPH::Body const&, JPH::Body const&, JPH::ContactManifold
   const&, JPH::ContactSettings&) */

void JPH::ContactListener::OnContactPersisted
               (Body *param_1,Body *param_2,ContactManifold *param_3,ContactSettings *param_4)

{
  return;
}



/* JPH::ContactListener::OnContactRemoved(JPH::SubShapeIDPair const&) */

void JPH::ContactListener::OnContactRemoved(SubShapeIDPair *param_1)

{
  return;
}



/* JPH::StateRecorderFilter::ShouldSaveContact(JPH::BodyID const&, JPH::BodyID const&) const */

undefined8 JPH::StateRecorderFilter::ShouldSaveContact(BodyID *param_1,BodyID *param_2)

{
  return 1;
}



/* JPH::StateRecorderFilter::ShouldRestoreContact(JPH::BodyID const&, JPH::BodyID const&) const */

undefined8 JPH::StateRecorderFilter::ShouldRestoreContact(BodyID *param_1,BodyID *param_2)

{
  return 1;
}



/* JPH::ContactConstraintManager::mCombineRestitution::{lambda(JPH::Body const&, JPH::SubShapeID
   const&, JPH::Body const, JPH::SubShapeID const)#1}::_FUN(JPH::Body const, JPH::SubShapeID const,
   JPH::Body const, JPH::SubShapeID const) */

float JPH::ContactConstraintManager::mCombineRestitution::
      {lambda(JPH::Body_const&,JPH::SubShapeID_const&,JPH::Body_const,JPH::SubShapeID_const)#1}::
      _FUN(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_3 + 0x6c);
  if (*(float *)(param_3 + 0x6c) <= *(float *)(param_1 + 0x6c)) {
    fVar1 = *(float *)(param_1 + 0x6c);
  }
  return fVar1;
}



/* JPH::ContactConstraintManager::mCombineFriction::{lambda(JPH::Body const&, JPH::SubShapeID
   const&, JPH::Body const, JPH::SubShapeID const)#1}::_FUN(JPH::Body const, JPH::SubShapeID const,
   JPH::Body const, JPH::SubShapeID const) */

float JPH::ContactConstraintManager::mCombineFriction::
      {lambda(JPH::Body_const&,JPH::SubShapeID_const&,JPH::Body_const,JPH::SubShapeID_const)#1}::
      _FUN(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x68) * *(float *)(param_3 + 0x68);
  if (0.0 <= fVar1) {
    return SQRT(fVar1);
  }
  fVar1 = sqrtf(fVar1);
  return fVar1;
}



/* JPH::AxisConstraintPart::CalculateConstraintPropertiesWithMassOverride(JPH::Body const&, float,
   float, JPH::Vec3, JPH::Body const&, float, float, JPH::Vec3, JPH::Vec3, float) */

void __thiscall
JPH::AxisConstraintPart::CalculateConstraintPropertiesWithMassOverride
          (float param_2,float param_3,undefined8 param_3_00,float param_4,float param_5,
          float param_6,undefined8 param_7,float param_8,AxisConstraintPart *this,long param_1,
          long param_11)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  undefined4 in_stack_00000018;
  float fStack_134;
  float local_128;
  float local_118;
  float fStack_114;
  float local_f8 [16];
  Mat44 local_b8 [4];
  float afStack_b4 [15];
  float local_78 [18];
  long local_30;
  
  fVar12 = _LC1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *(char *)(param_1 + 0x78);
  fStack_134 = (float)((ulong)param_3_00 >> 0x20);
  local_128 = (float)param_3_00;
  fStack_114 = (float)((ulong)param_7 >> 0x20);
  local_118 = (float)param_7;
  if (cVar1 == '\x01') {
    MotionProperties::GetInverseInertiaForRotation(local_b8);
    lVar2 = 0;
    do {
      fVar3 = *(float *)((long)afStack_b4 + lVar2 + 4);
      fVar4 = *(float *)((long)afStack_b4 + lVar2 + 8);
      *(float *)((long)local_78 + lVar2) = *(float *)(local_b8 + lVar2) * param_6;
      *(float *)((long)local_78 + lVar2 + 4) = *(float *)((long)afStack_b4 + lVar2) * param_6;
      *(float *)((long)local_78 + lVar2 + 8) = fVar3 * param_6;
      *(float *)((long)local_78 + lVar2 + 0xc) = fVar4 * param_6;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0x40);
    fVar3 = local_118 * fStack000000000000000c - fStack_114 * fStack0000000000000008;
    fVar4 = fStack_114 * in_stack_00000010 - param_8 * fStack000000000000000c;
    fVar5 = param_8 * fStack0000000000000008 - local_118 * in_stack_00000010;
    *(float *)this = in_stack_00000010 * fStack_134 - param_4 * fStack000000000000000c;
    *(float *)(this + 4) = fStack0000000000000008 * param_4 - local_128 * in_stack_00000010;
    *(float *)(this + 8) = fStack000000000000000c * local_128 - fStack_134 * fStack0000000000000008;
    *(float *)(this + 0xc) = fVar4;
    *(ulong *)(this + 0x10) = CONCAT44(fVar3,fVar5);
    fVar6 = local_78[0] * fVar4 + fVar5 * local_78[4] + fVar3 * local_78[8];
    fVar8 = local_78[1] * fVar4 + fVar5 * local_78[5] + fVar3 * local_78[9];
    fVar10 = local_78[2] * fVar4 + fVar5 * local_78[6] + fVar3 * local_78[10];
    *(ulong *)(this + 0x24) = CONCAT44(fVar8,fVar6);
    *(float *)(this + 0x2c) = fVar10;
    param_2 = fVar3 * fVar10 + fVar8 * fVar5 + fVar4 * fVar6 + 0.0 + param_5 + 0.0;
LAB_0010b5b5:
    if (param_2 != 0.0) {
      *(undefined4 *)(this + 0x38) = 0;
      fVar12 = fVar12 / param_2;
      *(undefined4 *)(this + 0x34) = in_stack_00000018;
      goto LAB_0010b5e1;
    }
  }
  else {
    if (cVar1 == '\x02') {
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_78);
      lVar2 = 0;
      do {
        fVar3 = *(float *)((long)local_78 + lVar2 + 4);
        fVar4 = *(float *)((long)local_78 + lVar2 + 8);
        fVar5 = *(float *)((long)local_78 + lVar2 + 0xc);
        *(float *)((long)local_f8 + lVar2) = *(float *)((Mat44 *)local_78 + lVar2) * param_3;
        *(float *)((long)local_f8 + lVar2 + 4) = fVar3 * param_3;
        *(float *)((long)local_f8 + lVar2 + 8) = fVar4 * param_3;
        *(float *)((long)local_f8 + lVar2 + 0xc) = fVar5 * param_3;
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != 0x40);
      cVar1 = *(char *)(param_11 + 0x78);
      if (cVar1 == '\x01') {
        fVar3 = local_128 * fStack000000000000000c - fStack_134 * fStack0000000000000008;
        fVar4 = fStack_134 * in_stack_00000010 - param_4 * fStack000000000000000c;
        fVar5 = param_4 * fStack0000000000000008 - local_128 * in_stack_00000010;
        fVar6 = local_f8[0] * fVar4 + fVar5 * local_f8[4] + fVar3 * local_f8[8];
        fVar8 = local_f8[1] * fVar4 + fVar5 * local_f8[5] + fVar3 * local_f8[9];
        fVar10 = local_f8[2] * fVar4 + fVar5 * local_f8[6] + fVar3 * local_f8[10];
        *(float *)this = fVar4;
        *(float *)(this + 4) = fVar5;
        *(float *)(this + 8) = fVar3;
        *(float *)(this + 0xc) = in_stack_00000010 * fStack_114 - param_8 * fStack000000000000000c;
        *(float *)(this + 0x10) = fStack0000000000000008 * param_8 - local_118 * in_stack_00000010;
        *(float *)(this + 0x14) =
             fStack000000000000000c * local_118 - fStack_114 * fStack0000000000000008;
        *(float *)(this + 0x18) = fVar6;
        *(float *)(this + 0x1c) = fVar8;
        *(float *)(this + 0x20) = fVar10;
        param_2 = fVar3 * fVar10 + fVar8 * fVar5 + fVar6 * fVar4 + 0.0 + param_2;
      }
      else if (cVar1 == '\x02') {
        MotionProperties::GetInverseInertiaForRotation(local_b8);
        lVar2 = 0;
        do {
          fVar3 = *(float *)((long)afStack_b4 + lVar2 + 4);
          fVar4 = *(float *)((long)afStack_b4 + lVar2 + 8);
          *(float *)((Mat44 *)local_78 + lVar2) = *(float *)(local_b8 + lVar2) * param_6;
          *(float *)((long)local_78 + lVar2 + 4) = *(float *)((long)afStack_b4 + lVar2) * param_6;
          *(float *)((long)local_78 + lVar2 + 8) = fVar3 * param_6;
          *(float *)((long)local_78 + lVar2 + 0xc) = fVar4 * param_6;
          lVar2 = lVar2 + 0x10;
        } while (lVar2 != 0x40);
        fVar13 = local_128 * fStack000000000000000c - fStack_134 * fStack0000000000000008;
        fVar14 = fStack_134 * in_stack_00000010 - param_4 * fStack000000000000000c;
        fVar15 = param_4 * fStack0000000000000008 - local_128 * in_stack_00000010;
        fVar7 = fStack000000000000000c * local_118 - fStack_114 * fStack0000000000000008;
        fVar9 = in_stack_00000010 * fStack_114 - param_8 * fStack000000000000000c;
        fVar11 = fStack0000000000000008 * param_8 - local_118 * in_stack_00000010;
        fVar3 = local_f8[0] * fVar14 + fVar15 * local_f8[4] + fVar13 * local_f8[8];
        fVar4 = local_f8[1] * fVar14 + fVar15 * local_f8[5] + fVar13 * local_f8[9];
        fVar5 = local_f8[2] * fVar14 + fVar15 * local_f8[6] + fVar13 * local_f8[10];
        *(float *)this = fVar14;
        *(float *)(this + 4) = fVar15;
        *(float *)(this + 8) = fVar13;
        *(float *)(this + 0xc) = fVar9;
        fVar6 = local_78[0] * fVar9 + fVar11 * local_78[4] + fVar7 * local_78[8];
        fVar8 = local_78[1] * fVar9 + fVar11 * local_78[5] + fVar7 * local_78[9];
        fVar10 = local_78[2] * fVar9 + fVar11 * local_78[6] + fVar7 * local_78[10];
        *(float *)(this + 0x10) = fVar11;
        *(float *)(this + 0x14) = fVar7;
        *(float *)(this + 0x18) = fVar3;
        *(float *)(this + 0x1c) = fVar4;
        *(float *)(this + 0x20) = fVar5;
        *(float *)(this + 0x24) = fVar6;
        *(float *)(this + 0x28) = fVar8;
        *(float *)(this + 0x2c) = fVar10;
        param_2 = fVar10 * fVar7 + fVar8 * fVar11 + fVar6 * fVar9 + 0.0 + param_5 +
                  fVar5 * fVar13 + fVar4 * fVar15 + fVar3 * fVar14 + 0.0 + param_2;
      }
      else {
        if (cVar1 != '\0') goto LAB_0010b858;
        fVar3 = fStack000000000000000c * local_128 - fStack_134 * fStack0000000000000008;
        fVar4 = in_stack_00000010 * fStack_134 - param_4 * fStack000000000000000c;
        fVar5 = fStack0000000000000008 * param_4 - local_128 * in_stack_00000010;
        *(float *)(this + 8) = fVar3;
        *(ulong *)this = CONCAT44(fVar5,fVar4);
        fVar6 = local_f8[0] * fVar4 + fVar5 * local_f8[4] + fVar3 * local_f8[8];
        fVar8 = local_f8[1] * fVar4 + fVar5 * local_f8[5] + fVar3 * local_f8[9];
        fVar10 = local_f8[2] * fVar4 + fVar5 * local_f8[6] + fVar3 * local_f8[10];
        *(ulong *)(this + 0x18) = CONCAT44(fVar8,fVar6);
        *(float *)(this + 0x20) = fVar10;
        param_2 = fVar3 * fVar10 + fVar5 * fVar8 + fVar4 * fVar6 + 0.0 + param_2;
      }
      goto LAB_0010b5b5;
    }
    if (cVar1 == '\0') {
      MotionProperties::GetInverseInertiaForRotation(local_b8);
      lVar2 = 0;
      do {
        fVar3 = *(float *)((long)afStack_b4 + lVar2 + 4);
        fVar4 = *(float *)((long)afStack_b4 + lVar2 + 8);
        *(float *)((long)local_78 + lVar2) = *(float *)(local_b8 + lVar2) * param_6;
        *(float *)((long)local_78 + lVar2 + 4) = *(float *)((long)afStack_b4 + lVar2) * param_6;
        *(float *)((long)local_78 + lVar2 + 8) = fVar3 * param_6;
        *(float *)((long)local_78 + lVar2 + 0xc) = fVar4 * param_6;
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != 0x40);
      fVar3 = fStack000000000000000c * local_118 - fStack_114 * fStack0000000000000008;
      fVar4 = in_stack_00000010 * fStack_114 - param_8 * fStack000000000000000c;
      fVar5 = fStack0000000000000008 * param_8 - local_118 * in_stack_00000010;
      *(float *)(this + 0x14) = fVar3;
      *(ulong *)(this + 0xc) = CONCAT44(fVar5,fVar4);
      fVar6 = local_78[0] * fVar4 + fVar5 * local_78[4] + fVar3 * local_78[8];
      fVar8 = local_78[1] * fVar4 + fVar5 * local_78[5] + fVar3 * local_78[9];
      fVar10 = local_78[2] * fVar4 + fVar5 * local_78[6] + fVar3 * local_78[10];
      *(ulong *)(this + 0x24) = CONCAT44(fVar8,fVar6);
      *(float *)(this + 0x2c) = fVar10;
      param_2 = fVar3 * fVar10 + fVar8 * fVar5 + fVar6 * fVar4 + 0.0 + param_5 + 0.0;
      goto LAB_0010b5b5;
    }
  }
LAB_0010b858:
  *(undefined4 *)(this + 0x3c) = 0;
  fVar12 = 0.0;
LAB_0010b5e1:
  *(float *)(this + 0x30) = fVar12;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   JPH::ContactConstraintManager::WarmStartVelocityConstraints<JPH::CalculateSolverSteps>(unsigned
   int const*, unsigned int const*, float, JPH::CalculateSolverSteps&) */

void __thiscall
JPH::ContactConstraintManager::WarmStartVelocityConstraints<JPH::CalculateSolverSteps>
          (ContactConstraintManager *this,uint *param_1,uint *param_2,float param_3,
          CalculateSolverSteps *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  uint uVar32;
  long *plVar33;
  CalculateSolverSteps CVar34;
  uint uVar35;
  CalculateSolverSteps CVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  
  iVar27 = _UNK_0011636c;
  iVar25 = _UNK_00116368;
  iVar23 = _UNK_00116364;
  iVar21 = __LC22;
  uVar20 = _LC20;
  uVar19 = _LC10;
  if (param_2 <= param_1) {
    return;
  }
  auVar16._4_4_ = _UNK_00116364;
  auVar16._0_4_ = __LC22;
  auVar16._8_4_ = _UNK_00116368;
  auVar16._12_4_ = _UNK_0011636c;
  lVar4 = *(long *)(this + 0xb0);
  do {
    iVar28 = _UNK_0011636c;
    iVar26 = _UNK_00116368;
    iVar24 = _UNK_00116364;
    iVar22 = __LC22;
    plVar33 = (long *)((ulong)*param_1 * 0x360 + lVar4);
    fVar10 = *(float *)(plVar33 + 3);
    fVar11 = *(float *)((long)plVar33 + 0x1c);
    fVar12 = *(float *)(plVar33 + 4);
    fVar13 = *(float *)((long)plVar33 + 0x24);
    fVar55 = *(float *)(plVar33 + 4);
    auVar57._0_8_ = CONCAT44(0,fVar55);
    pfVar5 = *(float **)(*plVar33 + 0x48);
    fVar56 = fVar55 * fVar55;
    pfVar6 = *(float **)(plVar33[1] + 0x48);
    fVar48 = (float)((uint)fVar11 & uVar19);
    fVar54 = (float)((uint)fVar10 & uVar19);
    if (*(char *)(*plVar33 + 0x78) == '\x02') {
      if (*(char *)(plVar33[1] + 0x78) == '\x02') {
        if (fVar54 <= fVar48) {
          auVar9._8_4_ = (uint)fVar11 ^ uVar20;
          auVar9._4_4_ = (uint)fVar11 ^ uVar20;
          auVar9._0_4_ = fVar55;
          auVar9._12_4_ = 0;
          fVar55 = SQRT(fVar11 * fVar11 + fVar56);
          auVar42._4_4_ = fVar55;
          auVar42._0_4_ = fVar55;
          auVar42._8_4_ = fVar55;
          auVar42._12_4_ = fVar55;
          auVar57 = divps(auVar9 << 0x20,auVar42);
        }
        else {
          auVar59._12_4_ = (uint)fVar10 ^ uVar20;
          auVar59._8_4_ = (uint)fVar10 ^ uVar20;
          auVar59._0_8_ = auVar57._0_8_;
          auVar40._0_4_ = SQRT(fVar10 * fVar10 + fVar56);
          auVar40._4_4_ = auVar40._0_4_;
          auVar40._8_4_ = auVar40._0_4_;
          auVar40._12_4_ = auVar40._0_4_;
          auVar57 = divps(auVar59,auVar40);
        }
        fVar56 = auVar57._0_4_;
        fVar49 = auVar57._4_4_;
        fVar43 = auVar57._8_4_;
        uVar35 = *(uint *)(plVar33 + 7);
        plVar30 = plVar33 + 8;
        fVar55 = fVar49 * fVar10 - fVar11 * fVar56;
        fVar48 = fVar43 * fVar11 - fVar12 * fVar49;
        fVar54 = fVar56 * fVar12 - fVar10 * fVar43;
        if ((ulong)uVar35 * 200 != 0) {
          auVar18._4_4_ = _UNK_00116364;
          auVar18._0_4_ = __LC22;
          auVar18._8_4_ = _UNK_00116368;
          auVar18._12_4_ = _UNK_0011636c;
          plVar31 = plVar30;
          do {
            while( true ) {
              if ((*(float *)(plVar31 + 0xe) != 0.0) || (*(float *)(plVar31 + 0x16) != 0.0)) {
                fVar50 = *(float *)(plVar33 + 6);
                fVar63 = *(float *)(plVar33 + 5);
                fVar44 = *(float *)((long)plVar31 + 0x7c) * param_3;
                *(float *)((long)plVar31 + 0x7c) = fVar44;
                if (fVar44 != 0.0) {
                  fVar63 = fVar63 * fVar44;
                  bVar1 = *(byte *)((long)pfVar5 + 0x7a);
                  fVar50 = fVar50 * fVar44;
                  auVar66._1_3_ = 0;
                  auVar66[0] = bVar1;
                  bVar2 = *(byte *)((long)pfVar6 + 0x7a);
                  auVar66[4] = bVar1;
                  auVar66._5_3_ = 0;
                  auVar66[8] = bVar1;
                  auVar66._9_3_ = 0;
                  auVar66[0xc] = bVar1;
                  auVar66._13_3_ = 0;
                  auVar66 = auVar66 & auVar18;
                  auVar47._1_3_ = 0;
                  auVar47[0] = bVar2;
                  *pfVar5 = (float)((uint)(*pfVar5 - fVar63 * fVar56) &
                                   -(uint)(auVar66._0_4_ == iVar22));
                  pfVar5[1] = (float)((uint)(pfVar5[1] - fVar63 * fVar49) &
                                     -(uint)(auVar66._4_4_ == iVar24));
                  pfVar5[2] = (float)((uint)(pfVar5[2] - fVar63 * fVar43) &
                                     -(uint)(auVar66._8_4_ == iVar26));
                  pfVar5[3] = (float)((uint)(pfVar5[3] - fVar63 * auVar57._12_4_) &
                                     -(uint)(auVar66._12_4_ == iVar28));
                  fVar63 = *(float *)((long)plVar31 + 0x5c);
                  fVar14 = *(float *)(plVar31 + 0xc);
                  fVar15 = *(float *)((long)plVar31 + 100);
                  auVar47[4] = bVar2;
                  auVar47._5_3_ = 0;
                  auVar47[8] = bVar2;
                  auVar47._9_3_ = 0;
                  auVar47[0xc] = bVar2;
                  auVar47._13_3_ = 0;
                  auVar47 = auVar47 & auVar18;
                  pfVar5[4] = pfVar5[4] - *(float *)(plVar31 + 0xb) * fVar44;
                  pfVar5[5] = pfVar5[5] - fVar63 * fVar44;
                  pfVar5[6] = pfVar5[6] - fVar14 * fVar44;
                  pfVar5[7] = pfVar5[7] - fVar15 * fVar44;
                  *pfVar6 = (float)((uint)(fVar50 * fVar56 + *pfVar6) &
                                   -(uint)(auVar47._0_4_ == iVar22));
                  pfVar6[1] = (float)((uint)(fVar50 * fVar49 + pfVar6[1]) &
                                     -(uint)(auVar47._4_4_ == iVar24));
                  pfVar6[2] = (float)((uint)(fVar50 * fVar43 + pfVar6[2]) &
                                     -(uint)(auVar47._8_4_ == iVar26));
                  pfVar6[3] = (float)((uint)(fVar50 * auVar57._12_4_ + pfVar6[3]) &
                                     -(uint)(auVar47._12_4_ == iVar28));
                  fVar50 = *(float *)(plVar31 + 0xd);
                  fVar63 = *(float *)((long)plVar31 + 0x6c);
                  fVar14 = *(float *)(plVar31 + 0xe);
                  pfVar6[4] = *(float *)((long)plVar31 + 100) * fVar44 + pfVar6[4];
                  pfVar6[5] = fVar50 * fVar44 + pfVar6[5];
                  pfVar6[6] = fVar63 * fVar44 + pfVar6[6];
                  pfVar6[7] = fVar14 * fVar44 + pfVar6[7];
                }
                fVar50 = *(float *)(plVar33 + 6);
                fVar63 = *(float *)(plVar33 + 5);
                fVar44 = *(float *)((long)plVar31 + 0xbc) * param_3;
                *(float *)((long)plVar31 + 0xbc) = fVar44;
                if (fVar44 != 0.0) {
                  fVar63 = fVar63 * fVar44;
                  bVar1 = *(byte *)((long)pfVar5 + 0x7a);
                  fVar50 = fVar50 * fVar44;
                  auVar65._1_3_ = 0;
                  auVar65[0] = bVar1;
                  bVar2 = *(byte *)((long)pfVar6 + 0x7a);
                  auVar65[4] = bVar1;
                  auVar65._5_3_ = 0;
                  auVar65[8] = bVar1;
                  auVar65._9_3_ = 0;
                  auVar65[0xc] = bVar1;
                  auVar65._13_3_ = 0;
                  auVar65 = auVar65 & auVar18;
                  auVar46._1_3_ = 0;
                  auVar46[0] = bVar2;
                  *pfVar5 = (float)((uint)(*pfVar5 - fVar63 * fVar48) &
                                   -(uint)(auVar65._0_4_ == iVar22));
                  pfVar5[1] = (float)((uint)(pfVar5[1] - fVar63 * fVar54) &
                                     -(uint)(auVar65._4_4_ == iVar24));
                  pfVar5[2] = (float)((uint)(pfVar5[2] - fVar63 * fVar55) &
                                     -(uint)(auVar65._8_4_ == iVar26));
                  pfVar5[3] = (float)((uint)(pfVar5[3] - fVar63 * fVar55) &
                                     -(uint)(auVar65._12_4_ == iVar28));
                  fVar63 = *(float *)((long)plVar31 + 0x9c);
                  fVar14 = *(float *)(plVar31 + 0x14);
                  fVar15 = *(float *)((long)plVar31 + 0xa4);
                  auVar46[4] = bVar2;
                  auVar46._5_3_ = 0;
                  auVar46[8] = bVar2;
                  auVar46._9_3_ = 0;
                  auVar46[0xc] = bVar2;
                  auVar46._13_3_ = 0;
                  auVar46 = auVar46 & auVar18;
                  pfVar5[4] = pfVar5[4] - *(float *)(plVar31 + 0x13) * fVar44;
                  pfVar5[5] = pfVar5[5] - fVar63 * fVar44;
                  pfVar5[6] = pfVar5[6] - fVar14 * fVar44;
                  pfVar5[7] = pfVar5[7] - fVar15 * fVar44;
                  *pfVar6 = (float)((uint)(fVar50 * fVar48 + *pfVar6) &
                                   -(uint)(auVar46._0_4_ == iVar22));
                  pfVar6[1] = (float)((uint)(fVar50 * fVar54 + pfVar6[1]) &
                                     -(uint)(auVar46._4_4_ == iVar24));
                  pfVar6[2] = (float)((uint)(fVar50 * fVar55 + pfVar6[2]) &
                                     -(uint)(auVar46._8_4_ == iVar26));
                  pfVar6[3] = (float)((uint)(fVar50 * fVar55 + pfVar6[3]) &
                                     -(uint)(auVar46._12_4_ == iVar28));
                  fVar50 = *(float *)(plVar31 + 0x15);
                  fVar63 = *(float *)((long)plVar31 + 0xac);
                  fVar14 = *(float *)(plVar31 + 0x16);
                  pfVar6[4] = *(float *)((long)plVar31 + 0xa4) * fVar44 + pfVar6[4];
                  pfVar6[5] = fVar50 * fVar44 + pfVar6[5];
                  pfVar6[6] = fVar63 * fVar44 + pfVar6[6];
                  pfVar6[7] = fVar14 * fVar44 + pfVar6[7];
                }
              }
              fVar50 = *(float *)(plVar33 + 6);
              fVar63 = *(float *)(plVar33 + 5);
              fVar44 = *(float *)((long)plVar31 + 0x3c) * param_3;
              *(float *)((long)plVar31 + 0x3c) = fVar44;
              if (fVar44 == 0.0) break;
              fVar63 = fVar63 * fVar44;
              bVar1 = *(byte *)((long)pfVar5 + 0x7a);
              plVar29 = plVar31 + 0x19;
              fVar50 = fVar50 * fVar44;
              auVar64._1_3_ = 0;
              auVar64[0] = bVar1;
              bVar2 = *(byte *)((long)pfVar6 + 0x7a);
              auVar64[4] = bVar1;
              auVar64._5_3_ = 0;
              auVar64[8] = bVar1;
              auVar64._9_3_ = 0;
              auVar64[0xc] = bVar1;
              auVar64._13_3_ = 0;
              auVar64 = auVar64 & auVar18;
              auVar45._1_3_ = 0;
              auVar45[0] = bVar2;
              *pfVar5 = (float)((uint)(*pfVar5 - fVar63 * fVar10) & -(uint)(auVar64._0_4_ == iVar22)
                               );
              pfVar5[1] = (float)((uint)(pfVar5[1] - fVar63 * fVar11) &
                                 -(uint)(auVar64._4_4_ == iVar24));
              pfVar5[2] = (float)((uint)(pfVar5[2] - fVar63 * fVar12) &
                                 -(uint)(auVar64._8_4_ == iVar26));
              pfVar5[3] = (float)((uint)(pfVar5[3] - fVar63 * fVar13) &
                                 -(uint)(auVar64._12_4_ == iVar28));
              fVar63 = *(float *)((long)plVar31 + 0x1c);
              fVar14 = *(float *)(plVar31 + 4);
              fVar15 = *(float *)((long)plVar31 + 0x24);
              auVar45[4] = bVar2;
              auVar45._5_3_ = 0;
              auVar45[8] = bVar2;
              auVar45._9_3_ = 0;
              auVar45[0xc] = bVar2;
              auVar45._13_3_ = 0;
              auVar45 = auVar45 & auVar18;
              pfVar5[4] = pfVar5[4] - *(float *)(plVar31 + 3) * fVar44;
              pfVar5[5] = pfVar5[5] - fVar63 * fVar44;
              pfVar5[6] = pfVar5[6] - fVar14 * fVar44;
              pfVar5[7] = pfVar5[7] - fVar15 * fVar44;
              *pfVar6 = (float)((uint)(fVar50 * fVar10 + *pfVar6) & -(uint)(auVar45._0_4_ == iVar22)
                               );
              pfVar6[1] = (float)((uint)(fVar50 * fVar11 + pfVar6[1]) &
                                 -(uint)(auVar45._4_4_ == iVar24));
              pfVar6[2] = (float)((uint)(fVar50 * fVar12 + pfVar6[2]) &
                                 -(uint)(auVar45._8_4_ == iVar26));
              pfVar6[3] = (float)((uint)(fVar50 * fVar13 + pfVar6[3]) &
                                 -(uint)(auVar45._12_4_ == iVar28));
              fVar50 = *(float *)(plVar31 + 5);
              fVar63 = *(float *)((long)plVar31 + 0x2c);
              fVar14 = *(float *)(plVar31 + 6);
              pfVar6[4] = *(float *)((long)plVar31 + 0x24) * fVar44 + pfVar6[4];
              pfVar6[5] = fVar50 * fVar44 + pfVar6[5];
              pfVar6[6] = fVar63 * fVar44 + pfVar6[6];
              pfVar6[7] = fVar14 * fVar44 + pfVar6[7];
              plVar31 = plVar29;
              if (plVar29 == plVar30 + (ulong)uVar35 * 0x19) goto LAB_0010c5b0;
            }
            plVar31 = plVar31 + 0x19;
          } while (plVar31 != plVar30 + (ulong)uVar35 * 0x19);
        }
LAB_0010c5b0:
        bVar1 = *(byte *)((long)pfVar6 + 0x7b);
        uVar35 = *(uint *)(param_4 + 8);
        if (*(uint *)(param_4 + 8) <= (uint)bVar1) {
          uVar35 = (uint)bVar1;
        }
        bVar2 = *(byte *)(pfVar6 + 0x1f);
        CVar34 = (CalculateSolverSteps)(bVar1 == 0 | (byte)param_4[0x10]);
        uVar32 = *(uint *)(param_4 + 0xc);
        if (*(uint *)(param_4 + 0xc) <= (uint)bVar2) {
          uVar32 = (uint)bVar2;
        }
        CVar36 = (CalculateSolverSteps)(bVar2 == 0 | (byte)param_4[0x11]);
      }
      else {
        if (fVar54 <= fVar48) {
          auVar8._8_4_ = (uint)fVar11 ^ uVar20;
          auVar8._4_4_ = (uint)fVar11 ^ uVar20;
          auVar8._0_4_ = fVar55;
          auVar8._12_4_ = 0;
          fVar55 = SQRT(fVar11 * fVar11 + fVar56);
          auVar41._4_4_ = fVar55;
          auVar41._0_4_ = fVar55;
          auVar41._8_4_ = fVar55;
          auVar41._12_4_ = fVar55;
          auVar57 = divps(auVar8 << 0x20,auVar41);
        }
        else {
          auVar57._12_4_ = (uint)fVar10 ^ uVar20;
          auVar57._8_4_ = (uint)fVar10 ^ uVar20;
          auVar37._0_4_ = SQRT(fVar10 * fVar10 + fVar56);
          auVar37._4_4_ = auVar37._0_4_;
          auVar37._8_4_ = auVar37._0_4_;
          auVar37._12_4_ = auVar37._0_4_;
          auVar57 = divps(auVar57,auVar37);
        }
        fVar48 = auVar57._0_4_;
        fVar54 = auVar57._4_4_;
        fVar56 = auVar57._8_4_;
        uVar3 = *(uint *)(plVar33 + 7);
        plVar30 = plVar33 + 8;
        CVar34 = param_4[0x10];
        CVar36 = param_4[0x11];
        uVar35 = *(uint *)(param_4 + 8);
        uVar32 = *(uint *)(param_4 + 0xc);
        fVar55 = fVar54 * fVar10 - fVar11 * fVar48;
        if ((ulong)uVar3 * 200 != 0) {
          auVar17._4_4_ = _UNK_00116364;
          auVar17._0_4_ = __LC22;
          auVar17._8_4_ = _UNK_00116368;
          auVar17._12_4_ = _UNK_0011636c;
          plVar31 = plVar30;
          do {
            while( true ) {
              if ((*(float *)(plVar31 + 0xe) != 0.0) || (*(float *)(plVar31 + 0x16) != 0.0)) {
                fVar49 = *(float *)(plVar33 + 5);
                fVar43 = *(float *)((long)plVar31 + 0x7c) * param_3;
                *(float *)((long)plVar31 + 0x7c) = fVar43;
                if (fVar43 != 0.0) {
                  fVar49 = fVar49 * fVar43;
                  bVar1 = *(byte *)((long)pfVar5 + 0x7a);
                  auVar53._1_3_ = 0;
                  auVar53[0] = bVar1;
                  auVar53[4] = bVar1;
                  auVar53._5_3_ = 0;
                  auVar53[8] = bVar1;
                  auVar53._9_3_ = 0;
                  auVar53[0xc] = bVar1;
                  auVar53._13_3_ = 0;
                  auVar53 = auVar53 & auVar17;
                  *pfVar5 = (float)((uint)(*pfVar5 - fVar49 * fVar48) &
                                   -(uint)(auVar53._0_4_ == iVar22));
                  pfVar5[1] = (float)((uint)(pfVar5[1] - fVar49 * fVar54) &
                                     -(uint)(auVar53._4_4_ == iVar24));
                  pfVar5[2] = (float)((uint)(pfVar5[2] - fVar49 * fVar56) &
                                     -(uint)(auVar53._8_4_ == iVar26));
                  pfVar5[3] = (float)((uint)(pfVar5[3] - fVar49 * auVar57._12_4_) &
                                     -(uint)(auVar53._12_4_ == iVar28));
                  fVar49 = *(float *)((long)plVar31 + 0x5c);
                  fVar50 = *(float *)(plVar31 + 0xc);
                  fVar63 = *(float *)((long)plVar31 + 100);
                  pfVar5[4] = pfVar5[4] - *(float *)(plVar31 + 0xb) * fVar43;
                  pfVar5[5] = pfVar5[5] - fVar49 * fVar43;
                  pfVar5[6] = pfVar5[6] - fVar50 * fVar43;
                  pfVar5[7] = pfVar5[7] - fVar63 * fVar43;
                }
                fVar49 = *(float *)(plVar33 + 5);
                fVar43 = *(float *)((long)plVar31 + 0xbc) * param_3;
                *(float *)((long)plVar31 + 0xbc) = fVar43;
                if (fVar43 != 0.0) {
                  fVar49 = fVar49 * fVar43;
                  bVar1 = *(byte *)((long)pfVar5 + 0x7a);
                  auVar52._1_3_ = 0;
                  auVar52[0] = bVar1;
                  auVar52[4] = bVar1;
                  auVar52._5_3_ = 0;
                  auVar52[8] = bVar1;
                  auVar52._9_3_ = 0;
                  auVar52[0xc] = bVar1;
                  auVar52._13_3_ = 0;
                  auVar52 = auVar52 & auVar17;
                  *pfVar5 = (float)((uint)(*pfVar5 - fVar49 * (fVar56 * fVar11 - fVar12 * fVar54)) &
                                   -(uint)(auVar52._0_4_ == iVar22));
                  pfVar5[1] = (float)((uint)(pfVar5[1] -
                                            fVar49 * (fVar48 * fVar12 - fVar10 * fVar56)) &
                                     -(uint)(auVar52._4_4_ == iVar24));
                  pfVar5[2] = (float)((uint)(pfVar5[2] - fVar49 * fVar55) &
                                     -(uint)(auVar52._8_4_ == iVar26));
                  pfVar5[3] = (float)((uint)(pfVar5[3] - fVar49 * fVar55) &
                                     -(uint)(auVar52._12_4_ == iVar28));
                  fVar49 = *(float *)((long)plVar31 + 0x9c);
                  fVar50 = *(float *)(plVar31 + 0x14);
                  fVar63 = *(float *)((long)plVar31 + 0xa4);
                  pfVar5[4] = pfVar5[4] - *(float *)(plVar31 + 0x13) * fVar43;
                  pfVar5[5] = pfVar5[5] - fVar49 * fVar43;
                  pfVar5[6] = pfVar5[6] - fVar50 * fVar43;
                  pfVar5[7] = pfVar5[7] - fVar63 * fVar43;
                }
              }
              fVar49 = *(float *)(plVar33 + 5);
              fVar43 = *(float *)((long)plVar31 + 0x3c) * param_3;
              *(float *)((long)plVar31 + 0x3c) = fVar43;
              if (fVar43 == 0.0) break;
              fVar49 = fVar49 * fVar43;
              bVar1 = *(byte *)((long)pfVar5 + 0x7a);
              plVar29 = plVar31 + 0x19;
              auVar51._1_3_ = 0;
              auVar51[0] = bVar1;
              auVar51[4] = bVar1;
              auVar51._5_3_ = 0;
              auVar51[8] = bVar1;
              auVar51._9_3_ = 0;
              auVar51[0xc] = bVar1;
              auVar51._13_3_ = 0;
              auVar51 = auVar51 & auVar17;
              *pfVar5 = (float)((uint)(*pfVar5 - fVar49 * fVar10) & -(uint)(auVar51._0_4_ == iVar22)
                               );
              pfVar5[1] = (float)((uint)(pfVar5[1] - fVar49 * fVar11) &
                                 -(uint)(auVar51._4_4_ == iVar24));
              pfVar5[2] = (float)((uint)(pfVar5[2] - fVar49 * fVar12) &
                                 -(uint)(auVar51._8_4_ == iVar26));
              pfVar5[3] = (float)((uint)(pfVar5[3] - fVar49 * fVar13) &
                                 -(uint)(auVar51._12_4_ == iVar28));
              fVar49 = *(float *)((long)plVar31 + 0x1c);
              fVar50 = *(float *)(plVar31 + 4);
              fVar63 = *(float *)((long)plVar31 + 0x24);
              pfVar5[4] = pfVar5[4] - *(float *)(plVar31 + 3) * fVar43;
              pfVar5[5] = pfVar5[5] - fVar49 * fVar43;
              pfVar5[6] = pfVar5[6] - fVar50 * fVar43;
              pfVar5[7] = pfVar5[7] - fVar63 * fVar43;
              plVar31 = plVar29;
              if (plVar29 == plVar30 + (ulong)uVar3 * 0x19) goto LAB_0010c040;
            }
            plVar31 = plVar31 + 0x19;
          } while (plVar31 != plVar30 + (ulong)uVar3 * 0x19);
        }
      }
LAB_0010c040:
      bVar1 = *(byte *)((long)pfVar5 + 0x7b);
      if (uVar35 <= bVar1) {
        uVar35 = (uint)bVar1;
      }
      *(uint *)(param_4 + 8) = uVar35;
      param_4[0x10] = (CalculateSolverSteps)(bVar1 == 0 | (byte)CVar34);
      bVar1 = *(byte *)(pfVar5 + 0x1f);
      if (uVar32 <= bVar1) {
        uVar32 = (uint)bVar1;
      }
      *(uint *)(param_4 + 0xc) = uVar32;
      CVar36 = (CalculateSolverSteps)(bVar1 == 0 | (byte)CVar36);
    }
    else {
      if (fVar54 <= fVar48) {
        auVar7._8_4_ = (uint)fVar11 ^ uVar20;
        auVar7._4_4_ = (uint)fVar11 ^ uVar20;
        auVar7._0_4_ = fVar55;
        auVar7._12_4_ = 0;
        fVar55 = SQRT(fVar11 * fVar11 + fVar56);
        auVar39._4_4_ = fVar55;
        auVar39._0_4_ = fVar55;
        auVar39._8_4_ = fVar55;
        auVar39._12_4_ = fVar55;
        auVar57 = divps(auVar7 << 0x20,auVar39);
      }
      else {
        auVar58._12_4_ = (uint)fVar10 ^ uVar20;
        auVar58._8_4_ = (uint)fVar10 ^ uVar20;
        auVar58._0_8_ = auVar57._0_8_;
        auVar38._0_4_ = SQRT(fVar10 * fVar10 + fVar56);
        auVar38._4_4_ = auVar38._0_4_;
        auVar38._8_4_ = auVar38._0_4_;
        auVar38._12_4_ = auVar38._0_4_;
        auVar57 = divps(auVar58,auVar38);
      }
      fVar48 = auVar57._0_4_;
      fVar54 = auVar57._4_4_;
      fVar56 = auVar57._8_4_;
      plVar30 = plVar33 + 8;
      plVar31 = plVar30 + (ulong)*(uint *)(plVar33 + 7) * 0x19;
      fVar55 = fVar54 * fVar10 - fVar11 * fVar48;
      if ((ulong)*(uint *)(plVar33 + 7) * 200 != 0) {
        do {
          while( true ) {
            if ((*(float *)(plVar30 + 0xe) != 0.0) || (*(float *)(plVar30 + 0x16) != 0.0)) {
              fVar49 = *(float *)(plVar33 + 6);
              fVar43 = *(float *)((long)plVar30 + 0x7c) * param_3;
              *(float *)((long)plVar30 + 0x7c) = fVar43;
              if (fVar43 != 0.0) {
                fVar49 = fVar49 * fVar43;
                bVar1 = *(byte *)((long)pfVar6 + 0x7a);
                auVar62._1_3_ = 0;
                auVar62[0] = bVar1;
                auVar62[4] = bVar1;
                auVar62._5_3_ = 0;
                auVar62[8] = bVar1;
                auVar62._9_3_ = 0;
                auVar62[0xc] = bVar1;
                auVar62._13_3_ = 0;
                auVar62 = auVar62 & auVar16;
                *pfVar6 = (float)((uint)(fVar49 * fVar48 + *pfVar6) &
                                 -(uint)(auVar62._0_4_ == iVar22));
                pfVar6[1] = (float)((uint)(fVar49 * fVar54 + pfVar6[1]) &
                                   -(uint)(auVar62._4_4_ == iVar24));
                pfVar6[2] = (float)((uint)(fVar49 * fVar56 + pfVar6[2]) &
                                   -(uint)(auVar62._8_4_ == iVar26));
                pfVar6[3] = (float)((uint)(fVar49 * auVar57._12_4_ + pfVar6[3]) &
                                   -(uint)(auVar62._12_4_ == iVar28));
                fVar49 = *(float *)(plVar30 + 0xd);
                fVar50 = *(float *)((long)plVar30 + 0x6c);
                fVar63 = *(float *)(plVar30 + 0xe);
                pfVar6[4] = fVar43 * *(float *)((long)plVar30 + 100) + pfVar6[4];
                pfVar6[5] = fVar43 * fVar49 + pfVar6[5];
                pfVar6[6] = fVar43 * fVar50 + pfVar6[6];
                pfVar6[7] = fVar43 * fVar63 + pfVar6[7];
              }
              fVar49 = *(float *)(plVar33 + 6);
              fVar43 = *(float *)((long)plVar30 + 0xbc) * param_3;
              *(float *)((long)plVar30 + 0xbc) = fVar43;
              if (fVar43 != 0.0) {
                fVar49 = fVar49 * fVar43;
                bVar1 = *(byte *)((long)pfVar6 + 0x7a);
                auVar61._1_3_ = 0;
                auVar61[0] = bVar1;
                auVar61[4] = bVar1;
                auVar61._5_3_ = 0;
                auVar61[8] = bVar1;
                auVar61._9_3_ = 0;
                auVar61[0xc] = bVar1;
                auVar61._13_3_ = 0;
                auVar61 = auVar61 & auVar16;
                *pfVar6 = (float)((uint)(fVar49 * (fVar56 * fVar11 - fVar12 * fVar54) + *pfVar6) &
                                 -(uint)(auVar61._0_4_ == iVar21));
                pfVar6[1] = (float)((uint)(fVar49 * (fVar48 * fVar12 - fVar10 * fVar56) + pfVar6[1])
                                   & -(uint)(auVar61._4_4_ == iVar23));
                pfVar6[2] = (float)((uint)(fVar49 * fVar55 + pfVar6[2]) &
                                   -(uint)(auVar61._8_4_ == iVar25));
                pfVar6[3] = (float)((uint)(fVar49 * fVar55 + pfVar6[3]) &
                                   -(uint)(auVar61._12_4_ == iVar27));
                fVar49 = *(float *)(plVar30 + 0x15);
                fVar50 = *(float *)((long)plVar30 + 0xac);
                fVar63 = *(float *)(plVar30 + 0x16);
                pfVar6[4] = fVar43 * *(float *)((long)plVar30 + 0xa4) + pfVar6[4];
                pfVar6[5] = fVar43 * fVar49 + pfVar6[5];
                pfVar6[6] = fVar43 * fVar50 + pfVar6[6];
                pfVar6[7] = fVar43 * fVar63 + pfVar6[7];
              }
            }
            fVar49 = *(float *)(plVar33 + 6);
            fVar43 = *(float *)((long)plVar30 + 0x3c) * param_3;
            *(float *)((long)plVar30 + 0x3c) = fVar43;
            if (fVar43 == 0.0) break;
            fVar49 = fVar49 * fVar43;
            bVar1 = *(byte *)((long)pfVar6 + 0x7a);
            plVar29 = plVar30 + 0x19;
            auVar60._1_3_ = 0;
            auVar60[0] = bVar1;
            auVar60[4] = bVar1;
            auVar60._5_3_ = 0;
            auVar60[8] = bVar1;
            auVar60._9_3_ = 0;
            auVar60[0xc] = bVar1;
            auVar60._13_3_ = 0;
            auVar60 = auVar60 & auVar16;
            *pfVar6 = (float)((uint)(fVar49 * fVar10 + *pfVar6) & -(uint)(auVar60._0_4_ == iVar21));
            pfVar6[1] = (float)((uint)(fVar49 * fVar11 + pfVar6[1]) &
                               -(uint)(auVar60._4_4_ == iVar23));
            pfVar6[2] = (float)((uint)(fVar49 * fVar12 + pfVar6[2]) &
                               -(uint)(auVar60._8_4_ == iVar25));
            pfVar6[3] = (float)((uint)(fVar49 * fVar13 + pfVar6[3]) &
                               -(uint)(auVar60._12_4_ == iVar27));
            fVar49 = *(float *)(plVar30 + 5);
            fVar50 = *(float *)((long)plVar30 + 0x2c);
            fVar63 = *(float *)(plVar30 + 6);
            pfVar6[4] = fVar43 * *(float *)((long)plVar30 + 0x24) + pfVar6[4];
            pfVar6[5] = fVar43 * fVar49 + pfVar6[5];
            pfVar6[6] = fVar43 * fVar50 + pfVar6[6];
            pfVar6[7] = fVar43 * fVar63 + pfVar6[7];
            plVar30 = plVar29;
            if (plVar31 == plVar29) goto LAB_0010c2b0;
          }
          plVar30 = plVar30 + 0x19;
        } while (plVar31 != plVar30);
      }
LAB_0010c2b0:
      bVar1 = *(byte *)((long)pfVar6 + 0x7b);
      uVar35 = *(uint *)(param_4 + 8);
      if (*(uint *)(param_4 + 8) < (uint)bVar1) {
        uVar35 = (uint)bVar1;
      }
      *(uint *)(param_4 + 8) = uVar35;
      param_4[0x10] = (CalculateSolverSteps)((byte)param_4[0x10] | bVar1 == 0);
      bVar1 = *(byte *)(pfVar6 + 0x1f);
      uVar35 = *(uint *)(param_4 + 0xc);
      if (*(uint *)(param_4 + 0xc) < (uint)bVar1) {
        uVar35 = (uint)bVar1;
      }
      *(uint *)(param_4 + 0xc) = uVar35;
      CVar36 = (CalculateSolverSteps)(bVar1 == 0 | (byte)param_4[0x11]);
    }
    param_1 = param_1 + 1;
    param_4[0x11] = CVar36;
    if (param_2 <= param_1) {
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   JPH::ContactConstraintManager::WarmStartVelocityConstraints<JPH::DummyCalculateSolverSteps>(unsigned
   int const*, unsigned int const*, float, JPH::DummyCalculateSolverSteps&) */

void JPH::ContactConstraintManager::WarmStartVelocityConstraints<JPH::DummyCalculateSolverSteps>
               (uint *param_1,uint *param_2,float param_3,DummyCalculateSolverSteps *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  
  iVar27 = _UNK_0011636c;
  iVar25 = _UNK_00116368;
  iVar23 = _UNK_00116364;
  iVar21 = __LC22;
  uVar20 = _LC20;
  uVar19 = _LC10;
  if (param_4 <= param_2) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x2c);
  auVar16._4_4_ = _UNK_00116364;
  auVar16._0_4_ = __LC22;
  auVar16._8_4_ = _UNK_00116368;
  auVar16._12_4_ = _UNK_0011636c;
  do {
    iVar28 = _UNK_0011636c;
    iVar26 = _UNK_00116368;
    iVar24 = _UNK_00116364;
    iVar22 = __LC22;
    plVar32 = (long *)((ulong)*param_2 * 0x360 + lVar4);
    fVar10 = *(float *)(plVar32 + 3);
    fVar11 = *(float *)((long)plVar32 + 0x1c);
    fVar12 = *(float *)(plVar32 + 4);
    fVar13 = *(float *)((long)plVar32 + 0x24);
    fVar51 = *(float *)(plVar32 + 4);
    auVar53._0_8_ = CONCAT44(0,fVar51);
    pfVar5 = *(float **)(*plVar32 + 0x48);
    fVar52 = fVar51 * fVar51;
    pfVar6 = *(float **)(plVar32[1] + 0x48);
    fVar44 = (float)((uint)fVar11 & uVar19);
    fVar50 = (float)((uint)fVar10 & uVar19);
    if (*(char *)(*plVar32 + 0x78) == '\x02') {
      if (*(char *)(plVar32[1] + 0x78) == '\x02') {
        if (fVar50 <= fVar44) {
          auVar9._8_4_ = (uint)fVar11 ^ uVar20;
          auVar9._4_4_ = (uint)fVar11 ^ uVar20;
          auVar9._0_4_ = fVar51;
          auVar9._12_4_ = 0;
          fVar51 = SQRT(fVar11 * fVar11 + fVar52);
          auVar38._4_4_ = fVar51;
          auVar38._0_4_ = fVar51;
          auVar38._8_4_ = fVar51;
          auVar38._12_4_ = fVar51;
          auVar53 = divps(auVar9 << 0x20,auVar38);
        }
        else {
          auVar55._12_4_ = (uint)fVar10 ^ uVar20;
          auVar55._8_4_ = (uint)fVar10 ^ uVar20;
          auVar55._0_8_ = auVar53._0_8_;
          auVar36._0_4_ = SQRT(fVar10 * fVar10 + fVar52);
          auVar36._4_4_ = auVar36._0_4_;
          auVar36._8_4_ = auVar36._0_4_;
          auVar36._12_4_ = auVar36._0_4_;
          auVar53 = divps(auVar55,auVar36);
        }
        fVar52 = auVar53._0_4_;
        fVar45 = auVar53._4_4_;
        fVar39 = auVar53._8_4_;
        plVar31 = plVar32 + 8;
        plVar29 = plVar31 + (ulong)*(uint *)(plVar32 + 7) * 0x19;
        fVar51 = fVar45 * fVar10 - fVar11 * fVar52;
        fVar44 = fVar39 * fVar11 - fVar12 * fVar45;
        fVar50 = fVar52 * fVar12 - fVar10 * fVar39;
        if ((ulong)*(uint *)(plVar32 + 7) * 200 != 0) {
          auVar18._4_4_ = _UNK_00116364;
          auVar18._0_4_ = __LC22;
          auVar18._8_4_ = _UNK_00116368;
          auVar18._12_4_ = _UNK_0011636c;
          do {
            if ((*(float *)(plVar31 + 0xe) != 0.0) || (*(float *)(plVar31 + 0x16) != 0.0)) {
              fVar46 = *(float *)(plVar32 + 6);
              fVar59 = *(float *)(plVar32 + 5);
              fVar40 = *(float *)((long)plVar31 + 0x7c) * param_3;
              *(float *)((long)plVar31 + 0x7c) = fVar40;
              if (fVar40 != 0.0) {
                fVar59 = fVar59 * fVar40;
                bVar1 = *(byte *)((long)pfVar5 + 0x7a);
                fVar46 = fVar46 * fVar40;
                auVar62._1_3_ = 0;
                auVar62[0] = bVar1;
                bVar2 = *(byte *)((long)pfVar6 + 0x7a);
                auVar62[4] = bVar1;
                auVar62._5_3_ = 0;
                auVar62[8] = bVar1;
                auVar62._9_3_ = 0;
                auVar62[0xc] = bVar1;
                auVar62._13_3_ = 0;
                auVar62 = auVar62 & auVar18;
                auVar43._1_3_ = 0;
                auVar43[0] = bVar2;
                *pfVar5 = (float)((uint)(*pfVar5 - fVar59 * fVar52) &
                                 -(uint)(auVar62._0_4_ == iVar22));
                pfVar5[1] = (float)((uint)(pfVar5[1] - fVar59 * fVar45) &
                                   -(uint)(auVar62._4_4_ == iVar24));
                pfVar5[2] = (float)((uint)(pfVar5[2] - fVar59 * fVar39) &
                                   -(uint)(auVar62._8_4_ == iVar26));
                pfVar5[3] = (float)((uint)(pfVar5[3] - fVar59 * auVar53._12_4_) &
                                   -(uint)(auVar62._12_4_ == iVar28));
                fVar59 = *(float *)((long)plVar31 + 0x5c);
                fVar14 = *(float *)(plVar31 + 0xc);
                fVar15 = *(float *)((long)plVar31 + 100);
                auVar43[4] = bVar2;
                auVar43._5_3_ = 0;
                auVar43[8] = bVar2;
                auVar43._9_3_ = 0;
                auVar43[0xc] = bVar2;
                auVar43._13_3_ = 0;
                auVar43 = auVar43 & auVar18;
                pfVar5[4] = pfVar5[4] - *(float *)(plVar31 + 0xb) * fVar40;
                pfVar5[5] = pfVar5[5] - fVar59 * fVar40;
                pfVar5[6] = pfVar5[6] - fVar14 * fVar40;
                pfVar5[7] = pfVar5[7] - fVar15 * fVar40;
                *pfVar6 = (float)((uint)(fVar46 * fVar52 + *pfVar6) &
                                 -(uint)(auVar43._0_4_ == iVar22));
                pfVar6[1] = (float)((uint)(fVar46 * fVar45 + pfVar6[1]) &
                                   -(uint)(auVar43._4_4_ == iVar24));
                pfVar6[2] = (float)((uint)(fVar46 * fVar39 + pfVar6[2]) &
                                   -(uint)(auVar43._8_4_ == iVar26));
                pfVar6[3] = (float)((uint)(fVar46 * auVar53._12_4_ + pfVar6[3]) &
                                   -(uint)(auVar43._12_4_ == iVar28));
                fVar46 = *(float *)(plVar31 + 0xd);
                fVar59 = *(float *)((long)plVar31 + 0x6c);
                fVar14 = *(float *)(plVar31 + 0xe);
                pfVar6[4] = *(float *)((long)plVar31 + 100) * fVar40 + pfVar6[4];
                pfVar6[5] = fVar46 * fVar40 + pfVar6[5];
                pfVar6[6] = fVar59 * fVar40 + pfVar6[6];
                pfVar6[7] = fVar14 * fVar40 + pfVar6[7];
              }
              fVar46 = *(float *)(plVar32 + 6);
              fVar59 = *(float *)(plVar32 + 5);
              fVar40 = *(float *)((long)plVar31 + 0xbc) * param_3;
              *(float *)((long)plVar31 + 0xbc) = fVar40;
              if (fVar40 != 0.0) {
                fVar59 = fVar59 * fVar40;
                bVar1 = *(byte *)((long)pfVar5 + 0x7a);
                fVar46 = fVar46 * fVar40;
                auVar61._1_3_ = 0;
                auVar61[0] = bVar1;
                bVar2 = *(byte *)((long)pfVar6 + 0x7a);
                auVar61[4] = bVar1;
                auVar61._5_3_ = 0;
                auVar61[8] = bVar1;
                auVar61._9_3_ = 0;
                auVar61[0xc] = bVar1;
                auVar61._13_3_ = 0;
                auVar61 = auVar61 & auVar18;
                auVar42._1_3_ = 0;
                auVar42[0] = bVar2;
                *pfVar5 = (float)((uint)(*pfVar5 - fVar59 * fVar44) &
                                 -(uint)(auVar61._0_4_ == iVar22));
                pfVar5[1] = (float)((uint)(pfVar5[1] - fVar59 * fVar50) &
                                   -(uint)(auVar61._4_4_ == iVar24));
                pfVar5[2] = (float)((uint)(pfVar5[2] - fVar59 * fVar51) &
                                   -(uint)(auVar61._8_4_ == iVar26));
                pfVar5[3] = (float)((uint)(pfVar5[3] - fVar59 * fVar51) &
                                   -(uint)(auVar61._12_4_ == iVar28));
                fVar59 = *(float *)((long)plVar31 + 0x9c);
                fVar14 = *(float *)(plVar31 + 0x14);
                fVar15 = *(float *)((long)plVar31 + 0xa4);
                auVar42[4] = bVar2;
                auVar42._5_3_ = 0;
                auVar42[8] = bVar2;
                auVar42._9_3_ = 0;
                auVar42[0xc] = bVar2;
                auVar42._13_3_ = 0;
                auVar42 = auVar42 & auVar18;
                pfVar5[4] = pfVar5[4] - *(float *)(plVar31 + 0x13) * fVar40;
                pfVar5[5] = pfVar5[5] - fVar59 * fVar40;
                pfVar5[6] = pfVar5[6] - fVar14 * fVar40;
                pfVar5[7] = pfVar5[7] - fVar15 * fVar40;
                *pfVar6 = (float)((uint)(fVar46 * fVar44 + *pfVar6) &
                                 -(uint)(auVar42._0_4_ == iVar22));
                pfVar6[1] = (float)((uint)(fVar46 * fVar50 + pfVar6[1]) &
                                   -(uint)(auVar42._4_4_ == iVar24));
                pfVar6[2] = (float)((uint)(fVar46 * fVar51 + pfVar6[2]) &
                                   -(uint)(auVar42._8_4_ == iVar26));
                pfVar6[3] = (float)((uint)(fVar46 * fVar51 + pfVar6[3]) &
                                   -(uint)(auVar42._12_4_ == iVar28));
                fVar46 = *(float *)(plVar31 + 0x15);
                fVar59 = *(float *)((long)plVar31 + 0xac);
                fVar14 = *(float *)(plVar31 + 0x16);
                pfVar6[4] = *(float *)((long)plVar31 + 0xa4) * fVar40 + pfVar6[4];
                pfVar6[5] = fVar46 * fVar40 + pfVar6[5];
                pfVar6[6] = fVar59 * fVar40 + pfVar6[6];
                pfVar6[7] = fVar14 * fVar40 + pfVar6[7];
              }
            }
            fVar46 = *(float *)(plVar32 + 6);
            fVar59 = *(float *)(plVar32 + 5);
            fVar40 = *(float *)((long)plVar31 + 0x3c) * param_3;
            *(float *)((long)plVar31 + 0x3c) = fVar40;
            if (fVar40 != 0.0) {
              fVar59 = fVar59 * fVar40;
              bVar1 = *(byte *)((long)pfVar5 + 0x7a);
              fVar46 = fVar46 * fVar40;
              auVar60._1_3_ = 0;
              auVar60[0] = bVar1;
              bVar2 = *(byte *)((long)pfVar6 + 0x7a);
              auVar60[4] = bVar1;
              auVar60._5_3_ = 0;
              auVar60[8] = bVar1;
              auVar60._9_3_ = 0;
              auVar60[0xc] = bVar1;
              auVar60._13_3_ = 0;
              auVar60 = auVar60 & auVar18;
              auVar41._1_3_ = 0;
              auVar41[0] = bVar2;
              *pfVar5 = (float)((uint)(*pfVar5 - fVar59 * fVar10) & -(uint)(auVar60._0_4_ == iVar22)
                               );
              pfVar5[1] = (float)((uint)(pfVar5[1] - fVar59 * fVar11) &
                                 -(uint)(auVar60._4_4_ == iVar24));
              pfVar5[2] = (float)((uint)(pfVar5[2] - fVar59 * fVar12) &
                                 -(uint)(auVar60._8_4_ == iVar26));
              pfVar5[3] = (float)((uint)(pfVar5[3] - fVar59 * fVar13) &
                                 -(uint)(auVar60._12_4_ == iVar28));
              fVar59 = *(float *)((long)plVar31 + 0x1c);
              fVar14 = *(float *)(plVar31 + 4);
              fVar15 = *(float *)((long)plVar31 + 0x24);
              auVar41[4] = bVar2;
              auVar41._5_3_ = 0;
              auVar41[8] = bVar2;
              auVar41._9_3_ = 0;
              auVar41[0xc] = bVar2;
              auVar41._13_3_ = 0;
              auVar41 = auVar41 & auVar18;
              pfVar5[4] = pfVar5[4] - *(float *)(plVar31 + 3) * fVar40;
              pfVar5[5] = pfVar5[5] - fVar59 * fVar40;
              pfVar5[6] = pfVar5[6] - fVar14 * fVar40;
              pfVar5[7] = pfVar5[7] - fVar15 * fVar40;
              *pfVar6 = (float)((uint)(fVar46 * fVar10 + *pfVar6) & -(uint)(auVar41._0_4_ == iVar22)
                               );
              pfVar6[1] = (float)((uint)(fVar46 * fVar11 + pfVar6[1]) &
                                 -(uint)(auVar41._4_4_ == iVar24));
              pfVar6[2] = (float)((uint)(fVar46 * fVar12 + pfVar6[2]) &
                                 -(uint)(auVar41._8_4_ == iVar26));
              pfVar6[3] = (float)((uint)(fVar46 * fVar13 + pfVar6[3]) &
                                 -(uint)(auVar41._12_4_ == iVar28));
              fVar46 = *(float *)(plVar31 + 5);
              fVar59 = *(float *)((long)plVar31 + 0x2c);
              fVar14 = *(float *)(plVar31 + 6);
              pfVar6[4] = *(float *)((long)plVar31 + 0x24) * fVar40 + pfVar6[4];
              pfVar6[5] = fVar46 * fVar40 + pfVar6[5];
              pfVar6[6] = fVar59 * fVar40 + pfVar6[6];
              pfVar6[7] = fVar14 * fVar40 + pfVar6[7];
            }
            plVar31 = plVar31 + 0x19;
          } while (plVar29 != plVar31);
        }
      }
      else {
        if (fVar50 <= fVar44) {
          auVar8._8_4_ = (uint)fVar11 ^ uVar20;
          auVar8._4_4_ = (uint)fVar11 ^ uVar20;
          auVar8._0_4_ = fVar51;
          auVar8._12_4_ = 0;
          fVar51 = SQRT(fVar11 * fVar11 + fVar52);
          auVar37._4_4_ = fVar51;
          auVar37._0_4_ = fVar51;
          auVar37._8_4_ = fVar51;
          auVar37._12_4_ = fVar51;
          auVar53 = divps(auVar8 << 0x20,auVar37);
        }
        else {
          auVar53._12_4_ = (uint)fVar10 ^ uVar20;
          auVar53._8_4_ = (uint)fVar10 ^ uVar20;
          auVar33._0_4_ = SQRT(fVar10 * fVar10 + fVar52);
          auVar33._4_4_ = auVar33._0_4_;
          auVar33._8_4_ = auVar33._0_4_;
          auVar33._12_4_ = auVar33._0_4_;
          auVar53 = divps(auVar53,auVar33);
        }
        fVar44 = auVar53._0_4_;
        fVar50 = auVar53._4_4_;
        fVar52 = auVar53._8_4_;
        uVar3 = *(uint *)(plVar32 + 7);
        plVar31 = plVar32 + 8;
        fVar51 = fVar50 * fVar10 - fVar11 * fVar44;
        if ((ulong)uVar3 * 200 != 0) {
          auVar17._4_4_ = _UNK_00116364;
          auVar17._0_4_ = __LC22;
          auVar17._8_4_ = _UNK_00116368;
          auVar17._12_4_ = _UNK_0011636c;
          plVar29 = plVar31;
          do {
            while( true ) {
              if ((*(float *)(plVar29 + 0xe) != 0.0) || (*(float *)(plVar29 + 0x16) != 0.0)) {
                fVar45 = *(float *)(plVar32 + 5);
                fVar39 = *(float *)((long)plVar29 + 0x7c) * param_3;
                *(float *)((long)plVar29 + 0x7c) = fVar39;
                if (fVar39 != 0.0) {
                  fVar45 = fVar45 * fVar39;
                  bVar1 = *(byte *)((long)pfVar5 + 0x7a);
                  auVar49._1_3_ = 0;
                  auVar49[0] = bVar1;
                  auVar49[4] = bVar1;
                  auVar49._5_3_ = 0;
                  auVar49[8] = bVar1;
                  auVar49._9_3_ = 0;
                  auVar49[0xc] = bVar1;
                  auVar49._13_3_ = 0;
                  auVar49 = auVar49 & auVar17;
                  *pfVar5 = (float)((uint)(*pfVar5 - fVar45 * fVar44) &
                                   -(uint)(auVar49._0_4_ == iVar22));
                  pfVar5[1] = (float)((uint)(pfVar5[1] - fVar45 * fVar50) &
                                     -(uint)(auVar49._4_4_ == iVar24));
                  pfVar5[2] = (float)((uint)(pfVar5[2] - fVar45 * fVar52) &
                                     -(uint)(auVar49._8_4_ == iVar26));
                  pfVar5[3] = (float)((uint)(pfVar5[3] - fVar45 * auVar53._12_4_) &
                                     -(uint)(auVar49._12_4_ == iVar28));
                  fVar45 = *(float *)((long)plVar29 + 0x5c);
                  fVar46 = *(float *)(plVar29 + 0xc);
                  fVar59 = *(float *)((long)plVar29 + 100);
                  pfVar5[4] = pfVar5[4] - *(float *)(plVar29 + 0xb) * fVar39;
                  pfVar5[5] = pfVar5[5] - fVar45 * fVar39;
                  pfVar5[6] = pfVar5[6] - fVar46 * fVar39;
                  pfVar5[7] = pfVar5[7] - fVar59 * fVar39;
                }
                fVar45 = *(float *)(plVar32 + 5);
                fVar39 = *(float *)((long)plVar29 + 0xbc) * param_3;
                *(float *)((long)plVar29 + 0xbc) = fVar39;
                if (fVar39 != 0.0) {
                  fVar45 = fVar45 * fVar39;
                  bVar1 = *(byte *)((long)pfVar5 + 0x7a);
                  auVar48._1_3_ = 0;
                  auVar48[0] = bVar1;
                  auVar48[4] = bVar1;
                  auVar48._5_3_ = 0;
                  auVar48[8] = bVar1;
                  auVar48._9_3_ = 0;
                  auVar48[0xc] = bVar1;
                  auVar48._13_3_ = 0;
                  auVar48 = auVar48 & auVar17;
                  *pfVar5 = (float)((uint)(*pfVar5 - fVar45 * (fVar52 * fVar11 - fVar12 * fVar50)) &
                                   -(uint)(auVar48._0_4_ == iVar22));
                  pfVar5[1] = (float)((uint)(pfVar5[1] -
                                            fVar45 * (fVar44 * fVar12 - fVar10 * fVar52)) &
                                     -(uint)(auVar48._4_4_ == iVar24));
                  pfVar5[2] = (float)((uint)(pfVar5[2] - fVar45 * fVar51) &
                                     -(uint)(auVar48._8_4_ == iVar26));
                  pfVar5[3] = (float)((uint)(pfVar5[3] - fVar45 * fVar51) &
                                     -(uint)(auVar48._12_4_ == iVar28));
                  fVar45 = *(float *)((long)plVar29 + 0x9c);
                  fVar46 = *(float *)(plVar29 + 0x14);
                  fVar59 = *(float *)((long)plVar29 + 0xa4);
                  pfVar5[4] = pfVar5[4] - *(float *)(plVar29 + 0x13) * fVar39;
                  pfVar5[5] = pfVar5[5] - fVar45 * fVar39;
                  pfVar5[6] = pfVar5[6] - fVar46 * fVar39;
                  pfVar5[7] = pfVar5[7] - fVar59 * fVar39;
                }
              }
              fVar45 = *(float *)(plVar32 + 5);
              fVar39 = *(float *)((long)plVar29 + 0x3c) * param_3;
              *(float *)((long)plVar29 + 0x3c) = fVar39;
              if (fVar39 == 0.0) break;
              fVar45 = fVar45 * fVar39;
              bVar1 = *(byte *)((long)pfVar5 + 0x7a);
              plVar30 = plVar29 + 0x19;
              auVar47._1_3_ = 0;
              auVar47[0] = bVar1;
              auVar47[4] = bVar1;
              auVar47._5_3_ = 0;
              auVar47[8] = bVar1;
              auVar47._9_3_ = 0;
              auVar47[0xc] = bVar1;
              auVar47._13_3_ = 0;
              auVar47 = auVar47 & auVar17;
              *pfVar5 = (float)((uint)(*pfVar5 - fVar45 * fVar10) & -(uint)(auVar47._0_4_ == iVar22)
                               );
              pfVar5[1] = (float)((uint)(pfVar5[1] - fVar45 * fVar11) &
                                 -(uint)(auVar47._4_4_ == iVar24));
              pfVar5[2] = (float)((uint)(pfVar5[2] - fVar45 * fVar12) &
                                 -(uint)(auVar47._8_4_ == iVar26));
              pfVar5[3] = (float)((uint)(pfVar5[3] - fVar45 * fVar13) &
                                 -(uint)(auVar47._12_4_ == iVar28));
              fVar45 = *(float *)((long)plVar29 + 0x1c);
              fVar46 = *(float *)(plVar29 + 4);
              fVar59 = *(float *)((long)plVar29 + 0x24);
              pfVar5[4] = pfVar5[4] - *(float *)(plVar29 + 3) * fVar39;
              pfVar5[5] = pfVar5[5] - fVar45 * fVar39;
              pfVar5[6] = pfVar5[6] - fVar46 * fVar39;
              pfVar5[7] = pfVar5[7] - fVar59 * fVar39;
              plVar29 = plVar30;
              if (plVar31 + (ulong)uVar3 * 0x19 == plVar30) goto LAB_0010c9c0;
            }
            plVar29 = plVar29 + 0x19;
          } while (plVar31 + (ulong)uVar3 * 0x19 != plVar29);
        }
      }
    }
    else {
      if (fVar50 <= fVar44) {
        auVar7._8_4_ = (uint)fVar11 ^ uVar20;
        auVar7._4_4_ = (uint)fVar11 ^ uVar20;
        auVar7._0_4_ = fVar51;
        auVar7._12_4_ = 0;
        fVar51 = SQRT(fVar11 * fVar11 + fVar52);
        auVar35._4_4_ = fVar51;
        auVar35._0_4_ = fVar51;
        auVar35._8_4_ = fVar51;
        auVar35._12_4_ = fVar51;
        auVar53 = divps(auVar7 << 0x20,auVar35);
      }
      else {
        auVar54._12_4_ = (uint)fVar10 ^ uVar20;
        auVar54._8_4_ = (uint)fVar10 ^ uVar20;
        auVar54._0_8_ = auVar53._0_8_;
        auVar34._0_4_ = SQRT(fVar10 * fVar10 + fVar52);
        auVar34._4_4_ = auVar34._0_4_;
        auVar34._8_4_ = auVar34._0_4_;
        auVar34._12_4_ = auVar34._0_4_;
        auVar53 = divps(auVar54,auVar34);
      }
      fVar44 = auVar53._0_4_;
      fVar50 = auVar53._4_4_;
      fVar52 = auVar53._8_4_;
      plVar31 = plVar32 + 8;
      plVar29 = plVar31 + (ulong)*(uint *)(plVar32 + 7) * 0x19;
      fVar51 = fVar50 * fVar10 - fVar11 * fVar44;
      if ((ulong)*(uint *)(plVar32 + 7) * 200 != 0) {
        do {
          if ((*(float *)(plVar31 + 0xe) != 0.0) || (*(float *)(plVar31 + 0x16) != 0.0)) {
            fVar45 = *(float *)(plVar32 + 6);
            fVar39 = *(float *)((long)plVar31 + 0x7c) * param_3;
            *(float *)((long)plVar31 + 0x7c) = fVar39;
            if (fVar39 != 0.0) {
              fVar45 = fVar45 * fVar39;
              bVar1 = *(byte *)((long)pfVar6 + 0x7a);
              auVar58._1_3_ = 0;
              auVar58[0] = bVar1;
              auVar58[4] = bVar1;
              auVar58._5_3_ = 0;
              auVar58[8] = bVar1;
              auVar58._9_3_ = 0;
              auVar58[0xc] = bVar1;
              auVar58._13_3_ = 0;
              auVar58 = auVar58 & auVar16;
              *pfVar6 = (float)((uint)(fVar45 * fVar44 + *pfVar6) & -(uint)(auVar58._0_4_ == iVar22)
                               );
              pfVar6[1] = (float)((uint)(fVar45 * fVar50 + pfVar6[1]) &
                                 -(uint)(auVar58._4_4_ == iVar24));
              pfVar6[2] = (float)((uint)(fVar45 * fVar52 + pfVar6[2]) &
                                 -(uint)(auVar58._8_4_ == iVar26));
              pfVar6[3] = (float)((uint)(fVar45 * auVar53._12_4_ + pfVar6[3]) &
                                 -(uint)(auVar58._12_4_ == iVar28));
              fVar45 = *(float *)(plVar31 + 0xd);
              fVar46 = *(float *)((long)plVar31 + 0x6c);
              fVar59 = *(float *)(plVar31 + 0xe);
              pfVar6[4] = fVar39 * *(float *)((long)plVar31 + 100) + pfVar6[4];
              pfVar6[5] = fVar39 * fVar45 + pfVar6[5];
              pfVar6[6] = fVar39 * fVar46 + pfVar6[6];
              pfVar6[7] = fVar39 * fVar59 + pfVar6[7];
            }
            fVar45 = *(float *)(plVar32 + 6);
            fVar39 = *(float *)((long)plVar31 + 0xbc) * param_3;
            *(float *)((long)plVar31 + 0xbc) = fVar39;
            if (fVar39 != 0.0) {
              fVar45 = fVar45 * fVar39;
              bVar1 = *(byte *)((long)pfVar6 + 0x7a);
              auVar57._1_3_ = 0;
              auVar57[0] = bVar1;
              auVar57[4] = bVar1;
              auVar57._5_3_ = 0;
              auVar57[8] = bVar1;
              auVar57._9_3_ = 0;
              auVar57[0xc] = bVar1;
              auVar57._13_3_ = 0;
              auVar57 = auVar57 & auVar16;
              *pfVar6 = (float)((uint)(fVar45 * (fVar52 * fVar11 - fVar12 * fVar50) + *pfVar6) &
                               -(uint)(auVar57._0_4_ == iVar21));
              pfVar6[1] = (float)((uint)(fVar45 * (fVar44 * fVar12 - fVar10 * fVar52) + pfVar6[1]) &
                                 -(uint)(auVar57._4_4_ == iVar23));
              pfVar6[2] = (float)((uint)(fVar45 * fVar51 + pfVar6[2]) &
                                 -(uint)(auVar57._8_4_ == iVar25));
              pfVar6[3] = (float)((uint)(fVar45 * fVar51 + pfVar6[3]) &
                                 -(uint)(auVar57._12_4_ == iVar27));
              fVar45 = *(float *)(plVar31 + 0x15);
              fVar46 = *(float *)((long)plVar31 + 0xac);
              fVar59 = *(float *)(plVar31 + 0x16);
              pfVar6[4] = fVar39 * *(float *)((long)plVar31 + 0xa4) + pfVar6[4];
              pfVar6[5] = fVar39 * fVar45 + pfVar6[5];
              pfVar6[6] = fVar39 * fVar46 + pfVar6[6];
              pfVar6[7] = fVar39 * fVar59 + pfVar6[7];
            }
          }
          fVar45 = *(float *)(plVar32 + 6);
          fVar39 = *(float *)((long)plVar31 + 0x3c) * param_3;
          *(float *)((long)plVar31 + 0x3c) = fVar39;
          if (fVar39 != 0.0) {
            fVar45 = fVar45 * fVar39;
            bVar1 = *(byte *)((long)pfVar6 + 0x7a);
            auVar56._1_3_ = 0;
            auVar56[0] = bVar1;
            auVar56[4] = bVar1;
            auVar56._5_3_ = 0;
            auVar56[8] = bVar1;
            auVar56._9_3_ = 0;
            auVar56[0xc] = bVar1;
            auVar56._13_3_ = 0;
            auVar56 = auVar56 & auVar16;
            *pfVar6 = (float)((uint)(fVar45 * fVar10 + *pfVar6) & -(uint)(auVar56._0_4_ == iVar21));
            pfVar6[1] = (float)((uint)(fVar45 * fVar11 + pfVar6[1]) &
                               -(uint)(auVar56._4_4_ == iVar23));
            pfVar6[2] = (float)((uint)(fVar45 * fVar12 + pfVar6[2]) &
                               -(uint)(auVar56._8_4_ == iVar25));
            pfVar6[3] = (float)((uint)(fVar45 * fVar13 + pfVar6[3]) &
                               -(uint)(auVar56._12_4_ == iVar27));
            fVar45 = *(float *)(plVar31 + 5);
            fVar46 = *(float *)((long)plVar31 + 0x2c);
            fVar59 = *(float *)(plVar31 + 6);
            pfVar6[4] = fVar39 * *(float *)((long)plVar31 + 0x24) + pfVar6[4];
            pfVar6[5] = fVar39 * fVar45 + pfVar6[5];
            pfVar6[6] = fVar39 * fVar46 + pfVar6[6];
            pfVar6[7] = fVar39 * fVar59 + pfVar6[7];
          }
          plVar31 = plVar31 + 0x19;
        } while (plVar31 != plVar29);
      }
    }
LAB_0010c9c0:
    param_2 = (uint *)((long)param_2 + 4);
    if (param_4 <= param_2) {
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool JPH::ContactConstraintManager::TemplatedAddContactConstraint<(JPH::EMotionType)2,
   (JPH::EMotionType)2>(JPH::ContactConstraintManager::ContactAllocator&, void*, JPH::Body&,
   JPH::Body&, JPH::ContactManifold const&) */

bool __thiscall
JPH::ContactConstraintManager::
TemplatedAddContactConstraint<(JPH::EMotionType)2,(JPH::EMotionType)2>
          (ContactConstraintManager *this,ContactAllocator *param_1,void *param_2,Body *param_3,
          Body *param_4,ContactManifold *param_5)

{
  ContactConstraintManager *pCVar1;
  undefined4 uVar2;
  SubShapeIDPair SVar3;
  Body BVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  bool bVar22;
  uint uVar23;
  SubShapeIDPair *pSVar24;
  long lVar25;
  ulong uVar26;
  float *pfVar28;
  long lVar29;
  ContactConstraint *pCVar30;
  long lVar31;
  ContactManifold *pCVar32;
  uint uVar33;
  ContactManifold *pCVar34;
  float *pfVar35;
  int *piVar36;
  ulong uVar37;
  float *pfVar38;
  ContactConstraint *pCVar39;
  float *pfVar40;
  long in_FS_OFFSET;
  byte bVar41;
  float fVar42;
  float fVar47;
  float fVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  uint uVar58;
  float fVar59;
  float fVar60;
  uint uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar67;
  float fVar69;
  float fVar72;
  undefined1 auVar65 [16];
  float fVar68;
  float fVar70;
  float fVar71;
  undefined1 auVar66 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float local_268;
  float fStack_264;
  float local_258;
  float fStack_254;
  float local_248;
  float fStack_244;
  float local_238;
  float fStack_234;
  undefined1 local_1e8 [12];
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  byte local_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  undefined1 local_d8 [8];
  float fStack_d0;
  Mat44 local_c8 [4];
  float afStack_c4 [15];
  float local_88 [18];
  long local_40;
  long *plVar27;
  
  bVar41 = 0;
  uVar37 = 0xcbf29ce484222325;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = *(int *)(param_3 + 0x70);
  iStack_114 = *(int *)(param_5 + 0x24);
  iStack_110 = *(int *)(param_4 + 0x70);
  iStack_10c = *(int *)(param_5 + 0x28);
  pSVar24 = (SubShapeIDPair *)&local_118;
  do {
    SVar3 = *pSVar24;
    pSVar24 = pSVar24 + 1;
    uVar37 = (uVar37 ^ (byte)SVar3) * 0x100000001b3;
  } while (pSVar24 != (SubShapeIDPair *)&local_108);
  iVar5 = *(int *)(this + 0x88);
  uVar6 = *(uint *)(param_5 + 0x30);
  lVar25 = ManifoldCache::Create
                     ((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8),param_1,
                      (SubShapeIDPair *)&local_118,uVar37,uVar6);
  if (lVar25 == 0) {
LAB_0010e785:
    bVar22 = false;
  }
  else {
    fVar70 = *(float *)param_4;
    fVar51 = *(float *)(param_4 + 4);
    fVar55 = *(float *)(param_4 + 8);
    fVar62 = (float)(*(uint *)(param_4 + 0x10) ^ __LC17);
    fVar67 = (float)(*(uint *)(param_4 + 0x14) ^ _UNK_00116354);
    fVar69 = (float)(*(uint *)(param_4 + 0x18) ^ _UNK_00116358);
    fVar72 = (float)(*(uint *)(param_4 + 0x1c) ^ _UNK_0011635c);
    fVar89 = fVar62 + fVar62;
    fVar76 = fVar67 + fVar67;
    fVar100 = fVar69 * (fVar69 + fVar69);
    fVar82 = (fVar69 + fVar69) * fVar72;
    fVar80 = fVar67 * fVar89 + fVar82;
    fVar82 = fVar67 * fVar89 - fVar82;
    fVar106 = fVar69 * fVar89 - fVar76 * fVar72;
    fVar63 = (_LC1 - fVar62 * fVar89) - fVar67 * fVar76;
    fVar108 = fVar69 * fVar89 + fVar76 * fVar72;
    fVar50 = fVar69 * fVar76 - fVar89 * fVar72;
    fVar90 = fVar89 * fVar72 + fVar69 * fVar76;
    fVar72 = (_LC1 - fVar100) - fVar62 * fVar89;
    fVar100 = (_LC1 - fVar67 * fVar76) - fVar100;
    fVar62 = 0.0 - (fVar70 * fVar100 + fVar51 * fVar82 + fVar55 * fVar108);
    fVar67 = 0.0 - (fVar70 * fVar80 + fVar51 * fVar72 + fVar55 * fVar50);
    fVar69 = 0.0 - (fVar70 * fVar106 + fVar51 * fVar90 + fVar55 * fVar63);
    fVar70 = *(float *)(param_5 + 0x10);
    fVar51 = *(float *)(param_5 + 0x14);
    fVar55 = *(float *)(param_5 + 0x18);
    auVar43._0_4_ = fVar51 * fVar82 + fVar70 * fVar100 + fVar55 * fVar108;
    auVar43._4_4_ = fVar51 * fVar72 + fVar70 * fVar80 + fVar55 * fVar50;
    auVar43._8_4_ = fVar51 * fVar90 + fVar70 * fVar106 + fVar55 * fVar63;
    auVar43._12_4_ = fVar51 * 0.0 + fVar70 * 0.0 + fVar55 * 0.0;
    auVar65._0_4_ =
         SQRT(auVar43._8_4_ * auVar43._8_4_ +
              auVar43._4_4_ * auVar43._4_4_ + auVar43._0_4_ * auVar43._0_4_ + 0.0);
    auVar65._4_4_ = auVar65._0_4_;
    auVar65._8_4_ = auVar65._0_4_;
    auVar65._12_4_ = auVar65._0_4_;
    auVar43 = divps(auVar43,auVar65);
    *(long *)(lVar25 + 0x18) = auVar43._0_8_;
    *(int *)(lVar25 + 0x20) = auVar43._8_4_;
    _local_e8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_100 = _LC1;
    fStack_fc = _LC1;
    fStack_f8 = _LC1;
    fStack_f4 = _LC1;
    local_108 = (float)(**(code **)(this + 0xa0))(param_3,param_5 + 0x24,param_4);
    local_104 = (float)(**(code **)(this + 0xa8))(param_3,param_5 + 0x24,param_4,param_5 + 0x28);
    BVar4 = param_3[0x79];
    if (((byte)BVar4 & 1) == 0) {
      BVar4 = param_4[0x79];
    }
    local_f0 = (byte)BVar4 & 1;
    uVar26 = (long)*(int *)(this + 0x88) ^ 1;
    uVar23 = *(uint *)(*(long *)(this + uVar26 * 0x40 + 0x20) +
                      (*(int *)(this + uVar26 * 0x40 + 0x28) - 1 & uVar37) * 4);
    if (uVar23 != 0xffffffff) {
      plVar27 = *(long **)(this + uVar26 * 0x40 + 0x18);
      lVar31 = *plVar27;
      do {
        piVar36 = (int *)((ulong)uVar23 + lVar31);
        auVar44._0_4_ = -(uint)(*piVar36 == local_118);
        auVar44._4_4_ = -(uint)(piVar36[1] == iStack_114);
        auVar44._8_4_ = -(uint)(piVar36[2] == iStack_110);
        auVar44._12_4_ = -(uint)(piVar36[3] == iStack_10c);
        uVar23 = movmskps((int)plVar27,auVar44);
        plVar27 = (long *)(ulong)uVar23;
        if (uVar23 == 0xf) {
          plVar27 = *(long **)(this + 0x98);
          if ((plVar27 != (long *)0x0) &&
             (*(code **)(*plVar27 + 0x20) != ContactListener::OnContactPersisted)) {
            (**(code **)(*plVar27 + 0x20))
                      (plVar27,param_3,param_4,param_5,(SubShapeIDPair *)&local_108);
          }
          uVar61 = _UNK_0011635c;
          uVar58 = _UNK_00116358;
          uVar33 = _UNK_00116354;
          uVar23 = __LC17;
          pfVar28 = (float *)(piVar36 + 10);
          pfVar40 = pfVar28 + (ulong)*(ushort *)((long)piVar36 + 0x26) * 9;
          LOCK();
          *(ushort *)(piVar36 + 9) = *(ushort *)(piVar36 + 9) | 1;
          UNLOCK();
          goto LAB_0010d4c8;
        }
        uVar23 = piVar36[4];
      } while (uVar23 != 0xffffffff);
    }
    plVar27 = *(long **)(this + 0x98);
    if ((plVar27 != (long *)0x0) && (*(code **)(*plVar27 + 0x18) != ContactListener::OnContactAdded)
       ) {
      (**(code **)(*plVar27 + 0x18))(plVar27,param_3,param_4,param_5);
    }
    pfVar40 = (float *)0x0;
    pfVar28 = (float *)0x0;
    uVar23 = __LC17;
    uVar33 = _UNK_00116354;
    uVar58 = _UNK_00116358;
    uVar61 = _UNK_0011635c;
LAB_0010d4c8:
    fVar70 = *(float *)param_3;
    fVar51 = *(float *)(param_3 + 4);
    fVar55 = *(float *)(param_3 + 8);
    fVar76 = (float)(*(uint *)(param_3 + 0x10) ^ uVar23);
    fVar47 = (float)(*(uint *)(param_3 + 0x14) ^ uVar33);
    fVar48 = (float)(*(uint *)(param_3 + 0x18) ^ uVar58);
    fVar49 = (float)(*(uint *)(param_3 + 0x1c) ^ uVar61);
    fVar101 = fVar76 + fVar76;
    fVar73 = fVar47 + fVar47;
    fVar81 = fVar48 * (fVar48 + fVar48);
    fVar89 = fVar49 * (fVar48 + fVar48);
    fVar109 = fVar48 * fVar101 + fVar73 * fVar49;
    fVar97 = fVar48 * fVar101 - fVar73 * fVar49;
    fVar107 = fVar48 * fVar73 - fVar101 * fVar49;
    fVar105 = (_LC1 - fVar76 * fVar101) - fVar47 * fVar73;
    fVar74 = (_LC1 - fVar47 * fVar73) - fVar81;
    fVar73 = fVar101 * fVar49 + fVar48 * fVar73;
    fVar48 = (_LC1 - fVar81) - fVar76 * fVar101;
    fVar49 = fVar47 * fVar101 - fVar89;
    fVar89 = fVar89 + fVar47 * fVar101;
    fVar76 = 0.0 - (fVar55 * fVar109 + fVar70 * fVar74 + fVar51 * fVar49);
    fVar47 = 0.0 - (fVar55 * fVar107 + fVar70 * fVar89 + fVar51 * fVar48);
    fVar70 = 0.0 - (fVar55 * fVar105 + fVar70 * fVar97 + fVar51 * fVar73);
    if ((local_f0 == 0) &&
       (((param_3[0x78] == (Body)0x2 && (local_100 != 0.0)) ||
        ((param_4[0x78] == (Body)0x2 && (fStack_f8 != 0.0)))))) {
      LOCK();
      pCVar1 = this + 0xbc;
      uVar23 = *(uint *)pCVar1;
      *(uint *)pCVar1 = *(uint *)pCVar1 + 1;
      UNLOCK();
      if (*(uint *)(this + 0xb8) <= uVar23) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
        *(undefined2 *)(lVar25 + 0x26) = 0;
        goto LAB_0010e785;
      }
      pCVar39 = (ContactConstraint *)(*(long *)(this + 0xb0) + (ulong)uVar23 * 0x360);
      pCVar30 = pCVar39;
      for (lVar31 = 0x6c; lVar31 != 0; lVar31 = lVar31 + -1) {
        *(undefined8 *)pCVar30 = 0;
        pCVar30 = pCVar30 + (ulong)bVar41 * -0x10 + 8;
      }
      *(Body **)pCVar39 = param_3;
      *(Body **)(pCVar39 + 8) = param_4;
      uVar2 = *(undefined4 *)(param_5 + 0x10);
      lVar31 = *(long *)(param_3 + 0x48);
      *(ulong *)(pCVar39 + 0x10) = uVar37;
      *(undefined4 *)(pCVar39 + 0x18) = uVar2;
      *(undefined8 *)(pCVar39 + 0x1c) = *(undefined8 *)(param_5 + 0x14);
      *(float *)(pCVar39 + 0x24) = local_108;
      fVar51 = 0.0;
      if (lVar31 != 0) {
        fVar51 = local_100 * *(float *)(lVar31 + 0x58);
      }
      lVar29 = *(long *)(this + 0xc0);
      *(ulong *)(pCVar39 + 0x28) = CONCAT44(fStack_fc,fVar51);
      uVar7 = *(undefined8 *)(lVar29 + 0x40);
      if (*(long *)(param_4 + 0x48) == 0) {
        fVar51 = 0.0;
      }
      else {
        fVar51 = fStack_f8 * *(float *)(*(long *)(param_4 + 0x48) + 0x58);
      }
      *(ulong *)(pCVar39 + 0x30) = CONCAT44(fStack_f4,fVar51);
      if (lVar31 == 0) {
        uVar33 = 0xffffffff;
      }
      else {
        uVar33 = *(uint *)(lVar31 + 0x70);
      }
      JPH::IslandBuilder::LinkContact((uint)uVar7,uVar23,uVar33);
      fVar51 = *(float *)(param_5 + 0x10);
      puVar8 = *(undefined8 **)(param_3 + 0x48);
      fVar55 = *(float *)(*(long **)(this + 0xc0) + 4);
      lVar31 = **(long **)(this + 0xc0);
      fVar98 = *(float *)(lVar31 + 0x400);
      fVar99 = *(float *)(lVar31 + 0x404);
      fVar11 = *(float *)(lVar31 + 0x408);
      fVar81 = *(float *)(param_5 + 0x14);
      fVar101 = *(float *)(param_5 + 0x18);
      fVar52 = local_100 * *(float *)(puVar8 + 0xb);
      MotionProperties::GetInverseInertiaForRotation(local_c8);
      lVar31 = 0;
      do {
        fVar12 = *(float *)((long)afStack_c4 + lVar31 + 4);
        fVar13 = *(float *)((long)afStack_c4 + lVar31 + 8);
        *(float *)((long)local_88 + lVar31) = *(float *)(local_c8 + lVar31) * fStack_fc;
        uVar7 = local_88._0_8_;
        *(float *)((long)local_88 + lVar31 + 4) = *(float *)((long)afStack_c4 + lVar31) * fStack_fc;
        *(float *)((long)local_88 + lVar31 + 8) = fVar12 * fStack_fc;
        fVar12 = local_88[2];
        *(float *)((long)local_88 + lVar31 + 0xc) = fVar13 * fStack_fc;
        uVar20 = local_88._32_8_;
        fVar19 = local_88[6];
        fVar18 = local_88[5];
        fVar13 = local_88[4];
        fVar21 = local_88[10];
        lVar31 = lVar31 + 0x10;
      } while (lVar31 != 0x40);
      pfVar9 = *(float **)(param_4 + 0x48);
      fVar42 = fStack_f8 * pfVar9[0x16];
      MotionProperties::GetInverseInertiaForRotation(local_c8);
      uVar23 = _LC20;
      lVar31 = 0;
      do {
        fVar59 = *(float *)((long)afStack_c4 + lVar31 + 4);
        fVar56 = *(float *)((long)afStack_c4 + lVar31 + 8);
        *(float *)((long)local_88 + lVar31) = *(float *)(local_c8 + lVar31) * fStack_f4;
        *(float *)((long)local_88 + lVar31 + 4) = *(float *)((long)afStack_c4 + lVar31) * fStack_f4;
        *(float *)((long)local_88 + lVar31 + 8) = fVar59 * fStack_f4;
        *(float *)((long)local_88 + lVar31 + 0xc) = fVar56 * fStack_f4;
        lVar31 = lVar31 + 0x10;
      } while (lVar31 != 0x40);
      fVar59 = *(float *)(pCVar39 + 0x18);
      fVar56 = *(float *)(pCVar39 + 0x1c);
      fVar54 = *(float *)(pCVar39 + 0x20);
      if ((float)((uint)fVar56 & _LC10) < (float)(_LC10 & (uint)fVar59)) {
        auVar66._4_4_ = 0;
        auVar66._0_4_ = fVar54;
        auVar66._12_4_ = (uint)fVar59 ^ _LC20;
        auVar66._8_4_ = (uint)fVar59 ^ _LC20;
        auVar46._0_4_ = SQRT(fVar59 * fVar59 + fVar54 * fVar54);
        auVar46._4_4_ = auVar46._0_4_;
        auVar46._8_4_ = auVar46._0_4_;
        auVar46._12_4_ = auVar46._0_4_;
        auVar43 = divps(auVar66,auVar46);
        local_1e8 = auVar43._0_12_;
      }
      else {
        auVar10._8_4_ = (uint)fVar56 ^ _LC20;
        auVar10._4_4_ = (uint)fVar56 ^ _LC20;
        auVar10._0_4_ = fVar54;
        auVar10._12_4_ = 0;
        fVar53 = SQRT(fVar56 * fVar56 + fVar54 * fVar54);
        auVar45._4_4_ = fVar53;
        auVar45._0_4_ = fVar53;
        auVar45._8_4_ = fVar53;
        auVar45._12_4_ = fVar53;
        auVar43 = divps(auVar10 << 0x20,auVar45);
        local_1e8 = auVar43._0_12_;
      }
      fVar83 = local_1e8._0_4_;
      fVar85 = local_1e8._4_4_;
      fVar87 = local_1e8._8_4_;
      pCVar30 = pCVar39 + 0x40;
      lVar31 = (ulong)*(uint *)(pCVar39 + 0x38) * 200;
      fVar53 = fVar85 * fVar59 - fVar56 * fVar83;
      fVar56 = fVar87 * fVar56 - fVar54 * fVar85;
      fVar59 = fVar83 * fVar54 - fVar59 * fVar87;
      if (pCVar30 + lVar31 < pCVar30 + (ulong)uVar6 * 200) {
        uVar37 = 0;
        lVar29 = 0;
        do {
          uVar37 = uVar37 + 1;
          *(undefined1 (*) [16])(pCVar39 + lVar29 + lVar31 + 0x70) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar39 + lVar29 + lVar31 + 0xb0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar39 + lVar29 + lVar31 + 0xf0) = (undefined1  [16])0x0;
          lVar29 = lVar29 + 200;
        } while (uVar37 < (ulong)(pCVar30 + (ulong)uVar6 * 200 + (-1 - (long)(pCVar30 + lVar31))) /
                          200 + 1);
      }
      *(uint *)(pCVar39 + 0x38) = uVar6;
      if (0 < (int)uVar6) {
        pfVar35 = (float *)(lVar25 + 0x28);
        lVar31 = *(long *)(this + 0x90);
        pCVar32 = param_5 + 0x40;
        do {
          fVar54 = *(float *)pCVar32 + *(float *)param_5;
          fVar57 = *(float *)(pCVar32 + 4) + *(float *)(param_5 + 4);
          fVar60 = *(float *)(pCVar32 + 8) + *(float *)(param_5 + 8);
          fVar77 = *(float *)param_5 + *(float *)(pCVar32 + 0x410);
          fVar78 = *(float *)(param_5 + 4) + *(float *)(pCVar32 + 0x414);
          fVar79 = *(float *)(param_5 + 8) + *(float *)(pCVar32 + 0x418);
          fVar84 = fVar54 * fVar74 + fVar57 * fVar49 + fVar60 * fVar109 + fVar76;
          fVar86 = fVar54 * fVar89 + fVar57 * fVar48 + fVar60 * fVar107 + fVar47;
          fVar88 = fVar54 * fVar97 + fVar57 * fVar73 + fVar60 * fVar105 + fVar70;
          fVar91 = fVar77 * fVar100 + fVar78 * fVar82 + fVar79 * fVar108 + fVar62;
          fVar92 = fVar77 * fVar80 + fVar78 * fVar72 + fVar79 * fVar50 + fVar67;
          fVar94 = fVar77 * fVar106 + fVar78 * fVar90 + fVar79 * fVar63 + fVar69;
          if (pfVar28 < pfVar40) {
            fVar75 = *(float *)(lVar31 + 0x34);
            pfVar38 = pfVar28;
            do {
              fVar64 = fVar84 - *pfVar38;
              fVar68 = fVar86 - pfVar38[1];
              fVar71 = fVar88 - pfVar38[2];
              if ((fVar71 * fVar71 + fVar68 * fVar68 + fVar64 * fVar64 + 0.0 <= fVar75) &&
                 (fVar64 = fVar91 - pfVar38[3], fVar68 = fVar92 - pfVar38[4],
                 fVar71 = fVar94 - pfVar38[5],
                 fVar71 * fVar71 + fVar68 * fVar68 + fVar64 * fVar64 + 0.0 <= fVar75)) {
                *(float *)(pCVar30 + 0x3c) = pfVar38[6];
                *(float *)(pCVar30 + 0x7c) = pfVar38[7];
                fVar75 = pfVar38[8];
                goto LAB_0010df55;
              }
              pfVar38 = pfVar38 + 9;
            } while (pfVar38 < pfVar40);
          }
          *(undefined4 *)(pCVar30 + 0x3c) = 0;
          fVar75 = 0.0;
          *(undefined4 *)(pCVar30 + 0x7c) = 0;
LAB_0010df55:
          *(float *)(pCVar30 + 0xbc) = fVar75;
          *(ulong *)(pfVar35 + 4) = CONCAT44(fVar94,fVar92);
          *pfVar35 = fVar84;
          pfVar35[1] = fVar86;
          pfVar35[2] = fVar88;
          pfVar35[3] = fVar91;
          uVar14 = *(undefined8 *)(param_5 + 0x10);
          uVar15 = *(undefined8 *)(param_5 + 0x18);
          uVar16 = *puVar8;
          uVar17 = puVar8[1];
          fVar91 = (fVar77 + fVar54) * _LC6;
          fVar92 = (fVar78 + fVar57) * _UNK_00116314;
          fVar94 = (fVar79 + fVar60) * _UNK_00116318;
          *(float **)(pCVar30 + 0xc0) = pfVar35;
          fVar84 = (float)uVar14;
          fVar86 = (float)((ulong)uVar14 >> 0x20);
          fVar88 = (float)uVar15;
          fVar75 = fVar91 - *(float *)param_3;
          fVar64 = fVar92 - *(float *)(param_3 + 4);
          fVar68 = fVar94 - *(float *)(param_3 + 8);
          fVar91 = fVar91 - *(float *)param_4;
          fVar92 = fVar92 - *(float *)(param_4 + 4);
          fVar94 = fVar94 - *(float *)(param_4 + 8);
          fVar54 = (float)((uint)((fVar60 - fVar79) * fVar88 +
                                 (fVar57 - fVar78) * fVar86 + (fVar54 - fVar77) * fVar84 + 0.0) ^
                          uVar23) / fVar55;
          if (fVar54 <= 0.0) {
            fVar54 = 0.0;
          }
          if (0.0 < local_104) {
            local_2d8 = (float)uVar16;
            fStack_2d4 = (float)((ulong)uVar16 >> 0x20);
            fStack_2d0 = (float)uVar17;
            fVar57 = (((fVar92 * pfVar9[4] - pfVar9[5] * fVar91) + pfVar9[2]) -
                     ((fVar64 * *(float *)(puVar8 + 2) - *(float *)((long)puVar8 + 0x14) * fVar75) +
                     fStack_2d0)) * fVar88 +
                     (((fVar91 * pfVar9[6] - pfVar9[4] * fVar94) + pfVar9[1]) -
                     ((fVar75 * *(float *)(puVar8 + 3) - *(float *)(puVar8 + 2) * fVar68) +
                     fStack_2d4)) * fVar86 +
                     (((fVar94 * pfVar9[5] - pfVar9[6] * fVar92) + *pfVar9) -
                     ((fVar68 * *(float *)((long)puVar8 + 0x14) - *(float *)(puVar8 + 3) * fVar64) +
                     local_2d8)) * fVar84 + 0.0;
            if ((fVar57 < (float)(*(uint *)(lVar31 + 0x40) ^ uVar23)) &&
               (fVar57 < (float)(uVar23 ^ (uint)fVar54))) {
              fVar54 = (fVar57 - (pfVar9[0x1b] - *(float *)((long)puVar8 + 0x6c)) *
                                 (fVar55 * fVar11 * fVar101 +
                                 fVar55 * fVar99 * fVar81 + fVar51 * fVar55 * fVar98 + 0.0)) *
                       local_104;
            }
          }
          local_238 = (float)uVar7;
          fStack_234 = SUB84(uVar7,4);
          fVar102 = fVar75 * fVar86 - fVar84 * fVar64;
          fVar103 = fVar64 * fVar88 - fVar86 * fVar68;
          fVar104 = fVar68 * fVar84 - fVar88 * fVar75;
          fVar79 = fVar86 * fVar91 - fVar84 * fVar92;
          fVar86 = fVar88 * fVar92 - fVar86 * fVar94;
          fVar84 = fVar84 * fVar94 - fVar88 * fVar91;
          local_248 = (float)uVar20;
          fStack_244 = SUB84(uVar20,4);
          fVar88 = local_238 * fVar103 + fVar104 * fVar13 + fVar102 * local_248;
          fVar71 = fStack_234 * fVar103 + fVar104 * fVar18 + fVar102 * fStack_244;
          fVar95 = fVar12 * fVar103 + fVar104 * fVar19 + fVar102 * fVar21;
          local_258 = (float)local_88._0_8_;
          fStack_254 = SUB84(local_88._0_8_,4);
          local_268 = (float)local_88._32_8_;
          fStack_264 = SUB84(local_88._32_8_,4);
          fVar60 = local_258 * fVar86 + fVar84 * local_88[4] + fVar79 * local_268;
          fVar77 = fStack_254 * fVar86 + fVar84 * local_88[5] + fVar79 * fStack_264;
          fVar78 = local_88[2] * fVar86 + fVar84 * local_88[6] + fVar79 * local_88[10];
          *(float *)pCVar30 = fVar103;
          *(float *)(pCVar30 + 4) = fVar104;
          *(float *)(pCVar30 + 8) = fVar102;
          *(float *)(pCVar30 + 0xc) = fVar86;
          *(float *)(pCVar30 + 0x10) = fVar84;
          *(float *)(pCVar30 + 0x14) = fVar79;
          *(float *)(pCVar30 + 0x18) = fVar88;
          *(float *)(pCVar30 + 0x1c) = fVar71;
          *(float *)(pCVar30 + 0x20) = fVar95;
          *(float *)(pCVar30 + 0x24) = fVar60;
          *(float *)(pCVar30 + 0x28) = fVar77;
          *(float *)(pCVar30 + 0x2c) = fVar78;
          fVar57 = _LC1;
          fVar60 = fVar78 * fVar79 + fVar77 * fVar84 + fVar60 * fVar86 + 0.0 + fVar42 +
                   fVar95 * fVar102 + fVar71 * fVar104 + fVar88 * fVar103 + 0.0 + fVar52;
          if (fVar60 == 0.0) {
            *(undefined4 *)(pCVar30 + 0x3c) = 0;
            fVar57 = 0.0;
          }
          else {
            *(undefined4 *)(pCVar30 + 0x38) = 0;
            *(float *)(pCVar30 + 0x34) = fVar54;
            fVar57 = fVar57 / fVar60;
          }
          *(float *)(pCVar30 + 0x30) = fVar57;
          if (local_108 <= 0.0) {
            *(undefined4 *)(pCVar30 + 0x70) = 0;
            *(undefined4 *)(pCVar30 + 0x7c) = 0;
            *(undefined4 *)(pCVar30 + 0xb0) = 0;
            *(undefined4 *)(pCVar30 + 0xbc) = 0;
          }
          else {
            fVar57 = (fVar68 * (float)local_d8._4_4_ - fStack_d0 * fVar64) + (float)local_e8._0_4_;
            fVar77 = (fVar75 * fStack_d0 - (float)local_d8._0_4_ * fVar68) + (float)local_e8._4_4_;
            fVar79 = (fVar64 * (float)local_d8._0_4_ - (float)local_d8._4_4_ * fVar75) + fStack_e0;
            fVar95 = fVar85 * fVar75 - fVar83 * fVar64;
            fVar102 = fVar87 * fVar64 - fVar85 * fVar68;
            fVar103 = fVar83 * fVar68 - fVar87 * fVar75;
            fVar86 = fVar85 * fVar91 - fVar83 * fVar92;
            fVar88 = fVar87 * fVar92 - fVar85 * fVar94;
            fVar71 = fVar83 * fVar94 - fVar87 * fVar91;
            fVar104 = local_238 * fVar102 + fVar103 * fVar13 + fVar95 * local_248;
            fVar93 = fStack_234 * fVar102 + fVar103 * fVar18 + fVar95 * fStack_244;
            fVar96 = fVar12 * fVar102 + fVar103 * fVar19 + fVar95 * fVar21;
            fVar60 = local_258 * fVar88 + fVar71 * local_88[4] + fVar86 * local_268;
            fVar78 = fStack_254 * fVar88 + fVar71 * local_88[5] + fVar86 * fStack_264;
            fVar84 = local_88[2] * fVar88 + fVar71 * local_88[6] + fVar86 * local_88[10];
            *(float *)(pCVar30 + 0x40) = fVar102;
            *(float *)(pCVar30 + 0x44) = fVar103;
            *(float *)(pCVar30 + 0x48) = fVar95;
            *(float *)(pCVar30 + 0x4c) = fVar88;
            *(float *)(pCVar30 + 0x50) = fVar71;
            *(float *)(pCVar30 + 0x54) = fVar86;
            *(float *)(pCVar30 + 0x58) = fVar104;
            *(float *)(pCVar30 + 0x5c) = fVar93;
            *(float *)(pCVar30 + 0x60) = fVar96;
            *(float *)(pCVar30 + 100) = fVar60;
            *(float *)(pCVar30 + 0x68) = fVar78;
            *(float *)(pCVar30 + 0x6c) = fVar84;
            fVar54 = _LC1;
            fVar60 = fVar84 * fVar86 + fVar78 * fVar71 + fVar60 * fVar88 + 0.0 + fVar42 +
                     fVar96 * fVar95 + fVar93 * fVar103 + fVar104 * fVar102 + 0.0 + fVar52;
            if (fVar60 == 0.0) {
              *(undefined4 *)(pCVar30 + 0x7c) = 0;
              fVar54 = 0.0;
            }
            else {
              *(undefined4 *)(pCVar30 + 0x78) = 0;
              fVar54 = fVar54 / fVar60;
              *(float *)(pCVar30 + 0x74) = fVar87 * fVar79 + fVar83 * fVar57 + 0.0 + fVar85 * fVar77
              ;
            }
            *(float *)(pCVar30 + 0x70) = fVar54;
            fVar71 = fVar75 * fVar59 - fVar64 * fVar56;
            fVar64 = fVar64 * fVar53 - fVar68 * fVar59;
            fVar75 = fVar68 * fVar56 - fVar75 * fVar53;
            fVar86 = fVar91 * fVar59 - fVar92 * fVar56;
            fVar88 = fVar92 * fVar53 - fVar94 * fVar59;
            fVar91 = fVar94 * fVar56 - fVar91 * fVar53;
            fVar92 = local_238 * fVar64 + fVar75 * fVar13 + fVar71 * local_248;
            fVar94 = fStack_234 * fVar64 + fVar75 * fVar18 + fVar71 * fStack_244;
            fVar68 = fVar12 * fVar64 + fVar75 * fVar19 + fVar71 * fVar21;
            fVar60 = local_258 * fVar88 + fVar91 * local_88[4] + fVar86 * local_268;
            fVar78 = fStack_254 * fVar88 + fVar91 * local_88[5] + fVar86 * fStack_264;
            fVar84 = local_88[2] * fVar88 + fVar91 * local_88[6] + fVar86 * local_88[10];
            *(float *)(pCVar30 + 0x80) = fVar64;
            *(float *)(pCVar30 + 0x84) = fVar75;
            *(float *)(pCVar30 + 0x88) = fVar71;
            *(float *)(pCVar30 + 0x8c) = fVar88;
            *(float *)(pCVar30 + 0x90) = fVar91;
            *(float *)(pCVar30 + 0x94) = fVar86;
            *(float *)(pCVar30 + 0x98) = fVar92;
            *(float *)(pCVar30 + 0x9c) = fVar94;
            *(float *)(pCVar30 + 0xa0) = fVar68;
            *(float *)(pCVar30 + 0xa4) = fVar60;
            *(float *)(pCVar30 + 0xa8) = fVar78;
            *(float *)(pCVar30 + 0xac) = fVar84;
            fVar54 = _LC1;
            fVar60 = fVar84 * fVar86 + fVar78 * fVar91 + fVar60 * fVar88 + 0.0 + fVar42 +
                     fVar52 + fVar68 * fVar71 + fVar94 * fVar75 + fVar92 * fVar64 + 0.0;
            if (fVar60 == 0.0) {
              *(undefined4 *)(pCVar30 + 0xbc) = 0;
              fVar54 = 0.0;
            }
            else {
              *(undefined4 *)(pCVar30 + 0xb8) = 0;
              fVar54 = fVar54 / fVar60;
              *(float *)(pCVar30 + 0xb4) = fVar53 * fVar79 + fVar77 * fVar59 + fVar57 * fVar56 + 0.0
              ;
            }
            *(float *)(pCVar30 + 0xb0) = fVar54;
          }
          pCVar32 = pCVar32 + 0x10;
          pCVar30 = pCVar30 + 200;
          pfVar35 = pfVar35 + 9;
        } while (pCVar32 != param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50);
      }
      if (sDrawContactManifolds != '\0') {
        ContactConstraint::Draw(pCVar39,DebugRenderer::sInstance,_sOrange);
      }
      bVar22 = true;
    }
    else {
      if (0 < (int)uVar6) {
        pfVar28 = (float *)(lVar25 + 0x28);
        pCVar32 = param_5 + 0x40;
        do {
          pCVar34 = pCVar32 + 0x10;
          fVar101 = *(float *)pCVar32 + *(float *)param_5;
          fVar98 = *(float *)(pCVar32 + 4) + *(float *)(param_5 + 4);
          fVar99 = *(float *)(pCVar32 + 8) + *(float *)(param_5 + 8);
          fVar51 = *(float *)param_5 + *(float *)(pCVar32 + 0x410);
          fVar55 = *(float *)(param_5 + 4) + *(float *)(pCVar32 + 0x414);
          fVar81 = *(float *)(param_5 + 8) + *(float *)(pCVar32 + 0x418);
          pfVar28[6] = 0.0;
          pfVar28[7] = 0.0;
          pfVar28[8] = 0.0;
          *(ulong *)(pfVar28 + 4) =
               CONCAT44(fVar51 * fVar106 + fVar55 * fVar90 + fVar81 * fVar63 + fVar69,
                        fVar51 * fVar80 + fVar55 * fVar72 + fVar81 * fVar50 + fVar67);
          *pfVar28 = fVar101 * fVar74 + fVar98 * fVar49 + fVar99 * fVar109 + fVar76;
          pfVar28[1] = fVar101 * fVar89 + fVar98 * fVar48 + fVar99 * fVar107 + fVar47;
          pfVar28[2] = fVar101 * fVar97 + fVar98 * fVar73 + fVar99 * fVar105 + fVar70;
          pfVar28[3] = fVar51 * fVar100 + fVar55 * fVar82 + fVar81 * fVar108 + fVar62;
          pfVar28 = pfVar28 + 9;
          pCVar32 = pCVar34;
        } while (pCVar34 != param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50);
      }
      bVar22 = false;
    }
    *(undefined4 *)(lVar25 + 0x14) = *(undefined4 *)((long)param_2 + 0x18);
    *(int *)((long)param_2 + 0x18) =
         (int)lVar25 -
         (int)**(undefined8 **)((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8) + 0x10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar22;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool JPH::ContactConstraintManager::TemplatedAddContactConstraint<(JPH::EMotionType)2,
   (JPH::EMotionType)1>(JPH::ContactConstraintManager::ContactAllocator&, void*, JPH::Body&,
   JPH::Body&, JPH::ContactManifold const&) */

bool __thiscall
JPH::ContactConstraintManager::
TemplatedAddContactConstraint<(JPH::EMotionType)2,(JPH::EMotionType)1>
          (ContactConstraintManager *this,ContactAllocator *param_1,void *param_2,Body *param_3,
          Body *param_4,ContactManifold *param_5)

{
  ContactConstraintManager *pCVar1;
  undefined4 uVar2;
  SubShapeIDPair SVar3;
  Body BVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  SubShapeIDPair *pSVar17;
  long lVar18;
  ulong uVar19;
  float *pfVar21;
  long lVar22;
  ContactConstraint *pCVar23;
  long lVar24;
  ContactManifold *pCVar25;
  uint uVar26;
  ContactManifold *pCVar27;
  float *pfVar28;
  int *piVar29;
  ulong uVar30;
  float *pfVar31;
  ContactConstraint *pCVar32;
  float *pfVar33;
  long in_FS_OFFSET;
  byte bVar34;
  float fVar35;
  float fVar36;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar47;
  float fVar50;
  float fVar53;
  undefined1 auVar44 [16];
  float fVar48;
  float fVar51;
  undefined1 auVar45 [16];
  float fVar49;
  float fVar52;
  undefined1 auVar46 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar61;
  float fVar62;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float local_288;
  float fStack_284;
  float fStack_280;
  float local_228;
  float fStack_224;
  float fStack_220;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined1 local_1d8 [12];
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  byte local_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  undefined1 local_d8 [8];
  float fStack_d0;
  Mat44 local_c8 [4];
  float afStack_c4 [33];
  long local_40;
  long *plVar20;
  uint uVar60;
  uint uVar63;
  
  bVar34 = 0;
  uVar30 = 0xcbf29ce484222325;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = *(int *)(param_3 + 0x70);
  iStack_114 = *(int *)(param_5 + 0x24);
  iStack_110 = *(int *)(param_4 + 0x70);
  iStack_10c = *(int *)(param_5 + 0x28);
  pSVar17 = (SubShapeIDPair *)&local_118;
  do {
    SVar3 = *pSVar17;
    pSVar17 = pSVar17 + 1;
    uVar30 = (uVar30 ^ (byte)SVar3) * 0x100000001b3;
  } while (pSVar17 != (SubShapeIDPair *)&local_108);
  iVar5 = *(int *)(this + 0x88);
  uVar6 = *(uint *)(param_5 + 0x30);
  lVar18 = ManifoldCache::Create
                     ((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8),param_1,
                      (SubShapeIDPair *)&local_118,uVar30,uVar6);
  if (lVar18 == 0) {
LAB_0010fbf2:
    bVar15 = false;
  }
  else {
    fVar51 = *(float *)param_4;
    fVar43 = *(float *)(param_4 + 4);
    fVar48 = *(float *)(param_4 + 8);
    fVar41 = (float)(*(uint *)(param_4 + 0x10) ^ __LC17);
    fVar47 = (float)(*(uint *)(param_4 + 0x14) ^ _UNK_00116354);
    fVar50 = (float)(*(uint *)(param_4 + 0x18) ^ _UNK_00116358);
    fVar53 = (float)(*(uint *)(param_4 + 0x1c) ^ _UNK_0011635c);
    fVar67 = fVar41 + fVar41;
    fVar82 = fVar47 + fVar47;
    fVar89 = fVar50 * (fVar50 + fVar50);
    fVar42 = fVar53 * (fVar50 + fVar50);
    fVar93 = fVar50 * fVar67 + fVar82 * fVar53;
    fVar96 = fVar50 * fVar82 - fVar67 * fVar53;
    fVar68 = fVar67 * fVar53 + fVar50 * fVar82;
    fVar74 = fVar50 * fVar67 - fVar82 * fVar53;
    fVar92 = (_LC1 - fVar41 * fVar67) - fVar47 * fVar82;
    fVar53 = fVar47 * fVar67 + fVar42;
    fVar42 = fVar47 * fVar67 - fVar42;
    fVar67 = (_LC1 - fVar89) - fVar41 * fVar67;
    fVar89 = (_LC1 - fVar47 * fVar82) - fVar89;
    fVar41 = 0.0 - (fVar51 * fVar89 + fVar43 * fVar42 + fVar48 * fVar93);
    fVar47 = 0.0 - (fVar51 * fVar53 + fVar43 * fVar67 + fVar48 * fVar96);
    fVar50 = 0.0 - (fVar51 * fVar74 + fVar43 * fVar68 + fVar48 * fVar92);
    fVar51 = *(float *)(param_5 + 0x10);
    fVar43 = *(float *)(param_5 + 0x14);
    fVar48 = *(float *)(param_5 + 0x18);
    auVar37._0_4_ = fVar43 * fVar42 + fVar51 * fVar89 + fVar48 * fVar93;
    auVar37._4_4_ = fVar43 * fVar67 + fVar51 * fVar53 + fVar48 * fVar96;
    auVar37._8_4_ = fVar43 * fVar68 + fVar51 * fVar74 + fVar48 * fVar92;
    auVar37._12_4_ = fVar43 * 0.0 + fVar51 * 0.0 + fVar48 * 0.0;
    auVar44._0_4_ =
         SQRT(auVar37._8_4_ * auVar37._8_4_ +
              auVar37._4_4_ * auVar37._4_4_ + auVar37._0_4_ * auVar37._0_4_ + 0.0);
    auVar44._4_4_ = auVar44._0_4_;
    auVar44._8_4_ = auVar44._0_4_;
    auVar44._12_4_ = auVar44._0_4_;
    auVar37 = divps(auVar37,auVar44);
    *(long *)(lVar18 + 0x18) = auVar37._0_8_;
    *(int *)(lVar18 + 0x20) = auVar37._8_4_;
    _local_e8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_100 = _LC1;
    fStack_fc = _LC1;
    fStack_f8 = _LC1;
    fStack_f4 = _LC1;
    local_108 = (float)(**(code **)(this + 0xa0))(param_3,param_5 + 0x24,param_4);
    local_104 = (float)(**(code **)(this + 0xa8))(param_3,param_5 + 0x24,param_4,param_5 + 0x28);
    BVar4 = param_3[0x79];
    if (((byte)BVar4 & 1) == 0) {
      BVar4 = param_4[0x79];
    }
    local_f0 = (byte)BVar4 & 1;
    uVar19 = (long)*(int *)(this + 0x88) ^ 1;
    uVar16 = *(uint *)(*(long *)(this + uVar19 * 0x40 + 0x20) +
                      (*(int *)(this + uVar19 * 0x40 + 0x28) - 1 & uVar30) * 4);
    if (uVar16 != 0xffffffff) {
      plVar20 = *(long **)(this + uVar19 * 0x40 + 0x18);
      lVar24 = *plVar20;
      do {
        piVar29 = (int *)((ulong)uVar16 + lVar24);
        auVar38._0_4_ = -(uint)(*piVar29 == local_118);
        auVar38._4_4_ = -(uint)(piVar29[1] == iStack_114);
        auVar38._8_4_ = -(uint)(piVar29[2] == iStack_110);
        auVar38._12_4_ = -(uint)(piVar29[3] == iStack_10c);
        uVar16 = movmskps((int)plVar20,auVar38);
        plVar20 = (long *)(ulong)uVar16;
        if (uVar16 == 0xf) {
          plVar20 = *(long **)(this + 0x98);
          if ((plVar20 != (long *)0x0) &&
             (*(code **)(*plVar20 + 0x20) != ContactListener::OnContactPersisted)) {
            (**(code **)(*plVar20 + 0x20))
                      (plVar20,param_3,param_4,param_5,(SubShapeIDPair *)&local_108);
          }
          uVar63 = _UNK_0011635c;
          uVar60 = _UNK_00116358;
          uVar26 = _UNK_00116354;
          uVar16 = __LC17;
          pfVar21 = (float *)(piVar29 + 10);
          pfVar33 = pfVar21 + (ulong)*(ushort *)((long)piVar29 + 0x26) * 9;
          LOCK();
          *(ushort *)(piVar29 + 9) = *(ushort *)(piVar29 + 9) | 1;
          UNLOCK();
          goto LAB_0010ec28;
        }
        uVar16 = piVar29[4];
      } while (uVar16 != 0xffffffff);
    }
    plVar20 = *(long **)(this + 0x98);
    if ((plVar20 != (long *)0x0) && (*(code **)(*plVar20 + 0x18) != ContactListener::OnContactAdded)
       ) {
      (**(code **)(*plVar20 + 0x18))(plVar20,param_3,param_4,param_5);
    }
    pfVar33 = (float *)0x0;
    pfVar21 = (float *)0x0;
    uVar16 = __LC17;
    uVar26 = _UNK_00116354;
    uVar60 = _UNK_00116358;
    uVar63 = _UNK_0011635c;
LAB_0010ec28:
    fVar54 = (float)(uVar16 ^ *(uint *)(param_3 + 0x10));
    fVar57 = (float)(uVar26 ^ *(uint *)(param_3 + 0x14));
    fVar59 = (float)(uVar60 ^ *(uint *)(param_3 + 0x18));
    fVar62 = (float)(uVar63 ^ *(uint *)(param_3 + 0x1c));
    fVar51 = *(float *)param_3;
    fVar43 = *(float *)(param_3 + 4);
    fVar48 = *(float *)(param_3 + 8);
    fVar64 = fVar54 + fVar54;
    fVar72 = fVar57 + fVar57;
    fVar90 = fVar59 * (fVar59 + fVar59);
    fVar82 = fVar62 * (fVar59 + fVar59);
    fVar94 = (_LC1 - fVar54 * fVar64) - fVar57 * fVar72;
    fVar91 = fVar59 * fVar64 - fVar72 * fVar62;
    fVar83 = fVar59 * fVar64 + fVar72 * fVar62;
    fVar75 = fVar59 * fVar72 - fVar64 * fVar62;
    fVar59 = fVar64 * fVar62 + fVar59 * fVar72;
    fVar95 = (_LC1 - fVar90) - fVar54 * fVar64;
    fVar62 = fVar57 * fVar64 + fVar82;
    fVar82 = fVar57 * fVar64 - fVar82;
    fVar90 = (_LC1 - fVar57 * fVar72) - fVar90;
    fVar54 = 0.0 - (fVar48 * fVar83 + fVar51 * fVar90 + fVar43 * fVar82);
    fVar57 = 0.0 - (fVar48 * fVar75 + fVar51 * fVar62 + fVar43 * fVar95);
    fVar51 = 0.0 - (fVar48 * fVar94 + fVar51 * fVar91 + fVar43 * fVar59);
    if ((local_f0 == 0) &&
       (((param_3[0x78] == (Body)0x2 && (local_100 != 0.0)) ||
        ((param_4[0x78] == (Body)0x2 && (fStack_f8 != 0.0)))))) {
      LOCK();
      pCVar1 = this + 0xbc;
      uVar16 = *(uint *)pCVar1;
      *(uint *)pCVar1 = *(uint *)pCVar1 + 1;
      UNLOCK();
      if (*(uint *)(this + 0xb8) <= uVar16) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
        *(undefined2 *)(lVar18 + 0x26) = 0;
        goto LAB_0010fbf2;
      }
      pCVar32 = (ContactConstraint *)(*(long *)(this + 0xb0) + (ulong)uVar16 * 0x360);
      pCVar23 = pCVar32;
      for (lVar24 = 0x6c; lVar24 != 0; lVar24 = lVar24 + -1) {
        *(undefined8 *)pCVar23 = 0;
        pCVar23 = pCVar23 + (ulong)bVar34 * -0x10 + 8;
      }
      *(Body **)pCVar32 = param_3;
      *(Body **)(pCVar32 + 8) = param_4;
      uVar2 = *(undefined4 *)(param_5 + 0x10);
      lVar24 = *(long *)(param_3 + 0x48);
      *(ulong *)(pCVar32 + 0x10) = uVar30;
      *(undefined4 *)(pCVar32 + 0x18) = uVar2;
      *(undefined8 *)(pCVar32 + 0x1c) = *(undefined8 *)(param_5 + 0x14);
      *(float *)(pCVar32 + 0x24) = local_108;
      fVar43 = 0.0;
      if (lVar24 != 0) {
        fVar43 = local_100 * *(float *)(lVar24 + 0x58);
      }
      lVar22 = *(long *)(this + 0xc0);
      *(ulong *)(pCVar32 + 0x28) = CONCAT44(fStack_fc,fVar43);
      uVar7 = *(undefined8 *)(lVar22 + 0x40);
      if (*(long *)(param_4 + 0x48) == 0) {
        fVar43 = 0.0;
      }
      else {
        fVar43 = fStack_f8 * *(float *)(*(long *)(param_4 + 0x48) + 0x58);
      }
      *(ulong *)(pCVar32 + 0x30) = CONCAT44(fStack_f4,fVar43);
      if (lVar24 == 0) {
        uVar26 = 0xffffffff;
      }
      else {
        uVar26 = *(uint *)(lVar24 + 0x70);
      }
      JPH::IslandBuilder::LinkContact((uint)uVar7,uVar16,uVar26);
      puVar8 = *(undefined8 **)(param_3 + 0x48);
      fVar43 = *(float *)(param_5 + 0x10);
      fVar48 = *(float *)(*(long **)(this + 0xc0) + 4);
      lVar24 = **(long **)(this + 0xc0);
      fVar85 = *(float *)(lVar24 + 0x400);
      fVar87 = *(float *)(lVar24 + 0x404);
      fVar11 = *(float *)(lVar24 + 0x408);
      fVar64 = *(float *)(param_5 + 0x14);
      fVar72 = *(float *)(param_5 + 0x18);
      fVar35 = local_100 * *(float *)(puVar8 + 0xb);
      MotionProperties::GetInverseInertiaForRotation(local_c8);
      uVar16 = _LC20;
      lVar24 = 0;
      do {
        *(float *)((long)afStack_c4 + lVar24 + 0x3c) = *(float *)(local_c8 + lVar24) * fStack_fc;
        *(float *)((long)afStack_c4 + lVar24 + 0x40) =
             *(float *)((long)afStack_c4 + lVar24) * fStack_fc;
        *(float *)((long)afStack_c4 + lVar24 + 0x44) =
             *(float *)((long)afStack_c4 + lVar24 + 4) * fStack_fc;
        *(float *)((long)afStack_c4 + lVar24 + 0x48) =
             *(float *)((long)afStack_c4 + lVar24 + 8) * fStack_fc;
        lVar24 = lVar24 + 0x10;
      } while (lVar24 != 0x40);
      fVar52 = *(float *)(pCVar32 + 0x18);
      fVar49 = *(float *)(pCVar32 + 0x1c);
      fVar36 = *(float *)(pCVar32 + 0x20);
      if ((float)((uint)fVar49 & _LC10) < (float)(_LC10 & (uint)fVar52)) {
        auVar66._4_4_ = 0;
        auVar66._0_4_ = fVar36;
        auVar66._12_4_ = (uint)fVar52 ^ _LC20;
        auVar66._8_4_ = (uint)fVar52 ^ _LC20;
        auVar46._0_4_ = SQRT(fVar52 * fVar52 + fVar36 * fVar36);
        auVar46._4_4_ = auVar46._0_4_;
        auVar46._8_4_ = auVar46._0_4_;
        auVar46._12_4_ = auVar46._0_4_;
        auVar37 = divps(auVar66,auVar46);
        local_1d8 = auVar37._0_12_;
      }
      else {
        auVar10._8_4_ = (uint)fVar49 ^ _LC20;
        auVar10._4_4_ = (uint)fVar49 ^ _LC20;
        fVar55 = SQRT(fVar49 * fVar49 + fVar36 * fVar36);
        auVar10._0_4_ = fVar36;
        auVar10._12_4_ = 0;
        auVar45._4_4_ = fVar55;
        auVar45._0_4_ = fVar55;
        auVar45._8_4_ = fVar55;
        auVar45._12_4_ = fVar55;
        auVar37 = divps(auVar10 << 0x20,auVar45);
        local_1d8 = auVar37._0_12_;
      }
      fVar76 = local_1d8._0_4_;
      fVar78 = local_1d8._4_4_;
      fVar80 = local_1d8._8_4_;
      pCVar23 = pCVar32 + 0x40;
      lVar24 = (ulong)*(uint *)(pCVar32 + 0x38) * 200;
      fVar55 = fVar78 * fVar52 - fVar49 * fVar76;
      fVar49 = fVar80 * fVar49 - fVar36 * fVar78;
      fVar52 = fVar76 * fVar36 - fVar52 * fVar80;
      if (pCVar23 + lVar24 < pCVar23 + (ulong)uVar6 * 200) {
        uVar30 = 0;
        lVar22 = 0;
        do {
          uVar30 = uVar30 + 1;
          *(undefined1 (*) [16])(pCVar32 + lVar22 + lVar24 + 0x70) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar32 + lVar22 + lVar24 + 0xb0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar32 + lVar22 + lVar24 + 0xf0) = (undefined1  [16])0x0;
          lVar22 = lVar22 + 200;
        } while (uVar30 < (ulong)(pCVar23 + (ulong)uVar6 * 200 + (-1 - (long)(pCVar23 + lVar24))) /
                          200 + 1);
      }
      *(uint *)(pCVar32 + 0x38) = uVar6;
      if (0 < (int)uVar6) {
        puVar9 = *(undefined8 **)(param_4 + 0x48);
        pCVar25 = param_5 + 0x40;
        lVar24 = *(long *)(this + 0x90);
        pfVar28 = (float *)(lVar18 + 0x28);
        do {
          fVar36 = *(float *)pCVar25 + *(float *)param_5;
          fVar39 = *(float *)(pCVar25 + 4) + *(float *)(param_5 + 4);
          fVar40 = *(float *)(pCVar25 + 8) + *(float *)(param_5 + 8);
          fVar69 = *(float *)param_5 + *(float *)(pCVar25 + 0x410);
          fVar70 = *(float *)(param_5 + 4) + *(float *)(pCVar25 + 0x414);
          fVar71 = *(float *)(param_5 + 8) + *(float *)(pCVar25 + 0x418);
          fVar77 = fVar36 * fVar90 + fVar39 * fVar82 + fVar40 * fVar83 + fVar54;
          fVar79 = fVar36 * fVar62 + fVar39 * fVar95 + fVar40 * fVar75 + fVar57;
          fVar81 = fVar36 * fVar91 + fVar39 * fVar59 + fVar40 * fVar94 + fVar51;
          fVar84 = fVar69 * fVar89 + fVar70 * fVar42 + fVar71 * fVar93 + fVar41;
          fVar86 = fVar69 * fVar53 + fVar70 * fVar67 + fVar71 * fVar96 + fVar47;
          fVar88 = fVar69 * fVar74 + fVar70 * fVar68 + fVar71 * fVar92 + fVar50;
          if (pfVar21 < pfVar33) {
            fVar65 = *(float *)(lVar24 + 0x34);
            pfVar31 = pfVar21;
            do {
              fVar56 = fVar77 - *pfVar31;
              fVar58 = fVar79 - pfVar31[1];
              fVar61 = fVar81 - pfVar31[2];
              if ((fVar61 * fVar61 + fVar58 * fVar58 + fVar56 * fVar56 + 0.0 <= fVar65) &&
                 (fVar56 = fVar84 - pfVar31[3], fVar58 = fVar86 - pfVar31[4],
                 fVar61 = fVar88 - pfVar31[5],
                 fVar61 * fVar61 + fVar58 * fVar58 + fVar56 * fVar56 + 0.0 <= fVar65)) {
                *(float *)(pCVar23 + 0x3c) = pfVar31[6];
                *(float *)(pCVar23 + 0x7c) = pfVar31[7];
                fVar65 = pfVar31[8];
                goto LAB_0010f56d;
              }
              pfVar31 = pfVar31 + 9;
            } while (pfVar31 < pfVar33);
          }
          *(undefined4 *)(pCVar23 + 0x3c) = 0;
          fVar65 = 0.0;
          *(undefined4 *)(pCVar23 + 0x7c) = 0;
LAB_0010f56d:
          *(float *)(pCVar23 + 0xbc) = fVar65;
          *(ulong *)(pfVar28 + 4) = CONCAT44(fVar88,fVar86);
          *pfVar28 = fVar77;
          pfVar28[1] = fVar79;
          pfVar28[2] = fVar81;
          pfVar28[3] = fVar84;
          uVar7 = *puVar8;
          uVar12 = puVar8[1];
          uVar13 = *(undefined8 *)(param_5 + 0x10);
          uVar14 = *(undefined8 *)(param_5 + 0x18);
          fVar65 = (fVar69 + fVar36) * _LC6;
          fVar56 = (fVar70 + fVar39) * _UNK_00116314;
          fVar58 = (fVar71 + fVar40) * _UNK_00116318;
          *(float **)(pCVar23 + 0xc0) = pfVar28;
          fVar77 = (float)uVar13;
          fVar79 = (float)((ulong)uVar13 >> 0x20);
          fVar81 = (float)uVar14;
          fVar84 = fVar65 - *(float *)param_3;
          fVar86 = fVar56 - *(float *)(param_3 + 4);
          fVar88 = fVar58 - *(float *)(param_3 + 8);
          fVar65 = fVar65 - *(float *)param_4;
          fVar56 = fVar56 - *(float *)(param_4 + 4);
          fVar58 = fVar58 - *(float *)(param_4 + 8);
          fVar36 = (float)((uint)((fVar40 - fVar71) * fVar81 +
                                 (fVar39 - fVar70) * fVar79 + (fVar36 - fVar69) * fVar77 + 0.0) ^
                          uVar16) / fVar48;
          if (fVar36 <= 0.0) {
            fVar36 = 0.0;
          }
          if (0.0 < local_104) {
            local_1e8 = (float)*puVar9;
            fStack_1e4 = (float)((ulong)*puVar9 >> 0x20);
            fStack_1e0 = (float)puVar9[1];
            local_288 = (float)uVar7;
            fStack_284 = (float)((ulong)uVar7 >> 0x20);
            fStack_280 = (float)uVar12;
            fVar39 = (((fVar56 * *(float *)(puVar9 + 2) - *(float *)((long)puVar9 + 0x14) * fVar65)
                      + fStack_1e0) -
                     ((fVar86 * *(float *)(puVar8 + 2) - *(float *)((long)puVar8 + 0x14) * fVar84) +
                     fStack_280)) * fVar81 +
                     (((fVar65 * *(float *)(puVar9 + 3) - *(float *)(puVar9 + 2) * fVar58) +
                      fStack_1e4) -
                     ((fVar84 * *(float *)(puVar8 + 3) - *(float *)(puVar8 + 2) * fVar88) +
                     fStack_284)) * fVar79 +
                     (((fVar58 * *(float *)((long)puVar9 + 0x14) - *(float *)(puVar9 + 3) * fVar56)
                      + local_1e8) -
                     ((fVar88 * *(float *)((long)puVar8 + 0x14) - *(float *)(puVar8 + 3) * fVar86) +
                     local_288)) * fVar77 + 0.0;
            if ((fVar39 < (float)(*(uint *)(lVar24 + 0x40) ^ uVar16)) &&
               (fVar39 < (float)(uVar16 ^ (uint)fVar36))) {
              fVar36 = (fVar39 - (*(float *)((long)puVar9 + 0x6c) - *(float *)((long)puVar8 + 0x6c))
                                 * (fVar48 * fVar11 * fVar72 +
                                   fVar48 * fVar87 * fVar64 + fVar43 * fVar48 * fVar85 + 0.0)) *
                       local_104;
            }
          }
          fVar40 = fVar84 * fVar79 - fVar77 * fVar86;
          fVar69 = fVar86 * fVar81 - fVar79 * fVar88;
          fVar70 = fVar88 * fVar77 - fVar81 * fVar84;
          local_228 = (float)afStack_c4._60_8_;
          fStack_224 = SUB84(afStack_c4._60_8_,4);
          fStack_220 = (float)afStack_c4._68_8_;
          fVar71 = local_228 * fVar69 + fVar70 * afStack_c4[0x13] + fVar40 * afStack_c4[0x17];
          fVar61 = fStack_224 * fVar69 + fVar70 * afStack_c4[0x14] + fVar40 * afStack_c4[0x18];
          fVar73 = fStack_220 * fVar69 + fVar70 * afStack_c4[0x15] + fVar40 * afStack_c4[0x19];
          *(float *)pCVar23 = fVar69;
          *(float *)(pCVar23 + 4) = fVar70;
          *(float *)(pCVar23 + 8) = fVar40;
          *(float *)(pCVar23 + 0xc) = fVar81 * fVar56 - fVar79 * fVar58;
          *(float *)(pCVar23 + 0x10) = fVar77 * fVar58 - fVar81 * fVar65;
          *(float *)(pCVar23 + 0x14) = fVar79 * fVar65 - fVar77 * fVar56;
          *(float *)(pCVar23 + 0x18) = fVar71;
          *(float *)(pCVar23 + 0x1c) = fVar61;
          *(float *)(pCVar23 + 0x20) = fVar73;
          fVar39 = _LC1;
          fVar40 = fVar40 * fVar73 + fVar61 * fVar70 + fVar69 * fVar71 + 0.0 + fVar35;
          if (fVar40 == 0.0) {
            *(undefined4 *)(pCVar23 + 0x3c) = 0;
            fVar39 = 0.0;
          }
          else {
            *(undefined4 *)(pCVar23 + 0x38) = 0;
            *(float *)(pCVar23 + 0x34) = fVar36;
            fVar39 = fVar39 / fVar40;
          }
          *(float *)(pCVar23 + 0x30) = fVar39;
          if (local_108 <= 0.0) {
            *(undefined4 *)(pCVar23 + 0x70) = 0;
            *(undefined4 *)(pCVar23 + 0x7c) = 0;
            *(undefined4 *)(pCVar23 + 0xb0) = 0;
            *(undefined4 *)(pCVar23 + 0xbc) = 0;
          }
          else {
            fVar39 = (fVar88 * (float)local_d8._4_4_ - fStack_d0 * fVar86) + (float)local_e8._0_4_;
            fVar69 = (fVar84 * fStack_d0 - (float)local_d8._0_4_ * fVar88) + (float)local_e8._4_4_;
            fVar71 = (fVar86 * (float)local_d8._0_4_ - (float)local_d8._4_4_ * fVar84) + fStack_e0;
            fVar40 = fVar78 * fVar84 - fVar76 * fVar86;
            fVar70 = fVar80 * fVar86 - fVar78 * fVar88;
            fVar77 = fVar76 * fVar88 - fVar80 * fVar84;
            fVar79 = local_228 * fVar70 + fVar77 * afStack_c4[0x13] + fVar40 * afStack_c4[0x17];
            fVar81 = fStack_224 * fVar70 + fVar77 * afStack_c4[0x14] + fVar40 * afStack_c4[0x18];
            fVar61 = fStack_220 * fVar70 + fVar77 * afStack_c4[0x15] + fVar40 * afStack_c4[0x19];
            *(float *)(pCVar23 + 0x40) = fVar70;
            *(float *)(pCVar23 + 0x44) = fVar77;
            *(float *)(pCVar23 + 0x48) = fVar40;
            *(float *)(pCVar23 + 0x4c) = fVar80 * fVar56 - fVar78 * fVar58;
            *(float *)(pCVar23 + 0x50) = fVar76 * fVar58 - fVar80 * fVar65;
            *(float *)(pCVar23 + 0x54) = fVar78 * fVar65 - fVar76 * fVar56;
            *(float *)(pCVar23 + 0x58) = fVar79;
            *(float *)(pCVar23 + 0x5c) = fVar81;
            *(float *)(pCVar23 + 0x60) = fVar61;
            fVar36 = _LC1;
            fVar40 = fVar40 * fVar61 + fVar81 * fVar77 + fVar70 * fVar79 + 0.0 + fVar35;
            if (fVar40 == 0.0) {
              *(undefined4 *)(pCVar23 + 0x7c) = 0;
              fVar36 = 0.0;
            }
            else {
              *(undefined4 *)(pCVar23 + 0x78) = 0;
              fVar36 = fVar36 / fVar40;
              *(float *)(pCVar23 + 0x74) = fVar80 * fVar71 + fVar76 * fVar39 + 0.0 + fVar78 * fVar69
              ;
            }
            *(float *)(pCVar23 + 0x70) = fVar36;
            fVar79 = fVar84 * fVar52 - fVar86 * fVar49;
            fVar81 = fVar86 * fVar55 - fVar88 * fVar52;
            fVar84 = fVar88 * fVar49 - fVar84 * fVar55;
            fVar40 = local_228 * fVar81 + fVar84 * afStack_c4[0x13] + fVar79 * afStack_c4[0x17];
            fVar70 = fStack_224 * fVar81 + fVar84 * afStack_c4[0x14] + fVar79 * afStack_c4[0x18];
            fVar77 = fStack_220 * fVar81 + fVar84 * afStack_c4[0x15] + fVar79 * afStack_c4[0x19];
            *(float *)(pCVar23 + 0x80) = fVar81;
            *(float *)(pCVar23 + 0x84) = fVar84;
            *(float *)(pCVar23 + 0x88) = fVar79;
            *(float *)(pCVar23 + 0x8c) = fVar56 * fVar55 - fVar58 * fVar52;
            *(float *)(pCVar23 + 0x90) = fVar58 * fVar49 - fVar65 * fVar55;
            *(float *)(pCVar23 + 0x94) = fVar65 * fVar52 - fVar56 * fVar49;
            *(float *)(pCVar23 + 0x98) = fVar40;
            *(float *)(pCVar23 + 0x9c) = fVar70;
            *(float *)(pCVar23 + 0xa0) = fVar77;
            fVar36 = _LC1;
            fVar40 = fVar79 * fVar77 + fVar70 * fVar84 + fVar81 * fVar40 + 0.0 + fVar35;
            if (fVar40 == 0.0) {
              *(undefined4 *)(pCVar23 + 0xbc) = 0;
              fVar36 = 0.0;
            }
            else {
              *(undefined4 *)(pCVar23 + 0xb8) = 0;
              fVar36 = fVar36 / fVar40;
              *(float *)(pCVar23 + 0xb4) = fVar55 * fVar71 + fVar69 * fVar52 + fVar39 * fVar49 + 0.0
              ;
            }
            *(float *)(pCVar23 + 0xb0) = fVar36;
          }
          pCVar25 = pCVar25 + 0x10;
          pCVar23 = pCVar23 + 200;
          pfVar28 = pfVar28 + 9;
        } while (param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50 != pCVar25);
      }
      if (sDrawContactManifolds != '\0') {
        ContactConstraint::Draw(pCVar32,DebugRenderer::sInstance,_sOrange);
      }
      bVar15 = true;
    }
    else {
      if (0 < (int)uVar6) {
        pfVar21 = (float *)(lVar18 + 0x28);
        pCVar25 = param_5 + 0x40;
        do {
          pCVar27 = pCVar25 + 0x10;
          fVar72 = *(float *)pCVar25 + *(float *)param_5;
          fVar85 = *(float *)(pCVar25 + 4) + *(float *)(param_5 + 4);
          fVar87 = *(float *)(pCVar25 + 8) + *(float *)(param_5 + 8);
          fVar43 = *(float *)param_5 + *(float *)(pCVar25 + 0x410);
          fVar48 = *(float *)(param_5 + 4) + *(float *)(pCVar25 + 0x414);
          fVar64 = *(float *)(param_5 + 8) + *(float *)(pCVar25 + 0x418);
          pfVar21[6] = 0.0;
          pfVar21[7] = 0.0;
          pfVar21[8] = 0.0;
          *(ulong *)(pfVar21 + 4) =
               CONCAT44(fVar43 * fVar74 + fVar48 * fVar68 + fVar64 * fVar92 + fVar50,
                        fVar43 * fVar53 + fVar48 * fVar67 + fVar64 * fVar96 + fVar47);
          *pfVar21 = fVar72 * fVar90 + fVar85 * fVar82 + fVar87 * fVar83 + fVar54;
          pfVar21[1] = fVar72 * fVar62 + fVar85 * fVar95 + fVar87 * fVar75 + fVar57;
          pfVar21[2] = fVar72 * fVar91 + fVar85 * fVar59 + fVar87 * fVar94 + fVar51;
          pfVar21[3] = fVar43 * fVar89 + fVar48 * fVar42 + fVar64 * fVar93 + fVar41;
          pfVar21 = pfVar21 + 9;
          pCVar25 = pCVar27;
        } while (pCVar27 != param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50);
      }
      bVar15 = false;
    }
    *(undefined4 *)(lVar18 + 0x14) = *(undefined4 *)((long)param_2 + 0x18);
    *(int *)((long)param_2 + 0x18) =
         (int)lVar18 -
         (int)**(undefined8 **)((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8) + 0x10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar15;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool JPH::ContactConstraintManager::TemplatedAddContactConstraint<(JPH::EMotionType)2,
   (JPH::EMotionType)0>(JPH::ContactConstraintManager::ContactAllocator&, void*, JPH::Body&,
   JPH::Body&, JPH::ContactManifold const&) */

bool __thiscall
JPH::ContactConstraintManager::
TemplatedAddContactConstraint<(JPH::EMotionType)2,(JPH::EMotionType)0>
          (ContactConstraintManager *this,ContactAllocator *param_1,void *param_2,Body *param_3,
          Body *param_4,ContactManifold *param_5)

{
  ContactConstraintManager *pCVar1;
  undefined4 uVar2;
  SubShapeIDPair SVar3;
  Body BVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  SubShapeIDPair *pSVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  ContactConstraint *pCVar22;
  uint uVar23;
  ContactManifold *pCVar24;
  ContactManifold *pCVar25;
  int *piVar26;
  ulong uVar27;
  ContactConstraint *pCVar28;
  float *pfVar29;
  float *pfVar30;
  long in_FS_OFFSET;
  byte bVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar42;
  float fVar46;
  float fVar50;
  undefined1 auVar39 [16];
  float fVar43;
  float fVar47;
  undefined1 auVar40 [16];
  float fVar44;
  float fVar45;
  float fVar48;
  float fVar49;
  undefined1 auVar41 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar80 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 local_218 [12];
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  byte local_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  undefined1 local_d8 [8];
  float fStack_d0;
  Mat44 local_c8 [4];
  float afStack_c4 [33];
  long local_40;
  long *plVar17;
  uint uVar58;
  uint uVar61;
  
  bVar31 = 0;
  uVar27 = 0xcbf29ce484222325;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = *(int *)(param_3 + 0x70);
  iStack_114 = *(int *)(param_5 + 0x24);
  iStack_110 = *(int *)(param_4 + 0x70);
  iStack_10c = *(int *)(param_5 + 0x28);
  pSVar14 = (SubShapeIDPair *)&local_118;
  do {
    SVar3 = *pSVar14;
    pSVar14 = pSVar14 + 1;
    uVar27 = (uVar27 ^ (byte)SVar3) * 0x100000001b3;
  } while (pSVar14 != (SubShapeIDPair *)&local_108);
  iVar5 = *(int *)(this + 0x88);
  uVar6 = *(uint *)(param_5 + 0x30);
  lVar15 = ManifoldCache::Create
                     ((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8),param_1,
                      (SubShapeIDPair *)&local_118,uVar27,uVar6);
  if (lVar15 == 0) {
LAB_00110f9a:
    bVar12 = false;
  }
  else {
    fVar47 = *(float *)param_4;
    fVar37 = *(float *)(param_4 + 4);
    fVar43 = *(float *)(param_4 + 8);
    fVar35 = (float)(*(uint *)(param_4 + 0x10) ^ __LC17);
    fVar42 = (float)(*(uint *)(param_4 + 0x14) ^ _UNK_00116354);
    fVar46 = (float)(*(uint *)(param_4 + 0x18) ^ _UNK_00116358);
    fVar50 = (float)(*(uint *)(param_4 + 0x1c) ^ _UNK_0011635c);
    fVar66 = fVar35 + fVar35;
    fVar76 = fVar42 + fVar42;
    fVar85 = fVar46 * (fVar46 + fVar46);
    fVar36 = fVar50 * (fVar46 + fVar46);
    fVar94 = fVar46 * fVar66 + fVar76 * fVar50;
    fVar95 = fVar46 * fVar76 - fVar66 * fVar50;
    fVar67 = fVar66 * fVar50 + fVar46 * fVar76;
    fVar50 = fVar46 * fVar66 - fVar76 * fVar50;
    fVar91 = (_LC1 - fVar35 * fVar66) - fVar42 * fVar76;
    fVar92 = fVar42 * fVar66 - fVar36;
    fVar36 = fVar42 * fVar66 + fVar36;
    fVar66 = (_LC1 - fVar85) - fVar35 * fVar66;
    fVar85 = (_LC1 - fVar42 * fVar76) - fVar85;
    fVar35 = 0.0 - (fVar47 * fVar85 + fVar37 * fVar92 + fVar43 * fVar94);
    fVar42 = 0.0 - (fVar47 * fVar36 + fVar37 * fVar66 + fVar43 * fVar95);
    fVar46 = 0.0 - (fVar47 * fVar50 + fVar37 * fVar67 + fVar43 * fVar91);
    fVar47 = *(float *)(param_5 + 0x10);
    fVar37 = *(float *)(param_5 + 0x14);
    fVar43 = *(float *)(param_5 + 0x18);
    auVar33._0_4_ = fVar37 * fVar92 + fVar47 * fVar85 + fVar43 * fVar94;
    auVar33._4_4_ = fVar37 * fVar66 + fVar47 * fVar36 + fVar43 * fVar95;
    auVar33._8_4_ = fVar37 * fVar67 + fVar47 * fVar50 + fVar43 * fVar91;
    auVar33._12_4_ = fVar37 * 0.0 + fVar47 * 0.0 + fVar43 * 0.0;
    auVar39._0_4_ =
         SQRT(auVar33._8_4_ * auVar33._8_4_ +
              auVar33._4_4_ * auVar33._4_4_ + auVar33._0_4_ * auVar33._0_4_ + 0.0);
    auVar39._4_4_ = auVar39._0_4_;
    auVar39._8_4_ = auVar39._0_4_;
    auVar39._12_4_ = auVar39._0_4_;
    auVar33 = divps(auVar33,auVar39);
    *(long *)(lVar15 + 0x18) = auVar33._0_8_;
    *(int *)(lVar15 + 0x20) = auVar33._8_4_;
    _local_e8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_100 = _LC1;
    fStack_fc = _LC1;
    fStack_f8 = _LC1;
    fStack_f4 = _LC1;
    local_108 = (float)(**(code **)(this + 0xa0))(param_3,param_5 + 0x24,param_4);
    local_104 = (float)(**(code **)(this + 0xa8))(param_3,param_5 + 0x24,param_4,param_5 + 0x28);
    BVar4 = param_3[0x79];
    if (((byte)BVar4 & 1) == 0) {
      BVar4 = param_4[0x79];
    }
    local_f0 = (byte)BVar4 & 1;
    uVar16 = (long)*(int *)(this + 0x88) ^ 1;
    uVar13 = *(uint *)(*(long *)(this + uVar16 * 0x40 + 0x20) +
                      (*(int *)(this + uVar16 * 0x40 + 0x28) - 1 & uVar27) * 4);
    if (uVar13 != 0xffffffff) {
      plVar17 = *(long **)(this + uVar16 * 0x40 + 0x18);
      lVar21 = *plVar17;
      do {
        piVar26 = (int *)((ulong)uVar13 + lVar21);
        auVar34._0_4_ = -(uint)(*piVar26 == local_118);
        auVar34._4_4_ = -(uint)(piVar26[1] == iStack_114);
        auVar34._8_4_ = -(uint)(piVar26[2] == iStack_110);
        auVar34._12_4_ = -(uint)(piVar26[3] == iStack_10c);
        uVar13 = movmskps((int)plVar17,auVar34);
        plVar17 = (long *)(ulong)uVar13;
        if (uVar13 == 0xf) {
          plVar17 = *(long **)(this + 0x98);
          if ((plVar17 != (long *)0x0) &&
             (*(code **)(*plVar17 + 0x20) != ContactListener::OnContactPersisted)) {
            (**(code **)(*plVar17 + 0x20))
                      (plVar17,param_3,param_4,param_5,(SubShapeIDPair *)&local_108);
          }
          uVar61 = _UNK_0011635c;
          uVar58 = _UNK_00116358;
          uVar23 = _UNK_00116354;
          uVar13 = __LC17;
          pfVar18 = (float *)(piVar26 + 10);
          pfVar30 = pfVar18 + (ulong)*(ushort *)((long)piVar26 + 0x26) * 9;
          LOCK();
          *(ushort *)(piVar26 + 9) = *(ushort *)(piVar26 + 9) | 1;
          UNLOCK();
          goto LAB_00110088;
        }
        uVar13 = piVar26[4];
      } while (uVar13 != 0xffffffff);
    }
    plVar17 = *(long **)(this + 0x98);
    if ((plVar17 != (long *)0x0) && (*(code **)(*plVar17 + 0x18) != ContactListener::OnContactAdded)
       ) {
      (**(code **)(*plVar17 + 0x18))(plVar17,param_3,param_4,param_5);
    }
    pfVar30 = (float *)0x0;
    pfVar18 = (float *)0x0;
    uVar13 = __LC17;
    uVar23 = _UNK_00116354;
    uVar58 = _UNK_00116358;
    uVar61 = _UNK_0011635c;
LAB_00110088:
    fVar51 = (float)(uVar13 ^ *(uint *)(param_3 + 0x10));
    fVar55 = (float)(uVar23 ^ *(uint *)(param_3 + 0x14));
    fVar57 = (float)(uVar58 ^ *(uint *)(param_3 + 0x18));
    fVar60 = (float)(uVar61 ^ *(uint *)(param_3 + 0x1c));
    fVar47 = *(float *)param_3;
    fVar37 = *(float *)(param_3 + 4);
    fVar43 = *(float *)(param_3 + 8);
    fVar77 = fVar51 + fVar51;
    fVar72 = fVar55 + fVar55;
    fVar93 = fVar57 * (fVar57 + fVar57);
    fVar76 = fVar60 * (fVar57 + fVar57);
    fVar52 = fVar57 * fVar77 - fVar72 * fVar60;
    fVar90 = fVar57 * fVar77 + fVar72 * fVar60;
    fVar89 = fVar57 * fVar72 - fVar77 * fVar60;
    fVar68 = (_LC1 - fVar51 * fVar77) - fVar55 * fVar72;
    fVar57 = fVar77 * fVar60 + fVar57 * fVar72;
    fVar86 = (_LC1 - fVar93) - fVar51 * fVar77;
    fVar60 = fVar55 * fVar77 - fVar76;
    fVar76 = fVar55 * fVar77 + fVar76;
    fVar93 = (_LC1 - fVar55 * fVar72) - fVar93;
    fVar51 = 0.0 - (fVar43 * fVar90 + fVar47 * fVar93 + fVar37 * fVar60);
    fVar55 = 0.0 - (fVar43 * fVar89 + fVar47 * fVar76 + fVar37 * fVar86);
    fVar47 = 0.0 - (fVar43 * fVar68 + fVar47 * fVar52 + fVar37 * fVar57);
    if ((local_f0 == 0) &&
       (((param_3[0x78] == (Body)0x2 && (local_100 != 0.0)) ||
        ((param_4[0x78] == (Body)0x2 && (fStack_f8 != 0.0)))))) {
      LOCK();
      pCVar1 = this + 0xbc;
      uVar13 = *(uint *)pCVar1;
      *(uint *)pCVar1 = *(uint *)pCVar1 + 1;
      UNLOCK();
      if (*(uint *)(this + 0xb8) <= uVar13) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
        *(undefined2 *)(lVar15 + 0x26) = 0;
        goto LAB_00110f9a;
      }
      pCVar28 = (ContactConstraint *)(*(long *)(this + 0xb0) + (ulong)uVar13 * 0x360);
      pCVar22 = pCVar28;
      for (lVar21 = 0x6c; lVar21 != 0; lVar21 = lVar21 + -1) {
        *(undefined8 *)pCVar22 = 0;
        pCVar22 = pCVar22 + (ulong)bVar31 * -0x10 + 8;
      }
      *(Body **)pCVar28 = param_3;
      *(Body **)(pCVar28 + 8) = param_4;
      uVar2 = *(undefined4 *)(param_5 + 0x10);
      lVar21 = *(long *)(param_3 + 0x48);
      *(ulong *)(pCVar28 + 0x10) = uVar27;
      *(undefined4 *)(pCVar28 + 0x18) = uVar2;
      *(undefined8 *)(pCVar28 + 0x1c) = *(undefined8 *)(param_5 + 0x14);
      *(float *)(pCVar28 + 0x24) = local_108;
      fVar37 = 0.0;
      if (lVar21 != 0) {
        fVar37 = local_100 * *(float *)(lVar21 + 0x58);
      }
      lVar19 = *(long *)(this + 0xc0);
      *(ulong *)(pCVar28 + 0x28) = CONCAT44(fStack_fc,fVar37);
      uVar7 = *(undefined8 *)(lVar19 + 0x40);
      if (*(long *)(param_4 + 0x48) == 0) {
        fVar37 = 0.0;
      }
      else {
        fVar37 = fStack_f8 * *(float *)(*(long *)(param_4 + 0x48) + 0x58);
      }
      *(ulong *)(pCVar28 + 0x30) = CONCAT44(fStack_f4,fVar37);
      if (lVar21 == 0) {
        uVar23 = 0xffffffff;
      }
      else {
        uVar23 = *(uint *)(lVar21 + 0x70);
      }
      JPH::IslandBuilder::LinkContact((uint)uVar7,uVar13,uVar23);
      pfVar8 = *(float **)(param_3 + 0x48);
      fVar37 = *(float *)(param_5 + 0x10);
      fVar43 = *(float *)(*(long **)(this + 0xc0) + 4);
      lVar21 = **(long **)(this + 0xc0);
      fVar87 = *(float *)(lVar21 + 0x400);
      fVar88 = *(float *)(lVar21 + 0x404);
      fVar10 = *(float *)(lVar21 + 0x408);
      fVar72 = *(float *)(param_5 + 0x14);
      fVar77 = *(float *)(param_5 + 0x18);
      fVar32 = local_100 * pfVar8[0x16];
      MotionProperties::GetInverseInertiaForRotation(local_c8);
      uVar13 = _LC20;
      lVar21 = 0;
      do {
        *(float *)((long)afStack_c4 + lVar21 + 0x3c) = *(float *)(local_c8 + lVar21) * fStack_fc;
        *(float *)((long)afStack_c4 + lVar21 + 0x40) =
             *(float *)((long)afStack_c4 + lVar21) * fStack_fc;
        *(float *)((long)afStack_c4 + lVar21 + 0x44) =
             *(float *)((long)afStack_c4 + lVar21 + 4) * fStack_fc;
        *(float *)((long)afStack_c4 + lVar21 + 0x48) =
             *(float *)((long)afStack_c4 + lVar21 + 8) * fStack_fc;
        lVar21 = lVar21 + 0x10;
      } while (lVar21 != 0x40);
      fVar48 = *(float *)(pCVar28 + 0x18);
      fVar44 = *(float *)(pCVar28 + 0x1c);
      fVar38 = *(float *)(pCVar28 + 0x20);
      if ((float)((uint)fVar44 & _LC10) < (float)(_LC10 & (uint)fVar48)) {
        auVar80._4_4_ = 0;
        auVar80._0_4_ = fVar38;
        auVar80._12_4_ = (uint)fVar48 ^ _LC20;
        auVar80._8_4_ = (uint)fVar48 ^ _LC20;
        auVar41._0_4_ = SQRT(fVar48 * fVar48 + fVar38 * fVar38);
        auVar41._4_4_ = auVar41._0_4_;
        auVar41._8_4_ = auVar41._0_4_;
        auVar41._12_4_ = auVar41._0_4_;
        auVar33 = divps(auVar80,auVar41);
        local_218 = auVar33._0_12_;
      }
      else {
        auVar9._8_4_ = (uint)fVar44 ^ _LC20;
        auVar9._4_4_ = (uint)fVar44 ^ _LC20;
        auVar9._0_4_ = fVar38;
        auVar9._12_4_ = 0;
        fVar53 = SQRT(fVar44 * fVar44 + fVar38 * fVar38);
        auVar40._4_4_ = fVar53;
        auVar40._0_4_ = fVar53;
        auVar40._8_4_ = fVar53;
        auVar40._12_4_ = fVar53;
        auVar33 = divps(auVar9 << 0x20,auVar40);
        local_218 = auVar33._0_12_;
      }
      fVar78 = local_218._0_4_;
      fVar81 = local_218._4_4_;
      fVar83 = local_218._8_4_;
      pCVar22 = pCVar28 + 0x40;
      lVar21 = (ulong)*(uint *)(pCVar28 + 0x38) * 200;
      fVar53 = fVar81 * fVar48 - fVar44 * fVar78;
      fVar44 = fVar83 * fVar44 - fVar38 * fVar81;
      fVar48 = fVar78 * fVar38 - fVar48 * fVar83;
      if (pCVar22 + lVar21 < pCVar22 + (ulong)uVar6 * 200) {
        uVar27 = 0;
        lVar19 = 0;
        do {
          uVar27 = uVar27 + 1;
          *(undefined1 (*) [16])(pCVar28 + lVar19 + lVar21 + 0x70) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar28 + lVar19 + lVar21 + 0xb0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar28 + lVar19 + lVar21 + 0xf0) = (undefined1  [16])0x0;
          lVar19 = lVar19 + 200;
        } while (uVar27 < (ulong)(pCVar22 + (ulong)uVar6 * 200 + (-1 - (long)(pCVar22 + lVar21))) /
                          200 + 1);
      }
      *(uint *)(pCVar28 + 0x38) = uVar6;
      if (0 < (int)uVar6) {
        lVar21 = *(long *)(this + 0x90);
        pfVar20 = (float *)(lVar15 + 0x28);
        local_1c8 = (float)afStack_c4._76_8_;
        fStack_1c4 = SUB84(afStack_c4._76_8_,4);
        fStack_1c0 = (float)afStack_c4._84_8_;
        pCVar25 = param_5 + 0x40;
        do {
          fVar38 = *(float *)pCVar25 + *(float *)param_5;
          fVar45 = *(float *)(pCVar25 + 4) + *(float *)(param_5 + 4);
          fVar49 = *(float *)(pCVar25 + 8) + *(float *)(param_5 + 8);
          fVar54 = *(float *)param_5 + *(float *)(pCVar25 + 0x410);
          fVar56 = *(float *)(param_5 + 4) + *(float *)(pCVar25 + 0x414);
          fVar59 = *(float *)(param_5 + 8) + *(float *)(pCVar25 + 0x418);
          fVar73 = fVar38 * fVar93 + fVar45 * fVar60 + fVar49 * fVar90 + fVar51;
          fVar74 = fVar38 * fVar76 + fVar45 * fVar86 + fVar49 * fVar89 + fVar55;
          fVar75 = fVar38 * fVar52 + fVar45 * fVar57 + fVar49 * fVar68 + fVar47;
          fVar79 = fVar54 * fVar85 + fVar56 * fVar92 + fVar59 * fVar94 + fVar35;
          fVar82 = fVar54 * fVar36 + fVar56 * fVar66 + fVar59 * fVar95 + fVar42;
          fVar84 = fVar54 * fVar50 + fVar56 * fVar67 + fVar59 * fVar91 + fVar46;
          if (pfVar18 < pfVar30) {
            fVar63 = *(float *)(lVar21 + 0x34);
            pfVar29 = pfVar18;
            do {
              fVar62 = fVar73 - *pfVar29;
              fVar64 = fVar74 - pfVar29[1];
              fVar65 = fVar75 - pfVar29[2];
              if ((fVar65 * fVar65 + fVar64 * fVar64 + fVar62 * fVar62 + 0.0 <= fVar63) &&
                 (fVar62 = fVar79 - pfVar29[3], fVar64 = fVar82 - pfVar29[4],
                 fVar65 = fVar84 - pfVar29[5],
                 fVar65 * fVar65 + fVar64 * fVar64 + fVar62 * fVar62 + 0.0 <= fVar63)) {
                *(float *)(pCVar22 + 0x3c) = pfVar29[6];
                *(float *)(pCVar22 + 0x7c) = pfVar29[7];
                fVar63 = pfVar29[8];
                goto LAB_001109e5;
              }
              pfVar29 = pfVar29 + 9;
            } while (pfVar29 < pfVar30);
          }
          *(undefined4 *)(pCVar22 + 0x3c) = 0;
          fVar63 = 0.0;
          *(undefined4 *)(pCVar22 + 0x7c) = 0;
LAB_001109e5:
          *(float *)(pCVar22 + 0xbc) = fVar63;
          *(ulong *)(pfVar20 + 4) = CONCAT44(fVar84,fVar82);
          *pfVar20 = fVar73;
          pfVar20[1] = fVar74;
          pfVar20[2] = fVar75;
          pfVar20[3] = fVar79;
          uVar7 = *(undefined8 *)(param_5 + 0x10);
          uVar11 = *(undefined8 *)(param_5 + 0x18);
          fVar73 = pfVar8[0x1b];
          fVar74 = pfVar8[4];
          fVar75 = pfVar8[5];
          fVar79 = pfVar8[6];
          fVar82 = *pfVar8;
          fVar84 = pfVar8[1];
          fVar63 = pfVar8[2];
          *(float **)(pCVar22 + 0xc0) = pfVar20;
          fVar69 = (fVar54 + fVar38) * _LC6 - *(float *)param_3;
          fVar70 = (fVar56 + fVar45) * _UNK_00116314 - *(float *)(param_3 + 4);
          fVar71 = (fVar59 + fVar49) * _UNK_00116318 - *(float *)(param_3 + 8);
          fVar62 = (float)uVar7;
          fVar64 = (float)((ulong)uVar7 >> 0x20);
          fVar65 = (float)uVar11;
          fVar38 = (float)((uint)((fVar49 - fVar59) * fVar65 +
                                 (fVar45 - fVar56) * fVar64 + (fVar38 - fVar54) * fVar62 + 0.0) ^
                          uVar13) / fVar43;
          if (fVar38 <= 0.0) {
            fVar38 = 0.0;
          }
          if (((0.0 < local_104) &&
              (fVar45 = (0.0 - ((fVar70 * fVar74 - fVar75 * fVar69) + fVar63)) * fVar65 +
                        (0.0 - ((fVar69 * fVar79 - fVar74 * fVar71) + fVar84)) * fVar64 +
                        fVar62 * (0.0 - ((fVar71 * fVar75 - fVar79 * fVar70) + fVar82)) + 0.0,
              fVar45 < (float)(*(uint *)(lVar21 + 0x40) ^ uVar13))) &&
             (fVar45 < (float)(uVar13 ^ (uint)fVar38))) {
            fVar38 = (fVar45 - fVar73 * (fVar43 * fVar10 * fVar77 +
                                        fVar43 * fVar88 * fVar72 + fVar37 * fVar43 * fVar87 + 0.0))
                     * local_104;
          }
          fVar49 = fVar64 * fVar69 - fVar62 * fVar70;
          fVar54 = fVar65 * fVar70 - fVar64 * fVar71;
          fVar56 = fVar62 * fVar71 - fVar65 * fVar69;
          *(float *)(pCVar22 + 8) = fVar49;
          *(ulong *)pCVar22 = CONCAT44(fVar56,fVar54);
          fVar59 = fVar54 * afStack_c4[0xf] + fVar56 * local_1c8 + fVar49 * afStack_c4[0x17];
          fVar73 = fVar54 * afStack_c4[0x10] + fVar56 * fStack_1c4 + fVar49 * afStack_c4[0x18];
          fVar74 = fVar54 * afStack_c4[0x11] + fVar56 * fStack_1c0 + fVar49 * afStack_c4[0x19];
          *(ulong *)(pCVar22 + 0x18) = CONCAT44(fVar73,fVar59);
          *(float *)(pCVar22 + 0x20) = fVar74;
          fVar45 = _LC1;
          fVar49 = fVar49 * fVar74 + fVar56 * fVar73 + fVar59 * fVar54 + 0.0 + fVar32;
          if (fVar49 == 0.0) {
            *(undefined4 *)(pCVar22 + 0x3c) = 0;
            fVar45 = 0.0;
          }
          else {
            *(undefined4 *)(pCVar22 + 0x38) = 0;
            *(float *)(pCVar22 + 0x34) = fVar38;
            fVar45 = fVar45 / fVar49;
          }
          *(float *)(pCVar22 + 0x30) = fVar45;
          if (local_108 <= 0.0) {
            *(undefined4 *)(pCVar22 + 0x70) = 0;
            *(undefined4 *)(pCVar22 + 0x7c) = 0;
            *(undefined4 *)(pCVar22 + 0xb0) = 0;
            *(undefined4 *)(pCVar22 + 0xbc) = 0;
          }
          else {
            fVar56 = (fVar71 * (float)local_d8._4_4_ - fStack_d0 * fVar70) + (float)local_e8._0_4_;
            fVar59 = (fVar69 * fStack_d0 - (float)local_d8._0_4_ * fVar71) + (float)local_e8._4_4_;
            fVar73 = (fVar70 * (float)local_d8._0_4_ - (float)local_d8._4_4_ * fVar69) + fStack_e0;
            fVar45 = fVar81 * fVar69 - fVar78 * fVar70;
            fVar49 = fVar83 * fVar70 - fVar81 * fVar71;
            fVar54 = fVar78 * fVar71 - fVar83 * fVar69;
            *(float *)(pCVar22 + 0x48) = fVar45;
            *(ulong *)(pCVar22 + 0x40) = CONCAT44(fVar54,fVar49);
            fVar74 = fVar49 * afStack_c4[0xf] + fVar54 * local_1c8 + fVar45 * afStack_c4[0x17];
            fVar75 = fVar49 * afStack_c4[0x10] + fVar54 * fStack_1c4 + fVar45 * afStack_c4[0x18];
            fVar79 = fVar49 * afStack_c4[0x11] + fVar54 * fStack_1c0 + fVar45 * afStack_c4[0x19];
            *(ulong *)(pCVar22 + 0x58) = CONCAT44(fVar75,fVar74);
            *(float *)(pCVar22 + 0x60) = fVar79;
            fVar38 = _LC1;
            fVar45 = fVar45 * fVar79 + fVar54 * fVar75 + fVar49 * fVar74 + 0.0 + fVar32;
            if (fVar45 == 0.0) {
              *(undefined4 *)(pCVar22 + 0x7c) = 0;
              fVar38 = 0.0;
            }
            else {
              *(undefined4 *)(pCVar22 + 0x78) = 0;
              fVar38 = fVar38 / fVar45;
              *(float *)(pCVar22 + 0x74) = fVar83 * fVar73 + fVar78 * fVar56 + 0.0 + fVar81 * fVar59
              ;
            }
            *(float *)(pCVar22 + 0x70) = fVar38;
            fVar38 = fVar48 * fVar69 - fVar70 * fVar44;
            fVar45 = fVar53 * fVar70 - fVar71 * fVar48;
            fVar49 = fVar44 * fVar71 - fVar69 * fVar53;
            *(float *)(pCVar22 + 0x88) = fVar38;
            *(ulong *)(pCVar22 + 0x80) = CONCAT44(fVar49,fVar45);
            fVar54 = fVar45 * afStack_c4[0xf] + fVar49 * local_1c8 + fVar38 * afStack_c4[0x17];
            fVar74 = fVar45 * afStack_c4[0x10] + fVar49 * fStack_1c4 + fVar38 * afStack_c4[0x18];
            fVar75 = fVar45 * afStack_c4[0x11] + fVar49 * fStack_1c0 + fVar38 * afStack_c4[0x19];
            *(ulong *)(pCVar22 + 0x98) = CONCAT44(fVar74,fVar54);
            *(float *)(pCVar22 + 0xa0) = fVar75;
            fVar38 = fVar38 * fVar75 + fVar74 * fVar49 + fVar45 * fVar54 + 0.0 + fVar32;
            if (fVar38 == 0.0) {
              *(undefined4 *)(pCVar22 + 0xbc) = 0;
              fVar38 = 0.0;
            }
            else {
              *(undefined4 *)(pCVar22 + 0xb8) = 0;
              fVar38 = _LC1 / fVar38;
              *(float *)(pCVar22 + 0xb4) = fVar53 * fVar73 + fVar59 * fVar48 + fVar56 * fVar44 + 0.0
              ;
            }
            *(float *)(pCVar22 + 0xb0) = fVar38;
          }
          pCVar25 = pCVar25 + 0x10;
          pCVar22 = pCVar22 + 200;
          pfVar20 = pfVar20 + 9;
        } while (param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50 != pCVar25);
      }
      if (sDrawContactManifolds != '\0') {
        ContactConstraint::Draw(pCVar28,DebugRenderer::sInstance,_sOrange);
      }
      bVar12 = true;
    }
    else {
      if (0 < (int)uVar6) {
        pfVar18 = (float *)(lVar15 + 0x28);
        pCVar25 = param_5 + 0x40;
        do {
          pCVar24 = pCVar25 + 0x10;
          fVar77 = *(float *)pCVar25 + *(float *)param_5;
          fVar87 = *(float *)(pCVar25 + 4) + *(float *)(param_5 + 4);
          fVar88 = *(float *)(pCVar25 + 8) + *(float *)(param_5 + 8);
          fVar37 = *(float *)param_5 + *(float *)(pCVar25 + 0x410);
          fVar43 = *(float *)(param_5 + 4) + *(float *)(pCVar25 + 0x414);
          fVar72 = *(float *)(param_5 + 8) + *(float *)(pCVar25 + 0x418);
          pfVar18[6] = 0.0;
          pfVar18[7] = 0.0;
          pfVar18[8] = 0.0;
          *(ulong *)(pfVar18 + 4) =
               CONCAT44(fVar37 * fVar50 + fVar43 * fVar67 + fVar72 * fVar91 + fVar46,
                        fVar37 * fVar36 + fVar43 * fVar66 + fVar72 * fVar95 + fVar42);
          *pfVar18 = fVar77 * fVar93 + fVar87 * fVar60 + fVar88 * fVar90 + fVar51;
          pfVar18[1] = fVar77 * fVar76 + fVar87 * fVar86 + fVar88 * fVar89 + fVar55;
          pfVar18[2] = fVar77 * fVar52 + fVar87 * fVar57 + fVar88 * fVar68 + fVar47;
          pfVar18[3] = fVar37 * fVar85 + fVar43 * fVar92 + fVar72 * fVar94 + fVar35;
          pfVar18 = pfVar18 + 9;
          pCVar25 = pCVar24;
        } while (pCVar24 != param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50);
      }
      bVar12 = false;
    }
    *(undefined4 *)(lVar15 + 0x14) = *(undefined4 *)((long)param_2 + 0x18);
    *(int *)((long)param_2 + 0x18) =
         (int)lVar15 -
         (int)**(undefined8 **)((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8) + 0x10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar12;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool JPH::ContactConstraintManager::TemplatedAddContactConstraint<(JPH::EMotionType)1,
   (JPH::EMotionType)2>(JPH::ContactConstraintManager::ContactAllocator&, void*, JPH::Body&,
   JPH::Body&, JPH::ContactManifold const&) */

bool __thiscall
JPH::ContactConstraintManager::
TemplatedAddContactConstraint<(JPH::EMotionType)1,(JPH::EMotionType)2>
          (ContactConstraintManager *this,ContactAllocator *param_1,void *param_2,Body *param_3,
          Body *param_4,ContactManifold *param_5)

{
  ContactConstraintManager *pCVar1;
  undefined4 uVar2;
  SubShapeIDPair SVar3;
  Body BVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  SubShapeIDPair *pSVar16;
  long lVar17;
  ulong uVar18;
  float *pfVar20;
  long lVar21;
  ContactConstraint *pCVar22;
  long lVar23;
  ContactManifold *pCVar24;
  uint uVar25;
  ContactManifold *pCVar26;
  float *pfVar27;
  int *piVar28;
  ulong uVar29;
  float *pfVar30;
  ContactConstraint *pCVar31;
  float *pfVar32;
  long in_FS_OFFSET;
  byte bVar33;
  float fVar34;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar46;
  uint uVar49;
  uint uVar52;
  undefined1 auVar44 [16];
  float fVar47;
  float fVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar45 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar59 [16];
  float fVar65;
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float local_278;
  float fStack_274;
  float fStack_270;
  float local_228;
  float fStack_224;
  float fStack_220;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined1 local_1e8 [12];
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  byte local_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  undefined1 local_d8 [8];
  float fStack_d0;
  Mat44 local_c8 [4];
  float afStack_c4 [33];
  long local_40;
  long *plVar19;
  
  bVar33 = 0;
  uVar29 = 0xcbf29ce484222325;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = *(int *)(param_3 + 0x70);
  iStack_114 = *(int *)(param_5 + 0x24);
  iStack_110 = *(int *)(param_4 + 0x70);
  iStack_10c = *(int *)(param_5 + 0x28);
  pSVar16 = (SubShapeIDPair *)&local_118;
  do {
    SVar3 = *pSVar16;
    pSVar16 = pSVar16 + 1;
    uVar29 = (uVar29 ^ (byte)SVar3) * 0x100000001b3;
  } while (pSVar16 != (SubShapeIDPair *)&local_108);
  iVar5 = *(int *)(this + 0x88);
  uVar6 = *(uint *)(param_5 + 0x30);
  lVar17 = ManifoldCache::Create
                     ((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8),param_1,
                      (SubShapeIDPair *)&local_118,uVar29,uVar6);
  if (lVar17 == 0) {
LAB_0011240f:
    bVar14 = false;
  }
  else {
    fVar39 = *(float *)param_4;
    fVar42 = *(float *)(param_4 + 4);
    fVar46 = *(float *)(param_4 + 8);
    fVar53 = (float)(*(uint *)(param_4 + 0x10) ^ __LC17);
    fVar60 = (float)(*(uint *)(param_4 + 0x14) ^ _UNK_00116354);
    fVar62 = (float)(*(uint *)(param_4 + 0x18) ^ _UNK_00116358);
    fVar64 = (float)(*(uint *)(param_4 + 0x1c) ^ _UNK_0011635c);
    fVar83 = fVar53 + fVar53;
    fVar67 = fVar60 + fVar60;
    fVar89 = fVar62 * (fVar62 + fVar62);
    fVar75 = (fVar62 + fVar62) * fVar64;
    fVar74 = fVar60 * fVar83 + fVar75;
    fVar75 = fVar60 * fVar83 - fVar75;
    fVar91 = fVar62 * fVar83 - fVar67 * fVar64;
    fVar54 = (_LC1 - fVar53 * fVar83) - fVar60 * fVar67;
    fVar94 = fVar62 * fVar83 + fVar67 * fVar64;
    fVar41 = fVar62 * fVar67 - fVar83 * fVar64;
    fVar84 = fVar83 * fVar64 + fVar62 * fVar67;
    fVar64 = (_LC1 - fVar89) - fVar53 * fVar83;
    fVar89 = (_LC1 - fVar60 * fVar67) - fVar89;
    fVar53 = 0.0 - (fVar39 * fVar89 + fVar42 * fVar75 + fVar46 * fVar94);
    fVar60 = 0.0 - (fVar39 * fVar74 + fVar42 * fVar64 + fVar46 * fVar41);
    fVar62 = 0.0 - (fVar39 * fVar91 + fVar42 * fVar84 + fVar46 * fVar54);
    fVar39 = *(float *)(param_5 + 0x10);
    fVar42 = *(float *)(param_5 + 0x14);
    fVar46 = *(float *)(param_5 + 0x18);
    auVar35._0_4_ = fVar42 * fVar75 + fVar39 * fVar89 + fVar46 * fVar94;
    auVar35._4_4_ = fVar42 * fVar64 + fVar39 * fVar74 + fVar46 * fVar41;
    auVar35._8_4_ = fVar42 * fVar84 + fVar39 * fVar91 + fVar46 * fVar54;
    auVar35._12_4_ = fVar42 * 0.0 + fVar39 * 0.0 + fVar46 * 0.0;
    auVar59._0_4_ =
         SQRT(auVar35._8_4_ * auVar35._8_4_ +
              auVar35._4_4_ * auVar35._4_4_ + auVar35._0_4_ * auVar35._0_4_ + 0.0);
    auVar59._4_4_ = auVar59._0_4_;
    auVar59._8_4_ = auVar59._0_4_;
    auVar59._12_4_ = auVar59._0_4_;
    auVar35 = divps(auVar35,auVar59);
    *(long *)(lVar17 + 0x18) = auVar35._0_8_;
    *(int *)(lVar17 + 0x20) = auVar35._8_4_;
    _local_e8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_100 = _LC1;
    fStack_fc = _LC1;
    fStack_f8 = _LC1;
    fStack_f4 = _LC1;
    local_108 = (float)(**(code **)(this + 0xa0))(param_3,param_5 + 0x24,param_4);
    local_104 = (float)(**(code **)(this + 0xa8))(param_3,param_5 + 0x24,param_4,param_5 + 0x28);
    BVar4 = param_3[0x79];
    if (((byte)BVar4 & 1) == 0) {
      BVar4 = param_4[0x79];
    }
    local_f0 = (byte)BVar4 & 1;
    uVar18 = (long)*(int *)(this + 0x88) ^ 1;
    uVar15 = *(uint *)(*(long *)(this + uVar18 * 0x40 + 0x20) +
                      (*(int *)(this + uVar18 * 0x40 + 0x28) - 1 & uVar29) * 4);
    if (uVar15 != 0xffffffff) {
      plVar19 = *(long **)(this + uVar18 * 0x40 + 0x18);
      lVar23 = *plVar19;
      do {
        piVar28 = (int *)((ulong)uVar15 + lVar23);
        auVar36._0_4_ = -(uint)(*piVar28 == local_118);
        auVar36._4_4_ = -(uint)(piVar28[1] == iStack_114);
        auVar36._8_4_ = -(uint)(piVar28[2] == iStack_110);
        auVar36._12_4_ = -(uint)(piVar28[3] == iStack_10c);
        uVar15 = movmskps((int)plVar19,auVar36);
        plVar19 = (long *)(ulong)uVar15;
        if (uVar15 == 0xf) {
          plVar19 = *(long **)(this + 0x98);
          if ((plVar19 != (long *)0x0) &&
             (*(code **)(*plVar19 + 0x20) != ContactListener::OnContactPersisted)) {
            (**(code **)(*plVar19 + 0x20))
                      (plVar19,param_3,param_4,param_5,(SubShapeIDPair *)&local_108);
          }
          uVar52 = _UNK_0011635c;
          uVar49 = _UNK_00116358;
          uVar25 = _UNK_00116354;
          uVar15 = __LC17;
          pfVar20 = (float *)(piVar28 + 10);
          pfVar32 = pfVar20 + (ulong)*(ushort *)((long)piVar28 + 0x26) * 9;
          LOCK();
          *(ushort *)(piVar28 + 9) = *(ushort *)(piVar28 + 9) | 1;
          UNLOCK();
          goto LAB_001114a8;
        }
        uVar15 = piVar28[4];
      } while (uVar15 != 0xffffffff);
    }
    plVar19 = *(long **)(this + 0x98);
    if ((plVar19 != (long *)0x0) && (*(code **)(*plVar19 + 0x18) != ContactListener::OnContactAdded)
       ) {
      (**(code **)(*plVar19 + 0x18))(plVar19,param_3,param_4,param_5);
    }
    pfVar32 = (float *)0x0;
    pfVar20 = (float *)0x0;
    uVar15 = __LC17;
    uVar25 = _UNK_00116354;
    uVar49 = _UNK_00116358;
    uVar52 = _UNK_0011635c;
LAB_001114a8:
    fVar39 = *(float *)param_3;
    fVar42 = *(float *)(param_3 + 4);
    fVar46 = *(float *)(param_3 + 8);
    fVar67 = (float)(*(uint *)(param_3 + 0x10) ^ uVar15);
    fVar37 = (float)(*(uint *)(param_3 + 0x14) ^ uVar25);
    fVar38 = (float)(*(uint *)(param_3 + 0x18) ^ uVar49);
    fVar40 = (float)(*(uint *)(param_3 + 0x1c) ^ uVar52);
    fVar55 = fVar67 + fVar67;
    fVar76 = fVar37 + fVar37;
    fVar85 = fVar38 * (fVar38 + fVar38);
    fVar83 = fVar40 * (fVar38 + fVar38);
    fVar93 = fVar38 * fVar76 - fVar55 * fVar40;
    fVar56 = fVar55 * fVar40 + fVar38 * fVar76;
    fVar92 = fVar38 * fVar55 + fVar76 * fVar40;
    fVar40 = fVar38 * fVar55 - fVar76 * fVar40;
    fVar90 = (_LC1 - fVar67 * fVar55) - fVar37 * fVar76;
    fVar38 = fVar37 * fVar55 + fVar83;
    fVar83 = fVar37 * fVar55 - fVar83;
    fVar55 = (_LC1 - fVar85) - fVar67 * fVar55;
    fVar85 = (_LC1 - fVar37 * fVar76) - fVar85;
    fVar67 = 0.0 - (fVar39 * fVar85 + fVar42 * fVar83 + fVar46 * fVar92);
    fVar37 = 0.0 - (fVar39 * fVar38 + fVar42 * fVar55 + fVar46 * fVar93);
    fVar39 = 0.0 - (fVar39 * fVar40 + fVar42 * fVar56 + fVar46 * fVar90);
    if ((local_f0 == 0) &&
       (((param_3[0x78] == (Body)0x2 && (local_100 != 0.0)) ||
        ((param_4[0x78] == (Body)0x2 && (fStack_f8 != 0.0)))))) {
      LOCK();
      pCVar1 = this + 0xbc;
      uVar15 = *(uint *)pCVar1;
      *(uint *)pCVar1 = *(uint *)pCVar1 + 1;
      UNLOCK();
      if (*(uint *)(this + 0xb8) <= uVar15) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
        *(undefined2 *)(lVar17 + 0x26) = 0;
        goto LAB_0011240f;
      }
      pCVar31 = (ContactConstraint *)(*(long *)(this + 0xb0) + (ulong)uVar15 * 0x360);
      pCVar22 = pCVar31;
      for (lVar23 = 0x6c; lVar23 != 0; lVar23 = lVar23 + -1) {
        *(undefined8 *)pCVar22 = 0;
        pCVar22 = pCVar22 + (ulong)bVar33 * -0x10 + 8;
      }
      *(Body **)pCVar31 = param_3;
      *(Body **)(pCVar31 + 8) = param_4;
      uVar2 = *(undefined4 *)(param_5 + 0x10);
      *(ulong *)(pCVar31 + 0x10) = uVar29;
      *(undefined4 *)(pCVar31 + 0x18) = uVar2;
      *(undefined8 *)(pCVar31 + 0x1c) = *(undefined8 *)(param_5 + 0x14);
      lVar23 = *(long *)(param_3 + 0x48);
      *(float *)(pCVar31 + 0x24) = local_108;
      fVar42 = 0.0;
      if (lVar23 != 0) {
        fVar42 = local_100 * *(float *)(lVar23 + 0x58);
      }
      lVar21 = *(long *)(this + 0xc0);
      lVar7 = *(long *)(param_4 + 0x48);
      *(ulong *)(pCVar31 + 0x28) = CONCAT44(fStack_fc,fVar42);
      uVar8 = *(undefined8 *)(lVar21 + 0x40);
      if (lVar7 == 0) {
        fVar42 = 0.0;
      }
      else {
        fVar42 = fStack_f8 * *(float *)(lVar7 + 0x58);
      }
      *(ulong *)(pCVar31 + 0x30) = CONCAT44(fStack_f4,fVar42);
      if (lVar23 == 0) {
        uVar25 = 0xffffffff;
      }
      else {
        uVar25 = *(uint *)(lVar23 + 0x70);
      }
      JPH::IslandBuilder::LinkContact((uint)uVar8,uVar15,uVar25);
      puVar9 = *(undefined8 **)(param_4 + 0x48);
      fVar42 = *(float *)(param_5 + 0x10);
      fVar46 = *(float *)(*(long **)(this + 0xc0) + 4);
      lVar23 = **(long **)(this + 0xc0);
      fVar79 = *(float *)(lVar23 + 0x400);
      fVar81 = *(float *)(lVar23 + 0x404);
      fVar12 = *(float *)(lVar23 + 0x408);
      fVar76 = *(float *)(param_5 + 0x14);
      fVar77 = *(float *)(param_5 + 0x18);
      fVar34 = fStack_f8 * *(float *)(puVar9 + 0xb);
      MotionProperties::GetInverseInertiaForRotation(local_c8);
      uVar15 = _LC20;
      lVar23 = 0;
      do {
        *(float *)((long)afStack_c4 + lVar23 + 0x3c) = *(float *)(local_c8 + lVar23) * fStack_f4;
        *(float *)((long)afStack_c4 + lVar23 + 0x40) =
             *(float *)((long)afStack_c4 + lVar23) * fStack_f4;
        *(float *)((long)afStack_c4 + lVar23 + 0x44) =
             *(float *)((long)afStack_c4 + lVar23 + 4) * fStack_f4;
        *(float *)((long)afStack_c4 + lVar23 + 0x48) =
             *(float *)((long)afStack_c4 + lVar23 + 8) * fStack_f4;
        lVar23 = lVar23 + 0x10;
      } while (lVar23 != 0x40);
      fVar50 = *(float *)(pCVar31 + 0x18);
      fVar47 = *(float *)(pCVar31 + 0x1c);
      fVar58 = *(float *)(pCVar31 + 0x20);
      if ((float)((uint)fVar47 & _LC10) < (float)(_LC10 & (uint)fVar50)) {
        auVar66._4_4_ = 0;
        auVar66._0_4_ = fVar58;
        auVar66._12_4_ = (uint)fVar50 ^ _LC20;
        auVar66._8_4_ = (uint)fVar50 ^ _LC20;
        auVar45._0_4_ = SQRT(fVar50 * fVar50 + fVar58 * fVar58);
        auVar45._4_4_ = auVar45._0_4_;
        auVar45._8_4_ = auVar45._0_4_;
        auVar45._12_4_ = auVar45._0_4_;
        auVar35 = divps(auVar66,auVar45);
        local_1e8 = auVar35._0_12_;
      }
      else {
        auVar11._8_4_ = (uint)fVar47 ^ _LC20;
        auVar11._4_4_ = (uint)fVar47 ^ _LC20;
        fVar57 = SQRT(fVar47 * fVar47 + fVar58 * fVar58);
        auVar11._0_4_ = fVar58;
        auVar11._12_4_ = 0;
        auVar44._4_4_ = fVar57;
        auVar44._0_4_ = fVar57;
        auVar44._8_4_ = fVar57;
        auVar44._12_4_ = fVar57;
        auVar35 = divps(auVar11 << 0x20,auVar44);
        local_1e8 = auVar35._0_12_;
      }
      fVar68 = local_1e8._0_4_;
      fVar70 = local_1e8._4_4_;
      fVar72 = local_1e8._8_4_;
      pCVar22 = pCVar31 + 0x40;
      lVar23 = (ulong)*(uint *)(pCVar31 + 0x38) * 200;
      fVar57 = fVar70 * fVar50 - fVar47 * fVar68;
      fVar47 = fVar72 * fVar47 - fVar58 * fVar70;
      fVar50 = fVar68 * fVar58 - fVar50 * fVar72;
      if (pCVar22 + lVar23 < pCVar22 + (ulong)uVar6 * 200) {
        uVar29 = 0;
        lVar21 = 0;
        do {
          uVar29 = uVar29 + 1;
          *(undefined1 (*) [16])(pCVar31 + lVar21 + lVar23 + 0x70) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar31 + lVar21 + lVar23 + 0xb0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar31 + lVar21 + lVar23 + 0xf0) = (undefined1  [16])0x0;
          lVar21 = lVar21 + 200;
        } while (uVar29 < (ulong)(pCVar22 + (ulong)uVar6 * 200 + (-1 - (long)(pCVar22 + lVar23))) /
                          200 + 1);
      }
      *(uint *)(pCVar31 + 0x38) = uVar6;
      if (0 < (int)uVar6) {
        puVar10 = *(undefined8 **)(param_3 + 0x48);
        pfVar27 = (float *)(lVar17 + 0x28);
        lVar23 = *(long *)(this + 0x90);
        pCVar24 = param_5 + 0x40;
        do {
          fVar58 = *(float *)pCVar24 + *(float *)param_5;
          fVar61 = *(float *)(pCVar24 + 4) + *(float *)(param_5 + 4);
          fVar63 = *(float *)(pCVar24 + 8) + *(float *)(param_5 + 8);
          fVar69 = *(float *)param_5 + *(float *)(pCVar24 + 0x410);
          fVar71 = *(float *)(param_5 + 4) + *(float *)(pCVar24 + 0x414);
          fVar73 = *(float *)(param_5 + 8) + *(float *)(pCVar24 + 0x418);
          fVar78 = fVar58 * fVar85 + fVar61 * fVar83 + fVar63 * fVar92 + fVar67;
          fVar80 = fVar58 * fVar38 + fVar61 * fVar55 + fVar63 * fVar93 + fVar37;
          fVar82 = fVar58 * fVar40 + fVar61 * fVar56 + fVar63 * fVar90 + fVar39;
          fVar86 = fVar69 * fVar89 + fVar71 * fVar75 + fVar73 * fVar94 + fVar53;
          fVar87 = fVar69 * fVar74 + fVar71 * fVar64 + fVar73 * fVar41 + fVar60;
          fVar88 = fVar69 * fVar91 + fVar71 * fVar84 + fVar73 * fVar54 + fVar62;
          if (pfVar20 < pfVar32) {
            fVar65 = *(float *)(lVar23 + 0x34);
            pfVar30 = pfVar20;
            do {
              fVar43 = fVar78 - *pfVar30;
              fVar48 = fVar80 - pfVar30[1];
              fVar51 = fVar82 - pfVar30[2];
              if ((fVar51 * fVar51 + fVar48 * fVar48 + fVar43 * fVar43 + 0.0 <= fVar65) &&
                 (fVar43 = fVar86 - pfVar30[3], fVar48 = fVar87 - pfVar30[4],
                 fVar51 = fVar88 - pfVar30[5],
                 fVar51 * fVar51 + fVar48 * fVar48 + fVar43 * fVar43 + 0.0 <= fVar65)) {
                *(float *)(pCVar22 + 0x3c) = pfVar30[6];
                *(float *)(pCVar22 + 0x7c) = pfVar30[7];
                fVar65 = pfVar30[8];
                goto LAB_00111d85;
              }
              pfVar30 = pfVar30 + 9;
            } while (pfVar30 < pfVar32);
          }
          *(undefined4 *)(pCVar22 + 0x3c) = 0;
          fVar65 = 0.0;
          *(undefined4 *)(pCVar22 + 0x7c) = 0;
LAB_00111d85:
          *(float *)(pCVar22 + 0xbc) = fVar65;
          *(ulong *)(pfVar27 + 4) = CONCAT44(fVar88,fVar87);
          *pfVar27 = fVar78;
          pfVar27[1] = fVar80;
          pfVar27[2] = fVar82;
          pfVar27[3] = fVar86;
          uVar8 = *(undefined8 *)(param_5 + 0x10);
          uVar13 = *(undefined8 *)(param_5 + 0x18);
          uVar25 = *(uint *)(lVar23 + 0x40);
          fVar86 = (fVar69 + fVar58) * _LC6;
          fVar87 = (fVar71 + fVar61) * _UNK_00116314;
          fVar88 = (fVar73 + fVar63) * _UNK_00116318;
          *(float **)(pCVar22 + 0xc0) = pfVar27;
          fVar78 = (float)uVar8;
          fVar80 = (float)((ulong)uVar8 >> 0x20);
          fVar82 = (float)uVar13;
          fVar65 = fVar86 - *(float *)param_3;
          fVar43 = fVar87 - *(float *)(param_3 + 4);
          fVar48 = fVar88 - *(float *)(param_3 + 8);
          fVar86 = fVar86 - *(float *)param_4;
          fVar87 = fVar87 - *(float *)(param_4 + 4);
          fVar88 = fVar88 - *(float *)(param_4 + 8);
          fVar58 = (float)((uint)((fVar63 - fVar73) * fVar82 +
                                 (fVar61 - fVar71) * fVar80 + (fVar58 - fVar69) * fVar78 + 0.0) ^
                          uVar15) / fVar46;
          if (fVar58 <= 0.0) {
            fVar58 = 0.0;
          }
          if (0.0 < local_104) {
            local_1f8 = (float)*puVar9;
            fStack_1f4 = (float)((ulong)*puVar9 >> 0x20);
            fStack_1f0 = (float)puVar9[1];
            local_278 = (float)*puVar10;
            fStack_274 = (float)((ulong)*puVar10 >> 0x20);
            fStack_270 = (float)puVar10[1];
            fVar61 = (((fVar87 * *(float *)(puVar9 + 2) - *(float *)((long)puVar9 + 0x14) * fVar86)
                      + fStack_1f0) -
                     ((fVar43 * *(float *)(puVar10 + 2) - *(float *)((long)puVar10 + 0x14) * fVar65)
                     + fStack_270)) * fVar82 +
                     (((fVar86 * *(float *)(puVar9 + 3) - *(float *)(puVar9 + 2) * fVar88) +
                      fStack_1f4) -
                     ((fVar65 * *(float *)(puVar10 + 3) - *(float *)(puVar10 + 2) * fVar48) +
                     fStack_274)) * fVar80 +
                     (((fVar88 * *(float *)((long)puVar9 + 0x14) - *(float *)(puVar9 + 3) * fVar87)
                      + local_1f8) -
                     ((fVar48 * *(float *)((long)puVar10 + 0x14) - *(float *)(puVar10 + 3) * fVar43)
                     + local_278)) * fVar78 + 0.0;
            if ((fVar61 < (float)(uVar25 ^ uVar15)) && (fVar61 < (float)(uVar15 ^ (uint)fVar58))) {
              fVar58 = (fVar61 - (*(float *)((long)puVar9 + 0x6c) - *(float *)((long)puVar10 + 0x6c)
                                 ) * (fVar46 * fVar12 * fVar77 +
                                     fVar46 * fVar81 * fVar76 + fVar42 * fVar46 * fVar79 + 0.0)) *
                       local_104;
            }
          }
          fVar63 = fVar86 * fVar80 - fVar78 * fVar87;
          fVar69 = fVar87 * fVar82 - fVar80 * fVar88;
          fVar71 = fVar88 * fVar78 - fVar82 * fVar86;
          *(float *)pCVar22 = fVar82 * fVar43 - fVar80 * fVar48;
          *(float *)(pCVar22 + 4) = fVar78 * fVar48 - fVar82 * fVar65;
          *(float *)(pCVar22 + 8) = fVar80 * fVar65 - fVar78 * fVar43;
          *(float *)(pCVar22 + 0xc) = fVar69;
          *(ulong *)(pCVar22 + 0x10) = CONCAT44(fVar63,fVar71);
          local_228 = (float)afStack_c4._92_8_;
          fStack_224 = SUB84(afStack_c4._92_8_,4);
          fStack_220 = (float)afStack_c4._100_8_;
          fVar73 = fVar69 * afStack_c4[0xf] + fVar71 * afStack_c4[0x13] + fVar63 * local_228;
          fVar78 = fVar69 * afStack_c4[0x10] + fVar71 * afStack_c4[0x14] + fVar63 * fStack_224;
          fVar80 = fVar69 * afStack_c4[0x11] + fVar71 * afStack_c4[0x15] + fVar63 * fStack_220;
          *(ulong *)(pCVar22 + 0x24) = CONCAT44(fVar78,fVar73);
          *(float *)(pCVar22 + 0x2c) = fVar80;
          fVar61 = _LC1;
          fVar63 = fVar63 * fVar80 + fVar71 * fVar78 + fVar69 * fVar73 + 0.0 + fVar34 + 0.0;
          if (fVar63 == 0.0) {
            *(undefined4 *)(pCVar22 + 0x3c) = 0;
            fVar61 = 0.0;
          }
          else {
            *(undefined4 *)(pCVar22 + 0x38) = 0;
            *(float *)(pCVar22 + 0x34) = fVar58;
            fVar61 = fVar61 / fVar63;
          }
          *(float *)(pCVar22 + 0x30) = fVar61;
          if (local_108 <= 0.0) {
            *(undefined4 *)(pCVar22 + 0x70) = 0;
            *(undefined4 *)(pCVar22 + 0x7c) = 0;
            *(undefined4 *)(pCVar22 + 0xb0) = 0;
            *(undefined4 *)(pCVar22 + 0xbc) = 0;
          }
          else {
            fVar61 = (fVar48 * (float)local_d8._4_4_ - fStack_d0 * fVar43) + (float)local_e8._0_4_;
            fVar69 = (fVar65 * fStack_d0 - (float)local_d8._0_4_ * fVar48) + (float)local_e8._4_4_;
            fVar73 = (fVar43 * (float)local_d8._0_4_ - (float)local_d8._4_4_ * fVar65) + fStack_e0;
            fVar63 = fVar70 * fVar86 - fVar68 * fVar87;
            fVar71 = fVar72 * fVar87 - fVar70 * fVar88;
            fVar78 = fVar68 * fVar88 - fVar72 * fVar86;
            *(float *)(pCVar22 + 0x40) = fVar72 * fVar43 - fVar70 * fVar48;
            *(float *)(pCVar22 + 0x44) = fVar68 * fVar48 - fVar72 * fVar65;
            *(float *)(pCVar22 + 0x48) = fVar70 * fVar65 - fVar68 * fVar43;
            *(float *)(pCVar22 + 0x4c) = fVar71;
            *(ulong *)(pCVar22 + 0x50) = CONCAT44(fVar63,fVar78);
            fVar80 = fVar71 * afStack_c4[0xf] + fVar78 * afStack_c4[0x13] + fVar63 * local_228;
            fVar82 = fVar71 * afStack_c4[0x10] + fVar78 * afStack_c4[0x14] + fVar63 * fStack_224;
            fVar51 = fVar71 * afStack_c4[0x11] + fVar78 * afStack_c4[0x15] + fVar63 * fStack_220;
            *(ulong *)(pCVar22 + 100) = CONCAT44(fVar82,fVar80);
            *(float *)(pCVar22 + 0x6c) = fVar51;
            fVar58 = _LC1;
            fVar63 = fVar63 * fVar51 + fVar82 * fVar78 + fVar80 * fVar71 + 0.0 + fVar34 + 0.0;
            if (fVar63 == 0.0) {
              *(undefined4 *)(pCVar22 + 0x7c) = 0;
              fVar58 = 0.0;
            }
            else {
              *(undefined4 *)(pCVar22 + 0x78) = 0;
              fVar58 = fVar58 / fVar63;
              *(float *)(pCVar22 + 0x74) = fVar72 * fVar73 + fVar68 * fVar61 + 0.0 + fVar70 * fVar69
              ;
            }
            *(float *)(pCVar22 + 0x70) = fVar58;
            fVar63 = fVar86 * fVar50 - fVar87 * fVar47;
            fVar71 = fVar87 * fVar57 - fVar88 * fVar50;
            fVar78 = fVar88 * fVar47 - fVar86 * fVar57;
            *(float *)(pCVar22 + 0x80) = fVar43 * fVar57 - fVar48 * fVar50;
            *(float *)(pCVar22 + 0x84) = fVar48 * fVar47 - fVar65 * fVar57;
            *(float *)(pCVar22 + 0x88) = fVar65 * fVar50 - fVar43 * fVar47;
            *(float *)(pCVar22 + 0x8c) = fVar71;
            *(ulong *)(pCVar22 + 0x90) = CONCAT44(fVar63,fVar78);
            fVar80 = fVar71 * afStack_c4[0xf] + fVar78 * afStack_c4[0x13] + fVar63 * local_228;
            fVar82 = fVar71 * afStack_c4[0x10] + fVar78 * afStack_c4[0x14] + fVar63 * fStack_224;
            fVar86 = fVar71 * afStack_c4[0x11] + fVar78 * afStack_c4[0x15] + fVar63 * fStack_220;
            *(ulong *)(pCVar22 + 0xa4) = CONCAT44(fVar82,fVar80);
            *(float *)(pCVar22 + 0xac) = fVar86;
            fVar58 = _LC1;
            fVar63 = fVar63 * fVar86 + fVar78 * fVar82 + fVar71 * fVar80 + 0.0 + fVar34 + 0.0;
            if (fVar63 == 0.0) {
              *(undefined4 *)(pCVar22 + 0xbc) = 0;
              fVar58 = 0.0;
            }
            else {
              *(undefined4 *)(pCVar22 + 0xb8) = 0;
              fVar58 = fVar58 / fVar63;
              *(float *)(pCVar22 + 0xb4) = fVar57 * fVar73 + fVar69 * fVar50 + fVar61 * fVar47 + 0.0
              ;
            }
            *(float *)(pCVar22 + 0xb0) = fVar58;
          }
          pCVar24 = pCVar24 + 0x10;
          pCVar22 = pCVar22 + 200;
          pfVar27 = pfVar27 + 9;
        } while (param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50 != pCVar24);
      }
      if (sDrawContactManifolds != '\0') {
        ContactConstraint::Draw(pCVar31,DebugRenderer::sInstance,_sOrange);
      }
      bVar14 = true;
    }
    else {
      if (0 < (int)uVar6) {
        pfVar20 = (float *)(lVar17 + 0x28);
        pCVar24 = param_5 + 0x40;
        do {
          pCVar26 = pCVar24 + 0x10;
          fVar77 = *(float *)pCVar24 + *(float *)param_5;
          fVar79 = *(float *)(pCVar24 + 4) + *(float *)(param_5 + 4);
          fVar81 = *(float *)(pCVar24 + 8) + *(float *)(param_5 + 8);
          fVar42 = *(float *)param_5 + *(float *)(pCVar24 + 0x410);
          fVar46 = *(float *)(param_5 + 4) + *(float *)(pCVar24 + 0x414);
          fVar76 = *(float *)(param_5 + 8) + *(float *)(pCVar24 + 0x418);
          pfVar20[6] = 0.0;
          pfVar20[7] = 0.0;
          pfVar20[8] = 0.0;
          *(ulong *)(pfVar20 + 4) =
               CONCAT44(fVar42 * fVar91 + fVar46 * fVar84 + fVar76 * fVar54 + fVar62,
                        fVar42 * fVar74 + fVar46 * fVar64 + fVar76 * fVar41 + fVar60);
          *pfVar20 = fVar77 * fVar85 + fVar79 * fVar83 + fVar81 * fVar92 + fVar67;
          pfVar20[1] = fVar77 * fVar38 + fVar79 * fVar55 + fVar81 * fVar93 + fVar37;
          pfVar20[2] = fVar77 * fVar40 + fVar79 * fVar56 + fVar81 * fVar90 + fVar39;
          pfVar20[3] = fVar42 * fVar89 + fVar46 * fVar75 + fVar76 * fVar94 + fVar53;
          pfVar20 = pfVar20 + 9;
          pCVar24 = pCVar26;
        } while (pCVar26 != param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50);
      }
      bVar14 = false;
    }
    *(undefined4 *)(lVar17 + 0x14) = *(undefined4 *)((long)param_2 + 0x18);
    *(int *)((long)param_2 + 0x18) =
         (int)lVar17 -
         (int)**(undefined8 **)((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8) + 0x10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar14;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool JPH::ContactConstraintManager::TemplatedAddContactConstraint<(JPH::EMotionType)1,
   (JPH::EMotionType)1>(JPH::ContactConstraintManager::ContactAllocator&, void*, JPH::Body&,
   JPH::Body&, JPH::ContactManifold const&) */

bool __thiscall
JPH::ContactConstraintManager::
TemplatedAddContactConstraint<(JPH::EMotionType)1,(JPH::EMotionType)1>
          (ContactConstraintManager *this,ContactAllocator *param_1,void *param_2,Body *param_3,
          Body *param_4,ContactManifold *param_5)

{
  ContactConstraintManager *pCVar1;
  undefined4 uVar2;
  SubShapeIDPair SVar3;
  Body BVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  uint uVar10;
  SubShapeIDPair *pSVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar15;
  ContactConstraint *pCVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  float *pfVar20;
  uint uVar21;
  ContactManifold *pCVar22;
  ContactConstraint *pCVar23;
  int *piVar24;
  ulong uVar25;
  ContactManifold *pCVar26;
  float *pfVar27;
  long in_FS_OFFSET;
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar63;
  float fVar64;
  undefined1 auVar62 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 local_178 [12];
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  byte local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  long *plVar14;
  uint uVar53;
  uint uVar55;
  
  bVar28 = 0;
  uVar25 = 0xcbf29ce484222325;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = *(int *)(param_3 + 0x70);
  iStack_94 = *(int *)(param_5 + 0x24);
  iStack_90 = *(int *)(param_4 + 0x70);
  iStack_8c = *(int *)(param_5 + 0x28);
  pSVar11 = (SubShapeIDPair *)&local_98;
  do {
    SVar3 = *pSVar11;
    pSVar11 = pSVar11 + 1;
    uVar25 = (uVar25 ^ (byte)SVar3) * 0x100000001b3;
  } while (pSVar11 != (SubShapeIDPair *)&local_88);
  iVar5 = *(int *)(this + 0x88);
  uVar6 = *(uint *)(param_5 + 0x30);
  lVar12 = ManifoldCache::Create
                     ((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8),param_1,
                      (SubShapeIDPair *)&local_98,uVar25,uVar6);
  if (lVar12 == 0) {
LAB_001132db:
    bVar9 = false;
  }
  else {
    fVar32 = *(float *)param_4;
    fVar39 = *(float *)(param_4 + 4);
    fVar44 = *(float *)(param_4 + 8);
    fVar29 = (float)(*(uint *)(param_4 + 0x10) ^ __LC17);
    fVar36 = (float)(*(uint *)(param_4 + 0x14) ^ _UNK_00116354);
    fVar38 = (float)(*(uint *)(param_4 + 0x18) ^ _UNK_00116358);
    fVar41 = (float)(*(uint *)(param_4 + 0x1c) ^ _UNK_0011635c);
    fVar65 = fVar36 + fVar36;
    fVar42 = fVar29 + fVar29;
    fVar67 = fVar38 * (fVar38 + fVar38);
    fVar30 = fVar41 * (fVar38 + fVar38);
    fVar47 = fVar38 * fVar42 + fVar65 * fVar41;
    fVar77 = fVar38 * fVar65 - fVar42 * fVar41;
    fVar48 = (_LC1 - fVar29 * fVar42) - fVar36 * fVar65;
    fVar43 = fVar42 * fVar41 + fVar38 * fVar65;
    fVar49 = fVar36 * fVar42 - fVar30;
    fVar30 = fVar36 * fVar42 + fVar30;
    fVar78 = (_LC1 - fVar67) - fVar29 * fVar42;
    fVar41 = fVar38 * fVar42 - fVar65 * fVar41;
    fVar67 = (_LC1 - fVar36 * fVar65) - fVar67;
    fVar29 = 0.0 - (fVar32 * fVar67 + fVar39 * fVar49 + fVar44 * fVar47);
    fVar36 = 0.0 - (fVar32 * fVar30 + fVar39 * fVar78 + fVar44 * fVar77);
    fVar38 = 0.0 - (fVar32 * fVar41 + fVar39 * fVar43 + fVar44 * fVar48);
    fVar32 = *(float *)(param_5 + 0x10);
    fVar39 = *(float *)(param_5 + 0x14);
    fVar44 = *(float *)(param_5 + 0x18);
    auVar33._0_4_ = fVar39 * fVar49 + fVar32 * fVar67 + fVar44 * fVar47;
    auVar33._4_4_ = fVar39 * fVar78 + fVar32 * fVar30 + fVar44 * fVar77;
    auVar33._8_4_ = fVar39 * fVar43 + fVar32 * fVar41 + fVar44 * fVar48;
    auVar33._12_4_ = fVar39 * 0.0 + fVar32 * 0.0 + fVar44 * 0.0;
    auVar34._0_4_ =
         SQRT(auVar33._8_4_ * auVar33._8_4_ +
              auVar33._4_4_ * auVar33._4_4_ + auVar33._0_4_ * auVar33._0_4_ + 0.0);
    auVar34._4_4_ = auVar34._0_4_;
    auVar34._8_4_ = auVar34._0_4_;
    auVar34._12_4_ = auVar34._0_4_;
    auVar34 = divps(auVar33,auVar34);
    local_80 = _LC1;
    fStack_7c = _LC1;
    fStack_78 = _LC1;
    fStack_74 = _LC1;
    *(long *)(lVar12 + 0x18) = auVar34._0_8_;
    *(int *)(lVar12 + 0x20) = auVar34._8_4_;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_88 = (float)(**(code **)(this + 0xa0))(param_3,param_5 + 0x24,param_4);
    local_84 = (**(code **)(this + 0xa8))(param_3,param_5 + 0x24,param_4,param_5 + 0x28);
    BVar4 = param_3[0x79];
    if (((byte)BVar4 & 1) == 0) {
      BVar4 = param_4[0x79];
    }
    local_70 = (byte)BVar4 & 1;
    uVar13 = (long)*(int *)(this + 0x88) ^ 1;
    uVar10 = *(uint *)(*(long *)(this + uVar13 * 0x40 + 0x20) +
                      (*(int *)(this + uVar13 * 0x40 + 0x28) - 1 & uVar25) * 4);
    if (uVar10 != 0xffffffff) {
      plVar14 = *(long **)(this + uVar13 * 0x40 + 0x18);
      lVar19 = *plVar14;
      do {
        piVar24 = (int *)((ulong)uVar10 + lVar19);
        auVar35._0_4_ = -(uint)(*piVar24 == local_98);
        auVar35._4_4_ = -(uint)(piVar24[1] == iStack_94);
        auVar35._8_4_ = -(uint)(piVar24[2] == iStack_90);
        auVar35._12_4_ = -(uint)(piVar24[3] == iStack_8c);
        uVar10 = movmskps((int)plVar14,auVar35);
        plVar14 = (long *)(ulong)uVar10;
        if (uVar10 == 0xf) {
          plVar14 = *(long **)(this + 0x98);
          if ((plVar14 != (long *)0x0) &&
             (*(code **)(*plVar14 + 0x20) != ContactListener::OnContactPersisted)) {
            (**(code **)(*plVar14 + 0x20))
                      (plVar14,param_3,param_4,param_5,(SubShapeIDPair *)&local_88);
          }
          uVar55 = _UNK_0011635c;
          uVar53 = _UNK_00116358;
          uVar21 = _UNK_00116354;
          uVar10 = __LC17;
          fVar32 = _LC1;
          pfVar15 = (float *)(piVar24 + 10);
          pfVar27 = pfVar15 + (ulong)*(ushort *)((long)piVar24 + 0x26) * 9;
          LOCK();
          *(ushort *)(piVar24 + 9) = *(ushort *)(piVar24 + 9) | 1;
          UNLOCK();
          goto LAB_001128a0;
        }
        uVar10 = piVar24[4];
      } while (uVar10 != 0xffffffff);
    }
    plVar14 = *(long **)(this + 0x98);
    if ((plVar14 != (long *)0x0) && (*(code **)(*plVar14 + 0x18) != ContactListener::OnContactAdded)
       ) {
      (**(code **)(*plVar14 + 0x18))(plVar14,param_3,param_4,param_5);
    }
    pfVar27 = (float *)0x0;
    pfVar15 = (float *)0x0;
    uVar10 = __LC17;
    uVar21 = _UNK_00116354;
    uVar53 = _UNK_00116358;
    uVar55 = _UNK_0011635c;
    fVar32 = _LC1;
LAB_001128a0:
    fVar50 = (float)(uVar10 ^ *(uint *)(param_3 + 0x10));
    fVar51 = (float)(uVar21 ^ *(uint *)(param_3 + 0x14));
    fVar52 = (float)(uVar53 ^ *(uint *)(param_3 + 0x18));
    fVar54 = (float)(uVar55 ^ *(uint *)(param_3 + 0x1c));
    fVar39 = *(float *)param_3;
    fVar44 = *(float *)(param_3 + 4);
    fVar42 = *(float *)(param_3 + 8);
    fVar69 = fVar51 + fVar51;
    fVar65 = fVar50 + fVar50;
    fVar73 = fVar52 * (fVar52 + fVar52);
    fVar31 = fVar54 * (fVar52 + fVar52);
    fVar57 = fVar52 * fVar69 - fVar65 * fVar54;
    fVar56 = fVar52 * fVar65 + fVar69 * fVar54;
    fVar68 = fVar52 * fVar65 - fVar69 * fVar54;
    fVar58 = (fVar32 - fVar50 * fVar65) - fVar51 * fVar69;
    fVar59 = fVar51 * fVar65 - fVar31;
    fVar31 = fVar51 * fVar65 + fVar31;
    fVar50 = (fVar32 - fVar73) - fVar50 * fVar65;
    fVar65 = fVar65 * fVar54 + fVar52 * fVar69;
    fVar73 = (fVar32 - fVar51 * fVar69) - fVar73;
    fVar32 = 0.0 - (fVar39 * fVar73 + fVar44 * fVar59 + fVar42 * fVar56);
    fVar51 = 0.0 - (fVar39 * fVar31 + fVar44 * fVar50 + fVar42 * fVar57);
    fVar39 = 0.0 - (fVar39 * fVar68 + fVar44 * fVar65 + fVar42 * fVar58);
    if ((local_70 == 0) &&
       (((param_3[0x78] == (Body)0x2 && (local_80 != 0.0)) ||
        ((param_4[0x78] == (Body)0x2 && (fStack_78 != 0.0)))))) {
      LOCK();
      pCVar1 = this + 0xbc;
      uVar10 = *(uint *)pCVar1;
      *(uint *)pCVar1 = *(uint *)pCVar1 + 1;
      UNLOCK();
      if (*(uint *)(this + 0xb8) <= uVar10) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
        *(undefined2 *)(lVar12 + 0x26) = 0;
        goto LAB_001132db;
      }
      pCVar16 = (ContactConstraint *)((ulong)uVar10 * 0x360 + *(long *)(this + 0xb0));
      pCVar23 = pCVar16;
      for (lVar19 = 0x6c; lVar19 != 0; lVar19 = lVar19 + -1) {
        *(undefined8 *)pCVar23 = 0;
        pCVar23 = pCVar23 + (ulong)bVar28 * -0x10 + 8;
      }
      *(Body **)pCVar16 = param_3;
      *(Body **)(pCVar16 + 8) = param_4;
      uVar2 = *(undefined4 *)(param_5 + 0x10);
      *(ulong *)(pCVar16 + 0x10) = uVar25;
      *(undefined4 *)(pCVar16 + 0x18) = uVar2;
      *(undefined8 *)(pCVar16 + 0x1c) = *(undefined8 *)(param_5 + 0x14);
      lVar19 = *(long *)(param_3 + 0x48);
      *(float *)(pCVar16 + 0x24) = local_88;
      fVar44 = 0.0;
      if (lVar19 != 0) {
        fVar44 = local_80 * *(float *)(lVar19 + 0x58);
      }
      lVar17 = *(long *)(param_4 + 0x48);
      uVar7 = *(undefined8 *)(*(long *)(this + 0xc0) + 0x40);
      *(ulong *)(pCVar16 + 0x28) = CONCAT44(fStack_7c,fVar44);
      if (lVar17 == 0) {
        fVar44 = 0.0;
      }
      else {
        fVar44 = fStack_78 * *(float *)(lVar17 + 0x58);
      }
      *(ulong *)(pCVar16 + 0x30) = CONCAT44(fStack_74,fVar44);
      if (lVar19 == 0) {
        uVar21 = 0xffffffff;
      }
      else {
        uVar21 = *(uint *)(lVar19 + 0x70);
      }
      JPH::IslandBuilder::LinkContact((uint)uVar7,uVar10,uVar21);
      fVar44 = *(float *)(pCVar16 + 0x18);
      fVar42 = *(float *)(pCVar16 + 0x1c);
      fVar52 = *(float *)(pCVar16 + 0x20);
      if ((float)((uint)fVar42 & _LC10) < (float)(_LC10 & (uint)fVar44)) {
        auVar46._12_4_ = (uint)fVar44 ^ _LC20;
        auVar46._8_4_ = (uint)fVar44 ^ _LC20;
        auVar46._4_4_ = 0;
        auVar46._0_4_ = fVar52;
        fVar54 = SQRT(fVar44 * fVar44 + fVar52 * fVar52);
        auVar62._4_4_ = fVar54;
        auVar62._0_4_ = fVar54;
        auVar62._8_4_ = fVar54;
        auVar62._12_4_ = fVar54;
        auVar34 = divps(auVar46,auVar62);
        local_178 = auVar34._0_12_;
      }
      else {
        auVar8._8_4_ = (uint)fVar42 ^ _LC20;
        auVar8._4_4_ = (uint)fVar42 ^ _LC20;
        auVar8._0_4_ = fVar52;
        auVar8._12_4_ = 0;
        fVar54 = SQRT(fVar52 * fVar52 + fVar42 * fVar42);
        auVar45._4_4_ = fVar54;
        auVar45._0_4_ = fVar54;
        auVar45._8_4_ = fVar54;
        auVar45._12_4_ = fVar54;
        auVar34 = divps(auVar8 << 0x20,auVar45);
        local_178 = auVar34._0_12_;
      }
      fVar54 = local_178._0_4_;
      fVar69 = local_178._4_4_;
      fVar66 = local_178._8_4_;
      pCVar23 = pCVar16 + 0x40;
      lVar19 = (ulong)*(uint *)(pCVar16 + 0x38) * 200;
      fVar60 = fVar69 * fVar44 - fVar42 * fVar54;
      fVar42 = fVar66 * fVar42 - fVar52 * fVar69;
      fVar44 = fVar54 * fVar52 - fVar44 * fVar66;
      if (pCVar23 + lVar19 < pCVar23 + (ulong)uVar6 * 200) {
        lVar17 = 0;
        uVar25 = 0;
        do {
          uVar25 = uVar25 + 1;
          *(undefined1 (*) [16])(pCVar16 + lVar17 + lVar19 + 0x70) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar16 + lVar17 + lVar19 + 0xb0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar16 + lVar17 + lVar19 + 0xf0) = (undefined1  [16])0x0;
          lVar17 = lVar17 + 200;
        } while (uVar25 < (ulong)(pCVar23 + (ulong)uVar6 * 200 + (-1 - (long)(pCVar23 + lVar19))) /
                          200 + 1);
      }
      *(uint *)(pCVar16 + 0x38) = uVar6;
      if (0 < (int)uVar6) {
        pCVar26 = param_5 + 0x40;
        pfVar20 = (float *)(lVar12 + 0x28);
        do {
          fVar74 = *(float *)pCVar26 + *(float *)param_5;
          fVar75 = *(float *)(pCVar26 + 4) + *(float *)(param_5 + 4);
          fVar76 = *(float *)(pCVar26 + 8) + *(float *)(param_5 + 8);
          fVar52 = *(float *)param_5 + *(float *)(pCVar26 + 0x410);
          fVar37 = *(float *)(param_5 + 4) + *(float *)(pCVar26 + 0x414);
          fVar40 = *(float *)(param_5 + 8) + *(float *)(pCVar26 + 0x418);
          fVar70 = fVar74 * fVar73 + fVar75 * fVar59 + fVar76 * fVar56 + fVar32;
          fVar71 = fVar74 * fVar31 + fVar75 * fVar50 + fVar76 * fVar57 + fVar51;
          fVar72 = fVar74 * fVar68 + fVar75 * fVar65 + fVar76 * fVar58 + fVar39;
          fVar79 = fVar52 * fVar67 + fVar37 * fVar49 + fVar40 * fVar47 + fVar29;
          fVar80 = fVar52 * fVar30 + fVar37 * fVar78 + fVar40 * fVar77 + fVar36;
          fVar81 = fVar52 * fVar41 + fVar37 * fVar43 + fVar40 * fVar48 + fVar38;
          if (pfVar15 < pfVar27) {
            pfVar18 = pfVar15;
            do {
              fVar61 = fVar70 - *pfVar18;
              fVar63 = fVar71 - pfVar18[1];
              fVar64 = fVar72 - pfVar18[2];
              if ((fVar64 * fVar64 + fVar63 * fVar63 + fVar61 * fVar61 + 0.0 <=
                   *(float *)(*(long *)(this + 0x90) + 0x34)) &&
                 (fVar61 = fVar79 - pfVar18[3], fVar63 = fVar80 - pfVar18[4],
                 fVar64 = fVar81 - pfVar18[5],
                 fVar64 * fVar64 + fVar63 * fVar63 + fVar61 * fVar61 + 0.0 <=
                 *(float *)(*(long *)(this + 0x90) + 0x34))) {
                *(float *)(pCVar23 + 0x3c) = pfVar18[6];
                *(float *)(pCVar23 + 0x7c) = pfVar18[7];
                fVar61 = pfVar18[8];
                goto LAB_00112fd2;
              }
              pfVar18 = pfVar18 + 9;
            } while (pfVar18 < pfVar27);
          }
          *(undefined4 *)(pCVar23 + 0x3c) = 0;
          fVar61 = 0.0;
          *(undefined4 *)(pCVar23 + 0x7c) = 0;
LAB_00112fd2:
          *(float *)(pCVar23 + 0xbc) = fVar61;
          fVar74 = (fVar52 + fVar74) * _LC6;
          fVar75 = (fVar37 + fVar75) * _UNK_00116314;
          fVar76 = (fVar40 + fVar76) * _UNK_00116318;
          *(ulong *)(pfVar20 + 4) = CONCAT44(fVar81,fVar80);
          *pfVar20 = fVar70;
          pfVar20[1] = fVar71;
          pfVar20[2] = fVar72;
          pfVar20[3] = fVar79;
          *(float **)(pCVar23 + 0xc0) = pfVar20;
          fVar52 = *(float *)(param_5 + 0x10);
          fVar37 = *(float *)(param_5 + 0x14);
          fVar40 = *(float *)(param_5 + 0x18);
          fVar70 = fVar74 - *(float *)param_4;
          fVar71 = fVar75 - *(float *)(param_4 + 4);
          fVar72 = fVar76 - *(float *)(param_4 + 8);
          fVar74 = fVar74 - *(float *)param_3;
          fVar75 = fVar75 - *(float *)(param_3 + 4);
          fVar76 = fVar76 - *(float *)(param_3 + 8);
          *(undefined4 *)(pCVar23 + 0x30) = 0;
          *(undefined4 *)(pCVar23 + 0x3c) = 0;
          *(ulong *)(pCVar23 + 0x10) =
               CONCAT44(fVar70 * fVar37 - fVar52 * fVar71,fVar72 * fVar52 - fVar40 * fVar70);
          *(float *)pCVar23 = fVar40 * fVar75 - fVar37 * fVar76;
          *(float *)(pCVar23 + 4) = fVar52 * fVar76 - fVar40 * fVar74;
          *(float *)(pCVar23 + 8) = fVar37 * fVar74 - fVar52 * fVar75;
          *(float *)(pCVar23 + 0xc) = fVar71 * fVar40 - fVar37 * fVar72;
          if (local_88 <= 0.0) {
            *(undefined4 *)(pCVar23 + 0x70) = 0;
            *(undefined4 *)(pCVar23 + 0x7c) = 0;
          }
          else {
            *(undefined4 *)(pCVar23 + 0x70) = 0;
            *(undefined4 *)(pCVar23 + 0x7c) = 0;
            *(ulong *)(pCVar23 + 0x50) =
                 CONCAT44(fVar69 * fVar70 - fVar54 * fVar71,fVar54 * fVar72 - fVar66 * fVar70);
            *(float *)(pCVar23 + 0x40) = fVar66 * fVar75 - fVar69 * fVar76;
            *(float *)(pCVar23 + 0x44) = fVar54 * fVar76 - fVar66 * fVar74;
            *(float *)(pCVar23 + 0x48) = fVar69 * fVar74 - fVar54 * fVar75;
            *(float *)(pCVar23 + 0x4c) = fVar66 * fVar71 - fVar69 * fVar72;
            *(float *)(pCVar23 + 0x88) = fVar74 * fVar44 - fVar75 * fVar42;
            *(float *)(pCVar23 + 0x94) = fVar70 * fVar44 - fVar71 * fVar42;
            *(float *)(pCVar23 + 0x80) = fVar75 * fVar60 - fVar76 * fVar44;
            *(float *)(pCVar23 + 0x84) = fVar76 * fVar42 - fVar74 * fVar60;
            *(float *)(pCVar23 + 0x8c) = fVar71 * fVar60 - fVar72 * fVar44;
            *(float *)(pCVar23 + 0x90) = fVar72 * fVar42 - fVar70 * fVar60;
          }
          pCVar26 = pCVar26 + 0x10;
          pfVar20 = pfVar20 + 9;
          *(undefined4 *)(pCVar23 + 0xb0) = 0;
          *(undefined4 *)(pCVar23 + 0xbc) = 0;
          pCVar23 = pCVar23 + 200;
        } while (param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50 != pCVar26);
      }
      if (sDrawContactManifolds != '\0') {
        ContactConstraint::Draw(pCVar16,DebugRenderer::sInstance,_sOrange);
      }
      bVar9 = true;
    }
    else {
      if (0 < (int)uVar6) {
        pfVar15 = (float *)(lVar12 + 0x28);
        pCVar26 = param_5 + 0x40;
        do {
          pCVar22 = pCVar26 + 0x10;
          fVar54 = *(float *)pCVar26 + *(float *)param_5;
          fVar69 = *(float *)(pCVar26 + 4) + *(float *)(param_5 + 4);
          fVar66 = *(float *)(pCVar26 + 8) + *(float *)(param_5 + 8);
          fVar44 = *(float *)param_5 + *(float *)(pCVar26 + 0x410);
          fVar42 = *(float *)(param_5 + 4) + *(float *)(pCVar26 + 0x414);
          fVar52 = *(float *)(param_5 + 8) + *(float *)(pCVar26 + 0x418);
          pfVar15[6] = 0.0;
          pfVar15[7] = 0.0;
          pfVar15[8] = 0.0;
          *(ulong *)(pfVar15 + 4) =
               CONCAT44(fVar44 * fVar41 + fVar42 * fVar43 + fVar52 * fVar48 + fVar38,
                        fVar44 * fVar30 + fVar42 * fVar78 + fVar52 * fVar77 + fVar36);
          *pfVar15 = fVar54 * fVar73 + fVar69 * fVar59 + fVar66 * fVar56 + fVar32;
          pfVar15[1] = fVar54 * fVar31 + fVar69 * fVar50 + fVar66 * fVar57 + fVar51;
          pfVar15[2] = fVar54 * fVar68 + fVar69 * fVar65 + fVar66 * fVar58 + fVar39;
          pfVar15[3] = fVar44 * fVar67 + fVar42 * fVar49 + fVar52 * fVar47 + fVar29;
          pfVar15 = pfVar15 + 9;
          pCVar26 = pCVar22;
        } while (pCVar22 != param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50);
      }
      bVar9 = false;
    }
    *(undefined4 *)(lVar12 + 0x14) = *(undefined4 *)((long)param_2 + 0x18);
    *(int *)((long)param_2 + 0x18) =
         (int)lVar12 -
         (int)**(undefined8 **)((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8) + 0x10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool JPH::ContactConstraintManager::TemplatedAddContactConstraint<(JPH::EMotionType)1,
   (JPH::EMotionType)0>(JPH::ContactConstraintManager::ContactAllocator&, void*, JPH::Body&,
   JPH::Body&, JPH::ContactManifold const&) */

bool __thiscall
JPH::ContactConstraintManager::
TemplatedAddContactConstraint<(JPH::EMotionType)1,(JPH::EMotionType)0>
          (ContactConstraintManager *this,ContactAllocator *param_1,void *param_2,Body *param_3,
          Body *param_4,ContactManifold *param_5)

{
  ContactConstraintManager *pCVar1;
  undefined4 uVar2;
  SubShapeIDPair SVar3;
  Body BVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  uint uVar10;
  SubShapeIDPair *pSVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar15;
  ContactConstraint *pCVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  ContactConstraint *pCVar20;
  uint uVar21;
  ContactManifold *pCVar22;
  int *piVar23;
  ulong uVar24;
  ContactManifold *pCVar25;
  float *pfVar26;
  float *pfVar27;
  long in_FS_OFFSET;
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar37;
  float fVar38;
  float fVar41;
  float fVar42;
  undefined1 auVar39 [12];
  float fVar44;
  undefined1 auVar40 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  byte local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  long *plVar14;
  uint uVar43;
  uint uVar45;
  
  bVar28 = 0;
  uVar24 = 0xcbf29ce484222325;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = *(int *)(param_3 + 0x70);
  iStack_94 = *(int *)(param_5 + 0x24);
  iStack_90 = *(int *)(param_4 + 0x70);
  iStack_8c = *(int *)(param_5 + 0x28);
  pSVar11 = (SubShapeIDPair *)&local_98;
  do {
    SVar3 = *pSVar11;
    pSVar11 = pSVar11 + 1;
    uVar24 = (uVar24 ^ (byte)SVar3) * 0x100000001b3;
  } while (pSVar11 != (SubShapeIDPair *)&local_88);
  iVar5 = *(int *)(this + 0x88);
  uVar6 = *(uint *)(param_5 + 0x30);
  lVar12 = ManifoldCache::Create
                     ((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8),param_1,
                      (SubShapeIDPair *)&local_98,uVar24,uVar6);
  if (lVar12 == 0) {
LAB_001140aa:
    bVar9 = false;
  }
  else {
    fVar30 = *(float *)param_4;
    fVar35 = *(float *)(param_4 + 4);
    fVar38 = *(float *)(param_4 + 8);
    fVar46 = (float)(*(uint *)(param_4 + 0x10) ^ __LC17);
    fVar52 = (float)(*(uint *)(param_4 + 0x14) ^ _UNK_00116354);
    fVar53 = (float)(*(uint *)(param_4 + 0x18) ^ _UNK_00116358);
    fVar54 = (float)(*(uint *)(param_4 + 0x1c) ^ _UNK_0011635c);
    fVar58 = fVar46 + fVar46;
    fVar67 = fVar52 + fVar52;
    fVar71 = fVar53 * (fVar53 + fVar53);
    fVar47 = fVar54 * (fVar53 + fVar53);
    fVar70 = (_LC1 - fVar46 * fVar58) - fVar52 * fVar67;
    fVar69 = fVar53 * fVar58 + fVar67 * fVar54;
    fVar62 = fVar53 * fVar58 - fVar67 * fVar54;
    fVar79 = fVar53 * fVar67 - fVar58 * fVar54;
    fVar59 = fVar58 * fVar54 + fVar53 * fVar67;
    fVar67 = (_LC1 - fVar52 * fVar67) - fVar71;
    fVar54 = fVar52 * fVar58 + fVar47;
    fVar47 = fVar52 * fVar58 - fVar47;
    fVar58 = (_LC1 - fVar71) - fVar46 * fVar58;
    fVar46 = 0.0 - (fVar30 * fVar67 + fVar35 * fVar47 + fVar38 * fVar69);
    fVar52 = 0.0 - (fVar30 * fVar54 + fVar35 * fVar58 + fVar38 * fVar79);
    fVar53 = 0.0 - (fVar30 * fVar62 + fVar35 * fVar59 + fVar38 * fVar70);
    fVar30 = *(float *)(param_5 + 0x10);
    fVar35 = *(float *)(param_5 + 0x14);
    fVar38 = *(float *)(param_5 + 0x18);
    auVar32._0_4_ = fVar35 * fVar47 + fVar30 * fVar67 + fVar38 * fVar69;
    auVar32._4_4_ = fVar35 * fVar58 + fVar30 * fVar54 + fVar38 * fVar79;
    auVar32._8_4_ = fVar35 * fVar59 + fVar30 * fVar62 + fVar38 * fVar70;
    auVar32._12_4_ = fVar35 * 0.0 + fVar30 * 0.0 + fVar38 * 0.0;
    auVar49._0_4_ =
         SQRT(auVar32._8_4_ * auVar32._8_4_ +
              auVar32._4_4_ * auVar32._4_4_ + auVar32._0_4_ * auVar32._0_4_ + 0.0);
    auVar49._4_4_ = auVar49._0_4_;
    auVar49._8_4_ = auVar49._0_4_;
    auVar49._12_4_ = auVar49._0_4_;
    auVar32 = divps(auVar32,auVar49);
    *(long *)(lVar12 + 0x18) = auVar32._0_8_;
    *(int *)(lVar12 + 0x20) = auVar32._8_4_;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_80 = _LC1;
    fStack_7c = _LC1;
    fStack_78 = _LC1;
    fStack_74 = _LC1;
    local_88 = (float)(**(code **)(this + 0xa0))(param_3,param_5 + 0x24,param_4);
    local_84 = (**(code **)(this + 0xa8))(param_3,param_5 + 0x24,param_4,param_5 + 0x28);
    BVar4 = param_3[0x79];
    if (((byte)BVar4 & 1) == 0) {
      BVar4 = param_4[0x79];
    }
    local_70 = (byte)BVar4 & 1;
    uVar13 = (long)*(int *)(this + 0x88) ^ 1;
    uVar10 = *(uint *)(*(long *)(this + uVar13 * 0x40 + 0x20) +
                      (*(int *)(this + uVar13 * 0x40 + 0x28) - 1 & uVar24) * 4);
    if (uVar10 != 0xffffffff) {
      plVar14 = *(long **)(this + uVar13 * 0x40 + 0x18);
      lVar19 = *plVar14;
      do {
        piVar23 = (int *)((ulong)uVar10 + lVar19);
        auVar33._0_4_ = -(uint)(*piVar23 == local_98);
        auVar33._4_4_ = -(uint)(piVar23[1] == iStack_94);
        auVar33._8_4_ = -(uint)(piVar23[2] == iStack_90);
        auVar33._12_4_ = -(uint)(piVar23[3] == iStack_8c);
        uVar10 = movmskps((int)plVar14,auVar33);
        plVar14 = (long *)(ulong)uVar10;
        if (uVar10 == 0xf) {
          plVar14 = *(long **)(this + 0x98);
          if ((plVar14 != (long *)0x0) &&
             (*(code **)(*plVar14 + 0x20) != ContactListener::OnContactPersisted)) {
            (**(code **)(*plVar14 + 0x20))
                      (plVar14,param_3,param_4,param_5,(SubShapeIDPair *)&local_88);
          }
          uVar45 = _UNK_0011635c;
          uVar43 = _UNK_00116358;
          uVar21 = _UNK_00116354;
          uVar10 = __LC17;
          fVar30 = _LC1;
          pfVar15 = (float *)(piVar23 + 10);
          pfVar27 = pfVar15 + (ulong)*(ushort *)((long)piVar23 + 0x26) * 9;
          LOCK();
          *(ushort *)(piVar23 + 9) = *(ushort *)(piVar23 + 9) | 1;
          UNLOCK();
          goto LAB_00113798;
        }
        uVar10 = piVar23[4];
      } while (uVar10 != 0xffffffff);
    }
    plVar14 = *(long **)(this + 0x98);
    if ((plVar14 != (long *)0x0) && (*(code **)(*plVar14 + 0x18) != ContactListener::OnContactAdded)
       ) {
      (**(code **)(*plVar14 + 0x18))(plVar14,param_3,param_4,param_5);
    }
    pfVar27 = (float *)0x0;
    pfVar15 = (float *)0x0;
    fVar30 = _LC1;
    uVar10 = __LC17;
    uVar21 = _UNK_00116354;
    uVar43 = _UNK_00116358;
    uVar45 = _UNK_0011635c;
LAB_00113798:
    fVar37 = (float)(uVar10 ^ *(uint *)(param_3 + 0x10));
    fVar41 = (float)(uVar21 ^ *(uint *)(param_3 + 0x14));
    fVar42 = (float)(uVar43 ^ *(uint *)(param_3 + 0x18));
    fVar44 = (float)(uVar45 ^ *(uint *)(param_3 + 0x1c));
    fVar35 = *(float *)param_3;
    fVar38 = *(float *)(param_3 + 4);
    fVar71 = *(float *)(param_3 + 8);
    fVar48 = fVar37 + fVar37;
    fVar68 = fVar41 + fVar41;
    fVar77 = fVar42 * (fVar42 + fVar42);
    fVar29 = fVar44 * (fVar42 + fVar42);
    fVar72 = fVar42 * fVar48 + fVar68 * fVar44;
    fVar63 = fVar42 * fVar48 - fVar68 * fVar44;
    fVar78 = (fVar30 - fVar37 * fVar48) - fVar41 * fVar68;
    fVar73 = fVar42 * fVar68 - fVar48 * fVar44;
    fVar44 = fVar48 * fVar44 + fVar42 * fVar68;
    fVar42 = fVar41 * fVar48 + fVar29;
    fVar29 = fVar41 * fVar48 - fVar29;
    fVar41 = (fVar30 - fVar41 * fVar68) - fVar77;
    fVar48 = (fVar30 - fVar77) - fVar37 * fVar48;
    fVar30 = 0.0 - (fVar35 * fVar41 + fVar38 * fVar29 + fVar71 * fVar72);
    fVar37 = 0.0 - (fVar35 * fVar42 + fVar38 * fVar48 + fVar71 * fVar73);
    fVar35 = 0.0 - (fVar35 * fVar63 + fVar38 * fVar44 + fVar71 * fVar78);
    if ((local_70 == 0) &&
       (((param_3[0x78] == (Body)0x2 && (local_80 != 0.0)) ||
        ((param_4[0x78] == (Body)0x2 && (fStack_78 != 0.0)))))) {
      LOCK();
      pCVar1 = this + 0xbc;
      uVar10 = *(uint *)pCVar1;
      *(uint *)pCVar1 = *(uint *)pCVar1 + 1;
      UNLOCK();
      if (*(uint *)(this + 0xb8) <= uVar10) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
        *(undefined2 *)(lVar12 + 0x26) = 0;
        goto LAB_001140aa;
      }
      pCVar16 = (ContactConstraint *)((ulong)uVar10 * 0x360 + *(long *)(this + 0xb0));
      pCVar20 = pCVar16;
      for (lVar19 = 0x6c; lVar19 != 0; lVar19 = lVar19 + -1) {
        *(undefined8 *)pCVar20 = 0;
        pCVar20 = pCVar20 + (ulong)bVar28 * -0x10 + 8;
      }
      *(Body **)pCVar16 = param_3;
      *(Body **)(pCVar16 + 8) = param_4;
      uVar2 = *(undefined4 *)(param_5 + 0x10);
      *(ulong *)(pCVar16 + 0x10) = uVar24;
      *(undefined4 *)(pCVar16 + 0x18) = uVar2;
      *(undefined8 *)(pCVar16 + 0x1c) = *(undefined8 *)(param_5 + 0x14);
      lVar19 = *(long *)(param_3 + 0x48);
      *(float *)(pCVar16 + 0x24) = local_88;
      fVar38 = 0.0;
      if (lVar19 != 0) {
        fVar38 = local_80 * *(float *)(lVar19 + 0x58);
      }
      lVar17 = *(long *)(param_4 + 0x48);
      uVar7 = *(undefined8 *)(*(long *)(this + 0xc0) + 0x40);
      *(ulong *)(pCVar16 + 0x28) = CONCAT44(fStack_7c,fVar38);
      if (lVar17 == 0) {
        fVar38 = 0.0;
      }
      else {
        fVar38 = fStack_78 * *(float *)(lVar17 + 0x58);
      }
      *(ulong *)(pCVar16 + 0x30) = CONCAT44(fStack_74,fVar38);
      if (lVar19 == 0) {
        uVar21 = 0xffffffff;
      }
      else {
        uVar21 = *(uint *)(lVar19 + 0x70);
      }
      JPH::IslandBuilder::LinkContact((uint)uVar7,uVar10,uVar21);
      fVar38 = *(float *)(pCVar16 + 0x18);
      fVar71 = *(float *)(pCVar16 + 0x1c);
      fVar68 = *(float *)(pCVar16 + 0x20);
      if ((float)((uint)fVar71 & _LC10) < (float)(_LC10 & (uint)fVar38)) {
        auVar40._12_4_ = (uint)fVar38 ^ _LC20;
        auVar40._8_4_ = (uint)fVar38 ^ _LC20;
        auVar40._4_4_ = 0;
        auVar40._0_4_ = fVar68;
        fVar77 = SQRT(fVar68 * fVar68 + fVar38 * fVar38);
        auVar51._4_4_ = fVar77;
        auVar51._0_4_ = fVar77;
        auVar51._8_4_ = fVar77;
        auVar51._12_4_ = fVar77;
        auVar32 = divps(auVar40,auVar51);
        auVar39 = auVar32._0_12_;
      }
      else {
        auVar50._0_4_ = SQRT(fVar71 * fVar71 + fVar68 * fVar68);
        auVar8._4_4_ = (uint)fVar71 ^ _LC20;
        auVar8._0_4_ = fVar68;
        auVar8._8_4_ = (uint)fVar71 ^ _LC20;
        auVar8._12_4_ = 0;
        auVar50._4_4_ = auVar50._0_4_;
        auVar50._8_4_ = auVar50._0_4_;
        auVar50._12_4_ = auVar50._0_4_;
        auVar32 = divps(auVar8 << 0x20,auVar50);
        auVar39 = auVar32._0_12_;
      }
      fVar77 = auVar39._0_4_;
      fVar56 = auVar39._4_4_;
      fVar57 = auVar39._8_4_;
      pCVar20 = pCVar16 + 0x40;
      lVar19 = (ulong)*(uint *)(pCVar16 + 0x38) * 200;
      fVar55 = fVar38 * fVar56 - fVar71 * fVar77;
      fVar71 = fVar71 * fVar57 - fVar68 * fVar56;
      fVar38 = fVar68 * fVar77 - fVar38 * fVar57;
      if (pCVar20 + lVar19 < pCVar20 + (ulong)uVar6 * 200) {
        lVar17 = 0;
        uVar24 = 0;
        do {
          uVar24 = uVar24 + 1;
          *(undefined1 (*) [16])(pCVar16 + lVar17 + lVar19 + 0x70) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar16 + lVar17 + lVar19 + 0xb0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar16 + lVar17 + lVar19 + 0xf0) = (undefined1  [16])0x0;
          lVar17 = lVar17 + 200;
        } while (uVar24 < (ulong)(pCVar20 + (ulong)uVar6 * 200 + (-1 - (long)(pCVar20 + lVar19))) /
                          200 + 1);
      }
      *(uint *)(pCVar16 + 0x38) = uVar6;
      if (0 < (int)uVar6) {
        pCVar25 = param_5 + 0x40;
        pfVar26 = (float *)(lVar12 + 0x28);
        do {
          fVar80 = *(float *)pCVar25 + *(float *)param_5;
          fVar81 = *(float *)(pCVar25 + 4) + *(float *)(param_5 + 4);
          fVar82 = *(float *)(pCVar25 + 8) + *(float *)(param_5 + 8);
          fVar64 = *(float *)param_5 + *(float *)(pCVar25 + 0x410);
          fVar65 = *(float *)(param_5 + 4) + *(float *)(pCVar25 + 0x414);
          fVar66 = *(float *)(param_5 + 8) + *(float *)(pCVar25 + 0x418);
          fVar68 = fVar80 * fVar41 + fVar81 * fVar29 + fVar82 * fVar72 + fVar30;
          fVar60 = fVar80 * fVar42 + fVar81 * fVar48 + fVar82 * fVar73 + fVar37;
          fVar61 = fVar80 * fVar63 + fVar81 * fVar44 + fVar82 * fVar78 + fVar35;
          fVar74 = fVar64 * fVar67 + fVar65 * fVar47 + fVar66 * fVar69 + fVar46;
          fVar75 = fVar64 * fVar54 + fVar65 * fVar58 + fVar66 * fVar79 + fVar52;
          fVar76 = fVar64 * fVar62 + fVar65 * fVar59 + fVar66 * fVar70 + fVar53;
          if (pfVar15 < pfVar27) {
            pfVar18 = pfVar15;
            do {
              fVar31 = fVar68 - *pfVar18;
              fVar34 = fVar60 - pfVar18[1];
              fVar36 = fVar61 - pfVar18[2];
              if ((fVar36 * fVar36 + fVar34 * fVar34 + fVar31 * fVar31 + 0.0 <=
                   *(float *)(*(long *)(this + 0x90) + 0x34)) &&
                 (fVar31 = fVar74 - pfVar18[3], fVar34 = fVar75 - pfVar18[4],
                 fVar36 = fVar76 - pfVar18[5],
                 fVar36 * fVar36 + fVar34 * fVar34 + fVar31 * fVar31 + 0.0 <=
                 *(float *)(*(long *)(this + 0x90) + 0x34))) {
                *(float *)(pCVar20 + 0x3c) = pfVar18[6];
                *(float *)(pCVar20 + 0x7c) = pfVar18[7];
                fVar31 = pfVar18[8];
                goto LAB_00113e5e;
              }
              pfVar18 = pfVar18 + 9;
            } while (pfVar18 < pfVar27);
          }
          *(undefined4 *)(pCVar20 + 0x3c) = 0;
          fVar31 = 0.0;
          *(undefined4 *)(pCVar20 + 0x7c) = 0;
LAB_00113e5e:
          *(float *)(pCVar20 + 0xbc) = fVar31;
          fVar64 = (fVar64 + fVar80) * _LC6;
          fVar65 = (fVar65 + fVar81) * _UNK_00116314;
          fVar66 = (fVar66 + fVar82) * _UNK_00116318;
          *(ulong *)(pfVar26 + 4) = CONCAT44(fVar76,fVar75);
          *pfVar26 = fVar68;
          pfVar26[1] = fVar60;
          pfVar26[2] = fVar61;
          pfVar26[3] = fVar74;
          fVar64 = fVar64 - *(float *)param_3;
          fVar65 = fVar65 - *(float *)(param_3 + 4);
          fVar66 = fVar66 - *(float *)(param_3 + 8);
          *(float **)(pCVar20 + 0xc0) = pfVar26;
          fVar68 = *(float *)(param_5 + 0x10);
          fVar60 = *(float *)(param_5 + 0x14);
          fVar61 = *(float *)(param_5 + 0x18);
          *(undefined4 *)(pCVar20 + 0x30) = 0;
          *(undefined4 *)(pCVar20 + 0x3c) = 0;
          *(float *)(pCVar20 + 8) = fVar60 * fVar64 - fVar68 * fVar65;
          *(ulong *)pCVar20 =
               CONCAT44(fVar68 * fVar66 - fVar61 * fVar64,fVar61 * fVar65 - fVar60 * fVar66);
          if (local_88 <= 0.0) {
            *(undefined4 *)(pCVar20 + 0x70) = 0;
            *(undefined4 *)(pCVar20 + 0x7c) = 0;
          }
          else {
            *(undefined4 *)(pCVar20 + 0x70) = 0;
            *(undefined4 *)(pCVar20 + 0x7c) = 0;
            *(float *)(pCVar20 + 0x48) = fVar56 * fVar64 - fVar77 * fVar65;
            *(ulong *)(pCVar20 + 0x40) =
                 CONCAT44(fVar77 * fVar66 - fVar57 * fVar64,fVar57 * fVar65 - fVar56 * fVar66);
            *(float *)(pCVar20 + 0x88) = fVar64 * fVar38 - fVar65 * fVar71;
            *(float *)(pCVar20 + 0x80) = fVar65 * fVar55 - fVar66 * fVar38;
            *(float *)(pCVar20 + 0x84) = fVar66 * fVar71 - fVar64 * fVar55;
          }
          pCVar25 = pCVar25 + 0x10;
          pfVar26 = pfVar26 + 9;
          *(undefined4 *)(pCVar20 + 0xb0) = 0;
          *(undefined4 *)(pCVar20 + 0xbc) = 0;
          pCVar20 = pCVar20 + 200;
        } while (param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50 != pCVar25);
      }
      if (sDrawContactManifolds != '\0') {
        ContactConstraint::Draw(pCVar16,DebugRenderer::sInstance,_sOrange);
      }
      bVar9 = true;
    }
    else {
      if (0 < (int)uVar6) {
        pfVar15 = (float *)(lVar12 + 0x28);
        pCVar25 = param_5 + 0x40;
        do {
          pCVar22 = pCVar25 + 0x10;
          fVar77 = *(float *)pCVar25 + *(float *)param_5;
          fVar56 = *(float *)(pCVar25 + 4) + *(float *)(param_5 + 4);
          fVar57 = *(float *)(pCVar25 + 8) + *(float *)(param_5 + 8);
          fVar38 = *(float *)param_5 + *(float *)(pCVar25 + 0x410);
          fVar71 = *(float *)(param_5 + 4) + *(float *)(pCVar25 + 0x414);
          fVar68 = *(float *)(param_5 + 8) + *(float *)(pCVar25 + 0x418);
          pfVar15[6] = 0.0;
          pfVar15[7] = 0.0;
          pfVar15[8] = 0.0;
          *(ulong *)(pfVar15 + 4) =
               CONCAT44(fVar38 * fVar62 + fVar71 * fVar59 + fVar68 * fVar70 + fVar53,
                        fVar38 * fVar54 + fVar71 * fVar58 + fVar68 * fVar79 + fVar52);
          *pfVar15 = fVar77 * fVar41 + fVar56 * fVar29 + fVar57 * fVar72 + fVar30;
          pfVar15[1] = fVar77 * fVar42 + fVar56 * fVar48 + fVar57 * fVar73 + fVar37;
          pfVar15[2] = fVar77 * fVar63 + fVar56 * fVar44 + fVar57 * fVar78 + fVar35;
          pfVar15[3] = fVar38 * fVar67 + fVar71 * fVar47 + fVar68 * fVar69 + fVar46;
          pfVar15 = pfVar15 + 9;
          pCVar25 = pCVar22;
        } while (pCVar22 != param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50);
      }
      bVar9 = false;
    }
    *(undefined4 *)(lVar12 + 0x14) = *(undefined4 *)((long)param_2 + 0x18);
    *(int *)((long)param_2 + 0x18) =
         (int)lVar12 -
         (int)**(undefined8 **)((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8) + 0x10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool JPH::ContactConstraintManager::TemplatedAddContactConstraint<(JPH::EMotionType)0,
   (JPH::EMotionType)2>(JPH::ContactConstraintManager::ContactAllocator&, void*, JPH::Body&,
   JPH::Body&, JPH::ContactManifold const&) */

bool __thiscall
JPH::ContactConstraintManager::
TemplatedAddContactConstraint<(JPH::EMotionType)0,(JPH::EMotionType)2>
          (ContactConstraintManager *this,ContactAllocator *param_1,void *param_2,Body *param_3,
          Body *param_4,ContactManifold *param_5)

{
  ContactConstraintManager *pCVar1;
  undefined4 uVar2;
  SubShapeIDPair SVar3;
  Body BVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  SubShapeIDPair *pSVar17;
  long lVar18;
  ulong uVar19;
  float *pfVar21;
  long lVar22;
  ContactConstraint *pCVar23;
  long lVar24;
  ContactManifold *pCVar25;
  uint uVar26;
  ContactManifold *pCVar27;
  float *pfVar28;
  int *piVar29;
  ulong uVar30;
  float *pfVar31;
  ContactConstraint *pCVar32;
  float *pfVar33;
  long in_FS_OFFSET;
  byte bVar34;
  float fVar35;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar47;
  uint uVar50;
  uint uVar53;
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar46 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar61 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar79;
  float fVar80;
  undefined1 auVar78 [16];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float local_288;
  float fStack_284;
  float fStack_280;
  undefined1 local_238 [12];
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  byte local_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  undefined1 local_d8 [8];
  float fStack_d0;
  Mat44 local_c8 [4];
  float afStack_c4 [33];
  long local_40;
  long *plVar20;
  
  bVar34 = 0;
  uVar30 = 0xcbf29ce484222325;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = *(int *)(param_3 + 0x70);
  iStack_114 = *(int *)(param_5 + 0x24);
  iStack_110 = *(int *)(param_4 + 0x70);
  iStack_10c = *(int *)(param_5 + 0x28);
  pSVar17 = (SubShapeIDPair *)&local_118;
  do {
    SVar3 = *pSVar17;
    pSVar17 = pSVar17 + 1;
    uVar30 = (uVar30 ^ (byte)SVar3) * 0x100000001b3;
  } while (pSVar17 != (SubShapeIDPair *)&local_108);
  iVar5 = *(int *)(this + 0x88);
  uVar6 = *(uint *)(param_5 + 0x30);
  lVar18 = ManifoldCache::Create
                     ((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8),param_1,
                      (SubShapeIDPair *)&local_118,uVar30,uVar6);
  if (lVar18 == 0) {
LAB_0011545d:
    bVar15 = false;
  }
  else {
    fVar40 = *(float *)param_4;
    fVar43 = *(float *)(param_4 + 4);
    fVar47 = *(float *)(param_4 + 8);
    fVar54 = (float)(*(uint *)(param_4 + 0x10) ^ __LC17);
    fVar62 = (float)(*(uint *)(param_4 + 0x14) ^ _UNK_00116354);
    fVar64 = (float)(*(uint *)(param_4 + 0x18) ^ _UNK_00116358);
    fVar66 = (float)(*(uint *)(param_4 + 0x1c) ^ _UNK_0011635c);
    fVar81 = fVar54 + fVar54;
    fVar70 = fVar62 + fVar62;
    fVar94 = fVar64 * (fVar64 + fVar64);
    fVar76 = (fVar64 + fVar64) * fVar66;
    fVar96 = fVar64 * fVar81 + fVar70 * fVar66;
    fVar55 = (_LC1 - fVar54 * fVar81) - fVar62 * fVar70;
    fVar42 = fVar64 * fVar70 - fVar81 * fVar66;
    fVar82 = fVar81 * fVar66 + fVar64 * fVar70;
    fVar74 = fVar62 * fVar81 + fVar76;
    fVar76 = fVar62 * fVar81 - fVar76;
    fVar83 = fVar64 * fVar81 - fVar70 * fVar66;
    fVar66 = (_LC1 - fVar94) - fVar54 * fVar81;
    fVar94 = (_LC1 - fVar62 * fVar70) - fVar94;
    fVar54 = 0.0 - (fVar40 * fVar94 + fVar43 * fVar76 + fVar47 * fVar96);
    fVar62 = 0.0 - (fVar40 * fVar74 + fVar43 * fVar66 + fVar47 * fVar42);
    fVar64 = 0.0 - (fVar40 * fVar83 + fVar43 * fVar82 + fVar47 * fVar55);
    fVar40 = *(float *)(param_5 + 0x10);
    fVar43 = *(float *)(param_5 + 0x14);
    fVar47 = *(float *)(param_5 + 0x18);
    auVar36._0_4_ = fVar43 * fVar76 + fVar40 * fVar94 + fVar47 * fVar96;
    auVar36._4_4_ = fVar43 * fVar66 + fVar40 * fVar74 + fVar47 * fVar42;
    auVar36._8_4_ = fVar43 * fVar82 + fVar40 * fVar83 + fVar47 * fVar55;
    auVar36._12_4_ = fVar43 * 0.0 + fVar40 * 0.0 + fVar47 * 0.0;
    auVar61._0_4_ =
         SQRT(auVar36._8_4_ * auVar36._8_4_ +
              auVar36._4_4_ * auVar36._4_4_ + auVar36._0_4_ * auVar36._0_4_ + 0.0);
    auVar61._4_4_ = auVar61._0_4_;
    auVar61._8_4_ = auVar61._0_4_;
    auVar61._12_4_ = auVar61._0_4_;
    auVar36 = divps(auVar36,auVar61);
    *(long *)(lVar18 + 0x18) = auVar36._0_8_;
    *(int *)(lVar18 + 0x20) = auVar36._8_4_;
    _local_e8 = (undefined1  [16])0x0;
    _local_d8 = (undefined1  [16])0x0;
    local_100 = _LC1;
    fStack_fc = _LC1;
    fStack_f8 = _LC1;
    fStack_f4 = _LC1;
    local_108 = (float)(**(code **)(this + 0xa0))(param_3,param_5 + 0x24,param_4);
    local_104 = (float)(**(code **)(this + 0xa8))(param_3,param_5 + 0x24,param_4,param_5 + 0x28);
    BVar4 = param_3[0x79];
    if (((byte)BVar4 & 1) == 0) {
      BVar4 = param_4[0x79];
    }
    local_f0 = (byte)BVar4 & 1;
    uVar19 = (long)*(int *)(this + 0x88) ^ 1;
    uVar16 = *(uint *)(*(long *)(this + uVar19 * 0x40 + 0x20) +
                      (*(int *)(this + uVar19 * 0x40 + 0x28) - 1 & uVar30) * 4);
    if (uVar16 != 0xffffffff) {
      plVar20 = *(long **)(this + uVar19 * 0x40 + 0x18);
      lVar24 = *plVar20;
      do {
        piVar29 = (int *)((ulong)uVar16 + lVar24);
        auVar37._0_4_ = -(uint)(*piVar29 == local_118);
        auVar37._4_4_ = -(uint)(piVar29[1] == iStack_114);
        auVar37._8_4_ = -(uint)(piVar29[2] == iStack_110);
        auVar37._12_4_ = -(uint)(piVar29[3] == iStack_10c);
        uVar16 = movmskps((int)plVar20,auVar37);
        plVar20 = (long *)(ulong)uVar16;
        if (uVar16 == 0xf) {
          plVar20 = *(long **)(this + 0x98);
          if ((plVar20 != (long *)0x0) &&
             (*(code **)(*plVar20 + 0x20) != ContactListener::OnContactPersisted)) {
            (**(code **)(*plVar20 + 0x20))
                      (plVar20,param_3,param_4,param_5,(SubShapeIDPair *)&local_108);
          }
          uVar53 = _UNK_0011635c;
          uVar50 = _UNK_00116358;
          uVar26 = _UNK_00116354;
          uVar16 = __LC17;
          pfVar21 = (float *)(piVar29 + 10);
          pfVar33 = pfVar21 + (ulong)*(ushort *)((long)piVar29 + 0x26) * 9;
          LOCK();
          *(ushort *)(piVar29 + 9) = *(ushort *)(piVar29 + 9) | 1;
          UNLOCK();
          goto LAB_001145c8;
        }
        uVar16 = piVar29[4];
      } while (uVar16 != 0xffffffff);
    }
    plVar20 = *(long **)(this + 0x98);
    if ((plVar20 != (long *)0x0) && (*(code **)(*plVar20 + 0x18) != ContactListener::OnContactAdded)
       ) {
      (**(code **)(*plVar20 + 0x18))(plVar20,param_3,param_4,param_5);
    }
    pfVar33 = (float *)0x0;
    pfVar21 = (float *)0x0;
    uVar16 = __LC17;
    uVar26 = _UNK_00116354;
    uVar50 = _UNK_00116358;
    uVar53 = _UNK_0011635c;
LAB_001145c8:
    fVar40 = *(float *)param_3;
    fVar43 = *(float *)(param_3 + 4);
    fVar47 = *(float *)(param_3 + 8);
    fVar70 = (float)(*(uint *)(param_3 + 0x10) ^ uVar16);
    fVar38 = (float)(*(uint *)(param_3 + 0x14) ^ uVar26);
    fVar39 = (float)(*(uint *)(param_3 + 0x18) ^ uVar50);
    fVar41 = (float)(*(uint *)(param_3 + 0x1c) ^ uVar53);
    fVar56 = fVar70 + fVar70;
    fVar91 = fVar38 + fVar38;
    fVar81 = fVar41 * (fVar39 + fVar39);
    fVar95 = fVar39 * (fVar39 + fVar39);
    fVar97 = fVar39 * fVar91 - fVar56 * fVar41;
    fVar57 = fVar56 * fVar41 + fVar39 * fVar91;
    fVar71 = fVar39 * fVar56 + fVar91 * fVar41;
    fVar75 = (_LC1 - fVar70 * fVar56) - fVar38 * fVar91;
    fVar84 = fVar39 * fVar56 - fVar91 * fVar41;
    fVar41 = (_LC1 - fVar38 * fVar91) - fVar95;
    fVar39 = fVar38 * fVar56 + fVar81;
    fVar81 = fVar38 * fVar56 - fVar81;
    fVar56 = (_LC1 - fVar95) - fVar70 * fVar56;
    fVar70 = 0.0 - (fVar40 * fVar41 + fVar43 * fVar81 + fVar47 * fVar71);
    fVar38 = 0.0 - (fVar40 * fVar39 + fVar43 * fVar56 + fVar47 * fVar97);
    fVar40 = 0.0 - (fVar40 * fVar84 + fVar43 * fVar57 + fVar47 * fVar75);
    if ((local_f0 == 0) &&
       (((param_3[0x78] == (Body)0x2 && (local_100 != 0.0)) ||
        ((param_4[0x78] == (Body)0x2 && (fStack_f8 != 0.0)))))) {
      LOCK();
      pCVar1 = this + 0xbc;
      uVar16 = *(uint *)pCVar1;
      *(uint *)pCVar1 = *(uint *)pCVar1 + 1;
      UNLOCK();
      if (*(uint *)(this + 0xb8) <= uVar16) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
        *(undefined2 *)(lVar18 + 0x26) = 0;
        goto LAB_0011545d;
      }
      pCVar32 = (ContactConstraint *)(*(long *)(this + 0xb0) + (ulong)uVar16 * 0x360);
      pCVar23 = pCVar32;
      for (lVar24 = 0x6c; lVar24 != 0; lVar24 = lVar24 + -1) {
        *(undefined8 *)pCVar23 = 0;
        pCVar23 = pCVar23 + (ulong)bVar34 * -0x10 + 8;
      }
      *(Body **)pCVar32 = param_3;
      *(Body **)(pCVar32 + 8) = param_4;
      uVar2 = *(undefined4 *)(param_5 + 0x10);
      *(ulong *)(pCVar32 + 0x10) = uVar30;
      *(undefined4 *)(pCVar32 + 0x18) = uVar2;
      *(undefined8 *)(pCVar32 + 0x1c) = *(undefined8 *)(param_5 + 0x14);
      lVar24 = *(long *)(param_3 + 0x48);
      *(float *)(pCVar32 + 0x24) = local_108;
      fVar43 = 0.0;
      if (lVar24 != 0) {
        fVar43 = local_100 * *(float *)(lVar24 + 0x58);
      }
      lVar22 = *(long *)(this + 0xc0);
      lVar7 = *(long *)(param_4 + 0x48);
      *(ulong *)(pCVar32 + 0x28) = CONCAT44(fStack_fc,fVar43);
      uVar8 = *(undefined8 *)(lVar22 + 0x40);
      if (lVar7 == 0) {
        fVar43 = 0.0;
      }
      else {
        fVar43 = fStack_f8 * *(float *)(lVar7 + 0x58);
      }
      *(ulong *)(pCVar32 + 0x30) = CONCAT44(fStack_f4,fVar43);
      if (lVar24 == 0) {
        uVar26 = 0xffffffff;
      }
      else {
        uVar26 = *(uint *)(lVar24 + 0x70);
      }
      JPH::IslandBuilder::LinkContact((uint)uVar8,uVar16,uVar26);
      puVar9 = *(undefined8 **)(param_4 + 0x48);
      fVar43 = *(float *)(param_5 + 0x10);
      fVar47 = *(float *)(*(long **)(this + 0xc0) + 4);
      lVar24 = **(long **)(this + 0xc0);
      fVar92 = *(float *)(lVar24 + 0x400);
      fVar93 = *(float *)(lVar24 + 0x404);
      fVar11 = *(float *)(lVar24 + 0x408);
      fVar91 = *(float *)(param_5 + 0x14);
      fVar95 = *(float *)(param_5 + 0x18);
      fVar35 = fStack_f8 * *(float *)(puVar9 + 0xb);
      MotionProperties::GetInverseInertiaForRotation(local_c8);
      uVar16 = _LC20;
      lVar24 = 0;
      do {
        *(float *)((long)afStack_c4 + lVar24 + 0x3c) = *(float *)(local_c8 + lVar24) * fStack_f4;
        *(float *)((long)afStack_c4 + lVar24 + 0x40) =
             *(float *)((long)afStack_c4 + lVar24) * fStack_f4;
        *(float *)((long)afStack_c4 + lVar24 + 0x44) =
             *(float *)((long)afStack_c4 + lVar24 + 4) * fStack_f4;
        *(float *)((long)afStack_c4 + lVar24 + 0x48) =
             *(float *)((long)afStack_c4 + lVar24 + 8) * fStack_f4;
        lVar24 = lVar24 + 0x10;
      } while (lVar24 != 0x40);
      fVar51 = *(float *)(pCVar32 + 0x18);
      fVar48 = *(float *)(pCVar32 + 0x1c);
      fVar44 = *(float *)(pCVar32 + 0x20);
      if ((float)((uint)fVar48 & _LC10) < (float)(_LC10 & (uint)fVar51)) {
        auVar78._4_4_ = 0;
        auVar78._0_4_ = fVar44;
        auVar78._12_4_ = (uint)fVar51 ^ _LC20;
        auVar78._8_4_ = (uint)fVar51 ^ _LC20;
        auVar46._0_4_ = SQRT(fVar51 * fVar51 + fVar44 * fVar44);
        auVar46._4_4_ = auVar46._0_4_;
        auVar46._8_4_ = auVar46._0_4_;
        auVar46._12_4_ = auVar46._0_4_;
        auVar36 = divps(auVar78,auVar46);
        local_238 = auVar36._0_12_;
      }
      else {
        auVar10._8_4_ = (uint)fVar48 ^ _LC20;
        auVar10._4_4_ = (uint)fVar48 ^ _LC20;
        fVar58 = SQRT(fVar48 * fVar48 + fVar44 * fVar44);
        auVar10._0_4_ = fVar44;
        auVar10._12_4_ = 0;
        auVar45._4_4_ = fVar58;
        auVar45._0_4_ = fVar58;
        auVar45._8_4_ = fVar58;
        auVar45._12_4_ = fVar58;
        auVar36 = divps(auVar10 << 0x20,auVar45);
        local_238 = auVar36._0_12_;
      }
      fVar85 = local_238._0_4_;
      fVar87 = local_238._4_4_;
      fVar89 = local_238._8_4_;
      lVar24 = (ulong)*(uint *)(pCVar32 + 0x38) * 200;
      fVar58 = fVar87 * fVar51 - fVar48 * fVar85;
      fVar48 = fVar89 * fVar48 - fVar44 * fVar87;
      fVar51 = fVar85 * fVar44 - fVar51 * fVar89;
      if (pCVar32 + lVar24 + 0x40 < pCVar32 + (ulong)uVar6 * 200 + 0x40) {
        uVar30 = 0;
        lVar22 = 0;
        do {
          uVar30 = uVar30 + 1;
          *(undefined1 (*) [16])(pCVar32 + lVar22 + lVar24 + 0x70) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar32 + lVar22 + lVar24 + 0xb0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar32 + lVar22 + lVar24 + 0xf0) = (undefined1  [16])0x0;
          lVar22 = lVar22 + 200;
        } while (uVar30 < (ulong)(pCVar32 + (ulong)uVar6 * 200 + 0x40 +
                                 (-1 - (long)(pCVar32 + lVar24 + 0x40))) / 200 + 1);
      }
      *(uint *)(pCVar32 + 0x38) = uVar6;
      if (0 < (int)uVar6) {
        pCVar25 = param_5 + 0x40;
        pfVar28 = (float *)(lVar18 + 0x28);
        lVar24 = *(long *)(this + 0x90);
        pCVar23 = pCVar32 + 0x4c;
        do {
          fVar44 = *(float *)pCVar25 + *(float *)param_5;
          fVar49 = *(float *)(pCVar25 + 4) + *(float *)(param_5 + 4);
          fVar52 = *(float *)(pCVar25 + 8) + *(float *)(param_5 + 8);
          fVar67 = *(float *)param_5 + *(float *)(pCVar25 + 0x410);
          fVar68 = *(float *)(param_5 + 4) + *(float *)(pCVar25 + 0x414);
          fVar69 = *(float *)(param_5 + 8) + *(float *)(pCVar25 + 0x418);
          fVar77 = fVar44 * fVar41 + fVar49 * fVar81 + fVar52 * fVar71 + fVar70;
          fVar79 = fVar44 * fVar39 + fVar49 * fVar56 + fVar52 * fVar97 + fVar38;
          fVar80 = fVar44 * fVar84 + fVar49 * fVar57 + fVar52 * fVar75 + fVar40;
          fVar86 = fVar67 * fVar94 + fVar68 * fVar76 + fVar69 * fVar96 + fVar54;
          fVar88 = fVar67 * fVar74 + fVar68 * fVar66 + fVar69 * fVar42 + fVar62;
          fVar90 = fVar67 * fVar83 + fVar68 * fVar82 + fVar69 * fVar55 + fVar64;
          if (pfVar21 < pfVar33) {
            fVar60 = *(float *)(lVar24 + 0x34);
            pfVar31 = pfVar21;
            do {
              fVar59 = fVar77 - *pfVar31;
              fVar63 = fVar79 - pfVar31[1];
              fVar65 = fVar80 - pfVar31[2];
              if ((fVar65 * fVar65 + fVar63 * fVar63 + fVar59 * fVar59 + 0.0 <= fVar60) &&
                 (fVar59 = fVar86 - pfVar31[3], fVar63 = fVar88 - pfVar31[4],
                 fVar65 = fVar90 - pfVar31[5],
                 fVar65 * fVar65 + fVar63 * fVar63 + fVar59 * fVar59 + 0.0 <= fVar60)) {
                *(float *)(pCVar23 + 0x30) = pfVar31[6];
                *(float *)(pCVar23 + 0x70) = pfVar31[7];
                fVar60 = pfVar31[8];
                goto LAB_00114e95;
              }
              pfVar31 = pfVar31 + 9;
            } while (pfVar31 < pfVar33);
          }
          *(undefined4 *)(pCVar23 + 0x30) = 0;
          fVar60 = 0.0;
          *(undefined4 *)(pCVar23 + 0x70) = 0;
LAB_00114e95:
          *(float *)(pCVar23 + 0xb0) = fVar60;
          *(ulong *)(pfVar28 + 4) = CONCAT44(fVar90,fVar88);
          *pfVar28 = fVar77;
          pfVar28[1] = fVar79;
          pfVar28[2] = fVar80;
          pfVar28[3] = fVar86;
          uVar8 = *(undefined8 *)(param_5 + 0x10);
          uVar12 = *(undefined8 *)(param_5 + 0x18);
          uVar13 = *puVar9;
          uVar14 = puVar9[1];
          uVar26 = *(uint *)(lVar24 + 0x40);
          fVar77 = *(float *)param_3;
          fVar79 = *(float *)(param_3 + 4);
          fVar80 = *(float *)(param_3 + 8);
          *(float **)(pCVar23 + 0xb4) = pfVar28;
          fVar65 = (fVar67 + fVar44) * _LC6;
          fVar72 = (fVar68 + fVar49) * _UNK_00116314;
          fVar73 = (fVar69 + fVar52) * _UNK_00116318;
          fVar86 = (float)uVar8;
          fVar88 = (float)((ulong)uVar8 >> 0x20);
          fVar90 = (float)uVar12;
          fVar60 = fVar65 - *(float *)param_4;
          fVar59 = fVar72 - *(float *)(param_4 + 4);
          fVar63 = fVar73 - *(float *)(param_4 + 8);
          fVar44 = (float)((uint)((fVar52 - fVar69) * fVar90 +
                                 (fVar49 - fVar68) * fVar88 + (fVar44 - fVar67) * fVar86 + 0.0) ^
                          uVar16) / fVar47;
          if (fVar44 <= 0.0) {
            fVar44 = 0.0;
          }
          if (0.0 < local_104) {
            local_288 = (float)uVar13;
            fStack_284 = (float)((ulong)uVar13 >> 0x20);
            fStack_280 = (float)uVar14;
            fVar49 = ((fVar59 * *(float *)(puVar9 + 2) - *(float *)((long)puVar9 + 0x14) * fVar60) +
                     fStack_280) * fVar90 +
                     ((fVar60 * *(float *)(puVar9 + 3) - *(float *)(puVar9 + 2) * fVar63) +
                     fStack_284) * fVar88 +
                     fVar86 * ((fVar63 * *(float *)((long)puVar9 + 0x14) -
                               *(float *)(puVar9 + 3) * fVar59) + local_288) + 0.0;
            if ((fVar49 < (float)(uVar26 ^ uVar16)) && (fVar49 < (float)(uVar16 ^ (uint)fVar44))) {
              fVar44 = (fVar49 - *(float *)((long)puVar9 + 0x6c) *
                                 (fVar47 * fVar11 * fVar95 +
                                 fVar47 * fVar93 * fVar91 + fVar43 * fVar47 * fVar92 + 0.0)) *
                       local_104;
            }
          }
          fVar52 = fVar88 * fVar60 - fVar86 * fVar59;
          fVar67 = fVar90 * fVar59 - fVar88 * fVar63;
          fVar68 = fVar86 * fVar63 - fVar90 * fVar60;
          *(float *)(pCVar23 + 8) = fVar52;
          *(ulong *)pCVar23 = CONCAT44(fVar68,fVar67);
          fVar69 = fVar67 * afStack_c4[0xf] + fVar68 * afStack_c4[0x13] + fVar52 * afStack_c4[0x17];
          fVar86 = fVar67 * afStack_c4[0x10] + fVar68 * afStack_c4[0x14] + fVar52 * afStack_c4[0x18]
          ;
          fVar88 = fVar67 * afStack_c4[0x11] + fVar68 * afStack_c4[0x15] + fVar52 * afStack_c4[0x19]
          ;
          *(ulong *)(pCVar23 + 0x18) = CONCAT44(fVar86,fVar69);
          *(float *)(pCVar23 + 0x20) = fVar88;
          fVar49 = _LC1;
          fVar52 = fVar52 * fVar88 + fVar68 * fVar86 + fVar69 * fVar67 + 0.0 + fVar35 + 0.0;
          if (fVar52 == 0.0) {
            *(undefined4 *)(pCVar23 + 0x30) = 0;
            fVar49 = 0.0;
          }
          else {
            *(undefined4 *)(pCVar23 + 0x2c) = 0;
            *(float *)(pCVar23 + 0x28) = fVar44;
            fVar49 = fVar49 / fVar52;
          }
          *(float *)(pCVar23 + 0x24) = fVar49;
          if (local_108 <= 0.0) {
            *(undefined4 *)(pCVar23 + 100) = 0;
            *(undefined4 *)(pCVar23 + 0x70) = 0;
            *(undefined4 *)(pCVar23 + 0xa4) = 0;
            *(undefined4 *)(pCVar23 + 0xb0) = 0;
          }
          else {
            fVar65 = fVar65 - fVar77;
            fVar72 = fVar72 - fVar79;
            fVar73 = fVar73 - fVar80;
            fVar68 = (fVar73 * (float)local_d8._4_4_ - fStack_d0 * fVar72) + (float)local_e8._0_4_;
            fVar69 = (fVar65 * fStack_d0 - (float)local_d8._0_4_ * fVar73) + (float)local_e8._4_4_;
            fVar77 = (fVar72 * (float)local_d8._0_4_ - (float)local_d8._4_4_ * fVar65) + fStack_e0;
            fVar49 = fVar87 * fVar60 - fVar85 * fVar59;
            fVar52 = fVar89 * fVar59 - fVar87 * fVar63;
            fVar67 = fVar85 * fVar63 - fVar89 * fVar60;
            *(float *)(pCVar23 + 0x48) = fVar49;
            *(ulong *)(pCVar23 + 0x40) = CONCAT44(fVar67,fVar52);
            fVar79 = fVar52 * afStack_c4[0xf] + fVar67 * afStack_c4[0x13] +
                     fVar49 * afStack_c4[0x17];
            fVar80 = fVar52 * afStack_c4[0x10] + fVar67 * afStack_c4[0x14] +
                     fVar49 * afStack_c4[0x18];
            fVar86 = fVar52 * afStack_c4[0x11] + fVar67 * afStack_c4[0x15] +
                     fVar49 * afStack_c4[0x19];
            *(ulong *)(pCVar23 + 0x58) = CONCAT44(fVar80,fVar79);
            *(float *)(pCVar23 + 0x60) = fVar86;
            fVar44 = _LC1;
            fVar49 = fVar49 * fVar86 + fVar67 * fVar80 + fVar52 * fVar79 + 0.0 + fVar35 + 0.0;
            if (fVar49 == 0.0) {
              *(undefined4 *)(pCVar23 + 0x70) = 0;
              fVar44 = 0.0;
            }
            else {
              *(undefined4 *)(pCVar23 + 0x6c) = 0;
              fVar44 = fVar44 / fVar49;
              *(float *)(pCVar23 + 0x68) = fVar89 * fVar77 + fVar85 * fVar68 + 0.0 + fVar87 * fVar69
              ;
            }
            *(float *)(pCVar23 + 100) = fVar44;
            fVar79 = fVar60 * fVar51 - fVar59 * fVar48;
            fVar80 = fVar59 * fVar58 - fVar63 * fVar51;
            fVar86 = fVar63 * fVar48 - fVar60 * fVar58;
            *(float *)(pCVar23 + 0x88) = fVar79;
            *(ulong *)(pCVar23 + 0x80) = CONCAT44(fVar86,fVar80);
            fVar49 = fVar80 * afStack_c4[0xf] + fVar86 * afStack_c4[0x13] +
                     fVar79 * afStack_c4[0x17];
            fVar52 = fVar80 * afStack_c4[0x10] + fVar86 * afStack_c4[0x14] +
                     fVar79 * afStack_c4[0x18];
            fVar67 = fVar80 * afStack_c4[0x11] + fVar86 * afStack_c4[0x15] +
                     fVar79 * afStack_c4[0x19];
            *(ulong *)(pCVar23 + 0x98) = CONCAT44(fVar52,fVar49);
            *(float *)(pCVar23 + 0xa0) = fVar67;
            fVar44 = _LC1;
            fVar49 = fVar79 * fVar67 + fVar52 * fVar86 + fVar80 * fVar49 + 0.0 + fVar35 + 0.0;
            if (fVar49 == 0.0) {
              *(undefined4 *)(pCVar23 + 0xb0) = 0;
              fVar44 = 0.0;
            }
            else {
              *(undefined4 *)(pCVar23 + 0xac) = 0;
              fVar44 = fVar44 / fVar49;
              *(float *)(pCVar23 + 0xa8) = fVar58 * fVar77 + fVar69 * fVar51 + fVar68 * fVar48 + 0.0
              ;
            }
            *(float *)(pCVar23 + 0xa4) = fVar44;
          }
          pCVar25 = pCVar25 + 0x10;
          pCVar23 = pCVar23 + 200;
          pfVar28 = pfVar28 + 9;
        } while (param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50 != pCVar25);
      }
      if (sDrawContactManifolds != '\0') {
        ContactConstraint::Draw(pCVar32,DebugRenderer::sInstance,_sOrange);
      }
      bVar15 = true;
    }
    else {
      if (0 < (int)uVar6) {
        pfVar21 = (float *)(lVar18 + 0x28);
        pCVar25 = param_5 + 0x40;
        do {
          pCVar27 = pCVar25 + 0x10;
          fVar95 = *(float *)pCVar25 + *(float *)param_5;
          fVar92 = *(float *)(pCVar25 + 4) + *(float *)(param_5 + 4);
          fVar93 = *(float *)(pCVar25 + 8) + *(float *)(param_5 + 8);
          fVar43 = *(float *)param_5 + *(float *)(pCVar25 + 0x410);
          fVar47 = *(float *)(param_5 + 4) + *(float *)(pCVar25 + 0x414);
          fVar91 = *(float *)(param_5 + 8) + *(float *)(pCVar25 + 0x418);
          pfVar21[6] = 0.0;
          pfVar21[7] = 0.0;
          pfVar21[8] = 0.0;
          *(ulong *)(pfVar21 + 4) =
               CONCAT44(fVar43 * fVar83 + fVar47 * fVar82 + fVar91 * fVar55 + fVar64,
                        fVar43 * fVar74 + fVar47 * fVar66 + fVar91 * fVar42 + fVar62);
          *pfVar21 = fVar95 * fVar41 + fVar92 * fVar81 + fVar93 * fVar71 + fVar70;
          pfVar21[1] = fVar95 * fVar39 + fVar92 * fVar56 + fVar93 * fVar97 + fVar38;
          pfVar21[2] = fVar95 * fVar84 + fVar92 * fVar57 + fVar93 * fVar75 + fVar40;
          pfVar21[3] = fVar43 * fVar94 + fVar47 * fVar76 + fVar91 * fVar96 + fVar54;
          pfVar21 = pfVar21 + 9;
          pCVar25 = pCVar27;
        } while (pCVar27 != param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50);
      }
      bVar15 = false;
    }
    *(undefined4 *)(lVar18 + 0x14) = *(undefined4 *)((long)param_2 + 0x18);
    *(int *)((long)param_2 + 0x18) =
         (int)lVar18 -
         (int)**(undefined8 **)((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8) + 0x10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar15;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool JPH::ContactConstraintManager::TemplatedAddContactConstraint<(JPH::EMotionType)0,
   (JPH::EMotionType)1>(JPH::ContactConstraintManager::ContactAllocator&, void*, JPH::Body&,
   JPH::Body&, JPH::ContactManifold const&) */

bool __thiscall
JPH::ContactConstraintManager::
TemplatedAddContactConstraint<(JPH::EMotionType)0,(JPH::EMotionType)1>
          (ContactConstraintManager *this,ContactAllocator *param_1,void *param_2,Body *param_3,
          Body *param_4,ContactManifold *param_5)

{
  ContactConstraintManager *pCVar1;
  undefined4 uVar2;
  SubShapeIDPair SVar3;
  Body BVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  uint uVar10;
  SubShapeIDPair *pSVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar15;
  ContactConstraint *pCVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  ContactConstraint *pCVar20;
  uint uVar21;
  ContactManifold *pCVar22;
  int *piVar23;
  ulong uVar24;
  float *pfVar25;
  ContactManifold *pCVar26;
  float *pfVar27;
  long in_FS_OFFSET;
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar37;
  float fVar38;
  float fVar41;
  float fVar42;
  undefined1 auVar39 [12];
  float fVar44;
  undefined1 auVar40 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  byte local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  long *plVar14;
  uint uVar43;
  uint uVar45;
  
  bVar28 = 0;
  uVar24 = 0xcbf29ce484222325;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = *(int *)(param_3 + 0x70);
  iStack_94 = *(int *)(param_5 + 0x24);
  iStack_90 = *(int *)(param_4 + 0x70);
  iStack_8c = *(int *)(param_5 + 0x28);
  pSVar11 = (SubShapeIDPair *)&local_98;
  do {
    SVar3 = *pSVar11;
    pSVar11 = pSVar11 + 1;
    uVar24 = (uVar24 ^ (byte)SVar3) * 0x100000001b3;
  } while (pSVar11 != (SubShapeIDPair *)&local_88);
  iVar5 = *(int *)(this + 0x88);
  uVar6 = *(uint *)(param_5 + 0x30);
  lVar12 = ManifoldCache::Create
                     ((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8),param_1,
                      (SubShapeIDPair *)&local_98,uVar24,uVar6);
  if (lVar12 == 0) {
LAB_0011621a:
    bVar9 = false;
  }
  else {
    fVar30 = *(float *)param_4;
    fVar35 = *(float *)(param_4 + 4);
    fVar38 = *(float *)(param_4 + 8);
    fVar46 = (float)(*(uint *)(param_4 + 0x10) ^ __LC17);
    fVar52 = (float)(*(uint *)(param_4 + 0x14) ^ _UNK_00116354);
    fVar53 = (float)(*(uint *)(param_4 + 0x18) ^ _UNK_00116358);
    fVar54 = (float)(*(uint *)(param_4 + 0x1c) ^ _UNK_0011635c);
    fVar58 = fVar46 + fVar46;
    fVar67 = fVar52 + fVar52;
    fVar71 = fVar53 * (fVar53 + fVar53);
    fVar47 = fVar54 * (fVar53 + fVar53);
    fVar70 = (_LC1 - fVar46 * fVar58) - fVar52 * fVar67;
    fVar69 = fVar53 * fVar58 + fVar67 * fVar54;
    fVar62 = fVar53 * fVar58 - fVar67 * fVar54;
    fVar79 = fVar53 * fVar67 - fVar58 * fVar54;
    fVar59 = fVar58 * fVar54 + fVar53 * fVar67;
    fVar67 = (_LC1 - fVar52 * fVar67) - fVar71;
    fVar54 = fVar52 * fVar58 + fVar47;
    fVar47 = fVar52 * fVar58 - fVar47;
    fVar58 = (_LC1 - fVar71) - fVar46 * fVar58;
    fVar46 = 0.0 - (fVar30 * fVar67 + fVar35 * fVar47 + fVar38 * fVar69);
    fVar52 = 0.0 - (fVar30 * fVar54 + fVar35 * fVar58 + fVar38 * fVar79);
    fVar53 = 0.0 - (fVar30 * fVar62 + fVar35 * fVar59 + fVar38 * fVar70);
    fVar30 = *(float *)(param_5 + 0x10);
    fVar35 = *(float *)(param_5 + 0x14);
    fVar38 = *(float *)(param_5 + 0x18);
    auVar32._0_4_ = fVar35 * fVar47 + fVar30 * fVar67 + fVar38 * fVar69;
    auVar32._4_4_ = fVar35 * fVar58 + fVar30 * fVar54 + fVar38 * fVar79;
    auVar32._8_4_ = fVar35 * fVar59 + fVar30 * fVar62 + fVar38 * fVar70;
    auVar32._12_4_ = fVar35 * 0.0 + fVar30 * 0.0 + fVar38 * 0.0;
    auVar49._0_4_ =
         SQRT(auVar32._8_4_ * auVar32._8_4_ +
              auVar32._4_4_ * auVar32._4_4_ + auVar32._0_4_ * auVar32._0_4_ + 0.0);
    auVar49._4_4_ = auVar49._0_4_;
    auVar49._8_4_ = auVar49._0_4_;
    auVar49._12_4_ = auVar49._0_4_;
    auVar32 = divps(auVar32,auVar49);
    *(long *)(lVar12 + 0x18) = auVar32._0_8_;
    *(int *)(lVar12 + 0x20) = auVar32._8_4_;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_80 = _LC1;
    fStack_7c = _LC1;
    fStack_78 = _LC1;
    fStack_74 = _LC1;
    local_88 = (float)(**(code **)(this + 0xa0))(param_3,param_5 + 0x24,param_4);
    local_84 = (**(code **)(this + 0xa8))(param_3,param_5 + 0x24,param_4,param_5 + 0x28);
    BVar4 = param_3[0x79];
    if (((byte)BVar4 & 1) == 0) {
      BVar4 = param_4[0x79];
    }
    local_70 = (byte)BVar4 & 1;
    uVar13 = (long)*(int *)(this + 0x88) ^ 1;
    uVar10 = *(uint *)(*(long *)(this + uVar13 * 0x40 + 0x20) +
                      (*(int *)(this + uVar13 * 0x40 + 0x28) - 1 & uVar24) * 4);
    if (uVar10 != 0xffffffff) {
      plVar14 = *(long **)(this + uVar13 * 0x40 + 0x18);
      lVar19 = *plVar14;
      do {
        piVar23 = (int *)((ulong)uVar10 + lVar19);
        auVar33._0_4_ = -(uint)(*piVar23 == local_98);
        auVar33._4_4_ = -(uint)(piVar23[1] == iStack_94);
        auVar33._8_4_ = -(uint)(piVar23[2] == iStack_90);
        auVar33._12_4_ = -(uint)(piVar23[3] == iStack_8c);
        uVar10 = movmskps((int)plVar14,auVar33);
        plVar14 = (long *)(ulong)uVar10;
        if (uVar10 == 0xf) {
          plVar14 = *(long **)(this + 0x98);
          if ((plVar14 != (long *)0x0) &&
             (*(code **)(*plVar14 + 0x20) != ContactListener::OnContactPersisted)) {
            (**(code **)(*plVar14 + 0x20))
                      (plVar14,param_3,param_4,param_5,(SubShapeIDPair *)&local_88);
          }
          uVar45 = _UNK_0011635c;
          uVar43 = _UNK_00116358;
          uVar21 = _UNK_00116354;
          uVar10 = __LC17;
          fVar30 = _LC1;
          pfVar15 = (float *)(piVar23 + 10);
          pfVar27 = pfVar15 + (ulong)*(ushort *)((long)piVar23 + 0x26) * 9;
          LOCK();
          *(ushort *)(piVar23 + 9) = *(ushort *)(piVar23 + 9) | 1;
          UNLOCK();
          goto LAB_00115918;
        }
        uVar10 = piVar23[4];
      } while (uVar10 != 0xffffffff);
    }
    plVar14 = *(long **)(this + 0x98);
    if ((plVar14 != (long *)0x0) && (*(code **)(*plVar14 + 0x18) != ContactListener::OnContactAdded)
       ) {
      (**(code **)(*plVar14 + 0x18))(plVar14,param_3,param_4,param_5);
    }
    pfVar27 = (float *)0x0;
    pfVar15 = (float *)0x0;
    fVar30 = _LC1;
    uVar10 = __LC17;
    uVar21 = _UNK_00116354;
    uVar43 = _UNK_00116358;
    uVar45 = _UNK_0011635c;
LAB_00115918:
    fVar37 = (float)(uVar10 ^ *(uint *)(param_3 + 0x10));
    fVar41 = (float)(uVar21 ^ *(uint *)(param_3 + 0x14));
    fVar42 = (float)(uVar43 ^ *(uint *)(param_3 + 0x18));
    fVar44 = (float)(uVar45 ^ *(uint *)(param_3 + 0x1c));
    fVar35 = *(float *)param_3;
    fVar38 = *(float *)(param_3 + 4);
    fVar71 = *(float *)(param_3 + 8);
    fVar48 = fVar37 + fVar37;
    fVar68 = fVar41 + fVar41;
    fVar77 = fVar42 * (fVar42 + fVar42);
    fVar29 = fVar44 * (fVar42 + fVar42);
    fVar72 = fVar42 * fVar48 + fVar68 * fVar44;
    fVar63 = fVar42 * fVar48 - fVar68 * fVar44;
    fVar78 = (fVar30 - fVar37 * fVar48) - fVar41 * fVar68;
    fVar73 = fVar42 * fVar68 - fVar48 * fVar44;
    fVar44 = fVar48 * fVar44 + fVar42 * fVar68;
    fVar42 = fVar41 * fVar48 + fVar29;
    fVar29 = fVar41 * fVar48 - fVar29;
    fVar41 = (fVar30 - fVar41 * fVar68) - fVar77;
    fVar48 = (fVar30 - fVar77) - fVar37 * fVar48;
    fVar30 = 0.0 - (fVar35 * fVar41 + fVar38 * fVar29 + fVar71 * fVar72);
    fVar37 = 0.0 - (fVar35 * fVar42 + fVar38 * fVar48 + fVar71 * fVar73);
    fVar35 = 0.0 - (fVar35 * fVar63 + fVar38 * fVar44 + fVar71 * fVar78);
    if ((local_70 == 0) &&
       (((param_3[0x78] == (Body)0x2 && (local_80 != 0.0)) ||
        ((param_4[0x78] == (Body)0x2 && (fStack_78 != 0.0)))))) {
      LOCK();
      pCVar1 = this + 0xbc;
      uVar10 = *(uint *)pCVar1;
      *(uint *)pCVar1 = *(uint *)pCVar1 + 1;
      UNLOCK();
      if (*(uint *)(this + 0xb8) <= uVar10) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 4;
        *(undefined2 *)(lVar12 + 0x26) = 0;
        goto LAB_0011621a;
      }
      pCVar16 = (ContactConstraint *)((ulong)uVar10 * 0x360 + *(long *)(this + 0xb0));
      pCVar20 = pCVar16;
      for (lVar19 = 0x6c; lVar19 != 0; lVar19 = lVar19 + -1) {
        *(undefined8 *)pCVar20 = 0;
        pCVar20 = pCVar20 + (ulong)bVar28 * -0x10 + 8;
      }
      *(Body **)pCVar16 = param_3;
      *(Body **)(pCVar16 + 8) = param_4;
      uVar2 = *(undefined4 *)(param_5 + 0x10);
      *(ulong *)(pCVar16 + 0x10) = uVar24;
      *(undefined4 *)(pCVar16 + 0x18) = uVar2;
      *(undefined8 *)(pCVar16 + 0x1c) = *(undefined8 *)(param_5 + 0x14);
      lVar19 = *(long *)(param_3 + 0x48);
      *(float *)(pCVar16 + 0x24) = local_88;
      fVar38 = 0.0;
      if (lVar19 != 0) {
        fVar38 = local_80 * *(float *)(lVar19 + 0x58);
      }
      lVar17 = *(long *)(param_4 + 0x48);
      uVar7 = *(undefined8 *)(*(long *)(this + 0xc0) + 0x40);
      *(ulong *)(pCVar16 + 0x28) = CONCAT44(fStack_7c,fVar38);
      if (lVar17 == 0) {
        fVar38 = 0.0;
      }
      else {
        fVar38 = fStack_78 * *(float *)(lVar17 + 0x58);
      }
      *(ulong *)(pCVar16 + 0x30) = CONCAT44(fStack_74,fVar38);
      if (lVar19 == 0) {
        uVar21 = 0xffffffff;
      }
      else {
        uVar21 = *(uint *)(lVar19 + 0x70);
      }
      JPH::IslandBuilder::LinkContact((uint)uVar7,uVar10,uVar21);
      fVar38 = *(float *)(pCVar16 + 0x18);
      fVar71 = *(float *)(pCVar16 + 0x1c);
      fVar68 = *(float *)(pCVar16 + 0x20);
      if ((float)((uint)fVar71 & _LC10) < (float)(_LC10 & (uint)fVar38)) {
        auVar40._12_4_ = (uint)fVar38 ^ _LC20;
        auVar40._8_4_ = (uint)fVar38 ^ _LC20;
        auVar40._4_4_ = 0;
        auVar40._0_4_ = fVar68;
        fVar77 = SQRT(fVar68 * fVar68 + fVar38 * fVar38);
        auVar51._4_4_ = fVar77;
        auVar51._0_4_ = fVar77;
        auVar51._8_4_ = fVar77;
        auVar51._12_4_ = fVar77;
        auVar32 = divps(auVar40,auVar51);
        auVar39 = auVar32._0_12_;
      }
      else {
        auVar50._0_4_ = SQRT(fVar71 * fVar71 + fVar68 * fVar68);
        auVar8._4_4_ = (uint)fVar71 ^ _LC20;
        auVar8._0_4_ = fVar68;
        auVar8._8_4_ = (uint)fVar71 ^ _LC20;
        auVar8._12_4_ = 0;
        auVar50._4_4_ = auVar50._0_4_;
        auVar50._8_4_ = auVar50._0_4_;
        auVar50._12_4_ = auVar50._0_4_;
        auVar32 = divps(auVar8 << 0x20,auVar50);
        auVar39 = auVar32._0_12_;
      }
      fVar77 = auVar39._0_4_;
      fVar56 = auVar39._4_4_;
      fVar57 = auVar39._8_4_;
      lVar19 = (ulong)*(uint *)(pCVar16 + 0x38) * 200;
      fVar55 = fVar38 * fVar56 - fVar71 * fVar77;
      fVar71 = fVar71 * fVar57 - fVar68 * fVar56;
      fVar38 = fVar68 * fVar77 - fVar38 * fVar57;
      if (pCVar16 + lVar19 + 0x40 < pCVar16 + (ulong)uVar6 * 200 + 0x40) {
        lVar17 = 0;
        uVar24 = 0;
        do {
          uVar24 = uVar24 + 1;
          *(undefined1 (*) [16])(pCVar16 + lVar17 + lVar19 + 0x70) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar16 + lVar17 + lVar19 + 0xb0) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar16 + lVar17 + lVar19 + 0xf0) = (undefined1  [16])0x0;
          lVar17 = lVar17 + 200;
        } while (uVar24 < (ulong)(pCVar16 + (ulong)uVar6 * 200 + 0x40 +
                                 (-1 - (long)(pCVar16 + lVar19 + 0x40))) / 200 + 1);
      }
      *(uint *)(pCVar16 + 0x38) = uVar6;
      if (0 < (int)uVar6) {
        pCVar26 = param_5 + 0x40;
        pfVar25 = (float *)(lVar12 + 0x28);
        pCVar20 = pCVar16 + 0x4c;
        do {
          fVar80 = *(float *)pCVar26 + *(float *)param_5;
          fVar81 = *(float *)(pCVar26 + 4) + *(float *)(param_5 + 4);
          fVar82 = *(float *)(pCVar26 + 8) + *(float *)(param_5 + 8);
          fVar64 = *(float *)param_5 + *(float *)(pCVar26 + 0x410);
          fVar65 = *(float *)(param_5 + 4) + *(float *)(pCVar26 + 0x414);
          fVar66 = *(float *)(param_5 + 8) + *(float *)(pCVar26 + 0x418);
          fVar68 = fVar80 * fVar41 + fVar81 * fVar29 + fVar82 * fVar72 + fVar30;
          fVar60 = fVar80 * fVar42 + fVar81 * fVar48 + fVar82 * fVar73 + fVar37;
          fVar61 = fVar80 * fVar63 + fVar81 * fVar44 + fVar82 * fVar78 + fVar35;
          fVar74 = fVar64 * fVar67 + fVar65 * fVar47 + fVar66 * fVar69 + fVar46;
          fVar75 = fVar64 * fVar54 + fVar65 * fVar58 + fVar66 * fVar79 + fVar52;
          fVar76 = fVar64 * fVar62 + fVar65 * fVar59 + fVar66 * fVar70 + fVar53;
          if (pfVar15 < pfVar27) {
            pfVar18 = pfVar15;
            do {
              fVar31 = fVar68 - *pfVar18;
              fVar34 = fVar60 - pfVar18[1];
              fVar36 = fVar61 - pfVar18[2];
              if ((fVar36 * fVar36 + fVar34 * fVar34 + fVar31 * fVar31 + 0.0 <=
                   *(float *)(*(long *)(this + 0x90) + 0x34)) &&
                 (fVar31 = fVar74 - pfVar18[3], fVar34 = fVar75 - pfVar18[4],
                 fVar36 = fVar76 - pfVar18[5],
                 fVar36 * fVar36 + fVar34 * fVar34 + fVar31 * fVar31 + 0.0 <=
                 *(float *)(*(long *)(this + 0x90) + 0x34))) {
                *(float *)(pCVar20 + 0x30) = pfVar18[6];
                *(float *)(pCVar20 + 0x70) = pfVar18[7];
                fVar31 = pfVar18[8];
                goto LAB_00115fde;
              }
              pfVar18 = pfVar18 + 9;
            } while (pfVar18 < pfVar27);
          }
          *(undefined4 *)(pCVar20 + 0x30) = 0;
          fVar31 = 0.0;
          *(undefined4 *)(pCVar20 + 0x70) = 0;
LAB_00115fde:
          *(float *)(pCVar20 + 0xb0) = fVar31;
          fVar64 = (fVar64 + fVar80) * _LC6;
          fVar65 = (fVar65 + fVar81) * _UNK_00116314;
          fVar66 = (fVar66 + fVar82) * _UNK_00116318;
          *(ulong *)(pfVar25 + 4) = CONCAT44(fVar76,fVar75);
          *pfVar25 = fVar68;
          pfVar25[1] = fVar60;
          pfVar25[2] = fVar61;
          pfVar25[3] = fVar74;
          fVar64 = fVar64 - *(float *)param_4;
          fVar65 = fVar65 - *(float *)(param_4 + 4);
          fVar66 = fVar66 - *(float *)(param_4 + 8);
          *(float **)(pCVar20 + 0xb4) = pfVar25;
          fVar68 = *(float *)(param_5 + 0x10);
          fVar60 = *(float *)(param_5 + 0x14);
          fVar61 = *(float *)(param_5 + 0x18);
          *(undefined4 *)(pCVar20 + 0x24) = 0;
          *(undefined4 *)(pCVar20 + 0x30) = 0;
          *(float *)(pCVar20 + 8) = fVar60 * fVar64 - fVar68 * fVar65;
          *(ulong *)pCVar20 =
               CONCAT44(fVar68 * fVar66 - fVar61 * fVar64,fVar61 * fVar65 - fVar60 * fVar66);
          if (local_88 <= 0.0) {
            *(undefined4 *)(pCVar20 + 100) = 0;
            *(undefined4 *)(pCVar20 + 0x70) = 0;
          }
          else {
            *(undefined4 *)(pCVar20 + 100) = 0;
            *(undefined4 *)(pCVar20 + 0x70) = 0;
            *(float *)(pCVar20 + 0x48) = fVar56 * fVar64 - fVar77 * fVar65;
            *(ulong *)(pCVar20 + 0x40) =
                 CONCAT44(fVar77 * fVar66 - fVar57 * fVar64,fVar57 * fVar65 - fVar56 * fVar66);
            *(float *)(pCVar20 + 0x88) = fVar64 * fVar38 - fVar65 * fVar71;
            *(ulong *)(pCVar20 + 0x80) =
                 CONCAT44(fVar66 * fVar71 - fVar64 * fVar55,fVar65 * fVar55 - fVar66 * fVar38);
          }
          pCVar26 = pCVar26 + 0x10;
          pfVar25 = pfVar25 + 9;
          *(undefined4 *)(pCVar20 + 0xa4) = 0;
          *(undefined4 *)(pCVar20 + 0xb0) = 0;
          pCVar20 = pCVar20 + 200;
        } while (param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50 != pCVar26);
      }
      if (sDrawContactManifolds != '\0') {
        ContactConstraint::Draw(pCVar16,DebugRenderer::sInstance,_sOrange);
      }
      bVar9 = true;
    }
    else {
      if (0 < (int)uVar6) {
        pfVar15 = (float *)(lVar12 + 0x28);
        pCVar26 = param_5 + 0x40;
        do {
          pCVar22 = pCVar26 + 0x10;
          fVar77 = *(float *)pCVar26 + *(float *)param_5;
          fVar56 = *(float *)(pCVar26 + 4) + *(float *)(param_5 + 4);
          fVar57 = *(float *)(pCVar26 + 8) + *(float *)(param_5 + 8);
          fVar38 = *(float *)param_5 + *(float *)(pCVar26 + 0x410);
          fVar71 = *(float *)(param_5 + 4) + *(float *)(pCVar26 + 0x414);
          fVar68 = *(float *)(param_5 + 8) + *(float *)(pCVar26 + 0x418);
          pfVar15[6] = 0.0;
          pfVar15[7] = 0.0;
          pfVar15[8] = 0.0;
          *(ulong *)(pfVar15 + 4) =
               CONCAT44(fVar38 * fVar62 + fVar71 * fVar59 + fVar68 * fVar70 + fVar53,
                        fVar38 * fVar54 + fVar71 * fVar58 + fVar68 * fVar79 + fVar52);
          *pfVar15 = fVar77 * fVar41 + fVar56 * fVar29 + fVar57 * fVar72 + fVar30;
          pfVar15[1] = fVar77 * fVar42 + fVar56 * fVar48 + fVar57 * fVar73 + fVar37;
          pfVar15[2] = fVar77 * fVar63 + fVar56 * fVar44 + fVar57 * fVar78 + fVar35;
          pfVar15[3] = fVar38 * fVar67 + fVar71 * fVar47 + fVar68 * fVar69 + fVar46;
          pfVar15 = pfVar15 + 9;
          pCVar26 = pCVar22;
        } while (pCVar22 != param_5 + (ulong)(uVar6 - 1) * 0x10 + 0x50);
      }
      bVar9 = false;
    }
    *(undefined4 *)(lVar12 + 0x14) = *(undefined4 *)((long)param_2 + 0x18);
    *(int *)((long)param_2 + 0x18) =
         (int)lVar12 -
         (int)**(undefined8 **)((ManifoldCache *)(this + (long)iVar5 * 0x40 + 8) + 0x10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}



/* JPH::ContactConstraintManager::sDrawContactPoint */

void JPH::ContactConstraintManager::_GLOBAL__sub_I_sDrawContactPoint(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC48;
  }
  return;
}



