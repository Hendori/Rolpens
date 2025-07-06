/* hb_indic_get_categories(unsigned int) */undefined8 hb_indic_get_categories(uint param_1) {
   undefined8 uVar1;
   undefined8 in_RSI;
   if (param_1 < 0x12000) {
      for (int i_945 = 0; i_945 < 2; i_945++) {
         /* WARNING: Could not recover jumptable at 0x0010001f. Too many branches */
      }
      uVar1 = ( *(code*)( &DAT_00100340 + *(int*)( &DAT_00100340 + ( ulong )(param_1 >> 0xc) * 4 ) ) )(param_1, in_RSI, &DAT_00100340 + *(int*)( &DAT_00100340 + ( ulong )(param_1 >> 0xc) * 4 ));
      return uVar1;
   }
   return 0xe00;
}
