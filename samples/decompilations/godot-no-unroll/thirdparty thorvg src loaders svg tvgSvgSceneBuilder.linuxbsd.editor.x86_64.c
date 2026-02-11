
/* svgSceneBuild(SvgLoaderData&, Box, float, float, AspectRatioAlign, AspectRatioMeetOrSlice,
   std::__cxx11::string const&, SvgViewFlag) */

Box * svgSceneBuild(undefined8 param_1_00,undefined8 param_2,float param_3,float param_4,
                   SvgNode *param_1,undefined4 param_6,undefined4 param_7,bool param_8,uint param_9)

{
  long lVar1;
  Box *pBVar2;
  long in_FS_OFFSET;
  float fVar3;
  float local_a8;
  float local_a4;
  undefined8 local_98;
  undefined8 local_90;
  Matrix *local_88;
  Shape *local_80;
  Scene *local_78;
  float local_70;
  undefined4 uStack_6c;
  Shape *local_68 [5];
  long local_40;
  
  pBVar2 = *(Box **)(param_1 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = param_1_00;
  local_90 = param_2;
  if (pBVar2 == (Box *)0x0) goto LAB_001031a4;
  if (*(int *)pBVar2 != 0) {
    pBVar2 = (Box *)0x0;
    goto LAB_001031a4;
  }
  _sceneBuildHelper((SvgLoaderData *)&local_88,param_1,pBVar2,(string *)&local_98,param_8,0,
                    (bool *)0x0);
  local_a8 = param_3;
  local_a4 = param_4;
  if ((param_9 & 4) == 0) {
    tvg::Paint::bounds((float *)local_88,&local_70,(float *)local_68,(float *)&local_90,
                       (bool)((char)&local_90 + '\x04'));
    fVar3 = (float)local_90;
    if ((param_9 & 3) == 0) {
      local_a8 = param_3 * (float)local_90;
      local_98 = CONCAT44(local_68[0]._0_4_,local_70);
    }
    else {
      if ((param_9 & 1) == 0) {
        local_a8 = param_3 * (float)local_90;
      }
      else {
        local_90 = CONCAT44(local_90._4_4_,param_3);
        fVar3 = param_3;
      }
      if ((param_9 & 2) != 0) {
        local_90 = CONCAT44(param_4,(float)local_90);
        goto LAB_00102fe7;
      }
    }
    local_a4 = param_4 * local_90._4_4_;
  }
  else {
    fVar3 = (float)local_90;
  }
LAB_00102fe7:
  if ((_LC7 < (float)((uint)(local_a8 - fVar3) & _LC8)) ||
     (_LC7 < (float)((uint)(local_a4 - local_90._4_4_) & _LC8))) {
    _calculateAspectRatioMatrix
              (local_a8,local_a4,(uint)local_98,local_98._4_4_,local_68,param_6,param_7);
    tvg::Paint::transform(local_88);
  }
  else if ((_LC7 < (float)((uint)local_98 & _LC8)) || (_LC7 < (float)(_LC8 & local_98._4_4_))) {
    tvg::Paint::translate((float)((uint)local_98 ^ _LC5),(float)(local_98._4_4_ ^ _LC5));
  }
  tvg::Shape::gen();
  tvg::Shape::appendRect(0.0,0.0,local_a8,local_a4,0.0,0.0);
  tvg::Scene::gen();
  local_68[0] = local_80;
  local_80 = (Shape *)0x0;
  tvg::Paint::clip(local_78,local_68);
  if (local_68[0] != (Shape *)0x0) {
    (**(code **)(*(long *)local_68[0] + 8))();
  }
  local_68[0] = (Shape *)local_88;
  tvg::Scene::push(local_78,local_68);
  if (local_68[0] != (Shape *)0x0) {
    (**(code **)(*(long *)local_68[0] + 8))();
  }
  tvg::Scene::gen();
  local_68[0] = (Shape *)local_78;
  local_78 = (Scene *)0x0;
  tvg::Scene::push(CONCAT44(uStack_6c,local_70),local_68);
  if (local_68[0] != (Shape *)0x0) {
    (**(code **)(*(long *)local_68[0] + 8))();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  pBVar2 = (Box *)CONCAT44(uStack_6c,local_70);
  *(undefined8 *)(lVar1 + 0x48) = local_90;
  *(float *)(lVar1 + 0x38) = local_a8;
  *(float *)(lVar1 + 0x3c) = local_a4;
  *(uint *)(lVar1 + 0x40) = (uint)local_98;
  *(uint *)(lVar1 + 0x44) = local_98._4_4_;
  if (local_78 != (Scene *)0x0) {
    tvg::Scene::~Scene(local_78);
  }
  if (local_80 != (Shape *)0x0) {
    tvg::Shape::~Shape(local_80);
  }
LAB_001031a4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pBVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


