
/* WARNING: Unknown calling convention */

void * memchr2(void *s,int c1_in,int c2_in,size_t n)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  char cVar6;
  ulong uVar7;
  char cVar8;
  
  cVar6 = (char)c1_in;
  cVar8 = (char)c2_in;
  if (cVar6 == cVar8) {
    pvVar5 = memchr(s,c1_in & 0xff,n);
    return pvVar5;
  }
  if (n == 0) {
    return (void *)0x0;
  }
  uVar4 = (ulong)s & 7;
  while (uVar4 != 0) {
                    /* WARNING: Load size is inaccurate */
    if (((char)*s == cVar6) || ((char)*s == cVar8)) {
      return (ulong *)s;
    }
    s = (void *)((long)s + 1);
    n = n - 1;
    if (n == 0) {
      return (void *)0x0;
    }
    uVar4 = (ulong)s & 7;
  }
  lVar2 = (ulong)((c1_in & 0xffU) * 0x100 + (c1_in & 0xffU)) * 0x10001;
  lVar3 = (ulong)((c2_in & 0xffU) * 0x101) * 0x10001;
  if (7 < n) {
    do {
                    /* WARNING: Load size is inaccurate */
      uVar4 = *s ^ lVar3 + (lVar3 << 0x20);
      uVar7 = *s ^ lVar2 + (lVar2 << 0x20);
      if (((~uVar4 & uVar4 + 0xfefefefefefefeff | uVar7 + 0xfefefefefefefeff & ~uVar7) &
          0x8080808080808080) != 0) goto LAB_001000f6;
      n = n - 8;
      s = (void *)((long)s + 8);
    } while (7 < n);
    if (n == 0) {
      return (void *)0x0;
    }
  }
LAB_001000f6:
  puVar1 = (ulong *)((long)s + n);
  while( true ) {
                    /* WARNING: Load size is inaccurate */
    if ((char)*s == cVar6) {
      return (ulong *)s;
    }
    if ((char)*s == cVar8) break;
    s = (void *)((long)s + 1);
    if ((ulong *)s == puVar1) {
      return (void *)0x0;
    }
  }
  return (ulong *)s;
}


