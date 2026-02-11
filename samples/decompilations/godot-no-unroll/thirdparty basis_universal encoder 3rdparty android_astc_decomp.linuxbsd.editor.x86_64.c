
/* basisu_astc::astc::(anonymous namespace)::deFloat16To32(unsigned short) */

uint basisu_astc::astc::(anonymous_namespace)::deFloat16To32(ushort param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_1 & 0x3ff;
  uVar5 = (uint)(param_1 >> 0xf) << 0x1f;
  uVar3 = param_1 >> 10 & 0x1f;
  if (uVar3 == 0) {
    uVar1 = 0;
    if ((param_1 & 0x3ff) == 0) {
      return uVar5;
    }
    do {
      uVar4 = uVar1;
      uVar2 = uVar2 * 2;
      uVar1 = uVar4 - 1;
    } while ((uVar2 & 0x400) == 0);
    uVar2 = uVar2 & 0xfffffbff;
  }
  else {
    uVar4 = (uint)uVar3;
    if ((param_1 >> 10 & 0x1f) == 0x1f) {
      if ((param_1 & 0x3ff) != 0) {
        return uVar2 << 0xd | uVar5 | 0x7f800000;
      }
      return uVar5 | 0x7f800000;
    }
  }
  return (uVar4 + 0x70) * 0x800000 | uVar2 << 0xd | uVar5;
}



/* basisu_astc::astc::(anonymous namespace)::getASTCBlockMode(unsigned int) */

void __thiscall
basisu_astc::astc::(anonymous_namespace)::getASTCBlockMode(_anonymous_namespace_ *this,uint param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  _anonymous_namespace_ _Var7;
  
  *(undefined8 *)this = 0xffffffff00010001;
  *(undefined8 *)(this + 8) = 0x3ffffffff;
  _Var7 = (_anonymous_namespace_)((param_1 & 0x1ff) == 0x1fc);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[1] = _Var7;
  if ((bool)_Var7) {
    *this = (_anonymous_namespace_)0x0;
    return;
  }
  if ((param_1 & 3) == 0) {
    if ((~param_1 & 0x1c0) == 0) {
      return;
    }
    if ((param_1 & 0xf) == 0) {
      return;
    }
    uVar2 = param_1 >> 7 & 3;
    uVar1 = (ulong)(param_1 >> 1 & 4 | param_1 >> 1 & 2 | param_1 >> 4 & 1);
    if (uVar2 == 3) {
      uVar4 = param_1 >> 5 & 1;
      iVar5 = (-(uint)((char)uVar4 == '\0') & 0xfffffffc) + 10;
      iVar3 = (-(uint)((char)uVar4 == '\0') & 4) + 6;
    }
    else {
      uVar4 = param_1 >> 5 & 3;
      if (uVar2 == 1) {
        iVar5 = uVar4 + 2;
        iVar3 = 0xc;
      }
      else {
        if (uVar2 != 2) {
          uVar4 = uVar4 + 2;
          *(undefined4 *)(this + 4) = 0xc;
          *(uint *)(this + 8) = uVar4;
          goto LAB_0010015d;
        }
        iVar5 = uVar4 + 6;
        iVar3 = (param_1 >> 9) + 6;
      }
    }
    *(int *)(this + 8) = iVar3;
    *(int *)(this + 4) = iVar5;
    if ((param_1 & 0x180) == 0x100) {
      this[2] = (_anonymous_namespace_)0x0;
      *(undefined8 *)(this + 0xc) = 2;
      goto LAB_001002c0;
    }
  }
  else {
    if ((param_1 & 0xf) == 0) {
      return;
    }
    uVar6 = param_1 >> 2 & 3;
    uVar1 = (ulong)(param_1 * 2 & 2 | param_1 >> 4 & 1 | param_1 * 2 & 4);
    uVar2 = (param_1 >> 5 & 3) + 2;
    if (uVar6 == 3) {
      uVar4 = param_1 >> 7 & 1;
      if ((param_1 & 0x100) == 0) {
        uVar4 = uVar4 + 6;
        uVar6 = uVar2;
      }
      else {
        uVar6 = uVar4 + 2;
        uVar4 = uVar2;
      }
      *(uint *)(this + 4) = uVar6;
      *(uint *)(this + 8) = uVar4;
    }
    else {
      uVar4 = param_1 >> 7 & 3;
      if (uVar6 == 1) {
        uVar4 = uVar4 + 8;
        *(uint *)(this + 8) = uVar2;
        *(uint *)(this + 4) = uVar4;
      }
      else if (uVar6 == 2) {
        uVar4 = uVar4 + 8;
        *(uint *)(this + 4) = uVar2;
        *(uint *)(this + 8) = uVar4;
      }
      else {
        uVar4 = uVar4 + 4;
        *(uint *)(this + 8) = uVar2;
        *(uint *)(this + 4) = uVar4;
      }
    }
  }
LAB_0010015d:
  *(undefined8 *)(this + 0xc) = 2;
  this[2] = SUB41(param_1 >> 10,0);
  this[2] = (_anonymous_namespace_)((byte)this[2] & 1);
  if ((param_1 & 0x200) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00100189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00104300 + *(int *)(&DAT_00104300 + uVar1 * 4)))
              (uVar4,&DAT_00104300,&DAT_00104300 + *(int *)(&DAT_00104300 + uVar1 * 4));
    return;
  }
LAB_001002c0:
                    /* WARNING: Could not recover jumptable at 0x001002ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00104320 + *(int *)(&DAT_00104320 + uVar1 * 4)))
            (uVar4,&DAT_00104320,&DAT_00104320 + *(int *)(&DAT_00104320 + uVar1 * 4));
  return;
}



/* basisu_astc::astc::(anonymous namespace)::decodeHDREndpointMode11(basisu_astc::UVec4&,
   basisu_astc::UVec4&, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int) */

void basisu_astc::astc::(anonymous_namespace)::decodeHDREndpointMode11
               (UVec4 *param_1,UVec4 *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,uint param_8)

{
  if ((param_8 >> 6 & 2 | param_7 >> 7 & 1) != 3) {
                    /* WARNING: Could not recover jumptable at 0x001004a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00104340 +
              *(int *)(&DAT_00104340 +
                      (ulong)(param_5 >> 6 & 2 | param_4 >> 7 & 1 | param_6 >> 5 & 4) * 4)))
              (param_1,param_2,param_4 & 0x3f,
               &DAT_00104340 +
               *(int *)(&DAT_00104340 +
                       (ulong)(param_5 >> 6 & 2 | param_4 >> 7 & 1 | param_6 >> 5 & 4) * 4),
               param_5 >> 6 & 1);
    return;
  }
  *(uint *)(param_1 + 8) = (param_7 & 0x7f) << 5;
  *(ulong *)param_1 = CONCAT44(param_5 << 4,param_3 << 4);
  *(undefined4 *)(param_1 + 0xc) = 0x780;
  *(uint *)(param_2 + 8) = (param_8 & 0x7f) << 5;
  *(undefined4 *)(param_2 + 0xc) = 0x780;
  *(ulong *)param_2 = CONCAT44(param_6 << 4,param_4 << 4);
  return;
}



/* basisu_astc::astc::(anonymous namespace)::decodeColorEndpointModes(unsigned int*,
   basisu_astc::astc::(anonymous namespace)::Block128 const&, int, int) */

void basisu_astc::astc::(anonymous_namespace)::decodeColorEndpointModes
               (uint *param_1,Block128 *param_2,int param_3,int param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar2 = *(ulong *)param_2;
  if (param_3 == 1) {
    *param_1 = (uint)(uVar2 >> 0xd) & 0xf;
    return;
  }
  if ((uVar2 >> 0x17 & 3) == 0) {
    puVar1 = param_1 + param_3;
    do {
      *param_1 = (uint)(uVar2 >> 0x19) & 0xf;
      param_1 = param_1 + 1;
    } while (puVar1 != param_1);
  }
  else {
    iVar7 = param_3 + -4 + param_4;
    iVar6 = param_3 + 0x19;
    lVar5 = 0;
    do {
      if (iVar6 + -0x19 < 4) {
        bVar4 = 0x1c;
        uVar8 = (uint)(uVar2 >> ((byte)iVar6 & 0x3f)) & 1;
        uVar3 = uVar2;
        if (iVar6 != 0x1b) goto LAB_001008d7;
      }
      else {
        uVar8 = (uint)(*(ulong *)(param_2 + (long)(iVar7 >> 6) * 8) >> ((byte)iVar7 & 0x3f)) & 1;
LAB_001008d7:
        bVar4 = (byte)(iVar7 + 1) & 0x3f;
        uVar3 = *(ulong *)(param_2 + (long)(iVar7 + 1 >> 6) * 8);
      }
      iVar7 = iVar7 + 2;
      iVar6 = iVar6 + 2;
      param_1[lVar5] =
           (int)(uVar3 >> bVar4) * 2 & 2U |
           (((uint)(uVar2 >> 0x17) & 3) -
           (uint)((uVar2 >> ((ulong)((int)lVar5 + 0x19) & 0x3f) & 1) == 0)) * 4 | uVar8;
      lVar5 = lVar5 + 1;
    } while (lVar5 != param_3);
  }
  return;
}



/* basisu_astc::astc::(anonymous namespace)::BitAccessStream::getNext(int) */

ulong __thiscall
basisu_astc::astc::(anonymous_namespace)::BitAccessStream::getNext
          (BitAccessStream *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  if (param_1 != 0) {
    iVar5 = *(int *)(this + 0x14);
    iVar12 = *(int *)(this + 0xc);
    if (iVar5 < iVar12) {
      iVar10 = param_1 + iVar5;
      iVar6 = *(int *)(this + 8);
      *(int *)(this + 0x14) = iVar10;
      if (iVar10 < iVar12) {
        iVar12 = iVar10;
      }
      lVar1 = *(long *)this;
      iVar12 = iVar12 - iVar5;
      iVar10 = 0;
      if (-1 < iVar12) {
        iVar10 = iVar12;
      }
      iVar9 = iVar5 + -1 + iVar10;
      iVar13 = iVar9 - iVar5;
      if (this[0x10] == (BitAccessStream)0x0) {
        uVar11 = 0;
        iVar5 = iVar6 - iVar5;
        iVar6 = iVar6 - iVar9;
        if (iVar13 != -1) {
          iVar9 = iVar6 + 0x3f;
          if (-1 < iVar6) {
            iVar9 = iVar6;
          }
          iVar3 = iVar5 + 0x3f;
          if (-1 < iVar5) {
            iVar3 = iVar5;
          }
          bVar8 = (byte)iVar6 & 0x3f;
          uVar2 = *(ulong *)(lVar1 + (long)(iVar9 >> 6) * 8);
          uVar7 = (1L << ((byte)iVar5 & 0x3f)) * 2 - 1;
          if (iVar9 >> 6 == iVar3 >> 6) {
            uVar11 = (uint)((uVar7 & uVar2) >> bVar8);
          }
          else {
            bVar4 = (byte)(iVar5 >> 0x1f);
            uVar11 = (uint)((uVar7 & *(ulong *)(lVar1 + (long)(iVar3 >> 6) * 8)) <<
                           ((char)iVar13 - (((byte)iVar5 + (bVar4 >> 2) & 0x3f) - (bVar4 >> 2)) &
                           0x3f)) | (uint)(uVar2 >> bVar8);
          }
        }
        uVar7 = 0;
        if (0 < iVar12) {
          iVar5 = 0;
          do {
            bVar8 = (byte)iVar5;
            iVar5 = iVar5 + 1;
            uVar7 = (ulong)((uint)uVar7 |
                           (uVar11 >> (bVar8 & 0x1f) & 1) << (((char)iVar10 + -1) - bVar8 & 0x1f));
          } while (iVar5 < iVar10);
        }
        return uVar7;
      }
      iVar9 = iVar9 + iVar6;
      iVar5 = iVar5 + iVar6;
      if (iVar13 != -1) {
        iVar12 = iVar5 + 0x3f;
        if (-1 < iVar5) {
          iVar12 = iVar5;
        }
        iVar6 = iVar9 + 0x3f;
        if (-1 < iVar9) {
          iVar6 = iVar9;
        }
        bVar8 = (byte)iVar5 & 0x3f;
        uVar2 = *(ulong *)(lVar1 + (long)(iVar12 >> 6) * 8);
        uVar7 = (1L << ((byte)iVar9 & 0x3f)) * 2 - 1;
        if (iVar12 >> 6 != iVar6 >> 6) {
          bVar4 = (byte)(iVar9 >> 0x1f);
          return (ulong)((uint)((uVar7 & *(ulong *)(lVar1 + (long)(iVar6 >> 6) * 8)) <<
                               ((char)iVar13 - (((byte)iVar9 + (bVar4 >> 2) & 0x3f) - (bVar4 >> 2))
                               & 0x3f)) | (uint)(uVar2 >> bVar8));
        }
        return (uVar7 & uVar2) >> bVar8;
      }
    }
  }
  return 0;
}



/* basisu_astc::astc::(anonymous namespace)::decodeISE(basisu_astc::astc::(anonymous
   namespace)::ISEDecodedResult*, int, basisu_astc::astc::(anonymous namespace)::BitAccessStream&,
   basisu_astc::astc::(anonymous namespace)::ISEParams const&) [clone .constprop.0] [clone .isra.0]
    */

void __thiscall
basisu_astc::astc::(anonymous_namespace)::decodeISE
          (_anonymous_namespace_ *this,ISEDecodedResult *param_1,int param_2,
          BitAccessStream *param_3,ISEParams *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined4 in_register_00000014;
  BitAccessStream *this_00;
  long lVar11;
  int iVar12;
  _anonymous_namespace_ *p_Var13;
  long lVar14;
  _anonymous_namespace_ *p_Var15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  int local_58 [4];
  undefined4 local_48;
  long local_40;
  
  this_00 = (BitAccessStream *)CONCAT44(in_register_00000014,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = (int)param_1;
  iVar12 = (int)param_4;
  if ((int)param_3 == 0) {
    lVar14 = 0;
    uVar17 = (iVar8 + 4U) / 5;
    if (uVar17 != 0) {
      uVar19 = 0;
      do {
        if (uVar19 == (iVar8 + 4U) / 5 - 1) {
          iVar9 = iVar8 - (int)lVar14;
          local_58[0] = BitAccessStream::getNext(this_00,iVar12);
          uVar2 = BitAccessStream::getNext(this_00,2);
          local_58[1] = BitAccessStream::getNext(this_00,iVar12);
          iVar3 = BitAccessStream::getNext(this_00,2);
          local_58[2] = BitAccessStream::getNext(this_00,iVar12);
          iVar4 = BitAccessStream::getNext(this_00,1);
          local_58[3] = BitAccessStream::getNext(this_00,iVar12);
          iVar5 = BitAccessStream::getNext(this_00,2);
          local_48 = BitAccessStream::getNext(this_00,iVar12);
          iVar6 = BitAccessStream::getNext(this_00,1);
          uVar16 = (ulong)uVar2;
          if (iVar9 == 3) {
            uVar16 = (ulong)(uVar2 | iVar3 << 2 | iVar4 << 4);
            goto LAB_00100bf0;
          }
          if (3 < iVar9) {
            if (iVar9 != 4) goto LAB_00100bcc;
            uVar16 = (ulong)(iVar3 * 4 | iVar5 << 5 | iVar4 << 4 | uVar2);
            goto LAB_00100bf0;
          }
          if ((iVar9 == 1) || (uVar16 = (ulong)(uVar2 | iVar3 << 2), iVar9 == 2)) goto LAB_00100bf0;
        }
        else {
          local_58[0] = BitAccessStream::getNext(this_00,iVar12);
          uVar2 = BitAccessStream::getNext(this_00,2);
          local_58[1] = BitAccessStream::getNext(this_00,iVar12);
          iVar3 = BitAccessStream::getNext(this_00,2);
          local_58[2] = BitAccessStream::getNext(this_00,iVar12);
          iVar4 = BitAccessStream::getNext(this_00,1);
          local_58[3] = BitAccessStream::getNext(this_00,iVar12);
          iVar5 = BitAccessStream::getNext(this_00,2);
          local_48 = BitAccessStream::getNext(this_00,iVar12);
          iVar6 = BitAccessStream::getNext(this_00,1);
          iVar9 = 5;
LAB_00100bcc:
          uVar16 = (ulong)(iVar3 * 4 | iVar6 << 7 | iVar5 << 5 | uVar2 | iVar4 << 4);
LAB_00100bf0:
          lVar11 = 0;
          p_Var13 = this + lVar14 * 0xc;
          do {
            iVar3 = *(int *)(decodeISETritBlock(basisu_astc::astc::(anonymous_namespace)::ISEDecodedResult*,int,basisu_astc::astc::(anonymous_namespace)::BitAccessStream&,int)
                             ::tritsFromT + lVar11 * 4 + uVar16 * 0x14);
            iVar4 = local_58[lVar11];
            piVar1 = local_58 + lVar11;
            lVar11 = lVar11 + 1;
            *(int *)(p_Var13 + 8) = (iVar3 << ((byte)param_4 & 0x1f)) + *piVar1;
            *(ulong *)p_Var13 = CONCAT44(iVar3,iVar4);
            p_Var13 = p_Var13 + 0xc;
          } while (iVar9 != lVar11);
        }
        uVar19 = uVar19 + 1;
        lVar14 = lVar14 + 5;
      } while (uVar17 != uVar19);
    }
  }
  else if ((int)param_3 == 1) {
    uVar17 = iVar8 + 2;
    if (uVar17 / 3 != 0) {
      uVar16 = 0;
      uVar18 = (ulong)param_1 & 0xffffffff;
      if (uVar17 / 3 == 1) goto LAB_00100f20;
LAB_00100e38:
      iVar4 = 3;
      local_58[0] = BitAccessStream::getNext(this_00,iVar12);
      uVar19 = BitAccessStream::getNext(this_00,3);
      local_58[1] = BitAccessStream::getNext(this_00,iVar12);
      iVar3 = BitAccessStream::getNext(this_00,2);
      local_58[2] = BitAccessStream::getNext(this_00,iVar12);
      iVar8 = BitAccessStream::getNext(this_00,2);
      uVar10 = (ulong)uVar19;
LAB_00100e9a:
      uVar10 = (ulong)((uint)uVar10 | iVar8 << 5 | iVar3 << 3);
LAB_00100eb0:
      do {
        lVar14 = 0;
        p_Var13 = this + uVar16 * 0x24;
        do {
          iVar8 = (&decodeISEQuintBlock(basisu_astc::astc::(anonymous_namespace)::ISEDecodedResult*,int,basisu_astc::astc::(anonymous_namespace)::BitAccessStream&,int)
                    ::quintsFromQ)[uVar10 * 3 + lVar14];
          iVar3 = local_58[lVar14];
          piVar1 = local_58 + lVar14;
          lVar14 = lVar14 + 1;
          *(int *)(p_Var13 + 8) = (iVar8 << ((byte)param_4 & 0x1f)) + *piVar1;
          *(ulong *)p_Var13 = CONCAT44(iVar8,iVar3);
          p_Var13 = p_Var13 + 0xc;
        } while ((int)lVar14 < iVar4);
        while( true ) {
          uVar16 = uVar16 + 1;
          uVar18 = (ulong)((int)uVar18 - 3);
          if ((ulong)uVar17 / 3 == uVar16) goto LAB_00100c62;
          if (uVar17 / 3 - 1 != (int)uVar16) goto LAB_00100e38;
LAB_00100f20:
          iVar4 = (int)uVar18;
          local_58[0] = BitAccessStream::getNext(this_00,iVar12);
          uVar19 = BitAccessStream::getNext(this_00,3);
          local_58[1] = BitAccessStream::getNext(this_00,iVar12);
          iVar3 = BitAccessStream::getNext(this_00,2);
          local_58[2] = BitAccessStream::getNext(this_00,iVar12);
          iVar8 = BitAccessStream::getNext(this_00,2);
          uVar10 = (ulong)uVar19;
          if (iVar4 == 1) goto LAB_00100eb0;
          if (iVar4 == 2) break;
          if (0 < iVar4) goto LAB_00100e9a;
        }
        uVar10 = (ulong)(uVar19 | iVar3 << 3);
      } while( true );
    }
  }
  else if (0 < iVar8) {
    p_Var13 = this;
    do {
      p_Var15 = p_Var13 + 0xc;
      uVar7 = BitAccessStream::getNext(this_00,iVar12);
      *(undefined4 *)p_Var13 = uVar7;
      *(undefined4 *)(p_Var13 + 8) = uVar7;
      p_Var13 = p_Var15;
    } while (this + (long)iVar8 * 0xc != p_Var15);
  }
LAB_00100c62:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu_astc::astc::(anonymous namespace)::decompressBlock(void*, basisu_astc::astc::(anonymous
   namespace)::Block128 const&, int, int, bool, bool) */

undefined8
basisu_astc::astc::(anonymous_namespace)::decompressBlock
          (void *param_1,Block128 *param_2,int param_3,int param_4,bool param_5,bool param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  sbyte sVar5;
  uint uVar6;
  int iVar7;
  _anonymous_namespace_ *p_Var8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  UVec4 *pUVar18;
  size_t __n;
  _anonymous_namespace_ *p_Var19;
  _anonymous_namespace_ *p_Var20;
  int iVar21;
  int iVar22;
  int iVar23;
  ISEParams *pIVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  UVec4 *pUVar34;
  undefined1 *puVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  ISEParams *pIVar39;
  _anonymous_namespace_ *p_Var40;
  ulong uVar41;
  byte bVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  ulong uVar46;
  void *pvVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  _anonymous_namespace_ _Var51;
  BitAccessStream *pBVar52;
  ulong uVar53;
  int iVar54;
  long in_FS_OFFSET;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 extraout_XMM1_Da;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar74;
  undefined8 uVar75;
  undefined1 auVar76 [16];
  uint local_a54;
  int local_a38;
  int local_a0c;
  undefined8 local_9f8;
  uint local_9ec;
  uint local_9e8;
  Block128 **local_9d8;
  _anonymous_namespace_ *local_9c8;
  _anonymous_namespace_ local_998;
  char local_997;
  byte local_996;
  int local_994;
  int local_990;
  uint local_98c;
  uint local_988;
  Block128 *local_978;
  undefined4 local_970;
  int local_96c;
  undefined1 local_968;
  undefined4 local_964;
  uint local_958 [4];
  UVec4 local_948 [32];
  UVec4 local_928 [32];
  UVec4 local_908 [32];
  UVec4 local_8e8 [32];
  UVec4 local_8c8 [256];
  _anonymous_namespace_ local_7c8 [4];
  uint uStack_7c4;
  undefined8 uStack_7c0;
  uint local_7b8 [188];
  _anonymous_namespace_ local_4c8 [4];
  _anonymous_namespace_ a_Stack_4c4 [4];
  _anonymous_namespace_ a_Stack_4c0 [8];
  _anonymous_namespace_ local_4b8 [1144];
  long local_40;
  
  iVar21 = param_3 * param_4;
  uVar41 = *(ulong *)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar42 = param_6;
  getASTCBlockMode(&local_998,(uint)uVar41 & 0x7ff);
  uVar74 = _UNK_001064e8;
  fVar56 = _LC0;
  fVar68 = _LC3;
  uVar57 = _LC1;
  if (local_998 == (_anonymous_namespace_)0x0) {
    uVar6 = (uint)(uVar41 >> 0x20);
    if (local_997 != '\0') {
      uVar75 = *(undefined8 *)(param_2 + 8);
      uVar49 = uVar6 >> 6 & 0x1fff;
      uVar32 = (uint)(uVar41 >> 0xc) & 0x1fff;
      uVar25 = (uint)(uVar41 >> 0x19) & 0x1fff;
      bVar42 = bVar42 & (byte)(uVar41 >> 9) & 1;
      uVar6 = uVar6 >> 0x13;
      if ((uVar32 == 0x1fff) && (uVar25 == 0x1fff)) {
        if ((bVar42 != 0) || (uVar49 != 0x1fff || uVar6 != 0x1fff)) {
LAB_00101560:
          if (param_5) {
            if (0 < iVar21) {
              puVar3 = (undefined4 *)((long)param_1 + (ulong)(iVar21 - 1) * 4 + 4);
              do {
                *(undefined4 *)param_1 = uVar57;
                param_1 = (void *)((long)param_1 + 4);
              } while ((undefined4 *)param_1 != puVar3);
            }
          }
          else if (0 < iVar21) {
            uVar75 = CONCAT44(_UNK_001064e4,_LC0);
            puVar2 = (undefined8 *)((long)param_1 + (ulong)(iVar21 - 1) * 0x10 + 0x10);
            do {
              *(undefined8 *)param_1 = uVar75;
              *(undefined8 *)((long)param_1 + 8) = uVar74;
              param_1 = (void *)((long)param_1 + 0x10);
            } while (puVar2 != (undefined8 *)param_1);
          }
          goto LAB_0010132c;
        }
      }
      else if ((bVar42 != 0) || ((uVar25 <= uVar32 || (uVar6 <= uVar49)))) goto LAB_00101560;
      _local_4c8 = CONCAT44((int)((ulong)uVar75 >> 0x10),(int)uVar75) & 0xffff0000ffff;
      register0x00001208 =
           CONCAT24((short)((ulong)uVar75 >> 0x30),(int)((ulong)uVar75 >> 0x20)) & 0xffff0000ffff;
      register0x0000120e = 0;
      if (param_5) {
        if (0 < iVar21) {
          pvVar47 = (void *)((long)param_1 + (long)iVar21 * 4);
          do {
            lVar9 = 0;
            do {
              *(char *)((long)param_1 + lVar9) =
                   (char)((uint)*(undefined4 *)(local_4c8 + lVar9 * 4) >> 8);
              lVar9 = lVar9 + 1;
            } while (lVar9 != 4);
            param_1 = (void *)((long)param_1 + 4);
          } while (pvVar47 != param_1);
        }
      }
      else if ((uVar41 >> 9 & 1) == 0) {
        if (0 < iVar21) {
          pvVar47 = (void *)((long)iVar21 * 0x10 + (long)param_1);
          do {
            lVar9 = 0;
            do {
              fVar55 = fVar56;
              if (*(uint *)(local_4c8 + lVar9) != 0xffff) {
                fVar55 = (float)*(uint *)(local_4c8 + lVar9) * fVar68;
              }
              *(float *)((long)param_1 + lVar9) = fVar55;
              lVar9 = lVar9 + 4;
            } while (lVar9 != 0x10);
            param_1 = (void *)((long)param_1 + 0x10);
          } while (pvVar47 != param_1);
          local_9f8 = 0;
          goto LAB_00101331;
        }
      }
      else {
        p_Var8 = local_4c8;
        do {
          if ((~(byte)((ushort)*(undefined2 *)p_Var8 >> 8) & 0x7c) == 0) {
            if (0 < iVar21) {
              uVar75 = CONCAT44(_UNK_001064e4,_LC0);
              puVar2 = (undefined8 *)((long)param_1 + (ulong)(iVar21 - 1) * 0x10 + 0x10);
              do {
                *(undefined8 *)param_1 = uVar75;
                *(undefined8 *)((long)param_1 + 8) = uVar74;
                param_1 = (void *)((long)param_1 + 0x10);
              } while (puVar2 != (undefined8 *)param_1);
            }
            goto LAB_0010132c;
          }
          p_Var8 = p_Var8 + 4;
        } while (local_4b8 != p_Var8);
        if (0 < iVar21) {
          pvVar47 = (void *)((long)iVar21 * 0x10 + (long)param_1);
          do {
            lVar9 = 0;
            do {
              uVar57 = deFloat16To32(*(ushort *)(local_4c8 + lVar9));
              *(undefined4 *)((long)param_1 + lVar9) = uVar57;
              lVar9 = lVar9 + 4;
            } while (lVar9 != 0x10);
            param_1 = (void *)((long)param_1 + 0x10);
          } while (pvVar47 != param_1);
          local_9f8 = 0;
          goto LAB_00101331;
        }
      }
LAB_00101465:
      local_9f8 = 0;
      goto LAB_00101331;
    }
    iVar31 = local_996 + 1;
    uVar6 = local_994 * local_990 * iVar31;
    if (local_98c == 1) {
      uVar25 = (uVar6 * 7 + 2) / 3;
LAB_001010c7:
      iVar16 = uVar25 + local_988 * uVar6;
LAB_001010d8:
      if ((local_994 <= param_3 && ((int)uVar6 < 0x41 && local_990 <= param_4)) &&
          iVar16 - 0x18U < 0x49) {
        uVar25 = (uint)(uVar41 >> 0xb) & 3;
        iVar26 = uVar25 + 1;
        if (uVar25 == 3) {
          if (local_996 != 0) goto LAB_001012f0;
LAB_00101113:
          local_a0c = 0x80 - iVar16;
          if ((uVar41 & 0x1800000) == 0) {
            iVar22 = local_a0c - ((uint)local_996 * 2 + 0x1d);
            goto LAB_0010174b;
          }
          iVar22 = local_a0c - (iVar26 * 3 + 0x19 + (uint)local_996 * 2);
          local_a0c = (0x7f - iVar16) - (uVar25 * 3 + -2);
          decodeColorEndpointModes(local_958,param_2,iVar26,local_a0c);
        }
        else {
          if (iVar26 != 1) goto LAB_00101113;
          local_a0c = 0x80 - iVar16;
          iVar22 = local_a0c - (local_996 + 0x11 + (uint)local_996);
LAB_0010174b:
          decodeColorEndpointModes(local_958,param_2,iVar26,local_a0c);
        }
        uVar74 = _UNK_001064e8;
        uVar57 = _LC1;
        uVar32 = 0;
        lVar9 = 0;
        do {
          uVar32 = uVar32 + 2 + (local_958[lVar9] >> 2) * 2;
          iVar16 = (int)lVar9;
          lVar9 = lVar9 + 1;
        } while (iVar16 < (int)uVar25);
        if ((0x12 < (int)uVar32) || (iVar22 < (int)((uVar32 * 0xd + 4) / 5))) {
          if (param_5) {
            if (0 < iVar21) {
              puVar3 = (undefined4 *)((long)param_1 + (ulong)(iVar21 - 1) * 4 + 4);
              do {
                *(undefined4 *)param_1 = uVar57;
                param_1 = (void *)((long)param_1 + 4);
              } while ((undefined4 *)param_1 != puVar3);
            }
          }
          else if (0 < iVar21) {
            uVar75 = CONCAT44(_UNK_001064e4,_LC0);
            puVar2 = (undefined8 *)((long)param_1 + (ulong)(iVar21 - 1) * 0x10 + 0x10);
            do {
              *(undefined8 *)param_1 = uVar75;
              *(undefined8 *)((long)param_1 + 8) = uVar74;
              param_1 = (void *)((long)param_1 + 0x10);
            } while ((undefined8 *)param_1 != puVar2);
          }
          goto LAB_0010132c;
        }
        pUVar34 = local_948;
        do {
          *(undefined1 (*) [16])pUVar34 = (undefined1  [16])0x0;
          pUVar18 = pUVar34 + 0x20;
          *(undefined1 (*) [16])(pUVar34 + 0x10) = (undefined1  [16])0x0;
          pUVar34 = pUVar18;
        } while (local_8c8 != pUVar18);
        pIVar39 = (ISEParams *)0x8;
        pIVar24 = (ISEParams *)0x6;
        uVar49 = 5;
        while( true ) {
          while( true ) {
            iVar7 = (int)pIVar24;
            iVar16 = (3 << ((byte)pIVar24 & 0x1f)) + -1;
            if (iVar7 < 1) {
              iVar16 = -1;
            }
            iVar27 = (5 << ((byte)uVar49 & 0x1f)) + -1;
            if ((int)uVar49 < 1) {
              iVar27 = -1;
            }
            iVar36 = (int)pIVar39;
            iVar23 = -1;
            if (0 < iVar36) {
              iVar23 = (1 << ((byte)pIVar39 & 0x1f)) + -1;
            }
            iVar54 = iVar27;
            if (iVar27 <= iVar16) {
              iVar54 = iVar16;
            }
            if (iVar54 < iVar23) {
              iVar54 = iVar23;
            }
            local_978 = param_2;
            local_96c = iVar22;
            if (iVar16 == iVar54) break;
            if (iVar27 == iVar54) {
              local_a38 = (int)((ulong)(uVar32 * 7 + 2) / 3);
              if ((int)(uVar32 * uVar49 + local_a38) <= iVar22) {
                pBVar52 = (BitAccessStream *)0x1;
                pIVar39 = (ISEParams *)(ulong)uVar49;
                goto LAB_0010185d;
              }
              uVar49 = uVar49 - 1;
            }
            else {
              if ((int)(uVar32 * iVar36) <= iVar22) {
                if (iVar26 == 1) {
                  local_964 = 0;
                  local_970 = 0x11;
                  local_968 = 1;
                  decodeISE(local_4c8,(ISEDecodedResult *)(ulong)uVar32,(int)&local_978,
                            (BitAccessStream *)0x2,pIVar39);
                  goto LAB_001018dd;
                }
                pBVar52 = (BitAccessStream *)0x2;
                goto LAB_00101868;
              }
              pIVar39 = (ISEParams *)(ulong)(iVar36 - 1);
            }
          }
          if ((int)(uVar32 * iVar7 + (uVar32 * 8 + 4) / 5) <= iVar22) break;
          pIVar24 = (ISEParams *)(ulong)(iVar7 - 1);
        }
        pBVar52 = (BitAccessStream *)0x0;
        pIVar39 = pIVar24;
LAB_0010185d:
        iVar16 = (int)pBVar52;
        iVar36 = (int)pIVar39;
        if (iVar26 == 1) {
          local_970 = 0x11;
          local_968 = 1;
          local_964 = 0;
          decodeISE(local_4c8,(ISEDecodedResult *)(ulong)uVar32,(int)&local_978,pBVar52,pIVar39);
LAB_0010314f:
          iVar22 = iVar16 + -2 + iVar36 * 2;
          iVar16 = *(int *)(unquantizeColorEndpoints(unsigned_int*,basisu_astc::astc::(anonymous_namespace)::ISEDecodedResult_const*,int,basisu_astc::astc::(anonymous_namespace)::ISEParams_const&)
                            ::Ca + (long)iVar22 * 4);
          if (0 < (int)uVar32) {
            p_Var40 = local_4c8 + 4;
            p_Var8 = local_7c8 + (long)(int)uVar32 * 4;
            p_Var20 = local_7c8;
LAB_00103196:
            uVar32 = *(uint *)(p_Var40 + -4);
            if ((uVar32 & 1) == 0) {
              uVar33 = 0;
              uVar49 = 0;
            }
            else {
              uVar33 = 0x80;
              uVar49 = 0x1ff;
            }
            if (iVar22 == 0) {
switchD_001031f8_caseD_1:
              while( true ) {
                p_Var19 = p_Var20 + 4;
                *(uint *)p_Var20 = uVar33 | (*(int *)p_Var40 * iVar16 ^ uVar49) >> 2;
                if (p_Var19 == p_Var8) break;
                p_Var20 = p_Var19;
                if ((*(uint *)(p_Var40 + 8) & 1) == 0) {
                  uVar33 = 0;
                  uVar49 = 0;
                  p_Var40 = p_Var40 + 0xc;
                }
                else {
                  uVar33 = 0x80;
                  uVar49 = 0x1ff;
                  p_Var40 = p_Var40 + 0xc;
                }
              }
              goto LAB_00101981;
            }
            local_9ec = uVar32 >> 2 & 1;
            uVar29 = uVar32 >> 1 & 1;
            uVar28 = uVar32 >> 3 & 1;
            uVar43 = uVar32 >> 4 & 1;
            switch(iVar22) {
            case 1:
              goto switchD_001031f8_caseD_1;
            case 2:
              while( true ) {
                p_Var19 = p_Var20 + 4;
                *(uint *)p_Var20 =
                     ((-uVar29 & 0x116) + *(int *)p_Var40 * iVar16 ^ uVar49) >> 2 | uVar33;
                if (p_Var19 == p_Var8) break;
                uVar29 = *(uint *)(p_Var40 + 8) >> 1 & 1;
                p_Var20 = p_Var19;
                if ((*(uint *)(p_Var40 + 8) & 1) == 0) {
                  uVar33 = 0;
                  uVar49 = 0;
                  p_Var40 = p_Var40 + 0xc;
                }
                else {
                  uVar33 = 0x80;
                  uVar49 = 0x1ff;
                  p_Var40 = p_Var40 + 0xc;
                }
              }
              break;
            case 3:
              while( true ) {
                p_Var19 = p_Var20 + 4;
                *(uint *)p_Var20 =
                     ((-uVar29 & 0x10c) + *(int *)p_Var40 * iVar16 ^ uVar49) >> 2 | uVar33;
                if (p_Var19 == p_Var8) break;
                uVar29 = *(uint *)(p_Var40 + 8) >> 1 & 1;
                p_Var20 = p_Var19;
                if ((*(uint *)(p_Var40 + 8) & 1) == 0) {
                  uVar33 = 0;
                  uVar49 = 0;
                  p_Var40 = p_Var40 + 0xc;
                }
                else {
                  uVar33 = 0x80;
                  uVar49 = 0x1ff;
                  p_Var40 = p_Var40 + 0xc;
                }
              }
              break;
            case 4:
              while( true ) {
                p_Var19 = p_Var20 + 4;
                *(uint *)p_Var20 =
                     ((local_9ec << 8 | uVar29 << 7 | uVar29 | local_9ec * 8 | uVar29 << 2 |
                      local_9ec * 2) + *(int *)p_Var40 * iVar16 ^ uVar49) >> 2 | uVar33;
                if (p_Var8 == p_Var19) break;
                uVar32 = *(uint *)(p_Var40 + 8);
                local_9ec = uVar32 >> 2 & 1;
                uVar29 = uVar32 >> 1 & 1;
                p_Var20 = p_Var19;
                if ((uVar32 & 1) == 0) {
                  uVar33 = 0;
                  uVar49 = 0;
                  p_Var40 = p_Var40 + 0xc;
                }
                else {
                  uVar33 = 0x80;
                  uVar49 = 0x1ff;
                  p_Var40 = p_Var40 + 0xc;
                }
              }
              break;
            case 5:
              while( true ) {
                p_Var19 = p_Var20 + 4;
                *(uint *)p_Var20 =
                     ((local_9ec << 8 | uVar29 << 7 | local_9ec | local_9ec << 2 | uVar29 * 2) +
                      *(int *)p_Var40 * iVar16 ^ uVar49) >> 2 | uVar33;
                if (p_Var8 == p_Var19) break;
                uVar32 = *(uint *)(p_Var40 + 8);
                local_9ec = uVar32 >> 2 & 1;
                uVar29 = uVar32 >> 1 & 1;
                p_Var20 = p_Var19;
                if ((uVar32 & 1) == 0) {
                  uVar33 = 0;
                  uVar49 = 0;
                  p_Var40 = p_Var40 + 0xc;
                }
                else {
                  uVar33 = 0x80;
                  uVar49 = 0x1ff;
                  p_Var40 = p_Var40 + 0xc;
                }
              }
              break;
            case 6:
              while( true ) {
                p_Var19 = p_Var20 + 4;
                *(uint *)p_Var20 =
                     ((uVar28 << 8 | local_9ec << 7 | uVar29 | uVar29 << 6 | uVar28 << 2 |
                      local_9ec * 2) + *(int *)p_Var40 * iVar16 ^ uVar49) >> 2 | uVar33;
                if (p_Var8 == p_Var19) break;
                uVar32 = *(uint *)(p_Var40 + 8);
                uVar28 = uVar32 >> 3 & 1;
                uVar29 = uVar32 >> 1 & 1;
                local_9ec = uVar32 >> 2 & 1;
                p_Var20 = p_Var19;
                if ((uVar32 & 1) == 0) {
                  uVar33 = 0;
                  uVar49 = 0;
                  p_Var40 = p_Var40 + 0xc;
                }
                else {
                  uVar33 = 0x80;
                  uVar49 = 0x1ff;
                  p_Var40 = p_Var40 + 0xc;
                }
              }
              break;
            case 7:
              while( true ) {
                p_Var19 = p_Var20 + 4;
                *(uint *)p_Var20 =
                     ((uVar28 << 8 | local_9ec << 7 | local_9ec | uVar29 << 6 | uVar28 * 2) +
                      *(int *)p_Var40 * iVar16 ^ uVar49) >> 2 | uVar33;
                if (p_Var8 == p_Var19) break;
                uVar32 = *(uint *)(p_Var40 + 8);
                uVar28 = uVar32 >> 3 & 1;
                uVar29 = uVar32 >> 1 & 1;
                local_9ec = uVar32 >> 2 & 1;
                p_Var20 = p_Var19;
                if ((uVar32 & 1) == 0) {
                  uVar33 = 0;
                  uVar49 = 0;
                  p_Var40 = p_Var40 + 0xc;
                }
                else {
                  uVar33 = 0x80;
                  uVar49 = 0x1ff;
                  p_Var40 = p_Var40 + 0xc;
                }
              }
              break;
            case 8:
              while( true ) {
                p_Var19 = p_Var20 + 4;
                *(uint *)p_Var20 =
                     ((uVar43 * 2 |
                      uVar43 << 8 | uVar28 << 7 | uVar28 | local_9ec << 6 | uVar29 << 5) +
                      *(int *)p_Var40 * iVar16 ^ uVar49) >> 2 | uVar33;
                if (p_Var8 == p_Var19) break;
                uVar32 = *(uint *)(p_Var40 + 8);
                local_9ec = uVar32 >> 2 & 1;
                uVar29 = uVar32 >> 1 & 1;
                uVar28 = uVar32 >> 3 & 1;
                uVar43 = uVar32 >> 4 & 1;
                p_Var20 = p_Var19;
                if ((uVar32 & 1) == 0) {
                  uVar33 = 0;
                  uVar49 = 0;
                  p_Var40 = p_Var40 + 0xc;
                }
                else {
                  uVar33 = 0x80;
                  uVar49 = 0x1ff;
                  p_Var40 = p_Var40 + 0xc;
                }
              }
              break;
            case 9:
              while( true ) {
                p_Var19 = p_Var20 + 4;
                *(uint *)p_Var20 =
                     ((uVar43 | uVar43 << 8 | uVar28 << 7 | local_9ec << 6 | uVar29 << 5) +
                      *(int *)p_Var40 * iVar16 ^ uVar49) >> 2 | uVar33;
                if (p_Var19 == p_Var8) break;
                uVar32 = *(uint *)(p_Var40 + 8);
                uVar29 = uVar32 >> 1 & 1;
                local_9ec = uVar32 >> 2 & 1;
                uVar28 = uVar32 >> 3 & 1;
                uVar43 = uVar32 >> 4 & 1;
                p_Var20 = p_Var19;
                if ((uVar32 & 1) == 0) {
                  uVar33 = 0;
                  uVar49 = 0;
                  p_Var40 = p_Var40 + 0xc;
                }
                else {
                  uVar33 = 0x80;
                  uVar49 = 0x1ff;
                  p_Var40 = p_Var40 + 0xc;
                }
              }
              break;
            case 10:
              while( true ) {
                p_Var19 = p_Var20 + 4;
                uVar32 = uVar32 >> 5 & 1;
                *(uint *)p_Var20 =
                     ((uVar32 << 8 | uVar43 << 7 | uVar32 | uVar28 << 6 | local_9ec << 5 |
                      uVar29 << 4) + *(int *)p_Var40 * iVar16 ^ uVar49) >> 2 | uVar33;
                if (p_Var19 == p_Var8) break;
                uVar32 = *(uint *)(p_Var40 + 8);
                local_9ec = uVar32 >> 2 & 1;
                uVar29 = uVar32 >> 1 & 1;
                uVar28 = uVar32 >> 3 & 1;
                uVar43 = uVar32 >> 4 & 1;
                p_Var20 = p_Var19;
                if ((uVar32 & 1) == 0) {
                  uVar33 = 0;
                  uVar49 = 0;
                  p_Var40 = p_Var40 + 0xc;
                }
                else {
                  uVar33 = 0x80;
                  uVar49 = 0x1ff;
                  p_Var40 = p_Var40 + 0xc;
                }
              }
              break;
            default:
              goto switchD_001031f8_default;
            }
          }
        }
        else {
LAB_00101868:
          iVar36 = (int)pIVar39;
          iVar16 = (int)pBVar52;
          local_970 = 0x1d;
          local_968 = 1;
          local_964 = 0;
          decodeISE(local_4c8,(ISEDecodedResult *)(ulong)uVar32,(int)&local_978,pBVar52,pIVar39);
          if (iVar16 != 2) goto LAB_0010314f;
LAB_001018dd:
          if (0 < (int)uVar32) {
            p_Var40 = local_7c8;
            iVar16 = 8 - iVar36;
            p_Var8 = p_Var40 + (long)(int)uVar32 * 4;
            p_Var20 = local_4c8 + 8;
            iVar22 = -iVar36;
            do {
              if (iVar16 == iVar22 || SBORROW4(iVar16,iVar22) != iVar16 + iVar36 < 0) {
                uVar32 = 0;
              }
              else {
                uVar32 = 0;
                iVar27 = -iVar16;
                iVar7 = iVar16;
                do {
                  uVar49 = *(uint *)p_Var20 >> ((byte)iVar27 & 0x1f);
                  if (-1 < iVar7) {
                    uVar49 = *(uint *)p_Var20 << ((byte)iVar7 & 0x1f);
                  }
                  iVar7 = iVar7 - iVar36;
                  iVar27 = iVar27 + iVar36;
                  uVar32 = uVar32 | uVar49;
                } while (iVar7 != iVar22 && SBORROW4(iVar7,iVar22) == iVar7 + iVar36 < 0);
              }
              *(uint *)p_Var40 = uVar32;
              p_Var40 = p_Var40 + 4;
              p_Var20 = p_Var20 + 0xc;
            } while (p_Var8 != p_Var40);
          }
        }
LAB_00101981:
        local_9d8 = &local_978;
        local_9c8 = local_7c8;
        p_Var8 = local_4c8;
        iVar16 = 0;
        lVar9 = 0;
        pUVar34 = local_948;
        do {
          auVar65 = __LC5;
          lVar13 = (long)iVar16;
          pUVar18 = pUVar34 + 0x10;
          lVar1 = lVar13 * 4;
          p_Var40 = local_9c8 + lVar1;
          iVar16 = iVar16 + 2 + (local_958[lVar9] >> 2) * 2;
          iVar22 = SUB164(__LC5,0);
          iVar7 = SUB164(__LC5,4);
          iVar27 = SUB164(__LC5,8);
          iVar23 = SUB164(__LC5,0xc);
          switch(local_958[lVar9]) {
          case 0:
            uVar74 = *(undefined8 *)p_Var40;
            uVar32 = (&uStack_7c4)[lVar13];
            *(undefined4 *)(pUVar34 + 0xc) = 0xff;
            *(undefined4 *)(pUVar34 + 0x1c) = 0xff;
            uVar57 = (undefined4)uVar74;
            *(uint *)(pUVar34 + 0x10) = uVar32;
            *(uint *)(pUVar34 + 0x14) = uVar32;
            *(uint *)(pUVar34 + 0x18) = uVar32;
            *(ulong *)pUVar34 = CONCAT44(uVar57,uVar57);
            *(undefined4 *)(pUVar34 + 8) = uVar57;
            break;
          case 1:
            uVar32 = (&uStack_7c4)[lVar13];
            uVar49 = *(uint *)p_Var40;
            *(undefined4 *)(pUVar34 + 0xc) = 0xff;
            *(undefined4 *)(pUVar34 + 0x1c) = 0xff;
            uVar49 = uVar49 >> 2 | uVar32 & 0xc0;
            uVar32 = (uVar32 & 0x3f) + uVar49;
            *(uint *)(pUVar34 + 8) = uVar49;
            if (0xff < uVar32) {
              uVar32 = 0xff;
            }
            *(ulong *)pUVar34 = CONCAT44(uVar49,uVar49);
            *(uint *)(pUVar34 + 0x10) = uVar32;
            *(uint *)(pUVar34 + 0x14) = uVar32;
            *(uint *)(pUVar34 + 0x18) = uVar32;
            break;
          case 2:
            uVar49 = *(uint *)p_Var40 * 0x10;
            uVar33 = (&uStack_7c4)[lVar13] * 0x10;
            uVar32 = uVar49;
            if ((&uStack_7c4)[lVar13] < *(uint *)p_Var40) {
              uVar32 = uVar33 + 8;
              uVar33 = uVar49 - 8;
            }
            goto LAB_00102077;
          case 3:
            uVar32 = (&uStack_7c4)[lVar13];
            uVar49 = *(uint *)p_Var40;
            if ((char)uVar49 < '\0') {
              uVar33 = (uVar32 & 0x1f) << 2;
              uVar32 = uVar32 << 4 & 0xe00 | (uVar49 & 0x7f) << 2;
            }
            else {
              uVar33 = uVar32 * 2 & 0x1e;
              uVar32 = uVar32 << 4 & 0xf00 | uVar49 * 2 & 0xff;
            }
            uVar33 = uVar33 + uVar32;
            if (0xfff < uVar33) {
              uVar33 = 0xfff;
            }
LAB_00102077:
            *(uint *)(pUVar34 + 8) = uVar32;
            *(undefined4 *)(pUVar34 + 0xc) = 0x780;
            *(uint *)(pUVar34 + 0x10) = uVar33;
            *(uint *)(pUVar34 + 0x14) = uVar33;
            *(uint *)(pUVar34 + 0x18) = uVar33;
            *(undefined4 *)(pUVar34 + 0x1c) = 0x780;
            *(ulong *)pUVar34 = CONCAT44(uVar32,uVar32);
            break;
          case 4:
            uVar32 = *(uint *)p_Var40;
            uVar49 = (&uStack_7c4)[lVar13];
            auVar67._4_4_ = uVar32;
            auVar67._0_4_ = uVar32;
            auVar67._8_4_ = uVar32;
            auVar67._12_4_ = *(undefined4 *)((long)&uStack_7c0 + lVar1);
            auVar59._4_4_ = uVar49;
            auVar59._0_4_ = uVar49;
            auVar59._8_4_ = uVar49;
            auVar59._12_4_ = local_7b8[lVar13 + -1];
            *(undefined1 (*) [16])pUVar34 = auVar67;
            *(undefined1 (*) [16])(pUVar34 + 0x10) = auVar59;
            break;
          case 5:
            uVar32 = (&uStack_7c4)[lVar13];
            auVar61._4_4_ = uVar32;
            auVar61._0_4_ = uVar32;
            auVar61._8_4_ = uVar32;
            auVar61._12_4_ = local_7b8[lVar13 + -1];
            auVar71._0_4_ = (int)*(uint *)p_Var40 >> 1;
            auVar71._4_4_ = auVar71._0_4_;
            auVar71._8_4_ = auVar71._0_4_;
            auVar71._12_4_ = *(int *)((long)&uStack_7c0 + lVar1) >> 1;
            uVar49 = (int)(&uStack_7c4)[lVar13] >> 1;
            auVar71 = auVar71 | auVar61 & __LC4;
            uVar32 = uVar49 & 0x3f;
            if ((uVar49 & 0x20) != 0) {
              uVar32 = uVar49 | 0xffffffc0;
            }
            uVar33 = (int)local_7b8[lVar13 + -1] >> 1;
            auVar62._0_4_ = -(uint)(iVar22 < auVar71._0_4_);
            auVar62._4_4_ = -(uint)(iVar7 < auVar71._4_4_);
            auVar62._8_4_ = -(uint)(iVar27 < auVar71._8_4_);
            auVar62._12_4_ = -(uint)(iVar23 < auVar71._12_4_);
            uVar49 = uVar33 & 0x3f;
            if ((uVar33 & 0x20) != 0) {
              uVar49 = uVar33 | 0xffffffc0;
            }
            auVar63 = ~auVar62 & auVar71 | __LC5 & auVar62;
            auVar76._0_4_ = -(uint)(0 < auVar63._0_4_);
            auVar76._4_4_ = -(uint)(0 < auVar63._4_4_);
            auVar76._8_4_ = -(uint)(0 < auVar63._8_4_);
            auVar76._12_4_ = -(uint)(0 < auVar63._12_4_);
            *(undefined1 (*) [16])pUVar34 = auVar63 & auVar76;
            auVar63._0_4_ = uVar32 + auVar71._0_4_;
            auVar63._4_4_ = uVar32 + auVar71._4_4_;
            auVar63._8_4_ = uVar32 + auVar71._8_4_;
            auVar63._12_4_ = uVar49 + auVar71._12_4_;
LAB_00101ffe:
            auVar64._0_4_ = -(uint)(iVar22 < auVar63._0_4_);
            auVar64._4_4_ = -(uint)(iVar7 < auVar63._4_4_);
            auVar64._8_4_ = -(uint)(iVar27 < auVar63._8_4_);
            auVar64._12_4_ = -(uint)(iVar23 < auVar63._12_4_);
            auVar65 = ~auVar64 & auVar63 | auVar65 & auVar64;
            auVar66._0_4_ = -(uint)(0 < auVar65._0_4_);
            auVar66._4_4_ = -(uint)(0 < auVar65._4_4_);
            auVar66._8_4_ = -(uint)(0 < auVar65._8_4_);
            auVar66._12_4_ = -(uint)(0 < auVar65._12_4_);
            *(undefined1 (*) [16])(pUVar34 + 0x10) = auVar65 & auVar66;
            break;
          case 6:
            uVar32 = local_7b8[lVar13 + -1];
            uVar49 = (&uStack_7c4)[lVar13];
            *(undefined4 *)(pUVar34 + 0xc) = 0xff;
            uVar33 = *(uint *)p_Var40;
            iVar22 = *(int *)((long)&uStack_7c0 + lVar1);
            *(undefined4 *)(pUVar34 + 0x1c) = 0xff;
            *(uint *)(pUVar34 + 0x14) = uVar49;
            *(uint *)(pUVar34 + 0x10) = uVar33;
            *(int *)(pUVar34 + 0x18) = iVar22;
            *(uint *)(pUVar34 + 8) = uVar32 * iVar22 >> 8;
            *(ulong *)pUVar34 = CONCAT44(uVar32 * uVar49 >> 8,uVar32 * uVar33 >> 8);
            break;
          case 7:
            uVar32 = *(uint *)((long)&uStack_7c0 + lVar1);
            uVar49 = (&uStack_7c4)[lVar13];
            uVar33 = local_7b8[lVar13 + -1];
            uVar43 = *(uint *)p_Var40 >> 6;
            uVar28 = uVar43 & 3;
            uVar29 = uVar32 >> 6 & 2 | uVar49 >> 7 & 1;
            if (uVar29 == 3) {
              if (uVar28 == 3) {
                uVar28 = 5;
                uVar29 = 0;
              }
              else {
                uVar29 = uVar43 & 3;
                uVar28 = 4;
              }
            }
            uVar30 = *(uint *)p_Var40 & 0x3f;
            local_9e8 = uVar49 & 0x1f;
            uVar37 = uVar33 & 0x1f;
            uVar44 = uVar32 & 0x1f;
            uVar45 = uVar49 >> 6 & 1;
            uVar49 = uVar49 >> 5 & 1;
            uVar43 = uVar32 & 0x1f;
            uVar50 = uVar32 >> 6 & 1;
            uVar12 = uVar33 >> 6 & 1;
            uVar32 = uVar32 >> 5 & 1;
            uVar48 = uVar33 >> 5 & 1;
            uVar33 = uVar33 >> 7 & 1;
            switch((ulong)uVar28) {
            default:
              uVar30 = uVar50 << 7 | uVar45 << 9 | uVar49 << 8 | uVar30;
              uVar32 = uVar32 << 10;
              goto LAB_00102655;
            case 1:
              local_9e8 = local_9e8 | uVar49 << 5;
              uVar43 = uVar44 | uVar32 << 5;
              uVar30 = uVar12 << 10 | uVar33 << 6 | uVar45 << 8 | uVar50 << 7 | uVar30 | uVar48 << 9
              ;
              break;
            case 2:
              uVar30 = uVar32 << 6 | uVar50 << 7 | uVar45 << 9 | uVar49 << 8 | uVar30;
              uVar37 = uVar33 << 7 | uVar12 << 6 | uVar37 | uVar48 << 5;
              break;
            case 3:
              local_9e8 = local_9e8 | uVar49 << 5;
              uVar43 = uVar44 | uVar32 << 5;
              uVar32 = uVar45 << 8 | uVar50 << 7;
LAB_00102655:
              uVar30 = uVar32 | uVar30 | uVar33 << 6;
              uVar37 = uVar12 << 6 | uVar48 << 5 | uVar37;
              break;
            case 4:
              local_9e8 = local_9e8 | uVar45 << 6 | uVar49 << 5;
              uVar43 = uVar44 | uVar50 << 6 | uVar32 << 5;
              uVar30 = uVar33 << 6 | uVar12 << 7 | uVar30;
              uVar37 = uVar48 << 5 | uVar37;
              break;
            case 5:
              iVar27 = (uVar33 << 6 | uVar30) << 5;
              iVar22 = (uVar49 << 5 | uVar45 << 6 | local_9e8) << 5;
              iVar7 = (uVar50 << 6 | uVar32 << 5 | uVar44) << 5;
              iVar23 = (uVar12 << 6 | uVar48 << 5 | uVar37) << 5;
              goto LAB_0010240d;
            }
            bVar42 = (byte)*(undefined4 *)
                            (decodeHDREndpointMode7(basisu_astc::UVec4&,basisu_astc::UVec4&,unsigned_int,unsigned_int,unsigned_int,unsigned_int)
                             ::shiftAmounts + (ulong)uVar28 * 4);
            iVar27 = uVar30 << (bVar42 & 0x1f);
            iVar23 = uVar37 << (bVar42 & 0x1f);
            iVar22 = iVar27 - (local_9e8 << (bVar42 & 0x1f));
            iVar7 = iVar27 - (uVar43 << (bVar42 & 0x1f));
LAB_0010240d:
            iVar36 = iVar27;
            iVar54 = iVar7;
            if ((uVar29 != 1) && (iVar36 = iVar22, iVar22 = iVar7, iVar54 = iVar27, uVar29 != 2)) {
              iVar22 = iVar27;
              iVar54 = iVar7;
            }
            *(undefined4 *)(pUVar34 + 0xc) = 0x780;
            *(undefined4 *)(pUVar34 + 0x1c) = 0x780;
            iVar7 = 0xfff;
            if (iVar22 - iVar23 < 0x1000) {
              iVar7 = iVar22 - iVar23;
            }
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            *(int *)pUVar34 = iVar7;
            iVar7 = 0xfff;
            if (iVar36 - iVar23 < 0x1000) {
              iVar7 = iVar36 - iVar23;
            }
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            *(int *)(pUVar34 + 4) = iVar7;
            iVar23 = iVar54 - iVar23;
            if (0xfff < iVar23) {
              iVar23 = 0xfff;
            }
            if (iVar23 < 0) {
              iVar23 = 0;
            }
            *(int *)(pUVar34 + 8) = iVar23;
            if (0xfff < iVar22) {
              iVar22 = 0xfff;
            }
            if (iVar22 < 0) {
              iVar22 = 0;
            }
            *(int *)(pUVar34 + 0x10) = iVar22;
            if (0xfff < iVar36) {
              iVar36 = 0xfff;
            }
            if (iVar36 < 0) {
              iVar36 = 0;
            }
            *(int *)(pUVar34 + 0x14) = iVar36;
            iVar22 = 0xfff;
            if (iVar54 < 0x1000) {
              iVar22 = iVar54;
            }
            if (iVar22 < 0) {
              iVar22 = 0;
            }
            *(int *)(pUVar34 + 0x18) = iVar22;
            break;
          case 8:
            uVar32 = (&uStack_7c4)[lVar13];
            uVar49 = local_7b8[lVar13 + -1];
            uVar33 = local_7b8[lVar13 + 1];
            uVar29 = local_7b8[lVar13];
            iVar22 = (int)*(undefined8 *)((long)&uStack_7c0 + lVar1);
            iVar7 = (int)*(undefined8 *)p_Var40;
            if (uVar32 + uVar49 + uVar33 < iVar22 + iVar7 + uVar29) {
              *(undefined4 *)(pUVar34 + 0xc) = 0xff;
              iVar27 = (int)(uVar32 + uVar33) >> 1;
              *(undefined4 *)(pUVar34 + 0x1c) = 0xff;
              if (iVar27 < 0) {
                iVar27 = 0;
              }
              *(int *)pUVar34 = iVar27;
              iVar27 = (int)(uVar49 + uVar33) >> 1;
              if (iVar27 < 0) {
                iVar27 = 0;
              }
              *(int *)(pUVar34 + 4) = iVar27;
              if ((int)uVar33 < 0) {
                uVar33 = 0;
              }
              iVar7 = (int)(iVar7 + uVar29) >> 1;
              *(uint *)(pUVar34 + 8) = uVar33;
              if (iVar7 < 0) {
                iVar7 = 0;
              }
              *(int *)(pUVar34 + 0x10) = iVar7;
              iVar22 = (int)(iVar22 + uVar29) >> 1;
              if (iVar22 < 0) {
                iVar22 = 0;
              }
              *(int *)(pUVar34 + 0x14) = iVar22;
              if ((int)uVar29 < 0) {
                uVar29 = 0;
              }
              *(uint *)(pUVar34 + 0x18) = uVar29;
            }
            else {
              *(uint *)(pUVar34 + 8) = uVar29;
              *(undefined4 *)(pUVar34 + 0xc) = 0xff;
              *(uint *)(pUVar34 + 0x10) = uVar32;
              *(uint *)(pUVar34 + 0x14) = uVar49;
              *(uint *)(pUVar34 + 0x18) = uVar33;
              *(undefined4 *)(pUVar34 + 0x1c) = 0xff;
              *(ulong *)pUVar34 = CONCAT44(iVar22,iVar7);
            }
            break;
          case 9:
            uVar49 = (int)(&uStack_7c4)[lVar13] >> 1;
            uVar33 = (int)*(uint *)p_Var40 >> 1 | (&uStack_7c4)[lVar13] & 0x80;
            uVar32 = uVar49 | 0xffffffc0;
            if ((uVar49 & 0x20) == 0) {
              uVar32 = uVar49 & 0x3f;
            }
            uVar43 = (int)local_7b8[lVar13 + -1] >> 1;
            uVar29 = *(int *)((long)&uStack_7c0 + lVar1) >> 1 | local_7b8[lVar13 + -1] & 0x80;
            uVar49 = uVar43 & 0x3f;
            if ((uVar43 & 0x20) != 0) {
              uVar49 = uVar43 | 0xffffffc0;
            }
            uVar50 = (int)local_7b8[lVar13] >> 1 | local_7b8[lVar13 + 1] & 0x80;
            uVar28 = (int)local_7b8[lVar13 + 1] >> 1;
            uVar43 = uVar28 & 0x3f;
            if ((uVar28 & 0x20) != 0) {
              uVar43 = uVar28 | 0xffffffc0;
            }
            iVar22 = uVar29 + uVar49;
            iVar7 = uVar33 + uVar32;
            iVar27 = uVar50 + uVar43;
            iVar23 = 0xff;
            if (iVar27 < 0x100) {
              iVar23 = iVar27;
            }
            if (iVar23 < 0) {
              iVar23 = 0;
            }
            uVar28 = 0xff;
            if ((int)uVar50 < 0x100) {
              uVar28 = uVar50;
            }
            if ((int)uVar28 < 0) {
              uVar28 = 0;
            }
            if ((int)(uVar32 + uVar49 + uVar43) < 0) {
              *(int *)(pUVar34 + 8) = iVar23;
              *(undefined4 *)(pUVar34 + 0xc) = 0xff;
              iVar7 = iVar7 + iVar27 >> 1;
              if (0xff < iVar7) {
                iVar7 = 0xff;
              }
              if (iVar7 < 0) {
                iVar7 = 0;
              }
              *(int *)pUVar34 = iVar7;
              *(uint *)(pUVar34 + 0x18) = uVar28;
              *(undefined4 *)(pUVar34 + 0x1c) = 0xff;
              iVar22 = iVar22 + iVar27 >> 1;
              if (0xff < iVar22) {
                iVar22 = 0xff;
              }
              if (iVar22 < 0) {
                iVar22 = 0;
              }
              iVar7 = (int)(uVar50 + uVar33) >> 1;
              *(int *)(pUVar34 + 4) = iVar22;
              if (0xff < iVar7) {
                iVar7 = 0xff;
              }
              if (iVar7 < 0) {
                iVar7 = 0;
              }
              iVar22 = (int)(uVar50 + uVar29) >> 1;
              *(int *)(pUVar34 + 0x10) = iVar7;
              if (0xff < iVar22) {
                iVar22 = 0xff;
              }
              if (iVar22 < 0) {
                iVar22 = 0;
              }
              *(int *)(pUVar34 + 0x14) = iVar22;
            }
            else {
              *(uint *)(pUVar34 + 8) = uVar28;
              *(undefined4 *)(pUVar34 + 0xc) = 0xff;
              uVar32 = 0xff;
              if ((int)uVar33 < 0x100) {
                uVar32 = uVar33;
              }
              if ((int)uVar32 < 0) {
                uVar32 = 0;
              }
              *(uint *)pUVar34 = uVar32;
              uVar32 = 0xff;
              if ((int)uVar29 < 0x100) {
                uVar32 = uVar29;
              }
              *(int *)(pUVar34 + 0x18) = iVar23;
              *(undefined4 *)(pUVar34 + 0x1c) = 0xff;
              if ((int)uVar32 < 0) {
                uVar32 = 0;
              }
              *(uint *)(pUVar34 + 4) = uVar32;
              iVar27 = 0xff;
              if (iVar7 < 0x100) {
                iVar27 = iVar7;
              }
              if (iVar27 < 0) {
                iVar27 = 0;
              }
              *(int *)(pUVar34 + 0x10) = iVar27;
              iVar7 = 0xff;
              if (iVar22 < 0x100) {
                iVar7 = iVar22;
              }
              if (iVar7 < 0) {
                iVar7 = 0;
              }
              *(int *)(pUVar34 + 0x14) = iVar7;
            }
            break;
          case 10:
            uVar32 = local_7b8[lVar13 + -1];
            iVar22 = *(int *)((long)&uStack_7c0 + lVar1);
            uVar49 = (&uStack_7c4)[lVar13];
            uVar33 = *(uint *)p_Var40;
            auVar69._12_4_ = local_7b8[lVar13 + 1];
            auVar69._8_4_ = iVar22;
            auVar69._0_8_ = *(undefined8 *)p_Var40;
            uVar29 = local_7b8[lVar13];
            *(undefined1 (*) [16])(pUVar34 + 0x10) = auVar69;
            auVar58._12_4_ = uVar29;
            auVar58._8_4_ = iVar22 * uVar32 >> 8;
            auVar58._4_4_ = uVar49 * uVar32 >> 8;
            auVar58._0_4_ = uVar33 * uVar32 >> 8;
            *(undefined1 (*) [16])pUVar34 = auVar58;
            break;
          case 0xb:
            decodeHDREndpointMode11
                      (pUVar34,pUVar18,*(uint *)p_Var40,(&uStack_7c4)[lVar13],
                       *(uint *)((long)&uStack_7c0 + lVar1),local_7b8[lVar13 + -1],local_7b8[lVar13]
                       ,local_7b8[lVar13 + 1]);
            break;
          case 0xc:
            uVar32 = *(uint *)p_Var40;
            iVar36 = *(int *)((long)&uStack_7c0 + lVar1);
            uVar49 = local_7b8[lVar13 + 1];
            uVar33 = local_7b8[lVar13];
            uVar29 = *(uint *)p_Var40;
            uVar57 = *(undefined4 *)((long)&uStack_7c0 + lVar1);
            auVar63 = *(undefined1 (*) [16])(local_7b8 + lVar13);
            iVar54 = auVar63._12_4_;
            if ((&uStack_7c4)[lVar13] + local_7b8[lVar13 + -1] + uVar49 < uVar32 + iVar36 + uVar33)
            {
              iVar17 = (int)((&uStack_7c4)[lVar13] + uVar49) >> 1;
              iVar38 = (int)(local_7b8[lVar13 + -1] + uVar49) >> 1;
              auVar72._12_4_ = iVar54;
              auVar72._8_4_ = uVar49;
              auVar72._4_4_ = iVar38;
              auVar72._0_4_ = iVar17;
              auVar60._0_4_ = -(uint)(iVar22 < iVar17);
              auVar60._4_4_ = -(uint)(iVar7 < iVar38);
              auVar60._8_4_ = -(uint)(iVar27 < (int)uVar49);
              auVar60._12_4_ = -(uint)(iVar23 < iVar54);
              auVar60 = ~auVar60 & auVar72 | __LC5 & auVar60;
              auVar73._0_4_ = -(uint)(0 < auVar60._0_4_);
              auVar73._4_4_ = -(uint)(0 < auVar60._4_4_);
              auVar73._8_4_ = -(uint)(0 < auVar60._8_4_);
              auVar73._12_4_ = -(uint)(0 < auVar60._12_4_);
              *(undefined1 (*) [16])pUVar34 = auVar60 & auVar73;
              auVar63._12_4_ = auVar63._8_4_;
              auVar63._8_4_ = uVar33;
              auVar63._4_4_ = (int)(iVar36 + uVar33) >> 1;
              auVar63._0_4_ = (int)(uVar32 + uVar33) >> 1;
              goto LAB_00101ffe;
            }
            auVar65._4_4_ = local_7b8[lVar13 + -1];
            auVar65._0_4_ = (&uStack_7c4)[lVar13];
            auVar65._8_4_ = auVar63._4_4_;
            auVar65._12_4_ = iVar54;
            *(undefined1 (*) [16])(pUVar34 + 0x10) = auVar65;
            auVar70._4_4_ = uVar57;
            auVar70._0_4_ = uVar29;
            auVar70._8_4_ = auVar63._0_4_;
            auVar70._12_4_ = auVar63._8_4_;
            *(undefined1 (*) [16])pUVar34 = auVar70;
            break;
          case 0xd:
            uVar49 = (int)(&uStack_7c4)[lVar13] >> 1;
            uVar33 = (int)*(uint *)p_Var40 >> 1 | (&uStack_7c4)[lVar13] & 0x80;
            uVar32 = uVar49 & 0x3f;
            if ((uVar49 & 0x20) != 0) {
              uVar32 = uVar49 | 0xffffffc0;
            }
            uVar43 = (int)local_7b8[lVar13 + -1] >> 1;
            uVar29 = *(int *)((long)&uStack_7c0 + lVar1) >> 1 | local_7b8[lVar13 + -1] & 0x80;
            uVar49 = uVar43 | 0xffffffc0;
            if ((uVar43 & 0x20) == 0) {
              uVar49 = uVar43 & 0x3f;
            }
            uVar28 = (int)local_7b8[lVar13] >> 1 | local_7b8[lVar13 + 1] & 0x80;
            uVar50 = (int)local_7b8[lVar13 + 1] >> 1;
            uVar43 = uVar50 & 0x3f;
            if ((uVar50 & 0x20) != 0) {
              uVar43 = uVar50 | 0xffffffc0;
            }
            uVar44 = (int)local_7b8[lVar13 + 3] >> 1;
            iVar22 = uVar28 + uVar43;
            uVar12 = (int)local_7b8[lVar13 + 2] >> 1 | local_7b8[lVar13 + 3] & 0x80;
            uVar50 = uVar44 & 0x3f;
            if ((uVar44 & 0x20) != 0) {
              uVar50 = uVar44 | 0xffffffc0;
            }
            iVar27 = uVar33 + uVar32;
            iVar7 = uVar29 + uVar49;
            uVar44 = 0xff;
            if ((int)uVar12 < 0x100) {
              uVar44 = uVar12;
            }
            if ((int)uVar44 < 0) {
              uVar44 = 0;
            }
            uVar30 = 0xff;
            if ((int)uVar28 < 0x100) {
              uVar30 = uVar28;
            }
            if ((int)uVar30 < 0) {
              uVar30 = 0;
            }
            iVar23 = uVar50 + uVar12;
            if (0xff < (int)(uVar50 + uVar12)) {
              iVar23 = 0xff;
            }
            if (iVar23 < 0) {
              iVar23 = 0;
            }
            iVar36 = 0xff;
            if (iVar22 < 0x100) {
              iVar36 = iVar22;
            }
            if (iVar36 < 0) {
              iVar36 = 0;
            }
            if ((int)(uVar49 + uVar32 + uVar43) < 0) {
              *(int *)(pUVar34 + 0xc) = iVar23;
              *(int *)(pUVar34 + 8) = iVar36;
              *(uint *)(pUVar34 + 0x18) = uVar30;
              iVar27 = iVar27 + iVar22 >> 1;
              *(uint *)(pUVar34 + 0x1c) = uVar44;
              if (0xff < iVar27) {
                iVar27 = 0xff;
              }
              if (iVar27 < 0) {
                iVar27 = 0;
              }
              *(int *)pUVar34 = iVar27;
              iVar22 = iVar7 + iVar22 >> 1;
              if (0xff < iVar22) {
                iVar22 = 0xff;
              }
              if (iVar22 < 0) {
                iVar22 = 0;
              }
              *(int *)(pUVar34 + 4) = iVar22;
              iVar22 = (int)(uVar33 + uVar28) >> 1;
              if (0xff < iVar22) {
                iVar22 = 0xff;
              }
              if (iVar22 < 0) {
                iVar22 = 0;
              }
              *(int *)(pUVar34 + 0x10) = iVar22;
              iVar22 = (int)(uVar29 + uVar28) >> 1;
              if (0xff < iVar22) {
                iVar22 = 0xff;
              }
              if (iVar22 < 0) {
                iVar22 = 0;
              }
              *(int *)(pUVar34 + 0x14) = iVar22;
            }
            else {
              *(uint *)(pUVar34 + 0xc) = uVar44;
              *(uint *)(pUVar34 + 8) = uVar30;
              *(int *)(pUVar34 + 0x18) = iVar36;
              uVar32 = 0xff;
              if ((int)uVar33 < 0x100) {
                uVar32 = uVar33;
              }
              *(int *)(pUVar34 + 0x1c) = iVar23;
              if ((int)uVar32 < 0) {
                uVar32 = 0;
              }
              *(uint *)pUVar34 = uVar32;
              uVar32 = 0xff;
              if ((int)uVar29 < 0x100) {
                uVar32 = uVar29;
              }
              if ((int)uVar32 < 0) {
                uVar32 = 0;
              }
              *(uint *)(pUVar34 + 4) = uVar32;
              iVar22 = 0xff;
              if (iVar27 < 0x100) {
                iVar22 = iVar27;
              }
              if (iVar22 < 0) {
                iVar22 = 0;
              }
              *(int *)(pUVar34 + 0x10) = iVar22;
              iVar22 = 0xff;
              if (iVar7 < 0x100) {
                iVar22 = iVar7;
              }
              if (iVar22 < 0) {
                iVar22 = 0;
              }
              *(int *)(pUVar34 + 0x14) = iVar22;
            }
            break;
          case 0xe:
            decodeHDREndpointMode11
                      (pUVar34,pUVar18,*(uint *)p_Var40,(&uStack_7c4)[lVar13],
                       *(uint *)((long)&uStack_7c0 + lVar1),local_7b8[lVar13 + -1],local_7b8[lVar13]
                       ,local_7b8[lVar13 + 1]);
            *(uint *)(pUVar34 + 0xc) = local_7b8[lVar13 + 2];
            *(uint *)(pUVar34 + 0x1c) = local_7b8[lVar13 + 3];
            break;
          case 0xf:
            uVar32 = local_7b8[lVar13 + 3];
            uVar49 = local_7b8[lVar13 + 2];
            decodeHDREndpointMode11
                      (pUVar34,pUVar18,*(uint *)p_Var40,(&uStack_7c4)[lVar13],
                       *(uint *)((long)&uStack_7c0 + lVar1),local_7b8[lVar13 + -1],local_7b8[lVar13]
                       ,local_7b8[lVar13 + 1]);
            uVar33 = uVar32 & 0x7f;
            uVar29 = uVar49 & 0x7f;
            uVar32 = uVar32 >> 6 & 2 | uVar49 >> 7 & 1;
            if (uVar32 == 3) {
              *(uint *)(pUVar34 + 0xc) = uVar29 << 5;
              *(uint *)(pUVar34 + 0x1c) = uVar33 << 5;
            }
            else {
              sVar5 = (sbyte)uVar32;
              iVar22 = (uVar33 << sVar5 + 1 & 0x780 | uVar29) << (4U - sVar5 & 0x1f);
              *(int *)(pUVar34 + 0xc) = iVar22;
              iVar22 = iVar22 + ((0x3f >> sVar5 & uVar33 ^ 0x20 >> sVar5) - (0x20 >> sVar5) <<
                                (4U - sVar5 & 0x1f));
              if (0xfff < iVar22) {
                iVar22 = 0xfff;
              }
              if (iVar22 < 0) {
                iVar22 = 0;
              }
              *(int *)(pUVar34 + 0x1c) = iVar22;
            }
          }
          pUVar34 = pUVar34 + 0x20;
          iVar22 = (int)lVar9;
          lVar9 = lVar9 + 1;
        } while (iVar22 < (int)uVar25);
        if (local_98c == 1) {
          local_96c = (uVar6 * 7 + 2) / 3 + local_988 * uVar6;
LAB_00101a90:
          uVar32 = local_988 * 2;
          local_970 = 0x7f;
          local_968 = 0;
          local_964 = 0;
          local_978 = param_2;
          decodeISE(local_9c8,(ISEDecodedResult *)(ulong)uVar6,(int)local_9d8,
                    (BitAccessStream *)(ulong)local_98c,(ISEParams *)(ulong)local_988);
          if (local_98c == 1) {
            uVar32 = uVar32 + 1;
            puVar35 = unquantizeWeights(unsigned_int*,basisu_astc::astc::(anonymous_namespace)::ISEDecodedResult_const*,basisu_astc::astc::(anonymous_namespace)::ASTCBlockMode_const&)
                      ::map1;
            if (1 < uVar32) goto LAB_00101b07;
          }
          else {
            if (1 < uVar32) {
LAB_00101b07:
              iVar16 = *(int *)(unquantizeWeights(unsigned_int*,basisu_astc::astc::(anonymous_namespace)::ISEDecodedResult_const*,basisu_astc::astc::(anonymous_namespace)::ASTCBlockMode_const&)
                                ::Ca + (long)(int)(uVar32 - 2) * 4);
              if (0 < (int)uVar6) {
                puVar14 = &uStack_7c4;
                pUVar34 = local_8c8;
                do {
                  uVar49 = puVar14[-1];
                  uVar33 = uVar49 >> 1 & 1;
                  if ((uVar49 & 1) == 0) {
                    uVar43 = 0;
                    uVar29 = 0;
                  }
                  else {
                    uVar43 = 0x20;
                    uVar29 = 0x7f;
                  }
                  if (uVar32 == 4) {
                    uVar28 = -uVar33 & 0x45;
                  }
                  else if ((int)uVar32 < 5) {
                    uVar28 = -(uint)(1 < uVar32 - 2);
                  }
                  else if (uVar32 == 5) {
                    uVar28 = -uVar33 & 0x42;
                  }
                  else {
                    uVar28 = 0xffffffff;
                    if (uVar32 == 6) {
                      uVar49 = uVar49 >> 2 & 1;
                      uVar28 = uVar49 << 6 | uVar33 << 5 | uVar33 | uVar49 * 2;
                    }
                  }
                  uVar49 = *puVar14;
                  pUVar18 = pUVar34 + 4;
                  puVar14 = puVar14 + 3;
                  *(uint *)pUVar34 = (uVar49 * iVar16 + uVar28 ^ uVar29) >> 2 | uVar43;
                  pUVar34 = pUVar18;
                } while (local_8c8 + (long)(int)uVar6 * 4 != pUVar18);
                goto LAB_001027a4;
              }
              goto LAB_001027cd;
            }
            puVar35 = unquantizeWeights(unsigned_int*,basisu_astc::astc::(anonymous_namespace)::ISEDecodedResult_const*,basisu_astc::astc::(anonymous_namespace)::ASTCBlockMode_const&)
                      ::map0;
          }
          if ((int)uVar6 < 1) goto LAB_001027cd;
          puVar14 = (uint *)&uStack_7c0;
          pUVar34 = local_8c8;
          do {
            uVar32 = *puVar14;
            pUVar18 = pUVar34 + 4;
            puVar14 = puVar14 + 3;
            *(undefined4 *)pUVar34 = *(undefined4 *)(puVar35 + (ulong)uVar32 * 4);
            pUVar34 = pUVar18;
          } while (local_8c8 + (long)(int)uVar6 * 4 != pUVar18);
LAB_001027a4:
          pUVar34 = local_8c8;
          do {
            pUVar18 = pUVar34 + 4;
            *(uint *)pUVar34 = (uint)(0x20 < *(uint *)pUVar34) + *(uint *)pUVar34;
            pUVar34 = pUVar18;
          } while (local_8c8 + (long)(int)uVar6 * 4 != pUVar18);
          if ((int)uVar6 < 0x40) goto LAB_001027cd;
        }
        else {
          if (local_98c != 2) {
            local_96c = (uVar6 * 8 + 4) / 5 + local_988 * uVar6;
            goto LAB_00101a90;
          }
          local_970 = 0x7f;
          local_96c = local_988 * uVar6;
          local_968 = 0;
          local_964 = 0;
          local_978 = param_2;
          decodeISE(local_9c8,(ISEDecodedResult *)(ulong)uVar6,(int)local_9d8,(BitAccessStream *)0x2
                    ,(ISEParams *)(ulong)local_988);
          if (0 < (int)uVar6) {
            puVar14 = (uint *)&uStack_7c0;
            iVar16 = 6 - local_988;
            iVar22 = -local_988;
            pUVar34 = local_8c8;
            do {
              if (iVar16 == iVar22 || SBORROW4(iVar16,iVar22) != (int)(iVar16 + local_988) < 0) {
                uVar32 = 0;
              }
              else {
                uVar32 = 0;
                iVar27 = -iVar16;
                iVar7 = iVar16;
                do {
                  uVar49 = *puVar14 >> ((byte)iVar27 & 0x1f);
                  if (-1 < iVar7) {
                    uVar49 = *puVar14 << ((byte)iVar7 & 0x1f);
                  }
                  iVar7 = iVar7 - local_988;
                  iVar27 = iVar27 + local_988;
                  uVar32 = uVar32 | uVar49;
                } while (iVar7 != iVar22 && SBORROW4(iVar7,iVar22) == (int)(iVar7 + local_988) < 0);
              }
              *(uint *)pUVar34 = uVar32;
              pUVar34 = pUVar34 + 4;
              puVar14 = puVar14 + 3;
            } while (local_8c8 + (long)(int)uVar6 * 4 != pUVar34);
            goto LAB_001027a4;
          }
LAB_001027cd:
          __n = (ulong)(0x3f - uVar6) * 4 + 4;
          if (0x3f < (int)uVar6) {
            __n = 4;
          }
          memset(local_8c8 + (long)(int)uVar6 * 4,0xff,__n);
        }
        if (0 < param_4) {
          iVar22 = 0;
          uVar6 = 0x20;
          iVar16 = iVar22;
          do {
            if (0 < param_3) {
              uVar49 = 0x20;
              uVar32 = uVar6 >> 6 & 0xf;
              p_Var40 = p_Var8 + (long)iVar16 * 8;
              do {
                uVar33 = uVar49 >> 6 & 0xf;
                iVar7 = (uVar49 >> 10) + (uVar6 >> 10) * local_994;
                iVar27 = iVar7 * iVar31;
                uVar29 = uVar33 * uVar32 + 8 >> 4;
                iVar7 = (iVar7 + local_994) * iVar31;
                lVar9 = 0;
                do {
                  iVar23 = (int)lVar9;
                  *(uint *)(p_Var40 + lVar9 * 4) =
                       *(int *)(local_8c8 + (ulong)(iVar27 + iVar23 & 0x3f) * 4) *
                       (((0x10 - uVar32) - uVar33) + uVar29) + 8 +
                       *(int *)(local_8c8 + (ulong)(iVar27 + iVar31 + iVar23 & 0x3f) * 4) *
                       (uVar33 - uVar29) +
                       uVar29 * *(int *)(local_8c8 + (ulong)(iVar7 + iVar31 + iVar23 & 0x3f) * 4) +
                       *(int *)(local_8c8 + (ulong)(iVar7 + iVar23 & 0x3f) * 4) * (uVar32 - uVar29)
                       >> 4;
                  lVar9 = lVar9 + 1;
                } while (lVar9 != 2 - (ulong)(local_996 == 0));
                p_Var40 = p_Var40 + 8;
                uVar49 = uVar49 + (local_994 + -1) * ((param_3 / 2 + 0x400) / (param_3 + -1));
              } while (p_Var8 + ((long)iVar16 + (long)param_3) * 8 != p_Var40);
            }
            iVar22 = iVar22 + 1;
            iVar16 = iVar16 + param_3;
            uVar6 = uVar6 + (local_990 + -1) * ((param_4 / 2 + 0x400) / (param_4 + -1));
          } while (param_4 != iVar22);
        }
        local_a54 = 0xffffffff;
        if (local_996 != 0) {
          bVar42 = (byte)(local_a0c + -1);
          iVar16 = local_a0c + -2 >> 6;
          iVar31 = local_a0c + -1 >> 6;
          bVar11 = (byte)(local_a0c + -2) & 0x3f;
          uVar53 = (1L << (bVar42 & 0x3f)) * 2 - 1;
          if (iVar16 == iVar31) {
            local_a54 = (uint)((*(ulong *)(param_2 + (long)iVar16 * 8) & uVar53) >> bVar11);
          }
          else {
            local_a54 = (uint)((uVar53 & *(ulong *)(param_2 + (long)iVar31 * 8)) <<
                              (1 - (bVar42 & 0x3f) & 0x3f)) |
                        (uint)(*(ulong *)(param_2 + (long)iVar16 * 8) >> bVar11);
          }
        }
        uVar6 = 0xffffffff;
        if (iVar26 != 1) {
          uVar6 = (uint)(uVar41 >> 0xd) & 0x3ff;
        }
        lVar9 = 0;
        do {
          local_9c8[lVar9] =
               (_anonymous_namespace_)
               (local_958[lVar9] < 0x10 && (0xc88cUL >> ((ulong)local_958[lVar9] & 0x3f) & 1) != 0);
          iVar31 = (int)lVar9;
          lVar9 = lVar9 + 1;
        } while (iVar31 < (int)uVar25);
        if (0 < param_4) {
          uVar74 = CONCAT44(_UNK_001064e4,_LC0);
          uVar6 = uVar25 * 0x400 + uVar6;
          uVar32 = (uVar6 * -0x1121f76f >> 5 ^ uVar6 * -0x1121f76f) * 0x10001;
          uVar32 = uVar32 >> 7 ^ uVar32;
          uVar32 = uVar32 ^ uVar32 >> 3;
          uVar32 = uVar32 ^ uVar32 << 6;
          uVar49 = uVar32 ^ uVar32 >> 0x11;
          uVar25 = uVar49 >> 4 & 0xf;
          uVar43 = uVar49 >> 8 & 0xf;
          uVar28 = uVar49 >> 0xc & 0xf;
          uVar50 = uVar32 >> 0x10 & 0xf;
          uVar33 = uVar32 >> 0x14 & 0xf;
          uVar29 = uVar32 >> 0x18 & 0xf;
          bVar15 = 5 - ((uVar6 & 2) != 0);
          bVar11 = (iVar26 == 3) + 5;
          bVar42 = bVar15;
          if ((uVar6 & 1) != 0) {
            bVar42 = bVar11;
            bVar11 = bVar15;
          }
          iVar31 = 0;
          iVar16 = 0;
          local_9f8 = 0;
          fVar68 = _LC3;
          uVar75 = _UNK_001064e8;
          do {
            if (0 < param_3) {
              iVar22 = iVar31 * 2;
              if (0x1e < iVar21) {
                iVar22 = iVar31;
              }
              p_Var40 = p_Var8 + (long)iVar16 * 8;
              iVar7 = 0;
              uVar6 = iVar16 * 4;
              uVar57 = _LC1;
              do {
                if (iVar26 == 1) goto LAB_00102df3;
                iVar27 = iVar7 * 2;
                if (0x1e < iVar21) {
                  iVar27 = iVar7;
                }
                uVar12 = ((int)((uVar49 & 0xf) * (uVar49 & 0xf)) >> (bVar11 & 0x1f)) * iVar27 +
                         ((int)(uVar25 * uVar25) >> (bVar42 & 0x1f)) * iVar22 + (uVar49 >> 0xe) &
                         0x3f;
                uVar44 = ((int)(uVar43 * uVar43) >> (bVar11 & 0x1f)) * iVar27 +
                         ((int)(uVar28 * uVar28) >> (bVar42 & 0x1f)) * iVar22 + (uVar49 >> 10) &
                         0x3f;
                if (iVar26 == 2) {
                  uVar53 = (ulong)(uVar12 < uVar44);
                  uVar41 = (ulong)(uVar12 < uVar44);
                  pUVar34 = local_948 + uVar53 * 0x20;
LAB_00102da3:
                  _Var51 = local_7c8[uVar41];
                  if (!param_6) goto LAB_00102e0a;
LAB_00102db0:
                  if (_Var51 == (_anonymous_namespace_)0x0) goto LAB_00102e0a;
                  if (param_5) {
                    *(undefined4 *)((long)param_1 + (long)(int)uVar6) = uVar57;
                  }
                  else {
                    puVar2 = (undefined8 *)((long)param_1 + (long)(int)uVar6 * 4);
                    *puVar2 = uVar74;
                    puVar2[1] = uVar75;
                  }
                  local_9f8 = 1;
                }
                else {
                  uVar37 = ((int)(uVar50 * uVar50) >> (bVar11 & 0x1f)) * iVar27 +
                           (uVar49 >> 6) + ((int)(uVar33 * uVar33) >> (bVar42 & 0x1f)) * iVar22 &
                           0x3f;
                  uVar30 = uVar37;
                  if (uVar37 <= uVar44) {
                    uVar30 = uVar44;
                  }
                  if (iVar26 == 3) {
                    if (uVar30 <= uVar12) goto LAB_00102df3;
                    if (uVar37 <= uVar44) goto LAB_001030be;
LAB_00103098:
                    pUVar34 = local_908;
                    uVar53 = 2;
                    uVar41 = 2;
                    goto LAB_00102da3;
                  }
                  uVar45 = iVar22 * ((int)((uVar32 >> 0x1c) * (uVar32 >> 0x1c)) >> (bVar42 & 0x1f))
                           + (uVar49 >> 2) + iVar27 * ((int)(uVar29 * uVar29) >> (bVar11 & 0x1f)) &
                           0x3f;
                  if (uVar30 <= uVar45) {
                    uVar30 = uVar45;
                  }
                  if (uVar12 < uVar30) {
                    uVar12 = uVar45;
                    if (uVar45 <= uVar37) {
                      uVar12 = uVar37;
                    }
                    if (uVar44 < uVar12) {
                      if (uVar45 <= uVar37) goto LAB_00103098;
                      pUVar34 = local_8e8;
                      uVar53 = 3;
                      uVar41 = 3;
                    }
                    else {
LAB_001030be:
                      pUVar34 = local_928;
                      uVar53 = 1;
                      uVar41 = 1;
                    }
                    goto LAB_00102da3;
                  }
LAB_00102df3:
                  uVar53 = 0;
                  pUVar34 = local_948;
                  _Var51 = local_7c8[0];
                  if (param_6) goto LAB_00102db0;
LAB_00102e0a:
                  uVar41 = 0;
                  uVar44 = uVar6;
                  do {
                    uVar46 = (ulong)uVar44;
                    if (_Var51 != (_anonymous_namespace_)0x0) {
                      uVar10 = uVar41 & 0xffffffff;
                      if ((int)uVar41 == 3) goto LAB_00103022;
                      do {
                        do {
                          uVar12 = *(int *)(pUVar34 + uVar41 * 4) * 0x10 *
                                   (0x40 - *(int *)(p_Var40 + (ulong)(local_a54 == (uint)uVar10) * 4
                                                   )) + 0x20 +
                                   *(int *)(pUVar34 + uVar41 * 4 + 0x10) * 0x10 *
                                   *(int *)(p_Var40 + (ulong)(local_a54 == (uint)uVar10) * 4);
                          uVar30 = uVar12 >> 6;
                          uVar44 = uVar30 & 0x7ff;
                          if ((uVar30 & 0x600) == 0) {
                            uVar44 = uVar44 * 3;
                          }
                          else if (uVar44 < 0x600) {
                            uVar44 = uVar44 * 4 - 0x200;
                          }
                          else {
                            uVar44 = uVar44 * 5 - 0x800;
                          }
                          uVar44 = (uVar12 >> 0x11 & 0x1f) * 0x400 + (uVar44 >> 3);
                          uVar4 = (ushort)uVar44;
                          if ((~uVar44 & 0x7c00) == 0) {
                            uVar4 = 0x7bff;
                          }
                          iVar27 = (int)uVar46;
                          uVar41 = uVar41 + 1;
                          uVar46 = (ulong)(iVar27 + 1);
                          uVar57 = deFloat16To32(uVar4);
                          *(undefined4 *)((long)param_1 + (long)iVar27 * 4) = uVar57;
                          uVar57 = extraout_XMM1_Da;
                          if (uVar41 == 4) goto LAB_00102dd1;
                          uVar10 = uVar41 & 0xffffffff;
                        } while ((int)uVar41 != 3);
LAB_00103022:
                        uVar44 = (uint)uVar46;
                      } while (local_958[uVar53] != 0xe);
                    }
                    uVar12 = *(uint *)(pUVar34 + uVar41 * 4) << 8;
                    uVar30 = *(uint *)(pUVar34 + uVar41 * 4 + 0x10) << 8;
                    iVar27 = *(int *)(p_Var40 + (ulong)(local_a54 == (uint)uVar41) * 4);
                    if (param_5) {
                      *(char *)((long)param_1 + (long)(int)uVar44) =
                           (char)((uVar30 | 0x80) * iVar27 + 0x20 +
                                  (uVar12 | 0x80) * (0x40 - iVar27) >> 0xe);
                    }
                    else {
                      uVar12 = (*(uint *)(pUVar34 + uVar41 * 4 + 0x10) | uVar30) * iVar27 + 0x20 +
                               (*(uint *)(pUVar34 + uVar41 * 4) | uVar12) * (0x40 - iVar27) >> 6;
                      fVar56 = _LC0;
                      if (uVar12 != 0xffff) {
                        fVar56 = (float)uVar12 * fVar68;
                      }
                      *(float *)((long)param_1 + (long)(int)uVar44 * 4) = fVar56;
                    }
                    uVar41 = uVar41 + 1;
                    uVar44 = uVar44 + 1;
                  } while (uVar41 != 4);
                }
LAB_00102dd1:
                iVar7 = iVar7 + 1;
                p_Var40 = p_Var40 + 8;
                uVar6 = uVar6 + 4;
              } while (param_3 != iVar7);
            }
            iVar31 = iVar31 + 1;
            iVar16 = iVar16 + param_3;
          } while (param_4 != iVar31);
          goto LAB_00101331;
        }
        goto LAB_00101465;
      }
    }
    else {
      if (local_98c == 2) {
        iVar16 = local_988 * uVar6;
        goto LAB_001010d8;
      }
      if (local_98c == 0) {
        uVar25 = (uVar6 * 8 + 4) / 5;
        goto LAB_001010c7;
      }
    }
LAB_001012f0:
    if (param_5) {
      if (0 < iVar21) {
        puVar3 = (undefined4 *)((long)param_1 + (ulong)(iVar21 - 1) * 4 + 4);
        do {
          *(undefined4 *)param_1 = uVar57;
          param_1 = (void *)((long)param_1 + 4);
        } while (puVar3 != (undefined4 *)param_1);
      }
    }
    else if (0 < iVar21) {
      uVar75 = CONCAT44(_UNK_001064e4,_LC0);
      puVar2 = (undefined8 *)((long)param_1 + (ulong)(iVar21 - 1) * 0x10 + 0x10);
      do {
        *(undefined8 *)param_1 = uVar75;
        *(undefined8 *)((long)param_1 + 8) = uVar74;
        param_1 = (void *)((long)param_1 + 0x10);
      } while (puVar2 != (undefined8 *)param_1);
    }
  }
  else if (param_5) {
    if (0 < iVar21) {
      puVar3 = (undefined4 *)((long)param_1 + (ulong)(iVar21 - 1) * 4 + 4);
      do {
        *(undefined4 *)param_1 = uVar57;
        param_1 = (void *)((long)param_1 + 4);
      } while (puVar3 != (undefined4 *)param_1);
    }
  }
  else if (0 < iVar21) {
    uVar75 = CONCAT44(_UNK_001064e4,_LC0);
    puVar2 = (undefined8 *)((long)param_1 + (ulong)(iVar21 - 1) * 0x10 + 0x10);
    do {
      *(undefined8 *)param_1 = uVar75;
      *(undefined8 *)((long)param_1 + 8) = uVar74;
      param_1 = (void *)((long)param_1 + 0x10);
    } while (puVar2 != (undefined8 *)param_1);
  }
LAB_0010132c:
  local_9f8 = 1;
LAB_00101331:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_9f8;
switchD_001031f8_default:
  iVar7 = *(int *)p_Var40;
  p_Var19 = p_Var20 + 4;
  p_Var40 = p_Var40 + 0xc;
  *(uint *)p_Var20 = (iVar7 * iVar16 - 1U ^ uVar49) >> 2 | uVar33;
  p_Var20 = p_Var19;
  if (p_Var8 == p_Var19) goto LAB_00101981;
  goto LAB_00103196;
}



/* basisu_astc::astc::decompress_ldr(unsigned char*, unsigned char const*, bool, int, int) */

undefined8
basisu_astc::astc::decompress_ldr
          (uchar *param_1,uchar *param_2,bool param_3,int param_4,int param_5)

{
  byte *pbVar1;
  float fVar2;
  char cVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uchar uVar11;
  long lVar9;
  undefined8 uVar10;
  uchar *puVar12;
  float *pfVar13;
  int iVar14;
  long in_FS_OFFSET;
  ulong local_948;
  ulong local_940;
  float local_938 [578];
  long local_30;
  
  local_948 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = 0;
  do {
    pbVar1 = param_2 + lVar9;
    cVar3 = (char)lVar9;
    lVar9 = lVar9 + 1;
    local_948 = local_948 | (ulong)*pbVar1 << (cVar3 * '\b' & 0x3fU);
  } while (lVar9 != 8);
  lVar9 = 0;
  local_940 = 0;
  do {
    lVar4 = lVar9 + 8;
    cVar3 = (char)lVar9;
    lVar9 = lVar9 + 1;
    local_940 = local_940 | (ulong)param_2[lVar4] << (cVar3 * '\b' & 0x3fU);
  } while (lVar9 != 8);
  if (param_3) {
    iVar7 = (anonymous_namespace)::decompressBlock
                      (param_1,(Block128 *)&local_948,param_4,param_5,true,true);
    if (iVar7 != 0) {
LAB_00103d88:
      uVar10 = 0;
      goto LAB_00103c1e;
    }
  }
  else {
    iVar7 = (anonymous_namespace)::decompressBlock
                      (local_938,(Block128 *)&local_948,param_4,param_5,false,true);
    fVar6 = _LC8;
    fVar5 = _LC7;
    if (iVar7 != 0) goto LAB_00103d88;
    iVar7 = 0;
    if (0 < param_5) {
LAB_00103c71:
      if (param_4 < 1) goto LAB_00103d8f;
      iVar14 = 0;
      do {
        pfVar13 = local_938 + (long)iVar14 * 4;
        puVar12 = param_1 + iVar14 * 4;
        do {
          iVar8 = (int)(*pfVar13 * fVar5 + fVar6);
          fVar2 = pfVar13[1];
          if (0xffff < iVar8) {
            iVar8 = 0xffff;
          }
          uVar11 = (uchar)((uint)iVar8 >> 8);
          if (iVar8 < 0) {
            uVar11 = '\0';
          }
          *puVar12 = uVar11;
          iVar8 = (int)(fVar2 * fVar5 + fVar6);
          fVar2 = pfVar13[2];
          if (0xffff < iVar8) {
            iVar8 = 0xffff;
          }
          uVar11 = (uchar)((uint)iVar8 >> 8);
          if (iVar8 < 0) {
            uVar11 = '\0';
          }
          puVar12[1] = uVar11;
          iVar8 = (int)(fVar2 * fVar5 + fVar6);
          fVar2 = pfVar13[3];
          if (0xffff < iVar8) {
            iVar8 = 0xffff;
          }
          uVar11 = (uchar)((uint)iVar8 >> 8);
          if (iVar8 < 0) {
            uVar11 = '\0';
          }
          puVar12[2] = uVar11;
          iVar8 = (int)(fVar2 * fVar5 + fVar6);
          if (0xffff < iVar8) {
            iVar8 = 0xffff;
          }
          uVar11 = (uchar)((uint)iVar8 >> 8);
          if (iVar8 < 0) {
            uVar11 = '\0';
          }
          pfVar13 = pfVar13 + 4;
          puVar12[3] = uVar11;
          puVar12 = puVar12 + 4;
        } while (pfVar13 != local_938 + ((long)iVar14 + (long)param_4) * 4);
        iVar7 = iVar7 + 1;
        iVar14 = iVar14 + param_4;
      } while (param_5 != iVar7);
    }
  }
LAB_00103c19:
  uVar10 = 1;
LAB_00103c1e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
LAB_00103d8f:
  iVar7 = iVar7 + 1;
  if (param_5 == iVar7) goto LAB_00103c19;
  goto LAB_00103c71;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu_astc::astc::decompress_hdr(float*, unsigned char const*, int, int) */

undefined8 basisu_astc::astc::decompress_hdr(float *param_1,uchar *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  float *pfVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ushort uVar9;
  float fVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  ulong local_38;
  ulong local_30;
  long local_20;
  
  local_38 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = 0;
  do {
    pbVar1 = param_2 + lVar7;
    cVar3 = (char)lVar7;
    lVar7 = lVar7 + 1;
    local_38 = local_38 | (ulong)*pbVar1 << (cVar3 * '\b' & 0x3fU);
  } while (lVar7 != 8);
  lVar7 = 0;
  local_30 = 0;
  do {
    lVar4 = lVar7 + 8;
    cVar3 = (char)lVar7;
    lVar7 = lVar7 + 1;
    local_30 = local_30 | (ulong)param_2[lVar4] << (cVar3 * '\b' & 0x3fU);
  } while (lVar7 != 8);
  iVar5 = (anonymous_namespace)::decompressBlock
                    (param_1,(Block128 *)&local_38,param_3,param_4,false,false);
  uVar8 = 0;
  if (iVar5 == 0) {
    if (param_3 * param_4 != 0) {
      pfVar2 = param_1 + (ulong)(param_3 * param_4 * 4 - 1) + 1;
      do {
        fVar10 = *param_1;
        uVar13 = (uint)fVar10 & 0x7fffff;
        uVar11 = (uint)fVar10 >> 0x1f;
        uVar6 = (int)fVar10 >> 0x17 & 0xff;
        if (uVar6 == 0xff) {
          fVar10 = (float)(uVar11 << 0x1f);
          uVar12 = (ushort)(uVar13 != 0);
          uVar6 = (uint)(uVar13 != 0);
LAB_00103ee6:
          if (uVar12 == 0) {
LAB_00103ef0:
            fVar10 = (float)((uint)fVar10 | 0x7f800000);
          }
          else {
            fVar10 = (float)(uVar6 << 0xd | (uint)fVar10 | 0x7f800000);
          }
        }
        else if (uVar6 == 0) {
          fVar10 = (float)(uVar11 << 0x1f);
        }
        else {
          if (0xf < (int)(uVar6 - 0x7f)) {
            fVar10 = (float)(uVar11 << 0x1f);
            goto LAB_00103ef0;
          }
          if ((int)(uVar6 - 0x7f) < -0xe) {
            fVar10 = (float)((uint)fVar10 & _LC13) * __LC10;
            if ((float)((uint)fVar10 & _LC13) < _LC11) {
              fVar10 = (float)((uint)(float)(int)fVar10 | ~_LC13 & (uint)fVar10);
            }
            uVar13 = (uint)fVar10;
            iVar5 = 0;
          }
          else {
            iVar5 = uVar6 - 0x70;
            fVar10 = (float)uVar13 * __LC12;
            if ((float)((uint)fVar10 & _LC13) < _LC11) {
              uVar13 = (uint)(float)((uint)(float)(int)fVar10 | ~_LC13 & (uint)fVar10);
            }
            else {
              uVar13 = (uint)fVar10;
            }
          }
          if (uVar13 == 0x400) {
            uVar6 = 0;
            uVar12 = 0;
            uVar9 = ((short)iVar5 + 1) * 0x400;
            fVar10 = (float)((uint)((ushort)(uVar9 | (ushort)(uVar11 << 0xf)) >> 0xf) << 0x1f);
            uVar9 = (uVar9 & 0x7c00) >> 10;
LAB_00103fe0:
            if (uVar9 == 0x1f) goto LAB_00103ee6;
            uVar11 = (uint)uVar9;
          }
          else {
            uVar9 = (ushort)(iVar5 << 10) | (ushort)uVar13;
            uVar12 = (ushort)uVar13 & 0x3ff;
            uVar6 = uVar13 & 0x3ff;
            fVar10 = (float)((uint)((ushort)(uVar9 | (ushort)(uVar11 << 0xf)) >> 0xf) << 0x1f);
            uVar9 = (uVar9 & 0x7c00) >> 10;
            if (uVar9 != 0) goto LAB_00103fe0;
            if ((uVar13 & 0x3ff) == 0) goto LAB_00103eb8;
            uVar13 = 0;
            do {
              uVar11 = uVar13;
              uVar6 = uVar6 * 2;
              uVar13 = uVar11 - 1;
            } while ((uVar6 & 0x400) == 0);
            uVar6 = uVar6 & 0xfffffbff;
          }
          fVar10 = (float)(uVar6 << 0xd | (uint)fVar10 | (uVar11 + 0x70) * 0x800000);
        }
LAB_00103eb8:
        *param_1 = fVar10;
        param_1 = param_1 + 1;
      } while (param_1 != pfVar2);
    }
    uVar8 = 1;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* basisu_astc::astc::is_hdr(unsigned char const*, int, int, bool&) */

undefined8 basisu_astc::astc::is_hdr(uchar *param_1,int param_2,int param_3,bool *param_4)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  bool bVar12;
  _anonymous_namespace_ local_68;
  char local_67;
  byte local_66;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  ulong local_48;
  ulong local_40;
  uint local_38 [6];
  long local_20;
  
  uVar11 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = 0;
  *param_4 = false;
  do {
    pbVar1 = param_1 + lVar6;
    cVar3 = (char)lVar6;
    lVar6 = lVar6 + 1;
    uVar11 = uVar11 | (ulong)*pbVar1 << (cVar3 * '\b' & 0x3fU);
  } while (lVar6 != 8);
  lVar6 = 0;
  local_40 = 0;
  do {
    lVar4 = lVar6 + 8;
    cVar3 = (char)lVar6;
    lVar6 = lVar6 + 1;
    local_40 = local_40 | (ulong)param_1[lVar4] << (cVar3 * '\b' & 0x3fU);
  } while (lVar6 != 8);
  local_48 = uVar11;
  (anonymous_namespace)::getASTCBlockMode(&local_68,(uint)uVar11 & 0x7ff);
  if (local_68 == (_anonymous_namespace_)0x0) {
    if (local_67 == '\0') {
      iVar9 = local_64 * local_60 * (local_66 + 1);
      if (local_5c == 1) {
        local_58 = (iVar9 * 7 + 2U) / 3 + local_58 * iVar9;
        bVar12 = 0x60 < local_58;
      }
      else if (local_5c == 2) {
        local_58 = local_58 * iVar9;
        bVar12 = 0x60 < local_58;
      }
      else {
        if (local_5c != 0) goto LAB_00104230;
        local_58 = (iVar9 * 8 + 4U) / 5 + local_58 * iVar9;
        bVar12 = 0x60 < local_58;
      }
      if (((((bool)(0x40 < iVar9 | bVar12)) || (local_58 < 0x18)) || (param_2 < local_64)) ||
         (param_3 < local_60)) goto LAB_00104230;
      uVar10 = (uint)(uVar11 >> 0xb) & 3;
      iVar9 = uVar10 + 1;
      if (uVar10 == 3) {
        if (local_66 != 0) goto LAB_00104230;
        if ((uVar11 & 0x1800000) == 0) goto LAB_001041d2;
        iVar8 = 0x7f - local_58;
        iVar5 = 7;
      }
      else {
        iVar8 = 0x7f - local_58;
        if ((iVar9 == 1) || ((uVar11 & 0x1800000) == 0)) {
LAB_001041d2:
          iVar8 = 0x7f - local_58;
          iVar5 = -1;
        }
        else {
          iVar5 = (uint)(iVar9 == 3) * 3 + 1;
        }
      }
      (anonymous_namespace)::decodeColorEndpointModes
                (local_38,(Block128 *)&local_48,iVar9,iVar8 - iVar5);
      lVar6 = 0;
      do {
        uVar2 = local_38[lVar6];
        if (uVar2 < 0x10) {
          bVar12 = (0xc88cUL >> ((ulong)uVar2 & 0x3f) & 1) != 0;
          if (bVar12) goto LAB_00104258;
        }
        iVar9 = (int)lVar6;
        lVar6 = lVar6 + 1;
      } while (iVar9 < (int)uVar10);
      bVar12 = false;
    }
    else {
      bVar12 = (bool)((byte)(uVar11 >> 9) & 1);
    }
LAB_00104258:
    *param_4 = bVar12;
    uVar7 = 1;
  }
  else {
LAB_00104230:
    uVar7 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


