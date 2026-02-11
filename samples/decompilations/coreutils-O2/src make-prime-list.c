
void print_wide_uint(ulong param_1,ulong param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = (uint)param_1 & 0xfffffff;
  if (uVar2 == param_1 && param_2 == 0) {
    if (param_3 != 0) {
      __printf_chk(2,"(uintmax_t) ");
      iVar1 = (param_4 - 1U & 3) + 1;
      goto LAB_0010008d;
    }
  }
  else {
    uVar3 = param_1 >> 0x1c | param_2 << 0x24;
    if ((param_1 >> 0x38 == 0 && (param_2 & 0xffffffffffffff) == 0) && param_2 >> 0x38 == 0) {
      print_wide_uint(uVar3,param_2 >> 0x1c,param_3 + 1,param_4);
    }
    else {
      putchar(0x28);
      print_wide_uint(uVar3,param_2 >> 0x1c,param_3 + 1,param_4);
      __printf_chk(2,")\n%*s",param_3 + 3,&_LC0);
    }
    __printf_chk(2," << %d | ",0x1c);
  }
  iVar1 = 7;
LAB_0010008d:
  __printf_chk(2,"0x%0*xU",iVar1,uVar2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void xalloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 != (void *)0x0) {
    return;
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

undefined8 main(int param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  void *__s;
  int *piVar14;
  ulong uVar15;
  char *pcVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  
  if (param_1 == 2) {
    uVar9 = __isoc23_strtol(param_2[1],0,10);
    if (2 < (int)uVar9) {
      if ((uVar9 & 1) != 0) {
        uVar27 = (ulong)((int)(uVar9 - 1) >> 1);
        __s = (void *)xalloc(uVar27);
        memset(__s,1,uVar27);
        piVar14 = (int *)xalloc(uVar27 * 0x30);
LAB_00100338:
        uVar21 = 0;
        uVar9 = 0;
        do {
          uVar25 = uVar9;
          uVar9 = uVar25 + 1;
          uVar26 = (int)uVar21 * 2 + 3;
          uVar24 = CONCAT44(0,uVar26);
          puVar1 = (uint *)(piVar14 + (ulong)uVar25 * 0xc);
          *puVar1 = uVar26;
          uVar18 = (ulong)(0xf5397db1 >> (sbyte)((uVar26 >> 1 & 7) << 2));
          lVar22 = 0;
          do {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar18;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar18;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = SUB168(auVar29 * auVar4,0);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar24;
            uVar15 = SUB168(auVar2 * auVar5,0);
            uVar19 = uVar18 * 2 - uVar15;
            lVar23 = ((lVar22 << 1 | uVar18 >> 0x3f) -
                     (SUB168(auVar2 * auVar5,8) +
                     (SUB168(auVar29 * auVar4,8) + lVar22 * uVar18 * 2) * uVar24)) -
                     (ulong)(uVar18 * 2 < uVar15);
            bVar7 = uVar18 != uVar19;
            bVar8 = lVar22 != lVar23;
            uVar18 = uVar19;
            lVar22 = lVar23;
          } while (bVar7 || bVar8);
          *(ulong *)(puVar1 + 4) = uVar19;
          *(long *)(puVar1 + 6) = lVar23;
          auVar29 = __udivti3(0xffffffffffffffff,0xffffffffffffffff,uVar24,0);
          *(undefined1 (*) [16])(puVar1 + 8) = auVar29;
          for (uVar10 = uVar26 * uVar26 - 3 >> 1; uVar10 < uVar27; uVar10 = uVar10 + uVar26) {
            *(undefined1 *)((long)__s + (ulong)uVar10) = 0;
          }
          do {
            uVar21 = uVar21 + 1;
            if (uVar27 <= uVar21) {
              puts("/* Generated file -- DO NOT EDIT */\n");
              __printf_chk(2,"#define WIDE_UINT_BITS %u\n",0x80);
              if (uVar9 == 0) {
                uVar26 = 2;
              }
              else {
                uVar28 = 8;
                piVar20 = piVar14 + 4;
                uVar10 = 2;
                do {
                  uVar26 = piVar20[-4];
                  if (uVar28 < uVar9) {
                    uVar17 = piVar14[(ulong)uVar28 * 0xc] - uVar26;
                    if (0xff < uVar17) {
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                  }
                  else {
                    uVar17 = 0xff;
                  }
                  uVar28 = uVar28 + 1;
                  __printf_chk(2,"P (%u, %u,\n   (",uVar26 - uVar10,uVar17);
                  print_wide_uint(*(undefined8 *)piVar20,*(undefined8 *)(piVar20 + 2),0,0x80);
                  __printf_chk(2,"),\n   UINTMAX_MAX / %u)\n",uVar26);
                  piVar20 = piVar20 + 0xc;
                  uVar10 = uVar26;
                } while (uVar25 + 9 != uVar28);
              }
              goto LAB_001005fc;
            }
          } while (*(char *)((long)__s + uVar21) == '\0');
        } while( true );
      }
      iVar11 = (int)(uVar9 - 2) >> 1;
      uVar27 = (ulong)iVar11;
      __s = (void *)xalloc(uVar27);
      memset(__s,1,uVar27);
      piVar14 = (int *)xalloc(uVar27 * 0x30);
      if (iVar11 != 0) goto LAB_00100338;
      uVar26 = 2;
      puts("/* Generated file -- DO NOT EDIT */\n");
      __printf_chk(2,"#define WIDE_UINT_BITS %u\n",0x80);
LAB_001005fc:
      puts("\n#undef FIRST_OMITTED_PRIME");
      while (uVar26 = uVar26 + 2, (uint)(*piVar14 * *piVar14) <= uVar26) {
        uVar27 = 0;
        piVar20 = piVar14;
        while (auVar3._8_8_ = 0, auVar3._0_8_ = CONCAT44(0,uVar26), auVar6._8_8_ = 0,
              auVar6._0_8_ = *(ulong *)(piVar20 + 4),
              uVar21 = SUB168(auVar3 * auVar6,8) + *(long *)(piVar20 + 6) * CONCAT44(0,uVar26),
              *(ulong *)(piVar20 + 10) < uVar21 ||
              *(ulong *)(piVar20 + 10) - uVar21 <
              (ulong)(*(ulong *)(piVar20 + 8) < SUB168(auVar3 * auVar6,0))) {
          uVar27 = (ulong)((int)uVar27 + 1);
          piVar20 = piVar14 + uVar27 * 0xc;
          if (uVar26 < (uint)(*piVar20 * *piVar20)) goto LAB_0010067d;
        }
      }
LAB_0010067d:
      __printf_chk(2,"#define FIRST_OMITTED_PRIME %u\n",uVar26);
      free(__s);
      free(piVar14);
      iVar11 = ferror(_stdout);
      iVar12 = fclose(_stdout);
      if (iVar11 + iVar12 != 0) {
        piVar14 = __errno_location();
        pcVar16 = strerror(*piVar14);
        __fprintf_chk(_stderr,2,"write error: %s\n",pcVar16);
        goto LAB_001002d4;
      }
    }
    uVar13 = 0;
  }
  else {
    __fprintf_chk(_stderr,2,"Usage: %s LIMIT\nProduces a list of odd primes <= LIMIT\n",*param_2);
LAB_001002d4:
    uVar13 = 1;
  }
  return uVar13;
}


