
/* VHACD::VHACD::OCLInit(void*, VHACD::IVHACD::IUserLogger*) */

undefined8 VHACD::VHACD::OCLInit(void *param_1,IUserLogger *param_2)

{
  return 0;
}



/* VHACD::VHACD::OCLRelease(VHACD::IVHACD::IUserLogger*) */

undefined8 VHACD::VHACD::OCLRelease(IUserLogger *param_1)

{
  return 0;
}



/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */

void std::__cxx11::string::_M_construct<char_const*>
               (ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00100064;
    }
    if (__n == 0) goto LAB_00100064;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100064:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VHACD::VHACD::ComputeCenterOfMass(double*) const */

undefined8 __thiscall VHACD::VHACD::ComputeCenterOfMass(VHACD *this,double *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  VHACD *pVVar4;
  double *pdVar5;
  undefined8 uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined4 local_64;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)this;
  param_1[2] = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  if (*(code **)(lVar1 + 0x18) == GetNConvexHulls) {
    uVar2 = *(uint *)(this + 0x218);
  }
  else {
    uVar2 = (**(code **)(lVar1 + 0x18))();
  }
  uVar6 = 0;
  if (uVar2 != 0) {
    dVar9 = 0.0;
    uVar3 = 0;
    param_1[2] = 0.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    while( true ) {
      if (*(code **)(*(long *)this + 0x20) == GetConvexHull) {
        pVVar4 = this + 0x10;
        if (*(long *)(this + 0x220) != 0x40) {
          pVVar4 = *(VHACD **)(this + 0x210);
        }
        lVar1 = *(long *)(pVVar4 + uVar3 * 8);
        local_68 = (undefined4)*(undefined8 *)(lVar1 + 0x608);
        local_64 = (undefined4)*(undefined8 *)(lVar1 + 0x920);
        local_78 = lVar1;
        if (*(long *)(lVar1 + 0x610) != 0x40) {
          local_78 = *(long *)(lVar1 + 0x600);
        }
        local_70 = lVar1 + 0x618;
        if (*(long *)(lVar1 + 0x928) != 0x40) {
          local_70 = *(long *)(lVar1 + 0x918);
        }
        local_60 = (double)::VHACD::Mesh::ComputeVolume();
        ::VHACD::Mesh::ComputeCenter();
      }
      else {
        (**(code **)(*(long *)this + 0x20))(this,uVar3 & 0xffffffff,&local_78);
      }
      dVar9 = dVar9 + local_60;
      if ((ulong)uVar2 == uVar3 + 1) break;
      uVar3 = uVar3 + 1;
    }
    dVar9 = _LC1 / dVar9;
    uVar7 = 0;
    do {
      if (*(code **)(*(long *)this + 0x20) == GetConvexHull) {
        pVVar4 = this + 0x10;
        if (*(long *)(this + 0x220) != 0x40) {
          pVVar4 = *(VHACD **)(this + 0x210);
        }
        lVar1 = *(long *)(pVVar4 + uVar7 * 8);
        local_68 = (undefined4)*(undefined8 *)(lVar1 + 0x608);
        local_64 = (undefined4)*(undefined8 *)(lVar1 + 0x920);
        local_78 = lVar1;
        if (*(long *)(lVar1 + 0x610) != 0x40) {
          local_78 = *(long *)(lVar1 + 0x600);
        }
        local_70 = lVar1 + 0x618;
        if (*(long *)(lVar1 + 0x928) != 0x40) {
          local_70 = *(long *)(lVar1 + 0x918);
        }
        local_60 = (double)::VHACD::Mesh::ComputeVolume();
        pdVar5 = (double *)::VHACD::Mesh::ComputeCenter();
        local_58 = *pdVar5;
        local_50 = pdVar5[1];
        dVar11 = pdVar5[2];
      }
      else {
        (**(code **)(*(long *)this + 0x20))(this,uVar7 & 0xffffffff,&local_78);
        dVar11 = local_48;
      }
      dVar10 = dVar9 * local_60;
      *param_1 = local_58 * dVar10 + *param_1;
      param_1[1] = local_50 * dVar10 + param_1[1];
      param_1[2] = dVar10 * dVar11 + param_1[2];
      bVar8 = uVar3 != uVar7;
      uVar7 = uVar7 + 1;
    } while (bVar8);
    uVar6 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::VHACD::ComputeBestClippingPlane(VHACD::PrimitiveSet const*, double,
   VHACD::SArray<VHACD::Plane, 64ul> const&, VHACD::Vec3<double> const&, double, double, double,
   int, double, double, VHACD::Plane&, double&, VHACD::IVHACD::Parameters const&) [clone .part.0] */

void VHACD::VHACD::ComputeBestClippingPlane
               (PrimitiveSet *param_1,double param_2,SArray *param_3,Vec3 *param_4,double param_5,
               double param_6,double param_7,int param_8,double param_9,double param_10,
               Plane *param_11,double *param_12,Parameters *param_13)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined4 in_register_0000000c;
  double *pdVar12;
  Vec3 *pVVar13;
  long lVar14;
  Mesh *pMVar15;
  SArray *pSVar16;
  ulong uVar17;
  Mesh *pMVar18;
  PrimitiveSet PVar19;
  long lVar20;
  long in_FS_OFFSET;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  long in_stack_00000010;
  double *local_230;
  double local_220;
  ulong *local_200;
  ulong *local_1f8;
  ulong *local_1f0;
  undefined8 *local_1e8;
  int local_1c8;
  double local_1b0;
  double local_1a8;
  double local_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_148 [264];
  long local_40;
  
  pdVar12 = (double *)CONCAT44(in_register_0000000c,param_8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_3 + 0x18))(param_3);
  iVar7 = (int)*(undefined8 *)(param_4 + 0xa08);
  *(double *)param_13 = _LC6;
  uVar17 = (ulong)(*(int *)(param_1 + 0x34c) * 2);
  if (uVar17 < 0x15015015015016) {
    local_1f0 = (ulong *)operator_new__(uVar17 * 0x618 + 8);
    lVar20 = uVar17 - 1;
    *local_1f0 = uVar17;
    uVar6 = _UNK_0010f338;
    uVar5 = __LC7;
    local_1f8 = local_1f0 + 1;
    puVar11 = local_1f8;
    if (uVar17 != 0) {
      do {
        lVar20 = lVar20 + -1;
        puVar11[0xc1] = uVar5;
        puVar11[0xc2] = uVar6;
        puVar11[0xc0] = 0;
        puVar11 = puVar11 + 0xc3;
      } while (lVar20 != -1);
    }
  }
  else {
    local_1f0 = (ulong *)operator_new__(0xffffffffffffffff);
    *local_1f0 = uVar17;
    local_1f8 = local_1f0 + 1;
  }
  uVar17 = (ulong)(*(int *)(param_1 + 0x34c) * 2);
  if (uVar17 < 0xd79435e50d795) {
    lVar20 = uVar17 - 1;
    local_200 = (ulong *)operator_new__(uVar17 * 0x980 + 8);
    pMVar18 = (Mesh *)(local_200 + 1);
    *local_200 = uVar17;
    pMVar15 = pMVar18;
    if (uVar17 != 0) {
      do {
        lVar20 = lVar20 + -1;
        ::VHACD::Mesh::Mesh(pMVar15);
        pMVar15 = pMVar15 + 0x980;
      } while (lVar20 != -1);
    }
  }
  else {
    local_200 = (ulong *)operator_new__(0xffffffffffffffff);
    pMVar18 = (Mesh *)(local_200 + 1);
    *local_200 = uVar17;
  }
  plVar9 = (long *)(**(code **)(*(long *)param_3 + 0x10))(param_3);
  (**(code **)(*(long *)param_3 + 0x68))(param_3);
  if (*(int *)(in_stack_00000010 + 0x48) == 0) {
    uVar17 = (long)(*(int *)(param_1 + 0x34c) * 2) * 8;
    if (0xfffffffffffffff < (ulong)(long)(*(int *)(param_1 + 0x34c) * 2)) {
      uVar17 = 0xffffffffffffffff;
    }
    local_1e8 = (undefined8 *)operator_new__(uVar17);
    if (0 < *(int *)(param_1 + 0x34c)) {
      lVar20 = 0;
      do {
        uVar10 = (**(code **)(*(long *)param_3 + 0x10))(param_3);
        local_1e8[lVar20] = uVar10;
        iVar8 = *(int *)(param_1 + 0x34c);
        lVar20 = lVar20 + 1;
      } while ((int)lVar20 < iVar8 * 2);
      if (0 < iVar7) goto LAB_0010056c;
      local_220 = _LC6;
      local_1c8 = -1;
      local_1b0 = local_220;
      local_1a8 = local_220;
      goto LAB_00100950;
    }
    if (0 < iVar7) goto LAB_0010056c;
    local_220 = _LC6;
    local_1c8 = -1;
    local_1b0 = local_220;
    local_1a8 = local_220;
  }
  else {
    local_1e8 = (undefined8 *)0x0;
    if (iVar7 < 1) {
      local_220 = _LC6;
      local_1c8 = -1;
      local_1b0 = local_220;
      local_1a8 = local_220;
      goto LAB_0010098a;
    }
LAB_0010056c:
    lVar20 = 0;
    uVar1 = 0;
    PVar19 = (PrimitiveSet)0x0;
    local_1c8 = -1;
    local_1a8 = _LC6;
    local_1b0 = _LC6;
    local_220 = _LC6;
LAB_001005df:
    do {
      if (PVar19 == (PrimitiveSet)0x0) {
        PVar19 = param_1[0x348];
        pVVar13 = param_4;
        if (*(long *)(param_4 + 0xa10) != 0x40) {
          pVVar13 = *(Vec3 **)(param_4 + 0xa00);
        }
        pVVar13 = pVVar13 + lVar20 * 0x28;
        local_178 = *(double *)pVVar13;
        dStack_170 = *(double *)(pVVar13 + 8);
        local_168 = *(double *)(pVVar13 + 0x10);
        dStack_160 = *(double *)(pVVar13 + 0x18);
        local_158 = *(double *)(pVVar13 + 0x20);
        lVar14 = (long)*(int *)(param_1 + 0x34c);
        pMVar15 = pMVar18 + lVar14 * 0x980;
        *(double *)(pMVar15 + 0x608) = 0.0;
        local_200[0xc2] = 0;
        *(double *)(pMVar15 + 0x920) = 0.0;
        local_200[0x125] = 0;
        lVar2 = *plVar9;
        if (*(int *)(in_stack_00000010 + 0x48) == 0) {
          plVar3 = (long *)*local_1e8;
          plVar4 = (long *)local_1e8[lVar14];
          (**(code **)(lVar2 + 0x48))(plVar9,&local_178,plVar3);
          (**(code **)(*plVar3 + 0x70))(plVar3,pMVar15);
          (**(code **)(*plVar4 + 0x70))(plVar4,pMVar18,(long)(int)param_11);
        }
        else {
          pSVar16 = (SArray *)(local_1f8 + lVar14 * 0xc3);
          *(undefined8 *)(pSVar16 + 0x608) = 0;
          local_1f0[0xc2] = 0;
          (**(code **)(lVar2 + 0x50))
                    (plVar9,(SArray *)&local_178,pSVar16,local_1f8,(long)((int)param_11 << 5));
          ::VHACD::Mesh::Clip((Plane *)(param_3 + 8),(SArray *)&local_178,pSVar16);
          if (*(long *)(pSVar16 + 0x610) != 0x40) {
            pSVar16 = *(SArray **)(pSVar16 + 0x600);
          }
          ::VHACD::Mesh::ComputeConvexHull((double *)pMVar15,(ulong)pSVar16);
          puVar11 = local_1f8;
          if (local_1f0[0xc3] != 0x40) {
            puVar11 = (ulong *)local_1f0[0xc1];
          }
          ::VHACD::Mesh::ComputeConvexHull((double *)pMVar18,(ulong)puVar11);
        }
        local_230 = &local_178;
        dVar21 = (double)::VHACD::Mesh::ComputeVolume();
        dVar22 = (double)::VHACD::Mesh::ComputeVolume();
        local_188 = 0.0;
        local_180 = 0.0;
        (**(code **)(*(long *)param_3 + 0x60))(param_3,local_230,&local_180,&local_188);
        dVar23 = *(double *)(param_1 + 0x2c8);
        dVar22 = (double)((ulong)(dVar21 - local_188) & __LC8) / dVar23 +
                 (double)((ulong)(dVar22 - local_180) & __LC8) / dVar23;
        dVar23 = ((double)((ulong)(local_188 - local_180) & __LC8) * param_5) / dVar23;
        dVar21 = (*pdVar12 * local_178 + pdVar12[1] * dStack_170 + pdVar12[2] * local_168) * param_2
                 * param_6;
        dVar24 = dVar22 + dVar23 + dVar21;
        if ((dVar24 < local_220) || ((dVar24 == local_220 && ((int)lVar20 < local_1c8)))) {
          *(double *)param_13 = dVar22;
          param_12[4] = local_158;
          *param_12 = local_178;
          param_12[1] = dStack_170;
          param_12[2] = local_168;
          param_12[3] = dStack_160;
          local_220 = dVar24;
          local_1c8 = (int)lVar20;
          local_1b0 = dVar23;
          local_1a8 = dVar21;
        }
        uVar1 = uVar1 + 1;
        if ((uVar1 & 0x7f) == 0) {
          plVar3 = *(long **)(in_stack_00000010 + 0x20);
          *(double *)(param_1 + 0x278) =
               ((double)(int)uVar1 * (param_9 - param_7)) / (double)iVar7 + param_7;
          if (plVar3 != (long *)0x0) {
            lVar20 = lVar20 + 1;
            (**(code **)(*plVar3 + 0x10))
                      (*(undefined8 *)(param_1 + 0x268),*(undefined8 *)(param_1 + 0x270),plVar3,
                       *(undefined8 *)(param_1 + 0x228),*(undefined8 *)(param_1 + 0x248));
            if (iVar7 <= (int)lVar20) break;
            goto LAB_001005df;
          }
        }
      }
      lVar20 = lVar20 + 1;
    } while ((int)lVar20 < iVar7);
    if (local_1e8 == (undefined8 *)0x0) goto LAB_0010098a;
    iVar8 = *(int *)(param_1 + 0x34c);
LAB_00100950:
    if (0 < iVar8) {
      lVar20 = 0;
      do {
        if ((long *)local_1e8[lVar20] != (long *)0x0) {
          (**(code **)(*(long *)local_1e8[lVar20] + 8))();
          iVar8 = *(int *)(param_1 + 0x34c);
        }
        lVar20 = lVar20 + 1;
      } while ((int)lVar20 < iVar8 * 2);
    }
  }
  operator_delete__(local_1e8);
LAB_0010098a:
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puVar11 = local_1f8 + *local_1f0 * 0xc3;
  if (local_1f8 == puVar11) {
    lVar20 = 0;
  }
  else {
    do {
      uVar17 = puVar11[-3];
      puVar11 = puVar11 + -0xc3;
      if (uVar17 != 0) {
        operator_delete__((void *)(uVar17 - 8),*(long *)(uVar17 - 8) * 0x18 + 8);
      }
    } while (local_1f8 != puVar11);
    lVar20 = *local_1f0 * 0x618;
  }
  operator_delete__(local_1f0,lVar20 + 8);
  pMVar15 = pMVar18 + *local_200 * 0x980;
  if (pMVar15 == pMVar18) {
    lVar20 = 0;
  }
  else {
    do {
      pMVar15 = pMVar15 + -0x980;
      ::VHACD::Mesh::~Mesh(pMVar15);
    } while (pMVar15 != pMVar18);
    lVar20 = *local_200 * 0x980;
  }
  operator_delete__(local_200,lVar20 + 8);
  if (*(long *)(in_stack_00000010 + 0x28) != 0) {
    __sprintf_chk(local_220,*(undefined8 *)param_13,local_1b0,local_1a8,*param_12,param_12[1],
                  param_12[2],param_12[3],local_148,2,0x100,
                  "\n\t\t\t Best  %04i T=%2.6f C=%2.6f B=%2.6f S=%2.6f (%1.1f, %1.1f, %1.1f, %3.3f)\n\n"
                  ,local_1c8);
    (**(code **)(**(long **)(in_stack_00000010 + 0x28) + 0x10))
              (*(long **)(in_stack_00000010 + 0x28),local_148);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::VHACD::ComputePrimitiveSet(VHACD::IVHACD::Parameters const&) [clone .part.0] */

void __thiscall VHACD::VHACD::ComputePrimitiveSet(VHACD *this,Parameters *param_1)

{
  long *plVar1;
  code *pcVar2;
  Volume *this_00;
  undefined8 uVar3;
  pointer_____offset_0x10___ puVar4;
  ostream *poVar5;
  TetrahedronSet *this_01;
  streambuf *psVar6;
  long in_FS_OFFSET;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  code *local_1b8;
  pointer_____offset_0x10___ puStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  char *local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  puVar4 = PTR_vtable_0010f400;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  clock_gettime(0,(timespec *)(this + 0x2e8));
  std::__cxx11::string::_M_replace((ulong)(this + 0x228),0,*(char **)(this + 0x230),0x10a79b);
  std::__cxx11::string::_M_replace((ulong)(this + 0x248),0,*(char **)(this + 0x250),0x10a7b1);
  std::ios_base::ios_base((ios_base *)local_148);
  local_148[0] = std::ios::init;
  local_68 = 0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_1b8 = _init;
  local_70 = 0;
  psVar6 = (streambuf *)((ostream *)&local_1b8 + *(long *)(_init + -0x18));
  *(undefined8 *)psVar6 = _locale;
  std::ios::init(psVar6);
  local_1b8 = std::ios_base::ios_base;
  puStack_1b0 = puVar4;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
  std::locale::locale(local_178);
  puStack_1b0 = std::ios_base::ios_base;
  local_158 = 0;
  local_170 = 0x10;
  local_160 = (char *)0x0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_0010102e:
    plVar1 = *(long **)(param_1 + 0x20);
    *(undefined1 (*) [16])(this + 0x270) = (undefined1  [16])0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))
                (*(undefined8 *)(this + 0x268),0,plVar1,*(undefined8 *)(this + 0x228),
                 *(undefined8 *)(this + 0x248));
    }
    if (*(int *)(param_1 + 0x44) == 0) {
      this_01 = (TetrahedronSet *)operator_new(0xb08);
      ::VHACD::VoxelSet::VoxelSet((VoxelSet *)this_01);
      ::VHACD::Volume::Convert(*(VoxelSet **)(this + 0x310));
    }
    else {
      this_01 = (TetrahedronSet *)operator_new(0xdd0);
      ::VHACD::TetrahedronSet::TetrahedronSet(this_01);
      ::VHACD::Volume::Convert(*(TetrahedronSet **)(this + 0x310));
    }
    *(TetrahedronSet **)(this + 0x318) = this_01;
    this_00 = *(Volume **)(this + 0x310);
    if (this_00 != (Volume *)0x0) {
      ::VHACD::Volume::~Volume(this_00);
      operator_delete(this_00,0x70);
    }
    *(undefined8 *)(this + 0x310) = 0;
    if (*(long *)(param_1 + 0x28) == 0) {
LAB_00101316:
      uVar3 = _LC17;
      plVar1 = *(long **)(param_1 + 0x20);
      *(undefined8 *)(this + 0x268) = _LC16;
      *(undefined8 *)(this + 0x270) = uVar3;
      *(undefined8 *)(this + 0x278) = uVar3;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))
                  (_LC16,uVar3,uVar3,plVar1,*(undefined8 *)(this + 0x228),
                   *(undefined8 *)(this + 0x248));
      }
      clock_gettime(0,(timespec *)(this + 0x2f8));
      if (*(long *)(param_1 + 0x28) != 0) {
        local_1c8 = 0;
        local_1d0 = 0;
        local_1d8 = &local_1c8;
        std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)&local_1c8);
        std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
        if (local_1d8 != &local_1c8) {
          operator_delete(local_1d8,CONCAT71(uStack_1c7,local_1c8) + 1);
        }
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"\t time ",7);
        poVar5 = std::ostream::_M_insert<double>
                           ((((double)(*(long *)(this + 0x300) - *(long *)(this + 0x2f0)) * __LC20 +
                             (double)(*(long *)(this + 0x2f8) - *(long *)(this + 0x2e8))) * _LC21) /
                            _LC21);
        std::__ostream_insert<char,std::char_traits<char>>(poVar5,"s",1);
        plVar1 = *(long **)(poVar5 + *(long *)(*(long *)poVar5 + -0x18) + 0xf0);
        if (plVar1 == (long *)0x0) goto LAB_001017c3;
        if ((char)plVar1[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar1 + 0x30))(plVar1);
          }
        }
        std::ostream::put((char)poVar5);
        std::ostream::flush();
        plVar1 = *(long **)(param_1 + 0x28);
        pcVar2 = *(code **)(*plVar1 + 0x10);
        local_1d0 = 0;
        local_1c8 = 0;
        if (local_188._0_8_ == 0) {
          local_1d8 = &local_1c8;
          std::__cxx11::string::_M_assign((string *)&local_1d8);
        }
        else {
          local_1d8 = &local_1c8;
          std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
        }
        (*pcVar2)(plVar1,local_1d8);
        if (local_1d8 != &local_1c8) {
          operator_delete(local_1d8,CONCAT71(uStack_1c7,local_1c8) + 1);
        }
      }
      local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
      local_1b8 = std::ios_base::ios_base;
      puStack_1b0 = std::ios_base::ios_base;
      if (local_168 != &local_158) {
        operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
      }
      puStack_1b0 = std::ios_base::~ios_base;
      std::locale::~locale(local_178);
      local_1b8 = _init;
      *(undefined8 *)((long)&local_1b8 + *(long *)(_init + -0x18)) = _locale;
      local_148[0] = std::ios::init;
      std::ios_base::~ios_base((ios_base *)local_148);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001017c8;
    }
    local_1c8 = 0;
    local_1d0 = 0;
    local_1d8 = &local_1c8;
    std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)&local_1c8);
    std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
    if (local_1d8 != &local_1c8) {
      operator_delete(local_1d8,CONCAT71(uStack_1c7,local_1c8) + 1);
    }
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&local_1b8,"\t # primitives               ",0x1d);
    (**(code **)(**(long **)(this + 0x318) + 0x18))();
    poVar5 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1b8);
    plVar1 = *(long **)(poVar5 + *(long *)(*(long *)poVar5 + -0x18) + 0xf0);
    if (plVar1 != (long *)0x0) {
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put((char)poVar5);
      std::ostream::flush();
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&local_1b8,"\t # inside surface           ",0x1d);
      (**(code **)(**(long **)(this + 0x318) + 0x28))();
      poVar5 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1b8);
      plVar1 = *(long **)(poVar5 + *(long *)(*(long *)poVar5 + -0x18) + 0xf0);
      if (plVar1 != (long *)0x0) {
        if ((char)plVar1[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar1 + 0x30))(plVar1,10);
          }
        }
        std::ostream::put((char)poVar5);
        std::ostream::flush();
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&local_1b8,"\t # on surface               ",0x1d);
        (**(code **)(**(long **)(this + 0x318) + 0x20))();
        poVar5 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1b8);
        plVar1 = *(long **)(poVar5 + *(long *)(*(long *)poVar5 + -0x18) + 0xf0);
        if (plVar1 != (long *)0x0) {
          if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar1 + 0x30))();
            }
          }
          std::ostream::put((char)poVar5);
          std::ostream::flush();
          plVar1 = *(long **)(param_1 + 0x28);
          pcVar2 = *(code **)(*plVar1 + 0x10);
          local_1d0 = 0;
          local_1c8 = 0;
          if (local_188._0_8_ == 0) {
            local_1d8 = &local_1c8;
            std::__cxx11::string::_M_assign((string *)&local_1d8);
          }
          else {
            local_1d8 = &local_1c8;
            std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
          }
          (*pcVar2)(plVar1,local_1d8);
          if (local_1d8 != &local_1c8) {
            operator_delete(local_1d8,CONCAT71(uStack_1c7,local_1c8) + 1);
          }
          goto LAB_00101316;
        }
      }
    }
  }
  else {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"+ ",2);
    poVar5 = std::__ostream_insert<char,std::char_traits<char>>
                       ((ostream *)&local_1b8,*(char **)(this + 0x228),*(long *)(this + 0x230));
    plVar1 = *(long **)(poVar5 + *(long *)(*(long *)poVar5 + -0x18) + 0xf0);
    if (plVar1 != (long *)0x0) {
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))();
        }
      }
      std::ostream::put((char)poVar5);
      std::ostream::flush();
      plVar1 = *(long **)(param_1 + 0x28);
      pcVar2 = *(code **)(*plVar1 + 0x10);
      local_1d0 = 0;
      local_1c8 = 0;
      local_1d8 = &local_1c8;
      if (local_188._0_8_ == 0) {
        std::__cxx11::string::_M_assign((string *)&local_1d8);
      }
      else {
        std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
      }
      (*pcVar2)(plVar1,local_1d8);
      if (local_1d8 != &local_1c8) {
        operator_delete(local_1d8,CONCAT71(uStack_1c7,local_1c8) + 1);
      }
      goto LAB_0010102e;
    }
  }
LAB_001017c3:
  std::__throw_bad_cast();
LAB_001017c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::CreateVHACD() */

undefined8 * VHACD::CreateVHACD(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x350);
  uVar2 = _UNK_0010f338;
  uVar1 = __LC7;
  *puVar3 = &PTR_Cancel_0010f258;
  puVar3[0x45] = puVar3 + 0x47;
  puVar3[0x43] = uVar1;
  puVar3[0x44] = uVar2;
  *(undefined1 (*) [16])(puVar3 + 0x5d) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x5f) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x52) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x54) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x56) = (undefined1  [16])0x0;
  puVar3[1] = 0;
  puVar3[0x42] = 0;
  puVar3[0x46] = 0;
  *(undefined1 *)(puVar3 + 0x47) = 0;
  puVar3[0x49] = puVar3 + 0x4b;
  puVar3[0x4a] = 0;
  *(undefined1 *)(puVar3 + 0x4b) = 0;
  *(undefined4 *)((long)puVar3 + 0x34c) = 1;
  puVar3[0x58] = 0;
  puVar3[0x61] = 0x40;
  puVar3[0x59] = 0;
  puVar3[0x4f] = 0;
  *(undefined1 (*) [16])(puVar3 + 0x62) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x4d) = (undefined1  [16])0x0;
  std::__cxx11::string::_M_replace((ulong)(puVar3 + 0x45),0,(char *)0x0,0x108fa7);
  std::__cxx11::string::_M_replace((ulong)(puVar3 + 0x49),0,(char *)puVar3[0x4a],0x108fa7);
  *(undefined1 *)(puVar3 + 0x69) = 0;
  *(undefined1 (*) [16])(puVar3 + 0x5a) = (undefined1  [16])0x0;
  uVar1 = _LC1;
  puVar3[0x5c] = 0;
  puVar3[0x58] = uVar1;
  puVar3[0x54] = uVar1;
  puVar3[0x50] = uVar1;
  return puVar3;
}



/* VHACD::VHACD::ComputePrimitiveSet(VHACD::IVHACD::Parameters const&) */

void __thiscall VHACD::VHACD::ComputePrimitiveSet(VHACD *this,Parameters *param_1)

{
  if (this[0x348] != (VHACD)0x0) {
    return;
  }
  ComputePrimitiveSet(this,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::ComputePreferredCuttingDirection(VHACD::PrimitiveSet const*, VHACD::Vec3<double>&) */

double VHACD::ComputePreferredCuttingDirection(PrimitiveSet *param_1,Vec3 *param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar2 = (double)(**(code **)(*(long *)param_1 + 0x30))(param_1,0);
  dVar3 = (double)(**(code **)(*(long *)param_1 + 0x30))(param_1,1);
  dVar4 = (double)(**(code **)(*(long *)param_1 + 0x30))(param_1,2);
  dVar5 = _LC1;
  dVar7 = (dVar3 - dVar4) * (dVar3 - dVar4);
  dVar6 = (dVar2 - dVar4) * (dVar2 - dVar4);
  dVar8 = (dVar2 - dVar3) * (dVar2 - dVar3);
  if (dVar6 <= dVar7) {
    if ((dVar6 < dVar7) && (dVar6 < dVar8)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      uVar1 = _UNK_0010f378;
      dVar5 = dVar4 * dVar4 + dVar2 * dVar2;
      *(undefined8 *)param_2 = __LC25;
      *(undefined8 *)(param_2 + 8) = uVar1;
      if (dVar5 == 0.0) {
        return 0.0;
      }
      return _LC1 - dVar6 / dVar5;
    }
  }
  else if (dVar7 < dVar8) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(double *)param_2 = dVar5;
    *(undefined8 *)(param_2 + 8) = 0;
    dVar5 = dVar4 * dVar4 + dVar3 * dVar3;
    if (dVar5 == 0.0) {
      return 0.0;
    }
    return _LC1 - dVar7 / dVar5;
  }
  *(undefined1 (*) [16])param_2 = (undefined1  [16])0x0;
  dVar5 = _LC1;
  *(double *)(param_2 + 0x10) = _LC1;
  dVar2 = dVar2 * dVar2 + dVar3 * dVar3;
  if (dVar2 == 0.0) {
    return 0.0;
  }
  return dVar5 - dVar8 / dVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::ComputeAxesAlignedClippingPlanes(VHACD::VoxelSet const&, short,
   VHACD::SArray<VHACD::Plane, 64ul>&) */

void VHACD::ComputeAxesAlignedClippingPlanes(VoxelSet *param_1,short param_2,SArray *param_3)

{
  double dVar1;
  double dVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  void *pvVar11;
  ulong uVar12;
  SArray *pSVar13;
  short sVar14;
  short sVar15;
  ulong uVar16;
  ulong uVar17;
  short sVar18;
  
  uVar9 = _LC27;
  dVar6 = _LC26;
  sVar3 = *(short *)(param_1 + 0xa50);
  sVar14 = *(short *)(param_1 + 0xa48);
  sVar4 = *(short *)(param_1 + 0xa4e);
  sVar15 = *(short *)(param_1 + 0xa4a);
  sVar5 = *(short *)(param_1 + 0xa52);
  sVar18 = *(short *)(param_1 + 0xa4c);
  if (sVar14 <= sVar4) {
    uVar12 = *(ulong *)(param_3 + 0xa08);
    uVar17 = *(ulong *)(param_3 + 0xa10);
    do {
      iVar10 = (int)sVar14;
      dVar1 = *(double *)(param_1 + 0x9b0);
      dVar2 = *(double *)(param_1 + 0x998);
      uVar16 = uVar17;
      if (uVar12 == uVar17) {
        uVar16 = uVar17 * 2;
        uVar12 = 0xffffffffffffffff;
        if (uVar16 < 0x333333333333334) {
          uVar12 = uVar17 * 0x50;
        }
        pvVar11 = operator_new__(uVar12);
        pSVar13 = param_3;
        if (*(long *)(param_3 + 0xa10) != 0x40) {
          pSVar13 = *(SArray **)(param_3 + 0xa00);
        }
        __memcpy_chk(pvVar11,pSVar13,*(long *)(param_3 + 0xa10) * 0x28,uVar12);
        if (*(void **)(param_3 + 0xa00) != (void *)0x0) {
          operator_delete__(*(void **)(param_3 + 0xa00));
        }
        *(void **)(param_3 + 0xa00) = pvVar11;
        uVar12 = *(ulong *)(param_3 + 0xa08);
        *(ulong *)(param_3 + 0xa10) = uVar16;
      }
      uVar7 = _LC1;
      pSVar13 = param_3;
      if (uVar16 != 0x40) {
        pSVar13 = *(SArray **)(param_3 + 0xa00);
      }
      pSVar13 = pSVar13 + uVar12 * 0x28;
      *(ulong *)(param_3 + 0xa08) = uVar12 + 1;
      *(short *)(pSVar13 + 0x24) = sVar14;
      sVar14 = sVar14 + param_2;
      *(undefined8 *)(pSVar13 + 0x10) = 0;
      *(undefined4 *)(pSVar13 + 0x20) = 0;
      *(undefined8 *)pSVar13 = uVar7;
      *(undefined8 *)(pSVar13 + 8) = 0;
      *(ulong *)(pSVar13 + 0x18) = (ulong)(((double)iVar10 + dVar6) * dVar1 + dVar2) ^ uVar9;
      uVar12 = uVar12 + 1;
      uVar17 = uVar16;
    } while (sVar14 <= sVar4);
  }
  uVar9 = _LC27;
  dVar6 = _LC26;
  if (sVar15 <= sVar3) {
    uVar12 = *(ulong *)(param_3 + 0xa08);
    uVar17 = *(ulong *)(param_3 + 0xa10);
    do {
      iVar10 = (int)sVar15;
      dVar1 = *(double *)(param_1 + 0x9b0);
      dVar2 = *(double *)(param_1 + 0x9a0);
      uVar16 = uVar17;
      if (uVar12 == uVar17) {
        uVar16 = uVar17 * 2;
        uVar12 = 0xffffffffffffffff;
        if (uVar16 < 0x333333333333334) {
          uVar12 = uVar17 * 0x50;
        }
        pvVar11 = operator_new__(uVar12);
        pSVar13 = param_3;
        if (*(long *)(param_3 + 0xa10) != 0x40) {
          pSVar13 = *(SArray **)(param_3 + 0xa00);
        }
        __memcpy_chk(pvVar11,pSVar13,*(long *)(param_3 + 0xa10) * 0x28,uVar12);
        if (*(void **)(param_3 + 0xa00) != (void *)0x0) {
          operator_delete__(*(void **)(param_3 + 0xa00));
        }
        *(void **)(param_3 + 0xa00) = pvVar11;
        uVar12 = *(ulong *)(param_3 + 0xa08);
        *(ulong *)(param_3 + 0xa10) = uVar16;
      }
      uVar8 = _UNK_0010f378;
      uVar7 = __LC25;
      pSVar13 = param_3;
      if (uVar16 != 0x40) {
        pSVar13 = *(SArray **)(param_3 + 0xa00);
      }
      pSVar13 = pSVar13 + uVar12 * 0x28;
      *(ulong *)(param_3 + 0xa08) = uVar12 + 1;
      *(short *)(pSVar13 + 0x24) = sVar15;
      sVar15 = sVar15 + param_2;
      *(undefined8 *)(pSVar13 + 0x10) = 0;
      *(undefined4 *)(pSVar13 + 0x20) = 1;
      *(undefined8 *)pSVar13 = uVar7;
      *(undefined8 *)(pSVar13 + 8) = uVar8;
      *(ulong *)(pSVar13 + 0x18) = (ulong)(((double)iVar10 + dVar6) * dVar1 + dVar2) ^ uVar9;
      uVar12 = uVar12 + 1;
      uVar17 = uVar16;
    } while (sVar15 <= sVar3);
  }
  uVar9 = _LC27;
  dVar6 = _LC26;
  if (sVar18 <= sVar5) {
    uVar12 = *(ulong *)(param_3 + 0xa08);
    uVar17 = *(ulong *)(param_3 + 0xa10);
    do {
      iVar10 = (int)sVar18;
      dVar1 = *(double *)(param_1 + 0x9b0);
      dVar2 = *(double *)(param_1 + 0x9a8);
      uVar16 = uVar17;
      if (uVar12 == uVar17) {
        uVar16 = uVar17 * 2;
        uVar12 = 0xffffffffffffffff;
        if (uVar16 < 0x333333333333334) {
          uVar12 = uVar17 * 0x50;
        }
        pvVar11 = operator_new__(uVar12);
        pSVar13 = param_3;
        if (*(long *)(param_3 + 0xa10) != 0x40) {
          pSVar13 = *(SArray **)(param_3 + 0xa00);
        }
        __memcpy_chk(pvVar11,pSVar13,*(long *)(param_3 + 0xa10) * 0x28,uVar12);
        if (*(void **)(param_3 + 0xa00) != (void *)0x0) {
          operator_delete__(*(void **)(param_3 + 0xa00));
        }
        *(ulong *)(param_3 + 0xa10) = uVar16;
        *(void **)(param_3 + 0xa00) = pvVar11;
        uVar12 = *(ulong *)(param_3 + 0xa08);
      }
      uVar7 = _LC1;
      pSVar13 = param_3;
      if (uVar16 != 0x40) {
        pSVar13 = *(SArray **)(param_3 + 0xa00);
      }
      pSVar13 = pSVar13 + uVar12 * 0x28;
      *(ulong *)(param_3 + 0xa08) = uVar12 + 1;
      *(short *)(pSVar13 + 0x24) = sVar18;
      sVar18 = sVar18 + param_2;
      *(undefined8 *)(pSVar13 + 0x10) = uVar7;
      *(undefined4 *)(pSVar13 + 0x20) = 2;
      *(undefined1 (*) [16])pSVar13 = (undefined1  [16])0x0;
      *(ulong *)(pSVar13 + 0x18) = (ulong)(((double)iVar10 + dVar6) * dVar1 + dVar2) ^ uVar9;
      uVar12 = uVar12 + 1;
      uVar17 = uVar16;
    } while (sVar18 <= sVar5);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::ComputeAxesAlignedClippingPlanes(VHACD::TetrahedronSet const&, short,
   VHACD::SArray<VHACD::Plane, 64ul>&) */

void VHACD::ComputeAxesAlignedClippingPlanes(TetrahedronSet *param_1,short param_2,SArray *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  short sVar8;
  int iVar9;
  void *pvVar10;
  ulong uVar11;
  SArray *pSVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar7 = _LC27;
  dVar1 = *(double *)(param_1 + 0x9a0);
  dVar2 = *(double *)(param_1 + 0x998);
  dVar3 = *(double *)(param_1 + 0x9a8);
  dVar4 = *(double *)(param_1 + 0x9b0);
  sVar8 = (short)(int)((*(double *)(param_1 + 0x9c0) - dVar3) / dVar2 + _LC26);
  sVar13 = (short)(int)((*(double *)(param_1 + 0x9b8) - dVar1) / dVar2 + _LC26);
  sVar14 = (short)(int)((*(double *)(param_1 + 0x9c8) - dVar4) / dVar2 + _LC26);
  if (-1 < sVar13) {
    sVar15 = 0;
    uVar11 = *(ulong *)(param_3 + 0xa08);
    uVar17 = *(ulong *)(param_3 + 0xa10);
    do {
      iVar9 = (int)sVar15;
      uVar16 = uVar17;
      if (uVar11 == uVar17) {
        uVar16 = uVar17 * 2;
        uVar11 = 0xffffffffffffffff;
        if (uVar16 < 0x333333333333334) {
          uVar11 = uVar17 * 0x50;
        }
        pvVar10 = operator_new__(uVar11);
        pSVar12 = param_3;
        if (*(long *)(param_3 + 0xa10) != 0x40) {
          pSVar12 = *(SArray **)(param_3 + 0xa00);
        }
        __memcpy_chk(pvVar10,pSVar12,*(long *)(param_3 + 0xa10) * 0x28,uVar11);
        if (*(void **)(param_3 + 0xa00) != (void *)0x0) {
          operator_delete__(*(void **)(param_3 + 0xa00));
        }
        *(void **)(param_3 + 0xa00) = pvVar10;
        uVar11 = *(ulong *)(param_3 + 0xa08);
        *(ulong *)(param_3 + 0xa10) = uVar16;
      }
      uVar5 = _LC1;
      pSVar12 = param_3;
      if (uVar16 != 0x40) {
        pSVar12 = *(SArray **)(param_3 + 0xa00);
      }
      pSVar12 = pSVar12 + uVar11 * 0x28;
      *(ulong *)(param_3 + 0xa08) = uVar11 + 1;
      *(short *)(pSVar12 + 0x24) = sVar15;
      sVar15 = sVar15 + param_2;
      *(undefined8 *)(pSVar12 + 0x10) = 0;
      *(undefined4 *)(pSVar12 + 0x20) = 0;
      *(undefined8 *)pSVar12 = uVar5;
      *(undefined8 *)(pSVar12 + 8) = 0;
      *(ulong *)(pSVar12 + 0x18) = (ulong)((double)iVar9 * dVar2 + dVar1) ^ uVar7;
      uVar11 = uVar11 + 1;
      uVar17 = uVar16;
    } while (sVar15 <= sVar13);
  }
  uVar7 = _LC27;
  if (-1 < sVar8) {
    sVar13 = 0;
    uVar11 = *(ulong *)(param_3 + 0xa08);
    uVar17 = *(ulong *)(param_3 + 0xa10);
    do {
      iVar9 = (int)sVar13;
      uVar16 = uVar17;
      if (uVar11 == uVar17) {
        uVar16 = uVar17 * 2;
        uVar11 = 0xffffffffffffffff;
        if (uVar16 < 0x333333333333334) {
          uVar11 = uVar17 * 0x50;
        }
        pvVar10 = operator_new__(uVar11);
        pSVar12 = param_3;
        if (*(long *)(param_3 + 0xa10) != 0x40) {
          pSVar12 = *(SArray **)(param_3 + 0xa00);
        }
        __memcpy_chk(pvVar10,pSVar12,*(long *)(param_3 + 0xa10) * 0x28,uVar11);
        if (*(void **)(param_3 + 0xa00) != (void *)0x0) {
          operator_delete__(*(void **)(param_3 + 0xa00));
        }
        *(void **)(param_3 + 0xa00) = pvVar10;
        uVar11 = *(ulong *)(param_3 + 0xa08);
        *(ulong *)(param_3 + 0xa10) = uVar16;
      }
      uVar6 = _UNK_0010f378;
      uVar5 = __LC25;
      pSVar12 = param_3;
      if (uVar16 != 0x40) {
        pSVar12 = *(SArray **)(param_3 + 0xa00);
      }
      pSVar12 = pSVar12 + uVar11 * 0x28;
      *(ulong *)(param_3 + 0xa08) = uVar11 + 1;
      *(short *)(pSVar12 + 0x24) = sVar13;
      sVar13 = sVar13 + param_2;
      *(undefined8 *)(pSVar12 + 0x10) = 0;
      *(undefined4 *)(pSVar12 + 0x20) = 1;
      *(undefined8 *)pSVar12 = uVar5;
      *(undefined8 *)(pSVar12 + 8) = uVar6;
      *(ulong *)(pSVar12 + 0x18) = (ulong)((double)iVar9 * dVar2 + dVar3) ^ uVar7;
      uVar11 = uVar11 + 1;
      uVar17 = uVar16;
    } while (sVar13 <= sVar8);
  }
  uVar7 = _LC27;
  if (-1 < sVar14) {
    sVar8 = 0;
    uVar11 = *(ulong *)(param_3 + 0xa08);
    uVar17 = *(ulong *)(param_3 + 0xa10);
    do {
      iVar9 = (int)sVar8;
      uVar16 = uVar17;
      if (uVar11 == uVar17) {
        uVar16 = uVar17 * 2;
        uVar11 = 0xffffffffffffffff;
        if (uVar16 < 0x333333333333334) {
          uVar11 = uVar17 * 0x50;
        }
        pvVar10 = operator_new__(uVar11);
        pSVar12 = param_3;
        if (*(long *)(param_3 + 0xa10) != 0x40) {
          pSVar12 = *(SArray **)(param_3 + 0xa00);
        }
        __memcpy_chk(pvVar10,pSVar12,*(long *)(param_3 + 0xa10) * 0x28,uVar11);
        if (*(void **)(param_3 + 0xa00) != (void *)0x0) {
          operator_delete__(*(void **)(param_3 + 0xa00));
        }
        *(void **)(param_3 + 0xa00) = pvVar10;
        uVar11 = *(ulong *)(param_3 + 0xa08);
        *(ulong *)(param_3 + 0xa10) = uVar16;
      }
      uVar5 = _LC1;
      pSVar12 = param_3;
      if (uVar16 != 0x40) {
        pSVar12 = *(SArray **)(param_3 + 0xa00);
      }
      pSVar12 = pSVar12 + uVar11 * 0x28;
      *(ulong *)(param_3 + 0xa08) = uVar11 + 1;
      *(short *)(pSVar12 + 0x24) = sVar8;
      sVar8 = sVar8 + param_2;
      *(undefined8 *)(pSVar12 + 0x10) = uVar5;
      *(undefined4 *)(pSVar12 + 0x20) = 2;
      *(undefined1 (*) [16])pSVar12 = (undefined1  [16])0x0;
      *(ulong *)(pSVar12 + 0x18) = (ulong)((double)iVar9 * dVar2 + dVar4) ^ uVar7;
      uVar11 = uVar11 + 1;
      uVar17 = uVar16;
    } while (sVar8 <= sVar14);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::RefineAxesAlignedClippingPlanes(VHACD::VoxelSet const&, VHACD::Plane const&, short,
   VHACD::SArray<VHACD::Plane, 64ul>&) */

void VHACD::RefineAxesAlignedClippingPlanes
               (VoxelSet *param_1,Plane *param_2,short param_3,SArray *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  ulong uVar10;
  SArray *pSVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  ulong uVar15;
  ulong uVar16;
  short sVar17;
  uint uVar18;
  
  uVar6 = _LC27;
  dVar3 = _LC26;
  iVar9 = (int)param_3;
  sVar17 = *(short *)(param_2 + 0x24);
  iVar13 = (int)sVar17;
  iVar12 = iVar13 - iVar9;
  uVar7 = (uint)(ushort)param_3;
  if (*(int *)(param_2 + 0x20) == 0) {
    uVar18 = (uint)*(ushort *)(param_1 + 0xa48);
    if ((short)*(ushort *)(param_1 + 0xa48) <= iVar12) {
      uVar18 = iVar13 - uVar7;
    }
    sVar14 = *(short *)(param_1 + 0xa4e);
    if (iVar9 + iVar13 <= (int)*(short *)(param_1 + 0xa4e)) {
      sVar14 = sVar17 + param_3;
    }
    if ((short)uVar18 <= sVar14) {
      uVar10 = *(ulong *)(param_4 + 0xa08);
      uVar16 = *(ulong *)(param_4 + 0xa10);
      do {
        sVar17 = (short)uVar18;
        dVar1 = *(double *)(param_1 + 0x9b0);
        dVar2 = *(double *)(param_1 + 0x998);
        uVar15 = uVar16;
        if (uVar10 == uVar16) {
          uVar15 = uVar16 * 2;
          uVar10 = 0xffffffffffffffff;
          if (uVar15 < 0x333333333333334) {
            uVar10 = uVar16 * 0x50;
          }
          pvVar8 = operator_new__(uVar10);
          pSVar11 = param_4;
          if (*(long *)(param_4 + 0xa10) != 0x40) {
            pSVar11 = *(SArray **)(param_4 + 0xa00);
          }
          __memcpy_chk(pvVar8,pSVar11,*(long *)(param_4 + 0xa10) * 0x28,uVar10);
          if (*(void **)(param_4 + 0xa00) != (void *)0x0) {
            operator_delete__(*(void **)(param_4 + 0xa00));
          }
          *(void **)(param_4 + 0xa00) = pvVar8;
          uVar10 = *(ulong *)(param_4 + 0xa08);
          *(ulong *)(param_4 + 0xa10) = uVar15;
        }
        uVar4 = _LC1;
        pSVar11 = param_4;
        if (uVar15 != 0x40) {
          pSVar11 = *(SArray **)(param_4 + 0xa00);
        }
        pSVar11 = pSVar11 + uVar10 * 0x28;
        *(ulong *)(param_4 + 0xa08) = uVar10 + 1;
        *(short *)(pSVar11 + 0x24) = sVar17;
        uVar18 = uVar18 + 1;
        *(undefined8 *)(pSVar11 + 0x10) = 0;
        *(undefined4 *)(pSVar11 + 0x20) = 0;
        *(undefined8 *)pSVar11 = uVar4;
        *(undefined8 *)(pSVar11 + 8) = 0;
        *(ulong *)(pSVar11 + 0x18) = (ulong)(((double)(int)sVar17 + dVar3) * dVar1 + dVar2) ^ uVar6;
        uVar10 = uVar10 + 1;
        uVar16 = uVar15;
      } while ((short)uVar18 <= sVar14);
    }
  }
  else if (*(int *)(param_2 + 0x20) == 1) {
    uVar18 = (uint)*(ushort *)(param_1 + 0xa4a);
    if ((short)*(ushort *)(param_1 + 0xa4a) <= iVar12) {
      uVar18 = iVar13 - uVar7;
    }
    sVar14 = *(short *)(param_1 + 0xa50);
    if (iVar9 + iVar13 <= (int)*(short *)(param_1 + 0xa50)) {
      sVar14 = sVar17 + param_3;
    }
    if ((short)uVar18 <= sVar14) {
      uVar10 = *(ulong *)(param_4 + 0xa08);
      uVar16 = *(ulong *)(param_4 + 0xa10);
      do {
        sVar17 = (short)uVar18;
        dVar1 = *(double *)(param_1 + 0x9b0);
        dVar2 = *(double *)(param_1 + 0x9a0);
        uVar15 = uVar16;
        if (uVar10 == uVar16) {
          uVar15 = uVar16 * 2;
          uVar10 = 0xffffffffffffffff;
          if (uVar15 < 0x333333333333334) {
            uVar10 = uVar16 * 0x50;
          }
          pvVar8 = operator_new__(uVar10);
          pSVar11 = param_4;
          if (*(long *)(param_4 + 0xa10) != 0x40) {
            pSVar11 = *(SArray **)(param_4 + 0xa00);
          }
          __memcpy_chk(pvVar8,pSVar11,*(long *)(param_4 + 0xa10) * 0x28,uVar10);
          if (*(void **)(param_4 + 0xa00) != (void *)0x0) {
            operator_delete__(*(void **)(param_4 + 0xa00));
          }
          *(void **)(param_4 + 0xa00) = pvVar8;
          uVar10 = *(ulong *)(param_4 + 0xa08);
          *(ulong *)(param_4 + 0xa10) = uVar15;
        }
        uVar5 = _UNK_0010f378;
        uVar4 = __LC25;
        pSVar11 = param_4;
        if (uVar15 != 0x40) {
          pSVar11 = *(SArray **)(param_4 + 0xa00);
        }
        pSVar11 = pSVar11 + uVar10 * 0x28;
        *(ulong *)(param_4 + 0xa08) = uVar10 + 1;
        *(short *)(pSVar11 + 0x24) = sVar17;
        uVar18 = uVar18 + 1;
        *(undefined8 *)(pSVar11 + 0x10) = 0;
        *(undefined4 *)(pSVar11 + 0x20) = 1;
        *(undefined8 *)pSVar11 = uVar4;
        *(undefined8 *)(pSVar11 + 8) = uVar5;
        *(ulong *)(pSVar11 + 0x18) = (ulong)(((double)(int)sVar17 + dVar3) * dVar1 + dVar2) ^ uVar6;
        uVar10 = uVar10 + 1;
        uVar16 = uVar15;
      } while ((short)uVar18 <= sVar14);
    }
  }
  else {
    uVar18 = (uint)*(ushort *)(param_1 + 0xa4c);
    if ((short)*(ushort *)(param_1 + 0xa4c) <= iVar12) {
      uVar18 = iVar13 - uVar7;
    }
    sVar17 = sVar17 + param_3;
    if ((int)*(short *)(param_1 + 0xa52) < iVar9 + iVar13) {
      sVar17 = *(short *)(param_1 + 0xa52);
    }
    if ((short)uVar18 <= sVar17) {
      uVar10 = *(ulong *)(param_4 + 0xa08);
      uVar16 = *(ulong *)(param_4 + 0xa10);
      do {
        sVar14 = (short)uVar18;
        dVar1 = *(double *)(param_1 + 0x9b0);
        dVar2 = *(double *)(param_1 + 0x9a8);
        uVar15 = uVar16;
        if (uVar10 == uVar16) {
          uVar15 = uVar16 * 2;
          uVar10 = 0xffffffffffffffff;
          if (uVar15 < 0x333333333333334) {
            uVar10 = uVar16 * 0x50;
          }
          pvVar8 = operator_new__(uVar10);
          pSVar11 = param_4;
          if (*(long *)(param_4 + 0xa10) != 0x40) {
            pSVar11 = *(SArray **)(param_4 + 0xa00);
          }
          __memcpy_chk(pvVar8,pSVar11,*(long *)(param_4 + 0xa10) * 0x28,uVar10);
          if (*(void **)(param_4 + 0xa00) != (void *)0x0) {
            operator_delete__(*(void **)(param_4 + 0xa00));
          }
          *(void **)(param_4 + 0xa00) = pvVar8;
          uVar10 = *(ulong *)(param_4 + 0xa08);
          *(ulong *)(param_4 + 0xa10) = uVar15;
        }
        uVar4 = _LC1;
        pSVar11 = param_4;
        if (uVar15 != 0x40) {
          pSVar11 = *(SArray **)(param_4 + 0xa00);
        }
        pSVar11 = pSVar11 + uVar10 * 0x28;
        *(ulong *)(param_4 + 0xa08) = uVar10 + 1;
        *(short *)(pSVar11 + 0x24) = sVar14;
        uVar18 = uVar18 + 1;
        *(undefined8 *)(pSVar11 + 0x10) = uVar4;
        *(undefined4 *)(pSVar11 + 0x20) = 2;
        *(undefined1 (*) [16])pSVar11 = (undefined1  [16])0x0;
        *(ulong *)(pSVar11 + 0x18) = (ulong)(((double)(int)sVar14 + dVar3) * dVar1 + dVar2) ^ uVar6;
        uVar10 = uVar10 + 1;
        uVar16 = uVar15;
      } while ((short)uVar18 <= sVar17);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::RefineAxesAlignedClippingPlanes(VHACD::TetrahedronSet const&, VHACD::Plane const&, short,
   VHACD::SArray<VHACD::Plane, 64ul>&) */

void VHACD::RefineAxesAlignedClippingPlanes
               (TetrahedronSet *param_1,Plane *param_2,short param_3,SArray *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *pvVar6;
  SArray *pSVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar5 = _LC27;
  sVar10 = *(short *)(param_2 + 0x24);
  dVar14 = *(double *)(param_1 + 0x9a8);
  dVar15 = *(double *)(param_1 + 0x9b0);
  dVar1 = *(double *)(param_1 + 0x9a0);
  dVar2 = *(double *)(param_1 + 0x998);
  iVar9 = (int)sVar10 - (int)param_3;
  dVar16 = (double)((int)sVar10 + (int)param_3);
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  sVar8 = (short)iVar9;
  if (*(int *)(param_2 + 0x20) == 0) {
    sVar10 = sVar10 + param_3;
    dVar14 = (*(double *)(param_1 + 0x9b8) - dVar1) / dVar2 + _LC26;
    if (dVar14 < dVar16) {
      sVar10 = (short)(int)dVar14;
    }
    if (sVar8 <= sVar10) {
      uVar11 = *(ulong *)(param_4 + 0xa08);
      uVar13 = *(ulong *)(param_4 + 0xa10);
      do {
        sVar8 = (short)iVar9;
        uVar12 = uVar13;
        if (uVar11 == uVar13) {
          uVar12 = uVar13 * 2;
          uVar11 = 0xffffffffffffffff;
          if (uVar12 < 0x333333333333334) {
            uVar11 = uVar13 * 0x50;
          }
          pvVar6 = operator_new__(uVar11);
          pSVar7 = param_4;
          if (*(long *)(param_4 + 0xa10) != 0x40) {
            pSVar7 = *(SArray **)(param_4 + 0xa00);
          }
          __memcpy_chk(pvVar6,pSVar7,*(long *)(param_4 + 0xa10) * 0x28,uVar11);
          if (*(void **)(param_4 + 0xa00) != (void *)0x0) {
            operator_delete__(*(void **)(param_4 + 0xa00));
          }
          *(void **)(param_4 + 0xa00) = pvVar6;
          uVar11 = *(ulong *)(param_4 + 0xa08);
          *(ulong *)(param_4 + 0xa10) = uVar12;
        }
        uVar3 = _LC1;
        pSVar7 = param_4;
        if (uVar12 != 0x40) {
          pSVar7 = *(SArray **)(param_4 + 0xa00);
        }
        pSVar7 = pSVar7 + uVar11 * 0x28;
        *(ulong *)(param_4 + 0xa08) = uVar11 + 1;
        *(short *)(pSVar7 + 0x24) = sVar8;
        iVar9 = iVar9 + 1;
        *(undefined8 *)(pSVar7 + 0x10) = 0;
        *(undefined4 *)(pSVar7 + 0x20) = 0;
        *(undefined8 *)pSVar7 = uVar3;
        *(undefined8 *)(pSVar7 + 8) = 0;
        *(ulong *)(pSVar7 + 0x18) = (ulong)((double)(int)sVar8 * dVar2 + dVar1) ^ uVar5;
        uVar11 = uVar11 + 1;
        uVar13 = uVar12;
      } while ((short)iVar9 <= sVar10);
    }
  }
  else if (*(int *)(param_2 + 0x20) == 1) {
    sVar10 = sVar10 + param_3;
    dVar15 = (*(double *)(param_1 + 0x9c0) - dVar14) / dVar2 + _LC26;
    if (dVar15 < dVar16) {
      sVar10 = (short)(int)dVar15;
    }
    if (sVar8 <= sVar10) {
      uVar11 = *(ulong *)(param_4 + 0xa08);
      uVar13 = *(ulong *)(param_4 + 0xa10);
      do {
        sVar8 = (short)iVar9;
        uVar12 = uVar13;
        if (uVar11 == uVar13) {
          uVar12 = uVar13 * 2;
          uVar11 = 0xffffffffffffffff;
          if (uVar12 < 0x333333333333334) {
            uVar11 = uVar13 * 0x50;
          }
          pvVar6 = operator_new__(uVar11);
          pSVar7 = param_4;
          if (*(long *)(param_4 + 0xa10) != 0x40) {
            pSVar7 = *(SArray **)(param_4 + 0xa00);
          }
          __memcpy_chk(pvVar6,pSVar7,*(long *)(param_4 + 0xa10) * 0x28,uVar11);
          if (*(void **)(param_4 + 0xa00) != (void *)0x0) {
            operator_delete__(*(void **)(param_4 + 0xa00));
          }
          *(void **)(param_4 + 0xa00) = pvVar6;
          uVar11 = *(ulong *)(param_4 + 0xa08);
          *(ulong *)(param_4 + 0xa10) = uVar12;
        }
        uVar4 = _UNK_0010f378;
        uVar3 = __LC25;
        pSVar7 = param_4;
        if (uVar12 != 0x40) {
          pSVar7 = *(SArray **)(param_4 + 0xa00);
        }
        pSVar7 = pSVar7 + uVar11 * 0x28;
        *(ulong *)(param_4 + 0xa08) = uVar11 + 1;
        *(short *)(pSVar7 + 0x24) = sVar8;
        iVar9 = iVar9 + 1;
        *(undefined8 *)(pSVar7 + 0x10) = 0;
        *(undefined4 *)(pSVar7 + 0x20) = 1;
        *(undefined8 *)pSVar7 = uVar3;
        *(undefined8 *)(pSVar7 + 8) = uVar4;
        *(ulong *)(pSVar7 + 0x18) = (ulong)((double)(int)sVar8 * dVar2 + dVar14) ^ uVar5;
        uVar11 = uVar11 + 1;
        uVar13 = uVar12;
      } while ((short)iVar9 <= sVar10);
    }
  }
  else {
    sVar10 = sVar10 + param_3;
    dVar14 = (*(double *)(param_1 + 0x9c8) - dVar15) / dVar2 + _LC26;
    if (dVar14 < dVar16) {
      sVar10 = (short)(int)dVar14;
    }
    if (sVar8 <= sVar10) {
      uVar11 = *(ulong *)(param_4 + 0xa08);
      uVar13 = *(ulong *)(param_4 + 0xa10);
      do {
        sVar8 = (short)iVar9;
        uVar12 = uVar13;
        if (uVar11 == uVar13) {
          uVar12 = uVar13 * 2;
          uVar11 = 0xffffffffffffffff;
          if (uVar12 < 0x333333333333334) {
            uVar11 = uVar13 * 0x50;
          }
          pvVar6 = operator_new__(uVar11);
          pSVar7 = param_4;
          if (*(long *)(param_4 + 0xa10) != 0x40) {
            pSVar7 = *(SArray **)(param_4 + 0xa00);
          }
          __memcpy_chk(pvVar6,pSVar7,*(long *)(param_4 + 0xa10) * 0x28,uVar11);
          if (*(void **)(param_4 + 0xa00) != (void *)0x0) {
            operator_delete__(*(void **)(param_4 + 0xa00));
          }
          *(void **)(param_4 + 0xa00) = pvVar6;
          uVar11 = *(ulong *)(param_4 + 0xa08);
          *(ulong *)(param_4 + 0xa10) = uVar12;
        }
        uVar3 = _LC1;
        pSVar7 = param_4;
        if (uVar12 != 0x40) {
          pSVar7 = *(SArray **)(param_4 + 0xa00);
        }
        pSVar7 = pSVar7 + uVar11 * 0x28;
        *(ulong *)(param_4 + 0xa08) = uVar11 + 1;
        *(short *)(pSVar7 + 0x24) = sVar8;
        iVar9 = iVar9 + 1;
        *(undefined8 *)(pSVar7 + 0x10) = uVar3;
        *(undefined4 *)(pSVar7 + 0x20) = 2;
        *(undefined1 (*) [16])pSVar7 = (undefined1  [16])0x0;
        *(ulong *)(pSVar7 + 0x18) = (ulong)((double)(int)sVar8 * dVar2 + dVar15) ^ uVar5;
        uVar11 = uVar11 + 1;
        uVar13 = uVar12;
      } while ((short)iVar9 <= sVar10);
    }
  }
  return;
}



/* VHACD::VHACD::ComputeBestClippingPlane(VHACD::PrimitiveSet const*, double,
   VHACD::SArray<VHACD::Plane, 64ul> const&, VHACD::Vec3<double> const&, double, double, double,
   int, double, double, VHACD::Plane&, double&, VHACD::IVHACD::Parameters const&) */

void VHACD::VHACD::ComputeBestClippingPlane
               (PrimitiveSet *param_1,double param_2,SArray *param_3,Vec3 *param_4,double param_5,
               double param_6,double param_7,int param_8,double param_9,double param_10,
               Plane *param_11,double *param_12,Parameters *param_13)

{
  if (param_1[0x348] == (PrimitiveSet)0x0) {
    ComputeBestClippingPlane
              (param_1,param_5,param_3,param_4,param_6,param_7,param_9,param_8,param_10,param_10,
               param_11,param_12,param_13);
    return;
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::VHACD::ComputeACD(VHACD::IVHACD::Parameters const&) */

void __thiscall VHACD::VHACD::ComputeACD(VHACD *this,Parameters *param_1)

{
  VHACD VVar1;
  code *pcVar2;
  PrimitiveSet *pPVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  Parameters **ppPVar7;
  streambuf *psVar8;
  ostream *poVar9;
  ios_base *piVar10;
  undefined8 *puVar11;
  ios_base *piVar12;
  long *plVar13;
  long *plVar14;
  ios_base *piVar15;
  Mesh *pMVar16;
  ulong uVar17;
  VHACD *pVVar18;
  double *pdVar19;
  void *pvVar21;
  uint uVar22;
  int iVar23;
  ios_base *piVar24;
  long lVar25;
  short sVar26;
  int iVar27;
  long lVar28;
  size_t __n;
  long lVar29;
  long *plVar30;
  ios_base *piVar31;
  ios_base *piVar32;
  long lVar33;
  Parameters *pPVar34;
  ulong uVar35;
  Parameters *pPVar36;
  long in_FS_OFFSET;
  double dVar37;
  double dVar38;
  double dVar39;
  ulong uVar40;
  double dVar41;
  double dVar42;
  ios_base *local_1da8;
  long *local_1da0;
  ios_base *local_1d98;
  ios_base *local_1d90;
  ios_base *local_1d88;
  pointer_____offset_0x10___ puStack_1d80;
  Parameters **local_1d78;
  ios_base *local_1d70;
  double local_1d38;
  ulong local_1d20;
  double local_1cd0;
  Plane local_1cc8 [48];
  Vec3 local_1c98 [32];
  ios_base *local_1c78;
  size_t local_1c70;
  ulong local_1c68 [2];
  ios_base *local_1c58;
  pointer_____offset_0x10___ puStack_1c50;
  undefined1 local_1c48 [16];
  undefined1 local_1c38 [16];
  undefined1 local_1c28 [16];
  locale local_1c18 [8];
  undefined4 local_1c10;
  Parameters *local_1c08;
  char *local_1c00;
  Parameters local_1bf8;
  undefined7 uStack_1bf7;
  code *local_1be8 [27];
  undefined8 local_1b10;
  undefined2 local_1b08;
  undefined1 local_1b00 [16];
  undefined1 local_1af0 [16];
  long local_1ad8 [64];
  long *local_18d8;
  ios_base *local_18d0;
  ios_base *piStack_18c8;
  undefined8 local_18b8 [64];
  undefined8 *local_16b8;
  ios_base *local_16b0;
  ios_base *piStack_16a8;
  ios_base local_1698 [512];
  ios_base *local_1498;
  ios_base *local_1490;
  ios_base *piStack_1488;
  SArray local_1478 [2560];
  void *local_a78;
  ios_base *local_a70;
  ios_base *piStack_a68;
  undefined1 *local_a58;
  undefined8 local_a50;
  undefined1 local_a48;
  undefined7 uStack_a47;
  void *local_58;
  ios_base *local_50;
  ios_base *piStack_48;
  long local_40;
  long lVar20;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x348] != (VHACD)0x0) goto LAB_0010301d;
  clock_gettime(0,(timespec *)(this + 0x2e8));
  std::__cxx11::string::_M_replace((ulong)(this + 0x228),0,*(char **)(this + 0x230),0x109278);
  *(undefined8 *)(this + 0x270) = 0;
  pPVar34 = &local_1bf8;
  std::ios_base::ios_base((ios_base *)local_1be8);
  local_1be8[0] = std::ios::init;
  local_1b00 = (undefined1  [16])0x0;
  local_1af0 = (undefined1  [16])0x0;
  local_1b08 = 0;
  local_1c58 = _init;
  local_1b10 = 0;
  psVar8 = (streambuf *)((ostream *)&local_1c58 + *(long *)(_init + -0x18));
  *(undefined8 *)psVar8 = _locale;
  std::ios::init(psVar8);
  local_1be8[0] = std::__ostream_insert<char,std::char_traits<char>>;
  local_1c58 = (ios_base *)PTR_vtable_0010f408;
  puStack_1c50 = PTR_vtable_0010f400;
  local_1c48 = (undefined1  [16])0x0;
  local_1c38 = (undefined1  [16])0x0;
  local_1c28 = (undefined1  [16])0x0;
  std::locale::locale(local_1c18);
  local_1c10 = 0x10;
  puStack_1c50 = std::ios_base::ios_base;
  local_1c00 = (char *)0x0;
  local_1bf8 = (Parameters)0x0;
  local_1c08 = pPVar34;
  std::ios::init((streambuf *)local_1be8);
  piVar31 = (ios_base *)local_1be8;
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1c58,"+ ",2);
    piVar10 = (ios_base *)&local_1c58;
    poVar9 = std::__ostream_insert<char,std::char_traits<char>>
                       ((ostream *)&local_1c58,*(char **)(this + 0x228),*(long *)(this + 0x230));
    plVar13 = *(long **)(poVar9 + *(long *)(*(long *)poVar9 + -0x18) + 0xf0);
    piVar12 = (ios_base *)&local_1c58;
    pPVar36 = pPVar34;
    if (plVar13 == (long *)0x0) goto LAB_00105abb;
    if ((char)plVar13[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar13 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar13 + 0x30))(plVar13);
      }
    }
    std::ostream::put((char)poVar9);
    std::ostream::flush();
    plVar13 = *(long **)(param_1 + 0x28);
    piVar31 = *(ios_base **)(*plVar13 + 0x10);
    local_a50 = 0;
    local_a48 = 0;
    local_a58 = &local_a48;
    if (local_1c28._0_8_ == 0) {
      std::__cxx11::string::_M_assign((string *)&local_a58);
    }
    else {
      std::__cxx11::string::_M_replace((ulong)&local_a58,0,(char *)0x0,local_1c38._8_8_);
    }
    (*(code *)piVar31)(plVar13,local_a58);
    if (local_a58 != &local_a48) {
      operator_delete(local_a58,CONCAT71(uStack_a47,local_a48) + 1);
    }
  }
  piStack_16a8 = _UNK_0010f398;
  local_16b0 = __LC29;
  piStack_48 = _UNK_0010f338;
  local_50 = __LC7;
  local_18d8 = (long *)0x0;
  local_16b8 = (undefined8 *)0x0;
  local_18b8[0] = *(undefined8 *)(this + 0x318);
  local_1498 = (ios_base *)0x0;
  *(undefined8 *)(this + 0x318) = 0;
  local_a78 = (void *)0x0;
  *(double *)(this + 0x2c8) = _LC1;
  local_58 = (void *)0x0;
  local_18d0 = local_50;
  piStack_18c8 = piStack_48;
  local_1490 = local_50;
  piStack_1488 = piStack_48;
  local_a70 = local_50;
  piStack_a68 = piStack_48;
  if (*(uint *)(param_1 + 0x50) < 3) {
    uVar22 = 2;
LAB_001033b4:
    local_1d78 = (Parameters **)CONCAT71(local_1d78._1_7_,1);
    local_1d98 = (ios_base *)0x1;
    VVar1 = this[0x348];
    local_1d20 = 1;
    piVar10 = local_50;
    while (local_18d0 = piVar10, VVar1 == (VHACD)0x0) {
      local_1c70 = 0;
      local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
      local_1c78 = (ios_base *)local_1c68;
      std::__cxx11::string::_M_replace((ulong)&local_1c08,0,local_1c00,(ulong)local_1c68);
      std::__cxx11::stringbuf::_M_sync((char *)&puStack_1c50,(ulong)local_1c08,0);
      if (local_1c78 != (ios_base *)local_1c68) {
        operator_delete(local_1c78,local_1c68[0] + 1);
      }
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&local_1c58,"Subdivision level ",0x12);
      std::ostream::_M_insert<unsigned_long>((ulong)&local_1c58);
      local_1c70 = 0;
      local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
      if (local_1c28._0_8_ == 0) {
        local_1c78 = (ios_base *)local_1c68;
        std::__cxx11::string::_M_assign((string *)&local_1c78);
      }
      else {
        local_1c78 = (ios_base *)local_1c68;
        std::__cxx11::string::_M_replace((ulong)&local_1c78,0,(char *)0x0,local_1c38._8_8_);
      }
      local_1da8 = (ios_base *)local_1c68;
      piVar12 = *(ios_base **)(this + 0x248);
      if (piVar12 == (ios_base *)(this + 600)) {
        if (local_1c78 == local_1da8) goto LAB_00104a70;
        *(ios_base **)(this + 0x248) = local_1c78;
        *(size_t *)(this + 0x250) = local_1c70;
        *(ulong *)(this + 600) = local_1c68[0];
LAB_001049ff:
        local_1c78 = local_1da8;
        uVar40 = local_1c68[0];
      }
      else if (local_1c78 == local_1da8) {
LAB_00104a70:
        if (local_1c70 != 0) {
          if (local_1c70 == 1) {
            *piVar12 = local_1c68[0]._0_1_;
            piVar12 = *(ios_base **)(this + 0x248);
          }
          else {
            memcpy(piVar12,local_1da8,local_1c70);
            piVar12 = *(ios_base **)(this + 0x248);
          }
        }
        *(size_t *)(this + 0x250) = local_1c70;
        piVar12[local_1c70] = (ios_base)0x0;
        uVar40 = local_1c68[0];
      }
      else {
        uVar40 = *(ulong *)(this + 600);
        *(ios_base **)(this + 0x248) = local_1c78;
        *(size_t *)(this + 0x250) = local_1c70;
        *(ulong *)(this + 600) = local_1c68[0];
        local_1c78 = piVar12;
        if (piVar12 == (ios_base *)0x0) goto LAB_001049ff;
      }
      local_1c68[0] = uVar40;
      local_1da8 = (ios_base *)local_1c68;
      local_1c70 = 0;
      *local_1c78 = (ios_base)0x0;
      if (local_1c78 != local_1da8) {
        operator_delete(local_1c78,local_1c68[0] + 1);
      }
      pPVar36 = param_1;
      if (*(long *)(param_1 + 0x28) != 0) {
        local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
        local_1c78 = local_1da8;
        local_1c70 = 0;
        std::__cxx11::string::_M_replace((ulong)&local_1c08,0,local_1c00,(ulong)local_1da8);
        std::__cxx11::stringbuf::_M_sync((char *)&puStack_1c50,(ulong)local_1c08,0);
        if (local_1c78 != local_1da8) {
          operator_delete(local_1c78,local_1c68[0] + 1);
        }
        std::__ostream_insert<char,std::char_traits<char>>
                  ((ostream *)&local_1c58,"\t Subdivision level ",0x14);
        piVar10 = (ios_base *)&local_1c58;
        poVar9 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1c58);
        piVar12 = *(ios_base **)(poVar9 + *(long *)(*(long *)poVar9 + -0x18) + 0xf0);
        if (piVar12 == (ios_base *)0x0) goto LAB_00105abb;
        if (piVar12[0x38] == (ios_base)0x0) {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*(long *)piVar12 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*(long *)piVar12 + 0x30))(piVar12);
          }
        }
        std::ostream::put((char)poVar9);
        std::ostream::flush();
        plVar13 = *(long **)(param_1 + 0x28);
        pcVar2 = *(code **)(*plVar13 + 0x10);
        local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
        local_1c70 = 0;
        local_1c78 = local_1da8;
        if (local_1c28._0_8_ == 0) {
          std::__cxx11::string::_M_assign((string *)&local_1c78);
        }
        else {
          std::__cxx11::string::_M_replace((ulong)&local_1c78,0,(char *)0x0,local_1c38._8_8_);
        }
        (*pcVar2)(plVar13);
        if (local_1c78 != local_1da8) {
          operator_delete(local_1c78,local_1c68[0] + 1);
        }
      }
      plVar13 = *(long **)(param_1 + 0x20);
      *(undefined8 *)(this + 0x278) = 0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x10))
                  (*(undefined8 *)(this + 0x268),*(undefined8 *)(this + 0x270),0,plVar13,
                   *(undefined8 *)(this + 0x228),*(undefined8 *)(this + 0x248));
        plVar13 = *(long **)(param_1 + 0x20);
      }
      piVar31 = (ios_base *)0x0;
      local_1d38 = 0.0;
      do {
        ppPVar7 = local_1d78;
        cVar6 = (char)local_1d78;
        local_1d78 = (Parameters **)CONCAT71(local_1d78._1_7_,this[0x348]);
        if (this[0x348] != (VHACD)0x0) break;
        local_1d90 = (ios_base *)(double)piVar31;
        local_1d88 = (ios_base *)(double)local_1d98;
        dVar38 = (_LC17 * (double)local_1d90) / (double)local_1d88;
        *(double *)(this + 0x278) = dVar38;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x10))
                    (*(undefined8 *)(this + 0x268),plVar13,*(undefined8 *)(this + 0x228),
                     *(undefined8 *)(this + 0x248));
        }
        puVar11 = local_18b8;
        if (piStack_16a8 != (ios_base *)0x40) {
          puVar11 = local_16b8;
        }
        pPVar3 = (PrimitiveSet *)puVar11[(long)piVar31];
        puVar11[(long)piVar31] = 0;
        dVar39 = (double)(**(code **)(*(long *)pPVar3 + 0x40))(pPVar3);
        (**(code **)(*(long *)pPVar3 + 0x78))(pPVar3);
        (**(code **)(*(long *)pPVar3 + 0x80))(pPVar3);
        if (*(int *)(param_1 + 0x40) != 0) {
          (**(code **)(*(long *)pPVar3 + 0x88))(pPVar3);
        }
        (**(code **)(*(long *)pPVar3 + 0x70))(pPVar3,pPVar3 + 8,1);
        uVar40 = ::VHACD::Mesh::ComputeVolume();
        dVar41 = (double)(uVar40 & __LC8);
        if (cVar6 == '\0') {
          dVar37 = *(double *)(this + 0x2c8);
        }
        else {
          *(double *)(this + 0x2c8) = dVar41;
          dVar37 = dVar41;
        }
        dVar37 = (double)((ulong)(dVar41 - dVar39) & __LC8) / dVar37;
        dVar39 = (double)(**(code **)(*(long *)pPVar3 + 0x38))(pPVar3);
        local_1d70 = (ios_base *)((dVar39 * __LC31) / *(double *)(this + 0x2c8));
        if (*(long *)(param_1 + 0x28) != 0) {
          local_1c78 = local_1da8;
          std::__cxx11::string::_M_construct<char_const*>((string *)&local_1c78,&_LC3,&_LC3);
          std::__cxx11::string::_M_replace((ulong)&local_1c08,0,local_1c00,(ulong)local_1c78);
          std::__cxx11::stringbuf::_M_sync((char *)&puStack_1c50,(ulong)local_1c08,0);
          if (local_1c78 != local_1da8) {
            operator_delete(local_1c78,local_1c68[0] + 1);
          }
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)&local_1c58,"\t -> Part[",10);
          poVar9 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1c58);
          std::__ostream_insert<char,std::char_traits<char>>(poVar9,"] C  = ",7);
          poVar9 = std::ostream::_M_insert<double>(dVar37);
          std::__ostream_insert<char,std::char_traits<char>>(poVar9,", E  = ",7);
          poVar9 = std::ostream::_M_insert<double>((double)local_1d70);
          std::__ostream_insert<char,std::char_traits<char>>(poVar9,", VS = ",7);
          (**(code **)(*(long *)pPVar3 + 0x20))(pPVar3);
          piVar10 = (ios_base *)std::ostream::_M_insert<unsigned_long>((ulong)poVar9);
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)piVar10,", VI = ",7);
          (**(code **)(*(long *)pPVar3 + 0x28))(pPVar3);
          poVar9 = std::ostream::_M_insert<unsigned_long>((ulong)piVar10);
          piVar12 = *(ios_base **)(poVar9 + *(long *)(*(long *)poVar9 + -0x18) + 0xf0);
          if (piVar12 == (ios_base *)0x0) goto LAB_00105abb;
          if (piVar12[0x38] == (ios_base)0x0) {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*(long *)piVar12 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*(long *)piVar12 + 0x30))(piVar12);
            }
          }
          std::ostream::put((char)poVar9);
          std::ostream::flush();
          plVar13 = *(long **)(param_1 + 0x28);
          pcVar2 = *(code **)(*plVar13 + 0x10);
          local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
          local_1c70 = 0;
          local_1c78 = local_1da8;
          if (local_1c28._0_8_ == 0) {
            std::__cxx11::string::_M_assign((string *)&local_1c78);
          }
          else {
            std::__cxx11::string::_M_replace((ulong)&local_1c78,0,(char *)0x0,local_1c38._8_8_);
          }
          (*pcVar2)(plVar13);
          if (local_1c78 != local_1da8) {
            operator_delete(local_1c78,local_1c68[0] + 1);
          }
        }
        ppPVar7 = local_1d78;
        if ((*(double *)param_1 <= dVar37 && dVar37 != *(double *)param_1) &&
           ((double)local_1d70 < dVar37)) {
          dVar39 = dVar37;
          dVar41 = (double)ComputePreferredCuttingDirection(pPVar3,local_1c98);
          local_a70 = (ios_base *)0x0;
          if (*(int *)(param_1 + 0x44) == 0) {
            ComputeAxesAlignedClippingPlanes
                      ((VoxelSet *)pPVar3,*(short *)(param_1 + 0x38),local_1478);
          }
          else {
            ComputeAxesAlignedClippingPlanes
                      ((TetrahedronSet *)pPVar3,*(short *)(param_1 + 0x38),local_1478);
          }
          if (*(long *)(param_1 + 0x28) != 0) {
            local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
            local_1c78 = local_1da8;
            local_1c70 = 0;
            std::__cxx11::string::_M_replace((ulong)&local_1c08,0,local_1c00,(ulong)local_1da8);
            std::__cxx11::stringbuf::_M_sync((char *)&puStack_1c50,(ulong)local_1c08,0);
            if (local_1c78 != local_1da8) {
              operator_delete(local_1c78,local_1c68[0] + 1);
            }
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)&local_1c58,"\t\t [Regular sampling] Number of clipping planes ",
                       0x30);
            piVar10 = (ios_base *)&local_1c58;
            piVar12 = (ios_base *)std::ostream::_M_insert<unsigned_long>((ulong)&local_1c58);
            plVar13 = *(long **)((ostream *)piVar12 + *(long *)(*(long *)piVar12 + -0x18) + 0xf0);
            if (plVar13 == (long *)0x0) goto LAB_00105abb;
            if ((char)plVar13[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*plVar13 + 0x30) != std::ctype<char>::do_widen) {
                (**(code **)(*plVar13 + 0x30))(plVar13);
              }
            }
            std::ostream::put((char)piVar12);
            std::ostream::flush();
            plVar13 = *(long **)(param_1 + 0x28);
            pcVar2 = *(code **)(*plVar13 + 0x10);
            local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
            local_1c70 = 0;
            local_1c78 = local_1da8;
            if (local_1c28._0_8_ == 0) {
              std::__cxx11::string::_M_assign((string *)&local_1c78);
            }
            else {
              std::__cxx11::string::_M_replace((ulong)&local_1c78,0,(char *)0x0,local_1c38._8_8_);
            }
            (*pcVar2)(plVar13);
            if (local_1c78 != local_1da8) {
              operator_delete(local_1c78,local_1c68[0] + 1);
            }
          }
          local_1cd0 = _LC6;
          if (this[0x348] == (VHACD)0x0) {
            local_1d70 = (ios_base *)local_1cc8;
            dVar42 = (((double)local_1d90 + __LC38) * _LC17) / (double)local_1d88;
            piVar12 = (ios_base *)&local_1cd0;
            iVar23 = (int)local_1c98;
            ComputeBestClippingPlane
                      ((PrimitiveSet *)this,dVar41,(SArray *)pPVar3,(Vec3 *)local_1478,
                       *(double *)(param_1 + 8) * dVar37,*(double *)(param_1 + 0x10) * dVar37,dVar38
                       ,iVar23,dVar42,dVar39,(Plane *)(ulong)*(uint *)(param_1 + 0x3c),
                       (double *)local_1d70,(Parameters *)piVar12);
            if (this[0x348] == (VHACD)0x0) {
              if ((1 < *(uint *)(param_1 + 0x38)) || (1 < *(uint *)(param_1 + 0x3c))) {
                sVar26 = (short)*(uint *)(param_1 + 0x38);
                local_50 = (ios_base *)0x0;
                if (*(int *)(param_1 + 0x44) == 0) {
                  RefineAxesAlignedClippingPlanes
                            ((VoxelSet *)pPVar3,(Plane *)local_1d70,sVar26,(SArray *)&local_a58);
                }
                else {
                  RefineAxesAlignedClippingPlanes
                            ((TetrahedronSet *)pPVar3,(Plane *)local_1d70,sVar26,
                             (SArray *)&local_a58);
                }
                if (*(long *)(param_1 + 0x28) != 0) {
                  local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
                  local_1c78 = local_1da8;
                  local_1c70 = 0;
                  std::__cxx11::string::_M_replace
                            ((ulong)&local_1c08,0,local_1c00,(ulong)local_1da8);
                  std::__cxx11::stringbuf::_M_sync((char *)&puStack_1c50,(ulong)local_1c08,0);
                  if (local_1c78 != local_1da8) {
                    operator_delete(local_1c78,local_1c68[0] + 1);
                  }
                  std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)&local_1c58,"\t\t [Refining] Number of clipping planes ",
                             0x28);
                  poVar9 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1c58);
                  piVar10 = *(ios_base **)(poVar9 + *(long *)(*(long *)poVar9 + -0x18) + 0xf0);
                  if (piVar10 == (ios_base *)0x0) goto LAB_00105abb;
                  if (piVar10[0x38] == (ios_base)0x0) {
                    std::ctype<char>::_M_widen_init();
                    if (*(code **)(*(long *)piVar10 + 0x30) != std::ctype<char>::do_widen) {
                      (**(code **)(*(long *)piVar10 + 0x30))();
                    }
                  }
                  std::ostream::put((char)poVar9);
                  std::ostream::flush();
                  plVar13 = *(long **)(param_1 + 0x28);
                  pcVar2 = *(code **)(*plVar13 + 0x10);
                  local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
                  local_1c70 = 0;
                  local_1c78 = local_1da8;
                  if (local_1c28._0_8_ == 0) {
                    std::__cxx11::string::_M_assign((string *)&local_1c78);
                  }
                  else {
                    std::__cxx11::string::_M_replace
                              ((ulong)&local_1c78,0,(char *)0x0,local_1c38._8_8_);
                  }
                  (*pcVar2)(plVar13);
                  if (local_1c78 != local_1da8) {
                    operator_delete(local_1c78,local_1c68[0] + 1);
                  }
                }
                if ((this[0x348] != (VHACD)0x0) ||
                   (ComputeBestClippingPlane
                              ((PrimitiveSet *)this,dVar41,(SArray *)pPVar3,(Vec3 *)&local_a58,
                               dVar37 * *(double *)(param_1 + 8),
                               *(double *)(param_1 + 0x10) * dVar37,dVar42,iVar23,
                               ((_LC1 + (double)local_1d90) * _LC17) / (double)local_1d88,dVar39,
                               (Plane *)0x1,(double *)local_1d70,(Parameters *)piVar12),
                   this[0x348] != (VHACD)0x0)) goto LAB_00104b78;
              }
              dVar38 = local_1cd0;
              if (local_1cd0 <= local_1d38) {
                dVar38 = local_1d38;
              }
              plVar13 = (long *)(**(code **)(*(long *)pPVar3 + 0x10))(pPVar3);
              plVar14 = (long *)(**(code **)(*(long *)pPVar3 + 0x10))(pPVar3);
              piVar32 = piStack_1488;
              piVar10 = local_1490;
              piVar12 = local_1498;
              if (local_1490 == piStack_1488) {
                piVar24 = (ios_base *)((long)local_1490 * 2);
                local_1d88 = local_1498;
                if ((ulong)piVar24 >> 0x3c == 0) {
                  uVar40 = (long)local_1490 << 4;
                  local_1d90 = (ios_base *)operator_new__(uVar40);
                  if (piVar10 != (ios_base *)0x40) goto LAB_001046aa;
                  lVar33 = 0x200;
                  uVar40 = 0x400;
                  piVar32 = local_1698;
                }
                else {
                  local_1d90 = (ios_base *)operator_new__(0xffffffffffffffff);
                  uVar40 = 0xffffffffffffffff;
LAB_001046aa:
                  lVar33 = (long)piVar32 * 8;
                  piVar32 = piVar12;
                }
                __memcpy_chk(local_1d90,piVar32,lVar33,uVar40);
                if (piVar12 != (ios_base *)0x0) {
                  operator_delete__(piVar12);
                  local_1d88 = piVar10;
                }
                local_1498 = local_1d90;
                piStack_1488 = piVar24;
              }
              piVar24 = local_1498;
              piVar12 = piVar10 + 1;
              piVar32 = (ios_base *)((long)piVar10 * 8);
              local_1490 = piVar12;
              if (piStack_1488 == (ios_base *)0x40) {
                *(long **)(local_1698 + (long)piVar32) = plVar13;
                if (piVar12 == (ios_base *)0x40) {
                  piVar15 = (ios_base *)operator_new__(0x400);
                  local_1d90 = (ios_base *)0x80;
                  piVar24 = local_1698;
                  __n = 0x200;
                  uVar40 = 0x400;
LAB_001048f4:
                  piVar12 = local_1498;
                  __memcpy_chk(piVar15,piVar24,__n,uVar40);
                  if (piVar12 != (ios_base *)0x0) goto LAB_00104806;
                  goto LAB_00104822;
                }
LAB_0010464a:
                piVar15 = local_1698;
              }
              else {
                *(long **)(local_1498 + (long)piVar10 * 8) = plVar13;
                piVar15 = local_1498;
                if (piStack_1488 == piVar12) {
                  local_1d90 = (ios_base *)((long)piStack_1488 * 2);
                  __n = (long)piStack_1488 * 8;
                  if ((ulong)local_1d90 >> 0x3c == 0) {
                    uVar40 = (long)piStack_1488 << 4;
                    piVar15 = (ios_base *)operator_new__(uVar40);
                    goto LAB_001048f4;
                  }
                  pvVar21 = operator_new__(0xffffffffffffffff);
                  piVar15 = (ios_base *)memcpy(pvVar21,piVar24,__n);
                  piVar12 = piVar24;
LAB_00104806:
                  operator_delete__(piVar12);
LAB_00104822:
                  piStack_1488 = local_1d90;
                  local_1d88 = piVar32;
                  local_1498 = piVar15;
                  if (local_1d90 == (ios_base *)0x40) goto LAB_0010464a;
                }
              }
              lVar33 = *(long *)pPVar3;
              local_1490 = piVar10 + 2;
              *(long **)(piVar15 + 8 + (long)piVar32) = plVar14;
              (**(code **)(lVar33 + 0x48))(pPVar3,local_1d70,plVar14,plVar13);
              if (*(int *)(param_1 + 0x40) != 0) {
                (**(code **)(*plVar14 + 0x90))(plVar14);
                (**(code **)(*plVar13 + 0x90))(plVar13);
              }
              (**(code **)(*(long *)pPVar3 + 8))(pPVar3);
              local_1d38 = dVar38;
              goto LAB_00103ab0;
            }
          }
LAB_00104b78:
          (**(code **)(*(long *)pPVar3 + 8))(pPVar3);
          plVar13 = *(long **)(param_1 + 0x20);
          break;
        }
        if (*(int *)(param_1 + 0x40) != 0) {
          (**(code **)(*(long *)pPVar3 + 0x90))(pPVar3);
        }
        piVar10 = piStack_18c8;
        piVar12 = local_18d0;
        plVar13 = local_18d8;
        if (local_18d0 == piStack_18c8) {
          piVar32 = (ios_base *)((long)local_18d0 * 2);
          if ((ulong)piVar32 >> 0x3c == 0) {
            local_1d70 = piStack_18c8;
            local_1d88 = (ios_base *)((long)local_18d0 << 4);
            local_1da0 = (long *)operator_new__((ulong)local_1d88);
            piVar24 = local_1d88;
            if (piVar12 != (ios_base *)0x40) goto LAB_00103cb0;
            lVar33 = 0x200;
            piVar24 = (ios_base *)0x400;
            plVar14 = local_1ad8;
          }
          else {
            local_1d88 = piStack_18c8;
            local_1da0 = (long *)operator_new__(0xffffffffffffffff);
            piVar24 = (ios_base *)0xffffffffffffffff;
LAB_00103cb0:
            lVar33 = (long)piVar10 << 3;
            plVar14 = plVar13;
          }
          __memcpy_chk(local_1da0,plVar14,lVar33,piVar24);
          if (plVar13 != (long *)0x0) {
            operator_delete__(plVar13);
          }
          piStack_18c8 = piVar32;
          local_18d8 = local_1da0;
        }
        plVar13 = local_1ad8;
        if (piStack_18c8 != (ios_base *)0x40) {
          plVar13 = local_18d8;
        }
        local_18d0 = piVar12 + 1;
        plVar13[(long)piVar12] = (long)pPVar3;
LAB_00103ab0:
        piVar31 = piVar31 + 1;
        plVar13 = *(long **)(param_1 + 0x20);
      } while (piVar31 != local_1d98);
      local_1d78 = ppPVar7;
      dVar39 = (_LC1 - local_1d38) * _LC40;
      dVar38 = _LC1 - *(double *)param_1;
      *(double *)(this + 0x278) = _LC17;
      *(double *)(this + 0x270) = dVar39 / dVar38;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x10))
                  (*(undefined8 *)(this + 0x268),plVar13,*(undefined8 *)(this + 0x228),
                   *(undefined8 *)(this + 0x248));
      }
      piVar10 = piStack_1488;
      piVar12 = local_1490;
      if (this[0x348] == (VHACD)0x0) {
        if (piStack_16a8 < local_1490) {
          if (local_16b8 != (undefined8 *)0x0) {
            operator_delete__(local_16b8);
          }
          piStack_16a8 = piVar10;
          if ((ulong)piVar10 >> 0x3c == 0) {
            local_16b8 = (undefined8 *)operator_new__((long)piVar10 * 8);
            piVar32 = local_1498;
            if (piVar10 == (ios_base *)0x40) {
              piVar32 = local_1698;
              puVar11 = local_18b8;
              goto LAB_00104494;
            }
          }
          else {
            local_16b8 = (undefined8 *)operator_new__(0xffffffffffffffff);
            piVar32 = local_1498;
          }
LAB_0010448c:
          puVar11 = local_16b8;
        }
        else {
          piVar32 = local_1698;
          if (piStack_1488 != (ios_base *)0x40) {
            piVar32 = local_1498;
          }
          puVar11 = local_18b8;
          if (piStack_16a8 != (ios_base *)0x40) goto LAB_0010448c;
        }
LAB_00104494:
        local_16b0 = piVar12;
        memcpy(puVar11,piVar32,(long)piVar12 * 8);
      }
      else if (local_1490 != (ios_base *)0x0) {
        piVar31 = (ios_base *)0x0;
        do {
          piVar32 = local_1698;
          if (piVar10 != (ios_base *)0x40) {
            piVar32 = local_1498;
          }
          if (*(long **)(piVar32 + (long)piVar31 * 8) != (long *)0x0) {
            (**(code **)(**(long **)(piVar32 + (long)piVar31 * 8) + 8))();
          }
          piVar31 = piVar31 + 1;
        } while (piVar31 != piVar12);
      }
      local_1490 = (ios_base *)0x0;
      piVar12 = local_18d0;
      local_1d98 = local_16b0;
      piVar10 = local_18d0;
      if (uVar22 == local_1d20) {
        if (local_16b0 == (ios_base *)0x0) goto LAB_00104be1;
        break;
      }
      if (local_16b0 == (ios_base *)0x0) goto LAB_00104be1;
      local_1d20 = local_1d20 + 1;
      VVar1 = this[0x348];
    }
  }
  else {
    uVar22 = 2;
    iVar23 = 1;
    do {
      iVar27 = iVar23;
      uVar22 = uVar22 * 2;
      iVar23 = iVar27 + 1;
    } while (uVar22 < *(uint *)(param_1 + 0x50));
    uVar22 = iVar27 + 2;
    if (uVar22 != 0) goto LAB_001033b4;
    piVar10 = (ios_base *)0x0;
    local_1d98 = (ios_base *)0x1;
  }
  piVar31 = piStack_16a8;
  lVar33 = 0;
  piVar12 = piVar10 + (long)local_1d98;
  piVar32 = piStack_18c8;
  do {
    plVar13 = local_18d8;
    puVar11 = local_18b8;
    if (piVar31 != (ios_base *)0x40) {
      puVar11 = local_16b8;
    }
    plVar14 = (long *)((long)puVar11 + lVar33);
    piVar24 = piVar32;
    if (piVar10 == piVar32) {
      piVar24 = (ios_base *)((long)piVar10 * 2);
      if (piVar24 < (ios_base *)0x1000000000000000) {
        uVar40 = (long)piVar10 << 4;
        local_1d98 = (ios_base *)operator_new__(uVar40);
        if (piVar10 != (ios_base *)0x40) goto LAB_001045d6;
        lVar28 = 0x200;
        uVar40 = 0x400;
        plVar30 = local_1ad8;
      }
      else {
        local_1d98 = (ios_base *)operator_new__(0xffffffffffffffff);
        uVar40 = 0xffffffffffffffff;
LAB_001045d6:
        lVar28 = (long)piVar32 << 3;
        plVar30 = plVar13;
      }
      __memcpy_chk(local_1d98,plVar30,lVar28,uVar40);
      if (plVar13 != (long *)0x0) {
        operator_delete__(plVar13);
      }
      piStack_18c8 = piVar24;
      local_18d8 = (long *)local_1d98;
    }
    plVar13 = local_1ad8;
    if (piVar24 != (ios_base *)0x40) {
      plVar13 = local_18d8;
    }
    piVar10 = piVar10 + 1;
    lVar33 = lVar33 + 8;
    local_18d0 = piVar10;
    plVar13[(long)(piVar10 + -1)] = *plVar14;
    piVar32 = piVar24;
  } while (piVar10 != piVar12);
LAB_00104be1:
  plVar13 = local_18d8;
  dVar38 = _LC17;
  uVar5 = _LC42;
  local_1d88 = (ios_base *)PTR_vtable_0010f408;
  puStack_1d80 = PTR_vtable_0010f410;
  if (this[0x348] == (VHACD)0x0) {
    plVar13 = *(long **)(param_1 + 0x20);
    *(undefined8 *)(this + 0x268) = _LC42;
    *(double *)(this + 0x278) = dVar38;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x10))
                (uVar5,*(undefined8 *)(this + 0x270),dVar38,plVar13,*(undefined8 *)(this + 0x228),
                 *(undefined8 *)(this + 0x248));
    }
    local_1d78 = &local_1c08;
    piVar32 = (ios_base *)local_1c68;
    local_1c70 = 0;
    local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
    local_1c78 = piVar32;
    std::__cxx11::string::_M_replace((ulong)local_1d78,0,local_1c00,(ulong)piVar32);
    std::__cxx11::stringbuf::_M_sync((char *)&puStack_1c50,(ulong)local_1c08,0);
    if (local_1c78 != piVar32) {
      operator_delete(local_1c78,local_1c68[0] + 1);
    }
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&local_1c58,"Generate convex-hulls",0x15);
    local_1d70 = (ios_base *)&local_1c78;
    local_1c70 = 0;
    local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
    if (local_1c28._0_8_ == 0) {
      local_1c78 = piVar32;
      std::__cxx11::string::_M_assign((string *)local_1d70);
    }
    else {
      local_1c78 = piVar32;
      std::__cxx11::string::_M_replace((ulong)local_1d70,0,(char *)0x0,local_1c38._8_8_);
    }
    piVar10 = *(ios_base **)(this + 0x248);
    if (piVar10 == (ios_base *)(this + 600)) {
      if (local_1c78 == piVar32) goto LAB_00105a3b;
      *(ios_base **)(this + 0x248) = local_1c78;
      *(size_t *)(this + 0x250) = local_1c70;
      *(ulong *)(this + 600) = local_1c68[0];
LAB_00105a19:
      piVar31 = (ios_base *)local_1c68;
      local_1c78 = piVar32;
      uVar40 = local_1c68[0];
    }
    else {
      if (local_1c78 == piVar32) {
LAB_00105a3b:
        if (local_1c70 == 0) goto LAB_00105a65;
        if (local_1c70 == 1) goto LAB_00105ac0;
        memcpy(piVar10,piVar32,local_1c70);
        piVar10 = *(ios_base **)(this + 0x248);
        goto LAB_00105a65;
      }
      uVar40 = *(ulong *)(this + 600);
      *(ios_base **)(this + 0x248) = local_1c78;
      *(size_t *)(this + 0x250) = local_1c70;
      *(ulong *)(this + 600) = local_1c68[0];
      piVar31 = piVar32;
      local_1c78 = piVar10;
      if (piVar10 == (ios_base *)0x0) goto LAB_00105a19;
    }
    while( true ) {
      local_1c68[0] = uVar40;
      local_1c70 = 0;
      *local_1c78 = (ios_base)0x0;
      if (local_1c78 != piVar31) {
        operator_delete(local_1c78,local_1c68[0] + 1);
      }
      pPVar36 = pPVar34;
      if (*(long *)(param_1 + 0x28) == 0) break;
      local_1c70 = 0;
      local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
      local_1c78 = piVar31;
      std::__cxx11::string::_M_replace((ulong)local_1d78,0,local_1c00,(ulong)piVar31);
      std::__cxx11::stringbuf::_M_sync((char *)&puStack_1c50,(ulong)local_1c08,0);
      if (local_1c78 != piVar31) {
        operator_delete(local_1c78,local_1c68[0] + 1);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1c58,"+ Generate ",0xb);
      poVar9 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1c58);
      piVar10 = (ios_base *)poVar9;
      std::__ostream_insert<char,std::char_traits<char>>(poVar9," convex-hulls ",0xe);
      plVar13 = *(long **)(poVar9 + *(long *)(*(long *)poVar9 + -0x18) + 0xf0);
      if (plVar13 != (long *)0x0) {
        if ((char)plVar13[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar13 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar13 + 0x30))(plVar13);
          }
        }
        std::ostream::put((char)poVar9);
        std::ostream::flush();
        plVar13 = *(long **)(param_1 + 0x28);
        pcVar2 = *(code **)(*plVar13 + 0x10);
        local_1c70 = 0;
        local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
        if (local_1c28._0_8_ == 0) {
          local_1c78 = piVar31;
          std::__cxx11::string::_M_assign((string *)local_1d70);
        }
        else {
          local_1c78 = piVar31;
          std::__cxx11::string::_M_replace((ulong)local_1d70,0,(char *)0x0,local_1c38._8_8_);
        }
        (*pcVar2)(plVar13,local_1c78);
        if (local_1c78 != piVar31) {
          operator_delete(local_1c78,local_1c68[0] + 1);
        }
        break;
      }
LAB_00105abb:
      std::__throw_bad_cast();
      piVar32 = piVar31;
      pPVar34 = pPVar36;
LAB_00105ac0:
      *piVar10 = local_1c68[0]._0_1_;
      piVar10 = *(ios_base **)(this + 0x248);
LAB_00105a65:
      *(size_t *)(this + 0x250) = local_1c70;
      piVar10[local_1c70] = (ios_base)0x0;
      piVar31 = piVar32;
      uVar40 = local_1c68[0];
    }
    plVar13 = *(long **)(param_1 + 0x20);
    *(undefined8 *)(this + 0x278) = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x10))
                (*(undefined8 *)(this + 0x268),*(undefined8 *)(this + 0x270),0,plVar13,
                 *(undefined8 *)(this + 0x228),*(undefined8 *)(this + 0x248));
    }
    piVar10 = piStack_18c8;
    *(undefined8 *)(this + 0x218) = 0;
    if (piVar12 != (ios_base *)0x0) {
      piVar32 = (ios_base *)0x0;
      plVar13 = local_1ad8;
      do {
        if (this[0x348] != (VHACD)0x0) break;
        plVar14 = *(long **)(param_1 + 0x20);
        *(double *)(this + 0x278) = ((double)piVar32 * _LC17) / (double)piVar12;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x10))
                    (*(undefined8 *)(this + 0x268),*(undefined8 *)(this + 0x270),plVar14,
                     *(undefined8 *)(this + 0x228),*(undefined8 *)(this + 0x248));
        }
        pMVar16 = (Mesh *)operator_new(0x980);
        ::VHACD::Mesh::Mesh(pMVar16);
        uVar17 = *(ulong *)(this + 0x218);
        uVar40 = *(ulong *)(this + 0x220);
        uVar35 = uVar40;
        if (uVar17 == uVar40) {
          uVar35 = uVar40 * 2;
          uVar40 = uVar40 << 4;
          if (0xfffffffffffffff < uVar35) {
            uVar40 = 0xffffffffffffffff;
          }
          pvVar21 = operator_new__(uVar40);
          pVVar18 = this + 0x10;
          if (*(long *)(this + 0x220) != 0x40) {
            pVVar18 = *(VHACD **)(this + 0x210);
          }
          __memcpy_chk(pvVar21,pVVar18,*(long *)(this + 0x220) * 8,uVar40);
          if (*(void **)(this + 0x210) != (void *)0x0) {
            operator_delete__(*(void **)(this + 0x210));
          }
          *(ulong *)(this + 0x220) = uVar35;
          *(void **)(this + 0x210) = pvVar21;
          uVar17 = *(ulong *)(this + 0x218);
        }
        pVVar18 = this + 0x10;
        if (uVar35 != 0x40) {
          pVVar18 = *(VHACD **)(this + 0x210);
        }
        *(ulong *)(this + 0x218) = uVar17 + 1;
        *(Mesh **)(pVVar18 + uVar17 * 8) = pMVar16;
        plVar14 = plVar13;
        if (piVar10 != (ios_base *)0x40) {
          plVar14 = local_18d8;
        }
        (**(code **)(*(long *)plVar14[(long)piVar32] + 0x70))
                  ((long *)plVar14[(long)piVar32],*(undefined8 *)(pVVar18 + (long)piVar32 * 8),1);
        pVVar18 = this + 0x10;
        if (*(long *)(this + 0x220) != 0x40) {
          pVVar18 = *(VHACD **)(this + 0x210);
        }
        lVar33 = *(long *)(pVVar18 + (long)piVar32 * 8);
        lVar28 = *(long *)(lVar33 + 0x608);
        if (lVar28 != 0) {
          lVar4 = *(long *)(lVar33 + 0x610);
          lVar25 = 0;
          lVar29 = 0;
          do {
            lVar20 = lVar33;
            if (lVar4 != 0x40) {
              lVar20 = *(long *)(lVar33 + 0x600);
            }
            pdVar19 = (double *)(lVar20 + lVar25);
            lVar29 = lVar29 + 1;
            lVar25 = lVar25 + 0x18;
            dVar38 = *pdVar19;
            dVar39 = pdVar19[1];
            dVar41 = pdVar19[2];
            *pdVar19 = *(double *)(this + 0x280) * dVar38 + *(double *)(this + 0x288) * dVar39 +
                       *(double *)(this + 0x290) * dVar41 + *(double *)(this + 0x2d0);
            pdVar19[1] = *(double *)(this + 0x298) * dVar38 + *(double *)(this + 0x2a0) * dVar39 +
                         *(double *)(this + 0x2a8) * dVar41 + *(double *)(this + 0x2d8);
            pdVar19[2] = dVar38 * *(double *)(this + 0x2b0) + dVar39 * *(double *)(this + 0x2b8) +
                         dVar41 * *(double *)(this + 0x2c0) + *(double *)(this + 0x2e0);
          } while (lVar29 != lVar28);
        }
        piVar32 = piVar32 + 1;
      } while (piVar32 != piVar12);
      piVar32 = (ios_base *)0x0;
      do {
        if (piVar10 == (ios_base *)0x40) {
          plVar14 = (long *)*plVar13;
          plVar30 = plVar13;
        }
        else {
          plVar14 = (long *)local_18d8[(long)piVar32];
          plVar30 = local_18d8 + (long)piVar32;
        }
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        piVar32 = piVar32 + 1;
        *plVar30 = 0;
        plVar13 = plVar13 + 1;
      } while (piVar32 != piVar12);
    }
    uVar5 = _UNK_0010f3a8;
    dVar39 = _LC40;
    dVar38 = _LC17;
    local_18d0 = (ios_base *)0x0;
    if (this[0x348] != (VHACD)0x0) {
      lVar28 = 0;
      lVar33 = *(long *)(this + 0x218);
      if (lVar33 != 0) {
        do {
          pVVar18 = this + 0x10;
          if (*(long *)(this + 0x220) != 0x40) {
            pVVar18 = *(VHACD **)(this + 0x210);
          }
          pMVar16 = *(Mesh **)(pVVar18 + lVar28 * 8);
          if (pMVar16 != (Mesh *)0x0) {
            ::VHACD::Mesh::~Mesh(pMVar16);
            operator_delete(pMVar16,0x980);
          }
          lVar28 = lVar28 + 1;
        } while (lVar28 != lVar33);
      }
      *(undefined8 *)(this + 0x218) = 0;
      if (*(void **)(this + 0x210) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x210));
      }
      *(undefined8 *)(this + 0x210) = 0;
      *(undefined8 *)(this + 0x220) = 0x40;
      plVar13 = local_18d8;
      goto LAB_00104c48;
    }
    plVar13 = *(long **)(param_1 + 0x20);
    *(double *)(this + 0x278) = _LC17;
    *(double *)(this + 0x268) = dVar39;
    *(undefined8 *)(this + 0x270) = uVar5;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x10))
                (_LC40,dVar38,plVar13,*(undefined8 *)(this + 0x228),*(undefined8 *)(this + 0x248));
    }
    clock_gettime(0,(timespec *)(this + 0x2f8));
    if (*(long *)(param_1 + 0x28) != 0) {
      local_1c70 = 0;
      local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
      local_1c78 = piVar31;
      std::__cxx11::string::_M_replace((ulong)local_1d78,0,local_1c00,(ulong)piVar31);
      std::__cxx11::stringbuf::_M_sync((char *)&puStack_1c50,(ulong)local_1c08,0);
      if (local_1c78 != piVar31) {
        operator_delete(local_1c78,local_1c68[0] + 1);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1c58,"\t time ",7);
      poVar9 = std::ostream::_M_insert<double>
                         ((((double)(*(long *)(this + 0x300) - *(long *)(this + 0x2f0)) * __LC20 +
                           (double)(*(long *)(this + 0x2f8) - *(long *)(this + 0x2e8))) * _LC21) /
                          _LC21);
      piVar10 = (ios_base *)poVar9;
      std::__ostream_insert<char,std::char_traits<char>>(poVar9,"s",1);
      plVar13 = *(long **)(poVar9 + *(long *)(*(long *)poVar9 + -0x18) + 0xf0);
      if (plVar13 == (long *)0x0) goto LAB_00105abb;
      if ((char)plVar13[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar13 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar13 + 0x30))(plVar13);
        }
      }
      std::ostream::put((char)poVar9);
      std::ostream::flush();
      plVar13 = *(long **)(param_1 + 0x28);
      pcVar2 = *(code **)(*plVar13 + 0x10);
      local_1c70 = 0;
      local_1c68[0] = local_1c68[0] & 0xffffffffffffff00;
      if (local_1c28._0_8_ == 0) {
        local_1c78 = piVar31;
        std::__cxx11::string::_M_assign((string *)local_1d70);
      }
      else {
        local_1c78 = piVar31;
        std::__cxx11::string::_M_replace((ulong)local_1d70,0,(char *)0x0,local_1c38._8_8_);
      }
      (*pcVar2)(plVar13,local_1c78);
      if (local_1c78 != piVar31) {
        operator_delete(local_1c78,local_1c68[0] + 1);
      }
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (local_a78 != (void *)0x0) {
      operator_delete__(local_a78);
    }
    if (local_1498 != (ios_base *)0x0) {
      operator_delete__(local_1498);
    }
    if (local_16b8 != (undefined8 *)0x0) {
      operator_delete__(local_16b8);
    }
    if (local_18d8 != (long *)0x0) {
      operator_delete__(local_18d8);
    }
    local_1c58 = local_1d88;
    local_1be8[0] = std::__ostream_insert<char,std::char_traits<char>>;
    if (local_1c08 != pPVar34) goto LAB_00104cc7;
  }
  else {
    if (piVar12 != (ios_base *)0x0) {
      plVar14 = local_1ad8;
      if (piStack_18c8 != (ios_base *)0x40) {
        plVar14 = local_18d8;
      }
      piVar31 = (ios_base *)0x0;
      do {
        if ((long *)plVar14[(long)piVar31] != (long *)0x0) {
          (**(code **)(*(long *)plVar14[(long)piVar31] + 8))();
        }
        piVar31 = piVar31 + 1;
      } while (piVar31 != piVar12);
    }
LAB_00104c48:
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (local_a78 != (void *)0x0) {
      operator_delete__(local_a78);
    }
    if (local_1498 != (ios_base *)0x0) {
      operator_delete__(local_1498);
    }
    if (local_16b8 != (undefined8 *)0x0) {
      operator_delete__(local_16b8);
    }
    if (plVar13 != (long *)0x0) {
      operator_delete__(plVar13);
    }
    local_1be8[0] = std::__ostream_insert<char,std::char_traits<char>>;
    local_1c58 = local_1d88;
    if (local_1c08 != pPVar34) {
LAB_00104cc7:
      local_1be8[0] = std::__ostream_insert<char,std::char_traits<char>>;
      local_1c58 = local_1d88;
      puStack_1c50 = puStack_1d80;
      operator_delete(local_1c08,CONCAT71(uStack_1bf7,local_1bf8) + 1);
    }
  }
  puStack_1c50 = std::ios_base::~ios_base;
  std::locale::~locale(local_1c18);
  local_1c58 = _init;
  *(undefined8 *)((long)&local_1c58 + *(long *)(_init + -0x18)) = _locale;
  local_1be8[0] = std::ios::init;
  std::ios_base::~ios_base((ios_base *)local_1be8);
LAB_0010301d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VHACD::AddPoints(VHACD::Mesh const*, VHACD::SArray<VHACD::Vec3<double>, 64ul>&) */

void VHACD::AddPoints(Mesh *param_1,SArray *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  SArray *pSVar5;
  long lVar6;
  Mesh *pMVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar1 = *(undefined8 *)(param_1 + 0x608);
  if (0 < (int)uVar1) {
    lVar11 = 0;
    uVar8 = *(ulong *)(param_2 + 0x608);
    uVar10 = *(ulong *)(param_2 + 0x610);
    do {
      pMVar7 = param_1;
      if (*(long *)(param_1 + 0x610) != 0x40) {
        pMVar7 = *(Mesh **)(param_1 + 0x600);
      }
      pMVar7 = pMVar7 + lVar11;
      uVar9 = uVar10;
      if (uVar8 == uVar10) {
        uVar9 = uVar10 * 2;
        if (uVar9 < 0x555555555555556) {
          lVar6 = uVar10 * 0x30;
          uVar8 = lVar6 + 8;
        }
        else {
          lVar6 = -9;
          uVar8 = 0xffffffffffffffff;
        }
        puVar4 = (ulong *)operator_new__(uVar8);
        *puVar4 = uVar9;
        pSVar5 = param_2;
        if (*(long *)(param_2 + 0x610) != 0x40) {
          pSVar5 = *(SArray **)(param_2 + 0x600);
        }
        __memcpy_chk(puVar4 + 1,pSVar5,*(long *)(param_2 + 0x610) * 0x18,lVar6);
        lVar6 = *(long *)(param_2 + 0x600);
        if (lVar6 != 0) {
          operator_delete__((void *)(lVar6 + -8),*(long *)(lVar6 + -8) * 0x18 + 8);
        }
        *(ulong *)(param_2 + 0x610) = uVar9;
        *(ulong **)(param_2 + 0x600) = puVar4 + 1;
        uVar8 = *(ulong *)(param_2 + 0x608);
      }
      pSVar5 = param_2;
      if (uVar9 != 0x40) {
        pSVar5 = *(SArray **)(param_2 + 0x600);
      }
      uVar2 = *(undefined8 *)pMVar7;
      uVar3 = *(undefined8 *)(pMVar7 + 8);
      lVar11 = lVar11 + 0x18;
      pSVar5 = pSVar5 + uVar8 * 0x18;
      *(ulong *)(param_2 + 0x608) = uVar8 + 1;
      *(undefined8 *)pSVar5 = uVar2;
      *(undefined8 *)(pSVar5 + 8) = uVar3;
      *(undefined8 *)(pSVar5 + 0x10) = *(undefined8 *)(pMVar7 + 0x10);
      uVar8 = uVar8 + 1;
      uVar10 = uVar9;
    } while (((ulong)((int)uVar1 - 1) * 3 + 3) * 8 != lVar11);
    return;
  }
  return;
}



/* VHACD::ComputeConvexHull(VHACD::Mesh const*, VHACD::Mesh const*,
   VHACD::SArray<VHACD::Vec3<double>, 64ul>&, VHACD::Mesh*) */

void VHACD::ComputeConvexHull(Mesh *param_1,Mesh *param_2,SArray *param_3,Mesh *param_4)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  Mesh *pMVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  long local_b8;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  void *local_98;
  char local_90;
  undefined8 local_84;
  void *local_78;
  char local_70;
  undefined8 local_64;
  void *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_3 + 0x608) = 0;
  AddPoints(param_1,param_3);
  AddPoints(param_2,param_3);
  local_90 = '\x01';
  local_98 = (void *)0x0;
  local_a4 = 0;
  local_70 = '\x01';
  local_78 = (void *)0x0;
  local_84 = 0;
  local_50 = '\x01';
  local_58 = (void *)0x0;
  local_64 = 0;
  if (*(long *)(param_3 + 0x610) != 0x40) {
    param_3 = *(SArray **)(param_3 + 0x600);
  }
  ::VHACD::btConvexHullComputer::compute(local_a8,SUB81(param_3,0),1,0x18,_LC49,_LC49);
  *(undefined8 *)(param_4 + 0x608) = 0;
  *(undefined8 *)(param_4 + 0x920) = 0;
  if (0 < (int)local_a4) {
    lVar15 = 0;
    uVar11 = 0;
    uVar10 = *(ulong *)(param_4 + 0x610);
    do {
      puVar6 = (undefined8 *)(lVar15 * 0x10 + (long)local_98);
      fVar1 = *(float *)(puVar6 + 1);
      uVar2 = *puVar6;
      uVar9 = uVar10;
      if (uVar11 == uVar10) {
        uVar9 = uVar10 * 2;
        if (uVar9 < 0x555555555555556) {
          lVar16 = uVar10 * 0x30;
          uVar11 = lVar16 + 8;
        }
        else {
          lVar16 = -9;
          uVar11 = 0xffffffffffffffff;
        }
        puVar7 = (ulong *)operator_new__(uVar11);
        *puVar7 = uVar9;
        pMVar8 = param_4;
        if (*(long *)(param_4 + 0x610) != 0x40) {
          pMVar8 = *(Mesh **)(param_4 + 0x600);
        }
        __memcpy_chk(puVar7 + 1,pMVar8,*(long *)(param_4 + 0x610) * 0x18,lVar16);
        lVar16 = *(long *)(param_4 + 0x600);
        if (lVar16 != 0) {
          operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0x18 + 8);
        }
        *(ulong **)(param_4 + 0x600) = puVar7 + 1;
        uVar11 = *(ulong *)(param_4 + 0x608);
        *(ulong *)(param_4 + 0x610) = uVar9;
      }
      pMVar8 = param_4;
      if (uVar9 != 0x40) {
        pMVar8 = *(Mesh **)(param_4 + 0x600);
      }
      lVar15 = lVar15 + 1;
      pMVar8 = pMVar8 + uVar11 * 0x18;
      *(ulong *)(param_4 + 0x608) = uVar11 + 1;
      *(double *)pMVar8 = (double)(float)uVar2;
      *(double *)(pMVar8 + 8) = (double)(float)((ulong)uVar2 >> 0x20);
      *(double *)(pMVar8 + 0x10) = (double)fVar1;
      uVar11 = uVar11 + 1;
      uVar10 = uVar9;
    } while ((int)lVar15 < (int)local_a4);
  }
  lVar15 = (long)(int)local_64;
  local_b8 = 0;
  pvVar12 = local_58;
  if (0 < (int)local_64) {
    do {
      iVar3 = *(int *)((long)pvVar12 + local_b8);
      piVar13 = (int *)((long)local_78 +
                       (long)*(int *)((long)local_78 + (long)iVar3 * 0xc + 4) * 0xc +
                       (long)iVar3 * 0xc);
      iVar4 = piVar13[2];
      piVar13 = piVar13 + (long)*piVar13 * 3;
      if (piVar13[2] != iVar4) {
        uVar11 = *(ulong *)(param_4 + 0x920);
        uVar10 = *(ulong *)(param_4 + 0x928);
        iVar5 = piVar13[2];
        iVar3 = *(int *)((long)local_78 + (long)iVar3 * 0xc + 8);
        do {
          iVar14 = iVar5;
          uVar9 = uVar10;
          if (uVar11 == uVar10) {
            uVar9 = uVar10 * 2;
            if (uVar9 < 0xaaaaaaaaaaaaaab) {
              lVar16 = uVar10 * 0x18;
              uVar11 = lVar16 + 8;
            }
            else {
              lVar16 = -9;
              uVar11 = 0xffffffffffffffff;
            }
            puVar7 = (ulong *)operator_new__(uVar11);
            pMVar8 = param_4 + 0x618;
            *puVar7 = uVar9;
            if (*(long *)(param_4 + 0x928) != 0x40) {
              pMVar8 = *(Mesh **)(param_4 + 0x918);
            }
            __memcpy_chk(puVar7 + 1,pMVar8,*(long *)(param_4 + 0x928) * 0xc,lVar16);
            lVar16 = *(long *)(param_4 + 0x918);
            if (lVar16 != 0) {
              operator_delete__((void *)(lVar16 + -8),*(long *)(lVar16 + -8) * 0xc + 8);
            }
            *(ulong **)(param_4 + 0x918) = puVar7 + 1;
            uVar11 = *(ulong *)(param_4 + 0x920);
            *(ulong *)(param_4 + 0x928) = uVar9;
          }
          pMVar8 = param_4 + 0x618;
          if (uVar9 != 0x40) {
            pMVar8 = *(Mesh **)(param_4 + 0x918);
          }
          *(ulong *)(param_4 + 0x920) = uVar11 + 1;
          *(ulong *)(pMVar8 + uVar11 * 0xc) = CONCAT44(iVar3,iVar4);
          *(int *)(pMVar8 + uVar11 * 0xc + 8) = iVar14;
          piVar13 = piVar13 + (long)piVar13[1] * 3 + (long)piVar13[(long)piVar13[1] * 3] * 3;
          uVar11 = uVar11 + 1;
          pvVar12 = local_58;
          uVar10 = uVar9;
          iVar5 = piVar13[2];
          iVar3 = iVar14;
        } while (iVar4 != piVar13[2]);
      }
      local_b8 = local_b8 + 4;
    } while (local_b8 != lVar15 * 4);
  }
  if ((pvVar12 != (void *)0x0) && (local_50 != '\0')) {
    ::VHACD::btAlignedFreeInternal(pvVar12);
  }
  if ((local_78 != (void *)0x0) && (local_70 != '\0')) {
    ::VHACD::btAlignedFreeInternal(local_78);
  }
  if ((local_98 != (void *)0x0) && (local_90 != '\0')) {
    ::VHACD::btAlignedFreeInternal(local_98);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::VHACD::MergeConvexHulls(VHACD::IVHACD::Parameters const&) [clone .part.0] */

void __thiscall VHACD::VHACD::MergeConvexHulls(VHACD *this,Parameters *param_1)

{
  double dVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  pointer_____offset_0x10___ puVar6;
  streambuf *psVar7;
  ostream *poVar8;
  Mesh *this_00;
  ulong uVar9;
  long *plVar10;
  Mesh *pMVar11;
  locale *plVar12;
  VHACD *pVVar13;
  VHACD *pVVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long extraout_RDX;
  VHACD *pVVar18;
  VHACD *pVVar19;
  long lVar20;
  Mesh *this_01;
  locale *this_02;
  long in_FS_OFFSET;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float extraout_XMM1_Da;
  SArray *local_13a8;
  VHACD *local_1368;
  VHACD *local_1360;
  VHACD *local_1358;
  VHACD *local_1340;
  VHACD *local_1338;
  VHACD *local_1330;
  VHACD *local_1328;
  undefined1 **local_1310;
  VHACD *local_1308;
  string *local_1300;
  long local_12e8;
  VHACD *local_12d0;
  VHACD *local_12c8;
  VHACD *local_12c0;
  VHACD *local_12b8;
  locale *local_12b0;
  VHACD *local_12a8;
  size_t local_12a0;
  ulong local_1298 [2];
  locale local_1288 [256];
  locale *local_1188;
  VHACD *local_1180;
  VHACD *pVStack_1178;
  code *local_1168;
  pointer_____offset_0x10___ puStack_1160;
  undefined1 local_1158 [16];
  undefined1 local_1148 [16];
  undefined1 local_1138 [16];
  locale local_1128 [8];
  undefined4 local_1120;
  undefined1 *local_1118;
  char *local_1110;
  undefined1 local_1108;
  undefined7 uStack_1107;
  code *local_10f8 [27];
  undefined8 local_1020;
  undefined2 local_1018;
  undefined1 local_1010 [16];
  undefined1 local_1000 [16];
  SArray local_fe8 [1536];
  long local_9e8;
  undefined8 local_9e0;
  VHACD *pVStack_9d8;
  undefined1 *local_9c8;
  undefined8 local_9c0;
  undefined1 local_9b8;
  undefined7 uStack_9b7;
  long local_40;
  
  puVar6 = PTR_vtable_0010f400;
  this_02 = local_1128;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_13a8 = (SArray *)std::ios_base::ios_base;
  clock_gettime(0,(timespec *)(this + 0x2e8));
  std::__cxx11::string::_M_replace((ulong)(this + 0x228),0,*(char **)(this + 0x230),0x10a8b3);
  std::ios_base::ios_base((ios_base *)local_10f8);
  local_10f8[0] = std::ios::init;
  local_1018 = 0;
  local_1010 = (undefined1  [16])0x0;
  local_1000 = (undefined1  [16])0x0;
  local_1168 = _init;
  local_1020 = 0;
  psVar7 = (streambuf *)((ostream *)&local_1168 + *(long *)(_init + -0x18));
  *(undefined8 *)psVar7 = _locale;
  std::ios::init(psVar7);
  local_1158 = (undefined1  [16])0x0;
  local_10f8[0] = std::__ostream_insert<char,std::char_traits<char>>;
  local_1168 = std::ios_base::ios_base;
  puStack_1160 = puVar6;
  local_1148 = (undefined1  [16])0x0;
  local_1138 = (undefined1  [16])0x0;
  std::locale::locale(this_02);
  puStack_1160 = std::ios_base::ios_base;
  local_1108 = 0;
  local_1120 = 0x10;
  local_1110 = (char *)0x0;
  local_1118 = &local_1108;
  std::ios::init((streambuf *)local_10f8);
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1168,"+ ",2);
    poVar8 = std::__ostream_insert<char,std::char_traits<char>>
                       ((ostream *)&local_1168,*(char **)(this + 0x228),*(long *)(this + 0x230));
    this_00 = *(Mesh **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
    if (this_00 == (Mesh *)0x0) goto LAB_0010770c;
    if (this_00[0x38] == (Mesh)0x0) {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*(long *)this_00 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*(long *)this_00 + 0x30))(this_00);
      }
    }
    std::ostream::put((char)poVar8);
    std::ostream::flush();
    plVar2 = *(long **)(param_1 + 0x28);
    pcVar3 = *(code **)(*plVar2 + 0x10);
    local_9c0 = 0;
    local_9b8 = 0;
    local_9c8 = &local_9b8;
    if (local_1138._0_8_ == 0) {
      std::__cxx11::string::_M_assign((string *)&local_9c8);
    }
    else {
      std::__cxx11::string::_M_replace((ulong)&local_9c8,0,(char *)0x0,local_1148._8_8_);
    }
    (*pcVar3)(plVar2,local_9c8);
    if (local_9c8 != &local_9b8) {
      operator_delete(local_9c8,CONCAT71(uStack_9b7,local_9b8) + 1);
    }
  }
  pVVar18 = *(VHACD **)(this + 0x218);
  if (((VHACD *)0x1 < pVVar18) && (this[0x348] == (VHACD)0x0)) {
    this_00 = (Mesh *)&local_9c8;
    local_9e8 = 0;
    local_9e0 = __LC7;
    pVStack_9d8 = _UNK_0010f338;
    ::VHACD::Mesh::Mesh(this_00);
    local_1188 = (locale *)0x0;
    local_1360 = (VHACD *)0x40;
    local_1180 = (VHACD *)__LC7;
    pVStack_1178 = _UNK_0010f338;
    local_1328 = (VHACD *)((ulong)((long)(pVVar18 + -1) * (long)pVVar18) >> 1);
    if (0x81 < (ulong)((long)(pVVar18 + -1) * (long)pVVar18)) {
      uVar9 = (long)local_1328 * 4;
      if ((VHACD *)0x1ffffffffffffffe < local_1328) {
        uVar9 = 0xffffffffffffffff;
      }
      local_1188 = (locale *)operator_new__(uVar9);
      local_1360 = local_1328;
      pVStack_1178 = local_1328;
    }
    local_1368 = (VHACD *)0x0;
    local_13a8 = local_fe8;
    pVVar14 = (VHACD *)0x1;
    local_1180 = local_1328;
    do {
      if (*(long *)(this + 0x220) == 0x40) {
        dVar23 = (double)::VHACD::Mesh::ComputeVolume();
      }
      else {
        dVar23 = (double)::VHACD::Mesh::ComputeVolume();
      }
      lVar16 = (long)local_1368 * 4;
      pVVar13 = (VHACD *)0x0;
      do {
        pVVar19 = pVVar13;
        pVVar13 = this + 0x10;
        if (*(long *)(this + 0x220) != 0x40) {
          pVVar13 = *(VHACD **)(this + 0x210);
        }
        ComputeConvexHull(*(Mesh **)(pVVar13 + (long)pVVar14 * 8),
                          *(Mesh **)(pVVar13 + (long)pVVar19 * 8),local_13a8,this_00);
        dVar1 = *(double *)(this + 0x2c8);
        dVar21 = (double)::VHACD::Mesh::ComputeVolume();
        dVar22 = (double)::VHACD::Mesh::ComputeVolume();
        plVar12 = local_1288;
        if (local_1360 != (VHACD *)0x40) {
          plVar12 = local_1188;
        }
        pVVar13 = pVVar19 + 1;
        *(float *)(plVar12 + lVar16) =
             (float)((double)((ulong)(dVar21 - (dVar22 + (double)(float)dVar23)) & __LC8) / dVar1);
        lVar16 = lVar16 + 4;
      } while (pVVar13 != pVVar14);
      local_1368 = local_1368 + (long)pVVar13;
      pVVar14 = pVVar19 + 2;
    } while (pVVar18 != pVVar14);
    plVar12 = this_02;
    local_1358 = pVVar18;
    if (this[0x348] != (VHACD)0x0) goto LAB_0010761b;
    local_1310 = &local_1118;
    local_1300 = (string *)&local_12a8;
    local_12d0 = this + 600;
    local_1358 = (VHACD *)local_1298;
    local_1338 = *(VHACD **)(this + 0x218);
    local_12c8 = *(VHACD **)(this + 0x218);
    local_12c0 = local_1358;
    local_12b8 = local_1358;
    local_12b0 = this_02;
    goto LAB_00106aa0;
  }
LAB_0010645f:
  uVar5 = _UNK_0010f3b8;
  uVar4 = _LC17;
  plVar2 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(this + 0x268) = _LC57;
  *(undefined8 *)(this + 0x270) = uVar5;
  *(undefined8 *)(this + 0x278) = uVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))
              (_LC57,uVar4,uVar4,plVar2,*(undefined8 *)(this + 0x228),*(undefined8 *)(this + 0x248))
    ;
  }
  clock_gettime(0,(timespec *)(this + 0x2f8));
  if (*(long *)(param_1 + 0x28) != 0) {
    local_1310 = &local_1118;
    local_9c0 = 0;
    local_9b8 = 0;
    local_9c8 = &local_9b8;
    std::__cxx11::string::_M_replace((ulong)local_1310,0,local_1110,(ulong)&local_9b8);
    std::__cxx11::stringbuf::_M_sync((char *)&puStack_1160,(ulong)local_1118,0);
    if (local_9c8 != &local_9b8) {
      operator_delete(local_9c8,CONCAT71(uStack_9b7,local_9b8) + 1);
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1168,"\t time ",7);
    this_00 = (Mesh *)std::ostream::_M_insert<double>
                                ((((double)(*(long *)(this + 0x300) - *(long *)(this + 0x2f0)) *
                                   __LC20 + (double)(*(long *)(this + 0x2f8) -
                                                    *(long *)(this + 0x2e8))) * _LC21) / _LC21);
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)this_00,"s",1);
    plVar2 = *(long **)((ostream *)this_00 + *(long *)(*(long *)this_00 + -0x18) + 0xf0);
    if (plVar2 == (long *)0x0) {
LAB_0010770c:
      dVar23 = (double)std::__throw_bad_cast();
      lVar16 = extraout_RDX;
      fVar24 = extraout_XMM1_Da;
LAB_00107711:
      dVar23 = sqrt(dVar23);
      local_12e8 = (long)((int)dVar23 + -1 >> 1);
      local_1330 = (VHACD *)(local_12e8 + 1);
      local_1308 = (VHACD *)((ulong)((long)local_1330 * local_12e8) >> 1);
      local_1340 = (VHACD *)(lVar16 - (long)local_1308);
LAB_00106d4a:
      do {
        if (*(long *)(param_1 + 0x28) != 0) {
          local_1298[0] = local_1298[0] & 0xffffffffffffff00;
          local_12a8 = local_1358;
          local_12a0 = 0;
          std::__cxx11::string::_M_replace((ulong)local_1310,0,local_1110,(ulong)local_1358);
          std::__cxx11::stringbuf::_M_sync((char *)&puStack_1160,(ulong)local_1118,0);
          if (local_12a8 != local_1358) {
            operator_delete(local_12a8,local_1298[0] + 1);
          }
          std::__ostream_insert<char,std::char_traits<char>>
                    ((ostream *)&local_1168,"\t\t Merging (",0xc);
          poVar8 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1168);
          std::__ostream_insert<char,std::char_traits<char>>(poVar8,", ",2);
          poVar8 = std::ostream::_M_insert<unsigned_long>((ulong)poVar8);
          std::__ostream_insert<char,std::char_traits<char>>(poVar8,") ",2);
          poVar8 = std::ostream::_M_insert<double>((double)fVar24);
          plVar2 = *(long **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
          if (plVar2 == (long *)0x0) goto LAB_0010770c;
          if ((char)plVar2[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar2 + 0x30))(plVar2);
            }
          }
          std::ostream::put((char)poVar8);
          plVar10 = (long *)std::ostream::flush();
          plVar2 = *(long **)((long)plVar10 + *(long *)(*plVar10 + -0x18) + 0xf0);
          if (plVar2 == (long *)0x0) goto LAB_0010770c;
          if ((char)plVar2[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar2 + 0x30))(plVar2);
            }
          }
          std::ostream::put((char)plVar10);
          std::ostream::flush();
          plVar2 = *(long **)(param_1 + 0x28);
          pcVar3 = *(code **)(*plVar2 + 0x10);
          local_12a0 = 0;
          local_1298[0] = local_1298[0] & 0xffffffffffffff00;
          local_12a8 = local_1358;
          if (local_1138._0_8_ == 0) {
            std::__cxx11::string::_M_assign(local_1300);
          }
          else {
            std::__cxx11::string::_M_replace((ulong)local_1300,0,(char *)0x0,local_1148._8_8_);
          }
          (*pcVar3)(plVar2,local_12a8);
          if (local_12a8 != local_1358) {
            operator_delete(local_12a8,local_1298[0] + 1);
          }
        }
        pMVar11 = (Mesh *)operator_new(0x980);
        ::VHACD::Mesh::Mesh(pMVar11);
        pVVar18 = this + 0x10;
        if (*(long *)(this + 0x220) != 0x40) {
          pVVar18 = *(VHACD **)(this + 0x210);
        }
        lVar16 = (long)local_1340 * 8;
        lVar20 = (long)local_1330 * 8;
        ComputeConvexHull(*(Mesh **)(pVVar18 + (long)local_1330 * 8),
                          *(Mesh **)(pVVar18 + (long)local_1340 * 8),local_13a8,pMVar11);
        if (*(long *)(this + 0x220) == 0x40) {
          this_01 = *(Mesh **)(this + lVar16 + 0x10);
          if (this_01 != (Mesh *)0x0) goto LAB_0010701f;
LAB_001073c3:
          pVVar18 = this + 0x10;
          *(Mesh **)(this + lVar16 + 0x10) = pMVar11;
          pMVar11 = *(Mesh **)(this + lVar20 + 0x10);
          if (pMVar11 != (Mesh *)0x0) goto LAB_00107064;
          lVar17 = *(long *)(this + 0x218) + -1;
LAB_00107099:
          pVVar13 = pVVar18 + lVar20;
          lVar20 = *(long *)pVVar13;
        }
        else {
          pVVar18 = *(VHACD **)(this + 0x210);
          pVVar14 = pVVar18 + lVar16;
          this_01 = *(Mesh **)pVVar14;
          if (this_01 != (Mesh *)0x0) {
LAB_0010701f:
            ::VHACD::Mesh::~Mesh(this_01);
            operator_delete(this_01,0x980);
            if (*(long *)(this + 0x220) == 0x40) goto LAB_001073c3;
            pVVar18 = *(VHACD **)(this + 0x210);
            pVVar14 = pVVar18 + lVar16;
          }
          pVVar13 = pVVar18 + lVar20;
          *(Mesh **)pVVar14 = pMVar11;
          pMVar11 = *(Mesh **)pVVar13;
          if (pMVar11 != (Mesh *)0x0) {
LAB_00107064:
            ::VHACD::Mesh::~Mesh(pMVar11);
            operator_delete(pMVar11,0x980);
            lVar17 = *(long *)(this + 0x218) + -1;
            pVVar18 = this + 0x10;
            if (*(long *)(this + 0x220) != 0x40) {
              pVVar18 = *(VHACD **)(this + 0x210);
            }
            goto LAB_00107099;
          }
          lVar17 = *(long *)(this + 0x218) + -1;
          lVar20 = 0;
        }
        *(long *)pVVar13 = *(long *)(pVVar18 + lVar17 * 8);
        *(long *)(pVVar18 + lVar17 * 8) = lVar20;
        *(long *)(this + 0x218) = lVar17;
        dVar23 = (double)::VHACD::Mesh::ComputeVolume();
        pVVar18 = (VHACD *)((ulong)((long)(local_1340 + -1) * (long)local_1340) >> 1);
        if (local_1340 == (VHACD *)0x0) {
          pVVar18 = (VHACD *)0x0;
        }
        else {
          pVVar14 = pVVar18 + (long)local_1340;
          lVar20 = 0;
          do {
            if (this[0x348] != (VHACD)0x0) break;
            pVVar13 = this + 0x10;
            if (*(long *)(this + 0x220) != 0x40) {
              pVVar13 = *(VHACD **)(this + 0x210);
            }
            ComputeConvexHull(*(Mesh **)(pVVar13 + lVar16),*(Mesh **)(pVVar13 + lVar20),local_13a8,
                              this_00);
            dVar1 = *(double *)(this + 0x2c8);
            dVar21 = (double)::VHACD::Mesh::ComputeVolume();
            pVVar18 = pVVar18 + 1;
            lVar20 = lVar20 + 8;
            dVar22 = (double)::VHACD::Mesh::ComputeVolume();
            *(float *)(this_02 + (long)pVVar18 * 4 + -4) =
                 (float)((double)((ulong)(dVar21 - (dVar22 + (double)(float)dVar23)) & __LC8) /
                        dVar1);
          } while (pVVar18 != pVVar14);
        }
        pVVar18 = pVVar18 + (long)local_1340;
        pVVar14 = local_1340;
        while ((pVVar14 = pVVar14 + 1, pVVar14 < local_1368 && (this[0x348] == (VHACD)0x0))) {
          pVVar13 = this + 0x10;
          if (*(long *)(this + 0x220) != 0x40) {
            pVVar13 = *(VHACD **)(this + 0x210);
          }
          ComputeConvexHull(*(Mesh **)(pVVar13 + lVar16),*(Mesh **)(pVVar13 + (long)pVVar14 * 8),
                            local_13a8,this_00);
          dVar1 = *(double *)(this + 0x2c8);
          dVar21 = (double)::VHACD::Mesh::ComputeVolume();
          dVar22 = (double)::VHACD::Mesh::ComputeVolume();
          *(float *)(this_02 + (long)pVVar18 * 4) =
               (float)((double)((ulong)(dVar21 - (dVar22 + (double)(float)dVar23)) & __LC8) / dVar1)
          ;
          pVVar18 = pVVar18 + (long)pVVar14;
        }
        pVVar18 = (VHACD *)((ulong)((long)(local_1338 + -2) * (long)local_1368) >> 1);
        if (local_1330 < local_1368) {
          pVVar14 = pVVar18;
          if (local_1330 != (VHACD *)0x0) {
            pVVar14 = (VHACD *)0x0;
            do {
              if (local_1340 != pVVar14) {
                *(undefined4 *)(this_02 + (long)pVVar14 * 4 + (long)local_1308 * 4) =
                     *(undefined4 *)(this_02 + (long)pVVar14 * 4 + (long)pVVar18 * 4);
              }
              pVVar14 = pVVar14 + 1;
            } while (pVVar14 != local_1330);
            local_1308 = local_1308 + (long)local_1330;
            pVVar14 = local_1330 + (long)pVVar18;
          }
          local_1330 = local_1330 + (long)local_1308;
          pVVar13 = (VHACD *)(local_12e8 + 2);
          if (pVVar13 < local_1338) {
            do {
              *(undefined4 *)(this_02 + (long)local_1330 * 4) =
                   *(undefined4 *)
                    (this_02 + (long)pVVar13 * 4 + ((long)pVVar14 - local_12e8) * 4 + -4);
              local_1330 = local_1330 + (long)pVVar13;
              pVVar13 = pVVar13 + 1;
            } while (pVVar13 != local_1338);
          }
        }
        plVar12 = local_1188;
        pVVar14 = pVStack_1178;
        if (local_1360 < pVVar18) {
          uVar9 = 0xffffffffffffffff;
          if (pVVar18 < (VHACD *)0x1fffffffffffffff) {
            uVar9 = (long)pVVar18 * 4;
          }
          plVar12 = (locale *)operator_new__(uVar9);
          __memcpy_chk(plVar12,this_02,(long)local_1328 << 2,uVar9);
          pVVar14 = pVVar18;
          if (local_1188 != (locale *)0x0) {
            operator_delete__(local_1188);
          }
        }
        pVStack_1178 = pVVar14;
        local_1188 = plVar12;
        plVar12 = local_12b0;
        local_1180 = pVVar18;
        if (this[0x348] != (VHACD)0x0) goto LAB_0010761b;
        local_1360 = pVStack_1178;
        local_1338 = local_1368;
        local_1328 = pVVar18;
LAB_00106aa0:
        local_12a0 = 0;
        local_1298[0] = local_1298[0] & 0xffffffffffffff00;
        local_12a8 = local_1358;
        std::__cxx11::string::_M_replace((ulong)local_1310,0,local_1110,(ulong)local_1358);
        std::__cxx11::stringbuf::_M_sync((char *)&puStack_1160,(ulong)local_1118,0);
        if (local_12a8 != local_1358) {
          operator_delete(local_12a8,local_1298[0] + 1);
        }
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1168,"Iteration ",10);
        std::ostream::operator<<((ostream *)&local_1168,(int)local_12c8 - (int)local_1338);
        local_12a0 = 0;
        local_1298[0] = local_1298[0] & 0xffffffffffffff00;
        local_12a8 = local_1358;
        if (local_1138._0_8_ == 0) {
          std::__cxx11::string::_M_assign(local_1300);
        }
        else {
          std::__cxx11::string::_M_replace((ulong)local_1300,0,(char *)0x0,local_1148._8_8_);
        }
        pVVar18 = *(VHACD **)(this + 0x248);
        if (pVVar18 == local_12d0) {
          if (local_12a8 == local_1358) goto LAB_001075a8;
          *(VHACD **)(this + 0x248) = local_12a8;
          *(size_t *)(this + 0x250) = local_12a0;
          *(ulong *)(this + 600) = local_1298[0];
LAB_0010757e:
          local_12a8 = local_1358;
          local_1358 = local_12c0;
          pVVar18 = local_12b8;
          uVar9 = local_1298[0];
        }
        else if (local_12a8 == local_1358) {
LAB_001075a8:
          if (local_12a0 != 0) {
            if (local_12a0 == 1) {
              *pVVar18 = local_1298[0]._0_1_;
              pVVar18 = *(VHACD **)(this + 0x248);
            }
            else {
              memcpy(pVVar18,local_1358,local_12a0);
              pVVar18 = *(VHACD **)(this + 0x248);
            }
          }
          *(size_t *)(this + 0x250) = local_12a0;
          pVVar18[local_12a0] = (VHACD)0x0;
          pVVar18 = local_12a8;
          uVar9 = local_1298[0];
        }
        else {
          uVar9 = *(ulong *)(this + 600);
          *(VHACD **)(this + 0x248) = local_12a8;
          *(size_t *)(this + 0x250) = local_12a0;
          *(ulong *)(this + 600) = local_1298[0];
          local_12a8 = pVVar18;
          if (pVVar18 == (VHACD *)0x0) goto LAB_0010757e;
        }
        local_1298[0] = uVar9;
        local_12a0 = 0;
        *pVVar18 = (VHACD)0x0;
        if (local_12a8 != local_1358) {
          operator_delete(local_12a8,local_1298[0] + 1);
        }
        this_02 = local_1288;
        if (local_1360 != (VHACD *)0x40) {
          this_02 = local_1188;
        }
        local_1368 = local_1338 + -1;
        plVar12 = local_12b0;
        fVar24 = _LC50;
        if ((int)local_1328 == 0) {
          if (local_1368 < (VHACD *)(ulong)*(uint *)(param_1 + 0x50)) goto LAB_0010761b;
          local_1330 = (VHACD *)0x40000000;
          local_1340 = (VHACD *)0xf80000001fffffff;
          local_1308 = (VHACD *)0x7ffffffe0000000;
          local_12e8 = 0x3fffffff;
          goto LAB_00106d4a;
        }
        uVar15 = 0xffffffff;
        uVar9 = 0;
        do {
          if (*(float *)(this_02 + uVar9 * 4) < fVar24) {
            uVar15 = uVar9 & 0xffffffff;
            fVar24 = *(float *)(this_02 + uVar9 * 4);
          }
          uVar9 = uVar9 + 1;
        } while ((long)(int)local_1328 != uVar9);
        lVar16 = (long)(int)uVar15;
        if (local_1368 < (VHACD *)(ulong)*(uint *)(param_1 + 0x50)) goto LAB_0010761b;
        dVar23 = (double)(lVar16 * 8 + 1);
        if (dVar23 < 0.0) goto LAB_00107711;
        local_12e8 = (long)((int)SQRT(dVar23) + -1 >> 1);
        local_1330 = (VHACD *)(local_12e8 + 1);
        local_1308 = (VHACD *)((ulong)((long)local_1330 * local_12e8) >> 1);
        local_1340 = (VHACD *)(lVar16 - (long)local_1308);
      } while( true );
    }
    if ((char)plVar2[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar2 + 0x30))(plVar2);
      }
    }
    std::ostream::put((char)this_00);
    std::ostream::flush();
    plVar2 = *(long **)(param_1 + 0x28);
    pcVar3 = *(code **)(*plVar2 + 0x10);
    local_9c0 = 0;
    local_9b8 = 0;
    if (local_1138._0_8_ == 0) {
      local_9c8 = &local_9b8;
      std::__cxx11::string::_M_assign((string *)&local_9c8);
    }
    else {
      local_9c8 = &local_9b8;
      std::__cxx11::string::_M_replace((ulong)&local_9c8,0,(char *)0x0,local_1148._8_8_);
    }
    (*pcVar3)(plVar2,local_9c8);
    if (local_9c8 != &local_9b8) {
      operator_delete(local_9c8,CONCAT71(uStack_9b7,local_9b8) + 1);
    }
  }
  local_10f8[0] = std::__ostream_insert<char,std::char_traits<char>>;
  local_1168 = std::ios_base::ios_base;
  puStack_1160 = std::ios_base::ios_base;
  if (local_1118 != &local_1108) {
    operator_delete(local_1118,CONCAT71(uStack_1107,local_1108) + 1);
  }
  puStack_1160 = std::ios_base::~ios_base;
  std::locale::~locale(this_02);
  local_1168 = _init;
  *(undefined8 *)((long)&local_1168 + *(long *)(_init + -0x18)) = _locale;
  local_10f8[0] = std::ios::init;
  std::ios_base::~ios_base((ios_base *)local_10f8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0010761b:
  if (local_1188 != (locale *)0x0) {
    operator_delete__(local_1188);
  }
  ::VHACD::Mesh::~Mesh(this_00);
  this_02 = plVar12;
  if (local_9e8 != 0) {
    operator_delete__((void *)(local_9e8 + -8),*(long *)(local_9e8 + -8) * 0x18 + 8);
  }
  goto LAB_0010645f;
}



/* VHACD::VHACD::MergeConvexHulls(VHACD::IVHACD::Parameters const&) */

void __thiscall VHACD::VHACD::MergeConvexHulls(VHACD *this,Parameters *param_1)

{
  if (this[0x348] != (VHACD)0x0) {
    return;
  }
  MergeConvexHulls(this,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::VHACD::SimplifyConvexHull(VHACD::Mesh*, unsigned long, double) [clone .part.0] */

void VHACD::VHACD::SimplifyConvexHull(Mesh *param_1,ulong param_2,double param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  double *pdVar5;
  double *pdVar6;
  ulong *puVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long in_FS_OFFSET;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double local_730;
  double local_728;
  double dStack_720;
  double local_718;
  double local_708;
  double dStack_700;
  double local_6f8;
  ICHull local_6e8 [16];
  ulong local_6d8;
  ulong local_6b8;
  void *local_4b0;
  void *local_298;
  void *local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ::VHACD::ICHull::ICHull(local_6e8);
  if (*(long *)(param_1 + 8) == 0) {
    uVar11 = param_2;
    if (*(long *)(param_2 + 0x610) != 0x40) {
      uVar11 = *(ulong *)(param_2 + 0x600);
    }
    ::VHACD::ICHull::AddPoints((Vec3 *)local_6e8,uVar11);
  }
  else {
    pdVar9 = (double *)param_2;
    if (*(long *)(param_2 + 0x610) != 0x40) {
      pdVar9 = *(double **)(param_2 + 0x600);
    }
    dVar27 = *pdVar9;
    dVar15 = pdVar9[1];
    dVar19 = pdVar9[3];
    dVar16 = pdVar9[4];
    dVar18 = pdVar9[2];
    dVar20 = pdVar9[5];
    uVar12 = (uint)*(ulong *)(param_2 + 0x608);
    if (1 < uVar12) {
      pdVar5 = pdVar9 + 3;
      dVar17 = dVar20;
      dVar25 = dVar16;
      dVar26 = dVar19;
      dVar21 = dVar15;
      dVar23 = dVar27;
      do {
        dVar27 = *pdVar5;
        pdVar6 = pdVar5 + 3;
        dVar19 = dVar27;
        if (dVar27 <= dVar26) {
          dVar19 = dVar26;
        }
        if (dVar23 <= dVar27) {
          dVar27 = dVar23;
        }
        dVar15 = pdVar5[1];
        dVar16 = dVar15;
        if (dVar15 <= dVar25) {
          dVar16 = dVar25;
        }
        if (dVar21 <= dVar15) {
          dVar15 = dVar21;
        }
        dVar25 = pdVar5[2];
        dVar20 = dVar25;
        if (dVar25 <= dVar17) {
          dVar20 = dVar17;
        }
        if (dVar18 <= dVar25) {
          dVar25 = dVar18;
        }
        dVar18 = dVar25;
        pdVar5 = pdVar6;
        dVar17 = dVar20;
        dVar25 = dVar16;
        dVar26 = dVar19;
        dVar21 = dVar15;
        dVar23 = dVar27;
      } while (pdVar9 + (ulong)(uVar12 - 2) * 3 + 6 != pdVar6);
    }
    uVar11 = *(ulong *)(param_2 + 0x608) & 0xffffffff;
    local_728 = (dVar27 + dVar19) * _LC26;
    dStack_720 = (dVar15 + dVar16) * _LC26;
    local_718 = (dVar18 + dVar20) * _LC26;
    dVar18 = SQRT((dVar20 - dVar18) * (dVar20 - dVar18) +
                  (dVar19 - dVar27) * (dVar19 - dVar27) + (dVar16 - dVar15) * (dVar16 - dVar15));
    dVar20 = dVar18 * __LC76;
    dVar27 = _LC75 * dVar18;
    puVar7 = (ulong *)operator_new__(uVar11 * 0x18 + 8);
    *puVar7 = uVar11;
    pdVar5 = (double *)(puVar7 + 1);
    if (uVar12 != 0) {
      pdVar6 = pdVar9 + uVar11 * 3;
      uVar11 = 0;
      uVar13 = 0;
      do {
        pdVar1 = pdVar5 + uVar11 * 3;
        auVar22._0_8_ = *pdVar9 - local_728;
        auVar22._8_8_ = pdVar9[1] - dStack_720;
        dVar19 = pdVar9[2] - local_718;
        dVar15 = SQRT(auVar22._0_8_ * auVar22._0_8_ + auVar22._8_8_ * auVar22._8_8_ +
                      dVar19 * dVar19);
        if (dVar15 != 0.0) {
          dVar19 = dVar19 / dVar15;
          auVar24._8_8_ = dVar15;
          auVar24._0_8_ = dVar15;
          auVar22 = divpd(auVar22,auVar24);
        }
        puVar2 = *(undefined8 **)(param_1 + 8);
        puVar3 = (undefined8 *)*puVar2;
        local_708 = auVar22._0_8_ * dVar18 + local_728;
        dStack_700 = auVar22._8_8_ * dVar18 + dStack_720;
        local_6f8 = dVar19 * dVar18 + local_718;
        dVar15 = pdVar9[1];
        *pdVar1 = *pdVar9;
        pdVar1[1] = dVar15;
        pdVar1[2] = pdVar9[2];
        cVar4 = (*(code *)*puVar3)(puVar2,&local_728,&local_708,pdVar9,pdVar1,&local_730);
        if ((cVar4 != '\0') && (dVar27 < local_730)) {
          dVar15 = pdVar9[1];
          *pdVar1 = *pdVar9;
          pdVar1[1] = dVar15;
          pdVar1[2] = pdVar9[2];
        }
        if ((int)uVar13 != 0) {
          pdVar8 = pdVar5;
          do {
            if ((*pdVar8 - *pdVar1) * (*pdVar8 - *pdVar1) +
                (pdVar8[1] - pdVar1[1]) * (pdVar8[1] - pdVar1[1]) +
                (pdVar8[2] - pdVar1[2]) * (pdVar8[2] - pdVar1[2]) < dVar20 * dVar20)
            goto joined_r0x00107b72;
            pdVar8 = pdVar8 + 3;
          } while (pdVar8 != pdVar5 + uVar11 * 3);
        }
        uVar11 = (ulong)((int)uVar13 + 1);
        uVar13 = uVar11;
joined_r0x00107b72:
        pdVar9 = pdVar9 + 3;
      } while (pdVar6 != pdVar9);
    }
    ::VHACD::ICHull::AddPoints((Vec3 *)local_6e8,(ulong)pdVar5);
    operator_delete__(puVar7,*puVar7 * 0x18 + 8);
  }
  ::VHACD::ICHull::Process((uint)local_6e8,param_3);
  if (*(ulong *)(param_2 + 0x610) < local_6d8) {
    if (local_6d8 < 0x555555555555556) {
      lVar14 = local_6d8 * 0x18;
      uVar11 = lVar14 + 8;
    }
    else {
      lVar14 = -9;
      uVar11 = 0xffffffffffffffff;
    }
    puVar7 = (ulong *)operator_new__(uVar11);
    *puVar7 = local_6d8;
    uVar11 = param_2;
    if (*(long *)(param_2 + 0x610) != 0x40) {
      uVar11 = *(ulong *)(param_2 + 0x600);
    }
    __memcpy_chk(puVar7 + 1,uVar11,*(long *)(param_2 + 0x608) * 0x18,lVar14);
    lVar14 = *(long *)(param_2 + 0x600);
    if (lVar14 != 0) {
      operator_delete__((void *)(lVar14 + -8),*(long *)(lVar14 + -8) * 0x18 + 8);
    }
    *(ulong **)(param_2 + 0x600) = puVar7 + 1;
    *(ulong *)(param_2 + 0x610) = local_6d8;
  }
  *(ulong *)(param_2 + 0x608) = local_6d8;
  if (*(ulong *)(param_2 + 0x928) < local_6b8) {
    if (local_6b8 < 0xaaaaaaaaaaaaaab) {
      lVar14 = local_6b8 * 0xc;
      uVar11 = lVar14 + 8;
    }
    else {
      lVar14 = -9;
      uVar11 = 0xffffffffffffffff;
    }
    puVar7 = (ulong *)operator_new__(uVar11);
    *puVar7 = local_6b8;
    lVar10 = param_2 + 0x618;
    if (*(long *)(param_2 + 0x928) != 0x40) {
      lVar10 = *(long *)(param_2 + 0x918);
    }
    __memcpy_chk(puVar7 + 1,lVar10,*(long *)(param_2 + 0x920) * 0xc,lVar14);
    lVar14 = *(long *)(param_2 + 0x918);
    if (lVar14 != 0) {
      operator_delete__((void *)(lVar14 + -8),*(long *)(lVar14 + -8) * 0xc + 8);
    }
    *(ulong **)(param_2 + 0x918) = puVar7 + 1;
    *(ulong *)(param_2 + 0x928) = local_6b8;
  }
  *(ulong *)(param_2 + 0x920) = local_6b8;
  if (*(long *)(param_2 + 0x610) != 0x40) {
    param_2 = *(undefined8 *)(param_2 + 0x600);
  }
  ::VHACD::TMMesh::GetIFS((Vec3 *)local_6e8,(Vec3 *)param_2);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  if (local_298 != (void *)0x0) {
    operator_delete__(local_298);
  }
  if (local_4b0 != (void *)0x0) {
    operator_delete__(local_4b0);
  }
  ::VHACD::TMMesh::~TMMesh((TMMesh *)local_6e8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VHACD::VHACD::SimplifyConvexHull(VHACD::Mesh*, unsigned long, double) */

void __thiscall
VHACD::VHACD::SimplifyConvexHull(VHACD *this,Mesh *param_1,ulong param_2,double param_3)

{
  if (param_2 < 5) {
    return;
  }
  SimplifyConvexHull((Mesh *)this,(ulong)param_1,param_3);
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::VHACD::SimplifyConvexHulls(VHACD::IVHACD::Parameters const&) [clone .part.0] */

void __thiscall VHACD::VHACD::SimplifyConvexHulls(VHACD *this,Parameters *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  pointer_____offset_0x10___ puVar6;
  ostream *poVar7;
  VHACD *pVVar8;
  long lVar9;
  streambuf *psVar10;
  long in_FS_OFFSET;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  code *local_1b8;
  pointer_____offset_0x10___ puStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  char *local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [14];
  char acStack_d8 [16];
  long alStack_c8 [11];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  puVar6 = PTR_vtable_0010f400;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  clock_gettime(0,(timespec *)(this + 0x2e8));
  std::__cxx11::string::_M_replace((ulong)(this + 0x228),0,*(char **)(this + 0x230),0x10a8e4);
  std::__cxx11::string::_M_replace((ulong)(this + 0x248),0,*(char **)(this + 0x250),0x10a8e4);
  std::ios_base::ios_base((ios_base *)local_148);
  local_148[0] = std::ios::init;
  local_68 = 0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_1b8 = _init;
  local_70 = 0;
  psVar10 = (streambuf *)((ostream *)&local_1b8 + *(long *)(_init + -0x18));
  *(undefined8 *)psVar10 = _locale;
  std::ios::init(psVar10);
  local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
  local_1b8 = std::ios_base::ios_base;
  puStack_1b0 = puVar6;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  std::locale::locale(local_178);
  puStack_1b0 = std::ios_base::ios_base;
  local_170 = 0x10;
  local_160 = (char *)0x0;
  local_158 = 0;
  local_168 = &local_158;
  std::ios::init((streambuf *)local_148);
  lVar1 = *(long *)(this + 0x218);
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_00108185:
    plVar2 = *(long **)(param_1 + 0x20);
    *(undefined1 (*) [16])(this + 0x270) = (undefined1  [16])0x0;
    uVar5 = _LC17;
    if (plVar2 == (long *)0x0) {
      if (lVar1 != 0) goto LAB_001081cf;
      *(undefined8 *)(this + 0x278) = _LC17;
      *(undefined8 *)(this + 0x268) = uVar5;
      *(undefined8 *)(this + 0x270) = uVar5;
    }
    else {
      (**(code **)(*plVar2 + 0x10))
                (*(undefined8 *)(this + 0x268),0,plVar2,*(undefined8 *)(this + 0x228),
                 *(undefined8 *)(this + 0x248));
      if (lVar1 != 0) {
LAB_001081cf:
        lVar9 = 0;
        do {
          if (this[0x348] != (VHACD)0x0) break;
          if (*(long *)(param_1 + 0x28) != 0) {
            local_1d8 = &local_1c8;
            std::__cxx11::string::_M_construct<char_const*>();
            std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)local_1d8);
            std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
            if (local_1d8 != &local_1c8) {
              operator_delete(local_1d8,CONCAT71(uStack_1c7,local_1c8) + 1);
            }
            std::__ostream_insert<char,std::char_traits<char>>
                      ((ostream *)&local_1b8,"\t\t Simplify CH[",0xf);
            lVar4 = *(long *)(local_1b8 + -0x18);
            poVar7 = (ostream *)&local_1b8 + lVar4;
            if (acStack_d8[lVar4 + 1] == '\0') {
              plVar2 = *(long **)((long)alStack_c8 + lVar4);
              if (plVar2 == (long *)0x0) goto LAB_0010893d;
              if ((char)plVar2[7] == '\0') {
                std::ctype<char>::_M_widen_init();
                if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                  (**(code **)(*plVar2 + 0x30))(plVar2,0x20);
                }
                poVar7 = (ostream *)&local_1b8 + *(long *)(local_1b8 + -0x18);
              }
              acStack_d8[lVar4 + 1] = '\x01';
            }
            acStack_d8[lVar4] = '0';
            *(undefined8 *)(poVar7 + 0x10) = 5;
            poVar7 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1b8);
            std::__ostream_insert<char,std::char_traits<char>>(poVar7,"] ",2);
            poVar7 = std::ostream::_M_insert<unsigned_long>((ulong)poVar7);
            std::__ostream_insert<char,std::char_traits<char>>(poVar7," V, ",4);
            poVar7 = std::ostream::_M_insert<unsigned_long>((ulong)poVar7);
            std::__ostream_insert<char,std::char_traits<char>>(poVar7," T",2);
            plVar2 = *(long **)(poVar7 + *(long *)(*(long *)poVar7 + -0x18) + 0xf0);
            if (plVar2 == (long *)0x0) goto LAB_0010893d;
            if ((char)plVar2[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                (**(code **)(*plVar2 + 0x30))();
              }
            }
            std::ostream::put((char)poVar7);
            std::ostream::flush();
            plVar2 = *(long **)(param_1 + 0x28);
            pcVar3 = *(code **)(*plVar2 + 0x10);
            local_1d0 = 0;
            local_1c8 = 0;
            if (local_188._0_8_ == 0) {
              local_1d8 = &local_1c8;
              std::__cxx11::string::_M_assign((string *)&local_1d8);
            }
            else {
              local_1d8 = &local_1c8;
              std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
            }
            (*pcVar3)(plVar2,local_1d8);
            if (local_1d8 != &local_1c8) {
              operator_delete(local_1d8,CONCAT71(uStack_1c7,local_1c8) + 1);
            }
          }
          pVVar8 = this + 0x10;
          if (*(long *)(this + 0x220) != 0x40) {
            pVVar8 = *(VHACD **)(this + 0x210);
          }
          if (4 < *(uint *)(param_1 + 0x34)) {
            SimplifyConvexHull((Mesh *)this,*(ulong *)(pVVar8 + lVar9 * 8),
                               *(double *)(this + 0x2c8) * *(double *)(param_1 + 0x18));
          }
          lVar9 = lVar9 + 1;
        } while (lVar1 != lVar9);
      }
      uVar5 = _LC17;
      plVar2 = *(long **)(param_1 + 0x20);
      *(undefined8 *)(this + 0x268) = _LC17;
      *(undefined8 *)(this + 0x270) = uVar5;
      uVar5 = _LC17;
      *(undefined8 *)(this + 0x278) = _LC17;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x10))
                  (uVar5,uVar5,uVar5,plVar2,*(undefined8 *)(this + 0x228),
                   *(undefined8 *)(this + 0x248));
      }
    }
    clock_gettime(0,(timespec *)(this + 0x2f8));
    if (*(long *)(param_1 + 0x28) != 0) {
      local_1c8 = 0;
      local_1d0 = 0;
      local_1d8 = &local_1c8;
      std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)&local_1c8);
      std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
      if (local_1d8 != &local_1c8) {
        operator_delete(local_1d8,CONCAT71(uStack_1c7,local_1c8) + 1);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"\t time ",7);
      poVar7 = std::ostream::_M_insert<double>
                         ((((double)(*(long *)(this + 0x300) - *(long *)(this + 0x2f0)) * __LC20 +
                           (double)(*(long *)(this + 0x2f8) - *(long *)(this + 0x2e8))) * _LC21) /
                          _LC21);
      std::__ostream_insert<char,std::char_traits<char>>(poVar7,"s",1);
      plVar2 = *(long **)(poVar7 + *(long *)(*(long *)poVar7 + -0x18) + 0xf0);
      if (plVar2 == (long *)0x0) goto LAB_0010893d;
      if ((char)plVar2[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar2 + 0x30))(plVar2);
        }
      }
      std::ostream::put((char)poVar7);
      std::ostream::flush();
      plVar2 = *(long **)(param_1 + 0x28);
      pcVar3 = *(code **)(*plVar2 + 0x10);
      local_1d0 = 0;
      local_1c8 = 0;
      if (local_188._0_8_ == 0) {
        local_1d8 = &local_1c8;
        std::__cxx11::string::_M_assign((string *)&local_1d8);
      }
      else {
        local_1d8 = &local_1c8;
        std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
      }
      (*pcVar3)(plVar2,local_1d8);
      if (local_1d8 != &local_1c8) {
        operator_delete(local_1d8,CONCAT71(uStack_1c7,local_1c8) + 1);
      }
    }
    local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
    local_1b8 = std::ios_base::ios_base;
    puStack_1b0 = std::ios_base::ios_base;
    if (local_168 != &local_158) {
      operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
    }
    puStack_1b0 = std::ios_base::~ios_base;
    std::locale::~locale(local_178);
    local_1b8 = _init;
    *(undefined8 *)((long)&local_1b8 + *(long *)(_init + -0x18)) = _locale;
    local_148[0] = std::ios::init;
    std::ios_base::~ios_base((ios_base *)local_148);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"+ Simplify ",0xb);
    poVar7 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1b8);
    std::__ostream_insert<char,std::char_traits<char>>(poVar7," convex-hulls ",0xe);
    plVar2 = *(long **)(poVar7 + *(long *)(*(long *)poVar7 + -0x18) + 0xf0);
    if (plVar2 != (long *)0x0) {
      if ((char)plVar2[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar2 + 0x30))(plVar2);
        }
      }
      std::ostream::put((char)poVar7);
      std::ostream::flush();
      plVar2 = *(long **)(param_1 + 0x28);
      pcVar3 = *(code **)(*plVar2 + 0x10);
      local_1d0 = 0;
      local_1c8 = 0;
      local_1d8 = &local_1c8;
      if (local_188._0_8_ == 0) {
        std::__cxx11::string::_M_assign((string *)&local_1d8);
      }
      else {
        std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
      }
      (*pcVar3)(plVar2,local_1d8);
      if (local_1d8 != &local_1c8) {
        operator_delete(local_1d8,CONCAT71(uStack_1c7,local_1c8) + 1);
      }
      goto LAB_00108185;
    }
LAB_0010893d:
    std::__throw_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VHACD::VHACD::SimplifyConvexHulls(VHACD::IVHACD::Parameters const&) */

void __thiscall VHACD::VHACD::SimplifyConvexHulls(VHACD *this,Parameters *param_1)

{
  if ((this[0x348] == (VHACD)0x0) && (3 < *(uint *)(param_1 + 0x34))) {
    SimplifyConvexHulls(this,param_1);
    return;
  }
  return;
}



/* VHACD::VHACD::Compute(float const*, unsigned int, unsigned int const*, unsigned int,
   VHACD::IVHACD::Parameters const&) */

undefined8 __thiscall
VHACD::VHACD::Compute
          (VHACD *this,float *param_1,uint param_2,uint *param_3,uint param_4,Parameters *param_5)

{
  Parameters PVar1;
  undefined8 uVar2;
  
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
    *(undefined8 *)(this + 8) = 0;
  }
  *(undefined1 (*) [16])(this + 0x280) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x290) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2b0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x308) = 0x40;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined1 (*) [16])(this + 0x310) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x268) = (undefined1  [16])0x0;
  std::__cxx11::string::_M_replace((ulong)(this + 0x228),0,*(char **)(this + 0x230),0x108fa7);
  std::__cxx11::string::_M_replace((ulong)(this + 0x248),0,*(char **)(this + 0x250),0x108fa7);
  this[0x348] = (VHACD)0x0;
  PVar1 = param_5[0x54];
  *(undefined1 (*) [16])(this + 0x2d0) = (undefined1  [16])0x0;
  uVar2 = _LC1;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2c0) = uVar2;
  *(undefined8 *)(this + 0x2a0) = uVar2;
  *(undefined8 *)(this + 0x280) = uVar2;
  if (PVar1 != (Parameters)0x0) {
    uVar2 = ::VHACD::RaycastMesh::createRaycastMesh(param_2,param_1,param_4,param_3);
    *(undefined8 *)(this + 8) = uVar2;
  }
  AlignMesh<float>(this,param_1,3,param_2,(int *)param_3,3,param_4,param_5);
  VoxelizeMesh<float>(this,param_1,3,param_2,(int *)param_3,3,param_4,param_5);
  if (this[0x348] == (VHACD)0x0) {
    ComputePrimitiveSet(this,param_5);
  }
  ComputeACD(this,param_5);
  if (((this[0x348] == (VHACD)0x0) && (MergeConvexHulls(this,param_5), this[0x348] == (VHACD)0x0))
     && ((*(uint *)(param_5 + 0x34) < 4 ||
         (SimplifyConvexHulls(this,param_5), this[0x348] == (VHACD)0x0)))) {
    return 1;
  }
  (**(code **)(*(long *)this + 0x28))(this);
  return 0;
}



/* VHACD::VHACD::Compute(double const*, unsigned int, unsigned int const*, unsigned int,
   VHACD::IVHACD::Parameters const&) */

undefined8 __thiscall
VHACD::VHACD::Compute
          (VHACD *this,double *param_1,uint param_2,uint *param_3,uint param_4,Parameters *param_5)

{
  Parameters PVar1;
  undefined8 uVar2;
  
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
    *(undefined8 *)(this + 8) = 0;
  }
  *(undefined1 (*) [16])(this + 0x280) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x290) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2b0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x308) = 0x40;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined1 (*) [16])(this + 0x310) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x268) = (undefined1  [16])0x0;
  std::__cxx11::string::_M_replace((ulong)(this + 0x228),0,*(char **)(this + 0x230),0x108fa7);
  std::__cxx11::string::_M_replace((ulong)(this + 0x248),0,*(char **)(this + 0x250),0x108fa7);
  this[0x348] = (VHACD)0x0;
  PVar1 = param_5[0x54];
  *(undefined1 (*) [16])(this + 0x2d0) = (undefined1  [16])0x0;
  uVar2 = _LC1;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2c0) = uVar2;
  *(undefined8 *)(this + 0x2a0) = uVar2;
  *(undefined8 *)(this + 0x280) = uVar2;
  if (PVar1 != (Parameters)0x0) {
    uVar2 = ::VHACD::RaycastMesh::createRaycastMesh(param_2,param_1,param_4,param_3);
    *(undefined8 *)(this + 8) = uVar2;
  }
  AlignMesh<double>(this,param_1,3,param_2,(int *)param_3,3,param_4,param_5);
  VoxelizeMesh<double>(this,param_1,3,param_2,(int *)param_3,3,param_4,param_5);
  if (this[0x348] == (VHACD)0x0) {
    ComputePrimitiveSet(this,param_5);
  }
  ComputeACD(this,param_5);
  if (((this[0x348] == (VHACD)0x0) && (MergeConvexHulls(this,param_5), this[0x348] == (VHACD)0x0))
     && ((*(uint *)(param_5 + 0x34) < 4 ||
         (SimplifyConvexHulls(this,param_5), this[0x348] == (VHACD)0x0)))) {
    return 1;
  }
  (**(code **)(*(long *)this + 0x28))(this);
  return 0;
}



/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
}



/* VHACD::IVHACD::IsReady() const */

undefined8 VHACD::IVHACD::IsReady(void)

{
  return 1;
}



/* VHACD::VHACD::GetNConvexHulls() const */

undefined4 __thiscall VHACD::VHACD::GetNConvexHulls(VHACD *this)

{
  return *(undefined4 *)(this + 0x218);
}



/* VHACD::VHACD::Cancel() */

void __thiscall VHACD::VHACD::Cancel(VHACD *this)

{
  this[0x348] = (VHACD)0x1;
  return;
}



/* VHACD::VHACD::GetConvexHull(unsigned int, VHACD::IVHACD::ConvexHull&) const */

void __thiscall VHACD::VHACD::GetConvexHull(VHACD *this,uint param_1,ConvexHull *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  VHACD *pVVar5;
  undefined8 uVar6;
  
  if (*(long *)(this + 0x220) == 0x40) {
    pVVar5 = this + 0x10;
  }
  else {
    pVVar5 = *(VHACD **)(this + 0x210);
  }
  lVar1 = *(long *)(pVVar5 + (ulong)param_1 * 8);
  lVar2 = *(long *)(lVar1 + 0x610);
  *(int *)(param_2 + 0x10) = (int)*(undefined8 *)(lVar1 + 0x608);
  *(int *)(param_2 + 0x14) = (int)*(undefined8 *)(lVar1 + 0x920);
  lVar3 = lVar1;
  if (lVar2 != 0x40) {
    lVar3 = *(long *)(lVar1 + 0x600);
  }
  lVar2 = *(long *)(lVar1 + 0x928);
  *(long *)param_2 = lVar3;
  lVar3 = lVar1 + 0x618;
  if (lVar2 != 0x40) {
    lVar3 = *(long *)(lVar1 + 0x918);
  }
  *(long *)(param_2 + 8) = lVar3;
  uVar6 = ::VHACD::Mesh::ComputeVolume();
  *(undefined8 *)(param_2 + 0x18) = uVar6;
  puVar4 = (undefined8 *)::VHACD::Mesh::ComputeCenter();
  *(undefined8 *)(param_2 + 0x20) = *puVar4;
  *(undefined8 *)(param_2 + 0x28) = puVar4[1];
  *(undefined8 *)(param_2 + 0x30) = puVar4[2];
  return;
}



/* VHACD::VHACD::~VHACD() */

void __thiscall VHACD::VHACD::~VHACD(VHACD *this)

{
  *(undefined ***)this = &PTR_Cancel_0010f258;
  if (*(VHACD **)(this + 0x248) != this + 600) {
    operator_delete(*(VHACD **)(this + 0x248),*(long *)(this + 600) + 1);
  }
  if (*(VHACD **)(this + 0x228) != this + 0x238) {
    operator_delete(*(VHACD **)(this + 0x228),*(long *)(this + 0x238) + 1);
  }
  if (*(void **)(this + 0x210) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x210));
    return;
  }
  return;
}



/* VHACD::VHACD::~VHACD() */

void __thiscall VHACD::VHACD::~VHACD(VHACD *this)

{
  *(undefined ***)this = &PTR_Cancel_0010f258;
  if (*(VHACD **)(this + 0x248) != this + 600) {
    operator_delete(*(VHACD **)(this + 0x248),*(long *)(this + 600) + 1);
  }
  if (*(VHACD **)(this + 0x228) != this + 0x238) {
    operator_delete(*(VHACD **)(this + 0x228),*(long *)(this + 0x238) + 1);
  }
  if (*(void **)(this + 0x210) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x210));
  }
  operator_delete(this,0x350);
  return;
}



/* VHACD::VHACD::Clean() */

void __thiscall VHACD::VHACD::Clean(VHACD *this)

{
  Volume *this_00;
  long lVar1;
  Mesh *this_01;
  undefined8 uVar2;
  VHACD *pVVar3;
  long lVar4;
  
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
    *(undefined8 *)(this + 8) = 0;
  }
  this_00 = *(Volume **)(this + 0x310);
  if (this_00 != (Volume *)0x0) {
    ::VHACD::Volume::~Volume(this_00);
    operator_delete(this_00,0x70);
  }
  if (*(long **)(this + 0x318) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x318) + 8))();
  }
  lVar1 = *(long *)(this + 0x218);
  if (lVar1 != 0) {
    lVar4 = 0;
    do {
      pVVar3 = this + 0x10;
      if (*(long *)(this + 0x220) != 0x40) {
        pVVar3 = *(VHACD **)(this + 0x210);
      }
      this_01 = *(Mesh **)(pVVar3 + lVar4 * 8);
      if (this_01 != (Mesh *)0x0) {
        ::VHACD::Mesh::~Mesh(this_01);
        operator_delete(this_01,0x980);
      }
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar4);
  }
  *(undefined8 *)(this + 0x218) = 0;
  if (*(void **)(this + 0x210) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x210));
  }
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x220) = 0x40;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
    *(undefined8 *)(this + 8) = 0;
  }
  *(undefined1 (*) [16])(this + 0x280) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x290) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2b0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x308) = 0x40;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined1 (*) [16])(this + 0x310) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x268) = (undefined1  [16])0x0;
  std::__cxx11::string::_M_replace((ulong)(this + 0x228),0,*(char **)(this + 0x230),0x108fa7);
  std::__cxx11::string::_M_replace((ulong)(this + 0x248),0,*(char **)(this + 0x250),0x108fa7);
  this[0x348] = (VHACD)0x0;
  *(undefined1 (*) [16])(this + 0x2d0) = (undefined1  [16])0x0;
  uVar2 = _LC1;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2c0) = uVar2;
  *(undefined8 *)(this + 0x2a0) = uVar2;
  *(undefined8 *)(this + 0x280) = uVar2;
  return;
}



/* VHACD::VHACD::Release() */

void __thiscall VHACD::VHACD::Release(VHACD *this)

{
  if (*(code **)(*(long *)this + 0x60) == ~VHACD) {
    *(undefined ***)this = &PTR_Cancel_0010f258;
    if (*(VHACD **)(this + 0x248) != this + 600) {
      operator_delete(*(VHACD **)(this + 0x248),*(long *)(this + 600) + 1);
    }
    if (*(VHACD **)(this + 0x228) != this + 0x238) {
      operator_delete(*(VHACD **)(this + 0x228),*(long *)(this + 0x238) + 1);
    }
    if (*(void **)(this + 0x210) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x210));
    }
    operator_delete(this,0x350);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00109221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x60))();
  return;
}



/* void VHACD::Volume::Voxelize<double>(double const*, unsigned int, unsigned int, int const*,
   unsigned int, unsigned int, unsigned long, VHACD::Vec3<double> const&, double const (&) [3][3])
    */

void __thiscall
VHACD::Volume::Voxelize<double>
          (Volume *this,double *param_1,uint param_2,uint param_3,int *param_4,uint param_5,
          uint param_6,ulong param_7,Vec3 *param_8,double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  ulong in_RAX;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_RBX;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  Vec3 *pVVar18;
  ulong in_R10;
  ulong uVar19;
  ulong in_R11;
  ulong unaff_R14;
  long in_FS_OFFSET;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulong local_188;
  ulong local_158;
  ulong local_120;
  int *local_118;
  undefined8 local_d8;
  int local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88 [3];
  Vec3 local_70 [24];
  Vec3 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) goto LAB_0010a993;
  dVar24 = *param_1 - *(double *)param_8;
  dVar32 = param_1[1] - *(double *)(param_8 + 8);
  dVar29 = param_1[2] - *(double *)(param_8 + 0x10);
  dVar20 = param_9[4];
  dVar25 = param_9[5];
  dVar27 = *param_9 * dVar24 + param_9[3] * dVar32 + param_9[6] * dVar29;
  dVar30 = param_9[1];
  dVar21 = param_9[2];
  dVar28 = param_9[7];
  dVar1 = param_9[8];
  *(double *)(this + 0x18) = dVar27;
  *(double *)this = dVar27;
  dVar20 = dVar30 * dVar24 + dVar20 * dVar32 + dVar28 * dVar29;
  dVar25 = dVar24 * dVar21 + dVar32 * dVar25 + dVar29 * dVar1;
  *(double *)(this + 0x20) = dVar20;
  *(double *)(this + 0x28) = dVar25;
  *(double *)(this + 8) = dVar20;
  *(double *)(this + 0x10) = dVar25;
  dVar21 = dVar20;
  dVar28 = dVar27;
  dVar30 = dVar25;
  if (param_3 != 1) {
    uVar17 = 1;
    uVar16 = param_2;
    do {
      dVar20 = param_1[uVar16] - *(double *)param_8;
      dVar30 = param_1[uVar16 + 1] - *(double *)(param_8 + 8);
      dVar25 = param_1[uVar16 + 2] - *(double *)(param_8 + 0x10);
      lVar11 = 0;
      local_88[2] = dVar20 * param_9[2] + dVar30 * param_9[5] + dVar25 * param_9[8];
      local_88[0] = dVar20 * *param_9 + dVar30 * param_9[3] + dVar25 * param_9[6];
      local_88[1] = dVar20 * param_9[1] + dVar30 * param_9[4] + dVar25 * param_9[7];
      do {
        dVar20 = *(double *)((long)local_88 + lVar11);
        if (*(double *)(this + lVar11) <= dVar20) {
          if (*(double *)(this + lVar11 + 0x18) <= dVar20 &&
              dVar20 != *(double *)(this + lVar11 + 0x18)) {
            *(double *)(this + lVar11 + 0x18) = dVar20;
          }
        }
        else {
          *(double *)(this + lVar11) = dVar20;
        }
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0x18);
      uVar17 = uVar17 + 1;
      dVar27 = *(double *)this;
      uVar16 = uVar16 + param_2;
    } while (param_3 != uVar17);
    dVar20 = *(double *)(this + 8);
    dVar25 = *(double *)(this + 0x10);
    dVar21 = *(double *)(this + 0x20);
    dVar28 = *(double *)(this + 0x18);
    dVar30 = *(double *)(this + 0x28);
  }
  dVar1 = _LC58;
  dVar28 = dVar28 - dVar27;
  dVar21 = dVar21 - dVar20;
  dVar30 = dVar30 - dVar25;
  dVar20 = (double)param_7;
  if ((dVar28 < dVar21) || (dVar28 < dVar30)) {
    if ((dVar21 < dVar28) || (dVar21 < dVar30)) {
      dVar25 = (dVar28 * dVar20) / dVar30;
      *(ulong *)(this + 0x48) = param_7;
      if (dVar1 <= dVar25) {
        uVar12 = (long)(dVar25 - dVar1) ^ 0x8000000000000000;
      }
      else {
        uVar12 = (ulong)dVar25;
      }
      *(ulong *)(this + 0x38) = uVar12 + 2;
      dVar20 = (dVar21 * dVar20) / dVar30;
      if (dVar1 <= dVar20) {
        uVar12 = (long)(dVar20 - dVar1) ^ 0x8000000000000000;
      }
      else {
        uVar12 = (ulong)dVar20;
      }
      *(ulong *)(this + 0x40) = uVar12 + 2;
    }
    else {
      dVar25 = (dVar28 * dVar20) / dVar21;
      *(ulong *)(this + 0x40) = param_7;
      if (dVar25 < dVar1) {
        uVar12 = (ulong)dVar25;
      }
      else {
        uVar12 = (long)(dVar25 - dVar1) ^ 0x8000000000000000;
      }
      *(ulong *)(this + 0x38) = uVar12 + 2;
      dVar20 = (dVar20 * dVar30) / dVar21;
      if (dVar1 <= dVar20) {
        uVar12 = (long)(dVar20 - dVar1) ^ 0x8000000000000000;
      }
      else {
        uVar12 = (ulong)dVar20;
      }
      *(ulong *)(this + 0x48) = uVar12 + 2;
      dVar30 = dVar21;
    }
    if (-1 < (long)(param_7 - 1)) goto LAB_0010ace3;
LAB_0010ac08:
    dVar20 = (double)(param_7 - 1);
  }
  else {
    *(ulong *)(this + 0x38) = param_7;
    dVar25 = (dVar21 * dVar20) / dVar28;
    if (dVar1 <= dVar25) {
      uVar12 = (long)(dVar25 - dVar1) ^ 0x8000000000000000;
    }
    else {
      uVar12 = (ulong)dVar25;
    }
    *(ulong *)(this + 0x40) = uVar12 + 2;
    dVar20 = (dVar20 * dVar30) / dVar28;
    if (dVar1 <= dVar20) {
      uVar12 = (long)(dVar20 - dVar1) ^ 0x8000000000000000;
    }
    else {
      uVar12 = (ulong)dVar20;
    }
    *(ulong *)(this + 0x48) = uVar12 + 2;
    dVar30 = dVar28;
    if ((long)(param_7 - 1) < 0) goto LAB_0010ac08;
LAB_0010ace3:
    dVar20 = (double)(long)(param_7 - 1);
  }
  dVar25 = dVar20 / dVar30;
  *(double *)(this + 0x30) = dVar30 / dVar20;
  ::VHACD::Volume::Allocate();
  local_98 = _LC26;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  local_a8 = _LC26;
  *(undefined8 *)(this + 0x60) = 0;
  dStack_a0 = local_a8;
  if (param_6 != 0) {
    uVar14 = *(ulong *)(this + 0x38);
    uVar12 = *(ulong *)(this + 0x40);
    local_120 = 0;
    local_188 = in_R10;
    local_118 = param_4;
LAB_0010adec:
    dVar20 = *(double *)(this + 0x10);
    dVar32 = *(double *)this;
    dVar2 = *(double *)(this + 8);
    local_d8 = *(undefined8 *)local_118;
    local_d0 = local_118[2];
    dVar30 = *(double *)param_8;
    dVar21 = *(double *)(param_8 + 8);
    lVar11 = 0;
    dVar28 = *(double *)(param_8 + 0x10);
    dVar3 = *param_9;
    dVar4 = param_9[1];
    dVar5 = param_9[3];
    dVar6 = param_9[4];
    dVar7 = param_9[6];
    dVar8 = param_9[7];
    dVar27 = param_9[2];
    dVar24 = param_9[5];
    dVar29 = param_9[8];
    pVVar18 = (Vec3 *)local_88;
    do {
      while( true ) {
        uVar16 = param_2 * *(int *)((long)&local_d8 + lVar11 * 4);
        dVar33 = param_1[uVar16] - dVar30;
        dVar22 = param_1[uVar16 + 1] - dVar21;
        dVar31 = param_1[uVar16 + 2] - dVar28;
        dVar23 = ((dVar22 * dVar24 + dVar33 * dVar27 + dVar31 * dVar29) - dVar20) * dVar25;
        dVar26 = ((dVar33 * dVar3 + dVar22 * dVar5 + dVar31 * dVar7) - dVar32) * dVar25;
        dVar22 = ((dVar33 * dVar4 + dVar22 * dVar6 + dVar31 * dVar8) - dVar2) * dVar25;
        *(double *)(pVVar18 + 0x10) = dVar23;
        dVar31 = _LC26 + dVar26;
        *(double *)pVVar18 = dVar26;
        *(double *)(pVVar18 + 8) = dVar22;
        if (dVar1 <= dVar31) {
          uVar19 = (long)(dVar31 - dVar1) ^ 0x8000000000000000;
        }
        else {
          uVar19 = (ulong)dVar31;
        }
        dVar22 = dVar22 + _LC26;
        if (dVar1 <= dVar22) {
          uVar15 = (long)(dVar22 - dVar1) ^ 0x8000000000000000;
        }
        else {
          uVar15 = (ulong)dVar22;
        }
        dVar23 = dVar23 + _LC26;
        if (dVar1 <= dVar23) break;
        uVar13 = (ulong)dVar23;
        if (lVar11 != 0) goto LAB_0010af5a;
LAB_0010b01f:
        in_RAX = uVar13;
        pVVar18 = pVVar18 + 0x18;
        lVar11 = 1;
        unaff_RBX = uVar15;
        local_158 = uVar15;
        in_R11 = uVar19;
        unaff_R14 = uVar19;
        local_188 = in_RAX;
      }
      uVar13 = (long)(dVar23 - dVar1) ^ 0x8000000000000000;
      if (lVar11 == 0) goto LAB_0010b01f;
LAB_0010af5a:
      if (uVar19 < in_R11) {
        in_R11 = uVar19;
      }
      if (uVar15 < unaff_RBX) {
        unaff_RBX = uVar15;
      }
      if (uVar13 < in_RAX) {
        in_RAX = uVar13;
      }
      if (unaff_R14 < uVar19) {
        unaff_R14 = uVar19;
      }
      if (local_158 < uVar15) {
        local_158 = uVar15;
      }
      if (uVar13 <= local_188) {
        uVar13 = local_188;
      }
      if (lVar11 == 2) goto LAB_0010b077;
      pVVar18 = pVVar18 + 0x18;
      lVar11 = 2;
      local_188 = uVar13;
    } while( true );
  }
  uVar12 = *(ulong *)(this + 0x40);
  uVar14 = *(ulong *)(this + 0x38);
LAB_0010b2b9:
  ::VHACD::Volume::FillOutsideSurface((ulong)this,0,0,0,uVar14,uVar12);
  ::VHACD::Volume::FillOutsideSurface
            ((ulong)this,0,0,*(long *)(this + 0x48) - 1,*(ulong *)(this + 0x38),
             *(ulong *)(this + 0x40));
  ::VHACD::Volume::FillOutsideSurface((ulong)this,0,0,0,*(ulong *)(this + 0x38),1);
  ::VHACD::Volume::FillOutsideSurface
            ((ulong)this,0,*(ulong *)(this + 0x40) - 1,0,*(ulong *)(this + 0x38),
             *(ulong *)(this + 0x40));
  ::VHACD::Volume::FillOutsideSurface((ulong)this,0,0,0,1,*(ulong *)(this + 0x40));
  ::VHACD::Volume::FillOutsideSurface
            ((ulong)this,*(ulong *)(this + 0x38) - 1,0,0,*(ulong *)(this + 0x38),
             *(ulong *)(this + 0x40));
  ::VHACD::Volume::FillInsideSurface();
LAB_0010a993:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010b077:
  in_R11 = (in_R11 - 1) + (ulong)(in_R11 == 0);
  unaff_RBX = (unaff_RBX - 1) + (ulong)(unaff_RBX == 0);
  in_RAX = (in_RAX - 1) + (ulong)(in_RAX == 0);
  unaff_R14 = unaff_R14 + (unaff_R14 < uVar14);
  local_158 = local_158 + (local_158 < uVar12);
  local_188 = uVar13 + (uVar13 < *(ulong *)(this + 0x48));
  if (in_R11 < unaff_R14) {
    uVar12 = in_R11;
    do {
      local_c8 = (double)uVar12;
      uVar14 = unaff_RBX;
      if (unaff_RBX < local_158) {
        do {
          local_c0 = (double)uVar14;
          if (in_RAX < local_188) {
            uVar19 = in_RAX;
            do {
              while( true ) {
                local_b8 = (double)uVar19;
                iVar9 = ::VHACD::TriBoxOverlap
                                  ((Vec3 *)&local_c8,(Vec3 *)&local_a8,(Vec3 *)local_88,local_70,
                                   local_58);
                if ((iVar9 == 1) &&
                   (pcVar10 = (char *)((*(long *)(this + 0x40) * uVar19 + uVar14) *
                                       *(long *)(this + 0x38) + uVar12 + *(long *)(this + 0x68)),
                   *pcVar10 == '\0')) break;
                uVar19 = uVar19 + 1;
                if (local_188 == uVar19) goto LAB_0010b235;
              }
              *pcVar10 = '\x03';
              uVar19 = uVar19 + 1;
              *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
            } while (local_188 != uVar19);
          }
LAB_0010b235:
          uVar14 = uVar14 + 1;
        } while (local_158 != uVar14);
      }
      uVar12 = uVar12 + 1;
    } while (unaff_R14 != uVar12);
    uVar12 = *(ulong *)(this + 0x40);
    uVar14 = *(ulong *)(this + 0x38);
  }
  local_120 = local_120 + 1;
  local_118 = local_118 + param_5;
  if (local_120 == param_6) goto LAB_0010b2b9;
  goto LAB_0010adec;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void VHACD::VHACD::AlignMesh<double>(double const*, unsigned int, unsigned int, int const*,
   unsigned int, unsigned int, VHACD::IVHACD::Parameters const&) */

void __thiscall
VHACD::VHACD::AlignMesh<double>
          (VHACD *this,double *param_1,uint param_2,uint param_3,int *param_4,uint param_5,
          uint param_6,Parameters *param_7)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  pointer_____offset_0x18___ puVar5;
  pointer_____offset_0x10___ puVar6;
  streambuf *psVar7;
  ostream *poVar8;
  long in_FS_OFFSET;
  double dVar9;
  undefined1 *local_248;
  undefined8 local_240;
  undefined1 local_238;
  undefined7 uStack_237;
  undefined1 *local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined7 uStack_217;
  pointer_____offset_0x10___ local_1b8;
  pointer_____offset_0x10___ puStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  char *local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0x348] == (VHACD)0x0) && (*(int *)(param_7 + 0x40) != 0)) {
    clock_gettime(0,(timespec *)(this + 0x2e8));
    std::__cxx11::string::_M_replace((ulong)(this + 0x228),0,*(char **)(this + 0x230),0x10b43d);
    std::__cxx11::string::_M_replace((ulong)(this + 0x248),0,*(char **)(this + 0x250),0x10b448);
    std::ios_base::ios_base((ios_base *)local_148);
    local_68 = 0;
    local_60 = (undefined1  [16])0x0;
    local_50 = (undefined1  [16])0x0;
    local_1b8 = _init;
    psVar7 = (streambuf *)((ostream *)&local_1b8 + *(long *)(_init + -0x18));
    local_148[0] = std::ios::init;
    local_70 = 0;
    *(undefined8 *)psVar7 = _locale;
    std::ios::init(psVar7);
    local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
    local_1b8 = PTR_vtable_0010f408;
    puStack_1b0 = PTR_vtable_0010f400;
    local_1a8 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    std::locale::locale(local_178);
    puStack_1b0 = std::ios_base::ios_base;
    local_170 = 0x10;
    local_160 = (char *)0x0;
    local_158 = 0;
    local_168 = &local_158;
    std::ios::init((streambuf *)local_148);
    if (*(long *)(param_7 + 0x28) != 0) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"+ ",2);
      poVar8 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&local_1b8,*(char **)(this + 0x228),*(long *)(this + 0x230));
      plVar1 = *(long **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
      if (plVar1 == (long *)0x0) goto LAB_0010bf53;
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))();
        }
      }
      std::ostream::put((char)poVar8);
      std::ostream::flush();
      plVar1 = *(long **)(param_7 + 0x28);
      pcVar2 = *(code **)(*plVar1 + 0x10);
      local_220 = 0;
      local_218 = 0;
      local_228 = &local_218;
      if (local_188._0_8_ == 0) {
        std::__cxx11::string::_M_assign((string *)&local_228);
      }
      else {
        std::__cxx11::string::_M_replace((ulong)&local_228,0,(char *)0x0,local_198._8_8_);
      }
      (*pcVar2)(plVar1,local_228);
      if (local_228 != &local_218) {
        operator_delete(local_228,CONCAT71(uStack_217,local_218) + 1);
      }
    }
    plVar1 = *(long **)(param_7 + 0x20);
    *(undefined1 (*) [16])(this + 0x270) = (undefined1  [16])0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))
                (*(undefined8 *)(this + 0x268),0,plVar1,*(undefined8 *)(this + 0x228),
                 *(undefined8 *)(this + 0x248));
    }
    puVar6 = PTR_vtable_0010f410;
    puVar5 = PTR_vtable_0010f408;
    if (this[0x348] == (VHACD)0x0) {
      dVar9 = pow((double)*(uint *)(param_7 + 0x30),_LC62);
      dVar9 = dVar9 + _LC26;
      if (_LC58 <= dVar9) {
        *(long *)(this + 0x308) = (long)(dVar9 - _LC58);
        *(ulong *)(this + 0x308) = *(ulong *)(this + 0x308) ^ 0x8000000000000000;
      }
      else {
        *(long *)(this + 0x308) = (long)dVar9;
      }
      ::VHACD::Volume::Volume((Volume *)&local_228);
      Volume::Voxelize<double>
                ((Volume *)&local_228,param_1,param_2,param_3,param_4,param_5,param_6,
                 *(ulong *)(this + 0x308),(Vec3 *)(this + 0x2d0),(double *)(this + 0x280));
      uVar3 = _UNK_0010f3c8;
      plVar1 = *(long **)(param_7 + 0x20);
      *(undefined8 *)(this + 0x270) = _LC64;
      *(undefined8 *)(this + 0x278) = uVar3;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))
                  (*(undefined8 *)(this + 0x268),_LC64,_LC17,plVar1,*(undefined8 *)(this + 0x228),
                   *(undefined8 *)(this + 0x248));
      }
      if (*(long *)(param_7 + 0x28) != 0) {
        local_238 = 0;
        local_240 = 0;
        local_248 = &local_238;
        std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)&local_238);
        std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
        if (local_248 != &local_238) {
          operator_delete(local_248,CONCAT71(uStack_237,local_238) + 1);
        }
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"\t dim = ",8);
        poVar8 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1b8);
        std::__ostream_insert<char,std::char_traits<char>>(poVar8,"\t-> ",4);
        poVar8 = std::ostream::_M_insert<unsigned_long>((ulong)poVar8);
        std::__ostream_insert<char,std::char_traits<char>>(poVar8," voxels",7);
        plVar1 = *(long **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
        if (plVar1 == (long *)0x0) goto LAB_0010bf53;
        if ((char)plVar1[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar1 + 0x30))(plVar1);
          }
        }
        std::ostream::put((char)poVar8);
        std::ostream::flush();
        plVar1 = *(long **)(param_7 + 0x28);
        pcVar2 = *(code **)(*plVar1 + 0x10);
        local_240 = 0;
        local_238 = 0;
        if (local_188._0_8_ == 0) {
          local_248 = &local_238;
          std::__cxx11::string::_M_assign((string *)&local_248);
        }
        else {
          local_248 = &local_238;
          std::__cxx11::string::_M_replace((ulong)&local_248,0,(char *)0x0,local_198._8_8_);
        }
        (*pcVar2)(plVar1);
        if (local_248 != &local_238) {
          operator_delete(local_248,CONCAT71(uStack_237,local_238) + 1);
        }
      }
      if (this[0x348] == (VHACD)0x0) {
        std::__cxx11::string::_M_replace((ulong)(this + 0x248),0,*(char **)(this + 0x250),0x10b46b);
        plVar1 = *(long **)(param_7 + 0x20);
        *(undefined8 *)(this + 0x270) = _LC69;
        *(undefined8 *)(this + 0x278) = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x10))
                    (*(undefined8 *)(this + 0x268),_LC64,0,plVar1,*(undefined8 *)(this + 0x228),
                     *(undefined8 *)(this + 0x248));
        }
        ::VHACD::Volume::AlignToPrincipalAxes((double *)&local_228);
        uVar4 = _UNK_0010f3e8;
        uVar3 = _LC17;
        plVar1 = *(long **)(param_7 + 0x20);
        *(undefined8 *)(this + 0x268) = __LC70;
        *(undefined8 *)(this + 0x270) = uVar4;
        *(undefined8 *)(this + 0x278) = uVar3;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x10))
                    (_LC1,uVar3,uVar3,plVar1,*(undefined8 *)(this + 0x228),
                     *(undefined8 *)(this + 0x248));
        }
        clock_gettime(0,(timespec *)(this + 0x2f8));
        if (*(long *)(param_7 + 0x28) != 0) {
          local_238 = 0;
          local_240 = 0;
          local_248 = &local_238;
          std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)&local_238);
          std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
          if (local_248 != &local_238) {
            operator_delete(local_248,CONCAT71(uStack_237,local_238) + 1);
          }
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"\t time ",7);
          poVar8 = std::ostream::_M_insert<double>
                             ((((double)(*(long *)(this + 0x300) - *(long *)(this + 0x2f0)) * __LC20
                               + (double)(*(long *)(this + 0x2f8) - *(long *)(this + 0x2e8))) *
                              _LC21) / _LC21);
          std::__ostream_insert<char,std::char_traits<char>>(poVar8,"s",1);
          plVar1 = *(long **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
          if (plVar1 == (long *)0x0) {
LAB_0010bf53:
            std::__throw_bad_cast();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar1 + 0x30))(plVar1);
            }
          }
          std::ostream::put((char)poVar8);
          std::ostream::flush();
          plVar1 = *(long **)(param_7 + 0x28);
          pcVar2 = *(code **)(*plVar1 + 0x10);
          local_240 = 0;
          local_238 = 0;
          if (local_188._0_8_ == 0) {
            local_248 = &local_238;
            std::__cxx11::string::_M_assign((string *)&local_248);
          }
          else {
            local_248 = &local_238;
            std::__cxx11::string::_M_replace((ulong)&local_248,0,(char *)0x0,local_198._8_8_);
          }
          (*pcVar2)(plVar1,local_248);
          if (local_248 != &local_238) {
            operator_delete(local_248,CONCAT71(uStack_237,local_238) + 1);
          }
        }
        ::VHACD::Volume::~Volume((Volume *)&local_228);
      }
      else {
        ::VHACD::Volume::~Volume((Volume *)&local_228);
      }
    }
    local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
    local_1b8 = puVar5;
    if (local_168 != &local_158) {
      puStack_1b0 = puVar6;
      local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
      operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
    }
    puStack_1b0 = std::ios_base::~ios_base;
    std::locale::~locale(local_178);
    local_1b8 = _init;
    *(undefined8 *)((long)&local_1b8 + *(long *)(_init + -0x18)) = _locale;
    local_148[0] = std::ios::init;
    std::ios_base::~ios_base((ios_base *)local_148);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void VHACD::VHACD::VoxelizeMesh<double>(double const*, unsigned int, unsigned int, int const*,
   unsigned int, unsigned int, VHACD::IVHACD::Parameters const&) */

void __thiscall
VHACD::VHACD::VoxelizeMesh<double>
          (VHACD *this,double *param_1,uint param_2,uint param_3,int *param_4,uint param_5,
          uint param_6,Parameters *param_7)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ostream *poVar7;
  Volume *pVVar8;
  ulong uVar9;
  ulong uVar10;
  streambuf *psVar11;
  VHACD *__dest;
  int iVar12;
  long in_FS_OFFSET;
  double dVar13;
  VHACD *local_1d8;
  size_t local_1d0;
  ulong local_1c8 [2];
  pointer_____offset_0x18___ local_1b8;
  pointer_____offset_0x10___ puStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  char *local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x348] == (VHACD)0x0) {
    clock_gettime(0,(timespec *)(this + 0x2e8));
    std::__cxx11::string::_M_replace((ulong)(this + 0x228),0,*(char **)(this + 0x230),0x10b448);
    std::ios_base::ios_base((ios_base *)local_148);
    local_148[0] = std::ios::init;
    local_68 = 0;
    local_60 = (undefined1  [16])0x0;
    local_50 = (undefined1  [16])0x0;
    local_1b8 = _init;
    local_70 = 0;
    psVar11 = (streambuf *)((ostream *)&local_1b8 + *(long *)(_init + -0x18));
    *(undefined8 *)psVar11 = _locale;
    std::ios::init(psVar11);
    local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
    local_1b8 = PTR_vtable_0010f408;
    puStack_1b0 = PTR_vtable_0010f400;
    local_1a8 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    std::locale::locale(local_178);
    local_170 = 0x10;
    puStack_1b0 = std::ios_base::ios_base;
    local_158 = 0;
    local_160 = (char *)0x0;
    local_168 = &local_158;
    std::ios::init((streambuf *)local_148);
    if (*(long *)(param_7 + 0x28) != 0) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"+ ",2);
      poVar7 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&local_1b8,*(char **)(this + 0x228),*(long *)(this + 0x230));
      plVar2 = *(long **)(poVar7 + *(long *)(*(long *)poVar7 + -0x18) + 0xf0);
      if (plVar2 != (long *)0x0) {
        if ((char)plVar2[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar2 + 0x30))(plVar2);
          }
        }
        std::ostream::put((char)poVar7);
        std::ostream::flush();
        plVar2 = *(long **)(param_7 + 0x28);
        pcVar3 = *(code **)(*plVar2 + 0x10);
        local_1d0 = 0;
        local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
        local_1d8 = (VHACD *)local_1c8;
        if (local_188._0_8_ == 0) {
          std::__cxx11::string::_M_assign((string *)&local_1d8);
        }
        else {
          std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
        }
        (*pcVar3)(plVar2,local_1d8);
        if (local_1d8 != (VHACD *)local_1c8) {
          operator_delete(local_1d8,local_1c8[0] + 1);
        }
        goto LAB_0010c257;
      }
LAB_0010cd96:
      std::__throw_bad_cast();
      goto LAB_0010cd9b;
    }
LAB_0010c257:
    pVVar8 = *(Volume **)(this + 0x310);
    if (pVVar8 != (Volume *)0x0) {
      ::VHACD::Volume::~Volume(pVVar8);
      operator_delete(pVVar8,0x70);
    }
    dVar13 = _LC17;
    *(undefined8 *)(this + 0x310) = 0;
    dVar4 = _LC17;
    if (this[0x348] == (VHACD)0x0) {
      iVar12 = 1;
      do {
        local_1d8 = (VHACD *)local_1c8;
        std::__cxx11::string::_M_construct<char_const*>((string *)&local_1d8);
        std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)local_1d8);
        std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
        if (local_1d8 != (VHACD *)local_1c8) {
          operator_delete(local_1d8,local_1c8[0] + 1);
        }
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"Iteration ",10);
        std::ostream::operator<<((ostream *)&local_1b8,iVar12);
        local_1d0 = 0;
        local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
        if (local_188._0_8_ == 0) {
          local_1d8 = (VHACD *)local_1c8;
          std::__cxx11::string::_M_assign((string *)&local_1d8);
        }
        else {
          local_1d8 = (VHACD *)local_1c8;
          std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
        }
        __dest = *(VHACD **)(this + 0x248);
        if (__dest == this + 600) {
          if (local_1d8 == (VHACD *)local_1c8) goto LAB_0010cc58;
          *(VHACD **)(this + 0x248) = local_1d8;
          *(size_t *)(this + 0x250) = local_1d0;
          *(ulong *)(this + 600) = local_1c8[0];
          local_1d8 = (VHACD *)local_1c8;
        }
        else if (local_1d8 == (VHACD *)local_1c8) {
LAB_0010cc58:
          if (local_1d0 != 0) {
            if (local_1d0 == 1) {
              *__dest = local_1c8[0]._0_1_;
              __dest = *(VHACD **)(this + 0x248);
            }
            else {
              memcpy(__dest,(VHACD *)local_1c8,local_1d0);
              __dest = *(VHACD **)(this + 0x248);
            }
          }
          *(size_t *)(this + 0x250) = local_1d0;
          __dest[local_1d0] = (VHACD)0x0;
        }
        else {
          uVar10 = *(ulong *)(this + 600);
          *(VHACD **)(this + 0x248) = local_1d8;
          *(size_t *)(this + 0x250) = local_1d0;
          *(ulong *)(this + 600) = local_1c8[0];
          local_1d8 = (VHACD *)local_1c8;
          if (__dest != (VHACD *)0x0) {
            local_1d8 = __dest;
            local_1c8[0] = uVar10;
          }
        }
        local_1d0 = 0;
        *local_1d8 = (VHACD)0x0;
        if (local_1d8 != (VHACD *)local_1c8) {
          operator_delete(local_1d8,local_1c8[0] + 1);
        }
        plVar2 = *(long **)(param_7 + 0x20);
        *(undefined8 *)(this + 0x278) = 0;
        dVar13 = ((double)iVar12 * dVar4) / __LC72;
        *(double *)(this + 0x270) = dVar13;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x10))
                    (*(undefined8 *)(this + 0x268),dVar13,0,plVar2,*(undefined8 *)(this + 0x228),
                     *(undefined8 *)(this + 0x248));
        }
        pVVar8 = (Volume *)operator_new(0x70);
        ::VHACD::Volume::Volume(pVVar8);
        *(Volume **)(this + 0x310) = pVVar8;
        Volume::Voxelize<double>
                  (pVVar8,param_1,param_2,param_3,param_4,param_5,param_6,*(ulong *)(this + 0x308),
                   (Vec3 *)(this + 0x2d0),(double *)(this + 0x280));
        plVar2 = *(long **)(param_7 + 0x20);
        *(double *)(this + 0x270) = dVar13;
        *(double *)(this + 0x278) = dVar4;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x10))
                    (*(undefined8 *)(this + 0x268),plVar2,*(undefined8 *)(this + 0x228),
                     *(undefined8 *)(this + 0x248));
        }
        uVar10 = *(long *)(*(long *)(this + 0x310) + 0x50) +
                 *(long *)(*(long *)(this + 0x310) + 0x58);
        if (*(long *)(param_7 + 0x28) != 0) {
          local_1d0 = 0;
          local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
          local_1d8 = (VHACD *)local_1c8;
          std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)local_1c8);
          std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
          if (local_1d8 != (VHACD *)local_1c8) {
            operator_delete(local_1d8,local_1c8[0] + 1);
          }
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"\t dim = ",8);
          poVar7 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1b8);
          std::__ostream_insert<char,std::char_traits<char>>(poVar7,"\t-> ",4);
          poVar7 = std::ostream::_M_insert<unsigned_long>((ulong)poVar7);
          std::__ostream_insert<char,std::char_traits<char>>(poVar7," voxels",7);
          plVar2 = *(long **)(poVar7 + *(long *)(*(long *)poVar7 + -0x18) + 0xf0);
          if (plVar2 == (long *)0x0) goto LAB_0010cd96;
          if ((char)plVar2[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar2 + 0x30))();
            }
          }
          std::ostream::put((char)poVar7);
          std::ostream::flush();
          plVar2 = *(long **)(param_7 + 0x28);
          pcVar3 = *(code **)(*plVar2 + 0x10);
          local_1d0 = 0;
          local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
          if (local_188._0_8_ == 0) {
            local_1d8 = (VHACD *)local_1c8;
            std::__cxx11::string::_M_assign((string *)&local_1d8);
          }
          else {
            local_1d8 = (VHACD *)local_1c8;
            std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
          }
          (*pcVar3)(plVar2,local_1d8);
          if (local_1d8 != (VHACD *)local_1c8) {
            operator_delete(local_1d8,local_1c8[0] + 1);
          }
        }
        uVar1 = *(uint *)(param_7 + 0x30);
        dVar13 = pow((double)uVar1 / (double)uVar10,_LC71);
        dVar13 = (double)*(ulong *)(this + 0x308) * dVar13 + _LC26;
        if (_LC58 <= dVar13) {
          uVar9 = (long)(dVar13 - _LC58) ^ 0x8000000000000000;
        }
        else {
          uVar9 = (ulong)dVar13;
        }
        dVar13 = dVar4;
        if ((((uVar1 <= uVar10) || (iVar12 == 5)) ||
            (pVVar8 = *(Volume **)(this + 0x310), (ulong)(uVar1 >> 3) <= *(ulong *)(pVVar8 + 0x50)))
           || (*(ulong *)(this + 0x308) == uVar9)) break;
        iVar12 = iVar12 + 1;
        ::VHACD::Volume::~Volume(pVVar8);
        operator_delete(pVVar8,0x70);
        *(undefined8 *)(this + 0x310) = 0;
        *(ulong *)(this + 0x308) = uVar9;
      } while (this[0x348] == (VHACD)0x0);
    }
    uVar6 = _UNK_0010f3f8;
    uVar5 = _LC74;
    plVar2 = *(long **)(param_7 + 0x20);
    *(double *)(this + 0x278) = dVar13;
    *(undefined8 *)(this + 0x268) = uVar5;
    *(undefined8 *)(this + 0x270) = uVar6;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))
                (_LC74,dVar13,plVar2,*(undefined8 *)(this + 0x228),*(undefined8 *)(this + 0x248));
    }
    clock_gettime(0,(timespec *)(this + 0x2f8));
    if (*(long *)(param_7 + 0x28) != 0) {
      local_1d0 = 0;
      local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
      local_1d8 = (VHACD *)local_1c8;
      std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)local_1c8);
      std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
      if (local_1d8 != (VHACD *)local_1c8) {
        operator_delete(local_1d8,local_1c8[0] + 1);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"\t time ",7);
      poVar7 = std::ostream::_M_insert<double>
                         ((((double)(*(long *)(this + 0x300) - *(long *)(this + 0x2f0)) * __LC20 +
                           (double)(*(long *)(this + 0x2f8) - *(long *)(this + 0x2e8))) * _LC21) /
                          _LC21);
      std::__ostream_insert<char,std::char_traits<char>>(poVar7,"s",1);
      plVar2 = *(long **)(poVar7 + *(long *)(*(long *)poVar7 + -0x18) + 0xf0);
      if (plVar2 == (long *)0x0) goto LAB_0010cd96;
      if ((char)plVar2[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar2 + 0x30))(plVar2);
        }
      }
      std::ostream::put((char)poVar7);
      std::ostream::flush();
      plVar2 = *(long **)(param_7 + 0x28);
      pcVar3 = *(code **)(*plVar2 + 0x10);
      local_1d0 = 0;
      local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
      if (local_188._0_8_ == 0) {
        local_1d8 = (VHACD *)local_1c8;
        std::__cxx11::string::_M_assign((string *)&local_1d8);
      }
      else {
        local_1d8 = (VHACD *)local_1c8;
        std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
      }
      (*pcVar3)(plVar2,local_1d8);
      if (local_1d8 != (VHACD *)local_1c8) {
        operator_delete(local_1d8,local_1c8[0] + 1);
      }
    }
    local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
    local_1b8 = PTR_vtable_0010f408;
    puStack_1b0 = PTR_vtable_0010f410;
    if (local_168 != &local_158) {
      operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
    }
    puStack_1b0 = std::ios_base::~ios_base;
    std::locale::~locale(local_178);
    local_1b8 = _init;
    *(undefined8 *)((long)&local_1b8 + *(long *)(_init + -0x18)) = _locale;
    local_148[0] = std::ios::init;
    std::ios_base::~ios_base((ios_base *)local_148);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010cd9b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void VHACD::Volume::Voxelize<float>(float const*, unsigned int, unsigned int, int const*,
   unsigned int, unsigned int, unsigned long, VHACD::Vec3<double> const&, double const (&) [3][3])
    */

void __thiscall
VHACD::Volume::Voxelize<float>
          (Volume *this,float *param_1,uint param_2,uint param_3,int *param_4,uint param_5,
          uint param_6,ulong param_7,Vec3 *param_8,double *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  ulong in_RAX;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_RBX;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  Vec3 *pVVar18;
  ulong in_R10;
  ulong uVar19;
  ulong in_R11;
  ulong unaff_R13;
  long in_FS_OFFSET;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulong local_188;
  ulong local_158;
  ulong local_120;
  int *local_118;
  undefined8 local_d8;
  int local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88 [3];
  Vec3 local_70 [24];
  Vec3 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) goto LAB_0010ce03;
  dVar23 = (double)*param_1 - *(double *)param_8;
  dVar31 = (double)param_1[1] - *(double *)(param_8 + 8);
  dVar28 = (double)param_1[2] - *(double *)(param_8 + 0x10);
  dVar20 = param_9[4];
  dVar24 = param_9[5];
  dVar26 = *param_9 * dVar23 + param_9[3] * dVar31 + param_9[6] * dVar28;
  dVar29 = param_9[1];
  dVar27 = param_9[2];
  dVar32 = param_9[7];
  dVar1 = param_9[8];
  *(double *)(this + 0x18) = dVar26;
  *(double *)this = dVar26;
  dVar20 = dVar29 * dVar23 + dVar20 * dVar31 + dVar32 * dVar28;
  dVar24 = dVar23 * dVar27 + dVar31 * dVar24 + dVar28 * dVar1;
  *(double *)(this + 0x20) = dVar20;
  *(double *)(this + 0x28) = dVar24;
  *(double *)(this + 8) = dVar20;
  *(double *)(this + 0x10) = dVar24;
  dVar29 = dVar20;
  dVar27 = dVar26;
  dVar32 = dVar24;
  if (param_3 != 1) {
    uVar17 = 1;
    uVar16 = param_2;
    do {
      dVar20 = (double)param_1[uVar16] - *(double *)param_8;
      dVar29 = (double)param_1[uVar16 + 1] - *(double *)(param_8 + 8);
      dVar24 = (double)param_1[uVar16 + 2] - *(double *)(param_8 + 0x10);
      lVar11 = 0;
      local_88[2] = dVar20 * param_9[2] + dVar29 * param_9[5] + dVar24 * param_9[8];
      local_88[0] = dVar20 * *param_9 + dVar29 * param_9[3] + dVar24 * param_9[6];
      local_88[1] = dVar20 * param_9[1] + dVar29 * param_9[4] + dVar24 * param_9[7];
      do {
        dVar20 = *(double *)((long)local_88 + lVar11);
        if (*(double *)(this + lVar11) <= dVar20) {
          if (*(double *)(this + lVar11 + 0x18) <= dVar20 &&
              dVar20 != *(double *)(this + lVar11 + 0x18)) {
            *(double *)(this + lVar11 + 0x18) = dVar20;
          }
        }
        else {
          *(double *)(this + lVar11) = dVar20;
        }
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0x18);
      uVar17 = uVar17 + 1;
      dVar26 = *(double *)this;
      uVar16 = uVar16 + param_2;
    } while (param_3 != uVar17);
    dVar20 = *(double *)(this + 8);
    dVar24 = *(double *)(this + 0x10);
    dVar29 = *(double *)(this + 0x20);
    dVar27 = *(double *)(this + 0x18);
    dVar32 = *(double *)(this + 0x28);
  }
  dVar1 = _LC58;
  dVar27 = dVar27 - dVar26;
  dVar29 = dVar29 - dVar20;
  dVar32 = dVar32 - dVar24;
  dVar20 = (double)param_7;
  if ((dVar27 < dVar29) || (dVar27 < dVar32)) {
    if ((dVar29 < dVar27) || (dVar29 < dVar32)) {
      dVar24 = (dVar27 * dVar20) / dVar32;
      *(ulong *)(this + 0x48) = param_7;
      if (dVar1 <= dVar24) {
        uVar12 = (long)(dVar24 - dVar1) ^ 0x8000000000000000;
      }
      else {
        uVar12 = (ulong)dVar24;
      }
      *(ulong *)(this + 0x38) = uVar12 + 2;
      dVar20 = (dVar29 * dVar20) / dVar32;
      if (dVar1 <= dVar20) {
        uVar12 = (long)(dVar20 - dVar1) ^ 0x8000000000000000;
      }
      else {
        uVar12 = (ulong)dVar20;
      }
      *(ulong *)(this + 0x40) = uVar12 + 2;
    }
    else {
      dVar24 = (dVar27 * dVar20) / dVar29;
      *(ulong *)(this + 0x40) = param_7;
      if (dVar24 < dVar1) {
        uVar12 = (ulong)dVar24;
      }
      else {
        uVar12 = (long)(dVar24 - dVar1) ^ 0x8000000000000000;
      }
      *(ulong *)(this + 0x38) = uVar12 + 2;
      dVar20 = (dVar20 * dVar32) / dVar29;
      if (dVar1 <= dVar20) {
        uVar12 = (long)(dVar20 - dVar1) ^ 0x8000000000000000;
      }
      else {
        uVar12 = (ulong)dVar20;
      }
      *(ulong *)(this + 0x48) = uVar12 + 2;
      dVar32 = dVar29;
    }
    if (-1 < (long)(param_7 - 1)) goto LAB_0010d167;
LAB_0010d08c:
    dVar20 = (double)(param_7 - 1);
  }
  else {
    *(ulong *)(this + 0x38) = param_7;
    dVar24 = (dVar29 * dVar20) / dVar27;
    if (dVar1 <= dVar24) {
      uVar12 = (long)(dVar24 - dVar1) ^ 0x8000000000000000;
    }
    else {
      uVar12 = (ulong)dVar24;
    }
    *(ulong *)(this + 0x40) = uVar12 + 2;
    dVar20 = (dVar20 * dVar32) / dVar27;
    if (dVar1 <= dVar20) {
      uVar12 = (long)(dVar20 - dVar1) ^ 0x8000000000000000;
    }
    else {
      uVar12 = (ulong)dVar20;
    }
    *(ulong *)(this + 0x48) = uVar12 + 2;
    dVar32 = dVar27;
    if ((long)(param_7 - 1) < 0) goto LAB_0010d08c;
LAB_0010d167:
    dVar20 = (double)(long)(param_7 - 1);
  }
  dVar24 = dVar20 / dVar32;
  *(double *)(this + 0x30) = dVar32 / dVar20;
  ::VHACD::Volume::Allocate();
  local_98 = _LC26;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  local_a8 = _LC26;
  *(undefined8 *)(this + 0x60) = 0;
  dStack_a0 = local_a8;
  if (param_6 != 0) {
    uVar14 = *(ulong *)(this + 0x38);
    uVar12 = *(ulong *)(this + 0x40);
    local_120 = 0;
    local_188 = in_R10;
    local_118 = param_4;
LAB_0010d273:
    dVar20 = *(double *)(this + 0x10);
    dVar31 = *(double *)this;
    dVar2 = *(double *)(this + 8);
    local_d8 = *(undefined8 *)local_118;
    local_d0 = local_118[2];
    dVar29 = *(double *)param_8;
    dVar27 = *(double *)(param_8 + 8);
    lVar11 = 0;
    dVar32 = *(double *)(param_8 + 0x10);
    dVar3 = *param_9;
    dVar4 = param_9[1];
    dVar5 = param_9[3];
    dVar6 = param_9[4];
    dVar7 = param_9[6];
    dVar8 = param_9[7];
    dVar26 = param_9[2];
    dVar23 = param_9[5];
    dVar28 = param_9[8];
    pVVar18 = (Vec3 *)local_88;
    do {
      while( true ) {
        uVar16 = param_2 * *(int *)((long)&local_d8 + lVar11 * 4);
        dVar33 = (double)param_1[uVar16] - dVar29;
        dVar21 = (double)param_1[uVar16 + 1] - dVar27;
        dVar30 = (double)param_1[uVar16 + 2] - dVar32;
        dVar22 = ((dVar21 * dVar23 + dVar33 * dVar26 + dVar30 * dVar28) - dVar20) * dVar24;
        dVar25 = ((dVar33 * dVar3 + dVar21 * dVar5 + dVar30 * dVar7) - dVar31) * dVar24;
        dVar21 = ((dVar33 * dVar4 + dVar21 * dVar6 + dVar30 * dVar8) - dVar2) * dVar24;
        *(double *)(pVVar18 + 0x10) = dVar22;
        dVar30 = _LC26 + dVar25;
        *(double *)pVVar18 = dVar25;
        *(double *)(pVVar18 + 8) = dVar21;
        if (dVar1 <= dVar30) {
          uVar19 = (long)(dVar30 - dVar1) ^ 0x8000000000000000;
        }
        else {
          uVar19 = (ulong)dVar30;
        }
        dVar21 = dVar21 + _LC26;
        if (dVar1 <= dVar21) {
          uVar15 = (long)(dVar21 - dVar1) ^ 0x8000000000000000;
        }
        else {
          uVar15 = (ulong)dVar21;
        }
        dVar22 = dVar22 + _LC26;
        if (dVar1 <= dVar22) break;
        uVar13 = (ulong)dVar22;
        if (lVar11 != 0) goto LAB_0010d3ea;
LAB_0010d4af:
        in_RAX = uVar13;
        pVVar18 = pVVar18 + 0x18;
        lVar11 = 1;
        unaff_RBX = uVar15;
        local_158 = uVar15;
        unaff_R13 = uVar19;
        in_R11 = uVar19;
        local_188 = in_RAX;
      }
      uVar13 = (long)(dVar22 - dVar1) ^ 0x8000000000000000;
      if (lVar11 == 0) goto LAB_0010d4af;
LAB_0010d3ea:
      if (uVar19 < in_R11) {
        in_R11 = uVar19;
      }
      if (uVar15 < unaff_RBX) {
        unaff_RBX = uVar15;
      }
      if (uVar13 < in_RAX) {
        in_RAX = uVar13;
      }
      if (unaff_R13 < uVar19) {
        unaff_R13 = uVar19;
      }
      if (local_158 < uVar15) {
        local_158 = uVar15;
      }
      if (uVar13 <= local_188) {
        uVar13 = local_188;
      }
      if (lVar11 == 2) goto LAB_0010d507;
      pVVar18 = pVVar18 + 0x18;
      lVar11 = 2;
      local_188 = uVar13;
    } while( true );
  }
  uVar12 = *(ulong *)(this + 0x40);
  uVar14 = *(ulong *)(this + 0x38);
LAB_0010d749:
  ::VHACD::Volume::FillOutsideSurface((ulong)this,0,0,0,uVar14,uVar12);
  ::VHACD::Volume::FillOutsideSurface
            ((ulong)this,0,0,*(long *)(this + 0x48) - 1,*(ulong *)(this + 0x38),
             *(ulong *)(this + 0x40));
  ::VHACD::Volume::FillOutsideSurface((ulong)this,0,0,0,*(ulong *)(this + 0x38),1);
  ::VHACD::Volume::FillOutsideSurface
            ((ulong)this,0,*(ulong *)(this + 0x40) - 1,0,*(ulong *)(this + 0x38),
             *(ulong *)(this + 0x40));
  ::VHACD::Volume::FillOutsideSurface((ulong)this,0,0,0,1,*(ulong *)(this + 0x40));
  ::VHACD::Volume::FillOutsideSurface
            ((ulong)this,*(ulong *)(this + 0x38) - 1,0,0,*(ulong *)(this + 0x38),
             *(ulong *)(this + 0x40));
  ::VHACD::Volume::FillInsideSurface();
LAB_0010ce03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010d507:
  in_R11 = (in_R11 - 1) + (ulong)(in_R11 == 0);
  unaff_RBX = (unaff_RBX - 1) + (ulong)(unaff_RBX == 0);
  in_RAX = (in_RAX - 1) + (ulong)(in_RAX == 0);
  unaff_R13 = unaff_R13 + (unaff_R13 < uVar14);
  local_158 = local_158 + (local_158 < uVar12);
  local_188 = uVar13 + (uVar13 < *(ulong *)(this + 0x48));
  if (in_R11 < unaff_R13) {
    uVar12 = in_R11;
    do {
      local_c8 = (double)uVar12;
      uVar14 = unaff_RBX;
      if (unaff_RBX < local_158) {
        do {
          local_c0 = (double)uVar14;
          if (in_RAX < local_188) {
            uVar19 = in_RAX;
            do {
              while( true ) {
                local_b8 = (double)uVar19;
                iVar9 = ::VHACD::TriBoxOverlap
                                  ((Vec3 *)&local_c8,(Vec3 *)&local_a8,(Vec3 *)local_88,local_70,
                                   local_58);
                if ((iVar9 == 1) &&
                   (pcVar10 = (char *)((*(long *)(this + 0x40) * uVar19 + uVar14) *
                                       *(long *)(this + 0x38) + uVar12 + *(long *)(this + 0x68)),
                   *pcVar10 == '\0')) break;
                uVar19 = uVar19 + 1;
                if (local_188 == uVar19) goto LAB_0010d6c5;
              }
              *pcVar10 = '\x03';
              uVar19 = uVar19 + 1;
              *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
            } while (local_188 != uVar19);
          }
LAB_0010d6c5:
          uVar14 = uVar14 + 1;
        } while (local_158 != uVar14);
      }
      uVar12 = uVar12 + 1;
    } while (unaff_R13 != uVar12);
    uVar12 = *(ulong *)(this + 0x40);
    uVar14 = *(ulong *)(this + 0x38);
  }
  local_120 = local_120 + 1;
  local_118 = local_118 + param_5;
  if (local_120 == param_6) goto LAB_0010d749;
  goto LAB_0010d273;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void VHACD::VHACD::AlignMesh<float>(float const*, unsigned int, unsigned int, int const*,
   unsigned int, unsigned int, VHACD::IVHACD::Parameters const&) */

void __thiscall
VHACD::VHACD::AlignMesh<float>
          (VHACD *this,float *param_1,uint param_2,uint param_3,int *param_4,uint param_5,
          uint param_6,Parameters *param_7)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  pointer_____offset_0x18___ puVar5;
  pointer_____offset_0x10___ puVar6;
  streambuf *psVar7;
  ostream *poVar8;
  long in_FS_OFFSET;
  double dVar9;
  undefined1 *local_248;
  undefined8 local_240;
  undefined1 local_238;
  undefined7 uStack_237;
  undefined1 *local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined7 uStack_217;
  pointer_____offset_0x10___ local_1b8;
  pointer_____offset_0x10___ puStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  char *local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0x348] == (VHACD)0x0) && (*(int *)(param_7 + 0x40) != 0)) {
    clock_gettime(0,(timespec *)(this + 0x2e8));
    std::__cxx11::string::_M_replace((ulong)(this + 0x228),0,*(char **)(this + 0x230),0x10b43d);
    std::__cxx11::string::_M_replace((ulong)(this + 0x248),0,*(char **)(this + 0x250),0x10b448);
    std::ios_base::ios_base((ios_base *)local_148);
    local_68 = 0;
    local_60 = (undefined1  [16])0x0;
    local_50 = (undefined1  [16])0x0;
    local_1b8 = _init;
    psVar7 = (streambuf *)((ostream *)&local_1b8 + *(long *)(_init + -0x18));
    local_148[0] = std::ios::init;
    local_70 = 0;
    *(undefined8 *)psVar7 = _locale;
    std::ios::init(psVar7);
    local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
    local_1b8 = PTR_vtable_0010f408;
    puStack_1b0 = PTR_vtable_0010f400;
    local_1a8 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    std::locale::locale(local_178);
    puStack_1b0 = std::ios_base::ios_base;
    local_170 = 0x10;
    local_160 = (char *)0x0;
    local_158 = 0;
    local_168 = &local_158;
    std::ios::init((streambuf *)local_148);
    if (*(long *)(param_7 + 0x28) != 0) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"+ ",2);
      poVar8 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&local_1b8,*(char **)(this + 0x228),*(long *)(this + 0x230));
      plVar1 = *(long **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
      if (plVar1 == (long *)0x0) goto LAB_0010e3b3;
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))();
        }
      }
      std::ostream::put((char)poVar8);
      std::ostream::flush();
      plVar1 = *(long **)(param_7 + 0x28);
      pcVar2 = *(code **)(*plVar1 + 0x10);
      local_220 = 0;
      local_218 = 0;
      local_228 = &local_218;
      if (local_188._0_8_ == 0) {
        std::__cxx11::string::_M_assign((string *)&local_228);
      }
      else {
        std::__cxx11::string::_M_replace((ulong)&local_228,0,(char *)0x0,local_198._8_8_);
      }
      (*pcVar2)(plVar1,local_228);
      if (local_228 != &local_218) {
        operator_delete(local_228,CONCAT71(uStack_217,local_218) + 1);
      }
    }
    plVar1 = *(long **)(param_7 + 0x20);
    *(undefined1 (*) [16])(this + 0x270) = (undefined1  [16])0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))
                (*(undefined8 *)(this + 0x268),0,plVar1,*(undefined8 *)(this + 0x228),
                 *(undefined8 *)(this + 0x248));
    }
    puVar6 = PTR_vtable_0010f410;
    puVar5 = PTR_vtable_0010f408;
    if (this[0x348] == (VHACD)0x0) {
      dVar9 = pow((double)*(uint *)(param_7 + 0x30),_LC62);
      dVar9 = dVar9 + _LC26;
      if (_LC58 <= dVar9) {
        *(long *)(this + 0x308) = (long)(dVar9 - _LC58);
        *(ulong *)(this + 0x308) = *(ulong *)(this + 0x308) ^ 0x8000000000000000;
      }
      else {
        *(long *)(this + 0x308) = (long)dVar9;
      }
      ::VHACD::Volume::Volume((Volume *)&local_228);
      Volume::Voxelize<float>
                ((Volume *)&local_228,param_1,param_2,param_3,param_4,param_5,param_6,
                 *(ulong *)(this + 0x308),(Vec3 *)(this + 0x2d0),(double *)(this + 0x280));
      uVar3 = _UNK_0010f3c8;
      plVar1 = *(long **)(param_7 + 0x20);
      *(undefined8 *)(this + 0x270) = _LC64;
      *(undefined8 *)(this + 0x278) = uVar3;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))
                  (*(undefined8 *)(this + 0x268),_LC64,_LC17,plVar1,*(undefined8 *)(this + 0x228),
                   *(undefined8 *)(this + 0x248));
      }
      if (*(long *)(param_7 + 0x28) != 0) {
        local_238 = 0;
        local_240 = 0;
        local_248 = &local_238;
        std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)&local_238);
        std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
        if (local_248 != &local_238) {
          operator_delete(local_248,CONCAT71(uStack_237,local_238) + 1);
        }
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"\t dim = ",8);
        poVar8 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1b8);
        std::__ostream_insert<char,std::char_traits<char>>(poVar8,"\t-> ",4);
        poVar8 = std::ostream::_M_insert<unsigned_long>((ulong)poVar8);
        std::__ostream_insert<char,std::char_traits<char>>(poVar8," voxels",7);
        plVar1 = *(long **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
        if (plVar1 == (long *)0x0) goto LAB_0010e3b3;
        if ((char)plVar1[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar1 + 0x30))(plVar1);
          }
        }
        std::ostream::put((char)poVar8);
        std::ostream::flush();
        plVar1 = *(long **)(param_7 + 0x28);
        pcVar2 = *(code **)(*plVar1 + 0x10);
        local_240 = 0;
        local_238 = 0;
        if (local_188._0_8_ == 0) {
          local_248 = &local_238;
          std::__cxx11::string::_M_assign((string *)&local_248);
        }
        else {
          local_248 = &local_238;
          std::__cxx11::string::_M_replace((ulong)&local_248,0,(char *)0x0,local_198._8_8_);
        }
        (*pcVar2)(plVar1);
        if (local_248 != &local_238) {
          operator_delete(local_248,CONCAT71(uStack_237,local_238) + 1);
        }
      }
      if (this[0x348] == (VHACD)0x0) {
        std::__cxx11::string::_M_replace((ulong)(this + 0x248),0,*(char **)(this + 0x250),0x10b46b);
        plVar1 = *(long **)(param_7 + 0x20);
        *(undefined8 *)(this + 0x270) = _LC69;
        *(undefined8 *)(this + 0x278) = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x10))
                    (*(undefined8 *)(this + 0x268),_LC64,0,plVar1,*(undefined8 *)(this + 0x228),
                     *(undefined8 *)(this + 0x248));
        }
        ::VHACD::Volume::AlignToPrincipalAxes((double *)&local_228);
        uVar4 = _UNK_0010f3e8;
        uVar3 = _LC17;
        plVar1 = *(long **)(param_7 + 0x20);
        *(undefined8 *)(this + 0x268) = __LC70;
        *(undefined8 *)(this + 0x270) = uVar4;
        *(undefined8 *)(this + 0x278) = uVar3;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x10))
                    (_LC1,uVar3,uVar3,plVar1,*(undefined8 *)(this + 0x228),
                     *(undefined8 *)(this + 0x248));
        }
        clock_gettime(0,(timespec *)(this + 0x2f8));
        if (*(long *)(param_7 + 0x28) != 0) {
          local_238 = 0;
          local_240 = 0;
          local_248 = &local_238;
          std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)&local_238);
          std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
          if (local_248 != &local_238) {
            operator_delete(local_248,CONCAT71(uStack_237,local_238) + 1);
          }
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"\t time ",7);
          poVar8 = std::ostream::_M_insert<double>
                             ((((double)(*(long *)(this + 0x300) - *(long *)(this + 0x2f0)) * __LC20
                               + (double)(*(long *)(this + 0x2f8) - *(long *)(this + 0x2e8))) *
                              _LC21) / _LC21);
          std::__ostream_insert<char,std::char_traits<char>>(poVar8,"s",1);
          plVar1 = *(long **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
          if (plVar1 == (long *)0x0) {
LAB_0010e3b3:
            std::__throw_bad_cast();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if ((char)plVar1[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar1 + 0x30))(plVar1);
            }
          }
          std::ostream::put((char)poVar8);
          std::ostream::flush();
          plVar1 = *(long **)(param_7 + 0x28);
          pcVar2 = *(code **)(*plVar1 + 0x10);
          local_240 = 0;
          local_238 = 0;
          if (local_188._0_8_ == 0) {
            local_248 = &local_238;
            std::__cxx11::string::_M_assign((string *)&local_248);
          }
          else {
            local_248 = &local_238;
            std::__cxx11::string::_M_replace((ulong)&local_248,0,(char *)0x0,local_198._8_8_);
          }
          (*pcVar2)(plVar1,local_248);
          if (local_248 != &local_238) {
            operator_delete(local_248,CONCAT71(uStack_237,local_238) + 1);
          }
        }
        ::VHACD::Volume::~Volume((Volume *)&local_228);
      }
      else {
        ::VHACD::Volume::~Volume((Volume *)&local_228);
      }
    }
    local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
    local_1b8 = puVar5;
    if (local_168 != &local_158) {
      puStack_1b0 = puVar6;
      local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
      operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
    }
    puStack_1b0 = std::ios_base::~ios_base;
    std::locale::~locale(local_178);
    local_1b8 = _init;
    *(undefined8 *)((long)&local_1b8 + *(long *)(_init + -0x18)) = _locale;
    local_148[0] = std::ios::init;
    std::ios_base::~ios_base((ios_base *)local_148);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void VHACD::VHACD::VoxelizeMesh<float>(float const*, unsigned int, unsigned int, int const*,
   unsigned int, unsigned int, VHACD::IVHACD::Parameters const&) */

void __thiscall
VHACD::VHACD::VoxelizeMesh<float>
          (VHACD *this,float *param_1,uint param_2,uint param_3,int *param_4,uint param_5,
          uint param_6,Parameters *param_7)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ostream *poVar7;
  Volume *pVVar8;
  ulong uVar9;
  ulong uVar10;
  streambuf *psVar11;
  VHACD *__dest;
  int iVar12;
  long in_FS_OFFSET;
  double dVar13;
  VHACD *local_1d8;
  size_t local_1d0;
  ulong local_1c8 [2];
  pointer_____offset_0x18___ local_1b8;
  pointer_____offset_0x10___ puStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  locale local_178 [8];
  undefined4 local_170;
  undefined1 *local_168;
  char *local_160;
  undefined1 local_158;
  undefined7 uStack_157;
  code *local_148 [27];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x348] == (VHACD)0x0) {
    clock_gettime(0,(timespec *)(this + 0x2e8));
    std::__cxx11::string::_M_replace((ulong)(this + 0x228),0,*(char **)(this + 0x230),0x10b448);
    std::ios_base::ios_base((ios_base *)local_148);
    local_148[0] = std::ios::init;
    local_68 = 0;
    local_60 = (undefined1  [16])0x0;
    local_50 = (undefined1  [16])0x0;
    local_1b8 = _init;
    local_70 = 0;
    psVar11 = (streambuf *)((ostream *)&local_1b8 + *(long *)(_init + -0x18));
    *(undefined8 *)psVar11 = _locale;
    std::ios::init(psVar11);
    local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
    local_1b8 = PTR_vtable_0010f408;
    puStack_1b0 = PTR_vtable_0010f400;
    local_1a8 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    std::locale::locale(local_178);
    local_170 = 0x10;
    puStack_1b0 = std::ios_base::ios_base;
    local_158 = 0;
    local_160 = (char *)0x0;
    local_168 = &local_158;
    std::ios::init((streambuf *)local_148);
    if (*(long *)(param_7 + 0x28) != 0) {
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"+ ",2);
      poVar7 = std::__ostream_insert<char,std::char_traits<char>>
                         ((ostream *)&local_1b8,*(char **)(this + 0x228),*(long *)(this + 0x230));
      plVar2 = *(long **)(poVar7 + *(long *)(*(long *)poVar7 + -0x18) + 0xf0);
      if (plVar2 != (long *)0x0) {
        if ((char)plVar2[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar2 + 0x30))(plVar2);
          }
        }
        std::ostream::put((char)poVar7);
        std::ostream::flush();
        plVar2 = *(long **)(param_7 + 0x28);
        pcVar3 = *(code **)(*plVar2 + 0x10);
        local_1d0 = 0;
        local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
        local_1d8 = (VHACD *)local_1c8;
        if (local_188._0_8_ == 0) {
          std::__cxx11::string::_M_assign((string *)&local_1d8);
        }
        else {
          std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
        }
        (*pcVar3)(plVar2,local_1d8);
        if (local_1d8 != (VHACD *)local_1c8) {
          operator_delete(local_1d8,local_1c8[0] + 1);
        }
        goto LAB_0010e6b7;
      }
LAB_0010f1f6:
      std::__throw_bad_cast();
      goto LAB_0010f1fb;
    }
LAB_0010e6b7:
    pVVar8 = *(Volume **)(this + 0x310);
    if (pVVar8 != (Volume *)0x0) {
      ::VHACD::Volume::~Volume(pVVar8);
      operator_delete(pVVar8,0x70);
    }
    dVar13 = _LC17;
    *(undefined8 *)(this + 0x310) = 0;
    dVar4 = _LC17;
    if (this[0x348] == (VHACD)0x0) {
      iVar12 = 1;
      do {
        local_1d8 = (VHACD *)local_1c8;
        std::__cxx11::string::_M_construct<char_const*>((string *)&local_1d8);
        std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)local_1d8);
        std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
        if (local_1d8 != (VHACD *)local_1c8) {
          operator_delete(local_1d8,local_1c8[0] + 1);
        }
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"Iteration ",10);
        std::ostream::operator<<((ostream *)&local_1b8,iVar12);
        local_1d0 = 0;
        local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
        if (local_188._0_8_ == 0) {
          local_1d8 = (VHACD *)local_1c8;
          std::__cxx11::string::_M_assign((string *)&local_1d8);
        }
        else {
          local_1d8 = (VHACD *)local_1c8;
          std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
        }
        __dest = *(VHACD **)(this + 0x248);
        if (__dest == this + 600) {
          if (local_1d8 == (VHACD *)local_1c8) goto LAB_0010f0b8;
          *(VHACD **)(this + 0x248) = local_1d8;
          *(size_t *)(this + 0x250) = local_1d0;
          *(ulong *)(this + 600) = local_1c8[0];
          local_1d8 = (VHACD *)local_1c8;
        }
        else if (local_1d8 == (VHACD *)local_1c8) {
LAB_0010f0b8:
          if (local_1d0 != 0) {
            if (local_1d0 == 1) {
              *__dest = local_1c8[0]._0_1_;
              __dest = *(VHACD **)(this + 0x248);
            }
            else {
              memcpy(__dest,(VHACD *)local_1c8,local_1d0);
              __dest = *(VHACD **)(this + 0x248);
            }
          }
          *(size_t *)(this + 0x250) = local_1d0;
          __dest[local_1d0] = (VHACD)0x0;
        }
        else {
          uVar10 = *(ulong *)(this + 600);
          *(VHACD **)(this + 0x248) = local_1d8;
          *(size_t *)(this + 0x250) = local_1d0;
          *(ulong *)(this + 600) = local_1c8[0];
          local_1d8 = (VHACD *)local_1c8;
          if (__dest != (VHACD *)0x0) {
            local_1d8 = __dest;
            local_1c8[0] = uVar10;
          }
        }
        local_1d0 = 0;
        *local_1d8 = (VHACD)0x0;
        if (local_1d8 != (VHACD *)local_1c8) {
          operator_delete(local_1d8,local_1c8[0] + 1);
        }
        plVar2 = *(long **)(param_7 + 0x20);
        *(undefined8 *)(this + 0x278) = 0;
        dVar13 = ((double)iVar12 * dVar4) / __LC72;
        *(double *)(this + 0x270) = dVar13;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x10))
                    (*(undefined8 *)(this + 0x268),dVar13,0,plVar2,*(undefined8 *)(this + 0x228),
                     *(undefined8 *)(this + 0x248));
        }
        pVVar8 = (Volume *)operator_new(0x70);
        ::VHACD::Volume::Volume(pVVar8);
        *(Volume **)(this + 0x310) = pVVar8;
        Volume::Voxelize<float>
                  (pVVar8,param_1,param_2,param_3,param_4,param_5,param_6,*(ulong *)(this + 0x308),
                   (Vec3 *)(this + 0x2d0),(double *)(this + 0x280));
        plVar2 = *(long **)(param_7 + 0x20);
        *(double *)(this + 0x270) = dVar13;
        *(double *)(this + 0x278) = dVar4;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x10))
                    (*(undefined8 *)(this + 0x268),plVar2,*(undefined8 *)(this + 0x228),
                     *(undefined8 *)(this + 0x248));
        }
        uVar10 = *(long *)(*(long *)(this + 0x310) + 0x50) +
                 *(long *)(*(long *)(this + 0x310) + 0x58);
        if (*(long *)(param_7 + 0x28) != 0) {
          local_1d0 = 0;
          local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
          local_1d8 = (VHACD *)local_1c8;
          std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)local_1c8);
          std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
          if (local_1d8 != (VHACD *)local_1c8) {
            operator_delete(local_1d8,local_1c8[0] + 1);
          }
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"\t dim = ",8);
          poVar7 = std::ostream::_M_insert<unsigned_long>((ulong)&local_1b8);
          std::__ostream_insert<char,std::char_traits<char>>(poVar7,"\t-> ",4);
          poVar7 = std::ostream::_M_insert<unsigned_long>((ulong)poVar7);
          std::__ostream_insert<char,std::char_traits<char>>(poVar7," voxels",7);
          plVar2 = *(long **)(poVar7 + *(long *)(*(long *)poVar7 + -0x18) + 0xf0);
          if (plVar2 == (long *)0x0) goto LAB_0010f1f6;
          if ((char)plVar2[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*plVar2 + 0x30))();
            }
          }
          std::ostream::put((char)poVar7);
          std::ostream::flush();
          plVar2 = *(long **)(param_7 + 0x28);
          pcVar3 = *(code **)(*plVar2 + 0x10);
          local_1d0 = 0;
          local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
          if (local_188._0_8_ == 0) {
            local_1d8 = (VHACD *)local_1c8;
            std::__cxx11::string::_M_assign((string *)&local_1d8);
          }
          else {
            local_1d8 = (VHACD *)local_1c8;
            std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
          }
          (*pcVar3)(plVar2,local_1d8);
          if (local_1d8 != (VHACD *)local_1c8) {
            operator_delete(local_1d8,local_1c8[0] + 1);
          }
        }
        uVar1 = *(uint *)(param_7 + 0x30);
        dVar13 = pow((double)uVar1 / (double)uVar10,_LC71);
        dVar13 = (double)*(ulong *)(this + 0x308) * dVar13 + _LC26;
        if (_LC58 <= dVar13) {
          uVar9 = (long)(dVar13 - _LC58) ^ 0x8000000000000000;
        }
        else {
          uVar9 = (ulong)dVar13;
        }
        dVar13 = dVar4;
        if ((((uVar1 <= uVar10) || (iVar12 == 5)) ||
            (pVVar8 = *(Volume **)(this + 0x310), (ulong)(uVar1 >> 3) <= *(ulong *)(pVVar8 + 0x50)))
           || (*(ulong *)(this + 0x308) == uVar9)) break;
        iVar12 = iVar12 + 1;
        ::VHACD::Volume::~Volume(pVVar8);
        operator_delete(pVVar8,0x70);
        *(undefined8 *)(this + 0x310) = 0;
        *(ulong *)(this + 0x308) = uVar9;
      } while (this[0x348] == (VHACD)0x0);
    }
    uVar6 = _UNK_0010f3f8;
    uVar5 = _LC74;
    plVar2 = *(long **)(param_7 + 0x20);
    *(double *)(this + 0x278) = dVar13;
    *(undefined8 *)(this + 0x268) = uVar5;
    *(undefined8 *)(this + 0x270) = uVar6;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))
                (_LC74,dVar13,plVar2,*(undefined8 *)(this + 0x228),*(undefined8 *)(this + 0x248));
    }
    clock_gettime(0,(timespec *)(this + 0x2f8));
    if (*(long *)(param_7 + 0x28) != 0) {
      local_1d0 = 0;
      local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
      local_1d8 = (VHACD *)local_1c8;
      std::__cxx11::string::_M_replace((ulong)&local_168,0,local_160,(ulong)local_1c8);
      std::__cxx11::stringbuf::_M_sync((char *)&puStack_1b0,(ulong)local_168,0);
      if (local_1d8 != (VHACD *)local_1c8) {
        operator_delete(local_1d8,local_1c8[0] + 1);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_1b8,"\t time ",7);
      poVar7 = std::ostream::_M_insert<double>
                         ((((double)(*(long *)(this + 0x300) - *(long *)(this + 0x2f0)) * __LC20 +
                           (double)(*(long *)(this + 0x2f8) - *(long *)(this + 0x2e8))) * _LC21) /
                          _LC21);
      std::__ostream_insert<char,std::char_traits<char>>(poVar7,"s",1);
      plVar2 = *(long **)(poVar7 + *(long *)(*(long *)poVar7 + -0x18) + 0xf0);
      if (plVar2 == (long *)0x0) goto LAB_0010f1f6;
      if ((char)plVar2[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar2 + 0x30))(plVar2);
        }
      }
      std::ostream::put((char)poVar7);
      std::ostream::flush();
      plVar2 = *(long **)(param_7 + 0x28);
      pcVar3 = *(code **)(*plVar2 + 0x10);
      local_1d0 = 0;
      local_1c8[0] = local_1c8[0] & 0xffffffffffffff00;
      if (local_188._0_8_ == 0) {
        local_1d8 = (VHACD *)local_1c8;
        std::__cxx11::string::_M_assign((string *)&local_1d8);
      }
      else {
        local_1d8 = (VHACD *)local_1c8;
        std::__cxx11::string::_M_replace((ulong)&local_1d8,0,(char *)0x0,local_198._8_8_);
      }
      (*pcVar3)(plVar2,local_1d8);
      if (local_1d8 != (VHACD *)local_1c8) {
        operator_delete(local_1d8,local_1c8[0] + 1);
      }
    }
    local_148[0] = std::__ostream_insert<char,std::char_traits<char>>;
    local_1b8 = PTR_vtable_0010f408;
    puStack_1b0 = PTR_vtable_0010f410;
    if (local_168 != &local_158) {
      operator_delete(local_168,CONCAT71(uStack_157,local_158) + 1);
    }
    puStack_1b0 = std::ios_base::~ios_base;
    std::locale::~locale(local_178);
    local_1b8 = _init;
    *(undefined8 *)((long)&local_1b8 + *(long *)(_init + -0x18)) = _locale;
    local_148[0] = std::ios::init;
    std::ios_base::~ios_base((ios_base *)local_148);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f1fb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* VHACD::VHACD::~VHACD() */

void __thiscall VHACD::VHACD::~VHACD(VHACD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


