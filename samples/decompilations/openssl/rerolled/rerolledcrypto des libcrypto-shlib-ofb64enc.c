void DES_ofb64_encrypt(uchar *in, uchar *out, long length, DES_key_schedule *schedule, DES_cblock *ivec, int *num) {
   byte bVar1;
   DES_cblock auVar2;
   uint uVar3;
   byte *pbVar4;
   int iVar5;
   long in_FS_OFFSET;
   uint uVar6;
   DES_cblock local_50;
   DES_cblock local_48;
   long local_40;
   local_50 = *ivec;
   uVar3 = *num;
   uVar6 = local_50._4_4_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   auVar2 = ( DES_cblock )(( ( ( ( ( ( ( ulong )(uVar6 >> 0x18) << 8 | ( ulong )(uVar6 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar6 >> 8 & 0xff) ) << 8 | ( ulong )(uVar6 & 0xff) ) << 8 | (ulong)local_50 >> 0x18 & 0xff ) << 8 | (ulong)local_50 >> 0x10 & 0xff ) << 8 | ( (ulong)local_50 & 0xffffffff ) >> 8 & 0xff ) << 8 | (ulong)local_50 & 0xff);
   for (int i = 0; i < 8; i++) {
      local_48[i] = auVar2[i];
   }

   if (length != 0) {
      iVar5 = 0;
      pbVar4 = in;
      do {
         if (uVar3 == 0) {
            iVar5 = iVar5 + 1;
            DES_encrypt1((uint*)local_50, schedule, 1);
            for (int i = 0; i < 8; i++) {
               local_48[i] = local_50[i];
            }

         }

         bVar1 = *pbVar4;
         pbVar4 = pbVar4 + 1;
         *out = bVar1 ^ local_48[(int)uVar3];
         uVar3 = uVar3 + 1 & 7;
         out = out + 1;
      }
 while ( in + ( length - (long)pbVar4 ) != (uchar*)0x0 );
      if (iVar5 != 0) {
         *ivec = local_50;
      }

   }

   *num = uVar3;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

