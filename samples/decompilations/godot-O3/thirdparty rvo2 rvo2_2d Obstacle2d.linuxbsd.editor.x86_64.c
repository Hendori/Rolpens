
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RVO2D::Obstacle2D::Obstacle2D() */

void __thiscall RVO2D::Obstacle2D::Obstacle2D(Obstacle2D *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00100048;
  uVar1 = __LC0;
  *this = (Obstacle2D)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = uVar2;
  return;
}


