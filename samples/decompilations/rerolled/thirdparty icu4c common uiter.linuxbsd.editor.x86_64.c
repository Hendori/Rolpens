undefined8 noopGetIndex(void) {
   return 0;
}undefined8 noopMove(void) {
   return 0;
}undefined8 noopHasNext(void) {
   return 0;
}undefined8 noopCurrent(void) {
   return 0xffffffff;
}undefined8 noopGetState(void) {
   return 0xffffffff;
}void noopSetState(undefined8 param_1, undefined8 param_2, undefined4 *param_3) {
   *param_3 = 0x10;
   return;
}undefined4 stringIteratorGetIndex(long param_1, undefined4 param_2) {
   switch (param_2) {
      for (int i = 0; i < 3; i++) {
         case 0:
    return *(undefined4 *)(param_1 + 0xc);
      }
      case 3:
    return 0;
      case 4:
    return *(undefined4 *)(param_1 + 8);
      default:
    return 0xffffffff;
   }
}int stringIteratorMove(long param_1, int param_2, undefined4 param_3) {
   int iVar1;
   switch (param_3) {
      case 0:
    iVar1 = *(int *)(param_1 + 0xc);
    param_2 = param_2 + iVar1;
    break;
      case 1:
    iVar1 = *(int *)(param_1 + 0xc);
    param_2 = param_2 + *(int *)(param_1 + 0x10);
    break;
      case 2:
    iVar1 = *(int *)(param_1 + 0xc);
    param_2 = param_2 + *(int *)(param_1 + 0x14);
    break;
      case 4:
    param_2 = param_2 + *(int *)(param_1 + 8);
      case 3:
    iVar1 = *(int *)(param_1 + 0xc);
    break;
      default:
    return -1;
   }
   if (( iVar1 <= param_2 ) && ( iVar1 = *(int*)( param_1 + 0x14 ) ),param_2 <= *(int*)( param_1 + 0x14 )) {
      iVar1 = param_2;
   }
   *(int*)( param_1 + 0x10 ) = iVar1;
   return iVar1;
}undefined4 stringIteratorHasNext(long param_1) {
   return CONCAT31(( int3 )(( uint ) * (int*)( param_1 + 0x14 ) >> 8), *(int*)( param_1 + 0x10 ) < *(int*)( param_1 + 0x14 ));
}undefined4 stringIteratorHasPrevious(long param_1) {
   return CONCAT31(( int3 )(( uint ) * (int*)( param_1 + 0xc ) >> 8), *(int*)( param_1 + 0xc ) < *(int*)( param_1 + 0x10 ));
}ulong stringIteratorCurrent(long *param_1) {
   if ((int)param_1[2] < *(int*)( (long)param_1 + 0x14 )) {
      return ( ulong ) * (ushort*)( *param_1 + (long)(int)param_1[2] * 2 );
   }
   return 0xffffffff;
}ulong stringIteratorNext(long *param_1) {
   int iVar1;
   iVar1 = (int)param_1[2];
   if (iVar1 < *(int*)( (long)param_1 + 0x14 )) {
      *(int*)( param_1 + 2 ) = iVar1 + 1;
      return ( ulong ) * (ushort*)( *param_1 + (long)iVar1 * 2 );
   }
   return 0xffffffff;
}ulong stringIteratorPrevious(long *param_1) {
   int iVar1;
   if (*(int*)( (long)param_1 + 0xc ) < (int)param_1[2]) {
      iVar1 = (int)param_1[2] + -1;
      *(int*)( param_1 + 2 ) = iVar1;
      return ( ulong ) * (ushort*)( *param_1 + (long)iVar1 * 2 );
   }
   return 0xffffffff;
}undefined4 stringIteratorGetState(long param_1) {
   return *(undefined4*)( param_1 + 0x10 );
}ulong utf16BEIteratorCurrent(long *param_1) {
   long lVar1;
   if ((int)param_1[2] < *(int*)( (long)param_1 + 0x14 )) {
      lVar1 = (long)( (int)param_1[2] * 2 );
      return (ulong)CONCAT11(*(undefined1*)( *param_1 + lVar1 ), *(undefined1*)( *param_1 + 1 + lVar1 ));
   }
   return 0xffffffff;
}ulong utf16BEIteratorNext(long *param_1) {
   int iVar1;
   iVar1 = (int)param_1[2];
   if (iVar1 < *(int*)( (long)param_1 + 0x14 )) {
      *(int*)( param_1 + 2 ) = iVar1 + 1;
      return (ulong)CONCAT11(*(undefined1*)( *param_1 + (long)( iVar1 * 2 ) ), *(undefined1*)( *param_1 + 1 + (long)( iVar1 * 2 ) ));
   }
   return 0xffffffff;
}ulong utf16BEIteratorPrevious(long *param_1) {
   int iVar1;
   long lVar2;
   if (*(int*)( (long)param_1 + 0xc ) < (int)param_1[2]) {
      iVar1 = (int)param_1[2] + -1;
      *(int*)( param_1 + 2 ) = iVar1;
      lVar2 = (long)( iVar1 * 2 );
      return (ulong)CONCAT11(*(undefined1*)( *param_1 + lVar2 ), *(undefined1*)( *param_1 + 1 + lVar2 ));
   }
   return 0xffffffff;
}undefined4 characterIteratorGetIndex(long *param_1, undefined4 param_2) {
   switch (param_2) {
      case 0:
    return *(undefined4 *)(*param_1 + 0x10);
      case 1:
    return *(undefined4 *)(*param_1 + 0xc);
      case 2:
    return *(undefined4 *)(*param_1 + 0x14);
      case 3:
    return 0;
      case 4:
    return *(undefined4 *)(*param_1 + 8);
      default:
    return 0xffffffff;
   }
}ulong characterIteratorMove(long *param_1, int param_2, uint param_3) {
   long *plVar1;
   ulong uVar2;
   if (param_3 == 3) {
      ( **(code**)( *(long*)*param_1 + 0x78 ) )();
      return ( ulong ) * (uint*)( *param_1 + 0xc );
   }
   if (3 < param_3) {
      uVar2 = 0xffffffff;
      if (param_3 == 4) {
         plVar1 = (long*)*param_1;
         ( **(code**)( *plVar1 + 0x78 ) )(plVar1, param_2 + (int)plVar1[1]);
         uVar2 = ( ulong ) * (uint*)( *param_1 + 0xc );
      }
      return uVar2;
   }
   /* WARNING: Could not recover jumptable at 0x0010031e. Too many branches */
   /* WARNING: Treating indirect jump as call */
   uVar2 = ( **(code**)( *(long*)*param_1 + 0xc0 ) )();
   return uVar2;
}void characterIteratorHasNext(undefined8 *param_1) {
   /* WARNING: Could not recover jumptable at 0x0010034a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)*param_1 + 0x38 ) )();
   return;
}void characterIteratorHasPrevious(undefined8 *param_1) {
   /* WARNING: Could not recover jumptable at 0x0010035a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)*param_1 + 0xb8 ) )();
   return;
}uint characterIteratorCurrent(undefined8 *param_1) {
   char cVar1;
   ushort uVar2;
   uint uVar3;
   uVar2 = ( **(code**)( *(long*)*param_1 + 0x88 ) )();
   uVar3 = (uint)uVar2;
   if (uVar2 == 0xffff) {
      cVar1 = ( **(code**)( *(long*)*param_1 + 0x38 ) )();
      uVar3 = 0xffff;
      if (cVar1 == '\0') {
         uVar3 = 0xffffffff;
      }
   }
   return uVar3;
}ulong characterIteratorNext(undefined8 *param_1) {
   char cVar1;
   ushort uVar2;
   cVar1 = ( **(code**)( *(long*)*param_1 + 0x38 ) )();
   if (cVar1 != '\0') {
      uVar2 = ( **(code**)( *(long*)*param_1 + 0x28 ) )();
      return (ulong)uVar2;
   }
   return 0xffffffff;
}ulong characterIteratorPrevious(undefined8 *param_1) {
   char cVar1;
   ushort uVar2;
   cVar1 = ( **(code**)( *(long*)*param_1 + 0xb8 ) )();
   if (cVar1 != '\0') {
      uVar2 = ( **(code**)( *(long*)*param_1 + 0xa8 ) )();
      return (ulong)uVar2;
   }
   return 0xffffffff;
}undefined4 characterIteratorGetState(long *param_1) {
   return *(undefined4*)( *param_1 + 0xc );
}ulong replaceableIteratorCurrent(undefined8 *param_1) {
   ushort uVar1;
   if (*(int*)( param_1 + 2 ) < *(int*)( (long)param_1 + 0x14 )) {
      uVar1 = ( **(code**)( *(long*)*param_1 + 0x48 ) )();
      return (ulong)uVar1;
   }
   return 0xffffffff;
}ulong replaceableIteratorNext(undefined8 *param_1) {
   ushort uVar1;
   if (*(int*)( param_1 + 2 ) < *(int*)( (long)param_1 + 0x14 )) {
      *(int*)( param_1 + 2 ) = *(int*)( param_1 + 2 ) + 1;
      uVar1 = ( **(code**)( *(long*)*param_1 + 0x48 ) )((long*)*param_1);
      return (ulong)uVar1;
   }
   return 0xffffffff;
}ulong replaceableIteratorPrevious(undefined8 *param_1) {
   ushort uVar1;
   if (*(int*)( (long)param_1 + 0xc ) < *(int*)( param_1 + 2 )) {
      *(int*)( param_1 + 2 ) = *(int*)( param_1 + 2 ) + -1;
      uVar1 = ( **(code**)( *(long*)*param_1 + 0x48 ) )((long*)*param_1);
      return (ulong)uVar1;
   }
   return 0xffffffff;
}ulong utf8IteratorGetIndex(long *param_1, undefined4 param_2) {
   int iVar1;
   long lVar2;
   ulong uVar3;
   uint uVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   byte bVar8;
   uint uVar9;
   int iVar10;
   long lVar11;
   switch (param_2) {
      case 0:
      case 3:
    uVar3 = 0;
    break;
      case 1:
    uVar3 = (ulong)*(uint *)(param_1 + 2);
    if ((int)*(uint *)(param_1 + 2) < 0) {
      iVar1 = *(int *)((long)param_1 + 0xc);
      lVar2 = *param_1;
      iVar10 = 0;
      if (iVar1 < 1) {
        iVar7 = 0;
        iVar10 = 0;
      }
      else {
        iVar5 = 0;
        do {
          iVar7 = iVar5 + 1;
          uVar9 = (uint)*(byte *)(lVar2 + iVar5);
          if (-1 < (char)*(byte *)(lVar2 + iVar5)) goto LAB_00100608;
          if (iVar1 == iVar7) {
LAB_00100750:
            iVar10 = iVar10 + 1;
            break;
          }
          if (uVar9 < 0xe0) {
            if (uVar9 < 0xc2) goto LAB_00100608;
            uVar9 = uVar9 & 0x1f;
LAB_001006aa:
            uVar4 = 1;
            bVar8 = *(char *)(lVar2 + iVar7) + 0x80;
            if (bVar8 < 0x40) {
              iVar7 = iVar7 + 1;
              uVar4 = (0xffff < (int)(uVar9 << 6 | (uint)bVar8)) + 1;
            }
          }
          else {
            if (uVar9 < 0xf0) {
              uVar4 = uVar9 & 0xf;
              bVar8 = *(byte *)(lVar2 + iVar7) & 0x3f;
              if (((uint)(int)(char)(&_LC3)[uVar9 & 0xf] >> (*(byte *)(lVar2 + iVar7) >> 5) & 1) !=
                  0) {
LAB_0010067a:
                iVar7 = iVar7 + 1;
                if (iVar1 == iVar7) goto LAB_00100750;
                uVar9 = (uint)bVar8 | uVar4 << 6;
                goto LAB_001006aa;
              }
            }
            else {
              iVar6 = uVar9 - 0xf0;
              if (iVar6 < 5) {
                lVar11 = (long)iVar7;
                uVar4 = (int)(char)(&DAT_00102060)[*(byte *)(lVar2 + lVar11) >> 4] >>
                        ((byte)iVar6 & 0x1f) & 1;
                if (uVar4 != 0) {
                  iVar7 = iVar5 + 2;
                  if (iVar1 == iVar7) goto LAB_00100750;
                  bVar8 = *(char *)(lVar2 + iVar7) + 0x80;
                  if (bVar8 < 0x40) {
                    uVar4 = iVar6 * 0x40 | *(byte *)(lVar2 + lVar11) & 0x3f;
                    goto LAB_0010067a;
                  }
                  goto LAB_00100611;
                }
              }
            }
LAB_00100608:
            uVar4 = 1;
          }
LAB_00100611:
          iVar10 = iVar10 + uVar4;
          iVar5 = iVar7;
        } while (iVar7 < iVar1);
      }
      *(int *)((long)param_1 + 0xc) = iVar7;
      if (*(int *)((long)param_1 + 0x14) == iVar7) {
        *(int *)(param_1 + 1) = iVar10;
      }
      uVar9 = iVar10 + -1 + (uint)((int)param_1[3] == 0);
      *(uint *)(param_1 + 2) = uVar9;
      return (ulong)uVar9;
    }
    break;
      case 2:
      case 4:
    uVar3 = (ulong)*(uint *)(param_1 + 1);
    if ((int)*(uint *)(param_1 + 1) < 0) {
      lVar2 = *param_1;
      iVar1 = *(int *)((long)param_1 + 0xc);
      if ((int)param_1[2] < 0) {
        uVar3 = 0;
        if (iVar1 < 1) {
          iVar10 = 0;
        }
        else {
          iVar7 = 0;
          do {
            iVar10 = iVar7 + 1;
            bVar8 = *(byte *)(lVar2 + iVar7);
            if (-1 < (char)bVar8) goto LAB_00100860;
            if (iVar10 == iVar1) {
LAB_00100948:
              uVar3 = (ulong)((int)uVar3 + 1);
              iVar10 = iVar1;
              break;
            }
            uVar9 = (uint)bVar8;
            if (bVar8 < 0xe0) {
              if (bVar8 < 0xc2) goto LAB_00100860;
              uVar9 = uVar9 & 0x1f;
LAB_001008e9:
              uVar4 = 1;
              bVar8 = *(char *)(lVar2 + iVar10) + 0x80;
              if (bVar8 < 0x40) {
                iVar10 = iVar10 + 1;
                uVar4 = (0xffff < (int)(uVar9 << 6 | (uint)bVar8)) + 1;
              }
            }
            else {
              if (bVar8 < 0xf0) {
                uVar4 = uVar9 & 0xf;
                if (((uint)(int)(char)(&_LC3)[uVar9 & 0xf] >> (*(byte *)(lVar2 + iVar10) >> 5) & 1)
                    != 0) {
                  bVar8 = *(byte *)(lVar2 + iVar10) & 0x3f;
LAB_001008d7:
                  iVar10 = iVar10 + 1;
                  if (iVar10 == iVar1) goto LAB_00100948;
                  uVar9 = (uint)bVar8 | uVar4 << 6;
                  goto LAB_001008e9;
                }
              }
              else {
                iVar5 = bVar8 - 0xf0;
                if (iVar5 < 5) {
                  lVar11 = (long)iVar10;
                  uVar4 = (int)(char)(&DAT_00102060)[*(byte *)(lVar2 + lVar11) >> 4] >>
                          ((byte)iVar5 & 0x1f) & 1;
                  if (uVar4 != 0) {
                    iVar10 = iVar7 + 2;
                    if (iVar10 == iVar1) goto LAB_00100948;
                    bVar8 = *(char *)(lVar2 + iVar10) + 0x80;
                    if (bVar8 < 0x40) {
                      uVar4 = iVar5 * 0x40 | *(byte *)(lVar2 + lVar11) & 0x3f;
                      goto LAB_001008d7;
                    }
                    goto LAB_00100869;
                  }
                }
              }
LAB_00100860:
              uVar4 = 1;
            }
LAB_00100869:
            uVar3 = (ulong)((int)uVar3 + uVar4);
            iVar7 = iVar10;
          } while (iVar10 < iVar1);
        }
        *(int *)((long)param_1 + 0xc) = iVar10;
        *(uint *)(param_1 + 2) = (int)uVar3 + -1 + (uint)((int)param_1[3] == 0);
      }
      else {
        uVar3 = (ulong)(((int)param_1[2] + 1) - (uint)((int)param_1[3] == 0));
        iVar10 = iVar1;
      }
      iVar1 = *(int *)((long)param_1 + 0x14);
      do {
        if (iVar1 <= iVar10) {
LAB_00100743:
          *(int *)(param_1 + 1) = (int)uVar3;
          return uVar3;
        }
        iVar7 = iVar10 + 1;
        uVar9 = (uint)*(byte *)(lVar2 + iVar10);
        if (-1 < (char)*(byte *)(lVar2 + iVar10)) goto LAB_00100548;
        if (iVar1 == iVar7) {
LAB_00100740:
          uVar3 = (ulong)((int)uVar3 + 1);
          goto LAB_00100743;
        }
        if (uVar9 < 0xe0) {
          if (uVar9 < 0xc2) goto LAB_00100548;
          uVar9 = uVar9 & 0x1f;
LAB_00100702:
          uVar4 = 1;
          bVar8 = *(char *)(lVar2 + iVar7) + 0x80;
          if (bVar8 < 0x40) {
            iVar7 = iVar7 + 1;
            uVar4 = (0xffff < (int)(uVar9 << 6 | (uint)bVar8)) + 1;
          }
        }
        else {
          if (uVar9 < 0xf0) {
            uVar4 = uVar9 & 0xf;
            if (((uint)(int)(char)(&_LC3)[uVar9 & 0xf] >> (*(byte *)(lVar2 + iVar7) >> 5) & 1) != 0)
            {
              bVar8 = *(byte *)(lVar2 + iVar7) & 0x3f;
LAB_001005c0:
              iVar7 = iVar7 + 1;
              if (iVar1 == iVar7) goto LAB_00100740;
              uVar9 = (uint)bVar8 | uVar4 << 6;
              goto LAB_00100702;
            }
          }
          else {
            iVar5 = uVar9 - 0xf0;
            if (iVar5 < 5) {
              lVar11 = (long)iVar7;
              uVar4 = (int)(char)(&DAT_00102060)[*(byte *)(lVar2 + lVar11) >> 4] >>
                      ((byte)iVar5 & 0x1f) & 1;
              if (uVar4 != 0) {
                iVar7 = iVar10 + 2;
                if (iVar1 == iVar7) goto LAB_00100740;
                bVar8 = *(char *)(lVar2 + iVar7) + 0x80;
                if (bVar8 < 0x40) {
                  uVar4 = iVar5 * 0x40 | *(byte *)(lVar2 + lVar11) & 0x3f;
                  goto LAB_001005c0;
                }
                goto LAB_00100551;
              }
            }
          }
LAB_00100548:
          uVar4 = 1;
        }
LAB_00100551:
        uVar3 = (ulong)((int)uVar3 + uVar4);
        iVar10 = iVar7;
      } while( true );
    }
    break;
      default:
    uVar3 = FUN_0010050a();
    return uVar3;
   }
   return uVar3;
}void FUN_0010050a(void) {
   return;
}undefined4 utf8IteratorHasNext(long param_1) {
   undefined4 uVar1;
   uVar1 = 1;
   if (*(int*)( param_1 + 0x14 ) <= *(int*)( param_1 + 0xc )) {
      uVar1 = CONCAT31(( int3 )(( uint ) * (int*)( param_1 + 0x18 ) >> 8), *(int*)( param_1 + 0x18 ) != 0);
   }
   return uVar1;
}undefined4 utf8IteratorHasPrevious(long param_1) {
   return CONCAT31(( int3 )(( uint ) * (int*)( param_1 + 0xc ) >> 8), 0 < *(int*)( param_1 + 0xc ));
}uint utf8IteratorGetState(long param_1) {
   uint uVar1;
   uVar1 = *(int*)( param_1 + 0xc ) * 2;
   if (*(int*)( param_1 + 0x18 ) != 0) {
      uVar1 = uVar1 | 1;
   }
   return uVar1;
}ulong utf8IteratorMove(long *param_1, int param_2, undefined4 param_3) {
   int iVar1;
   ulong uVar2;
   uint uVar3;
   int iVar4;
   long lVar5;
   byte bVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   long lVar10;
   long in_FS_OFFSET;
   int local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_3) {
      case 0:
      case 3:
switchD_00100a8e_caseD_0:
    if (0 < param_2) {
      uVar7 = *(uint *)(param_1 + 1);
      if ((int)uVar7 < 0) {
        uVar8 = *(uint *)(param_1 + 2);
        if ((-1 < (int)uVar8) && ((int)uVar8 >> 1 <= param_2)) {
          iVar4 = param_2 - uVar8;
LAB_00100f1c:
          uVar7 = uVar8;
          uVar2 = (ulong)uVar7;
          param_2 = iVar4;
          if (iVar4 == 0) goto code_r0x00100c94;
LAB_00100c49:
          iVar1 = (int)param_1[3];
          local_34 = *(int *)((long)param_1 + 0xc);
          goto LAB_00100c57;
        }
      }
      else {
LAB_00100bf5:
        if ((int)uVar7 <= param_2) {
          *(undefined4 *)(param_1 + 3) = 0;
          *(ulong *)((long)param_1 + 0xc) = CONCAT44(uVar7,*(undefined4 *)((long)param_1 + 0x14));
          uVar2 = FUN_00100c94();
          return uVar2;
        }
        uVar8 = *(uint *)(param_1 + 2);
        if ((-1 < (int)uVar8) && ((int)uVar8 >> 1 <= param_2)) {
          iVar4 = param_2 - uVar8;
          if (iVar4 <= (int)(uVar7 - param_2)) goto LAB_00100f1c;
          *(undefined4 *)(param_1 + 3) = 0;
          *(ulong *)((long)param_1 + 0xc) = CONCAT44(uVar7,*(undefined4 *)((long)param_1 + 0x14));
          param_2 = param_2 - uVar7;
          goto LAB_00100c49;
        }
      }
      *(undefined4 *)(param_1 + 3) = 0;
      uVar7 = 0;
      *(undefined8 *)((long)param_1 + 0xc) = 0;
      lVar10 = *param_1;
      local_34 = 0;
      iVar4 = *(int *)((long)param_1 + 0x14);
      uVar8 = 0;
      goto LAB_00100b10;
    }
    break;
      case 1:
    uVar7 = *(uint *)(param_1 + 2);
    if (-1 < (int)uVar7) {
      param_2 = param_2 + uVar7;
      goto switchD_00100a8e_caseD_0;
    }
    if (param_2 == 0) goto LAB_00100d68;
    iVar4 = *(int *)((long)param_1 + 0xc);
    if (iVar4 <= -param_2) break;
    if (*(int *)((long)param_1 + 0x14) - iVar4 <= param_2) {
      uVar7 = *(uint *)(param_1 + 1);
      uVar2 = (ulong)uVar7;
      *(undefined4 *)(param_1 + 3) = 0;
      *(ulong *)((long)param_1 + 0xc) = CONCAT44(uVar7,*(int *)((long)param_1 + 0x14));
      if ((int)uVar7 < 0) goto LAB_00100d68;
      goto code_r0x00100c94;
    }
    iVar1 = (int)param_1[3];
    local_34 = iVar4;
LAB_00100c57:
    lVar10 = *param_1;
    uVar8 = uVar7;
    if (param_2 < 1) {
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 3) = 0;
        local_34 = local_34 + -4;
        uVar7 = uVar7 - 1;
        param_2 = param_2 + 1;
        if (param_2 == 0) goto LAB_00100dd8;
      }
LAB_00100cf0:
      do {
        if (local_34 < 1) {
          *(int *)((long)param_1 + 0xc) = local_34;
          if ((int)param_1[2] < 0) goto LAB_00100ec1;
          goto LAB_00100de5;
        }
        local_34 = local_34 + -1;
        if ((*(char *)(lVar10 + local_34) < '\0') &&
           (iVar4 = utf8_prevCharSafeBody_76_godot
                              (lVar10,0,&local_34,*(char *)(lVar10 + local_34),0xfffffffd),
           0xffff < iVar4)) {
          if (param_2 == -1) {
            local_34 = local_34 + 4;
            *(int *)(param_1 + 3) = iVar4;
            uVar7 = uVar7 - 1;
            uVar8 = *(uint *)(param_1 + 2);
            goto LAB_00100dd8;
          }
          uVar7 = uVar7 - 2;
          param_2 = param_2 + 2;
        }
        else {
          uVar7 = uVar7 - 1;
          param_2 = param_2 + 1;
        }
      } while (param_2 != 0);
      uVar8 = *(uint *)(param_1 + 2);
LAB_00100dd8:
      *(int *)((long)param_1 + 0xc) = local_34;
      if (-1 < (int)uVar8) {
LAB_00100de5:
        *(uint *)(param_1 + 2) = uVar7;
        uVar2 = FUN_00100c94();
        return uVar2;
      }
    }
    else {
      iVar4 = *(int *)((long)param_1 + 0x14);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 3) = 0;
        param_2 = param_2 + -1;
        uVar7 = uVar7 + 1;
        goto joined_r0x00100dc4;
      }
LAB_00100b10:
      do {
        if (iVar4 <= local_34) break;
        iVar1 = local_34 + 1;
        bVar6 = *(byte *)(lVar10 + local_34);
        if (((char)bVar6 < '\0') && (iVar1 != iVar4)) {
          uVar3 = (uint)bVar6;
          if (0xdf < bVar6) {
            if (bVar6 < 0xf0) {
              uVar9 = uVar3 & 0xf;
              bVar6 = *(byte *)(lVar10 + iVar1) & 0x3f;
              if (((uint)(int)(char)(&_LC3)[uVar3 & 0xf] >> (*(byte *)(lVar10 + iVar1) >> 5) & 1) !=
                  0) {
LAB_00100b7b:
                iVar1 = iVar1 + 1;
                if (iVar1 != iVar4) {
                  uVar3 = (uint)bVar6 | uVar9 << 6;
                  goto LAB_00100b94;
                }
              }
            }
            else {
              uVar3 = bVar6 - 0xf0;
              if (((((int)uVar3 < 5) &&
                   (lVar5 = (long)iVar1,
                   ((uint)(int)(char)(&DAT_00102060)[*(byte *)(lVar10 + lVar5) >> 4] >>
                    (uVar3 & 0x1f) & 1) != 0)) && (iVar1 = local_34 + 2, iVar1 != iVar4)) &&
                 (bVar6 = *(char *)(lVar10 + iVar1) + 0x80, bVar6 < 0x40)) {
                uVar9 = uVar3 * 0x40 | *(byte *)(lVar10 + lVar5) & 0x3f;
                goto LAB_00100b7b;
              }
            }
            goto LAB_00100b00;
          }
          if (bVar6 < 0xc2) goto LAB_00100b00;
          uVar3 = uVar3 & 0x1f;
LAB_00100b94:
          bVar6 = *(char *)(lVar10 + iVar1) + 0x80;
          if (0x3f < bVar6) goto LAB_00100b00;
          local_34 = iVar1 + 1;
          uVar3 = uVar3 << 6 | (uint)bVar6;
          iVar1 = local_34;
          if ((int)uVar3 < 0x10000) goto LAB_00100b00;
          if (param_2 == 1) {
            *(uint *)(param_1 + 3) = uVar3;
            uVar7 = uVar7 + 1;
            break;
          }
          param_2 = param_2 + -2;
          uVar7 = uVar7 + 2;
        }
        else {
LAB_00100b00:
          local_34 = iVar1;
          param_2 = param_2 + -1;
          uVar7 = uVar7 + 1;
        }
joined_r0x00100dc4:
      } while (param_2 != 0);
      if (local_34 != iVar4) goto LAB_00100dd8;
      if (-1 < (int)param_1[1]) {
        if ((-1 < (int)uVar8) || ((int)param_1[3] == 0)) {
          *(int *)((long)param_1 + 0xc) = local_34;
          goto LAB_00100de5;
        }
        uVar8 = (int)param_1[1] - 1;
        *(uint *)(param_1 + 2) = uVar8;
        goto LAB_00100dd8;
      }
      if (-1 < (int)uVar8) {
        if ((int)param_1[3] == 0) {
          *(uint *)(param_1 + 1) = uVar7;
          *(int *)((long)param_1 + 0xc) = local_34;
        }
        else {
          *(int *)((long)param_1 + 0xc) = local_34;
          *(uint *)(param_1 + 1) = uVar7 + 1;
        }
        goto LAB_00100de5;
      }
      *(int *)((long)param_1 + 0xc) = local_34;
    }
    if (local_34 < 2) {
LAB_00100ec1:
      *(int *)(param_1 + 2) = local_34;
      uVar2 = FUN_00100c94();
      return uVar2;
    }
LAB_00100d68:
    uVar2 = FUN_00100c94();
    return uVar2;
  case 2:
  case 4:
    uVar7 = *(uint *)(param_1 + 1);
    if ((int)uVar7 < 0) {
      iVar4 = *(int *)((long)param_1 + 0x14);
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
      *(undefined4 *)(param_1 + 3) = 0;
      *(int *)((long)param_1 + 0xc) = iVar4;
      if (-1 < param_2) goto LAB_00100d68;
      if (iVar4 == -param_2 || SBORROW4(iVar4,-param_2) != iVar4 + param_2 < 0) break;
      lVar10 = *param_1;
      uVar7 = 0xffffffff;
      local_34 = iVar4;
      goto LAB_00100cf0;
    }
    param_2 = param_2 + uVar7;
    if (0 < param_2) goto LAB_00100bf5;
    break;
  default:
    uVar2 = FUN_00100c94();
    return uVar2;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  uVar2 = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
code_r0x00100c94:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
   }
   undefined4 FUN_00100c94(void) {
      undefined4 unaff_EBP;
      long in_FS_OFFSET;
      long in_stack_00000008;
      if (in_stack_00000008 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return unaff_EBP;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   void stringIteratorSetState(long param_1, int param_2, int *param_3) {
      if (( param_3 == (int*)0x0 ) || ( 0 < *param_3 )) {
         return;
      }
      if (param_1 == 0) {
         *param_3 = 1;
         return;
      }
      if (( *(int*)( param_1 + 0xc ) <= param_2 ) && ( param_2 <= *(int*)( param_1 + 0x14 ) )) {
         *(int*)( param_1 + 0x10 ) = param_2;
         return;
      }
      *param_3 = 8;
      return;
   }
   uint utf8IteratorNext(long *param_1) {
      byte bVar1;
      int iVar2;
      int iVar3;
      long lVar4;
      uint uVar5;
      byte bVar6;
      int iVar7;
      int iVar8;
      lVar4 = param_1[3];
      if ((int)lVar4 != 0) {
         *(undefined4*)( param_1 + 3 ) = 0;
         if (-1 < (int)param_1[2]) {
            *(int*)( param_1 + 2 ) = (int)param_1[2] + 1;
         }
         return ( uint )((ushort)(int)lVar4 & 0x3ff | 0xdc00);
      }
      iVar7 = *(int*)( (long)param_1 + 0xc );
      iVar2 = *(int*)( (long)param_1 + 0x14 );
      if (iVar2 <= iVar7) {
         return 0xffffffff;
      }
      lVar4 = *param_1;
      iVar8 = iVar7 + 1;
      iVar3 = (int)param_1[2];
      *(int*)( (long)param_1 + 0xc ) = iVar8;
      bVar6 = *(byte*)( lVar4 + iVar7 );
      uVar5 = (uint)bVar6;
      if ((char)bVar6 < '\0') {
         if (iVar2 == iVar8) {
            LAB_00101170:if (iVar3 < 0) {
               iVar7 = (int)param_1[1];
               uVar5 = 0xfffd;
               if (iVar7 < 0) {
                  return 0xfffd;
               }
               goto LAB_0010114c;
            }
         } else {
            uVar5 = (uint)bVar6;
            if (uVar5 < 0xe0) {
               if (0xc1 < uVar5) {
                  uVar5 = bVar6 & 0x1f;
                  LAB_00101123:bVar6 = *(char*)( lVar4 + iVar8 ) + 0x80;
                  if (bVar6 < 0x40) {
                     iVar8 = iVar8 + 1;
                     *(int*)( (long)param_1 + 0xc ) = iVar8;
                     uVar5 = (uint)bVar6 | uVar5 << 6;
                     if (iVar3 < 0) {
                        if (( iVar2 == iVar8 ) && ( iVar7 = -1 < iVar7 )) {
                           if (0xffff < (int)uVar5) {
                              *(int*)( param_1 + 2 ) = iVar7 + -1;
                              goto LAB_00101246;
                           }
                           goto LAB_0010114c;
                        }
                     } else {
                        *(int*)( param_1 + 2 ) = iVar3 + 1;
                        if (( (int)param_1[1] < 0 ) && ( iVar2 == iVar8 )) {
                           if (0xffff < (int)uVar5) {
                              *(int*)( param_1 + 1 ) = iVar3 + 2;
                              goto LAB_00101246;
                           }
                           goto LAB_001011c0;
                        }
                     }
                     if ((int)uVar5 < 0x10000) {
                        return uVar5;
                     }
                     LAB_00101246:*(uint*)( param_1 + 3 ) = uVar5;
                     return ( uint )(ushort)((short)( (int)uVar5 >> 10 ) + 0xd7c0);
                  }
                  if (iVar3 < 0) {
                     if (iVar2 != iVar8) {
                        return 0xfffd;
                     }
                     iVar7 = (int)param_1[1];
                     if (iVar7 < 0) {
                        return 0xfffd;
                     }
                     uVar5 = 0xfffd;
                     LAB_0010114c:*(int*)( param_1 + 2 ) = iVar7;
                     return uVar5;
                  }
                  goto LAB_00101179;
               }
            } else if (uVar5 < 0xf0) {
               uVar5 = uVar5 & 0xf;
               if (( (uint)(int)(char)( &_LC3 )[bVar6 & 0xf] >> ( *(byte*)( lVar4 + iVar8 ) >> 5 ) & 1 ) != 0) {
                  bVar6 = *(byte*)( lVar4 + iVar8 ) & 0x3f;
                  LAB_00101110:iVar8 = iVar8 + 1;
                  *(int*)( (long)param_1 + 0xc ) = iVar8;
                  if (iVar2 == iVar8) goto LAB_00101170;
                  uVar5 = (uint)bVar6 | uVar5 << 6;
                  goto LAB_00101123;
               }
            } else {
               uVar5 = uVar5 - 0xf0;
               if (( (int)uVar5 < 5 ) && ( bVar1 = *(byte*)( lVar4 + iVar8 )((uint)(int)(char)( &DAT_00102060 )[bVar1 >> 4] >> ( uVar5 & 0x1f ) & 1) != 0 )) {
                  iVar8 = iVar7 + 2;
                  *(int*)( (long)param_1 + 0xc ) = iVar8;
                  if (iVar2 == iVar8) goto LAB_00101170;
                  bVar6 = *(char*)( lVar4 + iVar8 ) + 0x80;
                  if (bVar6 < 0x40) {
                     uVar5 = uVar5 * 0x40 | bVar1 & 0x3f;
                     goto LAB_00101110;
                  }
               }
            }
            if (iVar3 < 0) {
               return 0xfffd;
            }
         }
         LAB_00101179:uVar5 = 0xfffd;
      } else if (iVar3 < 0) {
         if (iVar2 != iVar8) {
            return uVar5;
         }
         iVar7 = (int)param_1[1];
         if (iVar7 < 0) {
            return uVar5;
         }
         goto LAB_0010114c;
      }
      *(int*)( param_1 + 2 ) = iVar3 + 1;
      if (( -1 < (int)param_1[1] ) || ( iVar2 != *(int*)( (long)param_1 + 0xc ) )) {
         return uVar5;
      }
      LAB_001011c0:*(int*)( param_1 + 1 ) = iVar3 + 1;
      return uVar5;
   }
   void utf8IteratorSetState(long *param_1, uint param_2, int *param_3) {
      char cVar1;
      uint uVar2;
      int iVar3;
      long in_FS_OFFSET;
      uint local_24;
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_3 != (int*)0x0 ) && ( *param_3 < 1 )) {
         if (param_1 == (long*)0x0) {
            *param_3 = 1;
         } else {
            uVar2 = *(int*)( (long)param_1 + 0xc ) * 2;
            if ((int)param_1[3] != 0) {
               uVar2 = uVar2 | 1;
            }
            if (param_2 != uVar2) {
               local_24 = param_2 >> 1;
               if (( param_2 & 1 ) == 0) {
                  if ((int)local_24 <= *(int*)( (long)param_1 + 0x14 )) {
                     *(uint*)( (long)param_1 + 0xc ) = local_24;
                     uVar2 = local_24;
                     if (1 < local_24) {
                        uVar2 = 0xffffffff;
                     }
                     *(undefined4*)( param_1 + 3 ) = 0;
                     *(uint*)( param_1 + 2 ) = uVar2;
                     goto LAB_001012c8;
                  }
               } else if (( 3 < local_24 ) && ( (int)local_24 <= *(int*)( (long)param_1 + 0x14 ) )) {
                  *(uint*)( (long)param_1 + 0xc ) = local_24;
                  local_24 = local_24 - 1;
                  *(undefined4*)( param_1 + 2 ) = 0xffffffff;
                  cVar1 = *(char*)( *param_1 + (long)(int)local_24 );
                  if (cVar1 < '\0') {
                     iVar3 = utf8_prevCharSafeBody_76_godot(*param_1, 0, &local_24, cVar1, 0xfffffffd);
                     if (0xffff < iVar3) {
                        *(int*)( param_1 + 3 ) = iVar3;
                        goto LAB_001012c8;
                     }
                  }
               }
               *param_3 = 8;
            }
         }
      }
      LAB_001012c8:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   ulong utf8IteratorPrevious(long *param_1) {
      byte bVar1;
      long lVar2;
      uint uVar3;
      ulong uVar4;
      int iVar5;
      lVar2 = param_1[3];
      iVar5 = *(int*)( (long)param_1 + 0xc );
      if ((int)lVar2 != 0) {
         *(undefined4*)( param_1 + 3 ) = 0;
         *(int*)( (long)param_1 + 0xc ) = iVar5 + -4;
         if (0 < (int)param_1[2]) {
            *(int*)( param_1 + 2 ) = (int)param_1[2] + -1;
         }
         return ( ulong )(ushort)((short)( (int)lVar2 >> 10 ) + 0xd7c0);
      }
      if (iVar5 < 1) {
         return 0xffffffff;
      }
      iVar5 = iVar5 + -1;
      *(int*)( (long)param_1 + 0xc ) = iVar5;
      bVar1 = *(byte*)( *param_1 + (long)iVar5 );
      uVar4 = (ulong)bVar1;
      if ((char)bVar1 < '\0') {
         uVar4 = utf8_prevCharSafeBody_76_godot(*param_1, 0, (long)param_1 + 0xc, bVar1, 0xfffffffd);
         uVar3 = (uint)uVar4;
         if ((int)param_1[2] < 1) {
            iVar5 = *(int*)( (long)param_1 + 0xc );
            if (iVar5 < 2) {
               if ((int)uVar3 < 0x10000) goto LAB_00101435;
               *(int*)( param_1 + 2 ) = iVar5 + 1;
               goto LAB_00101468;
            }
         } else {
            *(int*)( param_1 + 2 ) = (int)param_1[2] + -1;
         }
         if (0xffff < (int)uVar3) {
            iVar5 = *(int*)( (long)param_1 + 0xc );
            LAB_00101468:*(uint*)( param_1 + 3 ) = uVar3;
            *(int*)( (long)param_1 + 0xc ) = iVar5 + 4;
            return ( ulong )(uVar3 & 0x3ff) | 0xdc00;
         }
      } else if ((int)param_1[2] < 1) {
         if (iVar5 < 2) {
            LAB_00101435:*(int*)( param_1 + 2 ) = iVar5;
            return uVar4;
         }
      } else {
         *(int*)( param_1 + 2 ) = (int)param_1[2] + -1;
      }
      return uVar4;
   }
   void characterIteratorSetState(long *param_1, int param_2, int *param_3) {
      if (( param_3 == (int*)0x0 ) || ( 0 < *param_3 )) {
         return;
      }
      if (( param_1 != (long*)0x0 ) && ( param_1 = (long*)*param_1 ),param_1 != (long*)0x0) {
         if (( (int)param_1[2] <= param_2 ) && ( param_2 <= *(int*)( (long)param_1 + 0x14 ) )) {
            /* WARNING: Could not recover jumptable at 0x001014e3. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *param_1 + 0x78 ) )();
            return;
         }
         *param_3 = 8;
         return;
      }
      *param_3 = 1;
      return;
   }
   uint utf8IteratorCurrent(long *param_1) {
      int iVar1;
      int iVar2;
      long lVar3;
      uint uVar4;
      byte bVar5;
      uint uVar6;
      int iVar7;
      long lVar8;
      byte bVar9;
      if (*(uint*)( param_1 + 3 ) != 0) {
         return *(uint*)( param_1 + 3 ) & 0x3ff | 0xdc00;
      }
      iVar1 = *(int*)( (long)param_1 + 0xc );
      iVar2 = *(int*)( (long)param_1 + 0x14 );
      lVar3 = *param_1;
      if (iVar2 <= iVar1) {
         return 0xffffffff;
      }
      bVar5 = *(byte*)( lVar3 + iVar1 );
      if (-1 < (char)bVar5) {
         return (uint)bVar5;
      }
      iVar7 = iVar1 + 1;
      if (iVar2 == iVar7) {
         return 0xfffd;
      }
      uVar6 = (uint)bVar5;
      if (uVar6 < 0xe0) {
         if (uVar6 < 0xc2) {
            return 0xfffd;
         }
         uVar6 = bVar5 & 0x1f;
      } else {
         if (uVar6 < 0xf0) {
            uVar6 = uVar6 & 0xf;
            bVar9 = *(byte*)( lVar3 + iVar7 ) & 0x3f;
            if (( (uint)(int)(char)( &_LC3 )[bVar5 & 0xf] >> ( *(byte*)( lVar3 + iVar7 ) >> 5 ) & 1 ) == 0) {
               return 0xfffd;
            }
         } else {
            uVar6 = bVar5 - 0xf0;
            if (4 < (int)uVar6) {
               return 0xfffd;
            }
            lVar8 = (long)iVar7;
            if (( (uint)(int)(char)( &DAT_00102060 )[*(byte*)( lVar3 + lVar8 ) >> 4] >> ( uVar6 & 0x1f ) & 1 ) == 0) {
               return 0xfffd;
            }
            iVar7 = iVar1 + 2;
            if (iVar2 == iVar7) {
               return 0xfffd;
            }
            bVar9 = *(char*)( lVar3 + iVar7 ) + 0x80;
            if (0x3f < bVar9) {
               return 0xfffd;
            }
            uVar6 = uVar6 * 0x40 | *(byte*)( lVar3 + lVar8 ) & 0x3f;
         }
         iVar7 = iVar7 + 1;
         uVar6 = (uint)bVar9 | uVar6 << 6;
         if (iVar2 == iVar7) {
            return 0xfffd;
         }
      }
      uVar4 = 0xfffd;
      bVar5 = *(char*)( lVar3 + iVar7 ) + 0x80;
      if (( bVar5 < 0x40 ) && ( uVar4 = uVar6 << 6 | (uint)bVar5 ),0xffff < (int)uVar4) {
         return ( uint )(ushort)((short)( (int)uVar4 >> 10 ) + 0xd7c0);
      }
      return uVar4;
   }
   void uiter_setString_76_godot(long *param_1, long param_2, int param_3) {
      if (param_1 == (long*)0x0) {
         return;
      }
      if (( param_2 != 0 ) && ( -2 < param_3 )) {
         *(undefined4*)( param_1 + 3 ) = 0;
         *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
         *param_1 = param_2;
         param_1[4] = (long)stringIteratorGetIndex;
         param_1[5] = (long)stringIteratorMove;
         param_1[0xb] = 0;
         param_1[10] = (long)stringIteratorPrevious;
         param_1[6] = (long)stringIteratorHasNext;
         param_1[7] = (long)stringIteratorHasPrevious;
         param_1[0xc] = (long)stringIteratorGetState;
         param_1[0xd] = (long)stringIteratorSetState;
         param_1[8] = (long)stringIteratorCurrent;
         param_1[9] = (long)stringIteratorNext;
         if (param_3 == -1) {
            param_3 = u_strlen_76_godot(param_2);
         }
         *(int*)( param_1 + 1 ) = param_3;
         *(int*)( (long)param_1 + 0x14 ) = param_3;
         return;
      }
      *param_1 = 0;
      *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
      *(undefined4*)( param_1 + 3 ) = 0;
      param_1[4] = 0x100000;
      param_1[5] = (long)noopMove;
      param_1[10] = (long)noopCurrent;
      param_1[6] = (long)noopHasNext;
      param_1[7] = (long)noopHasNext;
      param_1[0xc] = (long)noopGetState;
      param_1[0xb] = 0;
      param_1[0xd] = (long)noopSetState;
      param_1[8] = (long)noopCurrent;
      param_1[9] = (long)noopCurrent;
      return;
   }
   void uiter_setUTF16BE_76_godot(undefined8 *param_1, char *param_2, uint param_3) {
      char *pcVar1;
      int iVar2;
      if (param_1 == (undefined8*)0x0) {
         return;
      }
      if (param_2 != (char*)0x0) {
         if (param_3 == 0xffffffff) {
            *param_1 = param_2;
            param_1[10] = utf16BEIteratorPrevious;
            param_1[0xc] = stringIteratorGetState;
            param_1[0xd] = stringIteratorSetState;
            *(undefined4*)( param_1 + 3 ) = 0;
            param_1[0xb] = 0;
            *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
            param_1[4] = stringIteratorGetIndex;
            param_1[5] = stringIteratorMove;
            param_1[6] = stringIteratorHasNext;
            param_1[7] = stringIteratorHasPrevious;
            param_1[8] = utf16BEIteratorCurrent;
            param_1[9] = utf16BEIteratorNext;
            pcVar1 = param_2;
            if (( (ulong)param_2 & 1 ) == 0) {
               iVar2 = u_strlen_76_godot(param_2);
            } else {
               for (; ( *pcVar1 != '\0' || ( pcVar1[1] != '\0' ) ); pcVar1 = pcVar1 + 2) {}
               iVar2 = (int)( ( (long)pcVar1 - (long)param_2 ) / 2 );
            }
         } else {
            if (( (int)param_3 < 0 ) || ( ( param_3 & 1 ) != 0 )) goto LAB_001018a8;
            *param_1 = param_2;
            iVar2 = (int)param_3 >> 1;
            param_1[10] = utf16BEIteratorPrevious;
            param_1[0xc] = stringIteratorGetState;
            *(undefined4*)( param_1 + 3 ) = 0;
            param_1[0xb] = 0;
            param_1[0xd] = stringIteratorSetState;
            *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
            param_1[4] = stringIteratorGetIndex;
            param_1[5] = stringIteratorMove;
            param_1[6] = stringIteratorHasNext;
            param_1[7] = stringIteratorHasPrevious;
            param_1[8] = utf16BEIteratorCurrent;
            param_1[9] = utf16BEIteratorNext;
         }
         *(int*)( param_1 + 1 ) = iVar2;
         *(int*)( (long)param_1 + 0x14 ) = iVar2;
         return;
      }
      LAB_001018a8:*param_1 = 0;
      *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
      *(undefined4*)( param_1 + 3 ) = 0;
      param_1[4] = 0x100000;
      param_1[5] = noopMove;
      param_1[10] = noopCurrent;
      param_1[6] = noopHasNext;
      param_1[7] = noopHasNext;
      param_1[0xc] = noopGetState;
      param_1[0xb] = 0;
      param_1[0xd] = noopSetState;
      param_1[8] = noopCurrent;
      param_1[9] = noopCurrent;
      return;
   }
   void uiter_setCharacterIterator_76_godot(long *param_1, long param_2) {
      if (param_1 != (long*)0x0) {
         if (param_2 != 0) {
            *(undefined4*)( param_1 + 3 ) = 0;
            *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
            param_1[0xb] = 0;
            param_1[4] = (long)characterIteratorGetIndex;
            param_1[5] = (long)characterIteratorMove;
            *param_1 = param_2;
            param_1[10] = (long)characterIteratorPrevious;
            param_1[6] = (long)characterIteratorHasNext;
            param_1[7] = (long)characterIteratorHasPrevious;
            param_1[0xc] = (long)characterIteratorGetState;
            param_1[0xd] = (long)characterIteratorSetState;
            param_1[8] = (long)characterIteratorCurrent;
            param_1[9] = (long)characterIteratorNext;
            return;
         }
         *param_1 = 0;
         *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
         *(undefined4*)( param_1 + 3 ) = 0;
         param_1[4] = 0x100000;
         param_1[5] = (long)noopMove;
         param_1[10] = (long)noopCurrent;
         param_1[6] = (long)noopHasNext;
         param_1[7] = (long)noopHasNext;
         param_1[0xc] = (long)noopGetState;
         param_1[0xb] = 0;
         param_1[0xd] = (long)noopSetState;
         param_1[8] = (long)noopCurrent;
         param_1[9] = (long)noopCurrent;
      }
      return;
   }
   void uiter_setReplaceable_76_godot(undefined8 *param_1, long *param_2) {
      undefined4 uVar1;
      if (param_1 == (undefined8*)0x0) {
         return;
      }
      if (param_2 != (long*)0x0) {
         *(undefined4*)( param_1 + 3 ) = 0;
         *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
         param_1[0xb] = 0;
         param_1[4] = stringIteratorGetIndex;
         param_1[5] = stringIteratorMove;
         *param_1 = param_2;
         param_1[6] = stringIteratorHasNext;
         param_1[7] = stringIteratorHasPrevious;
         param_1[10] = replaceableIteratorPrevious;
         param_1[0xc] = stringIteratorGetState;
         param_1[0xd] = stringIteratorSetState;
         param_1[8] = replaceableIteratorCurrent;
         param_1[9] = replaceableIteratorNext;
         uVar1 = ( **(code**)( *param_2 + 0x40 ) )(param_2);
         *(undefined4*)( param_1 + 1 ) = uVar1;
         *(undefined4*)( (long)param_1 + 0x14 ) = uVar1;
         return;
      }
      *param_1 = 0;
      *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
      *(undefined4*)( param_1 + 3 ) = 0;
      param_1[4] = 0x100000;
      param_1[5] = noopMove;
      param_1[10] = noopCurrent;
      param_1[6] = noopHasNext;
      param_1[7] = noopHasNext;
      param_1[0xc] = noopGetState;
      param_1[0xb] = 0;
      param_1[0xd] = noopSetState;
      param_1[8] = noopCurrent;
      param_1[9] = noopCurrent;
      return;
   }
   void uiter_setUTF8_76_godot(undefined8 *param_1, char *param_2, int param_3) {
      size_t sVar1;
      if (param_1 == (undefined8*)0x0) {
         return;
      }
      if (( param_2 != (char*)0x0 ) && ( -2 < param_3 )) {
         *(undefined4*)( param_1 + 3 ) = 0;
         *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
         *param_1 = param_2;
         param_1[4] = utf8IteratorGetIndex;
         param_1[5] = utf8IteratorMove;
         param_1[0xb] = 0;
         param_1[10] = utf8IteratorPrevious;
         param_1[6] = utf8IteratorHasNext;
         param_1[7] = utf8IteratorHasPrevious;
         param_1[0xc] = utf8IteratorGetState;
         param_1[0xd] = utf8IteratorSetState;
         param_1[8] = utf8IteratorCurrent;
         param_1[9] = utf8IteratorNext;
         if (param_3 == -1) {
            sVar1 = strlen(param_2);
            param_3 = (int)sVar1;
         }
         *(int*)( (long)param_1 + 0x14 ) = param_3;
         if (1 < param_3) {
            param_3 = -1;
         }
         *(int*)( param_1 + 1 ) = param_3;
         return;
      }
      *param_1 = 0;
      *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
      *(undefined4*)( param_1 + 3 ) = 0;
      param_1[4] = 0x100000;
      param_1[5] = noopMove;
      param_1[10] = noopCurrent;
      param_1[6] = noopHasNext;
      param_1[7] = noopHasNext;
      param_1[0xc] = noopGetState;
      param_1[0xb] = 0;
      param_1[0xd] = noopSetState;
      param_1[8] = noopCurrent;
      param_1[9] = noopCurrent;
      return;
   }
   uint uiter_current32_76_godot(long param_1) {
      uint uVar1;
      uint uVar2;
      uVar1 = ( **(code**)( param_1 + 0x40 ) )();
      if (( uVar1 & 0xfffff800 ) != 0xd800) {
         return uVar1;
      }
      if (( uVar1 & 0x400 ) != 0) {
         uVar2 = ( **(code**)( param_1 + 0x50 ) )(param_1);
         if (( uVar2 & 0xfffffc00 ) == 0xd800) {
            uVar1 = uVar1 + 0xfca02400 + uVar2 * 0x400;
         } else if ((int)uVar2 < 0) {
            return uVar1;
         }
         ( **(code**)( param_1 + 0x28 ) )(param_1, 1, 1);
         return uVar1;
      }
      ( **(code**)( param_1 + 0x28 ) )(param_1, 1, 1);
      uVar2 = ( **(code**)( param_1 + 0x40 ) )(param_1);
      if (( uVar2 & 0xfffffc00 ) == 0xdc00) {
         uVar1 = uVar2 + 0xfca02400 + uVar1 * 0x400;
      }
      ( **(code**)( param_1 + 0x28 ) )(param_1, 0xffffffff, 1);
      return uVar1;
   }
   uint uiter_next32_76_godot(long param_1) {
      uint uVar1;
      uint uVar2;
      uVar1 = ( **(code**)( param_1 + 0x48 ) )();
      if (( uVar1 & 0xfffffc00 ) == 0xd800) {
         uVar2 = ( **(code**)( param_1 + 0x48 ) )(param_1);
         if (( uVar2 & 0xfffffc00 ) == 0xdc00) {
            return uVar2 + 0xfca02400 + uVar1 * 0x400;
         }
         if (-1 < (int)uVar2) {
            ( **(code**)( param_1 + 0x28 ) )(param_1, 0xffffffff, 1);
            return uVar1;
         }
      }
      return uVar1;
   }
   uint uiter_previous32_76_godot(long param_1) {
      uint uVar1;
      uint uVar2;
      uVar1 = ( **(code**)( param_1 + 0x50 ) )();
      if (( uVar1 & 0xfffffc00 ) == 0xdc00) {
         uVar2 = ( **(code**)( param_1 + 0x50 ) )(param_1);
         if (( uVar2 & 0xfffffc00 ) == 0xd800) {
            return uVar1 + 0xfca02400 + uVar2 * 0x400;
         }
         if (-1 < (int)uVar2) {
            ( **(code**)( param_1 + 0x28 ) )(param_1, 1, 1);
            return uVar1;
         }
      }
      return uVar1;
   }
   undefined8 uiter_getState_76_godot(long param_1) {
      undefined8 uVar1;
      if (( param_1 != 0 ) && ( *(code**)( param_1 + 0x60 ) != (code*)0x0 )) {
         /* WARNING: Could not recover jumptable at 0x00101fc2. Too many branches */
         /* WARNING: Treating indirect jump as call */
         uVar1 = ( **(code**)( param_1 + 0x60 ) )();
         return uVar1;
      }
      return 0xffffffff;
   }
   void uiter_setState_76_godot(long param_1, undefined8 param_2, int *param_3) {
      if (( param_3 == (int*)0x0 ) || ( 0 < *param_3 )) {
         return;
      }
      if (param_1 == 0) {
         *param_3 = 1;
         return;
      }
      if (*(code**)( param_1 + 0x68 ) != (code*)0x0) {
         /* WARNING: Could not recover jumptable at 0x00101fee. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( param_1 + 0x68 ) )();
         return;
      }
      *param_3 = 0x10;
      return;
   }
   undefined8 stringIteratorGetIndex_cold(void) {
      return 0xffffffff;
   }
   undefined8 stringIteratorMove_cold(void) {
      return 0xffffffff;
   }
   undefined8 characterIteratorGetIndex_cold(void) {
      return 0xffffffff;
   }
   void utf8IteratorGetIndex_cold(void) {
      FUN_0010050a();
      return;
   }
   void utf8IteratorMove_cold(void) {
      FUN_00100c94();
      return;
   }
}
