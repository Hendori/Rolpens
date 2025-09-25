/* JPH::BodyCreationSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::BodyCreationSettings::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HashTable<JPH::GroupFilter const*, std::pair<JPH::GroupFilter const*, unsigned int>,
   JPH::UnorderedMapDetail<JPH::GroupFilter const*, unsigned int>, JPH::Hash<JPH::GroupFilter
   const*>, std::equal_to<JPH::GroupFilter const*> >::rehash(unsigned int) [clone .isra.0] */

void JPH::
     HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>
     ::rehash(uint param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined4 in_register_0000003c;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined8 local_48;
  long local_40 [2];
  
  uVar22 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
  uVar16 = (ulong)uVar22;
  puVar20 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = 0;
  if (uVar22 != 0) {
    do {
      while( true ) {
        pcVar1 = puVar20 + lVar8;
        if (*pcVar1 != '\0') break;
LAB_0010004a:
        lVar8 = lVar8 + 1;
        if ((uint)uVar16 <= (uint)lVar8) goto LAB_00100074;
      }
      if (*pcVar1 == '\x7f') {
        *pcVar1 = '\0';
        puVar20 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
        uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
        goto LAB_0010004a;
      }
      *pcVar1 = '\x7f';
      uVar22 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
      uVar16 = (ulong)uVar22;
      lVar8 = lVar8 + 1;
      puVar20 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
    } while ((uint)lVar8 < uVar22);
  }
LAB_00100074:
  puVar20[uVar16] = *puVar20;
  lVar8 = 1;
  do {
    lVar17 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
    iVar11 = (int)lVar8;
    puVar20 = (undefined1 *)(lVar17 + lVar8);
    lVar8 = lVar8 + 1;
    *(undefined1 *)
     (lVar17 + (ulong)(uint)(iVar11 + *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14))) =
         *puVar20;
    auVar6 = __LC0;
  } while (lVar8 != 0xf);
  uVar22 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
  uVar16 = (ulong)uVar22;
  uVar19 = uVar22 - 1;
  if (uVar22 != 0) {
    uVar22 = 0xfffffff1;
    lVar8 = 0;
    do {
      lVar17 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
      if (*(char *)(lVar17 + lVar8) == '\x7f') {
        lVar9 = *(long *)CONCAT44(in_register_0000003c,param_1);
        lVar14 = lVar8 * 0x10;
        while( true ) {
          local_48 = *(undefined8 *)(lVar9 + lVar14);
          uVar10 = 0xcbf29ce484222325;
          pbVar13 = (byte *)&local_48;
          do {
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
            uVar10 = (uVar10 ^ bVar7) * 0x100000001b3;
          } while (pbVar13 != (byte *)local_40);
          bVar7 = (byte)uVar10 | 0x80;
          uVar15 = (int)uVar16 - 1U & (uint)(uVar10 >> 7);
          auVar23 = *(undefined1 (*) [16])(lVar17 + (ulong)uVar15) & auVar6;
          uVar5 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
          uVar21 = uVar15;
          while (uVar5 == 0xffff) {
            uVar21 = uVar21 + 0x10 & uVar19;
            auVar23 = *(undefined1 (*) [16])(lVar17 + (ulong)uVar21) & auVar6;
            uVar5 = (ushort)(SUB161(auVar23 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
          }
          iVar11 = 0;
          for (uVar12 = uVar5 ^ 0xffff; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            iVar11 = iVar11 + 1;
          }
          uVar21 = iVar11 + uVar21 & uVar19;
          if (((uVar21 - uVar15 ^ (int)lVar8 - uVar15) & uVar19 & 0xfffffff0) == 0) {
            *(byte *)(lVar17 + lVar8) = bVar7;
            *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                     (ulong)((*(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U & uVar22)
                            + 0xf)) = bVar7;
            uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
            goto LAB_001000f0;
          }
          pbVar13 = (byte *)(lVar17 + (ulong)uVar21);
          lVar17 = (ulong)uVar21 * 0x10;
          if (*pbVar13 == 0) break;
          *pbVar13 = bVar7;
          *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                   (ulong)((uVar21 - 0xf &
                           *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U) + 0xf)) =
               bVar7;
          lVar9 = *(long *)CONCAT44(in_register_0000003c,param_1);
          puVar18 = (undefined8 *)(lVar17 + lVar9);
          puVar2 = (undefined8 *)(lVar9 + lVar14);
          uVar4 = *puVar2;
          *puVar2 = *puVar18;
          *puVar18 = uVar4;
          uVar3 = *(undefined4 *)(puVar2 + 1);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar18 + 1);
          *(undefined4 *)(puVar18 + 1) = uVar3;
          lVar17 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
          uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
        }
        *pbVar13 = bVar7;
        *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                 (ulong)((uVar21 - 0xf &
                         *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U) + 0xf)) =
             bVar7;
        *(undefined1 *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) + lVar8) = 0;
        *(undefined1 *)
         (*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
         (ulong)((*(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U & uVar22) + 0xf)) = 0
        ;
        puVar2 = (undefined8 *)(*(long *)CONCAT44(in_register_0000003c,param_1) + lVar14);
        uVar4 = puVar2[1];
        puVar18 = (undefined8 *)(*(long *)CONCAT44(in_register_0000003c,param_1) + lVar17);
        *puVar18 = *puVar2;
        puVar18[1] = uVar4;
        uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
      }
LAB_001000f0:
      lVar8 = lVar8 + 1;
      uVar22 = uVar22 + 1;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag) [clone .isra.0]
    */

void std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
     _M_construct<char_const*>(long *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *__dest;
  undefined1 (*pauVar5) [16];
  ulong __n;
  
  __n = param_3 - (long)param_2;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      param_1[1] = 1;
      *(undefined1 *)(*param_1 + 1) = 0;
      return;
    }
    if (__n == 0) {
      param_1[1] = 0;
      *__dest = 0;
      return;
    }
  }
  else {
    if ((long)__n < 0) {
      std::__throw_length_error("basic_string::_M_create");
      pauVar5 = (undefined1 (*) [16])(*JPH::Allocate)(0x100);
      uVar2 = __LC2;
      uVar1 = CONCAT44(_LC7,_UNK_00102458);
      *(undefined2 *)(pauVar5[4] + 8) = 0;
      uVar4 = _LC6;
      *(undefined8 *)pauVar5[1] = uVar2;
      *(undefined8 *)(pauVar5[1] + 8) = uVar1;
      uVar2 = _UNK_00102468;
      uVar1 = __LC5;
      *(undefined8 *)pauVar5[6] = 0x10000003f02;
      *(undefined8 *)(pauVar5[6] + 0xc) = uVar1;
      *(undefined8 *)(pauVar5[7] + 4) = uVar2;
      uVar3 = _LC7;
      *pauVar5 = (undefined1  [16])0x0;
      pauVar5[2] = (undefined1  [16])0x0;
      pauVar5[3] = (undefined1  [16])0x0;
      pauVar5[0xb] = (undefined1  [16])0x0;
      pauVar5[0xc] = (undefined1  [16])0x0;
      pauVar5[0xd] = (undefined1  [16])0x0;
      pauVar5[0xe] = (undefined1  [16])0x0;
      *(undefined8 *)pauVar5[4] = 0;
      *(undefined8 *)pauVar5[5] = 0;
      *(undefined8 *)(pauVar5[5] + 8) = 0xffffffffffffffff;
      *(undefined2 *)(pauVar5[6] + 8) = 0x100;
      *(undefined8 *)(pauVar5[7] + 0xc) = uVar4;
      *(undefined8 *)(pauVar5[8] + 8) = 0;
      pauVar5[9][0] = 0;
      *(undefined4 *)pauVar5[10] = 0;
      *(undefined4 *)(pauVar5[8] + 4) = uVar3;
      *(undefined4 *)(pauVar5[9] + 4) = uVar3;
      pauVar5[0xf] = (undefined1  [16])0x0;
      return;
    }
    __dest = (undefined1 *)(*JPH::Allocate)(__n + 1);
    param_1[2] = __n;
    *param_1 = (long)__dest;
  }
  memcpy(__dest,param_2,__n);
  param_1[1] = __n;
  *(undefined1 *)(*param_1 + __n) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::BodyCreationSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  
  pauVar5 = (undefined1 (*) [16])(*Allocate)(0x100);
  uVar2 = __LC2;
  uVar1 = CONCAT44(_LC7,_UNK_00102458);
  *(undefined2 *)(pauVar5[4] + 8) = 0;
  uVar4 = _LC6;
  *(undefined8 *)pauVar5[1] = uVar2;
  *(undefined8 *)(pauVar5[1] + 8) = uVar1;
  uVar2 = _UNK_00102468;
  uVar1 = __LC5;
  *(undefined8 *)pauVar5[6] = 0x10000003f02;
  *(undefined8 *)(pauVar5[6] + 0xc) = uVar1;
  *(undefined8 *)(pauVar5[7] + 4) = uVar2;
  uVar3 = _LC7;
  *pauVar5 = (undefined1  [16])0x0;
  pauVar5[2] = (undefined1  [16])0x0;
  pauVar5[3] = (undefined1  [16])0x0;
  pauVar5[0xb] = (undefined1  [16])0x0;
  pauVar5[0xc] = (undefined1  [16])0x0;
  pauVar5[0xd] = (undefined1  [16])0x0;
  pauVar5[0xe] = (undefined1  [16])0x0;
  *(undefined8 *)pauVar5[4] = 0;
  *(undefined8 *)pauVar5[5] = 0;
  *(undefined8 *)(pauVar5[5] + 8) = 0xffffffffffffffff;
  *(undefined2 *)(pauVar5[6] + 8) = 0x100;
  *(undefined8 *)(pauVar5[7] + 0xc) = uVar4;
  *(undefined8 *)(pauVar5[8] + 8) = 0;
  pauVar5[9][0] = 0;
  *(undefined4 *)pauVar5[10] = 0;
  *(undefined4 *)(pauVar5[8] + 4) = uVar3;
  *(undefined4 *)(pauVar5[9] + 4) = uVar3;
  pauVar5[0xf] = (undefined1  [16])0x0;
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::BodyCreationSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    plVar2 = *(long **)((long)param_1 + 0xf8);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    plVar2 = *(long **)((long)param_1 + 0xf0);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    plVar2 = *(long **)((long)param_1 + 0x50);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::BodyCreationSettings::GetShape() const [clone .part.0] */

long * __thiscall JPH::BodyCreationSettings::GetShape(BodyCreationSettings *this)

{
  long *plVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long *local_38 [2];
  long local_28 [2];
  char local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 0xf0) == (long *)0x0) {
LAB_00100538:
    plVar2 = (long *)0x0;
  }
  else {
    (**(code **)(**(long **)(this + 0xf0) + 0x20))(local_38);
    plVar2 = local_38[0];
    if (local_18 != '\x01') {
      (*Trace)("Error: %s",local_38[0]);
      if (local_18 != '\x01') {
        if ((local_18 == '\x02') && (local_38[0] != local_28)) {
          (*Free)();
        }
        goto LAB_00100538;
      }
      plVar2 = (long *)0x0;
    }
    if (local_38[0] != (long *)0x0) {
      LOCK();
      plVar1 = local_38[0] + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_38[0] + 8))();
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar2;
}



/* JPH::GetRTTIOfType(JPH::BodyCreationSettings*) */

undefined1 * JPH::GetRTTIOfType(BodyCreationSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::BodyCreationSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::BodyCreationSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::BodyCreationSettings*)::rtti,"BodyCreationSettings"
                      ,0x100,GetRTTIOfType(JPH::BodyCreationSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::BodyCreationSettings*)::{lambda(void*)#1}::_FUN,
                      BodyCreationSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::BodyCreationSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::BodyCreationSettings*)::rtti);
      return GetRTTIOfType(JPH::BodyCreationSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::BodyCreationSettings*)::rtti;
}



/* JPH::BodyCreationSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::BodyCreationSettings::SaveBinaryState(BodyCreationSettings *this,StreamOut *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,0x10);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  JPH::CollisionGroup::SaveBinaryState((StreamOut *)(this + 0x50));
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x48,2);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x61,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x62,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 99,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 100,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x65,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x66,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x67,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x68,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x69,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x6c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x74,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x78,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x7c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x80,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x84,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x88,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x8c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x90,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x94,4);
  JPH::MassProperties::SaveBinaryState((StreamOut *)(this + 0xa0));
  return;
}



/* JPH::BodyCreationSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::BodyCreationSettings::RestoreBinaryState(BodyCreationSettings *this,StreamIn *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,0x10);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  JPH::CollisionGroup::RestoreBinaryState((StreamIn *)(this + 0x50));
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x48,2);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x61,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x62,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 99,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 100,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x65,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x66,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x67,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x68,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x69,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x6c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x74,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x78,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x7c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x80,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x84,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x88,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x8c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x90,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x94,4);
  JPH::MassProperties::RestoreBinaryState((StreamIn *)(this + 0xa0));
  return;
}



/* JPH::BodyCreationSettings::ConvertShapeSettings() */

void JPH::BodyCreationSettings::ConvertShapeSettings(void)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long in_RSI;
  ulong uVar5;
  long *in_RDI;
  long *plVar6;
  long in_FS_OFFSET;
  long *local_48;
  long local_40;
  long local_38 [2];
  char local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(in_RSI + 0xf8);
  plVar6 = *(long **)(in_RSI + 0xf0);
  if (lVar3 == 0) {
    if (plVar6 == (long *)0x0) {
      local_28 = 0;
      local_48 = local_38;
      std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
      _M_construct<char_const*>(&local_48,"No shape present!");
      local_28 = '\x02';
      *(undefined1 *)(in_RDI + 4) = 2;
      *in_RDI = (long)(in_RDI + 2);
      if (local_48 == local_38) {
        uVar5 = local_40 + 1;
        if ((uint)uVar5 < 8) {
LAB_00100cc8:
          if ((uVar5 & 4) == 0) {
            if (((int)uVar5 != 0) && (*(char *)(in_RDI + 2) = (char)*local_48, (uVar5 & 2) != 0)) {
              *(undefined2 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)local_48 + ((uVar5 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)(in_RDI + 2) = (int)*local_48;
            *(undefined4 *)((long)in_RDI + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)local_48 + ((uVar5 & 0xffffffff) - 4));
          }
        }
        else {
          in_RDI[2] = *local_48;
          *(undefined8 *)((long)in_RDI + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)local_48 + ((uVar5 & 0xffffffff) - 8));
          lVar3 = (long)(in_RDI + 2) - ((ulong)(in_RDI + 3) & 0xfffffffffffffff8);
          uVar4 = (uint)uVar5 + (int)lVar3 & 0xfffffff8;
          if (7 < uVar4) {
            uVar2 = 0;
            do {
              uVar5 = (ulong)uVar2;
              uVar2 = uVar2 + 8;
              *(undefined8 *)(((ulong)(in_RDI + 3) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)local_48 + (uVar5 - lVar3));
            } while (uVar2 < uVar4);
          }
        }
      }
      else {
        *in_RDI = (long)local_48;
        in_RDI[2] = local_38[0];
      }
LAB_00100b73:
      in_RDI[1] = local_40;
    }
    else {
      (**(code **)(*plVar6 + 0x20))(&local_48);
      if (local_28 == '\x01') {
        plVar6 = *(long **)(in_RSI + 0xf8);
        if (plVar6 != local_48) {
          if (plVar6 != (long *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
          *(long **)(in_RSI + 0xf8) = local_48;
          if (local_48 != (long *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          goto LAB_00100b15;
        }
        plVar6 = *(long **)(in_RSI + 0xf0);
        if (plVar6 != (long *)0x0) goto LAB_00100b21;
        *(undefined1 *)(in_RDI + 4) = 1;
      }
      else {
LAB_00100b15:
        plVar6 = *(long **)(in_RSI + 0xf0);
        if (plVar6 != (long *)0x0) {
LAB_00100b21:
          LOCK();
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
          *(undefined8 *)(in_RSI + 0xf0) = 0;
        }
        *(char *)(in_RDI + 4) = local_28;
        if (local_28 != '\x01') {
          if (local_28 != '\x02') goto LAB_00100ad5;
          *in_RDI = (long)(in_RDI + 2);
          if (local_48 == local_38) {
            uVar5 = local_40 + 1;
            if ((uint)uVar5 < 8) goto LAB_00100cc8;
            in_RDI[2] = *local_48;
            *(undefined8 *)((long)in_RDI + (uVar5 & 0xffffffff) + 8) =
                 *(undefined8 *)((long)local_48 + ((uVar5 & 0xffffffff) - 8));
            lVar3 = (long)(in_RDI + 2) - ((ulong)(in_RDI + 3) & 0xfffffffffffffff8);
            uVar4 = (uint)uVar5 + (int)lVar3 & 0xfffffff8;
            if (7 < uVar4) {
              uVar2 = 0;
              do {
                uVar5 = (ulong)uVar2;
                uVar2 = uVar2 + 8;
                *(undefined8 *)(((ulong)(in_RDI + 3) & 0xfffffffffffffff8) + uVar5) =
                     *(undefined8 *)((long)local_48 + (uVar5 - lVar3));
              } while (uVar2 < uVar4);
            }
          }
          else {
            *in_RDI = (long)local_48;
            in_RDI[2] = local_38[0];
          }
          goto LAB_00100b73;
        }
      }
      *in_RDI = (long)local_48;
    }
    goto LAB_00100ad5;
  }
  if (plVar6 == (long *)0x0) {
LAB_00100ac8:
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  else {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    lVar3 = *(long *)(in_RSI + 0xf8);
    *(undefined8 *)(in_RSI + 0xf0) = 0;
    if (lVar3 != 0) goto LAB_00100ac8;
  }
  *(undefined1 *)(in_RDI + 4) = 1;
  *in_RDI = lVar3;
LAB_00100ad5:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::BodyCreationSettings::GetShape() const */

void __thiscall JPH::BodyCreationSettings::GetShape(BodyCreationSettings *this)

{
  if (*(long *)(this + 0xf8) != 0) {
    return;
  }
  GetShape(this);
  return;
}



/* JPH::BodyCreationSettings::GetMassProperties() const */

void JPH::BodyCreationSettings::GetMassProperties(void)

{
  float fVar1;
  BodyCreationSettings BVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float *pfVar12;
  float *pfVar13;
  long *plVar14;
  BodyCreationSettings *in_RSI;
  float *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  BVar2 = in_RSI[0x90];
  *in_RDI = 0.0;
  *(undefined1 (*) [16])(in_RDI + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 0x10) = (undefined1  [16])0x0;
  if (BVar2 == (BodyCreationSettings)0x1) {
    plVar14 = *(long **)(in_RSI + 0xf8);
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)GetShape(in_RSI);
    }
    (**(code **)(*plVar14 + 0x40))(&local_78);
    fVar1 = *(float *)(in_RSI + 0xa0);
    *(undefined8 *)in_RDI = local_78;
    *(undefined8 *)(in_RDI + 2) = uStack_70;
    *(undefined8 *)(in_RDI + 4) = local_68;
    *(undefined8 *)(in_RDI + 6) = uStack_60;
    *(undefined8 *)(in_RDI + 8) = local_58;
    *(undefined8 *)(in_RDI + 10) = uStack_50;
    *(undefined8 *)(in_RDI + 0xc) = local_48;
    *(undefined8 *)(in_RDI + 0xe) = uStack_40;
    *(undefined8 *)(in_RDI + 0x10) = local_38;
    *(undefined8 *)(in_RDI + 0x12) = uStack_30;
    JPH::MassProperties::ScaleToMass(fVar1);
    fVar1 = *(float *)(in_RSI + 0x94);
    pfVar12 = in_RDI;
    do {
      pfVar13 = pfVar12 + 4;
      *pfVar13 = pfVar12[4] * fVar1;
      pfVar12[5] = pfVar12[5] * fVar1;
      pfVar12[6] = pfVar12[6] * fVar1;
      pfVar12[7] = pfVar12[7] * fVar1;
      pfVar12 = pfVar13;
    } while (pfVar13 != in_RDI + 0x10);
    in_RDI[0x13] = 1.0;
  }
  else if (BVar2 == (BodyCreationSettings)0x2) {
    uVar3 = *(undefined8 *)(in_RSI + 0xa8);
    uVar4 = *(undefined8 *)(in_RSI + 0xb0);
    uVar5 = *(undefined8 *)(in_RSI + 0xb8);
    uVar6 = *(undefined8 *)(in_RSI + 0xc0);
    uVar7 = *(undefined8 *)(in_RSI + 200);
    uVar8 = *(undefined8 *)(in_RSI + 0xd0);
    uVar9 = *(undefined8 *)(in_RSI + 0xd8);
    uVar10 = *(undefined8 *)(in_RSI + 0xe0);
    uVar11 = *(undefined8 *)(in_RSI + 0xe8);
    *(undefined8 *)in_RDI = *(undefined8 *)(in_RSI + 0xa0);
    *(undefined8 *)(in_RDI + 2) = uVar3;
    *(undefined8 *)(in_RDI + 4) = uVar4;
    *(undefined8 *)(in_RDI + 6) = uVar5;
    *(undefined8 *)(in_RDI + 8) = uVar6;
    *(undefined8 *)(in_RDI + 10) = uVar7;
    *(undefined8 *)(in_RDI + 0xc) = uVar8;
    *(undefined8 *)(in_RDI + 0xe) = uVar9;
    *(undefined8 *)(in_RDI + 0x10) = uVar10;
    *(undefined8 *)(in_RDI + 0x12) = uVar11;
  }
  else if (BVar2 == (BodyCreationSettings)0x0) {
    plVar14 = *(long **)(in_RSI + 0xf8);
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)GetShape(in_RSI);
    }
    (**(code **)(*plVar14 + 0x40))(&local_78);
    fVar1 = *(float *)(in_RSI + 0x94);
    *(undefined8 *)in_RDI = local_78;
    *(undefined8 *)(in_RDI + 2) = uStack_70;
    *(undefined8 *)(in_RDI + 4) = local_68;
    *(undefined8 *)(in_RDI + 6) = uStack_60;
    *(undefined8 *)(in_RDI + 8) = local_58;
    *(undefined8 *)(in_RDI + 10) = uStack_50;
    *(undefined8 *)(in_RDI + 0xc) = local_48;
    *(undefined8 *)(in_RDI + 0xe) = uStack_40;
    *(undefined8 *)(in_RDI + 0x10) = local_38;
    *(undefined8 *)(in_RDI + 0x12) = uStack_30;
    pfVar12 = in_RDI;
    do {
      pfVar13 = pfVar12 + 4;
      *pfVar13 = pfVar12[4] * fVar1;
      pfVar12[5] = pfVar12[5] * fVar1;
      pfVar12[6] = pfVar12[6] * fVar1;
      pfVar12[7] = pfVar12[7] * fVar1;
      pfVar12 = pfVar13;
    } while (pfVar13 != in_RDI + 0x10);
    in_RDI[0x13] = 1.0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BodyCreationSettings::sRestoreWithChildren(JPH::StreamIn&, JPH::Array<JPH::Ref<JPH::Shape>,
   JPH::STLAllocator<JPH::Ref<JPH::Shape> > >&, JPH::Array<JPH::Ref<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::Ref<JPH::PhysicsMaterial> > >&, JPH::Array<JPH::Ref<JPH::GroupFilter>,
   JPH::STLAllocator<JPH::Ref<JPH::GroupFilter> > >&) */

BodyCreationSettings * __thiscall
JPH::BodyCreationSettings::sRestoreWithChildren
          (BodyCreationSettings *this,StreamIn *param_1,Array *param_2,Array *param_3,Array *param_4
          )

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  BodyCreationSettings *extraout_RAX;
  StreamOut *pSVar5;
  UnorderedMap *extraout_RDX;
  StreamIn *pSVar6;
  char *this_00;
  Array *pAVar7;
  BodyCreationSettings BVar8;
  ulong uVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined4 uStack_1cc;
  long lStack_1c8;
  BodyCreationSettings *pBStack_1c0;
  BodyCreationSettings *pBStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  Array *pAStack_1a0;
  long *local_198;
  ulong local_190;
  long local_188 [2];
  char local_178;
  long *local_168;
  long local_160;
  long local_158 [2];
  byte local_148;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined2 local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  BodyCreationSettings local_a8;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long *local_48;
  long *plStack_40;
  long local_30;
  
  local_128 = __LC2;
  uStack_120 = CONCAT44(_LC7,_UNK_00102458);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x100] = (BodyCreationSettings)0x0;
  local_f0 = 0;
  local_d8 = 0x10000003f02;
  local_cc = __LC5;
  uStack_c4 = _UNK_00102468;
  local_bc = _LC6;
  local_d0 = 0x100;
  local_138 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_b4 = _LC7;
  local_f8 = 0;
  local_e8 = (long *)0x0;
  local_e0 = 0xffffffffffffffff;
  local_b0 = 0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_a8 = (BodyCreationSettings)0x0;
  local_98 = 0;
  local_a4 = _LC7;
  local_48 = (long *)0x0;
  plStack_40 = (long *)0x0;
  pAStack_1a0 = (Array *)0x1010db;
  pAVar7 = param_4;
  RestoreBinaryState((BodyCreationSettings *)local_138,param_1);
  pAStack_1a0 = (Array *)0x1010e5;
  cVar4 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar4 == '\0') {
    pAStack_1a0 = (Array *)0x1010f3;
    cVar4 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if (cVar4 == '\0') {
      pAStack_1a0 = (Array *)0x1011e1;
      pSVar6 = param_1;
      JPH::Shape::sRestoreWithChildren((StreamIn *)&local_198,(Array *)param_1,param_2);
      plVar2 = local_198;
      if (local_178 == '\x02') {
        if (this[0x100] == (BodyCreationSettings)0x1) {
          plVar3 = *(long **)(this + 0xf8);
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              pAStack_1a0 = (Array *)0x1017cd;
              (**(code **)(*plVar3 + 8))();
            }
          }
          plVar3 = *(long **)(this + 0xf0);
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              pAStack_1a0 = (Array *)0x1017d8;
              (**(code **)(*plVar3 + 0x18))();
            }
          }
          plVar3 = *(long **)(this + 0x50);
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              pAStack_1a0 = (Array *)0x101750;
              (**(code **)(*plVar3 + 0x18))();
            }
          }
        }
        else if ((this[0x100] == (BodyCreationSettings)0x2) &&
                (*(BodyCreationSettings **)this != this + 0x10)) {
          pAStack_1a0 = (Array *)0x1015f6;
          (*Free)();
        }
        this[0x100] = (BodyCreationSettings)0x0;
        *(BodyCreationSettings **)this = this + 0x10;
        if ((plVar2 == (long *)0x0) && (lVar10 = 0, uVar9 = local_190, local_190 != 0)) {
LAB_001017f2:
          this_00 = "basic_string: construction from null is not valid";
          pAStack_1a0 = (Array *)0x1017fe;
          std::__throw_logic_error("basic_string: construction from null is not valid");
          lStack_1c8 = *(long *)(in_FS_OFFSET + 0x28);
          pBStack_1c0 = this;
          pBStack_1b8 = this + 0x10;
          uStack_1b0 = uVar9;
          lStack_1a8 = lVar10;
          pAStack_1a0 = param_4;
          SaveBinaryState((BodyCreationSettings *)this_00,(StreamOut *)pSVar6);
          if ((extraout_RDX == (UnorderedMap *)0x0) || (param_3 == (Array *)0x0)) {
            uStack_1cc = 0xffffffff;
            (**(code **)(*(long *)pSVar6 + 0x10))(pSVar6,&uStack_1cc,4);
          }
          else {
            pSVar5 = *(StreamOut **)((BodyCreationSettings *)this_00 + 0xf8);
            if (pSVar5 == (StreamOut *)0x0) {
              pSVar5 = (StreamOut *)GetShape((BodyCreationSettings *)this_00);
            }
            JPH::Shape::SaveWithChildren(pSVar5,(UnorderedMap *)pSVar6,extraout_RDX);
          }
          if (lStack_1c8 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          StreamUtils::SaveObjectReference<JPH::GroupFilter>
                    ((StreamOut *)pSVar6,*(GroupFilter **)((BodyCreationSettings *)this_00 + 0x50),
                     (UnorderedMap *)pAVar7);
          return extraout_RAX;
        }
        pAStack_1a0 = (Array *)0x101514;
        std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
        _M_construct<char_const*>(this,plVar2,(long)plVar2 + local_190);
        this[0x100] = (BodyCreationSettings)0x2;
      }
      else {
        if (local_198 != plStack_40) {
          if (plStack_40 != (long *)0x0) {
            LOCK();
            plVar3 = plStack_40 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              pAStack_1a0 = (Array *)0x101616;
              (**(code **)(*plStack_40 + 8))();
            }
          }
          plStack_40 = plVar2;
          if (plVar2 != (long *)0x0) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
          }
        }
        if (local_48 != (long *)0x0) {
          LOCK();
          plVar2 = local_48 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            pAStack_1a0 = (Array *)0x101606;
            (**(code **)(*local_48 + 0x18))();
          }
          local_48 = (long *)0x0;
        }
        pAStack_1a0 = (Array *)0x101255;
        StreamUtils::RestoreObjectReference<JPH::GroupFilter>
                  ((StreamUtils *)&local_168,param_1,param_4);
        plVar2 = local_168;
        uVar9 = (ulong)local_148;
        if (local_148 == 2) {
          if (this[0x100] == (BodyCreationSettings)0x1) {
            plVar3 = *(long **)(this + 0xf8);
            if (plVar3 != (long *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                pAStack_1a0 = (Array *)0x1017e3;
                (**(code **)(*plVar3 + 8))();
              }
            }
            plVar3 = *(long **)(this + 0xf0);
            if (plVar3 != (long *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                pAStack_1a0 = (Array *)0x1017eb;
                (**(code **)(*plVar3 + 0x18))();
              }
            }
            plVar3 = *(long **)(this + 0x50);
            if (plVar3 != (long *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                pAStack_1a0 = (Array *)0x1017ac;
                (**(code **)(*plVar3 + 0x18))();
              }
            }
          }
          else if ((this[0x100] == (BodyCreationSettings)0x2) &&
                  (*(BodyCreationSettings **)this != this + 0x10)) {
            pAStack_1a0 = (Array *)0x101653;
            (*Free)();
          }
          this[0x100] = (BodyCreationSettings)0x0;
          *(BodyCreationSettings **)this = this + 0x10;
          if ((plVar2 == (long *)0x0) &&
             (param_4 = (Array *)0x0, pSVar6 = param_1, lVar10 = local_160, local_160 != 0))
          goto LAB_001017f2;
          pAStack_1a0 = (Array *)0x10167a;
          std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
          _M_construct<char_const*>(this,plVar2,(long)plVar2 + local_160);
          BVar8 = (BodyCreationSettings)0x2;
        }
        else {
          if (local_168 != local_e8) {
            if (local_e8 != (long *)0x0) {
              LOCK();
              plVar3 = local_e8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                pAStack_1a0 = (Array *)0x101289;
                (**(code **)(*local_e8 + 0x18))();
              }
            }
            local_e8 = plVar2;
            if (plVar2 != (long *)0x0) {
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
            }
          }
          if (this[0x100] == (BodyCreationSettings)0x1) {
            plVar2 = *(long **)(this + 0xf8);
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar3 = plVar2 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                pAStack_1a0 = (Array *)0x1017c2;
                (**(code **)(*plVar2 + 8))();
              }
            }
            plVar2 = *(long **)(this + 0xf0);
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar3 = plVar2 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                pAStack_1a0 = (Array *)0x1017b7;
                (**(code **)(*plVar2 + 0x18))();
              }
            }
            plVar2 = *(long **)(this + 0x50);
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar3 = plVar2 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                pAStack_1a0 = (Array *)0x1016f4;
                (**(code **)(*plVar2 + 0x18))();
              }
            }
          }
          else if ((this[0x100] == (BodyCreationSettings)0x2) &&
                  (*(BodyCreationSettings **)this != this + 0x10)) {
            pAStack_1a0 = (Array *)0x1015d6;
            (*Free)();
          }
          this[0x100] = (BodyCreationSettings)0x0;
          *(undefined8 *)(this + 0x40) = local_f8;
          *(undefined8 *)this = local_138._0_8_;
          *(undefined8 *)(this + 8) = local_138._8_8_;
          *(undefined8 *)(this + 0x10) = local_128;
          *(undefined8 *)(this + 0x18) = uStack_120;
          *(undefined2 *)(this + 0x48) = local_f0;
          *(undefined8 *)(this + 0x20) = local_118._0_8_;
          *(undefined8 *)(this + 0x28) = local_118._8_8_;
          *(long **)(this + 0x50) = local_e8;
          *(undefined8 *)(this + 0x30) = local_108._0_8_;
          *(undefined8 *)(this + 0x38) = local_108._8_8_;
          if (local_e8 != (long *)0x0) {
            LOCK();
            *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
            UNLOCK();
          }
          *(undefined8 *)(this + 0x58) = local_e0;
          *(undefined8 *)(this + 0x6c) = local_cc;
          *(undefined8 *)(this + 0x74) = uStack_c4;
          *(undefined4 *)(this + 0x84) = local_b4;
          *(undefined8 *)(this + 0x60) = local_d8;
          *(ulong *)(this + 0xa0) = CONCAT44(uStack_94,local_98);
          *(undefined8 *)(this + 0xa8) = uStack_90;
          *(undefined4 *)(this + 0x94) = local_a4;
          *(undefined2 *)(this + 0x68) = local_d0;
          *(undefined8 *)(this + 0xb0) = local_88._0_8_;
          *(undefined8 *)(this + 0xb8) = local_88._8_8_;
          *(undefined8 *)(this + 0x7c) = local_bc;
          *(undefined8 *)(this + 0xc0) = local_78._0_8_;
          *(undefined8 *)(this + 200) = local_78._8_8_;
          *(undefined8 *)(this + 0x88) = local_b0;
          *(undefined8 *)(this + 0xd0) = local_68._0_8_;
          *(undefined8 *)(this + 0xd8) = local_68._8_8_;
          this[0x90] = local_a8;
          *(undefined8 *)(this + 0xe0) = local_58._0_8_;
          *(undefined8 *)(this + 0xe8) = local_58._8_8_;
          *(long **)(this + 0xf0) = local_48;
          if (local_48 != (long *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          *(long **)(this + 0xf8) = plStack_40;
          if (plStack_40 != (long *)0x0) {
            LOCK();
            *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
            UNLOCK();
          }
          BVar8 = (BodyCreationSettings)0x1;
        }
        this[0x100] = BVar8;
        if (local_148 == 1) {
          if (local_168 != (long *)0x0) {
            LOCK();
            plVar2 = local_168 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              pAStack_1a0 = (Array *)0x10169f;
              (**(code **)(*local_168 + 0x18))();
            }
          }
        }
        else if ((local_148 == 2) && (local_168 != local_158)) {
          pAStack_1a0 = (Array *)0x101591;
          (*Free)();
        }
      }
      if (local_178 == '\x01') {
        if (local_198 != (long *)0x0) {
          LOCK();
          plVar2 = local_198 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            pAStack_1a0 = (Array *)0x10156e;
            (**(code **)(*local_198 + 8))();
          }
        }
      }
      else if ((local_178 == '\x02') && (local_198 != local_188)) {
        pAStack_1a0 = (Array *)0x101467;
        (*Free)();
      }
      goto LAB_0010113a;
    }
  }
  if (this[0x100] == (BodyCreationSettings)0x1) {
    plVar2 = *(long **)(this + 0xf8);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        pAStack_1a0 = (Array *)0x1015a6;
        (**(code **)(*plVar2 + 8))();
      }
    }
    plVar2 = *(long **)(this + 0xf0);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        pAStack_1a0 = (Array *)0x1015b6;
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    plVar2 = *(long **)(this + 0x50);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        pAStack_1a0 = (Array *)0x1014c0;
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  else if ((this[0x100] == (BodyCreationSettings)0x2) &&
          (*(BodyCreationSettings **)this != this + 0x10)) {
    pAStack_1a0 = (Array *)0x1011c6;
    (*Free)();
  }
  *(BodyCreationSettings **)this = this + 0x10;
  this[0x100] = (BodyCreationSettings)0x0;
  pAStack_1a0 = (Array *)0x101133;
  std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
  _M_construct<char_const*>(this,"Error reading body creation settings");
  this[0x100] = (BodyCreationSettings)0x2;
LAB_0010113a:
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      pAStack_1a0 = (Array *)0x101526;
      (**(code **)(*plStack_40 + 8))();
    }
  }
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      pAStack_1a0 = (Array *)0x101546;
      (**(code **)(*local_48 + 0x18))();
    }
  }
  if (local_e8 != (long *)0x0) {
    LOCK();
    plVar2 = local_e8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      pAStack_1a0 = (Array *)0x101536;
      (**(code **)(*local_e8 + 0x18))();
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    pAStack_1a0 = (Array *)0x1017f2;
    __stack_chk_fail();
  }
  return this;
}



/* JPH::BodyCreationSettings::SaveWithChildren(JPH::StreamOut&, JPH::UnorderedMap<JPH::Shape const*,
   unsigned int, JPH::Hash<JPH::Shape const*>, std::equal_to<JPH::Shape const*> >*,
   JPH::UnorderedMap<JPH::PhysicsMaterial const*, unsigned int, JPH::Hash<JPH::PhysicsMaterial
   const*>, std::equal_to<JPH::PhysicsMaterial const*> >*, JPH::UnorderedMap<JPH::GroupFilter
   const*, unsigned int, JPH::Hash<JPH::GroupFilter const*>, std::equal_to<JPH::GroupFilter const*>
   >*) const */

void __thiscall
JPH::BodyCreationSettings::SaveWithChildren
          (BodyCreationSettings *this,StreamOut *param_1,UnorderedMap *param_2,UnorderedMap *param_3
          ,UnorderedMap *param_4)

{
  StreamOut *pSVar1;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  SaveBinaryState(this,param_1);
  if ((param_2 == (UnorderedMap *)0x0) || (param_3 == (UnorderedMap *)0x0)) {
    local_34 = 0xffffffff;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  }
  else {
    pSVar1 = *(StreamOut **)(this + 0xf8);
    if (pSVar1 == (StreamOut *)0x0) {
      pSVar1 = (StreamOut *)GetShape(this);
    }
    JPH::Shape::SaveWithChildren(pSVar1,(UnorderedMap *)param_1,param_2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    StreamUtils::SaveObjectReference<JPH::GroupFilter>
              (param_1,*(GroupFilter **)(this + 0x50),param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::Result<JPH::Ref<JPH::GroupFilter> >
   JPH::StreamUtils::RestoreObjectReference<JPH::GroupFilter>(JPH::StreamIn&,
   JPH::Array<JPH::Ref<JPH::GroupFilter>, JPH::STLAllocator<JPH::Ref<JPH::GroupFilter> > >&) */

StreamUtils * __thiscall
JPH::StreamUtils::RestoreObjectReference<JPH::GroupFilter>
          (StreamUtils *this,StreamIn *param_1,Array *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  uint local_5c;
  StreamUtils *local_58;
  long local_50;
  undefined8 local_48 [2];
  StreamUtils local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = *(long *)param_1;
  this[0x20] = (StreamUtils)0x0;
  local_5c = 0xffffffff;
  (**(code **)(lVar12 + 0x10))(param_1,&local_5c,4);
  if (local_5c == 0xffffffff) {
    if (this[0x20] == (StreamUtils)0x1) {
      plVar3 = *(long **)this;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 0x18))();
        }
      }
    }
    else if ((this[0x20] == (StreamUtils)0x2) && (*(StreamUtils **)this != this + 0x10)) {
      (*Free)();
    }
    *(undefined8 *)this = 0;
    this[0x20] = (StreamUtils)0x1;
    goto LAB_00101a28;
  }
  if ((ulong)local_5c < *(ulong *)param_2) {
    lVar12 = *(long *)(*(long *)(param_2 + 0x10) + (ulong)local_5c * 8);
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    if (this[0x20] == (StreamUtils)0x1) {
      plVar3 = *(long **)this;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 0x18))();
        }
      }
    }
    else if ((this[0x20] == (StreamUtils)0x2) && (*(StreamUtils **)this != this + 0x10)) {
      (*Free)();
    }
    *(long *)this = lVar12;
    this[0x20] = (StreamUtils)0x1;
    goto LAB_00101a28;
  }
  JPH::GroupFilter::sRestoreFromBinaryState((StreamIn *)&local_58);
  if (this[0x20] == (StreamUtils)0x1) {
    plVar3 = *(long **)this;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 0x18))();
      }
    }
LAB_00101a71:
    this[0x20] = local_38;
    if (local_38 != (StreamUtils)0x1) goto LAB_00101a81;
LAB_00101b76:
    *(StreamUtils **)this = local_58;
  }
  else {
    if ((this[0x20] != (StreamUtils)0x2) || (*(StreamUtils **)this == this + 0x10))
    goto LAB_00101a71;
    (*Free)();
    this[0x20] = local_38;
    if (local_38 == (StreamUtils)0x1) goto LAB_00101b76;
LAB_00101a81:
    if (local_38 == (StreamUtils)0x2) {
      *(StreamUtils **)this = this + 0x10;
      if (local_58 != (StreamUtils *)local_48) {
        *(StreamUtils **)this = local_58;
        *(long *)(this + 8) = local_50;
        *(undefined8 *)(this + 0x10) = local_48[0];
        goto LAB_00101a28;
      }
      uVar7 = local_50 + 1;
      uVar6 = (uint)uVar7;
      if (uVar6 < 8) {
        if ((uVar7 & 4) == 0) {
          if ((uVar6 != 0) && (this[0x10] = *local_58, (uVar7 & 2) != 0)) {
            *(undefined2 *)(this + (uVar7 & 0xffffffff) + 0xe) =
                 *(undefined2 *)(local_58 + ((uVar7 & 0xffffffff) - 2));
          }
        }
        else {
          *(undefined4 *)(this + 0x10) = *(undefined4 *)local_58;
          *(undefined4 *)(this + (uVar7 & 0xffffffff) + 0xc) =
               *(undefined4 *)(local_58 + ((uVar7 & 0xffffffff) - 4));
        }
      }
      else {
        *(undefined8 *)(this + 0x10) = *(undefined8 *)local_58;
        *(undefined8 *)(this + (uVar7 & 0xffffffff) + 8) =
             *(undefined8 *)(local_58 + ((uVar7 & 0xffffffff) - 8));
        lVar12 = (long)(this + 0x10) - ((ulong)(this + 0x18) & 0xfffffffffffffff8);
        uVar6 = uVar6 + (int)lVar12 & 0xfffffff8;
        if (7 < uVar6) {
          uVar11 = 0;
          do {
            uVar7 = (ulong)uVar11;
            uVar11 = uVar11 + 8;
            *(undefined8 *)(((ulong)(this + 0x18) & 0xfffffffffffffff8) + uVar7) =
                 *(undefined8 *)(local_58 + (uVar7 - lVar12));
          } while (uVar11 < uVar6);
        }
      }
      *(long *)(this + 8) = local_50;
      if (this[0x20] == (StreamUtils)0x2) goto LAB_00101a28;
    }
  }
  lVar12 = *(long *)param_2;
  uVar7 = lVar12 + 1;
  if (*(ulong *)(param_2 + 8) < uVar7) {
    uVar5 = *(ulong *)(param_2 + 8) * 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    puVar8 = (undefined8 *)(*Allocate)(uVar7 * 8);
    puVar13 = *(undefined8 **)(param_2 + 0x10);
    if (puVar13 != (undefined8 *)0x0) {
      lVar12 = *(long *)param_2;
      if (puVar8 < puVar13) {
        for (puVar9 = puVar8; puVar9 < puVar8 + lVar12; puVar9 = puVar9 + 1) {
          uVar4 = *puVar13;
          puVar13 = puVar13 + 1;
          *puVar9 = uVar4;
        }
      }
      else {
        puVar13 = puVar13 + lVar12 + -1;
        puVar9 = puVar8 + lVar12 + -1;
        if (!CARRY8(lVar12 * 8 - 8,(ulong)puVar8)) {
          do {
            uVar4 = *puVar13;
            puVar10 = puVar9 + -1;
            puVar13 = puVar13 + -1;
            *puVar9 = uVar4;
            puVar9 = puVar10;
          } while (puVar8 <= puVar10);
        }
      }
      (*Free)();
    }
    lVar12 = *(long *)param_2;
    *(undefined8 **)(param_2 + 0x10) = puVar8;
    *(ulong *)(param_2 + 8) = uVar7;
    uVar7 = lVar12 + 1;
  }
  else {
    puVar8 = *(undefined8 **)(param_2 + 0x10);
  }
  *(ulong *)param_2 = uVar7;
  lVar2 = *(long *)this;
  puVar8[lVar12] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
LAB_00101a28:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HashTable<JPH::GroupFilter const*, std::pair<JPH::GroupFilter const*, unsigned int>,
   JPH::UnorderedMapDetail<JPH::GroupFilter const*, unsigned int>, JPH::Hash<JPH::GroupFilter
   const*>, std::equal_to<JPH::GroupFilter const*> >::GrowTable() */

void __thiscall
JPH::
HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>
::GrowTable(HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>
            *this)

{
  void *__s;
  char *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  uint uVar13;
  byte bVar14;
  undefined8 *puVar15;
  int iVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  undefined8 local_48;
  long local_40 [2];
  
  uVar2 = *(uint *)(this + 0x14);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (ulong)(uVar2 * 2);
  if (uVar2 * 2 < 0x10) {
    uVar9 = 0x10;
  }
  if (uVar2 <= (uint)uVar9) {
    puVar3 = *(undefined8 **)this;
    pcVar17 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(uint *)(this + 0x14) = (uint)uVar9;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar9 * 7 >> 3);
    lVar10 = (*Allocate)(uVar9 * 0x11 + 0xf);
    *(long *)this = lVar10;
    __s = (void *)(lVar10 + (ulong)*(uint *)(this + 0x14) * 0x10);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (puVar3 != (undefined8 *)0x0) {
      if (uVar2 != 0) {
        puVar12 = puVar3;
        do {
          while (*pcVar17 < '\0') {
            iVar16 = *(int *)(this + 0x18);
            if (iVar16 == 0) {
              if ((ulong)*(uint *)(this + 0x14) <
                  (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) -
                               *(int *)(this + 0x10)) << 3) {
                rehash((uint)this);
                iVar16 = *(int *)(this + 0x18);
              }
              else {
                GrowTable(this);
                iVar16 = *(int *)(this + 0x18);
              }
            }
            uVar9 = 0xcbf29ce484222325;
            local_48 = *puVar12;
            pbVar11 = (byte *)&local_48;
            do {
              bVar14 = *pbVar11;
              pbVar11 = pbVar11 + 1;
              uVar9 = (uVar9 ^ bVar14) * 0x100000001b3;
            } while (pbVar11 != (byte *)local_40);
            bVar14 = (byte)uVar9 | 0x80;
            uVar8 = (uint)(uVar9 >> 7);
            while( true ) {
              uVar8 = uVar8 & *(int *)(this + 0x14) - 1U;
              pcVar1 = (char *)(*(long *)(this + 8) + (ulong)uVar8);
              auVar18[0] = -(*pcVar1 == '\0');
              auVar18[1] = -(pcVar1[1] == '\0');
              auVar18[2] = -(pcVar1[2] == '\0');
              auVar18[3] = -(pcVar1[3] == '\0');
              auVar18[4] = -(pcVar1[4] == '\0');
              auVar18[5] = -(pcVar1[5] == '\0');
              auVar18[6] = -(pcVar1[6] == '\0');
              auVar18[7] = -(pcVar1[7] == '\0');
              auVar18[8] = -(pcVar1[8] == '\0');
              auVar18[9] = -(pcVar1[9] == '\0');
              auVar18[10] = -(pcVar1[10] == '\0');
              auVar18[0xb] = -(pcVar1[0xb] == '\0');
              auVar18[0xc] = -(pcVar1[0xc] == '\0');
              auVar18[0xd] = -(pcVar1[0xd] == '\0');
              auVar18[0xe] = -(pcVar1[0xe] == '\0');
              auVar18[0xf] = -(pcVar1[0xf] == '\0');
              uVar4 = (ushort)(SUB161(auVar18 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar18[0xf] >> 7) << 0xf;
              if (uVar4 != 0) break;
              uVar8 = uVar8 + 0x10;
            }
            iVar5 = 0;
            for (uVar13 = (uint)uVar4; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            puVar15 = puVar12 + 2;
            pcVar17 = pcVar17 + 1;
            *(int *)(this + 0x18) = iVar16 + -1;
            uVar8 = iVar5 + uVar8 & *(int *)(this + 0x14) - 1U;
            *(byte *)(*(long *)(this + 8) + (ulong)uVar8) = bVar14;
            *(byte *)(*(long *)(this + 8) +
                     (ulong)((uVar8 - 0xf & *(int *)(this + 0x14) - 1U) + 0xf)) = bVar14;
            uVar6 = *puVar12;
            uVar7 = puVar12[1];
            puVar12 = (undefined8 *)((ulong)uVar8 * 0x10 + *(long *)this);
            *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
            *puVar12 = uVar6;
            puVar12[1] = uVar7;
            puVar12 = puVar15;
            if (puVar3 + (ulong)uVar2 * 2 == puVar15) goto LAB_00101fd0;
          }
          puVar12 = puVar12 + 2;
          pcVar17 = pcVar17 + 1;
        } while (puVar3 + (ulong)uVar2 * 2 != puVar12);
      }
LAB_00101fd0:
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101ff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(puVar3);
        return;
      }
      goto LAB_00102020;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102020:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool JPH::HashTable<JPH::GroupFilter const*, std::pair<JPH::GroupFilter const*, unsigned int>,
   JPH::UnorderedMapDetail<JPH::GroupFilter const*, unsigned int>, JPH::Hash<JPH::GroupFilter
   const*>, std::equal_to<JPH::GroupFilter const*> >::InsertKey<false>(JPH::GroupFilter const*
   const&, unsigned int&) */

bool __thiscall
JPH::
HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>
::InsertKey<false>(HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>
                   *this,GroupFilter **param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
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
  byte bVar22;
  uint uVar23;
  uint uVar24;
  GroupFilter **ppGVar25;
  bool bVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  long in_FS_OFFSET;
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  GroupFilter *local_38;
  long local_30 [2];
  
  ppGVar25 = &local_38;
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
  uVar28 = 0xcbf29ce484222325;
  local_38 = *param_1;
  do {
    bVar30 = *(byte *)ppGVar25;
    ppGVar25 = (GroupFilter **)((long)ppGVar25 + 1);
    uVar28 = (uVar28 ^ bVar30) * 0x100000001b3;
  } while (ppGVar25 != (GroupFilter **)local_30);
  bVar30 = (byte)uVar28 | 0x80;
  uVar24 = 0xffffffff;
  uVar1 = *(int *)(this + 0x14) - 1;
  uVar29 = (uint)(uVar28 >> 7);
  while( true ) {
    uVar29 = uVar29 & uVar1;
    pbVar2 = (byte *)(*(long *)(this + 8) + (ulong)uVar29);
    bVar7 = *pbVar2;
    bVar8 = pbVar2[1];
    bVar9 = pbVar2[2];
    bVar10 = pbVar2[3];
    bVar11 = pbVar2[4];
    bVar12 = pbVar2[5];
    bVar13 = pbVar2[6];
    bVar14 = pbVar2[7];
    bVar15 = pbVar2[8];
    bVar16 = pbVar2[9];
    bVar17 = pbVar2[10];
    bVar18 = pbVar2[0xb];
    bVar19 = pbVar2[0xc];
    bVar20 = pbVar2[0xd];
    bVar21 = pbVar2[0xe];
    bVar22 = pbVar2[0xf];
    auVar32[0] = -(bVar30 == bVar7);
    auVar32[1] = -(bVar30 == bVar8);
    auVar32[2] = -(bVar30 == bVar9);
    auVar32[3] = -(bVar30 == bVar10);
    auVar32[4] = -(bVar30 == bVar11);
    auVar32[5] = -(bVar30 == bVar12);
    auVar32[6] = -(bVar30 == bVar13);
    auVar32[7] = -(bVar30 == bVar14);
    auVar32[8] = -(bVar30 == bVar15);
    auVar32[9] = -(bVar30 == bVar16);
    auVar32[10] = -(bVar30 == bVar17);
    auVar32[0xb] = -(bVar30 == bVar18);
    auVar32[0xc] = -(bVar30 == bVar19);
    auVar32[0xd] = -(bVar30 == bVar20);
    auVar32[0xe] = -(bVar30 == bVar21);
    auVar32[0xf] = -(bVar30 == bVar22);
    uVar4 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
    if (uVar4 != 0) {
      uVar27 = (uint)uVar4;
      uVar23 = uVar29;
      do {
        iVar5 = 0;
        for (uVar6 = uVar27; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar23 = uVar23 + iVar5 & uVar1;
        if (*param_1 == *(GroupFilter **)(*(long *)this + (ulong)uVar23 * 0x10)) {
          bVar26 = false;
          goto LAB_00102145;
        }
        uVar23 = uVar23 + 1;
        bVar3 = (char)iVar5 + 1U & 0x1f;
        uVar6 = uVar27 >> bVar3;
        uVar27 = uVar27 >> bVar3;
      } while (uVar6 != 0);
    }
    if (uVar24 == 0xffffffff) {
      auVar33[0] = -(bVar7 == _LC16);
      auVar33[1] = -(bVar8 == UNK_00102471);
      auVar33[2] = -(bVar9 == UNK_00102472);
      auVar33[3] = -(bVar10 == UNK_00102473);
      auVar33[4] = -(bVar11 == UNK_00102474);
      auVar33[5] = -(bVar12 == UNK_00102475);
      auVar33[6] = -(bVar13 == UNK_00102476);
      auVar33[7] = -(bVar14 == UNK_00102477);
      auVar33[8] = -(bVar15 == UNK_00102478);
      auVar33[9] = -(bVar16 == UNK_00102479);
      auVar33[10] = -(bVar17 == UNK_0010247a);
      auVar33[0xb] = -(bVar18 == UNK_0010247b);
      auVar33[0xc] = -(bVar19 == UNK_0010247c);
      auVar33[0xd] = -(bVar20 == UNK_0010247d);
      auVar33[0xe] = -(bVar21 == UNK_0010247e);
      auVar33[0xf] = -(bVar22 == UNK_0010247f);
      iVar5 = 0;
      uVar27 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar33[0xf] >> 7) << 0xf);
      for (uVar23 = uVar27; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
        iVar5 = iVar5 + 1;
      }
      if (uVar27 != 0) {
        uVar24 = iVar5 + uVar29;
      }
    }
    auVar31[0] = -(bVar7 == 0);
    auVar31[1] = -(bVar8 == 0);
    auVar31[2] = -(bVar9 == 0);
    auVar31[3] = -(bVar10 == 0);
    auVar31[4] = -(bVar11 == 0);
    auVar31[5] = -(bVar12 == 0);
    auVar31[6] = -(bVar13 == 0);
    auVar31[7] = -(bVar14 == 0);
    auVar31[8] = -(bVar15 == 0);
    auVar31[9] = -(bVar16 == 0);
    auVar31[10] = -(bVar17 == 0);
    auVar31[0xb] = -(bVar18 == 0);
    auVar31[0xc] = -(bVar19 == 0);
    auVar31[0xd] = -(bVar20 == 0);
    auVar31[0xe] = -(bVar21 == 0);
    auVar31[0xf] = -(bVar22 == 0);
    uVar4 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
    if (uVar4 != 0) break;
    uVar29 = uVar29 + 0x10;
  }
  if (uVar24 == 0xffffffff) {
    iVar5 = 0;
    for (uVar24 = (uint)uVar4; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    uVar24 = iVar5 + uVar29;
  }
  uVar23 = uVar1 & uVar24;
  *(byte *)(*(long *)(this + 8) + (ulong)uVar23) = bVar30;
  *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar23 - 0xf) + 0xf)) =
       bVar30;
  bVar26 = true;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_00102145:
  *param_2 = uVar23;
  if (local_30[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void JPH::StreamUtils::SaveObjectReference<JPH::GroupFilter>(JPH::StreamOut&, JPH::GroupFilter
   const*, JPH::UnorderedMap<JPH::GroupFilter const*, unsigned int, JPH::Hash<JPH::GroupFilter
   const*>, std::equal_to<JPH::GroupFilter const*> >*) */

void JPH::StreamUtils::SaveObjectReference<JPH::GroupFilter>
               (StreamOut *param_1,GroupFilter *param_2,UnorderedMap *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  GroupFilter **ppGVar12;
  long *plVar13;
  uint uVar14;
  long in_FS_OFFSET;
  byte bVar15;
  byte bVar17;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  GroupFilter *local_50 [2];
  int local_3c;
  GroupFilter *local_38;
  GroupFilter *local_30;
  
  local_30 = *(GroupFilter **)(in_FS_OFFSET + 0x28);
  local_50[0] = param_2;
  if ((param_3 == (UnorderedMap *)0x0) || (param_2 == (GroupFilter *)0x0)) {
    local_38 = (GroupFilter *)CONCAT44(local_38._4_4_,0xffffffff);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_38,4);
  }
  else {
    iVar3 = *(int *)(param_3 + 0x10);
    if (iVar3 != 0) {
      ppGVar12 = &local_38;
      local_38 = param_2;
      uVar10 = 0xcbf29ce484222325;
      do {
        bVar15 = *(byte *)ppGVar12;
        ppGVar12 = (GroupFilter **)((long)ppGVar12 + 1);
        uVar10 = (uVar10 ^ bVar15) * 0x100000001b3;
      } while (ppGVar12 != &local_30);
      bVar15 = (byte)uVar10 | 0x80;
      uVar1 = *(uint *)(param_3 + 0x14) - 1;
      uVar14 = (uint)(uVar10 >> 7);
      while( true ) {
        uVar14 = uVar14 & uVar1;
        uVar10 = (ulong)uVar14;
        auVar2 = *(undefined1 (*) [16])(*(long *)(param_3 + 8) + uVar10);
        auVar18[0] = -(bVar15 == auVar2[0]);
        auVar18[1] = -(bVar15 == auVar2[1]);
        auVar18[2] = -(bVar15 == auVar2[2]);
        auVar18[3] = -(bVar15 == auVar2[3]);
        auVar18[4] = -(bVar15 == auVar2[4]);
        auVar18[5] = -(bVar15 == auVar2[5]);
        auVar18[6] = -(bVar15 == auVar2[6]);
        auVar18[7] = -(bVar15 == auVar2[7]);
        auVar18[8] = -(bVar15 == auVar2[8]);
        auVar18[9] = -(bVar15 == auVar2[9]);
        auVar18[10] = -(bVar15 == auVar2[10]);
        auVar18[0xb] = -(bVar15 == auVar2[0xb]);
        auVar18[0xc] = -(bVar15 == auVar2[0xc]);
        auVar18[0xd] = -(bVar15 == auVar2[0xd]);
        auVar18[0xe] = -(bVar15 == auVar2[0xe]);
        bVar17 = auVar2[0xf];
        auVar18[0xf] = -(bVar15 == bVar17);
        uVar5 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
        if (uVar5 != 0) {
          uVar11 = (uint)uVar5;
          do {
            iVar6 = 0;
            for (uVar8 = uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            uVar8 = (int)uVar10 + iVar6 & uVar1;
            plVar13 = (long *)((ulong)uVar8 * 0x10 + *(long *)param_3);
            if (param_2 == (GroupFilter *)*plVar13) {
              if (*(uint *)(param_3 + 0x14) == uVar8) goto LAB_0010225a;
              (**(code **)(*(long *)param_1 + 0x10))(param_1,plVar13 + 1,4);
              goto LAB_001022cb;
            }
            uVar10 = (ulong)(uVar8 + 1);
            bVar4 = (char)iVar6 + 1U & 0x1f;
            uVar8 = uVar11 >> bVar4;
            uVar11 = uVar11 >> bVar4;
          } while (uVar8 != 0);
        }
        auVar16[0] = -(auVar2[0] == 0);
        auVar16[1] = -(auVar2[1] == 0);
        auVar16[2] = -(auVar2[2] == 0);
        auVar16[3] = -(auVar2[3] == 0);
        auVar16[4] = -(auVar2[4] == 0);
        auVar16[5] = -(auVar2[5] == 0);
        auVar16[6] = -(auVar2[6] == 0);
        auVar16[7] = -(auVar2[7] == 0);
        auVar16[8] = -(auVar2[8] == 0);
        auVar16[9] = -(auVar2[9] == 0);
        auVar16[10] = -(auVar2[10] == 0);
        auVar16[0xb] = -(auVar2[0xb] == 0);
        auVar16[0xc] = -(auVar2[0xc] == 0);
        auVar16[0xd] = -(auVar2[0xd] == 0);
        auVar16[0xe] = -(auVar2[0xe] == 0);
        auVar16[0xf] = -(bVar17 == 0);
        if ((((((((((((((((auVar16 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar16 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar16 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar16 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar16 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar16 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar16 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar16 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar16 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar16 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar16 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar16 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar16 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar16 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar16 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar17 == 0)
        break;
        uVar14 = uVar14 + 0x10;
      }
    }
LAB_0010225a:
    local_3c = iVar3;
    bVar7 = HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>
            ::InsertKey<false>((HashTable<JPH::GroupFilter_const*,std::pair<JPH::GroupFilter_const*,unsigned_int>,JPH::UnorderedMapDetail<JPH::GroupFilter_const*,unsigned_int>,JPH::Hash<JPH::GroupFilter_const*>,std::equal_to<JPH::GroupFilter_const*>>
                                *)param_3,local_50,(uint *)&local_38);
    puVar9 = (undefined8 *)(((ulong)local_38 & 0xffffffff) * 0x10 + *(long *)param_3);
    if (bVar7) {
      *puVar9 = param_2;
    }
    *(int *)(puVar9 + 1) = iVar3;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_3c,4);
    (**(code **)(*(long *)param_2 + 0x28))(param_2,param_1);
  }
LAB_001022cb:
  if (local_30 == *(GroupFilter **)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::BodyCreationSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC17;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



