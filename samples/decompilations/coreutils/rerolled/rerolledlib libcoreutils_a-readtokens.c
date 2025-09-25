/* WARNING: Unknown calling convention */void init_tokenbuffer(token_buffer *tokenbuffer) {
   tokenbuffer.size = 0;
   tokenbuffer.buffer = (char*)0x0;
   return;
}
/* WARNING: Unknown calling convention */size_t readtoken(FILE *stream, char *delim, size_t n_delim, token_buffer *tokenbuffer) {
   ulong *puVar1;
   byte bVar2;
   long lVar3;
   uint uVar4;
   byte *pbVar5;
   char *pcVar6;
   size_t sVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   idx_t n;
   word isdelim[4];
   pbVar5 = (byte*)( delim + n_delim );
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 4; i++) {
      isdelim[i] = 0;
   }

   if (n_delim == 0) goto LAB_001000bd;
   do {
      bVar2 = *delim;
      delim = (char*)( (byte*)delim + 1 );
      puVar1 = (ulong*)( (long)isdelim + ( ulong )(bVar2 >> 3 & 0x18) );
      *puVar1 = *puVar1 | 1L << ( bVar2 & 0x3f );
   }
 while ( (byte*)delim != pbVar5 );
   pbVar5 = (byte*)stream._IO_read_ptr;
   if (stream._IO_read_end <= pbVar5) goto LAB_001000c7;
   LAB_001000a0:stream._IO_read_ptr = (char*)( pbVar5 + 1 );
   uVar8 = ( ulong ) * pbVar5;
   do {
      if (( isdelim[(ulong)(long)(int)uVar8 >> 6] >> ( uVar8 & 0x3f ) & 1 ) == 0) {
         n = tokenbuffer.size;
         pcVar6 = tokenbuffer.buffer;
         sVar7 = 0;
         while (true) {
            if (sVar7 == n) {
               pcVar6 = (char*)xpalloc(pcVar6, &n, 1, 0xffffffffffffffff, 1);
            }

            if (( (int)uVar8 < 0 ) || ( ( isdelim[(ulong)(long)(int)uVar8 >> 6] >> ( uVar8 & 0x3f ) & 1 ) != 0 )) break;
            pcVar6[sVar7] = (char)uVar8;
            sVar7 = sVar7 + 1;
            pbVar5 = (byte*)stream._IO_read_ptr;
            if (pbVar5 < stream._IO_read_end) {
               stream._IO_read_ptr = (char*)( pbVar5 + 1 );
               uVar8 = ( ulong ) * pbVar5;
            }
 else {
               uVar4 = __uflow((_IO_FILE*)stream);
               uVar8 = (ulong)uVar4;
            }

         }
;
         pcVar6[sVar7] = '\0';
         tokenbuffer.buffer = pcVar6;
         tokenbuffer.size = n;
         LAB_00100180:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return sVar7;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      LAB_001000bd:pbVar5 = (byte*)stream._IO_read_ptr;
      if (pbVar5 < stream._IO_read_end) goto LAB_001000a0;
      LAB_001000c7:uVar4 = __uflow((_IO_FILE*)stream);
      uVar8 = (ulong)uVar4;
      if ((int)uVar4 < 0) {
         sVar7 = 0xffffffffffffffff;
         goto LAB_00100180;
      }

   }
 while ( true );
}
/* WARNING: Unknown calling convention */size_t readtokens(FILE *stream, size_t projected_n_tokens, char *delim, size_t n_delim, char ***tokens_out, size_t **token_lengths) {
   long lVar1;
   size_t *psVar2;
   char **ppcVar3;
   long lVar4;
   char **ppcVar5;
   size_t *__ptr;
   undefined8 uVar6;
   char *pcVar7;
   size_t sVar8;
   size_t sVar9;
   long in_FS_OFFSET;
   idx_t sz;
   token_buffer tb;
   lVar4 = *(long*)( in_FS_OFFSET + 0x28 );
   if (projected_n_tokens == 0) {
      sz = 0x40;
   }
 else {
      sz = projected_n_tokens + 1;
   }

   sVar9 = 0;
   ppcVar5 = (char**)xnmalloc(sz, 8);
   __ptr = (size_t*)xnmalloc(sz, 8);
   tb.size = 0;
   tb.buffer = (char*)0x0;
   while (true) {
      sVar8 = readtoken(stream, delim, n_delim, &tb);
      if (sz <= (long)sVar9) {
         ppcVar5 = (char**)xpalloc(ppcVar5, &sz, 1, 0xffffffffffffffff, 8);
         __ptr = (size_t*)xreallocarray(__ptr, sz, 8);
      }

      pcVar7 = tb.buffer;
      psVar2 = __ptr + sVar9;
      ppcVar3 = ppcVar5 + sVar9;
      if (sVar8 == 0xffffffffffffffff) break;
      lVar1 = sVar8 + 1;
      sVar9 = sVar9 + 1;
      uVar6 = xnmalloc(lVar1, 1);
      *psVar2 = sVar8;
      pcVar7 = (char*)__memcpy_chk(uVar6, pcVar7, lVar1, lVar1);
      *ppcVar3 = pcVar7;
   }
;
   *ppcVar3 = (char*)0x0;
   *psVar2 = 0;
   free(tb.buffer);
   *tokens_out = ppcVar5;
   if (token_lengths == (size_t**)0x0) {
      free(__ptr);
   }
 else {
      *token_lengths = __ptr;
   }

   if (lVar4 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return sVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

