
void gr_engine_version(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 3;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0xe;
  }
  return;
}



void gr_font_destroy(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010003c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



Font * gr_make_font_with_ops(float param_1,void *param_2,gr_font_ops *param_3,Face *param_4)

{
  Font *this;
  
  if ((param_4 != (Face *)0x0) && (0.0 < param_1)) {
    this = (Font *)malloc(0x40);
    graphite2::Font::Font(this,param_1,param_4,param_2,param_3);
    if (*(long *)(this + 0x28) != 0) {
      return this;
    }
    graphite2::Font::~Font(this);
  }
  return (Font *)0x0;
}



Font * gr_make_font_with_advance_fn(float param_1,void *param_2,undefined8 param_3,Face *param_4)

{
  Font *this;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_48 = 0x18;
  local_40 = param_3;
  if ((param_4 != (Face *)0x0) && (0.0 < param_1)) {
    this = (Font *)malloc(0x40);
    graphite2::Font::Font(this,param_1,param_4,param_2,(gr_font_ops *)&local_48);
    if (*(long *)(this + 0x28) != 0) goto LAB_0010015f;
    graphite2::Font::~Font(this);
  }
  this = (Font *)0x0;
LAB_0010015f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



Font * gr_make_font(float param_1,Face *param_2)

{
  Font *this;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_38 = 0x18;
  local_30 = 0;
  if ((param_2 != (Face *)0x0) && (0.0 < param_1)) {
    this = (Font *)malloc(0x40);
    graphite2::Font::Font(this,param_1,param_2,(void *)0x0,(gr_font_ops *)&local_38);
    if (*(long *)(this + 0x28) != 0) goto LAB_0010021d;
    graphite2::Font::~Font(this);
  }
  this = (Font *)0x0;
LAB_0010021d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


