/* JPH::PhysicsScene::sCreateRTTI(JPH::RTTI&) */

void JPH::PhysicsScene::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x10);
  *puVar1 = 0;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::PhysicsScene*)::{lambda()#1}::_FUN(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*Allocate)(0x50);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 0x12) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar1 + 0xe) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HashTable<JPH::BodyID, std::pair<JPH::BodyID, unsigned int>,
   JPH::UnorderedMapDetail<JPH::BodyID, unsigned int>, JPH::Hash<JPH::BodyID>,
   std::equal_to<JPH::BodyID> >::rehash(unsigned int) [clone .isra.0] */

void JPH::
     HashTable<JPH::BodyID,std::pair<JPH::BodyID,unsigned_int>,JPH::UnorderedMapDetail<JPH::BodyID,unsigned_int>,JPH::Hash<JPH::BodyID>,std::equal_to<JPH::BodyID>>
     ::rehash(uint param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 in_register_0000003c;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  undefined4 local_44;
  long local_40 [2];
  
  uVar21 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
  uVar16 = (ulong)uVar21;
  puVar18 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = 0;
  if (uVar21 != 0) {
    do {
      while( true ) {
        pcVar1 = puVar18 + lVar8;
        if (*pcVar1 != '\0') break;
LAB_001000ba:
        lVar8 = lVar8 + 1;
        if ((uint)uVar16 <= (uint)lVar8) goto LAB_001000e4;
      }
      if (*pcVar1 == '\x7f') {
        *pcVar1 = '\0';
        puVar18 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
        uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
        goto LAB_001000ba;
      }
      *pcVar1 = '\x7f';
      uVar21 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
      uVar16 = (ulong)uVar21;
      lVar8 = lVar8 + 1;
      puVar18 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
    } while ((uint)lVar8 < uVar21);
  }
LAB_001000e4:
  puVar18[uVar16] = *puVar18;
  lVar8 = 1;
  do {
    lVar12 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
    iVar11 = (int)lVar8;
    puVar18 = (undefined1 *)(lVar12 + lVar8);
    lVar8 = lVar8 + 1;
    *(undefined1 *)
     (lVar12 + (ulong)(uint)(iVar11 + *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14))) =
         *puVar18;
    auVar6 = __LC0;
  } while (lVar8 != 0xf);
  uVar21 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
  uVar16 = (ulong)uVar21;
  uVar17 = uVar21 - 1;
  if (uVar21 != 0) {
    uVar21 = 0xfffffff1;
    lVar8 = 0;
    do {
      lVar12 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
      if (*(char *)(lVar12 + lVar8) == '\x7f') {
        lVar9 = *(long *)CONCAT44(in_register_0000003c,param_1);
        lVar3 = lVar8 * 8;
        while( true ) {
          local_44 = *(undefined4 *)(lVar9 + lVar3);
          uVar10 = 0xcbf29ce484222325;
          pbVar14 = (byte *)&local_44;
          do {
            bVar7 = *pbVar14;
            pbVar14 = pbVar14 + 1;
            uVar10 = (uVar10 ^ bVar7) * 0x100000001b3;
          } while (pbVar14 != (byte *)local_40);
          bVar7 = (byte)uVar10 | 0x80;
          uVar15 = (int)uVar16 - 1U & (uint)(uVar10 >> 7);
          auVar22 = *(undefined1 (*) [16])(lVar12 + (ulong)uVar15) & auVar6;
          uVar5 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
          uVar19 = uVar15;
          while (uVar5 == 0xffff) {
            uVar19 = uVar19 + 0x10 & uVar17;
            auVar22 = *(undefined1 (*) [16])(lVar12 + (ulong)uVar19) & auVar6;
            uVar5 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
          }
          iVar11 = 0;
          for (uVar13 = uVar5 ^ 0xffff; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            iVar11 = iVar11 + 1;
          }
          uVar19 = iVar11 + uVar19 & uVar17;
          if (((uVar19 - uVar15 ^ (int)lVar8 - uVar15) & uVar17 & 0xfffffff0) == 0) {
            *(byte *)(lVar12 + lVar8) = bVar7;
            *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                     (ulong)((*(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U & uVar21)
                            + 0xf)) = bVar7;
            uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
            goto LAB_00100160;
          }
          uVar16 = (ulong)uVar19;
          pbVar14 = (byte *)(lVar12 + uVar16);
          if (*pbVar14 == 0) break;
          *pbVar14 = bVar7;
          *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                   (ulong)((uVar19 - 0xf &
                           *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U) + 0xf)) =
               bVar7;
          lVar9 = *(long *)CONCAT44(in_register_0000003c,param_1);
          puVar20 = (undefined4 *)(uVar16 * 8 + lVar9);
          puVar2 = (undefined4 *)(lVar9 + lVar3);
          uVar4 = *puVar2;
          *puVar2 = *puVar20;
          *puVar20 = uVar4;
          uVar4 = puVar2[1];
          puVar2[1] = puVar20[1];
          puVar20[1] = uVar4;
          lVar12 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
          uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
        }
        *pbVar14 = bVar7;
        *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                 (ulong)((uVar19 - 0xf &
                         *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U) + 0xf)) =
             bVar7;
        *(undefined1 *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) + lVar8) = 0;
        *(undefined1 *)
         (*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
         (ulong)((*(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U & uVar21) + 0xf)) = 0
        ;
        *(undefined8 *)(*(long *)CONCAT44(in_register_0000003c,param_1) + uVar16 * 8) =
             *(undefined8 *)(*(long *)CONCAT44(in_register_0000003c,param_1) + lVar3);
        uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
      }
LAB_00100160:
      lVar8 = lVar8 + 1;
      uVar21 = uVar21 + 1;
    } while ((uint)lVar8 < (uint)uVar16);
  }
  *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x18) =
       (int)(uVar16 * 7 >> 3) - *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x10);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PhysicsScene::ConnectedConstraint::sCreateRTTI(JPH::RTTI&) */

void JPH::PhysicsScene::ConnectedConstraint::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*)::{lambda(void*)#1}::_FUN
               (void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
                    /* WARNING: Load size is inaccurate */
  plVar2 = *param_1;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x001003a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(param_1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00100380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(param_1);
  return;
}



/* JPH::GetRTTIOfType(JPH::PhysicsScene*) */

undefined1 * JPH::GetRTTIOfType(PhysicsScene *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PhysicsScene*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PhysicsScene*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PhysicsScene*)::rtti,"PhysicsScene",0x50,
                      GetRTTIOfType(JPH::PhysicsScene*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PhysicsScene*)::{lambda(void*)#1}::_FUN,
                      PhysicsScene::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PhysicsScene*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PhysicsScene*)::rtti);
      return GetRTTIOfType(JPH::PhysicsScene*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PhysicsScene*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*) */

undefined1 * JPH::GetRTTIOfType(ConnectedConstraint *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*)::rtti,
                      "PhysicsScene::ConnectedConstraint",0x10,
                      GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*)::{lambda(void*)#1}::
                      _FUN,PhysicsScene::ConnectedConstraint::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*)::rtti);
      return GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PhysicsScene::ConnectedConstraint*)::rtti;
}



/* JPH::PhysicsScene::FixInvalidScales() */

undefined4 __thiscall JPH::PhysicsScene::FixInvalidScales(PhysicsScene *this)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  long *local_68 [2];
  long local_58 [2];
  char local_48;
  long local_40;
  
  lVar7 = *(long *)(this + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(this + 8) * 0x100 + lVar7;
  if (lVar5 == lVar7) {
    uVar3 = 1;
  }
  else {
    uVar6 = 1;
    do {
      while( true ) {
        plVar4 = (long *)JPH::BodyCreationSettings::GetShape();
        uVar3 = (**(code **)(*plVar4 + 0x118))(0x3f8000003f800000,0x3f8000003f800000,plVar4);
        if ((char)uVar3 == '\0') break;
LAB_00100540:
        lVar7 = lVar7 + 0x100;
        uVar3 = uVar6;
        if (lVar5 == lVar7) goto LAB_001005c8;
      }
      JPH::Shape::ScaleShape(0x3f8000003f800000,local_68,plVar4);
      plVar4 = local_68[0];
      if (local_48 == '\x01') {
        plVar2 = *(long **)(lVar7 + 0xf8);
        if (local_68[0] == plVar2) {
          plVar4 = *(long **)(lVar7 + 0xf0);
          if (plVar4 != (long *)0x0) goto LAB_0010064a;
        }
        else {
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar2 + 8))();
            }
          }
          *(long **)(lVar7 + 0xf8) = plVar4;
          if (plVar4 != (long *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          plVar4 = *(long **)(lVar7 + 0xf0);
          if (plVar4 != (long *)0x0) {
LAB_0010064a:
            LOCK();
            plVar2 = plVar4 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)(*plVar4 + 0x18))();
            }
            *(undefined8 *)(lVar7 + 0xf0) = 0;
          }
          uVar3 = uVar6;
          if (local_48 != '\x01') goto LAB_001005af;
        }
        if (local_68[0] != (long *)0x0) {
          LOCK();
          plVar4 = local_68[0] + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)(*local_68[0] + 8))(local_68[0]);
          }
        }
        goto LAB_00100540;
      }
LAB_001005af:
      if ((local_48 == '\x02') && (local_68[0] != local_58)) {
        (*Free)();
      }
      lVar7 = lVar7 + 0x100;
      uVar6 = uVar3;
    } while (lVar5 != lVar7);
  }
LAB_001005c8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* JPH::PhysicsScene::CreateBodies(JPH::PhysicsSystem*) const */

undefined4 __thiscall JPH::PhysicsScene::CreateBodies(PhysicsScene *this,PhysicsSystem *param_1)

{
  BodyCreationSettings *pBVar1;
  uint uVar2;
  BodyID *pBVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  long local_40;
  
  pBVar1 = (BodyCreationSettings *)(param_1 + 0x158);
  lVar14 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = lVar14 + *(long *)(this + 0x38);
  if (uVar18 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)(*Reallocate)(0,0,uVar18 * 4);
    lVar14 = *(long *)(this + 8);
  }
  lVar15 = *(long *)(this + 0x18);
  lVar14 = lVar14 * 0x100 + lVar15;
  if (lVar15 == lVar14) {
    lVar11 = 0;
    uVar19 = 0;
  }
  else {
    uVar20 = 0;
    do {
      lVar5 = JPH::BodyInterface::CreateBody(pBVar1);
      if (lVar5 == 0) {
        lVar11 = uVar20 * 4;
        uVar19 = uVar20;
        break;
      }
      uVar19 = uVar20 + 1;
      if (uVar18 < uVar19) {
        uVar4 = uVar18 * 2;
        lVar11 = uVar18 * 4;
        uVar18 = uVar4;
        if (uVar4 < uVar19) {
          uVar18 = uVar19;
        }
        puVar6 = (undefined4 *)(*Reallocate)(puVar6,lVar11,uVar18 * 4);
      }
      lVar11 = uVar19 * 4;
      if (puVar6 + uVar20 != (undefined4 *)0x0) {
        puVar6[uVar20] = *(undefined4 *)(lVar5 + 0x70);
      }
      lVar15 = lVar15 + 0x100;
      uVar20 = uVar19;
    } while (lVar15 != lVar14);
  }
  lVar14 = *(long *)(this + 0x48);
  lVar15 = *(long *)(this + 0x38) * 0x70 + lVar14;
  for (; lVar14 != lVar15; lVar14 = lVar14 + 0x70) {
    lVar5 = JPH::BodyInterface::CreateSoftBody((SoftBodyCreationSettings *)pBVar1);
    if (lVar5 == 0) {
      lVar11 = uVar19 * 4;
      break;
    }
    uVar20 = uVar19 + 1;
    if (uVar18 < uVar20) {
      uVar4 = uVar18 * 2;
      lVar11 = uVar18 * 4;
      uVar18 = uVar4;
      if (uVar4 < uVar20) {
        uVar18 = uVar20;
      }
      puVar6 = (undefined4 *)(*Reallocate)(puVar6,lVar11,uVar18 * 4);
    }
    lVar11 = uVar20 * 4;
    if (puVar6 + uVar19 != (undefined4 *)0x0) {
      puVar6[uVar19] = *(undefined4 *)(lVar5 + 0x70);
    }
    uVar19 = uVar20;
  }
  if (lVar11 == 0) {
    uVar17 = 0;
    uVar7 = JPH::BodyInterface::AddBodiesPrepare((BodyID *)pBVar1,0);
    JPH::BodyInterface::AddBodiesFinalize(pBVar1,0,0,uVar7,0);
    if (*(long *)(this + 0x38) + *(long *)(this + 8) != uVar19) goto LAB_00100a1c;
    puVar12 = *(undefined8 **)(this + 0x30);
    puVar8 = (undefined4 *)0x0;
    uVar17 = 1;
    puVar13 = puVar12 + *(long *)(this + 0x20) * 2;
    if (puVar13 == puVar12) goto LAB_00100a1c;
LAB_001008c2:
    do {
      if (*(uint *)(puVar12 + 1) == 0xffffffff) {
        local_50 = 0xffffffff;
        uVar2 = *(uint *)((long)puVar12 + 0xc);
        if (uVar2 == 0xffffffff) goto LAB_00100959;
LAB_00100900:
        local_4c = puVar6[uVar2];
      }
      else {
        local_50 = puVar6[*(uint *)(puVar12 + 1)];
        uVar2 = *(uint *)((long)puVar12 + 0xc);
        if (uVar2 != 0xffffffff) goto LAB_00100900;
LAB_00100959:
        local_4c = 0xffffffff;
      }
      pBVar3 = (BodyID *)*puVar12;
      puVar12 = puVar12 + 2;
      local_48 = JPH::BodyInterface::CreateConstraint
                           ((TwoBodyConstraintSettings *)pBVar1,pBVar3,(BodyID *)&local_50);
      JPH::ConstraintManager::Add((Constraint **)(param_1 + 0x2c8),(int)&local_48);
    } while (puVar13 != puVar12);
LAB_00100a08:
    uVar17 = 1;
  }
  else {
    puVar8 = (undefined4 *)(*Reallocate)(0,0);
    puVar9 = puVar6;
    puVar10 = puVar8;
    if (puVar6 == (undefined4 *)((long)puVar6 + lVar11)) {
      iVar16 = 0;
    }
    else {
      do {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = *puVar9;
        }
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      } while ((undefined4 *)((long)puVar6 + lVar11) != puVar9);
      iVar16 = (int)(lVar11 - 4U >> 2) + 1;
    }
    uVar7 = JPH::BodyInterface::AddBodiesPrepare((BodyID *)pBVar1,(int)puVar8);
    uVar17 = 0;
    JPH::BodyInterface::AddBodiesFinalize(pBVar1,puVar8,iVar16,uVar7,0);
    if (*(long *)(this + 0x38) + *(long *)(this + 8) == uVar19) {
      puVar12 = *(undefined8 **)(this + 0x30);
      puVar13 = puVar12 + *(long *)(this + 0x20) * 2;
      if (puVar13 != puVar12) goto LAB_001008c2;
      goto LAB_00100a08;
    }
  }
  if (puVar8 != (undefined4 *)0x0) {
    (*Free)(puVar8);
  }
LAB_00100a1c:
  if (puVar6 != (undefined4 *)0x0) {
    (*Free)(puVar6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PhysicsScene::SaveBinaryState(JPH::StreamOut&, bool, bool) const */

void JPH::PhysicsScene::SaveBinaryState(StreamOut *param_1,bool param_2,bool param_3)

{
  long lVar1;
  UnorderedMap *pUVar2;
  UnorderedMap *pUVar3;
  StreamOut *pSVar4;
  StreamOut *pSVar5;
  undefined8 *puVar6;
  undefined7 in_register_00000031;
  UnorderedMap *pUVar7;
  StreamOut *pSVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  pUVar7 = (UnorderedMap *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_cc = (undefined4)*(undefined8 *)(param_1 + 8);
  local_88 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  (**(code **)(*(long *)pUVar7 + 0x10))(pUVar7,&local_cc,4);
  pSVar4 = *(StreamOut **)(param_1 + 0x18);
  pSVar8 = pSVar4 + *(long *)(param_1 + 8) * 0x100;
  if (pSVar4 != pSVar8) {
    pUVar2 = (UnorderedMap *)0x0;
    pUVar3 = pUVar2;
    if (param_3) {
      pUVar2 = (UnorderedMap *)local_c8;
      pUVar3 = (UnorderedMap *)local_a8;
    }
    do {
      pSVar5 = pSVar4 + 0x100;
      JPH::BodyCreationSettings::SaveWithChildren(pSVar4,pUVar7,pUVar2,pUVar3);
      pSVar4 = pSVar5;
    } while (pSVar8 != pSVar5);
  }
  local_cc = (undefined4)*(undefined8 *)(param_1 + 0x20);
  (**(code **)(*(long *)pUVar7 + 0x10))(pUVar7,&local_cc,4);
  puVar6 = *(undefined8 **)(param_1 + 0x30);
  puVar9 = puVar6 + *(long *)(param_1 + 0x20) * 2;
  for (; puVar9 != puVar6; puVar6 = puVar6 + 2) {
    (**(code **)(*(long *)*puVar6 + 0x20))((long *)*puVar6,pUVar7);
    (**(code **)(*(long *)pUVar7 + 0x10))(pUVar7,puVar6 + 1,4);
    (**(code **)(*(long *)pUVar7 + 0x10))(pUVar7,(long)puVar6 + 0xc,4);
  }
  local_cc = (undefined4)*(undefined8 *)(param_1 + 0x38);
  (**(code **)(*(long *)pUVar7 + 0x10))(pUVar7,&local_cc,4);
  lVar1 = *(long *)(param_1 + 0x38);
  pSVar4 = *(StreamOut **)(param_1 + 0x48);
  if (pSVar4 + lVar1 * 0x70 != pSVar4) {
    pSVar8 = pSVar4;
    do {
      pSVar5 = pSVar8 + 0x70;
      JPH::SoftBodyCreationSettings::SaveWithChildren
                (pSVar8,pUVar7,(UnorderedMap *)local_68,(UnorderedMap *)local_a8);
      pSVar8 = pSVar5;
    } while (pSVar4 + lVar1 * 0x70 != pSVar5);
  }
  if (local_68._0_8_ != 0) {
    (*Free)();
  }
  if (local_88._0_8_ != 0) {
    (*Free)();
  }
  if (local_a8._0_8_ != 0) {
    (*Free)();
  }
  if (local_c8._0_8_ != 0) {
    (*Free)();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::PhysicsScene*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
    PhysicsScene::~PhysicsScene((PhysicsScene *)param_1);
                    /* WARNING: Could not recover jumptable at 0x00100d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::PhysicsScene::AddBody(JPH::BodyCreationSettings const&) */

void __thiscall JPH::PhysicsScene::AddBody(PhysicsScene *this,BodyCreationSettings *param_1)

{
  Array<JPH::BodyCreationSettings,JPH::STLAllocator<JPH::BodyCreationSettings>>::push_back
            ((Array<JPH::BodyCreationSettings,JPH::STLAllocator<JPH::BodyCreationSettings>> *)
             (this + 8),param_1);
  return;
}



/* JPH::PhysicsScene::AddConstraint(JPH::TwoBodyConstraintSettings const*, unsigned int, unsigned
   int) */

void __thiscall
JPH::PhysicsScene::AddConstraint
          (PhysicsScene *this,TwoBodyConstraintSettings *param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(this + 0x20);
  uVar3 = lVar1 + 1;
  if (*(ulong *)(this + 0x28) < uVar3) {
    uVar4 = *(ulong *)(this + 0x28) * 2;
    if (uVar4 < uVar3) {
      uVar4 = uVar3;
    }
    Array<JPH::PhysicsScene::ConnectedConstraint,JPH::STLAllocator<JPH::PhysicsScene::ConnectedConstraint>>
    ::reallocate((Array<JPH::PhysicsScene::ConnectedConstraint,JPH::STLAllocator<JPH::PhysicsScene::ConnectedConstraint>>
                  *)(this + 0x20),uVar4);
    lVar1 = *(long *)(this + 0x20);
    uVar3 = lVar1 + 1;
  }
  *(ulong *)(this + 0x20) = uVar3;
  puVar2 = (undefined8 *)(lVar1 * 0x10 + *(long *)(this + 0x30));
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_1;
    if (param_1 != (TwoBodyConstraintSettings *)0x0) {
      LOCK();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      UNLOCK();
    }
    *(uint *)(puVar2 + 1) = param_2;
    *(uint *)((long)puVar2 + 0xc) = param_3;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PhysicsScene::sRestoreFromBinaryState(JPH::StreamIn&) */

PhysicsScene * __thiscall
JPH::PhysicsScene::sRestoreFromBinaryState(PhysicsScene *this,StreamIn *param_1)

{
  SoftBodySharedSettings *pSVar1;
  SoftBodySharedSettings *pSVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  SoftBodySharedSettings *pSVar5;
  PhysicsScene *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined4 uVar13;
  PhysicsScene *this_01;
  long *plVar14;
  long *plVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined1 (*pauVar22) [16];
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long in_FS_OFFSET;
  uint local_1ec;
  undefined8 local_1e8;
  SoftBodySharedSettings *local_1e0;
  undefined1 local_1d8 [16];
  long *local_1c8;
  undefined1 local_1b8 [16];
  long *local_1a8;
  undefined1 local_198 [16];
  long *local_188;
  undefined1 local_178 [16];
  undefined8 *local_168;
  SoftBodySharedSettings *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  char local_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  long *local_118;
  undefined2 local_110;
  undefined6 uStack_10e;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined2 local_ec;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60;
  char local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x20] = (PhysicsScene)0x0;
  this_01 = (PhysicsScene *)(*Allocate)(0x50);
  *(undefined1 (*) [16])this_01 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_01 + 0x40) = (undefined1  [16])0x0;
  LOCK();
  *(int *)this_01 = *(int *)this_01 + 1;
  UNLOCK();
  local_1c8 = (long *)0x0;
  local_1a8 = (long *)0x0;
  local_188 = (long *)0x0;
  local_168 = (undefined8 *)0x0;
  local_1d8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  plVar14 = (long *)(*Allocate)(0x2000);
  if (local_1c8 != (long *)0x0) {
    if (plVar14 < local_1c8) {
      plVar21 = local_1c8;
      for (plVar15 = plVar14; plVar15 < plVar14 + local_1d8._0_8_; plVar15 = plVar15 + 1) {
        lVar4 = *plVar21;
        plVar21 = plVar21 + 1;
        *plVar15 = lVar4;
      }
    }
    else {
      plVar15 = local_1c8 + local_1d8._0_8_ + -1;
      plVar21 = plVar14 + local_1d8._0_8_ + -1;
      if (!CARRY8(local_1d8._0_8_ * 8 - 8,(ulong)plVar14)) {
        do {
          lVar4 = *plVar15;
          plVar18 = plVar21 + -1;
          plVar15 = plVar15 + -1;
          *plVar21 = lVar4;
          plVar21 = plVar18;
        } while (plVar14 <= plVar18);
        (*Free)();
        goto LAB_00100eda;
      }
    }
    (*Free)();
  }
LAB_00100eda:
  local_1d8._8_8_ = 0x400;
  local_1c8 = plVar14;
  if ((ulong)local_1b8._8_8_ < 0x80) {
    plVar14 = (long *)(*Allocate)(0x400);
    if (local_1a8 != (long *)0x0) {
      if (plVar14 < local_1a8) {
        plVar21 = local_1a8;
        for (plVar15 = plVar14; plVar15 < plVar14 + local_1b8._0_8_; plVar15 = plVar15 + 1) {
          lVar4 = *plVar21;
          plVar21 = plVar21 + 1;
          *plVar15 = lVar4;
        }
      }
      else {
        plVar15 = local_1a8 + local_1b8._0_8_ + -1;
        plVar21 = plVar14 + local_1b8._0_8_ + -1;
        if (!CARRY8(local_1b8._0_8_ * 8 - 8,(ulong)plVar14)) {
          do {
            lVar4 = *plVar15;
            plVar18 = plVar21 + -1;
            plVar15 = plVar15 + -1;
            *plVar21 = lVar4;
            plVar21 = plVar18;
          } while (plVar14 <= plVar18);
        }
      }
      (*Free)();
    }
    local_1b8._8_8_ = 0x80;
    local_1a8 = plVar14;
  }
  if ((ulong)local_198._8_8_ < 0x80) {
    plVar14 = (long *)(*Allocate)(0x400);
    if (local_188 != (long *)0x0) {
      if (plVar14 < local_188) {
        plVar21 = local_188;
        for (plVar15 = plVar14; plVar15 < plVar14 + local_198._0_8_; plVar15 = plVar15 + 1) {
          lVar4 = *plVar21;
          plVar21 = plVar21 + 1;
          *plVar15 = lVar4;
        }
      }
      else {
        plVar15 = local_188 + local_198._0_8_ + -1;
        plVar21 = plVar14 + local_198._0_8_ + -1;
        if (!CARRY8(local_198._0_8_ * 8 - 8,(ulong)plVar14)) {
          do {
            lVar4 = *plVar15;
            plVar18 = plVar21 + -1;
            plVar15 = plVar15 + -1;
            *plVar21 = lVar4;
            plVar21 = plVar18;
          } while (plVar14 <= plVar18);
        }
      }
      (*Free)();
    }
    local_198._8_8_ = 0x80;
    local_188 = plVar14;
  }
  local_1ec = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_1ec,4);
  uVar26 = (ulong)local_1ec;
  uVar25 = *(ulong *)(this_01 + 8);
  if (uVar26 < uVar25) {
    lVar4 = *(long *)(this_01 + 0x18);
    for (uVar24 = lVar4 + uVar26 * 0x100; uVar24 < lVar4 + uVar25 * 0x100; uVar24 = uVar24 + 0x100)
    {
      plVar14 = *(long **)(uVar24 + 0xf8);
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar15 = plVar14 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
      plVar14 = *(long **)(uVar24 + 0xf0);
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar15 = plVar14 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)(*plVar14 + 0x18))();
        }
      }
      plVar14 = *(long **)(uVar24 + 0x50);
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar15 = plVar14 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)(*plVar14 + 0x18))();
        }
      }
    }
  }
  if (*(ulong *)(this_01 + 0x10) < uVar26) {
    Array<JPH::BodyCreationSettings,JPH::STLAllocator<JPH::BodyCreationSettings>>::reallocate
              ((Array<JPH::BodyCreationSettings,JPH::STLAllocator<JPH::BodyCreationSettings>> *)
               (this_01 + 8),uVar26);
  }
  pauVar22 = *(undefined1 (**) [16])(this_01 + 0x18);
  pauVar3 = pauVar22 + uVar26 * 0x10;
  pauVar16 = pauVar22 + *(long *)(this_01 + 8) * 0x10;
  if ((pauVar16 < pauVar3) &&
     ((pauVar16 != (undefined1 (*) [16])0x0 ||
      (pauVar16 = (undefined1 (*) [16])0x100, (undefined1 (*) [16])0x100 < pauVar3)))) {
    do {
      uVar12 = _LC11;
      uVar7 = __LC5;
      uVar6 = CONCAT44(_LC15._4_4_,(undefined4)_LC15);
      *pauVar16 = (undefined1  [16])0x0;
      pauVar17 = pauVar16 + 0x10;
      *(undefined8 *)pauVar16[1] = uVar7;
      *(undefined8 *)(pauVar16[1] + 8) = uVar6;
      uVar7 = _UNK_00103e68;
      uVar6 = __LC10;
      pauVar16[2] = (undefined1  [16])0x0;
      *(undefined8 *)(pauVar16[6] + 0xc) = uVar6;
      *(undefined8 *)(pauVar16[7] + 4) = uVar7;
      uVar13 = _LC15._4_4_;
      pauVar16[3] = (undefined1  [16])0x0;
      pauVar16[0xb] = (undefined1  [16])0x0;
      pauVar16[0xc] = (undefined1  [16])0x0;
      pauVar16[0xd] = (undefined1  [16])0x0;
      pauVar16[0xe] = (undefined1  [16])0x0;
      *(undefined8 *)pauVar16[4] = 0;
      *(undefined2 *)(pauVar16[4] + 8) = 0;
      *(undefined8 *)pauVar16[5] = 0;
      *(undefined8 *)(pauVar16[5] + 8) = 0xffffffffffffffff;
      *(undefined2 *)pauVar16[6] = 0x3f02;
      *(undefined4 *)(pauVar16[6] + 2) = 0x1000000;
      pauVar16[6][6] = 0;
      pauVar16[6][7] = 0;
      *(undefined2 *)(pauVar16[6] + 8) = 0x100;
      *(undefined8 *)(pauVar16[7] + 0xc) = uVar12;
      *(undefined4 *)(pauVar16[8] + 4) = uVar13;
      *(undefined8 *)(pauVar16[8] + 8) = 0;
      pauVar16[9][0] = 0;
      *(undefined4 *)(pauVar16[9] + 4) = uVar13;
      *(undefined4 *)pauVar16[10] = 0;
      pauVar16[0xf] = (undefined1  [16])0x0;
      pauVar16 = pauVar17;
    } while (pauVar17 < pauVar3);
  }
  *(ulong *)(this_01 + 8) = uVar26;
  if (pauVar22 != pauVar3) {
LAB_001010fd:
    do {
      JPH::BodyCreationSettings::sRestoreWithChildren
                ((StreamIn *)&local_158,(Array *)param_1,(Array *)local_1d8,(Array *)local_1b8);
      if (local_58 == '\x02') {
        local_1e8 = uStack_150;
        local_1e0 = local_158;
        Result<JPH::Ref<JPH::PhysicsScene>>::SetError
                  ((Result<JPH::Ref<JPH::PhysicsScene>> *)this,(basic_string_view *)&local_1e8);
        uStack_e8._0_1_ = local_58;
        if (local_58 == '\x01') {
          if (local_60 != (long *)0x0) {
            LOCK();
            plVar14 = local_60 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)(*local_60 + 8))();
            }
          }
          if (local_68 != (long *)0x0) {
            LOCK();
            plVar14 = local_68 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)(*local_68 + 0x18))();
            }
          }
          local_158 = (SoftBodySharedSettings *)CONCAT44(uStack_104,local_108);
joined_r0x00101ec3:
          if (local_158 != (SoftBodySharedSettings *)0x0) {
            LOCK();
            pSVar2 = local_158 + 8;
            *(int *)pSVar2 = *(int *)pSVar2 + -1;
            UNLOCK();
            if (*(int *)pSVar2 == 0) {
              (**(code **)(*(long *)local_158 + 0x18))();
            }
          }
          goto LAB_0010177d;
        }
        goto LAB_0010175e;
      }
      plVar14 = *(long **)pauVar22[5];
      *(SoftBodySharedSettings **)*pauVar22 = local_158;
      *(undefined8 *)(*pauVar22 + 8) = uStack_150;
      *(undefined8 *)pauVar22[1] = local_148;
      *(undefined8 *)(pauVar22[1] + 8) = uStack_140;
      *(ulong *)pauVar22[2] = CONCAT71(uStack_137,local_138);
      *(undefined8 *)(pauVar22[2] + 8) = uStack_130;
      *(long **)pauVar22[4] = local_118;
      *(undefined8 *)pauVar22[3] = local_128;
      *(ulong *)(pauVar22[3] + 8) = CONCAT62(uStack_11e,uStack_120);
      *(undefined2 *)(pauVar22[4] + 8) = local_110;
      plVar15 = (long *)CONCAT44(uStack_104,local_108);
      if (plVar14 != plVar15) {
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar15 = plVar14 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)(*plVar14 + 0x18))();
          }
          plVar15 = (long *)CONCAT44(uStack_104,local_108);
        }
        *(long **)pauVar22[5] = plVar15;
        if (plVar15 != (long *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
      }
      *(ulong *)(pauVar22[5] + 8) = CONCAT44(uStack_fc,uStack_100);
      *(undefined2 *)pauVar22[6] = uStack_f8;
      *(uint *)(pauVar22[6] + 2) = CONCAT22(uStack_f4,uStack_f6);
      pauVar22[6][6] = local_f2;
      pauVar22[6][7] = local_f1;
      *(ulong *)(pauVar22[6] + 0xc) =
           CONCAT44(uStack_e8,CONCAT13(uStack_e9,CONCAT12(uStack_ea,local_ec)));
      *(undefined8 *)(pauVar22[7] + 4) = uStack_e4;
      *(undefined2 *)(pauVar22[6] + 8) = local_f0;
      *(undefined8 *)(pauVar22[7] + 0xc) = local_dc;
      *(undefined8 *)(pauVar22[8] + 8) = local_d0;
      *(undefined4 *)(pauVar22[8] + 4) = local_d4;
      pauVar22[9][0] = local_c8;
      *(undefined4 *)(pauVar22[9] + 4) = local_c4;
      *(undefined8 *)pauVar22[10] = local_b8;
      *(undefined8 *)(pauVar22[10] + 8) = uStack_b0;
      *(undefined8 *)pauVar22[0xb] = local_a8;
      *(undefined8 *)(pauVar22[0xb] + 8) = uStack_a0;
      *(undefined8 *)pauVar22[0xc] = local_98;
      *(undefined8 *)(pauVar22[0xc] + 8) = uStack_90;
      *(undefined8 *)pauVar22[0xd] = local_88;
      *(undefined8 *)(pauVar22[0xd] + 8) = uStack_80;
      plVar14 = *(long **)pauVar22[0xf];
      *(undefined8 *)pauVar22[0xe] = local_78;
      *(undefined8 *)(pauVar22[0xe] + 8) = uStack_70;
      if (plVar14 != local_68) {
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar15 = plVar14 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)(*plVar14 + 0x18))();
          }
        }
        *(long **)pauVar22[0xf] = local_68;
        if (local_68 != (long *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = (int)local_68[1] + 1;
          UNLOCK();
        }
      }
      plVar14 = *(long **)(pauVar22[0xf] + 8);
      if (plVar14 != local_60) {
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar15 = plVar14 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)(*plVar14 + 8))();
          }
        }
        *(long **)(pauVar22[0xf] + 8) = local_60;
        if (local_60 != (long *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
      }
      if (local_58 != '\x01') {
        if ((local_58 == '\x02') && (local_158 != (SoftBodySharedSettings *)&local_148)) {
          (*Free)();
        }
LAB_001010ed:
        pauVar22 = pauVar22 + 0x10;
        if (pauVar3 == pauVar22) break;
        goto LAB_001010fd;
      }
      if (local_60 != (long *)0x0) {
        LOCK();
        plVar14 = local_60 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)(*local_60 + 8))();
        }
      }
      if (local_68 != (long *)0x0) {
        LOCK();
        plVar14 = local_68 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)(*local_68 + 0x18))();
        }
      }
      plVar14 = (long *)CONCAT44(uStack_104,local_108);
      if (plVar14 == (long *)0x0) goto LAB_001010ed;
      LOCK();
      plVar15 = plVar14 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 != 0) goto LAB_001010ed;
      pauVar22 = pauVar22 + 0x10;
      (**(code **)(*plVar14 + 0x18))();
    } while (pauVar3 != pauVar22);
  }
  local_1ec = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_1ec,4);
  uVar26 = (ulong)local_1ec;
  uVar25 = *(ulong *)(this_01 + 0x20);
  if (uVar26 < uVar25) {
    lVar4 = *(long *)(this_01 + 0x30);
    for (plVar14 = (long *)(lVar4 + uVar26 * 0x10); plVar14 < (long *)(lVar4 + uVar25 * 0x10);
        plVar14 = plVar14 + 2) {
      plVar15 = (long *)*plVar14;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar21 = plVar15 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)(*plVar15 + 0x18))();
        }
      }
    }
  }
  if (*(ulong *)(this_01 + 0x28) < uVar26) {
    Array<JPH::PhysicsScene::ConnectedConstraint,JPH::STLAllocator<JPH::PhysicsScene::ConnectedConstraint>>
    ::reallocate((Array<JPH::PhysicsScene::ConnectedConstraint,JPH::STLAllocator<JPH::PhysicsScene::ConnectedConstraint>>
                  *)(this_01 + 0x20),uVar26);
  }
  puVar23 = *(undefined8 **)(this_01 + 0x30);
  puVar19 = puVar23 + uVar26 * 2;
  puVar27 = puVar23 + *(long *)(this_01 + 0x20) * 2;
  if (puVar27 < puVar19) {
    if (puVar27 == (undefined8 *)0x0) goto LAB_001013e7;
    do {
      *puVar27 = 0;
LAB_001013e7:
      puVar27 = puVar27 + 2;
    } while (puVar27 < puVar19);
  }
  *(ulong *)(this_01 + 0x20) = uVar26;
joined_r0x00101407:
  if (puVar23 != puVar19) {
    do {
      JPH::ConstraintSettings::sRestoreFromBinaryState((StreamIn *)&local_158);
      pSVar2 = local_158;
      if (local_138 == '\x02') {
        local_1e8 = uStack_150;
        local_1e0 = local_158;
        Result<JPH::Ref<JPH::PhysicsScene>>::SetError
                  ((Result<JPH::Ref<JPH::PhysicsScene>> *)this,(basic_string_view *)&local_1e8);
        uStack_e8._0_1_ = local_138;
        if (local_138 == '\x01') goto joined_r0x00101ec3;
        goto LAB_0010175e;
      }
      pSVar5 = (SoftBodySharedSettings *)*puVar23;
      if (local_158 != pSVar5) {
        if (pSVar5 != (SoftBodySharedSettings *)0x0) {
          LOCK();
          pSVar1 = pSVar5 + 8;
          *(int *)pSVar1 = *(int *)pSVar1 + -1;
          UNLOCK();
          if (*(int *)pSVar1 == 0) {
            (**(code **)(*(long *)pSVar5 + 0x18))();
          }
        }
        *puVar23 = pSVar2;
        if (pSVar2 != (SoftBodySharedSettings *)0x0) {
          LOCK();
          *(int *)(pSVar2 + 8) = *(int *)(pSVar2 + 8) + 1;
          UNLOCK();
        }
      }
      (**(code **)(*(long *)param_1 + 0x10))(param_1,puVar23 + 1,4);
      (**(code **)(*(long *)param_1 + 0x10))(param_1,(long)puVar23 + 0xc,4);
      if (local_138 == '\x01') {
        if (local_158 != (SoftBodySharedSettings *)0x0) {
          LOCK();
          pSVar2 = local_158 + 8;
          *(int *)pSVar2 = *(int *)pSVar2 + -1;
          UNLOCK();
          if (*(int *)pSVar2 == 0) goto code_r0x001014de;
        }
      }
      else if ((local_138 == '\x02') && (local_158 != (SoftBodySharedSettings *)&local_148)) {
        (*Free)();
      }
      puVar23 = puVar23 + 2;
      if (puVar19 == puVar23) break;
    } while( true );
  }
  local_1ec = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_1ec,4);
  uVar25 = (ulong)local_1ec;
  if (uVar25 < *(ulong *)(this_01 + 0x38)) {
    puVar23 = (undefined8 *)(*(long *)(this_01 + 0x48) + uVar25 * 0x70);
    puVar27 = (undefined8 *)(*(long *)(this_01 + 0x48) + *(ulong *)(this_01 + 0x38) * 0x70);
joined_r0x00101559:
    if (puVar23 < puVar27) {
      do {
        plVar14 = (long *)puVar23[8];
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar15 = plVar14 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)(*plVar14 + 0x18))();
          }
        }
        pSVar2 = (SoftBodySharedSettings *)*puVar23;
        if (pSVar2 != (SoftBodySharedSettings *)0x0) {
          LOCK();
          *(int *)pSVar2 = *(int *)pSVar2 + -1;
          UNLOCK();
          if (*(int *)pSVar2 == 0) goto LAB_00101e40;
        }
        puVar23 = puVar23 + 0xe;
        if (puVar27 <= puVar23) break;
      } while( true );
    }
  }
  if (*(ulong *)(this_01 + 0x40) < uVar25) {
    Array<JPH::SoftBodyCreationSettings,JPH::STLAllocator<JPH::SoftBodyCreationSettings>>::
    reallocate((Array<JPH::SoftBodyCreationSettings,JPH::STLAllocator<JPH::SoftBodyCreationSettings>>
                *)(this_01 + 0x38),uVar25);
  }
  puVar27 = *(undefined8 **)(this_01 + 0x48);
  puVar23 = puVar27 + uVar25 * 0xe;
  puVar19 = puVar27 + *(long *)(this_01 + 0x38) * 0xe;
  if ((puVar19 < puVar23) &&
     ((puVar19 != (undefined8 *)0x0 || (puVar19 = (undefined8 *)0x70, (undefined8 *)0x70 < puVar23))
     )) {
    do {
      *(undefined1 *)((long)puVar19 + 0x6e) = 1;
      *(undefined1 (*) [16])(puVar19 + 2) = (undefined1  [16])0x0;
      uVar12 = __LC5;
      uVar7 = CONCAT44(_LC15._4_4_,(undefined4)_LC15);
      puVar20 = puVar19 + 0xe;
      *(undefined2 *)(puVar19 + 7) = 0;
      uVar6 = CONCAT44(_LC15._4_4_,(undefined4)_LC15);
      puVar19[4] = uVar12;
      puVar19[5] = uVar7;
      uVar12 = _UNK_00103e78;
      uVar7 = __LC14;
      *puVar19 = 0;
      puVar19[6] = 0;
      puVar19[8] = 0;
      puVar19[9] = 0xffffffffffffffff;
      *(undefined4 *)(puVar19 + 10) = 5;
      *(undefined8 *)((long)puVar19 + 0x54) = uVar7;
      *(undefined8 *)((long)puVar19 + 0x5c) = uVar12;
      *(undefined8 *)((long)puVar19 + 100) = uVar6;
      *(undefined2 *)((long)puVar19 + 0x6c) = 0x101;
      puVar19 = puVar20;
    } while (puVar20 < puVar23);
  }
  *(ulong *)(this_01 + 0x38) = uVar25;
  if (puVar27 == puVar23) {
LAB_00101dd5:
    if (this[0x20] == (PhysicsScene)0x1) {
      this_00 = *(PhysicsScene **)this;
      if (this_00 == (PhysicsScene *)0x0) goto LAB_00101df3;
      LOCK();
      *(int *)this_00 = *(int *)this_00 + -1;
      UNLOCK();
      if (*(int *)this_00 != 0) goto LAB_00101df3;
      ~PhysicsScene(this_00);
      (*Free)(this_00);
      this[0x20] = (PhysicsScene)0x0;
      *(PhysicsScene **)this = this_01;
    }
    else {
      if ((this[0x20] == (PhysicsScene)0x2) && (*(PhysicsScene **)this != this + 0x10)) {
        (*Free)();
      }
LAB_00101df3:
      this[0x20] = (PhysicsScene)0x0;
      *(PhysicsScene **)this = this_01;
    }
    LOCK();
    *(int *)this_01 = *(int *)this_01 + 1;
    UNLOCK();
    this[0x20] = (PhysicsScene)0x1;
  }
  else {
    while( true ) {
      JPH::SoftBodyCreationSettings::sRestoreWithChildren
                ((StreamIn *)&local_158,(Array *)param_1,(Array *)local_178,(Array *)local_1b8);
      if ((char)uStack_e8 == '\x02') break;
      pSVar2 = (SoftBodySharedSettings *)*puVar27;
      if (pSVar2 != local_158) {
        if (pSVar2 != (SoftBodySharedSettings *)0x0) {
          LOCK();
          *(int *)pSVar2 = *(int *)pSVar2 + -1;
          UNLOCK();
          if (*(int *)pSVar2 == 0) {
            SoftBodySharedSettings::~SoftBodySharedSettings(pSVar2);
            (*Free)(pSVar2);
          }
        }
        *puVar27 = local_158;
        if (local_158 != (SoftBodySharedSettings *)0x0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + 1;
          UNLOCK();
        }
      }
      plVar14 = (long *)puVar27[8];
      puVar27[6] = local_128;
      puVar27[2] = local_148;
      puVar27[3] = uStack_140;
      *(undefined2 *)(puVar27 + 7) = uStack_120;
      puVar27[4] = CONCAT71(uStack_137,local_138);
      puVar27[5] = uStack_130;
      if (plVar14 != local_118) {
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar15 = plVar14 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)(*plVar14 + 0x18))();
          }
        }
        puVar27[8] = local_118;
        if (local_118 != (long *)0x0) {
          LOCK();
          *(int *)(local_118 + 1) = (int)local_118[1] + 1;
          UNLOCK();
        }
      }
      puVar27[9] = CONCAT62(uStack_10e,local_110);
      *(ulong *)((long)puVar27 + 0x54) = CONCAT44(uStack_100,uStack_104);
      *(ulong *)((long)puVar27 + 0x5c) = CONCAT26(uStack_f6,CONCAT24(uStack_f8,uStack_fc));
      *(undefined4 *)(puVar27 + 10) = local_108;
      *(ulong *)((long)puVar27 + 100) =
           CONCAT26(uStack_ee,CONCAT24(local_f0,CONCAT13(local_f1,CONCAT12(local_f2,uStack_f4))));
      *(undefined2 *)((long)puVar27 + 0x6c) = local_ec;
      *(undefined1 *)((long)puVar27 + 0x6e) = uStack_ea;
      if ((char)uStack_e8 == '\x01') {
        if (local_118 != (long *)0x0) {
          LOCK();
          plVar14 = local_118 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)(*local_118 + 0x18))();
          }
        }
        pSVar2 = local_158;
        if (local_158 != (SoftBodySharedSettings *)0x0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          UNLOCK();
          if (*(int *)local_158 == 0) {
            SoftBodySharedSettings::~SoftBodySharedSettings(local_158);
            (*Free)(pSVar2);
          }
        }
      }
      else if (((char)uStack_e8 == '\x02') && (local_158 != (SoftBodySharedSettings *)&local_148)) {
        (*Free)();
      }
      puVar27 = puVar27 + 0xe;
      if (puVar23 == puVar27) goto LAB_00101dd5;
    }
    local_1e8 = uStack_150;
    local_1e0 = local_158;
    Result<JPH::Ref<JPH::PhysicsScene>>::SetError
              ((Result<JPH::Ref<JPH::PhysicsScene>> *)this,(basic_string_view *)&local_1e8);
    if ((char)uStack_e8 == '\x01') {
      if (local_118 != (long *)0x0) {
        LOCK();
        plVar14 = local_118 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)(*local_118 + 0x18))();
        }
      }
      if (local_158 != (SoftBodySharedSettings *)0x0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        UNLOCK();
        if (*(int *)local_158 == 0) {
          SoftBodySharedSettings::~SoftBodySharedSettings(local_158);
          (*Free)(local_158);
        }
      }
    }
    else {
LAB_0010175e:
      if (((char)uStack_e8 == '\x02') && (local_158 != (SoftBodySharedSettings *)&local_148)) {
        (*Free)();
      }
    }
  }
LAB_0010177d:
  if (local_168 != (undefined8 *)0x0) {
    if (local_178._0_8_ != 0) {
      puVar23 = local_168 + local_178._0_8_;
      puVar27 = local_168;
joined_r0x0010179e:
      if (puVar27 < puVar23) {
        do {
          pSVar2 = (SoftBodySharedSettings *)*puVar27;
          if (pSVar2 != (SoftBodySharedSettings *)0x0) {
            LOCK();
            *(int *)pSVar2 = *(int *)pSVar2 + -1;
            UNLOCK();
            if (*(int *)pSVar2 == 0) goto code_r0x001017c1;
          }
          puVar27 = puVar27 + 1;
          if (puVar23 <= puVar27) break;
        } while( true );
      }
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_178._8_8_;
    local_178 = auVar8 << 0x40;
    (*Free)(local_168);
  }
  if (local_188 != (long *)0x0) {
    if (local_198._0_8_ != 0) {
      plVar14 = local_188 + local_198._0_8_;
      plVar15 = local_188;
joined_r0x0010181e:
      if (plVar15 < plVar14) {
        do {
          plVar21 = (long *)*plVar15;
          if (plVar21 != (long *)0x0) {
            LOCK();
            plVar18 = plVar21 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) goto code_r0x00101840;
          }
          plVar15 = plVar15 + 1;
          if (plVar14 <= plVar15) break;
        } while( true );
      }
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_198._8_8_;
    local_198 = auVar9 << 0x40;
    (*Free)(local_188);
  }
  if (local_1a8 != (long *)0x0) {
    if (local_1b8._0_8_ != 0) {
      plVar14 = local_1a8 + local_1b8._0_8_;
      plVar15 = local_1a8;
joined_r0x0010188f:
      if (plVar15 < plVar14) {
        do {
          plVar21 = (long *)*plVar15;
          if (plVar21 != (long *)0x0) {
            LOCK();
            plVar18 = plVar21 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              if (*(code **)(*plVar21 + 0x18) == PhysicsMaterial::~PhysicsMaterial)
              goto code_r0x001018c8;
              (**(code **)(*plVar21 + 0x18))();
            }
          }
          plVar15 = plVar15 + 1;
          if (plVar14 <= plVar15) break;
        } while( true );
      }
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_1b8._8_8_;
    local_1b8 = auVar10 << 0x40;
    (*Free)(local_1a8);
  }
  if (local_1c8 != (long *)0x0) {
    if (local_1d8._0_8_ != 0) {
      plVar14 = local_1c8 + local_1d8._0_8_;
      plVar15 = local_1c8;
joined_r0x00101915:
      if (plVar15 < plVar14) {
        do {
          plVar21 = (long *)*plVar15;
          if (plVar21 != (long *)0x0) {
            LOCK();
            plVar18 = plVar21 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) goto code_r0x00101938;
          }
          plVar15 = plVar15 + 1;
          if (plVar14 <= plVar15) break;
        } while( true );
      }
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_1d8._8_8_;
    local_1d8 = auVar11 << 0x40;
    (*Free)(local_1c8);
  }
  LOCK();
  *(int *)this_01 = *(int *)this_01 + -1;
  UNLOCK();
  if (*(int *)this_01 == 0) {
    ~PhysicsScene(this_01);
    (*Free)(this_01);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001014de:
  puVar23 = puVar23 + 2;
  (**(code **)(*(long *)local_158 + 0x18))();
  goto joined_r0x00101407;
LAB_00101e40:
  puVar23 = puVar23 + 0xe;
  SoftBodySharedSettings::~SoftBodySharedSettings(pSVar2);
  (*Free)(pSVar2);
  goto joined_r0x00101559;
code_r0x001017c1:
  puVar27 = puVar27 + 1;
  SoftBodySharedSettings::~SoftBodySharedSettings(pSVar2);
  (*Free)(pSVar2);
  goto joined_r0x0010179e;
code_r0x00101840:
  plVar15 = plVar15 + 1;
  (**(code **)(*plVar21 + 0x18))();
  goto joined_r0x0010181e;
code_r0x001018c8:
  (*Free)();
  plVar15 = plVar15 + 1;
  goto joined_r0x0010188f;
code_r0x00101938:
  plVar15 = plVar15 + 1;
  (**(code **)(*plVar21 + 8))();
  goto joined_r0x00101915;
}



/* JPH::PhysicsScene::AddSoftBody(JPH::SoftBodyCreationSettings const&) */

void __thiscall JPH::PhysicsScene::AddSoftBody(PhysicsScene *this,SoftBodyCreationSettings *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = *(long *)(this + 0x38);
  uVar8 = lVar10 + 1;
  if (*(ulong *)(this + 0x40) < uVar8) {
    uVar11 = *(ulong *)(this + 0x40) * 2;
    if (uVar11 < uVar8) {
      uVar11 = uVar8;
    }
    Array<JPH::SoftBodyCreationSettings,JPH::STLAllocator<JPH::SoftBodyCreationSettings>>::
    reallocate((Array<JPH::SoftBodyCreationSettings,JPH::STLAllocator<JPH::SoftBodyCreationSettings>>
                *)(this + 0x38),uVar11);
    lVar10 = *(long *)(this + 0x38);
    uVar8 = lVar10 + 1;
  }
  *(ulong *)(this + 0x38) = uVar8;
  puVar9 = (undefined8 *)(lVar10 * 0x70 + *(long *)(this + 0x48));
  if (puVar9 != (undefined8 *)0x0) {
    piVar3 = *(int **)param_1;
    *puVar9 = piVar3;
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puVar9[6] = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined2 *)(param_1 + 0x38);
    puVar9[2] = uVar4;
    puVar9[3] = uVar5;
    *(undefined2 *)(puVar9 + 7) = uVar1;
    lVar10 = *(long *)(param_1 + 0x40);
    puVar9[4] = uVar6;
    puVar9[5] = uVar7;
    puVar9[8] = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x54);
    uVar5 = *(undefined8 *)(param_1 + 0x5c);
    puVar9[9] = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined8 *)((long)puVar9 + 0x54) = uVar4;
    *(undefined8 *)((long)puVar9 + 0x5c) = uVar5;
    *(undefined4 *)(puVar9 + 10) = uVar2;
    *(undefined8 *)((long)puVar9 + 100) = *(undefined8 *)(param_1 + 100);
    *(undefined2 *)((long)puVar9 + 0x6c) = *(undefined2 *)(param_1 + 0x6c);
    *(SoftBodyCreationSettings *)((long)puVar9 + 0x6e) = param_1[0x6e];
  }
  return;
}



/* JPH::PhysicsScene::FromPhysicsSystem(JPH::PhysicsSystem const*) */

void __thiscall JPH::PhysicsScene::FromPhysicsSystem(PhysicsScene *this,PhysicsSystem *param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  BodyID *pBVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  long lVar28;
  long *plVar29;
  undefined1 auVar30 [16];
  SoftBodySharedSettings *pSVar31;
  bool bVar32;
  uint uVar33;
  int iVar34;
  ulong uVar35;
  long lVar36;
  undefined8 *puVar37;
  long *plVar38;
  uint uVar39;
  uint *puVar40;
  byte *pbVar41;
  long lVar42;
  long *plVar43;
  uint uVar44;
  byte *pbVar45;
  uint uVar46;
  int *piVar47;
  uint uVar48;
  BodyID *pBVar49;
  long in_FS_OFFSET;
  byte bVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined1 auStack_1a8 [16];
  BodyID *pBStack_198;
  undefined8 local_188;
  long *plStack_178;
  undefined1 local_168 [16];
  undefined8 local_158;
  int local_150;
  SoftBodySharedSettings *apSStack_148 [2];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined2 uStack_dc;
  undefined1 uStack_da;
  long *plStack_58;
  long *plStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_168 = (undefined1  [16])0x0;
  local_150 = 0xe;
  local_158 = _LC21;
  local_168._0_8_ = (*Allocate)(0x9f);
  local_168._8_8_ = local_168._0_8_ + (ulong)local_158._4_4_ * 8;
  memset((void *)local_168._8_8_,0,(ulong)(local_158._4_4_ + 0xf));
  local_188 = CONCAT44(local_188._4_4_,0xffffffff);
  uVar35 = 0xcbf29ce484222325;
  puVar40 = (uint *)&local_188;
  do {
    uVar44 = *puVar40;
    puVar40 = (uint *)((long)puVar40 + 1);
    uVar35 = (uVar35 ^ (byte)uVar44) * 0x100000001b3;
  } while (puVar40 != (uint *)((long)&local_188 + 4));
  uVar48 = 0xffffffff;
  uVar44 = local_158._4_4_ - 1;
  bVar50 = (byte)uVar35 | 0x80;
  uVar46 = (uint)(uVar35 >> 7);
  while( true ) {
    uVar46 = uVar46 & uVar44;
    pbVar41 = (byte *)(local_168._8_8_ + (ulong)uVar46);
    bVar13 = *pbVar41;
    bVar9 = pbVar41[1];
    bVar14 = pbVar41[2];
    bVar15 = pbVar41[3];
    bVar16 = pbVar41[4];
    bVar17 = pbVar41[5];
    bVar18 = pbVar41[6];
    bVar19 = pbVar41[7];
    bVar20 = pbVar41[8];
    bVar21 = pbVar41[9];
    bVar22 = pbVar41[10];
    bVar23 = pbVar41[0xb];
    bVar24 = pbVar41[0xc];
    bVar25 = pbVar41[0xd];
    bVar26 = pbVar41[0xe];
    bVar27 = pbVar41[0xf];
    auVar54[0] = -(bVar50 == bVar13);
    auVar54[1] = -(bVar50 == bVar9);
    auVar54[2] = -(bVar50 == bVar14);
    auVar54[3] = -(bVar50 == bVar15);
    auVar54[4] = -(bVar50 == bVar16);
    auVar54[5] = -(bVar50 == bVar17);
    auVar54[6] = -(bVar50 == bVar18);
    auVar54[7] = -(bVar50 == bVar19);
    auVar54[8] = -(bVar50 == bVar20);
    auVar54[9] = -(bVar50 == bVar21);
    auVar54[10] = -(bVar50 == bVar22);
    auVar54[0xb] = -(bVar50 == bVar23);
    auVar54[0xc] = -(bVar50 == bVar24);
    auVar54[0xd] = -(bVar50 == bVar25);
    auVar54[0xe] = -(bVar50 == bVar26);
    auVar54[0xf] = -(bVar50 == bVar27);
    uVar10 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf;
    uVar39 = (uint)uVar10;
    uVar33 = uVar46;
    if (uVar10 != 0) {
      do {
        iVar34 = 0;
        for (uVar11 = uVar39; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          iVar34 = iVar34 + 1;
        }
        uVar33 = uVar33 + iVar34 & uVar44;
        piVar47 = (int *)(local_168._0_8_ + (ulong)uVar33 * 8);
        if (*piVar47 == -1) goto LAB_001022a2;
        bVar8 = (char)iVar34 + 1U & 0x1f;
        uVar11 = uVar39 >> bVar8;
        uVar39 = uVar39 >> bVar8;
        uVar33 = uVar33 + 1;
      } while (uVar11 != 0);
    }
    if (uVar48 == 0xffffffff) {
      auVar57[0] = -(bVar13 == _LC20);
      auVar57[1] = -(bVar9 == UNK_00103e81);
      auVar57[2] = -(bVar14 == UNK_00103e82);
      auVar57[3] = -(bVar15 == UNK_00103e83);
      auVar57[4] = -(bVar16 == UNK_00103e84);
      auVar57[5] = -(bVar17 == UNK_00103e85);
      auVar57[6] = -(bVar18 == UNK_00103e86);
      auVar57[7] = -(bVar19 == UNK_00103e87);
      auVar57[8] = -(bVar20 == UNK_00103e88);
      auVar57[9] = -(bVar21 == UNK_00103e89);
      auVar57[10] = -(bVar22 == UNK_00103e8a);
      auVar57[0xb] = -(bVar23 == UNK_00103e8b);
      auVar57[0xc] = -(bVar24 == UNK_00103e8c);
      auVar57[0xd] = -(bVar25 == UNK_00103e8d);
      auVar57[0xe] = -(bVar26 == UNK_00103e8e);
      auVar57[0xf] = -(bVar27 == UNK_00103e8f);
      iVar34 = 0;
      uVar39 = (uint)(ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar57[0xf] >> 7) << 0xf);
      for (uVar33 = uVar39; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
        iVar34 = iVar34 + 1;
      }
      if (uVar39 != 0) {
        uVar48 = iVar34 + uVar46;
      }
    }
    auVar53[0] = -(bVar13 == 0);
    auVar53[1] = -(bVar9 == 0);
    auVar53[2] = -(bVar14 == 0);
    auVar53[3] = -(bVar15 == 0);
    auVar53[4] = -(bVar16 == 0);
    auVar53[5] = -(bVar17 == 0);
    auVar53[6] = -(bVar18 == 0);
    auVar53[7] = -(bVar19 == 0);
    auVar53[8] = -(bVar20 == 0);
    auVar53[9] = -(bVar21 == 0);
    auVar53[10] = -(bVar22 == 0);
    auVar53[0xb] = -(bVar23 == 0);
    auVar53[0xc] = -(bVar24 == 0);
    auVar53[0xd] = -(bVar25 == 0);
    auVar53[0xe] = -(bVar26 == 0);
    auVar53[0xf] = -(bVar27 == 0);
    uVar10 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe | (ushort)(auVar53[0xf] >> 7) << 0xf;
    if (uVar10 != 0) break;
    uVar46 = uVar46 + 0x10;
  }
  if (uVar48 == 0xffffffff) {
    iVar34 = 0;
    for (uVar48 = (uint)uVar10; (uVar48 & 1) == 0; uVar48 = uVar48 >> 1 | 0x80000000) {
      iVar34 = iVar34 + 1;
    }
    local_150 = local_150 + -1;
    uVar48 = iVar34 + uVar46;
  }
  uVar44 = uVar44 & uVar48;
  *(byte *)(local_168._8_8_ + (ulong)uVar44) = bVar50;
  *(byte *)(local_168._8_8_ + (ulong)((local_158._4_4_ - 1 & uVar44 - 0xf) + 0xf)) = bVar50;
  local_158 = CONCAT44(local_158._4_4_,(int)local_158 + 1);
  piVar47 = (int *)(local_168._0_8_ + (ulong)uVar44 * 8);
  *(undefined8 *)piVar47 = _LC22;
LAB_001022a2:
  piVar47[1] = -1;
  pBStack_198 = (BodyID *)0x0;
  auStack_1a8 = (undefined1  [16])0x0;
  JPH::BodyManager::GetBodyIDs((Array *)(param_1 + 0x10));
  pBVar3 = pBStack_198 + auStack_1a8._0_8_ * 4;
  for (pBVar49 = pBStack_198; pBVar49 != pBVar3; pBVar49 = pBVar49 + 4) {
    if (*(int *)pBVar49 != -1) {
      lVar36 = (**(code **)(*(long *)(param_1 + 0x130) + 0x10))(param_1 + 0x130,pBVar49);
      uVar35 = (ulong)(*(uint *)pBVar49 & 0x7fffff);
      if (((uVar35 < **(ulong **)(param_1 + 0x138)) &&
          (uVar35 = *(ulong *)((*(ulong **)(param_1 + 0x138))[2] + uVar35 * 8), (uVar35 & 1) == 0))
         && (*(uint *)pBVar49 == *(uint *)(uVar35 + 0x70))) {
        uVar7 = *(undefined8 *)(this + 8);
        bVar32 = HashTable<JPH::BodyID,std::pair<JPH::BodyID,unsigned_int>,JPH::UnorderedMapDetail<JPH::BodyID,unsigned_int>,JPH::Hash<JPH::BodyID>,std::equal_to<JPH::BodyID>>
                 ::InsertKey<false>((HashTable<JPH::BodyID,std::pair<JPH::BodyID,unsigned_int>,JPH::UnorderedMapDetail<JPH::BodyID,unsigned_int>,JPH::Hash<JPH::BodyID>,std::equal_to<JPH::BodyID>>
                                     *)local_168,pBVar49,(uint *)&local_188);
        puVar2 = (undefined4 *)(local_168._0_8_ + (local_188 & 0xffffffff) * 8);
        if (bVar32) {
          *puVar2 = *(undefined4 *)pBVar49;
        }
        cVar4 = *(char *)(uVar35 + 0x76);
        puVar2[1] = (int)uVar7;
        if (cVar4 == '\0') {
          JPH::Body::GetBodyCreationSettings();
          Array<JPH::BodyCreationSettings,JPH::STLAllocator<JPH::BodyCreationSettings>>::push_back
                    ((Array<JPH::BodyCreationSettings,JPH::STLAllocator<JPH::BodyCreationSettings>>
                      *)(this + 8),(BodyCreationSettings *)apSStack_148);
          if (plStack_50 != (long *)0x0) {
            LOCK();
            plVar29 = plStack_50 + 1;
            *(int *)plVar29 = (int)*plVar29 + -1;
            UNLOCK();
            if ((int)*plVar29 == 0) {
              (**(code **)(*plStack_50 + 8))();
            }
          }
          if (plStack_58 != (long *)0x0) {
            LOCK();
            plVar29 = plStack_58 + 1;
            *(int *)plVar29 = (int)*plVar29 + -1;
            UNLOCK();
            if ((int)*plVar29 == 0) {
              (**(code **)(*plStack_58 + 0x18))();
            }
          }
          plVar29 = (long *)CONCAT44(uStack_f4,uStack_f8);
          if (plVar29 != (long *)0x0) {
            LOCK();
            plVar43 = plVar29 + 1;
            *(int *)plVar43 = (int)*plVar43 + -1;
            UNLOCK();
            if ((int)*plVar43 == 0) {
              (**(code **)(*plVar29 + 0x18))();
            }
          }
        }
        else {
          JPH::Body::GetSoftBodyCreationSettings();
          lVar42 = *(long *)(this + 0x38);
          uVar35 = lVar42 + 1;
          if (*(ulong *)(this + 0x40) < uVar35) {
            uVar12 = *(ulong *)(this + 0x40) * 2;
            if (uVar35 <= uVar12) {
              uVar35 = uVar12;
            }
            Array<JPH::SoftBodyCreationSettings,JPH::STLAllocator<JPH::SoftBodyCreationSettings>>::
            reallocate((Array<JPH::SoftBodyCreationSettings,JPH::STLAllocator<JPH::SoftBodyCreationSettings>>
                        *)(this + 0x38),uVar35);
            lVar42 = *(long *)(this + 0x38);
            uVar35 = lVar42 + 1;
          }
          *(ulong *)(this + 0x38) = uVar35;
          puVar37 = (undefined8 *)(lVar42 * 0x70 + *(long *)(this + 0x48));
          if (puVar37 != (undefined8 *)0x0) {
            *puVar37 = apSStack_148[0];
            if (apSStack_148[0] != (SoftBodySharedSettings *)0x0) {
              LOCK();
              *(int *)apSStack_148[0] = *(int *)apSStack_148[0] + 1;
              UNLOCK();
            }
            puVar37[6] = uStack_118;
            puVar37[2] = uStack_138;
            puVar37[3] = uStack_130;
            *(undefined2 *)(puVar37 + 7) = uStack_110;
            puVar37[4] = uStack_128;
            puVar37[5] = uStack_120;
            puVar37[8] = plStack_108;
            if (plStack_108 != (long *)0x0) {
              LOCK();
              *(int *)(plStack_108 + 1) = (int)plStack_108[1] + 1;
              UNLOCK();
            }
            puVar37[9] = uStack_100;
            *(ulong *)((long)puVar37 + 0x54) = CONCAT44(uStack_f0,uStack_f4);
            *(undefined8 *)((long)puVar37 + 0x5c) = uStack_ec;
            *(undefined4 *)(puVar37 + 10) = uStack_f8;
            *(undefined8 *)((long)puVar37 + 100) = uStack_e4;
            *(undefined2 *)((long)puVar37 + 0x6c) = uStack_dc;
            *(undefined1 *)((long)puVar37 + 0x6e) = uStack_da;
          }
          if (plStack_108 != (long *)0x0) {
            LOCK();
            plVar29 = plStack_108 + 1;
            *(int *)plVar29 = (int)*plVar29 + -1;
            UNLOCK();
            if ((int)*plVar29 == 0) {
              (**(code **)(*plStack_108 + 0x18))();
            }
          }
          pSVar31 = apSStack_148[0];
          if (apSStack_148[0] != (SoftBodySharedSettings *)0x0) {
            LOCK();
            *(int *)apSStack_148[0] = *(int *)apSStack_148[0] + -1;
            UNLOCK();
            if (*(int *)apSStack_148[0] == 0) {
              SoftBodySharedSettings::~SoftBodySharedSettings(apSStack_148[0]);
              (*Free)(pSVar31);
            }
          }
        }
      }
      if (lVar36 != 0) {
        (**(code **)(*(long *)(param_1 + 0x130) + 0x18))(param_1 + 0x130,lVar36);
      }
    }
  }
  JPH::ConstraintManager::GetConstraints();
  plVar29 = plStack_178 + local_188;
  plVar43 = plStack_178;
joined_r0x001025ab:
  if (plVar29 != plVar43) {
    do {
      plVar38 = (long *)*plVar43;
      iVar34 = (**(code **)(*plVar38 + 0x10))(plVar38);
      if (iVar34 == 1) {
        if ((int)local_158 == 0) {
          lVar36 = (ulong)local_158._4_4_ << 3;
          lVar42 = lVar36;
        }
        else {
          iStack_1b0 = *(int *)(plVar38[5] + 0x70);
          pbVar41 = (byte *)&iStack_1b0;
          uVar35 = 0xcbf29ce484222325;
          pbVar45 = pbVar41;
          do {
            bVar50 = *pbVar45;
            pbVar45 = pbVar45 + 1;
            uVar35 = (uVar35 ^ bVar50) * 0x100000001b3;
          } while (pbVar45 != (byte *)&uStack_1ac);
          bVar50 = (byte)uVar35 | 0x80;
          uVar44 = local_158._4_4_ - 1;
          uVar48 = (uint)(uVar35 >> 7);
          while( true ) {
            uVar48 = uVar48 & uVar44;
            pbVar45 = (byte *)(local_168._8_8_ + (ulong)uVar48);
            bVar13 = pbVar45[0xf];
            auVar55[0] = -(bVar50 == *pbVar45);
            auVar55[1] = -(bVar50 == pbVar45[1]);
            auVar55[2] = -(bVar50 == pbVar45[2]);
            auVar55[3] = -(bVar50 == pbVar45[3]);
            auVar55[4] = -(bVar50 == pbVar45[4]);
            auVar55[5] = -(bVar50 == pbVar45[5]);
            auVar55[6] = -(bVar50 == pbVar45[6]);
            auVar55[7] = -(bVar50 == pbVar45[7]);
            auVar55[8] = -(bVar50 == pbVar45[8]);
            auVar55[9] = -(bVar50 == pbVar45[9]);
            auVar55[10] = -(bVar50 == pbVar45[10]);
            auVar55[0xb] = -(bVar50 == pbVar45[0xb]);
            auVar55[0xc] = -(bVar50 == pbVar45[0xc]);
            auVar55[0xd] = -(bVar50 == pbVar45[0xd]);
            auVar55[0xe] = -(bVar50 == pbVar45[0xe]);
            auVar55[0xf] = -(bVar50 == bVar13);
            uVar10 = (ushort)(SUB161(auVar55 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar55[0xf] >> 7) << 0xf;
            uVar33 = (uint)uVar10;
            uVar46 = uVar48;
            if (uVar10 != 0) {
              do {
                iVar34 = 0;
                for (uVar39 = uVar33; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
                  iVar34 = iVar34 + 1;
                }
                uVar46 = uVar46 + iVar34 & uVar44;
                lVar36 = (ulong)uVar46 * 8;
                if (*(int *)(plVar38[5] + 0x70) == *(int *)(local_168._0_8_ + (ulong)uVar46 * 8)) {
                  iStack_1b0 = *(int *)(plVar38[6] + 0x70);
                  goto LAB_00102858;
                }
                bVar9 = (char)iVar34 + 1U & 0x1f;
                uVar39 = uVar33 >> bVar9;
                uVar33 = uVar33 >> bVar9;
                uVar46 = uVar46 + 1;
              } while (uVar39 != 0);
            }
            auVar52[0] = -(*pbVar45 == 0);
            auVar52[1] = -(pbVar45[1] == 0);
            auVar52[2] = -(pbVar45[2] == 0);
            auVar52[3] = -(pbVar45[3] == 0);
            auVar52[4] = -(pbVar45[4] == 0);
            auVar52[5] = -(pbVar45[5] == 0);
            auVar52[6] = -(pbVar45[6] == 0);
            auVar52[7] = -(pbVar45[7] == 0);
            auVar52[8] = -(pbVar45[8] == 0);
            auVar52[9] = -(pbVar45[9] == 0);
            auVar52[10] = -(pbVar45[10] == 0);
            auVar52[0xb] = -(pbVar45[0xb] == 0);
            auVar52[0xc] = -(pbVar45[0xc] == 0);
            auVar52[0xd] = -(pbVar45[0xd] == 0);
            auVar52[0xe] = -(pbVar45[0xe] == 0);
            auVar52[0xf] = -(bVar13 == 0);
            if ((((((((((((((((auVar52 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                             (auVar52 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar52 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar52 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar52 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar52 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar52 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar52 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar52 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar52 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar52 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar52 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar52 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar52 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar52 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar13 == 0)
            break;
            uVar48 = uVar48 + 0x10;
          }
          lVar36 = (ulong)local_158._4_4_ << 3;
          iStack_1b0 = *(int *)(plVar38[6] + 0x70);
LAB_00102858:
          uVar35 = 0xcbf29ce484222325;
          do {
            bVar50 = *pbVar41;
            pbVar41 = pbVar41 + 1;
            uVar35 = (uVar35 ^ bVar50) * 0x100000001b3;
          } while (pbVar41 != (byte *)&uStack_1ac);
          bVar50 = (byte)uVar35 | 0x80;
          uVar48 = (uint)(uVar35 >> 7);
          while( true ) {
            uVar48 = uVar48 & uVar44;
            pbVar41 = (byte *)(local_168._8_8_ + (ulong)uVar48);
            bVar13 = pbVar41[0xf];
            auVar56[0] = -(bVar50 == *pbVar41);
            auVar56[1] = -(bVar50 == pbVar41[1]);
            auVar56[2] = -(bVar50 == pbVar41[2]);
            auVar56[3] = -(bVar50 == pbVar41[3]);
            auVar56[4] = -(bVar50 == pbVar41[4]);
            auVar56[5] = -(bVar50 == pbVar41[5]);
            auVar56[6] = -(bVar50 == pbVar41[6]);
            auVar56[7] = -(bVar50 == pbVar41[7]);
            auVar56[8] = -(bVar50 == pbVar41[8]);
            auVar56[9] = -(bVar50 == pbVar41[9]);
            auVar56[10] = -(bVar50 == pbVar41[10]);
            auVar56[0xb] = -(bVar50 == pbVar41[0xb]);
            auVar56[0xc] = -(bVar50 == pbVar41[0xc]);
            auVar56[0xd] = -(bVar50 == pbVar41[0xd]);
            auVar56[0xe] = -(bVar50 == pbVar41[0xe]);
            auVar56[0xf] = -(bVar50 == bVar13);
            uVar10 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar56[0xf] >> 7) << 0xf;
            uVar33 = (uint)uVar10;
            uVar46 = uVar48;
            if (uVar10 != 0) {
              do {
                iVar34 = 0;
                for (uVar39 = uVar33; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
                  iVar34 = iVar34 + 1;
                }
                uVar46 = uVar46 + iVar34 & uVar44;
                lVar42 = (ulong)uVar46 * 8;
                if (iStack_1b0 == *(int *)(local_168._0_8_ + (ulong)uVar46 * 8)) goto LAB_00102606;
                uVar33 = uVar33 >> ((char)iVar34 + 1U & 0x1f);
                uVar46 = uVar46 + 1;
              } while (uVar33 != 0);
            }
            auVar51[0] = -(*pbVar41 == 0);
            auVar51[1] = -(pbVar41[1] == 0);
            auVar51[2] = -(pbVar41[2] == 0);
            auVar51[3] = -(pbVar41[3] == 0);
            auVar51[4] = -(pbVar41[4] == 0);
            auVar51[5] = -(pbVar41[5] == 0);
            auVar51[6] = -(pbVar41[6] == 0);
            auVar51[7] = -(pbVar41[7] == 0);
            auVar51[8] = -(pbVar41[8] == 0);
            auVar51[9] = -(pbVar41[9] == 0);
            auVar51[10] = -(pbVar41[10] == 0);
            auVar51[0xb] = -(pbVar41[0xb] == 0);
            auVar51[0xc] = -(pbVar41[0xc] == 0);
            auVar51[0xd] = -(pbVar41[0xd] == 0);
            auVar51[0xe] = -(pbVar41[0xe] == 0);
            auVar51[0xf] = -(bVar13 == 0);
            if ((((((((((((((((auVar51 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                             (auVar51 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar51 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar51 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar51 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar51 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar51 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar51 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar51 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar51 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar51 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar51 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar51 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar51 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar51 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar13 == 0)
            break;
            uVar48 = uVar48 + 0x10;
          }
          lVar42 = (ulong)local_158._4_4_ * 8;
        }
LAB_00102606:
        (**(code **)(*plVar38 + 0x90))(&iStack_1b0,plVar38);
        lVar28 = CONCAT44(uStack_1ac,iStack_1b0);
        uVar5 = *(undefined4 *)(local_168._0_8_ + 4 + lVar42);
        uVar6 = *(undefined4 *)(local_168._0_8_ + 4 + lVar36);
        lVar36 = *(long *)(this + 0x20);
        uVar35 = lVar36 + 1;
        if (*(ulong *)(this + 0x28) < uVar35) {
          uVar12 = *(ulong *)(this + 0x28) * 2;
          if (uVar35 <= uVar12) {
            uVar35 = uVar12;
          }
          Array<JPH::PhysicsScene::ConnectedConstraint,JPH::STLAllocator<JPH::PhysicsScene::ConnectedConstraint>>
          ::reallocate((Array<JPH::PhysicsScene::ConnectedConstraint,JPH::STLAllocator<JPH::PhysicsScene::ConnectedConstraint>>
                        *)(this + 0x20),uVar35);
          lVar36 = *(long *)(this + 0x20);
          uVar35 = lVar36 + 1;
        }
        *(ulong *)(this + 0x20) = uVar35;
        plVar38 = (long *)(lVar36 * 0x10 + *(long *)(this + 0x30));
        if (plVar38 != (long *)0x0) {
          *plVar38 = lVar28;
          if (lVar28 != 0) {
            LOCK();
            *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
            UNLOCK();
          }
          plVar38[1] = CONCAT44(uVar5,uVar6);
        }
        plVar38 = (long *)CONCAT44(uStack_1ac,iStack_1b0);
        if (plVar38 != (long *)0x0) {
          LOCK();
          plVar1 = plVar38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) goto code_r0x001026b5;
        }
      }
      plVar43 = plVar43 + 1;
      if (plVar29 == plVar43) break;
    } while( true );
  }
  if (plStack_178 != (long *)0x0) {
    if (local_188 != 0) {
      plVar29 = plStack_178 + local_188;
      for (plVar43 = plStack_178; plVar43 < plVar29; plVar43 = plVar43 + 1) {
        while (plVar38 = (long *)*plVar43, plVar38 != (long *)0x0) {
          LOCK();
          plVar1 = plVar38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) break;
          plVar43 = plVar43 + 1;
          (**(code **)(*plVar38 + 8))();
          if (plVar29 <= plVar43) goto LAB_0010271d;
        }
      }
    }
LAB_0010271d:
    local_188 = 0;
    (*Free)(plStack_178);
  }
  if (pBStack_198 != (BodyID *)0x0) {
    auVar30._8_8_ = 0;
    auVar30._0_8_ = auStack_1a8._8_8_;
    auStack_1a8 = auVar30 << 0x40;
    (*Free)();
  }
  if (local_168._0_8_ != 0) {
    (*Free)();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001026b5:
  plVar43 = plVar43 + 1;
  (**(code **)(*plVar38 + 0x18))();
  goto joined_r0x001025ab;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00102b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */

void __thiscall JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long *)(this + 0x128) != 0) {
    *(undefined8 *)(this + 0x118) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x110) != 0) {
    *(undefined8 *)(this + 0x100) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xf8) != 0) {
    *(undefined8 *)(this + 0xe8) = 0;
    (*Free)();
  }
  plVar4 = *(long **)(this + 0xd8);
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 200) != 0) && (plVar2 = plVar4 + *(long *)(this + 200), plVar4 < plVar2))
    {
      do {
        while (plVar3 = (long *)*plVar4, plVar3 == (long *)0x0) {
LAB_00102d40:
          plVar4 = plVar4 + 1;
          if (plVar2 <= plVar4) goto LAB_00102d78;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_00102d40;
        if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar3 + 0x18))();
          goto LAB_00102d40;
        }
        (*Free)();
        plVar4 = plVar4 + 1;
      } while (plVar4 < plVar2);
LAB_00102d78:
      plVar4 = *(long **)(this + 0xd8);
    }
    *(undefined8 *)(this + 200) = 0;
    (*Free)(plVar4);
  }
  if (*(long *)(this + 0xc0) != 0) {
    *(undefined8 *)(this + 0xb0) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0xa8) != 0) {
    *(undefined8 *)(this + 0x98) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x90) != 0) {
    *(undefined8 *)(this + 0x80) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x78) != 0) {
    *(undefined8 *)(this + 0x68) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x60) != 0) {
    *(undefined8 *)(this + 0x50) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x48) != 0) {
    *(undefined8 *)(this + 0x38) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x30) != 0) {
    *(undefined8 *)(this + 0x20) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x18) == 0) {
    return;
  }
  *(undefined8 *)(this + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00102d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::PhysicsScene::~PhysicsScene() */

void __thiscall JPH::PhysicsScene::~PhysicsScene(PhysicsScene *this)

{
  long *plVar1;
  SoftBodySharedSettings *this_00;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  puVar3 = *(undefined8 **)(this + 0x48);
  if (puVar3 != (undefined8 *)0x0) {
    if ((*(long *)(this + 0x38) != 0) &&
       (puVar8 = puVar3 + *(long *)(this + 0x38) * 0xe, puVar3 < puVar8)) {
      do {
        plVar4 = (long *)puVar3[8];
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar6 = plVar4 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        this_00 = (SoftBodySharedSettings *)*puVar3;
        if (this_00 != (SoftBodySharedSettings *)0x0) {
          LOCK();
          *(int *)this_00 = *(int *)this_00 + -1;
          UNLOCK();
          if (*(int *)this_00 == 0) {
            SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
            (*Free)(this_00);
          }
        }
        puVar3 = puVar3 + 0xe;
      } while (puVar3 < puVar8);
      puVar3 = *(undefined8 **)(this + 0x48);
    }
    *(undefined8 *)(this + 0x38) = 0;
    (*Free)(puVar3);
  }
  plVar4 = *(long **)(this + 0x30);
  if (plVar4 != (long *)0x0) {
    if ((*(long *)(this + 0x20) != 0) &&
       (plVar6 = plVar4 + *(long *)(this + 0x20) * 2, plVar4 < plVar6)) {
      do {
        while (plVar2 = (long *)*plVar4, plVar2 == (long *)0x0) {
LAB_00102e50:
          plVar4 = plVar4 + 2;
          if (plVar6 <= plVar4) goto LAB_00102e80;
        }
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_00102e50;
        plVar4 = plVar4 + 2;
        (**(code **)(*plVar2 + 0x18))();
      } while (plVar4 < plVar6);
LAB_00102e80:
      plVar4 = *(long **)(this + 0x30);
    }
    *(undefined8 *)(this + 0x20) = 0;
    (*Free)(plVar4);
  }
  uVar5 = *(ulong *)(this + 0x18);
  if (uVar5 == 0) {
    return;
  }
  if ((*(long *)(this + 8) != 0) && (uVar7 = *(long *)(this + 8) * 0x100 + uVar5, uVar5 < uVar7)) {
    do {
      plVar4 = *(long **)(uVar5 + 0xf8);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      plVar4 = *(long **)(uVar5 + 0xf0);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      plVar4 = *(long **)(uVar5 + 0x50);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      uVar5 = uVar5 + 0x100;
    } while (uVar5 < uVar7);
    uVar5 = *(ulong *)(this + 0x18);
  }
  *(undefined8 *)(this + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00102f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(uVar5);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Result<JPH::Ref<JPH::PhysicsScene> >::SetError(std::basic_string_view<char,
   std::char_traits<char> > const&) */

void __thiscall
JPH::Result<JPH::Ref<JPH::PhysicsScene>>::SetError
          (Result<JPH::Ref<JPH::PhysicsScene>> *this,basic_string_view *param_1)

{
  ulong __n;
  Result<JPH::Ref<JPH::PhysicsScene>> *__src;
  PhysicsScene *this_00;
  Result<JPH::Ref<JPH::PhysicsScene>> *__dest;
  
  if (this[0x20] == (Result<JPH::Ref<JPH::PhysicsScene>>)0x1) {
    this_00 = *(PhysicsScene **)this;
    if (this_00 != (PhysicsScene *)0x0) {
      LOCK();
      *(int *)this_00 = *(int *)this_00 + -1;
      UNLOCK();
      if (*(int *)this_00 == 0) {
        PhysicsScene::~PhysicsScene(this_00);
        (*Free)(this_00);
      }
    }
  }
  else if ((this[0x20] == (Result<JPH::Ref<JPH::PhysicsScene>>)0x2) &&
          (*(Result<JPH::Ref<JPH::PhysicsScene>> **)this != this + 0x10)) {
    (*Free)();
  }
  __dest = this + 0x10;
  __n = *(ulong *)param_1;
  __src = *(Result<JPH::Ref<JPH::PhysicsScene>> **)(param_1 + 8);
  this[0x20] = (Result<JPH::Ref<JPH::PhysicsScene>>)0x0;
  *(Result<JPH::Ref<JPH::PhysicsScene>> **)this = __dest;
  if ((__src == (Result<JPH::Ref<JPH::PhysicsScene>> *)0x0) && (__n != 0)) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_001030dc:
    std::__throw_length_error("basic_string::_M_create");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = *__src;
      goto LAB_00103035;
    }
    if (__n == 0) goto LAB_00103035;
  }
  else {
    if ((long)__n < 0) goto LAB_001030dc;
    __dest = (Result<JPH::Ref<JPH::PhysicsScene>> *)(*Allocate)(__n + 1);
    *(ulong *)(this + 0x10) = __n;
    *(Result<JPH::Ref<JPH::PhysicsScene>> **)this = __dest;
  }
  memcpy(__dest,__src,__n);
  __dest = *(Result<JPH::Ref<JPH::PhysicsScene>> **)this;
LAB_00103035:
  *(ulong *)(this + 8) = __n;
  __dest[__n] = (Result<JPH::Ref<JPH::PhysicsScene>>)0x0;
  this[0x20] = (Result<JPH::Ref<JPH::PhysicsScene>>)0x2;
  return;
}



/* JPH::Array<JPH::BodyCreationSettings, JPH::STLAllocator<JPH::BodyCreationSettings>
   >::reallocate(unsigned long) */

void __thiscall
JPH::Array<JPH::BodyCreationSettings,JPH::STLAllocator<JPH::BodyCreationSettings>>::reallocate
          (Array<JPH::BodyCreationSettings,JPH::STLAllocator<JPH::BodyCreationSettings>> *this,
          ulong param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  
  puVar18 = (undefined8 *)(*Allocate)(param_1 << 8);
  puVar22 = *(undefined8 **)(this + 0x10);
  if (puVar22 != (undefined8 *)0x0) {
    lVar6 = *(long *)this;
    if (puVar18 < puVar22) {
      if (puVar18 < puVar18 + lVar6 * 0x20) {
        puVar19 = puVar18;
        if (puVar18 != (undefined8 *)0x0) goto LAB_001031a8;
        plVar7 = (long *)puVar22[0x1f];
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
        plVar7 = (long *)puVar22[0x1e];
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
        plVar7 = (long *)puVar22[10];
        puVar19 = (undefined8 *)0x0;
        while( true ) {
          if (plVar7 != (long *)0x0) {
            LOCK();
            plVar1 = plVar7 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          puVar19 = puVar19 + 0x20;
          puVar22 = puVar22 + 0x20;
          if (puVar18 + lVar6 * 0x20 <= puVar19) break;
LAB_001031a8:
          uVar8 = *puVar22;
          uVar9 = puVar22[1];
          uVar10 = puVar22[2];
          uVar11 = puVar22[3];
          uVar12 = puVar22[4];
          uVar13 = puVar22[5];
          uVar2 = *(undefined4 *)((long)puVar22 + 0x84);
          puVar19[8] = puVar22[8];
          uVar4 = *(undefined2 *)(puVar22 + 9);
          *puVar19 = uVar8;
          puVar19[1] = uVar9;
          uVar9 = puVar22[6];
          uVar14 = puVar22[7];
          puVar19[2] = uVar10;
          puVar19[3] = uVar11;
          uVar10 = *(undefined8 *)((long)puVar22 + 0x6c);
          uVar11 = *(undefined8 *)((long)puVar22 + 0x74);
          *(undefined2 *)(puVar19 + 9) = uVar4;
          uVar8 = puVar22[10];
          puVar19[4] = uVar12;
          puVar19[5] = uVar13;
          puVar19[10] = uVar8;
          uVar8 = puVar22[0xb];
          puVar19[6] = uVar9;
          puVar19[7] = uVar14;
          puVar22[10] = 0;
          puVar19[0xb] = uVar8;
          uVar4 = *(undefined2 *)(puVar22 + 0xc);
          *(undefined8 *)((long)puVar19 + 0x6c) = uVar10;
          *(undefined8 *)((long)puVar19 + 0x74) = uVar11;
          *(undefined2 *)(puVar19 + 0xc) = uVar4;
          *(undefined4 *)((long)puVar19 + 0x62) = *(undefined4 *)((long)puVar22 + 0x62);
          *(undefined1 *)((long)puVar19 + 0x66) = *(undefined1 *)((long)puVar22 + 0x66);
          *(undefined1 *)((long)puVar19 + 0x67) = *(undefined1 *)((long)puVar22 + 0x67);
          *(undefined2 *)(puVar19 + 0xd) = *(undefined2 *)(puVar22 + 0xd);
          *(undefined8 *)((long)puVar19 + 0x7c) = *(undefined8 *)((long)puVar22 + 0x7c);
          *(undefined4 *)((long)puVar19 + 0x84) = uVar2;
          uVar2 = *(undefined4 *)((long)puVar22 + 0x94);
          uVar10 = puVar22[0x14];
          uVar11 = puVar22[0x15];
          uVar8 = puVar22[0x16];
          uVar9 = puVar22[0x17];
          uVar12 = puVar22[0x18];
          uVar13 = puVar22[0x19];
          puVar19[0x11] = puVar22[0x11];
          uVar3 = *(undefined1 *)(puVar22 + 0x12);
          uVar14 = puVar22[0x1a];
          uVar15 = puVar22[0x1b];
          *(undefined4 *)((long)puVar19 + 0x94) = uVar2;
          uVar16 = puVar22[0x1c];
          uVar17 = puVar22[0x1d];
          puVar19[0x14] = uVar10;
          puVar19[0x15] = uVar11;
          *(undefined1 *)(puVar19 + 0x12) = uVar3;
          puVar19[0x16] = uVar8;
          puVar19[0x17] = uVar9;
          puVar19[0x18] = uVar12;
          puVar19[0x19] = uVar13;
          puVar19[0x1a] = uVar14;
          puVar19[0x1b] = uVar15;
          puVar19[0x1c] = uVar16;
          puVar19[0x1d] = uVar17;
          uVar8 = puVar22[0x1e];
          uVar9 = puVar22[0x1f];
          puVar22[0x1e] = 0;
          puVar19[0x1e] = uVar8;
          puVar19[0x1f] = uVar9;
          plVar7 = (long *)puVar22[10];
        }
        puVar22 = *(undefined8 **)(this + 0x10);
      }
    }
    else {
      puVar19 = puVar18 + lVar6 * 0x20 + -0x20;
      puVar21 = puVar22 + lVar6 * 0x20 + -0x20;
      if (!CARRY8(lVar6 * 0x100 - 0x100,(ulong)puVar18)) {
        do {
          uVar8 = *puVar21;
          uVar9 = puVar21[1];
          puVar20 = puVar19 + -0x20;
          uVar10 = puVar21[2];
          uVar11 = puVar21[3];
          uVar12 = puVar21[4];
          uVar13 = puVar21[5];
          puVar19[8] = puVar21[8];
          uVar4 = *(undefined2 *)(puVar21 + 9);
          uVar14 = puVar21[6];
          uVar15 = puVar21[7];
          uVar2 = *(undefined4 *)((long)puVar21 + 0x84);
          *puVar19 = uVar8;
          puVar19[1] = uVar9;
          *(undefined2 *)(puVar19 + 9) = uVar4;
          uVar8 = puVar21[10];
          uVar9 = *(undefined8 *)((long)puVar21 + 0x6c);
          uVar16 = *(undefined8 *)((long)puVar21 + 0x74);
          puVar19[2] = uVar10;
          puVar19[3] = uVar11;
          puVar19[10] = uVar8;
          uVar8 = puVar21[0xb];
          puVar19[4] = uVar12;
          puVar19[5] = uVar13;
          puVar19[0xb] = uVar8;
          uVar4 = *(undefined2 *)(puVar21 + 0xc);
          puVar19[6] = uVar14;
          puVar19[7] = uVar15;
          *(undefined2 *)(puVar19 + 0xc) = uVar4;
          uVar5 = *(undefined4 *)((long)puVar21 + 0x62);
          *(undefined4 *)((long)puVar19 + 0x84) = uVar2;
          *(undefined4 *)((long)puVar19 + 0x62) = uVar5;
          uVar3 = *(undefined1 *)((long)puVar21 + 0x66);
          *(undefined8 *)((long)puVar19 + 0x6c) = uVar9;
          *(undefined8 *)((long)puVar19 + 0x74) = uVar16;
          *(undefined1 *)((long)puVar19 + 0x66) = uVar3;
          *(undefined1 *)((long)puVar19 + 0x67) = *(undefined1 *)((long)puVar21 + 0x67);
          *(undefined2 *)(puVar19 + 0xd) = *(undefined2 *)(puVar21 + 0xd);
          *(undefined8 *)((long)puVar19 + 0x7c) = *(undefined8 *)((long)puVar21 + 0x7c);
          uVar2 = *(undefined4 *)((long)puVar21 + 0x94);
          uVar8 = puVar21[0x14];
          uVar9 = puVar21[0x15];
          puVar19[0x11] = puVar21[0x11];
          uVar10 = puVar21[0x16];
          uVar11 = puVar21[0x17];
          uVar3 = *(undefined1 *)(puVar21 + 0x12);
          uVar12 = puVar21[0x18];
          uVar13 = puVar21[0x19];
          *(undefined4 *)((long)puVar19 + 0x94) = uVar2;
          uVar14 = puVar21[0x1a];
          uVar15 = puVar21[0x1b];
          uVar16 = puVar21[0x1c];
          uVar17 = puVar21[0x1d];
          puVar19[0x14] = uVar8;
          puVar19[0x15] = uVar9;
          *(undefined1 *)(puVar19 + 0x12) = uVar3;
          puVar19[0x16] = uVar10;
          puVar19[0x17] = uVar11;
          puVar19[0x18] = uVar12;
          puVar19[0x19] = uVar13;
          puVar19[0x1a] = uVar14;
          puVar19[0x1b] = uVar15;
          puVar19[0x1c] = uVar16;
          puVar19[0x1d] = uVar17;
          uVar8 = puVar21[0x1f];
          puVar19[0x1e] = puVar21[0x1e];
          puVar19[0x1f] = uVar8;
          puVar19 = puVar20;
          puVar21 = puVar21 + -0x20;
        } while (puVar18 <= puVar20);
        (*Free)(puVar22);
        goto LAB_00103315;
      }
    }
    (*Free)(puVar22);
  }
LAB_00103315:
  *(undefined8 **)(this + 0x10) = puVar18;
  *(ulong *)(this + 8) = param_1;
  return;
}



/* JPH::Array<JPH::BodyCreationSettings, JPH::STLAllocator<JPH::BodyCreationSettings>
   >::push_back(JPH::BodyCreationSettings const&) */

void __thiscall
JPH::Array<JPH::BodyCreationSettings,JPH::STLAllocator<JPH::BodyCreationSettings>>::push_back
          (Array<JPH::BodyCreationSettings,JPH::STLAllocator<JPH::BodyCreationSettings>> *this,
          BodyCreationSettings *param_1)

{
  undefined4 uVar1;
  BodyCreationSettings BVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  
  lVar17 = *(long *)this;
  uVar19 = lVar17 + 1;
  if (*(ulong *)(this + 8) < uVar19) {
    uVar20 = *(ulong *)(this + 8) * 2;
    if (uVar20 < uVar19) {
      uVar20 = uVar19;
    }
    reallocate(this,uVar20);
    lVar17 = *(long *)this;
    uVar19 = lVar17 + 1;
  }
  *(ulong *)this = uVar19;
  puVar18 = (undefined8 *)(lVar17 * 0x100 + *(long *)(this + 0x10));
  if (puVar18 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)param_1;
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    puVar18[8] = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined2 *)(param_1 + 0x48);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    *puVar18 = uVar4;
    puVar18[1] = uVar5;
    *(undefined2 *)(puVar18 + 9) = uVar3;
    lVar17 = *(long *)(param_1 + 0x50);
    puVar18[2] = uVar6;
    puVar18[3] = uVar7;
    puVar18[10] = lVar17;
    puVar18[4] = uVar8;
    puVar18[5] = uVar9;
    puVar18[6] = uVar10;
    puVar18[7] = uVar11;
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
    uVar1 = *(undefined4 *)(param_1 + 0x84);
    uVar6 = *(undefined8 *)(param_1 + 0x6c);
    uVar7 = *(undefined8 *)(param_1 + 0x74);
    uVar8 = *(undefined8 *)(param_1 + 0xa0);
    uVar9 = *(undefined8 *)(param_1 + 0xa8);
    puVar18[0xb] = *(undefined8 *)(param_1 + 0x58);
    uVar3 = *(undefined2 *)(param_1 + 0x68);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uVar10 = *(undefined8 *)(param_1 + 0xb0);
    uVar11 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined4 *)((long)puVar18 + 0x84) = uVar1;
    *(undefined2 *)(puVar18 + 0xd) = uVar3;
    uVar5 = *(undefined8 *)(param_1 + 0x7c);
    uVar1 = *(undefined4 *)(param_1 + 0x94);
    uVar12 = *(undefined8 *)(param_1 + 0xc0);
    uVar13 = *(undefined8 *)(param_1 + 200);
    puVar18[0xc] = uVar4;
    *(undefined8 *)((long)puVar18 + 0x7c) = uVar5;
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    uVar14 = *(undefined8 *)(param_1 + 0xd8);
    uVar15 = *(undefined8 *)(param_1 + 0xe0);
    uVar16 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)((long)puVar18 + 0x6c) = uVar6;
    *(undefined8 *)((long)puVar18 + 0x74) = uVar7;
    puVar18[0x11] = uVar4;
    BVar2 = param_1[0x90];
    *(undefined4 *)((long)puVar18 + 0x94) = uVar1;
    *(BodyCreationSettings *)(puVar18 + 0x12) = BVar2;
    lVar17 = *(long *)(param_1 + 0xf0);
    puVar18[0x14] = uVar8;
    puVar18[0x15] = uVar9;
    puVar18[0x1e] = lVar17;
    puVar18[0x16] = uVar10;
    puVar18[0x17] = uVar11;
    puVar18[0x18] = uVar12;
    puVar18[0x19] = uVar13;
    puVar18[0x1a] = uVar5;
    puVar18[0x1b] = uVar14;
    puVar18[0x1c] = uVar15;
    puVar18[0x1d] = uVar16;
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
    lVar17 = *(long *)(param_1 + 0xf8);
    puVar18[0x1f] = lVar17;
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



/* JPH::Array<JPH::PhysicsScene::ConnectedConstraint,
   JPH::STLAllocator<JPH::PhysicsScene::ConnectedConstraint> >::reallocate(unsigned long) */

void __thiscall
JPH::
Array<JPH::PhysicsScene::ConnectedConstraint,JPH::STLAllocator<JPH::PhysicsScene::ConnectedConstraint>>
::reallocate(Array<JPH::PhysicsScene::ConnectedConstraint,JPH::STLAllocator<JPH::PhysicsScene::ConnectedConstraint>>
             *this,ulong param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = (long *)(*Allocate)(param_1 << 4);
  plVar5 = *(long **)(this + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar1 = *(long *)this;
    if (plVar2 < plVar5) {
      if (plVar2 < plVar2 + lVar1 * 2) {
        plVar4 = plVar2;
        plVar3 = plVar5;
        if (plVar2 == (long *)0x0) {
          plVar4 = (long *)*plVar5;
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar3 = plVar4 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
            plVar3 = *(long **)(this + 0x10);
          }
          plVar4 = (long *)0x0;
          goto LAB_00103740;
        }
        do {
          *plVar4 = *plVar5;
          plVar4[1] = plVar5[1];
LAB_00103740:
          plVar4 = plVar4 + 2;
          plVar5 = plVar5 + 2;
        } while (plVar4 < plVar2 + lVar1 * 2);
        (*Free)(plVar3);
        goto LAB_00103702;
      }
    }
    else {
      plVar3 = plVar2 + lVar1 * 2 + -2;
      plVar5 = plVar5 + lVar1 * 2 + -2;
      if (!CARRY8(lVar1 * 0x10 - 0x10,(ulong)plVar2)) {
        do {
          plVar4 = plVar3 + -2;
          *plVar3 = *plVar5;
          plVar3[1] = plVar5[1];
          plVar3 = plVar4;
          plVar5 = plVar5 + -2;
        } while (plVar2 <= plVar4);
      }
    }
    (*Free)();
  }
LAB_00103702:
  *(long **)(this + 0x10) = plVar2;
  *(ulong *)(this + 8) = param_1;
  return;
}



/* JPH::Array<JPH::SoftBodyCreationSettings, JPH::STLAllocator<JPH::SoftBodyCreationSettings>
   >::reallocate(unsigned long) */

void __thiscall
JPH::Array<JPH::SoftBodyCreationSettings,JPH::STLAllocator<JPH::SoftBodyCreationSettings>>::
reallocate(Array<JPH::SoftBodyCreationSettings,JPH::STLAllocator<JPH::SoftBodyCreationSettings>>
           *this,ulong param_1)

{
  long *plVar1;
  undefined2 uVar2;
  long lVar3;
  long *plVar4;
  SoftBodySharedSettings *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  
  puVar16 = (undefined8 *)(*Allocate)(param_1 * 0x70);
  puVar20 = *(undefined8 **)(this + 0x10);
  if (puVar20 == (undefined8 *)0x0) goto LAB_001038b2;
  lVar3 = *(long *)this;
  if (puVar16 < puVar20) {
    puVar19 = puVar16 + lVar3 * 0xe;
    if (puVar16 < puVar19) {
      puVar17 = puVar16;
      puVar21 = puVar20;
      if (puVar16 == (undefined8 *)0x0) {
        plVar4 = (long *)puVar20[8];
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        this_00 = (SoftBodySharedSettings *)*puVar20;
        if (this_00 != (SoftBodySharedSettings *)0x0) {
          LOCK();
          *(int *)this_00 = *(int *)this_00 + -1;
          UNLOCK();
          if (*(int *)this_00 == 0) {
            SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
            (*Free)(this_00);
          }
        }
        puVar21 = puVar20 + 0xe;
        puVar17 = (undefined8 *)0x70;
        puVar20 = *(undefined8 **)(this + 0x10);
        if (puVar19 < (undefined8 *)0x71) goto LAB_001038ac;
      }
      do {
        uVar5 = *puVar21;
        uVar6 = *(undefined8 *)((long)puVar21 + 0x54);
        uVar7 = *(undefined8 *)((long)puVar21 + 0x5c);
        puVar18 = puVar17 + 0xe;
        *puVar21 = 0;
        uVar8 = puVar21[2];
        uVar9 = puVar21[3];
        uVar14 = puVar21[4];
        uVar15 = puVar21[5];
        *puVar17 = uVar5;
        uVar5 = puVar21[6];
        puVar17[2] = uVar8;
        puVar17[3] = uVar9;
        puVar17[6] = uVar5;
        uVar2 = *(undefined2 *)(puVar21 + 7);
        puVar17[4] = uVar14;
        puVar17[5] = uVar15;
        *(undefined2 *)(puVar17 + 7) = uVar2;
        puVar17[8] = puVar21[8];
        uVar5 = puVar21[9];
        *(undefined8 *)((long)puVar17 + 0x54) = uVar6;
        *(undefined8 *)((long)puVar17 + 0x5c) = uVar7;
        puVar17[9] = uVar5;
        *(undefined4 *)(puVar17 + 10) = *(undefined4 *)(puVar21 + 10);
        *(undefined8 *)((long)puVar17 + 100) = *(undefined8 *)((long)puVar21 + 100);
        *(undefined2 *)((long)puVar17 + 0x6c) = *(undefined2 *)((long)puVar21 + 0x6c);
        *(undefined1 *)((long)puVar17 + 0x6e) = *(undefined1 *)((long)puVar21 + 0x6e);
        puVar17 = puVar18;
        puVar21 = puVar21 + 0xe;
      } while (puVar18 < puVar19);
    }
  }
  else {
    puVar19 = puVar16 + lVar3 * 0xe + -0xe;
    puVar17 = puVar20 + lVar3 * 0xe + -0xe;
    if (!CARRY8(lVar3 * 0x70 - 0x70,(ulong)puVar16)) {
      do {
        uVar6 = puVar17[2];
        uVar7 = puVar17[3];
        puVar21 = puVar19 + -0xe;
        uVar8 = puVar17[4];
        uVar9 = puVar17[5];
        uVar10 = *(undefined4 *)((long)puVar17 + 0x54);
        uVar11 = *(undefined4 *)(puVar17 + 0xb);
        uVar12 = *(undefined4 *)((long)puVar17 + 0x5c);
        uVar13 = *(undefined4 *)(puVar17 + 0xc);
        *puVar19 = *puVar17;
        uVar5 = puVar17[6];
        puVar19[2] = uVar6;
        puVar19[3] = uVar7;
        puVar19[6] = uVar5;
        uVar2 = *(undefined2 *)(puVar17 + 7);
        puVar19[4] = uVar8;
        puVar19[5] = uVar9;
        *(undefined2 *)(puVar19 + 7) = uVar2;
        puVar19[8] = puVar17[8];
        uVar5 = puVar17[9];
        *(undefined4 *)((long)puVar19 + 0x54) = uVar10;
        *(undefined4 *)(puVar19 + 0xb) = uVar11;
        *(undefined4 *)((long)puVar19 + 0x5c) = uVar12;
        *(undefined4 *)(puVar19 + 0xc) = uVar13;
        puVar19[9] = uVar5;
        *(undefined4 *)(puVar19 + 10) = *(undefined4 *)(puVar17 + 10);
        *(undefined8 *)((long)puVar19 + 100) = *(undefined8 *)((long)puVar17 + 100);
        *(undefined2 *)((long)puVar19 + 0x6c) = *(undefined2 *)((long)puVar17 + 0x6c);
        *(undefined1 *)((long)puVar19 + 0x6e) = *(undefined1 *)((long)puVar17 + 0x6e);
        puVar19 = puVar21;
        puVar17 = puVar17 + -0xe;
      } while (puVar16 <= puVar21);
      (*Free)(puVar20);
      goto LAB_001038b2;
    }
  }
LAB_001038ac:
  (*Free)(puVar20);
LAB_001038b2:
  *(undefined8 **)(this + 0x10) = puVar16;
  *(ulong *)(this + 8) = param_1;
  return;
}



/* JPH::HashTable<JPH::BodyID, std::pair<JPH::BodyID, unsigned int>,
   JPH::UnorderedMapDetail<JPH::BodyID, unsigned int>, JPH::Hash<JPH::BodyID>,
   std::equal_to<JPH::BodyID> >::GrowTable() */

void __thiscall
JPH::
HashTable<JPH::BodyID,std::pair<JPH::BodyID,unsigned_int>,JPH::UnorderedMapDetail<JPH::BodyID,unsigned_int>,JPH::Hash<JPH::BodyID>,std::equal_to<JPH::BodyID>>
::GrowTable(HashTable<JPH::BodyID,std::pair<JPH::BodyID,unsigned_int>,JPH::UnorderedMapDetail<JPH::BodyID,unsigned_int>,JPH::Hash<JPH::BodyID>,std::equal_to<JPH::BodyID>>
            *this)

{
  void *__s;
  char *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  undefined1 auVar17 [16];
  undefined4 local_44;
  long local_40 [2];
  
  uVar2 = *(uint *)(this + 0x14);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (ulong)(uVar2 * 2);
  if (uVar2 * 2 < 0x10) {
    uVar8 = 0x10;
  }
  if (uVar2 <= (uint)uVar8) {
    puVar3 = *(undefined8 **)this;
    pcVar16 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(uint *)(this + 0x14) = (uint)uVar8;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar8 * 7 >> 3);
    lVar9 = (*Allocate)(uVar8 * 9 + 0xf);
    *(long *)this = lVar9;
    __s = (void *)(lVar9 + (ulong)*(uint *)(this + 0x14) * 8);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (puVar3 != (undefined8 *)0x0) {
      if (uVar2 != 0) {
        puVar13 = puVar3;
        do {
          while (*pcVar16 < '\0') {
            iVar15 = *(int *)(this + 0x18);
            if (iVar15 == 0) {
              if ((ulong)*(uint *)(this + 0x14) <
                  (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) -
                               *(int *)(this + 0x10)) << 3) {
                rehash((uint)this);
                iVar15 = *(int *)(this + 0x18);
              }
              else {
                GrowTable(this);
                iVar15 = *(int *)(this + 0x18);
              }
            }
            uVar8 = 0xcbf29ce484222325;
            local_44 = *(undefined4 *)puVar13;
            pbVar10 = (byte *)&local_44;
            do {
              bVar12 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              uVar8 = (uVar8 ^ bVar12) * 0x100000001b3;
            } while (pbVar10 != (byte *)local_40);
            bVar12 = (byte)uVar8 | 0x80;
            uVar7 = (uint)(uVar8 >> 7);
            while( true ) {
              uVar7 = uVar7 & *(int *)(this + 0x14) - 1U;
              pcVar1 = (char *)(*(long *)(this + 8) + (ulong)uVar7);
              auVar17[0] = -(*pcVar1 == '\0');
              auVar17[1] = -(pcVar1[1] == '\0');
              auVar17[2] = -(pcVar1[2] == '\0');
              auVar17[3] = -(pcVar1[3] == '\0');
              auVar17[4] = -(pcVar1[4] == '\0');
              auVar17[5] = -(pcVar1[5] == '\0');
              auVar17[6] = -(pcVar1[6] == '\0');
              auVar17[7] = -(pcVar1[7] == '\0');
              auVar17[8] = -(pcVar1[8] == '\0');
              auVar17[9] = -(pcVar1[9] == '\0');
              auVar17[10] = -(pcVar1[10] == '\0');
              auVar17[0xb] = -(pcVar1[0xb] == '\0');
              auVar17[0xc] = -(pcVar1[0xc] == '\0');
              auVar17[0xd] = -(pcVar1[0xd] == '\0');
              auVar17[0xe] = -(pcVar1[0xe] == '\0');
              auVar17[0xf] = -(pcVar1[0xf] == '\0');
              uVar5 = (ushort)(SUB161(auVar17 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar17[0xf] >> 7) << 0xf;
              if (uVar5 != 0) break;
              uVar7 = uVar7 + 0x10;
            }
            iVar6 = 0;
            for (uVar11 = (uint)uVar5; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            puVar14 = puVar13 + 1;
            pcVar16 = pcVar16 + 1;
            *(int *)(this + 0x18) = iVar15 + -1;
            uVar7 = iVar6 + uVar7 & *(int *)(this + 0x14) - 1U;
            *(byte *)(*(long *)(this + 8) + (ulong)uVar7) = bVar12;
            *(byte *)(*(long *)(this + 8) +
                     (ulong)((*(int *)(this + 0x14) - 1U & uVar7 - 0xf) + 0xf)) = bVar12;
            uVar4 = *puVar13;
            *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
            *(undefined8 *)(*(long *)this + (ulong)uVar7 * 8) = uVar4;
            puVar13 = puVar14;
            if (puVar3 + uVar2 == puVar14) goto LAB_00103bdc;
          }
          puVar13 = puVar13 + 1;
          pcVar16 = pcVar16 + 1;
        } while (puVar3 + uVar2 != puVar13);
      }
LAB_00103bdc:
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(puVar3);
        return;
      }
      goto LAB_00103c28;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103c28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool JPH::HashTable<JPH::BodyID, std::pair<JPH::BodyID, unsigned int>,
   JPH::UnorderedMapDetail<JPH::BodyID, unsigned int>, JPH::Hash<JPH::BodyID>,
   std::equal_to<JPH::BodyID> >::InsertKey<false>(JPH::BodyID const&, unsigned int&) */

bool __thiscall
JPH::
HashTable<JPH::BodyID,std::pair<JPH::BodyID,unsigned_int>,JPH::UnorderedMapDetail<JPH::BodyID,unsigned_int>,JPH::Hash<JPH::BodyID>,std::equal_to<JPH::BodyID>>
::InsertKey<false>(HashTable<JPH::BodyID,std::pair<JPH::BodyID,unsigned_int>,JPH::UnorderedMapDetail<JPH::BodyID,unsigned_int>,JPH::Hash<JPH::BodyID>,std::equal_to<JPH::BodyID>>
                   *this,BodyID *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  bool bVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  long in_FS_OFFSET;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int local_34;
  long local_30 [2];
  
  local_30[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x18) == 0) {
    if ((ulong)*(uint *)(this + 0x14) <
        (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10)) << 3) {
      rehash((uint)this);
    }
    else {
      GrowTable(this);
    }
  }
  pbVar24 = (byte *)&local_34;
  uVar27 = 0xcbf29ce484222325;
  local_34 = *(int *)param_1;
  do {
    bVar29 = *pbVar24;
    pbVar24 = pbVar24 + 1;
    uVar27 = (uVar27 ^ bVar29) * 0x100000001b3;
  } while (pbVar24 != (byte *)local_30);
  bVar29 = (byte)uVar27 | 0x80;
  uVar23 = 0xffffffff;
  uVar1 = *(int *)(this + 0x14) - 1;
  uVar28 = (uint)(uVar27 >> 7);
  while( true ) {
    uVar28 = uVar28 & uVar1;
    pbVar24 = (byte *)(*(long *)(this + 8) + (ulong)uVar28);
    bVar6 = *pbVar24;
    bVar7 = pbVar24[1];
    bVar8 = pbVar24[2];
    bVar9 = pbVar24[3];
    bVar10 = pbVar24[4];
    bVar11 = pbVar24[5];
    bVar12 = pbVar24[6];
    bVar13 = pbVar24[7];
    bVar14 = pbVar24[8];
    bVar15 = pbVar24[9];
    bVar16 = pbVar24[10];
    bVar17 = pbVar24[0xb];
    bVar18 = pbVar24[0xc];
    bVar19 = pbVar24[0xd];
    bVar20 = pbVar24[0xe];
    bVar21 = pbVar24[0xf];
    auVar31[0] = -(bVar29 == bVar6);
    auVar31[1] = -(bVar29 == bVar7);
    auVar31[2] = -(bVar29 == bVar8);
    auVar31[3] = -(bVar29 == bVar9);
    auVar31[4] = -(bVar29 == bVar10);
    auVar31[5] = -(bVar29 == bVar11);
    auVar31[6] = -(bVar29 == bVar12);
    auVar31[7] = -(bVar29 == bVar13);
    auVar31[8] = -(bVar29 == bVar14);
    auVar31[9] = -(bVar29 == bVar15);
    auVar31[10] = -(bVar29 == bVar16);
    auVar31[0xb] = -(bVar29 == bVar17);
    auVar31[0xc] = -(bVar29 == bVar18);
    auVar31[0xd] = -(bVar29 == bVar19);
    auVar31[0xe] = -(bVar29 == bVar20);
    auVar31[0xf] = -(bVar29 == bVar21);
    uVar3 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
    if (uVar3 != 0) {
      uVar26 = (uint)uVar3;
      uVar22 = uVar28;
      do {
        iVar4 = 0;
        for (uVar5 = uVar26; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          iVar4 = iVar4 + 1;
        }
        uVar22 = uVar22 + iVar4 & uVar1;
        if (*(int *)param_1 == *(int *)(*(long *)this + (ulong)uVar22 * 8)) {
          bVar25 = false;
          goto LAB_00103d41;
        }
        uVar22 = uVar22 + 1;
        bVar2 = (char)iVar4 + 1U & 0x1f;
        uVar5 = uVar26 >> bVar2;
        uVar26 = uVar26 >> bVar2;
      } while (uVar5 != 0);
    }
    if (uVar23 == 0xffffffff) {
      auVar32[0] = -(bVar6 == _LC20);
      auVar32[1] = -(bVar7 == UNK_00103e81);
      auVar32[2] = -(bVar8 == UNK_00103e82);
      auVar32[3] = -(bVar9 == UNK_00103e83);
      auVar32[4] = -(bVar10 == UNK_00103e84);
      auVar32[5] = -(bVar11 == UNK_00103e85);
      auVar32[6] = -(bVar12 == UNK_00103e86);
      auVar32[7] = -(bVar13 == UNK_00103e87);
      auVar32[8] = -(bVar14 == UNK_00103e88);
      auVar32[9] = -(bVar15 == UNK_00103e89);
      auVar32[10] = -(bVar16 == UNK_00103e8a);
      auVar32[0xb] = -(bVar17 == UNK_00103e8b);
      auVar32[0xc] = -(bVar18 == UNK_00103e8c);
      auVar32[0xd] = -(bVar19 == UNK_00103e8d);
      auVar32[0xe] = -(bVar20 == UNK_00103e8e);
      auVar32[0xf] = -(bVar21 == UNK_00103e8f);
      iVar4 = 0;
      uVar26 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar32[0xf] >> 7) << 0xf);
      for (uVar22 = uVar26; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      if (uVar26 != 0) {
        uVar23 = iVar4 + uVar28;
      }
    }
    auVar30[0] = -(bVar6 == 0);
    auVar30[1] = -(bVar7 == 0);
    auVar30[2] = -(bVar8 == 0);
    auVar30[3] = -(bVar9 == 0);
    auVar30[4] = -(bVar10 == 0);
    auVar30[5] = -(bVar11 == 0);
    auVar30[6] = -(bVar12 == 0);
    auVar30[7] = -(bVar13 == 0);
    auVar30[8] = -(bVar14 == 0);
    auVar30[9] = -(bVar15 == 0);
    auVar30[10] = -(bVar16 == 0);
    auVar30[0xb] = -(bVar17 == 0);
    auVar30[0xc] = -(bVar18 == 0);
    auVar30[0xd] = -(bVar19 == 0);
    auVar30[0xe] = -(bVar20 == 0);
    auVar30[0xf] = -(bVar21 == 0);
    uVar3 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
    if (uVar3 != 0) break;
    uVar28 = uVar28 + 0x10;
  }
  if (uVar23 == 0xffffffff) {
    iVar4 = 0;
    for (uVar23 = (uint)uVar3; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
      iVar4 = iVar4 + 1;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    uVar23 = iVar4 + uVar28;
  }
  uVar22 = uVar1 & uVar23;
  *(byte *)(*(long *)(this + 8) + (ulong)uVar22) = bVar29;
  *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar22 - 0xf) + 0xf)) =
       bVar29;
  bVar25 = true;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_00103d41:
  *param_2 = uVar22;
  if (local_30[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::PhysicsScene*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC23;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsScene::~PhysicsScene() */

void __thiscall JPH::PhysicsScene::~PhysicsScene(PhysicsScene *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */

void __thiscall JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




