
/* FastNoiseLite::get_noise_type() const */

undefined4 __thiscall FastNoiseLite::get_noise_type(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x2dc);
}



/* FastNoiseLite::get_seed() const */

undefined4 __thiscall FastNoiseLite::get_seed(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x2e0);
}



/* FastNoiseLite::get_frequency() const */

undefined4 __thiscall FastNoiseLite::get_frequency(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x2e4);
}



/* FastNoiseLite::get_offset() const */

undefined1  [16] __thiscall FastNoiseLite::get_offset(FastNoiseLite *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x2d0);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FastNoiseLite::get_fractal_type() const */

undefined4 __thiscall FastNoiseLite::get_fractal_type(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x2e8);
}



/* FastNoiseLite::get_fractal_octaves() const */

undefined4 __thiscall FastNoiseLite::get_fractal_octaves(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x2ec);
}



/* FastNoiseLite::get_fractal_lacunarity() const */

undefined4 __thiscall FastNoiseLite::get_fractal_lacunarity(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x2f0);
}



/* FastNoiseLite::get_fractal_gain() const */

undefined4 __thiscall FastNoiseLite::get_fractal_gain(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x2f4);
}



/* FastNoiseLite::get_fractal_weighted_strength() const */

undefined4 __thiscall FastNoiseLite::get_fractal_weighted_strength(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x2f8);
}



/* FastNoiseLite::get_fractal_ping_pong_strength() const */

undefined4 __thiscall FastNoiseLite::get_fractal_ping_pong_strength(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x2fc);
}



/* FastNoiseLite::get_cellular_distance_function() const */

undefined4 __thiscall FastNoiseLite::get_cellular_distance_function(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x300);
}



/* FastNoiseLite::get_cellular_jitter() const */

undefined4 __thiscall FastNoiseLite::get_cellular_jitter(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x308);
}



/* FastNoiseLite::get_cellular_return_type() const */

undefined4 __thiscall FastNoiseLite::get_cellular_return_type(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x304);
}



/* FastNoiseLite::is_domain_warp_enabled() const */

FastNoiseLite __thiscall FastNoiseLite::is_domain_warp_enabled(FastNoiseLite *this)

{
  return this[0x30c];
}



/* FastNoiseLite::get_domain_warp_type() const */

undefined4 __thiscall FastNoiseLite::get_domain_warp_type(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x310);
}



/* FastNoiseLite::get_domain_warp_amplitude() const */

undefined4 __thiscall FastNoiseLite::get_domain_warp_amplitude(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x314);
}



/* FastNoiseLite::get_domain_warp_frequency() const */

undefined4 __thiscall FastNoiseLite::get_domain_warp_frequency(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x318);
}



/* FastNoiseLite::get_domain_warp_fractal_type() const */

undefined4 __thiscall FastNoiseLite::get_domain_warp_fractal_type(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x31c);
}



/* FastNoiseLite::get_domain_warp_fractal_octaves() const */

undefined4 __thiscall FastNoiseLite::get_domain_warp_fractal_octaves(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 800);
}



/* FastNoiseLite::get_domain_warp_fractal_lacunarity() const */

undefined4 __thiscall FastNoiseLite::get_domain_warp_fractal_lacunarity(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x324);
}



/* FastNoiseLite::get_domain_warp_fractal_gain() const */

undefined4 __thiscall FastNoiseLite::get_domain_warp_fractal_gain(FastNoiseLite *this)

{
  return *(undefined4 *)(this + 0x328);
}



/* FastNoiseLite::~FastNoiseLite() */

void __thiscall FastNoiseLite::~FastNoiseLite(FastNoiseLite *this)

{
  *(code **)this = operator_delete;
  Resource::~Resource((Resource *)this);
  return;
}



/* FastNoiseLite::~FastNoiseLite() */

void __thiscall FastNoiseLite::~FastNoiseLite(FastNoiseLite *this)

{
  *(code **)this = operator_delete;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x330);
  return;
}



/* FastNoiseLite::set_offset(Vector3) */

void FastNoiseLite::set_offset(undefined8 param_1,undefined4 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x2d0) = param_1;
  *(undefined4 *)(param_3 + 0x2d8) = param_2;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::_changed() */

void FastNoiseLite::_changed(void)

{
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_seed(int) */

void __thiscall FastNoiseLite::set_seed(FastNoiseLite *this,int param_1)

{
  *(int *)(this + 0x2e0) = param_1;
  *(int *)(this + 0x240) = param_1;
  *(int *)(this + 0x288) = param_1;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_frequency(float) */

void __thiscall FastNoiseLite::set_frequency(FastNoiseLite *this,float param_1)

{
  *(float *)(this + 0x2e4) = param_1;
  *(float *)(this + 0x244) = param_1;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_domain_warp_frequency(float) */

void __thiscall FastNoiseLite::set_domain_warp_frequency(FastNoiseLite *this,float param_1)

{
  *(float *)(this + 0x318) = param_1;
  *(float *)(this + 0x28c) = param_1;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_fractal_lacunarity(float) */

void __thiscall FastNoiseLite::set_fractal_lacunarity(FastNoiseLite *this,float param_1)

{
  *(float *)(this + 0x2f0) = param_1;
  *(float *)(this + 0x25c) = param_1;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_domain_warp_fractal_lacunarity(float) */

void __thiscall FastNoiseLite::set_domain_warp_fractal_lacunarity(FastNoiseLite *this,float param_1)

{
  *(float *)(this + 0x324) = param_1;
  *(float *)(this + 0x2a4) = param_1;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_fractal_weighted_strength(float) */

void __thiscall FastNoiseLite::set_fractal_weighted_strength(FastNoiseLite *this,float param_1)

{
  *(float *)(this + 0x2f8) = param_1;
  *(float *)(this + 0x264) = param_1;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_fractal_ping_pong_strength(float) */

void __thiscall FastNoiseLite::set_fractal_ping_pong_strength(FastNoiseLite *this,float param_1)

{
  *(float *)(this + 0x2fc) = param_1;
  *(float *)(this + 0x268) = param_1;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_cellular_distance_function(FastNoiseLite::CellularDistanceFunction) */

void __thiscall
FastNoiseLite::set_cellular_distance_function(FastNoiseLite *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x300) = param_2;
  *(undefined4 *)(this + 0x270) = param_2;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_cellular_return_type(FastNoiseLite::CellularReturnType) */

void __thiscall FastNoiseLite::set_cellular_return_type(FastNoiseLite *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x304) = param_2;
  *(undefined4 *)(this + 0x274) = param_2;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_cellular_jitter(float) */

void __thiscall FastNoiseLite::set_cellular_jitter(FastNoiseLite *this,float param_1)

{
  *(float *)(this + 0x308) = param_1;
  *(float *)(this + 0x278) = param_1;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_domain_warp_amplitude(float) */

void __thiscall FastNoiseLite::set_domain_warp_amplitude(FastNoiseLite *this,float param_1)

{
  *(float *)(this + 0x314) = param_1;
  *(float *)(this + 0x2cc) = param_1;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_domain_warp_fractal_type(FastNoiseLite::DomainWarpFractalType) */

void __thiscall FastNoiseLite::set_domain_warp_fractal_type(FastNoiseLite *this,int param_2)

{
  int iVar1;
  
  *(int *)(this + 0x31c) = param_2;
  iVar1 = 4;
  if (param_2 != 1) {
    iVar1 = (uint)(param_2 == 2) * 5;
  }
  *(int *)(this + 0x29c) = iVar1;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_fractal_type(FastNoiseLite::FractalType) */

void __thiscall FastNoiseLite::set_fractal_type(FastNoiseLite *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x2e8) = param_2;
  *(undefined4 *)(this + 0x254) = param_2;
  Resource::emit_changed();
  Object::notify_property_list_changed();
  return;
}



/* FastNoiseLite::set_domain_warp_enabled(bool) */

void __thiscall FastNoiseLite::set_domain_warp_enabled(FastNoiseLite *this,bool param_1)

{
  if (this[0x30c] == (FastNoiseLite)param_1) {
    return;
  }
  this[0x30c] = (FastNoiseLite)param_1;
  Resource::emit_changed();
  Object::notify_property_list_changed();
  return;
}



/* FastNoiseLite::set_domain_warp_type(FastNoiseLite::DomainWarpType) */

void __thiscall FastNoiseLite::set_domain_warp_type(FastNoiseLite *this,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x294);
  *(uint *)(this + 0x310) = param_2;
  *(uint *)(this + 0x2c4) = param_2;
  if ((uVar1 != 1) && (uVar1 != 2)) {
    uVar1 = -(uint)(param_2 < 2) & 3;
  }
  *(uint *)(this + 0x2c8) = uVar1;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_noise_type(FastNoiseLite::NoiseType) */

void __thiscall FastNoiseLite::set_noise_type(FastNoiseLite *this,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x24c);
  *(uint *)(this + 0x2dc) = param_2;
  *(uint *)(this + 0x248) = param_2;
  if ((uVar1 != 1) && (uVar1 != 2)) {
    uVar1 = -(uint)(param_2 < 2) & 3;
  }
  *(uint *)(this + 0x250) = uVar1;
  Resource::emit_changed();
  Object::notify_property_list_changed();
  return;
}



/* FastNoiseLite::set_fractal_octaves(int) */

void __thiscall FastNoiseLite::set_fractal_octaves(FastNoiseLite *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x260);
  *(int *)(this + 0x2ec) = param_1;
  *(int *)(this + 600) = param_1;
  if (fVar4 < 0.0) {
    fVar4 = (float)((uint)fVar4 ^ _LC7);
  }
  if (1 < param_1) {
    iVar1 = 1;
    fVar3 = _LC8;
    fVar2 = fVar4;
    do {
      iVar1 = iVar1 + 1;
      fVar3 = fVar3 + fVar2;
      fVar2 = fVar2 * fVar4;
    } while (param_1 != iVar1);
    *(float *)(this + 0x26c) = _LC8 / fVar3;
    Resource::emit_changed();
    return;
  }
  *(float *)(this + 0x26c) = _LC8;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_domain_warp_fractal_gain(float) */

void __thiscall FastNoiseLite::set_domain_warp_fractal_gain(FastNoiseLite *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  *(float *)(this + 0x328) = param_1;
  *(float *)(this + 0x2a8) = param_1;
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ _LC7);
  }
  if (1 < *(int *)(this + 0x2a0)) {
    iVar1 = 1;
    fVar3 = _LC8;
    fVar2 = param_1;
    do {
      iVar1 = iVar1 + 1;
      fVar3 = fVar3 + fVar2;
      fVar2 = fVar2 * param_1;
    } while (*(int *)(this + 0x2a0) != iVar1);
    *(float *)(this + 0x2b4) = _LC8 / fVar3;
    Resource::emit_changed();
    return;
  }
  *(float *)(this + 0x2b4) = _LC8;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_domain_warp_fractal_octaves(int) */

void __thiscall FastNoiseLite::set_domain_warp_fractal_octaves(FastNoiseLite *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x2a8);
  *(int *)(this + 800) = param_1;
  *(int *)(this + 0x2a0) = param_1;
  if (fVar4 < 0.0) {
    fVar4 = (float)((uint)fVar4 ^ _LC7);
  }
  if (1 < param_1) {
    iVar1 = 1;
    fVar3 = _LC8;
    fVar2 = fVar4;
    do {
      iVar1 = iVar1 + 1;
      fVar3 = fVar3 + fVar2;
      fVar2 = fVar2 * fVar4;
    } while (param_1 != iVar1);
    *(float *)(this + 0x2b4) = _LC8 / fVar3;
    Resource::emit_changed();
    return;
  }
  *(float *)(this + 0x2b4) = _LC8;
  Resource::emit_changed();
  return;
}



/* FastNoiseLite::set_fractal_gain(float) */

void __thiscall FastNoiseLite::set_fractal_gain(FastNoiseLite *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  *(float *)(this + 0x2f4) = param_1;
  *(float *)(this + 0x260) = param_1;
  if (param_1 < 0.0) {
    param_1 = (float)((uint)param_1 ^ _LC7);
  }
  if (1 < *(int *)(this + 600)) {
    iVar1 = 1;
    fVar3 = _LC8;
    fVar2 = param_1;
    do {
      iVar1 = iVar1 + 1;
      fVar3 = fVar3 + fVar2;
      fVar2 = fVar2 * param_1;
    } while (*(int *)(this + 600) != iVar1);
    *(float *)(this + 0x26c) = _LC8 / fVar3;
    Resource::emit_changed();
    return;
  }
  *(float *)(this + 0x26c) = _LC8;
  Resource::emit_changed();
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* FastNoiseLite::_convert_domain_warp_fractal_type_enum(FastNoiseLite::DomainWarpFractalType) */

char __thiscall
FastNoiseLite::_convert_domain_warp_fractal_type_enum(undefined8 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = '\x04';
  if (param_2 != 1) {
    cVar1 = (param_2 == 2) * '\x05';
  }
  return cVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FastNoiseLite::FastNoiseLite() */

void __thiscall FastNoiseLite::FastNoiseLite(FastNoiseLite *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  Resource::Resource((Resource *)this);
  uVar2 = _UNK_00122448;
  uVar1 = __LC36;
  *(undefined ***)this = &PTR__initialize_classv_00121940;
  *(undefined8 *)(this + 0x310) = 0x41f0000000000000;
  *(undefined8 *)(this + 0x248) = uVar1;
  *(undefined8 *)(this + 0x250) = uVar2;
  uVar2 = _UNK_00122458;
  uVar1 = __LC38;
  *(undefined8 *)(this + 0x318) = 0x13d4ccccd;
  *(undefined8 *)(this + 600) = 0x4000000000000005;
  uVar3 = _LC37;
  *(undefined8 *)(this + 0x268) = 0x3f04210840000000;
  *(undefined8 *)(this + 0x2b0) = 0x3f04210840000000;
  uVar4 = _LC39;
  *(undefined8 *)(this + 0x290) = uVar1;
  *(undefined8 *)(this + 0x298) = uVar2;
  uVar2 = _UNK_00122468;
  uVar1 = __LC40;
  *(undefined8 *)(this + 800) = 0x40c0000000000005;
  *(undefined8 *)(this + 0x240) = 0x3c23d70a00000000;
  *(undefined8 *)(this + 0x280) = 0x3f80000000000003;
  *(undefined8 *)(this + 0x2a0) = 0x40c0000000000005;
  *(undefined8 *)(this + 0x2e0) = 0x3c23d70a00000000;
  *(undefined4 *)(this + 0x328) = 0x3f000000;
  *(undefined8 *)(this + 0x260) = 0x3f000000;
  *(undefined8 *)(this + 0x270) = uVar3;
  *(undefined8 *)(this + 0x278) = 0x3f800000;
  *(undefined8 *)(this + 0x288) = 0x3d4ccccd00000000;
  *(undefined8 *)(this + 0x2a8) = 0x3f000000;
  *(undefined8 *)(this + 0x2b8) = uVar4;
  *(undefined8 *)(this + 0x2c0) = 0x3f800000;
  *(undefined8 *)(this + 0x2c8) = 0x41f0000000000003;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 1;
  *(undefined8 *)(this + 0x2e8) = 0x500000001;
  *(undefined8 *)(this + 0x2f0) = uVar1;
  *(undefined8 *)(this + 0x2f8) = uVar2;
  *(undefined8 *)(this + 0x300) = uVar3;
  *(undefined4 *)(this + 0x308) = 0x3f800000;
  this[0x30c] = (FastNoiseLite)0x0;
  return;
}



/* FastNoiseLite::_validate_property(PropertyInfo&) const */

void __thiscall FastNoiseLite::_validate_property(FastNoiseLite *this,PropertyInfo *param_1)

{
  String *this_00;
  char cVar1;
  
  this_00 = (String *)(param_1 + 8);
  cVar1 = String::begins_with((char *)this_00);
  if (((((cVar1 != '\0') && (*(int *)(this + 0x2dc) != 2)) ||
       ((cVar1 = String::operator!=(this_00,"fractal_type"), cVar1 != '\0' &&
        ((cVar1 = String::begins_with((char *)this_00), cVar1 != '\0' &&
         (*(int *)(this + 0x2e8) == 0)))))) ||
      ((cVar1 = String::operator==(this_00,"fractal_ping_pong_strength"), cVar1 != '\0' &&
       (*(int *)(this + 0x2e8) != 3)))) ||
     (((cVar1 = String::operator!=(this_00,"domain_warp_enabled"), cVar1 != '\0' &&
       (cVar1 = String::begins_with((char *)this_00), cVar1 != '\0')) &&
      (this[0x30c] == (FastNoiseLite)0x0)))) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  return;
}



/* FastNoiseLite::get_noise_2d(float, float) const */

void __thiscall FastNoiseLite::get_noise_2d(FastNoiseLite *this,float param_1,float param_2)

{
  float local_10;
  float local_c;
  
  local_c = param_1 + *(float *)(this + 0x2d0);
  local_10 = param_2 + *(float *)(this + 0x2d4);
  if (this[0x30c] != (FastNoiseLite)0x0) {
    fastnoiselite::FastNoiseLite::DomainWarp<float>
              ((FastNoiseLite *)(this + 0x288),&local_c,&local_10);
  }
  fastnoiselite::FastNoiseLite::GetNoise<float>((FastNoiseLite *)(this + 0x240),local_c,local_10);
  return;
}



/* FastNoiseLite::get_noise_2dv(Vector2) const */

void __thiscall FastNoiseLite::get_noise_2dv(undefined8 param_1,FastNoiseLite *this)

{
  long in_FS_OFFSET;
  float fVar1;
  float local_18;
  float local_14;
  long local_10;
  
  fVar1 = (float)((ulong)param_1 >> 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1d8) == get_noise_2d) {
    local_18 = (float)param_1 + *(float *)(this + 0x2d0);
    local_14 = fVar1 + *(float *)(this + 0x2d4);
    if (this[0x30c] != (FastNoiseLite)0x0) {
      fastnoiselite::FastNoiseLite::DomainWarp<float>
                ((FastNoiseLite *)(this + 0x288),&local_18,&local_14);
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      fastnoiselite::FastNoiseLite::GetNoise<float>
                ((FastNoiseLite *)(this + 0x240),local_18,local_14);
      return;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x1d8))((float)param_1,fVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FastNoiseLite::get_noise_1d(float) const */

void __thiscall FastNoiseLite::get_noise_1d(FastNoiseLite *this,float param_1)

{
  code *pcVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  float local_2c;
  float local_28;
  float local_24;
  long local_20;
  
  fVar2 = *(float *)(this + 0x2d0);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = param_1 + fVar2;
  if (this[0x30c] == (FastNoiseLite)0x0) {
    pcVar1 = *(code **)(*(long *)this + 0x1d8);
    if (pcVar1 != get_noise_2d) {
LAB_00100c10:
      (*pcVar1)(this);
      goto LAB_00100b60;
    }
    fVar2 = local_2c + fVar2;
    fVar3 = *(float *)(this + 0x2d4) + 0.0;
  }
  else {
    local_24 = 0.0;
    fastnoiselite::FastNoiseLite::DomainWarp<float>
              ((FastNoiseLite *)(this + 0x288),&local_2c,&local_24);
    pcVar1 = *(code **)(*(long *)this + 0x1d8);
    if (pcVar1 != get_noise_2d) goto LAB_00100c10;
    local_28 = fVar2 + local_2c;
    local_24 = *(float *)(this + 0x2d4) + 0.0;
    fastnoiselite::FastNoiseLite::DomainWarp<float>
              ((FastNoiseLite *)(this + 0x288),&local_28,&local_24);
    fVar2 = local_28;
    fVar3 = local_24;
  }
  fastnoiselite::FastNoiseLite::GetNoise<float>((FastNoiseLite *)(this + 0x240),fVar2,fVar3);
LAB_00100b60:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FastNoiseLite::get_noise_3d(float, float, float) const */

void __thiscall
FastNoiseLite::get_noise_3d(FastNoiseLite *this,float param_1,float param_2,float param_3)

{
  float local_14;
  float local_10;
  float local_c;
  
  local_c = param_1 + *(float *)(this + 0x2d0);
  local_10 = param_2 + *(float *)(this + 0x2d4);
  local_14 = param_3 + *(float *)(this + 0x2d8);
  if (this[0x30c] != (FastNoiseLite)0x0) {
    fastnoiselite::FastNoiseLite::DomainWarp<float>
              ((FastNoiseLite *)(this + 0x288),&local_c,&local_10,&local_14);
  }
  fastnoiselite::FastNoiseLite::GetNoise<float>
            ((FastNoiseLite *)(this + 0x240),local_c,local_10,local_14);
  return;
}



/* FastNoiseLite::get_noise_3dv(Vector3) const */

void FastNoiseLite::get_noise_3dv(undefined8 param_1,float param_2,long *param_3)

{
  long in_FS_OFFSET;
  float local_1c;
  float local_18;
  float local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_3 + 0x1e8) == get_noise_3d) {
    local_1c = (float)param_1 + *(float *)(param_3 + 0x5a);
    local_18 = (float)((ulong)param_1 >> 0x20) + *(float *)((long)param_3 + 0x2d4);
    local_14 = param_2 + *(float *)(param_3 + 0x5b);
    if (*(char *)((long)param_3 + 0x30c) != '\0') {
      fastnoiselite::FastNoiseLite::DomainWarp<float>
                ((FastNoiseLite *)(param_3 + 0x51),&local_1c,&local_18,&local_14);
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      fastnoiselite::FastNoiseLite::GetNoise<float>
                ((FastNoiseLite *)(param_3 + 0x48),local_1c,local_18,local_14);
      return;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x1e8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* ClassDB::bind_method<MethodDefinition, void
   (FastNoiseLite::*)(float)>(MethodDefinition, void (FastNoiseLite::*)(float)) [clone .isra.0] */

MethodBind *
ClassDB::bind_method<MethodDefinition,void(FastNoiseLite::*)(float)>
          (MethodDefinition *param_1,_func_void_float *param_2)

{
  long lVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar2 = create_method_bind<FastNoiseLite,float>(param_2);
  ClassDB::bind_methodfi(1,pMVar2,false,param_1,(Variant **)0x0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (MethodBind *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* ClassDB::bind_method<MethodDefinition, float (FastNoiseLite::*)()
   const>(MethodDefinition, float (FastNoiseLite::*)() const) [clone .isra.0] */

MethodBind *
ClassDB::bind_method<MethodDefinition,float(FastNoiseLite::*)()const>
          (MethodDefinition *param_1,_func_float *param_2)

{
  long lVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar2 = create_method_bind<FastNoiseLite,float>(param_2);
  ClassDB::bind_methodfi(1,pMVar2,false,param_1,(Variant **)0x0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (MethodBind *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FastNoiseLite::_bind_methods() */

void FastNoiseLite::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88;
  CowData<char32_t> local_78 [16];
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_98,"set_noise_type");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::NoiseType>(set_noise_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_noise_type",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::NoiseType>(get_noise_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_seed");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,int>(set_seed);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_seed",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,int>(get_seed);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_frequency");
  ClassDB::bind_method<MethodDefinition,void(FastNoiseLite::*)(float)>
            ((MethodDefinition *)&local_98,set_frequency,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_frequency",0);
  ClassDB::bind_method<MethodDefinition,float(FastNoiseLite::*)()const>
            ((MethodDefinition *)&local_98,get_frequency,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_offset");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,Vector3>(set_offset);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_offset",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,Vector3>(get_offset);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_fractal_type");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::FractalType>(set_fractal_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_fractal_type",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::FractalType>(get_fractal_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_fractal_octaves");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,int>(set_fractal_octaves);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_fractal_octaves",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,int>(get_fractal_octaves);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_60 = 0;
  local_68 = "lacunarity";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_fractal_lacunarity",(uint)&local_58);
  ClassDB::bind_method<MethodDefinition,void(FastNoiseLite::*)(float)>
            ((MethodDefinition *)&local_98,set_fractal_lacunarity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_fractal_lacunarity",0);
  ClassDB::bind_method<MethodDefinition,float(FastNoiseLite::*)()const>
            ((MethodDefinition *)&local_98,get_fractal_lacunarity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_fractal_gain");
  ClassDB::bind_method<MethodDefinition,void(FastNoiseLite::*)(float)>
            ((MethodDefinition *)&local_98,set_fractal_gain,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_fractal_gain",0);
  ClassDB::bind_method<MethodDefinition,float(FastNoiseLite::*)()const>
            ((MethodDefinition *)&local_98,get_fractal_gain,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_fractal_weighted_strength");
  ClassDB::bind_method<MethodDefinition,void(FastNoiseLite::*)(float)>
            ((MethodDefinition *)&local_98,set_fractal_weighted_strength,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_fractal_weighted_strength",0);
  ClassDB::bind_method<MethodDefinition,float(FastNoiseLite::*)()const>
            ((MethodDefinition *)&local_98,get_fractal_weighted_strength,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_fractal_ping_pong_strength");
  ClassDB::bind_method<MethodDefinition,void(FastNoiseLite::*)(float)>
            ((MethodDefinition *)&local_98,set_fractal_ping_pong_strength,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_fractal_ping_pong_strength",0);
  ClassDB::bind_method<MethodDefinition,float(FastNoiseLite::*)()const>
            ((MethodDefinition *)&local_98,get_fractal_ping_pong_strength,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_cellular_distance_function");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::CellularDistanceFunction>
                     (set_cellular_distance_function);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_cellular_distance_function",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::CellularDistanceFunction>
                     (get_cellular_distance_function);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_cellular_jitter");
  ClassDB::bind_method<MethodDefinition,void(FastNoiseLite::*)(float)>
            ((MethodDefinition *)&local_98,set_cellular_jitter,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_cellular_jitter",0);
  ClassDB::bind_method<MethodDefinition,float(FastNoiseLite::*)()const>
            ((MethodDefinition *)&local_98,get_cellular_jitter,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_cellular_return_type");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::CellularReturnType>
                     (set_cellular_return_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_cellular_return_type",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::CellularReturnType>
                     (get_cellular_return_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_domain_warp_enabled");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,bool>(set_domain_warp_enabled);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"is_domain_warp_enabled",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,bool>(is_domain_warp_enabled);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_domain_warp_type");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::DomainWarpType>(set_domain_warp_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_domain_warp_type",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::DomainWarpType>(get_domain_warp_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_domain_warp_amplitude");
  ClassDB::bind_method<MethodDefinition,void(FastNoiseLite::*)(float)>
            ((MethodDefinition *)&local_98,set_domain_warp_amplitude,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_domain_warp_amplitude",0);
  ClassDB::bind_method<MethodDefinition,float(FastNoiseLite::*)()const>
            ((MethodDefinition *)&local_98,get_domain_warp_amplitude,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_domain_warp_frequency");
  ClassDB::bind_method<MethodDefinition,void(FastNoiseLite::*)(float)>
            ((MethodDefinition *)&local_98,set_domain_warp_frequency,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_domain_warp_frequency",0);
  ClassDB::bind_method<MethodDefinition,float(FastNoiseLite::*)()const>
            ((MethodDefinition *)&local_98,get_domain_warp_frequency,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_domain_warp_fractal_type");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::DomainWarpFractalType>
                     (set_domain_warp_fractal_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_domain_warp_fractal_type",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,FastNoiseLite::DomainWarpFractalType>
                     (get_domain_warp_fractal_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_domain_warp_fractal_octaves");
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,int>(set_domain_warp_fractal_octaves);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_domain_warp_fractal_octaves",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite,int>(get_domain_warp_fractal_octaves);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_domain_warp_fractal_lacunarity");
  ClassDB::bind_method<MethodDefinition,void(FastNoiseLite::*)(float)>
            ((MethodDefinition *)&local_98,set_domain_warp_fractal_lacunarity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_domain_warp_fractal_lacunarity",0);
  ClassDB::bind_method<MethodDefinition,float(FastNoiseLite::*)()const>
            ((MethodDefinition *)&local_98,get_domain_warp_fractal_lacunarity,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHOD<char_const*>((char *)&local_98,"set_domain_warp_fractal_gain");
  ClassDB::bind_method<MethodDefinition,void(FastNoiseLite::*)(float)>
            ((MethodDefinition *)&local_98,set_domain_warp_fractal_gain,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_domain_warp_fractal_gain",0);
  ClassDB::bind_method<MethodDefinition,float(FastNoiseLite::*)()const>
            ((MethodDefinition *)&local_98,get_domain_warp_fractal_gain,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"_changed",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<FastNoiseLite>(_changed);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_98 = "Simplex,Simplex Smooth,Cellular,Perlin,Value Cubic,Value";
  local_c8 = 0;
  local_90 = 0x38;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "noise_type";
  local_90 = 10;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,2,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_d8 = 0;
  local_a8 = "FastNoiseLite";
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101e5b;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101e5b;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00101e5b:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "seed";
  local_d0 = 0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101fde;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101fde;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00101fde:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = ".0001,1,.0001,exp";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "frequency";
  local_d0 = 0;
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102164;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102164;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00102164:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "-1000,1000,0.01,or_less,or_greater";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "offset";
  local_d0 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,9,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001022eb;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001022eb;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_001022eb:
  local_a8 = (char *)0x0;
  local_98 = "fractal_";
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_a8);
  local_98 = "Fractal";
  local_b0 = 0;
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = "FastNoiseLite";
  local_b8 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  ClassDB::add_property_group((StringName *)&local_98,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "None,FBM,Ridged,Ping-Pong";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x19;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "fractal_type";
  local_d0 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,2,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010253c;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010253c;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010253c:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "1,10,1";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "fractal_octaves";
  local_d0 = 0;
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001026c3;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001026c3;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_001026c3:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "fractal_lacunarity";
  local_d0 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010283f;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010283f;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010283f:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "fractal_gain";
  local_d0 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001029bb;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001029bb;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_001029bb:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "0,1,0.01";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "fractal_weighted_strength";
  local_d0 = 0;
  local_90 = 0x19;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102b42;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102b42;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00102b42:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "fractal_ping_pong_strength";
  local_d0 = 0;
  local_90 = 0x1a;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102cc0;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102cc0;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00102cc0:
  local_a8 = (char *)0x0;
  local_98 = "cellular_";
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_a8);
  local_98 = "Cellular";
  local_b0 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = "FastNoiseLite";
  local_b8 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  ClassDB::add_property_group((StringName *)&local_98,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Euclidean,Euclidean Squared,Manhattan,Hybrid";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x2c;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "cellular_distance_function";
  local_d0 = 0;
  local_90 = 0x1a;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,2,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102f10;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102f10;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00102f10:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "cellular_jitter";
  local_d0 = 0;
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010308c;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010308c;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010308c:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Cell Value,Distance,Distance2,Distance2Add,Distance2Sub,Distance2Mul,Distance2Div";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x51;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "cellular_return_type";
  local_d0 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,2,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103212;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103212;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103212:
  local_a8 = (char *)0x0;
  local_98 = "domain_warp_";
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_a8);
  local_98 = "Domain Warp";
  local_b0 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = "FastNoiseLite";
  local_b8 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  ClassDB::add_property_group((StringName *)&local_98,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "domain_warp_enabled";
  local_d0 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,1,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103458;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103458;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103458:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Simplex,Simplex Reduced,Basic Grid";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "domain_warp_type";
  local_d0 = 0;
  local_90 = 0x10;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,2,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001035e0;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001035e0;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_001035e0:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "domain_warp_amplitude";
  local_d0 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010375d;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010375d;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010375d:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "domain_warp_frequency";
  local_d0 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001038d9;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001038d9;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_001038d9:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "None,Progressive,Independent";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x1c;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "domain_warp_fractal_type";
  local_d0 = 0;
  local_90 = 0x18;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,2,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103a5f;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103a5f;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103a5f:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "1,10,1";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "domain_warp_fractal_octaves";
  local_d0 = 0;
  local_90 = 0x1b;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103be6;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103be6;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103be6:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "domain_warp_fractal_lacunarity";
  local_d0 = 0;
  local_90 = 0x1e;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103d64;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103d64;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103d64:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "domain_warp_fractal_gain";
  local_d0 = 0;
  local_90 = 0x18;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "FastNoiseLite";
  local_d8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103ee3;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103ee3;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103ee3:
  StringName::StringName((StringName *)&local_a8,"TYPE_VALUE",false);
  local_98 = "TYPE_VALUE";
  local_b8 = 0;
  local_90 = 10;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::NoiseType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::NoiseType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,5,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"TYPE_VALUE_CUBIC",false);
  local_98 = "TYPE_VALUE_CUBIC";
  local_b8 = 0;
  local_90 = 0x10;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::NoiseType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::NoiseType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,4,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"TYPE_PERLIN",false);
  local_98 = "TYPE_PERLIN";
  local_b8 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::NoiseType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::NoiseType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,3,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"TYPE_CELLULAR",false);
  local_98 = "TYPE_CELLULAR";
  local_b8 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::NoiseType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::NoiseType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,2,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"TYPE_SIMPLEX",false);
  local_98 = "TYPE_SIMPLEX";
  local_b8 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::NoiseType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::NoiseType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,0,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"TYPE_SIMPLEX_SMOOTH",false);
  local_98 = "TYPE_SIMPLEX_SMOOTH";
  local_b8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::NoiseType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::NoiseType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,1,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"FRACTAL_NONE",false);
  local_98 = "FRACTAL_NONE";
  local_b8 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::FractalType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::FractalType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,0,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"FRACTAL_FBM",false);
  local_98 = "FRACTAL_FBM";
  local_b8 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::FractalType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::FractalType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,1,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"FRACTAL_RIDGED",false);
  local_98 = "FRACTAL_RIDGED";
  local_b8 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::FractalType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::FractalType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,2,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"FRACTAL_PING_PONG",false);
  local_98 = "FRACTAL_PING_PONG";
  local_b8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::FractalType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::FractalType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,3,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"DISTANCE_EUCLIDEAN",false);
  local_98 = "DISTANCE_EUCLIDEAN";
  local_b8 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::CellularDistanceFunction,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::CellularDistanceFunction,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,0,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"DISTANCE_EUCLIDEAN_SQUARED",false);
  local_98 = "DISTANCE_EUCLIDEAN_SQUARED";
  local_b8 = 0;
  local_90 = 0x1a;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::CellularDistanceFunction,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::CellularDistanceFunction,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,1,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"DISTANCE_MANHATTAN",false);
  local_98 = "DISTANCE_MANHATTAN";
  local_b8 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::CellularDistanceFunction,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::CellularDistanceFunction,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,2,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"DISTANCE_HYBRID",false);
  local_98 = "DISTANCE_HYBRID";
  local_b8 = 0;
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::CellularDistanceFunction,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::CellularDistanceFunction,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,3,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"RETURN_CELL_VALUE",false);
  local_98 = "RETURN_CELL_VALUE";
  local_d8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "FastNoiseLite::CellularReturnType";
  local_b8 = 0;
  local_90 = 0x21;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  local_c0 = 0;
  local_c8 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_c8,0,(StrRange *)&local_c0,0x10006,
             (StringName *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88;
  local_88 = 0;
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_98 = "FastNoiseLite";
  local_b0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,0,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"RETURN_DISTANCE",false);
  local_98 = "RETURN_DISTANCE";
  local_d8 = 0;
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "FastNoiseLite::CellularReturnType";
  local_b8 = 0;
  local_90 = 0x21;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  local_c0 = 0;
  local_c8 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_c8,0,(StrRange *)&local_c0,0x10006,
             (StringName *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88;
  local_88 = 0;
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_98 = "FastNoiseLite";
  local_b0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,1,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"RETURN_DISTANCE2",false);
  local_98 = "RETURN_DISTANCE2";
  local_d8 = 0;
  local_90 = 0x10;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "FastNoiseLite::CellularReturnType";
  local_b8 = 0;
  local_90 = 0x21;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  local_c0 = 0;
  local_c8 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_c8,0,(StrRange *)&local_c0,0x10006,
             (StringName *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88;
  local_88 = 0;
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_98 = "FastNoiseLite";
  local_b0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,2,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"RETURN_DISTANCE2_ADD",false);
  local_98 = "RETURN_DISTANCE2_ADD";
  local_d8 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "FastNoiseLite::CellularReturnType";
  local_b8 = 0;
  local_90 = 0x21;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  local_c0 = 0;
  local_c8 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_c8,0,(StrRange *)&local_c0,0x10006,
             (StringName *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88;
  local_88 = 0;
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_98 = "FastNoiseLite";
  local_b0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,3,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"RETURN_DISTANCE2_SUB",false);
  local_98 = "RETURN_DISTANCE2_SUB";
  local_d8 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "FastNoiseLite::CellularReturnType";
  local_b8 = 0;
  local_90 = 0x21;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  local_c0 = 0;
  local_c8 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_c8,0,(StrRange *)&local_c0,0x10006,
             (StringName *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88;
  local_88 = 0;
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_98 = "FastNoiseLite";
  local_b0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,4,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"RETURN_DISTANCE2_MUL",false);
  local_98 = "RETURN_DISTANCE2_MUL";
  local_d8 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "FastNoiseLite::CellularReturnType";
  local_b8 = 0;
  local_90 = 0x21;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  local_c0 = 0;
  local_c8 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_c8,0,(StrRange *)&local_c0,0x10006,
             (StringName *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88;
  local_88 = 0;
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_98 = "FastNoiseLite";
  local_b0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,5,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"RETURN_DISTANCE2_DIV",false);
  local_98 = "RETURN_DISTANCE2_DIV";
  local_d8 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "FastNoiseLite::CellularReturnType";
  local_b8 = 0;
  local_90 = 0x21;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  local_c0 = 0;
  local_c8 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_c8,0,(StrRange *)&local_c0,0x10006,
             (StringName *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88;
  local_88 = 0;
  CowData<char32_t>::_unref(local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  local_98 = "FastNoiseLite";
  local_b0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,6,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"DOMAIN_WARP_SIMPLEX",false);
  local_98 = "DOMAIN_WARP_SIMPLEX";
  local_b8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::DomainWarpType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::DomainWarpType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,0,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"DOMAIN_WARP_SIMPLEX_REDUCED",false);
  local_98 = "DOMAIN_WARP_SIMPLEX_REDUCED";
  local_b8 = 0;
  local_90 = 0x1b;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::DomainWarpType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::DomainWarpType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,1,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"DOMAIN_WARP_BASIC_GRID",false);
  local_98 = "DOMAIN_WARP_BASIC_GRID";
  local_b8 = 0;
  local_90 = 0x16;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::DomainWarpType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::DomainWarpType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,2,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"DOMAIN_WARP_FRACTAL_NONE",false);
  local_98 = "DOMAIN_WARP_FRACTAL_NONE";
  local_b8 = 0;
  local_90 = 0x18;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::DomainWarpFractalType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::DomainWarpFractalType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,0,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"DOMAIN_WARP_FRACTAL_PROGRESSIVE",false);
  local_98 = "DOMAIN_WARP_FRACTAL_PROGRESSIVE";
  local_b8 = 0;
  local_90 = 0x1f;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::DomainWarpFractalType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::DomainWarpFractalType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,1,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"DOMAIN_WARP_FRACTAL_INDEPENDENT",false);
  local_98 = "DOMAIN_WARP_FRACTAL_INDEPENDENT";
  local_b8 = 0;
  local_90 = 0x1f;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<FastNoiseLite::DomainWarpFractalType,void>::get_class_info
            ((GetTypeInfo<FastNoiseLite::DomainWarpFractalType,void> *)&local_98);
  local_b0 = local_88;
  local_88 = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "FastNoiseLite";
  local_c0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,2,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* FastNoiseLite::is_class_ptr(void*) const */

uint __thiscall FastNoiseLite::is_class_ptr(FastNoiseLite *this,void *param_1)

{
  return (uint)CONCAT71(0x1223,(undefined4 *)param_1 == &Noise::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1223,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1223,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1223,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1223,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* FastNoiseLite::_getv(StringName const&, Variant&) const */

undefined8 FastNoiseLite::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FastNoiseLite::_setv(StringName const&, Variant const&) */

undefined8 FastNoiseLite::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FastNoiseLite::_property_can_revertv(StringName const&) const */

undefined8 FastNoiseLite::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* FastNoiseLite::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FastNoiseLite::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FastNoiseLite::_notificationv(int, bool) */

void FastNoiseLite::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::get_argument_meta(int) const */

undefined8 MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<FastNoiseLite::DomainWarpFractalType>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<FastNoiseLite::DomainWarpFractalType>::_gen_argument_type
          (MethodBindT<FastNoiseLite::DomainWarpFractalType> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<FastNoiseLite::DomainWarpFractalType>::get_argument_meta(int) const */

undefined8 MethodBindT<FastNoiseLite::DomainWarpFractalType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<FastNoiseLite::DomainWarpType>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<FastNoiseLite::DomainWarpType>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<FastNoiseLite::DomainWarpType>::get_argument_meta(int) const */

undefined8 MethodBindTRC<FastNoiseLite::DomainWarpType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<FastNoiseLite::DomainWarpType>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<FastNoiseLite::DomainWarpType>::_gen_argument_type
          (MethodBindT<FastNoiseLite::DomainWarpType> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<FastNoiseLite::DomainWarpType>::get_argument_meta(int) const */

undefined8 MethodBindT<FastNoiseLite::DomainWarpType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<FastNoiseLite::CellularReturnType>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<FastNoiseLite::CellularReturnType>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<FastNoiseLite::CellularReturnType>::get_argument_meta(int) const */

undefined8 MethodBindTRC<FastNoiseLite::CellularReturnType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<FastNoiseLite::CellularReturnType>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<FastNoiseLite::CellularReturnType>::_gen_argument_type
          (MethodBindT<FastNoiseLite::CellularReturnType> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<FastNoiseLite::CellularReturnType>::get_argument_meta(int) const */

undefined8 MethodBindT<FastNoiseLite::CellularReturnType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::get_argument_meta(int) const */

undefined8 MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<FastNoiseLite::CellularDistanceFunction>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<FastNoiseLite::CellularDistanceFunction>::_gen_argument_type
          (MethodBindT<FastNoiseLite::CellularDistanceFunction> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<FastNoiseLite::CellularDistanceFunction>::get_argument_meta(int) const */

undefined8 MethodBindT<FastNoiseLite::CellularDistanceFunction>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<FastNoiseLite::FractalType>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<FastNoiseLite::FractalType>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<FastNoiseLite::FractalType>::get_argument_meta(int) const */

undefined8 MethodBindTRC<FastNoiseLite::FractalType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<FastNoiseLite::FractalType>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<FastNoiseLite::FractalType>::_gen_argument_type
          (MethodBindT<FastNoiseLite::FractalType> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<FastNoiseLite::FractalType>::get_argument_meta(int) const */

undefined8 MethodBindT<FastNoiseLite::FractalType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector3>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector3>::_gen_argument_type(int param_1)

{
  return 9;
}



/* MethodBindTRC<Vector3>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector3>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector3>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Vector3>::_gen_argument_type(MethodBindT<Vector3> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindT<Vector3>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector3>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<float>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<float>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<float>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<float>::get_argument_meta(int) const */

byte __thiscall MethodBindT<float>::get_argument_meta(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<FastNoiseLite::NoiseType>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<FastNoiseLite::NoiseType>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<FastNoiseLite::NoiseType>::get_argument_meta(int) const */

undefined8 MethodBindTRC<FastNoiseLite::NoiseType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<FastNoiseLite::NoiseType>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<FastNoiseLite::NoiseType>::_gen_argument_type
          (MethodBindT<FastNoiseLite::NoiseType> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<FastNoiseLite::NoiseType>::get_argument_meta(int) const */

undefined8 MethodBindT<FastNoiseLite::NoiseType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<FastNoiseLite::NoiseType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::NoiseType>::~MethodBindT(MethodBindT<FastNoiseLite::NoiseType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121b60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<FastNoiseLite::NoiseType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::NoiseType>::~MethodBindT(MethodBindT<FastNoiseLite::NoiseType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121b60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<FastNoiseLite::NoiseType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::NoiseType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::NoiseType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121bc0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<FastNoiseLite::NoiseType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::NoiseType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::NoiseType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121bc0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3>::~MethodBindT() */

void __thiscall MethodBindT<Vector3>::~MethodBindT(MethodBindT<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121da0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3>::~MethodBindT() */

void __thiscall MethodBindT<Vector3>::~MethodBindT(MethodBindT<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121da0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121e00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121e00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<FastNoiseLite::FractalType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::FractalType>::~MethodBindT(MethodBindT<FastNoiseLite::FractalType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121e60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<FastNoiseLite::FractalType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::FractalType>::~MethodBindT(MethodBindT<FastNoiseLite::FractalType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121e60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<FastNoiseLite::FractalType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::FractalType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::FractalType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121ec0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<FastNoiseLite::FractalType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::FractalType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::FractalType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121ec0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<FastNoiseLite::CellularDistanceFunction>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::CellularDistanceFunction>::~MethodBindT
          (MethodBindT<FastNoiseLite::CellularDistanceFunction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121f20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<FastNoiseLite::CellularDistanceFunction>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::CellularDistanceFunction>::~MethodBindT
          (MethodBindT<FastNoiseLite::CellularDistanceFunction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121f20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::CellularDistanceFunction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121f80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::CellularDistanceFunction> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121f80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<FastNoiseLite::CellularReturnType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::CellularReturnType>::~MethodBindT
          (MethodBindT<FastNoiseLite::CellularReturnType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121fe0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<FastNoiseLite::CellularReturnType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::CellularReturnType>::~MethodBindT
          (MethodBindT<FastNoiseLite::CellularReturnType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121fe0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<FastNoiseLite::CellularReturnType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::CellularReturnType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::CellularReturnType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122040;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<FastNoiseLite::CellularReturnType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::CellularReturnType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::CellularReturnType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122040;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001220a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001220a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122100;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122100;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<FastNoiseLite::DomainWarpType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::DomainWarpType>::~MethodBindT
          (MethodBindT<FastNoiseLite::DomainWarpType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122160;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<FastNoiseLite::DomainWarpType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::DomainWarpType>::~MethodBindT
          (MethodBindT<FastNoiseLite::DomainWarpType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122160;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<FastNoiseLite::DomainWarpType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::DomainWarpType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::DomainWarpType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001221c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<FastNoiseLite::DomainWarpType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::DomainWarpType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::DomainWarpType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001221c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<FastNoiseLite::DomainWarpFractalType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::DomainWarpFractalType>::~MethodBindT
          (MethodBindT<FastNoiseLite::DomainWarpFractalType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122220;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<FastNoiseLite::DomainWarpFractalType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::DomainWarpFractalType>::~MethodBindT
          (MethodBindT<FastNoiseLite::DomainWarpFractalType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122220;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::DomainWarpFractalType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122280;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::DomainWarpFractalType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122280;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121c20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121c20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121c80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121c80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121ce0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121ce0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121d40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121d40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001222e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001222e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* void fastnoiselite::FastNoiseLite::SingleDomainWarpBasicGrid<float>(int, float, float, float,
   float, float, float&, float&, float&) const [clone .isra.0] */

void fastnoiselite::FastNoiseLite::SingleDomainWarpBasicGrid<float>
               (int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar19 = param_4 * param_3;
  fVar21 = param_5 * param_3;
  fVar23 = param_6 * param_3;
  iVar5 = (int)fVar19 - (uint)(fVar19 < 0.0);
  iVar2 = (int)fVar21 - (uint)(fVar21 < 0.0);
  iVar8 = (int)fVar23 - (uint)(fVar23 < 0.0);
  uVar6 = iVar5 * 0x1dde90c9;
  fVar19 = fVar19 - (float)iVar5;
  uVar7 = uVar6 + 0x1dde90c9 ^ param_1;
  uVar6 = uVar6 ^ param_1;
  fVar20 = (_LC1 - (fVar19 + fVar19)) * fVar19 * fVar19;
  uVar3 = iVar2 * 0x43c42e4d;
  fVar21 = fVar21 - (float)iVar2;
  uVar11 = uVar3 ^ uVar6;
  uVar4 = uVar3 ^ uVar7;
  uVar6 = uVar6 ^ uVar3 + 0x43c42e4d;
  uVar7 = uVar3 + 0x43c42e4d ^ uVar7;
  fVar22 = (_LC1 - (fVar21 + fVar21)) * fVar21 * fVar21;
  uVar9 = iVar8 * 0x668b6e2f;
  fVar23 = fVar23 - (float)iVar8;
  uVar3 = uVar9 + 0x668b6e2f;
  uVar15 = (uVar9 ^ uVar11) * 0x27d4eb2d;
  uVar16 = (uVar9 ^ uVar4) * 0x27d4eb2d;
  uVar12 = uVar15 & 0x3fc;
  uVar14 = uVar16 & 0x3fc;
  fVar18 = (_LC1 - (fVar23 + fVar23)) * fVar23 * fVar23;
  uVar10 = (uVar9 ^ uVar7) * 0x27d4eb2d;
  uVar13 = (uVar9 ^ uVar6) * 0x27d4eb2d;
  uVar9 = uVar10 & 0x3fc;
  fVar25 = (*(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar16 & 0x3fc) * 4) -
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar15 & 0x3fc) * 4)) * fVar20 +
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar15 & 0x3fc) * 4);
  fVar24 = (*(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar14 | 1) * 4) -
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar12 | 1) * 4)) * fVar20 +
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar12 | 1) * 4);
  uVar16 = uVar13 & 0x3fc;
  uVar15 = (uVar11 ^ uVar3) * 0x27d4eb2d;
  uVar4 = (uVar4 ^ uVar3) * 0x27d4eb2d;
  uVar11 = (uVar6 ^ uVar3) * 0x27d4eb2d;
  fVar17 = (*(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar14 | 2) * 4) -
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar12 | 2) * 4)) * fVar20 +
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar12 | 2) * 4);
  fVar25 = (((*(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar10 & 0x3fc) * 4) -
             *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar13 & 0x3fc) * 4)) * fVar20 +
            *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar13 & 0x3fc) * 4)) - fVar25) * fVar22
           + fVar25;
  uVar10 = uVar15 & 0x3fc;
  fVar24 = (((*(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar9 | 1) * 4) -
             *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar16 | 1) * 4)) * fVar20 +
            *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar16 | 1) * 4)) - fVar24) * fVar22 +
           fVar24;
  uVar6 = uVar4 & 0x3fc;
  fVar17 = (((*(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar9 | 2) * 4) -
             *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar16 | 2) * 4)) * fVar20 +
            *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar16 | 2) * 4)) - fVar17) * fVar22 +
           fVar17;
  fVar28 = (*(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar4 & 0x3fc) * 4) -
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar15 & 0x3fc) * 4)) * fVar20 +
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar15 & 0x3fc) * 4);
  uVar3 = (uVar3 ^ uVar7) * 0x27d4eb2d & 0x3fc;
  fVar27 = (*(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar6 | 1) * 4) -
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar10 | 1) * 4)) * fVar20 +
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar10 | 1) * 4);
  uVar4 = uVar11 & 0x3fc;
  fVar21 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar4 | 1) * 4);
  fVar26 = (*(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar6 | 2) * 4) -
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar10 | 2) * 4)) * fVar20 +
           *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar10 | 2) * 4);
  fVar19 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar3 | 1) * 4);
  fVar23 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar4 | 2) * 4);
  fVar1 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar3 | 2) * 4);
  *param_7 = ((((((*(float *)(Lookup<float>::RandVecs3D + (ulong)uVar3 * 4) -
                  *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar11 & 0x3fc) * 4)) * fVar20 +
                 *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar11 & 0x3fc) * 4)) - fVar28) *
                fVar22 + fVar28) - fVar25) * fVar18 + fVar25) * param_2 + *param_7;
  *param_8 = ((((((fVar19 - fVar21) * fVar20 + fVar21) - fVar27) * fVar22 + fVar27) - fVar24) *
              fVar18 + fVar24) * param_2 + *param_8;
  *param_9 = ((((((fVar1 - fVar23) * fVar20 + fVar23) - fVar26) * fVar22 + fVar26) - fVar17) *
              fVar18 + fVar17) * param_2 + *param_9;
  return;
}



/* void fastnoiselite::FastNoiseLite::SingleDomainWarpBasicGrid<float>(int, float, float, float,
   float, float&, float&) const [clone .isra.0] */

void fastnoiselite::FastNoiseLite::SingleDomainWarpBasicGrid<float>
               (int param_1,float param_2,float param_3,float param_4,float param_5,float *param_6,
               float *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar9 = param_4 * param_3;
  fVar11 = param_5 * param_3;
  iVar3 = (int)fVar9 - (uint)(fVar9 < 0.0);
  iVar1 = (int)fVar11 - (uint)(fVar11 < 0.0);
  uVar5 = iVar3 * 0x1dde90c9;
  fVar9 = fVar9 - (float)iVar3;
  uVar4 = uVar5 ^ param_1;
  uVar6 = uVar5 + 0x1dde90c9 ^ param_1;
  fVar10 = fVar9 * fVar9 * (_LC1 - (fVar9 + fVar9));
  uVar5 = iVar1 * 0x43c42e4d;
  fVar11 = fVar11 - (float)iVar1;
  uVar2 = (uVar5 ^ uVar6) * 0x27d4eb2d;
  uVar7 = (uVar5 ^ uVar4) * 0x27d4eb2d;
  uVar4 = (uVar4 ^ uVar5 + 0x43c42e4d) * 0x27d4eb2d;
  fVar8 = (_LC1 - (fVar11 + fVar11)) * fVar11 * fVar11;
  uVar5 = (uVar5 + 0x43c42e4d ^ uVar6) * 0x27d4eb2d & 0x1fe;
  fVar13 = (*(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar2 & 0x1fe) * 4) -
           *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar7 & 0x1fe) * 4)) * fVar10 +
           *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar7 & 0x1fe) * 4);
  fVar12 = (*(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar2 & 0x1fe | 1) * 4) -
           *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar7 & 0x1fe | 1) * 4)) * fVar10 +
           *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar7 & 0x1fe | 1) * 4);
  fVar9 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar4 & 0x1fe | 1) * 4);
  fVar11 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar5 | 1) * 4);
  *param_6 = ((((*(float *)(Lookup<float>::RandVecs2D + (ulong)uVar5 * 4) -
                *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar4 & 0x1fe) * 4)) * fVar10 +
               *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar4 & 0x1fe) * 4)) - fVar13) * fVar8
             + fVar13) * param_2 + *param_6;
  *param_7 = (((fVar9 + (fVar11 - fVar9) * fVar10) - fVar12) * fVar8 + fVar12) * param_2 + *param_7;
  return;
}



/* float fastnoiselite::FastNoiseLite::SingleValue<float>(int, float, float, float) const [clone
   .isra.0] */

float fastnoiselite::FastNoiseLite::SingleValue<float>
                (int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar10 = (int)param_2 - (uint)(param_2 < 0.0);
  iVar8 = (int)param_3 - (uint)(param_3 < 0.0);
  iVar1 = (int)param_4 - (uint)(param_4 < 0.0);
  uVar11 = iVar10 * 0x1dde90c9;
  fVar16 = param_2 - (float)iVar10;
  uVar12 = uVar11 ^ param_1;
  uVar3 = uVar11 + 0x1dde90c9 ^ param_1;
  fVar16 = (_LC1 - (fVar16 + fVar16)) * fVar16 * fVar16;
  uVar11 = iVar8 * 0x43c42e4d;
  fVar13 = param_3 - (float)iVar8;
  uVar9 = uVar11 ^ uVar12;
  uVar7 = uVar11 ^ uVar3;
  uVar3 = uVar3 ^ uVar11 + 0x43c42e4d;
  uVar12 = uVar11 + 0x43c42e4d ^ uVar12;
  fVar17 = (_LC1 - (fVar13 + fVar13)) * fVar13 * fVar13;
  uVar2 = iVar1 * 0x668b6e2f;
  fVar15 = param_4 - (float)iVar1;
  uVar11 = uVar2 + 0x668b6e2f;
  iVar1 = (uVar2 ^ uVar9) * 0x27d4eb2d;
  iVar8 = (uVar2 ^ uVar7) * 0x27d4eb2d;
  uVar4 = iVar1 * iVar1;
  uVar6 = iVar8 * iVar8;
  iVar1 = (uVar2 ^ uVar12) * 0x27d4eb2d;
  iVar8 = (uVar2 ^ uVar3) * 0x27d4eb2d;
  uVar2 = iVar1 * iVar1;
  fVar13 = (float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2;
  uVar5 = iVar8 * iVar8;
  iVar1 = (uVar7 ^ uVar11) * 0x27d4eb2d;
  uVar4 = iVar1 * iVar1;
  fVar18 = (float)(int)(uVar2 ^ uVar2 * 0x80000) * _LC2;
  iVar1 = (uVar9 ^ uVar11) * 0x27d4eb2d;
  fVar13 = ((float)(int)(uVar6 ^ uVar6 * 0x80000) * _LC2 - fVar13) * fVar16 + fVar13;
  iVar8 = (uVar3 ^ uVar11) * 0x27d4eb2d;
  uVar3 = iVar1 * iVar1;
  iVar1 = (uVar11 ^ uVar12) * 0x27d4eb2d;
  uVar2 = iVar8 * iVar8;
  uVar11 = iVar1 * iVar1;
  fVar14 = (float)(int)(uVar3 ^ uVar3 * 0x80000) * _LC2;
  fVar14 = ((float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2 - fVar14) * fVar16 + fVar14;
  fVar13 = ((((float)(int)(uVar5 ^ uVar5 * 0x80000) * _LC2 - fVar18) * fVar16 + fVar18) - fVar13) *
           fVar17 + fVar13;
  fVar18 = (float)(int)(uVar11 ^ uVar11 * 0x80000) * _LC2;
  return ((((fVar18 + (_LC2 * (float)(int)(uVar2 ^ uVar2 * 0x80000) - fVar18) * fVar16) - fVar14) *
           fVar17 + fVar14) - fVar13) * (_LC1 - (fVar15 + fVar15)) * fVar15 * fVar15 + fVar13;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float fastnoiselite::FastNoiseLite::SingleValueCubic<float>(int, float, float, float) const
   [clone .isra.0] */

float fastnoiselite::FastNoiseLite::SingleValueCubic<float>
                (int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  
  iVar5 = (int)param_2 - (uint)(param_2 < 0.0);
  iVar11 = (int)param_3 - (uint)(param_3 < 0.0);
  iVar1 = (int)param_4 - (uint)(param_4 < 0.0);
  uVar6 = iVar5 * 0x1dde90c9;
  uVar25 = iVar1 * 0x668b6e2f;
  fVar28 = param_2 - (float)iVar5;
  uVar12 = iVar11 * 0x43c42e4d;
  uVar3 = uVar6 + 0x3bbd2192 ^ param_1;
  uVar4 = uVar25 + 0xcd16dc5e;
  uVar2 = uVar25 + 0x997491d1;
  fVar34 = fVar28 * fVar28;
  uVar27 = uVar12 + 0x87885c9a;
  uVar17 = uVar12 + 0x43c42e4d;
  fVar29 = param_3 - (float)iVar11;
  uVar8 = uVar27 ^ uVar3;
  iVar5 = (uVar8 ^ uVar4) * 0x27d4eb2d;
  uVar13 = uVar12 + 0xbc3bd1b3;
  uVar14 = uVar25 + 0x668b6e2f;
  uVar15 = iVar5 * iVar5;
  fVar30 = param_4 - (float)iVar1;
  uVar9 = uVar6 + 0x1dde90c9 ^ param_1;
  fVar31 = fVar28 * fVar34;
  uVar16 = uVar27 ^ uVar9;
  iVar1 = (uVar16 ^ uVar4) * 0x27d4eb2d;
  uVar10 = iVar1 * iVar1;
  uVar26 = uVar6 ^ param_1;
  uVar7 = uVar6 + 0xe2216f37 ^ param_1;
  uVar22 = uVar27 ^ uVar7;
  uVar27 = uVar27 ^ uVar26;
  iVar1 = (uVar27 ^ uVar4) * 0x27d4eb2d;
  fVar37 = (float)(int)(uVar10 ^ uVar10 * 0x80000) * _LC2;
  uVar6 = iVar1 * iVar1;
  iVar1 = (uVar4 ^ uVar22) * 0x27d4eb2d;
  fVar41 = (float)(int)(uVar6 ^ uVar6 * 0x80000) * _LC2;
  uVar6 = iVar1 * iVar1;
  uVar23 = uVar17 ^ uVar3;
  fVar42 = (float)(int)(uVar6 ^ uVar6 * 0x80000) * _LC2;
  uVar24 = uVar17 ^ uVar9;
  iVar1 = (uVar23 ^ uVar4) * 0x27d4eb2d;
  iVar5 = (uVar24 ^ uVar4) * 0x27d4eb2d;
  uVar6 = iVar1 * iVar1;
  uVar10 = iVar5 * iVar5;
  fVar32 = fVar42 - fVar41;
  fVar35 = ((float)(int)(uVar15 ^ uVar15 * 0x80000) * _LC2 - fVar37) - fVar32;
  uVar19 = uVar17 ^ uVar7;
  uVar17 = uVar17 ^ uVar26;
  iVar1 = (uVar17 ^ uVar4) * 0x27d4eb2d;
  fVar40 = (float)(int)(uVar10 ^ uVar10 * 0x80000) * _LC2;
  uVar10 = iVar1 * iVar1;
  iVar1 = (uVar4 ^ uVar19) * 0x27d4eb2d;
  fVar33 = fVar29 * fVar29;
  uVar15 = iVar1 * iVar1;
  fVar44 = (float)(int)(uVar10 ^ uVar10 * 0x80000) * _LC2;
  fVar36 = fVar29 * fVar33;
  uVar20 = uVar12 ^ uVar3;
  iVar1 = (uVar20 ^ uVar4) * 0x27d4eb2d;
  uVar21 = uVar12 ^ uVar9;
  fVar49 = (float)(int)(uVar15 ^ uVar15 * 0x80000) * _LC2;
  uVar15 = iVar1 * iVar1;
  iVar1 = (uVar21 ^ uVar4) * 0x27d4eb2d;
  fVar52 = fVar49 - fVar44;
  uVar18 = iVar1 * iVar1;
  uVar3 = uVar3 ^ uVar13;
  uVar9 = uVar9 ^ uVar13;
  fVar38 = ((float)(int)(uVar6 ^ uVar6 * 0x80000) * _LC2 - fVar40) - fVar52;
  uVar10 = uVar12 ^ uVar7;
  uVar12 = uVar12 ^ uVar26;
  iVar1 = (uVar12 ^ uVar4) * 0x27d4eb2d;
  fVar39 = (float)(int)(uVar18 ^ uVar18 * 0x80000) * _LC2;
  uVar18 = iVar1 * iVar1;
  fVar44 = (fVar52 - fVar38) * fVar34 + fVar38 * fVar31 + (fVar40 - fVar49) * fVar28 + fVar44;
  iVar1 = (uVar4 ^ uVar10) * 0x27d4eb2d;
  uVar6 = iVar1 * iVar1;
  fVar45 = (float)(int)(uVar18 ^ uVar18 * 0x80000) * _LC2;
  iVar1 = (uVar4 ^ uVar9) * 0x27d4eb2d;
  uVar18 = iVar1 * iVar1;
  iVar1 = (uVar4 ^ uVar3) * 0x27d4eb2d;
  fVar52 = (float)(int)(uVar6 ^ uVar6 * 0x80000) * _LC2;
  uVar6 = iVar1 * iVar1;
  uVar26 = uVar26 ^ uVar13;
  fVar40 = fVar52 - fVar45;
  fVar38 = ((float)(int)(uVar15 ^ uVar15 * 0x80000) * _LC2 - fVar39) - fVar40;
  iVar1 = (uVar4 ^ uVar26) * 0x27d4eb2d;
  uVar15 = iVar1 * iVar1;
  fVar49 = (float)(int)(uVar18 ^ uVar18 * 0x80000) * _LC2;
  fVar45 = fVar38 * fVar31 + (fVar40 - fVar38) * fVar34 + (fVar39 - fVar52) * fVar28 + fVar45;
  uVar7 = uVar7 ^ uVar13;
  iVar1 = (uVar4 ^ uVar7) * 0x27d4eb2d;
  fVar46 = (float)(int)(uVar15 ^ uVar15 * 0x80000) * _LC2;
  uVar4 = iVar1 * iVar1;
  fVar40 = (float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2;
  fVar38 = fVar40 - fVar46;
  fVar39 = ((float)(int)(uVar6 ^ uVar6 * 0x80000) * _LC2 - fVar49) - fVar38;
  fVar46 = (fVar38 - fVar39) * fVar34 + fVar39 * fVar31 + (fVar49 - fVar40) * fVar28 + fVar46;
  fVar53 = fVar46 - fVar45;
  iVar5 = (uVar16 ^ uVar14) * 0x27d4eb2d;
  fVar42 = (((fVar37 - fVar42) * fVar28 + (fVar32 - fVar35) * fVar34 + fVar35 * fVar31 + fVar41) -
           fVar44) - fVar53;
  iVar1 = (uVar8 ^ uVar14) * 0x27d4eb2d;
  uVar13 = iVar5 * iVar5;
  uVar4 = iVar1 * iVar1;
  iVar5 = (uVar27 ^ uVar14) * 0x27d4eb2d;
  fVar49 = (float)(int)(uVar13 ^ uVar13 * 0x80000) * _LC2;
  iVar1 = (uVar23 ^ uVar14) * 0x27d4eb2d;
  uVar6 = iVar5 * iVar5;
  uVar13 = iVar1 * iVar1;
  iVar1 = (uVar14 ^ uVar22) * 0x27d4eb2d;
  fVar47 = (float)(int)(uVar6 ^ uVar6 * 0x80000) * _LC2;
  uVar6 = iVar1 * iVar1;
  iVar5 = (uVar24 ^ uVar14) * 0x27d4eb2d;
  fVar50 = (float)(int)(uVar6 ^ uVar6 * 0x80000) * _LC2;
  iVar1 = (uVar20 ^ uVar14) * 0x27d4eb2d;
  uVar15 = iVar5 * iVar5;
  uVar6 = iVar1 * iVar1;
  fVar52 = fVar50 - fVar47;
  fVar39 = ((float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2 - fVar49) - fVar52;
  iVar1 = (uVar17 ^ uVar14) * 0x27d4eb2d;
  fVar37 = (float)(int)(uVar15 ^ uVar15 * 0x80000) * _LC2;
  uVar4 = iVar1 * iVar1;
  iVar1 = (uVar14 ^ uVar19) * 0x27d4eb2d;
  fVar38 = (float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2;
  uVar4 = iVar1 * iVar1;
  iVar1 = (uVar21 ^ uVar14) * 0x27d4eb2d;
  fVar40 = (float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2;
  uVar4 = iVar1 * iVar1;
  fVar32 = fVar40 - fVar38;
  fVar35 = ((float)(int)(uVar13 ^ uVar13 * 0x80000) * _LC2 - fVar37) - fVar32;
  fVar38 = (fVar32 - fVar35) * fVar34 + fVar35 * fVar31 + (fVar37 - fVar40) * fVar28 + fVar38;
  iVar1 = (uVar12 ^ uVar14) * 0x27d4eb2d;
  uVar13 = iVar1 * iVar1;
  fVar37 = (float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2;
  iVar1 = (uVar14 ^ uVar10) * 0x27d4eb2d;
  fVar40 = (float)(int)(uVar13 ^ uVar13 * 0x80000) * _LC2;
  uVar4 = iVar1 * iVar1;
  iVar1 = (uVar14 ^ uVar9) * 0x27d4eb2d;
  fVar41 = (float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2;
  uVar15 = iVar1 * iVar1;
  fVar32 = fVar41 - fVar40;
  iVar1 = (uVar14 ^ uVar3) * 0x27d4eb2d;
  uVar13 = iVar1 * iVar1;
  fVar35 = ((float)(int)(uVar6 ^ uVar6 * 0x80000) * _LC2 - fVar37) - fVar32;
  fVar40 = (fVar32 - fVar35) * fVar34 + fVar35 * fVar31 + (fVar37 - fVar41) * fVar28 + fVar40;
  iVar1 = (uVar14 ^ uVar7) * 0x27d4eb2d;
  iVar5 = (uVar14 ^ uVar26) * 0x27d4eb2d;
  uVar4 = iVar1 * iVar1;
  fVar43 = (float)(int)(uVar15 ^ uVar15 * 0x80000) * _LC2;
  uVar14 = iVar5 * iVar5;
  iVar5 = (uVar16 ^ uVar25) * 0x27d4eb2d;
  fVar35 = (float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2;
  iVar1 = (uVar8 ^ uVar25) * 0x27d4eb2d;
  uVar14 = iVar5 * iVar5;
  fVar54 = (float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2;
  uVar4 = iVar1 * iVar1;
  fVar32 = fVar54 - fVar35;
  fVar37 = ((float)(int)(uVar13 ^ uVar13 * 0x80000) * _LC2 - fVar43) - fVar32;
  iVar1 = (uVar23 ^ uVar25) * 0x27d4eb2d;
  iVar5 = (uVar27 ^ uVar25) * 0x27d4eb2d;
  fVar41 = (float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2;
  uVar13 = iVar1 * iVar1;
  uVar14 = iVar5 * iVar5;
  iVar1 = (uVar25 ^ uVar22) * 0x27d4eb2d;
  uVar6 = iVar1 * iVar1;
  fVar48 = (float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2;
  fVar35 = (fVar32 - fVar37) * fVar34 + fVar37 * fVar31 + (fVar43 - fVar54) * fVar28 + fVar35;
  fVar37 = fVar35 - fVar40;
  fVar32 = (((fVar52 - fVar39) * fVar34 + fVar39 * fVar31 + (fVar49 - fVar50) * fVar28 + fVar47) -
           fVar38) - fVar37;
  iVar1 = (uVar24 ^ uVar25) * 0x27d4eb2d;
  fVar47 = (float)(int)(uVar6 ^ uVar6 * 0x80000) * _LC2;
  uVar14 = iVar1 * iVar1;
  fVar52 = fVar47 - fVar48;
  fVar39 = ((float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2 - fVar41) - fVar52;
  iVar1 = (uVar17 ^ uVar25) * 0x27d4eb2d;
  fVar40 = (fVar37 - fVar32) * fVar33 + fVar32 * fVar36 + (fVar38 - fVar35) * fVar29 + fVar40;
  fVar37 = (float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2;
  uVar4 = iVar1 * iVar1;
  iVar1 = (uVar25 ^ uVar19) * 0x27d4eb2d;
  uVar14 = iVar1 * iVar1;
  fVar35 = (float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2;
  iVar5 = (uVar21 ^ uVar25) * 0x27d4eb2d;
  fVar49 = (float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2;
  iVar1 = (uVar20 ^ uVar25) * 0x27d4eb2d;
  uVar14 = iVar5 * iVar5;
  uVar4 = iVar1 * iVar1;
  fVar32 = fVar49 - fVar35;
  fVar38 = ((float)(int)(uVar13 ^ uVar13 * 0x80000) * _LC2 - fVar37) - fVar32;
  fVar35 = (fVar32 - fVar38) * fVar34 + fVar38 * fVar31 + (fVar37 - fVar49) * fVar28 + fVar35;
  iVar1 = (uVar12 ^ uVar25) * 0x27d4eb2d;
  uVar13 = iVar1 * iVar1;
  fVar49 = (float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2;
  iVar1 = (uVar25 ^ uVar10) * 0x27d4eb2d;
  uVar14 = iVar1 * iVar1;
  fVar38 = (float)(int)(uVar13 ^ uVar13 * 0x80000) * _LC2;
  iVar1 = (uVar25 ^ uVar9) * 0x27d4eb2d;
  fVar43 = (float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2;
  uVar14 = iVar1 * iVar1;
  fVar32 = fVar43 - fVar38;
  iVar1 = (uVar25 ^ uVar3) * 0x27d4eb2d;
  uVar13 = iVar1 * iVar1;
  fVar37 = ((float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2 - fVar49) - fVar32;
  fVar38 = (fVar32 - fVar37) * fVar34 + fVar37 * fVar31 + (fVar49 - fVar43) * fVar28 + fVar38;
  iVar1 = (uVar25 ^ uVar26) * 0x27d4eb2d;
  uVar6 = iVar1 * iVar1;
  fVar43 = (float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2;
  iVar5 = (uVar22 ^ uVar2) * 0x27d4eb2d;
  iVar1 = (uVar8 ^ uVar2) * 0x27d4eb2d;
  uVar8 = iVar5 * iVar5;
  iVar5 = (uVar25 ^ uVar7) * 0x27d4eb2d;
  uVar4 = iVar1 * iVar1;
  uVar14 = iVar5 * iVar5;
  fVar37 = (float)(int)(uVar6 ^ uVar6 * 0x80000) * _LC2;
  iVar1 = (uVar16 ^ uVar2) * 0x27d4eb2d;
  fVar50 = (float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2;
  uVar14 = iVar1 * iVar1;
  fVar32 = fVar50 - fVar37;
  fVar49 = ((float)(int)(uVar13 ^ uVar13 * 0x80000) * _LC2 - fVar43) - fVar32;
  iVar1 = (uVar27 ^ uVar2) * 0x27d4eb2d;
  fVar55 = (float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2;
  uVar27 = iVar1 * iVar1;
  fVar37 = (fVar32 - fVar49) * fVar34 + fVar49 * fVar31 + (fVar43 - fVar50) * fVar28 + fVar37;
  fVar49 = fVar37 - fVar38;
  fVar32 = (((fVar52 - fVar39) * fVar34 + fVar39 * fVar31 + (fVar41 - fVar47) * fVar28 + fVar48) -
           fVar35) - fVar49;
  fVar50 = (float)(int)(uVar8 ^ uVar8 * 0x80000) * _LC2;
  fVar38 = (fVar49 - fVar32) * fVar33 + fVar32 * fVar36 + (fVar35 - fVar37) * fVar29 + fVar38;
  fVar35 = (float)(int)(uVar27 ^ uVar27 * 0x80000) * _LC2;
  fVar47 = fVar50 - fVar35;
  iVar1 = (uVar23 ^ uVar2) * 0x27d4eb2d;
  uVar14 = iVar1 * iVar1;
  iVar1 = (uVar24 ^ uVar2) * 0x27d4eb2d;
  iVar5 = (uVar19 ^ uVar2) * 0x27d4eb2d;
  uVar27 = iVar1 * iVar1;
  uVar13 = iVar5 * iVar5;
  iVar1 = (uVar20 ^ uVar2) * 0x27d4eb2d;
  fVar48 = ((float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2 - fVar55) - fVar47;
  uVar4 = iVar1 * iVar1;
  iVar1 = (uVar17 ^ uVar2) * 0x27d4eb2d;
  fVar49 = (float)(int)(uVar27 ^ uVar27 * 0x80000) * _LC2;
  fVar41 = (float)(int)(uVar13 ^ uVar13 * 0x80000) * _LC2;
  uVar27 = iVar1 * iVar1;
  iVar1 = (uVar21 ^ uVar2) * 0x27d4eb2d;
  fVar37 = (float)(int)(uVar27 ^ uVar27 * 0x80000) * _LC2;
  uVar27 = iVar1 * iVar1;
  fVar32 = fVar41 - fVar37;
  fVar39 = ((float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2 - fVar49) - fVar32;
  fVar37 = (fVar32 - fVar39) * fVar34 + fVar39 * fVar31 + (fVar49 - fVar41) * fVar28 + fVar37;
  iVar1 = (uVar12 ^ uVar2) * 0x27d4eb2d;
  fVar52 = (float)(int)(uVar27 ^ uVar27 * 0x80000) * _LC2;
  uVar27 = iVar1 * iVar1;
  iVar5 = (uVar10 ^ uVar2) * 0x27d4eb2d;
  iVar1 = (uVar9 ^ uVar2) * 0x27d4eb2d;
  uVar14 = iVar5 * iVar5;
  iVar5 = (uVar26 ^ uVar2) * 0x27d4eb2d;
  uVar17 = iVar1 * iVar1;
  fVar39 = (float)(int)(uVar27 ^ uVar27 * 0x80000) * _LC2;
  uVar13 = iVar5 * iVar5;
  iVar1 = (uVar3 ^ uVar2) * 0x27d4eb2d;
  uVar27 = iVar1 * iVar1;
  fVar54 = (float)(int)(uVar14 ^ uVar14 * 0x80000) * _LC2;
  iVar1 = (uVar2 ^ uVar7) * 0x27d4eb2d;
  uVar2 = iVar1 * iVar1;
  fVar32 = fVar54 - fVar39;
  fVar49 = ((float)(int)(uVar4 ^ uVar4 * 0x80000) * _LC2 - fVar52) - fVar32;
  fVar41 = (float)(int)(uVar13 ^ uVar13 * 0x80000) * _LC2;
  fVar51 = (float)(int)(uVar2 ^ uVar2 * 0x80000) * _LC2;
  fVar43 = fVar51 - fVar41;
  fVar39 = (fVar32 - fVar49) * fVar34 + fVar49 * fVar31 + (fVar52 - fVar54) * fVar28 + fVar39;
  fVar49 = (float)(int)(uVar17 ^ uVar17 * 0x80000) * _LC2;
  fVar32 = ((float)(int)(uVar27 ^ uVar27 * 0x80000) * _LC2 - fVar49) - fVar43;
  fVar41 = (fVar43 - fVar32) * fVar34 + fVar32 * fVar31 + (fVar49 - fVar51) * fVar28 + fVar41;
  fVar32 = fVar41 - fVar39;
  fVar28 = ((fVar31 * fVar48 + (fVar47 - fVar48) * fVar34 + (fVar55 - fVar50) * fVar28 + fVar35) -
           fVar37) - fVar32;
  fVar39 = (fVar37 - fVar41) * fVar29 + (fVar32 - fVar28) * fVar33 + fVar28 * fVar36 + fVar39;
  fVar28 = fVar39 - fVar38;
  fVar29 = (((fVar53 - fVar42) * fVar33 + fVar42 * fVar36 + (fVar44 - fVar46) * fVar29 + fVar45) -
           fVar40) - fVar28;
  return (fVar30 * fVar30 * fVar30 * fVar29 + (fVar28 - fVar29) * fVar30 * fVar30 +
          (fVar40 - fVar39) * fVar30 + fVar38) * __LC3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float fastnoiselite::FastNoiseLite::SingleCellular<float>(int, float, float, float) const [clone
   .isra.0] */

float fastnoiselite::FastNoiseLite::SingleCellular<float>
                (int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_EDX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int in_ESI;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float in_XMM3_Da;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar3 = _LC5;
  if (param_3 < 0.0) {
    fVar18 = param_3 - _LC5;
  }
  else {
    fVar18 = param_3 + _LC5;
  }
  iVar10 = (int)fVar18;
  if (param_4 < 0.0) {
    fVar18 = param_4 - _LC5;
  }
  else {
    fVar18 = param_4 + _LC5;
  }
  iVar14 = (int)fVar18;
  if (in_XMM3_Da < 0.0) {
    fVar18 = in_XMM3_Da - _LC5;
  }
  else {
    fVar18 = in_XMM3_Da + _LC5;
  }
  iVar7 = (int)fVar18;
  fVar17 = param_2 * __LC6;
  iVar13 = iVar10 + -1;
  iVar1 = iVar14 + -1;
  uVar6 = iVar13 * 0x1dde90c9;
  iVar2 = iVar7 + -1;
  uVar4 = iVar1 * 0x43c42e4d;
  uVar16 = iVar2 * 0x668b6e2f;
  fVar18 = _LC4;
  fVar20 = _LC4;
  if (param_1 == 2) {
    uVar8 = 0;
    do {
      uVar9 = uVar4;
      iVar15 = iVar1;
      do {
        fVar19 = fVar18;
        iVar11 = iVar2;
        uVar12 = uVar16;
        do {
          uVar5 = (uVar12 ^ uVar9 ^ in_EDX ^ uVar6) * 0x27d4eb2d;
          fVar22 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar5 & 0x3fc) * 4) * fVar17 +
                   ((float)iVar13 - param_3);
          fVar21 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar5 & 0x3fc | 2) * 4) * fVar17 +
                   ((float)iVar11 - in_XMM3_Da);
          fVar18 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar5 & 0x3fc | 1) * 4) * fVar17 +
                   ((float)iVar15 - param_4);
          if (fVar22 < 0.0) {
            fVar22 = (float)((uint)fVar22 ^ _LC7);
          }
          if (fVar18 < 0.0) {
            fVar18 = (float)((uint)fVar18 ^ _LC7);
          }
          if (fVar21 < 0.0) {
            fVar21 = (float)((uint)fVar21 ^ _LC7);
          }
          fVar21 = fVar21 + fVar18 + fVar22;
          if (fVar21 <= fVar20) {
            fVar20 = fVar21;
          }
          fVar18 = fVar19;
          if (fVar21 < fVar19) {
            uVar8 = uVar5;
            fVar18 = fVar21;
          }
          iVar11 = iVar11 + 1;
          if (fVar20 <= fVar19) {
            fVar20 = fVar19;
          }
          uVar12 = uVar12 + 0x668b6e2f;
          fVar19 = fVar18;
        } while (iVar7 + 2 != iVar11);
        iVar15 = iVar15 + 1;
        uVar9 = uVar9 + 0x43c42e4d;
      } while (iVar14 + 2 != iVar15);
      iVar13 = iVar13 + 1;
      uVar6 = uVar6 + 0x1dde90c9;
    } while (iVar13 != iVar10 + 2);
  }
  else if ((uint)param_1 < 3) {
    uVar8 = 0;
    do {
      uVar9 = uVar4;
      iVar15 = iVar1;
      do {
        fVar19 = fVar18;
        iVar11 = iVar2;
        uVar12 = uVar16;
        do {
          uVar5 = (uVar12 ^ uVar9 ^ in_EDX ^ uVar6) * 0x27d4eb2d;
          fVar22 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar5 & 0x3fc) * 4) * fVar17 +
                   ((float)iVar13 - param_3);
          fVar21 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar5 & 0x3fc | 2) * 4) * fVar17 +
                   ((float)iVar11 - in_XMM3_Da);
          fVar18 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar5 & 0x3fc | 1) * 4) * fVar17 +
                   ((float)iVar15 - param_4);
          fVar21 = fVar18 * fVar18 + fVar22 * fVar22 + fVar21 * fVar21;
          if (fVar21 <= fVar20) {
            fVar20 = fVar21;
          }
          fVar18 = fVar19;
          if (fVar21 < fVar19) {
            uVar8 = uVar5;
            fVar18 = fVar21;
          }
          iVar11 = iVar11 + 1;
          if (fVar20 <= fVar19) {
            fVar20 = fVar19;
          }
          uVar12 = uVar12 + 0x668b6e2f;
          fVar19 = fVar18;
        } while (iVar7 + 2 != iVar11);
        iVar15 = iVar15 + 1;
        uVar9 = uVar9 + 0x43c42e4d;
      } while (iVar15 != iVar14 + 2);
      iVar13 = iVar13 + 1;
      uVar6 = uVar6 + 0x1dde90c9;
    } while (iVar13 != iVar10 + 2);
    if ((param_1 == 0) && (0 < in_ESI)) {
      if (fVar18 < 0.0) {
        fVar18 = sqrtf(fVar18);
      }
      else {
        fVar18 = SQRT(fVar18);
      }
      if (in_ESI == 1) goto switchD_001089db_caseD_1;
      if (fVar20 < 0.0) {
        fVar20 = sqrtf(fVar20);
      }
      else {
        fVar20 = SQRT(fVar20);
      }
    }
  }
  else if (param_1 == 3) {
    uVar8 = 0;
    do {
      uVar9 = uVar4;
      iVar15 = iVar1;
      do {
        fVar19 = fVar18;
        iVar11 = iVar2;
        uVar12 = uVar16;
        do {
          uVar5 = (uVar9 ^ in_EDX ^ uVar6 ^ uVar12) * 0x27d4eb2d;
          fVar22 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar5 & 0x3fc) * 4) * fVar17 +
                   ((float)iVar13 - param_3);
          fVar21 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar5 & 0x3fc | 2) * 4) * fVar17 +
                   ((float)iVar11 - in_XMM3_Da);
          fVar18 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar5 & 0x3fc | 1) * 4) * fVar17 +
                   ((float)iVar15 - param_4);
          fVar21 = fVar18 * fVar18 + fVar22 * fVar22 + fVar21 * fVar21 +
                   (float)(((uint)fVar21 ^ _LC7) & -(uint)(fVar21 < 0.0) |
                          ~-(uint)(fVar21 < 0.0) & (uint)fVar21) +
                   (float)(((uint)fVar22 ^ _LC7) & -(uint)(fVar22 < 0.0) |
                          ~-(uint)(fVar22 < 0.0) & (uint)fVar22) +
                   (float)(((uint)fVar18 ^ _LC7) & -(uint)(fVar18 < 0.0) |
                          ~-(uint)(fVar18 < 0.0) & (uint)fVar18);
          if (fVar21 <= fVar20) {
            fVar20 = fVar21;
          }
          fVar18 = fVar19;
          if (fVar21 < fVar19) {
            uVar8 = uVar5;
            fVar18 = fVar21;
          }
          iVar11 = iVar11 + 1;
          if (fVar20 <= fVar19) {
            fVar20 = fVar19;
          }
          uVar12 = uVar12 + 0x668b6e2f;
          fVar19 = fVar18;
        } while (iVar7 + 2 != iVar11);
        uVar9 = uVar9 + 0x43c42e4d;
        iVar15 = iVar15 + 1;
      } while (iVar15 != iVar14 + 2);
      iVar13 = iVar13 + 1;
      uVar6 = uVar6 + 0x1dde90c9;
    } while (iVar10 + 2 != iVar13);
  }
  else {
    uVar8 = 0;
  }
  switch(in_ESI) {
  case 0:
    return (float)(int)uVar8 * _LC2;
  case 3:
    return (fVar18 + fVar20) * fVar3 - _LC8;
  case 4:
    fVar20 = fVar20 - fVar18;
  case 2:
    fVar20 = fVar20 - _LC8;
    break;
  case 5:
    fVar18 = fVar18 * fVar20 * fVar3;
  case 1:
switchD_001089db_caseD_1:
    return fVar18 - _LC8;
  case 6:
    return fVar18 / fVar20 - _LC8;
  default:
    fVar20 = 0.0;
  }
  return fVar20;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float fastnoiselite::FastNoiseLite::GenNoiseSingle<float>(int, float, float) const [clone
   .isra.0] */

float fastnoiselite::FastNoiseLite::GenNoiseSingle<float>(int param_1,float param_2,float param_3)

{
  int iVar1;
  uint in_ECX;
  uint uVar2;
  int in_EDX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int in_ESI;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float in_XMM2_Da;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  fVar17 = _LC5;
  switch(param_1) {
  case 0:
    fVar18 = 0.0;
    iVar11 = (int)param_3 - (uint)(param_3 < 0.0);
    iVar4 = (int)in_XMM2_Da - (uint)(in_XMM2_Da < 0.0);
    uVar2 = iVar11 * 0x1dde90c9;
    fVar17 = param_3 - (float)iVar11;
    uVar12 = iVar4 * 0x43c42e4d;
    fVar19 = in_XMM2_Da - (float)iVar4;
    fVar21 = (fVar17 + fVar19) * _LC9;
    fVar17 = fVar17 - fVar21;
    fVar19 = fVar19 - fVar21;
    fVar23 = (_LC5 - fVar17 * fVar17) - fVar19 * fVar19;
    if (0.0 < fVar23) {
      uVar5 = (in_ECX ^ uVar2 ^ uVar12) * 0x27d4eb2d;
      uVar5 = ((int)uVar5 >> 0xf ^ uVar5) & 0xfe;
      fVar18 = (*(float *)(Lookup<float>::Gradients2D + (ulong)(uVar5 | 1) * 4) * fVar19 +
               *(float *)(Lookup<float>::Gradients2D + (ulong)uVar5 * 4) * fVar17) *
               fVar23 * fVar23 * fVar23 * fVar23;
    }
    fVar20 = 0.0;
    fVar21 = fVar21 * _LC10 + (fVar23 - __LC11);
    if (0.0 < fVar21) {
      uVar5 = (uVar2 + 0x1dde90c9 ^ in_ECX ^ uVar12 + 0x43c42e4d) * 0x27d4eb2d;
      uVar5 = ((int)uVar5 >> 0xf ^ uVar5) & 0xfe;
      fVar20 = ((fVar19 - _LC12) * *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar5 | 1) * 4) +
               (fVar17 - _LC12) * *(float *)(Lookup<float>::Gradients2D + (ulong)uVar5 * 4)) *
               fVar21 * fVar21 * fVar21 * fVar21;
    }
    if (fVar19 <= fVar17) {
      fVar17 = fVar17 - _LC13;
      fVar19 = fVar19 + _LC9;
      fVar23 = (_LC5 - fVar17 * fVar17) - fVar19 * fVar19;
      fVar21 = 0.0;
      if (fVar23 <= 0.0) goto LAB_0010947b;
      fVar23 = fVar23 * fVar23;
      uVar12 = (in_ECX ^ uVar2 + 0x1dde90c9 ^ uVar12) * 0x27d4eb2d;
      uVar2 = (int)uVar12 >> 0xf;
    }
    else {
      fVar17 = fVar17 + _LC9;
      fVar19 = fVar19 - _LC13;
      fVar23 = (_LC5 - fVar17 * fVar17) - fVar19 * fVar19;
      fVar21 = 0.0;
      if (fVar23 <= 0.0) goto LAB_0010947b;
      fVar23 = fVar23 * fVar23;
      uVar2 = (uVar2 ^ in_ECX ^ uVar12 + 0x43c42e4d) * 0x27d4eb2d;
      uVar12 = (int)uVar2 >> 0xf;
    }
    uVar12 = (uVar12 ^ uVar2) & 0xfe;
    fVar21 = (fVar19 * *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar12 | 1) * 4) +
             fVar17 * *(float *)(Lookup<float>::Gradients2D + (ulong)uVar12 * 4)) * fVar23 * fVar23;
LAB_0010947b:
    return (fVar20 + fVar18 + fVar21) * __LC14;
  case 1:
    iVar11 = (int)param_3 - (uint)(param_3 < 0.0);
    iVar4 = (int)in_XMM2_Da - (uint)(in_XMM2_Da < 0.0);
    uVar13 = iVar11 * 0x1dde90c9;
    fVar19 = param_3 - (float)iVar11;
    uVar3 = in_ECX ^ uVar13;
    uVar2 = iVar4 * 0x43c42e4d;
    fVar21 = in_XMM2_Da - (float)iVar4;
    uVar12 = uVar2 + 0x43c42e4d;
    uVar5 = (uVar2 ^ uVar3) * 0x27d4eb2d;
    fVar25 = (fVar19 + fVar21) * _LC9;
    uVar5 = ((int)uVar5 >> 0xf ^ uVar5) & 0xfe;
    fVar18 = fVar19 - fVar25;
    fVar17 = fVar21 - fVar25;
    uVar7 = uVar13 + 0x1dde90c9 ^ in_ECX;
    uVar9 = (uVar12 ^ uVar7) * 0x27d4eb2d;
    uVar9 = ((int)uVar9 >> 0xf ^ uVar9) & 0xfe;
    fVar23 = (_LC15 - fVar18 * fVar18) - fVar17 * fVar17;
    fVar20 = _LC10 * fVar25 + (fVar23 - __LC11);
    fVar20 = fVar20 * fVar20;
    fVar23 = ((fVar17 - _LC12) * *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar9 | 1) * 4) +
             (fVar18 - _LC12) * *(float *)(Lookup<float>::Gradients2D + (ulong)uVar9 * 4)) *
             fVar20 * fVar20 +
             (*(float *)(Lookup<float>::Gradients2D + (ulong)(uVar5 | 1) * 4) * fVar17 +
             *(float *)(Lookup<float>::Gradients2D + (ulong)uVar5 * 4) * fVar18) *
             fVar23 * fVar23 * fVar23 * fVar23;
    fVar20 = fVar19 - fVar21;
    if (fVar25 <= _LC9) {
      if (fVar19 + fVar20 < 0.0) {
        fVar22 = fVar18 + _LC13;
        fVar25 = fVar17 - _LC9;
        fVar19 = (_LC15 - fVar22 * fVar22) - fVar25 * fVar25;
        if (0.0 < fVar19) {
          fVar19 = fVar19 * fVar19;
          uVar5 = (in_ECX ^ uVar13 + 0xe2216f37 ^ uVar2) * 0x27d4eb2d;
          uVar5 = uVar5 ^ (int)uVar5 >> 0xf;
          goto LAB_00109b68;
        }
      }
      else {
        fVar22 = fVar18 - _LC13;
        fVar25 = fVar17 + _LC9;
        fVar19 = (_LC15 - fVar22 * fVar22) - fVar25 * fVar25;
        if (0.0 < fVar19) {
          fVar19 = fVar19 * fVar19;
          uVar5 = (uVar7 ^ uVar2) * 0x27d4eb2d;
          uVar5 = (int)uVar5 >> 0xf ^ uVar5;
LAB_00109b68:
          fVar23 = fVar23 + (fVar25 * *(float *)(Lookup<float>::Gradients2D +
                                                (ulong)(uVar5 & 0xfe | 1) * 4) +
                            fVar22 * *(float *)(Lookup<float>::Gradients2D +
                                               (ulong)(uVar5 & 0xfe) * 4)) * fVar19 * fVar19;
        }
      }
      if (fVar21 < fVar20) {
        fVar18 = fVar18 - _LC9;
        fVar17 = _LC13 + fVar17;
        fVar19 = (_LC15 - fVar18 * fVar18) - fVar17 * fVar17;
        if (0.0 < fVar19) {
          uVar12 = (uVar2 + 0xbc3bd1b3 ^ uVar3) * 0x27d4eb2d;
          uVar12 = (uVar12 ^ (int)uVar12 >> 0xf) & 0xfe;
          fVar23 = fVar23 + (fVar17 * *(float *)(Lookup<float>::Gradients2D +
                                                (ulong)(uVar12 | 1) * 4) +
                            fVar18 * *(float *)(Lookup<float>::Gradients2D + (ulong)uVar12 * 4)) *
                            fVar19 * fVar19 * fVar19 * fVar19;
        }
        goto LAB_00109734;
      }
      fVar18 = fVar18 + _LC9;
      fVar17 = fVar17 - _LC13;
      fVar19 = (_LC15 - fVar18 * fVar18) - fVar17 * fVar17;
      if (fVar19 <= 0.0) goto LAB_00109734;
      fVar19 = fVar19 * fVar19;
      uVar12 = (uVar12 ^ uVar3) * 0x27d4eb2d;
      uVar12 = (int)uVar12 >> 0xf ^ uVar12;
    }
    else {
      if (fVar19 + fVar20 <= _LC8) {
        fVar22 = fVar18 + _LC9;
        fVar25 = fVar17 - _LC13;
        fVar19 = (_LC15 - fVar22 * fVar22) - fVar25 * fVar25;
        if (0.0 < fVar19) {
          fVar19 = fVar19 * fVar19;
          uVar12 = (uVar3 ^ uVar12) * 0x27d4eb2d;
          uVar12 = (int)uVar12 >> 0xf ^ uVar12;
          goto LAB_0010968c;
        }
      }
      else {
        fVar22 = fVar18 - __LC16;
        fVar25 = fVar17 - _LC17;
        fVar19 = (_LC15 - fVar22 * fVar22) - fVar25 * fVar25;
        if (0.0 < fVar19) {
          fVar19 = fVar19 * fVar19;
          uVar12 = (uVar13 + 0x3bbd2192 ^ in_ECX ^ uVar12) * 0x27d4eb2d;
          uVar12 = (int)uVar12 >> 0xf ^ uVar12;
LAB_0010968c:
          fVar23 = fVar23 + (fVar25 * *(float *)(Lookup<float>::Gradients2D +
                                                (ulong)(uVar12 & 0xfe | 1) * 4) +
                            fVar22 * *(float *)(Lookup<float>::Gradients2D +
                                               (ulong)(uVar12 & 0xfe) * 4)) * fVar19 * fVar19;
        }
      }
      if (fVar21 - fVar20 <= _LC8) {
        fVar18 = fVar18 - _LC13;
        fVar17 = fVar17 + _LC9;
        fVar19 = (_LC15 - fVar18 * fVar18) - fVar17 * fVar17;
        if (fVar19 <= 0.0) goto LAB_00109734;
        fVar19 = fVar19 * fVar19;
        uVar12 = (uVar7 ^ uVar2) * 0x27d4eb2d;
        uVar12 = (int)uVar12 >> 0xf ^ uVar12;
      }
      else {
        fVar18 = fVar18 - _LC17;
        fVar17 = fVar17 - __LC16;
        fVar19 = (_LC15 - fVar18 * fVar18) - fVar17 * fVar17;
        if (fVar19 <= 0.0) goto LAB_00109734;
        fVar19 = fVar19 * fVar19;
        uVar12 = (uVar2 + 0x87885c9a ^ uVar7) * 0x27d4eb2d;
        uVar12 = (int)uVar12 >> 0xf ^ uVar12;
      }
    }
    fVar23 = fVar23 + (fVar17 * *(float *)(Lookup<float>::Gradients2D +
                                          (ulong)(uVar12 & 0xfe | 1) * 4) +
                      fVar18 * *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar12 & 0xfe) * 4))
                      * fVar19 * fVar19;
LAB_00109734:
    return fVar23 * __LC18;
  case 2:
    break;
  case 3:
    iVar4 = (int)param_3 - (uint)(param_3 < 0.0);
    iVar11 = (int)in_XMM2_Da - (uint)(in_XMM2_Da < 0.0);
    uVar12 = iVar4 * 0x1dde90c9;
    fVar17 = param_3 - (float)iVar4;
    uVar2 = uVar12 ^ in_ECX;
    uVar5 = iVar11 * 0x43c42e4d;
    uVar13 = uVar12 + 0x1dde90c9 ^ in_ECX;
    fVar19 = in_XMM2_Da - (float)iVar11;
    uVar12 = (uVar5 ^ uVar2) * 0x27d4eb2d;
    uVar9 = (uVar5 ^ uVar13) * 0x27d4eb2d;
    uVar2 = (uVar5 + 0x43c42e4d ^ uVar2) * 0x27d4eb2d;
    uVar12 = ((int)uVar12 >> 0xf ^ uVar12) & 0xfe;
    uVar9 = ((int)uVar9 >> 0xf ^ uVar9) & 0xfe;
    uVar5 = (uVar13 ^ uVar5 + 0x43c42e4d) * 0x27d4eb2d;
    fVar21 = ((fVar17 * _LC20 - _LC21) * fVar17 + _LC22) * fVar17 * fVar17 * fVar17;
    fVar18 = *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar12 | 1) * 4) * fVar19 +
             *(float *)(Lookup<float>::Gradients2D + (ulong)uVar12 * 4) * fVar17;
    uVar12 = ((int)uVar5 >> 0xf ^ uVar5) & 0xfe;
    uVar2 = ((int)uVar2 >> 0xf ^ uVar2) & 0xfe;
    fVar18 = ((*(float *)(Lookup<float>::Gradients2D + (ulong)(uVar9 | 1) * 4) * fVar19 +
              *(float *)(Lookup<float>::Gradients2D + (ulong)uVar9 * 4) * (fVar17 - _LC8)) - fVar18)
             * fVar21 + fVar18;
    fVar23 = *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar2 | 1) * 4) * (fVar19 - _LC8) +
             fVar17 * *(float *)(Lookup<float>::Gradients2D + (ulong)uVar2 * 4);
    return ((((((fVar19 - _LC8) * *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar12 | 1) * 4) +
               (fVar17 - _LC8) * *(float *)(Lookup<float>::Gradients2D + (ulong)uVar12 * 4)) -
              fVar23) * fVar21 + fVar23) - fVar18) *
            fVar19 * fVar19 * fVar19 * ((_LC20 * fVar19 - _LC21) * fVar19 + _LC22) + fVar18) *
           __LC23;
  case 4:
    iVar4 = (int)param_3 - (uint)(param_3 < 0.0);
    iVar11 = (int)in_XMM2_Da - (uint)(in_XMM2_Da < 0.0);
    uVar9 = iVar4 * 0x1dde90c9;
    fVar19 = param_3 - (float)iVar4;
    uVar3 = iVar11 * 0x43c42e4d;
    uVar8 = uVar9 + 0x1dde90c9 ^ in_ECX;
    uVar14 = uVar9 + 0x3bbd2192 ^ in_ECX;
    fVar26 = fVar19 * fVar19;
    uVar12 = uVar3 + 0x87885c9a;
    uVar2 = uVar3 + 0x43c42e4d;
    uVar5 = uVar3 + 0xbc3bd1b3;
    fVar18 = in_XMM2_Da - (float)iVar11;
    iVar11 = (uVar12 ^ uVar8) * 0x27d4eb2d;
    iVar4 = (uVar12 ^ uVar14) * 0x27d4eb2d;
    fVar29 = fVar19 * fVar26;
    uVar15 = iVar11 * iVar11;
    uVar7 = iVar4 * iVar4;
    uVar16 = in_ECX ^ uVar9;
    uVar13 = uVar9 + 0xe2216f37 ^ in_ECX;
    iVar11 = (uVar12 ^ uVar16) * 0x27d4eb2d;
    iVar4 = (uVar12 ^ uVar13) * 0x27d4eb2d;
    fVar24 = (float)(int)(uVar15 ^ uVar15 * 0x80000) * _LC2;
    uVar9 = iVar11 * iVar11;
    uVar12 = iVar4 * iVar4;
    iVar4 = (uVar2 ^ uVar14) * 0x27d4eb2d;
    fVar27 = (float)(int)(uVar9 ^ uVar9 * 0x80000) * _LC2;
    fVar28 = (float)(int)(uVar12 ^ uVar12 * 0x80000) * _LC2;
    uVar12 = iVar4 * iVar4;
    iVar4 = (uVar2 ^ uVar8) * 0x27d4eb2d;
    fVar17 = fVar28 - fVar27;
    uVar15 = iVar4 * iVar4;
    fVar22 = ((float)(int)(uVar7 ^ uVar7 * 0x80000) * _LC2 - fVar24) - fVar17;
    iVar4 = (uVar3 ^ uVar14) * 0x27d4eb2d;
    uVar9 = iVar4 * iVar4;
    iVar4 = (uVar2 ^ uVar13) * 0x27d4eb2d;
    iVar11 = (uVar2 ^ uVar16) * 0x27d4eb2d;
    uVar2 = iVar4 * iVar4;
    fVar20 = (float)(int)(uVar15 ^ uVar15 * 0x80000) * _LC2;
    uVar7 = iVar11 * iVar11;
    fVar23 = (float)(int)(uVar7 ^ uVar7 * 0x80000) * _LC2;
    iVar4 = (uVar3 ^ uVar8) * 0x27d4eb2d;
    fVar25 = (float)(int)(uVar2 ^ uVar2 * 0x80000) * _LC2;
    uVar2 = iVar4 * iVar4;
    fVar21 = fVar25 - fVar23;
    fVar30 = ((float)(int)(uVar12 ^ uVar12 * 0x80000) * _LC2 - fVar20) - fVar21;
    fVar23 = (fVar21 - fVar30) * fVar26 + fVar30 * fVar29 + (fVar20 - fVar25) * fVar19 + fVar23;
    iVar4 = (uVar3 ^ uVar13) * 0x27d4eb2d;
    iVar11 = (uVar3 ^ uVar16) * 0x27d4eb2d;
    fVar30 = (float)(int)(uVar2 ^ uVar2 * 0x80000) * _LC2;
    uVar12 = iVar11 * iVar11;
    uVar2 = iVar4 * iVar4;
    iVar4 = (uVar14 ^ uVar5) * 0x27d4eb2d;
    fVar20 = (float)(int)(uVar12 ^ uVar12 * 0x80000) * _LC2;
    iVar11 = (uVar8 ^ uVar5) * 0x27d4eb2d;
    uVar12 = iVar4 * iVar4;
    iVar4 = (uVar16 ^ uVar5) * 0x27d4eb2d;
    fVar31 = (float)(int)(uVar2 ^ uVar2 * 0x80000) * _LC2;
    uVar7 = iVar11 * iVar11;
    uVar3 = iVar4 * iVar4;
    fVar32 = fVar31 - fVar20;
    iVar4 = (uVar5 ^ uVar13) * 0x27d4eb2d;
    fVar21 = ((float)(int)(uVar9 ^ uVar9 * 0x80000) * _LC2 - fVar30) - fVar32;
    uVar2 = iVar4 * iVar4;
    fVar25 = (float)(int)(uVar3 ^ uVar3 * 0x80000) * _LC2;
    fVar33 = (float)(int)(uVar2 ^ uVar2 * 0x80000) * _LC2;
    fVar20 = fVar21 * fVar29 + (fVar32 - fVar21) * fVar26 + (fVar30 - fVar31) * fVar19 + fVar20;
    fVar31 = (float)(int)(uVar7 ^ uVar7 * 0x80000) * _LC2;
    fVar21 = fVar33 - fVar25;
    fVar30 = ((float)(int)(uVar12 ^ uVar12 * 0x80000) * _LC2 - fVar31) - fVar21;
    fVar25 = (fVar21 - fVar30) * fVar26 + fVar30 * fVar29 + (fVar31 - fVar33) * fVar19 + fVar25;
    fVar21 = fVar25 - fVar20;
    fVar17 = (((fVar17 - fVar22) * fVar26 + fVar22 * fVar29 + (fVar24 - fVar28) * fVar19 + fVar27) -
             fVar23) - fVar21;
    return ((fVar23 - fVar25) * fVar18 +
            fVar18 * fVar18 * fVar18 * fVar17 + (fVar21 - fVar17) * fVar18 * fVar18 + fVar20) *
           __LC24;
  case 5:
    iVar11 = (int)param_3 - (uint)(param_3 < 0.0);
    iVar4 = (int)in_XMM2_Da - (uint)(in_XMM2_Da < 0.0);
    uVar12 = iVar11 * 0x1dde90c9;
    fVar17 = param_3 - (float)iVar11;
    uVar13 = uVar12 ^ in_ECX;
    uVar9 = uVar12 + 0x1dde90c9 ^ in_ECX;
    fVar17 = (_LC1 - (fVar17 + fVar17)) * fVar17 * fVar17;
    uVar12 = iVar4 * 0x43c42e4d;
    fVar18 = in_XMM2_Da - (float)iVar4;
    iVar11 = (uVar12 ^ uVar13) * 0x27d4eb2d;
    iVar4 = (uVar12 ^ uVar9) * 0x27d4eb2d;
    uVar5 = iVar11 * iVar11;
    uVar2 = iVar4 * iVar4;
    iVar4 = (uVar9 ^ uVar12 + 0x43c42e4d) * 0x27d4eb2d;
    iVar11 = (uVar12 + 0x43c42e4d ^ uVar13) * 0x27d4eb2d;
    fVar19 = (float)(int)(uVar5 ^ uVar5 * 0x80000) * _LC2;
    uVar12 = iVar4 * iVar4;
    uVar5 = iVar11 * iVar11;
    fVar21 = (float)(int)(uVar5 ^ uVar5 * 0x80000) * _LC2;
    fVar19 = ((float)(int)(uVar2 ^ uVar2 * 0x80000) * _LC2 - fVar19) * fVar17 + fVar19;
    return ((fVar17 * ((float)(int)(uVar12 ^ uVar12 * 0x80000) * _LC2 - fVar21) + fVar21) - fVar19)
           * fVar18 * fVar18 * (_LC1 - (fVar18 + fVar18)) + fVar19;
  default:
    return 0.0;
  }
  if (param_3 < 0.0) {
    fVar19 = param_3 - _LC5;
  }
  else {
    fVar19 = param_3 + _LC5;
  }
  iVar4 = (int)fVar19;
  if (in_XMM2_Da < 0.0) {
    fVar19 = in_XMM2_Da - _LC5;
  }
  else {
    fVar19 = in_XMM2_Da + _LC5;
  }
  iVar6 = (int)fVar19;
  iVar11 = iVar4 + -1;
  iVar1 = iVar6 + -1;
  fVar21 = param_2 * __LC19;
  uVar12 = iVar11 * 0x1dde90c9;
  uVar2 = iVar1 * 0x43c42e4d;
  fVar19 = _LC4;
  fVar18 = _LC4;
  if (in_ESI == 2) {
    uVar5 = 0;
    do {
      iVar10 = iVar1;
      uVar9 = uVar2;
      fVar23 = fVar19;
      do {
        uVar13 = (uVar9 ^ in_ECX ^ uVar12) * 0x27d4eb2d;
        fVar19 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar13 & 0x1fe) * 4) * fVar21 +
                 ((float)iVar11 - param_3);
        fVar20 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar13 & 0x1fe | 1) * 4) * fVar21 +
                 ((float)iVar10 - in_XMM2_Da);
        if (fVar19 < 0.0) {
          fVar19 = (float)((uint)fVar19 ^ _LC7);
        }
        if (fVar20 < 0.0) {
          fVar20 = (float)((uint)fVar20 ^ _LC7);
        }
        fVar20 = fVar20 + fVar19;
        if (fVar20 <= fVar18) {
          fVar18 = fVar20;
        }
        fVar19 = fVar23;
        if (fVar20 < fVar23) {
          uVar5 = uVar13;
          fVar19 = fVar20;
        }
        iVar10 = iVar10 + 1;
        if (fVar18 <= fVar23) {
          fVar18 = fVar23;
        }
        uVar9 = uVar9 + 0x43c42e4d;
        fVar23 = fVar19;
      } while (iVar6 + 2 != iVar10);
      iVar11 = iVar11 + 1;
      uVar12 = uVar12 + 0x1dde90c9;
    } while (iVar4 + 2 != iVar11);
LAB_00109d5d:
    switch(in_EDX) {
    case 0:
      fVar19 = (float)(int)uVar5 * _LC2;
      break;
    case 3:
      fVar19 = (fVar19 + fVar18) * fVar17 - _LC8;
      break;
    case 4:
      fVar18 = fVar18 - fVar19;
    case 2:
      fVar19 = fVar18 - _LC8;
      break;
    case 5:
      fVar19 = fVar19 * fVar18 * fVar17 - _LC8;
      break;
    case 6:
      fVar19 = fVar19 / fVar18;
    case 1:
switchD_00109d76_caseD_1:
      fVar19 = fVar19 - _LC8;
      break;
    default:
      return 0.0;
    }
    return fVar19;
  }
  if (in_ESI == 3) {
    uVar5 = 0;
    do {
      iVar10 = iVar1;
      uVar9 = uVar2;
      fVar23 = fVar19;
      do {
        uVar13 = (uVar9 ^ in_ECX ^ uVar12) * 0x27d4eb2d;
        fVar20 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar13 & 0x1fe) * 4) * fVar21 +
                 ((float)iVar11 - param_3);
        fVar19 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar13 & 0x1fe | 1) * 4) * fVar21 +
                 ((float)iVar10 - in_XMM2_Da);
        fVar20 = fVar19 * fVar19 + fVar20 * fVar20 +
                 (float)(((uint)fVar19 ^ _LC7) & -(uint)(fVar19 < 0.0) |
                        ~-(uint)(fVar19 < 0.0) & (uint)fVar19) +
                 (float)(((uint)fVar20 ^ _LC7) & -(uint)(fVar20 < 0.0) |
                        ~-(uint)(fVar20 < 0.0) & (uint)fVar20);
        if (fVar20 <= fVar18) {
          fVar18 = fVar20;
        }
        fVar19 = fVar23;
        if (fVar20 < fVar23) {
          uVar5 = uVar13;
          fVar19 = fVar20;
        }
        iVar10 = iVar10 + 1;
        if (fVar18 <= fVar23) {
          fVar18 = fVar23;
        }
        uVar9 = uVar9 + 0x43c42e4d;
        fVar23 = fVar19;
      } while (iVar10 != iVar6 + 2);
      iVar11 = iVar11 + 1;
      uVar12 = uVar12 + 0x1dde90c9;
    } while (iVar11 != iVar4 + 2);
    goto LAB_00109d5d;
  }
  uVar5 = 0;
  do {
    iVar10 = iVar1;
    uVar9 = uVar2;
    fVar23 = fVar19;
    do {
      uVar13 = (uVar9 ^ in_ECX ^ uVar12) * 0x27d4eb2d;
      fVar20 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar13 & 0x1fe) * 4) * fVar21 +
               ((float)iVar11 - param_3);
      fVar19 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar13 & 0x1fe | 1) * 4) * fVar21 +
               ((float)iVar10 - in_XMM2_Da);
      fVar20 = fVar19 * fVar19 + fVar20 * fVar20;
      if (fVar20 <= fVar18) {
        fVar18 = fVar20;
      }
      fVar19 = fVar23;
      if (fVar20 < fVar23) {
        uVar5 = uVar13;
        fVar19 = fVar20;
      }
      iVar10 = iVar10 + 1;
      if (fVar18 <= fVar23) {
        fVar18 = fVar23;
      }
      uVar9 = uVar9 + 0x43c42e4d;
      fVar23 = fVar19;
    } while (iVar6 + 2 != iVar10);
    iVar11 = iVar11 + 1;
    uVar12 = uVar12 + 0x1dde90c9;
  } while (iVar4 + 2 != iVar11);
  if ((in_ESI != 0) || (in_EDX < 1)) goto LAB_00109d5d;
  if (fVar19 < 0.0) {
    fVar19 = sqrtf(fVar19);
  }
  else {
    fVar19 = SQRT(fVar19);
  }
  if (in_EDX != 1) {
    if (fVar18 < 0.0) {
      fVar18 = sqrtf(fVar18);
    }
    else {
      fVar18 = SQRT(fVar18);
    }
    goto LAB_00109d5d;
  }
  goto switchD_00109d76_caseD_1;
}



/* void fastnoiselite::FastNoiseLite::SingleDomainWarpOpenSimplex2Gradient<float>(int, float, float,
   float, float, float, float&, float&, float&, bool) const [clone .isra.0] */

void fastnoiselite::FastNoiseLite::SingleDomainWarpOpenSimplex2Gradient<float>
               (int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float *param_7,float *param_8,float *param_9,bool param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar15 = param_4 * param_3;
  fVar16 = param_5 * param_3;
  fVar14 = param_3 * param_6;
  if (fVar15 < 0.0) {
    fVar11 = fVar15 - _LC5;
  }
  else {
    fVar11 = fVar15 + _LC5;
  }
  if (fVar16 < 0.0) {
    fVar12 = fVar16 - _LC5;
  }
  else {
    fVar12 = fVar16 + _LC5;
  }
  if (fVar14 < 0.0) {
    fVar13 = fVar14 - _LC5;
  }
  else {
    fVar13 = fVar14 + _LC5;
  }
  fVar22 = 0.0;
  uVar5 = param_1 + 0x13bc3d;
  fVar18 = 0.0;
  uVar8 = (int)fVar11 * 0x1dde90c9;
  fVar15 = fVar15 - (float)(int)fVar11;
  uVar7 = (int)fVar12 * 0x43c42e4d;
  fVar16 = fVar16 - (float)(int)fVar12;
  uVar6 = (int)fVar13 * 0x668b6e2f;
  fVar14 = fVar14 - (float)(int)fVar13;
  uVar2 = (int)((float)((uint)fVar15 ^ _LC7) - _LC8) | 1;
  uVar9 = (int)((float)((uint)fVar16 ^ _LC7) - _LC8) | 1;
  uVar3 = (int)((float)(_LC7 ^ (uint)fVar14) - _LC8) | 1;
  fVar13 = (float)(int)uVar2 * (float)((uint)fVar15 ^ _LC7);
  fVar21 = (float)(int)uVar3 * (float)(_LC7 ^ (uint)fVar14);
  fVar12 = (float)(int)uVar9 * (float)((uint)fVar16 ^ _LC7);
  fVar11 = (_LC25 - fVar15 * fVar15) - (fVar16 * fVar16 + fVar14 * fVar14);
  fVar17 = 0.0;
  do {
    if (0.0 < fVar11) {
      uVar1 = (param_1 ^ uVar8 ^ uVar7 ^ uVar6) * 0x27d4eb2d;
      fVar19 = fVar11 * fVar11 * fVar11 * fVar11;
      if (param_10) {
        fVar24 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar1 & 0x3fc) * 4);
        fVar23 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar1 & 0x3fc | 2) * 4);
        fVar20 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar1 & 0x3fc | 1) * 4);
      }
      else {
        uVar10 = uVar1 & 0xfc;
        uVar4 = (int)uVar1 >> 6 & 0x3fc;
        fVar23 = *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar10 | 1) * 4) * fVar16 +
                 *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar10 * 4) * fVar15 +
                 *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar10 | 2) * 4) * fVar14;
        fVar24 = *(float *)(Lookup<float>::RandVecs3D + (ulong)((int)uVar1 >> 6 & 0x3fc) * 4) *
                 fVar23;
        fVar20 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar4 | 1) * 4) * fVar23;
        fVar23 = fVar23 * *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar4 | 2) * 4);
      }
      fVar18 = fVar18 + fVar24 * fVar19;
      fVar17 = fVar17 + fVar20 * fVar19;
      fVar22 = fVar22 + fVar19 * fVar23;
    }
    fVar19 = _LC8 + fVar11;
    uVar1 = uVar6;
    uVar4 = uVar8;
    uVar10 = uVar7;
    if (fVar13 < fVar12) {
      if ((fVar12 <= fVar13) || (fVar12 < fVar21)) goto LAB_0010a316;
      uVar10 = uVar9 * -0x43c42e4d + uVar7;
      fVar16 = fVar16 + (float)(int)uVar9;
      fVar19 = fVar19 - (float)(int)(uVar9 * 2) * fVar16;
    }
    else if (fVar21 <= fVar13) {
      fVar15 = fVar15 + (float)(int)uVar2;
      fVar19 = fVar19 - (float)(int)(uVar2 * 2) * fVar15;
      uVar4 = uVar2 * -0x1dde90c9 + uVar8;
    }
    else {
LAB_0010a316:
      fVar14 = fVar14 + (float)(int)uVar3;
      fVar19 = fVar19 - (float)(int)(uVar3 * 2) * fVar14;
      uVar1 = uVar3 * -0x668b6e2f + uVar6;
    }
    if (0.0 < fVar19) {
      uVar1 = (uVar4 ^ uVar10 ^ param_1 ^ uVar1) * 0x27d4eb2d;
      fVar19 = fVar19 * fVar19 * fVar19 * fVar19;
      if (param_10) {
        fVar14 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar1 & 0x3fc) * 4);
        fVar15 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar1 & 0x3fc | 2) * 4);
        fVar16 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar1 & 0x3fc | 1) * 4);
      }
      else {
        uVar4 = uVar1 & 0xfc;
        uVar10 = (int)uVar1 >> 6 & 0x3fc;
        fVar15 = fVar16 * *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar4 | 1) * 4) +
                 fVar15 * *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar4 * 4) +
                 fVar14 * *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar4 | 2) * 4);
        fVar14 = *(float *)(Lookup<float>::RandVecs3D + (ulong)((int)uVar1 >> 6 & 0x3fc) * 4) *
                 fVar15;
        fVar16 = *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar10 | 1) * 4) * fVar15;
        fVar15 = fVar15 * *(float *)(Lookup<float>::RandVecs3D + (ulong)(uVar10 | 2) * 4);
      }
      fVar18 = fVar18 + fVar14 * fVar19;
      fVar17 = fVar17 + fVar16 * fVar19;
      fVar22 = fVar22 + fVar19 * fVar15;
    }
    if (param_1 == uVar5) {
      *param_7 = fVar18 * param_2 + *param_7;
      *param_8 = fVar17 * param_2 + *param_8;
      *param_9 = param_2 * fVar22 + *param_9;
      return;
    }
    param_1 = param_1 + 0x13bc3d;
    fVar13 = _LC5 - fVar13;
    fVar12 = _LC5 - fVar12;
    uVar8 = uVar8 + ((int)uVar2 >> 1 & 0x1dde90c9U);
    fVar21 = _LC5 - fVar21;
    uVar7 = uVar7 + ((int)uVar9 >> 1 & 0x43c42e4dU);
    fVar15 = (float)(int)uVar2;
    uVar2 = -uVar2;
    fVar14 = (float)(int)uVar3 * fVar21;
    uVar6 = uVar6 + ((int)uVar3 >> 1 & 0x668b6e2fU);
    fVar16 = (float)(int)uVar9;
    uVar9 = -uVar9;
    fVar15 = fVar15 * fVar13;
    fVar16 = fVar16 * fVar12;
    fVar11 = fVar11 + ((_LC26 - fVar13) - (fVar12 + fVar21));
    uVar3 = -uVar3;
  } while( true );
}



/* FastNoiseLite::_get_class_namev() const */

undefined8 * FastNoiseLite::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_0010a6e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a6e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FastNoiseLite");
      goto LAB_0010a74e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FastNoiseLite");
LAB_0010a74e:
  return &_get_class_namev()::_class_name_static;
}



/* FastNoiseLite::get_save_class() const */

FastNoiseLite * __thiscall FastNoiseLite::get_save_class(FastNoiseLite *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void fastnoiselite::FastNoiseLite::SingleDomainWarpSimplexGradient<float>(int, float, float,
   float, float, float&, float&, bool) const [clone .isra.0] */

void fastnoiselite::FastNoiseLite::SingleDomainWarpSimplexGradient<float>
               (int param_1,float param_2,float param_3,float param_4,float param_5,float *param_6,
               float *param_7,bool param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar8 = param_4 * param_3;
  fVar7 = param_3 * param_5;
  iVar1 = (int)fVar8 - (uint)(fVar8 < 0.0);
  iVar3 = (int)fVar7 - (uint)(fVar7 < 0.0);
  uVar2 = iVar1 * 0x1dde90c9;
  fVar8 = fVar8 - (float)iVar1;
  uVar4 = iVar3 * 0x43c42e4d;
  fVar7 = fVar7 - (float)iVar3;
  fVar6 = (fVar8 + fVar7) * _LC9;
  fVar8 = fVar8 - fVar6;
  fVar7 = fVar7 - fVar6;
  fVar11 = (_LC5 - fVar8 * fVar8) - fVar7 * fVar7;
  if (fVar11 <= 0.0) {
    fVar9 = 0.0;
    fVar10 = 0.0;
  }
  else {
    uVar5 = (uVar2 ^ param_1 ^ uVar4) * 0x27d4eb2d;
    fVar9 = fVar11 * fVar11 * fVar11 * fVar11;
    if (param_8) {
      fVar10 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar5 & 0x1fe) * 4);
      fVar12 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar5 & 0x1fe | 1) * 4);
    }
    else {
      fVar12 = *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar5 & 0xfe | 1) * 4) * fVar7 +
               *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar5 & 0xfe) * 4) * fVar8;
      fVar10 = *(float *)(Lookup<float>::RandVecs2D + (ulong)((int)uVar5 >> 7 & 0x1fe) * 4) * fVar12
      ;
      fVar12 = fVar12 * *(float *)(Lookup<float>::RandVecs2D +
                                  (ulong)((int)uVar5 >> 7 & 0x1feU | 1) * 4);
    }
    fVar10 = fVar10 * fVar9 + 0.0;
    fVar9 = fVar9 * fVar12 + 0.0;
  }
  fVar6 = fVar6 * _LC10 + (fVar11 - __LC11);
  if (0.0 < fVar6) {
    uVar5 = (uVar2 + 0x1dde90c9 ^ param_1 ^ uVar4 + 0x43c42e4d) * 0x27d4eb2d;
    fVar6 = fVar6 * fVar6 * fVar6 * fVar6;
    if (param_8) {
      fVar11 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar5 & 0x1fe) * 4);
      fVar12 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar5 & 0x1fe | 1) * 4);
    }
    else {
      fVar12 = (fVar7 - _LC12) *
               *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar5 & 0xfe | 1) * 4) +
               (fVar8 - _LC12) * *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar5 & 0xfe) * 4);
      fVar11 = *(float *)(Lookup<float>::RandVecs2D + (ulong)((int)uVar5 >> 7 & 0x1fe) * 4) * fVar12
      ;
      fVar12 = fVar12 * *(float *)(Lookup<float>::RandVecs2D +
                                  (ulong)((int)uVar5 >> 7 & 0x1feU | 1) * 4);
    }
    fVar10 = fVar10 + fVar11 * fVar6;
    fVar9 = fVar9 + fVar6 * fVar12;
  }
  if (fVar7 <= fVar8) {
    fVar8 = fVar8 - _LC13;
    fVar7 = fVar7 + _LC9;
    fVar6 = (_LC5 - fVar8 * fVar8) - fVar7 * fVar7;
    if (fVar6 <= 0.0) goto LAB_0010aa64;
    uVar2 = (uVar2 + 0x1dde90c9 ^ param_1 ^ uVar4) * 0x27d4eb2d;
    fVar6 = fVar6 * fVar6 * fVar6 * fVar6;
    if (!param_8) goto LAB_0010aad7;
LAB_0010aa33:
    fVar7 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar2 & 0x1fe) * 4);
    fVar8 = *(float *)(Lookup<float>::RandVecs2D + (ulong)(uVar2 & 0x1fe | 1) * 4);
  }
  else {
    fVar8 = fVar8 + _LC9;
    fVar7 = fVar7 - _LC13;
    fVar6 = (_LC5 - fVar8 * fVar8) - fVar7 * fVar7;
    if (fVar6 <= 0.0) goto LAB_0010aa64;
    uVar2 = (uVar2 ^ param_1 ^ uVar4 + 0x43c42e4d) * 0x27d4eb2d;
    fVar6 = fVar6 * fVar6 * fVar6 * fVar6;
    if (param_8) goto LAB_0010aa33;
LAB_0010aad7:
    fVar8 = fVar7 * *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar2 & 0xfe | 1) * 4) +
            fVar8 * *(float *)(Lookup<float>::Gradients2D + (ulong)(uVar2 & 0xfe) * 4);
    fVar7 = *(float *)(Lookup<float>::RandVecs2D + (ulong)((int)uVar2 >> 7 & 0x1fe) * 4) * fVar8;
    fVar8 = fVar8 * *(float *)(Lookup<float>::RandVecs2D + (ulong)((int)uVar2 >> 7 & 0x1feU | 1) * 4
                              );
  }
  fVar10 = fVar10 + fVar7 * fVar6;
  fVar9 = fVar9 + fVar6 * fVar8;
LAB_0010aa64:
  *param_6 = *param_6 + fVar10 * param_2;
  *param_7 = param_2 * fVar9 + *param_7;
  return;
}



/* float fastnoiselite::FastNoiseLite::SingleOpenSimplex2<float>(int, float, float, float) const
   [clone .isra.0] */

float fastnoiselite::FastNoiseLite::SingleOpenSimplex2<float>
                (int param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (param_2 < 0.0) {
    fVar11 = param_2 - _LC5;
  }
  else {
    fVar11 = param_2 + _LC5;
  }
  if (0.0 <= param_3) {
    fVar12 = param_3 + _LC5;
  }
  else {
    fVar12 = param_3 - _LC5;
  }
  if (param_4 < 0.0) {
    fVar13 = param_4 - _LC5;
  }
  else {
    fVar13 = param_4 + _LC5;
  }
  uVar8 = (int)fVar11 * 0x1dde90c9;
  iVar4 = 2;
  fVar19 = param_2 - (float)(int)fVar11;
  uVar7 = (int)fVar12 * 0x43c42e4d;
  fVar12 = param_3 - (float)(int)fVar12;
  uVar6 = (int)fVar13 * 0x668b6e2f;
  fVar14 = param_4 - (float)(int)fVar13;
  uVar2 = (int)(_LC29 - fVar19) | 1;
  uVar3 = (int)(_LC29 - fVar14) | 1;
  uVar9 = (int)(_LC29 - fVar12) | 1;
  fVar17 = (float)(int)uVar2 * (float)((uint)fVar19 ^ _LC7);
  fVar13 = (float)(int)uVar3 * (float)(_LC7 ^ (uint)fVar14);
  fVar18 = (float)(int)uVar9 * (float)((uint)fVar12 ^ _LC7);
  fVar16 = (_LC25 - fVar19 * fVar19) - (fVar12 * fVar12 + fVar14 * fVar14);
  fVar11 = 0.0;
  do {
    if (0.0 < fVar16) {
      uVar5 = (param_1 ^ uVar8 ^ uVar7 ^ uVar6) * 0x27d4eb2d;
      uVar5 = ((int)uVar5 >> 0xf ^ uVar5) & 0xfc;
      fVar11 = fVar11 + (*(float *)(Lookup<float>::Gradients3D + (ulong)(uVar5 | 1) * 4) * fVar12 +
                         *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar5 * 4) * fVar19 +
                        *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar5 | 2) * 4) * fVar14) *
                        fVar16 * fVar16 * fVar16 * fVar16;
    }
    fVar15 = fVar16 + _LC8;
    uVar5 = uVar6;
    uVar1 = uVar8;
    uVar10 = uVar7;
    if (fVar17 < fVar18) {
      if ((fVar18 <= fVar17) || (fVar18 < fVar13)) goto LAB_0010ae03;
      uVar10 = uVar9 * -0x43c42e4d + uVar7;
      fVar12 = fVar12 + (float)(int)uVar9;
      fVar15 = fVar15 - (float)(int)(uVar9 * 2) * fVar12;
    }
    else if (fVar13 <= fVar17) {
      fVar19 = fVar19 + (float)(int)uVar2;
      fVar15 = fVar15 - (float)(int)(uVar2 * 2) * fVar19;
      uVar1 = uVar2 * -0x1dde90c9 + uVar8;
    }
    else {
LAB_0010ae03:
      fVar14 = fVar14 + (float)(int)uVar3;
      fVar15 = fVar15 - (float)(int)(uVar3 * 2) * fVar14;
      uVar5 = uVar3 * -0x668b6e2f + uVar6;
    }
    if (0.0 < fVar15) {
      uVar5 = (uVar1 ^ uVar10 ^ param_1 ^ uVar5) * 0x27d4eb2d;
      uVar5 = (uVar5 ^ (int)uVar5 >> 0xf) & 0xfc;
      fVar11 = fVar11 + fVar15 * fVar15 * fVar15 * fVar15 *
                        (fVar12 * *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar5 | 1) * 4) +
                         fVar19 * *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar5 * 4) +
                        fVar14 * *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar5 | 2) * 4));
    }
    if (iVar4 == 1) {
      return fVar11 * _LC30;
    }
    param_1 = ~param_1;
    fVar17 = _LC5 - fVar17;
    fVar13 = _LC5 - fVar13;
    iVar4 = 1;
    uVar8 = uVar8 + ((int)uVar2 >> 1 & 0x1dde90c9U);
    fVar19 = (float)(int)uVar2;
    uVar2 = -uVar2;
    fVar18 = _LC5 - fVar18;
    fVar12 = (float)(int)uVar9;
    uVar7 = uVar7 + ((int)uVar9 >> 1 & 0x43c42e4dU);
    uVar9 = -uVar9;
    fVar19 = fVar19 * fVar17;
    uVar6 = uVar6 + ((int)uVar3 >> 1 & 0x668b6e2fU);
    fVar12 = fVar12 * fVar18;
    fVar14 = (float)(int)uVar3;
    uVar3 = -uVar3;
    fVar14 = fVar14 * fVar13;
    fVar16 = fVar16 + ((_LC26 - fVar17) - (fVar18 + fVar13));
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float fastnoiselite::FastNoiseLite::SinglePerlin<float>(int, float, float, float) const [clone
   .isra.0] */

float fastnoiselite::FastNoiseLite::SinglePerlin<float>
                (int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  iVar8 = (int)param_2 - (uint)(param_2 < 0.0);
  iVar3 = (int)param_3 - (uint)(param_3 < 0.0);
  iVar1 = (int)param_4 - (uint)(param_4 < 0.0);
  uVar9 = iVar8 * 0x1dde90c9;
  fVar19 = param_2 - (float)iVar8;
  uVar10 = uVar9 ^ param_1;
  uVar4 = iVar3 * 0x43c42e4d;
  uVar7 = uVar9 + 0x1dde90c9 ^ param_1;
  fVar16 = param_3 - (float)iVar3;
  uVar13 = uVar4 ^ uVar7;
  uVar5 = uVar4 ^ uVar10;
  uVar2 = iVar1 * 0x668b6e2f;
  uVar7 = uVar7 ^ uVar4 + 0x43c42e4d;
  uVar10 = uVar10 ^ uVar4 + 0x43c42e4d;
  fVar17 = param_4 - (float)iVar1;
  uVar4 = uVar2 + 0x668b6e2f;
  fVar24 = fVar19 - _LC8;
  fVar18 = fVar16 - _LC8;
  uVar6 = (uVar2 ^ uVar13) * 0x27d4eb2d;
  fVar23 = fVar17 - _LC8;
  uVar9 = (uVar2 ^ uVar5) * 0x27d4eb2d;
  uVar6 = ((int)uVar6 >> 0xf ^ uVar6) & 0xfc;
  uVar9 = ((int)uVar9 >> 0xf ^ uVar9) & 0xfc;
  fVar21 = ((fVar19 * _LC20 - _LC21) * fVar19 + _LC22) * fVar19 * fVar19 * fVar19;
  fVar20 = ((fVar16 * _LC20 - _LC21) * fVar16 + _LC22) * fVar16 * fVar16 * fVar16;
  fVar14 = *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar9 | 1) * 4) * fVar16 +
           *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar9 * 4) * fVar19 +
           *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar9 | 2) * 4) * fVar17;
  uVar9 = (uVar2 ^ uVar10) * 0x27d4eb2d;
  uVar2 = (uVar2 ^ uVar7) * 0x27d4eb2d;
  uVar11 = ((int)uVar2 >> 0xf ^ uVar2) & 0xfc;
  uVar12 = ((int)uVar9 >> 0xf ^ uVar9) & 0xfc;
  uVar9 = (uVar13 ^ uVar4) * 0x27d4eb2d;
  uVar10 = (uVar4 ^ uVar10) * 0x27d4eb2d;
  fVar14 = ((*(float *)(Lookup<float>::Gradients3D + (ulong)(uVar6 | 1) * 4) * fVar16 +
             *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar6 * 4) * fVar24 +
            *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar6 | 2) * 4) * fVar17) - fVar14) *
           fVar21 + fVar14;
  uVar9 = ((int)uVar9 >> 0xf ^ uVar9) & 0xfc;
  uVar2 = (uVar5 ^ uVar4) * 0x27d4eb2d;
  uVar2 = ((int)uVar2 >> 0xf ^ uVar2) & 0xfc;
  fVar22 = *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar12 | 1) * 4) * fVar18 +
           *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar12 * 4) * fVar19 +
           *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar12 | 2) * 4) * fVar17;
  fVar15 = *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar2 | 1) * 4) * fVar16 +
           *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar2 * 4) * fVar19 +
           *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar2 | 2) * 4) * fVar23;
  uVar4 = (uVar7 ^ uVar4) * 0x27d4eb2d;
  uVar2 = ((int)uVar4 >> 0xf ^ uVar4) & 0xfc;
  uVar4 = ((int)uVar10 >> 0xf ^ uVar10) & 0xfc;
  fVar15 = ((*(float *)(Lookup<float>::Gradients3D + (ulong)(uVar9 | 2) * 4) * fVar23 +
            fVar16 * *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar9 | 1) * 4) +
            *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar9 * 4) * fVar24) - fVar15) *
           fVar21 + fVar15;
  fVar16 = *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar4 | 1) * 4) * fVar18 +
           fVar19 * *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar4 * 4) +
           *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar4 | 2) * 4) * fVar23;
  fVar14 = ((((*(float *)(Lookup<float>::Gradients3D + (ulong)(uVar11 | 1) * 4) * fVar18 +
               *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar11 * 4) * fVar24 +
              *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar11 | 2) * 4) * fVar17) - fVar22) *
             fVar21 + fVar22) - fVar14) * fVar20 + fVar14;
  return (((((((fVar18 * *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar2 | 1) * 4) +
                fVar24 * *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar2 * 4) +
               fVar23 * *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar2 | 2) * 4)) - fVar16) *
              fVar21 + fVar16) - fVar15) * fVar20 + fVar15) - fVar14) *
          ((_LC20 * fVar17 - _LC21) * fVar17 + _LC22) * fVar17 * fVar17 * fVar17 + fVar14) * __LC31;
}



/* FastNoiseLite::get_class() const */

void FastNoiseLite::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC32;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 3;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b62c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b62c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC32;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b7ac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b7ac:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC32;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 9;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b92c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b92c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC32;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010baac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010baac:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float fastnoiselite::FastNoiseLite::SingleOpenSimplex2S<float>(int, float, float, float) const
   [clone .isra.0] */

float fastnoiselite::FastNoiseLite::SingleOpenSimplex2S<float>
                (int param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  uVar18 = param_1 + 0x13bc3d;
  iVar4 = (int)param_2 - (uint)(param_2 < 0.0);
  iVar5 = (int)param_3 - (uint)(param_3 < 0.0);
  fVar22 = param_2 - (float)iVar4;
  iVar10 = (int)param_4 - (uint)(param_4 < 0.0);
  iVar4 = iVar4 * 0x1dde90c9;
  iVar6 = iVar5 * 0x43c42e4d;
  fVar20 = param_3 - (float)iVar5;
  uVar11 = iVar6 + 0x43c42e4d;
  iVar5 = iVar10 * 0x668b6e2f;
  fVar21 = param_4 - (float)iVar10;
  uVar12 = (uint)(_LC33 - fVar22);
  uVar14 = (uint)(_LC33 - fVar21);
  uVar13 = (uint)(_LC33 - fVar20);
  uVar15 = (uVar12 & 0x1dde90c9) + iVar4 ^ param_1;
  fVar28 = (float)(int)uVar12 + fVar22;
  uVar9 = (uVar14 & 0x668b6e2f) + iVar5;
  uVar16 = (uVar13 & 0x43c42e4d) + iVar6;
  fVar25 = (float)(int)uVar14 + fVar21;
  fVar23 = (float)(int)uVar13 + fVar20;
  uVar3 = (uVar16 ^ uVar15 ^ uVar9) * 0x27d4eb2d;
  uVar7 = ((int)uVar3 >> 0xf ^ uVar3) & 0xfc;
  uVar3 = iVar5 + 0x668b6e2f;
  fVar26 = ((_LC26 - fVar28 * fVar28) - fVar23 * fVar23) - fVar25 * fVar25;
  uVar8 = iVar4 + 0x1dde90c9U ^ uVar18;
  uVar17 = (uVar3 ^ uVar11 ^ uVar8) * 0x27d4eb2d;
  uVar17 = ((int)uVar17 >> 0xf ^ uVar17) & 0xfc;
  fVar22 = fVar22 - _LC5;
  fVar20 = fVar20 - _LC5;
  fVar21 = fVar21 - _LC5;
  fVar24 = ((_LC26 - fVar22 * fVar22) - fVar20 * fVar20) - fVar21 * fVar21;
  fVar32 = (float)(int)(uVar12 * 2 | 2) * fVar22;
  fVar34 = (float)(int)(uVar13 * 2 | 2) * fVar20;
  fVar19 = (*(float *)(Lookup<float>::Gradients3D + (ulong)(uVar17 | 1) * 4) * fVar20 +
            *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar17 * 4) * fVar22 +
           *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar17 | 2) * 4) * fVar21) *
           fVar24 * fVar24 * fVar24 * fVar24 +
           (*(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 1) * 4) * fVar23 +
            *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar7 * 4) * fVar28 +
           *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 2) * 4) * fVar25) *
           fVar26 * fVar26 * fVar26 * fVar26;
  fVar27 = (float)(int)(uVar14 * 2 | 2) * fVar21;
  fVar29 = (float)(int)(uVar12 * -4 + -2) * fVar22 - _LC8;
  fVar30 = (float)(int)(uVar13 * -4 + -2) * fVar20 - _LC8;
  fVar31 = (float)(int)(uVar14 * -4 + -2) * fVar21 - _LC8;
  fVar33 = fVar26 + fVar32;
  if (fVar33 <= 0.0) {
    fVar33 = fVar34 + fVar27 + fVar26;
    if (0.0 < fVar33) {
      uVar7 = ((~uVar13 & 0x43c42e4d) + iVar6 ^ uVar15 ^ (~uVar14 & 0x668b6e2f) + iVar5) *
              0x27d4eb2d;
      uVar7 = ((int)uVar7 >> 0xf ^ uVar7) & 0xfc;
      fVar19 = fVar19 + ((fVar25 - (float)(int)(uVar14 | 1)) *
                         *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 2) * 4) +
                        (fVar23 - (float)(int)(uVar13 | 1)) *
                        *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 1) * 4) +
                        *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar7 * 4) * fVar28) *
                        fVar33 * fVar33 * fVar33 * fVar33;
    }
    bVar1 = false;
    fVar33 = fVar29 + fVar24;
    if (0.0 < fVar33) {
      uVar7 = ((uVar12 & 0x3bbd2192) + iVar4 ^ uVar18 ^ uVar11 ^ uVar3) * 0x27d4eb2d;
      uVar7 = (int)uVar7 >> 0xf ^ uVar7;
      uVar17 = uVar7 & 0xfc;
      bVar1 = true;
      fVar19 = fVar19 + (*(float *)(Lookup<float>::Gradients3D + (ulong)(uVar17 | 2) * 4) * fVar21 +
                        *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar17 | 1) * 4) * fVar20 +
                        ((float)(int)(uVar12 | 1) + fVar22) *
                        *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 & 0xfc) * 4)) *
                        fVar33 * fVar33 * fVar33 * fVar33;
    }
  }
  else {
    uVar7 = ((~uVar12 & 0x1dde90c9) + iVar4 ^ param_1 ^ uVar16 ^ uVar9) * 0x27d4eb2d;
    uVar7 = (int)uVar7 >> 0xf ^ uVar7;
    uVar17 = uVar7 & 0xfc;
    bVar1 = false;
    fVar19 = fVar19 + (*(float *)(Lookup<float>::Gradients3D + (ulong)(uVar17 | 2) * 4) * fVar25 +
                      *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar17 | 1) * 4) * fVar23 +
                      (fVar28 - (float)(int)(uVar12 | 1)) *
                      *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 & 0xfc) * 4)) *
                      fVar33 * fVar33 * fVar33 * fVar33;
  }
  fVar33 = fVar26 + fVar34;
  if (fVar33 <= 0.0) {
    fVar33 = fVar32 + fVar27 + fVar26;
    if (0.0 < fVar33) {
      uVar7 = ((~uVar12 & 0x1dde90c9) + iVar4 ^ param_1 ^ uVar16 ^ (~uVar14 & 0x668b6e2f) + iVar5) *
              0x27d4eb2d;
      uVar7 = (int)uVar7 >> 0xf ^ uVar7;
      uVar17 = uVar7 & 0xfc;
      fVar19 = fVar19 + ((fVar25 - (float)(int)(uVar14 | 1)) *
                         *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar17 | 2) * 4) +
                        (fVar28 - (float)(int)(uVar12 | 1)) *
                        *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 & 0xfc) * 4) +
                        *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar17 | 1) * 4) * fVar23) *
                        fVar33 * fVar33 * fVar33 * fVar33;
    }
    bVar2 = false;
    fVar33 = fVar30 + fVar24;
    if (0.0 < fVar33) {
      uVar7 = ((uVar13 & 0x87885c9a) + iVar6 ^ uVar8 ^ uVar3) * 0x27d4eb2d;
      uVar7 = ((int)uVar7 >> 0xf ^ uVar7) & 0xfc;
      bVar2 = true;
      fVar19 = fVar19 + (*(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 2) * 4) * fVar21 +
                        *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar7 * 4) * fVar22 +
                        ((float)(int)(uVar13 | 1) + fVar20) *
                        *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 1) * 4)) *
                        fVar33 * fVar33 * fVar33 * fVar33;
    }
  }
  else {
    uVar7 = ((~uVar13 & 0x43c42e4d) + iVar6 ^ uVar15 ^ uVar9) * 0x27d4eb2d;
    uVar7 = ((int)uVar7 >> 0xf ^ uVar7) & 0xfc;
    bVar2 = false;
    fVar19 = fVar19 + (*(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 2) * 4) * fVar25 +
                      *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar7 * 4) * fVar28 +
                      (fVar23 - (float)(int)(uVar13 | 1)) *
                      *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 1) * 4)) *
                      fVar33 * fVar33 * fVar33 * fVar33;
  }
  fVar27 = fVar27 + fVar26;
  if (fVar27 <= 0.0) {
    fVar26 = fVar26 + fVar32 + fVar34;
    if (0.0 < fVar26) {
      uVar7 = (param_1 ^ (~uVar12 & 0x1dde90c9) + iVar4 ^ (~uVar13 & 0x43c42e4d) + iVar6 ^ uVar9) *
              0x27d4eb2d;
      uVar7 = ((int)uVar7 >> 0xf ^ uVar7) & 0xfc;
      fVar19 = fVar19 + ((fVar23 - (float)(int)(uVar13 | 1)) *
                         *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 1) * 4) +
                         (fVar28 - (float)(int)(uVar12 | 1)) *
                         *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar7 * 4) +
                        fVar25 * *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 2) * 4)) *
                        fVar26 * fVar26 * fVar26 * fVar26;
    }
    fVar23 = fVar24 + fVar31;
    if (fVar23 <= 0.0) {
      if (bVar1) {
        if ((!bVar2) && (fVar23 = fVar31 + fVar29 + fVar24, 0.0 < fVar23)) {
          fVar26 = (float)(int)(uVar14 | 1);
          goto LAB_0010c716;
        }
        goto LAB_0010c199;
      }
    }
    else {
      uVar7 = (uVar14 & 0xcd16dc5e) + iVar5;
      uVar17 = (uVar11 ^ uVar8 ^ uVar7) * 0x27d4eb2d;
      fVar26 = (float)(int)(uVar14 | 1) + fVar21;
      uVar17 = (uVar17 ^ (int)uVar17 >> 0xf) & 0xfc;
      fVar19 = fVar19 + fVar23 * fVar23 * fVar23 * fVar23 *
                        (*(float *)(Lookup<float>::Gradients3D + (ulong)(uVar17 | 1) * 4) * fVar20 +
                         *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar17 * 4) * fVar22 +
                        *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar17 | 2) * 4) * fVar26);
      if (bVar1) {
        if ((bVar2) || (fVar23 = fVar31 + fVar29 + fVar24, fVar23 <= 0.0)) goto LAB_0010c173;
        goto LAB_0010c0eb;
      }
      bVar1 = true;
    }
LAB_0010bff3:
    fVar23 = fVar30 + fVar31 + fVar24;
    if (0.0 < fVar23) {
      uVar7 = ((uVar13 & 0x87885c9a) + iVar6 ^ uVar8 ^ (uVar14 & 0xcd16dc5e) + iVar5) * 0x27d4eb2d;
      uVar7 = (uVar7 ^ (int)uVar7 >> 0xf) & 0xfc;
      fVar19 = fVar19 + (((float)(int)(uVar13 | 1) + fVar20) *
                         *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 1) * 4) +
                         *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar7 * 4) * fVar22 +
                        ((float)(int)(uVar14 | 1) + fVar21) *
                        *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 2) * 4)) *
                        fVar23 * fVar23 * fVar23 * fVar23;
    }
    if ((!bVar2) && (fVar23 = fVar31 + fVar29 + fVar24, 0.0 < fVar23)) {
      uVar7 = (uVar14 & 0xcd16dc5e) + iVar5;
      fVar26 = (float)(int)(uVar14 | 1) + fVar21;
LAB_0010c0eb:
      uVar11 = ((uVar12 & 0x3bbd2192) + iVar4 ^ uVar18 ^ uVar11 ^ uVar7) * 0x27d4eb2d;
      uVar11 = uVar11 ^ (int)uVar11 >> 0xf;
      uVar7 = uVar11 & 0xfc;
      fVar19 = fVar19 + (fVar26 * *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 2) * 4) +
                        ((float)(int)(uVar12 | 1) + fVar22) *
                        *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar11 & 0xfc) * 4) +
                        *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 1) * 4) * fVar20) *
                        fVar23 * fVar23 * fVar23 * fVar23;
    }
    if (bVar1) goto LAB_0010c173;
  }
  else {
    fVar26 = (float)(int)(uVar14 | 1);
    uVar7 = ((~uVar14 & 0x668b6e2f) + iVar5 ^ uVar16 ^ uVar15) * 0x27d4eb2d;
    uVar7 = (uVar7 ^ (int)uVar7 >> 0xf) & 0xfc;
    fVar19 = fVar19 + fVar27 * fVar27 * fVar27 * fVar27 *
                      ((fVar25 - fVar26) *
                       *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 2) * 4) +
                      fVar23 * *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar7 | 1) * 4) +
                      fVar28 * *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar7 * 4));
    if (!bVar1) goto LAB_0010bff3;
    if ((!bVar2) && (fVar23 = fVar31 + fVar29 + fVar24, 0.0 < fVar23)) {
LAB_0010c716:
      fVar26 = fVar26 + fVar21;
      bVar1 = false;
      uVar7 = (uVar14 & 0xcd16dc5e) + iVar5;
      goto LAB_0010c0eb;
    }
  }
LAB_0010c199:
  fVar24 = fVar29 + fVar30 + fVar24;
  if (0.0 < fVar24) {
    uVar11 = (iVar6 + (uVar13 & 0x87885c9a) ^ iVar4 + (uVar12 & 0x3bbd2192) ^ uVar18 ^ uVar3) *
             0x27d4eb2d;
    uVar11 = (uVar11 ^ (int)uVar11 >> 0xf) & 0xfc;
    fVar19 = fVar19 + ((fVar20 + (float)(int)(uVar13 | 1)) *
                       *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar11 | 1) * 4) +
                       (fVar22 + (float)(int)(uVar12 | 1)) *
                       *(float *)(Lookup<float>::Gradients3D + (long)(int)uVar11 * 4) +
                      fVar21 * *(float *)(Lookup<float>::Gradients3D + (ulong)(uVar11 | 2) * 4)) *
                      fVar24 * fVar24 * fVar24 * fVar24;
  }
LAB_0010c173:
  return fVar19 * __LC34;
}



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010ca98:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ca98;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010cab6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010cab6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* FastNoiseLite::_validate_propertyv(PropertyInfo&) const */

void __thiscall FastNoiseLite::_validate_propertyv(FastNoiseLite *this,PropertyInfo *param_1)

{
  _validate_property(this,param_1);
  return;
}



/* void fastnoiselite::FastNoiseLite::DomainWarp<float>(float&, float&) const */

void __thiscall
fastnoiselite::FastNoiseLite::DomainWarp<float>(FastNoiseLite *this,float *param_1,float *param_2)

{
  uint uVar1;
  float *extraout_RDX;
  float *extraout_RDX_00;
  float *extraout_RDX_01;
  float *extraout_RDX_02;
  float *extraout_RDX_03;
  float *extraout_RDX_04;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = *(int *)this;
  fVar9 = *(float *)(this + 0x2c) * *(float *)(this + 0x44);
  fVar6 = *(float *)(this + 4);
  if (*(int *)(this + 0x14) == 4) {
    if (0 < *(int *)(this + 0x18)) {
      uVar1 = *(uint *)(this + 0x3c);
      iVar3 = *(int *)(this + 0x18) + iVar2;
      fVar10 = _LC17;
      fVar11 = _LC47;
      fVar5 = _LC48;
      do {
        fVar7 = *param_1;
        fVar8 = *param_2;
        if (uVar1 < 2) {
          fVar4 = (fVar7 + fVar8) * fVar10;
          fVar7 = fVar7 + fVar4;
          fVar8 = fVar8 + fVar4;
          if (uVar1 == 1) {
            SingleDomainWarpSimplexGradient<float>
                      (iVar2,fVar9 * fVar11,fVar6,fVar7,fVar8,param_1,param_2,true);
            param_2 = extraout_RDX_03;
          }
          else {
            SingleDomainWarpSimplexGradient<float>
                      (iVar2,fVar9 * fVar5,fVar6,fVar7,fVar8,param_1,param_2,false);
            param_2 = extraout_RDX_04;
          }
        }
        else if (uVar1 == 2) {
          SingleDomainWarpBasicGrid<float>(iVar2,fVar9,fVar6,fVar7,fVar8,param_1,param_2);
          param_2 = extraout_RDX_02;
        }
        fVar9 = fVar9 * *(float *)(this + 0x20);
        iVar2 = iVar2 + 1;
        fVar6 = fVar6 * *(float *)(this + 0x1c);
      } while (iVar2 != iVar3);
    }
  }
  else if (*(int *)(this + 0x14) == 5) {
    uVar1 = *(uint *)(this + 0x3c);
    fVar10 = *param_1;
    fVar11 = *param_2;
    if (uVar1 < 2) {
      fVar5 = (fVar10 + fVar11) * _LC17;
      fVar10 = fVar10 + fVar5;
      fVar11 = fVar11 + fVar5;
    }
    if (0 < *(int *)(this + 0x18)) {
      iVar3 = *(int *)(this + 0x18) + iVar2;
      fVar5 = _LC48;
      fVar7 = _LC47;
      do {
        if (uVar1 == 1) {
          SingleDomainWarpSimplexGradient<float>
                    (iVar2,fVar9 * fVar7,fVar6,fVar10,fVar11,param_1,param_2,true);
          param_2 = extraout_RDX_01;
        }
        else if (uVar1 == 2) {
          SingleDomainWarpBasicGrid<float>(iVar2,fVar9,fVar6,fVar10,fVar11,param_1,param_2);
          param_2 = extraout_RDX_00;
        }
        else if (uVar1 == 0) {
          SingleDomainWarpSimplexGradient<float>
                    (iVar2,fVar9 * fVar5,fVar6,fVar10,fVar11,param_1,param_2,false);
          param_2 = extraout_RDX;
        }
        fVar9 = fVar9 * *(float *)(this + 0x20);
        iVar2 = iVar2 + 1;
        fVar6 = fVar6 * *(float *)(this + 0x1c);
      } while (iVar3 != iVar2);
    }
  }
  else {
    uVar1 = *(uint *)(this + 0x3c);
    fVar10 = *param_1;
    fVar11 = *param_2;
    if (uVar1 < 2) {
      fVar5 = (fVar10 + fVar11) * _LC17;
      if (uVar1 != 1) {
        fVar9 = fVar9 * _LC48;
      }
      else {
        fVar9 = fVar9 * _LC47;
      }
      SingleDomainWarpSimplexGradient<float>
                (iVar2,fVar9,fVar6,fVar10 + fVar5,fVar11 + fVar5,param_1,param_2,uVar1 == 1);
      return;
    }
    if (uVar1 == 2) {
      SingleDomainWarpBasicGrid<float>(iVar2,fVar9,fVar6,fVar10,fVar11,param_1,param_2);
      return;
    }
  }
  return;
}



/* float fastnoiselite::FastNoiseLite::GetNoise<float>(float, float) const */

float __thiscall
fastnoiselite::FastNoiseLite::GetNoise<float>(FastNoiseLite *this,float param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar5 = _LC8;
  uVar2 = *(uint *)(this + 8);
  fVar7 = param_1 * *(float *)(this + 4);
  if (uVar2 < 2) {
    fVar7 = fVar7 + (fVar7 + *(float *)(this + 4) * param_2) * _LC17;
  }
  iVar3 = *(int *)(this + 0x14);
  iVar4 = *(int *)this;
  if (iVar3 == 2) {
    fVar10 = *(float *)(this + 0x2c);
    if (0 < *(int *)(this + 0x18)) {
      iVar3 = *(int *)(this + 0x18) + iVar4;
      fVar8 = 0.0;
      fVar1 = *(float *)(this + 0x38);
      do {
        iVar4 = iVar4 + 1;
        fVar6 = GenNoiseSingle<float>(uVar2,fVar1,fVar7);
        if (fVar6 < 0.0) {
          fVar6 = (float)((uint)fVar6 ^ _LC7);
        }
        fVar8 = fVar8 + (_LC50 * fVar6 + fVar5) * fVar10;
        fVar7 = fVar7 * *(float *)(this + 0x1c);
        fVar10 = fVar10 * (((fVar5 - fVar6) - fVar5) * *(float *)(this + 0x24) + fVar5) *
                 *(float *)(this + 0x20);
      } while (iVar4 != iVar3);
      return fVar8;
    }
  }
  else if (iVar3 == 3) {
    fVar10 = *(float *)(this + 0x2c);
    if (0 < *(int *)(this + 0x18)) {
      iVar3 = *(int *)(this + 0x18) + iVar4;
      fVar8 = 0.0;
      fVar1 = *(float *)(this + 0x38);
      do {
        iVar4 = iVar4 + 1;
        fVar6 = GenNoiseSingle<float>(uVar2,fVar1,fVar7);
        fVar6 = (fVar6 + fVar5) * *(float *)(this + 0x28);
        fVar6 = fVar6 - (float)((int)(_LC5 * fVar6) * 2);
        if (fVar5 <= fVar6) {
          fVar6 = _LC40 - fVar6;
        }
        fVar9 = ((fVar6 - _LC5) + (fVar6 - _LC5)) * fVar10;
        fVar10 = fVar10 * ((fVar6 - fVar5) * *(float *)(this + 0x24) + fVar5) *
                 *(float *)(this + 0x20);
        fVar8 = fVar8 + fVar9;
        fVar7 = fVar7 * *(float *)(this + 0x1c);
      } while (iVar3 != iVar4);
      return fVar8;
    }
  }
  else {
    if (iVar3 != 1) {
      fVar5 = GenNoiseSingle<float>(uVar2,*(float *)(this + 0x38),fVar7);
      return fVar5;
    }
    fVar10 = *(float *)(this + 0x2c);
    if (0 < *(int *)(this + 0x18)) {
      iVar3 = *(int *)(this + 0x18) + iVar4;
      fVar8 = 0.0;
      fVar1 = *(float *)(this + 0x38);
      do {
        iVar4 = iVar4 + 1;
        fVar6 = GenNoiseSingle<float>(uVar2,fVar1,fVar7);
        fVar8 = fVar8 + fVar6 * fVar10;
        if (fVar6 + fVar5 < _LC40) {
          fVar6 = (fVar6 + fVar5) * _LC5 - fVar5;
        }
        else {
          fVar6 = 0.0;
        }
        fVar7 = fVar7 * *(float *)(this + 0x1c);
        fVar10 = fVar10 * (fVar6 * *(float *)(this + 0x24) + fVar5) * *(float *)(this + 0x20);
      } while (iVar4 != iVar3);
      return fVar8;
    }
  }
  return 0.0;
}



/* void fastnoiselite::FastNoiseLite::DomainWarp<float>(float&, float&, float&) const */

void __thiscall
fastnoiselite::FastNoiseLite::DomainWarp<float>
          (FastNoiseLite *this,float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_44;
  float local_40;
  float local_3c;
  
  iVar4 = *(int *)this;
  fVar12 = *(float *)(this + 0x44) * *(float *)(this + 0x2c);
  fVar7 = *(float *)(this + 4);
  if (*(int *)(this + 0x14) == 4) {
    if (0 < *(int *)(this + 0x18)) {
      iVar3 = *(int *)(this + 0x18) + iVar4;
      iVar1 = *(int *)(this + 0x40);
      iVar2 = *(int *)(this + 0x3c);
      do {
        fVar8 = *param_1;
        fVar9 = *param_2;
        fVar11 = *param_3;
        if (iVar1 == 2) {
          fVar6 = _LC51 * (fVar8 + fVar11) - fVar9 * _LC12;
          fVar9 = fVar9 * _LC12 + (fVar8 + fVar11) * _LC12;
          fVar8 = fVar8 + fVar6;
          fVar11 = fVar11 + fVar6;
LAB_0010de63:
          if (iVar2 == 1) goto LAB_0010df30;
LAB_0010de6d:
          if (iVar2 != 2) {
            if (iVar2 != 0) goto LAB_0010debc;
            bVar5 = false;
            fVar6 = _LC30;
            goto LAB_0010dea4;
          }
          SingleDomainWarpBasicGrid<float>
                    (iVar4,fVar12,fVar7,fVar8,fVar9,fVar11,param_1,param_2,param_3);
        }
        else {
          if (iVar1 != 3) {
            if (iVar1 == 1) {
              fVar6 = fVar8 + fVar9;
              fVar10 = fVar11 * _LC12;
              fVar13 = _LC51 * fVar6;
              fVar9 = (fVar9 + fVar13) - fVar10;
              fVar11 = fVar10 + fVar6 * _LC12;
              fVar8 = fVar8 + (fVar13 - fVar10);
            }
            goto LAB_0010de63;
          }
          fVar6 = (fVar8 + fVar9 + fVar11) * _LC15;
          fVar8 = fVar6 - fVar8;
          fVar11 = fVar6 - fVar11;
          fVar9 = fVar6 - fVar9;
          if (iVar2 != 1) goto LAB_0010de6d;
LAB_0010df30:
          bVar5 = true;
          fVar6 = _LC52;
LAB_0010dea4:
          SingleDomainWarpOpenSimplex2Gradient<float>
                    (iVar4,fVar12 * fVar6,fVar7,fVar8,fVar9,fVar11,param_1,param_2,param_3,bVar5);
        }
LAB_0010debc:
        fVar12 = fVar12 * *(float *)(this + 0x20);
        iVar4 = iVar4 + 1;
        fVar7 = fVar7 * *(float *)(this + 0x1c);
      } while (iVar4 != iVar3);
    }
  }
  else {
    if (*(int *)(this + 0x14) != 5) {
      iVar1 = *(int *)(this + 0x40);
      fVar8 = *param_1;
      fVar9 = *param_2;
      fVar11 = *param_3;
      if (iVar1 == 2) {
        fVar6 = _LC51 * (fVar8 + fVar11) - fVar9 * _LC12;
        fVar9 = fVar9 * _LC12 + (fVar8 + fVar11) * _LC12;
        fVar8 = fVar8 + fVar6;
        fVar11 = fVar11 + fVar6;
      }
      else if (iVar1 == 3) {
        fVar6 = (fVar8 + fVar9 + fVar11) * _LC15;
        fVar8 = fVar6 - fVar8;
        fVar11 = fVar6 - fVar11;
        fVar9 = fVar6 - fVar9;
      }
      else if (iVar1 == 1) {
        fVar6 = fVar8 + fVar9;
        fVar10 = fVar11 * _LC12;
        fVar13 = _LC51 * fVar6;
        fVar9 = (fVar9 + fVar13) - fVar10;
        fVar11 = fVar10 + fVar6 * _LC12;
        fVar8 = fVar8 + (fVar13 - fVar10);
      }
      iVar1 = *(int *)(this + 0x3c);
      if (iVar1 == 1) {
        fVar12 = fVar12 * _LC52;
        bVar5 = true;
      }
      else {
        if (iVar1 == 2) {
          SingleDomainWarpBasicGrid<float>
                    (iVar4,fVar12,fVar7,fVar8,fVar9,fVar11,param_1,param_2,param_3);
          return;
        }
        if (iVar1 != 0) {
          return;
        }
        fVar12 = fVar12 * _LC30;
        bVar5 = false;
      }
      SingleDomainWarpOpenSimplex2Gradient<float>
                (iVar4,fVar12,fVar7,fVar8,fVar9,fVar11,param_1,param_2,param_3,bVar5);
      return;
    }
    local_44 = *param_1;
    local_40 = *param_2;
    local_3c = *param_3;
    iVar1 = *(int *)(this + 0x40);
    if (iVar1 == 2) {
      fVar8 = _LC51 * (local_44 + local_3c) - local_40 * _LC12;
      local_40 = (local_44 + local_3c) * _LC12 + local_40 * _LC12;
      local_44 = local_44 + fVar8;
      local_3c = fVar8 + local_3c;
    }
    else if (iVar1 == 3) {
      fVar8 = (local_44 + local_40 + local_3c) * _LC15;
      local_44 = fVar8 - local_44;
      local_3c = fVar8 - local_3c;
      local_40 = fVar8 - local_40;
    }
    else if (iVar1 == 1) {
      fVar9 = local_3c * _LC12;
      fVar8 = _LC51 * (local_44 + local_40);
      local_3c = (local_44 + local_40) * _LC12 + fVar9;
      local_40 = (fVar8 + local_40) - fVar9;
      local_44 = (fVar8 - fVar9) + local_44;
    }
    if (0 < *(int *)(this + 0x18)) {
      iVar2 = *(int *)(this + 0x18) + iVar4;
      iVar1 = *(int *)(this + 0x3c);
      do {
        if (iVar1 == 1) {
          bVar5 = true;
          fVar8 = _LC52;
LAB_0010dd79:
          SingleDomainWarpOpenSimplex2Gradient<float>
                    (iVar4,fVar8 * fVar12,fVar7,local_44,local_40,local_3c,param_1,param_2,param_3,
                     bVar5);
        }
        else if (iVar1 == 2) {
          SingleDomainWarpBasicGrid<float>
                    (iVar4,fVar12,fVar7,local_44,local_40,local_3c,param_1,param_2,param_3);
        }
        else if (iVar1 == 0) {
          bVar5 = false;
          fVar8 = _LC30;
          goto LAB_0010dd79;
        }
        fVar12 = fVar12 * *(float *)(this + 0x20);
        iVar4 = iVar4 + 1;
        fVar7 = fVar7 * *(float *)(this + 0x1c);
      } while (iVar2 != iVar4);
    }
  }
  return;
}



/* float fastnoiselite::FastNoiseLite::GetNoise<float>(float, float, float) const */

float __thiscall
fastnoiselite::FastNoiseLite::GetNoise<float>
          (FastNoiseLite *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar16 = _LC5;
  fVar1 = _LC8;
  fVar12 = *(float *)(this + 4);
  iVar4 = *(int *)(this + 0x10);
  fVar15 = param_1 * fVar12;
  fVar14 = param_2 * fVar12;
  fVar12 = fVar12 * param_3;
  if (iVar4 == 2) {
    fVar6 = _LC51 * (fVar15 + fVar12) - fVar14 * _LC12;
    fVar14 = fVar14 * _LC12 + (fVar15 + fVar12) * _LC12;
    fVar15 = fVar15 + fVar6;
    fVar12 = fVar12 + fVar6;
  }
  else {
    if (iVar4 == 3) {
      iVar4 = *(int *)(this + 0x14);
      iVar2 = *(int *)this;
      fVar6 = (fVar15 + fVar14 + fVar12) * _LC15;
      fVar15 = fVar6 - fVar15;
      fVar12 = fVar6 - fVar12;
      fVar14 = fVar6 - fVar14;
      goto joined_r0x0010e218;
    }
    if (iVar4 == 1) {
      fVar6 = fVar15 + fVar14;
      fVar13 = fVar12 * _LC12;
      fVar9 = _LC51 * fVar6;
      fVar14 = (fVar14 + fVar9) - fVar13;
      fVar12 = fVar13 + fVar6 * _LC12;
      fVar15 = fVar15 + (fVar9 - fVar13);
    }
  }
  iVar4 = *(int *)(this + 0x14);
  iVar2 = *(int *)this;
joined_r0x0010e218:
  if (iVar4 == 2) {
    fVar16 = *(float *)(this + 0x2c);
    if (0 < *(int *)(this + 0x18)) {
      fVar6 = *(float *)(this + 0x38);
      fVar9 = 0.0;
      iVar5 = *(int *)(this + 0x18) + iVar2;
      iVar4 = *(int *)(this + 0x30);
      do {
        iVar3 = iVar2 + 1;
        switch(*(undefined4 *)(this + 8)) {
        case 0:
          fVar6 = *(float *)(this + 0x1c);
          fVar7 = 0.0;
          fVar13 = _LC50;
          while( true ) {
            iVar4 = iVar3;
            fVar10 = SingleOpenSimplex2<float>(iVar2,fVar15,fVar14,fVar12);
            if (fVar7 <= fVar10) {
              fVar11 = fVar10 * fVar13;
              fVar10 = fVar1 - fVar10;
            }
            else {
              fVar11 = fVar10 + fVar10;
              fVar10 = fVar10 + fVar1;
            }
            fVar9 = fVar9 + (fVar11 + fVar1) * fVar16;
            fVar15 = fVar15 * fVar6;
            fVar14 = fVar14 * fVar6;
            fVar12 = fVar12 * fVar6;
            fVar16 = fVar16 * ((fVar10 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                     *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar9;
        case 1:
          fVar6 = *(float *)(this + 0x1c);
          while( true ) {
            iVar4 = iVar3;
            fVar13 = SingleOpenSimplex2S<float>(iVar2,fVar15,fVar14,fVar12);
            if (0.0 <= fVar13) {
              fVar7 = _LC50 * fVar13;
              fVar13 = fVar1 - fVar13;
            }
            else {
              fVar7 = fVar13 + fVar13;
              fVar13 = fVar13 + fVar1;
            }
            fVar9 = fVar9 + (fVar7 + fVar1) * fVar16;
            fVar15 = fVar15 * fVar6;
            fVar14 = fVar14 * fVar6;
            fVar12 = fVar12 * fVar6;
            fVar16 = fVar16 * ((fVar13 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                     *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar9;
        case 2:
          while( true ) {
            fVar12 = SingleCellular<float>(iVar4,fVar6,fVar15,fVar14);
            if (0.0 <= fVar12) {
              fVar13 = _LC50 * fVar12;
              fVar12 = fVar1 - fVar12;
            }
            else {
              fVar13 = fVar12 + fVar12;
              fVar12 = fVar12 + fVar1;
            }
            fVar9 = fVar9 + (fVar13 + fVar1) * fVar16;
            fVar15 = fVar15 * *(float *)(this + 0x1c);
            fVar14 = fVar14 * *(float *)(this + 0x1c);
            fVar16 = fVar16 * ((fVar12 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                     *(float *)(this + 0x20);
            if (iVar5 == iVar3) break;
            iVar3 = iVar3 + 1;
          }
          return fVar9;
        case 3:
          fVar6 = *(float *)(this + 0x1c);
          fVar13 = 0.0;
          while( true ) {
            iVar4 = iVar3;
            fVar7 = SinglePerlin<float>(iVar2,fVar15,fVar14,fVar12);
            if (fVar13 <= fVar7) {
              fVar10 = _LC50 * fVar7;
              fVar7 = fVar1 - fVar7;
            }
            else {
              fVar10 = fVar7 + fVar7;
              fVar7 = fVar7 + fVar1;
            }
            fVar9 = fVar9 + (fVar10 + fVar1) * fVar16;
            fVar15 = fVar15 * fVar6;
            fVar14 = fVar14 * fVar6;
            fVar12 = fVar12 * fVar6;
            fVar16 = fVar16 * ((fVar7 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                     *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar9;
        case 4:
          fVar6 = *(float *)(this + 0x1c);
          while( true ) {
            iVar4 = iVar3;
            fVar13 = SingleValueCubic<float>(iVar2,fVar15,fVar14,fVar12);
            if (0.0 <= fVar13) {
              fVar7 = _LC50 * fVar13;
              fVar13 = fVar1 - fVar13;
            }
            else {
              fVar7 = fVar13 + fVar13;
              fVar13 = fVar13 + fVar1;
            }
            fVar9 = fVar9 + (fVar7 + fVar1) * fVar16;
            fVar15 = fVar15 * fVar6;
            fVar14 = fVar14 * fVar6;
            fVar12 = fVar12 * fVar6;
            fVar16 = fVar16 * ((fVar13 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                     *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar9;
        case 5:
          fVar6 = *(float *)(this + 0x1c);
          fVar7 = 0.0;
          fVar13 = _LC50;
          while( true ) {
            iVar4 = iVar3;
            fVar10 = SingleValue<float>(iVar2,fVar15,fVar14,fVar12);
            if (fVar10 < fVar7) {
              fVar11 = fVar10 + fVar10;
              fVar10 = fVar10 + fVar1;
            }
            else {
              fVar11 = fVar10 * fVar13;
              fVar10 = fVar1 - fVar10;
            }
            fVar9 = fVar9 + (fVar11 + fVar1) * fVar16;
            fVar15 = fVar15 * fVar6;
            fVar14 = fVar14 * fVar6;
            fVar12 = fVar12 * fVar6;
            fVar16 = fVar16 * ((fVar10 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                     *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar9;
        }
        fVar13 = *(float *)(this + 0x1c);
        fVar9 = fVar9 + fVar16;
        fVar15 = fVar15 * fVar13;
        fVar14 = fVar14 * fVar13;
        fVar12 = fVar12 * fVar13;
        fVar16 = fVar16 * (*(float *)(this + 0x24) * 0.0 + _LC8) * *(float *)(this + 0x20);
        iVar2 = iVar3;
      } while (iVar3 != iVar5);
      return fVar9;
    }
  }
  else if (iVar4 == 3) {
    fVar6 = *(float *)(this + 0x2c);
    if (0 < *(int *)(this + 0x18)) {
      fVar9 = *(float *)(this + 0x38);
      iVar5 = *(int *)(this + 0x18) + iVar2;
      fVar13 = 0.0;
      iVar4 = *(int *)(this + 0x30);
      do {
        iVar3 = iVar2 + 1;
        switch(*(undefined4 *)(this + 8)) {
        case 0:
          fVar9 = *(float *)(this + 0x1c);
          fVar7 = _LC40;
          while( true ) {
            iVar4 = iVar3;
            fVar10 = SingleOpenSimplex2<float>(iVar2,fVar15,fVar14,fVar12);
            fVar10 = (fVar10 + fVar1) * *(float *)(this + 0x28);
            fVar10 = fVar10 - (float)((int)(fVar16 * fVar10) * 2);
            if (fVar1 <= fVar10) {
              fVar11 = (fVar7 - fVar10) - fVar16;
              fVar8 = ((fVar7 - fVar10) - fVar1) * *(float *)(this + 0x24);
              fVar11 = fVar11 + fVar11;
            }
            else {
              fVar8 = (fVar10 - fVar1) * *(float *)(this + 0x24);
              fVar11 = (fVar10 - fVar16) + (fVar10 - fVar16);
            }
            fVar13 = fVar13 + fVar11 * fVar6;
            fVar15 = fVar15 * fVar9;
            fVar14 = fVar14 * fVar9;
            fVar12 = fVar12 * fVar9;
            fVar6 = fVar6 * (fVar8 + fVar1) * *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar13;
        case 1:
          fVar9 = *(float *)(this + 0x1c);
          while( true ) {
            iVar4 = iVar3;
            fVar7 = SingleOpenSimplex2S<float>(iVar2,fVar15,fVar14,fVar12);
            fVar7 = (fVar7 + fVar1) * *(float *)(this + 0x28);
            fVar7 = fVar7 - (float)((int)(fVar16 * fVar7) * 2);
            if (fVar1 <= fVar7) {
              fVar10 = (_LC40 - fVar7) - fVar16;
              fVar11 = ((_LC40 - fVar7) - fVar1) * *(float *)(this + 0x24);
              fVar10 = fVar10 + fVar10;
            }
            else {
              fVar11 = (fVar7 - fVar1) * *(float *)(this + 0x24);
              fVar10 = (fVar7 - fVar16) + (fVar7 - fVar16);
            }
            fVar13 = fVar13 + fVar10 * fVar6;
            fVar15 = fVar15 * fVar9;
            fVar14 = fVar14 * fVar9;
            fVar12 = fVar12 * fVar9;
            fVar6 = fVar6 * (fVar11 + fVar1) * *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar13;
        case 2:
          while( true ) {
            fVar12 = SingleCellular<float>(iVar4,fVar9,fVar15,fVar14);
            fVar12 = (fVar12 + fVar1) * *(float *)(this + 0x28);
            fVar12 = fVar12 - (float)((int)(fVar16 * fVar12) * 2);
            if (fVar1 <= fVar12) {
              fVar10 = (_LC40 - fVar12) - fVar16;
              fVar10 = fVar10 + fVar10;
              fVar7 = fVar6 * (((_LC40 - fVar12) - fVar1) * *(float *)(this + 0x24) + fVar1) *
                      *(float *)(this + 0x20);
              fVar12 = *(float *)(this + 0x1c);
            }
            else {
              fVar10 = (fVar12 - fVar16) + (fVar12 - fVar16);
              fVar7 = fVar6 * ((fVar12 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                      *(float *)(this + 0x20);
              fVar12 = *(float *)(this + 0x1c);
            }
            fVar13 = fVar13 + fVar10 * fVar6;
            if (iVar5 == iVar3) break;
            fVar15 = fVar15 * fVar12;
            fVar14 = fVar14 * fVar12;
            iVar3 = iVar3 + 1;
            fVar6 = fVar7;
          }
          return fVar13;
        case 3:
          fVar9 = *(float *)(this + 0x1c);
          fVar7 = _LC40;
          while( true ) {
            iVar4 = iVar3;
            fVar10 = SinglePerlin<float>(iVar2,fVar15,fVar14,fVar12);
            fVar10 = (fVar10 + fVar1) * *(float *)(this + 0x28);
            fVar10 = fVar10 - (float)((int)(fVar16 * fVar10) * 2);
            if (fVar1 <= fVar10) {
              fVar11 = (fVar7 - fVar10) - fVar16;
              fVar8 = ((fVar7 - fVar10) - fVar1) * *(float *)(this + 0x24);
              fVar11 = fVar11 + fVar11;
            }
            else {
              fVar8 = (fVar10 - fVar1) * *(float *)(this + 0x24);
              fVar11 = (fVar10 - fVar16) + (fVar10 - fVar16);
            }
            fVar13 = fVar13 + fVar11 * fVar6;
            fVar15 = fVar15 * fVar9;
            fVar14 = fVar14 * fVar9;
            fVar12 = fVar12 * fVar9;
            fVar6 = fVar6 * (fVar8 + fVar1) * *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar13;
        case 4:
          fVar9 = *(float *)(this + 0x1c);
          while( true ) {
            iVar4 = iVar3;
            fVar7 = SingleValueCubic<float>(iVar2,fVar15,fVar14,fVar12);
            fVar7 = (fVar7 + fVar1) * *(float *)(this + 0x28);
            fVar7 = fVar7 - (float)((int)(fVar16 * fVar7) * 2);
            if (fVar1 <= fVar7) {
              fVar10 = (_LC40 - fVar7) - fVar16;
              fVar11 = ((_LC40 - fVar7) - fVar1) * *(float *)(this + 0x24);
              fVar10 = fVar10 + fVar10;
            }
            else {
              fVar11 = (fVar7 - fVar1) * *(float *)(this + 0x24);
              fVar10 = (fVar7 - fVar16) + (fVar7 - fVar16);
            }
            fVar13 = fVar13 + fVar10 * fVar6;
            fVar15 = fVar15 * fVar9;
            fVar14 = fVar14 * fVar9;
            fVar12 = fVar12 * fVar9;
            fVar6 = fVar6 * (fVar11 + fVar1) * *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar13;
        case 5:
          fVar9 = *(float *)(this + 0x1c);
          fVar7 = _LC40;
          while( true ) {
            iVar4 = iVar3;
            fVar10 = SingleValue<float>(iVar2,fVar15,fVar14,fVar12);
            fVar10 = (fVar10 + fVar1) * *(float *)(this + 0x28);
            fVar10 = fVar10 - (float)((int)(fVar16 * fVar10) * 2);
            if (fVar1 <= fVar10) {
              fVar11 = (fVar7 - fVar10) - fVar16;
              fVar8 = ((fVar7 - fVar10) - fVar1) * *(float *)(this + 0x24);
              fVar11 = fVar11 + fVar11;
            }
            else {
              fVar8 = (fVar10 - fVar1) * *(float *)(this + 0x24);
              fVar11 = (fVar10 - fVar16) + (fVar10 - fVar16);
            }
            fVar13 = fVar13 + fVar11 * fVar6;
            fVar15 = fVar15 * fVar9;
            fVar14 = fVar14 * fVar9;
            fVar12 = fVar12 * fVar9;
            fVar6 = fVar6 * (fVar8 + fVar1) * *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar13;
        }
        fVar7 = *(float *)(this + 0x28) - (float)((int)(_LC5 * *(float *)(this + 0x28)) * 2);
        if (_LC8 <= fVar7) {
          fVar7 = _LC40 - fVar7;
        }
        fVar10 = *(float *)(this + 0x1c);
        fVar15 = fVar15 * fVar10;
        fVar14 = fVar14 * fVar10;
        fVar12 = fVar12 * fVar10;
        fVar10 = ((fVar7 - _LC5) + (fVar7 - _LC5)) * fVar6;
        fVar6 = fVar6 * ((fVar7 - _LC8) * *(float *)(this + 0x24) + _LC8) * *(float *)(this + 0x20);
        fVar13 = fVar13 + fVar10;
        iVar2 = iVar3;
      } while (iVar3 != iVar5);
      return fVar13;
    }
  }
  else if (iVar4 == 1) {
    fVar6 = *(float *)(this + 0x2c);
    if (0 < *(int *)(this + 0x18)) {
      fVar9 = *(float *)(this + 0x38);
      fVar13 = 0.0;
      iVar5 = *(int *)(this + 0x18) + iVar2;
      iVar4 = *(int *)(this + 0x30);
      do {
        iVar3 = iVar2 + 1;
        switch(*(undefined4 *)(this + 8)) {
        case 0:
          fVar9 = *(float *)(this + 0x1c);
          while( true ) {
            iVar4 = iVar3;
            fVar7 = SingleOpenSimplex2<float>(iVar2,fVar15,fVar14,fVar12);
            fVar15 = fVar15 * fVar9;
            fVar14 = fVar14 * fVar9;
            fVar12 = fVar12 * fVar9;
            fVar13 = fVar13 + fVar7 * fVar6;
            fVar6 = fVar6 * (((fVar7 + fVar1) * fVar16 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                    *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar13;
        case 1:
          fVar9 = *(float *)(this + 0x1c);
          while( true ) {
            iVar4 = iVar3;
            fVar7 = SingleOpenSimplex2S<float>(iVar2,fVar15,fVar14,fVar12);
            fVar15 = fVar15 * fVar9;
            fVar14 = fVar14 * fVar9;
            fVar12 = fVar12 * fVar9;
            fVar13 = fVar13 + fVar7 * fVar6;
            fVar6 = fVar6 * (((fVar7 + fVar1) * fVar16 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                    *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar13;
        case 2:
          while( true ) {
            fVar12 = SingleCellular<float>(iVar4,fVar9,fVar15,fVar14);
            fVar13 = fVar13 + fVar12 * fVar6;
            fVar15 = fVar15 * *(float *)(this + 0x1c);
            fVar14 = fVar14 * *(float *)(this + 0x1c);
            fVar6 = fVar6 * (((fVar12 + fVar1) * fVar16 - fVar1) * *(float *)(this + 0x24) + fVar1)
                    * *(float *)(this + 0x20);
            if (iVar5 == iVar3) break;
            iVar3 = iVar3 + 1;
          }
          return fVar13;
        case 3:
          fVar9 = *(float *)(this + 0x1c);
          while( true ) {
            iVar4 = iVar3;
            fVar7 = SinglePerlin<float>(iVar2,fVar15,fVar14,fVar12);
            fVar15 = fVar15 * fVar9;
            fVar14 = fVar14 * fVar9;
            fVar12 = fVar12 * fVar9;
            fVar13 = fVar13 + fVar7 * fVar6;
            fVar6 = fVar6 * (((fVar7 + fVar1) * fVar16 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                    *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar13;
        case 4:
          fVar9 = *(float *)(this + 0x1c);
          while( true ) {
            iVar4 = iVar3;
            fVar7 = SingleValueCubic<float>(iVar2,fVar15,fVar14,fVar12);
            fVar15 = fVar15 * fVar9;
            fVar14 = fVar14 * fVar9;
            fVar12 = fVar12 * fVar9;
            fVar13 = fVar13 + fVar7 * fVar6;
            fVar6 = fVar6 * (((fVar7 + fVar1) * fVar16 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                    *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar13;
        case 5:
          fVar9 = *(float *)(this + 0x1c);
          while( true ) {
            iVar4 = iVar3;
            fVar7 = SingleValue<float>(iVar2,fVar15,fVar14,fVar12);
            fVar15 = fVar15 * fVar9;
            fVar14 = fVar14 * fVar9;
            fVar12 = fVar12 * fVar9;
            fVar13 = fVar13 + fVar7 * fVar6;
            fVar6 = fVar6 * (((fVar7 + fVar1) * fVar16 - fVar1) * *(float *)(this + 0x24) + fVar1) *
                    *(float *)(this + 0x20);
            if (iVar5 == iVar4) break;
            iVar3 = iVar4 + 1;
            iVar2 = iVar4;
          }
          return fVar13;
        }
        fVar7 = *(float *)(this + 0x1c);
        fVar15 = fVar15 * fVar7;
        fVar14 = fVar14 * fVar7;
        fVar12 = fVar12 * fVar7;
        fVar13 = fVar13 + fVar6 * 0.0;
        fVar6 = fVar6 * (*(float *)(this + 0x24) * _LC33 + _LC8) * *(float *)(this + 0x20);
        iVar2 = iVar3;
      } while (iVar3 != iVar5);
      return fVar13;
    }
  }
  else {
    switch(*(undefined4 *)(this + 8)) {
    case 0:
      fVar12 = SingleOpenSimplex2<float>(iVar2,fVar15,fVar14,fVar12);
      return fVar12;
    case 1:
      fVar12 = SingleOpenSimplex2S<float>(iVar2,fVar15,fVar14,fVar12);
      return fVar12;
    case 2:
      fVar12 = SingleCellular<float>(*(int *)(this + 0x30),*(float *)(this + 0x38),fVar15,fVar14);
      return fVar12;
    case 3:
      fVar12 = SinglePerlin<float>(iVar2,fVar15,fVar14,fVar12);
      return fVar12;
    case 4:
      fVar12 = SingleValueCubic<float>(iVar2,fVar15,fVar14,fVar12);
      return fVar12;
    case 5:
      fVar12 = SingleValue<float>(iVar2,fVar15,fVar14,fVar12);
      return fVar12;
    }
  }
  return 0.0;
}



/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */

char * D_METHOD<char_const*>(char *param_1,char *param_2)

{
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 *local_28 [3];
  long local_10;
  
  local_28[0] = local_38;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  D_METHODP(param_1,(char ***)param_2,(uint)local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10f85d);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC54;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010f94d;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC54;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar7 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_0010f94d:
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar5 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<FastNoiseLite::NoiseType, void>::get_class_info() */

GetTypeInfo<FastNoiseLite::NoiseType,void> * __thiscall
GetTypeInfo<FastNoiseLite::NoiseType,void>::get_class_info
          (GetTypeInfo<FastNoiseLite::NoiseType,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "FastNoiseLite::NoiseType";
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<FastNoiseLite::FractalType, void>::get_class_info() */

GetTypeInfo<FastNoiseLite::FractalType,void> * __thiscall
GetTypeInfo<FastNoiseLite::FractalType,void>::get_class_info
          (GetTypeInfo<FastNoiseLite::FractalType,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "FastNoiseLite::FractalType";
  local_40 = 0x1a;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<FastNoiseLite::CellularDistanceFunction, void>::get_class_info() */

GetTypeInfo<FastNoiseLite::CellularDistanceFunction,void> * __thiscall
GetTypeInfo<FastNoiseLite::CellularDistanceFunction,void>::get_class_info
          (GetTypeInfo<FastNoiseLite::CellularDistanceFunction,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "FastNoiseLite::CellularDistanceFunction";
  local_40 = 0x27;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<FastNoiseLite::DomainWarpType, void>::get_class_info() */

GetTypeInfo<FastNoiseLite::DomainWarpType,void> * __thiscall
GetTypeInfo<FastNoiseLite::DomainWarpType,void>::get_class_info
          (GetTypeInfo<FastNoiseLite::DomainWarpType,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "FastNoiseLite::DomainWarpType";
  local_40 = 0x1d;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<FastNoiseLite::DomainWarpFractalType, void>::get_class_info() */

GetTypeInfo<FastNoiseLite::DomainWarpFractalType,void> * __thiscall
GetTypeInfo<FastNoiseLite::DomainWarpFractalType,void>::get_class_info
          (GetTypeInfo<FastNoiseLite::DomainWarpFractalType,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "FastNoiseLite::DomainWarpFractalType";
  local_40 = 0x24;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x27;
  local_38 = "FastNoiseLite::CellularDistanceFunction";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::CellularReturnType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<FastNoiseLite::CellularReturnType>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "FastNoiseLite::CellularReturnType";
  local_40 = 0x21;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::FractalType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<FastNoiseLite::FractalType>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x1a;
  local_38 = "FastNoiseLite::FractalType";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::NoiseType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<FastNoiseLite::NoiseType>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x18;
  local_38 = "FastNoiseLite::NoiseType";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::DomainWarpType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<FastNoiseLite::DomainWarpType>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x1d;
  local_38 = "FastNoiseLite::DomainWarpType";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x24;
  local_38 = "FastNoiseLite::DomainWarpFractalType";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001109b9;
  local_78 = 0;
  local_68 = &_LC32;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00110ab0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00110ab0;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_001109b9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* Noise::is_class(String const&) const */

undefined8 __thiscall Noise::is_class(Noise *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00110caf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00110caf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00110d63;
  }
  cVar6 = String::operator==(param_1,"Noise");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00110eab;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00110eab:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00110d63;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
            if (*(long *)(lVar4 + 0x10) != 0) {
              do {
                lVar5 = *plVar1;
                if (lVar5 == 0) goto LAB_00110f87;
                LOCK();
                lVar7 = *plVar1;
                bVar9 = lVar5 == lVar7;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar7 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar7 != -1) {
                local_60 = *(long *)(lVar4 + 0x10);
              }
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
LAB_00110f87:
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_00110d63;
      }
      cVar6 = String::operator==(param_1,"RefCounted");
      if (cVar6 == '\0') {
        for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
          lVar4 = *(long *)(lVar2 + 0x20);
          if (lVar4 == 0) {
            local_60 = 0;
          }
          else {
            pcVar3 = *(char **)(lVar4 + 8);
            local_60 = 0;
            if (pcVar3 == (char *)0x0) {
              plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
              if (*(long *)(lVar4 + 0x10) != 0) {
                do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00110e33;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                    *plVar1 = lVar5 + 1;
                    lVar7 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar9);
                if (lVar7 != -1) {
                  local_60 = *(long *)(lVar4 + 0x10);
                }
              }
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_60);
            }
          }
LAB_00110e33:
          cVar6 = String::operator==(param_1,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (cVar6 != '\0') goto LAB_00110d63;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_0011106e;
      }
    }
  }
LAB_00110d63:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011106e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FastNoiseLite::is_class(String const&) const */

undefined8 __thiscall FastNoiseLite::is_class(FastNoiseLite *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001110ef;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001110ef:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_001111a3;
  }
  cVar5 = String::operator==(param_1,"FastNoiseLite");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Noise::is_class((Noise *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001111a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::CellularReturnType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<FastNoiseLite::CellularReturnType>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  details local_78 [8];
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "FastNoiseLite::CellularReturnType";
    local_60._0_8_ = 0x21;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_78,(String *)&local_80);
    StringName::StringName((StringName *)&local_70,(String *)local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001114a9;
  local_78 = 0;
  local_68 = &_LC32;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001115a0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001115a0;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_001114a9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Vector3>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector3>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00111759;
  local_78 = 0;
  local_68 = &_LC32;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,9);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111850:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111850;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00111759:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00111a09;
  local_78 = 0;
  local_68 = &_LC32;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00111b00:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00111b00;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00111a09:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<FastNoiseLite::FractalType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<FastNoiseLite::FractalType>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "FastNoiseLite::FractalType";
    local_60._0_8_ = 0x1a;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_80);
    StringName::StringName((StringName *)&local_90,(String *)local_88,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::DomainWarpFractalType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<FastNoiseLite::DomainWarpFractalType>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "FastNoiseLite::DomainWarpFractalType";
    local_60._0_8_ = 0x24;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_80);
    StringName::StringName((StringName *)&local_90,(String *)local_88,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::NoiseType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<FastNoiseLite::NoiseType>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "FastNoiseLite::NoiseType";
    local_60._0_8_ = 0x18;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_80);
    StringName::StringName((StringName *)&local_90,(String *)local_88,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::DomainWarpType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<FastNoiseLite::DomainWarpType>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "FastNoiseLite::DomainWarpType";
    local_60._0_8_ = 0x1d;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_80);
    StringName::StringName((StringName *)&local_90,(String *)local_88,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::CellularDistanceFunction>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<FastNoiseLite::CellularDistanceFunction>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_90;
  details local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_68 = "FastNoiseLite::CellularDistanceFunction";
    local_60._0_8_ = 0x27;
    String::parse_latin1((StrRange *)&local_80);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_80);
    StringName::StringName((StringName *)&local_90,(String *)local_88,false);
    local_60 = (undefined1  [16])0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar6 + 2) = uVar4;
    }
    if (*(long *)(puVar6 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar4 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar6 + 4) = uVar4;
    }
    lVar5 = local_48;
    puVar6[6] = (undefined4)local_50;
    if (*(long *)(puVar6 + 8) == local_48) {
      puVar6[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
      *(long *)(puVar6 + 8) = local_48;
      puVar6[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_60._0_8_;
    if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_60._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_60._8_8_;
        local_60 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar4 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001129e5:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001129f7:
    lVar2 = *(long *)param_1;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001129e5;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      goto LAB_001129f7;
    }
    StringName::unref();
    lVar2 = *(long *)param_1;
    local_68 = local_80;
  }
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_68);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (!param_2) goto LAB_00112b6b;
  local_98 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_88 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_88);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00112cd8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112cd8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_80;
    }
  }
  if (*(long *)param_1 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_68);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
LAB_00112b6b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Noise::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Noise::_get_property_listv(Noise *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Noise";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Noise";
  local_98 = 0;
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00113078:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00113078;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00113095;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00113095:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Noise",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FastNoiseLite::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall FastNoiseLite::_get_property_listv(FastNoiseLite *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Noise::_get_property_listv((Noise *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "FastNoiseLite";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FastNoiseLite";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001134c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001134c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001134e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001134e5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"FastNoiseLite",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Noise::_get_property_listv((Noise *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, FastNoiseLite::NoiseType>(void
   (FastNoiseLite::*)(FastNoiseLite::NoiseType)) */

MethodBind *
create_method_bind<FastNoiseLite,FastNoiseLite::NoiseType>(_func_void_NoiseType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_NoiseType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121b60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, FastNoiseLite::NoiseType>(FastNoiseLite::NoiseType
   (FastNoiseLite::*)() const) */

MethodBind * create_method_bind<FastNoiseLite,FastNoiseLite::NoiseType>(_func_NoiseType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_NoiseType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121bc0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, int>(void (FastNoiseLite::*)(int)) */

MethodBind * create_method_bind<FastNoiseLite,int>(_func_void_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121c20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, int>(int (FastNoiseLite::*)() const) */

MethodBind * create_method_bind<FastNoiseLite,int>(_func_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121c80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, float>(void (FastNoiseLite::*)(float)) */

MethodBind * create_method_bind<FastNoiseLite,float>(_func_void_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121ce0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, float>(float (FastNoiseLite::*)() const) */

MethodBind * create_method_bind<FastNoiseLite,float>(_func_float *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121d40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, Vector3>(void (FastNoiseLite::*)(Vector3)) */

MethodBind * create_method_bind<FastNoiseLite,Vector3>(_func_void_Vector3 *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_Vector3 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121da0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, Vector3>(Vector3 (FastNoiseLite::*)() const) */

MethodBind * create_method_bind<FastNoiseLite,Vector3>(_func_Vector3 *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Vector3 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121e00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, FastNoiseLite::FractalType>(void
   (FastNoiseLite::*)(FastNoiseLite::FractalType)) */

MethodBind *
create_method_bind<FastNoiseLite,FastNoiseLite::FractalType>(_func_void_FractalType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_FractalType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121e60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite,
   FastNoiseLite::FractalType>(FastNoiseLite::FractalType (FastNoiseLite::*)() const) */

MethodBind *
create_method_bind<FastNoiseLite,FastNoiseLite::FractalType>(_func_FractalType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_FractalType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121ec0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, FastNoiseLite::CellularDistanceFunction>(void
   (FastNoiseLite::*)(FastNoiseLite::CellularDistanceFunction)) */

MethodBind *
create_method_bind<FastNoiseLite,FastNoiseLite::CellularDistanceFunction>
          (_func_void_CellularDistanceFunction *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_CellularDistanceFunction **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121f20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite,
   FastNoiseLite::CellularDistanceFunction>(FastNoiseLite::CellularDistanceFunction
   (FastNoiseLite::*)() const) */

MethodBind *
create_method_bind<FastNoiseLite,FastNoiseLite::CellularDistanceFunction>
          (_func_CellularDistanceFunction *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_CellularDistanceFunction **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121f80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, FastNoiseLite::CellularReturnType>(void
   (FastNoiseLite::*)(FastNoiseLite::CellularReturnType)) */

MethodBind *
create_method_bind<FastNoiseLite,FastNoiseLite::CellularReturnType>
          (_func_void_CellularReturnType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_CellularReturnType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121fe0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite,
   FastNoiseLite::CellularReturnType>(FastNoiseLite::CellularReturnType (FastNoiseLite::*)() const)
    */

MethodBind *
create_method_bind<FastNoiseLite,FastNoiseLite::CellularReturnType>
          (_func_CellularReturnType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_CellularReturnType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122040;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, bool>(void (FastNoiseLite::*)(bool)) */

MethodBind * create_method_bind<FastNoiseLite,bool>(_func_void_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001220a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, bool>(bool (FastNoiseLite::*)() const) */

MethodBind * create_method_bind<FastNoiseLite,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122100;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, FastNoiseLite::DomainWarpType>(void
   (FastNoiseLite::*)(FastNoiseLite::DomainWarpType)) */

MethodBind *
create_method_bind<FastNoiseLite,FastNoiseLite::DomainWarpType>(_func_void_DomainWarpType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_DomainWarpType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122160;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite,
   FastNoiseLite::DomainWarpType>(FastNoiseLite::DomainWarpType (FastNoiseLite::*)() const) */

MethodBind *
create_method_bind<FastNoiseLite,FastNoiseLite::DomainWarpType>(_func_DomainWarpType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_DomainWarpType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001221c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite, FastNoiseLite::DomainWarpFractalType>(void
   (FastNoiseLite::*)(FastNoiseLite::DomainWarpFractalType)) */

MethodBind *
create_method_bind<FastNoiseLite,FastNoiseLite::DomainWarpFractalType>
          (_func_void_DomainWarpFractalType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_DomainWarpFractalType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122220;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite,
   FastNoiseLite::DomainWarpFractalType>(FastNoiseLite::DomainWarpFractalType (FastNoiseLite::*)()
   const) */

MethodBind *
create_method_bind<FastNoiseLite,FastNoiseLite::DomainWarpFractalType>
          (_func_DomainWarpFractalType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_DomainWarpFractalType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122280;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<FastNoiseLite>(void (FastNoiseLite::*)()) */

MethodBind * create_method_bind<FastNoiseLite>(_func_void *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_001222e0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FastNoiseLite";
  local_30 = 0xd;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FastNoiseLite::_initialize_classv() */

void FastNoiseLite::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Noise::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "RefCounted";
          local_70 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_00128008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Resource";
        local_70 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Noise";
      local_70 = 0;
      local_50 = 5;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        Noise::_bind_methods();
      }
      Noise::initialize_class()::initialized = '\x01';
    }
    local_58 = "Noise";
    local_68 = 0;
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "FastNoiseLite";
    local_70 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00115828) */
/* WARNING: Removing unreachable block (ram,0x001159bd) */
/* WARNING: Removing unreachable block (ram,0x001159c9) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115b90;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)();
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00115b90:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00116002;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00115e86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00116002:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001161d8;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001161d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116330;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00116330:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::validated_call
          (MethodBindTRC<FastNoiseLite::DomainWarpFractalType> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116594;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_00116594:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::ptrcall
          (MethodBindTRC<FastNoiseLite::DomainWarpFractalType> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00116773;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar2;
LAB_00116773:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::DomainWarpFractalType>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<FastNoiseLite::DomainWarpFractalType>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00116b04;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011696c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00116b04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::DomainWarpFractalType>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<FastNoiseLite::DomainWarpFractalType>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00116d04;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00116d04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::DomainWarpType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<FastNoiseLite::DomainWarpType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00116dd0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00116dd0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::DomainWarpType>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<FastNoiseLite::DomainWarpType>::validated_call
          (MethodBindTRC<FastNoiseLite::DomainWarpType> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117034;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_00117034:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::DomainWarpType>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<FastNoiseLite::DomainWarpType>::ptrcall
          (MethodBindTRC<FastNoiseLite::DomainWarpType> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117213;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar2;
LAB_00117213:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::DomainWarpType>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<FastNoiseLite::DomainWarpType>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001175a2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001175a2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::DomainWarpType>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<FastNoiseLite::DomainWarpType>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001177a2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_001177a2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117870;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00117870:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant VVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117ad2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar2 = (Variant)(*pcVar3)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar2;
LAB_00117ad2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00117cb1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar2;
LAB_00117cb1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00118034;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00118034:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00118232;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011809e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00118232:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::CellularReturnType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<FastNoiseLite::CellularReturnType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118300;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00118300:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::CellularReturnType>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<FastNoiseLite::CellularReturnType>::validated_call
          (MethodBindTRC<FastNoiseLite::CellularReturnType> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118564;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_00118564:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::CellularReturnType>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<FastNoiseLite::CellularReturnType>::ptrcall
          (MethodBindTRC<FastNoiseLite::CellularReturnType> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00118743;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar2;
LAB_00118743:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::CellularReturnType>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<FastNoiseLite::CellularReturnType>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00118ad4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011893c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00118ad4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::CellularReturnType>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<FastNoiseLite::CellularReturnType>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00118cd2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00118cd2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118da0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00118da0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::validated_call
          (MethodBindTRC<FastNoiseLite::CellularDistanceFunction> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119004;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_00119004:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::ptrcall
          (MethodBindTRC<FastNoiseLite::CellularDistanceFunction> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001191e3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar2;
LAB_001191e3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::CellularDistanceFunction>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<FastNoiseLite::CellularDistanceFunction>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00119572;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001193d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00119572:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::CellularDistanceFunction>::ptrcall(Object*, void const**, void*) const
    */

void MethodBindT<FastNoiseLite::CellularDistanceFunction>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00119774;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001195db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00119774:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::FractalType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<FastNoiseLite::FractalType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119840;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00119840:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::FractalType>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<FastNoiseLite::FractalType>::validated_call
          (MethodBindTRC<FastNoiseLite::FractalType> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119aa4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_00119aa4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::FractalType>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<FastNoiseLite::FractalType>::ptrcall
          (MethodBindTRC<FastNoiseLite::FractalType> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119c83;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar2;
LAB_00119c83:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::FractalType>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<FastNoiseLite::FractalType>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011a014;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011a014:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::FractalType>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<FastNoiseLite::FractalType>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011a214;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a07b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011a214:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector3>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  long lVar4;
  char *pcVar5;
  Variant *pVVar6;
  long *plVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_54 [12];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar7 = (long *)plVar8[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar7 = (long *)(plVar8[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_68 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar4 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar8 = (long *)(local_70 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      auVar3._8_4_ = local_54._8_4_;
      auVar3._0_8_ = local_54._0_8_;
      if ((StringName::configured != '\0') && (local_54 = auVar3, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a2f0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  auVar2._8_4_ = local_54._8_4_;
  auVar2._0_8_ = local_54._0_8_;
  pVVar6 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar6 & 1) != 0) {
        pVVar6 = *(Variant **)(pVVar6 + *(long *)((long)plVar8 + (long)pVVar1) + -1);
      }
      local_54 = (*(code *)pVVar6)();
      Variant::Variant((Variant *)local_48,local_54);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
      local_54 = auVar2;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011a2f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector3>::validated_call
          (MethodBindTRC<Vector3> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [12];
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar3 = (long *)(local_60 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a55b;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar4 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])(param_3 + 8) = auVar4;
LAB_0011a55b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector3>::ptrcall
          (MethodBindTRC<Vector3> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [12];
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar3 = (long *)(local_60 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a73a;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar4 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])param_3 = auVar4;
LAB_0011a73a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector3>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011aacc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),*(undefined4 *)(*(long *)param_3 + 0x10),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011aacc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011acdc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011ab42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (**param_3,*(undefined4 *)(*param_3 + 1),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011acdc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  float fVar7;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011adb0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      fVar7 = (float)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,fVar7);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011adb0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float>::validated_call
          (MethodBindTRC<float> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  float fVar4;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b018;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar4 = (float)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar4;
LAB_0011b018:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float>::ptrcall
          (MethodBindTRC<float> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  float fVar4;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b1f7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar4 = (float)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar4;
LAB_0011b1f7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b582;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0011b3ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011b582:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011b782;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0011b5ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011b782:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011b850;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011b850:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  int iVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bab4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar2;
LAB_0011bab4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bc93;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar2;
LAB_0011bc93:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c022;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011c022:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011c224;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c08b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011c224:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::NoiseType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<FastNoiseLite::NoiseType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c2f0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0011c2f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::NoiseType>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<FastNoiseLite::NoiseType>::validated_call
          (MethodBindTRC<FastNoiseLite::NoiseType> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c554;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
LAB_0011c554:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<FastNoiseLite::NoiseType>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<FastNoiseLite::NoiseType>::ptrcall
          (MethodBindTRC<FastNoiseLite::NoiseType> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar1 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011c733;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar2;
LAB_0011c733:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::NoiseType>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<FastNoiseLite::NoiseType>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011cac2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011cac2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<FastNoiseLite::NoiseType>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<FastNoiseLite::NoiseType>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar2 = (long *)(local_40 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011ccc2;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011cb27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011ccc2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector3>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  undefined1 auVar13 [16];
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0);
      pcVar5 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_68 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar10 = (long *)(local_70 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0011cdd0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011ce20;
LAB_0011ce10:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011ce20:
        uVar7 = 4;
        goto LAB_0011cdc5;
      }
      if (in_R8D == 1) goto LAB_0011ce10;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,9);
    uVar4 = _LC198;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    auVar13 = Variant::operator_cast_to_Vector3(pVVar11);
    (*(code *)pVVar12)(auVar13._0_8_,auVar13._8_8_ & 0xffffffff,
                       (Variant *)((long)plVar10 + (long)pVVar1));
  }
  else {
    uVar7 = 3;
LAB_0011cdc5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011cdd0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   FastNoiseLite::DomainWarpFractalType>(__UnexistingClass*, void
   (__UnexistingClass::*)(FastNoiseLite::DomainWarpFractalType), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::DomainWarpFractalType>
               (__UnexistingClass *param_1,_func_void_DomainWarpFractalType *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011d12d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011d190;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011d190:
      uVar6 = 4;
LAB_0011d12d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011d0ab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011d0ab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_DomainWarpFractalType **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC200;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011d106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<FastNoiseLite::DomainWarpFractalType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<FastNoiseLite::DomainWarpFractalType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011d1f6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::DomainWarpFractalType>
            (p_Var4,(_func_void_DomainWarpFractalType *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011d1f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   FastNoiseLite::DomainWarpType>(__UnexistingClass*, void
   (__UnexistingClass::*)(FastNoiseLite::DomainWarpType), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::DomainWarpType>
               (__UnexistingClass *param_1,_func_void_DomainWarpType *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011d4fd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011d560;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011d560:
      uVar6 = 4;
LAB_0011d4fd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011d47b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011d47b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_DomainWarpType **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC200;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011d4d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<FastNoiseLite::DomainWarpType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<FastNoiseLite::DomainWarpType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011d5c6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::DomainWarpType>
            (p_Var4,(_func_void_DomainWarpType *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011d5c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011d8cd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011d930;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011d930:
      uVar6 = 4;
LAB_0011d8cd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011d84b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011d84b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC37;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0011d8a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011d996;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var4,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011d996:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   FastNoiseLite::CellularReturnType>(__UnexistingClass*, void
   (__UnexistingClass::*)(FastNoiseLite::CellularReturnType), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::CellularReturnType>
               (__UnexistingClass *param_1,_func_void_CellularReturnType *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011dc9d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011dd00;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011dd00:
      uVar6 = 4;
LAB_0011dc9d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011dc1b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011dc1b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_CellularReturnType **)(param_2 + *(long *)(param_1 + (long)param_3) + -1)
    ;
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC200;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011dc76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<FastNoiseLite::CellularReturnType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<FastNoiseLite::CellularReturnType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011dd66;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::CellularReturnType>
            (p_Var4,(_func_void_CellularReturnType *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011dd66:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   FastNoiseLite::CellularDistanceFunction>(__UnexistingClass*, void
   (__UnexistingClass::*)(FastNoiseLite::CellularDistanceFunction), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::CellularDistanceFunction>
               (__UnexistingClass *param_1,_func_void_CellularDistanceFunction *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011e06d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011e0d0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011e0d0:
      uVar6 = 4;
LAB_0011e06d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011dfeb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011dfeb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_CellularDistanceFunction **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC200;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011e046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<FastNoiseLite::CellularDistanceFunction>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<FastNoiseLite::CellularDistanceFunction>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011e136;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::CellularDistanceFunction>
            (p_Var4,(_func_void_CellularDistanceFunction *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011e136:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, FastNoiseLite::FractalType>(__UnexistingClass*,
   void (__UnexistingClass::*)(FastNoiseLite::FractalType), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::FractalType>
               (__UnexistingClass *param_1,_func_void_FractalType *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011e43d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011e4a0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011e4a0:
      uVar6 = 4;
LAB_0011e43d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011e3bb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011e3bb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_FractalType **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC200;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011e416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<FastNoiseLite::FractalType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<FastNoiseLite::FractalType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011e506;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::FractalType>
            (p_Var4,(_func_void_FractalType *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011e506:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float>
               (__UnexistingClass *param_1,_func_void_float *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  float fVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011e80d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011e870;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011e870:
      uVar6 = 4;
LAB_0011e80d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011e78b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011e78b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC201;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x0011e7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011e8d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var4,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011e8d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011ebdd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011ec40;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011ec40:
      uVar6 = 4;
LAB_0011ebdd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011eb5b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011eb5b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC200;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011ebb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011eca6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var4,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011eca6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, FastNoiseLite::NoiseType>(__UnexistingClass*,
   void (__UnexistingClass::*)(FastNoiseLite::NoiseType), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::NoiseType>
               (__UnexistingClass *param_1,_func_void_NoiseType *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011efad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011f010;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011f010:
      uVar6 = 4;
LAB_0011efad:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0011ef2b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011ef2b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_NoiseType **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC200;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011ef86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<FastNoiseLite::NoiseType>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<FastNoiseLite::NoiseType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC193,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011f076;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,FastNoiseLite::NoiseType>
            (p_Var4,(_func_void_NoiseType *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011f076:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::DomainWarpFractalType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::DomainWarpFractalType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<FastNoiseLite::DomainWarpFractalType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::DomainWarpFractalType>::~MethodBindT
          (MethodBindT<FastNoiseLite::DomainWarpFractalType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<FastNoiseLite::DomainWarpType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::DomainWarpType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::DomainWarpType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<FastNoiseLite::DomainWarpType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::DomainWarpType>::~MethodBindT
          (MethodBindT<FastNoiseLite::DomainWarpType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<FastNoiseLite::CellularReturnType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::CellularReturnType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::CellularReturnType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<FastNoiseLite::CellularReturnType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::CellularReturnType>::~MethodBindT
          (MethodBindT<FastNoiseLite::CellularReturnType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::CellularDistanceFunction>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::CellularDistanceFunction> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<FastNoiseLite::CellularDistanceFunction>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::CellularDistanceFunction>::~MethodBindT
          (MethodBindT<FastNoiseLite::CellularDistanceFunction> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<FastNoiseLite::FractalType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::FractalType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::FractalType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<FastNoiseLite::FractalType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::FractalType>::~MethodBindT(MethodBindT<FastNoiseLite::FractalType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector3>::~MethodBindT() */

void __thiscall MethodBindT<Vector3>::~MethodBindT(MethodBindT<Vector3> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<FastNoiseLite::NoiseType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<FastNoiseLite::NoiseType>::~MethodBindTRC
          (MethodBindTRC<FastNoiseLite::NoiseType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<FastNoiseLite::NoiseType>::~MethodBindT() */

void __thiscall
MethodBindT<FastNoiseLite::NoiseType>::~MethodBindT(MethodBindT<FastNoiseLite::NoiseType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.