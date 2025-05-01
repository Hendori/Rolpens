
uint DES_quad_cksum(uchar *input,DES_cblock *output,long length,int out_count,DES_cblock *seed)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  DES_cblock *pauVar7;
  int iVar8;
  
  iVar2 = 1;
  if (0 < out_count) {
    iVar2 = out_count;
  }
  iVar8 = 0;
  uVar5 = *(uint *)*seed;
  uVar3 = *(uint *)(*seed + 4);
  do {
    puVar6 = (ushort *)input;
    if (0 < length) {
      do {
        if (input + (length - (long)puVar6) == (uchar *)0x1) {
          iVar4 = (byte)*puVar6 + uVar5;
          uVar5 = (iVar4 * iVar4 + uVar3 * uVar3) % 0x7fffffff;
          uVar3 = (iVar4 * (uVar3 + 0x4fc732d)) % 0x7fffffff;
          break;
        }
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        iVar4 = uVar1 + uVar5;
        uVar5 = (iVar4 * iVar4 + uVar3 * uVar3) % 0x7fffffff;
        uVar3 = (iVar4 * (uVar3 + 0x4fc732d)) % 0x7fffffff;
      } while ((ushort *)(input + (length - 1U & 0xfffffffffffffffe) + 2) != puVar6);
    }
    pauVar7 = output;
    if (output != (DES_cblock *)0x0) {
      *(uint *)*output = uVar5;
      pauVar7 = output + 1;
      *(uint *)(*output + 4) = uVar3;
    }
    iVar8 = iVar8 + 1;
    if ((3 < iVar8) || (output = pauVar7, iVar2 <= iVar8)) {
      return uVar5;
    }
  } while( true );
}


