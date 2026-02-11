
undefined8 gr_slot_next_in_segment(undefined8 *param_1)

{
  return *param_1;
}



undefined8 gr_slot_prev_in_segment(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 gr_slot_attached_to(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



undefined8 gr_slot_first_attachment(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



undefined8 gr_slot_next_sibling_attachment(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



short gr_slot_gid(long param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x12);
  if (sVar1 == 0) {
    sVar1 = *(short *)(param_1 + 0x10);
  }
  return sVar1;
}



undefined4 gr_slot_origin_X(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



undefined4 gr_slot_origin_Y(long param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float gr_slot_advance_X(long param_1,long param_2,long param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *(float *)(param_1 + 0x50);
  if (param_3 == 0) {
    return fVar7;
  }
  uVar4 = *(ushort *)(param_1 + 0x12);
  fVar2 = *(float *)(param_3 + 0x38);
  if (uVar4 == 0) {
    uVar4 = *(ushort *)(param_1 + 0x10);
  }
  if (((param_2 == 0) || (uVar6 = (ulong)uVar4, *(char *)(param_3 + 0x3c) == '\0')) ||
     (*(ushort *)(*(long *)(param_2 + 0x78) + 0x28) <= uVar4)) {
    fVar7 = fVar7 * fVar2;
  }
  else {
    lVar5 = graphite2::GlyphCache::glyph((ushort)*(long *)(param_2 + 0x78));
    fVar3 = *(float *)(lVar5 + 0x10);
    pfVar1 = (float *)(*(long *)(param_3 + 0x28) + uVar6 * 4);
    fVar8 = *pfVar1;
    if (fVar8 == __LC0) {
      fVar8 = (float)(**(code **)(param_3 + 0x10))(*(undefined8 *)(param_3 + 0x20),uVar6);
      *pfVar1 = fVar8;
      fVar8 = *(float *)(*(long *)(param_3 + 0x28) + uVar6 * 4);
    }
    fVar7 = fVar8 + fVar2 * (fVar7 - fVar3);
  }
  return fVar7;
}



float gr_slot_advance_Y(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x54);
  if (param_3 != 0) {
    fVar1 = fVar1 * *(float *)(param_3 + 0x38);
  }
  return fVar1;
}



undefined4 gr_slot_before(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



undefined4 gr_slot_after(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



undefined4 gr_slot_index(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



void gr_slot_attr(void)

{
  graphite2::Slot::getAttr();
  return;
}



byte gr_slot_can_insert_before(long param_1)

{
  return (*(byte *)(param_1 + 0x6c) >> 1 ^ 1) & 1;
}



undefined4 gr_slot_original(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



void gr_slot_linebreak_before(long param_1)

{
  Slot *pSVar1;
  
  pSVar1 = *(Slot **)(param_1 + 8);
  graphite2::Slot::sibling(pSVar1);
  *(undefined8 *)pSVar1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


