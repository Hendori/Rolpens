void call_zopen64(undefined8 *param_1) {
   if ((code*)*param_1 != (code*)0x0) {
      for (int i_1154 = 0; i_1154 < 2; i_1154++) {
         /* WARNING: Could not recover jumptable at 0x00100013. Too many branches */
      }
      ( *(code*)*param_1 )(param_1[7]);
      return;
   }
   for (int i_1153 = 0; i_1153 < 2; i_1153++) {
      /* WARNING: Could not recover jumptable at 0x0010001f. Too many branches */
   }
   ( *(code*)param_1[10] )(param_1[7]);
   return;
}void call_zseek64(long param_1) {
   if (*(code**)( param_1 + 0x20 ) != (code*)0x0) {
      for (int i_1156 = 0; i_1156 < 2; i_1156++) {
         /* WARNING: Could not recover jumptable at 0x00100044. Too many branches */
      }
      ( **(code**)( param_1 + 0x20 ) )(*(undefined8*)( param_1 + 0x38 ));
      return;
   }
   for (int i_1155 = 0; i_1155 < 2; i_1155++) {
      /* WARNING: Could not recover jumptable at 0x00100057. Too many branches */
   }
   ( **(code**)( param_1 + 0x60 ) )(*(undefined8*)( param_1 + 0x38 ));
   return;
}long call_ztell64(long param_1) {
   long lVar1;
   if (*(long*)( param_1 + 0x20 ) != 0) {
      for (int i_1157 = 0; i_1157 < 2; i_1157++) {
         /* WARNING: Could not recover jumptable at 0x00100072. Too many branches */
      }
      lVar1 = ( **(code**)( param_1 + 0x18 ) )();
      return lVar1;
   }
   lVar1 = ( **(code**)( param_1 + 0x58 ) )(*(undefined8*)( param_1 + 0x38 ));
   if (lVar1 == 0xffffffff) {
      lVar1 = -1;
   }
   return lVar1;
}void fill_zlib_filefunc64_32_def_from_filefunc32(undefined8 *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   *param_1 = 0;
   uVar3 = param_2[3];
   uVar1 = *param_2;
   param_1[1] = param_2[1];
   uVar2 = param_2[2];
   param_1[3] = 0;
   param_1[2] = uVar2;
   uVar2 = param_2[5];
   param_1[4] = 0;
   param_1[5] = uVar2;
   param_1[6] = param_2[6];
   param_1[7] = param_2[7];
   uVar2 = param_2[4];
   param_1[10] = uVar1;
   param_1[0xb] = uVar3;
   param_1[0xc] = uVar2;
   uVar1 = param_2[9];
   param_1[8] = param_2[8];
   param_1[9] = uVar1;
   return;
}
