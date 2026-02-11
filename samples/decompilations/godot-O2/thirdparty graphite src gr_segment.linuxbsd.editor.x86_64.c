
long gr_count_unicode_characters(int param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  char cVar8;
  uint *puVar9;
  byte bVar10;
  bool bVar11;
  
  if (param_1 != 2) {
    if (param_1 == 4) {
      lVar7 = 0;
      if (param_3 == (uint *)0x0) {
        while (uVar4 = *param_2, uVar4 < 0x110000) {
          param_2 = param_2 + 1;
          if (uVar4 == 0) goto LAB_001005bb;
          lVar7 = lVar7 + 1;
        }
LAB_00100226:
        if (param_4 == (undefined8 *)0x0) {
          return lVar7;
        }
      }
      else {
        if (param_3 < param_2) {
          if (param_4 == (undefined8 *)0x0) {
            return 0;
          }
          *param_4 = param_3 + -1;
          return 0;
        }
        lVar7 = 0;
        if (param_2 < param_3) {
          do {
            if (0x10ffff < *param_2) goto LAB_00100226;
            if (*param_2 == 0) break;
            param_2 = param_2 + 1;
            lVar7 = lVar7 + 1;
          } while (param_2 < param_3);
LAB_001005bb:
          if (param_4 == (undefined8 *)0x0) {
            return lVar7;
          }
          param_2 = (uint *)0x0;
        }
        else {
          param_2 = (uint *)0x0;
          if (param_4 == (undefined8 *)0x0) {
            return 0;
          }
        }
      }
      *param_4 = param_2;
      return lVar7;
    }
    lVar7 = 0;
    if (param_1 != 1) {
      return 0;
    }
    if (param_3 == (uint *)0x0) {
      do {
        bVar10 = *(byte *)((long)&graphite2::_utf_codec<8>::sz_lut +
                          (ulong)(byte)((byte)*param_2 >> 4));
        bVar3 = (byte)*param_2 &
                *(byte *)((long)&graphite2::_utf_codec<8>::mask_lut + (long)(char)bVar10);
        uVar4 = (uint)bVar3;
        if (bVar10 == 3) {
          cVar8 = '\x01';
          bVar11 = false;
          puVar9 = param_2;
LAB_0010045c:
          if (*(byte *)((long)puVar9 + 1) >> 6 != 2) goto LAB_00100410;
          uVar4 = *(byte *)((long)puVar9 + 1) & 0x3f | uVar4 << 6;
          bVar11 = (bool)(uVar4 < 0x20 | bVar11);
          uVar4 = *(byte *)((long)puVar9 + 2) & 0x3f | uVar4 << 6;
          if (*(byte *)((long)puVar9 + 2) >> 6 == 2) {
            bVar11 = (bool)(bVar11 | uVar4 < 0x80);
            if (bVar10 != (byte)(cVar8 + 2U)) goto LAB_00100410;
          }
          else {
            if (bVar10 != (byte)(cVar8 + 1U)) goto LAB_00100410;
            bVar10 = 3;
          }
LAB_001003a6:
          if ((0x10ffff < uVar4) || (bVar11)) goto LAB_00100410;
          if (uVar4 == 0) goto LAB_001005b4;
          bVar3 = -bVar10;
          if ('\0' < (char)bVar10) {
            bVar3 = bVar10;
          }
          uVar6 = (ulong)bVar3;
        }
        else {
          if ('\x03' < (char)bVar10) {
            if ((bVar10 == 4) && (*(byte *)((long)param_2 + 1) >> 6 == 2)) {
              uVar4 = (uint)bVar3 << 6 | *(byte *)((long)param_2 + 1) & 0x3f;
              bVar11 = uVar4 < 0x10;
              cVar8 = '\x02';
              puVar9 = (uint *)((long)param_2 + 1);
              goto LAB_0010045c;
            }
            goto LAB_00100410;
          }
          if (bVar10 == 0) goto LAB_00100410;
          if (bVar10 == 2) {
            if (*(byte *)((long)param_2 + 1) >> 6 == 2) {
              uVar4 = (uint)bVar3 << 6 | *(byte *)((long)param_2 + 1) & 0x3f;
              bVar11 = uVar4 < 0x80;
              goto LAB_001003a6;
            }
            goto LAB_00100410;
          }
          if (bVar10 != 1) goto LAB_00100410;
          if (bVar3 == 0) goto LAB_001005b4;
          uVar6 = 1;
        }
        param_2 = (uint *)((long)param_2 + uVar6);
        lVar7 = lVar7 + 1;
      } while( true );
    }
    lVar7 = (long)param_3 - (long)param_2;
    if (lVar7 < 1) {
      if (lVar7 != 0) goto LAB_0010042e;
    }
    else {
      pbVar1 = (byte *)((long)param_2 + lVar7 + -1);
      if (((char)*pbVar1 < '\0') &&
         ((0xbf < *pbVar1 ||
          (((lVar7 != 1 && (bVar10 = pbVar1[-1], (char)bVar10 < '\0')) &&
           ((0xdf < bVar10 || (((lVar7 != 2 && (bVar10 < 0xc0)) && (0xef < pbVar1[-2])))))))))) {
LAB_0010042e:
        if (param_4 == (undefined8 *)0x0) {
          return 0;
        }
        *param_4 = (byte *)((long)param_3 + -1);
        return 0;
      }
    }
    lVar7 = 0;
    if (param_2 < param_3) {
      do {
        bVar10 = *(byte *)((long)&graphite2::_utf_codec<8>::sz_lut +
                          (ulong)(byte)((byte)*param_2 >> 4));
        bVar3 = (byte)*param_2 &
                *(byte *)((long)&graphite2::_utf_codec<8>::mask_lut + (long)(char)bVar10);
        uVar4 = (uint)bVar3;
        if (bVar10 == 3) {
          cVar8 = '\x01';
          bVar11 = false;
          puVar9 = param_2;
LAB_00100181:
          if (*(byte *)((long)puVar9 + 1) >> 6 != 2) goto LAB_00100410;
          bVar3 = cVar8 + 1;
          uVar4 = *(byte *)((long)puVar9 + 1) & 0x3f | uVar4 << 6;
          bVar11 = (bool)(uVar4 < 0x20 | bVar11);
          uVar4 = *(byte *)((long)puVar9 + 2) & 0x3f | uVar4 << 6;
          if (*(byte *)((long)puVar9 + 2) >> 6 == 2) {
            bVar3 = cVar8 + 2;
            bVar11 = (bool)(bVar11 | uVar4 < 0x80);
          }
          if (bVar10 != bVar3) goto LAB_00100410;
LAB_001000e8:
          if ((0x10ffff < uVar4) || (bVar11)) goto LAB_00100410;
          if (uVar4 == 0) break;
          bVar3 = -bVar10;
          if ('\0' < (char)bVar10) {
            bVar3 = bVar10;
          }
          uVar6 = (ulong)bVar3;
        }
        else {
          if ('\x03' < (char)bVar10) {
            if ((bVar10 == 4) && (*(byte *)((long)param_2 + 1) >> 6 == 2)) {
              uVar4 = (uint)bVar3 << 6 | *(byte *)((long)param_2 + 1) & 0x3f;
              bVar11 = uVar4 < 0x10;
              cVar8 = '\x02';
              puVar9 = (uint *)((long)param_2 + 1);
              goto LAB_00100181;
            }
            goto LAB_00100410;
          }
          if (bVar10 == 0) goto LAB_00100410;
          if (bVar10 == 2) {
            if (*(byte *)((long)param_2 + 1) >> 6 == 2) {
              uVar4 = (uint)bVar3 << 6 | *(byte *)((long)param_2 + 1) & 0x3f;
              bVar11 = uVar4 < 0x80;
              goto LAB_001000e8;
            }
            goto LAB_00100410;
          }
          if (bVar10 != 1) goto LAB_00100410;
          if (bVar3 == 0) break;
          uVar6 = 1;
        }
        param_2 = (uint *)((long)param_2 + uVar6);
        lVar7 = lVar7 + 1;
      } while (param_2 < param_3);
LAB_001005b4:
      param_2 = (uint *)0x0;
LAB_00100410:
      if (param_4 == (undefined8 *)0x0) {
        return lVar7;
      }
    }
    else {
      param_2 = (uint *)0x0;
      if (param_4 == (undefined8 *)0x0) {
        return 0;
      }
    }
    *param_4 = param_2;
    return lVar7;
  }
  if (param_3 == (uint *)0x0) {
    lVar7 = 0;
    do {
      uVar2 = (ushort)*param_2;
      if (uVar2 - 0xd800 < 0x800) {
        if ((0xdbff < uVar2) || (0x3ff < *(ushort *)((long)param_2 + 2) - 0xdc00))
        goto LAB_00100440;
        lVar5 = 4;
      }
      else {
        if (uVar2 == 0) goto LAB_001002ec;
        lVar5 = 2;
      }
      param_2 = (uint *)((long)param_2 + lVar5);
      lVar7 = lVar7 + 1;
    } while( true );
  }
  bVar11 = param_3 == param_2;
  if (0 < (long)param_3 - (long)param_2) {
    bVar11 = 0x3ff < *(ushort *)((long)param_3 + -2) - 0xd800;
  }
  if (!bVar11) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = (ushort *)((long)param_3 + -2);
    }
    return 0;
  }
  lVar7 = 0;
  if (param_2 < param_3) {
    do {
      uVar2 = (ushort)*param_2;
      if (uVar2 - 0xd800 < 0x800) {
        if ((0xdbff < uVar2) || (0x3ff < *(ushort *)((long)param_2 + 2) - 0xdc00))
        goto LAB_00100440;
        lVar5 = 4;
      }
      else {
        if (uVar2 == 0) break;
        lVar5 = 2;
      }
      param_2 = (uint *)((long)param_2 + lVar5);
      lVar7 = lVar7 + 1;
    } while (param_2 < param_3);
LAB_001002ec:
    if (param_4 == (undefined8 *)0x0) {
      return lVar7;
    }
    param_2 = (uint *)0x0;
  }
  else {
    param_2 = (uint *)0x0;
    if (param_4 == (undefined8 *)0x0) {
      return 0;
    }
  }
  goto LAB_00100449;
LAB_00100440:
  if (param_4 == (undefined8 *)0x0) {
    return lVar7;
  }
LAB_00100449:
  *param_4 = param_2;
  return lVar7;
}



Segment * gr_make_seg(Slot *param_1,Face *param_2,uint param_3,undefined8 *param_4,
                     undefined4 param_5,undefined8 param_6,ulong param_7,int param_8)

{
  Segment SVar1;
  char cVar2;
  Segment *this;
  undefined8 *__ptr;
  Segment *pSVar3;
  undefined8 uVar4;
  
  if (param_2 != (Face *)0x0) {
    __ptr = (undefined8 *)0x0;
    if (param_4 == (undefined8 *)0x0) {
      param_4 = (undefined8 *)graphite2::SillMap::cloneFeatures((int)param_2 + 8);
      __ptr = param_4;
    }
    if (param_3 == 0x20202020) {
      param_3 = 0;
    }
    else if ((param_3 & 0xffffff) == 0x202020) {
      param_3 = param_3 & 0xff000000;
    }
    else if ((short)param_3 == 0x2020) {
      param_3 = param_3 & 0xffff0000;
    }
    else if ((char)param_3 == ' ') {
      param_3 = param_3 & 0xffffff00;
    }
    this = (Segment *)malloc(200);
    graphite2::Segment::Segment(this,param_7,param_2,param_3,param_8);
    cVar2 = graphite2::Segment::read_text(this,param_2,param_4,param_5,param_6,param_7);
    if ((cVar2 == '\0') ||
       ((*(long *)(this + 0x90) != 0 &&
        (cVar2 = (**(code **)(**(long **)(this + 0x88) + 0x10))(*(long **)(this + 0x88),this),
        cVar2 == '\0')))) {
      graphite2::Segment::~Segment(this);
      pSVar3 = (Segment *)0x0;
      free(this);
    }
    else {
      pSVar3 = this;
      if ((*(Slot **)(this + 0x98) != (Slot *)0x0) && (*(long *)(this + 0xa0) != 0)) {
        uVar4 = graphite2::Segment::positionSlots
                          ((Font *)this,param_1,*(Slot **)(this + 0x98),
                           SUB81(*(long *)(this + 0xa0),0),
                           *(char *)(*(long *)(this + 0x90) + 0x2f) != '\0');
        SVar1 = this[0xc4];
        *(undefined8 *)this = uVar4;
        if ((((char)SVar1 >> 6 ^ (byte)SVar1) & 1) != ((byte)SVar1 & 1)) {
          graphite2::Segment::reverseSlots();
        }
        graphite2::Segment::linkClusters((Slot *)this,*(Slot **)(this + 0x98));
      }
    }
    if (__ptr != (undefined8 *)0x0) {
      free((void *)*__ptr);
      free(__ptr);
    }
    return pSVar3;
  }
  return (Segment *)0x0;
}



void gr_seg_destroy(Segment *param_1)

{
  if (param_1 != (Segment *)0x0) {
    graphite2::Segment::~Segment(param_1);
    free(param_1);
    return;
  }
  return;
}



undefined4 gr_seg_advance_X(undefined4 *param_1)

{
  return *param_1;
}



undefined4 gr_seg_advance_Y(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



undefined4 gr_seg_n_cinfo(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}



long gr_seg_cinfo(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if ((ulong)param_2 < *(ulong *)(param_1 + 0xb8)) {
    lVar1 = *(long *)(param_1 + 0x78) + (ulong)param_2 * 0x20;
  }
  return lVar1;
}



undefined4 gr_seg_n_slots(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



undefined8 gr_seg_first_slot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



undefined8 gr_seg_last_slot(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



void gr_seg_justify(double param_1)

{
  graphite2::Segment::justify((float)param_1);
  return;
}


