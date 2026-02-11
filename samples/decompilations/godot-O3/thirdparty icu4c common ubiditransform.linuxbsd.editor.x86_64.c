
/* action_setRunsOnly(UBiDiTransform*, UErrorCode*) */

undefined8 action_setRunsOnly(UBiDiTransform *param_1,UErrorCode *param_2)

{
  ubidi_setReorderingMode_76_godot(*(undefined8 *)param_1,3);
  return 0;
}



/* action_setInverse(UBiDiTransform*, UErrorCode*) */

undefined8 action_setInverse(UBiDiTransform *param_1,UErrorCode *param_2)

{
  ubidi_setInverse_76_godot(*(undefined8 *)param_1,1);
  ubidi_setReorderingMode_76_godot(*(undefined8 *)param_1,5);
  return 0;
}



/* action_reverse(UBiDiTransform*, UErrorCode*) */

undefined8 action_reverse(UBiDiTransform *param_1,UErrorCode *param_2)

{
  ubidi_writeReverse_76_godot
            (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28),0,param_2);
  **(undefined4 **)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  return 1;
}



/* action_reorder(UBiDiTransform*, UErrorCode*) */

undefined8 action_reorder(UBiDiTransform *param_1,UErrorCode *param_2)

{
  ubidi_writeReordered_76_godot
            (*(undefined8 *)param_1,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28),
             *(undefined2 *)(param_1 + 0x38),param_2);
  **(undefined4 **)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return 1;
}



/* action_resolve(UBiDiTransform*, UErrorCode*) */

undefined8 action_resolve(UBiDiTransform *param_1,UErrorCode *param_2)

{
  ubidi_setPara_76_godot
            (*(undefined8 *)param_1,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
             *(undefined1 *)(*(long *)(param_1 + 8) + 0x18),0,param_2);
  return 0;
}



/* action_mirror(UBiDiTransform*, UErrorCode*) */

undefined8 action_mirror(UBiDiTransform *param_1,UErrorCode *param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (((byte)param_1[0x38] & 2) == 0) {
    return 0;
  }
  uVar9 = 0;
  uVar11 = 0;
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x20)) {
    *(undefined4 *)param_2 = 0xf;
    return 0;
  }
  do {
    uVar10 = uVar9 + 1;
    uVar12 = uVar11 + 1;
    bVar2 = ubidi_getLevelAt_76_godot(*(undefined8 *)param_1,uVar9);
    uVar6 = (ulong)uVar11;
    bVar2 = bVar2 & 1;
    uVar3 = *(ushort *)(*(long *)(param_1 + 0x10) + (ulong)uVar9 * 2);
    uVar8 = (uint)uVar3;
    if ((uVar8 & 0xfc00) == 0xd800) {
      uVar4 = *(uint *)(param_1 + 0x20);
      if (uVar10 == uVar4) {
        if (bVar2 == 0) {
          *(ushort *)(*(long *)(param_1 + 0x18) + uVar6 * 2) = uVar3;
          break;
        }
LAB_001001d8:
        uVar4 = u_charMirror_76_godot(uVar8);
        uVar9 = uVar10;
        if (uVar4 < 0x10000) {
          uVar3 = u_charMirror_76_godot(uVar8);
          uVar4 = *(uint *)(param_1 + 0x20);
          goto LAB_00100157;
        }
        iVar5 = u_charMirror_76_godot(uVar8);
        *(short *)(*(long *)(param_1 + 0x18) + uVar6 * 2) = (short)(iVar5 >> 10) + -0x2840;
        uVar3 = u_charMirror_76_godot(uVar8);
        lVar7 = *(long *)(param_1 + 0x18);
        uVar4 = *(uint *)(param_1 + 0x20);
      }
      else {
        uVar1 = *(ushort *)(*(long *)(param_1 + 0x10) + (ulong)uVar10 * 2);
        if ((uVar1 & 0xfc00) != 0xdc00) {
          uVar9 = uVar10;
          if (bVar2 == 0) goto LAB_00100157;
          goto LAB_001001d8;
        }
        uVar10 = uVar9 + 2;
        uVar8 = uVar1 + 0xfca02400 + uVar8 * 0x400;
        if (bVar2 != 0) goto LAB_001001d8;
        lVar7 = *(long *)(param_1 + 0x18);
        uVar3 = (ushort)uVar8;
        *(short *)(lVar7 + uVar6 * 2) = (short)((int)uVar8 >> 10) + -0x2840;
        uVar9 = uVar10;
      }
      uVar6 = (ulong)uVar12;
      uVar12 = uVar11 + 2;
      *(ushort *)(lVar7 + uVar6 * 2) = uVar3 & 0x3ff | 0xdc00;
    }
    else {
      if (bVar2 != 0) goto LAB_001001d8;
      uVar4 = *(uint *)(param_1 + 0x20);
      uVar9 = uVar10;
LAB_00100157:
      *(ushort *)(*(long *)(param_1 + 0x18) + uVar6 * 2) = uVar3;
    }
    uVar11 = uVar12;
  } while (uVar9 < uVar4);
  **(uint **)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return 1;
}



/* updateSrc(UBiDiTransform*, char16_t const*, unsigned int, unsigned int, UErrorCode*) [clone
   .part.0] */

void updateSrc(UBiDiTransform *param_1,wchar16 *param_2,uint param_3,uint param_4,
              UErrorCode *param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x24) < param_4) {
    if (lVar2 != 0) {
      uprv_free_76_godot();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    lVar2 = uprv_malloc_76_godot((ulong)(param_4 + 0x32) * 2);
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar2 == 0) {
      *(undefined4 *)param_5 = 7;
      return;
    }
    *(uint *)(param_1 + 0x24) = param_4 + 0x32;
  }
  u_strncpy_76_godot(lVar2,param_2,param_3);
  uVar1 = u_terminateUChars_76_godot
                    (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x24),param_3,param_5
                    );
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



/* action_shapeArabic(UBiDiTransform*, UErrorCode*) */

undefined8 action_shapeArabic(UBiDiTransform *param_1,UErrorCode *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x3c) | *(uint *)(param_1 + 0x40);
  if (uVar4 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x14);
  uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x10);
  if (uVar1 != uVar2) {
    uVar4 = u_shapeArabic_76_godot
                      (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
                       *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28),
                       *(uint *)(param_1 + 0x3c) | uVar2,param_2);
    **(uint **)(param_1 + 0x30) = uVar4;
    if (*(int *)param_2 < 1) {
      updateSrc(param_1,*(wchar16 **)(param_1 + 0x18),uVar4,uVar4,param_2);
      uVar3 = u_shapeArabic_76_godot
                        (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
                         *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28),
                         *(uint *)(*(long *)(param_1 + 8) + 0x14) | *(uint *)(param_1 + 0x40),
                         param_2);
      **(undefined4 **)(param_1 + 0x30) = uVar3;
    }
    return 1;
  }
  uVar3 = u_shapeArabic_76_godot
                    (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),
                     *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28),uVar4 | uVar1,
                     param_2);
  **(undefined4 **)(param_1 + 0x30) = uVar3;
  return 1;
}



long ubiditransform_open_76_godot(int *param_1)

{
  long lVar1;
  
  if (0 < *param_1) {
    return 0;
  }
  lVar1 = uprv_calloc_76_godot(1,0x48);
  if (lVar1 != 0) {
    return lVar1;
  }
  *param_1 = 7;
  return 0;
}



void ubiditransform_close_76_godot(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      ubidi_close_76_godot();
    }
    if (param_1[2] != 0) {
      uprv_free_76_godot();
    }
    uprv_free_76_godot(param_1);
    return;
  }
  return;
}



uint ubiditransform_transform_76_godot
               (UBiDiTransform *param_1,wchar16 *param_2,uint param_3,long param_4,uint param_5,
               byte param_6,int param_7,byte param_8,int param_9,int param_10,uint param_11,
               UErrorCode *param_12)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte *pbVar5;
  code *pcVar6;
  UBiDiTransform *pUVar7;
  undefined8 uVar8;
  uint uVar9;
  byte bVar10;
  long lVar11;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  if (*(int *)param_12 < 1) {
    if ((param_2 == (wchar16 *)0x0) || (param_4 == 0)) {
LAB_001006b0:
      *(undefined4 *)param_12 = 1;
    }
    else if (param_3 != 0) {
      if ((int)param_3 < -1) goto LAB_001006b0;
      if (param_3 == 0xffffffff) {
        param_3 = u_strlen_76_godot(param_2);
      }
      if (param_5 != 0) {
        if ((int)param_5 < -1) goto LAB_001006b0;
        if (param_5 == 0xffffffff) {
          param_5 = u_strlen_76_godot(param_4);
        }
        pUVar7 = param_1;
        if (param_1 != (UBiDiTransform *)0x0) {
LAB_0010057e:
          bVar4 = param_6 & 1;
          if ((param_6 - 0xfe < 2) &&
             (bVar4 = ubidi_getBaseDirection_76_godot(param_2,param_3), bVar4 == 3)) {
            bVar4 = param_6 == 0xff;
          }
          pbVar5 = &Schemes;
          bVar10 = param_8 & 1;
          if (param_8 - 0xfe < 2) {
            bVar10 = bVar4;
          }
          do {
            if ((((*pbVar5 == bVar4) && (pbVar5[8] == bVar10)) && (param_7 == *(int *)(pbVar5 + 4)))
               && (param_9 == *(int *)(pbVar5 + 0xc))) {
              *(byte **)(pUVar7 + 8) = pbVar5;
              *(uint *)(pUVar7 + 0x38) = (uint)(param_10 != 0) * 2;
              *(uint *)(pUVar7 + 0x3c) = param_11 & 0xffffffe3;
              *(uint *)(pUVar7 + 0x40) = param_11 & 0xffffff1b;
              uVar9 = param_3;
              if (((int)param_3 < (int)param_5) && (uVar9 = param_5, param_5 < param_3))
              goto LAB_00100636;
              updateSrc(pUVar7,param_2,param_3,uVar9,param_12);
              if (0 < *(int *)param_12) goto LAB_0010063d;
              if (*(long *)pUVar7 == 0) {
                uVar8 = ubidi_openSized_76_godot(0,0,param_12);
                iVar1 = *(int *)param_12;
                *(undefined8 *)pUVar7 = uVar8;
                if (0 < iVar1) goto LAB_0010063d;
              }
              *(long *)(pUVar7 + 0x18) = param_4;
              *(uint **)(pUVar7 + 0x30) = &local_44;
              *(uint *)(pUVar7 + 0x28) = param_5;
              lVar11 = *(long *)(pUVar7 + 8) + 0x20;
              pcVar6 = *(code **)(*(long *)(pUVar7 + 8) + 0x20);
              bVar2 = false;
              if (pcVar6 != (code *)0x0) goto LAB_00100748;
              ubidi_setInverse_76_godot(*(undefined8 *)pUVar7,0);
              goto LAB_001007a9;
            }
            pbVar5 = pbVar5 + 0x58;
          } while ((NoteGnuProperty_4 *)pbVar5 != &NoteGnuProperty_4_00100f60);
          *(undefined8 *)(pUVar7 + 8) = 0;
          goto LAB_0010063d;
        }
        if (*(int *)param_12 < 1) {
          pUVar7 = (UBiDiTransform *)uprv_calloc_76_godot(1,0x48);
          if (pUVar7 == (UBiDiTransform *)0x0) {
            *(undefined4 *)param_12 = 7;
          }
          else if (*(int *)param_12 < 1) goto LAB_0010057e;
        }
      }
    }
  }
  goto LAB_001006b7;
  while( true ) {
    cVar3 = (*pcVar6)(pUVar7,param_12);
    if (cVar3 == '\0') {
      pcVar6 = *(code **)(lVar11 + 8);
    }
    else {
      if (*(long *)(lVar11 + 8) == 0) {
        ubidi_setInverse_76_godot(*(undefined8 *)pUVar7,0);
        goto LAB_0010063d;
      }
      updateSrc(pUVar7,*(wchar16 **)(pUVar7 + 0x18),**(uint **)(pUVar7 + 0x30),
                **(uint **)(pUVar7 + 0x30),param_12);
      bVar2 = true;
      pcVar6 = *(code **)(lVar11 + 8);
    }
    lVar11 = lVar11 + 8;
    if (pcVar6 == (code *)0x0) break;
LAB_00100748:
    if (0 < *(int *)param_12) break;
  }
  ubidi_setInverse_76_godot(*(undefined8 *)pUVar7,0);
  if (!bVar2) {
LAB_001007a9:
    if (*(int *)param_12 < 1) {
      if ((int)param_5 < (int)param_3) {
LAB_00100636:
        *(undefined4 *)param_12 = 0xf;
      }
      else {
        u_strncpy_76_godot(param_4,param_2,param_3);
        local_44 = param_3;
      }
    }
  }
LAB_0010063d:
  if (pUVar7 == param_1) {
    *(undefined8 *)(pUVar7 + 0x18) = 0;
    *(undefined8 *)(pUVar7 + 0x30) = 0;
    *(undefined4 *)(pUVar7 + 0x20) = 0;
    *(undefined4 *)(pUVar7 + 0x28) = 0;
  }
  else {
    if (*(long *)pUVar7 != 0) {
      ubidi_close_76_godot();
    }
    if (*(long *)(pUVar7 + 0x10) != 0) {
      uprv_free_76_godot();
    }
    uprv_free_76_godot(pUVar7);
  }
  uVar9 = local_44;
  if (*(int *)param_12 < 1) goto LAB_001006b9;
LAB_001006b7:
  uVar9 = 0;
LAB_001006b9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


