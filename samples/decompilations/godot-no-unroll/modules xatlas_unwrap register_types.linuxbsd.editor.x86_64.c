
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* xatlas_mesh_lightmap_unwrap_callback(float, float const*, float const*, int, int const*, int,
   unsigned char const*, bool*, unsigned char**, int*, float**, int**, int*, int**, int*, int*,
   int*) */

undefined8
xatlas_mesh_lightmap_unwrap_callback
          (float param_1,float *param_2,float *param_3,int param_4,int *param_5,int param_6,
          uchar *param_7,bool *param_8,uchar **param_9,int *param_10,float **param_11,int **param_12
          ,int *param_13,int **param_14,int *param_15,int *param_16,int *param_17)

{
  float fVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  Atlas *pAVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  bool bVar16;
  long in_FS_OFFSET;
  float fVar17;
  float local_11c [3];
  MD5Context local_110 [8];
  undefined8 local_108;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  float *local_b8;
  float *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  long local_58;
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_11c[0] = param_1;
  CryptoCore::MD5Context::MD5Context(local_110);
  CryptoCore::MD5Context::start();
  CryptoCore::MD5Context::update((uchar *)local_110,(ulong)local_11c);
  CryptoCore::MD5Context::update((uchar *)local_110,(ulong)param_5);
  CryptoCore::MD5Context::update((uchar *)local_110,(ulong)param_2);
  CryptoCore::MD5Context::update((uchar *)local_110,(ulong)param_3);
  CryptoCore::MD5Context::finish((uchar *)local_110);
  *param_9 = (uchar *)0x0;
  *param_10 = 0;
  if ((param_7 != (uchar *)0x0) && (0 < *(int *)param_7)) {
    iVar15 = 0;
    uVar11 = 1;
    do {
      if (*(long *)(param_7 + (ulong)uVar11 * 4) == local_58 &&
          *(long *)(param_7 + (ulong)uVar11 * 4 + 8) == lStack_50) {
        bVar16 = true;
        *param_16 = *(int *)(param_7 + (ulong)(uVar11 + 4) * 4);
        *param_17 = *(int *)(param_7 + (ulong)(uVar11 + 5) * 4);
        iVar15 = *(int *)(param_7 + (ulong)(uVar11 + 6) * 4);
        *param_13 = iVar15;
        *param_12 = (int *)(param_7 + (ulong)(uVar11 + 7) * 4);
        uVar11 = uVar11 + 7 + iVar15;
        uVar12 = uVar11 + iVar15 * 2;
        *param_11 = (float *)(param_7 + (ulong)uVar11 * 4);
        *param_15 = *(int *)(param_7 + (ulong)uVar12 * 4);
        *param_14 = (int *)(param_7 + (ulong)(uVar12 + 1) * 4);
        bVar4 = true;
        if (*param_8 == false) goto LAB_00100236;
        goto LAB_001005d0;
      }
      iVar15 = iVar15 + 1;
      uVar11 = uVar11 + 7 + *(int *)(param_7 + (ulong)(uVar11 + 6) * 4) * 3;
      uVar11 = *(int *)(param_7 + (ulong)uVar11 * 4) + 1 + uVar11;
    } while (*(int *)param_7 != iVar15);
  }
  local_88 = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  local_98 = (undefined1  [16])0x0;
  uStack_e0 = __LC1;
  uStack_d8 = _UNK_00100988;
  uStack_7c = 0xc;
  uStack_78 = 0xc;
  local_a8._8_8_ = 0;
  local_a8._0_8_ = param_5;
  local_a8 = local_a8 << 0x40;
  local_68._8_4_ = 0x34000000;
  local_68._0_8_ = 0x134000000;
  local_68._12_4_ = 0;
  local_e8 = 0;
  local_c0 = 1;
  local_bc = 0x100;
  uStack_d0 = __LC2;
  uStack_c8 = _UNK_00100998;
  local_b8 = param_2;
  local_b0 = param_3;
  iStack_80 = param_4;
  iStack_70 = param_6;
  if (local_11c[0] <= 0.0) {
    uVar14 = 0;
    _err_print_error("xatlas_mesh_lightmap_unwrap_callback",
                     "modules/xatlas_unwrap/register_types.cpp",0x7d,
                     "Condition \"p_texel_size <= 0.0f\" is true. Returning: false",
                     "Texel size must be greater than 0.",0,0);
  }
  else {
    uStack_f4 = 0x101;
    fStack_100 = _LC11 / local_11c[0];
    local_108 = _LC9;
    uStack_fc = 0;
    uStack_f8 = 0x101;
    pAVar5 = (Atlas *)xatlas::Create();
    iVar15 = xatlas::AddMesh(pAVar5,(MeshDecl *)&local_b8,1);
    if (iVar15 == 0) {
      xatlas::Generate(pAVar5);
      *param_16 = *(int *)(pAVar5 + 0x18);
      iVar15 = *(int *)(pAVar5 + 0x1c);
      *param_17 = iVar15;
      fVar17 = (float)iVar15;
      iVar15 = *param_16;
      bVar16 = (float)iVar15 == 0.0 || fVar17 == 0.0;
      if (bVar16) {
        uVar14 = 0;
        xatlas::Destroy(pAVar5);
      }
      else {
        lVar2 = *(long *)(pAVar5 + 8);
        piVar6 = (int *)Memory::alloc_static((ulong)*(uint *)(lVar2 + 0x20) << 2,false);
        *param_12 = piVar6;
        if (piVar6 == (int *)0x0) {
          uVar14 = 0;
          _err_print_error("xatlas_mesh_lightmap_unwrap_callback",
                           "modules/xatlas_unwrap/register_types.cpp",0x9a,
                           "Parameter \"*r_vertex\" is null.","Out of memory.",0,0);
        }
        else {
          pfVar7 = (float *)Memory::alloc_static((ulong)*(uint *)(lVar2 + 0x20) << 3,false);
          *param_11 = pfVar7;
          if (pfVar7 == (float *)0x0) {
            uVar14 = 0;
            _err_print_error("xatlas_mesh_lightmap_unwrap_callback",
                             "modules/xatlas_unwrap/register_types.cpp",0x9c,
                             "Parameter \"*r_uv\" is null.","Out of memory.",0,0);
          }
          else {
            piVar6 = (int *)Memory::alloc_static((ulong)*(uint *)(lVar2 + 0x1c) << 2,false);
            *param_14 = piVar6;
            if (piVar6 == (int *)0x0) {
              uVar14 = 0;
              _err_print_error("xatlas_mesh_lightmap_unwrap_callback",
                               "modules/xatlas_unwrap/register_types.cpp",0x9e,
                               "Parameter \"*r_index\" is null.","Out of memory.",0,0);
            }
            else {
              uVar11 = 0;
              if (*(int *)(lVar2 + 0x20) != 0) {
                uVar12 = 0;
                lVar13 = 0;
                piVar3 = *param_12;
                pfVar7 = *param_11;
                pfVar8 = (float *)(*(long *)(lVar2 + 0x10) + 8);
                do {
                  fVar1 = *pfVar8;
                  piVar3[lVar13] = (int)pfVar8[2];
                  lVar13 = lVar13 + 1;
                  pfVar7[uVar12] = fVar1 / (float)iVar15;
                  uVar11 = uVar12 + 1;
                  uVar12 = uVar12 + 2;
                  pfVar7[uVar11] = pfVar8[1] / fVar17;
                  uVar11 = *(uint *)(lVar2 + 0x20);
                  pfVar8 = pfVar8 + 5;
                } while ((uint)lVar13 < uVar11);
              }
              *param_13 = uVar11;
              uVar11 = 0;
              if (*(int *)(lVar2 + 0x1c) != 0) {
                lVar13 = *(long *)(lVar2 + 8);
                lVar9 = 0;
                do {
                  piVar6[lVar9] = *(int *)(lVar13 + lVar9 * 4);
                  uVar11 = *(uint *)(lVar2 + 0x1c);
                  lVar9 = lVar9 + 1;
                } while ((uint)lVar9 < uVar11);
              }
              *param_15 = uVar11;
              xatlas::Destroy(pAVar5);
              bVar4 = bVar16;
              if (*param_8 != false) {
LAB_001005d0:
                bVar16 = bVar4;
                uVar11 = (*param_13 * 3 + 8 + *param_15) * 4;
                plVar10 = (long *)Memory::alloc_static((ulong)uVar11,false);
                *plVar10 = local_58;
                plVar10[1] = lStack_50;
                piVar6 = *param_12;
                *(int *)(plVar10 + 2) = *param_16;
                *(int *)((long)plVar10 + 0x14) = *param_17;
                iVar15 = *param_13;
                *(int *)(plVar10 + 3) = iVar15;
                memcpy((uchar *)((long)plVar10 + 0x1c),piVar6,(long)iVar15 * 4);
                uVar12 = *param_13 + 7;
                memcpy((uchar *)((long)plVar10 + (ulong)uVar12 * 4),*param_11,(long)*param_13 * 8);
                uVar12 = uVar12 + *param_13 * 2;
                iVar15 = *param_15;
                *(int *)((long)plVar10 + (ulong)uVar12 * 4) = iVar15;
                memcpy((uchar *)((long)plVar10 + (ulong)(uVar12 + 1) * 4),*param_14,(long)iVar15 * 4
                      );
                *param_9 = (uchar *)plVar10;
                *param_10 = uVar11;
              }
LAB_00100236:
              uVar14 = 1;
              *param_8 = bVar16;
            }
          }
        }
      }
    }
    else {
      uVar14 = xatlas::StringForEnum(iVar15);
      _err_print_error("xatlas_mesh_lightmap_unwrap_callback",
                       "modules/xatlas_unwrap/register_types.cpp",0x88,
                       "Condition \"err != xatlas::AddMeshError::Success\" is true. Returning: false"
                       ,uVar14,0,0);
      uVar14 = 0;
    }
  }
  CryptoCore::MD5Context::~MD5Context(local_110);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* initialize_xatlas_unwrap_module(ModuleInitializationLevel) */

void initialize_xatlas_unwrap_module(int param_1)

{
  if (param_1 == 2) {
    _array_mesh_lightmap_unwrap_callback = 0x100000;
  }
  return;
}



/* uninitialize_xatlas_unwrap_module(ModuleInitializationLevel) */

void uninitialize_xatlas_unwrap_module(void)

{
  return;
}


