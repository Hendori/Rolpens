/* CommandQueueMT::CommandQueueMT() */void CommandQueueMT::CommandQueueMT(CommandQueueMT *this) {
   code *pcVar1;
   long lVar2;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 32 ) ) = 0;
   }

   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   std::condition_variable::condition_variable((condition_variable*)( this + 0x38 ));
   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined4*)( this + 0x70 ) = 0;
   *(undefined8*)( this + 0x78 ) = 0xffffffffffffffff;
   *(undefined8*)( this + 0x80 ) = 0;
   if (*(uint*)( this + 0x2c ) < 0x10000) {
      *(undefined4*)( this + 0x2c ) = 0x10000;
      lVar2 = Memory::realloc_static(*(void**)( this + 0x30 ), 0x10000, false);
      *(long*)( this + 0x30 ) = lVar2;
      if (lVar2 == 0) {
         _err_print_error("reserve", "./core/templates/local_vector.h", 0x92, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

   }

   return;
}
/* CommandQueueMT::~CommandQueueMT() */void CommandQueueMT::~CommandQueueMT(CommandQueueMT *this) {
   std::condition_variable::~condition_variable((condition_variable*)( this + 0x38 ));
   if (*(void**)( this + 0x30 ) != (void*)0x0) {
      if (*(int*)( this + 0x28 ) != 0) {
         *(undefined4*)( this + 0x28 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x30 ), false);
      return;
   }

   return;
}

