
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
  *puVar1 = &PTR__BVHNBuilderSAH_00107930;
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
  *puVar1 = &PTR__BVHNBuilderSAH_00107978;
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
  *puVar1 = &PTR__BVHNBuilderSAH_001079c0;
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
  *puVar1 = &PTR__BVHNBuilderSAH_00107930;
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
  *puVar1 = &PTR__BVHNBuilderSAH_00107978;
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
  *puVar1 = &PTR__BVHNBuilderSAH_001079c0;
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
  *puVar1 = &PTR__BVHNBuilderSAHQuantized_00107a08;
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
  
  *(undefined ***)this = &PTR__BVHNBuilderSAHQuantized_00107a08;
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
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_001079c0;
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
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_00107978;
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
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_00107930;
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



/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMv<4> >::~BVHNBuilderSAH() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMv<4>>::~BVHNBuilderSAH
          (BVHNBuilderSAH<4,embree::TriangleMv<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_00107978;
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
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_00107930;
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



/* embree::sse2::BVHNBuilderSAHQuantized<4, embree::TriangleMi<4> >::~BVHNBuilderSAHQuantized() */

void __thiscall
embree::sse2::BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>>::~BVHNBuilderSAHQuantized
          (BVHNBuilderSAHQuantized<4,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNBuilderSAHQuantized_00107a08;
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



/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMi<4> >::~BVHNBuilderSAH() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMi<4>>::~BVHNBuilderSAH
          (BVHNBuilderSAH<4,embree::TriangleMi<4>> *this)

{
  long lVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__BVHNBuilderSAH_001079c0;
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
    while (*(int *)(lVar5 + 0x28) != 2) {
      plVar8 = (long *)(lVar5 + 0x18);
      lVar5 = *(long *)(lVar5 + 0x18);
      if (lVar5 == 0) goto LAB_00100e47;
    }
    *plVar8 = *(undefined8 *)(lVar5 + 0x18);
  }
LAB_00100e47:
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
        if (plVar3 == plVar8) goto LAB_00100f98;
      }
      plVar8 = plVar8 + 1;
    } while (plVar3 != plVar8);
LAB_00100f98:
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
LAB_00101185:
      *(undefined8 *)(this + 0x10) = 0x1040;
      *(ulong *)(this + 0x20) = uVar4 * 2;
      goto LAB_001010f1;
    }
  }
  else {
    if (uVar4 * 0x140 < param_1) goto LAB_00101185;
    if (0x1040 < uVar5) {
      uVar5 = 0x1040;
    }
    if (uVar5 < 0x400) {
      uVar5 = 0x400;
    }
    *(ulong *)(this + 0x10) = uVar5;
    if (param_1 != 0) goto LAB_001010f1;
    *(undefined8 *)(this + 0x28) = 0x1fffc0;
  }
  *(undefined8 *)(this + 0x10) = 0x1040;
LAB_001010f1:
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
      goto LAB_00101270;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (param_6 != 0) goto LAB_00101270;
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
      goto LAB_00101270;
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
LAB_00101270:
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
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  FastAllocator *pFVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  
  do {
    uVar4 = embree::TaskScheduler::threadID();
    lVar2 = (uVar4 & *(ulong *)(this + 8)) * 8;
    pFVar1 = this + lVar2 + 0x78;
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 != (ulong *)0x0) {
      puVar9 = *(undefined8 **)this;
      if (puVar9 != (undefined8 *)0x0) {
        puVar9 = puVar9 + 0xa9;
      }
      uVar4 = -param_2 & (param_2 - 1) + *param_1;
      if (puVar3[2] < *puVar3 + uVar4) {
        if (param_3) {
          LOCK();
          uVar6 = *puVar3;
          *puVar3 = *puVar3 + uVar4;
          UNLOCK();
          goto LAB_001014ba;
        }
      }
      else {
        LOCK();
        uVar6 = *puVar3;
        *puVar3 = *puVar3 + uVar4;
        UNLOCK();
        if ((uVar4 + uVar6 <= puVar3[2]) || (param_3)) {
LAB_001014ba:
          if (uVar6 <= puVar3[2]) {
            uVar5 = puVar3[2] - uVar6;
            if (uVar4 < puVar3[2] - uVar6) {
              uVar5 = uVar4;
            }
            *param_1 = uVar5;
            if ((puVar9 != (undefined8 *)0x0) && (puVar3[1] < uVar5 + uVar6)) {
              uVar4 = puVar3[1];
              if (puVar3[1] <= uVar6) {
                uVar4 = uVar6;
              }
              (**(code **)*puVar9)(puVar9,(uVar5 + uVar6) - uVar4,1);
            }
            if ((long)puVar3 + uVar6 + 0x40 != 0) {
              return;
            }
          }
        }
      }
      if (this[0x109] == (FastAllocator)0x0) {
LAB_001016ca:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (0x1fffc0 < *param_1) goto LAB_001016ca;
    if (*(long *)(this + 0x100) == 0) {
      embree::MutexSys::lock();
      if (puVar3 == *(ulong **)pFVar1) {
        pFVar8 = this + lVar2 + 0xb8;
        uVar10 = *(undefined4 *)(this + 0x148);
        uVar4 = (param_2 - 1) + *param_1 & -param_2;
        uVar6 = *(ulong *)(this + 0x28);
        if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
          uVar6 = *(ulong *)(this + 0x20);
        }
        uVar7 = *(undefined8 *)pFVar8;
        if (uVar4 < uVar6) {
          uVar4 = uVar6;
        }
LAB_00101594:
        uVar7 = Block::create(*(undefined8 *)this,this[0x108],uVar4,uVar4,uVar7,uVar10);
        LOCK();
        *(undefined8 *)pFVar1 = uVar7;
        UNLOCK();
        LOCK();
        *(undefined8 *)pFVar8 = uVar7;
        UNLOCK();
      }
    }
    else {
      embree::MutexSys::lock();
      if (puVar3 == *(ulong **)pFVar1) {
        if (*(long *)(this + 0x100) == 0) {
          LOCK();
          pFVar8 = this + 0x110;
          lVar2 = *(long *)pFVar8;
          *(long *)pFVar8 = *(long *)pFVar8 + 1;
          UNLOCK();
          uVar10 = *(undefined4 *)(this + 0x148);
          uVar7 = *(undefined8 *)(this + 0xf8);
          pFVar8 = this + 0xf8;
          uVar4 = 0x10;
          if (lVar2 + 1U < 0x11) {
            uVar4 = lVar2 + 1U;
          }
          uVar4 = *(long *)(this + 0x20) << ((byte)uVar4 & 0x3f);
          if (*(ulong *)(this + 0x28) < uVar4) {
            uVar4 = *(ulong *)(this + 0x28);
          }
          goto LAB_00101594;
        }
        uVar7 = *(undefined8 *)(*(long *)(this + 0x100) + 0x18);
        *(undefined8 *)(*(long *)(this + 0x100) + 0x18) = *(undefined8 *)(this + 0xf8);
        LOCK();
        *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x100);
        UNLOCK();
        LOCK();
        *(undefined8 *)pFVar1 = *(undefined8 *)(this + 0x100);
        UNLOCK();
        LOCK();
        *(undefined8 *)(this + 0x100) = uVar7;
        UNLOCK();
      }
    }
    embree::MutexSys::unlock();
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
                    /* WARNING: Could not recover jumptable at 0x00101736. Too many branches */
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
  FastAllocator *pFVar1;
  ulong *puVar2;
  byte bVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  Device *pDVar7;
  Block *pBVar8;
  string *psVar9;
  Block *pBVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulong *puVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  ulong *puVar25;
  vector_t *pvVar26;
  vector_t *pvVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  double dVar29;
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
  ulong uVar20;
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) == 0) {
LAB_00102080:
    uVar28 = *(ulong *)(this + 0x90);
    lVar11 = *(long *)(this + 0x18);
    pvVar26 = (vector_t *)0x0;
    if ((uVar28 & 0x100000) == 0) {
      if ((uVar28 & 0x200000) == 0) goto LAB_001020a4;
LAB_00102468:
      pvVar26 = pvVar26 + *(long *)(lVar11 + 0x298);
      if ((uVar28 & 0xf) != 0) goto LAB_00102450;
LAB_001020ac:
      if ((uVar28 & 0x77770) == 0) goto LAB_001020b7;
LAB_00102438:
      pvVar26 = pvVar26 + *(long *)(lVar11 + 0x2a8);
      if ((uVar28 & 0xe000000) != 0) goto LAB_00102420;
LAB_001020c2:
      if ((uVar28 & 0x800000) == 0) goto LAB_001020cd;
LAB_00102408:
      pvVar26 = pvVar26 + *(long *)(lVar11 + 0x2c8);
      if ((uVar28 & 0x20000000) != 0) goto LAB_001023f0;
LAB_001020d8:
      if ((uVar28 & 0x40000000) == 0) goto LAB_001020e3;
LAB_001023d8:
      pvVar26 = pvVar26 + *(long *)(lVar11 + 0x2e8);
      if ((uVar28 & 0x80000000) != 0) goto LAB_001024b0;
LAB_001020ee:
      if ((uVar28 & 0x1000000) == 0) goto LAB_001020f9;
LAB_00102498:
      pvVar26 = pvVar26 + *(long *)(lVar11 + 0x308);
      if ((uVar28 & 0x400000) == 0) goto LAB_00102228;
LAB_00102104:
      pvVar26 = pvVar26 + *(long *)(lVar11 + 0x318);
      *(int *)(this + 0x9c) = (int)pvVar26;
    }
    else {
      pvVar26 = *(vector_t **)(lVar11 + 0x288);
      if ((uVar28 & 0x200000) != 0) goto LAB_00102468;
LAB_001020a4:
      if ((uVar28 & 0xf) == 0) goto LAB_001020ac;
LAB_00102450:
      pvVar26 = pvVar26 + *(long *)(lVar11 + 0x2b8);
      if ((uVar28 & 0x77770) != 0) goto LAB_00102438;
LAB_001020b7:
      if ((uVar28 & 0xe000000) == 0) goto LAB_001020c2;
LAB_00102420:
      pvVar26 = pvVar26 + *(long *)(lVar11 + 0x338);
      if ((uVar28 & 0x800000) != 0) goto LAB_00102408;
LAB_001020cd:
      if ((uVar28 & 0x20000000) == 0) goto LAB_001020d8;
LAB_001023f0:
      pvVar26 = pvVar26 + *(long *)(lVar11 + 0x2d8);
      if ((uVar28 & 0x40000000) != 0) goto LAB_001023d8;
LAB_001020e3:
      if ((uVar28 & 0x80000000) == 0) goto LAB_001020ee;
LAB_001024b0:
      pvVar26 = pvVar26 + *(long *)(lVar11 + 0x2f8);
      if ((uVar28 & 0x1000000) != 0) goto LAB_00102498;
LAB_001020f9:
      if ((uVar28 & 0x400000) != 0) goto LAB_00102104;
LAB_00102228:
      *(int *)(this + 0x9c) = (int)pvVar26;
    }
    if (pvVar26 == (vector_t *)0x0) goto LAB_00102120;
    psVar9 = *(string **)(this + 0x10);
    local_a8[0] = local_98;
    std::__cxx11::string::_M_construct((ulong)local_a8,'\x01');
    *(undefined1 *)local_a8[0] = 0x34;
    plVar16 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x101773);
    plVar17 = plVar16 + 2;
    if ((long *)*plVar16 == plVar17) {
      uVar28 = plVar16[1] + 1;
      plVar22 = plVar17;
      plVar24 = local_78;
      if (7 < (uint)uVar28) {
        uVar23 = 0;
        do {
          uVar19 = (int)uVar23 + 8;
          uVar20 = (ulong)uVar19;
          *(undefined8 *)((long)local_78 + uVar23) = *(undefined8 *)((long)plVar17 + uVar23);
          uVar23 = uVar20;
        } while (uVar19 < ((uint)uVar28 & 0xfffffff8));
        plVar24 = (long *)((long)local_78 + uVar20);
        plVar22 = (long *)(uVar20 + (long)plVar17);
      }
      lVar11 = 0;
      if ((uVar28 & 4) != 0) {
        *(int *)plVar24 = (int)*plVar22;
        lVar11 = 4;
      }
      if ((uVar28 & 2) != 0) {
        *(undefined2 *)((long)plVar24 + lVar11) = *(undefined2 *)((long)plVar22 + lVar11);
        lVar11 = lVar11 + 2;
      }
      local_88 = local_78;
      if ((uVar28 & 1) != 0) {
        *(undefined1 *)((long)plVar24 + lVar11) = *(undefined1 *)((long)plVar22 + lVar11);
      }
    }
    else {
      local_78[0] = plVar16[2];
      local_88 = (long *)*plVar16;
    }
    local_80 = plVar16[1];
    *plVar16 = (long)plVar17;
    plVar16[1] = 0;
    *(undefined1 *)(plVar16 + 2) = 0;
    if (0x3fffffffffffffffU - local_80 < 10) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::append");
    }
    plVar17 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x101793);
    puVar2 = (ulong *)(plVar17 + 2);
    if ((ulong *)*plVar17 == puVar2) {
      uVar28 = plVar17[1] + 1;
      puVar21 = puVar2;
      puVar25 = local_58;
      if (7 < (uint)uVar28) {
        uVar23 = 0;
        do {
          uVar19 = (int)uVar23 + 8;
          uVar20 = (ulong)uVar19;
          *(undefined8 *)((long)local_58 + uVar23) = *(undefined8 *)((long)puVar2 + uVar23);
          uVar23 = uVar20;
        } while (uVar19 < ((uint)uVar28 & 0xfffffff8));
        puVar25 = (ulong *)((long)local_58 + uVar20);
        puVar21 = (ulong *)(uVar20 + (long)puVar2);
      }
      lVar11 = 0;
      if ((uVar28 & 4) != 0) {
        *(int *)puVar25 = (int)*puVar21;
        lVar11 = 4;
      }
      if ((uVar28 & 2) != 0) {
        *(undefined2 *)((long)puVar25 + lVar11) = *(undefined2 *)((long)puVar21 + lVar11);
        lVar11 = lVar11 + 2;
      }
      local_68 = local_58;
      if ((uVar28 & 1) != 0) {
        *(undefined1 *)((long)puVar25 + lVar11) = *(undefined1 *)((long)puVar21 + lVar11);
      }
    }
    else {
      local_58[0] = plVar17[2];
      local_68 = (ulong *)*plVar17;
    }
    local_60 = plVar17[1];
    *plVar17 = (long)puVar2;
    plVar17[1] = 0;
    *(undefined1 *)(plVar17 + 2) = 0;
    local_150 = (double)embree::BVHN<4>::preBuild(psVar9);
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
    uVar19 = *(uint *)(this + 0x9c);
    if (*(uint *)(*(long *)(this + 0x20) + 0x20) == uVar19) {
      *(uint *)(this + 0x9c) = uVar19;
    }
    else {
      lVar11 = *(long *)(this + 0x10);
      pFVar1 = (FastAllocator *)(lVar11 + 0x78);
      FastAllocator::internal_fix_used_blocks(pFVar1);
      plVar17 = *(long **)(lVar11 + 0x1a8);
      plVar16 = *(long **)(lVar11 + 0x1b0);
      if (plVar16 != plVar17) {
        do {
          while( true ) {
            lVar6 = *plVar17;
            if (pFVar1 != *(FastAllocator **)(lVar6 + 8)) break;
            embree::MutexSys::lock();
            if (pFVar1 == *(FastAllocator **)(lVar6 + 8)) {
              LOCK();
              plVar24 = (long *)(*(long *)(lVar6 + 8) + 0x118);
              *plVar24 = *plVar24 + *(long *)(lVar6 + 0xa8) + *(long *)(lVar6 + 0x68);
              UNLOCK();
              LOCK();
              plVar24 = (long *)(*(long *)(lVar6 + 8) + 0x120);
              *plVar24 = *plVar24 +
                         (((*(long *)(lVar6 + 0x98) + *(long *)(lVar6 + 0x58)) -
                          *(long *)(lVar6 + 0x50)) - *(long *)(lVar6 + 0x90));
              UNLOCK();
              LOCK();
              plVar24 = (long *)(*(long *)(lVar6 + 8) + 0x128);
              *plVar24 = *plVar24 + *(long *)(lVar6 + 0xb0) + *(long *)(lVar6 + 0x70);
              UNLOCK();
              *(undefined8 *)(lVar6 + 0x48) = 0;
              *(undefined8 *)(lVar6 + 0x58) = 0;
              *(undefined8 *)(lVar6 + 0x50) = 0;
              *(undefined8 *)(lVar6 + 0x68) = 0;
              *(undefined8 *)(lVar6 + 0x70) = 0;
              *(undefined8 *)(lVar6 + 0x60) = 0;
              *(undefined8 *)(lVar6 + 0x88) = 0;
              *(undefined8 *)(lVar6 + 0x98) = 0;
              *(undefined8 *)(lVar6 + 0x90) = 0;
              *(undefined8 *)(lVar6 + 0xa8) = 0;
              *(undefined8 *)(lVar6 + 0xb0) = 0;
              *(undefined8 *)(lVar6 + 0xa0) = 0;
              LOCK();
              *(undefined8 *)(lVar6 + 8) = 0;
              UNLOCK();
            }
            plVar17 = plVar17 + 1;
            embree::MutexSys::unlock();
            if (plVar16 == plVar17) goto LAB_00101ef6;
          }
          plVar17 = plVar17 + 1;
        } while (plVar16 != plVar17);
LAB_00101ef6:
        if (*(long *)(lVar11 + 0x1a8) != *(long *)(lVar11 + 0x1b0)) {
          *(long *)(lVar11 + 0x1b0) = *(long *)(lVar11 + 0x1a8);
        }
      }
      LOCK();
      *(undefined8 *)(lVar11 + 400) = 0;
      UNLOCK();
      LOCK();
      *(undefined8 *)(lVar11 + 0x198) = 0;
      UNLOCK();
      LOCK();
      *(undefined8 *)(lVar11 + 0x1a0) = 0;
      UNLOCK();
      if (*(long *)(lVar11 + 0x170) != 0) {
        bVar4 = *(bool *)(lVar11 + 0x180);
        pDVar7 = *(Device **)(lVar11 + 0x78);
        pBVar10 = *(Block **)(lVar11 + 0x170);
        while (pBVar10 != (Block *)0x0) {
          pBVar8 = *(Block **)(pBVar10 + 0x18);
          FastAllocator::Block::clear_block(pBVar10,pDVar7,bVar4);
          pBVar10 = pBVar8;
        }
      }
      LOCK();
      *(undefined8 *)(lVar11 + 0x170) = 0;
      UNLOCK();
      if (*(long *)(lVar11 + 0x178) != 0) {
        bVar4 = *(bool *)(lVar11 + 0x180);
        pDVar7 = *(Device **)(lVar11 + 0x78);
        pBVar10 = *(Block **)(lVar11 + 0x178);
        while (pBVar10 != (Block *)0x0) {
          pBVar8 = *(Block **)(pBVar10 + 0x18);
          FastAllocator::Block::clear_block(pBVar10,pDVar7,bVar4);
          pBVar10 = pBVar8;
        }
      }
      LOCK();
      *(undefined8 *)(lVar11 + 0x178) = 0;
      UNLOCK();
      puVar15 = (undefined8 *)(lVar11 + 0xf0);
      do {
        LOCK();
        *puVar15 = 0;
        UNLOCK();
        LOCK();
        puVar15[8] = 0;
        UNLOCK();
        puVar15 = puVar15 + 1;
      } while ((undefined8 *)(lVar11 + 0x130) != puVar15);
      pvVar5 = *(void **)(lVar11 + 0x1e8);
      lVar6 = *(long *)(lVar11 + 0x1e0);
      if (pvVar5 != (void *)0x0) {
        if ((ulong)(lVar6 << 5) < 0x1c00000) {
          embree::alignedFree(pvVar5);
        }
        else {
          embree::os_free(pvVar5,lVar6 << 5,*(bool *)(lVar11 + 0x1d0));
        }
      }
      if (lVar6 != 0) {
        (**(code **)**(undefined8 **)(lVar11 + 0x1c8))
                  (*(undefined8 **)(lVar11 + 0x1c8),lVar6 * -0x20,1);
      }
      *(undefined8 *)(lVar11 + 0x1e8) = 0;
      *(undefined8 *)(lVar11 + 0x1e0) = 0;
      *(undefined8 *)(lVar11 + 0x1d8) = 0;
      if (*(long *)(this + 0x20) == 0) goto LAB_00102080;
      uVar19 = *(uint *)(*(long *)(this + 0x20) + 0x20);
      *(uint *)(this + 0x9c) = uVar19;
    }
    pvVar26 = (vector_t *)(ulong)uVar19;
    if (pvVar26 == (vector_t *)0x0) {
LAB_00102120:
      pvVar5 = *(void **)(this + 0x48);
      lVar11 = *(long *)(this + 0x40);
      if (pvVar5 != (void *)0x0) {
        if ((ulong)(lVar11 << 5) < 0x1c00000) {
          embree::alignedFree(pvVar5);
        }
        else {
          embree::os_free(pvVar5,lVar11 << 5,(bool)this[0x30]);
        }
      }
      if (lVar11 != 0) {
        (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar11 * -0x20,1);
      }
      *(undefined8 *)(this + 0x48) = 0;
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010219e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(this + 0x10) + 0x28))();
        return;
      }
      goto LAB_00102709;
    }
    local_60 = 0;
    local_58[0] = local_58[0] & 0xffffffffffffff00;
    local_68 = local_58;
    local_150 = (double)embree::BVHN<4>::preBuild(*(string **)(this + 0x10));
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
  }
  pvVar27 = *(vector_t **)(this + 0x40);
  if (pvVar27 < pvVar26) {
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
    puVar15 = *(undefined8 **)(this + 0x48);
    uVar28 = (long)pvVar27 << 5;
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),uVar28,0);
    if (uVar28 < 0x1c00000) {
      lVar11 = embree::alignedMalloc(uVar28,0x20);
    }
    else {
      lVar11 = embree::os_malloc(uVar28,(bool *)(this + 0x30));
    }
    *(long *)(this + 0x48) = lVar11;
    if (*(long *)(this + 0x38) != 0) {
      puVar18 = puVar15;
      uVar28 = 0;
      while( true ) {
        uVar14 = puVar18[1];
        puVar12 = (undefined8 *)(lVar11 + uVar28 * 0x20);
        *puVar12 = *puVar18;
        puVar12[1] = uVar14;
        uVar14 = puVar18[3];
        puVar12[2] = puVar18[2];
        puVar12[3] = uVar14;
        if (*(ulong *)(this + 0x38) <= uVar28 + 1) break;
        lVar11 = *(long *)(this + 0x48);
        puVar18 = puVar18 + 4;
        uVar28 = uVar28 + 1;
      }
    }
    lVar11 = *(long *)(this + 0x40);
    if (puVar15 != (undefined8 *)0x0) {
      if ((ulong)(lVar11 << 5) < 0x1c00000) {
        embree::alignedFree(puVar15);
      }
      else {
        embree::os_free(puVar15,lVar11 << 5,(bool)this[0x30]);
      }
    }
    if (lVar11 != 0) {
      (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar11 * -0x20,1);
    }
    *(vector_t **)(this + 0x38) = pvVar26;
    *(vector_t **)(this + 0x40) = pvVar27;
  }
  else {
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
  if (*(long *)(this + 0x20) != 0) {
    *(undefined4 *)(*(long *)(this + 0x10) + 0x1c0) = 1;
  }
  dVar29 = (double)((ulong)(pvVar26 + 3) >> 2) * __LC3 * __LC4;
  if (__LC5 <= dVar29) {
    uVar28 = (long)(dVar29 - __LC5) ^ 0x8000000000000000;
  }
  else {
    uVar28 = (ulong)dVar29;
  }
  uVar28 = uVar28 + ((long)pvVar26 * 5 & 0xfffffffffffffffU);
  FastAllocator::init_estimate((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar28);
  local_140 = *(long *)(this + 0x10);
  uVar23 = 0x400;
  if (uVar28 != 0) {
    bVar3 = *(byte *)(local_140 + 0x182);
    uVar13 = embree::TaskScheduler::threadCount();
    lVar11 = (2 - (ulong)bVar3) * *(long *)(local_140 + 0x88);
    uVar23 = 0x400;
    uVar20 = lVar11 * 0x14;
    if (((uVar28 - 1) + uVar20) / uVar20 < uVar13) {
      uVar23 = lVar11 * 0x50;
      if ((long)uVar23 < 0) {
        dVar29 = (double)(uVar23 >> 1) + (double)(uVar23 >> 1);
      }
      else {
        dVar29 = (double)(long)uVar23;
      }
      dVar29 = dVar29 / ((double)uVar28 / (double)pvVar26);
      if ((double)((ulong)dVar29 & _LC9) < _LC6) {
        dVar29 = (double)((ulong)((double)(long)dVar29 +
                                 (double)(-(ulong)((double)(long)dVar29 < dVar29) & _LC8)) |
                         ~_LC9 & (ulong)dVar29);
      }
      if (__LC5 <= dVar29) {
        local_140 = *(long *)(this + 0x10);
        uVar23 = (long)(dVar29 - __LC5) ^ 0x8000000000000000;
        goto LAB_00101ae8;
      }
      uVar23 = (ulong)dVar29;
    }
    local_140 = *(long *)(this + 0x10);
  }
LAB_00101ae8:
  *(ulong *)(this + 0x80) = uVar23;
  local_138 = *(undefined8 *)(this + 0x50);
  uStack_130 = *(undefined8 *)(this + 0x58);
  local_128 = *(undefined8 *)(this + 0x60);
  uStack_120 = *(undefined8 *)(this + 0x68);
  local_118 = *(undefined8 *)(this + 0x70);
  uStack_110 = *(undefined8 *)(this + 0x78);
  local_108 = *(undefined8 *)(this + 0x80);
  uStack_100 = *(undefined8 *)(this + 0x88);
  local_148 = &PTR_createLeaf_001076f0;
  uVar14 = embree::sse2::BVHNBuilderQuantizedVirtual<4>::BVHNBuilderV::build
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
  embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),uVar14,&local_138,local_b0 - local_b8);
  if ((*(long *)(this + 0x18) != 0) && ((*(byte *)(*(long *)(this + 0x18) + 0x230) & 1) == 0)) {
    pvVar5 = *(void **)(this + 0x48);
    lVar11 = *(long *)(this + 0x40);
    if (pvVar5 != (void *)0x0) {
      if ((ulong)(lVar11 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar5);
      }
      else {
        embree::os_free(pvVar5,lVar11 << 5,(bool)this[0x30]);
      }
    }
    if (lVar11 != 0) {
      (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar11 * -0x20,1);
    }
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
  }
  lVar11 = *(long *)(this + 0x10);
  pFVar1 = (FastAllocator *)(lVar11 + 0x78);
  FastAllocator::internal_fix_used_blocks(pFVar1);
  plVar17 = *(long **)(lVar11 + 0x1a8);
  plVar16 = *(long **)(lVar11 + 0x1b0);
  if (plVar17 != plVar16) {
    do {
      while( true ) {
        lVar6 = *plVar17;
        if (pFVar1 != *(FastAllocator **)(lVar6 + 8)) break;
        embree::MutexSys::lock();
        if (pFVar1 == *(FastAllocator **)(lVar6 + 8)) {
          LOCK();
          plVar24 = (long *)(*(long *)(lVar6 + 8) + 0x118);
          *plVar24 = *plVar24 + *(long *)(lVar6 + 0xa8) + *(long *)(lVar6 + 0x68);
          UNLOCK();
          LOCK();
          plVar24 = (long *)(*(long *)(lVar6 + 8) + 0x120);
          *plVar24 = *plVar24 +
                     (((*(long *)(lVar6 + 0x98) + *(long *)(lVar6 + 0x58)) - *(long *)(lVar6 + 0x50)
                      ) - *(long *)(lVar6 + 0x90));
          UNLOCK();
          LOCK();
          plVar24 = (long *)(*(long *)(lVar6 + 8) + 0x128);
          *plVar24 = *plVar24 + *(long *)(lVar6 + 0xb0) + *(long *)(lVar6 + 0x70);
          UNLOCK();
          *(undefined8 *)(lVar6 + 0x48) = 0;
          *(undefined8 *)(lVar6 + 0x58) = 0;
          *(undefined8 *)(lVar6 + 0x50) = 0;
          *(undefined8 *)(lVar6 + 0x68) = 0;
          *(undefined8 *)(lVar6 + 0x70) = 0;
          *(undefined8 *)(lVar6 + 0x60) = 0;
          *(undefined8 *)(lVar6 + 0x88) = 0;
          *(undefined8 *)(lVar6 + 0x98) = 0;
          *(undefined8 *)(lVar6 + 0x90) = 0;
          *(undefined8 *)(lVar6 + 0xa8) = 0;
          *(undefined8 *)(lVar6 + 0xb0) = 0;
          *(undefined8 *)(lVar6 + 0xa0) = 0;
          LOCK();
          *(undefined8 *)(lVar6 + 8) = 0;
          UNLOCK();
        }
        plVar17 = plVar17 + 1;
        embree::MutexSys::unlock();
        if (plVar16 == plVar17) goto LAB_00101d56;
      }
      plVar17 = plVar17 + 1;
    } while (plVar16 != plVar17);
LAB_00101d56:
    if (*(long *)(lVar11 + 0x1a8) != *(long *)(lVar11 + 0x1b0)) {
      *(long *)(lVar11 + 0x1b0) = *(long *)(lVar11 + 0x1a8);
    }
  }
  embree::BVHN<4>::postBuild(local_150);
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102709:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNBuilderSAH<4, embree::TriangleMi<4> >::build() */

void __thiscall
embree::sse2::BVHNBuilderSAH<4,embree::TriangleMi<4>>::build
          (BVHNBuilderSAH<4,embree::TriangleMi<4>> *this)

{
  FastAllocator *pFVar1;
  ulong *puVar2;
  byte bVar3;
  string sVar4;
  Device *pDVar5;
  Block *pBVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long lVar9;
  Block *pBVar10;
  ulong uVar11;
  long lVar12;
  string *psVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  long *plVar21;
  ulong *puVar22;
  ulong uVar23;
  string *psVar24;
  ulong *puVar25;
  long *plVar26;
  vector_t *pvVar27;
  vector_t *pvVar28;
  long in_FS_OFFSET;
  double dVar29;
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
  
  psVar24 = *(string **)(this + 0x10);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) == 0) {
    if (*(long *)(this + 0x88) != -1) goto LAB_00102c4d;
LAB_0010331e:
    uVar23 = *(ulong *)(this + 0x90);
    lVar12 = *(long *)(this + 0x18);
    pvVar27 = (vector_t *)0x0;
    if ((uVar23 & 0x100000) != 0) {
      pvVar27 = *(vector_t **)(lVar12 + 0x288);
    }
    if ((uVar23 & 0x200000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x298);
    }
    if ((uVar23 & 0xf) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2b8);
    }
    if ((uVar23 & 0x77770) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2a8);
    }
    if ((uVar23 & 0xe000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x338);
    }
    if ((uVar23 & 0x800000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2c8);
    }
    if ((uVar23 & 0x20000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2d8);
    }
    if ((uVar23 & 0x40000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2e8);
    }
    if ((uVar23 & 0x80000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2f8);
    }
    if ((uVar23 & 0x1000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x308);
    }
    if ((uVar23 & 0x400000) == 0) {
      *(int *)(this + 0xa0) = (int)pvVar27;
    }
    else {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x318);
      *(int *)(this + 0xa0) = (int)pvVar27;
    }
    if (pvVar27 != (vector_t *)0x0) {
      local_a8[0] = local_98;
      std::__cxx11::string::_M_construct((ulong)local_a8,'\x01');
      *(undefined1 *)local_a8[0] = 0x34;
      plVar16 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x10271a);
      plVar17 = plVar16 + 2;
      if ((long *)*plVar16 == plVar17) {
        uVar23 = plVar16[1] + 1;
        plVar21 = plVar17;
        plVar26 = local_78;
        if (7 < (uint)uVar23) {
          uVar18 = 0;
          do {
            uVar20 = (int)uVar18 + 8;
            uVar11 = (ulong)uVar20;
            *(undefined8 *)((long)local_78 + uVar18) = *(undefined8 *)((long)plVar17 + uVar18);
            uVar18 = uVar11;
          } while (uVar20 < ((uint)uVar23 & 0xfffffff8));
          plVar26 = (long *)((long)local_78 + uVar11);
          plVar21 = (long *)(uVar11 + (long)plVar17);
        }
        lVar12 = 0;
        if ((uVar23 & 4) != 0) {
          *(int *)plVar26 = (int)*plVar21;
          lVar12 = 4;
        }
        if ((uVar23 & 2) != 0) {
          *(undefined2 *)((long)plVar26 + lVar12) = *(undefined2 *)((long)plVar21 + lVar12);
          lVar12 = lVar12 + 2;
        }
        local_88 = local_78;
        if ((uVar23 & 1) != 0) {
          *(undefined1 *)((long)plVar26 + lVar12) = *(undefined1 *)((long)plVar21 + lVar12);
        }
      }
      else {
        local_78[0] = plVar16[2];
        local_88 = (long *)*plVar16;
      }
      local_80 = plVar16[1];
      *plVar16 = (long)plVar17;
      plVar16[1] = 0;
      *(undefined1 *)(plVar16 + 2) = 0;
      if (0x3fffffffffffffffU - local_80 < 10) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      plVar17 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x101793);
      puVar2 = (ulong *)(plVar17 + 2);
      if ((ulong *)*plVar17 == puVar2) {
        uVar23 = plVar17[1] + 1;
        puVar22 = puVar2;
        puVar25 = local_58;
        if (7 < (uint)uVar23) {
          uVar18 = 0;
          do {
            uVar20 = (int)uVar18 + 8;
            uVar11 = (ulong)uVar20;
            *(undefined8 *)((long)local_58 + uVar18) = *(undefined8 *)((long)puVar2 + uVar18);
            uVar18 = uVar11;
          } while (uVar20 < ((uint)uVar23 & 0xfffffff8));
          puVar25 = (ulong *)((long)local_58 + uVar11);
          puVar22 = (ulong *)(uVar11 + (long)puVar2);
        }
        lVar12 = 0;
        if ((uVar23 & 4) != 0) {
          *(int *)puVar25 = (int)*puVar22;
          lVar12 = 4;
        }
        if ((uVar23 & 2) != 0) {
          *(undefined2 *)((long)puVar25 + lVar12) = *(undefined2 *)((long)puVar22 + lVar12);
          lVar12 = lVar12 + 2;
        }
        local_68 = local_58;
        if ((uVar23 & 1) != 0) {
          *(undefined1 *)((long)puVar25 + lVar12) = *(undefined1 *)((long)puVar22 + lVar12);
        }
      }
      else {
        local_58[0] = plVar17[2];
        local_68 = (ulong *)*plVar17;
      }
      local_60 = plVar17[1];
      *plVar17 = (long)puVar2;
      plVar17[1] = 0;
      *(undefined1 *)(plVar17 + 2) = 0;
      local_150 = (double)embree::BVHN<4>::preBuild(psVar24);
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      if (local_a8[0] != local_98) {
        operator_delete(local_a8[0],local_98[0] + 1);
      }
      goto LAB_001027f1;
    }
LAB_00102d33:
    lVar12 = *(long *)psVar24;
  }
  else {
    uVar20 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    if (uVar20 == *(uint *)(this + 0xa0)) {
      if (*(long *)(this + 0x88) != -1) {
LAB_00102c4d:
        FastAllocator::reset((FastAllocator *)(psVar24 + 0x78));
        pvVar8 = *(void **)(this + 0x48);
        lVar12 = *(long *)(this + 0x40);
        if (pvVar8 != (void *)0x0) {
          if ((ulong)(lVar12 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar8);
          }
          else {
            embree::os_free(pvVar8,lVar12 << 5,(bool)this[0x30]);
          }
        }
        if (lVar12 != 0) {
          (**(code **)**(undefined8 **)(this + 0x28))
                    (*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
        }
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x38) = 0;
        *(long *)(this + 0x28) = *(long *)(psVar24 + 0x1c8);
        this[0x30] = *(BVHNBuilderSAH<4,embree::TriangleMi<4>> *)(psVar24 + 0x1d0);
        *(long *)(this + 0x38) = *(long *)(psVar24 + 0x1d8);
        *(long *)(psVar24 + 0x1d8) = 0;
        *(long *)(this + 0x40) = *(long *)(psVar24 + 0x1e0);
        *(long *)(psVar24 + 0x1e0) = 0;
        *(long *)(this + 0x48) = *(long *)(psVar24 + 0x1e8);
        *(long *)(psVar24 + 0x1e8) = 0;
        goto LAB_00102d0d;
      }
      pvVar27 = (vector_t *)(ulong)uVar20;
      *(uint *)(this + 0xa0) = uVar20;
      if (pvVar27 != (vector_t *)0x0) goto LAB_00102799;
      goto LAB_00102d33;
    }
    pFVar1 = (FastAllocator *)(psVar24 + 0x78);
    FastAllocator::internal_fix_used_blocks(pFVar1);
    plVar17 = *(long **)(psVar24 + 0x1a8);
    plVar16 = *(long **)(psVar24 + 0x1b0);
    if (plVar16 != plVar17) {
      do {
        while( true ) {
          lVar12 = *plVar17;
          if (pFVar1 != *(FastAllocator **)(lVar12 + 8)) break;
          embree::MutexSys::lock();
          if (pFVar1 == *(FastAllocator **)(lVar12 + 8)) {
            LOCK();
            plVar26 = (long *)(*(long *)(lVar12 + 8) + 0x118);
            *plVar26 = *plVar26 + *(long *)(lVar12 + 0xa8) + *(long *)(lVar12 + 0x68);
            UNLOCK();
            LOCK();
            plVar26 = (long *)(*(long *)(lVar12 + 8) + 0x120);
            *plVar26 = *plVar26 +
                       (((*(long *)(lVar12 + 0x98) + *(long *)(lVar12 + 0x58)) -
                        *(long *)(lVar12 + 0x50)) - *(long *)(lVar12 + 0x90));
            UNLOCK();
            LOCK();
            plVar26 = (long *)(*(long *)(lVar12 + 8) + 0x128);
            *plVar26 = *plVar26 + *(long *)(lVar12 + 0xb0) + *(long *)(lVar12 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar12 + 0x48) = 0;
            *(undefined8 *)(lVar12 + 0x58) = 0;
            *(undefined8 *)(lVar12 + 0x50) = 0;
            *(undefined8 *)(lVar12 + 0x68) = 0;
            *(undefined8 *)(lVar12 + 0x70) = 0;
            *(undefined8 *)(lVar12 + 0x60) = 0;
            *(undefined8 *)(lVar12 + 0x88) = 0;
            *(undefined8 *)(lVar12 + 0x98) = 0;
            *(undefined8 *)(lVar12 + 0x90) = 0;
            *(undefined8 *)(lVar12 + 0xa8) = 0;
            *(undefined8 *)(lVar12 + 0xb0) = 0;
            *(undefined8 *)(lVar12 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar12 + 8) = 0;
            UNLOCK();
          }
          plVar17 = plVar17 + 1;
          embree::MutexSys::unlock();
          if (plVar16 == plVar17) goto LAB_00102ad6;
        }
        plVar17 = plVar17 + 1;
      } while (plVar16 != plVar17);
LAB_00102ad6:
      if (*(long *)(psVar24 + 0x1b0) != *(long *)(psVar24 + 0x1a8)) {
        *(long *)(psVar24 + 0x1b0) = *(long *)(psVar24 + 0x1a8);
      }
    }
    LOCK();
    *(long *)(psVar24 + 400) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar24 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar24 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(psVar24 + 0x170) != 0) {
      sVar4 = psVar24[0x180];
      pDVar5 = *(Device **)(psVar24 + 0x78);
      pBVar10 = *(Block **)(psVar24 + 0x170);
      while (pBVar10 != (Block *)0x0) {
        pBVar6 = *(Block **)(pBVar10 + 0x18);
        FastAllocator::Block::clear_block(pBVar10,pDVar5,(bool)sVar4);
        pBVar10 = pBVar6;
      }
    }
    LOCK();
    *(long *)(psVar24 + 0x170) = 0;
    UNLOCK();
    if (*(long *)(psVar24 + 0x178) != 0) {
      sVar4 = psVar24[0x180];
      pDVar5 = *(Device **)(psVar24 + 0x78);
      pBVar10 = *(Block **)(psVar24 + 0x178);
      while (pBVar10 != (Block *)0x0) {
        pBVar6 = *(Block **)(pBVar10 + 0x18);
        FastAllocator::Block::clear_block(pBVar10,pDVar5,(bool)sVar4);
        pBVar10 = pBVar6;
      }
    }
    LOCK();
    *(long *)(psVar24 + 0x178) = 0;
    UNLOCK();
    psVar13 = psVar24 + 0xf0;
    do {
      LOCK();
      *(long *)psVar13 = 0;
      UNLOCK();
      LOCK();
      *(long *)(psVar13 + 0x40) = 0;
      UNLOCK();
      psVar13 = psVar13 + 8;
    } while (psVar24 + 0x130 != psVar13);
    pvVar8 = *(void **)(psVar24 + 0x1e8);
    lVar12 = *(long *)(psVar24 + 0x1e0);
    if (pvVar8 != (void *)0x0) {
      if ((ulong)(lVar12 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar8);
      }
      else {
        embree::os_free(pvVar8,lVar12 << 5,(bool)psVar24[0x1d0]);
      }
    }
    if (lVar12 != 0) {
      (**(code **)**(undefined8 **)(psVar24 + 0x1c8))
                (*(undefined8 **)(psVar24 + 0x1c8),lVar12 * -0x20,1);
    }
    *(long *)(psVar24 + 0x1e8) = 0;
    *(long *)(psVar24 + 0x1e0) = 0;
    *(long *)(psVar24 + 0x1d8) = 0;
    if (*(long *)(this + 0x88) != -1) {
      psVar24 = *(string **)(this + 0x10);
      goto LAB_00102c4d;
    }
LAB_00102d0d:
    if (*(long *)(this + 0x20) == 0) {
      psVar24 = *(string **)(this + 0x10);
      goto LAB_0010331e;
    }
    uVar20 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    psVar24 = *(string **)(this + 0x10);
    pvVar27 = (vector_t *)(ulong)uVar20;
    *(uint *)(this + 0xa0) = uVar20;
    if (pvVar27 == (vector_t *)0x0) goto LAB_00102d33;
LAB_00102799:
    local_60 = 0;
    local_58[0] = local_58[0] & 0xffffffffffffff00;
    local_68 = local_58;
    local_150 = (double)embree::BVHN<4>::preBuild(psVar24);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
LAB_001027f1:
    if (this[0x9c] != (BVHNBuilderSAH<4,embree::TriangleMi<4>>)0x0) {
      if (pvVar27 < (vector_t *)0xf4240) {
        *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
      }
      else {
        *(ulong *)(this + 0x88) = (ulong)pvVar27 / 1000;
      }
    }
    if (*(long *)(this + 0x20) != 0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x1c0) = 1;
    }
    dVar29 = (double)((ulong)(pvVar27 + 3) >> 2) * __LC3 * __LC4;
    if (__LC5 <= dVar29) {
      uVar23 = (long)(dVar29 - __LC5) ^ 0x8000000000000000;
    }
    else {
      uVar23 = (ulong)dVar29;
    }
    uVar23 = uVar23 + ((ulong)((long)pvVar27 * 0xe0) >> 4);
    FastAllocator::init_estimate((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar23);
    lVar12 = *(long *)(this + 0x10);
    if (uVar23 == 0) {
LAB_00102dc8:
      uVar23 = 0x400;
LAB_00102dcd:
      pvVar28 = *(vector_t **)(this + 0x40);
      *(ulong *)(this + 0x80) = uVar23;
      if (pvVar27 <= pvVar28) goto LAB_0010298b;
LAB_00102de1:
      if (pvVar28 == (vector_t *)0x0) {
        pvVar28 = pvVar27;
        if (pvVar27 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar27;
        }
      }
      else {
        do {
          pvVar28 = (vector_t *)((long)pvVar28 * 2);
          if (pvVar28 == (vector_t *)0x0) {
            pvVar28 = (vector_t *)0x1;
          }
        } while (pvVar28 < pvVar27);
        if (pvVar27 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar27;
        }
      }
      puVar7 = *(undefined8 **)(this + 0x48);
      uVar23 = (long)pvVar28 << 5;
      (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),uVar23,0);
      if (uVar23 < 0x1c00000) {
        lVar12 = embree::alignedMalloc(uVar23,0x20);
      }
      else {
        lVar12 = embree::os_malloc(uVar23,(bool *)(this + 0x30));
      }
      *(long *)(this + 0x48) = lVar12;
      if (*(long *)(this + 0x38) != 0) {
        puVar19 = puVar7;
        uVar23 = 0;
        while( true ) {
          uVar15 = puVar19[1];
          puVar14 = (undefined8 *)(lVar12 + uVar23 * 0x20);
          *puVar14 = *puVar19;
          puVar14[1] = uVar15;
          uVar15 = puVar19[3];
          puVar14[2] = puVar19[2];
          puVar14[3] = uVar15;
          if (*(ulong *)(this + 0x38) <= uVar23 + 1) break;
          lVar12 = *(long *)(this + 0x48);
          puVar19 = puVar19 + 4;
          uVar23 = uVar23 + 1;
        }
      }
      lVar12 = *(long *)(this + 0x40);
      if (puVar7 != (undefined8 *)0x0) {
        if ((ulong)(lVar12 << 5) < 0x1c00000) {
          embree::alignedFree(puVar7);
        }
        else {
          embree::os_free(puVar7,lVar12 << 5,(bool)this[0x30]);
        }
      }
      if (lVar12 != 0) {
        (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
      }
      *(vector_t **)(this + 0x38) = pvVar27;
      *(vector_t **)(this + 0x40) = pvVar28;
    }
    else {
      bVar3 = *(byte *)(lVar12 + 0x182);
      uVar11 = embree::TaskScheduler::threadCount();
      lVar12 = *(long *)(lVar12 + 0x88) * (2 - (ulong)bVar3);
      uVar18 = lVar12 * 0x14;
      if (uVar11 <= ((uVar23 - 1) + uVar18) / uVar18) goto LAB_00102dc8;
      uVar18 = lVar12 * 0x50;
      if ((long)uVar18 < 0) {
        dVar29 = (double)(uVar18 >> 1) + (double)(uVar18 >> 1);
      }
      else {
        dVar29 = (double)(long)uVar18;
      }
      dVar29 = dVar29 / ((double)uVar23 / (double)pvVar27);
      if ((double)((ulong)dVar29 & _LC9) < _LC6) {
        dVar29 = (double)((ulong)((double)(long)dVar29 +
                                 (double)(-(ulong)((double)(long)dVar29 < dVar29) & _LC8)) |
                         ~_LC9 & (ulong)dVar29);
      }
      if (__LC5 <= dVar29) {
        uVar23 = (long)(dVar29 - __LC5) ^ 0x8000000000000000;
        goto LAB_00102dcd;
      }
      pvVar28 = *(vector_t **)(this + 0x40);
      *(long *)(this + 0x80) = (long)dVar29;
      if (pvVar28 < pvVar27) goto LAB_00102de1;
LAB_0010298b:
      *(vector_t **)(this + 0x38) = pvVar27;
    }
    if (*(long *)(this + 0x20) == 0) {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x90),0,
                 pvVar27,this + 0x28,*(long *)(*(long *)(this + 0x10) + 0x68) + 600);
    }
    else {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,(uint)*(long *)(this + 0x20),(ulong)*(uint *)(this + 0x98),
                 pvVar27,(BuildProgressMonitor *)(this + 0x28));
    }
    psVar24 = *(string **)(this + 0x10);
    if (local_b0 != local_b8) {
      local_138 = *(undefined8 *)(this + 0x50);
      uStack_130 = *(undefined8 *)(this + 0x58);
      local_128 = *(undefined8 *)(this + 0x60);
      uStack_120 = *(undefined8 *)(this + 0x68);
      local_118 = *(undefined8 *)(this + 0x70);
      uStack_110 = *(undefined8 *)(this + 0x78);
      local_108 = *(undefined8 *)(this + 0x80);
      uStack_100 = *(undefined8 *)(this + 0x88);
      local_148 = &PTR_createLeaf_00107708;
      local_140 = psVar24;
      uVar15 = embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build
                         (&local_148,psVar24 + 0x78,*(long *)(psVar24 + 0x68) + 600,
                          *(undefined8 *)(this + 0x48),(Geometry *)&local_f8);
      local_138 = local_f8;
      uStack_130 = uStack_f0;
      local_128 = local_e8;
      uStack_120 = uStack_e0;
      local_118 = local_f8;
      uStack_110 = uStack_f0;
      local_108 = local_e8;
      uStack_100 = uStack_e0;
      embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),uVar15,&local_138,local_b0 - local_b8);
      embree::BVHN<4>::layoutLargeNodes(*(ulong *)(this + 0x10));
      if (*(long *)(this + 0x88) == -1) {
        if ((*(long *)(this + 0x18) != 0) && ((*(byte *)(*(long *)(this + 0x18) + 0x230) & 1) == 0))
        {
          pvVar8 = *(void **)(this + 0x48);
          lVar12 = *(long *)(this + 0x40);
          if (pvVar8 != (void *)0x0) {
            if ((ulong)(lVar12 << 5) < 0x1c00000) {
              embree::alignedFree(pvVar8);
            }
            else {
              embree::os_free(pvVar8,lVar12 << 5,(bool)this[0x30]);
            }
          }
          if (lVar12 != 0) {
            (**(code **)**(undefined8 **)(this + 0x28))
                      (*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
          }
          *(undefined8 *)(this + 0x48) = 0;
          *(undefined8 *)(this + 0x40) = 0;
          *(undefined8 *)(this + 0x38) = 0;
        }
      }
      else {
        lVar12 = *(long *)(this + 0x10);
        pvVar8 = *(void **)(lVar12 + 0x1e8);
        lVar9 = *(long *)(lVar12 + 0x1e0);
        if (pvVar8 != (void *)0x0) {
          if ((ulong)(lVar9 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar8);
          }
          else {
            embree::os_free(pvVar8,lVar9 << 5,*(bool *)(lVar12 + 0x1d0));
          }
        }
        if (lVar9 != 0) {
          (**(code **)**(undefined8 **)(lVar12 + 0x1c8))
                    (*(undefined8 **)(lVar12 + 0x1c8),lVar9 * -0x20,1);
        }
        *(undefined8 *)(lVar12 + 0x1e8) = 0;
        *(undefined8 *)(lVar12 + 0x1e0) = 0;
        *(undefined8 *)(lVar12 + 0x1d8) = 0;
        *(undefined8 *)(lVar12 + 0x1c8) = *(undefined8 *)(this + 0x28);
        *(BVHNBuilderSAH<4,embree::TriangleMi<4>> *)(lVar12 + 0x1d0) = this[0x30];
        *(undefined8 *)(lVar12 + 0x1d8) = *(undefined8 *)(this + 0x38);
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(lVar12 + 0x1e0) = *(undefined8 *)(this + 0x40);
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(lVar12 + 0x1e8) = *(undefined8 *)(this + 0x48);
        *(undefined8 *)(this + 0x48) = 0;
      }
      lVar12 = *(long *)(this + 0x10);
      pFVar1 = (FastAllocator *)(lVar12 + 0x78);
      FastAllocator::internal_fix_used_blocks(pFVar1);
      plVar17 = *(long **)(lVar12 + 0x1a8);
      plVar16 = *(long **)(lVar12 + 0x1b0);
      if (plVar17 != plVar16) {
        do {
          while( true ) {
            lVar9 = *plVar17;
            if (pFVar1 != *(FastAllocator **)(lVar9 + 8)) break;
            embree::MutexSys::lock();
            if (pFVar1 == *(FastAllocator **)(lVar9 + 8)) {
              LOCK();
              plVar26 = (long *)(*(long *)(lVar9 + 8) + 0x118);
              *plVar26 = *plVar26 + *(long *)(lVar9 + 0xa8) + *(long *)(lVar9 + 0x68);
              UNLOCK();
              LOCK();
              plVar26 = (long *)(*(long *)(lVar9 + 8) + 0x120);
              *plVar26 = *plVar26 +
                         (((*(long *)(lVar9 + 0x98) + *(long *)(lVar9 + 0x58)) -
                          *(long *)(lVar9 + 0x50)) - *(long *)(lVar9 + 0x90));
              UNLOCK();
              LOCK();
              plVar26 = (long *)(*(long *)(lVar9 + 8) + 0x128);
              *plVar26 = *plVar26 + *(long *)(lVar9 + 0xb0) + *(long *)(lVar9 + 0x70);
              UNLOCK();
              *(undefined8 *)(lVar9 + 0x48) = 0;
              *(undefined8 *)(lVar9 + 0x58) = 0;
              *(undefined8 *)(lVar9 + 0x50) = 0;
              *(undefined8 *)(lVar9 + 0x68) = 0;
              *(undefined8 *)(lVar9 + 0x70) = 0;
              *(undefined8 *)(lVar9 + 0x60) = 0;
              *(undefined8 *)(lVar9 + 0x88) = 0;
              *(undefined8 *)(lVar9 + 0x98) = 0;
              *(undefined8 *)(lVar9 + 0x90) = 0;
              *(undefined8 *)(lVar9 + 0xa8) = 0;
              *(undefined8 *)(lVar9 + 0xb0) = 0;
              *(undefined8 *)(lVar9 + 0xa0) = 0;
              LOCK();
              *(undefined8 *)(lVar9 + 8) = 0;
              UNLOCK();
            }
            plVar17 = plVar17 + 1;
            embree::MutexSys::unlock();
            if (plVar16 == plVar17) goto LAB_0010323e;
          }
          plVar17 = plVar17 + 1;
        } while (plVar16 != plVar17);
LAB_0010323e:
        if (*(long *)(lVar12 + 0x1a8) != *(long *)(lVar12 + 0x1b0)) {
          *(long *)(lVar12 + 0x1b0) = *(long *)(lVar12 + 0x1a8);
        }
      }
      embree::BVHN<4>::postBuild(local_150);
      goto LAB_00102d9c;
    }
    lVar12 = *(long *)psVar24;
  }
  (**(code **)(lVar12 + 0x28))(psVar24);
  pvVar8 = *(void **)(this + 0x48);
  lVar12 = *(long *)(this + 0x40);
  if (pvVar8 != (void *)0x0) {
    if ((ulong)(lVar12 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar8);
    }
    else {
      embree::os_free(pvVar8,lVar12 << 5,(bool)this[0x30]);
    }
  }
  if (lVar12 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
LAB_00102d9c:
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
  FastAllocator *pFVar1;
  ulong *puVar2;
  byte bVar3;
  string sVar4;
  Device *pDVar5;
  Block *pBVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long lVar9;
  Block *pBVar10;
  ulong uVar11;
  long lVar12;
  string *psVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  long *plVar21;
  ulong *puVar22;
  ulong uVar23;
  string *psVar24;
  ulong *puVar25;
  long *plVar26;
  vector_t *pvVar27;
  vector_t *pvVar28;
  long in_FS_OFFSET;
  double dVar29;
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
  
  psVar24 = *(string **)(this + 0x10);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) == 0) {
    if (*(long *)(this + 0x88) != -1) goto LAB_00103d7d;
LAB_0010444e:
    uVar23 = *(ulong *)(this + 0x90);
    lVar12 = *(long *)(this + 0x18);
    pvVar27 = (vector_t *)0x0;
    if ((uVar23 & 0x100000) != 0) {
      pvVar27 = *(vector_t **)(lVar12 + 0x288);
    }
    if ((uVar23 & 0x200000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x298);
    }
    if ((uVar23 & 0xf) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2b8);
    }
    if ((uVar23 & 0x77770) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2a8);
    }
    if ((uVar23 & 0xe000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x338);
    }
    if ((uVar23 & 0x800000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2c8);
    }
    if ((uVar23 & 0x20000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2d8);
    }
    if ((uVar23 & 0x40000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2e8);
    }
    if ((uVar23 & 0x80000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2f8);
    }
    if ((uVar23 & 0x1000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x308);
    }
    if ((uVar23 & 0x400000) == 0) {
      *(int *)(this + 0xa0) = (int)pvVar27;
    }
    else {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x318);
      *(int *)(this + 0xa0) = (int)pvVar27;
    }
    if (pvVar27 != (vector_t *)0x0) {
      local_a8[0] = local_98;
      std::__cxx11::string::_M_construct((ulong)local_a8,'\x01');
      *(undefined1 *)local_a8[0] = 0x34;
      plVar16 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x10271a);
      plVar17 = plVar16 + 2;
      if ((long *)*plVar16 == plVar17) {
        uVar23 = plVar16[1] + 1;
        plVar21 = plVar17;
        plVar26 = local_78;
        if (7 < (uint)uVar23) {
          uVar18 = 0;
          do {
            uVar20 = (int)uVar18 + 8;
            uVar11 = (ulong)uVar20;
            *(undefined8 *)((long)local_78 + uVar18) = *(undefined8 *)((long)plVar17 + uVar18);
            uVar18 = uVar11;
          } while (uVar20 < ((uint)uVar23 & 0xfffffff8));
          plVar26 = (long *)((long)local_78 + uVar11);
          plVar21 = (long *)(uVar11 + (long)plVar17);
        }
        lVar12 = 0;
        if ((uVar23 & 4) != 0) {
          *(int *)plVar26 = (int)*plVar21;
          lVar12 = 4;
        }
        if ((uVar23 & 2) != 0) {
          *(undefined2 *)((long)plVar26 + lVar12) = *(undefined2 *)((long)plVar21 + lVar12);
          lVar12 = lVar12 + 2;
        }
        local_88 = local_78;
        if ((uVar23 & 1) != 0) {
          *(undefined1 *)((long)plVar26 + lVar12) = *(undefined1 *)((long)plVar21 + lVar12);
        }
      }
      else {
        local_78[0] = plVar16[2];
        local_88 = (long *)*plVar16;
      }
      local_80 = plVar16[1];
      *plVar16 = (long)plVar17;
      plVar16[1] = 0;
      *(undefined1 *)(plVar16 + 2) = 0;
      if (0x3fffffffffffffffU - local_80 < 10) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      plVar17 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x101793);
      puVar2 = (ulong *)(plVar17 + 2);
      if ((ulong *)*plVar17 == puVar2) {
        uVar23 = plVar17[1] + 1;
        puVar22 = puVar2;
        puVar25 = local_58;
        if (7 < (uint)uVar23) {
          uVar18 = 0;
          do {
            uVar20 = (int)uVar18 + 8;
            uVar11 = (ulong)uVar20;
            *(undefined8 *)((long)local_58 + uVar18) = *(undefined8 *)((long)puVar2 + uVar18);
            uVar18 = uVar11;
          } while (uVar20 < ((uint)uVar23 & 0xfffffff8));
          puVar25 = (ulong *)((long)local_58 + uVar11);
          puVar22 = (ulong *)(uVar11 + (long)puVar2);
        }
        lVar12 = 0;
        if ((uVar23 & 4) != 0) {
          *(int *)puVar25 = (int)*puVar22;
          lVar12 = 4;
        }
        if ((uVar23 & 2) != 0) {
          *(undefined2 *)((long)puVar25 + lVar12) = *(undefined2 *)((long)puVar22 + lVar12);
          lVar12 = lVar12 + 2;
        }
        local_68 = local_58;
        if ((uVar23 & 1) != 0) {
          *(undefined1 *)((long)puVar25 + lVar12) = *(undefined1 *)((long)puVar22 + lVar12);
        }
      }
      else {
        local_58[0] = plVar17[2];
        local_68 = (ulong *)*plVar17;
      }
      local_60 = plVar17[1];
      *plVar17 = (long)puVar2;
      plVar17[1] = 0;
      *(undefined1 *)(plVar17 + 2) = 0;
      local_150 = (double)embree::BVHN<4>::preBuild(psVar24);
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      if (local_a8[0] != local_98) {
        operator_delete(local_a8[0],local_98[0] + 1);
      }
      goto LAB_00103921;
    }
LAB_00103e63:
    lVar12 = *(long *)psVar24;
  }
  else {
    uVar20 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    if (uVar20 == *(uint *)(this + 0xa0)) {
      if (*(long *)(this + 0x88) != -1) {
LAB_00103d7d:
        FastAllocator::reset((FastAllocator *)(psVar24 + 0x78));
        pvVar8 = *(void **)(this + 0x48);
        lVar12 = *(long *)(this + 0x40);
        if (pvVar8 != (void *)0x0) {
          if ((ulong)(lVar12 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar8);
          }
          else {
            embree::os_free(pvVar8,lVar12 << 5,(bool)this[0x30]);
          }
        }
        if (lVar12 != 0) {
          (**(code **)**(undefined8 **)(this + 0x28))
                    (*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
        }
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x38) = 0;
        *(long *)(this + 0x28) = *(long *)(psVar24 + 0x1c8);
        this[0x30] = *(BVHNBuilderSAH<4,embree::TriangleMv<4>> *)(psVar24 + 0x1d0);
        *(long *)(this + 0x38) = *(long *)(psVar24 + 0x1d8);
        *(long *)(psVar24 + 0x1d8) = 0;
        *(long *)(this + 0x40) = *(long *)(psVar24 + 0x1e0);
        *(long *)(psVar24 + 0x1e0) = 0;
        *(long *)(this + 0x48) = *(long *)(psVar24 + 0x1e8);
        *(long *)(psVar24 + 0x1e8) = 0;
        goto LAB_00103e3d;
      }
      pvVar27 = (vector_t *)(ulong)uVar20;
      *(uint *)(this + 0xa0) = uVar20;
      if (pvVar27 != (vector_t *)0x0) goto LAB_001038c9;
      goto LAB_00103e63;
    }
    pFVar1 = (FastAllocator *)(psVar24 + 0x78);
    FastAllocator::internal_fix_used_blocks(pFVar1);
    plVar17 = *(long **)(psVar24 + 0x1a8);
    plVar16 = *(long **)(psVar24 + 0x1b0);
    if (plVar16 != plVar17) {
      do {
        while( true ) {
          lVar12 = *plVar17;
          if (pFVar1 != *(FastAllocator **)(lVar12 + 8)) break;
          embree::MutexSys::lock();
          if (pFVar1 == *(FastAllocator **)(lVar12 + 8)) {
            LOCK();
            plVar26 = (long *)(*(long *)(lVar12 + 8) + 0x118);
            *plVar26 = *plVar26 + *(long *)(lVar12 + 0xa8) + *(long *)(lVar12 + 0x68);
            UNLOCK();
            LOCK();
            plVar26 = (long *)(*(long *)(lVar12 + 8) + 0x120);
            *plVar26 = *plVar26 +
                       (((*(long *)(lVar12 + 0x98) + *(long *)(lVar12 + 0x58)) -
                        *(long *)(lVar12 + 0x50)) - *(long *)(lVar12 + 0x90));
            UNLOCK();
            LOCK();
            plVar26 = (long *)(*(long *)(lVar12 + 8) + 0x128);
            *plVar26 = *plVar26 + *(long *)(lVar12 + 0xb0) + *(long *)(lVar12 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar12 + 0x48) = 0;
            *(undefined8 *)(lVar12 + 0x58) = 0;
            *(undefined8 *)(lVar12 + 0x50) = 0;
            *(undefined8 *)(lVar12 + 0x68) = 0;
            *(undefined8 *)(lVar12 + 0x70) = 0;
            *(undefined8 *)(lVar12 + 0x60) = 0;
            *(undefined8 *)(lVar12 + 0x88) = 0;
            *(undefined8 *)(lVar12 + 0x98) = 0;
            *(undefined8 *)(lVar12 + 0x90) = 0;
            *(undefined8 *)(lVar12 + 0xa8) = 0;
            *(undefined8 *)(lVar12 + 0xb0) = 0;
            *(undefined8 *)(lVar12 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar12 + 8) = 0;
            UNLOCK();
          }
          plVar17 = plVar17 + 1;
          embree::MutexSys::unlock();
          if (plVar16 == plVar17) goto LAB_00103c06;
        }
        plVar17 = plVar17 + 1;
      } while (plVar16 != plVar17);
LAB_00103c06:
      if (*(long *)(psVar24 + 0x1b0) != *(long *)(psVar24 + 0x1a8)) {
        *(long *)(psVar24 + 0x1b0) = *(long *)(psVar24 + 0x1a8);
      }
    }
    LOCK();
    *(long *)(psVar24 + 400) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar24 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar24 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(psVar24 + 0x170) != 0) {
      sVar4 = psVar24[0x180];
      pDVar5 = *(Device **)(psVar24 + 0x78);
      pBVar10 = *(Block **)(psVar24 + 0x170);
      while (pBVar10 != (Block *)0x0) {
        pBVar6 = *(Block **)(pBVar10 + 0x18);
        FastAllocator::Block::clear_block(pBVar10,pDVar5,(bool)sVar4);
        pBVar10 = pBVar6;
      }
    }
    LOCK();
    *(long *)(psVar24 + 0x170) = 0;
    UNLOCK();
    if (*(long *)(psVar24 + 0x178) != 0) {
      sVar4 = psVar24[0x180];
      pDVar5 = *(Device **)(psVar24 + 0x78);
      pBVar10 = *(Block **)(psVar24 + 0x178);
      while (pBVar10 != (Block *)0x0) {
        pBVar6 = *(Block **)(pBVar10 + 0x18);
        FastAllocator::Block::clear_block(pBVar10,pDVar5,(bool)sVar4);
        pBVar10 = pBVar6;
      }
    }
    LOCK();
    *(long *)(psVar24 + 0x178) = 0;
    UNLOCK();
    psVar13 = psVar24 + 0xf0;
    do {
      LOCK();
      *(long *)psVar13 = 0;
      UNLOCK();
      LOCK();
      *(long *)(psVar13 + 0x40) = 0;
      UNLOCK();
      psVar13 = psVar13 + 8;
    } while (psVar24 + 0x130 != psVar13);
    pvVar8 = *(void **)(psVar24 + 0x1e8);
    lVar12 = *(long *)(psVar24 + 0x1e0);
    if (pvVar8 != (void *)0x0) {
      if ((ulong)(lVar12 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar8);
      }
      else {
        embree::os_free(pvVar8,lVar12 << 5,(bool)psVar24[0x1d0]);
      }
    }
    if (lVar12 != 0) {
      (**(code **)**(undefined8 **)(psVar24 + 0x1c8))
                (*(undefined8 **)(psVar24 + 0x1c8),lVar12 * -0x20,1);
    }
    *(long *)(psVar24 + 0x1e8) = 0;
    *(long *)(psVar24 + 0x1e0) = 0;
    *(long *)(psVar24 + 0x1d8) = 0;
    if (*(long *)(this + 0x88) != -1) {
      psVar24 = *(string **)(this + 0x10);
      goto LAB_00103d7d;
    }
LAB_00103e3d:
    if (*(long *)(this + 0x20) == 0) {
      psVar24 = *(string **)(this + 0x10);
      goto LAB_0010444e;
    }
    uVar20 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    psVar24 = *(string **)(this + 0x10);
    pvVar27 = (vector_t *)(ulong)uVar20;
    *(uint *)(this + 0xa0) = uVar20;
    if (pvVar27 == (vector_t *)0x0) goto LAB_00103e63;
LAB_001038c9:
    local_60 = 0;
    local_58[0] = local_58[0] & 0xffffffffffffff00;
    local_68 = local_58;
    local_150 = (double)embree::BVHN<4>::preBuild(psVar24);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
LAB_00103921:
    if (this[0x9c] != (BVHNBuilderSAH<4,embree::TriangleMv<4>>)0x0) {
      if (pvVar27 < (vector_t *)0xf4240) {
        *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
      }
      else {
        *(ulong *)(this + 0x88) = (ulong)pvVar27 / 1000;
      }
    }
    if (*(long *)(this + 0x20) != 0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x1c0) = 1;
    }
    dVar29 = (double)((ulong)(pvVar27 + 3) >> 2) * __LC3 * __LC13;
    if (__LC5 <= dVar29) {
      uVar23 = (long)(dVar29 - __LC5) ^ 0x8000000000000000;
    }
    else {
      uVar23 = (ulong)dVar29;
    }
    uVar23 = uVar23 + ((ulong)((long)pvVar27 * 0xe0) >> 4);
    FastAllocator::init_estimate((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar23);
    lVar12 = *(long *)(this + 0x10);
    if (uVar23 == 0) {
LAB_00103ef8:
      uVar23 = 0x400;
LAB_00103efd:
      pvVar28 = *(vector_t **)(this + 0x40);
      *(ulong *)(this + 0x80) = uVar23;
      if (pvVar27 <= pvVar28) goto LAB_00103abb;
LAB_00103f11:
      if (pvVar28 == (vector_t *)0x0) {
        pvVar28 = pvVar27;
        if (pvVar27 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar27;
        }
      }
      else {
        do {
          pvVar28 = (vector_t *)((long)pvVar28 * 2);
          if (pvVar28 == (vector_t *)0x0) {
            pvVar28 = (vector_t *)0x1;
          }
        } while (pvVar28 < pvVar27);
        if (pvVar27 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar27;
        }
      }
      puVar7 = *(undefined8 **)(this + 0x48);
      uVar23 = (long)pvVar28 << 5;
      (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),uVar23,0);
      if (uVar23 < 0x1c00000) {
        lVar12 = embree::alignedMalloc(uVar23,0x20);
      }
      else {
        lVar12 = embree::os_malloc(uVar23,(bool *)(this + 0x30));
      }
      *(long *)(this + 0x48) = lVar12;
      if (*(long *)(this + 0x38) != 0) {
        puVar19 = puVar7;
        uVar23 = 0;
        while( true ) {
          uVar15 = puVar19[1];
          puVar14 = (undefined8 *)(lVar12 + uVar23 * 0x20);
          *puVar14 = *puVar19;
          puVar14[1] = uVar15;
          uVar15 = puVar19[3];
          puVar14[2] = puVar19[2];
          puVar14[3] = uVar15;
          if (*(ulong *)(this + 0x38) <= uVar23 + 1) break;
          lVar12 = *(long *)(this + 0x48);
          puVar19 = puVar19 + 4;
          uVar23 = uVar23 + 1;
        }
      }
      lVar12 = *(long *)(this + 0x40);
      if (puVar7 != (undefined8 *)0x0) {
        if ((ulong)(lVar12 << 5) < 0x1c00000) {
          embree::alignedFree(puVar7);
        }
        else {
          embree::os_free(puVar7,lVar12 << 5,(bool)this[0x30]);
        }
      }
      if (lVar12 != 0) {
        (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
      }
      *(vector_t **)(this + 0x38) = pvVar27;
      *(vector_t **)(this + 0x40) = pvVar28;
    }
    else {
      bVar3 = *(byte *)(lVar12 + 0x182);
      uVar11 = embree::TaskScheduler::threadCount();
      lVar12 = *(long *)(lVar12 + 0x88) * (2 - (ulong)bVar3);
      uVar18 = lVar12 * 0x14;
      if (uVar11 <= ((uVar23 - 1) + uVar18) / uVar18) goto LAB_00103ef8;
      uVar18 = lVar12 * 0x50;
      if ((long)uVar18 < 0) {
        dVar29 = (double)(uVar18 >> 1) + (double)(uVar18 >> 1);
      }
      else {
        dVar29 = (double)(long)uVar18;
      }
      dVar29 = dVar29 / ((double)uVar23 / (double)pvVar27);
      if ((double)((ulong)dVar29 & _LC9) < _LC6) {
        dVar29 = (double)((ulong)((double)(long)dVar29 +
                                 (double)(-(ulong)((double)(long)dVar29 < dVar29) & _LC8)) |
                         ~_LC9 & (ulong)dVar29);
      }
      if (__LC5 <= dVar29) {
        uVar23 = (long)(dVar29 - __LC5) ^ 0x8000000000000000;
        goto LAB_00103efd;
      }
      pvVar28 = *(vector_t **)(this + 0x40);
      *(long *)(this + 0x80) = (long)dVar29;
      if (pvVar28 < pvVar27) goto LAB_00103f11;
LAB_00103abb:
      *(vector_t **)(this + 0x38) = pvVar27;
    }
    if (*(long *)(this + 0x20) == 0) {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x90),0,
                 pvVar27,this + 0x28,*(long *)(*(long *)(this + 0x10) + 0x68) + 600);
    }
    else {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,(uint)*(long *)(this + 0x20),(ulong)*(uint *)(this + 0x98),
                 pvVar27,(BuildProgressMonitor *)(this + 0x28));
    }
    psVar24 = *(string **)(this + 0x10);
    if (local_b0 != local_b8) {
      local_138 = *(undefined8 *)(this + 0x50);
      uStack_130 = *(undefined8 *)(this + 0x58);
      local_128 = *(undefined8 *)(this + 0x60);
      uStack_120 = *(undefined8 *)(this + 0x68);
      local_118 = *(undefined8 *)(this + 0x70);
      uStack_110 = *(undefined8 *)(this + 0x78);
      local_108 = *(undefined8 *)(this + 0x80);
      uStack_100 = *(undefined8 *)(this + 0x88);
      local_148 = &PTR_createLeaf_00107720;
      local_140 = psVar24;
      uVar15 = embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build
                         (&local_148,psVar24 + 0x78,*(long *)(psVar24 + 0x68) + 600,
                          *(undefined8 *)(this + 0x48),(Geometry *)&local_f8);
      local_138 = local_f8;
      uStack_130 = uStack_f0;
      local_128 = local_e8;
      uStack_120 = uStack_e0;
      local_118 = local_f8;
      uStack_110 = uStack_f0;
      local_108 = local_e8;
      uStack_100 = uStack_e0;
      embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),uVar15,&local_138,local_b0 - local_b8);
      embree::BVHN<4>::layoutLargeNodes(*(ulong *)(this + 0x10));
      if (*(long *)(this + 0x88) == -1) {
        if ((*(long *)(this + 0x18) != 0) && ((*(byte *)(*(long *)(this + 0x18) + 0x230) & 1) == 0))
        {
          pvVar8 = *(void **)(this + 0x48);
          lVar12 = *(long *)(this + 0x40);
          if (pvVar8 != (void *)0x0) {
            if ((ulong)(lVar12 << 5) < 0x1c00000) {
              embree::alignedFree(pvVar8);
            }
            else {
              embree::os_free(pvVar8,lVar12 << 5,(bool)this[0x30]);
            }
          }
          if (lVar12 != 0) {
            (**(code **)**(undefined8 **)(this + 0x28))
                      (*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
          }
          *(undefined8 *)(this + 0x48) = 0;
          *(undefined8 *)(this + 0x40) = 0;
          *(undefined8 *)(this + 0x38) = 0;
        }
      }
      else {
        lVar12 = *(long *)(this + 0x10);
        pvVar8 = *(void **)(lVar12 + 0x1e8);
        lVar9 = *(long *)(lVar12 + 0x1e0);
        if (pvVar8 != (void *)0x0) {
          if ((ulong)(lVar9 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar8);
          }
          else {
            embree::os_free(pvVar8,lVar9 << 5,*(bool *)(lVar12 + 0x1d0));
          }
        }
        if (lVar9 != 0) {
          (**(code **)**(undefined8 **)(lVar12 + 0x1c8))
                    (*(undefined8 **)(lVar12 + 0x1c8),lVar9 * -0x20,1);
        }
        *(undefined8 *)(lVar12 + 0x1e8) = 0;
        *(undefined8 *)(lVar12 + 0x1e0) = 0;
        *(undefined8 *)(lVar12 + 0x1d8) = 0;
        *(undefined8 *)(lVar12 + 0x1c8) = *(undefined8 *)(this + 0x28);
        *(BVHNBuilderSAH<4,embree::TriangleMv<4>> *)(lVar12 + 0x1d0) = this[0x30];
        *(undefined8 *)(lVar12 + 0x1d8) = *(undefined8 *)(this + 0x38);
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(lVar12 + 0x1e0) = *(undefined8 *)(this + 0x40);
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(lVar12 + 0x1e8) = *(undefined8 *)(this + 0x48);
        *(undefined8 *)(this + 0x48) = 0;
      }
      lVar12 = *(long *)(this + 0x10);
      pFVar1 = (FastAllocator *)(lVar12 + 0x78);
      FastAllocator::internal_fix_used_blocks(pFVar1);
      plVar17 = *(long **)(lVar12 + 0x1a8);
      plVar16 = *(long **)(lVar12 + 0x1b0);
      if (plVar17 != plVar16) {
        do {
          while( true ) {
            lVar9 = *plVar17;
            if (pFVar1 != *(FastAllocator **)(lVar9 + 8)) break;
            embree::MutexSys::lock();
            if (pFVar1 == *(FastAllocator **)(lVar9 + 8)) {
              LOCK();
              plVar26 = (long *)(*(long *)(lVar9 + 8) + 0x118);
              *plVar26 = *plVar26 + *(long *)(lVar9 + 0xa8) + *(long *)(lVar9 + 0x68);
              UNLOCK();
              LOCK();
              plVar26 = (long *)(*(long *)(lVar9 + 8) + 0x120);
              *plVar26 = *plVar26 +
                         (((*(long *)(lVar9 + 0x98) + *(long *)(lVar9 + 0x58)) -
                          *(long *)(lVar9 + 0x50)) - *(long *)(lVar9 + 0x90));
              UNLOCK();
              LOCK();
              plVar26 = (long *)(*(long *)(lVar9 + 8) + 0x128);
              *plVar26 = *plVar26 + *(long *)(lVar9 + 0xb0) + *(long *)(lVar9 + 0x70);
              UNLOCK();
              *(undefined8 *)(lVar9 + 0x48) = 0;
              *(undefined8 *)(lVar9 + 0x58) = 0;
              *(undefined8 *)(lVar9 + 0x50) = 0;
              *(undefined8 *)(lVar9 + 0x68) = 0;
              *(undefined8 *)(lVar9 + 0x70) = 0;
              *(undefined8 *)(lVar9 + 0x60) = 0;
              *(undefined8 *)(lVar9 + 0x88) = 0;
              *(undefined8 *)(lVar9 + 0x98) = 0;
              *(undefined8 *)(lVar9 + 0x90) = 0;
              *(undefined8 *)(lVar9 + 0xa8) = 0;
              *(undefined8 *)(lVar9 + 0xb0) = 0;
              *(undefined8 *)(lVar9 + 0xa0) = 0;
              LOCK();
              *(undefined8 *)(lVar9 + 8) = 0;
              UNLOCK();
            }
            plVar17 = plVar17 + 1;
            embree::MutexSys::unlock();
            if (plVar16 == plVar17) goto LAB_0010436e;
          }
          plVar17 = plVar17 + 1;
        } while (plVar16 != plVar17);
LAB_0010436e:
        if (*(long *)(lVar12 + 0x1a8) != *(long *)(lVar12 + 0x1b0)) {
          *(long *)(lVar12 + 0x1b0) = *(long *)(lVar12 + 0x1a8);
        }
      }
      embree::BVHN<4>::postBuild(local_150);
      goto LAB_00103ecc;
    }
    lVar12 = *(long *)psVar24;
  }
  (**(code **)(lVar12 + 0x28))(psVar24);
  pvVar8 = *(void **)(this + 0x48);
  lVar12 = *(long *)(this + 0x40);
  if (pvVar8 != (void *)0x0) {
    if ((ulong)(lVar12 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar8);
    }
    else {
      embree::os_free(pvVar8,lVar12 << 5,(bool)this[0x30]);
    }
  }
  if (lVar12 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
LAB_00103ecc:
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
  FastAllocator *pFVar1;
  ulong *puVar2;
  byte bVar3;
  string sVar4;
  Device *pDVar5;
  Block *pBVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long lVar9;
  Block *pBVar10;
  ulong uVar11;
  long lVar12;
  string *psVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  long *plVar21;
  ulong *puVar22;
  ulong uVar23;
  string *psVar24;
  ulong *puVar25;
  long *plVar26;
  vector_t *pvVar27;
  vector_t *pvVar28;
  long in_FS_OFFSET;
  double dVar29;
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
  
  psVar24 = *(string **)(this + 0x10);
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) == 0) {
    if (*(long *)(this + 0x88) != -1) goto LAB_00104ead;
LAB_0010557e:
    uVar23 = *(ulong *)(this + 0x90);
    lVar12 = *(long *)(this + 0x18);
    pvVar27 = (vector_t *)0x0;
    if ((uVar23 & 0x100000) != 0) {
      pvVar27 = *(vector_t **)(lVar12 + 0x288);
    }
    if ((uVar23 & 0x200000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x298);
    }
    if ((uVar23 & 0xf) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2b8);
    }
    if ((uVar23 & 0x77770) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2a8);
    }
    if ((uVar23 & 0xe000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x338);
    }
    if ((uVar23 & 0x800000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2c8);
    }
    if ((uVar23 & 0x20000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2d8);
    }
    if ((uVar23 & 0x40000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2e8);
    }
    if ((uVar23 & 0x80000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x2f8);
    }
    if ((uVar23 & 0x1000000) != 0) {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x308);
    }
    if ((uVar23 & 0x400000) == 0) {
      *(int *)(this + 0xa0) = (int)pvVar27;
    }
    else {
      pvVar27 = pvVar27 + *(long *)(lVar12 + 0x318);
      *(int *)(this + 0xa0) = (int)pvVar27;
    }
    if (pvVar27 != (vector_t *)0x0) {
      local_a8[0] = local_98;
      std::__cxx11::string::_M_construct((ulong)local_a8,'\x01');
      *(undefined1 *)local_a8[0] = 0x34;
      plVar16 = (long *)std::__cxx11::string::_M_replace((ulong)local_a8,0,(char *)0x0,0x10271a);
      plVar17 = plVar16 + 2;
      if ((long *)*plVar16 == plVar17) {
        uVar23 = plVar16[1] + 1;
        plVar21 = plVar17;
        plVar26 = local_78;
        if (7 < (uint)uVar23) {
          uVar18 = 0;
          do {
            uVar20 = (int)uVar18 + 8;
            uVar11 = (ulong)uVar20;
            *(undefined8 *)((long)local_78 + uVar18) = *(undefined8 *)((long)plVar17 + uVar18);
            uVar18 = uVar11;
          } while (uVar20 < ((uint)uVar23 & 0xfffffff8));
          plVar26 = (long *)((long)local_78 + uVar11);
          plVar21 = (long *)(uVar11 + (long)plVar17);
        }
        lVar12 = 0;
        if ((uVar23 & 4) != 0) {
          *(int *)plVar26 = (int)*plVar21;
          lVar12 = 4;
        }
        if ((uVar23 & 2) != 0) {
          *(undefined2 *)((long)plVar26 + lVar12) = *(undefined2 *)((long)plVar21 + lVar12);
          lVar12 = lVar12 + 2;
        }
        local_88 = local_78;
        if ((uVar23 & 1) != 0) {
          *(undefined1 *)((long)plVar26 + lVar12) = *(undefined1 *)((long)plVar21 + lVar12);
        }
      }
      else {
        local_78[0] = plVar16[2];
        local_88 = (long *)*plVar16;
      }
      local_80 = plVar16[1];
      *plVar16 = (long)plVar17;
      plVar16[1] = 0;
      *(undefined1 *)(plVar16 + 2) = 0;
      if (0x3fffffffffffffffU - local_80 < 10) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("basic_string::append");
      }
      plVar17 = (long *)std::__cxx11::string::_M_append((char *)&local_88,0x101793);
      puVar2 = (ulong *)(plVar17 + 2);
      if ((ulong *)*plVar17 == puVar2) {
        uVar23 = plVar17[1] + 1;
        puVar22 = puVar2;
        puVar25 = local_58;
        if (7 < (uint)uVar23) {
          uVar18 = 0;
          do {
            uVar20 = (int)uVar18 + 8;
            uVar11 = (ulong)uVar20;
            *(undefined8 *)((long)local_58 + uVar18) = *(undefined8 *)((long)puVar2 + uVar18);
            uVar18 = uVar11;
          } while (uVar20 < ((uint)uVar23 & 0xfffffff8));
          puVar25 = (ulong *)((long)local_58 + uVar11);
          puVar22 = (ulong *)(uVar11 + (long)puVar2);
        }
        lVar12 = 0;
        if ((uVar23 & 4) != 0) {
          *(int *)puVar25 = (int)*puVar22;
          lVar12 = 4;
        }
        if ((uVar23 & 2) != 0) {
          *(undefined2 *)((long)puVar25 + lVar12) = *(undefined2 *)((long)puVar22 + lVar12);
          lVar12 = lVar12 + 2;
        }
        local_68 = local_58;
        if ((uVar23 & 1) != 0) {
          *(undefined1 *)((long)puVar25 + lVar12) = *(undefined1 *)((long)puVar22 + lVar12);
        }
      }
      else {
        local_58[0] = plVar17[2];
        local_68 = (ulong *)*plVar17;
      }
      local_60 = plVar17[1];
      *plVar17 = (long)puVar2;
      plVar17[1] = 0;
      *(undefined1 *)(plVar17 + 2) = 0;
      local_150 = (double)embree::BVHN<4>::preBuild(psVar24);
      if (local_68 != local_58) {
        operator_delete(local_68,local_58[0] + 1);
      }
      if (local_88 != local_78) {
        operator_delete(local_88,local_78[0] + 1);
      }
      if (local_a8[0] != local_98) {
        operator_delete(local_a8[0],local_98[0] + 1);
      }
      goto LAB_00104a51;
    }
LAB_00104f93:
    lVar12 = *(long *)psVar24;
  }
  else {
    uVar20 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    if (uVar20 == *(uint *)(this + 0xa0)) {
      if (*(long *)(this + 0x88) != -1) {
LAB_00104ead:
        FastAllocator::reset((FastAllocator *)(psVar24 + 0x78));
        pvVar8 = *(void **)(this + 0x48);
        lVar12 = *(long *)(this + 0x40);
        if (pvVar8 != (void *)0x0) {
          if ((ulong)(lVar12 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar8);
          }
          else {
            embree::os_free(pvVar8,lVar12 << 5,(bool)this[0x30]);
          }
        }
        if (lVar12 != 0) {
          (**(code **)**(undefined8 **)(this + 0x28))
                    (*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
        }
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x38) = 0;
        *(long *)(this + 0x28) = *(long *)(psVar24 + 0x1c8);
        this[0x30] = *(BVHNBuilderSAH<4,embree::TriangleM<4>> *)(psVar24 + 0x1d0);
        *(long *)(this + 0x38) = *(long *)(psVar24 + 0x1d8);
        *(long *)(psVar24 + 0x1d8) = 0;
        *(long *)(this + 0x40) = *(long *)(psVar24 + 0x1e0);
        *(long *)(psVar24 + 0x1e0) = 0;
        *(long *)(this + 0x48) = *(long *)(psVar24 + 0x1e8);
        *(long *)(psVar24 + 0x1e8) = 0;
        goto LAB_00104f6d;
      }
      pvVar27 = (vector_t *)(ulong)uVar20;
      *(uint *)(this + 0xa0) = uVar20;
      if (pvVar27 != (vector_t *)0x0) goto LAB_001049f9;
      goto LAB_00104f93;
    }
    pFVar1 = (FastAllocator *)(psVar24 + 0x78);
    FastAllocator::internal_fix_used_blocks(pFVar1);
    plVar17 = *(long **)(psVar24 + 0x1a8);
    plVar16 = *(long **)(psVar24 + 0x1b0);
    if (plVar16 != plVar17) {
      do {
        while( true ) {
          lVar12 = *plVar17;
          if (pFVar1 != *(FastAllocator **)(lVar12 + 8)) break;
          embree::MutexSys::lock();
          if (pFVar1 == *(FastAllocator **)(lVar12 + 8)) {
            LOCK();
            plVar26 = (long *)(*(long *)(lVar12 + 8) + 0x118);
            *plVar26 = *plVar26 + *(long *)(lVar12 + 0xa8) + *(long *)(lVar12 + 0x68);
            UNLOCK();
            LOCK();
            plVar26 = (long *)(*(long *)(lVar12 + 8) + 0x120);
            *plVar26 = *plVar26 +
                       (((*(long *)(lVar12 + 0x98) + *(long *)(lVar12 + 0x58)) -
                        *(long *)(lVar12 + 0x50)) - *(long *)(lVar12 + 0x90));
            UNLOCK();
            LOCK();
            plVar26 = (long *)(*(long *)(lVar12 + 8) + 0x128);
            *plVar26 = *plVar26 + *(long *)(lVar12 + 0xb0) + *(long *)(lVar12 + 0x70);
            UNLOCK();
            *(undefined8 *)(lVar12 + 0x48) = 0;
            *(undefined8 *)(lVar12 + 0x58) = 0;
            *(undefined8 *)(lVar12 + 0x50) = 0;
            *(undefined8 *)(lVar12 + 0x68) = 0;
            *(undefined8 *)(lVar12 + 0x70) = 0;
            *(undefined8 *)(lVar12 + 0x60) = 0;
            *(undefined8 *)(lVar12 + 0x88) = 0;
            *(undefined8 *)(lVar12 + 0x98) = 0;
            *(undefined8 *)(lVar12 + 0x90) = 0;
            *(undefined8 *)(lVar12 + 0xa8) = 0;
            *(undefined8 *)(lVar12 + 0xb0) = 0;
            *(undefined8 *)(lVar12 + 0xa0) = 0;
            LOCK();
            *(undefined8 *)(lVar12 + 8) = 0;
            UNLOCK();
          }
          plVar17 = plVar17 + 1;
          embree::MutexSys::unlock();
          if (plVar16 == plVar17) goto LAB_00104d36;
        }
        plVar17 = plVar17 + 1;
      } while (plVar16 != plVar17);
LAB_00104d36:
      if (*(long *)(psVar24 + 0x1b0) != *(long *)(psVar24 + 0x1a8)) {
        *(long *)(psVar24 + 0x1b0) = *(long *)(psVar24 + 0x1a8);
      }
    }
    LOCK();
    *(long *)(psVar24 + 400) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar24 + 0x198) = 0;
    UNLOCK();
    LOCK();
    *(long *)(psVar24 + 0x1a0) = 0;
    UNLOCK();
    if (*(long *)(psVar24 + 0x170) != 0) {
      sVar4 = psVar24[0x180];
      pDVar5 = *(Device **)(psVar24 + 0x78);
      pBVar10 = *(Block **)(psVar24 + 0x170);
      while (pBVar10 != (Block *)0x0) {
        pBVar6 = *(Block **)(pBVar10 + 0x18);
        FastAllocator::Block::clear_block(pBVar10,pDVar5,(bool)sVar4);
        pBVar10 = pBVar6;
      }
    }
    LOCK();
    *(long *)(psVar24 + 0x170) = 0;
    UNLOCK();
    if (*(long *)(psVar24 + 0x178) != 0) {
      sVar4 = psVar24[0x180];
      pDVar5 = *(Device **)(psVar24 + 0x78);
      pBVar10 = *(Block **)(psVar24 + 0x178);
      while (pBVar10 != (Block *)0x0) {
        pBVar6 = *(Block **)(pBVar10 + 0x18);
        FastAllocator::Block::clear_block(pBVar10,pDVar5,(bool)sVar4);
        pBVar10 = pBVar6;
      }
    }
    LOCK();
    *(long *)(psVar24 + 0x178) = 0;
    UNLOCK();
    psVar13 = psVar24 + 0xf0;
    do {
      LOCK();
      *(long *)psVar13 = 0;
      UNLOCK();
      LOCK();
      *(long *)(psVar13 + 0x40) = 0;
      UNLOCK();
      psVar13 = psVar13 + 8;
    } while (psVar24 + 0x130 != psVar13);
    pvVar8 = *(void **)(psVar24 + 0x1e8);
    lVar12 = *(long *)(psVar24 + 0x1e0);
    if (pvVar8 != (void *)0x0) {
      if ((ulong)(lVar12 << 5) < 0x1c00000) {
        embree::alignedFree(pvVar8);
      }
      else {
        embree::os_free(pvVar8,lVar12 << 5,(bool)psVar24[0x1d0]);
      }
    }
    if (lVar12 != 0) {
      (**(code **)**(undefined8 **)(psVar24 + 0x1c8))
                (*(undefined8 **)(psVar24 + 0x1c8),lVar12 * -0x20,1);
    }
    *(long *)(psVar24 + 0x1e8) = 0;
    *(long *)(psVar24 + 0x1e0) = 0;
    *(long *)(psVar24 + 0x1d8) = 0;
    if (*(long *)(this + 0x88) != -1) {
      psVar24 = *(string **)(this + 0x10);
      goto LAB_00104ead;
    }
LAB_00104f6d:
    if (*(long *)(this + 0x20) == 0) {
      psVar24 = *(string **)(this + 0x10);
      goto LAB_0010557e;
    }
    uVar20 = *(uint *)(*(long *)(this + 0x20) + 0x20);
    psVar24 = *(string **)(this + 0x10);
    pvVar27 = (vector_t *)(ulong)uVar20;
    *(uint *)(this + 0xa0) = uVar20;
    if (pvVar27 == (vector_t *)0x0) goto LAB_00104f93;
LAB_001049f9:
    local_60 = 0;
    local_58[0] = local_58[0] & 0xffffffffffffff00;
    local_68 = local_58;
    local_150 = (double)embree::BVHN<4>::preBuild(psVar24);
    if (local_68 != local_58) {
      operator_delete(local_68,local_58[0] + 1);
    }
LAB_00104a51:
    if (this[0x9c] != (BVHNBuilderSAH<4,embree::TriangleM<4>>)0x0) {
      if (pvVar27 < (vector_t *)0xf4240) {
        *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
      }
      else {
        *(ulong *)(this + 0x88) = (ulong)pvVar27 / 1000;
      }
    }
    if (*(long *)(this + 0x20) != 0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x1c0) = 1;
    }
    dVar29 = (double)((ulong)(pvVar27 + 3) >> 2) * __LC3 * __LC13;
    if (__LC5 <= dVar29) {
      uVar23 = (long)(dVar29 - __LC5) ^ 0x8000000000000000;
    }
    else {
      uVar23 = (ulong)dVar29;
    }
    uVar23 = uVar23 + ((ulong)((long)pvVar27 * 0xe0) >> 4);
    FastAllocator::init_estimate((FastAllocator *)(*(long *)(this + 0x10) + 0x78),uVar23);
    lVar12 = *(long *)(this + 0x10);
    if (uVar23 == 0) {
LAB_00105028:
      uVar23 = 0x400;
LAB_0010502d:
      pvVar28 = *(vector_t **)(this + 0x40);
      *(ulong *)(this + 0x80) = uVar23;
      if (pvVar27 <= pvVar28) goto LAB_00104beb;
LAB_00105041:
      if (pvVar28 == (vector_t *)0x0) {
        pvVar28 = pvVar27;
        if (pvVar27 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar27;
        }
      }
      else {
        do {
          pvVar28 = (vector_t *)((long)pvVar28 * 2);
          if (pvVar28 == (vector_t *)0x0) {
            pvVar28 = (vector_t *)0x1;
          }
        } while (pvVar28 < pvVar27);
        if (pvVar27 < *(vector_t **)(this + 0x38)) {
          *(vector_t **)(this + 0x38) = pvVar27;
        }
      }
      puVar7 = *(undefined8 **)(this + 0x48);
      uVar23 = (long)pvVar28 << 5;
      (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),uVar23,0);
      if (uVar23 < 0x1c00000) {
        lVar12 = embree::alignedMalloc(uVar23,0x20);
      }
      else {
        lVar12 = embree::os_malloc(uVar23,(bool *)(this + 0x30));
      }
      *(long *)(this + 0x48) = lVar12;
      if (*(long *)(this + 0x38) != 0) {
        puVar19 = puVar7;
        uVar23 = 0;
        while( true ) {
          uVar15 = puVar19[1];
          puVar14 = (undefined8 *)(lVar12 + uVar23 * 0x20);
          *puVar14 = *puVar19;
          puVar14[1] = uVar15;
          uVar15 = puVar19[3];
          puVar14[2] = puVar19[2];
          puVar14[3] = uVar15;
          if (*(ulong *)(this + 0x38) <= uVar23 + 1) break;
          lVar12 = *(long *)(this + 0x48);
          puVar19 = puVar19 + 4;
          uVar23 = uVar23 + 1;
        }
      }
      lVar12 = *(long *)(this + 0x40);
      if (puVar7 != (undefined8 *)0x0) {
        if ((ulong)(lVar12 << 5) < 0x1c00000) {
          embree::alignedFree(puVar7);
        }
        else {
          embree::os_free(puVar7,lVar12 << 5,(bool)this[0x30]);
        }
      }
      if (lVar12 != 0) {
        (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
      }
      *(vector_t **)(this + 0x38) = pvVar27;
      *(vector_t **)(this + 0x40) = pvVar28;
    }
    else {
      bVar3 = *(byte *)(lVar12 + 0x182);
      uVar11 = embree::TaskScheduler::threadCount();
      lVar12 = *(long *)(lVar12 + 0x88) * (2 - (ulong)bVar3);
      uVar18 = lVar12 * 0x14;
      if (uVar11 <= ((uVar23 - 1) + uVar18) / uVar18) goto LAB_00105028;
      uVar18 = lVar12 * 0x50;
      if ((long)uVar18 < 0) {
        dVar29 = (double)(uVar18 >> 1) + (double)(uVar18 >> 1);
      }
      else {
        dVar29 = (double)(long)uVar18;
      }
      dVar29 = dVar29 / ((double)uVar23 / (double)pvVar27);
      if ((double)((ulong)dVar29 & _LC9) < _LC6) {
        dVar29 = (double)((ulong)((double)(long)dVar29 +
                                 (double)(-(ulong)((double)(long)dVar29 < dVar29) & _LC8)) |
                         ~_LC9 & (ulong)dVar29);
      }
      if (__LC5 <= dVar29) {
        uVar23 = (long)(dVar29 - __LC5) ^ 0x8000000000000000;
        goto LAB_0010502d;
      }
      pvVar28 = *(vector_t **)(this + 0x40);
      *(long *)(this + 0x80) = (long)dVar29;
      if (pvVar28 < pvVar27) goto LAB_00105041;
LAB_00104beb:
      *(vector_t **)(this + 0x38) = pvVar27;
    }
    if (*(long *)(this + 0x20) == 0) {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x90),0,
                 pvVar27,this + 0x28,*(long *)(*(long *)(this + 0x10) + 0x68) + 600);
    }
    else {
      embree::sse2::createPrimRefArray
                ((Geometry *)&local_f8,(uint)*(long *)(this + 0x20),(ulong)*(uint *)(this + 0x98),
                 pvVar27,(BuildProgressMonitor *)(this + 0x28));
    }
    psVar24 = *(string **)(this + 0x10);
    if (local_b0 != local_b8) {
      local_138 = *(undefined8 *)(this + 0x50);
      uStack_130 = *(undefined8 *)(this + 0x58);
      local_128 = *(undefined8 *)(this + 0x60);
      uStack_120 = *(undefined8 *)(this + 0x68);
      local_118 = *(undefined8 *)(this + 0x70);
      uStack_110 = *(undefined8 *)(this + 0x78);
      local_108 = *(undefined8 *)(this + 0x80);
      uStack_100 = *(undefined8 *)(this + 0x88);
      local_148 = &PTR_createLeaf_00107738;
      local_140 = psVar24;
      uVar15 = embree::sse2::BVHNBuilderVirtual<4>::BVHNBuilderV::build
                         (&local_148,psVar24 + 0x78,*(long *)(psVar24 + 0x68) + 600,
                          *(undefined8 *)(this + 0x48),(Geometry *)&local_f8);
      local_138 = local_f8;
      uStack_130 = uStack_f0;
      local_128 = local_e8;
      uStack_120 = uStack_e0;
      local_118 = local_f8;
      uStack_110 = uStack_f0;
      local_108 = local_e8;
      uStack_100 = uStack_e0;
      embree::BVHN<4>::set(*(undefined8 *)(this + 0x10),uVar15,&local_138,local_b0 - local_b8);
      embree::BVHN<4>::layoutLargeNodes(*(ulong *)(this + 0x10));
      if (*(long *)(this + 0x88) == -1) {
        if ((*(long *)(this + 0x18) != 0) && ((*(byte *)(*(long *)(this + 0x18) + 0x230) & 1) == 0))
        {
          pvVar8 = *(void **)(this + 0x48);
          lVar12 = *(long *)(this + 0x40);
          if (pvVar8 != (void *)0x0) {
            if ((ulong)(lVar12 << 5) < 0x1c00000) {
              embree::alignedFree(pvVar8);
            }
            else {
              embree::os_free(pvVar8,lVar12 << 5,(bool)this[0x30]);
            }
          }
          if (lVar12 != 0) {
            (**(code **)**(undefined8 **)(this + 0x28))
                      (*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
          }
          *(undefined8 *)(this + 0x48) = 0;
          *(undefined8 *)(this + 0x40) = 0;
          *(undefined8 *)(this + 0x38) = 0;
        }
      }
      else {
        lVar12 = *(long *)(this + 0x10);
        pvVar8 = *(void **)(lVar12 + 0x1e8);
        lVar9 = *(long *)(lVar12 + 0x1e0);
        if (pvVar8 != (void *)0x0) {
          if ((ulong)(lVar9 << 5) < 0x1c00000) {
            embree::alignedFree(pvVar8);
          }
          else {
            embree::os_free(pvVar8,lVar9 << 5,*(bool *)(lVar12 + 0x1d0));
          }
        }
        if (lVar9 != 0) {
          (**(code **)**(undefined8 **)(lVar12 + 0x1c8))
                    (*(undefined8 **)(lVar12 + 0x1c8),lVar9 * -0x20,1);
        }
        *(undefined8 *)(lVar12 + 0x1e8) = 0;
        *(undefined8 *)(lVar12 + 0x1e0) = 0;
        *(undefined8 *)(lVar12 + 0x1d8) = 0;
        *(undefined8 *)(lVar12 + 0x1c8) = *(undefined8 *)(this + 0x28);
        *(BVHNBuilderSAH<4,embree::TriangleM<4>> *)(lVar12 + 0x1d0) = this[0x30];
        *(undefined8 *)(lVar12 + 0x1d8) = *(undefined8 *)(this + 0x38);
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(lVar12 + 0x1e0) = *(undefined8 *)(this + 0x40);
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(lVar12 + 0x1e8) = *(undefined8 *)(this + 0x48);
        *(undefined8 *)(this + 0x48) = 0;
      }
      lVar12 = *(long *)(this + 0x10);
      pFVar1 = (FastAllocator *)(lVar12 + 0x78);
      FastAllocator::internal_fix_used_blocks(pFVar1);
      plVar17 = *(long **)(lVar12 + 0x1a8);
      plVar16 = *(long **)(lVar12 + 0x1b0);
      if (plVar17 != plVar16) {
        do {
          while( true ) {
            lVar9 = *plVar17;
            if (pFVar1 != *(FastAllocator **)(lVar9 + 8)) break;
            embree::MutexSys::lock();
            if (pFVar1 == *(FastAllocator **)(lVar9 + 8)) {
              LOCK();
              plVar26 = (long *)(*(long *)(lVar9 + 8) + 0x118);
              *plVar26 = *plVar26 + *(long *)(lVar9 + 0xa8) + *(long *)(lVar9 + 0x68);
              UNLOCK();
              LOCK();
              plVar26 = (long *)(*(long *)(lVar9 + 8) + 0x120);
              *plVar26 = *plVar26 +
                         (((*(long *)(lVar9 + 0x98) + *(long *)(lVar9 + 0x58)) -
                          *(long *)(lVar9 + 0x50)) - *(long *)(lVar9 + 0x90));
              UNLOCK();
              LOCK();
              plVar26 = (long *)(*(long *)(lVar9 + 8) + 0x128);
              *plVar26 = *plVar26 + *(long *)(lVar9 + 0xb0) + *(long *)(lVar9 + 0x70);
              UNLOCK();
              *(undefined8 *)(lVar9 + 0x48) = 0;
              *(undefined8 *)(lVar9 + 0x58) = 0;
              *(undefined8 *)(lVar9 + 0x50) = 0;
              *(undefined8 *)(lVar9 + 0x68) = 0;
              *(undefined8 *)(lVar9 + 0x70) = 0;
              *(undefined8 *)(lVar9 + 0x60) = 0;
              *(undefined8 *)(lVar9 + 0x88) = 0;
              *(undefined8 *)(lVar9 + 0x98) = 0;
              *(undefined8 *)(lVar9 + 0x90) = 0;
              *(undefined8 *)(lVar9 + 0xa8) = 0;
              *(undefined8 *)(lVar9 + 0xb0) = 0;
              *(undefined8 *)(lVar9 + 0xa0) = 0;
              LOCK();
              *(undefined8 *)(lVar9 + 8) = 0;
              UNLOCK();
            }
            plVar17 = plVar17 + 1;
            embree::MutexSys::unlock();
            if (plVar16 == plVar17) goto LAB_0010549e;
          }
          plVar17 = plVar17 + 1;
        } while (plVar16 != plVar17);
LAB_0010549e:
        if (*(long *)(lVar12 + 0x1a8) != *(long *)(lVar12 + 0x1b0)) {
          *(long *)(lVar12 + 0x1b0) = *(long *)(lVar12 + 0x1a8);
        }
      }
      embree::BVHN<4>::postBuild(local_150);
      goto LAB_00104ffc;
    }
    lVar12 = *(long *)psVar24;
  }
  (**(code **)(lVar12 + 0x28))(psVar24);
  pvVar8 = *(void **)(this + 0x48);
  lVar12 = *(long *)(this + 0x40);
  if (pvVar8 != (void *)0x0) {
    if ((ulong)(lVar12 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar8);
    }
    else {
      embree::os_free(pvVar8,lVar12 << 5,(bool)this[0x30]);
    }
  }
  if (lVar12 != 0) {
    (**(code **)**(undefined8 **)(this + 0x28))(*(undefined8 **)(this + 0x28),lVar12 * -0x20,1);
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
LAB_00104ffc:
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
    if (0xfffffffffffffffe < uVar1) goto LAB_00105bc0;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00105bc0:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_00105b49;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_00105b49:
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
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulong *puVar11;
  FastAllocator *this_00;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  float *pfVar21;
  uint *puVar22;
  float *pfVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  long lVar27;
  PrimRef *pPVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  long in_FS_OFFSET;
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
  float fVar56;
  ulong local_108;
  ulong local_100;
  float local_f8 [8];
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  uVar31 = *(ulong *)param_2;
  puVar11 = *(ulong **)(param_3 + 0x10);
  uVar17 = *puVar11;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar29 = (*(long *)(param_2 + 8) + 3) - uVar31;
  uVar30 = uVar29 & 0xfffffffffffffffc;
  uVar29 = uVar29 >> 2;
  this_00 = *(FastAllocator **)param_3;
  lVar2 = uVar30 * 2 + uVar29 * 3;
  uVar32 = lVar2 * 0x10;
  local_108 = uVar32;
  if (this_00 != *(FastAllocator **)(uVar17 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(uVar17 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(uVar17 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(uVar17 + 0xa8) + *(long *)(uVar17 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar17 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(uVar17 + 0x98) + *(long *)(uVar17 + 0x58)) -
                           *(long *)(uVar17 + 0x50)) - *(long *)(uVar17 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar17 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(uVar17 + 0xb0) + *(long *)(uVar17 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(uVar17 + 0x48) = 0;
    *(undefined8 *)(uVar17 + 0x58) = 0;
    *(undefined8 *)(uVar17 + 0x50) = 0;
    *(undefined8 *)(uVar17 + 0x68) = 0;
    *(undefined8 *)(uVar17 + 0x70) = 0;
    *(undefined8 *)(uVar17 + 0x60) = 0;
    if (this_00 == (FastAllocator *)0x0) {
      *(undefined8 *)(uVar17 + 0x88) = 0;
      uVar18 = 0;
      *(undefined8 *)(uVar17 + 0x98) = 0;
      *(undefined8 *)(uVar17 + 0x90) = 0;
      *(undefined8 *)(uVar17 + 0xa8) = 0;
      *(undefined8 *)(uVar17 + 0xb0) = 0;
    }
    else {
      uVar18 = *(undefined8 *)(this_00 + 0x10);
      *(undefined8 *)(uVar17 + 0x88) = 0;
      *(undefined8 *)(uVar17 + 0x98) = 0;
      *(undefined8 *)(uVar17 + 0x60) = uVar18;
      *(undefined8 *)(uVar17 + 0x90) = 0;
      *(undefined8 *)(uVar17 + 0xa8) = 0;
      *(undefined8 *)(uVar17 + 0xb0) = 0;
      *(undefined8 *)(uVar17 + 0xa0) = 0;
      uVar18 = *(undefined8 *)(this_00 + 0x10);
    }
    *(undefined8 *)(uVar17 + 0xa0) = uVar18;
    LOCK();
    *(FastAllocator **)(uVar17 + 8) = this_00;
    UNLOCK();
    local_100 = uVar17;
    embree::MutexSys::lock();
    puVar12 = *(ulong **)(this_00 + 0x138);
    if (puVar12 == *(ulong **)(this_00 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(this_00 + 0x130),puVar12,&local_100);
    }
    else {
      *puVar12 = uVar17;
      *(long *)(this_00 + 0x138) = *(long *)(this_00 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar13 = puVar11[2];
  puVar11[5] = puVar11[5] + uVar32;
  uVar16 = (ulong)(-(int)uVar13 & 0xf);
  lVar27 = uVar13 + uVar16;
  uVar17 = uVar32 + lVar27;
  puVar11[2] = uVar17;
  if (puVar11[3] < uVar17) {
    puVar11[2] = uVar13;
    if (puVar11[4] < (uVar30 * 2 + uVar29 * 3) * 0x40) {
      pfVar23 = (float *)FastAllocator::malloc(this_00,&local_108,0x40,false);
    }
    else {
      local_100 = puVar11[4];
      pfVar23 = (float *)FastAllocator::malloc(this_00,&local_100,0x40,true);
      puVar11[1] = (ulong)pfVar23;
      uVar17 = puVar11[2];
      puVar11[2] = uVar32;
      puVar11[6] = (puVar11[3] + puVar11[6]) - uVar17;
      puVar11[3] = local_100;
      if (local_100 < uVar32) {
        puVar11[2] = 0;
        local_100 = puVar11[4];
        pfVar23 = (float *)FastAllocator::malloc(this_00,&local_100,0x40,false);
        puVar11[1] = (ulong)pfVar23;
        uVar17 = puVar11[2];
        puVar11[2] = uVar32;
        puVar11[6] = (puVar11[3] + puVar11[6]) - uVar17;
        puVar11[3] = local_100;
        if (local_100 < uVar32) {
          pfVar23 = (float *)0x0;
          puVar11[2] = 0;
        }
      }
    }
  }
  else {
    puVar11[6] = puVar11[6] + uVar16;
    pfVar23 = (float *)(lVar27 + puVar11[1]);
  }
  uVar17 = 7;
  if (uVar29 < 8) {
    uVar17 = uVar29;
  }
  uVar17 = uVar17 + 8 | (ulong)pfVar23;
  pfVar3 = pfVar23 + lVar2 * 4;
  if (uVar29 != 0) {
    do {
      _local_d8 = (undefined1  [16])0x0;
      local_f8[0] = -NAN;
      local_f8[1] = -NAN;
      local_f8[2] = -NAN;
      local_f8[3] = -NAN;
      uVar29 = *(ulong *)(param_2 + 8);
      local_f8[4] = -NAN;
      local_f8[5] = -NAN;
      local_f8[6] = -NAN;
      local_f8[7] = -NAN;
      _local_c8 = (undefined1  [16])0x0;
      _local_b8 = (undefined1  [16])0x0;
      _local_a8 = (undefined1  [16])0x0;
      _local_98 = (undefined1  [16])0x0;
      _local_88 = (undefined1  [16])0x0;
      _local_78 = (undefined1  [16])0x0;
      _local_68 = (undefined1  [16])0x0;
      _local_58 = (undefined1  [16])0x0;
      if (uVar31 < uVar29) {
        lVar27 = 0;
        lVar2 = *(long *)(*(long *)(*(long *)(this + 8) + 0x68) + 0x1e0);
        puVar24 = (undefined4 *)local_78;
        puVar25 = (undefined4 *)local_a8;
        puVar26 = (undefined4 *)local_d8;
        pPVar28 = param_1 + uVar31 * 0x20;
        do {
          uVar9 = *(uint *)(pPVar28 + 0x1c);
          uVar31 = uVar31 + 1;
          lVar14 = *(long *)(lVar2 + (ulong)(uint)*(float *)(pPVar28 + 0xc) * 8);
          local_f8[lVar27] = *(float *)(pPVar28 + 0xc);
          puVar22 = (uint *)((ulong)uVar9 * *(long *)(lVar14 + 0x60) + *(long *)(lVar14 + 0x58));
          lVar15 = *(long *)(lVar14 + 0x88);
          lVar14 = *(long *)(lVar14 + 0x90);
          puVar19 = (undefined4 *)((ulong)*puVar22 * lVar14 + lVar15);
          uVar4 = puVar19[2];
          uVar5 = *puVar19;
          uVar9 = puVar22[1];
          uVar10 = puVar22[2];
          puVar26[4] = puVar19[1];
          *puVar26 = uVar5;
          puVar26[8] = uVar4;
          puVar20 = (undefined4 *)((ulong)uVar9 * lVar14 + lVar15);
          puVar19 = (undefined4 *)(lVar15 + (ulong)uVar10 * lVar14);
          uVar4 = puVar20[2];
          uVar5 = puVar19[2];
          uVar6 = puVar19[1];
          uVar7 = *puVar19;
          uVar8 = *puVar20;
          puVar25[4] = puVar20[1];
          fVar37 = *(float *)(pPVar28 + 0x1c);
          puVar25[8] = uVar4;
          *puVar25 = uVar8;
          local_f8[lVar27 + 4] = fVar37;
          lVar27 = lVar27 + 1;
          *puVar24 = uVar7;
          puVar24[4] = uVar6;
          puVar24[8] = uVar5;
          if (uVar29 <= uVar31) break;
          puVar24 = puVar24 + 1;
          puVar25 = puVar25 + 1;
          puVar26 = puVar26 + 1;
          pPVar28 = pPVar28 + 0x20;
        } while (lVar27 != 4);
        fVar33 = (float)local_58._0_4_ - (float)local_b8._0_4_;
        fVar34 = (float)local_58._4_4_ - (float)local_b8._4_4_;
        fVar35 = fStack_50 - fStack_b0;
        fVar36 = fStack_4c - fStack_ac;
        fVar41 = (float)local_78._0_4_ - (float)local_d8._0_4_;
        fVar42 = (float)local_78._4_4_ - (float)local_d8._4_4_;
        fVar43 = fStack_70 - fStack_d0;
        fVar44 = fStack_6c - fStack_cc;
        fVar37 = (float)local_68._0_4_ - (float)local_c8._0_4_;
        fVar38 = (float)local_68._4_4_ - (float)local_c8._4_4_;
        fVar39 = fStack_60 - fStack_c0;
        fVar40 = fStack_5c - fStack_bc;
        fVar45 = (float)local_b8._0_4_ - (float)local_88._0_4_;
        fVar46 = (float)local_b8._4_4_ - (float)local_88._4_4_;
        fVar47 = fStack_b0 - fStack_80;
        fVar48 = fStack_ac - fStack_7c;
        fVar49 = (float)local_c8._0_4_ - (float)local_98._0_4_;
        fVar50 = (float)local_c8._4_4_ - (float)local_98._4_4_;
        fVar51 = fStack_c0 - fStack_90;
        fVar52 = fStack_bc - fStack_8c;
        fVar53 = (float)local_d8._0_4_ - (float)local_a8._0_4_;
        fVar54 = (float)local_d8._4_4_ - (float)local_a8._4_4_;
        fVar55 = fStack_d0 - fStack_a0;
        fVar56 = fStack_cc - fStack_9c;
      }
      else {
        fVar41 = 0.0;
        fVar42 = 0.0;
        fVar43 = 0.0;
        fVar44 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar36 = 0.0;
        local_b8._0_4_ = 0.0;
        local_b8._4_4_ = 0.0;
        fVar37 = fVar33;
        fVar38 = fVar34;
        fVar39 = fVar35;
        fVar40 = fVar36;
        fStack_b0 = fVar35;
        fStack_ac = fVar36;
        local_c8._0_4_ = local_b8._0_4_;
        local_c8._4_4_ = local_b8._4_4_;
        fStack_c0 = fVar35;
        fStack_bc = fVar36;
        local_d8._0_4_ = local_b8._0_4_;
        local_d8._4_4_ = local_b8._4_4_;
        fStack_d0 = fVar35;
        fStack_cc = fVar36;
        fVar45 = (float)local_b8._0_4_;
        fVar46 = (float)local_b8._4_4_;
        fVar47 = fVar35;
        fVar48 = fVar36;
        fVar49 = (float)local_b8._0_4_;
        fVar50 = fVar34;
        fVar51 = fVar35;
        fVar52 = fVar36;
        fVar53 = (float)local_b8._0_4_;
        fVar54 = fVar34;
        fVar55 = fVar35;
        fVar56 = fVar36;
      }
      *pfVar23 = (float)local_d8._0_4_;
      pfVar23[1] = (float)local_d8._4_4_;
      pfVar23[2] = fStack_d0;
      pfVar23[3] = fStack_cc;
      pfVar21 = pfVar23 + 0x2c;
      pfVar23[4] = (float)local_c8._0_4_;
      pfVar23[5] = (float)local_c8._4_4_;
      pfVar23[6] = fStack_c0;
      pfVar23[7] = fStack_bc;
      pfVar23[8] = (float)local_b8._0_4_;
      pfVar23[9] = (float)local_b8._4_4_;
      pfVar23[10] = fStack_b0;
      pfVar23[0xb] = fStack_ac;
      pfVar23[0xc] = fVar53;
      pfVar23[0xd] = fVar54;
      pfVar23[0xe] = fVar55;
      pfVar23[0xf] = fVar56;
      pfVar23[0x10] = fVar49;
      pfVar23[0x11] = fVar50;
      pfVar23[0x12] = fVar51;
      pfVar23[0x13] = fVar52;
      pfVar23[0x14] = fVar45;
      pfVar23[0x15] = fVar46;
      pfVar23[0x16] = fVar47;
      pfVar23[0x17] = fVar48;
      pfVar23[0x18] = fVar41;
      pfVar23[0x19] = fVar42;
      pfVar23[0x1a] = fVar43;
      pfVar23[0x1b] = fVar44;
      pfVar23[0x1c] = fVar37;
      pfVar23[0x1d] = fVar38;
      pfVar23[0x1e] = fVar39;
      pfVar23[0x1f] = fVar40;
      pfVar23[0x20] = fVar33;
      pfVar23[0x21] = fVar34;
      pfVar23[0x22] = fVar35;
      pfVar23[0x23] = fVar36;
      pfVar23[0x24] = local_f8[0];
      pfVar23[0x25] = local_f8[1];
      pfVar23[0x26] = local_f8[2];
      pfVar23[0x27] = local_f8[3];
      pfVar23[0x28] = local_f8[4];
      pfVar23[0x29] = local_f8[5];
      pfVar23[0x2a] = local_f8[6];
      pfVar23[0x2b] = local_f8[7];
      pfVar23 = pfVar21;
    } while (pfVar3 != pfVar21);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
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
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  FastAllocator *this_00;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  ulong local_a8;
  ulong local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  uint local_68 [10];
  long local_40;
  
  uVar16 = *(ulong *)param_2;
  puVar6 = *(ulong **)(param_3 + 0x10);
  this_00 = *(FastAllocator **)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = *puVar6;
  uVar21 = (*(long *)(param_2 + 8) + 3) - uVar16;
  uVar22 = uVar21 & 0xfffffffffffffffc;
  uVar21 = uVar21 >> 2;
  lVar3 = uVar22 + uVar21;
  uVar20 = lVar3 * 0x10;
  local_a8 = uVar20;
  if (this_00 != *(FastAllocator **)(uVar11 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(uVar11 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(uVar11 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(uVar11 + 0xa8) + *(long *)(uVar11 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar11 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(uVar11 + 0x98) + *(long *)(uVar11 + 0x58)) -
                           *(long *)(uVar11 + 0x50)) - *(long *)(uVar11 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar11 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(uVar11 + 0xb0) + *(long *)(uVar11 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(uVar11 + 0x48) = 0;
    *(undefined8 *)(uVar11 + 0x58) = 0;
    *(undefined8 *)(uVar11 + 0x50) = 0;
    *(undefined8 *)(uVar11 + 0x68) = 0;
    *(undefined8 *)(uVar11 + 0x70) = 0;
    *(undefined8 *)(uVar11 + 0x60) = 0;
    if (this_00 == (FastAllocator *)0x0) {
      *(undefined8 *)(uVar11 + 0x88) = 0;
      uVar15 = 0;
      *(undefined8 *)(uVar11 + 0x98) = 0;
      *(undefined8 *)(uVar11 + 0x90) = 0;
      *(undefined8 *)(uVar11 + 0xa8) = 0;
      *(undefined8 *)(uVar11 + 0xb0) = 0;
    }
    else {
      uVar15 = *(undefined8 *)(this_00 + 0x10);
      *(undefined8 *)(uVar11 + 0x88) = 0;
      *(undefined8 *)(uVar11 + 0x98) = 0;
      *(undefined8 *)(uVar11 + 0x60) = uVar15;
      *(undefined8 *)(uVar11 + 0x90) = 0;
      *(undefined8 *)(uVar11 + 0xa8) = 0;
      *(undefined8 *)(uVar11 + 0xb0) = 0;
      *(undefined8 *)(uVar11 + 0xa0) = 0;
      uVar15 = *(undefined8 *)(this_00 + 0x10);
    }
    *(undefined8 *)(uVar11 + 0xa0) = uVar15;
    LOCK();
    *(FastAllocator **)(uVar11 + 8) = this_00;
    UNLOCK();
    local_a0 = uVar11;
    embree::MutexSys::lock();
    puVar7 = *(ulong **)(this_00 + 0x138);
    if (puVar7 == *(ulong **)(this_00 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(this_00 + 0x130),puVar7,&local_a0);
    }
    else {
      *puVar7 = uVar11;
      *(long *)(this_00 + 0x138) = *(long *)(this_00 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar8 = puVar6[2];
  puVar6[5] = puVar6[5] + uVar20;
  uVar10 = (ulong)(-(int)uVar8 & 0xf);
  lVar2 = uVar8 + uVar10;
  uVar11 = uVar20 + lVar2;
  puVar6[2] = uVar11;
  if (puVar6[3] < uVar11) {
    puVar6[2] = uVar8;
    if (puVar6[4] < (uVar22 + uVar21) * 0x40) {
      puVar17 = (undefined8 *)FastAllocator::malloc(this_00,&local_a8,0x40,false);
    }
    else {
      local_a0 = puVar6[4];
      puVar17 = (undefined8 *)FastAllocator::malloc(this_00,&local_a0,0x40,true);
      puVar6[1] = (ulong)puVar17;
      uVar11 = puVar6[2];
      puVar6[2] = uVar20;
      puVar6[6] = (puVar6[3] + puVar6[6]) - uVar11;
      puVar6[3] = local_a0;
      if (local_a0 < uVar20) {
        puVar6[2] = 0;
        local_a0 = puVar6[4];
        puVar17 = (undefined8 *)FastAllocator::malloc(this_00,&local_a0,0x40,false);
        puVar6[1] = (ulong)puVar17;
        uVar11 = puVar6[2];
        puVar6[2] = uVar20;
        puVar6[6] = (puVar6[3] + puVar6[6]) - uVar11;
        puVar6[3] = local_a0;
        if (local_a0 < uVar20) {
          puVar17 = (undefined8 *)0x0;
          puVar6[2] = 0;
        }
      }
    }
  }
  else {
    puVar6[6] = puVar6[6] + uVar10;
    puVar17 = (undefined8 *)(lVar2 + puVar6[1]);
  }
  uVar11 = 7;
  if (uVar21 < 8) {
    uVar11 = uVar21;
  }
  if (uVar21 != 0) {
    puVar18 = puVar17;
    do {
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      lVar2 = *(long *)(*(long *)(this + 8) + 0x68);
      local_78 = (undefined1  [16])0x0;
      local_68[0] = 0xffffffff;
      local_68[1] = 0xffffffff;
      local_68[2] = 0xffffffff;
      local_68[3] = 0xffffffff;
      uVar20 = *(ulong *)(param_2 + 8);
      local_68[4] = 0xffffffff;
      local_68[5] = 0xffffffff;
      local_68[6] = 0xffffffff;
      local_68[7] = 0xffffffff;
      if (uVar20 <= uVar16) {
        lVar12 = 1;
        goto LAB_00106686;
      }
      lVar12 = 0;
      uVar21 = uVar16;
      do {
        uVar14 = *(uint *)(param_1 + uVar21 * 0x20 + 0xc);
        lVar9 = *(long *)(lVar2 + 0x1e0);
        uVar16 = uVar21 + 1;
        uVar4 = *(uint *)(param_1 + uVar21 * 0x20 + 0x1c);
        local_68[lVar12] = uVar14;
        lVar9 = *(long *)(lVar9 + (ulong)uVar14 * 8);
        local_68[lVar12 + 4] = uVar4;
        piVar13 = (int *)((ulong)uVar4 * *(long *)(lVar9 + 0x60) + *(long *)(lVar9 + 0x58));
        uVar14 = (uint)(*(ulong *)(lVar9 + 0x90) >> 2) & 0x3fffffff;
        *(uint *)(local_98 + lVar12 * 4) = *piVar13 * uVar14;
        iVar5 = piVar13[2];
        *(uint *)(local_88 + lVar12 * 4) = piVar13[1] * uVar14;
        uVar14 = uVar14 * iVar5;
        while (local_68[lVar12 + -4] = uVar14, uVar20 <= uVar16) {
          lVar12 = lVar12 + 1;
          if (lVar12 == 4) goto LAB_00106600;
LAB_00106686:
          local_68[lVar12 + 4] = 0xffffffff;
          local_68[lVar12] = local_68[0];
          *(undefined4 *)(local_98 + lVar12 * 4) = local_98._0_4_;
          *(undefined4 *)(local_88 + lVar12 * 4) = local_98._0_4_;
          uVar14 = local_98._0_4_;
        }
        lVar12 = lVar12 + 1;
        uVar21 = uVar16;
      } while (lVar12 != 4);
LAB_00106600:
      puVar19 = puVar18 + 10;
      *puVar18 = local_98._0_8_;
      puVar18[1] = local_98._8_8_;
      puVar18[2] = local_88._0_8_;
      puVar18[3] = local_88._8_8_;
      puVar18[4] = local_78._0_8_;
      puVar18[5] = local_78._8_8_;
      puVar18[6] = CONCAT44(local_68[1],local_68[0]);
      puVar18[7] = CONCAT44(local_68[3],local_68[2]);
      puVar18[8] = CONCAT44(local_68[5],local_68[4]);
      puVar18[9] = CONCAT44(local_68[7],local_68[6]);
      puVar18 = puVar19;
    } while (puVar17 + lVar3 * 2 != puVar19);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11 + 8 | (ulong)puVar17;
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
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  FastAllocator *this_00;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  ulong local_a8;
  ulong local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  uint local_68 [10];
  long local_40;
  
  uVar16 = *(ulong *)param_2;
  puVar6 = *(ulong **)(param_3 + 0x10);
  this_00 = *(FastAllocator **)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = *puVar6;
  uVar21 = (*(long *)(param_2 + 8) + 3) - uVar16;
  uVar22 = uVar21 & 0xfffffffffffffffc;
  uVar21 = uVar21 >> 2;
  lVar3 = uVar22 + uVar21;
  uVar20 = lVar3 * 0x10;
  local_a8 = uVar20;
  if (this_00 != *(FastAllocator **)(uVar11 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(uVar11 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(uVar11 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(uVar11 + 0xa8) + *(long *)(uVar11 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar11 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(uVar11 + 0x98) + *(long *)(uVar11 + 0x58)) -
                           *(long *)(uVar11 + 0x50)) - *(long *)(uVar11 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar11 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(uVar11 + 0xb0) + *(long *)(uVar11 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(uVar11 + 0x48) = 0;
    *(undefined8 *)(uVar11 + 0x58) = 0;
    *(undefined8 *)(uVar11 + 0x50) = 0;
    *(undefined8 *)(uVar11 + 0x68) = 0;
    *(undefined8 *)(uVar11 + 0x70) = 0;
    *(undefined8 *)(uVar11 + 0x60) = 0;
    if (this_00 == (FastAllocator *)0x0) {
      *(undefined8 *)(uVar11 + 0x88) = 0;
      uVar15 = 0;
      *(undefined8 *)(uVar11 + 0x98) = 0;
      *(undefined8 *)(uVar11 + 0x90) = 0;
      *(undefined8 *)(uVar11 + 0xa8) = 0;
      *(undefined8 *)(uVar11 + 0xb0) = 0;
    }
    else {
      uVar15 = *(undefined8 *)(this_00 + 0x10);
      *(undefined8 *)(uVar11 + 0x88) = 0;
      *(undefined8 *)(uVar11 + 0x98) = 0;
      *(undefined8 *)(uVar11 + 0x60) = uVar15;
      *(undefined8 *)(uVar11 + 0x90) = 0;
      *(undefined8 *)(uVar11 + 0xa8) = 0;
      *(undefined8 *)(uVar11 + 0xb0) = 0;
      *(undefined8 *)(uVar11 + 0xa0) = 0;
      uVar15 = *(undefined8 *)(this_00 + 0x10);
    }
    *(undefined8 *)(uVar11 + 0xa0) = uVar15;
    LOCK();
    *(FastAllocator **)(uVar11 + 8) = this_00;
    UNLOCK();
    local_a0 = uVar11;
    embree::MutexSys::lock();
    puVar7 = *(ulong **)(this_00 + 0x138);
    if (puVar7 == *(ulong **)(this_00 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(this_00 + 0x130),puVar7,&local_a0);
    }
    else {
      *puVar7 = uVar11;
      *(long *)(this_00 + 0x138) = *(long *)(this_00 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar8 = puVar6[2];
  puVar6[5] = puVar6[5] + uVar20;
  uVar10 = (ulong)(-(int)uVar8 & 0xf);
  lVar2 = uVar8 + uVar10;
  uVar11 = uVar20 + lVar2;
  puVar6[2] = uVar11;
  if (puVar6[3] < uVar11) {
    puVar6[2] = uVar8;
    if (puVar6[4] < (uVar22 + uVar21) * 0x40) {
      puVar17 = (undefined8 *)FastAllocator::malloc(this_00,&local_a8,0x40,false);
    }
    else {
      local_a0 = puVar6[4];
      puVar17 = (undefined8 *)FastAllocator::malloc(this_00,&local_a0,0x40,true);
      puVar6[1] = (ulong)puVar17;
      uVar11 = puVar6[2];
      puVar6[2] = uVar20;
      puVar6[6] = (puVar6[3] + puVar6[6]) - uVar11;
      puVar6[3] = local_a0;
      if (local_a0 < uVar20) {
        puVar6[2] = 0;
        local_a0 = puVar6[4];
        puVar17 = (undefined8 *)FastAllocator::malloc(this_00,&local_a0,0x40,false);
        puVar6[1] = (ulong)puVar17;
        uVar11 = puVar6[2];
        puVar6[2] = uVar20;
        puVar6[6] = (puVar6[3] + puVar6[6]) - uVar11;
        puVar6[3] = local_a0;
        if (local_a0 < uVar20) {
          puVar17 = (undefined8 *)0x0;
          puVar6[2] = 0;
        }
      }
    }
  }
  else {
    puVar6[6] = puVar6[6] + uVar10;
    puVar17 = (undefined8 *)(lVar2 + puVar6[1]);
  }
  uVar11 = 7;
  if (uVar21 < 8) {
    uVar11 = uVar21;
  }
  if (uVar21 != 0) {
    puVar18 = puVar17;
    do {
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      lVar2 = *(long *)(*(long *)(this + 8) + 0x68);
      local_78 = (undefined1  [16])0x0;
      local_68[0] = 0xffffffff;
      local_68[1] = 0xffffffff;
      local_68[2] = 0xffffffff;
      local_68[3] = 0xffffffff;
      uVar20 = *(ulong *)(param_2 + 8);
      local_68[4] = 0xffffffff;
      local_68[5] = 0xffffffff;
      local_68[6] = 0xffffffff;
      local_68[7] = 0xffffffff;
      if (uVar20 <= uVar16) {
        lVar12 = 1;
        goto LAB_00106bd6;
      }
      lVar12 = 0;
      uVar21 = uVar16;
      do {
        uVar14 = *(uint *)(param_1 + uVar21 * 0x20 + 0xc);
        lVar9 = *(long *)(lVar2 + 0x1e0);
        uVar16 = uVar21 + 1;
        uVar4 = *(uint *)(param_1 + uVar21 * 0x20 + 0x1c);
        local_68[lVar12] = uVar14;
        lVar9 = *(long *)(lVar9 + (ulong)uVar14 * 8);
        local_68[lVar12 + 4] = uVar4;
        piVar13 = (int *)((ulong)uVar4 * *(long *)(lVar9 + 0x60) + *(long *)(lVar9 + 0x58));
        uVar14 = (uint)(*(ulong *)(lVar9 + 0x90) >> 2) & 0x3fffffff;
        *(uint *)(local_98 + lVar12 * 4) = *piVar13 * uVar14;
        iVar5 = piVar13[2];
        *(uint *)(local_88 + lVar12 * 4) = piVar13[1] * uVar14;
        uVar14 = uVar14 * iVar5;
        while (local_68[lVar12 + -4] = uVar14, uVar20 <= uVar16) {
          lVar12 = lVar12 + 1;
          if (lVar12 == 4) goto LAB_00106b50;
LAB_00106bd6:
          local_68[lVar12 + 4] = 0xffffffff;
          local_68[lVar12] = local_68[0];
          *(undefined4 *)(local_98 + lVar12 * 4) = local_98._0_4_;
          *(undefined4 *)(local_88 + lVar12 * 4) = local_98._0_4_;
          uVar14 = local_98._0_4_;
        }
        lVar12 = lVar12 + 1;
        uVar21 = uVar16;
      } while (lVar12 != 4);
LAB_00106b50:
      puVar19 = puVar18 + 10;
      *puVar18 = local_98._0_8_;
      puVar18[1] = local_98._8_8_;
      puVar18[2] = local_88._0_8_;
      puVar18[3] = local_88._8_8_;
      puVar18[4] = local_78._0_8_;
      puVar18[5] = local_78._8_8_;
      puVar18[6] = CONCAT44(local_68[1],local_68[0]);
      puVar18[7] = CONCAT44(local_68[3],local_68[2]);
      puVar18[8] = CONCAT44(local_68[5],local_68[4]);
      puVar18[9] = CONCAT44(local_68[7],local_68[6]);
      puVar18 = puVar19;
    } while (puVar17 + lVar3 * 2 != puVar19);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11 + 8 | (ulong)puVar17;
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
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulong *puVar11;
  FastAllocator *this_00;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  uint *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  long lVar26;
  PrimRef *pPVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  ulong local_108;
  ulong local_100;
  uint local_f8 [8];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  uVar30 = *(ulong *)param_2;
  puVar11 = *(ulong **)(param_3 + 0x10);
  uVar17 = *puVar11;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar28 = (*(long *)(param_2 + 8) + 3) - uVar30;
  uVar29 = uVar28 & 0xfffffffffffffffc;
  uVar28 = uVar28 >> 2;
  this_00 = *(FastAllocator **)param_3;
  lVar2 = uVar29 * 2 + uVar28 * 3;
  uVar31 = lVar2 * 0x10;
  local_108 = uVar31;
  if (this_00 != *(FastAllocator **)(uVar17 + 8)) {
    embree::MutexSys::lock();
    if (*(long *)(uVar17 + 8) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(uVar17 + 8) + 0x118);
      *plVar1 = *plVar1 + *(long *)(uVar17 + 0xa8) + *(long *)(uVar17 + 0x68);
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar17 + 8) + 0x120);
      *plVar1 = *plVar1 + (((*(long *)(uVar17 + 0x98) + *(long *)(uVar17 + 0x58)) -
                           *(long *)(uVar17 + 0x50)) - *(long *)(uVar17 + 0x90));
      UNLOCK();
      LOCK();
      plVar1 = (long *)(*(long *)(uVar17 + 8) + 0x128);
      *plVar1 = *plVar1 + *(long *)(uVar17 + 0xb0) + *(long *)(uVar17 + 0x70);
      UNLOCK();
    }
    *(undefined8 *)(uVar17 + 0x48) = 0;
    *(undefined8 *)(uVar17 + 0x58) = 0;
    *(undefined8 *)(uVar17 + 0x50) = 0;
    *(undefined8 *)(uVar17 + 0x68) = 0;
    *(undefined8 *)(uVar17 + 0x70) = 0;
    *(undefined8 *)(uVar17 + 0x60) = 0;
    if (this_00 == (FastAllocator *)0x0) {
      *(undefined8 *)(uVar17 + 0x88) = 0;
      uVar18 = 0;
      *(undefined8 *)(uVar17 + 0x98) = 0;
      *(undefined8 *)(uVar17 + 0x90) = 0;
      *(undefined8 *)(uVar17 + 0xa8) = 0;
      *(undefined8 *)(uVar17 + 0xb0) = 0;
    }
    else {
      uVar18 = *(undefined8 *)(this_00 + 0x10);
      *(undefined8 *)(uVar17 + 0x88) = 0;
      *(undefined8 *)(uVar17 + 0x98) = 0;
      *(undefined8 *)(uVar17 + 0x60) = uVar18;
      *(undefined8 *)(uVar17 + 0x90) = 0;
      *(undefined8 *)(uVar17 + 0xa8) = 0;
      *(undefined8 *)(uVar17 + 0xb0) = 0;
      *(undefined8 *)(uVar17 + 0xa0) = 0;
      uVar18 = *(undefined8 *)(this_00 + 0x10);
    }
    *(undefined8 *)(uVar17 + 0xa0) = uVar18;
    LOCK();
    *(FastAllocator **)(uVar17 + 8) = this_00;
    UNLOCK();
    local_100 = uVar17;
    embree::MutexSys::lock();
    puVar12 = *(ulong **)(this_00 + 0x138);
    if (puVar12 == *(ulong **)(this_00 + 0x140)) {
      std::
      vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
      ::_M_realloc_insert<embree::FastAllocator::ThreadLocal2*const&>
                ((vector<embree::FastAllocator::ThreadLocal2*,std::allocator<embree::FastAllocator::ThreadLocal2*>>
                  *)(this_00 + 0x130),puVar12,&local_100);
    }
    else {
      *puVar12 = uVar17;
      *(long *)(this_00 + 0x138) = *(long *)(this_00 + 0x138) + 8;
    }
    embree::MutexSys::unlock();
    embree::MutexSys::unlock();
  }
  uVar13 = puVar11[2];
  puVar11[5] = puVar11[5] + uVar31;
  uVar16 = (ulong)(-(int)uVar13 & 0xf);
  lVar26 = uVar13 + uVar16;
  uVar17 = uVar31 + lVar26;
  puVar11[2] = uVar17;
  if (puVar11[3] < uVar17) {
    puVar11[2] = uVar13;
    if (puVar11[4] < (uVar29 * 2 + uVar28 * 3) * 0x40) {
      puVar22 = (undefined4 *)FastAllocator::malloc(this_00,&local_108,0x40,false);
    }
    else {
      local_100 = puVar11[4];
      puVar22 = (undefined4 *)FastAllocator::malloc(this_00,&local_100,0x40,true);
      puVar11[1] = (ulong)puVar22;
      uVar17 = puVar11[2];
      puVar11[2] = uVar31;
      puVar11[6] = (puVar11[3] + puVar11[6]) - uVar17;
      puVar11[3] = local_100;
      if (local_100 < uVar31) {
        puVar11[2] = 0;
        local_100 = puVar11[4];
        puVar22 = (undefined4 *)FastAllocator::malloc(this_00,&local_100,0x40,false);
        puVar11[1] = (ulong)puVar22;
        uVar17 = puVar11[2];
        puVar11[2] = uVar31;
        puVar11[6] = (puVar11[3] + puVar11[6]) - uVar17;
        puVar11[3] = local_100;
        if (local_100 < uVar31) {
          puVar22 = (undefined4 *)0x0;
          puVar11[2] = 0;
        }
      }
    }
  }
  else {
    puVar11[6] = puVar11[6] + uVar16;
    puVar22 = (undefined4 *)(lVar26 + puVar11[1]);
  }
  uVar17 = 7;
  if (uVar28 < 8) {
    uVar17 = uVar28;
  }
  uVar17 = uVar17 + 8 | (ulong)puVar22;
  puVar3 = puVar22 + lVar2 * 4;
  if (uVar28 != 0) {
    do {
      local_d8 = (undefined1  [16])0x0;
      local_f8[0] = 0xffffffff;
      local_f8[1] = 0xffffffff;
      local_f8[2] = 0xffffffff;
      local_f8[3] = 0xffffffff;
      uVar28 = *(ulong *)(param_2 + 8);
      local_f8[4] = 0xffffffff;
      local_f8[5] = 0xffffffff;
      local_f8[6] = 0xffffffff;
      local_f8[7] = 0xffffffff;
      local_c8 = (undefined1  [16])0x0;
      local_b8 = (undefined1  [16])0x0;
      local_a8 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      if (uVar30 < uVar28) {
        lVar26 = 0;
        lVar2 = *(long *)(*(long *)(*(long *)(this + 8) + 0x68) + 0x1e0);
        puVar23 = (undefined4 *)local_78;
        puVar24 = (undefined4 *)local_a8;
        puVar25 = (undefined4 *)local_d8;
        pPVar27 = param_1 + uVar30 * 0x20;
        do {
          uVar9 = *(uint *)(pPVar27 + 0x1c);
          uVar30 = uVar30 + 1;
          lVar14 = *(long *)(lVar2 + (ulong)*(uint *)(pPVar27 + 0xc) * 8);
          local_f8[lVar26] = *(uint *)(pPVar27 + 0xc);
          puVar21 = (uint *)((ulong)uVar9 * *(long *)(lVar14 + 0x60) + *(long *)(lVar14 + 0x58));
          lVar15 = *(long *)(lVar14 + 0x88);
          lVar14 = *(long *)(lVar14 + 0x90);
          puVar19 = (undefined4 *)((ulong)*puVar21 * lVar14 + lVar15);
          uVar4 = puVar19[2];
          uVar5 = *puVar19;
          uVar9 = puVar21[1];
          uVar10 = puVar21[2];
          puVar25[4] = puVar19[1];
          *puVar25 = uVar5;
          puVar25[8] = uVar4;
          puVar20 = (undefined4 *)((ulong)uVar9 * lVar14 + lVar15);
          puVar19 = (undefined4 *)(lVar15 + (ulong)uVar10 * lVar14);
          uVar4 = puVar20[2];
          uVar5 = puVar19[2];
          uVar6 = puVar19[1];
          uVar7 = *puVar19;
          uVar8 = *puVar20;
          puVar24[4] = puVar20[1];
          uVar9 = *(uint *)(pPVar27 + 0x1c);
          puVar24[8] = uVar4;
          *puVar24 = uVar8;
          local_f8[lVar26 + 4] = uVar9;
          lVar26 = lVar26 + 1;
          *puVar23 = uVar7;
          puVar23[4] = uVar6;
          puVar23[8] = uVar5;
          if (uVar28 <= uVar30) break;
          puVar23 = puVar23 + 1;
          puVar24 = puVar24 + 1;
          puVar25 = puVar25 + 1;
          pPVar27 = pPVar27 + 0x20;
        } while (lVar26 != 4);
      }
      else {
        local_58._0_8_ = 0;
        local_58._8_8_ = 0;
        local_68._0_4_ = 0;
        local_68._4_4_ = 0;
        local_68._8_4_ = 0;
        local_68._12_4_ = 0;
        local_88._0_4_ = 0;
        local_a8._4_4_ = 0;
        local_78._0_4_ = local_68._0_4_;
        local_78._4_4_ = local_68._4_4_;
        local_78._8_4_ = local_68._8_4_;
        local_78._12_4_ = local_68._12_4_;
        local_88._4_4_ = local_68._4_4_;
        local_88._8_4_ = local_68._8_4_;
        local_88._12_4_ = local_68._12_4_;
        local_98._0_4_ = local_88._0_4_;
        local_98._4_4_ = local_68._4_4_;
        local_98._8_4_ = local_68._8_4_;
        local_98._12_4_ = local_68._12_4_;
        local_a8._0_4_ = local_88._0_4_;
        local_a8._8_4_ = local_68._8_4_;
        local_a8._12_4_ = local_68._12_4_;
        local_b8._0_4_ = local_88._0_4_;
        local_b8._4_4_ = local_a8._4_4_;
        local_b8._8_4_ = local_68._8_4_;
        local_b8._12_4_ = local_68._12_4_;
        local_c8._0_4_ = local_88._0_4_;
        local_c8._4_4_ = local_a8._4_4_;
        local_c8._8_4_ = local_68._8_4_;
        local_c8._12_4_ = local_68._12_4_;
        local_d8._0_4_ = local_88._0_4_;
        local_d8._4_4_ = local_a8._4_4_;
        local_d8._8_4_ = local_68._8_4_;
        local_d8._12_4_ = local_68._12_4_;
      }
      *puVar22 = local_d8._0_4_;
      puVar22[1] = local_d8._4_4_;
      puVar22[2] = local_d8._8_4_;
      puVar22[3] = local_d8._12_4_;
      puVar23 = puVar22 + 0x2c;
      puVar22[4] = local_c8._0_4_;
      puVar22[5] = local_c8._4_4_;
      puVar22[6] = local_c8._8_4_;
      puVar22[7] = local_c8._12_4_;
      puVar22[8] = local_b8._0_4_;
      puVar22[9] = local_b8._4_4_;
      puVar22[10] = local_b8._8_4_;
      puVar22[0xb] = local_b8._12_4_;
      puVar22[0xc] = local_a8._0_4_;
      puVar22[0xd] = local_a8._4_4_;
      puVar22[0xe] = local_a8._8_4_;
      puVar22[0xf] = local_a8._12_4_;
      puVar22[0x10] = local_98._0_4_;
      puVar22[0x11] = local_98._4_4_;
      puVar22[0x12] = local_98._8_4_;
      puVar22[0x13] = local_98._12_4_;
      puVar22[0x14] = local_88._0_4_;
      puVar22[0x15] = local_88._4_4_;
      puVar22[0x16] = local_88._8_4_;
      puVar22[0x17] = local_88._12_4_;
      puVar22[0x18] = local_78._0_4_;
      puVar22[0x19] = local_78._4_4_;
      puVar22[0x1a] = local_78._8_4_;
      puVar22[0x1b] = local_78._12_4_;
      puVar22[0x1c] = local_68._0_4_;
      puVar22[0x1d] = local_68._4_4_;
      puVar22[0x1e] = local_68._8_4_;
      puVar22[0x1f] = local_68._12_4_;
      *(undefined8 *)(puVar22 + 0x20) = local_58._0_8_;
      *(undefined8 *)(puVar22 + 0x22) = local_58._8_8_;
      puVar22[0x24] = local_f8[0];
      puVar22[0x25] = local_f8[1];
      puVar22[0x26] = local_f8[2];
      puVar22[0x27] = local_f8[3];
      puVar22[0x28] = local_f8[4];
      puVar22[0x29] = local_f8[5];
      puVar22[0x2a] = local_f8[6];
      puVar22[0x2b] = local_f8[7];
      puVar22 = puVar23;
    } while (puVar3 != puVar23);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
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


