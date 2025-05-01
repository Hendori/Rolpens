
/* scheduleDispatch(FfxFsr2Context_Private*, FfxFsr2DispatchDescription const*, FfxPipelineState
   const*, unsigned int, unsigned int) [clone .isra.0] */

void scheduleDispatch(FfxFsr2Context_Private *param_1,FfxFsr2DispatchDescription *param_2,
                     FfxPipelineState *param_3,uint param_4,uint param_5)

{
  undefined8 *__s;
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  FfxFsr2DispatchDescription *pFVar11;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  byte bVar14;
  undefined1 local_6030 [24576];
  
  bVar14 = 0;
  puVar10 = &stack0xffffffffffffffd0;
  do {
    puVar5 = puVar10;
    *(undefined8 *)(puVar5 + -0x1000) = *(undefined8 *)(puVar5 + -0x1000);
    puVar10 = puVar5 + -0x1000;
  } while (puVar5 + -0x1000 != local_6030);
  *(int *)(puVar5 + -8000) = (int)param_3;
  __s = (undefined8 *)(puVar5 + -0x1f38);
  *(uint *)(puVar5 + -0x1f3c) = param_4;
  *(undefined8 *)(puVar5 + 0x4ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar5 + -0x1f60) = 0x10005f;
  memset(__s,0,0x3790);
  if (*(int *)(param_2 + 0x14) != 0) {
    uVar13 = 0x1000;
    lVar12 = 0;
    *(undefined1 **)(puVar5 + -0x1f50) = puVar5 + 0xc04;
    pFVar11 = param_2 + 0x864;
    do {
      uVar4 = uVar13 >> 2;
      lVar7 = *(long *)(puVar5 + -0x1f50) - uVar13;
      uVar13 = uVar13 - 0x100;
      *(undefined4 *)(puVar5 + lVar12 * 4 + -0x43c) =
           *(undefined4 *)(param_1 + (ulong)*(uint *)(pFVar11 + -4) * 4 + 0xf3e0);
      lVar12 = lVar12 + 1;
      *(undefined8 *)(puVar5 + -0x1f60) = 0x1000c5;
      __wcscpy_chk(lVar7,pFVar11,uVar4);
      pFVar11 = pFVar11 + 0x108;
    } while ((uint)lVar12 < *(uint *)(param_2 + 0x14));
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    pFVar11 = param_2 + 0x24;
    uVar13 = 0x800;
    lVar12 = 0;
    *(undefined1 **)(puVar5 + -0x1f48) = puVar5 + 0x1444;
    do {
      *(undefined4 *)(puVar5 + -0x1f50) = *(undefined4 *)(pFVar11 + -4);
      *(undefined8 *)(puVar5 + -0x1f60) = 0x100148;
      __wcscpy_chk(*(long *)(puVar5 + -0x1f48) - uVar13,pFVar11,uVar13 >> 2);
      uVar2 = *(uint *)(puVar5 + -0x1f50) - 0x1d;
      if (uVar2 < 0xd) {
        uVar3 = *(undefined4 *)(param_1 + 0xf53c);
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + (ulong)*(uint *)(puVar5 + -0x1f50) * 4 + 0xf4c8);
        uVar2 = 0;
      }
      *(uint *)(puVar5 + lVar12 * 4 + 0xc24) = uVar2;
      uVar13 = uVar13 - 0x100;
      pFVar11 = pFVar11 + 0x108;
      *(undefined4 *)(puVar5 + lVar12 * 4 + 0xc04) = uVar3;
      lVar12 = lVar12 + 1;
    } while ((uint)lVar12 < *(uint *)(param_2 + 0x10));
  }
  uVar3 = *(undefined4 *)(puVar5 + -8000);
  *(undefined4 *)(puVar5 + -0x440) = 1;
  pFVar11 = param_2;
  puVar8 = __s;
  for (lVar12 = 0x35e; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar8 = *(undefined8 *)pFVar11;
    pFVar11 = pFVar11 + (ulong)bVar14 * -0x10 + 8;
    puVar8 = puVar8 + (ulong)bVar14 * -2 + 1;
  }
  *(undefined4 *)(puVar5 + -0x448) = uVar3;
  *(undefined4 *)(puVar5 + -0x444) = *(undefined4 *)(puVar5 + -0x1f3c);
  if (*(int *)(param_2 + 0x18) != 0) {
    puVar10 = puVar5 + 0x164c;
    lVar12 = 0;
    pFVar11 = param_2 + 0x18e4;
    puVar8 = __s;
    do {
      *(undefined1 **)(puVar5 + -0x1f50) = puVar10;
      *(undefined8 *)(puVar5 + -0x1f60) = 0x1001e3;
      __wcscpy_chk(puVar10,pFVar11,lVar12 * -0x100 + 0x200U >> 2);
      uVar2 = *(uint *)(pFVar11 + -4);
      puVar9 = (undefined8 *)((long)puVar8 + 0x3384U & 0xfffffffffffffff8);
      puVar10 = (undefined1 *)(*(long *)(puVar5 + -0x1f50) + 0x100);
      lVar7 = (long)puVar8 + (0x337c - (long)puVar9);
      *(undefined8 *)((long)puVar8 + 0x337c) =
           *(undefined8 *)(&globalFsr2ConstantBuffers + (ulong)uVar2 * 0x41);
      puVar8[0x68f] = *(undefined8 *)(&DAT_00102ffc + (ulong)uVar2 * 0x104);
      puVar6 = (undefined8 *)((long)(&globalFsr2ConstantBuffers + (ulong)uVar2 * 0x41) - lVar7);
      for (uVar13 = (ulong)((int)lVar7 + 0x104U >> 3); uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + (ulong)bVar14 * -2 + 1;
        puVar9 = puVar9 + (ulong)bVar14 * -2 + 1;
      }
      *(undefined4 *)(puVar5 + lVar12 * 4 + 0x184c) = *(undefined4 *)(pFVar11 + -8);
      lVar12 = lVar12 + 1;
      pFVar11 = pFVar11 + 0x108;
      puVar8 = (undefined8 *)((long)puVar8 + 0x104);
    } while ((uint)lVar12 < *(uint *)(param_2 + 0x18));
  }
  *(undefined8 *)(puVar5 + -0x1f60) = 0x100282;
  memset(puVar5 + 0x1858,0,0x3798);
  *(undefined4 *)(puVar5 + 0x1858) = 2;
  *(undefined8 *)(puVar5 + -0x1f60) = 0x1002a2;
  memcpy(puVar5 + 0x1860,__s,0x3790);
  pcVar1 = *(code **)(param_1 + 0x68);
  *(undefined8 *)(puVar5 + -0x1f60) = 0x1002af;
  (*pcVar1)(param_1 + 0x18,puVar5 + 0x1858);
  if (*(long *)(puVar5 + 0x4ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar5 + -0x1f60) = &UNK_001002d9;
  __stack_chk_fail();
}



/* patchResourceBindings(FfxPipelineState*) [clone .isra.0] */

void patchResourceBindings(FfxPipelineState *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FfxPipelineState *pFVar4;
  FfxPipelineState *pFVar5;
  wchar_t *pwVar6;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 != 0) {
    pFVar5 = param_1 + 0x864;
    do {
      pwVar6 = L"r_input_color_jittered";
      iVar3 = 0;
      while (iVar2 = wcscmp(pwVar6,(wchar_t *)pFVar5), iVar2 != 0) {
        iVar3 = iVar3 + 1;
        pwVar6 = pwVar6 + 0x41;
        if (iVar3 == 0x1b) {
          return;
        }
      }
      pFVar4 = pFVar5 + 0x108;
      *(undefined4 *)(pFVar5 + -4) = (&srvResourceBindingTable)[(long)iVar3 * 0x41];
      pFVar5 = pFVar4;
    } while (pFVar4 != param_1 + 0x864 + (ulong)uVar1 * 0x108);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    pFVar5 = param_1 + 0x24;
    do {
      pwVar6 = L"rw_reconstructed_previous_nearest_depth";
      iVar3 = 0;
      while (iVar2 = wcscmp(pwVar6,(wchar_t *)pFVar5), iVar2 != 0) {
        iVar3 = iVar3 + 1;
        pwVar6 = pwVar6 + 0x41;
        if (iVar3 == 0x13) {
          return;
        }
      }
      pFVar4 = pFVar5 + 0x108;
      *(undefined4 *)(pFVar5 + -4) = (&uavResourceBindingTable)[(long)iVar3 * 0x41];
      pFVar5 = pFVar4;
    } while (pFVar4 != param_1 + 0x24 + (ulong)uVar1 * 0x108);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    return;
  }
  pFVar5 = param_1 + 0x18e4;
  do {
    pwVar6 = L"cbFSR2";
    iVar3 = 0;
    while (iVar2 = wcscmp(pwVar6,(wchar_t *)pFVar5), iVar2 != 0) {
      iVar3 = iVar3 + 1;
      pwVar6 = pwVar6 + 0x41;
      if (iVar3 == 4) {
        return;
      }
    }
    pFVar4 = pFVar5 + 0x108;
    *(undefined4 *)(pFVar5 + -4) = (&cbResourceBindingTable)[(long)iVar3 * 0x41];
    pFVar5 = pFVar4;
    if (param_1 + 0x18e4 + (ulong)uVar1 * 0x108 == pFVar4) {
      return;
    }
  } while( true );
}



/* createPipelineStates(FfxFsr2Context_Private*) */

ulong createPipelineStates(FfxFsr2Context_Private *param_1)

{
  FfxFsr2Context_Private *pFVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined4 local_78 [2];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  pFVar1 = param_1 + 0x18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 2;
  local_58 = 2;
  local_50 = _LC0;
  local_48 = _LC1;
  local_78[0] = *(undefined4 *)param_1;
  local_70 = &local_50;
  local_60 = &local_48;
  uVar2 = (**(code **)(param_1 + 0x58))(pFVar1,6,local_78,(FfxPipelineState *)(param_1 + 0xa310));
  if ((int)uVar2 == 0) {
    uVar2 = (**(code **)(param_1 + 0x58))(pFVar1,5,local_78,(FfxPipelineState *)(param_1 + 0x8820));
    if ((int)uVar2 == 0) {
      uVar2 = (**(code **)(param_1 + 0x58))
                        (pFVar1,7,local_78,(FfxPipelineState *)(param_1 + 0xbe00));
      if ((int)uVar2 == 0) {
        uVar2 = (**(code **)(param_1 + 0x58))
                          (pFVar1,8,local_78,(FfxPipelineState *)(param_1 + 0xd8f0));
        if ((int)uVar2 == 0) {
          local_58 = 1;
          uVar2 = (**(code **)(param_1 + 0x58))
                            (pFVar1,0,local_78,(FfxPipelineState *)(param_1 + 0x170));
          if ((int)uVar2 == 0) {
            uVar2 = (**(code **)(param_1 + 0x58))
                              (pFVar1,1,local_78,(FfxPipelineState *)(param_1 + 0x1c60));
            if ((int)uVar2 == 0) {
              uVar2 = (**(code **)(param_1 + 0x58))
                                (pFVar1,2,local_78,(FfxPipelineState *)(param_1 + 0x3750));
              if ((int)uVar2 == 0) {
                uVar2 = (**(code **)(param_1 + 0x58))
                                  (pFVar1,3,local_78,(FfxPipelineState *)(param_1 + 0x5240));
                if ((int)uVar2 == 0) {
                  uVar2 = (**(code **)(param_1 + 0x58))
                                    (pFVar1,4,local_78,(FfxPipelineState *)(param_1 + 0x6d30));
                  if ((int)uVar2 == 0) {
                    patchResourceBindings((FfxPipelineState *)(param_1 + 0x170));
                    patchResourceBindings((FfxPipelineState *)(param_1 + 0x1c60));
                    patchResourceBindings((FfxPipelineState *)(param_1 + 0x3750));
                    patchResourceBindings((FfxPipelineState *)(param_1 + 0x5240));
                    patchResourceBindings((FfxPipelineState *)(param_1 + 0xa310));
                    patchResourceBindings((FfxPipelineState *)(param_1 + 0x6d30));
                    patchResourceBindings((FfxPipelineState *)(param_1 + 0x8820));
                    patchResourceBindings((FfxPipelineState *)(param_1 + 0xbe00));
                    patchResourceBindings((FfxPipelineState *)(param_1 + 0xd8f0));
                    uVar2 = uVar2 & 0xffffffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* fsr2Create(FfxFsr2Context_Private*, FfxFsr2ContextDescription const*) */

void fsr2Create(FfxFsr2Context_Private *param_1,FfxFsr2ContextDescription *param_2)

{
  FfxFsr2Context_Private *pFVar1;
  FfxFsr2Context_Private FVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float __x;
  undefined1 local_97d;
  undefined4 local_97c;
  undefined4 local_978;
  undefined8 uStack_974;
  uint uStack_96c;
  uint local_968;
  undefined4 uStack_964;
  uint uStack_960;
  undefined4 uStack_95c;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 local_930;
  undefined8 local_928 [32];
  undefined2 local_828 [256];
  uint local_628 [2];
  wchar_t *local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined4 local_608;
  undefined4 local_5f0;
  wchar_t *local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined4 local_5b8;
  wchar_t *local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined4 local_580;
  wchar_t *local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined4 local_548;
  wchar_t *local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined4 local_528;
  undefined4 local_510;
  wchar_t *local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4d8;
  wchar_t *local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 local_4a0;
  wchar_t *local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined4 local_468;
  wchar_t *local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined4 local_430;
  wchar_t *local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 local_3f8;
  wchar_t *local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 local_3c0;
  wchar_t *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined4 local_388;
  wchar_t *local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 local_350;
  wchar_t *local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 local_318;
  wchar_t *local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 local_2f0;
  undefined4 *local_2e8;
  undefined4 local_2e0;
  wchar_t *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2a8;
  wchar_t *local_2a0;
  undefined8 local_294;
  undefined8 uStack_28c;
  undefined4 local_280;
  undefined8 *local_278;
  undefined4 local_270;
  wchar_t *local_268;
  undefined8 local_25c;
  undefined8 uStack_254;
  undefined4 local_248;
  undefined1 *local_240;
  undefined4 local_238;
  wchar_t *local_230;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined4 local_210;
  undefined2 *local_208;
  undefined4 local_200;
  wchar_t *local_1f8;
  undefined8 local_1ec;
  undefined8 uStack_1e4;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1c8;
  wchar_t *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 local_190;
  wchar_t *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_158;
  wchar_t *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_120;
  wchar_t *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_e8;
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_78;
  wchar_t *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_40 [2];
  
  bVar11 = 0;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  memset(param_1,0,0xf5c8);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  if (((*(uint *)param_1 & 0x100) != 0) && (*(long *)(param_1 + 0x90) == 0)) {
    *(uint *)param_1 = *(uint *)param_1 & 0xfffffeff;
  }
  pFVar1 = param_1 + 0x18;
  iVar5 = (**(code **)(param_1 + 0x18))(pFVar1);
  if (iVar5 == 0) {
    iVar5 = (**(code **)(param_1 + 0x20))(pFVar1,param_1 + 0x160,*(undefined8 *)(param_1 + 0x158));
    if (iVar5 == 0) {
      lVar8 = 0;
      *(undefined4 *)(param_1 + 0xf5b4) = 0;
      uVar3 = *(undefined8 *)(param_2 + 0xc);
      param_1[0xf5b0] = (FfxFsr2Context_Private)0x1;
      *(undefined8 *)(param_1 + 0xa8) = uVar3;
      puVar10 = local_928;
      for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
      }
      do {
        uVar4 = 0x7fff;
        fVar14 = ((float)(int)lVar8 + (float)(int)lVar8) / __LC2;
        if (_LC4 <= (float)((uint)fVar14 & _LC3)) {
          __x = _LC5 * fVar14;
          fVar12 = sinf(__x);
          fVar14 = fVar14 * __LC6;
          fVar13 = sinf(fVar14);
          fVar14 = roundf((fVar12 / __x) * (fVar13 / fVar14) * __LC7);
          uVar4 = (undefined2)(int)fVar14;
        }
        *(undefined2 *)((long)local_928 + lVar8 * 2) = uVar4;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x80);
      lVar6 = 1;
      local_828[0] = 0x7fff;
      do {
        fVar14 = roundf(_LC8 * *(float *)(ffxFsr2MaximumBias + lVar6 * 4) * __LC7);
        local_828[lVar6] = (short)(int)fVar14;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x100);
      FVar2 = *param_1;
      local_97d = 0;
      puVar9 = local_628;
      for (lVar6 = 0xbd; lVar6 != 0; lVar6 = lVar6 + -1) {
        puVar9[0] = 0;
        puVar9[1] = 0;
        puVar9 = puVar9 + ((ulong)bVar11 * -2 + 1) * 2;
      }
      uStack_618 = _LC10;
      local_620 = L"FSR2_PreparedInputColor";
      local_5e8 = L"FSR2_ReconstructedPrevNearestDepth";
      local_5e0 = _LC12;
      local_578 = L"FSR2_InternalDilatedVelocity2";
      local_5b0 = L"FSR2_InternalDilatedVelocity1";
      local_508 = L"FSR2_LockStatus1";
      local_5a8 = _LC14;
      local_570 = _LC14;
      local_540 = L"FSR2_DilatedDepth";
      local_538 = _LC17;
      local_500 = _LC14;
      local_97c = 0;
      local_930 = 0;
      local_628[0] = 0xe;
      local_608 = 1;
      local_5f0 = 8;
      local_5d0 = 1;
      local_5b8 = 0x35;
      local_598 = 1;
      local_580 = 0x36;
      local_560 = 1;
      local_548 = 10;
      local_528 = 1;
      local_510 = 0x15;
      local_4f0 = 1;
      local_498 = L"FSR2_LockInputLuma";
      local_428 = L"FSR2_InternalUpscaled1";
      local_4d0 = L"FSR2_LockStatus2";
      local_4c8 = _LC14;
      local_490 = _LC21;
      local_460 = L"FSR2_NewLocks";
      local_420 = _LC25;
      local_3e8 = _LC25;
      local_3b0 = _LC21;
      local_3f0 = L"FSR2_InternalUpscaled2";
      local_3b8 = L"FSR2_ExposureMips";
      local_458 = _LC23;
      local_380 = L"FSR2_LumaHistory1";
      local_378 = _LC29;
      local_4d8 = 0x16;
      local_4b8 = 1;
      local_4a0 = 0x39;
      local_480 = 1;
      local_468 = 0xd;
      local_448 = 1;
      local_430 = 0x17;
      local_410 = 1;
      local_3f8 = 0x18;
      local_3d8 = 1;
      local_3c0 = 0x1d;
      local_388 = 0x37;
      local_368 = 1;
      local_350 = 0x38;
      local_348 = L"FSR2_LumaHistory2";
      local_340 = _LC29;
      local_308 = _LC12;
      uStack_300 = _UNK_001090a8;
      local_310 = L"FSR2_SpdAtomicCounter";
      local_294 = __LC36;
      uStack_28c = _UNK_001090b8;
      local_2d8 = L"FSR2_DilatedReactiveMasks";
      local_25c = __LC38;
      uStack_254 = _UNK_001090c8;
      local_2a0 = L"FSR2_LanczosLutData";
      local_224 = __LC40;
      uStack_21c = _UNK_001090d8;
      local_268 = L"FSR2_DefaultReactiviyMask";
      local_2d0 = _LC34;
      local_230 = L"FSR2_MaximumUpsampleBias";
      local_1f8 = L"FSR2_DefaultExposure";
      local_1ec = __LC42;
      uStack_1e4 = _UNK_001090e8;
      local_330 = 1;
      local_318 = 0x12;
      local_2f8 = 1;
      local_2f0 = 4;
      local_2e0 = 0x1c;
      local_2c0 = 1;
      local_2a8 = 0x11;
      local_280 = 0x100;
      local_270 = 0x19;
      local_248 = 1;
      local_238 = 0x1b;
      local_210 = 0x200;
      local_200 = 0x2a;
      local_1d8 = 8;
      local_1c0 = L"FSR2_AutoExposure";
      local_188 = L"FSR2_AutoReactive";
      local_180 = _LC23;
      local_148 = _LC23;
      local_1b8 = __LC44;
      uStack_1b0 = _UNK_001090f8;
      local_610 = *(undefined8 *)(param_2 + 4);
      local_150 = L"FSR2_AutoComposition";
      local_118 = L"FSR2_PrevPreAlpha0";
      local_110 = _LC48;
      local_e0 = L"FSR2_PrevPostAlpha0";
      local_d8 = _LC48;
      local_a8 = L"FSR2_PrevPreAlpha1";
      local_a0 = _LC48;
      local_68 = _LC48;
      local_1c8 = 0x2b;
      local_1a8 = 1;
      local_190 = 0x2c;
      local_170 = 1;
      local_158 = 0x2d;
      local_138 = 1;
      local_120 = 0x30;
      local_100 = 1;
      local_e8 = 0x31;
      local_c8 = 1;
      local_b0 = 0x32;
      local_90 = 1;
      local_78 = 0x33;
      local_70 = L"FSR2_PrevPostAlpha1";
      local_58 = 1;
      local_5d8 = local_610;
      local_2e8 = &local_97c;
      local_4f8 = uVar3;
      local_4c0 = uVar3;
      local_450 = uVar3;
      local_418 = uVar3;
      local_3e0 = uVar3;
      local_370 = uVar3;
      local_338 = uVar3;
      local_240 = &local_97d;
      local_278 = local_928;
      local_208 = local_828;
      puVar9 = local_628;
      local_1d0 = &local_930;
      local_5a0 = local_610;
      local_568 = local_610;
      local_530 = local_610;
      local_488 = local_610;
      local_3a8 = CONCAT44((uint)((ulong)local_610 >> 0x21),(uint)local_610 >> 1);
      local_2c8 = local_610;
      local_178 = local_610;
      local_140 = local_610;
      local_108 = local_610;
      local_d0 = local_610;
      local_98 = local_610;
      local_60 = local_610;
      *(undefined8 *)(param_1 + 0xf3e0) = 0;
      *(undefined8 *)(param_1 + 0xf4c0) = 0;
      puVar10 = (undefined8 *)((ulong)(param_1 + 0xf3e8) & 0xfffffffffffffff8);
      for (uVar7 = (ulong)(((int)param_1 -
                           (int)(undefined8 *)((ulong)(param_1 + 0xf3e8) & 0xfffffffffffffff8)) +
                           0xf4c8U >> 3); uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
      }
      do {
        local_968 = puVar9[7];
        iVar5 = 2;
        if (puVar9[7] < 2) {
          iVar5 = (((byte)FVar2 & 0x80) == 0) + 1;
        }
        uStack_96c = puVar9[6];
        uStack_960 = puVar9[8];
        uStack_974 = CONCAT44(puVar9[5],iVar5);
        uStack_948 = *(undefined8 *)(puVar9 + 2);
        uStack_95c = 0;
        local_978 = 0;
        local_958 = CONCAT44(puVar9[10],(puVar9[4] == 0) + 1);
        local_950 = *(undefined8 *)(puVar9 + 0xc);
        uStack_964 = 1;
        local_940 = CONCAT44(*puVar9,puVar9[4]);
        iVar5 = (**(code **)(param_1 + 0x30))
                          (pFVar1,&local_978,param_1 + (ulong)*puVar9 * 4 + 0xf3e0);
        if (iVar5 != 0) goto LAB_001010a7;
        puVar9 = puVar9 + 0xe;
      } while ((uint *)local_40 != puVar9);
      *(undefined8 *)(param_1 + 0xf4c8) = *(undefined8 *)(param_1 + 0xf3e0);
      *(undefined8 *)(param_1 + 0xf4d0) = *(undefined8 *)(param_1 + 0xf3e8);
      *(undefined8 *)(param_1 + 0xf4d8) = *(undefined8 *)(param_1 + 0xf3f0);
      *(undefined8 *)(param_1 + 0xf4e0) = *(undefined8 *)(param_1 + 0xf3f8);
      *(undefined8 *)(param_1 + 0xf4e8) = *(undefined8 *)(param_1 + 0xf400);
      *(undefined8 *)(param_1 + 0xf4f0) = *(undefined8 *)(param_1 + 0xf408);
      *(undefined8 *)(param_1 + 0xf4f8) = *(undefined8 *)(param_1 + 0xf410);
      *(undefined8 *)(param_1 + 0xf500) = *(undefined8 *)(param_1 + 0xf418);
      *(undefined8 *)(param_1 + 0xf508) = *(undefined8 *)(param_1 + 0xf420);
      *(undefined8 *)(param_1 + 0xf510) = *(undefined8 *)(param_1 + 0xf428);
      *(undefined8 *)(param_1 + 0xf518) = *(undefined8 *)(param_1 + 0xf430);
      *(undefined8 *)(param_1 + 0xf520) = *(undefined8 *)(param_1 + 0xf438);
      *(undefined8 *)(param_1 + 0xf528) = *(undefined8 *)(param_1 + 0xf440);
      *(undefined8 *)(param_1 + 0xf530) = *(undefined8 *)(param_1 + 0xf448);
      *(undefined8 *)(param_1 + 0xf538) = *(undefined8 *)(param_1 + 0xf450);
      *(undefined8 *)(param_1 + 0xf540) = *(undefined8 *)(param_1 + 0xf458);
      *(undefined8 *)(param_1 + 0xf548) = *(undefined8 *)(param_1 + 0xf460);
      *(undefined8 *)(param_1 + 0xf550) = *(undefined8 *)(param_1 + 0xf468);
      *(undefined8 *)(param_1 + 0xf558) = *(undefined8 *)(param_1 + 0xf470);
      *(undefined8 *)(param_1 + 0xf560) = *(undefined8 *)(param_1 + 0xf478);
      *(undefined8 *)(param_1 + 0xf568) = *(undefined8 *)(param_1 + 0xf480);
      *(undefined8 *)(param_1 + 0xf570) = *(undefined8 *)(param_1 + 0xf488);
      *(undefined8 *)(param_1 + 0xf578) = *(undefined8 *)(param_1 + 0xf490);
      *(undefined8 *)(param_1 + 0xf580) = *(undefined8 *)(param_1 + 0xf498);
      *(undefined8 *)(param_1 + 0xf588) = *(undefined8 *)(param_1 + 0xf4a0);
      *(undefined8 *)(param_1 + 0xf590) = *(undefined8 *)(param_1 + 0xf4a8);
      *(undefined8 *)(param_1 + 0xf598) = *(undefined8 *)(param_1 + 0xf4b0);
      *(undefined8 *)(param_1 + 0xf5a0) = *(undefined8 *)(param_1 + 0xf4b8);
      param_1[0xf5b1] = (FfxFsr2Context_Private)0x0;
      *(undefined8 *)(param_1 + 0xf5a8) = *(undefined8 *)(param_1 + 0xf4c0);
      createPipelineStates(param_1);
    }
  }
LAB_001010a7:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* fsr2Dispatch(FfxFsr2Context_Private*, FfxFsr2DispatchDescription const*) */

undefined8 fsr2Dispatch(FfxFsr2Context_Private *param_1,FfxFsr2DispatchDescription *param_2)

{
  undefined8 *__s;
  float fVar1;
  float fVar2;
  float fVar3;
  FfxFsr2DispatchDescription FVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  FfxFsr2Context_Private *pFVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  uint in_R8D;
  ulong uVar27;
  long in_FS_OFFSET;
  byte bVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 local_7030 [28672];
  
  bVar28 = 0;
  puVar23 = &stack0xffffffffffffffd0;
  do {
    puVar22 = puVar23;
    *(undefined8 *)(puVar22 + -0x1000) = *(undefined8 *)(puVar22 + -0x1000);
    puVar23 = puVar22 + -0x1000;
  } while (puVar22 + -0x1000 != local_7030);
  *(undefined8 *)(puVar22 + 0x5ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lVar16 = *(long *)param_2;
  *(long *)(puVar22 + -0x1038) = lVar16;
  if ((*(uint *)param_1 & 0x100) != 0) {
    if (lVar16 == 0) {
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x102700;
      (*pcVar14)(0);
    }
    if (*(long *)(param_2 + 8) == 0) {
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x1026e8;
      (*pcVar14)(0);
    }
    if (*(long *)(param_2 + 0x140) == 0) {
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x1026d0;
      (*pcVar14)(0);
    }
    if (*(long *)(param_2 + 0x278) == 0) {
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x1026b8;
      (*pcVar14)(0);
    }
    if ((*(long *)(param_2 + 0x3b0) != 0) && (((byte)*param_1 & 0x20) != 0)) {
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x102323;
      (*pcVar14)(1);
    }
    if (*(long *)(param_2 + 0x758) == 0) {
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x102718;
      (*pcVar14)(0);
    }
    if ((_LC53 < (float)(*(uint *)(param_2 + 0x890) & _LC3)) ||
       (fVar37 = _LC53, _LC53 < (float)(*(uint *)(param_2 + 0x894) & _LC3))) {
      *(float *)(puVar22 + -0x1048) = _LC53;
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x101f6e;
      (*pcVar14)(1);
      fVar37 = *(float *)(puVar22 + -0x1048);
    }
    fVar1 = *(float *)(param_2 + 0x898);
    if (((float)*(uint *)(param_1 + 4) < fVar1) ||
       ((float)*(uint *)(param_1 + 8) < *(float *)(param_2 + 0x89c))) {
      *(float *)(puVar22 + -0x1048) = fVar37;
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x101fa9;
      (*pcVar14)(1);
      fVar1 = *(float *)(param_2 + 0x898);
      fVar37 = *(float *)(puVar22 + -0x1048);
    }
    if ((fVar1 == 0.0) || (*(float *)(param_2 + 0x89c) == 0.0)) {
      *(float *)(puVar22 + -0x1048) = fVar37;
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x101fe1;
      (*pcVar14)(1);
      fVar37 = *(float *)(puVar22 + -0x1048);
    }
    uVar12 = *(uint *)(param_2 + 0x8a0);
    if ((*(uint *)(param_1 + 4) < uVar12) || (*(uint *)(param_1 + 8) < *(uint *)(param_2 + 0x8a4)))
    {
      *(float *)(puVar22 + -0x1048) = fVar37;
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x10200e;
      (*pcVar14)(1);
      uVar12 = *(uint *)(param_2 + 0x8a0);
      fVar37 = *(float *)(puVar22 + -0x1048);
    }
    if ((uVar12 == 0) || (*(int *)(param_2 + 0x8a4) == 0)) {
      *(float *)(puVar22 + -0x1048) = fVar37;
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x102039;
      (*pcVar14)(1);
      fVar37 = *(float *)(puVar22 + -0x1048);
    }
    if ((*(float *)(param_2 + 0x8ac) < 0.0) || (fVar37 < *(float *)(param_2 + 0x8ac))) {
      *(float *)(puVar22 + -0x1048) = fVar37;
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x10206c;
      (*pcVar14)(1);
      fVar37 = *(float *)(puVar22 + -0x1048);
    }
    if (*(float *)(param_2 + 0x8b0) <= fVar37 && fVar37 != *(float *)(param_2 + 0x8b0)) {
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x1022eb;
      (*pcVar14)(1);
    }
    if (*(float *)(param_2 + 0x8b4) == 0.0) {
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x10209d;
      (*pcVar14)(0);
    }
    uVar12 = *(uint *)param_1 & 0x10;
    if ((*(uint *)param_1 & 8) == 0) {
      if (*(float *)(param_2 + 0x8c0) < *(float *)(param_2 + 0x8bc)) {
        pcVar14 = *(code **)(param_1 + 0x90);
        *(undefined8 *)(puVar22 + -0x1050) = 0x102228;
        (*pcVar14)(1);
      }
      if ((uVar12 != 0) && (*(float *)(param_2 + 0x8c0) != __LC70)) {
        pcVar14 = *(code **)(param_1 + 0x90);
        *(undefined8 *)(puVar22 + -0x1050) = 0x102783;
        (*pcVar14)(1);
      }
      if (*(float *)(param_2 + 0x8bc) <= _LC72 && _LC72 != *(float *)(param_2 + 0x8bc)) {
        pcVar14 = *(code **)(param_1 + 0x90);
        *(undefined8 *)(puVar22 + -0x1050) = 0x10226f;
        (*pcVar14)(1);
      }
    }
    else {
      if (*(float *)(param_2 + 0x8bc) < *(float *)(param_2 + 0x8c0)) {
        pcVar14 = *(code **)(param_1 + 0x90);
        *(undefined8 *)(puVar22 + -0x1050) = 0x1020d5;
        (*pcVar14)(1);
      }
      if ((uVar12 != 0) && (*(float *)(param_2 + 0x8bc) != __LC70)) {
        pcVar14 = *(code **)(param_1 + 0x90);
        *(undefined8 *)(puVar22 + -0x1050) = 0x102763;
        (*pcVar14)(1);
      }
      if (*(float *)(param_2 + 0x8c0) <= _LC72 && _LC72 != *(float *)(param_2 + 0x8c0)) {
        pcVar14 = *(code **)(param_1 + 0x90);
        *(undefined8 *)(puVar22 + -0x1050) = 0x102118;
        (*pcVar14)(1);
      }
    }
    fVar37 = *(float *)(param_2 + 0x8c4);
    if (fVar37 <= 0.0) {
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x102139;
      (*pcVar14)(0);
      fVar37 = *(float *)(param_2 + 0x8c4);
    }
    if (_LC5 < fVar37) {
      pcVar14 = *(code **)(param_1 + 0x90);
      *(undefined8 *)(puVar22 + -0x1050) = 0x10215a;
      (*pcVar14)(0);
    }
    *(undefined8 *)(puVar22 + -0x1038) = *(undefined8 *)param_2;
  }
  if (param_1[0xf5b1] != (FfxFsr2Context_Private)0x0) {
    param_1[0xf5b1] = (FfxFsr2Context_Private)0x0;
    *(undefined8 *)(puVar22 + -0x1050) = 0x101ed0;
    uVar15 = createPipelineStates(param_1);
    if ((int)uVar15 != 0) goto LAB_00101d70;
  }
  if (param_1[0xf5b0] == (FfxFsr2Context_Private)0x0) {
    *(FfxFsr2Context_Private **)(puVar22 + -0x1048) = param_1 + 0x18;
  }
  else {
    puVar23 = puVar22 + 0x2858;
    *(undefined8 *)(puVar22 + -0x1050) = 0x101db7;
    memset(puVar23,0,0x3798);
    *(undefined4 *)(puVar22 + 0x2870) = *(undefined4 *)(param_1 + 0xf434);
    pFVar20 = param_1 + 0x18;
    *(FfxFsr2Context_Private **)(puVar22 + -0x1048) = pFVar20;
    pcVar14 = *(code **)(param_1 + 0x68);
    *(undefined8 *)(puVar22 + -0x1050) = 0x101dda;
    (*pcVar14)(pFVar20,puVar23);
    *(undefined4 *)(puVar22 + 0x2870) = *(undefined4 *)(param_1 + 0xf438);
    pcVar14 = *(code **)(param_1 + 0x68);
    *(undefined8 *)(puVar22 + -0x1050) = 0x101df2;
    (*pcVar14)(pFVar20,puVar23);
    *(undefined4 *)(puVar22 + 0x2870) = *(undefined4 *)(param_1 + 0xf418);
    pcVar14 = *(code **)(param_1 + 0x68);
    *(undefined8 *)(puVar22 + -0x1050) = 0x101e0a;
    (*pcVar14)(pFVar20,puVar23);
  }
  uVar12 = *(uint *)(param_1 + 0xf5b4) & 1;
  *(uint *)(puVar22 + -0x1010) = (-(uint)(uVar12 == 0) & 0xfffffffe) + 0x33;
  *(uint *)(puVar22 + -0x1014) = 0x38 - uVar12;
  *(uint *)(puVar22 + -0x1018) = 0x38 - (uint)(uVar12 == 0);
  *(uint *)(puVar22 + -0x101c) = 0x36 - uVar12;
  *(uint *)(puVar22 + -0x1028) = 0x36 - (uint)(uVar12 == 0);
  *(uint *)(puVar22 + -0x1020) = 0x18 - uVar12;
  *(uint *)(puVar22 + -0x102c) = 0x18 - (uint)(uVar12 == 0);
  FVar4 = param_2[0x8b8];
  *(uint *)(puVar22 + -0x1030) = 0x16 - uVar12;
  *(FfxFsr2DispatchDescription *)(puVar22 + -0x103c) = FVar4;
  if (FVar4 == (FfxFsr2DispatchDescription)0x0) {
    *(FfxFsr2Context_Private *)(puVar22 + -0x103c) = param_1[0xf5b0];
  }
  uVar15 = *(undefined8 *)(puVar22 + -0x1048);
  param_1[0xf5b0] = (FfxFsr2Context_Private)0x0;
  *(FfxFsr2Context_Private **)(puVar22 + -0xff0) = param_1 + 0xf3e8;
  *(FfxFsr2DispatchDescription **)(puVar22 + -0xfe8) = param_2 + 8;
  pcVar14 = *(code **)(param_1 + 0x38);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101333;
  (*pcVar14)(uVar15,param_2 + 8);
  pcVar14 = *(code **)(param_1 + 0x38);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101349;
  (*pcVar14)(*(undefined8 *)(puVar22 + -0x1048),param_2 + 0x140,param_1 + 0xf3f0);
  pcVar14 = *(code **)(param_1 + 0x38);
  *(undefined8 *)(puVar22 + -0x1050) = 0x10135f;
  (*pcVar14)(*(undefined8 *)(puVar22 + -0x1048),param_2 + 0x278,param_1 + 0xf3ec);
  if (((byte)*param_1 & 0x20) == 0) {
    pcVar14 = *(code **)(param_1 + 0x38);
    if (*(long *)(param_2 + 0x3b0) == 0) {
      *(undefined4 *)(param_1 + 0xf3f4) = *(undefined4 *)(param_1 + 0xf488);
    }
    else {
      *(undefined8 *)(puVar22 + -0x1050) = 0x101eae;
      (*pcVar14)(*(undefined8 *)(puVar22 + -0x1048),param_2 + 0x3b0,param_1 + 0xf3f4);
      pcVar14 = *(code **)(param_1 + 0x38);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf3f4) = *(undefined4 *)(param_1 + 0xf48c);
    pcVar14 = *(code **)(param_1 + 0x38);
  }
  if (param_2[0x8cc] != (FfxFsr2DispatchDescription)0x0) {
    *(undefined8 *)(puVar22 + -0x1050) = 0x101398;
    (*pcVar14)(*(undefined8 *)(puVar22 + -0x1048),param_2 + 0x8d0,param_1 + 0xf498);
    pcVar14 = *(code **)(param_1 + 0x38);
  }
  if (*(long *)(param_2 + 0x4e8) == 0) {
    *(undefined4 *)(param_1 + 0xf3f8) = *(undefined4 *)(param_1 + 0xf444);
  }
  else {
    *(undefined8 *)(puVar22 + -0x1050) = 0x1013be;
    (*pcVar14)(*(undefined8 *)(puVar22 + -0x1048),param_2 + 0x4e8,param_1 + 0xf3f8);
    pcVar14 = *(code **)(param_1 + 0x38);
  }
  if (*(long *)(param_2 + 0x620) == 0) {
    *(undefined4 *)(param_1 + 0xf3fc) = *(undefined4 *)(param_1 + 0xf444);
  }
  else {
    *(undefined8 *)(puVar22 + -0x1050) = 0x1013e4;
    (*pcVar14)(*(undefined8 *)(puVar22 + -0x1048),param_2 + 0x620,param_1 + 0xf3fc);
    pcVar14 = *(code **)(param_1 + 0x38);
  }
  *(undefined8 *)(puVar22 + -0x1050) = 0x1013fc;
  (*pcVar14)(*(undefined8 *)(puVar22 + -0x1048),param_2 + 0x758,param_1 + 0xf514);
  uVar27 = (ulong)(0x16 - (uVar12 == 0));
  lVar16 = uVar27 + 0x3cf8;
  *(ulong *)(puVar22 + -0x1000) = uVar27;
  *(undefined4 *)(param_1 + 0xf410) = *(undefined4 *)(param_1 + lVar16 * 4);
  *(ulong *)(puVar22 + -0xff8) = (ulong)*(uint *)(puVar22 + -0x102c);
  *(undefined4 *)(param_1 + 0xf40c) =
       *(undefined4 *)(param_1 + (ulong)*(uint *)(puVar22 + -0x102c) * 4 + 0xf3e0);
  *(undefined4 *)(param_1 + 0xf4f8) =
       *(undefined4 *)(param_1 + (ulong)*(uint *)(puVar22 + -0x1030) * 4 + 0xf4c8);
  uVar13 = *(undefined4 *)(param_1 + ((ulong)*(uint *)(puVar22 + -0x1020) + 0x3d30) * 4 + 8);
  *(undefined4 *)(param_1 + 0xf430) =
       *(undefined4 *)(param_1 + ((ulong)*(uint *)(puVar22 + -0x1020) + 0x3d30) * 4 + 8);
  uVar6 = *(uint *)(puVar22 + -0x1028);
  *(undefined4 *)(param_1 + 0xf4f4) = uVar13;
  uVar13 = *(undefined4 *)(param_1 + (ulong)uVar6 * 4 + 0xf3e0);
  *(undefined4 *)(param_1 + 0xf4ec) = *(undefined4 *)(param_1 + (ulong)uVar6 * 4 + 0xf4c8);
  uVar6 = *(uint *)(puVar22 + -0x101c);
  *(undefined4 *)(param_1 + 0xf404) = uVar13;
  *(undefined4 *)(param_1 + 0xf4b0) = *(undefined4 *)(param_1 + (ulong)uVar6 * 4 + 0xf3e0);
  *(undefined4 *)(param_1 + 0xf504) =
       *(undefined4 *)(param_1 + (ulong)*(uint *)(puVar22 + -0x1014) * 4 + 0xf4c8);
  *(undefined4 *)(param_1 + 0xf41c) =
       *(undefined4 *)(param_1 + (ulong)*(uint *)(puVar22 + -0x1018) * 4 + 0xf3e0);
  *(undefined4 *)(param_1 + 0xf498) =
       *(undefined4 *)(param_1 + (ulong)((-(uint)(uVar12 == 0) & 0xfffffffe) + 0x32) * 4 + 0xf3e0);
  *(undefined4 *)(param_1 + 0xf580) =
       *(undefined4 *)(param_1 + (ulong)((-(uint)(uVar12 == 0) & 2) + 0x30) * 4 + 0xf4c8);
  uVar13 = *(undefined4 *)(param_1 + 0xf3e8);
  *(undefined4 *)(param_1 + 0xf49c) =
       *(undefined4 *)(param_1 + (ulong)*(uint *)(puVar22 + -0x1010) * 4 + 0xf3e0);
  uVar15 = *(undefined8 *)(puVar22 + -0x1048);
  *(undefined4 *)(param_1 + 0xf584) =
       *(undefined4 *)(param_1 + (ulong)((-(uint)(uVar12 == 0) & 2) + 0x31) * 4 + 0xf4c8);
  pcVar14 = *(code **)(param_1 + 0x48);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101518;
  (*pcVar14)(puVar22 + -0xfc8,uVar15,uVar13);
  uVar13 = *(undefined4 *)(param_1 + lVar16 * 4);
  pcVar14 = *(code **)(param_1 + 0x48);
  *(undefined8 *)(puVar22 + -0x1050) = 0x10152b;
  (*pcVar14)(puVar22 + -0xfa8,uVar15,uVar13);
  uVar13 = *(undefined4 *)(param_1 + 0xf3f8);
  pcVar14 = *(code **)(param_1 + 0x48);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101541;
  (*pcVar14)(puVar22 + -0xf88,uVar15,uVar13);
  uVar15 = *(undefined8 *)(param_2 + 0x890);
  uVar12 = *(uint *)(param_2 + 0x8a0);
  uVar27 = (ulong)uVar12;
  *(undefined8 *)(puVar22 + -0x1008) = uVar15;
  *(undefined8 *)(param_1 + 0xd8) = uVar15;
  if (uVar12 == 0) {
    uVar12 = *(uint *)(puVar22 + -0xfc0);
    *(undefined4 *)(puVar22 + -0x100c) = 0;
    uVar6 = uVar12;
  }
  else {
    *(uint *)(puVar22 + -0x100c) = uVar12;
    uVar6 = *(uint *)(puVar22 + -0xfc0);
  }
  uVar29 = *(uint *)(param_2 + 0x8a4);
  uVar7 = *(uint *)(puVar22 + -0xfbc);
  *(uint *)(param_1 + 0x98) = uVar12;
  uVar13 = *(undefined4 *)(param_1 + 4);
  fVar37 = _LC8 * *(float *)(param_2 + 0x8c4);
  uVar11 = uVar7;
  if (uVar29 != 0) {
    uVar11 = uVar29;
  }
  *(undefined4 *)(puVar22 + -0x102c) = uVar13;
  *(ulong *)(param_1 + 0xb0) = CONCAT44(uVar7,uVar6);
  *(ulong *)(puVar22 + -0x1028) = CONCAT44(uVar11,uVar12);
  uVar8 = *(undefined4 *)(param_1 + 8);
  *(float *)(puVar22 + -0x101c) = fVar37;
  *(ulong *)(param_1 + 0x9c) = CONCAT44(uVar13,uVar11);
  *(undefined4 *)(param_1 + 0xa4) = uVar8;
  *(undefined4 *)(puVar22 + -0x1020) = uVar8;
  *(float *)(puVar22 + -0x1030) = (float)uVar27 / (float)uVar29;
  *(undefined8 *)(puVar22 + -0x1050) = 0x10161f;
  dVar32 = tan((double)fVar37);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101636;
  dVar32 = atan((double)*(float *)(puVar22 + -0x1030) * dVar32);
  *(undefined8 *)(puVar22 + -0x1050) = 0x10164b;
  fVar37 = tanf((float)(dVar32 + dVar32) * _LC8);
  fVar2 = _LC53;
  uVar6 = *(uint *)param_1;
  *(float *)(param_1 + 0x100) = fVar37;
  fVar37 = *(float *)(param_2 + 0x8bc);
  fVar1 = *(float *)(puVar22 + -0x101c);
  uVar29 = -(uint)(0.0 < *(float *)(param_2 + 0x8c8));
  fVar31 = *(float *)(param_2 + 0x8c0);
  *(uint *)(param_1 + 0x110) = (uint)*(float *)(param_2 + 0x8c8) & uVar29 | ~uVar29 & (uint)fVar2;
  fVar38 = fVar37;
  if ((fVar31 <= fVar37) && (fVar38 = fVar31, fVar31 < fVar37)) {
    fVar31 = fVar37;
  }
  fVar37 = fVar31;
  if ((uVar6 & 8) == 0) {
    fVar37 = fVar38;
    fVar38 = fVar31;
  }
  *(uint *)(puVar22 + -0x101c) = uVar6;
  *(float *)(puVar22 + -0x1010) = fVar2;
  *(float *)(puVar22 + -0x1014) = fVar37;
  *(float *)(puVar22 + -0x1018) = fVar38;
  *(undefined8 *)(puVar22 + -0x1050) = 0x1016ff;
  sincosf(fVar1,(float *)(puVar22 + -0xfdc),(float *)(puVar22 + -0xfe0));
  fVar37 = *(float *)(puVar22 + -0x1014);
  lVar16 = (ulong)(uVar6 >> 4 & 1) + (ulong)((uVar6 & 8) != 0) * 2;
  fVar1 = *(float *)(puVar22 + -0x1018);
  fVar31 = *(float *)(puVar22 + -0x1010);
  *(undefined4 *)(puVar22 + -0xf34) = 0xbf800001;
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar29 = *(uint *)(param_1 + 0x10);
  uVar7 = *(uint *)(puVar22 + -0x101c);
  *(float *)(puVar22 + -0xf2c) = _LC80;
  uVar27 = CONCAT44((float)(int)((ulong)*(undefined8 *)(puVar22 + -0x1028) >> 0x20),
                    (float)(int)*(undefined8 *)(puVar22 + -0x1028));
  fVar30 = fVar1 / (fVar37 - fVar1);
  *(float *)(puVar22 + -0xf38) = fVar30;
  *(float *)(puVar22 + -0xf30) = fVar30;
  fVar2 = *(float *)(puVar22 + -0xfe0);
  fVar38 = *(float *)(puVar22 + -0xfdc);
  fVar3 = *(float *)(puVar22 + -0x1030);
  *(ulong *)(puVar22 + 0x2858) = CONCAT44((float)((uint)fVar37 ^ _LC81) - _LC80,fVar30 * fVar37);
  *(ulong *)(puVar22 + 0x2860) = CONCAT44(fVar1,fVar30 * fVar37);
  uVar15 = CONCAT44(_UNK_0010901c,_LC53);
  *(ulong *)(param_1 + 200) =
       CONCAT44(*(undefined4 *)(puVar22 + lVar16 * 4 + 0x2858),
                *(uint *)(puVar22 + lVar16 * 4 + -0xf38) ^ _LC81);
  *(ulong *)(param_1 + 0xd0) =
       CONCAT44(fVar31 / (fVar2 / fVar38),fVar31 / ((fVar2 / fVar38) / fVar3));
  auVar36._0_4_ = (float)uVar6;
  auVar36._4_4_ = (float)uVar29;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar27;
  auVar36._8_8_ = uVar15;
  auVar36 = divps(auVar35,auVar36);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xf8);
  *(long *)(param_1 + 0xe8) = auVar36._0_8_;
  fVar37 = *(float *)(param_2 + 0x8b4);
  if (*(float *)(param_2 + 0x8b4) == 0.0) {
    fVar37 = fVar31;
  }
  *(float *)(param_1 + 0xf8) = fVar37;
  if ((uVar7 & 2) != 0) {
    uVar27 = CONCAT44((float)(int)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20),
                      (float)(int)*(undefined8 *)(param_1 + 0xa8));
  }
  auVar33._8_8_ = 0;
  auVar33._0_8_ = *(ulong *)(param_2 + 0x898);
  auVar39._8_8_ = uVar15;
  auVar39._0_8_ = uVar27;
  auVar36 = divps(auVar33,auVar39);
  *(long *)(param_1 + 0xe0) = auVar36._0_8_;
  if ((uVar7 & 4) != 0) {
    uVar15 = *(undefined8 *)(puVar22 + -0x1008);
    auVar34._0_4_ = (float)*(undefined8 *)(param_1 + 0xf5b8) - (float)uVar15;
    auVar34._4_4_ =
         (float)((ulong)*(undefined8 *)(param_1 + 0xf5b8) >> 0x20) - (float)((ulong)uVar15 >> 0x20);
    auVar34._8_8_ = 0;
    *(undefined8 *)(param_1 + 0xf5b8) = uVar15;
    auVar36 = divps(auVar34,auVar39);
    *(long *)(param_1 + 0xf0) = auVar36._0_8_;
  }
  fVar37 = (float)(int)((double)((float)(int)uVar6 / (float)*(int *)(puVar22 + -0x100c)) *
                        (double)((float)(int)uVar6 / (float)*(int *)(puVar22 + -0x100c)) * __LC83);
  if (puVar22[-0x103c] == '\0') {
    fVar1 = *(float *)(param_1 + 0x104);
    if (fVar1 == 0.0) {
      *(float *)(param_1 + 0x104) = fVar37;
      fVar37 = *(float *)(param_2 + 0x8b0) / __LC84;
    }
    else {
      if ((int)(fVar37 - fVar1) < 1) {
        if ((int)(fVar37 - fVar1) != 0) {
          *(float *)(param_1 + 0x104) = fVar1 - fVar31;
        }
      }
      else {
        *(float *)(param_1 + 0x104) = fVar1 + fVar31;
      }
      fVar37 = *(float *)(param_2 + 0x8b0) / __LC84;
    }
    if ((fVar37 <= fVar31) && (fVar31 = fVar37, fVar37 < 0.0)) {
      fVar31 = 0.0;
    }
    *(float *)(param_1 + 0x108) = fVar31;
    iVar25 = *(int *)(param_1 + 0xc4) + 1;
  }
  else {
    *(float *)(param_1 + 0x104) = fVar37;
    fVar37 = *(float *)(param_2 + 0x8b0) / __LC84;
    if (fVar37 <= fVar31) {
      if (0.0 <= fVar37) {
        *(float *)(param_1 + 0x108) = fVar37;
      }
      else {
        *(undefined4 *)(param_1 + 0x108) = 0;
      }
    }
    else {
      *(float *)(param_1 + 0x108) = fVar31;
    }
    iVar25 = 0;
  }
  fVar37 = _LC85;
  iVar19 = *(int *)(puVar22 + -0x102c);
  *(int *)(param_1 + 0xc4) = iVar25;
  *(undefined4 *)(param_1 + 0xc0) = 4;
  iVar25 = uVar12 + 0xe;
  if (-1 < (int)(uVar12 + 7)) {
    iVar25 = uVar12 + 7;
  }
  *(int *)(puVar22 + -0x102c) = iVar25 >> 3;
  iVar25 = uVar11 + 0xe;
  if (-1 < (int)(uVar11 + 7)) {
    iVar25 = uVar11 + 7;
  }
  cVar5 = puVar22[-0x103c];
  *(uint *)(puVar22 + -0x101c) = uVar6 + 7 >> 3;
  *(uint *)(puVar22 + -0x1018) = uVar29 + 7 >> 3;
  iVar9 = *(int *)(puVar22 + -0x1020);
  *(int *)(puVar22 + -0x1020) = iVar25 >> 3;
  *(int *)(param_1 + 0xb8) = (int)(long)((float)iVar19 * fVar37);
  *(int *)(param_1 + 0xbc) = (int)(long)((float)iVar9 * fVar37);
  uVar15 = *(undefined8 *)(param_2 + 0xa20);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0xa18);
  *(undefined8 *)(param_1 + 0x120) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0xa30);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0xa28);
  *(undefined8 *)(param_1 + 0x130) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0xa40);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0xa38);
  *(undefined8 *)(param_1 + 0x140) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0xa50);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0xa48);
  *(undefined8 *)(param_1 + 0x150) = uVar15;
  if (cVar5 != '\0') {
    puVar23 = puVar22 + 0x2858;
    *(undefined8 *)(puVar22 + -0x1050) = 0x1019ed;
    memset(puVar23,0,0x3798);
    uVar15 = *(undefined8 *)(puVar22 + -0x1048);
    *(undefined4 *)(puVar22 + 0x2870) =
         *(undefined4 *)(param_1 + *(long *)(puVar22 + -0x1000) * 4 + 0xf3e0);
    pcVar14 = *(code **)(param_1 + 0x68);
    *(undefined8 *)(puVar22 + -0x1050) = 0x101a0f;
    (*pcVar14)(uVar15,puVar23);
    *(undefined1 (*) [16])(puVar22 + 0x2860) = (undefined1  [16])0x0;
    *(undefined4 *)(puVar22 + 0x2870) =
         *(undefined4 *)(param_1 + *(long *)(puVar22 + -0xff8) * 4 + 0xf3e0);
    pcVar14 = *(code **)(param_1 + 0x68);
    *(undefined8 *)(puVar22 + -0x1050) = 0x101a39;
    (*pcVar14)(uVar15,puVar23);
    *(undefined4 *)(puVar22 + 0x2870) = *(undefined4 *)(param_1 + 0xf454);
    pcVar14 = *(code **)(param_1 + 0x68);
    *(undefined8 *)(puVar22 + -0x1050) = 0x101a51;
    (*pcVar14)(uVar15,puVar23);
    *(undefined8 *)(puVar22 + 0x2868) = 0;
    *(undefined8 *)(puVar22 + 0x2860) = 0x4cbebc20bf800000;
    *(undefined4 *)(puVar22 + 0x2870) = *(undefined4 *)(param_1 + 0xf48c);
    pcVar14 = *(code **)(param_1 + 0x68);
    *(undefined8 *)(puVar22 + -0x1050) = 0x101a85;
    (*pcVar14)(uVar15,puVar23);
  }
  uVar15 = *(undefined8 *)(param_2 + 0x8a0);
  uVar12 = *(uint *)(param_2 + 0x8a4);
  *(undefined8 *)(puVar22 + -0x1028) = uVar15;
  iVar25 = ((int)uVar15 - 1U >> 6) + 1;
  iVar19 = ((int)((ulong)uVar15 >> 0x20) - 1U >> 6) + 1;
  *(int *)(puVar22 + -0x103c) = iVar25;
  *(int *)(puVar22 + -0x1030) = iVar19;
  uVar6 = *(uint *)(param_2 + 0x8a0);
  if (*(uint *)(param_2 + 0x8a0) < uVar12) {
    uVar6 = uVar12;
  }
  *(undefined8 *)(puVar22 + -0x1050) = 0x101ae4;
  dVar32 = log2((double)uVar6);
  if ((double)((ulong)dVar32 & _LC94) < _LC86) {
    dVar32 = (double)((ulong)((double)(long)dVar32 -
                             (double)(-(ulong)(dVar32 < (double)(long)dVar32) & _LC88)) |
                     ~_LC94 & (ulong)dVar32);
  }
  uVar13 = 0xc;
  if ((float)dVar32 < _LC89) {
    uVar13 = (undefined4)(long)dVar32;
  }
  fVar37 = *(float *)(param_2 + 0x8ac);
  *(undefined8 *)(puVar22 + -0xf48) = *(undefined8 *)(puVar22 + -0x1028);
  *(undefined4 *)(puVar22 + -0xf58) = uVar13;
  *(int *)(puVar22 + -0xf54) = iVar25 * iVar19;
  *(undefined8 *)(puVar22 + -0xf50) = 0;
  *(undefined8 *)(puVar22 + -0x1050) = 0x101ba6;
  dVar32 = exp2((double)(float)((uint)(_LC90 * fVar37 + __LC91) ^ _LC81));
  fVar37 = (float)dVar32;
  uVar15 = *(undefined8 *)(param_2 + 0xa08);
  uVar10 = *(undefined8 *)(param_2 + 0xa10);
  *(float *)(puVar22 + -0xf68) = fVar37;
  *(undefined8 *)(puVar22 + -0xfd8) = uVar15;
  *(undefined8 *)(puVar22 + -0xfd0) = uVar10;
  *(undefined8 *)(puVar22 + -0xf60) = 0;
  *(uint *)(puVar22 + -0xf64) =
       ((((uint)fVar37 & 0x7fffff) >> (f32tof16(float)::shift[(uint)fVar37 >> 0x17] & 0x1f)) +
       (uint)*(ushort *)(f32tof16(float)::base + (ulong)((uint)fVar37 >> 0x17) * 2)) * 0x10001;
  *(undefined8 *)(puVar22 + -0x1050) = 0x101c27;
  __memcpy_chk(&DAT_00102f04,param_1 + 0x98,(ulong)globalFsr2ConstantBuffers << 2,0x40c);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101c4a;
  __memcpy_chk(&DAT_00103008,puVar22 + -0xf58,(ulong)DAT_00103004 << 2,0x308);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101c6d;
  __memcpy_chk(&DAT_0010310c,puVar22 + -0xf68,(ulong)DAT_00103108 << 2,0x204);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101c8d;
  __memcpy_chk(&DAT_00103210,puVar22 + -0xfd8,(ulong)DAT_0010320c << 2,0x100);
  if (param_2[0x8cc] != (FfxFsr2DispatchDescription)0x0) {
    if (param_1[0xf5b1] != (FfxFsr2Context_Private)0x0) {
      *(undefined8 *)(puVar22 + -0x1050) = 0x102728;
      createPipelineStates(param_1);
      param_1[0xf5b1] = (FfxFsr2Context_Private)0x0;
    }
    __s = (undefined8 *)(puVar22 + -0xf38);
    *(ulong *)(puVar22 + -0x1028) =
         CONCAT44((uint)((int)((ulong)*(undefined8 *)(param_2 + 0x8a0) >> 0x20) + _LC92._4_4_) >> 3,
                  (uint)((int)*(undefined8 *)(param_2 + 0x8a0) + (int)_LC92) >> 3);
    *(undefined8 *)(puVar22 + -0x1050) = 0x1023b4;
    memset(__s,0,0x3790);
    uVar15 = *(undefined8 *)(puVar22 + -0x1048);
    pcVar14 = *(code **)(param_1 + 0x38);
    *(undefined8 *)(puVar22 + -0x1050) = 0x1023cd;
    (*pcVar14)(uVar15,param_2 + 0x8d0,param_1 + 0xf3e4);
    pcVar14 = *(code **)(param_1 + 0x38);
    *(undefined8 *)(puVar22 + -0x1050) = 0x1023de;
    (*pcVar14)(uVar15,*(undefined8 *)(puVar22 + -0xfe8),*(undefined8 *)(puVar22 + -0xff0));
    *(undefined4 *)(puVar22 + 0x1c04) = *(undefined4 *)(param_1 + 0xf578);
    *(undefined4 *)(puVar22 + 0x1c08) = *(undefined4 *)(param_1 + 0xf57c);
    *(undefined4 *)(puVar22 + 0x1c0c) = *(undefined4 *)(param_1 + 0xf580);
    *(undefined4 *)(puVar22 + 0x1c10) = *(undefined4 *)(param_1 + 0xf584);
    *(undefined8 *)(puVar22 + -0x1050) = 0x102436;
    __wcscpy_chk(puVar22 + 0x1c44,param_1 + 0xd914,0x200);
    *(undefined8 *)(puVar22 + -0x1050) = 0x10244f;
    __wcscpy_chk(puVar22 + 0x1d44,param_1 + 0xda1c,0x1c0);
    *(undefined8 *)(puVar22 + -0x1050) = 0x102468;
    __wcscpy_chk(puVar22 + 0x1e44,param_1 + 0xdb24,0x180);
    *(undefined8 *)(puVar22 + -0x1050) = 0x102481;
    __wcscpy_chk(puVar22 + 0x1f44,param_1 + 0xdc2c,0x140);
    iVar25 = *(int *)(param_1 + 0xd904);
    *(undefined4 *)(puVar22 + 0xbc0) = 1;
    *(undefined8 *)(puVar22 + 3000) = *(undefined8 *)(puVar22 + -0x1028);
    pFVar20 = param_1 + 0xd8f0;
    puVar21 = __s;
    for (lVar16 = 0x35e; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar21 = *(undefined8 *)pFVar20;
      pFVar20 = pFVar20 + (ulong)bVar28 * -0x10 + 8;
      puVar21 = puVar21 + (ulong)bVar28 * -2 + 1;
    }
    if (iVar25 != 0) {
      *(FfxFsr2DispatchDescription **)(puVar22 + -0x1028) = param_2;
      lVar16 = 0;
      uVar27 = 0x1000;
      pFVar20 = param_1 + 0xe154;
      do {
        lVar17 = 0x1c04 - uVar27;
        uVar18 = uVar27 >> 2;
        uVar27 = uVar27 - 0x100;
        *(undefined4 *)(puVar22 + lVar16 * 4 + 0xbc4) =
             *(undefined4 *)(param_1 + (ulong)*(uint *)(pFVar20 + -4) * 4 + 0xf3e0);
        lVar16 = lVar16 + 1;
        *(undefined8 *)(puVar22 + -0x1050) = 0x102512;
        __wcscpy_chk(puVar22 + lVar17,pFVar20,uVar18);
        pFVar20 = pFVar20 + 0x108;
      } while ((uint)lVar16 < *(uint *)(param_1 + 0xd904));
      param_2 = *(FfxFsr2DispatchDescription **)(puVar22 + -0x1028);
    }
    if (*(int *)(param_1 + 0xd908) != 0) {
      lVar16 = 0;
      *(FfxFsr2DispatchDescription **)(puVar22 + -0x1028) = param_2;
      puVar21 = __s;
      puVar23 = puVar22 + 0x264c;
      pFVar20 = param_1 + 0xf1d4;
      do {
        *(undefined8 *)(puVar22 + -0x1050) = 0x10257d;
        __wcscpy_chk(puVar23,pFVar20,lVar16 * -0x100 + 0x200U >> 2);
        uVar12 = *(uint *)(pFVar20 + -4);
        puVar26 = (undefined8 *)((long)puVar21 + 0x3384U & 0xfffffffffffffff8);
        lVar17 = (long)puVar21 + (0x337c - (long)puVar26);
        *(undefined8 *)((long)puVar21 + 0x337c) =
             *(undefined8 *)(&globalFsr2ConstantBuffers + (ulong)uVar12 * 0x41);
        puVar21[0x68f] = *(undefined8 *)(&DAT_00102ffc + (ulong)uVar12 * 0x104);
        puVar24 = (undefined8 *)((long)(&globalFsr2ConstantBuffers + (ulong)uVar12 * 0x41) - lVar17)
        ;
        for (uVar27 = (ulong)((int)lVar17 + 0x104U >> 3); uVar27 != 0; uVar27 = uVar27 - 1) {
          *puVar26 = *puVar24;
          puVar24 = puVar24 + (ulong)bVar28 * -2 + 1;
          puVar26 = puVar26 + (ulong)bVar28 * -2 + 1;
        }
        *(undefined4 *)(puVar22 + lVar16 * 4 + 0x284c) = *(undefined4 *)(pFVar20 + -8);
        lVar16 = lVar16 + 1;
        puVar21 = (undefined8 *)((long)puVar21 + 0x104);
        puVar23 = puVar23 + 0x100;
        pFVar20 = pFVar20 + 0x108;
      } while ((uint)lVar16 < *(uint *)(param_1 + 0xd908));
      param_2 = *(FfxFsr2DispatchDescription **)(puVar22 + -0x1028);
    }
    *(undefined8 *)(puVar22 + -0x1050) = 0x10261a;
    memset(puVar22 + 0x2858,0,0x3798);
    *(undefined4 *)(puVar22 + 0x2858) = 2;
    *(undefined8 *)(puVar22 + -0x1050) = 0x10263a;
    memcpy(puVar22 + 0x2860,__s,0x3790);
    pcVar14 = *(code **)(param_1 + 0x68);
    *(undefined8 *)(puVar22 + -0x1050) = 0x102645;
    (*pcVar14)(*(undefined8 *)(puVar22 + -0x1048),puVar22 + 0x2858);
    *(undefined4 *)(param_1 + 0xf3f8) = *(undefined4 *)(param_1 + 0xf490);
    *(undefined4 *)(param_1 + 0xf3fc) = *(undefined4 *)(param_1 + 0xf494);
  }
  *(undefined8 *)(puVar22 + -0x1050) = 0x101cb1;
  scheduleDispatch(param_1,(FfxFsr2DispatchDescription *)(param_1 + 0xa310),
                   (FfxPipelineState *)(ulong)*(uint *)(puVar22 + -0x103c),
                   *(uint *)(puVar22 + -0x1030),in_R8D);
  uVar12 = *(uint *)(puVar22 + -0x1020);
  uVar6 = *(uint *)(puVar22 + -0x102c);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101cd0;
  scheduleDispatch(param_1,(FfxFsr2DispatchDescription *)(param_1 + 0x1c60),
                   (FfxPipelineState *)(ulong)uVar6,uVar12,in_R8D);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101ce5;
  scheduleDispatch(param_1,(FfxFsr2DispatchDescription *)(param_1 + 0x170),
                   (FfxPipelineState *)(ulong)uVar6,uVar12,in_R8D);
  FVar4 = param_2[0x8a8];
  *(undefined8 *)(puVar22 + -0x1050) = 0x101d01;
  scheduleDispatch(param_1,(FfxFsr2DispatchDescription *)(param_1 + 0x3750),
                   (FfxPipelineState *)(ulong)uVar6,uVar12,in_R8D);
  if (FVar4 == (FfxFsr2DispatchDescription)0x0) {
    *(undefined8 *)(puVar22 + -0x1050) = 0x102367;
    scheduleDispatch(param_1,(FfxFsr2DispatchDescription *)(param_1 + 0x5240),
                     (FfxPipelineState *)(ulong)*(uint *)(puVar22 + -0x101c),
                     *(uint *)(puVar22 + -0x1018),in_R8D);
  }
  else {
    *(undefined8 *)(puVar22 + -0x1050) = 0x101d20;
    scheduleDispatch(param_1,(FfxFsr2DispatchDescription *)(param_1 + 0x6d30),
                     (FfxPipelineState *)(ulong)*(uint *)(puVar22 + -0x101c),
                     *(uint *)(puVar22 + -0x1018),in_R8D);
    iVar25 = *(int *)(param_1 + 0x10);
    iVar19 = *(int *)(param_1 + 0xc);
    *(undefined8 *)(puVar22 + -0x1050) = 0x101d43;
    scheduleDispatch(param_1,(FfxFsr2DispatchDescription *)(param_1 + 0x8820),
                     (FfxPipelineState *)(ulong)(iVar19 + 0xfU >> 4),iVar25 + 0xfU >> 4,in_R8D);
  }
  uVar15 = *(undefined8 *)(puVar22 + -0x1048);
  uVar10 = *(undefined8 *)(puVar22 + -0x1038);
  *(uint *)(param_1 + 0xf5b4) = *(int *)(param_1 + 0xf5b4) + 1U & 0xf;
  pcVar14 = *(code **)(param_1 + 0x70);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101d67;
  (*pcVar14)(uVar15,uVar10);
  pcVar14 = *(code **)(param_1 + 0x40);
  *(undefined8 *)(puVar22 + -0x1050) = 0x101d6e;
  (*pcVar14)(uVar15);
  uVar15 = 0;
LAB_00101d70:
  if (*(long *)(puVar22 + 0x5ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -0x1050) = &UNK_0010278d;
  __stack_chk_fail();
}



undefined8 ffxFsr2ContextCreate(void *param_1,FfxFsr2ContextDescription *param_2)

{
  FfxFsr2Context_Private *pFVar1;
  undefined8 uVar2;
  
  pFVar1 = (FfxFsr2Context_Private *)memset(param_1,0,0x10260);
  if (param_2 == (FfxFsr2ContextDescription *)0x0) {
    return 0x80000000;
  }
  if ((((*(long *)(param_2 + 0x20) != 0) && (*(long *)(param_2 + 0x18) != 0)) &&
      (*(long *)(param_2 + 0x28) != 0)) &&
     ((*(long *)(param_2 + 0x78) == 0 || (*(long *)(param_2 + 0x80) != 0)))) {
    uVar2 = fsr2Create(pFVar1,param_2);
    return uVar2;
  }
  return 0x80000008;
}



undefined8 ffxFsr2ContextDestroy(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    puVar3 = (undefined4 *)(param_1 + 0xf3e0);
    (**(code **)(param_1 + 0x60))(lVar1,param_1 + 0x170);
    (**(code **)(param_1 + 0x60))(lVar1,param_1 + 0x1c60);
    (**(code **)(param_1 + 0x60))(lVar1,param_1 + 0x3750);
    (**(code **)(param_1 + 0x60))(lVar1,param_1 + 0x5240);
    (**(code **)(param_1 + 0x60))(lVar1,param_1 + 0x6d30);
    (**(code **)(param_1 + 0x60))(lVar1,param_1 + 0x8820);
    (**(code **)(param_1 + 0x60))(lVar1,param_1 + 0xa310);
    (**(code **)(param_1 + 0x60))(lVar1,param_1 + 0xbe00);
    (**(code **)(param_1 + 0x60))(lVar1,param_1 + 0xd8f0);
    *(undefined8 *)(param_1 + 0xf3f4) = 0;
    *(undefined4 *)(param_1 + 0xf3fc) = 0;
    *(undefined8 *)(param_1 + 0xf40c) = 0;
    *(undefined8 *)(param_1 + 0xf42c) = 0;
    *(undefined1 (*) [16])(param_1 + 0xf3e4) = (undefined1  [16])0x0;
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      (**(code **)(param_1 + 0x50))(lVar1,uVar2);
    } while ((undefined4 *)(param_1 + 0xf4c8) != puVar3);
    if (*(long *)(param_1 + 0x158) != 0) {
      (**(code **)(param_1 + 0x28))(lVar1);
      *(undefined8 *)(param_1 + 0x158) = 0;
    }
    return 0;
  }
  return 0x80000000;
}



undefined8
ffxFsr2ContextDispatch(FfxFsr2Context_Private *param_1,FfxFsr2DispatchDescription *param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == (FfxFsr2DispatchDescription *)0x0) || (param_1 == (FfxFsr2Context_Private *)0x0))
  {
    return 0x80000000;
  }
  if ((*(uint *)(param_2 + 0x8a0) <= *(uint *)(param_1 + 4)) &&
     (*(uint *)(param_2 + 0x8a4) <= *(uint *)(param_1 + 8))) {
    if (*(long *)(param_1 + 0x158) != 0) {
      uVar1 = fsr2Dispatch(param_1,param_2);
      return uVar1;
    }
    return 0x8000000c;
  }
  return 0x8000000b;
}



void ffxFsr2GetUpscaleRatioFromQualityMode(void)

{
  return;
}



undefined8
ffxFsr2GetRenderResolutionFromQualityMode
          (undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4,int param_5)

{
  float fVar1;
  
  if ((param_2 != (undefined4 *)0x0) && (param_1 != (undefined4 *)0x0)) {
    if (param_5 - 1U < 4) {
      fVar1 = *(float *)(CSWTCH_91 + (ulong)(param_5 - 1U) * 4);
      *param_1 = (int)(long)((float)param_3 / fVar1);
      *param_2 = (int)(long)((float)param_4 / fVar1);
      return 0;
    }
    return 0x80000009;
  }
  return 0x80000000;
}



/* ffxFsr2ContextEnqueueRefreshPipelineRequest(FfxFsr2Context*) */

undefined8 ffxFsr2ContextEnqueueRefreshPipelineRequest(FfxFsr2Context *param_1)

{
  if (param_1 != (FfxFsr2Context *)0x0) {
    param_1[0xf5b1] = (FfxFsr2Context)0x1;
    return 0;
  }
  return 0x80000000;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ffxFsr2GetJitterPhaseCount(int param_1,int param_2)

{
  return (int)((double)((float)param_2 / (float)param_1) * (double)((float)param_2 / (float)param_1)
              * __LC83);
}



undefined8 ffxFsr2GetJitterOffset(float *param_1,float *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = _LC95;
  if ((param_1 == (float *)0x0) || (param_2 == (float *)0x0)) {
    return 0x80000000;
  }
  if (param_4 < 1) {
    return 0x8000000a;
  }
  uVar2 = param_3 % param_4 + 1;
  if (0 < (int)uVar2) {
    fVar6 = 0.0;
    fVar5 = _LC53;
    uVar1 = uVar2;
    do {
      fVar5 = fVar5 * _LC8;
      fVar6 = fVar6 + (float)(uVar1 & 1) * fVar5;
      fVar3 = (float)(int)uVar1 * _LC8;
      if ((float)((uint)fVar3 & _LC3) < _LC96) {
        fVar3 = (float)((uint)((float)(int)fVar3 -
                              (float)(-(uint)(fVar3 < (float)(int)fVar3) & (uint)_LC53)) |
                       ~_LC3 & (uint)fVar3);
      }
      uVar1 = (uint)(long)fVar3;
    } while (0 < (int)uVar1);
    fVar3 = 0.0;
    fVar5 = _LC53;
    do {
      fVar5 = fVar5 / _LC97;
      fVar3 = fVar3 + (float)(uVar2 % 3) * fVar5;
      fVar4 = (float)(int)uVar2 / _LC97;
      if ((float)((uint)fVar4 & _LC3) < _LC96) {
        fVar4 = (float)((uint)((float)(int)fVar4 -
                              (float)(-(uint)(fVar4 < (float)(int)fVar4) & (uint)_LC53)) |
                       ~_LC3 & (uint)fVar4);
      }
      uVar2 = (uint)(long)fVar4;
    } while (0 < (int)uVar2);
    fVar3 = fVar3 - _LC8;
    *param_1 = fVar6 - _LC8;
    *param_2 = fVar3;
    return 0;
  }
  *param_1 = _LC95;
  *param_2 = fVar5;
  return 0;
}



bool ffxFsr2ResourceIsNull(void)

{
  long in_stack_00000008;
  
  return in_stack_00000008 == 0;
}



undefined8 ffxFsr2ContextGenerateReactiveMask(FfxFsr2Context_Private *param_1,long *param_2)

{
  undefined8 *__s;
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  FfxFsr2Context_Private *pFVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  byte bVar12;
  undefined1 local_6030 [24576];
  
  bVar12 = 0;
  puVar3 = &stack0xffffffffffffffd0;
  do {
    puVar7 = puVar3;
    *(undefined8 *)(puVar7 + -0x1000) = *(undefined8 *)(puVar7 + -0x1000);
    puVar3 = puVar7 + -0x1000;
  } while (puVar7 + -0x1000 != local_6030);
  *(undefined8 *)(puVar7 + 0x4ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (((param_2 == (long *)0x0) || (param_1 == (FfxFsr2Context_Private *)0x0)) ||
     (lVar5 = *param_2, *(long *)(puVar7 + -0x1f50) = lVar5, lVar5 == 0)) {
    uVar4 = 0x80000000;
  }
  else if (*(long *)(param_1 + 0x158) == 0) {
    uVar4 = 0x8000000c;
  }
  else {
    if (param_1[0xf5b1] != (FfxFsr2Context_Private)0x0) {
      *(undefined8 *)(puVar7 + -0x1f60) = 0x102ec5;
      createPipelineStates(param_1);
      lVar5 = *param_2;
      param_1[0xf5b1] = (FfxFsr2Context_Private)0x0;
      *(long *)(puVar7 + -0x1f50) = lVar5;
    }
    __s = (undefined8 *)(puVar7 + -0x1f38);
    lVar5 = param_2[0x76];
    *(undefined4 *)(puVar7 + -0x1f3c) = *(undefined4 *)(param_1 + 0xf578);
    *(ulong *)(puVar7 + -0x1f58) =
         CONCAT44((uint)((int)((ulong)lVar5 >> 0x20) + _LC92._4_4_) >> 3,
                  (uint)((int)lVar5 + (int)_LC92) >> 3);
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102cc0;
    memset(__s,0,0x3790);
    pFVar8 = param_1 + 0x18;
    *(FfxFsr2Context_Private **)(puVar7 + -0x1f48) = pFVar8;
    pcVar2 = *(code **)(param_1 + 0x38);
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102cde;
    (*pcVar2)(pFVar8,param_2 + 1,param_1 + 0xf3e4);
    pcVar2 = *(code **)(param_1 + 0x38);
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102cf3;
    (*pcVar2)(pFVar8,param_2 + 0x28,param_1 + 0xf3e8);
    pcVar2 = *(code **)(param_1 + 0x38);
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102d08;
    (*pcVar2)(pFVar8,param_2 + 0x4f,param_1 + 0xf578);
    *(undefined4 *)(puVar7 + 0xc04) = *(undefined4 *)(param_1 + 0xf578);
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102d2b;
    __wcscpy_chk(puVar7 + -0x3fc,param_1 + 0xc664,0x400);
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102d44;
    __wcscpy_chk(puVar7 + -0x2fc,param_1 + 0xc76c,0x3c0);
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102d5d;
    __wcscpy_chk(puVar7 + 0xc44,param_1 + 0xbe24,0x200);
    pFVar8 = param_1 + 0xbe00;
    puVar9 = __s;
    for (lVar5 = 0x35e; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar9 = *(undefined8 *)pFVar8;
      pFVar8 = pFVar8 + (ulong)bVar12 * -0x10 + 8;
      puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
    }
    iVar1 = *(int *)(param_1 + 0xbe14);
    *(undefined4 *)(puVar7 + -0x440) = 1;
    *(undefined8 *)(puVar7 + -0x448) = *(undefined8 *)(puVar7 + -0x1f58);
    if (iVar1 != 0) {
      lVar5 = 0;
      uVar11 = 0x1000;
      *(undefined1 **)(puVar7 + -0x1f58) = puVar7 + 0xc04;
      pFVar8 = param_1 + 0xc664;
      do {
        uVar6 = uVar11 >> 2;
        lVar10 = *(long *)(puVar7 + -0x1f58) - uVar11;
        uVar11 = uVar11 - 0x100;
        *(undefined4 *)(puVar7 + lVar5 * 4 + -0x43c) =
             *(undefined4 *)(param_1 + (ulong)*(uint *)(pFVar8 + -4) * 4 + 0xf3e0);
        lVar5 = lVar5 + 1;
        *(undefined8 *)(puVar7 + -0x1f60) = 0x102ded;
        __wcscpy_chk(lVar10,pFVar8,uVar6);
        pFVar8 = pFVar8 + 0x108;
      } while ((uint)lVar5 < *(uint *)(param_1 + 0xbe14));
    }
    lVar5 = param_2[0x77];
    lVar10 = param_2[0x78];
    *(undefined4 *)(puVar7 + 0x1444) = 0x10;
    *(long *)(puVar7 + 0x1448) = lVar5;
    *(long *)(puVar7 + 0x1450) = lVar10;
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102e40;
    __wcscpy_chk(puVar7 + 0x164c,param_1 + 0xd6e4,0x80);
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102e4f;
    memset(puVar7 + 0x1858,0,0x3798);
    *(undefined4 *)(puVar7 + 0x1858) = 2;
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102e6f;
    memcpy(puVar7 + 0x1860,__s,0x3790);
    uVar4 = *(undefined8 *)(puVar7 + -0x1f48);
    pcVar2 = *(code **)(param_1 + 0x68);
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102e7e;
    (*pcVar2)(uVar4,puVar7 + 0x1858);
    pcVar2 = *(code **)(param_1 + 0x70);
    *(undefined8 *)(puVar7 + -0x1f60) = 0x102e8a;
    (*pcVar2)(uVar4,*(undefined8 *)(puVar7 + -0x1f50));
    *(undefined4 *)(param_1 + 0xf578) = *(undefined4 *)(puVar7 + -0x1f3c);
    uVar4 = 0;
  }
  if (*(long *)(puVar7 + 0x4ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar7 + -0x1f60) = 0x102eee;
  __stack_chk_fail();
}


