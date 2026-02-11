
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HashTable<JPH::Ref<JPH::DebugRenderer::Geometry>,
   std::pair<JPH::Ref<JPH::DebugRenderer::Geometry>, unsigned int>,
   JPH::UnorderedMapDetail<JPH::Ref<JPH::DebugRenderer::Geometry>, unsigned int>,
   JPH::Hash<JPH::Ref<JPH::DebugRenderer::Geometry> >,
   std::equal_to<JPH::Ref<JPH::DebugRenderer::Geometry> > >::rehash(unsigned int) [clone .isra.0] */

void JPH::
     HashTable<JPH::Ref<JPH::DebugRenderer::Geometry>,std::pair<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::UnorderedMapDetail<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::Hash<JPH::Ref<JPH::DebugRenderer::Geometry>>,std::equal_to<JPH::Ref<JPH::DebugRenderer::Geometry>>>
     ::rehash(uint param_1)

{
  char *pcVar1;
  long *plVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined4 in_register_0000003c;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  int iVar23;
  long in_FS_OFFSET;
  undefined1 auVar24 [16];
  undefined8 local_48;
  long local_40 [2];
  
  uVar22 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
  uVar16 = (ulong)uVar22;
  puVar21 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = 0;
  if (uVar22 != 0) {
    do {
      while( true ) {
        pcVar1 = puVar21 + lVar7;
        if (*pcVar1 != '\0') break;
LAB_0010003a:
        lVar7 = lVar7 + 1;
        if ((uint)uVar16 <= (uint)lVar7) goto LAB_00100064;
      }
      if (*pcVar1 == '\x7f') {
        *pcVar1 = '\0';
        puVar21 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
        uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
        goto LAB_0010003a;
      }
      *pcVar1 = '\x7f';
      uVar22 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
      uVar16 = (ulong)uVar22;
      lVar7 = lVar7 + 1;
      puVar21 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
    } while ((uint)lVar7 < uVar22);
  }
LAB_00100064:
  puVar21[uVar16] = *puVar21;
  lVar7 = 1;
  do {
    lVar17 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
    iVar10 = (int)lVar7;
    puVar21 = (undefined1 *)(lVar17 + lVar7);
    lVar7 = lVar7 + 1;
    *(undefined1 *)
     (lVar17 + (ulong)(uint)(iVar10 + *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14))) =
         *puVar21;
    auVar5 = __LC0;
  } while (lVar7 != 0xf);
  uVar22 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
  uVar16 = (ulong)uVar22;
  uVar20 = uVar22 - 1;
  if (uVar22 != 0) {
    lVar7 = 0;
    do {
      lVar17 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
      if (*(char *)(lVar17 + lVar7) == '\x7f') {
        lVar12 = *(long *)CONCAT44(in_register_0000003c,param_1);
        lVar14 = lVar7 * 0x10;
        while( true ) {
          local_48 = *(undefined8 *)(lVar12 + lVar14);
          uVar8 = 0xcbf29ce484222325;
          pbVar13 = (byte *)&local_48;
          do {
            bVar6 = *pbVar13;
            pbVar13 = pbVar13 + 1;
            uVar8 = (uVar8 ^ bVar6) * 0x100000001b3;
          } while (pbVar13 != (byte *)local_40);
          bVar6 = (byte)uVar8 | 0x80;
          uVar15 = (int)uVar16 - 1U & (uint)(uVar8 >> 7);
          auVar24 = *(undefined1 (*) [16])(lVar17 + (ulong)uVar15) & auVar5;
          uVar4 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
          uVar22 = uVar15;
          while (uVar4 == 0xffff) {
            uVar22 = uVar22 + 0x10 & uVar20;
            auVar24 = *(undefined1 (*) [16])(lVar17 + (ulong)uVar22) & auVar5;
            uVar4 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar24[0xf] >> 7) << 0xf;
          }
          iVar23 = (int)lVar7;
          iVar10 = 0;
          for (uVar11 = uVar4 ^ 0xffff; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            iVar10 = iVar10 + 1;
          }
          uVar22 = iVar10 + uVar22 & uVar20;
          if (((uVar22 - uVar15 ^ iVar23 - uVar15) & uVar20 & 0xfffffff0) == 0) {
            *(byte *)(lVar17 + lVar7) = bVar6;
            *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                     (ulong)((*(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U &
                             iVar23 - 0xfU) + 0xf)) = bVar6;
            uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
            goto LAB_001000e0;
          }
          pbVar13 = (byte *)(lVar17 + (ulong)uVar22);
          lVar17 = (ulong)uVar22 * 0x10;
          if (*pbVar13 == 0) break;
          *pbVar13 = bVar6;
          *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                   (ulong)((*(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U &
                           uVar22 - 0xf) + 0xf)) = bVar6;
          lVar12 = *(long *)CONCAT44(in_register_0000003c,param_1);
          plVar2 = (long *)(lVar12 + lVar14);
          plVar18 = (long *)(lVar17 + lVar12);
          lVar17 = *plVar2;
          *plVar2 = 0;
          if (*plVar18 != 0) {
            *plVar2 = *plVar18;
            *plVar18 = 0;
          }
          if (lVar17 != 0) {
            *plVar18 = lVar17;
          }
          lVar17 = plVar2[1];
          *(int *)(plVar2 + 1) = (int)plVar18[1];
          *(int *)(plVar18 + 1) = (int)lVar17;
          lVar17 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
          uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
        }
        *pbVar13 = bVar6;
        *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                 (ulong)((uVar22 - 0xf &
                         *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U) + 0xf)) =
             bVar6;
        *(undefined1 *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) + lVar7) = 0;
        *(undefined1 *)
         (*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
         (ulong)((*(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U & iVar23 - 0xfU) +
                0xf)) = 0;
        puVar19 = (undefined8 *)(lVar17 + *(long *)CONCAT44(in_register_0000003c,param_1));
        puVar9 = (undefined8 *)(*(long *)CONCAT44(in_register_0000003c,param_1) + lVar14);
        uVar3 = *(undefined4 *)(puVar9 + 1);
        *puVar19 = *puVar9;
        *(undefined4 *)(puVar19 + 1) = uVar3;
        uVar16 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
      }
LAB_001000e0:
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)uVar16);
  }
  *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x18) =
       (int)(uVar16 * 7 >> 3) - *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x10);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DebugRendererRecorder::DrawLine(JPH::Vec3, JPH::Vec3, JPH::Color) */

void JPH::DebugRendererRecorder::DrawLine
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined4 param_6)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined4 uStack_54;
  undefined8 uStack_50;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(param_5 + 0x140));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  lVar7 = *(long *)(param_5 + 0x198);
  uVar2 = *(ulong *)(param_5 + 0x1a0);
  lVar6 = *(long *)(param_5 + 0x1a8);
  uVar4 = lVar7 + 1;
  if (uVar2 < uVar4) {
    if (uVar4 <= uVar2 * 2) {
      uVar4 = uVar2 * 2;
    }
    lVar6 = (*Reallocate)(lVar6,uVar2 * 0x30,uVar4 * 0x30);
    lVar7 = *(long *)(param_5 + 0x198);
    *(ulong *)(param_5 + 0x1a0) = uVar4;
    *(long *)(param_5 + 0x1a8) = lVar6;
    uVar4 = lVar7 + 1;
  }
  *(ulong *)(param_5 + 0x198) = uVar4;
  puVar5 = (undefined8 *)(lVar7 * 0x30 + lVar6);
  *puVar5 = param_1;
  puVar5[1] = param_2;
  puVar5[2] = param_3;
  puVar5[3] = param_4;
  puVar5[4] = CONCAT44(uStack_54,param_6);
  puVar5[5] = uStack_50;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_mutex_unlock((pthread_mutex_t *)(param_5 + 0x140));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DebugRendererRecorder::DrawTriangle(JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Color,
   JPH::DebugRenderer::ECastShadow) */

void JPH::DebugRendererRecorder::DrawTriangle
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8,
               undefined4 param_9)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  undefined8 uStack_50;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(param_7 + 0x140));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar2 = *(ulong *)(param_7 + 0x1b8);
  lVar5 = *(long *)(param_7 + 0x1c0);
  lVar4 = *(long *)(param_7 + 0x1b0);
  uVar6 = lVar4 + 1;
  if (uVar2 < uVar6) {
    uVar7 = uVar2 * 2;
    if (uVar2 * 2 < uVar6) {
      uVar7 = uVar6;
    }
    lVar5 = (*Reallocate)(lVar5,uVar2 << 6,uVar7 << 6);
    *(ulong *)(param_7 + 0x1b8) = uVar7;
    *(long *)(param_7 + 0x1c0) = lVar5;
    lVar4 = *(long *)(param_7 + 0x1b0);
    uVar6 = lVar4 + 1;
  }
  puVar8 = (undefined8 *)(lVar5 + lVar4 * 0x40);
  *(ulong *)(param_7 + 0x1b0) = uVar6;
  *puVar8 = param_1;
  puVar8[1] = param_2;
  puVar8[2] = param_3;
  puVar8[3] = param_4;
  puVar8[4] = param_5;
  puVar8[5] = param_6;
  puVar8[6] = CONCAT44(param_9,param_8);
  puVar8[7] = uStack_50;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_mutex_unlock((pthread_mutex_t *)(param_7 + 0x140));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DebugRendererRecorder::CreateTriangleBatch(JPH::DebugRenderer::Vertex const*, int, unsigned
   int const*, int) */

Vertex * JPH::DebugRendererRecorder::CreateTriangleBatch
                   (Vertex *param_1,int param_2,uint *param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 in_register_00000034;
  long lVar4;
  long in_R8;
  int in_R9D;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  lVar4 = CONCAT44(in_register_00000034,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_3 == (uint *)0x0) || (param_4 == 0)) || (in_R8 == 0)) || (in_R9D == 0)) {
    puVar3 = (undefined8 *)(*Allocate)(0x10);
    *puVar3 = &PTR__BatchImpl_00101ce8;
    puVar3[1] = 0;
    *(undefined8 **)param_1 = puVar3;
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  else {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x140));
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    local_44 = CONCAT31(local_44._1_3_,1);
    (**(code **)(**(long **)(lVar4 + 0x168) + 0x10))(*(long **)(lVar4 + 0x168),&local_44,1);
    local_48 = *(int *)(lVar4 + 0x170);
    lVar1 = **(long **)(lVar4 + 0x168);
    *(int *)(lVar4 + 0x170) = local_48 + 1;
    (**(code **)(lVar1 + 0x10))(*(long **)(lVar4 + 0x168),&local_48,4);
    local_44 = param_4;
    (**(code **)(**(long **)(lVar4 + 0x168) + 0x10))(*(long **)(lVar4 + 0x168),&local_44,4);
    (**(code **)(**(long **)(lVar4 + 0x168) + 0x10))
              (*(long **)(lVar4 + 0x168),param_3,(long)param_4 * 0x24);
    (**(code **)(**(long **)(lVar4 + 0x168) + 0x10))(*(long **)(lVar4 + 0x168),&local_44,4);
    (**(code **)(**(long **)(lVar4 + 0x168) + 0x10))
              (*(long **)(lVar4 + 0x168),in_R8,(long)in_R9D << 2);
    puVar3 = (undefined8 *)(*Allocate)(0x10);
    *puVar3 = &PTR__BatchImpl_00101ce8;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(int *)((long)puVar3 + 0xc) = local_48;
    *(undefined8 **)param_1 = puVar3;
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x140));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DebugRendererRecorder::CreateTriangleBatch(JPH::DebugRenderer::Triangle const*, int) */

Triangle * JPH::DebugRendererRecorder::CreateTriangleBatch(Triangle *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  int in_ECX;
  long in_RDX;
  undefined4 in_register_00000034;
  long lVar4;
  long in_FS_OFFSET;
  int local_48;
  uint local_44;
  long local_40;
  
  lVar4 = CONCAT44(in_register_00000034,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RDX != 0) {
    if (in_ECX != 0) {
      iVar2 = pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x140));
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar2);
      }
      local_44 = local_44 & 0xffffff00;
      (**(code **)(**(long **)(lVar4 + 0x168) + 0x10))(*(long **)(lVar4 + 0x168),&local_44,1);
      local_48 = *(int *)(lVar4 + 0x170);
      lVar1 = **(long **)(lVar4 + 0x168);
      *(int *)(lVar4 + 0x170) = local_48 + 1;
      (**(code **)(lVar1 + 0x10))(*(long **)(lVar4 + 0x168),&local_48,4);
      (**(code **)(**(long **)(lVar4 + 0x168) + 0x10))(*(long **)(lVar4 + 0x168),&local_44,4);
      (**(code **)(**(long **)(lVar4 + 0x168) + 0x10))();
      puVar3 = (undefined8 *)(*Allocate)(0x10);
      *puVar3 = &PTR__BatchImpl_00101ce8;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(int *)((long)puVar3 + 0xc) = local_48;
      *(undefined8 **)param_1 = puVar3;
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
      pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x140));
      goto LAB_001007a7;
    }
  }
  puVar3 = (undefined8 *)(*Allocate)(0x10);
  *puVar3 = &PTR__BatchImpl_00101ce8;
  puVar3[1] = 0;
  *(undefined8 **)param_1 = puVar3;
  LOCK();
  *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  UNLOCK();
LAB_001007a7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DebugRendererRecorder::DrawText3D(JPH::Vec3, std::basic_string_view<char,
   std::char_traits<char> > const&, JPH::Color, float) */

void JPH::DebugRendererRecorder::DrawText3D
               (ulong param_1,ulong param_2,undefined4 param_3,long param_4,ulong *param_5,
               uint param_6,ulong *param_7)

{
  pthread_mutex_t *__mutex;
  undefined4 uVar1;
  undefined1 *__src;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  long in_FS_OFFSET;
  undefined1 auVar20 [12];
  undefined4 uStack_dc;
  long lStack_d8;
  long lStack_c8;
  pthread_mutex_t *ppStack_c0;
  ulong uStack_b8;
  ulong *puStack_b0;
  undefined1 *puStack_a8;
  ulong uStack_a0;
  undefined4 local_8c;
  ulong local_88;
  ulong uStack_80;
  ulong *local_78;
  undefined8 local_70;
  ulong local_68 [2];
  uint local_58;
  undefined4 local_54;
  long local_40;
  
  uVar14 = (ulong)param_6;
  __mutex = (pthread_mutex_t *)(param_4 + 0x140);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_a0 = 0x1008fa;
  puVar7 = param_5;
  local_8c = param_3;
  iVar5 = pthread_mutex_lock(__mutex);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    uStack_a0 = 0x100dce;
    std::__throw_system_error(iVar5);
  }
  __src = (undefined1 *)param_5[1];
  uVar18 = *param_5;
  local_78 = local_68;
  local_88 = param_1;
  uStack_80 = param_2;
  if ((__src == (undefined1 *)0x0) && (uVar18 != 0)) {
    uStack_a0 = 0x100cd4;
    auVar20 = std::__throw_logic_error("basic_string: construction from null is not valid");
    puVar6 = (ulong *)0x0;
    goto LAB_00100cd8;
  }
  if (uVar18 < 0x10) {
    if (uVar18 == 1) {
      local_68[0] = CONCAT71(local_68[0]._1_7_,*__src);
    }
    else if (uVar18 != 0) goto LAB_00100b70;
  }
  else {
    if ((long)uVar18 < 0) {
      pcVar17 = "basic_string::_M_create";
      uStack_a0 = 0x100dda;
      std::__throw_length_error("basic_string::_M_create");
      lStack_d8 = *(long *)(in_FS_OFFSET + 0x28);
      lStack_c8 = param_4;
      ppStack_c0 = __mutex;
      uStack_b8 = uVar14;
      puStack_b0 = local_68;
      puStack_a8 = __src;
      uStack_a0 = uVar18;
      iVar5 = pthread_mutex_lock((pthread_mutex_t *)(pcVar17 + 0x140));
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar5);
      }
      uStack_dc = CONCAT31(uStack_dc._1_3_,3);
      (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))(*(long **)(pcVar17 + 0x168),&uStack_dc,1);
      uStack_dc = (undefined4)*(undefined8 *)(pcVar17 + 0x198);
      (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))(*(long **)(pcVar17 + 0x168),&uStack_dc,4);
      lVar10 = *(long *)(pcVar17 + 0x1a8);
      lVar13 = *(long *)(pcVar17 + 0x198) * 0x30 + lVar10;
      for (; lVar10 != lVar13; lVar10 = lVar10 + 0x30) {
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))(*(long **)(pcVar17 + 0x168),lVar10,0xc);
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                  (*(long **)(pcVar17 + 0x168),lVar10 + 0x10,0xc);
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                  (*(long **)(pcVar17 + 0x168),lVar10 + 0x20,4);
      }
      pcVar17[0x198] = '\0';
      pcVar17[0x199] = '\0';
      pcVar17[0x19a] = '\0';
      pcVar17[0x19b] = '\0';
      pcVar17[0x19c] = '\0';
      pcVar17[0x19d] = '\0';
      pcVar17[0x19e] = '\0';
      pcVar17[0x19f] = '\0';
      uStack_dc = (undefined4)*(undefined8 *)(pcVar17 + 0x1b0);
      (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))(*(long **)(pcVar17 + 0x168),&uStack_dc,4);
      lVar10 = *(long *)(pcVar17 + 0x1c0);
      lVar13 = *(long *)(pcVar17 + 0x1b0) * 0x40 + lVar10;
      for (; lVar13 != lVar10; lVar10 = lVar10 + 0x40) {
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))(*(long **)(pcVar17 + 0x168),lVar10,0xc);
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                  (*(long **)(pcVar17 + 0x168),lVar10 + 0x10,0xc);
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                  (*(long **)(pcVar17 + 0x168),lVar10 + 0x20,0xc);
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                  (*(long **)(pcVar17 + 0x168),lVar10 + 0x30,4);
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                  (*(long **)(pcVar17 + 0x168),lVar10 + 0x34,4);
      }
      pcVar17[0x1b0] = '\0';
      pcVar17[0x1b1] = '\0';
      pcVar17[0x1b2] = '\0';
      pcVar17[0x1b3] = '\0';
      pcVar17[0x1b4] = '\0';
      pcVar17[0x1b5] = '\0';
      pcVar17[0x1b6] = '\0';
      pcVar17[0x1b7] = '\0';
      uStack_dc = (undefined4)*(undefined8 *)(pcVar17 + 0x1c8);
      (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))(*(long **)(pcVar17 + 0x168),&uStack_dc,4);
      lVar10 = *(long *)(pcVar17 + 0x1c8);
      lVar13 = *(long *)(pcVar17 + 0x1d8);
      lVar19 = lVar10 * 0x40 + lVar13;
      if (lVar19 != lVar13) {
        do {
          (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))(*(long **)(pcVar17 + 0x168),lVar13,0xc)
          ;
          plVar3 = *(long **)(pcVar17 + 0x168);
          uStack_dc = (undefined4)*(undefined8 *)(lVar13 + 0x18);
          (**(code **)(*plVar3 + 0x10))(plVar3,&uStack_dc,4);
          cVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
          if (cVar4 == '\0') {
            (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(lVar13 + 0x10),uStack_dc);
          }
          (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                    (*(long **)(pcVar17 + 0x168),lVar13 + 0x30,4);
          lVar10 = lVar13 + 0x34;
          lVar13 = lVar13 + 0x40;
          (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))(*(long **)(pcVar17 + 0x168),lVar10,4);
        } while (lVar19 != lVar13);
        lVar10 = *(long *)(pcVar17 + 0x1c8);
      }
      if (lVar10 != 0) {
        uVar14 = *(ulong *)(pcVar17 + 0x1d8);
        uVar18 = lVar10 * 0x40 + uVar14;
        for (; uVar14 < uVar18; uVar14 = uVar14 + 0x40) {
          if (*(long *)(uVar14 + 0x10) != uVar14 + 0x20) {
            (*Free)();
          }
        }
      }
      pcVar17[0x1c8] = '\0';
      pcVar17[0x1c9] = '\0';
      pcVar17[0x1ca] = '\0';
      pcVar17[0x1cb] = '\0';
      pcVar17[0x1cc] = '\0';
      pcVar17[0x1cd] = '\0';
      pcVar17[0x1ce] = '\0';
      pcVar17[0x1cf] = '\0';
      uStack_dc = (undefined4)*(undefined8 *)(pcVar17 + 0x1e0);
      (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))(*(long **)(pcVar17 + 0x168),&uStack_dc,4);
      lVar10 = *(long *)(pcVar17 + 0x1f0);
      lVar13 = *(long *)(pcVar17 + 0x1e0) * 0x60 + lVar10;
      for (; lVar13 != lVar10; lVar10 = lVar10 + 0x60) {
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))(*(long **)(pcVar17 + 0x168),lVar10,0x40);
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                  (*(long **)(pcVar17 + 0x168),lVar10 + 0x40,4);
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                  (*(long **)(pcVar17 + 0x168),lVar10 + 0x44,4);
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                  (*(long **)(pcVar17 + 0x168),lVar10 + 0x48,4);
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                  (*(long **)(pcVar17 + 0x168),lVar10 + 0x4c,4);
        (**(code **)(**(long **)(pcVar17 + 0x168) + 0x10))
                  (*(long **)(pcVar17 + 0x168),lVar10 + 0x50,4);
      }
      pcVar17[0x1e0] = '\0';
      pcVar17[0x1e1] = '\0';
      pcVar17[0x1e2] = '\0';
      pcVar17[0x1e3] = '\0';
      pcVar17[0x1e4] = '\0';
      pcVar17[0x1e5] = '\0';
      pcVar17[0x1e6] = '\0';
      pcVar17[0x1e7] = '\0';
      if (lStack_d8 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      pthread_mutex_unlock((pthread_mutex_t *)(pcVar17 + 0x140));
      return;
    }
    uStack_a0 = 0x100b63;
    local_78 = (ulong *)(*Allocate)(uVar18 + 1);
    local_68[0] = uVar18;
LAB_00100b70:
    uStack_a0 = 0x100b7b;
    memcpy(local_78,__src,uVar18);
  }
  local_70 = uVar18;
  *(undefined1 *)((long)local_78 + uVar18) = 0;
  local_58 = param_6;
  uVar14 = *(long *)(param_4 + 0x1c8) + 1;
  local_54 = local_8c;
  if (uVar14 <= *(ulong *)(param_4 + 0x1d0)) {
    puVar6 = (ulong *)(*(long *)(param_4 + 0x1c8) * 0x40 + *(long *)(param_4 + 0x1d8));
    *(ulong *)(param_4 + 0x1c8) = uVar14;
    *puVar6 = local_88;
    puVar6[1] = uStack_80;
    goto LAB_00100abd;
  }
  uVar18 = *(ulong *)(param_4 + 0x1d0) * 2;
  if (uVar14 <= uVar18) {
    uVar14 = uVar18;
  }
  uStack_a0 = 0x10099b;
  puVar6 = (ulong *)(*Allocate)(uVar14 << 6);
  param_7 = *(ulong **)(param_4 + 0x1d8);
  if (param_7 != (ulong *)0x0) {
    lVar10 = *(long *)(param_4 + 0x1c8);
    if (puVar6 < param_7) {
      if (puVar6 < puVar6 + lVar10 * 8) {
        param_7 = param_7 + 4;
        puVar7 = puVar6;
        do {
          puVar8 = puVar7 + 4;
          uVar18 = param_7[-4];
          uVar16 = param_7[-3];
          puVar7[2] = (ulong)puVar8;
          puVar2 = (ulong *)param_7[-2];
          *puVar7 = uVar18;
          puVar7[1] = uVar16;
          if (puVar2 == param_7) {
            uVar16 = param_7[-1];
            uVar18 = uVar16 + 1;
            uVar15 = (uint)uVar18;
            if (7 < uVar15) {
              *puVar8 = *param_7;
              *(undefined8 *)((long)puVar7 + (uVar18 & 0xffffffff) + 0x18) =
                   *(undefined8 *)((long)param_7 + ((uVar18 & 0xffffffff) - 8));
              lVar13 = (long)puVar8 - ((ulong)(puVar7 + 5) & 0xfffffffffffffff8);
              uVar15 = (int)lVar13 + uVar15 & 0xfffffff8;
              if (7 < uVar15) {
                uVar12 = 0;
                do {
                  uVar18 = (ulong)uVar12;
                  uVar12 = uVar12 + 8;
                  *(undefined8 *)(((ulong)(puVar7 + 5) & 0xfffffffffffffff8) + uVar18) =
                       *(undefined8 *)((long)param_7 + (uVar18 - lVar13));
                } while (uVar12 < uVar15);
              }
              goto LAB_001009e3;
            }
            if ((uVar18 & 4) == 0) {
              if (uVar15 != 0) {
                *(char *)puVar8 = (char)*param_7;
                if ((uVar18 & 2) == 0) goto LAB_001009e3;
                *(undefined2 *)((long)puVar7 + (uVar18 & 0xffffffff) + 0x1e) =
                     *(undefined2 *)((long)param_7 + ((uVar18 & 0xffffffff) - 2));
                uVar16 = param_7[-1];
              }
            }
            else {
              *(int *)puVar8 = (int)*param_7;
              *(undefined4 *)((long)puVar7 + (uVar18 & 0xffffffff) + 0x1c) =
                   *(undefined4 *)((long)param_7 + ((uVar18 & 0xffffffff) - 4));
              uVar16 = param_7[-1];
            }
          }
          else {
            puVar7[2] = (ulong)puVar2;
            puVar7[4] = *param_7;
LAB_001009e3:
            uVar16 = param_7[-1];
          }
          uVar18 = param_7[2];
          uVar1 = *(undefined4 *)((long)param_7 + 0x14);
          puVar7[3] = uVar16;
          puVar8 = puVar7 + 8;
          param_7 = param_7 + 8;
          *(int *)(puVar7 + 6) = (int)uVar18;
          *(undefined4 *)((long)puVar7 + 0x34) = uVar1;
          puVar7 = puVar8;
        } while (puVar8 < puVar6 + lVar10 * 8);
LAB_00100a80:
        param_7 = *(ulong **)(param_4 + 0x1d8);
      }
    }
    else {
      puVar8 = puVar6 + lVar10 * 8 + -8;
      if (puVar6 <= puVar8) {
        param_7 = param_7 + lVar10 * 8 + -4;
        do {
          puVar7 = puVar8 + 4;
          uVar18 = param_7[-4];
          uVar16 = param_7[-3];
          puVar8[2] = (ulong)puVar7;
          puVar2 = (ulong *)param_7[-2];
          *puVar8 = uVar18;
          puVar8[1] = uVar16;
          puVar9 = puVar8;
          puVar11 = param_7;
          if (param_7 == puVar2) {
            uVar18 = param_7[-1] + 1;
            uVar15 = (uint)uVar18;
            auVar20._8_4_ = uVar15;
            auVar20._0_8_ = puVar8;
            if (uVar15 < 8) {
              if ((uVar18 & 4) == 0) {
                if ((uVar15 != 0) && (*(char *)puVar7 = (char)*param_7, (uVar18 & 2) != 0)) {
                  *(undefined2 *)((long)puVar8 + (uVar18 & 0xffffffff) + 0x1e) =
                       *(undefined2 *)((long)param_7 + ((uVar18 & 0xffffffff) - 2));
                }
              }
              else {
                *(int *)puVar7 = (int)*param_7;
                *(undefined4 *)((long)puVar8 + (uVar18 & 0xffffffff) + 0x1c) =
                     *(undefined4 *)((long)param_7 + ((uVar18 & 0xffffffff) - 4));
              }
            }
            else {
LAB_00100cd8:
              uVar15 = auVar20._8_4_;
              puVar9 = auVar20._0_8_;
              *puVar7 = *param_7;
              *(undefined8 *)((long)puVar7 + ((ulong)uVar15 - 8)) =
                   *(undefined8 *)((long)param_7 + ((ulong)uVar15 - 8));
              lVar10 = (long)puVar7 - ((ulong)(puVar9 + 5) & 0xfffffffffffffff8);
              uVar15 = uVar15 + (int)lVar10 & 0xfffffff8;
              puVar11 = param_7;
              if (7 < uVar15) {
                uVar12 = 0;
                do {
                  uVar18 = (ulong)uVar12;
                  uVar12 = uVar12 + 8;
                  *(undefined8 *)(((ulong)(puVar9 + 5) & 0xfffffffffffffff8) + uVar18) =
                       *(undefined8 *)((long)param_7 + (uVar18 - lVar10));
                } while (uVar12 < uVar15);
              }
            }
          }
          else {
            puVar8[2] = (ulong)puVar2;
            puVar8[4] = *param_7;
          }
          uVar1 = *(undefined4 *)((long)puVar11 + 0x14);
          puVar8 = puVar9 + -8;
          param_7 = puVar11 + -8;
          puVar9[3] = puVar11[-1];
          uVar18 = puVar11[2];
          *(undefined4 *)((long)puVar9 + 0x34) = uVar1;
          *(int *)(puVar9 + 6) = (int)uVar18;
        } while (puVar6 <= puVar8);
        goto LAB_00100a80;
      }
    }
    uStack_a0 = 0x100a8d;
    (*Free)(param_7);
  }
  *(ulong **)(param_4 + 0x1d8) = puVar6;
  *(ulong *)(param_4 + 0x1d0) = uVar14;
  puVar6 = puVar6 + *(long *)(param_4 + 0x1c8) * 8;
  *(long *)(param_4 + 0x1c8) = *(long *)(param_4 + 0x1c8) + 1;
  *puVar6 = local_88;
  puVar6[1] = uStack_80;
LAB_00100abd:
  puVar7 = puVar6 + 4;
  puVar6[2] = (ulong)puVar7;
  if (local_78 == local_68) {
    uVar14 = local_70 + 1;
    uVar15 = (uint)uVar14;
    if (uVar15 < 8) {
      if ((uVar14 & 4) == 0) {
        if (uVar15 != 0) {
          *(undefined1 *)puVar7 = (undefined1)local_68[0];
          if ((uVar14 & 2) != 0) {
            *(undefined2 *)((long)puVar6 + (uVar14 & 0xffffffff) + 0x1e) =
                 *(undefined2 *)((long)local_68 + ((uVar14 & 0xffffffff) - 2));
          }
        }
      }
      else {
        *(undefined4 *)puVar7 = (undefined4)local_68[0];
        *(undefined4 *)((long)puVar6 + (uVar14 & 0xffffffff) + 0x1c) =
             *(undefined4 *)((long)local_68 + ((uVar14 & 0xffffffff) - 4));
      }
    }
    else {
      *puVar7 = local_68[0];
      *(undefined8 *)((long)puVar6 + (uVar14 & 0xffffffff) + 0x18) =
           *(undefined8 *)((long)local_68 + ((uVar14 & 0xffffffff) - 8));
      lVar10 = (long)puVar7 - ((ulong)(puVar6 + 5) & 0xfffffffffffffff8);
      uVar15 = uVar15 + (int)lVar10 & 0xfffffff8;
      if (7 < uVar15) {
        uVar14 = 0;
        do {
          uVar12 = (int)uVar14 + 8;
          *(undefined8 *)(((ulong)(puVar6 + 5) & 0xfffffffffffffff8) + uVar14) =
               *(undefined8 *)((long)local_68 + (uVar14 - lVar10));
          uVar14 = (ulong)uVar12;
        } while (uVar12 < uVar15);
      }
    }
  }
  else {
    puVar6[2] = (ulong)local_78;
    puVar6[4] = local_68[0];
  }
  puVar6[3] = local_70;
  *(uint *)(puVar6 + 6) = local_58;
  *(undefined4 *)((long)puVar6 + 0x34) = local_54;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    uStack_a0 = 0x100dc7;
    __stack_chk_fail();
  }
  pthread_mutex_unlock(__mutex);
  return;
}



/* JPH::DebugRendererRecorder::EndFrame() */

void __thiscall JPH::DebugRendererRecorder::EndFrame(DebugRendererRecorder *this)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x140));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  local_44 = CONCAT31(local_44._1_3_,3);
  (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),&local_44,1);
  local_44 = (undefined4)*(undefined8 *)(this + 0x198);
  (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),&local_44,4);
  lVar4 = *(long *)(this + 0x1a8);
  lVar6 = *(long *)(this + 0x198) * 0x30 + lVar4;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0x30) {
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4,0xc);
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4 + 0x10,0xc);
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4 + 0x20,4);
  }
  *(undefined8 *)(this + 0x198) = 0;
  local_44 = (undefined4)*(undefined8 *)(this + 0x1b0);
  (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),&local_44,4);
  lVar4 = *(long *)(this + 0x1c0);
  lVar6 = *(long *)(this + 0x1b0) * 0x40 + lVar4;
  for (; lVar6 != lVar4; lVar4 = lVar4 + 0x40) {
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4,0xc);
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4 + 0x10,0xc);
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4 + 0x20,0xc);
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4 + 0x30,4);
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4 + 0x34,4);
  }
  *(undefined8 *)(this + 0x1b0) = 0;
  local_44 = (undefined4)*(undefined8 *)(this + 0x1c8);
  (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),&local_44,4);
  lVar4 = *(long *)(this + 0x1c8);
  lVar6 = *(long *)(this + 0x1d8);
  lVar8 = lVar4 * 0x40 + lVar6;
  if (lVar8 != lVar6) {
    do {
      (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar6,0xc);
      plVar1 = *(long **)(this + 0x168);
      local_44 = (undefined4)*(undefined8 *)(lVar6 + 0x18);
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_44,4);
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
      if (cVar2 == '\0') {
        (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(lVar6 + 0x10),local_44);
      }
      (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar6 + 0x30,4);
      lVar4 = lVar6 + 0x34;
      lVar6 = lVar6 + 0x40;
      (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4,4);
    } while (lVar8 != lVar6);
    lVar4 = *(long *)(this + 0x1c8);
  }
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(this + 0x1d8);
    uVar7 = lVar4 * 0x40 + uVar5;
    for (; uVar5 < uVar7; uVar5 = uVar5 + 0x40) {
      if (*(long *)(uVar5 + 0x10) != uVar5 + 0x20) {
        (*Free)();
      }
    }
  }
  *(undefined8 *)(this + 0x1c8) = 0;
  local_44 = (undefined4)*(undefined8 *)(this + 0x1e0);
  (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),&local_44,4);
  lVar4 = *(long *)(this + 0x1f0);
  lVar6 = *(long *)(this + 0x1e0) * 0x60 + lVar4;
  for (; lVar6 != lVar4; lVar4 = lVar4 + 0x60) {
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4,0x40);
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4 + 0x40,4);
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4 + 0x44,4);
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4 + 0x48,4);
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4 + 0x4c,4);
    (**(code **)(**(long **)(this + 0x168) + 0x10))(*(long **)(this + 0x168),lVar4 + 0x50,4);
  }
  *(undefined8 *)(this + 0x1e0) = 0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x140));
  return;
}



/* JPH::DebugRendererRecorder::DrawGeometry(JPH::Mat44 const&, JPH::AABox const&, float, JPH::Color,
   JPH::Ref<JPH::DebugRenderer::Geometry> const&, JPH::DebugRenderer::ECullMode,
   JPH::DebugRenderer::ECastShadow, JPH::DebugRenderer::EDrawMode) */

void JPH::DebugRendererRecorder::DrawGeometry
               (long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,Ref *param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  ulong uVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long in_FS_OFFSET;
  uint local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x140));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  bVar3 = HashTable<JPH::Ref<JPH::DebugRenderer::Geometry>,std::pair<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::UnorderedMapDetail<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::Hash<JPH::Ref<JPH::DebugRenderer::Geometry>>,std::equal_to<JPH::Ref<JPH::DebugRenderer::Geometry>>>
          ::InsertKey<false>((HashTable<JPH::Ref<JPH::DebugRenderer::Geometry>,std::pair<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::UnorderedMapDetail<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::Hash<JPH::Ref<JPH::DebugRenderer::Geometry>>,std::equal_to<JPH::Ref<JPH::DebugRenderer::Geometry>>>
                              *)(param_1 + 0x178),param_5,&local_ac);
  puVar8 = (undefined8 *)((ulong)local_ac * 0x10 + *(long *)(param_1 + 0x178));
  if (bVar3) {
    piVar2 = *(int **)param_5;
    *puVar8 = piVar2;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar8 + 1) = 0;
  }
  else {
    iVar4 = *(int *)(puVar8 + 1);
    if (iVar4 != 0) goto LAB_0010126f;
  }
  local_ac = CONCAT31(local_ac._1_3_,2);
  (**(code **)(**(long **)(param_1 + 0x168) + 0x10))(*(long **)(param_1 + 0x168),&local_ac,1);
  iVar4 = *(int *)(param_1 + 0x174);
  plVar10 = *(long **)(param_1 + 0x168);
  *(int *)(param_1 + 0x174) = iVar4 + 1;
  *(int *)(puVar8 + 1) = iVar4;
  (**(code **)(*plVar10 + 0x10))(plVar10,puVar8 + 1,4);
  (**(code **)(**(long **)(param_1 + 0x168) + 0x10))
            (*(long **)(param_1 + 0x168),*(long *)param_5 + 0x20,0xc);
  (**(code **)(**(long **)(param_1 + 0x168) + 0x10))
            (*(long **)(param_1 + 0x168),*(long *)param_5 + 0x30,0xc);
  local_ac = (uint)*(undefined8 *)(*(long *)param_5 + 8);
  (**(code **)(**(long **)(param_1 + 0x168) + 0x10))(*(long **)(param_1 + 0x168),&local_ac,4);
  plVar10 = *(long **)(*(long *)param_5 + 0x18);
  plVar9 = plVar10 + *(long *)(*(long *)param_5 + 8) * 2;
  for (; plVar10 != plVar9; plVar10 = plVar10 + 2) {
    (**(code **)(**(long **)(param_1 + 0x168) + 0x10))(*(long **)(param_1 + 0x168),plVar10 + 1,4);
    (**(code **)(**(long **)(param_1 + 0x168) + 0x10))(*(long **)(param_1 + 0x168),*plVar10 + 0xc,4)
    ;
  }
  iVar4 = *(int *)(puVar8 + 1);
LAB_0010126f:
  lVar7 = *(long *)(param_1 + 0x1e0);
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_98 = param_2[2];
  uStack_90 = param_2[3];
  local_88 = param_2[4];
  uStack_80 = param_2[5];
  local_78 = param_2[6];
  uStack_70 = param_2[7];
  uVar5 = lVar7 + 1;
  uVar1 = *(ulong *)(param_1 + 0x1e8);
  lVar6 = *(long *)(param_1 + 0x1f0);
  local_68 = param_4;
  if (uVar1 < uVar5) {
    if (uVar5 <= uVar1 * 2) {
      uVar5 = uVar1 * 2;
    }
    lVar6 = (*Reallocate)(lVar6,uVar1 * 0x60,uVar5 * 0x60);
    lVar7 = *(long *)(param_1 + 0x1e0);
    *(ulong *)(param_1 + 0x1e8) = uVar5;
    *(long *)(param_1 + 0x1f0) = lVar6;
    uVar5 = lVar7 + 1;
  }
  *(ulong *)(param_1 + 0x1e0) = uVar5;
  uStack_5c = param_7;
  local_58 = param_8;
  puVar8 = (undefined8 *)(lVar7 * 0x60 + lVar6);
  *puVar8 = local_a8;
  puVar8[1] = uStack_a0;
  puVar8[2] = local_98;
  puVar8[3] = uStack_90;
  puVar8[4] = local_88;
  puVar8[5] = uStack_80;
  puVar8[6] = local_78;
  puVar8[7] = uStack_70;
  puVar8[8] = CONCAT44(iVar4,local_68);
  puVar8[9] = CONCAT44(param_7,param_6);
  puVar8[10] = CONCAT44(uStack_54,param_8);
  puVar8[0xb] = uStack_50;
  iStack_64 = iVar4;
  uStack_60 = param_6;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x140));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DebugRendererRecorder::BatchImpl::~BatchImpl() */

void __thiscall JPH::DebugRendererRecorder::BatchImpl::~BatchImpl(BatchImpl *this)

{
  return;
}



/* JPH::DebugRendererRecorder::BatchImpl::~BatchImpl() */

void __thiscall JPH::DebugRendererRecorder::BatchImpl::~BatchImpl(BatchImpl *this)

{
                    /* WARNING: Could not recover jumptable at 0x001014e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::DebugRendererRecorder::BatchImpl::AddRef() */

void __thiscall JPH::DebugRendererRecorder::BatchImpl::AddRef(BatchImpl *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return;
}



/* JPH::DebugRendererRecorder::BatchImpl::Release() */

void __thiscall JPH::DebugRendererRecorder::BatchImpl::Release(BatchImpl *this)

{
  BatchImpl *pBVar1;
  
  LOCK();
  pBVar1 = this + 8;
  *(int *)pBVar1 = *(int *)pBVar1 + -1;
  UNLOCK();
  if (*(int *)pBVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0010150e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* JPH::DebugRendererRecorder::~DebugRendererRecorder() */

void __thiscall JPH::DebugRendererRecorder::~DebugRendererRecorder(DebugRendererRecorder *this)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *(undefined ***)this = &PTR__DebugRendererRecorder_00101d18;
  if (*(long *)(this + 0x1f0) != 0) {
    *(undefined8 *)(this + 0x1e0) = 0;
    (*Free)();
  }
  uVar5 = *(ulong *)(this + 0x1d8);
  if (uVar5 != 0) {
    if ((*(long *)(this + 0x1c8) != 0) &&
       (uVar7 = *(long *)(this + 0x1c8) * 0x40 + uVar5, uVar5 < uVar7)) {
      do {
        if (*(long *)(uVar5 + 0x10) != uVar5 + 0x20) {
          (*Free)();
        }
        uVar5 = uVar5 + 0x40;
      } while (uVar5 < uVar7);
      uVar5 = *(ulong *)(this + 0x1d8);
    }
    *(undefined8 *)(this + 0x1c8) = 0;
    (*Free)(uVar5);
  }
  if (*(long *)(this + 0x1c0) != 0) {
    *(undefined8 *)(this + 0x1b0) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x1a8) != 0) {
    *(undefined8 *)(this + 0x198) = 0;
    (*Free)();
  }
  lVar6 = *(long *)(this + 0x178);
  if ((*(int *)(this + 0x188) != 0) && (*(int *)(this + 0x18c) != 0)) {
    lVar4 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0x180) + lVar4) ||
             (piVar2 = *(int **)(lVar6 + lVar4 * 0x10), piVar2 == (int *)0x0))) {
        lVar4 = lVar4 + 1;
        if (*(uint *)(this + 0x18c) <= (uint)lVar4) goto LAB_00101630;
      }
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        puVar8 = *(undefined8 **)(piVar2 + 6);
        if (puVar8 != (undefined8 *)0x0) {
          if ((*(long *)(piVar2 + 2) != 0) &&
             (puVar9 = puVar8 + *(long *)(piVar2 + 2) * 2, puVar8 < puVar9)) {
            do {
              plVar3 = (long *)*puVar8;
              if (plVar3 != (long *)0x0) {
                if (*(code **)(*plVar3 + 0x18) == BatchImpl::Release) {
                  LOCK();
                  plVar1 = plVar3 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)(*plVar3 + 8))();
                  }
                }
                else {
                  (**(code **)(*plVar3 + 0x18))();
                }
              }
              puVar8 = puVar8 + 2;
            } while (puVar8 < puVar9);
            puVar8 = *(undefined8 **)(piVar2 + 6);
          }
          piVar2[2] = 0;
          piVar2[3] = 0;
          (*Free)(puVar8);
        }
        (*Free)(piVar2);
      }
      lVar6 = *(long *)(this + 0x178);
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x18c));
  }
LAB_00101630:
  if (lVar6 != 0) {
    (*Free)();
  }
  JPH::DebugRenderer::~DebugRenderer((DebugRenderer *)this);
  return;
}



/* JPH::DebugRendererRecorder::~DebugRendererRecorder() */

void __thiscall JPH::DebugRendererRecorder::~DebugRendererRecorder(DebugRendererRecorder *this)

{
  ~DebugRendererRecorder(this);
                    /* WARNING: Could not recover jumptable at 0x00101741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::HashTable<JPH::Ref<JPH::DebugRenderer::Geometry>,
   std::pair<JPH::Ref<JPH::DebugRenderer::Geometry>, unsigned int>,
   JPH::UnorderedMapDetail<JPH::Ref<JPH::DebugRenderer::Geometry>, unsigned int>,
   JPH::Hash<JPH::Ref<JPH::DebugRenderer::Geometry> >,
   std::equal_to<JPH::Ref<JPH::DebugRenderer::Geometry> > >::GrowTable() */

void __thiscall
JPH::
HashTable<JPH::Ref<JPH::DebugRenderer::Geometry>,std::pair<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::UnorderedMapDetail<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::Hash<JPH::Ref<JPH::DebugRenderer::Geometry>>,std::equal_to<JPH::Ref<JPH::DebugRenderer::Geometry>>>
::GrowTable(HashTable<JPH::Ref<JPH::DebugRenderer::Geometry>,std::pair<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::UnorderedMapDetail<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::Hash<JPH::Ref<JPH::DebugRenderer::Geometry>>,std::equal_to<JPH::Ref<JPH::DebugRenderer::Geometry>>>
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
  undefined8 *puVar11;
  uint uVar12;
  byte bVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  undefined8 local_48;
  long local_40 [2];
  
  uVar2 = *(uint *)(this + 0x14);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (ulong)(uVar2 * 2);
  if (uVar2 * 2 < 0x10) {
    uVar8 = 0x10;
  }
  if (uVar2 <= (uint)uVar8) {
    puVar3 = *(undefined8 **)this;
    pcVar17 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(uint *)(this + 0x14) = (uint)uVar8;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar8 * 7 >> 3);
    lVar9 = (*Allocate)(uVar8 * 0x11 + 0xf);
    *(long *)this = lVar9;
    __s = (void *)(lVar9 + (ulong)*(uint *)(this + 0x14) * 0x10);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (puVar3 != (undefined8 *)0x0) {
      if (uVar2 != 0) {
        puVar14 = puVar3;
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
            uVar8 = 0xcbf29ce484222325;
            local_48 = *puVar14;
            pbVar10 = (byte *)&local_48;
            do {
              bVar13 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              uVar8 = (uVar8 ^ bVar13) * 0x100000001b3;
            } while (pbVar10 != (byte *)local_40);
            bVar13 = (byte)uVar8 | 0x80;
            uVar7 = (uint)(uVar8 >> 7);
            while( true ) {
              uVar7 = uVar7 & *(int *)(this + 0x14) - 1U;
              pcVar1 = (char *)(*(long *)(this + 8) + (ulong)uVar7);
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
              uVar5 = (ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
              if (uVar5 != 0) break;
              uVar7 = uVar7 + 0x10;
            }
            iVar6 = 0;
            for (uVar12 = (uint)uVar5; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            puVar15 = puVar14 + 2;
            pcVar17 = pcVar17 + 1;
            *(int *)(this + 0x18) = iVar16 + -1;
            uVar7 = iVar6 + uVar7 & *(int *)(this + 0x14) - 1U;
            *(byte *)(*(long *)(this + 8) + (ulong)uVar7) = bVar13;
            *(byte *)(*(long *)(this + 8) +
                     (ulong)((uVar7 - 0xf & *(int *)(this + 0x14) - 1U) + 0xf)) = bVar13;
            uVar4 = *puVar14;
            puVar11 = (undefined8 *)((ulong)uVar7 * 0x10 + *(long *)this);
            *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
            *puVar11 = uVar4;
            *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar14 + 1);
            puVar14 = puVar15;
            if (puVar3 + (ulong)uVar2 * 2 == puVar15) goto LAB_001019b5;
          }
          puVar14 = puVar14 + 2;
          pcVar17 = pcVar17 + 1;
        } while (puVar3 + (ulong)uVar2 * 2 != puVar14);
      }
LAB_001019b5:
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001019d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(puVar3);
        return;
      }
      goto LAB_00101a00;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101a00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool JPH::HashTable<JPH::Ref<JPH::DebugRenderer::Geometry>,
   std::pair<JPH::Ref<JPH::DebugRenderer::Geometry>, unsigned int>,
   JPH::UnorderedMapDetail<JPH::Ref<JPH::DebugRenderer::Geometry>, unsigned int>,
   JPH::Hash<JPH::Ref<JPH::DebugRenderer::Geometry> >,
   std::equal_to<JPH::Ref<JPH::DebugRenderer::Geometry> >
   >::InsertKey<false>(JPH::Ref<JPH::DebugRenderer::Geometry> const&, unsigned int&) */

bool __thiscall
JPH::
HashTable<JPH::Ref<JPH::DebugRenderer::Geometry>,std::pair<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::UnorderedMapDetail<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::Hash<JPH::Ref<JPH::DebugRenderer::Geometry>>,std::equal_to<JPH::Ref<JPH::DebugRenderer::Geometry>>>
::InsertKey<false>(HashTable<JPH::Ref<JPH::DebugRenderer::Geometry>,std::pair<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::UnorderedMapDetail<JPH::Ref<JPH::DebugRenderer::Geometry>,unsigned_int>,JPH::Hash<JPH::Ref<JPH::DebugRenderer::Geometry>>,std::equal_to<JPH::Ref<JPH::DebugRenderer::Geometry>>>
                   *this,Ref *param_1,uint *param_2)

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
  long local_38;
  long local_30 [2];
  
  pbVar24 = (byte *)&local_38;
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
  uVar27 = 0xcbf29ce484222325;
  local_38 = *(long *)param_1;
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
        if (*(long *)param_1 == *(long *)(*(long *)this + (ulong)uVar22 * 0x10)) {
          bVar25 = false;
          goto LAB_00101b25;
        }
        uVar22 = uVar22 + 1;
        bVar2 = (char)iVar4 + 1U & 0x1f;
        uVar5 = uVar26 >> bVar2;
        uVar26 = uVar26 >> bVar2;
      } while (uVar5 != 0);
    }
    if (uVar23 == 0xffffffff) {
      auVar32[0] = -(bVar6 == _LC3);
      auVar32[1] = -(bVar7 == UNK_00101d71);
      auVar32[2] = -(bVar8 == UNK_00101d72);
      auVar32[3] = -(bVar9 == UNK_00101d73);
      auVar32[4] = -(bVar10 == UNK_00101d74);
      auVar32[5] = -(bVar11 == UNK_00101d75);
      auVar32[6] = -(bVar12 == UNK_00101d76);
      auVar32[7] = -(bVar13 == UNK_00101d77);
      auVar32[8] = -(bVar14 == UNK_00101d78);
      auVar32[9] = -(bVar15 == UNK_00101d79);
      auVar32[10] = -(bVar16 == UNK_00101d7a);
      auVar32[0xb] = -(bVar17 == UNK_00101d7b);
      auVar32[0xc] = -(bVar18 == UNK_00101d7c);
      auVar32[0xd] = -(bVar19 == UNK_00101d7d);
      auVar32[0xe] = -(bVar20 == UNK_00101d7e);
      auVar32[0xf] = -(bVar21 == UNK_00101d7f);
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
LAB_00101b25:
  *param_2 = uVar22;
  if (local_30[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DebugRendererRecorder::DrawLine(JPH::Vec3, JPH::Vec3, JPH::Color) */

void JPH::DebugRendererRecorder::_GLOBAL__sub_I_DrawLine(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC4;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::DebugRendererRecorder::~DebugRendererRecorder() */

void __thiscall JPH::DebugRendererRecorder::~DebugRendererRecorder(DebugRendererRecorder *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::DebugRendererRecorder::BatchImpl::~BatchImpl() */

void __thiscall JPH::DebugRendererRecorder::BatchImpl::~BatchImpl(BatchImpl *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


