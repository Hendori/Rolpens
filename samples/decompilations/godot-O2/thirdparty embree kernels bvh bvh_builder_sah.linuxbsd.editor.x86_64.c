
/* embree::sse2::BVH4Triangle4MeshBuilderSAH(void*, embree::TriangleMesh*, unsigned int, unsigned
   long) */

void embree::sse2::BVH4Triangle4MeshBuilderSAH
               (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0xa8);
  lVar2 = *(long *)((long)param_1 + 0x60);
  puVar1[2] = param_1;
  *puVar1 = &PTR__BVHNBuilderSAH_00108570;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[4] = param_2;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[5] = lVar2;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 2;
  puVar1[0xb] = 0x20;
  puVar1[0xd] = 4;
  puVar1[0xe] = 0x1c;
  puVar1[0xf] = 0x3f8000003f800000;
  puVar1[0x10] = 0x400;
  puVar1[0x11] = 0xffffffffffffffff;
  puVar1[0x12] = 0x100000;
  *(uint *)(puVar1 + 0x13) = param_3;
  *(undefined1 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  for (lVar2 = 0x3f; 4UL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  puVar1[0xc] = lVar2;
  return;
}



/* embree::sse2::BVH4Triangle4vMeshBuilderSAH(void*, embree::TriangleMesh*, unsigned int, unsigned
   long) */

void embree::sse2::BVH4Triangle4vMeshBuilderSAH
               (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0xa8);
  lVar2 = *(long *)((long)param_1 + 0x60);
  puVar1[2] = param_1;
  *puVar1 = &PTR__BVHNBuilderSAH_001085b8;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[4] = param_2;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[5] = lVar2;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 2;
  puVar1[0xb] = 0x20;
  puVar1[0xd] = 4;
  puVar1[0xe] = 0x1c;
  puVar1[0xf] = 0x3f8000003f800000;
  puVar1[0x10] = 0x400;
  puVar1[0x11] = 0xffffffffffffffff;
  puVar1[0x12] = 0x100000;
  *(uint *)(puVar1 + 0x13) = param_3;
  *(undefined1 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  for (lVar2 = 0x3f; 4UL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  puVar1[0xc] = lVar2;
  return;
}



/* embree::sse2::BVH4Triangle4iMeshBuilderSAH(void*, embree::TriangleMesh*, unsigned int, unsigned
   long) */

void embree::sse2::BVH4Triangle4iMeshBuilderSAH
               (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0xa8);
  lVar2 = *(long *)((long)param_1 + 0x60);
  puVar1[2] = param_1;
  *puVar1 = &PTR__BVHNBuilderSAH_00108600;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[4] = param_2;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[5] = lVar2;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 2;
  puVar1[0xb] = 0x20;
  puVar1[0xd] = 4;
  puVar1[0xe] = 0x1c;
  puVar1[0xf] = 0x3f8000003f800000;
  puVar1[0x10] = 0x400;
  puVar1[0x11] = 0xffffffffffffffff;
  puVar1[0x12] = 0x100000;
  *(uint *)(puVar1 + 0x13) = param_3;
  *(undefined1 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  for (lVar2 = 0x3f; 4UL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  puVar1[0xc] = lVar2;
  return;
}



/* embree::sse2::BVH4Triangle4SceneBuilderSAH(void*, embree::Scene*, unsigned long) */

void embree::sse2::BVH4Triangle4SceneBuilderSAH(void *param_1,Scene *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0xa8);
  lVar2 = *(long *)(param_2 + 0x188);
  *puVar1 = &PTR__BVHNBuilderSAH_00108570;
  puVar1[1] = 0;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[5] = lVar2;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 2;
  puVar1[0xb] = 0x20;
  puVar1[0xd] = 4;
  puVar1[0xe] = 0x1c;
  puVar1[0xf] = 0x3f8000003f800000;
  puVar1[0x10] = 0x400;
  puVar1[0x11] = 0xffffffffffffffff;
  puVar1[0x12] = 0x100000;
  *(undefined4 *)(puVar1 + 0x13) = 0xffffffff;
  *(undefined1 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  for (lVar2 = 0x3f; 4UL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  puVar1[0xc] = lVar2;
  return;
}



/* embree::sse2::BVH4Triangle4vSceneBuilderSAH(void*, embree::Scene*, unsigned long) */

void embree::sse2::BVH4Triangle4vSceneBuilderSAH(void *param_1,Scene *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0xa8);
  lVar2 = *(long *)(param_2 + 0x188);
  *puVar1 = &PTR__BVHNBuilderSAH_001085b8;
  puVar1[1] = 0;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[5] = lVar2;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 2;
  puVar1[0xb] = 0x20;
  puVar1[0xd] = 4;
  puVar1[0xe] = 0x1c;
  puVar1[0xf] = 0x3f8000003f800000;
  puVar1[0x10] = 0x400;
  puVar1[0x11] = 0xffffffffffffffff;
  puVar1[0x12] = 0x100000;
  *(undefined4 *)(puVar1 + 0x13) = 0xffffffff;
  *(undefined1 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  for (lVar2 = 0x3f; 4UL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  puVar1[0xc] = lVar2;
  return;
}



/* embree::sse2::BVH4Triangle4iSceneBuilderSAH(void*, embree::Scene*, unsigned long) */

void embree::sse2::BVH4Triangle4iSceneBuilderSAH(void *param_1,Scene *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0xa8);
  lVar2 = *(long *)(param_2 + 0x188);
  *puVar1 = &PTR__BVHNBuilderSAH_00108600;
  puVar1[1] = 0;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[5] = lVar2;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 2;
  puVar1[0xb] = 0x20;
  puVar1[0xd] = 4;
  puVar1[0xe] = 0x1c;
  puVar1[0xf] = 0x3f8000003f800000;
  puVar1[0x10] = 0x400;
  puVar1[0x11] = 0xffffffffffffffff;
  puVar1[0x12] = 0x100000;
  *(undefined4 *)(puVar1 + 0x13) = 0xffffffff;
  *(undefined1 *)((long)puVar1 + 0x9c) = 1;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  for (lVar2 = 0x3f; 4UL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  puVar1[0xc] = lVar2;
  return;
}



/* embree::sse2::BVH4QuantizedTriangle4iSceneBuilderSAH(void*, embree::Scene*, unsigned long) */

void embree::sse2::BVH4QuantizedTriangle4iSceneBuilderSAH
               (void *param_1,Scene *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)operator_new(0xa0);
  lVar2 = *(long *)(param_2 + 0x188);
  *puVar1 = &PTR__BVHNBuilderSAHQuantized_00108648;
  puVar1[3] = param_2;
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x548;
  }
  puVar1[1] = 0;
  puVar1[2] = param_1;
  puVar1[5] = lVar2;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 2;
  puVar1[0xb] = 0x20;
  puVar1[0xd] = 4;
  puVar1[0xe] = 0x1c;
  puVar1[0xf] = 0x3f8000003f800000;
  puVar1[0x10] = 0x400;
  puVar1[0x11] = 0xffffffffffffffff;
  puVar1[0x12] = 0x100000;
  puVar1[0x13] = 0xffffffff;
  for (lVar2 = 0x3f; 4UL >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  puVar1[0xc] = lVar2;
  return;
}



/* embree::Builder::deleteGeometry(unsigned long) */

void embree::Builder::deleteGeometry(ulong param_1)

{
  return;
}



/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleM<4> >::clear() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleM<4>>::clear
          (BVHNBuilderSAH<4,embree::TriangleM<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}



/* embree::sse2::BVHNBuilderSAHQuantized<4, embree::TriangleMi<4> >::clear() */

void __thiscall
embree::sse2::BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>>::clear
          (BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}



/* embree::sse2::BVHNBuilderSAHQuantized<4, embree::TriangleMi<4> >::~BVHNBuilderSAHQuantized() */

void __thiscall
embree::sse2::BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>>::~BVHNBuilderSAHQuantized
          (BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNBuilderSAHQuantized_00108648;
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001007f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  return;
}



/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMi<4> >::~BVHNBuilderSAH() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMi<4>>::~BVHNBuilderSAH
          (BVHNBuilderSAH<4,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_00108600;
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  return;
}



/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMv<4> >::~BVHNBuilderSAH() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMv<4>>::~BVHNBuilderSAH
          (BVHNBuilderSAH<4,embree::TriangleMv<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_001085b8;
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001008f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  return;
}



/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleM<4> >::~BVHNBuilderSAH() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleM<4>>::~BVHNBuilderSAH
          (BVHNBuilderSAH<4,embree::TriangleM<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_00108570;
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  return;
}



/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMi<4> >::clear() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMi<4>>::clear
          (BVHNBuilderSAH<4,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}



/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMv<4> >::clear() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMv<4>>::clear
          (BVHNBuilderSAH<4,embree::TriangleMv<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}



/* embree::RefCount::refInc() */

RefCount * __thiscall embree::RefCount::refInc(RefCount *this)

{
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  return this;
}



/* embree::RefCount::refDec() */

void __thiscall embree::RefCount::refDec(RefCount *this)

{
  RefCount *pRVar1;
  
  LOCK();
  pRVar1 = this + 8;
  *(long *)pRVar1 = *(long *)pRVar1 + -1;
  UNLOCK();
  if ((this != (RefCount *)0x0) && (*(long *)pRVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00100ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::sse2::BVHNBuilderSAHQuantized<4, embree::TriangleMi<4> >::~BVHNBuilderSAHQuantized() */

void __thiscall
embree::sse2::BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>>::~BVHNBuilderSAHQuantized
          (BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNBuilderSAHQuantized_00108648;
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  }
  operator_delete(this,0xa0);
  return;
}



/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMv<4> >::~BVHNBuilderSAH() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMv<4>>::~BVHNBuilderSAH
          (BVHNBuilderSAH<4,embree::TriangleMv<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_001085b8;
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  }
  operator_delete(this,0xa8);
  return;
}



/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleM<4> >::~BVHNBuilderSAH() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleM<4>>::~BVHNBuilderSAH
          (BVHNBuilderSAH<4,embree::TriangleM<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_00108570;
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  }
  operator_delete(this,0xa8);
  return;
}



/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMi<4> >::~BVHNBuilderSAH() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMi<4>>::~BVHNBuilderSAH
          (BVHNBuilderSAH<4,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_00108600;
  lVar1 = *(long *)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    if ((ulong)(lVar1 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar2);
    }
    else {
      embree::os_free(pvVar2,lVar1 << 5,(bool)this[0x30]);
    }
  }
  if (lVar1 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar1 * -0x20,1);
  }
  operator_delete(this,0xa8);
  return;
}



/* embree::FastAllocator::ThreadLocal2::unbind(embree::FastAllocator*) */

void __thiscall
embree::FastAllocator::ThreadLocal2::unbind(ThreadLocal2 *this,FastAllocator *param_1)

{
  if (param_1 != *(FastAllocator **)(this + 8)) {
    return;
  }
  embree::MutexSys::lock();
  if (param_1 != *(FastAllocator **)(this + 8)) {
    embree::MutexSys::unlock();
    return;
  }
  LOCK();
  *(long *)(*(long *)(this + 8) + 0x118) =
       *(long *)(*(long *)(this + 8) + 0x118) + *(long *)(this + 0x68) + *(long *)(this + 0xa8);
  UNLOCK();
  LOCK();
  *(long *)(*(long *)(this + 8) + 0x120) =
       *(long *)(*(long *)(this + 8) + 0x120) +
       (((*(long *)(this + 0x98) + *(long *)(this + 0x58)) - *(long *)(this + 0x50)) -
       *(long *)(this + 0x90));
  UNLOCK();
  LOCK();
  *(long *)(*(long *)(this + 8) + 0x128) =
       *(long *)(*(long *)(this + 8) + 0x128) + *(long *)(this + 0xb0) + *(long *)(this + 0x70);
  UNLOCK();
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  LOCK();
  *(undefined8 *)(this + 8) = 0;
  UNLOCK();
  embree::MutexSys::unlock();
  return;
}



/* embree::FastAllocator::internal_fix_used_blocks() */

void __thiscall embree::FastAllocator::internal_fix_used_blocks(FastAllocator *this)

{
  FastAllocator *pFVar1;
  long lVar2;
  FastAllocator *pFVar3;
  
  pFVar3 = this + 0xb8;
  pFVar1 = this + 0xf8;
  do {
    while (*(long *)pFVar3 != 0) {
      lVar2 = *(long *)(*(long *)pFVar3 + 0x18);
      *(long *)(*(long *)pFVar3 + 0x18) = *(long *)pFVar1;
      LOCK();
      *(long *)pFVar1 = *(long *)pFVar3;
      UNLOCK();
      LOCK();
      *(long *)pFVar3 = lVar2;
      UNLOCK();
    }
    LOCK();
    *(long *)pFVar3 = 0;
    UNLOCK();
    pFVar3 = pFVar3 + 8;
  } while (pFVar3 != pFVar1);
  return;
}



/* embree::FastAllocator::reset() */

void __thiscall embree::FastAllocator::reset(FastAllocator *this)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  FastAllocator *pFVar4;
  long lVar5;
  FastAllocator *pFVar6;
  ulong uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  pFVar6 = this + 0xf8;
  plVar8 = &local_48;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pFVar4 = this + 0xb8;
  do {
    while (*(long *)pFVar4 != 0) {
      lVar5 = *(long *)(*(long *)pFVar4 + 0x18);
      *(long *)(*(long *)pFVar4 + 0x18) = *(long *)pFVar6;
      LOCK();
      *(long *)pFVar6 = *(long *)pFVar4;
      UNLOCK();
      LOCK();
      *(long *)pFVar4 = lVar5;
      UNLOCK();
    }
    LOCK();
    *(long *)pFVar4 = 0;
    UNLOCK();
    pFVar4 = pFVar4 + 8;
  } while (pFVar4 != pFVar6);
  LOCK();
  *(undefined8 *)(this + 0x118) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x120) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x128) = 0;
  UNLOCK();
  pFVar4 = this + 0x100;
  while (*(long *)pFVar6 != 0) {
    puVar2 = *(ulong **)pFVar6;
    uVar7 = *puVar2;
    if (*puVar2 < puVar2[1]) {
      uVar7 = puVar2[1];
    }
    LOCK();
    puVar2[1] = uVar7;
    UNLOCK();
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    lVar5 = *(long *)(*(long *)pFVar6 + 0x18);
    *(long *)(*(long *)pFVar6 + 0x18) = *(long *)pFVar4;
    LOCK();
    *(long *)pFVar4 = *(long *)pFVar6;
    UNLOCK();
    LOCK();
    *(long *)pFVar6 = lVar5;
    UNLOCK();
  }
  lVar5 = *(long *)(this + 0x100);
  local_48 = lVar5;
  for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x18)) {
    while (*(int *)(lVar5 + 0x28) == 2) {
      lVar5 = *(long *)(lVar5 + 0x18);
      *plVar8 = lVar5;
      if (lVar5 == 0) goto LAB_00100f5b;
    }
    plVar8 = (long *)(lVar5 + 0x18);
  }
LAB_00100f5b:
  LOCK();
  *(long *)pFVar4 = local_48;
  UNLOCK();
  pFVar6 = this + 0x78;
  do {
    LOCK();
    *(long *)pFVar6 = 0;
    UNLOCK();
    LOCK();
    *(long *)(pFVar6 + 0x40) = 0;
    UNLOCK();
    pFVar6 = pFVar6 + 8;
  } while (pFVar6 != this + 0xb8);
  plVar8 = *(long **)(this + 0x130);
  plVar3 = *(long **)(this + 0x138);
  if (plVar3 != plVar8) {
    do {
      while( true ) {
        lVar5 = *plVar8;
        if (this != *(FastAllocator **)(lVar5 + 8)) break;
        embree::MutexSys::lock();
        if (this == *(FastAllocator **)(lVar5 + 8)) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x118);
          *plVar1 = *plVar1 + *(long *)(lVar5 + 0xa8) + *(long *)(lVar5 + 0x68);
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x120);
          *plVar1 = *plVar1 + (((*(long *)(lVar5 + 0x98) + *(long *)(lVar5 + 0x58)) -
                               *(long *)(lVar5 + 0x50)) - *(long *)(lVar5 + 0x90));
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x128);
          *plVar1 = *plVar1 + *(long *)(lVar5 + 0xb0) + *(long *)(lVar5 + 0x70);
          UNLOCK();
          *(undefined8 *)(lVar5 + 0x48) = 0;
          *(undefined8 *)(lVar5 + 0x58) = 0;
          *(undefined8 *)(lVar5 + 0x50) = 0;
          *(undefined8 *)(lVar5 + 0x68) = 0;
          *(undefined8 *)(lVar5 + 0x70) = 0;
          *(undefined8 *)(lVar5 + 0x60) = 0;
          *(undefined8 *)(lVar5 + 0x88) = 0;
          *(undefined8 *)(lVar5 + 0x98) = 0;
          *(undefined8 *)(lVar5 + 0x90) = 0;
          *(undefined8 *)(lVar5 + 0xa8) = 0;
          *(undefined8 *)(lVar5 + 0xb0) = 0;
          *(undefined8 *)(lVar5 + 0xa0) = 0;
          LOCK();
          *(undefined8 *)(lVar5 + 8) = 0;
          UNLOCK();
        }
        plVar8 = plVar8 + 1;
        embree::MutexSys::unlock();
        if (plVar3 == plVar8) goto LAB_001010b0;
      }
      plVar8 = plVar8 + 1;
    } while (plVar3 != plVar8);
LAB_001010b0:
    if (*(long *)(this + 0x130) != *(long *)(this + 0x138)) {
      *(long *)(this + 0x138) = *(long *)(this + 0x130);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FastAllocator::init_estimate(unsigned long) */

void __thiscall embree::FastAllocator::init_estimate(FastAllocator *this,ulong param_1)

{
  FastAllocator *pFVar1;
  long lVar2;
  FastAllocator *pFVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  pFVar3 = this + 0xb8;
  pFVar1 = this + 0xf8;
  do {
    while (*(long *)pFVar3 != 0) {
      lVar2 = *(long *)(*(long *)pFVar3 + 0x18);
      *(long *)(*(long *)pFVar3 + 0x18) = *(long *)pFVar1;
      LOCK();
      *(long *)pFVar1 = *(long *)pFVar3;
      UNLOCK();
      LOCK();
      *(long *)pFVar3 = lVar2;
      UNLOCK();
    }
    LOCK();
    *(long *)pFVar3 = 0;
    UNLOCK();
    pFVar3 = pFVar3 + 8;
  } while (pFVar1 != pFVar3);
  if ((*(long *)(this + 0xf8) != 0) || (*(long *)(this + 0x100) != 0)) {
    reset(this);
    return;
  }
  *(ulong *)(this + 0x18) = param_1;
  uVar6 = 3;
  this[0x10a] = (FastAllocator)0x0;
  uVar5 = param_1 / 0x14 + 0x7f & 0xffffffffffffff80;
  uVar4 = 0x1fffc0;
  if (uVar5 < 0x1fffc1) {
    uVar4 = uVar5;
  }
  if (uVar4 < 0x400) {
    uVar4 = 0x400;
  }
  *(ulong *)(this + 0x28) = uVar4;
  *(ulong *)(this + 0x20) = uVar4;
  if (param_1 <= uVar4 * 0x50) {
    uVar6 = (ulong)(uVar4 * 0x28 < param_1);
  }
  *(ulong *)(this + 8) = uVar6;
  if (uVar4 * 0xa0 < param_1) {
    *(undefined8 *)(this + 8) = 7;
    if (uVar4 * 0x140 < param_1) {
LAB_001012b5:
      *(undefined8 *)(this + 0x10) = 0x1040;
      *(ulong *)(this + 0x20) = uVar4 * 2;
      goto LAB_00101221;
    }
  }
  else {
    if (uVar4 * 0x140 < param_1) goto LAB_001012b5;
    if (0x1040 < uVar5) {
      uVar5 = 0x1040;
    }
    if (uVar5 < 0x400) {
      uVar5 = 0x400;
    }
    *(ulong *)(this + 0x10) = uVar5;
    if (param_1 != 0) goto LAB_00101221;
    *(undefined8 *)(this + 0x28) = 0x1fffc0;
  }
  *(undefined8 *)(this + 0x10) = 0x1040;
LAB_00101221:
  LOCK();
  *(undefined8 *)(this + 0x110) = 0;
  UNLOCK();
  lVar2 = *(long *)this;
  if (*(long *)(lVar2 + 0x4e0) != 0) {
    *(long *)(this + 0x20) = *(long *)(lVar2 + 0x4e0);
  }
  if ((((0 < *(int *)(lVar2 + 0x4e8)) &&
       (*(undefined8 *)(this + 8) = 0, 1 < *(int *)(lVar2 + 0x4e8))) &&
      (*(undefined8 *)(this + 8) = 1, 3 < *(int *)(lVar2 + 0x4e8))) &&
     (*(undefined8 *)(this + 8) = 3, 7 < *(int *)(lVar2 + 0x4e8))) {
    *(undefined8 *)(this + 8) = 7;
  }
  if (*(long *)(lVar2 + 0x4f0) != 0) {
    *(long *)(this + 0x10) = *(long *)(lVar2 + 0x4f0);
  }
  if (*(int *)(lVar2 + 0x4f8) != -1) {
    this[0x10a] = (FastAllocator)(*(int *)(lVar2 + 0x4f8) != 0);
  }
  return;
}



/* embree::FastAllocator::Block::create(embree::Device*, bool, unsigned long, unsigned long,
   embree::FastAllocator::Block*, embree::FastAllocator::AllocationType) */

undefined8 *
embree::FastAllocator::Block::create
          (long *param_1,char param_2,ulong param_3,long param_4,undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  bool local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == 1) {
    if (0x1fffbf < param_3) {
      uVar2 = param_3 + 0x103f & 0xfffffffffffff000;
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x20))(param_1,uVar2,0);
      }
      uVar4 = param_4 + 0x103fU & 0xfffffffffffff000;
      puVar1 = (undefined8 *)embree::os_malloc(uVar4,&local_31);
      *puVar1 = 0;
      puVar1[1] = uVar2 - 0x40;
      puVar1[2] = uVar4 - 0x40;
      puVar1[3] = param_5;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 1;
      *(bool *)((long)puVar1 + 0x2c) = local_31;
      goto LAB_001013a0;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (param_6 != 0) goto LAB_001013a0;
    if (param_3 == 0x3fffc0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x20))(param_1,0x400040,0);
      }
      if (param_2 == '\0') {
        puVar1 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
      }
      else {
        puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,0x400000,0x40);
      }
      pvVar3 = (void *)((ulong)puVar1 & 0xffffffffffe00000);
      embree::os_advise(pvVar3,0x200000);
      embree::os_advise((void *)((long)pvVar3 + 0x200000),0x200000);
      embree::os_advise((void *)((long)pvVar3 + 0x400000),0x200000);
      *puVar1 = 0;
      puVar1[1] = 0x3fffc0;
      puVar1[2] = 0x3fffc0;
      puVar1[3] = param_5;
      puVar1[4] = 0x40;
      *(undefined4 *)(puVar1 + 5) = 0;
      *(undefined1 *)((long)puVar1 + 0x2c) = 0;
      goto LAB_001013a0;
    }
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_3 + 0x80,0);
  }
  if (param_2 == '\0') {
    puVar1 = (undefined8 *)embree::alignedMalloc(param_3 + 0x40,0x40);
  }
  else {
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,param_3 + 0x40,0x40);
  }
  *puVar1 = 0;
  puVar1[1] = param_3;
  puVar1[2] = param_3;
  puVar1[3] = param_5;
  puVar1[4] = 0x40;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
LAB_001013a0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar1;
}



/* embree::FastAllocator::malloc(unsigned long&, unsigned long, bool) */

void __thiscall
embree::FastAllocator::malloc(FastAllocator *this,ulong *param_1,ulong param_2,bool param_3)

{
  FastAllocator *pFVar1;
  long lVar2;
  FastAllocator *pFVar3;
  FastAllocator FVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  void *pvVar14;
  long in_FS_OFFSET;
  bool local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = param_2 - 1;
  if (param_3) {
LAB_00101588:
    uVar9 = embree::TaskScheduler::threadID();
    lVar2 = (uVar9 & *(ulong *)(this + 8)) * 8;
    pFVar3 = this + lVar2 + 0x78;
    puVar5 = *(ulong **)pFVar3;
    if (puVar5 != (ulong *)0x0) {
      puVar10 = *(undefined8 **)this;
      if (puVar10 != (undefined8 *)0x0) {
        puVar10 = puVar10 + 0xa9;
      }
      uVar8 = -param_2 & lVar7 + *param_1;
      uVar13 = puVar5[2];
      LOCK();
      uVar9 = *puVar5;
      *puVar5 = *puVar5 + uVar8;
      UNLOCK();
      if (uVar9 <= puVar5[2]) {
        uVar12 = puVar5[2] - uVar9;
        if (uVar8 < puVar5[2] - uVar9) {
          uVar12 = uVar8;
        }
        *param_1 = uVar12;
        if ((puVar5[1] < uVar12 + uVar9) && (puVar10 != (undefined8 *)0x0)) {
          uVar8 = puVar5[1];
          if (puVar5[1] <= uVar9) {
            uVar8 = uVar9;
          }
          (**(code **)*puVar10)(puVar10,(uVar12 + uVar9) - uVar8,1,uVar13);
        }
        if ((long)puVar5 + uVar9 + 0x40 != 0) goto LAB_001018d0;
      }
      if (this[0x109] == (FastAllocator)0x0) goto LAB_00101e2a;
    }
    if (0x1fffc0 < *param_1) goto LAB_00101e2a;
    if (*(long *)(this + 0x100) == 0) {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        uVar13 = lVar7 + *param_1 & -param_2;
        uVar9 = *(ulong *)(this + 0x28);
        if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
          uVar9 = *(ulong *)(this + 0x20);
        }
        if (uVar13 < uVar9) {
          uVar13 = uVar9;
        }
        uVar11 = *(undefined8 *)(this + lVar2 + 0xb8);
        FVar4 = this[0x108];
        plVar6 = *(long **)this;
        if (*(int *)(this + 0x148) == 1) {
          if (uVar13 < 0x1fffc0) {
LAB_001016f6:
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar13 + 0x80,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(uVar13 + 0x40,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,uVar13 + 0x40,0x40);
            }
            *puVar10 = 0;
            puVar10[1] = uVar13;
            puVar10[2] = uVar13;
LAB_0010174c:
            puVar10[4] = 0x40;
            *(undefined4 *)(puVar10 + 5) = 0;
            puVar10[3] = uVar11;
            *(undefined1 *)((long)puVar10 + 0x2c) = 0;
          }
          else {
            uVar9 = uVar13 + 0x103f & 0xfffffffffffff000;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar9,0);
            }
            puVar10 = (undefined8 *)embree::os_malloc(uVar9,&local_41);
            *puVar10 = 0;
            puVar10[1] = uVar9 - 0x40;
            puVar10[2] = uVar9 - 0x40;
            puVar10[3] = uVar11;
            puVar10[4] = 0;
            *(undefined4 *)(puVar10 + 5) = 1;
            *(bool *)((long)puVar10 + 0x2c) = local_41;
          }
        }
        else {
          puVar10 = (undefined8 *)0x0;
          if (*(int *)(this + 0x148) == 0) {
            if (uVar13 != 0x3fffc0) goto LAB_001016f6;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,0x400040);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,0x400000,0x40);
            }
            pvVar14 = (void *)((ulong)puVar10 & 0xffffffffffe00000);
            embree::os_advise(pvVar14,0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x200000),0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x400000),0x200000);
            *puVar10 = 0;
            puVar10[1] = 0x3fffc0;
            puVar10[2] = 0x3fffc0;
            goto LAB_0010174c;
          }
        }
        LOCK();
        *(undefined8 **)pFVar3 = puVar10;
        UNLOCK();
        LOCK();
        *(undefined8 **)(this + lVar2 + 0xb8) = puVar10;
        UNLOCK();
      }
      embree::MutexSys::unlock();
    }
    else {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        if (*(long *)(this + 0x100) == 0) {
          LOCK();
          pFVar1 = this + 0x110;
          lVar2 = *(long *)pFVar1;
          *(long *)pFVar1 = *(long *)pFVar1 + 1;
          UNLOCK();
          uVar9 = 0x10;
          if (lVar2 + 1U < 0x11) {
            uVar9 = lVar2 + 1U;
          }
          uVar9 = *(long *)(this + 0x20) << ((byte)uVar9 & 0x3f);
          if (*(ulong *)(this + 0x28) < uVar9) {
            uVar9 = *(ulong *)(this + 0x28);
          }
          uVar11 = Block::create(*(undefined8 *)this,this[0x108],uVar9,uVar9,
                                 *(undefined8 *)(this + 0xf8),*(undefined4 *)(this + 0x148));
          LOCK();
          *(undefined8 *)pFVar3 = uVar11;
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0xf8) = uVar11;
          UNLOCK();
        }
        else {
          uVar11 = *(undefined8 *)(*(long *)(this + 0x100) + 0x18);
          *(undefined8 *)(*(long *)(this + 0x100) + 0x18) = *(undefined8 *)(this + 0xf8);
          LOCK();
          *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)pFVar3 = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0x100) = uVar11;
          UNLOCK();
        }
      }
      embree::MutexSys::unlock();
    }
    goto LAB_00101588;
  }
  do {
    uVar9 = embree::TaskScheduler::threadID();
    lVar2 = (uVar9 & *(ulong *)(this + 8)) * 8;
    pFVar3 = this + lVar2 + 0x78;
    puVar5 = *(ulong **)pFVar3;
    if (puVar5 != (ulong *)0x0) {
      puVar10 = *(undefined8 **)this;
      if (puVar10 != (undefined8 *)0x0) {
        puVar10 = puVar10 + 0xa9;
      }
      uVar9 = -param_2 & lVar7 + *param_1;
      if (*puVar5 + uVar9 <= puVar5[2]) {
        LOCK();
        uVar13 = *puVar5;
        *puVar5 = *puVar5 + uVar9;
        UNLOCK();
        if ((uVar9 + uVar13 <= puVar5[2]) && (uVar13 <= puVar5[2])) {
          uVar8 = puVar5[2] - uVar13;
          if (uVar9 < puVar5[2] - uVar13) {
            uVar8 = uVar9;
          }
          *param_1 = uVar8;
          if (puVar10 != (undefined8 *)0x0) {
            if (uVar8 + uVar13 <= puVar5[1]) {
              if ((long)puVar5 + uVar13 + 0x40 == 0) goto LAB_001017ad;
              goto LAB_001018d0;
            }
            uVar9 = puVar5[1];
            if (puVar5[1] < uVar13) {
              uVar9 = uVar13;
            }
            (**(code **)*puVar10)(puVar10,(uVar8 + uVar13) - uVar9,1);
          }
          if ((long)puVar5 + uVar13 + 0x40 != 0) {
LAB_001018d0:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
LAB_001017ad:
      if (this[0x109] == (FastAllocator)0x0) {
LAB_00101e2a:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (0x1fffc0 < *param_1) goto LAB_00101e2a;
    if (*(long *)(this + 0x100) == 0) {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        uVar13 = lVar7 + *param_1 & -param_2;
        uVar9 = *(ulong *)(this + 0x28);
        if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
          uVar9 = *(ulong *)(this + 0x20);
        }
        if (uVar13 < uVar9) {
          uVar13 = uVar9;
        }
        uVar11 = *(undefined8 *)(this + lVar2 + 0xb8);
        FVar4 = this[0x108];
        plVar6 = *(long **)this;
        if (*(int *)(this + 0x148) == 1) {
          if (uVar13 < 0x1fffc0) {
LAB_00101b00:
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar13 + 0x80,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(uVar13 + 0x40,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,uVar13 + 0x40,0x40);
            }
            *puVar10 = 0;
            puVar10[1] = uVar13;
            puVar10[2] = uVar13;
LAB_00101b56:
            puVar10[4] = 0x40;
            *(undefined4 *)(puVar10 + 5) = 0;
            puVar10[3] = uVar11;
            *(undefined1 *)((long)puVar10 + 0x2c) = 0;
          }
          else {
            uVar9 = uVar13 + 0x103f & 0xfffffffffffff000;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,uVar9,0);
            }
            puVar10 = (undefined8 *)embree::os_malloc(uVar9,&local_41);
            *puVar10 = 0;
            puVar10[1] = uVar9 - 0x40;
            puVar10[2] = uVar9 - 0x40;
            puVar10[3] = uVar11;
            puVar10[4] = 0;
            *(undefined4 *)(puVar10 + 5) = 1;
            *(bool *)((long)puVar10 + 0x2c) = local_41;
          }
        }
        else {
          puVar10 = (undefined8 *)0x0;
          if (*(int *)(this + 0x148) == 0) {
            if (uVar13 != 0x3fffc0) goto LAB_00101b00;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6,0x400040,0);
            }
            if (FVar4 == (FastAllocator)0x0) {
              puVar10 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
            }
            else {
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6,0x400000,0x40);
            }
            pvVar14 = (void *)((ulong)puVar10 & 0xffffffffffe00000);
            embree::os_advise(pvVar14,0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x200000),0x200000);
            embree::os_advise((void *)((long)pvVar14 + 0x400000),0x200000);
            *puVar10 = 0;
            puVar10[1] = 0x3fffc0;
            puVar10[2] = 0x3fffc0;
            goto LAB_00101b56;
          }
        }
        LOCK();
        *(undefined8 **)pFVar3 = puVar10;
        UNLOCK();
        LOCK();
        *(undefined8 **)(this + lVar2 + 0xb8) = puVar10;
        UNLOCK();
      }
      embree::MutexSys::unlock();
    }
    else {
      embree::MutexSys::lock();
      if (puVar5 == *(ulong **)pFVar3) {
        if (*(long *)(this + 0x100) == 0) {
          LOCK();
          pFVar1 = this + 0x110;
          lVar2 = *(long *)pFVar1;
          *(long *)pFVar1 = *(long *)pFVar1 + 1;
          UNLOCK();
          uVar9 = 0x10;
          if (lVar2 + 1U < 0x11) {
            uVar9 = lVar2 + 1U;
          }
          uVar9 = *(long *)(this + 0x20) << ((byte)uVar9 & 0x3f);
          if (*(ulong *)(this + 0x28) < uVar9) {
            uVar9 = *(ulong *)(this + 0x28);
          }
          uVar11 = Block::create(*(undefined8 *)this,this[0x108],uVar9,uVar9,
                                 *(undefined8 *)(this + 0xf8),*(undefined4 *)(this + 0x148));
          LOCK();
          *(undefined8 *)pFVar3 = uVar11;
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0xf8) = uVar11;
          UNLOCK();
        }
        else {
          uVar11 = *(undefined8 *)(*(long *)(this + 0x100) + 0x18);
          *(undefined8 *)(*(long *)(this + 0x100) + 0x18) = *(undefined8 *)(this + 0xf8);
          LOCK();
          *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)pFVar3 = *(undefined8 *)(this + 0x100);
          UNLOCK();
          LOCK();
          *(undefined8 *)(this + 0x100) = uVar11;
          UNLOCK();
        }
      }
      embree::MutexSys::unlock();
    }
  } while( true );
}



/* embree::FastAllocator::Block::clear_block(embree::Device*, bool) */

void __thiscall embree::FastAllocator::Block::clear_block(Block *this,Device *param_1,bool param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x20);
  uVar2 = *(ulong *)this;
  if (*(ulong *)this < *(ulong *)(this + 8)) {
    uVar2 = *(ulong *)(this + 8);
  }
  if (*(ulong *)(this + 0x10) < uVar2) {
    uVar2 = *(ulong *)(this + 0x10);
  }
  if (*(int *)(this + 0x28) == 0) {
    if (param_2) {
      (**(code **)(*(long *)param_1 + 0x40))(param_1,this);
    }
    else {
      embree::alignedFree(this);
    }
  }
  else {
    if (*(int *)(this + 0x28) != 1) {
      return;
    }
    embree::os_free(this,*(long *)(this + 0x10) + 0x40,(bool)this[0x2c]);
  }
  if (param_1 == (Device *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x20))(param_1,-(lVar1 + 0x40 + uVar2),1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNBuilderSAHQuantized<4, embree::TriangleMi<4> >::build() */

void __thiscall
embree::sse2::BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>>::build
          (BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>> *this)

{
  ulong *puVar1;
  FastAllocator *this_00;
  byte bVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  Device *pDVar6;
  Block *pBVar7;
  string *psVar8;
  Block *pBVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong *puVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  ulong *puVar24;
  vector_t *pvVar25;
  vector_t *pvVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  double dVar28;
  double local_150;
  undefined **local_148;
  long local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_b8;
  long local_b0;
  long *local_a8 [2];
  long local_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  ulong *local_68;
  long local_60;
  ulong local_58 [5];
  ulong uVar19;
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) == 0) {
LAB_0010281d:
    uVar27 = *(ulong *)(this + 0x90);
    lVar10 = *(long *)(this + 0x18);
    pvVar25 = (vector_t *)0x0;
    if ((uVar27 & 0x100000) == 0) {
      if ((uVar27 & 0x200000) == 0) goto LAB_00102841;
LAB_00102bc4:
      pvVar25 = pvVar25 + *(long *)(lVar10 + 0x298);
      if ((uVar27 & 0xf) != 0) goto LAB_00102bb0;
LAB_00102849:
      if ((uVar27 & 0x77770) == 0) goto LAB_00102854;
LAB_00102b9c:
      pvVar25 = pvVar25 + *(long *)(lVar10 + 0x2a8);
      if ((uVar27 & 0xe000000) != 0) goto LAB_00102b88;
LAB_0010285f:
      if ((uVar27 & 0x800000) == 0) goto LAB_0010286a;
LAB_00102b74:
      pvVar25 = pvVar25 + *(long *)(lVar10 + 0x2c8);
      if ((uVar27 & 0x20000000) != 0) goto LAB_00102b60;
LAB_00102875:
      if ((uVar27 & 0x40000000) == 0) goto LAB_00102880;
LAB_00102b49:
      pvVar25 = pvVar25 + *(long *)(lVar10 + 0x2e8);
      if ((uVar27 & 0x80000000) != 0) goto LAB_00102c00;
LAB_0010288b:
      if ((uVar27 & 0x1000000) == 0) goto LAB_00102896;
LAB_00102be9:
      pvVar25 = pvVar25 + *(long *)(lVar10 + 0x308);
      if ((uVar27 & 0x400000) == 0) goto LAB_001029a0;
LAB_001028a1:
      pvVar25 = pvVar25 + *(long *)(lVar10 + 0x318);
      *(int *)(this + 0x9c) = (int)pvVar25;
    }
    else {
      pvVar25 = *(vector_t **)(lVar10 + 0x288);
      if ((uVar27 & 0x200000) != 0) goto LAB_00102bc4;
LAB_00102841:
      if ((uVar27 & 0xf) == 0) goto LAB_00102849;
LAB_00102bb0:
      pvVar25 = pvVar25 + *(long *)(lVar10 + 0x2b8);
      if ((uVar27 & 0x77770) != 0) goto LAB_00102b9c;
LAB_00102854:
      if ((uVar27 & 0xe000000) == 0) goto LAB_0010285f;
LAB_00102b88:
      pvVar25 = pvVar25 + *(long *)(lVar10 + 0x338);
      if ((uVar27 & 0x800000) != 0) goto LAB_00102b74;
LAB_0010286a:
      if ((uVar27 & 0x20000000) == 0) goto LAB_00102875;
LAB_00102b60:
      pvVar25 = pvVar25 + *(long *)(lVar10 + 0x2d8);
      if ((uVar27 & 0x40000000) != 0) goto LAB_00102b49;
LAB_00102880:
      if ((uVar27 & 0x80000000) == 0) goto LAB_0010288b;
LAB_00102c00:
      pvVar25 = pvVar25 + *(long *)(lVar10 + 0x2f8);
      if ((uVar27 & 0x1000000) != 0) goto LAB_00102be9;
LAB_00102896:
      if ((uVar27 & 0x400000) != 0) goto LAB_001028a1;
LAB_001029a0:
      *(int *)(this + 0x9c) = (int)pvVar25;
    }
    if (pvVar25 == (vector_t *)0x0) goto LAB_001028b5;
    psVar8 = *(string **)(this + 0x10);
    local_a8[0] = local_98;
    std::__cxx11::string::_M_construct((ulong)local_a8,'\x01');
    *(undefined1 *)local_a8[0] = 0x34;
    plVar15 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x101ed3);
    plVar16 = plVar15 + 2;
    if ((long *)*plVar15 == plVar16) {
      uVar27 = plVar15[1] + 1;
      plVar21 = plVar16;
      plVar23 = local_78;
      if (7 < (uint)uVar27) {
        uVar22 = 0;
        do {
          uVar18 = (int)uVar22 + 8;
          uVar19 = (ulong)uVar18;
          *(undefined8 *)((long)local_78 + uVar22) = *(undefined8 *)((long)plVar16 + uVar22);
          uVar22 = uVar19;
        } while (uVar18 < ((uint)uVar27 & 0xfffffff8));
        plVar23 = (long *)((long)local_78 + uVar19);
        plVar21 = (long *)(uVar19 + (long)plVar16);
      }
      lVar10 = 0;
      if ((uVar27 & 4) != 0) {
        *(int *)plVar23 = (int)*plVar21;
        lVar10 = 4;
      }
      if ((uVar27 & 2) != 0) {
        *(undefined2 *)((long)plVar23 + lVar10) = *(undefined2 *)((long)plVar21 + lVar10);
        lVar10 = lVar10 + 2;
      }
      local_88 = local_78;
      if ((uVar27 & 1) != 0) {
        *(undefined1 *)((long)plVar23 + lVar10) = *(undefined1 *)((long)plVar21 + lVar10);
      }
    }
    else {
      local_78[0] = plVar15[2];
      local_88 = (long *)*plVar15;
    }
    local_80 = plVar15[1];
    *plVar15 = (long)plVar16;
    plVar15[1] = 0;
    *(undefined1 *)(plVar15 + 2) = 0;
    if (0x3fffffffffffffffU - local_80 < 10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
    }
    plVar16 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x101ef3);
    puVar1 = (ulong *)(plVar16 + 2);
    if ((ulong *)*plVar16 == puVar1) {
      uVar27 = plVar16[1] + 1;
      puVar20 = puVar1;
      puVar24 = local_58;
      if (7 < (uint)uVar27) {
        uVar22 = 0;
        do {
          uVar18 = (int)uVar22 + 8;
          uVar19 = (ulong)uVar18;
          *(undefined8 *)((long)local_58 + uVar22) = *(undefined8 *)((long)puVar1 + uVar22);
          uVar22 = uVar19;
        } while (uVar18 < ((uint)uVar27 & 0xfffffff8));
        puVar24 = (ulong *)((long)local_58 + uVar19);
        puVar20 = (ulong *)(uVar19 + (long)puVar1);
      }
      lVar10 = 0;
      if ((uVar27 & 4) != 0) {
        *(int *)puVar24 = (int)*puVar20;
        lVar10 = 4;
      }
      if ((uVar27 & 2) != 0) {
        *(undefined2 *)((long)puVar24 + lVar10) = *(undefined2 *)((long)puVar20 + lVar10);
        lVar10 = lVar10 + 2;
      }
      local_68 = local_58;
      if ((uVar27 & 1) != 0) {
        *(undefined1 *)((long)puVar24 + lVar10) = *(undefined1 *)((long)puVar20 + lVar10);
      }
    }
    else {
      local_58[0] = plVar16[2];
      local_68 = (ulong *)*plVar16;
    }
    local_60 = plVar16[1];
    *plVar16 = (long)puVar1;
    plVar16[1] = 0;
    *(undefined1 *)(plVar16 + 2) = 0;
    local_150 = (double)embree::BVHN<4>::preBuild(psVar8);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
    if (local_88 != local_78) {
      operator_delete(local_88,local_78[0] + 1);
    }
    if (local_a8[0] != local_98) {
      operator_delete(local_a8[0],local_98[0] + 1);
    }
  }
  else {
    uVar18 = *(uint *)(this + 0x9c);
    if (*(uint *)(*(long *)(this + 0x20) + 0x20) == uVar18) {
      *(uint *)(this + 0x9c) = uVar18;
    }
    else {
      lVar10 = *(long *)(this + 0x10);
      this_00 = (FastAllocator *)(lVar10 + 0x78);
      FastAllocator::internal_fix_used_blocks(this_00);
      plVar16 = *(long **)(lVar10 + 0x1a8);
      plVar15 = *(long **)(lVar10 + 0x1b0);
      if (plVar15 != plVar16) {
        do {
          while( true ) {
            lVar5 = *plVar16;
            if (this_00 != *(FastAllocator **)(lVar5 + 8)) break;
            embree::MutexSys::lock();
            if (this_00 == *(FastAllocator **)(lVar5 + 8)) {
              LOCK();
              plVar23 = (long *)(*(long *)(lVar5 + 8) + 0x118);
              *plVar23 = *plVar23 + *(long *)(lVar5 + 0xa8) + *(long *)(lVar5 + 0x68);
              UNLOCK();
              LOCK();
              plVar23 = (long *)(*(long *)(lVar5 + 8) + 0x120);
              *plVar23 = *plVar23 +
                         (((*(long *)(lVar5 + 0x98) + *(long *)(lVar5 + 0x58)) -
                          *(long *)(lVar5 + 0x50)) - *(long *)(lVar5 + 0x90));
              UNLOCK();
              LOCK();
              plVar23 = (long *)(*(long *)(lVar5 + 8) + 0x128);
              *plVar23 = *plVar23 + *(long *)(lVar5 + 0xb0) + *(long *)(lVar5 + 0x70);
              UNLOCK();
              *(undefined8 *)(lVar5 + 0x48) = 0;
              *(undefined8 *)(lVar5 + 0x58) = 0;
              *(undefined8 *)(lVar5 + 0x50) = 0;
              *(undefined8 *)(lVar5 + 0x68) = 0;
              *(undefined8 *)(lVar5 + 0x70) = 0;
              *(undefined8 *)(lVar5 + 0x60) = 0;
              *(undefined8 *)(lVar5 + 0x88) = 0;
              *(undefined8 *)(lVar5 + 0x98) = 0;
              *(undefined8 *)(lVar5 + 0x90) = 0;
              *(undefined8 *)(lVar5 + 0xa8) = 0;
              *(undefined8 *)(lVar5 + 0xb0) = 0;
              *(undefined8 *)(lVar5 + 0xa0) = 0;
              LOCK();
              *(undefined8 *)(lVar5 + 8) = 0;
              UNLOCK();
            }
            plVar16 = plVar16 + 1;
            embree::MutexSys::unlock();
            if (plVar15 == plVar16) goto LAB_0010268e;
          }
          plVar16 = plVar16 + 1;
        } while (plVar15 != plVar16);
LAB_0010268e:
        if (*(long *)(lVar10 + 0x1a8) != *(long *)(lVar10 + 0x1b0)) {
          *(long *)(lVar10 + 0x1b0) = *(long *)(lVar10 + 0x1a8);
        }
      }
      LOCK();
      *(undefined8 *)(lVar10 + 400) = 0;
      UNLOCK();
      LOCK();
      *(undefined8 *)(lVar10 + 0x198) = 0;
      UNLOCK();
      LOCK();
      *(undefined8 *)(lVar10 + 0x1a0) = 0;
      UNLOCK();
      if (*(long *)(lVar10 + 0x170) != 0) {
        bVar3 = *(bool *)(lVar10 + 0x180);
        pDVar6 = *(Device **)(lVar10 + 0x78);
        pBVar9 = *(Block **)(lVar10 + 0x170);
        while (pBVar9 != (Block *)0x0) {
          pBVar7 = *(Block **)(pBVar9 + 0x18);
          FastAllocator::Block::clear_block(pBVar9,pDVar6,bVar3);
          pBVar9 = pBVar7;
        }
      }
      LOCK();
      *(undefined8 *)(lVar10 + 0x170) = 0;
      UNLOCK();
      if (*(long *)(lVar10 + 0x178) != 0) {
        bVar3 = *(bool *)(lVar10 + 0x180);
        pDVar6 = *(Device **)(lVar10 + 0x78);
        pBVar9 = *(Block **)(lVar10 + 0x178);
        while (pBVar9 != (Block *)0x0) {
          pBVar7 = *(Block **)(pBVar9 + 0x18);
          FastAllocator::Block::clear_block(pBVar9,pDVar6,bVar3);
          pBVar9 = pBVar7;
        }
      }
      LOCK();
      *(undefined8 *)(lVar10 + 0x178) = 0;
      UNLOCK();
      puVar14 = (undefined8 *)(lVar10 + 0xf0);
      do {
        LOCK();
        *puVar14 = 0;
        UNLOCK();
        LOCK();
        puVar14[8] = 0;
        UNLOCK();
        puVar14 = puVar14 + 1;
      } while ((undefined8 *)(lVar10 + 0x130) != puVar14);
      pvVar4 = *(void **)(lVar10 + 0x1e8);
      lVar5 = *(long *)(lVar10 + 0x1e0);
      if (pvVar4 != (void *)0x0) {
        if ((ulong)(lVar5 << 5) < 0x1c00000) {
          embree::alignedFree(pvVar4);
        }
        else {
          embree::os_free(pvVar4,lVar5 << 5,*(bool *)(lVar10 + 0x1d0));
        }
      }
      if (lVar5 != 0) {
        (**(code **)**(undefined8 **)(lVar10 + 0x1c8))
                  (*(undefined8 **)(lVar10 + 0x1c8),lVar5 * -0x20,1);
      }
      *(undefined8 *)(lVar10 + 0x1e8) = 0;
      *(undefined8 *)(lVar10 + 0x1e0) = 0;
      *(undefined8 *)(lVar10 + 0x1d8) = 0;
      if (*(long *)(this + 0x20) == 0) goto LAB_0010281d;
      uVar18 = *(uint *)(*(long *)(this + 0x20) + 0x20);
      *(uint *)(this + 0x9c) = uVar18;
    }
    pvVar25 = (vector_t *)(ulong)uVar18;
    if (pvVar25 == (vector_t *)0x0) {
LAB_001028b5:
      pvVar4 = *(void **)(this + 0x48);
      lVar10 = *(long *)(this + 0x40);
      if (pvVar4 != (void *)0x0) {
        if ((ulong)(lVar10 << 5) < 0x1c00000) {
          embree::alignedFree(pvVar4);
        }
        else {
          embree::os_free(pvVar4,lVar10 << 5,(bool)this[0x30]);
        }
      }
      if (lVar10 != 0) {
        (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
      }
      *(undefined8 *)(this + 0x48) = 0;
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(this + 0x10) + 0x28))();
        return;
      }
      goto LAB_00102e29;
    }
    local_60 = 0;
    local_58[0] = local_58[0] & 0xffffffffffffff00;
    local_68 = local_58;
    local_150 = (double)embree::BVHN<4>::preBuild(*(string **)(this + 0x10));
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
  }
  pvVar26 = *(vector_t **)(this + 0x40);
  if (pvVar26 < pvVar25) {
    if (pvVar26 == (vector_t *)0x0) {
      pvVar26 = pvVar25;
      if (pvVar25 < *(vector_t **)(this + 0x38)) {
        *(vector_t **)(this + 0x38) = pvVar25;
      }
    }
    else {
      do {
        pvVar26 = (vector_t *)((long)pvVar26 * 2);
        if (pvVar26 == (vector_t *)0x0) {
          pvVar26 = (vector_t *)0x1;
        }
      } while (pvVar26 < pvVar25);
      if (pvVar25 < *(vector_t **)(this + 0x38)) {
        *(vector_t **)(this + 0x38) = pvVar25;
      }
    }
    puVar14 = *(undefined8 **)(this + 0x48);
    uVar27 = (long)pvVar26 << 5;
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),uVar27,0);
    if (uVar27 < 0x1c00000) {
      lVar10 = embree::alignedMalloc(uVar27,0x20);
    }
    else {
      lVar10 = embree::os_malloc(uVar27,(bool *)(this + 0x30));
    }
    *(long *)(this + 0x48) = lVar10;
    if (*(long *)(this + 0x38) != 0) {
      puVar17 = puVar14;
      uVar27 = 0;
      while( true ) {
        uVar13 = puVar17[1];
        puVar11 = (undefined8 *)(lVar10 + uVar27 * 0x20);
        *puVar11 = *puVar17;
        puVar11[1] = uVar13;
        uVar13 = puVar17[3];
        puVar11[2] = puVar17[2];
        puVar11[3] = uVar13;
        if (*(ulong *)(this + 0x38) <= uVar27 + 1) break;
        lVar10 = *(long *)(this + 0x48);
        puVar17 = puVar17 + 4;
        uVar27 = uVar27 + 1;
      }
    }
    lVar10 = *(long *)(this + 0x40);
    if (puVar14 != (undefined8 *)0x0) {
      if ((ulong)(lVar10 << 5) < 0x1c00000) {
        embree::alignedFree(puVar14);
      }
      else {
        embree::os_free(puVar14,lVar10 << 5,(bool)this[0x30]);
      }
    }
    if (lVar10 != 0) {
      (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
    }
    *(vector_t **)(this + 0x38) = pvVar25;
    *(vector_t **)(this + 0x40) = pvVar26;
  }
  else {
    *(vector_t **)(this + 0x38) = pvVar25;
  }
  if (*(long *)(this + 0x20) == 0) {
    embree::sse2::createPrimRefArray
              ((Geometry *)&local_f8,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x90),0,
               pvVar25,this + 0x28,*(long *)(*(long *)(this + 0x10) + 0x68) + 600);
  }
  else {
    embree::sse2::createPrimRefArray
              ((Geometry *)&local_f8,(uint)*(long *)(this + 0x20),(ulong)*(uint *)(this + 0x98),
               pvVar25,(BuildProgressMonitor *)(this + 0x28));
  }
  if (*(long *)(this + 0x20) != 0) {
    *(undefined4 *)(*(long *)(this + 0x10) + 0x1c0) = 1;
  }
  dVar28 = (double)((ulong)(pvVar25 + 3) >> 2) * __LC3 * __LC4;
  if (__LC5 <= dVar28) {
    uVar27 = (long)(dVar28 - __LC5) ^ 0x8000000000000000;
  }
  else {
    uVar27 = (ulong)dVar28;
  }
  uVar27 = uVar27 + ((long)pvVar25 * 5 & 0xfffffffffffffffU);
  FastAllocator::init_estimate((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar27);
  local_140 = *(long *)(this + 0x10);
  uVar22 = 0x400;
  if (uVar27 != 0) {
    bVar2 = *(byte *)(local_140 + 0x182);
    uVar12 = embree::TaskScheduler::threadCount();
    lVar10 = (2 - (ulong)bVar2) * *(long *)(local_140 + 0x88);
    uVar22 = 0x400;
    uVar19 = lVar10 * 0x14;
    if (((uVar27 - 1) + uVar19) / uVar19 < uVar12) {
      uVar22 = lVar10 * 0x50;
      if ((long)uVar22 < 0) {
        dVar28 = (double)(uVar22 >> 1) + (double)(uVar22 >> 1);
      }
      else {
        dVar28 = (double)(long)uVar22;
      }
      dVar28 = dVar28 / ((double)uVar27 / (double)pvVar25);
      if ((double)((ulong)dVar28 & _LC9) < _LC6) {
        dVar28 = (double)((ulong)((double)(long)dVar28 +
                                 (double)(-(ulong)((double)(long)dVar28 < dVar28) & _LC8)) |
                         ~_LC9 & (ulong)dVar28);
      }
      if (__LC5 <= dVar28) {
        local_140 = *(long *)(this + 0x10);
        uVar22 = (long)(dVar28 - __LC5) ^ 0x8000000000000000;
        goto LAB_00102247;
      }
      uVar22 = (ulong)dVar28;
    }
    local_140 = *(long *)(this + 0x10);
  }
LAB_00102247:
  *(ulong *)(this + 0x80) = uVar22;
  local_138 = *(undefined8 *)(this + 0x50);
  uStack_130 = *(undefined8 *)(this + 0x58);
  local_128 = *(undefined8 *)(this + 0x60);
  uStack_120 = *(undefined8 *)(this + 0x68);
  local_118 = *(undefined8 *)(this + 0x70);
  uStack_110 = *(undefined8 *)(this + 0x78);
  local_108 = *(undefined8 *)(this + 0x80);
  uStack_100 = *(undefined8 *)(this + 0x88);
  local_148 = &PTR_createLeaf_00108330;
  uVar13 = embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build
                     (&local_148,local_140 + 0x78,*(long *)(local_140 + 0x68) + 600,
                      *(undefined8 *)(this + 0x48),(Geometry *)&local_f8);
  local_138 = local_f8;
  uStack_130 = uStack_f0;
  local_128 = local_e8;
  uStack_120 = uStack_e0;
  local_118 = local_f8;
  uStack_110 = uStack_f0;
  local_108 = local_e8;
  uStack_100 = uStack_e0;
  embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),uVar13,&local_138,local_b0 - local_b8);
  if ((*(long *)(this + 0x18) != 0) && ((*(byte *)(*(long *)(this + 0x18) + 0x230) & 1) == 0)) {
    pvVar4 = *(void **)(this + 0x48);
    lVar10 = *(long *)(this + 0x40);
    if (pvVar4 != (void *)0x0) {
      if ((ulong)(lVar10 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar4);
      }
      else {
        embree::os_free(pvVar4,lVar10 << 5,(bool)this[0x30]);
      }
    }
    if (lVar10 != 0) {
      (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
    }
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
  }
  lVar10 = *(long *)(this + 0x10);
  plVar16 = (long *)(lVar10 + 0x130);
  plVar15 = (long *)(lVar10 + 0x170);
  do {
    while (*plVar16 != 0) {
      lVar5 = *(long *)(*plVar16 + 0x18);
      *(long *)(*plVar16 + 0x18) = *plVar15;
      LOCK();
      *plVar15 = *plVar16;
      UNLOCK();
      LOCK();
      *plVar16 = lVar5;
      UNLOCK();
    }
    LOCK();
    *plVar16 = 0;
    UNLOCK();
    plVar16 = plVar16 + 1;
  } while (plVar15 != plVar16);
  plVar16 = *(long **)(lVar10 + 0x1a8);
  plVar15 = *(long **)(lVar10 + 0x1b0);
  if (plVar16 != plVar15) {
    do {
      while( true ) {
        lVar5 = *plVar16;
        if (lVar10 + 0x78 != *(long *)(lVar5 + 8)) break;
        embree::MutexSys::lock();
        if (lVar10 + 0x78 == *(long *)(lVar5 + 8)) {
          LOCK();
          plVar23 = (long *)(*(long *)(lVar5 + 8) + 0x118);
          *plVar23 = *plVar23 + *(long *)(lVar5 + 0xa8) + *(long *)(lVar5 + 0x68);
          UNLOCK();
          LOCK();
          plVar23 = (long *)(*(long *)(lVar5 + 8) + 0x120);
          *plVar23 = *plVar23 +
                     (((*(long *)(lVar5 + 0x98) + *(long *)(lVar5 + 0x58)) - *(long *)(lVar5 + 0x50)
                      ) - *(long *)(lVar5 + 0x90));
          UNLOCK();
          LOCK();
          plVar23 = (long *)(*(long *)(lVar5 + 8) + 0x128);
          *plVar23 = *plVar23 + *(long *)(lVar5 + 0xb0) + *(long *)(lVar5 + 0x70);
          UNLOCK();
          *(undefined8 *)(lVar5 + 0x48) = 0;
          *(undefined8 *)(lVar5 + 0x58) = 0;
          *(undefined8 *)(lVar5 + 0x50) = 0;
          *(undefined8 *)(lVar5 + 0x68) = 0;
          *(undefined8 *)(lVar5 + 0x70) = 0;
          *(undefined8 *)(lVar5 + 0x60) = 0;
          *(undefined8 *)(lVar5 + 0x88) = 0;
          *(undefined8 *)(lVar5 + 0x98) = 0;
          *(undefined8 *)(lVar5 + 0x90) = 0;
          *(undefined8 *)(lVar5 + 0xa8) = 0;
          *(undefined8 *)(lVar5 + 0xb0) = 0;
          *(undefined8 *)(lVar5 + 0xa0) = 0;
          LOCK();
          *(undefined8 *)(lVar5 + 8) = 0;
          UNLOCK();
        }
        plVar16 = plVar16 + 1;
        embree::MutexSys::unlock();
        if (plVar15 == plVar16) goto LAB_001024f6;
      }
      plVar16 = plVar16 + 1;
    } while (plVar15 != plVar16);
LAB_001024f6:
    if (*(long *)(lVar10 + 0x1a8) != *(long *)(lVar10 + 0x1b0)) {
      *(long *)(lVar10 + 0x1b0) = *(long *)(lVar10 + 0x1a8);
    }
  }
  embree::BVHN<4>::postBuild(local_150);
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102e29:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMi<4> >::build() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMi<4>>::build
          (BVHNBuilderSAH<4,embree::TriangleMi<4>> *this)

{
  FastAllocator *this_00;
  ulong *puVar1;
  byte bVar2;
  string sVar3;
  ThreadLocal2 *this_01;
  Device *pDVar4;
  Block *pBVar5;
  void *pvVar6;
  long lVar7;
  Block *pBVar8;
  ulong uVar9;
  long lVar10;
  string *psVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  long *plVar19;
  ulong *puVar20;
  ulong uVar21;
  string *psVar22;
  ulong *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  vector_t *pvVar26;
  vector_t *pvVar27;
  long in_FS_OFFSET;
  double dVar28;
  double local_150;
  undefined **local_148;
  string *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_b8;
  long local_b0;
  long *local_a8 [2];
  long local_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  ulong *local_68;
  long local_60;
  ulong local_58 [5];
  
  psVar22 = *(string **)(this + 0x10);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) == 0) {
    if (*(long *)(this + 0x88) != -1) goto LAB_0010325c;
LAB_0010392e:
    uVar21 = *(ulong *)(this + 0x90);
    lVar10 = *(long *)(this + 0x18);
    pvVar26 = (vector_t *)0x0;
    if ((uVar21 & 0x100000) != 0) {
      pvVar26 = *(vector_t **)(lVar10 + 0x288);
    }
    if ((uVar21 & 0x200000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x298);
    }
    if ((uVar21 & 0xf) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2b8);
    }
    if ((uVar21 & 0x77770) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2a8);
    }
    if ((uVar21 & 0xe000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x338);
    }
    if ((uVar21 & 0x800000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2c8);
    }
    if ((uVar21 & 0x20000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2d8);
    }
    if ((uVar21 & 0x40000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2e8);
    }
    if ((uVar21 & 0x80000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2f8);
    }
    if ((uVar21 & 0x1000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x308);
    }
    if ((uVar21 & 0x400000) == 0) {
      *(int *)(this + 0xa0) = (int)pvVar26;
    }
    else {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x318);
      *(int *)(this + 0xa0) = (int)pvVar26;
    }
    if (pvVar26 != (vector_t *)0x0) {
      local_a8[0] = local_98;
      std::__cxx11::string::_M_construct((ulong)local_a8,'\x01');
      *(undefined1 *)local_a8[0] = 0x34;
      plVar14 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x102e2e);
      plVar15 = plVar14 + 2;
      if ((long *)*plVar14 == plVar15) {
        uVar21 = plVar14[1] + 1;
        plVar19 = plVar15;
        plVar24 = local_78;
        if (7 < (uint)uVar21) {
          uVar16 = 0;
          do {
            uVar18 = (int)uVar16 + 8;
            uVar9 = (ulong)uVar18;
            *(undefined8 *)((long)local_78 + uVar16) = *(undefined8 *)((long)plVar15 + uVar16);
            uVar16 = uVar9;
          } while (uVar18 < ((uint)uVar21 & 0xfffffff8));
          plVar24 = (long *)((long)local_78 + uVar9);
          plVar19 = (long *)(uVar9 + (long)plVar15);
        }
        lVar10 = 0;
        if ((uVar21 & 4) != 0) {
          *(int *)plVar24 = (int)*plVar19;
          lVar10 = 4;
        }
        if ((uVar21 & 2) != 0) {
          *(undefined2 *)((long)plVar24 + lVar10) = *(undefined2 *)((long)plVar19 + lVar10);
          lVar10 = lVar10 + 2;
        }
        local_88 = local_78;
        if ((uVar21 & 1) != 0) {
          *(undefined1 *)((long)plVar24 + lVar10) = *(undefined1 *)((long)plVar19 + lVar10);
        }
      }
      else {
        local_78[0] = plVar14[2];
        local_88 = (long *)*plVar14;
      }
      local_80 = plVar14[1];
      *plVar14 = (long)plVar15;
      plVar14[1] = 0;
      *(undefined1 *)(plVar14 + 2) = 0;
      if (0x3fffffffffffffffU - local_80 < 10) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      plVar15 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x101ef3);
      puVar1 = (ulong *)(plVar15 + 2);
      if ((ulong *)*plVar15 == puVar1) {
        uVar21 = plVar15[1] + 1;
        puVar20 = puVar1;
        puVar23 = local_58;
        if (7 < (uint)uVar21) {
          uVar16 = 0;
          do {
            uVar18 = (int)uVar16 + 8;
            uVar9 = (ulong)uVar18;
            *(undefined8 *)((long)local_58 + uVar16) = *(undefined8 *)((long)puVar1 + uVar16);
            uVar16 = uVar9;
          } while (uVar18 < ((uint)uVar21 & 0xfffffff8));
          puVar23 = (ulong *)((long)local_58 + uVar9);
          puVar20 = (ulong *)(uVar9 + (long)puVar1);
        }
        lVar10 = 0;
        if ((uVar21 & 4) != 0) {
          *(int *)puVar23 = (int)*puVar20;
          lVar10 = 4;
        }
        if ((uVar21 & 2) != 0) {
          *(undefined2 *)((long)puVar23 + lVar10) = *(undefined2 *)((long)puVar20 + lVar10);
          lVar10 = lVar10 + 2;
        }
        local_68 = local_58;
        if ((uVar21 & 1) != 0) {
          *(undefined1 *)((long)puVar23 + lVar10) = *(undefined1 *)((long)puVar20 + lVar10);
        }
      }
      else {
        local_58[0] = plVar15[2];
        local_68 = (ulong *)*plVar15;
      }
      local_60 = plVar15[1];
      *plVar15 = (long)puVar1;
      plVar15[1] = 0;
      *(undefined1 *)(plVar15 + 2) = 0;
      local_150 = (double)embree::BVHN<4>::preBuild(psVar22);
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      if (local_a8[0] != local_98) {
        operator_delete(local_a8[0],local_98[0] + 1);
      }
      goto LAB_00102f01;
    }
LAB_00103341:
    lVar10 = *(long *)psVar22;
  }
  else {
    uVar18 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    if (uVar18 == *(uint *)(this + 0xa0)) {
      if (*(long *)(this + 0x88) != -1) {
LAB_0010325c:
        FastAllocator::reset((FastAllocator *)(psVar22 + 0x78));
        pvVar6 = *(void **)(this + 0x48);
        lVar10 = *(long *)(this + 0x40);
        if (pvVar6 != (void *)0x0) {
          if ((ulong)(lVar10 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar6);
          }
          else {
            embree::os_free(pvVar6,lVar10 << 5,(bool)this[0x30]);
          }
        }
        if (lVar10 != 0) {
          (**(code **)**(undefined8 **)(this + 0x28))
                    (*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
        }
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x38) = 0;
        *(long *)(this + 0x28) = *(long *)(psVar22 + 0x1c8);
        *(string *)(this + 0x30) = psVar22[0x1d0];
        *(long *)(this + 0x38) = *(long *)(psVar22 + 0x1d8);
        *(long *)(psVar22 + 0x1d8) = 0;
        *(long *)(this + 0x40) = *(long *)(psVar22 + 0x1e0);
        *(long *)(psVar22 + 0x1e0) = 0;
        *(long *)(this + 0x48) = *(long *)(psVar22 + 0x1e8);
        *(long *)(psVar22 + 0x1e8) = 0;
        goto LAB_0010331b;
      }
      pvVar26 = (vector_t *)(ulong)uVar18;
      *(uint *)(this + 0xa0) = uVar18;
      if (pvVar26 != (vector_t *)0x0) goto LAB_00102ea9;
      goto LAB_00103341;
    }
    FastAllocator::internal_fix_used_blocks((FastAllocator *)(psVar22 + 0x78));
    puVar25 = *(undefined8 **)(psVar22 + 0x1a8);
    puVar17 = *(undefined8 **)(psVar22 + 0x1b0);
    if (puVar17 != puVar25) {
      do {
        this_01 = (ThreadLocal2 *)*puVar25;
        puVar25 = puVar25 + 1;
        FastAllocator::ThreadLocal2::unbind(this_01,(FastAllocator *)(psVar22 + 0x78));
      } while (puVar17 != puVar25);
      if (*(long *)(psVar22 + 0x1a8) != *(long *)(psVar22 + 0x1b0)) {
        *(long *)(psVar22 + 0x1b0) = *(long *)(psVar22 + 0x1a8);
      }
    }
    LOCK();
    *(long *)(psVar22 + 400) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar22 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar22 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(psVar22 + 0x170) != 0) {
      sVar3 = psVar22[0x180];
      pDVar4 = *(Device **)(psVar22 + 0x78);
      pBVar8 = *(Block **)(psVar22 + 0x170);
      while (pBVar8 != (Block *)0x0) {
        pBVar5 = *(Block **)(pBVar8 + 0x18);
        FastAllocator::Block::clear_block(pBVar8,pDVar4,(bool)sVar3);
        pBVar8 = pBVar5;
      }
    }
    LOCK();
    *(long *)(psVar22 + 0x170) = 0;
    UNLOCK();
    if (*(long *)(psVar22 + 0x178) != 0) {
      sVar3 = psVar22[0x180];
      pDVar4 = *(Device **)(psVar22 + 0x78);
      pBVar8 = *(Block **)(psVar22 + 0x178);
      while (pBVar8 != (Block *)0x0) {
        pBVar5 = *(Block **)(pBVar8 + 0x18);
        FastAllocator::Block::clear_block(pBVar8,pDVar4,(bool)sVar3);
        pBVar8 = pBVar5;
      }
    }
    LOCK();
    *(long *)(psVar22 + 0x178) = 0;
    UNLOCK();
    psVar11 = psVar22 + 0xf0;
    do {
      LOCK();
      *(long *)psVar11 = 0;
      UNLOCK();
      LOCK();
      *(long *)(psVar11 + 0x40) = 0;
      UNLOCK();
      psVar11 = psVar11 + 8;
    } while (psVar22 + 0x130 != psVar11);
    pvVar6 = *(void **)(psVar22 + 0x1e8);
    lVar10 = *(long *)(psVar22 + 0x1e0);
    if (pvVar6 != (void *)0x0) {
      if ((ulong)(lVar10 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar6);
      }
      else {
        embree::os_free(pvVar6,lVar10 << 5,(bool)psVar22[0x1d0]);
      }
    }
    if (lVar10 != 0) {
      (**(code **)**(undefined8 **)(psVar22 + 0x1c8))
                (*(undefined8 **)(psVar22 + 0x1c8),lVar10 * -0x20,1);
    }
    *(long *)(psVar22 + 0x1e8) = 0;
    *(long *)(psVar22 + 0x1e0) = 0;
    *(long *)(psVar22 + 0x1d8) = 0;
    if (*(long *)(this + 0x88) != -1) {
      psVar22 = *(string **)(this + 0x10);
      goto LAB_0010325c;
    }
LAB_0010331b:
    if (*(long *)(this + 0x20) == 0) {
      psVar22 = *(string **)(this + 0x10);
      goto LAB_0010392e;
    }
    uVar18 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    psVar22 = *(string **)(this + 0x10);
    pvVar26 = (vector_t *)(ulong)uVar18;
    *(uint *)(this + 0xa0) = uVar18;
    if (pvVar26 == (vector_t *)0x0) goto LAB_00103341;
LAB_00102ea9:
    local_60 = 0;
    local_58[0] = local_58[0] & 0xffffffffffffff00;
    local_68 = local_58;
    local_150 = (double)embree::BVHN<4>::preBuild(psVar22);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
LAB_00102f01:
    if (this[0x9c] != (BVHNBuilderSAH<4,embree::TriangleMi<4>>)0x0) {
      if (pvVar26 < (vector_t *)0xf4240) {
        *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
      }
      else {
        *(ulong *)(this + 0x88) = (ulong)pvVar26 / 1000;
      }
    }
    if (*(long *)(this + 0x20) != 0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x1c0) = 1;
    }
    dVar28 = (double)((ulong)(pvVar26 + 3) >> 2) * __LC3 * __LC4;
    if (__LC5 <= dVar28) {
      uVar21 = (long)(dVar28 - __LC5) ^ 0x8000000000000000;
    }
    else {
      uVar21 = (ulong)dVar28;
    }
    uVar21 = uVar21 + ((ulong)((long)pvVar26 * 0xe0) >> 4);
    FastAllocator::init_estimate((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar21);
    lVar10 = *(long *)(this + 0x10);
    if (uVar21 == 0) {
LAB_001033d8:
      uVar21 = 0x400;
LAB_001033dd:
      pvVar27 = *(vector_t **)(this + 0x40);
      *(ulong *)(this + 0x80) = uVar21;
      if (pvVar26 <= pvVar27) goto LAB_0010309b;
LAB_001033f1:
      if (pvVar27 == (vector_t *)0x0) {
        pvVar27 = pvVar26;
        if (pvVar26 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar26;
        }
      }
      else {
        do {
          pvVar27 = (vector_t *)((long)pvVar27 * 2);
          if (pvVar27 == (vector_t *)0x0) {
            pvVar27 = (vector_t *)0x1;
          }
        } while (pvVar27 < pvVar26);
        if (pvVar26 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar26;
        }
      }
      puVar25 = *(undefined8 **)(this + 0x48);
      uVar21 = (long)pvVar27 << 5;
      (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),uVar21,0);
      if (uVar21 < 0x1c00000) {
        lVar10 = embree::alignedMalloc(uVar21,0x20);
      }
      else {
        lVar10 = embree::os_malloc(uVar21,(bool *)(this + 0x30));
      }
      *(long *)(this + 0x48) = lVar10;
      if (*(long *)(this + 0x38) != 0) {
        puVar17 = puVar25;
        uVar21 = 0;
        while( true ) {
          uVar13 = puVar17[1];
          puVar12 = (undefined8 *)(lVar10 + uVar21 * 0x20);
          *puVar12 = *puVar17;
          puVar12[1] = uVar13;
          uVar13 = puVar17[3];
          puVar12[2] = puVar17[2];
          puVar12[3] = uVar13;
          if (*(ulong *)(this + 0x38) <= uVar21 + 1) break;
          lVar10 = *(long *)(this + 0x48);
          puVar17 = puVar17 + 4;
          uVar21 = uVar21 + 1;
        }
      }
      lVar10 = *(long *)(this + 0x40);
      if (puVar25 != (undefined8 *)0x0) {
        if ((ulong)(lVar10 << 5) < 0x1c00000) {
          embree::alignedFree(puVar25);
        }
        else {
          embree::os_free(puVar25,lVar10 << 5,(bool)this[0x30]);
        }
      }
      if (lVar10 != 0) {
        (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
      }
      *(vector_t **)(this + 0x38) = pvVar26;
      *(vector_t **)(this + 0x40) = pvVar27;
    }
    else {
      bVar2 = *(byte *)(lVar10 + 0x182);
      uVar9 = embree::TaskScheduler::threadCount();
      lVar10 = *(long *)(lVar10 + 0x88) * (2 - (ulong)bVar2);
      uVar16 = lVar10 * 0x14;
      if (uVar9 <= ((uVar21 - 1) + uVar16) / uVar16) goto LAB_001033d8;
      uVar16 = lVar10 * 0x50;
      if ((long)uVar16 < 0) {
        dVar28 = (double)(uVar16 >> 1) + (double)(uVar16 >> 1);
      }
      else {
        dVar28 = (double)(long)uVar16;
      }
      dVar28 = dVar28 / ((double)uVar21 / (double)pvVar26);
      if ((double)((ulong)dVar28 & _LC9) < _LC6) {
        dVar28 = (double)((ulong)((double)(long)dVar28 +
                                 (double)(-(ulong)((double)(long)dVar28 < dVar28) & _LC8)) |
                         ~_LC9 & (ulong)dVar28);
      }
      if (__LC5 <= dVar28) {
        uVar21 = (long)(dVar28 - __LC5) ^ 0x8000000000000000;
        goto LAB_001033dd;
      }
      pvVar27 = *(vector_t **)(this + 0x40);
      *(long *)(this + 0x80) = (long)dVar28;
      if (pvVar27 < pvVar26) goto LAB_001033f1;
LAB_0010309b:
      *(vector_t **)(this + 0x38) = pvVar26;
    }
    if (*(long *)(this + 0x20) == 0) {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x90),0,
                 pvVar26,this + 0x28,*(long *)(*(long *)(this + 0x10) + 0x68) + 600);
    }
    else {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,(uint)*(long *)(this + 0x20),(ulong)*(uint *)(this + 0x98),
                 pvVar26,(BuildProgressMonitor *)(this + 0x28));
    }
    psVar22 = *(string **)(this + 0x10);
    if (local_b0 != local_b8) {
      local_138 = *(undefined8 *)(this + 0x50);
      uStack_130 = *(undefined8 *)(this + 0x58);
      local_128 = *(undefined8 *)(this + 0x60);
      uStack_120 = *(undefined8 *)(this + 0x68);
      local_118 = *(undefined8 *)(this + 0x70);
      uStack_110 = *(undefined8 *)(this + 0x78);
      local_108 = *(undefined8 *)(this + 0x80);
      uStack_100 = *(undefined8 *)(this + 0x88);
      local_148 = &PTR_createLeaf_00108348;
      local_140 = psVar22;
      uVar13 = embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build
                         (&local_148,psVar22 + 0x78,*(long *)(psVar22 + 0x68) + 600,
                          *(undefined8 *)(this + 0x48),(Geometry *)&local_f8);
      local_138 = local_f8;
      uStack_130 = uStack_f0;
      local_128 = local_e8;
      uStack_120 = uStack_e0;
      local_118 = local_f8;
      uStack_110 = uStack_f0;
      local_108 = local_e8;
      uStack_100 = uStack_e0;
      embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),uVar13,&local_138,local_b0 - local_b8);
      embree::BVHN<4>::layoutLargeNodes(*(ulong *)(this + 0x10));
      if (*(long *)(this + 0x88) == -1) {
        if ((*(long *)(this + 0x18) != 0) && ((*(byte *)(*(long *)(this + 0x18) + 0x230) & 1) == 0))
        {
          pvVar6 = *(void **)(this + 0x48);
          lVar10 = *(long *)(this + 0x40);
          if (pvVar6 != (void *)0x0) {
            if ((ulong)(lVar10 << 5) < 0x1c00000) {
              embree::alignedFree(pvVar6);
            }
            else {
              embree::os_free(pvVar6,lVar10 << 5,(bool)this[0x30]);
            }
          }
          if (lVar10 != 0) {
            (**(code **)**(undefined8 **)(this + 0x28))
                      (*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
          }
          *(undefined8 *)(this + 0x48) = 0;
          *(undefined8 *)(this + 0x40) = 0;
          *(undefined8 *)(this + 0x38) = 0;
        }
      }
      else {
        lVar10 = *(long *)(this + 0x10);
        pvVar6 = *(void **)(lVar10 + 0x1e8);
        lVar7 = *(long *)(lVar10 + 0x1e0);
        if (pvVar6 != (void *)0x0) {
          if ((ulong)(lVar7 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar6);
          }
          else {
            embree::os_free(pvVar6,lVar7 << 5,*(bool *)(lVar10 + 0x1d0));
          }
        }
        if (lVar7 != 0) {
          (**(code **)**(undefined8 **)(lVar10 + 0x1c8))
                    (*(undefined8 **)(lVar10 + 0x1c8),lVar7 * -0x20,1);
        }
        *(undefined8 *)(lVar10 + 0x1e8) = 0;
        *(undefined8 *)(lVar10 + 0x1e0) = 0;
        *(undefined8 *)(lVar10 + 0x1d8) = 0;
        *(undefined8 *)(lVar10 + 0x1c8) = *(undefined8 *)(this + 0x28);
        *(BVHNBuilderSAH<4,embree::TriangleMi<4>> *)(lVar10 + 0x1d0) = this[0x30];
        *(undefined8 *)(lVar10 + 0x1d8) = *(undefined8 *)(this + 0x38);
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(lVar10 + 0x1e0) = *(undefined8 *)(this + 0x40);
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(lVar10 + 0x1e8) = *(undefined8 *)(this + 0x48);
        *(undefined8 *)(this + 0x48) = 0;
      }
      lVar10 = *(long *)(this + 0x10);
      this_00 = (FastAllocator *)(lVar10 + 0x78);
      FastAllocator::internal_fix_used_blocks(this_00);
      plVar15 = *(long **)(lVar10 + 0x1a8);
      plVar14 = *(long **)(lVar10 + 0x1b0);
      if (plVar15 != plVar14) {
        do {
          while( true ) {
            lVar7 = *plVar15;
            if (this_00 != *(FastAllocator **)(lVar7 + 8)) break;
            embree::MutexSys::lock();
            if (this_00 == *(FastAllocator **)(lVar7 + 8)) {
              LOCK();
              plVar24 = (long *)(*(long *)(lVar7 + 8) + 0x118);
              *plVar24 = *plVar24 + *(long *)(lVar7 + 0xa8) + *(long *)(lVar7 + 0x68);
              UNLOCK();
              LOCK();
              plVar24 = (long *)(*(long *)(lVar7 + 8) + 0x120);
              *plVar24 = *plVar24 +
                         (((*(long *)(lVar7 + 0x98) + *(long *)(lVar7 + 0x58)) -
                          *(long *)(lVar7 + 0x50)) - *(long *)(lVar7 + 0x90));
              UNLOCK();
              LOCK();
              plVar24 = (long *)(*(long *)(lVar7 + 8) + 0x128);
              *plVar24 = *plVar24 + *(long *)(lVar7 + 0xb0) + *(long *)(lVar7 + 0x70);
              UNLOCK();
              *(undefined8 *)(lVar7 + 0x48) = 0;
              *(undefined8 *)(lVar7 + 0x58) = 0;
              *(undefined8 *)(lVar7 + 0x50) = 0;
              *(undefined8 *)(lVar7 + 0x68) = 0;
              *(undefined8 *)(lVar7 + 0x70) = 0;
              *(undefined8 *)(lVar7 + 0x60) = 0;
              *(undefined8 *)(lVar7 + 0x88) = 0;
              *(undefined8 *)(lVar7 + 0x98) = 0;
              *(undefined8 *)(lVar7 + 0x90) = 0;
              *(undefined8 *)(lVar7 + 0xa8) = 0;
              *(undefined8 *)(lVar7 + 0xb0) = 0;
              *(undefined8 *)(lVar7 + 0xa0) = 0;
              LOCK();
              *(undefined8 *)(lVar7 + 8) = 0;
              UNLOCK();
            }
            plVar15 = plVar15 + 1;
            embree::MutexSys::unlock();
            if (plVar14 == plVar15) goto LAB_0010384e;
          }
          plVar15 = plVar15 + 1;
        } while (plVar14 != plVar15);
LAB_0010384e:
        if (*(long *)(lVar10 + 0x1a8) != *(long *)(lVar10 + 0x1b0)) {
          *(long *)(lVar10 + 0x1b0) = *(long *)(lVar10 + 0x1a8);
        }
      }
      embree::BVHN<4>::postBuild(local_150);
      goto LAB_001033aa;
    }
    lVar10 = *(long *)psVar22;
  }
  (**(code **)(lVar10 + 0x28))(psVar22);
  pvVar6 = *(void **)(this + 0x48);
  lVar10 = *(long *)(this + 0x40);
  if (pvVar6 != (void *)0x0) {
    if ((ulong)(lVar10 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar6);
    }
    else {
      embree::os_free(pvVar6,lVar10 << 5,(bool)this[0x30]);
    }
  }
  if (lVar10 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
LAB_001033aa:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMv<4> >::build() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMv<4>>::build
          (BVHNBuilderSAH<4,embree::TriangleMv<4>> *this)

{
  FastAllocator *this_00;
  ulong *puVar1;
  byte bVar2;
  string sVar3;
  ThreadLocal2 *this_01;
  Device *pDVar4;
  Block *pBVar5;
  void *pvVar6;
  long lVar7;
  Block *pBVar8;
  ulong uVar9;
  long lVar10;
  string *psVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  long *plVar19;
  ulong *puVar20;
  ulong uVar21;
  string *psVar22;
  ulong *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  vector_t *pvVar26;
  vector_t *pvVar27;
  long in_FS_OFFSET;
  double dVar28;
  double local_150;
  undefined **local_148;
  string *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_b8;
  long local_b0;
  long *local_a8 [2];
  long local_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  ulong *local_68;
  long local_60;
  ulong local_58 [5];
  
  psVar22 = *(string **)(this + 0x10);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) == 0) {
    if (*(long *)(this + 0x88) != -1) goto LAB_0010428c;
LAB_0010495e:
    uVar21 = *(ulong *)(this + 0x90);
    lVar10 = *(long *)(this + 0x18);
    pvVar26 = (vector_t *)0x0;
    if ((uVar21 & 0x100000) != 0) {
      pvVar26 = *(vector_t **)(lVar10 + 0x288);
    }
    if ((uVar21 & 0x200000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x298);
    }
    if ((uVar21 & 0xf) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2b8);
    }
    if ((uVar21 & 0x77770) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2a8);
    }
    if ((uVar21 & 0xe000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x338);
    }
    if ((uVar21 & 0x800000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2c8);
    }
    if ((uVar21 & 0x20000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2d8);
    }
    if ((uVar21 & 0x40000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2e8);
    }
    if ((uVar21 & 0x80000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2f8);
    }
    if ((uVar21 & 0x1000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x308);
    }
    if ((uVar21 & 0x400000) == 0) {
      *(int *)(this + 0xa0) = (int)pvVar26;
    }
    else {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x318);
      *(int *)(this + 0xa0) = (int)pvVar26;
    }
    if (pvVar26 != (vector_t *)0x0) {
      local_a8[0] = local_98;
      std::__cxx11::string::_M_construct((ulong)local_a8,'\x01');
      *(undefined1 *)local_a8[0] = 0x34;
      plVar14 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x102e2e);
      plVar15 = plVar14 + 2;
      if ((long *)*plVar14 == plVar15) {
        uVar21 = plVar14[1] + 1;
        plVar19 = plVar15;
        plVar24 = local_78;
        if (7 < (uint)uVar21) {
          uVar16 = 0;
          do {
            uVar18 = (int)uVar16 + 8;
            uVar9 = (ulong)uVar18;
            *(undefined8 *)((long)local_78 + uVar16) = *(undefined8 *)((long)plVar15 + uVar16);
            uVar16 = uVar9;
          } while (uVar18 < ((uint)uVar21 & 0xfffffff8));
          plVar24 = (long *)((long)local_78 + uVar9);
          plVar19 = (long *)(uVar9 + (long)plVar15);
        }
        lVar10 = 0;
        if ((uVar21 & 4) != 0) {
          *(int *)plVar24 = (int)*plVar19;
          lVar10 = 4;
        }
        if ((uVar21 & 2) != 0) {
          *(undefined2 *)((long)plVar24 + lVar10) = *(undefined2 *)((long)plVar19 + lVar10);
          lVar10 = lVar10 + 2;
        }
        local_88 = local_78;
        if ((uVar21 & 1) != 0) {
          *(undefined1 *)((long)plVar24 + lVar10) = *(undefined1 *)((long)plVar19 + lVar10);
        }
      }
      else {
        local_78[0] = plVar14[2];
        local_88 = (long *)*plVar14;
      }
      local_80 = plVar14[1];
      *plVar14 = (long)plVar15;
      plVar14[1] = 0;
      *(undefined1 *)(plVar14 + 2) = 0;
      if (0x3fffffffffffffffU - local_80 < 10) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      plVar15 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x101ef3);
      puVar1 = (ulong *)(plVar15 + 2);
      if ((ulong *)*plVar15 == puVar1) {
        uVar21 = plVar15[1] + 1;
        puVar20 = puVar1;
        puVar23 = local_58;
        if (7 < (uint)uVar21) {
          uVar16 = 0;
          do {
            uVar18 = (int)uVar16 + 8;
            uVar9 = (ulong)uVar18;
            *(undefined8 *)((long)local_58 + uVar16) = *(undefined8 *)((long)puVar1 + uVar16);
            uVar16 = uVar9;
          } while (uVar18 < ((uint)uVar21 & 0xfffffff8));
          puVar23 = (ulong *)((long)local_58 + uVar9);
          puVar20 = (ulong *)(uVar9 + (long)puVar1);
        }
        lVar10 = 0;
        if ((uVar21 & 4) != 0) {
          *(int *)puVar23 = (int)*puVar20;
          lVar10 = 4;
        }
        if ((uVar21 & 2) != 0) {
          *(undefined2 *)((long)puVar23 + lVar10) = *(undefined2 *)((long)puVar20 + lVar10);
          lVar10 = lVar10 + 2;
        }
        local_68 = local_58;
        if ((uVar21 & 1) != 0) {
          *(undefined1 *)((long)puVar23 + lVar10) = *(undefined1 *)((long)puVar20 + lVar10);
        }
      }
      else {
        local_58[0] = plVar15[2];
        local_68 = (ulong *)*plVar15;
      }
      local_60 = plVar15[1];
      *plVar15 = (long)puVar1;
      plVar15[1] = 0;
      *(undefined1 *)(plVar15 + 2) = 0;
      local_150 = (double)embree::BVHN<4>::preBuild(psVar22);
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      if (local_a8[0] != local_98) {
        operator_delete(local_a8[0],local_98[0] + 1);
      }
      goto LAB_00103f31;
    }
LAB_00104371:
    lVar10 = *(long *)psVar22;
  }
  else {
    uVar18 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    if (uVar18 == *(uint *)(this + 0xa0)) {
      if (*(long *)(this + 0x88) != -1) {
LAB_0010428c:
        FastAllocator::reset((FastAllocator *)(psVar22 + 0x78));
        pvVar6 = *(void **)(this + 0x48);
        lVar10 = *(long *)(this + 0x40);
        if (pvVar6 != (void *)0x0) {
          if ((ulong)(lVar10 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar6);
          }
          else {
            embree::os_free(pvVar6,lVar10 << 5,(bool)this[0x30]);
          }
        }
        if (lVar10 != 0) {
          (**(code **)**(undefined8 **)(this + 0x28))
                    (*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
        }
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x38) = 0;
        *(long *)(this + 0x28) = *(long *)(psVar22 + 0x1c8);
        *(string *)(this + 0x30) = psVar22[0x1d0];
        *(long *)(this + 0x38) = *(long *)(psVar22 + 0x1d8);
        *(long *)(psVar22 + 0x1d8) = 0;
        *(long *)(this + 0x40) = *(long *)(psVar22 + 0x1e0);
        *(long *)(psVar22 + 0x1e0) = 0;
        *(long *)(this + 0x48) = *(long *)(psVar22 + 0x1e8);
        *(long *)(psVar22 + 0x1e8) = 0;
        goto LAB_0010434b;
      }
      pvVar26 = (vector_t *)(ulong)uVar18;
      *(uint *)(this + 0xa0) = uVar18;
      if (pvVar26 != (vector_t *)0x0) goto LAB_00103ed9;
      goto LAB_00104371;
    }
    FastAllocator::internal_fix_used_blocks((FastAllocator *)(psVar22 + 0x78));
    puVar25 = *(undefined8 **)(psVar22 + 0x1a8);
    puVar17 = *(undefined8 **)(psVar22 + 0x1b0);
    if (puVar17 != puVar25) {
      do {
        this_01 = (ThreadLocal2 *)*puVar25;
        puVar25 = puVar25 + 1;
        FastAllocator::ThreadLocal2::unbind(this_01,(FastAllocator *)(psVar22 + 0x78));
      } while (puVar17 != puVar25);
      if (*(long *)(psVar22 + 0x1a8) != *(long *)(psVar22 + 0x1b0)) {
        *(long *)(psVar22 + 0x1b0) = *(long *)(psVar22 + 0x1a8);
      }
    }
    LOCK();
    *(long *)(psVar22 + 400) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar22 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar22 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(psVar22 + 0x170) != 0) {
      sVar3 = psVar22[0x180];
      pDVar4 = *(Device **)(psVar22 + 0x78);
      pBVar8 = *(Block **)(psVar22 + 0x170);
      while (pBVar8 != (Block *)0x0) {
        pBVar5 = *(Block **)(pBVar8 + 0x18);
        FastAllocator::Block::clear_block(pBVar8,pDVar4,(bool)sVar3);
        pBVar8 = pBVar5;
      }
    }
    LOCK();
    *(long *)(psVar22 + 0x170) = 0;
    UNLOCK();
    if (*(long *)(psVar22 + 0x178) != 0) {
      sVar3 = psVar22[0x180];
      pDVar4 = *(Device **)(psVar22 + 0x78);
      pBVar8 = *(Block **)(psVar22 + 0x178);
      while (pBVar8 != (Block *)0x0) {
        pBVar5 = *(Block **)(pBVar8 + 0x18);
        FastAllocator::Block::clear_block(pBVar8,pDVar4,(bool)sVar3);
        pBVar8 = pBVar5;
      }
    }
    LOCK();
    *(long *)(psVar22 + 0x178) = 0;
    UNLOCK();
    psVar11 = psVar22 + 0xf0;
    do {
      LOCK();
      *(long *)psVar11 = 0;
      UNLOCK();
      LOCK();
      *(long *)(psVar11 + 0x40) = 0;
      UNLOCK();
      psVar11 = psVar11 + 8;
    } while (psVar22 + 0x130 != psVar11);
    pvVar6 = *(void **)(psVar22 + 0x1e8);
    lVar10 = *(long *)(psVar22 + 0x1e0);
    if (pvVar6 != (void *)0x0) {
      if ((ulong)(lVar10 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar6);
      }
      else {
        embree::os_free(pvVar6,lVar10 << 5,(bool)psVar22[0x1d0]);
      }
    }
    if (lVar10 != 0) {
      (**(code **)**(undefined8 **)(psVar22 + 0x1c8))
                (*(undefined8 **)(psVar22 + 0x1c8),lVar10 * -0x20,1);
    }
    *(long *)(psVar22 + 0x1e8) = 0;
    *(long *)(psVar22 + 0x1e0) = 0;
    *(long *)(psVar22 + 0x1d8) = 0;
    if (*(long *)(this + 0x88) != -1) {
      psVar22 = *(string **)(this + 0x10);
      goto LAB_0010428c;
    }
LAB_0010434b:
    if (*(long *)(this + 0x20) == 0) {
      psVar22 = *(string **)(this + 0x10);
      goto LAB_0010495e;
    }
    uVar18 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    psVar22 = *(string **)(this + 0x10);
    pvVar26 = (vector_t *)(ulong)uVar18;
    *(uint *)(this + 0xa0) = uVar18;
    if (pvVar26 == (vector_t *)0x0) goto LAB_00104371;
LAB_00103ed9:
    local_60 = 0;
    local_58[0] = local_58[0] & 0xffffffffffffff00;
    local_68 = local_58;
    local_150 = (double)embree::BVHN<4>::preBuild(psVar22);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
LAB_00103f31:
    if (this[0x9c] != (BVHNBuilderSAH<4,embree::TriangleMv<4>>)0x0) {
      if (pvVar26 < (vector_t *)0xf4240) {
        *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
      }
      else {
        *(ulong *)(this + 0x88) = (ulong)pvVar26 / 1000;
      }
    }
    if (*(long *)(this + 0x20) != 0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x1c0) = 1;
    }
    dVar28 = (double)((ulong)(pvVar26 + 3) >> 2) * __LC3 * __LC13;
    if (__LC5 <= dVar28) {
      uVar21 = (long)(dVar28 - __LC5) ^ 0x8000000000000000;
    }
    else {
      uVar21 = (ulong)dVar28;
    }
    uVar21 = uVar21 + ((ulong)((long)pvVar26 * 0xe0) >> 4);
    FastAllocator::init_estimate((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar21);
    lVar10 = *(long *)(this + 0x10);
    if (uVar21 == 0) {
LAB_00104408:
      uVar21 = 0x400;
LAB_0010440d:
      pvVar27 = *(vector_t **)(this + 0x40);
      *(ulong *)(this + 0x80) = uVar21;
      if (pvVar26 <= pvVar27) goto LAB_001040cb;
LAB_00104421:
      if (pvVar27 == (vector_t *)0x0) {
        pvVar27 = pvVar26;
        if (pvVar26 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar26;
        }
      }
      else {
        do {
          pvVar27 = (vector_t *)((long)pvVar27 * 2);
          if (pvVar27 == (vector_t *)0x0) {
            pvVar27 = (vector_t *)0x1;
          }
        } while (pvVar27 < pvVar26);
        if (pvVar26 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar26;
        }
      }
      puVar25 = *(undefined8 **)(this + 0x48);
      uVar21 = (long)pvVar27 << 5;
      (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),uVar21,0);
      if (uVar21 < 0x1c00000) {
        lVar10 = embree::alignedMalloc(uVar21,0x20);
      }
      else {
        lVar10 = embree::os_malloc(uVar21,(bool *)(this + 0x30));
      }
      *(long *)(this + 0x48) = lVar10;
      if (*(long *)(this + 0x38) != 0) {
        puVar17 = puVar25;
        uVar21 = 0;
        while( true ) {
          uVar13 = puVar17[1];
          puVar12 = (undefined8 *)(lVar10 + uVar21 * 0x20);
          *puVar12 = *puVar17;
          puVar12[1] = uVar13;
          uVar13 = puVar17[3];
          puVar12[2] = puVar17[2];
          puVar12[3] = uVar13;
          if (*(ulong *)(this + 0x38) <= uVar21 + 1) break;
          lVar10 = *(long *)(this + 0x48);
          puVar17 = puVar17 + 4;
          uVar21 = uVar21 + 1;
        }
      }
      lVar10 = *(long *)(this + 0x40);
      if (puVar25 != (undefined8 *)0x0) {
        if ((ulong)(lVar10 << 5) < 0x1c00000) {
          embree::alignedFree(puVar25);
        }
        else {
          embree::os_free(puVar25,lVar10 << 5,(bool)this[0x30]);
        }
      }
      if (lVar10 != 0) {
        (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
      }
      *(vector_t **)(this + 0x38) = pvVar26;
      *(vector_t **)(this + 0x40) = pvVar27;
    }
    else {
      bVar2 = *(byte *)(lVar10 + 0x182);
      uVar9 = embree::TaskScheduler::threadCount();
      lVar10 = *(long *)(lVar10 + 0x88) * (2 - (ulong)bVar2);
      uVar16 = lVar10 * 0x14;
      if (uVar9 <= ((uVar21 - 1) + uVar16) / uVar16) goto LAB_00104408;
      uVar16 = lVar10 * 0x50;
      if ((long)uVar16 < 0) {
        dVar28 = (double)(uVar16 >> 1) + (double)(uVar16 >> 1);
      }
      else {
        dVar28 = (double)(long)uVar16;
      }
      dVar28 = dVar28 / ((double)uVar21 / (double)pvVar26);
      if ((double)((ulong)dVar28 & _LC9) < _LC6) {
        dVar28 = (double)((ulong)((double)(long)dVar28 +
                                 (double)(-(ulong)((double)(long)dVar28 < dVar28) & _LC8)) |
                         ~_LC9 & (ulong)dVar28);
      }
      if (__LC5 <= dVar28) {
        uVar21 = (long)(dVar28 - __LC5) ^ 0x8000000000000000;
        goto LAB_0010440d;
      }
      pvVar27 = *(vector_t **)(this + 0x40);
      *(long *)(this + 0x80) = (long)dVar28;
      if (pvVar27 < pvVar26) goto LAB_00104421;
LAB_001040cb:
      *(vector_t **)(this + 0x38) = pvVar26;
    }
    if (*(long *)(this + 0x20) == 0) {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x90),0,
                 pvVar26,this + 0x28,*(long *)(*(long *)(this + 0x10) + 0x68) + 600);
    }
    else {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,(uint)*(long *)(this + 0x20),(ulong)*(uint *)(this + 0x98),
                 pvVar26,(BuildProgressMonitor *)(this + 0x28));
    }
    psVar22 = *(string **)(this + 0x10);
    if (local_b0 != local_b8) {
      local_138 = *(undefined8 *)(this + 0x50);
      uStack_130 = *(undefined8 *)(this + 0x58);
      local_128 = *(undefined8 *)(this + 0x60);
      uStack_120 = *(undefined8 *)(this + 0x68);
      local_118 = *(undefined8 *)(this + 0x70);
      uStack_110 = *(undefined8 *)(this + 0x78);
      local_108 = *(undefined8 *)(this + 0x80);
      uStack_100 = *(undefined8 *)(this + 0x88);
      local_148 = &PTR_createLeaf_00108360;
      local_140 = psVar22;
      uVar13 = embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build
                         (&local_148,psVar22 + 0x78,*(long *)(psVar22 + 0x68) + 600,
                          *(undefined8 *)(this + 0x48),(Geometry *)&local_f8);
      local_138 = local_f8;
      uStack_130 = uStack_f0;
      local_128 = local_e8;
      uStack_120 = uStack_e0;
      local_118 = local_f8;
      uStack_110 = uStack_f0;
      local_108 = local_e8;
      uStack_100 = uStack_e0;
      embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),uVar13,&local_138,local_b0 - local_b8);
      embree::BVHN<4>::layoutLargeNodes(*(ulong *)(this + 0x10));
      if (*(long *)(this + 0x88) == -1) {
        if ((*(long *)(this + 0x18) != 0) && ((*(byte *)(*(long *)(this + 0x18) + 0x230) & 1) == 0))
        {
          pvVar6 = *(void **)(this + 0x48);
          lVar10 = *(long *)(this + 0x40);
          if (pvVar6 != (void *)0x0) {
            if ((ulong)(lVar10 << 5) < 0x1c00000) {
              embree::alignedFree(pvVar6);
            }
            else {
              embree::os_free(pvVar6,lVar10 << 5,(bool)this[0x30]);
            }
          }
          if (lVar10 != 0) {
            (**(code **)**(undefined8 **)(this + 0x28))
                      (*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
          }
          *(undefined8 *)(this + 0x48) = 0;
          *(undefined8 *)(this + 0x40) = 0;
          *(undefined8 *)(this + 0x38) = 0;
        }
      }
      else {
        lVar10 = *(long *)(this + 0x10);
        pvVar6 = *(void **)(lVar10 + 0x1e8);
        lVar7 = *(long *)(lVar10 + 0x1e0);
        if (pvVar6 != (void *)0x0) {
          if ((ulong)(lVar7 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar6);
          }
          else {
            embree::os_free(pvVar6,lVar7 << 5,*(bool *)(lVar10 + 0x1d0));
          }
        }
        if (lVar7 != 0) {
          (**(code **)**(undefined8 **)(lVar10 + 0x1c8))
                    (*(undefined8 **)(lVar10 + 0x1c8),lVar7 * -0x20,1);
        }
        *(undefined8 *)(lVar10 + 0x1e8) = 0;
        *(undefined8 *)(lVar10 + 0x1e0) = 0;
        *(undefined8 *)(lVar10 + 0x1d8) = 0;
        *(undefined8 *)(lVar10 + 0x1c8) = *(undefined8 *)(this + 0x28);
        *(BVHNBuilderSAH<4,embree::TriangleMv<4>> *)(lVar10 + 0x1d0) = this[0x30];
        *(undefined8 *)(lVar10 + 0x1d8) = *(undefined8 *)(this + 0x38);
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(lVar10 + 0x1e0) = *(undefined8 *)(this + 0x40);
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(lVar10 + 0x1e8) = *(undefined8 *)(this + 0x48);
        *(undefined8 *)(this + 0x48) = 0;
      }
      lVar10 = *(long *)(this + 0x10);
      this_00 = (FastAllocator *)(lVar10 + 0x78);
      FastAllocator::internal_fix_used_blocks(this_00);
      plVar15 = *(long **)(lVar10 + 0x1a8);
      plVar14 = *(long **)(lVar10 + 0x1b0);
      if (plVar15 != plVar14) {
        do {
          while( true ) {
            lVar7 = *plVar15;
            if (this_00 != *(FastAllocator **)(lVar7 + 8)) break;
            embree::MutexSys::lock();
            if (this_00 == *(FastAllocator **)(lVar7 + 8)) {
              LOCK();
              plVar24 = (long *)(*(long *)(lVar7 + 8) + 0x118);
              *plVar24 = *plVar24 + *(long *)(lVar7 + 0xa8) + *(long *)(lVar7 + 0x68);
              UNLOCK();
              LOCK();
              plVar24 = (long *)(*(long *)(lVar7 + 8) + 0x120);
              *plVar24 = *plVar24 +
                         (((*(long *)(lVar7 + 0x98) + *(long *)(lVar7 + 0x58)) -
                          *(long *)(lVar7 + 0x50)) - *(long *)(lVar7 + 0x90));
              UNLOCK();
              LOCK();
              plVar24 = (long *)(*(long *)(lVar7 + 8) + 0x128);
              *plVar24 = *plVar24 + *(long *)(lVar7 + 0xb0) + *(long *)(lVar7 + 0x70);
              UNLOCK();
              *(undefined8 *)(lVar7 + 0x48) = 0;
              *(undefined8 *)(lVar7 + 0x58) = 0;
              *(undefined8 *)(lVar7 + 0x50) = 0;
              *(undefined8 *)(lVar7 + 0x68) = 0;
              *(undefined8 *)(lVar7 + 0x70) = 0;
              *(undefined8 *)(lVar7 + 0x60) = 0;
              *(undefined8 *)(lVar7 + 0x88) = 0;
              *(undefined8 *)(lVar7 + 0x98) = 0;
              *(undefined8 *)(lVar7 + 0x90) = 0;
              *(undefined8 *)(lVar7 + 0xa8) = 0;
              *(undefined8 *)(lVar7 + 0xb0) = 0;
              *(undefined8 *)(lVar7 + 0xa0) = 0;
              LOCK();
              *(undefined8 *)(lVar7 + 8) = 0;
              UNLOCK();
            }
            plVar15 = plVar15 + 1;
            embree::MutexSys::unlock();
            if (plVar14 == plVar15) goto LAB_0010487e;
          }
          plVar15 = plVar15 + 1;
        } while (plVar14 != plVar15);
LAB_0010487e:
        if (*(long *)(lVar10 + 0x1a8) != *(long *)(lVar10 + 0x1b0)) {
          *(long *)(lVar10 + 0x1b0) = *(long *)(lVar10 + 0x1a8);
        }
      }
      embree::BVHN<4>::postBuild(local_150);
      goto LAB_001043da;
    }
    lVar10 = *(long *)psVar22;
  }
  (**(code **)(lVar10 + 0x28))(psVar22);
  pvVar6 = *(void **)(this + 0x48);
  lVar10 = *(long *)(this + 0x40);
  if (pvVar6 != (void *)0x0) {
    if ((ulong)(lVar10 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar6);
    }
    else {
      embree::os_free(pvVar6,lVar10 << 5,(bool)this[0x30]);
    }
  }
  if (lVar10 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
LAB_001043da:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleM<4> >::build() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleM<4>>::build
          (BVHNBuilderSAH<4,embree::TriangleM<4>> *this)

{
  FastAllocator *this_00;
  ulong *puVar1;
  byte bVar2;
  string sVar3;
  ThreadLocal2 *this_01;
  Device *pDVar4;
  Block *pBVar5;
  void *pvVar6;
  long lVar7;
  Block *pBVar8;
  ulong uVar9;
  long lVar10;
  string *psVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  long *plVar19;
  ulong *puVar20;
  ulong uVar21;
  string *psVar22;
  ulong *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  vector_t *pvVar26;
  vector_t *pvVar27;
  long in_FS_OFFSET;
  double dVar28;
  double local_150;
  undefined **local_148;
  string *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_b8;
  long local_b0;
  long *local_a8 [2];
  long local_98 [2];
  long *local_88;
  long local_80;
  long local_78 [2];
  ulong *local_68;
  long local_60;
  ulong local_58 [5];
  
  psVar22 = *(string **)(this + 0x10);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) == 0) {
    if (*(long *)(this + 0x88) != -1) goto LAB_001052bc;
LAB_0010598e:
    uVar21 = *(ulong *)(this + 0x90);
    lVar10 = *(long *)(this + 0x18);
    pvVar26 = (vector_t *)0x0;
    if ((uVar21 & 0x100000) != 0) {
      pvVar26 = *(vector_t **)(lVar10 + 0x288);
    }
    if ((uVar21 & 0x200000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x298);
    }
    if ((uVar21 & 0xf) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2b8);
    }
    if ((uVar21 & 0x77770) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2a8);
    }
    if ((uVar21 & 0xe000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x338);
    }
    if ((uVar21 & 0x800000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2c8);
    }
    if ((uVar21 & 0x20000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2d8);
    }
    if ((uVar21 & 0x40000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2e8);
    }
    if ((uVar21 & 0x80000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x2f8);
    }
    if ((uVar21 & 0x1000000) != 0) {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x308);
    }
    if ((uVar21 & 0x400000) == 0) {
      *(int *)(this + 0xa0) = (int)pvVar26;
    }
    else {
      pvVar26 = pvVar26 + *(long *)(lVar10 + 0x318);
      *(int *)(this + 0xa0) = (int)pvVar26;
    }
    if (pvVar26 != (vector_t *)0x0) {
      local_a8[0] = local_98;
      std::__cxx11::string::_M_construct((ulong)local_a8,'\x01');
      *(undefined1 *)local_a8[0] = 0x34;
      plVar14 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x102e2e);
      plVar15 = plVar14 + 2;
      if ((long *)*plVar14 == plVar15) {
        uVar21 = plVar14[1] + 1;
        plVar19 = plVar15;
        plVar24 = local_78;
        if (7 < (uint)uVar21) {
          uVar16 = 0;
          do {
            uVar18 = (int)uVar16 + 8;
            uVar9 = (ulong)uVar18;
            *(undefined8 *)((long)local_78 + uVar16) = *(undefined8 *)((long)plVar15 + uVar16);
            uVar16 = uVar9;
          } while (uVar18 < ((uint)uVar21 & 0xfffffff8));
          plVar24 = (long *)((long)local_78 + uVar9);
          plVar19 = (long *)(uVar9 + (long)plVar15);
        }
        lVar10 = 0;
        if ((uVar21 & 4) != 0) {
          *(int *)plVar24 = (int)*plVar19;
          lVar10 = 4;
        }
        if ((uVar21 & 2) != 0) {
          *(undefined2 *)((long)plVar24 + lVar10) = *(undefined2 *)((long)plVar19 + lVar10);
          lVar10 = lVar10 + 2;
        }
        local_88 = local_78;
        if ((uVar21 & 1) != 0) {
          *(undefined1 *)((long)plVar24 + lVar10) = *(undefined1 *)((long)plVar19 + lVar10);
        }
      }
      else {
        local_78[0] = plVar14[2];
        local_88 = (long *)*plVar14;
      }
      local_80 = plVar14[1];
      *plVar14 = (long)plVar15;
      plVar14[1] = 0;
      *(undefined1 *)(plVar14 + 2) = 0;
      if (0x3fffffffffffffffU - local_80 < 10) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      plVar15 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x101ef3);
      puVar1 = (ulong *)(plVar15 + 2);
      if ((ulong *)*plVar15 == puVar1) {
        uVar21 = plVar15[1] + 1;
        puVar20 = puVar1;
        puVar23 = local_58;
        if (7 < (uint)uVar21) {
          uVar16 = 0;
          do {
            uVar18 = (int)uVar16 + 8;
            uVar9 = (ulong)uVar18;
            *(undefined8 *)((long)local_58 + uVar16) = *(undefined8 *)((long)puVar1 + uVar16);
            uVar16 = uVar9;
          } while (uVar18 < ((uint)uVar21 & 0xfffffff8));
          puVar23 = (ulong *)((long)local_58 + uVar9);
          puVar20 = (ulong *)(uVar9 + (long)puVar1);
        }
        lVar10 = 0;
        if ((uVar21 & 4) != 0) {
          *(int *)puVar23 = (int)*puVar20;
          lVar10 = 4;
        }
        if ((uVar21 & 2) != 0) {
          *(undefined2 *)((long)puVar23 + lVar10) = *(undefined2 *)((long)puVar20 + lVar10);
          lVar10 = lVar10 + 2;
        }
        local_68 = local_58;
        if ((uVar21 & 1) != 0) {
          *(undefined1 *)((long)puVar23 + lVar10) = *(undefined1 *)((long)puVar20 + lVar10);
        }
      }
      else {
        local_58[0] = plVar15[2];
        local_68 = (ulong *)*plVar15;
      }
      local_60 = plVar15[1];
      *plVar15 = (long)puVar1;
      plVar15[1] = 0;
      *(undefined1 *)(plVar15 + 2) = 0;
      local_150 = (double)embree::BVHN<4>::preBuild(psVar22);
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      if (local_a8[0] != local_98) {
        operator_delete(local_a8[0],local_98[0] + 1);
      }
      goto LAB_00104f61;
    }
LAB_001053a1:
    lVar10 = *(long *)psVar22;
  }
  else {
    uVar18 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    if (uVar18 == *(uint *)(this + 0xa0)) {
      if (*(long *)(this + 0x88) != -1) {
LAB_001052bc:
        FastAllocator::reset((FastAllocator *)(psVar22 + 0x78));
        pvVar6 = *(void **)(this + 0x48);
        lVar10 = *(long *)(this + 0x40);
        if (pvVar6 != (void *)0x0) {
          if ((ulong)(lVar10 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar6);
          }
          else {
            embree::os_free(pvVar6,lVar10 << 5,(bool)this[0x30]);
          }
        }
        if (lVar10 != 0) {
          (**(code **)**(undefined8 **)(this + 0x28))
                    (*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
        }
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x38) = 0;
        *(long *)(this + 0x28) = *(long *)(psVar22 + 0x1c8);
        *(string *)(this + 0x30) = psVar22[0x1d0];
        *(long *)(this + 0x38) = *(long *)(psVar22 + 0x1d8);
        *(long *)(psVar22 + 0x1d8) = 0;
        *(long *)(this + 0x40) = *(long *)(psVar22 + 0x1e0);
        *(long *)(psVar22 + 0x1e0) = 0;
        *(long *)(this + 0x48) = *(long *)(psVar22 + 0x1e8);
        *(long *)(psVar22 + 0x1e8) = 0;
        goto LAB_0010537b;
      }
      pvVar26 = (vector_t *)(ulong)uVar18;
      *(uint *)(this + 0xa0) = uVar18;
      if (pvVar26 != (vector_t *)0x0) goto LAB_00104f09;
      goto LAB_001053a1;
    }
    FastAllocator::internal_fix_used_blocks((FastAllocator *)(psVar22 + 0x78));
    puVar25 = *(undefined8 **)(psVar22 + 0x1a8);
    puVar17 = *(undefined8 **)(psVar22 + 0x1b0);
    if (puVar17 != puVar25) {
      do {
        this_01 = (ThreadLocal2 *)*puVar25;
        puVar25 = puVar25 + 1;
        FastAllocator::ThreadLocal2::unbind(this_01,(FastAllocator *)(psVar22 + 0x78));
      } while (puVar17 != puVar25);
      if (*(long *)(psVar22 + 0x1a8) != *(long *)(psVar22 + 0x1b0)) {
        *(long *)(psVar22 + 0x1b0) = *(long *)(psVar22 + 0x1a8);
      }
    }
    LOCK();
    *(long *)(psVar22 + 400) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar22 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar22 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(psVar22 + 0x170) != 0) {
      sVar3 = psVar22[0x180];
      pDVar4 = *(Device **)(psVar22 + 0x78);
      pBVar8 = *(Block **)(psVar22 + 0x170);
      while (pBVar8 != (Block *)0x0) {
        pBVar5 = *(Block **)(pBVar8 + 0x18);
        FastAllocator::Block::clear_block(pBVar8,pDVar4,(bool)sVar3);
        pBVar8 = pBVar5;
      }
    }
    LOCK();
    *(long *)(psVar22 + 0x170) = 0;
    UNLOCK();
    if (*(long *)(psVar22 + 0x178) != 0) {
      sVar3 = psVar22[0x180];
      pDVar4 = *(Device **)(psVar22 + 0x78);
      pBVar8 = *(Block **)(psVar22 + 0x178);
      while (pBVar8 != (Block *)0x0) {
        pBVar5 = *(Block **)(pBVar8 + 0x18);
        FastAllocator::Block::clear_block(pBVar8,pDVar4,(bool)sVar3);
        pBVar8 = pBVar5;
      }
    }
    LOCK();
    *(long *)(psVar22 + 0x178) = 0;
    UNLOCK();
    psVar11 = psVar22 + 0xf0;
    do {
      LOCK();
      *(long *)psVar11 = 0;
      UNLOCK();
      LOCK();
      *(long *)(psVar11 + 0x40) = 0;
      UNLOCK();
      psVar11 = psVar11 + 8;
    } while (psVar22 + 0x130 != psVar11);
    pvVar6 = *(void **)(psVar22 + 0x1e8);
    lVar10 = *(long *)(psVar22 + 0x1e0);
    if (pvVar6 != (void *)0x0) {
      if ((ulong)(lVar10 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar6);
      }
      else {
        embree::os_free(pvVar6,lVar10 << 5,(bool)psVar22[0x1d0]);
      }
    }
    if (lVar10 != 0) {
      (**(code **)**(undefined8 **)(psVar22 + 0x1c8))
                (*(undefined8 **)(psVar22 + 0x1c8),lVar10 * -0x20,1);
    }
    *(long *)(psVar22 + 0x1e8) = 0;
    *(long *)(psVar22 + 0x1e0) = 0;
    *(long *)(psVar22 + 0x1d8) = 0;
    if (*(long *)(this + 0x88) != -1) {
      psVar22 = *(string **)(this + 0x10);
      goto LAB_001052bc;
    }
LAB_0010537b:
    if (*(long *)(this + 0x20) == 0) {
      psVar22 = *(string **)(this + 0x10);
      goto LAB_0010598e;
    }
    uVar18 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    psVar22 = *(string **)(this + 0x10);
    pvVar26 = (vector_t *)(ulong)uVar18;
    *(uint *)(this + 0xa0) = uVar18;
    if (pvVar26 == (vector_t *)0x0) goto LAB_001053a1;
LAB_00104f09:
    local_60 = 0;
    local_58[0] = local_58[0] & 0xffffffffffffff00;
    local_68 = local_58;
    local_150 = (double)embree::BVHN<4>::preBuild(psVar22);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
LAB_00104f61:
    if (this[0x9c] != (BVHNBuilderSAH<4,embree::TriangleM<4>>)0x0) {
      if (pvVar26 < (vector_t *)0xf4240) {
        *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
      }
      else {
        *(ulong *)(this + 0x88) = (ulong)pvVar26 / 1000;
      }
    }
    if (*(long *)(this + 0x20) != 0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x1c0) = 1;
    }
    dVar28 = (double)((ulong)(pvVar26 + 3) >> 2) * __LC3 * __LC13;
    if (__LC5 <= dVar28) {
      uVar21 = (long)(dVar28 - __LC5) ^ 0x8000000000000000;
    }
    else {
      uVar21 = (ulong)dVar28;
    }
    uVar21 = uVar21 + ((ulong)((long)pvVar26 * 0xe0) >> 4);
    FastAllocator::init_estimate((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar21);
    lVar10 = *(long *)(this + 0x10);
    if (uVar21 == 0) {
LAB_00105438:
      uVar21 = 0x400;
LAB_0010543d:
      pvVar27 = *(vector_t **)(this + 0x40);
      *(ulong *)(this + 0x80) = uVar21;
      if (pvVar26 <= pvVar27) goto LAB_001050fb;
LAB_00105451:
      if (pvVar27 == (vector_t *)0x0) {
        pvVar27 = pvVar26;
        if (pvVar26 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar26;
        }
      }
      else {
        do {
          pvVar27 = (vector_t *)((long)pvVar27 * 2);
          if (pvVar27 == (vector_t *)0x0) {
            pvVar27 = (vector_t *)0x1;
          }
        } while (pvVar27 < pvVar26);
        if (pvVar26 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar26;
        }
      }
      puVar25 = *(undefined8 **)(this + 0x48);
      uVar21 = (long)pvVar27 << 5;
      (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),uVar21,0);
      if (uVar21 < 0x1c00000) {
        lVar10 = embree::alignedMalloc(uVar21,0x20);
      }
      else {
        lVar10 = embree::os_malloc(uVar21,(bool *)(this + 0x30));
      }
      *(long *)(this + 0x48) = lVar10;
      if (*(long *)(this + 0x38) != 0) {
        puVar17 = puVar25;
        uVar21 = 0;
        while( true ) {
          uVar13 = puVar17[1];
          puVar12 = (undefined8 *)(lVar10 + uVar21 * 0x20);
          *puVar12 = *puVar17;
          puVar12[1] = uVar13;
          uVar13 = puVar17[3];
          puVar12[2] = puVar17[2];
          puVar12[3] = uVar13;
          if (*(ulong *)(this + 0x38) <= uVar21 + 1) break;
          lVar10 = *(long *)(this + 0x48);
          puVar17 = puVar17 + 4;
          uVar21 = uVar21 + 1;
        }
      }
      lVar10 = *(long *)(this + 0x40);
      if (puVar25 != (undefined8 *)0x0) {
        if ((ulong)(lVar10 << 5) < 0x1c00000) {
          embree::alignedFree(puVar25);
        }
        else {
          embree::os_free(puVar25,lVar10 << 5,(bool)this[0x30]);
        }
      }
      if (lVar10 != 0) {
        (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
      }
      *(vector_t **)(this + 0x38) = pvVar26;
      *(vector_t **)(this + 0x40) = pvVar27;
    }
    else {
      bVar2 = *(byte *)(lVar10 + 0x182);
      uVar9 = embree::TaskScheduler::threadCount();
      lVar10 = *(long *)(lVar10 + 0x88) * (2 - (ulong)bVar2);
      uVar16 = lVar10 * 0x14;
      if (uVar9 <= ((uVar21 - 1) + uVar16) / uVar16) goto LAB_00105438;
      uVar16 = lVar10 * 0x50;
      if ((long)uVar16 < 0) {
        dVar28 = (double)(uVar16 >> 1) + (double)(uVar16 >> 1);
      }
      else {
        dVar28 = (double)(long)uVar16;
      }
      dVar28 = dVar28 / ((double)uVar21 / (double)pvVar26);
      if ((double)((ulong)dVar28 & _LC9) < _LC6) {
        dVar28 = (double)((ulong)((double)(long)dVar28 +
                                 (double)(-(ulong)((double)(long)dVar28 < dVar28) & _LC8)) |
                         ~_LC9 & (ulong)dVar28);
      }
      if (__LC5 <= dVar28) {
        uVar21 = (long)(dVar28 - __LC5) ^ 0x8000000000000000;
        goto LAB_0010543d;
      }
      pvVar27 = *(vector_t **)(this + 0x40);
      *(long *)(this + 0x80) = (long)dVar28;
      if (pvVar27 < pvVar26) goto LAB_00105451;
LAB_001050fb:
      *(vector_t **)(this + 0x38) = pvVar26;
    }
    if (*(long *)(this + 0x20) == 0) {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x90),0,
                 pvVar26,this + 0x28,*(long *)(*(long *)(this + 0x10) + 0x68) + 600);
    }
    else {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,(uint)*(long *)(this + 0x20),(ulong)*(uint *)(this + 0x98),
                 pvVar26,(BuildProgressMonitor *)(this + 0x28));
    }
    psVar22 = *(string **)(this + 0x10);
    if (local_b0 != local_b8) {
      local_138 = *(undefined8 *)(this + 0x50);
      uStack_130 = *(undefined8 *)(this + 0x58);
      local_128 = *(undefined8 *)(this + 0x60);
      uStack_120 = *(undefined8 *)(this + 0x68);
      local_118 = *(undefined8 *)(this + 0x70);
      uStack_110 = *(undefined8 *)(this + 0x78);
      local_108 = *(undefined8 *)(this + 0x80);
      uStack_100 = *(undefined8 *)(this + 0x88);
      local_148 = &PTR_createLeaf_00108378;
      local_140 = psVar22;
      uVar13 = embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build
                         (&local_148,psVar22 + 0x78,*(long *)(psVar22 + 0x68) + 600,
                          *(undefined8 *)(this + 0x48),(Geometry *)&local_f8);
      local_138 = local_f8;
      uStack_130 = uStack_f0;
      local_128 = local_e8;
      uStack_120 = uStack_e0;
      local_118 = local_f8;
      uStack_110 = uStack_f0;
      local_108 = local_e8;
      uStack_100 = uStack_e0;
      embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),uVar13,&local_138,local_b0 - local_b8);
      embree::BVHN<4>::layoutLargeNodes(*(ulong *)(this + 0x10));
      if (*(long *)(this + 0x88) == -1) {
        if ((*(long *)(this + 0x18) != 0) && ((*(byte *)(*(long *)(this + 0x18) + 0x230) & 1) == 0))
        {
          pvVar6 = *(void **)(this + 0x48);
          lVar10 = *(long *)(this + 0x40);
          if (pvVar6 != (void *)0x0) {
            if ((ulong)(lVar10 << 5) < 0x1c00000) {
              embree::alignedFree(pvVar6);
            }
            else {
              embree::os_free(pvVar6,lVar10 << 5,(bool)this[0x30]);
            }
          }
          if (lVar10 != 0) {
            (**(code **)**(undefined8 **)(this + 0x28))
                      (*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
          }
          *(undefined8 *)(this + 0x48) = 0;
          *(undefined8 *)(this + 0x40) = 0;
          *(undefined8 *)(this + 0x38) = 0;
        }
      }
      else {
        lVar10 = *(long *)(this + 0x10);
        pvVar6 = *(void **)(lVar10 + 0x1e8);
        lVar7 = *(long *)(lVar10 + 0x1e0);
        if (pvVar6 != (void *)0x0) {
          if ((ulong)(lVar7 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar6);
          }
          else {
            embree::os_free(pvVar6,lVar7 << 5,*(bool *)(lVar10 + 0x1d0));
          }
        }
        if (lVar7 != 0) {
          (**(code **)**(undefined8 **)(lVar10 + 0x1c8))
                    (*(undefined8 **)(lVar10 + 0x1c8),lVar7 * -0x20,1);
        }
        *(undefined8 *)(lVar10 + 0x1e8) = 0;
        *(undefined8 *)(lVar10 + 0x1e0) = 0;
        *(undefined8 *)(lVar10 + 0x1d8) = 0;
        *(undefined8 *)(lVar10 + 0x1c8) = *(undefined8 *)(this + 0x28);
        *(BVHNBuilderSAH<4,embree::TriangleM<4>> *)(lVar10 + 0x1d0) = this[0x30];
        *(undefined8 *)(lVar10 + 0x1d8) = *(undefined8 *)(this + 0x38);
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(lVar10 + 0x1e0) = *(undefined8 *)(this + 0x40);
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(lVar10 + 0x1e8) = *(undefined8 *)(this + 0x48);
        *(undefined8 *)(this + 0x48) = 0;
      }
      lVar10 = *(long *)(this + 0x10);
      this_00 = (FastAllocator *)(lVar10 + 0x78);
      FastAllocator::internal_fix_used_blocks(this_00);
      plVar15 = *(long **)(lVar10 + 0x1a8);
      plVar14 = *(long **)(lVar10 + 0x1b0);
      if (plVar15 != plVar14) {
        do {
          while( true ) {
            lVar7 = *plVar15;
            if (this_00 != *(FastAllocator **)(lVar7 + 8)) break;
            embree::MutexSys::lock();
            if (this_00 == *(FastAllocator **)(lVar7 + 8)) {
              LOCK();
              plVar24 = (long *)(*(long *)(lVar7 + 8) + 0x118);
              *plVar24 = *plVar24 + *(long *)(lVar7 + 0xa8) + *(long *)(lVar7 + 0x68);
              UNLOCK();
              LOCK();
              plVar24 = (long *)(*(long *)(lVar7 + 8) + 0x120);
              *plVar24 = *plVar24 +
                         (((*(long *)(lVar7 + 0x98) + *(long *)(lVar7 + 0x58)) -
                          *(long *)(lVar7 + 0x50)) - *(long *)(lVar7 + 0x90));
              UNLOCK();
              LOCK();
              plVar24 = (long *)(*(long *)(lVar7 + 8) + 0x128);
              *plVar24 = *plVar24 + *(long *)(lVar7 + 0xb0) + *(long *)(lVar7 + 0x70);
              UNLOCK();
              *(undefined8 *)(lVar7 + 0x48) = 0;
              *(undefined8 *)(lVar7 + 0x58) = 0;
              *(undefined8 *)(lVar7 + 0x50) = 0;
              *(undefined8 *)(lVar7 + 0x68) = 0;
              *(undefined8 *)(lVar7 + 0x70) = 0;
              *(undefined8 *)(lVar7 + 0x60) = 0;
              *(undefined8 *)(lVar7 + 0x88) = 0;
              *(undefined8 *)(lVar7 + 0x98) = 0;
              *(undefined8 *)(lVar7 + 0x90) = 0;
              *(undefined8 *)(lVar7 + 0xa8) = 0;
              *(undefined8 *)(lVar7 + 0xb0) = 0;
              *(undefined8 *)(lVar7 + 0xa0) = 0;
              LOCK();
              *(undefined8 *)(lVar7 + 8) = 0;
              UNLOCK();
            }
            plVar15 = plVar15 + 1;
            embree::MutexSys::unlock();
            if (plVar14 == plVar15) goto LAB_001058ae;
          }
          plVar15 = plVar15 + 1;
        } while (plVar14 != plVar15);
LAB_001058ae:
        if (*(long *)(lVar10 + 0x1a8) != *(long *)(lVar10 + 0x1b0)) {
          *(long *)(lVar10 + 0x1b0) = *(long *)(lVar10 + 0x1a8);
        }
      }
      embree::BVHN<4>::postBuild(local_150);
      goto LAB_0010540a;
    }
    lVar10 = *(long *)psVar22;
  }
  (**(code **)(lVar10 + 0x28))(psVar22);
  pvVar6 = *(void **)(this + 0x48);
  lVar10 = *(long *)(this + 0x40);
  if (pvVar6 != (void *)0x0) {
    if ((ulong)(lVar10 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar6);
    }
    else {
      embree::os_free(pvVar6,lVar10 << 5,(bool)this[0x30]);
    }
  }
  if (lVar10 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar10 * -0x20,1);
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
LAB_0010540a:
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void std::vector<embree::FastAllocator::ThreadLocal2*,
   std::allocator<embree::FastAllocator::ThreadLocal2*>
   >::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*
   const&>(__gnu_cxx::__normal_iterator<embree::FastAllocator::ThreadLocal2**,
   std::vector<embree::FastAllocator::ThreadLocal2*,
   std::allocator<embree::FastAllocator::ThreadLocal2*> > >, embree::FastAllocator::ThreadLocal2*
   const&) */

void __thiscall
std::
vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>::
_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
          (vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
           *this,void *param_2,undefined8 *param_3)

{
  void *__src;
  ulong uVar1;
  void *pvVar2;
  void *__dest;
  size_t __n;
  long lVar3;
  ulong uVar4;
  size_t __n_00;
  
  pvVar2 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar1 = (long)pvVar2 - (long)__src >> 3;
  if (uVar1 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar2) {
    if (0xfffffffffffffffe < uVar1) goto LAB_00105fd0;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00105fd0:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_00105f59;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_00105f59:
  *(undefined8 *)((long)__dest + __n) = *param_3;
  if (0 < (long)__n) {
    memmove(__dest,__src,__n);
  }
  __n_00 = (long)pvVar2 - (long)param_2;
  pvVar2 = (void *)((long)__dest + __n + 8);
  if (0 < (long)__n_00) {
    pvVar2 = memmove(pvVar2,param_2,__n_00);
  }
  if (__src != (void *)0x0) {
    operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
  }
  *(void **)this = __dest;
  *(size_t *)(this + 8) = __n_00 + (long)pvVar2;
  *(long *)(this + 0x10) = lVar3;
  return;
}



/* embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderT<embree::sse2::CreateLeaf<4,
   embree::TriangleM<4> > >::createLeaf(embree::PrimRef const*, embree::range<unsigned long> const&,
   embree::FastAllocator::CachedAllocator const&) */

ulong __thiscall
embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderT<embree::sse2::CreateLeaf<4,embree::TriangleM<4>>>
::createLeaf(BVHNBuilderT<embree::sse2::CreateLeaf<4,embree::TriangleM<4>>> *this,PrimRef *param_1,
            range *param_2,CachedAllocator *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  FastAllocator *this_00;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  undefined8 uVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  float *pfVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [4];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [4];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [4];
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
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  ulong local_108;
  ulong local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [4];
  undefined1 auStack_d4 [8];
  float fStack_cc;
  undefined1 local_c8 [4];
  undefined1 auStack_c4 [8];
  float fStack_bc;
  undefined1 local_b8 [4];
  undefined1 auStack_b4 [8];
  float fStack_ac;
  undefined1 local_a8 [4];
  undefined1 auStack_a4 [8];
  float fStack_9c;
  undefined1 local_98 [4];
  undefined1 auStack_94 [8];
  float fStack_8c;
  undefined1 local_88 [4];
  undefined1 auStack_84 [8];
  float fStack_7c;
  undefined1 local_78 [4];
  undefined1 auStack_74 [8];
  float fStack_6c;
  undefined1 local_68 [4];
  undefined1 auStack_64 [8];
  float fStack_5c;
  undefined1 local_58 [4];
  undefined1 auStack_54 [8];
  float fStack_4c;
  long local_40;
  
  uVar19 = *(ulong *)param_2;
  puVar4 = *(ulong **)(param_3 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = *(FastAllocator **)param_3;
  uVar13 = *puVar4;
  uVar21 = (*(long *)(param_2 + 8) + 3) - uVar19;
  uVar22 = uVar21 & 0xfffffffffffffffc;
  uVar21 = uVar21 >> 2;
  lVar2 = uVar22 * 2 + uVar21 * 3;
  uVar23 = lVar2 * 0x10;
  local_108 = uVar23;
  if (this_00 != *(FastAllocator **)(uVar13 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(uVar13 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(uVar13 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(uVar13 + 0xa8) + *(long *)(uVar13 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar13 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(uVar13 + 0x98) + *(long *)(uVar13 + 0x58)) -
                           *(long *)(uVar13 + 0x50)) - *(long *)(uVar13 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar13 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(uVar13 + 0xb0) + *(long *)(uVar13 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(uVar13 + 0x48) = 0;
    *(undefined8 *)(uVar13 + 0x58) = 0;
    *(undefined8 *)(uVar13 + 0x50) = 0;
    *(undefined8 *)(uVar13 + 0x68) = 0;
    *(undefined8 *)(uVar13 + 0x70) = 0;
    *(undefined8 *)(uVar13 + 0x60) = 0;
    if (this_00 == (FastAllocator *)0x0) {
      *(undefined8 *)(uVar13 + 0x88) = 0;
      uVar9 = 0;
      *(undefined8 *)(uVar13 + 0x98) = 0;
      *(undefined8 *)(uVar13 + 0x90) = 0;
      *(undefined8 *)(uVar13 + 0xa8) = 0;
      *(undefined8 *)(uVar13 + 0xb0) = 0;
    }
    else {
      uVar9 = *(undefined8 *)(this_00 + 0x10);
      *(undefined8 *)(uVar13 + 0x88) = 0;
      *(undefined8 *)(uVar13 + 0x98) = 0;
      *(undefined8 *)(uVar13 + 0x60) = uVar9;
      *(undefined8 *)(uVar13 + 0x90) = 0;
      *(undefined8 *)(uVar13 + 0xa8) = 0;
      *(undefined8 *)(uVar13 + 0xb0) = 0;
      *(undefined8 *)(uVar13 + 0xa0) = 0;
      uVar9 = *(undefined8 *)(this_00 + 0x10);
    }
    *(undefined8 *)(uVar13 + 0xa0) = uVar9;
    LOCK();
    *(FastAllocator **)(uVar13 + 8) = this_00;
    UNLOCK();
    local_100 = uVar13;
    embree::MutexSys::lock();
    puVar5 = *(ulong **)(this_00 + 0x138);
    if (puVar5 == *(ulong **)(this_00 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(this_00 + 0x130),puVar5,&local_100);
    }
    else {
      *puVar5 = uVar13;
      *(long *)(this_00 + 0x138) = *(long *)(this_00 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar6 = puVar4[2];
  puVar4[5] = puVar4[5] + uVar23;
  uVar12 = (ulong)(-(int)uVar6 & 0xf);
  lVar3 = uVar6 + uVar12;
  uVar13 = uVar23 + lVar3;
  puVar4[2] = uVar13;
  if (puVar4[3] < uVar13) {
    puVar4[2] = uVar6;
    if (puVar4[4] < (uVar22 * 2 + uVar21 * 3) * 0x40) {
      pfVar8 = (float *)FastAllocator::malloc(this_00,&local_108,0x40,false);
    }
    else {
      local_100 = puVar4[4];
      pfVar8 = (float *)FastAllocator::malloc(this_00,&local_100,0x40,true);
      puVar4[1] = (ulong)pfVar8;
      uVar13 = puVar4[2];
      puVar4[2] = uVar23;
      puVar4[6] = (puVar4[3] + puVar4[6]) - uVar13;
      puVar4[3] = local_100;
      if (local_100 < uVar23) {
        puVar4[2] = 0;
        local_100 = puVar4[4];
        pfVar8 = (float *)FastAllocator::malloc(this_00,&local_100,0x40,false);
        puVar4[1] = (ulong)pfVar8;
        uVar13 = puVar4[2];
        puVar4[2] = uVar23;
        puVar4[6] = (puVar4[3] + puVar4[6]) - uVar13;
        puVar4[3] = local_100;
        if (local_100 < uVar23) {
          puVar4[2] = 0;
          pfVar8 = (float *)0x0;
        }
      }
    }
  }
  else {
    puVar4[6] = puVar4[6] + uVar12;
    pfVar8 = (float *)(lVar3 + puVar4[1]);
  }
  uVar13 = 7;
  if (uVar21 < 8) {
    uVar13 = uVar21;
  }
  pfVar24 = pfVar8 + lVar2 * 4;
  uVar13 = uVar13 + 8 | (ulong)pfVar8;
  if (uVar21 != 0) {
    do {
      uVar21 = *(ulong *)(param_2 + 8);
      local_f8 = -NAN;
      fStack_f4 = -NAN;
      fStack_f0 = -NAN;
      fStack_ec = -NAN;
      local_e8 = -NAN;
      fStack_e4 = -NAN;
      fStack_e0 = -NAN;
      fStack_dc = -NAN;
      _local_d8 = (undefined1  [16])0x0;
      _local_c8 = (undefined1  [16])0x0;
      _local_b8 = (undefined1  [16])0x0;
      _local_a8 = (undefined1  [16])0x0;
      _local_98 = (undefined1  [16])0x0;
      _local_88 = (undefined1  [16])0x0;
      _local_78 = (undefined1  [16])0x0;
      _local_68 = (undefined1  [16])0x0;
      _local_58 = (undefined1  [16])0x0;
      if (uVar19 < uVar21) {
        lVar2 = *(long *)(*(long *)(*(long *)(this + 8) + 0x68) + 0x1e0);
        lVar20 = uVar19 * 0x20;
        local_f8 = *(float *)(param_1 + lVar20 + 0xc);
        local_e8 = *(float *)(param_1 + lVar20 + 0x1c);
        lVar3 = *(long *)(lVar2 + (ulong)(uint)local_f8 * 8);
        puVar14 = (uint *)((ulong)(uint)local_e8 * *(long *)(lVar3 + 0x60) + *(long *)(lVar3 + 0x58)
                          );
        lVar7 = *(long *)(lVar3 + 0x88);
        lVar3 = *(long *)(lVar3 + 0x90);
        pfVar10 = (float *)((ulong)*puVar14 * lVar3 + lVar7);
        local_b8 = (undefined1  [4])pfVar10[2];
        local_c8 = (undefined1  [4])pfVar10[1];
        local_d8 = (undefined1  [4])*pfVar10;
        _auStack_c4 = SUB1612((undefined1  [16])0x0,4);
        _auStack_d4 = SUB1612((undefined1  [16])0x0,4);
        _auStack_b4 = SUB1612((undefined1  [16])0x0,4);
        pfVar10 = (float *)((ulong)puVar14[1] * lVar3 + lVar7);
        pfVar15 = (float *)((ulong)puVar14[2] * lVar3 + lVar7);
        local_88 = (undefined1  [4])pfVar10[2];
        local_98 = (undefined1  [4])pfVar10[1];
        local_58 = (undefined1  [4])pfVar15[2];
        local_68 = (undefined1  [4])pfVar15[1];
        local_78 = (undefined1  [4])*pfVar15;
        local_a8 = (undefined1  [4])*pfVar10;
        uVar22 = uVar19 + 1;
        _auStack_94 = SUB1612((undefined1  [16])0x0,4);
        _auStack_84 = SUB1612((undefined1  [16])0x0,4);
        _auStack_a4 = SUB1612((undefined1  [16])0x0,4);
        _auStack_74 = SUB1612((undefined1  [16])0x0,4);
        _auStack_64 = SUB1612((undefined1  [16])0x0,4);
        _auStack_54 = SUB1612((undefined1  [16])0x0,4);
        if (uVar22 < uVar21) {
          fStack_f4 = *(float *)(param_1 + lVar20 + 0x2c);
          fStack_e4 = *(float *)(param_1 + lVar20 + 0x3c);
          lVar3 = *(long *)(lVar2 + (ulong)(uint)fStack_f4 * 8);
          puVar14 = (uint *)((ulong)(uint)fStack_e4 * *(long *)(lVar3 + 0x60) +
                            *(long *)(lVar3 + 0x58));
          lVar7 = *(long *)(lVar3 + 0x88);
          lVar3 = *(long *)(lVar3 + 0x90);
          pfVar10 = (float *)((ulong)*puVar14 * lVar3 + lVar7);
          fVar36 = pfVar10[2];
          fVar42 = pfVar10[1];
          fVar46 = *pfVar10;
          _local_c8 = CONCAT44(fVar42,local_c8);
          stack0xffffffffffffff40 = 0;
          _local_d8 = CONCAT44(fVar46,local_d8);
          stack0xffffffffffffff30 = 0;
          _local_b8 = CONCAT44(fVar36,local_b8);
          stack0xffffffffffffff50 = 0;
          pfVar10 = (float *)((ulong)puVar14[1] * lVar3 + lVar7);
          pfVar15 = (float *)((ulong)puVar14[2] * lVar3 + lVar7);
          uVar22 = uVar19 + 2;
          _local_98 = CONCAT44(pfVar10[1],local_98);
          stack0xffffffffffffff70 = 0;
          _local_88 = CONCAT44(pfVar10[2],local_88);
          stack0xffffffffffffff80 = 0;
          _local_a8 = CONCAT44(*pfVar10,local_a8);
          stack0xffffffffffffff60 = 0;
          _local_78 = CONCAT44(*pfVar15,local_78);
          stack0xffffffffffffff90 = 0;
          _local_68 = CONCAT44(pfVar15[1],local_68);
          stack0xffffffffffffffa0 = 0;
          _local_58 = CONCAT44(pfVar15[2],local_58);
          stack0xffffffffffffffb0 = 0;
          if (uVar22 < uVar21) {
            fStack_f0 = *(float *)(param_1 + lVar20 + 0x4c);
            fStack_e0 = *(float *)(param_1 + lVar20 + 0x5c);
            lVar3 = *(long *)(lVar2 + (ulong)(uint)fStack_f0 * 8);
            puVar14 = (uint *)((ulong)(uint)fStack_e0 * *(long *)(lVar3 + 0x60) +
                              *(long *)(lVar3 + 0x58));
            lVar7 = *(long *)(lVar3 + 0x88);
            lVar3 = *(long *)(lVar3 + 0x90);
            pfVar11 = (float *)((ulong)*puVar14 * lVar3 + lVar7);
            auStack_b4._4_4_ = pfVar11[2];
            auStack_c4._4_4_ = pfVar11[1];
            auStack_d4._4_4_ = *pfVar11;
            fStack_bc = 0.0;
            fStack_cc = 0.0;
            fStack_ac = 0.0;
            pfVar11 = (float *)((ulong)puVar14[1] * lVar3 + lVar7);
            pfVar16 = (float *)((ulong)puVar14[2] * lVar3 + lVar7);
            uVar22 = uVar19 + 3;
            auStack_94._4_4_ = pfVar11[1];
            fStack_8c = 0.0;
            auStack_84._4_4_ = pfVar11[2];
            fStack_7c = 0.0;
            auStack_a4._4_4_ = *pfVar11;
            fStack_9c = 0.0;
            auStack_74._4_4_ = *pfVar16;
            fStack_6c = 0.0;
            auStack_64._4_4_ = pfVar16[1];
            fStack_5c = 0.0;
            auStack_54._4_4_ = pfVar16[2];
            fStack_4c = 0.0;
            if (uVar22 < uVar21) {
              fStack_ec = *(float *)(param_1 + lVar20 + 0x6c);
              fStack_dc = *(float *)(param_1 + lVar20 + 0x7c);
              lVar2 = *(long *)(lVar2 + (ulong)(uint)fStack_ec * 8);
              puVar14 = (uint *)((ulong)(uint)fStack_dc * *(long *)(lVar2 + 0x60) +
                                *(long *)(lVar2 + 0x58));
              lVar3 = *(long *)(lVar2 + 0x88);
              lVar2 = *(long *)(lVar2 + 0x90);
              pfVar17 = (float *)((ulong)*puVar14 * lVar2 + lVar3);
              fStack_ac = pfVar17[2];
              fStack_bc = pfVar17[1];
              fStack_cc = *pfVar17;
              pfVar17 = (float *)((ulong)puVar14[1] * lVar2 + lVar3);
              fStack_9c = *pfVar17;
              fStack_8c = pfVar17[1];
              fStack_7c = pfVar17[2];
              pfVar18 = (float *)((ulong)puVar14[2] * lVar2 + lVar3);
              fStack_5c = pfVar18[1];
              fStack_6c = *pfVar18;
              fStack_4c = pfVar18[2];
              fVar25 = (float)local_58 - (float)local_b8;
              fVar26 = pfVar15[2] - fVar36;
              fVar27 = pfVar16[2] - (float)auStack_b4._4_4_;
              fVar28 = pfVar18[2] - fStack_ac;
              fVar33 = (float)local_78 - (float)local_d8;
              fVar35 = *pfVar15 - fVar46;
              fVar37 = *pfVar16 - (float)auStack_d4._4_4_;
              fVar38 = *pfVar18 - fStack_cc;
              uVar19 = uVar19 + 4;
              fVar29 = (float)local_68 - (float)local_c8;
              fVar30 = pfVar15[1] - fVar42;
              fVar31 = pfVar16[1] - (float)auStack_c4._4_4_;
              fVar32 = pfVar18[1] - fStack_bc;
              auVar34 = local_b8;
              fVar39 = (float)auStack_b4._4_4_;
              fVar40 = fStack_ac;
              auVar41 = local_c8;
              fVar43 = (float)auStack_c4._4_4_;
              fVar44 = fStack_bc;
              auVar45 = local_d8;
              fVar47 = (float)auStack_d4._4_4_;
              fVar48 = fStack_cc;
              fVar49 = (float)local_b8 - (float)local_88;
              fVar50 = fVar36 - pfVar10[2];
              fVar51 = (float)auStack_b4._4_4_ - pfVar11[2];
              fVar52 = fStack_ac - pfVar17[2];
              fVar53 = (float)local_c8 - (float)local_98;
              fVar54 = fVar42 - pfVar10[1];
              fVar55 = (float)auStack_c4._4_4_ - pfVar11[1];
              fVar56 = fStack_bc - pfVar17[1];
              fVar57 = (float)local_d8 - (float)local_a8;
              fVar58 = fVar46 - *pfVar10;
              fVar59 = (float)auStack_d4._4_4_ - *pfVar11;
              fVar60 = fStack_cc - *pfVar17;
              goto LAB_00106712;
            }
          }
        }
        fVar25 = (float)local_58 - (float)local_b8;
        fVar26 = (float)auStack_54._0_4_ - (float)auStack_b4._0_4_;
        fVar27 = (float)auStack_54._4_4_ - (float)auStack_b4._4_4_;
        fVar28 = fStack_4c - fStack_ac;
        fVar33 = (float)local_78 - (float)local_d8;
        fVar35 = (float)auStack_74._0_4_ - (float)auStack_d4._0_4_;
        fVar37 = (float)auStack_74._4_4_ - (float)auStack_d4._4_4_;
        fVar38 = fStack_6c - fStack_cc;
        uVar19 = uVar22;
        fVar29 = (float)local_68 - (float)local_c8;
        fVar30 = (float)auStack_64._0_4_ - (float)auStack_c4._0_4_;
        fVar31 = (float)auStack_64._4_4_ - (float)auStack_c4._4_4_;
        fVar32 = fStack_5c - fStack_bc;
        auVar34 = local_b8;
        fVar36 = (float)auStack_b4._0_4_;
        fVar39 = (float)auStack_b4._4_4_;
        fVar40 = fStack_ac;
        auVar41 = local_c8;
        fVar42 = (float)auStack_c4._0_4_;
        fVar43 = (float)auStack_c4._4_4_;
        fVar44 = fStack_bc;
        auVar45 = local_d8;
        fVar46 = (float)auStack_d4._0_4_;
        fVar47 = (float)auStack_d4._4_4_;
        fVar48 = fStack_cc;
        fVar49 = (float)local_b8 - (float)local_88;
        fVar50 = (float)auStack_b4._0_4_ - (float)auStack_84._0_4_;
        fVar51 = (float)auStack_b4._4_4_ - (float)auStack_84._4_4_;
        fVar52 = fStack_ac - fStack_7c;
        fVar53 = (float)local_c8 - (float)local_98;
        fVar54 = (float)auStack_c4._0_4_ - (float)auStack_94._0_4_;
        fVar55 = (float)auStack_c4._4_4_ - (float)auStack_94._4_4_;
        fVar56 = fStack_bc - fStack_8c;
        fVar57 = (float)local_d8 - (float)local_a8;
        fVar58 = (float)auStack_d4._0_4_ - (float)auStack_a4._0_4_;
        fVar59 = (float)auStack_d4._4_4_ - (float)auStack_a4._4_4_;
        fVar60 = fStack_cc - fStack_9c;
      }
      else {
        fVar33 = 0.0;
        fVar35 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        auVar34 = (undefined1  [4])0x0;
        fVar36 = 0.0;
        fVar29 = fVar25;
        fVar30 = fVar26;
        fVar31 = fVar27;
        fVar32 = fVar28;
        fVar39 = fVar27;
        fVar40 = fVar28;
        auVar41 = auVar34;
        fVar42 = fVar36;
        fVar43 = fVar27;
        fVar44 = fVar28;
        auVar45 = auVar34;
        fVar46 = fVar36;
        fVar47 = fVar27;
        fVar48 = fVar28;
        fVar49 = (float)auVar34;
        fVar50 = fVar36;
        fVar51 = fVar27;
        fVar52 = fVar28;
        fVar53 = (float)auVar34;
        fVar54 = fVar26;
        fVar55 = fVar27;
        fVar56 = fVar28;
        fVar57 = (float)auVar34;
        fVar58 = fVar26;
        fVar59 = fVar27;
        fVar60 = fVar28;
      }
LAB_00106712:
      *pfVar8 = (float)auVar45;
      pfVar8[1] = fVar46;
      pfVar8[2] = fVar47;
      pfVar8[3] = fVar48;
      pfVar10 = pfVar8 + 0x2c;
      pfVar8[4] = (float)auVar41;
      pfVar8[5] = fVar42;
      pfVar8[6] = fVar43;
      pfVar8[7] = fVar44;
      pfVar8[8] = (float)auVar34;
      pfVar8[9] = fVar36;
      pfVar8[10] = fVar39;
      pfVar8[0xb] = fVar40;
      pfVar8[0xc] = fVar57;
      pfVar8[0xd] = fVar58;
      pfVar8[0xe] = fVar59;
      pfVar8[0xf] = fVar60;
      pfVar8[0x10] = fVar53;
      pfVar8[0x11] = fVar54;
      pfVar8[0x12] = fVar55;
      pfVar8[0x13] = fVar56;
      pfVar8[0x14] = fVar49;
      pfVar8[0x15] = fVar50;
      pfVar8[0x16] = fVar51;
      pfVar8[0x17] = fVar52;
      pfVar8[0x18] = fVar33;
      pfVar8[0x19] = fVar35;
      pfVar8[0x1a] = fVar37;
      pfVar8[0x1b] = fVar38;
      pfVar8[0x1c] = fVar29;
      pfVar8[0x1d] = fVar30;
      pfVar8[0x1e] = fVar31;
      pfVar8[0x1f] = fVar32;
      pfVar8[0x20] = fVar25;
      pfVar8[0x21] = fVar26;
      pfVar8[0x22] = fVar27;
      pfVar8[0x23] = fVar28;
      pfVar8[0x24] = local_f8;
      pfVar8[0x25] = fStack_f4;
      pfVar8[0x26] = fStack_f0;
      pfVar8[0x27] = fStack_ec;
      pfVar8[0x28] = local_e8;
      pfVar8[0x29] = fStack_e4;
      pfVar8[0x2a] = fStack_e0;
      pfVar8[0x2b] = fStack_dc;
      pfVar8 = pfVar10;
    } while (pfVar24 != pfVar10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



/* embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderT<embree::sse2::CreateLeaf<4,
   embree::TriangleMi<4> > >::createLeaf(embree::PrimRef const*, embree::range<unsigned long>
   const&, embree::FastAllocator::CachedAllocator const&) */

ulong __thiscall
embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderT<embree::sse2::CreateLeaf<4,embree::TriangleMi<4>>>
::createLeaf(BVHNBuilderT<embree::sse2::CreateLeaf<4,embree::TriangleMi<4>>> *this,PrimRef *param_1,
            range *param_2,CachedAllocator *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  FastAllocator *this_00;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long in_FS_OFFSET;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  long local_40;
  
  uVar14 = *(ulong *)param_2;
  puVar4 = *(ulong **)(param_3 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = *(FastAllocator **)param_3;
  uVar16 = *puVar4;
  uVar17 = (*(long *)(param_2 + 8) + 3) - uVar14;
  uVar18 = uVar17 & 0xfffffffffffffffc;
  uVar17 = uVar17 >> 2;
  lVar3 = uVar18 + uVar17;
  uVar15 = lVar3 * 0x10;
  local_a8 = uVar15;
  if (this_00 != *(FastAllocator **)(uVar16 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(uVar16 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(uVar16 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(uVar16 + 0xa8) + *(long *)(uVar16 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar16 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(uVar16 + 0x98) + *(long *)(uVar16 + 0x58)) -
                           *(long *)(uVar16 + 0x50)) - *(long *)(uVar16 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar16 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(uVar16 + 0xb0) + *(long *)(uVar16 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(uVar16 + 0x48) = 0;
    *(undefined8 *)(uVar16 + 0x58) = 0;
    *(undefined8 *)(uVar16 + 0x50) = 0;
    *(undefined8 *)(uVar16 + 0x68) = 0;
    *(undefined8 *)(uVar16 + 0x70) = 0;
    *(undefined8 *)(uVar16 + 0x60) = 0;
    if (this_00 == (FastAllocator *)0x0) {
      *(undefined8 *)(uVar16 + 0x88) = 0;
      uVar13 = 0;
      *(undefined8 *)(uVar16 + 0x98) = 0;
      *(undefined8 *)(uVar16 + 0x90) = 0;
      *(undefined8 *)(uVar16 + 0xa8) = 0;
      *(undefined8 *)(uVar16 + 0xb0) = 0;
    }
    else {
      uVar13 = *(undefined8 *)(this_00 + 0x10);
      *(undefined8 *)(uVar16 + 0x88) = 0;
      *(undefined8 *)(uVar16 + 0x98) = 0;
      *(undefined8 *)(uVar16 + 0x60) = uVar13;
      *(undefined8 *)(uVar16 + 0x90) = 0;
      *(undefined8 *)(uVar16 + 0xa8) = 0;
      *(undefined8 *)(uVar16 + 0xb0) = 0;
      *(undefined8 *)(uVar16 + 0xa0) = 0;
      uVar13 = *(undefined8 *)(this_00 + 0x10);
    }
    *(undefined8 *)(uVar16 + 0xa0) = uVar13;
    LOCK();
    *(FastAllocator **)(uVar16 + 8) = this_00;
    UNLOCK();
    local_a0 = uVar16;
    embree::MutexSys::lock();
    puVar5 = *(ulong **)(this_00 + 0x138);
    if (puVar5 == *(ulong **)(this_00 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(this_00 + 0x130),puVar5,&local_a0);
    }
    else {
      *puVar5 = uVar16;
      *(long *)(this_00 + 0x138) = *(long *)(this_00 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar6 = puVar4[2];
  puVar4[5] = puVar4[5] + uVar15;
  uVar12 = (ulong)(-(int)uVar6 & 0xf);
  lVar2 = uVar6 + uVar12;
  uVar16 = uVar15 + lVar2;
  puVar4[2] = uVar16;
  if (puVar4[3] < uVar16) {
    puVar4[2] = uVar6;
    if (puVar4[4] < (uVar18 + uVar17) * 0x40) {
      puVar8 = (undefined8 *)FastAllocator::malloc(this_00,&local_a8,0x40,false);
    }
    else {
      local_a0 = puVar4[4];
      puVar8 = (undefined8 *)FastAllocator::malloc(this_00,&local_a0,0x40,true);
      puVar4[1] = (ulong)puVar8;
      puVar4[6] = (puVar4[3] + puVar4[6]) - puVar4[2];
      puVar4[2] = uVar15;
      puVar4[3] = local_a0;
      if (local_a0 < uVar15) {
        local_a0 = puVar4[4];
        puVar4[2] = 0;
        puVar8 = (undefined8 *)FastAllocator::malloc(this_00,&local_a0,0x40,false);
        puVar4[1] = (ulong)puVar8;
        puVar4[6] = (puVar4[3] + puVar4[6]) - puVar4[2];
        puVar4[2] = uVar15;
        puVar4[3] = local_a0;
        if (local_a0 < uVar15) {
          puVar4[2] = 0;
          puVar8 = (undefined8 *)0x0;
        }
      }
    }
  }
  else {
    puVar4[6] = puVar4[6] + uVar12;
    puVar8 = (undefined8 *)(lVar2 + puVar4[1]);
  }
  uVar16 = 7;
  if (uVar17 < 8) {
    uVar16 = uVar17;
  }
  puVar10 = puVar8;
  if (uVar17 != 0) {
    do {
      uVar17 = *(ulong *)(param_2 + 8);
      local_98._0_4_ = 0;
      local_88._0_4_ = 0;
      local_78._0_4_ = 0;
      local_68 = 0xffffffff;
      local_58 = 0xffffffff;
      uStack_54 = 0xffffffff;
      uStack_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      uVar15 = uVar14;
      if (uVar14 < uVar17) {
        lVar2 = *(long *)(*(long *)(*(long *)(this + 8) + 0x68) + 0x1e0);
        lVar19 = uVar14 * 0x20;
        local_68 = *(uint *)(param_1 + lVar19 + 0xc);
        local_58 = *(uint *)(param_1 + lVar19 + 0x1c);
        lVar7 = *(long *)(lVar2 + (ulong)local_68 * 8);
        piVar20 = (int *)((ulong)local_58 * *(long *)(lVar7 + 0x60) + *(long *)(lVar7 + 0x58));
        uVar11 = (uint)(*(ulong *)(lVar7 + 0x90) >> 2) & 0x3fffffff;
        uStack_90._4_4_ = *piVar20 * uVar11;
        local_88._0_4_ = piVar20[1] * uVar11;
        local_78._0_4_ = uVar11 * piVar20[2];
        uVar15 = uVar14 + 1;
        local_98._0_4_ = uStack_90._4_4_;
        if (uVar17 <= uVar14 + 1) goto LAB_00106e35;
        uStack_64 = *(uint *)(param_1 + lVar19 + 0x2c);
        uStack_54 = *(uint *)(param_1 + lVar19 + 0x3c);
        lVar7 = *(long *)(lVar2 + (ulong)uStack_64 * 8);
        piVar20 = (int *)((ulong)uStack_54 * *(long *)(lVar7 + 0x60) + *(long *)(lVar7 + 0x58));
        uVar11 = (uint)(*(ulong *)(lVar7 + 0x90) >> 2) & 0x3fffffff;
        local_98 = CONCAT44(*piVar20 * uVar11,uStack_90._4_4_);
        uVar15 = uVar14 + 2;
        local_88 = CONCAT44(piVar20[1] * uVar11,(int)local_88);
        local_78 = CONCAT44(uVar11 * piVar20[2],(int)local_78);
        if (uVar17 <= uVar15) goto LAB_00106e46;
        uStack_60 = *(uint *)(param_1 + lVar19 + 0x4c);
        uStack_50 = *(uint *)(param_1 + lVar19 + 0x5c);
        lVar7 = *(long *)(lVar2 + (ulong)uStack_60 * 8);
        piVar20 = (int *)((ulong)uStack_50 * *(long *)(lVar7 + 0x60) + *(long *)(lVar7 + 0x58));
        uVar11 = (uint)(*(ulong *)(lVar7 + 0x90) >> 2) & 0x3fffffff;
        uStack_90._0_4_ = *piVar20 * uVar11;
        uVar15 = uVar14 + 3;
        uStack_80._0_4_ = piVar20[1] * uVar11;
        uStack_70._0_4_ = uVar11 * piVar20[2];
        if (uVar17 <= uVar15) goto LAB_00106e57;
        uVar15 = uVar14 + 4;
        uStack_5c = *(uint *)(param_1 + lVar19 + 0x6c);
        uStack_4c = *(uint *)(param_1 + lVar19 + 0x7c);
        lVar2 = *(long *)(lVar2 + (ulong)uStack_5c * 8);
        piVar20 = (int *)((ulong)uStack_4c * *(long *)(lVar2 + 0x60) + *(long *)(lVar2 + 0x58));
        uVar11 = (uint)(*(ulong *)(lVar2 + 0x90) >> 2) & 0x3fffffff;
        uStack_90._4_4_ = *piVar20 * uVar11;
        uStack_80._4_4_ = piVar20[1] * uVar11;
        uStack_70._4_4_ = uVar11 * piVar20[2];
      }
      else {
LAB_00106e35:
        local_98 = CONCAT44((int)local_98,(int)local_98);
        local_88 = CONCAT44((int)local_98,(int)local_88);
        local_78 = CONCAT44((int)local_98,(int)local_78);
        uStack_64 = local_68;
        uStack_90._4_4_ = (int)local_98;
LAB_00106e46:
        uStack_90._0_4_ = uStack_90._4_4_;
        uStack_80._0_4_ = uStack_90._4_4_;
        uStack_70._0_4_ = uStack_90._4_4_;
        uStack_60 = local_68;
LAB_00106e57:
        uStack_80._4_4_ = uStack_90._4_4_;
        uStack_70._4_4_ = uStack_90._4_4_;
        uStack_5c = local_68;
      }
      *(uint *)(puVar10 + 8) = local_58;
      *(uint *)((long)puVar10 + 0x44) = uStack_54;
      *(uint *)(puVar10 + 9) = uStack_50;
      *(uint *)((long)puVar10 + 0x4c) = uStack_4c;
      puVar9 = puVar10 + 10;
      *puVar10 = local_98;
      puVar10[1] = uStack_90;
      puVar10[2] = local_88;
      puVar10[3] = uStack_80;
      puVar10[4] = local_78;
      puVar10[5] = uStack_70;
      puVar10[6] = CONCAT44(uStack_64,local_68);
      puVar10[7] = CONCAT44(uStack_5c,uStack_60);
      puVar10 = puVar9;
      uVar14 = uVar15;
    } while (puVar8 + lVar3 * 2 != puVar9);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16 + 8 | (ulong)puVar8;
}



/* embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderT<embree::sse2::CreateLeafQuantized<4,
   embree::TriangleMi<4> > >::createLeaf(embree::PrimRef const*, embree::range<unsigned long>
   const&, embree::FastAllocator::CachedAllocator const&) */

ulong __thiscall
embree::sse2::BVHNBuilderQuantizedVirtual<4>::
BVHNBuilderT<embree::sse2::CreateLeafQuantized<4,embree::TriangleMi<4>>>::createLeaf
          (BVHNBuilderT<embree::sse2::CreateLeafQuantized<4,embree::TriangleMi<4>>> *this,
          PrimRef *param_1,range *param_2,CachedAllocator *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  FastAllocator *this_00;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long in_FS_OFFSET;
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  long local_40;
  
  uVar14 = *(ulong *)param_2;
  puVar4 = *(ulong **)(param_3 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = *(FastAllocator **)param_3;
  uVar16 = *puVar4;
  uVar17 = (*(long *)(param_2 + 8) + 3) - uVar14;
  uVar18 = uVar17 & 0xfffffffffffffffc;
  uVar17 = uVar17 >> 2;
  lVar3 = uVar18 + uVar17;
  uVar15 = lVar3 * 0x10;
  local_a8 = uVar15;
  if (this_00 != *(FastAllocator **)(uVar16 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(uVar16 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(uVar16 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(uVar16 + 0xa8) + *(long *)(uVar16 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar16 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(uVar16 + 0x98) + *(long *)(uVar16 + 0x58)) -
                           *(long *)(uVar16 + 0x50)) - *(long *)(uVar16 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar16 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(uVar16 + 0xb0) + *(long *)(uVar16 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(uVar16 + 0x48) = 0;
    *(undefined8 *)(uVar16 + 0x58) = 0;
    *(undefined8 *)(uVar16 + 0x50) = 0;
    *(undefined8 *)(uVar16 + 0x68) = 0;
    *(undefined8 *)(uVar16 + 0x70) = 0;
    *(undefined8 *)(uVar16 + 0x60) = 0;
    if (this_00 == (FastAllocator *)0x0) {
      *(undefined8 *)(uVar16 + 0x88) = 0;
      uVar13 = 0;
      *(undefined8 *)(uVar16 + 0x98) = 0;
      *(undefined8 *)(uVar16 + 0x90) = 0;
      *(undefined8 *)(uVar16 + 0xa8) = 0;
      *(undefined8 *)(uVar16 + 0xb0) = 0;
    }
    else {
      uVar13 = *(undefined8 *)(this_00 + 0x10);
      *(undefined8 *)(uVar16 + 0x88) = 0;
      *(undefined8 *)(uVar16 + 0x98) = 0;
      *(undefined8 *)(uVar16 + 0x60) = uVar13;
      *(undefined8 *)(uVar16 + 0x90) = 0;
      *(undefined8 *)(uVar16 + 0xa8) = 0;
      *(undefined8 *)(uVar16 + 0xb0) = 0;
      *(undefined8 *)(uVar16 + 0xa0) = 0;
      uVar13 = *(undefined8 *)(this_00 + 0x10);
    }
    *(undefined8 *)(uVar16 + 0xa0) = uVar13;
    LOCK();
    *(FastAllocator **)(uVar16 + 8) = this_00;
    UNLOCK();
    local_a0 = uVar16;
    embree::MutexSys::lock();
    puVar5 = *(ulong **)(this_00 + 0x138);
    if (puVar5 == *(ulong **)(this_00 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(this_00 + 0x130),puVar5,&local_a0);
    }
    else {
      *puVar5 = uVar16;
      *(long *)(this_00 + 0x138) = *(long *)(this_00 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar6 = puVar4[2];
  puVar4[5] = puVar4[5] + uVar15;
  uVar12 = (ulong)(-(int)uVar6 & 0xf);
  lVar2 = uVar6 + uVar12;
  uVar16 = uVar15 + lVar2;
  puVar4[2] = uVar16;
  if (puVar4[3] < uVar16) {
    puVar4[2] = uVar6;
    if (puVar4[4] < (uVar18 + uVar17) * 0x40) {
      puVar8 = (undefined8 *)FastAllocator::malloc(this_00,&local_a8,0x40,false);
    }
    else {
      local_a0 = puVar4[4];
      puVar8 = (undefined8 *)FastAllocator::malloc(this_00,&local_a0,0x40,true);
      puVar4[1] = (ulong)puVar8;
      puVar4[6] = (puVar4[3] + puVar4[6]) - puVar4[2];
      puVar4[2] = uVar15;
      puVar4[3] = local_a0;
      if (local_a0 < uVar15) {
        local_a0 = puVar4[4];
        puVar4[2] = 0;
        puVar8 = (undefined8 *)FastAllocator::malloc(this_00,&local_a0,0x40,false);
        puVar4[1] = (ulong)puVar8;
        puVar4[6] = (puVar4[3] + puVar4[6]) - puVar4[2];
        puVar4[2] = uVar15;
        puVar4[3] = local_a0;
        if (local_a0 < uVar15) {
          puVar4[2] = 0;
          puVar8 = (undefined8 *)0x0;
        }
      }
    }
  }
  else {
    puVar4[6] = puVar4[6] + uVar12;
    puVar8 = (undefined8 *)(lVar2 + puVar4[1]);
  }
  uVar16 = 7;
  if (uVar17 < 8) {
    uVar16 = uVar17;
  }
  puVar10 = puVar8;
  if (uVar17 != 0) {
    do {
      uVar17 = *(ulong *)(param_2 + 8);
      local_98._0_4_ = 0;
      local_88._0_4_ = 0;
      local_78._0_4_ = 0;
      local_68 = 0xffffffff;
      local_58 = 0xffffffff;
      uStack_54 = 0xffffffff;
      uStack_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      uVar15 = uVar14;
      if (uVar14 < uVar17) {
        lVar2 = *(long *)(*(long *)(*(long *)(this + 8) + 0x68) + 0x1e0);
        lVar19 = uVar14 * 0x20;
        local_68 = *(uint *)(param_1 + lVar19 + 0xc);
        local_58 = *(uint *)(param_1 + lVar19 + 0x1c);
        lVar7 = *(long *)(lVar2 + (ulong)local_68 * 8);
        piVar20 = (int *)((ulong)local_58 * *(long *)(lVar7 + 0x60) + *(long *)(lVar7 + 0x58));
        uVar11 = (uint)(*(ulong *)(lVar7 + 0x90) >> 2) & 0x3fffffff;
        uStack_90._4_4_ = *piVar20 * uVar11;
        local_88._0_4_ = piVar20[1] * uVar11;
        local_78._0_4_ = uVar11 * piVar20[2];
        uVar15 = uVar14 + 1;
        local_98._0_4_ = uStack_90._4_4_;
        if (uVar17 <= uVar14 + 1) goto LAB_001074c5;
        uStack_64 = *(uint *)(param_1 + lVar19 + 0x2c);
        uStack_54 = *(uint *)(param_1 + lVar19 + 0x3c);
        lVar7 = *(long *)(lVar2 + (ulong)uStack_64 * 8);
        piVar20 = (int *)((ulong)uStack_54 * *(long *)(lVar7 + 0x60) + *(long *)(lVar7 + 0x58));
        uVar11 = (uint)(*(ulong *)(lVar7 + 0x90) >> 2) & 0x3fffffff;
        local_98 = CONCAT44(*piVar20 * uVar11,uStack_90._4_4_);
        uVar15 = uVar14 + 2;
        local_88 = CONCAT44(piVar20[1] * uVar11,(int)local_88);
        local_78 = CONCAT44(uVar11 * piVar20[2],(int)local_78);
        if (uVar17 <= uVar15) goto LAB_001074d6;
        uStack_60 = *(uint *)(param_1 + lVar19 + 0x4c);
        uStack_50 = *(uint *)(param_1 + lVar19 + 0x5c);
        lVar7 = *(long *)(lVar2 + (ulong)uStack_60 * 8);
        piVar20 = (int *)((ulong)uStack_50 * *(long *)(lVar7 + 0x60) + *(long *)(lVar7 + 0x58));
        uVar11 = (uint)(*(ulong *)(lVar7 + 0x90) >> 2) & 0x3fffffff;
        uStack_90._0_4_ = *piVar20 * uVar11;
        uVar15 = uVar14 + 3;
        uStack_80._0_4_ = piVar20[1] * uVar11;
        uStack_70._0_4_ = uVar11 * piVar20[2];
        if (uVar17 <= uVar15) goto LAB_001074e7;
        uVar15 = uVar14 + 4;
        uStack_5c = *(uint *)(param_1 + lVar19 + 0x6c);
        uStack_4c = *(uint *)(param_1 + lVar19 + 0x7c);
        lVar2 = *(long *)(lVar2 + (ulong)uStack_5c * 8);
        piVar20 = (int *)((ulong)uStack_4c * *(long *)(lVar2 + 0x60) + *(long *)(lVar2 + 0x58));
        uVar11 = (uint)(*(ulong *)(lVar2 + 0x90) >> 2) & 0x3fffffff;
        uStack_90._4_4_ = *piVar20 * uVar11;
        uStack_80._4_4_ = piVar20[1] * uVar11;
        uStack_70._4_4_ = uVar11 * piVar20[2];
      }
      else {
LAB_001074c5:
        local_98 = CONCAT44((int)local_98,(int)local_98);
        local_88 = CONCAT44((int)local_98,(int)local_88);
        local_78 = CONCAT44((int)local_98,(int)local_78);
        uStack_64 = local_68;
        uStack_90._4_4_ = (int)local_98;
LAB_001074d6:
        uStack_90._0_4_ = uStack_90._4_4_;
        uStack_80._0_4_ = uStack_90._4_4_;
        uStack_70._0_4_ = uStack_90._4_4_;
        uStack_60 = local_68;
LAB_001074e7:
        uStack_80._4_4_ = uStack_90._4_4_;
        uStack_70._4_4_ = uStack_90._4_4_;
        uStack_5c = local_68;
      }
      *(uint *)(puVar10 + 8) = local_58;
      *(uint *)((long)puVar10 + 0x44) = uStack_54;
      *(uint *)(puVar10 + 9) = uStack_50;
      *(uint *)((long)puVar10 + 0x4c) = uStack_4c;
      puVar9 = puVar10 + 10;
      *puVar10 = local_98;
      puVar10[1] = uStack_90;
      puVar10[2] = local_88;
      puVar10[3] = uStack_80;
      puVar10[4] = local_78;
      puVar10[5] = uStack_70;
      puVar10[6] = CONCAT44(uStack_64,local_68);
      puVar10[7] = CONCAT44(uStack_5c,uStack_60);
      puVar10 = puVar9;
      uVar14 = uVar15;
    } while (puVar8 + lVar3 * 2 != puVar9);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16 + 8 | (ulong)puVar8;
}



/* embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderT<embree::sse2::CreateLeaf<4,
   embree::TriangleMv<4> > >::createLeaf(embree::PrimRef const*, embree::range<unsigned long>
   const&, embree::FastAllocator::CachedAllocator const&) */

ulong __thiscall
embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderT<embree::sse2::CreateLeaf<4,embree::TriangleMv<4>>>
::createLeaf(BVHNBuilderT<embree::sse2::CreateLeaf<4,embree::TriangleMv<4>>> *this,PrimRef *param_1,
            range *param_2,CachedAllocator *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  FastAllocator *this_00;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 *puVar27;
  long in_FS_OFFSET;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [8];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  ulong local_108;
  ulong local_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 local_d8 [8];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [8];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  long local_40;
  
  uVar22 = *(ulong *)param_2;
  puVar4 = *(ulong **)(param_3 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = *(FastAllocator **)param_3;
  uVar14 = *puVar4;
  uVar24 = (*(long *)(param_2 + 8) + 3) - uVar22;
  uVar25 = uVar24 & 0xfffffffffffffffc;
  uVar24 = uVar24 >> 2;
  lVar2 = uVar25 * 2 + uVar24 * 3;
  uVar26 = lVar2 * 0x10;
  local_108 = uVar26;
  if (this_00 != *(FastAllocator **)(uVar14 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(uVar14 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(uVar14 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(uVar14 + 0xa8) + *(long *)(uVar14 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar14 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(uVar14 + 0x98) + *(long *)(uVar14 + 0x58)) -
                           *(long *)(uVar14 + 0x50)) - *(long *)(uVar14 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar14 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(uVar14 + 0xb0) + *(long *)(uVar14 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(uVar14 + 0x48) = 0;
    *(undefined8 *)(uVar14 + 0x58) = 0;
    *(undefined8 *)(uVar14 + 0x50) = 0;
    *(undefined8 *)(uVar14 + 0x68) = 0;
    *(undefined8 *)(uVar14 + 0x70) = 0;
    *(undefined8 *)(uVar14 + 0x60) = 0;
    if (this_00 == (FastAllocator *)0x0) {
      *(undefined8 *)(uVar14 + 0x88) = 0;
      uVar9 = 0;
      *(undefined8 *)(uVar14 + 0x98) = 0;
      *(undefined8 *)(uVar14 + 0x90) = 0;
      *(undefined8 *)(uVar14 + 0xa8) = 0;
      *(undefined8 *)(uVar14 + 0xb0) = 0;
    }
    else {
      uVar9 = *(undefined8 *)(this_00 + 0x10);
      *(undefined8 *)(uVar14 + 0x88) = 0;
      *(undefined8 *)(uVar14 + 0x98) = 0;
      *(undefined8 *)(uVar14 + 0x60) = uVar9;
      *(undefined8 *)(uVar14 + 0x90) = 0;
      *(undefined8 *)(uVar14 + 0xa8) = 0;
      *(undefined8 *)(uVar14 + 0xb0) = 0;
      *(undefined8 *)(uVar14 + 0xa0) = 0;
      uVar9 = *(undefined8 *)(this_00 + 0x10);
    }
    *(undefined8 *)(uVar14 + 0xa0) = uVar9;
    LOCK();
    *(FastAllocator **)(uVar14 + 8) = this_00;
    UNLOCK();
    local_100 = uVar14;
    embree::MutexSys::lock();
    puVar5 = *(ulong **)(this_00 + 0x138);
    if (puVar5 == *(ulong **)(this_00 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(this_00 + 0x130),puVar5,&local_100);
    }
    else {
      *puVar5 = uVar14;
      *(long *)(this_00 + 0x138) = *(long *)(this_00 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar6 = puVar4[2];
  puVar4[5] = puVar4[5] + uVar26;
  uVar13 = (ulong)(-(int)uVar6 & 0xf);
  lVar3 = uVar6 + uVar13;
  uVar14 = uVar26 + lVar3;
  puVar4[2] = uVar14;
  if (puVar4[3] < uVar14) {
    puVar4[2] = uVar6;
    if (puVar4[4] < (uVar25 * 2 + uVar24 * 3) * 0x40) {
      puVar8 = (undefined4 *)FastAllocator::malloc(this_00,&local_108,0x40,false);
    }
    else {
      local_100 = puVar4[4];
      puVar8 = (undefined4 *)FastAllocator::malloc(this_00,&local_100,0x40,true);
      puVar4[1] = (ulong)puVar8;
      uVar14 = puVar4[2];
      puVar4[2] = uVar26;
      puVar4[6] = (puVar4[3] + puVar4[6]) - uVar14;
      puVar4[3] = local_100;
      if (local_100 < uVar26) {
        puVar4[2] = 0;
        local_100 = puVar4[4];
        puVar8 = (undefined4 *)FastAllocator::malloc(this_00,&local_100,0x40,false);
        puVar4[1] = (ulong)puVar8;
        uVar14 = puVar4[2];
        puVar4[2] = uVar26;
        puVar4[6] = (puVar4[3] + puVar4[6]) - uVar14;
        puVar4[3] = local_100;
        if (local_100 < uVar26) {
          puVar4[2] = 0;
          puVar8 = (undefined4 *)0x0;
        }
      }
    }
  }
  else {
    puVar4[6] = puVar4[6] + uVar13;
    puVar8 = (undefined4 *)(lVar3 + puVar4[1]);
  }
  uVar14 = 7;
  if (uVar24 < 8) {
    uVar14 = uVar24;
  }
  puVar27 = puVar8 + lVar2 * 4;
  uVar14 = uVar14 + 8 | (ulong)puVar8;
  if (uVar24 != 0) {
    do {
      uVar24 = *(ulong *)(param_2 + 8);
      local_f8 = 0xffffffff;
      uStack_f4 = 0xffffffff;
      uStack_f0 = 0xffffffff;
      uStack_ec = 0xffffffff;
      local_e8 = 0xffffffff;
      uStack_e4 = 0xffffffff;
      uStack_e0 = 0xffffffff;
      uStack_dc = 0xffffffff;
      _local_d8 = (undefined1  [16])0x0;
      _local_c8 = (undefined1  [16])0x0;
      _local_b8 = (undefined1  [16])0x0;
      _local_a8 = (undefined1  [16])0x0;
      _local_98 = (undefined1  [16])0x0;
      _local_88 = (undefined1  [16])0x0;
      _local_78 = (undefined1  [16])0x0;
      _local_68 = (undefined1  [16])0x0;
      _local_58 = (undefined1  [16])0x0;
      if (uVar22 < uVar24) {
        lVar2 = *(long *)(*(long *)(*(long *)(this + 8) + 0x68) + 0x1e0);
        lVar23 = uVar22 * 0x20;
        local_f8 = *(uint *)(param_1 + lVar23 + 0xc);
        local_e8 = *(uint *)(param_1 + lVar23 + 0x1c);
        lVar3 = *(long *)(lVar2 + (ulong)local_f8 * 8);
        puVar15 = (uint *)((ulong)local_e8 * *(long *)(lVar3 + 0x60) + *(long *)(lVar3 + 0x58));
        lVar7 = *(long *)(lVar3 + 0x88);
        lVar3 = *(long *)(lVar3 + 0x90);
        puVar10 = (undefined4 *)((ulong)*puVar15 * lVar3 + lVar7);
        local_b8._0_4_ = puVar10[2];
        local_c8._0_4_ = puVar10[1];
        local_d8._0_4_ = *puVar10;
        stack0xffffffffffffff3c = SUB1612((undefined1  [16])0x0,4);
        stack0xffffffffffffff2c = SUB1612((undefined1  [16])0x0,4);
        stack0xffffffffffffff4c = SUB1612((undefined1  [16])0x0,4);
        puVar10 = (undefined4 *)((ulong)puVar15[1] * lVar3 + lVar7);
        puVar16 = (undefined4 *)((ulong)puVar15[2] * lVar3 + lVar7);
        local_88._0_4_ = puVar10[2];
        local_98._0_4_ = puVar10[1];
        local_68._0_4_ = puVar16[1];
        local_78._0_4_ = *puVar16;
        local_a8._0_4_ = *puVar10;
        uVar25 = uVar22 + 1;
        stack0xffffffffffffff6c = SUB1612((undefined1  [16])0x0,4);
        stack0xffffffffffffff7c = SUB1612((undefined1  [16])0x0,4);
        stack0xffffffffffffff5c = SUB1612((undefined1  [16])0x0,4);
        stack0xffffffffffffff8c = SUB1612((undefined1  [16])0x0,4);
        stack0xffffffffffffff9c = SUB1612((undefined1  [16])0x0,4);
        stack0xffffffffffffffac = SUB1612((undefined1  [16])0x0,4);
        local_58._0_4_ = puVar16[2];
        if (uVar25 < uVar24) {
          uStack_f4 = *(uint *)(param_1 + lVar23 + 0x2c);
          uStack_e4 = *(uint *)(param_1 + lVar23 + 0x3c);
          lVar3 = *(long *)(lVar2 + (ulong)uStack_f4 * 8);
          puVar15 = (uint *)((ulong)uStack_e4 * *(long *)(lVar3 + 0x60) + *(long *)(lVar3 + 0x58));
          lVar7 = *(long *)(lVar3 + 0x88);
          lVar3 = *(long *)(lVar3 + 0x90);
          puVar10 = (undefined4 *)((ulong)*puVar15 * lVar3 + lVar7);
          local_c8._4_4_ = puVar10[1];
          _uStack_c0 = 0;
          local_d8._4_4_ = *puVar10;
          _uStack_d0 = 0;
          local_b8._4_4_ = puVar10[2];
          _uStack_b0 = 0;
          puVar11 = (undefined4 *)((ulong)puVar15[1] * lVar3 + lVar7);
          puVar17 = (undefined4 *)((ulong)puVar15[2] * lVar3 + lVar7);
          uVar25 = uVar22 + 2;
          local_98._4_4_ = puVar11[1];
          _uStack_90 = 0;
          local_88._4_4_ = puVar11[2];
          _uStack_80 = 0;
          local_a8._4_4_ = *puVar11;
          _uStack_a0 = 0;
          local_78._4_4_ = *puVar17;
          _uStack_70 = 0;
          local_68._4_4_ = puVar17[1];
          _uStack_60 = 0;
          local_58._4_4_ = puVar17[2];
          uStack_50 = 0;
          if (uVar25 < uVar24) {
            uStack_f0 = *(uint *)(param_1 + lVar23 + 0x4c);
            uStack_e0 = *(uint *)(param_1 + lVar23 + 0x5c);
            lVar3 = *(long *)(lVar2 + (ulong)uStack_f0 * 8);
            puVar15 = (uint *)((ulong)uStack_e0 * *(long *)(lVar3 + 0x60) + *(long *)(lVar3 + 0x58))
            ;
            lVar7 = *(long *)(lVar3 + 0x88);
            lVar3 = *(long *)(lVar3 + 0x90);
            puVar16 = (undefined4 *)((ulong)*puVar15 * lVar3 + lVar7);
            uStack_c0 = puVar16[1];
            uStack_bc = 0;
            uStack_d0 = *puVar16;
            uStack_cc = 0;
            uStack_b0 = puVar16[2];
            uStack_ac = 0;
            puVar12 = (undefined4 *)((ulong)puVar15[1] * lVar3 + lVar7);
            puVar18 = (undefined4 *)((ulong)puVar15[2] * lVar3 + lVar7);
            uVar25 = uVar22 + 3;
            uStack_90 = puVar12[1];
            uStack_8c = 0;
            uStack_80 = puVar12[2];
            uStack_7c = 0;
            uStack_a0 = *puVar12;
            uStack_9c = 0;
            uStack_70 = *puVar18;
            uStack_6c = 0;
            uStack_60 = puVar18[1];
            uStack_5c = 0;
            uStack_50._0_4_ = puVar18[2];
            uStack_50._4_4_ = 0;
            if (uVar25 < uVar24) {
              uStack_ec = *(uint *)(param_1 + lVar23 + 0x6c);
              uStack_dc = *(uint *)(param_1 + lVar23 + 0x7c);
              lVar2 = *(long *)(lVar2 + (ulong)uStack_ec * 8);
              puVar15 = (uint *)((ulong)uStack_dc * *(long *)(lVar2 + 0x60) +
                                *(long *)(lVar2 + 0x58));
              lVar3 = *(long *)(lVar2 + 0x88);
              lVar2 = *(long *)(lVar2 + 0x90);
              puVar19 = (undefined4 *)((ulong)*puVar15 * lVar2 + lVar3);
              uStack_bc = puVar19[1];
              uStack_cc = *puVar19;
              uStack_ac = puVar19[2];
              puVar20 = (undefined4 *)((ulong)puVar15[1] * lVar2 + lVar3);
              uStack_8c = puVar20[1];
              uStack_9c = *puVar20;
              uStack_7c = puVar20[2];
              puVar21 = (undefined4 *)((ulong)puVar15[2] * lVar2 + lVar3);
              uStack_5c = puVar21[1];
              uStack_6c = *puVar21;
              uStack_50._4_4_ = puVar21[2];
              uVar22 = uVar22 + 4;
              uVar28 = local_68._0_4_;
              uVar31 = puVar17[1];
              uVar33 = puVar18[1];
              uVar34 = puVar21[1];
              uVar35 = local_78._0_4_;
              uVar36 = *puVar17;
              uVar37 = *puVar18;
              uVar38 = *puVar21;
              uVar29 = local_88._0_4_;
              uVar39 = puVar11[2];
              uVar40 = puVar12[2];
              uVar41 = puVar20[2];
              uVar42 = local_98._0_4_;
              uVar43 = puVar11[1];
              uVar44 = puVar12[1];
              uVar45 = puVar20[1];
              uVar46 = local_a8._0_4_;
              uVar32 = *puVar11;
              uVar47 = *puVar12;
              uVar48 = *puVar20;
              uVar49 = local_b8._0_4_;
              uVar50 = puVar10[2];
              uVar51 = puVar16[2];
              uVar52 = puVar19[2];
              uVar53 = local_c8._0_4_;
              uVar54 = puVar10[1];
              uVar55 = puVar16[1];
              uVar56 = puVar19[1];
              uVar57 = local_d8._0_4_;
              uVar58 = *puVar10;
              uVar59 = *puVar16;
              uVar60 = *puVar19;
              auVar30 = local_58;
              goto LAB_00107d8d;
            }
          }
        }
        uVar22 = uVar25;
        uVar28 = local_68._0_4_;
        uVar31 = local_68._4_4_;
        uVar33 = uStack_60;
        uVar34 = uStack_5c;
        uVar35 = local_78._0_4_;
        uVar36 = local_78._4_4_;
        uVar37 = uStack_70;
        uVar38 = uStack_6c;
        uVar29 = local_88._0_4_;
        uVar39 = local_88._4_4_;
        uVar40 = uStack_80;
        uVar41 = uStack_7c;
        uVar42 = local_98._0_4_;
        uVar43 = local_98._4_4_;
        uVar44 = uStack_90;
        uVar45 = uStack_8c;
        uVar46 = local_a8._0_4_;
        uVar32 = local_a8._4_4_;
        uVar47 = uStack_a0;
        uVar48 = uStack_9c;
        uVar49 = local_b8._0_4_;
        uVar50 = local_b8._4_4_;
        uVar51 = uStack_b0;
        uVar52 = uStack_ac;
        uVar53 = local_c8._0_4_;
        uVar54 = local_c8._4_4_;
        uVar55 = uStack_c0;
        uVar56 = uStack_bc;
        uVar57 = local_d8._0_4_;
        uVar58 = local_d8._4_4_;
        uVar59 = uStack_d0;
        uVar60 = uStack_cc;
        auVar30 = local_58;
      }
      else {
        auVar30 = (undefined1  [8])0x0;
        uStack_50 = 0;
        uVar28 = 0;
        uVar31 = 0;
        uVar33 = 0;
        uVar34 = 0;
        uVar29 = 0;
        uVar32 = 0;
        uVar35 = uVar28;
        uVar36 = uVar31;
        uVar37 = uVar33;
        uVar38 = uVar34;
        uVar39 = uVar31;
        uVar40 = uVar33;
        uVar41 = uVar34;
        uVar42 = uVar29;
        uVar43 = uVar31;
        uVar44 = uVar33;
        uVar45 = uVar34;
        uVar46 = uVar29;
        uVar47 = uVar33;
        uVar48 = uVar34;
        uVar49 = uVar29;
        uVar50 = uVar32;
        uVar51 = uVar33;
        uVar52 = uVar34;
        uVar53 = uVar29;
        uVar54 = uVar32;
        uVar55 = uVar33;
        uVar56 = uVar34;
        uVar57 = uVar29;
        uVar58 = uVar32;
        uVar59 = uVar33;
        uVar60 = uVar34;
      }
LAB_00107d8d:
      *puVar8 = uVar57;
      puVar8[1] = uVar58;
      puVar8[2] = uVar59;
      puVar8[3] = uVar60;
      puVar10 = puVar8 + 0x2c;
      puVar8[4] = uVar53;
      puVar8[5] = uVar54;
      puVar8[6] = uVar55;
      puVar8[7] = uVar56;
      puVar8[8] = uVar49;
      puVar8[9] = uVar50;
      puVar8[10] = uVar51;
      puVar8[0xb] = uVar52;
      puVar8[0xc] = uVar46;
      puVar8[0xd] = uVar32;
      puVar8[0xe] = uVar47;
      puVar8[0xf] = uVar48;
      puVar8[0x10] = uVar42;
      puVar8[0x11] = uVar43;
      puVar8[0x12] = uVar44;
      puVar8[0x13] = uVar45;
      puVar8[0x14] = uVar29;
      puVar8[0x15] = uVar39;
      puVar8[0x16] = uVar40;
      puVar8[0x17] = uVar41;
      puVar8[0x18] = uVar35;
      puVar8[0x19] = uVar36;
      puVar8[0x1a] = uVar37;
      puVar8[0x1b] = uVar38;
      puVar8[0x1c] = uVar28;
      puVar8[0x1d] = uVar31;
      puVar8[0x1e] = uVar33;
      puVar8[0x1f] = uVar34;
      *(undefined1 (*) [8])(puVar8 + 0x20) = auVar30;
      *(undefined8 *)(puVar8 + 0x22) = uStack_50;
      puVar8[0x24] = local_f8;
      puVar8[0x25] = uStack_f4;
      puVar8[0x26] = uStack_f0;
      puVar8[0x27] = uStack_ec;
      puVar8[0x28] = local_e8;
      puVar8[0x29] = uStack_e4;
      puVar8[0x2a] = uStack_e0;
      puVar8[0x2b] = uStack_dc;
      puVar8 = puVar10;
    } while (puVar27 != puVar10);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleM<4> >::~BVHNBuilderSAH() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleM<4>>::~BVHNBuilderSAH
          (BVHNBuilderSAH<4,embree::TriangleM<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMv<4> >::~BVHNBuilderSAH() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMv<4>>::~BVHNBuilderSAH
          (BVHNBuilderSAH<4,embree::TriangleMv<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMi<4> >::~BVHNBuilderSAH() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMi<4>>::~BVHNBuilderSAH
          (BVHNBuilderSAH<4,embree::TriangleMi<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNBuilderSAHQuantized<4, embree::TriangleMi<4> >::~BVHNBuilderSAHQuantized() */

void __thiscall
embree::sse2::BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>>::~BVHNBuilderSAHQuantized
          (BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


