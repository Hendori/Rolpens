
/* (anonymous namespace)::direct_run(bool, void* const*, unsigned char const*, int*,
   graphite2::Slot**&, unsigned char, graphite2::vm::Machine::status_t&, graphite2::SlotMap*) */

undefined *
(anonymous_namespace)::direct_run
          (bool param_1,void **param_2,uchar *param_3,int *param_4,Slot ***param_5,uchar param_6,
          status_t *param_7,SlotMap *param_8)

{
  undefined *puVar1;
  
  if (!param_1) {
                    /* WARNING: Could not recover jumptable at 0x00100060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(*(code *)*param_2)();
    return puVar1;
  }
  return &direct_run(bool,void_const**,unsigned_char_const*,int*,graphite2::Slot*&*,unsigned_char,graphite2::vm::Machine::status_t&,graphite2::SlotMap*)
          ::opcode_table;
}



/* graphite2::vm::Machine::getOpcodeTable() */

void graphite2::vm::Machine::getOpcodeTable(void)

{
  long in_FS_OFFSET;
  status_t local_1c [4];
  Slot **local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (anonymous_namespace)::direct_run
            (true,(void **)0x0,(uchar *)0x0,(int *)0x0,&local_18,'\0',local_1c,(SlotMap *)0x0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::direct_run(bool, void* const*, unsigned char const*, int*,
   graphite2::Slot**&, unsigned char, graphite2::vm::Machine::status_t&, graphite2::SlotMap*) [clone
   .cold] */

void (anonymous_namespace)::direct_run
               (bool param_1,void **param_2,uchar *param_3,int *param_4,Slot ***param_5,
               uchar param_6,status_t *param_7,SlotMap *param_8)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* graphite2::vm::Machine::run(void* const*, unsigned char const*, graphite2::Slot**&) */

undefined4 __thiscall
graphite2::vm::Machine::run(Machine *this,void **param_1,uchar *param_2,Slot ***param_3)

{
  Machine *pMVar1;
  undefined4 uVar2;
  
  pMVar1 = (Machine *)
           (anonymous_namespace)::direct_run
                     (false,param_1,param_2,(int *)(this + 8),param_3,
                      (uchar)(*(SlotMap **)this)[0x224],(status_t *)(this + 0x1018),
                      *(SlotMap **)this);
  uVar2 = 0;
  if (pMVar1 == this + 0x14) {
    uVar2 = *(undefined4 *)pMVar1;
    pMVar1 = this + 0x10;
  }
  if (*(int *)(this + 0x1018) == 0) {
    if (pMVar1 < this + 0x10) {
      *(undefined4 *)(this + 0x1018) = 1;
    }
    else {
      if (this + 0x1010 <= pMVar1) {
        *(undefined4 *)(this + 0x1018) = 3;
        return uVar2;
      }
      if (pMVar1 != this + 0x10) {
        *(undefined4 *)(this + 0x1018) = 2;
        return uVar2;
      }
    }
  }
  return uVar2;
}


