
/* graphite2::Rect::hitTest(graphite2::Rect&) */

bool __thiscall graphite2::Rect::hitTest(Rect *this,Rect *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(float *)this < *(float *)(param_1 + 8) || *(float *)this == *(float *)(param_1 + 8)) &&
      (*(float *)param_1 < *(float *)(this + 8) || *(float *)param_1 == *(float *)(this + 8))) &&
     (*(float *)(this + 4) < *(float *)(param_1 + 0xc) ||
      *(float *)(this + 4) == *(float *)(param_1 + 0xc))) {
    bVar1 = *(float *)(param_1 + 4) < *(float *)(this + 0xc) ||
            *(float *)(param_1 + 4) == *(float *)(this + 0xc);
  }
  return bVar1;
}



/* graphite2::Rect::overlap(graphite2::Position&, graphite2::Rect&, graphite2::Position&) */

undefined8 __thiscall
graphite2::Rect::overlap(Rect *this,Position *param_1,Rect *param_2,Position *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (*(float *)this + *(float *)param_1) - (*(float *)(param_2 + 8) + *(float *)param_3);
  fVar1 = (*(float *)param_3 + *(float *)param_2) - (*(float *)param_1 + *(float *)(this + 8));
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = (*(float *)(this + 4) + *(float *)(param_1 + 4)) -
          (*(float *)(param_2 + 0xc) + *(float *)(param_3 + 4));
  fVar2 = (*(float *)(param_3 + 4) + *(float *)(param_2 + 4)) -
          (*(float *)(param_1 + 4) + *(float *)(this + 0xc));
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return CONCAT44(fVar1,fVar3);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* boundmin(float, float, float, float&) */

float boundmin(float param_1,float param_2,float param_3,float *param_4)

{
  if ((param_1 < param_2) && (param_1 < param_3)) {
    *param_4 = 0.0;
    return param_1;
  }
  if (param_3 <= param_2) {
    *param_4 = (float)((uint)(param_1 - param_3) & __LC1);
    return param_3;
  }
  *param_4 = (float)((uint)(param_1 - param_2) & __LC1);
  return param_2;
}


