
/* WARNING: Unknown calling convention */

randint_source * randint_new(randread_source *source)

{
  randint_source *prVar1;
  
  prVar1 = (randint_source *)xmalloc(0x18);
  prVar1->source = source;
  prVar1->randnum = 0;
  prVar1->randmax = 0;
  return prVar1;
}



/* WARNING: Unknown calling convention */

randint_source * randint_all_new(char *name,size_t bytes_bound)

{
  randread_source *source;
  randint_source *prVar1;
  
  source = (randread_source *)randread_new();
  if (source != (randread_source *)0x0) {
    prVar1 = randint_new(source);
    return prVar1;
  }
  return (randint_source *)0x0;
}



/* WARNING: Unknown calling convention */

randread_source * randint_get_source(randint_source *s)

{
  return s->source;
}



/* WARNING: Unknown calling convention */

randint randint_genmax(randint_source *s,randint genmax)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  randread_source *prVar4;
  ulong uVar5;
  byte *pbVar6;
  randint rVar7;
  long lVar8;
  ulong uVar9;
  randint rVar10;
  long in_FS_OFFSET;
  uchar buf [8];
  
  uVar1 = genmax + 1;
  uVar9 = s->randmax;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  prVar4 = s->source;
  rVar10 = s->randnum;
  do {
    if (genmax <= uVar9) {
      if (uVar9 != genmax) goto LAB_001000a1;
LAB_0010012f:
      s->randnum = 0;
      s->randmax = 0;
      rVar7 = rVar10;
      goto LAB_00100138;
    }
    lVar8 = 0;
    uVar5 = uVar9;
    do {
      lVar8 = lVar8 + 1;
      uVar5 = uVar5 * 0x100 + 0xff;
    } while (uVar5 < genmax);
    randread(prVar4,buf,lVar8);
    pbVar6 = buf;
    do {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      uVar9 = uVar9 * 0x100 + 0xff;
      rVar10 = rVar10 * 0x100 + (ulong)bVar2;
    } while (uVar9 < genmax);
    if (uVar9 == genmax) goto LAB_0010012f;
LAB_001000a1:
    uVar5 = (uVar9 - genmax) % uVar1;
    rVar7 = rVar10 % uVar1;
    if (rVar10 <= uVar9 - uVar5) {
      s->randnum = rVar10 / uVar1;
      s->randmax = (uVar9 - genmax) / uVar1;
LAB_00100138:
      if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
        return rVar7;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar9 = uVar5 - 1;
    rVar10 = rVar7;
  } while( true );
}



/* WARNING: Unknown calling convention */

void randint_free(randint_source *s)

{
  __explicit_bzero_chk(s,0x18,0xffffffffffffffff);
  free(s);
  return;
}



/* WARNING: Unknown calling convention */

int randint_all_free(randint_source *s)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = randread_free(s->source);
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  randint_free(s);
  *piVar3 = iVar1;
  return iVar2;
}


