/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RVO2D::Obstacle2D::Obstacle2D() */void RVO2D::Obstacle2D::Obstacle2D(Obstacle2D *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   uVar2 = _UNK_00100048;
   uVar1 = __LC0;
   *this = (Obstacle2D)0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 8 ) ) = 0;
   }

   *(undefined4*)( this + 0x30 ) = 1;
   *(undefined8*)( this + 0x38 ) = 0;
   *(undefined8*)( this + 0x20 ) = uVar1;
   *(undefined8*)( this + 0x28 ) = uVar2;
   return;
}

