/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::MotionProperties::SetMassProperties(JPH::EAllowedDOFs, JPH::MassProperties const&) */void JPH::MotionProperties::SetMassProperties(MotionProperties *this, MotionProperties param_2, Mat44 *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   float fVar2;
   undefined8 uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   float fVar7;
   float local_68;
   float fStack_64;
   float fStack_60;
   undefined4 uStack_5c;
   float local_58;
   float local_54;
   float local_50;
   float local_48;
   float local_44;
   float local_40;
   float local_38;
   float local_34;
   float local_30;
   long local_10;
   fVar2 = 0.0;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x7a] = param_2;
   if (( (byte)param_2 & 7 ) != 0) {
      fVar2 = _LC2 / *(float*)param_3;
   }

   *(float*)( this + 0x58 ) = fVar2;
   if (( (byte)param_2 & 0x38 ) == 0) {
      *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
      uVar6 = CONCAT44(_LC2, _UNK_00100578);
      *(undefined8*)( this + 0x30 ) = __LC1;
      *(undefined8*)( this + 0x38 ) = uVar6;
      goto LAB_00100056;
   }

   cVar1 = JPH::MassProperties::DecomposePrincipalMomentsOfInertia(param_3, (Vec3*)&local_58);
   uVar6 = __LC1;
   if (( cVar1 == '\0' ) || ( fStack_60 * fStack_60 + local_68 * local_68 + 0.0 + fStack_64 * fStack_64 <= _LC3 )) {
      fVar2 = _LC5 * *(float*)( this + 0x58 );
      uVar3 = CONCAT44(_LC2, _UNK_00100578);
      for (int i = 0; i < 4; i++) {
         *(float*)( this + ( 4*i + 32 ) ) = fVar2;
      }

   }
 else {
      auVar4._4_4_ = _LC2;
      auVar4._0_4_ = _LC2;
      auVar4._8_4_ = _LC2;
      auVar4._12_4_ = _LC2;
      auVar5._4_4_ = fStack_64;
      auVar5._0_4_ = local_68;
      auVar5._8_4_ = fStack_60;
      auVar5._12_4_ = uStack_5c;
      auVar5 = divps(auVar4, auVar5);
      *(undefined1(*) [16])( this + 0x20 ) = auVar5;
      fVar2 = local_58 + local_44 + local_30;
      if (0.0 <= fVar2) {
         fVar7 = SQRT(fVar2 + _LC2);
         fVar2 = _LC6 / fVar7;
         uVar6 = CONCAT44(( local_38 - local_50 ) * fVar2, ( local_40 - local_34 ) * fVar2);
         uVar3 = CONCAT44(fVar7 * _LC6, ( local_54 - local_48 ) * fVar2);
      }
 else if (local_58 < local_44) {
         if (local_44 < local_30) goto LAB_00100218;
         fVar2 = _LC2 + ( local_44 - ( local_58 + local_30 ) );
         if (fVar2 < 0.0) {
            fVar2 = sqrtf(fVar2);
         }
 else {
            fVar2 = SQRT(fVar2);
         }

         fVar7 = _LC6 / fVar2;
         uVar6 = CONCAT44(fVar2 * _LC6, ( local_48 + local_54 ) * fVar7);
         uVar3 = CONCAT44(( local_38 - local_50 ) * fVar7, ( local_40 + local_34 ) * fVar7);
      }
 else if (local_58 < local_30) {
         LAB_00100218:fVar2 = ( local_30 - ( local_58 + local_44 ) ) + _LC2;
         if (fVar2 < 0.0) {
            fVar2 = sqrtf(fVar2);
         }
 else {
            fVar2 = SQRT(fVar2);
         }

         fVar7 = _LC6 / fVar2;
         uVar3 = CONCAT44(( local_54 - local_48 ) * fVar7, fVar2 * _LC6);
         uVar6 = CONCAT44(( local_40 + local_34 ) * fVar7, ( local_50 + local_38 ) * fVar7);
      }
 else {
         fVar2 = _LC2 + ( local_58 - ( local_44 + local_30 ) );
         if (fVar2 < 0.0) {
            fVar2 = sqrtf(fVar2);
         }
 else {
            fVar2 = SQRT(fVar2);
         }

         fVar7 = _LC6 / fVar2;
         uVar6 = CONCAT44(( local_48 + local_54 ) * fVar7, _LC6 * fVar2);
         uVar3 = CONCAT44(( local_40 - local_34 ) * fVar7, ( local_38 + local_50 ) * fVar7);
      }

   }

   *(undefined8*)( this + 0x30 ) = uVar6;
   *(undefined8*)( this + 0x38 ) = uVar3;
   LAB_00100056:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JPH::MotionProperties::SaveState(JPH::StateRecorder&) const */void JPH::MotionProperties::SaveState(MotionProperties *this, StateRecorder *param_1) {
   StateRecorder *pSVar1;
   pSVar1 = param_1 + 8;
   ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, this, 0xc);
   ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, this + 0x10, 0xc);
   ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, this + 0x40, 0xc);
   ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, this + 0x4c, 0xc);
   ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, this + 0x80, 0x30);
   ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, this + 0xb0, 4);
   /* WARNING: Could not recover jumptable at 0x00100481. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)( param_1 + 8 ) + 0x10 ) )(pSVar1, this + 0x79, 1);
   return;
}
/* JPH::MotionProperties::RestoreState(JPH::StateRecorder&) */void JPH::MotionProperties::RestoreState(MotionProperties *this, StateRecorder *param_1) {
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this, 0xc);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x10, 0xc);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x40, 0xc);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x4c, 0xc);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x80, 0x30);
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0xb0, 4);
   /* WARNING: Could not recover jumptable at 0x0010052a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)param_1 + 0x10 ) )(param_1, this + 0x79, 1);
   return;
}
/* JPH::MotionProperties::SetMassProperties(JPH::EAllowedDOFs, JPH::MassProperties const&) */void JPH::MotionProperties::_GLOBAL__sub_I_SetMassProperties(void) {
   if (DVec3::cTrue == '\0') {
      DVec3::cTrue = '\x01';
      DVec3::cTrue = _LC8;
   }

   return;
}

