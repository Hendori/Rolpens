
/* void msdfgen::msdfErrorCorrectionShapeless<3>(msdfgen::BitmapRef<float, 3> const&,
   msdfgen::SDFTransformation const&, double, bool) */

void msdfgen::msdfErrorCorrectionShapeless<3>
               (BitmapRef *param_1,SDFTransformation *param_2,double param_3,bool param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  void *local_a8;
  undefined8 local_a0;
  MSDFErrorCorrection local_98 [88];
  long local_40;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar2 = operator_new__((long)((int)uVar1 * (int)((ulong)uVar1 >> 0x20)));
  local_a8 = pvVar2;
  local_a0 = uVar1;
  msdfgen::MSDFErrorCorrection::MSDFErrorCorrection(local_98,(BitmapRef *)&local_a8,param_2);
  msdfgen::MSDFErrorCorrection::setMinDeviationRatio(param_3);
  if (param_4) {
    msdfgen::MSDFErrorCorrection::protectAll();
  }
  local_a8 = *(void **)param_1;
  local_a0 = *(undefined8 *)(param_1 + 8);
  msdfgen::MSDFErrorCorrection::findErrors<3>((BitmapConstRef *)local_98);
  msdfgen::MSDFErrorCorrection::apply<3>((BitmapRef *)local_98);
  operator_delete__(pvVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void msdfgen::msdfErrorCorrectionShapeless<4>(msdfgen::BitmapRef<float, 4> const&,
   msdfgen::SDFTransformation const&, double, bool) */

void msdfgen::msdfErrorCorrectionShapeless<4>
               (BitmapRef *param_1,SDFTransformation *param_2,double param_3,bool param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  void *local_a8;
  undefined8 local_a0;
  MSDFErrorCorrection local_98 [88];
  long local_40;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar2 = operator_new__((long)((int)uVar1 * (int)((ulong)uVar1 >> 0x20)));
  local_a8 = pvVar2;
  local_a0 = uVar1;
  msdfgen::MSDFErrorCorrection::MSDFErrorCorrection(local_98,(BitmapRef *)&local_a8,param_2);
  msdfgen::MSDFErrorCorrection::setMinDeviationRatio(param_3);
  if (param_4) {
    msdfgen::MSDFErrorCorrection::protectAll();
  }
  local_a8 = *(void **)param_1;
  local_a0 = *(undefined8 *)(param_1 + 8);
  msdfgen::MSDFErrorCorrection::findErrors<4>((BitmapConstRef *)local_98);
  msdfgen::MSDFErrorCorrection::apply<4>((BitmapRef *)local_98);
  operator_delete__(pvVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::Bitmap<unsigned char, 1>::TEMPNAMEPLACEHOLDERVALUE(msdfgen::Bitmap<unsigned char, 1>
   const&) [clone .isra.0] */

void __thiscall
msdfgen::Bitmap<unsigned_char,1>::operator=(Bitmap<unsigned_char,1> *this,Bitmap *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  
  if (this != (Bitmap<unsigned_char,1> *)param_1) {
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 8) = uVar1;
    uVar3 = (ulong)((int)((ulong)uVar1 >> 0x20) * (int)uVar1);
    pvVar2 = operator_new__(uVar3);
    *(void **)this = pvVar2;
    __memcpy_chk(pvVar2,*(undefined8 *)param_1,(long)*(int *)(this + 8) * (long)*(int *)(this + 0xc)
                 ,uVar3);
    return;
  }
  return;
}



/* void msdfgen::msdfErrorCorrectionInner<4>(msdfgen::BitmapRef<float, 4> const&, msdfgen::Shape
   const&, msdfgen::SDFTransformation const&, msdfgen::MSDFGeneratorConfig const&) [clone .part.0]
    */

void msdfgen::msdfErrorCorrectionInner<4>
               (BitmapRef *param_1,Shape *param_2,SDFTransformation *param_3,
               MSDFGeneratorConfig *param_4)

{
  int iVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = *(void **)(param_4 + 0x20);
  local_b8 = (void *)0x0;
  local_b0 = 0;
  if (local_a8 == (void *)0x0) {
    local_80 = *(undefined8 *)(param_1 + 8);
    pvVar2 = operator_new__((long)((int)local_80 * (int)((ulong)local_80 >> 0x20)));
    local_88 = pvVar2;
    Bitmap<unsigned_char,1>::operator=((Bitmap<unsigned_char,1> *)&local_b8,(Bitmap *)&local_88);
    operator_delete__(pvVar2);
    local_a8 = local_b8;
    if (*(void **)(param_4 + 0x20) != (void *)0x0) {
      local_a8 = *(void **)(param_4 + 0x20);
    }
  }
  pvVar2 = local_b8;
  local_a0 = *(undefined8 *)(param_1 + 8);
  msdfgen::MSDFErrorCorrection::MSDFErrorCorrection
            ((MSDFErrorCorrection *)&local_88,(BitmapRef *)&local_a8,param_3);
  msdfgen::MSDFErrorCorrection::setMinDeviationRatio(*(double *)(param_4 + 0x10));
  msdfgen::MSDFErrorCorrection::setMinImproveRatio(*(double *)(param_4 + 0x18));
  if (*(int *)(param_4 + 8) == 2) {
    msdfgen::MSDFErrorCorrection::protectCorners((Shape *)&local_88);
    local_98 = *(undefined8 *)param_1;
    local_90 = *(undefined8 *)(param_1 + 8);
    msdfgen::MSDFErrorCorrection::protectEdges<4>((BitmapConstRef *)&local_88);
LAB_00100308:
    iVar1 = *(int *)(param_4 + 0xc);
    if (iVar1 == 0) goto LAB_00100377;
LAB_0010030f:
    if (iVar1 != 1) goto LAB_00100318;
    if (*(int *)(param_4 + 8) != 3) goto LAB_00100377;
  }
  else {
    if (*(int *)(param_4 + 8) != 3) goto LAB_00100308;
    msdfgen::MSDFErrorCorrection::protectAll();
    iVar1 = *(int *)(param_4 + 0xc);
    if (iVar1 != 0) goto LAB_0010030f;
LAB_00100377:
    local_98 = *(undefined8 *)param_1;
    local_90 = *(undefined8 *)(param_1 + 8);
    msdfgen::MSDFErrorCorrection::findErrors<4>((BitmapConstRef *)&local_88);
    iVar1 = *(int *)(param_4 + 0xc);
    if (iVar1 == 1) {
      msdfgen::MSDFErrorCorrection::protectAll();
      iVar1 = *(int *)(param_4 + 0xc);
    }
LAB_00100318:
    if (1 < iVar1 - 1U) goto LAB_00100324;
  }
  local_98 = *(undefined8 *)param_1;
  local_90 = *(undefined8 *)(param_1 + 8);
  if (*param_4 == (MSDFGeneratorConfig)0x0) {
    msdfgen::MSDFErrorCorrection::findErrors<msdfgen::SimpleContourCombiner,4>
              ((BitmapConstRef *)&local_88,(Shape *)&local_98);
  }
  else {
    msdfgen::MSDFErrorCorrection::findErrors<msdfgen::OverlappingContourCombiner,4>
              ((BitmapConstRef *)&local_88,(Shape *)&local_98);
  }
LAB_00100324:
  msdfgen::MSDFErrorCorrection::apply<4>((BitmapRef *)&local_88);
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void msdfgen::msdfErrorCorrectionInner<3>(msdfgen::BitmapRef<float, 3> const&, msdfgen::Shape
   const&, msdfgen::SDFTransformation const&, msdfgen::MSDFGeneratorConfig const&) [clone .part.0]
    */

void msdfgen::msdfErrorCorrectionInner<3>
               (BitmapRef *param_1,Shape *param_2,SDFTransformation *param_3,
               MSDFGeneratorConfig *param_4)

{
  int iVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = *(void **)(param_4 + 0x20);
  local_b8 = (void *)0x0;
  local_b0 = 0;
  if (local_a8 == (void *)0x0) {
    local_80 = *(undefined8 *)(param_1 + 8);
    pvVar2 = operator_new__((long)((int)local_80 * (int)((ulong)local_80 >> 0x20)));
    local_88 = pvVar2;
    Bitmap<unsigned_char,1>::operator=((Bitmap<unsigned_char,1> *)&local_b8,(Bitmap *)&local_88);
    operator_delete__(pvVar2);
    local_a8 = local_b8;
    if (*(void **)(param_4 + 0x20) != (void *)0x0) {
      local_a8 = *(void **)(param_4 + 0x20);
    }
  }
  pvVar2 = local_b8;
  local_a0 = *(undefined8 *)(param_1 + 8);
  msdfgen::MSDFErrorCorrection::MSDFErrorCorrection
            ((MSDFErrorCorrection *)&local_88,(BitmapRef *)&local_a8,param_3);
  msdfgen::MSDFErrorCorrection::setMinDeviationRatio(*(double *)(param_4 + 0x10));
  msdfgen::MSDFErrorCorrection::setMinImproveRatio(*(double *)(param_4 + 0x18));
  if (*(int *)(param_4 + 8) == 2) {
    msdfgen::MSDFErrorCorrection::protectCorners((Shape *)&local_88);
    local_98 = *(undefined8 *)param_1;
    local_90 = *(undefined8 *)(param_1 + 8);
    msdfgen::MSDFErrorCorrection::protectEdges<3>((BitmapConstRef *)&local_88);
LAB_00100548:
    iVar1 = *(int *)(param_4 + 0xc);
    if (iVar1 == 0) goto LAB_001005b7;
LAB_0010054f:
    if (iVar1 != 1) goto LAB_00100558;
    if (*(int *)(param_4 + 8) != 3) goto LAB_001005b7;
  }
  else {
    if (*(int *)(param_4 + 8) != 3) goto LAB_00100548;
    msdfgen::MSDFErrorCorrection::protectAll();
    iVar1 = *(int *)(param_4 + 0xc);
    if (iVar1 != 0) goto LAB_0010054f;
LAB_001005b7:
    local_98 = *(undefined8 *)param_1;
    local_90 = *(undefined8 *)(param_1 + 8);
    msdfgen::MSDFErrorCorrection::findErrors<3>((BitmapConstRef *)&local_88);
    iVar1 = *(int *)(param_4 + 0xc);
    if (iVar1 == 1) {
      msdfgen::MSDFErrorCorrection::protectAll();
      iVar1 = *(int *)(param_4 + 0xc);
    }
LAB_00100558:
    if (1 < iVar1 - 1U) goto LAB_00100564;
  }
  local_98 = *(undefined8 *)param_1;
  local_90 = *(undefined8 *)(param_1 + 8);
  if (*param_4 == (MSDFGeneratorConfig)0x0) {
    msdfgen::MSDFErrorCorrection::findErrors<msdfgen::SimpleContourCombiner,3>
              ((BitmapConstRef *)&local_88,(Shape *)&local_98);
  }
  else {
    msdfgen::MSDFErrorCorrection::findErrors<msdfgen::OverlappingContourCombiner,3>
              ((BitmapConstRef *)&local_88,(Shape *)&local_98);
  }
LAB_00100564:
  msdfgen::MSDFErrorCorrection::apply<3>((BitmapRef *)&local_88);
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* msdfgen::msdfErrorCorrection(msdfgen::BitmapRef<float, 3> const&, msdfgen::Shape const&,
   msdfgen::SDFTransformation const&, msdfgen::MSDFGeneratorConfig const&) */

void msdfgen::msdfErrorCorrection
               (BitmapRef *param_1,Shape *param_2,SDFTransformation *param_3,
               MSDFGeneratorConfig *param_4)

{
  if (*(int *)(param_4 + 8) != 0) {
    msdfErrorCorrectionInner<3>(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



/* msdfgen::msdfErrorCorrection(msdfgen::BitmapRef<float, 4> const&, msdfgen::Shape const&,
   msdfgen::SDFTransformation const&, msdfgen::MSDFGeneratorConfig const&) */

void msdfgen::msdfErrorCorrection
               (BitmapRef *param_1,Shape *param_2,SDFTransformation *param_3,
               MSDFGeneratorConfig *param_4)

{
  if (*(int *)(param_4 + 8) != 0) {
    msdfErrorCorrectionInner<4>(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



/* msdfgen::msdfErrorCorrection(msdfgen::BitmapRef<float, 3> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, msdfgen::Range, msdfgen::MSDFGeneratorConfig const&) */

void msdfgen::msdfErrorCorrection
               (BitmapRef *param_1,Shape *param_2,undefined8 *param_3,MSDFGeneratorConfig *param_4)

{
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_78);
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_58 = param_3[2];
  uStack_50 = param_3[3];
  local_48 = local_78;
  uStack_40 = uStack_70;
  if (*(int *)(param_4 + 8) != 0) {
    msdfErrorCorrectionInner<3>(param_1,param_2,(SDFTransformation *)&local_68,param_4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::msdfErrorCorrection(msdfgen::BitmapRef<float, 4> const&, msdfgen::Shape const&,
   msdfgen::Projection const&, msdfgen::Range, msdfgen::MSDFGeneratorConfig const&) */

void msdfgen::msdfErrorCorrection
               (BitmapRef *param_1,Shape *param_2,undefined8 *param_3,MSDFGeneratorConfig *param_4)

{
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_78);
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_58 = param_3[2];
  uStack_50 = param_3[3];
  local_48 = local_78;
  uStack_40 = uStack_70;
  if (*(int *)(param_4 + 8) != 0) {
    msdfErrorCorrectionInner<4>(param_1,param_2,(SDFTransformation *)&local_68,param_4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::msdfFastDistanceErrorCorrection(msdfgen::BitmapRef<float, 3> const&,
   msdfgen::SDFTransformation const&, double) */

void msdfgen::msdfFastDistanceErrorCorrection
               (BitmapRef *param_1,SDFTransformation *param_2,double param_3)

{
  msdfErrorCorrectionShapeless<3>(param_1,param_2,param_3,false);
  return;
}



/* msdfgen::msdfFastDistanceErrorCorrection(msdfgen::BitmapRef<float, 4> const&,
   msdfgen::SDFTransformation const&, double) */

void msdfgen::msdfFastDistanceErrorCorrection
               (BitmapRef *param_1,SDFTransformation *param_2,double param_3)

{
  msdfErrorCorrectionShapeless<4>(param_1,param_2,param_3,false);
  return;
}



/* msdfgen::msdfFastDistanceErrorCorrection(msdfgen::BitmapRef<float, 3> const&, msdfgen::Projection
   const&, msdfgen::Range, double) */

void __thiscall
msdfgen::msdfFastDistanceErrorCorrection
          (undefined8 param_1_00,undefined8 param_2,double param_3,msdfgen *this,undefined8 *param_1
          )

{
  long in_FS_OFFSET;
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
  msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_68);
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  local_38 = local_68;
  uStack_30 = uStack_60;
  msdfErrorCorrectionShapeless<3>((BitmapRef *)this,(SDFTransformation *)&local_58,param_3,false);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::msdfFastDistanceErrorCorrection(msdfgen::BitmapRef<float, 4> const&, msdfgen::Projection
   const&, msdfgen::Range, double) */

void __thiscall
msdfgen::msdfFastDistanceErrorCorrection
          (undefined8 param_1_00,undefined8 param_2,double param_3,msdfgen *this,undefined8 *param_1
          )

{
  long in_FS_OFFSET;
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
  msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_68);
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  local_38 = local_68;
  uStack_30 = uStack_60;
  msdfErrorCorrectionShapeless<4>((BitmapRef *)this,(SDFTransformation *)&local_58,param_3,false);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::msdfFastEdgeErrorCorrection(msdfgen::BitmapRef<float, 3> const&,
   msdfgen::SDFTransformation const&, double) */

void msdfgen::msdfFastEdgeErrorCorrection
               (BitmapRef *param_1,SDFTransformation *param_2,double param_3)

{
  msdfErrorCorrectionShapeless<3>(param_1,param_2,param_3,true);
  return;
}



/* msdfgen::msdfFastEdgeErrorCorrection(msdfgen::BitmapRef<float, 4> const&,
   msdfgen::SDFTransformation const&, double) */

void msdfgen::msdfFastEdgeErrorCorrection
               (BitmapRef *param_1,SDFTransformation *param_2,double param_3)

{
  msdfErrorCorrectionShapeless<4>(param_1,param_2,param_3,true);
  return;
}



/* msdfgen::msdfFastEdgeErrorCorrection(msdfgen::BitmapRef<float, 3> const&, msdfgen::Projection
   const&, msdfgen::Range, double) */

void __thiscall
msdfgen::msdfFastEdgeErrorCorrection
          (undefined8 param_1_00,undefined8 param_2,double param_3,msdfgen *this,undefined8 *param_1
          )

{
  long in_FS_OFFSET;
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
  msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_68);
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  local_38 = local_68;
  uStack_30 = uStack_60;
  msdfErrorCorrectionShapeless<3>((BitmapRef *)this,(SDFTransformation *)&local_58,param_3,true);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::msdfFastEdgeErrorCorrection(msdfgen::BitmapRef<float, 4> const&, msdfgen::Projection
   const&, msdfgen::Range, double) */

void __thiscall
msdfgen::msdfFastEdgeErrorCorrection
          (undefined8 param_1_00,undefined8 param_2,double param_3,msdfgen *this,undefined8 *param_1
          )

{
  long in_FS_OFFSET;
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
  msdfgen::DistanceMapping::DistanceMapping((DistanceMapping *)&local_68);
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  local_38 = local_68;
  uStack_30 = uStack_60;
  msdfErrorCorrectionShapeless<4>((BitmapRef *)this,(SDFTransformation *)&local_58,param_3,true);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* msdfgen::msdfErrorCorrection_legacy(msdfgen::BitmapRef<float, 4> const&, msdfgen::Vector2 const&)
    */

void msdfgen::msdfErrorCorrection_legacy(BitmapRef *param_1,Vector2 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  int local_74;
  int local_60;
  int iStack_5c;
  int *local_58;
  int *piStack_50;
  int *local_48;
  long local_40;
  
  iVar3 = *(int *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *(int *)(param_1 + 0xc);
  local_58 = (int *)0x0;
  piStack_50 = (int *)0x0;
  local_48 = (int *)0x0;
  if (iVar4 < 1) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar11 = (int *)0x0;
    piVar13 = (int *)0x0;
    uVar23 = _LC1;
    uVar32 = _LC1;
    uVar22 = _LC1;
    iVar15 = 0;
    do {
      iVar14 = iVar15;
      iVar16 = 0;
      iVar15 = iVar14 + 1;
      uVar27 = _LC1;
      if (0 < iVar3) {
LAB_00100c3b:
        iVar8 = iVar16 + 1;
        iVar10 = iVar16;
        iVar5 = iVar16;
        iVar9 = iVar8;
        if (iVar16 < iVar3 + -1) goto LAB_00100e63;
LAB_00100c4d:
        if (iVar14 != 0) {
          pfVar1 = (float *)(*(long *)param_1 +
                            (long)(((iVar14 + -1) * *(int *)(param_1 + 8) + iVar5) * 4) * 4);
          pfVar2 = (float *)(*(long *)param_1 +
                            (long)((*(int *)(param_1 + 8) * iVar14 + iVar5) * 4) * 4);
          fVar31 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar33 = *pfVar2;
          fVar19 = pfVar2[1];
          fVar24 = pfVar1[2];
          fVar21 = (float)((uint)(fVar31 - fVar33) & uVar32);
          fVar26 = (float)((uint)(fVar25 - fVar19) & uVar32);
          fVar20 = fVar25;
          fVar18 = fVar19;
          if (fVar26 <= fVar21) {
            fVar20 = fVar31;
            fVar31 = fVar25;
            fVar18 = fVar33;
            fVar33 = fVar19;
            fVar21 = fVar26;
          }
          fVar28 = (float)((uint)(fVar24 - pfVar2[2]) & uVar32);
          fVar25 = fVar20;
          fVar19 = fVar31;
          fVar26 = pfVar2[2];
          fVar30 = fVar24;
          if ((fVar21 < fVar28) &&
             (fVar18 = (float)((uint)(fVar20 - fVar18) & uVar32), fVar19 = fVar24, fVar26 = fVar33,
             fVar30 = fVar31, fVar21 = fVar28, fVar18 < fVar28)) {
            fVar25 = fVar24;
            fVar19 = fVar20;
            fVar21 = fVar18;
          }
          if ((*(double *)(param_2 + 8) <= (double)fVar21) &&
             (((fVar19 != fVar25 || (fVar25 != fVar30)) &&
              ((float)((uint)(fVar30 - _LC2) & uVar32) <= (float)((uint)(fVar26 - _LC2) & uVar32))))
             ) goto LAB_00100f7b;
        }
        if (iVar14 < iVar4 + -1) {
          pfVar1 = (float *)(*(long *)param_1 +
                            (long)((*(int *)(param_1 + 8) * iVar14 + iVar5) * 4) * 4);
          pfVar2 = (float *)(*(long *)param_1 +
                            (long)((*(int *)(param_1 + 8) * iVar15 + iVar5) * 4) * 4);
          fVar31 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar33 = *pfVar2;
          fVar19 = pfVar2[1];
          fVar24 = pfVar2[2];
          fVar21 = (float)((uint)(fVar33 - fVar31) & uVar22);
          fVar26 = (float)((uint)(fVar19 - fVar25) & uVar22);
          fVar20 = fVar19;
          fVar18 = fVar25;
          if (fVar26 <= fVar21) {
            fVar20 = fVar33;
            fVar33 = fVar19;
            fVar18 = fVar31;
            fVar31 = fVar25;
            fVar21 = fVar26;
          }
          fVar28 = (float)((uint)(fVar24 - pfVar1[2]) & uVar22);
          fVar25 = fVar20;
          fVar19 = fVar33;
          fVar26 = pfVar1[2];
          fVar30 = fVar24;
          if ((fVar21 < fVar28) &&
             (fVar18 = (float)((uint)(fVar20 - fVar18) & uVar22), fVar19 = fVar24, fVar26 = fVar31,
             fVar30 = fVar33, fVar21 = fVar28, fVar18 < fVar28)) {
            fVar25 = fVar24;
            fVar19 = fVar20;
            fVar21 = fVar18;
          }
          if (((*(double *)(param_2 + 8) <= (double)fVar21) &&
              ((fVar19 != fVar25 || (fVar25 != fVar30)))) &&
             ((float)((uint)(fVar30 - _LC2) & uVar22) <= (float)((uint)(fVar26 - _LC2) & uVar22)))
          goto LAB_00100f7b;
        }
LAB_00100e48:
        iVar6 = iVar16;
        iVar16 = iVar8;
        if (iVar9 < iVar3) {
          do {
            iVar10 = 0;
            iVar5 = iVar16;
            iVar9 = 1;
            if (iVar16 == 0) {
LAB_00100e63:
              iVar16 = iVar10;
              pfVar1 = (float *)(*(long *)param_1 +
                                (long)((*(int *)(param_1 + 8) * iVar14 + iVar9) * 4) * 4);
              pfVar2 = (float *)(*(long *)param_1 +
                                (long)((*(int *)(param_1 + 8) * iVar14 + iVar5) * 4) * 4);
              fVar31 = *pfVar1;
              fVar25 = pfVar1[1];
              fVar33 = *pfVar2;
              fVar19 = pfVar2[1];
              fVar24 = pfVar1[2];
              fVar21 = (float)((uint)(fVar31 - fVar33) & uVar27);
              fVar26 = (float)((uint)(fVar25 - fVar19) & uVar27);
              fVar20 = fVar25;
              fVar18 = fVar33;
              if (fVar26 <= fVar21) {
                fVar20 = fVar31;
                fVar31 = fVar25;
                fVar18 = fVar19;
                fVar19 = fVar33;
                fVar21 = fVar26;
              }
              fVar28 = (float)((uint)(fVar24 - pfVar2[2]) & uVar27);
              fVar25 = fVar20;
              fVar33 = fVar31;
              fVar26 = pfVar2[2];
              fVar30 = fVar24;
              if ((fVar21 < fVar28) &&
                 (fVar19 = (float)((uint)(fVar20 - fVar19) & uVar27), fVar33 = fVar24,
                 fVar26 = fVar18, fVar30 = fVar31, fVar21 = fVar28, fVar19 < fVar28)) {
                fVar25 = fVar24;
                fVar33 = fVar20;
                fVar21 = fVar19;
              }
              if ((double)fVar21 < *(double *)param_2) {
                iVar8 = iVar16 + 1;
                goto LAB_00100c4d;
              }
              if (((fVar33 == fVar25) && (iVar8 = iVar16 + 1, fVar25 == fVar30)) ||
                 (iVar8 = iVar16 + 1,
                 (float)((uint)(fVar26 - _LC2) & uVar27) < (float)((uint)(fVar30 - _LC2) & uVar27)))
              goto LAB_00100c4d;
LAB_00100f7b:
              piVar7 = piVar11;
              local_60 = iVar5;
              if (piVar11 == piVar13) goto LAB_00101080;
            }
            else {
              pfVar1 = (float *)(*(long *)param_1 +
                                (long)((iVar6 + *(int *)(param_1 + 8) * iVar14) * 4) * 4);
              pfVar2 = (float *)(*(long *)param_1 +
                                (long)((*(int *)(param_1 + 8) * iVar14 + iVar16) * 4) * 4);
              fVar31 = *pfVar1;
              fVar25 = pfVar1[1];
              fVar33 = *pfVar2;
              fVar19 = pfVar2[1];
              fVar24 = pfVar1[2];
              fVar21 = (float)((uint)(fVar31 - fVar33) & uVar23);
              fVar26 = (float)((uint)(fVar25 - fVar19) & uVar23);
              fVar20 = fVar25;
              fVar18 = fVar19;
              if (fVar26 <= fVar21) {
                fVar20 = fVar31;
                fVar31 = fVar25;
                fVar18 = fVar33;
                fVar33 = fVar19;
                fVar21 = fVar26;
              }
              fVar28 = (float)((uint)(fVar24 - pfVar2[2]) & uVar23);
              fVar25 = fVar20;
              fVar19 = fVar31;
              fVar26 = pfVar2[2];
              fVar30 = fVar24;
              if ((fVar21 < fVar28) &&
                 (fVar18 = (float)((uint)(fVar20 - fVar18) & uVar23), fVar19 = fVar24,
                 fVar26 = fVar33, fVar30 = fVar31, fVar21 = fVar28, fVar18 < fVar28)) {
                fVar25 = fVar24;
                fVar19 = fVar20;
                fVar21 = fVar18;
              }
              if (((double)fVar21 < *(double *)param_2) ||
                 (((fVar19 == fVar25 && (fVar25 == fVar30)) ||
                  ((float)((uint)(fVar26 - _LC2) & uVar23) < (float)((uint)(fVar30 - _LC2) & uVar23)
                  )))) goto LAB_00100c3b;
              iVar9 = iVar6 + 2;
              iVar8 = iVar16 + 1;
              piVar7 = piVar11;
              local_60 = iVar16;
              if (piVar11 == piVar13) goto LAB_00101080;
            }
            piVar11 = piVar7 + 2;
            *(ulong *)piVar7 = CONCAT44(iVar14,local_60);
            iVar6 = iVar16;
            iStack_5c = iVar14;
            iVar16 = iVar8;
            piStack_50 = piVar11;
            if (iVar3 <= iVar9) break;
          } while( true );
        }
      }
    } while (iVar4 != iVar15);
    if (local_58 != piVar11) {
      lVar12 = *(long *)param_1;
      iVar15 = *(int *)(param_1 + 8);
      piVar7 = local_58;
      do {
        pfVar1 = (float *)(lVar12 + (long)((piVar7[1] * iVar15 + *piVar7) * 4) * 4);
        fVar31 = pfVar1[1];
        fVar25 = *pfVar1;
        fVar33 = pfVar1[2];
        if (fVar25 < fVar31) {
          fVar19 = fVar25;
          fVar25 = fVar31;
          if (fVar33 < fVar31) goto LAB_00101025;
        }
        else if ((fVar33 < fVar25) && (fVar19 = fVar31, fVar31 < fVar25)) {
LAB_00101025:
          fVar25 = fVar33;
          if (fVar33 <= fVar19) {
            fVar25 = fVar19;
          }
        }
        piVar7 = piVar7 + 2;
        pfVar1[2] = fVar25;
        *(ulong *)pfVar1 = CONCAT44(fVar25,fVar25);
      } while (piVar11 != piVar7);
      piStack_50 = local_58;
    }
    piVar11 = piStack_50;
    uVar23 = _LC1;
    iVar15 = 0;
    uVar32 = _LC1;
    do {
      iVar16 = iVar15 + 1;
      if (0 < iVar3) {
        iVar9 = 1;
        iVar8 = 0;
        do {
          if (iVar3 + -1 <= iVar8) {
            if (iVar8 != 0) goto LAB_0010161b;
            goto LAB_001015f8;
          }
          iVar10 = iVar8;
          if (iVar15 != 0) {
            iVar5 = *(int *)(param_1 + 8);
            lVar12 = *(long *)param_1;
            dVar34 = *(double *)param_2;
            iVar6 = (iVar15 + -1) * iVar5;
            dVar35 = *(double *)(param_2 + 8) + dVar34;
            pfVar1 = (float *)(lVar12 + (long)((iVar15 * iVar5 + iVar8) * 4) * 4);
            fVar31 = *pfVar1;
            fVar25 = pfVar1[1];
            fVar33 = pfVar1[2];
            uVar22 = uVar23;
            goto LAB_0010133b;
          }
          uVar22 = _LC1;
          if (iVar8 != 0) {
            if (iVar4 == 1) goto LAB_001015f8;
            iVar5 = *(int *)(param_1 + 8);
            dVar34 = *(double *)param_2;
            lVar12 = *(long *)param_1;
            goto LAB_00101410;
          }
          iVar10 = iVar9;
          if (iVar4 != 1) {
            iVar5 = *(int *)(param_1 + 8);
            dVar34 = *(double *)param_2;
            lVar12 = *(long *)param_1;
            iVar10 = iVar8;
            goto LAB_00101515;
          }
          while ((iVar9 = iVar10 + 1, iVar8 = iVar10, iVar10 != 0 && (iVar15 != 0))) {
            iVar5 = *(int *)(param_1 + 8);
            lVar12 = *(long *)param_1;
            dVar34 = *(double *)param_2;
            iVar6 = (iVar15 + -1) * iVar5;
            dVar35 = *(double *)(param_2 + 8) + dVar34;
            pfVar1 = (float *)(lVar12 + (long)((iVar10 + -1 + iVar6) * 4) * 4);
            fVar19 = *pfVar1;
            fVar24 = pfVar1[1];
            fVar21 = pfVar1[2];
            pfVar1 = (float *)(lVar12 + (long)((iVar5 * iVar15 + iVar10) * 4) * 4);
            fVar31 = *pfVar1;
            fVar25 = pfVar1[1];
            fVar33 = pfVar1[2];
            fVar20 = (float)((uint)(fVar19 - fVar31) & uVar32);
            fVar28 = (float)((uint)(fVar24 - fVar25) & uVar32);
            fVar18 = fVar24;
            fVar26 = fVar31;
            fVar30 = fVar25;
            if (fVar28 <= fVar20) {
              fVar18 = fVar19;
              fVar19 = fVar24;
              fVar26 = fVar25;
              fVar30 = fVar31;
              fVar20 = fVar28;
            }
            fVar29 = (float)((uint)(fVar21 - fVar33) & uVar32);
            fVar24 = fVar18;
            fVar28 = fVar21;
            fVar36 = fVar33;
            if ((fVar20 < fVar29) &&
               (fVar20 = (float)((uint)(fVar18 - fVar30) & uVar32), fVar24 = fVar21, fVar28 = fVar19
               , fVar19 = fVar18, fVar36 = fVar26, fVar29 <= fVar20)) {
              fVar24 = fVar18;
              fVar19 = fVar21;
              fVar20 = fVar29;
            }
            if (((double)fVar20 < dVar35) ||
               (((fVar19 == fVar24 && (fVar24 == fVar28)) ||
                ((float)((uint)(fVar36 - _LC2) & uVar32) < (float)((uint)(fVar28 - _LC2) & uVar32)))
               )) {
              uVar22 = uVar23;
              if (iVar10 < iVar3 + -1) {
LAB_0010133b:
                local_74 = iVar4 + -1;
                pfVar1 = (float *)(lVar12 + (long)((iVar6 + iVar9) * 4) * 4);
                fVar19 = *pfVar1;
                fVar24 = pfVar1[1];
                fVar21 = pfVar1[2];
                fVar20 = (float)((uint)(fVar19 - fVar31) & uVar22);
                fVar30 = (float)((uint)(fVar24 - fVar25) & uVar22);
                fVar18 = fVar24;
                fVar26 = fVar25;
                if (fVar30 <= fVar20) {
                  fVar18 = fVar19;
                  fVar26 = fVar31;
                  fVar31 = fVar25;
                  fVar19 = fVar24;
                  fVar20 = fVar30;
                }
                fVar30 = (float)((uint)(fVar21 - fVar33) & uVar22);
                fVar25 = fVar18;
                fVar24 = fVar21;
                if ((fVar20 < fVar30) &&
                   (fVar20 = (float)((uint)(fVar18 - fVar26) & uVar22), fVar25 = fVar21,
                   fVar24 = fVar19, fVar33 = fVar31, fVar19 = fVar18, fVar30 <= fVar20)) {
                  fVar25 = fVar18;
                  fVar19 = fVar21;
                  fVar20 = fVar30;
                }
                uVar23 = uVar22;
                if (((dVar35 <= (double)fVar20) && ((fVar19 != fVar25 || (fVar25 != fVar24)))) &&
                   ((float)((uint)(fVar24 - _LC2) & uVar22) <=
                    (float)((uint)(fVar33 - _LC2) & uVar22))) goto LAB_0010174b;
                if (iVar10 == 0) {
LAB_0010150c:
                  if (iVar15 < iVar4 + -1) {
LAB_00101515:
                    pfVar1 = (float *)(lVar12 + (long)((iVar5 * iVar15 + iVar10) * 4) * 4);
                    pfVar2 = (float *)(lVar12 + (long)((iVar5 * iVar16 + iVar9) * 4) * 4);
                    fVar31 = *pfVar1;
                    fVar25 = pfVar1[1];
                    fVar33 = *pfVar2;
                    fVar19 = pfVar2[1];
                    fVar24 = pfVar2[2];
                    fVar21 = (float)((uint)(fVar33 - fVar31) & uVar22);
                    fVar26 = (float)((uint)(fVar19 - fVar25) & uVar22);
                    fVar20 = fVar19;
                    fVar18 = fVar31;
                    if (fVar26 <= fVar21) {
                      fVar20 = fVar33;
                      fVar33 = fVar19;
                      fVar18 = fVar25;
                      fVar25 = fVar31;
                      fVar21 = fVar26;
                    }
                    fVar30 = (float)((uint)(fVar24 - pfVar1[2]) & uVar22);
                    fVar31 = fVar20;
                    fVar19 = fVar24;
                    fVar26 = pfVar1[2];
                    if ((fVar21 < fVar30) &&
                       (fVar21 = (float)((uint)(fVar20 - fVar25) & uVar22), fVar31 = fVar24,
                       fVar19 = fVar33, fVar33 = fVar20, fVar26 = fVar18, fVar30 <= fVar21)) {
                      fVar31 = fVar20;
                      fVar33 = fVar24;
                      fVar21 = fVar30;
                    }
                    if (((dVar34 + *(double *)(param_2 + 8) <= (double)fVar21) &&
                        ((fVar33 != fVar31 || (fVar31 != fVar19)))) &&
                       ((float)((uint)(fVar19 - _LC2) & uVar22) <=
                        (float)((uint)(fVar26 - _LC2) & uVar22))) goto LAB_0010174b;
                  }
                }
                else if (iVar15 < local_74) goto LAB_00101410;
              }
              else {
LAB_0010161b:
                local_74 = iVar4 + -1;
                if (iVar15 < local_74) {
                  iVar5 = *(int *)(param_1 + 8);
                  dVar34 = *(double *)param_2;
                  lVar12 = *(long *)param_1;
                  uVar22 = uVar23;
                  iVar10 = iVar8;
LAB_00101410:
                  pfVar1 = (float *)(lVar12 + (long)((iVar10 + -1 + iVar5 * iVar16) * 4) * 4);
                  fVar31 = *pfVar1;
                  fVar25 = pfVar1[1];
                  fVar33 = pfVar1[2];
                  pfVar1 = (float *)(lVar12 + (long)((iVar5 * iVar15 + iVar10) * 4) * 4);
                  fVar19 = *pfVar1;
                  fVar24 = pfVar1[1];
                  fVar21 = (float)((uint)(fVar31 - fVar19) & uVar22);
                  fVar26 = (float)((uint)(fVar25 - fVar24) & uVar22);
                  fVar20 = fVar25;
                  fVar18 = fVar24;
                  if (fVar26 <= fVar21) {
                    fVar20 = fVar31;
                    fVar31 = fVar25;
                    fVar18 = fVar19;
                    fVar19 = fVar24;
                    fVar21 = fVar26;
                  }
                  fVar30 = (float)((uint)(fVar33 - pfVar1[2]) & uVar22);
                  fVar25 = fVar20;
                  fVar24 = fVar33;
                  fVar26 = pfVar1[2];
                  if ((fVar21 < fVar30) &&
                     (fVar21 = (float)((uint)(fVar20 - fVar18) & uVar22), fVar25 = fVar33,
                     fVar24 = fVar31, fVar31 = fVar20, fVar26 = fVar19, fVar30 <= fVar21)) {
                    fVar25 = fVar20;
                    fVar31 = fVar33;
                    fVar21 = fVar30;
                  }
                  if ((*(double *)(param_2 + 8) + dVar34 <= (double)fVar21) &&
                     (((fVar31 != fVar25 || (fVar25 != fVar24)) &&
                      ((float)((uint)(fVar24 - _LC2) & uVar22) <=
                       (float)((uint)(fVar26 - _LC2) & uVar22))))) goto LAB_0010174b;
                  if (iVar10 < iVar3 + -1) goto LAB_0010150c;
                }
              }
            }
            else {
LAB_0010174b:
              local_60 = iVar10;
              iStack_5c = iVar15;
              if (piVar13 == piVar11) {
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                _M_realloc_insert<std::pair<int,int>>
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           &local_58,piVar13,&local_60);
                piVar13 = local_48;
                piVar11 = piStack_50;
                uVar23 = _LC1;
                uVar32 = _LC1;
              }
              else {
                piStack_50 = piVar11 + 2;
                *(ulong *)piVar11 = CONCAT44(iVar15,iVar10);
                piVar11 = piStack_50;
              }
            }
LAB_001015f8:
            iVar10 = iVar9;
            if (iVar3 == iVar9) goto LAB_00101640;
          }
        } while( true );
      }
LAB_00101640:
      bVar17 = iVar15 != iVar14;
      iVar15 = iVar16;
    } while (bVar17);
    if (local_58 != piVar11) {
      lVar12 = *(long *)param_1;
      iVar3 = *(int *)(param_1 + 8);
      piVar7 = local_58;
      do {
        pfVar1 = (float *)(lVar12 + (long)((piVar7[1] * iVar3 + *piVar7) * 4) * 4);
        fVar31 = pfVar1[1];
        fVar25 = *pfVar1;
        fVar33 = pfVar1[2];
        if (fVar25 < fVar31) {
          fVar19 = fVar25;
          fVar25 = fVar31;
          if (fVar33 < fVar31) goto LAB_001016c5;
        }
        else if ((fVar33 < fVar25) && (fVar19 = fVar31, fVar31 < fVar25)) {
LAB_001016c5:
          fVar25 = fVar33;
          if (fVar33 <= fVar19) {
            fVar25 = fVar19;
          }
        }
        piVar7 = piVar7 + 2;
        pfVar1[2] = fVar25;
        *(ulong *)pfVar1 = CONCAT44(fVar25,fVar25);
      } while (piVar7 != piVar11);
    }
  }
  if (local_58 == (int *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(local_58,(long)piVar13 - (long)local_58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101080:
  iStack_5c = iVar14;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
  _M_realloc_insert<std::pair<int,int>>
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_58,piVar11,
             &local_60);
  piVar11 = piStack_50;
  piVar13 = local_48;
  uVar23 = _LC1;
  uVar27 = _LC1;
  uVar32 = _LC1;
  uVar22 = _LC1;
  goto LAB_00100e48;
}



/* msdfgen::msdfErrorCorrection_legacy(msdfgen::BitmapRef<float, 3> const&, msdfgen::Vector2 const&)
    */

void msdfgen::msdfErrorCorrection_legacy(BitmapRef *param_1,Vector2 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  int local_74;
  int local_60;
  int iStack_5c;
  int *local_58;
  int *piStack_50;
  int *local_48;
  long local_40;
  
  iVar3 = *(int *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *(int *)(param_1 + 0xc);
  local_58 = (int *)0x0;
  piStack_50 = (int *)0x0;
  local_48 = (int *)0x0;
  if (iVar4 < 1) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar11 = (int *)0x0;
    piVar13 = (int *)0x0;
    uVar23 = _LC1;
    uVar32 = _LC1;
    uVar22 = _LC1;
    iVar15 = 0;
    do {
      iVar14 = iVar15;
      iVar16 = 0;
      iVar15 = iVar14 + 1;
      uVar27 = _LC1;
      if (0 < iVar3) {
LAB_00101afc:
        iVar8 = iVar16 + 1;
        iVar10 = iVar16;
        iVar9 = iVar8;
        iVar6 = iVar16;
        if (iVar16 < iVar3 + -1) goto LAB_00101d23;
LAB_00101b0e:
        if (iVar14 != 0) {
          pfVar1 = (float *)(*(long *)param_1 +
                            (long)(((iVar14 + -1) * *(int *)(param_1 + 8) + iVar10) * 3) * 4);
          pfVar2 = (float *)(*(long *)param_1 +
                            (long)((*(int *)(param_1 + 8) * iVar14 + iVar10) * 3) * 4);
          fVar31 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar33 = *pfVar2;
          fVar19 = pfVar2[1];
          fVar24 = pfVar1[2];
          fVar21 = (float)((uint)(fVar31 - fVar33) & uVar32);
          fVar26 = (float)((uint)(fVar25 - fVar19) & uVar32);
          fVar20 = fVar25;
          fVar18 = fVar19;
          if (fVar26 <= fVar21) {
            fVar20 = fVar31;
            fVar31 = fVar25;
            fVar18 = fVar33;
            fVar33 = fVar19;
            fVar21 = fVar26;
          }
          fVar28 = (float)((uint)(fVar24 - pfVar2[2]) & uVar32);
          fVar25 = fVar20;
          fVar19 = fVar31;
          fVar26 = pfVar2[2];
          fVar30 = fVar24;
          if ((fVar21 < fVar28) &&
             (fVar18 = (float)((uint)(fVar20 - fVar18) & uVar32), fVar19 = fVar24, fVar26 = fVar33,
             fVar30 = fVar31, fVar21 = fVar28, fVar18 < fVar28)) {
            fVar25 = fVar24;
            fVar19 = fVar20;
            fVar21 = fVar18;
          }
          if ((*(double *)(param_2 + 8) <= (double)fVar21) &&
             (((fVar19 != fVar25 || (fVar25 != fVar30)) &&
              ((float)((uint)(fVar30 - _LC2) & uVar32) <= (float)((uint)(fVar26 - _LC2) & uVar32))))
             ) goto LAB_00101e3c;
        }
        if (iVar14 < iVar4 + -1) {
          pfVar1 = (float *)(*(long *)param_1 +
                            (long)((*(int *)(param_1 + 8) * iVar15 + iVar10) * 3) * 4);
          pfVar2 = (float *)(*(long *)param_1 +
                            (long)((*(int *)(param_1 + 8) * iVar14 + iVar10) * 3) * 4);
          fVar31 = *pfVar1;
          fVar25 = pfVar1[1];
          fVar33 = *pfVar2;
          fVar19 = pfVar2[1];
          fVar24 = pfVar1[2];
          fVar21 = (float)((uint)(fVar31 - fVar33) & uVar22);
          fVar26 = (float)((uint)(fVar25 - fVar19) & uVar22);
          fVar20 = fVar25;
          fVar18 = fVar19;
          if (fVar26 <= fVar21) {
            fVar20 = fVar31;
            fVar31 = fVar25;
            fVar18 = fVar33;
            fVar33 = fVar19;
            fVar21 = fVar26;
          }
          fVar28 = (float)((uint)(fVar24 - pfVar2[2]) & uVar22);
          fVar25 = fVar20;
          fVar19 = fVar31;
          fVar26 = pfVar2[2];
          fVar30 = fVar24;
          if ((fVar21 < fVar28) &&
             (fVar18 = (float)((uint)(fVar20 - fVar18) & uVar22), fVar19 = fVar24, fVar26 = fVar33,
             fVar30 = fVar31, fVar21 = fVar28, fVar18 < fVar28)) {
            fVar25 = fVar24;
            fVar19 = fVar20;
            fVar21 = fVar18;
          }
          if (((*(double *)(param_2 + 8) <= (double)fVar21) &&
              ((fVar19 != fVar25 || (fVar25 != fVar30)))) &&
             ((float)((uint)(fVar30 - _LC2) & uVar22) <= (float)((uint)(fVar26 - _LC2) & uVar22)))
          goto LAB_00101e3c;
        }
LAB_00101d08:
        iVar5 = iVar16;
        iVar16 = iVar8;
        if (iVar9 < iVar3) {
          do {
            iVar10 = iVar16;
            iVar9 = 1;
            iVar6 = 0;
            if (iVar16 == 0) {
LAB_00101d23:
              iVar16 = iVar6;
              pfVar1 = (float *)(*(long *)param_1 +
                                (long)((*(int *)(param_1 + 8) * iVar14 + iVar9) * 3) * 4);
              pfVar2 = (float *)(*(long *)param_1 +
                                (long)((*(int *)(param_1 + 8) * iVar14 + iVar10) * 3) * 4);
              fVar31 = *pfVar1;
              fVar25 = pfVar1[1];
              fVar33 = *pfVar2;
              fVar19 = pfVar2[1];
              fVar24 = pfVar1[2];
              fVar21 = (float)((uint)(fVar31 - fVar33) & uVar27);
              fVar26 = (float)((uint)(fVar25 - fVar19) & uVar27);
              fVar20 = fVar25;
              fVar18 = fVar33;
              if (fVar26 <= fVar21) {
                fVar20 = fVar31;
                fVar31 = fVar25;
                fVar18 = fVar19;
                fVar19 = fVar33;
                fVar21 = fVar26;
              }
              fVar28 = (float)((uint)(fVar24 - pfVar2[2]) & uVar27);
              fVar25 = fVar20;
              fVar33 = fVar31;
              fVar26 = pfVar2[2];
              fVar30 = fVar24;
              if ((fVar21 < fVar28) &&
                 (fVar19 = (float)((uint)(fVar20 - fVar19) & uVar27), fVar33 = fVar24,
                 fVar26 = fVar18, fVar30 = fVar31, fVar21 = fVar28, fVar19 < fVar28)) {
                fVar25 = fVar24;
                fVar33 = fVar20;
                fVar21 = fVar19;
              }
              if ((double)fVar21 < *(double *)param_2) {
                iVar8 = iVar16 + 1;
                goto LAB_00101b0e;
              }
              if (((fVar33 == fVar25) && (iVar8 = iVar16 + 1, fVar25 == fVar30)) ||
                 (iVar8 = iVar16 + 1,
                 (float)((uint)(fVar26 - _LC2) & uVar27) < (float)((uint)(fVar30 - _LC2) & uVar27)))
              goto LAB_00101b0e;
LAB_00101e3c:
              piVar7 = piVar11;
              local_60 = iVar10;
              if (piVar11 == piVar13) goto LAB_00101f40;
            }
            else {
              pfVar1 = (float *)(*(long *)param_1 +
                                (long)((iVar5 + *(int *)(param_1 + 8) * iVar14) * 3) * 4);
              pfVar2 = (float *)(*(long *)param_1 +
                                (long)((*(int *)(param_1 + 8) * iVar14 + iVar16) * 3) * 4);
              fVar31 = *pfVar1;
              fVar25 = pfVar1[1];
              fVar33 = *pfVar2;
              fVar19 = pfVar2[1];
              fVar24 = pfVar1[2];
              fVar21 = (float)((uint)(fVar31 - fVar33) & uVar23);
              fVar26 = (float)((uint)(fVar25 - fVar19) & uVar23);
              fVar20 = fVar25;
              fVar18 = fVar19;
              if (fVar26 <= fVar21) {
                fVar20 = fVar31;
                fVar31 = fVar25;
                fVar18 = fVar33;
                fVar33 = fVar19;
                fVar21 = fVar26;
              }
              fVar28 = (float)((uint)(fVar24 - pfVar2[2]) & uVar23);
              fVar25 = fVar20;
              fVar19 = fVar31;
              fVar26 = pfVar2[2];
              fVar30 = fVar24;
              if ((fVar21 < fVar28) &&
                 (fVar18 = (float)((uint)(fVar20 - fVar18) & uVar23), fVar19 = fVar24,
                 fVar26 = fVar33, fVar30 = fVar31, fVar21 = fVar28, fVar18 < fVar28)) {
                fVar25 = fVar24;
                fVar19 = fVar20;
                fVar21 = fVar18;
              }
              if (((double)fVar21 < *(double *)param_2) ||
                 (((fVar19 == fVar25 && (fVar25 == fVar30)) ||
                  ((float)((uint)(fVar26 - _LC2) & uVar23) < (float)((uint)(fVar30 - _LC2) & uVar23)
                  )))) goto LAB_00101afc;
              iVar9 = iVar5 + 2;
              iVar8 = iVar16 + 1;
              piVar7 = piVar11;
              local_60 = iVar16;
              if (piVar11 == piVar13) goto LAB_00101f40;
            }
            piVar11 = piVar7 + 2;
            *(ulong *)piVar7 = CONCAT44(iVar14,local_60);
            iVar5 = iVar16;
            iStack_5c = iVar14;
            iVar16 = iVar8;
            piStack_50 = piVar11;
            if (iVar3 <= iVar9) break;
          } while( true );
        }
      }
    } while (iVar4 != iVar15);
    if (local_58 != piVar11) {
      lVar12 = *(long *)param_1;
      iVar15 = *(int *)(param_1 + 8);
      piVar7 = local_58;
      do {
        pfVar1 = (float *)(lVar12 + (long)((piVar7[1] * iVar15 + *piVar7) * 3) * 4);
        fVar31 = pfVar1[1];
        fVar25 = *pfVar1;
        fVar33 = pfVar1[2];
        if (fVar25 < fVar31) {
          fVar19 = fVar25;
          fVar25 = fVar31;
          if (fVar33 < fVar31) goto LAB_00101ee5;
        }
        else if ((fVar33 < fVar25) && (fVar19 = fVar31, fVar31 < fVar25)) {
LAB_00101ee5:
          fVar25 = fVar33;
          if (fVar33 <= fVar19) {
            fVar25 = fVar19;
          }
        }
        piVar7 = piVar7 + 2;
        pfVar1[2] = fVar25;
        *(ulong *)pfVar1 = CONCAT44(fVar25,fVar25);
      } while (piVar11 != piVar7);
      piStack_50 = local_58;
    }
    piVar11 = piStack_50;
    uVar23 = _LC1;
    iVar15 = 0;
    uVar32 = _LC1;
    do {
      iVar16 = iVar15 + 1;
      if (0 < iVar3) {
        iVar9 = 1;
        iVar8 = 0;
        do {
          if (iVar3 + -1 <= iVar8) {
            if (iVar8 != 0) goto LAB_001024db;
            goto LAB_001024b8;
          }
          iVar10 = iVar8;
          if (iVar15 != 0) {
            iVar6 = *(int *)(param_1 + 8);
            lVar12 = *(long *)param_1;
            dVar34 = *(double *)param_2;
            iVar5 = (iVar15 + -1) * iVar6;
            dVar35 = *(double *)(param_2 + 8) + dVar34;
            pfVar1 = (float *)(lVar12 + (long)((iVar15 * iVar6 + iVar8) * 3) * 4);
            fVar31 = *pfVar1;
            fVar25 = pfVar1[1];
            fVar33 = pfVar1[2];
            uVar22 = uVar23;
            goto LAB_001021fb;
          }
          uVar22 = _LC1;
          if (iVar8 != 0) {
            if (iVar4 == 1) goto LAB_001024b8;
            iVar6 = *(int *)(param_1 + 8);
            dVar34 = *(double *)param_2;
            lVar12 = *(long *)param_1;
            goto LAB_001022d0;
          }
          iVar10 = iVar9;
          if (iVar4 != 1) {
            iVar6 = *(int *)(param_1 + 8);
            dVar34 = *(double *)param_2;
            lVar12 = *(long *)param_1;
            iVar10 = iVar8;
            goto LAB_001023d5;
          }
          while ((iVar9 = iVar10 + 1, iVar8 = iVar10, iVar10 != 0 && (iVar15 != 0))) {
            iVar6 = *(int *)(param_1 + 8);
            lVar12 = *(long *)param_1;
            dVar34 = *(double *)param_2;
            iVar5 = (iVar15 + -1) * iVar6;
            dVar35 = *(double *)(param_2 + 8) + dVar34;
            pfVar1 = (float *)(lVar12 + (long)((iVar10 + -1 + iVar5) * 3) * 4);
            fVar19 = *pfVar1;
            fVar24 = pfVar1[1];
            fVar21 = pfVar1[2];
            pfVar1 = (float *)(lVar12 + (long)((iVar6 * iVar15 + iVar10) * 3) * 4);
            fVar31 = *pfVar1;
            fVar25 = pfVar1[1];
            fVar33 = pfVar1[2];
            fVar20 = (float)((uint)(fVar19 - fVar31) & uVar32);
            fVar28 = (float)((uint)(fVar24 - fVar25) & uVar32);
            fVar18 = fVar24;
            fVar26 = fVar31;
            fVar30 = fVar25;
            if (fVar28 <= fVar20) {
              fVar18 = fVar19;
              fVar19 = fVar24;
              fVar26 = fVar25;
              fVar30 = fVar31;
              fVar20 = fVar28;
            }
            fVar29 = (float)((uint)(fVar21 - fVar33) & uVar32);
            fVar24 = fVar18;
            fVar28 = fVar21;
            fVar36 = fVar33;
            if ((fVar20 < fVar29) &&
               (fVar20 = (float)((uint)(fVar18 - fVar30) & uVar32), fVar24 = fVar21, fVar28 = fVar19
               , fVar19 = fVar18, fVar36 = fVar26, fVar29 <= fVar20)) {
              fVar24 = fVar18;
              fVar19 = fVar21;
              fVar20 = fVar29;
            }
            if (((double)fVar20 < dVar35) ||
               (((fVar19 == fVar24 && (fVar24 == fVar28)) ||
                ((float)((uint)(fVar36 - _LC2) & uVar32) < (float)((uint)(fVar28 - _LC2) & uVar32)))
               )) {
              uVar22 = uVar23;
              if (iVar10 < iVar3 + -1) {
LAB_001021fb:
                local_74 = iVar4 + -1;
                pfVar1 = (float *)(lVar12 + (long)((iVar5 + iVar9) * 3) * 4);
                fVar19 = *pfVar1;
                fVar24 = pfVar1[1];
                fVar21 = pfVar1[2];
                fVar20 = (float)((uint)(fVar19 - fVar31) & uVar22);
                fVar30 = (float)((uint)(fVar24 - fVar25) & uVar22);
                fVar18 = fVar24;
                fVar26 = fVar25;
                if (fVar30 <= fVar20) {
                  fVar18 = fVar19;
                  fVar26 = fVar31;
                  fVar31 = fVar25;
                  fVar19 = fVar24;
                  fVar20 = fVar30;
                }
                fVar30 = (float)((uint)(fVar21 - fVar33) & uVar22);
                fVar25 = fVar18;
                fVar24 = fVar21;
                if ((fVar20 < fVar30) &&
                   (fVar20 = (float)((uint)(fVar18 - fVar26) & uVar22), fVar25 = fVar21,
                   fVar24 = fVar19, fVar33 = fVar31, fVar19 = fVar18, fVar30 <= fVar20)) {
                  fVar25 = fVar18;
                  fVar19 = fVar21;
                  fVar20 = fVar30;
                }
                uVar23 = uVar22;
                if (((dVar35 <= (double)fVar20) && ((fVar19 != fVar25 || (fVar25 != fVar24)))) &&
                   ((float)((uint)(fVar24 - _LC2) & uVar22) <=
                    (float)((uint)(fVar33 - _LC2) & uVar22))) goto LAB_0010260b;
                if (iVar10 == 0) {
LAB_001023cc:
                  if (iVar15 < iVar4 + -1) {
LAB_001023d5:
                    pfVar1 = (float *)(lVar12 + (long)((iVar6 * iVar15 + iVar10) * 3) * 4);
                    pfVar2 = (float *)(lVar12 + (long)((iVar6 * iVar16 + iVar9) * 3) * 4);
                    fVar31 = *pfVar1;
                    fVar25 = pfVar1[1];
                    fVar33 = *pfVar2;
                    fVar19 = pfVar2[1];
                    fVar24 = pfVar2[2];
                    fVar21 = (float)((uint)(fVar33 - fVar31) & uVar22);
                    fVar26 = (float)((uint)(fVar19 - fVar25) & uVar22);
                    fVar20 = fVar19;
                    fVar18 = fVar31;
                    if (fVar26 <= fVar21) {
                      fVar20 = fVar33;
                      fVar33 = fVar19;
                      fVar18 = fVar25;
                      fVar25 = fVar31;
                      fVar21 = fVar26;
                    }
                    fVar30 = (float)((uint)(fVar24 - pfVar1[2]) & uVar22);
                    fVar31 = fVar20;
                    fVar19 = fVar24;
                    fVar26 = pfVar1[2];
                    if ((fVar21 < fVar30) &&
                       (fVar21 = (float)((uint)(fVar20 - fVar25) & uVar22), fVar31 = fVar24,
                       fVar19 = fVar33, fVar33 = fVar20, fVar26 = fVar18, fVar30 <= fVar21)) {
                      fVar31 = fVar20;
                      fVar33 = fVar24;
                      fVar21 = fVar30;
                    }
                    if (((dVar34 + *(double *)(param_2 + 8) <= (double)fVar21) &&
                        ((fVar33 != fVar31 || (fVar31 != fVar19)))) &&
                       ((float)((uint)(fVar19 - _LC2) & uVar22) <=
                        (float)((uint)(fVar26 - _LC2) & uVar22))) goto LAB_0010260b;
                  }
                }
                else if (iVar15 < local_74) goto LAB_001022d0;
              }
              else {
LAB_001024db:
                local_74 = iVar4 + -1;
                if (iVar15 < local_74) {
                  iVar6 = *(int *)(param_1 + 8);
                  dVar34 = *(double *)param_2;
                  lVar12 = *(long *)param_1;
                  uVar22 = uVar23;
                  iVar10 = iVar8;
LAB_001022d0:
                  pfVar1 = (float *)(lVar12 + (long)((iVar10 + -1 + iVar6 * iVar16) * 3) * 4);
                  fVar31 = *pfVar1;
                  fVar25 = pfVar1[1];
                  fVar33 = pfVar1[2];
                  pfVar1 = (float *)(lVar12 + (long)((iVar6 * iVar15 + iVar10) * 3) * 4);
                  fVar19 = *pfVar1;
                  fVar24 = pfVar1[1];
                  fVar21 = (float)((uint)(fVar31 - fVar19) & uVar22);
                  fVar26 = (float)((uint)(fVar25 - fVar24) & uVar22);
                  fVar20 = fVar25;
                  fVar18 = fVar24;
                  if (fVar26 <= fVar21) {
                    fVar20 = fVar31;
                    fVar31 = fVar25;
                    fVar18 = fVar19;
                    fVar19 = fVar24;
                    fVar21 = fVar26;
                  }
                  fVar30 = (float)((uint)(fVar33 - pfVar1[2]) & uVar22);
                  fVar25 = fVar20;
                  fVar24 = fVar33;
                  fVar26 = pfVar1[2];
                  if ((fVar21 < fVar30) &&
                     (fVar21 = (float)((uint)(fVar20 - fVar18) & uVar22), fVar25 = fVar33,
                     fVar24 = fVar31, fVar31 = fVar20, fVar26 = fVar19, fVar30 <= fVar21)) {
                    fVar25 = fVar20;
                    fVar31 = fVar33;
                    fVar21 = fVar30;
                  }
                  if ((*(double *)(param_2 + 8) + dVar34 <= (double)fVar21) &&
                     (((fVar31 != fVar25 || (fVar25 != fVar24)) &&
                      ((float)((uint)(fVar24 - _LC2) & uVar22) <=
                       (float)((uint)(fVar26 - _LC2) & uVar22))))) goto LAB_0010260b;
                  if (iVar10 < iVar3 + -1) goto LAB_001023cc;
                }
              }
            }
            else {
LAB_0010260b:
              local_60 = iVar10;
              iStack_5c = iVar15;
              if (piVar13 == piVar11) {
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                _M_realloc_insert<std::pair<int,int>>
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           &local_58,piVar13,&local_60);
                piVar13 = local_48;
                piVar11 = piStack_50;
                uVar23 = _LC1;
                uVar32 = _LC1;
              }
              else {
                piStack_50 = piVar11 + 2;
                *(ulong *)piVar11 = CONCAT44(iVar15,iVar10);
                piVar11 = piStack_50;
              }
            }
LAB_001024b8:
            iVar10 = iVar9;
            if (iVar3 == iVar9) goto LAB_00102500;
          }
        } while( true );
      }
LAB_00102500:
      bVar17 = iVar15 != iVar14;
      iVar15 = iVar16;
    } while (bVar17);
    if (local_58 != piVar11) {
      lVar12 = *(long *)param_1;
      iVar3 = *(int *)(param_1 + 8);
      piVar7 = local_58;
      do {
        pfVar1 = (float *)(lVar12 + (long)((piVar7[1] * iVar3 + *piVar7) * 3) * 4);
        fVar31 = pfVar1[1];
        fVar25 = *pfVar1;
        fVar33 = pfVar1[2];
        if (fVar25 < fVar31) {
          fVar19 = fVar25;
          fVar25 = fVar31;
          if (fVar33 < fVar31) goto LAB_00102585;
        }
        else if ((fVar33 < fVar25) && (fVar19 = fVar31, fVar31 < fVar25)) {
LAB_00102585:
          fVar25 = fVar33;
          if (fVar33 <= fVar19) {
            fVar25 = fVar19;
          }
        }
        piVar7 = piVar7 + 2;
        pfVar1[2] = fVar25;
        *(ulong *)pfVar1 = CONCAT44(fVar25,fVar25);
      } while (piVar7 != piVar11);
    }
  }
  if (local_58 == (int *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(local_58,(long)piVar13 - (long)local_58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101f40:
  iStack_5c = iVar14;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
  _M_realloc_insert<std::pair<int,int>>
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_58,piVar11,
             &local_60);
  piVar11 = piStack_50;
  piVar13 = local_48;
  uVar23 = _LC1;
  uVar27 = _LC1;
  uVar32 = _LC1;
  uVar22 = _LC1;
  goto LAB_00101d08;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> >
   >::_M_realloc_insert<std::pair<int, int> >(__gnu_cxx::__normal_iterator<std::pair<int, int>*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > >, std::pair<int, int>&&)
    */

void __thiscall
std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
_M_realloc_insert<std::pair<int,int>>
          (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar5 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00102940;
    uVar7 = 0xfffffffffffffff;
    if (uVar5 + 1 < 0x1000000000000000) {
      uVar7 = uVar5 + 1;
    }
    uVar7 = uVar7 << 3;
LAB_0010294a:
    puVar6 = (undefined8 *)operator_new(uVar7);
    lVar10 = uVar7 + (long)puVar6;
    puVar9 = puVar6 + 1;
    *(undefined8 *)((long)puVar6 + ((long)param_2 - (long)puVar2)) = *param_3;
    if (param_2 != puVar2) {
LAB_001028b9:
      puVar4 = puVar6;
      puVar8 = puVar2;
      do {
        puVar9 = puVar4;
        uVar3 = *puVar8;
        puVar8 = puVar8 + 1;
        *puVar9 = uVar3;
        puVar4 = puVar9 + 1;
      } while (puVar9 + 1 != (undefined8 *)(((long)param_2 - (long)puVar2) + (long)puVar6));
      puVar9 = puVar9 + 2;
    }
    if (param_2 == puVar1) goto LAB_00102909;
  }
  else {
    uVar7 = uVar5 * 2;
    if (uVar7 < uVar5) {
LAB_00102940:
      uVar7 = 0x7ffffffffffffff8;
      goto LAB_0010294a;
    }
    if (uVar7 != 0) {
      if (0xfffffffffffffff < uVar7) {
        uVar7 = 0xfffffffffffffff;
      }
      uVar7 = uVar7 * 8;
      goto LAB_0010294a;
    }
    lVar10 = 0;
    puVar6 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x8;
    *(undefined8 *)((long)param_2 - (long)puVar2) = *param_3;
    if (param_2 != puVar2) goto LAB_001028b9;
  }
  memcpy(puVar9,param_2,(long)puVar1 - (long)param_2);
  puVar9 = (undefined8 *)((long)puVar9 + ((long)puVar1 - (long)param_2));
LAB_00102909:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar9;
  *(long *)(this + 0x10) = lVar10;
  return;
}


