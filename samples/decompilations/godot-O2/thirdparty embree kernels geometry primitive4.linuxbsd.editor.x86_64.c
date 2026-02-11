
/* embree::SubdivPatch1::Type::name() const */

char * embree::SubdivPatch1::Type::name(void)

{
  return "subdivpatch1";
}



/* embree::SubdivPatch1::Type::sizeTotal(char const*) const */

undefined8 embree::SubdivPatch1::Type::sizeTotal(char *param_1)

{
  return 1;
}



/* embree::TriangleMvMB<4>::Type::getBytes(char const*) const */

undefined8 embree::TriangleMvMB<4>::Type::getBytes(char *param_1)

{
  return 0x140;
}



/* embree::Object::Type::name() const */

char * embree::Object::Type::name(void)

{
  return "object";
}



/* embree::InstanceArrayPrimitive::Type::getBytes(char const*) const */

undefined8 embree::InstanceArrayPrimitive::Type::getBytes(char *param_1)

{
  return 8;
}



/* embree::InstancePrimitive::Type::name() const */

char * embree::InstancePrimitive::Type::name(void)

{
  return "instance";
}



/* embree::InstancePrimitive::Type::getBytes(char const*) const */

undefined8 embree::InstancePrimitive::Type::getBytes(char *param_1)

{
  return 0x10;
}



/* embree::InstanceArrayPrimitive::Type::name() const */

char * embree::InstanceArrayPrimitive::Type::name(void)

{
  return "instance_array";
}



/* embree::SubGrid::Type::name() const */

char * embree::SubGrid::Type::name(void)

{
  return "subgrid";
}



/* embree::SubGrid::Type::getBytes(char const*) const */

undefined8 embree::SubGrid::Type::getBytes(char *param_1)

{
  return 0xc;
}



/* embree::CurveNv<4>::Type::sizeActive(char const*) const */

ulong __thiscall embree::CurveNv<4>::Type::sizeActive(Type *this,char *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 in_RAX;
  ulong uVar4;
  
  if ((*param_1 & 0x1cU) == 0) {
    auVar2._8_4_ = -(uint)(*(int *)(param_1 + 0x28) == -1) ^ 0xffffffff;
    auVar2._0_8_ = CONCAT44(-(uint)(*(int *)(param_1 + 0x24) == -1),
                            -(uint)(*(int *)(param_1 + 0x20) == -1)) ^ 0xffffffffffffffff;
    auVar2._12_4_ = -(uint)(*(int *)(param_1 + 0x2c) == -1) ^ 0xffffffff;
    uVar3 = movmskps((int)in_RAX,auVar2);
    uVar4 = ~CONCAT44((int)((ulong)in_RAX >> 0x20),uVar3);
    uVar1 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    return uVar1;
  }
  return (ulong)(byte)param_1[1];
}



/* embree::CurveNv<4>::Type::name() const */

char * embree::CurveNv<4>::Type::name(void)

{
  return "curve4v";
}



/* embree::CurveNv<4>::Type::getBytes(char const*) const */

long __thiscall embree::CurveNv<4>::Type::getBytes(Type *this,char *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  pcVar1 = *(code **)(*(long *)this + 8);
  if ((*param_1 & 0x1cU) != 0) {
    if (pcVar1 == sizeActive) {
      uVar5 = (ulong)(byte)param_1[1];
    }
    else {
      uVar5 = (*pcVar1)();
    }
    lVar4 = (ulong)((uint)uVar5 & 3) * 0x59 + 0x16;
    if ((uVar5 & 3) == 0) {
      lVar4 = 0;
    }
    return lVar4 + (uVar5 >> 2) * 0x17a;
  }
  if (pcVar1 == sizeActive) {
    auVar2._8_4_ = -(uint)(*(int *)(param_1 + 0x28) == -1) ^ 0xffffffff;
    auVar2._0_8_ = CONCAT44(-(uint)(*(int *)(param_1 + 0x24) == -1),
                            -(uint)(*(int *)(param_1 + 0x20) == -1)) ^ 0xffffffffffffffff;
    auVar2._12_4_ = -(uint)(*(int *)(param_1 + 0x2c) == -1) ^ 0xffffffff;
    uVar3 = movmskps(0x1000a0,auVar2);
    lVar4 = 0;
    if (~(ulong)uVar3 != 0) {
      for (; (~(ulong)uVar3 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
      }
    }
  }
  else {
    lVar4 = (*pcVar1)();
  }
  return (lVar4 + 3U >> 2) * 0x30;
}



/* embree::CurveNi<4>::Type::name() const */

char * embree::CurveNi<4>::Type::name(void)

{
  return "curve4i";
}



/* embree::CurveNv<4>::Type::sizeTotal(char const*) const */

char __thiscall embree::CurveNv<4>::Type::sizeTotal(Type *this,char *param_1)

{
  char cVar1;
  
  cVar1 = '\x04';
  if ((*param_1 & 0x1cU) != 0) {
    cVar1 = param_1[1];
  }
  return cVar1;
}



/* embree::CurveNi<4>::Type::getBytes(char const*) const */

long __thiscall embree::CurveNi<4>::Type::getBytes(Type *this,char *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  pcVar1 = *(code **)(*(long *)this + 8);
  if ((*param_1 & 0x1cU) != 0) {
    if (pcVar1 == CurveNv<4>::Type::sizeActive) {
      uVar5 = (ulong)(byte)param_1[1];
    }
    else {
      uVar5 = (*pcVar1)();
    }
    lVar4 = (ulong)((uint)uVar5 & 3) * 0x19 + 0x16;
    if ((uVar5 & 3) == 0) {
      lVar4 = 0;
    }
    return lVar4 + (uVar5 >> 2) * 0x7a;
  }
  if (pcVar1 == CurveNv<4>::Type::sizeActive) {
    auVar2._8_4_ = -(uint)(*(int *)(param_1 + 0x28) == -1) ^ 0xffffffff;
    auVar2._0_8_ = CONCAT44(-(uint)(*(int *)(param_1 + 0x24) == -1),
                            -(uint)(*(int *)(param_1 + 0x20) == -1)) ^ 0xffffffffffffffff;
    auVar2._12_4_ = -(uint)(*(int *)(param_1 + 0x2c) == -1) ^ 0xffffffff;
    uVar3 = movmskps(0x1000a0,auVar2);
    lVar4 = 0;
    if (~(ulong)uVar3 != 0) {
      for (; (~(ulong)uVar3 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
      }
    }
  }
  else {
    lVar4 = (*pcVar1)();
  }
  return (lVar4 + 3U >> 2) * 0x30;
}



/* embree::CurveNiMB<4>::Type::name() const */

char * embree::CurveNiMB<4>::Type::name(void)

{
  return "curve4imb";
}



/* embree::CurveNiMB<4>::Type::getBytes(char const*) const */

long __thiscall embree::CurveNiMB<4>::Type::getBytes(Type *this,char *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  pcVar1 = *(code **)(*(long *)this + 8);
  if ((*param_1 & 0x1cU) != 0) {
    if (pcVar1 == CurveNv<4>::Type::sizeActive) {
      uVar5 = (ulong)(byte)param_1[1];
    }
    else {
      uVar5 = (*pcVar1)();
    }
    lVar4 = (ulong)((uint)uVar5 & 3) * 0x25 + 0x1e;
    if ((uVar5 & 3) == 0) {
      lVar4 = 0;
    }
    return lVar4 + (uVar5 >> 2) * 0xb2;
  }
  if (pcVar1 == CurveNv<4>::Type::sizeActive) {
    auVar2._8_4_ = -(uint)(*(int *)(param_1 + 0x28) == -1) ^ 0xffffffff;
    auVar2._0_8_ = CONCAT44(-(uint)(*(int *)(param_1 + 0x24) == -1),
                            -(uint)(*(int *)(param_1 + 0x20) == -1)) ^ 0xffffffffffffffff;
    auVar2._12_4_ = -(uint)(*(int *)(param_1 + 0x2c) == -1) ^ 0xffffffff;
    uVar3 = movmskps(0x1000a0,auVar2);
    lVar4 = 0;
    if (~(ulong)uVar3 != 0) {
      for (; (~(ulong)uVar3 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
      }
    }
  }
  else {
    lVar4 = (*pcVar1)();
  }
  return (lVar4 + 3U >> 2) * 0x30;
}



/* embree::LineMi<4>::Type::name() const */

char * embree::LineMi<4>::Type::name(void)

{
  return "line4i";
}



/* embree::LineMi<4>::Type::sizeActive(char const*) const */

long __thiscall embree::LineMi<4>::Type::sizeActive(Type *this,char *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 in_RAX;
  ulong uVar4;
  
  auVar2._8_4_ = -(uint)(*(int *)(param_1 + 0x28) == -1) ^ 0xffffffff;
  auVar2._0_8_ = CONCAT44(-(uint)(*(int *)(param_1 + 0x24) == -1),
                          -(uint)(*(int *)(param_1 + 0x20) == -1)) ^ 0xffffffffffffffff;
  auVar2._12_4_ = -(uint)(*(int *)(param_1 + 0x2c) == -1) ^ 0xffffffff;
  uVar3 = movmskps((int)in_RAX,auVar2);
  uVar4 = ~CONCAT44((int)((ulong)in_RAX >> 0x20),uVar3);
  lVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return lVar1;
}



/* embree::TriangleMi<4>::Type::sizeTotal(char const*) const */

undefined8 embree::TriangleMi<4>::Type::sizeTotal(char *param_1)

{
  return 4;
}



/* embree::LineMi<4>::Type::getBytes(char const*) const */

undefined8 embree::LineMi<4>::Type::getBytes(char *param_1)

{
  return 0x30;
}



/* embree::TriangleM<4>::Type::name() const */

char * embree::TriangleM<4>::Type::name(void)

{
  return "triangle4";
}



/* embree::TriangleMv<4>::Type::sizeActive(char const*) const */

long __thiscall embree::TriangleMv<4>::Type::sizeActive(Type *this,char *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 in_RAX;
  ulong uVar4;
  
  auVar2._8_4_ = -(uint)(*(int *)(param_1 + 0x98) == -1) ^ 0xffffffff;
  auVar2._0_8_ = CONCAT44(-(uint)(*(int *)(param_1 + 0x94) == -1),
                          -(uint)(*(int *)(param_1 + 0x90) == -1)) ^ 0xffffffffffffffff;
  auVar2._12_4_ = -(uint)(*(int *)(param_1 + 0x9c) == -1) ^ 0xffffffff;
  uVar3 = movmskps((int)in_RAX,auVar2);
  uVar4 = ~CONCAT44((int)((ulong)in_RAX >> 0x20),uVar3);
  lVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return lVar1;
}



/* embree::TriangleMv<4>::Type::getBytes(char const*) const */

undefined8 embree::TriangleMv<4>::Type::getBytes(char *param_1)

{
  return 0xb0;
}



/* embree::TriangleMv<4>::Type::name() const */

char * embree::TriangleMv<4>::Type::name(void)

{
  return "triangle4v";
}



/* embree::TriangleMi<4>::Type::name() const */

char * embree::TriangleMi<4>::Type::name(void)

{
  return "triangle4i";
}



/* embree::TriangleMi<4>::Type::sizeActive(char const*) const */

long __thiscall embree::TriangleMi<4>::Type::sizeActive(Type *this,char *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 in_RAX;
  ulong uVar4;
  
  auVar2._8_4_ = -(uint)(*(int *)(param_1 + 0x48) == -1) ^ 0xffffffff;
  auVar2._0_8_ = CONCAT44(-(uint)(*(int *)(param_1 + 0x44) == -1),
                          -(uint)(*(int *)(param_1 + 0x40) == -1)) ^ 0xffffffffffffffff;
  auVar2._12_4_ = -(uint)(*(int *)(param_1 + 0x4c) == -1) ^ 0xffffffff;
  uVar3 = movmskps((int)in_RAX,auVar2);
  uVar4 = ~CONCAT44((int)((ulong)in_RAX >> 0x20),uVar3);
  lVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return lVar1;
}



/* embree::TriangleMi<4>::Type::getBytes(char const*) const */

undefined8 embree::TriangleMi<4>::Type::getBytes(char *param_1)

{
  return 0x50;
}



/* embree::TriangleMvMB<4>::Type::name() const */

char * embree::TriangleMvMB<4>::Type::name(void)

{
  return "triangle4vmb";
}



/* embree::TriangleMvMB<4>::Type::sizeActive(char const*) const */

long __thiscall embree::TriangleMvMB<4>::Type::sizeActive(Type *this,char *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 in_RAX;
  ulong uVar4;
  
  auVar2._8_4_ = -(uint)(*(int *)(param_1 + 0x128) == -1) ^ 0xffffffff;
  auVar2._0_8_ = CONCAT44(-(uint)(*(int *)(param_1 + 0x124) == -1),
                          -(uint)(*(int *)(param_1 + 0x120) == -1)) ^ 0xffffffffffffffff;
  auVar2._12_4_ = -(uint)(*(int *)(param_1 + 300) == -1) ^ 0xffffffff;
  uVar3 = movmskps((int)in_RAX,auVar2);
  uVar4 = ~CONCAT44((int)((ulong)in_RAX >> 0x20),uVar3);
  lVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return lVar1;
}



/* embree::QuadMv<4>::Type::name() const */

char * embree::QuadMv<4>::Type::name(void)

{
  return "quad4v";
}



/* embree::QuadMv<4>::Type::sizeActive(char const*) const */

long __thiscall embree::QuadMv<4>::Type::sizeActive(Type *this,char *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 in_RAX;
  ulong uVar4;
  
  auVar2._8_4_ = -(uint)(*(int *)(param_1 + 200) == -1) ^ 0xffffffff;
  auVar2._0_8_ = CONCAT44(-(uint)(*(int *)(param_1 + 0xc4) == -1),
                          -(uint)(*(int *)(param_1 + 0xc0) == -1)) ^ 0xffffffffffffffff;
  auVar2._12_4_ = -(uint)(*(int *)(param_1 + 0xcc) == -1) ^ 0xffffffff;
  uVar3 = movmskps((int)in_RAX,auVar2);
  uVar4 = ~CONCAT44((int)((ulong)in_RAX >> 0x20),uVar3);
  lVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return lVar1;
}



/* embree::QuadMv<4>::Type::getBytes(char const*) const */

undefined8 embree::QuadMv<4>::Type::getBytes(char *param_1)

{
  return 0xe0;
}



/* embree::QuadMi<4>::Type::name() const */

char * embree::QuadMi<4>::Type::name(void)

{
  return "quad4i";
}



/* embree::QuadMi<4>::Type::sizeActive(char const*) const */

long __thiscall embree::QuadMi<4>::Type::sizeActive(Type *this,char *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 in_RAX;
  ulong uVar4;
  
  auVar2._8_4_ = -(uint)(*(int *)(param_1 + 0x58) == -1) ^ 0xffffffff;
  auVar2._0_8_ = CONCAT44(-(uint)(*(int *)(param_1 + 0x54) == -1),
                          -(uint)(*(int *)(param_1 + 0x50) == -1)) ^ 0xffffffffffffffff;
  auVar2._12_4_ = -(uint)(*(int *)(param_1 + 0x5c) == -1) ^ 0xffffffff;
  uVar3 = movmskps((int)in_RAX,auVar2);
  uVar4 = ~CONCAT44((int)((ulong)in_RAX >> 0x20),uVar3);
  lVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return lVar1;
}



/* embree::QuadMi<4>::Type::getBytes(char const*) const */

undefined8 embree::QuadMi<4>::Type::getBytes(char *param_1)

{
  return 0x60;
}



/* embree::SubGridQBVHN<4>::Type::name() const */

char * embree::SubGridQBVHN<4>::Type::name(void)

{
  return "SubGridQBVH4";
}



/* embree::SubGridQBVHN<4>::Type::getBytes(char const*) const */

undefined8 embree::SubGridQBVHN<4>::Type::getBytes(char *param_1)

{
  return 0x58;
}


