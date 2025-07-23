/* WARNING: Unknown calling convention */void save_token(Tokens *t) {
   undefined1 *puVar1;
   char **ppcVar2;
   char *pcVar3;
   char *pcVar4;
   _obstack_chunk *p_Var5;
   char *pcVar6;
   char *pcVar7;
   long *plVar8;
   pcVar3 = (t->o_data).next_free;
   pcVar4 = (t->o_data).object_base;
   if (pcVar3 == pcVar4) {
      puVar1 = &(t->o_data).field_0x50;
      *puVar1 = *puVar1 | 2;
   }

   p_Var5 = (t->o_data).chunk;
   pcVar6 = (t->o_data).chunk_limit;
   pcVar7 = pcVar3 + ( -(long)pcVar3 & (t->o_data).alignment_mask );
   if (( ulong )((long)pcVar6 - (long)p_Var5) < ( ulong )((long)( pcVar3 + ( -(long)pcVar3 & (t->o_data).alignment_mask ) ) - (long)p_Var5)) {
      pcVar7 = pcVar6;
   }

   plVar8 = (long*)(t->o_tok).next_free;
   pcVar6 = (t->o_tok).chunk_limit;
   (t->o_data).object_base = pcVar7;
   (t->o_data).next_free = pcVar7;
   if (( ulong )((long)pcVar6 - (long)plVar8) < 8) {
      rpl_obstack_newchunk(&t->o_tok, 8);
      plVar8 = (long*)(t->o_tok).next_free;
   }

   *plVar8 = (long)pcVar4;
   plVar8 = (long*)(t->o_tok_len).next_free;
   pcVar6 = (t->o_tok_len).chunk_limit;
   ppcVar2 = &(t->o_tok).next_free;
   *ppcVar2 = *ppcVar2 + 8;
   if (( ulong )((long)pcVar6 - (long)plVar8) < 8) {
      rpl_obstack_newchunk(&t->o_tok_len, 8);
      plVar8 = (long*)(t->o_tok_len).next_free;
   }

   *plVar8 = (long)( pcVar3 + ( -1 - (long)pcVar4 ) );
   ppcVar2 = &(t->o_tok_len).next_free;
   *ppcVar2 = *ppcVar2 + 8;
   t->n_tok = t->n_tok + 1;
   return;
}
/* WARNING: Unknown calling convention */void readtokens0_init(Tokens *t) {
   t->n_tok = 0;
   t->tok = (char**)0x0;
   t->tok_len = (size_t*)0x0;
   rpl_obstack_begin(&t->o_data, 0, 0, &malloc, &free);
   rpl_obstack_begin(&t->o_tok, 0, 0, &malloc, &free);
   rpl_obstack_begin(&t->o_tok_len, 0, 0, &malloc, &free);
   return;
}
/* WARNING: Unknown calling convention */void readtokens0_free(Tokens *t) {
   rpl_obstack_free(&t->o_data, 0);
   rpl_obstack_free(&t->o_tok, 0);
   rpl_obstack_free(&t->o_tok_len, 0);
   return;
}
/* WARNING: Unknown calling convention */_Bool readtokens0(FILE *in, Tokens *t) {
   undefined1 *puVar1;
   char **ppcVar2;
   _obstack_chunk *p_Var3;
   size_t *psVar4;
   size_t *psVar5;
   int iVar6;
   char *pcVar7;
   char **ppcVar8;
   char *pcVar9;
   LAB_001001be:do {
      iVar6 = fgetc((FILE*)in);
      pcVar7 = (t->o_data).next_free;
      if (iVar6 == -1) {
         if (pcVar7 != (t->o_data).object_base) {
            if (pcVar7 == (t->o_data).chunk_limit) {
               rpl_obstack_newchunk(&t->o_data, 1);
               pcVar7 = (t->o_data).next_free;
            }

            (t->o_data).next_free = pcVar7 + 1;
            *pcVar7 = '\0';
            save_token(t);
         }

         pcVar7 = (t->o_tok).next_free;
         if (( ulong )((long)(t->o_tok).chunk_limit - (long)pcVar7) < 8) {
            rpl_obstack_newchunk(&t->o_tok, 8);
            pcVar7 = (t->o_tok).next_free;
         }

         for (int i = 0; i < 8; i++) {
            pcVar7[i] = '\0';
         }

         ppcVar2 = (char**)(t->o_tok).object_base;
         ppcVar8 = (char**)( (t->o_tok).next_free + 8 );
         if (ppcVar8 == ppcVar2) {
            puVar1 = &(t->o_tok).field_0x50;
            *puVar1 = *puVar1 | 2;
         }

         p_Var3 = (t->o_tok).chunk;
         t->tok = ppcVar2;
         psVar4 = (size_t*)(t->o_tok_len).object_base;
         pcVar9 = (char*)( (long)ppcVar8 + ( -(long)ppcVar8 & (t->o_tok).alignment_mask ) );
         pcVar7 = (t->o_tok).chunk_limit;
         if (( ulong )((long)pcVar7 - (long)p_Var3) < ( ulong )((long)pcVar9 - (long)p_Var3)) {
            pcVar9 = pcVar7;
         }

         psVar5 = (size_t*)(t->o_tok_len).next_free;
         (t->o_tok).object_base = pcVar9;
         (t->o_tok).next_free = pcVar9;
         if (psVar5 == psVar4) {
            puVar1 = &(t->o_tok_len).field_0x50;
            *puVar1 = *puVar1 | 2;
         }

         p_Var3 = (t->o_tok_len).chunk;
         t->tok_len = psVar4;
         pcVar9 = (char*)( (long)psVar5 + ( -(long)psVar5 & (t->o_tok_len).alignment_mask ) );
         pcVar7 = (t->o_tok_len).chunk_limit;
         if (( ulong )((long)pcVar7 - (long)p_Var3) < ( ulong )((long)pcVar9 - (long)p_Var3)) {
            pcVar9 = pcVar7;
         }

         (t->o_tok_len).object_base = pcVar9;
         (t->o_tok_len).next_free = pcVar9;
         iVar6 = ferror((FILE*)in);
         return iVar6 == 0;
      }

      if ((t->o_data).chunk_limit != pcVar7) goto LAB_001001b0;
      rpl_obstack_newchunk(&t->o_data, 1);
      pcVar7 = (t->o_data).next_free;
      (t->o_data).next_free = pcVar7 + 1;
      *pcVar7 = (char)iVar6;
   }
 while ( iVar6 != 0 );
   goto LAB_00100200;
   LAB_001001b0:(t->o_data).next_free = pcVar7 + 1;
   *pcVar7 = (char)iVar6;
   if (iVar6 == 0) {
      LAB_00100200:save_token(t);
   }

   goto LAB_001001be;
}

