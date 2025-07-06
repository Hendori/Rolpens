void lh_CONF_VALUE_hash_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2082 = 0; i_2082 < 2; i_2082++) {
      /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_CONF_VALUE_comp_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2083 = 0; i_2083 < 2; i_2083++) {
      /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_CONF_VALUE_doall_thunk(undefined8 param_1, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2084 = 0; i_2084 < 2; i_2084++) {
      /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_CONF_VALUE_doall_arg_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2085 = 0; i_2085 < 2; i_2085++) {
      /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}void lh_CONF_VALUE_doall_LH_CONF_VALUE_thunk(undefined8 param_1, undefined8 param_2, code *UNRECOVERED_JUMPTABLE) {
   for (int i_2086 = 0; i_2086 < 2; i_2086++) {
      /* WARNING: Could not recover jumptable at 0x00100044. Too many branches */
   }
   ( *UNRECOVERED_JUMPTABLE )();
   return;
}int conf_value_cmp(undefined8 *param_1, undefined8 *param_2) {
   char *__s2;
   int iVar1;
   if (( (char*)*param_1 != (char*)*param_2 ) && ( iVar1 = iVar1 != 0 )) {
      return iVar1;
   }
   __s2 = (char*)param_2[1];
   if ((char*)param_1[1] == (char*)0x0) {
      return -(uint)(__s2 != (char *)0x0);
   }
   if (__s2 == (char*)0x0) {
      return 1;
   }
   iVar1 = strcmp((char*)param_1[1], __s2);
   return iVar1;
}ulong conf_value_hash(undefined8 *param_1) {
   long lVar1;
   ulong uVar2;
   lVar1 = OPENSSL_LH_strhash(*param_1);
   uVar2 = OPENSSL_LH_strhash(param_1[1]);
   return lVar1 * 4 ^ uVar2;
}void value_free_hash(long param_1, undefined8 param_2) {
   if (*(long*)( param_1 + 8 ) != 0) {
      OPENSSL_LH_delete(param_2, param_1);
      return;
   }
   return;
}void value_free_stack_doall(undefined8 *param_1) {
   undefined8 uVar1;
   int iVar2;
   void *ptr;
   bool bVar3;
   if (param_1[1] != 0) {
      return;
   }
   uVar1 = param_1[2];
   iVar2 = OPENSSL_sk_num(uVar1);
   iVar2 = iVar2 + -1;
   if (-1 < iVar2) {
      do {
         ptr = (void*)OPENSSL_sk_value(uVar1, iVar2);
         CRYPTO_free(*(void**)( (long)ptr + 0x10 ));
         CRYPTO_free(*(void**)( (long)ptr + 8 ));
         CRYPTO_free(ptr);
         bVar3 = iVar2 != 0;
         iVar2 = iVar2 + -1;
      } while ( bVar3 );
   }
   OPENSSL_sk_free(uVar1);
   CRYPTO_free((void*)*param_1);
   CRYPTO_free(param_1);
   return;
}
