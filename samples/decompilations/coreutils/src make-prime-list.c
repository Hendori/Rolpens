
void print_wide_uint(wide_uint n,int nesting,uint wide_uint_bits)

{
  undefined1 n_00 [16];
  undefined1 n_01 [16];
  int in_ECX;
  int in_EDX;
  int iVar1;
  undefined8 unaff_RBX;
  uint wide_uint_bits_00;
  uint in_register_00000034;
  ulong uVar2;
  uint in_register_0000003c;
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar2 = CONCAT44(in_register_00000034,wide_uint_bits);
  if ((ulong)(nesting & 0xfffffffU) == CONCAT44(in_register_0000003c,nesting) && uVar2 == 0) {
    if (in_EDX != 0) {
      __printf_chk(2,"(uintmax_t) ");
      iVar1 = (in_ECX - 1U & 3) + 1;
      goto LAB_0010008d;
    }
  }
  else {
    iVar1 = (int)(CONCAT44(in_register_0000003c,nesting) >> 0x1c);
    wide_uint_bits_00 = (uint)(uVar2 >> 0x1c);
    if ((in_register_0000003c >> 0x18 == 0 && (uVar2 & 0xffffffffffffff) == 0) &&
        in_register_00000034 >> 0x18 == 0) {
      n_00._8_8_ = unaff_RBX;
      n_00._0_8_ = in_stack_ffffffffffffffc8;
      print_wide_uint((wide_uint)n_00,iVar1,wide_uint_bits_00);
    }
    else {
      putchar(0x28);
      n_01._8_8_ = unaff_RBX;
      n_01._0_8_ = in_stack_ffffffffffffffc8;
      print_wide_uint((wide_uint)n_01,iVar1,wide_uint_bits_00);
      __printf_chk(2,")\n%*s",in_EDX + 3,&_LC0);
    }
    __printf_chk(2," << %d | ",0x1c);
  }
  iVar1 = 7;
LAB_0010008d:
  __printf_chk(2,"0x%0*xU",iVar1,nesting & 0xfffffffU);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void * xalloc(size_t s)

{
  void *pvVar1;
  
  pvVar1 = malloc(s);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  fwrite("Virtual memory exhausted.\n",1,0x1a,_stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void main_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  uint uVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  undefined1 n [16];
  uint uVar10;
  int iVar11;
  int iVar12;
  void *__s;
  void *pvVar13;
  ulong uVar14;
  int *piVar15;
  char *pcVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  long lVar33;
  
  if (argc == 2) {
    uVar10 = __isoc23_strtol(argv[1],0,10);
    if (2 < (int)uVar10) {
      if ((uVar10 & 1) != 0) {
        uVar26 = (ulong)((int)(uVar10 - 1) >> 1);
        __s = xalloc(uVar26);
        memset(__s,1,uVar26);
        pvVar13 = xalloc(uVar26 * 0x30);
LAB_00100338:
        uVar21 = 0;
        uVar10 = 0;
        do {
          uVar1 = uVar10 + 1;
          uVar22 = (int)uVar21 * 2 + 3;
          uVar25 = CONCAT44(0,uVar22);
          puVar2 = (uint *)((long)pvVar13 + (ulong)uVar10 * 0x30);
          *puVar2 = uVar22;
          uVar18 = (ulong)(0xf5397db1 >> (sbyte)((uVar22 >> 1 & 7) << 2));
          lVar23 = 0;
          do {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar18;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar18;
            lVar33 = SUB168(auVar29 * auVar5,8) + lVar23 * uVar18 * 2;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = SUB168(auVar29 * auVar5,0);
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar25;
            uVar14 = SUB168(auVar3 * auVar6,0);
            uVar19 = uVar18 * 2 - uVar14;
            lVar24 = ((lVar23 << 1 | uVar18 >> 0x3f) - (SUB168(auVar3 * auVar6,8) + lVar33 * uVar25)
                     ) - (ulong)(uVar18 * 2 < uVar14);
            bVar8 = uVar18 != uVar19;
            bVar9 = lVar23 != lVar24;
            uVar18 = uVar19;
            lVar23 = lVar24;
          } while (bVar8 || bVar9);
          *(ulong *)(puVar2 + 4) = uVar19;
          *(long *)(puVar2 + 6) = lVar24;
          uVar30 = uVar10;
          auVar29 = __udivti3(0xffffffffffffffff,0xffffffffffffffff,uVar25,0);
          *(undefined1 (*) [16])(puVar2 + 8) = auVar29;
          for (uVar10 = uVar22 * uVar22 - 3 >> 1; uVar10 < uVar26; uVar10 = uVar10 + uVar22) {
            *(undefined1 *)((long)__s + (ulong)uVar10) = 0;
          }
          do {
            uVar21 = uVar21 + 1;
            if (uVar26 <= uVar21) {
              uVar31 = SUB84(pvVar13,0);
              uVar32 = (undefined4)((ulong)pvVar13 >> 0x20);
              puts("/* Generated file -- DO NOT EDIT */\n");
              __printf_chk(2,"#define WIDE_UINT_BITS %u\n",0x80);
              lVar23 = CONCAT44(uVar32,uVar31);
              if (uVar1 == 0) {
                uVar10 = 2;
              }
              else {
                uVar31 = SUB84(__s,0);
                uVar32 = (undefined4)((ulong)__s >> 0x20);
                uVar28 = 8;
                puVar27 = (undefined8 *)(lVar23 + 0x10);
                uVar22 = 2;
                do {
                  uVar10 = *(uint *)(puVar27 + -2);
                  if (uVar28 < uVar1) {
                    uVar17 = *(int *)(lVar23 + (ulong)uVar28 * 0x30) - uVar10;
                    if (0xff < uVar17) {
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                  }
                  else {
                    uVar17 = 0xff;
                  }
                  uVar28 = uVar28 + 1;
                  __printf_chk(2,"P (%u, %u,\n   (",uVar10 - uVar22,uVar17);
                  n._4_4_ = uVar32;
                  n._0_4_ = uVar31;
                  n._8_8_ = lVar33;
                  print_wide_uint((wide_uint)n,(int)*puVar27,(uint)puVar27[1]);
                  __printf_chk(2,"),\n   UINTMAX_MAX / %u)\n",uVar10);
                  puVar27 = puVar27 + 6;
                  uVar22 = uVar10;
                } while (uVar30 + 9 != uVar28);
                __s = (void *)CONCAT44(uVar32,uVar31);
              }
              goto LAB_001005fc;
            }
            uVar10 = uVar1;
          } while (*(char *)((long)__s + uVar21) == '\0');
        } while( true );
      }
      iVar11 = (int)(uVar10 - 2) >> 1;
      uVar26 = (ulong)iVar11;
      __s = xalloc(uVar26);
      memset(__s,1,uVar26);
      pvVar13 = xalloc(uVar26 * 0x30);
      if (iVar11 != 0) goto LAB_00100338;
      uVar31 = SUB84(pvVar13,0);
      uVar32 = (undefined4)((ulong)pvVar13 >> 0x20);
      uVar10 = 2;
      puts("/* Generated file -- DO NOT EDIT */\n");
      __printf_chk(2,"#define WIDE_UINT_BITS %u\n",0x80);
      lVar23 = CONCAT44(uVar32,uVar31);
LAB_001005fc:
      uVar31 = (undefined4)lVar23;
      uVar32 = (undefined4)((ulong)lVar23 >> 0x20);
      puts("\n#undef FIRST_OMITTED_PRIME");
      piVar15 = (int *)CONCAT44(uVar32,uVar31);
      while (uVar10 = uVar10 + 2, (uint)(*piVar15 * *piVar15) <= uVar10) {
        uVar26 = 0;
        piVar20 = piVar15;
        while (auVar4._8_8_ = 0, auVar4._0_8_ = CONCAT44(0,uVar10), auVar7._8_8_ = 0,
              auVar7._0_8_ = *(ulong *)(piVar20 + 4),
              uVar21 = SUB168(auVar4 * auVar7,8) + *(long *)(piVar20 + 6) * CONCAT44(0,uVar10),
              *(ulong *)(piVar20 + 10) < uVar21 ||
              *(ulong *)(piVar20 + 10) - uVar21 <
              (ulong)(*(ulong *)(piVar20 + 8) < SUB168(auVar4 * auVar7,0))) {
          uVar26 = (ulong)((int)uVar26 + 1);
          piVar20 = piVar15 + uVar26 * 0xc;
          if (uVar10 < (uint)(*piVar20 * *piVar20)) goto LAB_0010067d;
        }
      }
LAB_0010067d:
      __printf_chk(2,"#define FIRST_OMITTED_PRIME %u\n",uVar10);
      free(__s);
      free((void *)CONCAT44(uVar32,uVar31));
      iVar11 = ferror(_stdout);
      iVar12 = fclose(_stdout);
      if (iVar11 + iVar12 != 0) {
        piVar15 = __errno_location();
        pcVar16 = strerror(*piVar15);
        __fprintf_chk(_stderr,2,"write error: %s\n",pcVar16);
        goto LAB_001002d4;
      }
    }
    iVar11 = 0;
  }
  else {
    __fprintf_chk(_stderr,2,"Usage: %s LIMIT\nProduces a list of odd primes <= LIMIT\n",*argv);
LAB_001002d4:
    iVar11 = 1;
  }
  return iVar11;
}


