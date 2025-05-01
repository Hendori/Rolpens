
/* graphite2::TtfUtil::GetHeaderInfo(unsigned long&, unsigned long&) */

undefined8 graphite2::TtfUtil::GetHeaderInfo(ulong *param_1,ulong *param_2)

{
  *param_1 = 0;
  *param_2 = 0xc;
  return 1;
}



/* graphite2::TtfUtil::CheckHeader(void const*) */

undefined8 graphite2::TtfUtil::CheckHeader(void *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    uVar1 = *param_1;
    uVar2 = ((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10 |
            (ulong)(uVar1 >> 0x18) | (ulong)(uVar1 >> 0x10 & 0xff) << 8;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),uVar2 == 0x10000);
  }
  return uVar3;
}



/* graphite2::TtfUtil::GetTableDirInfo(void const*, unsigned long&, unsigned long&) */

undefined8 graphite2::TtfUtil::GetTableDirInfo(void *param_1,ulong *param_2,ulong *param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)((long)param_1 + 4);
  *param_2 = 0xc;
  *param_3 = (((ulong)uVar1 & 0xff) << 8 | (ulong)(byte)(uVar1 >> 8)) << 4;
  return 1;
}



/* graphite2::TtfUtil::GetTableInfo(graphite2::TtfUtil::Tag, void const*, void const*, unsigned
   long&, unsigned long&) */

undefined8
graphite2::TtfUtil::GetTableInfo
          (uint param_1,long param_2,uint *param_3,ulong *param_4,ulong *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  
  uVar3 = (ulong)CONCAT11((char)*(undefined2 *)(param_2 + 4),
                          (char)((ushort)*(undefined2 *)(param_2 + 4) >> 8));
  if (uVar3 < 0x29) {
    puVar4 = param_3 + uVar3 * 4;
    if (param_3 == puVar4) {
      return 0;
    }
    do {
      uVar1 = *param_3;
      if (param_1 ==
          ((uint)(((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10) |
          uVar1 >> 0x18 | (uVar1 >> 0x10 & 0xff) << 8)) {
        uVar1 = param_3[2];
        uVar2 = param_3[3];
        *param_4 = ((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10 |
                   (ulong)(uVar1 >> 0x18) | (ulong)(uVar1 >> 0x10 & 0xff) << 8;
        *param_5 = ((ulong)(uVar2 & 0xff) << 8 | (ulong)(uVar2 >> 8 & 0xff)) << 0x10 |
                   (ulong)(uVar2 >> 0x18) | (ulong)(uVar2 >> 0x10 & 0xff) << 8;
        return 1;
      }
      param_3 = param_3 + 4;
    } while (puVar4 != param_3);
  }
  return 0;
}



/* graphite2::TtfUtil::CheckTable(graphite2::TtfUtil::Tag, void const*, unsigned long) */

bool graphite2::TtfUtil::CheckTable(uint param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  
  bVar2 = param_3 < 4 || param_2 == (uint *)0x0;
  if (bVar2) {
    return false;
  }
  if (param_1 == 0x68686561) {
    if (param_3 < 0x24) {
      return bVar2;
    }
    uVar1 = *param_2;
    if (((uint)(((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10) |
        uVar1 >> 0x18 | (uVar1 >> 0x10 & 0xff) << 8) != 0x10000) {
      return bVar2;
    }
    uVar3 = (ushort)param_2[8];
  }
  else {
    if (param_1 < 0x68686562) {
      if (param_1 == 0x676c7966) {
        return 9 < param_3;
      }
      if (0x676c7966 < param_1) {
        if (param_1 != 0x68656164) {
          return true;
        }
        if (param_3 < 0x36) {
          return bVar2;
        }
        uVar1 = *param_2;
        if (((uint)(((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10) |
            uVar1 >> 0x18 | (uVar1 >> 0x10 & 0xff) << 8) != 0x10000) {
          return bVar2;
        }
        uVar1 = param_2[3];
        if ((((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10 |
            (ulong)(uVar1 >> 0x18) | (ulong)(uVar1 >> 0x10 & 0xff) << 8) != 0x5f0f3cf5) {
          return bVar2;
        }
        if (((ushort)param_2[0xd] & 0xff) != 0 || (char)((ushort)param_2[0xd] >> 8) != '\0') {
          return bVar2;
        }
        return (ushort)((ushort)(((ulong)*(ushort *)((long)param_2 + 0x32) & 0xff) << 8) |
                       *(ushort *)((long)param_2 + 0x32) >> 8) < 2;
      }
      if (param_1 == 0x4f532f32) {
        return (((ulong)(ushort)*param_2 & 0xff) << 8 | (ulong)(byte)((ushort)*param_2 >> 8)) < 5;
      }
      if (param_1 != 0x636d6170) {
        return true;
      }
      if (param_3 < 0xc) {
        return bVar2;
      }
    }
    else {
      if (param_1 != 0x6e616d65) {
        if (param_1 == 0x706f7374) {
          if (param_3 < 0x20) {
            return bVar2;
          }
          uVar1 = *param_2;
          uVar1 = (uint)(((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10) |
                  uVar1 >> 0x18 | (uVar1 >> 0x10 & 0xff) << 8;
          if ((uVar1 - 0x10000 & 0xfffeffff) == 0) {
            return true;
          }
          return (uVar1 - 0x28000 & 0xffff7fff) == 0;
        }
        if (param_1 != 0x6d617870) {
          return true;
        }
        if (param_3 < 0x20) {
          return bVar2;
        }
        uVar1 = *param_2;
        return ((uint)(((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10) |
               uVar1 >> 0x18 | (uVar1 >> 0x10 & 0xff) << 8) == 0x10000;
      }
      if (param_3 < 0x12) {
        return bVar2;
      }
    }
    uVar3 = (ushort)*param_2;
  }
  return (char)uVar3 == '\0' && (char)(uVar3 >> 8) == '\0';
}



/* graphite2::TtfUtil::GlyphCount(void const*) */

ulong graphite2::TtfUtil::GlyphCount(void *param_1)

{
  return ((ulong)*(ushort *)((long)param_1 + 4) & 0xff) << 8 |
         (ulong)(byte)(*(ushort *)((long)param_1 + 4) >> 8);
}



/* graphite2::TtfUtil::DesignUnits(void const*) */

uint graphite2::TtfUtil::DesignUnits(void *param_1)

{
  return (uint)(((ulong)*(ushort *)((long)param_1 + 0x12) & 0xff) << 8) |
         (uint)(byte)(*(ushort *)((long)param_1 + 0x12) >> 8);
}



/* graphite2::TtfUtil::GetNameInfo(void const*, int, int, int, int, unsigned long&, unsigned long&)
    */

undefined8
graphite2::TtfUtil::GetNameInfo
          (void *param_1,int param_2,int param_3,int param_4,int param_5,ulong *param_6,
          ulong *param_7)

{
  ushort uVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar1 = *(ushort *)((long)param_1 + 2);
  *param_6 = 0;
  *param_7 = 0;
  uVar2 = ((ulong)uVar1 & 0xff) << 8 | (ulong)(byte)(uVar1 >> 8);
  if (uVar2 != 0) {
    puVar3 = (ushort *)((long)param_1 + 0x12);
    do {
      if ((((param_2 == ((uint)(((ulong)*puVar3 & 0xff) << 8) | (uint)(byte)(*puVar3 >> 8))) &&
           (param_3 == ((uint)(((ulong)puVar3[1] & 0xff) << 8) | (uint)(byte)(puVar3[1] >> 8)))) &&
          (param_4 == ((uint)(((ulong)puVar3[2] & 0xff) << 8) | (uint)(byte)(puVar3[2] >> 8)))) &&
         (param_5 == ((uint)(((ulong)puVar3[3] & 0xff) << 8) | (uint)(byte)(puVar3[3] >> 8)))) {
        uVar1 = puVar3[4];
        *param_6 = (((ulong)*(ushort *)((long)param_1 + 4) & 0xff) << 8 |
                   (ulong)(byte)(*(ushort *)((long)param_1 + 4) >> 8)) +
                   (ulong)CONCAT11((char)puVar3[5],(char)(puVar3[5] >> 8));
        *param_7 = ((ulong)uVar1 & 0xff) << 8 | (ulong)(byte)(uVar1 >> 8);
        return 1;
      }
      puVar3 = puVar3 + 6;
    } while (puVar3 != (ushort *)((long)param_1 + (ulong)((int)uVar2 - 1) * 0xc + 0x1e));
  }
  return 0;
}



/* graphite2::TtfUtil::HorMetrics(unsigned short, void const*, unsigned long, void const*, int&,
   unsigned int&) */

undefined8
graphite2::TtfUtil::HorMetrics
          (ushort param_1,void *param_2,ulong param_3,void *param_4,int *param_5,uint *param_6)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = ((ulong)*(ushort *)((long)param_4 + 0x22) & 0xff) << 8 |
          (ulong)(byte)(*(ushort *)((long)param_4 + 0x22) >> 8);
  uVar4 = (ulong)param_1;
  if (uVar4 < uVar5) {
    if (uVar4 * 4 + 4 <= param_3) {
      puVar1 = (ushort *)((long)param_2 + uVar4 * 4);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      *param_6 = (uint)(((ulong)uVar2 & 0xff) << 8) | (uint)(byte)(uVar2 >> 8);
      *param_5 = (int)(short)((ushort)(((ulong)uVar3 & 0xff) << 8) | uVar3 >> 8);
      return 1;
    }
  }
  else {
    if (((uVar4 + uVar5) * 2 < param_3 - 2) && (uVar5 != 0)) {
      uVar2 = *(ushort *)((long)param_2 + uVar5 * 4 + -4);
      *param_6 = (uint)(((ulong)uVar2 & 0xff) << 8) | (uint)(byte)(uVar2 >> 8);
      uVar2 = *(ushort *)((long)param_2 + (uVar4 + uVar5) * 2);
      *param_5 = (int)(short)(uVar2 << 8 | uVar2 >> 8);
      return 1;
    }
    *param_5 = 0;
  }
  return 0;
}



/* graphite2::TtfUtil::FindCmapSubtable(void const*, int, int, unsigned long) */

ushort * graphite2::TtfUtil::FindCmapSubtable(void *param_1,int param_2,int param_3,ulong param_4)

{
  ushort uVar1;
  ulong uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  
  uVar3 = CONCAT11((char)*(undefined2 *)((long)param_1 + 2),
                   (char)((ushort)*(undefined2 *)((long)param_1 + 2) >> 8));
  if ((param_4 == 0) || ((ulong)uVar3 * 8 + 4 <= param_4)) {
    uVar2 = 0;
    uVar7 = (uint)uVar3;
    if (uVar7 != 0) {
      do {
        uVar1 = *(ushort *)((long)param_1 + uVar2 * 8 + 4);
        if ((param_2 == ((uint)(((ulong)uVar1 & 0xff) << 8) | (uint)(byte)(uVar1 >> 8))) &&
           ((param_3 == -1 ||
            (uVar1 = *(ushort *)((long)param_1 + uVar2 * 8 + 6),
            param_3 == ((uint)(((ulong)uVar1 & 0xff) << 8) | (uint)(byte)(uVar1 >> 8)))))) {
          iVar4 = (int)uVar2;
          uVar5 = *(uint *)((long)param_1 + (long)iVar4 * 8 + 8);
          uVar2 = ((ulong)(uVar5 & 0xff) << 8 | (ulong)(uVar5 >> 8 & 0xff)) << 0x10 |
                  (ulong)(uVar5 >> 0x18) | (ulong)(uVar5 >> 0x10 & 0xff) << 8;
          puVar6 = (ushort *)((long)param_1 + uVar2);
          if (param_4 == 0) {
            return puVar6;
          }
          if (param_4 - 2 < uVar2) {
            return (ushort *)0x0;
          }
          uVar3 = *puVar6 << 8 | *puVar6 >> 8;
          if (uVar3 == 4) {
            if (param_4 - 4 < uVar2) {
              return (ushort *)0x0;
            }
            uVar3 = puVar6[1] << 8 | puVar6[1] >> 8;
            if (iVar4 + 1U == uVar7) {
              if (param_4 - uVar2 < (ulong)uVar3) {
                return (ushort *)0x0;
              }
              return puVar6;
            }
            uVar5 = (uint)uVar3;
            uVar7 = *(uint *)((long)param_1 + (long)(int)(iVar4 + 1U) * 8 + 8);
          }
          else {
            if (uVar3 != 0xc) {
              return puVar6;
            }
            if (param_4 - 6 < uVar2) {
              return (ushort *)0x0;
            }
            uVar5 = *(uint *)(puVar6 + 1);
            uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            if (iVar4 + 1U == uVar7) {
              if (param_4 - uVar2 < (ulong)uVar5) {
                return (ushort *)0x0;
              }
              return puVar6;
            }
            uVar7 = *(uint *)((long)param_1 + (long)(int)(iVar4 + 1U) * 8 + 8);
          }
          if (((int)CONCAT41(uVar7,(char)(uVar7 >> 8)) << 0x10 |
              uVar7 >> 0x18 | (uVar7 >> 0x10 & 0xff) << 8) < uVar5) {
            puVar6 = (ushort *)0x0;
          }
          return puVar6;
        }
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
    }
  }
  return (ushort *)0x0;
}



/* graphite2::TtfUtil::CheckCmapSubtable4(void const*, void const*) */

ulong __thiscall graphite2::TtfUtil::CheckCmapSubtable4(TtfUtil *this,void *param_1,void *param_2)

{
  ulong uVar1;
  bool bVar2;
  ushort uVar4;
  ulong uVar5;
  ulong uVar3;
  
  uVar5 = (long)param_1 - (long)this;
  bVar2 = this == (TtfUtil *)0x0 || uVar5 < 6;
  uVar3 = CONCAT71((int7)((ulong)param_2 >> 8),bVar2);
  if (bVar2) {
    return 0;
  }
  if ((((ulong)*(ushort *)this & 0xff) << 8 | (ulong)(byte)(*(ushort *)this >> 8)) == 4 &&
      0xf < uVar5) {
    uVar1 = ((ulong)*(ushort *)(this + 2) & 0xff) << 8 | (ulong)(byte)(*(ushort *)(this + 2) >> 8);
    uVar3 = (ulong)(uVar1 < 0x10 || uVar5 < uVar1);
    if (uVar1 < 0x10 || uVar5 < uVar1) {
      return 0;
    }
    uVar4 = CONCAT11((char)*(undefined2 *)(this + 6),(char)((ushort)*(undefined2 *)(this + 6) >> 8))
            >> 1;
    if ((uVar4 != 0) && ((uint)uVar4 * 8 + 0x10 <= uVar1)) {
      uVar3 = (ulong)(*(short *)(this + (ulong)uVar4 * 2 + 0xc) == -1);
    }
  }
  return uVar3 & 0xffffffff;
}



/* graphite2::TtfUtil::CmapSubtable4Lookup(void const*, unsigned int, int) */

ulong graphite2::TtfUtil::CmapSubtable4Lookup(void *param_1,uint param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  ushort *puVar6;
  long lVar7;
  ushort uVar8;
  ushort uVar9;
  ushort *puVar10;
  
  uVar8 = CONCAT11((char)*(undefined2 *)((long)param_1 + 6),
                   (char)((ushort)*(undefined2 *)((long)param_1 + 6) >> 8)) >> 1;
  uVar5 = (ulong)uVar8;
  if (param_3 == 0) {
    puVar10 = (ushort *)((long)param_1 + 0xe);
    if (uVar8 == 0) {
      return 0;
    }
    do {
      while( true ) {
        iVar4 = (int)uVar5;
        uVar9 = (ushort)uVar5 >> 1;
        uVar5 = CONCAT62((int6)(uVar5 >> 0x10),uVar9);
        puVar6 = puVar10 + uVar9;
        uVar1 = (uint)(ushort)(*puVar6 << 8 | *puVar6 >> 8);
        if (param_2 <= uVar1) break;
        iVar4 = iVar4 + -1;
        sVar3 = (short)iVar4 - uVar9;
        uVar5 = (ulong)CONCAT22((short)((uint)iVar4 >> 0x10),sVar3);
        if (sVar3 == 0) {
          return uVar5;
        }
        puVar10 = puVar6 + 1;
      }
    } while ((uVar9 != 0) &&
            (param_2 <= CONCAT11((char)puVar6[-1],*(undefined1 *)((long)puVar6 + -1))));
  }
  else {
    puVar6 = (ushort *)((long)param_1 + (long)param_3 * 2 + 0xe);
    uVar1 = (uint)(ushort)(*puVar6 << 8 | *puVar6 >> 8);
  }
  uVar5 = 0;
  if (param_2 <= uVar1) {
    uVar2 = (ulong)(uVar8 + 1);
    puVar6 = puVar6 + uVar2;
    uVar1 = (uint)(ushort)(*puVar6 << 8 | *puVar6 >> 8);
    if (uVar1 <= param_2) {
      puVar6 = puVar6 + (uVar2 - 1);
      uVar8 = puVar6[uVar2 - 1];
      uVar9 = *puVar6 << 8 | *puVar6 >> 8;
      if (uVar8 == 0) {
        uVar5 = (ulong)(uVar9 + param_2);
      }
      else {
        lVar7 = ((long)(puVar6 + (uVar2 - 1)) - (long)param_1 >> 1) +
                (ulong)((uint)((ushort)(uVar8 << 8 | uVar8 >> 8) >> 1) + (param_2 - uVar1));
        if (lVar7 * 2 + 1 <
            (long)(((ulong)*(ushort *)((long)param_1 + 2) & 0xff) << 8 |
                  (ulong)(byte)(*(ushort *)((long)param_1 + 2) >> 8))) {
          uVar8 = *(ushort *)((long)param_1 + lVar7 * 2);
          uVar5 = (ulong)uVar8;
          if (uVar8 != 0) {
            uVar5 = (ulong)((uint)(ushort)(uVar8 << 8 | uVar8 >> 8) + (uint)uVar9);
          }
        }
      }
    }
  }
  return uVar5;
}



/* graphite2::TtfUtil::CmapSubtable4NextCodepoint(void const*, unsigned int, int*) */

uint graphite2::TtfUtil::CmapSubtable4NextCodepoint(void *param_1,uint param_2,int *param_3)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  
  puVar4 = (ushort *)((long)param_1 + 0xe);
  uVar7 = (ushort)(*(ushort *)((long)param_1 + 6) << 8 | *(ushort *)((long)param_1 + 6) >> 8) >> 1;
  puVar1 = puVar4 + (ushort)(uVar7 + 1);
  if (param_2 == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    return (uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8);
  }
  if (0xfffe < param_2) {
    if (param_3 != (int *)0x0) {
      *param_3 = uVar7 - 1;
    }
    return 0xffff;
  }
  if (param_3 == (int *)0x0) {
    lVar6 = 0;
    lVar5 = 0;
    iVar9 = 0;
  }
  else {
    iVar9 = *param_3;
    lVar5 = (long)iVar9;
    if (iVar9 < 1) {
LAB_00100a5a:
      lVar6 = lVar5 * 2;
      puVar4 = puVar4 + lVar5;
    }
    else {
      do {
        if ((ushort)(puVar1[lVar5] << 8 | puVar1[lVar5] >> 8) <= param_2) {
          iVar9 = (int)lVar5;
          goto LAB_00100a5a;
        }
        lVar5 = lVar5 + -1;
      } while ((int)lVar5 != 0);
      lVar6 = 0;
      lVar5 = 0;
      iVar9 = 0;
    }
  }
  uVar3 = *puVar4;
  if (iVar9 < (int)(uVar7 - 1)) {
    lVar5 = (long)iVar9;
    do {
      uVar3 = *(ushort *)((long)param_1 + lVar5 * 2 + 0xe);
      uVar3 = uVar3 << 8 | uVar3 >> 8;
      iVar9 = (int)lVar5;
      if (param_2 <= uVar3) {
        lVar6 = lVar5 * 2;
        goto LAB_00100aa4;
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)(uVar7 - 1));
    iVar9 = iVar9 + 1;
    lVar5 = (long)iVar9;
    lVar6 = lVar5 * 2;
    uVar3 = *(ushort *)((long)param_1 + lVar6 + 0xe);
  }
  uVar3 = uVar3 << 8 | uVar3 >> 8;
LAB_00100aa4:
  uVar8 = *(ushort *)((long)puVar1 + lVar6) << 8 | *(ushort *)((long)puVar1 + lVar6) >> 8;
  if (param_2 < uVar8) {
    param_2 = uVar8 - 1;
  }
  if (param_2 < uVar3) {
    if (param_3 != (int *)0x0) {
      *param_3 = iVar9;
    }
    return param_2 + 1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar9 + 1;
  }
  uVar2 = 0xffff;
  if (iVar9 + 1 < (int)(uint)uVar7) {
    uVar2 = (uint)(ushort)(puVar1[lVar5 + 1] << 8 | puVar1[lVar5 + 1] >> 8);
  }
  return uVar2;
}



/* graphite2::TtfUtil::CheckCmapSubtable12(void const*, void const*) */

ulong __thiscall graphite2::TtfUtil::CheckCmapSubtable12(TtfUtil *this,void *param_1,void *param_2)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar5;
  ulong uVar4;
  
  uVar5 = (long)param_1 - (long)this;
  bVar3 = this == (TtfUtil *)0x0 || uVar5 < 6;
  uVar4 = CONCAT71((int7)((ulong)param_2 >> 8),bVar3);
  if (bVar3) {
    return 0;
  }
  if ((((ulong)*(ushort *)this & 0xff) << 8 | (ulong)(byte)(*(ushort *)this >> 8)) == 0xc &&
      0x1b < uVar5) {
    uVar1 = *(uint *)(this + 4);
    uVar2 = ((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10 |
            (ulong)(uVar1 >> 0x18) | (ulong)(uVar1 >> 0x10 & 0xff) << 8;
    uVar4 = (ulong)(CONCAT41(uVar1 >> 0x10,uVar2 < 0x1c || uVar5 < uVar2) & 0xffff);
    if (uVar2 < 0x1c || uVar5 < uVar2) {
      return 0;
    }
    uVar1 = *(uint *)(this + 0xc);
    uVar5 = ((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10 |
            (ulong)(uVar1 >> 0x10 & 0xff) << 8 | (ulong)(uVar1 >> 0x18);
    if (uVar5 < 0x10000001) {
      uVar4 = (ulong)((int)uVar5 - 1) * 0xc + 0x1c;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),uVar4 == uVar2);
    }
  }
  return uVar4 & 0xffffffff;
}



/* graphite2::TtfUtil::CmapSubtable12Lookup(void const*, unsigned int, int) */

int graphite2::TtfUtil::CmapSubtable12Lookup(void *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  
  uVar5 = (ulong)(uint)param_3;
  uVar2 = *(uint *)((long)param_1 + 0xc);
  uVar2 = (uint)(((ulong)(uVar2 & 0xff) << 8 | (ulong)(uVar2 >> 8 & 0xff)) << 0x10) |
          uVar2 >> 0x18 | (uVar2 >> 0x10 & 0xff) << 8;
  if (uVar2 <= (uint)param_3) {
    return 0;
  }
  puVar4 = (uint *)((long)param_1 + (ulong)(uint)param_3 * 0xc + 0x10);
  while( true ) {
    uVar3 = *puVar4;
    uVar1 = puVar4[1];
    uVar3 = (uint)(((ulong)(uVar3 & 0xff) << 8 | (ulong)(uVar3 >> 8 & 0xff)) << 0x10) |
            uVar3 >> 0x18 | (uVar3 >> 0x10 & 0xff) << 8;
    if ((param_2 <=
         ((uint)(((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10) |
         uVar1 >> 0x18 | (uVar1 >> 0x10 & 0xff) << 8)) && (uVar3 <= param_2)) break;
    uVar3 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar3;
    puVar4 = puVar4 + 3;
    if (uVar2 <= uVar3) {
      return 0;
    }
  }
  uVar2 = *(uint *)((long)param_1 + uVar5 * 0xc + 0x18);
  return ((uVar2 >> 0x10) << 8 | uVar2 >> 0x18) + (param_2 - uVar3);
}



/* graphite2::TtfUtil::CmapSubtable12NextCodepoint(void const*, unsigned int, int*) */

uint graphite2::TtfUtil::CmapSubtable12NextCodepoint(void *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if (param_2 == 0) {
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
    }
    uVar5 = *(uint *)((long)param_1 + 0x10);
    return uVar5 >> 0x18 | (uVar5 >> 0x10 & 0xff) << 8 |
           (uint)(((ulong)(uVar5 & 0xff) << 8 | (ulong)(uVar5 >> 8 & 0xff)) << 0x10);
  }
  uVar5 = (uint)(((ulong)(uVar5 & 0xff) << 8 | (ulong)(uVar5 >> 8 & 0xff)) << 0x10) |
          uVar5 >> 0x18 | (uVar5 >> 0x10 & 0xff) << 8;
  if (0x10fffe < param_2) {
    if (param_3 != (int *)0x0) {
      *param_3 = uVar5;
    }
    return 0x10ffff;
  }
  iVar2 = 0;
  if ((param_3 != (int *)0x0) && (iVar2 = *param_3, 0 < iVar2)) {
    puVar6 = (uint *)((long)param_1 + (long)iVar2 * 0xc + 0x10);
    do {
      uVar4 = *puVar6;
      if (((uint)(((ulong)(uVar4 & 0xff) << 8 | (ulong)(uVar4 >> 8 & 0xff)) << 0x10) |
          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) <= param_2) break;
      puVar6 = puVar6 + -3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  lVar3 = (long)iVar2;
  uVar4 = *(uint *)((long)param_1 + lVar3 * 0xc + 0x14);
  puVar6 = (uint *)((long)param_1 + lVar3 * 0xc + 0x14);
  if (iVar2 < (int)(uVar5 - 1)) {
    do {
      uVar4 = *puVar6;
      uVar4 = (uint)(((ulong)(uVar4 & 0xff) << 8 | (ulong)(uVar4 >> 8 & 0xff)) << 0x10) |
              (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
      if (param_2 <= uVar4) {
        lVar3 = (long)iVar2;
        goto LAB_00100ed4;
      }
      iVar2 = iVar2 + 1;
      puVar6 = puVar6 + 3;
    } while (iVar2 != uVar5 - 1);
    lVar3 = (long)iVar2;
    uVar4 = *(uint *)((long)param_1 + lVar3 * 0xc + 0x14);
  }
  uVar4 = uVar4 >> 0x18 | (uVar4 >> 0x10 & 0xff) << 8 |
          (uint)(((ulong)(uVar4 & 0xff) << 8 | (ulong)(uVar4 >> 8 & 0xff)) << 0x10);
LAB_00100ed4:
  uVar1 = *(uint *)((long)param_1 + lVar3 * 0xc + 0x10);
  uVar1 = (uint)(((ulong)(uVar1 & 0xff) << 8 | (ulong)(uVar1 >> 8 & 0xff)) << 0x10) |
          (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  if (param_2 < uVar1) {
    param_2 = uVar1 - 1;
  }
  if (param_2 < uVar4) {
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
    return param_2 + 1;
  }
  iVar2 = iVar2 + 1;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  uVar4 = 0x10ffff;
  if (iVar2 < (int)uVar5) {
    uVar5 = *(uint *)((long)param_1 + (long)iVar2 * 0xc + 0x10);
    uVar4 = uVar5 >> 0x18 | (uVar5 >> 0x10 & 0xff) << 8 |
            (uint)(((ulong)(uVar5 & 0xff) << 8 | (ulong)(uVar5 >> 8 & 0xff)) << 0x10);
  }
  return uVar4;
}



/* graphite2::TtfUtil::LocaLookup(unsigned short, void const*, unsigned long, void const*) */

ulong graphite2::TtfUtil::LocaLookup(ushort param_1,void *param_2,ulong param_3,void *param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = ((ulong)*(ushort *)((long)param_4 + 0x32) & 0xff) << 8 |
          (ulong)(byte)(*(ushort *)((long)param_4 + 0x32) >> 8);
  if (uVar5 == 0) {
    if ((1 < param_3) && ((ulong)param_1 + 1 < param_3 >> 1)) {
      uVar1 = *(ushort *)((long)param_2 + (ulong)param_1 * 2);
      uVar2 = *(ushort *)((long)param_2 + (ulong)param_1 * 2 + 2);
      iVar4 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8) * 2;
      uVar5 = (ulong)iVar4;
      if (iVar4 == (uint)(ushort)(uVar2 << 8 | uVar2 >> 8) * 2) {
        uVar5 = 0xffffffffffffffff;
      }
      return uVar5;
    }
  }
  else if (((uVar5 == 1) && (3 < param_3)) && ((ulong)param_1 + 1 < param_3 >> 2)) {
    uVar3 = *(uint *)((long)param_2 + (ulong)param_1 * 4);
    uVar5 = (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
    ;
    if (*(uint *)((long)param_2 + (ulong)param_1 * 4 + 4) == uVar3) {
      uVar5 = 0xffffffffffffffff;
    }
    return uVar5;
  }
  return 0xfffffffffffffffe;
}



/* graphite2::TtfUtil::GlyfLookup(void const*, unsigned long, unsigned long) */

long graphite2::TtfUtil::GlyfLookup(void *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  
  if (!CARRY8((ulong)param_1,param_2)) {
    lVar1 = 0;
    if (param_2 < param_3 - 10) {
      lVar1 = (long)param_1 + param_2;
    }
    return lVar1;
  }
  return 0;
}



/* graphite2::TtfUtil::GlyfBox(void const*, int&, int&, int&, int&) */

undefined8
graphite2::TtfUtil::GlyfBox(void *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)((long)param_1 + 4);
  *param_2 = (int)(short)((ushort)(((ulong)*(ushort *)((long)param_1 + 2) & 0xff) << 8) |
                         *(ushort *)((long)param_1 + 2) >> 8);
  uVar2 = *(ushort *)((long)param_1 + 6);
  *param_3 = (int)(short)((ushort)(((ulong)uVar1 & 0xff) << 8) | uVar1 >> 8);
  uVar1 = *(ushort *)((long)param_1 + 8);
  *param_4 = (int)(short)((ushort)(((ulong)uVar2 & 0xff) << 8) | uVar2 >> 8);
  *param_5 = (int)(short)((ushort)(((ulong)uVar1 & 0xff) << 8) | uVar1 >> 8);
  return 1;
}



/* graphite2::TtfUtil::GlyfLookup(unsigned short, void const*, void const*, unsigned long, unsigned
   long, void const*) */

long graphite2::TtfUtil::GlyfLookup
               (ushort param_1,void *param_2,void *param_3,ulong param_4,ulong param_5,void *param_6
               )

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = ((ulong)*(ushort *)((long)param_6 + 0x32) & 0xff) << 8 |
          (ulong)(byte)(*(ushort *)((long)param_6 + 0x32) >> 8);
  if (uVar1 == 0) {
    if ((param_5 >> 1) - 1 <= (ulong)param_1) {
      return 0;
    }
  }
  else if (((short)uVar1 == 1) && ((param_5 >> 2) - 1 <= (ulong)param_1)) {
    return 0;
  }
  uVar1 = LocaLookup(param_1,param_3,param_5,param_6);
  if (CARRY8((ulong)param_2,uVar1)) {
    return 0;
  }
  lVar2 = 0;
  if (uVar1 < param_4 - 10) {
    lVar2 = uVar1 + (long)param_2;
  }
  return lVar2;
}


