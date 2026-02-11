
/* std::_Function_handler<JPH::Vec3 (JPH::Vec3),
   JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>::_M_invoke(std::_Any_data const&,
   JPH::Vec3&&) */

undefined1  [16]
std::_Function_handler<JPH::Vec3(JPH::Vec3),JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>
::_M_invoke(_Any_data *param_1,Vec3 *param_2)

{
  return *(undefined1 (*) [16])param_2;
}



/* std::_Function_handler<JPH::Vec3 (JPH::Vec3),
   JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>::_M_manager(std::_Any_data&,
   std::_Any_data const&, std::_Manager_operation) */

undefined8
std::_Function_handler<JPH::Vec3(JPH::Vec3),JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>
::_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HashTable<float, std::pair<float, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<float, JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::Hash<float>,
   std::equal_to<float> >::rehash(unsigned int) [clone .isra.0] */

void JPH::
     HashTable<float,std::pair<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<float>,std::equal_to<float>>
     ::rehash(uint param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined4 in_register_0000003c;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  int iVar23;
  long in_FS_OFFSET;
  undefined1 auVar24 [16];
  float local_44;
  long local_40 [2];
  
  uVar22 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
  uVar17 = (ulong)uVar22;
  puVar21 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = 0;
  if (uVar22 != 0) {
    do {
      while( true ) {
        pcVar1 = puVar21 + lVar7;
        if (*pcVar1 != '\0') break;
LAB_0010008a:
        lVar7 = lVar7 + 1;
        if ((uint)uVar17 <= (uint)lVar7) goto LAB_001000b4;
      }
      if (*pcVar1 == '\x7f') {
        *pcVar1 = '\0';
        puVar21 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
        uVar17 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
        goto LAB_0010008a;
      }
      *pcVar1 = '\x7f';
      uVar22 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
      uVar17 = (ulong)uVar22;
      lVar7 = lVar7 + 1;
      puVar21 = *(undefined1 **)(CONCAT44(in_register_0000003c,param_1) + 8);
    } while ((uint)lVar7 < uVar22);
  }
LAB_001000b4:
  puVar21[uVar17] = *puVar21;
  lVar7 = 1;
  do {
    lVar18 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
    iVar10 = (int)lVar7;
    puVar21 = (undefined1 *)(lVar18 + lVar7);
    lVar7 = lVar7 + 1;
    *(undefined1 *)
     (lVar18 + (ulong)(uint)(iVar10 + *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14))) =
         *puVar21;
    auVar5 = __LC1;
  } while (lVar7 != 0xf);
  uVar22 = *(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
  uVar17 = (ulong)uVar22;
  uVar20 = uVar22 - 1;
  if (uVar22 != 0) {
    lVar7 = 0;
    do {
      lVar18 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
      if (*(char *)(lVar18 + lVar7) == '\x7f') {
        lVar13 = *(long *)CONCAT44(in_register_0000003c,param_1);
        lVar15 = lVar7 * 0x10;
        while( true ) {
          local_44 = *(float *)(lVar13 + lVar15);
          if (local_44 == 0.0) {
            local_44 = 0.0;
          }
          uVar8 = 0xcbf29ce484222325;
          pfVar14 = &local_44;
          do {
            bVar6 = *(byte *)pfVar14;
            pfVar14 = (float *)((long)pfVar14 + 1);
            uVar8 = (uVar8 ^ bVar6) * 0x100000001b3;
          } while (pfVar14 != (float *)local_40);
          bVar6 = (byte)uVar8 | 0x80;
          uVar16 = (int)uVar17 - 1U & (uint)(uVar8 >> 7);
          auVar24 = *(undefined1 (*) [16])(lVar18 + (ulong)uVar16) & auVar5;
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
          uVar22 = uVar16;
          while (uVar4 == 0xffff) {
            uVar22 = uVar22 + 0x10 & uVar20;
            auVar24 = *(undefined1 (*) [16])(lVar18 + (ulong)uVar22) & auVar5;
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
          for (uVar12 = uVar4 ^ 0xffff; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            iVar10 = iVar10 + 1;
          }
          uVar22 = iVar10 + uVar22 & uVar20;
          if (((uVar22 - uVar16 ^ iVar23 - uVar16) & uVar20 & 0xfffffff0) == 0) {
            *(byte *)(lVar18 + lVar7) = bVar6;
            *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                     (ulong)((*(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U &
                             iVar23 - 0xfU) + 0xf)) = bVar6;
            uVar17 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
            goto LAB_00100130;
          }
          pbVar11 = (byte *)(lVar18 + (ulong)uVar22);
          lVar18 = (ulong)uVar22 * 0x10;
          if (*pbVar11 == 0) break;
          *pbVar11 = bVar6;
          *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                   (ulong)((*(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U &
                           uVar22 - 0xf) + 0xf)) = bVar6;
          lVar13 = *(long *)CONCAT44(in_register_0000003c,param_1);
          puVar9 = (undefined4 *)(lVar13 + lVar15);
          puVar19 = (undefined4 *)(lVar18 + lVar13);
          uVar2 = *puVar9;
          lVar18 = *(long *)(puVar9 + 2);
          *puVar9 = *puVar19;
          *puVar19 = uVar2;
          *(undefined8 *)(puVar9 + 2) = 0;
          if (*(long *)(puVar19 + 2) != 0) {
            *(long *)(puVar9 + 2) = *(long *)(puVar19 + 2);
            *(undefined8 *)(puVar19 + 2) = 0;
          }
          if (lVar18 != 0) {
            *(long *)(puVar19 + 2) = lVar18;
          }
          uVar17 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
          lVar18 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
        }
        *pbVar11 = bVar6;
        *(byte *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
                 (ulong)((uVar22 - 0xf &
                         *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U) + 0xf)) =
             bVar6;
        *(undefined1 *)(*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) + lVar7) = 0;
        *(undefined1 *)
         (*(long *)(CONCAT44(in_register_0000003c,param_1) + 8) +
         (ulong)((*(int *)(CONCAT44(in_register_0000003c,param_1) + 0x14) - 1U & iVar23 - 0xfU) +
                0xf)) = 0;
        puVar19 = (undefined4 *)(lVar18 + *(long *)CONCAT44(in_register_0000003c,param_1));
        puVar9 = (undefined4 *)(*(long *)CONCAT44(in_register_0000003c,param_1) + lVar15);
        uVar3 = *(undefined8 *)(puVar9 + 2);
        *puVar19 = *puVar9;
        *(undefined8 *)(puVar19 + 2) = uVar3;
        uVar17 = (ulong)*(uint *)(CONCAT44(in_register_0000003c,param_1) + 0x14);
      }
LAB_00100130:
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)uVar17);
  }
  *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x18) =
       (int)(uVar17 * 7 >> 3) - *(int *)(CONCAT44(in_register_0000003c,param_1) + 0x10);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HashTable<JPH::DebugRenderer::SwingConeLimits,
   std::pair<JPH::DebugRenderer::SwingConeLimits, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingConeLimits,
   JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::DebugRenderer::SwingConeLimitsHasher,
   std::equal_to<JPH::DebugRenderer::SwingConeLimits> >::rehash(unsigned int) [clone .isra.0] */

void JPH::
     HashTable<JPH::DebugRenderer::SwingConeLimits,std::pair<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingConeLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingConeLimits>>
     ::rehash(uint param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  ushort uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  float fVar18;
  ulong uVar19;
  ulong uVar20;
  undefined4 in_register_0000003c;
  long *plVar21;
  undefined1 *puVar22;
  uint uVar23;
  byte *pbVar24;
  long lVar25;
  long in_FS_OFFSET;
  undefined1 auVar26 [16];
  float local_44;
  long local_40 [2];
  
  plVar21 = (long *)CONCAT44(in_register_0000003c,param_1);
  uVar19 = (ulong)*(uint *)((long)plVar21 + 0x14);
  puVar22 = (undefined1 *)plVar21[1];
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = 0;
  if (*(uint *)((long)plVar21 + 0x14) != 0) {
    do {
      while( true ) {
        pcVar1 = puVar22 + lVar7;
        if (*pcVar1 != '\0') break;
LAB_0010037b:
        lVar7 = lVar7 + 1;
        if ((uint)uVar19 <= (uint)lVar7) goto LAB_001003a6;
      }
      if (*pcVar1 == '\x7f') {
        *pcVar1 = '\0';
        puVar22 = (undefined1 *)plVar21[1];
        uVar19 = (ulong)*(uint *)((long)plVar21 + 0x14);
        goto LAB_0010037b;
      }
      *pcVar1 = '\x7f';
      uVar19 = (ulong)*(uint *)((long)plVar21 + 0x14);
      lVar7 = lVar7 + 1;
      puVar22 = (undefined1 *)plVar21[1];
    } while ((uint)lVar7 < *(uint *)((long)plVar21 + 0x14));
  }
LAB_001003a6:
  puVar22[uVar19] = *puVar22;
  lVar7 = 1;
  do {
    iVar10 = (int)lVar7;
    puVar22 = (undefined1 *)(plVar21[1] + lVar7);
    lVar7 = lVar7 + 1;
    *(undefined1 *)(plVar21[1] + (ulong)(uint)(iVar10 + *(int *)((long)plVar21 + 0x14))) = *puVar22;
    auVar5 = __LC1;
  } while (lVar7 != 0xf);
  uVar11 = *(uint *)((long)plVar21 + 0x14);
  uVar19 = (ulong)uVar11;
  uVar17 = uVar11 - 1;
  if (uVar11 != 0) {
    lVar7 = 0;
    do {
      lVar12 = plVar21[1];
      if (*(char *)(lVar12 + lVar7) == '\x7f') {
        iVar10 = (int)lVar7;
        lVar25 = lVar7 * 0x10;
        pfVar8 = (float *)(*plVar21 + lVar25);
        while( true ) {
          fVar18 = pfVar8[1];
          local_44 = *pfVar8;
          if (local_44 == 0.0) {
            local_44 = 0.0;
          }
          uVar16 = 0xcbf29ce484222325;
          pfVar8 = &local_44;
          do {
            bVar6 = *(byte *)pfVar8;
            pfVar8 = (float *)((long)pfVar8 + 1);
            uVar16 = (uVar16 ^ bVar6) * 0x100000001b3;
          } while (pfVar8 != (float *)local_40);
          if (fVar18 == 0.0) {
            fVar18 = 0.0;
          }
          local_44 = fVar18;
          uVar20 = 0xcbf29ce484222325;
          pfVar8 = &local_44;
          do {
            bVar6 = *(byte *)pfVar8;
            pfVar8 = (float *)((long)pfVar8 + 1);
            uVar9 = bVar6 ^ uVar20;
            uVar20 = uVar9 * 0x100000001b3;
          } while (pfVar8 != (float *)local_40);
          uVar9 = uVar9 * 0x21dbf4aaa9ed2837;
          uVar16 = ((uVar9 ^ uVar9 >> 0x27) * -0x415dda0614cbaa93 + uVar16) * -0x415dda0614cbaa93;
          uVar16 = (uVar16 ^ uVar16 >> 0x20) * -0x415dda0614cbaa93;
          uVar16 = (uVar16 ^ uVar16 >> 0x1d) * -0x415dda0614cbaa93;
          uVar16 = (uVar16 ^ uVar16 >> 0x20) * -0x415dda0614cbaa93;
          uVar16 = uVar16 ^ uVar16 >> 0x1d;
          bVar6 = (byte)uVar16 | 0x80;
          uVar23 = (int)uVar19 - 1U & (uint)(uVar16 >> 7);
          auVar26 = *(undefined1 (*) [16])(lVar12 + (ulong)uVar23) & auVar5;
          uVar3 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
          uVar11 = uVar23;
          while (uVar3 == 0xffff) {
            uVar11 = uVar11 + 0x10 & uVar17;
            auVar26 = *(undefined1 (*) [16])(lVar12 + (ulong)uVar11) & auVar5;
            uVar3 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
          }
          iVar4 = 0;
          for (uVar15 = uVar3 ^ 0xffff; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            iVar4 = iVar4 + 1;
          }
          uVar11 = iVar4 + uVar11 & uVar17;
          if ((uVar17 & 0xfffffff0 & (uVar11 - uVar23 ^ iVar10 - uVar23)) == 0) {
            *(byte *)(lVar12 + lVar7) = bVar6;
            *(byte *)(plVar21[1] +
                     (ulong)((*(int *)((long)plVar21 + 0x14) - 1U & iVar10 - 0xfU) + 0xf)) = bVar6;
            uVar19 = (ulong)*(uint *)((long)plVar21 + 0x14);
            goto LAB_00100420;
          }
          pbVar24 = (byte *)(lVar12 + (ulong)uVar11);
          lVar12 = (ulong)uVar11 * 0x10;
          if (*pbVar24 == 0) break;
          *pbVar24 = bVar6;
          *(byte *)(plVar21[1] + (ulong)((uVar11 - 0xf & *(int *)((long)plVar21 + 0x14) - 1U) + 0xf)
                   ) = bVar6;
          puVar13 = (undefined8 *)(lVar12 + *plVar21);
          pfVar8 = (float *)(*plVar21 + lVar25);
          uVar2 = *(undefined8 *)pfVar8;
          *(undefined8 *)pfVar8 = *puVar13;
          lVar12 = *(long *)(pfVar8 + 2);
          *puVar13 = uVar2;
          pfVar8[2] = 0.0;
          pfVar8[3] = 0.0;
          if (puVar13[1] != 0) {
            *(undefined8 *)(pfVar8 + 2) = puVar13[1];
            puVar13[1] = 0;
          }
          if (lVar12 != 0) {
            puVar13[1] = lVar12;
          }
          uVar19 = (ulong)*(uint *)((long)plVar21 + 0x14);
          lVar12 = plVar21[1];
        }
        *pbVar24 = bVar6;
        *(byte *)(plVar21[1] + (ulong)((uVar11 - 0xf & *(int *)((long)plVar21 + 0x14) - 1U) + 0xf))
             = bVar6;
        *(undefined1 *)(plVar21[1] + lVar7) = 0;
        *(undefined1 *)
         (plVar21[1] + (ulong)((iVar10 - 0xfU & *(int *)((long)plVar21 + 0x14) - 1U) + 0xf)) = 0;
        uVar19 = (ulong)*(uint *)((long)plVar21 + 0x14);
        puVar14 = (undefined8 *)(lVar12 + *plVar21);
        puVar13 = (undefined8 *)(*plVar21 + lVar25);
        uVar2 = puVar13[1];
        *puVar14 = *puVar13;
        puVar14[1] = uVar2;
      }
LAB_00100420:
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)uVar19);
  }
  *(int *)(plVar21 + 3) = (int)(uVar19 * 7 >> 3) - (int)plVar21[2];
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HashTable<JPH::DebugRenderer::TaperedCylinder,
   std::pair<JPH::DebugRenderer::TaperedCylinder, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<JPH::DebugRenderer::TaperedCylinder,
   JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::DebugRenderer::TaperedCylinderHasher,
   std::equal_to<JPH::DebugRenderer::TaperedCylinder> >::rehash(unsigned int) [clone .isra.0] */

void JPH::
     HashTable<JPH::DebugRenderer::TaperedCylinder,std::pair<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::TaperedCylinderHasher,std::equal_to<JPH::DebugRenderer::TaperedCylinder>>
     ::rehash(uint param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  undefined4 in_register_0000003c;
  long *plVar22;
  undefined1 *puVar23;
  float fVar24;
  ulong uVar25;
  byte *pbVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  long in_FS_OFFSET;
  undefined1 auVar30 [16];
  float local_44;
  long local_40 [2];
  
  plVar22 = (long *)CONCAT44(in_register_0000003c,param_1);
  uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
  puVar23 = (undefined1 *)plVar22[1];
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = 0;
  if (*(uint *)((long)plVar22 + 0x14) != 0) {
    do {
      while( true ) {
        pcVar1 = puVar23 + lVar9;
        if (*pcVar1 != '\0') break;
LAB_0010071a:
        lVar9 = lVar9 + 1;
        if ((uint)uVar21 <= (uint)lVar9) goto LAB_00100744;
      }
      if (*pcVar1 == '\x7f') {
        *pcVar1 = '\0';
        puVar23 = (undefined1 *)plVar22[1];
        uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
        goto LAB_0010071a;
      }
      *pcVar1 = '\x7f';
      uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
      lVar9 = lVar9 + 1;
      puVar23 = (undefined1 *)plVar22[1];
    } while ((uint)lVar9 < *(uint *)((long)plVar22 + 0x14));
  }
LAB_00100744:
  puVar23[uVar21] = *puVar23;
  lVar9 = 1;
  do {
    iVar13 = (int)lVar9;
    puVar23 = (undefined1 *)(plVar22[1] + lVar9);
    lVar9 = lVar9 + 1;
    *(undefined1 *)(plVar22[1] + (ulong)(uint)(iVar13 + *(int *)((long)plVar22 + 0x14))) = *puVar23;
    auVar7 = __LC1;
  } while (lVar9 != 0xf);
  uVar14 = *(uint *)((long)plVar22 + 0x14);
  uVar21 = (ulong)uVar14;
  uVar20 = uVar14 - 1;
  if (uVar14 != 0) {
    lVar9 = 0;
    do {
      lVar15 = plVar22[1];
      if (*(char *)(lVar15 + lVar9) == '\x7f') {
        iVar13 = (int)lVar9;
        lVar10 = lVar9 * 0x18;
        pfVar11 = (float *)(lVar10 + *plVar22);
        while( true ) {
          fVar28 = pfVar11[3];
          fVar29 = pfVar11[2];
          fVar24 = pfVar11[1];
          local_44 = *pfVar11;
          if (local_44 == 0.0) {
            local_44 = 0.0;
          }
          uVar19 = 0xcbf29ce484222325;
          pfVar11 = &local_44;
          do {
            bVar18 = *(byte *)pfVar11;
            pfVar11 = (float *)((long)pfVar11 + 1);
            uVar19 = (uVar19 ^ bVar18) * 0x100000001b3;
          } while (pfVar11 != (float *)local_40);
          if (fVar24 == 0.0) {
            fVar24 = 0.0;
          }
          local_44 = fVar24;
          uVar25 = 0xcbf29ce484222325;
          pfVar11 = &local_44;
          do {
            bVar18 = *(byte *)pfVar11;
            pfVar11 = (float *)((long)pfVar11 + 1);
            uVar12 = bVar18 ^ uVar25;
            uVar25 = uVar12 * 0x100000001b3;
          } while (pfVar11 != (float *)local_40);
          uVar12 = uVar12 * 0x21dbf4aaa9ed2837;
          uVar19 = (uVar19 + (uVar12 ^ uVar12 >> 0x27) * -0x415dda0614cbaa93) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x1d) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          if (fVar29 == 0.0) {
            fVar29 = 0.0;
          }
          local_44 = fVar29;
          uVar25 = 0xcbf29ce484222325;
          pfVar11 = &local_44;
          do {
            bVar18 = *(byte *)pfVar11;
            pfVar11 = (float *)((long)pfVar11 + 1);
            uVar12 = bVar18 ^ uVar25;
            uVar25 = uVar12 * 0x100000001b3;
          } while (pfVar11 != (float *)local_40);
          uVar12 = uVar12 * 0x21dbf4aaa9ed2837;
          uVar19 = ((uVar19 ^ uVar19 >> 0x1d) + (uVar12 ^ uVar12 >> 0x27) * -0x415dda0614cbaa93) *
                   -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x1d) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          if (fVar28 == 0.0) {
            fVar28 = 0.0;
          }
          local_44 = fVar28;
          uVar25 = 0xcbf29ce484222325;
          pfVar11 = &local_44;
          do {
            bVar18 = *(byte *)pfVar11;
            pfVar11 = (float *)((long)pfVar11 + 1);
            uVar12 = bVar18 ^ uVar25;
            uVar25 = uVar12 * 0x100000001b3;
          } while (pfVar11 != (float *)local_40);
          uVar12 = uVar12 * 0x21dbf4aaa9ed2837;
          uVar19 = ((uVar19 ^ uVar19 >> 0x1d) + (uVar12 ^ uVar12 >> 0x27) * -0x415dda0614cbaa93) *
                   -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x1d) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          uVar19 = uVar19 ^ uVar19 >> 0x1d;
          bVar18 = (byte)uVar19 | 0x80;
          uVar27 = (int)uVar21 - 1U & (uint)(uVar19 >> 7);
          auVar30 = *(undefined1 (*) [16])(lVar15 + (ulong)uVar27) & auVar7;
          uVar3 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
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
                  (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
          uVar14 = uVar27;
          while (uVar3 == 0xffff) {
            uVar14 = uVar14 + 0x10 & uVar20;
            auVar30 = *(undefined1 (*) [16])(lVar15 + (ulong)uVar14) & auVar7;
            uVar3 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
                    (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
          }
          iVar4 = 0;
          for (uVar8 = uVar3 ^ 0xffff; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            iVar4 = iVar4 + 1;
          }
          uVar14 = iVar4 + uVar14 & uVar20;
          if ((uVar20 & 0xfffffff0 & (uVar14 - uVar27 ^ iVar13 - uVar27)) == 0) {
            *(byte *)(lVar15 + lVar9) = bVar18;
            *(byte *)(plVar22[1] +
                     (ulong)((*(int *)((long)plVar22 + 0x14) - 1U & iVar13 - 0xfU) + 0xf)) = bVar18;
            uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
            goto LAB_001007b8;
          }
          pbVar26 = (byte *)(lVar15 + (ulong)uVar14);
          lVar15 = (ulong)uVar14 * 0x18;
          if (*pbVar26 == 0) break;
          *pbVar26 = bVar18;
          *(byte *)(plVar22[1] + (ulong)((uVar14 - 0xf & *(int *)((long)plVar22 + 0x14) - 1U) + 0xf)
                   ) = bVar18;
          puVar16 = (undefined8 *)(lVar15 + *plVar22);
          pfVar11 = (float *)(*plVar22 + lVar10);
          uVar2 = puVar16[1];
          uVar5 = *(undefined8 *)pfVar11;
          uVar6 = *(undefined8 *)(pfVar11 + 2);
          lVar15 = *(long *)(pfVar11 + 4);
          *(undefined8 *)pfVar11 = *puVar16;
          *(undefined8 *)(pfVar11 + 2) = uVar2;
          *puVar16 = uVar5;
          puVar16[1] = uVar6;
          pfVar11[4] = 0.0;
          pfVar11[5] = 0.0;
          if (puVar16[2] != 0) {
            *(undefined8 *)(pfVar11 + 4) = puVar16[2];
            puVar16[2] = 0;
          }
          if (lVar15 != 0) {
            puVar16[2] = lVar15;
          }
          uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
          lVar15 = plVar22[1];
        }
        *pbVar26 = bVar18;
        *(byte *)(plVar22[1] + (ulong)((uVar14 - 0xf & *(int *)((long)plVar22 + 0x14) - 1U) + 0xf))
             = bVar18;
        *(undefined1 *)(plVar22[1] + lVar9) = 0;
        *(undefined1 *)
         (plVar22[1] + (ulong)((iVar13 - 0xfU & *(int *)((long)plVar22 + 0x14) - 1U) + 0xf)) = 0;
        uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
        puVar17 = (undefined8 *)(lVar15 + *plVar22);
        puVar16 = (undefined8 *)(*plVar22 + lVar10);
        uVar5 = puVar16[1];
        uVar2 = puVar16[2];
        *puVar17 = *puVar16;
        puVar17[1] = uVar5;
        puVar17[2] = uVar2;
      }
LAB_001007b8:
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < (uint)uVar21);
  }
  *(int *)(plVar22 + 3) = (int)(uVar21 * 7 >> 3) - (int)plVar22[2];
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HashTable<JPH::DebugRenderer::SwingPyramidLimits,
   std::pair<JPH::DebugRenderer::SwingPyramidLimits, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingPyramidLimits,
   JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::DebugRenderer::SwingPyramidLimitsHasher,
   std::equal_to<JPH::DebugRenderer::SwingPyramidLimits> >::rehash(unsigned int) [clone .isra.0] */

void JPH::
     HashTable<JPH::DebugRenderer::SwingPyramidLimits,std::pair<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingPyramidLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingPyramidLimits>>
     ::rehash(uint param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  undefined4 in_register_0000003c;
  long *plVar22;
  undefined1 *puVar23;
  float fVar24;
  ulong uVar25;
  byte *pbVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  long in_FS_OFFSET;
  undefined1 auVar30 [16];
  float local_44;
  long local_40 [2];
  
  plVar22 = (long *)CONCAT44(in_register_0000003c,param_1);
  uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
  puVar23 = (undefined1 *)plVar22[1];
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = 0;
  if (*(uint *)((long)plVar22 + 0x14) != 0) {
    do {
      while( true ) {
        pcVar1 = puVar23 + lVar9;
        if (*pcVar1 != '\0') break;
LAB_00100bea:
        lVar9 = lVar9 + 1;
        if ((uint)uVar21 <= (uint)lVar9) goto LAB_00100c14;
      }
      if (*pcVar1 == '\x7f') {
        *pcVar1 = '\0';
        puVar23 = (undefined1 *)plVar22[1];
        uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
        goto LAB_00100bea;
      }
      *pcVar1 = '\x7f';
      uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
      lVar9 = lVar9 + 1;
      puVar23 = (undefined1 *)plVar22[1];
    } while ((uint)lVar9 < *(uint *)((long)plVar22 + 0x14));
  }
LAB_00100c14:
  puVar23[uVar21] = *puVar23;
  lVar9 = 1;
  do {
    iVar13 = (int)lVar9;
    puVar23 = (undefined1 *)(plVar22[1] + lVar9);
    lVar9 = lVar9 + 1;
    *(undefined1 *)(plVar22[1] + (ulong)(uint)(iVar13 + *(int *)((long)plVar22 + 0x14))) = *puVar23;
    auVar7 = __LC1;
  } while (lVar9 != 0xf);
  uVar14 = *(uint *)((long)plVar22 + 0x14);
  uVar21 = (ulong)uVar14;
  uVar20 = uVar14 - 1;
  if (uVar14 != 0) {
    lVar9 = 0;
    do {
      lVar15 = plVar22[1];
      if (*(char *)(lVar15 + lVar9) == '\x7f') {
        iVar13 = (int)lVar9;
        lVar10 = lVar9 * 0x18;
        pfVar11 = (float *)(lVar10 + *plVar22);
        while( true ) {
          fVar28 = pfVar11[3];
          fVar29 = pfVar11[2];
          fVar24 = pfVar11[1];
          local_44 = *pfVar11;
          if (local_44 == 0.0) {
            local_44 = 0.0;
          }
          uVar19 = 0xcbf29ce484222325;
          pfVar11 = &local_44;
          do {
            bVar18 = *(byte *)pfVar11;
            pfVar11 = (float *)((long)pfVar11 + 1);
            uVar19 = (uVar19 ^ bVar18) * 0x100000001b3;
          } while (pfVar11 != (float *)local_40);
          if (fVar24 == 0.0) {
            fVar24 = 0.0;
          }
          local_44 = fVar24;
          uVar25 = 0xcbf29ce484222325;
          pfVar11 = &local_44;
          do {
            bVar18 = *(byte *)pfVar11;
            pfVar11 = (float *)((long)pfVar11 + 1);
            uVar12 = bVar18 ^ uVar25;
            uVar25 = uVar12 * 0x100000001b3;
          } while (pfVar11 != (float *)local_40);
          uVar12 = uVar12 * 0x21dbf4aaa9ed2837;
          uVar19 = (uVar19 + (uVar12 ^ uVar12 >> 0x27) * -0x415dda0614cbaa93) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x1d) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          if (fVar29 == 0.0) {
            fVar29 = 0.0;
          }
          local_44 = fVar29;
          uVar25 = 0xcbf29ce484222325;
          pfVar11 = &local_44;
          do {
            bVar18 = *(byte *)pfVar11;
            pfVar11 = (float *)((long)pfVar11 + 1);
            uVar12 = bVar18 ^ uVar25;
            uVar25 = uVar12 * 0x100000001b3;
          } while (pfVar11 != (float *)local_40);
          uVar12 = uVar12 * 0x21dbf4aaa9ed2837;
          uVar19 = ((uVar19 ^ uVar19 >> 0x1d) + (uVar12 ^ uVar12 >> 0x27) * -0x415dda0614cbaa93) *
                   -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x1d) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          if (fVar28 == 0.0) {
            fVar28 = 0.0;
          }
          local_44 = fVar28;
          uVar25 = 0xcbf29ce484222325;
          pfVar11 = &local_44;
          do {
            bVar18 = *(byte *)pfVar11;
            pfVar11 = (float *)((long)pfVar11 + 1);
            uVar12 = bVar18 ^ uVar25;
            uVar25 = uVar12 * 0x100000001b3;
          } while (pfVar11 != (float *)local_40);
          uVar12 = uVar12 * 0x21dbf4aaa9ed2837;
          uVar19 = ((uVar19 ^ uVar19 >> 0x1d) + (uVar12 ^ uVar12 >> 0x27) * -0x415dda0614cbaa93) *
                   -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x1d) * -0x415dda0614cbaa93;
          uVar19 = (uVar19 ^ uVar19 >> 0x20) * -0x415dda0614cbaa93;
          uVar19 = uVar19 ^ uVar19 >> 0x1d;
          bVar18 = (byte)uVar19 | 0x80;
          uVar27 = (int)uVar21 - 1U & (uint)(uVar19 >> 7);
          auVar30 = *(undefined1 (*) [16])(lVar15 + (ulong)uVar27) & auVar7;
          uVar3 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
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
                  (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
          uVar14 = uVar27;
          while (uVar3 == 0xffff) {
            uVar14 = uVar14 + 0x10 & uVar20;
            auVar30 = *(undefined1 (*) [16])(lVar15 + (ulong)uVar14) & auVar7;
            uVar3 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
                    (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
          }
          iVar4 = 0;
          for (uVar8 = uVar3 ^ 0xffff; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            iVar4 = iVar4 + 1;
          }
          uVar14 = iVar4 + uVar14 & uVar20;
          if ((uVar20 & 0xfffffff0 & (uVar14 - uVar27 ^ iVar13 - uVar27)) == 0) {
            *(byte *)(lVar15 + lVar9) = bVar18;
            *(byte *)(plVar22[1] +
                     (ulong)((*(int *)((long)plVar22 + 0x14) - 1U & iVar13 - 0xfU) + 0xf)) = bVar18;
            uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
            goto LAB_00100c88;
          }
          pbVar26 = (byte *)(lVar15 + (ulong)uVar14);
          lVar15 = (ulong)uVar14 * 0x18;
          if (*pbVar26 == 0) break;
          *pbVar26 = bVar18;
          *(byte *)(plVar22[1] + (ulong)((uVar14 - 0xf & *(int *)((long)plVar22 + 0x14) - 1U) + 0xf)
                   ) = bVar18;
          puVar16 = (undefined8 *)(lVar15 + *plVar22);
          pfVar11 = (float *)(*plVar22 + lVar10);
          uVar2 = puVar16[1];
          uVar5 = *(undefined8 *)pfVar11;
          uVar6 = *(undefined8 *)(pfVar11 + 2);
          lVar15 = *(long *)(pfVar11 + 4);
          *(undefined8 *)pfVar11 = *puVar16;
          *(undefined8 *)(pfVar11 + 2) = uVar2;
          *puVar16 = uVar5;
          puVar16[1] = uVar6;
          pfVar11[4] = 0.0;
          pfVar11[5] = 0.0;
          if (puVar16[2] != 0) {
            *(undefined8 *)(pfVar11 + 4) = puVar16[2];
            puVar16[2] = 0;
          }
          if (lVar15 != 0) {
            puVar16[2] = lVar15;
          }
          uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
          lVar15 = plVar22[1];
        }
        *pbVar26 = bVar18;
        *(byte *)(plVar22[1] + (ulong)((uVar14 - 0xf & *(int *)((long)plVar22 + 0x14) - 1U) + 0xf))
             = bVar18;
        *(undefined1 *)(plVar22[1] + lVar9) = 0;
        *(undefined1 *)
         (plVar22[1] + (ulong)((iVar13 - 0xfU & *(int *)((long)plVar22 + 0x14) - 1U) + 0xf)) = 0;
        uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14);
        puVar17 = (undefined8 *)(lVar15 + *plVar22);
        puVar16 = (undefined8 *)(*plVar22 + lVar10);
        uVar5 = puVar16[1];
        uVar2 = puVar16[2];
        *puVar17 = *puVar16;
        puVar17[1] = uVar5;
        puVar17[2] = uVar2;
      }
LAB_00100c88:
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < (uint)uVar21);
  }
  *(int *)(plVar22 + 3) = (int)(uVar21 * 7 >> 3) - (int)plVar22[2];
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::DebugRenderer::Triangle::Triangle(JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Color) */

void __thiscall
JPH::DebugRenderer::Triangle::Triangle
          (undefined8 param_1,float param_2,undefined8 param_3,float param_4,undefined8 param_5,
          float param_6,Triangle *this,undefined4 param_8)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  float local_18;
  float fStack_14;
  
  fVar3 = (float)((ulong)param_1 >> 0x20);
  fVar4 = (float)param_3 - (float)param_1;
  fVar5 = (float)((ulong)param_3 >> 0x20) - fVar3;
  *(float *)(this + 8) = param_2;
  local_18 = (float)param_5;
  fStack_14 = (float)((ulong)param_5 >> 0x20);
  local_18 = local_18 - (float)param_1;
  fStack_14 = fStack_14 - fVar3;
  *(float *)(this + 0x2c) = param_4;
  *(undefined8 *)this = param_1;
  *(undefined4 *)(this + 0x68) = param_8;
  *(float *)(this + 0x50) = param_6;
  *(undefined8 *)(this + 0x24) = param_3;
  *(undefined4 *)(this + 0x44) = param_8;
  *(undefined4 *)(this + 0x20) = param_8;
  *(undefined8 *)(this + 0x48) = param_5;
  fVar3 = fStack_14 * fVar4 - fVar5 * local_18;
  fVar5 = (param_6 - param_2) * fVar5 - (param_4 - param_2) * fStack_14;
  fVar4 = local_18 * (param_4 - param_2) - fVar4 * (param_6 - param_2);
  auVar6._4_4_ = fVar4;
  auVar6._0_4_ = fVar5;
  auVar6._8_4_ = fVar3;
  auVar7._12_4_ = fVar3;
  auVar7._0_12_ = auVar6;
  fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5 + 0.0);
  if (0.0 < fVar3) {
    auVar1._4_4_ = fVar3;
    auVar1._0_4_ = fVar3;
    auVar1._8_4_ = fVar3;
    auVar1._12_4_ = fVar3;
    auVar7 = divps(auVar7,auVar1);
    auVar6 = auVar7._0_12_;
  }
  uVar2 = auVar6._0_8_;
  *(undefined8 *)(this + 0x54) = uVar2;
  *(int *)(this + 0x5c) = auVar6._8_4_;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x5c);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}



/* JPH::DebugRenderer::Triangle::Triangle(JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Color, JPH::Vec3,
   JPH::Vec3) */

void __thiscall
JPH::DebugRenderer::Triangle::Triangle
          (undefined8 param_1,float param_2,undefined8 param_3,float param_4,undefined8 param_5,
          float param_6,undefined8 param_7,float param_8,Triangle *this,undefined4 param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar9;
  float fVar10;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  float local_38;
  float fStack_34;
  float local_18;
  float fStack_14;
  
  fVar9 = (float)((ulong)param_5 >> 0x20);
  fVar3 = (float)((ulong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  local_38 = (float)param_3;
  fStack_34 = (float)((ulong)param_3 >> 0x20);
  *(float *)(this + 8) = param_2;
  fVar4 = (float)param_5 - fVar1;
  fVar8 = fVar9 - fVar3;
  *(float *)(this + 0x2c) = param_4;
  *(undefined8 *)this = param_1;
  *(float *)(this + 0x50) = param_6;
  *(undefined8 *)(this + 0x24) = param_3;
  *(undefined4 *)(this + 0x68) = param_10;
  *(undefined8 *)(this + 0x48) = param_5;
  *(undefined4 *)(this + 0x44) = param_10;
  *(undefined4 *)(this + 0x20) = param_10;
  fVar2 = fVar8 * (local_38 - fVar1) - (fStack_34 - fVar3) * fVar4;
  fVar8 = (param_6 - param_2) * (fStack_34 - fVar3) - (param_4 - param_2) * fVar8;
  fVar4 = fVar4 * (param_4 - param_2) - (local_38 - fVar1) * (param_6 - param_2);
  auVar6._4_4_ = fVar4;
  auVar6._0_4_ = fVar8;
  auVar6._8_4_ = fVar2;
  auVar6._12_4_ = fVar2;
  fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar8 * fVar8 + 0.0);
  auVar7._4_4_ = fVar2;
  auVar7._0_4_ = fVar2;
  auVar7._8_4_ = fVar2;
  auVar7._12_4_ = fVar2;
  auVar7 = divps(auVar6,auVar7);
  fVar2 = auVar7._8_4_;
  uVar5 = auVar7._0_8_;
  *(undefined8 *)(this + 0x54) = uVar5;
  *(float *)(this + 0x5c) = fVar2;
  *(undefined8 *)(this + 0x30) = uVar5;
  local_18 = (float)param_7;
  fStack_14 = (float)((ulong)param_7 >> 0x20);
  *(undefined8 *)(this + 0xc) = uVar5;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x5c);
  fVar8 = (float)param_5 - local_18;
  fVar9 = fVar9 - fStack_14;
  fVar4 = fStack000000000000000c * auVar7._0_4_ - auVar7._4_4_ * fStack0000000000000008;
  fVar10 = in_stack_00000010 * auVar7._4_4_ - fVar2 * fStack000000000000000c;
  fVar2 = fStack0000000000000008 * fVar2 - auVar7._0_4_ * in_stack_00000010;
  *(ulong *)(this + 0x18) =
       CONCAT44((fVar1 - local_18) * fVar10 + 0.0 + (fVar3 - fStack_14) * fVar2 +
                fVar4 * (param_2 - param_8),
                (fVar1 - local_18) * fStack0000000000000008 + 0.0 +
                (fVar3 - fStack_14) * fStack000000000000000c +
                in_stack_00000010 * (param_2 - param_8));
  *(ulong *)(this + 0x3c) =
       CONCAT44((local_38 - local_18) * fVar10 + 0.0 + (fStack_34 - fStack_14) * fVar2 +
                (param_4 - param_8) * fVar4,
                (local_38 - local_18) * fStack0000000000000008 + 0.0 +
                (fStack_34 - fStack_14) * fStack000000000000000c +
                in_stack_00000010 * (param_4 - param_8));
  *(ulong *)(this + 0x60) =
       CONCAT44(fVar10 * fVar8 + 0.0 + fVar2 * fVar9 + fVar4 * (param_6 - param_8),
                fStack0000000000000008 * fVar8 + 0.0 + fStack000000000000000c * fVar9 +
                in_stack_00000010 * (param_6 - param_8));
  return;
}



/* JPH::DebugRenderer::DebugRenderer() */

void __thiscall JPH::DebugRenderer::DebugRenderer(DebugRenderer *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined **)this = &DAT_0010ece0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x100) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x120) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x138) = 0;
  sInstance = this;
  return;
}



/* JPH::DebugRenderer::~DebugRenderer() */

void __thiscall JPH::DebugRenderer::~DebugRenderer(DebugRenderer *this)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined **)this = &DAT_0010ece0;
  sInstance = 0;
  lVar4 = *(long *)(this + 0x120);
  if ((*(int *)(this + 0x130) != 0) && (*(int *)(this + 0x134) != 0)) {
    lVar2 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0x128) + lVar2) ||
             (piVar1 = *(int **)(lVar4 + 0x10 + lVar2 * 0x18), piVar1 == (int *)0x0))) {
        lVar2 = lVar2 + 1;
        if (*(uint *)(this + 0x134) <= (uint)lVar2) goto LAB_00101570;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar3 = *(long **)(piVar1 + 6);
        if (plVar3 != (long *)0x0) {
          if ((*(long *)(piVar1 + 2) != 0) &&
             (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
            do {
              if ((long *)*plVar3 != (long *)0x0) {
                (**(code **)(*(long *)*plVar3 + 0x18))();
              }
              plVar3 = plVar3 + 2;
            } while (plVar3 < plVar5);
            plVar3 = *(long **)(piVar1 + 6);
          }
          piVar1[2] = 0;
          piVar1[3] = 0;
          (*Free)(plVar3);
        }
        (*Free)(piVar1);
      }
      lVar4 = *(long *)(this + 0x120);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0x134));
  }
LAB_00101570:
  if (lVar4 != 0) {
    (*Free)();
  }
  lVar4 = *(long *)(this + 0x100);
  if ((*(int *)(this + 0x110) != 0) && (*(int *)(this + 0x114) != 0)) {
    lVar2 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0x108) + lVar2) ||
             (piVar1 = *(int **)(lVar4 + 0x10 + lVar2 * 0x18), piVar1 == (int *)0x0))) {
        lVar2 = lVar2 + 1;
        if (*(uint *)(this + 0x114) <= (uint)lVar2) goto LAB_001015f0;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar3 = *(long **)(piVar1 + 6);
        if (plVar3 != (long *)0x0) {
          if ((*(long *)(piVar1 + 2) != 0) &&
             (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
            do {
              if ((long *)*plVar3 != (long *)0x0) {
                (**(code **)(*(long *)*plVar3 + 0x18))();
              }
              plVar3 = plVar3 + 2;
            } while (plVar3 < plVar5);
            plVar3 = *(long **)(piVar1 + 6);
          }
          piVar1[2] = 0;
          piVar1[3] = 0;
          (*Free)(plVar3);
        }
        (*Free)(piVar1);
      }
      lVar4 = *(long *)(this + 0x100);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0x114));
  }
LAB_001015f0:
  if (lVar4 != 0) {
    (*Free)();
  }
  lVar4 = *(long *)(this + 0xe0);
  if ((*(int *)(this + 0xf0) != 0) && (*(int *)(this + 0xf4) != 0)) {
    lVar2 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0xe8) + lVar2) ||
             (piVar1 = *(int **)(lVar4 + 8 + lVar2 * 0x10), piVar1 == (int *)0x0))) {
        lVar2 = lVar2 + 1;
        if (*(uint *)(this + 0xf4) <= (uint)lVar2) goto LAB_00101670;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar3 = *(long **)(piVar1 + 6);
        if (plVar3 != (long *)0x0) {
          if ((*(long *)(piVar1 + 2) != 0) &&
             (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
            do {
              if ((long *)*plVar3 != (long *)0x0) {
                (**(code **)(*(long *)*plVar3 + 0x18))();
              }
              plVar3 = plVar3 + 2;
            } while (plVar3 < plVar5);
            plVar3 = *(long **)(piVar1 + 6);
          }
          piVar1[2] = 0;
          piVar1[3] = 0;
          (*Free)(plVar3);
        }
        (*Free)(piVar1);
      }
      lVar4 = *(long *)(this + 0xe0);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0xf4));
  }
LAB_00101670:
  if (lVar4 != 0) {
    (*Free)();
  }
  lVar4 = *(long *)(this + 0xc0);
  if ((*(int *)(this + 0xd0) != 0) && (*(int *)(this + 0xd4) != 0)) {
    lVar2 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 200) + lVar2) ||
             (piVar1 = *(int **)(lVar4 + 8 + lVar2 * 0x10), piVar1 == (int *)0x0))) {
        lVar2 = lVar2 + 1;
        if (*(uint *)(this + 0xd4) <= (uint)lVar2) goto LAB_001016f0;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar3 = *(long **)(piVar1 + 6);
        if (plVar3 != (long *)0x0) {
          if ((*(long *)(piVar1 + 2) != 0) &&
             (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
            do {
              if ((long *)*plVar3 != (long *)0x0) {
                (**(code **)(*(long *)*plVar3 + 0x18))();
              }
              plVar3 = plVar3 + 2;
            } while (plVar3 < plVar5);
            plVar3 = *(long **)(piVar1 + 6);
          }
          piVar1[2] = 0;
          piVar1[3] = 0;
          (*Free)(plVar3);
        }
        (*Free)(piVar1);
      }
      lVar4 = *(long *)(this + 0xc0);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0xd4));
  }
LAB_001016f0:
  if (lVar4 != 0) {
    (*Free)();
  }
  lVar4 = *(long *)(this + 0xa0);
  if ((*(int *)(this + 0xb0) != 0) && (*(int *)(this + 0xb4) != 0)) {
    lVar2 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0xa8) + lVar2) ||
             (piVar1 = *(int **)(lVar4 + 0x10 + lVar2 * 0x18), piVar1 == (int *)0x0))) {
        lVar2 = lVar2 + 1;
        if (*(uint *)(this + 0xb4) <= (uint)lVar2) goto LAB_00101770;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar3 = *(long **)(piVar1 + 6);
        if (plVar3 != (long *)0x0) {
          if ((*(long *)(piVar1 + 2) != 0) &&
             (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
            do {
              if ((long *)*plVar3 != (long *)0x0) {
                (**(code **)(*(long *)*plVar3 + 0x18))();
              }
              plVar3 = plVar3 + 2;
            } while (plVar3 < plVar5);
            plVar3 = *(long **)(piVar1 + 6);
          }
          piVar1[2] = 0;
          piVar1[3] = 0;
          (*Free)(plVar3);
        }
        (*Free)(piVar1);
      }
      lVar4 = *(long *)(this + 0xa0);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0xb4));
  }
LAB_00101770:
  if (lVar4 != 0) {
    (*Free)();
  }
  lVar4 = *(long *)(this + 0x80);
  if ((*(int *)(this + 0x90) != 0) && (*(int *)(this + 0x94) != 0)) {
    lVar2 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0x88) + lVar2) ||
             (piVar1 = *(int **)(lVar4 + 0x10 + lVar2 * 0x18), piVar1 == (int *)0x0))) {
        lVar2 = lVar2 + 1;
        if (*(uint *)(this + 0x94) <= (uint)lVar2) goto LAB_001017f0;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar3 = *(long **)(piVar1 + 6);
        if (plVar3 != (long *)0x0) {
          if ((*(long *)(piVar1 + 2) != 0) &&
             (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
            do {
              if ((long *)*plVar3 != (long *)0x0) {
                (**(code **)(*(long *)*plVar3 + 0x18))();
              }
              plVar3 = plVar3 + 2;
            } while (plVar3 < plVar5);
            plVar3 = *(long **)(piVar1 + 6);
          }
          piVar1[2] = 0;
          piVar1[3] = 0;
          (*Free)(plVar3);
        }
        (*Free)(piVar1);
      }
      lVar4 = *(long *)(this + 0x80);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0x94));
  }
LAB_001017f0:
  if (lVar4 != 0) {
    (*Free)();
  }
  lVar4 = *(long *)(this + 0x60);
  if ((*(int *)(this + 0x70) != 0) && (*(int *)(this + 0x74) != 0)) {
    lVar2 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0x68) + lVar2) ||
             (piVar1 = *(int **)(lVar4 + 8 + lVar2 * 0x10), piVar1 == (int *)0x0))) {
        lVar2 = lVar2 + 1;
        if (*(uint *)(this + 0x74) <= (uint)lVar2) goto LAB_00101858;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar3 = *(long **)(piVar1 + 6);
        if (plVar3 != (long *)0x0) {
          if ((*(long *)(piVar1 + 2) != 0) &&
             (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
            do {
              if ((long *)*plVar3 != (long *)0x0) {
                (**(code **)(*(long *)*plVar3 + 0x18))();
              }
              plVar3 = plVar3 + 2;
            } while (plVar3 < plVar5);
            plVar3 = *(long **)(piVar1 + 6);
          }
          piVar1[2] = 0;
          piVar1[3] = 0;
          (*Free)(plVar3);
        }
        (*Free)(piVar1);
      }
      lVar4 = *(long *)(this + 0x60);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0x74));
  }
LAB_00101858:
  if (lVar4 != 0) {
    (*Free)();
  }
  lVar4 = *(long *)(this + 0x40);
  if ((*(int *)(this + 0x50) != 0) && (*(int *)(this + 0x54) != 0)) {
    lVar2 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0x48) + lVar2) ||
             (piVar1 = *(int **)(lVar4 + 8 + lVar2 * 0x10), piVar1 == (int *)0x0))) {
        lVar2 = lVar2 + 1;
        if (*(uint *)(this + 0x54) <= (uint)lVar2) goto LAB_001018c0;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar3 = *(long **)(piVar1 + 6);
        if (plVar3 != (long *)0x0) {
          if ((*(long *)(piVar1 + 2) != 0) &&
             (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
            do {
              if ((long *)*plVar3 != (long *)0x0) {
                (**(code **)(*(long *)*plVar3 + 0x18))();
              }
              plVar3 = plVar3 + 2;
            } while (plVar3 < plVar5);
            plVar3 = *(long **)(piVar1 + 6);
          }
          piVar1[2] = 0;
          piVar1[3] = 0;
          (*Free)(plVar3);
        }
        (*Free)(piVar1);
      }
      lVar4 = *(long *)(this + 0x40);
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(this + 0x54));
  }
LAB_001018c0:
  if (lVar4 != 0) {
    (*Free)();
  }
  piVar1 = *(int **)(this + 0x38);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      plVar3 = *(long **)(piVar1 + 6);
      if (plVar3 != (long *)0x0) {
        if ((*(long *)(piVar1 + 2) != 0) &&
           (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
          do {
            if ((long *)*plVar3 != (long *)0x0) {
              (**(code **)(*(long *)*plVar3 + 0x18))();
            }
            plVar3 = plVar3 + 2;
          } while (plVar3 < plVar5);
          plVar3 = *(long **)(piVar1 + 6);
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
        (*Free)(plVar3);
      }
      (*Free)(piVar1);
    }
  }
  piVar1 = *(int **)(this + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      plVar3 = *(long **)(piVar1 + 6);
      if (plVar3 != (long *)0x0) {
        if ((*(long *)(piVar1 + 2) != 0) &&
           (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
          do {
            if ((long *)*plVar3 != (long *)0x0) {
              (**(code **)(*(long *)*plVar3 + 0x18))();
            }
            plVar3 = plVar3 + 2;
          } while (plVar3 < plVar5);
          plVar3 = *(long **)(piVar1 + 6);
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
        (*Free)(plVar3);
      }
      (*Free)(piVar1);
    }
  }
  piVar1 = *(int **)(this + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      plVar3 = *(long **)(piVar1 + 6);
      if (plVar3 != (long *)0x0) {
        if ((*(long *)(piVar1 + 2) != 0) &&
           (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
          do {
            if ((long *)*plVar3 != (long *)0x0) {
              (**(code **)(*(long *)*plVar3 + 0x18))();
            }
            plVar3 = plVar3 + 2;
          } while (plVar3 < plVar5);
          plVar3 = *(long **)(piVar1 + 6);
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
        (*Free)(plVar3);
      }
      (*Free)(piVar1);
    }
  }
  piVar1 = *(int **)(this + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      plVar3 = *(long **)(piVar1 + 6);
      if (plVar3 != (long *)0x0) {
        if ((*(long *)(piVar1 + 2) != 0) &&
           (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
          do {
            if ((long *)*plVar3 != (long *)0x0) {
              (**(code **)(*(long *)*plVar3 + 0x18))();
            }
            plVar3 = plVar3 + 2;
          } while (plVar3 < plVar5);
          plVar3 = *(long **)(piVar1 + 6);
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
        (*Free)(plVar3);
      }
      (*Free)(piVar1);
    }
  }
  piVar1 = *(int **)(this + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      plVar3 = *(long **)(piVar1 + 6);
      if (plVar3 != (long *)0x0) {
        if ((*(long *)(piVar1 + 2) != 0) &&
           (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
          do {
            if ((long *)*plVar3 != (long *)0x0) {
              (**(code **)(*(long *)*plVar3 + 0x18))();
            }
            plVar3 = plVar3 + 2;
          } while (plVar3 < plVar5);
          plVar3 = *(long **)(piVar1 + 6);
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
        (*Free)(plVar3);
      }
      (*Free)(piVar1);
    }
  }
  piVar1 = *(int **)(this + 0x10);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      plVar3 = *(long **)(piVar1 + 6);
      if (plVar3 != (long *)0x0) {
        if ((*(long *)(piVar1 + 2) != 0) &&
           (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
          do {
            if ((long *)*plVar3 != (long *)0x0) {
              (**(code **)(*(long *)*plVar3 + 0x18))();
            }
            plVar3 = plVar3 + 2;
          } while (plVar3 < plVar5);
          plVar3 = *(long **)(piVar1 + 6);
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
        (*Free)(plVar3);
      }
      (*Free)(piVar1);
    }
  }
  piVar1 = *(int **)(this + 8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      plVar3 = *(long **)(piVar1 + 6);
      if (plVar3 != (long *)0x0) {
        if ((*(long *)(piVar1 + 2) != 0) &&
           (plVar5 = plVar3 + *(long *)(piVar1 + 2) * 2, plVar3 < plVar5)) {
          do {
            if ((long *)*plVar3 != (long *)0x0) {
              (**(code **)(*(long *)*plVar3 + 0x18))();
            }
            plVar3 = plVar3 + 2;
          } while (plVar3 < plVar5);
          plVar3 = *(long **)(piVar1 + 6);
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
        (*Free)(plVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00101e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(piVar1);
      return;
    }
  }
  return;
}



/* JPH::DebugRenderer::~DebugRenderer() */

void __thiscall JPH::DebugRenderer::~DebugRenderer(DebugRenderer *this)

{
  ~DebugRenderer(this);
                    /* WARNING: Could not recover jumptable at 0x00101f11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::DebugRenderer::DrawWireBox(JPH::AABox const&, JPH::Color) */

void __thiscall
JPH::DebugRenderer::DrawWireBox(DebugRenderer *this,undefined8 *param_1,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  undefined8 local_88;
  undefined8 local_68;
  
  uVar5 = *param_1;
  uVar4 = *param_1;
  uVar2 = *(undefined4 *)(param_1 + 1);
  uVar3 = *(undefined4 *)(param_1 + 3);
  uVar13 = CONCAT44(uVar2,uVar2);
  uVar12 = CONCAT44(uVar3,uVar3);
  uVar14 = CONCAT44(*(undefined4 *)((long)param_1 + 0x14),*(undefined4 *)param_1);
  puVar1 = param_1 + 2;
  uVar11 = *puVar1;
  uVar10 = *puVar1;
  uVar9 = *puVar1;
  uVar8 = *puVar1;
  local_88 = CONCAT44(*(undefined4 *)((long)param_1 + 0x14),*(undefined4 *)param_1);
  uVar15 = CONCAT44(*(undefined4 *)((long)param_1 + 4),*(undefined4 *)puVar1);
  local_68 = CONCAT44(*(undefined4 *)((long)param_1 + 4),*(undefined4 *)puVar1);
  (**(code **)(*(long *)this + 0x10))(uVar4,uVar13,uVar5,uVar12,this,param_3);
  uVar6 = CONCAT44(uVar2,uVar2);
  (**(code **)(*(long *)this + 0x10))(uVar4,uVar13,local_88,uVar6,this,param_3);
  uVar7 = CONCAT44(uVar2,uVar2);
  (**(code **)(*(long *)this + 0x10))(uVar4,uVar13,local_68,uVar7,this,param_3);
  (**(code **)(*(long *)this + 0x10))(uVar5,uVar12,uVar14,uVar12,this,param_3);
  (**(code **)(*(long *)this + 0x10))(uVar5,uVar12,uVar15,uVar12,this,param_3);
  (**(code **)(*(long *)this + 0x10))(local_88,uVar6,uVar14,uVar12,this,param_3);
  uVar5 = CONCAT44(uVar2,uVar2);
  (**(code **)(*(long *)this + 0x10))(local_88,uVar6,uVar8,uVar5,this,param_3);
  uVar4 = CONCAT44(uVar3,uVar3);
  (**(code **)(*(long *)this + 0x10))(uVar14,uVar12,uVar9,uVar4,this,param_3);
  (**(code **)(*(long *)this + 0x10))(local_68,uVar7,uVar15,uVar12,this,param_3);
  (**(code **)(*(long *)this + 0x10))(local_68,uVar7,uVar8,uVar5,this,param_3);
  (**(code **)(*(long *)this + 0x10))(uVar15,uVar12,uVar10,uVar4,this,param_3);
                    /* WARNING: Could not recover jumptable at 0x001021ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))(uVar8,uVar5,uVar11,uVar4,this,param_3);
  return;
}



/* JPH::DebugRenderer::DrawWireBox(JPH::OrientedBox const&, JPH::Color) */

void __thiscall
JPH::DebugRenderer::DrawWireBox(DebugRenderer *this,float *param_1,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
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
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  
  fVar24 = param_1[0x10];
  fVar19 = param_1[0x11];
  fVar31 = param_1[0x12];
  fVar12 = fVar24 * *param_1;
  fVar13 = fVar24 * param_1[1];
  fVar14 = fVar24 * param_1[2];
  fVar15 = fVar24 * param_1[3];
  fVar24 = (float)((uint)fVar24 ^ _LC56);
  fVar25 = fVar24 * *param_1;
  fVar26 = fVar24 * param_1[1];
  fVar27 = fVar24 * param_1[2];
  fVar24 = fVar24 * param_1[3];
  fVar20 = (float)((uint)fVar19 ^ _LC56);
  fVar21 = fVar20 * param_1[4];
  fVar22 = fVar20 * param_1[5];
  fVar23 = fVar20 * param_1[6];
  fVar20 = fVar20 * param_1[7];
  fVar32 = (float)((uint)fVar31 ^ _LC56);
  fVar28 = fVar31 * param_1[8];
  fVar29 = fVar31 * param_1[9];
  fVar30 = fVar31 * param_1[10];
  fVar31 = fVar31 * param_1[0xb];
  fVar1 = param_1[0xc];
  fVar2 = param_1[0xd];
  fVar3 = param_1[0xe];
  fVar4 = param_1[0xf];
  fVar16 = fVar19 * param_1[4];
  fVar17 = fVar19 * param_1[5];
  fVar18 = fVar19 * param_1[6];
  fVar19 = fVar19 * param_1[7];
  fVar33 = fVar32 * param_1[8];
  fVar34 = fVar32 * param_1[9];
  fVar35 = fVar32 * param_1[10];
  fVar32 = fVar32 * param_1[0xb];
  fVar36 = fVar25 + fVar21;
  fVar37 = fVar26 + fVar22;
  fVar38 = fVar27 + fVar23;
  fVar39 = fVar24 + fVar20;
  fVar21 = fVar21 + fVar12;
  fVar22 = fVar22 + fVar13;
  fVar23 = fVar23 + fVar14;
  fVar20 = fVar20 + fVar15;
  fVar25 = fVar25 + fVar16;
  fVar26 = fVar26 + fVar17;
  fVar27 = fVar27 + fVar18;
  fVar24 = fVar24 + fVar19;
  fVar12 = fVar12 + fVar16;
  fVar13 = fVar13 + fVar17;
  fVar14 = fVar14 + fVar18;
  fVar15 = fVar15 + fVar19;
  local_98 = CONCAT44(fVar37 + fVar29 + fVar2,fVar36 + fVar28 + fVar1);
  local_a8 = CONCAT44(fVar37 + fVar34 + fVar2,fVar36 + fVar33 + fVar1);
  local_78 = CONCAT44(fVar26 + fVar29 + fVar2,fVar25 + fVar28 + fVar1);
  local_88 = CONCAT44(fVar26 + fVar34 + fVar2,fVar25 + fVar33 + fVar1);
  fVar19 = fVar12 + fVar28 + fVar1;
  fVar16 = fVar13 + fVar29 + fVar2;
  local_58 = CONCAT44(fVar22 + fVar29 + fVar2,fVar21 + fVar28 + fVar1);
  local_68 = CONCAT44(fVar22 + fVar34 + fVar2,fVar21 + fVar33 + fVar1);
  uVar6 = CONCAT44(fVar39 + fVar31 + fVar4,fVar38 + fVar30 + fVar3);
  uVar5 = CONCAT44(fVar39 + fVar32 + fVar4,fVar38 + fVar35 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_a8,uVar5,local_98,uVar6,this,param_3);
  uVar7 = CONCAT44(fVar24 + fVar32 + fVar4,fVar27 + fVar35 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_a8,uVar5,local_88,uVar7,this,param_3);
  uVar9 = CONCAT44(fVar20 + fVar32 + fVar4,fVar23 + fVar35 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_a8,uVar5,local_68,uVar9,this,param_3);
  uVar8 = CONCAT44(fVar24 + fVar31 + fVar4,fVar27 + fVar30 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_98,uVar6,local_78,uVar8,this,param_3);
  uVar10 = CONCAT44(fVar20 + fVar31 + fVar4,fVar23 + fVar30 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_98,uVar6,local_58,uVar10,this,param_3);
  (**(code **)(*(long *)this + 0x10))(local_88,uVar7,local_78,uVar8,this,param_3);
  uVar11 = CONCAT44(fVar32 + fVar15 + fVar4,fVar35 + fVar14 + fVar3);
  uVar6 = CONCAT44(fVar34 + fVar13 + fVar2,fVar33 + fVar12 + fVar1);
  (**(code **)(*(long *)this + 0x10))(local_88,uVar7,uVar6,uVar11,this,param_3);
  uVar5 = CONCAT44(fVar15 + fVar31 + fVar4,fVar14 + fVar30 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_78,uVar8,CONCAT44(fVar16,fVar19),uVar5,this,param_3);
  (**(code **)(*(long *)this + 0x10))(local_68,uVar9,local_58,uVar10,this,param_3);
  (**(code **)(*(long *)this + 0x10))(local_68,uVar9,uVar6,uVar11,this,param_3);
  (**(code **)(*(long *)this + 0x10))(local_58,uVar10,CONCAT44(fVar16,fVar19),uVar5,this,param_3);
                    /* WARNING: Could not recover jumptable at 0x0010250e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))(uVar6,uVar11,CONCAT44(fVar16,fVar19),uVar5,this,param_3);
  return;
}



/* JPH::DebugRenderer::DrawWireBox(JPH::Mat44 const&, JPH::AABox const&, JPH::Color) */

void __thiscall
JPH::DebugRenderer::DrawWireBox
          (DebugRenderer *this,float *param_1,float *param_2,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  
  fVar16 = *param_2;
  fVar20 = param_2[1];
  fVar12 = fVar16 * *param_1;
  fVar13 = fVar16 * param_1[1];
  fVar14 = fVar16 * param_1[2];
  fVar16 = fVar16 * param_1[3];
  fVar1 = param_1[0xc];
  fVar2 = param_1[0xd];
  fVar3 = param_1[0xe];
  fVar4 = param_1[0xf];
  fVar17 = fVar20 * param_1[4];
  fVar18 = fVar20 * param_1[5];
  fVar19 = fVar20 * param_1[6];
  fVar20 = fVar20 * param_1[7];
  fVar24 = param_2[2];
  fVar21 = fVar24 * param_1[8];
  fVar22 = fVar24 * param_1[9];
  fVar23 = fVar24 * param_1[10];
  fVar24 = fVar24 * param_1[0xb];
  fVar29 = fVar12 + fVar17;
  fVar31 = fVar13 + fVar18;
  fVar33 = fVar14 + fVar19;
  fVar35 = fVar16 + fVar20;
  local_a8 = CONCAT44(fVar31 + fVar22 + fVar2,fVar29 + fVar21 + fVar1);
  fVar28 = param_2[6];
  fVar25 = fVar28 * param_1[8];
  fVar26 = fVar28 * param_1[9];
  fVar27 = fVar28 * param_1[10];
  fVar28 = fVar28 * param_1[0xb];
  local_98 = CONCAT44(fVar31 + fVar26 + fVar2,fVar29 + fVar25 + fVar1);
  fVar29 = param_2[5];
  fVar30 = fVar29 * param_1[4];
  fVar32 = fVar29 * param_1[5];
  fVar34 = fVar29 * param_1[6];
  fVar29 = fVar29 * param_1[7];
  fVar12 = fVar12 + fVar30;
  fVar13 = fVar13 + fVar32;
  fVar14 = fVar14 + fVar34;
  fVar16 = fVar16 + fVar29;
  local_78 = CONCAT44(fVar13 + fVar26 + fVar2,fVar12 + fVar25 + fVar1);
  fVar31 = param_2[4];
  local_88 = CONCAT44(fVar13 + fVar22 + fVar2,fVar12 + fVar21 + fVar1);
  fVar12 = fVar31 * *param_1;
  fVar13 = fVar31 * param_1[1];
  fVar15 = fVar31 * param_1[2];
  fVar31 = fVar31 * param_1[3];
  fVar17 = fVar17 + fVar12;
  fVar18 = fVar18 + fVar13;
  fVar19 = fVar19 + fVar15;
  fVar20 = fVar20 + fVar31;
  fVar12 = fVar12 + fVar30;
  fVar13 = fVar13 + fVar32;
  fVar15 = fVar15 + fVar34;
  fVar31 = fVar31 + fVar29;
  fVar29 = fVar12 + fVar25 + fVar1;
  fVar30 = fVar13 + fVar26 + fVar2;
  local_58 = CONCAT44(fVar18 + fVar26 + fVar2,fVar17 + fVar25 + fVar1);
  local_68 = CONCAT44(fVar18 + fVar22 + fVar2,fVar17 + fVar21 + fVar1);
  uVar6 = CONCAT44(fVar35 + fVar28 + fVar4,fVar33 + fVar27 + fVar3);
  uVar5 = CONCAT44(fVar35 + fVar24 + fVar4,fVar33 + fVar23 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_a8,uVar5,local_98,uVar6,this,param_4);
  uVar7 = CONCAT44(fVar16 + fVar24 + fVar4,fVar14 + fVar23 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_a8,uVar5,local_88,uVar7,this,param_4);
  uVar9 = CONCAT44(fVar20 + fVar24 + fVar4,fVar19 + fVar23 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_a8,uVar5,local_68,uVar9,this,param_4);
  uVar8 = CONCAT44(fVar16 + fVar28 + fVar4,fVar14 + fVar27 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_98,uVar6,local_78,uVar8,this,param_4);
  uVar10 = CONCAT44(fVar20 + fVar28 + fVar4,fVar19 + fVar27 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_98,uVar6,local_58,uVar10,this,param_4);
  (**(code **)(*(long *)this + 0x10))(local_88,uVar7,local_78,uVar8,this,param_4);
  uVar11 = CONCAT44(fVar24 + fVar31 + fVar4,fVar23 + fVar15 + fVar3);
  uVar6 = CONCAT44(fVar22 + fVar13 + fVar2,fVar21 + fVar12 + fVar1);
  (**(code **)(*(long *)this + 0x10))(local_88,uVar7,uVar6,uVar11,this,param_4);
  uVar5 = CONCAT44(fVar31 + fVar28 + fVar4,fVar15 + fVar27 + fVar3);
  (**(code **)(*(long *)this + 0x10))(local_78,uVar8,CONCAT44(fVar30,fVar29),uVar5,this,param_4);
  (**(code **)(*(long *)this + 0x10))(local_68,uVar9,local_58,uVar10,this,param_4);
  (**(code **)(*(long *)this + 0x10))(local_68,uVar9,uVar6,uVar11,this,param_4);
  (**(code **)(*(long *)this + 0x10))(local_58,uVar10,CONCAT44(fVar30,fVar29),uVar5,this,param_4);
                    /* WARNING: Could not recover jumptable at 0x00102814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))(uVar6,uVar11,CONCAT44(fVar30,fVar29),uVar5,this,param_4);
  return;
}



/* JPH::DebugRenderer::DrawMarker(JPH::Vec3, JPH::Color, float) */

void JPH::DebugRenderer::DrawMarker
               (undefined8 param_1,undefined8 param_2,float param_3,long *param_4,undefined4 param_5
               )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  
  local_68._0_4_ = (float)param_1;
  local_68._4_4_ = (float)((ulong)param_1 >> 0x20);
  uStack_60._0_4_ = (float)param_2;
  uStack_60._4_4_ = (float)((ulong)param_2 >> 0x20);
  (**(code **)(*param_4 + 0x10))
            (CONCAT44(local_68._4_4_ - param_3,(float)local_68 - 0.0),
             CONCAT44(uStack_60._4_4_ - 0.0,(float)uStack_60 - 0.0),
             CONCAT44(local_68._4_4_ + param_3,(float)local_68 + 0.0),
             CONCAT44(uStack_60._4_4_ + 0.0,(float)uStack_60 + 0.0));
  (**(code **)(*param_4 + 0x10))
            (CONCAT44(local_68._4_4_ - 0.0,(float)local_68 - param_3),
             CONCAT44(uStack_60._4_4_ - 0.0,(float)uStack_60 - 0.0),
             CONCAT44(local_68._4_4_ + 0.0,(float)local_68 + param_3),
             CONCAT44(uStack_60._4_4_ + 0.0,(float)uStack_60 + 0.0),param_4,param_5);
  fVar1 = (float)local_68 + 0.0;
  fVar2 = local_68._4_4_ + 0.0;
  fVar3 = (float)uStack_60 + param_3;
  fVar4 = uStack_60._4_4_ + param_3;
  local_68 = CONCAT44(local_68._4_4_ - 0.0,(float)local_68 - 0.0);
  uStack_60 = CONCAT44(uStack_60._4_4_ - param_3,(float)uStack_60 - param_3);
                    /* WARNING: Could not recover jumptable at 0x00102917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x10))
            (local_68,uStack_60,CONCAT44(fVar2,fVar1),CONCAT44(fVar4,fVar3),param_4,param_5);
  return;
}



/* JPH::DebugRenderer::DrawArrow(JPH::Vec3, JPH::Vec3, JPH::Color, float) */

void JPH::DebugRenderer::DrawArrow
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               float param_5,long *param_6,undefined4 param_7)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_68 = (float)param_3;
  uStack_64 = (float)((ulong)param_3 >> 0x20);
  uStack_60 = (float)param_4;
  uStack_5c = (float)((ulong)param_4 >> 0x20);
  (**(code **)(*param_6 + 0x10))();
  if (param_5 <= 0.0) {
    return;
  }
  local_58._0_4_ = (float)param_1;
  local_58._4_4_ = (float)((ulong)param_1 >> 0x20);
  uStack_50._0_4_ = (float)param_2;
  uStack_50._4_4_ = (float)((ulong)param_2 >> 0x20);
  local_58._0_4_ = local_68 - (float)local_58;
  local_58._4_4_ = uStack_64 - local_58._4_4_;
  uStack_50._0_4_ = uStack_60 - (float)uStack_50;
  fVar1 = SQRT((float)uStack_50 * (float)uStack_50 +
               local_58._4_4_ * local_58._4_4_ + (float)local_58 * (float)local_58 + 0.0);
  if (fVar1 == 0.0) {
    fVar6 = 0.0;
    fVar1 = 0.0;
    fVar5 = 0.0;
    fVar9 = 0.0;
    fVar4 = param_5;
  }
  else {
    fVar1 = param_5 / fVar1;
    fVar4 = fVar1 * (float)local_58;
    fVar5 = fVar1 * local_58._4_4_;
    fVar6 = fVar1 * (float)uStack_50;
    fVar1 = fVar1 * (uStack_5c - uStack_50._4_4_);
    fVar9 = fVar6 * fVar6;
    if ((float)((uint)fVar4 & _LC80) <= (float)(_LC80 & (uint)fVar5)) {
      auVar8._0_4_ = SQRT(fVar5 * fVar5 + fVar9);
      auVar3._8_4_ = (uint)fVar5 ^ _LC56;
      auVar3._4_4_ = (uint)fVar5 ^ _LC56;
      auVar3._0_4_ = fVar6;
      auVar3._12_4_ = 0;
      auVar8._4_4_ = auVar8._0_4_;
      auVar8._8_4_ = auVar8._0_4_;
      auVar8._12_4_ = auVar8._0_4_;
      auVar3 = divps(auVar3 << 0x20,auVar8);
      goto LAB_00102a02;
    }
  }
  auVar2._12_4_ = (uint)fVar4 ^ _LC56;
  auVar2._8_4_ = (uint)fVar4 ^ _LC56;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = fVar6;
  fVar9 = SQRT(fVar4 * fVar4 + fVar9);
  auVar7._4_4_ = fVar9;
  auVar7._0_4_ = fVar9;
  auVar7._8_4_ = fVar9;
  auVar7._12_4_ = fVar9;
  auVar3 = divps(auVar2,auVar7);
LAB_00102a02:
  fVar9 = param_5 * auVar3._0_4_;
  fVar10 = param_5 * auVar3._4_4_;
  fVar11 = param_5 * auVar3._8_4_;
  param_5 = param_5 * auVar3._12_4_;
  local_58 = CONCAT44((uStack_64 - fVar5) + fVar10,(local_68 - fVar4) + fVar9);
  uStack_50 = CONCAT44((uStack_5c - fVar1) + param_5,(uStack_60 - fVar6) + fVar11);
  (**(code **)(*param_6 + 0x10))(local_58,uStack_50,param_3,param_6,param_7);
  local_58 = CONCAT44((uStack_64 - fVar5) - fVar10,(local_68 - fVar4) - fVar9);
  uStack_50 = CONCAT44((uStack_5c - fVar1) - param_5,(uStack_60 - fVar6) - fVar11);
                    /* WARNING: Could not recover jumptable at 0x00102a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_6 + 0x10))(local_58,uStack_50,param_3,param_4,param_6,param_7);
  return;
}



/* JPH::DebugRenderer::DrawCoordinateSystem(JPH::Mat44 const&, float) */

void __thiscall
JPH::DebugRenderer::DrawCoordinateSystem(DebugRenderer *this,Mat44 *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = _LC4 * param_2;
  DrawArrow(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
            CONCAT44(param_2 * *(float *)(param_1 + 4) + *(float *)(param_1 + 0x14) * 0.0 +
                     *(float *)(param_1 + 0x24) * 0.0 + *(float *)(param_1 + 0x34),
                     param_2 * *(float *)param_1 + *(float *)(param_1 + 0x10) * 0.0 +
                     *(float *)(param_1 + 0x20) * 0.0 + *(float *)(param_1 + 0x30)),
            CONCAT44(param_2 * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x1c) * 0.0 +
                     *(float *)(param_1 + 0x2c) * 0.0 + *(float *)(param_1 + 0x3c),
                     param_2 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x18) * 0.0 +
                     *(float *)(param_1 + 0x28) * 0.0 + *(float *)(param_1 + 0x38)),this,
            (undefined4)Color::sRed);
  DrawArrow(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
            CONCAT44(*(float *)(param_1 + 4) * 0.0 + *(float *)(param_1 + 0x14) * param_2 +
                     *(float *)(param_1 + 0x24) * 0.0 + *(float *)(param_1 + 0x34),
                     *(float *)param_1 * 0.0 + *(float *)(param_1 + 0x10) * param_2 +
                     *(float *)(param_1 + 0x20) * 0.0 + *(float *)(param_1 + 0x30)),
            CONCAT44(*(float *)(param_1 + 0xc) * 0.0 + *(float *)(param_1 + 0x1c) * param_2 +
                     *(float *)(param_1 + 0x2c) * 0.0 + *(float *)(param_1 + 0x3c),
                     *(float *)(param_1 + 8) * 0.0 + *(float *)(param_1 + 0x18) * param_2 +
                     *(float *)(param_1 + 0x28) * 0.0 + *(float *)(param_1 + 0x38)),fVar1,this,
            (undefined4)Color::sGreen);
  DrawArrow(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
            CONCAT44(param_2 * *(float *)(param_1 + 0x24) +
                     *(float *)(param_1 + 4) * 0.0 + *(float *)(param_1 + 0x14) * 0.0 +
                     *(float *)(param_1 + 0x34),
                     param_2 * *(float *)(param_1 + 0x20) +
                     *(float *)param_1 * 0.0 + *(float *)(param_1 + 0x10) * 0.0 +
                     *(float *)(param_1 + 0x30)),
            CONCAT44(param_2 * *(float *)(param_1 + 0x2c) +
                     *(float *)(param_1 + 0xc) * 0.0 + *(float *)(param_1 + 0x1c) * 0.0 +
                     *(float *)(param_1 + 0x3c),
                     param_2 * *(float *)(param_1 + 0x28) +
                     *(float *)(param_1 + 8) * 0.0 + *(float *)(param_1 + 0x18) * 0.0 +
                     *(float *)(param_1 + 0x38)),fVar1,this,(undefined4)Color::sBlue);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::DrawPlane(JPH::Vec3, JPH::Vec3, JPH::Color, float) */

void JPH::DebugRenderer::DrawPlane
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               float param_5,long *param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar15;
  float fVar17;
  undefined1 auVar11 [12];
  float fVar14;
  float fVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  
  local_c8._0_4_ = (float)param_3;
  fVar4 = (float)local_c8;
  local_c8._4_4_ = (float)((ulong)param_3 >> 0x20);
  fVar5 = local_c8._4_4_;
  uStack_c0._0_4_ = (float)param_4;
  fVar6 = (float)uStack_c0;
  uStack_c0._4_4_ = (float)((ulong)param_4 >> 0x20);
  fVar7 = uStack_c0._4_4_;
  auVar8._4_8_ = 0;
  auVar8._0_4_ = _LC6;
  local_b8 = (float)param_1;
  uStack_b4 = (float)((ulong)param_1 >> 0x20);
  uStack_b0 = (float)param_2;
  uStack_ac = (float)((ulong)param_2 >> 0x20);
  fVar10 = (float)local_c8 * _LC6 - __LC7 * local_c8._4_4_;
  fVar14 = local_c8._4_4_ * 0.0 - _UNK_0010ed84 * (float)uStack_c0;
  fVar16 = (float)uStack_c0 * 0.0 - _UNK_0010ed88 * (float)local_c8;
  fVar19 = fVar10 * fVar10 + fVar16 * fVar16 + fVar14 * fVar14 + 0.0;
  if (_LC8 < fVar19) {
    auVar20._0_4_ = SQRT(fVar19);
    auVar13._4_4_ = fVar16;
    auVar13._0_4_ = fVar14;
    auVar13._8_4_ = fVar10;
    auVar13._12_4_ = fVar10;
    auVar20._4_4_ = auVar20._0_4_;
    auVar20._8_4_ = auVar20._0_4_;
    auVar20._12_4_ = auVar20._0_4_;
    auVar13 = divps(auVar13,auVar20);
    auVar8 = auVar13._0_12_;
    auVar11._0_8_ = auVar13._4_8_;
    auVar11._8_4_ = auVar13._0_4_;
  }
  else {
    auVar11 = SUB1612(__LC5,0);
  }
  fVar10 = auVar8._0_4_ * local_c8._4_4_ - auVar11._0_4_ * (float)local_c8;
  fVar14 = auVar8._4_4_ * (float)uStack_c0 - auVar11._4_4_ * local_c8._4_4_;
  fVar16 = auVar8._8_4_ * (float)local_c8 - auVar11._8_4_ * (float)uStack_c0;
  auVar12._4_4_ = fVar16;
  auVar12._0_4_ = fVar14;
  auVar12._8_4_ = fVar10;
  auVar12._12_4_ = fVar10;
  auVar9._0_4_ = SQRT(fVar10 * fVar10 + fVar16 * fVar16 + fVar14 * fVar14 + 0.0);
  auVar9._4_4_ = auVar9._0_4_;
  auVar9._8_4_ = auVar9._0_4_;
  auVar9._12_4_ = auVar9._0_4_;
  auVar13 = divps(auVar12,auVar9);
  fVar19 = auVar13._0_4_;
  fVar15 = auVar13._4_4_;
  fVar17 = auVar13._8_4_;
  fVar18 = auVar13._12_4_;
  fVar10 = fVar15 * (float)local_c8 - local_c8._4_4_ * fVar19;
  fVar14 = fVar17 * local_c8._4_4_ - (float)uStack_c0 * fVar15;
  fVar16 = fVar19 * (float)uStack_c0 - (float)local_c8 * fVar17;
  local_c8 = CONCAT44((fVar16 + fVar15) * param_5 + uStack_b4,(fVar14 + fVar19) * param_5 + local_b8
                     );
  uStack_c0 = CONCAT44((fVar10 + fVar18) * param_5 + uStack_ac,
                       (fVar10 + fVar17) * param_5 + uStack_b0);
  local_a8 = CONCAT44((fVar16 - fVar15) * param_5 + uStack_b4,(fVar14 - fVar19) * param_5 + local_b8
                     );
  local_88 = CONCAT44(((0.0 - fVar16) + fVar15) * param_5 + uStack_b4,
                      ((0.0 - fVar14) + fVar19) * param_5 + local_b8);
  local_98 = CONCAT44(((0.0 - fVar16) - fVar15) * param_5 + uStack_b4,
                      ((0.0 - fVar14) - fVar19) * param_5 + local_b8);
  uVar2 = CONCAT44(((0.0 - fVar10) - fVar18) * param_5 + uStack_ac,
                   ((0.0 - fVar10) - fVar17) * param_5 + uStack_b0);
  (**(code **)(*param_6 + 0x10))(local_c8,uStack_c0,local_98,uVar2,param_6,param_7);
  uVar3 = CONCAT44(((0.0 - fVar10) + fVar18) * param_5 + uStack_ac,
                   ((0.0 - fVar10) + fVar17) * param_5 + uStack_b0);
  uVar1 = CONCAT44((fVar10 - fVar18) * param_5 + uStack_ac,(fVar10 - fVar17) * param_5 + uStack_b0);
  (**(code **)(*param_6 + 0x10))(local_a8,uVar1,local_88,uVar3,param_6,param_7);
  (**(code **)(*param_6 + 0x10))(local_c8,uStack_c0,local_a8,uVar1,param_6,param_7);
  (**(code **)(*param_6 + 0x10))(local_a8,uVar1,local_98,uVar2,param_6,param_7);
  (**(code **)(*param_6 + 0x10))(local_98,uVar2,local_88,uVar3,param_6,param_7);
  (**(code **)(*param_6 + 0x10))(local_88,uVar3,local_c8,uStack_c0,param_6,param_7);
  local_c8 = CONCAT44(fVar5 * param_5 + uStack_b4,fVar4 * param_5 + local_b8);
  uStack_c0 = CONCAT44(fVar7 * param_5 + uStack_ac,fVar6 * param_5 + uStack_b0);
  DrawArrow(param_1,param_2,local_c8,uStack_c0,param_5 * _LC4,param_6,param_7);
  return;
}



/* JPH::DebugRenderer::DrawWireTriangle(JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Color) */

void JPH::DebugRenderer::DrawWireTriangle
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long *param_7,undefined4 param_8)

{
  (**(code **)(*param_7 + 0x10))();
  (**(code **)(*param_7 + 0x10))(param_3,param_4,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00102fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_7 + 0x10))(param_5,param_6,param_1,param_2,param_7,param_8);
  return;
}



/* JPH::DebugRenderer::DrawWireUnitSphereRecursive(JPH::Mat44 const&, JPH::Color, JPH::Vec3,
   JPH::Vec3, JPH::Vec3, int) */

void JPH::DebugRenderer::DrawWireUnitSphereRecursive
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long *param_1,float *param_8,undefined4 param_9
               ,int param_10)

{
  float fVar1;
  float fVar2;
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
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uStack_60 = param_2;
  while( true ) {
    local_a8._4_4_ = (float)((ulong)param_1_00 >> 0x20);
    local_98._0_4_ = (float)param_3;
    local_88._4_4_ = (float)((ulong)param_5 >> 0x20);
    local_a8._0_4_ = (float)param_1_00;
    uStack_a0._0_4_ = (float)uStack_60;
    local_98._4_4_ = (float)((ulong)param_3 >> 0x20);
    uStack_90._0_4_ = (float)param_4;
    local_88._0_4_ = (float)param_5;
    uStack_80._0_4_ = (float)param_6;
    if (param_10 == 0) break;
    uStack_a0._4_4_ = (float)((ulong)uStack_60 >> 0x20);
    uStack_90._4_4_ = (float)((ulong)param_4 >> 0x20);
    auVar19._0_4_ = (float)local_a8 + (float)local_98;
    auVar19._4_4_ = local_a8._4_4_ + local_98._4_4_;
    auVar19._8_4_ = (float)uStack_a0 + (float)uStack_90;
    auVar19._12_4_ = uStack_a0._4_4_ + uStack_90._4_4_;
    param_10 = param_10 + -1;
    auVar20._0_4_ =
         SQRT(auVar19._8_4_ * auVar19._8_4_ +
              auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_ + 0.0);
    auVar20._4_4_ = auVar20._0_4_;
    auVar20._8_4_ = auVar20._0_4_;
    auVar20._12_4_ = auVar20._0_4_;
    auVar20 = divps(auVar19,auVar20);
    uStack_80._4_4_ = (float)((ulong)param_6 >> 0x20);
    auVar21._0_4_ = (float)local_98 + (float)local_88;
    auVar21._4_4_ = local_98._4_4_ + local_88._4_4_;
    auVar21._8_4_ = (float)uStack_90 + (float)uStack_80;
    auVar21._12_4_ = uStack_90._4_4_ + uStack_80._4_4_;
    uStack_50 = auVar20._8_8_;
    auVar22._0_4_ =
         SQRT(auVar21._8_4_ * auVar21._8_4_ +
              auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_ + 0.0);
    auVar22._4_4_ = auVar22._0_4_;
    auVar22._8_4_ = auVar22._0_4_;
    auVar22._12_4_ = auVar22._0_4_;
    auVar22 = divps(auVar21,auVar22);
    auVar23._0_4_ = (float)local_a8 + (float)local_88;
    auVar23._4_4_ = local_a8._4_4_ + local_88._4_4_;
    auVar23._8_4_ = (float)uStack_a0 + (float)uStack_80;
    auVar23._12_4_ = uStack_a0._4_4_ + uStack_80._4_4_;
    auVar24._0_4_ =
         SQRT(auVar23._8_4_ * auVar23._8_4_ +
              auVar23._4_4_ * auVar23._4_4_ + auVar23._0_4_ * auVar23._0_4_ + 0.0);
    auVar24._4_4_ = auVar24._0_4_;
    auVar24._8_4_ = auVar24._0_4_;
    auVar24._12_4_ = auVar24._0_4_;
    auVar24 = divps(auVar23,auVar24);
    local_68 = auVar24._0_8_;
    uStack_60 = auVar24._8_8_;
    local_58 = auVar20._0_8_;
    DrawWireUnitSphereRecursive(param_1_00,param_1,param_8,param_9,param_10);
    uStack_70 = auVar22._8_8_;
    local_78 = auVar22._0_8_;
    DrawWireUnitSphereRecursive
              (local_58,uStack_50,local_78,uStack_70,local_68,uStack_60,param_1,param_8,param_9,
               param_10);
    DrawWireUnitSphereRecursive
              (local_58,uStack_50,param_3,param_4,local_78,uStack_70,param_1,param_8,param_9,
               param_10);
    param_1_00 = local_68;
    param_3 = local_78;
    param_4 = uStack_70;
  }
  fVar1 = *param_8;
  fVar2 = param_8[1];
  fVar14 = param_8[2];
  fVar16 = param_8[3];
  fVar3 = param_8[4];
  fVar4 = param_8[5];
  fVar17 = param_8[6];
  fVar18 = param_8[7];
  fVar5 = param_8[8];
  fVar6 = param_8[9];
  fVar7 = param_8[10];
  fVar8 = param_8[0xb];
  fVar9 = param_8[0xc];
  fVar10 = param_8[0xd];
  fVar11 = param_8[0xe];
  fVar12 = param_8[0xf];
  fVar13 = (float)local_a8 * fVar14;
  fVar15 = (float)local_a8 * fVar16;
  fVar25 = local_a8._4_4_ * fVar17;
  fVar27 = local_a8._4_4_ * fVar18;
  fVar26 = local_98._4_4_ * fVar17;
  fVar28 = local_98._4_4_ * fVar18;
  local_a8 = CONCAT44((float)local_a8 * fVar2 + local_a8._4_4_ * fVar4 + (float)uStack_a0 * fVar6 +
                      fVar10,(float)local_a8 * fVar1 + local_a8._4_4_ * fVar3 +
                             (float)uStack_a0 * fVar5 + fVar9);
  uStack_a0 = CONCAT44(fVar15 + fVar27 + (float)uStack_a0 * fVar8 + fVar12,
                       fVar13 + fVar25 + (float)uStack_a0 * fVar7 + fVar11);
  fVar13 = (float)local_98 * fVar14;
  fVar15 = (float)local_98 * fVar16;
  local_98 = CONCAT44((float)local_98 * fVar2 + local_98._4_4_ * fVar4 + (float)uStack_90 * fVar6 +
                      fVar10,(float)local_98 * fVar1 + local_98._4_4_ * fVar3 +
                             (float)uStack_90 * fVar5 + fVar9);
  uStack_90 = CONCAT44(fVar15 + fVar28 + (float)uStack_90 * fVar8 + fVar12,
                       fVar13 + fVar26 + (float)uStack_90 * fVar7 + fVar11);
  fVar14 = (float)local_88 * fVar14;
  fVar16 = (float)local_88 * fVar16;
  fVar17 = local_88._4_4_ * fVar17;
  fVar18 = local_88._4_4_ * fVar18;
  local_88 = CONCAT44((float)local_88 * fVar2 + local_88._4_4_ * fVar4 + (float)uStack_80 * fVar6 +
                      fVar10,(float)local_88 * fVar1 + local_88._4_4_ * fVar3 +
                             (float)uStack_80 * fVar5 + fVar9);
  uStack_80 = CONCAT44(fVar16 + fVar18 + (float)uStack_80 * fVar8 + fVar12,
                       fVar14 + fVar17 + (float)uStack_80 * fVar7 + fVar11);
  (**(code **)(*param_1 + 0x10))(local_a8,uStack_a0,local_98,uStack_90,param_1,param_9);
  (**(code **)(*param_1 + 0x10))(local_98,uStack_90,local_88,uStack_80,param_1,param_9);
                    /* WARNING: Could not recover jumptable at 0x0010314b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(local_88,uStack_80,local_a8,uStack_a0,param_1,param_9);
  return;
}



/* JPH::DebugRenderer::DrawWireUnitSphere(JPH::Mat44 const&, JPH::Color, int) */

void __thiscall
JPH::DebugRenderer::DrawWireUnitSphere
          (DebugRenderer *this,undefined8 param_1,undefined4 param_3,undefined4 param_4)

{
  DrawWireUnitSphereRecursive(0x3f800000,0,0x3f80000000000000,0,0,0x3f8000003f800000);
  DrawWireUnitSphereRecursive
            (0xbf800000,0,0x3f80000000000000,0,0,0x3f8000003f800000,this,param_1,param_3,param_4);
  DrawWireUnitSphereRecursive
            (0x3f800000,0,0xbf80000000000000,0,0,0x3f8000003f800000,this,param_1,param_3,param_4);
  DrawWireUnitSphereRecursive
            (0xbf800000,0,0xbf80000000000000,0,0,0x3f8000003f800000,this,param_1,param_3,param_4);
  DrawWireUnitSphereRecursive
            (0x3f800000,0,0x3f80000000000000,0,0,0xbf800000bf800000,this,param_1,param_3,param_4);
  DrawWireUnitSphereRecursive
            (0xbf800000,0,0x3f80000000000000,0,0,0xbf800000bf800000,this,param_1,param_3,param_4);
  DrawWireUnitSphereRecursive
            (0x3f800000,0,0xbf80000000000000,0,0,0xbf800000bf800000,this,param_1,param_3,param_4);
  DrawWireUnitSphereRecursive
            (0xbf800000,0,0xbf80000000000000,0,0,0xbf800000bf800000,this,param_1,param_3,param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::DrawWireSphere(JPH::Vec3, float, JPH::Color, int) */

void JPH::DebugRenderer::DrawWireSphere
               (undefined8 param_1,float param_2,uint param_3,DebugRenderer *param_4,
               undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  long in_FS_OFFSET;
  float local_98 [16];
  undefined1 local_58 [4];
  float afStack_54 [3];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _local_58 = ZEXT416(param_3);
  local_38 = ZEXT416(param_3) << 0x40;
  local_48 = ZEXT416(param_3) << 0x20;
  lVar5 = 0;
  local_28 = __LC9;
  uStack_20 = _UNK_0010ed98;
  do {
    fVar1 = *(float *)(local_58 + lVar5);
    fVar2 = *(float *)(local_58 + lVar5 + 4);
    fVar3 = *(float *)(local_58 + lVar5 + 8);
    fVar4 = *(float *)(local_58 + lVar5 + 0xc);
    *(float *)((long)local_98 + lVar5) =
         fVar4 * (float)param_1 + fVar1 * _LC6 + fVar2 * __LC7 + fVar3 * __LC10;
    *(float *)((long)local_98 + lVar5 + 4) =
         fVar4 * (float)((ulong)param_1 >> 0x20) +
         fVar1 * 0.0 + fVar2 * _UNK_0010ed84 + fVar3 * _UNK_0010eda4;
    *(float *)((long)local_98 + lVar5 + 8) =
         fVar4 * param_2 + fVar1 * 0.0 + fVar2 * _UNK_0010ed88 + fVar3 * _UNK_0010eda8;
    *(float *)((long)local_98 + lVar5 + 0xc) =
         fVar4 * 1.0 + fVar1 * 0.0 + fVar2 * _UNK_0010ed8c + fVar3 * _UNK_0010edac;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x40);
  DrawWireUnitSphere(param_4,local_98,param_5,param_6);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DebugRenderer::Create8thSphereRecursive(JPH::Array<unsigned int, JPH::STLAllocator<unsigned
   int> >&, JPH::Array<JPH::DebugRenderer::Vertex, JPH::STLAllocator<JPH::DebugRenderer::Vertex> >&,
   JPH::Vec3, unsigned int&, JPH::Vec3, unsigned int&, JPH::Vec3, unsigned int&, JPH::Float2 const&,
   std::function<JPH::Vec3 (JPH::Vec3)>, int) */

void JPH::DebugRenderer::Create8thSphereRecursive
               (undefined8 param_1_00,undefined8 param_2_00,int *param_3,undefined8 param_4,
               int *param_5,undefined8 param_6,int *param_1,ulong *param_2,ulong *param_9,
               int *param_10,int *param_11,int *param_12,undefined8 *param_13,int *param_14,
               int param_15)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 extraout_RDX;
  ulong uVar13;
  ulong *puVar14;
  int *piVar15;
  undefined8 unaff_R12;
  long in_FS_OFFSET;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 auStack_1c0 [16];
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  long lStack_198;
  ulong *puStack_188;
  ulong *puStack_180;
  undefined8 *puStack_178;
  int *piStack_170;
  int *piStack_168;
  undefined8 *puStack_160;
  undefined8 local_158;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  int *local_f0;
  int *local_e8;
  uint local_dc;
  int *local_d8;
  undefined8 *local_d0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  int *local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_158._0_4_ = (float)param_1_00;
  local_158._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  fStack_150 = (float)param_2_00;
  fStack_14c = (float)((ulong)param_2_00 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_148 = param_3;
  uStack_140 = param_4;
  local_138 = param_5;
  uStack_130 = param_6;
  local_f0 = param_1;
  local_e8 = param_12;
  if (param_15 != 0) {
    local_148._0_4_ = SUB84(param_3,0);
    local_148._4_4_ = (float)((ulong)param_3 >> 0x20);
    uStack_140._0_4_ = (float)param_4;
    uStack_140._4_4_ = (float)((ulong)param_4 >> 0x20);
    auVar21._0_4_ = (float)local_148 + (float)local_158;
    auVar21._4_4_ = local_148._4_4_ + local_158._4_4_;
    auVar21._8_4_ = (float)uStack_140 + fStack_150;
    auVar21._12_4_ = uStack_140._4_4_ + fStack_14c;
    local_dc = param_15 - 1;
    local_c0 = 0xffffffff;
    local_bc = 0xffffffff;
    local_b8 = CONCAT44(local_b8._4_4_,0xffffffff);
    local_58 = (code *)0x0;
    uStack_50 = 0;
    auVar17._0_4_ =
         SQRT(auVar21._8_4_ * auVar21._8_4_ +
              auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_ + 0.0);
    auVar17._4_4_ = auVar17._0_4_;
    auVar17._8_4_ = auVar17._0_4_;
    auVar17._12_4_ = auVar17._0_4_;
    local_128 = divps(auVar21,auVar17);
    local_138._0_4_ = SUB84(param_5,0);
    local_138._4_4_ = (float)((ulong)param_5 >> 0x20);
    uStack_130._0_4_ = (float)param_6;
    uStack_130._4_4_ = (float)((ulong)param_6 >> 0x20);
    auVar22._0_4_ = (float)local_148 + (float)local_138;
    auVar22._4_4_ = local_148._4_4_ + local_138._4_4_;
    auVar22._8_4_ = (float)uStack_140 + (float)uStack_130;
    auVar22._12_4_ = uStack_140._4_4_ + uStack_130._4_4_;
    auVar18._0_4_ =
         SQRT(auVar22._8_4_ * auVar22._8_4_ +
              auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_ + 0.0);
    auVar18._4_4_ = auVar18._0_4_;
    auVar18._8_4_ = auVar18._0_4_;
    auVar18._12_4_ = auVar18._0_4_;
    local_118 = divps(auVar22,auVar18);
    auVar23._0_4_ = (float)local_138 + (float)local_158;
    auVar23._4_4_ = local_138._4_4_ + local_158._4_4_;
    auVar23._8_4_ = (float)uStack_130 + fStack_150;
    auVar23._12_4_ = uStack_130._4_4_ + fStack_14c;
    auVar19._0_4_ =
         SQRT(auVar23._8_4_ * auVar23._8_4_ +
              auVar23._4_4_ * auVar23._4_4_ + auVar23._0_4_ * auVar23._0_4_ + 0.0);
    auVar19._4_4_ = auVar19._0_4_;
    auVar19._8_4_ = auVar19._0_4_;
    auVar19._12_4_ = auVar19._0_4_;
    local_108 = divps(auVar23,auVar19);
    local_68 = (undefined1  [16])0x0;
    if (*(code **)(param_14 + 4) != (code *)0x0) {
      puStack_160 = (undefined8 *)0x10398d;
      local_d8 = param_10;
      (**(code **)(param_14 + 4))(local_68,param_14,2);
      local_58 = *(code **)(param_14 + 4);
      uStack_50 = *(undefined8 *)(param_14 + 6);
      param_10 = local_d8;
    }
    local_d0 = &local_b8;
    local_d8 = &local_c0;
    piStack_168 = (int *)(ulong)local_dc;
    puStack_178 = param_13;
    puStack_180 = (ulong *)0x103a09;
    piStack_170 = (int *)local_68;
    Create8thSphereRecursive
              (CONCAT44(local_158._4_4_,(float)local_158),CONCAT44(fStack_14c,fStack_150),
               local_128._0_8_,local_128._8_8_,local_108._0_8_,local_108._8_8_,local_f0,param_2,
               param_9,param_10);
    if (local_58 != (code *)0x0) {
      puStack_160 = (undefined8 *)0x103a27;
      (*local_58)(local_68,local_68,3);
    }
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(code **)(param_14 + 4) != (code *)0x0) {
      puStack_160 = (undefined8 *)0x103a61;
      (**(code **)(param_14 + 4))(local_68,param_14,2);
      local_58 = *(code **)(param_14 + 4);
      uStack_50 = *(undefined8 *)(param_14 + 6);
    }
    local_158 = &local_bc;
    piStack_168 = (int *)(ulong)local_dc;
    puStack_178 = param_13;
    puStack_180 = (ulong *)0x103ad3;
    piStack_170 = (int *)local_68;
    Create8thSphereRecursive
              (local_128._0_8_,local_128._8_8_,local_118._0_8_,local_118._8_8_,local_108._0_8_,
               local_108._8_8_,local_f0,param_2,param_9,local_d8,local_158,local_d0);
    if (local_58 != (code *)0x0) {
      puStack_160 = (undefined8 *)0x103af1;
      (*local_58)(local_68,local_68,3);
    }
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(code **)(param_14 + 4) != (code *)0x0) {
      puStack_160 = (undefined8 *)0x103b2b;
      (**(code **)(param_14 + 4))(local_68,param_14,2);
      local_58 = *(code **)(param_14 + 4);
      uStack_50 = *(undefined8 *)(param_14 + 6);
    }
    piStack_168 = (int *)(ulong)local_dc;
    puStack_178 = param_13;
    puStack_180 = (ulong *)0x103b90;
    piStack_170 = (int *)local_68;
    Create8thSphereRecursive
              (local_128._0_8_,local_128._8_8_,local_148,uStack_140,local_118._0_8_,local_118._8_8_,
               local_f0,param_2,param_9,local_d8,param_11,local_158);
    if (local_58 != (code *)0x0) {
      puStack_160 = (undefined8 *)0x103bae;
      (*local_58)(local_68,local_68,3);
    }
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(code **)(param_14 + 4) != (code *)0x0) {
      puStack_160 = (undefined8 *)0x103be8;
      (**(code **)(param_14 + 4))(local_68,param_14,2);
      local_58 = *(code **)(param_14 + 4);
      uStack_50 = *(undefined8 *)(param_14 + 6);
    }
    piStack_168 = (int *)(ulong)local_dc;
    puStack_178 = param_13;
    puStack_180 = (ulong *)0x103c52;
    piStack_170 = (int *)local_68;
    Create8thSphereRecursive
              (local_108._0_8_,local_108._8_8_,local_118._0_8_,local_118._8_8_,local_138,uStack_130,
               local_f0,param_2,param_9,local_d0,local_158,local_e8);
    if (local_58 != (code *)0x0) {
      puStack_160 = (undefined8 *)0x103c74;
      (*local_58)(local_68,local_68,3);
    }
    goto LAB_0010380b;
  }
  puVar14 = param_2;
  piVar15 = param_11;
  if (*param_10 == -1) {
    lVar3 = *(long *)(param_14 + 4);
    *param_10 = (int)*param_9;
    local_88 = param_1_00;
    uStack_80 = param_2_00;
    if (lVar3 == 0) goto LAB_00104048;
    local_108._0_8_ = param_10;
    local_118._8_8_ = param_4;
    local_118._0_8_ = param_3;
    local_128._8_8_ = param_6;
    local_128._0_8_ = param_5;
    puStack_160 = (undefined8 *)0x103cc0;
    param_1 = param_14;
    auVar24 = (**(code **)(param_14 + 6))(param_14,&local_88,0);
    puVar14 = (ulong *)*param_9;
    auVar25._4_4_ = local_158._4_4_;
    auVar25._0_4_ = (float)local_158;
    auVar25._8_4_ = fStack_150;
    uStack_a0 = *param_13;
    uVar12 = (long)puVar14 + 1;
    uStack_b0 = CONCAT44((float)local_158,auVar24._8_4_);
    unaff_R12 = auVar25._4_8_;
    local_98 = (undefined4)Color::sWhite;
    uVar9 = param_9[1];
    if (uVar9 < uVar12) {
      local_f0 = (int *)local_108._0_8_;
      param_1 = (int *)param_9[2];
      local_108._8_8_ = uStack_b0;
      local_108._0_8_ = auVar24._0_8_;
      if (uVar12 <= uVar9 * 2) {
        uVar12 = uVar9 * 2;
      }
      local_158._0_4_ = (float)uVar12;
      local_158._4_4_ = (float)(uVar12 >> 0x20);
      puStack_160 = (undefined8 *)0x103f60;
      uVar9 = (*Reallocate)(param_1,uVar9 * 0x24,uVar12 * 0x24);
      piVar15 = (int *)CONCAT44(local_158._4_4_,(float)local_158);
      puVar14 = (ulong *)*param_9;
      param_9[2] = uVar9;
      param_9[1] = (ulong)piVar15;
      uVar12 = (long)puVar14 + 1;
      param_10 = local_f0;
      param_3 = (int *)local_118._0_8_;
      param_4 = local_118._8_8_;
      param_5 = (int *)local_128._0_8_;
      param_6 = local_128._8_8_;
      local_b8 = local_108._0_8_;
      uStack_b0 = local_108._8_8_;
    }
    else {
      uVar9 = param_9[2];
      param_10 = (int *)local_108._0_8_;
      param_3 = (int *)local_118._0_8_;
      param_4 = local_118._8_8_;
      param_5 = (int *)local_128._0_8_;
      param_6 = local_128._8_8_;
      local_b8 = auVar24._0_8_;
    }
    *param_9 = uVar12;
    puVar1 = (undefined8 *)(uVar9 + (long)puVar14 * 0x24);
    *puVar1 = local_b8;
    puVar1[1] = uStack_b0;
    puVar1[2] = unaff_R12;
    puVar1[3] = uStack_a0;
    *(undefined4 *)(puVar1 + 4) = local_98;
    local_a8 = unaff_R12;
    if (*param_11 != -1) goto LAB_0010371e;
LAB_00103d66:
    local_118._0_8_ = param_10;
    lVar3 = *(long *)(param_14 + 4);
    local_128._8_8_ = param_4;
    local_128._0_8_ = param_3;
    *param_11 = (int)*param_9;
    local_158._0_4_ = SUB84(param_5,0);
    local_158._4_4_ = (float)((ulong)param_5 >> 0x20);
    fStack_150 = (float)param_6;
    fStack_14c = (float)((ulong)param_6 >> 0x20);
    local_78 = local_148;
    uStack_70 = uStack_140;
    if (lVar3 == 0) goto LAB_00104048;
    puStack_160 = (undefined8 *)0x103da3;
    param_1 = param_14;
    auVar25 = (**(code **)(param_14 + 6))(param_14,&local_78);
    puVar14 = (ulong *)*param_9;
    param_5 = (int *)CONCAT44(local_158._4_4_,(float)local_158);
    uStack_a0 = *param_13;
    uVar12 = (long)puVar14 + 1;
    uVar16 = CONCAT44(local_128._0_4_,auVar25._8_4_);
    unaff_R12 = local_128._4_8_;
    local_98 = (undefined4)Color::sWhite;
    uVar9 = param_9[1];
    if (uVar9 < uVar12) {
      param_1 = (int *)param_9[2];
      local_128._8_8_ = uVar16;
      local_128._0_8_ = auVar25._0_8_;
      if (uVar12 <= uVar9 * 2) {
        uVar12 = uVar9 * 2;
      }
      local_158._0_4_ = (float)uVar12;
      local_158._4_4_ = (float)(uVar12 >> 0x20);
      puStack_160 = (undefined8 *)0x10401b;
      local_148 = param_5;
      uStack_140 = CONCAT44(fStack_14c,fStack_150);
      uVar9 = (*Reallocate)(param_1,uVar9 * 0x24,uVar12 * 0x24);
      piVar15 = (int *)CONCAT44(local_158._4_4_,(float)local_158);
      puVar14 = (ulong *)*param_9;
      param_9[2] = uVar9;
      param_9[1] = (ulong)piVar15;
      uVar12 = (long)puVar14 + 1;
      param_5 = local_148;
      param_6 = uStack_140;
      local_b8 = local_128._0_8_;
      uStack_b0 = local_128._8_8_;
    }
    else {
      uVar9 = param_9[2];
      param_6 = CONCAT44(fStack_14c,fStack_150);
      local_b8 = auVar25._0_8_;
      uStack_b0 = uVar16;
    }
    *param_9 = uVar12;
    puVar1 = (undefined8 *)(uVar9 + (long)puVar14 * 0x24);
    *puVar1 = local_b8;
    puVar1[1] = uStack_b0;
    puVar1[2] = unaff_R12;
    puVar1[3] = uStack_a0;
    *(undefined4 *)(puVar1 + 4) = local_98;
    iVar2 = *local_e8;
    piVar11 = (int *)local_118._0_8_;
    local_a8 = unaff_R12;
    piVar7 = local_148;
    param_10 = local_e8;
  }
  else {
    if (*param_11 == -1) goto LAB_00103d66;
LAB_0010371e:
    iVar2 = *local_e8;
    piVar11 = param_10;
    piVar7 = local_148;
    param_10 = local_e8;
  }
  local_148 = piVar11;
  piVar11 = local_148;
  local_e8 = param_10;
  if (iVar2 == -1) {
    lVar3 = *(long *)(param_14 + 4);
    local_158._0_4_ = SUB84(param_5,0);
    local_158._4_4_ = (float)((ulong)param_5 >> 0x20);
    fStack_150 = (float)param_6;
    fStack_14c = (float)((ulong)param_6 >> 0x20);
    local_68._8_8_ = uStack_130;
    local_68._0_8_ = local_138;
    *param_10 = (int)*param_9;
    if (lVar3 == 0) {
LAB_00104048:
      puStack_160 = (undefined8 *)0x10404d;
      uVar16 = std::__throw_bad_function_call();
      puStack_160 = param_13;
      piStack_170 = param_14;
      lStack_198 = *(long *)(in_FS_OFFSET + 0x28);
      auStack_1c0 = (undefined1  [16])0x0;
      uStack_1cc = 0xffffffff;
      uStack_1c8 = 0xffffffff;
      uStack_1c4 = 0xffffffff;
      pcStack_1b0 = (code *)0x0;
      uStack_1a8 = 0;
      puStack_188 = param_2;
      puStack_180 = param_9;
      puStack_178 = (undefined8 *)unaff_R12;
      piStack_168 = param_11;
      if (*(code **)(piVar15 + 4) != (code *)0x0) {
        (**(code **)(piVar15 + 4))(auStack_1c0,piVar15,2);
        pcStack_1b0 = *(code **)(piVar15 + 4);
        uStack_1a8 = *(undefined8 *)(piVar15 + 6);
        param_12 = (int *)((ulong)param_12 & 0xffffffff);
      }
      Create8thSphereRecursive
                (uVar16,extraout_XMM1_Qa,param_1,puVar14,extraout_RDX,&uStack_1cc,&uStack_1c8,
                 &uStack_1c4,param_10,auStack_1c0,param_12);
      if (pcStack_1b0 != (code *)0x0) {
        (*pcStack_1b0)(auStack_1c0,auStack_1c0,3);
      }
      if (lStack_198 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puStack_160 = (undefined8 *)0x103e88;
    auVar25 = (**(code **)(param_14 + 6))(param_14,local_68);
    fVar6 = fStack_150;
    fVar5 = local_158._4_4_;
    fVar4 = (float)local_158;
    uVar16 = auVar25._0_8_;
    uVar9 = *param_9;
    uStack_a0 = *param_13;
    uVar12 = uVar9 + 1;
    uVar20 = CONCAT44((float)local_158,auVar25._8_4_);
    local_98 = (undefined4)Color::sWhite;
    uVar10 = param_9[1];
    if (uVar10 < uVar12) {
      local_158._0_4_ = auVar25._0_4_;
      local_158._4_4_ = auVar25._4_4_;
      fStack_14c = fVar4;
      if (uVar12 <= uVar10 * 2) {
        uVar12 = uVar10 * 2;
      }
      puStack_160 = (undefined8 *)0x103fc1;
      fStack_150 = auVar25._8_4_;
      uVar10 = (*Reallocate)(param_9[2],uVar10 * 0x24,uVar12 * 0x24);
      uVar9 = *param_9;
      param_9[1] = uVar12;
      uVar16 = CONCAT44(local_158._4_4_,(float)local_158);
      uVar20 = CONCAT44(fStack_14c,fStack_150);
      param_9[2] = uVar10;
      uVar12 = uVar9 + 1;
    }
    else {
      uVar10 = param_9[2];
    }
    *param_9 = uVar12;
    puVar1 = (undefined8 *)(uVar10 + uVar9 * 0x24);
    local_a8 = CONCAT44(fVar5,(undefined4)local_a8);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,fVar6);
    *puVar1 = uVar16;
    puVar1[1] = uVar20;
    puVar1[2] = local_a8;
    puVar1[3] = uStack_a0;
    *(undefined4 *)(puVar1 + 4) = local_98;
    piVar11 = local_148;
    piVar7 = local_148;
    local_b8 = uVar16;
    uStack_b0 = uVar20;
  }
  local_148 = piVar7;
  uVar12 = *param_2;
  uVar10 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = uVar12 + 1;
  uVar13 = uVar10;
  if (uVar10 < uVar9) {
    local_158._0_4_ = SUB84(piVar11,0);
    local_158._4_4_ = (float)((ulong)piVar11 >> 0x20);
    uVar13 = uVar10 * 2;
    if (uVar10 * 2 < uVar9) {
      uVar13 = uVar9;
    }
    puStack_160 = (undefined8 *)0x103761;
    uVar8 = (*Reallocate)(uVar8,uVar10 << 2,uVar13 * 4);
    uVar12 = *param_2;
    param_2[1] = uVar13;
    piVar11 = (int *)CONCAT44(local_158._4_4_,(float)local_158);
    param_2[2] = uVar8;
    uVar9 = uVar12 + 1;
  }
  iVar2 = *piVar11;
  *param_2 = uVar9;
  *(int *)(uVar8 + uVar12 * 4) = iVar2;
  uVar12 = uVar12 + 2;
  uVar10 = uVar13;
  if (uVar13 < uVar12) {
    uVar10 = uVar13 * 2;
    if (uVar13 * 2 < uVar12) {
      uVar10 = uVar12;
    }
    puStack_160 = (undefined8 *)0x1037a8;
    uVar8 = (*Reallocate)(uVar8,uVar13 << 2,uVar10 * 4);
    param_2[1] = uVar10;
    param_2[2] = uVar8;
    uVar9 = *param_2;
    uVar12 = uVar9 + 1;
  }
  iVar2 = *param_11;
  *param_2 = uVar12;
  *(int *)(uVar8 + uVar9 * 4) = iVar2;
  uVar9 = uVar9 + 2;
  if (uVar10 < uVar9) {
    uVar13 = uVar10 * 2;
    if (uVar10 * 2 < uVar9) {
      uVar13 = uVar9;
    }
    puStack_160 = (undefined8 *)0x1037ec;
    uVar8 = (*Reallocate)(uVar8,uVar10 << 2,uVar13 * 4);
    uVar12 = *param_2;
    param_2[1] = uVar13;
    param_2[2] = uVar8;
    uVar9 = uVar12 + 1;
  }
  *param_2 = uVar9;
  *(int *)(uVar8 + uVar12 * 4) = *local_e8;
LAB_0010380b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    puStack_160 = (undefined8 *)0x104048;
    __stack_chk_fail();
  }
  return;
}



/* JPH::DebugRenderer::Create8thSphere(JPH::Array<unsigned int, JPH::STLAllocator<unsigned int> >&,
   JPH::Array<JPH::DebugRenderer::Vertex, JPH::STLAllocator<JPH::DebugRenderer::Vertex> >&,
   JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Float2 const&, std::function<JPH::Vec3 (JPH::Vec3)>, int)
    */

void JPH::DebugRenderer::Create8thSphere
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,ulong param_6)

{
  long in_FS_OFFSET;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_74 = 0xffffffff;
  local_70 = 0xffffffff;
  local_6c = 0xffffffff;
  local_58 = (code *)0x0;
  uStack_50 = 0;
  if (*(code **)(param_5 + 0x10) != (code *)0x0) {
    (**(code **)(param_5 + 0x10))(local_68,param_5,2);
    local_58 = *(code **)(param_5 + 0x10);
    uStack_50 = *(undefined8 *)(param_5 + 0x18);
    param_6 = param_6 & 0xffffffff;
  }
  Create8thSphereRecursive
            (param_1,param_2,param_3,&local_74,&local_70,&local_6c,param_4,local_68,param_6);
  if (local_58 != (code *)0x0) {
    (*local_58)(local_68,local_68,3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::CreateCylinder(float, float, float, float, int) */

undefined8
JPH::DebugRenderer::CreateCylinder
          (float param_1,float param_2,float param_3,float param_4,int param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  byte in_DL;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *in_RSI;
  undefined4 in_register_0000003c;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  float fVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar38;
  undefined8 local_148;
  uint local_ac;
  long local_a8;
  ulong local_a0;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  uVar11 = 0;
  uVar14 = 0;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  local_ac = 0;
  iVar7 = 1 << (in_DL & 0x1f);
  local_a0 = 0;
  lVar10 = 0;
  uVar16 = 0;
  do {
    uVar8 = (undefined4)Color::sWhite;
    uVar23 = _LC13;
    if ((local_ac & 1) == 0) {
      uVar23 = _LC51._4_4_;
    }
    uVar17 = uVar16 + 1;
    uVar20 = uVar11;
    if (uVar11 < uVar17) {
      uVar20 = uVar11 * 2;
      if (uVar11 * 2 < uVar17) {
        uVar20 = uVar17;
      }
      lVar10 = (*Reallocate)(lVar10,uVar11 * 0x24,uVar20 * 0x24);
    }
    uVar9 = (undefined4)Color::sWhite;
    uVar17 = uVar16 + 2;
    lVar18 = uVar16 * 0x24;
    plVar1 = (long *)(lVar10 + uVar16 * 0x24);
    *plVar1 = (ulong)(uint)param_1 << 0x20;
    plVar1[1] = 0;
    *(undefined4 *)(lVar10 + 0x20 + lVar18) = uVar8;
    puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar18);
    *puVar2 = 0x3f800000;
    puVar2[1] = CONCAT44(uVar23,0x3e800000);
    uVar11 = uVar20;
    if (uVar20 < uVar17) {
      uVar11 = uVar20 * 2;
      if (uVar20 * 2 < uVar17) {
        uVar11 = uVar17;
      }
      lVar10 = (*Reallocate)(lVar10,uVar20 * 0x24,uVar11 * 0x24);
    }
    *(undefined4 *)(lVar10 + 0x44 + lVar18) = uVar9;
    plVar1 = (long *)(lVar10 + 0x24 + lVar18);
    *plVar1 = (ulong)(uint)param_2 << 0x20;
    plVar1[1] = 0;
    puVar2 = (undefined8 *)(lVar10 + 0x34 + lVar18);
    *puVar2 = 0xbf800000;
    puVar2[1] = CONCAT44(uVar23,0x3e800000);
    if (-1 < iVar7) {
      iVar19 = 0;
      iVar15 = (int)uVar17;
      lVar18 = lVar18 + 0xb4;
      do {
        uVar8 = (undefined4)Color::sWhite;
        uVar20 = uVar17 + 1;
        fVar24 = ((float)iVar19 / (float)iVar7 + (float)(int)local_ac) * __LC14;
        fVar28 = (float)(__LC15 & (uint)fVar24 ^ (uint)fVar24);
        iVar26 = (int)(_LC17 * fVar28 + _LC19);
        fVar21 = (float)iVar26;
        fVar28 = ((fVar28 - _LC21 * fVar21) - _LC23 * fVar21) - fVar21 * _LC25;
        fVar31 = fVar28 * fVar28;
        fVar21 = (((_LC27 * fVar31 + _LC29) * fVar31 + _LC31) * fVar31 * fVar31 - _LC19 * fVar31) +
                 __LC32;
        fVar28 = ((_LC35 * fVar31 + _LC37) * fVar31 + _LC39) * fVar31 * fVar28 + fVar28;
        uVar29 = (iVar26 << 0x1f) >> 0x1f;
        fVar38 = (float)(((uint)fVar21 & uVar29 | ~uVar29 & (uint)fVar28) ^
                        ((uint)fVar24 ^ iVar26 << 0x1e) & __LC15);
        fVar21 = (float)(((uint)fVar28 & uVar29 | ~uVar29 & (uint)fVar21) ^
                        iVar26 << 0x1e & __LC15 ^ iVar26 << 0x1f);
        fVar27 = param_3 * fVar21;
        uVar32 = CONCAT44(param_1,param_3 * fVar38);
        fVar30 = param_4 * fVar38;
        fVar25 = param_4 * fVar21;
        fVar33 = param_3 * fVar38 - fVar30;
        fVar36 = param_1 - param_2;
        fVar37 = fVar27 - fVar25;
        fVar24 = fVar38 * fVar36 - fVar33 * 0.0;
        fVar31 = fVar37 * 0.0 - fVar21 * fVar36;
        fVar28 = fVar21 * fVar33 - fVar38 * fVar37;
        fVar21 = fVar28 * fVar33 - fVar31 * fVar36;
        fVar28 = fVar24 * fVar36 - fVar28 * fVar37;
        fVar24 = fVar31 * fVar37 - fVar24 * fVar33;
        auVar34._4_4_ = fVar24;
        auVar34._0_4_ = fVar28;
        auVar34._8_4_ = fVar21;
        auVar34._12_4_ = fVar21;
        auVar35._0_4_ = SQRT(fVar21 * fVar21 + fVar24 * fVar24 + fVar28 * fVar28 + 0.0);
        auVar35._4_4_ = auVar35._0_4_;
        auVar35._8_4_ = auVar35._0_4_;
        auVar35._12_4_ = auVar35._0_4_;
        auVar35 = divps(auVar34,auVar35);
        auVar22._12_4_ = auVar35._0_4_;
        auVar22._8_4_ = fVar27;
        local_148 = CONCAT44(param_2,fVar30);
        auVar22._0_8_ = uVar32;
        uVar12 = uVar11;
        if (uVar11 < uVar20) {
          uVar12 = uVar20;
          if (uVar20 <= uVar11 * 2) {
            uVar12 = uVar11 * 2;
          }
          lVar10 = (*Reallocate)(lVar10,uVar11 * 0x24,uVar12 * 0x24);
        }
        uVar9 = (undefined4)Color::sWhite;
        uStack_5c = (undefined4)__LC40;
        local_58 = (undefined4)((ulong)__LC40 >> 0x20);
        uVar5 = CONCAT44(_UNK_0010ee88,local_58);
        uVar6 = CONCAT44(uVar23,_LC13);
        *(undefined4 *)(lVar10 + -0x4c + lVar18) = uVar8;
        uVar11 = uVar17 + 2;
        puVar2 = (undefined8 *)(lVar10 + -0x6c + lVar18);
        *puVar2 = uVar32;
        puVar2[1] = CONCAT44(uStack_5c,fVar27);
        puVar2 = (undefined8 *)(lVar10 + -0x5c + lVar18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        uVar20 = uVar12;
        uVar8 = uVar9;
        if (uVar12 < uVar11) {
          uVar20 = uVar11;
          if (uVar11 <= uVar12 * 2) {
            uVar20 = uVar12 * 2;
          }
          lVar10 = (*Reallocate)(lVar10,uVar12 * 0x24,uVar20 * 0x24);
          uVar8 = (undefined4)Color::sWhite;
        }
        uStack_5c = (undefined4)__LC41;
        local_58 = (undefined4)((ulong)__LC41 >> 0x20);
        uStack_54 = (undefined4)_UNK_0010ee98;
        uStack_50 = (undefined4)((ulong)_UNK_0010ee98 >> 0x20);
        *(undefined4 *)(lVar10 + -0x28 + lVar18) = uVar9;
        uVar11 = uVar17 + 3;
        puVar2 = (undefined8 *)(lVar10 + -0x48 + lVar18);
        *puVar2 = CONCAT44(param_2,fVar30);
        puVar2[1] = CONCAT44(uStack_5c,fVar25);
        puVar2 = (undefined8 *)(lVar10 + -0x38 + lVar18);
        *puVar2 = CONCAT44(uStack_54,local_58);
        puVar2[1] = CONCAT44(uVar23,uStack_50);
        uVar12 = uVar20;
        uVar9 = uVar8;
        if (uVar20 < uVar11) {
          uVar12 = uVar11;
          if (uVar11 <= uVar20 * 2) {
            uVar12 = uVar20 * 2;
          }
          lVar10 = (*Reallocate)(lVar10,uVar20 * 0x24,uVar12 * 0x24);
          uVar9 = (undefined4)Color::sWhite;
        }
        uVar17 = uVar17 + 4;
        *(undefined4 *)(lVar10 + -4 + lVar18) = uVar8;
        *(undefined1 (*) [16])(lVar10 + -0x24 + lVar18) = auVar22;
        puVar2 = (undefined8 *)(lVar10 + -0x14 + lVar18);
        *puVar2 = auVar35._4_8_;
        puVar2[1] = CONCAT44(uVar23,0x3e800000);
        uVar11 = uVar12;
        if (uVar12 < uVar17) {
          uVar11 = uVar12 * 2;
          if (uVar12 * 2 < uVar17) {
            uVar11 = uVar17;
          }
          lVar10 = (*Reallocate)(lVar10,uVar12 * 0x24,uVar11 * 0x24);
        }
        iVar19 = iVar19 + 1;
        *(undefined4 *)(lVar10 + 0x20 + lVar18) = uVar9;
        *(undefined8 *)(lVar10 + lVar18) = local_148;
        ((undefined8 *)(lVar10 + lVar18))[1] = CONCAT44(auVar35._0_4_,fVar25);
        puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar18);
        *puVar2 = auVar35._4_8_;
        puVar2[1] = CONCAT44(uVar23,0x3e800000);
        lVar18 = lVar18 + 0x90;
      } while (iVar19 <= iVar7);
      if (iVar7 != 0) {
        lVar18 = uVar14 * 4;
        uVar20 = uVar14;
        do {
          uVar12 = uVar20 + 1;
          if (local_a0 < uVar12) {
            uVar4 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar4;
            if (uVar4 < uVar12) {
              local_a0 = uVar12;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          uVar12 = uVar20 + 2;
          *(int *)(local_a8 + lVar18) = (int)uVar16;
          if (local_a0 < uVar12) {
            uVar4 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar4;
            if (uVar4 < uVar12) {
              local_a0 = uVar12;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          uVar12 = uVar20 + 3;
          *(int *)(local_a8 + 4 + lVar18) = iVar15;
          if (local_a0 < uVar12) {
            uVar4 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar4;
            if (uVar4 < uVar12) {
              local_a0 = uVar12;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          uVar12 = uVar20 + 4;
          *(int *)(local_a8 + 8 + lVar18) = iVar15 + 4;
          if (local_a0 < uVar12) {
            uVar4 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar4;
            if (uVar4 < uVar12) {
              local_a0 = uVar12;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          uVar12 = uVar20 + 5;
          *(int *)(local_a8 + 0xc + lVar18) = (int)uVar16 + 1;
          if (local_a0 < uVar12) {
            uVar4 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar4;
            if (uVar4 < uVar12) {
              local_a0 = uVar12;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          uVar12 = uVar20 + 6;
          *(int *)(local_a8 + 0x10 + lVar18) = iVar15 + 5;
          if (local_a0 < uVar12) {
            uVar4 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar4;
            if (uVar4 < uVar12) {
              local_a0 = uVar12;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          uVar12 = uVar20 + 7;
          *(int *)(local_a8 + 0x14 + lVar18) = iVar15 + 1;
          if (local_a0 < uVar12) {
            uVar4 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar12;
            if (uVar12 <= uVar4) {
              local_a0 = uVar4;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          uVar12 = uVar20 + 8;
          *(int *)(local_a8 + 0x18 + lVar18) = iVar15 + 2;
          if (local_a0 < uVar12) {
            uVar4 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar4;
            if (uVar4 < uVar12) {
              local_a0 = uVar12;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          uVar12 = uVar20 + 9;
          *(int *)(local_a8 + 0x1c + lVar18) = iVar15 + 3;
          if (local_a0 < uVar12) {
            uVar4 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar4;
            if (uVar4 < uVar12) {
              local_a0 = uVar12;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          uVar12 = uVar20 + 10;
          *(int *)(local_a8 + 0x20 + lVar18) = iVar15 + 7;
          if (local_a0 < uVar12) {
            uVar4 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar4;
            if (uVar4 < uVar12) {
              local_a0 = uVar12;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          uVar12 = uVar20 + 0xb;
          *(int *)(local_a8 + 0x24 + lVar18) = iVar15 + 2;
          if (local_a0 < uVar12) {
            uVar4 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar4;
            if (uVar4 < uVar12) {
              local_a0 = uVar12;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          uVar20 = uVar20 + 0xc;
          *(int *)(local_a8 + 0x28 + lVar18) = iVar15 + 7;
          if (local_a0 < uVar20) {
            uVar12 = local_a0 * 2;
            lVar13 = local_a0 * 4;
            local_a0 = uVar12;
            if (uVar12 < uVar20) {
              local_a0 = uVar20;
            }
            local_a8 = (*Reallocate)(local_a8,lVar13,local_a0 * 4);
          }
          *(int *)(local_a8 + 0x2c + lVar18) = iVar15 + 6;
          lVar18 = lVar18 + 0x30;
          iVar15 = iVar15 + 4;
        } while ((long)iVar7 * 0xc + uVar14 != uVar20);
        uVar14 = uVar14 + ((ulong)(iVar7 - 1) * 3 + 3) * 4;
      }
    }
    local_ac = local_ac + 1;
    uVar16 = uVar17;
  } while (local_ac != 4);
  lVar18 = 0;
  if (uVar14 != 0) {
    lVar18 = local_a8;
  }
  lVar13 = 0;
  if (uVar17 != 0) {
    lVar13 = lVar10;
  }
  (**(code **)(*in_RSI + 0x28))
            (CONCAT44(in_register_0000003c,param_5),in_RSI,lVar13,uVar17 & 0xffffffff,lVar18,
             uVar14 & 0xffffffff);
  if (local_a8 != 0) {
    (*Free)(local_a8);
  }
  if (lVar10 != 0) {
    (*Free)(lVar10);
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(in_register_0000003c,param_5);
}



/* JPH::DebugRenderer::CreateQuad(JPH::Array<unsigned int, JPH::STLAllocator<unsigned int> >&,
   JPH::Array<JPH::DebugRenderer::Vertex, JPH::STLAllocator<JPH::DebugRenderer::Vertex> >&,
   JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Vec3) */

void JPH::DebugRenderer::CreateQuad
               (undefined8 param_1,float param_2_00,undefined8 param_3,float param_4,
               undefined8 param_5,float param_6,undefined8 param_7,undefined4 param_8,
               undefined8 param_9,ulong *param_2,ulong *param_11)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float local_78;
  float fStack_74;
  
  fVar11 = (float)((ulong)param_1 >> 0x20);
  uVar6 = *param_11;
  uVar5 = param_11[2];
  iVar3 = (int)uVar6;
  uVar7 = (ulong)(iVar3 + 4);
  local_78 = (float)param_3;
  fStack_74 = (float)((ulong)param_3 >> 0x20);
  if (param_11[1] < uVar7) {
    uVar5 = (*Reallocate)(uVar5,param_11[1] * 0x24,uVar7 * 0x24);
    param_11[2] = uVar5;
    param_11[1] = uVar7;
  }
  *param_11 = uVar7;
  uVar2 = (undefined4)Color::sWhite;
  uVar7 = param_2[1];
  puVar1 = (undefined8 *)(uVar5 + (uVar6 & 0xffffffff) * 0x24);
  uVar4 = param_2[2];
  *(float *)(puVar1 + 1) = param_2_00;
  local_78 = local_78 - (float)param_1;
  fStack_74 = fStack_74 - fVar11;
  *(undefined4 *)((long)puVar1 + 0x8c) = uVar2;
  *(float *)((long)puVar1 + 0x2c) = param_4;
  fVar10 = (float)param_5 - (float)param_1;
  fVar11 = (float)((ulong)param_5 >> 0x20) - fVar11;
  *(undefined4 *)(puVar1 + 0xd) = uVar2;
  *(float *)(puVar1 + 10) = param_6;
  *(undefined4 *)((long)puVar1 + 0x44) = uVar2;
  *(undefined4 *)(puVar1 + 4) = uVar2;
  uVar12 = _LC43;
  *(undefined8 *)((long)puVar1 + 0x6c) = param_7;
  puVar1[0xc] = uVar12;
  uVar12 = _LC44;
  *puVar1 = param_1;
  *(undefined8 *)((long)puVar1 + 0x84) = uVar12;
  *(undefined8 *)((long)puVar1 + 0x24) = param_3;
  puVar1[9] = param_5;
  fVar9 = fVar11 * local_78 - fStack_74 * fVar10;
  fVar11 = (param_6 - param_2_00) * fStack_74 - (param_4 - param_2_00) * fVar11;
  fVar10 = fVar10 * (param_4 - param_2_00) - local_78 * (param_6 - param_2_00);
  puVar1[3] = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0x40000000;
  *(undefined4 *)((long)puVar1 + 0x74) = param_8;
  auVar13._4_4_ = fVar10;
  auVar13._0_4_ = fVar11;
  auVar13._8_4_ = fVar9;
  auVar13._12_4_ = fVar9;
  fVar11 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11 + 0.0);
  auVar14._4_4_ = fVar11;
  auVar14._0_4_ = fVar11;
  auVar14._8_4_ = fVar11;
  auVar14._12_4_ = fVar11;
  auVar14 = divps(auVar13,auVar14);
  uVar12 = auVar14._0_8_;
  puVar1[0xf] = uVar12;
  *(undefined8 *)((long)puVar1 + 0x54) = uVar12;
  *(int *)(puVar1 + 0x10) = auVar14._8_4_;
  uVar2 = *(undefined4 *)(puVar1 + 0x10);
  puVar1[6] = uVar12;
  *(undefined4 *)((long)puVar1 + 0x5c) = uVar2;
  *(undefined4 *)(puVar1 + 7) = uVar2;
  *(undefined4 *)((long)puVar1 + 0x14) = uVar2;
  *(undefined8 *)((long)puVar1 + 0xc) = uVar12;
  uVar5 = *param_2;
  uVar6 = uVar5 + 1;
  uVar8 = uVar7;
  if (uVar7 < uVar6) {
    uVar8 = uVar7 * 2;
    if (uVar7 * 2 < uVar6) {
      uVar8 = uVar6;
    }
    uVar4 = (*Reallocate)(uVar4,uVar7 << 2,uVar8 * 4);
    param_2[1] = uVar8;
    param_2[2] = uVar4;
    uVar5 = *param_2;
    uVar6 = uVar5 + 1;
  }
  *param_2 = uVar6;
  *(int *)(uVar4 + uVar5 * 4) = iVar3;
  uVar5 = uVar5 + 2;
  uVar7 = uVar8;
  if (uVar8 < uVar5) {
    uVar7 = uVar8 * 2;
    if (uVar8 * 2 < uVar5) {
      uVar7 = uVar5;
    }
    uVar4 = (*Reallocate)(uVar4,uVar8 << 2,uVar7 * 4);
    uVar6 = *param_2;
    param_2[1] = uVar7;
    param_2[2] = uVar4;
    uVar5 = uVar6 + 1;
  }
  *param_2 = uVar5;
  *(int *)(uVar4 + uVar6 * 4) = iVar3 + 1;
  uVar6 = uVar6 + 2;
  uVar8 = uVar7;
  if (uVar7 < uVar6) {
    uVar8 = uVar7 * 2;
    if (uVar7 * 2 < uVar6) {
      uVar8 = uVar6;
    }
    uVar4 = (*Reallocate)(uVar4,uVar7 << 2,uVar8 * 4);
    param_2[1] = uVar8;
    param_2[2] = uVar4;
    uVar5 = *param_2;
    uVar6 = uVar5 + 1;
  }
  *param_2 = uVar6;
  *(int *)(uVar4 + uVar5 * 4) = iVar3 + 2;
  uVar5 = uVar5 + 2;
  uVar7 = uVar8;
  if (uVar8 < uVar5) {
    uVar7 = uVar8 * 2;
    if (uVar8 * 2 < uVar5) {
      uVar7 = uVar5;
    }
    uVar4 = (*Reallocate)(uVar4,uVar8 << 2,uVar7 * 4);
    uVar6 = *param_2;
    param_2[1] = uVar7;
    param_2[2] = uVar4;
    uVar5 = uVar6 + 1;
  }
  *param_2 = uVar5;
  *(int *)(uVar4 + uVar6 * 4) = iVar3;
  uVar6 = uVar6 + 2;
  uVar8 = uVar7;
  if (uVar7 < uVar6) {
    uVar8 = uVar7 * 2;
    if (uVar7 * 2 < uVar6) {
      uVar8 = uVar6;
    }
    uVar4 = (*Reallocate)(uVar4,uVar7 << 2,uVar8 * 4);
    param_2[1] = uVar8;
    param_2[2] = uVar4;
    uVar5 = *param_2;
    uVar6 = uVar5 + 1;
  }
  *param_2 = uVar6;
  *(int *)(uVar4 + uVar5 * 4) = iVar3 + 2;
  uVar5 = uVar5 + 2;
  if (uVar8 < uVar5) {
    uVar7 = uVar8 * 2;
    if (uVar8 * 2 < uVar5) {
      uVar7 = uVar5;
    }
    uVar4 = (*Reallocate)(uVar4,uVar8 << 2,uVar7 * 4);
    uVar6 = *param_2;
    param_2[1] = uVar7;
    param_2[2] = uVar4;
    uVar5 = uVar6 + 1;
  }
  *param_2 = uVar5;
  *(int *)(uVar4 + uVar6 * 4) = iVar3 + 3;
  return;
}



/* JPH::DebugRenderer::sCalculateBounds(JPH::DebugRenderer::Vertex const*, int) */

void __thiscall
JPH::DebugRenderer::sCalculateBounds(DebugRenderer *this,Vertex *param_1,int param_2)

{
  Vertex *pVVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  Vertex *pVVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pVVar1 = param_1 + (long)param_2 * 0x24;
  auVar6._4_4_ = _LC48;
  auVar6._0_4_ = _LC48;
  auVar6._8_4_ = _LC48;
  auVar6._12_4_ = _LC48;
  auVar5._4_4_ = _LC46;
  auVar5._0_4_ = _LC46;
  auVar5._8_4_ = _LC46;
  auVar5._12_4_ = _LC46;
  *(undefined1 (*) [16])this = auVar6;
  *(undefined1 (*) [16])(this + 0x10) = auVar5;
  if (param_1 < pVVar1) {
    do {
      pVVar4 = param_1 + 0x24;
      auVar2._12_4_ = *(undefined4 *)(param_1 + 8);
      auVar2._0_12_ = *(undefined1 (*) [12])param_1;
      auVar6 = minps(auVar6,auVar2);
      auVar3._12_4_ = *(undefined4 *)(param_1 + 8);
      auVar3._0_12_ = *(undefined1 (*) [12])param_1;
      auVar5 = maxps(auVar5,auVar3);
      param_1 = pVVar4;
    } while (pVVar4 < pVVar1);
    *(undefined1 (*) [16])this = auVar6;
    *(undefined1 (*) [16])(this + 0x10) = auVar5;
  }
  return;
}



/* JPH::DebugRenderer::CreateTriangleBatch(JPH::Array<JPH::Float3, JPH::STLAllocator<JPH::Float3> >
   const&, JPH::Array<JPH::IndexedTriangleNoMaterial,
   JPH::STLAllocator<JPH::IndexedTriangleNoMaterial> > const&) */

Array * JPH::DebugRenderer::CreateTriangleBatch(Array *param_1,Array *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  float *pfVar8;
  float *pfVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 (*pauVar14) [16];
  long *in_RCX;
  uint *puVar15;
  ulong *in_RDX;
  uint *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  int iVar19;
  long lVar20;
  long in_FS_OFFSET;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float local_78;
  float fStack_74;
  float afStack_70 [2];
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float local_48 [2];
  long local_40;
  
  uVar3 = *in_RDX;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar3 == 0) {
    lVar20 = *in_RCX;
    puVar18 = (uint *)in_RCX[2];
    puVar11 = (undefined8 *)0x0;
    if (lVar20 == 0) {
      (**(code **)(*(long *)param_2 + 0x28))(param_1,param_2,0,0,puVar18,0);
      goto LAB_00105465;
    }
LAB_0010524a:
    puVar15 = puVar18;
    puVar16 = puVar18;
    do {
      puVar16 = puVar16 + 3;
      pfVar8 = &local_78;
      puVar10 = puVar15;
      do {
        uVar1 = *puVar10;
        pfVar9 = pfVar8 + 4;
        puVar10 = puVar10 + 1;
        puVar12 = (undefined8 *)((long)puVar11 + (ulong)uVar1 * 0x24);
        uVar6 = puVar12[1];
        *(undefined8 *)pfVar8 = *puVar12;
        *(undefined8 *)(pfVar8 + 2) = uVar6;
        pfVar8 = pfVar9;
      } while (local_48 != pfVar9);
      fVar21 = (fStack_54 - fStack_74) * (local_68 - local_78) -
               (fStack_64 - fStack_74) * (local_58 - local_78);
      fVar22 = (fStack_50 - afStack_70[0]) * (fStack_64 - fStack_74) -
               (fStack_60 - afStack_70[0]) * (fStack_54 - fStack_74);
      fVar23 = (local_58 - local_78) * (fStack_60 - afStack_70[0]) -
               (local_68 - local_78) * (fStack_50 - afStack_70[0]);
      auVar24._4_4_ = fVar23;
      auVar24._0_4_ = fVar22;
      auVar24._8_4_ = fVar21;
      auVar24._12_4_ = fVar21;
      auVar25._0_4_ = SQRT(fVar21 * fVar21 + fVar23 * fVar23 + fVar22 * fVar22 + 0.0);
      auVar25._4_4_ = auVar25._0_4_;
      auVar25._8_4_ = auVar25._0_4_;
      auVar25._12_4_ = auVar25._0_4_;
      auVar25 = divps(auVar24,auVar25);
      puVar10 = puVar15;
      do {
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
        fVar21 = *(float *)((long)puVar11 + (ulong)uVar1 * 0x24 + 0x14);
        *(ulong *)((long)puVar11 + (ulong)uVar1 * 0x24 + 0xc) =
             CONCAT44(*(float *)((long)puVar11 + (ulong)uVar1 * 0x24 + 0x10) + auVar25._4_4_,
                      *(float *)((long)puVar11 + (ulong)uVar1 * 0x24 + 0xc) + auVar25._0_4_);
        *(float *)((long)puVar11 + (ulong)uVar1 * 0x24 + 0x14) = fVar21 + auVar25._8_4_;
      } while (puVar16 != puVar10);
      puVar15 = puVar15 + 3;
    } while (puVar18 + lVar20 * 3 != puVar16);
    iVar19 = (int)lVar20 * 3;
    if (uVar3 != 0) goto LAB_001053d9;
  }
  else {
    puVar11 = (undefined8 *)(*Reallocate)(0,0,uVar3 * 0x24);
    uVar4 = *in_RDX;
    if (uVar4 != 0) {
      puVar12 = puVar11;
      puVar17 = (undefined8 *)in_RDX[2];
      do {
        puVar13 = (undefined8 *)((long)puVar12 + 0x24);
        *puVar12 = *puVar17;
        uVar2 = *(undefined4 *)(puVar17 + 1);
        *(undefined1 (*) [16])((long)puVar12 + 0xc) = (undefined1  [16])0x0;
        *(undefined4 *)(puVar12 + 1) = uVar2;
        uVar2 = (undefined4)Color::sWhite;
        *(undefined4 *)((long)puVar12 + 0x1c) = 0;
        *(undefined4 *)(puVar12 + 4) = uVar2;
        puVar12 = puVar13;
        puVar17 = (undefined8 *)((long)puVar17 + 0xc);
      } while ((undefined8 *)((long)puVar11 + uVar4 * 0x24) != puVar13);
    }
    lVar20 = *in_RCX;
    puVar18 = (uint *)in_RCX[2];
    if (lVar20 != 0) goto LAB_0010524a;
    iVar19 = 0;
LAB_001053d9:
    pauVar14 = (undefined1 (*) [16])((long)puVar11 + 0xc);
    do {
      auVar25 = *pauVar14;
      pauVar7 = pauVar14 + 2;
      fVar21 = SQRT(auVar25._8_4_ * auVar25._8_4_ +
                    auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_ + 0.0);
      auVar5._4_4_ = fVar21;
      auVar5._0_4_ = fVar21;
      auVar5._8_4_ = fVar21;
      auVar5._12_4_ = fVar21;
      auVar25 = divps(auVar25,auVar5);
      *(long *)*pauVar14 = auVar25._0_8_;
      *(int *)(*pauVar14 + 8) = auVar25._8_4_;
      pauVar14 = (undefined1 (*) [16])(*pauVar7 + 4);
    } while ((undefined1 (*) [16])((long)puVar11 + uVar3 * 0x24 + 0xc) !=
             (undefined1 (*) [16])(*pauVar7 + 4));
  }
  (**(code **)(*(long *)param_2 + 0x28))(param_1,param_2,puVar11,uVar3 & 0xffffffff,puVar18,iVar19);
  if (puVar11 != (undefined8 *)0x0) {
    (*Free)(puVar11);
  }
LAB_00105465:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JPH::DebugRenderer::CreateTriangleBatchForConvex(std::function<JPH::Vec3 (JPH::Vec3)>, int,
   JPH::AABox*) */

undefined8
JPH::DebugRenderer::CreateTriangleBatchForConvex
          (undefined8 param_1,long *param_2,long param_3,undefined4 param_4,
          undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [12];
  undefined1 (*pauVar4) [12];
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 (*local_98) [12];
  undefined1 local_88 [16];
  undefined1 (*local_78) [12];
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1 (*) [12])0x0;
  local_78 = (undefined1 (*) [12])0x0;
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_88 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(local_68,param_3,2);
    local_58 = *(code **)(param_3 + 0x10);
    uStack_50 = *(undefined8 *)(param_3 + 0x18);
  }
  local_b0 = _LC50;
  Create8thSphere(0x3f800000,0,0x3f80000000000000,0,0,0x3f8000003f800000,param_2,local_88,local_a8,
                  &local_b0,local_68,param_4);
  if (local_58 != (code *)0x0) {
    (*local_58)(local_68,local_68,3);
  }
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(local_68,param_3,2);
    local_58 = *(code **)(param_3 + 0x10);
    uStack_50 = *(undefined8 *)(param_3 + 0x18);
  }
  local_b0 = _LC51;
  Create8thSphere(0x3f80000000000000,0,0xbf800000,0,0,0x3f8000003f800000,param_2,local_88,local_a8,
                  &local_b0,local_68,param_4);
  if (local_58 != (code *)0x0) {
    (*local_58)(local_68,local_68,3);
  }
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(local_68,param_3,2);
    local_58 = *(code **)(param_3 + 0x10);
    uStack_50 = *(undefined8 *)(param_3 + 0x18);
  }
  local_b0 = _LC51;
  Create8thSphere(0xbf80000000000000,0,0x3f800000,0,0,0x3f8000003f800000,param_2,local_88,local_a8,
                  &local_b0,local_68,param_4);
  if (local_58 != (code *)0x0) {
    (*local_58)(local_68,local_68,3);
  }
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(local_68,param_3,2);
    local_58 = *(code **)(param_3 + 0x10);
    uStack_50 = *(undefined8 *)(param_3 + 0x18);
  }
  local_b0 = _LC50;
  Create8thSphere(0xbf800000,0,0xbf80000000000000,0,0,0x3f8000003f800000,param_2,local_88,local_a8,
                  &local_b0,local_68,param_4);
  if (local_58 != (code *)0x0) {
    (*local_58)(local_68,local_68,3);
  }
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(local_68,param_3,2);
    local_58 = *(code **)(param_3 + 0x10);
    uStack_50 = *(undefined8 *)(param_3 + 0x18);
  }
  local_b0 = _LC51;
  Create8thSphere(0x3f80000000000000,0,0x3f800000,0,0,0xbf800000bf800000,param_2,local_88,local_a8,
                  &local_b0,local_68,param_4);
  if (local_58 != (code *)0x0) {
    (*local_58)(local_68,local_68,3);
  }
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(local_68,param_3,2);
    local_58 = *(code **)(param_3 + 0x10);
    uStack_50 = *(undefined8 *)(param_3 + 0x18);
  }
  local_b0 = _LC50;
  Create8thSphere(0xbf800000,0,0x3f80000000000000,0,0,0xbf800000bf800000,param_2,local_88,local_a8,
                  &local_b0,local_68,param_4);
  if (local_58 != (code *)0x0) {
    (*local_58)(local_68,local_68,3);
  }
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(local_68,param_3,2);
    local_58 = *(code **)(param_3 + 0x10);
    uStack_50 = *(undefined8 *)(param_3 + 0x18);
  }
  local_b0 = _LC50;
  Create8thSphere(0x3f800000,0,0xbf80000000000000,0,0,0xbf800000bf800000,param_2,local_88,local_a8,
                  &local_b0,local_68,param_4);
  if (local_58 != (code *)0x0) {
    (*local_58)(local_68,local_68,3);
  }
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(local_68,param_3,2);
    local_58 = *(code **)(param_3 + 0x10);
    uStack_50 = *(undefined8 *)(param_3 + 0x18);
  }
  local_b0 = _LC51;
  Create8thSphere(0xbf80000000000000,0,0xbf800000,0,0,0xbf800000bf800000,param_2,local_88,local_a8,
                  &local_b0,local_68,param_4);
  if (local_58 != (code *)0x0) {
    (*local_58)(local_68,local_68,3);
  }
  if (param_5 != (undefined1 (*) [16])0x0) {
    auVar6._4_4_ = _LC46;
    auVar6._0_4_ = _LC46;
    auVar6._8_4_ = _LC46;
    auVar6._12_4_ = _LC46;
    auVar7._4_4_ = _LC48;
    auVar7._0_4_ = _LC48;
    auVar7._8_4_ = _LC48;
    auVar7._12_4_ = _LC48;
    pauVar4 = local_98;
    while (pauVar4 < local_98 + (long)(int)local_a8._0_4_ * 3) {
      auVar5._12_4_ = *(undefined4 *)(*pauVar4 + 8);
      auVar5._0_12_ = *pauVar4;
      auVar7 = minps(auVar7,auVar5);
      auVar6 = maxps(auVar6,auVar5);
      pauVar4 = pauVar4 + 3;
    }
    *param_5 = auVar7;
    param_5[1] = auVar6;
  }
  pauVar4 = local_78;
  if (local_88._0_8_ == 0) {
    pauVar4 = (undefined1 (*) [12])0x0;
  }
  pauVar3 = local_98;
  if (local_a8._0_8_ == 0) {
    pauVar3 = (undefined1 (*) [12])0x0;
  }
  (**(code **)(*param_2 + 0x28))(param_1,param_2,pauVar3,local_a8._0_8_,pauVar4);
  if (local_78 != (undefined1 (*) [12])0x0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_88._8_8_;
    local_88 = auVar1 << 0x40;
    (*Free)();
  }
  if (local_98 != (undefined1 (*) [12])0x0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_a8._8_8_;
    local_a8 = auVar2 << 0x40;
    (*Free)();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::CreateTriangleGeometryForConvex(std::function<JPH::Vec3 (JPH::Vec3)>) */

long * JPH::DebugRenderer::CreateTriangleGeometryForConvex
                 (long *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined4 *puVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined4 *puVar16;
  long in_FS_OFFSET;
  int local_c8;
  long *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  puVar16 = &sLODDistanceForLevel;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = 0;
  *param_1 = 0;
  local_c8 = 4;
  do {
    uVar1 = *puVar16;
    local_58 = (code *)0x0;
    uStack_50 = 0;
    puVar11 = &local_88;
    if (lVar5 != 0) {
      puVar11 = (undefined4 *)0x0;
    }
    local_88 = _LC48;
    uStack_84 = _UNK_0010eeb4;
    uStack_80 = _UNK_0010eeb8;
    uStack_7c = _UNK_0010eebc;
    local_78 = _LC46;
    uStack_74 = _UNK_0010eea4;
    uStack_70 = _UNK_0010eea8;
    uStack_6c = _UNK_0010eeac;
    local_68 = (undefined1  [16])0x0;
    if (*(code **)(param_3 + 0x10) != (code *)0x0) {
      (**(code **)(param_3 + 0x10))(local_68,param_3,2);
      local_58 = *(code **)(param_3 + 0x10);
      uStack_50 = *(undefined8 *)(param_3 + 0x18);
    }
    CreateTriangleBatchForConvex(&local_90,param_2,local_68,local_c8,puVar11);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    piVar12 = (int *)*param_1;
    if (piVar12 == (int *)0x0) {
      piVar7 = (int *)(*Allocate)(0x40);
      piVar12 = (int *)*param_1;
      *piVar7 = 0;
      piVar7[6] = 0;
      piVar7[7] = 0;
      *(undefined1 (*) [16])(piVar7 + 2) = (undefined1  [16])0x0;
      *(ulong *)(piVar7 + 8) = CONCAT44(uStack_84,local_88);
      *(ulong *)(piVar7 + 10) = CONCAT44(uStack_7c,uStack_80);
      *(ulong *)(piVar7 + 0xc) = CONCAT44(uStack_74,local_78);
      *(ulong *)(piVar7 + 0xe) = CONCAT44(uStack_6c,uStack_70);
      if (piVar7 != piVar12) {
        if (piVar12 != (int *)0x0) {
          LOCK();
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (*piVar12 == 0) {
            plVar10 = *(long **)(piVar12 + 6);
            if (plVar10 != (long *)0x0) {
              if ((*(long *)(piVar12 + 2) != 0) &&
                 (plVar15 = plVar10 + *(long *)(piVar12 + 2) * 2, plVar10 < plVar15)) {
                do {
                  if ((long *)*plVar10 != (long *)0x0) {
                    (**(code **)(*(long *)*plVar10 + 0x18))();
                  }
                  plVar10 = plVar10 + 2;
                } while (plVar10 < plVar15);
                plVar10 = *(long **)(piVar12 + 6);
              }
              piVar12[2] = 0;
              piVar12[3] = 0;
              (*Free)(plVar10);
            }
            (*Free)(piVar12);
          }
        }
        *param_1 = (long)piVar7;
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
        piVar12 = (int *)*param_1;
      }
    }
    plVar10 = local_90;
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x10))(local_90);
    }
    lVar5 = *(long *)(piVar12 + 2);
    uVar13 = lVar5 + 1;
    if (*(ulong *)(piVar12 + 4) < uVar13) {
      uVar4 = *(ulong *)(piVar12 + 4) * 2;
      if (uVar13 <= uVar4) {
        uVar13 = uVar4;
      }
      puVar6 = (undefined8 *)(*Allocate)(uVar13 << 4);
      puVar14 = *(undefined8 **)(piVar12 + 6);
      if (puVar14 != (undefined8 *)0x0) {
        lVar5 = *(long *)(piVar12 + 2);
        if (puVar6 < puVar14) {
          for (puVar8 = puVar6; puVar8 < puVar6 + lVar5 * 2; puVar8 = puVar8 + 2) {
            uVar3 = *puVar14;
            uVar2 = *(undefined4 *)(puVar14 + 1);
            puVar14 = puVar14 + 2;
            *puVar8 = uVar3;
            *(undefined4 *)(puVar8 + 1) = uVar2;
          }
        }
        else {
          puVar14 = puVar14 + lVar5 * 2 + -2;
          puVar8 = puVar6 + lVar5 * 2 + -2;
          if (!CARRY8(lVar5 * 0x10 - 0x10,(ulong)puVar6)) {
            do {
              uVar3 = *puVar14;
              uVar2 = *(undefined4 *)(puVar14 + 1);
              puVar9 = puVar8 + -2;
              puVar14 = puVar14 + -2;
              *puVar8 = uVar3;
              *(undefined4 *)(puVar8 + 1) = uVar2;
              puVar8 = puVar9;
            } while (puVar6 <= puVar9);
            (*Free)();
            goto LAB_00105dc0;
          }
        }
        (*Free)();
      }
LAB_00105dc0:
      lVar5 = *(long *)(piVar12 + 2);
      *(undefined8 **)(piVar12 + 6) = puVar6;
      *(ulong *)(piVar12 + 4) = uVar13;
      uVar13 = lVar5 + 1;
    }
    else {
      puVar6 = *(undefined8 **)(piVar12 + 6);
    }
    *(ulong *)(piVar12 + 2) = uVar13;
    puVar6[lVar5 * 2] = plVar10;
    *(undefined4 *)(puVar6 + lVar5 * 2 + 1) = uVar1;
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x18))();
    }
    puVar16 = puVar16 + 1;
    local_c8 = local_c8 + -1;
    if (local_c8 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar5 = *param_1;
  } while( true );
}



/* JPH::DebugRenderer::DrawBox(JPH::AABox const&, JPH::Color, JPH::DebugRenderer::ECastShadow,
   JPH::DebugRenderer::EDrawMode) */

void JPH::DebugRenderer::DrawBox(long *param_1,float *param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float fVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [4];
  float afStack_54 [3];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  float fStack_20;
  undefined4 uStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_1c = 0x3f800000;
  lVar2 = 0;
  auVar11._4_4_ = _LC54;
  auVar11._0_4_ = _LC54;
  auVar11._8_4_ = _LC54;
  auVar11._12_4_ = _LC54;
  auVar5._0_4_ = (param_2[4] - *param_2) * _LC19;
  auVar5._4_4_ = (param_2[5] - param_2[1]) * _LC19;
  auVar5._8_4_ = (param_2[6] - param_2[2]) * _LC19;
  auVar5._12_4_ = (param_2[7] - param_2[3]) * _LC19;
  local_68 = (*param_2 + param_2[4]) * _LC19;
  fStack_64 = (param_2[1] + param_2[5]) * _LC19;
  fStack_60 = (param_2[2] + param_2[6]) * _LC19;
  auVar5 = maxps(auVar5,auVar11);
  local_28 = CONCAT44(fStack_64,local_68);
  fStack_20 = fStack_60;
  fVar8 = auVar5._0_4_;
  fVar3 = auVar5._8_4_;
  _local_58 = ZEXT416((uint)fVar8);
  fVar7 = auVar5._4_4_;
  local_48 = ZEXT416((uint)fVar7) << 0x20;
  local_38 = ZEXT416((uint)fVar3) << 0x40;
  fVar3 = fVar3 * fVar3 + 0.0;
  fVar4 = fVar8 * fVar8 + 0.0;
  fVar8 = fVar7 * fVar7 + 0.0;
  fStack_5c = 1.0;
  if (fVar8 <= fVar4) {
    fVar8 = fVar4;
  }
  local_78 = local_68;
  fStack_74 = fStack_64;
  fStack_70 = fStack_60;
  fStack_6c = fStack_5c;
  if (fVar3 <= fVar8) {
    fVar3 = fVar8;
  }
  do {
    fVar8 = *(float *)(param_1[1] + 0x20 + lVar2);
    fVar4 = *(float *)(param_1[1] + 0x30 + lVar2);
    lVar1 = lVar2 * 4;
    auVar6._0_8_ = CONCAT44(fVar8 * *(float *)(local_58 + lVar1 + 4),
                            fVar8 * *(float *)(local_58 + lVar1));
    auVar6._8_4_ = fVar8 * *(float *)(local_58 + lVar1 + 8);
    auVar6._12_4_ = fVar8 * *(float *)(local_48 + lVar1 + -4);
    lVar1 = lVar2 * 4;
    auVar9._0_4_ = fVar4 * *(float *)(local_58 + lVar1);
    auVar9._4_4_ = fVar4 * *(float *)(local_58 + lVar1 + 4);
    auVar9._8_4_ = fVar4 * *(float *)(local_58 + lVar1 + 8);
    auVar9._12_4_ = fVar4 * *(float *)(local_48 + lVar1 + -4);
    lVar2 = lVar2 + 4;
    auVar10._8_4_ = auVar6._8_4_;
    auVar10._0_8_ = auVar6._0_8_;
    auVar10._12_4_ = auVar6._12_4_;
    auVar11 = minps(auVar10,auVar9);
    auVar5 = maxps(auVar6,auVar9);
    local_78 = local_78 + auVar11._0_4_;
    fStack_74 = fStack_74 + auVar11._4_4_;
    fStack_70 = fStack_70 + auVar11._8_4_;
    fStack_6c = fStack_6c + auVar11._12_4_;
    local_68 = local_68 + auVar5._0_4_;
    fStack_64 = fStack_64 + auVar5._4_4_;
    fStack_60 = fStack_60 + auVar5._8_4_;
    fStack_5c = fStack_5c + auVar5._12_4_;
  } while (lVar2 != 0xc);
  (**(code **)(*param_1 + 0x30))(fVar3,param_1,local_58,&local_78,param_3,param_1 + 1,0,param_4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DebugRenderer::DrawBox(JPH::Mat44 const&, JPH::AABox const&, JPH::Color,
   JPH::DebugRenderer::ECastShadow, JPH::DebugRenderer::EDrawMode) */

void JPH::DebugRenderer::DrawBox
               (long *param_1,float *param_2,float *param_3,undefined8 param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lVar21;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [4];
  float afStack_94 [3];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  float local_58 [18];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  local_5c = 0x3f800000;
  auVar26._4_4_ = _LC54;
  auVar26._0_4_ = _LC54;
  auVar26._8_4_ = _LC54;
  auVar26._12_4_ = _LC54;
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  auVar23._0_4_ = (param_3[4] - *param_3) * _LC19;
  auVar23._4_4_ = (param_3[5] - param_3[1]) * _LC19;
  auVar23._8_4_ = (param_3[6] - param_3[2]) * _LC19;
  auVar23._12_4_ = (param_3[7] - param_3[3]) * _LC19;
  fVar9 = param_2[8];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  auVar23 = maxps(auVar23,auVar26);
  local_68 = CONCAT44((param_3[1] + param_3[5]) * _LC19,(*param_3 + param_3[4]) * _LC19);
  local_60 = (param_3[2] + param_3[6]) * _LC19;
  _local_98 = ZEXT416(auVar23._0_4_);
  local_88 = ZEXT416(auVar23._4_4_) << 0x20;
  local_78 = ZEXT416(auVar23._8_4_) << 0x40;
  fVar13 = param_2[0xc];
  fVar14 = param_2[0xd];
  fVar15 = param_2[0xe];
  fVar16 = param_2[0xf];
  lVar21 = 0;
  do {
    fVar17 = *(float *)(local_98 + lVar21);
    fVar18 = *(float *)(local_98 + lVar21 + 4);
    fVar19 = *(float *)(local_98 + lVar21 + 8);
    fVar20 = *(float *)(local_98 + lVar21 + 0xc);
    *(float *)((long)local_58 + lVar21) =
         fVar20 * fVar13 + fVar17 * fVar1 + fVar18 * fVar5 + fVar19 * fVar9;
    *(float *)((long)local_58 + lVar21 + 4) =
         fVar20 * fVar14 + fVar17 * fVar2 + fVar18 * fVar6 + fVar19 * fVar10;
    *(float *)((long)local_58 + lVar21 + 8) =
         fVar20 * fVar15 + fVar17 * fVar3 + fVar18 * fVar7 + fVar19 * fVar11;
    *(float *)((long)local_58 + lVar21 + 0xc) =
         fVar20 * fVar16 + fVar17 * fVar4 + fVar18 * fVar8 + fVar19 * fVar12;
    lVar21 = lVar21 + 0x10;
  } while (lVar21 != 0x40);
  lVar21 = 0;
  local_a8 = local_58[0xc];
  fStack_a4 = local_58[0xd];
  fStack_a0 = local_58[0xe];
  fStack_9c = local_58[0xf];
  do {
    fVar1 = *(float *)(param_1[1] + 0x20 + lVar21);
    fVar2 = *(float *)(param_1[1] + 0x30 + lVar21);
    auVar22._0_8_ = CONCAT44(fVar1 * local_58[lVar21 + 1],fVar1 * local_58[lVar21]);
    auVar22._8_4_ = fVar1 * local_58[lVar21 + 2];
    auVar22._12_4_ = fVar1 * local_58[lVar21 + 3];
    auVar24._0_4_ = fVar2 * local_58[lVar21];
    auVar24._4_4_ = fVar2 * local_58[lVar21 + 1];
    auVar24._8_4_ = fVar2 * local_58[lVar21 + 2];
    auVar24._12_4_ = fVar2 * local_58[lVar21 + 3];
    lVar21 = lVar21 + 4;
    auVar25._8_4_ = auVar22._8_4_;
    auVar25._0_8_ = auVar22._0_8_;
    auVar25._12_4_ = auVar22._12_4_;
    auVar26 = minps(auVar25,auVar24);
    auVar23 = maxps(auVar22,auVar24);
    local_58[0xc] = local_58[0xc] + auVar26._0_4_;
    local_58[0xd] = local_58[0xd] + auVar26._4_4_;
    local_58[0xe] = local_58[0xe] + auVar26._8_4_;
    local_58[0xf] = local_58[0xf] + auVar26._12_4_;
    local_a8 = local_a8 + auVar23._0_4_;
    fStack_a4 = fStack_a4 + auVar23._4_4_;
    fStack_a0 = fStack_a0 + auVar23._8_4_;
    fStack_9c = fStack_9c + auVar23._12_4_;
  } while (lVar21 != 0xc);
  local_b8 = local_58[0xc];
  fStack_b4 = local_58[0xd];
  fStack_b0 = local_58[0xe];
  fStack_ac = local_58[0xf];
  (**(code **)(*param_1 + 0x30))(param_1,local_58,&local_b8,param_4,param_1 + 1,0,param_5);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::DrawSphere(JPH::Vec3, float, JPH::Color, JPH::DebugRenderer::ECastShadow,
   JPH::DebugRenderer::EDrawMode) */

void __thiscall
JPH::DebugRenderer::DrawSphere
          (undefined8 param_1,float param_2,uint param_3,DebugRenderer *this,undefined4 param_5,
          undefined4 param_6)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  float local_a8;
  float fStack_a4;
  float local_98 [16];
  undefined1 local_58 [4];
  float afStack_54 [3];
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _local_58 = ZEXT416(param_3);
  local_38 = ZEXT416(param_3) << 0x40;
  _local_48 = ZEXT416(param_3) << 0x20;
  local_a8 = (float)param_1;
  fStack_a4 = (float)((ulong)param_1 >> 0x20);
  lVar8 = 0;
  local_28 = __LC9;
  uStack_20 = _UNK_0010ed98;
  do {
    fVar11 = *(float *)(local_58 + lVar8);
    fVar1 = *(float *)(local_58 + lVar8 + 4);
    fVar3 = *(float *)(local_58 + lVar8 + 8);
    fVar4 = *(float *)(local_58 + lVar8 + 0xc);
    *(float *)((long)local_98 + lVar8) =
         fVar4 * local_a8 + fVar11 * _LC6 + fVar1 * __LC7 + fVar3 * __LC10;
    *(float *)((long)local_98 + lVar8 + 4) =
         fVar4 * fStack_a4 + fVar11 * 0.0 + fVar1 * _UNK_0010ed84 + fVar3 * _UNK_0010eda4;
    *(float *)((long)local_98 + lVar8 + 8) =
         fVar4 * param_2 + fVar11 * 0.0 + fVar1 * _UNK_0010ed88 + fVar3 * _UNK_0010eda8;
    *(float *)((long)local_98 + lVar8 + 0xc) =
         fVar4 * 1.0 + fVar11 * 0.0 + fVar1 * _UNK_0010ed8c + fVar3 * _UNK_0010edac;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x40);
  lVar8 = 0;
  local_48._0_4_ = local_98[0xc];
  local_48._4_4_ = local_98[0xd];
  fStack_40 = local_98[0xe];
  fStack_3c = local_98[0xf];
  do {
    fVar11 = *(float *)(*(long *)(this + 0x10) + 0x20 + lVar8);
    fVar1 = *(float *)(*(long *)(this + 0x10) + 0x30 + lVar8);
    auVar9._0_8_ = CONCAT44(fVar11 * local_98[lVar8 + 1],fVar11 * local_98[lVar8]);
    auVar9._8_4_ = fVar11 * local_98[lVar8 + 2];
    auVar9._12_4_ = fVar11 * local_98[lVar8 + 3];
    lVar5 = lVar8 + 1;
    lVar6 = lVar8 + 2;
    lVar7 = lVar8 + 3;
    fVar11 = fVar1 * local_98[lVar8];
    lVar8 = lVar8 + 4;
    auVar12._8_4_ = auVar9._8_4_;
    auVar12._0_8_ = auVar9._0_8_;
    auVar12._12_4_ = auVar9._12_4_;
    auVar10._4_4_ = fVar1 * local_98[lVar5];
    auVar10._0_4_ = fVar11;
    auVar10._8_4_ = fVar1 * local_98[lVar6];
    auVar10._12_4_ = fVar1 * local_98[lVar7];
    auVar12 = minps(auVar12,auVar10);
    auVar2._4_4_ = fVar1 * local_98[lVar5];
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar1 * local_98[lVar6];
    auVar2._12_4_ = fVar1 * local_98[lVar7];
    auVar10 = maxps(auVar9,auVar2);
    local_98[0xc] = local_98[0xc] + auVar12._0_4_;
    local_98[0xd] = local_98[0xd] + auVar12._4_4_;
    local_98[0xe] = local_98[0xe] + auVar12._8_4_;
    local_98[0xf] = local_98[0xf] + auVar12._12_4_;
    local_48._0_4_ = (float)local_48._0_4_ + auVar10._0_4_;
    local_48._4_4_ = (float)local_48._4_4_ + auVar10._4_4_;
    fStack_40 = fStack_40 + auVar10._8_4_;
    fStack_3c = fStack_3c + auVar10._12_4_;
  } while (lVar8 != 0xc);
  afStack_54[0] = local_98[0xd];
  local_58 = (undefined1  [4])local_98[0xc];
  afStack_54[1] = local_98[0xe];
  afStack_54[2] = local_98[0xf];
  (**(code **)(*(long *)this + 0x30))(this,local_98,local_58,param_5,this + 0x10,0,param_6);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DebugRenderer::DrawUnitSphere(JPH::Mat44 const&, JPH::Color,
   JPH::DebugRenderer::ECastShadow, JPH::DebugRenderer::EDrawMode) */

void JPH::DebugRenderer::DrawUnitSphere
               (long *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long in_FS_OFFSET;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = 0;
  local_38 = *(float *)(param_2 + 0x30);
  fStack_34 = *(float *)(param_2 + 0x34);
  fStack_30 = *(float *)(param_2 + 0x38);
  fStack_2c = *(float *)(param_2 + 0x3c);
  local_28 = local_38;
  fStack_24 = fStack_34;
  fStack_20 = fStack_30;
  fStack_1c = fStack_2c;
  do {
    fVar2 = *(float *)(param_1[2] + 0x20 + lVar5);
    fVar3 = *(float *)(param_1[2] + 0x30 + lVar5);
    pfVar1 = (float *)(param_2 + lVar5 * 4);
    auVar6._0_8_ = CONCAT44(fVar2 * pfVar1[1],fVar2 * *pfVar1);
    auVar6._8_4_ = fVar2 * pfVar1[2];
    auVar6._12_4_ = fVar2 * pfVar1[3];
    pfVar1 = (float *)(param_2 + lVar5 * 4);
    lVar5 = lVar5 + 4;
    auVar8._8_4_ = auVar6._8_4_;
    auVar8._0_8_ = auVar6._0_8_;
    auVar8._12_4_ = auVar6._12_4_;
    auVar7._4_4_ = fVar3 * pfVar1[1];
    auVar7._0_4_ = fVar3 * *pfVar1;
    auVar7._8_4_ = fVar3 * pfVar1[2];
    auVar7._12_4_ = fVar3 * pfVar1[3];
    auVar8 = minps(auVar8,auVar7);
    auVar4._4_4_ = fVar3 * pfVar1[1];
    auVar4._0_4_ = fVar3 * *pfVar1;
    auVar4._8_4_ = fVar3 * pfVar1[2];
    auVar4._12_4_ = fVar3 * pfVar1[3];
    auVar7 = maxps(auVar6,auVar4);
    local_38 = local_38 + auVar8._0_4_;
    fStack_34 = fStack_34 + auVar8._4_4_;
    fStack_30 = fStack_30 + auVar8._8_4_;
    fStack_2c = fStack_2c + auVar8._12_4_;
    local_28 = local_28 + auVar7._0_4_;
    fStack_24 = fStack_24 + auVar7._4_4_;
    fStack_20 = fStack_20 + auVar7._8_4_;
    fStack_1c = fStack_1c + auVar7._12_4_;
  } while (lVar5 != 0xc);
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&local_38,param_3,param_1 + 2,0,param_4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::DrawCapsule(JPH::Mat44 const&, float, float, JPH::Color,
   JPH::DebugRenderer::ECastShadow, JPH::DebugRenderer::EDrawMode) */

void __thiscall
JPH::DebugRenderer::DrawCapsule
          (float param_2,float param_3,DebugRenderer *this,float *param_1,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long lVar24;
  long in_FS_OFFSET;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong uStack_200;
  long local_1e8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [4];
  float afStack_184 [3];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148 [32];
  undefined1 local_c8 [4];
  float afStack_c4 [3];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  float fStack_94;
  undefined8 uStack_90;
  float local_88 [18];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar24 = 0;
  local_178 = ZEXT416((uint)param_3) << 0x20;
  uVar25 = (uint)param_3 ^ _LC56;
  local_168 = ZEXT416((uint)param_3) << 0x40;
  local_158 = CONCAT44(_UNK_0010ed94,__LC9);
  uStack_150 = CONCAT44(_UNK_0010ed9c,_UNK_0010ed98);
  _local_188 = ZEXT416((uint)param_3);
  local_1c8 = CONCAT44((float)(_LC56 ^ (uint)param_2) - param_3,uVar25);
  uStack_1c0 = CONCAT44(uVar25,uVar25);
  fVar6 = param_1[0xc];
  fVar7 = param_1[0xd];
  fVar8 = param_1[0xe];
  fVar9 = param_1[0xf];
  local_1b8 = CONCAT44(param_3 + param_2,param_3);
  uStack_1b0 = CONCAT44(param_3,param_3);
  local_198 = fVar6;
  fStack_194 = fVar7;
  fStack_190 = fVar8;
  fStack_18c = fVar9;
  local_1a8 = fVar6;
  fStack_1a4 = fVar7;
  fStack_1a0 = fVar8;
  fStack_19c = fVar9;
  do {
    fVar2 = *(float *)((long)&local_1c8 + lVar24);
    fVar3 = *(float *)((long)&local_1b8 + lVar24);
    pfVar1 = param_1 + lVar24;
    auVar26._0_8_ = CONCAT44(fVar2 * pfVar1[1],fVar2 * *pfVar1);
    auVar26._8_4_ = fVar2 * pfVar1[2];
    auVar26._12_4_ = fVar2 * pfVar1[3];
    pfVar1 = param_1 + lVar24;
    lVar24 = lVar24 + 4;
    auVar28._8_4_ = auVar26._8_4_;
    auVar28._0_8_ = auVar26._0_8_;
    auVar28._12_4_ = auVar26._12_4_;
    auVar27._4_4_ = fVar3 * pfVar1[1];
    auVar27._0_4_ = fVar3 * *pfVar1;
    auVar27._8_4_ = fVar3 * pfVar1[2];
    auVar27._12_4_ = fVar3 * pfVar1[3];
    auVar28 = minps(auVar28,auVar27);
    auVar5._4_4_ = fVar3 * pfVar1[1];
    auVar5._0_4_ = fVar3 * *pfVar1;
    auVar5._8_4_ = fVar3 * pfVar1[2];
    auVar5._12_4_ = fVar3 * pfVar1[3];
    auVar27 = maxps(auVar26,auVar5);
    local_1a8 = local_1a8 + auVar28._0_4_;
    fStack_1a4 = fStack_1a4 + auVar28._4_4_;
    fStack_1a0 = fStack_1a0 + auVar28._8_4_;
    fStack_19c = fStack_19c + auVar28._12_4_;
    local_198 = local_198 + auVar27._0_4_;
    fStack_194 = fStack_194 + auVar27._4_4_;
    fStack_190 = fStack_190 + auVar27._8_4_;
    fStack_18c = fStack_18c + auVar27._12_4_;
  } while (lVar24 != 0xc);
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar10 = param_1[2];
  fVar11 = param_1[3];
  lVar24 = 0;
  fVar12 = param_1[4];
  fVar13 = param_1[5];
  fVar14 = param_1[6];
  fVar15 = param_1[7];
  local_98 = 0;
  uStack_90 = 0x3f80000000000000;
  fVar16 = param_1[8];
  fVar17 = param_1[9];
  fVar18 = param_1[10];
  fVar19 = param_1[0xb];
  _local_c8 = ZEXT416(_LC6);
  local_b8 = CONCAT44(_UNK_0010ed84,__LC7);
  uStack_b0 = CONCAT44(_UNK_0010ed8c,_UNK_0010ed88);
  local_a8 = CONCAT44(_UNK_0010eda4,__LC10);
  uStack_a0 = CONCAT44(_UNK_0010edac,_UNK_0010eda8);
  fStack_94 = (float)(_LC56 ^ (uint)param_2);
  do {
    fVar20 = *(float *)(local_c8 + lVar24);
    fVar21 = *(float *)(local_c8 + lVar24 + 4);
    fVar22 = *(float *)(local_c8 + lVar24 + 8);
    fVar23 = *(float *)(local_c8 + lVar24 + 0xc);
    *(float *)((long)local_88 + lVar24) =
         fVar23 * fVar6 + fVar20 * fVar2 + fVar21 * fVar12 + fVar22 * fVar16;
    *(float *)((long)local_88 + lVar24 + 4) =
         fVar23 * fVar7 + fVar20 * fVar3 + fVar21 * fVar13 + fVar22 * fVar17;
    *(float *)((long)local_88 + lVar24 + 8) =
         fVar23 * fVar8 + fVar20 * fVar10 + fVar21 * fVar14 + fVar22 * fVar18;
    *(float *)((long)local_88 + lVar24 + 0xc) =
         fVar23 * fVar9 + fVar20 * fVar11 + fVar21 * fVar15 + fVar22 * fVar19;
    lVar24 = lVar24 + 0x10;
  } while (lVar24 != 0x40);
  lVar24 = 0;
  do {
    fVar6 = *(float *)(local_188 + lVar24);
    fVar7 = *(float *)(local_188 + lVar24 + 4);
    fVar8 = *(float *)(local_188 + lVar24 + 8);
    fVar9 = *(float *)(local_188 + lVar24 + 0xc);
    *(float *)((long)local_148 + lVar24) =
         fVar9 * local_88[0xc] + fVar6 * local_88[0] + fVar7 * local_88[4] + fVar8 * local_88[8];
    *(float *)((long)local_148 + lVar24 + 4) =
         fVar9 * local_88[0xd] + fVar6 * local_88[1] + fVar7 * local_88[5] + fVar8 * local_88[9];
    *(float *)((long)local_148 + lVar24 + 8) =
         fVar9 * local_88[0xe] + fVar6 * local_88[2] + fVar7 * local_88[6] + fVar8 * local_88[10];
    *(float *)((long)local_148 + lVar24 + 0xc) =
         fVar9 * local_88[0xf] + fVar6 * local_88[3] + fVar7 * local_88[7] + fVar8 * local_88[0xb];
    lVar24 = lVar24 + 0x10;
  } while (lVar24 != 0x40);
  (**(code **)(*(long *)this + 0x30))
            (this,local_148,&local_1a8,param_5,this + 0x28,0,param_6,param_7);
  fVar6 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  lVar24 = 0;
  local_98 = 0;
  _local_c8 = ZEXT416(_LC6);
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar10 = param_1[6];
  fVar11 = param_1[7];
  local_b8 = CONCAT44(_UNK_0010ed84,__LC7);
  uStack_b0 = CONCAT44(_UNK_0010ed8c,_UNK_0010ed88);
  fVar12 = param_1[8];
  fVar13 = param_1[9];
  fVar14 = param_1[10];
  fVar15 = param_1[0xb];
  local_a8 = CONCAT44(_UNK_0010eda4,__LC10);
  uStack_a0 = CONCAT44(_UNK_0010edac,_UNK_0010eda8);
  fVar16 = param_1[0xc];
  fVar17 = param_1[0xd];
  fVar18 = param_1[0xe];
  fVar19 = param_1[0xf];
  local_1e8 = (ulong)(uint)param_2 << 0x20;
  uStack_90 = 0x3f80000000000000;
  fStack_94 = param_2;
  do {
    fVar20 = *(float *)(local_c8 + lVar24);
    fVar21 = *(float *)(local_c8 + lVar24 + 4);
    fVar22 = *(float *)(local_c8 + lVar24 + 8);
    fVar23 = *(float *)(local_c8 + lVar24 + 0xc);
    *(float *)((long)local_88 + lVar24) =
         fVar23 * fVar16 + fVar20 * fVar6 + fVar21 * fVar2 + fVar22 * fVar12;
    *(float *)((long)local_88 + lVar24 + 4) =
         fVar23 * fVar17 + fVar20 * fVar7 + fVar21 * fVar3 + fVar22 * fVar13;
    *(float *)((long)local_88 + lVar24 + 8) =
         fVar23 * fVar18 + fVar20 * fVar8 + fVar21 * fVar10 + fVar22 * fVar14;
    *(float *)((long)local_88 + lVar24 + 0xc) =
         fVar23 * fVar19 + fVar20 * fVar9 + fVar21 * fVar11 + fVar22 * fVar15;
    lVar24 = lVar24 + 0x10;
  } while (lVar24 != 0x40);
  lVar24 = 0;
  do {
    fVar6 = *(float *)(local_188 + lVar24);
    fVar7 = *(float *)(local_188 + lVar24 + 4);
    fVar8 = *(float *)(local_188 + lVar24 + 8);
    fVar9 = *(float *)(local_188 + lVar24 + 0xc);
    *(float *)((long)(local_148 + 0x10) + lVar24) =
         fVar9 * local_88[0xc] + fVar6 * local_88[0] + fVar7 * local_88[4] + fVar8 * local_88[8];
    *(float *)((long)local_148 + lVar24 + 0x44) =
         fVar9 * local_88[0xd] + fVar6 * local_88[1] + fVar7 * local_88[5] + fVar8 * local_88[9];
    *(float *)((long)local_148 + lVar24 + 0x48) =
         fVar9 * local_88[0xe] + fVar6 * local_88[2] + fVar7 * local_88[6] + fVar8 * local_88[10];
    *(float *)((long)local_148 + lVar24 + 0x4c) =
         fVar9 * local_88[0xf] + fVar6 * local_88[3] + fVar7 * local_88[7] + fVar8 * local_88[0xb];
    lVar24 = lVar24 + 0x10;
  } while (lVar24 != 0x40);
  (**(code **)(*(long *)this + 0x30))
            (this,local_148 + 0x10,&local_1a8,param_5,this + 0x18,0,param_6,param_7);
  uStack_200 = (ulong)(uint)param_3;
  local_b8 = local_1e8;
  uStack_b0 = 0;
  fVar6 = param_1[4];
  fVar7 = param_1[5];
  fVar8 = param_1[6];
  fVar9 = param_1[7];
  local_a8 = 0;
  uStack_a0 = uStack_200;
  fVar2 = param_1[8];
  fVar3 = param_1[9];
  fVar10 = param_1[10];
  fVar11 = param_1[0xb];
  fVar12 = *param_1;
  fVar13 = param_1[1];
  fVar14 = param_1[2];
  fVar15 = param_1[3];
  _local_c8 = ZEXT416((uint)param_3);
  fVar16 = param_1[0xc];
  fVar17 = param_1[0xd];
  fVar18 = param_1[0xe];
  fVar19 = param_1[0xf];
  pcVar4 = *(code **)(*(long *)this + 0x30);
  lVar24 = 0;
  local_98 = __LC9;
  fStack_94 = (float)_UNK_0010ed94;
  uStack_90 = CONCAT44(_UNK_0010ed9c,_UNK_0010ed98);
  do {
    fVar20 = *(float *)(local_c8 + lVar24);
    fVar21 = *(float *)(local_c8 + lVar24 + 4);
    fVar22 = *(float *)(local_c8 + lVar24 + 8);
    fVar23 = *(float *)(local_c8 + lVar24 + 0xc);
    *(float *)((long)local_88 + lVar24) =
         fVar23 * fVar16 + fVar20 * fVar12 + fVar21 * fVar6 + fVar22 * fVar2;
    *(float *)((long)local_88 + lVar24 + 4) =
         fVar23 * fVar17 + fVar20 * fVar13 + fVar21 * fVar7 + fVar22 * fVar3;
    *(float *)((long)local_88 + lVar24 + 8) =
         fVar23 * fVar18 + fVar20 * fVar14 + fVar21 * fVar8 + fVar22 * fVar10;
    *(float *)((long)local_88 + lVar24 + 0xc) =
         fVar23 * fVar19 + fVar20 * fVar15 + fVar21 * fVar9 + fVar22 * fVar11;
    lVar24 = lVar24 + 0x10;
  } while (lVar24 != 0x40);
  (*pcVar4)(this,local_88,&local_1a8,param_5,this + 0x20,0,param_6);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::DrawCylinder(JPH::Mat44 const&, float, float, JPH::Color,
   JPH::DebugRenderer::ECastShadow, JPH::DebugRenderer::EDrawMode) */

void JPH::DebugRenderer::DrawCylinder
               (uint param_2,uint param_3,long *param_1,float *param_4,undefined4 param_5,
               undefined8 param_6)

{
  float fVar1;
  float fVar2;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long in_FS_OFFSET;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [4];
  float afStack_94 [3];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58 [18];
  long local_10;
  
  fVar28 = *param_4;
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_4[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = param_4[4];
  fVar5 = param_4[5];
  fVar6 = param_4[6];
  fVar7 = param_4[7];
  fVar8 = param_4[8];
  fVar9 = param_4[9];
  fVar10 = param_4[10];
  fVar11 = param_4[0xb];
  _local_98 = ZEXT416(param_3);
  lVar23 = 0;
  local_88 = ZEXT416(param_2) << 0x20;
  local_78 = ZEXT416(param_3) << 0x40;
  local_68 = __LC9;
  uStack_60 = _UNK_0010ed98;
  fVar12 = param_4[0xc];
  fVar13 = param_4[0xd];
  fVar14 = param_4[0xe];
  fVar15 = param_4[0xf];
  do {
    fVar16 = *(float *)(local_98 + lVar23);
    fVar17 = *(float *)(local_98 + lVar23 + 4);
    fVar18 = *(float *)(local_98 + lVar23 + 8);
    fVar19 = *(float *)(local_98 + lVar23 + 0xc);
    *(float *)((long)local_58 + lVar23) =
         fVar19 * fVar12 + fVar16 * fVar28 + fVar17 * fVar4 + fVar18 * fVar8;
    *(float *)((long)local_58 + lVar23 + 4) =
         fVar19 * fVar13 + fVar16 * fVar1 + fVar17 * fVar5 + fVar18 * fVar9;
    *(float *)((long)local_58 + lVar23 + 8) =
         fVar19 * fVar14 + fVar16 * fVar2 + fVar17 * fVar6 + fVar18 * fVar10;
    *(float *)((long)local_58 + lVar23 + 0xc) =
         fVar19 * fVar15 + fVar16 * fVar3 + fVar17 * fVar7 + fVar18 * fVar11;
    lVar23 = lVar23 + 0x10;
  } while (lVar23 != 0x40);
  lVar23 = 0;
  local_a8 = local_58[0xc];
  fStack_a4 = local_58[0xd];
  fStack_a0 = local_58[0xe];
  fStack_9c = local_58[0xf];
  do {
    fVar28 = *(float *)(param_1[7] + 0x20 + lVar23);
    fVar1 = *(float *)(param_1[7] + 0x30 + lVar23);
    auVar26._0_8_ = CONCAT44(fVar28 * local_58[lVar23 + 1],fVar28 * local_58[lVar23]);
    auVar26._8_4_ = fVar28 * local_58[lVar23 + 2];
    auVar26._12_4_ = fVar28 * local_58[lVar23 + 3];
    lVar20 = lVar23 + 1;
    lVar21 = lVar23 + 2;
    lVar22 = lVar23 + 3;
    fVar28 = fVar1 * local_58[lVar23];
    lVar23 = lVar23 + 4;
    auVar24._8_4_ = auVar26._8_4_;
    auVar24._0_8_ = auVar26._0_8_;
    auVar24._12_4_ = auVar26._12_4_;
    auVar25._4_4_ = fVar1 * local_58[lVar20];
    auVar25._0_4_ = fVar28;
    auVar25._8_4_ = fVar1 * local_58[lVar21];
    auVar25._12_4_ = fVar1 * local_58[lVar22];
    auVar25 = minps(auVar24,auVar25);
    auVar27._4_4_ = fVar1 * local_58[lVar20];
    auVar27._0_4_ = fVar28;
    auVar27._8_4_ = fVar1 * local_58[lVar21];
    auVar27._12_4_ = fVar1 * local_58[lVar22];
    auVar27 = maxps(auVar26,auVar27);
    local_58[0xc] = local_58[0xc] + auVar25._0_4_;
    local_58[0xd] = local_58[0xd] + auVar25._4_4_;
    local_58[0xe] = local_58[0xe] + auVar25._8_4_;
    local_58[0xf] = local_58[0xf] + auVar25._12_4_;
    local_a8 = local_a8 + auVar27._0_4_;
    fStack_a4 = fStack_a4 + auVar27._4_4_;
    fStack_a0 = fStack_a0 + auVar27._8_4_;
    fStack_9c = fStack_9c + auVar27._12_4_;
  } while (lVar23 != 0xc);
  local_b8 = local_58[0xc];
  fStack_b4 = local_58[0xd];
  fStack_b0 = local_58[0xe];
  fStack_ac = local_58[0xf];
  (**(code **)(*param_1 + 0x30))(param_1,local_58,&local_b8,param_5,param_1 + 7,0,param_6);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DebugRenderer::DrawOpenCone(JPH::Vec3, JPH::Vec3, JPH::Vec3, float, float, JPH::Color,
   JPH::DebugRenderer::ECastShadow, JPH::DebugRenderer::EDrawMode) */

void JPH::DebugRenderer::DrawOpenCone
               (undefined8 param_1,float param_2,undefined8 param_3,float param_4,undefined8 param_5
               ,float param_6,float param_7,float param_8,long *param_9,undefined4 param_10,
               undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float *pfVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  float afStack_50 [10];
  undefined8 local_28;
  float fStack_20;
  undefined4 uStack_1c;
  long local_10;
  
  fVar18 = (float)((ulong)param_3 >> 0x20);
  fVar17 = (float)param_3;
  uVar22 = (uint)param_7 & _LC80;
  fVar23 = (float)(uVar22 ^ _LC56 & uVar22);
  fVar24 = (float)(uVar22 ^ _LC56 & uVar22);
  fVar25 = (float)(uVar22 ^ _LC56 & uVar22);
  fVar26 = (float)(uVar22 ^ _LC56 & uVar22);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar20 = (float)(((uint)param_8 ^ _LC56) & -(uint)(param_7 < 0.0) |
                  ~-(uint)(param_7 < 0.0) & (uint)param_8);
  iVar13 = (int)(_LC17 * fVar23 + _LC19);
  fVar7 = (float)iVar13;
  fVar10 = (float)(int)(_LC17 * fVar24 + _LC19);
  fVar11 = (float)(int)(_LC17 * fVar25 + _LC19);
  fVar12 = (float)(int)(_LC17 * fVar26 + _LC19);
  uVar14 = (iVar13 << 0x1f) >> 0x1f;
  fVar7 = ((fVar23 - _LC21 * fVar7) - _LC23 * fVar7) - fVar7 * _LC25;
  fVar10 = ((fVar24 - _LC21 * fVar10) - _LC23 * fVar10) - fVar10 * _LC25;
  fVar11 = ((fVar25 - _LC21 * fVar11) - _LC23 * fVar11) - fVar11 * _LC25;
  fVar12 = ((fVar26 - _LC21 * fVar12) - _LC23 * fVar12) - fVar12 * _LC25;
  fVar23 = fVar7 * fVar7;
  fVar24 = fVar10 * fVar10;
  fVar25 = fVar11 * fVar11;
  fVar26 = fVar12 * fVar12;
  auVar16._0_4_ =
       (((((_LC58 * fVar23 + _LC60) * fVar23 + _LC62) * fVar23 + _LC64) * fVar23 + _LC66) * fVar23 +
       _LC68) * fVar23 * fVar7 + fVar7;
  auVar16._4_4_ =
       (((((_LC58 * fVar24 + _LC60) * fVar24 + _LC62) * fVar24 + _LC64) * fVar24 + _LC66) * fVar24 +
       _LC68) * fVar24 * fVar10 + fVar10;
  auVar16._8_4_ =
       (((((_LC58 * fVar25 + _LC60) * fVar25 + _LC62) * fVar25 + _LC64) * fVar25 + _LC66) * fVar25 +
       _LC68) * fVar25 * fVar11 + fVar11;
  auVar16._12_4_ =
       (((((_LC58 * fVar26 + _LC60) * fVar26 + _LC62) * fVar26 + _LC64) * fVar26 + _LC66) * fVar26 +
       _LC68) * fVar26 * fVar12 + fVar12;
  auVar19._4_4_ = _LC70;
  auVar19._0_4_ = _LC70;
  auVar19._8_4_ = _LC70;
  auVar19._12_4_ = _LC70;
  auVar19 = divps(auVar19,auVar16);
  param_8 = (float)((auVar19._0_4_ & uVar14 | ~uVar14 & (uint)auVar16._0_4_) ^ _LC56 & uVar22) *
            param_8;
  if (param_8 != 0.0) {
    afStack_50[2] = fVar20 * fVar17;
    afStack_50[3] = fVar20 * fVar18;
    afStack_50[4] = fVar20 * param_4;
    local_88 = (float)param_5;
    fStack_84 = (float)((ulong)param_5 >> 0x20);
    local_28 = param_1;
    uVar5 = local_28;
    fStack_20 = param_2;
    uStack_1c = 0x3f800000;
    afStack_50[1] = 0.0;
    fVar10 = local_88 * param_8;
    fVar11 = fStack_84 * param_8;
    afStack_50[0] = param_6 * param_8;
    afStack_50[5] = 0.0;
    lVar6 = 0;
    afStack_50[9] = 0.0;
    fVar7 = fStack_84 * fVar17 - fVar18 * local_88;
    local_58 = CONCAT44(fVar11,fVar10);
    afStack_50[6] = param_8 * (param_6 * fVar18 - param_4 * fStack_84);
    afStack_50[7] = param_8 * (local_88 * param_4 - fVar17 * param_6);
    afStack_50[8] = param_8 * fVar7;
    auVar8._12_4_ = param_8 * fVar7;
    auVar8._4_4_ = afStack_50[8];
    auVar8._0_4_ = afStack_50[8];
    auVar8._8_4_ = auVar8._12_4_;
    auVar9._4_12_ = auVar8._4_12_;
    fVar7 = afStack_50[4] * afStack_50[4] +
            afStack_50[3] * afStack_50[3] + afStack_50[2] * afStack_50[2] + 0.0;
    auVar9._0_4_ = afStack_50[8] * afStack_50[8] +
                   afStack_50[7] * afStack_50[7] + afStack_50[6] * afStack_50[6] + 0.0;
    local_28._0_4_ = (float)param_1;
    local_28._4_4_ = (float)((ulong)param_1 >> 0x20);
    fStack_6c = 1.0;
    fVar10 = afStack_50[0] * afStack_50[0] + fVar11 * fVar11 + fVar10 * fVar10 + 0.0;
    if (fVar7 <= fVar10) {
      fVar7 = fVar10;
    }
    local_68 = (float)local_28;
    fStack_64 = local_28._4_4_;
    fStack_60 = param_2;
    fStack_5c = fStack_6c;
    if (auVar9._0_4_ <= fVar7) {
      auVar9._0_4_ = fVar7;
    }
    do {
      fVar7 = *(float *)(param_9[6] + 0x20 + lVar6);
      fVar10 = *(float *)(param_9[6] + 0x30 + lVar6);
      auVar15._0_8_ =
           CONCAT44(fVar7 * *(float *)((long)&local_58 + lVar6 * 4 + 4),
                    fVar7 * *(float *)((long)&local_58 + lVar6 * 4));
      auVar15._8_4_ = fVar7 * afStack_50[lVar6];
      auVar15._12_4_ = fVar7 * afStack_50[lVar6 + 1];
      pfVar3 = afStack_50 + lVar6;
      lVar4 = lVar6 + 1;
      fVar7 = fVar10 * *(float *)((long)&local_58 + lVar6 * 4);
      fVar11 = fVar10 * *(float *)((long)&local_58 + lVar6 * 4 + 4);
      lVar6 = lVar6 + 4;
      auVar21._8_4_ = auVar15._8_4_;
      auVar21._0_8_ = auVar15._0_8_;
      auVar21._12_4_ = auVar15._12_4_;
      auVar1._4_4_ = fVar11;
      auVar1._0_4_ = fVar7;
      auVar1._8_4_ = fVar10 * *pfVar3;
      auVar1._12_4_ = fVar10 * afStack_50[lVar4];
      auVar19 = minps(auVar21,auVar1);
      auVar2._4_4_ = fVar11;
      auVar2._0_4_ = fVar7;
      auVar2._8_4_ = fVar10 * *pfVar3;
      auVar2._12_4_ = fVar10 * afStack_50[lVar4];
      auVar16 = maxps(auVar15,auVar2);
      local_28._0_4_ = (float)local_28 + auVar19._0_4_;
      local_28._4_4_ = local_28._4_4_ + auVar19._4_4_;
      param_2 = param_2 + auVar19._8_4_;
      fStack_6c = fStack_6c + auVar19._12_4_;
      local_68 = local_68 + auVar16._0_4_;
      fStack_64 = fStack_64 + auVar16._4_4_;
      fStack_60 = fStack_60 + auVar16._8_4_;
      fStack_5c = fStack_5c + auVar16._12_4_;
    } while (lVar6 != 0xc);
    local_78 = (float)local_28;
    fStack_74 = local_28._4_4_;
    fStack_70 = param_2;
    local_28 = uVar5;
    (**(code **)(*param_9 + 0x30))
              (auVar9._0_8_,param_9,&local_58,&local_78,param_10,param_9 + 6,2,param_11);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::DebugRenderer::NextFrame() */

void __thiscall JPH::DebugRenderer::NextFrame(DebugRenderer *this)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  lVar10 = *(long *)(this + 0x60);
  if ((*(int *)(this + 0x70) != 0) && (*(int *)(this + 0x74) != 0)) {
    lVar7 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0x68) + lVar7) ||
             (piVar2 = *(int **)(lVar10 + 8 + lVar7 * 0x10), piVar2 == (int *)0x0))) {
        lVar7 = lVar7 + 1;
        if (*(uint *)(this + 0x74) <= (uint)lVar7) goto LAB_00107000;
      }
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        plVar11 = *(long **)(piVar2 + 6);
        if (plVar11 != (long *)0x0) {
          if ((*(long *)(piVar2 + 2) != 0) &&
             (plVar12 = plVar11 + *(long *)(piVar2 + 2) * 2, plVar11 < plVar12)) {
            do {
              if ((long *)*plVar11 != (long *)0x0) {
                (**(code **)(*(long *)*plVar11 + 0x18))();
              }
              plVar11 = plVar11 + 2;
            } while (plVar11 < plVar12);
            plVar11 = *(long **)(piVar2 + 6);
          }
          piVar2[2] = 0;
          piVar2[3] = 0;
          (*Free)(plVar11);
        }
        (*Free)(piVar2);
      }
      lVar10 = *(long *)(this + 0x60);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(this + 0x74));
  }
LAB_00107000:
  if (lVar10 == 0) {
    uVar9 = *(undefined8 *)(this + 0x68);
    uVar8 = *(undefined8 *)(this + 0x70);
    uVar6 = *(undefined4 *)(this + 0x78);
  }
  else {
    (*Free)();
    uVar8 = 0;
    uVar6 = 0;
    uVar9 = 0;
  }
  uVar4 = *(undefined8 *)(this + 0x40);
  uVar5 = *(undefined8 *)(this + 0x48);
  uVar3 = *(undefined8 *)(this + 0x50);
  *(undefined8 *)(this + 0x48) = uVar9;
  uVar1 = *(undefined4 *)(this + 0x58);
  *(undefined8 *)(this + 0x50) = uVar8;
  *(undefined8 *)(this + 0x40) = 0;
  lVar10 = *(long *)(this + 0xa0);
  *(undefined4 *)(this + 0x58) = uVar6;
  *(undefined8 *)(this + 0x70) = uVar3;
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined8 *)(this + 0x60) = uVar4;
  *(undefined8 *)(this + 0x68) = uVar5;
  if ((*(int *)(this + 0xb0) != 0) && (*(int *)(this + 0xb4) != 0)) {
    lVar7 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0xa8) + lVar7) ||
             (piVar2 = *(int **)(lVar10 + 0x10 + lVar7 * 0x18), piVar2 == (int *)0x0))) {
        lVar7 = lVar7 + 1;
        if (*(uint *)(this + 0xb4) <= (uint)lVar7) goto LAB_001070b0;
      }
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        plVar11 = *(long **)(piVar2 + 6);
        if (plVar11 != (long *)0x0) {
          if ((*(long *)(piVar2 + 2) != 0) &&
             (plVar12 = plVar11 + *(long *)(piVar2 + 2) * 2, plVar11 < plVar12)) {
            do {
              if ((long *)*plVar11 != (long *)0x0) {
                (**(code **)(*(long *)*plVar11 + 0x18))();
              }
              plVar11 = plVar11 + 2;
            } while (plVar11 < plVar12);
            plVar11 = *(long **)(piVar2 + 6);
          }
          piVar2[2] = 0;
          piVar2[3] = 0;
          (*Free)(plVar11);
        }
        (*Free)(piVar2);
      }
      lVar10 = *(long *)(this + 0xa0);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(this + 0xb4));
  }
LAB_001070b0:
  if (lVar10 == 0) {
    uVar9 = *(undefined8 *)(this + 0xa8);
    uVar8 = *(undefined8 *)(this + 0xb0);
    uVar6 = *(undefined4 *)(this + 0xb8);
  }
  else {
    (*Free)();
    uVar8 = 0;
    uVar6 = 0;
    uVar9 = 0;
  }
  uVar4 = *(undefined8 *)(this + 0x80);
  uVar5 = *(undefined8 *)(this + 0x88);
  uVar3 = *(undefined8 *)(this + 0x90);
  *(undefined8 *)(this + 0x90) = uVar8;
  uVar1 = *(undefined4 *)(this + 0x98);
  *(undefined8 *)(this + 0x88) = uVar9;
  *(undefined4 *)(this + 0x98) = uVar6;
  lVar10 = *(long *)(this + 0xe0);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xb0) = uVar3;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined8 *)(this + 0xa0) = uVar4;
  *(undefined8 *)(this + 0xa8) = uVar5;
  if ((*(int *)(this + 0xf0) != 0) && (*(int *)(this + 0xf4) != 0)) {
    lVar7 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0xe8) + lVar7) ||
             (piVar2 = *(int **)(lVar10 + 8 + lVar7 * 0x10), piVar2 == (int *)0x0))) {
        lVar7 = lVar7 + 1;
        if (*(uint *)(this + 0xf4) <= (uint)lVar7) goto LAB_00107180;
      }
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        plVar11 = *(long **)(piVar2 + 6);
        if (plVar11 != (long *)0x0) {
          if ((*(long *)(piVar2 + 2) != 0) &&
             (plVar12 = plVar11 + *(long *)(piVar2 + 2) * 2, plVar11 < plVar12)) {
            do {
              if ((long *)*plVar11 != (long *)0x0) {
                (**(code **)(*(long *)*plVar11 + 0x18))();
              }
              plVar11 = plVar11 + 2;
            } while (plVar11 < plVar12);
            plVar11 = *(long **)(piVar2 + 6);
          }
          piVar2[2] = 0;
          piVar2[3] = 0;
          (*Free)(plVar11);
        }
        (*Free)(piVar2);
      }
      lVar10 = *(long *)(this + 0xe0);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(this + 0xf4));
  }
LAB_00107180:
  if (lVar10 == 0) {
    uVar9 = *(undefined8 *)(this + 0xe8);
    uVar8 = *(undefined8 *)(this + 0xf0);
    uVar6 = *(undefined4 *)(this + 0xf8);
  }
  else {
    (*Free)();
    uVar8 = 0;
    uVar6 = 0;
    uVar9 = 0;
  }
  uVar3 = *(undefined8 *)(this + 0xd0);
  uVar4 = *(undefined8 *)(this + 0xc0);
  uVar5 = *(undefined8 *)(this + 200);
  *(undefined8 *)(this + 0xd0) = uVar8;
  uVar1 = *(undefined4 *)(this + 0xd8);
  *(undefined8 *)(this + 200) = uVar9;
  *(undefined8 *)(this + 0xf0) = uVar3;
  *(undefined4 *)(this + 0xd8) = uVar6;
  lVar10 = *(long *)(this + 0x120);
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xf8) = uVar1;
  *(undefined8 *)(this + 0xe0) = uVar4;
  *(undefined8 *)(this + 0xe8) = uVar5;
  if ((*(int *)(this + 0x130) != 0) && (*(int *)(this + 0x134) != 0)) {
    lVar7 = 0;
    do {
      while ((-1 < *(char *)(*(long *)(this + 0x128) + lVar7) ||
             (piVar2 = *(int **)(lVar10 + 0x10 + lVar7 * 0x18), piVar2 == (int *)0x0))) {
        lVar7 = lVar7 + 1;
        if (*(uint *)(this + 0x134) <= (uint)lVar7) goto LAB_00107250;
      }
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        plVar11 = *(long **)(piVar2 + 6);
        if (plVar11 != (long *)0x0) {
          if ((*(long *)(piVar2 + 2) != 0) &&
             (plVar12 = plVar11 + *(long *)(piVar2 + 2) * 2, plVar11 < plVar12)) {
            do {
              if ((long *)*plVar11 != (long *)0x0) {
                (**(code **)(*(long *)*plVar11 + 0x18))();
              }
              plVar11 = plVar11 + 2;
            } while (plVar11 < plVar12);
            plVar11 = *(long **)(piVar2 + 6);
          }
          piVar2[2] = 0;
          piVar2[3] = 0;
          (*Free)(plVar11);
        }
        (*Free)(piVar2);
      }
      lVar10 = *(long *)(this + 0x120);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(this + 0x134));
  }
LAB_00107250:
  if (lVar10 == 0) {
    uVar9 = *(undefined8 *)(this + 0x128);
    uVar8 = *(undefined8 *)(this + 0x130);
    uVar6 = *(undefined4 *)(this + 0x138);
  }
  else {
    (*Free)();
    uVar8 = 0;
    uVar6 = 0;
    uVar9 = 0;
  }
  uVar4 = *(undefined8 *)(this + 0x100);
  uVar5 = *(undefined8 *)(this + 0x108);
  uVar3 = *(undefined8 *)(this + 0x110);
  *(undefined8 *)(this + 0x100) = 0;
  uVar1 = *(undefined4 *)(this + 0x118);
  *(undefined8 *)(this + 0x108) = uVar9;
  *(undefined8 *)(this + 0x110) = uVar8;
  *(undefined4 *)(this + 0x118) = uVar6;
  *(undefined8 *)(this + 0x130) = uVar3;
  *(undefined4 *)(this + 0x138) = uVar1;
  *(undefined8 *)(this + 0x120) = uVar4;
  *(undefined8 *)(this + 0x128) = uVar5;
  return;
}



/* JPH::DebugRenderer::CreateSwingLimitGeometry(int, JPH::Vec3 const*) */

undefined4 * __thiscall
JPH::DebugRenderer::CreateSwingLimitGeometry(DebugRenderer *this,int param_1,Vec3 *param_2)

{
  Vec3 *pVVar1;
  Vec3 *pVVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined1 (*pauVar15) [12];
  undefined1 (*pauVar16) [12];
  ulong uVar17;
  int iVar18;
  undefined1 (*pauVar19) [12];
  int iVar20;
  undefined1 *puVar21;
  undefined1 *puVar23;
  undefined1 *puVar27;
  int *piVar28;
  undefined1 (*pauVar29) [12];
  int *piVar30;
  long in_FS_OFFSET;
  bool bVar31;
  float fVar32;
  float fVar37;
  undefined1 auVar33 [12];
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [12];
  undefined1 auStack_98 [12];
  int local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  long *local_60;
  long *local_58;
  undefined4 local_50;
  long local_40;
  undefined1 *puVar22;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  
  uVar12 = (undefined4)Color::sWhite;
  fVar11 = _LC8;
  fVar10 = _LC19;
  iVar6 = param_1 * 2;
  puVar21 = auStack_98;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = (long)iVar6 * 0x24 + 0x17;
  puVar22 = auStack_98;
  puVar23 = auStack_98;
  while (puVar22 != auStack_98 + -(uVar17 & 0xfffffffffffff000)) {
    puVar21 = puVar23 + -0x1000;
    *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
    puVar22 = puVar23 + -0x1000;
    puVar23 = puVar23 + -0x1000;
  }
  uVar17 = (ulong)((uint)uVar17 & 0xff0);
  lVar5 = -uVar17;
  puVar23 = puVar21 + lVar5;
  puVar24 = puVar21 + lVar5;
  puVar25 = puVar21 + lVar5;
  puVar26 = puVar21 + lVar5;
  if (uVar17 != 0) {
    *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(puVar21 + -8);
  }
  local_8c = param_1 * 3;
  pauVar29 = (undefined1 (*) [12])((ulong)(puVar21 + lVar5 + 0xf) & 0xfffffffffffffff0);
  if (param_1 < 1) {
    uVar17 = (long)local_8c * 4 + 0x17;
    puVar24 = puVar21 + lVar5;
    while (puVar26 != puVar21 + (lVar5 - (uVar17 & 0xfffffffffffff000))) {
      puVar23 = puVar24 + -0x1000;
      *(undefined8 *)(puVar24 + -8) = *(undefined8 *)(puVar24 + -8);
      puVar26 = puVar24 + -0x1000;
      puVar24 = puVar24 + -0x1000;
    }
    uVar17 = (ulong)((uint)uVar17 & 0xff0);
    lVar5 = -uVar17;
    puVar27 = puVar23 + lVar5;
    if (uVar17 != 0) {
      *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
    }
    piVar30 = (int *)((ulong)(puVar23 + lVar5 + 0xf) & 0xfffffffffffffff0);
  }
  else {
    pauVar19 = pauVar29;
    uVar17 = 1;
    do {
      auVar41 = SUB1612((undefined1  [16])0x0,0);
      pVVar1 = param_2 + (long)(int)((long)((ulong)(uint)((int)uVar17 >> 0x1f) << 0x20 |
                                           uVar17 & 0xffffffff) % (long)param_1) * 0x10;
      pVVar2 = param_2 + uVar17 * 0x10 + -0x10;
      fVar7 = *(float *)pVVar2;
      fVar8 = *(float *)(pVVar2 + 4);
      fVar9 = *(float *)(pVVar2 + 8);
      pVVar2 = param_2 + (long)((param_1 + -2 + (int)uVar17) % param_1) * 0x10;
      fVar32 = *(float *)(pVVar2 + 4) * fVar7 - *(float *)pVVar2 * fVar8;
      fVar37 = *(float *)(pVVar2 + 8) * fVar8 - *(float *)(pVVar2 + 4) * fVar9;
      fVar38 = *(float *)pVVar2 * fVar9 - *(float *)(pVVar2 + 8) * fVar7;
      fVar40 = fVar32 * fVar32 + fVar38 * fVar38 + fVar37 * fVar37 + 0.0;
      if (fVar11 < fVar40) {
        fVar40 = SQRT(fVar40);
        auVar34._4_4_ = fVar38;
        auVar34._0_4_ = fVar37;
        auVar34._8_4_ = fVar32;
        auVar34._12_4_ = fVar32;
        auVar35._4_4_ = fVar40;
        auVar35._0_4_ = fVar40;
        auVar35._8_4_ = fVar40;
        auVar35._12_4_ = fVar40;
        auVar35 = divps(auVar34,auVar35);
        auVar41 = auVar35._0_12_;
      }
      fVar32 = fVar8 * *(float *)pVVar1 - *(float *)(pVVar1 + 4) * fVar7;
      fVar37 = fVar9 * *(float *)(pVVar1 + 4) - *(float *)(pVVar1 + 8) * fVar8;
      fVar38 = fVar7 * *(float *)(pVVar1 + 8) - *(float *)pVVar1 * fVar9;
      fVar40 = fVar38 * fVar38 + fVar37 * fVar37 + 0.0 + fVar32 * fVar32;
      auVar33 = SUB1612((undefined1  [16])0x0,0);
      if (fVar11 < fVar40) {
        fVar40 = SQRT(fVar40);
        auVar39._4_4_ = fVar38;
        auVar39._0_4_ = fVar37;
        auVar39._8_4_ = fVar32;
        auVar39._12_4_ = fVar32;
        auVar4._4_4_ = fVar40;
        auVar4._0_4_ = fVar40;
        auVar4._8_4_ = fVar40;
        auVar4._12_4_ = fVar40;
        auVar35 = divps(auVar39,auVar4);
        auVar33 = auVar35._0_12_;
      }
      *(undefined8 *)*pauVar19 = 0;
      *(undefined4 *)(*pauVar19 + 8) = 0;
      *(undefined4 *)(pauVar19[2] + 8) = uVar12;
      fVar32 = (auVar33._0_4_ + auVar41._0_4_) * fVar10;
      fVar37 = (auVar33._4_4_ + auVar41._4_4_) * fVar10;
      fVar38 = (auVar33._8_4_ + auVar41._8_4_) * fVar10;
      *(undefined8 *)pauVar19[2] = 0;
      *(undefined4 *)(pauVar19[5] + 8) = uVar12;
      *(undefined8 *)pauVar19[5] = 0;
      *(ulong *)pauVar19[1] = CONCAT44(fVar37,fVar32);
      *(float *)(pauVar19[1] + 8) = fVar38;
      *(ulong *)(pauVar19[4] + 4) = CONCAT44(fVar38,fVar37);
      *(float *)pauVar19[3] = fVar7;
      *(float *)(pauVar19[3] + 4) = fVar8;
      *(float *)(pauVar19[3] + 8) = fVar9;
      *(float *)pauVar19[4] = fVar32;
      bVar31 = (long)param_1 != uVar17;
      pauVar19 = pauVar19 + 6;
      uVar17 = uVar17 + 1;
    } while (bVar31);
    uVar17 = (long)local_8c * 4 + 0x17;
    puVar23 = puVar21 + lVar5;
    while (puVar25 != puVar21 + (lVar5 - (uVar17 & 0xfffffffffffff000))) {
      puVar24 = puVar23 + -0x1000;
      *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
      puVar25 = puVar23 + -0x1000;
      puVar23 = puVar23 + -0x1000;
    }
    uVar17 = (ulong)((uint)uVar17 & 0xff0);
    lVar5 = -uVar17;
    puVar27 = puVar24 + lVar5;
    if (uVar17 != 0) {
      *(undefined8 *)(puVar24 + -8) = *(undefined8 *)(puVar24 + -8);
    }
    iVar18 = 3;
    piVar30 = (int *)((ulong)(puVar24 + lVar5 + 0xf) & 0xfffffffffffffff0);
    piVar28 = piVar30;
    do {
      *piVar28 = iVar18 + -3;
      iVar20 = iVar18 % iVar6;
      iVar13 = iVar18 + -2;
      iVar18 = iVar18 + 2;
      piVar28[1] = iVar20;
      piVar28[2] = iVar13;
      piVar28 = piVar28 + 3;
    } while (iVar18 != iVar6 + 3);
  }
  local_78._8_8_ = local_78._0_8_;
  local_78._0_8_ = (long)iVar6 * 0x24;
  *(undefined8 *)(puVar27 + -8) = 0x10778e;
  puVar14 = (undefined4 *)(*Allocate)(0x40);
  pauVar19 = (undefined1 (*) [12])(*pauVar29 + local_78._0_8_);
  if (pauVar29 < pauVar19) {
    local_78._4_4_ = _LC46;
    local_78._0_4_ = _LC46;
    local_78._8_4_ = _LC46;
    local_78._12_4_ = _LC46;
    local_88._4_4_ = _LC48;
    local_88._0_4_ = _LC48;
    local_88._8_4_ = _LC48;
    local_88._12_4_ = _LC48;
    pauVar15 = pauVar29;
    do {
      pauVar16 = pauVar15 + 3;
      auVar36._12_4_ = *(undefined4 *)(*pauVar15 + 8);
      auVar36._0_12_ = *pauVar15;
      local_88 = minps(local_88,auVar36);
      local_78 = maxps(local_78,auVar36);
      pauVar15 = pauVar16;
    } while (pauVar16 < pauVar19);
  }
  else {
    local_78._4_4_ = _LC46;
    local_78._0_4_ = _LC46;
    local_78._8_4_ = _LC46;
    local_78._12_4_ = _LC46;
    local_88._4_4_ = _LC48;
    local_88._0_4_ = _LC48;
    local_88._8_4_ = _LC48;
    local_88._12_4_ = _LC48;
  }
  pcVar3 = *(code **)(*(long *)this + 0x28);
  *(undefined8 *)(puVar27 + -8) = 0x10780d;
  (*pcVar3)(&local_60,this,pauVar29,iVar6,piVar30,local_8c);
  *puVar14 = 0;
  *(undefined8 *)(puVar14 + 6) = 0;
  local_58 = local_60;
  *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(puVar14 + 8) = local_88._0_8_;
  *(undefined8 *)(puVar14 + 10) = local_88._8_8_;
  *(undefined8 *)(puVar14 + 0xc) = local_78._0_8_;
  *(undefined8 *)(puVar14 + 0xe) = local_78._8_8_;
  if (local_60 != (long *)0x0) {
    pcVar3 = *(code **)(*local_60 + 0x10);
    *(undefined8 *)(puVar27 + -8) = 0x10784a;
    (*pcVar3)();
  }
  local_50 = 0x7f7fffff;
  *(undefined8 *)(puVar27 + -8) = 0x10785d;
  Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>>::push_back
            ((Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
             (puVar14 + 2),(LOD *)&local_58);
  if (local_58 != (long *)0x0) {
    pcVar3 = *(code **)(*local_58 + 0x18);
    *(undefined8 *)(puVar27 + -8) = 0x10786c;
    (*pcVar3)();
  }
  if (local_60 != (long *)0x0) {
    pcVar3 = *(code **)(*local_60 + 0x18);
    *(undefined8 *)(puVar27 + -8) = 0x10787b;
    (*pcVar3)();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar14;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar27 + -8) = &UNK_0010792d;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::Initialize() */

void __thiscall JPH::DebugRenderer::Initialize(DebugRenderer *this)

{
  long *plVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  float fVar26;
  undefined4 uVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar30;
  float fVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  uint uVar38;
  long local_180;
  int local_14c;
  ulong local_138;
  long local_130;
  ulong local_118;
  float *local_f0;
  long *local_d0;
  long *local_c8;
  float local_c0;
  undefined1 local_b8 [16];
  long local_a8;
  float local_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 local_68 [16];
  code *local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (undefined1  [16])0x0;
  local_98 = 0.0;
  uStack_94 = 0;
  fStack_90 = 0.0;
  fStack_8c = 0.0;
  local_a8 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  CreateQuad(0x3f800000bf800000,0xbf800000bf800000,0x3f800000bf800000,0x3f8000003f800000,
             0x3f8000003f800000,0x3f8000003f800000,0x3f8000003f800000,0xbf800000bf800000,this,
             (LOD *)&local_98,local_b8);
  CreateQuad(0xbf800000bf800000,0xbf800000bf800000,0xbf8000003f800000,0xbf800000bf800000,
             0xbf8000003f800000,0x3f8000003f800000,0xbf800000bf800000,0x3f8000003f800000,this,
             (LOD *)&local_98,local_b8);
  CreateQuad(0x3f800000bf800000,0xbf800000bf800000,0xbf800000bf800000,0xbf800000bf800000,
             0xbf800000bf800000,0x3f8000003f800000,0x3f800000bf800000,0x3f8000003f800000,this,
             (LOD *)&local_98,local_b8);
  CreateQuad(0x3f8000003f800000,0x3f8000003f800000,0xbf8000003f800000,0x3f8000003f800000,
             0xbf8000003f800000,0xbf800000bf800000,0x3f8000003f800000,0xbf800000bf800000,this,
             (LOD *)&local_98,local_b8);
  CreateQuad(0x3f800000bf800000,0x3f8000003f800000,0xbf800000bf800000,0x3f8000003f800000,
             0xbf8000003f800000,0x3f8000003f800000,0x3f8000003f800000,0x3f8000003f800000,this,
             (LOD *)&local_98,local_b8);
  CreateQuad(0x3f800000bf800000,0xbf800000bf800000,0x3f8000003f800000,0xbf800000bf800000,
             0xbf8000003f800000,0xbf800000bf800000,0xbf800000bf800000,0xbf800000bf800000,this,
             (LOD *)&local_98,local_b8);
  piVar9 = (int *)(*Allocate)(0x40);
  lVar20 = local_a8;
  lVar14 = CONCAT44(uStack_84,uStack_88);
  lVar17 = 0;
  if (CONCAT44(uStack_94,local_98) != 0) {
    lVar17 = lVar14;
  }
  lVar10 = 0;
  if (local_b8._0_8_ != 0) {
    lVar10 = local_a8;
  }
  (**(code **)(*(long *)this + 0x28))(&local_d0,this,lVar10,local_b8._0_8_ & 0xffffffff,lVar17);
  uVar5 = _UNK_0010eec8;
  uVar4 = CONCAT44(_UNK_0010eec4,_LC70);
  *piVar9 = 0;
  *(undefined8 *)(piVar9 + 8) = uVar4;
  *(undefined8 *)(piVar9 + 10) = uVar5;
  uVar4 = CONCAT44(_UNK_0010ee44,__LC32);
  uVar5 = CONCAT44(_UNK_0010ee4c,_UNK_0010ee48);
  piVar9[6] = 0;
  piVar9[7] = 0;
  *(undefined1 (*) [16])(piVar9 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(piVar9 + 0xc) = uVar4;
  *(undefined8 *)(piVar9 + 0xe) = uVar5;
  local_c8 = local_d0;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  local_c0 = 3.4028235e+38;
  Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>>::push_back
            ((Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
             (piVar9 + 2),(LOD *)&local_c8);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x18))();
  }
  piVar11 = *(int **)(this + 8);
  if (piVar9 != piVar11) {
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        plVar21 = *(long **)(piVar11 + 6);
        if (plVar21 != (long *)0x0) {
          if ((*(long *)(piVar11 + 2) != 0) &&
             (plVar1 = plVar21 + *(long *)(piVar11 + 2) * 2, plVar21 < plVar1)) {
            do {
              if ((long *)*plVar21 != (long *)0x0) {
                (**(code **)(*(long *)*plVar21 + 0x18))();
              }
              plVar21 = plVar21 + 2;
            } while (plVar21 < plVar1);
            plVar21 = *(long **)(piVar11 + 6);
          }
          piVar11[2] = 0;
          piVar11[3] = 0;
          (*Free)(plVar21);
        }
        (*Free)(piVar11);
      }
    }
    *(int **)(this + 8) = piVar9;
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
    lVar14 = CONCAT44(uStack_84,uStack_88);
    lVar20 = local_a8;
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x18))();
  }
  if (lVar14 != 0) {
    (*Free)(lVar14);
  }
  if (lVar20 != 0) {
    (*Free)(lVar20);
  }
  piVar11 = (int *)(*Allocate)(0x40);
  uVar5 = _UNK_0010eec8;
  uVar4 = CONCAT44(_UNK_0010eec4,_LC70);
  piVar9 = *(int **)(this + 0x10);
  *piVar11 = 0;
  *(undefined8 *)(piVar11 + 8) = uVar4;
  *(undefined8 *)(piVar11 + 10) = uVar5;
  uVar4 = CONCAT44(_UNK_0010ee44,__LC32);
  uVar5 = CONCAT44(_UNK_0010ee4c,_UNK_0010ee48);
  piVar11[6] = 0;
  piVar11[7] = 0;
  *(undefined1 (*) [16])(piVar11 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(piVar11 + 0xc) = uVar4;
  *(undefined8 *)(piVar11 + 0xe) = uVar5;
  if (piVar11 != piVar9) {
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        plVar21 = *(long **)(piVar9 + 6);
        if (plVar21 != (long *)0x0) {
          if ((*(long *)(piVar9 + 2) != 0) &&
             (plVar1 = plVar21 + *(long *)(piVar9 + 2) * 2, plVar21 < plVar1)) {
            do {
              if ((long *)*plVar21 != (long *)0x0) {
                (**(code **)(*(long *)*plVar21 + 0x18))();
              }
              plVar21 = plVar21 + 2;
            } while (plVar21 < plVar1);
            plVar21 = *(long **)(piVar9 + 6);
          }
          piVar9[2] = 0;
          piVar9[3] = 0;
          (*Free)(plVar21);
        }
        (*Free)(piVar9);
      }
    }
    *(int **)(this + 0x10) = piVar11;
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  piVar11 = (int *)(*Allocate)(0x40);
  uVar5 = _UNK_0010eec8;
  uVar4 = CONCAT44(_UNK_0010eec4,_LC70);
  piVar9 = *(int **)(this + 0x28);
  *(undefined1 (*) [16])(piVar11 + 2) = (undefined1  [16])0x0;
  uVar7 = _UNK_0010eed8;
  uVar6 = __LC71;
  *piVar11 = 0;
  piVar11[6] = 0;
  piVar11[7] = 0;
  *(undefined8 *)(piVar11 + 8) = uVar4;
  *(undefined8 *)(piVar11 + 10) = uVar5;
  *(undefined8 *)(piVar11 + 0xc) = uVar6;
  *(undefined8 *)(piVar11 + 0xe) = uVar7;
  if (piVar11 != piVar9) {
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        plVar21 = *(long **)(piVar9 + 6);
        if (plVar21 != (long *)0x0) {
          if ((*(long *)(piVar9 + 2) != 0) &&
             (plVar1 = plVar21 + *(long *)(piVar9 + 2) * 2, plVar21 < plVar1)) {
            do {
              if ((long *)*plVar21 != (long *)0x0) {
                (**(code **)(*(long *)*plVar21 + 0x18))();
              }
              plVar21 = plVar21 + 2;
            } while (plVar21 < plVar1);
            plVar21 = *(long **)(piVar9 + 6);
          }
          piVar9[2] = 0;
          piVar9[3] = 0;
          (*Free)(plVar21);
        }
        (*Free)(piVar9);
      }
    }
    *(int **)(this + 0x28) = piVar11;
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  piVar11 = (int *)(*Allocate)(0x40);
  uVar5 = _UNK_0010eee8;
  uVar4 = __LC72;
  piVar9 = *(int **)(this + 0x18);
  *piVar11 = 0;
  *(undefined8 *)(piVar11 + 8) = uVar4;
  *(undefined8 *)(piVar11 + 10) = uVar5;
  uVar4 = CONCAT44(_UNK_0010ee44,__LC32);
  uVar5 = CONCAT44(_UNK_0010ee4c,_UNK_0010ee48);
  piVar11[6] = 0;
  piVar11[7] = 0;
  *(undefined1 (*) [16])(piVar11 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(piVar11 + 0xc) = uVar4;
  *(undefined8 *)(piVar11 + 0xe) = uVar5;
  if (piVar11 != piVar9) {
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        plVar21 = *(long **)(piVar9 + 6);
        if (plVar21 != (long *)0x0) {
          if ((*(long *)(piVar9 + 2) != 0) &&
             (plVar1 = plVar21 + *(long *)(piVar9 + 2) * 2, plVar21 < plVar1)) {
            do {
              if ((long *)*plVar21 != (long *)0x0) {
                (**(code **)(*(long *)*plVar21 + 0x18))();
              }
              plVar21 = plVar21 + 2;
            } while (plVar21 < plVar1);
            plVar21 = *(long **)(piVar9 + 6);
          }
          piVar9[2] = 0;
          piVar9[3] = 0;
          (*Free)(plVar21);
        }
        (*Free)(piVar9);
      }
    }
    *(int **)(this + 0x18) = piVar11;
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  piVar11 = (int *)(*Allocate)(0x40);
  uVar5 = _UNK_0010eec8;
  uVar4 = CONCAT44(_UNK_0010eec4,_LC70);
  piVar9 = *(int **)(this + 0x20);
  *piVar11 = 0;
  *(undefined8 *)(piVar11 + 8) = uVar4;
  *(undefined8 *)(piVar11 + 10) = uVar5;
  uVar4 = CONCAT44(_UNK_0010ee44,__LC32);
  uVar5 = CONCAT44(_UNK_0010ee4c,_UNK_0010ee48);
  piVar11[6] = 0;
  piVar11[7] = 0;
  *(undefined1 (*) [16])(piVar11 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(piVar11 + 0xc) = uVar4;
  *(undefined8 *)(piVar11 + 0xe) = uVar5;
  if (piVar11 != piVar9) {
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        plVar21 = *(long **)(piVar9 + 6);
        if (plVar21 != (long *)0x0) {
          if ((*(long *)(piVar9 + 2) != 0) &&
             (plVar1 = plVar21 + *(long *)(piVar9 + 2) * 2, plVar21 < plVar1)) {
            do {
              if ((long *)*plVar21 != (long *)0x0) {
                (**(code **)(*(long *)*plVar21 + 0x18))();
              }
              plVar21 = plVar21 + 2;
            } while (plVar21 < plVar1);
            plVar21 = *(long **)(piVar9 + 6);
          }
          piVar9[2] = 0;
          piVar9[3] = 0;
          (*Free)(plVar21);
        }
        (*Free)(piVar9);
      }
    }
    *(int **)(this + 0x20) = piVar11;
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  piVar11 = (int *)(*Allocate)(0x40);
  uVar5 = _UNK_0010eee8;
  uVar4 = __LC72;
  piVar9 = *(int **)(this + 0x30);
  *piVar11 = 0;
  *(undefined8 *)(piVar11 + 8) = uVar4;
  *(undefined8 *)(piVar11 + 10) = uVar5;
  uVar4 = CONCAT44(_UNK_0010ee44,__LC32);
  uVar5 = CONCAT44(_UNK_0010ee4c,_UNK_0010ee48);
  piVar11[6] = 0;
  piVar11[7] = 0;
  *(undefined1 (*) [16])(piVar11 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(piVar11 + 0xc) = uVar4;
  *(undefined8 *)(piVar11 + 0xe) = uVar5;
  if (piVar11 != piVar9) {
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        plVar21 = *(long **)(piVar9 + 6);
        if (plVar21 != (long *)0x0) {
          if ((*(long *)(piVar9 + 2) != 0) &&
             (plVar1 = plVar21 + *(long *)(piVar9 + 2) * 2, plVar21 < plVar1)) {
            do {
              if ((long *)*plVar21 != (long *)0x0) {
                (**(code **)(*(long *)*plVar21 + 0x18))();
              }
              plVar21 = plVar21 + 2;
            } while (plVar21 < plVar1);
            plVar21 = *(long **)(piVar9 + 6);
          }
          piVar9[2] = 0;
          piVar9[3] = 0;
          (*Free)(plVar21);
        }
        (*Free)(piVar9);
      }
    }
    *(int **)(this + 0x30) = piVar11;
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  piVar11 = (int *)(*Allocate)(0x40);
  uVar5 = _UNK_0010eec8;
  uVar4 = CONCAT44(_UNK_0010eec4,_LC70);
  piVar9 = *(int **)(this + 0x38);
  *piVar11 = 0;
  *(undefined8 *)(piVar11 + 8) = uVar4;
  *(undefined8 *)(piVar11 + 10) = uVar5;
  uVar4 = CONCAT44(_UNK_0010ee44,__LC32);
  uVar5 = CONCAT44(_UNK_0010ee4c,_UNK_0010ee48);
  piVar11[6] = 0;
  piVar11[7] = 0;
  *(undefined1 (*) [16])(piVar11 + 2) = (undefined1  [16])0x0;
  *(undefined8 *)(piVar11 + 0xc) = uVar4;
  *(undefined8 *)(piVar11 + 0xe) = uVar5;
  if (piVar11 != piVar9) {
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        plVar21 = *(long **)(piVar9 + 6);
        if (plVar21 != (long *)0x0) {
          if ((*(long *)(piVar9 + 2) != 0) &&
             (plVar1 = plVar21 + *(long *)(piVar9 + 2) * 2, plVar21 < plVar1)) {
            do {
              if ((long *)*plVar21 != (long *)0x0) {
                (**(code **)(*(long *)*plVar21 + 0x18))();
              }
              plVar21 = plVar21 + 2;
            } while (plVar21 < plVar1);
            plVar21 = *(long **)(piVar9 + 6);
          }
          piVar9[2] = 0;
          piVar9[3] = 0;
          (*Free)(plVar21);
        }
        (*Free)(piVar9);
      }
    }
    *(int **)(this + 0x38) = piVar11;
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  local_14c = 4;
  local_f0 = (float *)&sLODDistanceForLevel;
  do {
    local_68 = (undefined1  [16])0x0;
    fVar3 = *local_f0;
    lVar14 = *(long *)(this + 0x10);
    local_58 = std::
               _Function_handler<JPH::Vec3(JPH::Vec3),JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>
               ::_M_manager;
    uStack_50 = 0x100000;
    CreateTriangleBatchForConvex((LOD *)&local_98,this,local_68,local_14c,0);
    fStack_90 = fVar3;
    Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>>::push_back
              ((Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
               (lVar14 + 8),(LOD *)&local_98);
    if ((long *)CONCAT44(uStack_94,local_98) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_94,local_98) + 0x18))();
    }
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    local_b8 = (undefined1  [16])0x0;
    local_98 = 0.0;
    uStack_94 = 0;
    fStack_90 = 0.0;
    fStack_8c = 0.0;
    local_c8 = (long *)_LC50;
    local_58 = std::
               _Function_handler<JPH::Vec3(JPH::Vec3),JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>
               ::_M_manager;
    uStack_50 = 0x100000;
    local_68 = (undefined1  [16])0x0;
    local_a8 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    Create8thSphere(0xbf800000,0,0xbf80000000000000,0,0,0x3f8000003f800000,this,(LOD *)&local_98,
                    local_b8,(LOD *)&local_c8,local_68,local_14c);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    local_c8 = (long *)CONCAT44(_LC51._4_4_,(undefined4)_LC51);
    local_68 = (undefined1  [16])0x0;
    local_58 = std::
               _Function_handler<JPH::Vec3(JPH::Vec3),JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>
               ::_M_manager;
    uStack_50 = 0x100000;
    Create8thSphere(0xbf80000000000000,0,0x3f800000,0,0,0x3f8000003f800000,this,(LOD *)&local_98,
                    local_b8,(LOD *)&local_c8,local_68,local_14c);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    local_68 = (undefined1  [16])0x0;
    local_58 = std::
               _Function_handler<JPH::Vec3(JPH::Vec3),JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>
               ::_M_manager;
    uStack_50 = 0x100000;
    local_c8 = (long *)_LC50;
    Create8thSphere(0x3f800000,0,0xbf80000000000000,0,0,0xbf800000bf800000,this,(LOD *)&local_98,
                    local_b8,(LOD *)&local_c8,local_68,local_14c);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    local_c8 = (long *)CONCAT44(_LC51._4_4_,(undefined4)_LC51);
    local_68 = (undefined1  [16])0x0;
    local_58 = std::
               _Function_handler<JPH::Vec3(JPH::Vec3),JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>
               ::_M_manager;
    uStack_50 = 0x100000;
    Create8thSphere(0xbf80000000000000,0,0xbf800000,0,0,0xbf800000bf800000,this,(LOD *)&local_98,
                    local_b8,(LOD *)&local_c8,local_68,local_14c);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    lVar14 = *(long *)(this + 0x28);
    lVar20 = CONCAT44(uStack_84,uStack_88);
    if (CONCAT44(uStack_94,local_98) == 0) {
      lVar20 = 0;
    }
    lVar17 = local_a8;
    if (local_b8._0_8_ == 0) {
      lVar17 = 0;
    }
    (**(code **)(*(long *)this + 0x28))
              ((LOD *)&local_c8,this,lVar17,local_b8._0_8_ & 0xffffffff,lVar20);
    local_c0 = fVar3;
    Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>>::push_back
              ((Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
               (lVar14 + 8),(LOD *)&local_c8);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x18))();
    }
    if (CONCAT44(uStack_84,uStack_88) != 0) {
      local_98 = 0.0;
      uStack_94 = 0;
      (*Free)();
    }
    if (local_a8 != 0) {
      auVar36._8_8_ = 0;
      auVar36._0_8_ = local_b8._8_8_;
      local_b8 = auVar36 << 0x40;
      (*Free)();
    }
    local_c8 = (long *)CONCAT44(_LC51._4_4_,(undefined4)_LC51);
    local_b8 = (undefined1  [16])0x0;
    local_98 = 0.0;
    uStack_94 = 0;
    fStack_90 = 0.0;
    fStack_8c = 0.0;
    local_58 = std::
               _Function_handler<JPH::Vec3(JPH::Vec3),JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>
               ::_M_manager;
    uStack_50 = 0x100000;
    local_68 = (undefined1  [16])0x0;
    local_a8 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    Create8thSphere(0x3f800000,0,0x3f80000000000000,0,0,0x3f8000003f800000,this,(LOD *)&local_98,
                    local_b8,(LOD *)&local_c8,local_68,local_14c);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    local_68 = (undefined1  [16])0x0;
    local_58 = std::
               _Function_handler<JPH::Vec3(JPH::Vec3),JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>
               ::_M_manager;
    uStack_50 = 0x100000;
    local_c8 = (long *)_LC50;
    Create8thSphere(0x3f80000000000000,0,0xbf800000,0,0,0x3f8000003f800000,this,(LOD *)&local_98,
                    local_b8,(LOD *)&local_c8,local_68,local_14c);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    local_68 = (undefined1  [16])0x0;
    local_58 = std::
               _Function_handler<JPH::Vec3(JPH::Vec3),JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>
               ::_M_manager;
    uStack_50 = 0x100000;
    local_c8 = (long *)_LC50;
    Create8thSphere(0x3f80000000000000,0,0x3f800000,0,0,0xbf800000bf800000,this,(LOD *)&local_98,
                    local_b8,(LOD *)&local_c8,local_68,local_14c);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    local_c8 = (long *)CONCAT44(_LC51._4_4_,(undefined4)_LC51);
    local_68 = (undefined1  [16])0x0;
    local_58 = std::
               _Function_handler<JPH::Vec3(JPH::Vec3),JPH::DebugRenderer::Initialize()::{lambda(JPH::Vec3)#1}>
               ::_M_manager;
    uStack_50 = 0x100000;
    Create8thSphere(0xbf800000,0,0x3f80000000000000,0,0,0xbf800000bf800000,this,(LOD *)&local_98,
                    local_b8,(LOD *)&local_c8,local_68,local_14c);
    if (local_58 != (code *)0x0) {
      (*local_58)(local_68,local_68,3);
    }
    lVar14 = *(long *)(this + 0x18);
    lVar20 = CONCAT44(uStack_84,uStack_88);
    if (CONCAT44(uStack_94,local_98) == 0) {
      lVar20 = 0;
    }
    lVar17 = local_a8;
    if (local_b8._0_8_ == 0) {
      lVar17 = 0;
    }
    (**(code **)(*(long *)this + 0x28))
              ((LOD *)&local_c8,this,lVar17,local_b8._0_8_ & 0xffffffff,lVar20);
    local_c0 = fVar3;
    Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>>::push_back
              ((Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
               (lVar14 + 8),(LOD *)&local_c8);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x18))();
    }
    if (CONCAT44(uStack_84,uStack_88) != 0) {
      local_98 = 0.0;
      uStack_94 = 0;
      (*Free)();
    }
    if (local_a8 != 0) {
      auVar28._8_8_ = 0;
      auVar28._0_8_ = local_b8._8_8_;
      local_b8 = auVar28 << 0x40;
      (*Free)();
    }
    lVar14 = 0;
    uVar23 = 0;
    uVar15 = 1 << ((byte)local_14c & 0x1f);
    local_180 = 0;
    uVar22 = 0;
    uVar16 = 0;
    uVar12 = 0;
    uVar18 = 0;
    do {
      uVar30 = _LC13;
      if ((uVar16 & 1) != 0) {
        uVar30 = _LC51._4_4_;
      }
      lVar20 = uVar18 * 0x24;
      iVar19 = 0;
      uVar24 = uVar18;
      do {
        uVar25 = uVar24 + 1;
        fVar31 = ((float)iVar19 / (float)(int)uVar15 + (float)(int)uVar16) * __LC14;
        local_78 = (undefined4)Color::sWhite;
        fVar34 = (float)(__LC15 & (uint)fVar31 ^ (uint)fVar31);
        iVar32 = (int)(_LC17 * fVar34 + _LC19);
        fVar26 = (float)iVar32;
        fVar34 = ((fVar34 - _LC21 * fVar26) - _LC23 * fVar26) - fVar26 * _LC25;
        fVar37 = fVar34 * fVar34;
        fVar26 = (((_LC27 * fVar37 + _LC29) * fVar37 + _LC31) * fVar37 * fVar37 - _LC19 * fVar37) +
                 __LC32;
        uVar38 = (iVar32 << 0x1f) >> 0x1f;
        fVar34 = ((_LC35 * fVar37 + _LC37) * fVar37 + _LC39) * fVar37 * fVar34 + fVar34;
        fVar31 = (float)(((uint)fVar31 ^ iVar32 << 0x1e) & __LC15 ^
                        ((uint)fVar26 & uVar38 | ~uVar38 & (uint)fVar34));
        uVar38 = ((uint)fVar34 & uVar38 | ~uVar38 & (uint)fVar26) ^
                 iVar32 << 0x1e & __LC15 ^ iVar32 << 0x1f;
        uVar13 = uVar12;
        if (uVar12 < uVar25) {
          uVar13 = uVar25;
          if (uVar25 <= uVar12 * 2) {
            uVar13 = uVar12 * 2;
          }
          local_180 = (*Reallocate)(local_180,uVar12 * 0x24,uVar13 * 0x24);
        }
        uVar29 = (undefined4)Color::sWhite;
        uStack_94 = 0x3f800000;
        uVar24 = uVar24 + 2;
        uStack_88 = 0;
        uStack_80 = 0x3e800000;
        *(undefined8 *)(local_180 + lVar20) = CONCAT44(0x3f800000,fVar31);
        ((undefined8 *)(local_180 + lVar20))[1] = CONCAT44(fVar31,uVar38);
        plVar21 = (long *)(local_180 + 0x10 + lVar20);
        *plVar21 = (ulong)uVar38 << 0x20;
        plVar21[1] = CONCAT44(uVar30,0x3e800000);
        *(undefined4 *)(local_180 + 0x20 + lVar20) = local_78;
        local_78 = uVar29;
        uVar12 = uVar13;
        if (uVar13 < uVar24) {
          uVar12 = uVar13 * 2;
          if (uVar13 * 2 < uVar24) {
            uVar12 = uVar24;
          }
          local_98 = fVar31;
          fStack_90 = (float)uVar38;
          fStack_8c = fVar31;
          uStack_84 = uVar38;
          uStack_7c = uVar30;
          local_180 = (*Reallocate)(local_180,uVar13 * 0x24,uVar12 * 0x24);
        }
        uStack_94 = 0xbf800000;
        iVar19 = iVar19 + 1;
        uStack_88 = 0;
        uStack_80 = 0x3e800000;
        puVar2 = (undefined8 *)(local_180 + 0x24 + lVar20);
        *puVar2 = CONCAT44(0xbf800000,fVar31);
        puVar2[1] = CONCAT44(fVar31,uVar38);
        plVar21 = (long *)(local_180 + 0x34 + lVar20);
        *plVar21 = (ulong)uVar38 << 0x20;
        plVar21[1] = CONCAT44(uVar30,0x3e800000);
        *(undefined4 *)(local_180 + 0x44 + lVar20) = local_78;
        lVar20 = lVar20 + 0x48;
        local_98 = fVar31;
        fStack_90 = (float)uVar38;
        fStack_8c = fVar31;
        uStack_84 = uVar38;
        uStack_7c = uVar30;
      } while (iVar19 <= (int)uVar15);
      iVar32 = 0;
      lVar20 = uVar22 * 4 + 0x14;
      uVar25 = uVar22;
      iVar19 = (int)uVar18;
      do {
        uVar18 = uVar25 + 1;
        uVar13 = uVar23;
        if (uVar23 < uVar18) {
          uVar13 = uVar18;
          if (uVar18 <= uVar23 * 2) {
            uVar13 = uVar23 * 2;
          }
          lVar14 = (*Reallocate)(lVar14,uVar23 << 2,uVar13 * 4);
        }
        uVar23 = uVar25 + 2;
        *(int *)(lVar14 + uVar25 * 4) = iVar19;
        uVar18 = uVar13;
        if (uVar13 < uVar23) {
          uVar18 = uVar13 * 2;
          if (uVar13 * 2 < uVar23) {
            uVar18 = uVar23;
          }
          lVar14 = (*Reallocate)(lVar14,uVar13 << 2,uVar18 * 4);
        }
        uVar23 = uVar25 + 3;
        *(int *)(lVar14 + -0x10 + lVar20) = iVar19 + 1;
        uVar13 = uVar18;
        if (uVar18 < uVar23) {
          uVar13 = uVar18 * 2;
          if (uVar18 * 2 < uVar23) {
            uVar13 = uVar23;
          }
          lVar14 = (*Reallocate)(lVar14,uVar18 << 2,uVar13 * 4);
        }
        uVar23 = uVar25 + 4;
        *(int *)(lVar14 + -0xc + lVar20) = iVar19 + 3;
        uVar18 = uVar13;
        if (uVar13 < uVar23) {
          uVar18 = uVar13 * 2;
          if (uVar13 * 2 < uVar23) {
            uVar18 = uVar23;
          }
          lVar14 = (*Reallocate)(lVar14,uVar13 << 2,uVar18 * 4);
        }
        uVar23 = uVar25 + 5;
        *(int *)(lVar14 + -8 + lVar20) = iVar19;
        uVar13 = uVar18;
        if (uVar18 < uVar23) {
          uVar13 = uVar18 * 2;
          if (uVar18 * 2 < uVar23) {
            uVar13 = uVar23;
          }
          lVar14 = (*Reallocate)(lVar14,uVar18 << 2,uVar13 * 4);
        }
        uVar25 = uVar25 + 6;
        *(int *)(lVar14 + -4 + lVar20) = iVar19 + 3;
        uVar23 = uVar13;
        if (uVar13 < uVar25) {
          uVar23 = uVar13 * 2;
          if (uVar13 * 2 < uVar25) {
            uVar23 = uVar25;
          }
          lVar14 = (*Reallocate)(lVar14,uVar13 << 2,uVar23 * 4);
        }
        iVar32 = iVar32 + 1;
        *(int *)(lVar14 + lVar20) = iVar19 + 2;
        lVar20 = lVar20 + 0x18;
        iVar19 = iVar19 + 2;
      } while (iVar32 < (int)uVar15);
      uVar16 = uVar16 + 1;
      uVar22 = uVar22 + (ulong)uVar15 * 6;
      uVar18 = uVar24;
    } while (uVar16 != 4);
    lVar20 = *(long *)(this + 0x20);
    lVar17 = 0;
    if (uVar22 != 0) {
      lVar17 = lVar14;
    }
    lVar10 = 0;
    if (uVar24 != 0) {
      lVar10 = local_180;
    }
    (**(code **)(*(long *)this + 0x28))((LOD *)&local_98,this,lVar10,uVar24 & 0xffffffff,lVar17);
    fStack_90 = fVar3;
    Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>>::push_back
              ((Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
               (lVar20 + 8),(LOD *)&local_98);
    if ((long *)CONCAT44(uStack_94,local_98) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_94,local_98) + 0x18))();
    }
    if (lVar14 != 0) {
      (*Free)(lVar14);
    }
    if (local_180 != 0) {
      (*Free)(local_180);
    }
    local_118 = 0;
    lVar14 = 0;
    uVar15 = 2 << ((byte)local_14c & 0x1f);
    local_138 = 0;
    uVar23 = 0;
    uVar12 = 0;
    local_130 = 0;
    uVar16 = 0;
    do {
      uVar30 = _LC51._4_4_;
      if ((uVar16 & 1) == 0) {
        uVar30 = _LC13;
      }
      lVar20 = uVar23 * 0x24;
      iVar19 = 0;
      iVar32 = (int)uVar23;
      do {
        uVar18 = uVar23 + 1;
        fVar31 = ((float)iVar19 / (float)(int)uVar15 + (float)(int)uVar16) * __LC14;
        local_78 = (undefined4)Color::sWhite;
        fVar34 = (float)(__LC15 & (uint)fVar31 ^ (uint)fVar31);
        iVar33 = (int)(_LC17 * fVar34 + _LC19);
        fVar26 = (float)iVar33;
        fVar34 = ((fVar34 - _LC21 * fVar26) - _LC23 * fVar26) - fVar26 * _LC25;
        fVar37 = fVar34 * fVar34;
        fVar26 = (((_LC27 * fVar37 + _LC29) * fVar37 + _LC31) * fVar37 * fVar37 - _LC19 * fVar37) +
                 __LC32;
        uVar38 = (iVar33 << 0x1f) >> 0x1f;
        fVar34 = ((_LC35 * fVar37 + _LC37) * fVar37 + _LC39) * fVar37 * fVar34 + fVar34;
        fVar31 = (float)(((uint)fVar31 ^ iVar33 << 0x1e) & __LC15 ^
                        ((uint)fVar26 & uVar38 | ~uVar38 & (uint)fVar34));
        fVar26 = (float)(((uint)fVar34 & uVar38 | ~uVar38 & (uint)fVar26) ^
                        iVar33 << 0x1e & __LC15 ^ iVar33 << 0x1f);
        auVar27._12_4_ = fVar26;
        auVar27._8_4_ = fVar26;
        fVar34 = (float)((uint)(fVar31 * fVar31) ^ _LC56) - fVar26 * fVar26;
        auVar27._4_4_ = fVar34;
        auVar27._0_4_ = fVar31;
        auVar35._0_4_ = SQRT(fVar26 * fVar26 + fVar34 * fVar34 + fVar31 * fVar31 + 0.0);
        auVar35._4_4_ = auVar35._0_4_;
        auVar35._8_4_ = auVar35._0_4_;
        auVar35._12_4_ = auVar35._0_4_;
        auVar28 = divps(auVar27,auVar35);
        uVar29 = auVar28._4_4_;
        uVar38 = auVar28._8_4_;
        uVar22 = uVar12;
        auVar36 = auVar28;
        if (uVar12 < uVar18) {
          uVar22 = uVar18;
          if (uVar18 <= uVar12 * 2) {
            uVar22 = uVar12 * 2;
          }
          lVar14 = (*Reallocate)(lVar14,uVar12 * 0x24,uVar22 * 0x24);
          auVar36 = ZEXT416(auVar28._0_4_);
        }
        uVar8 = (undefined4)Color::sWhite;
        fVar34 = auVar36._0_4_;
        uVar23 = uVar23 + 2;
        local_98 = 0.0;
        uStack_94 = 0;
        fStack_90 = 0.0;
        uStack_80 = 0x3e800000;
        *(undefined8 *)(lVar14 + lVar20) = 0;
        ((undefined8 *)(lVar14 + lVar20))[1] = auVar28._0_8_ << 0x20;
        puVar2 = (undefined8 *)(lVar14 + 0x10 + lVar20);
        *puVar2 = auVar28._4_8_;
        puVar2[1] = CONCAT44(uVar30,0x3e800000);
        *(undefined4 *)(lVar14 + 0x20 + lVar20) = local_78;
        local_78 = uVar8;
        uVar12 = uVar22;
        if (uVar22 < uVar23) {
          uVar12 = uVar22 * 2;
          if (uVar22 * 2 < uVar23) {
            uVar12 = uVar23;
          }
          fStack_8c = (float)auVar28._0_4_;
          uStack_88 = uVar29;
          uStack_84 = uVar38;
          uStack_7c = uVar30;
          lVar14 = (*Reallocate)(lVar14,uVar22 * 0x24,uVar12 * 0x24);
        }
        uStack_94 = 0x3f800000;
        iVar19 = iVar19 + 1;
        uStack_80 = 0x3e800000;
        puVar2 = (undefined8 *)(lVar14 + 0x24 + lVar20);
        *puVar2 = CONCAT44(0x3f800000,fVar31);
        puVar2[1] = CONCAT44(fVar34,fVar26);
        puVar2 = (undefined8 *)(lVar14 + 0x34 + lVar20);
        *puVar2 = auVar28._4_8_;
        puVar2[1] = CONCAT44(uVar30,0x3e800000);
        *(undefined4 *)(lVar14 + 0x44 + lVar20) = local_78;
        lVar20 = lVar20 + 0x48;
        local_98 = fVar31;
        fStack_90 = fVar26;
        fStack_8c = fVar34;
        uStack_88 = uVar29;
        uStack_84 = uVar38;
        uStack_7c = uVar30;
      } while (iVar19 <= (int)uVar15);
      iVar19 = 0;
      iVar32 = iVar32 + 3;
      uVar18 = local_138;
      do {
        uVar22 = uVar18 + 1;
        if (local_118 < uVar22) {
          uVar24 = local_118 * 2;
          lVar20 = local_118 * 4;
          local_118 = uVar22;
          if (uVar22 <= uVar24) {
            local_118 = uVar24;
          }
          local_130 = (*Reallocate)(local_130,lVar20,local_118 * 4);
        }
        uVar22 = uVar18 + 2;
        *(int *)(local_130 + uVar18 * 4) = iVar32 + -3;
        lVar20 = uVar18 * 4;
        if (local_118 < uVar22) {
          uVar24 = local_118 * 2;
          lVar17 = local_118 * 4;
          local_118 = uVar22;
          if (uVar22 <= uVar24) {
            local_118 = uVar24;
          }
          local_130 = (*Reallocate)(local_130,lVar17,local_118 * 4);
        }
        uVar18 = uVar18 + 3;
        *(int *)(local_130 + 4 + lVar20) = iVar32 + -2;
        if (local_118 < uVar18) {
          uVar22 = local_118 * 2;
          lVar17 = local_118 * 4;
          local_118 = uVar22;
          if (uVar22 < uVar18) {
            local_118 = uVar18;
          }
          local_130 = (*Reallocate)(local_130,lVar17,local_118 * 4);
        }
        iVar19 = iVar19 + 1;
        *(int *)(local_130 + 8 + lVar20) = iVar32;
        iVar32 = iVar32 + 2;
      } while (iVar19 < (int)uVar15);
      uVar16 = uVar16 + 1;
      local_138 = local_138 + (ulong)uVar15 * 3;
    } while (uVar16 != 4);
    lVar20 = *(long *)(this + 0x30);
    lVar17 = 0;
    if (uVar23 != 0) {
      lVar17 = lVar14;
    }
    (**(code **)(*(long *)this + 0x28))((LOD *)&local_98,this,lVar17,uVar23 & 0xffffffff);
    fStack_90 = fVar3;
    Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>>::push_back
              ((Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
               (lVar20 + 8),(LOD *)&local_98);
    if ((long *)CONCAT44(uStack_94,local_98) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_94,local_98) + 0x18))();
    }
    if (local_130 != 0) {
      (*Free)(local_130);
    }
    if (lVar14 != 0) {
      (*Free)(lVar14);
    }
    lVar14 = *(long *)(this + 0x38);
    CreateCylinder(_LC33,_LC70,_LC33,_LC33,(int)(LOD *)&local_98);
    fStack_90 = fVar3;
    Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>>::push_back
              ((Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
               (lVar14 + 8),(LOD *)&local_98);
    if ((long *)CONCAT44(uStack_94,local_98) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_94,local_98) + 0x18))();
    }
    local_f0 = local_f0 + 1;
    local_14c = local_14c + -1;
  } while (local_14c != 0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::DrawSwingConeLimits(JPH::Mat44 const&, float, float, float, JPH::Color,
   JPH::DebugRenderer::ECastShadow, JPH::DebugRenderer::EDrawMode) */

void __thiscall
JPH::DebugRenderer::DrawSwingConeLimits
          (float param_2,float param_3,uint param_4,DebugRenderer *this,float *param_1,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  byte *pbVar1;
  float fVar2;
  SwingConeLimits SVar3;
  int *piVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  byte bVar17;
  bool bVar18;
  uint uVar19;
  long lVar20;
  SwingConeLimits *pSVar21;
  ulong uVar22;
  int *piVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  float *pfVar27;
  undefined8 *puVar28;
  Vec3 *pVVar29;
  Vec3 *pVVar30;
  long *plVar31;
  uint uVar32;
  uint uVar33;
  SwingConeLimits *pSVar34;
  long in_FS_OFFSET;
  byte bVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int iVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint uVar50;
  float fVar51;
  float fVar52;
  float local_4b4;
  undefined8 local_4b0;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  undefined1 local_488 [4];
  float afStack_484 [3];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  Vec3 local_448 [4];
  Vec3 aVStack_444 [4];
  Vec3 aVStack_440 [4];
  Vec3 aVStack_43c [36];
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  long local_40;
  
  pSVar34 = (SwingConeLimits *)&local_4b4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4b0 = CONCAT44(param_3,param_2);
  bVar18 = HashTable<JPH::DebugRenderer::SwingConeLimits,std::pair<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingConeLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingConeLimits>>
           ::InsertKey<false>((HashTable<JPH::DebugRenderer::SwingConeLimits,std::pair<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingConeLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingConeLimits>>
                               *)(this + 0x40),(SwingConeLimits *)&local_4b0,(uint *)pSVar34);
  puVar28 = (undefined8 *)((ulong)(uint)local_4b4 * 0x10 + *(long *)(this + 0x40));
  if (bVar18) {
    puVar28[1] = 0;
    *puVar28 = local_4b0;
LAB_00109864:
    if (*(int *)(this + 0x70) != 0) {
      local_4b4 = 0.0;
      if (param_2 != 0.0) {
        local_4b4 = param_2;
      }
      uVar24 = 0xcbf29ce484222325;
      pSVar21 = pSVar34;
      do {
        SVar3 = *pSVar21;
        pSVar21 = pSVar21 + 1;
        uVar24 = (uVar24 ^ (byte)SVar3) * 0x100000001b3;
      } while (pSVar21 != (SwingConeLimits *)&local_4b0);
      local_4b4 = 0.0;
      if (param_3 != 0.0) {
        local_4b4 = param_3;
      }
      uVar26 = 0xcbf29ce484222325;
      do {
        SVar3 = *pSVar34;
        pSVar34 = pSVar34 + 1;
        uVar22 = (byte)SVar3 ^ uVar26;
        uVar26 = uVar22 * 0x100000001b3;
      } while (pSVar34 != (SwingConeLimits *)&local_4b0);
      uVar22 = uVar22 * 0x21dbf4aaa9ed2837;
      uVar50 = *(uint *)(this + 0x74) - 1;
      uVar24 = ((uVar22 ^ uVar22 >> 0x27) * -0x415dda0614cbaa93 + uVar24) * -0x415dda0614cbaa93;
      uVar24 = (uVar24 ^ uVar24 >> 0x20) * -0x415dda0614cbaa93;
      uVar24 = (uVar24 ^ uVar24 >> 0x1d) * -0x415dda0614cbaa93;
      uVar24 = (uVar24 ^ uVar24 >> 0x20) * -0x415dda0614cbaa93;
      uVar24 = uVar24 ^ uVar24 >> 0x1d;
      bVar35 = (byte)uVar24 | 0x80;
      uVar32 = (uint)(uVar24 >> 7);
      while( true ) {
        uVar32 = uVar32 & uVar50;
        pbVar1 = (byte *)(*(long *)(this + 0x68) + (ulong)uVar32);
        bVar17 = pbVar1[0xf];
        auVar38[0] = -(bVar35 == *pbVar1);
        auVar38[1] = -(bVar35 == pbVar1[1]);
        auVar38[2] = -(bVar35 == pbVar1[2]);
        auVar38[3] = -(bVar35 == pbVar1[3]);
        auVar38[4] = -(bVar35 == pbVar1[4]);
        auVar38[5] = -(bVar35 == pbVar1[5]);
        auVar38[6] = -(bVar35 == pbVar1[6]);
        auVar38[7] = -(bVar35 == pbVar1[7]);
        auVar38[8] = -(bVar35 == pbVar1[8]);
        auVar38[9] = -(bVar35 == pbVar1[9]);
        auVar38[10] = -(bVar35 == pbVar1[10]);
        auVar38[0xb] = -(bVar35 == pbVar1[0xb]);
        auVar38[0xc] = -(bVar35 == pbVar1[0xc]);
        auVar38[0xd] = -(bVar35 == pbVar1[0xd]);
        auVar38[0xe] = -(bVar35 == pbVar1[0xe]);
        auVar38[0xf] = -(bVar35 == bVar17);
        uVar6 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
        if (uVar6 != 0) {
          uVar33 = (uint)uVar6;
          uVar19 = uVar32;
          do {
            iVar39 = 0;
            for (uVar7 = uVar33; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              iVar39 = iVar39 + 1;
            }
            uVar19 = uVar19 + iVar39 & uVar50;
            pfVar27 = (float *)((ulong)uVar19 * 0x10 + *(long *)(this + 0x60));
            if ((param_2 == *pfVar27) && (param_3 == pfVar27[1])) {
              if ((*(uint *)(this + 0x74) == uVar19) ||
                 (piVar23 = *(int **)(pfVar27 + 2), piVar23 == (int *)0x0)) goto LAB_001099fc;
              puVar28[1] = piVar23;
              LOCK();
              *piVar23 = *piVar23 + 1;
              UNLOCK();
              piVar23 = (int *)puVar28[1];
              if (piVar23 == (int *)0x0) goto LAB_001099fc;
              goto LAB_00109663;
            }
            uVar19 = uVar19 + 1;
            bVar5 = (char)iVar39 + 1U & 0x1f;
            uVar7 = uVar33 >> bVar5;
            uVar33 = uVar33 >> bVar5;
          } while (uVar7 != 0);
        }
        auVar44[0] = -(*pbVar1 == 0);
        auVar44[1] = -(pbVar1[1] == 0);
        auVar44[2] = -(pbVar1[2] == 0);
        auVar44[3] = -(pbVar1[3] == 0);
        auVar44[4] = -(pbVar1[4] == 0);
        auVar44[5] = -(pbVar1[5] == 0);
        auVar44[6] = -(pbVar1[6] == 0);
        auVar44[7] = -(pbVar1[7] == 0);
        auVar44[8] = -(pbVar1[8] == 0);
        auVar44[9] = -(pbVar1[9] == 0);
        auVar44[10] = -(pbVar1[10] == 0);
        auVar44[0xb] = -(pbVar1[0xb] == 0);
        auVar44[0xc] = -(pbVar1[0xc] == 0);
        auVar44[0xd] = -(pbVar1[0xd] == 0);
        auVar44[0xe] = -(pbVar1[0xe] == 0);
        auVar44[0xf] = -(bVar17 == 0);
        if ((((((((((((((((auVar44 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar44 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar44 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar44 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar44 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar44 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar44 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar44 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar44 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar44 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar44 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar44 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar44 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar44 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar44 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar17 == 0)
        break;
        uVar32 = uVar32 + 0x10;
      }
    }
LAB_001099fc:
    fVar2 = _LC33;
    param_3 = param_3 * _LC19;
    param_2 = param_2 * _LC19;
    fVar36 = (float)(__LC15 & (uint)param_3 ^ (uint)param_3);
    iVar39 = (int)(fVar36 * _LC17 + _LC19);
    fVar47 = (float)iVar39;
    uVar50 = (iVar39 << 0x1f) >> 0x1f;
    fVar47 = ((fVar36 - fVar47 * _LC21) - fVar47 * _LC23) - fVar47 * _LC25;
    fVar36 = fVar47 * fVar47;
    fVar47 = (float)(((uint)((((fVar36 * _LC27 + _LC29) * fVar36 + _LC31) * fVar36 * fVar36 -
                             fVar36 * _LC19) + _LC33) & uVar50 |
                     ~uVar50 & (uint)(((fVar36 * _LC35 + _LC37) * fVar36 + _LC39) * fVar36 * fVar47
                                     + fVar47)) ^ ((uint)param_3 ^ iVar39 << 0x1e) & __LC15);
    fVar36 = (float)(__LC15 & (uint)param_2 ^ (uint)param_2);
    iVar39 = (int)(_LC17 * fVar36 + _LC19);
    fVar51 = (float)iVar39;
    uVar50 = (iVar39 << 0x1f) >> 0x1f;
    fVar51 = ((fVar36 - _LC21 * fVar51) - _LC23 * fVar51) - fVar51 * _LC25;
    fVar36 = fVar51 * fVar51;
    fVar36 = (float)(((uint)((((_LC29 + _LC27 * fVar36) * fVar36 + _LC31) * fVar36 * fVar36 -
                             fVar36 * _LC19) + _LC33) & uVar50 |
                     ~uVar50 & (uint)(((_LC37 + _LC35 * fVar36) * fVar36 + _LC39) * fVar36 * fVar51
                                     + fVar51)) ^ ((uint)param_2 ^ iVar39 << 0x1e) & __LC15);
    if (fVar47 <= 0.0) {
      if (fVar36 <= 0.0) goto LAB_00109822;
    }
    else if ((_LC33 <= fVar36) && (_LC33 <= fVar47)) goto LAB_00109822;
    bVar18 = false;
    fVar46 = fVar47 * fVar47;
    pVVar30 = local_448;
    fVar45 = fVar36 * fVar36;
    fVar51 = _LC75;
    uVar50 = _LC56;
    while( true ) {
      iVar39 = 0;
      pVVar29 = pVVar30;
      do {
        fVar40 = (float)iVar39 + (float)iVar39;
        if (fVar46 < fVar45) {
          fVar41 = fVar36 - fVar40 * fVar36 * fVar51;
          fVar40 = 0.0;
          fVar49 = fVar46 - (fVar46 / fVar45) * fVar41 * fVar41;
          if (0.0 < fVar49) {
            fVar40 = SQRT(fVar49);
          }
        }
        else {
          fVar40 = fVar40 * fVar47 * fVar51 - fVar47;
          fVar41 = 0.0;
          fVar49 = fVar45 - (fVar45 / fVar46) * fVar40 * fVar40;
          if (0.0 < fVar49) {
            fVar41 = SQRT(fVar49);
          }
        }
        if (bVar18) {
          fVar40 = (float)((uint)fVar40 ^ uVar50);
          fVar41 = (float)((uint)fVar41 ^ uVar50);
        }
        fVar49 = fVar2 - (fVar40 * fVar40 + fVar41 * fVar41 + 0.0);
        if (fVar49 < 0.0) {
          fVar49 = sqrtf(fVar49);
          fVar51 = _LC75;
          uVar50 = _LC56;
        }
        else {
          fVar49 = SQRT(fVar49);
        }
        iVar39 = iVar39 + 1;
        fVar48 = fVar49 + fVar49;
        fVar52 = fVar40 * 0.0 - fVar41 * fVar48;
        *(ulong *)pVVar29 = CONCAT44(fVar41 * 0.0 + fVar40 * fVar48,(fVar49 * fVar48 + 0.0) - fVar2)
        ;
        *(ulong *)(pVVar29 + 8) = CONCAT44(fVar52,fVar52);
        pVVar29 = pVVar29 + 0x10;
      } while (iVar39 != 0x20);
      pVVar30 = pVVar30 + 0x200;
      if (bVar18) break;
      bVar18 = true;
    }
    piVar23 = (int *)CreateSwingLimitGeometry(this,0x40,local_448);
    piVar4 = (int *)puVar28[1];
    if (piVar23 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          plVar25 = *(long **)(piVar4 + 6);
          if (plVar25 != (long *)0x0) {
            if ((*(long *)(piVar4 + 2) != 0) &&
               (plVar31 = plVar25 + *(long *)(piVar4 + 2) * 2, plVar25 < plVar31)) {
              do {
                if ((long *)*plVar25 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar25 + 0x18))();
                }
                plVar25 = plVar25 + 2;
              } while (plVar25 < plVar31);
              plVar25 = *(long **)(piVar4 + 6);
            }
            piVar4[2] = 0;
            piVar4[3] = 0;
            (*Free)(plVar25);
          }
          (*Free)(piVar4);
        }
      }
      puVar28[1] = piVar23;
      if (piVar23 != (int *)0x0) {
        LOCK();
        *piVar23 = *piVar23 + 1;
        UNLOCK();
        piVar23 = (int *)puVar28[1];
      }
    }
  }
  else {
    piVar23 = (int *)puVar28[1];
    if (piVar23 == (int *)0x0) goto LAB_00109864;
  }
LAB_00109663:
  fVar2 = *param_1;
  fVar36 = param_1[1];
  fVar47 = param_1[2];
  fVar51 = param_1[3];
  fVar45 = param_1[4];
  fVar46 = param_1[5];
  fVar40 = param_1[6];
  fVar41 = param_1[7];
  lVar20 = 0;
  fVar49 = param_1[8];
  fVar48 = param_1[9];
  fVar52 = param_1[10];
  fVar8 = param_1[0xb];
  _local_488 = ZEXT416(param_4);
  fVar9 = param_1[0xc];
  fVar10 = param_1[0xd];
  fVar11 = param_1[0xe];
  fVar12 = param_1[0xf];
  local_468 = ZEXT416(param_4) << 0x40;
  local_478 = ZEXT416(param_4) << 0x20;
  local_458 = __LC9;
  uStack_450 = _UNK_0010ed98;
  do {
    fVar13 = *(float *)(local_488 + lVar20);
    fVar14 = *(float *)(local_488 + lVar20 + 4);
    fVar15 = *(float *)(local_488 + lVar20 + 8);
    fVar16 = *(float *)(local_488 + lVar20 + 0xc);
    *(float *)(local_448 + lVar20) =
         fVar16 * fVar9 + fVar13 * fVar2 + fVar14 * fVar45 + fVar15 * fVar49;
    *(float *)(local_448 + lVar20 + 4) =
         fVar16 * fVar10 + fVar13 * fVar36 + fVar14 * fVar46 + fVar15 * fVar48;
    *(float *)(local_448 + lVar20 + 8) =
         fVar16 * fVar11 + fVar13 * fVar47 + fVar14 * fVar40 + fVar15 * fVar52;
    *(float *)(local_448 + lVar20 + 0xc) =
         fVar16 * fVar12 + fVar13 * fVar51 + fVar14 * fVar41 + fVar15 * fVar8;
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x40);
  lVar20 = 0;
  local_498 = local_418;
  fStack_494 = fStack_414;
  fStack_490 = fStack_410;
  fStack_48c = fStack_40c;
  do {
    fVar2 = *(float *)((long)piVar23 + lVar20 + 0x20);
    fVar36 = *(float *)((long)piVar23 + lVar20 + 0x30);
    auVar37._0_8_ =
         CONCAT44(fVar2 * *(float *)(local_448 + (lVar20 + 1) * 4),
                  fVar2 * *(float *)(local_448 + lVar20 * 4));
    auVar37._8_4_ = fVar2 * *(float *)(local_448 + (lVar20 + 2) * 4);
    auVar37._12_4_ = fVar2 * *(float *)(local_448 + (lVar20 + 3) * 4);
    auVar42._0_4_ = fVar36 * *(float *)(local_448 + lVar20 * 4);
    auVar42._4_4_ = fVar36 * *(float *)(local_448 + (lVar20 + 1) * 4);
    auVar42._8_4_ = fVar36 * *(float *)(local_448 + (lVar20 + 2) * 4);
    auVar42._12_4_ = fVar36 * *(float *)(local_448 + (lVar20 + 3) * 4);
    lVar20 = lVar20 + 4;
    auVar43._8_4_ = auVar37._8_4_;
    auVar43._0_8_ = auVar37._0_8_;
    auVar43._12_4_ = auVar37._12_4_;
    auVar44 = minps(auVar43,auVar42);
    auVar38 = maxps(auVar37,auVar42);
    local_418 = local_418 + auVar44._0_4_;
    fStack_414 = fStack_414 + auVar44._4_4_;
    fStack_410 = fStack_410 + auVar44._8_4_;
    fStack_40c = fStack_40c + auVar44._12_4_;
    local_498 = local_498 + auVar38._0_4_;
    fStack_494 = fStack_494 + auVar38._4_4_;
    fStack_490 = fStack_490 + auVar38._8_4_;
    fStack_48c = fStack_48c + auVar38._12_4_;
  } while (lVar20 != 0xc);
  local_4a8 = local_418;
  fStack_4a4 = fStack_414;
  fStack_4a0 = fStack_410;
  fStack_49c = fStack_40c;
  (**(code **)(*(long *)this + 0x30))
            (this,local_448,&local_4a8,param_6,puVar28 + 1,2,param_7,param_8);
LAB_00109822:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::DrawSwingPyramidLimits(JPH::Mat44 const&, float, float, float, float, float,
   JPH::Color, JPH::DebugRenderer::ECastShadow, JPH::DebugRenderer::EDrawMode) */

void JPH::DebugRenderer::DrawSwingPyramidLimits
               (float param_2,float param_3,float param_4,float param_5,uint param_6,
               DebugRenderer *param_1,float *param_7,undefined4 param_8,undefined4 param_9)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long *plVar3;
  float *pfVar4;
  SwingPyramidLimits SVar5;
  int *piVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  byte bVar25;
  bool bVar26;
  uint uVar27;
  int iVar28;
  SwingPyramidLimits *pSVar29;
  ulong uVar30;
  int *piVar31;
  ulong uVar32;
  long lVar33;
  Vec3 *pVVar34;
  undefined8 *puVar35;
  SwingPyramidLimits *pSVar36;
  long *plVar37;
  uint uVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  long in_FS_OFFSET;
  byte bVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar53;
  undefined1 auVar54 [16];
  float fVar55;
  int iVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float local_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  undefined1 local_488 [4];
  float afStack_484 [3];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  Vec3 local_448 [4];
  Vec3 aVStack_444 [4];
  float afStack_440 [62];
  undefined8 auStack_348 [32];
  undefined8 auStack_248 [32];
  undefined8 auStack_148 [33];
  long local_40;
  
  local_4b8 = CONCAT44(param_3,param_2);
  uStack_4b0 = CONCAT44(param_5,param_4);
  pSVar36 = (SwingPyramidLimits *)&local_4bc;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar26 = HashTable<JPH::DebugRenderer::SwingPyramidLimits,std::pair<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingPyramidLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingPyramidLimits>>
           ::InsertKey<false>((HashTable<JPH::DebugRenderer::SwingPyramidLimits,std::pair<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingPyramidLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingPyramidLimits>>
                               *)(param_1 + 0x80),(SwingPyramidLimits *)&local_4b8,(uint *)pSVar36);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)(uint)local_4bc * 0x18);
  if (bVar26) {
    puVar1[2] = 0;
    *puVar1 = local_4b8;
    puVar1[1] = uStack_4b0;
  }
  else {
    piVar31 = (int *)puVar1[2];
    if (piVar31 != (int *)0x0) goto LAB_0010a0fe;
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    local_4bc = 0.0;
    if (param_2 != 0.0) {
      local_4bc = param_2;
    }
    uVar32 = 0xcbf29ce484222325;
    pSVar29 = pSVar36;
    do {
      SVar5 = *pSVar29;
      pSVar29 = pSVar29 + 1;
      uVar32 = (uVar32 ^ (byte)SVar5) * 0x100000001b3;
    } while (pSVar29 != (SwingPyramidLimits *)&local_4b8);
    local_4bc = 0.0;
    if (param_3 != 0.0) {
      local_4bc = param_3;
    }
    uVar39 = 0xcbf29ce484222325;
    pSVar29 = pSVar36;
    do {
      SVar5 = *pSVar29;
      pSVar29 = pSVar29 + 1;
      uVar30 = (byte)SVar5 ^ uVar39;
      uVar39 = uVar30 * 0x100000001b3;
    } while (pSVar29 != (SwingPyramidLimits *)&local_4b8);
    uVar30 = uVar30 * 0x21dbf4aaa9ed2837;
    uVar32 = ((uVar30 ^ uVar30 >> 0x27) * -0x415dda0614cbaa93 + uVar32) * -0x415dda0614cbaa93;
    uVar32 = (uVar32 ^ uVar32 >> 0x20) * -0x415dda0614cbaa93;
    uVar32 = (uVar32 ^ uVar32 >> 0x1d) * -0x415dda0614cbaa93;
    uVar32 = (uVar32 ^ uVar32 >> 0x20) * -0x415dda0614cbaa93;
    local_4bc = 0.0;
    if (param_4 != 0.0) {
      local_4bc = param_4;
    }
    uVar39 = 0xcbf29ce484222325;
    pSVar29 = pSVar36;
    do {
      SVar5 = *pSVar29;
      pSVar29 = pSVar29 + 1;
      uVar30 = (byte)SVar5 ^ uVar39;
      uVar39 = uVar30 * 0x100000001b3;
    } while (pSVar29 != (SwingPyramidLimits *)&local_4b8);
    uVar30 = uVar30 * 0x21dbf4aaa9ed2837;
    uVar32 = ((uVar30 ^ uVar30 >> 0x27) * -0x415dda0614cbaa93 + (uVar32 ^ uVar32 >> 0x1d)) *
             -0x415dda0614cbaa93;
    uVar32 = (uVar32 ^ uVar32 >> 0x20) * -0x415dda0614cbaa93;
    uVar32 = (uVar32 ^ uVar32 >> 0x1d) * -0x415dda0614cbaa93;
    uVar32 = (uVar32 ^ uVar32 >> 0x20) * -0x415dda0614cbaa93;
    local_4bc = 0.0;
    if (param_5 != 0.0) {
      local_4bc = param_5;
    }
    uVar39 = 0xcbf29ce484222325;
    do {
      SVar5 = *pSVar36;
      pSVar36 = pSVar36 + 1;
      uVar30 = (byte)SVar5 ^ uVar39;
      uVar39 = uVar30 * 0x100000001b3;
    } while (pSVar36 != (SwingPyramidLimits *)&local_4b8);
    uVar30 = uVar30 * 0x21dbf4aaa9ed2837;
    uVar32 = ((uVar30 ^ uVar30 >> 0x27) * -0x415dda0614cbaa93 + (uVar32 ^ uVar32 >> 0x1d)) *
             -0x415dda0614cbaa93;
    uVar32 = (uVar32 ^ uVar32 >> 0x20) * -0x415dda0614cbaa93;
    uVar32 = (uVar32 ^ uVar32 >> 0x1d) * -0x415dda0614cbaa93;
    uVar32 = (uVar32 ^ uVar32 >> 0x20) * -0x415dda0614cbaa93;
    uVar32 = uVar32 ^ uVar32 >> 0x1d;
    bVar42 = (byte)uVar32 | 0x80;
    uVar40 = *(uint *)(param_1 + 0xb4) - 1;
    uVar38 = (uint)(uVar32 >> 7);
    while( true ) {
      uVar38 = uVar38 & uVar40;
      pbVar2 = (byte *)(*(long *)(param_1 + 0xa8) + (ulong)uVar38);
      bVar25 = pbVar2[0xf];
      auVar46[0] = -(bVar42 == *pbVar2);
      auVar46[1] = -(bVar42 == pbVar2[1]);
      auVar46[2] = -(bVar42 == pbVar2[2]);
      auVar46[3] = -(bVar42 == pbVar2[3]);
      auVar46[4] = -(bVar42 == pbVar2[4]);
      auVar46[5] = -(bVar42 == pbVar2[5]);
      auVar46[6] = -(bVar42 == pbVar2[6]);
      auVar46[7] = -(bVar42 == pbVar2[7]);
      auVar46[8] = -(bVar42 == pbVar2[8]);
      auVar46[9] = -(bVar42 == pbVar2[9]);
      auVar46[10] = -(bVar42 == pbVar2[10]);
      auVar46[0xb] = -(bVar42 == pbVar2[0xb]);
      auVar46[0xc] = -(bVar42 == pbVar2[0xc]);
      auVar46[0xd] = -(bVar42 == pbVar2[0xd]);
      auVar46[0xe] = -(bVar42 == pbVar2[0xe]);
      auVar46[0xf] = -(bVar42 == bVar25);
      uVar8 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
      if (uVar8 != 0) {
        uVar41 = (uint)uVar8;
        uVar27 = uVar38;
        do {
          iVar28 = 0;
          for (uVar9 = uVar41; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            iVar28 = iVar28 + 1;
          }
          uVar27 = uVar27 + iVar28 & uVar40;
          pfVar4 = (float *)(*(long *)(param_1 + 0xa0) + (ulong)uVar27 * 0x18);
          if ((((param_2 == *pfVar4) && (param_3 == pfVar4[1])) && (param_4 == pfVar4[2])) &&
             (param_5 == pfVar4[3])) {
            if ((*(uint *)(param_1 + 0xb4) == uVar27) ||
               (piVar31 = *(int **)(pfVar4 + 4), piVar31 == (int *)0x0)) goto LAB_0010a62c;
            puVar1[2] = piVar31;
            LOCK();
            *piVar31 = *piVar31 + 1;
            UNLOCK();
            piVar31 = (int *)puVar1[2];
            if (piVar31 == (int *)0x0) goto LAB_0010a62c;
            goto LAB_0010a0fe;
          }
          uVar27 = uVar27 + 1;
          bVar7 = (char)iVar28 + 1U & 0x1f;
          uVar9 = uVar41 >> bVar7;
          uVar41 = uVar41 >> bVar7;
        } while (uVar9 != 0);
      }
      auVar58[0] = -(*pbVar2 == 0);
      auVar58[1] = -(pbVar2[1] == 0);
      auVar58[2] = -(pbVar2[2] == 0);
      auVar58[3] = -(pbVar2[3] == 0);
      auVar58[4] = -(pbVar2[4] == 0);
      auVar58[5] = -(pbVar2[5] == 0);
      auVar58[6] = -(pbVar2[6] == 0);
      auVar58[7] = -(pbVar2[7] == 0);
      auVar58[8] = -(pbVar2[8] == 0);
      auVar58[9] = -(pbVar2[9] == 0);
      auVar58[10] = -(pbVar2[10] == 0);
      auVar58[0xb] = -(pbVar2[0xb] == 0);
      auVar58[0xc] = -(pbVar2[0xc] == 0);
      auVar58[0xd] = -(pbVar2[0xd] == 0);
      auVar58[0xe] = -(pbVar2[0xe] == 0);
      auVar58[0xf] = -(bVar25 == 0);
      if ((((((((((((((((auVar58 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar58 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar58 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar58 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar58 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar58 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar58 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar58 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar58 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar58 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar58 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar58 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar58 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar58 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar58 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar25 == 0) break;
      uVar38 = uVar38 + 0x10;
    }
  }
LAB_0010a62c:
  fVar55 = _LC19 * param_2;
  iVar28 = 0;
  fVar59 = (float)(__LC15 & (uint)fVar55 ^ (uint)fVar55);
  iVar53 = (int)(fVar59 * _LC17 + _LC19);
  fVar43 = (float)iVar53;
  fVar43 = ((fVar59 - fVar43 * _LC21) - _LC23 * fVar43) - fVar43 * _LC25;
  fVar59 = fVar43 * fVar43;
  fVar48 = (((_LC27 * fVar59 + _LC29) * fVar59 + _LC31) * fVar59 * fVar59 - fVar59 * _LC19) + __LC32
  ;
  fVar43 = ((_LC35 * fVar59 + _LC37) * fVar59 + _LC39) * fVar59 * fVar43 + fVar43;
  uVar38 = (iVar53 << 0x1f) >> 0x1f;
  fVar59 = (float)(((uint)fVar43 & uVar38 | ~uVar38 & (uint)fVar48) ^
                  iVar53 << 0x1e & __LC15 ^ iVar53 << 0x1f);
  pVVar34 = local_448;
  do {
    fVar44 = (float)iVar28;
    iVar28 = iVar28 + 1;
    fVar49 = (param_5 - fVar44 * (param_5 - param_4) * __LC76) * _LC19;
    fVar60 = (float)(__LC15 & (uint)fVar49 ^ (uint)fVar49);
    iVar56 = (int)(fVar60 * _LC17 + _LC19);
    fVar44 = (float)iVar56;
    fVar44 = ((fVar60 - fVar44 * _LC21) - _LC23 * fVar44) - fVar44 * _LC25;
    fVar61 = fVar44 * fVar44;
    fVar60 = (((_LC27 * fVar61 + _LC29) * fVar61 + _LC31) * fVar61 * fVar61 - fVar61 * _LC19) +
             __LC32;
    fVar44 = ((_LC35 * fVar61 + _LC37) * fVar61 + _LC39) * fVar61 * fVar44 + fVar44;
    uVar40 = (iVar56 << 0x1f) >> 0x1f;
    fVar49 = (float)(((uint)fVar49 ^ iVar56 << 0x1e) & __LC15 ^
                    (~uVar40 & (uint)fVar44 | (uint)fVar60 & uVar40)) * fVar59;
    fVar44 = (float)(((uint)fVar44 & uVar40 | ~uVar40 & (uint)fVar60) ^
                    iVar56 << 0x1e & __LC15 ^ iVar56 << 0x1f);
    fVar60 = fVar59 * fVar44;
    fVar44 = fVar44 * (float)(((uint)fVar55 ^ iVar53 << 0x1e) & __LC15 ^
                             (~uVar38 & (uint)fVar43 | (uint)fVar48 & uVar38));
    auVar10._8_4_ = fVar60;
    auVar10._4_4_ = fVar49;
    auVar10._0_4_ = fVar44;
    auVar10._12_4_ = 0;
    auVar51._0_4_ = SQRT(fVar49 * fVar49 + fVar60 * fVar60 + fVar44 * fVar44 + 0.0);
    auVar51._4_4_ = auVar51._0_4_;
    auVar51._8_4_ = auVar51._0_4_;
    auVar51._12_4_ = auVar51._0_4_;
    auVar46 = divps(auVar10 << 0x20,auVar51);
    fVar44 = auVar46._0_4_;
    fVar49 = auVar46._12_4_;
    fVar62 = fVar44 + fVar44;
    fVar61 = fVar49 + fVar49;
    fVar60 = auVar46._8_4_ * fVar62 - auVar46._4_4_ * fVar61;
    *(ulong *)pVVar34 =
         CONCAT44(auVar46._4_4_ * fVar62 + auVar46._8_4_ * fVar61,
                  (fVar44 * fVar62 + fVar49 * fVar61) - _LC33);
    *(ulong *)(pVVar34 + 8) = CONCAT44(fVar60,fVar60);
    pVVar34 = pVVar34 + 0x10;
  } while (iVar28 != 0x10);
  iVar28 = 0;
  fVar55 = _LC19 * param_4;
  fVar59 = (float)(__LC15 & (uint)fVar55 ^ (uint)fVar55);
  iVar53 = (int)(fVar59 * _LC17 + _LC19);
  fVar43 = (float)iVar53;
  fVar43 = ((fVar59 - fVar43 * _LC21) - _LC23 * fVar43) - fVar43 * _LC25;
  fVar59 = fVar43 * fVar43;
  fVar48 = (((_LC27 * fVar59 + _LC29) * fVar59 + _LC31) * fVar59 * fVar59 - fVar59 * _LC19) + __LC32
  ;
  fVar43 = ((_LC35 * fVar59 + _LC37) * fVar59 + _LC39) * fVar59 * fVar43 + fVar43;
  uVar38 = (iVar53 << 0x1f) >> 0x1f;
  fVar59 = (float)(((uint)fVar43 & uVar38 | ~uVar38 & (uint)fVar48) ^
                  iVar53 << 0x1e & __LC15 ^ iVar53 << 0x1f);
  puVar35 = auStack_348;
  do {
    fVar44 = (float)iVar28;
    iVar28 = iVar28 + 1;
    fVar44 = (fVar44 * (param_3 - param_2) * __LC76 + param_2) * _LC19;
    fVar49 = (float)(__LC15 & (uint)fVar44 ^ (uint)fVar44);
    iVar56 = (int)(fVar49 * _LC17 + _LC19);
    fVar60 = (float)iVar56;
    fVar49 = ((fVar49 - fVar60 * _LC21) - _LC23 * fVar60) - fVar60 * _LC25;
    fVar60 = fVar49 * fVar49;
    fVar61 = (((_LC27 * fVar60 + _LC29) * fVar60 + _LC31) * fVar60 * fVar60 - fVar60 * _LC19) +
             __LC32;
    fVar49 = ((_LC35 * fVar60 + _LC37) * fVar60 + _LC39) * fVar60 * fVar49 + fVar49;
    uVar40 = (iVar56 << 0x1f) >> 0x1f;
    fVar60 = (float)((uVar40 & (uint)fVar49 | ~uVar40 & (uint)fVar61) ^
                    iVar56 << 0x1e & __LC15 ^ iVar56 << 0x1f);
    fVar49 = (float)(((uint)fVar44 ^ iVar56 << 0x1e) & __LC15 ^
                    (~uVar40 & (uint)fVar49 | (uint)fVar61 & uVar40)) * fVar59;
    fVar44 = fVar60 * (float)(((uint)fVar55 ^ iVar53 << 0x1e) & __LC15 ^
                             (~uVar38 & (uint)fVar43 | (uint)fVar48 & uVar38));
    fVar60 = fVar60 * fVar59;
    auVar11._8_4_ = fVar60;
    auVar11._4_4_ = fVar44;
    auVar11._0_4_ = fVar49;
    auVar11._12_4_ = 0;
    auVar52._0_4_ = SQRT(fVar44 * fVar44 + fVar60 * fVar60 + fVar49 * fVar49 + 0.0);
    auVar52._4_4_ = auVar52._0_4_;
    auVar52._8_4_ = auVar52._0_4_;
    auVar52._12_4_ = auVar52._0_4_;
    auVar46 = divps(auVar11 << 0x20,auVar52);
    fVar44 = auVar46._0_4_;
    fVar49 = auVar46._12_4_;
    fVar60 = fVar44 + fVar44;
    fVar62 = fVar49 + fVar49;
    fVar61 = auVar46._8_4_ * fVar60 - auVar46._4_4_ * fVar62;
    *puVar35 = CONCAT44(fVar60 * auVar46._4_4_ + auVar46._8_4_ * fVar62,
                        (fVar44 * fVar60 + fVar49 * fVar62) - _LC33);
    puVar35[1] = CONCAT44(fVar61,fVar61);
    puVar35 = puVar35 + 2;
  } while (iVar28 != 0x10);
  iVar28 = 0;
  fVar55 = _LC19 * param_3;
  fVar59 = (float)(__LC15 & (uint)fVar55 ^ (uint)fVar55);
  iVar53 = (int)(fVar59 * _LC17 + _LC19);
  fVar43 = (float)iVar53;
  fVar43 = ((fVar59 - fVar43 * _LC21) - _LC23 * fVar43) - fVar43 * _LC25;
  fVar59 = fVar43 * fVar43;
  fVar48 = (((_LC27 * fVar59 + _LC29) * fVar59 + _LC31) * fVar59 * fVar59 - fVar59 * _LC19) + __LC32
  ;
  fVar43 = ((_LC35 * fVar59 + _LC37) * fVar59 + _LC39) * fVar59 * fVar43 + fVar43;
  uVar38 = (iVar53 << 0x1f) >> 0x1f;
  fVar59 = (float)(((uint)fVar43 & uVar38 | ~uVar38 & (uint)fVar48) ^
                  iVar53 << 0x1e & __LC15 ^ iVar53 << 0x1f);
  puVar35 = auStack_248;
  do {
    fVar44 = (float)iVar28;
    iVar28 = iVar28 + 1;
    fVar44 = (fVar44 * (param_5 - param_4) * __LC76 + param_4) * _LC19;
    fVar49 = (float)(__LC15 & (uint)fVar44 ^ (uint)fVar44);
    iVar56 = (int)(fVar49 * _LC17 + _LC19);
    fVar60 = (float)iVar56;
    fVar49 = ((fVar49 - fVar60 * _LC21) - _LC23 * fVar60) - fVar60 * _LC25;
    fVar60 = fVar49 * fVar49;
    fVar61 = (((_LC27 * fVar60 + _LC29) * fVar60 + _LC31) * fVar60 * fVar60 - fVar60 * _LC19) +
             __LC32;
    fVar49 = ((_LC35 * fVar60 + _LC37) * fVar60 + _LC39) * fVar60 * fVar49 + fVar49;
    uVar40 = (iVar56 << 0x1f) >> 0x1f;
    fVar60 = (float)((uVar40 & (uint)fVar49 | ~uVar40 & (uint)fVar61) ^
                    iVar56 << 0x1e & __LC15 ^ iVar56 << 0x1f);
    fVar44 = (float)(((uint)fVar44 ^ iVar56 << 0x1e) & __LC15 ^
                    (~uVar40 & (uint)fVar49 | (uint)fVar61 & uVar40)) * fVar59;
    fVar49 = fVar59 * fVar60;
    fVar60 = fVar60 * (float)(((uint)fVar55 ^ iVar53 << 0x1e) & __LC15 ^
                             (~uVar38 & (uint)fVar43 | (uint)fVar48 & uVar38));
    auVar12._8_4_ = fVar49;
    auVar12._4_4_ = fVar44;
    auVar12._0_4_ = fVar60;
    auVar12._12_4_ = 0;
    auVar54._0_4_ = SQRT(fVar44 * fVar44 + fVar49 * fVar49 + fVar60 * fVar60 + 0.0);
    auVar54._4_4_ = auVar54._0_4_;
    auVar54._8_4_ = auVar54._0_4_;
    auVar54._12_4_ = auVar54._0_4_;
    auVar46 = divps(auVar12 << 0x20,auVar54);
    fVar44 = auVar46._0_4_;
    fVar49 = auVar46._12_4_;
    fVar60 = fVar44 + fVar44;
    fVar62 = fVar49 + fVar49;
    fVar61 = auVar46._8_4_ * fVar60 - auVar46._4_4_ * fVar62;
    *puVar35 = CONCAT44(fVar60 * auVar46._4_4_ + auVar46._8_4_ * fVar62,
                        (fVar44 * fVar60 + fVar49 * fVar62) - _LC33);
    puVar35[1] = CONCAT44(fVar61,fVar61);
    puVar35 = puVar35 + 2;
  } while (iVar28 != 0x10);
  iVar28 = 0;
  param_5 = param_5 * _LC19;
  fVar59 = (float)(__LC15 & (uint)param_5 ^ (uint)param_5);
  iVar53 = (int)(fVar59 * _LC17 + _LC19);
  fVar43 = (float)iVar53;
  fVar43 = ((fVar59 - fVar43 * _LC21) - _LC23 * fVar43) - fVar43 * _LC25;
  fVar59 = fVar43 * fVar43;
  fVar48 = (((_LC27 * fVar59 + _LC29) * fVar59 + _LC31) * fVar59 * fVar59 - fVar59 * _LC19) + __LC32
  ;
  fVar43 = ((_LC35 * fVar59 + _LC37) * fVar59 + _LC39) * fVar59 * fVar43 + fVar43;
  uVar38 = (iVar53 << 0x1f) >> 0x1f;
  fVar59 = (float)(((uint)fVar43 & uVar38 | ~uVar38 & (uint)fVar48) ^
                  iVar53 << 0x1e & __LC15 ^ iVar53 << 0x1f);
  puVar35 = auStack_148;
  do {
    fVar55 = (float)iVar28;
    iVar28 = iVar28 + 1;
    fVar44 = (param_3 - fVar55 * (param_3 - param_2) * __LC76) * _LC19;
    fVar49 = (float)(__LC15 & (uint)fVar44 ^ (uint)fVar44);
    iVar56 = (int)(fVar49 * _LC17 + _LC19);
    fVar55 = (float)iVar56;
    fVar55 = ((fVar49 - fVar55 * _LC21) - _LC23 * fVar55) - fVar55 * _LC25;
    fVar60 = fVar55 * fVar55;
    fVar49 = (((_LC27 * fVar60 + _LC29) * fVar60 + _LC31) * fVar60 * fVar60 - fVar60 * _LC19) +
             __LC32;
    fVar55 = ((_LC35 * fVar60 + _LC37) * fVar60 + _LC39) * fVar60 * fVar55 + fVar55;
    uVar40 = (iVar56 << 0x1f) >> 0x1f;
    fVar60 = (float)(((uint)fVar44 ^ iVar56 << 0x1e) & __LC15 ^
                    (~uVar40 & (uint)fVar55 | (uint)fVar49 & uVar40)) * fVar59;
    fVar55 = (float)(((uint)fVar55 & uVar40 | ~uVar40 & (uint)fVar49) ^
                    iVar56 << 0x1e & __LC15 ^ iVar56 << 0x1f);
    fVar44 = fVar55 * (float)(((uint)param_5 ^ iVar53 << 0x1e) & __LC15 ^
                             (~uVar38 & (uint)fVar43 | (uint)fVar48 & uVar38));
    fVar55 = fVar55 * fVar59;
    auVar13._8_4_ = fVar55;
    auVar13._4_4_ = fVar44;
    auVar13._0_4_ = fVar60;
    auVar13._12_4_ = 0;
    auVar47._0_4_ = SQRT(fVar44 * fVar44 + fVar55 * fVar55 + fVar60 * fVar60 + 0.0);
    auVar47._4_4_ = auVar47._0_4_;
    auVar47._8_4_ = auVar47._0_4_;
    auVar47._12_4_ = auVar47._0_4_;
    auVar46 = divps(auVar13 << 0x20,auVar47);
    fVar55 = auVar46._0_4_;
    fVar44 = auVar46._12_4_;
    fVar60 = fVar55 + fVar55;
    fVar49 = fVar44 + fVar44;
    fVar61 = auVar46._8_4_ * fVar60 - auVar46._4_4_ * fVar49;
    *puVar35 = CONCAT44(auVar46._4_4_ * fVar60 + auVar46._8_4_ * fVar49,
                        (fVar55 * fVar60 + fVar44 * fVar49) - _LC33);
    puVar35[1] = CONCAT44(fVar61,fVar61);
    puVar35 = puVar35 + 2;
  } while (iVar28 != 0x10);
  piVar31 = (int *)CreateSwingLimitGeometry(param_1,0x40,local_448);
  piVar6 = (int *)puVar1[2];
  if (piVar31 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        plVar37 = *(long **)(piVar6 + 6);
        if (plVar37 != (long *)0x0) {
          if ((*(long *)(piVar6 + 2) != 0) &&
             (plVar3 = plVar37 + *(long *)(piVar6 + 2) * 2, plVar37 < plVar3)) {
            do {
              if ((long *)*plVar37 != (long *)0x0) {
                (**(code **)(*(long *)*plVar37 + 0x18))();
              }
              plVar37 = plVar37 + 2;
            } while (plVar37 < plVar3);
            plVar37 = *(long **)(piVar6 + 6);
          }
          piVar6[2] = 0;
          piVar6[3] = 0;
          (*Free)(plVar37);
        }
        (*Free)(piVar6);
      }
    }
    puVar1[2] = piVar31;
    if (piVar31 != (int *)0x0) {
      LOCK();
      *piVar31 = *piVar31 + 1;
      UNLOCK();
      piVar31 = (int *)puVar1[2];
    }
  }
LAB_0010a0fe:
  fVar43 = *param_7;
  fVar59 = param_7[1];
  fVar48 = param_7[2];
  fVar55 = param_7[3];
  fVar44 = param_7[4];
  fVar49 = param_7[5];
  fVar60 = param_7[6];
  fVar61 = param_7[7];
  lVar33 = 0;
  _local_488 = ZEXT416(param_6);
  fVar62 = param_7[8];
  fVar14 = param_7[9];
  fVar15 = param_7[10];
  fVar16 = param_7[0xb];
  fVar17 = param_7[0xc];
  fVar18 = param_7[0xd];
  fVar19 = param_7[0xe];
  fVar20 = param_7[0xf];
  local_468 = ZEXT416(param_6) << 0x40;
  local_478 = ZEXT416(param_6) << 0x20;
  local_458 = __LC9;
  uStack_450 = _UNK_0010ed98;
  do {
    fVar21 = *(float *)(local_488 + lVar33);
    fVar22 = *(float *)(local_488 + lVar33 + 4);
    fVar23 = *(float *)(local_488 + lVar33 + 8);
    fVar24 = *(float *)(local_488 + lVar33 + 0xc);
    *(float *)(local_448 + lVar33) =
         fVar24 * fVar17 + fVar21 * fVar43 + fVar22 * fVar44 + fVar23 * fVar62;
    *(float *)(local_448 + lVar33 + 4) =
         fVar24 * fVar18 + fVar21 * fVar59 + fVar22 * fVar49 + fVar23 * fVar14;
    *(float *)((long)afStack_440 + lVar33) =
         fVar24 * fVar19 + fVar21 * fVar48 + fVar22 * fVar60 + fVar23 * fVar15;
    *(float *)((long)afStack_440 + lVar33 + 4) =
         fVar24 * fVar20 + fVar21 * fVar55 + fVar22 * fVar61 + fVar23 * fVar16;
    lVar33 = lVar33 + 0x10;
  } while (lVar33 != 0x40);
  lVar33 = 0;
  local_498 = afStack_440[10];
  fStack_494 = afStack_440[0xb];
  fStack_490 = afStack_440[0xc];
  fStack_48c = afStack_440[0xd];
  do {
    fVar43 = *(float *)((long)piVar31 + lVar33 + 0x20);
    fVar59 = *(float *)((long)piVar31 + lVar33 + 0x30);
    auVar45._0_8_ =
         CONCAT44(fVar43 * *(float *)(local_448 + (lVar33 + 1) * 4),
                  fVar43 * *(float *)(local_448 + lVar33 * 4));
    auVar45._8_4_ = fVar43 * afStack_440[lVar33];
    auVar45._12_4_ = fVar43 * afStack_440[lVar33 + 1];
    auVar50._0_4_ = fVar59 * *(float *)(local_448 + lVar33 * 4);
    auVar50._4_4_ = fVar59 * *(float *)(local_448 + (lVar33 + 1) * 4);
    auVar50._8_4_ = fVar59 * afStack_440[lVar33];
    auVar50._12_4_ = fVar59 * afStack_440[lVar33 + 1];
    lVar33 = lVar33 + 4;
    auVar57._8_4_ = auVar45._8_4_;
    auVar57._0_8_ = auVar45._0_8_;
    auVar57._12_4_ = auVar45._12_4_;
    auVar58 = minps(auVar57,auVar50);
    auVar46 = maxps(auVar45,auVar50);
    afStack_440[10] = afStack_440[10] + auVar58._0_4_;
    afStack_440[0xb] = afStack_440[0xb] + auVar58._4_4_;
    afStack_440[0xc] = afStack_440[0xc] + auVar58._8_4_;
    afStack_440[0xd] = afStack_440[0xd] + auVar58._12_4_;
    local_498 = local_498 + auVar46._0_4_;
    fStack_494 = fStack_494 + auVar46._4_4_;
    fStack_490 = fStack_490 + auVar46._8_4_;
    fStack_48c = fStack_48c + auVar46._12_4_;
  } while (lVar33 != 0xc);
  local_4a8 = afStack_440[10];
  fStack_4a4 = afStack_440[0xb];
  fStack_4a0 = afStack_440[0xc];
  fStack_49c = afStack_440[0xd];
  (**(code **)(*(long *)param_1 + 0x30))(param_1,local_448,&local_4a8,param_8,puVar1 + 2,2,param_9);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::DrawPie(JPH::Vec3, float, JPH::Vec3, JPH::Vec3, float, float, JPH::Color,
   JPH::DebugRenderer::ECastShadow, JPH::DebugRenderer::EDrawMode) */

void JPH::DebugRenderer::DrawPie
               (undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,ulong param_5
               ,undefined8 param_6,undefined8 param_7,float param_8,long *param_9,
               undefined4 param_10,ulong param_11,uint param_12,undefined8 param_13,
               undefined8 param_14,float param_15)

{
  byte *pbVar1;
  undefined4 uVar2;
  LOD LVar3;
  code *pcVar4;
  int *piVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 (*pauVar11) [16];
  byte bVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  uint uVar18;
  long lVar19;
  LOD *pLVar20;
  ulong uVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined1 (*pauVar24) [16];
  long *plVar25;
  long lVar26;
  Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *this;
  float *pfVar27;
  LOD *pLVar28;
  float *pfVar29;
  float *pfVar30;
  undefined1 *puVar32;
  uint uVar36;
  uint uVar37;
  long *plVar38;
  float *pfVar39;
  long in_FS_OFFSET;
  byte bVar40;
  float fVar41;
  float fVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  int iVar49;
  float fVar50;
  int iVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 uVar59;
  undefined8 uVar60;
  uint uVar61;
  uint uVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238 [8];
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  int local_204;
  LOD *local_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  ulong uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float *local_1c8;
  float local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_124;
  long *local_120;
  undefined8 local_118;
  undefined4 local_110;
  float local_108 [28];
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  float *pfVar31;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  
  pfVar29 = &local_2a8;
  pfVar31 = &local_2a8;
  pfVar30 = &local_2a8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pfVar39 = &local_2a8;
  local_1bc = param_3;
  local_1b8 = param_2;
  local_1b0 = param_1;
  local_148 = param_6;
  uStack_140 = param_7;
  local_138 = param_4;
  uStack_130 = param_5;
  if (param_15 <= param_8) goto LAB_0010b4d9;
  local_124 = param_15 - param_8;
  local_200 = (LOD *)&local_118;
  local_148 = CONCAT44((int)((ulong)param_6 >> 0x20),param_8);
  local_138 = CONCAT44((int)((ulong)param_4 >> 0x20),local_124);
  local_1e8 = param_4;
  uStack_1e0 = param_5;
  local_1d8 = param_6;
  uStack_1d0 = param_7;
  bVar17 = HashTable<float,std::pair<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<float>,std::equal_to<float>>
           ::InsertKey<false>((HashTable<float,std::pair<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<float>,std::equal_to<float>>
                               *)(param_9 + 0x18),&local_124,(uint *)local_200);
  fVar41 = (float)local_138;
  uVar61 = (uint)(float)local_148;
  pfVar39 = (float *)(((ulong)local_118 & 0xffffffff) * 0x10 + param_9[0x18]);
  if (bVar17) {
    pfVar39[2] = 0.0;
    pfVar39[3] = 0.0;
    local_1c8 = pfVar39 + 2;
    *pfVar39 = (float)local_138;
LAB_0010ba58:
    if ((int)param_9[0x1e] != 0) {
      fVar47 = 0.0;
      if ((float)local_138 != 0.0) {
        fVar47 = (float)local_138;
      }
      local_118 = (long *)CONCAT44(local_118._4_4_,fVar47);
      uVar21 = 0xcbf29ce484222325;
      pLVar20 = local_200;
      do {
        LVar3 = *pLVar20;
        pLVar20 = pLVar20 + 1;
        uVar21 = (uVar21 ^ (byte)LVar3) * 0x100000001b3;
      } while (pLVar20 != (LOD *)((long)&local_118 + 4));
      bVar40 = (byte)uVar21 | 0x80;
      uVar36 = *(uint *)((long)param_9 + 0xf4) - 1;
      uVar62 = (uint)(uVar21 >> 7);
      while( true ) {
        uVar62 = uVar62 & uVar36;
        pbVar1 = (byte *)(param_9[0x1d] + (ulong)uVar62);
        bVar12 = pbVar1[0xf];
        auVar43[0] = -(bVar40 == *pbVar1);
        auVar43[1] = -(bVar40 == pbVar1[1]);
        auVar43[2] = -(bVar40 == pbVar1[2]);
        auVar43[3] = -(bVar40 == pbVar1[3]);
        auVar43[4] = -(bVar40 == pbVar1[4]);
        auVar43[5] = -(bVar40 == pbVar1[5]);
        auVar43[6] = -(bVar40 == pbVar1[6]);
        auVar43[7] = -(bVar40 == pbVar1[7]);
        auVar43[8] = -(bVar40 == pbVar1[8]);
        auVar43[9] = -(bVar40 == pbVar1[9]);
        auVar43[10] = -(bVar40 == pbVar1[10]);
        auVar43[0xb] = -(bVar40 == pbVar1[0xb]);
        auVar43[0xc] = -(bVar40 == pbVar1[0xc]);
        auVar43[0xd] = -(bVar40 == pbVar1[0xd]);
        auVar43[0xe] = -(bVar40 == pbVar1[0xe]);
        auVar43[0xf] = -(bVar40 == bVar12);
        uVar7 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
        if (uVar7 != 0) {
          uVar37 = (uint)uVar7;
          uVar18 = uVar62;
          do {
            iVar51 = 0;
            for (uVar8 = uVar37; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              iVar51 = iVar51 + 1;
            }
            uVar18 = uVar18 + iVar51 & uVar36;
            pfVar27 = (float *)((ulong)uVar18 * 0x10 + param_9[0x1c]);
            if ((float)local_138 == *pfVar27) {
              if ((*(uint *)((long)param_9 + 0xf4) == uVar18) ||
                 (piVar5 = *(int **)(pfVar27 + 2), piVar5 == (int *)0x0)) goto LAB_0010ba67;
              *(int **)(pfVar39 + 2) = piVar5;
              LOCK();
              *piVar5 = *piVar5 + 1;
              UNLOCK();
              lVar26 = *(long *)(pfVar39 + 2);
              if (lVar26 == 0) goto LAB_0010ba67;
              goto LAB_0010b5a9;
            }
            uVar18 = uVar18 + 1;
            bVar6 = (char)iVar51 + 1U & 0x1f;
            uVar8 = uVar37 >> bVar6;
            uVar37 = uVar37 >> bVar6;
          } while (uVar8 != 0);
        }
        auVar58[0] = -(*pbVar1 == 0);
        auVar58[1] = -(pbVar1[1] == 0);
        auVar58[2] = -(pbVar1[2] == 0);
        auVar58[3] = -(pbVar1[3] == 0);
        auVar58[4] = -(pbVar1[4] == 0);
        auVar58[5] = -(pbVar1[5] == 0);
        auVar58[6] = -(pbVar1[6] == 0);
        auVar58[7] = -(pbVar1[7] == 0);
        auVar58[8] = -(pbVar1[8] == 0);
        auVar58[9] = -(pbVar1[9] == 0);
        auVar58[10] = -(pbVar1[10] == 0);
        auVar58[0xb] = -(pbVar1[0xb] == 0);
        auVar58[0xc] = -(pbVar1[0xc] == 0);
        auVar58[0xd] = -(pbVar1[0xd] == 0);
        auVar58[0xe] = -(pbVar1[0xe] == 0);
        auVar58[0xf] = -(bVar12 == 0);
        if ((((((((((((((((auVar58 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar58 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar58 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar58 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar58 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar58 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar58 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar58 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar58 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar58 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar58 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar58 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar58 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar58 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar58 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar12 == 0)
        break;
        uVar62 = uVar62 + 0x10;
      }
    }
LAB_0010ba67:
    uVar2 = (undefined4)Color::sWhite;
    fVar47 = _LC33;
    fVar45 = (_LC77 * (float)local_138) / __LC78;
    if ((float)((uint)fVar45 & _LC80) < _LC79) {
      fVar45 = (float)((uint)((float)(int)fVar45 +
                             (float)(-(uint)((float)(int)fVar45 < fVar45) & (uint)_LC33)) |
                      ~_LC80 & (uint)fVar45);
    }
    iVar51 = (int)fVar45;
    local_248 = (long)(iVar51 + 2) * 0x24;
    pfVar29 = &local_2a8;
    while (pfVar31 != (float *)((long)&local_2a8 - (local_248 + 0x17U & 0xfffffffffffff000))) {
      pfVar30 = (float *)((long)pfVar29 + -0x1000);
      *(undefined8 *)((long)pfVar29 + -8) = *(undefined8 *)((long)pfVar29 + -8);
      pfVar31 = (float *)((long)pfVar29 + -0x1000);
      pfVar29 = (float *)((long)pfVar29 + -0x1000);
    }
    uVar21 = (ulong)((uint)(local_248 + 0x17U) & 0xff0);
    lVar26 = -uVar21;
    puVar32 = (undefined1 *)((long)pfVar30 + lVar26);
    puVar33 = (undefined1 *)((long)pfVar30 + lVar26);
    puVar34 = (undefined1 *)((long)pfVar30 + lVar26);
    puVar35 = (undefined1 *)((long)pfVar30 + lVar26);
    if (uVar21 != 0) {
      *(undefined8 *)((long)pfVar30 + -8) = *(undefined8 *)((long)pfVar30 + -8);
    }
    local_258 = (undefined1 (*) [16])((ulong)((long)pfVar30 + lVar26 + 0xf) & 0xfffffffffffffff0);
    local_204 = iVar51 * 3;
    *local_258 = (undefined1  [16])0x0;
    auVar43 = ZEXT416(_LC6);
    lVar19 = (long)(iVar51 * 3) * 4;
    *(undefined4 *)local_258[2] = uVar2;
    local_258[1] = auVar43;
    local_168 = _LC39;
    local_158 = _LC37;
    fVar50 = _LC35;
    local_1f8 = _LC31;
    local_1a8 = _LC29;
    local_198 = _LC27;
    local_188 = _LC25;
    local_178 = _LC23;
    local_2a8 = _LC21;
    local_278._0_4_ = _LC19;
    local_268._0_4_ = _LC17;
    uStack_290 = _UNK_0010edb8;
    local_298 = __LC15;
    fVar45 = _LC33;
    if (iVar51 < 0) {
      uVar21 = lVar19 + 0x17;
      puVar33 = (undefined1 *)((long)pfVar30 + lVar26);
      while (puVar35 != (undefined1 *)((long)pfVar30 + (lVar26 - (uVar21 & 0xfffffffffffff000)))) {
        puVar32 = puVar33 + -0x1000;
        *(undefined8 *)(puVar33 + -8) = *(undefined8 *)(puVar33 + -8);
        puVar35 = puVar33 + -0x1000;
        puVar33 = puVar33 + -0x1000;
      }
      uVar21 = (ulong)((uint)uVar21 & 0xff0);
      lVar26 = -uVar21;
      pfVar29 = (float *)(puVar32 + lVar26);
      if (uVar21 != 0) {
        *(undefined8 *)(puVar32 + -8) = *(undefined8 *)(puVar32 + -8);
      }
      local_228._0_8_ = (ulong)(puVar32 + lVar26 + 0xf) & 0xfffffffffffffff0;
    }
    else {
      local_218 = (LOD *)CONCAT44(local_218._4_4_,(float)local_148);
      iVar22 = 0;
      fStack_174 = _LC23;
      fStack_170 = _LC23;
      fStack_16c = _LC23;
      local_138 = CONCAT44(_LC33,_LC33);
      uStack_130 = CONCAT44(_LC33,_LC33);
      fStack_184 = _LC25;
      fStack_180 = _LC25;
      fStack_17c = _LC25;
      local_148 = CONCAT44(_LC35,_LC35);
      uStack_140 = CONCAT44(_LC35,_LC35);
      fStack_194 = _LC27;
      fStack_190 = _LC27;
      fStack_18c = _LC27;
      fStack_154 = _LC37;
      fStack_150 = _LC37;
      fStack_14c = _LC37;
      fStack_1a4 = _LC29;
      fStack_1a0 = _LC29;
      fStack_19c = _LC29;
      fStack_164 = _LC39;
      fStack_160 = _LC39;
      fStack_15c = _LC39;
      fStack_1f4 = _LC31;
      fStack_1f0 = _LC31;
      fStack_1ec = _LC31;
      pauVar11 = local_258;
      do {
        *(undefined4 *)(pauVar11[2] + 8) = 0;
        fVar52 = (float)iVar22;
        iVar22 = iVar22 + 1;
        *(undefined4 *)pauVar11[3] = 0;
        *(float *)(pauVar11[3] + 4) = fVar47;
        *(undefined4 *)(pauVar11[3] + 8) = 0;
        *(undefined4 *)(pauVar11[3] + 0xc) = 0;
        *(undefined4 *)pauVar11[4] = 0;
        *(undefined4 *)(pauVar11[4] + 4) = uVar2;
        fVar48 = (fVar52 / (float)iVar51) * fVar41;
        uVar36 = (uint)local_298;
        fVar63 = (float)(uVar36 & (uint)fVar48 ^ (uint)fVar48);
        iVar49 = (int)(fVar63 * (float)local_268 + (float)local_278);
        fVar52 = (float)iVar49;
        fVar52 = ((fVar63 - fVar52 * local_2a8) - local_178 * fVar52) - fVar52 * local_188;
        fVar64 = fVar52 * fVar52;
        fVar63 = (((local_198 * fVar64 + local_1a8) * fVar64 + local_1f8) * fVar64 * fVar64 -
                 fVar64 * (float)local_278) + fVar45;
        fVar52 = ((fVar50 * fVar64 + local_158) * fVar64 + local_168) * fVar64 * fVar52 + fVar52;
        uVar62 = (iVar49 << 0x1f) >> 0x1f;
        *(uint *)(pauVar11[2] + 0xc) =
             ((uint)fVar48 ^ iVar49 << 0x1e) & uVar36 ^
             (~uVar62 & (uint)fVar52 | (uint)fVar63 & uVar62);
        *(uint *)*(undefined1 (*) [16])(pauVar11[2] + 4) =
             ((uint)fVar52 & uVar62 | ~uVar62 & (uint)fVar63) ^
             iVar49 << 0x1e & uVar36 ^ iVar49 << 0x1f;
        pauVar11 = (undefined1 (*) [16])(pauVar11[2] + 4);
      } while (iVar22 != iVar51 + 1);
      uVar21 = lVar19 + 0x17;
      puVar32 = (undefined1 *)((long)pfVar30 + lVar26);
      while (puVar34 != (undefined1 *)((long)pfVar30 + (lVar26 - (uVar21 & 0xfffffffffffff000)))) {
        puVar33 = puVar32 + -0x1000;
        *(undefined8 *)(puVar32 + -8) = *(undefined8 *)(puVar32 + -8);
        puVar34 = puVar32 + -0x1000;
        puVar32 = puVar32 + -0x1000;
      }
      uVar21 = (ulong)((uint)uVar21 & 0xff0);
      lVar26 = -uVar21;
      if (uVar21 != 0) {
        *(undefined8 *)(puVar33 + -8) = *(undefined8 *)(puVar33 + -8);
      }
      local_228._0_8_ = (ulong)(puVar33 + lVar26 + 0xf) & 0xfffffffffffffff0;
      pfVar29 = (float *)(puVar33 + lVar26);
      if (iVar51 != 0) {
        puVar23 = (undefined4 *)local_228._0_8_;
        iVar22 = 0;
        do {
          iVar49 = iVar22 + 1;
          *puVar23 = 0;
          puVar23[1] = iVar49;
          puVar23[2] = iVar22 + 2;
          puVar23 = puVar23 + 3;
          pfVar29 = (float *)(puVar33 + lVar26);
          iVar22 = iVar49;
        } while (iVar49 != iVar51);
      }
    }
    local_138 = CONCAT44(fVar45,fVar45);
    local_148 = CONCAT44(fVar50,fVar50);
    local_218 = (LOD *)CONCAT44(local_218._4_4_,iVar51 + 2);
    local_288 = CONCAT44(local_288._4_4_,fVar47);
    uStack_270 = CONCAT44((float)local_278,(float)local_278);
    local_238._0_4_ = uVar61;
    *(undefined8 *)((long)pfVar29 + -8) = 0x10be92;
    fStack_2a4 = local_2a8;
    fStack_2a0 = local_2a8;
    fStack_29c = local_2a8;
    fStack_1f4 = local_1f8;
    fStack_1f0 = local_1f8;
    fStack_1ec = local_1f8;
    fStack_1a4 = local_1a8;
    fStack_1a0 = local_1a8;
    fStack_19c = local_1a8;
    fStack_194 = local_198;
    fStack_190 = local_198;
    fStack_18c = local_198;
    fStack_184 = local_188;
    fStack_180 = local_188;
    fStack_17c = local_188;
    fStack_174 = local_178;
    fStack_170 = local_178;
    fStack_16c = local_178;
    fStack_164 = local_168;
    fStack_160 = local_168;
    fStack_15c = local_168;
    fStack_154 = local_158;
    fStack_150 = local_158;
    fStack_14c = local_158;
    uStack_140 = local_148;
    uStack_130 = local_138;
    uStack_260._0_4_ = (float)local_268;
    local_268._4_4_ = (float)local_268;
    uStack_260._4_4_ = (float)uStack_260;
    local_278._4_4_ = (float)local_278;
    pLVar20 = (LOD *)(*Allocate)(0x40);
    pauVar11 = local_258;
    fVar50 = uStack_260._4_4_;
    fVar45 = (float)uStack_260;
    fVar47 = local_268._4_4_;
    fVar41 = (float)local_268;
    local_268._0_4_ = (float)local_278;
    uStack_280 = uStack_290;
    uVar56 = local_298;
    uVar59 = local_228._0_8_;
    uVar2 = (undefined4)local_288;
    local_298._4_4_ = fStack_2a4;
    local_298._0_4_ = local_2a8;
    uStack_290._4_4_ = fStack_29c;
    uStack_290._0_4_ = fStack_2a0;
    if (local_258 < (undefined1 (*) [16])(*local_258 + local_248)) {
      auVar46._4_4_ = _LC46;
      auVar46._0_4_ = _LC46;
      auVar46._8_4_ = _LC46;
      auVar46._12_4_ = _LC46;
      local_228._4_4_ = _LC48;
      local_228._0_4_ = _LC48;
      local_228._8_4_ = _LC48;
      local_228._12_4_ = _LC48;
      pauVar24 = local_258;
      do {
        pauVar13 = pauVar24 + 2;
        auVar44._12_4_ = *(undefined4 *)(*pauVar24 + 8);
        auVar44._0_12_ = *(undefined1 (*) [12])*pauVar24;
        local_228 = minps(local_228,auVar44);
        auVar46 = maxps(auVar46,auVar44);
        pauVar24 = (undefined1 (*) [16])(*pauVar13 + 4);
      } while ((undefined1 (*) [16])(*pauVar13 + 4) < (undefined1 (*) [16])(*local_258 + local_248))
      ;
    }
    else {
      auVar46._4_4_ = _LC46;
      auVar46._0_4_ = _LC46;
      auVar46._8_4_ = _LC46;
      auVar46._12_4_ = _LC46;
      local_228._4_4_ = _LC48;
      local_228._0_4_ = _LC48;
      local_228._8_4_ = _LC48;
      local_228._12_4_ = _LC48;
    }
    uVar21 = (ulong)local_218 & 0xffffffff;
    local_288 = uVar56;
    local_278 = CONCAT44(local_278._4_4_,uVar2);
    local_268._4_4_ = local_278._4_4_;
    uStack_260 = uStack_270;
    local_258._0_4_ = fVar41;
    local_258._4_4_ = fVar47;
    uStack_250 = CONCAT44(fVar50,fVar45);
    local_248 = CONCAT44(local_248._4_4_,local_238._0_4_);
    pcVar4 = *(code **)(*param_9 + 0x28);
    *(undefined8 *)((long)pfVar29 + -8) = 0x10bf93;
    _local_238 = auVar46;
    local_218 = pLVar20;
    (*pcVar4)(&local_120,param_9,pauVar11,uVar21,uVar59,local_204);
    fVar45 = local_258._4_4_;
    fVar47 = (float)local_258;
    fVar41 = (float)local_268;
    uStack_270 = uStack_280;
    uVar56 = local_288;
    *(uint *)local_218 = 0;
    uVar2 = (float)local_248;
    *(undefined8 *)(local_218 + 0x18) = 0;
    local_118 = local_120;
    uVar53 = (float)local_278;
    *(undefined1 (*) [16])(local_218 + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(local_218 + 0x20) = local_228._0_8_;
    *(undefined8 *)(local_218 + 0x28) = local_228._8_8_;
    *(undefined1 (*) [8])(local_218 + 0x30) = local_238;
    *(undefined8 *)(local_218 + 0x38) = uStack_230;
    this = (Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
           (local_218 + 8);
    uVar54 = (undefined4)uStack_250;
    uVar55 = uStack_250._4_4_;
    uVar65 = (float)local_298;
    uVar66 = local_298._4_4_;
    uVar67 = (undefined4)uStack_290;
    uVar68 = uStack_290._4_4_;
    local_268._0_4_ = (float)local_278;
    uVar59 = uStack_280;
    if (local_120 != (long *)0x0) {
      local_228._0_8_ =
           (Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
           (local_218 + 8);
      local_288 = SUB168(_local_298,0);
      uStack_280 = SUB168(_local_298,8);
      local_278 = uVar56;
      local_268 = CONCAT44(local_268._4_4_,uVar53);
      local_258._0_4_ = fVar41;
      local_258._4_4_ = local_268._4_4_;
      local_248._0_4_ = fVar47;
      local_248._4_4_ = fVar45;
      uStack_240._0_4_ = (undefined4)uStack_250;
      uStack_240._4_4_ = uStack_250._4_4_;
      local_238._0_4_ = uVar2;
      pcVar4 = *(code **)(*local_120 + 0x10);
      *(undefined8 *)((long)pfVar29 + -8) = 0x10c049;
      uStack_250 = uStack_260;
      (*pcVar4)();
      this = (Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
             local_228._0_8_;
      fVar47 = (float)local_248;
      fVar45 = local_248._4_4_;
      uVar54 = (undefined4)uStack_240;
      uVar55 = uStack_240._4_4_;
      fVar41 = (float)local_258;
      local_268._4_4_ = local_258._4_4_;
      uStack_260._0_4_ = (float)(undefined4)uStack_250;
      uStack_260._4_4_ = (float)uStack_250._4_4_;
      uVar65 = (undefined4)local_288;
      uVar66 = local_288._4_4_;
      uVar67 = (undefined4)uStack_280;
      uVar68 = uStack_280._4_4_;
      uVar2 = local_238._0_4_;
      uVar56 = local_278;
      uVar59 = uStack_270;
    }
    local_278 = CONCAT44(uVar66,uVar65);
    uStack_270 = CONCAT44(uVar68,uVar67);
    local_258 = (undefined1 (*) [16])CONCAT44(local_258._4_4_,(float)local_268);
    local_248 = CONCAT44(local_268._4_4_,fVar41);
    uStack_240 = CONCAT44(uStack_260._4_4_,(float)uStack_260);
    local_238._4_4_ = fVar45;
    local_238._0_4_ = fVar47;
    uStack_230._0_4_ = uVar54;
    uStack_230._4_4_ = uVar55;
    local_228._0_4_ = uVar2;
    local_110 = 0x7f7fffff;
    *(undefined8 *)((long)pfVar29 + -8) = 0x10c0d6;
    local_268 = uVar56;
    uStack_260 = uVar59;
    Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>>::push_back
              (this,local_200);
    auVar43 = _local_238;
    uVar56 = local_248;
    uVar2 = local_228._0_4_;
    fVar41 = (float)local_258;
    pLVar20 = local_218;
    fVar47 = (float)local_238._0_4_;
    uVar53 = local_238._4_4_;
    uVar54 = (undefined4)uStack_230;
    uVar55 = uStack_230._4_4_;
    fVar45 = (float)local_248;
    uVar65 = local_248._4_4_;
    uVar66 = (undefined4)uStack_240;
    uVar67 = uStack_240._4_4_;
    fVar50 = (float)local_278;
    uVar68 = local_278._4_4_;
    uVar69 = (undefined4)uStack_270;
    uVar70 = uStack_270._4_4_;
    fStack_8c = (float)local_258;
    uVar61 = local_228._0_4_;
    uVar59 = local_268;
    uVar60 = uStack_260;
    if (local_118 != (long *)0x0) {
      local_200 = local_218;
      local_258 = (undefined1 (*) [16])local_268;
      uStack_250 = uStack_260;
      local_248 = CONCAT44(local_248._4_4_,fVar41);
      uStack_230._0_4_ = (undefined4)uStack_240;
      local_238 = (undefined1  [8])uVar56;
      uStack_230._4_4_ = uStack_240._4_4_;
      local_228 = auVar43;
      local_218 = (LOD *)CONCAT44(local_218._4_4_,uVar2);
      pcVar4 = *(code **)(*local_118 + 0x18);
      *(undefined8 *)((long)pfVar29 + -8) = 0x10c155;
      local_268 = local_278;
      uStack_260 = uStack_270;
      (*pcVar4)();
      pLVar20 = local_200;
      fVar47 = (float)local_228._0_4_;
      uVar53 = local_228._4_4_;
      uVar54 = local_228._8_4_;
      uVar55 = local_228._12_4_;
      fVar45 = (float)local_238._0_4_;
      uVar65 = local_238._4_4_;
      uVar66 = (undefined4)uStack_230;
      uVar67 = uStack_230._4_4_;
      fVar50 = (float)local_268;
      uVar68 = local_268._4_4_;
      uVar69 = (float)uStack_260;
      uVar70 = uStack_260._4_4_;
      fStack_8c = (float)local_248;
      uVar61 = (uint)(float)local_218;
      uVar59 = local_258;
      uVar60 = uStack_250;
    }
    pLVar28 = *(LOD **)(pfVar39 + 2);
    if (pLVar20 != pLVar28) {
      if (pLVar28 != (LOD *)0x0) {
        LOCK();
        *(uint *)pLVar28 = *(uint *)pLVar28 - 1;
        UNLOCK();
        if (*(uint *)pLVar28 == 0) {
          plVar25 = *(long **)(pLVar28 + 0x18);
          local_200 = pLVar28;
          if (plVar25 != (long *)0x0) {
            local_200 = pLVar20;
            local_268._0_4_ = fVar45;
            local_268._4_4_ = (float)uVar65;
            uStack_260._0_4_ = (float)uVar66;
            uStack_260._4_4_ = (float)uVar67;
            if ((*(long *)(pLVar28 + 8) != 0) &&
               (plVar38 = plVar25 + *(long *)(pLVar28 + 8) * 2, plVar25 < plVar38)) {
              local_228._0_8_ = pLVar28;
              local_248 = CONCAT44(local_248._4_4_,param_10);
              local_238._0_4_ = uVar61;
              local_258 = (undefined1 (*) [16])CONCAT44(uVar53,fVar47);
              uStack_250 = CONCAT44(uVar55,uVar54);
              local_268 = CONCAT44(uVar65,fVar45);
              uStack_260 = CONCAT44(uVar67,uVar66);
              local_278 = CONCAT44(local_278._4_4_,fStack_8c);
              local_298._4_4_ = uVar68;
              local_298._0_4_ = fVar50;
              uStack_290._0_4_ = uVar69;
              uStack_290._4_4_ = uVar70;
              local_288 = uVar59;
              uStack_280 = uVar60;
              local_218 = (LOD *)pfVar39;
              do {
                if ((long *)*plVar25 != (long *)0x0) {
                  pcVar4 = *(code **)(*(long *)*plVar25 + 0x18);
                  *(undefined8 *)((long)pfVar29 + -8) = 0x10c3f6;
                  (*pcVar4)();
                }
                plVar25 = plVar25 + 2;
              } while (plVar25 < plVar38);
              plVar25 = *(long **)(local_228._0_8_ + 0x18);
              pLVar28 = (LOD *)local_228._0_8_;
              pfVar39 = (float *)local_218;
              fVar47 = (float)local_258;
              uVar53 = local_258._4_4_;
              uVar54 = (undefined4)uStack_250;
              uVar55 = uStack_250._4_4_;
              fVar50 = (float)local_298;
              uVar68 = local_298._4_4_;
              uVar69 = (undefined4)uStack_290;
              uVar70 = uStack_290._4_4_;
              fStack_8c = (float)local_278;
              param_10 = (float)local_248;
              uVar61 = local_238._0_4_;
              uVar59 = local_288;
              uVar60 = uStack_280;
            }
            *(undefined8 *)(pLVar28 + 8) = 0;
            local_278 = CONCAT44(uVar68,fVar50);
            uStack_270 = CONCAT44(uVar70,uVar69);
            local_258 = (undefined1 (*) [16])CONCAT44(local_258._4_4_,fStack_8c);
            local_248 = CONCAT44(local_268._4_4_,(float)local_268);
            uStack_240 = CONCAT44(uStack_260._4_4_,(float)uStack_260);
            local_238._4_4_ = uVar53;
            local_238._0_4_ = fVar47;
            uStack_230._0_4_ = uVar54;
            uStack_230._4_4_ = uVar55;
            local_228._0_4_ = uVar61;
            *(undefined8 *)((long)pfVar29 + -8) = 0x10c49c;
            local_268 = uVar59;
            uStack_260 = uVar60;
            local_218 = local_200;
            local_200 = pLVar28;
            (*Free)(plVar25);
            pLVar20 = local_218;
            fVar47 = (float)local_238._0_4_;
            uVar53 = local_238._4_4_;
            uVar54 = (undefined4)uStack_230;
            uVar55 = uStack_230._4_4_;
            fVar45 = (float)local_248;
            uVar65 = local_248._4_4_;
            uVar66 = (undefined4)uStack_240;
            uVar67 = uStack_240._4_4_;
            fVar50 = (float)local_278;
            uVar68 = local_278._4_4_;
            uVar69 = (undefined4)uStack_270;
            uVar70 = uStack_270._4_4_;
            fStack_8c = (float)local_258;
            uVar61 = local_228._0_4_;
            uVar59 = local_268;
            uVar60 = uStack_260;
          }
          local_268 = CONCAT44(uVar68,fVar50);
          uStack_260 = CONCAT44(uVar70,uVar69);
          local_248 = CONCAT44(local_248._4_4_,fStack_8c);
          local_238._4_4_ = uVar65;
          local_238._0_4_ = fVar45;
          uStack_230._0_4_ = uVar66;
          uStack_230._4_4_ = uVar67;
          local_228._4_4_ = uVar53;
          local_228._0_4_ = fVar47;
          local_228._8_4_ = uVar54;
          local_228._12_4_ = uVar55;
          local_218 = (LOD *)CONCAT44(local_218._4_4_,uVar61);
          *(undefined8 *)((long)pfVar29 + -8) = 0x10c519;
          local_258 = (undefined1 (*) [16])uVar59;
          uStack_250 = uVar60;
          pLVar28 = local_200;
          local_200 = pLVar20;
          (*Free)(pLVar28);
          pLVar20 = local_200;
          fVar47 = (float)local_228._0_4_;
          uVar53 = local_228._4_4_;
          uVar54 = local_228._8_4_;
          uVar55 = local_228._12_4_;
          fVar45 = (float)local_238._0_4_;
          uVar65 = local_238._4_4_;
          uVar66 = (undefined4)uStack_230;
          uVar67 = uStack_230._4_4_;
          fVar50 = (float)local_268;
          uVar68 = local_268._4_4_;
          uVar69 = (float)uStack_260;
          uVar70 = uStack_260._4_4_;
          fStack_8c = (float)local_248;
          uVar59 = local_258;
          uVar60 = uStack_250;
          uVar61 = (uint)(float)local_218;
        }
      }
      *(LOD **)(pfVar39 + 2) = pLVar20;
      LOCK();
      *(uint *)pLVar20 = *(uint *)pLVar20 + 1;
      UNLOCK();
    }
    if (local_120 != (long *)0x0) {
      local_258 = (undefined1 (*) [16])CONCAT44(uVar68,fVar50);
      uStack_250 = CONCAT44(uVar70,uVar69);
      local_238._0_4_ = fStack_8c;
      local_228._4_4_ = uVar65;
      local_228._0_4_ = fVar45;
      local_228._8_4_ = uVar66;
      local_228._12_4_ = uVar67;
      local_218 = (LOD *)CONCAT44(uVar53,fVar47);
      local_200 = (LOD *)CONCAT44(local_200._4_4_,uVar61);
      pcVar4 = *(code **)(*local_120 + 0x18);
      *(undefined8 *)((long)pfVar29 + -8) = 0x10c1ed;
      local_248 = uVar59;
      uStack_240 = uVar60;
      uStack_210 = uVar54;
      uStack_20c = uVar55;
      (*pcVar4)();
      fVar47 = (float)local_218;
      fVar45 = (float)local_228._0_4_;
      fVar50 = (float)local_258;
      fStack_8c = (float)local_238._0_4_;
      uVar59 = local_248;
      uVar61 = (uint)local_200;
    }
    lVar26 = *(long *)(pfVar39 + 2);
  }
  else {
    lVar26 = *(long *)(pfVar39 + 2);
    local_1c8 = pfVar39 + 2;
    if (lVar26 == 0) goto LAB_0010ba58;
LAB_0010b5a9:
    local_178 = _LC23;
    fStack_174 = _LC23;
    fStack_170 = _LC23;
    fStack_16c = _LC23;
    local_188 = _LC25;
    fStack_184 = _LC25;
    fStack_180 = _LC25;
    fStack_17c = _LC25;
    local_198 = _LC27;
    fStack_194 = _LC27;
    fStack_190 = _LC27;
    fStack_18c = _LC27;
    local_1a8 = _LC29;
    fStack_1a4 = _LC29;
    fStack_1a0 = _LC29;
    fStack_19c = _LC29;
    local_1f8 = _LC31;
    fStack_1f4 = _LC31;
    fStack_1f0 = _LC31;
    fStack_1ec = _LC31;
    local_138._0_4_ = _LC33;
    local_148 = CONCAT44(_LC35,_LC35);
    uStack_140 = CONCAT44(_LC35,_LC35);
    local_158 = _LC37;
    fStack_154 = _LC37;
    fStack_150 = _LC37;
    fStack_14c = _LC37;
    local_168 = _LC39;
    fStack_164 = _LC39;
    fStack_160 = _LC39;
    fStack_15c = _LC39;
    fVar47 = _LC17;
    fVar45 = _LC19;
    fVar50 = _LC21;
    fStack_8c = _LC33;
    uVar59 = __LC15;
  }
  pfVar30 = local_1c8;
  uVar61 = uVar61 ^ _LC56;
  uVar36 = (uint)uVar59;
  fVar41 = (float)(uVar36 & uVar61 ^ uVar61);
  iVar51 = (int)(fVar47 * fVar41 + fVar45);
  fVar47 = (float)iVar51;
  fVar41 = ((fVar41 - fVar50 * fVar47) - local_178 * fVar47) - fVar47 * local_188;
  fVar47 = fVar41 * fVar41;
  uVar62 = (iVar51 << 0x1f) >> 0x1f;
  local_138._0_4_ =
       (((local_198 * fVar47 + local_1a8) * fVar47 + local_1f8) * fVar47 * fVar47 - fVar45 * fVar47)
       + (float)local_138;
  fVar41 = fVar41 + (((float)local_148 * fVar47 + local_158) * fVar47 + local_168) * fVar47 * fVar41
  ;
  local_68._0_4_ =
       (uVar61 ^ iVar51 << 0x1e) & uVar36 ^
       ((uint)(float)local_138 & uVar62 | ~uVar62 & (uint)fVar41);
  uVar61 = ((uint)fVar41 & uVar62 | ~uVar62 & (uint)(float)local_138) ^
           uVar36 & iVar51 << 0x1e ^ iVar51 << 0x1f;
  local_68._4_4_ = 0;
  local_68._8_4_ = uVar61;
  local_68._12_4_ = 0;
  local_58 = __LC9;
  uStack_50 = _UNK_0010ed98;
  local_78 = __LC7;
  uStack_70 = _UNK_0010ed88;
  local_88 = (ulong)uVar61;
  uStack_80 = (ulong)(_LC56 ^ local_68._0_4_);
  fVar41 = ((float)uStack_1d0 * local_1e8._4_4_ - (float)uStack_1e0 * local_1d8._4_4_) * local_1bc;
  fVar47 = ((float)local_1d8 * (float)uStack_1e0 - (float)local_1e8 * (float)uStack_1d0) * local_1bc
  ;
  fVar45 = (local_1d8._4_4_ * (float)local_1e8 - local_1e8._4_4_ * (float)local_1d8) * local_1bc;
  local_138 = CONCAT44(fVar47,fVar41);
  uStack_130 = (ulong)(uint)fVar45;
  local_98 = local_1b0;
  uVar56 = local_98;
  fStack_90 = (float)local_1b8;
  local_98._0_4_ = (float)local_1b0;
  local_98._4_4_ = (float)((ulong)local_1b0 >> 0x20);
  lVar19 = 0;
  do {
    fVar50 = *(float *)((long)&local_88 + lVar19);
    fVar52 = *(float *)((long)&local_88 + lVar19 + 4);
    fVar63 = *(float *)((long)&uStack_80 + lVar19);
    fVar48 = *(float *)((long)&uStack_80 + lVar19 + 4);
    *(float *)((long)local_108 + lVar19) =
         fVar48 * (float)local_98 +
         fVar50 * local_1bc * (float)local_1d8 + fVar52 * (float)local_1e8 * local_1bc +
         fVar63 * fVar41;
    *(float *)((long)local_108 + lVar19 + 4) =
         fVar48 * local_98._4_4_ +
         fVar50 * local_1bc * local_1d8._4_4_ + fVar52 * local_1e8._4_4_ * local_1bc +
         fVar63 * fVar47;
    *(float *)((long)local_108 + lVar19 + 8) =
         fVar48 * (float)local_1b8 +
         fVar50 * local_1bc * (float)uStack_1d0 + fVar52 * (float)uStack_1e0 * local_1bc +
         fVar63 * fVar45;
    *(float *)((long)local_108 + lVar19 + 0xc) =
         fVar48 * fStack_8c + fVar50 * 0.0 + fVar52 * 0.0 + fVar63 * 0.0;
    lVar19 = lVar19 + 0x10;
  } while (lVar19 != 0x40);
  pcVar4 = *(code **)(*param_9 + 0x30);
  lVar19 = 0;
  fVar41 = local_108[0xc];
  fVar47 = local_108[0xd];
  fVar45 = local_108[0xe];
  fVar50 = local_108[0xf];
  do {
    fVar52 = *(float *)(lVar26 + 0x20 + lVar19);
    fVar63 = *(float *)(lVar26 + 0x30 + lVar19);
    auVar42._0_8_ = CONCAT44(fVar52 * local_108[lVar19 + 1],fVar52 * local_108[lVar19]);
    auVar42._8_4_ = fVar52 * local_108[lVar19 + 2];
    auVar42._12_4_ = fVar52 * local_108[lVar19 + 3];
    lVar14 = lVar19 + 1;
    lVar15 = lVar19 + 2;
    lVar16 = lVar19 + 3;
    fVar52 = fVar63 * local_108[lVar19];
    lVar19 = lVar19 + 4;
    auVar57._8_4_ = auVar42._8_4_;
    auVar57._0_8_ = auVar42._0_8_;
    auVar57._12_4_ = auVar42._12_4_;
    auVar9._4_4_ = fVar63 * local_108[lVar14];
    auVar9._0_4_ = fVar52;
    auVar9._8_4_ = fVar63 * local_108[lVar15];
    auVar9._12_4_ = fVar63 * local_108[lVar16];
    auVar58 = minps(auVar57,auVar9);
    auVar10._4_4_ = fVar63 * local_108[lVar14];
    auVar10._0_4_ = fVar52;
    auVar10._8_4_ = fVar63 * local_108[lVar15];
    auVar10._12_4_ = fVar63 * local_108[lVar16];
    auVar43 = maxps(auVar42,auVar10);
    local_108[0xc] = local_108[0xc] + auVar58._0_4_;
    local_108[0xd] = local_108[0xd] + auVar58._4_4_;
    local_108[0xe] = local_108[0xe] + auVar58._8_4_;
    local_108[0xf] = local_108[0xf] + auVar58._12_4_;
    fVar41 = fVar41 + auVar43._0_4_;
    fVar47 = fVar47 + auVar43._4_4_;
    fVar45 = fVar45 + auVar43._8_4_;
    fVar50 = fVar50 + auVar43._12_4_;
  } while (lVar19 != 0xc);
  local_88 = CONCAT44(local_108[0xd],local_108[0xc]);
  uStack_80 = CONCAT44(local_108[0xf],local_108[0xe]);
  local_78 = CONCAT44(fVar47,fVar41);
  uStack_70 = CONCAT44(fVar50,fVar45);
  local_98 = uVar56;
  *(ulong *)((long)pfVar29 + -8) = (ulong)param_12;
  *(ulong *)((long)pfVar29 + -0x10) = param_11 & 0xffffffff;
  *(undefined8 *)((long)pfVar29 + -0x18) = 0x10ba36;
  (*pcVar4)(param_9,local_108,&local_88,param_10,pfVar30,2);
  pfVar39 = pfVar29;
LAB_0010b4d9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)pfVar39 + -8) = &UNK_0010c6a5;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DebugRenderer::DrawTaperedCylinder(JPH::Mat44 const&, float, float, float, float,
   JPH::Color, JPH::DebugRenderer::ECastShadow, JPH::DebugRenderer::EDrawMode) */

void JPH::DebugRenderer::DrawTaperedCylinder
               (float param_2,float param_3,float param_4,float param_5,long *param_1,long param_6,
               undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  byte *pbVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  LOD LVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  bool bVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  LOD *pLVar18;
  long *plVar19;
  int iVar20;
  long *plVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  int *piVar27;
  undefined4 *puVar28;
  long in_FS_OFFSET;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_80 = CONCAT44(param_5,param_4);
  local_88 = CONCAT44(param_3,param_2);
  bVar13 = HashTable<JPH::DebugRenderer::TaperedCylinder,std::pair<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::TaperedCylinderHasher,std::equal_to<JPH::DebugRenderer::TaperedCylinder>>
           ::InsertKey<false>((HashTable<JPH::DebugRenderer::TaperedCylinder,std::pair<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::TaperedCylinderHasher,std::equal_to<JPH::DebugRenderer::TaperedCylinder>>
                               *)(param_1 + 0x20),(TaperedCylinder *)&local_88,(uint *)&local_78);
  puVar1 = (undefined8 *)(param_1[0x20] + (ulong)(uint)local_78 * 0x18);
  if (bVar13) {
    puVar1[2] = 0;
    *puVar1 = local_88;
    puVar1[1] = uStack_80;
  }
  else {
    piVar27 = (int *)puVar1[2];
    if (piVar27 != (int *)0x0) goto LAB_0010c77c;
  }
  if ((int)param_1[0x26] != 0) {
    local_78 = 0.0;
    if (param_2 != 0.0) {
      local_78 = param_2;
    }
    uVar23 = 0xcbf29ce484222325;
    pLVar18 = (LOD *)&local_78;
    do {
      LVar6 = *pLVar18;
      pLVar18 = pLVar18 + 1;
      uVar23 = (uVar23 ^ (byte)LVar6) * 0x100000001b3;
    } while (pLVar18 != (LOD *)&local_74);
    local_78 = 0.0;
    if (param_3 != 0.0) {
      local_78 = param_3;
    }
    uVar25 = 0xcbf29ce484222325;
    pLVar18 = (LOD *)&local_78;
    do {
      LVar6 = *pLVar18;
      pLVar18 = pLVar18 + 1;
      uVar16 = (byte)LVar6 ^ uVar25;
      uVar25 = uVar16 * 0x100000001b3;
    } while (pLVar18 != (LOD *)&local_74);
    uVar16 = uVar16 * 0x21dbf4aaa9ed2837;
    uVar23 = ((uVar16 ^ uVar16 >> 0x27) * -0x415dda0614cbaa93 + uVar23) * -0x415dda0614cbaa93;
    uVar23 = (uVar23 ^ uVar23 >> 0x20) * -0x415dda0614cbaa93;
    uVar23 = (uVar23 ^ uVar23 >> 0x1d) * -0x415dda0614cbaa93;
    uVar23 = (uVar23 ^ uVar23 >> 0x20) * -0x415dda0614cbaa93;
    local_78 = 0.0;
    if (param_4 != 0.0) {
      local_78 = param_4;
    }
    uVar25 = 0xcbf29ce484222325;
    pLVar18 = (LOD *)&local_78;
    do {
      LVar6 = *pLVar18;
      pLVar18 = pLVar18 + 1;
      uVar16 = (byte)LVar6 ^ uVar25;
      uVar25 = uVar16 * 0x100000001b3;
    } while (pLVar18 != (LOD *)&local_74);
    uVar16 = uVar16 * 0x21dbf4aaa9ed2837;
    uVar23 = ((uVar16 ^ uVar16 >> 0x27) * -0x415dda0614cbaa93 + (uVar23 ^ uVar23 >> 0x1d)) *
             -0x415dda0614cbaa93;
    uVar23 = (uVar23 ^ uVar23 >> 0x20) * -0x415dda0614cbaa93;
    uVar23 = (uVar23 ^ uVar23 >> 0x1d) * -0x415dda0614cbaa93;
    uVar23 = (uVar23 ^ uVar23 >> 0x20) * -0x415dda0614cbaa93;
    local_78 = 0.0;
    if (param_5 != 0.0) {
      local_78 = param_5;
    }
    uVar25 = 0xcbf29ce484222325;
    pLVar18 = (LOD *)&local_78;
    do {
      LVar6 = *pLVar18;
      pLVar18 = pLVar18 + 1;
      uVar16 = (byte)LVar6 ^ uVar25;
      uVar25 = uVar16 * 0x100000001b3;
    } while (pLVar18 != (LOD *)&local_74);
    uVar16 = uVar16 * 0x21dbf4aaa9ed2837;
    uVar23 = ((uVar16 ^ uVar16 >> 0x27) * -0x415dda0614cbaa93 + (uVar23 >> 0x1d ^ uVar23)) *
             -0x415dda0614cbaa93;
    uVar23 = (uVar23 ^ uVar23 >> 0x20) * -0x415dda0614cbaa93;
    uVar23 = (uVar23 ^ uVar23 >> 0x1d) * -0x415dda0614cbaa93;
    uVar23 = (uVar23 ^ uVar23 >> 0x20) * -0x415dda0614cbaa93;
    uVar23 = uVar23 ^ uVar23 >> 0x1d;
    bVar29 = (byte)uVar23 | 0x80;
    uVar24 = *(uint *)((long)param_1 + 0x134) - 1;
    uVar22 = (uint)(uVar23 >> 7);
    while( true ) {
      uVar22 = uVar22 & uVar24;
      pbVar2 = (byte *)(param_1[0x25] + (ulong)uVar22);
      bVar12 = pbVar2[0xf];
      auVar31[0] = -(bVar29 == *pbVar2);
      auVar31[1] = -(bVar29 == pbVar2[1]);
      auVar31[2] = -(bVar29 == pbVar2[2]);
      auVar31[3] = -(bVar29 == pbVar2[3]);
      auVar31[4] = -(bVar29 == pbVar2[4]);
      auVar31[5] = -(bVar29 == pbVar2[5]);
      auVar31[6] = -(bVar29 == pbVar2[6]);
      auVar31[7] = -(bVar29 == pbVar2[7]);
      auVar31[8] = -(bVar29 == pbVar2[8]);
      auVar31[9] = -(bVar29 == pbVar2[9]);
      auVar31[10] = -(bVar29 == pbVar2[10]);
      auVar31[0xb] = -(bVar29 == pbVar2[0xb]);
      auVar31[0xc] = -(bVar29 == pbVar2[0xc]);
      auVar31[0xd] = -(bVar29 == pbVar2[0xd]);
      auVar31[0xe] = -(bVar29 == pbVar2[0xe]);
      auVar31[0xf] = -(bVar29 == bVar12);
      uVar8 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
      if (uVar8 != 0) {
        uVar26 = (uint)uVar8;
        uVar14 = uVar22;
        do {
          iVar20 = 0;
          for (uVar9 = uVar26; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            iVar20 = iVar20 + 1;
          }
          uVar14 = uVar14 + iVar20 & uVar24;
          pfVar3 = (float *)(param_1[0x24] + (ulong)uVar14 * 0x18);
          if ((((param_2 == *pfVar3) && (param_3 == pfVar3[1])) && (param_4 == pfVar3[2])) &&
             (param_5 == pfVar3[3])) {
            if ((*(uint *)((long)param_1 + 0x134) == uVar14) ||
               (piVar27 = *(int **)(pfVar3 + 4), piVar27 == (int *)0x0)) goto LAB_0010cbff;
            puVar1[2] = piVar27;
            LOCK();
            *piVar27 = *piVar27 + 1;
            UNLOCK();
            piVar27 = (int *)puVar1[2];
            if (piVar27 == (int *)0x0) goto LAB_0010cbff;
            goto LAB_0010c77c;
          }
          uVar14 = uVar14 + 1;
          bVar7 = (char)iVar20 + 1U & 0x1f;
          uVar9 = uVar26 >> bVar7;
          uVar26 = uVar26 >> bVar7;
        } while (uVar9 != 0);
      }
      auVar33[0] = -(*pbVar2 == 0);
      auVar33[1] = -(pbVar2[1] == 0);
      auVar33[2] = -(pbVar2[2] == 0);
      auVar33[3] = -(pbVar2[3] == 0);
      auVar33[4] = -(pbVar2[4] == 0);
      auVar33[5] = -(pbVar2[5] == 0);
      auVar33[6] = -(pbVar2[6] == 0);
      auVar33[7] = -(pbVar2[7] == 0);
      auVar33[8] = -(pbVar2[8] == 0);
      auVar33[9] = -(pbVar2[9] == 0);
      auVar33[10] = -(pbVar2[10] == 0);
      auVar33[0xb] = -(pbVar2[0xb] == 0);
      auVar33[0xc] = -(pbVar2[0xc] == 0);
      auVar33[0xd] = -(pbVar2[0xd] == 0);
      auVar33[0xe] = -(pbVar2[0xe] == 0);
      auVar33[0xf] = -(bVar12 == 0);
      if ((((((((((((((((auVar33 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar33 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar33 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar33 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar33 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar33 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar33 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar33 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar33 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar33 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar33 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar33 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar33 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar33 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar33 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar12 == 0) break;
      uVar22 = uVar22 + 0x10;
    }
  }
LAB_0010cbff:
  piVar17 = (int *)(*Allocate)(0x40);
  *(undefined1 (*) [16])(piVar17 + 2) = (undefined1  [16])0x0;
  piVar27 = (int *)puVar1[2];
  fVar4 = param_5;
  if (param_5 <= param_4) {
    fVar4 = param_4;
  }
  *piVar17 = 0;
  piVar17[6] = 0;
  piVar17[7] = 0;
  uVar22 = (uint)fVar4 ^ _LC56;
  *(ulong *)(piVar17 + 8) = CONCAT44(param_3,uVar22);
  *(ulong *)(piVar17 + 10) = CONCAT44(uVar22,uVar22);
  *(ulong *)(piVar17 + 0xc) = CONCAT44(param_2,fVar4);
  *(ulong *)(piVar17 + 0xe) = CONCAT44(fVar4,fVar4);
  if (piVar17 != piVar27) {
    if (piVar27 != (int *)0x0) {
      LOCK();
      *piVar27 = *piVar27 + -1;
      UNLOCK();
      if (*piVar27 == 0) {
        plVar21 = *(long **)(piVar27 + 6);
        if (plVar21 != (long *)0x0) {
          if ((*(long *)(piVar27 + 2) != 0) &&
             (plVar19 = plVar21 + *(long *)(piVar27 + 2) * 2, plVar21 < plVar19)) {
            do {
              if ((long *)*plVar21 != (long *)0x0) {
                (**(code **)(*(long *)*plVar21 + 0x18))();
              }
              plVar21 = plVar21 + 2;
            } while (plVar21 < plVar19);
            plVar21 = *(long **)(piVar27 + 6);
          }
          piVar27[2] = 0;
          piVar27[3] = 0;
          (*Free)(plVar21);
        }
        (*Free)(piVar27);
      }
    }
    puVar1[2] = piVar17;
    LOCK();
    *piVar17 = *piVar17 + 1;
    UNLOCK();
    piVar27 = (int *)puVar1[2];
  }
  puVar28 = &sLODDistanceForLevel;
  iVar20 = 4;
  do {
    CreateCylinder(param_2,param_3,param_4,param_5,(int)(LOD *)&local_78);
    uStack_70 = *puVar28;
    Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>>::push_back
              ((Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *)
               (piVar27 + 2),(LOD *)&local_78);
    if ((long *)CONCAT44(local_74,local_78) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(local_74,local_78) + 0x18))();
    }
    piVar27 = (int *)puVar1[2];
    puVar28 = puVar28 + 1;
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
LAB_0010c77c:
  lVar15 = 0;
  local_68 = *(float *)(param_6 + 0x30);
  fStack_64 = *(float *)(param_6 + 0x34);
  fStack_60 = *(float *)(param_6 + 0x38);
  fStack_5c = *(float *)(param_6 + 0x3c);
  local_58 = local_68;
  fStack_54 = fStack_64;
  fStack_50 = fStack_60;
  fStack_4c = fStack_5c;
  do {
    fVar4 = *(float *)((long)piVar27 + lVar15 + 0x20);
    fVar5 = *(float *)((long)piVar27 + lVar15 + 0x30);
    pfVar3 = (float *)(param_6 + lVar15 * 4);
    auVar30._0_8_ = CONCAT44(fVar4 * pfVar3[1],fVar4 * *pfVar3);
    auVar30._8_4_ = fVar4 * pfVar3[2];
    auVar30._12_4_ = fVar4 * pfVar3[3];
    pfVar3 = (float *)(param_6 + lVar15 * 4);
    lVar15 = lVar15 + 4;
    auVar32._8_4_ = auVar30._8_4_;
    auVar32._0_8_ = auVar30._0_8_;
    auVar32._12_4_ = auVar30._12_4_;
    auVar10._4_4_ = fVar5 * pfVar3[1];
    auVar10._0_4_ = fVar5 * *pfVar3;
    auVar10._8_4_ = fVar5 * pfVar3[2];
    auVar10._12_4_ = fVar5 * pfVar3[3];
    auVar33 = minps(auVar32,auVar10);
    auVar11._4_4_ = fVar5 * pfVar3[1];
    auVar11._0_4_ = fVar5 * *pfVar3;
    auVar11._8_4_ = fVar5 * pfVar3[2];
    auVar11._12_4_ = fVar5 * pfVar3[3];
    auVar31 = maxps(auVar30,auVar11);
    local_68 = local_68 + auVar33._0_4_;
    fStack_64 = fStack_64 + auVar33._4_4_;
    fStack_60 = fStack_60 + auVar33._8_4_;
    fStack_5c = fStack_5c + auVar33._12_4_;
    local_58 = local_58 + auVar31._0_4_;
    fStack_54 = fStack_54 + auVar31._4_4_;
    fStack_50 = fStack_50 + auVar31._8_4_;
    fStack_4c = fStack_4c + auVar31._12_4_;
  } while (lVar15 != 0xc);
  (**(code **)(*param_1 + 0x30))(param_1,param_6,&local_68,param_7,puVar1 + 2,0,param_8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::Array<JPH::DebugRenderer::LOD, JPH::STLAllocator<JPH::DebugRenderer::LOD>
   >::push_back(JPH::DebugRenderer::LOD&&) */

void __thiscall
JPH::Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>>::push_back
          (Array<JPH::DebugRenderer::LOD,JPH::STLAllocator<JPH::DebugRenderer::LOD>> *this,
          LOD *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  lVar4 = *(long *)this;
  uVar8 = lVar4 + 1;
  if (*(ulong *)(this + 8) < uVar8) {
    uVar3 = *(ulong *)(this + 8) * 2;
    if (uVar8 <= uVar3) {
      uVar8 = uVar3;
    }
    puVar5 = (undefined8 *)(*Allocate)(uVar8 << 4);
    puVar9 = *(undefined8 **)(this + 0x10);
    if (puVar9 != (undefined8 *)0x0) {
      lVar4 = *(long *)this;
      if (puVar5 < puVar9) {
        for (puVar6 = puVar5; puVar6 < puVar5 + lVar4 * 2; puVar6 = puVar6 + 2) {
          uVar2 = *puVar9;
          uVar1 = *(undefined4 *)(puVar9 + 1);
          puVar9 = puVar9 + 2;
          *puVar6 = uVar2;
          *(undefined4 *)(puVar6 + 1) = uVar1;
        }
      }
      else {
        puVar9 = puVar9 + lVar4 * 2 + -2;
        puVar6 = puVar5 + lVar4 * 2 + -2;
        if (!CARRY8(lVar4 * 0x10 - 0x10,(ulong)puVar5)) {
          do {
            uVar2 = *puVar9;
            uVar1 = *(undefined4 *)(puVar9 + 1);
            puVar7 = puVar6 + -2;
            puVar9 = puVar9 + -2;
            *puVar6 = uVar2;
            *(undefined4 *)(puVar6 + 1) = uVar1;
            puVar6 = puVar7;
          } while (puVar5 <= puVar7);
        }
      }
      (*Free)();
    }
    lVar4 = *(long *)this;
    *(undefined8 **)(this + 0x10) = puVar5;
    *(ulong *)(this + 8) = uVar8;
    uVar8 = lVar4 + 1;
  }
  else {
    puVar5 = *(undefined8 **)(this + 0x10);
  }
  *(ulong *)this = uVar8;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)(puVar5 + lVar4 * 2 + 1) = *(undefined4 *)(param_1 + 8);
  puVar5[lVar4 * 2] = uVar2;
  return;
}



/* JPH::HashTable<JPH::DebugRenderer::SwingConeLimits,
   std::pair<JPH::DebugRenderer::SwingConeLimits, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingConeLimits,
   JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::DebugRenderer::SwingConeLimitsHasher,
   std::equal_to<JPH::DebugRenderer::SwingConeLimits> >::GrowTable() */

void __thiscall
JPH::
HashTable<JPH::DebugRenderer::SwingConeLimits,std::pair<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingConeLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingConeLimits>>
::GrowTable(HashTable<JPH::DebugRenderer::SwingConeLimits,std::pair<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingConeLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingConeLimits>>
            *this)

{
  void *__s;
  char *pcVar1;
  uint uVar2;
  float *pfVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  float *pfVar16;
  float fVar17;
  uint uVar18;
  ulong uVar19;
  float *pfVar20;
  char *pcVar21;
  long in_FS_OFFSET;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float local_44;
  long local_40 [2];
  
  uVar2 = *(uint *)(this + 0x14);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (ulong)(uVar2 * 2);
  if (uVar2 * 2 < 0x10) {
    uVar8 = 0x10;
  }
  if (uVar2 <= (uint)uVar8) {
    pfVar3 = *(float **)this;
    pcVar21 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(uint *)(this + 0x14) = (uint)uVar8;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar8 * 7 >> 3);
    lVar9 = (*Allocate)(uVar8 * 0x11 + 0xf);
    *(long *)this = lVar9;
    __s = (void *)(lVar9 + (ulong)*(uint *)(this + 0x14) * 0x10);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (pfVar3 != (float *)0x0) {
      if (uVar2 != 0) {
        pfVar20 = pfVar3;
        do {
          while (-1 < *pcVar21) {
            pfVar20 = pfVar20 + 4;
            pcVar21 = pcVar21 + 1;
            if (pfVar3 + (ulong)uVar2 * 4 == pfVar20) goto LAB_0010d2a2;
          }
          iVar14 = *(int *)(this + 0x18);
          if (iVar14 == 0) {
            if ((ulong)*(uint *)(this + 0x14) <
                (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10))
                << 3) {
              rehash((uint)this);
              iVar14 = *(int *)(this + 0x18);
            }
            else {
              GrowTable(this);
              iVar14 = *(int *)(this + 0x18);
            }
          }
          local_44 = *pfVar20;
          fVar17 = pfVar20[1];
          if (local_44 == 0.0) {
            local_44 = 0.0;
          }
          pfVar16 = &local_44;
          uVar8 = 0xcbf29ce484222325;
          pfVar10 = pfVar16;
          do {
            bVar7 = *(byte *)pfVar10;
            pfVar10 = (float *)((long)pfVar10 + 1);
            uVar8 = (uVar8 ^ bVar7) * 0x100000001b3;
          } while (pfVar10 != (float *)local_40);
          if (fVar17 == 0.0) {
            fVar17 = 0.0;
          }
          local_44 = fVar17;
          uVar19 = 0xcbf29ce484222325;
          do {
            bVar7 = *(byte *)pfVar16;
            pfVar16 = (float *)((long)pfVar16 + 1);
            uVar11 = bVar7 ^ uVar19;
            uVar19 = uVar11 * 0x100000001b3;
          } while (pfVar16 != (float *)local_40);
          lVar9 = *(long *)(this + 8);
          uVar11 = uVar11 * 0x21dbf4aaa9ed2837;
          uVar18 = *(int *)(this + 0x14) - 1;
          uVar8 = ((uVar11 ^ uVar11 >> 0x27) * -0x415dda0614cbaa93 + uVar8) * -0x415dda0614cbaa93;
          uVar8 = (uVar8 ^ uVar8 >> 0x20) * -0x415dda0614cbaa93;
          uVar8 = (uVar8 ^ uVar8 >> 0x1d) * -0x415dda0614cbaa93;
          uVar8 = (uVar8 ^ uVar8 >> 0x20) * -0x415dda0614cbaa93;
          uVar8 = uVar8 ^ uVar8 >> 0x1d;
          bVar7 = (byte)uVar8 | 0x80;
          uVar13 = (uint)(uVar8 >> 7) & uVar18;
          pcVar1 = (char *)(lVar9 + (ulong)uVar13);
          auVar22[0] = -(*pcVar1 == '\0');
          auVar22[1] = -(pcVar1[1] == '\0');
          auVar22[2] = -(pcVar1[2] == '\0');
          auVar22[3] = -(pcVar1[3] == '\0');
          auVar22[4] = -(pcVar1[4] == '\0');
          auVar22[5] = -(pcVar1[5] == '\0');
          auVar22[6] = -(pcVar1[6] == '\0');
          auVar22[7] = -(pcVar1[7] == '\0');
          auVar22[8] = -(pcVar1[8] == '\0');
          auVar22[9] = -(pcVar1[9] == '\0');
          auVar22[10] = -(pcVar1[10] == '\0');
          auVar22[0xb] = -(pcVar1[0xb] == '\0');
          auVar22[0xc] = -(pcVar1[0xc] == '\0');
          auVar22[0xd] = -(pcVar1[0xd] == '\0');
          auVar22[0xe] = -(pcVar1[0xe] == '\0');
          auVar22[0xf] = -(pcVar1[0xf] == '\0');
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
                  (ushort)(auVar22[0xf] >> 7) << 0xf;
          while (uVar5 == 0) {
            uVar13 = uVar13 + 0x10 & uVar18;
            pcVar1 = (char *)(lVar9 + (ulong)uVar13);
            auVar23[0] = -(*pcVar1 == '\0');
            auVar23[1] = -(pcVar1[1] == '\0');
            auVar23[2] = -(pcVar1[2] == '\0');
            auVar23[3] = -(pcVar1[3] == '\0');
            auVar23[4] = -(pcVar1[4] == '\0');
            auVar23[5] = -(pcVar1[5] == '\0');
            auVar23[6] = -(pcVar1[6] == '\0');
            auVar23[7] = -(pcVar1[7] == '\0');
            auVar23[8] = -(pcVar1[8] == '\0');
            auVar23[9] = -(pcVar1[9] == '\0');
            auVar23[10] = -(pcVar1[10] == '\0');
            auVar23[0xb] = -(pcVar1[0xb] == '\0');
            auVar23[0xc] = -(pcVar1[0xc] == '\0');
            auVar23[0xd] = -(pcVar1[0xd] == '\0');
            auVar23[0xe] = -(pcVar1[0xe] == '\0');
            auVar23[0xf] = -(pcVar1[0xf] == '\0');
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
                    (ushort)(auVar23[0xf] >> 7) << 0xf;
          }
          iVar6 = 0;
          for (uVar15 = (uint)uVar5; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            iVar6 = iVar6 + 1;
          }
          pfVar16 = pfVar20 + 4;
          pcVar21 = pcVar21 + 1;
          *(int *)(this + 0x18) = iVar14 + -1;
          uVar18 = iVar6 + uVar13 & uVar18;
          *(byte *)(lVar9 + (ulong)uVar18) = bVar7;
          *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar18 - 0xf) + 0xf)
                   ) = bVar7;
          uVar4 = *(undefined8 *)pfVar20;
          puVar12 = (undefined8 *)((ulong)uVar18 * 0x10 + *(long *)this);
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
          *puVar12 = uVar4;
          puVar12[1] = *(undefined8 *)(pfVar20 + 2);
          pfVar20 = pfVar16;
        } while (pfVar3 + (ulong)uVar2 * 4 != pfVar16);
      }
LAB_0010d2a2:
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d2c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(pfVar3);
        return;
      }
      goto LAB_0010d2f1;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d2f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool JPH::HashTable<JPH::DebugRenderer::SwingConeLimits,
   std::pair<JPH::DebugRenderer::SwingConeLimits, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingConeLimits,
   JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::DebugRenderer::SwingConeLimitsHasher,
   std::equal_to<JPH::DebugRenderer::SwingConeLimits>
   >::InsertKey<false>(JPH::DebugRenderer::SwingConeLimits const&, unsigned int&) */

bool __thiscall
JPH::
HashTable<JPH::DebugRenderer::SwingConeLimits,std::pair<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingConeLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingConeLimits>>
::InsertKey<false>(HashTable<JPH::DebugRenderer::SwingConeLimits,std::pair<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingConeLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingConeLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingConeLimits>>
                   *this,SwingConeLimits *param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
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
  bool bVar23;
  float *pfVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  float *pfVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  long in_FS_OFFSET;
  byte bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x18) == 0) {
    if ((ulong)*(uint *)(this + 0x14) <
        (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10)) << 3) {
      rehash((uint)this);
    }
    else {
      GrowTable(this);
    }
  }
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  local_24 = 0.0;
  if (fVar3 != 0.0) {
    local_24 = fVar3;
  }
  pfVar28 = &local_24;
  uVar29 = 0xcbf29ce484222325;
  pfVar24 = pfVar28;
  do {
    bVar33 = *(byte *)pfVar24;
    pfVar24 = (float *)((long)pfVar24 + 1);
    uVar29 = (bVar33 ^ uVar29) * 0x100000001b3;
  } while (pfVar24 != (float *)&local_20);
  local_24 = 0.0;
  if (fVar4 != 0.0) {
    local_24 = fVar4;
  }
  uVar26 = 0xcbf29ce484222325;
  do {
    bVar33 = *(byte *)pfVar28;
    pfVar28 = (float *)((long)pfVar28 + 1);
    uVar25 = bVar33 ^ uVar26;
    uVar26 = uVar25 * 0x100000001b3;
  } while (pfVar28 != (float *)&local_20);
  uVar32 = 0xffffffff;
  uVar25 = uVar25 * 0x21dbf4aaa9ed2837;
  uVar1 = *(int *)(this + 0x14) - 1;
  uVar29 = ((uVar25 ^ uVar25 >> 0x27) * -0x415dda0614cbaa93 + uVar29) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x1d) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  uVar29 = uVar29 ^ uVar29 >> 0x1d;
  bVar33 = (byte)uVar29 | 0x80;
  uVar31 = (uint)(uVar29 >> 7);
  while( true ) {
    uVar31 = uVar31 & uVar1;
    uVar29 = (ulong)uVar31;
    pbVar2 = (byte *)(*(long *)(this + 8) + uVar29);
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
    auVar35[0] = -(bVar33 == bVar7);
    auVar35[1] = -(bVar33 == bVar8);
    auVar35[2] = -(bVar33 == bVar9);
    auVar35[3] = -(bVar33 == bVar10);
    auVar35[4] = -(bVar33 == bVar11);
    auVar35[5] = -(bVar33 == bVar12);
    auVar35[6] = -(bVar33 == bVar13);
    auVar35[7] = -(bVar33 == bVar14);
    auVar35[8] = -(bVar33 == bVar15);
    auVar35[9] = -(bVar33 == bVar16);
    auVar35[10] = -(bVar33 == bVar17);
    auVar35[0xb] = -(bVar33 == bVar18);
    auVar35[0xc] = -(bVar33 == bVar19);
    auVar35[0xd] = -(bVar33 == bVar20);
    auVar35[0xe] = -(bVar33 == bVar21);
    auVar35[0xf] = -(bVar33 == bVar22);
    uVar5 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
    uVar30 = (uint)uVar5;
    if (uVar5 != 0) {
      do {
        iVar6 = 0;
        for (uVar27 = uVar30; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          iVar6 = iVar6 + 1;
        }
        uVar27 = (int)uVar29 + iVar6 & uVar1;
        pfVar28 = (float *)((ulong)uVar27 * 0x10 + *(long *)this);
        if ((fVar3 == *pfVar28) && (fVar4 == pfVar28[1])) {
          bVar23 = false;
          goto LAB_0010d4d2;
        }
        uVar29 = (ulong)(uVar27 + 1);
        uVar30 = uVar30 >> ((char)iVar6 + 1U & 0x1f);
      } while (uVar30 != 0);
    }
    if (uVar32 == 0xffffffff) {
      auVar36[0] = -(bVar7 == _LC74);
      auVar36[1] = -(bVar8 == UNK_0010eef1);
      auVar36[2] = -(bVar9 == UNK_0010eef2);
      auVar36[3] = -(bVar10 == UNK_0010eef3);
      auVar36[4] = -(bVar11 == UNK_0010eef4);
      auVar36[5] = -(bVar12 == UNK_0010eef5);
      auVar36[6] = -(bVar13 == UNK_0010eef6);
      auVar36[7] = -(bVar14 == UNK_0010eef7);
      auVar36[8] = -(bVar15 == UNK_0010eef8);
      auVar36[9] = -(bVar16 == UNK_0010eef9);
      auVar36[10] = -(bVar17 == UNK_0010eefa);
      auVar36[0xb] = -(bVar18 == UNK_0010eefb);
      auVar36[0xc] = -(bVar19 == UNK_0010eefc);
      auVar36[0xd] = -(bVar20 == UNK_0010eefd);
      auVar36[0xe] = -(bVar21 == UNK_0010eefe);
      auVar36[0xf] = -(bVar22 == UNK_0010eeff);
      iVar6 = 0;
      uVar27 = (uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar36[0xf] >> 7) << 0xf);
      for (uVar30 = uVar27; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
        iVar6 = iVar6 + 1;
      }
      if (uVar27 != 0) {
        uVar32 = iVar6 + uVar31;
      }
    }
    auVar34[0] = -(bVar7 == 0);
    auVar34[1] = -(bVar8 == 0);
    auVar34[2] = -(bVar9 == 0);
    auVar34[3] = -(bVar10 == 0);
    auVar34[4] = -(bVar11 == 0);
    auVar34[5] = -(bVar12 == 0);
    auVar34[6] = -(bVar13 == 0);
    auVar34[7] = -(bVar14 == 0);
    auVar34[8] = -(bVar15 == 0);
    auVar34[9] = -(bVar16 == 0);
    auVar34[10] = -(bVar17 == 0);
    auVar34[0xb] = -(bVar18 == 0);
    auVar34[0xc] = -(bVar19 == 0);
    auVar34[0xd] = -(bVar20 == 0);
    auVar34[0xe] = -(bVar21 == 0);
    auVar34[0xf] = -(bVar22 == 0);
    uVar5 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
    if (uVar5 != 0) break;
    uVar31 = uVar31 + 0x10;
  }
  if (uVar32 == 0xffffffff) {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    iVar6 = 0;
    for (uVar32 = (uint)uVar5; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
      iVar6 = iVar6 + 1;
    }
    uVar32 = iVar6 + uVar31;
  }
  uVar27 = uVar1 & uVar32;
  *(byte *)(*(long *)(this + 8) + (ulong)uVar27) = bVar33;
  *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar27 - 0xf) + 0xf)) =
       bVar33;
  bVar23 = true;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_0010d4d2:
  *param_2 = uVar27;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar23;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HashTable<JPH::DebugRenderer::SwingPyramidLimits,
   std::pair<JPH::DebugRenderer::SwingPyramidLimits, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingPyramidLimits,
   JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::DebugRenderer::SwingPyramidLimitsHasher,
   std::equal_to<JPH::DebugRenderer::SwingPyramidLimits> >::GrowTable() */

void __thiscall
JPH::
HashTable<JPH::DebugRenderer::SwingPyramidLimits,std::pair<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingPyramidLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingPyramidLimits>>
::GrowTable(HashTable<JPH::DebugRenderer::SwingPyramidLimits,std::pair<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingPyramidLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingPyramidLimits>>
            *this)

{
  void *__s;
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined8 uVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  uint uVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  ulong uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  char *pcVar24;
  float *pfVar25;
  long in_FS_OFFSET;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float local_44;
  long local_40 [2];
  
  uVar17 = *(uint *)(this + 0x14);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (ulong)(uVar17 * 2);
  if (uVar17 * 2 < 0x10) {
    uVar11 = 0x10;
  }
  if (uVar17 <= (uint)uVar11) {
    pfVar4 = *(float **)this;
    *(uint *)(this + 0x14) = (uint)uVar11;
    pcVar24 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar11 * 7 >> 3);
    lVar12 = (*Allocate)(uVar11 * 0x19 + 0xf);
    *(long *)this = lVar12;
    __s = (void *)(lVar12 + (ulong)*(uint *)(this + 0x14) * 0x18);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (pfVar4 != (float *)0x0) {
      if (uVar17 != 0) {
        pcVar1 = pcVar24 + uVar17;
        pfVar25 = pfVar4;
        do {
          while (-1 < *pcVar24) {
            pcVar24 = pcVar24 + 1;
            pfVar25 = pfVar25 + 6;
            if (pcVar1 == pcVar24) goto LAB_0010d9d5;
          }
          iVar21 = *(int *)(this + 0x18);
          if (iVar21 == 0) {
            if ((ulong)*(uint *)(this + 0x14) <
                (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10))
                << 3) {
              rehash((uint)this);
              iVar21 = *(int *)(this + 0x18);
            }
            else {
              GrowTable(this);
              iVar21 = *(int *)(this + 0x18);
            }
          }
          local_44 = *pfVar25;
          fVar22 = pfVar25[3];
          fVar23 = pfVar25[2];
          fVar19 = pfVar25[1];
          if (local_44 == 0.0) {
            local_44 = 0.0;
          }
          pfVar16 = &local_44;
          uVar11 = 0xcbf29ce484222325;
          pfVar13 = pfVar16;
          do {
            bVar10 = *(byte *)pfVar13;
            pfVar13 = (float *)((long)pfVar13 + 1);
            uVar11 = (uVar11 ^ bVar10) * 0x100000001b3;
          } while (pfVar13 != (float *)local_40);
          if (fVar19 == 0.0) {
            fVar19 = 0.0;
          }
          local_44 = fVar19;
          uVar20 = 0xcbf29ce484222325;
          pfVar13 = pfVar16;
          do {
            bVar10 = *(byte *)pfVar13;
            pfVar13 = (float *)((long)pfVar13 + 1);
            uVar14 = bVar10 ^ uVar20;
            uVar20 = uVar14 * 0x100000001b3;
          } while (pfVar13 != (float *)local_40);
          uVar14 = uVar14 * 0x21dbf4aaa9ed2837;
          uVar11 = (uVar11 + (uVar14 ^ uVar14 >> 0x27) * -0x415dda0614cbaa93) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x1d) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          if (fVar23 == 0.0) {
            fVar23 = 0.0;
          }
          local_44 = fVar23;
          uVar20 = 0xcbf29ce484222325;
          pfVar13 = pfVar16;
          do {
            bVar10 = *(byte *)pfVar13;
            pfVar13 = (float *)((long)pfVar13 + 1);
            uVar14 = bVar10 ^ uVar20;
            uVar20 = uVar14 * 0x100000001b3;
          } while (pfVar13 != (float *)local_40);
          uVar14 = uVar14 * 0x21dbf4aaa9ed2837;
          uVar11 = ((uVar11 ^ uVar11 >> 0x1d) + (uVar14 ^ uVar14 >> 0x27) * -0x415dda0614cbaa93) *
                   -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x1d) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          if (fVar22 == 0.0) {
            fVar22 = 0.0;
          }
          local_44 = fVar22;
          uVar20 = 0xcbf29ce484222325;
          do {
            bVar10 = *(byte *)pfVar16;
            pfVar16 = (float *)((long)pfVar16 + 1);
            uVar14 = bVar10 ^ uVar20;
            uVar20 = uVar14 * 0x100000001b3;
          } while (pfVar16 != (float *)local_40);
          lVar12 = *(long *)(this + 8);
          uVar14 = uVar14 * 0x21dbf4aaa9ed2837;
          uVar18 = *(int *)(this + 0x14) - 1;
          uVar11 = ((uVar14 ^ uVar14 >> 0x27) * -0x415dda0614cbaa93 + (uVar11 ^ uVar11 >> 0x1d)) *
                   -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x1d) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          uVar11 = uVar11 ^ uVar11 >> 0x1d;
          bVar10 = (byte)uVar11 | 0x80;
          uVar17 = (uint)(uVar11 >> 7) & uVar18;
          pcVar2 = (char *)(lVar12 + (ulong)uVar17);
          auVar26[0] = -(*pcVar2 == '\0');
          auVar26[1] = -(pcVar2[1] == '\0');
          auVar26[2] = -(pcVar2[2] == '\0');
          auVar26[3] = -(pcVar2[3] == '\0');
          auVar26[4] = -(pcVar2[4] == '\0');
          auVar26[5] = -(pcVar2[5] == '\0');
          auVar26[6] = -(pcVar2[6] == '\0');
          auVar26[7] = -(pcVar2[7] == '\0');
          auVar26[8] = -(pcVar2[8] == '\0');
          auVar26[9] = -(pcVar2[9] == '\0');
          auVar26[10] = -(pcVar2[10] == '\0');
          auVar26[0xb] = -(pcVar2[0xb] == '\0');
          auVar26[0xc] = -(pcVar2[0xc] == '\0');
          auVar26[0xd] = -(pcVar2[0xd] == '\0');
          auVar26[0xe] = -(pcVar2[0xe] == '\0');
          auVar26[0xf] = -(pcVar2[0xf] == '\0');
          uVar6 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar26[0xf] >> 7) << 0xf;
          while (uVar6 == 0) {
            uVar17 = uVar17 + 0x10 & uVar18;
            pcVar2 = (char *)(lVar12 + (ulong)uVar17);
            auVar27[0] = -(*pcVar2 == '\0');
            auVar27[1] = -(pcVar2[1] == '\0');
            auVar27[2] = -(pcVar2[2] == '\0');
            auVar27[3] = -(pcVar2[3] == '\0');
            auVar27[4] = -(pcVar2[4] == '\0');
            auVar27[5] = -(pcVar2[5] == '\0');
            auVar27[6] = -(pcVar2[6] == '\0');
            auVar27[7] = -(pcVar2[7] == '\0');
            auVar27[8] = -(pcVar2[8] == '\0');
            auVar27[9] = -(pcVar2[9] == '\0');
            auVar27[10] = -(pcVar2[10] == '\0');
            auVar27[0xb] = -(pcVar2[0xb] == '\0');
            auVar27[0xc] = -(pcVar2[0xc] == '\0');
            auVar27[0xd] = -(pcVar2[0xd] == '\0');
            auVar27[0xe] = -(pcVar2[0xe] == '\0');
            auVar27[0xf] = -(pcVar2[0xf] == '\0');
            uVar6 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar27[0xf] >> 7) << 0xf;
          }
          iVar7 = 0;
          for (uVar15 = (uint)uVar6; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            iVar7 = iVar7 + 1;
          }
          pcVar24 = pcVar24 + 1;
          *(int *)(this + 0x18) = iVar21 + -1;
          uVar18 = iVar7 + uVar17 & uVar18;
          *(byte *)(lVar12 + (ulong)uVar18) = bVar10;
          *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar18 - 0xf) + 0xf)
                   ) = bVar10;
          uVar8 = *(undefined8 *)pfVar25;
          uVar9 = *(undefined8 *)(pfVar25 + 2);
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
          puVar3 = (undefined8 *)(*(long *)this + (ulong)uVar18 * 0x18);
          uVar5 = *(undefined8 *)(pfVar25 + 4);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          puVar3[2] = uVar5;
          pfVar25 = pfVar25 + 6;
        } while (pcVar1 != pcVar24);
      }
LAB_0010d9d5:
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(pfVar4);
        return;
      }
      goto LAB_0010da0e;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010da0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool JPH::HashTable<JPH::DebugRenderer::SwingPyramidLimits,
   std::pair<JPH::DebugRenderer::SwingPyramidLimits, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingPyramidLimits,
   JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::DebugRenderer::SwingPyramidLimitsHasher,
   std::equal_to<JPH::DebugRenderer::SwingPyramidLimits>
   >::InsertKey<false>(JPH::DebugRenderer::SwingPyramidLimits const&, unsigned int&) */

bool __thiscall
JPH::
HashTable<JPH::DebugRenderer::SwingPyramidLimits,std::pair<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingPyramidLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingPyramidLimits>>
::InsertKey<false>(HashTable<JPH::DebugRenderer::SwingPyramidLimits,std::pair<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::SwingPyramidLimits,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::SwingPyramidLimitsHasher,std::equal_to<JPH::DebugRenderer::SwingPyramidLimits>>
                   *this,SwingPyramidLimits *param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  int iVar8;
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
  byte bVar23;
  byte bVar24;
  uint uVar25;
  float *pfVar26;
  ulong uVar27;
  bool bVar28;
  ulong uVar29;
  uint uVar30;
  float *pfVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  long in_FS_OFFSET;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x18) == 0) {
    if ((ulong)*(uint *)(this + 0x14) <
        (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10)) << 3) {
      rehash((uint)this);
    }
    else {
      GrowTable(this);
    }
  }
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_1 + 4);
  local_24 = 0.0;
  if (fVar3 != 0.0) {
    local_24 = fVar3;
  }
  pfVar31 = &local_24;
  uVar29 = 0xcbf29ce484222325;
  pfVar26 = pfVar31;
  do {
    bVar35 = *(byte *)pfVar26;
    pfVar26 = (float *)((long)pfVar26 + 1);
    uVar29 = (uVar29 ^ bVar35) * 0x100000001b3;
  } while (pfVar26 != (float *)&local_20);
  local_24 = 0.0;
  if (fVar6 != 0.0) {
    local_24 = fVar6;
  }
  uVar33 = 0xcbf29ce484222325;
  pfVar26 = pfVar31;
  do {
    bVar35 = *(byte *)pfVar26;
    pfVar26 = (float *)((long)pfVar26 + 1);
    uVar27 = bVar35 ^ uVar33;
    uVar33 = uVar27 * 0x100000001b3;
  } while (pfVar26 != (float *)&local_20);
  uVar27 = uVar27 * 0x21dbf4aaa9ed2837;
  uVar29 = ((uVar27 ^ uVar27 >> 0x27) * -0x415dda0614cbaa93 + uVar29) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x1d) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  local_24 = 0.0;
  if (fVar5 != 0.0) {
    local_24 = fVar5;
  }
  uVar33 = 0xcbf29ce484222325;
  pfVar26 = pfVar31;
  do {
    bVar35 = *(byte *)pfVar26;
    pfVar26 = (float *)((long)pfVar26 + 1);
    uVar27 = bVar35 ^ uVar33;
    uVar33 = uVar27 * 0x100000001b3;
  } while (pfVar26 != (float *)&local_20);
  uVar27 = uVar27 * 0x21dbf4aaa9ed2837;
  uVar29 = ((uVar27 ^ uVar27 >> 0x27) * -0x415dda0614cbaa93 + (uVar29 >> 0x1d ^ uVar29)) *
           -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x1d) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  local_24 = 0.0;
  if (fVar4 != 0.0) {
    local_24 = fVar4;
  }
  uVar33 = 0xcbf29ce484222325;
  do {
    bVar35 = *(byte *)pfVar31;
    pfVar31 = (float *)((long)pfVar31 + 1);
    uVar27 = bVar35 ^ uVar33;
    uVar33 = uVar27 * 0x100000001b3;
  } while (pfVar31 != (float *)&local_20);
  uVar34 = 0xffffffff;
  uVar27 = uVar27 * 0x21dbf4aaa9ed2837;
  uVar1 = *(int *)(this + 0x14) - 1;
  uVar29 = ((uVar27 ^ uVar27 >> 0x27) * -0x415dda0614cbaa93 + (uVar29 >> 0x1d ^ uVar29)) *
           -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x1d) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  uVar29 = uVar29 ^ uVar29 >> 0x1d;
  bVar35 = (byte)uVar29 | 0x80;
  uVar30 = (uint)(uVar29 >> 7);
  while( true ) {
    uVar30 = uVar30 & uVar1;
    uVar29 = (ulong)uVar30;
    pbVar2 = (byte *)(*(long *)(this + 8) + uVar29);
    bVar9 = *pbVar2;
    bVar10 = pbVar2[1];
    bVar11 = pbVar2[2];
    bVar12 = pbVar2[3];
    bVar13 = pbVar2[4];
    bVar14 = pbVar2[5];
    bVar15 = pbVar2[6];
    bVar16 = pbVar2[7];
    bVar17 = pbVar2[8];
    bVar18 = pbVar2[9];
    bVar19 = pbVar2[10];
    bVar20 = pbVar2[0xb];
    bVar21 = pbVar2[0xc];
    bVar22 = pbVar2[0xd];
    bVar23 = pbVar2[0xe];
    bVar24 = pbVar2[0xf];
    auVar37[0] = -(bVar35 == bVar9);
    auVar37[1] = -(bVar35 == bVar10);
    auVar37[2] = -(bVar35 == bVar11);
    auVar37[3] = -(bVar35 == bVar12);
    auVar37[4] = -(bVar35 == bVar13);
    auVar37[5] = -(bVar35 == bVar14);
    auVar37[6] = -(bVar35 == bVar15);
    auVar37[7] = -(bVar35 == bVar16);
    auVar37[8] = -(bVar35 == bVar17);
    auVar37[9] = -(bVar35 == bVar18);
    auVar37[10] = -(bVar35 == bVar19);
    auVar37[0xb] = -(bVar35 == bVar20);
    auVar37[0xc] = -(bVar35 == bVar21);
    auVar37[0xd] = -(bVar35 == bVar22);
    auVar37[0xe] = -(bVar35 == bVar23);
    auVar37[0xf] = -(bVar35 == bVar24);
    uVar7 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
    uVar32 = (uint)uVar7;
    if (uVar7 != 0) {
      do {
        iVar8 = 0;
        for (uVar25 = uVar32; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
          iVar8 = iVar8 + 1;
        }
        uVar25 = (int)uVar29 + iVar8 & uVar1;
        pfVar31 = (float *)(*(long *)this + (ulong)uVar25 * 0x18);
        if ((((fVar3 == *pfVar31) && (fVar6 == pfVar31[1])) && (fVar5 == pfVar31[2])) &&
           (fVar4 == pfVar31[3])) {
          bVar28 = false;
          goto LAB_0010dd73;
        }
        uVar29 = (ulong)(uVar25 + 1);
        uVar32 = uVar32 >> ((char)iVar8 + 1U & 0x1f);
      } while (uVar32 != 0);
    }
    if (uVar34 == 0xffffffff) {
      auVar38[0] = -(bVar9 == _LC74);
      auVar38[1] = -(bVar10 == UNK_0010eef1);
      auVar38[2] = -(bVar11 == UNK_0010eef2);
      auVar38[3] = -(bVar12 == UNK_0010eef3);
      auVar38[4] = -(bVar13 == UNK_0010eef4);
      auVar38[5] = -(bVar14 == UNK_0010eef5);
      auVar38[6] = -(bVar15 == UNK_0010eef6);
      auVar38[7] = -(bVar16 == UNK_0010eef7);
      auVar38[8] = -(bVar17 == UNK_0010eef8);
      auVar38[9] = -(bVar18 == UNK_0010eef9);
      auVar38[10] = -(bVar19 == UNK_0010eefa);
      auVar38[0xb] = -(bVar20 == UNK_0010eefb);
      auVar38[0xc] = -(bVar21 == UNK_0010eefc);
      auVar38[0xd] = -(bVar22 == UNK_0010eefd);
      auVar38[0xe] = -(bVar23 == UNK_0010eefe);
      auVar38[0xf] = -(bVar24 == UNK_0010eeff);
      iVar8 = 0;
      uVar25 = (uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar38[0xf] >> 7) << 0xf);
      for (uVar32 = uVar25; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
        iVar8 = iVar8 + 1;
      }
      if (uVar25 != 0) {
        uVar34 = iVar8 + uVar30;
      }
    }
    auVar36[0] = -(bVar9 == 0);
    auVar36[1] = -(bVar10 == 0);
    auVar36[2] = -(bVar11 == 0);
    auVar36[3] = -(bVar12 == 0);
    auVar36[4] = -(bVar13 == 0);
    auVar36[5] = -(bVar14 == 0);
    auVar36[6] = -(bVar15 == 0);
    auVar36[7] = -(bVar16 == 0);
    auVar36[8] = -(bVar17 == 0);
    auVar36[9] = -(bVar18 == 0);
    auVar36[10] = -(bVar19 == 0);
    auVar36[0xb] = -(bVar20 == 0);
    auVar36[0xc] = -(bVar21 == 0);
    auVar36[0xd] = -(bVar22 == 0);
    auVar36[0xe] = -(bVar23 == 0);
    auVar36[0xf] = -(bVar24 == 0);
    uVar7 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
    if (uVar7 != 0) break;
    uVar30 = uVar30 + 0x10;
  }
  if (uVar34 == 0xffffffff) {
    iVar8 = 0;
    for (uVar34 = (uint)uVar7; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
      iVar8 = iVar8 + 1;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    uVar34 = iVar8 + uVar30;
  }
  uVar25 = uVar1 & uVar34;
  *(byte *)(*(long *)(this + 8) + (ulong)uVar25) = bVar35;
  *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar25 - 0xf) + 0xf)) =
       bVar35;
  bVar28 = true;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_0010dd73:
  *param_2 = uVar25;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar28;
}



/* JPH::HashTable<float, std::pair<float, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<float, JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::Hash<float>,
   std::equal_to<float> >::GrowTable() */

void __thiscall
JPH::
HashTable<float,std::pair<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<float>,std::equal_to<float>>
::GrowTable(HashTable<float,std::pair<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<float>,std::equal_to<float>>
            *this)

{
  void *__s;
  char *pcVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  undefined8 uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  int iVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float local_44;
  long local_40 [2];
  
  uVar3 = *(uint *)(this + 0x14);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (ulong)(uVar3 * 2);
  if (uVar3 * 2 < 0x10) {
    uVar9 = 0x10;
  }
  if (uVar3 <= (uint)uVar9) {
    pfVar4 = *(float **)this;
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
    if (pfVar4 != (float *)0x0) {
      if (uVar3 != 0) {
        pfVar12 = pfVar4;
        do {
          while (-1 < *pcVar17) {
            pfVar12 = pfVar12 + 4;
            pcVar17 = pcVar17 + 1;
            if (pfVar4 + (ulong)uVar3 * 4 == pfVar12) goto LAB_0010e0d7;
          }
          iVar16 = *(int *)(this + 0x18);
          if (iVar16 == 0) {
            if ((ulong)*(uint *)(this + 0x14) <
                (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10))
                << 3) {
              rehash((uint)this);
              iVar16 = *(int *)(this + 0x18);
            }
            else {
              GrowTable(this);
              iVar16 = *(int *)(this + 0x18);
            }
          }
          local_44 = *pfVar12;
          if (local_44 == 0.0) {
            local_44 = 0.0;
          }
          uVar9 = 0xcbf29ce484222325;
          pfVar11 = &local_44;
          do {
            bVar15 = *(byte *)pfVar11;
            pfVar11 = (float *)((long)pfVar11 + 1);
            uVar9 = (bVar15 ^ uVar9) * 0x100000001b3;
          } while (pfVar11 != (float *)local_40);
          lVar10 = *(long *)(this + 8);
          uVar14 = *(int *)(this + 0x14) - 1;
          bVar15 = (byte)uVar9 | 0x80;
          uVar8 = (uint)(uVar9 >> 7) & uVar14;
          pcVar1 = (char *)(lVar10 + (ulong)uVar8);
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
          uVar6 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
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
          while (uVar6 == 0) {
            uVar8 = uVar8 + 0x10 & uVar14;
            pcVar1 = (char *)(lVar10 + (ulong)uVar8);
            auVar19[0] = -(*pcVar1 == '\0');
            auVar19[1] = -(pcVar1[1] == '\0');
            auVar19[2] = -(pcVar1[2] == '\0');
            auVar19[3] = -(pcVar1[3] == '\0');
            auVar19[4] = -(pcVar1[4] == '\0');
            auVar19[5] = -(pcVar1[5] == '\0');
            auVar19[6] = -(pcVar1[6] == '\0');
            auVar19[7] = -(pcVar1[7] == '\0');
            auVar19[8] = -(pcVar1[8] == '\0');
            auVar19[9] = -(pcVar1[9] == '\0');
            auVar19[10] = -(pcVar1[10] == '\0');
            auVar19[0xb] = -(pcVar1[0xb] == '\0');
            auVar19[0xc] = -(pcVar1[0xc] == '\0');
            auVar19[0xd] = -(pcVar1[0xd] == '\0');
            auVar19[0xe] = -(pcVar1[0xe] == '\0');
            auVar19[0xf] = -(pcVar1[0xf] == '\0');
            uVar6 = (ushort)(SUB161(auVar19 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar19[0xf] >> 7) << 0xf;
          }
          iVar7 = 0;
          for (uVar13 = (uint)uVar6; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            iVar7 = iVar7 + 1;
          }
          pfVar11 = pfVar12 + 4;
          pcVar17 = pcVar17 + 1;
          *(int *)(this + 0x18) = iVar16 + -1;
          uVar14 = iVar7 + uVar8 & uVar14;
          *(byte *)(lVar10 + (ulong)uVar14) = bVar15;
          *(byte *)(*(long *)(this + 8) + (ulong)((uVar14 - 0xf & *(int *)(this + 0x14) - 1U) + 0xf)
                   ) = bVar15;
          fVar2 = *pfVar12;
          uVar5 = *(undefined8 *)(pfVar12 + 2);
          pfVar12 = (float *)((ulong)uVar14 * 0x10 + *(long *)this);
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
          *(undefined8 *)(pfVar12 + 2) = uVar5;
          *pfVar12 = fVar2;
          pfVar12 = pfVar11;
        } while (pfVar4 + (ulong)uVar3 * 4 != pfVar11);
      }
LAB_0010e0d7:
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(pfVar4);
        return;
      }
      goto LAB_0010e121;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e121:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool JPH::HashTable<float, std::pair<float, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<float, JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::Hash<float>,
   std::equal_to<float> >::InsertKey<false>(float const&, unsigned int&) */

bool __thiscall
JPH::
HashTable<float,std::pair<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<float>,std::equal_to<float>>
::InsertKey<false>(HashTable<float,std::pair<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<float,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::Hash<float>,std::equal_to<float>>
                   *this,float *param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  float fVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
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
  float *pfVar24;
  bool bVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  long in_FS_OFFSET;
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x18) == 0) {
    if ((ulong)*(uint *)(this + 0x14) <
        (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10)) << 3) {
      rehash((uint)this);
    }
    else {
      GrowTable(this);
    }
  }
  fVar3 = *param_1;
  local_24 = 0.0;
  if (fVar3 != 0.0) {
    local_24 = fVar3;
  }
  pfVar24 = &local_24;
  uVar27 = 0xcbf29ce484222325;
  do {
    bVar30 = *(byte *)pfVar24;
    pfVar24 = (float *)((long)pfVar24 + 1);
    uVar27 = (uVar27 ^ bVar30) * 0x100000001b3;
  } while (pfVar24 != (float *)&local_20);
  bVar30 = (byte)uVar27 | 0x80;
  uVar29 = 0xffffffff;
  uVar1 = *(int *)(this + 0x14) - 1;
  uVar28 = (uint)(uVar27 >> 7);
  while( true ) {
    uVar28 = uVar28 & uVar1;
    uVar27 = (ulong)uVar28;
    pbVar2 = (byte *)(*(long *)(this + 8) + uVar27);
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
    uVar5 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
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
    if (uVar5 != 0) {
      uVar26 = (uint)uVar5;
      do {
        iVar6 = 0;
        for (uVar23 = uVar26; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
          iVar6 = iVar6 + 1;
        }
        uVar23 = (int)uVar27 + iVar6 & uVar1;
        if (fVar3 == *(float *)(*(long *)this + (ulong)uVar23 * 0x10)) {
          bVar25 = false;
          goto LAB_0010e258;
        }
        uVar27 = (ulong)(uVar23 + 1);
        bVar4 = (char)iVar6 + 1U & 0x1f;
        uVar23 = uVar26 >> bVar4;
        uVar26 = uVar26 >> bVar4;
      } while (uVar23 != 0);
    }
    if (uVar29 == 0xffffffff) {
      auVar33[0] = -(bVar7 == _LC74);
      auVar33[1] = -(bVar8 == UNK_0010eef1);
      auVar33[2] = -(bVar9 == UNK_0010eef2);
      auVar33[3] = -(bVar10 == UNK_0010eef3);
      auVar33[4] = -(bVar11 == UNK_0010eef4);
      auVar33[5] = -(bVar12 == UNK_0010eef5);
      auVar33[6] = -(bVar13 == UNK_0010eef6);
      auVar33[7] = -(bVar14 == UNK_0010eef7);
      auVar33[8] = -(bVar15 == UNK_0010eef8);
      auVar33[9] = -(bVar16 == UNK_0010eef9);
      auVar33[10] = -(bVar17 == UNK_0010eefa);
      auVar33[0xb] = -(bVar18 == UNK_0010eefb);
      auVar33[0xc] = -(bVar19 == UNK_0010eefc);
      auVar33[0xd] = -(bVar20 == UNK_0010eefd);
      auVar33[0xe] = -(bVar21 == UNK_0010eefe);
      auVar33[0xf] = -(bVar22 == UNK_0010eeff);
      iVar6 = 0;
      uVar23 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
      for (uVar26 = uVar23; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
        iVar6 = iVar6 + 1;
      }
      if (uVar23 != 0) {
        uVar29 = iVar6 + uVar28;
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
    uVar5 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
    if (uVar5 != 0) break;
    uVar28 = uVar28 + 0x10;
  }
  if (uVar29 == 0xffffffff) {
    iVar6 = 0;
    for (uVar29 = (uint)uVar5; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
      iVar6 = iVar6 + 1;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    uVar29 = iVar6 + uVar28;
  }
  uVar23 = uVar1 & uVar29;
  *(byte *)(*(long *)(this + 8) + (ulong)uVar23) = bVar30;
  *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar23 - 0xf) + 0xf)) =
       bVar30;
  bVar25 = true;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_0010e258:
  *param_2 = uVar23;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar25;
}



/* JPH::HashTable<JPH::DebugRenderer::TaperedCylinder,
   std::pair<JPH::DebugRenderer::TaperedCylinder, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<JPH::DebugRenderer::TaperedCylinder,
   JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::DebugRenderer::TaperedCylinderHasher,
   std::equal_to<JPH::DebugRenderer::TaperedCylinder> >::GrowTable() */

void __thiscall
JPH::
HashTable<JPH::DebugRenderer::TaperedCylinder,std::pair<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::TaperedCylinderHasher,std::equal_to<JPH::DebugRenderer::TaperedCylinder>>
::GrowTable(HashTable<JPH::DebugRenderer::TaperedCylinder,std::pair<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::TaperedCylinderHasher,std::equal_to<JPH::DebugRenderer::TaperedCylinder>>
            *this)

{
  void *__s;
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined8 uVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  uint uVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  ulong uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  char *pcVar24;
  float *pfVar25;
  long in_FS_OFFSET;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float local_44;
  long local_40 [2];
  
  uVar17 = *(uint *)(this + 0x14);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (ulong)(uVar17 * 2);
  if (uVar17 * 2 < 0x10) {
    uVar11 = 0x10;
  }
  if (uVar17 <= (uint)uVar11) {
    pfVar4 = *(float **)this;
    *(uint *)(this + 0x14) = (uint)uVar11;
    pcVar24 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar11 * 7 >> 3);
    lVar12 = (*Allocate)(uVar11 * 0x19 + 0xf);
    *(long *)this = lVar12;
    __s = (void *)(lVar12 + (ulong)*(uint *)(this + 0x14) * 0x18);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (pfVar4 != (float *)0x0) {
      if (uVar17 != 0) {
        pcVar1 = pcVar24 + uVar17;
        pfVar25 = pfVar4;
        do {
          while (-1 < *pcVar24) {
            pcVar24 = pcVar24 + 1;
            pfVar25 = pfVar25 + 6;
            if (pcVar1 == pcVar24) goto LAB_0010e735;
          }
          iVar21 = *(int *)(this + 0x18);
          if (iVar21 == 0) {
            if ((ulong)*(uint *)(this + 0x14) <
                (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10))
                << 3) {
              rehash((uint)this);
              iVar21 = *(int *)(this + 0x18);
            }
            else {
              GrowTable(this);
              iVar21 = *(int *)(this + 0x18);
            }
          }
          local_44 = *pfVar25;
          fVar22 = pfVar25[3];
          fVar23 = pfVar25[2];
          fVar19 = pfVar25[1];
          if (local_44 == 0.0) {
            local_44 = 0.0;
          }
          pfVar16 = &local_44;
          uVar11 = 0xcbf29ce484222325;
          pfVar13 = pfVar16;
          do {
            bVar10 = *(byte *)pfVar13;
            pfVar13 = (float *)((long)pfVar13 + 1);
            uVar11 = (uVar11 ^ bVar10) * 0x100000001b3;
          } while (pfVar13 != (float *)local_40);
          if (fVar19 == 0.0) {
            fVar19 = 0.0;
          }
          local_44 = fVar19;
          uVar20 = 0xcbf29ce484222325;
          pfVar13 = pfVar16;
          do {
            bVar10 = *(byte *)pfVar13;
            pfVar13 = (float *)((long)pfVar13 + 1);
            uVar14 = bVar10 ^ uVar20;
            uVar20 = uVar14 * 0x100000001b3;
          } while (pfVar13 != (float *)local_40);
          uVar14 = uVar14 * 0x21dbf4aaa9ed2837;
          uVar11 = (uVar11 + (uVar14 ^ uVar14 >> 0x27) * -0x415dda0614cbaa93) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x1d) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          if (fVar23 == 0.0) {
            fVar23 = 0.0;
          }
          local_44 = fVar23;
          uVar20 = 0xcbf29ce484222325;
          pfVar13 = pfVar16;
          do {
            bVar10 = *(byte *)pfVar13;
            pfVar13 = (float *)((long)pfVar13 + 1);
            uVar14 = bVar10 ^ uVar20;
            uVar20 = uVar14 * 0x100000001b3;
          } while (pfVar13 != (float *)local_40);
          uVar14 = uVar14 * 0x21dbf4aaa9ed2837;
          uVar11 = ((uVar11 ^ uVar11 >> 0x1d) + (uVar14 ^ uVar14 >> 0x27) * -0x415dda0614cbaa93) *
                   -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x1d) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          if (fVar22 == 0.0) {
            fVar22 = 0.0;
          }
          local_44 = fVar22;
          uVar20 = 0xcbf29ce484222325;
          do {
            bVar10 = *(byte *)pfVar16;
            pfVar16 = (float *)((long)pfVar16 + 1);
            uVar14 = bVar10 ^ uVar20;
            uVar20 = uVar14 * 0x100000001b3;
          } while (pfVar16 != (float *)local_40);
          lVar12 = *(long *)(this + 8);
          uVar14 = uVar14 * 0x21dbf4aaa9ed2837;
          uVar18 = *(int *)(this + 0x14) - 1;
          uVar11 = ((uVar14 ^ uVar14 >> 0x27) * -0x415dda0614cbaa93 + (uVar11 ^ uVar11 >> 0x1d)) *
                   -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x1d) * -0x415dda0614cbaa93;
          uVar11 = (uVar11 ^ uVar11 >> 0x20) * -0x415dda0614cbaa93;
          uVar11 = uVar11 ^ uVar11 >> 0x1d;
          bVar10 = (byte)uVar11 | 0x80;
          uVar17 = (uint)(uVar11 >> 7) & uVar18;
          pcVar2 = (char *)(lVar12 + (ulong)uVar17);
          auVar26[0] = -(*pcVar2 == '\0');
          auVar26[1] = -(pcVar2[1] == '\0');
          auVar26[2] = -(pcVar2[2] == '\0');
          auVar26[3] = -(pcVar2[3] == '\0');
          auVar26[4] = -(pcVar2[4] == '\0');
          auVar26[5] = -(pcVar2[5] == '\0');
          auVar26[6] = -(pcVar2[6] == '\0');
          auVar26[7] = -(pcVar2[7] == '\0');
          auVar26[8] = -(pcVar2[8] == '\0');
          auVar26[9] = -(pcVar2[9] == '\0');
          auVar26[10] = -(pcVar2[10] == '\0');
          auVar26[0xb] = -(pcVar2[0xb] == '\0');
          auVar26[0xc] = -(pcVar2[0xc] == '\0');
          auVar26[0xd] = -(pcVar2[0xd] == '\0');
          auVar26[0xe] = -(pcVar2[0xe] == '\0');
          auVar26[0xf] = -(pcVar2[0xf] == '\0');
          uVar6 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar26[0xf] >> 7) << 0xf;
          while (uVar6 == 0) {
            uVar17 = uVar17 + 0x10 & uVar18;
            pcVar2 = (char *)(lVar12 + (ulong)uVar17);
            auVar27[0] = -(*pcVar2 == '\0');
            auVar27[1] = -(pcVar2[1] == '\0');
            auVar27[2] = -(pcVar2[2] == '\0');
            auVar27[3] = -(pcVar2[3] == '\0');
            auVar27[4] = -(pcVar2[4] == '\0');
            auVar27[5] = -(pcVar2[5] == '\0');
            auVar27[6] = -(pcVar2[6] == '\0');
            auVar27[7] = -(pcVar2[7] == '\0');
            auVar27[8] = -(pcVar2[8] == '\0');
            auVar27[9] = -(pcVar2[9] == '\0');
            auVar27[10] = -(pcVar2[10] == '\0');
            auVar27[0xb] = -(pcVar2[0xb] == '\0');
            auVar27[0xc] = -(pcVar2[0xc] == '\0');
            auVar27[0xd] = -(pcVar2[0xd] == '\0');
            auVar27[0xe] = -(pcVar2[0xe] == '\0');
            auVar27[0xf] = -(pcVar2[0xf] == '\0');
            uVar6 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar27[0xf] >> 7) << 0xf;
          }
          iVar7 = 0;
          for (uVar15 = (uint)uVar6; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            iVar7 = iVar7 + 1;
          }
          pcVar24 = pcVar24 + 1;
          *(int *)(this + 0x18) = iVar21 + -1;
          uVar18 = iVar7 + uVar17 & uVar18;
          *(byte *)(lVar12 + (ulong)uVar18) = bVar10;
          *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar18 - 0xf) + 0xf)
                   ) = bVar10;
          uVar8 = *(undefined8 *)pfVar25;
          uVar9 = *(undefined8 *)(pfVar25 + 2);
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
          puVar3 = (undefined8 *)(*(long *)this + (ulong)uVar18 * 0x18);
          uVar5 = *(undefined8 *)(pfVar25 + 4);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          puVar3[2] = uVar5;
          pfVar25 = pfVar25 + 6;
        } while (pcVar1 != pcVar24);
      }
LAB_0010e735:
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(pfVar4);
        return;
      }
      goto LAB_0010e76e;
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e76e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* bool JPH::HashTable<JPH::DebugRenderer::TaperedCylinder,
   std::pair<JPH::DebugRenderer::TaperedCylinder, JPH::Ref<JPH::DebugRenderer::Geometry> >,
   JPH::UnorderedMapDetail<JPH::DebugRenderer::TaperedCylinder,
   JPH::Ref<JPH::DebugRenderer::Geometry> >, JPH::DebugRenderer::TaperedCylinderHasher,
   std::equal_to<JPH::DebugRenderer::TaperedCylinder>
   >::InsertKey<false>(JPH::DebugRenderer::TaperedCylinder const&, unsigned int&) */

bool __thiscall
JPH::
HashTable<JPH::DebugRenderer::TaperedCylinder,std::pair<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::TaperedCylinderHasher,std::equal_to<JPH::DebugRenderer::TaperedCylinder>>
::InsertKey<false>(HashTable<JPH::DebugRenderer::TaperedCylinder,std::pair<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::UnorderedMapDetail<JPH::DebugRenderer::TaperedCylinder,JPH::Ref<JPH::DebugRenderer::Geometry>>,JPH::DebugRenderer::TaperedCylinderHasher,std::equal_to<JPH::DebugRenderer::TaperedCylinder>>
                   *this,TaperedCylinder *param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  int iVar8;
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
  byte bVar23;
  byte bVar24;
  uint uVar25;
  float *pfVar26;
  ulong uVar27;
  bool bVar28;
  ulong uVar29;
  uint uVar30;
  float *pfVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  long in_FS_OFFSET;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x18) == 0) {
    if ((ulong)*(uint *)(this + 0x14) <
        (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10)) << 3) {
      rehash((uint)this);
    }
    else {
      GrowTable(this);
    }
  }
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_1 + 4);
  local_24 = 0.0;
  if (fVar3 != 0.0) {
    local_24 = fVar3;
  }
  pfVar31 = &local_24;
  uVar29 = 0xcbf29ce484222325;
  pfVar26 = pfVar31;
  do {
    bVar35 = *(byte *)pfVar26;
    pfVar26 = (float *)((long)pfVar26 + 1);
    uVar29 = (uVar29 ^ bVar35) * 0x100000001b3;
  } while (pfVar26 != (float *)&local_20);
  local_24 = 0.0;
  if (fVar6 != 0.0) {
    local_24 = fVar6;
  }
  uVar33 = 0xcbf29ce484222325;
  pfVar26 = pfVar31;
  do {
    bVar35 = *(byte *)pfVar26;
    pfVar26 = (float *)((long)pfVar26 + 1);
    uVar27 = bVar35 ^ uVar33;
    uVar33 = uVar27 * 0x100000001b3;
  } while (pfVar26 != (float *)&local_20);
  uVar27 = uVar27 * 0x21dbf4aaa9ed2837;
  uVar29 = ((uVar27 ^ uVar27 >> 0x27) * -0x415dda0614cbaa93 + uVar29) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x1d) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  local_24 = 0.0;
  if (fVar5 != 0.0) {
    local_24 = fVar5;
  }
  uVar33 = 0xcbf29ce484222325;
  pfVar26 = pfVar31;
  do {
    bVar35 = *(byte *)pfVar26;
    pfVar26 = (float *)((long)pfVar26 + 1);
    uVar27 = bVar35 ^ uVar33;
    uVar33 = uVar27 * 0x100000001b3;
  } while (pfVar26 != (float *)&local_20);
  uVar27 = uVar27 * 0x21dbf4aaa9ed2837;
  uVar29 = ((uVar27 ^ uVar27 >> 0x27) * -0x415dda0614cbaa93 + (uVar29 >> 0x1d ^ uVar29)) *
           -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x1d) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  local_24 = 0.0;
  if (fVar4 != 0.0) {
    local_24 = fVar4;
  }
  uVar33 = 0xcbf29ce484222325;
  do {
    bVar35 = *(byte *)pfVar31;
    pfVar31 = (float *)((long)pfVar31 + 1);
    uVar27 = bVar35 ^ uVar33;
    uVar33 = uVar27 * 0x100000001b3;
  } while (pfVar31 != (float *)&local_20);
  uVar34 = 0xffffffff;
  uVar27 = uVar27 * 0x21dbf4aaa9ed2837;
  uVar1 = *(int *)(this + 0x14) - 1;
  uVar29 = ((uVar27 ^ uVar27 >> 0x27) * -0x415dda0614cbaa93 + (uVar29 >> 0x1d ^ uVar29)) *
           -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x1d) * -0x415dda0614cbaa93;
  uVar29 = (uVar29 ^ uVar29 >> 0x20) * -0x415dda0614cbaa93;
  uVar29 = uVar29 ^ uVar29 >> 0x1d;
  bVar35 = (byte)uVar29 | 0x80;
  uVar30 = (uint)(uVar29 >> 7);
  while( true ) {
    uVar30 = uVar30 & uVar1;
    uVar29 = (ulong)uVar30;
    pbVar2 = (byte *)(*(long *)(this + 8) + uVar29);
    bVar9 = *pbVar2;
    bVar10 = pbVar2[1];
    bVar11 = pbVar2[2];
    bVar12 = pbVar2[3];
    bVar13 = pbVar2[4];
    bVar14 = pbVar2[5];
    bVar15 = pbVar2[6];
    bVar16 = pbVar2[7];
    bVar17 = pbVar2[8];
    bVar18 = pbVar2[9];
    bVar19 = pbVar2[10];
    bVar20 = pbVar2[0xb];
    bVar21 = pbVar2[0xc];
    bVar22 = pbVar2[0xd];
    bVar23 = pbVar2[0xe];
    bVar24 = pbVar2[0xf];
    auVar37[0] = -(bVar35 == bVar9);
    auVar37[1] = -(bVar35 == bVar10);
    auVar37[2] = -(bVar35 == bVar11);
    auVar37[3] = -(bVar35 == bVar12);
    auVar37[4] = -(bVar35 == bVar13);
    auVar37[5] = -(bVar35 == bVar14);
    auVar37[6] = -(bVar35 == bVar15);
    auVar37[7] = -(bVar35 == bVar16);
    auVar37[8] = -(bVar35 == bVar17);
    auVar37[9] = -(bVar35 == bVar18);
    auVar37[10] = -(bVar35 == bVar19);
    auVar37[0xb] = -(bVar35 == bVar20);
    auVar37[0xc] = -(bVar35 == bVar21);
    auVar37[0xd] = -(bVar35 == bVar22);
    auVar37[0xe] = -(bVar35 == bVar23);
    auVar37[0xf] = -(bVar35 == bVar24);
    uVar7 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
    uVar32 = (uint)uVar7;
    if (uVar7 != 0) {
      do {
        iVar8 = 0;
        for (uVar25 = uVar32; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
          iVar8 = iVar8 + 1;
        }
        uVar25 = (int)uVar29 + iVar8 & uVar1;
        pfVar31 = (float *)(*(long *)this + (ulong)uVar25 * 0x18);
        if ((((fVar3 == *pfVar31) && (fVar6 == pfVar31[1])) && (fVar5 == pfVar31[2])) &&
           (fVar4 == pfVar31[3])) {
          bVar28 = false;
          goto LAB_0010ead3;
        }
        uVar29 = (ulong)(uVar25 + 1);
        uVar32 = uVar32 >> ((char)iVar8 + 1U & 0x1f);
      } while (uVar32 != 0);
    }
    if (uVar34 == 0xffffffff) {
      auVar38[0] = -(bVar9 == _LC74);
      auVar38[1] = -(bVar10 == UNK_0010eef1);
      auVar38[2] = -(bVar11 == UNK_0010eef2);
      auVar38[3] = -(bVar12 == UNK_0010eef3);
      auVar38[4] = -(bVar13 == UNK_0010eef4);
      auVar38[5] = -(bVar14 == UNK_0010eef5);
      auVar38[6] = -(bVar15 == UNK_0010eef6);
      auVar38[7] = -(bVar16 == UNK_0010eef7);
      auVar38[8] = -(bVar17 == UNK_0010eef8);
      auVar38[9] = -(bVar18 == UNK_0010eef9);
      auVar38[10] = -(bVar19 == UNK_0010eefa);
      auVar38[0xb] = -(bVar20 == UNK_0010eefb);
      auVar38[0xc] = -(bVar21 == UNK_0010eefc);
      auVar38[0xd] = -(bVar22 == UNK_0010eefd);
      auVar38[0xe] = -(bVar23 == UNK_0010eefe);
      auVar38[0xf] = -(bVar24 == UNK_0010eeff);
      iVar8 = 0;
      uVar25 = (uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar38[0xf] >> 7) << 0xf);
      for (uVar32 = uVar25; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
        iVar8 = iVar8 + 1;
      }
      if (uVar25 != 0) {
        uVar34 = iVar8 + uVar30;
      }
    }
    auVar36[0] = -(bVar9 == 0);
    auVar36[1] = -(bVar10 == 0);
    auVar36[2] = -(bVar11 == 0);
    auVar36[3] = -(bVar12 == 0);
    auVar36[4] = -(bVar13 == 0);
    auVar36[5] = -(bVar14 == 0);
    auVar36[6] = -(bVar15 == 0);
    auVar36[7] = -(bVar16 == 0);
    auVar36[8] = -(bVar17 == 0);
    auVar36[9] = -(bVar18 == 0);
    auVar36[10] = -(bVar19 == 0);
    auVar36[0xb] = -(bVar20 == 0);
    auVar36[0xc] = -(bVar21 == 0);
    auVar36[0xd] = -(bVar22 == 0);
    auVar36[0xe] = -(bVar23 == 0);
    auVar36[0xf] = -(bVar24 == 0);
    uVar7 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
    if (uVar7 != 0) break;
    uVar30 = uVar30 + 0x10;
  }
  if (uVar34 == 0xffffffff) {
    iVar8 = 0;
    for (uVar34 = (uint)uVar7; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
      iVar8 = iVar8 + 1;
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    uVar34 = iVar8 + uVar30;
  }
  uVar25 = uVar1 & uVar34;
  *(byte *)(*(long *)(this + 8) + (ulong)uVar25) = bVar35;
  *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar25 - 0xf) + 0xf)) =
       bVar35;
  bVar28 = true;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_0010ead3:
  *param_2 = uVar25;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar28;
}



/* JPH::DebugRenderer::sInstance */

void JPH::DebugRenderer::_GLOBAL__sub_I_sInstance(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC81;
  }
  return;
}


