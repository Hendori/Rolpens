
/* graphite2::GlyphFace::getMetric(unsigned char) const */

undefined8 __thiscall graphite2::GlyphFace::getMetric(GlyphFace *this,uchar param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)
          ((ulong)((long)&switchD_00100020::switchdataD_001000ac +
                  (long)(int)(&switchD_00100020::switchdataD_001000ac)[param_1]) >> 0x20);
  switch(param_1) {
  case '\0':
  case '\x04':
    return CONCAT44(uVar1,(int)*(float *)this);
  case '\x01':
    return CONCAT44(uVar1,(int)(*(float *)(this + 0x10) - *(float *)(this + 8)));
  case '\x02':
    return CONCAT44(uVar1,(int)*(float *)(this + 0xc));
  case '\x03':
    return CONCAT44(uVar1,(int)*(float *)(this + 4));
  case '\x05':
    return CONCAT44(uVar1,(int)*(float *)(this + 8));
  case '\x06':
    return CONCAT44(uVar1,(int)(*(float *)(this + 0xc) - *(float *)(this + 4)));
  case '\a':
    return CONCAT44(uVar1,(int)(*(float *)(this + 8) - *(float *)this));
  case '\b':
    return CONCAT44(uVar1,(int)*(float *)(this + 0x10));
  case '\t':
    return CONCAT44(uVar1,(int)*(float *)(this + 0x14));
  default:
    return 0;
  }
}



/* graphite2::GlyphFace::getMetric(unsigned char) const [clone .cold] */

undefined8 graphite2::GlyphFace::getMetric(uchar param_1)

{
  return 0;
}


