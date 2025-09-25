/* cvtt::Util::BiasSignedInput(cvtt::PixelBlockU8*, cvtt::PixelBlockS8 const*) */void cvtt::Util::BiasSignedInput(PixelBlockU8 *param_1, PixelBlockS8 *param_2) {
   PixelBlockU8 *pPVar1;
   long lVar2;
   PixelBlockU8 PVar3;
   PixelBlockU8 *pPVar4;
   PixelBlockS8 *pPVar5;
   PixelBlockU8 *pPVar6;
   pPVar6 = param_1 + 0x40;
   do {
      pPVar1 = pPVar6 + -0x40;
      pPVar5 = param_2;
      do {
         pPVar4 = pPVar1;
         lVar2 = 0;
         do {
            PVar3 = ( PixelBlockU8 )((char)pPVar5[lVar2] + '\x7f');
            if (pPVar5[lVar2] == (PixelBlockS8)0x80) {
               PVar3 = (PixelBlockU8)0x0;
            }

            pPVar4[lVar2] = PVar3;
            lVar2 = lVar2 + 1;
         }
 while ( lVar2 != 4 );
         pPVar5 = pPVar5 + 4;
         pPVar1 = pPVar4 + 4;
      }
 while ( pPVar4 + 4 != pPVar6 );
      pPVar6 = pPVar4 + 0x44;
      param_2 = param_2 + 0x40;
   }
 while ( param_1 + 0x240 != pPVar6 );
   return;
}
/* cvtt::Util::FillWeights(cvtt::Options const&, float*) */void cvtt::Util::FillWeights(Options *param_1, float *param_2) {
   float fVar1;
   fVar1 = _LC1;
   if (( *(uint*)param_1 & 0x200 ) != 0) {
      *param_2 = _LC1;
      for (int i = 0; i < 3; i++) {
         param_2[( i + 1 )] = fVar1;
      }

      return;
   }

   *param_2 = *(float*)( param_1 + 8 );
   for (int i = 0; i < 3; i++) {
      param_2[( i + 1 )] = *(float*)( param_1 + ( 4*i + 12 ) );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* cvtt::Util::ComputeTweakFactors(int, int, float*) */void cvtt::Util::ComputeTweakFactors(int param_1, int param_2, float *param_3) {
   uint uVar1;
   float fVar2;
   uVar1 = param_1 >> 1 & 1;
   fVar2 = (float)(int)( ( ( param_2 + -1 ) - uVar1 ) - ( param_1 & 1U ) );
   *(ulong*)param_3 = CONCAT44((float)( param_1 & 1U ) / fVar2 + _LC1, (float)( (uint)(float)uVar1 ^ __LC2 ) / fVar2);
   return;
}

