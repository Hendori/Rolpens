
/* WARNING: Unknown calling convention */

void i_ring_init(I_ring *ir,int default_val)

{
  ir->ir_empty = true;
  ir->ir_front = 0;
  ir->ir_back = 0;
  ir->ir_default_val = default_val;
  ir->ir_data[0] = default_val;
  ir->ir_data[1] = default_val;
  ir->ir_data[2] = default_val;
  ir->ir_data[3] = default_val;
  return;
}



/* WARNING: Unknown calling convention */

_Bool i_ring_empty(I_ring *ir)

{
  return ir->ir_empty;
}



/* WARNING: Unknown calling convention */

int i_ring_push(I_ring *ir,int val)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(ir->ir_empty ^ 1);
  uVar3 = ir->ir_front + uVar2 & 3;
  iVar1 = ir->ir_data[uVar3];
  ir->ir_data[uVar3] = val;
  ir->ir_front = uVar3;
  if (ir->ir_back == uVar3) {
    ir->ir_back = uVar2 + ir->ir_back & 3;
  }
  ir->ir_empty = false;
  return iVar1;
}



/* WARNING: Unknown calling convention */

int i_ring_pop(I_ring *ir)

{
  uint uVar1;
  int iVar2;
  
  if (ir->ir_empty != false) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = ir->ir_front;
  iVar2 = ir->ir_data[uVar1];
  ir->ir_data[uVar1] = ir->ir_default_val;
  if (uVar1 != ir->ir_back) {
    ir->ir_front = uVar1 + 3 & 3;
    return iVar2;
  }
  ir->ir_empty = true;
  return iVar2;
}



void i_ring_pop_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


