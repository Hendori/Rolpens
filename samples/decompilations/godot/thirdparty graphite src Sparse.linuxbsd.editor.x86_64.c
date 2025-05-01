
/* graphite2::sparse::~sparse() */

void __thiscall graphite2::sparse::~sparse(sparse *this)

{
  if (*(undefined8 **)this != &empty_chunk) {
    free(*(undefined8 **)this);
    return;
  }
  return;
}



/* graphite2::sparse::operator[](unsigned short) const */

undefined4 __thiscall graphite2::sparse::operator[](sparse *this,ushort param_1)

{
  ulong *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar2 = (ushort)(param_1 / 0x30 - *(short *)(this + 8)) >> 0xf;
  puVar1 = (ulong *)(*(long *)this + ((ulong)(-(uint)uVar2 & (uint)param_1) / 0x30) * 8);
  uVar5 = (*puVar1 & 0xffffffffffff) >>
          (((char)((ulong)param_1 / 0x30) * '0' - (char)param_1) + 0x2fU & 0x3f);
  uVar3 = (uint)uVar2 & (uint)uVar5;
  uVar5 = (uVar5 >> 1) - (uVar5 >> 2 & 0x5555555555555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  iVar4 = -uVar3;
  return CONCAT22((short)((uint)iVar4 >> 0x10),
                  (ushort)iVar4 &
                  *(ushort *)
                   (*(long *)this +
                   (ulong)((uint)(byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) *
                                        0x101010101010101 >> 0x38) +
                           (uint)*(ushort *)((long)puVar1 + 6) & -uVar3) * 2));
}



/* graphite2::sparse::capacity() const */

long __thiscall graphite2::sparse::capacity(sparse *this)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)*(ushort *)(this + 8);
  puVar2 = *(ulong **)this;
  if (uVar3 != 0) {
    lVar4 = 0;
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      uVar1 = (uVar1 & 0xffffffffffff) - ((uVar1 & 0xffffffffffff) >> 1 & 0x5555555555555555);
      uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
      lVar4 = lVar4 + (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    return lVar4;
  }
  return 0;
}


