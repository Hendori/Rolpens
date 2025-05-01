
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
    (*(code *)(&DAT_00104440 + *(int *)(&DAT_00104440 + uVar1 * 4)))
              (uVar4,&DAT_00104440,&DAT_00104440 + *(int *)(&DAT_00104440 + uVar1 * 4));
    return;
  }
LAB_001002c0:
                    /* WARNING: Could not recover jumptable at 0x001002ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00104460 + *(int *)(&DAT_00104460 + uVar1 * 4)))
            (uVar4,&DAT_00104460,&DAT_00104460 + *(int *)(&DAT_00104460 + uVar1 * 4));
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
    (*(code *)(&DAT_00104480 +
              *(int *)(&DAT_00104480 +
                      (ulong)(param_5 >> 6 & 2 | param_4 >> 7 & 1 | param_6 >> 5 & 4) * 4)))
              (param_1,param_2,param_4 & 0x3f,
               &DAT_00104480 +
               *(int *)(&DAT_00104480 +
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
  undefined4 *puVar2;
  ushort uVar3;
  sbyte sVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
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
  undefined8 *puVar19;
  size_t __n;
  _anonymous_namespace_ *p_Var20;
  _anonymous_namespace_ *p_Var21;
  int iVar22;
  int iVar23;
  int iVar24;
  ISEParams *pIVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  UVec4 *pUVar35;
  undefined1 *puVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  ISEParams *pIVar40;
  _anonymous_namespace_ *p_Var41;
  ulong uVar42;
  byte bVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  void *pvVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  _anonymous_namespace_ _Var52;
  BitAccessStream *pBVar53;
  ulong uVar54;
  int iVar55;
  long in_FS_OFFSET;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 extraout_XMM1_Da;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined8 uVar75;
  undefined8 uVar76;
  undefined1 auVar77 [16];
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
  
  iVar22 = param_3 * param_4;
  uVar42 = *(ulong *)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar43 = param_6;
  getASTCBlockMode(&local_998,(uint)uVar42 & 0x7ff);
  uVar75 = _UNK_00106628;
  fVar57 = _LC0;
  fVar69 = _LC3;
  uVar58 = _LC1;
  iVar6 = (int)param_1;
  if (local_998 != (_anonymous_namespace_)0x0) {
    if (param_5) {
      if (0 < iVar22) {
        puVar2 = (undefined4 *)((long)param_1 + 4) + (iVar22 - 1);
        if (((int)puVar2 - iVar6 & 4U) == 0) goto LAB_00101530;
        *(undefined4 *)param_1 = _LC1;
        for (param_1 = (undefined4 *)((long)param_1 + 4); puVar2 != (undefined4 *)param_1;
            param_1 = (void *)((long)param_1 + 0x10)) {
LAB_00101530:
          *(undefined4 *)param_1 = uVar58;
          *(undefined4 *)((long)param_1 + 4) = uVar58;
          if (puVar2 == (undefined4 *)((long)param_1 + 8)) break;
          *(undefined4 *)((long)param_1 + 8) = uVar58;
          *(undefined4 *)((long)param_1 + 0xc) = uVar58;
        }
      }
    }
    else if (0 < iVar22) {
      uVar76 = CONCAT44(_UNK_00106624,_LC0);
      puVar7 = (undefined8 *)((long)param_1 + 0x10);
      puVar19 = puVar7 + (ulong)(iVar22 - 1) * 2;
      if (((int)puVar19 - iVar6 & 0x10U) != 0) {
        *(undefined8 *)param_1 = uVar76;
        *(undefined8 *)((long)param_1 + 8) = uVar75;
        param_1 = puVar7;
        if (puVar19 == puVar7) goto LAB_00101350;
      }
      do {
        *(undefined8 *)param_1 = uVar76;
        *(undefined8 *)((long)param_1 + 8) = uVar75;
        *(undefined8 *)((long)param_1 + 0x10) = uVar76;
        *(undefined8 *)((long)param_1 + 0x18) = uVar75;
        if (puVar19 == (undefined8 *)((long)param_1 + 0x20)) break;
        *(undefined8 *)((long)param_1 + 0x20) = uVar76;
        *(undefined8 *)((long)param_1 + 0x28) = uVar75;
        puVar7 = (undefined8 *)((long)param_1 + 0x40);
        *(undefined8 *)((long)param_1 + 0x30) = uVar76;
        *(undefined8 *)((long)param_1 + 0x38) = uVar75;
        param_1 = puVar7;
      } while (puVar19 != puVar7);
    }
    goto LAB_00101350;
  }
  uVar5 = (uint)(uVar42 >> 0x20);
  if (local_997 != '\0') {
    uVar76 = *(undefined8 *)(param_2 + 8);
    uVar50 = uVar5 >> 6 & 0x1fff;
    uVar33 = (uint)(uVar42 >> 0xc) & 0x1fff;
    uVar26 = (uint)(uVar42 >> 0x19) & 0x1fff;
    bVar43 = bVar43 & (byte)(uVar42 >> 9) & 1;
    uVar5 = uVar5 >> 0x13;
    if ((uVar33 == 0x1fff) && (uVar26 == 0x1fff)) {
      if ((bVar43 == 0) && (uVar50 == 0x1fff && uVar5 == 0x1fff)) goto LAB_00101402;
LAB_00101608:
      if (param_5) {
        if (0 < iVar22) {
          puVar2 = (undefined4 *)((long)param_1 + 4) + (iVar22 - 1);
          if (((int)puVar2 - iVar6 & 4U) == 0) goto LAB_00101650;
          *(undefined4 *)param_1 = _LC1;
          for (param_1 = (undefined4 *)((long)param_1 + 4); (undefined4 *)param_1 != puVar2;
              param_1 = (void *)((long)param_1 + 8)) {
LAB_00101650:
            *(undefined4 *)param_1 = uVar58;
            *(undefined4 *)((long)param_1 + 4) = uVar58;
          }
        }
      }
      else if (0 < iVar22) {
        uVar76 = CONCAT44(_UNK_00106624,_LC0);
        puVar7 = (undefined8 *)((long)param_1 + 0x10);
        puVar19 = puVar7 + (ulong)(iVar22 - 1) * 2;
        if (((int)puVar19 - iVar6 & 0x10U) != 0) {
          *(undefined8 *)param_1 = uVar76;
          *(undefined8 *)((long)param_1 + 8) = uVar75;
          param_1 = puVar7;
          if (puVar19 == puVar7) goto LAB_00101350;
        }
        do {
          *(undefined8 *)param_1 = uVar76;
          *(undefined8 *)((long)param_1 + 8) = uVar75;
          puVar7 = (undefined8 *)((long)param_1 + 0x20);
          *(undefined8 *)((long)param_1 + 0x10) = uVar76;
          *(undefined8 *)((long)param_1 + 0x18) = uVar75;
          param_1 = puVar7;
        } while (puVar19 != puVar7);
      }
      goto LAB_00101350;
    }
    if ((bVar43 != 0) || ((uVar26 <= uVar33 || (uVar5 <= uVar50)))) goto LAB_00101608;
LAB_00101402:
    _local_4c8 = CONCAT44((int)((ulong)uVar76 >> 0x10),(int)uVar76) & 0xffff0000ffff;
    register0x00001208 =
         CONCAT24((short)((ulong)uVar76 >> 0x30),(int)((ulong)uVar76 >> 0x20)) & 0xffff0000ffff;
    register0x0000120e = 0;
    if (param_5) {
      if (0 < iVar22) {
        pvVar48 = (void *)((long)param_1 + (long)iVar22 * 4);
        do {
          lVar9 = 0;
          do {
            *(char *)((long)param_1 + lVar9) =
                 (char)((uint)*(undefined4 *)(local_4c8 + lVar9 * 4) >> 8);
            lVar9 = lVar9 + 1;
          } while (lVar9 != 4);
          param_1 = (void *)((long)param_1 + 4);
        } while (pvVar48 != param_1);
      }
    }
    else if ((uVar42 >> 9 & 1) == 0) {
      if (0 < iVar22) {
        pvVar48 = (void *)((long)iVar22 * 0x10 + (long)param_1);
        do {
          lVar9 = 0;
          do {
            fVar56 = fVar57;
            if (*(uint *)(local_4c8 + lVar9) != 0xffff) {
              fVar56 = (float)*(uint *)(local_4c8 + lVar9) * fVar69;
            }
            *(float *)((long)param_1 + lVar9) = fVar56;
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0x10);
          param_1 = (void *)((long)param_1 + 0x10);
        } while (pvVar48 != param_1);
        local_9f8 = 0;
        goto LAB_00101355;
      }
    }
    else {
      p_Var8 = local_4c8;
      do {
        if ((~(byte)((ushort)*(undefined2 *)p_Var8 >> 8) & 0x7c) == 0) {
          if (0 < iVar22) {
            uVar76 = CONCAT44(_UNK_00106624,_LC0);
            puVar7 = (undefined8 *)((long)param_1 + 0x10) + (ulong)(iVar22 - 1) * 2;
            if (((int)puVar7 - iVar6 & 0x10U) == 0) goto LAB_00101973;
            *(undefined8 *)param_1 = uVar76;
            *(undefined8 *)((long)param_1 + 8) = uVar75;
            for (param_1 = (undefined8 *)((long)param_1 + 0x10); puVar7 != (undefined8 *)param_1;
                param_1 = (void *)((long)param_1 + 0x20)) {
LAB_00101973:
              *(undefined8 *)param_1 = uVar76;
              *(undefined8 *)((long)param_1 + 8) = uVar75;
              *(undefined8 *)((long)param_1 + 0x10) = uVar76;
              *(undefined8 *)((long)param_1 + 0x18) = uVar75;
            }
          }
          goto LAB_00101350;
        }
        p_Var8 = p_Var8 + 4;
      } while (local_4b8 != p_Var8);
      if (0 < iVar22) {
        pvVar48 = (void *)((long)iVar22 * 0x10 + (long)param_1);
        do {
          lVar9 = 0;
          do {
            uVar58 = deFloat16To32(*(ushort *)(local_4c8 + lVar9));
            *(undefined4 *)((long)param_1 + lVar9) = uVar58;
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0x10);
          param_1 = (void *)((long)param_1 + 0x10);
        } while (pvVar48 != param_1);
        local_9f8 = 0;
        goto LAB_00101355;
      }
    }
LAB_00101485:
    local_9f8 = 0;
    goto LAB_00101355;
  }
  iVar32 = local_996 + 1;
  uVar5 = local_994 * local_990 * iVar32;
  if (local_98c == 1) {
    uVar26 = (uVar5 * 7 + 2) / 3;
LAB_001010c7:
    iVar16 = uVar26 + local_988 * uVar5;
LAB_001010d8:
    if ((param_3 < local_994 || (0x40 < (int)uVar5 || param_4 < local_990)) || 0x48 < iVar16 - 0x18U
       ) goto LAB_001012f0;
    uVar26 = (uint)(uVar42 >> 0xb) & 3;
    iVar27 = uVar26 + 1;
    if (uVar26 == 3) {
      if (local_996 == 0) goto LAB_00101113;
      goto LAB_001012f0;
    }
    if (iVar27 == 1) {
      local_a0c = 0x80 - iVar16;
      iVar23 = local_a0c - (local_996 + 0x11 + (uint)local_996);
LAB_0010184b:
      decodeColorEndpointModes(local_958,param_2,iVar27,local_a0c);
    }
    else {
LAB_00101113:
      local_a0c = 0x80 - iVar16;
      if ((uVar42 & 0x1800000) == 0) {
        iVar23 = local_a0c - ((uint)local_996 * 2 + 0x1d);
        goto LAB_0010184b;
      }
      iVar23 = local_a0c - (iVar27 * 3 + 0x19 + (uint)local_996 * 2);
      local_a0c = (0x7f - iVar16) - (uVar26 * 3 + -2);
      decodeColorEndpointModes(local_958,param_2,iVar27,local_a0c);
    }
    uVar75 = _UNK_00106628;
    uVar58 = _LC1;
    uVar33 = 0;
    lVar9 = 0;
    do {
      uVar33 = uVar33 + 2 + (local_958[lVar9] >> 2) * 2;
      iVar16 = (int)lVar9;
      lVar9 = lVar9 + 1;
    } while (iVar16 < (int)uVar26);
    if (((int)uVar33 < 0x13) && ((int)((uVar33 * 0xd + 4) / 5) <= iVar23)) {
      pUVar35 = local_948;
      do {
        *(undefined1 (*) [16])pUVar35 = (undefined1  [16])0x0;
        pUVar18 = pUVar35 + 0x20;
        *(undefined1 (*) [16])(pUVar35 + 0x10) = (undefined1  [16])0x0;
        pUVar35 = pUVar18;
      } while (local_8c8 != pUVar18);
      pIVar40 = (ISEParams *)0x8;
      pIVar25 = (ISEParams *)0x6;
      uVar50 = 5;
      while( true ) {
        while( true ) {
          iVar16 = (int)pIVar25;
          iVar6 = (3 << ((byte)pIVar25 & 0x1f)) + -1;
          if (iVar16 < 1) {
            iVar6 = -1;
          }
          iVar28 = (5 << ((byte)uVar50 & 0x1f)) + -1;
          if ((int)uVar50 < 1) {
            iVar28 = -1;
          }
          iVar37 = (int)pIVar40;
          iVar24 = -1;
          if (0 < iVar37) {
            iVar24 = (1 << ((byte)pIVar40 & 0x1f)) + -1;
          }
          iVar55 = iVar28;
          if (iVar28 <= iVar6) {
            iVar55 = iVar6;
          }
          if (iVar55 < iVar24) {
            iVar55 = iVar24;
          }
          local_978 = param_2;
          local_96c = iVar23;
          if (iVar6 == iVar55) break;
          if (iVar28 == iVar55) {
            local_a38 = (int)((ulong)(uVar33 * 7 + 2) / 3);
            if ((int)(uVar33 * uVar50 + local_a38) <= iVar23) {
              pBVar53 = (BitAccessStream *)0x1;
              pIVar40 = (ISEParams *)(ulong)uVar50;
              goto LAB_00101994;
            }
            uVar50 = uVar50 - 1;
          }
          else {
            if ((int)(uVar33 * iVar37) <= iVar23) {
              if (iVar27 != 1) {
                pBVar53 = (BitAccessStream *)0x2;
                goto LAB_0010199f;
              }
              local_964 = 0;
              local_970 = 0x11;
              local_968 = 1;
              decodeISE(local_4c8,(ISEDecodedResult *)(ulong)uVar33,(int)&local_978,
                        (BitAccessStream *)0x2,pIVar40);
              goto LAB_00101a14;
            }
            pIVar40 = (ISEParams *)(ulong)(iVar37 - 1);
          }
        }
        if ((int)(uVar33 * iVar16 + (uVar33 * 8 + 4) / 5) <= iVar23) break;
        pIVar25 = (ISEParams *)(ulong)(iVar16 - 1);
      }
      pBVar53 = (BitAccessStream *)0x0;
      pIVar40 = pIVar25;
LAB_00101994:
      iVar6 = (int)pBVar53;
      iVar37 = (int)pIVar40;
      if (iVar27 == 1) {
        local_970 = 0x11;
        local_968 = 1;
        local_964 = 0;
        decodeISE(local_4c8,(ISEDecodedResult *)(ulong)uVar33,(int)&local_978,pBVar53,pIVar40);
LAB_0010328f:
        iVar16 = iVar6 + -2 + iVar37 * 2;
        iVar6 = *(int *)(unquantizeColorEndpoints(unsigned_int*,basisu_astc::astc::(anonymous_namespace)::ISEDecodedResult_const*,int,basisu_astc::astc::(anonymous_namespace)::ISEParams_const&)
                         ::Ca + (long)iVar16 * 4);
        if (0 < (int)uVar33) {
          p_Var41 = local_4c8 + 4;
          p_Var8 = local_7c8 + (long)(int)uVar33 * 4;
          p_Var21 = local_7c8;
LAB_001032d6:
          uVar33 = *(uint *)(p_Var41 + -4);
          if ((uVar33 & 1) == 0) {
            uVar34 = 0;
            uVar50 = 0;
          }
          else {
            uVar34 = 0x80;
            uVar50 = 0x1ff;
          }
          if (iVar16 == 0) {
switchD_00103338_caseD_1:
            while( true ) {
              p_Var20 = p_Var21 + 4;
              *(uint *)p_Var21 = uVar34 | (*(int *)p_Var41 * iVar6 ^ uVar50) >> 2;
              if (p_Var20 == p_Var8) break;
              p_Var21 = p_Var20;
              if ((*(uint *)(p_Var41 + 8) & 1) == 0) {
                uVar34 = 0;
                uVar50 = 0;
                p_Var41 = p_Var41 + 0xc;
              }
              else {
                uVar34 = 0x80;
                uVar50 = 0x1ff;
                p_Var41 = p_Var41 + 0xc;
              }
            }
            goto LAB_00101ab9;
          }
          local_9ec = uVar33 >> 2 & 1;
          uVar30 = uVar33 >> 1 & 1;
          uVar29 = uVar33 >> 3 & 1;
          uVar44 = uVar33 >> 4 & 1;
          switch(iVar16) {
          case 1:
            goto switchD_00103338_caseD_1;
          case 2:
            while( true ) {
              p_Var20 = p_Var21 + 4;
              *(uint *)p_Var21 =
                   ((-uVar30 & 0x116) + *(int *)p_Var41 * iVar6 ^ uVar50) >> 2 | uVar34;
              if (p_Var20 == p_Var8) break;
              uVar30 = *(uint *)(p_Var41 + 8) >> 1 & 1;
              p_Var21 = p_Var20;
              if ((*(uint *)(p_Var41 + 8) & 1) == 0) {
                uVar34 = 0;
                uVar50 = 0;
                p_Var41 = p_Var41 + 0xc;
              }
              else {
                uVar34 = 0x80;
                uVar50 = 0x1ff;
                p_Var41 = p_Var41 + 0xc;
              }
            }
            break;
          case 3:
            while( true ) {
              p_Var20 = p_Var21 + 4;
              *(uint *)p_Var21 =
                   ((-uVar30 & 0x10c) + *(int *)p_Var41 * iVar6 ^ uVar50) >> 2 | uVar34;
              if (p_Var20 == p_Var8) break;
              uVar30 = *(uint *)(p_Var41 + 8) >> 1 & 1;
              p_Var21 = p_Var20;
              if ((*(uint *)(p_Var41 + 8) & 1) == 0) {
                uVar34 = 0;
                uVar50 = 0;
                p_Var41 = p_Var41 + 0xc;
              }
              else {
                uVar34 = 0x80;
                uVar50 = 0x1ff;
                p_Var41 = p_Var41 + 0xc;
              }
            }
            break;
          case 4:
            while( true ) {
              p_Var20 = p_Var21 + 4;
              *(uint *)p_Var21 =
                   ((local_9ec << 8 | uVar30 << 7 | uVar30 | local_9ec * 8 | uVar30 << 2 |
                    local_9ec * 2) + *(int *)p_Var41 * iVar6 ^ uVar50) >> 2 | uVar34;
              if (p_Var8 == p_Var20) break;
              uVar33 = *(uint *)(p_Var41 + 8);
              local_9ec = uVar33 >> 2 & 1;
              uVar30 = uVar33 >> 1 & 1;
              p_Var21 = p_Var20;
              if ((uVar33 & 1) == 0) {
                uVar34 = 0;
                uVar50 = 0;
                p_Var41 = p_Var41 + 0xc;
              }
              else {
                uVar34 = 0x80;
                uVar50 = 0x1ff;
                p_Var41 = p_Var41 + 0xc;
              }
            }
            break;
          case 5:
            while( true ) {
              p_Var20 = p_Var21 + 4;
              *(uint *)p_Var21 =
                   ((local_9ec << 8 | uVar30 << 7 | local_9ec | local_9ec << 2 | uVar30 * 2) +
                    *(int *)p_Var41 * iVar6 ^ uVar50) >> 2 | uVar34;
              if (p_Var8 == p_Var20) break;
              uVar33 = *(uint *)(p_Var41 + 8);
              local_9ec = uVar33 >> 2 & 1;
              uVar30 = uVar33 >> 1 & 1;
              p_Var21 = p_Var20;
              if ((uVar33 & 1) == 0) {
                uVar34 = 0;
                uVar50 = 0;
                p_Var41 = p_Var41 + 0xc;
              }
              else {
                uVar34 = 0x80;
                uVar50 = 0x1ff;
                p_Var41 = p_Var41 + 0xc;
              }
            }
            break;
          case 6:
            while( true ) {
              p_Var20 = p_Var21 + 4;
              *(uint *)p_Var21 =
                   ((uVar29 << 8 | local_9ec << 7 | uVar30 | uVar30 << 6 | uVar29 << 2 |
                    local_9ec * 2) + *(int *)p_Var41 * iVar6 ^ uVar50) >> 2 | uVar34;
              if (p_Var8 == p_Var20) break;
              uVar33 = *(uint *)(p_Var41 + 8);
              uVar29 = uVar33 >> 3 & 1;
              uVar30 = uVar33 >> 1 & 1;
              local_9ec = uVar33 >> 2 & 1;
              p_Var21 = p_Var20;
              if ((uVar33 & 1) == 0) {
                uVar34 = 0;
                uVar50 = 0;
                p_Var41 = p_Var41 + 0xc;
              }
              else {
                uVar34 = 0x80;
                uVar50 = 0x1ff;
                p_Var41 = p_Var41 + 0xc;
              }
            }
            break;
          case 7:
            while( true ) {
              p_Var20 = p_Var21 + 4;
              *(uint *)p_Var21 =
                   ((uVar29 << 8 | local_9ec << 7 | local_9ec | uVar30 << 6 | uVar29 * 2) +
                    *(int *)p_Var41 * iVar6 ^ uVar50) >> 2 | uVar34;
              if (p_Var8 == p_Var20) break;
              uVar33 = *(uint *)(p_Var41 + 8);
              uVar29 = uVar33 >> 3 & 1;
              uVar30 = uVar33 >> 1 & 1;
              local_9ec = uVar33 >> 2 & 1;
              p_Var21 = p_Var20;
              if ((uVar33 & 1) == 0) {
                uVar34 = 0;
                uVar50 = 0;
                p_Var41 = p_Var41 + 0xc;
              }
              else {
                uVar34 = 0x80;
                uVar50 = 0x1ff;
                p_Var41 = p_Var41 + 0xc;
              }
            }
            break;
          case 8:
            while( true ) {
              p_Var20 = p_Var21 + 4;
              *(uint *)p_Var21 =
                   ((uVar44 * 2 | uVar44 << 8 | uVar29 << 7 | uVar29 | local_9ec << 6 | uVar30 << 5)
                    + *(int *)p_Var41 * iVar6 ^ uVar50) >> 2 | uVar34;
              if (p_Var8 == p_Var20) break;
              uVar33 = *(uint *)(p_Var41 + 8);
              local_9ec = uVar33 >> 2 & 1;
              uVar30 = uVar33 >> 1 & 1;
              uVar29 = uVar33 >> 3 & 1;
              uVar44 = uVar33 >> 4 & 1;
              p_Var21 = p_Var20;
              if ((uVar33 & 1) == 0) {
                uVar34 = 0;
                uVar50 = 0;
                p_Var41 = p_Var41 + 0xc;
              }
              else {
                uVar34 = 0x80;
                uVar50 = 0x1ff;
                p_Var41 = p_Var41 + 0xc;
              }
            }
            break;
          case 9:
            while( true ) {
              p_Var20 = p_Var21 + 4;
              *(uint *)p_Var21 =
                   ((uVar44 | uVar44 << 8 | uVar29 << 7 | local_9ec << 6 | uVar30 << 5) +
                    *(int *)p_Var41 * iVar6 ^ uVar50) >> 2 | uVar34;
              if (p_Var20 == p_Var8) break;
              uVar33 = *(uint *)(p_Var41 + 8);
              uVar30 = uVar33 >> 1 & 1;
              local_9ec = uVar33 >> 2 & 1;
              uVar29 = uVar33 >> 3 & 1;
              uVar44 = uVar33 >> 4 & 1;
              p_Var21 = p_Var20;
              if ((uVar33 & 1) == 0) {
                uVar34 = 0;
                uVar50 = 0;
                p_Var41 = p_Var41 + 0xc;
              }
              else {
                uVar34 = 0x80;
                uVar50 = 0x1ff;
                p_Var41 = p_Var41 + 0xc;
              }
            }
            break;
          case 10:
            while( true ) {
              p_Var20 = p_Var21 + 4;
              uVar33 = uVar33 >> 5 & 1;
              *(uint *)p_Var21 =
                   ((uVar33 << 8 | uVar44 << 7 | uVar33 | uVar29 << 6 | local_9ec << 5 | uVar30 << 4
                    ) + *(int *)p_Var41 * iVar6 ^ uVar50) >> 2 | uVar34;
              if (p_Var20 == p_Var8) break;
              uVar33 = *(uint *)(p_Var41 + 8);
              local_9ec = uVar33 >> 2 & 1;
              uVar30 = uVar33 >> 1 & 1;
              uVar29 = uVar33 >> 3 & 1;
              uVar44 = uVar33 >> 4 & 1;
              p_Var21 = p_Var20;
              if ((uVar33 & 1) == 0) {
                uVar34 = 0;
                uVar50 = 0;
                p_Var41 = p_Var41 + 0xc;
              }
              else {
                uVar34 = 0x80;
                uVar50 = 0x1ff;
                p_Var41 = p_Var41 + 0xc;
              }
            }
            break;
          default:
            goto switchD_00103338_default;
          }
        }
      }
      else {
LAB_0010199f:
        iVar37 = (int)pIVar40;
        iVar6 = (int)pBVar53;
        local_970 = 0x1d;
        local_968 = 1;
        local_964 = 0;
        decodeISE(local_4c8,(ISEDecodedResult *)(ulong)uVar33,(int)&local_978,pBVar53,pIVar40);
        if (iVar6 != 2) goto LAB_0010328f;
LAB_00101a14:
        if (0 < (int)uVar33) {
          p_Var41 = local_7c8;
          iVar6 = 8 - iVar37;
          p_Var8 = p_Var41 + (long)(int)uVar33 * 4;
          p_Var21 = local_4c8 + 8;
          iVar16 = -iVar37;
          do {
            if (iVar6 == iVar16 || SBORROW4(iVar6,iVar16) != iVar6 + iVar37 < 0) {
              uVar33 = 0;
            }
            else {
              uVar33 = 0;
              iVar28 = -iVar6;
              iVar23 = iVar6;
              do {
                uVar50 = *(uint *)p_Var21 >> ((byte)iVar28 & 0x1f);
                if (-1 < iVar23) {
                  uVar50 = *(uint *)p_Var21 << ((byte)iVar23 & 0x1f);
                }
                iVar23 = iVar23 - iVar37;
                iVar28 = iVar28 + iVar37;
                uVar33 = uVar33 | uVar50;
              } while (iVar23 != iVar16 && SBORROW4(iVar23,iVar16) == iVar23 + iVar37 < 0);
            }
            *(uint *)p_Var41 = uVar33;
            p_Var41 = p_Var41 + 4;
            p_Var21 = p_Var21 + 0xc;
          } while (p_Var8 != p_Var41);
        }
      }
LAB_00101ab9:
      local_9d8 = &local_978;
      local_9c8 = local_7c8;
      p_Var8 = local_4c8;
      iVar6 = 0;
      lVar9 = 0;
      pUVar35 = local_948;
      do {
        lVar13 = (long)iVar6;
        pUVar18 = pUVar35 + 0x10;
        lVar1 = lVar13 * 4;
        p_Var41 = local_9c8 + lVar1;
        iVar6 = iVar6 + 2 + (local_958[lVar9] >> 2) * 2;
        iVar16 = SUB164(__LC5,0);
        iVar23 = SUB164(__LC5,4);
        iVar28 = SUB164(__LC5,8);
        iVar24 = SUB164(__LC5,0xc);
        switch(local_958[lVar9]) {
        case 0:
          uVar75 = *(undefined8 *)p_Var41;
          uVar33 = (&uStack_7c4)[lVar13];
          *(undefined4 *)(pUVar35 + 0xc) = 0xff;
          *(undefined4 *)(pUVar35 + 0x1c) = 0xff;
          uVar58 = (undefined4)uVar75;
          *(uint *)(pUVar35 + 0x10) = uVar33;
          *(uint *)(pUVar35 + 0x14) = uVar33;
          *(uint *)(pUVar35 + 0x18) = uVar33;
          *(ulong *)pUVar35 = CONCAT44(uVar58,uVar58);
          *(undefined4 *)(pUVar35 + 8) = uVar58;
          break;
        case 1:
          uVar33 = (&uStack_7c4)[lVar13];
          uVar50 = *(uint *)p_Var41;
          *(undefined4 *)(pUVar35 + 0xc) = 0xff;
          *(undefined4 *)(pUVar35 + 0x1c) = 0xff;
          uVar50 = uVar50 >> 2 | uVar33 & 0xc0;
          uVar33 = (uVar33 & 0x3f) + uVar50;
          *(uint *)(pUVar35 + 8) = uVar50;
          if (0xff < uVar33) {
            uVar33 = 0xff;
          }
          *(ulong *)pUVar35 = CONCAT44(uVar50,uVar50);
          *(uint *)(pUVar35 + 0x10) = uVar33;
          *(uint *)(pUVar35 + 0x14) = uVar33;
          *(uint *)(pUVar35 + 0x18) = uVar33;
          break;
        case 2:
          uVar50 = *(uint *)p_Var41 * 0x10;
          uVar34 = (&uStack_7c4)[lVar13] * 0x10;
          uVar33 = uVar50;
          if ((&uStack_7c4)[lVar13] < *(uint *)p_Var41) {
            uVar33 = uVar34 + 8;
            uVar34 = uVar50 - 8;
          }
          goto LAB_001021b1;
        case 3:
          uVar33 = (&uStack_7c4)[lVar13];
          uVar50 = *(uint *)p_Var41;
          if ((char)uVar50 < '\0') {
            uVar34 = (uVar33 & 0x1f) << 2;
            uVar33 = uVar33 << 4 & 0xe00 | (uVar50 & 0x7f) << 2;
          }
          else {
            uVar34 = uVar33 * 2 & 0x1e;
            uVar33 = uVar33 << 4 & 0xf00 | uVar50 * 2 & 0xff;
          }
          uVar34 = uVar34 + uVar33;
          if (0xfff < uVar34) {
            uVar34 = 0xfff;
          }
LAB_001021b1:
          *(uint *)(pUVar35 + 8) = uVar33;
          *(undefined4 *)(pUVar35 + 0xc) = 0x780;
          *(uint *)(pUVar35 + 0x10) = uVar34;
          *(uint *)(pUVar35 + 0x14) = uVar34;
          *(uint *)(pUVar35 + 0x18) = uVar34;
          *(undefined4 *)(pUVar35 + 0x1c) = 0x780;
          *(ulong *)pUVar35 = CONCAT44(uVar33,uVar33);
          break;
        case 4:
          uVar33 = *(uint *)p_Var41;
          uVar50 = (&uStack_7c4)[lVar13];
          auVar68._4_4_ = uVar33;
          auVar68._0_4_ = uVar33;
          auVar68._8_4_ = uVar33;
          auVar68._12_4_ = *(undefined4 *)((long)&uStack_7c0 + lVar1);
          auVar61._4_4_ = uVar50;
          auVar61._0_4_ = uVar50;
          auVar61._8_4_ = uVar50;
          auVar61._12_4_ = local_7b8[lVar13 + -1];
          *(undefined1 (*) [16])pUVar35 = auVar68;
          *(undefined1 (*) [16])(pUVar35 + 0x10) = auVar61;
          break;
        case 5:
          uVar33 = (&uStack_7c4)[lVar13];
          auVar63._4_4_ = uVar33;
          auVar63._0_4_ = uVar33;
          auVar63._8_4_ = uVar33;
          auVar63._12_4_ = local_7b8[lVar13 + -1];
          auVar72._0_4_ = (int)*(uint *)p_Var41 >> 1;
          auVar72._4_4_ = auVar72._0_4_;
          auVar72._8_4_ = auVar72._0_4_;
          auVar72._12_4_ = *(int *)((long)&uStack_7c0 + lVar1) >> 1;
          uVar50 = (int)(&uStack_7c4)[lVar13] >> 1;
          auVar72 = auVar72 | auVar63 & __LC4;
          uVar33 = uVar50 & 0x3f;
          if ((uVar50 & 0x20) != 0) {
            uVar33 = uVar50 | 0xffffffc0;
          }
          uVar34 = (int)local_7b8[lVar13 + -1] >> 1;
          auVar64._0_4_ = -(uint)(iVar16 < auVar72._0_4_);
          auVar64._4_4_ = -(uint)(iVar23 < auVar72._4_4_);
          auVar64._8_4_ = -(uint)(iVar28 < auVar72._8_4_);
          auVar64._12_4_ = -(uint)(iVar24 < auVar72._12_4_);
          uVar50 = uVar34 & 0x3f;
          if ((uVar34 & 0x20) != 0) {
            uVar50 = uVar34 | 0xffffffc0;
          }
          auVar66 = ~auVar64 & auVar72 | __LC5 & auVar64;
          auVar77._0_4_ = -(uint)(0 < auVar66._0_4_);
          auVar77._4_4_ = -(uint)(0 < auVar66._4_4_);
          auVar77._8_4_ = -(uint)(0 < auVar66._8_4_);
          auVar77._12_4_ = -(uint)(0 < auVar66._12_4_);
          *(undefined1 (*) [16])pUVar35 = auVar66 & auVar77;
          auVar66._0_4_ = uVar33 + auVar72._0_4_;
          auVar66._4_4_ = uVar33 + auVar72._4_4_;
          auVar66._8_4_ = uVar33 + auVar72._8_4_;
          auVar66._12_4_ = uVar50 + auVar72._12_4_;
LAB_00102138:
          auVar65._0_4_ = -(uint)(iVar16 < auVar66._0_4_);
          auVar65._4_4_ = -(uint)(iVar23 < auVar66._4_4_);
          auVar65._8_4_ = -(uint)(iVar28 < auVar66._8_4_);
          auVar65._12_4_ = -(uint)(iVar24 < auVar66._12_4_);
          auVar66 = ~auVar65 & auVar66 | __LC5 & auVar65;
          auVar67._0_4_ = -(uint)(0 < auVar66._0_4_);
          auVar67._4_4_ = -(uint)(0 < auVar66._4_4_);
          auVar67._8_4_ = -(uint)(0 < auVar66._8_4_);
          auVar67._12_4_ = -(uint)(0 < auVar66._12_4_);
          *(undefined1 (*) [16])(pUVar35 + 0x10) = auVar66 & auVar67;
          break;
        case 6:
          uVar33 = local_7b8[lVar13 + -1];
          uVar50 = (&uStack_7c4)[lVar13];
          *(undefined4 *)(pUVar35 + 0xc) = 0xff;
          uVar34 = *(uint *)p_Var41;
          iVar16 = *(int *)((long)&uStack_7c0 + lVar1);
          *(undefined4 *)(pUVar35 + 0x1c) = 0xff;
          *(uint *)(pUVar35 + 0x14) = uVar50;
          *(uint *)(pUVar35 + 0x10) = uVar34;
          *(int *)(pUVar35 + 0x18) = iVar16;
          *(uint *)(pUVar35 + 8) = uVar33 * iVar16 >> 8;
          *(ulong *)pUVar35 = CONCAT44(uVar33 * uVar50 >> 8,uVar33 * uVar34 >> 8);
          break;
        case 7:
          uVar33 = *(uint *)((long)&uStack_7c0 + lVar1);
          uVar50 = (&uStack_7c4)[lVar13];
          uVar34 = local_7b8[lVar13 + -1];
          uVar44 = *(uint *)p_Var41 >> 6;
          uVar29 = uVar44 & 3;
          uVar30 = uVar33 >> 6 & 2 | uVar50 >> 7 & 1;
          if (uVar30 == 3) {
            if (uVar29 == 3) {
              uVar29 = 5;
              uVar30 = 0;
            }
            else {
              uVar30 = uVar44 & 3;
              uVar29 = 4;
            }
          }
          uVar31 = *(uint *)p_Var41 & 0x3f;
          local_9e8 = uVar50 & 0x1f;
          uVar38 = uVar34 & 0x1f;
          uVar45 = uVar33 & 0x1f;
          uVar46 = uVar50 >> 6 & 1;
          uVar50 = uVar50 >> 5 & 1;
          uVar44 = uVar33 & 0x1f;
          uVar51 = uVar33 >> 6 & 1;
          uVar12 = uVar34 >> 6 & 1;
          uVar33 = uVar33 >> 5 & 1;
          uVar49 = uVar34 >> 5 & 1;
          uVar34 = uVar34 >> 7 & 1;
          switch((ulong)uVar29) {
          default:
            uVar31 = uVar51 << 7 | uVar46 << 9 | uVar50 << 8 | uVar31;
            uVar33 = uVar33 << 10;
            goto LAB_0010278f;
          case 1:
            local_9e8 = local_9e8 | uVar50 << 5;
            uVar44 = uVar45 | uVar33 << 5;
            uVar31 = uVar12 << 10 | uVar34 << 6 | uVar46 << 8 | uVar51 << 7 | uVar31 | uVar49 << 9;
            break;
          case 2:
            uVar31 = uVar33 << 6 | uVar51 << 7 | uVar46 << 9 | uVar50 << 8 | uVar31;
            uVar38 = uVar34 << 7 | uVar12 << 6 | uVar38 | uVar49 << 5;
            break;
          case 3:
            local_9e8 = local_9e8 | uVar50 << 5;
            uVar44 = uVar45 | uVar33 << 5;
            uVar33 = uVar46 << 8 | uVar51 << 7;
LAB_0010278f:
            uVar31 = uVar33 | uVar31 | uVar34 << 6;
            uVar38 = uVar12 << 6 | uVar49 << 5 | uVar38;
            break;
          case 4:
            local_9e8 = local_9e8 | uVar46 << 6 | uVar50 << 5;
            uVar44 = uVar45 | uVar51 << 6 | uVar33 << 5;
            uVar31 = uVar34 << 6 | uVar12 << 7 | uVar31;
            uVar38 = uVar49 << 5 | uVar38;
            break;
          case 5:
            iVar28 = (uVar34 << 6 | uVar31) << 5;
            iVar16 = (uVar50 << 5 | uVar46 << 6 | local_9e8) << 5;
            iVar23 = (uVar51 << 6 | uVar33 << 5 | uVar45) << 5;
            iVar24 = (uVar12 << 6 | uVar49 << 5 | uVar38) << 5;
            goto LAB_00102547;
          }
          bVar43 = (byte)*(undefined4 *)
                          (decodeHDREndpointMode7(basisu_astc::UVec4&,basisu_astc::UVec4&,unsigned_int,unsigned_int,unsigned_int,unsigned_int)
                           ::shiftAmounts + (ulong)uVar29 * 4);
          iVar28 = uVar31 << (bVar43 & 0x1f);
          iVar24 = uVar38 << (bVar43 & 0x1f);
          iVar16 = iVar28 - (local_9e8 << (bVar43 & 0x1f));
          iVar23 = iVar28 - (uVar44 << (bVar43 & 0x1f));
LAB_00102547:
          iVar37 = iVar28;
          iVar55 = iVar23;
          if ((uVar30 != 1) && (iVar37 = iVar16, iVar16 = iVar23, iVar55 = iVar28, uVar30 != 2)) {
            iVar16 = iVar28;
            iVar55 = iVar23;
          }
          *(undefined4 *)(pUVar35 + 0xc) = 0x780;
          *(undefined4 *)(pUVar35 + 0x1c) = 0x780;
          iVar23 = 0xfff;
          if (iVar16 - iVar24 < 0x1000) {
            iVar23 = iVar16 - iVar24;
          }
          if (iVar23 < 0) {
            iVar23 = 0;
          }
          *(int *)pUVar35 = iVar23;
          iVar23 = 0xfff;
          if (iVar37 - iVar24 < 0x1000) {
            iVar23 = iVar37 - iVar24;
          }
          if (iVar23 < 0) {
            iVar23 = 0;
          }
          *(int *)(pUVar35 + 4) = iVar23;
          iVar24 = iVar55 - iVar24;
          if (0xfff < iVar24) {
            iVar24 = 0xfff;
          }
          if (iVar24 < 0) {
            iVar24 = 0;
          }
          *(int *)(pUVar35 + 8) = iVar24;
          if (0xfff < iVar16) {
            iVar16 = 0xfff;
          }
          if (iVar16 < 0) {
            iVar16 = 0;
          }
          *(int *)(pUVar35 + 0x10) = iVar16;
          if (0xfff < iVar37) {
            iVar37 = 0xfff;
          }
          if (iVar37 < 0) {
            iVar37 = 0;
          }
          *(int *)(pUVar35 + 0x14) = iVar37;
          iVar16 = 0xfff;
          if (iVar55 < 0x1000) {
            iVar16 = iVar55;
          }
          if (iVar16 < 0) {
            iVar16 = 0;
          }
          *(int *)(pUVar35 + 0x18) = iVar16;
          break;
        case 8:
          uVar33 = (&uStack_7c4)[lVar13];
          uVar50 = local_7b8[lVar13 + -1];
          uVar34 = local_7b8[lVar13 + 1];
          uVar30 = local_7b8[lVar13];
          iVar16 = (int)*(undefined8 *)((long)&uStack_7c0 + lVar1);
          iVar23 = (int)*(undefined8 *)p_Var41;
          if (uVar33 + uVar50 + uVar34 < iVar16 + iVar23 + uVar30) {
            *(undefined4 *)(pUVar35 + 0xc) = 0xff;
            iVar28 = (int)(uVar33 + uVar34) >> 1;
            *(undefined4 *)(pUVar35 + 0x1c) = 0xff;
            if (iVar28 < 0) {
              iVar28 = 0;
            }
            *(int *)pUVar35 = iVar28;
            iVar28 = (int)(uVar50 + uVar34) >> 1;
            if (iVar28 < 0) {
              iVar28 = 0;
            }
            *(int *)(pUVar35 + 4) = iVar28;
            if ((int)uVar34 < 0) {
              uVar34 = 0;
            }
            iVar23 = (int)(iVar23 + uVar30) >> 1;
            *(uint *)(pUVar35 + 8) = uVar34;
            if (iVar23 < 0) {
              iVar23 = 0;
            }
            *(int *)(pUVar35 + 0x10) = iVar23;
            iVar16 = (int)(iVar16 + uVar30) >> 1;
            if (iVar16 < 0) {
              iVar16 = 0;
            }
            *(int *)(pUVar35 + 0x14) = iVar16;
            if ((int)uVar30 < 0) {
              uVar30 = 0;
            }
            *(uint *)(pUVar35 + 0x18) = uVar30;
          }
          else {
            *(uint *)(pUVar35 + 8) = uVar30;
            *(undefined4 *)(pUVar35 + 0xc) = 0xff;
            *(uint *)(pUVar35 + 0x10) = uVar33;
            *(uint *)(pUVar35 + 0x14) = uVar50;
            *(uint *)(pUVar35 + 0x18) = uVar34;
            *(undefined4 *)(pUVar35 + 0x1c) = 0xff;
            *(ulong *)pUVar35 = CONCAT44(iVar16,iVar23);
          }
          break;
        case 9:
          uVar50 = (int)(&uStack_7c4)[lVar13] >> 1;
          uVar34 = (int)*(uint *)p_Var41 >> 1 | (&uStack_7c4)[lVar13] & 0x80;
          uVar33 = uVar50 | 0xffffffc0;
          if ((uVar50 & 0x20) == 0) {
            uVar33 = uVar50 & 0x3f;
          }
          uVar44 = (int)local_7b8[lVar13 + -1] >> 1;
          uVar30 = *(int *)((long)&uStack_7c0 + lVar1) >> 1 | local_7b8[lVar13 + -1] & 0x80;
          uVar50 = uVar44 & 0x3f;
          if ((uVar44 & 0x20) != 0) {
            uVar50 = uVar44 | 0xffffffc0;
          }
          uVar51 = (int)local_7b8[lVar13] >> 1 | local_7b8[lVar13 + 1] & 0x80;
          uVar29 = (int)local_7b8[lVar13 + 1] >> 1;
          uVar44 = uVar29 & 0x3f;
          if ((uVar29 & 0x20) != 0) {
            uVar44 = uVar29 | 0xffffffc0;
          }
          iVar16 = uVar34 + uVar33;
          iVar23 = uVar30 + uVar50;
          iVar28 = uVar51 + uVar44;
          iVar24 = 0xff;
          if (iVar28 < 0x100) {
            iVar24 = iVar28;
          }
          if (iVar24 < 0) {
            iVar24 = 0;
          }
          uVar29 = 0xff;
          if ((int)uVar51 < 0x100) {
            uVar29 = uVar51;
          }
          if ((int)uVar29 < 0) {
            uVar29 = 0;
          }
          if ((int)(uVar33 + uVar50 + uVar44) < 0) {
            *(int *)(pUVar35 + 8) = iVar24;
            *(undefined4 *)(pUVar35 + 0xc) = 0xff;
            iVar16 = iVar16 + iVar28 >> 1;
            if (0xff < iVar16) {
              iVar16 = 0xff;
            }
            if (iVar16 < 0) {
              iVar16 = 0;
            }
            *(int *)pUVar35 = iVar16;
            *(uint *)(pUVar35 + 0x18) = uVar29;
            *(undefined4 *)(pUVar35 + 0x1c) = 0xff;
            iVar16 = iVar23 + iVar28 >> 1;
            if (0xff < iVar16) {
              iVar16 = 0xff;
            }
            if (iVar16 < 0) {
              iVar16 = 0;
            }
            iVar23 = (int)(uVar51 + uVar34) >> 1;
            *(int *)(pUVar35 + 4) = iVar16;
            if (0xff < iVar23) {
              iVar23 = 0xff;
            }
            if (iVar23 < 0) {
              iVar23 = 0;
            }
            iVar16 = (int)(uVar51 + uVar30) >> 1;
            *(int *)(pUVar35 + 0x10) = iVar23;
            if (0xff < iVar16) {
              iVar16 = 0xff;
            }
            if (iVar16 < 0) {
              iVar16 = 0;
            }
            *(int *)(pUVar35 + 0x14) = iVar16;
          }
          else {
            *(uint *)(pUVar35 + 8) = uVar29;
            *(undefined4 *)(pUVar35 + 0xc) = 0xff;
            uVar33 = 0xff;
            if ((int)uVar34 < 0x100) {
              uVar33 = uVar34;
            }
            if ((int)uVar33 < 0) {
              uVar33 = 0;
            }
            *(uint *)pUVar35 = uVar33;
            uVar33 = 0xff;
            if ((int)uVar30 < 0x100) {
              uVar33 = uVar30;
            }
            if ((int)uVar33 < 0) {
              uVar33 = 0;
            }
            *(uint *)(pUVar35 + 4) = uVar33;
            iVar28 = 0xff;
            if (iVar16 < 0x100) {
              iVar28 = iVar16;
            }
            if (iVar28 < 0) {
              iVar28 = 0;
            }
            *(int *)(pUVar35 + 0x18) = iVar24;
            *(undefined4 *)(pUVar35 + 0x1c) = 0xff;
            *(int *)(pUVar35 + 0x10) = iVar28;
            iVar16 = 0xff;
            if (iVar23 < 0x100) {
              iVar16 = iVar23;
            }
            if (iVar16 < 0) {
              iVar16 = 0;
            }
            *(int *)(pUVar35 + 0x14) = iVar16;
          }
          break;
        case 10:
          uVar33 = local_7b8[lVar13 + -1];
          iVar16 = *(int *)((long)&uStack_7c0 + lVar1);
          uVar50 = (&uStack_7c4)[lVar13];
          uVar34 = *(uint *)p_Var41;
          auVar70._12_4_ = local_7b8[lVar13 + 1];
          auVar70._8_4_ = iVar16;
          auVar70._0_8_ = *(undefined8 *)p_Var41;
          uVar30 = local_7b8[lVar13];
          *(undefined1 (*) [16])(pUVar35 + 0x10) = auVar70;
          auVar59._12_4_ = uVar30;
          auVar59._8_4_ = iVar16 * uVar33 >> 8;
          auVar59._4_4_ = uVar50 * uVar33 >> 8;
          auVar59._0_4_ = uVar34 * uVar33 >> 8;
          *(undefined1 (*) [16])pUVar35 = auVar59;
          break;
        case 0xb:
          decodeHDREndpointMode11
                    (pUVar35,pUVar18,*(uint *)p_Var41,(&uStack_7c4)[lVar13],
                     *(uint *)((long)&uStack_7c0 + lVar1),local_7b8[lVar13 + -1],local_7b8[lVar13],
                     local_7b8[lVar13 + 1]);
          break;
        case 0xc:
          uVar33 = *(uint *)p_Var41;
          iVar37 = *(int *)((long)&uStack_7c0 + lVar1);
          uVar50 = local_7b8[lVar13 + 1];
          uVar34 = local_7b8[lVar13];
          uVar30 = *(uint *)p_Var41;
          uVar58 = *(undefined4 *)((long)&uStack_7c0 + lVar1);
          auVar66 = *(undefined1 (*) [16])(local_7b8 + lVar13);
          iVar55 = auVar66._12_4_;
          if ((&uStack_7c4)[lVar13] + local_7b8[lVar13 + -1] + uVar50 < uVar33 + iVar37 + uVar34) {
            iVar17 = (int)((&uStack_7c4)[lVar13] + uVar50) >> 1;
            iVar39 = (int)(local_7b8[lVar13 + -1] + uVar50) >> 1;
            auVar73._12_4_ = iVar55;
            auVar73._8_4_ = uVar50;
            auVar73._4_4_ = iVar39;
            auVar73._0_4_ = iVar17;
            auVar62._0_4_ = -(uint)(iVar16 < iVar17);
            auVar62._4_4_ = -(uint)(iVar23 < iVar39);
            auVar62._8_4_ = -(uint)(iVar28 < (int)uVar50);
            auVar62._12_4_ = -(uint)(iVar24 < iVar55);
            auVar62 = ~auVar62 & auVar73 | __LC5 & auVar62;
            auVar74._0_4_ = -(uint)(0 < auVar62._0_4_);
            auVar74._4_4_ = -(uint)(0 < auVar62._4_4_);
            auVar74._8_4_ = -(uint)(0 < auVar62._8_4_);
            auVar74._12_4_ = -(uint)(0 < auVar62._12_4_);
            *(undefined1 (*) [16])pUVar35 = auVar62 & auVar74;
            auVar66._12_4_ = auVar66._8_4_;
            auVar66._8_4_ = uVar34;
            auVar66._4_4_ = (int)(iVar37 + uVar34) >> 1;
            auVar66._0_4_ = (int)(uVar33 + uVar34) >> 1;
            goto LAB_00102138;
          }
          auVar60._4_4_ = local_7b8[lVar13 + -1];
          auVar60._0_4_ = (&uStack_7c4)[lVar13];
          auVar60._8_4_ = auVar66._4_4_;
          auVar60._12_4_ = iVar55;
          *(undefined1 (*) [16])(pUVar35 + 0x10) = auVar60;
          auVar71._4_4_ = uVar58;
          auVar71._0_4_ = uVar30;
          auVar71._8_4_ = auVar66._0_4_;
          auVar71._12_4_ = auVar66._8_4_;
          *(undefined1 (*) [16])pUVar35 = auVar71;
          break;
        case 0xd:
          uVar50 = (int)(&uStack_7c4)[lVar13] >> 1;
          uVar34 = (int)*(uint *)p_Var41 >> 1 | (&uStack_7c4)[lVar13] & 0x80;
          uVar33 = uVar50 & 0x3f;
          if ((uVar50 & 0x20) != 0) {
            uVar33 = uVar50 | 0xffffffc0;
          }
          uVar44 = (int)local_7b8[lVar13 + -1] >> 1;
          uVar30 = *(int *)((long)&uStack_7c0 + lVar1) >> 1 | local_7b8[lVar13 + -1] & 0x80;
          uVar50 = uVar44 | 0xffffffc0;
          if ((uVar44 & 0x20) == 0) {
            uVar50 = uVar44 & 0x3f;
          }
          uVar29 = (int)local_7b8[lVar13] >> 1 | local_7b8[lVar13 + 1] & 0x80;
          uVar51 = (int)local_7b8[lVar13 + 1] >> 1;
          uVar44 = uVar51 & 0x3f;
          if ((uVar51 & 0x20) != 0) {
            uVar44 = uVar51 | 0xffffffc0;
          }
          uVar45 = (int)local_7b8[lVar13 + 3] >> 1;
          iVar16 = uVar29 + uVar44;
          uVar12 = (int)local_7b8[lVar13 + 2] >> 1 | local_7b8[lVar13 + 3] & 0x80;
          uVar51 = uVar45 & 0x3f;
          if ((uVar45 & 0x20) != 0) {
            uVar51 = uVar45 | 0xffffffc0;
          }
          iVar28 = uVar34 + uVar33;
          iVar23 = uVar30 + uVar50;
          uVar45 = 0xff;
          if ((int)uVar12 < 0x100) {
            uVar45 = uVar12;
          }
          if ((int)uVar45 < 0) {
            uVar45 = 0;
          }
          uVar31 = 0xff;
          if ((int)uVar29 < 0x100) {
            uVar31 = uVar29;
          }
          if ((int)uVar31 < 0) {
            uVar31 = 0;
          }
          iVar24 = uVar51 + uVar12;
          if (0xff < (int)(uVar51 + uVar12)) {
            iVar24 = 0xff;
          }
          if (iVar24 < 0) {
            iVar24 = 0;
          }
          iVar37 = 0xff;
          if (iVar16 < 0x100) {
            iVar37 = iVar16;
          }
          if (iVar37 < 0) {
            iVar37 = 0;
          }
          if ((int)(uVar50 + uVar33 + uVar44) < 0) {
            *(int *)(pUVar35 + 0xc) = iVar24;
            *(int *)(pUVar35 + 8) = iVar37;
            *(uint *)(pUVar35 + 0x18) = uVar31;
            iVar28 = iVar28 + iVar16 >> 1;
            *(uint *)(pUVar35 + 0x1c) = uVar45;
            if (0xff < iVar28) {
              iVar28 = 0xff;
            }
            if (iVar28 < 0) {
              iVar28 = 0;
            }
            *(int *)pUVar35 = iVar28;
            iVar16 = iVar23 + iVar16 >> 1;
            if (0xff < iVar16) {
              iVar16 = 0xff;
            }
            if (iVar16 < 0) {
              iVar16 = 0;
            }
            *(int *)(pUVar35 + 4) = iVar16;
            iVar16 = (int)(uVar34 + uVar29) >> 1;
            if (0xff < iVar16) {
              iVar16 = 0xff;
            }
            if (iVar16 < 0) {
              iVar16 = 0;
            }
            *(int *)(pUVar35 + 0x10) = iVar16;
            iVar16 = (int)(uVar30 + uVar29) >> 1;
            if (0xff < iVar16) {
              iVar16 = 0xff;
            }
            if (iVar16 < 0) {
              iVar16 = 0;
            }
            *(int *)(pUVar35 + 0x14) = iVar16;
          }
          else {
            *(uint *)(pUVar35 + 0xc) = uVar45;
            *(uint *)(pUVar35 + 8) = uVar31;
            *(int *)(pUVar35 + 0x18) = iVar37;
            uVar33 = 0xff;
            if ((int)uVar34 < 0x100) {
              uVar33 = uVar34;
            }
            *(int *)(pUVar35 + 0x1c) = iVar24;
            if ((int)uVar33 < 0) {
              uVar33 = 0;
            }
            *(uint *)pUVar35 = uVar33;
            uVar33 = 0xff;
            if ((int)uVar30 < 0x100) {
              uVar33 = uVar30;
            }
            if ((int)uVar33 < 0) {
              uVar33 = 0;
            }
            *(uint *)(pUVar35 + 4) = uVar33;
            iVar16 = 0xff;
            if (iVar28 < 0x100) {
              iVar16 = iVar28;
            }
            if (iVar16 < 0) {
              iVar16 = 0;
            }
            *(int *)(pUVar35 + 0x10) = iVar16;
            iVar16 = 0xff;
            if (iVar23 < 0x100) {
              iVar16 = iVar23;
            }
            if (iVar16 < 0) {
              iVar16 = 0;
            }
            *(int *)(pUVar35 + 0x14) = iVar16;
          }
          break;
        case 0xe:
          decodeHDREndpointMode11
                    (pUVar35,pUVar18,*(uint *)p_Var41,(&uStack_7c4)[lVar13],
                     *(uint *)((long)&uStack_7c0 + lVar1),local_7b8[lVar13 + -1],local_7b8[lVar13],
                     local_7b8[lVar13 + 1]);
          *(uint *)(pUVar35 + 0xc) = local_7b8[lVar13 + 2];
          *(uint *)(pUVar35 + 0x1c) = local_7b8[lVar13 + 3];
          break;
        case 0xf:
          uVar33 = local_7b8[lVar13 + 3];
          uVar50 = local_7b8[lVar13 + 2];
          decodeHDREndpointMode11
                    (pUVar35,pUVar18,*(uint *)p_Var41,(&uStack_7c4)[lVar13],
                     *(uint *)((long)&uStack_7c0 + lVar1),local_7b8[lVar13 + -1],local_7b8[lVar13],
                     local_7b8[lVar13 + 1]);
          uVar34 = uVar33 & 0x7f;
          uVar30 = uVar50 & 0x7f;
          uVar33 = uVar33 >> 6 & 2 | uVar50 >> 7 & 1;
          if (uVar33 == 3) {
            *(uint *)(pUVar35 + 0xc) = uVar30 << 5;
            *(uint *)(pUVar35 + 0x1c) = uVar34 << 5;
          }
          else {
            sVar4 = (sbyte)uVar33;
            iVar16 = (uVar34 << sVar4 + 1 & 0x780 | uVar30) << (4U - sVar4 & 0x1f);
            *(int *)(pUVar35 + 0xc) = iVar16;
            iVar16 = iVar16 + ((0x3f >> sVar4 & uVar34 ^ 0x20 >> sVar4) - (0x20 >> sVar4) <<
                              (4U - sVar4 & 0x1f));
            if (0xfff < iVar16) {
              iVar16 = 0xfff;
            }
            if (iVar16 < 0) {
              iVar16 = 0;
            }
            *(int *)(pUVar35 + 0x1c) = iVar16;
          }
        }
        pUVar35 = pUVar35 + 0x20;
        iVar16 = (int)lVar9;
        lVar9 = lVar9 + 1;
      } while (iVar16 < (int)uVar26);
      if (local_98c == 1) {
        local_96c = (uVar5 * 7 + 2) / 3 + local_988 * uVar5;
LAB_00101bc8:
        uVar33 = local_988 * 2;
        local_970 = 0x7f;
        local_968 = 0;
        local_964 = 0;
        local_978 = param_2;
        decodeISE(local_9c8,(ISEDecodedResult *)(ulong)uVar5,(int)local_9d8,
                  (BitAccessStream *)(ulong)local_98c,(ISEParams *)(ulong)local_988);
        if (local_98c == 1) {
          uVar33 = uVar33 + 1;
          puVar36 = unquantizeWeights(unsigned_int*,basisu_astc::astc::(anonymous_namespace)::ISEDecodedResult_const*,basisu_astc::astc::(anonymous_namespace)::ASTCBlockMode_const&)
                    ::map1;
          if (1 < uVar33) goto LAB_00101c3f;
        }
        else {
          if (1 < uVar33) {
LAB_00101c3f:
            iVar6 = *(int *)(unquantizeWeights(unsigned_int*,basisu_astc::astc::(anonymous_namespace)::ISEDecodedResult_const*,basisu_astc::astc::(anonymous_namespace)::ASTCBlockMode_const&)
                             ::Ca + (long)(int)(uVar33 - 2) * 4);
            if (0 < (int)uVar5) {
              puVar14 = &uStack_7c4;
              pUVar35 = local_8c8;
              do {
                uVar50 = puVar14[-1];
                uVar34 = uVar50 >> 1 & 1;
                if ((uVar50 & 1) == 0) {
                  uVar44 = 0;
                  uVar30 = 0;
                }
                else {
                  uVar44 = 0x20;
                  uVar30 = 0x7f;
                }
                if (uVar33 == 4) {
                  uVar29 = -uVar34 & 0x45;
                }
                else if ((int)uVar33 < 5) {
                  uVar29 = -(uint)(1 < uVar33 - 2);
                }
                else if (uVar33 == 5) {
                  uVar29 = -uVar34 & 0x42;
                }
                else {
                  uVar29 = 0xffffffff;
                  if (uVar33 == 6) {
                    uVar50 = uVar50 >> 2 & 1;
                    uVar29 = uVar50 << 6 | uVar34 << 5 | uVar34 | uVar50 * 2;
                  }
                }
                uVar50 = *puVar14;
                pUVar18 = pUVar35 + 4;
                puVar14 = puVar14 + 3;
                *(uint *)pUVar35 = (uVar50 * iVar6 + uVar29 ^ uVar30) >> 2 | uVar44;
                pUVar35 = pUVar18;
              } while (local_8c8 + (long)(int)uVar5 * 4 != pUVar18);
              goto LAB_001028e4;
            }
            goto LAB_0010290d;
          }
          puVar36 = unquantizeWeights(unsigned_int*,basisu_astc::astc::(anonymous_namespace)::ISEDecodedResult_const*,basisu_astc::astc::(anonymous_namespace)::ASTCBlockMode_const&)
                    ::map0;
        }
        if ((int)uVar5 < 1) goto LAB_0010290d;
        puVar14 = (uint *)&uStack_7c0;
        pUVar35 = local_8c8;
        do {
          uVar33 = *puVar14;
          pUVar18 = pUVar35 + 4;
          puVar14 = puVar14 + 3;
          *(undefined4 *)pUVar35 = *(undefined4 *)(puVar36 + (ulong)uVar33 * 4);
          pUVar35 = pUVar18;
        } while (local_8c8 + (long)(int)uVar5 * 4 != pUVar18);
LAB_001028e4:
        pUVar35 = local_8c8;
        do {
          pUVar18 = pUVar35 + 4;
          *(uint *)pUVar35 = (uint)(0x20 < *(uint *)pUVar35) + *(uint *)pUVar35;
          pUVar35 = pUVar18;
        } while (local_8c8 + (long)(int)uVar5 * 4 != pUVar18);
        if ((int)uVar5 < 0x40) goto LAB_0010290d;
      }
      else {
        if (local_98c != 2) {
          local_96c = (uVar5 * 8 + 4) / 5 + local_988 * uVar5;
          goto LAB_00101bc8;
        }
        local_970 = 0x7f;
        local_96c = local_988 * uVar5;
        local_968 = 0;
        local_964 = 0;
        local_978 = param_2;
        decodeISE(local_9c8,(ISEDecodedResult *)(ulong)uVar5,(int)local_9d8,(BitAccessStream *)0x2,
                  (ISEParams *)(ulong)local_988);
        if (0 < (int)uVar5) {
          puVar14 = (uint *)&uStack_7c0;
          iVar6 = 6 - local_988;
          iVar16 = -local_988;
          pUVar35 = local_8c8;
          do {
            if (iVar6 == iVar16 || SBORROW4(iVar6,iVar16) != (int)(iVar6 + local_988) < 0) {
              uVar33 = 0;
            }
            else {
              uVar33 = 0;
              iVar28 = -iVar6;
              iVar23 = iVar6;
              do {
                uVar50 = *puVar14 >> ((byte)iVar28 & 0x1f);
                if (-1 < iVar23) {
                  uVar50 = *puVar14 << ((byte)iVar23 & 0x1f);
                }
                iVar23 = iVar23 - local_988;
                iVar28 = iVar28 + local_988;
                uVar33 = uVar33 | uVar50;
              } while (iVar23 != iVar16 && SBORROW4(iVar23,iVar16) == (int)(iVar23 + local_988) < 0)
              ;
            }
            *(uint *)pUVar35 = uVar33;
            pUVar35 = pUVar35 + 4;
            puVar14 = puVar14 + 3;
          } while (local_8c8 + (long)(int)uVar5 * 4 != pUVar35);
          goto LAB_001028e4;
        }
LAB_0010290d:
        __n = (ulong)(0x3f - uVar5) * 4 + 4;
        if (0x3f < (int)uVar5) {
          __n = 4;
        }
        memset(local_8c8 + (long)(int)uVar5 * 4,0xff,__n);
      }
      if (0 < param_4) {
        uVar5 = 0x20;
        iVar16 = 0;
        iVar6 = iVar16;
        do {
          if (0 < param_3) {
            uVar50 = 0x20;
            uVar33 = uVar5 >> 6 & 0xf;
            p_Var41 = p_Var8 + (long)iVar6 * 8;
            do {
              uVar34 = uVar50 >> 6 & 0xf;
              iVar23 = (uVar50 >> 10) + (uVar5 >> 10) * local_994;
              iVar28 = iVar23 * iVar32;
              uVar30 = uVar34 * uVar33 + 8 >> 4;
              iVar23 = (iVar23 + local_994) * iVar32;
              lVar9 = 0;
              do {
                iVar24 = (int)lVar9;
                *(uint *)(p_Var41 + lVar9 * 4) =
                     *(int *)(local_8c8 + (ulong)(iVar28 + iVar24 & 0x3f) * 4) *
                     (((0x10 - uVar33) - uVar34) + uVar30) + 8 +
                     *(int *)(local_8c8 + (ulong)(iVar28 + iVar32 + iVar24 & 0x3f) * 4) *
                     (uVar34 - uVar30) +
                     uVar30 * *(int *)(local_8c8 + (ulong)(iVar23 + iVar32 + iVar24 & 0x3f) * 4) +
                     *(int *)(local_8c8 + (ulong)(iVar23 + iVar24 & 0x3f) * 4) * (uVar33 - uVar30)
                     >> 4;
                lVar9 = lVar9 + 1;
              } while (lVar9 != 2 - (ulong)(local_996 == 0));
              p_Var41 = p_Var41 + 8;
              uVar50 = uVar50 + (local_994 + -1) * ((param_3 / 2 + 0x400) / (param_3 + -1));
            } while (p_Var8 + ((long)iVar6 + (long)param_3) * 8 != p_Var41);
          }
          iVar16 = iVar16 + 1;
          iVar6 = iVar6 + param_3;
          uVar5 = uVar5 + (local_990 + -1) * ((param_4 / 2 + 0x400) / (param_4 + -1));
        } while (param_4 != iVar16);
      }
      local_a54 = 0xffffffff;
      if (local_996 != 0) {
        bVar43 = (byte)(local_a0c + -1);
        iVar32 = local_a0c + -2 >> 6;
        iVar6 = local_a0c + -1 >> 6;
        bVar11 = (byte)(local_a0c + -2) & 0x3f;
        uVar54 = (1L << (bVar43 & 0x3f)) * 2 - 1;
        if (iVar32 == iVar6) {
          local_a54 = (uint)((*(ulong *)(param_2 + (long)iVar32 * 8) & uVar54) >> bVar11);
        }
        else {
          local_a54 = (uint)((uVar54 & *(ulong *)(param_2 + (long)iVar6 * 8)) <<
                            (1 - (bVar43 & 0x3f) & 0x3f)) |
                      (uint)(*(ulong *)(param_2 + (long)iVar32 * 8) >> bVar11);
        }
      }
      uVar5 = 0xffffffff;
      if (iVar27 != 1) {
        uVar5 = (uint)(uVar42 >> 0xd) & 0x3ff;
      }
      lVar9 = 0;
      do {
        local_9c8[lVar9] =
             (_anonymous_namespace_)
             (local_958[lVar9] < 0x10 && (0xc88cUL >> ((ulong)local_958[lVar9] & 0x3f) & 1) != 0);
        iVar6 = (int)lVar9;
        lVar9 = lVar9 + 1;
      } while (iVar6 < (int)uVar26);
      if (0 < param_4) {
        uVar75 = CONCAT44(_UNK_00106624,_LC0);
        uVar5 = uVar26 * 0x400 + uVar5;
        uVar33 = (uVar5 * -0x1121f76f >> 5 ^ uVar5 * -0x1121f76f) * 0x10001;
        uVar33 = uVar33 >> 7 ^ uVar33;
        uVar33 = uVar33 ^ uVar33 >> 3;
        uVar33 = uVar33 ^ uVar33 << 6;
        uVar50 = uVar33 ^ uVar33 >> 0x11;
        uVar26 = uVar50 >> 4 & 0xf;
        uVar44 = uVar50 >> 8 & 0xf;
        uVar29 = uVar50 >> 0xc & 0xf;
        uVar51 = uVar33 >> 0x10 & 0xf;
        uVar34 = uVar33 >> 0x14 & 0xf;
        uVar30 = uVar33 >> 0x18 & 0xf;
        bVar15 = 5 - ((uVar5 & 2) != 0);
        bVar11 = (iVar27 == 3) + 5;
        bVar43 = bVar15;
        if ((uVar5 & 1) != 0) {
          bVar43 = bVar11;
          bVar11 = bVar15;
        }
        iVar6 = 0;
        iVar32 = 0;
        local_9f8 = 0;
        fVar69 = _LC3;
        uVar76 = _UNK_00106628;
        do {
          if (0 < param_3) {
            iVar16 = iVar6 * 2;
            if (0x1e < iVar22) {
              iVar16 = iVar6;
            }
            p_Var41 = p_Var8 + (long)iVar32 * 8;
            iVar23 = 0;
            uVar5 = iVar32 * 4;
            uVar58 = _LC1;
            do {
              if (iVar27 == 1) goto LAB_00102f33;
              iVar28 = iVar23 * 2;
              if (0x1e < iVar22) {
                iVar28 = iVar23;
              }
              uVar12 = ((int)((uVar50 & 0xf) * (uVar50 & 0xf)) >> (bVar11 & 0x1f)) * iVar28 +
                       ((int)(uVar26 * uVar26) >> (bVar43 & 0x1f)) * iVar16 + (uVar50 >> 0xe) & 0x3f
              ;
              uVar45 = ((int)(uVar44 * uVar44) >> (bVar11 & 0x1f)) * iVar28 +
                       ((int)(uVar29 * uVar29) >> (bVar43 & 0x1f)) * iVar16 + (uVar50 >> 10) & 0x3f;
              if (iVar27 == 2) {
                uVar54 = (ulong)(uVar12 < uVar45);
                uVar42 = (ulong)(uVar12 < uVar45);
                pUVar35 = local_948 + uVar54 * 0x20;
LAB_00102ee3:
                _Var52 = local_7c8[uVar42];
                if (!param_6) goto LAB_00102f4a;
LAB_00102ef0:
                if (_Var52 == (_anonymous_namespace_)0x0) goto LAB_00102f4a;
                if (param_5) {
                  *(undefined4 *)((long)param_1 + (long)(int)uVar5) = uVar58;
                }
                else {
                  puVar7 = (undefined8 *)((long)param_1 + (long)(int)uVar5 * 4);
                  *puVar7 = uVar75;
                  puVar7[1] = uVar76;
                }
                local_9f8 = 1;
              }
              else {
                uVar38 = ((int)(uVar51 * uVar51) >> (bVar11 & 0x1f)) * iVar28 +
                         (uVar50 >> 6) + ((int)(uVar34 * uVar34) >> (bVar43 & 0x1f)) * iVar16 & 0x3f
                ;
                uVar31 = uVar38;
                if (uVar38 <= uVar45) {
                  uVar31 = uVar45;
                }
                if (iVar27 == 3) {
                  if (uVar31 <= uVar12) goto LAB_00102f33;
                  if (uVar38 <= uVar45) goto LAB_001031fe;
LAB_001031d8:
                  pUVar35 = local_908;
                  uVar54 = 2;
                  uVar42 = 2;
                  goto LAB_00102ee3;
                }
                uVar46 = iVar16 * ((int)((uVar33 >> 0x1c) * (uVar33 >> 0x1c)) >> (bVar43 & 0x1f)) +
                         (uVar50 >> 2) + iVar28 * ((int)(uVar30 * uVar30) >> (bVar11 & 0x1f)) & 0x3f
                ;
                if (uVar31 <= uVar46) {
                  uVar31 = uVar46;
                }
                if (uVar12 < uVar31) {
                  uVar12 = uVar46;
                  if (uVar46 <= uVar38) {
                    uVar12 = uVar38;
                  }
                  if (uVar45 < uVar12) {
                    if (uVar46 <= uVar38) goto LAB_001031d8;
                    pUVar35 = local_8e8;
                    uVar54 = 3;
                    uVar42 = 3;
                  }
                  else {
LAB_001031fe:
                    pUVar35 = local_928;
                    uVar54 = 1;
                    uVar42 = 1;
                  }
                  goto LAB_00102ee3;
                }
LAB_00102f33:
                uVar54 = 0;
                pUVar35 = local_948;
                _Var52 = local_7c8[0];
                if (param_6) goto LAB_00102ef0;
LAB_00102f4a:
                uVar42 = 0;
                uVar45 = uVar5;
                do {
                  uVar47 = (ulong)uVar45;
                  if (_Var52 != (_anonymous_namespace_)0x0) {
                    uVar10 = uVar42 & 0xffffffff;
                    if ((int)uVar42 == 3) goto LAB_00103162;
                    do {
                      do {
                        uVar12 = *(int *)(pUVar35 + uVar42 * 4) * 0x10 *
                                 (0x40 - *(int *)(p_Var41 + (ulong)(local_a54 == (uint)uVar10) * 4))
                                 + 0x20 + *(int *)(pUVar35 + uVar42 * 4 + 0x10) * 0x10 *
                                          *(int *)(p_Var41 + (ulong)(local_a54 == (uint)uVar10) * 4)
                        ;
                        uVar31 = uVar12 >> 6;
                        uVar45 = uVar31 & 0x7ff;
                        if ((uVar31 & 0x600) == 0) {
                          uVar45 = uVar45 * 3;
                        }
                        else if (uVar45 < 0x600) {
                          uVar45 = uVar45 * 4 - 0x200;
                        }
                        else {
                          uVar45 = uVar45 * 5 - 0x800;
                        }
                        uVar45 = (uVar12 >> 0x11 & 0x1f) * 0x400 + (uVar45 >> 3);
                        uVar3 = (ushort)uVar45;
                        if ((~uVar45 & 0x7c00) == 0) {
                          uVar3 = 0x7bff;
                        }
                        iVar28 = (int)uVar47;
                        uVar42 = uVar42 + 1;
                        uVar47 = (ulong)(iVar28 + 1);
                        uVar58 = deFloat16To32(uVar3);
                        *(undefined4 *)((long)param_1 + (long)iVar28 * 4) = uVar58;
                        uVar58 = extraout_XMM1_Da;
                        if (uVar42 == 4) goto LAB_00102f11;
                        uVar10 = uVar42 & 0xffffffff;
                      } while ((int)uVar42 != 3);
LAB_00103162:
                      uVar45 = (uint)uVar47;
                    } while (local_958[uVar54] != 0xe);
                  }
                  uVar12 = *(uint *)(pUVar35 + uVar42 * 4) << 8;
                  uVar31 = *(uint *)(pUVar35 + uVar42 * 4 + 0x10) << 8;
                  iVar28 = *(int *)(p_Var41 + (ulong)(local_a54 == (uint)uVar42) * 4);
                  if (param_5) {
                    *(char *)((long)param_1 + (long)(int)uVar45) =
                         (char)((uVar31 | 0x80) * iVar28 + 0x20 + (uVar12 | 0x80) * (0x40 - iVar28)
                               >> 0xe);
                  }
                  else {
                    uVar12 = (*(uint *)(pUVar35 + uVar42 * 4 + 0x10) | uVar31) * iVar28 + 0x20 +
                             (*(uint *)(pUVar35 + uVar42 * 4) | uVar12) * (0x40 - iVar28) >> 6;
                    fVar57 = _LC0;
                    if (uVar12 != 0xffff) {
                      fVar57 = (float)uVar12 * fVar69;
                    }
                    *(float *)((long)param_1 + (long)(int)uVar45 * 4) = fVar57;
                  }
                  uVar42 = uVar42 + 1;
                  uVar45 = uVar45 + 1;
                } while (uVar42 != 4);
              }
LAB_00102f11:
              iVar23 = iVar23 + 1;
              p_Var41 = p_Var41 + 8;
              uVar5 = uVar5 + 4;
            } while (param_3 != iVar23);
          }
          iVar6 = iVar6 + 1;
          iVar32 = iVar32 + param_3;
        } while (param_4 != iVar6);
        goto LAB_00101355;
      }
      goto LAB_00101485;
    }
    if (param_5) {
      if (0 < iVar22) {
        puVar2 = (undefined4 *)((long)param_1 + 4) + (iVar22 - 1);
        if (((int)puVar2 - iVar6 & 4U) == 0) goto LAB_00101748;
        *(undefined4 *)param_1 = _LC1;
        for (param_1 = (undefined4 *)((long)param_1 + 4); (undefined4 *)param_1 != puVar2;
            param_1 = (void *)((long)param_1 + 8)) {
LAB_00101748:
          *(undefined4 *)param_1 = uVar58;
          *(undefined4 *)((long)param_1 + 4) = uVar58;
        }
      }
    }
    else if (0 < iVar22) {
      uVar76 = CONCAT44(_UNK_00106624,_LC0);
      puVar7 = (undefined8 *)((long)param_1 + 0x10);
      puVar19 = puVar7 + (ulong)(iVar22 - 1) * 2;
      if (((int)puVar19 - iVar6 & 0x10U) != 0) {
        *(undefined8 *)param_1 = uVar76;
        *(undefined8 *)((long)param_1 + 8) = uVar75;
        param_1 = puVar7;
        if (puVar7 == puVar19) goto LAB_00101350;
      }
      do {
        *(undefined8 *)param_1 = uVar76;
        *(undefined8 *)((long)param_1 + 8) = uVar75;
        puVar7 = (undefined8 *)((long)param_1 + 0x20);
        *(undefined8 *)((long)param_1 + 0x10) = uVar76;
        *(undefined8 *)((long)param_1 + 0x18) = uVar75;
        param_1 = puVar7;
      } while (puVar7 != puVar19);
    }
  }
  else {
    if (local_98c == 2) {
      iVar16 = local_988 * uVar5;
      goto LAB_001010d8;
    }
    if (local_98c == 0) {
      uVar26 = (uVar5 * 8 + 4) / 5;
      goto LAB_001010c7;
    }
LAB_001012f0:
    if (param_5) {
      if (0 < iVar22) {
        puVar2 = (undefined4 *)((long)param_1 + 4) + (iVar22 - 1);
        if (((int)puVar2 - iVar6 & 4U) == 0) goto LAB_001014d0;
        *(undefined4 *)param_1 = _LC1;
        for (param_1 = (undefined4 *)((long)param_1 + 4); puVar2 != (undefined4 *)param_1;
            param_1 = (void *)((long)param_1 + 8)) {
LAB_001014d0:
          *(undefined4 *)param_1 = uVar58;
          *(undefined4 *)((long)param_1 + 4) = uVar58;
        }
      }
    }
    else if (0 < iVar22) {
      uVar76 = CONCAT44(_UNK_00106624,_LC0);
      puVar7 = (undefined8 *)((long)param_1 + 0x10);
      puVar19 = puVar7 + (ulong)(iVar22 - 1) * 2;
      if (((int)puVar19 - iVar6 & 0x10U) != 0) {
        *(undefined8 *)param_1 = uVar76;
        *(undefined8 *)((long)param_1 + 8) = uVar75;
        param_1 = puVar7;
        if (puVar19 == puVar7) goto LAB_00101350;
      }
      do {
        *(undefined8 *)param_1 = uVar76;
        *(undefined8 *)((long)param_1 + 8) = uVar75;
        puVar7 = (undefined8 *)((long)param_1 + 0x20);
        *(undefined8 *)((long)param_1 + 0x10) = uVar76;
        *(undefined8 *)((long)param_1 + 0x18) = uVar75;
        param_1 = puVar7;
      } while (puVar19 != puVar7);
    }
  }
LAB_00101350:
  local_9f8 = 1;
LAB_00101355:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_9f8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00103338_default:
  iVar23 = *(int *)p_Var41;
  p_Var20 = p_Var21 + 4;
  p_Var41 = p_Var41 + 0xc;
  *(uint *)p_Var21 = (iVar23 * iVar6 - 1U ^ uVar50) >> 2 | uVar34;
  p_Var21 = p_Var20;
  if (p_Var8 == p_Var20) goto LAB_00101ab9;
  goto LAB_001032d6;
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
LAB_00103ec8:
      uVar10 = 0;
      goto LAB_00103d5e;
    }
  }
  else {
    iVar7 = (anonymous_namespace)::decompressBlock
                      (local_938,(Block128 *)&local_948,param_4,param_5,false,true);
    fVar6 = _LC8;
    fVar5 = _LC7;
    if (iVar7 != 0) goto LAB_00103ec8;
    iVar7 = 0;
    if (0 < param_5) {
LAB_00103db1:
      if (param_4 < 1) goto LAB_00103ecf;
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
LAB_00103d59:
  uVar10 = 1;
LAB_00103d5e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
LAB_00103ecf:
  iVar7 = iVar7 + 1;
  if (param_5 == iVar7) goto LAB_00103d59;
  goto LAB_00103db1;
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
LAB_00104026:
          if (uVar12 == 0) {
LAB_00104030:
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
            goto LAB_00104030;
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
LAB_00104120:
            if (uVar9 == 0x1f) goto LAB_00104026;
            uVar11 = (uint)uVar9;
          }
          else {
            uVar9 = (ushort)(iVar5 << 10) | (ushort)uVar13;
            uVar12 = (ushort)uVar13 & 0x3ff;
            uVar6 = uVar13 & 0x3ff;
            fVar10 = (float)((uint)((ushort)(uVar9 | (ushort)(uVar11 << 0xf)) >> 0xf) << 0x1f);
            uVar9 = (uVar9 & 0x7c00) >> 10;
            if (uVar9 != 0) goto LAB_00104120;
            if ((uVar13 & 0x3ff) == 0) goto LAB_00103ff8;
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
LAB_00103ff8:
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
        if (local_5c != 0) goto LAB_00104370;
        local_58 = (iVar9 * 8 + 4U) / 5 + local_58 * iVar9;
        bVar12 = 0x60 < local_58;
      }
      if (((((bool)(0x40 < iVar9 | bVar12)) || (local_58 < 0x18)) || (param_2 < local_64)) ||
         (param_3 < local_60)) goto LAB_00104370;
      uVar10 = (uint)(uVar11 >> 0xb) & 3;
      iVar9 = uVar10 + 1;
      if (uVar10 == 3) {
        if (local_66 != 0) goto LAB_00104370;
        if ((uVar11 & 0x1800000) == 0) goto LAB_00104312;
        iVar8 = 0x7f - local_58;
        iVar5 = 7;
      }
      else {
        iVar8 = 0x7f - local_58;
        if ((iVar9 == 1) || ((uVar11 & 0x1800000) == 0)) {
LAB_00104312:
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
          if (bVar12) goto LAB_00104398;
        }
        iVar9 = (int)lVar6;
        lVar6 = lVar6 + 1;
      } while (iVar9 < (int)uVar10);
      bVar12 = false;
    }
    else {
      bVar12 = (bool)((byte)(uVar11 >> 9) & 1);
    }
LAB_00104398:
    *param_4 = bVar12;
    uVar7 = 1;
  }
  else {
LAB_00104370:
    uVar7 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


