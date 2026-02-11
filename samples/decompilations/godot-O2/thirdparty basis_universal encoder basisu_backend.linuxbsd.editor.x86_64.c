
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::verify(bool, int) [clone .part.0] */

void basisu::verify(bool param_1,int param_2)

{
  undefined7 in_register_00000039;
  
  __fprintf_chk(_stderr,2,"ERROR: basisu_backend: verify() failed at line %i!\n",
                CONCAT71(in_register_00000039,param_1) & 0xffffffff);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* basisu::etc_block::get_block_colors(basisu::color_rgba*, unsigned int) const [clone .isra.0] */

void __thiscall
basisu::etc_block::get_block_colors(etc_block *this,color_rgba *param_1,uint param_2)

{
  sbyte sVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  color_rgba cVar10;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)this[3] & 2) == 0) {
    if (param_2 != 0) {
      local_24 = basisu::etc_block::unpack_color4
                           ((ushort)(((byte)*this & 0xf) << 8) |
                            (ushort)(((byte)this[1] & 0xf) << 4) | (byte)this[2] & 0xf,true,0xff);
      goto LAB_0010029a;
    }
    local_24 = basisu::etc_block::unpack_color4
                         (((byte)*this & 0xf0) << 4 | (byte)this[1] & 0xf0 |
                          (ushort)((int)(uint)(byte)this[2] >> 4),true,0xff);
LAB_0010008e:
    sVar1 = 5;
  }
  else {
    if (param_2 == 0) {
      basisu::etc_block::unpack_color5
                ((color_rgba *)&local_24,
                 (ushort)(((int)(uint)(byte)this[1] >> 3) << 5) |
                 (ushort)(((int)(uint)(byte)*this >> 3) << 10) |
                 (ushort)((int)(uint)(byte)this[2] >> 3),true);
      goto LAB_0010008e;
    }
    basisu::etc_block::unpack_color5
              ((color_rgba *)&local_24,
               (ushort)(byte)this[1] * 4 & 0x3e0 | ((byte)*this & 0xf8) << 7 |
               (ushort)((int)(uint)(byte)this[2] >> 3),
               (ushort)(((byte)this[1] & 7) << 3) | (ushort)(((byte)*this & 7) << 6) |
               (byte)this[2] & 7,true,0xff);
LAB_0010029a:
    sVar1 = 2;
  }
  uVar5 = local_24 >> 8 & 0xff;
  uVar6 = local_24 & 0xff;
  uVar3 = (ulong)((int)(uint)(byte)this[3] >> sVar1 & 7);
  lVar4 = uVar3 * 0x10;
  iVar2 = *(int *)(&g_etc1_inten_tables + uVar3 * 2);
  iVar8 = iVar2 + uVar5;
  iVar9 = iVar2 + uVar6;
  iVar2 = iVar2 + (uint)local_24._2_1_;
  if (iVar2 < 0) {
    if (iVar8 < 0) {
      iVar2 = 0;
LAB_001003cb:
      iVar8 = 0;
    }
    else {
      iVar2 = 0;
    }
    if (iVar9 < 0) {
      iVar7 = 0;
    }
    else {
LAB_00100104:
      iVar7 = iVar9;
    }
  }
  else if (iVar2 < 0x100) {
    if (iVar8 < 0) goto LAB_001003cb;
    if (0xff < iVar8) goto LAB_001004d7;
    iVar7 = 0;
    if (-1 < iVar9) goto LAB_001000f5;
  }
  else {
    iVar2 = -1;
    if (0xff < iVar8) {
      iVar2 = -1;
LAB_001004d7:
      iVar8 = -1;
    }
LAB_001000f5:
    iVar7 = -1;
    if (iVar9 < 0x100) goto LAB_00100104;
  }
  *param_1 = SUB41(iVar7,0);
  param_1[1] = SUB41(iVar8,0);
  param_1[2] = SUB41(iVar2,0);
  param_1[3] = (color_rgba)0xff;
  iVar8 = *(int *)((long)&g_etc1_inten_tables + lVar4 + 4);
  iVar9 = (uint)local_24._2_1_ + iVar8;
  if (iVar9 < 0) {
    iVar2 = iVar8 + uVar5;
    if (iVar2 < 0) {
      iVar9 = 0;
LAB_0010040d:
      iVar2 = 0;
    }
    else {
      iVar9 = 0;
    }
    if ((int)(iVar8 + uVar6) < 0) {
      cVar10 = (color_rgba)0x0;
    }
    else {
LAB_00100345:
      cVar10 = (color_rgba)((char)iVar8 + (char)local_24._0_1_);
    }
  }
  else {
    iVar2 = iVar8 + uVar5;
    if (iVar9 < 0x100) {
      if (iVar2 < 0) goto LAB_0010040d;
      if (0xff < iVar2) goto LAB_0010032d;
      cVar10 = (color_rgba)0x0;
      if (-1 < (int)(iVar8 + uVar6)) goto LAB_00100333;
    }
    else {
      iVar9 = -1;
      if (0xff < iVar2) {
        iVar9 = -1;
LAB_0010032d:
        iVar2 = -1;
      }
LAB_00100333:
      cVar10 = (color_rgba)0xff;
      if ((int)(iVar8 + uVar6) < 0x100) goto LAB_00100345;
    }
  }
  param_1[6] = SUB41(iVar9,0);
  param_1[4] = cVar10;
  param_1[5] = SUB41(iVar2,0);
  param_1[7] = (color_rgba)0xff;
  iVar8 = *(int *)(basisu::etc_block::unpack_color5 + lVar4);
  iVar9 = (uint)local_24._2_1_ + iVar8;
  if (iVar9 < 0) {
    iVar2 = iVar8 + uVar5;
    if (iVar2 < 0) {
      iVar9 = 0;
LAB_001003ed:
      iVar2 = 0;
    }
    else {
      iVar9 = 0;
    }
    if ((int)(iVar8 + uVar6) < 0) {
      cVar10 = (color_rgba)0x0;
    }
    else {
LAB_0010030d:
      cVar10 = (color_rgba)((char)iVar8 + (char)local_24._0_1_);
    }
  }
  else {
    iVar2 = iVar8 + uVar5;
    if (iVar9 < 0x100) {
      if (iVar2 < 0) goto LAB_001003ed;
      if (0xff < iVar2) goto LAB_001002f5;
      cVar10 = (color_rgba)0x0;
      if (-1 < (int)(iVar8 + uVar6)) goto LAB_001002fb;
    }
    else {
      iVar9 = -1;
      if (0xff < iVar2) {
        iVar9 = -1;
LAB_001002f5:
        iVar2 = -1;
      }
LAB_001002fb:
      cVar10 = (color_rgba)0xff;
      if ((int)(iVar8 + uVar6) < 0x100) goto LAB_0010030d;
    }
  }
  param_1[8] = cVar10;
  param_1[9] = SUB41(iVar2,0);
  param_1[10] = SUB41(iVar9,0);
  param_1[0xb] = (color_rgba)0xff;
  iVar8 = *(int *)(&DAT_0010b02c + lVar4);
  iVar9 = (uint)local_24._2_1_ + iVar8;
  if (iVar9 < 0) {
    iVar2 = uVar5 + iVar8;
    if (iVar2 < 0) {
      iVar9 = 0;
LAB_001003a4:
      iVar2 = 0;
      if (-1 < (int)(iVar8 + uVar6)) goto LAB_001002d0;
    }
    else {
      iVar9 = 0;
      iVar7 = uVar6 + iVar8;
      if (-1 < iVar7) goto LAB_00100210;
    }
    iVar7 = 0;
  }
  else {
    iVar2 = uVar5 + iVar8;
    if (iVar9 < 0x100) {
      if (iVar2 < 0) goto LAB_001003a4;
      if (0xff < iVar2) goto LAB_001002ba;
      iVar7 = 0;
      if ((int)(iVar8 + uVar6) < 0) goto LAB_00100210;
    }
    else {
      iVar9 = -1;
      if (0xff < iVar2) {
        iVar9 = -1;
LAB_001002ba:
        iVar2 = -1;
      }
    }
    iVar7 = -1;
    if (0xff < (int)(iVar8 + uVar6)) goto LAB_00100210;
LAB_001002d0:
    iVar7 = iVar8 + uVar6;
  }
LAB_00100210:
  param_1[0xc] = SUB41(iVar7,0);
  param_1[0xd] = SUB41(iVar2,0);
  param_1[0xe] = SUB41(iVar9,0);
  param_1[0xf] = (color_rgba)0xff;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::bitwise_coder::put_bits(unsigned int, unsigned int) [clone .part.0] */

void __thiscall basisu::bitwise_coder::put_bits(bitwise_coder *this,uint param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  iVar1 = *(int *)(this + 0x14);
  *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + (ulong)param_2;
  uVar3 = param_2 + iVar1;
  *(uint *)(this + 0x14) = uVar3;
  uVar5 = (ulong)param_1 << ((byte)iVar1 & 0x3f) | (ulong)*(uint *)(this + 0x10);
  while (7 < uVar3) {
    uVar3 = *(uint *)(this + 8);
    uVar4 = (ulong)uVar3;
    uVar2 = (undefined1)uVar5;
    uVar6 = uVar3 + 1;
    if (uVar3 != 0xffffffff) {
      __n = 1;
      if (*(uint *)(this + 0xc) < uVar6) {
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB41(uVar6,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar3 = *(uint *)(this + 8);
        __n = (size_t)(uVar6 - uVar3);
      }
      memset((void *)((ulong)uVar3 + *(long *)this),0,__n);
    }
    *(uint *)(this + 8) = uVar6;
    uVar5 = uVar5 >> 8;
    *(undefined1 *)(*(long *)this + uVar4) = uVar2;
    uVar3 = *(int *)(this + 0x14) - 8;
    *(uint *)(this + 0x14) = uVar3;
  }
  *(uint *)(this + 0x10) = (uint)uVar5 & 0xff;
  return;
}



/* basisu::vector<unsigned char>::TEMPNAMEPLACEHOLDERVALUE(basisu::vector<unsigned char> const&)
   [clone .isra.0] */

void __thiscall
basisu::vector<unsigned_char>::operator=(vector<unsigned_char> *this,vector *param_1)

{
  uint uVar1;
  void *__ptr;
  
  if (this != (vector<unsigned_char> *)param_1) {
    uVar1 = *(uint *)(param_1 + 8);
    __ptr = *(void **)this;
    if (*(uint *)(this + 0xc) < uVar1) {
      if (__ptr != (void *)0x0) {
        free(__ptr);
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        uVar1 = *(uint *)(param_1 + 8);
      }
      basisu::elemental_vector::increase_capacity
                ((uint)this,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar1 = *(uint *)(param_1 + 8);
      __ptr = *(void **)this;
    }
    else if (*(int *)(this + 8) != 0) {
      *(undefined4 *)(this + 8) = 0;
      uVar1 = *(uint *)(param_1 + 8);
    }
    if ((__ptr != (void *)0x0) && (*(void **)param_1 != (void *)0x0)) {
      memcpy(__ptr,*(void **)param_1,(ulong)uVar1);
      uVar1 = *(uint *)(param_1 + 8);
    }
    *(uint *)(this + 8) = uVar1;
    return;
  }
  return;
}



/* basisu::bitwise_coder::flush() [clone .isra.0] */

void __thiscall basisu::bitwise_coder::flush(bitwise_coder *this)

{
  undefined4 uVar1;
  uint uVar2;
  size_t __n;
  ulong uVar3;
  uint uVar4;
  
  if (*(uint *)(this + 0x14) == 0) {
    return;
  }
  uVar2 = *(uint *)(this + 8);
  uVar3 = (ulong)uVar2;
  *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + (ulong)(8 - (*(uint *)(this + 0x14) & 7));
  uVar1 = *(undefined4 *)(this + 0x10);
  uVar4 = uVar2 + 1;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(this + 0xc) < uVar4) {
      basisu::elemental_vector::increase_capacity
                ((uint)this,SUB41(uVar4,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar2 = *(uint *)(this + 8);
      __n = (size_t)(uVar4 - uVar2);
    }
    else {
      __n = 1;
    }
    memset((void *)((ulong)uVar2 + *(long *)this),0,__n);
  }
  *(uint *)(this + 8) = uVar4;
  *(char *)(*(long *)this + uVar3) = (char)uVar1;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* basisu::basisu_backend::basisu_backend() */

void __thiscall basisu::basisu_backend::basisu_backend(basisu_backend *this)

{
  this[10] = (basisu_backend)0x0;
  *(undefined2 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x18) = 0x100;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x34) = 0;
  this[0x36] = (basisu_backend)0x1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)this = 0;
  return;
}



/* basisu::basisu_backend::clear() */

void __thiscall basisu::basisu_backend::clear(basisu_backend *this)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  *(undefined8 *)this = 0;
  *(undefined2 *)(this + 8) = 0;
  this[10] = (basisu_backend)0x0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x18) = 0x100;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x34) = 0;
  this[0x36] = (basisu_backend)0x1;
  *(undefined8 *)(this + 0x38) = 0;
  if (*(void **)(this + 0x40) != (void *)0x0) {
    free(*(void **)(this + 0x40));
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  if (*(void **)(this + 0x50) != (void *)0x0) {
    free(*(void **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
  }
  if (*(void **)(this + 0x60) != (void *)0x0) {
    free(*(void **)(this + 0x60));
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
  }
  if (*(void **)(this + 0x70) != (void *)0x0) {
    free(*(void **)(this + 0x70));
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x78) = 0;
  }
  puVar1 = *(undefined8 **)(this + 0x80);
  if (puVar1 != (undefined8 *)0x0) {
    __ptr = puVar1 + (ulong)*(uint *)(this + 0x88) * 2;
    if (puVar1 != __ptr) {
      do {
        if ((void *)*puVar1 != (void *)0x0) {
          free((void *)*puVar1);
        }
        puVar1 = puVar1 + 2;
      } while (__ptr != puVar1);
      __ptr = *(undefined8 **)(this + 0x80);
    }
    free(__ptr);
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x88) = 0;
  }
  if (*(void **)(this + 0x90) != (void *)0x0) {
    free(*(void **)(this + 0x90));
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x98) = 0;
  }
  return;
}



/* basisu::basisu_backend::init(basisu::basisu_frontend*, basisu::basisu_backend_params&,
   basisu::vector<basisu::basisu_backend_slice_desc> const&) */

void __thiscall
basisu::basisu_backend::init
          (basisu_backend *this,basisu_frontend *param_1,basisu_backend_params *param_2,
          vector *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  void *__ptr;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(basisu_frontend **)this = param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined2 *)(this + 0x18) = *(undefined2 *)(param_2 + 0x10);
  if ((vector *)(this + 0x20) == param_3) {
    uVar5 = (ulong)*(uint *)(this + 0x28);
  }
  else {
    uVar5 = (ulong)*(uint *)(param_3 + 8);
    __ptr = *(void **)(this + 0x20);
    if (*(uint *)(this + 0x2c) < *(uint *)(param_3 + 8)) {
      if (__ptr != (void *)0x0) {
        free(__ptr);
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        uVar5 = (ulong)*(uint *)(param_3 + 8);
      }
      basisu::elemental_vector::increase_capacity
                ((uint)(vector *)(this + 0x20),SUB81(uVar5,0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x30,false);
      uVar5 = (ulong)*(uint *)(param_3 + 8);
      __ptr = *(void **)(this + 0x20);
    }
    else if (*(int *)(this + 0x28) != 0) {
      *(undefined4 *)(this + 0x28) = 0;
      uVar5 = (ulong)*(uint *)(param_3 + 8);
    }
    if ((__ptr != (void *)0x0) && (*(void **)param_3 != (void *)0x0)) {
      memcpy(__ptr,*(void **)param_3,uVar5 * 0x30);
      uVar5 = (ulong)*(uint *)(param_3 + 8);
    }
    *(int *)(this + 0x28) = (int)uVar5;
  }
  uVar4 = 0;
  basisu::debug_printf
            ("basisu_backend::Init: Slices: %u, ETC1S: %u, EndpointRDOQualityThresh: %f, SelectorRDOQualityThresh: %f\n"
             ,(double)*(float *)(param_2 + 4),(double)*(float *)(param_2 + 8),uVar5,
             (ulong)(byte)*param_2);
  basisu::debug_printf
            ("Frontend endpoints: %u selectors: %u\n",(ulong)*(uint *)(*(long *)this + 200),
             (ulong)*(uint *)(*(long *)this + 0x128));
  if (*(int *)(this + 0x28) != 0) {
    do {
      puVar3 = (uint *)(uVar4 * 0x30 + *(long *)(this + 0x20));
      uVar5 = uVar4 & 0xffffffff;
      uVar4 = uVar4 + 1;
      basisu::debug_printf
                ("Slice: %u, OrigWidth: %u, OrigHeight: %u, Width: %u, Height: %u, NumBlocksX: %u, NumBlocksY: %u, FirstBlockIndex: %u\n"
                 ,uVar5,(ulong)puVar3[1],(ulong)puVar3[2],(ulong)puVar3[3],(ulong)puVar3[4],
                 (ulong)puVar3[5],(ulong)puVar3[6],(ulong)*puVar3);
    } while ((uint)uVar4 < *(uint *)(this + 0x28));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basisu_backend::create_endpoint_palette() */

void __thiscall basisu::basisu_backend::create_endpoint_palette(basisu_backend *this)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  
  lVar4 = *(long *)this;
  uVar10 = *(uint *)(this + 0xa8);
  uVar3 = *(uint *)(lVar4 + 200);
  *(uint *)(this + 0x38) = uVar3;
  if (uVar3 != uVar10) {
    uVar5 = uVar3;
    if (uVar10 <= uVar3) {
      if (*(uint *)(this + 0xac) < uVar3) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0xa0,SUB41(uVar3,0),(uint)(uVar10 + 1 == uVar3),
                   (_func_void_void_ptr_void_ptr_uint *)0xc,false);
        uVar10 = *(uint *)(this + 0xa8);
      }
      puVar7 = (undefined8 *)(*(long *)(this + 0xa0) + (ulong)uVar10 * 0xc);
      puVar1 = (undefined8 *)((long)puVar7 + (ulong)(uVar3 - uVar10) * 0xc);
      for (; puVar7 != puVar1; puVar7 = (undefined8 *)((long)puVar7 + 0xc)) {
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
      }
      uVar5 = *(uint *)(lVar4 + 200);
    }
    uVar10 = uVar5;
    *(uint *)(this + 0xa8) = uVar3;
  }
  if (uVar10 != 0) {
    lVar6 = *(long *)(lVar4 + 0x100);
    lVar9 = 0;
    lVar11 = 0;
    uVar10 = 0;
    do {
      cVar2 = *(char *)((undefined4 *)(lVar6 + lVar9) + 0xc);
      puVar8 = (undefined4 *)(*(long *)(this + 0xa0) + lVar11);
      *(char *)(puVar8 + 2) = cVar2;
      *puVar8 = *(undefined4 *)(lVar6 + lVar9);
      lVar6 = *(long *)(lVar4 + 0x100);
      puVar8[1] = *(undefined4 *)(lVar6 + 8 + lVar9);
      if (cVar2 == '\0') {
        __fprintf_chk(_stderr,2,"ERROR: basisu_backend: verify() failed at line %i!\n",0x5c);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0xc;
      lVar9 = lVar9 + 0x38;
    } while (uVar10 < *(uint *)(lVar4 + 200));
  }
  return;
}



/* basisu::basisu_backend::create_selector_palette() */

void __thiscall basisu::basisu_backend::create_selector_palette(basisu_backend *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar10;
  
  lVar2 = *(long *)this;
  uVar14 = *(uint *)(this + 0xb8);
  uVar12 = *(uint *)(lVar2 + 0x128);
  *(uint *)(this + 0x3c) = uVar12;
  if (uVar12 == uVar14) goto LAB_00100cce;
  uVar9 = uVar12;
  if (uVar14 <= uVar12) {
    if (*(uint *)(this + 0xbc) < uVar12) {
      basisu::elemental_vector::increase_capacity
                ((int)this + 0xb0,SUB41(uVar12,0),(uint)(uVar14 + 1 == uVar12),
                 (_func_void_void_ptr_void_ptr_uint *)0x10,false);
      uVar14 = *(uint *)(this + 0xb8);
    }
    pauVar5 = (undefined1 (*) [16])((ulong)uVar14 * 0x10 + *(long *)(this + 0xb0));
    pauVar11 = pauVar5 + (uVar12 - uVar14);
    if (pauVar5 != pauVar11) {
      pauVar6 = pauVar5;
      if (((int)pauVar11 - (int)pauVar5 & 0x10U) != 0) {
        *pauVar5 = (undefined1  [16])0x0;
        pauVar6 = pauVar5 + 1;
        if (pauVar11 == pauVar5 + 1) goto LAB_00100e10;
      }
      do {
        *pauVar6 = (undefined1  [16])0x0;
        pauVar5 = pauVar6 + 2;
        pauVar6[1] = (undefined1  [16])0x0;
        pauVar6 = pauVar5;
      } while (pauVar11 != pauVar5);
    }
LAB_00100e10:
    uVar9 = *(uint *)(lVar2 + 0x128);
  }
  uVar14 = uVar9;
  *(uint *)(this + 0xb8) = uVar12;
LAB_00100cce:
  lVar15 = 0;
  if (uVar14 != 0) {
    do {
      uVar14 = 0x10;
      uVar10 = 0;
      lVar3 = *(long *)(this + 0xb0);
      lVar1 = *(long *)(lVar2 + 0x130) + lVar15 * 8;
      do {
        iVar4 = (int)uVar10;
        uVar12 = iVar4 * 4;
        do {
          iVar8 = (int)uVar10;
          uVar13 = (ulong)uVar12;
          uVar16 = uVar10 >> 3;
          bVar7 = (byte)uVar10 & 7;
          uVar9 = iVar8 + 4;
          uVar10 = (ulong)uVar9;
          uVar12 = uVar12 + 1;
          uVar16 = (ulong)(7 - (int)uVar16);
          *(undefined1 *)(lVar15 * 0x10 + lVar3 + uVar13) =
               *(undefined1 *)
                ((long)&g_etc1_to_selector_index +
                (ulong)(((int)(uint)*(byte *)(lVar1 + -2 + uVar16) >> bVar7) * 2 & 2U |
                       (int)(uint)*(byte *)(lVar1 + uVar16) >> bVar7 & 1U));
        } while (uVar9 != uVar14);
        uVar12 = iVar4 + 1;
        uVar10 = (ulong)uVar12;
        uVar14 = iVar8 + 5;
      } while (uVar12 != 4);
      lVar15 = lVar15 + 1;
    } while ((uint)lVar15 < *(uint *)(lVar2 + 0x128));
  }
  return;
}



/* basisu::basisu_backend::reoptimize_and_sort_endpoints_codebook(unsigned int,
   basisu::vector<unsigned int>&) */

void __thiscall
basisu::basisu_backend::reoptimize_and_sort_endpoints_codebook
          (basisu_backend *this,uint param_1,vector *param_2)

{
  int *piVar1;
  uint uVar2;
  vector *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 uVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  long in_FS_OFFSET;
  void *local_a8;
  ulong local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  long local_40;
  
  pvVar3 = *(vector **)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = (int)this;
  if (this[0x18] == (basisu_backend)0x0) {
    uVar25 = (uint)&local_98;
    if ((param_1 != 0) && (1 < *(uint *)(this + 0x14))) {
      if (*(uint *)(this + 0x28) == 0) {
        local_a8 = (void *)0x0;
        local_a0 = 0;
      }
      else {
        lVar14 = *(long *)(this + 0x20);
        iVar24 = 0;
        piVar12 = (int *)(lVar14 + 0x14);
        piVar17 = piVar12 + (ulong)*(uint *)(this + 0x28) * 0xc;
        do {
          iVar23 = *piVar12;
          piVar1 = piVar12 + 1;
          piVar12 = piVar12 + 0xc;
          iVar24 = iVar24 + iVar23 * *piVar1;
        } while (piVar17 != piVar12);
        local_a8 = (void *)0x0;
        local_a0 = 0;
        if (iVar24 != 0) {
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_a8,SUB41(iVar24,0),(uint)(iVar24 == 1),
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          memset((void *)((long)local_a8 + (local_a0 & 0xffffffff) * 4),0,
                 (ulong)(uint)(iVar24 - (int)local_a0) << 2);
          local_a0 = CONCAT44(local_a0._4_4_,iVar24);
          if (*(int *)(this + 0x28) == 0) goto LAB_00101589;
          lVar14 = *(long *)(this + 0x20);
        }
        lVar9 = 0;
        uVar25 = 0;
        do {
          iVar24 = *(int *)(lVar14 + 0x18 + lVar9 * 2);
          iVar23 = *(int *)(lVar14 + lVar9 * 2);
          iVar22 = *(int *)(lVar14 + 0x14 + lVar9 * 2);
          if ((iVar24 != 0) && (iVar22 != 0)) {
            lVar4 = *(long *)(this + 0xd0);
            iVar20 = 0;
            do {
              lVar5 = *(long *)((int *)(lVar4 + lVar9) + 2);
              iVar8 = 0;
              do {
                uVar26 = iVar8 + iVar23;
                uVar15 = *(int *)(lVar4 + lVar9) * iVar20 + iVar8;
                iVar8 = iVar8 + 1;
                *(undefined4 *)((long)local_a8 + (ulong)uVar26 * 4) =
                     *(undefined4 *)(lVar5 + 4 + (ulong)uVar15 * 0x14);
              } while (iVar22 != iVar8);
              iVar20 = iVar20 + 1;
              iVar23 = iVar23 + iVar22;
            } while (iVar24 != iVar20);
          }
          uVar25 = uVar25 + 1;
          lVar9 = lVar9 + 0x18;
        } while (uVar25 < *(uint *)(this + 0x28));
      }
LAB_00101589:
      uVar25 = (uint)&local_98;
      local_98 = (void *)0x0;
      local_90 = 0;
      basisu::basisu_frontend::reoptimize_remapped_endpoints
                (pvVar3,(vector *)&local_a8,SUB81(&local_98,0),(vector *)0x1);
      create_endpoint_palette(this);
      uVar15 = *(uint *)(this + 0x28);
      if (uVar15 != 0) {
        lVar14 = *(long *)(this + 0x20);
        lVar9 = 0;
        do {
          iVar24 = *(int *)(lVar14 + 0x18 + lVar9 * 2);
          iVar23 = *(int *)(lVar14 + 0x14 + lVar9 * 2);
          iVar22 = 0;
          if (iVar24 != 0) {
            if (iVar23 == 0) {
              do {
                if (iVar24 == iVar22 + 1) break;
                iVar22 = iVar22 + 2;
              } while (iVar24 != iVar22);
            }
            else {
              lVar4 = *(long *)(this + 0xd0);
              do {
                lVar5 = *(long *)((int *)(lVar4 + lVar9) + 2);
                uVar13 = *(int *)(lVar4 + lVar9) * iVar22;
                uVar26 = iVar23 + uVar13;
                do {
                  uVar16 = (ulong)uVar13;
                  uVar13 = uVar13 + 1;
                  lVar6 = lVar5 + uVar16 * 0x14;
                  *(undefined4 *)(lVar6 + 4) =
                       *(undefined4 *)((long)local_98 + (long)*(int *)(lVar6 + 4) * 4);
                } while (uVar13 != uVar26);
                iVar22 = iVar22 + 1;
              } while (iVar22 != iVar24);
            }
          }
          lVar9 = lVar9 + 0x18;
        } while (lVar9 != (ulong)uVar15 * 0x18);
      }
      if (*(int *)(param_2 + 8) != 0) {
        lVar14 = *(long *)param_2;
        lVar9 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar9 * 4) =
               *(undefined4 *)((long)local_98 + (ulong)*(uint *)(lVar14 + lVar9 * 4) * 4);
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < *(uint *)(param_2 + 8));
      }
      if (local_98 != (void *)0x0) {
        free(local_98);
      }
      if (local_a8 != (void *)0x0) {
        free(local_a8);
      }
    }
    local_90 = 0;
    local_80 = 0;
    local_70 = 0;
    local_60 = 0;
    local_50 = 0;
    local_98 = (void *)0x0;
    local_88 = (void *)0x0;
    local_78 = (void *)0x0;
    local_68 = (void *)0x0;
    local_58 = (void *)0x0;
    basisu::palette_index_reorderer::init
              (uVar25,(uint *)(ulong)*(uint *)(param_2 + 8),(uint)*(undefined8 *)param_2,
               (_func_float_uint_uint_void_ptr *)(ulong)*(uint *)(pvVar3 + 200),(void *)0x0,0.0);
    uVar16 = local_50 & 0xffffffff;
    if (*(uint *)(this + 0xec) < (uint)local_50) {
      if (*(void **)(this + 0xe0) != (void *)0x0) {
        free(*(void **)(this + 0xe0));
        uVar16 = local_50 & 0xffffffff;
        *(undefined8 *)(this + 0xe0) = 0;
        *(undefined8 *)(this + 0xe8) = 0;
      }
      basisu::elemental_vector::increase_capacity
                (iVar7 + 0xe0,SUB81(uVar16,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
      uVar16 = local_50 & 0xffffffff;
    }
    else if (*(int *)(this + 0xe8) != 0) {
      *(undefined4 *)(this + 0xe8) = 0;
    }
    uVar19 = (int)uVar16;
    if (*(void **)(this + 0xe0) == (void *)0x0) {
LAB_00100f3e:
      *(undefined4 *)(this + 0xe8) = uVar19;
      if (local_58 != (void *)0x0) {
        free(local_58);
      }
    }
    else {
      if (local_58 != (void *)0x0) {
        memcpy(*(void **)(this + 0xe0),local_58,uVar16 << 2);
        uVar19 = (uint)local_50;
        goto LAB_00100f3e;
      }
      *(int *)(this + 0xe8) = (int)uVar16;
    }
    if (local_68 != (void *)0x0) {
      free(local_68);
    }
    if (local_78 != (void *)0x0) {
      free(local_78);
    }
    if (local_88 != (void *)0x0) {
      free(local_88);
    }
    if (local_98 != (void *)0x0) {
      free(local_98);
    }
  }
  else if (*(void **)(this + 0xe0) == (void *)0x0) {
    uVar15 = *(uint *)(this + 0xe8);
    uVar25 = *(uint *)(pvVar3 + 200);
    if (uVar25 != uVar15) {
      uVar26 = uVar25;
      if (uVar15 <= uVar25) {
        lVar14 = 0;
        if (*(uint *)(this + 0xec) < uVar25) goto LAB_001012c0;
        goto LAB_001012f0;
      }
      goto LAB_0010141e;
    }
LAB_00101424:
    if (uVar15 != 0) {
      lVar14 = *(long *)(this + 0xe0);
      lVar9 = 0;
      do {
        *(int *)(lVar14 + lVar9 * 4) = (int)lVar9;
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < *(uint *)(pvVar3 + 200));
    }
  }
  else {
    free(*(void **)(this + 0xe0));
    *(undefined8 *)(this + 0xe8) = 0;
    uVar25 = *(uint *)(pvVar3 + 200);
    *(undefined8 *)(this + 0xe0) = 0;
    if (uVar25 != 0) {
      uVar15 = 0;
LAB_001012c0:
      basisu::elemental_vector::increase_capacity
                (iVar7 + 0xe0,SUB41(uVar25,0),(uint)(uVar15 + 1 == uVar25),
                 (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      lVar14 = *(long *)(this + 0xe0);
      uVar15 = *(uint *)(this + 0xe8);
LAB_001012f0:
      memset((void *)(lVar14 + (ulong)uVar15 * 4),0,(ulong)(uVar25 - uVar15) << 2);
      uVar26 = *(uint *)(pvVar3 + 200);
LAB_0010141e:
      *(uint *)(this + 0xe8) = uVar25;
      uVar15 = uVar26;
      goto LAB_00101424;
    }
  }
  if (*(void **)(this + 0x100) == (void *)0x0) {
    uVar15 = *(uint *)(this + 0x108);
    uVar25 = *(uint *)(pvVar3 + 200);
    if (uVar25 != uVar15) {
      if (uVar15 <= uVar25) {
        lVar14 = 0;
        if (*(uint *)(this + 0x10c) < uVar25) goto LAB_00101315;
        goto LAB_00101346;
      }
      goto LAB_00101278;
    }
  }
  else {
    free(*(void **)(this + 0x100));
    *(undefined8 *)(this + 0x108) = 0;
    uVar25 = *(uint *)(pvVar3 + 200);
    *(undefined8 *)(this + 0x100) = 0;
    if (uVar25 != 0) {
      uVar15 = 0;
LAB_00101315:
      basisu::elemental_vector::increase_capacity
                (iVar7 + 0x100,SUB41(uVar25,0),(uint)(uVar15 + 1 == uVar25),
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      lVar14 = *(long *)(this + 0x100);
      uVar15 = *(uint *)(this + 0x108);
LAB_00101346:
      memset((void *)(lVar14 + (ulong)uVar15),0,(ulong)(uVar25 - uVar15));
LAB_00101278:
      *(uint *)(this + 0x108) = uVar25;
    }
  }
  uVar25 = *(uint *)(this + 0x28);
  if (uVar25 == 0) {
    uVar15 = 0xffffffff;
  }
  else {
    lVar14 = *(long *)(this + 0x20);
    lVar9 = 0;
    uVar15 = 0xffffffff;
    do {
      iVar24 = *(int *)(lVar14 + 0x18 + lVar9 * 2);
      iVar23 = *(int *)(lVar14 + 0x14 + lVar9 * 2);
      iVar22 = 0;
      if (iVar24 != 0) {
        if (iVar23 == 0) {
          do {
            if (iVar24 == iVar22 + 1) break;
            iVar22 = iVar22 + 2;
          } while (iVar24 != iVar22);
        }
        else {
          lVar4 = *(long *)(this + 0xd0);
          lVar5 = *(long *)(this + 0x100);
          do {
            lVar6 = *(long *)((int *)(lVar4 + lVar9) + 2);
            uVar13 = *(int *)(lVar4 + lVar9) * iVar22;
            uVar26 = iVar23 + uVar13;
            do {
              uVar2 = *(uint *)(lVar6 + 4 + (ulong)uVar13 * 0x14);
              *(undefined1 *)(lVar5 + (ulong)uVar2) = 1;
              if (uVar2 < uVar15) {
                uVar15 = uVar2;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar26);
            iVar22 = iVar22 + 1;
          } while (iVar24 != iVar22);
        }
      }
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != (ulong)uVar25 * 0x18);
  }
  basisu::debug_printf
            ("basisu_backend::reoptimize_and_sort_endpoints_codebook: First old entry index: %u\n");
  if (*(void **)(this + 0x110) == (void *)0x0) {
    uVar26 = *(uint *)(this + 0x118);
    uVar25 = *(uint *)(pvVar3 + 200);
    if (uVar25 != uVar26) {
      if (uVar26 <= uVar25) {
        lVar14 = 0;
        if (*(uint *)(this + 0x11c) < uVar25) goto LAB_001013b0;
        goto LAB_001013e3;
      }
      goto LAB_0010124e;
    }
  }
  else {
    free(*(void **)(this + 0x110));
    *(undefined8 *)(this + 0x118) = 0;
    uVar25 = *(uint *)(pvVar3 + 200);
    *(undefined8 *)(this + 0x110) = 0;
    if (uVar25 != 0) {
      uVar26 = 0;
LAB_001013b0:
      basisu::elemental_vector::increase_capacity
                (iVar7 + 0x110,SUB41(uVar25,0),(uint)(uVar26 + 1 == uVar25),
                 (_func_void_void_ptr_void_ptr_uint *)0x1,false);
      lVar14 = *(long *)(this + 0x110);
      uVar26 = *(uint *)(this + 0x118);
LAB_001013e3:
      memset((void *)(lVar14 + (ulong)uVar26),0,(ulong)(uVar25 - uVar26));
LAB_0010124e:
      *(uint *)(this + 0x118) = uVar25;
    }
  }
  if (*(void **)(this + 0xf0) == (void *)0x0) {
    uVar26 = *(uint *)(this + 0xf8);
    uVar25 = *(uint *)(pvVar3 + 200);
    uVar16 = (ulong)uVar25;
    puVar21 = (uint *)0x0;
    if (uVar25 != uVar26) {
      if (uVar26 <= uVar25) {
        lVar14 = 0;
        if (*(uint *)(this + 0xfc) < uVar25) goto LAB_0010135b;
        goto LAB_0010138e;
      }
      goto LAB_001011ea;
    }
    puVar18 = (uint *)((ulong)uVar25 << 2);
  }
  else {
    free(*(void **)(this + 0xf0));
    puVar21 = (uint *)0x0;
    *(undefined8 *)(this + 0xf8) = 0;
    uVar25 = *(uint *)(pvVar3 + 200);
    uVar16 = (ulong)uVar25;
    *(undefined8 *)(this + 0xf0) = 0;
    if (uVar25 == 0) goto LAB_001010fa;
    uVar26 = 0;
LAB_0010135b:
    basisu::elemental_vector::increase_capacity
              (iVar7 + 0xf0,SUB81(uVar16,0),(uint)(uVar26 + 1 == (int)uVar16),
               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
    lVar14 = *(long *)(this + 0xf0);
    uVar26 = *(uint *)(this + 0xf8);
LAB_0010138e:
    memset((void *)(lVar14 + (ulong)uVar26 * 4),0,(ulong)((int)uVar16 - uVar26) << 2);
    puVar21 = *(uint **)(this + 0xf0);
LAB_001011ea:
    *(int *)(this + 0xf8) = (int)uVar16;
    puVar18 = puVar21 + uVar16;
  }
  if (puVar21 != puVar18) {
    puVar10 = puVar21;
    if (((int)puVar18 - (int)puVar21 & 4U) != 0) {
      *puVar21 = uVar15;
      puVar10 = puVar21 + 1;
      if (puVar21 + 1 == puVar18) goto LAB_001010fa;
    }
    do {
      *puVar10 = uVar15;
      puVar11 = puVar10 + 2;
      puVar10[1] = uVar15;
      puVar10 = puVar11;
    } while (puVar11 != puVar18);
  }
LAB_001010fa:
  if (*(int *)(this + 0xe8) != 0) {
    lVar14 = *(long *)(this + 0x100);
    lVar9 = 0;
    do {
      if (*(char *)(lVar14 + lVar9) != '\0') {
        uVar16 = (ulong)*(uint *)(*(long *)(this + 0xe0) + lVar9 * 4);
        *(undefined1 *)(*(long *)(this + 0x110) + uVar16) = 1;
        puVar21[uVar16] = (uint)lVar9;
      }
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < *(uint *)(this + 0xe8));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::basisu_backend::find_video_frame(int, int) */

int __thiscall
basisu::basisu_backend::find_video_frame(basisu_backend *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  if (*(int *)(this + 0x28) != 0) {
    iVar1 = 0;
    lVar3 = (long)param_1 * 0x30 + *(long *)(this + 0x20);
    piVar2 = (int *)(*(long *)(this + 0x20) + 0x14);
    do {
      if ((((piVar2[4] == param_2 + *(int *)(lVar3 + 0x24)) && (piVar2[5] == *(int *)(lVar3 + 0x28))
           ) && (*piVar2 == *(int *)(lVar3 + 0x14))) &&
         ((piVar2[1] == *(int *)(lVar3 + 0x18) && ((char)piVar2[6] == *(char *)(lVar3 + 0x2c))))) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xc;
    } while (iVar1 != *(int *)(this + 0x28));
  }
  return -1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basisu_backend::check_for_valid_cr_blocks() [clone .part.0] */

void __thiscall basisu::basisu_backend::check_for_valid_cr_blocks(basisu_backend *this)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  
  basisu::debug_printf("basisu_backend::check_for_valid_cr_blocks\n");
  iVar14 = *(int *)(this + 0x28);
  if (iVar14 == 0) {
    basisu::debug_printf("Total CR\'s: %u, Total invalid CR\'s: %u\n",0,0);
    return;
  }
  lVar6 = *(long *)(this + 0x20);
  lVar13 = 0;
  uVar12 = 0;
  uVar18 = 0;
  iVar19 = 0;
  do {
    iVar17 = *(int *)(lVar6 + 0x14 + lVar13 * 2);
    iVar7 = find_video_frame(this,iVar19,-1);
    cVar4 = *(char *)(lVar6 + 0x2d + lVar13 * 2);
    iVar5 = *(int *)(lVar6 + 0x18 + lVar13 * 2);
    if (cVar4 == '\x01') {
LAB_0010195f:
      iVar7 = 0;
      if (iVar5 != 0) {
        if (iVar17 == 0) {
          do {
            if (iVar5 == iVar7 + 1) break;
            iVar7 = iVar7 + 2;
          } while (iVar5 != iVar7);
        }
        else {
          do {
            uVar9 = *(int *)(*(long *)(this + 0xd0) + lVar13) * iVar7;
            uVar15 = iVar17 + uVar9;
            do {
              if (*(int *)(*(long *)((int *)(*(long *)(this + 0xd0) + lVar13) + 2) +
                          (ulong)uVar9 * 0x14) == 2) {
                uVar11 = 0x172;
                goto LAB_001019ce;
              }
              uVar9 = uVar9 + 1;
            } while (uVar15 != uVar9);
            iVar7 = iVar7 + 1;
          } while (iVar5 != iVar7);
        }
      }
    }
    else {
      if (iVar7 < 0) goto LAB_00101a00;
      if (cVar4 != '\0') goto LAB_0010195f;
      if (iVar5 != 0) {
        iVar16 = 0;
        do {
          if (iVar17 != 0) {
            piVar1 = (int *)(*(long *)(this + 0xd0) + lVar13);
            piVar10 = (int *)(*(long *)(this + 0xd0) + (long)iVar7 * 0x18);
            iVar8 = 0;
            do {
              while (piVar2 = (int *)(*(long *)(piVar1 + 2) +
                                     (ulong)(uint)(*piVar1 * iVar16 + iVar8) * 0x14), *piVar2 != 2)
              {
LAB_001018b8:
                iVar8 = iVar8 + 1;
                if (iVar17 == iVar8) goto LAB_00101902;
              }
              uVar18 = (ulong)((int)uVar18 + 1);
              lVar3 = *(long *)(piVar10 + 2) + (ulong)(uint)(*piVar10 * iVar16 + iVar8) * 0x14;
              if ((piVar2[1] == *(int *)(lVar3 + 4)) && (piVar2[2] == *(int *)(lVar3 + 8)))
              goto LAB_001018b8;
              iVar8 = iVar8 + 1;
              uVar12 = uVar12 + 1;
            } while (iVar17 != iVar8);
          }
LAB_00101902:
          iVar16 = iVar16 + 1;
        } while (iVar5 != iVar16);
      }
    }
    iVar19 = iVar19 + 1;
    lVar13 = lVar13 + 0x18;
  } while (iVar19 != iVar14);
  iVar14 = (int)uVar18;
  basisu::debug_printf
            ("Total CR\'s: %u, Total invalid CR\'s: %u\n",uVar18 & 0xffffffff,(ulong)uVar12);
  if (uVar12 == 0) {
    return;
  }
  verify(true,iVar14);
LAB_00101a00:
  uVar11 = 0x167;
LAB_001019ce:
  __fprintf_chk(_stderr,2,"ERROR: basisu_backend: verify() failed at line %i!\n",uVar11);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* basisu::basisu_backend::check_for_valid_cr_blocks() */

void __thiscall basisu::basisu_backend::check_for_valid_cr_blocks(basisu_backend *this)

{
  if (*(int *)(*(long *)this + 0x24) != 3) {
    return;
  }
  check_for_valid_cr_blocks(this);
  return;
}



/* basisu::basisu_backend::compute_slice_crcs() */

void __thiscall basisu::basisu_backend::compute_slice_crcs(basisu_backend *this)

{
  ushort *puVar1;
  byte bVar2;
  basisu_backend bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  ushort uVar9;
  undefined2 uVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  int *piVar14;
  void *pvVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  undefined8 local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_164;
  int local_15c;
  void *local_158;
  ulong local_150;
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x28) != 0) {
    uVar25 = 0;
    do {
      local_178 = 0;
      lVar12 = uVar25 * 0x30 + *(long *)(this + 0x20);
      iVar4 = *(int *)(lVar12 + 0x14);
      local_174 = *(undefined8 *)(lVar12 + 0xc);
      iVar5 = *(int *)(lVar12 + 0x18);
      local_158 = (void *)0x0;
      uVar21 = *(int *)(lVar12 + 0x10) + 3U >> 2;
      local_150 = 0;
      local_164 = _LC9;
      uVar11 = *(int *)(lVar12 + 0xc) + 3U >> 2;
      local_15c = 1;
      iVar22 = uVar21 * uVar11;
      uStack_16c = CONCAT44(uVar21,uVar11);
      if (iVar22 != 0) {
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_158,SUB41(iVar22,0),(uint)(iVar22 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x8,false);
        memset((void *)((long)local_158 + (local_150 & 0xffffffff) * 8),0,
               (ulong)(uint)(iVar22 - (int)local_150) << 3);
        local_150 = CONCAT44(local_150._4_4_,iVar22);
        uVar11 = (uint)uStack_16c;
      }
      pvVar15 = local_158;
      iVar22 = local_15c;
      if (iVar5 != 0) {
        iVar18 = 0;
        do {
          iVar17 = 0;
          if (iVar4 != 0) {
            do {
              uVar24 = 0x10;
              piVar14 = (int *)(uVar25 * 0x18 + *(long *)(this + 0xd0));
              puVar1 = (ushort *)((long)pvVar15 + (ulong)((uVar11 * iVar18 + iVar17) * iVar22) * 8);
              lVar12 = *(long *)(piVar14 + 2) + (ulong)(uint)(*piVar14 * iVar18 + iVar17) * 0x14;
              *(byte *)((long)puVar1 + 3) = *(byte *)((long)puVar1 + 3) & 0xfc | 2;
              lVar23 = (ulong)*(uint *)(lVar12 + 4) * 0xc;
              iVar22 = basisu::etc_block::pack_color5
                                 ((color_rgba *)(*(long *)(this + 0xa0) + lVar23),false,0x7f);
              *puVar1 = CONCAT11((char)((ushort)iVar22 >> 5) << 3,
                                 ((byte)((uint)iVar22 >> 8) >> 2) << 3) | _LC10 & *puVar1;
              *(byte *)(puVar1 + 1) = (byte)(iVar22 << 3) | (byte)puVar1[1] & 7;
              uVar9 = basisu::etc_block::pack_delta3(0,0,0);
              *(byte *)puVar1 = (byte)*puVar1 & 0xf8 | (byte)(uVar9 >> 6) & 7;
              uVar21 = 0;
              *(byte *)((long)puVar1 + 1) =
                   *(byte *)((long)puVar1 + 1) & 0xf8 | (byte)(uVar9 >> 3) & 7;
              *(byte *)(puVar1 + 1) = (byte)uVar9 & 7 | (byte)puVar1[1] & 0xf8;
              iVar22 = *(int *)(*(long *)(this + 0xa0) + 4 + lVar23);
              *(byte *)((long)puVar1 + 3) =
                   *(byte *)((long)puVar1 + 3) & 3 | (byte)(iVar22 << 5) | (byte)(iVar22 << 2);
              uVar11 = *(uint *)(lVar12 + 8);
              lVar12 = *(long *)(this + 0xb0);
              do {
                uVar19 = uVar21 * 4;
                uVar8 = uVar21;
                do {
                  uVar6 = uVar8;
                  uVar20 = (ulong)uVar19;
                  bVar13 = (byte)uVar6 & 7;
                  uVar16 = (ulong)(7 - (uVar6 >> 3));
                  uVar19 = uVar19 + 1;
                  bVar2 = *(byte *)((long)&g_selector_index_to_etc1 +
                                   (ulong)*(byte *)((ulong)uVar11 * 0x10 + lVar12 + uVar20));
                  bVar7 = ~(byte)(1 << bVar13);
                  *(byte *)((long)puVar1 + uVar16) =
                       *(byte *)((long)puVar1 + uVar16) & bVar7 | (byte)((bVar2 & 1) << bVar13);
                  *(byte *)((long)puVar1 + (uVar16 - 2)) =
                       bVar7 & *(byte *)((long)puVar1 + (uVar16 - 2)) | (bVar2 >> 1) << bVar13;
                  uVar8 = uVar6 + 4;
                } while (uVar6 + 4 != uVar24);
                uVar24 = uVar6 + 5;
                uVar21 = uVar21 + 1;
              } while (uVar21 != 4);
              iVar17 = iVar17 + 1;
              pvVar15 = local_158;
              uVar11 = (uint)uStack_16c;
              iVar22 = local_15c;
            } while (iVar4 != iVar17);
          }
          iVar18 = iVar18 + 1;
        } while (iVar5 != iVar18);
      }
      uVar10 = basist::crc16(pvVar15,(ulong)(uVar11 * uStack_16c._4_4_ * iVar22 * 8),0);
      bVar3 = this[10];
      *(undefined2 *)(*(long *)(this + 0x90) + uVar25 * 2) = uVar10;
      if (bVar3 != (basisu_backend)0x0) {
        local_198 = 0;
        local_190 = 0;
        local_188 = (void *)0x0;
        local_180 = 0;
        basisu::gpu_image::unpack((image *)&local_178);
        __snprintf_chk(local_148,0x100,2,0x100,"basisu_backend_slice_%u.png",uVar25 & 0xffffffff);
        basisu::save_png(local_148,(image *)&local_198,0,0);
        if (local_188 != (void *)0x0) {
          free(local_188);
        }
      }
      if (local_158 != (void *)0x0) {
        free(local_158);
      }
      uVar25 = uVar25 + 1;
    } while ((uint)uVar25 < *(uint *)(this + 0x28));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* basisu::basisu_backend::encode_endpoint_palette() */

char __thiscall basisu::basisu_backend::encode_endpoint_palette(basisu_backend *this)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  uint *puVar19;
  ulong uVar20;
  int *piVar21;
  byte bVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  size_t sVar26;
  ulong uVar27;
  uint uVar28;
  void *__ptr;
  int *piVar29;
  int iVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  long in_FS_OFFSET;
  bool bVar35;
  float fVar36;
  float fVar37;
  long local_188;
  char local_15d;
  void *local_158;
  ulong local_150;
  uint *local_148;
  ulong local_140;
  char *local_138;
  ulong local_130;
  uint *local_128;
  ulong local_120;
  uint *local_118;
  ulong local_110;
  uint *local_108;
  ulong local_100;
  void *local_f8;
  ulong local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined1 local_60 [16];
  long local_50;
  undefined4 local_44;
  long local_40;
  
  lVar5 = *(long *)this;
  iVar31 = *(int *)(lVar5 + 200);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_158 = (void *)0x0;
  local_150 = 0;
  if (iVar31 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_158,SUB41(iVar31,0),(uint)(iVar31 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x1,false);
    memset((void *)((local_150 & 0xffffffff) + (long)local_158),0,
           (ulong)(uint)(iVar31 - (int)local_150));
    local_150 = CONCAT44(local_150._4_4_,iVar31);
  }
  uVar25 = *(uint *)(this + 0x28);
  if (uVar25 == 0) {
    uVar24 = 0xffffffff;
  }
  else {
    uVar24 = 0xffffffff;
    lVar14 = 0;
    lVar15 = *(long *)(this + 0x20);
    do {
      iVar31 = *(int *)(lVar15 + 0x18 + lVar14 * 2);
      iVar3 = *(int *)(lVar15 + 0x14 + lVar14 * 2);
      iVar30 = 0;
      if (iVar31 != 0) {
        if (iVar3 == 0) {
          do {
            if (iVar31 == iVar30 + 1) break;
            iVar30 = iVar30 + 2;
          } while (iVar31 != iVar30);
        }
        else {
          lVar33 = *(long *)(this + 0xd0);
          do {
            lVar18 = *(long *)((int *)(lVar33 + lVar14) + 2);
            uVar28 = *(int *)(lVar33 + lVar14) * iVar30;
            uVar13 = uVar28 + iVar3;
            do {
              uVar4 = *(uint *)(lVar18 + 4 + (ulong)uVar28 * 0x14);
              *(undefined1 *)((long)local_158 + (ulong)uVar4) = 1;
              if (uVar4 < uVar24) {
                uVar24 = uVar4;
              }
              uVar28 = uVar28 + 1;
            } while (uVar13 != uVar28);
            iVar30 = iVar30 + 1;
          } while (iVar31 != iVar30);
        }
      }
      lVar14 = lVar14 + 0x18;
    } while ((ulong)uVar25 * 0x18 != lVar14);
  }
  basisu::debug_printf("basisu_backend::encode_endpoint_palette: first_old_entry_index: %u\n");
  uVar25 = *(uint *)(lVar5 + 200);
  local_148 = (uint *)0x0;
  local_140 = 0;
  if (uVar25 == 0) {
LAB_00102c6a:
    local_130 = 0;
    local_138 = (char *)0x0;
    if (*(int *)(this + 0xe8) != 0) {
LAB_00102126:
      lVar15 = 0;
      do {
        if (*(char *)((long)local_158 + lVar15) != '\0') {
          uVar25 = *(uint *)(*(long *)(this + 0xe0) + lVar15 * 4);
          local_138[uVar25] = '\x01';
          local_148[uVar25] = (uint)lVar15;
        }
        lVar15 = lVar15 + 1;
      } while ((uint)lVar15 < *(uint *)(this + 0xe8));
      uVar25 = (uint)local_130;
      if ((uint)local_130 != 0) goto LAB_00102172;
    }
    uVar25 = 0;
    uVar20 = 0;
  }
  else {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_148,SUB41(uVar25,0),(uint)(uVar25 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
    memset(local_148 + (local_140 & 0xffffffff),0,(ulong)(uVar25 - (int)local_140) << 2);
    local_140 = CONCAT44(local_140._4_4_,uVar25);
    puVar19 = local_148;
    if ((uVar25 & 1) == 0) goto LAB_001020a7;
    puVar19 = local_148 + 1;
    *local_148 = uVar24;
    for (; puVar19 != local_148 + uVar25; puVar19 = puVar19 + 2) {
LAB_001020a7:
      *puVar19 = uVar24;
      puVar19[1] = uVar24;
    }
    local_138 = (char *)0x0;
    uVar25 = *(uint *)(lVar5 + 200);
    local_130 = 0;
    if (uVar25 == 0) goto LAB_00102c6a;
    basisu::elemental_vector::increase_capacity
              ((uint)&local_138,SUB41(uVar25,0),(uint)(uVar25 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x1,false);
    memset(local_138 + (local_130 & 0xffffffff),0,(ulong)(uVar25 - (uint)local_130));
    local_130 = CONCAT44(local_130._4_4_,uVar25);
    if (*(int *)(this + 0xe8) != 0) goto LAB_00102126;
LAB_00102172:
    uVar20 = 0;
    pcVar16 = local_138;
    do {
      uVar20 = (ulong)((int)uVar20 + (uint)(*pcVar16 == '\0'));
      pcVar16 = pcVar16 + 1;
    } while (local_138 + uVar25 != pcVar16);
  }
  basisu::debug_printf
            ("basisu_backend::encode_endpoint_palette: total_unused_new_entries: %u out of %u\n",
             uVar20,(ulong)uVar25);
  if (*(uint *)(this + 0xa8) != 0) {
    pcVar17 = *(char **)(this + 0xa0);
    pcVar16 = pcVar17 + (ulong)*(uint *)(this + 0xa8) * 0xc;
    do {
      if ((pcVar17[1] != *pcVar17) || (pcVar17[2] != *pcVar17)) {
        bVar7 = 0;
        goto LAB_001021e9;
      }
      pcVar17 = pcVar17 + 0xc;
    } while (pcVar17 != pcVar16);
  }
  bVar7 = 1;
LAB_001021e9:
  local_128 = (uint *)0x0;
  local_120 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_128,true,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  memset(local_128 + (local_120 & 0xffffffff),0,(ulong)(0x20 - (int)local_120) << 2);
  local_120 = CONCAT44(local_120._4_4_,0x20);
  local_118 = (uint *)0x0;
  local_110 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_118,true,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  memset(local_118 + (local_110 & 0xffffffff),0,(ulong)(0x20 - (int)local_110) << 2);
  local_110 = CONCAT44(local_110._4_4_,0x20);
  local_108 = (uint *)0x0;
  local_100 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_108,true,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  memset(local_108 + (local_100 & 0xffffffff),0,(ulong)(0x20 - (int)local_100) << 2);
  local_100 = CONCAT44(local_100._4_4_,0x20);
  local_f8 = (void *)0x0;
  local_f0 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_f8,true,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  memset((void *)((long)local_f8 + (local_f0 & 0xffffffff) * 4),0,(ulong)(8 - (int)local_f0) << 2);
  local_f0 = CONCAT44(local_f0._4_4_,8);
  local_44 = _LC14;
  if (*(int *)(lVar5 + 200) != 0) {
    lVar15 = *(long *)(this + 0xa0);
    lVar14 = 0;
    iVar31 = 0;
    do {
      lVar33 = lVar15 + (ulong)local_148[lVar14] * 0xc;
      piVar21 = (int *)((long)local_f8 + (ulong)(*(int *)(lVar33 + 4) - iVar31 & 7) * 4);
      *piVar21 = *piVar21 + 1;
      iVar31 = *(int *)(lVar33 + 4);
      lVar18 = 0;
      uVar25 = (-(uint)(bVar7 == 0) & 2) + 1;
      do {
        if (uVar25 <= (uint)lVar18) break;
        bVar2 = *(byte *)((long)&local_44 + lVar18);
        uVar25 = (uint)*(byte *)(lVar33 + lVar18) - (uint)bVar2 & 0x1f;
        if (bVar2 < 10) {
          local_128[uVar25] = local_128[uVar25] + 1;
        }
        else if (bVar2 < 0x16) {
          local_118[uVar25] = local_118[uVar25] + 1;
        }
        else {
          local_108[uVar25] = local_108[uVar25] + 1;
        }
        *(undefined1 *)((long)&local_44 + lVar18) = *(undefined1 *)(lVar33 + lVar18);
        lVar18 = lVar18 + 1;
        uVar25 = 3;
      } while (bVar7 == 0);
      lVar14 = lVar14 + 1;
    } while ((uint)lVar14 < *(uint *)(lVar5 + 200));
  }
  if ((int)local_120 == 0) {
LAB_00102c46:
    *local_128 = *local_128 + 1;
  }
  else {
    lVar15 = 0;
    puVar19 = local_128;
    do {
      uVar25 = *puVar19;
      puVar19 = puVar19 + 1;
      lVar15 = lVar15 + (ulong)uVar25;
    } while (local_128 + (local_120 & 0xffffffff) != puVar19);
    if (lVar15 == 0) goto LAB_00102c46;
  }
  if ((int)local_110 == 0) {
LAB_00102c2a:
    *local_118 = *local_118 + 1;
    if ((int)local_100 == 0) goto LAB_00102c3d;
LAB_00102516:
    lVar15 = 0;
    puVar19 = local_108;
    do {
      uVar25 = *puVar19;
      puVar19 = puVar19 + 1;
      lVar15 = lVar15 + (ulong)uVar25;
    } while (puVar19 != local_108 + (local_100 & 0xffffffff));
    if (lVar15 == 0) goto LAB_00102c3d;
  }
  else {
    lVar15 = 0;
    puVar19 = local_118;
    do {
      uVar25 = *puVar19;
      puVar19 = puVar19 + 1;
      lVar15 = lVar15 + (ulong)uVar25;
    } while (puVar19 != local_118 + (local_110 & 0xffffffff));
    if (lVar15 == 0) goto LAB_00102c2a;
    if ((int)local_100 != 0) goto LAB_00102516;
LAB_00102c3d:
    *local_108 = *local_108 + 1;
  }
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  cVar12 = basisu::huffman_encoding_table::init
                     ((uint)&local_e8,(uint *)(local_120 & 0xffffffff),(uint)local_128);
  if (((cVar12 == '\0') ||
      (cVar12 = basisu::huffman_encoding_table::init
                          ((uint)&local_c8,(uint *)(local_110 & 0xffffffff),(uint)local_118),
      cVar12 == '\0')) ||
     (cVar12 = basisu::huffman_encoding_table::init
                         ((uint)&local_a8,(uint *)(local_100 & 0xffffffff),(uint)local_108),
     cVar12 == '\0')) {
    basisu::error_printf("color5_delta_model.init() failed!");
  }
  else {
    local_15d = basisu::huffman_encoding_table::init
                          ((uint)&local_88,(uint *)(local_f0 & 0xffffffff),(uint)local_f8);
    if (local_15d != '\0') {
      local_68 = (void *)0x0;
      local_50 = 0;
      local_60 = (undefined1  [16])0x0;
      uVar25 = (uint)(huffman_encoding_table *)&local_68;
      basisu::elemental_vector::increase_capacity
                (uVar25,false,0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      uVar8 = local_60._0_8_;
      bVar35 = local_60._0_4_ != 0;
      local_60._0_8_ = uVar8;
      if (bVar35) {
        local_60._0_8_ = local_60._4_8_ << 0x20;
      }
      local_60._8_8_ = 0;
      local_50 = 0;
      basisu::bitwise_coder::emit_huffman_table((huffman_encoding_table *)&local_68);
      basisu::bitwise_coder::emit_huffman_table((huffman_encoding_table *)&local_68);
      basisu::bitwise_coder::emit_huffman_table((huffman_encoding_table *)&local_68);
      basisu::bitwise_coder::emit_huffman_table((huffman_encoding_table *)&local_68);
      local_50 = local_50 + 1;
      uVar24 = local_60._12_4_ + 1;
      uVar20 = (ulong)bVar7 << (local_60[0xc] & 0x3f) | (ulong)(uint)local_60._8_4_;
      local_60._12_4_ = uVar24;
      while (7 < uVar24) {
        uVar34 = (ulong)(uint)local_60._0_4_;
        uVar6 = (undefined1)uVar20;
        uVar24 = local_60._0_4_ + 1;
        if (local_60._0_4_ != 0xffffffff) {
          sVar26 = 1;
          if ((uint)local_60._4_4_ < uVar24) {
            basisu::elemental_vector::increase_capacity
                      (uVar25,SUB41(uVar24,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
            sVar26 = (size_t)(uVar24 - local_60._0_4_);
          }
          memset((void *)((ulong)(uint)local_60._0_4_ + (long)local_68),0,sVar26);
        }
        auVar9 = local_60;
        local_60._0_4_ = uVar24;
        auVar10 = local_60;
        uVar20 = uVar20 >> 8;
        *(undefined1 *)((long)local_68 + uVar34) = uVar6;
        local_60._12_4_ = auVar9._12_4_;
        uVar24 = local_60._12_4_ - 8;
        local_60._0_12_ = auVar10._0_12_;
        local_60._12_4_ = uVar24;
      }
      local_60._8_4_ = (uint)uVar20 & 0xff;
      local_44 = _LC14;
      if (*(int *)(lVar5 + 200) != 0) {
        lVar15 = *(long *)(this + 0xa0);
        iVar31 = 0;
        local_188 = 0;
        do {
          lVar33 = (ulong)local_148[local_188] * 0xc;
          lVar14 = lVar15 + lVar33;
          uVar20 = (ulong)(*(int *)(lVar14 + 4) - iVar31 & 7);
          bVar2 = *(byte *)((long)local_78 + uVar20);
          iVar31 = *(int *)(lVar14 + 4);
          if (bVar2 != 0) {
            local_50 = local_50 + (ulong)bVar2;
            bVar22 = (byte)uVar24;
            uVar24 = uVar24 + bVar2;
            uVar20 = (ulong)*(ushort *)((long)local_88 + uVar20 * 2) << (bVar22 & 0x3f) |
                     (ulong)(uint)local_60._8_4_;
            local_60._12_4_ = uVar24;
            if (7 < uVar24) {
              do {
                uVar34 = (ulong)(uint)local_60._0_4_;
                uVar6 = (undefined1)uVar20;
                uVar24 = local_60._0_4_ + 1;
                if (local_60._0_4_ != 0xffffffff) {
                  sVar26 = 1;
                  if ((uint)local_60._4_4_ < uVar24) {
                    basisu::elemental_vector::increase_capacity
                              (uVar25,SUB41(uVar24,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,
                               false);
                    sVar26 = (size_t)(uVar24 - local_60._0_4_);
                  }
                  memset((void *)((ulong)(uint)local_60._0_4_ + (long)local_68),0,sVar26);
                }
                auVar9 = local_60;
                local_60._0_4_ = uVar24;
                auVar10 = local_60;
                uVar20 = uVar20 >> 8;
                *(undefined1 *)((long)local_68 + uVar34) = uVar6;
                local_60._12_4_ = auVar9._12_4_;
                uVar24 = local_60._12_4_ - 8;
                local_60._0_12_ = auVar10._0_12_;
                local_60._12_4_ = uVar24;
              } while (7 < uVar24);
              lVar15 = *(long *)(this + 0xa0);
              lVar14 = lVar15 + lVar33;
            }
            local_60._8_4_ = (uint)uVar20 & 0xff;
            iVar31 = *(int *)(lVar14 + 4);
          }
          uVar20 = 0;
          uVar13 = (-(uint)(bVar7 == 0) & 2) + 1;
          do {
            if (uVar13 <= (uint)uVar20) break;
            bVar2 = *(byte *)((long)&local_44 + uVar20);
            lVar14 = lVar15 + lVar33;
            bVar22 = *(byte *)(lVar14 + (uVar20 & 0xffffffff));
            uVar34 = (ulong)((uint)bVar22 - (uint)bVar2 & 0x1f);
            bVar23 = (byte)uVar24;
            uVar11 = local_60._8_4_;
            if (bVar2 < 10) {
              bVar2 = *(byte *)((long)local_d8 + uVar34);
              if (bVar2 != 0) {
                local_50 = local_50 + (ulong)bVar2;
                uVar24 = uVar24 + bVar2;
                local_60._12_4_ = uVar24;
                uVar34 = (ulong)*(ushort *)((long)local_e8 + uVar34 * 2) << (bVar23 & 0x3f) |
                         (ulong)(uint)uVar11;
                if (7 < uVar24) {
                  do {
                    uVar32 = (ulong)(uint)local_60._0_4_;
                    uVar24 = local_60._0_4_ + 1;
                    if (local_60._0_4_ != 0xffffffff) {
                      if ((uint)local_60._4_4_ < uVar24) {
                        basisu::elemental_vector::increase_capacity
                                  (uVar25,SUB41(uVar24,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1
                                   ,false);
                        sVar26 = (size_t)(uVar24 - local_60._0_4_);
                      }
                      else {
                        sVar26 = 1;
                      }
                      memset((void *)((ulong)(uint)local_60._0_4_ + (long)local_68),0,sVar26);
                    }
                    auVar9 = local_60;
                    local_60._0_4_ = uVar24;
                    auVar10 = local_60;
                    uVar27 = uVar34 >> 8;
                    *(char *)((long)local_68 + uVar32) = (char)uVar34;
                    local_60._12_4_ = auVar9._12_4_;
                    uVar24 = local_60._12_4_ - 8;
                    local_60._0_12_ = auVar10._0_12_;
                    local_60._12_4_ = uVar24;
                    uVar34 = uVar27;
                  } while (7 < uVar24);
                  goto LAB_00102ca0;
                }
                goto LAB_00102cc4;
              }
            }
            else if (bVar2 < 0x16) {
              bVar2 = *(byte *)((long)local_b8 + uVar34);
              if (bVar2 != 0) {
                local_50 = local_50 + (ulong)bVar2;
                bVar22 = local_60[0xc];
                uVar24 = local_60._12_4_ + (uint)bVar2;
                local_60._12_4_ = uVar24;
                uVar34 = (ulong)*(ushort *)((long)local_c8 + uVar34 * 2) << (bVar22 & 0x3f) |
                         (ulong)(uint)uVar11;
                if (7 < uVar24) {
                  do {
                    uVar32 = (ulong)(uint)local_60._0_4_;
                    uVar24 = local_60._0_4_ + 1;
                    if (local_60._0_4_ != 0xffffffff) {
                      if ((uint)local_60._4_4_ < uVar24) {
                        basisu::elemental_vector::increase_capacity
                                  (uVar25,SUB41(uVar24,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1
                                   ,false);
                        sVar26 = (size_t)(uVar24 - local_60._0_4_);
                      }
                      else {
                        sVar26 = 1;
                      }
                      memset((void *)((ulong)(uint)local_60._0_4_ + (long)local_68),0,sVar26);
                    }
                    auVar9 = local_60;
                    local_60._0_4_ = uVar24;
                    auVar10 = local_60;
                    uVar27 = uVar34 >> 8;
                    *(char *)((long)local_68 + uVar32) = (char)uVar34;
                    local_60._12_4_ = auVar9._12_4_;
                    uVar24 = local_60._12_4_ - 8;
                    local_60._0_12_ = auVar10._0_12_;
                    local_60._12_4_ = uVar24;
                    uVar34 = uVar27;
                  } while (7 < uVar24);
LAB_00102ca0:
                  lVar15 = *(long *)(this + 0xa0);
                  lVar14 = lVar15 + lVar33;
                  uVar34 = uVar27;
                }
LAB_00102cc4:
                local_60._8_4_ = (uint)uVar34 & 0xff;
                bVar22 = *(byte *)(lVar14 + (uVar20 & 0xffffffff));
              }
            }
            else {
              bVar2 = *(byte *)((long)local_98 + uVar34);
              if (bVar2 != 0) {
                local_50 = local_50 + (ulong)bVar2;
                uVar24 = uVar24 + bVar2;
                local_60._12_4_ = uVar24;
                uVar34 = (ulong)*(ushort *)((long)local_a8 + uVar34 * 2) << (bVar23 & 0x3f) |
                         (ulong)(uint)uVar11;
                if (7 < uVar24) {
                  do {
                    uVar32 = (ulong)(uint)local_60._0_4_;
                    uVar24 = local_60._0_4_ + 1;
                    if (local_60._0_4_ != 0xffffffff) {
                      if ((uint)local_60._4_4_ < uVar24) {
                        basisu::elemental_vector::increase_capacity
                                  (uVar25,SUB41(uVar24,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1
                                   ,false);
                        sVar26 = (size_t)(uVar24 - local_60._0_4_);
                      }
                      else {
                        sVar26 = 1;
                      }
                      memset((void *)((ulong)(uint)local_60._0_4_ + (long)local_68),0,sVar26);
                    }
                    auVar9 = local_60;
                    local_60._0_4_ = uVar24;
                    auVar10 = local_60;
                    uVar27 = uVar34 >> 8;
                    *(char *)((long)local_68 + uVar32) = (char)uVar34;
                    local_60._12_4_ = auVar9._12_4_;
                    uVar24 = local_60._12_4_ - 8;
                    local_60._0_12_ = auVar10._0_12_;
                    local_60._12_4_ = uVar24;
                    uVar34 = uVar27;
                  } while (7 < uVar24);
                  goto LAB_00102ca0;
                }
                goto LAB_00102cc4;
              }
            }
            *(byte *)((long)&local_44 + uVar20) = bVar22;
            uVar13 = 3;
            uVar20 = uVar20 + 1;
          } while (bVar7 == 0);
          local_188 = local_188 + 1;
        } while ((uint)local_188 < *(uint *)(lVar5 + 200));
      }
      auVar9 = local_60;
      if (uVar24 != 0) {
        uVar20 = (ulong)(uint)local_60._0_4_;
        local_50 = local_50 + (ulong)(8 - (uVar24 & 7));
        uVar24 = local_60._0_4_ + 1;
        if (local_60._0_4_ != 0xffffffff) {
          sVar26 = 1;
          if ((uint)local_60._4_4_ < uVar24) {
            basisu::elemental_vector::increase_capacity
                      (uVar25,SUB41(uVar24,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
            sVar26 = (size_t)(uVar24 - local_60._0_4_);
          }
          memset((void *)((ulong)(uint)local_60._0_4_ + (long)local_68),0,sVar26);
        }
        local_60._0_4_ = uVar24;
        *(char *)((long)local_68 + uVar20) = auVar9[8];
        local_60._8_8_ = 0;
      }
      __ptr = *(void **)(this + 0x40);
      if (*(uint *)(this + 0x4c) < (uint)local_60._0_4_) {
        if (__ptr != (void *)0x0) {
          free(__ptr);
          *(undefined8 *)(this + 0x40) = 0;
          *(undefined8 *)(this + 0x48) = 0;
        }
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x40,SUB41(local_60._0_4_,0),0,
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        __ptr = *(void **)(this + 0x40);
      }
      else if (*(int *)(this + 0x48) != 0) {
        *(undefined4 *)(this + 0x48) = 0;
      }
      uVar25 = local_60._0_4_;
      if ((__ptr != (void *)0x0) && (local_68 != (void *)0x0)) {
        memcpy(__ptr,local_68,(ulong)(uint)local_60._0_4_);
        uVar25 = local_60._0_4_;
      }
      fVar36 = (float)uVar25 * _LC17;
      *(uint *)(this + 0x48) = uVar25;
      if (*(uint *)(this + 0x28) == 0) {
        fVar37 = 0.0;
      }
      else {
        uVar24 = 0;
        piVar21 = (int *)(*(long *)(this + 0x20) + 4);
        piVar29 = piVar21 + (ulong)*(uint *)(this + 0x28) * 0xc;
        do {
          iVar31 = *piVar21;
          piVar1 = piVar21 + 1;
          piVar21 = piVar21 + 0xc;
          uVar24 = uVar24 + iVar31 * *piVar1;
        } while (piVar21 != piVar29);
        fVar37 = (float)uVar24;
      }
      basisu::debug_printf
                ("Endpoint codebook size: %u bits %u bytes, Bits per entry: %3.1f, Avg bits/texel: %3.3f\n"
                 ,(double)(fVar36 / (float)*(uint *)(lVar5 + 200)),(double)(fVar36 / fVar37),
                 (ulong)(uVar25 * 8),(ulong)uVar25);
      if (local_68 != (void *)0x0) {
        free(local_68);
      }
      goto LAB_00102afa;
    }
    basisu::error_printf("inten3_model.init() failed!");
  }
  local_15d = '\0';
LAB_00102afa:
  if (local_78 != (void *)0x0) {
    free(local_78);
  }
  if (local_88 != (void *)0x0) {
    free(local_88);
  }
  if (local_98 != (void *)0x0) {
    free(local_98);
  }
  if (local_a8 != (void *)0x0) {
    free(local_a8);
  }
  if (local_b8 != (void *)0x0) {
    free(local_b8);
  }
  if (local_c8 != (void *)0x0) {
    free(local_c8);
  }
  if (local_d8 != (void *)0x0) {
    free(local_d8);
  }
  if (local_e8 != (void *)0x0) {
    free(local_e8);
  }
  if (local_f8 != (void *)0x0) {
    free(local_f8);
  }
  if (local_108 != (uint *)0x0) {
    free(local_108);
  }
  if (local_118 != (uint *)0x0) {
    free(local_118);
  }
  if (local_128 != (uint *)0x0) {
    free(local_128);
  }
  if (local_138 != (char *)0x0) {
    free(local_138);
  }
  if (local_148 != (uint *)0x0) {
    free(local_148);
  }
  if (local_158 != (void *)0x0) {
    free(local_158);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_15d;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_backend::encode_selector_palette() */

uint __thiscall basisu::basisu_backend::encode_selector_palette(basisu_backend *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  size_t sVar17;
  byte *pbVar18;
  size_t sVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  void *pvVar26;
  uint uVar27;
  undefined1 uVar28;
  byte *pbVar29;
  uint uVar30;
  long in_FS_OFFSET;
  bool bVar31;
  float fVar32;
  uint *local_b8;
  ulong local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined1 local_70 [16];
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48 [8];
  long local_40;
  
  lVar4 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_b8,false,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  memset(local_b8 + (local_b0 & 0xffffffff),0,(ulong)(0x100 - (int)local_b0) << 2);
  local_b0 = CONCAT44(local_b0._4_4_,0x100);
  if (*(int *)(lVar4 + 0x128) != 0) {
    lVar23 = 0;
    do {
      while ((int)lVar23 == 0) {
        lVar23 = lVar23 + 1;
        if (*(uint *)(lVar4 + 0x128) <= (uint)lVar23) goto LAB_00103289;
      }
      puVar2 = (undefined8 *)
               (*(long *)(this + 0xb0) +
               (ulong)*(uint *)(*(long *)(this + 0x130) + (ulong)((int)lVar23 - 1) * 4) * 0x10);
      local_58 = *puVar2;
      uStack_50 = puVar2[1];
      pbVar29 = (byte *)(*(long *)(this + 0xb0) +
                        (ulong)*(uint *)(*(long *)(this + 0x130) + lVar23 * 4) * 0x10);
      pbVar18 = (byte *)&local_58;
      do {
        pbVar16 = pbVar18 + 4;
        local_b8[(int)(((uint)pbVar29[1] << 2 | (uint)pbVar29[2] << 4 | (uint)*pbVar29 |
                       (uint)pbVar29[3] << 6) ^
                      ((uint)pbVar18[3] << 6 |
                      (uint)pbVar18[1] << 2 | (uint)pbVar18[2] << 4 | (uint)*pbVar18))] =
             local_b8[(int)(((uint)pbVar29[1] << 2 | (uint)pbVar29[2] << 4 | (uint)*pbVar29 |
                            (uint)pbVar29[3] << 6) ^
                           ((uint)pbVar18[3] << 6 |
                           (uint)pbVar18[1] << 2 | (uint)pbVar18[2] << 4 | (uint)*pbVar18))] + 1;
        pbVar29 = pbVar29 + 4;
        pbVar18 = pbVar16;
      } while (local_48 != pbVar16);
      lVar23 = lVar23 + 1;
    } while ((uint)lVar23 < *(uint *)(lVar4 + 0x128));
  }
LAB_00103289:
  lVar23 = 0;
  puVar10 = local_b8;
  do {
    uVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    lVar23 = lVar23 + (ulong)uVar9;
  } while (local_b8 + 0x100 != puVar10);
  if (lVar23 == 0) {
    *local_b8 = *local_b8 + 1;
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  uVar9 = basisu::huffman_encoding_table::init((uint)&local_98,(uint *)0x100,(uint)local_b8);
  if ((char)uVar9 == '\0') {
    basisu::error_printf("delta_selector_pal_model.init() failed!");
    goto LAB_0010365f;
  }
  local_78 = (void *)0x0;
  local_60 = 0;
  local_70 = (undefined1  [16])0x0;
  uVar14 = (uint)(huffman_encoding_table *)&local_78;
  basisu::elemental_vector::increase_capacity
            (uVar14,false,0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
  uVar5 = local_70._0_8_;
  bVar31 = local_70._0_4_ != 0;
  local_70._0_8_ = uVar5;
  if (bVar31) {
    local_70._0_8_ = local_70._4_8_ << 0x20;
  }
  uVar11 = 0;
  local_60 = 3;
  local_70._8_8_ = _LC21;
  basisu::bitwise_coder::emit_huffman_table((huffman_encoding_table *)&local_78);
  if (*(int *)(lVar4 + 0x128) != 0) {
    do {
      lVar23 = *(long *)(this + 0xb0);
      puVar10 = *(uint **)(this + 0x130);
      if ((int)uVar11 == 0) {
        uVar21 = (ulong)(uint)local_70._8_4_;
        uVar22 = uVar11;
        while( true ) {
          lVar23 = (ulong)*puVar10 * 0x10 + lVar23;
          iVar3 = (int)uVar22;
          local_60 = local_60 + 8;
          bVar13 = local_70[0xc];
          uVar27 = local_70._12_4_ + 8;
          local_70._12_4_ = uVar27;
          uVar21 = (long)(int)((uint)*(byte *)(lVar23 + (ulong)(iVar3 + 1)) << 2 |
                               (uint)*(byte *)(lVar23 + (ulong)(iVar3 + 2)) << 4 |
                               (uint)*(byte *)(lVar23 + (uVar22 & 0xffffffff)) |
                              (uint)*(byte *)(lVar23 + (ulong)(iVar3 + 3)) << 6) << (bVar13 & 0x3f)
                   | uVar21;
          while (7 < uVar27) {
            uVar22 = (ulong)(uint)local_70._0_4_;
            uVar28 = (undefined1)uVar21;
            uVar27 = local_70._0_4_ + 1;
            if (local_70._0_4_ != 0xffffffff) {
              sVar17 = 1;
              if ((uint)local_70._4_4_ < uVar27) {
                basisu::elemental_vector::increase_capacity
                          (uVar14,SUB41(uVar27,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
                sVar17 = (size_t)(uVar27 - local_70._0_4_);
              }
              memset((void *)((ulong)(uint)local_70._0_4_ + (long)local_78),0,sVar17);
            }
            auVar7 = local_70;
            local_70._0_4_ = uVar27;
            auVar8 = local_70;
            uVar21 = uVar21 >> 8;
            *(undefined1 *)((long)local_78 + uVar22) = uVar28;
            local_70._12_4_ = auVar7._12_4_;
            uVar27 = local_70._12_4_ - 8;
            local_70._0_12_ = auVar8._0_12_;
            local_70._12_4_ = uVar27;
          }
          uVar21 = uVar21 & 0xff;
          uVar22 = (ulong)(iVar3 + 4U);
          local_70._8_4_ = (int)uVar21;
          if (iVar3 + 4U == 0x10) break;
          puVar10 = *(uint **)(this + 0x130);
          lVar23 = *(long *)(this + 0xb0);
        }
      }
      else {
        pbVar18 = (byte *)&local_58;
        pbVar29 = (byte *)(lVar23 + (ulong)puVar10[uVar11] * 0x10);
        puVar2 = (undefined8 *)(lVar23 + (ulong)puVar10[(int)uVar11 - 1] * 0x10);
        local_58 = *puVar2;
        uStack_50 = puVar2[1];
        do {
          lVar23 = (long)(int)(((uint)pbVar29[1] << 2 | (uint)pbVar29[2] << 4 | (uint)*pbVar29 |
                               (uint)pbVar29[3] << 6) ^
                              ((uint)pbVar18[3] << 6 |
                              (uint)pbVar18[1] << 2 | (uint)pbVar18[2] << 4 | (uint)*pbVar18));
          bVar13 = *(byte *)((long)local_88 + lVar23);
          if (bVar13 != 0) {
            uVar21 = (ulong)(uint)local_70._8_4_;
            local_60 = local_60 + (ulong)bVar13;
            uVar27 = (uint)bVar13 + local_70._12_4_;
            bVar13 = local_70[0xc];
            local_70._12_4_ = uVar27;
            uVar21 = (ulong)*(ushort *)((long)local_98 + lVar23 * 2) << (bVar13 & 0x3f) | uVar21;
            while (7 < uVar27) {
              uVar22 = (ulong)(uint)local_70._0_4_;
              uVar28 = (undefined1)uVar21;
              uVar27 = local_70._0_4_ + 1;
              if (local_70._0_4_ != 0xffffffff) {
                sVar17 = 1;
                if ((uint)local_70._4_4_ < uVar27) {
                  basisu::elemental_vector::increase_capacity
                            (uVar14,SUB41(uVar27,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false
                            );
                  sVar17 = (size_t)(uVar27 - local_70._0_4_);
                }
                memset((void *)((ulong)(uint)local_70._0_4_ + (long)local_78),0,sVar17);
              }
              auVar7 = local_70;
              local_70._0_4_ = uVar27;
              auVar8 = local_70;
              uVar21 = uVar21 >> 8;
              *(undefined1 *)((long)local_78 + uVar22) = uVar28;
              local_70._12_4_ = auVar7._12_4_;
              uVar27 = local_70._12_4_ - 8;
              local_70._0_12_ = auVar8._0_12_;
              local_70._12_4_ = uVar27;
            }
            local_70._8_4_ = (uint)uVar21 & 0xff;
          }
          pbVar18 = pbVar18 + 4;
          pbVar29 = pbVar29 + 4;
        } while (local_48 != pbVar18);
      }
      uVar11 = uVar11 + 1;
    } while ((uint)uVar11 < *(uint *)(lVar4 + 0x128));
    uVar9 = uVar9 & 0xff;
  }
  auVar7 = local_70;
  if (local_70._12_4_ != 0) {
    uVar11 = (ulong)(uint)local_70._0_4_;
    local_60 = local_60 + (ulong)(8 - (local_70._12_4_ & 7));
    uVar27 = local_70._0_4_ + 1;
    if (local_70._0_4_ != 0xffffffff) {
      sVar17 = 1;
      if ((uint)local_70._4_4_ < uVar27) {
        basisu::elemental_vector::increase_capacity
                  (uVar14,SUB41(uVar27,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
        sVar17 = (size_t)(uVar27 - local_70._0_4_);
      }
      memset((void *)((ulong)(uint)local_70._0_4_ + (long)local_78),0,sVar17);
    }
    local_70._0_4_ = uVar27;
    *(char *)((long)local_78 + uVar11) = auVar7[8];
    local_70._8_8_ = 0;
  }
  sVar17 = (size_t)(uint)local_70._0_4_;
  pvVar26 = *(void **)(this + 0x50);
  uVar27 = (int)this + 0x50;
  if (*(uint *)(this + 0x5c) < (uint)local_70._0_4_) {
    if (pvVar26 != (void *)0x0) {
      free(pvVar26);
      *(undefined8 *)(this + 0x50) = 0;
      *(undefined8 *)(this + 0x58) = 0;
    }
    basisu::elemental_vector::increase_capacity
              (uVar27,SUB41(local_70._0_4_,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    sVar17 = (size_t)(uint)local_70._0_4_;
    pvVar26 = *(void **)(this + 0x50);
  }
  else if (*(int *)(this + 0x58) != 0) {
    *(undefined4 *)(this + 0x58) = 0;
  }
  if ((pvVar26 != (void *)0x0) && (local_78 != (void *)0x0)) {
    memcpy(pvVar26,local_78,sVar17);
    sVar17 = (size_t)(uint)local_70._0_4_;
  }
  auVar6 = local_70._0_12_;
  uVar15 = *(uint *)(lVar4 + 0x128);
  uVar20 = (uint)sVar17;
  *(uint *)(this + 0x58) = uVar20;
  if (uVar15 * 4 <= uVar20) {
    if ((uint)local_70._4_4_ < 0x100000) {
      basisu::elemental_vector::increase_capacity
                (uVar14,false,0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      auVar6 = local_70._0_12_;
      uVar15 = *(uint *)(lVar4 + 0x128);
      uVar20 = local_70._0_4_;
      local_70._0_12_ = auVar6;
    }
    else {
      bVar31 = local_70._4_4_ != 0x100000;
      local_70._0_12_ = auVar6;
      if (bVar31) {
        local_a8 = (void *)0x0;
        local_a0 = 0;
        uVar15 = 0;
        if (0xfffff < uVar20) {
          uVar15 = uVar20;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_a8,SUB41(uVar15,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false)
        ;
        if (local_a0._4_4_ < (uint)local_70._0_4_) {
          if (local_a8 != (void *)0x0) {
            free(local_a8);
            local_a8 = (void *)0x0;
            local_a0 = 0;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_a8,SUB41(local_70._0_4_,0),0,
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        }
        else if ((int)local_a0 != 0) {
          local_a0 = (ulong)local_a0._4_4_ << 0x20;
        }
        if (local_a8 == (void *)0x0) {
LAB_00103be5:
          pvVar26 = local_78;
          local_78 = local_a8;
          local_70._4_4_ = local_a0._4_4_;
          if (pvVar26 != (void *)0x0) {
            free(pvVar26);
          }
          uVar20 = local_70._0_4_;
        }
        else {
          uVar20 = local_70._0_4_;
          if (local_78 != (void *)0x0) {
            memcpy(local_a8,local_78,(ulong)(uint)local_70._0_4_);
            goto LAB_00103be5;
          }
          local_70._4_4_ = local_a0._4_4_;
          local_78 = local_a8;
        }
        uVar15 = *(uint *)(lVar4 + 0x128);
      }
    }
    if (uVar20 != 0) {
      local_70._0_8_ = SUB128(local_70._0_12_,4) << 0x20;
    }
    local_70._8_8_ = _LC22;
    if (uVar15 == 0) {
      sVar17 = 0;
      uVar15 = 1;
      local_60 = 8;
      uVar28 = 4;
LAB_00103c99:
      sVar19 = 1;
      uVar11 = sVar17;
      if ((uint)local_70._4_4_ < uVar15) {
        basisu::elemental_vector::increase_capacity
                  (uVar14,SUB41(uVar15,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
        uVar11 = (ulong)(uint)local_70._0_4_;
        sVar19 = (size_t)(uVar15 - local_70._0_4_);
      }
      memset((void *)(uVar11 + (long)local_78),0,sVar19);
LAB_00103c5e:
      local_70._0_4_ = uVar15;
      *(undefined1 *)((long)local_78 + sVar17) = uVar28;
      sVar17 = (size_t)uVar15;
      local_70._8_8_ = 0;
    }
    else {
      lVar23 = 0;
      sVar17 = 0;
      uVar11 = 4;
      uVar15 = 3;
      local_60 = 3;
      do {
        uVar20 = *(uint *)(*(long *)(this + 0x130) + lVar23 * 4);
        uVar21 = 0;
        do {
          iVar3 = (int)uVar21;
          local_60 = local_60 + 8;
          lVar25 = *(long *)(this + 0xb0) + (ulong)uVar20 * 0x10;
          bVar13 = (byte)uVar15;
          uVar15 = uVar15 + 8;
          local_70._12_4_ = uVar15;
          uVar22 = (long)(int)((uint)*(byte *)(lVar25 + (ulong)(iVar3 + 1)) << 2 |
                               (uint)*(byte *)(lVar25 + (ulong)(iVar3 + 2)) << 4 |
                               (uint)*(byte *)(lVar25 + uVar21) |
                              (uint)*(byte *)(lVar25 + (ulong)(iVar3 + 3)) << 6) << (bVar13 & 0x3f)
                   | uVar11;
          if (7 < uVar15) {
            while( true ) {
              uVar28 = (undefined1)uVar22;
              uVar30 = (int)sVar17 + 1;
              if ((int)sVar17 != -1) {
                sVar19 = 1;
                uVar11 = sVar17;
                if ((uint)local_70._4_4_ < uVar30) {
                  basisu::elemental_vector::increase_capacity
                            (uVar14,SUB41(uVar30,0),1,(_func_void_void_ptr_void_ptr_uint *)0x1,false
                            );
                  uVar11 = (ulong)(uint)local_70._0_4_;
                  sVar19 = (size_t)(uVar30 - local_70._0_4_);
                }
                memset((void *)(uVar11 + (long)local_78),0,sVar19);
              }
              auVar7 = local_70;
              local_70._0_4_ = uVar30;
              auVar8 = local_70;
              uVar22 = uVar22 >> 8;
              *(undefined1 *)((long)local_78 + sVar17) = uVar28;
              local_70._12_4_ = auVar7._12_4_;
              uVar15 = local_70._12_4_ - 8;
              local_70._0_12_ = auVar8._0_12_;
              local_70._12_4_ = uVar15;
              if (uVar15 < 8) break;
              sVar17 = (size_t)uVar30;
            }
            sVar17 = (size_t)uVar30;
          }
          uVar11 = uVar22 & 0xff;
          uVar21 = (ulong)(iVar3 + 4U);
          uVar28 = (undefined1)uVar22;
          local_70._8_4_ = (int)uVar11;
        } while (iVar3 + 4U != 0x10);
        lVar23 = lVar23 + 1;
      } while ((uint)lVar23 < *(uint *)(lVar4 + 0x128));
      uVar9 = uVar9 & 0xff;
      if (uVar15 != 0) {
        local_60 = local_60 + (ulong)(8 - uVar15);
        uVar15 = (int)sVar17 + 1;
        if ((int)sVar17 != -1) goto LAB_00103c99;
        uVar15 = 0;
        sVar17 = 0xffffffff;
        goto LAB_00103c5e;
      }
    }
    pvVar26 = *(void **)(this + 0x50);
    if (*(uint *)(this + 0x5c) < (uint)sVar17) {
      uVar14 = (uint)sVar17;
      if (pvVar26 != (void *)0x0) {
        free(pvVar26);
        *(undefined8 *)(this + 0x50) = 0;
        *(undefined8 *)(this + 0x58) = 0;
        uVar14 = local_70._0_4_;
      }
      basisu::elemental_vector::increase_capacity
                (uVar27,SUB41(uVar14,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
      sVar17 = (size_t)(uint)local_70._0_4_;
      pvVar26 = *(void **)(this + 0x50);
    }
    else if (*(int *)(this + 0x58) != 0) {
      *(undefined4 *)(this + 0x58) = 0;
    }
    if ((pvVar26 != (void *)0x0) && (local_78 != (void *)0x0)) {
      memcpy(pvVar26,local_78,sVar17);
      sVar17 = (size_t)(uint)local_70._0_4_;
    }
    *(int *)(this + 0x58) = (int)sVar17;
    uVar15 = *(uint *)(lVar4 + 0x128);
  }
  if (*(uint *)(this + 0x28) == 0) {
    fVar32 = 0.0;
  }
  else {
    uVar14 = 0;
    piVar12 = (int *)(*(long *)(this + 0x20) + 4);
    piVar24 = piVar12 + (ulong)*(uint *)(this + 0x28) * 0xc;
    do {
      iVar3 = *piVar12;
      piVar1 = piVar12 + 1;
      piVar12 = piVar12 + 0xc;
      uVar14 = uVar14 + iVar3 * *piVar1;
    } while (piVar12 != piVar24);
    fVar32 = (float)uVar14;
  }
  basisu::debug_printf
            ("Selector codebook bits: %u bytes: %u, Bits per entry: %3.1f, Avg bits/texel: %3.3f\n",
             (double)(((float)sVar17 * _LC17) / (float)uVar15),
             (double)(((float)sVar17 * _LC17) / fVar32),(ulong)(uint)((int)sVar17 * 8),sVar17);
  if (local_78 != (void *)0x0) {
    free(local_78);
  }
LAB_0010365f:
  if (local_88 != (void *)0x0) {
    free(local_88);
  }
  if (local_98 != (void *)0x0) {
    free(local_98);
  }
  if (local_b8 != (uint *)0x0) {
    free(local_b8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basisu_backend::encode_image() */

ulong __thiscall basisu::basisu_backend::encode_image(basisu_backend *this)

{
  int *piVar1;
  color_rgba *pcVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  vector *pvVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  void *__ptr;
  undefined1 auVar13 [12];
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  long lVar22;
  uint *puVar23;
  int *piVar24;
  undefined8 *puVar25;
  byte bVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  int *piVar30;
  byte *pbVar31;
  int iVar32;
  undefined8 *puVar33;
  long lVar34;
  uint *puVar35;
  size_t sVar36;
  byte *pbVar37;
  int iVar38;
  uint uVar39;
  ulong uVar40;
  long lVar41;
  undefined8 *puVar42;
  ulong uVar43;
  uint uVar44;
  int iVar45;
  uint *puVar46;
  vector<unsigned_char> *pvVar47;
  vector<unsigned_char> *pvVar48;
  bool bVar49;
  uint uVar50;
  ulong uVar51;
  ulong uVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  byte *pbVar56;
  long *plVar57;
  long lVar58;
  uint uVar59;
  ulong uVar60;
  int iVar61;
  int iVar62;
  basisu_backend *pbVar63;
  uint uVar64;
  long lVar65;
  huffman_encoding_table *phVar66;
  huffman_encoding_table *this_00;
  long lVar67;
  vector<unsigned_char> *this_01;
  long lVar68;
  ulong uVar69;
  long in_FS_OFFSET;
  char cVar70;
  float fVar71;
  double dVar72;
  double dVar73;
  float fVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  undefined1 auVar79 [16];
  double dVar80;
  double local_320;
  uint local_2f8;
  uint local_2f4;
  uint local_2e8;
  uint local_2e4;
  uint local_2b8;
  ulong local_2b0;
  uint local_260;
  uint local_25c;
  void *local_250;
  uint local_218;
  uint local_214;
  uint local_1ec;
  void *local_1e8;
  undefined8 local_1e0;
  uint *local_1d8;
  ulong local_1d0;
  uint *local_1c8;
  ulong local_1c0;
  undefined8 *local_1b8;
  ulong local_1b0;
  uint *local_1a8;
  ulong local_1a0;
  uint *local_198;
  ulong local_190;
  undefined8 *local_188;
  ulong local_180;
  void *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  ulong local_140;
  uint local_138;
  interval_timer local_128 [32];
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  void *local_88;
  undefined1 local_80 [16];
  huffman_encoding_table *local_70;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  pvVar8 = *(vector **)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *(int *)(pvVar8 + 0x24);
  local_148 = (void *)0x0;
  local_140 = 0;
  basisu::elemental_vector::increase_capacity
            ((uint)&local_148,true,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
  memset((void *)((long)local_148 + (local_140 & 0xffffffff) * 4),0,
         (ulong)(0x40 - (uint)local_140) << 2);
  local_140 = CONCAT44(local_140._4_4_,0x40);
  local_138 = 0x20;
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  vector<unsigned_int>::resize((vector<unsigned_int> *)&local_1e8,0,false);
  vector<unsigned_int>::resize((vector<unsigned_int> *)&local_1e8,0x40,false);
  iVar45 = *(int *)(pvVar8 + 0x128);
  local_1d8 = (uint *)0x0;
  local_1d0 = 0;
  vector<unsigned_int>::resize((vector<unsigned_int> *)&local_1d8,0,false);
  vector<unsigned_int>::resize((vector<unsigned_int> *)&local_1d8,(ulong)(iVar45 + 0x41),false);
  local_1c8 = (uint *)0x0;
  local_1c0 = 0;
  vector<unsigned_int>::resize((vector<unsigned_int> *)&local_1c8,0,false);
  vector<unsigned_int>::resize((vector<unsigned_int> *)&local_1c8,0x40,false);
  iVar45 = *(int *)(this + 0x28);
  local_1b8 = (undefined8 *)0x0;
  local_1b0 = 0;
  if (iVar45 == 0) {
    local_2e4 = *(uint *)(pvVar8 + 0x128);
    local_2e8 = local_2e4 + 0x40;
    local_1ec = local_2e8;
    if (*(int *)(this + 0x98) != 0) {
      *(undefined4 *)(this + 0x98) = 0;
    }
  }
  else {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_1b8,SUB41(iVar45,0),(uint)(iVar45 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x10,false);
    puVar25 = local_1b8 + (local_1b0 & 0xffffffff) * 2;
    puVar33 = puVar25 + (ulong)(uint)(iVar45 - (int)local_1b0) * 2;
    for (; puVar25 != puVar33; puVar25 = puVar25 + 2) {
      *puVar25 = 0;
      puVar25[1] = 0;
    }
    local_1b0 = CONCAT44(local_1b0._4_4_,iVar45);
    local_2e4 = *(uint *)(pvVar8 + 0x128);
    uVar28 = *(uint *)(this + 0x28);
    uVar39 = *(uint *)(this + 0x98);
    local_2e8 = local_2e4 + 0x40;
    local_1ec = local_2e8;
    if (uVar39 != uVar28) {
      if (uVar39 <= uVar28) {
        if (*(uint *)(this + 0x9c) < uVar28) {
          basisu::elemental_vector::increase_capacity
                    ((int)this + 0x90,SUB41(uVar28,0),(uint)(uVar39 + 1 == uVar28),
                     (_func_void_void_ptr_void_ptr_uint *)0x2,false);
          uVar39 = *(uint *)(this + 0x98);
        }
        memset((void *)(*(long *)(this + 0x90) + (ulong)uVar39 * 2),0,(ulong)(uVar28 - uVar39) * 2);
      }
      *(uint *)(this + 0x98) = uVar28;
    }
  }
  local_1a8 = (uint *)0x0;
  uVar28 = *(uint *)(pvVar8 + 200);
  local_1a0 = 0;
  vector<unsigned_int>::resize((vector<unsigned_int> *)&local_1a8,0,false);
  vector<unsigned_int>::resize((vector<unsigned_int> *)&local_1a8,(ulong)uVar28,false);
  local_198 = (uint *)0x0;
  local_190 = 0;
  vector<unsigned_int>::resize((vector<unsigned_int> *)&local_198,0,false);
  vector<unsigned_int>::resize((vector<unsigned_int> *)&local_198,0x101,false);
  local_188 = (undefined8 *)0x0;
  local_180 = 0;
  iVar45 = *(int *)(this + 0x28);
  if (iVar45 != 0) {
    basisu::elemental_vector::increase_capacity
              ((uint)&local_188,SUB41(iVar45,0),(uint)(iVar45 == 1),
               (_func_void_void_ptr_void_ptr_uint *)0x10,false);
    puVar25 = local_188 + (local_180 & 0xffffffff) * 2;
    puVar33 = puVar25 + (ulong)(uint)(iVar45 - (int)local_180) * 2;
    for (; puVar25 != puVar33; puVar25 = puVar25 + 2) {
      *puVar25 = 0;
      puVar25[1] = 0;
    }
    local_180 = CONCAT44(local_180._4_4_,iVar45);
  }
  local_178 = (void *)0x0;
  local_170 = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  basisu::interval_timer::interval_timer(local_128);
  basisu::interval_timer::start();
  if (*(int *)(this + 0x28) == 0) {
    local_214 = 0;
    local_218 = 0;
    local_25c = 0;
  }
  else {
    lVar67 = 0;
    local_214 = 0;
    local_218 = 0;
    local_25c = 0;
    do {
      uVar51 = local_140;
      uVar50 = (uint)local_140;
      piVar21 = (int *)(lVar67 * 0x30 + *(long *)(this + 0x20));
      iVar45 = *piVar21;
      uVar28 = piVar21[5];
      uVar39 = piVar21[6];
      if (local_148 != (void *)0x0) {
        free(local_148);
        local_148 = (void *)0x0;
        local_140 = 0;
        if (uVar50 != 0) {
          basisu::elemental_vector::increase_capacity
                    ((uint)&local_148,SUB81(uVar51,0),(uint)(uVar50 == 1),
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          memset((void *)((long)local_148 + (local_140 & 0xffffffff) * 4),0,
                 (ulong)(uVar50 - (uint)local_140) << 2);
          local_140 = CONCAT44(local_140._4_4_,uVar50);
        }
      }
      local_138 = uVar50 >> 1;
      if (uVar28 == 0) {
joined_r0x00106765:
        if (uVar39 != 0) {
          local_250 = (void *)0x0;
LAB_00104284:
          if (-uVar28 != 0) {
            uVar50 = 0;
            iVar55 = -uVar28;
            do {
              iVar53 = iVar55 + uVar28;
              uVar15 = 0;
              do {
                while( true ) {
                  piVar21 = (int *)(*(long *)(this + 0xd0) + lVar67 * 0x18);
                  piVar21 = (int *)(*(long *)(piVar21 + 2) +
                                   (ulong)(*piVar21 * uVar50 + uVar15) * 0x14);
                  iVar18 = *piVar21;
                  if (iVar18 != 0) break;
                  *(undefined1 *)((long)local_250 + (ulong)(iVar53 + -1 + uVar15)) = 1;
LAB_001042d9:
                  if (iVar6 == 3) {
LAB_001058e0:
                    if ((char)piVar21[4] != '\0') {
                      *(undefined1 *)((long)local_250 + (ulong)(iVar53 + uVar15)) = 1;
                    }
                  }
                  uVar15 = uVar15 + 1;
                  if (uVar28 == uVar15) goto LAB_00104348;
                }
                if (iVar18 == 1) {
                  *(undefined1 *)((long)local_250 + (ulong)(iVar55 + uVar15)) = 1;
                  goto LAB_001042d9;
                }
                if (iVar18 != 2) goto LAB_001042d9;
                if (iVar6 == 3) goto LAB_001058e0;
                iVar18 = uVar15 - 1;
                uVar15 = uVar15 + 1;
                *(undefined1 *)((long)local_250 + (ulong)(uint)(iVar18 + iVar55)) = 1;
              } while (uVar28 != uVar15);
LAB_00104348:
              uVar50 = uVar50 + 1;
              iVar55 = iVar53;
            } while (uVar50 < uVar39);
          }
          local_260 = 0;
          local_2f8 = 0;
          iVar55 = 0;
          uVar15 = 0xffffffff;
          iVar53 = 0;
          uVar50 = 0;
          do {
            uVar16 = uVar50 + 1;
            uVar59 = 0;
            if (uVar28 != 0) {
              do {
                uVar64 = iVar45 + local_260 + uVar59;
                piVar21 = (int *)(lVar67 * 0x18 + *(long *)(this + 0xd0));
                iVar18 = *piVar21;
                lVar68 = *(long *)(piVar21 + 2);
                iVar32 = uVar50 * iVar18;
                puVar23 = (uint *)(lVar68 + (ulong)(iVar32 + uVar59) * 0x14);
                if (((uVar50 | uVar59) & 1) == 0) {
                  if ((uVar39 <= uVar50) || (uVar28 <= uVar59)) {
                    uVar29 = 3;
                  }
                  else {
                    uVar29 = *puVar23;
                  }
                  uVar17 = uVar59 + 1;
                  bVar49 = uVar17 < uVar28;
                  if ((uVar39 <= uVar50) || (!bVar49)) {
                    iVar38 = 3;
                  }
                  else {
                    iVar38 = *(int *)(lVar68 + (ulong)(iVar32 + uVar17) * 0x14);
                  }
                  iVar32 = iVar32 + iVar18;
                  uVar29 = iVar38 << 2 | uVar29;
                  if ((uVar28 <= uVar59) || (uVar39 <= uVar16)) {
                    uVar29 = uVar29 | 0x30;
                    if (bVar49) goto LAB_00105cdc;
LAB_00105eb3:
                    uVar29 = uVar29 | 0xc0;
                  }
                  else {
                    uVar29 = *(int *)(lVar68 + (ulong)(iVar32 + uVar59) * 0x14) << 4 | uVar29;
                    if (!bVar49) goto LAB_00105eb3;
LAB_00105cdc:
                    if (uVar39 <= uVar16) goto LAB_00105eb3;
                    uVar29 = *(int *)(lVar68 + (ulong)(iVar32 + uVar17) * 0x14) << 6 | uVar29;
                  }
                  if (uVar29 == uVar15) {
                    iVar55 = iVar55 + 1;
                    uVar15 = uVar29;
                  }
                  else {
                    if (0 < iVar55) {
                      if (iVar55 < 4) {
                        iVar18 = 0;
                        do {
                          local_198[uVar15] = local_198[uVar15] + 1;
                          iVar18 = iVar18 + 1;
                          local_88 = (void *)CONCAT44(local_88._4_4_,uVar15);
                          vector<unsigned_int>::push_back
                                    ((vector<unsigned_int> *)(local_188 + lVar67 * 2),
                                     (uint *)&local_88);
                        } while (iVar18 != iVar55);
                      }
                      else {
                        local_198[0x100] = local_198[0x100] + 1;
                        vector<unsigned_int>::push_back
                                  ((vector<unsigned_int> *)(local_188 + lVar67 * 2),
                                   &basist::ENDPOINT_PRED_REPEAT_LAST_SYMBOL);
                        local_88 = (void *)CONCAT44(local_88._4_4_,iVar55);
                        vector<unsigned_int>::push_back
                                  ((vector<unsigned_int> *)(local_188 + lVar67 * 2),
                                   (uint *)&local_88);
                      }
                      iVar55 = 0;
                    }
                    plVar57 = local_188 + lVar67 * 2;
                    local_198[uVar29] = local_198[uVar29] + 1;
                    uVar15 = *(uint *)(plVar57 + 1);
                    if (*(uint *)((long)plVar57 + 0xc) <= uVar15) {
                      basisu::elemental_vector::increase_capacity
                                ((uint)plVar57,(bool)((char)uVar15 + '\x01'),1,
                                 (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                      uVar15 = *(uint *)(plVar57 + 1);
                    }
                    *(uint *)(*plVar57 + (ulong)uVar15 * 4) = uVar29;
                    *(int *)(plVar57 + 1) = (int)plVar57[1] + 1;
                    uVar15 = uVar29;
                  }
                }
                uVar51 = (ulong)uVar64;
                uVar29 = uVar59 + 1;
                iVar18 = *(int *)(*(long *)(this + 0xe0) + (long)(int)puVar23[1] * 4);
                if (*puVar23 == 3) {
                  uVar17 = iVar18 - local_2f8;
                  if (*(float *)(this + 0xc) <= _LC24) {
LAB_00105a06:
                    uVar69 = (ulong)uVar17;
                    lVar68 = (long)iVar18 * 4;
                    puVar46 = (uint *)(*(long *)(this + 0xf0) + lVar68);
                    local_2f8 = iVar18;
                  }
                  else {
                    uVar44 = -uVar17;
                    if (0 < (int)uVar17) {
                      uVar44 = uVar17;
                    }
                    if (((int)uVar44 < 2) ||
                       (*(char *)((long)local_250 + (ulong)(local_260 + uVar59)) != '\0'))
                    goto LAB_00105a06;
                    bVar49 = (bool)((char)*(undefined8 *)(pvVar8 + 0x58) + (char)uVar64 * '@');
                    local_60 = *(ulong *)(*(long *)(pvVar8 + 0x68) + uVar51 * 8);
                    uVar69 = basisu::etc_block::evaluate_etc1_error
                                       ((color_rgba *)&local_60,bVar49,(uint)(byte)pvVar8[0x1c]);
                    if (uVar69 == 0) goto LAB_00105a06;
                    fVar71 = _LC24;
                    if (_LC24 <= *(float *)(this + 0xc)) {
                      fVar71 = *(float *)(this + 0xc);
                    }
                    fVar71 = (float)uVar69 * fVar71;
                    if (__LC26 <= fVar71) {
                      uVar69 = (long)(fVar71 - __LC26) ^ 0x8000000000000000;
                    }
                    else {
                      uVar69 = (ulong)fVar71;
                    }
                    iVar32 = 0;
                    uVar59 = (uint)local_60._3_1_;
                    local_2b0 = 0xffffffffffffffff;
                    iVar54 = (-(uint)(*(uint *)(this + 0x14) < 2) & 0xffffffd0) + 0x40;
                    lVar65 = *(long *)(this + 0xf0);
                    pbVar3 = (byte *)(*(long *)(this + 0xa0) + (long)(int)puVar23[1] * 0xc);
                    local_58 = local_60;
                    iVar38 = uVar44 - 1;
                    if (iVar54 < (int)(uVar44 - 1)) {
                      iVar38 = iVar54;
                    }
                    iVar54 = local_2f8 - iVar38;
                    do {
                      iVar61 = *(int *)(pvVar8 + 200);
                      iVar62 = iVar54 + iVar61;
                      if ((-1 < iVar54) && (iVar62 = iVar54 - iVar61, iVar54 < iVar61)) {
                        iVar62 = iVar54;
                      }
                      if ((iVar62 != iVar18) &&
                         (*(char *)(*(long *)(this + 0x110) + (long)iVar62) != '\0')) {
                        pcVar2 = (color_rgba *)
                                 (*(long *)(this + 0xa0) +
                                 (ulong)*(uint *)(lVar65 + (long)iVar62 * 4) * 0xc);
                        if (*(uint *)(this + 0x14) < 2) {
                          if (*(uint *)(pcVar2 + 4) <= (uint)((int)uVar59 >> 5)) {
                            iVar19 = (uint)pbVar3[1] - (uint)(byte)pcVar2[1];
                            iVar61 = -iVar19;
                            if (0 < iVar19) {
                              iVar61 = iVar19;
                            }
                            iVar20 = (uint)*pbVar3 - (uint)(byte)*pcVar2;
                            iVar19 = -iVar20;
                            if (0 < iVar20) {
                              iVar19 = iVar20;
                            }
                            iVar20 = (uint)pbVar3[2] - (uint)(byte)pcVar2[2];
                            if (iVar20 < 1) {
                              iVar20 = -iVar20;
                            }
                            if (iVar20 + iVar61 + iVar19 < 9) goto LAB_0010619d;
                          }
                        }
                        else {
LAB_0010619d:
                          local_58 = local_58 | 0x2000000;
                          iVar61 = basisu::etc_block::pack_color5(pcVar2,false,0x7f);
                          local_58._0_3_ =
                               CONCAT12((byte)(iVar61 << 3) | local_58._2_1_ & 7,
                                        CONCAT11((char)((ushort)iVar61 >> 5) << 3,
                                                 ((byte)((uint)iVar61 >> 8) >> 2) << 3) |
                                        _LC10 & (ushort)local_58);
                          uVar14 = basisu::etc_block::pack_delta3(0,0,0);
                          uVar9 = local_58;
                          local_58._0_2_ =
                               CONCAT11(local_58._1_1_ & 0xf8 | (byte)(uVar14 >> 3) & 7,
                                        (byte)local_58._0_1_ & 0xf8 | (byte)(uVar14 >> 6) & 7);
                          local_58._2_1_ = SUB81(uVar9,2);
                          local_58._0_3_ =
                               CONCAT12((byte)uVar14 & 7 | local_58._2_1_ & 0xf8,(ushort)local_58);
                          local_58._3_1_ = SUB81(uVar9,3);
                          bVar27 = local_58._3_1_ & 3;
                          local_58._4_4_ = SUB84(uVar9,4);
                          local_58._0_4_ =
                               CONCAT13(bVar27 | (byte)(*(int *)(pcVar2 + 4) << 5) |
                                        (byte)(*(int *)(pcVar2 + 4) << 2),(undefined3)local_58);
                          uVar60 = basisu::etc_block::evaluate_etc1_error
                                             ((color_rgba *)&local_58,bVar49,
                                              (uint)(byte)pvVar8[0x1c]);
                          lVar65 = *(long *)(this + 0xf0);
                          if ((uVar60 < local_2b0) && (uVar60 <= uVar69)) {
                            local_2b0 = uVar60;
                            iVar32 = iVar62;
                          }
                        }
                      }
                      iVar54 = iVar54 + 1;
                    } while (iVar54 != iVar38 + local_2f8);
                    uVar69 = (ulong)uVar17;
                    if (local_2b0 == 0xffffffffffffffff) {
                      lVar68 = (long)iVar18 * 4;
                      puVar46 = (uint *)(lVar65 + lVar68);
                      local_2f8 = iVar18;
                    }
                    else {
                      local_214 = local_214 + 1;
                      lVar68 = (long)iVar32 * 4;
                      puVar46 = (uint *)(lVar65 + lVar68);
                      puVar23[1] = *puVar46;
                      uVar69 = (ulong)(iVar32 - local_2f8);
                      local_2f8 = iVar32;
                    }
                  }
                  if ((int)uVar69 < 0) {
                    uVar69 = (ulong)(uint)((int)uVar69 + *(int *)(pvVar8 + 200));
                  }
                  local_1a8[uVar69] = local_1a8[uVar69] + 1;
                  uVar69 = local_170 & 0xffffffff;
                  if (local_170._4_4_ <= (uint)local_170) goto LAB_00105a4f;
                }
                else {
                  lVar68 = (long)iVar18 * 4;
                  uVar69 = local_170 & 0xffffffff;
                  puVar46 = (uint *)(*(long *)(this + 0xf0) + lVar68);
                  local_2f8 = iVar18;
                  if (local_170._4_4_ <= (uint)local_170) {
LAB_00105a4f:
                    basisu::elemental_vector::increase_capacity
                              ((uint)&local_178,(bool)((char)(uint)local_170 + '\x01'),1,
                               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                    uVar69 = local_170 & 0xffffffff;
                  }
                }
                *(uint *)((long)local_178 + uVar69 * 4) = *puVar46;
                local_170 = CONCAT44(local_170._4_4_,(uint)local_170 + 1);
                if ((iVar6 != 3) || (*puVar23 != 2)) {
                  cVar70 = (char)puVar23[4];
                  uVar59 = *(uint *)(*(long *)(this + 0x120) + (long)(int)puVar23[2] * 4);
                  fVar71 = _LC24;
                  if (_LC24 <= *(float *)(this + 0x10)) {
                    fVar71 = *(float *)(this + 0x10);
                  }
                  if (cVar70 == '\0') {
                    if ((*(uint *)(this + 0x14) < 2) && ((uint)local_140 != 0)) goto LAB_00105abf;
LAB_001044e1:
                    lVar65 = uVar51 * 0x40 + *(long *)(pvVar8 + 0x58);
                    uVar9 = *(undefined8 *)(*(long *)(pvVar8 + 0x68) + uVar51 * 8);
                    pcVar2 = (color_rgba *)
                             (*(long *)(this + 0xa0) +
                             (ulong)*(uint *)(*(long *)(this + 0xf0) + lVar68) * 0xc);
                    local_60._3_1_ = (byte)((ulong)uVar9 >> 0x18);
                    bVar27 = local_60._3_1_;
                    local_60 = uVar9;
                    uVar64 = basisu::etc_block::pack_color5(pcVar2,false,0x7f);
                    uVar17 = basisu::etc_block::pack_delta3(0,0,0);
                    iVar18 = *(int *)(pcVar2 + 4);
                    local_60 = CONCAT44(local_60._4_4_,
                                        ((((bVar27 & 1 | iVar18 << 5 | iVar18 << 2) & 0xff | 2) << 8
                                         | (uVar64 & 0x1f) << 3 | uVar17 & 7) << 8 |
                                        (uint)(byte)((char)((ushort)uVar64 >> 5) << 3 |
                                                    (byte)((ushort)uVar17 >> 3) & 7)) << 8 |
                                        ((ushort)((ushort)uVar64 >> 10) & 0x1f) << 3 |
                                        (ushort)((ushort)uVar17 >> 6) & 7);
                    etc_block::get_block_colors((etc_block *)&local_60,(color_rgba *)&local_58,0);
                    pbVar3 = (byte *)(*(long *)(this + 0xb0) + (long)(int)puVar23[2] * 0x10);
                    if (pvVar8[0x1c] == (vector)0x0) {
                      lVar68 = 0;
                      uVar51 = 0;
                      do {
                        lVar22 = (ulong)pbVar3[lVar68] * 4;
                        iVar18 = (uint)*(byte *)(lVar65 + lVar68 * 4) -
                                 (uint)(byte)((color_rgba *)&local_58)[lVar22];
                        iVar38 = (uint)*(byte *)(lVar65 + 1 + lVar68 * 4) -
                                 (uint)*(byte *)((long)&local_58 + lVar22 + 1);
                        lVar34 = lVar68 * 4;
                        lVar68 = lVar68 + 1;
                        iVar32 = (uint)*(byte *)(lVar65 + 2 + lVar34) -
                                 (uint)*(byte *)((long)&local_58 + lVar22 + 2);
                        uVar51 = uVar51 + (long)(iVar18 * iVar18 + iVar38 * iVar38 + iVar32 * iVar32
                                                );
                      } while (lVar68 != 0x10);
                      if ((long)uVar51 < 0) goto LAB_00106487;
LAB_00104743:
                      fVar74 = (float)(long)uVar51;
                    }
                    else {
                      lVar68 = 0;
                      uVar51 = 0;
                      do {
                        uVar69 = (ulong)pbVar3[lVar68];
                        iVar18 = (uint)*(byte *)(lVar65 + lVar68 * 4) -
                                 (uint)*(byte *)((long)&local_58 + uVar69 * 4);
                        iVar32 = (uint)*(byte *)(lVar65 + 2 + lVar68 * 4) -
                                 (uint)*(byte *)((long)&local_58 + uVar69 * 4 + 2);
                        lVar22 = lVar68 * 4;
                        lVar68 = lVar68 + 1;
                        lVar34 = (long)(int)(((uint)*(byte *)(lVar65 + 1 + lVar22) -
                                             (uint)*(byte *)((long)&local_58 + uVar69 * 4 + 1)) *
                                             0x5c + iVar18 * 0x1b + iVar32 * 9);
                        lVar22 = iVar18 * 0x80 - lVar34;
                        lVar58 = iVar32 * 0x80 - lVar34;
                        uVar51 = uVar51 + (((uint)((int)(lVar22 * lVar22 >> 7) * 0x1a) >> 7) +
                                           ((uint)((int)(lVar58 * lVar58 >> 7) * 3) >> 7) +
                                          (int)(lVar34 * lVar34 >> 7));
                      } while (lVar68 != 0x10);
                      if (-1 < (long)uVar51) goto LAB_00104743;
LAB_00106487:
                      fVar74 = (float)uVar51;
                    }
                    fVar71 = fVar71 * fVar74;
                    if ((float)((uint)fVar71 & _LC28) < _LC27) {
                      fVar71 = (float)((uint)((float)(int)fVar71 +
                                             (float)(-(uint)((float)(int)fVar71 < fVar71) &
                                                    (uint)_LC24)) | ~_LC28 & (uint)fVar71);
                    }
                    if (__LC26 <= fVar71) {
                      uVar51 = (long)(fVar71 - __LC26) ^ 0x8000000000000000;
                    }
                    else {
                      uVar51 = (ulong)fVar71;
                    }
                    lVar68 = *(long *)(this + 0x130);
                    if ((uint)local_140 != 0) {
                      uVar17 = 0;
                      uVar60 = 0;
                      uVar69 = 0xffffffffffffffff;
                      uVar64 = 0;
                      do {
                        uVar44 = *(uint *)((long)local_148 + uVar60 * 4);
                        pbVar56 = (byte *)((ulong)*(uint *)(lVar68 + (long)(int)uVar44 * 4) * 0x10 +
                                          *(long *)(this + 0xb0));
                        if (*(uint *)(this + 0x14) < 2) {
                          iVar18 = 0;
                          pbVar31 = pbVar56;
                          pbVar37 = pbVar3;
                          do {
                            iVar38 = (uint)pbVar37[1] - (uint)pbVar31[1];
                            iVar32 = -iVar38;
                            if (0 < iVar38) {
                              iVar32 = iVar38;
                            }
                            iVar54 = (uint)*pbVar37 - (uint)*pbVar31;
                            iVar38 = -iVar54;
                            if (0 < iVar54) {
                              iVar38 = iVar54;
                            }
                            iVar61 = (uint)pbVar37[2] - (uint)pbVar31[2];
                            iVar54 = -iVar61;
                            if (0 < iVar61) {
                              iVar54 = iVar61;
                            }
                            iVar62 = (uint)pbVar37[3] - (uint)pbVar31[3];
                            iVar61 = -iVar62;
                            if (0 < iVar62) {
                              iVar61 = iVar62;
                            }
                            iVar18 = iVar18 + iVar32 + iVar38 + iVar54 + iVar61;
                            if (10 < iVar18) goto LAB_00104977;
                            pbVar37 = pbVar37 + 4;
                            pbVar31 = pbVar31 + 4;
                          } while (pbVar37 != pbVar3 + 0x10);
                        }
                        uVar43 = uVar69;
                        if (uVar51 <= uVar69) {
                          uVar43 = uVar51;
                        }
                        lVar22 = 0;
                        uVar52 = 0;
                        if (pvVar8[0x1c] == (vector)0x0) {
                          do {
                            lVar34 = (ulong)pbVar56[lVar22] * 4;
                            iVar38 = (uint)*(byte *)(lVar65 + lVar22 * 4) -
                                     (uint)(byte)((color_rgba *)&local_58)[lVar34];
                            iVar32 = (uint)*(byte *)(lVar65 + 1 + lVar22 * 4) -
                                     (uint)*(byte *)((long)&local_58 + lVar34 + 1);
                            iVar18 = (uint)*(byte *)(lVar65 + 2 + lVar22 * 4) -
                                     (uint)*(byte *)((long)&local_58 + lVar34 + 2);
                            uVar52 = uVar52 + (long)(iVar32 * iVar32 + iVar38 * iVar38 +
                                                    iVar18 * iVar18);
                            if (uVar43 < uVar52) goto LAB_00104977;
                            lVar22 = lVar22 + 1;
                          } while (lVar22 != 0x10);
                        }
                        else {
                          do {
                            uVar40 = (ulong)pbVar56[lVar22];
                            iVar32 = (uint)*(byte *)(lVar65 + lVar22 * 4) -
                                     (uint)*(byte *)((long)&local_58 + uVar40 * 4);
                            iVar18 = (uint)*(byte *)(lVar65 + 2 + lVar22 * 4) -
                                     (uint)*(byte *)((long)&local_58 + uVar40 * 4 + 2);
                            lVar41 = (long)(int)(iVar32 * 0x1b +
                                                 ((uint)*(byte *)(lVar65 + 1 + lVar22 * 4) -
                                                 (uint)*(byte *)((long)&local_58 + uVar40 * 4 + 1))
                                                 * 0x5c + iVar18 * 9);
                            lVar58 = iVar32 * 0x80 - lVar41;
                            lVar34 = iVar18 * 0x80 - lVar41;
                            uVar52 = uVar52 + (((uint)((int)(lVar34 * lVar34 >> 7) * 3) >> 7) +
                                               ((uint)((int)(lVar58 * lVar58 >> 7) * 0x1a) >> 7) +
                                              (int)(lVar41 * lVar41 >> 7));
                            if (uVar43 < uVar52) goto LAB_00104977;
                            lVar22 = lVar22 + 1;
                          } while (lVar22 != 0x10);
                        }
                        if ((uVar52 < uVar69) && (uVar52 <= uVar43)) {
                          uVar64 = (uint)uVar60;
                          uVar69 = uVar52;
                          uVar17 = uVar44;
                        }
LAB_00104977:
                        uVar60 = uVar60 + 1;
                      } while (uVar60 != (local_140 & 0xffffffff));
                      if (uVar69 != 0xffffffffffffffff) {
                        uVar51 = (ulong)uVar64;
                        local_218 = local_218 + (uVar17 != uVar59);
                        local_25c = local_25c + 1;
                        piVar21 = (int *)((long)local_1e8 + uVar51 * 4);
                        *piVar21 = *piVar21 + 1;
                        cVar70 = uVar64 != 0;
                        uVar59 = uVar17;
                        goto LAB_001049e8;
                      }
                    }
                    cVar70 = '\x01';
                    uVar51 = 0xffffffff;
                  }
                  else {
                    if ((uint)local_140 != 0) {
LAB_00105abf:
                      uVar69 = 0;
                      do {
                        if (uVar59 == *(uint *)((long)local_148 + uVar69 * 4)) {
                          local_25c = local_25c + 1;
                          uVar51 = uVar69 & 0xffffffff;
                          lVar68 = *(long *)(this + 0x130);
                          piVar21 = (int *)((long)local_1e8 + uVar69 * 4);
                          *piVar21 = *piVar21 + 1;
                          cVar70 = (int)uVar69 != 0;
                          goto LAB_001049e8;
                        }
                        uVar69 = uVar69 + 1;
                      } while ((uint)uVar69 < (uint)local_140);
                      if (cVar70 == '\0') goto LAB_001044e1;
                    }
                    lVar68 = *(long *)(this + 0x130);
                    uVar51 = 0xffffffff;
                  }
LAB_001049e8:
                  puVar23[2] = *(uint *)(lVar68 + (long)(int)uVar59 * 4);
                  uVar64 = (uint)uVar51;
                  if ((iVar53 == 0) || (cVar70 == '\0')) {
LAB_0010597c:
                    if ((int)uVar64 < 0) goto LAB_00105b13;
                    if (uVar64 != 0) goto LAB_00104aa8;
                    puVar23[3] = 0;
                    iVar53 = iVar53 + 1;
                  }
                  else {
                    plVar57 = local_1b8 + lVar67 * 2;
                    uVar17 = *(uint *)(plVar57 + 1);
                    if (iVar53 < 3) {
                      iVar18 = 0;
                      if (0 < iVar53) {
                        plVar57 = local_1b8 + lVar67 * 2;
                        uVar69 = (ulong)*(uint *)(plVar57 + 1);
                        if (*(uint *)((long)plVar57 + 0xc) <= *(uint *)(plVar57 + 1))
                        goto LAB_00105bf0;
                        while( true ) {
                          iVar18 = iVar18 + 1;
                          *(uint *)(*plVar57 + uVar69 * 4) = local_2e4;
                          *(int *)(plVar57 + 1) = (int)plVar57[1] + 1;
                          local_1d8[local_2e4] = local_1d8[local_2e4] + 1;
                          if (iVar18 == iVar53) break;
                          plVar57 = local_1b8 + lVar67 * 2;
                          uVar69 = (ulong)*(uint *)(plVar57 + 1);
                          if (*(uint *)((long)plVar57 + 0xc) <= *(uint *)(plVar57 + 1)) {
LAB_00105bf0:
                            basisu::elemental_vector::increase_capacity
                                      ((uint)plVar57,(bool)((char)uVar69 + '\x01'),1,
                                       (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                            uVar69 = (ulong)*(uint *)(plVar57 + 1);
                          }
                        }
                        iVar53 = 0;
                        goto LAB_0010597c;
                      }
                    }
                    else {
                      if (*(uint *)((long)plVar57 + 0xc) <= uVar17) {
                        basisu::elemental_vector::increase_capacity
                                  ((uint)plVar57,(bool)((char)uVar17 + '\x01'),1,
                                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                        uVar17 = *(uint *)(plVar57 + 1);
                      }
                      *(uint *)(*plVar57 + (ulong)uVar17 * 4) = local_2e8;
                      *(int *)(plVar57 + 1) = (int)plVar57[1] + 1;
                      plVar57 = local_1b8 + lVar67 * 2;
                      uVar17 = *(uint *)(plVar57 + 1);
                      if (*(uint *)((long)plVar57 + 0xc) <= uVar17) {
                        basisu::elemental_vector::increase_capacity
                                  ((uint)plVar57,(bool)((char)uVar17 + '\x01'),1,
                                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                        uVar17 = *(uint *)(plVar57 + 1);
                      }
                      *(int *)(*plVar57 + (ulong)uVar17 * 4) = iVar53;
                      *(int *)(plVar57 + 1) = (int)plVar57[1] + 1;
                      if (iVar53 - 3U < 0x3f) {
                        local_1c8[iVar53 - 3U] = local_1c8[iVar53 - 3U] + 1;
                      }
                      else {
                        local_1c8[0x3f] = local_1c8[0x3f] + 1;
                      }
                      local_1d8[local_2e8] = local_1d8[local_2e8] + 1;
                    }
                    iVar53 = 0;
                    if ((int)uVar64 < 0) {
                      iVar53 = 0;
LAB_00105b13:
                      plVar57 = local_1b8 + lVar67 * 2;
                      uVar17 = *(uint *)(plVar57 + 1);
                      if (*(uint *)((long)plVar57 + 0xc) <= uVar17) {
                        basisu::elemental_vector::increase_capacity
                                  ((uint)plVar57,(bool)((char)uVar17 + '\x01'),1,
                                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                        uVar17 = *(uint *)(plVar57 + 1);
                      }
                      *(uint *)(*plVar57 + (ulong)uVar17 * 4) = uVar59;
                      *(int *)(plVar57 + 1) = (int)plVar57[1] + 1;
                      local_1d8[uVar59] = local_1d8[uVar59] + 1;
                      uVar51 = (ulong)local_138;
                      puVar23[3] = uVar64;
                      local_138 = local_138 + 1;
                      *(uint *)((long)local_148 + uVar51 * 4) = uVar59;
                      if (local_138 == (uint)local_140) {
                        local_138 = (uint)local_140 >> 1;
                      }
                    }
                    else {
LAB_00104aa8:
                      plVar57 = local_1b8 + lVar67 * 2;
                      uVar59 = *(uint *)(plVar57 + 1);
                      if (*(uint *)((long)plVar57 + 0xc) <= uVar59) {
                        basisu::elemental_vector::increase_capacity
                                  ((uint)plVar57,(bool)((char)uVar59 + '\x01'),1,
                                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                        uVar59 = *(uint *)(plVar57 + 1);
                      }
                      *(uint *)(*plVar57 + (ulong)uVar59 * 4) = uVar64 + local_2e4;
                      *(int *)(plVar57 + 1) = (int)plVar57[1] + 1;
                      local_1d8[uVar64 + local_2e4] = local_1d8[uVar64 + local_2e4] + 1;
                      puVar23[3] = uVar64;
                      if ((uint)local_140 != 0) {
                        puVar4 = (undefined4 *)((long)local_148 + (uVar51 >> 1) * 4);
                        puVar5 = (undefined4 *)((long)local_148 + (long)(int)uVar64 * 4);
                        uVar7 = *puVar4;
                        *puVar4 = *puVar5;
                        *puVar5 = uVar7;
                      }
                    }
                  }
                }
                uVar59 = puVar23[2];
                if (local_160._4_4_ <= (uint)local_160) {
                  basisu::elemental_vector::increase_capacity
                            ((uint)&local_168,(bool)((char)local_160 + '\x01'),1,
                             (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                }
                *(uint *)((long)local_168 + (ulong)(uint)local_160 * 4) = uVar59;
                local_160 = CONCAT44(local_160._4_4_,(uint)local_160 + 1);
                uVar59 = uVar29;
              } while (uVar28 != uVar29);
            }
            local_260 = local_260 + uVar28;
            uVar50 = uVar16;
          } while (uVar39 != uVar16);
          if (0 < iVar55) {
            if (iVar55 < 4) {
              iVar45 = 0;
              do {
                local_198[uVar15] = local_198[uVar15] + 1;
                iVar45 = iVar45 + 1;
                local_88 = (void *)CONCAT44(local_88._4_4_,uVar15);
                vector<unsigned_int>::push_back
                          ((vector<unsigned_int> *)(local_188 + lVar67 * 2),(uint *)&local_88);
              } while (iVar45 != iVar55);
            }
            else {
              local_198[0x100] = local_198[0x100] + 1;
              vector<unsigned_int>::push_back
                        ((vector<unsigned_int> *)(local_188 + lVar67 * 2),
                         &basist::ENDPOINT_PRED_REPEAT_LAST_SYMBOL);
              local_88 = (void *)CONCAT44(local_88._4_4_,iVar55);
              vector<unsigned_int>::push_back
                        ((vector<unsigned_int> *)(local_188 + lVar67 * 2),(uint *)&local_88);
            }
          }
          if (iVar53 != 0) {
            if (iVar53 < 3) {
              iVar45 = 0;
              if (0 < iVar53) {
                do {
                  iVar45 = iVar45 + 1;
                  local_88 = (void *)CONCAT44(local_88._4_4_,local_2e4);
                  vector<unsigned_int>::push_back
                            ((vector<unsigned_int> *)(local_1b8 + lVar67 * 2),(uint *)&local_88);
                  local_1d8[local_2e4] = local_1d8[local_2e4] + 1;
                } while (iVar45 != iVar53);
              }
            }
            else {
              vector<unsigned_int>::push_back
                        ((vector<unsigned_int> *)(local_1b8 + lVar67 * 2),&local_1ec);
              local_88 = (void *)CONCAT44(local_88._4_4_,iVar53);
              vector<unsigned_int>::push_back
                        ((vector<unsigned_int> *)(local_1b8 + lVar67 * 2),(uint *)&local_88);
              if (iVar53 - 3U < 0x3f) {
                local_1c8[iVar53 - 3U] = local_1c8[iVar53 - 3U] + 1;
              }
              else {
                local_1c8[0x3f] = local_1c8[0x3f] + 1;
              }
              local_1d8[local_2e8] = local_1d8[local_2e8] + 1;
            }
          }
          goto LAB_00104c66;
        }
      }
      else {
        local_88 = (void *)0x0;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_80._8_8_;
        local_80 = auVar11 << 0x40;
        iVar55 = uVar28 * uVar39;
        if (iVar55 == 0) goto joined_r0x00106765;
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_88,SUB41(iVar55,0),(uint)(iVar55 == 1),
                   (_func_void_void_ptr_void_ptr_uint *)0x1,false);
        memset((void *)((ulong)(uint)local_80._0_4_ + (long)local_88),0,
               (ulong)(uint)(iVar55 - local_80._0_4_));
        local_250 = local_88;
        if (uVar39 != 0) goto LAB_00104284;
LAB_00104c66:
        if (local_250 != (void *)0x0) {
          free(local_250);
        }
      }
      lVar67 = lVar67 + 1;
    } while ((uint)lVar67 < *(uint *)(this + 0x28));
  }
  basisu::interval_timer::get_elapsed_secs();
  basisu::debug_printf("basisu_backend::encode_image: Total prep time: %3.2f\n");
  if (*(uint *)(this + 0x28) == 0) {
    fVar71 = 0.0;
  }
  else {
    uVar28 = 0;
    piVar21 = (int *)(*(long *)(this + 0x20) + 0x14);
    piVar24 = piVar21 + (ulong)*(uint *)(this + 0x28) * 0xc;
    do {
      iVar45 = *piVar21;
      piVar30 = piVar21 + 1;
      piVar21 = piVar21 + 0xc;
      uVar28 = uVar28 + iVar45 * *piVar30;
    } while (piVar21 != piVar24);
    fVar71 = (float)uVar28;
  }
  basisu::debug_printf
            ("Endpoint pred RDO total endpoint indices remapped: %u %3.2f%%\n",
             (double)(((float)local_214 * _LC30) / fVar71),(ulong)local_214);
  if (*(uint *)(this + 0x28) == 0) {
    fVar71 = 0.0;
  }
  else {
    uVar28 = 0;
    piVar21 = (int *)(*(long *)(this + 0x20) + 0x14);
    piVar24 = piVar21 + (ulong)*(uint *)(this + 0x28) * 0xc;
    do {
      iVar45 = *piVar21;
      piVar30 = piVar21 + 1;
      piVar21 = piVar21 + 0xc;
      uVar28 = uVar28 + iVar45 * *piVar30;
    } while (piVar21 != piVar24);
    fVar71 = (float)uVar28;
  }
  basisu::debug_printf
            ("Selector history RDO total selector indices remapped: %u %3.2f%%, Used history buf: %u %3.2f%%\n"
             ,(double)(((float)local_218 * _LC30) / fVar71),
             (double)(((float)local_25c * _LC30) / fVar71),(ulong)local_218,(ulong)local_25c);
  if (((local_214 != 0) && (1 < *(uint *)(this + 0x14))) && (this[0x18] == (basisu_backend)0x0)) {
    local_88 = (void *)0x0;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_80._8_8_;
    local_80 = auVar12 << 0x40;
    basisu::basisu_frontend::reoptimize_remapped_endpoints
              (pvVar8,(vector *)&local_178,SUB81(&local_88,0),(vector *)0x0);
    create_endpoint_palette(this);
    if (local_88 != (void *)0x0) {
      free(local_88);
    }
  }
  if (*(int *)(*(long *)this + 0x24) == 3) {
    check_for_valid_cr_blocks(this);
  }
  compute_slice_crcs(this);
  puVar23 = local_198;
  if ((int)local_190 == 0) {
    dVar76 = 0.0;
    dVar75 = 0.0;
  }
  else {
    puVar46 = local_198 + (local_190 & 0xffffffff);
    uVar51 = 0;
    puVar35 = local_198;
    do {
      uVar28 = *puVar35;
      puVar35 = puVar35 + 1;
      uVar51 = uVar51 + uVar28;
    } while (puVar35 != puVar46);
    dVar75 = 0.0;
    if ((double)uVar51 != 0.0) {
      dVar75 = 0.0;
      dVar76 = _LC33 / (double)uVar51;
      puVar35 = local_198;
      do {
        while (uVar28 = *puVar35, uVar28 != 0) {
          puVar35 = puVar35 + 1;
          dVar77 = (double)uVar28;
          dVar72 = log(dVar76 * dVar77);
          dVar75 = dVar75 + dVar72 * __LC34 * dVar77;
          if (puVar35 == puVar46) goto LAB_00104ecd;
        }
        puVar35 = puVar35 + 1;
      } while (puVar35 != puVar46);
    }
LAB_00104ecd:
    uVar51 = 0;
    do {
      uVar28 = *puVar23;
      puVar23 = puVar23 + 1;
      uVar51 = uVar51 + uVar28;
    } while (puVar23 != puVar46);
    if ((long)uVar51 < 0) {
      dVar76 = (double)uVar51;
    }
    else {
      dVar76 = (double)(long)uVar51;
    }
  }
  puVar23 = local_1a8;
  if ((int)local_1a0 == 0) {
    dVar72 = 0.0;
    dVar77 = 0.0;
LAB_00104fdf:
    dVar77 = dVar77 / dVar72;
    if ((uint)local_1d0 != 0) goto LAB_00104ff2;
LAB_0010671a:
    dVar73 = 0.0;
    dVar72 = dVar73;
  }
  else {
    puVar46 = local_1a8 + (local_1a0 & 0xffffffff);
    uVar51 = 0;
    puVar35 = local_1a8;
    do {
      uVar28 = *puVar35;
      puVar35 = puVar35 + 1;
      uVar51 = uVar51 + uVar28;
    } while (puVar35 != puVar46);
    dVar77 = 0.0;
    if ((double)uVar51 != 0.0) {
      dVar77 = 0.0;
      dVar72 = _LC33 / (double)uVar51;
      puVar35 = local_1a8;
      do {
        while (uVar28 = *puVar35, uVar28 != 0) {
          puVar35 = puVar35 + 1;
          dVar78 = (double)uVar28;
          dVar73 = log(dVar72 * dVar78);
          dVar77 = dVar77 + dVar73 * __LC34 * dVar78;
          if (puVar35 == puVar46) goto LAB_00104fbd;
        }
        puVar35 = puVar35 + 1;
      } while (puVar35 != puVar46);
    }
LAB_00104fbd:
    uVar51 = 0;
    do {
      uVar28 = *puVar23;
      puVar23 = puVar23 + 1;
      uVar51 = uVar51 + uVar28;
    } while (puVar23 != puVar46);
    if (-1 < (long)uVar51) {
      dVar72 = (double)(long)uVar51;
      goto LAB_00104fdf;
    }
    dVar77 = dVar77 / (double)uVar51;
    if ((uint)local_1d0 == 0) goto LAB_0010671a;
LAB_00104ff2:
    puVar46 = local_1d8;
    puVar23 = local_1d8 + (uint)local_1d0;
    uVar51 = 0;
    puVar35 = local_1d8;
    do {
      uVar28 = *puVar35;
      puVar35 = puVar35 + 1;
      uVar51 = uVar51 + uVar28;
    } while (puVar35 != puVar23);
    dVar72 = 0.0;
    if ((double)uVar51 != 0.0) {
      dVar72 = 0.0;
      dVar73 = _LC33 / (double)uVar51;
      puVar35 = local_1d8;
      do {
        while (uVar28 = *puVar35, uVar28 != 0) {
          puVar35 = puVar35 + 1;
          dVar80 = (double)uVar28;
          dVar78 = log(dVar73 * dVar80);
          dVar72 = dVar72 + dVar78 * __LC34 * dVar80;
          if (puVar35 == puVar23) goto LAB_001050b6;
        }
        puVar35 = puVar35 + 1;
      } while (puVar35 != puVar23);
    }
LAB_001050b6:
    uVar51 = 0;
    do {
      uVar28 = *puVar46;
      puVar46 = puVar46 + 1;
      uVar51 = uVar51 + uVar28;
    } while (puVar46 != puVar23);
    if ((long)uVar51 < 0) {
      dVar73 = (double)uVar51;
    }
    else {
      dVar73 = (double)(long)uVar51;
    }
  }
  basisu::debug_printf
            ("Histogram entropy: EndpointPred: %3.3f DeltaEndpoint: %3.3f DeltaSelector: %3.3f\n",
             dVar75 / dVar76,dVar77,dVar72 / dVar73);
  if ((int)local_190 == 0) {
LAB_00106685:
    *local_198 = *local_198 + 1;
  }
  else {
    lVar67 = 0;
    puVar23 = local_198;
    do {
      uVar28 = *puVar23;
      puVar23 = puVar23 + 1;
      lVar67 = lVar67 + (ulong)uVar28;
    } while (puVar23 != local_198 + (local_190 & 0xffffffff));
    if (lVar67 == 0) goto LAB_00106685;
  }
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  uVar28 = basisu::huffman_encoding_table::init
                     ((uint)&local_108,(uint *)(local_190 & 0xffffffff),(uint)local_198);
  uVar51 = (ulong)uVar28;
  if ((char)uVar28 == '\0') {
    basisu::error_printf("endpoint_pred_model.init() failed!");
    goto LAB_001067ae;
  }
  if ((int)local_1a0 == 0) {
LAB_00106694:
    *local_1a8 = *local_1a8 + 1;
  }
  else {
    lVar67 = 0;
    puVar23 = local_1a8;
    do {
      uVar28 = *puVar23;
      puVar23 = puVar23 + 1;
      lVar67 = lVar67 + (ulong)uVar28;
    } while (puVar23 != local_1a8 + (local_1a0 & 0xffffffff));
    if (lVar67 == 0) goto LAB_00106694;
  }
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  uVar28 = basisu::huffman_encoding_table::init
                     ((uint)&local_e8,(uint *)(local_1a0 & 0xffffffff),(uint)local_1a8);
  uVar51 = (ulong)uVar28;
  if ((char)uVar28 == '\0') {
    basisu::error_printf("delta_endpoint_model.init() failed!");
  }
  else {
    if ((uint)local_1d0 == 0) {
LAB_001066a3:
      *local_1d8 = *local_1d8 + 1;
    }
    else {
      lVar67 = 0;
      puVar23 = local_1d8;
      do {
        uVar28 = *puVar23;
        puVar23 = puVar23 + 1;
        lVar67 = lVar67 + (ulong)uVar28;
      } while (puVar23 != local_1d8 + (local_1d0 & 0xffffffff));
      if (lVar67 == 0) goto LAB_001066a3;
    }
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    uVar28 = basisu::huffman_encoding_table::init
                       ((uint)&local_c8,(uint *)(local_1d0 & 0xffffffff),(uint)local_1d8);
    uVar51 = (ulong)uVar28;
    if ((char)uVar28 == '\0') {
      basisu::error_printf("selector_model.init() failed!");
    }
    else {
      if ((int)local_1c0 == 0) {
LAB_00106962:
        *local_1c8 = *local_1c8 + 1;
      }
      else {
        lVar67 = 0;
        puVar23 = local_1c8;
        do {
          uVar28 = *puVar23;
          puVar23 = puVar23 + 1;
          lVar67 = lVar67 + (ulong)uVar28;
        } while (puVar23 != local_1c8 + (local_1c0 & 0xffffffff));
        if (lVar67 == 0) goto LAB_00106962;
      }
      this_00 = (huffman_encoding_table *)&local_a8;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      uVar28 = basisu::huffman_encoding_table::init
                         ((uint)this_00,(uint *)(local_1c0 & 0xffffffff),(uint)local_1c8);
      uVar51 = (ulong)uVar28;
      if ((char)uVar28 == '\0') {
        basisu::error_printf("selector_history_buf_rle_model.init() failed!");
      }
      else {
        local_88 = (void *)0x0;
        local_80 = (undefined1  [16])0x0;
        local_70 = (huffman_encoding_table *)0x0;
        bitwise_coder::init((bitwise_coder *)&local_88,0x400000);
        uVar28 = basisu::bitwise_coder::emit_huffman_table((huffman_encoding_table *)&local_88);
        pbVar63 = (basisu_backend *)(ulong)uVar28;
        uVar28 = basisu::bitwise_coder::emit_huffman_table((huffman_encoding_table *)&local_88);
        pvVar47 = (vector<unsigned_char> *)(ulong)uVar28;
        uVar28 = basisu::bitwise_coder::emit_huffman_table((huffman_encoding_table *)&local_88);
        piVar21 = (int *)(ulong)uVar28;
        uVar28 = basisu::bitwise_coder::emit_huffman_table((huffman_encoding_table *)&local_88);
        this_01 = (vector<unsigned_char> *)(ulong)uVar28;
        bitwise_coder::put_bits((bitwise_coder *)&local_88,0x40,0xd);
        auVar79._4_12_ = SUB1612((undefined1  [16])0x0,4);
        auVar79._0_4_ = (float)(long)this_01;
        if (*(uint *)(this + 0x28) == 0) goto LAB_001078f8;
        uVar28 = 0;
        piVar24 = (int *)(*(long *)(this + 0x20) + 4);
        piVar30 = piVar24 + (ulong)*(uint *)(this + 0x28) * 0xc;
        do {
          iVar45 = *piVar24;
          piVar1 = piVar24 + 1;
          piVar24 = piVar24 + 0xc;
          uVar28 = uVar28 + iVar45 * *piVar1;
        } while (piVar24 != piVar30);
        fVar71 = (float)uVar28;
        phVar66 = this_00;
        uVar69 = uVar51;
        while( true ) {
          auVar79._0_8_ = (double)(auVar79._0_4_ / fVar71);
          basisu::debug_printf
                    ("Model sizes: EndpointPred: %u bits %u bytes (%3.3f bpp) DeltaEndpoint: %u bits %u bytes (%3.3f bpp) Selector: %u bits %u bytes (%3.3f bpp) SelectorHistBufRLE: %u bits %u bytes (%3.3f bpp)\n"
                     ,(double)((float)((ulong)pbVar63 & 0xffffffff) / fVar71),
                     (double)((float)((ulong)pvVar47 & 0xffffffff) / fVar71),
                     (double)((float)((ulong)piVar21 & 0xffffffff) / fVar71),auVar79._0_8_,
                     (ulong)pbVar63 & 0xffffffff,(ulong)((int)pbVar63 + 7U >> 3),
                     (ulong)pvVar47 & 0xffffffff,(ulong)((int)pvVar47 + 7U >> 3),
                     (ulong)piVar21 & 0xffffffff,(ulong)((int)piVar21 + 7U >> 3),this_01,
                     (ulong)((int)this_01 + 7U >> 3));
          bitwise_coder::flush((bitwise_coder *)&local_88);
          vector<unsigned_char>::operator=
                    ((vector<unsigned_char> *)(this + 0x70),(vector *)&local_88);
          uVar28 = *(uint *)(this + 0x88);
          uVar39 = *(uint *)(this + 0x28);
          local_2b0 = (ulong)uVar28;
          if (uVar39 != uVar28) {
            if (uVar39 < uVar28) {
              puVar25 = (undefined8 *)((ulong)uVar39 * 0x10 + *(long *)(this + 0x80));
              puVar33 = puVar25 + (ulong)(uVar28 - uVar39) * 2;
              do {
                if ((void *)*puVar25 != (void *)0x0) {
                  free((void *)*puVar25);
                }
                puVar25 = puVar25 + 2;
              } while (puVar33 != puVar25);
              uVar50 = *(uint *)(this + 0x28);
            }
            else {
              uVar50 = uVar39;
              if (*(uint *)(this + 0x8c) < uVar39) {
                basisu::elemental_vector::increase_capacity
                          ((int)this + 0x80,SUB41(uVar39,0),(uint)(uVar28 + 1 == uVar39),
                           (_func_void_void_ptr_void_ptr_uint *)0x10,false);
                uVar50 = *(uint *)(this + 0x28);
                local_2b0 = (ulong)*(uint *)(this + 0x88);
              }
              puVar25 = (undefined8 *)(local_2b0 * 0x10 + *(long *)(this + 0x80));
              puVar33 = puVar25 + (ulong)(uVar39 - (int)local_2b0) * 2;
              for (; puVar25 != puVar33; puVar25 = puVar25 + 2) {
                *puVar25 = 0;
                puVar25[1] = 0;
              }
            }
            local_2b0 = (ulong)uVar50;
            *(uint *)(this + 0x88) = uVar39;
          }
          if ((int)local_2b0 == 0) break;
          uVar28 = 0;
          this_01 = (vector<unsigned_char> *)0x0;
          local_2f8 = 0;
          local_260 = 0;
          local_2b0 = 0;
          pvVar47 = this_01;
LAB_0010556d:
          auVar13 = local_80._0_12_;
          piVar21 = (int *)((long)pvVar47 * 2);
          uVar51 = (long)pvVar47 * 0x30;
          uVar39 = *(uint *)(uVar51 + *(long *)(this + 0x20) + 0x14);
          uVar50 = *(uint *)(uVar51 + *(long *)(this + 0x20) + 0x18);
          this_00 = (huffman_encoding_table *)(ulong)uVar50;
          uVar15 = (uint)(bitwise_coder *)&local_88;
          if ((uint)local_80._4_4_ < 0x400000) {
            basisu::elemental_vector::increase_capacity
                      (uVar15,false,0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
            auVar13 = local_80._0_12_;
            uVar59 = local_80._0_4_;
          }
          else {
            uVar59 = local_80._0_4_;
            if (local_80._4_4_ != 0x400000) {
              this_01 = (vector<unsigned_char> *)&local_158;
              local_158 = (void *)0x0;
              local_150 = 0;
              uVar59 = 0;
              if (0x3fffff < (uint)local_80._0_4_) {
                uVar59 = local_80._0_4_;
              }
              basisu::elemental_vector::increase_capacity
                        ((uint)this_01,SUB41(uVar59,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,
                         false);
              vector<unsigned_char>::operator=(this_01,(vector *)&local_88);
              __ptr = local_88;
              local_80._0_8_ = local_150;
              local_88 = local_158;
              uVar59 = (uint)local_150;
              auVar13 = local_80._0_12_;
              if (__ptr != (void *)0x0) {
                free(__ptr);
                auVar13 = local_80._0_12_;
                uVar59 = local_80._0_4_;
              }
            }
          }
          local_80._0_12_ = auVar13;
          if (uVar59 != 0) {
            local_80._0_8_ = SUB128(local_80._0_12_,4) << 0x20;
          }
          local_80._8_8_ = 0;
          local_70 = (huffman_encoding_table *)0x0;
          lVar67 = (long)pvVar47 * 0x10;
          if (uVar50 == 0) {
            local_2b8 = 0;
            local_2f4 = 0;
          }
          else {
            local_2b8 = 0;
            uVar59 = 0;
            iVar45 = 0;
            iVar55 = 0;
            piVar21 = (int *)0x0;
            local_2f4 = 0;
            piVar24 = piVar21;
            do {
              this_01 = (vector<unsigned_char> *)0x0;
              iVar53 = iVar45;
              if (uVar39 != 0) {
                do {
                  iVar18 = (int)piVar24;
                  piVar21 = (int *)((long)pvVar47 * 0x18 + *(long *)(this + 0xd0));
                  uVar16 = (uint)this_01;
                  piVar21 = (int *)(*(long *)(piVar21 + 2) +
                                   (ulong)(*piVar21 * uVar59 + uVar16) * 0x14);
                  if (((uVar16 | uVar59) & 1) == 0) {
                    if (iVar55 < 1) {
                      lVar68 = local_188[(long)pvVar47 * 2];
                      uVar64 = local_2b8 + 1;
                      uVar29 = *(uint *)(lVar68 + (ulong)local_2b8 * 4);
                      uVar7 = local_80._8_4_;
                      bVar27 = local_80[0xc];
                      if (uVar29 == 0x100) {
                        bVar26 = *(byte *)((long)local_f8 + 0x100);
                        uVar60 = (ulong)(uint)uVar7;
                        uVar29 = local_80._12_4_;
                        if (bVar26 != 0) {
                          local_70 = local_70 + bVar26;
                          uVar29 = local_80._12_4_ + (uint)bVar26;
                          local_80._12_4_ = uVar29;
                          uVar60 = (ulong)*(ushort *)((long)local_108 + 0x200) << (bVar27 & 0x3f) |
                                   uVar60;
                          uVar43 = uVar60;
                          if (7 < uVar29) {
                            do {
                              uVar52 = (ulong)(uint)local_80._0_4_;
                              uVar29 = local_80._0_4_ + 1;
                              if (local_80._0_4_ != 0xffffffff) {
                                if ((uint)local_80._4_4_ < uVar29) {
                                  basisu::elemental_vector::increase_capacity
                                            (uVar15,SUB41(uVar29,0),1,
                                             (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                                  sVar36 = (size_t)(uVar29 - local_80._0_4_);
                                }
                                else {
                                  sVar36 = 1;
                                }
                                memset((void *)((ulong)(uint)local_80._0_4_ + (long)local_88),0,
                                       sVar36);
                              }
                              auVar11 = local_80;
                              local_80._0_4_ = uVar29;
                              auVar12 = local_80;
                              uVar43 = uVar60 >> 8;
                              *(char *)((long)local_88 + uVar52) = (char)uVar60;
                              local_80._12_4_ = auVar11._12_4_;
                              uVar29 = local_80._12_4_ - 8;
                              local_80._0_12_ = auVar12._0_12_;
                              local_80._12_4_ = uVar29;
                              uVar60 = uVar43;
                            } while (7 < uVar29);
                            lVar68 = local_188[(long)pvVar47 * 2];
                          }
                          uVar60 = uVar43 & 0xff;
                          local_80._8_4_ = (int)uVar60;
                        }
                        local_2b8 = local_2b8 + 2;
                        uVar64 = *(uint *)(lVar68 + (ulong)uVar64 * 4);
                        this_00 = (huffman_encoding_table *)(ulong)uVar64;
                        iVar45 = 0;
                        uVar17 = uVar64 - 3;
                        do {
                          local_70 = local_70 + 5;
                          uVar44 = uVar29 + 5;
                          local_80._12_4_ = uVar44;
                          uVar60 = (ulong)((uint)(uVar17 >> 4 != 0) << 4 | uVar17 & 0xf) <<
                                   ((byte)uVar29 & 0x3f) | uVar60;
                          while (7 < uVar44) {
                            uVar43 = (ulong)(uint)local_80._0_4_;
                            uVar10 = (undefined1)uVar60;
                            uVar29 = local_80._0_4_ + 1;
                            if (local_80._0_4_ != 0xffffffff) {
                              sVar36 = 1;
                              if ((uint)local_80._4_4_ < uVar29) {
                                basisu::elemental_vector::increase_capacity
                                          (uVar15,SUB41(uVar29,0),1,
                                           (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                                sVar36 = (size_t)(uVar29 - local_80._0_4_);
                              }
                              memset((void *)((ulong)(uint)local_80._0_4_ + (long)local_88),0,sVar36
                                    );
                            }
                            auVar11 = local_80;
                            local_80._0_4_ = uVar29;
                            auVar12 = local_80;
                            uVar60 = uVar60 >> 8;
                            *(undefined1 *)((long)local_88 + uVar43) = uVar10;
                            local_80._12_4_ = auVar11._12_4_;
                            uVar44 = local_80._12_4_ - 8;
                            local_80._0_12_ = auVar12._0_12_;
                            local_80._12_4_ = uVar44;
                          }
                          uVar60 = uVar60 & 0xff;
                          iVar45 = iVar45 + 5;
                          local_80._8_4_ = (int)uVar60;
                          uVar44 = uVar17 >> 4;
                          uVar29 = local_80._12_4_;
                          uVar17 = uVar17 >> 4;
                        } while (uVar44 != 0);
                        iVar55 = uVar64 - 1;
                        local_2b0 = (ulong)((int)local_2b0 + (uint)bVar26 + iVar45);
                      }
                      else {
                        bVar26 = *(byte *)((long)local_f8 + (ulong)uVar29);
                        this_00 = (huffman_encoding_table *)(ulong)bVar26;
                        if (bVar26 != 0) {
                          local_70 = local_70 + (long)this_00;
                          uVar17 = local_80._12_4_ + (uint)bVar26;
                          local_80._12_4_ = uVar17;
                          uVar60 = (ulong)*(ushort *)((long)local_108 + (ulong)uVar29 * 2) <<
                                   (bVar27 & 0x3f) | (ulong)(uint)uVar7;
                          while (7 < uVar17) {
                            uVar43 = (ulong)(uint)local_80._0_4_;
                            uVar29 = local_80._0_4_ + 1;
                            if (local_80._0_4_ != 0xffffffff) {
                              if ((uint)local_80._4_4_ < uVar29) {
                                basisu::elemental_vector::increase_capacity
                                          (uVar15,SUB41(uVar29,0),1,
                                           (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                                sVar36 = (size_t)(uVar29 - local_80._0_4_);
                              }
                              else {
                                sVar36 = 1;
                              }
                              memset((void *)((ulong)(uint)local_80._0_4_ + (long)local_88),0,sVar36
                                    );
                            }
                            auVar11 = local_80;
                            local_80._0_4_ = uVar29;
                            auVar12 = local_80;
                            *(char *)((long)local_88 + uVar43) = (char)uVar60;
                            local_80._12_4_ = auVar11._12_4_;
                            uVar17 = local_80._12_4_ - 8;
                            local_80._0_12_ = auVar12._0_12_;
                            local_80._12_4_ = uVar17;
                            uVar60 = uVar60 >> 8;
                          }
                          local_80._8_4_ = (uint)uVar60 & 0xff;
                        }
                        local_2b0 = (ulong)((int)local_2b0 + (uint)bVar26);
                        local_2b8 = uVar64;
                      }
                    }
                    else {
                      iVar55 = iVar55 + -1;
                    }
                  }
                  iVar45 = *(int *)(*(long *)(this + 0xe0) + (long)piVar21[1] * 4);
                  if (*piVar21 == 3) {
                    uVar64 = iVar45 - iVar53;
                    if ((int)uVar64 < 0) {
                      uVar64 = uVar64 + *(int *)(pvVar8 + 200);
                    }
                    bVar27 = *(byte *)((long)local_d8 + (ulong)uVar64);
                    if (bVar27 != 0) {
                      uVar60 = (ulong)(uint)local_80._8_4_;
                      local_70 = local_70 + bVar27;
                      bVar26 = local_80[0xc];
                      uVar29 = local_80._12_4_ + (uint)bVar27;
                      local_80._12_4_ = uVar29;
                      uVar60 = (ulong)*(ushort *)((long)local_e8 + (ulong)uVar64 * 2) <<
                               (bVar26 & 0x3f) | uVar60;
                      while (7 < uVar29) {
                        uVar43 = (ulong)(uint)local_80._0_4_;
                        uVar10 = (undefined1)uVar60;
                        uVar64 = local_80._0_4_ + 1;
                        this_00 = (huffman_encoding_table *)(ulong)uVar64;
                        if (local_80._0_4_ != 0xffffffff) {
                          sVar36 = 1;
                          if ((uint)local_80._4_4_ < uVar64) {
                            basisu::elemental_vector::increase_capacity
                                      (uVar15,SUB41(uVar64,0),1,
                                       (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                            sVar36 = (size_t)(uVar64 - local_80._0_4_);
                          }
                          memset((void *)((ulong)(uint)local_80._0_4_ + (long)local_88),0,sVar36);
                        }
                        auVar11 = local_80;
                        local_80._0_4_ = uVar64;
                        auVar12 = local_80;
                        uVar60 = uVar60 >> 8;
                        *(undefined1 *)((long)local_88 + uVar43) = uVar10;
                        local_80._12_4_ = auVar11._12_4_;
                        uVar29 = local_80._12_4_ - 8;
                        local_80._0_12_ = auVar12._0_12_;
                        local_80._12_4_ = uVar29;
                      }
                      local_80._8_4_ = (uint)uVar60 & 0xff;
                    }
                    local_260 = local_260 + bVar27;
                  }
                  if ((iVar6 != 3) || (*piVar21 != 2)) {
                    if (iVar18 == 0) {
                      uVar64 = local_2f4 + 1;
                      uVar29 = *(uint *)(local_1b8[(long)pvVar47 * 2] + (ulong)local_2f4 * 4);
                      bVar27 = *(byte *)((long)local_b8 + (ulong)uVar29);
                      local_2f8 = local_2f8 + bVar27;
                      if (uVar29 == local_2e8) {
                        local_2f4 = local_2f4 + 2;
                        piVar21 = (int *)(ulong)*(uint *)(local_1b8[(long)pvVar47 * 2] +
                                                         (ulong)uVar64 * 4);
                        if (bVar27 != 0) goto LAB_001057ac;
LAB_00106e81:
                        iVar18 = (int)piVar21;
                        uVar64 = iVar18 - 3;
                        uVar7 = local_80._8_4_;
                        bVar27 = local_80[0xc];
                        if (0x3e < (int)uVar64) {
                          bVar26 = *(byte *)(local_98 + 0x3f);
                          uVar60 = (ulong)(uint)uVar7;
                          uVar29 = local_80._12_4_;
                          if (bVar26 != 0) {
                            local_70 = local_70 + bVar26;
                            uVar29 = local_80._12_4_ + (uint)bVar26;
                            local_80._12_4_ = uVar29;
                            uVar60 = (ulong)*(ushort *)(local_a8 + 0x7e) << (bVar27 & 0x3f) | uVar60
                            ;
                            while (7 < uVar29) {
                              uVar43 = (ulong)(uint)local_80._0_4_;
                              uVar29 = local_80._0_4_ + 1;
                              if (local_80._0_4_ != 0xffffffff) {
                                if ((uint)local_80._4_4_ < uVar29) {
                                  basisu::elemental_vector::increase_capacity
                                            (uVar15,SUB41(uVar29,0),1,
                                             (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                                  sVar36 = (size_t)(uVar29 - local_80._0_4_);
                                }
                                else {
                                  sVar36 = 1;
                                }
                                memset((void *)((ulong)(uint)local_80._0_4_ + (long)local_88),0,
                                       sVar36);
                              }
                              auVar11 = local_80;
                              local_80._0_4_ = uVar29;
                              auVar12 = local_80;
                              *(char *)((long)local_88 + uVar43) = (char)uVar60;
                              local_80._12_4_ = auVar11._12_4_;
                              uVar29 = local_80._12_4_ - 8;
                              local_80._0_12_ = auVar12._0_12_;
                              local_80._12_4_ = uVar29;
                              uVar60 = uVar60 >> 8;
                            }
                            uVar60 = uVar60 & 0xff;
                            local_80._8_4_ = (int)uVar60;
                          }
                          do {
                            local_70 = local_70 + 8;
                            uVar44 = uVar64 >> 7;
                            uVar17 = uVar29 + 8;
                            local_80._12_4_ = uVar17;
                            uVar60 = (ulong)((uint)(uVar44 != 0) << 7 | uVar64 & 0x7f) <<
                                     ((byte)uVar29 & 0x3f) | uVar60;
                            while (7 < uVar17) {
                              uVar43 = (ulong)(uint)local_80._0_4_;
                              uVar10 = (undefined1)uVar60;
                              uVar64 = local_80._0_4_ + 1;
                              if (local_80._0_4_ != 0xffffffff) {
                                sVar36 = 1;
                                if ((uint)local_80._4_4_ < uVar64) {
                                  basisu::elemental_vector::increase_capacity
                                            (uVar15,SUB41(uVar64,0),1,
                                             (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                                  sVar36 = (size_t)(uVar64 - local_80._0_4_);
                                }
                                memset((void *)((ulong)(uint)local_80._0_4_ + (long)local_88),0,
                                       sVar36);
                              }
                              auVar11 = local_80;
                              local_80._0_4_ = uVar64;
                              auVar12 = local_80;
                              uVar60 = uVar60 >> 8;
                              *(undefined1 *)((long)local_88 + uVar43) = uVar10;
                              local_80._12_4_ = auVar11._12_4_;
                              uVar17 = local_80._12_4_ - 8;
                              local_80._0_12_ = auVar12._0_12_;
                              local_80._12_4_ = uVar17;
                            }
                            uVar60 = uVar60 & 0xff;
                            uVar17 = (int)piVar24 + 8;
                            piVar24 = (int *)(ulong)uVar17;
                            local_80._8_4_ = (int)uVar60;
                            uVar29 = local_80._12_4_;
                            uVar64 = uVar44;
                          } while (uVar44 != 0);
                          this_00 = (huffman_encoding_table *)(ulong)(bVar26 + local_2f8);
                          local_2f8 = bVar26 + local_2f8 + uVar17;
                          goto LAB_001069a8;
                        }
                        bVar26 = *(byte *)(local_98 + (ulong)uVar64);
                        this_00 = (huffman_encoding_table *)(ulong)bVar26;
                        if (bVar26 != 0) {
                          local_70 = local_70 + (long)this_00;
                          uVar29 = (uint)bVar26 + local_80._12_4_;
                          local_80._12_4_ = uVar29;
                          uVar60 = (ulong)*(ushort *)(local_a8 + (ulong)uVar64 * 2) <<
                                   (bVar27 & 0x3f) | (ulong)(uint)uVar7;
                          while (7 < uVar29) {
                            uVar43 = (ulong)(uint)local_80._0_4_;
                            uVar64 = local_80._0_4_ + 1;
                            if (local_80._0_4_ != 0xffffffff) {
                              if ((uint)local_80._4_4_ < uVar64) {
                                basisu::elemental_vector::increase_capacity
                                          (uVar15,SUB41(uVar64,0),1,
                                           (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                                sVar36 = (size_t)(uVar64 - local_80._0_4_);
                              }
                              else {
                                sVar36 = 1;
                              }
                              memset((void *)((ulong)(uint)local_80._0_4_ + (long)local_88),0,sVar36
                                    );
                            }
                            auVar11 = local_80;
                            local_80._0_4_ = uVar64;
                            auVar12 = local_80;
                            *(char *)((long)local_88 + uVar43) = (char)uVar60;
                            local_80._12_4_ = auVar11._12_4_;
                            uVar29 = local_80._12_4_ - 8;
                            local_80._0_12_ = auVar12._0_12_;
                            local_80._12_4_ = uVar29;
                            uVar60 = uVar60 >> 8;
                          }
                          local_80._8_4_ = (uint)uVar60 & 0xff;
                        }
                        local_2f8 = local_2f8 + bVar26;
                      }
                      else {
                        piVar21 = (int *)0x0;
                        local_2f4 = uVar64;
                        if (bVar27 == 0) goto joined_r0x001069b5;
LAB_001057ac:
                        local_70 = local_70 + bVar27;
                        uVar60 = (ulong)(uint)local_80._8_4_;
                        bVar26 = local_80[0xc];
                        uVar64 = local_80._12_4_ + (uint)bVar27;
                        local_80._12_4_ = uVar64;
                        uVar60 = (ulong)*(ushort *)((long)local_c8 + (ulong)uVar29 * 2) <<
                                 (bVar26 & 0x3f) | uVar60;
                        while (7 < uVar64) {
                          uVar43 = (ulong)(uint)local_80._0_4_;
                          this_00 = (huffman_encoding_table *)(uVar60 & 0xffffffff);
                          uVar64 = local_80._0_4_ + 1;
                          if (local_80._0_4_ != 0xffffffff) {
                            sVar36 = 1;
                            if ((uint)local_80._4_4_ < uVar64) {
                              basisu::elemental_vector::increase_capacity
                                        (uVar15,SUB41(uVar64,0),1,
                                         (_func_void_void_ptr_void_ptr_uint *)0x1,false);
                              sVar36 = (size_t)(uVar64 - local_80._0_4_);
                            }
                            memset((void *)((ulong)(uint)local_80._0_4_ + (long)local_88),0,sVar36);
                          }
                          auVar11 = local_80;
                          local_80._0_4_ = uVar64;
                          auVar12 = local_80;
                          uVar60 = uVar60 >> 8;
                          *(char *)((long)local_88 + uVar43) = (char)this_00;
                          local_80._12_4_ = auVar11._12_4_;
                          uVar64 = local_80._12_4_ - 8;
                          local_80._0_12_ = auVar12._0_12_;
                          local_80._12_4_ = uVar64;
                        }
                        local_80._8_4_ = (uint)uVar60 & 0xff;
                        if (uVar29 == local_2e8) goto LAB_00106e81;
                      }
                      iVar18 = (int)piVar21;
                      piVar24 = piVar21;
                      if (iVar18 == 0) goto joined_r0x001069b5;
                    }
LAB_001069a8:
                    piVar24 = (int *)(ulong)(iVar18 - 1);
                  }
joined_r0x001069b5:
                  this_01 = (vector<unsigned_char> *)(ulong)(uVar16 + 1);
                  iVar53 = iVar45;
                } while (uVar39 != uVar16 + 1);
              }
              uVar59 = uVar59 + 1;
            } while (uVar50 != uVar59);
          }
          auVar11 = local_80;
          if (local_2b8 == *(uint *)(local_188 + (long)pvVar47 * 2 + 1)) {
            if (local_2f4 != *(uint *)(local_1b8 + (long)pvVar47 * 2 + 1)) goto LAB_001078e9;
            if (local_80._12_4_ != 0) {
              local_70 = local_70 + (8 - (local_80._12_4_ & 7));
              vector<unsigned_char>::resize
                        ((vector<unsigned_char> *)&local_88,(ulong)(local_80._0_4_ + 1),false);
              *(char *)((long)local_88 + (ulong)(local_80._0_4_ - 1)) = auVar11[8];
              local_80._8_8_ = 0;
            }
            pvVar48 = pvVar47 + 1;
            vector<unsigned_char>::operator=
                      ((vector<unsigned_char> *)(*(long *)(this + 0x80) + lVar67),
                       (vector *)&local_88);
            fVar71 = _LC17;
            uVar60 = (ulong)*(uint *)(*(long *)(this + 0x80) + 8 + lVar67);
            uVar28 = uVar28 + local_80._0_4_;
            basisu::debug_printf
                      ("Slice %u compressed size: %u bytes, %3.3f bits per slice texel\n",
                       (double)(((float)uVar60 * _LC17) /
                               (float)(uint)(*(int *)(uVar51 + *(long *)(this + 0x20) + 4) *
                                            *(int *)(uVar51 + *(long *)(this + 0x20) + 8))),
                       (ulong)pvVar47 & 0xffffffff,uVar60);
            uVar15 = *(uint *)(this + 0x28);
            pvVar47 = pvVar48;
            if (uVar15 <= (uint)pvVar48) {
              dVar76 = (double)local_2b0;
              uVar50 = local_260 >> 3;
              uVar69 = uVar69 & 0xff;
              uVar51 = local_2b0 >> 3;
              uVar39 = local_2f8 >> 3;
              if (uVar15 != 0) {
                uVar59 = 0;
                piVar21 = (int *)(*(long *)(this + 0x20) + 4);
                piVar24 = piVar21 + (ulong)uVar15 * 0xc;
                do {
                  iVar6 = *piVar21;
                  piVar30 = piVar21 + 1;
                  piVar21 = piVar21 + 0xc;
                  uVar59 = uVar59 + iVar6 * *piVar30;
                } while (piVar21 != piVar24);
                piVar21 = (int *)(*(long *)(this + 0x20) + 0x14);
                uVar16 = 0;
                local_320 = (double)uVar59;
                piVar24 = piVar21 + (ulong)uVar15 * 0xc;
                do {
                  iVar6 = *piVar21;
                  piVar30 = piVar21 + 1;
                  piVar21 = piVar21 + 0xc;
                  uVar16 = uVar16 + iVar6 * *piVar30;
                } while (piVar21 != piVar24);
                dVar75 = (double)uVar16;
                goto LAB_00106b69;
              }
              goto LAB_001078d0;
            }
            goto LAB_0010556d;
          }
          verify(true,(int)lVar67);
LAB_001078e9:
          verify(true,(int)lVar67);
          pbVar63 = this;
LAB_001078f8:
          fVar71 = 0.0;
          phVar66 = this_00;
          uVar69 = uVar51;
        }
        uVar39 = 0;
        uVar50 = 0;
        uVar51 = 0;
        uVar28 = 0;
        dVar76 = 0.0;
        local_260 = 0;
        local_2f8 = 0;
        fVar71 = _LC17;
LAB_001078d0:
        dVar75 = 0.0;
        local_320 = 0.0;
LAB_00106b69:
        basisu::debug_printf
                  ("Total endpoint pred bits: %u bytes: %u bits/texel: %3.3f bits/block: %3.3f\n",
                   dVar76 / local_320,dVar76 / dVar75,local_2b0,uVar51);
        dVar76 = (double)local_260;
        basisu::debug_printf
                  ("Total delta endpoint bits: %u bytes: %u bits/texel: %3.3f bits/block: %3.3f\n",
                   dVar76 / local_320,dVar76 / dVar75,(ulong)local_260,(ulong)uVar50);
        dVar76 = (double)local_2f8;
        basisu::debug_printf
                  ("Total selector bits: %u bytes: %u bits/texel: %3.3f bits/block: %3.3f\n",
                   dVar76 / local_320,dVar76 / dVar75,(ulong)local_2f8,(ulong)uVar39);
        basisu::debug_printf
                  ("Total table bytes: %u, %3.3f bits/texel\n",
                   (double)((float)*(uint *)(this + 0x78) * fVar71) / local_320,
                   (ulong)*(uint *)(this + 0x78));
        basisu::debug_printf
                  ("Total image bytes: %u, %3.3f bits/texel\n",
                   (double)((float)uVar28 * fVar71) / local_320,(ulong)uVar28);
        this_00 = phVar66;
        uVar51 = uVar69;
        if (local_88 != (void *)0x0) {
          free(local_88);
        }
      }
      huffman_encoding_table::~huffman_encoding_table(this_00);
    }
    if (local_b8 != (void *)0x0) {
      free(local_b8);
    }
    if (local_c8 != (void *)0x0) {
      free(local_c8);
    }
  }
  if (local_d8 != (void *)0x0) {
    free(local_d8);
  }
  if (local_e8 != (void *)0x0) {
    free(local_e8);
  }
LAB_001067ae:
  if (local_f8 != (void *)0x0) {
    free(local_f8);
  }
  if (local_108 != (void *)0x0) {
    free(local_108);
  }
  if (local_168 != (void *)0x0) {
    free(local_168);
  }
  if (local_178 != (void *)0x0) {
    free(local_178);
  }
  if (local_188 != (undefined8 *)0x0) {
    puVar42 = local_188 + (local_180 & 0xffffffff) * 2;
    puVar25 = puVar42;
    for (puVar33 = local_188; puVar33 != puVar42; puVar33 = puVar33 + 2) {
      if ((void *)*puVar33 != (void *)0x0) {
        free((void *)*puVar33);
      }
      puVar25 = local_188;
    }
    free(puVar25);
  }
  if (local_198 != (uint *)0x0) {
    free(local_198);
  }
  if (local_1a8 != (uint *)0x0) {
    free(local_1a8);
  }
  if (local_1b8 != (undefined8 *)0x0) {
    puVar42 = local_1b8 + (local_1b0 & 0xffffffff) * 2;
    puVar25 = puVar42;
    for (puVar33 = local_1b8; puVar33 != puVar42; puVar33 = puVar33 + 2) {
      if ((void *)*puVar33 != (void *)0x0) {
        free((void *)*puVar33);
      }
      puVar25 = local_1b8;
    }
    free(puVar25);
  }
  if (local_1c8 != (uint *)0x0) {
    free(local_1c8);
  }
  if (local_1d8 != (uint *)0x0) {
    free(local_1d8);
  }
  if (local_1e8 != (void *)0x0) {
    free(local_1e8);
  }
  if (local_148 != (void *)0x0) {
    free(local_148);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar51 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_backend::sort_selector_codebook() */

void __thiscall basisu::basisu_backend::sort_selector_codebook(basisu_backend *this)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  uint *local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  long local_40;
  
  lVar2 = *(long *)this;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)(this + 0x138);
  uVar7 = *(uint *)(lVar2 + 0x128);
  if (uVar7 != uVar3) {
    if (uVar7 < uVar3) {
      *(uint *)(this + 0x138) = uVar7;
    }
    else {
      if (*(uint *)(this + 0x13c) < uVar7) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x130,SUB41(uVar7,0),(uint)(uVar3 + 1 == uVar7),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar3 = *(uint *)(this + 0x138);
      }
      memset((void *)(*(long *)(this + 0x130) + (ulong)uVar3 * 4),0,(ulong)(uVar7 - uVar3) << 2);
      *(uint *)(this + 0x138) = uVar7;
    }
  }
  if ((*(int *)(this + 0x14) == 0) || (this[0x18] != (basisu_backend)0x0)) {
    if (*(int *)(lVar2 + 0x128) != 0) {
      lVar9 = *(long *)(this + 0x130);
      lVar4 = 0;
      do {
        *(int *)(lVar9 + lVar4 * 4) = (int)lVar4;
        uVar7 = *(uint *)(lVar2 + 0x128);
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < uVar7);
      goto LAB_00107992;
    }
    uVar7 = 0;
    if (*(int *)(this + 0x128) == 0) goto LAB_001079f1;
  }
  else {
    **(undefined4 **)(this + 0x130) = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    vector<int>::reserve((vector<int> *)&local_68,(ulong)(*(int *)(lVar2 + 0x128) - 1));
    uVar7 = (uint)(vector<int> *)&local_68;
    if (1 < *(uint *)(lVar2 + 0x128)) {
      uVar8 = 1;
      uVar3 = (uint)local_60;
      do {
        if (local_60._4_4_ <= uVar3) {
          basisu::elemental_vector::increase_capacity
                    (uVar7,(bool)((char)uVar3 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x4,
                     false);
          uVar3 = (uint)local_60;
        }
        local_68[uVar3] = uVar8;
        uVar8 = uVar8 + 1;
        uVar3 = (uint)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,uVar3);
      } while (uVar8 < *(uint *)(lVar2 + 0x128));
    }
    local_58 = (void *)0x0;
    iVar1 = *(int *)(this + 0xb8);
    local_50 = 0;
    if (iVar1 == 0) {
      if (1 < *(uint *)(lVar2 + 0x128)) goto LAB_00107c88;
    }
    else {
      basisu::elemental_vector::increase_capacity
                ((uint)&local_58,SUB41(iVar1,0),(uint)(iVar1 == 1),
                 (_func_void_void_ptr_void_ptr_uint *)0x4,false);
      memset((void *)((long)local_58 + (local_50 & 0xffffffff) * 4),0,
             (ulong)(uint)(iVar1 - (int)local_50) << 2);
      local_50 = CONCAT44(local_50._4_4_,iVar1);
      if (*(int *)(this + 0xb8) == 0) {
        if (1 < *(uint *)(lVar2 + 0x128)) goto LAB_00107c88;
LAB_00107dd5:
        if (local_58 == (void *)0x0) goto LAB_00107de4;
      }
      else {
        lVar9 = 0;
        pbVar5 = *(byte **)(this + 0xb0);
        do {
          *(uint *)((long)local_58 + lVar9 * 4) =
               ((uint)pbVar5[9] << 2 | (uint)pbVar5[10] << 4 | (uint)pbVar5[8] |
               (uint)pbVar5[0xb] << 6) << 0x10 |
               ((uint)pbVar5[5] << 2 | (uint)pbVar5[6] << 4 | (uint)pbVar5[4] | (uint)pbVar5[7] << 6
               ) << 8 | (uint)pbVar5[1] << 2 | (uint)pbVar5[2] << 4 | (uint)*pbVar5 |
                        (uint)pbVar5[3] << 6 |
               ((uint)pbVar5[0xe] << 4 | (uint)pbVar5[0xd] << 2 | (uint)pbVar5[0xc] |
               (uint)pbVar5[0xf] << 6) << 0x18;
          lVar9 = lVar9 + 1;
          pbVar5 = pbVar5 + 0x10;
        } while ((uint)lVar9 < *(uint *)(this + 0xb8));
        if (1 < *(uint *)(lVar2 + 0x128)) {
LAB_00107c88:
          lVar9 = 0;
          uVar14 = 0;
          uVar3 = (uint)local_60;
          do {
            uVar8 = *local_68;
            puVar10 = local_68;
            if (uVar3 != 0) {
              uVar12 = 0;
              uVar6 = 0;
              uVar13 = 100;
              do {
                uVar8 = *puVar10;
                uVar11 = *(uint *)((long)local_58 + (long)(int)uVar8 * 4) ^
                         *(uint *)((long)local_58 + uVar14 * 4);
                uVar11 = (uint)*(byte *)((long)&g_hamming_dist + (ulong)(uVar11 >> 8 & 0xff)) +
                         (uint)*(byte *)((long)&g_hamming_dist + (ulong)(uVar11 & 0xff)) +
                         (uint)*(byte *)((long)&g_hamming_dist + (ulong)(uVar11 >> 0x10 & 0xff)) +
                         (uint)*(byte *)((long)&g_hamming_dist + (ulong)(uVar11 >> 0x18));
                if ((uVar11 < uVar13) && (uVar6 = uVar12, uVar13 = uVar11, uVar11 < 2))
                goto LAB_00107d37;
                uVar8 = (int)uVar12 + 1;
                uVar12 = (ulong)uVar8;
                puVar10 = puVar10 + 1;
              } while (uVar8 != uVar3);
              puVar10 = local_68 + uVar6;
              uVar8 = *puVar10;
            }
LAB_00107d37:
            uVar14 = (ulong)uVar8;
            lVar9 = lVar9 + 1;
            *(uint *)(*(long *)(this + 0x130) + lVar9 * 4) = uVar8;
            *puVar10 = local_68[(uint)local_60 - 1];
            uVar3 = (uint)local_60 - 1;
            uVar6 = (ulong)((uint)local_60 != 0);
            if ((uint)local_60 == 0) {
              if (local_60._4_4_ != -1) {
                basisu::elemental_vector::increase_capacity
                          (uVar7,true,0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
                uVar6 = local_60 & 0xffffffff;
              }
              memset(local_68 + uVar6,0,(ulong)~(uint)uVar6 << 2);
            }
            local_60 = CONCAT44(local_60._4_4_,uVar3);
          } while ((int)lVar9 + 1U < *(uint *)(lVar2 + 0x128));
          goto LAB_00107dd5;
        }
      }
      free(local_58);
    }
LAB_00107de4:
    if (local_68 != (uint *)0x0) {
      free(local_68);
    }
    uVar7 = *(uint *)(lVar2 + 0x128);
LAB_00107992:
    uVar3 = *(uint *)(this + 0x128);
    if (uVar3 == uVar7) goto LAB_001079f1;
    if (uVar3 <= uVar7) {
      if (*(uint *)(this + 300) < uVar7) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0x120,SUB41(uVar7,0),(uint)(uVar3 + 1 == uVar7),
                   (_func_void_void_ptr_void_ptr_uint *)0x4,false);
        uVar3 = *(uint *)(this + 0x128);
      }
      memset((void *)(*(long *)(this + 0x120) + (ulong)uVar3 * 4),0,(ulong)(uVar7 - uVar3) << 2);
    }
  }
  *(uint *)(this + 0x128) = uVar7;
LAB_001079f1:
  if (*(int *)(this + 0x138) != 0) {
    lVar2 = *(long *)(this + 0x130);
    lVar9 = *(long *)(this + 0x120);
    lVar4 = 0;
    do {
      *(int *)(lVar9 + (ulong)*(uint *)(lVar2 + lVar4 * 4) * 4) = (int)lVar4;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x138));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* basisu::basisu_backend::create_encoder_blocks() */

void __thiscall basisu::basisu_backend::create_encoder_blocks(basisu_backend *this)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  void *__ptr;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  uint *puVar17;
  undefined4 *puVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  int iVar32;
  color_rgba *pcVar33;
  byte *pbVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  long in_FS_OFFSET;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int local_14c;
  int local_140;
  uint local_130;
  uint local_12c;
  ulong local_110;
  ulong local_108;
  uint local_f8;
  uint local_f4;
  long local_f0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  interval_timer local_b8 [28];
  undefined4 local_9c;
  ulong local_98;
  undefined8 local_90;
  color_rgba local_88 [64];
  color_rgba local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  basisu::debug_printf("basisu_backend::create_encoder_blocks\n");
  basisu::interval_timer::interval_timer(local_b8);
  basisu::interval_timer::start();
  lVar7 = *(long *)this;
  uVar37 = *(uint *)(this + 0x28);
  uVar24 = *(uint *)(this + 0xd8);
  iVar6 = *(int *)(lVar7 + 0x24);
  uVar23 = uVar24;
  if (uVar37 != uVar24) {
    if (uVar37 < uVar24) {
      lVar35 = *(long *)(this + 0xd0) + (ulong)uVar37 * 0x18;
      lVar28 = lVar35 + (ulong)(uVar24 - uVar37) * 0x18;
      do {
        if (*(void **)(lVar35 + 8) != (void *)0x0) {
          free(*(void **)(lVar35 + 8));
        }
        lVar35 = lVar35 + 0x18;
      } while (lVar28 != lVar35);
      uVar23 = *(uint *)(this + 0x28);
    }
    else {
      uVar23 = uVar37;
      if (*(uint *)(this + 0xdc) < uVar37) {
        basisu::elemental_vector::increase_capacity
                  ((int)this + 0xd0,SUB41(uVar37,0),(uint)(uVar24 + 1 == uVar37),
                   (_func_void_void_ptr_void_ptr_uint *)0x18,true);
        uVar24 = *(uint *)(this + 0xd8);
        uVar23 = *(uint *)(this + 0x28);
      }
      puVar26 = (undefined8 *)(*(long *)(this + 0xd0) + (ulong)uVar24 * 0x18);
      puVar3 = puVar26 + (ulong)(uVar37 - uVar24) * 3;
      for (; puVar26 != puVar3; puVar26 = puVar26 + 3) {
        *puVar26 = 0;
        puVar26[1] = 0;
        puVar26[2] = 0;
      }
    }
    *(uint *)(this + 0xd8) = uVar37;
  }
  local_d8 = (void *)0x0;
  local_d0 = 0;
  if (uVar23 != 0) {
    iVar30 = 0;
    lVar35 = *(long *)(this + 0x20);
    piVar16 = (int *)(lVar35 + 0x14);
    piVar15 = piVar16 + (ulong)uVar23 * 0xc;
    do {
      iVar32 = *piVar16;
      piVar1 = piVar16 + 1;
      piVar16 = piVar16 + 0xc;
      iVar30 = iVar30 + iVar32 * *piVar1;
    } while (piVar16 != piVar15);
    if (iVar30 == 0) {
LAB_00107f81:
      local_f4 = 0;
      local_130 = 0;
      local_12c = 0;
      local_f0 = 0;
      do {
        local_14c = -1;
        if (iVar6 == 3) {
          local_14c = find_video_frame(this,(int)local_f0,-1);
        }
        piVar16 = (int *)(local_f0 * 0x30 + lVar35);
        cVar5 = *(char *)((long)piVar16 + 0x2d);
        uVar9 = piVar16[5];
        uVar10 = piVar16[6];
        uVar37 = piVar16[5];
        uVar24 = piVar16[6];
        local_140 = *piVar16;
        lVar35 = local_f0 * 0x18;
        puVar17 = (uint *)(lVar35 + *(long *)(this + 0xd0));
        uVar23 = *puVar17;
        if ((uVar23 != uVar9) || (puVar17[1] != uVar10)) {
          local_c8 = (void *)0x0;
          local_c0 = 0;
          uVar29 = uVar10 * uVar9;
          if (uVar29 == 0) {
            local_c0._4_4_ = 0;
            local_c8 = (void *)0x0;
          }
          else {
            basisu::elemental_vector::increase_capacity
                      ((uint)&local_c8,SUB41(uVar29,0),(uint)(uVar29 == 1),
                       (_func_void_void_ptr_void_ptr_uint *)0x14,false);
            puVar18 = (undefined4 *)((long)local_c8 + (local_c0 & 0xffffffff) * 0x14);
            puVar2 = puVar18 + (ulong)(uVar29 - (int)local_c0) * 5;
            for (; puVar18 != puVar2; puVar18 = puVar18 + 5) {
              *puVar18 = 0;
              *(undefined8 *)(puVar18 + 1) = 0;
              puVar18[3] = 0;
              *(undefined1 *)(puVar18 + 4) = 0;
            }
            uVar23 = *puVar17;
          }
          uVar13 = puVar17[4];
          __ptr = *(void **)(puVar17 + 2);
          *(void **)(puVar17 + 2) = local_c8;
          puVar17[4] = uVar29;
          uVar29 = puVar17[5];
          if (uVar23 < uVar37) {
            uVar37 = uVar23;
          }
          puVar17[5] = local_c0._4_4_;
          local_c0 = CONCAT44(uVar29,uVar13);
          uVar29 = puVar17[1];
          if (uVar24 <= puVar17[1]) {
            uVar29 = uVar24;
          }
          if ((uVar37 != 0) && (uVar29 != 0)) {
            iVar32 = 0;
            iVar30 = 0;
            uVar24 = 0;
            do {
              uVar13 = 0;
              do {
                uVar36 = iVar30 + uVar13;
                uVar14 = iVar32 + uVar13;
                uVar13 = uVar13 + 1;
                puVar26 = (undefined8 *)((long)__ptr + (ulong)uVar36 * 0x14);
                puVar3 = (undefined8 *)((long)local_c8 + (ulong)uVar14 * 0x14);
                uVar11 = puVar26[1];
                *puVar3 = *puVar26;
                puVar3[1] = uVar11;
                *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar26 + 2);
              } while (uVar13 < uVar37);
              uVar24 = uVar24 + 1;
              iVar30 = iVar30 + uVar23;
              iVar32 = iVar32 + uVar9;
            } while (uVar24 < uVar29);
          }
          *puVar17 = uVar9;
          puVar17[1] = uVar10;
          local_c8 = __ptr;
          if (__ptr != (void *)0x0) {
            free(__ptr);
          }
        }
        if (uVar10 != 0) {
          uVar37 = 0;
          do {
            uVar24 = 0;
            if (uVar9 != 0) {
LAB_00108259:
              do {
                lVar28 = *(long *)(this + 0xd0);
                piVar16 = (int *)(lVar35 + lVar28);
                iVar30 = *piVar16;
                lVar22 = *(long *)(piVar16 + 2);
                puVar17 = (uint *)(lVar22 + (ulong)(iVar30 * uVar37 + uVar24) * 0x14);
                uVar21 = (ulong)(uVar24 + local_140);
                puVar4 = (uint *)(*(long *)(lVar7 + 0x110) + uVar21 * 8);
                uVar23 = *puVar4;
                puVar17[1] = uVar23;
                if (uVar23 != puVar4[1]) {
                  __fprintf_chk(_stderr,2,"ERROR: basisu_backend: verify() failed at line %i!\n",
                                0x1bd);
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar13 = 0xffffffff;
                uVar29 = *(uint *)(*(long *)(lVar7 + 0x170) + uVar21 * 4);
                *puVar17 = 3;
                lVar19 = 0;
                puVar17[2] = uVar29;
                do {
                  uVar14 = (uint)lVar19;
                  if ((uVar14 == 2) && (iVar6 == 3)) {
                    if ((cVar5 != '\x01') &&
                       (((local_14c != -1 &&
                         (piVar16 = (int *)(lVar28 + (long)local_14c * 0x18),
                         lVar28 = *(long *)(piVar16 + 2) +
                                  (ulong)(*piVar16 * uVar37 + uVar24) * 0x14,
                         *(uint *)(lVar28 + 4) == uVar23)) && (*(uint *)(lVar28 + 8) == uVar29)))) {
                      local_130 = local_130 + 1;
                      *(undefined1 *)(lVar28 + 0x10) = 1;
                      *puVar17 = 2;
                      goto LAB_00108248;
                    }
                    break;
                  }
                  iVar32 = (int)(char)(&g_endpoint_preds)[lVar19 * 2] + uVar24;
                  if ((((-1 < iVar32) && (iVar32 < (int)uVar9)) &&
                      ((iVar25 = (int)(char)(&DAT_00109af5)[lVar19 * 2] + uVar37, -1 < iVar25 &&
                       ((iVar25 < (int)uVar10 &&
                        (uVar23 == *(uint *)(lVar22 + 4 +
                                            (ulong)(uint)(iVar32 + iVar25 * iVar30) * 0x14))))))) &&
                     (uVar14 < uVar13)) {
                    uVar13 = uVar14;
                  }
                  lVar19 = lVar19 + 1;
                } while (lVar19 != 3);
                if (uVar13 == 0xffffffff) {
                  if (0.0 < *(float *)(this + 0xc)) {
                    pbVar20 = (byte *)(uVar21 * 0x40 + *(long *)(lVar7 + 0x58));
                    local_98 = *(ulong *)(*(long *)(lVar7 + 0x68) + uVar21 * 8);
                    uVar21 = basisu::etc_block::evaluate_etc1_error
                                       ((color_rgba *)&local_98,SUB81(pbVar20,0),
                                        (uint)*(byte *)(lVar7 + 0x1c));
                    if (uVar21 != 0) {
                      fVar38 = (float)uVar21;
                      if (_LC24 <= *(float *)(this + 0xc)) {
                        fVar38 = fVar38 * *(float *)(this + 0xc);
                      }
                      if (__LC26 <= fVar38) {
                        local_108 = (long)(fVar38 - __LC26) ^ 0x8000000000000000;
                      }
                      else {
                        local_108 = (ulong)fVar38;
                      }
                      local_f8 = 0;
                      lVar28 = 0;
                      local_110 = 0xffffffffffffffff;
                      local_90 = local_98;
                      uVar23 = 0xffffffff;
                      do {
                        uVar29 = (uint)lVar28;
                        if ((uVar29 == 2) && (iVar6 == 3)) break;
                        iVar30 = (int)(char)(&g_endpoint_preds)[lVar28 * 2] + uVar24;
                        uVar13 = uVar23;
                        uVar21 = local_110;
                        uVar14 = local_f8;
                        if ((-1 < iVar30) &&
                           (((iVar30 < (int)uVar9 &&
                             (iVar32 = (int)(char)(&DAT_00109af5)[lVar28 * 2] + uVar37, -1 < iVar32)
                             ) && (iVar32 < (int)uVar10)))) {
                          uVar36 = *(uint *)(*(long *)((int *)(lVar35 + *(long *)(this + 0xd0)) + 2)
                                             + (ulong)(uint)(iVar30 + iVar32 * *(int *)(lVar35 + *(
                                                  long *)(this + 0xd0))) * 0x14 + 4);
                          puVar18 = (undefined4 *)(*(long *)(lVar7 + 0x100) + (ulong)uVar36 * 0x38);
                          iVar30 = puVar18[2];
                          local_9c = *puVar18;
                          local_90 = local_90 | 0x2000000;
                          iVar32 = basisu::etc_block::pack_color5
                                             ((color_rgba *)&local_9c,false,0x7f);
                          local_90._0_3_ =
                               CONCAT12((byte)(iVar32 << 3) | local_90._2_1_ & 7,
                                        CONCAT11((char)((ushort)iVar32 >> 5) << 3,
                                                 ((byte)((uint)iVar32 >> 8) >> 2) << 3) |
                                        _LC10 & (ushort)local_90);
                          uVar12 = basisu::etc_block::pack_delta3(0,0,0);
                          uVar11 = local_90;
                          local_90._0_2_ =
                               CONCAT11(local_90._1_1_ & 0xf8 | (byte)(uVar12 >> 3) & 7,
                                        (byte)local_90._0_1_ & 0xf8 | (byte)(uVar12 >> 6) & 7);
                          local_90._2_1_ = SUB81(uVar11,2);
                          local_90._0_3_ =
                               CONCAT12((byte)uVar12 & 7 | local_90._2_1_ & 0xf8,(ushort)local_90);
                          local_90._3_1_ = SUB81(uVar11,3);
                          bVar8 = local_90._3_1_ & 3;
                          pcVar33 = local_88;
                          local_90._4_4_ = SUB84(uVar11,4);
                          local_90._0_4_ =
                               CONCAT13(bVar8 | (byte)(iVar30 << 5) | (byte)(iVar30 << 2),
                                        (undefined3)local_90);
                          basisu::unpack_etc1((etc_block *)&local_90,pcVar33,false);
                          if (*(char *)(lVar7 + 0x1c) == '\0') {
                            uVar31 = 0;
                            pbVar34 = pbVar20;
                            do {
                              uVar31 = uVar31 + (long)(int)(((uint)*pbVar34 - (uint)(byte)*pcVar33)
                                                            * ((uint)*pbVar34 - (uint)(byte)*pcVar33
                                                              ) + ((uint)pbVar34[1] -
                                                                  (uint)(byte)pcVar33[1]) *
                                                                  ((uint)pbVar34[1] -
                                                                  (uint)(byte)pcVar33[1]) +
                                                           ((uint)pbVar34[2] -
                                                           (uint)(byte)pcVar33[2]) *
                                                           ((uint)pbVar34[2] -
                                                           (uint)(byte)pcVar33[2]));
                              if (local_108 < uVar31) goto LAB_001087a0;
                              pcVar33 = pcVar33 + 4;
                              pbVar34 = pbVar34 + 4;
                            } while (pcVar33 != local_48);
                          }
                          else {
                            uVar31 = 0;
                            pbVar34 = pbVar20;
                            do {
                              lVar19 = (long)(int)(((uint)pbVar34[1] - (uint)(byte)pcVar33[1]) *
                                                   0x5c + ((uint)*pbVar34 - (uint)(byte)*pcVar33) *
                                                          0x1b +
                                                  ((uint)pbVar34[2] - (uint)(byte)pcVar33[2]) * 9);
                              lVar27 = (int)(((uint)*pbVar34 - (uint)(byte)*pcVar33) * 0x80) -
                                       lVar19;
                              lVar22 = (int)(((uint)pbVar34[2] - (uint)(byte)pcVar33[2]) * 0x80) -
                                       lVar19;
                              uVar31 = uVar31 + (((uint)((int)(lVar27 * lVar27 >> 7) * 0x1a) >> 7) +
                                                 ((uint)((int)(lVar22 * lVar22 >> 7) * 3) >> 7) +
                                                (int)(lVar19 * lVar19 >> 7));
                              if (local_108 < uVar31) goto LAB_001087a0;
                              pcVar33 = pcVar33 + 4;
                              pbVar34 = pbVar34 + 4;
                            } while (pcVar33 != local_48);
                          }
                          uVar13 = uVar29;
                          uVar21 = uVar31;
                          uVar14 = uVar36;
                          if (((local_110 <= uVar31) &&
                              (uVar13 = uVar23, uVar21 = local_110, uVar14 = local_f8,
                              local_110 == uVar31)) && (uVar29 < uVar23)) {
                            uVar13 = uVar29;
                            uVar14 = uVar36;
                          }
                        }
LAB_001087a0:
                        local_f8 = uVar14;
                        local_110 = uVar21;
                        uVar23 = uVar13;
                        lVar28 = lVar28 + 1;
                      } while (lVar28 != 3);
                      if (uVar23 == 0xffffffff) {
                        local_12c = local_12c + 1;
                      }
                      else {
                        local_130 = local_130 + 1;
                        local_f4 = local_f4 + 1;
                        puVar17[1] = local_f8;
                        *puVar17 = uVar23;
                      }
                    }
                    uVar13 = *puVar17;
                    goto LAB_00108343;
                  }
                  local_12c = local_12c + 1;
                  uVar21 = local_d0 & 0xffffffff;
                  if (local_d0._4_4_ <= (uint)local_d0) goto LAB_0010840c;
                }
                else {
                  local_130 = local_130 + 1;
                  *puVar17 = uVar13;
LAB_00108343:
                  if (uVar13 != 3) {
LAB_00108248:
                    uVar24 = uVar24 + 1;
                    if (uVar24 == uVar9) break;
                    goto LAB_00108259;
                  }
                  uVar23 = puVar17[1];
                  uVar21 = local_d0 & 0xffffffff;
                  if (local_d0._4_4_ <= (uint)local_d0) {
LAB_0010840c:
                    basisu::elemental_vector::increase_capacity
                              ((uint)&local_d8,(bool)((char)(uint)local_d0 + '\x01'),1,
                               (_func_void_void_ptr_void_ptr_uint *)0x4,false);
                    uVar21 = local_d0 & 0xffffffff;
                  }
                }
                uVar24 = uVar24 + 1;
                *(uint *)((long)local_d8 + uVar21 * 4) = uVar23;
                local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 + 1);
              } while (uVar24 != uVar9);
            }
            uVar37 = uVar37 + 1;
            local_140 = local_140 + uVar9;
          } while (uVar37 != uVar10);
        }
        local_f0 = local_f0 + 1;
        uVar37 = *(uint *)(this + 0x28);
        if (uVar37 <= (uint)local_f0) goto LAB_001088c9;
        lVar35 = *(long *)(this + 0x20);
      } while( true );
    }
    basisu::elemental_vector::increase_capacity
              ((uint)&local_d8,SUB41(iVar30,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
    if (*(int *)(this + 0x28) != 0) {
      lVar35 = *(long *)(this + 0x20);
      goto LAB_00107f81;
    }
  }
  fVar38 = 0.0;
  local_130 = 0;
  local_12c = 0;
  fVar39 = 0.0;
  fVar41 = 0.0;
  fVar40 = 0.0;
  local_f4 = 0;
LAB_00108950:
  basisu::debug_printf
            ("total_endpoint_pred_missed: %u (%3.2f%%) total_endpoint_pred_hit: %u (%3.2f%%), total_block_endpoints_remapped: %u (%3.2f%%)\n"
             ,(double)(fVar38 / fVar41),(double)(fVar39 / fVar41),(double)(fVar40 / fVar41),
             (ulong)local_12c,(ulong)local_130,(ulong)local_f4);
  reoptimize_and_sort_endpoints_codebook(this,local_f4,(vector *)&local_d8);
  sort_selector_codebook(this);
  if (*(int *)(*(long *)this + 0x24) == 3) {
    check_for_valid_cr_blocks(this);
  }
  basisu::interval_timer::get_elapsed_secs();
  basisu::debug_printf("Elapsed time: %3.3f secs\n");
  if (local_d8 != (void *)0x0) {
    free(local_d8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001088c9:
  fVar40 = (float)local_f4 * _LC30;
  fVar39 = (float)local_130 * _LC30;
  fVar38 = (float)local_12c * _LC30;
  if (uVar37 == 0) {
    fVar41 = 0.0;
  }
  else {
    uVar24 = 0;
    piVar16 = (int *)(*(long *)(this + 0x20) + 0x14);
    piVar15 = piVar16 + (ulong)uVar37 * 0xc;
    do {
      iVar6 = *piVar16;
      piVar1 = piVar16 + 1;
      piVar16 = piVar16 + 0xc;
      uVar24 = uVar24 + iVar6 * *piVar1;
    } while (piVar16 != piVar15);
    fVar41 = (float)uVar24;
  }
  goto LAB_00108950;
}



/* basisu::basisu_backend::encode() */

uint __thiscall basisu::basisu_backend::encode(basisu_backend *this)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  void *__ptr;
  float fVar11;
  
  uVar9 = (ulong)*(uint *)(this + 0x28);
  __ptr = *(void **)(this + 0x60);
  if (*(uint *)(this + 0x6c) < *(uint *)(this + 0x28)) {
    if (__ptr != (void *)0x0) {
      free(__ptr);
      *(undefined8 *)(this + 0x60) = 0;
      uVar9 = (ulong)*(uint *)(this + 0x28);
      *(undefined8 *)(this + 0x68) = 0;
    }
    basisu::elemental_vector::increase_capacity
              ((int)this + 0x60,SUB81(uVar9,0),0,(_func_void_void_ptr_void_ptr_uint *)0x30,false);
    uVar9 = (ulong)*(uint *)(this + 0x28);
    __ptr = *(void **)(this + 0x60);
  }
  else if (*(int *)(this + 0x68) != 0) {
    *(undefined4 *)(this + 0x68) = 0;
  }
  if ((__ptr != (void *)0x0) && (*(void **)(this + 0x20) != (void *)0x0)) {
    memcpy(__ptr,*(void **)(this + 0x20),uVar9 * 0x30);
    uVar9 = (ulong)*(uint *)(this + 0x28);
  }
  *(int *)(this + 0x68) = (int)uVar9;
  *(ushort *)(this + 0x34) = CONCAT11(this[0x18],this[8]);
  this[0x36] = *(basisu_backend *)(*(long *)this + 0x1c);
  create_endpoint_palette(this);
  create_selector_palette(this);
  create_encoder_blocks(this);
  cVar3 = encode_image(this);
  if (cVar3 != '\0') {
    cVar3 = encode_endpoint_palette(this);
    if (cVar3 != '\0') {
      cVar3 = encode_selector_palette(this);
      if (cVar3 != '\0') {
        uVar8 = *(int *)(this + 0x48) + *(int *)(this + 0x78) + *(int *)(this + 0x58);
        if (*(uint *)(this + 0x88) != 0) {
          lVar4 = *(long *)(this + 0x80);
          lVar7 = (ulong)*(uint *)(this + 0x88) * 0x10 + lVar4;
          do {
            uVar8 = uVar8 + *(int *)(lVar4 + 8);
            lVar4 = lVar4 + 0x10;
          } while (lVar7 != lVar4);
        }
        if (*(uint *)(this + 0x28) == 0) {
          fVar11 = 0.0;
        }
        else {
          uVar6 = 0;
          piVar5 = (int *)(*(long *)(this + 0x20) + 4);
          piVar10 = piVar5 + (ulong)*(uint *)(this + 0x28) * 0xc;
          do {
            iVar2 = *piVar5;
            piVar1 = piVar5 + 1;
            piVar5 = piVar5 + 0xc;
            uVar6 = uVar6 + iVar2 * *piVar1;
          } while (piVar10 != piVar5);
          fVar11 = (float)uVar6;
        }
        basisu::debug_printf
                  ("Wrote %u bytes, %3.3f bits/texel\n",(double)(((float)uVar8 * _LC17) / fVar11),
                   (ulong)uVar8);
        return uVar8;
      }
    }
  }
  return 0;
}



/* basisu::vector<basisu::vector2D<basisu::encoder_block> >::object_mover(void*, void*, unsigned
   int) */

void basisu::vector<basisu::vector2D<basisu::encoder_block>>::object_mover
               (void *param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  void *__ptr;
  
  puVar2 = (undefined8 *)((long)param_2 + (ulong)param_3 * 0x18);
  if ((undefined8 *)param_2 != puVar2) {
    do {
      while( true ) {
        *(undefined8 *)((long)param_1 + 8) = 0;
        *(undefined8 *)((long)param_1 + 0x10) = 0;
        if (param_2 != param_1) break;
LAB_00109579:
        param_2 = (void *)((long)param_2 + 0x18);
        param_1 = (void *)((long)param_1 + 0x18);
        if (puVar2 == (undefined8 *)param_2) {
          return;
        }
      }
                    /* WARNING: Load size is inaccurate */
      *(undefined8 *)param_1 = *param_2;
      if ((undefined8 *)((long)param_1 + 8) == (undefined8 *)((long)param_2 + 8)) {
        __ptr = *(void **)((long)param_2 + 8);
LAB_0010956f:
        if (__ptr != (void *)0x0) {
          free(__ptr);
        }
        goto LAB_00109579;
      }
      iVar3 = *(int *)((long)param_2 + 0x10);
      if (iVar3 == 0) {
LAB_00109568:
        __ptr = *(void **)((long)param_2 + 8);
        *(int *)((long)param_1 + 0x10) = iVar3;
        goto LAB_0010956f;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)(undefined8 *)((long)param_1 + 8),SUB41(iVar3,0),0,
                 (_func_void_void_ptr_void_ptr_uint *)0x14,false);
      if (*(void **)((long)param_1 + 8) == (void *)0x0) {
LAB_00109565:
        iVar3 = *(int *)((long)param_2 + 0x10);
        goto LAB_00109568;
      }
      puVar1 = (uint *)((long)param_2 + 0x10);
      if (*(void **)((long)param_2 + 8) != (void *)0x0) {
        memcpy(*(void **)((long)param_1 + 8),*(void **)((long)param_2 + 8),(ulong)*puVar1 * 0x14);
        goto LAB_00109565;
      }
      param_2 = (void *)((long)param_2 + 0x18);
      *(uint *)((long)param_1 + 0x10) = *puVar1;
      param_1 = (void *)((long)param_1 + 0x18);
    } while (puVar2 != (undefined8 *)param_2);
  }
  return;
}



/* basisu::bitwise_coder::init(unsigned int) */

void __thiscall basisu::bitwise_coder::init(bitwise_coder *this,uint param_1)

{
  void *__ptr;
  uint uVar1;
  long in_FS_OFFSET;
  void *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0xc) < param_1) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,SUB41(param_1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
  }
  else if (param_1 < *(uint *)(this + 0xc)) {
    local_38 = (void *)0x0;
    local_30 = 0;
    if (param_1 < *(uint *)(this + 8)) {
      param_1 = *(uint *)(this + 8);
    }
    basisu::elemental_vector::increase_capacity
              ((uint)&local_38,SUB41(param_1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    uVar1 = *(uint *)(this + 8);
    if (local_30._4_4_ < uVar1) {
      if (local_38 != (void *)0x0) {
        free(local_38);
        local_38 = (void *)0x0;
        uVar1 = *(uint *)(this + 8);
        local_30 = 0;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)&local_38,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x1,false);
    }
    else if ((int)local_30 != 0) {
      local_30 = (ulong)local_30._4_4_ << 0x20;
    }
    if (local_38 != (void *)0x0) {
      if (*(void **)this == (void *)0x0) {
        *(void **)this = local_38;
        *(uint *)(this + 0xc) = local_30._4_4_;
        goto LAB_0010963a;
      }
      memcpy(local_38,*(void **)this,(ulong)*(uint *)(this + 8));
    }
    __ptr = *(void **)this;
    *(void **)this = local_38;
    *(uint *)(this + 0xc) = local_30._4_4_;
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
  }
LAB_0010963a:
  if (*(int *)(this + 8) != 0) {
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::huffman_encoding_table::~huffman_encoding_table() */

void __thiscall
basisu::huffman_encoding_table::~huffman_encoding_table(huffman_encoding_table *this)

{
  if (*(void **)(this + 0x10) != (void *)0x0) {
    free(*(void **)(this + 0x10));
  }
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    return;
  }
  return;
}



/* basisu::vector<unsigned char>::resize(unsigned long, bool) */

void __thiscall
basisu::vector<unsigned_char>::resize(vector<unsigned_char> *this,ulong param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 >> 0x20 == 0) {
    uVar1 = *(uint *)(this + 8);
    uVar2 = (uint)param_1;
    if (uVar1 != uVar2) {
      if (uVar1 <= uVar2) {
        if (*(uint *)(this + 0xc) < uVar2) {
          if (uVar1 + 1 == uVar2) {
            param_2 = true;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)this,SUB81(param_1,0),(uint)param_2,
                     (_func_void_void_ptr_void_ptr_uint *)0x1,false);
          uVar1 = *(uint *)(this + 8);
        }
        memset((void *)((ulong)uVar1 + *(long *)this),0,(ulong)(uVar2 - uVar1));
      }
      *(uint *)(this + 8) = uVar2;
    }
    return;
  }
  return;
}



/* basisu::vector<unsigned int>::resize(unsigned long, bool) */

void __thiscall
basisu::vector<unsigned_int>::resize(vector<unsigned_int> *this,ulong param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 >> 0x20 == 0) {
    uVar1 = *(uint *)(this + 8);
    uVar2 = (uint)param_1;
    if (uVar1 != uVar2) {
      if (uVar1 <= uVar2) {
        if (*(uint *)(this + 0xc) < uVar2) {
          if (uVar1 + 1 == uVar2) {
            param_2 = true;
          }
          basisu::elemental_vector::increase_capacity
                    ((uint)this,SUB81(param_1,0),(uint)param_2,
                     (_func_void_void_ptr_void_ptr_uint *)0x4,false);
          uVar1 = *(uint *)(this + 8);
        }
        memset((void *)(*(long *)this + (ulong)uVar1 * 4),0,(ulong)(uVar2 - uVar1) << 2);
      }
      *(uint *)(this + 8) = uVar2;
    }
    return;
  }
  return;
}



/* basisu::vector<unsigned int>::push_back(unsigned int const&) */

void __thiscall basisu::vector<unsigned_int>::push_back(vector<unsigned_int> *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 8);
  if (*(uint *)(this + 0xc) <= uVar1) {
    basisu::elemental_vector::increase_capacity
              ((uint)this,(bool)((char)uVar1 + '\x01'),1,(_func_void_void_ptr_void_ptr_uint *)0x4,
               false);
    uVar1 = *(uint *)(this + 8);
  }
  *(uint *)(*(long *)this + (ulong)uVar1 * 4) = *param_1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}



/* basisu::vector<int>::reserve(unsigned long) */

void __thiscall basisu::vector<int>::reserve(vector<int> *this,ulong param_1)

{
  void *__ptr;
  uint uVar1;
  uint uVar2;
  long in_FS_OFFSET;
  void *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 >> 0x20 == 0) {
    uVar2 = (uint)param_1;
    if (*(uint *)(this + 0xc) < uVar2) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        basisu::elemental_vector::increase_capacity
                  ((uint)this,SUB81(param_1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
        return;
      }
      goto LAB_00109adc;
    }
    if (uVar2 < *(uint *)(this + 0xc)) {
      local_38 = (void *)0x0;
      local_30 = 0;
      uVar1 = *(uint *)(this + 8);
      if (*(uint *)(this + 8) <= uVar2) {
        uVar1 = uVar2;
      }
      basisu::elemental_vector::increase_capacity
                ((uint)&local_38,SUB41(uVar1,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
      uVar2 = *(uint *)(this + 8);
      if (local_30._4_4_ < uVar2) {
        if (local_38 != (void *)0x0) {
          free(local_38);
          local_38 = (void *)0x0;
          uVar2 = *(uint *)(this + 8);
          local_30 = 0;
        }
        basisu::elemental_vector::increase_capacity
                  ((uint)&local_38,SUB41(uVar2,0),0,(_func_void_void_ptr_void_ptr_uint *)0x4,false);
      }
      else if ((int)local_30 != 0) {
        local_30 = (ulong)local_30._4_4_ << 0x20;
      }
      if (local_38 != (void *)0x0) {
        if (*(void **)this == (void *)0x0) {
          *(void **)this = local_38;
          *(uint *)(this + 0xc) = local_30._4_4_;
          goto LAB_00109a68;
        }
        memcpy(local_38,*(void **)this,(ulong)*(uint *)(this + 8) << 2);
      }
      __ptr = *(void **)this;
      *(void **)this = local_38;
      *(uint *)(this + 0xc) = local_30._4_4_;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
    }
  }
LAB_00109a68:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109adc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* basisu::basisu_backend::basisu_backend() */

void basisu::basisu_backend::_GLOBAL__sub_I_basisu_backend(void)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* basisu::huffman_encoding_table::~huffman_encoding_table() */

void __thiscall
basisu::huffman_encoding_table::~huffman_encoding_table(huffman_encoding_table *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


