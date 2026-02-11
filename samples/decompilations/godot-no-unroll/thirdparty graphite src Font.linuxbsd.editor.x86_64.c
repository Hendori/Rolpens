
/* graphite2::Font::~Font() */

void __thiscall graphite2::Font::~Font(Font *this)

{
  free(*(void **)(this + 0x28));
  return;
}



/* graphite2::Font::~Font() */

void __thiscall graphite2::Font::~Font(Font *this)

{
  free(*(void **)(this + 0x28));
  free(this);
  return;
}



/* graphite2::Font::Font(float, graphite2::Face const&, void const*, gr_font_ops const*) */

void __thiscall
graphite2::Font::Font(Font *this,float param_1,Face *param_2,void *param_3,gr_font_ops *param_4)

{
  long lVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  
  lVar1 = *(long *)(param_2 + 0x78);
  *(undefined ***)this = &PTR__Font_00100208;
  fVar8 = param_1 / (float)*(ushort *)(lVar1 + 0x2c);
  if (param_3 == (void *)0x0) {
    *(Font **)(this + 0x20) = this;
    *(Face **)(this + 0x30) = param_2;
    *(float *)(this + 0x38) = fVar8;
  }
  else {
    *(void **)(this + 0x20) = param_3;
    *(Face **)(this + 0x30) = param_2;
    *(float *)(this + 0x38) = fVar8;
    if ((param_4 != (gr_font_ops *)0x0) &&
       ((*(long *)(param_4 + 8) != 0 || (*(long *)(param_4 + 0x10) != 0)))) {
      this[0x3c] = (Font)0x1;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
      *(undefined8 *)(this + 0x18) = 0;
      uVar7 = *(ulong *)param_4;
      uVar6 = 0x18;
      if (uVar7 < 0x19) {
        uVar6 = uVar7;
      }
      uVar5 = (uint)uVar6;
      if (uVar5 < 8) {
        if ((uVar6 & 4) == 0) {
          if ((uVar5 != 0) && (*(gr_font_ops *)(this + 8) = *param_4, (uVar6 & 2) != 0)) {
            *(undefined2 *)(this + (uVar6 & 0xffffffff) + 6) =
                 *(undefined2 *)(param_4 + ((uVar6 & 0xffffffff) - 2));
          }
        }
        else {
          *(undefined4 *)(this + 8) = *(undefined4 *)param_4;
          *(undefined4 *)(this + (uVar6 & 0xffffffff) + 4) =
               *(undefined4 *)(param_4 + ((uVar6 & 0xffffffff) - 4));
        }
      }
      else {
        *(ulong *)(this + 8) = uVar7;
        *(undefined8 *)(this + (uVar6 & 0xffffffff)) =
             *(undefined8 *)(param_4 + ((uVar6 & 0xffffffff) - 8));
        uVar5 = uVar5 + (int)(this + (8 - ((ulong)(this + 0x10) & 0xfffffffffffffff8))) & 0xfffffff8
        ;
        if (7 < uVar5) {
          uVar4 = 0;
          do {
            uVar7 = (ulong)uVar4;
            uVar4 = uVar4 + 8;
            *(undefined8 *)(((ulong)(this + 0x10) & 0xfffffffffffffff8) + uVar7) =
                 *(undefined8 *)
                  (param_4 +
                  (uVar7 - (long)(this + (8 - ((ulong)(this + 0x10) & 0xfffffffffffffff8)))));
          } while (uVar4 < uVar5);
        }
      }
      goto LAB_0010010c;
    }
  }
  this[0x3c] = (Font)0x0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(code **)(this + 0x10) = graphite2::Face::default_glyph_advance;
LAB_0010010c:
  uVar7 = (ulong)*(ushort *)(*(long *)(param_2 + 0x78) + 0x28);
  pvVar3 = malloc(uVar7 * 4);
  *(void **)(this + 0x28) = pvVar3;
  uVar2 = _LC0;
  if ((pvVar3 != (void *)0x0) && (uVar7 != 0)) {
    uVar6 = 0;
    do {
      *(undefined4 *)((long)pvVar3 + uVar6 * 4) = uVar2;
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
  }
  return;
}


