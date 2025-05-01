
/* ~MyCollector() */

void __thiscall
JPH::TransformedShape::
CollectTransformedShapes(JPH::AABox_const&,JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>&,JPH::ShapeFilter_const&)
::~MyCollector(CollectTransformedShapes_JPH__AABox_const__JPH__CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>__JPH__ShapeFilter_const__
               *this)

{
  return;
}



/* ~MyCollector() */

void __thiscall
JPH::TransformedShape::
CollectTransformedShapes(JPH::AABox_const&,JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>&,JPH::ShapeFilter_const&)
::~MyCollector(CollectTransformedShapes_JPH__AABox_const__JPH__CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>__JPH__ShapeFilter_const__
               *this)

{
  operator_delete(this,0x30);
  return;
}



/* JPH::TransformedShape::CollectTransformedShapes(JPH::AABox const&,
   JPH::CollisionCollector<JPH::TransformedShape, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const::MyCollector::AddHit(JPH::TransformedShape const&) */

void JPH::TransformedShape::
     CollectTransformedShapes(JPH::AABox_const&,JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>&,JPH::ShapeFilter_const&)
     ::TransformedShape_const__(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  long *local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  undefined8 local_250;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  long *local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long *local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  long *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  long *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  long local_40;
  
  uVar9 = *param_2;
  uVar10 = param_2[1];
  local_278 = param_2[2];
  uStack_270 = param_2[3];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_268 = (long *)param_2[4];
  if (local_268 != (long *)0x0) {
    LOCK();
    *(int *)(local_268 + 1) = (int)local_268[1] + 1;
    UNLOCK();
  }
  local_260 = param_2[5];
  plVar1 = *(long **)(param_1 + 0x18);
  local_288 = (float)uVar9;
  fStack_284 = (float)((ulong)uVar9 >> 0x20);
  fStack_280 = (float)uVar10;
  fStack_27c = (float)((ulong)uVar10 >> 0x20);
  local_288 = local_288 + *(float *)(param_1 + 0x20);
  fStack_284 = fStack_284 + *(float *)(param_1 + 0x24);
  fStack_280 = fStack_280 + *(float *)(param_1 + 0x28);
  fStack_27c = fStack_27c + *(float *)(param_1 + 0x2c);
  local_258 = *(undefined4 *)(param_2 + 6);
  local_254 = *(undefined4 *)((long)param_2 + 0x34);
  local_250 = param_2[7];
  if (*(code **)(*plVar1 + 0x28) == TransformedShape_const__) {
    if (local_268 != (long *)0x0) {
      LOCK();
      *(int *)(local_268 + 1) = (int)local_268[1] + 1;
      UNLOCK();
    }
    plVar2 = (long *)plVar1[3];
    fVar11 = local_288 + *(float *)(plVar1 + 4);
    fVar12 = fStack_284 + *(float *)((long)plVar1 + 0x24);
    fVar13 = fStack_280 + *(float *)(plVar1 + 5);
    fVar14 = fStack_27c + *(float *)((long)plVar1 + 0x2c);
    _local_248 = CONCAT44(fVar12,fVar11);
    _fStack_240 = CONCAT44(fVar14,fVar13);
    local_238 = local_278;
    uStack_230 = uStack_270;
    local_228 = local_268;
    local_220 = local_260;
    local_218 = local_258;
    local_214 = local_254;
    local_210 = local_250;
    if (*(code **)(*plVar2 + 0x28) == TransformedShape_const__) {
      if (local_268 != (long *)0x0) {
        LOCK();
        *(int *)(local_268 + 1) = (int)local_268[1] + 1;
        UNLOCK();
      }
      plVar3 = (long *)plVar2[3];
      fVar11 = fVar11 + *(float *)(plVar2 + 4);
      fVar12 = fVar12 + *(float *)((long)plVar2 + 0x24);
      fVar13 = fVar13 + *(float *)(plVar2 + 5);
      fVar14 = fVar14 + *(float *)((long)plVar2 + 0x2c);
      _local_208 = CONCAT44(fVar12,fVar11);
      _fStack_200 = CONCAT44(fVar14,fVar13);
      local_1f8 = local_278;
      uStack_1f0 = uStack_270;
      local_1e8 = local_268;
      local_1e0 = local_260;
      local_1d8 = local_258;
      local_1d4 = local_254;
      local_1d0 = local_250;
      if (*(code **)(*plVar3 + 0x28) == TransformedShape_const__) {
        if (local_268 != (long *)0x0) {
          LOCK();
          *(int *)(local_268 + 1) = (int)local_268[1] + 1;
          UNLOCK();
        }
        plVar4 = (long *)plVar3[3];
        fVar11 = fVar11 + *(float *)(plVar3 + 4);
        fVar12 = fVar12 + *(float *)((long)plVar3 + 0x24);
        fVar13 = fVar13 + *(float *)(plVar3 + 5);
        fVar14 = fVar14 + *(float *)((long)plVar3 + 0x2c);
        _local_1c8 = CONCAT44(fVar12,fVar11);
        _fStack_1c0 = CONCAT44(fVar14,fVar13);
        local_1b8 = local_278;
        uStack_1b0 = uStack_270;
        local_1a8 = local_268;
        local_1a0 = local_260;
        local_198 = local_258;
        local_194 = local_254;
        local_190 = local_250;
        if (*(code **)(*plVar4 + 0x28) == TransformedShape_const__) {
          if (local_268 != (long *)0x0) {
            LOCK();
            *(int *)(local_268 + 1) = (int)local_268[1] + 1;
            UNLOCK();
          }
          plVar5 = (long *)plVar4[3];
          fVar11 = fVar11 + *(float *)(plVar4 + 4);
          fVar12 = fVar12 + *(float *)((long)plVar4 + 0x24);
          fVar13 = fVar13 + *(float *)(plVar4 + 5);
          fVar14 = fVar14 + *(float *)((long)plVar4 + 0x2c);
          _local_188 = CONCAT44(fVar12,fVar11);
          _fStack_180 = CONCAT44(fVar14,fVar13);
          local_178 = local_278;
          uStack_170 = uStack_270;
          local_168 = local_268;
          local_160 = local_260;
          local_158 = local_258;
          local_154 = local_254;
          local_150 = local_250;
          if (*(code **)(*plVar5 + 0x28) == TransformedShape_const__) {
            if (local_268 != (long *)0x0) {
              LOCK();
              *(int *)(local_268 + 1) = (int)local_268[1] + 1;
              UNLOCK();
            }
            fVar11 = fVar11 + *(float *)(plVar5 + 4);
            fVar12 = fVar12 + *(float *)((long)plVar5 + 0x24);
            fVar13 = fVar13 + *(float *)(plVar5 + 5);
            fVar14 = fVar14 + *(float *)((long)plVar5 + 0x2c);
            _local_148 = CONCAT44(fVar12,fVar11);
            _fStack_140 = CONCAT44(fVar14,fVar13);
            plVar6 = (long *)plVar5[3];
            local_138 = local_278;
            uStack_130 = uStack_270;
            local_128 = local_268;
            local_120 = local_260;
            local_118 = local_258;
            local_114 = local_254;
            local_110 = local_250;
            if (*(code **)(*plVar6 + 0x28) == TransformedShape_const__) {
              if (local_268 != (long *)0x0) {
                LOCK();
                *(int *)(local_268 + 1) = (int)local_268[1] + 1;
                UNLOCK();
              }
              fVar11 = fVar11 + *(float *)(plVar6 + 4);
              fVar12 = fVar12 + *(float *)((long)plVar6 + 0x24);
              fVar13 = fVar13 + *(float *)(plVar6 + 5);
              fVar14 = fVar14 + *(float *)((long)plVar6 + 0x2c);
              _local_108 = CONCAT44(fVar12,fVar11);
              _fStack_100 = CONCAT44(fVar14,fVar13);
              plVar7 = (long *)plVar6[3];
              local_f8 = local_278;
              uStack_f0 = uStack_270;
              local_e8 = local_268;
              local_e0 = local_260;
              local_d8 = local_258;
              local_d4 = local_254;
              local_d0 = local_250;
              if (*(code **)(*plVar7 + 0x28) == TransformedShape_const__) {
                if (local_268 != (long *)0x0) {
                  LOCK();
                  *(int *)(local_268 + 1) = (int)local_268[1] + 1;
                  UNLOCK();
                }
                plVar8 = (long *)plVar7[3];
                fVar11 = fVar11 + *(float *)(plVar7 + 4);
                fVar12 = fVar12 + *(float *)((long)plVar7 + 0x24);
                fVar13 = fVar13 + *(float *)(plVar7 + 5);
                fVar14 = fVar14 + *(float *)((long)plVar7 + 0x2c);
                _local_c8 = CONCAT44(fVar12,fVar11);
                _fStack_c0 = CONCAT44(fVar14,fVar13);
                local_b8 = local_278;
                uStack_b0 = uStack_270;
                local_a8 = local_268;
                local_a0 = local_260;
                local_98 = local_258;
                local_94 = local_254;
                local_90 = local_250;
                if (*(code **)(*plVar8 + 0x28) == TransformedShape_const__) {
                  if (local_268 != (long *)0x0) {
                    LOCK();
                    *(int *)(local_268 + 1) = (int)local_268[1] + 1;
                    UNLOCK();
                  }
                  _local_88 = CONCAT44(fVar12 + *(float *)((long)plVar8 + 0x24),
                                       fVar11 + *(float *)(plVar8 + 4));
                  _fStack_80 = CONCAT44(fVar14 + *(float *)((long)plVar8 + 0x2c),
                                        fVar13 + *(float *)(plVar8 + 5));
                  local_78 = local_278;
                  uStack_70 = uStack_270;
                  local_68 = local_268;
                  local_60 = local_260;
                  local_58 = local_258;
                  local_54 = local_254;
                  local_50 = local_250;
                  (**(code **)(*(long *)plVar8[3] + 0x28))((long *)plVar8[3],&local_88);
                  *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(plVar8[3] + 8);
                  if (local_68 != (long *)0x0) {
                    LOCK();
                    plVar8 = local_68 + 1;
                    *(int *)plVar8 = (int)*plVar8 + -1;
                    UNLOCK();
                    if ((int)*plVar8 == 0) {
                      (**(code **)(*local_68 + 8))();
                    }
                  }
                }
                else {
                  (**(code **)(*plVar8 + 0x28))(plVar8,&local_c8);
                }
                *(undefined4 *)(plVar7 + 1) = *(undefined4 *)(plVar7[3] + 8);
                if (local_a8 != (long *)0x0) {
                  LOCK();
                  plVar7 = local_a8 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    (**(code **)(*local_a8 + 8))();
                  }
                }
              }
              else {
                (**(code **)(*plVar7 + 0x28))(plVar7,&local_108);
              }
              *(undefined4 *)(plVar6 + 1) = *(undefined4 *)(plVar6[3] + 8);
              if (local_e8 != (long *)0x0) {
                LOCK();
                plVar6 = local_e8 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
                  (**(code **)(*local_e8 + 8))();
                }
              }
            }
            else {
              (**(code **)(*plVar6 + 0x28))(plVar6,&local_148);
            }
            *(undefined4 *)(plVar5 + 1) = *(undefined4 *)(plVar5[3] + 8);
            if (local_128 != (long *)0x0) {
              LOCK();
              plVar5 = local_128 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)(*local_128 + 8))();
              }
            }
          }
          else {
            (**(code **)(*plVar5 + 0x28))(plVar5,&local_188);
          }
          *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(plVar4[3] + 8);
          if (local_168 != (long *)0x0) {
            LOCK();
            plVar4 = local_168 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)(*local_168 + 8))();
            }
          }
        }
        else {
          (**(code **)(*plVar4 + 0x28))(plVar4,&local_1c8);
        }
        *(undefined4 *)(plVar3 + 1) = *(undefined4 *)(plVar3[3] + 8);
        if (local_1a8 != (long *)0x0) {
          LOCK();
          plVar3 = local_1a8 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)(*local_1a8 + 8))();
          }
        }
      }
      else {
        (**(code **)(*plVar3 + 0x28))(plVar3,&local_208);
      }
      *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(plVar2[3] + 8);
      if (local_1e8 != (long *)0x0) {
        LOCK();
        plVar2 = local_1e8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*local_1e8 + 8))();
        }
      }
    }
    else {
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_248);
    }
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(plVar1[3] + 8);
    if (local_228 != (long *)0x0) {
      LOCK();
      plVar1 = local_228 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_228 + 8))();
      }
    }
  }
  else {
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_288);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(long *)(param_1 + 0x18) + 8);
  if (local_268 != (long *)0x0) {
    LOCK();
    plVar1 = local_268 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_268 + 8))();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TransformedShape::CastRay(JPH::RRayCast const&, JPH::RayCastResult&) const */

undefined8 __thiscall
JPH::TransformedShape::CastRay(TransformedShape *this,RRayCast *param_1,RayCastResult *param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
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
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  long local_20;
  
  plVar1 = *(long **)(this + 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 != (long *)0x0) {
    fVar16 = *(float *)this;
    fVar2 = *(float *)(this + 4);
    fVar3 = *(float *)(this + 8);
    fVar5 = (float)(__LC1 ^ *(uint *)(this + 0x10));
    fVar7 = (float)(_UNK_00101ec4 ^ *(uint *)(this + 0x14));
    fVar8 = (float)(_UNK_00101ec8 ^ *(uint *)(this + 0x18));
    fVar9 = (float)(_UNK_00101ecc ^ *(uint *)(this + 0x1c));
    fVar11 = fVar5 + fVar5;
    fVar21 = fVar7 + fVar7;
    fVar6 = fVar9 * (fVar8 + fVar8);
    fVar22 = fVar8 * (fVar8 + fVar8);
    fVar18 = (_LC2 - fVar5 * fVar11) - fVar7 * fVar21;
    fVar17 = fVar8 * fVar11 + fVar21 * fVar9;
    fVar23 = fVar8 * fVar21 - fVar11 * fVar9;
    fVar12 = fVar11 * fVar9 + fVar8 * fVar21;
    fVar19 = fVar7 * fVar11 - fVar6;
    fVar6 = fVar7 * fVar11 + fVar6;
    fVar10 = (_LC2 - fVar7 * fVar21) - fVar22;
    fVar7 = fVar8 * fVar11 - fVar21 * fVar9;
    fVar24 = (_LC2 - fVar22) - fVar5 * fVar11;
    auVar20._4_4_ = _LC2;
    auVar20._0_4_ = _LC2;
    auVar20._8_4_ = _LC2;
    auVar20._12_4_ = _LC2;
    auVar20 = divps(auVar20,*(undefined1 (*) [16])(this + 0x28));
    fVar5 = 0.0 - (fVar16 * fVar10 + fVar2 * fVar19 + fVar3 * fVar17);
    fVar9 = 0.0 - (fVar16 * fVar6 + fVar2 * fVar24 + fVar3 * fVar23);
    fVar21 = 0.0 - (fVar16 * fVar7 + fVar2 * fVar12 + fVar3 * fVar18);
    fVar16 = *(float *)param_1;
    fVar2 = *(float *)(param_1 + 4);
    fVar3 = *(float *)(param_1 + 8);
    local_50 = *(undefined8 *)(this + 0x38);
    fVar8 = fVar16 + *(float *)(param_1 + 0x10);
    fVar11 = fVar2 + *(float *)(param_1 + 0x14);
    fVar22 = fVar3 + *(float *)(param_1 + 0x18);
    fVar13 = fVar16 * fVar10 + fVar2 * fVar19 + fVar3 * fVar17 + fVar5;
    fVar14 = fVar16 * fVar6 + fVar2 * fVar24 + fVar3 * fVar23 + fVar9;
    fVar15 = fVar16 * fVar7 + fVar2 * fVar12 + fVar3 * fVar18 + fVar21;
    fVar16 = fVar16 * 0.0 + fVar2 * 0.0 + fVar3 * 0.0 + 1.0;
    local_48 = auVar20._0_4_ * fVar13;
    fStack_44 = auVar20._4_4_ * fVar14;
    fStack_40 = auVar20._8_4_ * fVar15;
    fStack_3c = auVar20._12_4_ * fVar16;
    local_38 = ((fVar22 * fVar17 + fVar8 * fVar10 + fVar11 * fVar19 + fVar5) - fVar13) *
               auVar20._0_4_;
    fStack_34 = ((fVar22 * fVar23 + fVar8 * fVar6 + fVar11 * fVar24 + fVar9) - fVar14) *
                auVar20._4_4_;
    fStack_30 = ((fVar22 * fVar18 + fVar8 * fVar7 + fVar11 * fVar12 + fVar21) - fVar15) *
                auVar20._8_4_;
    fStack_2c = ((fVar22 * 0.0 + fVar8 * 0.0 + fVar11 * 0.0 + 1.0) - fVar16) * auVar20._12_4_;
    uVar4 = (**(code **)(*plVar1 + 0x98))(plVar1,&local_48,&local_50,param_2);
    if ((char)uVar4 != '\0') {
      *(undefined4 *)param_2 = *(undefined4 *)(this + 0x34);
      goto LAB_00100acc;
    }
  }
  uVar4 = 0;
LAB_00100acc:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TransformedShape::CastRay(JPH::RRayCast const&, JPH::RayCastSettings const&,
   JPH::CollisionCollector<JPH::RayCastResult, JPH::CollisionCollectorTraitsCastRay>&,
   JPH::ShapeFilter const&) const */

void __thiscall
JPH::TransformedShape::CastRay
          (TransformedShape *this,RRayCast *param_1,RayCastSettings *param_2,
          CollisionCollector *param_3,ShapeFilter *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  long in_FS_OFFSET;
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
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  long local_10;
  
  plVar2 = *(long **)(this + 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar2 != (long *)0x0) {
    fVar16 = *(float *)this;
    fVar3 = *(float *)(this + 4);
    fVar4 = *(float *)(this + 8);
    fVar5 = (float)(__LC1 ^ *(uint *)(this + 0x10));
    fVar7 = (float)(_UNK_00101ec4 ^ *(uint *)(this + 0x14));
    fVar8 = (float)(_UNK_00101ec8 ^ *(uint *)(this + 0x18));
    fVar9 = (float)(_UNK_00101ecc ^ *(uint *)(this + 0x1c));
    uVar1 = *(undefined4 *)(this + 0x34);
    *(TransformedShape **)(param_3 + 0x10) = this;
    *(undefined4 *)(param_4 + 8) = uVar1;
    fVar11 = fVar5 + fVar5;
    fVar21 = fVar7 + fVar7;
    fVar6 = fVar9 * (fVar8 + fVar8);
    fVar22 = fVar8 * (fVar8 + fVar8);
    fVar18 = (_LC2 - fVar5 * fVar11) - fVar7 * fVar21;
    fVar17 = fVar8 * fVar11 + fVar21 * fVar9;
    fVar23 = fVar8 * fVar21 - fVar11 * fVar9;
    fVar12 = fVar11 * fVar9 + fVar8 * fVar21;
    fVar19 = fVar7 * fVar11 - fVar6;
    fVar6 = fVar7 * fVar11 + fVar6;
    fVar10 = (_LC2 - fVar7 * fVar21) - fVar22;
    fVar7 = fVar8 * fVar11 - fVar21 * fVar9;
    fVar24 = (_LC2 - fVar22) - fVar5 * fVar11;
    auVar20._4_4_ = _LC2;
    auVar20._0_4_ = _LC2;
    auVar20._8_4_ = _LC2;
    auVar20._12_4_ = _LC2;
    auVar20 = divps(auVar20,*(undefined1 (*) [16])(this + 0x28));
    fVar5 = 0.0 - (fVar16 * fVar10 + fVar3 * fVar19 + fVar4 * fVar17);
    fVar9 = 0.0 - (fVar16 * fVar6 + fVar3 * fVar24 + fVar4 * fVar23);
    fVar21 = 0.0 - (fVar16 * fVar7 + fVar3 * fVar12 + fVar4 * fVar18);
    fVar16 = *(float *)param_1;
    fVar3 = *(float *)(param_1 + 4);
    fVar4 = *(float *)(param_1 + 8);
    local_40 = *(undefined8 *)(this + 0x38);
    fVar8 = fVar16 + *(float *)(param_1 + 0x10);
    fVar11 = fVar3 + *(float *)(param_1 + 0x14);
    fVar22 = fVar4 + *(float *)(param_1 + 0x18);
    fVar13 = fVar16 * fVar10 + fVar3 * fVar19 + fVar4 * fVar17 + fVar5;
    fVar14 = fVar16 * fVar6 + fVar3 * fVar24 + fVar4 * fVar23 + fVar9;
    fVar15 = fVar16 * fVar7 + fVar3 * fVar12 + fVar4 * fVar18 + fVar21;
    fVar16 = fVar16 * 0.0 + fVar3 * 0.0 + fVar4 * 0.0 + 1.0;
    local_38 = auVar20._0_4_ * fVar13;
    fStack_34 = auVar20._4_4_ * fVar14;
    fStack_30 = auVar20._8_4_ * fVar15;
    fStack_2c = auVar20._12_4_ * fVar16;
    local_28 = ((fVar22 * fVar17 + fVar8 * fVar10 + fVar11 * fVar19 + fVar5) - fVar13) *
               auVar20._0_4_;
    fStack_24 = ((fVar22 * fVar23 + fVar8 * fVar6 + fVar11 * fVar24 + fVar9) - fVar14) *
                auVar20._4_4_;
    fStack_20 = ((fVar22 * fVar18 + fVar8 * fVar7 + fVar11 * fVar12 + fVar21) - fVar15) *
                auVar20._8_4_;
    fStack_1c = ((fVar22 * 0.0 + fVar8 * 0.0 + fVar11 * 0.0 + 1.0) - fVar16) * auVar20._12_4_;
    (**(code **)(*plVar2 + 0xa0))(plVar2,&local_38,param_2,&local_40,param_3,param_4);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TransformedShape::CollidePoint(JPH::Vec3, JPH::CollisionCollector<JPH::CollidePointResult,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) const */

void JPH::TransformedShape::CollidePoint
               (undefined8 param_1,float param_2,float *param_3,long param_4,long param_5)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_18;
  long local_10;
  
  plVar1 = *(long **)(param_3 + 8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 != (long *)0x0) {
    fVar2 = *param_3;
    fVar3 = param_3[1];
    fVar4 = param_3[2];
    fVar6 = param_3[0xd];
    *(float **)(param_4 + 0x10) = param_3;
    fVar5 = (float)(__LC1 ^ (uint)param_3[4]);
    fVar8 = (float)(_UNK_00101ec4 ^ (uint)param_3[5]);
    fVar9 = (float)(_UNK_00101ec8 ^ (uint)param_3[6]);
    fVar10 = (float)(_UNK_00101ecc ^ (uint)param_3[7]);
    *(float *)(param_5 + 8) = fVar6;
    fVar15 = fVar5 + fVar5;
    fVar17 = fVar8 + fVar8;
    fVar18 = fVar9 * (fVar9 + fVar9);
    fVar6 = fVar10 * (fVar9 + fVar9);
    fVar13 = (_LC2 - fVar5 * fVar15) - fVar8 * fVar17;
    fVar12 = fVar9 * fVar15 + fVar17 * fVar10;
    fVar19 = fVar9 * fVar17 - fVar15 * fVar10;
    fVar16 = fVar15 * fVar10 + fVar9 * fVar17;
    fVar14 = fVar8 * fVar15 - fVar6;
    fVar6 = fVar8 * fVar15 + fVar6;
    fVar11 = (_LC2 - fVar8 * fVar17) - fVar18;
    fVar8 = fVar9 * fVar15 - fVar17 * fVar10;
    fVar5 = (_LC2 - fVar18) - fVar5 * fVar15;
    local_38._0_4_ = (float)param_1;
    local_38._4_4_ = (float)((ulong)param_1 >> 0x20);
    local_18 = *(undefined8 *)(param_3 + 0xe);
    auVar7._0_4_ = param_2 * fVar12 + local_38._4_4_ * fVar14 + (float)local_38 * fVar11 +
                   (0.0 - (fVar2 * fVar11 + fVar3 * fVar14 + fVar4 * fVar12));
    auVar7._4_4_ = param_2 * fVar19 + local_38._4_4_ * fVar5 + (float)local_38 * fVar6 +
                   (0.0 - (fVar2 * fVar6 + fVar3 * fVar5 + fVar4 * fVar19));
    auVar7._8_4_ = param_2 * fVar13 + local_38._4_4_ * fVar16 + (float)local_38 * fVar8 +
                   (0.0 - (fVar2 * fVar8 + fVar3 * fVar16 + fVar4 * fVar13));
    auVar7._12_4_ = param_2 * 0.0 + local_38._4_4_ * 0.0 + (float)local_38 * 0.0 + 1.0;
    auVar7 = divps(auVar7,*(undefined1 (*) [16])(param_3 + 10));
    local_38 = auVar7._0_8_;
    uStack_30 = auVar7._8_8_;
    (**(code **)(*plVar1 + 0xa8))(local_38,uStack_30,plVar1,&local_18,param_4,param_5);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TransformedShape::CollideShape(JPH::Shape const*, JPH::Vec3, JPH::Mat44 const&,
   JPH::CollideShapeSettings const&, JPH::Vec3, JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) const */

void JPH::TransformedShape::CollideShape
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,float param_4,
               undefined8 *param_1,long param_6,undefined8 *param_7,undefined8 param_8,long param_9,
               long *param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_108;
  float fStack_104;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  undefined8 local_58;
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  lVar1 = param_1[4];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    local_108 = (float)param_3;
    fStack_104 = (float)((ulong)param_3 >> 0x20);
    fVar10 = 0.0 - local_108;
    fVar11 = 0.0 - fStack_104;
    fVar7 = *(float *)(param_7 + 6);
    fVar8 = *(float *)((long)param_7 + 0x34);
    fVar9 = *(float *)(param_7 + 7);
    *(undefined8 **)(param_9 + 0x10) = param_1;
    local_c8 = *param_7;
    uStack_c0 = param_7[1];
    local_b8 = param_7[2];
    uStack_b0 = param_7[3];
    local_a8 = param_7[4];
    uStack_a0 = param_7[5];
    uVar2 = param_1[2];
    *(undefined4 *)(param_10 + 1) = *(undefined4 *)((long)param_1 + 0x34);
    fVar5 = (float)uVar2;
    local_d8 = _LC5;
    local_d0 = param_1[7];
    fVar6 = (float)((ulong)uVar2 >> 0x20);
    fVar13 = fVar6 + fVar6;
    fVar12 = fVar5 + fVar5;
    local_98 = CONCAT44(fVar8 + fVar11,fVar7 + fVar10);
    fStack_4c = _LC2;
    uStack_90 = CONCAT44(_LC2,fVar9 + (0.0 - param_4));
    fVar7 = (float)param_1[3];
    fVar8 = (float)((ulong)param_1[3] >> 0x20);
    fVar14 = fVar7 * (fVar7 + fVar7);
    fVar9 = (fVar7 + fVar7) * fVar8;
    local_108 = (float)*param_1;
    fStack_104 = (float)((ulong)*param_1 >> 0x20);
    local_58 = CONCAT44(fVar11 + fStack_104,fVar10 + local_108);
    fStack_50 = (0.0 - param_4) + *(float *)(param_1 + 1);
    local_88._0_4_ = (_LC2 - fVar6 * fVar13) - fVar14;
    local_88._4_4_ = fVar6 * fVar12 + fVar9;
    local_88._8_4_ = fVar7 * fVar12 - fVar13 * fVar8;
    local_88._12_4_ = 0;
    local_78._4_4_ = (_LC2 - fVar14) - fVar5 * fVar12;
    local_78._0_4_ = fVar6 * fVar12 - fVar9;
    uStack_60 = (ulong)(uint)((_LC2 - fVar5 * fVar12) - fVar6 * fVar13);
    local_78._8_4_ = fVar12 * fVar8 + fVar7 * fVar13;
    local_78._12_4_ = 0;
    local_68 = CONCAT44(fVar7 * fVar13 - fVar12 * fVar8,fVar7 * fVar12 + fVar13 * fVar8);
    uVar2 = param_1[5];
    uVar3 = param_1[6];
    cVar4 = (**(code **)(*param_10 + 0x18))(param_10,param_6,&local_d8,lVar1);
    if (cVar4 != '\0') {
      (*(code *)(&CollisionDispatch::sCollideShape)
                [(ulong)*(byte *)(lVar1 + 0x19) + (ulong)*(byte *)(param_6 + 0x19) * 0x22])
                (param_1_00,param_2,uVar2,uVar3,param_6,lVar1,&local_c8,local_88,&local_d8,&local_d0
                 ,param_8,param_9,param_10);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TransformedShape::CastShape(JPH::RShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Vec3, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&, JPH::ShapeFilter const&) const */

void JPH::TransformedShape::CastShape
               (undefined8 param_1_00,float param_2_00,undefined8 *param_1,undefined8 *param_2,
               undefined8 param_5,long param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  long in_FS_OFFSET;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[4] != 0) {
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    local_218 = (float)param_1_00;
    fStack_214 = (float)((ulong)param_1_00 >> 0x20);
    fVar18 = 0.0 - local_218;
    fVar19 = 0.0 - fStack_214;
    *(undefined8 **)(param_6 + 0x10) = param_1;
    fVar8 = *(float *)(param_2 + 0xb);
    local_168 = (long *)param_2[4];
    uStack_160 = param_2[5];
    plVar1 = (long *)*param_2;
    local_138 = CONCAT44(*(float *)((long)param_2 + 0x54) + fVar19,*(float *)(param_2 + 10) + fVar18
                        );
    uVar4 = param_2[0xc];
    uVar5 = param_2[0xd];
    local_158 = param_2[6];
    uStack_150 = param_2[7];
    lVar2 = *plVar1;
    *(undefined4 *)(param_7 + 8) = *(undefined4 *)((long)param_1 + 0x34);
    local_148 = param_2[8];
    uStack_140 = param_2[9];
    pcVar3 = *(code **)(lVar2 + 0x30);
    uStack_130 = CONCAT44(_LC2,fVar8 + (0.0 - param_2_00));
    if (pcVar3 == Shape::GetWorldSpaceBounds) {
      (**(code **)(lVar2 + 0x20))(local_d8,plVar1);
      local_218 = (float)uVar6;
      fStack_214 = (float)((ulong)uVar6 >> 0x20);
      fStack_210 = (float)uVar7;
      fStack_20c = (float)((ulong)uVar7 >> 0x20);
      pfVar10 = (float *)local_1a8;
      auVar16._0_8_ = CONCAT44(fStack_214 * (float)local_d8._4_4_,local_218 * (float)local_d8._0_4_)
      ;
      auVar16._8_4_ = fStack_210 * fStack_d0;
      auVar16._12_4_ = fStack_20c * fStack_cc;
      auVar23._0_4_ = local_218 * (float)local_c8;
      auVar23._4_4_ = fStack_214 * local_c8._4_4_;
      auVar23._8_4_ = fStack_210 * (float)uStack_c0;
      auVar23._12_4_ = fStack_20c * uStack_c0._4_4_;
      auVar21._8_4_ = auVar16._8_4_;
      auVar21._0_8_ = auVar16._0_8_;
      auVar21._12_4_ = auVar16._12_4_;
      local_198 = maxps(auVar21,auVar23);
      local_1a8 = minps(auVar16,auVar23);
      pfVar13 = (float *)&local_168;
      local_1c8 = (float)local_138;
      fStack_1c4 = local_138._4_4_;
      fStack_1c0 = (float)uStack_130;
      fStack_1bc = uStack_130._4_4_;
      local_1b8 = (float)local_138;
      fStack_1b4 = local_138._4_4_;
      fStack_1b0 = (float)uStack_130;
      fStack_1ac = uStack_130._4_4_;
      do {
        fVar8 = *pfVar10;
        fVar9 = pfVar10[4];
        pfVar14 = pfVar13 + 4;
        pfVar10 = pfVar10 + 1;
        auVar15._0_8_ = CONCAT44(fVar8 * pfVar13[1],fVar8 * *pfVar13);
        auVar15._8_4_ = fVar8 * pfVar13[2];
        auVar15._12_4_ = fVar8 * pfVar13[3];
        auVar17._0_4_ = fVar9 * *pfVar13;
        auVar17._4_4_ = fVar9 * pfVar13[1];
        auVar17._8_4_ = fVar9 * pfVar13[2];
        auVar17._12_4_ = fVar9 * pfVar13[3];
        auVar22._8_4_ = auVar15._8_4_;
        auVar22._0_8_ = auVar15._0_8_;
        auVar22._12_4_ = auVar15._12_4_;
        auVar23 = minps(auVar22,auVar17);
        auVar16 = maxps(auVar15,auVar17);
        local_1c8 = local_1c8 + auVar23._0_4_;
        fStack_1c4 = fStack_1c4 + auVar23._4_4_;
        fStack_1c0 = fStack_1c0 + auVar23._8_4_;
        fStack_1bc = fStack_1bc + auVar23._12_4_;
        local_1b8 = local_1b8 + auVar16._0_4_;
        fStack_1b4 = fStack_1b4 + auVar16._4_4_;
        fStack_1b0 = fStack_1b0 + auVar16._8_4_;
        fStack_1ac = fStack_1ac + auVar16._12_4_;
        pfVar13 = pfVar14;
      } while ((float *)&local_138 != pfVar14);
    }
    else {
      (*pcVar3)(uVar6,uVar7,&local_1c8,plVar1,&local_168);
    }
    uStack_90 = uStack_140;
    local_98 = local_148;
    local_1a8._8_8_ = uStack_160;
    local_1a8._0_8_ = local_168;
    local_148 = local_168;
    uStack_140 = uStack_160;
    fVar8 = (float)param_1[2];
    local_88 = local_138;
    uStack_80 = uStack_130;
    local_178 = local_138;
    uStack_170 = uStack_130;
    fVar24 = fVar8 + fVar8;
    local_118 = local_138;
    uStack_110 = uStack_130;
    fVar9 = (float)((ulong)param_1[2] >> 0x20);
    fVar11 = (float)param_1[3];
    fVar25 = fVar9 + fVar9;
    local_198._8_8_ = uStack_150;
    local_198._0_8_ = local_158;
    local_138 = local_158;
    uStack_130 = uStack_150;
    local_188 = local_98;
    uStack_180 = uStack_90;
    local_128 = local_98;
    uStack_120 = uStack_90;
    fVar26 = fVar11 * (fVar11 + fVar11);
    fVar12 = (float)((ulong)param_1[3] >> 0x20);
    fVar20 = (fVar11 + fVar11) * fVar12;
    local_d8._0_4_ = (_LC2 - fVar9 * fVar25) - fVar26;
    local_218 = (float)*param_1;
    fStack_214 = (float)((ulong)*param_1 >> 0x20);
    local_a8 = CONCAT44(fVar19 + fStack_214,fVar18 + local_218);
    local_a0 = (0.0 - param_2_00) + *(float *)(param_1 + 1);
    local_d8._4_4_ = fVar9 * fVar24 + fVar20;
    fStack_d0 = fVar11 * fVar24 - fVar25 * fVar12;
    fStack_cc = 0.0;
    uStack_c0 = (ulong)(uint)(fVar24 * fVar12 + fVar11 * fVar25);
    local_c8 = CONCAT44((_LC2 - fVar26) - fVar8 * fVar24,fVar9 * fVar24 - fVar20);
    local_b8._4_4_ = fVar11 * fVar25 - fVar24 * fVar12;
    local_b8._0_4_ = fVar11 * fVar24 + fVar25 * fVar12;
    local_b8._8_4_ = (_LC2 - fVar8 * fVar24) - fVar9 * fVar25;
    local_b8._12_4_ = 0;
    local_1d8 = _LC5;
    local_1d0 = param_1[7];
    local_9c = _LC2;
    local_168 = plVar1;
    local_158 = uVar6;
    uStack_150 = uVar7;
    local_108 = uVar4;
    uStack_100 = uVar5;
    local_f8 = local_1c8;
    fStack_f4 = fStack_1c4;
    fStack_f0 = fStack_1c0;
    fStack_ec = fStack_1bc;
    local_e8 = local_1b8;
    fStack_e4 = fStack_1b4;
    fStack_e0 = fStack_1b0;
    fStack_dc = fStack_1ac;
    local_78 = uVar4;
    uStack_70 = uVar5;
    CollisionDispatch::sCastShapeVsShapeWorldSpace
              (param_1[5],param_1[6],&local_168,param_5,param_1[4],param_7,local_d8,&local_1d8,
               &local_1d0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TransformedShape::CollectTransformedShapes(JPH::AABox const&,
   JPH::CollisionCollector<JPH::TransformedShape, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void __thiscall
JPH::TransformedShape::CollectTransformedShapes
          (TransformedShape *this,AABox *param_1,CollisionCollector *param_2,ShapeFilter *param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined **local_48;
  undefined4 local_40;
  TransformedShape *local_38;
  CollisionCollector *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  plVar1 = *(long **)(this + 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 != (long *)0x0) {
    local_40 = *(undefined4 *)(param_2 + 8);
    local_68 = *(float *)param_1;
    fStack_64 = *(float *)(param_1 + 4);
    fStack_60 = *(float *)(param_1 + 8);
    fStack_5c = *(float *)(param_1 + 0xc);
    *(TransformedShape **)(param_2 + 0x10) = this;
    local_28 = *(undefined8 *)this;
    uStack_20 = *(undefined8 *)(this + 8);
    local_48 = &PTR__MyCollector_00101e80;
    local_68 = local_68 + (0.0 - *(float *)this);
    fStack_64 = fStack_64 + (0.0 - *(float *)(this + 4));
    fStack_60 = fStack_60 + (0.0 - *(float *)(this + 8));
    fStack_5c = fStack_5c + (0.0 - *(float *)(this + 0xc));
    local_58 = (0.0 - *(float *)this) + *(float *)(param_1 + 0x10);
    fStack_54 = (0.0 - *(float *)(this + 4)) + *(float *)(param_1 + 0x14);
    fStack_50 = (0.0 - *(float *)(this + 8)) + *(float *)(param_1 + 0x18);
    fStack_4c = (0.0 - *(float *)(this + 0xc)) + *(float *)(param_1 + 0x1c);
    local_38 = this;
    local_30 = param_2;
    (**(code **)(*plVar1 + 0xb8))
              (0,0,*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),
               *(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30),plVar1,&local_68,
               this + 0x38,&local_48,param_3);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TransformedShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3) const */

void JPH::TransformedShape::GetTrianglesStart
               (undefined8 param_1_00,undefined8 param_2_00,float *param_1,undefined8 param_2,
               float *param_5)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  long local_10;
  
  plVar1 = *(long **)(param_1 + 8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 != (long *)0x0) {
    local_48._0_4_ = (float)param_1_00;
    local_48._4_4_ = (float)((ulong)param_1_00 >> 0x20);
    uStack_40._0_4_ = (float)param_2_00;
    uStack_40._4_4_ = (float)((ulong)param_2_00 >> 0x20);
    local_38 = *param_5 + (0.0 - (float)local_48);
    fStack_34 = param_5[1] + (0.0 - local_48._4_4_);
    fStack_30 = param_5[2] + (0.0 - (float)uStack_40);
    fStack_2c = param_5[3] + (0.0 - uStack_40._4_4_);
    local_28 = (0.0 - (float)local_48) + param_5[4];
    fStack_24 = (0.0 - local_48._4_4_) + param_5[5];
    fStack_20 = (0.0 - (float)uStack_40) + param_5[6];
    fStack_1c = (0.0 - uStack_40._4_4_) + param_5[7];
    local_48 = CONCAT44(param_1[1] - local_48._4_4_,*param_1 - (float)local_48);
    uStack_40 = CONCAT44(param_1[3] - uStack_40._4_4_,param_1[2] - (float)uStack_40);
    (**(code **)(*plVar1 + 200))
              (local_48,uStack_40,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),
               *(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),plVar1,param_2,&local_38
              );
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TransformedShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

undefined8
JPH::TransformedShape::GetTrianglesNext
          (GetTrianglesContext *param_1,int param_2,Float3 *param_3,PhysicsMaterial **param_4)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0xd0))();
    return uVar1;
  }
  return 0;
}



/* JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>::Reset() */

void __thiscall
JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>::Reset
          (CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape> *this
          )

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  return;
}



/* JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body const&) */

void JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>::
     OnBody(Body *param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>::SetUserData(unsigned long) */

void JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>::
     SetUserData(ulong param_1)

{
  return;
}



/* JPH::Shape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

float * JPH::Shape::GetWorldSpaceBounds
                  (undefined8 param_1_00,undefined8 param_2,float *param_1,long *param_4,
                  long param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  fVar10 = (float)((ulong)param_2 >> 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_4 + 0x20))(&local_68);
  local_78 = (float)param_1_00;
  fStack_74 = (float)((ulong)param_1_00 >> 0x20);
  auVar7._0_8_ = CONCAT44(fStack_74 * fStack_64,local_78 * local_68);
  auVar7._8_4_ = (float)param_2 * fStack_60;
  auVar7._12_4_ = fVar10 * fStack_5c;
  lVar6 = 0;
  fStack_50 = (float)param_2 * fStack_50;
  fVar10 = fVar10 * fStack_4c;
  auVar12._8_4_ = auVar7._8_4_;
  auVar12._0_8_ = auVar7._0_8_;
  auVar12._12_4_ = auVar7._12_4_;
  auVar9._4_4_ = fStack_74 * fStack_54;
  auVar9._0_4_ = local_78 * local_58;
  auVar9._8_4_ = fStack_50;
  auVar9._12_4_ = fVar10;
  local_38 = maxps(auVar12,auVar9);
  auVar20._4_4_ = fStack_74 * fStack_54;
  auVar20._0_4_ = local_78 * local_58;
  auVar20._8_4_ = fStack_50;
  auVar20._12_4_ = fVar10;
  local_48 = minps(auVar7,auVar20);
  fVar10 = *(float *)(param_5 + 0x30);
  fVar16 = *(float *)(param_5 + 0x34);
  fVar17 = *(float *)(param_5 + 0x38);
  fVar18 = *(float *)(param_5 + 0x3c);
  fVar11 = fVar10;
  fVar13 = fVar16;
  fVar14 = fVar17;
  fVar15 = fVar18;
  do {
    fVar2 = *(float *)(local_48 + lVar6);
    fVar3 = *(float *)(local_38 + lVar6);
    pfVar1 = (float *)(param_5 + lVar6 * 4);
    auVar8._0_8_ = CONCAT44(fVar2 * pfVar1[1],fVar2 * *pfVar1);
    auVar8._8_4_ = fVar2 * pfVar1[2];
    auVar8._12_4_ = fVar2 * pfVar1[3];
    pfVar1 = (float *)(param_5 + lVar6 * 4);
    lVar6 = lVar6 + 4;
    auVar19._8_4_ = auVar8._8_4_;
    auVar19._0_8_ = auVar8._0_8_;
    auVar19._12_4_ = auVar8._12_4_;
    auVar4._4_4_ = fVar3 * pfVar1[1];
    auVar4._0_4_ = fVar3 * *pfVar1;
    auVar4._8_4_ = fVar3 * pfVar1[2];
    auVar4._12_4_ = fVar3 * pfVar1[3];
    auVar20 = minps(auVar19,auVar4);
    auVar5._4_4_ = fVar3 * pfVar1[1];
    auVar5._0_4_ = fVar3 * *pfVar1;
    auVar5._8_4_ = fVar3 * pfVar1[2];
    auVar5._12_4_ = fVar3 * pfVar1[3];
    auVar9 = maxps(auVar8,auVar5);
    fVar11 = fVar11 + auVar20._0_4_;
    fVar13 = fVar13 + auVar20._4_4_;
    fVar14 = fVar14 + auVar20._8_4_;
    fVar15 = fVar15 + auVar20._12_4_;
    fVar10 = fVar10 + auVar9._0_4_;
    fVar16 = fVar16 + auVar9._4_4_;
    fVar17 = fVar17 + auVar9._8_4_;
    fVar18 = fVar18 + auVar9._12_4_;
  } while (lVar6 != 0xc);
  *param_1 = fVar11;
  param_1[1] = fVar13;
  param_1[2] = fVar14;
  param_1[3] = fVar15;
  param_1[4] = fVar10;
  param_1[5] = fVar16;
  param_1[6] = fVar17;
  param_1[7] = fVar18;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::CollisionDispatch::sCastShapeVsShapeWorldSpace(JPH::ShapeCast const&, JPH::ShapeCastSettings
   const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::CollisionDispatch::sCastShapeVsShapeWorldSpace
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 *param_1,undefined8 param_2,
               long param_3,long *param_6,float *param_7,undefined8 param_8,undefined8 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long *plVar4;
  code *pcVar5;
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
  undefined8 uVar16;
  char cVar17;
  long lVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  long in_FS_OFFSET;
  float fVar22;
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  fVar6 = *param_7;
  fVar7 = param_7[1];
  fVar8 = param_7[2];
  fVar3 = param_7[6];
  fVar28 = (float)*(undefined8 *)(param_7 + 4);
  fVar29 = (float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20);
  fVar22 = (float)*(undefined8 *)(param_7 + 8);
  fVar25 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20);
  fVar9 = param_7[10];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar10 = param_7[0xc];
  fVar11 = param_7[0xd];
  fVar12 = param_7[0xe];
  lVar18 = 0;
  do {
    pfVar19 = (float *)((long)param_1 + lVar18 + 0x20);
    fVar1 = *pfVar19;
    fVar2 = pfVar19[1];
    fVar13 = pfVar19[2];
    fVar14 = pfVar19[3];
    *(float *)((long)&local_118 + lVar18) =
         fVar14 * (0.0 - (fVar10 * fVar6 + fVar11 * fVar7 + fVar12 * fVar8)) +
         fVar1 * fVar6 + fVar2 * fVar7 + fVar13 * fVar8;
    *(float *)((long)&local_118 + lVar18 + 4) =
         fVar14 * (0.0 - (fVar10 * fVar28 + fVar11 * fVar29 + fVar12 * fVar3)) +
         fVar1 * fVar28 + fVar2 * fVar29 + fVar13 * fVar3;
    *(float *)((long)&uStack_110 + lVar18) =
         fVar14 * (0.0 - (fVar10 * fVar22 + fVar11 * fVar25 + fVar12 * fVar9)) +
         fVar1 * fVar22 + fVar2 * fVar25 + fVar13 * fVar9;
    *(float *)((long)&uStack_110 + lVar18 + 4) =
         fVar14 * 1.0 + fVar1 * 0.0 + fVar2 * 0.0 + fVar13 * 0.0;
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x40);
  fVar10 = *(float *)(param_1 + 0xc);
  fVar11 = *(float *)((long)param_1 + 100);
  fVar12 = *(float *)(param_1 + 0xd);
  plVar4 = (long *)*param_1;
  uVar15 = param_1[2];
  uVar16 = param_1[3];
  pcVar5 = *(code **)(*plVar4 + 0x30);
  if (pcVar5 == Shape::GetWorldSpaceBounds) {
    (**(code **)(*plVar4 + 0x20))(&local_d8);
    local_188 = (float)uVar15;
    fStack_184 = (float)((ulong)uVar15 >> 0x20);
    fStack_180 = (float)uVar16;
    fStack_17c = (float)((ulong)uVar16 >> 0x20);
    pfVar19 = (float *)local_138;
    auVar24._0_8_ = CONCAT44(fStack_184 * local_d8._4_4_,local_188 * (float)local_d8);
    auVar24._8_4_ = fStack_180 * fStack_d0;
    auVar24._12_4_ = fStack_17c * fStack_cc;
    auVar31._0_4_ = local_188 * (float)local_c8;
    auVar31._4_4_ = fStack_184 * local_c8._4_4_;
    auVar31._8_4_ = fStack_180 * (float)uStack_c0;
    auVar31._12_4_ = fStack_17c * uStack_c0._4_4_;
    auVar27._8_4_ = auVar24._8_4_;
    auVar27._0_8_ = auVar24._0_8_;
    auVar27._12_4_ = auVar24._12_4_;
    _local_128 = maxps(auVar27,auVar31);
    _local_138 = minps(auVar24,auVar31);
    pfVar20 = (float *)&local_118;
    local_68 = local_e8;
    fStack_64 = fStack_e4;
    fStack_60 = fStack_e0;
    fStack_5c = fStack_dc;
    do {
      fVar1 = *pfVar19;
      fVar2 = pfVar19[4];
      pfVar21 = pfVar20 + 4;
      pfVar19 = pfVar19 + 1;
      auVar23._0_8_ = CONCAT44(fVar1 * pfVar20[1],fVar1 * *pfVar20);
      auVar23._8_4_ = fVar1 * pfVar20[2];
      auVar23._12_4_ = fVar1 * pfVar20[3];
      auVar26._0_4_ = fVar2 * *pfVar20;
      auVar26._4_4_ = fVar2 * pfVar20[1];
      auVar26._8_4_ = fVar2 * pfVar20[2];
      auVar26._12_4_ = fVar2 * pfVar20[3];
      auVar30._8_4_ = auVar23._8_4_;
      auVar30._0_8_ = auVar23._0_8_;
      auVar30._12_4_ = auVar23._12_4_;
      auVar31 = minps(auVar30,auVar26);
      auVar24 = maxps(auVar23,auVar26);
      local_68 = local_68 + auVar31._0_4_;
      fStack_64 = fStack_64 + auVar31._4_4_;
      fStack_60 = fStack_60 + auVar31._8_4_;
      fStack_5c = fStack_5c + auVar31._12_4_;
      local_e8 = local_e8 + auVar24._0_4_;
      fStack_e4 = fStack_e4 + auVar24._4_4_;
      fStack_e0 = fStack_e0 + auVar24._8_4_;
      fStack_dc = fStack_dc + auVar24._12_4_;
      pfVar20 = pfVar21;
      local_58 = local_e8;
      fStack_54 = fStack_e4;
      fStack_50 = fStack_e0;
      fStack_4c = fStack_dc;
    } while (pfVar21 != &local_e8);
  }
  else {
    (*pcVar5)(uVar15,uVar16,local_138);
    local_58 = (float)local_128._0_4_;
    fStack_54 = (float)local_128._4_4_;
    fStack_50 = fStack_120;
    fStack_4c = fStack_11c;
    local_68 = (float)local_138._0_4_;
    fStack_64 = (float)local_138._4_4_;
    fStack_60 = fStack_130;
    fStack_5c = fStack_12c;
  }
  local_a8 = local_108;
  uStack_a0 = uStack_100;
  local_b8 = local_118;
  uStack_b0 = uStack_110;
  local_98 = local_f8;
  uStack_90 = uStack_f0;
  local_d8 = plVar4;
  local_c8 = uVar15;
  uStack_c0 = uVar16;
  local_78 = fVar10 * fVar6 + fVar11 * fVar7 + fVar12 * fVar8;
  fStack_74 = fVar10 * fVar28 + fVar11 * fVar29 + fVar12 * fVar3;
  fStack_70 = fVar10 * fVar22 + fVar11 * fVar25 + fVar12 * fVar9;
  fStack_6c = fVar10 * 0.0 + fVar11 * 0.0 + fVar12 * 0.0;
  cVar17 = (**(code **)(*param_6 + 0x18))(param_6,plVar4,param_8,param_3,param_9);
  if (cVar17 != '\0') {
    (*(code *)(&sCastShape)
              [(ulong)*(byte *)(param_3 + 0x19) + (ulong)*(byte *)((long)local_d8 + 0x19) * 0x22])
              (param_1_00,param_2_00,&local_d8,param_2,param_3,param_6,param_7,param_8,param_9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TransformedShape::CastRay(JPH::RRayCast const&, JPH::RayCastResult&) const */

void JPH::TransformedShape::_GLOBAL__sub_I_CastRay(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC6;
  }
  return;
}


