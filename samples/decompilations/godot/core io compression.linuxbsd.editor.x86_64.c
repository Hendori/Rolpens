
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = __n;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Compression::compress(unsigned char*, unsigned char const*, int, Compression::Mode) */

ulong Compression::compress(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined8 local_b8;
  int local_b0;
  undefined8 local_a0;
  int local_98;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 5) {
    switch(param_4) {
    case 0:
      if (0xf < param_3) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = fastlz_compress(param_2,param_3,param_1);
          return uVar2;
        }
        goto LAB_001003ba;
      }
      uVar6 = (ulong)param_3;
      uVar2 = 0x10;
      if (0xf < uVar6) {
        uVar2 = uVar6;
      }
      __memset_chk(local_48 + uVar6,0,(long)(0x10 - param_3),uVar2 - uVar6);
      __memcpy_chk(local_48,param_2,uVar6,0x10);
      uVar5 = fastlz_compress(local_48,0x10,param_1);
      break;
    default:
      local_68 = 0;
      local_78 = _GLOBAL_OFFSET_TABLE_;
      puStack_70 = PTR_zipio_free_00103008;
      if (param_4 == 1) {
        uVar3 = 0xf;
        uVar4 = zlib_level;
      }
      else {
        uVar3 = 0x1f;
        uVar4 = gzip_level;
      }
      uVar5 = 0xffffffff;
      iVar1 = deflateInit2_(&local_b8,uVar4,8,uVar3,8,0,"1.3.1",0x70);
      if (iVar1 == 0) {
        local_b0 = param_3;
        iVar1 = deflateBound(&local_b8,(long)param_3);
        local_b8 = param_2;
        local_a0 = param_1;
        local_98 = iVar1;
        deflate(&local_b8,4);
        uVar5 = iVar1 - local_98;
        deflateEnd(&local_b8);
      }
      break;
    case 2:
      uVar3 = ZSTD_createCCtx();
      ZSTD_CCtx_setParameter(uVar3,100,zstd_level);
      if (zstd_long_distance_matching != '\0') {
        ZSTD_CCtx_setParameter(uVar3,0xa0,1);
        ZSTD_CCtx_setParameter(uVar3,0x65,zstd_window_log_size);
      }
      iVar1 = ZSTD_compressBound((long)param_3);
      uVar5 = ZSTD_compressCCtx(uVar3,param_1,(long)iVar1,param_2,(long)param_3,zstd_level);
      ZSTD_freeCCtx(uVar3);
      break;
    case 4:
      _err_print_error("compress","core/io/compression.cpp",0x30,
                       "Method/function failed. Returning: -1",
                       "Only brotli decompression is supported.",0,0);
      goto LAB_00100261;
    }
  }
  else {
    _err_print_error("compress","core/io/compression.cpp",100,
                     "Method/function failed. Returning: -1",0,0);
LAB_00100261:
    uVar5 = 0xffffffff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar5;
  }
LAB_001003ba:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Compression::get_max_compressed_buffer_size(int, Compression::Mode) */

int Compression::get_max_compressed_buffer_size(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_98 [64];
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 0:
    iVar2 = (param_1 * 6) / 100 + param_1;
    if (iVar2 < 0x42) {
      iVar2 = 0x42;
    }
    break;
  case 1:
  case 3:
    uVar3 = 0x1f;
    if (param_2 == 1) {
      uVar3 = 0xf;
    }
    local_48 = 0;
    iVar2 = -1;
    local_58 = _GLOBAL_OFFSET_TABLE_;
    puStack_50 = PTR_zipio_free_00103008;
    iVar1 = deflateInit2_(auStack_98,0xffffffff,8,uVar3,8,0,"1.3.1",0x70);
    if (iVar1 == 0) {
      iVar2 = deflateBound(auStack_98,(long)param_1);
      deflateEnd(auStack_98);
    }
    break;
  case 2:
    iVar2 = ZSTD_compressBound((long)param_1);
    break;
  case 4:
    _err_print_error("get_max_compressed_buffer_size","core/io/compression.cpp",0x6a,
                     "Method/function failed. Returning: -1",
                     "Only brotli decompression is supported.",0,0);
    goto LAB_00100501;
  default:
    _err_print_error("get_max_compressed_buffer_size","core/io/compression.cpp",0x89,
                     "Method/function failed. Returning: -1",0,0);
LAB_00100501:
    iVar2 = -1;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Compression::decompress(unsigned char*, int, unsigned char const*, int, Compression::Mode) */

ulong Compression::decompress
                (undefined8 *param_1,uint param_2,ulong param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  ulong local_b8;
  int local_b0;
  undefined8 *local_a0;
  uint local_98;
  uint local_90;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 5) {
    uVar5 = (ulong)(int)param_2;
    switch(param_5) {
    case 0:
      if (0xf < (int)param_2) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = fastlz_decompress(param_3,param_4,param_1,param_2);
          return uVar5;
        }
        goto LAB_00100880;
      }
      fastlz_decompress(param_3,param_4,&local_48,0x10);
      uVar3 = (ulong)(int)param_2;
      if (uVar3 < 8) {
        if ((uVar3 & 4) == 0) {
          if (uVar3 != 0) {
            *(undefined1 *)param_1 = (undefined1)local_48;
            if ((param_2 & 2) != 0) {
              *(undefined2 *)((long)param_1 + (uVar3 - 2)) =
                   *(undefined2 *)((long)&uStack_50 + uVar3 + 6);
            }
          }
        }
        else {
          *(undefined4 *)param_1 = local_48;
          *(undefined4 *)((long)param_1 + (uVar3 - 4)) =
               *(undefined4 *)((long)&uStack_50 + uVar3 + 4);
        }
      }
      else {
        *param_1 = CONCAT44(uStack_44,local_48);
        *(undefined8 *)((long)param_1 + (uVar3 - 8)) = *(undefined8 *)((long)&uStack_50 + uVar3);
        lVar7 = (long)param_1 - ((ulong)(param_1 + 1) & 0xfffffffffffffff8);
        uVar3 = uVar3 + lVar7 & 0xfffffffffffffff8;
        if (7 < uVar3) {
          uVar4 = 0;
          do {
            *(undefined8 *)(((ulong)(param_1 + 1) & 0xfffffffffffffff8) + uVar4) =
                 *(undefined8 *)((long)&local_48 + (uVar4 - lVar7));
            uVar4 = uVar4 + 8;
          } while (uVar4 < uVar3);
        }
      }
      break;
    default:
      uVar6 = 0x1f;
      if (param_5 == 1) {
        uVar6 = 0xf;
      }
      local_68 = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_78 = _GLOBAL_OFFSET_TABLE_;
      puStack_70 = PTR_zipio_free_00103008;
      iVar1 = inflateInit2_(&local_b8,uVar6,"1.3.1",0x70);
      if (iVar1 == 0) {
        local_b8 = param_3;
        local_b0 = param_4;
        local_a0 = param_1;
        local_98 = param_2;
        iVar1 = inflate(&local_b8,4);
        uVar5 = (ulong)local_90;
        inflateEnd(&local_b8);
        if (iVar1 == 1) break;
        _err_print_error("decompress","core/io/compression.cpp",0xba,
                         "Condition \"err != 1\" is true. Returning: -1",0,0);
      }
      else {
        _err_print_error("decompress","core/io/compression.cpp",0xb0,
                         "Condition \"err != 0\" is true. Returning: -1",0,0);
      }
      goto LAB_0010075d;
    case 2:
      uVar6 = ZSTD_createDCtx();
      if (zstd_long_distance_matching != '\0') {
        ZSTD_DCtx_setParameter(uVar6,100,zstd_window_log_size);
      }
      uVar2 = ZSTD_decompressDCtx(uVar6,param_1,(long)(int)param_2,param_3,(long)param_4);
      uVar5 = (ulong)uVar2;
      ZSTD_freeDCtx(uVar6);
      break;
    case 4:
      local_b8 = uVar5;
      iVar1 = BrotliDecoderDecompress((long)param_4,param_3,&local_b8,param_1);
      uVar5 = local_b8 & 0xffffffff;
      if (iVar1 != 1) {
        uVar5 = 0xffffffff;
        _err_print_error("decompress","core/io/compression.cpp",0x92,
                         "Condition \"res != BROTLI_DECODER_RESULT_SUCCESS\" is true. Returning: -1"
                         ,0,0);
      }
    }
  }
  else {
    _err_print_error("decompress","core/io/compression.cpp",200,
                     "Method/function failed. Returning: -1",0,0);
LAB_0010075d:
    uVar5 = 0xffffffff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5 & 0xffffffff;
  }
LAB_00100880:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00100a46:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00100a46;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00101046();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_0010099c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_0010099c:
  puVar8[-1] = param_1;
  return;
}



/* Compression::decompress_dynamic(Vector<unsigned char>*, int, unsigned char const*, int,
   Compression::Mode) */

int Compression::decompress_dynamic(long param_1,int param_2,ulong param_3,int param_4,uint param_5)

{
  CowData<unsigned_char> *pCVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long in_FS_OFFSET;
  ulong local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  int local_b0;
  long local_a0;
  int local_98;
  ulong local_90;
  long local_88;
  undefined1 local_78 [16];
  undefined8 local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 1) {
    iVar2 = -3;
    _err_print_error("decompress_dynamic","core/io/compression.cpp",0xd4,
                     "Condition \"p_src_size <= 0\" is true. Returning: (-3)",0,0);
  }
  else if (param_5 == 4) {
    lVar4 = BrotliDecoderCreateInstance(0,0,0);
    if (lVar4 == 0) {
      _err_print_error("decompress_dynamic","core/io/compression.cpp",0xda,
                       "Parameter \"state\" is null.",0,0);
LAB_00100e85:
      iVar2 = -3;
    }
    else {
      pCVar1 = (CowData<unsigned_char> *)(param_1 + 8);
      iVar2 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_d8 = param_3;
      local_d0 = (long)param_4;
      CowData<unsigned_char>::resize<false>(pCVar1,0);
      do {
        if (*(long *)(param_1 + 8) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(*(long *)(param_1 + 8) + -8);
        }
        CowData<unsigned_char>::resize<false>(pCVar1,gzip_chunk + lVar5);
        CowData<unsigned_char>::_copy_on_write(pCVar1);
        local_c8 = (long)iVar2 + *(long *)(param_1 + 8);
        local_c0 = local_c0 + gzip_chunk;
        iVar7 = BrotliDecoderDecompressStream
                          (lVar4,&local_d0,&local_d8,&local_c0,&local_c8,&local_b8);
        if (iVar7 == 0) {
          uVar3 = BrotliDecoderGetErrorCode(lVar4);
          uVar6 = BrotliDecoderErrorString(uVar3);
          _err_print_error("decompress_dynamic","core/io/compression.cpp",0xf5,uVar6,0,1);
          BrotliDecoderDestroyInstance(lVar4);
          CowData<unsigned_char>::resize<false>(pCVar1,0);
          goto LAB_00100e85;
        }
        iVar2 = iVar2 + (gzip_chunk - (int)local_c0);
        if ((-1 < param_2) && ((ulong)(long)param_2 < local_b8)) {
          iVar2 = -5;
          BrotliDecoderDestroyInstance(lVar4);
          CowData<unsigned_char>::resize<false>(pCVar1,0);
          goto LAB_00100c0b;
        }
      } while (iVar7 != 1);
      if ((*(long *)(param_1 + 8) != 0) && (local_b8 < *(ulong *)(*(long *)(param_1 + 8) + -8))) {
        CowData<unsigned_char>::resize<false>(pCVar1,local_b8);
      }
      iVar2 = 0;
      BrotliDecoderDestroyInstance(lVar4);
    }
  }
  else {
    if ((param_5 & 0xfffffffd) == 1) {
      uVar6 = 0x1f;
      if (param_5 == 1) {
        uVar6 = 0xf;
      }
      local_68 = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_78 = (undefined1  [16])0x0;
      iVar2 = inflateInit2_(&local_b8,uVar6,"1.3.1",0x70);
      if (iVar2 == 0) {
        pCVar1 = (CowData<unsigned_char> *)(param_1 + 8);
        iVar7 = 0;
        local_b8 = param_3;
        local_b0 = param_4;
        CowData<unsigned_char>::resize<false>(pCVar1,0);
        do {
          if (*(long *)(param_1 + 8) == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
          }
          CowData<unsigned_char>::resize<false>(pCVar1,gzip_chunk + lVar4);
          CowData<unsigned_char>::_copy_on_write(pCVar1);
          local_a0 = (long)iVar7 + *(long *)(param_1 + 8);
          local_98 = gzip_chunk;
          do {
            iVar2 = inflate(&local_b8);
            if (iVar2 < -1) {
              if (iVar2 < -5) goto LAB_00100c45;
LAB_00100bcb:
              if (local_88 != 0) {
                _err_print_error("decompress_dynamic","core/io/compression.cpp",0x143,local_88,0,1);
              }
              inflateEnd(&local_b8);
              CowData<unsigned_char>::resize<false>(pCVar1,0);
              goto LAB_00100c0b;
            }
            if (iVar2 == 2) {
              iVar2 = -3;
              goto LAB_00100bcb;
            }
LAB_00100c45:
          } while ((local_98 != 0) && (local_b0 != 0));
          iVar7 = iVar7 + gzip_chunk;
          if ((-1 < param_2) && ((ulong)(long)param_2 < local_90)) {
            iVar2 = -5;
            inflateEnd(&local_b8);
            CowData<unsigned_char>::resize<false>(pCVar1,0);
            goto LAB_00100c0b;
          }
        } while (iVar2 != 1);
        if ((*(long *)(param_1 + 8) != 0) && (local_90 < *(ulong *)(*(long *)(param_1 + 8) + -8))) {
          CowData<unsigned_char>::resize<false>(pCVar1,local_90);
        }
        iVar2 = 0;
        inflateEnd(&local_b8);
        goto LAB_00100c0b;
      }
      _err_print_error("decompress_dynamic","core/io/compression.cpp",0x120,
                       "Condition \"err != 0\" is true. Returning: -1",0,0);
    }
    else {
      _err_print_error("decompress_dynamic","core/io/compression.cpp",0x112,
                       "Condition \"p_mode != MODE_DEFLATE && p_mode != MODE_GZIP\" is true. Returning: (-1)"
                       ,0,0);
    }
    iVar2 = -1;
  }
LAB_00100c0b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00101046(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}


