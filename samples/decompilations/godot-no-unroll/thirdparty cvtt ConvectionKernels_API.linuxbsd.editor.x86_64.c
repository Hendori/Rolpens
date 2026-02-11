
/* cvtt::Kernels::EncodeBC7(unsigned char*, cvtt::PixelBlockU8 const*, cvtt::Options const&,
   cvtt::BC7EncodingPlan const&) */

void cvtt::Kernels::EncodeBC7
               (uchar *param_1,PixelBlockU8 *param_2,Options *param_3,BC7EncodingPlan *param_4)

{
  long in_FS_OFFSET;
  float afStack_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_48);
  cvtt::Internal::BC7Computer::Pack
            (*(uint *)param_3,param_2,param_1,afStack_48,param_4,*(int *)(param_3 + 0x18));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeBC6HU(unsigned char*, cvtt::PixelBlockF16 const*, cvtt::Options const&) */

void cvtt::Kernels::EncodeBC6HU(uchar *param_1,PixelBlockF16 *param_2,Options *param_3)

{
  long in_FS_OFFSET;
  float afStack_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_48);
  cvtt::Internal::BC6HComputer::Pack
            (*(uint *)param_3,param_2,param_1,afStack_48,false,*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x1c));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeBC6HS(unsigned char*, cvtt::PixelBlockF16 const*, cvtt::Options const&) */

void cvtt::Kernels::EncodeBC6HS(uchar *param_1,PixelBlockF16 *param_2,Options *param_3)

{
  long in_FS_OFFSET;
  float afStack_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_48);
  cvtt::Internal::BC6HComputer::Pack
            (*(uint *)param_3,param_2,param_1,afStack_48,true,*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x1c));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeBC1(unsigned char*, cvtt::PixelBlockU8 const*, cvtt::Options const&) */

void cvtt::Kernels::EncodeBC1(uchar *param_1,PixelBlockU8 *param_2,Options *param_3)

{
  long in_FS_OFFSET;
  float afStack_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_48);
  cvtt::Internal::S3TCComputer::PackRGB
            (*(uint *)param_3,param_2,param_1,8,afStack_48,true,*(float *)(param_3 + 4),
             (bool)((byte)(*(uint *)param_3 >> 7) & 1),*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x24));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeBC2(unsigned char*, cvtt::PixelBlockU8 const*, cvtt::Options const&) */

void cvtt::Kernels::EncodeBC2(uchar *param_1,PixelBlockU8 *param_2,Options *param_3)

{
  long in_FS_OFFSET;
  float afStack_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_48);
  cvtt::Internal::S3TCComputer::PackRGB
            (*(uint *)param_3,param_2,param_1 + 8,0x10,afStack_48,false,_LC0,
             (bool)((byte)(*(uint *)param_3 >> 7) & 1),*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x24));
  cvtt::Internal::S3TCComputer::PackExplicitAlpha(*(uint *)param_3,param_2,3,param_1,0x10);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeBC3(unsigned char*, cvtt::PixelBlockU8 const*, cvtt::Options const&) */

void cvtt::Kernels::EncodeBC3(uchar *param_1,PixelBlockU8 *param_2,Options *param_3)

{
  long in_FS_OFFSET;
  float afStack_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_48);
  cvtt::Internal::S3TCComputer::PackRGB
            (*(uint *)param_3,param_2,param_1 + 8,0x10,afStack_48,false,_LC0,
             (bool)((byte)(*(uint *)param_3 >> 7) & 1),*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x24));
  cvtt::Internal::S3TCComputer::PackInterpolatedAlpha
            (*(uint *)param_3,param_2,3,param_1,0x10,false,*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x20));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeBC4U(unsigned char*, cvtt::PixelBlockU8 const*, cvtt::Options const&) */

void cvtt::Kernels::EncodeBC4U(uchar *param_1,PixelBlockU8 *param_2,Options *param_3)

{
  long in_FS_OFFSET;
  float afStack_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_38);
  cvtt::Internal::S3TCComputer::PackInterpolatedAlpha
            (*(uint *)param_3,param_2,0,param_1,8,false,*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x20));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeBC4S(unsigned char*, cvtt::PixelBlockS8 const*, cvtt::Options const&) */

void cvtt::Kernels::EncodeBC4S(uchar *param_1,PixelBlockS8 *param_2,Options *param_3)

{
  long in_FS_OFFSET;
  float afStack_248 [4];
  PixelBlockU8 local_238 [520];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_248);
  cvtt::Util::BiasSignedInput(local_238,param_2);
  cvtt::Internal::S3TCComputer::PackInterpolatedAlpha
            (*(uint *)param_3,local_238,0,param_1,8,true,*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x20));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeBC5U(unsigned char*, cvtt::PixelBlockU8 const*, cvtt::Options const&) */

void cvtt::Kernels::EncodeBC5U(uchar *param_1,PixelBlockU8 *param_2,Options *param_3)

{
  long in_FS_OFFSET;
  float afStack_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_38);
  cvtt::Internal::S3TCComputer::PackInterpolatedAlpha
            (*(uint *)param_3,param_2,0,param_1,0x10,false,*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x20));
  cvtt::Internal::S3TCComputer::PackInterpolatedAlpha
            (*(uint *)param_3,param_2,1,param_1 + 8,0x10,false,*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x20));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeBC5S(unsigned char*, cvtt::PixelBlockS8 const*, cvtt::Options const&) */

void cvtt::Kernels::EncodeBC5S(uchar *param_1,PixelBlockS8 *param_2,Options *param_3)

{
  long in_FS_OFFSET;
  float afStack_248 [4];
  PixelBlockU8 local_238 [520];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_248);
  cvtt::Util::BiasSignedInput(local_238,param_2);
  cvtt::Internal::S3TCComputer::PackInterpolatedAlpha
            (*(uint *)param_3,local_238,0,param_1,0x10,true,*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x20));
  cvtt::Internal::S3TCComputer::PackInterpolatedAlpha
            (*(uint *)param_3,local_238,1,param_1 + 8,0x10,true,*(int *)(param_3 + 0x28),
             *(int *)(param_3 + 0x20));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeETC1(unsigned char*, cvtt::PixelBlockU8 const*, cvtt::Options const&,
   cvtt::ETC1CompressionData*) */

void cvtt::Kernels::EncodeETC1
               (uchar *param_1,PixelBlockU8 *param_2,Options *param_3,ETC1CompressionData *param_4)

{
  long in_FS_OFFSET;
  float afStack_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_48);
  cvtt::Internal::ETCComputer::CompressETC1Block(param_1,param_2,param_4,param_3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeETC2(unsigned char*, cvtt::PixelBlockU8 const*, cvtt::Options const&,
   cvtt::ETC2CompressionData*) */

void cvtt::Kernels::EncodeETC2
               (uchar *param_1,PixelBlockU8 *param_2,Options *param_3,ETC2CompressionData *param_4)

{
  long in_FS_OFFSET;
  float afStack_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_48);
  cvtt::Internal::ETCComputer::CompressETC2Block(param_1,param_2,param_4,param_3,false);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeETC2PunchthroughAlpha(unsigned char*, cvtt::PixelBlockU8 const*,
   cvtt::Options const&, cvtt::ETC2CompressionData*) */

void cvtt::Kernels::EncodeETC2PunchthroughAlpha
               (uchar *param_1,PixelBlockU8 *param_2,Options *param_3,ETC2CompressionData *param_4)

{
  long in_FS_OFFSET;
  float afStack_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_48);
  cvtt::Internal::ETCComputer::CompressETC2Block(param_1,param_2,param_4,param_3,true);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::EncodeETC2Alpha(unsigned char*, cvtt::PixelBlockU8 const*, cvtt::Options const&)
    */

void cvtt::Kernels::EncodeETC2Alpha(uchar *param_1,PixelBlockU8 *param_2,Options *param_3)

{
  cvtt::Internal::ETCComputer::CompressETC2AlphaBlock(param_1,param_2,param_3);
  return;
}



/* cvtt::Kernels::EncodeETC2Alpha11(unsigned char*, cvtt::PixelBlockScalarS16 const*, bool,
   cvtt::Options const&) */

void cvtt::Kernels::EncodeETC2Alpha11
               (uchar *param_1,PixelBlockScalarS16 *param_2,bool param_3,Options *param_4)

{
  cvtt::Internal::ETCComputer::CompressEACBlock(param_1,param_2,param_3,param_4);
  return;
}



/* cvtt::Kernels::EncodeETC2RGBA(unsigned char*, cvtt::PixelBlockU8 const*, cvtt::Options const&,
   cvtt::ETC2CompressionData*) */

void cvtt::Kernels::EncodeETC2RGBA
               (uchar *param_1,PixelBlockU8 *param_2,Options *param_3,ETC2CompressionData *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  float afStack_c8 [4];
  uchar local_b8 [8];
  undefined8 auStack_b0 [7];
  uchar local_78 [8];
  undefined8 auStack_70 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cvtt::Util::FillWeights(param_3,afStack_c8);
  cvtt::Internal::ETCComputer::CompressETC2Block(local_78,param_2,param_4,param_3,false);
  cvtt::Internal::ETCComputer::CompressETC2AlphaBlock(local_b8,param_2,param_3);
  lVar4 = 0;
  do {
    uVar3 = *(undefined8 *)(local_b8 + lVar4);
    uVar2 = *(undefined8 *)((long)auStack_70 + lVar4);
    uVar1 = *(undefined8 *)(local_78 + lVar4);
    *(undefined8 *)(param_1 + lVar4 * 2 + 0x10) = *(undefined8 *)((long)auStack_b0 + lVar4);
    *(undefined8 *)(param_1 + lVar4 * 2 + 0x10 + 8) = uVar2;
    *(undefined8 *)(param_1 + lVar4 * 2) = uVar3;
    *(undefined8 *)(param_1 + lVar4 * 2 + 8) = uVar1;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Kernels::DecodeBC7(cvtt::PixelBlockU8*, unsigned char const*) */

void cvtt::Kernels::DecodeBC7(PixelBlockU8 *param_1,uchar *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  
  puVar1 = param_2;
  do {
    puVar2 = puVar1 + 0x10;
    cvtt::Internal::BC7Computer::UnpackOne(param_1,puVar1);
    puVar1 = puVar2;
    param_1 = param_1 + 0x40;
  } while (puVar2 != param_2 + 0x80);
  return;
}



/* cvtt::Kernels::DecodeBC6HU(cvtt::PixelBlockF16*, unsigned char const*) */

void cvtt::Kernels::DecodeBC6HU(PixelBlockF16 *param_1,uchar *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  
  puVar1 = param_2;
  do {
    puVar2 = puVar1 + 0x10;
    cvtt::Internal::BC6HComputer::UnpackOne(param_1,puVar1,false);
    param_1 = param_1 + 0x80;
    puVar1 = puVar2;
  } while (puVar2 != param_2 + 0x80);
  return;
}



/* cvtt::Kernels::DecodeBC6HS(cvtt::PixelBlockF16*, unsigned char const*) */

void cvtt::Kernels::DecodeBC6HS(PixelBlockF16 *param_1,uchar *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  
  puVar1 = param_2;
  do {
    puVar2 = puVar1 + 0x10;
    cvtt::Internal::BC6HComputer::UnpackOne(param_1,puVar1,true);
    param_1 = param_1 + 0x80;
    puVar1 = puVar2;
  } while (puVar2 != param_2 + 0x80);
  return;
}



/* cvtt::Kernels::AllocETC1Data(void* (*)(void*, unsigned long), void*) */

void cvtt::Kernels::AllocETC1Data(_func_void_ptr_void_ptr_ulong *param_1,void *param_2)

{
  cvtt::Internal::ETCComputer::AllocETC1Data(param_1,param_2);
  return;
}



/* cvtt::Kernels::ReleaseETC1Data(cvtt::ETC1CompressionData*, void (*)(void*, void*, unsigned long))
    */

void cvtt::Kernels::ReleaseETC1Data
               (ETC1CompressionData *param_1,_func_void_void_ptr_void_ptr_ulong *param_2)

{
  cvtt::Internal::ETCComputer::ReleaseETC1Data(param_1,param_2);
  return;
}



/* cvtt::Kernels::AllocETC2Data(void* (*)(void*, unsigned long), void*, cvtt::Options const&) */

void cvtt::Kernels::AllocETC2Data
               (_func_void_ptr_void_ptr_ulong *param_1,void *param_2,Options *param_3)

{
  cvtt::Internal::ETCComputer::AllocETC2Data(param_1,param_2,param_3);
  return;
}



/* cvtt::Kernels::ReleaseETC2Data(cvtt::ETC2CompressionData*, void (*)(void*, void*, unsigned long))
    */

void cvtt::Kernels::ReleaseETC2Data
               (ETC2CompressionData *param_1,_func_void_void_ptr_void_ptr_ulong *param_2)

{
  cvtt::Internal::ETCComputer::ReleaseETC2Data(param_1,param_2);
  return;
}


