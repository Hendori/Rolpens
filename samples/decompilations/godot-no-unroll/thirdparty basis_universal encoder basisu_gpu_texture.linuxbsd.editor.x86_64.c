
/* basisu::convert_rgb_555_to_888(basisu::color_rgba const&) */

uint basisu::convert_rgb_555_to_888(color_rgba *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(byte)*param_1 << 3 | (uint)((byte)*param_1 >> 2);
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  uVar3 = (uint)(byte)param_1[1] << 3 | (uint)((byte)param_1[1] >> 2);
  uVar1 = (undefined1)uVar3;
  if (0xff < uVar3) {
    uVar1 = 0xff;
  }
  uVar3 = (uint)(byte)param_1[2] << 3 | (uint)((byte)param_1[2] >> 2);
  if (0xff < uVar3) {
    uVar3 = 0xff;
  }
  return (uint)CONCAT11(uVar1,(char)uVar2) | (uVar3 & 0xff) << 0x10 | 0xff000000;
}



/* basisu::convert_rgba_5554_to_8888(basisu::color_rgba const&) */

uint basisu::convert_rgba_5554_to_8888(color_rgba *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)(byte)*param_1 << 3 | (uint)((byte)*param_1 >> 2);
  bVar1 = (byte)uVar2;
  if (0xff < uVar2) {
    bVar1 = 0xff;
  }
  uVar2 = (uint)(byte)param_1[1] << 3 | (uint)((byte)param_1[1] >> 2);
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  uVar4 = (uint)(byte)param_1[2] << 3 | (uint)((byte)param_1[2] >> 2);
  if (0xff < uVar4) {
    uVar4 = 0xff;
  }
  uVar3 = (uint)(byte)param_1[3] << 4 | (uint)(byte)param_1[3];
  if (0xff < uVar3) {
    uVar3 = 0xff;
  }
  return (((uVar3 & 0xff) << 8 | uVar4 & 0xff) << 8 | uVar2 & 0xff) << 8 | (uint)bVar1;
}



/* basisu::unpack_bc7_mode6(void const*, basisu::color_rgba*) [clone .part.0] */

undefined8 basisu::unpack_bc7_mode6(void *param_1,color_rgba *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long in_FS_OFFSET;
  uint local_88 [18];
  long local_40;
  
  bVar1 = *(byte *)((long)param_1 + 7);
                    /* WARNING: Load size is inaccurate */
  uVar4 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = *(ushort *)((long)param_1 + 2);
  bVar2 = *(byte *)((long)param_1 + 8);
  uVar6 = *(ushort *)((long)param_1 + 4);
  bVar3 = *(byte *)((long)param_1 + 6);
  bVar11 = bVar1 >> 7;
  uVar13 = bVar2 & 1;
                    /* WARNING: Load size is inaccurate */
  uVar10 = *param_1;
                    /* WARNING: Load size is inaccurate */
  uVar7 = *param_1;
  uVar8 = *(uint *)((long)param_1 + 4);
  lVar14 = 0;
  do {
    iVar9 = *(int *)((long)&basist::g_bc7_weights4 + lVar14);
    iVar12 = 0x40 - iVar9;
    *(uint *)((long)local_88 + lVar14) =
         (((iVar9 * ((bVar1 & 0x7f) * 2 | uVar13) + 0x20 + iVar12 * (bVar3 & 0xfe | (uint)bVar11)) *
           4 & 0xff00 |
          (uVar8 >> 9 & 0xfe | uVar13) * iVar9 + 0x20 +
          ((uVar6 >> 3 & 0x7f) * 2 | (uint)bVar11) * iVar12 >> 6 & 0xff) << 8 |
         (((uint)(uVar10 >> 0x1c) & 0x7f) * 2 | uVar13) * iVar9 + 0x20 +
         ((uVar5 >> 5 & 0x7f) * 2 | (uint)bVar11) * iVar12 >> 6 & 0xff) << 8 |
         (uVar7 >> 0xd & 0xfe | uVar13) * iVar9 + 0x20 +
         ((uVar4 >> 7 & 0x7f) * 2 | (uint)bVar11) * iVar12 >> 6 & 0xff;
    lVar14 = lVar14 + 4;
  } while (lVar14 != 0x40);
  *(uint *)param_2 = local_88[bVar2 >> 1 & 7];
  *(uint *)(param_2 + 4) = local_88[*(byte *)((long)param_1 + 8) >> 4];
  *(uint *)(param_2 + 8) = local_88[*(byte *)((long)param_1 + 9) & 0xf];
  *(uint *)(param_2 + 0xc) = local_88[*(byte *)((long)param_1 + 9) >> 4];
  *(uint *)(param_2 + 0x10) = local_88[*(byte *)((long)param_1 + 10) & 0xf];
  *(uint *)(param_2 + 0x14) = local_88[*(byte *)((long)param_1 + 10) >> 4];
  *(uint *)(param_2 + 0x18) = local_88[*(byte *)((long)param_1 + 0xb) & 0xf];
  *(uint *)(param_2 + 0x1c) = local_88[*(byte *)((long)param_1 + 0xb) >> 4];
  *(uint *)(param_2 + 0x20) = local_88[*(byte *)((long)param_1 + 0xc) & 0xf];
  *(uint *)(param_2 + 0x24) = local_88[*(byte *)((long)param_1 + 0xc) >> 4];
  *(uint *)(param_2 + 0x28) = local_88[*(byte *)((long)param_1 + 0xd) & 0xf];
  *(uint *)(param_2 + 0x2c) = local_88[*(byte *)((long)param_1 + 0xd) >> 4];
  *(uint *)(param_2 + 0x30) = local_88[*(byte *)((long)param_1 + 0xe) & 0xf];
  *(uint *)(param_2 + 0x34) = local_88[*(byte *)((long)param_1 + 0xe) >> 4];
  *(uint *)(param_2 + 0x38) = local_88[*(byte *)((long)param_1 + 0xf) & 0xf];
  *(uint *)(param_2 + 0x3c) = local_88[*(byte *)((long)param_1 + 0xf) >> 4];
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::unpack_pvrtc2(void const*, basisu::color_rgba*) [clone .part.0] */

undefined8 basisu::unpack_pvrtc2(void *param_1,color_rgba *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)((long)param_1 + 7) < '\0') {
    uVar2 = *(byte *)((long)param_1 + 4) >> 1 & 0xf;
    local_40 = CONCAT22(local_40._2_2_,
                        CONCAT11((char)(*(ushort *)((long)param_1 + 4) >> 5),
                                 *(byte *)((long)param_1 + 5) >> 2)) & 0xffff1f1f;
    local_40._0_3_ = CONCAT12((byte)((int)uVar2 >> 3) | (char)uVar2 * '\x02',(undefined2)local_40);
    local_3c = CONCAT22(CONCAT11(local_3c._3_1_,*(undefined1 *)((long)param_1 + 6)),
                        CONCAT11((char)(*(ushort *)((long)param_1 + 6) >> 5),
                                 *(byte *)((long)param_1 + 7) >> 2)) & 0xff1f1f1f;
    local_38 = convert_rgb_555_to_888((color_rgba *)&local_40);
    local_2c = convert_rgb_555_to_888((color_rgba *)&local_3c);
  }
  else {
    uVar2 = *(byte *)((long)param_1 + 5) & 0xf;
    bVar3 = *(byte *)((long)param_1 + 4) >> 4;
    uVar4 = *(byte *)((long)param_1 + 4) >> 1 & 7;
    local_40 = (((*(byte *)((long)param_1 + 5) >> 3 & 0xe) << 8 | (int)uVar4 >> 1 | uVar4 * 4) << 8
               | (int)(uint)bVar3 >> 3 | (uint)bVar3 + (uint)bVar3) << 8 |
               (int)uVar2 >> 3 | uVar2 * 2;
    bVar3 = *(byte *)((long)param_1 + 6) >> 4;
    uVar4 = *(byte *)((long)param_1 + 6) & 0xf;
    uVar2 = *(byte *)((long)param_1 + 7) & 0xf;
    local_3c = ((((*(byte *)((long)param_1 + 7) >> 4 & 7) * 2 + 1) * 0x100 |
                (int)uVar4 >> 3 | uVar4 * 2) << 8 |
               (int)(uint)bVar3 >> 3 | (uint)bVar3 + (uint)bVar3) << 8 | uVar2 * 2 | (int)uVar2 >> 3
    ;
    local_38 = convert_rgba_5554_to_8888((color_rgba *)&local_40);
    local_2c = convert_rgba_5554_to_8888((color_rgba *)&local_3c);
  }
  local_34 = (char)((int)((local_38 & 0xff) + (local_38 & 0xff) * 4 +
                         (local_2c & 0xff) + (local_2c & 0xff) * 2) >> 3);
  local_33 = (char)((int)((uint)local_38._1_1_ + (uint)local_38._1_1_ * 4 +
                         (uint)local_2c._1_1_ + (uint)local_2c._1_1_ * 2) >> 3);
  local_32 = (char)((int)((uint)local_38._2_1_ + (uint)local_38._2_1_ * 4 +
                         (uint)local_2c._2_1_ + (uint)local_2c._2_1_ * 2) >> 3);
  local_31 = (char)((int)((uint)local_38._3_1_ + (uint)local_38._3_1_ * 4 +
                         (uint)local_2c._3_1_ + (uint)local_2c._3_1_ * 2) >> 3);
  local_30 = (char)((int)((local_38 & 0xff) + (local_38 & 0xff) * 2 +
                         (local_2c & 0xff) + (local_2c & 0xff) * 4) >> 3);
  local_2f = (char)((int)((uint)local_38._1_1_ + (uint)local_38._1_1_ * 2 +
                         (uint)local_2c._1_1_ + (uint)local_2c._1_1_ * 4) >> 3);
  local_2e = (char)((int)((uint)local_38._2_1_ + (uint)local_38._2_1_ * 2 +
                         (uint)local_2c._2_1_ + (uint)local_2c._2_1_ * 4) >> 3);
  local_2d = (char)((int)((uint)local_38._3_1_ + (uint)local_38._3_1_ * 2 +
                         (uint)local_2c._3_1_ + (uint)local_2c._3_1_ * 4) >> 3);
  uVar1 = 0;
  do {
    *(undefined4 *)(param_2 + uVar1 * 4) =
         (&local_38)
         [(int)(uint)*(byte *)((long)param_1 + (uVar1 >> 2 & 0x3fffffff)) >>
          ((byte)uVar1 & 3) * '\x02' & 3];
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x10);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.0] */

void std::__cxx11::string::_M_construct<char*>(ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00100674;
    }
    if (__n == 0) goto LAB_00100674;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100674:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::unpack_fxt1(void const*, basisu::color_rgba*) [clone .part.0] */

undefined8 basisu::unpack_fxt1(void *param_1,color_rgba *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  uint local_2c;
  uint local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  uint local_1c;
  long local_10;
  
                    /* WARNING: Load size is inaccurate */
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = CONCAT31(0xff0000,*(byte *)((long)param_1 + 9) >> 2) & 0xffffff1f;
  uVar6 = local_48;
  bVar2 = *(byte *)((long)param_1 + 0xf) >> 5;
  uVar3 = bVar2 & 3;
  bVar2 = bVar2 & 1;
  local_48._0_2_ =
       CONCAT11((byte)((int)(*param_1 & 3) >> 1) ^ bVar2 |
                ((byte)(*(ushort *)((long)param_1 + 8) >> 5) & 0x1f) * '\x02',(undefined1)local_48);
  local_48._3_1_ = SUB41(uVar6,3);
  local_48 = CONCAT13(local_48._3_1_,
                      CONCAT12(*(undefined1 *)((long)param_1 + 8),(undefined2)local_48)) &
             0xff1fffff;
  local_44 = CONCAT31(0xff0000,*(byte *)((long)param_1 + 0xb) >> 1) & 0xffffff1f;
  uVar6 = local_44;
  local_44._0_2_ =
       CONCAT11(((byte)(*(ushort *)((long)param_1 + 10) >> 4) & 0x1f) * '\x02' | bVar2,
                (undefined1)local_44);
  local_44._3_1_ = SUB41(uVar6,3);
  local_44 = CONCAT13(local_44._3_1_,
                      CONCAT12((char)(*(uint *)((long)param_1 + 8) >> 0xf),(undefined2)local_44)) &
             0xff1fffff;
  local_40 = CONCAT31(0xff0000,*(undefined1 *)((long)param_1 + 0xd)) & 0xffffff1f;
  uVar6 = local_40;
  local_40._0_2_ =
       CONCAT11((*(byte *)((long)param_1 + 0xc) >> 3) * '\x02' |
                (byte)((int)((*(byte *)((long)param_1 + 4) ^ uVar3) & 3) >> 1),(undefined1)local_40)
  ;
  local_40._3_1_ = SUB41(uVar6,3);
  local_40 = CONCAT13(local_40._3_1_,
                      CONCAT12((char)(*(ulong *)((long)param_1 + 8) >> 0x1e),(undefined2)local_40))
             & 0xff1fffff;
  local_3c = CONCAT13(0xff,CONCAT12((char)(*(uint *)((long)param_1 + 0xc) >> 0xd),
                                    CONCAT11((byte)uVar3 >> 1 |
                                             *(byte *)((long)param_1 + 0xe) >> 1 & 0x3e,
                                             (char)(*(ushort *)((long)param_1 + 0xe) >> 7))) &
                           0xffff1f) & 0xff1fffff;
  puVar4 = &local_48;
  do {
    *(byte *)((long)puVar4 + 3) = 0xff;
    uVar6 = (uint)(byte)*puVar4 << 3 | (uint)(byte)((byte)*puVar4 >> 2);
    bVar2 = (byte)uVar6;
    if (0xff < uVar6) {
      bVar2 = 0xff;
    }
    *(byte *)puVar4 = bVar2;
    uVar6 = (uint)*(byte *)((long)puVar4 + 1) << 2 | (uint)(*(byte *)((long)puVar4 + 1) >> 4);
    bVar2 = (byte)uVar6;
    if (0xff < uVar6) {
      bVar2 = 0xff;
    }
    *(byte *)((long)puVar4 + 1) = bVar2;
    uVar6 = (uint)*(byte *)((long)puVar4 + 2) << 3 | (uint)(*(byte *)((long)puVar4 + 2) >> 2);
    if (0xff < uVar6) {
      uVar6 = 0xff;
    }
    puVar5 = puVar4 + 1;
    *(byte *)((long)puVar4 + 2) = (byte)uVar6;
    puVar4 = puVar5;
  } while (&local_38 != puVar5);
  local_31 = 0xff;
  local_2d = 0xff;
  local_38 = local_48;
  local_34 = (char)(((local_44 & 0xff) + 1 + (local_48 & 0xff) * 2) / 3);
  local_33 = (char)((local_44._1_1_ + 1 + (uint)local_48._1_1_ * 2) / 3);
  local_32 = (char)((local_44._2_1_ + 1 + (uint)local_48._2_1_ * 2) / 3);
  local_30 = (char)(((local_48 & 0xff) + 1 + (local_44 & 0xff) * 2) / 3);
  local_2f = (char)((local_48._1_1_ + 1 + (uint)local_44._1_1_ * 2) / 3);
  local_2e = (char)((local_48._2_1_ + 1 + (uint)local_44._2_1_ * 2) / 3);
  local_2c = local_44;
  uVar6 = 0;
  do {
    uVar3 = uVar6 + 1;
    *(uint *)(param_2 + (ulong)((uVar6 & 3) + (uVar6 >> 2) * 8) * 4) =
         (&local_38)
         [(int)(uint)*(byte *)((long)param_1 + (ulong)(uVar6 >> 2)) >> (char)(uVar6 & 3) * '\x02' &
          3];
    uVar6 = uVar3;
  } while (uVar3 != 0x10);
  local_21 = 0xff;
  local_1d = 0xff;
  local_28 = local_40;
  local_24 = (char)(((local_3c & 0xff) + 1 + (local_40 & 0xff) * 2) / 3);
  local_23 = (char)((local_3c._1_1_ + 1 + (uint)local_40._1_1_ * 2) / 3);
  local_22 = (char)((local_3c._2_1_ + 1 + (uint)local_40._2_1_ * 2) / 3);
  local_20 = (char)(((local_40 & 0xff) + 1 + (local_3c & 0xff) * 2) / 3);
  local_1f = (char)((local_40._1_1_ + 1 + (uint)local_3c._1_1_ * 2) / 3);
  local_1e = (char)((local_40._2_1_ + 1 + (uint)local_3c._2_1_ * 2) / 3);
  local_1c = local_3c;
  uVar7 = 0;
  do {
    uVar3 = (uint)uVar7 + 1;
    uVar6 = (uint)uVar7 & 3;
    iVar1 = (int)(uVar7 >> 2);
    *(uint *)(param_2 + (ulong)(uVar6 + 4 + iVar1 * 8) * 4) =
         (&local_28)
         [(int)(uint)*(byte *)((long)param_1 + (ulong)(iVar1 + 4)) >> (char)uVar6 * '\x02' & 3];
    uVar7 = (ulong)uVar3;
  } while (uVar3 != 0x10);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::image::crop(unsigned int, unsigned int, unsigned int, basisu::color_rgba const&, bool)
   [clone .isra.0] */

void __thiscall
basisu::image::crop(image *this,uint param_1,uint param_2,uint param_3,color_rgba *param_4,
                   bool param_5)

{
  undefined4 *puVar1;
  void *__ptr;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_3 == 0xffffffff) {
    param_3 = param_1;
  }
  if (((*(uint *)this != param_1) || (*(uint *)(this + 4) != param_2)) ||
     (*(uint *)(this + 8) != param_3)) {
    if ((param_1 == 0 || param_2 == 0) || (param_3 == 0)) {
      uVar5 = *(uint *)(this + 0x18);
      *(undefined8 *)this = 0;
      *(undefined4 *)(this + 8) = 0;
      if ((ulong)uVar5 != 0) {
        memmove(*(void **)(this + 0x10),(void *)((long)*(void **)(this + 0x10) + (ulong)uVar5 * 4),0
               );
        *(uint *)(this + 0x18) = *(int *)(this + 0x18) - uVar5;
      }
    }
    else {
      __ptr = *(void **)(this + 0x10);
      *(undefined8 *)(this + 0x18) = 0;
      iVar4 = param_2 * param_3;
      *(undefined8 *)(this + 0x10) = 0;
      if (iVar4 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x10,SUB41(iVar4,0),(uint)(iVar4 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        *(int *)(this + 0x18) = iVar4;
      }
      if (param_5) {
        puVar3 = *(undefined4 **)(this + 0x10);
        if (*(long *)this == 0) {
          puVar1 = puVar3 + *(uint *)(this + 0x18);
          for (; puVar1 != puVar3; puVar3 = puVar3 + 1) {
            *puVar3 = *(undefined4 *)param_4;
          }
        }
        else {
          iVar4 = 0;
          uVar5 = 0;
          while( true ) {
            uVar2 = 0;
            while( true ) {
              if ((uVar2 < *(uint *)this) && (uVar5 < *(uint *)(this + 4))) {
                puVar3[iVar4 + uVar2] =
                     *(undefined4 *)((long)__ptr + (ulong)(*(int *)(this + 8) * uVar5 + uVar2) * 4);
              }
              else {
                puVar3[iVar4 + uVar2] = *(undefined4 *)param_4;
              }
              if (param_1 <= uVar2 + 1) break;
              uVar2 = uVar2 + 1;
              puVar3 = *(undefined4 **)(this + 0x10);
            }
            uVar5 = uVar5 + 1;
            iVar4 = iVar4 + param_3;
            if (param_2 <= uVar5) break;
            puVar3 = *(undefined4 **)(this + 0x10);
          }
        }
      }
      *(uint *)this = param_1;
      *(uint *)(this + 4) = param_2;
      *(uint *)(this + 8) = param_3;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}



/* basisu::unpack_etc2_eac(void const*, basisu::color_rgba*) */

void basisu::unpack_etc2_eac(void *param_1,color_rgba *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  color_rgba cVar12;
  uint uVar13;
  
  bVar2 = *(byte *)((long)param_1 + 1) >> 4;
  uVar3 = *(byte *)((long)param_1 + 1) & 0xf;
  uVar7 = (ulong)*(byte *)((long)param_1 + 2) << 0x28;
  uVar8 = uVar7 | (ulong)*(byte *)((long)param_1 + 3) << 0x20;
  uVar9 = uVar8 | *(byte *)((long)param_1 + 7) | (ulong)*(byte *)((long)param_1 + 4) << 0x18;
  uVar10 = uVar9 | (ulong)*(byte *)((long)param_1 + 5) << 0x10;
                    /* WARNING: Load size is inaccurate */
  bVar1 = *param_1;
  uVar11 = (ulong)*(byte *)((long)param_1 + 6) << 8 | uVar10;
  uVar13 = (int)*(char *)((long)&g_etc2_eac_tables + (uVar7 >> 0x2d) + (ulong)uVar3 * 8) *
           (uint)bVar2 + (uint)bVar1;
  cVar12 = SUB41(uVar13,0);
  if (0xff < uVar13) {
    cVar12 = (color_rgba)~(byte)((int)uVar13 >> 0x1f);
  }
  param_2[3] = cVar12;
  uVar6 = (uint)(uVar8 >> 0x20);
  uVar13 = (int)*(char *)((long)&g_etc2_eac_tables + (ulong)(uVar6 >> 1 & 7) + (ulong)uVar3 * 8) *
           (uint)bVar2 + (uint)bVar1;
  if (0xff < uVar13) {
    uVar13 = ~((int)uVar13 >> 0x1f);
  }
  param_2[7] = SUB41(uVar13,0);
  uVar13 = (uint)bVar2;
  uVar5 = (uint)bVar1;
  uVar4 = (int)*(char *)((long)&g_etc2_eac_tables +
                        (ulong)((uint)(uVar10 >> 0x15) & 7) + (ulong)uVar3 * 8) * uVar13 + uVar5;
  cVar12 = SUB41(uVar4,0);
  if (0xff < uVar4) {
    cVar12 = (color_rgba)~(byte)((int)uVar4 >> 0x1f);
  }
  param_2[0xb] = cVar12;
  uVar4 = (int)*(char *)((long)&g_etc2_eac_tables +
                        (ulong)((uint)(uVar11 >> 9) & 7) + (ulong)uVar3 * 8) * uVar13 + uVar5;
  cVar12 = SUB41(uVar4,0);
  if (0xff < uVar4) {
    cVar12 = (color_rgba)~(byte)((int)uVar4 >> 0x1f);
  }
  param_2[0xf] = cVar12;
  uVar4 = (int)*(char *)((long)&g_etc2_eac_tables + (ulong)(uVar6 >> 10 & 7) + (ulong)uVar3 * 8) *
          uVar13 + uVar5;
  cVar12 = SUB41(uVar4,0);
  if (0xff < uVar4) {
    cVar12 = (color_rgba)~(byte)((int)uVar4 >> 0x1f);
  }
  param_2[0x13] = cVar12;
  uVar5 = (int)*(char *)((long)&g_etc2_eac_tables +
                        (ulong)((uint)(uVar9 >> 0x1e) & 7) + (ulong)uVar3 * 8) * uVar13 + uVar5;
  cVar12 = SUB41(uVar5,0);
  if (0xff < uVar5) {
    cVar12 = (color_rgba)~(byte)((int)uVar5 >> 0x1f);
  }
  param_2[0x17] = cVar12;
  uVar13 = (uint)bVar2;
  uVar5 = (uint)bVar1;
  uVar4 = (int)*(char *)((long)&g_etc2_eac_tables +
                        (ulong)((uint)(uVar10 >> 0x12) & 7) + (ulong)uVar3 * 8) * uVar13 + uVar5;
  cVar12 = SUB41(uVar4,0);
  if (0xff < uVar4) {
    cVar12 = (color_rgba)~(byte)((int)uVar4 >> 0x1f);
  }
  param_2[0x1b] = cVar12;
  uVar4 = (int)*(char *)((long)&g_etc2_eac_tables +
                        (ulong)((uint)(uVar11 >> 6) & 7) + (ulong)uVar3 * 8) * uVar13 + uVar5;
  cVar12 = SUB41(uVar4,0);
  if (0xff < uVar4) {
    cVar12 = (color_rgba)~(byte)((int)uVar4 >> 0x1f);
  }
  param_2[0x1f] = cVar12;
  uVar4 = (int)*(char *)((long)&g_etc2_eac_tables + (ulong)(uVar6 >> 7 & 7) + (ulong)uVar3 * 8) *
          uVar13 + uVar5;
  cVar12 = SUB41(uVar4,0);
  if (0xff < uVar4) {
    cVar12 = (color_rgba)~(byte)((int)uVar4 >> 0x1f);
  }
  param_2[0x23] = cVar12;
  uVar4 = (int)*(char *)((long)&g_etc2_eac_tables +
                        (ulong)((uint)(uVar9 >> 0x1b) & 7) + (ulong)uVar3 * 8) * uVar13 + uVar5;
  cVar12 = SUB41(uVar4,0);
  if (0xff < uVar4) {
    cVar12 = (color_rgba)~(byte)((int)uVar4 >> 0x1f);
  }
  param_2[0x27] = cVar12;
  uVar4 = (int)*(char *)((long)&g_etc2_eac_tables +
                        (ulong)((uint)(uVar11 >> 0xf) & 7) + (ulong)uVar3 * 8) * uVar13 + uVar5;
  cVar12 = SUB41(uVar4,0);
  if (0xff < uVar4) {
    cVar12 = (color_rgba)~(byte)((int)uVar4 >> 0x1f);
  }
  param_2[0x2b] = cVar12;
  uVar4 = (int)*(char *)((long)&g_etc2_eac_tables +
                        (ulong)((uint)(uVar11 >> 3) & 7) + (ulong)uVar3 * 8) * uVar13 + uVar5;
  cVar12 = SUB41(uVar4,0);
  if (0xff < uVar4) {
    cVar12 = (color_rgba)~(byte)((int)uVar4 >> 0x1f);
  }
  param_2[0x2f] = cVar12;
  uVar6 = (int)*(char *)((long)&g_etc2_eac_tables + (ulong)(uVar6 >> 4 & 7) + (ulong)uVar3 * 8) *
          uVar13 + uVar5;
  cVar12 = SUB41(uVar6,0);
  if (0xff < uVar6) {
    cVar12 = (color_rgba)~(byte)((int)uVar6 >> 0x1f);
  }
  param_2[0x33] = cVar12;
  uVar5 = (int)*(char *)((long)&g_etc2_eac_tables +
                        (ulong)((uint)(uVar9 >> 0x18) & 7) + (ulong)uVar3 * 8) * uVar13 + uVar5;
  cVar12 = SUB41(uVar5,0);
  if (0xff < uVar5) {
    cVar12 = (color_rgba)~(byte)((int)uVar5 >> 0x1f);
  }
  param_2[0x37] = cVar12;
  uVar13 = (int)*(char *)((long)&g_etc2_eac_tables +
                         (ulong)((uint)(uVar11 >> 0xc) & 7) + (ulong)uVar3 * 8) * (uint)bVar2 +
           (uint)bVar1;
  if (0xff < uVar13) {
    uVar13 = ~((int)uVar13 >> 0x1f);
  }
  param_2[0x3b] = SUB41(uVar13,0);
  uVar3 = (uint)bVar2 *
          (int)*(char *)((long)&g_etc2_eac_tables + (ulong)((uint)uVar11 & 7) + (ulong)uVar3 * 8) +
          (uint)bVar1;
  cVar12 = SUB41(uVar3,0);
  if (0xff < uVar3) {
    cVar12 = (color_rgba)~(byte)((int)uVar3 >> 0x1f);
  }
  param_2[0x3f] = cVar12;
  return;
}



/* basisu::unpack_bc1(void const*, basisu::color_rgba*, bool) */

bool basisu::unpack_bc1(void *param_1,color_rgba *param_2,bool param_3)

{
  uint uVar1;
  color_rgba cVar2;
  ushort uVar3;
  ushort uVar4;
  color_rgba *pcVar5;
  color_rgba *pcVar6;
  byte *pbVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long in_FS_OFFSET;
  undefined1 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  long local_40;
  
                    /* WARNING: Load size is inaccurate */
  uVar3 = *param_1;
  uVar4 = *(ushort *)((long)param_1 + 2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = uVar3 >> 5 & 0x3f;
  uVar10 = (uint)(uVar3 >> 0xb) << 3 | (uint)(uVar3 >> 0xd);
  uVar15 = uVar11 * 4 | uVar11 >> 4;
  uVar13 = (uint)uVar4;
  uVar9 = (uVar3 & 0x1f) * 8 | (uVar3 & 0x1f) >> 2;
  uVar12 = uVar4 >> 5 & 0x3f;
  uVar11 = (uint)(uVar4 >> 0xd) | (uint)(uVar4 >> 0xb) << 3;
  uVar12 = uVar12 * 4 | uVar12 >> 4;
  uVar14 = (uVar13 & 0x1f) * 8 | (uVar13 & 0x1f) >> 2;
  if (uVar3 <= uVar13) {
    local_4c = 0;
    local_60 = (undefined1)(uVar12 + uVar15 >> 1);
    local_50 = (undefined1)(uVar11 + uVar10 >> 1);
    local_4b = 0;
    local_49 = 0;
    uVar1 = uVar14 + uVar9;
    local_4a = 0;
  }
  else {
    local_60 = (undefined1)((ulong)(uVar12 + uVar15 * 2) / 3);
    local_50 = (undefined1)((ulong)(uVar11 + uVar10 * 2) / 3);
    local_4c = (undefined1)((ulong)(uVar10 + uVar11 * 2) / 3);
    local_4b = (undefined1)((ulong)(uVar15 + uVar12 * 2) / 3);
    uVar1 = (uint)((ulong)(uVar14 + uVar9 * 2) * 0xaaaaaaab >> 0x20);
    local_49 = 0xff;
    local_4a = (undefined1)((ulong)(uVar9 + uVar14 * 2) / 3);
  }
  local_53 = (char)uVar12;
  local_58._0_1_ = (char)uVar10;
  local_58._1_1_ = (char)uVar15;
  local_58._2_1_ = (char)uVar9;
  local_58._3_1_ = 0xff;
  local_54 = (char)uVar11;
  local_52 = (char)uVar14;
  local_51 = 0xff;
  local_4f = local_60;
  local_4e = (char)(uVar1 >> 1);
  local_4d = 0xff;
  if (param_3) {
    pcVar6 = param_2;
    pbVar7 = (byte *)((long)param_1 + 4);
    do {
      pcVar5 = pcVar6 + 0x10;
      *(undefined4 *)pcVar6 = (&local_58)[*pbVar7 & 3];
      *(undefined4 *)(pcVar6 + 4) = (&local_58)[(int)(uint)*pbVar7 >> 2 & 3];
      *(undefined4 *)(pcVar6 + 8) = (&local_58)[(int)(uint)*pbVar7 >> 4 & 3];
      *(undefined4 *)(pcVar6 + 0xc) = (&local_58)[(uint)((int)(uint)*pbVar7 >> 6)];
      pcVar6 = pcVar5;
      pbVar7 = pbVar7 + 1;
    } while (pcVar5 != param_2 + 0x40);
  }
  else {
    pcVar6 = param_2;
    pbVar7 = (byte *)((long)param_1 + 4);
    do {
      pcVar5 = pcVar6 + 0x10;
      cVar2 = *(color_rgba *)((long)&local_58 + (ulong)(*pbVar7 & 3) * 4 + 2);
      *(undefined2 *)pcVar6 = *(undefined2 *)(&local_58 + (*pbVar7 & 3));
      pcVar6[2] = cVar2;
      uVar8 = (ulong)((int)(uint)*pbVar7 >> 2 & 3);
      cVar2 = *(color_rgba *)((long)&local_58 + uVar8 * 4 + 2);
      *(undefined2 *)(pcVar6 + 4) = *(undefined2 *)(&local_58 + uVar8);
      pcVar6[6] = cVar2;
      uVar8 = (ulong)((int)(uint)*pbVar7 >> 4 & 3);
      cVar2 = *(color_rgba *)((long)&local_58 + uVar8 * 4 + 2);
      *(undefined2 *)(pcVar6 + 8) = *(undefined2 *)(&local_58 + uVar8);
      pcVar6[10] = cVar2;
      cVar2 = *(color_rgba *)((long)&local_58 + (ulong)(uint)((int)(uint)*pbVar7 >> 6) * 4 + 2);
      *(undefined2 *)(pcVar6 + 0xc) = *(undefined2 *)(&local_58 + (uint)((int)(uint)*pbVar7 >> 6));
      pcVar6[0xe] = cVar2;
      pcVar6 = pcVar5;
      pbVar7 = pbVar7 + 1;
    } while (pcVar5 != param_2 + 0x40);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 <= uVar13;
}



/* basisu::unpack_bc1_nv(void const*, basisu::color_rgba*, bool) */

undefined8 basisu::unpack_bc1_nv(void *param_1,color_rgba *param_2,bool param_3)

{
  color_rgba cVar1;
  ushort uVar2;
  ushort uVar3;
  color_rgba *pcVar4;
  color_rgba *pcVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_44;
  byte local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined4 local_3d;
  undefined1 local_39;
  long local_30;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_1;
  uVar3 = *(ushort *)((long)param_1 + 2);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48._3_1_ = 0xff;
  uVar16 = uVar3 & 0x1f;
  uVar17 = (uint)(uVar2 >> 0xb);
  uVar11 = (uint)(uVar2 >> 5) << 2;
  uVar15 = uVar2 & 0x1f;
  uVar19 = (int)(uVar2 >> 5 & 0x3f) >> 4;
  uVar14 = (int)(uVar3 >> 5 & 0x3f) >> 4;
  local_41 = 0xff;
  uVar7 = (uint)(uVar3 >> 5) << 2;
  uVar18 = (uint)(uVar3 >> 0xb);
  local_48._1_1_ = (byte)uVar11 | (byte)uVar19;
  uVar19 = uVar11 & 0xff | uVar19;
  local_43 = (byte)uVar7 | (byte)uVar14;
  local_48._2_1_ = (char)((int)(uVar15 * 0x42) >> 3);
  local_48._0_1_ = (char)((int)(uVar17 * 0x42) >> 3);
  local_42 = (char)((int)(uVar16 * 0x42) >> 3);
  uVar14 = uVar7 & 0xff | uVar14;
  iVar8 = uVar14 - uVar19;
  local_44 = (char)((int)(uVar18 * 0x42) >> 3);
  iVar9 = iVar8 + 3;
  if (-1 < iVar8) {
    iVar9 = iVar8;
  }
  iVar12 = (iVar9 >> 2) + 0x80 + uVar19 * 0x100;
  if ((uint)uVar3 < (uint)uVar2) {
    local_39 = 0xff;
    local_40 = (char)((int)((uVar18 + uVar17 * 2) * 0x16) >> 3);
    iVar12 = iVar12 + iVar8 * 0x50;
    local_3f = (undefined1)((uint)(iVar12 + 0xff) >> 8);
    if (-1 < iVar12) {
      local_3f = (undefined1)((uint)iVar12 >> 8);
    }
    local_3e = (char)((int)((uVar16 + uVar15 * 2) * 0x16) >> 3);
    iVar9 = (uVar14 * 0x100 - (iVar9 >> 2)) + 0x80 + iVar8 * -0x50;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    uVar13 = 0;
    local_3d = CONCAT13((char)((int)((uVar15 + uVar16 * 2) * 0x16) >> 3),
                        CONCAT12((char)((uint)iVar9 >> 8),
                                 CONCAT11((char)((int)((uVar17 + uVar18 * 2) * 0x16) >> 3),0xff)));
  }
  else {
    local_39 = 0;
    local_3d = 0xff;
    iVar12 = iVar8 * 0x80 + iVar12;
    local_40 = (char)((int)((uVar17 + uVar18) * 0x21) >> 3);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    uVar13 = 1;
    local_3f = (char)((uint)iVar12 >> 8);
    local_3e = (char)((int)((uVar15 + uVar16) * 0x21) >> 3);
  }
  if (param_3) {
    pcVar5 = param_2;
    pbVar10 = (byte *)((long)param_1 + 4);
    do {
      pcVar4 = pcVar5 + 0x10;
      *(undefined4 *)pcVar5 = (&local_48)[*pbVar10 & 3];
      *(undefined4 *)(pcVar5 + 4) = (&local_48)[(int)(uint)*pbVar10 >> 2 & 3];
      *(undefined4 *)(pcVar5 + 8) = (&local_48)[(int)(uint)*pbVar10 >> 4 & 3];
      *(undefined4 *)(pcVar5 + 0xc) = (&local_48)[(uint)((int)(uint)*pbVar10 >> 6)];
      pcVar5 = pcVar4;
      pbVar10 = pbVar10 + 1;
    } while (pcVar4 != param_2 + 0x40);
  }
  else {
    pcVar5 = param_2;
    pbVar10 = (byte *)((long)param_1 + 4);
    do {
      pcVar4 = pcVar5 + 0x10;
      cVar1 = *(color_rgba *)((long)&local_48 + (ulong)(*pbVar10 & 3) * 4 + 2);
      *(undefined2 *)pcVar5 = *(undefined2 *)(&local_48 + (*pbVar10 & 3));
      pcVar5[2] = cVar1;
      uVar6 = (ulong)((int)(uint)*pbVar10 >> 2 & 3);
      cVar1 = *(color_rgba *)((long)&local_48 + uVar6 * 4 + 2);
      *(undefined2 *)(pcVar5 + 4) = *(undefined2 *)(&local_48 + uVar6);
      pcVar5[6] = cVar1;
      uVar6 = (ulong)((int)(uint)*pbVar10 >> 4 & 3);
      cVar1 = *(color_rgba *)((long)&local_48 + uVar6 * 4 + 2);
      *(undefined2 *)(pcVar5 + 8) = *(undefined2 *)(&local_48 + uVar6);
      pcVar5[10] = cVar1;
      cVar1 = *(color_rgba *)((long)&local_48 + (ulong)(uint)((int)(uint)*pbVar10 >> 6) * 4 + 2);
      *(undefined2 *)(pcVar5 + 0xc) = *(undefined2 *)(&local_48 + (uint)((int)(uint)*pbVar10 >> 6));
      pcVar5[0xe] = cVar1;
      pcVar5 = pcVar4;
      pbVar10 = pbVar10 + 1;
    } while (pcVar4 != param_2 + 0x40);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* basisu::unpack_bc1_amd(void const*, basisu::color_rgba*, bool) */

bool basisu::unpack_bc1_amd(void *param_1,color_rgba *param_2,bool param_3)

{
  color_rgba cVar1;
  ushort uVar2;
  ushort uVar3;
  color_rgba *pcVar4;
  color_rgba *pcVar5;
  byte *pbVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  undefined1 local_5a;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  long local_40;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_1;
  uVar3 = *(ushort *)((long)param_1 + 2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = uVar2 >> 5 & 0x3f;
  uVar8 = (uint)(uVar2 >> 0xb) << 3 | (uint)(uVar2 >> 0xd);
  uVar13 = uVar10 * 4 | uVar10 >> 4;
  uVar12 = (uVar2 & 0x1f) * 8 | (uVar2 & 0x1f) >> 2;
  uVar9 = uVar3 >> 5 & 0x3f;
  uVar10 = (uint)(uVar3 >> 0xd) | (uint)(uVar3 >> 0xb) << 3;
  uVar11 = uVar9 * 4 | uVar9 >> 4;
  uVar9 = (uVar3 & 0x1f) * 8 | (uVar3 & 0x1f) >> 2;
  if (uVar2 <= uVar3) {
    local_4c = 0;
    local_4a = 0;
    local_5a = 0;
    local_50 = (undefined1)((int)(uVar10 + 1 + uVar8) >> 1);
    local_4f = (undefined1)((int)(uVar11 + 1 + uVar13) >> 1);
    local_4e = (undefined1)((int)(uVar9 + 1 + uVar12) >> 1);
    local_49 = 0;
  }
  else {
    local_50 = (undefined1)((int)(uVar8 * 0x2b + 0x20 + uVar10 * 0x15) >> 6);
    local_4f = (undefined1)((int)(uVar13 * 0x2b + 0x20 + uVar11 * 0x15) >> 6);
    local_4e = (undefined1)((int)(uVar12 * 0x2b + 0x20 + uVar9 * 0x15) >> 6);
    local_4c = (undefined1)((int)(uVar10 * 0x2b + 0x20 + uVar8 * 0x15) >> 6);
    local_5a = (undefined1)((int)(uVar11 * 0x2b + 0x20 + uVar13 * 0x15) >> 6);
    local_49 = 0xff;
    local_4a = (undefined1)((int)(uVar9 * 0x2b + 0x20 + uVar12 * 0x15) >> 6);
  }
  local_58._0_1_ = (char)uVar8;
  local_58._1_1_ = (char)uVar13;
  local_58._2_1_ = (char)uVar12;
  local_58._3_1_ = 0xff;
  local_54 = (char)uVar10;
  local_53 = (char)uVar11;
  local_52 = (char)uVar9;
  local_51 = 0xff;
  local_4d = 0xff;
  local_4b = local_5a;
  if (param_3) {
    pcVar5 = param_2;
    pbVar6 = (byte *)((long)param_1 + 4);
    do {
      pcVar4 = pcVar5 + 0x10;
      *(undefined4 *)pcVar5 = (&local_58)[*pbVar6 & 3];
      *(undefined4 *)(pcVar5 + 4) = (&local_58)[(int)(uint)*pbVar6 >> 2 & 3];
      *(undefined4 *)(pcVar5 + 8) = (&local_58)[(int)(uint)*pbVar6 >> 4 & 3];
      *(undefined4 *)(pcVar5 + 0xc) = (&local_58)[(uint)((int)(uint)*pbVar6 >> 6)];
      pcVar5 = pcVar4;
      pbVar6 = pbVar6 + 1;
    } while (pcVar4 != param_2 + 0x40);
  }
  else {
    pcVar5 = param_2;
    pbVar6 = (byte *)((long)param_1 + 4);
    do {
      pcVar4 = pcVar5 + 0x10;
      cVar1 = *(color_rgba *)((long)&local_58 + (ulong)(*pbVar6 & 3) * 4 + 2);
      *(undefined2 *)pcVar5 = *(undefined2 *)(&local_58 + (*pbVar6 & 3));
      pcVar5[2] = cVar1;
      uVar7 = (ulong)((int)(uint)*pbVar6 >> 2 & 3);
      cVar1 = *(color_rgba *)((long)&local_58 + uVar7 * 4 + 2);
      *(undefined2 *)(pcVar5 + 4) = *(undefined2 *)(&local_58 + uVar7);
      pcVar5[6] = cVar1;
      uVar7 = (ulong)((int)(uint)*pbVar6 >> 4 & 3);
      cVar1 = *(color_rgba *)((long)&local_58 + uVar7 * 4 + 2);
      *(undefined2 *)(pcVar5 + 8) = *(undefined2 *)(&local_58 + uVar7);
      pcVar5[10] = cVar1;
      cVar1 = *(color_rgba *)((long)&local_58 + (ulong)(uint)((int)(uint)*pbVar6 >> 6) * 4 + 2);
      *(undefined2 *)(pcVar5 + 0xc) = *(undefined2 *)(&local_58 + (uint)((int)(uint)*pbVar6 >> 6));
      pcVar5[0xe] = cVar1;
      pcVar5 = pcVar4;
      pbVar6 = pbVar6 + 1;
    } while (pcVar4 != param_2 + 0x40);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 <= uVar3;
}



/* basisu::unpack_bc4(void const*, unsigned char*, unsigned int) */

void basisu::unpack_bc4(void *param_1,uchar *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
                    /* WARNING: Load size is inaccurate */
  bVar2 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *(byte *)((long)param_1 + 1);
  iVar12 = (uint)bVar2 + (uint)bVar2;
  iVar3 = (uint)bVar2 * 4;
  iVar9 = (uint)bVar1 + (uint)bVar1;
  iVar11 = iVar12 + (uint)bVar2;
  iVar15 = iVar9 + (uint)bVar1;
  iVar16 = (uint)bVar1 * 4;
  if ((uint)bVar1 < (uint)bVar2) {
    uVar4 = (uint)bVar1 + iVar11 * 2;
    uVar8 = uVar4 / 7;
    uVar14 = (uint)bVar2 + iVar15 * 2;
    uVar5 = iVar3 + (uint)bVar2 + iVar9;
    uVar8 = (uVar4 - uVar8 >> 1) + uVar8 >> 2;
    uVar4 = uVar5 / 7;
    uVar10 = (uVar5 - uVar4 >> 1) + uVar4 >> 2;
    uVar4 = (uint)(iVar3 + iVar15) / 7;
    uVar5 = ((iVar3 + iVar15) - uVar4 >> 1) + uVar4 >> 2;
    uVar6 = (uint)(iVar11 + iVar16) / 7;
    uVar4 = (uint)bVar1 + iVar16 + iVar12;
    uVar6 = ((iVar11 + iVar16) - uVar6 >> 1) + uVar6 >> 2;
    uVar13 = uVar4 / 7;
    uVar13 = (uVar4 - uVar13 >> 1) + uVar13 >> 2;
    uVar4 = uVar14 / 7;
    uVar4 = (uVar14 - uVar4 >> 1) + uVar4 >> 2;
  }
  else {
    uVar8 = ((uint)bVar1 + iVar3) / 5;
    uVar4 = 0xffffffff;
    uVar10 = (uint)(iVar11 + iVar9) / 5;
    uVar5 = (uint)(iVar12 + iVar15) / 5;
    uVar13 = 0;
    uVar6 = ((uint)bVar2 + iVar16) / 5;
  }
  local_48 = (((((((ulong)(uVar4 & 0xff) << 8 | (ulong)(uVar13 & 0xff)) << 8 | (ulong)(uVar6 & 0xff)
                 ) << 8 | (ulong)(uVar5 & 0xff)) << 8 | (ulong)(uVar10 & 0xff)) << 8 |
              (ulong)(uVar8 & 0xff)) << 8 | (ulong)bVar1) << 8 | (ulong)bVar2;
  uVar7 = (ulong)*(byte *)((long)param_1 + 6) << 0x20 | (ulong)*(byte *)((long)param_1 + 7) << 0x28
          | (ulong)*(uint *)((long)param_1 + 2);
  iVar3 = 0;
  do {
    bVar2 = (byte)iVar3;
    *param_2 = *(uchar *)((long)&local_48 + (ulong)((uint)(uVar7 >> (bVar2 & 0x3f)) & 7));
    param_2[param_3] =
         *(uchar *)((long)&local_48 + (ulong)((uint)(uVar7 >> (bVar2 + 3 & 0x3f)) & 7));
    param_2[param_3 * 2] =
         *(uchar *)((long)&local_48 + (ulong)((uint)(uVar7 >> (bVar2 + 6 & 0x3f)) & 7));
    iVar3 = iVar3 + 0xc;
    param_2[param_3 * 3] =
         *(uchar *)((long)&local_48 + (ulong)((uint)(uVar7 >> (bVar2 + 9 & 0x3f)) & 7));
    param_2 = param_2 + param_3 * 4;
  } while (iVar3 != 0x30);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::unpack_bc3(void const*, basisu::color_rgba*) */

uint basisu::unpack_bc3(void *param_1,color_rgba *param_2)

{
  uint uVar1;
  
  uVar1 = unpack_bc1((void *)((long)param_1 + 8),param_2,true);
  unpack_bc4(param_1,(uchar *)(param_2 + 3),4);
  return uVar1 ^ 1;
}



/* basisu::unpack_bc5(void const*, basisu::color_rgba*) */

void basisu::unpack_bc5(void *param_1,color_rgba *param_2)

{
  unpack_bc4(param_1,(uchar *)param_2,4);
  unpack_bc4((void *)((long)param_1 + 8),(uchar *)(param_2 + 1),4);
  return;
}



/* basisu::unpack_atc(void const*, basisu::color_rgba*) */

void basisu::unpack_atc(void *param_1,color_rgba *param_2)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  undefined4 uVar4;
  color_rgba *pcVar5;
  color_rgba *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  long in_FS_OFFSET;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined4 local_20;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  undefined1 local_19;
  long local_10;
  
  uVar4 = local_20;
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_1;
  uVar2 = *(ushort *)((long)param_1 + 2);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_19 = 0xff;
  uVar12 = uVar1 >> 10 & 0x1f;
  uVar7 = uVar1 >> 5 & 0x1f;
  uVar16 = (uVar1 & 0x1f) << 3;
  uVar13 = uVar12 << 3;
  uVar12 = uVar12 >> 2;
  uVar8 = uVar7 << 3;
  uVar7 = uVar7 >> 2;
  uVar17 = (uVar1 & 0x1f) >> 2;
  uVar14 = (uint)(uVar2 >> 0xb) << 3;
  uVar9 = uVar2 >> 5 & 0x3f;
  bVar15 = (byte)(uVar2 >> 0xd);
  uVar19 = uVar12 | uVar13;
  local_1c = bVar15 | (byte)uVar14;
  uVar10 = uVar9 << 2;
  uVar9 = uVar9 >> 4;
  local_28 = CONCAT13(0xff,CONCAT12((byte)uVar17 | (byte)uVar16,
                                    CONCAT11((byte)uVar7 | (byte)uVar8,(byte)uVar12 | (byte)uVar13))
                     );
  uVar7 = uVar7 | uVar8;
  uVar17 = uVar17 | uVar16;
  bVar3 = (byte)uVar10;
  uVar8 = (uVar2 & 0x1f) << 3;
  uVar12 = (uVar2 & 0x1f) >> 2;
  local_1b = (byte)uVar9 | bVar3;
  local_1a = (byte)uVar12 | (byte)uVar8;
  if ((short)uVar1 < 0) {
    local_21 = 0xff;
    iVar20 = uVar19 - (local_1c >> 2);
    if (iVar20 < 0) {
      iVar20 = 0;
    }
    iVar18 = uVar7 - (bVar3 >> 2);
    local_24 = (char)iVar20;
    if (iVar18 < 0) {
      iVar18 = 0;
    }
    iVar20 = uVar17 - (local_1a >> 2);
    local_23 = (char)iVar18;
    if (iVar20 < 0) {
      iVar20 = 0;
    }
    local_20 = local_28;
    local_22 = (char)iVar20;
    local_28 = 0xff000000;
  }
  else {
    uVar14 = bVar15 | uVar14;
    uVar9 = uVar9 | uVar10;
    uVar12 = uVar12 | uVar8;
    local_24 = (char)((int)(uVar19 * 5 + uVar14 * 3) >> 3);
    local_23 = (char)((int)(uVar7 * 5 + uVar9 * 3) >> 3);
    local_22 = (char)((int)(uVar17 * 5 + uVar12 * 3) >> 3);
    local_20._3_1_ = SUB41(uVar4,3);
    local_20._0_3_ =
         CONCAT12((char)((int)(uVar12 * 5 + uVar17 * 3) >> 3),
                  CONCAT11((char)((int)(uVar9 * 5 + uVar7 * 3) >> 3),
                           (char)((int)(uVar19 * 3 + uVar14 * 5) >> 3)));
  }
  pcVar5 = param_2;
  uVar11 = (ulong)*(uint *)((long)param_1 + 4);
  do {
    pcVar6 = pcVar5 + 4;
    *(undefined4 *)pcVar5 = (&local_28)[(uint)uVar11 & 3];
    pcVar5 = pcVar6;
    uVar11 = uVar11 >> 2;
  } while (param_2 + 0x40 != pcVar6);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::unpack_bc7_mode0_2(unsigned int, void const*, basisu::color_rgba*) */

int basisu::unpack_bc7_mode0_2(uint param_1,void *param_2,color_rgba *param_3)

{
  byte bVar1;
  sbyte sVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  uint uVar25;
  uint uVar26;
  long in_FS_OFFSET;
  uint local_150;
  byte local_128 [24];
  byte local_110 [3];
  byte local_10d [5];
  uint local_108 [8];
  uint local_e8 [16];
  undefined4 local_a8 [26];
  long local_40;
  ulong uVar19;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_150 = 8;
    uVar25 = 3;
    iVar8 = 6;
    uVar6 = 4;
    uVar22 = 1;
LAB_00101cb9:
    uVar14 = 0;
    uVar17 = 0;
    do {
      uVar23 = (uint)uVar17;
      iVar11 = 8 - (uVar23 & 7);
      if ((int)(uVar22 - uVar23) < iVar11) {
        iVar11 = uVar22 - uVar23;
      }
      uVar18 = uVar23 + iVar11;
      uVar19 = (ulong)uVar18;
      bVar1 = (byte)uVar17 & 0x1f;
      uVar14 = uVar14 | ((int)(uint)*(byte *)((long)param_2 + (uVar17 >> 3)) >> (sbyte)(uVar23 & 7)
                        & (1 << ((byte)iVar11 & 0x1f)) - 1U) << bVar1;
      uVar17 = uVar19;
    } while (uVar18 < uVar22);
    iVar11 = 0 << bVar1;
    if (1 << ((byte)param_1 & 0x1f) != uVar14) goto LAB_00101d1e;
    uVar22 = 4;
    if (param_1 != 0) goto LAB_00102181;
  }
  else {
    uVar22 = param_1 + 1;
    if (uVar22 != 0) {
      local_150 = 4;
      uVar25 = 2;
      iVar8 = 0;
      uVar6 = 5;
      goto LAB_00101cb9;
    }
    local_150 = 4;
    iVar8 = 0;
    uVar6 = 5;
    uVar25 = 2;
    uVar18 = 0;
LAB_00102181:
    uVar19 = (ulong)uVar18;
    uVar22 = 6;
  }
  uVar23 = 0;
  uVar14 = 0;
  do {
    uVar18 = (uint)uVar19 & 7;
    iVar11 = 8 - uVar18;
    if ((int)(uVar22 - uVar14) < iVar11) {
      iVar11 = uVar22 - uVar14;
    }
    uVar17 = uVar19 >> 3;
    uVar19 = (ulong)((uint)uVar19 + iVar11);
    uVar15 = uVar14 + iVar11;
    uVar23 = uVar23 | ((int)(uint)*(byte *)((long)param_2 + uVar17) >> (sbyte)uVar18 &
                      (1 << ((byte)iVar11 & 0x1f)) - 1U) << ((byte)uVar14 & 0x1f);
    uVar14 = uVar15;
  } while (uVar15 < uVar22);
  pbVar21 = local_110;
  pbVar13 = local_128;
  do {
    pbVar9 = pbVar21 + -0x18;
    do {
      uVar14 = 0;
      uVar22 = 0;
      do {
        uVar18 = (uint)uVar19 & 7;
        iVar11 = 8 - uVar18;
        if ((int)(uVar6 - uVar22) < iVar11) {
          iVar11 = uVar6 - uVar22;
        }
        uVar17 = uVar19 >> 3;
        uVar15 = (uint)uVar19 + iVar11;
        uVar19 = (ulong)uVar15;
        uVar26 = uVar22 + iVar11;
        uVar14 = uVar14 | ((int)(uint)*(byte *)((long)param_2 + uVar17) >> (sbyte)uVar18 &
                          (1 << ((byte)iVar11 & 0x1f)) - 1U) << ((byte)uVar22 & 0x1f);
        uVar22 = uVar26;
      } while (uVar26 < uVar6);
      *pbVar9 = (byte)uVar14;
      pbVar9 = pbVar9 + 4;
    } while (pbVar21 != pbVar9);
    pbVar21 = pbVar21 + 1;
  } while (local_10d != pbVar21);
  if (iVar8 != 0) {
    uVar15 = uVar15 + 6;
    puVar10 = local_108;
    do {
      uVar22 = (int)uVar19 + 1;
      *puVar10 = (int)(uint)*(byte *)((long)param_2 + (uVar19 >> 3)) >> ((byte)uVar19 & 7) & 1;
      puVar10 = puVar10 + 1;
      uVar19 = (ulong)uVar22;
    } while (uVar22 != uVar15);
  }
  puVar10 = local_108;
  lVar12 = 0;
  do {
    if (((lVar12 == 0) ||
        ((uint)*(byte *)((long)&basist::g_bc7_table_anchor_index_third_subset_1 + (ulong)uVar23) ==
         (uint)lVar12)) ||
       (uVar22 = uVar25,
       (uint)*(byte *)((long)&basist::g_bc7_table_anchor_index_third_subset_2 + (ulong)uVar23) ==
       (uint)lVar12)) {
      uVar22 = uVar25 - 1;
    }
    uVar18 = 0;
    uVar14 = 0;
    do {
      uVar26 = uVar15 & 7;
      iVar11 = 8 - uVar26;
      if ((int)(uVar22 - uVar14) < iVar11) {
        iVar11 = uVar22 - uVar14;
      }
      uVar3 = uVar15 >> 3;
      uVar15 = uVar15 + iVar11;
      uVar20 = uVar14 + iVar11;
      uVar18 = uVar18 | ((int)(uint)*(byte *)((long)param_2 + (ulong)uVar3) >> (sbyte)uVar26 &
                        (1 << ((byte)iVar11 & 0x1f)) - 1U) << ((byte)uVar14 & 0x1f);
      uVar14 = uVar20;
    } while (uVar20 < uVar22);
    local_e8[lVar12] = uVar18;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x10);
  pbVar21 = local_128 + 3;
  sVar2 = (sbyte)uVar6;
  do {
    uVar6 = (uint)pbVar21[-3];
    pbVar9 = pbVar21 + -3;
    if (iVar8 == 0) {
      while( true ) {
        pbVar16 = pbVar9 + 1;
        uVar6 = uVar6 << (8U - sVar2 & 0x1f);
        *pbVar9 = (byte)uVar6 | (byte)(uVar6 >> sVar2);
        if (pbVar16 == pbVar21) break;
        uVar6 = (uint)*pbVar16;
        pbVar9 = pbVar16;
      }
    }
    else {
      while( true ) {
        pbVar16 = pbVar9 + 1;
        uVar6 = (uVar6 * 2 | *puVar10) << (8U - (sVar2 + 1) & 0x1f);
        *pbVar9 = (byte)uVar6 | (byte)(uVar6 >> sVar2 + 1);
        if (pbVar21 == pbVar16) break;
        uVar6 = (uint)*pbVar16;
        pbVar9 = pbVar16;
      }
    }
    *pbVar21 = 0xff;
    pbVar21 = pbVar21 + 4;
    puVar10 = puVar10 + 1;
  } while (local_10d != pbVar21);
  lVar12 = 0;
  pbVar21 = local_128 + 4;
  puVar24 = local_a8;
  do {
    uVar17 = 0;
    puVar7 = puVar24;
    do {
      lVar4 = 0;
      do {
        if (uVar25 == 3) {
          uVar5 = (undefined1)
                  ((0x40 - *(int *)((long)&basist::g_bc7_weights3 + uVar17 * 4)) *
                   (uint)pbVar13[lVar4] + 0x20 +
                   (uint)pbVar21[lVar4] * *(int *)((long)&basist::g_bc7_weights3 + uVar17 * 4) >> 6)
          ;
        }
        else {
          uVar5 = (undefined1)
                  ((0x40 - *(int *)((long)&basist::g_bc7_weights2 + uVar17 * 4)) *
                   (uint)pbVar13[lVar4] + 0x20 +
                   (uint)pbVar21[lVar4] * *(int *)((long)&basist::g_bc7_weights2 + uVar17 * 4) >> 6)
          ;
        }
        *(undefined1 *)((long)puVar7 + lVar4) = uVar5;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
      uVar17 = uVar17 + 1;
      *(undefined1 *)((long)puVar7 + 3) = 0xff;
      puVar7 = puVar7 + 1;
    } while (uVar17 != local_150);
    pbVar21 = pbVar21 + 8;
    pbVar13 = pbVar13 + 8;
    lVar12 = lVar12 + 8;
    puVar24 = puVar24 + 8;
  } while (lVar12 != 0x18);
  lVar12 = 0;
  do {
    *(undefined4 *)(param_3 + lVar12 * 4) =
         local_a8[(ulong)local_e8[lVar12] +
                  (ulong)*(byte *)((long)&basist::g_bc7_partition3 +
                                  (ulong)(uVar23 * 0x10 + (int)lVar12)) * 8];
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x10);
  iVar11 = 1;
LAB_00101d1e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar11;
}



/* basisu::unpack_bc7_mode1_3_7(unsigned int, void const*, basisu::color_rgba*) */

int basisu::unpack_bc7_mode1_3_7(uint param_1,void *param_2,color_rgba *param_3)

{
  byte bVar1;
  sbyte sVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined4 *puVar25;
  long in_FS_OFFSET;
  uint local_11c;
  long local_110;
  undefined1 local_e8 [4];
  undefined1 local_e4 [12];
  uint local_d8 [4];
  uint local_c8 [16];
  undefined4 local_88 [18];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 7) {
    uVar10 = 5;
    local_110 = 4;
    uVar21 = 2;
    iVar23 = 4;
    local_11c = 4;
    uVar14 = 8;
LAB_001025db:
    uVar24 = 0;
    uVar16 = 0;
    do {
      uVar8 = (uint)uVar16;
      iVar12 = 8 - (uVar8 & 7);
      if ((int)(uVar14 - uVar8) < iVar12) {
        iVar12 = uVar14 - uVar8;
      }
      uVar7 = (ulong)(uVar8 + iVar12);
      bVar1 = (byte)uVar16 & 0x1f;
      uVar24 = uVar24 | ((int)(uint)*(byte *)((long)param_2 + (uVar16 >> 3)) >> (sbyte)(uVar8 & 7) &
                        (1 << ((byte)iVar12 & 0x1f)) - 1U) << bVar1;
      uVar16 = uVar7;
    } while (uVar8 + iVar12 < uVar14);
    iVar12 = 0 << bVar1;
    if (1 << ((byte)param_1 & 0x1f) != uVar24) goto LAB_00102642;
  }
  else {
    if (param_1 == 1) {
      uVar10 = 6;
      local_110 = 8;
      uVar21 = 3;
      iVar23 = 2;
      local_11c = 3;
      uVar14 = 2;
      goto LAB_001025db;
    }
    uVar14 = param_1 + 1;
    uVar7 = (ulong)uVar14;
    if (uVar14 != 0) {
      local_110 = 4;
      uVar10 = 7;
      uVar21 = 2;
      local_11c = 3;
      iVar23 = 4;
      goto LAB_001025db;
    }
    local_110 = 4;
    uVar10 = 7;
    uVar21 = 2;
    iVar23 = 4;
    local_11c = 3;
  }
  uVar24 = 0;
  uVar14 = 0;
  do {
    uVar8 = (uint)uVar7 & 7;
    iVar12 = 8 - uVar8;
    if ((int)(6 - uVar14) < iVar12) {
      iVar12 = 6 - uVar14;
    }
    uVar16 = uVar7 >> 3;
    uVar7 = (ulong)((uint)uVar7 + iVar12);
    uVar18 = uVar14 + iVar12;
    uVar24 = uVar24 | ((int)(uint)*(byte *)((long)param_2 + uVar16) >> (sbyte)uVar8 &
                      (1 << ((byte)iVar12 & 0x1f)) - 1U) << ((byte)uVar14 & 0x1f);
    uVar14 = uVar18;
  } while (uVar18 < 6);
  puVar20 = local_e8;
  puVar6 = local_d8;
  do {
    puVar19 = puVar6 + -4;
    do {
      uVar8 = 0;
      uVar14 = 0;
      do {
        uVar18 = (uint)uVar7 & 7;
        iVar12 = 8 - uVar18;
        if ((int)(uVar10 - uVar14) < iVar12) {
          iVar12 = uVar10 - uVar14;
        }
        uVar16 = uVar7 >> 3;
        uVar15 = (uint)uVar7 + iVar12;
        uVar7 = (ulong)uVar15;
        uVar22 = uVar14 + iVar12;
        uVar8 = uVar8 | ((int)(uint)*(byte *)((long)param_2 + uVar16) >> (sbyte)uVar18 &
                        (1 << ((byte)iVar12 & 0x1f)) - 1U) << ((byte)uVar14 & 0x1f);
        uVar14 = uVar22;
      } while (uVar22 < uVar10);
      *(char *)puVar19 = (char)uVar8;
      puVar19 = puVar19 + 1;
    } while (puVar6 != puVar19);
    puVar6 = (uint *)((long)puVar6 + 1);
  } while ((uint *)((ulong)local_11c + (long)local_d8) != puVar6);
  uVar15 = iVar23 + uVar15;
  puVar6 = local_d8;
  do {
    uVar14 = (int)uVar7 + 1;
    *puVar6 = (int)(uint)*(byte *)((long)param_2 + (uVar7 >> 3)) >> ((byte)uVar7 & 7) & 1;
    puVar6 = puVar6 + 1;
    uVar7 = (ulong)uVar14;
  } while (uVar14 != uVar15);
  lVar11 = 0;
  do {
    if ((lVar11 == 0) ||
       (uVar14 = uVar21,
       (uint)*(byte *)((long)&basist::g_bc7_table_anchor_index_second_subset + (ulong)uVar24) ==
       (uint)lVar11)) {
      uVar14 = uVar21 - 1;
    }
    uVar18 = 0;
    uVar8 = 0;
    do {
      uVar22 = uVar15 & 7;
      iVar23 = 8 - uVar22;
      if ((int)(uVar14 - uVar8) < iVar23) {
        iVar23 = uVar14 - uVar8;
      }
      uVar5 = uVar15 >> 3;
      uVar15 = uVar15 + iVar23;
      uVar17 = uVar8 + iVar23;
      uVar18 = uVar18 | ((int)(uint)*(byte *)((long)param_2 + (ulong)uVar5) >> (sbyte)uVar22 &
                        (1 << ((byte)iVar23 & 0x1f)) - 1U) << ((byte)uVar8 & 0x1f);
      uVar8 = uVar17;
    } while (uVar17 < uVar14);
    local_c8[lVar11] = uVar18;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0x10);
  uVar14 = 0;
  sVar2 = (char)uVar10 + 1;
  puVar13 = puVar20;
  do {
    lVar11 = 0;
    if (param_1 == 7) {
      do {
        uVar10 = ((uint)(byte)puVar13[lVar11] * 2 | local_d8[uVar14]) << (8U - sVar2 & 0x1f);
        puVar13[lVar11] = (byte)uVar10 | (byte)(uVar10 >> sVar2);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 4);
    }
    else {
      do {
        uVar10 = uVar14;
        if (param_1 == 1) {
          uVar10 = uVar14 >> 1;
        }
        uVar10 = ((uint)(byte)puVar13[lVar11] * 2 | local_d8[uVar10]) << (8U - sVar2 & 0x1f);
        puVar13[lVar11] = (byte)uVar10 | (byte)(uVar10 >> sVar2);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      puVar13[3] = 0xff;
    }
    uVar14 = uVar14 + 1;
    puVar13 = puVar13 + 4;
  } while (uVar14 != 4);
  bVar3 = false;
  puVar13 = local_e4;
  puVar25 = local_88;
  while( true ) {
    lVar11 = 0;
    puVar9 = puVar25;
    do {
      uVar7 = 0;
      do {
        if (uVar21 == 3) {
          iVar23 = *(int *)((long)&basist::g_bc7_weights3 + lVar11 * 4);
          uVar14 = (0x40 - iVar23) * (uint)(byte)puVar20[uVar7] + 0x20 +
                   (uint)(byte)puVar13[uVar7] * iVar23;
        }
        else {
          iVar23 = *(int *)((long)&basist::g_bc7_weights2 + lVar11 * 4);
          uVar14 = (0x40 - iVar23) * (uint)(byte)puVar20[uVar7] + 0x20 +
                   iVar23 * (uint)(byte)puVar13[uVar7];
        }
        *(char *)((long)puVar9 + uVar7) = (char)(uVar14 >> 6);
        uVar7 = uVar7 + 1;
      } while (local_11c != uVar7);
      uVar4 = 0xff;
      if (local_11c != 3) {
        uVar4 = *(undefined1 *)((long)puVar9 + 3);
      }
      *(undefined1 *)((long)puVar9 + 3) = uVar4;
      lVar11 = lVar11 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar11 != local_110);
    puVar13 = puVar13 + 8;
    puVar20 = puVar20 + 8;
    puVar25 = puVar25 + 8;
    if (bVar3) break;
    bVar3 = true;
  }
  lVar11 = 0;
  do {
    *(undefined4 *)(param_3 + lVar11 * 4) =
         local_88[(ulong)local_c8[lVar11] +
                  (ulong)*(byte *)((long)&basist::g_bc7_partition2 +
                                  (ulong)(uVar24 * 0x10 + (int)lVar11)) * 8];
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0x10);
  iVar12 = 1;
LAB_00102642:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::unpack_bc7_mode4_5(unsigned int, void const*, basisu::color_rgba*) */

undefined8 basisu::unpack_bc7_mode4_5(uint param_1,void *param_2,color_rgba *param_3)

{
  sbyte sVar1;
  sbyte sVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  color_rgba cVar9;
  uint uVar10;
  uint uVar11;
  color_rgba *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  byte *pbVar25;
  long in_FS_OFFSET;
  bool bVar26;
  int local_110;
  int local_10c;
  uint local_108;
  int local_f8 [2];
  byte local_f0 [3];
  byte local_ed;
  byte local_ec;
  undefined1 local_e9;
  color_rgba local_e8 [32];
  uint local_c8 [16];
  uint local_88 [18];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 4) {
    uVar6 = 5;
    uVar7 = 6;
    uVar5 = 5;
    local_110 = 3;
LAB_001027ca:
    uVar13 = 0;
    uVar19 = 0;
    do {
      uVar17 = (uint)uVar19;
      iVar21 = 8 - (uVar17 & 7);
      if ((int)(uVar5 - uVar17) < iVar21) {
        iVar21 = uVar5 - uVar17;
      }
      uVar16 = uVar17 + iVar21;
      uVar13 = uVar13 | ((int)(uint)*(byte *)((long)param_2 + (uVar19 >> 3)) >> (sbyte)(uVar17 & 7)
                        & (1 << ((byte)iVar21 & 0x1f)) - 1U) << ((byte)uVar19 & 0x1f);
      uVar19 = (ulong)uVar16;
    } while (uVar16 < uVar5);
    uVar8 = 0;
    if (1 << ((byte)param_1 & 0x1f) != uVar13) goto LAB_0010282b;
    bVar26 = local_110 == 2;
  }
  else {
    uVar5 = param_1 + 1;
    if (uVar5 != 0) {
      local_110 = 2;
      uVar6 = 7;
      uVar7 = 8;
      goto LAB_001027ca;
    }
    bVar26 = true;
    uVar6 = 7;
    uVar7 = 8;
    local_110 = 2;
    uVar16 = 0;
  }
  local_10c = local_110;
  uVar5 = 0;
  iVar21 = 0;
  do {
    uVar13 = uVar16 & 7;
    iVar22 = 8 - uVar13;
    if (2 - iVar21 < iVar22) {
      iVar22 = 2 - iVar21;
    }
    uVar17 = uVar16 >> 3;
    uVar16 = uVar16 + iVar22;
    iVar14 = iVar21 + iVar22;
    uVar5 = uVar5 | ((int)(uint)*(byte *)((long)param_2 + (ulong)uVar17) >> (sbyte)uVar13 &
                    (1 << ((byte)iVar22 & 0x1f)) - 1U) << ((byte)iVar21 & 0x1f);
    iVar21 = iVar14;
  } while (iVar14 == 1);
  local_108 = 1;
  uVar17 = 0;
  uVar13 = uVar16;
  if (param_1 == 4) {
    uVar13 = uVar16 + 1;
    uVar16 = (int)(uint)*(byte *)((long)param_2 + (ulong)(uVar16 >> 3)) >> ((byte)uVar16 & 7);
    uVar17 = uVar16 & 1;
    local_108 = ~uVar16 & 1;
  }
  iVar21 = 0;
  pbVar25 = local_f0;
  do {
    uVar16 = uVar6;
    if (iVar21 == 3) {
      uVar16 = uVar7;
    }
    lVar24 = 0;
    while( true ) {
      uVar23 = 0;
      uVar18 = 0;
      do {
        uVar10 = uVar13 & 7;
        iVar22 = 8 - uVar10;
        if ((int)(uVar16 - uVar18) < iVar22) {
          iVar22 = uVar16 - uVar18;
        }
        uVar11 = uVar13 >> 3;
        uVar13 = uVar13 + iVar22;
        uVar15 = uVar18 + iVar22;
        uVar23 = uVar23 | ((int)(uint)*(byte *)((long)param_2 + (ulong)uVar11) >> (sbyte)uVar10 &
                          (1 << ((byte)iVar22 & 0x1f)) - 1U) << ((byte)uVar18 & 0x1f);
        uVar18 = uVar15;
      } while (uVar15 < uVar16);
      pbVar25[lVar24 * 4] = (byte)uVar23;
      if (lVar24 != 0) break;
      lVar24 = 1;
    }
    iVar21 = iVar21 + 1;
    pbVar25 = pbVar25 + 1;
  } while (iVar21 != 4);
  if (uVar17 == 0) {
    local_110 = 2;
    bVar3 = true;
    bVar4 = bVar26;
  }
  else {
    bVar4 = true;
    local_10c = 2;
    bVar3 = bVar26;
  }
  lVar24 = 0;
  local_f8[0] = local_110;
  local_f8[1] = local_10c;
  iVar21 = local_f8[uVar17];
  do {
    uVar16 = iVar21 - (uint)((int)lVar24 == 0);
    uVar18 = 0;
    if (uVar16 != 0) {
      uVar23 = 0;
      do {
        uVar10 = uVar13 & 7;
        iVar22 = 8 - uVar10;
        if ((int)(uVar16 - uVar23) < iVar22) {
          iVar22 = uVar16 - uVar23;
        }
        uVar11 = uVar13 >> 3;
        uVar13 = uVar13 + iVar22;
        uVar15 = uVar23 + iVar22;
        uVar18 = uVar18 | ((int)(uint)*(byte *)((long)param_2 + (ulong)uVar11) >> (sbyte)uVar10 &
                          (1 << ((byte)iVar22 & 0x1f)) - 1U) << ((byte)uVar23 & 0x1f);
        uVar23 = uVar15;
      } while (uVar15 < uVar16);
    }
    if (uVar17 == 0) {
      local_c8[lVar24] = uVar18;
    }
    else {
      local_88[lVar24] = uVar18;
    }
    lVar24 = lVar24 + 1;
  } while (lVar24 != 0x10);
  lVar24 = 0;
  iVar21 = local_f8[local_108];
  do {
    uVar18 = iVar21 - (uint)((int)lVar24 == 0);
    uVar16 = 0;
    if (uVar18 != 0) {
      uVar23 = 0;
      do {
        uVar10 = uVar13 & 7;
        iVar22 = 8 - uVar10;
        if ((int)(uVar18 - uVar23) < iVar22) {
          iVar22 = uVar18 - uVar23;
        }
        uVar11 = uVar13 >> 3;
        uVar13 = uVar13 + iVar22;
        uVar15 = uVar23 + iVar22;
        uVar16 = uVar16 | ((int)(uint)*(byte *)((long)param_2 + (ulong)uVar11) >> (sbyte)uVar10 &
                          (1 << ((byte)iVar22 & 0x1f)) - 1U) << ((byte)uVar23 & 0x1f);
        uVar23 = uVar15;
      } while (uVar15 < uVar18);
    }
    if (uVar17 == 0) {
      local_88[lVar24] = uVar16;
    }
    else {
      local_c8[lVar24] = uVar16;
    }
    lVar24 = lVar24 + 1;
  } while (lVar24 != 0x10);
  sVar2 = (sbyte)uVar6;
  pbVar25 = local_f0;
  for (iVar21 = 0; iVar21 != 3; iVar21 = iVar21 + 1) {
    uVar6 = (uint)*pbVar25 << (8U - sVar2 & 0x1f);
    *pbVar25 = (byte)uVar6 | (byte)(uVar6 >> sVar2);
    pbVar25 = pbVar25 + 1;
  }
  iVar21 = 0;
  sVar1 = (sbyte)uVar7;
  uVar7 = (uint)*pbVar25 << (8U - sVar1 & 0x1f);
  *pbVar25 = (byte)uVar7 | (byte)(uVar7 >> sVar1);
  uVar7 = (uint)local_ec;
  pbVar25 = local_f0;
  do {
    iVar21 = iVar21 + 1;
    uVar7 = uVar7 << (8U - sVar2 & 0x1f);
    pbVar25[4] = (byte)uVar7 | (byte)(uVar7 >> sVar2);
    uVar7 = (uint)pbVar25[5];
    pbVar25 = pbVar25 + 1;
  } while (iVar21 != 3);
  uVar7 = uVar7 << (8U - sVar1 & 0x1f);
  uVar7 = uVar7 >> sVar1 | uVar7;
  local_e9 = (char)uVar7;
  lVar24 = 0;
  do {
    pcVar12 = local_e8 + lVar24;
    pbVar25 = local_f0;
    do {
      if (local_110 == 3) {
        cVar9 = SUB41((0x40 - *(int *)((long)&basist::g_bc7_weights3 + lVar24)) * (uint)*pbVar25 +
                      0x20 + (uint)pbVar25[4] * *(int *)((long)&basist::g_bc7_weights3 + lVar24) >>
                      6,0);
      }
      else {
        cVar9 = SUB41((0x40 - *(int *)((long)&basist::g_bc7_weights2 + lVar24)) * (uint)*pbVar25 +
                      0x20 + (uint)pbVar25[4] * *(int *)((long)&basist::g_bc7_weights2 + lVar24) >>
                      6,0);
      }
      pbVar25 = pbVar25 + 1;
      *pcVar12 = cVar9;
      pcVar12 = pcVar12 + 1;
    } while (&local_ed != pbVar25);
    lVar24 = lVar24 + 4;
  } while ((ulong)(-(uint)!bVar3 & 4) * 4 + 0x10 != lVar24);
  lVar24 = 0;
  uVar7 = uVar7 & 0xff;
  lVar20 = (ulong)(-(uint)!bVar4 & 4) + 4;
  if (local_10c == 3) {
    do {
      iVar21 = *(int *)((long)&basist::g_bc7_weights3 + lVar24 * 4);
      *(char *)((long)local_c8 + lVar24 * 4 + -0x1d) =
           (char)(iVar21 * uVar7 + 0x20 + (0x40 - iVar21) * (uint)local_ed >> 6);
      lVar24 = lVar24 + 1;
    } while (lVar20 != lVar24);
  }
  else {
    do {
      iVar21 = *(int *)((long)&basist::g_bc7_weights2 + lVar24 * 4);
      *(char *)((long)local_c8 + lVar24 * 4 + -0x1d) =
           (char)((0x40 - iVar21) * (uint)local_ed + 0x20 + iVar21 * uVar7 >> 6);
      lVar24 = lVar24 + 1;
    } while (lVar20 != lVar24);
  }
  lVar24 = 0;
  do {
    *(uint *)(param_3 + lVar24) = local_c8[(ulong)*(uint *)((long)local_c8 + lVar24) - 8];
    cVar9 = *(color_rgba *)((long)local_c8 + (ulong)*(uint *)((long)local_88 + lVar24) * 4 + -0x1d);
    param_3[lVar24 + 3] = cVar9;
    if (uVar5 != 0) {
      param_3[lVar24 + 3] = param_3[lVar24 + (ulong)(uVar5 - 1)];
      param_3[lVar24 + (ulong)(uVar5 - 1)] = cVar9;
    }
    lVar24 = lVar24 + 4;
  } while (lVar24 != 0x40);
  uVar8 = 1;
LAB_0010282b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::unpack_bc7_mode6(void const*, basisu::color_rgba*) */

undefined8 basisu::unpack_bc7_mode6(void *param_1,color_rgba *param_2)

{
  undefined8 uVar1;
  
                    /* WARNING: Load size is inaccurate */
  if ((*param_1 & 0x7f) == 0x40) {
    uVar1 = unpack_bc7_mode6(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* basisu::unpack_bc7(void const*, basisu::color_rgba*) */

undefined8 basisu::unpack_bc7(void *param_1,color_rgba *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  
                    /* WARNING: Load size is inaccurate */
  bVar1 = *param_1;
  uVar2 = 0;
  if ((bVar1 & 1) == 0) {
    do {
      uVar2 = uVar2 + 1;
      if (uVar2 == 8) {
        return 0;
      }
    } while ((bVar1 >> (uVar2 & 0x1f) & 1) == 0);
    switch(uVar2) {
    default:
      uVar2 = 2;
      break;
    case 1:
    case 3:
    case 7:
      uVar3 = unpack_bc7_mode1_3_7(uVar2,param_1,param_2);
      return uVar3;
    case 4:
    case 5:
      uVar3 = unpack_bc7_mode4_5(uVar2,param_1,param_2);
      return uVar3;
    case 6:
      if ((bVar1 & 0x7f) != 0x40) {
        return 0;
      }
      uVar3 = unpack_bc7_mode6(param_1,param_2);
      return uVar3;
    }
  }
  uVar3 = unpack_bc7_mode0_2(uVar2,param_1,param_2);
  return uVar3;
}



/* basisu::unpack_bc6h(void const*, void*, bool, unsigned int) */

undefined8 basisu::unpack_bc6h(void *param_1,void *param_2,bool param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ushort uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined8 uVar12;
  int *piVar13;
  byte bVar14;
  byte bVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  int *piVar24;
  uint uVar25;
  ulong uVar26;
  ushort *puVar27;
  ulong uVar28;
  undefined1 *puVar29;
  uint *puVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  char *pcVar34;
  ulong uVar35;
  long in_FS_OFFSET;
  bool bVar36;
  uint local_c8;
  ulong local_b8;
  byte local_a0;
  uint local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
                    /* WARNING: Load size is inaccurate */
  uVar35 = *param_1;
  uVar28 = *(ulong *)((long)param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *(char *)((long)&basist::g_bc6h_mode_lookup + (ulong)((uint)uVar35 & 0x1f));
  if (cVar1 < '\0') {
    iVar32 = 4;
    do {
      *(undefined8 *)param_2 = 0;
      param_2 = (void *)((long)param_2 + (ulong)param_4 * 2);
      iVar32 = iVar32 + -1;
    } while (iVar32 != 0);
    uVar12 = 0;
LAB_001033be:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar12;
  }
  iVar32 = (int)cVar1;
  if (iVar32 < 2) {
    local_b8 = uVar28 << 0x3e | uVar35 >> 2;
    uVar28 = uVar28 >> 2;
LAB_001033fe:
    local_c8 = 2;
  }
  else {
    local_b8 = uVar28 << 0x3b | uVar35 >> 5;
    local_c8 = 1;
    uVar28 = uVar28 >> 5;
    if (iVar32 < 10) goto LAB_001033fe;
  }
  local_7c = 0;
  lVar16 = (long)cVar1 * 100;
  pcVar9 = (char *)((long)&basist::g_bc6h_bit_layouts + lVar16);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  do {
    while( true ) {
      cVar2 = *pcVar9;
      if (cVar2 < '\0') goto LAB_001030d8;
      bVar14 = pcVar9[2];
      iVar23 = (int)(char)bVar14;
      bVar15 = pcVar9[3];
      iVar31 = (int)(char)bVar15;
      puVar30 = &local_7c;
      if (cVar2 != '\x03') {
        puVar30 = (uint *)(local_78 +
                          ((ulong)((byte)pcVar9[1] & 1) +
                          ((long)cVar2 + (long)(pcVar9[1] >> 1) * 3) * 2) * 4);
      }
      uVar18 = (uint)local_b8;
      if ((char)bVar15 < '\0') break;
      iVar17 = iVar23 - iVar31;
      iVar3 = -iVar17;
      if (0 < iVar17) {
        iVar3 = iVar17;
      }
      if (iVar23 <= iVar31) {
        bVar15 = bVar14;
      }
      bVar14 = (char)iVar3 + 1;
      uVar35 = uVar28 << (0x40 - bVar14 & 0x3f);
      uVar18 = ~(-1 << (bVar14 & 0x1f)) & uVar18;
      uVar28 = uVar28 >> (bVar14 & 0x3f);
      local_b8 = local_b8 >> (bVar14 & 0x3f) | uVar35;
      uVar25 = uVar18;
      if (iVar23 < iVar31) {
        uVar25 = 0;
        iVar23 = 0;
        do {
          uVar25 = uVar25 | (uVar18 >> ((byte)iVar23 & 0x1f) & 1) <<
                            ((char)iVar3 - (byte)iVar23 & 0x1f);
          bVar36 = iVar3 != iVar23;
          iVar23 = iVar23 + 1;
        } while (bVar36);
      }
      pcVar9 = pcVar9 + 4;
      *puVar30 = *puVar30 | uVar25 << (bVar15 & 0x1f);
      if (&DAT_001070e4 + lVar16 == pcVar9) goto LAB_001030d8;
    }
    pcVar9 = pcVar9 + 4;
    local_b8 = local_b8 >> 1 | uVar28 << 0x3f;
    uVar28 = uVar28 >> 1;
    *puVar30 = *puVar30 | (uVar18 & 1) << (bVar14 & 0x1f);
  } while (&DAT_001070e4 + lVar16 != pcVar9);
LAB_001030d8:
  auVar6 = local_78;
  bVar14 = *(byte *)((long)&basist::g_bc6h_mode_sig_bits + (long)iVar32 * 4);
  if (param_3) {
    bVar15 = 0x20 - bVar14;
    local_78._0_4_ = (int)(local_78._0_4_ << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
    auVar7 = local_78;
    local_78._8_4_ = auVar6._8_4_;
    local_78._12_4_ = auVar6._12_4_;
    local_78._0_8_ = auVar7._0_8_;
    local_78._8_4_ = (int)(local_78._8_4_ << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
    local_68._0_4_ = (int)(local_68._0_4_ << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
    bVar36 = 1 < (int)cVar1 - 9U;
  }
  else {
    if ((int)cVar1 - 9U < 2) goto LAB_00103114;
    bVar36 = true;
  }
  lVar33 = (long)&basist::g_bc6h_mode_sig_bits + (long)cVar1 * 4;
  piVar24 = (int *)(local_78 + 4);
  lVar16 = lVar33;
  do {
    cVar1 = *(char *)(lVar16 + 1);
    piVar20 = piVar24 + -1;
    do {
      piVar13 = piVar20;
      piVar20 = piVar13 + 1;
      *piVar20 = (piVar13[1] << (-cVar1 & 0x1fU)) >> (-cVar1 & 0x1fU);
    } while (piVar20 != piVar24);
    piVar24 = piVar13 + 3;
    lVar16 = lVar16 + 1;
  } while (piVar24 != (int *)(local_68 + 0xc));
  puVar29 = local_78 + 8;
  if (local_c8 == 2) {
    do {
      cVar1 = *(char *)(lVar33 + 1);
      puVar21 = puVar29 + -8;
      do {
        puVar22 = puVar21 + 4;
        *(int *)(puVar21 + 0x18) =
             (*(int *)(puVar21 + 0x18) << (-cVar1 & 0x1fU)) >> (-cVar1 & 0x1fU);
        puVar21 = puVar22;
      } while (puVar22 != puVar29);
      puVar29 = puVar29 + 8;
      lVar33 = lVar33 + 1;
    } while (puVar29 != local_58);
  }
  if (bVar36) {
    uVar35 = 0;
    uVar18 = (1 << (bVar14 & 0x1f)) - 1;
    do {
      uVar26 = 0;
      piVar24 = (int *)local_78;
      do {
        lVar16 = (uVar26 + uVar35 * 3) * 2;
        uVar25 = (uint)uVar35 ^ 1;
        while( true ) {
          uVar5 = (int)((*(int *)(local_78 + (lVar16 + (ulong)uVar25) * 4) + *piVar24 & uVar18) <<
                       (0x20 - bVar14 & 0x1f)) >> (0x20 - bVar14 & 0x1f);
          if (!param_3) {
            uVar5 = *(int *)(local_78 + (lVar16 + (ulong)uVar25) * 4) + *piVar24 & uVar18;
          }
          *(uint *)(local_78 + ((ulong)uVar25 + lVar16) * 4) = uVar5;
          if (uVar25 != 0) break;
          uVar25 = 1;
        }
        uVar25 = (int)uVar26 + 1;
        uVar26 = (ulong)uVar25;
        piVar24 = piVar24 + 2;
      } while (uVar25 != 3);
      uVar25 = (uint)uVar35 + 1;
      uVar35 = (ulong)uVar25;
    } while (local_c8 != uVar25);
  }
LAB_00103114:
  piVar24 = (int *)(local_68 + 8);
  lVar16 = 0;
LAB_00103157:
  piVar20 = piVar24 + -6;
LAB_0010315e:
  piVar13 = piVar20;
  bVar36 = false;
  iVar23 = *piVar13;
  piVar20 = piVar13;
  if (!param_3) goto LAB_001031a0;
LAB_00103170:
  iVar31 = iVar23;
  if (bVar14 < 0x10) {
    if (iVar23 < 0) {
      iVar31 = -0x7fff;
      if (-iVar23 < (1 << (bVar14 - 1 & 0x1f)) + -1) {
        iVar31 = -(iVar23 * -0x8000 + 0x4000 >> (bVar14 - 1 & 0x1f));
      }
    }
    else if (iVar23 != 0) {
      if (iVar23 < (1 << (bVar14 - 1 & 0x1f)) + -1) {
        iVar31 = iVar23 * 0x8000 + 0x4000 >> (bVar14 - 1 & 0x1f);
      }
      else {
        iVar31 = 0x7fff;
      }
    }
  }
LAB_00103188:
  do {
    *piVar20 = iVar31;
    if (bVar36) {
LAB_001031d0:
      piVar20 = piVar13 + 2;
      if (piVar13 + 2 != piVar24) goto LAB_0010315e;
      lVar16 = lVar16 + 3;
      piVar24 = piVar13 + 8;
      if (lVar16 == (ulong)(local_c8 != 1) * 3 + 3) {
        bVar14 = (9 < iVar32) + 3;
        puVar10 = &basist::g_bc6h_weight4;
        if (iVar32 < 10) {
          puVar10 = &basist::g_bc6h_weight3;
        }
        iVar23 = 0;
        pcVar9 = (char *)&basist::g_bc6h_2subset_patterns;
        local_a0 = (9 < iVar32) + 2;
        do {
          iVar32 = 0;
          puVar27 = (ushort *)param_2;
          pcVar34 = pcVar9;
          do {
            if (local_c8 == 1) {
              if (iVar32 == 0 && iVar23 == 0) {
                uVar35 = 0;
                bVar15 = local_a0;
              }
              else {
                uVar35 = 0;
                bVar15 = bVar14;
              }
            }
            else {
              uVar35 = (ulong)((int)*pcVar34 & 1);
              bVar15 = bVar14 + (*pcVar34 >> 7);
            }
            lVar16 = uVar35 * 0x18;
            uVar26 = uVar28 << (-bVar15 & 0x3f);
            uVar18 = (uint)local_b8;
            uVar28 = uVar28 >> (bVar15 & 0x3f);
            local_b8 = local_b8 >> (bVar15 & 0x3f) | uVar26;
            iVar31 = *(int *)(local_68 + lVar16 + -4);
            pbVar11 = (byte *)((ulong)(~(-1 << (bVar15 & 0x1f)) & uVar18) + (long)puVar10);
            iVar3 = *(int *)(local_68 + lVar16);
            iVar17 = *(int *)(local_68 + lVar16 + 4);
            iVar4 = *(int *)(local_78 + lVar16 + 8);
            iVar19 = (int)((0x40 - (uint)*pbVar11) * *(int *)(local_78 + uVar35 * 0x18) + 0x20 +
                          (uint)*pbVar11 * *(int *)(local_78 + uVar35 * 0x18 + 4)) >> 6;
            if (param_3) {
              if (iVar19 < 0) {
                iVar19 = iVar19 * -0x1f >> 5;
                uVar8 = (ushort)(iVar19 != 0) << 0xf;
              }
              else {
                uVar8 = 0;
                iVar19 = iVar19 * 0x1f >> 5;
              }
              *puVar27 = uVar8 | (ushort)iVar19;
              iVar31 = (int)((0x40 - (uint)*pbVar11) * iVar4 + 0x20 + (uint)*pbVar11 * iVar31) >> 6;
              if (iVar31 < 0) {
                iVar31 = iVar31 * -0x1f >> 5;
                uVar8 = (ushort)(iVar31 != 0) << 0xf;
              }
              else {
                uVar8 = 0;
                iVar31 = iVar31 * 0x1f >> 5;
              }
              puVar27[1] = uVar8 | (ushort)iVar31;
              iVar31 = (int)((0x40 - (uint)*pbVar11) * iVar3 + 0x20 + (uint)*pbVar11 * iVar17) >> 6;
              if (iVar31 < 0) {
                iVar31 = iVar31 * -0x1f >> 5;
                uVar8 = (ushort)(iVar31 != 0) << 0xf;
              }
              else {
                uVar8 = 0;
                iVar31 = iVar31 * 0x1f >> 5;
              }
              uVar8 = uVar8 | (ushort)iVar31;
            }
            else {
              *puVar27 = (ushort)(iVar19 * 0x1f >> 6);
              puVar27[1] = (ushort)(((int)((0x40 - (uint)*pbVar11) * iVar4 + 0x20 +
                                          (uint)*pbVar11 * iVar31) >> 6) * 0x1f >> 6);
              uVar8 = (ushort)(((int)((0x40 - (uint)*pbVar11) * iVar3 + 0x20 +
                                     (uint)*pbVar11 * iVar17) >> 6) * 0x1f >> 6);
            }
            iVar32 = iVar32 + 1;
            puVar27[2] = uVar8;
            pcVar34 = pcVar34 + 1;
            puVar27 = puVar27 + 3;
          } while (iVar32 != 4);
          iVar23 = iVar23 + 1;
          pcVar9 = pcVar9 + 4;
          param_2 = (void *)((long)param_2 + ((ulong)(param_4 - 0xc) + 0xc) * 2);
        } while (iVar23 != 4);
        uVar12 = 1;
        goto LAB_001033be;
      }
      goto LAB_00103157;
    }
    while( true ) {
      piVar20 = piVar20 + 1;
      iVar23 = *piVar20;
      bVar36 = true;
      if (param_3) goto LAB_00103170;
LAB_001031a0:
      iVar31 = iVar23;
      if ((0xe < bVar14) || (iVar23 == 0)) goto LAB_00103188;
      if (iVar23 == (1 << (bVar14 & 0x1f)) + -1) break;
      *piVar20 = iVar23 * 0x10000 + 0x8000 >> (bVar14 & 0x1f);
      if (bVar36) goto LAB_001031d0;
    }
    iVar31 = 0xffff;
  } while( true );
}



/* basisu::unpack_fxt1(void const*, basisu::color_rgba*) */

undefined8 basisu::unpack_fxt1(void *param_1,color_rgba *param_2)

{
  undefined8 uVar1;
  
  if (((char)*(byte *)((long)param_1 + 0xf) < '\0') &&
     ((*(byte *)((long)param_1 + 0xf) & 0x10) == 0)) {
    uVar1 = unpack_fxt1(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* basisu::unpack_pvrtc2(void const*, basisu::color_rgba*) */

undefined8 basisu::unpack_pvrtc2(void *param_1,color_rgba *param_2)

{
  undefined8 uVar1;
  
  if ((*(ushort *)((long)param_1 + 4) & 0x8001) == 0x8000) {
    uVar1 = unpack_pvrtc2(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* basisu::unpack_etc2_eac_r(void const*, basisu::color_rgba*, unsigned int) */

void basisu::unpack_etc2_eac_r(void *param_1,color_rgba *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  color_rgba *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  color_rgba *pcVar15;
  
  bVar1 = *(byte *)((long)param_1 + 2);
  bVar2 = *(byte *)((long)param_1 + 3);
  bVar3 = *(byte *)((long)param_1 + 7);
  bVar4 = *(byte *)((long)param_1 + 4);
  bVar5 = *(byte *)((long)param_1 + 5);
  bVar6 = *(byte *)((long)param_1 + 6);
                    /* WARNING: Load size is inaccurate */
  bVar7 = *param_1;
  if (*(byte *)((long)param_1 + 1) < 0x10) {
    bVar8 = *(byte *)((long)param_1 + 1);
    iVar14 = 1;
  }
  else {
    bVar8 = *(byte *)((long)param_1 + 1);
    iVar14 = (uint)(bVar8 >> 4) << 3;
  }
  iVar13 = -3;
  iVar12 = 0;
  pcVar15 = param_2 + param_3;
  do {
    iVar10 = iVar13 + 0x30;
    pcVar11 = pcVar15;
    do {
      iVar9 = *(char *)((long)&g_etc2_eac_tables +
                       (ulong)((uint)(((ulong)bVar1 << 0x28 | (ulong)bVar2 << 0x20 | (ulong)bVar3 |
                                       (ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 |
                                      (ulong)bVar6 << 8) >> ((byte)iVar10 & 0x3f)) & 7) +
                       (ulong)(bVar8 & 0xf) * 8) * iVar14 + (uint)bVar7 * 8 + 4;
      if (0x7ff < iVar9) {
        iVar9 = 0x7ff;
      }
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      iVar10 = iVar10 + -0xc;
      *pcVar11 = SUB41((iVar9 * 0xff + 0x3ff) / 0x7ff,0);
      pcVar11 = pcVar11 + 4;
    } while (iVar13 != iVar10);
    iVar12 = iVar12 + 1;
    pcVar15 = pcVar15 + 0x10;
    iVar13 = iVar13 + -3;
  } while (iVar12 != 4);
  return;
}



/* basisu::unpack_etc2_eac_rg(void const*, basisu::color_rgba*) */

void basisu::unpack_etc2_eac_rg(void *param_1,color_rgba *param_2)

{
  unpack_etc2_eac_r(param_1,param_2,0);
  unpack_etc2_eac_r((void *)((long)param_1 + 8),param_2,1);
  return;
}



/* basisu::unpack_uastc(void const*, basisu::color_rgba*) */

void basisu::unpack_uastc(void *param_1,color_rgba *param_2)

{
  basist::unpack_uastc((uastc_block *)param_1,(color32 *)param_2,false);
  return;
}



/* basisu::unpack_block(basisu::texture_format, void const*, basisu::color_rgba*) */

ulong basisu::unpack_block(undefined4 param_1,etc_block *param_2,color_rgba *param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  
  switch(param_1) {
  case 0:
  case 1:
  case 2:
    uVar3 = basisu::unpack_etc1(param_2,param_3,false);
    return uVar3;
  case 3:
    cVar1 = basisu::unpack_etc1(param_2 + 8,param_3,false);
    if (cVar1 == '\0') {
      return 0;
    }
  case 4:
    unpack_etc2_eac(param_2,param_3);
    break;
  case 5:
    unpack_bc1(param_2,param_3,true);
    break;
  case 6:
    bVar2 = unpack_bc1(param_2 + 8,param_3,true);
    unpack_bc4(param_2,(uchar *)(param_3 + 3),4);
    return (ulong)(bVar2 ^ 1);
  case 7:
    unpack_bc4(param_2,(uchar *)param_3,4);
    break;
  case 8:
    unpack_bc4(param_2,(uchar *)param_3,4);
    unpack_bc4(param_2 + 8,(uchar *)(param_3 + 1),4);
    break;
  case 9:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x17:
    return 0;
  case 0xb:
    uVar3 = unpack_bc7(param_2,param_3);
    return uVar3;
  case 0xc:
    uVar3 = basisu_astc::astc::decompress_ldr((uchar *)param_3,(uchar *)param_2,false,4,4);
    return uVar3;
  case 0x10:
    unpack_atc(param_2,param_3);
    break;
  case 0x11:
    unpack_atc(param_2 + 8,param_3);
    unpack_bc4(param_2,(uchar *)(param_3 + 3),4);
    break;
  case 0x12:
    if (((char)param_2[0xf] < '\0') && (((byte)param_2[0xf] & 0x10) == 0)) {
      unpack_fxt1(param_2,param_3);
    }
    break;
  case 0x13:
    if ((*(ushort *)(param_2 + 4) & 0x8001) == 0x8000) {
      unpack_pvrtc2(param_2,param_3);
    }
    break;
  case 0x14:
    unpack_etc2_eac_r(param_2,param_3,0);
    break;
  case 0x15:
    unpack_etc2_eac_r(param_2,param_3,0);
    unpack_etc2_eac_r(param_2 + 8,param_3,1);
    break;
  case 0x16:
    basist::unpack_uastc((uastc_block *)param_2,(color32 *)param_3,false);
    break;
  case 0x18:
    unpack_bc1_nv(param_2,param_3,true);
    break;
  case 0x19:
    unpack_bc1_amd(param_2,param_3,true);
    break;
  default:
    return 0;
  }
  return 1;
}



/* basisu::unpack_block_hdr(basisu::texture_format, void const*, basisu::vec<4u, float>*) */

undefined8 basisu::unpack_block_hdr(int param_1,uchar *param_2,float *param_3)

{
  ushort uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  ushort uVar9;
  long in_FS_OFFSET;
  ushort local_88 [48];
  ushort local_28 [4];
  long local_20;
  
  puVar5 = local_88;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0;
  if (param_1 == 0xd) {
LAB_00103d41:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = basisu_astc::astc::decompress_hdr(param_3,param_2,4,4);
      return uVar6;
    }
  }
  else {
    if (param_1 < 0xe) {
      if (param_1 - 9U < 2) {
        unpack_bc6h(param_2,local_88,param_1 == 9,0xc);
        fVar2 = _LC1;
        do {
          uVar1 = *puVar5;
          uVar4 = uVar1 & 0x3ff;
          fVar8 = (float)((uint)(uVar1 >> 0xf) << 0x1f);
          uVar9 = uVar1 >> 10 & 0x1f;
          if (uVar9 == 0) {
            uVar3 = 0;
            if ((uVar1 & 0x3ff) != 0) {
              do {
                uVar7 = uVar3;
                uVar4 = uVar4 * 2;
                uVar3 = uVar7 - 1;
              } while ((uVar4 & 0x400) == 0);
              uVar4 = uVar4 & 0xfffffbff;
LAB_00103c21:
              fVar8 = (float)((uVar7 + 0x70) * 0x800000 | uVar4 << 0xd | (uint)fVar8);
            }
          }
          else {
            uVar7 = (uint)uVar9;
            if ((uVar1 >> 10 & 0x1f) != 0x1f) goto LAB_00103c21;
            if ((uVar1 & 0x3ff) == 0) {
              fVar8 = (float)((uint)fVar8 | 0x7f800000);
            }
            else {
              fVar8 = (float)(uVar4 << 0xd | (uint)fVar8 | 0x7f800000);
            }
          }
          *param_3 = fVar8;
          uVar1 = puVar5[1];
          uVar4 = uVar1 & 0x3ff;
          fVar8 = (float)((uint)(uVar1 >> 0xf) << 0x1f);
          uVar9 = uVar1 >> 10 & 0x1f;
          if (uVar9 == 0) {
            uVar3 = 0;
            if ((uVar1 & 0x3ff) != 0) {
              do {
                uVar7 = uVar3;
                uVar4 = uVar4 * 2;
                uVar3 = uVar7 - 1;
              } while ((uVar4 & 0x400) == 0);
              uVar4 = uVar4 & 0xfffffbff;
LAB_00103c81:
              fVar8 = (float)((uVar7 + 0x70) * 0x800000 | uVar4 << 0xd | (uint)fVar8);
            }
          }
          else {
            uVar7 = (uint)uVar9;
            if ((uVar1 >> 10 & 0x1f) != 0x1f) goto LAB_00103c81;
            if ((uVar1 & 0x3ff) == 0) {
              fVar8 = (float)((uint)fVar8 | 0x7f800000);
            }
            else {
              fVar8 = (float)(uVar4 << 0xd | (uint)fVar8 | 0x7f800000);
            }
          }
          param_3[1] = fVar8;
          uVar1 = puVar5[2];
          uVar4 = uVar1 & 0x3ff;
          fVar8 = (float)((uint)(uVar1 >> 0xf) << 0x1f);
          uVar9 = uVar1 >> 10 & 0x1f;
          if (uVar9 == 0) {
            uVar3 = 0;
            if ((uVar1 & 0x3ff) != 0) {
              do {
                uVar7 = uVar3;
                uVar4 = uVar4 * 2;
                uVar3 = uVar7 - 1;
              } while ((uVar4 & 0x400) == 0);
              uVar4 = uVar4 & 0xfffffbff;
LAB_00103ce9:
              fVar8 = (float)(uVar4 << 0xd | (uint)fVar8 | (uVar7 + 0x70) * 0x800000);
            }
          }
          else {
            uVar7 = (uint)uVar9;
            if ((uVar1 >> 10 & 0x1f) != 0x1f) goto LAB_00103ce9;
            if ((uVar1 & 0x3ff) == 0) {
              fVar8 = (float)((uint)fVar8 | 0x7f800000);
            }
            else {
              fVar8 = (float)(uVar4 << 0xd | (uint)fVar8 | 0x7f800000);
            }
          }
          puVar5 = puVar5 + 3;
          param_3[2] = fVar8;
          param_3[3] = fVar2;
          param_3 = param_3 + 4;
        } while (local_28 != puVar5);
        uVar6 = 1;
      }
    }
    else {
      if (param_1 == 0x17) goto LAB_00103d41;
      uVar6 = 0;
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::gpu_image::unpack(basisu::image&) const */

undefined4 __thiscall basisu::gpu_image::unpack(gpu_image *this,image *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  long in_FS_OFFSET;
  uint uVar23;
  ulong uVar24;
  void *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined1 local_2b8 [12];
  uint uStack_2ac;
  void *local_2a8;
  undefined1 local_2a0 [16];
  undefined1 local_290;
  undefined4 local_288 [144];
  undefined4 local_48 [2];
  long local_40;
  undefined4 *puVar13;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  image::crop(param_1,*(uint *)(this + 4),*(uint *)(this + 8),0xffffffff,
              (color_rgba *)&g_black_color,true);
  lVar10 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + lVar10 * 4) = g_black_color;
      lVar10 = lVar10 + 1;
    } while ((uint)lVar10 < *(uint *)(param_1 + 0x18));
  }
  if ((*(int *)param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    if (*(int *)this - 0xeU < 2) {
      local_290 = 0;
      uVar2 = *(ulong *)(this + 4);
      _local_2b8 = (undefined1  [16])0x0;
      local_2a0 = (undefined1  [16])0x0;
      local_2a8 = (void *)0x0;
      uVar23 = (int)_LC2 + (int)uVar2;
      uVar20 = uVar23 >> 2;
      uVar19 = (uint)(_LC2._4_4_ + (int)(uVar2 >> 0x20)) >> 2;
      uVar24 = CONCAT44(uVar19,uVar20);
      if (*(int *)(this + 8) == 0 && *(int *)(this + 4) == 0) {
LAB_001040f2:
        uVar22 = 0;
        if (*(int *)(this + 0xc) * *(int *)(this + 0x10) != 0) goto LAB_00104004;
        iVar9 = 0;
LAB_00104108:
        memcpy(local_2a8,*(void **)(this + 0x20),(ulong)(uint)(iVar9 * *(int *)(this + 0x1c) * 8));
        local_2d0 = (void *)0x0;
        local_2c8 = 0;
        local_2d8 = stack0xfffffffffffffd50;
        if (local_2a0._0_4_ != 0) {
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_2d0,local_2a0[0],0,(_func_void_void_ptr_void_ptr_uint *)0x8,false)
          ;
          if (local_2d0 != (void *)0x0) {
            if (local_2a8 == (void *)0x0) goto LAB_00104181;
            memcpy(local_2d0,local_2a8,(ulong)(uint)local_2a0._0_4_ << 3);
          }
        }
LAB_00104181:
        local_2c8 = CONCAT44(local_2c8._4_4_,local_2a0._0_4_);
        if (local_2a0._12_4_ != 0) {
          uVar19 = 0;
          uVar23 = local_2a0._12_4_;
          uVar20 = local_2a0._8_4_;
          do {
            uVar15 = 0;
            if (uVar20 != 0) {
              do {
                uVar23 = basisu::pvrtc4_swizzle_uv(uVar20,uVar23,uVar15,uVar19);
                uVar20 = local_2b8._8_4_ * uVar19 + uVar15;
                uVar15 = uVar15 + 1;
                *(undefined8 *)((long)local_2a8 + (ulong)uVar20 * 8) =
                     *(undefined8 *)((long)local_2d0 + (ulong)uVar23 * 8);
                uVar23 = local_2a0._12_4_;
                uVar20 = local_2a0._8_4_;
              } while (uVar15 < (uint)local_2a0._8_4_);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar23);
        }
        if (local_2d0 != (void *)0x0) {
          free(local_2d0);
        }
        uVar23 = 0;
        image::crop(param_1,local_2b8._0_4_,local_2b8._4_4_,0xffffffff,(color_rgba *)&g_black_color,
                    true);
        if (local_2b8._4_4_ != 0) {
          do {
            if (local_2b8._0_4_ != 0) {
              uVar20 = 0;
              do {
                uVar22 = basisu::pvrtc4_image::get_pixel((uint)local_2b8,uVar20,uVar23);
                uVar19 = *(int *)(param_1 + 8) * uVar23 + uVar20;
                uVar20 = uVar20 + 1;
                *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar19 * 4) = uVar22;
              } while (uVar20 < (uint)local_2b8._0_4_);
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 < (uint)local_2b8._4_4_);
        }
        uVar22 = 1;
      }
      else {
        stack0xfffffffffffffd50 = (void *)0x0;
        local_2b8._0_8_ = uVar2;
        uVar15 = *(int *)(this + 4) + 3U >> 2;
        uVar18 = *(int *)(this + 8) + 3U >> 2;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar24;
        local_2a0 = auVar6 << 0x40;
        if (uVar23 >> 2 == 0) {
          if (uVar19 == 0) goto LAB_001040f2;
LAB_001040bb:
          local_2a8 = (void *)0x0;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar24;
          local_2a0 = auVar7 << 0x40;
          stack0xfffffffffffffd50 = (void *)uVar24;
        }
        else {
          local_2d8 = (void *)0x0;
          iVar9 = uVar19 * uVar20;
          local_2d0 = (void *)0x0;
          if (iVar9 == 0) goto LAB_001040bb;
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_2d8,SUB41(iVar9,0),(uint)(iVar9 == 1),
                     (_func_void_void_ptr_void_ptr_uint *)0x8,false);
          pvVar5 = local_2a8;
          pvVar3 = local_2d8;
          puVar14 = (undefined8 *)((long)local_2d8 + ((ulong)local_2d0 & 0xffffffff) * 8);
          puVar1 = puVar14 + (uint)(iVar9 - (int)local_2d0);
          for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
            *puVar14 = 0;
          }
          pvVar4 = (void *)local_2a0._0_8_;
          uVar22 = local_2d0._4_4_;
          local_2a8 = local_2d8;
          if ((uint)local_2b8._8_4_ < uVar15) {
            uVar15 = local_2b8._8_4_;
          }
          local_2d8 = pvVar5;
          local_2d0 = (void *)local_2a0._0_8_;
          uVar23 = uStack_2ac;
          if (uVar18 <= uStack_2ac) {
            uVar23 = uVar18;
          }
          local_2a0._4_4_ = uVar22;
          local_2a0._0_4_ = iVar9;
          if ((uVar15 != 0) && (uVar23 != 0)) {
            iVar17 = 0;
            iVar9 = 0;
            uVar19 = 0;
            do {
              uVar18 = 0;
              do {
                uVar21 = uVar18 + iVar9;
                uVar16 = uVar18 + iVar17;
                uVar18 = uVar18 + 1;
                *(undefined8 *)((long)pvVar3 + (ulong)uVar16 * 8) =
                     *(undefined8 *)((long)pvVar5 + (ulong)uVar21 * 8);
              } while (uVar18 < uVar15);
              uVar19 = uVar19 + 1;
              iVar9 = iVar9 + local_2b8._8_4_;
              iVar17 = iVar17 + uVar20;
            } while (uVar19 < uVar23);
          }
          stack0xfffffffffffffd50 = (void *)uVar24;
          if (pvVar5 != (void *)0x0) {
            free(pvVar5);
          }
        }
        uVar22 = 0;
        iVar9 = *(int *)(this + 0xc) * *(int *)(this + 0x10);
        if (local_2a0._12_4_ * local_2a0._8_4_ == iVar9) goto LAB_00104108;
      }
      if (local_2a8 != (void *)0x0) {
        free(local_2a8);
      }
      goto LAB_00104004;
    }
    puVar11 = local_288;
    do {
      *puVar11 = g_black_color;
      puVar11 = puVar11 + 1;
    } while (local_48 != puVar11);
    if (*(int *)(this + 0x10) != 0) {
      uVar23 = *(uint *)(this + 0xc);
      uVar20 = 0;
      uVar22 = 1;
      do {
        uVar19 = 0;
        if (uVar23 != 0) {
          do {
            cVar8 = unpack_block(*(undefined4 *)this,
                                 *(long *)(this + 0x20) +
                                 (ulong)((uVar23 * uVar20 + uVar19) * *(int *)(this + 0x1c)) * 8,
                                 local_288);
            iVar9 = *(int *)(this + 0x18);
            if (cVar8 == '\0') {
              uVar22 = 0;
            }
            uVar23 = *(uint *)(this + 0x14);
            uVar15 = iVar9 * uVar20;
            if (iVar9 != 0) {
              uVar18 = iVar9 + uVar15;
              puVar11 = local_288;
              if (uVar23 == 0) {
                do {
                  if (uVar18 == uVar15 + 1) break;
                  uVar15 = uVar15 + 2;
                } while (uVar18 != uVar15);
              }
              else {
                do {
                  puVar12 = puVar11;
                  uVar16 = uVar23 * uVar19;
                  do {
                    puVar13 = puVar12 + 1;
                    if ((uVar16 < *(uint *)param_1) && (uVar15 < *(uint *)(param_1 + 4))) {
                      *(undefined4 *)
                       (*(long *)(param_1 + 0x10) +
                       (ulong)(*(int *)(param_1 + 8) * uVar15 + uVar16) * 4) = *puVar12;
                    }
                    uVar16 = uVar16 + 1;
                    puVar12 = puVar13;
                  } while (puVar13 != puVar11 + uVar23);
                  uVar15 = uVar15 + 1;
                  puVar11 = puVar11 + (ulong)(uVar23 - 1) + 1;
                } while (uVar15 != uVar18);
              }
            }
            uVar23 = *(uint *)(this + 0xc);
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar23);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(this + 0x10));
      goto LAB_00104004;
    }
  }
  uVar22 = 1;
LAB_00104004:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00104572) */
/* WARNING: Removing unreachable block (ram,0x00104577) */
/* WARNING: Removing unreachable block (ram,0x0010457e) */
/* WARNING: Removing unreachable block (ram,0x001045ca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::gpu_image::unpack_hdr(basisu::imagef&) const */

undefined8 __thiscall basisu::gpu_image::unpack_hdr(gpu_image *this,imagef *param_1)

{
  int iVar1;
  uint uVar2;
  void *__ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  int iVar20;
  long in_FS_OFFSET;
  byte bVar21;
  undefined8 local_948 [289];
  long local_40;
  
  bVar21 = 0;
  uVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((0x17 < *(uint *)this) || ((0xffffffffff7fd9ffU >> ((ulong)*(uint *)this & 0x3f) & 1) != 0))
  goto LAB_0010459a;
  uVar19 = *(undefined8 *)(this + 4);
  uVar15 = *(uint *)param_1;
  uVar17 = (uint)uVar19;
  uVar18 = (uint)((ulong)uVar19 >> 0x20);
  if ((uVar17 == uVar15) &&
     ((uVar18 == *(uint *)(param_1 + 4) && (uVar15 == *(uint *)(param_1 + 8))))) {
LAB_00104525:
    uVar18 = *(uint *)(param_1 + 0x18);
    uVar17 = uVar15;
LAB_00104750:
    if (uVar18 != 0) {
      pauVar9 = *(undefined1 (**) [16])(param_1 + 0x10);
      pauVar14 = pauVar9 + uVar18;
      do {
        *pauVar9 = (undefined1  [16])0x0;
        pauVar9 = pauVar9 + 1;
      } while (pauVar14 != pauVar9);
    }
    if ((uVar17 != 0) && (*(int *)(param_1 + 4) != 0)) {
      puVar8 = local_948;
      for (lVar11 = 0x120; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + (ulong)bVar21 * -2 + 1;
      }
      if (*(int *)(this + 0x10) != 0) {
        uVar15 = *(uint *)(this + 0xc);
        uVar17 = 0;
        uVar19 = 1;
        do {
          uVar18 = 0;
          if (uVar15 != 0) {
            do {
              cVar6 = unpack_block_hdr(*(undefined4 *)this,
                                       *(long *)(this + 0x20) +
                                       (ulong)((uVar15 * uVar17 + uVar18) * *(int *)(this + 0x1c)) *
                                       8,local_948);
              iVar20 = *(int *)(this + 0x18);
              if (cVar6 == '\0') {
                uVar19 = 0;
              }
              iVar1 = *(int *)(this + 0x14);
              uVar15 = iVar20 * uVar17;
              uVar16 = iVar1 * uVar18;
              if (iVar20 != 0) {
                uVar13 = iVar20 + uVar15;
                if (iVar1 == 0) {
                  do {
                    if (uVar13 == uVar15 + 1) break;
                    uVar15 = uVar15 + 2;
                  } while (uVar13 != uVar15);
                }
                else {
                  uVar2 = *(uint *)param_1;
                  puVar8 = local_948;
                  uVar7 = uVar16;
                  puVar10 = local_948;
                  do {
                    do {
                      if (((uVar7 < uVar2) && (uVar15 < *(uint *)(param_1 + 4))) &&
                         (puVar12 = (undefined8 *)
                                    ((ulong)(*(int *)(param_1 + 8) * uVar15 + uVar7) * 0x10 +
                                    *(long *)(param_1 + 0x10)), puVar8 != puVar12)) {
                        uVar4 = puVar8[1];
                        *puVar12 = *puVar8;
                        puVar12[1] = uVar4;
                      }
                      uVar7 = uVar7 + 1;
                      puVar8 = puVar8 + 2;
                    } while (iVar1 + uVar16 != uVar7);
                    uVar15 = uVar15 + 1;
                    puVar8 = puVar10 + ((ulong)(iVar1 - 1) + 1) * 2;
                    uVar7 = uVar16;
                    puVar10 = puVar8;
                  } while (uVar13 != uVar15);
                }
              }
              uVar15 = *(uint *)(this + 0xc);
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar15);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(this + 0x10));
        goto LAB_0010459a;
      }
    }
  }
  else {
    if ((*(int *)(this + 4) != 0) && (*(int *)(this + 8) != 0)) {
      __ptr = *(void **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = 0;
      lVar11 = 0;
      iVar20 = uVar17 * uVar18;
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (iVar20 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((int)param_1 + 0x10,SUB41(iVar20,0),(uint)(iVar20 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x10,true);
        uVar15 = *(uint *)param_1;
        lVar11 = *(long *)(param_1 + 0x10);
        *(int *)(param_1 + 0x18) = iVar20;
      }
      uVar5 = _UNK_00105fd8;
      uVar4 = __LC4;
      iVar20 = 0;
      uVar16 = 0;
      do {
        uVar13 = 0;
        do {
          while ((puVar8 = (undefined8 *)((ulong)(uVar13 + iVar20) * 0x10 + lVar11), uVar13 < uVar15
                 && (uVar16 < *(uint *)(param_1 + 4)))) {
            puVar10 = (undefined8 *)
                      ((ulong)(*(int *)(param_1 + 8) * uVar16 + uVar13) * 0x10 + (long)__ptr);
            if (puVar10 != puVar8) {
              uVar3 = puVar10[1];
              *puVar8 = *puVar10;
              puVar8[1] = uVar3;
            }
            uVar13 = uVar13 + 1;
            if (uVar17 <= uVar13) goto LAB_001044fe;
          }
          uVar13 = uVar13 + 1;
          *puVar8 = uVar4;
          puVar8[1] = uVar5;
        } while (uVar13 < uVar17);
LAB_001044fe:
        uVar16 = uVar16 + 1;
        iVar20 = iVar20 + uVar17;
      } while (uVar16 < uVar18);
      *(uint *)(param_1 + 8) = uVar17;
      *(undefined8 *)param_1 = uVar19;
      if (__ptr != (void *)0x0) {
        free(__ptr);
        uVar15 = *(uint *)param_1;
        goto LAB_00104525;
      }
      uVar18 = *(uint *)(param_1 + 0x18);
      goto LAB_00104750;
    }
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  uVar19 = 1;
LAB_0010459a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar19;
}



/* basisu::create_ktx_texture_file(basisu::vector<unsigned char>&,
   basisu::vector<basisu::vector<basisu::gpu_image> > const&, bool) */

undefined8 basisu::create_ktx_texture_file(vector *param_1,vector *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  void *__src;
  byte bVar5;
  undefined7 uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [14];
  undefined1 auVar10 [16];
  int iVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong __n;
  undefined8 uVar18;
  size_t sVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  uint uVar23;
  undefined2 uVar24;
  ulong uVar25;
  int *piVar26;
  uint uVar27;
  long lVar28;
  int iVar29;
  long in_FS_OFFSET;
  uint local_ac;
  uint local_90;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined1 local_68 [4];
  ulong uStack_64;
  undefined1 local_58 [40];
  
  local_90 = *(uint *)(param_2 + 8);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = 0;
  if ((local_90 != 0) &&
     ((!param_3 ||
      ((local_90 * -0x55555555 >> 1 | (uint)((local_90 * -0x55555555 & 1) != 0) << 0x1f) <
       0x2aaaaaab)))) {
    puVar21 = *(undefined8 **)param_2;
    uVar27 = 0;
    iVar11 = -1;
    uVar20 = 0;
    uVar23 = 0;
    uVar14 = 0;
    do {
      uVar2 = *(uint *)(puVar21 + 1);
      if (uVar2 == 0) goto switchD_001048c8_caseD_4;
      piVar4 = (int *)*puVar21;
      if (uVar27 == 0) {
        uVar23 = piVar4[1];
        uVar20 = piVar4[2];
        iVar11 = *piVar4;
      }
      else if (((piVar4[1] != uVar23) || (piVar4[2] != uVar20)) || (uVar2 != uVar14))
      goto switchD_001048c8_caseD_4;
      uVar14 = 0;
      piVar26 = piVar4;
      while( true ) {
        if (iVar11 != *piVar26) goto switchD_001048c8_caseD_4;
        uVar14 = uVar14 + 1;
        if (uVar2 == uVar14) break;
        bVar5 = (byte)uVar14 & 0x1f;
        uVar15 = uVar23 >> bVar5;
        if (uVar23 >> bVar5 == 0) {
          uVar15 = 1;
        }
        if (piVar26[0xd] != uVar15) goto switchD_001048c8_caseD_4;
        bVar5 = (byte)uVar14 & 0x1f;
        uVar15 = (uint)piVar4[2] >> bVar5;
        if ((uint)piVar4[2] >> bVar5 == 0) {
          uVar15 = 1;
        }
        puVar1 = (uint *)(piVar26 + 0xe);
        piVar26 = piVar26 + 0xc;
        if (*puVar1 != uVar15) goto switchD_001048c8_caseD_4;
      }
      uVar27 = uVar27 + 1;
      puVar21 = puVar21 + 2;
      uVar14 = uVar2;
    } while (local_90 != uVar27);
    switch(iVar11) {
    case 0:
    case 1:
      local_68._0_2_ = 0x1907;
      uVar24 = 0x8d64;
      break;
    case 2:
      local_68._0_2_ = 0x1907;
      uVar24 = 0x9274;
      break;
    case 3:
      local_68._0_2_ = 0x1908;
      uVar24 = 0x9278;
      break;
    default:
switchD_001048c8_caseD_4:
      uVar18 = 0;
      goto LAB_0010483c;
    case 5:
    case 0x18:
    case 0x19:
      local_68._0_2_ = 0x1907;
      uVar24 = 0x83f0;
      break;
    case 6:
      local_68._0_2_ = 0x1908;
      uVar24 = 0x83f3;
      break;
    case 7:
      local_68._0_2_ = 0x1903;
      uVar24 = 0x8dbb;
      break;
    case 8:
      local_68._0_2_ = 0x8227;
      uVar24 = 0x8dbd;
      break;
    case 9:
      local_68._0_2_ = 0x1908;
      uVar24 = 0x8e8e;
      break;
    case 10:
      local_68._0_2_ = 0x1908;
      uVar24 = 0x8e8f;
      break;
    case 0xb:
      local_68._0_2_ = 0x1908;
      uVar24 = 0x8e8c;
      break;
    case 0xc:
    case 0xd:
    case 0x17:
      local_68._0_2_ = 0x1908;
      uVar24 = 0x93b0;
      break;
    case 0xe:
      local_68._0_2_ = 0x1907;
      uVar24 = 0x8c00;
      break;
    case 0xf:
      local_68._0_2_ = 0x1908;
      uVar24 = 0x8c02;
      break;
    case 0x10:
      local_68._0_2_ = 0x1907;
      uVar24 = 0x8c92;
      break;
    case 0x11:
      local_68._0_2_ = 0x1908;
      uVar24 = 0x87ee;
      break;
    case 0x12:
      local_68._0_2_ = 0x1907;
      uVar24 = 0x86b0;
      break;
    case 0x13:
      local_68._0_2_ = 0x1908;
      uVar24 = 0x9138;
      break;
    case 0x14:
      local_68._0_2_ = 0x1903;
      uVar24 = 0x9270;
      break;
    case 0x15:
      local_68._0_2_ = 0x8227;
      uVar24 = 0x9272;
      break;
    case 0x16:
      local_68._0_2_ = 0x1908;
      uVar24 = 0x94cc;
    }
    stack0xffffffffffffff8d = SUB1611((undefined1  [16])0x0,5);
    local_78._0_5_ = 0x100000000;
    auVar10 = _local_78;
    uStack_70._4_2_ = uVar24;
    auVar9 = _local_78;
    stack0xffffffffffffff9a = SUB1614((undefined1  [16])0x0,2);
    uVar16 = (((((ulong)CONCAT51(CONCAT41(uVar20 >> 0x18,(char)(uVar20 >> 0x10)),(char)(uVar20 >> 8)
                                ) << 8 | (ulong)(uVar20 & 0xff)) << 8 | (ulong)(uVar23 >> 0x18)) <<
               8 | (ulong)(byte)(uVar23 >> 0x10)) << 8 | (ulong)(byte)(uVar23 >> 8)) << 8;
    uStack_64 = uVar16 | uVar23 & 0xff;
    if (param_3) {
      local_90 = local_90 / 6;
    }
    if (local_90 == 1) {
      local_ac = 1;
      local_90 = 0;
    }
    else {
      local_ac = 1;
      if (local_90 != 0) {
        local_ac = local_90;
      }
    }
    uVar22 = (ulong)*(uint *)(param_1 + 8);
    auVar8._4_8_ = 0;
    auVar8._0_4_ = uVar2;
    local_58._0_12_ = auVar8 << 0x40;
    uVar6 = SUB127(local_58._0_12_,5);
    local_58[4] = (-!param_3 & 0xfbU) + 6;
    local_58._0_4_ = local_90;
    auVar7._5_7_ = uVar6;
    auVar7._0_5_ = local_58._0_5_;
    uVar23 = (-(uint)!param_3 & 0xfffffffb) + 6;
    uVar20 = (uint)param_1;
    if (uVar22 + 0x40 >> 0x20 == 0) {
      uVar14 = *(uint *)(param_1 + 8) + 0x40;
      if (*(uint *)(param_1 + 0xc) < uVar14) {
        basisu::elemental_vector::increase_capacity
                  (uVar20,SUB41(uVar14,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
        sVar19 = (size_t)(uVar14 - *(uint *)(param_1 + 8));
        uVar13 = (ulong)*(uint *)(param_1 + 8);
      }
      else {
        sVar19 = 0x40;
        uVar13 = uVar22;
      }
      memset((void *)(uVar13 + *(long *)param_1),0,sVar19);
      *(uint *)(param_1 + 8) = uVar14;
    }
    lVar28 = 0;
    local_78 = auVar10._0_8_;
    uStack_70 = (ulong)auVar9._8_6_;
    puVar21 = (undefined8 *)(uVar22 + *(long *)param_1);
    local_58._0_8_ = auVar7._0_8_;
    local_58._12_4_ = 0;
    local_58._8_4_ = uVar2;
    *puVar21 = 0xbb31312058544bab;
    puVar21[1] = 0x40302010a1a0a0d;
    puVar21[2] = local_78;
    puVar21[3] = uStack_70;
    puVar21[4] = _local_68;
    puVar21[5] = uVar16 >> 0x20;
    puVar21[6] = local_58._0_8_;
    puVar21[7] = local_58._8_8_;
    do {
      lVar17 = **(long **)param_2 + lVar28 * 0x30;
      iVar11 = *(int *)(lVar17 + 0xc) * *(int *)(lVar17 + 0x10) * *(int *)(lVar17 + 0x1c) * 8;
      if ((uVar23 == 1) || (1 < local_90)) {
        iVar11 = iVar11 * local_ac * uVar23;
      }
      uVar16 = (ulong)*(uint *)(param_1 + 8);
      if (uVar16 + 4 < 0x100000000) {
        uVar14 = *(uint *)(param_1 + 8) + 4;
        if (*(uint *)(param_1 + 0xc) < uVar14) {
          basisu::elemental_vector::increase_capacity
                    (uVar20,SUB41(uVar14,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
          sVar19 = (size_t)(uVar14 - *(uint *)(param_1 + 8));
          uVar22 = (ulong)*(uint *)(param_1 + 8);
        }
        else {
          sVar19 = 4;
          uVar22 = uVar16;
        }
        memset((void *)(uVar22 + *(long *)param_1),0,sVar19);
        *(uint *)(param_1 + 8) = uVar14;
      }
      iVar29 = 0;
      uVar22 = 0;
      *(int *)(*(long *)param_1 + uVar16) = iVar11;
      do {
        uVar14 = 0;
        do {
          while( true ) {
            uVar16 = (ulong)(uVar14 + iVar29);
            if (!param_3) {
              uVar16 = uVar22;
            }
            lVar17 = lVar28 * 0x30 + *(long *)(uVar16 * 0x10 + *(long *)param_2);
            uVar27 = *(int *)(lVar17 + 0xc) * *(int *)(lVar17 + 0x10) * *(int *)(lVar17 + 0x1c) * 8;
            uVar16 = (ulong)uVar27;
            if (uVar16 == 0) break;
            __src = *(void **)(lVar17 + 0x20);
            uVar15 = *(uint *)(param_1 + 8);
            uVar13 = (ulong)uVar15;
            if (uVar16 + uVar13 < 0x100000000) {
              uVar12 = uVar27 + uVar15;
              if (!CARRY4(uVar27,uVar15)) {
                __n = uVar16;
                uVar25 = uVar13;
                if (*(uint *)(param_1 + 0xc) < uVar12) {
                  basisu::elemental_vector::increase_capacity
                            (uVar20,SUB41(uVar12,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false
                            );
                  __n = (ulong)(uVar12 - *(uint *)(param_1 + 8));
                  uVar25 = (ulong)*(uint *)(param_1 + 8);
                }
                memset((void *)(uVar25 + *(long *)param_1),0,__n);
              }
              *(uint *)(param_1 + 8) = uVar12;
            }
            uVar14 = uVar14 + 1;
            memcpy((void *)(*(long *)param_1 + uVar13),__src,uVar16);
            if (uVar23 <= uVar14) goto LAB_00104c55;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar23);
LAB_00104c55:
        uVar22 = uVar22 + 1;
        iVar29 = iVar29 + 6;
      } while ((uint)uVar22 < local_ac);
      lVar28 = lVar28 + 1;
    } while ((uint)lVar28 < uVar2);
    uVar18 = 1;
  }
LAB_0010483c:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::does_dds_support_format(basisu::texture_format) */

bool basisu::does_dds_support_format(int param_1)

{
  if (param_1 < 0xc) {
    return 4 < param_1;
  }
  return param_1 - 0x18U < 2;
}



/* basisu::write_dds_file(basisu::vector<unsigned char>&,
   basisu::vector<basisu::vector<basisu::gpu_image> > const&, bool, bool) */

undefined8 basisu::write_dds_file(vector *param_1,vector *param_2,bool param_3,bool param_4)

{
  return 0;
}



/* basisu::write_dds_file(char const*, basisu::vector<basisu::vector<basisu::gpu_image> > const&,
   bool, bool) */

undefined8 basisu::write_dds_file(char *param_1,vector *param_2,bool param_3,bool param_4)

{
  return 0;
}



/* basisu::read_uncompressed_dds_file(char const*, basisu::vector<basisu::image>&,
   basisu::vector<basisu::imagef>&) */

undefined8 basisu::read_uncompressed_dds_file(char *param_1,vector *param_2,vector *param_3)

{
  return 0;
}



/* basisu::write_compressed_texture_file(char const*,
   basisu::vector<basisu::vector<basisu::gpu_image> > const&, bool, bool) */

undefined4
basisu::write_compressed_texture_file(char *param_1,vector *param_2,bool param_3,bool param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  bool extraout_DL;
  void **ppvVar14;
  ulong *puVar15;
  long *plVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  void *__ptr;
  char cVar20;
  char *pcVar21;
  ulong *puVar22;
  long *plVar23;
  byte *pbVar24;
  long *plVar25;
  ulong uVar26;
  int iVar27;
  long in_FS_OFFSET;
  long *plStack_120;
  ulong uStack_118;
  long lStack_108;
  void *local_b8;
  ulong local_b0;
  void **local_a8;
  void *local_a0;
  void *local_98 [2];
  ulong *local_88;
  ulong local_80;
  ulong local_78 [2];
  ulong *local_68;
  ulong local_60;
  ulong local_58 [5];
  ulong uVar13;
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = local_98;
  if (param_1 == (char *)0x0) {
    pcVar21 = "basic_string: construction from null is not valid";
    std::__throw_logic_error("basic_string: construction from null is not valid");
    lStack_108 = *(long *)(in_FS_OFFSET + 0x28);
    plStack_120 = (long *)0x0;
    uStack_118 = 0;
    basisu::elemental_vector::increase_capacity
              ((uint)&plStack_120,true,1,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
    uVar8 = *(undefined4 *)(param_2 + 8);
    plVar16 = plStack_120 + (uStack_118 & 0xffffffff) * 2;
    *plVar16 = 0;
    plVar16[1] = 0;
    basisu::elemental_vector::increase_capacity
              ((uint)plVar16,SUB41(uVar8,0),0,(_func_void_void_ptr_void_ptr_uint *)0x30,true);
    uVar9 = *(uint *)(param_2 + 8);
    puVar3 = *(undefined4 **)param_2;
    *(uint *)(plVar16 + 1) = uVar9;
    if (uVar9 != 0) {
      puVar17 = (undefined4 *)*plVar16;
      puVar18 = puVar3;
      do {
        uVar5 = *(undefined8 *)(puVar18 + 1);
        uVar6 = *(undefined8 *)(puVar18 + 3);
        *puVar17 = *puVar18;
        uVar4 = *(undefined8 *)(puVar18 + 5);
        puVar19 = puVar18 + 0xc;
        *(undefined8 *)(puVar17 + 1) = uVar5;
        *(undefined8 *)(puVar17 + 3) = uVar6;
        *(undefined8 *)(puVar17 + 5) = uVar4;
        uVar8 = puVar18[7];
        *(undefined8 *)(puVar17 + 8) = 0;
        puVar17[7] = uVar8;
        uVar8 = puVar18[10];
        *(undefined8 *)(puVar17 + 10) = 0;
        basisu::elemental_vector::increase_capacity
                  ((int)puVar17 + 0x20,SUB41(uVar8,0),0,(_func_void_void_ptr_void_ptr_uint *)0x8,
                   false);
        uVar2 = puVar18[10];
        puVar17[10] = uVar2;
        if ((*(void **)(puVar17 + 8) != (void *)0x0) && (*(void **)(puVar18 + 8) != (void *)0x0)) {
          memcpy(*(void **)(puVar17 + 8),*(void **)(puVar18 + 8),(ulong)uVar2 << 3);
        }
        puVar17 = puVar17 + 0xc;
        puVar18 = puVar19;
      } while (puVar19 != puVar3 + (ulong)uVar9 * 0xc);
    }
    uStack_118 = CONCAT44(uStack_118._4_4_,(int)uStack_118 + 1);
    uVar8 = write_compressed_texture_file(pcVar21,(vector *)&plStack_120,false,extraout_DL);
    if (plStack_120 != (long *)0x0) {
      plVar25 = plStack_120 + (uStack_118 & 0xffffffff) * 2;
      plVar16 = plVar25;
      for (plVar23 = plStack_120; plVar23 != plVar25; plVar23 = plVar23 + 2) {
        pvVar10 = (void *)*plVar23;
        if (pvVar10 != (void *)0x0) {
          __ptr = (void *)((ulong)*(uint *)(plVar23 + 1) * 0x30 + (long)pvVar10);
          if (pvVar10 != __ptr) {
            do {
              if (*(void **)((long)pvVar10 + 0x20) != (void *)0x0) {
                free(*(void **)((long)pvVar10 + 0x20));
              }
              pvVar10 = (void *)((long)pvVar10 + 0x30);
            } while (__ptr != pvVar10);
            __ptr = (void *)*plVar23;
          }
          free(__ptr);
        }
        plVar16 = plStack_120;
      }
      free(plVar16);
    }
    if (lStack_108 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pvVar10 = (void *)strlen(param_1);
  local_b8 = pvVar10;
  if (pvVar10 < (void *)0x10) {
    ppvVar14 = local_98;
    if (pvVar10 == (void *)0x1) {
      local_98[0] = (void *)CONCAT71(local_98[0]._1_7_,*param_1);
    }
    else if (pvVar10 != (void *)0x0) goto LAB_001050e1;
  }
  else {
    local_a8 = (void **)std::__cxx11::string::_M_create((ulong *)&local_a8,(ulong)&local_b8);
    local_98[0] = local_b8;
    ppvVar14 = local_a8;
LAB_001050e1:
    memcpy(ppvVar14,param_1,(size_t)pvVar10);
    ppvVar14 = local_a8;
  }
  *(undefined1 *)((long)ppvVar14 + (long)local_b8) = 0;
  cVar20 = (char)&local_a8;
  local_a0 = local_b8;
  lVar11 = std::__cxx11::string::rfind(cVar20,0x2f);
  if (lVar11 == -1) {
    lVar11 = std::__cxx11::string::rfind(cVar20,0x2e);
    if (lVar11 != -1) {
      iVar7 = -1;
      goto LAB_00104f0e;
    }
  }
  else {
    iVar7 = (int)lVar11;
    lVar11 = std::__cxx11::string::rfind(cVar20,0x2e);
    if (lVar11 == -1) {
      iVar27 = -1;
    }
    else {
LAB_00104f0e:
      iVar27 = (int)lVar11;
    }
    if (iVar7 < iVar27) {
      puVar15 = local_58;
      local_68 = puVar15;
      std::__cxx11::string::_M_construct<char*>(&local_68,local_a8,(long)local_a0 + (long)local_a8);
      if (iVar27 == -2) {
        local_60 = 0;
        *(undefined1 *)local_68 = 0;
      }
      else if (iVar27 != -1) {
        std::__cxx11::string::_M_erase((ulong)&local_68,0);
      }
      uVar26 = local_60;
      local_88 = local_78;
      local_80 = local_60;
      if (local_68 == puVar15) {
        uVar1 = local_60 + 1;
        puVar22 = local_88;
        if (7 < (uint)uVar1) {
          uVar12 = 0;
          do {
            uVar9 = (int)uVar12 + 8;
            uVar13 = (ulong)uVar9;
            *(undefined8 *)((long)local_88 + uVar12) = *(undefined8 *)((long)puVar15 + uVar12);
            uVar12 = uVar13;
          } while (uVar9 < ((uint)uVar1 & 0xfffffff8));
          puVar22 = (ulong *)((long)local_88 + uVar13);
          puVar15 = (ulong *)(uVar13 + (long)puVar15);
        }
        lVar11 = 0;
        if ((uVar1 & 4) != 0) {
          *(int *)puVar22 = (int)*puVar15;
          lVar11 = 4;
        }
        if ((uVar1 & 2) != 0) {
          *(undefined2 *)((long)puVar22 + lVar11) = *(undefined2 *)((long)puVar15 + lVar11);
          lVar11 = lVar11 + 2;
        }
        if ((uVar1 & 1) != 0) {
          *(undefined1 *)((long)puVar22 + lVar11) = *(undefined1 *)((long)puVar15 + lVar11);
        }
      }
      else {
        local_88 = local_68;
        local_78[0] = local_58[0];
      }
      puVar15 = (ulong *)(uVar26 + (long)local_88);
      goto LAB_00104f42;
    }
  }
  puVar15 = local_78;
  local_78[0] = local_78[0] & 0xffffffffffffff00;
  local_80 = 0;
  local_88 = puVar15;
LAB_00104f42:
  uVar26 = 0;
  local_68 = local_58;
  std::__cxx11::string::_M_construct<char*>(&local_68,local_88,puVar15);
  if (local_60 != 0) {
    do {
      pbVar24 = (byte *)((long)local_68 + uVar26);
      uVar26 = uVar26 + 1;
      iVar7 = tolower((uint)*pbVar24);
      *pbVar24 = (byte)iVar7;
    } while (uVar26 < local_60);
  }
  if (local_88 != local_78) {
    operator_delete(local_88,local_78[0] + 1);
  }
  if (local_a8 != local_98) {
    operator_delete(local_a8,(long)local_98[0] + 1);
  }
  uVar8 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  if (local_60 == 3) {
    if (((short)*local_68 == 0x746b) && (*(char *)((long)local_68 + 2) == 'x')) {
      uVar8 = create_ktx_texture_file((vector *)&local_b8,param_2,param_3);
      if ((char)uVar8 != '\0') {
        if ((int)local_b0 == 0) {
          uVar8 = basisu::write_data_to_file(param_1,&_LC10,0);
        }
        else {
          uVar8 = basisu::write_data_to_file(param_1,local_b8,local_b0 & 0xffffffff);
        }
      }
      if (local_b8 != (void *)0x0) {
        free(local_b8);
      }
    }
    else {
      uVar8 = 0;
    }
  }
  if (local_68 != local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::write_compressed_texture_file(char const*, basisu::vector<basisu::gpu_image> const&,
   bool) */

undefined4 basisu::write_compressed_texture_file(char *param_1,vector *param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined4 *puVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *__ptr;
  long *plVar13;
  long *plVar14;
  long in_FS_OFFSET;
  long *local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (long *)0x0;
  local_50 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_58,true,1,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
  uVar7 = *(undefined4 *)(param_2 + 8);
  plVar8 = local_58 + (local_50 & 0xffffffff) * 2;
  *plVar8 = 0;
  plVar8[1] = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)plVar8,SUB41(uVar7,0),0,(_func_void_void_ptr_void_ptr_uint *)0x30,true);
  uVar1 = *(uint *)(param_2 + 8);
  puVar3 = *(undefined4 **)param_2;
  *(uint *)(plVar8 + 1) = uVar1;
  if (uVar1 != 0) {
    puVar9 = (undefined4 *)*plVar8;
    puVar11 = puVar3;
    do {
      uVar5 = *(undefined8 *)(puVar11 + 1);
      uVar6 = *(undefined8 *)(puVar11 + 3);
      *puVar9 = *puVar11;
      uVar4 = *(undefined8 *)(puVar11 + 5);
      puVar12 = puVar11 + 0xc;
      *(undefined8 *)(puVar9 + 1) = uVar5;
      *(undefined8 *)(puVar9 + 3) = uVar6;
      *(undefined8 *)(puVar9 + 5) = uVar4;
      uVar7 = puVar11[7];
      *(undefined8 *)(puVar9 + 8) = 0;
      puVar9[7] = uVar7;
      uVar7 = puVar11[10];
      *(undefined8 *)(puVar9 + 10) = 0;
      basisu::elemental_vector::increase_capacity
                ((int)puVar9 + 0x20,SUB41(uVar7,0),0,(_func_void_void_ptr_void_ptr_uint *)0x8,false)
      ;
      uVar2 = puVar11[10];
      puVar9[10] = uVar2;
      if ((*(void **)(puVar9 + 8) != (void *)0x0) && (*(void **)(puVar11 + 8) != (void *)0x0)) {
        memcpy(*(void **)(puVar9 + 8),*(void **)(puVar11 + 8),(ulong)uVar2 << 3);
      }
      puVar9 = puVar9 + 0xc;
      puVar11 = puVar12;
    } while (puVar12 != puVar3 + (ulong)uVar1 * 0xc);
  }
  local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
  uVar7 = write_compressed_texture_file(param_1,(vector *)&local_58,false,param_3);
  if (local_58 != (long *)0x0) {
    plVar14 = local_58 + (local_50 & 0xffffffff) * 2;
    plVar8 = plVar14;
    for (plVar13 = local_58; plVar13 != plVar14; plVar13 = plVar13 + 2) {
      pvVar10 = (void *)*plVar13;
      if (pvVar10 != (void *)0x0) {
        __ptr = (void *)((ulong)*(uint *)(plVar13 + 1) * 0x30 + (long)pvVar10);
        if (pvVar10 != __ptr) {
          do {
            if (*(void **)((long)pvVar10 + 0x20) != (void *)0x0) {
              free(*(void **)((long)pvVar10 + 0x20));
            }
            pvVar10 = (void *)((long)pvVar10 + 0x30);
          } while (__ptr != pvVar10);
          __ptr = (void *)*plVar13;
        }
        free(__ptr);
      }
      plVar8 = local_58;
    }
    free(plVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::write_compressed_texture_file(char const*, basisu::gpu_image const&, bool) */

undefined4 basisu::write_compressed_texture_file(char *param_1,gpu_image *param_2,bool param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  void *__ptr;
  long *plVar10;
  undefined4 *puVar11;
  long in_FS_OFFSET;
  long *local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (long *)0x0;
  local_50 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_58,true,1,(_func_void_void_ptr_void_ptr_uint *)0x10,false);
  plVar10 = local_58;
  plVar7 = local_58 + (local_50 & 0xffffffff) * 2;
  plVar8 = plVar7 + (ulong)(1 - (int)local_50) * 2;
  for (; plVar7 != plVar8; plVar7 = plVar7 + 2) {
    *plVar7 = 0;
    plVar7[1] = 0;
  }
  local_50 = CONCAT44(local_50._4_4_,1);
  uVar1 = *(uint *)(local_58 + 1);
  if (*(uint *)((long)local_58 + 0xc) <= uVar1) {
    basisu::elemental_vector::increase_capacity
              ((uint)local_58,(bool)((char)uVar1 + '\x01'),1,
               (_func_void_void_ptr_void_ptr_uint *)0x30,true);
    uVar1 = *(uint *)(plVar10 + 1);
  }
  uVar4 = *(undefined8 *)(param_2 + 4);
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  puVar11 = (undefined4 *)((ulong)uVar1 * 0x30 + *plVar10);
  *puVar11 = *(undefined4 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(puVar11 + 1) = uVar4;
  *(undefined8 *)(puVar11 + 3) = uVar5;
  *(undefined8 *)(puVar11 + 5) = uVar3;
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(puVar11 + 8) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  puVar11[7] = uVar6;
  *(undefined8 *)(puVar11 + 10) = 0;
  basisu::elemental_vector::increase_capacity
            ((int)puVar11 + 0x20,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x8,false);
  uVar1 = *(uint *)(param_2 + 0x28);
  puVar11[10] = uVar1;
  if ((*(void **)(puVar11 + 8) != (void *)0x0) && (*(void **)(param_2 + 0x20) != (void *)0x0)) {
    memcpy(*(void **)(puVar11 + 8),*(void **)(param_2 + 0x20),(ulong)uVar1 * 8);
  }
  *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
  uVar6 = write_compressed_texture_file(param_1,(vector *)&local_58,false,param_3);
  if (local_58 != (long *)0x0) {
    plVar8 = local_58 + (local_50 & 0xffffffff) * 2;
    plVar7 = plVar8;
    for (plVar10 = local_58; plVar10 != plVar8; plVar10 = plVar10 + 2) {
      pvVar9 = (void *)*plVar10;
      if (pvVar9 != (void *)0x0) {
        __ptr = (void *)((ulong)*(uint *)(plVar10 + 1) * 0x30 + (long)pvVar9);
        if (pvVar9 != __ptr) {
          do {
            if (*(void **)((long)pvVar9 + 0x20) != (void *)0x0) {
              free(*(void **)((long)pvVar9 + 0x20));
            }
            pvVar9 = (void *)((long)pvVar9 + 0x30);
          } while (__ptr != pvVar9);
          __ptr = (void *)*plVar10;
        }
        free(__ptr);
      }
      plVar7 = local_58;
    }
    free(plVar7);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* basisu::write_3dfx_out_file(char const*, basisu::gpu_image const&) */

undefined8 basisu::write_3dfx_out_file(char *param_1,gpu_image *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  FILE *__s;
  undefined4 extraout_var;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  ulong local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0x54455843;
  uVar1 = *(int *)(param_2 + 0xc) * 8;
  uVar2 = *(int *)(param_2 + 0x10) * 4;
  local_30 = ((((ulong)CONCAT61(CONCAT51(CONCAT41(uVar2 >> 0x18,(char)(uVar2 >> 0x10)),
                                         (char)(uVar2 >> 8)),(char)uVar2) << 8 |
               (ulong)(uVar1 >> 0x18)) << 8 | (ulong)(byte)(uVar1 >> 0x10)) << 8 |
             (ulong)(byte)(uVar1 >> 8)) << 8 | (ulong)(byte)uVar1;
  __s = fopen64(param_1,"wb");
  if (__s == (FILE *)0x0) {
    uVar4 = 0;
  }
  else {
    fwrite(&local_38,0x10,1,__s);
    fwrite(*(void **)(param_2 + 0x20),
           (ulong)(uint)(*(int *)(param_2 + 0xc) * *(int *)(param_2 + 0x10) *
                         *(int *)(param_2 + 0x1c) * 8),1,__s);
    iVar3 = fclose(__s);
    uVar4 = CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),iVar3 != -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::write_astc_file(char const*, void const*, unsigned int, unsigned int, unsigned int,
   unsigned int) */

undefined4
basisu::write_astc_file
          (char *param_1,void *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong __n;
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong __n_00;
  long in_FS_OFFSET;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined *)0x0;
  local_50 = 0;
  uVar8 = (uint)&local_58;
  basisu::elemental_vector::increase_capacity
            (uVar8,true,1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
  local_58[local_50 & 0xffffffff] = 0x13;
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = 0xab;
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = 0xa1;
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = 0x5c;
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = (char)param_3;
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = (char)param_4;
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = 1;
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = (char)param_5;
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = (char)(param_5 >> 8);
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = (char)(param_5 >> 0x10);
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = (char)param_6;
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = (char)(param_6 >> 8);
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = (char)(param_6 >> 0x10);
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = 1;
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = 0;
  uVar1 = (uint)local_50 + 1;
  if (local_50._4_4_ <= uVar1) {
    cVar2 = (char)(uint)local_50;
    local_50._0_4_ = uVar1;
    basisu::elemental_vector::increase_capacity
              (uVar8,(bool)(cVar2 + '\x02'),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = (uint)local_50;
  }
  local_50._0_4_ = uVar1;
  local_58[(uint)local_50] = 0;
  local_50._0_4_ = (uint)local_50 + 1;
  uVar6 = (ulong)(uint)local_50;
  uVar3 = (((param_4 - 1) + param_6) / param_4) * (((param_3 - 1) + param_5) / param_3) * 0x10;
  __n_00 = (ulong)uVar3;
  uVar1 = (uint)local_50;
  if (__n_00 + uVar6 >> 0x20 == 0) {
    uVar4 = uVar3 + (uint)local_50;
    if ((uVar4 != (uint)local_50) && (uVar1 = uVar4, !CARRY4(uVar3,(uint)local_50))) {
      __n = __n_00;
      uVar9 = uVar6;
      if (local_50._4_4_ < uVar4) {
        basisu::elemental_vector::increase_capacity
                  (uVar8,SUB41(uVar4,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
        __n = (ulong)(uVar4 - (uint)local_50);
        uVar9 = (ulong)(uint)local_50;
      }
      memset(local_58 + uVar9,0,__n);
    }
  }
  local_50._0_4_ = uVar1;
  memcpy(local_58 + uVar6,param_2,__n_00);
  uVar6 = (ulong)(uint)local_50;
  puVar7 = local_58;
  if ((uint)local_50 == 0) {
    uVar6 = 0;
    puVar7 = &_LC10;
  }
  uVar5 = basisu::write_data_to_file(param_1,puVar7,uVar6);
  if (local_58 != (undefined *)0x0) {
    free(local_58);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* basisu::vector<basisu::vec<4u, float> >::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::vec<4u,float>>::object_mover(void *param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  pvVar2 = (void *)((ulong)param_3 * 0x10 + (long)param_2);
  if (param_2 != pvVar2) {
    uVar4 = 0;
    lVar3 = 0;
    do {
      uVar1 = ((undefined8 *)((long)param_2 + lVar3))[1];
      uVar4 = uVar4 + 1;
      *(undefined8 *)((long)param_1 + lVar3) = *(undefined8 *)((long)param_2 + lVar3);
      ((undefined8 *)((long)param_1 + lVar3))[1] = uVar1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < ((ulong)((long)pvVar2 + (-0x10 - (long)param_2)) >> 4) + 1);
  }
  return;
}



/* basisu::vector<basisu::gpu_image>::object_mover(void*, void*, unsigned int) */

void basisu::vector<basisu::gpu_image>::object_mover(void *param_1,void *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)((ulong)param_3 * 0x30 + (long)param_2);
  if ((undefined4 *)param_2 != puVar6) {
    do {
                    /* WARNING: Load size is inaccurate */
      uVar4 = *(undefined8 *)((long)param_2 + 4);
      uVar5 = *(undefined8 *)((long)param_2 + 0xc);
      *(undefined4 *)param_1 = *param_2;
      uVar3 = *(undefined8 *)((long)param_2 + 0x14);
      *(undefined8 *)((long)param_1 + 4) = uVar4;
      *(undefined8 *)((long)param_1 + 0xc) = uVar5;
      *(undefined8 *)((long)param_1 + 0x14) = uVar3;
      uVar1 = *(undefined4 *)((long)param_2 + 0x1c);
      *(undefined8 *)((long)param_1 + 0x20) = 0;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
      uVar1 = *(undefined4 *)((long)param_2 + 0x28);
      *(undefined8 *)((long)param_1 + 0x28) = 0;
      basisu::elemental_vector::increase_capacity
                ((int)param_1 + 0x20,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x8,false
                );
      uVar2 = *(uint *)((long)param_2 + 0x28);
      *(uint *)((long)param_1 + 0x28) = uVar2;
      if (*(void **)((long)param_1 + 0x20) == (void *)0x0) {
LAB_00105e4e:
        if (*(void **)((long)param_2 + 0x20) != (void *)0x0) {
          free(*(void **)((long)param_2 + 0x20));
        }
      }
      else if (*(void **)((long)param_2 + 0x20) != (void *)0x0) {
        memcpy(*(void **)((long)param_1 + 0x20),*(void **)((long)param_2 + 0x20),(ulong)uVar2 << 3);
        goto LAB_00105e4e;
      }
      param_2 = (void *)((long)param_2 + 0x30);
      param_1 = (void *)((long)param_1 + 0x30);
    } while (puVar6 != (undefined4 *)param_2);
  }
  return;
}



/* basisu::unpack_etc2_eac(void const*, basisu::color_rgba*) */

void basisu::_GLOBAL__sub_I_unpack_etc2_eac(void)

{
  g_black_color = 0xff000000;
  return;
}


