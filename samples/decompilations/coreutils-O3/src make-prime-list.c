
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
  uint uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  ulong *puVar28;
  ulong uVar29;
  undefined1 auVar30 [16];
  
  if (param_1 == 2) {
    uVar9 = __isoc23_strtol(param_2[1],0,10);
    if (2 < (int)uVar9) {
      if ((uVar9 & 1) != 0) {
        uVar29 = (ulong)((int)(uVar9 - 1) >> 1);
        __s = (void *)xalloc(uVar29);
        memset(__s,1,uVar29);
        piVar14 = (int *)xalloc(uVar29 * 0x30);
LAB_00100338:
        uVar21 = 0;
        uVar9 = 0;
        do {
          uVar27 = uVar9;
          uVar9 = uVar27 + 1;
          uVar22 = (int)uVar21 * 2 + 3;
          uVar26 = CONCAT44(0,uVar22);
          puVar1 = (uint *)(piVar14 + (ulong)uVar27 * 0xc);
          *puVar1 = uVar22;
          uVar18 = (ulong)(0xf5397db1 >> (sbyte)((uVar22 >> 1 & 7) << 2));
          lVar23 = 0;
          do {
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar18;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar18;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = SUB168(auVar30 * auVar4,0);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar26;
            uVar15 = SUB168(auVar2 * auVar5,0);
            uVar19 = uVar18 * 2 - uVar15;
            lVar24 = ((lVar23 << 1 | uVar18 >> 0x3f) -
                     (SUB168(auVar2 * auVar5,8) +
                     (SUB168(auVar30 * auVar4,8) + lVar23 * uVar18 * 2) * uVar26)) -
                     (ulong)(uVar18 * 2 < uVar15);
            bVar7 = uVar18 != uVar19;
            bVar8 = lVar23 != lVar24;
            uVar18 = uVar19;
            lVar23 = lVar24;
          } while (bVar7 || bVar8);
          *(ulong *)(puVar1 + 4) = uVar19;
          *(long *)(puVar1 + 6) = lVar24;
          auVar30 = __udivti3(0xffffffffffffffff,0xffffffffffffffff,uVar26,0);
          *(undefined1 (*) [16])(puVar1 + 8) = auVar30;
          for (uVar10 = uVar22 * uVar22 - 3 >> 1; uVar10 < uVar29; uVar10 = uVar10 + uVar22) {
            *(undefined1 *)((long)__s + (ulong)uVar10) = 0;
          }
          do {
            uVar21 = uVar21 + 1;
            if (uVar29 <= uVar21) {
              puts("/* Generated file -- DO NOT EDIT */\n");
              __printf_chk(2,"#define WIDE_UINT_BITS %u\n",0x80);
              if (uVar9 == 0) {
                uVar22 = 2;
              }
              else {
                puVar28 = (ulong *)(piVar14 + 4);
                uVar25 = 8;
                uVar10 = 2;
                do {
                  uVar22 = (uint)puVar28[-2];
                  if (uVar25 < uVar9) {
                    uVar17 = piVar14[(ulong)uVar25 * 0xc] - uVar22;
                    if (0xff < uVar17) {
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                  }
                  else {
                    uVar17 = 0xff;
                  }
                  __printf_chk(2,"P (%u, %u,\n   (",uVar22 - uVar10,uVar17);
                  uVar29 = *puVar28;
                  uVar21 = puVar28[1];
                  uVar18 = (ulong)((uint)uVar29 & 0xfffffff);
                  if (uVar29 != uVar18 || uVar21 != 0) {
                    uVar26 = uVar29 >> 0x38 | uVar21 << 8;
                    if (uVar26 == 0 && uVar21 >> 0x38 == 0) {
                      __printf_chk(2,"(uintmax_t) ");
                      __printf_chk(2,"0x%0*xU",4,uVar29 >> 0x1c & 0xffffffff);
                    }
                    else {
                      putchar(0x28);
                      uVar15 = uVar21 >> 0x14;
                      if (uVar15 == 0) {
                        __printf_chk(2,"(uintmax_t) ");
                        __printf_chk(2,"0x%0*xU",4,uVar29 >> 0x38 | uVar21 << 8 & 0xffffffff);
                      }
                      else {
                        uVar10 = (uint)uVar26 & 0xfffffff;
                        putchar(0x28);
                        if (uVar21 >> 0x30 == 0) {
                          print_wide_uint(uVar15,0,3,0x80);
                          __printf_chk(2," << %d | ",0x1c);
                          __printf_chk(2,"0x%0*xU",7,uVar10);
                        }
                        else {
                          putchar(0x28);
                          print_wide_uint(uVar15,0,3,0x80);
                          __printf_chk(2,")\n%*s",5,&_LC0);
                          __printf_chk(2," << %d | ",0x1c);
                          __printf_chk(2,"0x%0*xU",7,uVar10);
                        }
                        __printf_chk(2,")\n%*s",4,&_LC0);
                      }
                      __printf_chk(2," << %d | ",0x1c);
                      __printf_chk(2,"0x%0*xU",7,(uint)(uVar29 >> 0x1c) & 0xfffffff);
                      __printf_chk(2,")\n%*s",3,&_LC0);
                    }
                    __printf_chk(2," << %d | ",0x1c);
                  }
                  uVar25 = uVar25 + 1;
                  puVar28 = puVar28 + 6;
                  __printf_chk(2,"0x%0*xU",7,uVar18);
                  __printf_chk(2,"),\n   UINTMAX_MAX / %u)\n",uVar22);
                  uVar10 = uVar22;
                } while (uVar27 + 9 != uVar25);
              }
              goto LAB_00100858;
            }
          } while (*(char *)((long)__s + uVar21) == '\0');
        } while( true );
      }
      iVar11 = (int)(uVar9 - 2) >> 1;
      uVar29 = (ulong)iVar11;
      __s = (void *)xalloc(uVar29);
      memset(__s,1,uVar29);
      piVar14 = (int *)xalloc(uVar29 * 0x30);
      if (iVar11 != 0) goto LAB_00100338;
      uVar22 = 2;
      puts("/* Generated file -- DO NOT EDIT */\n");
      __printf_chk(2,"#define WIDE_UINT_BITS %u\n",0x80);
LAB_00100858:
      puts("\n#undef FIRST_OMITTED_PRIME");
      while (uVar22 = uVar22 + 2, (uint)(*piVar14 * *piVar14) <= uVar22) {
        uVar29 = 0;
        piVar20 = piVar14;
        while (auVar3._8_8_ = 0, auVar3._0_8_ = CONCAT44(0,uVar22), auVar6._8_8_ = 0,
              auVar6._0_8_ = *(ulong *)(piVar20 + 4),
              uVar21 = SUB168(auVar3 * auVar6,8) + *(long *)(piVar20 + 6) * CONCAT44(0,uVar22),
              *(ulong *)(piVar20 + 10) < uVar21 ||
              *(ulong *)(piVar20 + 10) - uVar21 <
              (ulong)(*(ulong *)(piVar20 + 8) < SUB168(auVar3 * auVar6,0))) {
          uVar29 = (ulong)((int)uVar29 + 1);
          piVar20 = piVar14 + uVar29 * 0xc;
          if (uVar22 < (uint)(*piVar20 * *piVar20)) goto LAB_001008d4;
        }
      }
LAB_001008d4:
      __printf_chk(2,"#define FIRST_OMITTED_PRIME %u\n",uVar22);
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


