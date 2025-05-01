
/* JPH::SkeletonMapper::Initialize(JPH::Skeleton const*, JPH::Mat44 const*, JPH::Skeleton const*,
   JPH::Mat44 const*, std::function<bool (JPH::Skeleton const*, int, JPH::Skeleton const*, int)>
   const&) */

void __thiscall
JPH::SkeletonMapper::Initialize
          (SkeletonMapper *this,Skeleton *param_1,Mat44 *param_2,Skeleton *param_3,Mat44 *param_4,
          function *param_5)

{
  uint *puVar1;
  Mat44 *pMVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
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
  code *pcVar24;
  char cVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  int *piVar33;
  uint *puVar34;
  undefined8 *puVar35;
  int *piVar36;
  int *piVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  long *plVar44;
  uint *puVar45;
  undefined8 *puVar46;
  int iVar47;
  size_t sVar48;
  ulong uVar49;
  ulong uVar50;
  int iVar51;
  int iVar52;
  ulong uVar53;
  int iVar54;
  ulong uVar55;
  long in_FS_OFFSET;
  bool bVar56;
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
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  void *local_120;
  Mat44 *local_108;
  long local_100;
  int *local_f8;
  int *local_f0;
  ulong local_e8;
  ulong local_d0;
  void *local_c8;
  ulong local_c0;
  int local_b8;
  int local_a0;
  int local_9c;
  Skeleton *local_98;
  Skeleton *local_90;
  Mat44 local_88 [4];
  float afStack_84 [17];
  long local_40;
  
  iVar51 = (int)*(undefined8 *)(param_1 + 8);
  sVar48 = (size_t)iVar51;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar54 = (int)*(undefined8 *)(param_3 + 8);
  if (sVar48 == 0) {
    sVar48 = (size_t)iVar54;
    if (sVar48 == 0) {
      local_120 = (void *)0x0;
      uVar26 = *(undefined8 *)(this + 8);
      local_c8 = (void *)0x0;
      if (0 < (int)uVar26) goto LAB_00100083;
    }
    else {
      local_120 = (void *)(*Reallocate)(0,0,sVar48);
      if (local_120 < (void *)((long)local_120 + sVar48)) {
        memset(local_120,0,sVar48);
        local_c8 = (void *)0x0;
      }
      else {
        local_c8 = (void *)0x0;
LAB_001001cf:
        if (0 < iVar51) goto LAB_001007a6;
      }
LAB_00100d20:
      uVar26 = *(undefined8 *)(this + 8);
      if (0 < (int)uVar26) goto LAB_00100083;
      local_f8 = (int *)0x0;
      if (0 < iVar54) {
LAB_0010027c:
        lVar40 = 0;
        do {
          while (*(char *)((long)local_120 + lVar40) == '\0') {
            lVar41 = *(long *)(param_3 + 0x18);
            uVar49 = *(ulong *)(this + 0x40);
            lVar27 = *(long *)(this + 0x48);
            lVar38 = *(long *)(this + 0x38);
            uVar28 = lVar38 + 1;
            if (uVar49 < uVar28) {
              if (uVar28 <= uVar49 * 2) {
                uVar28 = uVar49 * 2;
              }
              lVar27 = (*Reallocate)(lVar27,uVar49 << 3,uVar28 * 8);
              lVar38 = *(long *)(this + 0x38);
              *(ulong *)(this + 0x40) = uVar28;
              *(long *)(this + 0x48) = lVar27;
              uVar28 = lVar38 + 1;
            }
            uVar9 = *(undefined4 *)(lVar41 + lVar40 * 0x48 + 0x40);
            lVar41 = lVar40 + 1;
            *(ulong *)(this + 0x38) = uVar28;
            *(ulong *)(lVar27 + lVar38 * 8) = CONCAT44(uVar9,(int)lVar40);
            lVar40 = lVar41;
            if (iVar54 <= (int)lVar41) goto LAB_00100336;
          }
          lVar40 = lVar40 + 1;
        } while ((int)lVar40 < iVar54);
LAB_00100336:
        if (local_f8 != (int *)0x0) {
          (*Free)(local_f8);
        }
        goto LAB_00100344;
      }
LAB_0010034c:
      (*Free)(local_120);
LAB_00100357:
      if (local_c8 != (void *)0x0) goto LAB_00100363;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    local_c8 = (void *)(*Reallocate)(0,0,sVar48);
    if (local_c8 < (void *)((long)local_c8 + sVar48)) {
      memset(local_c8,0,sVar48);
    }
    sVar48 = (size_t)iVar54;
    if (sVar48 != 0) {
      local_120 = (void *)(*Reallocate)(0,0,sVar48);
      if ((void *)((long)local_120 + sVar48) <= local_120) goto LAB_001001cf;
      memset(local_120,0,sVar48);
      if (iVar51 < 1) goto LAB_00100d20;
LAB_001007a6:
      local_108 = param_2;
      uVar28 = 0;
      do {
        if (0 < iVar54) {
LAB_001007ea:
          iVar47 = 0;
LAB_0010080d:
          iVar52 = (int)uVar28;
          local_a0 = iVar52;
          local_9c = iVar47;
          local_98 = param_1;
          local_90 = param_3;
          if (*(long *)(param_5 + 0x10) != 0) {
            cVar25 = (**(code **)(param_5 + 0x18))(param_5,&local_98,&local_a0,&local_90,&local_9c);
            if (cVar25 == '\0') goto LAB_00100800;
            fVar12 = *(float *)(local_108 + 8);
            fVar13 = *(float *)(local_108 + 0xc);
            fVar14 = *(float *)local_108;
            fVar15 = *(float *)(local_108 + 4);
            fVar16 = *(float *)(local_108 + 0x28);
            fVar17 = *(float *)(local_108 + 0x2c);
            fVar4 = *(float *)(local_108 + 0x38);
            fVar6 = *(float *)(local_108 + 0x3c);
            fVar3 = *(float *)(local_108 + 0x14);
            fVar5 = *(float *)(local_108 + 0x18);
            fVar18 = *(float *)(local_108 + 0x20);
            fVar19 = *(float *)(local_108 + 0x24);
            fVar63 = fVar17 * fVar12;
            fVar65 = fVar6 * fVar5;
            fVar66 = fVar13 * fVar16;
            fVar67 = fVar3 * fVar4;
            fVar59 = (float)*(undefined8 *)(local_108 + 0x10);
            fVar61 = (float)((ulong)*(undefined8 *)(local_108 + 0x10) >> 0x20);
            fVar72 = (float)*(undefined8 *)(local_108 + 0x30);
            fVar73 = (float)((ulong)*(undefined8 *)(local_108 + 0x30) >> 0x20);
            fVar74 = fVar12 * fVar19;
            fVar76 = fVar5 * fVar73;
            fVar78 = fVar16 * fVar15;
            fVar80 = fVar4 * fVar61;
            fVar57 = fVar15 * fVar17;
            fVar58 = fVar61 * fVar6;
            fVar60 = fVar19 * fVar13;
            fVar62 = fVar73 * fVar3;
            lVar40 = 0;
            fVar82 = fVar14 * fVar19;
            fVar83 = fVar59 * fVar73;
            fVar84 = fVar18 * fVar15;
            fVar85 = fVar72 * fVar61;
            fVar86 = fVar17 * fVar14;
            fVar87 = fVar6 * fVar59;
            fVar88 = fVar13 * fVar18;
            fVar89 = fVar3 * fVar72;
            fVar75 = fVar14 * fVar16;
            fVar77 = fVar59 * fVar4;
            fVar79 = fVar18 * fVar12;
            fVar81 = fVar72 * fVar5;
            fVar68 = ((((fVar67 * fVar19 - fVar65 * fVar19) + fVar76 * fVar17) - fVar80 * fVar17) +
                     fVar58 * fVar16) - fVar16 * fVar62;
            fVar69 = ((((fVar66 * fVar73 - fVar63 * fVar73) + fVar74 * fVar6) - fVar78 * fVar6) +
                     fVar57 * fVar4) - fVar4 * fVar60;
            fVar70 = ((((fVar65 * fVar15 - fVar67 * fVar15) + fVar80 * fVar13) - fVar76 * fVar13) +
                     fVar62 * fVar12) - fVar12 * fVar58;
            fVar71 = ((((fVar63 * fVar61 - fVar66 * fVar61) + fVar78 * fVar3) - fVar74 * fVar3) +
                     fVar60 * fVar5) - fVar5 * fVar57;
            fVar64 = _LC1 / (fVar18 * fVar70 + fVar72 * fVar71 + fVar14 * fVar68 + fVar59 * fVar69);
            do {
              pMVar2 = param_4 + lVar40 + (long)iVar47 * 0x40;
              fVar20 = *(float *)pMVar2;
              fVar21 = *(float *)(pMVar2 + 4);
              fVar22 = *(float *)(pMVar2 + 8);
              fVar23 = *(float *)(pMVar2 + 0xc);
              *(float *)(local_88 + lVar40) =
                   fVar23 * ((((fVar83 * fVar16 - (fVar18 * fVar76 - fVar18 * fVar80)) -
                              fVar16 * fVar85) - fVar77 * fVar19) + fVar19 * fVar81) * fVar64 +
                   fVar21 * ((((fVar18 * fVar65 - fVar18 * fVar67) - fVar16 * fVar87) +
                              fVar16 * fVar89 + fVar17 * fVar77) - fVar17 * fVar81) * fVar64 +
                   fVar20 * fVar68 * fVar64 +
                   fVar22 * (((fVar17 * fVar85 -
                              ((fVar58 * fVar18 - fVar62 * fVar18) + fVar17 * fVar83)) +
                             fVar87 * fVar19) - fVar89 * fVar19) * fVar64;
              *(float *)((long)afStack_84 + lVar40) =
                   fVar23 * ((((fVar82 * fVar4 - (fVar72 * fVar74 - fVar72 * fVar78)) -
                              fVar4 * fVar84) - fVar75 * fVar73) + fVar73 * fVar79) * fVar64 +
                   fVar21 * ((((fVar72 * fVar63 - fVar72 * fVar66) - fVar4 * fVar86) +
                              fVar4 * fVar88 + fVar6 * fVar75) - fVar6 * fVar79) * fVar64 +
                   fVar20 * fVar69 * fVar64 +
                   fVar22 * (((fVar6 * fVar84 -
                              ((fVar57 * fVar72 - fVar60 * fVar72) + fVar6 * fVar82)) +
                             fVar86 * fVar73) - fVar88 * fVar73) * fVar64;
              *(float *)((long)afStack_84 + lVar40 + 4) =
                   fVar23 * ((((fVar85 * fVar12 - (fVar14 * fVar80 - fVar14 * fVar76)) -
                              fVar12 * fVar83) - fVar81 * fVar15) + fVar15 * fVar77) * fVar64 +
                   fVar21 * ((((fVar14 * fVar67 - fVar14 * fVar65) - fVar12 * fVar89) +
                              fVar12 * fVar87 + fVar13 * fVar81) - fVar13 * fVar77) * fVar64 +
                   fVar20 * fVar70 * fVar64 +
                   fVar22 * (((fVar13 * fVar83 -
                              ((fVar62 * fVar14 - fVar58 * fVar14) + fVar13 * fVar85)) +
                             fVar89 * fVar15) - fVar87 * fVar15) * fVar64;
              *(float *)((long)afStack_84 + lVar40 + 8) =
                   fVar23 * ((((fVar84 * fVar5 - (fVar59 * fVar78 - fVar59 * fVar74)) -
                              fVar5 * fVar82) - fVar79 * fVar61) + fVar61 * fVar75) * fVar64 +
                   fVar21 * ((((fVar59 * fVar66 - fVar59 * fVar63) - fVar5 * fVar88) +
                              fVar5 * fVar86 + fVar3 * fVar79) - fVar3 * fVar75) * fVar64 +
                   fVar20 * fVar71 * fVar64 +
                   fVar22 * (((fVar3 * fVar82 -
                              ((fVar60 * fVar59 - fVar57 * fVar59) + fVar3 * fVar84)) +
                             fVar88 * fVar61) - fVar86 * fVar61) * fVar64;
              lVar40 = lVar40 + 0x10;
            } while (lVar40 != 0x40);
            afStack_84[0xe] = 1.0;
            lVar40 = *(long *)(this + 8);
            uVar50 = *(ulong *)(this + 0x10);
            lVar41 = *(long *)(this + 0x18);
            uVar49 = lVar40 + 1;
            if (uVar50 < uVar49) {
              uVar39 = uVar50 * 2;
              if (uVar50 * 2 < uVar49) {
                uVar39 = uVar49;
              }
              lVar41 = (*Reallocate)(lVar41,uVar50 * 0x90,uVar39 * 0x90);
              lVar40 = *(long *)(this + 8);
              *(long *)(this + 0x18) = lVar41;
              *(ulong *)(this + 0x10) = uVar39;
              uVar49 = lVar40 + 1;
            }
            *(ulong *)(this + 8) = uVar49;
            Mapping::Mapping((Mapping *)(lVar41 + lVar40 * 0x90),iVar52,iVar47,local_88);
            *(undefined1 *)((long)local_c8 + uVar28) = 1;
            *(undefined1 *)((long)local_120 + (long)iVar47) = 1;
            goto LAB_00100b8b;
          }
          std::__throw_bad_function_call();
          goto LAB_00100cfd;
        }
LAB_00100b8b:
        local_108 = local_108 + 0x40;
        bVar56 = iVar51 - 1 != uVar28;
        uVar28 = uVar28 + 1;
      } while (bVar56);
      uVar26 = *(undefined8 *)(this + 8);
      if (0 < (int)uVar26) {
LAB_00100083:
        local_100 = 0;
        iVar51 = 0;
        local_f8 = (int *)0x0;
        local_c0 = 0;
LAB_001000b0:
        iVar51 = iVar51 + 1;
        if (iVar51 < (int)uVar26) {
          local_f0 = (int *)0x0;
          local_108 = (Mat44 *)((long)iVar51 * 0x90);
          local_b8 = -1;
          local_d0 = 0;
          local_e8 = 0;
          iVar47 = iVar51;
LAB_00100108:
          uVar53 = 0;
          uVar28 = 1;
          uVar7 = *(uint *)(*(long *)(this + 0x18) + 4 + local_100);
          uVar39 = (ulong)*(int *)(*(long *)(this + 0x18) + 4 + (long)local_108);
          uVar49 = uVar39;
          uVar50 = uVar53;
          if (local_c0 != 0) goto LAB_00100166;
          do {
            uVar50 = local_c0 * 2;
            lVar40 = local_c0 * 4;
            local_c0 = uVar50;
            if (uVar50 < uVar28) {
              local_c0 = uVar28;
            }
            local_f8 = (int *)(*Reallocate)(local_f8,lVar40,local_c0 * 4);
            uVar50 = uVar53;
LAB_00100166:
            do {
              uVar53 = uVar28;
              lVar40 = *(long *)(param_3 + 0x18);
              local_f8[uVar53 - 1] = (int)uVar39;
              uVar8 = *(uint *)(lVar40 + uVar49 * 0x48 + 0x40);
              uVar39 = (ulong)uVar8;
              if (((int)uVar8 < 0) || (uVar7 == uVar8)) {
                uVar28 = local_c0;
                piVar29 = local_f8;
                if (local_c0 < uVar50 + 2) {
LAB_001003a9:
                  uVar28 = local_c0 * 2;
                  if (local_c0 * 2 < uVar50 + 2) {
                    uVar28 = uVar50 + 2;
                  }
                  piVar29 = (int *)(*Reallocate)(local_f8,local_c0 * 4,uVar28 * 4);
                }
                uVar50 = uVar50 + 2;
                piVar29[uVar53] = uVar7;
                local_c0 = uVar28;
                local_f8 = piVar29;
                if (((uVar7 == uVar8) && (2 < uVar50)) && (local_e8 < uVar50)) {
                  local_c0 = local_d0;
                  local_f8 = local_f0;
                  local_f0 = piVar29;
                  local_e8 = uVar50;
                  local_d0 = uVar28;
                  local_b8 = iVar47;
                }
LAB_00100202:
                iVar47 = iVar47 + 1;
                local_108 = (Mat44 *)((long)local_108 + 0x90);
                if (iVar47 < *(int *)(this + 8)) goto LAB_00100108;
                if (local_e8 == 0) goto LAB_00100238;
                uVar39 = 0;
                puVar30 = (uint *)0x0;
                uVar28 = 1;
                uVar7 = *(uint *)(*(long *)(this + 0x18) + local_100);
                uVar53 = (ulong)*(int *)(*(long *)(this + 0x18) + (long)local_b8 * 0x90);
                uVar49 = 0;
                uVar50 = uVar53;
                goto LAB_00100465;
              }
              uVar49 = (ulong)(int)uVar8;
              if (*(char *)((long)local_120 + uVar49) != '\0') {
                if (local_c0 < uVar50 + 2) goto LAB_001003a9;
                local_f8[uVar53] = uVar7;
                goto LAB_00100202;
              }
              uVar28 = uVar53 + 1;
              uVar50 = uVar53;
            } while (uVar28 <= local_c0);
          } while( true );
        }
LAB_00100269:
        if (0 < iVar54) goto LAB_0010027c;
        goto LAB_00100336;
      }
      if (0 < iVar54) {
LAB_00100bbd:
        local_f8 = (int *)0x0;
        goto LAB_0010027c;
      }
LAB_00100344:
      if (local_120 != (void *)0x0) goto LAB_0010034c;
      goto LAB_00100357;
    }
    local_120 = (void *)0x0;
    if (0 < iVar51) goto LAB_001007a6;
    uVar26 = *(undefined8 *)(this + 8);
    if (0 < (int)uVar26) goto LAB_00100083;
LAB_00100363:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(local_c8);
      return;
    }
  }
LAB_00100cfd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100800:
  iVar47 = iVar47 + 1;
  if (iVar47 == iVar54) goto LAB_00100bc8;
  goto LAB_0010080d;
LAB_00100bc8:
  local_108 = local_108 + 0x40;
  bVar56 = iVar51 - 1 == uVar28;
  uVar28 = uVar28 + 1;
  if (bVar56) {
    uVar26 = *(undefined8 *)(this + 8);
    if ((int)uVar26 < 1) goto LAB_00100bbd;
    goto LAB_00100083;
  }
  goto LAB_001007ea;
LAB_00100465:
  uVar55 = uVar49 * 2;
  lVar40 = uVar49 * 4;
  uVar49 = uVar55;
  if (uVar55 < uVar28) {
    uVar49 = uVar28;
  }
  puVar30 = (uint *)(*Reallocate)(puVar30,lVar40,uVar49 * 4);
  uVar55 = uVar39;
  while( true ) {
    uVar39 = uVar28;
    puVar30[uVar39 - 1] = (uint)uVar53;
    uVar8 = *(uint *)(uVar50 * 0x48 + *(long *)(param_1 + 0x18) + 0x40);
    uVar53 = (ulong)uVar8;
    if (((int)uVar8 < 0) || (uVar7 == uVar8)) break;
    uVar50 = (ulong)(int)uVar8;
    if (*(char *)((long)local_c8 + uVar50) != '\0') {
      if (uVar49 < uVar55 + 2) goto LAB_0010070a;
      puVar30[uVar39] = uVar7;
      goto LAB_00100746;
    }
    uVar28 = uVar39 + 1;
    uVar55 = uVar39;
    if (uVar49 < uVar28) goto LAB_00100465;
  }
  if (uVar49 < uVar55 + 2) {
LAB_0010070a:
    uVar28 = uVar49 * 2;
    lVar40 = uVar49 * 4;
    uVar49 = uVar28;
    if (uVar28 < uVar55 + 2) {
      uVar49 = uVar55 + 2;
    }
    puVar30 = (uint *)(*Reallocate)(puVar30,lVar40,uVar49 * 4);
  }
  puVar34 = puVar30 + uVar39;
  *puVar34 = uVar7;
  if (uVar7 == uVar8) {
    puVar1 = puVar30 + uVar55 + 2;
    if (puVar1 == puVar30) {
      if (local_f0 == local_f0 + local_e8) goto LAB_001005a6;
      goto LAB_00100543;
    }
    puVar31 = puVar30;
    if (puVar30 < puVar34) {
      do {
        uVar7 = *puVar31;
        puVar32 = puVar31 + 1;
        puVar45 = puVar34 + -1;
        *puVar31 = *puVar34;
        *puVar34 = uVar7;
        puVar31 = puVar32;
        puVar34 = puVar45;
      } while (puVar32 < puVar45);
    }
    puVar34 = puVar30;
    if (local_f0 == local_f0 + local_e8) {
LAB_00100575:
      do {
        puVar31 = puVar34 + 1;
        *(undefined1 *)((long)local_c8 + (long)(int)*puVar34) = 1;
        puVar34 = puVar31;
      } while (puVar31 != puVar1);
      piVar29 = local_f0;
      if (local_f0 != local_f0 + local_e8) goto LAB_00100596;
    }
    else {
LAB_00100543:
      piVar29 = local_f0 + local_e8 + -1;
      piVar36 = local_f0;
      if (local_f0 < local_f0 + local_e8 + -1) {
        do {
          iVar47 = *piVar36;
          piVar37 = piVar36 + 1;
          piVar33 = piVar29 + -1;
          *piVar36 = *piVar29;
          *piVar29 = iVar47;
          piVar29 = piVar33;
          piVar36 = piVar37;
        } while (piVar37 < piVar33);
      }
      piVar29 = local_f0;
      puVar34 = puVar30;
      if (puVar1 != puVar30) goto LAB_00100575;
LAB_00100596:
      do {
        piVar36 = piVar29 + 1;
        *(undefined1 *)((long)local_120 + (long)*piVar29) = 1;
        piVar29 = piVar36;
      } while (piVar36 != local_f0 + local_e8);
    }
LAB_001005a6:
    lVar40 = *(long *)(this + 0x20);
    uVar28 = lVar40 + 1;
    if (*(ulong *)(this + 0x28) < uVar28) {
      uVar50 = *(ulong *)(this + 0x28) * 2;
      if (uVar28 <= uVar50) {
        uVar28 = uVar50;
      }
      puVar35 = (undefined8 *)(*Allocate)(uVar28 * 0x30);
      puVar46 = *(undefined8 **)(this + 0x30);
      if (puVar46 != (undefined8 *)0x0) {
        lVar40 = *(long *)(this + 0x20);
        if (puVar35 < puVar46) {
          puVar42 = puVar35;
          if (puVar35 < puVar35 + lVar40 * 6) {
            do {
              uVar26 = puVar46[2];
              uVar10 = *puVar46;
              uVar11 = puVar46[1];
              puVar46[2] = 0;
              puVar46[1] = 0;
              puVar42[2] = uVar26;
              uVar26 = puVar46[5];
              *puVar42 = uVar10;
              puVar42[1] = uVar11;
              uVar10 = puVar46[3];
              uVar11 = puVar46[4];
              puVar42[5] = uVar26;
              lVar41 = puVar46[2];
              puVar42[3] = uVar10;
              puVar42[4] = uVar11;
              pcVar24 = Free;
              if (lVar41 != 0) {
                *puVar46 = 0;
                (*pcVar24)();
              }
              puVar42 = puVar42 + 6;
              puVar46 = puVar46 + 6;
            } while (puVar42 < puVar35 + lVar40 * 6);
            puVar46 = *(undefined8 **)(this + 0x30);
          }
        }
        else {
          puVar42 = puVar46 + lVar40 * 6 + -6;
          puVar43 = puVar35 + lVar40 * 6 + -6;
          if (!CARRY8(lVar40 * 0x30 - 0x30,(ulong)puVar35)) {
            do {
              uVar26 = puVar42[2];
              uVar10 = *puVar42;
              uVar11 = puVar42[1];
              puVar42[2] = 0;
              puVar42[1] = 0;
              puVar43[2] = uVar26;
              uVar26 = puVar42[5];
              *puVar43 = uVar10;
              puVar43[1] = uVar11;
              uVar10 = puVar42[3];
              uVar11 = puVar42[4];
              puVar43[5] = uVar26;
              lVar40 = puVar42[2];
              puVar43[3] = uVar10;
              puVar43[4] = uVar11;
              pcVar24 = Free;
              if (lVar40 != 0) {
                *puVar42 = 0;
                (*pcVar24)();
              }
              puVar43 = puVar43 + -6;
              puVar42 = puVar42 + -6;
            } while (puVar35 <= puVar43);
            puVar46 = *(undefined8 **)(this + 0x30);
          }
        }
        (*Free)(puVar46);
      }
      *(undefined8 **)(this + 0x30) = puVar35;
      *(ulong *)(this + 0x28) = uVar28;
      lVar40 = *(long *)(this + 0x20);
      uVar28 = lVar40 + 1;
    }
    else {
      puVar35 = *(undefined8 **)(this + 0x30);
    }
    plVar44 = puVar35 + lVar40 * 6;
    *(ulong *)(this + 0x20) = uVar28;
    plVar44[1] = uVar49;
    plVar44[3] = local_e8;
    *plVar44 = uVar55 + 2;
    plVar44[4] = local_d0;
    plVar44[2] = (long)puVar30;
    plVar44[5] = (long)local_f0;
    uVar26 = *(undefined8 *)(this + 8);
    iVar47 = (int)uVar26;
  }
  else {
LAB_00100746:
    if (puVar30 != (uint *)0x0) {
      (*Free)(puVar30);
    }
LAB_00100238:
    if (local_f0 != (int *)0x0) {
      (*Free)(local_f0);
    }
    uVar26 = *(undefined8 *)(this + 8);
    iVar47 = (int)uVar26;
  }
  local_100 = local_100 + 0x90;
  if (iVar47 <= iVar51) goto LAB_00100269;
  goto LAB_001000b0;
}



/* JPH::SkeletonMapper::LockTranslations(JPH::Skeleton const*, bool const*, JPH::Mat44 const*) */

void __thiscall
JPH::SkeletonMapper::LockTranslations
          (SkeletonMapper *this,Skeleton *param_1,bool *param_2,Mat44 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
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
  Mat44 *pMVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  bool bVar24;
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
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  if ((int)uVar2 < 1) {
    return;
  }
  uVar22 = 0;
  do {
    if (param_2[uVar22] != false) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x18) + uVar22 * 0x48 + 0x40);
      pMVar18 = param_3 + uVar22 * 0x40 + 0x30;
      fVar39 = *(float *)pMVar18;
      fVar40 = *(float *)(pMVar18 + 4);
      fVar41 = *(float *)(pMVar18 + 8);
      fVar43 = *(float *)(pMVar18 + 0xc);
      if (-1 < iVar1) {
        pMVar18 = param_3 + (long)iVar1 * 0x40;
        fVar43 = *(float *)(pMVar18 + 0x10);
        fVar4 = *(float *)(pMVar18 + 0x14);
        fVar5 = *(float *)(pMVar18 + 0x18);
        fVar42 = *(float *)(pMVar18 + 0x1c);
        fVar6 = *(float *)pMVar18;
        fVar7 = *(float *)(pMVar18 + 4);
        fVar8 = *(float *)(pMVar18 + 8);
        fVar9 = *(float *)(pMVar18 + 0xc);
        fVar10 = *(float *)(pMVar18 + 0x20);
        fVar11 = *(float *)(pMVar18 + 0x24);
        fVar12 = *(float *)(pMVar18 + 0x28);
        fVar13 = *(float *)(pMVar18 + 0x2c);
        fVar14 = *(float *)(pMVar18 + 0x30);
        fVar15 = *(float *)(pMVar18 + 0x34);
        fVar16 = *(float *)(pMVar18 + 0x38);
        fVar17 = *(float *)(pMVar18 + 0x3c);
        fVar33 = fVar8 * fVar13;
        fVar34 = fVar5 * fVar17;
        fVar35 = fVar12 * fVar9;
        fVar36 = fVar16 * fVar42;
        fVar49 = fVar8 * fVar11;
        fVar51 = fVar5 * fVar15;
        fVar53 = fVar12 * fVar7;
        fVar55 = fVar16 * fVar4;
        fVar25 = fVar7 * fVar13;
        fVar26 = fVar4 * fVar17;
        fVar27 = fVar11 * fVar9;
        fVar28 = fVar15 * fVar42;
        fVar57 = fVar6 * fVar11;
        fVar58 = fVar43 * fVar15;
        fVar59 = fVar10 * fVar7;
        fVar60 = fVar14 * fVar4;
        fVar50 = fVar6 * fVar12;
        fVar52 = fVar43 * fVar16;
        fVar54 = fVar10 * fVar8;
        fVar56 = fVar14 * fVar5;
        fVar29 = ((((fVar36 * fVar11 - fVar34 * fVar11) + fVar51 * fVar13) - fVar55 * fVar13) +
                 fVar26 * fVar12) - fVar12 * fVar28;
        fVar30 = ((((fVar35 * fVar15 - fVar33 * fVar15) + fVar49 * fVar17) - fVar53 * fVar17) +
                 fVar25 * fVar16) - fVar16 * fVar27;
        fVar31 = ((((fVar34 * fVar7 - fVar36 * fVar7) + fVar55 * fVar9) - fVar51 * fVar9) +
                 fVar28 * fVar8) - fVar8 * fVar26;
        fVar32 = ((((fVar33 * fVar4 - fVar35 * fVar4) + fVar53 * fVar42) - fVar49 * fVar42) +
                 fVar27 * fVar5) - fVar5 * fVar25;
        fVar44 = fVar6 * fVar13;
        fVar45 = fVar43 * fVar17;
        fVar46 = fVar10 * fVar9;
        fVar47 = fVar14 * fVar42;
        fVar48 = _LC1 / (fVar10 * fVar31 + fVar14 * fVar32 + fVar6 * fVar29 + fVar43 * fVar30);
        fVar37 = ((((fVar6 * fVar36 - fVar6 * fVar34) - fVar8 * fVar47) + fVar8 * fVar45 +
                  fVar9 * fVar56) - fVar9 * fVar52) * fVar48 * fVar40;
        fVar38 = ((((fVar43 * fVar35 - fVar43 * fVar33) - fVar5 * fVar46) + fVar5 * fVar44 +
                  fVar42 * fVar54) - fVar42 * fVar50) * fVar48 * fVar40;
        fVar30 = fVar39 * fVar30 * fVar48;
        fVar31 = fVar39 * fVar31 * fVar48;
        fVar32 = fVar39 * fVar32 * fVar48;
        fVar42 = fVar41 * ((fVar46 * fVar4 +
                           (fVar42 * fVar57 -
                           ((fVar27 * fVar43 - fVar25 * fVar43) + fVar42 * fVar59))) -
                          fVar44 * fVar4) * fVar48;
        fVar39 = fVar41 * ((fVar45 * fVar11 +
                           (fVar13 * fVar60 -
                           ((fVar26 * fVar10 - fVar28 * fVar10) + fVar13 * fVar58))) -
                          fVar47 * fVar11) * fVar48 +
                 ((((fVar10 * fVar34 - fVar10 * fVar36) - fVar12 * fVar45) + fVar12 * fVar47 +
                  fVar13 * fVar52) - fVar13 * fVar56) * fVar48 * fVar40 + fVar39 * fVar29 * fVar48 +
                 ((((fVar58 * fVar12 - (fVar10 * fVar51 - fVar10 * fVar55)) - fVar12 * fVar60) -
                  fVar52 * fVar11) + fVar11 * fVar56) * fVar48;
        fVar40 = fVar41 * ((fVar44 * fVar15 +
                           (fVar17 * fVar59 -
                           ((fVar25 * fVar14 - fVar27 * fVar14) + fVar17 * fVar57))) -
                          fVar46 * fVar15) * fVar48 +
                 ((((fVar14 * fVar33 - fVar14 * fVar35) - fVar16 * fVar44) + fVar16 * fVar46 +
                  fVar17 * fVar50) - fVar17 * fVar54) * fVar48 * fVar40 + fVar30 +
                 ((((fVar57 * fVar16 - (fVar14 * fVar49 - fVar14 * fVar53)) - fVar16 * fVar59) -
                  fVar50 * fVar15) + fVar15 * fVar54) * fVar48;
        fVar41 = fVar41 * ((fVar47 * fVar7 +
                           (fVar9 * fVar58 - ((fVar28 * fVar6 - fVar26 * fVar6) + fVar9 * fVar60)))
                          - fVar45 * fVar7) * fVar48 + fVar37 + fVar31 +
                 ((((fVar60 * fVar8 - (fVar6 * fVar55 - fVar6 * fVar51)) - fVar8 * fVar58) -
                  fVar56 * fVar7) + fVar7 * fVar52) * fVar48;
        fVar43 = fVar42 + fVar38 + fVar32 +
                 ((((fVar59 * fVar5 - (fVar43 * fVar53 - fVar43 * fVar49)) - fVar5 * fVar57) -
                  fVar54 * fVar4) + fVar4 * fVar50) * fVar48;
      }
      lVar20 = *(long *)(this + 0x50);
      uVar3 = *(ulong *)(this + 0x58);
      lVar19 = *(long *)(this + 0x60);
      uVar21 = lVar20 + 1;
      if (uVar3 < uVar21) {
        if (uVar21 <= uVar3 * 2) {
          uVar21 = uVar3 * 2;
        }
        lVar19 = (*Reallocate)(lVar19,uVar3 << 5,uVar21 << 5);
        *(long *)(this + 0x60) = lVar19;
        lVar20 = *(long *)(this + 0x50);
        *(ulong *)(this + 0x58) = uVar21;
        uVar21 = lVar20 + 1;
      }
      *(ulong *)(this + 0x50) = uVar21;
      puVar23 = (undefined8 *)(lVar19 + lVar20 * 0x20);
      *(float *)(puVar23 + 2) = fVar39;
      *(float *)((long)puVar23 + 0x14) = fVar40;
      *(float *)(puVar23 + 3) = fVar41;
      *(float *)((long)puVar23 + 0x1c) = fVar43;
      *puVar23 = CONCAT44(iVar1,(int)uVar22);
    }
    bVar24 = uVar22 != (int)uVar2 - 1;
    uVar22 = uVar22 + 1;
  } while (bVar24);
  return;
}



/* JPH::SkeletonMapper::LockAllTranslations(JPH::Skeleton const*, JPH::Mat44 const*) */

void __thiscall
JPH::SkeletonMapper::LockAllTranslations(SkeletonMapper *this,Skeleton *param_1,Mat44 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  bool *pbVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined1 *puVar8;
  int iVar10;
  long in_FS_OFFSET;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_40;
  undefined1 *puVar9;
  
  puVar8 = auStack_58;
  local_50 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar10 = (int)local_50;
  lVar7 = (long)iVar10;
  iVar1 = *(int *)(*(long *)(this + 0x18) + 4);
  puVar9 = auStack_58;
  puVar3 = auStack_58;
  while (puVar9 != auStack_58 + -(lVar7 + 0x17U & 0xfffffffffffff000)) {
    puVar8 = puVar3 + -0x1000;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    puVar9 = puVar3 + -0x1000;
    puVar3 = puVar3 + -0x1000;
  }
  uVar5 = (ulong)((uint)(lVar7 + 0x17U) & 0xff0);
  lVar2 = -uVar5;
  if (uVar5 != 0) {
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
  }
  *(undefined8 *)(puVar8 + lVar2 + -8) = 0x1011b6;
  pbVar4 = (bool *)__memset_chk((ulong)(puVar8 + lVar2 + 0xf) & 0xfffffffffffffff0,0,lVar7,lVar7);
  pbVar4[iVar1] = true;
  if (iVar1 + 1 < (int)local_50) {
    lVar7 = (long)(iVar1 + 1);
    piVar6 = (int *)(*(long *)(param_1 + 0x18) + 0x88 + (long)iVar1 * 0x48);
    do {
      if (-1 < *piVar6) {
        pbVar4[lVar7] = pbVar4[*piVar6];
      }
      lVar7 = lVar7 + 1;
      piVar6 = piVar6 + 0x12;
    } while ((int)lVar7 < iVar10);
  }
  pbVar4[iVar1] = false;
  *(undefined8 *)(puVar8 + lVar2 + -8) = 0x101217;
  LockTranslations(this,param_1,pbVar4,param_2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + lVar2 + -8) = &UNK_00101248;
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SkeletonMapper::Map(JPH::Mat44 const*, JPH::Mat44 const*, JPH::Mat44*) const */

void __thiscall
JPH::SkeletonMapper::Map(SkeletonMapper *this,Mat44 *param_1,Mat44 *param_2,Mat44 *param_3)

{
  long *plVar1;
  float *pfVar2;
  int iVar3;
  undefined1 auVar4 [16];
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
  undefined8 uVar15;
  Mat44 *pMVar16;
  long lVar17;
  Mat44 *pMVar18;
  long *plVar19;
  int *piVar20;
  Mat44 *pMVar21;
  int *piVar22;
  int iVar23;
  long in_FS_OFFSET;
  float fVar24;
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
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88 [18];
  long local_40;
  undefined1 auVar25 [12];
  
  piVar22 = *(int **)(this + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar20 = piVar22 + *(long *)(this + 8) * 0x24;
  fVar6 = _UNK_00101efc;
  fVar7 = _UNK_00101ef8;
  fVar8 = _UNK_00101ef4;
  fVar9 = __LC5;
  fVar10 = _LC1;
  for (; _LC1 = fVar10, __LC5 = fVar9, _UNK_00101ef4 = fVar8, _UNK_00101ef8 = fVar7,
      _UNK_00101efc = fVar6, piVar20 != piVar22; piVar22 = piVar22 + 0x24) {
    pMVar16 = param_1 + (long)*piVar22 * 0x40;
    pMVar21 = param_3 + (long)piVar22[1] * 0x40;
    fVar6 = *(float *)pMVar16;
    fVar7 = *(float *)(pMVar16 + 4);
    fVar8 = *(float *)(pMVar16 + 8);
    fVar9 = *(float *)(pMVar16 + 0xc);
    fVar10 = *(float *)(pMVar16 + 0x10);
    fVar31 = *(float *)(pMVar16 + 0x14);
    fVar32 = *(float *)(pMVar16 + 0x18);
    fVar33 = *(float *)(pMVar16 + 0x1c);
    fVar34 = *(float *)(pMVar16 + 0x20);
    fVar36 = *(float *)(pMVar16 + 0x24);
    fVar37 = *(float *)(pMVar16 + 0x28);
    fVar38 = *(float *)(pMVar16 + 0x2c);
    fVar24 = *(float *)(pMVar16 + 0x30);
    fVar28 = *(float *)(pMVar16 + 0x34);
    fVar29 = *(float *)(pMVar16 + 0x38);
    fVar30 = *(float *)(pMVar16 + 0x3c);
    lVar17 = 0;
    do {
      pfVar2 = (float *)((long)piVar22 + lVar17 + 0x10);
      fVar35 = *pfVar2;
      fVar47 = pfVar2[1];
      fVar45 = pfVar2[2];
      fVar43 = pfVar2[3];
      *(float *)((long)local_88 + lVar17) =
           fVar43 * fVar24 + fVar47 * fVar10 + fVar35 * fVar6 + fVar45 * fVar34;
      *(float *)((long)local_88 + lVar17 + 4) =
           fVar43 * fVar28 + fVar47 * fVar31 + fVar35 * fVar7 + fVar45 * fVar36;
      *(float *)((long)local_88 + lVar17 + 8) =
           fVar43 * fVar29 + fVar47 * fVar32 + fVar35 * fVar8 + fVar45 * fVar37;
      *(float *)((long)local_88 + lVar17 + 0xc) =
           fVar43 * fVar30 + fVar47 * fVar33 + fVar35 * fVar9 + fVar45 * fVar38;
      lVar17 = lVar17 + 0x10;
    } while (lVar17 != 0x40);
    *(ulong *)pMVar21 = CONCAT44(local_88[1],local_88[0]);
    *(ulong *)(pMVar21 + 8) = CONCAT44(local_88[3],local_88[2]);
    *(ulong *)(pMVar21 + 0x10) = CONCAT44(local_88[5],local_88[4]);
    *(ulong *)(pMVar21 + 0x18) = CONCAT44(local_88[7],local_88[6]);
    *(ulong *)(pMVar21 + 0x20) = CONCAT44(local_88[9],local_88[8]);
    *(ulong *)(pMVar21 + 0x28) = CONCAT44(local_88[0xb],local_88[10]);
    *(ulong *)(pMVar21 + 0x30) = CONCAT44(local_88[0xd],local_88[0xc]);
    *(ulong *)(pMVar21 + 0x38) = CONCAT44(local_88[0xf],local_88[0xe]);
    fVar6 = _UNK_00101efc;
    fVar7 = _UNK_00101ef8;
    fVar8 = _UNK_00101ef4;
    fVar9 = __LC5;
    fVar10 = _LC1;
  }
  plVar19 = *(long **)(this + 0x30);
  plVar1 = plVar19 + *(long *)(this + 0x20) * 6;
  do {
    if (plVar1 == plVar19) {
      piVar20 = *(int **)(this + 0x48);
      piVar22 = piVar20 + *(long *)(this + 0x38) * 2;
      for (; piVar22 != piVar20; piVar20 = piVar20 + 2) {
        while( true ) {
          pMVar16 = param_2 + (long)*piVar20 * 0x40;
          pMVar21 = param_3 + (long)*piVar20 * 0x40;
          if (piVar20[1] < 0) break;
          pMVar18 = param_3 + (long)piVar20[1] * 0x40;
          fVar34 = *(float *)pMVar18;
          fVar36 = *(float *)(pMVar18 + 4);
          fVar37 = *(float *)(pMVar18 + 8);
          fVar38 = *(float *)(pMVar18 + 0xc);
          fVar24 = *(float *)(pMVar18 + 0x10);
          fVar28 = *(float *)(pMVar18 + 0x14);
          fVar29 = *(float *)(pMVar18 + 0x18);
          fVar30 = *(float *)(pMVar18 + 0x1c);
          fVar6 = *(float *)(pMVar18 + 0x20);
          fVar7 = *(float *)(pMVar18 + 0x24);
          fVar8 = *(float *)(pMVar18 + 0x28);
          fVar9 = *(float *)(pMVar18 + 0x2c);
          fVar10 = *(float *)(pMVar18 + 0x30);
          fVar31 = *(float *)(pMVar18 + 0x34);
          fVar32 = *(float *)(pMVar18 + 0x38);
          fVar33 = *(float *)(pMVar18 + 0x3c);
          lVar17 = 0;
          do {
            pMVar18 = pMVar16 + lVar17;
            fVar35 = *(float *)pMVar18;
            fVar47 = *(float *)(pMVar18 + 4);
            fVar45 = *(float *)(pMVar18 + 8);
            fVar43 = *(float *)(pMVar18 + 0xc);
            *(float *)((long)local_88 + lVar17) =
                 fVar43 * fVar10 + fVar35 * fVar34 + fVar47 * fVar24 + fVar45 * fVar6;
            *(float *)((long)local_88 + lVar17 + 4) =
                 fVar43 * fVar31 + fVar35 * fVar36 + fVar47 * fVar28 + fVar45 * fVar7;
            *(float *)((long)local_88 + lVar17 + 8) =
                 fVar43 * fVar32 + fVar35 * fVar37 + fVar47 * fVar29 + fVar45 * fVar8;
            *(float *)((long)local_88 + lVar17 + 0xc) =
                 fVar43 * fVar33 + fVar35 * fVar38 + fVar47 * fVar30 + fVar45 * fVar9;
            lVar17 = lVar17 + 0x10;
          } while (lVar17 != 0x40);
          piVar20 = piVar20 + 2;
          *(ulong *)pMVar21 = CONCAT44(local_88[1],local_88[0]);
          *(ulong *)(pMVar21 + 8) = CONCAT44(local_88[3],local_88[2]);
          *(ulong *)(pMVar21 + 0x20) = CONCAT44(local_88[9],local_88[8]);
          *(ulong *)(pMVar21 + 0x28) = CONCAT44(local_88[0xb],local_88[10]);
          *(ulong *)(pMVar21 + 0x10) = CONCAT44(local_88[5],local_88[4]);
          *(ulong *)(pMVar21 + 0x18) = CONCAT44(local_88[7],local_88[6]);
          *(float *)(pMVar21 + 0x30) = local_88[0xc];
          *(float *)(pMVar21 + 0x34) = local_88[0xd];
          *(float *)(pMVar21 + 0x38) = local_88[0xe];
          *(float *)(pMVar21 + 0x3c) = local_88[0xf];
          if (piVar20 == piVar22) goto LAB_001018ba;
        }
        uVar15 = *(undefined8 *)(pMVar16 + 8);
        *(undefined8 *)pMVar21 = *(undefined8 *)pMVar16;
        *(undefined8 *)(pMVar21 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pMVar16 + 0x18);
        *(undefined8 *)(pMVar21 + 0x10) = *(undefined8 *)(pMVar16 + 0x10);
        *(undefined8 *)(pMVar21 + 0x18) = uVar15;
        uVar15 = *(undefined8 *)(pMVar16 + 0x28);
        *(undefined8 *)(pMVar21 + 0x20) = *(undefined8 *)(pMVar16 + 0x20);
        *(undefined8 *)(pMVar21 + 0x28) = uVar15;
        uVar15 = *(undefined8 *)(pMVar16 + 0x38);
        *(undefined8 *)(pMVar21 + 0x30) = *(undefined8 *)(pMVar16 + 0x30);
        *(undefined8 *)(pMVar21 + 0x38) = uVar15;
      }
LAB_001018ba:
      fVar6 = _LC1;
      piVar22 = *(int **)(this + 0x60);
      piVar20 = piVar22 + *(long *)(this + 0x50) * 8;
      for (; piVar20 != piVar22; piVar22 = piVar22 + 8) {
        fVar7 = (float)piVar22[4];
        fVar8 = (float)piVar22[5];
        fVar9 = (float)piVar22[6];
        pMVar16 = param_3 + (long)piVar22[1] * 0x40;
        fVar10 = *(float *)pMVar16;
        fVar31 = *(float *)(pMVar16 + 4);
        fVar32 = *(float *)(pMVar16 + 8);
        lVar17 = (long)*piVar22 * 0x40;
        fVar33 = *(float *)(pMVar16 + 0x10);
        fVar34 = *(float *)(pMVar16 + 0x14);
        fVar36 = *(float *)(pMVar16 + 0x18);
        fVar37 = *(float *)(pMVar16 + 0x20);
        fVar38 = *(float *)(pMVar16 + 0x24);
        fVar24 = *(float *)(pMVar16 + 0x28);
        fVar28 = *(float *)(pMVar16 + 0x30);
        fVar29 = *(float *)(pMVar16 + 0x34);
        fVar30 = *(float *)(pMVar16 + 0x38);
        *(float *)(param_3 + lVar17 + 0x3c) = fVar6;
        *(ulong *)(param_3 + lVar17 + 0x30) =
             CONCAT44(fVar7 * fVar31 + fVar8 * fVar34 + fVar9 * fVar38 + fVar29,
                      fVar7 * fVar10 + fVar8 * fVar33 + fVar9 * fVar37 + fVar28);
        *(float *)(param_3 + lVar17 + 0x38) =
             fVar7 * fVar32 + fVar8 * fVar36 + fVar9 * fVar24 + fVar30;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar22 = (int *)plVar19[5];
    pMVar16 = param_3 + (long)*piVar22 * 0x40;
    fVar31 = *(float *)(pMVar16 + 0x30);
    fVar32 = *(float *)(pMVar16 + 0x34);
    fVar33 = *(float *)(pMVar16 + 0x38);
    fVar34 = *(float *)(pMVar16 + 0x3c);
    iVar23 = (int)plVar19[3];
    fVar36 = fVar31;
    fVar37 = fVar32;
    fVar38 = fVar33;
    if (1 < iVar23) {
      piVar20 = piVar22 + 1;
      fVar24 = fVar34;
      fVar28 = *(float *)(pMVar16 + 0x20);
      fVar29 = *(float *)(pMVar16 + 0x24);
      fVar30 = *(float *)(pMVar16 + 0x28);
      fVar35 = *(float *)(pMVar16 + 0x2c);
      fVar47 = *(float *)pMVar16;
      fVar45 = *(float *)(pMVar16 + 4);
      fVar43 = *(float *)(pMVar16 + 8);
      fVar48 = *(float *)(pMVar16 + 0xc);
      fVar44 = *(float *)(pMVar16 + 0x10);
      fVar40 = *(float *)(pMVar16 + 0x14);
      fVar41 = *(float *)(pMVar16 + 0x18);
      fVar42 = *(float *)(pMVar16 + 0x1c);
      do {
        iVar3 = *piVar20;
        lVar17 = 0;
        do {
          pMVar21 = param_2 + lVar17 + (long)iVar3 * 0x40;
          fVar11 = *(float *)pMVar21;
          fVar12 = *(float *)(pMVar21 + 4);
          fVar13 = *(float *)(pMVar21 + 8);
          fVar14 = *(float *)(pMVar21 + 0xc);
          *(float *)((long)local_88 + lVar17) =
               fVar14 * fVar36 + fVar11 * fVar47 + fVar12 * fVar44 + fVar13 * fVar28;
          *(float *)((long)local_88 + lVar17 + 4) =
               fVar14 * fVar37 + fVar11 * fVar45 + fVar12 * fVar40 + fVar13 * fVar29;
          *(float *)((long)local_88 + lVar17 + 8) =
               fVar14 * fVar38 + fVar11 * fVar43 + fVar12 * fVar41 + fVar13 * fVar30;
          *(float *)((long)local_88 + lVar17 + 0xc) =
               fVar14 * fVar24 + fVar11 * fVar48 + fVar12 * fVar42 + fVar13 * fVar35;
          lVar17 = lVar17 + 0x10;
        } while (lVar17 != 0x40);
        piVar20 = piVar20 + 1;
        fVar36 = local_88[0xc];
        fVar37 = local_88[0xd];
        fVar38 = local_88[0xe];
        fVar24 = local_88[0xf];
        fVar28 = local_88[8];
        fVar29 = local_88[9];
        fVar30 = local_88[10];
        fVar35 = local_88[0xb];
        fVar47 = local_88[0];
        fVar45 = local_88[1];
        fVar43 = local_88[2];
        fVar48 = local_88[3];
        fVar44 = local_88[4];
        fVar40 = local_88[5];
        fVar41 = local_88[6];
        fVar42 = local_88[7];
      } while (piVar22 + (ulong)(iVar23 - 2) + 2 != piVar20);
    }
    fVar36 = fVar36 - fVar31;
    fVar37 = fVar37 - fVar32;
    fVar38 = fVar38 - fVar33;
    pMVar21 = param_1 + (long)((int *)plVar19[2])[*plVar19 + -1] * 0x40 + 0x30;
    pMVar18 = param_1 + (long)*(int *)plVar19[2] * 0x40 + 0x30;
    fVar28 = *(float *)pMVar21 - *(float *)pMVar18;
    fVar29 = *(float *)(pMVar21 + 4) - *(float *)(pMVar18 + 4);
    fVar30 = *(float *)(pMVar21 + 8) - *(float *)(pMVar18 + 8);
    fVar47 = fVar38 * fVar38;
    fVar35 = SQRT((fVar30 * fVar30 + fVar29 * fVar29 + fVar28 * fVar28 + 0.0) *
                  (fVar36 * fVar36 + 0.0 + fVar37 * fVar37 + fVar47));
    fVar24 = fVar30 * fVar38 + fVar29 * fVar37 + fVar28 * fVar36 + 0.0 + fVar35;
    if (fVar24 == 0.0) {
      if (fVar35 != 0.0) {
        if ((float)((uint)fVar36 & __LC3) <= (float)((uint)fVar37 & __LC3)) {
          auVar5._8_4_ = (uint)fVar37 ^ __LC4;
          auVar5._4_4_ = (uint)fVar37 ^ __LC4;
          fVar36 = SQRT(fVar37 * fVar37 + fVar47);
          auVar5._0_4_ = fVar38;
          auVar5._12_4_ = 0;
          auVar4._4_4_ = fVar36;
          auVar4._0_4_ = fVar36;
          auVar4._8_4_ = fVar36;
          auVar4._12_4_ = fVar36;
          auVar27 = divps(auVar5 << 0x20,auVar4);
          auVar25 = auVar27._0_12_;
        }
        else {
          auVar26._4_4_ = 0;
          auVar26._0_4_ = fVar38;
          auVar26._12_4_ = (uint)fVar36 ^ __LC4;
          auVar26._8_4_ = (uint)fVar36 ^ __LC4;
          auVar46._0_4_ = SQRT(fVar36 * fVar36 + fVar47);
          auVar46._4_4_ = auVar46._0_4_;
          auVar46._8_4_ = auVar46._0_4_;
          auVar46._12_4_ = auVar46._0_4_;
          auVar27 = divps(auVar26,auVar46);
          auVar25 = auVar27._0_12_;
        }
        fVar38 = auVar25._8_4_;
        fVar37 = auVar25._0_4_;
        fVar30 = auVar25._4_4_;
        fVar43 = fVar37 + fVar37;
        fVar44 = fVar30 + fVar30;
        fVar37 = fVar37 * fVar43;
        fVar29 = fVar43 * fVar38;
        fVar47 = fVar30 * fVar44;
        fVar30 = fVar30 * fVar43;
        fVar45 = fVar44 * 0.0;
        fVar48 = fVar38 * (fVar38 + fVar38);
        fVar24 = (fVar38 + fVar38) * 0.0;
        fVar36 = (fVar10 - fVar37) - fVar47;
        fVar35 = fVar29 + fVar45;
        fVar28 = fVar38 * fVar44 - fVar43 * 0.0;
        fVar38 = fVar38 * fVar44 + fVar43 * 0.0;
        goto LAB_0010160f;
      }
      fVar24 = 0.0;
      fVar29 = 0.0;
      fVar45 = 0.0;
      fVar28 = 0.0;
      fVar38 = 0.0;
      fVar35 = 0.0;
      fVar30 = fVar10;
      fVar37 = fVar10;
      fVar36 = fVar10;
    }
    else {
      fVar35 = fVar29 * fVar36 - fVar37 * fVar28;
      fVar37 = fVar30 * fVar37 - fVar38 * fVar29;
      fVar36 = fVar28 * fVar38 - fVar36 * fVar30;
      auVar39._4_4_ = fVar36;
      auVar39._0_4_ = fVar37;
      auVar39._8_4_ = fVar35;
      auVar39._12_4_ = fVar24;
      auVar27._0_4_ = SQRT(fVar37 * fVar37 + fVar36 * fVar36 + fVar35 * fVar35 + fVar24 * fVar24);
      auVar27._4_4_ = auVar27._0_4_;
      auVar27._8_4_ = auVar27._0_4_;
      auVar27._12_4_ = auVar27._0_4_;
      auVar27 = divps(auVar39,auVar27);
      fVar37 = auVar27._0_4_;
      fVar47 = auVar27._4_4_;
      fVar36 = auVar27._8_4_;
      fVar38 = auVar27._12_4_;
      fVar35 = fVar37 + fVar37;
      fVar43 = fVar47 + fVar47;
      fVar37 = fVar37 * fVar35;
      fVar29 = fVar35 * fVar36;
      fVar30 = fVar47 * fVar35;
      fVar47 = fVar47 * fVar43;
      fVar45 = fVar43 * fVar38;
      fVar48 = fVar36 * (fVar36 + fVar36);
      fVar24 = (fVar36 + fVar36) * fVar38;
      fVar28 = fVar36 * fVar43 - fVar35 * fVar38;
      fVar38 = fVar35 * fVar38 + fVar36 * fVar43;
      fVar36 = (fVar10 - fVar37) - fVar47;
      fVar35 = fVar29 + fVar45;
LAB_0010160f:
      fVar29 = fVar29 - fVar45;
      fVar45 = fVar30 - fVar24;
      fVar24 = fVar24 + fVar30;
      fVar30 = (fVar10 - fVar48) - fVar37;
      fVar37 = (fVar10 - fVar47) - fVar48;
    }
    lVar17 = 0;
    local_98 = fVar9;
    fStack_94 = fVar8;
    fStack_90 = fVar7;
    fStack_8c = fVar6;
    local_c8 = *(undefined8 *)pMVar16;
    uStack_c0 = *(undefined8 *)(pMVar16 + 8);
    local_b8 = *(undefined8 *)(pMVar16 + 0x10);
    uStack_b0 = *(undefined8 *)(pMVar16 + 0x18);
    local_a8 = *(undefined8 *)(pMVar16 + 0x20);
    uStack_a0 = *(undefined8 *)(pMVar16 + 0x28);
    do {
      fVar47 = *(float *)((long)&local_c8 + lVar17);
      fVar43 = *(float *)((long)&local_c8 + lVar17 + 4);
      fVar48 = *(float *)((long)&uStack_c0 + lVar17);
      fVar44 = *(float *)((long)&uStack_c0 + lVar17 + 4);
      *(float *)((long)local_88 + lVar17) =
           fVar44 * fVar9 + fVar47 * fVar37 + fVar43 * fVar45 + fVar48 * fVar35;
      *(float *)((long)local_88 + lVar17 + 4) =
           fVar44 * fVar8 + fVar47 * fVar24 + fVar43 * fVar30 + fVar48 * fVar28;
      *(float *)((long)local_88 + lVar17 + 8) =
           fVar44 * fVar7 + fVar47 * fVar29 + fVar43 * fVar38 + fVar48 * fVar36;
      *(float *)((long)local_88 + lVar17 + 0xc) =
           fVar44 * fVar6 + fVar47 * 0.0 + fVar43 * 0.0 + fVar48 * 0.0;
      lVar17 = lVar17 + 0x10;
    } while (lVar17 != 0x40);
    *(ulong *)pMVar16 = CONCAT44(local_88[1],local_88[0]);
    *(ulong *)(pMVar16 + 8) = CONCAT44(local_88[3],local_88[2]);
    *(ulong *)(pMVar16 + 0x10) = CONCAT44(local_88[5],local_88[4]);
    *(ulong *)(pMVar16 + 0x18) = CONCAT44(local_88[7],local_88[6]);
    *(float *)(pMVar16 + 0x20) = local_88[8];
    *(float *)(pMVar16 + 0x24) = local_88[9];
    *(float *)(pMVar16 + 0x28) = local_88[10];
    *(float *)(pMVar16 + 0x2c) = local_88[0xb];
    if (2 < iVar23) {
      piVar20 = piVar22 + (ulong)(iVar23 - 3) + 1;
      while( true ) {
        iVar23 = piVar22[1];
        pMVar16 = param_3 + (long)*piVar22 * 0x40;
        pMVar21 = param_3 + (long)iVar23 * 0x40;
        fVar36 = *(float *)pMVar16;
        fVar37 = *(float *)(pMVar16 + 4);
        fVar38 = *(float *)(pMVar16 + 8);
        fVar24 = *(float *)(pMVar16 + 0xc);
        fVar47 = *(float *)(pMVar16 + 0x10);
        fVar45 = *(float *)(pMVar16 + 0x14);
        fVar43 = *(float *)(pMVar16 + 0x18);
        fVar48 = *(float *)(pMVar16 + 0x1c);
        fVar28 = *(float *)(pMVar16 + 0x20);
        fVar29 = *(float *)(pMVar16 + 0x24);
        fVar30 = *(float *)(pMVar16 + 0x28);
        fVar35 = *(float *)(pMVar16 + 0x2c);
        lVar17 = 0;
        do {
          pMVar16 = param_2 + lVar17 + (long)iVar23 * 0x40;
          fVar44 = *(float *)pMVar16;
          fVar40 = *(float *)(pMVar16 + 4);
          fVar41 = *(float *)(pMVar16 + 8);
          fVar42 = *(float *)(pMVar16 + 0xc);
          *(float *)((long)local_88 + lVar17) =
               fVar42 * fVar31 + fVar44 * fVar36 + fVar40 * fVar47 + fVar41 * fVar28;
          *(float *)((long)local_88 + lVar17 + 4) =
               fVar42 * fVar32 + fVar44 * fVar37 + fVar40 * fVar45 + fVar41 * fVar29;
          *(float *)((long)local_88 + lVar17 + 8) =
               fVar42 * fVar33 + fVar44 * fVar38 + fVar40 * fVar43 + fVar41 * fVar30;
          *(float *)((long)local_88 + lVar17 + 0xc) =
               fVar42 * fVar34 + fVar44 * fVar24 + fVar40 * fVar48 + fVar41 * fVar35;
          lVar17 = lVar17 + 0x10;
        } while (lVar17 != 0x40);
        piVar22 = piVar22 + 1;
        *(ulong *)pMVar21 = CONCAT44(local_88[1],local_88[0]);
        *(ulong *)(pMVar21 + 8) = CONCAT44(local_88[3],local_88[2]);
        *(float *)(pMVar21 + 0x30) = local_88[0xc];
        *(float *)(pMVar21 + 0x34) = local_88[0xd];
        *(float *)(pMVar21 + 0x38) = local_88[0xe];
        *(float *)(pMVar21 + 0x3c) = local_88[0xf];
        *(ulong *)(pMVar21 + 0x10) = CONCAT44(local_88[5],local_88[4]);
        *(ulong *)(pMVar21 + 0x18) = CONCAT44(local_88[7],local_88[6]);
        *(ulong *)(pMVar21 + 0x20) = CONCAT44(local_88[9],local_88[8]);
        *(ulong *)(pMVar21 + 0x28) = CONCAT44(local_88[0xb],local_88[10]);
        if (piVar20 == piVar22) break;
        fVar31 = *(float *)(pMVar21 + 0x30);
        fVar32 = *(float *)(pMVar21 + 0x34);
        fVar33 = *(float *)(pMVar21 + 0x38);
        fVar34 = *(float *)(pMVar21 + 0x3c);
      }
    }
    plVar19 = plVar19 + 6;
  } while( true );
}



/* JPH::SkeletonMapper::MapReverse(JPH::Mat44 const*, JPH::Mat44*) const */

void __thiscall JPH::SkeletonMapper::MapReverse(SkeletonMapper *this,Mat44 *param_1,Mat44 *param_2)

{
  float *pfVar1;
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
  float fVar21;
  Mat44 *pMVar22;
  long lVar23;
  Mat44 *pMVar24;
  int *piVar25;
  int *piVar26;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  piVar25 = *(int **)(this + 0x18);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar26 = piVar25 + *(long *)(this + 8) * 0x24;
  for (; piVar26 != piVar25; piVar25 = piVar25 + 0x24) {
    pMVar22 = param_1 + (long)piVar25[1] * 0x40;
    pMVar24 = param_2 + (long)*piVar25 * 0x40;
    fVar2 = *(float *)pMVar22;
    fVar3 = *(float *)(pMVar22 + 4);
    fVar4 = *(float *)(pMVar22 + 8);
    fVar5 = *(float *)(pMVar22 + 0xc);
    fVar6 = *(float *)(pMVar22 + 0x10);
    fVar7 = *(float *)(pMVar22 + 0x14);
    fVar8 = *(float *)(pMVar22 + 0x18);
    fVar9 = *(float *)(pMVar22 + 0x1c);
    fVar10 = *(float *)(pMVar22 + 0x20);
    fVar11 = *(float *)(pMVar22 + 0x24);
    fVar12 = *(float *)(pMVar22 + 0x28);
    fVar13 = *(float *)(pMVar22 + 0x2c);
    fVar14 = *(float *)(pMVar22 + 0x30);
    fVar15 = *(float *)(pMVar22 + 0x34);
    fVar16 = *(float *)(pMVar22 + 0x38);
    fVar17 = *(float *)(pMVar22 + 0x3c);
    lVar23 = 0;
    do {
      pfVar1 = (float *)((long)piVar25 + lVar23 + 0x50);
      fVar18 = *pfVar1;
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      *(float *)((long)&local_58 + lVar23) =
           fVar21 * fVar14 + fVar18 * fVar2 + fVar19 * fVar6 + fVar20 * fVar10;
      *(float *)((long)&local_58 + lVar23 + 4) =
           fVar21 * fVar15 + fVar18 * fVar3 + fVar19 * fVar7 + fVar20 * fVar11;
      *(float *)((long)&uStack_50 + lVar23) =
           fVar21 * fVar16 + fVar18 * fVar4 + fVar19 * fVar8 + fVar20 * fVar12;
      *(float *)((long)&uStack_50 + lVar23 + 4) =
           fVar21 * fVar17 + fVar18 * fVar5 + fVar19 * fVar9 + fVar20 * fVar13;
      lVar23 = lVar23 + 0x10;
    } while (lVar23 != 0x40);
    *(undefined8 *)pMVar24 = local_58;
    *(undefined8 *)(pMVar24 + 8) = uStack_50;
    *(undefined8 *)(pMVar24 + 0x30) = local_28;
    *(undefined8 *)(pMVar24 + 0x38) = uStack_20;
    *(undefined8 *)(pMVar24 + 0x10) = local_48;
    *(undefined8 *)(pMVar24 + 0x18) = uStack_40;
    *(undefined8 *)(pMVar24 + 0x20) = local_38;
    *(undefined8 *)(pMVar24 + 0x28) = uStack_30;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SkeletonMapper::GetMappedJointIdx(int) const */

int __thiscall JPH::SkeletonMapper::GetMappedJointIdx(SkeletonMapper *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(this + 0x18);
  piVar2 = piVar1 + *(long *)(this + 8) * 0x24;
  while( true ) {
    if (piVar2 == piVar1) {
      return -1;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 0x24;
  }
  return piVar1[1];
}



/* JPH::SkeletonMapper::IsJointTranslationLocked(int) const */

undefined8 __thiscall
JPH::SkeletonMapper::IsJointTranslationLocked(SkeletonMapper *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(this + 0x60);
  piVar2 = piVar1 + *(long *)(this + 0x50) * 8;
  while( true ) {
    if (piVar2 == piVar1) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 8;
  }
  return 1;
}



/* JPH::SkeletonMapper::Mapping::Mapping(int, int, JPH::Mat44 const&) */

void __thiscall
JPH::SkeletonMapper::Mapping::Mapping(Mapping *this,int param_1,int param_2,Mat44 *param_3)

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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
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
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  uVar17 = *(undefined8 *)(param_3 + 0x30);
  uVar18 = *(undefined8 *)(param_3 + 0x38);
  fVar1 = *(float *)(param_3 + 0x10);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x18);
  fVar4 = *(float *)(param_3 + 0x1c);
  *(int *)this = param_1;
  fVar5 = *(float *)param_3;
  fVar6 = *(float *)(param_3 + 4);
  fVar7 = *(float *)(param_3 + 8);
  fVar8 = *(float *)(param_3 + 0xc);
  fVar9 = *(float *)(param_3 + 0x30);
  fVar10 = *(float *)(param_3 + 0x34);
  fVar11 = *(float *)(param_3 + 0x38);
  fVar12 = *(float *)(param_3 + 0x3c);
  *(int *)(this + 4) = param_2;
  uVar19 = *(undefined8 *)(param_3 + 0x10);
  uVar20 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(this + 0x40) = uVar17;
  *(undefined8 *)(this + 0x48) = uVar18;
  fVar13 = *(float *)(param_3 + 0x20);
  fVar14 = *(float *)(param_3 + 0x24);
  fVar15 = *(float *)(param_3 + 0x28);
  fVar16 = *(float *)(param_3 + 0x2c);
  uVar17 = *(undefined8 *)param_3;
  uVar18 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x20) = uVar19;
  *(undefined8 *)(this + 0x28) = uVar20;
  *(undefined8 *)(this + 0x10) = uVar17;
  *(undefined8 *)(this + 0x18) = uVar18;
  fVar29 = fVar7 * fVar16;
  fVar30 = fVar3 * fVar12;
  fVar31 = fVar15 * fVar8;
  fVar32 = fVar11 * fVar4;
  uVar17 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(this + 0x38) = uVar17;
  fVar38 = fVar7 * fVar14;
  fVar40 = fVar3 * fVar10;
  fVar42 = fVar15 * fVar6;
  fVar44 = fVar11 * fVar2;
  fVar21 = fVar6 * fVar16;
  fVar22 = fVar2 * fVar12;
  fVar23 = fVar14 * fVar8;
  fVar24 = fVar10 * fVar4;
  fVar46 = fVar5 * fVar16;
  fVar47 = fVar1 * fVar12;
  fVar48 = fVar13 * fVar8;
  fVar49 = fVar9 * fVar4;
  fVar39 = fVar5 * fVar14;
  fVar41 = fVar1 * fVar10;
  fVar43 = fVar13 * fVar6;
  fVar45 = fVar9 * fVar2;
  fVar25 = ((((fVar32 * fVar14 - fVar30 * fVar14) + fVar40 * fVar16) - fVar44 * fVar16) +
           fVar22 * fVar15) - fVar15 * fVar24;
  fVar26 = ((((fVar31 * fVar10 - fVar29 * fVar10) + fVar38 * fVar12) - fVar42 * fVar12) +
           fVar21 * fVar11) - fVar11 * fVar23;
  fVar27 = ((((fVar30 * fVar6 - fVar32 * fVar6) + fVar44 * fVar8) - fVar40 * fVar8) + fVar24 * fVar7
           ) - fVar7 * fVar22;
  fVar28 = ((((fVar29 * fVar2 - fVar31 * fVar2) + fVar42 * fVar4) - fVar38 * fVar4) + fVar23 * fVar3
           ) - fVar3 * fVar21;
  fVar34 = fVar5 * fVar15;
  fVar35 = fVar1 * fVar11;
  fVar36 = fVar13 * fVar7;
  fVar37 = fVar9 * fVar3;
  fVar33 = _LC1 / (fVar13 * fVar27 + fVar9 * fVar28 + fVar5 * fVar25 + fVar1 * fVar26);
  *(float *)(this + 0x50) = fVar25 * fVar33;
  *(float *)(this + 0x54) = fVar26 * fVar33;
  *(float *)(this + 0x58) = fVar27 * fVar33;
  *(float *)(this + 0x5c) = fVar28 * fVar33;
  *(float *)(this + 0x60) =
       ((((fVar13 * fVar30 - fVar13 * fVar32) - fVar15 * fVar47) + fVar15 * fVar49 + fVar16 * fVar35
        ) - fVar16 * fVar37) * fVar33;
  *(float *)(this + 100) =
       ((((fVar9 * fVar29 - fVar9 * fVar31) - fVar11 * fVar46) + fVar11 * fVar48 + fVar12 * fVar34)
       - fVar12 * fVar36) * fVar33;
  *(float *)(this + 0x68) =
       ((((fVar5 * fVar32 - fVar5 * fVar30) - fVar7 * fVar49) + fVar7 * fVar47 + fVar8 * fVar37) -
       fVar8 * fVar35) * fVar33;
  *(float *)(this + 0x6c) =
       ((((fVar1 * fVar31 - fVar1 * fVar29) - fVar3 * fVar48) + fVar3 * fVar46 + fVar4 * fVar36) -
       fVar4 * fVar34) * fVar33;
  *(float *)(this + 0x70) =
       ((fVar47 * fVar14 +
        (fVar16 * fVar45 - ((fVar22 * fVar13 - fVar24 * fVar13) + fVar16 * fVar41))) -
       fVar49 * fVar14) * fVar33;
  *(float *)(this + 0x74) =
       ((fVar46 * fVar10 + (fVar12 * fVar43 - ((fVar21 * fVar9 - fVar23 * fVar9) + fVar12 * fVar39))
        ) - fVar48 * fVar10) * fVar33;
  *(float *)(this + 0x78) =
       ((fVar49 * fVar6 + (fVar8 * fVar41 - ((fVar24 * fVar5 - fVar22 * fVar5) + fVar8 * fVar45))) -
       fVar47 * fVar6) * fVar33;
  *(float *)(this + 0x7c) =
       ((fVar48 * fVar2 + (fVar4 * fVar39 - ((fVar23 * fVar1 - fVar21 * fVar1) + fVar4 * fVar43))) -
       fVar46 * fVar2) * fVar33;
  *(float *)(this + 0x80) =
       ((((fVar41 * fVar15 - (fVar13 * fVar40 - fVar13 * fVar44)) - fVar15 * fVar45) -
        fVar35 * fVar14) + fVar14 * fVar37) * fVar33;
  *(float *)(this + 0x84) =
       ((((fVar39 * fVar11 - (fVar9 * fVar38 - fVar9 * fVar42)) - fVar11 * fVar43) - fVar34 * fVar10
        ) + fVar10 * fVar36) * fVar33;
  *(float *)(this + 0x88) =
       ((((fVar45 * fVar7 - (fVar5 * fVar44 - fVar5 * fVar40)) - fVar7 * fVar41) - fVar37 * fVar6) +
       fVar6 * fVar35) * fVar33;
  *(float *)(this + 0x8c) =
       ((((fVar43 * fVar3 - (fVar1 * fVar42 - fVar1 * fVar38)) - fVar3 * fVar39) - fVar36 * fVar2) +
       fVar2 * fVar34) * fVar33;
  *(undefined4 *)(this + 0x8c) = 0x3f800000;
  return;
}



/* JPH::SkeletonMapper::Initialize(JPH::Skeleton const*, JPH::Mat44 const*, JPH::Skeleton const*,
   JPH::Mat44 const*, std::function<bool (JPH::Skeleton const*, int, JPH::Skeleton const*, int)>
   const&) */

void JPH::SkeletonMapper::_GLOBAL__sub_I_Initialize(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC6;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SkeletonMapper::Mapping::Mapping(int, int, JPH::Mat44 const&) */

void __thiscall
JPH::SkeletonMapper::Mapping::Mapping(Mapping *this,int param_1,int param_2,Mat44 *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


