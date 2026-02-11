
/* RendererRD::MaterialStorage::get_shader_parameter_list(RID, List<PropertyInfo,
   DefaultAllocator>*) const */

void __thiscall
RendererRD::MaterialStorage::get_shader_parameter_list
          (MaterialStorage *this,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1ec))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x80 +
                     *(long *)(*(long *)(this + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
    iVar1 = (int)plVar2[0xf];
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2,param_3);
        return;
      }
      return;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("get_shader_parameter_list",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x7fd,
                   "Parameter \"shader\" is null.",0,0);
  return;
}



/* RendererRD::MaterialStorage::shader_get_parameter_default(RID, StringName const&) const */

undefined4 *
RendererRD::MaterialStorage::shader_get_parameter_default
          (undefined4 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x1ec))) {
    plVar3 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x1e8)) * 0x80 +
                     *(long *)(*(long *)(param_2 + 0x1d8) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x1e8)) * 8));
    iVar1 = (int)plVar3[0xf];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
      }
      else {
        (**(code **)(*plVar3 + 0x10))(param_1,plVar3,param_4);
      }
      goto LAB_0010014c;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shader_get_parameter_default",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x82a,
                   "Parameter \"shader\" is null.",0,0);
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
LAB_0010014c:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::MaterialStorage::material_is_animated(RID) */

undefined8 __thiscall
RendererRD::MaterialStorage::material_is_animated(MaterialStorage *this,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x26c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
            *(long *)(*(long *)(this + 600) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8);
    if (*(int *)(lVar3 + 0xb8) == (int)(param_2 >> 0x20)) {
      if (*(long **)(lVar3 + 0x10) == (long *)0x0) {
        return 0;
      }
      plVar1 = (long *)**(long **)(lVar3 + 0x10);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      uVar2 = (**(code **)(*plVar1 + 0x38))();
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
      if (*(long *)(lVar3 + 0x60) == 0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00100297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)this + 0x108))(this,*(undefined8 *)(lVar3 + 0x60));
      return uVar2;
    }
    if (*(int *)(lVar3 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("material_is_animated",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x8f8,
                   "Parameter \"material\" is null.",0,0);
  return 0;
}



/* RendererRD::MaterialStorage::material_casts_shadows(RID) */

undefined8 __thiscall
RendererRD::MaterialStorage::material_casts_shadows(MaterialStorage *this,ulong param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x26c))) {
    lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
            *(long *)(*(long *)(this + 600) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8);
    if (*(int *)(lVar4 + 0xb8) == (int)(param_2 >> 0x20)) {
      if (*(long **)(lVar4 + 0x10) == (long *)0x0) {
        return 1;
      }
      plVar1 = (long *)**(long **)(lVar4 + 0x10);
      if (plVar1 == (long *)0x0) {
        return 1;
      }
      cVar2 = (**(code **)(*plVar1 + 0x40))();
      if (cVar2 != '\0') {
        return 1;
      }
      if (*(long *)(lVar4 + 0x60) == 0) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x001003a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)this + 0x110))(this,*(undefined8 *)(lVar4 + 0x60));
      return uVar3;
    }
    if (*(int *)(lVar4 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("material_casts_shadows",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x905,
                   "Parameter \"material\" is null.",0,0);
  return 1;
}



/* RendererRD::MaterialStorage::material_get_instance_shader_parameters(RID,
   List<RendererMaterialStorage::InstanceShaderParam, DefaultAllocator>*) */

void __thiscall
RendererRD::MaterialStorage::material_get_instance_shader_parameters
          (MaterialStorage *this,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x26c))) {
    lVar2 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
            *(long *)(*(long *)(this + 600) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8);
    if (*(int *)(lVar2 + 0xb8) == (int)(param_2 >> 0x20)) {
      if ((*(long **)(lVar2 + 0x10) != (long *)0x0) &&
         (plVar1 = (long *)**(long **)(lVar2 + 0x10), plVar1 != (long *)0x0)) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_3);
        if (*(long *)(lVar2 + 0x60) != 0) {
                    /* WARNING: Could not recover jumptable at 0x001004bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)this + 0x120))(this,*(undefined8 *)(lVar2 + 0x60),param_3);
          return;
        }
      }
      return;
    }
    if (*(int *)(lVar2 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("material_get_instance_shader_parameters",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x924,
                   "Parameter \"material\" is null.",0,0);
  return;
}



/* RendererRD::MaterialStorage::material_set_next_pass(RID, RID) */

void __thiscall
RendererRD::MaterialStorage::material_set_next_pass
          (MaterialStorage *this,ulong param_2,long param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x26c))) {
    lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
            *(long *)(*(long *)(this + 600) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8);
    if (*(int *)(lVar1 + 0xb8) == (int)(param_2 >> 0x20)) {
      if (*(long *)(lVar1 + 0x60) != param_3) {
        *(long *)(lVar1 + 0x60) = param_3;
        if (*(long **)(lVar1 + 8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar1 + 8) + 8))();
        }
        Dependency::changed_notify(lVar1 + 0x88,1);
        return;
      }
      return;
    }
    if (*(int *)(lVar1 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("material_set_next_pass",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x8de,
                   "Parameter \"material\" is null.",0,0);
  return;
}



/* RendererRD::MaterialStorage::material_set_render_priority(RID, int) */

void __thiscall
RendererRD::MaterialStorage::material_set_render_priority
          (MaterialStorage *this,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x26c)) {
      lVar1 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
              *(long *)(*(long *)(this + 600) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8);
      if (*(int *)(lVar1 + 0xb8) == (int)(param_2 >> 0x20)) {
        *(undefined4 *)(lVar1 + 0x58) = param_3;
        if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar1 + 8))();
        }
        Dependency::changed_notify(lVar1 + 0x88,1);
        return;
      }
      if (*(int *)(lVar1 + 0xb8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("material_set_render_priority",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x8ee,
                   "Parameter \"material\" is null.",0,0);
  return;
}



/* RendererRD::MaterialStorage::material_get_cull_mode(RID) const */

undefined4 __thiscall
RendererRD::MaterialStorage::material_get_cull_mode(MaterialStorage *this,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x26c))) {
    lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
            *(long *)(*(long *)(this + 600) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8);
    iVar1 = *(int *)(lVar4 + 0xb8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      plVar2 = *(long **)(lVar4 + 0x10);
      if (plVar2 == (long *)0x0) {
        _err_print_error("material_get_cull_mode",
                         "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x913,
                         "Parameter \"material->shader\" is null.",0,0);
        return 0;
      }
      if ((int)plVar2[3] != 1) {
        return 0;
      }
      lVar4 = *plVar2;
      if (lVar4 == 0) {
        return 0;
      }
      lVar3 = __dynamic_cast(lVar4,&ShaderData::typeinfo,
                             &RendererSceneRenderImplementation::SceneShaderForwardClustered::
                              ShaderData::typeinfo,0);
      if (lVar3 == 0) {
        lVar4 = __dynamic_cast(lVar4,&ShaderData::typeinfo,
                               &RendererSceneRenderImplementation::SceneShaderForwardMobile::
                                ShaderData::typeinfo,0);
        if (lVar4 == 0) {
          return 0;
        }
        return *(undefined4 *)(lVar4 + 0x224);
      }
      return *(undefined4 *)(lVar3 + 0x340);
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("material_get_cull_mode",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x912,
                   "Parameter \"material\" is null.",0,0);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::MaterialStorage::material_initialize(RID) */

void __thiscall
RendererRD::MaterialStorage::material_initialize(MaterialStorage *this,ulong param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  uVar6 = _LC20;
  if (param_2 == 0) {
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                     "Parameter \"mem\" is null.",0,0);
    goto LAB_00115098;
  }
  uVar2 = (uint)(param_2 >> 0x20);
  if ((uint)param_2 < *(uint *)(this + 0x26c)) {
    puVar4 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
             *(long *)(*(long *)(this + 600) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8));
    if (-1 < (int)*(uint *)(puVar4 + 0x17)) {
      pcVar7 = "Initializing already initialized RID";
      uVar6 = 0xf8;
LAB_00100a04:
      _err_print_error("get_or_null","./core/templates/rid_owner.h",uVar6,
                       "Method/function failed. Returning: nullptr",pcVar7,0,0);
      goto LAB_00100a1d;
    }
    if (uVar2 != (*(uint *)(puVar4 + 0x17) & 0x7fffffff)) {
      pcVar7 = "Attempting to initialize the wrong RID";
      uVar6 = 0xfc;
      goto LAB_00100a04;
    }
    *(uint *)(puVar4 + 0x17) = uVar2;
    *puVar4 = 0;
    puVar4[3] = 5;
    *(undefined2 *)(puVar4 + 4) = 0;
    puVar4[10] = uVar6;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0xe] = puVar4;
    puVar4[0x16] = uVar6;
    *(undefined1 (*) [16])(puVar4 + 1) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar4 + 6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar4 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar4 + 0x14) = (undefined1  [16])0x0;
  }
  else {
LAB_00100a1d:
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x114,
                     "Parameter \"mem\" is null.",0,0);
  }
  if ((uint)param_2 < *(uint *)(this + 0x26c)) {
    puVar5 = (ulong *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
                      *(long *)(*(long *)(this + 600) +
                               ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8));
    uVar3 = (uint)puVar5[0x17];
    if (uVar3 == uVar2) {
      *puVar5 = param_2;
      return;
    }
    uVar3 = uVar3 + 0x80000000;
    if (uVar3 < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0,uVar3);
    }
  }
LAB_00115098:
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SortArray<StringName, StringName::AlphCompare, true>::adjust_heap(long, long, long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::adjust_heap
               (long param_1,long param_2,long param_3,StringName *param_4,long param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  StringName *pSVar13;
  StringName *this;
  long lVar14;
  long in_FS_OFFSET;
  StringName *local_50;
  long local_48;
  long local_40;
  
  lVar11 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = param_2;
  if (lVar11 < param_3) {
    do {
      lVar9 = lVar11 + -1;
      this = (StringName *)(param_5 + (lVar9 + param_1) * 8);
      pSVar13 = (StringName *)(param_5 + (param_1 + lVar11) * 8);
      lVar6 = *(long *)this;
      lVar5 = *(long *)pSVar13;
      if (lVar5 == 0) {
        if (lVar6 != 0) {
          pbVar10 = *(byte **)(lVar6 + 8);
          uVar8 = 0;
          pbVar12 = &_LC24;
LAB_00100b9c:
          if (pbVar10 == (byte *)0x0) {
            lVar5 = 0;
            uVar3 = **(uint **)(lVar6 + 0x10);
            if (uVar3 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_00100b50;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_00100b50;
                if (uVar3 < uVar8) break;
                uVar8 = (uint)(char)pbVar12[lVar5 + 1];
                uVar3 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
                lVar5 = lVar5 + 1;
              } while (uVar8 != 0 || uVar3 != 0);
            }
          }
          else {
            uVar3 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
LAB_00100bee:
            if (bVar4 != 0) {
              lVar6 = 1;
              do {
                if (uVar8 == 0) goto LAB_00100b50;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_00100b50;
                if (uVar3 < uVar8) break;
                pbVar1 = pbVar12 + lVar6;
                uVar8 = (uint)(char)*pbVar1;
                pbVar2 = pbVar10 + lVar6;
                uVar3 = (uint)(char)*pbVar2;
                lVar6 = lVar6 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar5 + 8);
        if (lVar6 == 0) {
          if (pbVar12 != (byte *)0x0) {
            bVar4 = *pbVar12;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC24;
            uVar3 = 0;
            goto LAB_00100bee;
          }
          uVar8 = 0;
          pbVar10 = &_LC24;
        }
        else {
          pbVar10 = *(byte **)(lVar6 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar12;
            goto LAB_00100b9c;
          }
          if (pbVar10 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar6 + 0x10);
            uVar3 = **(uint **)(lVar5 + 0x10);
            if (uVar8 != 0 || uVar3 != 0) {
              do {
                if (uVar3 == 0) goto LAB_00100b50;
                if (uVar8 == 0) break;
                if (uVar3 < uVar8) goto LAB_00100b50;
                if (uVar8 < uVar3) break;
                uVar3 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar3 != 0 || uVar8 != 0);
            }
            goto LAB_00100b78;
          }
          uVar8 = (uint)(char)*pbVar10;
        }
        lVar6 = 0;
        uVar3 = **(uint **)(lVar5 + 0x10);
        if (uVar3 != 0 || uVar8 != 0) {
          do {
            if (uVar3 == 0) goto LAB_00100b50;
            if (uVar8 == 0) break;
            if (uVar3 < uVar8) goto LAB_00100b50;
            if (uVar8 < uVar3) break;
            uVar3 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
            uVar8 = (uint)(char)pbVar10[lVar6 + 1];
            lVar6 = lVar6 + 1;
          } while (uVar3 != 0 || uVar8 != 0);
        }
      }
LAB_00100b78:
      lVar9 = lVar11;
      this = pSVar13;
      lVar11 = lVar11 + 1;
LAB_00100b50:
      lVar11 = lVar11 * 2;
      StringName::operator=((StringName *)(param_5 + (lVar14 + param_1) * 8),this);
      lVar14 = lVar9;
    } while (lVar11 < param_3);
    pSVar13 = this;
    if (lVar11 == param_3) goto LAB_00100fb8;
  }
  else {
    this = (StringName *)(param_5 + (param_2 + param_1) * 8);
    if (lVar11 != param_3) {
      StringName::StringName((StringName *)&local_48,param_4);
      goto LAB_00100d92;
    }
LAB_00100fb8:
    lVar9 = lVar11 + -1;
    pSVar13 = (StringName *)(param_5 + (param_1 + lVar9) * 8);
    StringName::operator=(this,pSVar13);
  }
  StringName::StringName((StringName *)&local_48,param_4);
  lVar11 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
  this = pSVar13;
  while (param_2 < lVar9) {
    lVar14 = lVar11 >> 1;
    this = (StringName *)(param_5 + (param_1 + lVar14) * 8);
    lVar11 = *(long *)this;
    if (lVar11 == 0) {
      if (local_48 != 0) {
        pbVar10 = *(byte **)(local_48 + 8);
        uVar3 = 0;
        uVar8 = 0;
        pbVar12 = &_LC24;
        if (pbVar10 != (byte *)0x0) goto LAB_00100e53;
LAB_00100df5:
        uVar8 = **(uint **)(local_48 + 0x10);
        if (uVar8 != 0 || uVar3 != 0) {
          lVar11 = 0;
          while (uVar3 != 0) {
            if (uVar8 == 0) goto LAB_00100d88;
            if (uVar3 < uVar8) break;
            if (uVar8 < uVar3) goto LAB_00100d88;
            uVar3 = (uint)(char)pbVar12[lVar11 + 1];
            uVar8 = (*(uint **)(local_48 + 0x10))[lVar11 + 1];
            lVar11 = lVar11 + 1;
            if (uVar3 == 0 && uVar8 == 0) goto LAB_00100d88;
          }
          goto LAB_00100d50;
        }
      }
LAB_00100d88:
      this = (StringName *)(param_5 + (lVar9 + param_1) * 8);
      break;
    }
    pbVar12 = *(byte **)(lVar11 + 8);
    if (local_48 == 0) {
      uVar8 = 0;
      pbVar10 = &_LC24;
      if (pbVar12 != (byte *)0x0) {
        bVar4 = *pbVar12;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC24;
        uVar3 = 0;
        goto LAB_00100e59;
      }
LAB_00100eba:
      uVar3 = **(uint **)(lVar11 + 0x10);
      if (uVar3 == 0 && uVar8 == 0) goto LAB_00100d88;
      lVar6 = 0;
      while (uVar3 != 0) {
        if (uVar8 == 0) goto LAB_00100d88;
        if (uVar3 < uVar8) break;
        if (uVar8 < uVar3) goto LAB_00100d88;
        uVar3 = (*(uint **)(lVar11 + 0x10))[lVar6 + 1];
        uVar8 = (uint)(char)pbVar10[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar3 == 0 && uVar8 == 0) goto LAB_00100d88;
      }
    }
    else {
      pbVar10 = *(byte **)(local_48 + 8);
      if (pbVar12 == (byte *)0x0) {
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_00100eba;
        }
        uVar8 = **(uint **)(local_48 + 0x10);
        uVar3 = **(uint **)(lVar11 + 0x10);
        if (uVar8 == 0 && uVar3 == 0) goto LAB_00100d88;
        lVar6 = 4;
        while (uVar3 != 0) {
          if (uVar8 == 0) goto LAB_00100d88;
          if (uVar3 < uVar8) break;
          if (uVar8 < uVar3) goto LAB_00100d88;
          uVar3 = *(uint *)((long)*(uint **)(lVar11 + 0x10) + lVar6);
          uVar8 = *(uint *)((long)*(uint **)(local_48 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar3 == 0 && uVar8 == 0) {
            this = (StringName *)(param_5 + (param_1 + lVar9) * 8);
            goto LAB_00100d92;
          }
        }
      }
      else {
        uVar3 = (uint)(char)*pbVar12;
        uVar8 = uVar3;
        if (pbVar10 == (byte *)0x0) goto LAB_00100df5;
LAB_00100e53:
        uVar3 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_00100e59:
        if (bVar4 == 0) goto LAB_00100d88;
        lVar11 = 1;
        while (uVar8 != 0) {
          if (uVar3 == 0) goto LAB_00100d88;
          if (uVar8 < uVar3) break;
          if (uVar3 < uVar8) goto LAB_00100d88;
          pbVar1 = pbVar12 + lVar11;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar11;
          uVar3 = (uint)(char)*pbVar2;
          lVar11 = lVar11 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00100d88;
        }
      }
    }
LAB_00100d50:
    StringName::operator=((StringName *)(param_5 + (lVar9 + param_1) * 8),this);
    lVar11 = (lVar14 + -1) - (lVar14 + -1 >> 0x3f);
    lVar9 = lVar14;
  }
LAB_00100d92:
  local_50 = (StringName *)&local_48;
  StringName::operator=(this,local_50);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<StringName, StringName::AlphCompare, true>::unguarded_linear_insert(long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
               (long param_1,StringName *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  StringName *pSVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  pSVar3 = (StringName *)(param_3 + -8 + param_1 * 8);
  lVar6 = *(long *)pSVar3;
  lVar5 = *(long *)param_2;
  do {
    if (lVar5 == 0) {
      if (lVar6 == 0) goto LAB_001011fb;
      pbVar10 = *(byte **)(lVar6 + 8);
      uVar8 = 0;
      pbVar11 = &_LC24;
LAB_00101101:
      if (pbVar10 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_001011fb;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_001011fb;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_001011fb;
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar9 == 0) goto LAB_001011fb;
        }
      }
      else {
        uVar9 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_0010115e:
        if (bVar4 == 0) goto LAB_001011fb;
        lVar6 = 1;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_001011fb;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_001011fb;
          pbVar1 = pbVar11 + lVar6;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar6;
          uVar9 = (uint)(char)*pbVar2;
          lVar6 = lVar6 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001011fb;
        }
      }
    }
    else {
      pbVar11 = *(byte **)(lVar5 + 8);
      if (lVar6 == 0) {
        if (pbVar11 != (byte *)0x0) {
          bVar4 = *pbVar11;
          uVar8 = (uint)(char)bVar4;
          pbVar10 = &_LC24;
          uVar9 = 0;
          goto LAB_0010115e;
        }
        uVar8 = 0;
        pbVar10 = &_LC24;
LAB_00101077:
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_001011fb;
        lVar6 = 0;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_001011fb;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_001011fb;
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar10[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_001011fb;
        }
      }
      else {
        pbVar10 = *(byte **)(lVar6 + 8);
        if (pbVar11 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar11;
          goto LAB_00101101;
        }
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_00101077;
        }
        uVar8 = **(uint **)(lVar6 + 0x10);
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar8 == 0 && uVar9 == 0) goto LAB_001011fb;
        lVar7 = 4;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_001011fb;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_001011fb;
          uVar9 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
          uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
          lVar7 = lVar7 + 4;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_001011fb;
        }
      }
    }
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      param_1 = 1;
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_001011fb:
      StringName::operator=((StringName *)(param_3 + param_1 * 8),param_2);
      return;
    }
    StringName::operator=(pSVar3 + 8,pSVar3);
    lVar5 = *(long *)param_2;
    lVar6 = *(long *)(pSVar3 + -8);
    pSVar3 = pSVar3 + -8;
  } while( true );
}



/* SortArray<StringName, StringName::AlphCompare, true>::linear_insert(long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::linear_insert
               (long param_1,long param_2,StringName *param_3)

{
  StringName *this;
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  StringName *this_00;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  this = param_3 + param_1 * 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_50,param_3 + param_2 * 8);
  if (local_50 == 0) {
    lVar4 = *(long *)this;
    if (lVar4 != 0) {
      pbVar8 = *(byte **)(lVar4 + 8);
      uVar6 = 0;
      pbVar9 = &_LC24;
LAB_001013d8:
      if (pbVar8 == (byte *)0x0) {
        uVar7 = **(uint **)(lVar4 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 0;
          do {
            if (uVar6 == 0) goto LAB_00101330;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_00101330;
            if (uVar7 < uVar6) break;
            uVar6 = (uint)(char)pbVar9[lVar5 + 1];
            uVar7 = (*(uint **)(lVar4 + 0x10))[lVar5 + 1];
            lVar5 = lVar5 + 1;
          } while (uVar6 != 0 || uVar7 != 0);
        }
      }
      else {
        uVar7 = (uint)(char)*pbVar8;
        bVar3 = *pbVar8 | (byte)uVar6;
LAB_00101480:
        if (bVar3 != 0) {
          lVar4 = 1;
          do {
            if (uVar6 == 0) goto LAB_00101330;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_00101330;
            if (uVar7 < uVar6) break;
            pbVar1 = pbVar9 + lVar4;
            uVar6 = (uint)(char)*pbVar1;
            pbVar2 = pbVar8 + lVar4;
            uVar7 = (uint)(char)*pbVar2;
            lVar4 = lVar4 + 1;
          } while (*pbVar1 != 0 || *pbVar2 != 0);
        }
      }
    }
  }
  else {
    lVar4 = *(long *)this;
    pbVar9 = *(byte **)(local_50 + 8);
    if (lVar4 == 0) {
      if (pbVar9 != (byte *)0x0) {
        bVar3 = *pbVar9;
        uVar6 = (uint)(char)bVar3;
        pbVar8 = &_LC24;
        uVar7 = 0;
        goto LAB_00101480;
      }
      uVar6 = 0;
      pbVar8 = &_LC24;
    }
    else {
      pbVar8 = *(byte **)(lVar4 + 8);
      if (pbVar9 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar9;
        goto LAB_001013d8;
      }
      if (pbVar8 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar4 + 0x10);
        uVar7 = **(uint **)(local_50 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 4;
          do {
            if (uVar7 == 0) goto LAB_00101330;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00101330;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(local_50 + 0x10) + lVar5);
            uVar6 = *(uint *)((long)*(uint **)(lVar4 + 0x10) + lVar5);
            lVar5 = lVar5 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_00101428;
      }
      uVar6 = (uint)(char)*pbVar8;
    }
    uVar7 = **(uint **)(local_50 + 0x10);
    if (uVar6 != 0 || uVar7 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_00101330;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_00101330;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(local_50 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar8[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
LAB_00101428:
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  unguarded_linear_insert(param_2,(StringName *)&local_48,param_3);
  if (StringName::configured == '\0') goto LAB_00101376;
  if (local_48 != 0) {
    StringName::unref();
    goto LAB_00101362;
  }
  goto LAB_00101366;
LAB_00101330:
  this_00 = param_3 + param_2 * 8;
  if (param_1 < param_2) {
    do {
      param_2 = param_2 + -1;
      StringName::operator=(this_00,this_00 + -8);
      this_00 = this_00 + -8;
    } while (param_1 != param_2);
  }
  StringName::operator=(this,(StringName *)&local_50);
LAB_00101362:
  if (StringName::configured == '\0') goto LAB_00101376;
LAB_00101366:
  if (local_50 != 0) {
    StringName::unref();
  }
LAB_00101376:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::median_of_3(StringName const&, StringName
   const&, StringName const&) const [clone .isra.0] */

StringName *
SortArray<StringName,StringName::AlphCompare,true>::median_of_3
          (StringName *param_1,StringName *param_2,StringName *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  lVar8 = *(long *)param_1;
  lVar9 = *(long *)param_3;
  lVar13 = *(long *)param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC24;
    pbVar16 = &_LC24;
    if (lVar13 == 0) {
LAB_00101e60:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_0010172e:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_00101734;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC24;
      if (*pbVar16 == 0) goto LAB_00101a29;
LAB_00101882:
      lVar8 = 1;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar6 == 0) break;
        if (uVar5 < uVar6) {
          return param_1;
        }
        if (uVar6 < uVar5) break;
        pbVar2 = pbVar16 + lVar8;
        uVar5 = (uint)(char)*pbVar2;
        pbVar1 = pbVar17 + lVar8;
        uVar6 = (uint)(char)*pbVar1;
        lVar8 = lVar8 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC24;
LAB_001016b2:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_001017a0:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x001017e8;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x001017e8;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_00101718;
        }
        goto LAB_00101e60;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x001017e8;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x001017e8;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00101718;
      }
      if (lVar9 == 0) goto LAB_00101a81;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_00101734:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_00101879;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_00101d66;
      lVar8 = 0;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar4 == 0) break;
        if (uVar5 < uVar4) {
          return param_1;
        }
        if (uVar4 < uVar5) break;
        uVar5 = (uint)(char)pbVar16[lVar8 + 1];
        uVar4 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_00101a10:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_00101d6f:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_2;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_00101bf6:
      uVar4 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_3;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if (uVar4 < uVar12) {
            return param_3;
          }
          if (uVar12 < uVar4) {
            return param_2;
          }
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_00101c58:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 < uVar6) {
          return param_3;
        }
        if (uVar6 < uVar4) break;
        uVar4 = (uint)(char)pbVar15[lVar8 + 1];
        uVar6 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar6 == 0) {
          return param_2;
        }
      }
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC24;
        goto LAB_001017a0;
      }
      uVar4 = 0;
      pbVar15 = &_LC24;
LAB_00101599:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x001017e8;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x001017e8;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_00101718:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_0010172e;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_00101b18:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_00101dd3;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
        uVar12 = *puVar10;
        uVar6 = uVar12 | uVar4;
        if (uVar6 != 0) {
          lVar8 = 4;
          do {
            if (uVar4 == 0) {
              return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
              return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_00101a10;
        }
LAB_00101d66:
        if (pbVar15 != (byte *)0x0) goto LAB_00101c58;
        goto LAB_00101d6f;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_00101e31;
      }
LAB_00101a81:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC24;
LAB_00101879:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_00101882;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_001016b2;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_00101599;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_00101988:
            pbVar16 = (byte *)0x0;
            goto joined_r0x001017e8;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_00101988;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_00101718;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_00101b18;
      }
LAB_00101e31:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC24;
      uVar6 = uVar4;
LAB_00101dd3:
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) {
            return param_1;
          }
          if (uVar12 < uVar4) break;
          uVar4 = puVar7[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00101a10;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_00101bf6;
  }
LAB_00101a29:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
    uVar4 = (uint)(char)bVar11;
    if (uVar4 == 0) {
      return param_3;
    }
    if (uVar12 == 0) {
      return param_2;
    }
    if (uVar4 < uVar12) {
      return param_3;
    }
    if (uVar12 < uVar4) break;
    bVar11 = pbVar15[lVar8];
    pbVar16 = pbVar17 + lVar8;
    uVar12 = (uint)(char)*pbVar16;
    lVar8 = lVar8 + 1;
    if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
    }
  }
  return param_2;
joined_r0x001017e8:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC24;
    if (pbVar15 != (byte *)0x0) goto LAB_001018d7;
LAB_00101804:
    uVar6 = **(uint **)(lVar13 + 0x10);
    uVar4 = uVar6 | uVar12;
    if (uVar4 != 0) {
      lVar14 = 0;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar12 == 0) break;
        if (uVar6 < uVar12) {
          return param_2;
        }
        if (uVar12 < uVar6) break;
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_001019a0;
    }
LAB_00101e6e:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_00101b8e;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_00101804;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_00101d09;
      lVar14 = 4;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar6 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar6) break;
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
        uVar6 = (uint)(char)*pbVar15;
        uVar4 = *puVar7;
        uVar12 = uVar4 | uVar6;
        if (uVar12 != 0) {
          lVar13 = 0;
          do {
            if (uVar6 == 0) {
              return param_2;
            }
            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
              return param_2;
            }
            if (uVar4 < uVar6) break;
            uVar6 = (uint)(char)pbVar15[lVar13 + 1];
            uVar4 = puVar7[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_001019a0;
        }
LAB_00101d09:
        if (pbVar16 == (byte *)0x0) goto LAB_00101d0e;
        goto LAB_00101cb6;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_001018d7:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_00101e6e;
      lVar13 = 1;
      do {
        uVar12 = (uint)(char)bVar3;
        if (uVar12 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar12 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar12) break;
        bVar3 = pbVar15[lVar13];
        pbVar2 = pbVar17 + lVar13;
        uVar4 = (uint)(char)*pbVar2;
        lVar13 = lVar13 + 1;
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_001019a0:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_00101d0e:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_00101b8e:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
        if (uVar12 == 0) {
          return param_3;
        }
        if (uVar4 == 0) {
          return param_1;
        }
        if (uVar12 < uVar4) {
          return param_3;
        }
        if (uVar4 < uVar12) break;
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_00101cb6:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar4 == 0 && uVar12 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar12 == 0) {
          return param_1;
        }
        if (uVar4 < uVar12) {
          return param_3;
        }
        if (uVar12 < uVar4) break;
        uVar4 = (uint)(char)pbVar16[lVar8 + 1];
        uVar12 = puVar7[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar12 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    bVar11 = *pbVar17;
    uVar4 = (uint)(char)bVar11;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0 && bVar11 == 0) {
    return param_1;
  }
  lVar8 = 1;
  while( true ) {
    uVar12 = (uint)(char)bVar3;
    if (uVar12 == 0) {
      return param_3;
    }
    if (uVar4 == 0) {
      return param_1;
    }
    if (uVar12 < uVar4) {
      return param_3;
    }
    if (uVar4 < uVar12) break;
    bVar3 = pbVar16[lVar8];
    pbVar15 = pbVar17 + lVar8;
    uVar4 = (uint)(char)*pbVar15;
    lVar8 = lVar8 + 1;
    if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
    }
  }
  return param_1;
}



/* CowData<RendererRD::TextureStorage::RenderTarget*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RendererRD::TextureStorage::RenderTarget*>::_copy_on_write
          (CowData<RendererRD::TextureStorage::RenderTarget*> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RendererRD::MaterialStorage::shader_get_native_source_code(RID) const */

long RendererRD::MaterialStorage::shader_get_native_source_code
               (long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x1ec))) {
    plVar4 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x1e8)) * 0x80 +
                     *(long *)(*(long *)(param_2 + 0x1d8) +
                              ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x1e8)) * 8));
    iVar1 = (int)plVar4[0xf];
    if (iVar1 == (int)(param_3 >> 0x20)) {
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) {
        pcVar3 = *(code **)(*plVar4 + 0x48);
        if (pcVar3 != ShaderData::get_native_source_code) {
          (*pcVar3)();
          goto LAB_0010207f;
        }
      }
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_0010207f;
    }
    if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shader_get_native_source_code",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x838,
                   "Parameter \"shader\" is null.",0,0);
  *(undefined8 *)(param_1 + 8) = 0;
LAB_0010207f:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<StringName, StringName::AlphCompare, true>::partitioner(long, long, StringName,
   StringName*) const [clone .isra.0] */

long SortArray<StringName,StringName::AlphCompare,true>::partitioner
               (long param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  byte *pbVar13;
  long *plVar14;
  
  lVar10 = *param_3;
  lVar3 = *(long *)(param_4 + param_1 * 8);
  lVar9 = param_1;
  lVar8 = param_2;
joined_r0x0010215f:
  if (lVar3 == 0) {
    if (lVar10 == 0) goto LAB_00102280;
    pbVar5 = *(byte **)(lVar10 + 8);
    uVar6 = 0;
    pbVar13 = &_LC24;
LAB_00102216:
    if (pbVar5 == (byte *)0x0) {
      uVar7 = **(uint **)(lVar10 + 0x10);
      if (uVar7 != 0 || uVar6 != 0) {
        lVar3 = 0;
        do {
          if (uVar6 == 0) goto LAB_001021e0;
          if (uVar7 == 0) break;
          if (uVar6 < uVar7) goto LAB_001021e0;
          if (uVar7 < uVar6) break;
          uVar6 = (uint)(char)pbVar13[lVar3 + 1];
          uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
          lVar3 = lVar3 + 1;
        } while (uVar6 != 0 || uVar7 != 0);
      }
      goto LAB_00102280;
    }
    uVar7 = (uint)(char)*pbVar5;
    bVar12 = (byte)uVar6 | *pbVar5;
LAB_00102556:
    if (bVar12 != 0) {
      lVar3 = 1;
      do {
        if (uVar6 == 0) goto LAB_001021e0;
        if (uVar7 == 0) break;
        if (uVar6 < uVar7) goto LAB_001021e0;
        if (uVar7 < uVar6) break;
        pbVar1 = pbVar13 + lVar3;
        uVar6 = (uint)(char)*pbVar1;
        pbVar2 = pbVar5 + lVar3;
        uVar7 = (uint)(char)*pbVar2;
        lVar3 = lVar3 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar13 = *(byte **)(lVar3 + 8);
    if (lVar10 == 0) {
      if (pbVar13 != (byte *)0x0) {
        bVar12 = *pbVar13;
        uVar6 = (uint)(char)bVar12;
        uVar7 = 0;
        pbVar5 = &_LC24;
        goto LAB_00102556;
      }
      uVar6 = 0;
      pbVar5 = &_LC24;
    }
    else {
      pbVar5 = *(byte **)(lVar10 + 8);
      if (pbVar13 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar13;
        goto LAB_00102216;
      }
      if (pbVar5 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar10 + 0x10);
        uVar7 = **(uint **)(lVar3 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar4 = 4;
          do {
            if (uVar7 == 0) goto LAB_001021e0;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_001021e0;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_00102280;
      }
      uVar6 = (uint)(char)*pbVar5;
    }
    uVar7 = **(uint **)(lVar3 + 0x10);
    if (uVar7 != 0 || uVar6 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_001021e0;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_001021e0;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar5[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
  goto LAB_00102280;
LAB_001021e0:
  if (param_2 + -1 == lVar9) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar10 = *param_3;
LAB_00102280:
    plVar11 = (long *)(param_4 + -8 + lVar8 * 8);
LAB_00102290:
    lVar8 = lVar8 + -1;
    lVar3 = *plVar11;
    if (lVar10 != 0) {
      pbVar13 = *(byte **)(lVar10 + 8);
      do {
        if (lVar3 == 0) {
          if (pbVar13 != (byte *)0x0) {
            bVar12 = *pbVar13;
            uVar7 = (uint)(char)bVar12;
            pbVar5 = &_LC24;
            uVar6 = 0;
            goto LAB_0010243e;
          }
          uVar6 = 0;
          pbVar5 = &_LC24;
LAB_0010235a:
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar7 == 0 && uVar6 == 0) goto LAB_001024b8;
          lVar3 = 0;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_001024b8;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_001024b8;
            uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
            uVar6 = (uint)(char)pbVar5[lVar3 + 1];
            lVar3 = lVar3 + 1;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_001024b8;
          }
        }
        else {
          pbVar5 = *(byte **)(lVar3 + 8);
          if (pbVar13 != (byte *)0x0) goto LAB_00102480;
          if (pbVar5 != (byte *)0x0) {
            uVar6 = (uint)(char)*pbVar5;
            goto LAB_0010235a;
          }
          uVar6 = **(uint **)(lVar3 + 0x10);
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar6 == 0 && uVar7 == 0) goto LAB_001024b8;
          lVar4 = 4;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_001024b8;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_001024b8;
            uVar7 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_001024b8;
          }
        }
        plVar14 = plVar11;
        if (param_1 == lVar8) goto LAB_00102490;
        lVar3 = plVar11[-1];
        lVar8 = lVar8 + -1;
        plVar11 = plVar11 + -1;
      } while( true );
    }
    if (lVar3 != 0) {
      pbVar5 = *(byte **)(lVar3 + 8);
      uVar7 = 0;
      bVar12 = 0;
      pbVar13 = &_LC24;
      goto LAB_001023c9;
    }
    goto LAB_001024b8;
  }
LAB_001021ee:
  lVar9 = lVar9 + 1;
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  goto joined_r0x0010215f;
LAB_00102480:
  bVar12 = *pbVar13;
  uVar7 = (uint)(char)bVar12;
LAB_001023c9:
  if (pbVar5 == (byte *)0x0) {
    uVar6 = **(uint **)(lVar3 + 0x10);
    if (uVar6 == 0 && uVar7 == 0) goto LAB_001024b8;
    lVar4 = 0;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_001024b8;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_001024b8;
      uVar7 = (uint)(char)pbVar13[lVar4 + 1];
      uVar6 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
      lVar4 = lVar4 + 1;
      if (uVar7 == 0 && uVar6 == 0) goto LAB_001024b8;
    }
  }
  else {
    uVar6 = (uint)(char)*pbVar5;
    bVar12 = bVar12 | *pbVar5;
LAB_0010243e:
    if (bVar12 == 0) goto LAB_001024b8;
    lVar3 = 1;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_001024b8;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_001024b8;
      pbVar1 = pbVar13 + lVar3;
      uVar7 = (uint)(char)*pbVar1;
      pbVar2 = pbVar5 + lVar3;
      uVar6 = (uint)(char)*pbVar2;
      lVar3 = lVar3 + 1;
      if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001024b8;
    }
  }
  plVar11 = plVar14 + -1;
  if (param_1 == lVar8) goto LAB_00102490;
  goto LAB_00102290;
LAB_00102490:
  plVar11 = plVar14;
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_001024b8:
  if (lVar8 <= lVar9) {
    return lVar9;
  }
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  *(undefined8 *)(param_4 + lVar9 * 8) = 0;
  if (*plVar11 != 0) {
    StringName::unref();
    *(long *)(param_4 + lVar9 * 8) = *plVar11;
    *plVar11 = 0;
  }
  if (lVar3 != 0) {
    StringName::unref();
    *plVar11 = lVar3;
  }
  lVar10 = *param_3;
  goto LAB_001021ee;
}



/* SortArray<StringName, StringName::AlphCompare, true>::partial_sort(long, long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::partial_sort
               (long param_1,long param_2,long param_3,StringName *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  StringName *pSVar13;
  long lVar14;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  lVar10 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar10 < 2) {
    if (param_2 <= param_3) goto LAB_0010293b;
LAB_00102726:
    lVar14 = param_3;
LAB_00102760:
    lVar6 = *(long *)(param_4 + lVar14 * 8);
    lVar5 = *(long *)(param_4 + param_1 * 8);
    if (lVar6 == 0) {
      if (lVar5 != 0) {
        pbVar11 = *(byte **)(lVar5 + 8);
        uVar8 = 0;
        pbVar12 = &_LC24;
LAB_00102974:
        if (pbVar11 == (byte *)0x0) {
          uVar9 = **(uint **)(lVar5 + 0x10);
          if (uVar9 != 0 || uVar8 != 0) {
            lVar6 = 0;
            do {
              if (uVar8 == 0) goto LAB_001027e0;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_001027e0;
              if (uVar9 < uVar8) break;
              uVar8 = (uint)(char)pbVar12[lVar6 + 1];
              uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
              lVar6 = lVar6 + 1;
            } while (uVar8 != 0 || uVar9 != 0);
          }
        }
        else {
          uVar9 = (uint)(char)*pbVar11;
          bVar4 = (byte)uVar8 | *pbVar11;
LAB_001029d6:
          if (bVar4 != 0) {
            lVar6 = 1;
            do {
              if (uVar8 == 0) goto LAB_001027e0;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_001027e0;
              if (uVar9 < uVar8) break;
              pbVar1 = pbVar12 + lVar6;
              uVar8 = (uint)(char)*pbVar1;
              pbVar2 = pbVar11 + lVar6;
              uVar9 = (uint)(char)*pbVar2;
              lVar6 = lVar6 + 1;
            } while (*pbVar1 != 0 || *pbVar2 != 0);
          }
        }
      }
    }
    else {
      pbVar12 = *(byte **)(lVar6 + 8);
      if (lVar5 == 0) {
        if (pbVar12 != (byte *)0x0) {
          bVar4 = *pbVar12;
          uVar8 = (uint)(char)bVar4;
          uVar9 = 0;
          pbVar11 = &_LC24;
          goto LAB_001029d6;
        }
        uVar8 = 0;
        pbVar11 = &_LC24;
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar12 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar12;
          goto LAB_00102974;
        }
        if (pbVar11 == (byte *)0x0) {
          uVar8 = **(uint **)(lVar5 + 0x10);
          uVar9 = **(uint **)(lVar6 + 0x10);
          if (uVar8 != 0 || uVar9 != 0) {
            lVar7 = 4;
            do {
              if (uVar9 == 0) goto LAB_001027e0;
              if (uVar8 == 0) break;
              if (uVar9 < uVar8) goto LAB_001027e0;
              if (uVar8 < uVar9) break;
              uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
              uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
              lVar7 = lVar7 + 4;
            } while (uVar9 != 0 || uVar8 != 0);
          }
          goto LAB_00102868;
        }
        uVar8 = (uint)(char)*pbVar11;
      }
      uVar9 = **(uint **)(lVar6 + 0x10);
      if (uVar9 != 0 || uVar8 != 0) {
        lVar5 = 0;
        do {
          if (uVar9 == 0) goto LAB_001027e0;
          if (uVar8 == 0) break;
          if (uVar9 < uVar8) goto LAB_001027e0;
          if (uVar8 < uVar9) break;
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
        } while (uVar9 != 0 || uVar8 != 0);
      }
    }
    goto LAB_00102868;
  }
  lVar14 = lVar10 + -2 >> 1;
  pSVar13 = param_4 + (param_1 + lVar14) * 8;
  while( true ) {
    StringName::StringName((StringName *)&local_48,pSVar13);
    adjust_heap(param_1,lVar14,lVar10,(StringName *)&local_48,param_4);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    if (lVar14 == 0) break;
    lVar14 = lVar14 + -1;
  }
  if (param_3 < param_2) goto LAB_00102726;
  goto LAB_0010289b;
LAB_001027e0:
  StringName::StringName((StringName *)&local_50,param_4 + lVar14 * 8);
  StringName::operator=(param_4 + lVar14 * 8,param_4 + param_1 * 8);
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  adjust_heap(param_1,0,lVar10,(StringName *)&local_48,param_4);
  if ((StringName::configured != '\0') &&
     (((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_50 != 0)))
     ) {
    StringName::unref();
  }
LAB_00102868:
  lVar14 = lVar14 + 1;
  if (param_2 <= lVar14) goto code_r0x00102875;
  goto LAB_00102760;
code_r0x00102875:
  if (lVar10 < 2) goto LAB_0010293b;
LAB_0010289b:
  pSVar13 = param_4 + param_3 * 8 + -8;
  lVar10 = (param_3 + -1) - param_1;
  do {
    StringName::StringName((StringName *)&local_50,pSVar13);
    StringName::operator=(pSVar13,param_4 + param_1 * 8);
    StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
    adjust_heap(param_1,0,lVar10,(StringName *)&local_48,param_4);
    if (((StringName::configured != '\0') &&
        ((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_50 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    bVar3 = 1 < lVar10;
    lVar10 = lVar10 + -1;
  } while (bVar3);
LAB_0010293b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<Pair<StringName, int>, ShaderLanguage::UniformOrderComparator, true>::adjust_heap(long,
   long, long, Pair<StringName, int>, Pair<StringName, int>*) const [clone .isra.0] */

void SortArray<Pair<StringName,int>,ShaderLanguage::UniformOrderComparator,true>::adjust_heap
               (long param_1,long param_2,long param_3,StringName *param_4,long param_5)

{
  StringName *pSVar1;
  StringName *pSVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_58;
  int local_50;
  long local_40;
  
  lVar5 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = param_2;
  if (lVar5 < param_3) {
    do {
      pSVar1 = (StringName *)((param_1 + lVar5) * 0x10 + param_5);
      pSVar2 = (StringName *)((lVar5 + -1 + param_1) * 0x10 + param_5);
      lVar3 = lVar5 + -1;
      lVar4 = lVar5;
      if (*(int *)(pSVar2 + 8) <= *(int *)(pSVar1 + 8)) {
        lVar4 = lVar5 + 1;
        pSVar2 = pSVar1;
        lVar3 = lVar5;
      }
      lVar5 = lVar4 * 2;
      pSVar1 = (StringName *)((lVar6 + param_1) * 0x10 + param_5);
      StringName::operator=(pSVar1,pSVar2);
      *(undefined4 *)(pSVar1 + 8) = *(undefined4 *)(pSVar2 + 8);
      lVar6 = lVar3;
    } while (lVar5 < param_3);
  }
  else {
    pSVar2 = (StringName *)((param_2 + param_1) * 0x10 + param_5);
    lVar3 = param_2;
  }
  pSVar1 = pSVar2;
  if (param_3 == lVar5) {
    lVar3 = param_3 + -1;
    pSVar1 = (StringName *)((param_1 + lVar3) * 0x10 + param_5);
    StringName::operator=(pSVar2,pSVar1);
    *(undefined4 *)(pSVar2 + 8) = *(undefined4 *)(pSVar1 + 8);
  }
  StringName::StringName((StringName *)&local_58,param_4);
  local_50 = *(int *)(param_4 + 8);
  lVar5 = (lVar3 + -1) - (lVar3 + -1 >> 0x3f);
  while (param_2 < lVar3) {
    lVar6 = lVar5 >> 1;
    pSVar2 = (StringName *)((param_1 + lVar6) * 0x10 + param_5);
    pSVar1 = (StringName *)((param_1 + lVar3) * 0x10 + param_5);
    if (local_50 <= *(int *)(pSVar2 + 8)) break;
    StringName::operator=(pSVar1,pSVar2);
    *(undefined4 *)(pSVar1 + 8) = *(undefined4 *)(pSVar2 + 8);
    lVar5 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
    pSVar1 = pSVar2;
    lVar3 = lVar6;
  }
  StringName::operator=(pSVar1,(StringName *)&local_58);
  bVar7 = StringName::configured != '\0';
  *(int *)(pSVar1 + 8) = local_50;
  if ((bVar7) && (local_58 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::MaterialStorage::global_shader_parameters_clear() */

void __thiscall RendererRD::MaterialStorage::global_shader_parameters_clear(MaterialStorage *this)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  
  if (*(long *)(this + 0x110) != 0) {
    if (*(int *)(this + 0x134) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x130) * 4);
      if (uVar1 != 0) {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x118) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x118) + lVar4) = 0;
            pvVar2 = *(void **)(*(long *)(this + 0x110) + lVar4 * 2);
            if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x60)] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            pvVar3 = *(void **)((long)pvVar2 + 0x18);
            if (pvVar3 != (void *)0x0) {
              if (*(int *)((long)pvVar2 + 0x3c) != 0) {
                if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar2 + 0x38) * 4) !=
                    0) {
                  memset(*(void **)((long)pvVar2 + 0x30),0,
                         (ulong)*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)((long)pvVar2 + 0x38) * 4) << 2);
                }
                *(undefined4 *)((long)pvVar2 + 0x3c) = 0;
              }
              Memory::free_static(pvVar3,false);
              Memory::free_static(*(void **)((long)pvVar2 + 0x28),false);
              Memory::free_static(*(void **)((long)pvVar2 + 0x20),false);
              Memory::free_static(*(void **)((long)pvVar2 + 0x30),false);
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar2,false);
            *(undefined8 *)(*(long *)(this + 0x110) + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
      }
      *(undefined4 *)(this + 0x134) = 0;
      *(undefined1 (*) [16])(this + 0x120) = (undefined1  [16])0x0;
    }
    return;
  }
  return;
}



/* SortArray<Pair<StringName, int>, ShaderLanguage::UniformOrderComparator, true>::introsort(long,
   long, Pair<StringName, int>*, long) const [clone .isra.0] */

void SortArray<Pair<StringName,int>,ShaderLanguage::UniformOrderComparator,true>::introsort
               (long param_1,long param_2,Pair_conflict *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  Pair_conflict *pPVar4;
  int iVar5;
  Pair_conflict *pPVar6;
  long lVar7;
  StringName *pSVar8;
  Pair_conflict *pPVar9;
  long lVar10;
  Pair_conflict *pPVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long *plVar14;
  StringName *local_70;
  long local_68;
  int local_60;
  long local_58;
  int local_50;
  long local_40;
  
  lVar10 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar10) {
    if (param_4 != 0) {
      plVar14 = &local_58;
      pPVar11 = param_3 + param_1 * 0x10;
      lVar7 = param_2;
LAB_00102efc:
      param_4 = param_4 + -1;
      iVar5 = *(int *)(pPVar11 + 8);
      pPVar9 = param_3 + lVar7 * 0x10 + -0x10;
      iVar1 = *(int *)(pPVar9 + 8);
      pPVar4 = param_3 + ((lVar10 >> 1) + param_1) * 0x10;
      iVar2 = *(int *)(pPVar4 + 8);
      if (iVar5 < iVar2) {
        pPVar6 = pPVar4;
        if ((iVar1 <= iVar2) && (pPVar6 = pPVar9, iVar1 <= iVar5)) {
          pPVar6 = pPVar11;
        }
      }
      else {
        pPVar6 = pPVar11;
        if ((iVar1 <= iVar5) && (pPVar6 = pPVar9, iVar1 <= iVar2)) {
          pPVar6 = pPVar4;
        }
      }
      StringName::StringName((StringName *)&local_68,(StringName *)pPVar6);
      iVar5 = *(int *)((StringName *)pPVar6 + 8);
      pPVar9 = pPVar11;
      lVar12 = param_1;
      lVar10 = lVar7;
      local_60 = iVar5;
      do {
        param_2 = lVar12;
        if (*(int *)(pPVar9 + 8) < iVar5) {
          if (lVar10 + -1 == lVar12) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0,lVar10,lVar12,
                             plVar14);
            iVar5 = local_60;
            goto LAB_00102f91;
          }
        }
        else {
LAB_00102f91:
          lVar7 = lVar7 + -1;
          pPVar4 = param_3 + lVar7 * 0x10;
          if (iVar5 < *(int *)(pPVar4 + 8)) {
            pPVar6 = param_3 + lVar7 * 0x10 + -0x10;
            while (param_1 != lVar7) {
              lVar7 = lVar7 + -1;
              pPVar4 = pPVar6;
              if (*(int *)(pPVar6 + 8) <= iVar5) goto LAB_00102ff4;
              pPVar6 = pPVar6 + -0x10;
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0,lVar10,param_2,
                             plVar14);
          }
LAB_00102ff4:
          if (lVar7 <= lVar12) goto LAB_00103090;
          local_58 = *(long *)pPVar9;
          local_50 = *(int *)(pPVar9 + 8);
          *(long *)pPVar9 = 0;
          if (*(long *)pPVar4 != 0) {
            StringName::unref();
            *(long *)pPVar9 = *(long *)pPVar4;
            *(long *)pPVar4 = 0;
          }
          *(undefined4 *)(pPVar9 + 8) = *(undefined4 *)(pPVar4 + 8);
          if (local_58 != 0) {
            StringName::unref();
            lVar3 = local_58;
            local_58 = 0;
            *(long *)pPVar4 = lVar3;
          }
          bVar13 = StringName::configured != '\0';
          *(int *)(pPVar4 + 8) = local_50;
          iVar5 = local_60;
          if ((bVar13) && (local_58 != 0)) {
            StringName::unref();
            iVar5 = local_60;
          }
        }
        pPVar9 = pPVar9 + 0x10;
        lVar12 = lVar12 + 1;
      } while( true );
    }
LAB_0010313e:
    local_70 = (StringName *)&local_68;
    lVar7 = lVar10 + -2 >> 1;
    pSVar8 = (StringName *)(param_3 + (param_1 + lVar7) * 0x10);
    while( true ) {
      StringName::StringName((StringName *)&local_58,pSVar8);
      local_50 = *(int *)(pSVar8 + 8);
      adjust_heap(param_1,lVar7,lVar10,(StringName *)&local_58,param_3);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      pSVar8 = pSVar8 + -0x10;
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
    }
    pSVar8 = (StringName *)(param_3 + param_1 * 0x10);
    pPVar11 = param_3 + param_2 * 0x10 + -0x10;
    lVar10 = (param_2 + -1) - param_1;
    do {
      StringName::StringName(local_70,(StringName *)pPVar11);
      local_60 = *(int *)((StringName *)pPVar11 + 8);
      StringName::operator=((StringName *)pPVar11,pSVar8);
      *(undefined4 *)((StringName *)pPVar11 + 8) = *(undefined4 *)(pSVar8 + 8);
      StringName::StringName((StringName *)&local_58,local_70);
      local_50 = local_60;
      adjust_heap(param_1,0,lVar10,(StringName *)&local_58,param_3);
      if ((StringName::configured != '\0') &&
         (((local_58 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_68 != 0)))) {
        StringName::unref();
      }
      pPVar11 = (Pair_conflict *)((StringName *)pPVar11 + -0x10);
      bVar13 = 1 < lVar10;
      lVar10 = lVar10 + -1;
    } while (bVar13);
  }
LAB_00103278:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00103090:
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  introsort(lVar12,lVar10,param_3,param_4);
  lVar10 = lVar12 - param_1;
  if (lVar10 < 0x11) goto LAB_00103278;
  lVar7 = lVar12;
  if (param_4 == 0) goto LAB_0010313e;
  goto LAB_00102efc;
}



/* HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >::erase(RID const&) [clone
   .isra.0] */

void __thiscall
HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase
          (HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *this,RID *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  uint *puVar39;
  ulong uVar40;
  uint *puVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  
  lVar6 = *(long *)this;
  if ((lVar6 != 0) && (*(int *)(this + 0x24) != 0)) {
    lVar7 = *(long *)(this + 0x18);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar42 = CONCAT44(0,uVar31);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar32 = *(long *)param_1 * 0x3ffff - 1;
    uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
    uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
    uVar32 = uVar32 >> 0x16 ^ uVar32;
    uVar40 = uVar32 & 0xffffffff;
    if ((int)uVar32 == 0) {
      uVar40 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar40 * lVar8;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar42;
    lVar37 = SUB168(auVar11 * auVar21,8);
    uVar44 = *(uint *)(lVar7 + lVar37 * 4);
    iVar35 = SUB164(auVar11 * auVar21,8);
    if (uVar44 != 0) {
      uVar33 = 0;
      do {
        if ((uint)uVar40 == uVar44) {
          lVar9 = *(long *)(this + 8);
          uVar44 = *(uint *)(lVar9 + lVar37 * 4);
          uVar32 = (ulong)uVar44;
          if (*(long *)param_1 == *(long *)(lVar6 + uVar32 * 8)) {
            lVar10 = *(long *)(this + 0x10);
            puVar1 = (uint *)(lVar10 + uVar32 * 4);
            uVar33 = *puVar1;
            uVar40 = (ulong)uVar33;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(uVar33 + 1) * lVar8;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar42;
            lVar37 = SUB168(auVar15 * auVar25,8) * 4;
            uVar36 = SUB164(auVar15 * auVar25,8);
            uVar43 = (ulong)uVar36;
            puVar39 = (uint *)(lVar7 + lVar37);
            if ((*puVar39 == 0) ||
               (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)*puVar39 * lVar8, auVar26._8_8_ = 0,
               auVar26._0_8_ = uVar42, auVar17._8_8_ = 0,
               auVar17._0_8_ = (ulong)((uVar36 + uVar31) - SUB164(auVar16 * auVar26,8)) * lVar8,
               auVar27._8_8_ = 0, auVar27._0_8_ = uVar42, SUB164(auVar17 * auVar27,8) == 0)) {
              uVar43 = (ulong)uVar33;
            }
            else {
              while( true ) {
                puVar34 = (uint *)(lVar37 + lVar9);
                puVar4 = (uint *)(lVar9 + uVar40 * 4);
                puVar41 = (uint *)(uVar40 * 4 + lVar7);
                puVar2 = (undefined4 *)(lVar10 + (ulong)*puVar34 * 4);
                puVar3 = (undefined4 *)(lVar10 + (ulong)*puVar4 * 4);
                uVar5 = *puVar3;
                *puVar3 = *puVar2;
                *puVar2 = uVar5;
                uVar33 = *puVar39;
                *puVar39 = *puVar41;
                *puVar41 = uVar33;
                uVar33 = *puVar34;
                *puVar34 = *puVar4;
                *puVar4 = uVar33;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = (ulong)((int)uVar43 + 1) * lVar8;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = uVar42;
                uVar38 = SUB168(auVar20 * auVar30,8);
                lVar37 = uVar38 * 4;
                puVar39 = (uint *)(lVar7 + lVar37);
                if ((*puVar39 == 0) ||
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar39 * lVar8, auVar28._8_8_ = 0,
                   auVar28._0_8_ = uVar42, auVar19._8_8_ = 0,
                   auVar19._0_8_ =
                        (ulong)((SUB164(auVar20 * auVar30,8) + uVar31) - SUB164(auVar18 * auVar28,8)
                               ) * lVar8, auVar29._8_8_ = 0, auVar29._0_8_ = uVar42,
                   SUB164(auVar19 * auVar29,8) == 0)) break;
                uVar40 = uVar43;
                uVar43 = uVar38 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar7 + uVar43 * 4) = 0;
            uVar31 = *(int *)(this + 0x24) - 1;
            *(uint *)(this + 0x24) = uVar31;
            if (uVar31 <= uVar44) {
              return;
            }
            uVar33 = *(uint *)(lVar10 + (ulong)uVar31 * 4);
            *(undefined8 *)(lVar6 + uVar32 * 8) = *(undefined8 *)(lVar6 + (ulong)uVar31 * 8);
            *puVar1 = uVar33;
            *(uint *)(lVar9 + (ulong)*(uint *)(lVar10 + (ulong)*(uint *)(this + 0x24) * 4) * 4) =
                 uVar44;
            return;
          }
        }
        uVar33 = uVar33 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar8;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar42;
        lVar37 = SUB168(auVar12 * auVar22,8);
        uVar44 = *(uint *)(lVar7 + lVar37 * 4);
        iVar35 = SUB164(auVar12 * auVar22,8);
      } while ((uVar44 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar8, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar42, auVar14._8_8_ = 0,
              auVar14._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar13 * auVar23,8)) * lVar8,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar42, uVar33 <= SUB164(auVar14 * auVar24,8)));
    }
  }
  return;
}



/* RendererRD::MaterialStorage::ShaderData::is_parameter_texture(StringName const&) const */

uint __thiscall
RendererRD::MaterialStorage::ShaderData::is_parameter_texture(ShaderData *this,StringName *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  
  if (*(long *)(this + 0x18) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x3c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x38) * 8);
    if (*(long *)param_1 == 0) {
      uVar20 = StringName::get_empty_hash();
    }
    else {
      uVar20 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar26 = CONCAT44(0,uVar1);
    lVar28 = *(long *)(this + 0x20);
    if (uVar20 == 0) {
      uVar20 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar20 * lVar2;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar26;
    lVar23 = SUB168(auVar3 * auVar11,8);
    uVar27 = *(uint *)(lVar28 + lVar23 * 4);
    uVar25 = (ulong)uVar27;
    iVar21 = SUB164(auVar3 * auVar11,8);
    if (uVar27 != 0) {
      uVar27 = 0;
      do {
        if ((uVar20 == (uint)uVar25) &&
           (lVar23 = *(long *)(*(long *)(*(long *)(this + 0x18) + lVar23 * 8) + 0x10),
           lVar23 == *(long *)param_1)) {
          if ((*(long *)(this + 0x18) != 0) && (*(int *)(this + 0x3c) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
            uVar26 = CONCAT44(0,uVar1);
            lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x38) * 8);
            if (lVar23 == 0) {
              uVar20 = StringName::get_empty_hash();
              lVar28 = *(long *)(this + 0x20);
            }
            else {
              uVar20 = *(uint *)(lVar23 + 0x20);
            }
            if (uVar20 == 0) {
              uVar20 = 1;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar20 * lVar2;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar26;
            lVar23 = SUB168(auVar7 * auVar15,8);
            uVar27 = *(uint *)(lVar28 + lVar23 * 4);
            uVar22 = SUB164(auVar7 * auVar15,8);
            if (uVar27 != 0) {
              uVar24 = 0;
              do {
                if ((uVar20 == uVar27) &&
                   (*(long *)(*(long *)(*(long *)(this + 0x18) + lVar23 * 8) + 0x10) ==
                    *(long *)param_1)) {
                  return *(uint *)(*(long *)(*(long *)(this + 0x18) + (ulong)uVar22 * 8) + 0x18) >>
                         0x1f;
                }
                uVar24 = uVar24 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(uVar22 + 1) * lVar2;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar26;
                lVar23 = SUB168(auVar8 * auVar16,8);
                uVar27 = *(uint *)(lVar28 + lVar23 * 4);
                uVar22 = SUB164(auVar8 * auVar16,8);
              } while ((uVar27 != 0) &&
                      (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar27 * lVar2, auVar17._8_8_ = 0,
                      auVar17._0_8_ = uVar26, auVar10._8_8_ = 0,
                      auVar10._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar9 * auVar17,8)) * lVar2
                      , auVar18._8_8_ = 0, auVar18._0_8_ = uVar26,
                      uVar24 <= SUB164(auVar10 * auVar18,8)));
            }
          }
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        uVar27 = uVar27 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar21 + 1) * lVar2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar26;
        lVar23 = SUB168(auVar4 * auVar12,8);
        uVar22 = *(uint *)(lVar28 + lVar23 * 4);
        uVar25 = (ulong)uVar22;
        iVar21 = SUB164(auVar4 * auVar12,8);
      } while ((uVar22 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar25 * lVar2, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar26, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar21) - SUB164(auVar5 * auVar13,8)) * lVar2,
              auVar14._8_8_ = 0, auVar14._0_8_ = uVar26, uVar27 <= SUB164(auVar6 * auVar14,8)));
    }
  }
  return 0;
}



/* SortArray<StringName, StringName::AlphCompare, true>::introsort(long, long, StringName*, long)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::introsort
               (long param_1,long param_2,StringName *param_3,long param_4)

{
  long lVar1;
  StringName *pSVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  long local_138;
  long local_120;
  long local_100;
  long local_f8;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
LAB_001041ca:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_4 != 0) {
      lVar12 = param_2 * 8;
      lVar3 = param_2;
LAB_00103812:
      param_4 = param_4 + -1;
      pSVar2 = (StringName *)
               median_of_3(param_3 + param_1 * 8,param_3 + ((lVar1 >> 1) + param_1) * 8,
                           param_3 + lVar12 + -8);
      StringName::StringName((StringName *)&local_48,pSVar2);
      param_2 = partitioner(param_1,lVar3,(StringName *)&local_48,param_3);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      lVar1 = lVar3 - param_2;
      if (0x10 < lVar1) {
        if (param_4 != 0) {
          lVar12 = param_4;
          lVar4 = lVar3;
LAB_001038d1:
          do {
            lVar12 = lVar12 + -1;
            pSVar2 = (StringName *)
                     median_of_3(param_3 + param_2 * 8,param_3 + ((lVar1 >> 1) + param_2) * 8,
                                 param_3 + lVar4 * 8 + -8);
            StringName::StringName((StringName *)&local_48,pSVar2);
            lVar3 = partitioner(param_2,lVar4,(StringName *)&local_48,param_3);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) {
              if (lVar12 != 0) {
                lVar13 = lVar12;
                local_138 = lVar4;
LAB_00103992:
                do {
                  lVar13 = lVar13 + -1;
                  pSVar2 = (StringName *)
                           median_of_3(param_3 + lVar3 * 8,param_3 + ((lVar1 >> 1) + lVar3) * 8,
                                       param_3 + local_138 * 8 + -8);
                  StringName::StringName((StringName *)&local_48,pSVar2);
                  lVar4 = partitioner(lVar3,local_138,(StringName *)&local_48,param_3);
                  if ((StringName::configured != '\0') && (local_48 != 0)) {
                    StringName::unref();
                  }
                  lVar1 = local_138 - lVar4;
                  if (0x10 < lVar1) {
                    if (lVar13 != 0) {
                      lVar11 = lVar13;
LAB_00103a4c:
                      do {
                        lVar11 = lVar11 + -1;
                        lVar9 = local_138 * 8;
                        pSVar2 = (StringName *)
                                 median_of_3(param_3 + lVar4 * 8,
                                             param_3 + ((lVar1 >> 1) + lVar4) * 8,
                                             param_3 + lVar9 + -8);
                        StringName::StringName((StringName *)&local_48,pSVar2);
                        lVar5 = partitioner(lVar4,local_138,(StringName *)&local_48,param_3);
                        if ((StringName::configured != '\0') && (local_48 != 0)) {
                          StringName::unref();
                        }
                        lVar1 = local_138 - lVar5;
                        if (0x10 < lVar1) {
                          lVar6 = local_138;
                          if (lVar11 != 0) {
                            lVar7 = local_138;
                            local_100 = lVar11;
                            do {
                              local_100 = local_100 + -1;
                              pSVar2 = (StringName *)
                                       median_of_3(param_3 + lVar5 * 8,
                                                   param_3 + ((lVar1 >> 1) + lVar5) * 8,
                                                   param_3 + lVar9 + -8);
                              StringName::StringName((StringName *)&local_48,pSVar2);
                              lVar6 = partitioner(lVar5,lVar7,(StringName *)&local_48,param_3);
                              if ((StringName::configured != '\0') && (local_48 != 0)) {
                                StringName::unref();
                              }
                              lVar1 = lVar7 - lVar6;
                              if (0x10 < lVar1) {
                                if (local_100 != 0) {
                                  lVar8 = lVar7;
                                  local_120 = local_100;
                                  do {
                                    local_120 = local_120 + -1;
                                    pSVar2 = (StringName *)
                                             median_of_3(param_3 + lVar6 * 8,
                                                         param_3 + ((lVar1 >> 1) + lVar6) * 8,
                                                         param_3 + lVar9 + -8);
                                    StringName::StringName((StringName *)&local_48,pSVar2);
                                    lVar7 = partitioner(lVar6,lVar8,(StringName *)&local_48,param_3)
                                    ;
                                    if ((StringName::configured != '\0') && (local_48 != 0)) {
                                      StringName::unref();
                                    }
                                    lVar1 = lVar8 - lVar7;
                                    if (0x10 < lVar1) {
                                      if (local_120 == 0) {
LAB_00103f9e:
                                        partial_sort(lVar7,lVar8,lVar8,param_3);
                                      }
                                      else {
                                        lVar9 = lVar8;
                                        local_138 = local_120;
                                        do {
                                          while( true ) {
                                            local_138 = local_138 + -1;
                                            lVar14 = lVar9 * 8;
                                            pSVar2 = (StringName *)
                                                     median_of_3(param_3 + lVar7 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar7) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName((StringName *)&local_48,pSVar2);
                                            lVar8 = partitioner(lVar7,lVar9,(StringName *)&local_48,
                                                                param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (0x10 < lVar1) break;
LAB_00103f0e:
                                            lVar1 = lVar8 - lVar7;
                                            if (lVar1 < 0x11) {
                                              lVar1 = lVar7 - lVar6;
                                              if (lVar1 < 0x11) goto LAB_00103ec0;
                                              goto LAB_00103f69;
                                            }
                                            lVar9 = lVar8;
                                            if (local_138 == 0) goto LAB_00103f9e;
                                          }
                                          if (local_138 == 0) {
LAB_00103efd:
                                            partial_sort(lVar8,lVar9,lVar9,param_3);
                                            goto LAB_00103f0e;
                                          }
                                          lVar10 = lVar9;
                                          local_f8 = local_138;
                                          while( true ) {
                                            local_f8 = local_f8 + -1;
                                            pSVar2 = (StringName *)
                                                     median_of_3(param_3 + lVar8 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar8) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName((StringName *)&local_48,pSVar2);
                                            lVar9 = partitioner(lVar8,lVar10,(StringName *)&local_48
                                                                ,param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar10 - lVar9;
                                            if (0x10 < lVar1) {
                                              if (local_f8 != 0) {
                                                lVar14 = local_f8;
                                                lVar15 = lVar10;
                                                do {
                                                  lVar14 = lVar14 + -1;
                                                  pSVar2 = (StringName *)
                                                           median_of_3(param_3 + lVar9 * 8,
                                                                       param_3 + ((lVar1 >> 1) +
                                                                                 lVar9) * 8,
                                                                       param_3 + lVar15 * 8 + -8);
                                                  StringName::StringName
                                                            ((StringName *)&local_48,pSVar2);
                                                  lVar10 = partitioner(lVar9,lVar15,
                                                                       (StringName *)&local_48,
                                                                       param_3);
                                                  if ((StringName::configured != '\0') &&
                                                     (local_48 != 0)) {
                                                    StringName::unref();
                                                  }
                                                  introsort(lVar10,lVar15,param_3,lVar14);
                                                  lVar1 = lVar10 - lVar9;
                                                  if (lVar1 < 0x11) {
                                                    lVar1 = lVar9 - lVar8;
                                                    if (lVar1 < 0x11) goto LAB_00103f0e;
                                                    goto LAB_00103e94;
                                                  }
                                                  lVar15 = lVar10;
                                                } while (lVar14 != 0);
                                              }
                                              partial_sort(lVar9,lVar10,lVar10,param_3);
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (lVar1 < 0x11) break;
                                            if (local_f8 == 0) goto LAB_00103efd;
LAB_00103e94:
                                            lVar14 = lVar9 * 8;
                                            lVar10 = lVar9;
                                          }
                                          lVar1 = lVar8 - lVar7;
                                          lVar9 = lVar8;
                                        } while (0x10 < lVar1);
                                      }
                                    }
                                    lVar1 = lVar7 - lVar6;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar6 - lVar5;
                                      if (lVar1 < 0x11) goto LAB_00103fe7;
                                      goto LAB_00103ee1;
                                    }
                                    if (local_120 == 0) break;
LAB_00103f69:
                                    lVar9 = lVar7 * 8;
                                    lVar8 = lVar7;
                                  } while( true );
                                }
                                partial_sort(lVar6,lVar7,lVar7,param_3);
                              }
LAB_00103ec0:
                              lVar1 = lVar6 - lVar5;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar5 - lVar4;
                                local_138 = lVar5;
                                if (lVar1 < 0x11) goto LAB_001040a0;
                                goto LAB_00103a4c;
                              }
                              if (local_100 == 0) break;
LAB_00103ee1:
                              lVar9 = lVar6 * 8;
                              lVar7 = lVar6;
                            } while( true );
                          }
                          partial_sort(lVar5,lVar6,lVar6,param_3);
                        }
LAB_00103fe7:
                        lVar1 = lVar5 - lVar4;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar4 - lVar3;
                          local_138 = lVar4;
                          if (lVar1 < 0x11) goto LAB_00104131;
                          goto LAB_00103992;
                        }
                        local_138 = lVar5;
                      } while (lVar11 != 0);
                    }
                    partial_sort(lVar4,local_138,local_138,param_3);
                  }
LAB_001040a0:
                  lVar1 = lVar4 - lVar3;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar3 - param_2;
                    lVar4 = lVar3;
                    if (lVar1 < 0x11) goto LAB_001041be;
                    goto LAB_001038d1;
                  }
                  local_138 = lVar4;
                } while (lVar13 != 0);
              }
              partial_sort(lVar3,lVar4,lVar4,param_3);
            }
LAB_00104131:
            lVar1 = lVar3 - param_2;
            if (lVar1 < 0x11) goto LAB_001041be;
            lVar4 = lVar3;
            if (lVar12 == 0) break;
          } while( true );
        }
        partial_sort(param_2,lVar3,lVar3,param_3);
      }
      lVar1 = param_2 - param_1;
      if (0x10 < lVar1) {
        if (param_4 != 0) goto LAB_0010419d;
        goto LAB_001041fc;
      }
      goto LAB_001041ca;
    }
LAB_001041fc:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      partial_sort(param_1,param_2,param_2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001041be:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) goto LAB_001041ca;
LAB_0010419d:
  lVar12 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_00103812;
}



/* CowData<RID>::_ref(CowData<RID> const&) [clone .part.0] */

void __thiscall CowData<RID>::_ref(CowData<RID> *this,CowData *param_1)

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



/* RendererRD::MaterialStorage::ShaderData::set_path_hint(String const&) */

void __thiscall
RendererRD::MaterialStorage::ShaderData::set_path_hint(ShaderData *this,String *param_1)

{
  if (*(long *)(this + 8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)param_1);
    return;
  }
  return;
}



/* RendererRD::MaterialStorage::shader_get_code(RID) const */

CowData<char32_t> *
RendererRD::MaterialStorage::shader_get_code(CowData<char32_t> *param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x1ec))) {
    lVar1 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x1e8)) * 0x80 +
            *(long *)(*(long *)(param_2 + 0x1d8) +
                     ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x1e8)) * 8);
    if (*(int *)(lVar1 + 0x78) == (int)(param_3 >> 0x20)) {
      *(undefined8 *)param_1 = 0;
      if (*(long *)(lVar1 + 8) != 0) {
        CowData<char32_t>::_ref(param_1,(CowData *)(lVar1 + 8));
      }
      return param_1;
    }
    if (*(int *)(lVar1 + 0x78) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shader_get_code","servers/rendering/renderer_rd/storage_rd/material_storage.cpp"
                   ,0x7f7,"Parameter \"shader\" is null.",0,0);
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* RendererRD::MaterialStorage::shader_set_path_hint(RID, String const&) */

void __thiscall
RendererRD::MaterialStorage::shader_set_path_hint
          (MaterialStorage *this,ulong param_2,CowData *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1ec))) {
    plVar2 = (long *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x80 +
                     *(long *)(*(long *)(this + 0x1d8) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
    if ((int)plVar2[0xf] == (int)(param_2 >> 0x20)) {
      if (plVar2[2] != *(long *)param_3) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(plVar2 + 2),param_3);
      }
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        if (*(code **)*puVar1 != ShaderData::set_path_hint) {
                    /* WARNING: Could not recover jumptable at 0x00104589. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar1)(puVar1,param_3);
          return;
        }
        if (puVar1[1] != *(long *)param_3) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 1),param_3);
          return;
        }
      }
      return;
    }
    if ((int)plVar2[0xf] + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shader_set_path_hint",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x7ed,
                   "Parameter \"shader\" is null.",0,0);
  return;
}



/* HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > >::erase(int const&) [clone .isra.0] */

void __thiscall
HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
::erase(HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
        *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  uint uVar37;
  uint *puVar38;
  ulong uVar39;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar33 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar39 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar28 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
    uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
    uVar32 = uVar28 ^ uVar28 >> 0x10;
    if (uVar28 == uVar28 >> 0x10) {
      uVar32 = 1;
      uVar30 = uVar7;
    }
    else {
      uVar30 = uVar32 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar30;
    uVar30 = SUB168(auVar10 * auVar19,8);
    uVar28 = *(uint *)(lVar8 + uVar30 * 4);
    uVar34 = (ulong)SUB164(auVar10 * auVar19,8);
    if (uVar28 != 0) {
      uVar37 = 0;
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = ((int)uVar34 + 1) * uVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        uVar31 = SUB168(auVar13 * auVar22,8);
        uVar29 = SUB164(auVar13 * auVar22,8);
        if ((uVar32 == uVar28) && (uVar33 == *(uint *)(*(long *)(lVar6 + uVar30 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar8 + uVar31 * 4);
          uVar33 = *puVar38;
          if ((uVar33 != 0) &&
             (auVar14._8_8_ = 0, auVar14._0_8_ = uVar33 * uVar7, auVar23._8_8_ = 0,
             auVar23._0_8_ = uVar39, auVar15._8_8_ = 0,
             auVar15._0_8_ = ((uVar29 + uVar5) - SUB164(auVar14 * auVar23,8)) * uVar7,
             auVar24._8_8_ = 0, auVar24._0_8_ = uVar39, uVar30 = (ulong)uVar29, uVar35 = uVar34,
             SUB164(auVar15 * auVar24,8) != 0)) {
            while( true ) {
              uVar34 = uVar30;
              puVar1 = (uint *)(lVar8 + uVar35 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar33;
              puVar3 = (undefined8 *)(lVar6 + uVar35 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = ((int)uVar34 + 1) * uVar7;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar39;
              uVar31 = SUB168(auVar18 * auVar27,8);
              puVar38 = (uint *)(lVar8 + uVar31 * 4);
              uVar33 = *puVar38;
              if ((uVar33 == 0) ||
                 (auVar16._8_8_ = 0, auVar16._0_8_ = uVar33 * uVar7, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar39, auVar17._8_8_ = 0,
                 auVar17._0_8_ =
                      ((SUB164(auVar18 * auVar27,8) + uVar5) - SUB164(auVar16 * auVar25,8)) * uVar7,
                 auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, SUB164(auVar17 * auVar26,8) == 0))
              break;
              uVar30 = uVar31 & 0xffffffff;
              uVar35 = uVar34;
            }
          }
          plVar4 = (long *)(lVar6 + uVar34 * 8);
          *(undefined4 *)(lVar8 + uVar34 * 4) = 0;
          plVar36 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar36) {
            *(long *)(this + 0x18) = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar36) {
            *(long *)(this + 0x20) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((long *)plVar36[1] != (long *)0x0) {
            *(long *)plVar36[1] = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*plVar36 != 0) {
            *(long *)(*plVar36 + 8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar34 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar28 = *(uint *)(lVar8 + uVar31 * 4);
        uVar34 = uVar31 & 0xffffffff;
        uVar37 = uVar37 + 1;
      } while ((uVar28 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = uVar28 * uVar7, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar39, auVar12._8_8_ = 0,
              auVar12._0_8_ = ((uVar5 + uVar29) - SUB164(auVar11 * auVar20,8)) * uVar7,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar39, uVar30 = uVar31,
              uVar37 <= SUB164(auVar12 * auVar21,8)));
    }
  }
  return;
}



/* HashMap<StringName, HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > > > > >::erase(StringName const&) [clone
   .isra.0] */

void __thiscall
HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
::erase(HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
        *this,StringName *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  void *pvVar37;
  uint uVar38;
  long *plVar39;
  
  if (*(long *)(this + 8) == 0) {
    return;
  }
  if (*(int *)(this + 0x2c) == 0) {
    return;
  }
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar36 = CONCAT44(0,uVar6);
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  if (*(long *)param_1 == 0) {
    uVar30 = StringName::get_empty_hash();
  }
  else {
    uVar30 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar7 = *(long *)(this + 0x10);
  if (uVar30 == 0) {
    uVar30 = 1;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (ulong)uVar30 * lVar35;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar36;
  lVar34 = SUB168(auVar10 * auVar20,8);
  uVar32 = *(uint *)(lVar7 + lVar34 * 4);
  uVar31 = SUB164(auVar10 * auVar20,8);
  if (uVar32 == 0) {
    return;
  }
  uVar38 = 0;
  while ((uVar30 != uVar32 ||
         (lVar8 = *(long *)(this + 8),
         *(long *)(*(long *)(lVar8 + lVar34 * 8) + 0x10) != *(long *)param_1))) {
    uVar38 = uVar38 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(uVar31 + 1) * lVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar36;
    lVar34 = SUB168(auVar11 * auVar21,8);
    uVar32 = *(uint *)(lVar7 + lVar34 * 4);
    uVar31 = SUB164(auVar11 * auVar21,8);
    if (uVar32 == 0) {
      return;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar32 * lVar35;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar36;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((uVar6 + uVar31) - SUB164(auVar12 * auVar22,8)) * lVar35;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar36;
    if (SUB164(auVar13 * auVar23,8) < uVar38) {
      return;
    }
  }
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar36 = CONCAT44(0,uVar6);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (ulong)(uVar31 + 1) * lVar35;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar36;
  lVar34 = SUB168(auVar14 * auVar24,8);
  puVar1 = (uint *)(lVar7 + lVar34 * 4);
  uVar32 = SUB164(auVar14 * auVar24,8);
  uVar30 = *puVar1;
  if (uVar30 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar30 * lVar35;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar36;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar6 + uVar32) - SUB164(auVar15 * auVar25,8)) * lVar35;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar36;
    iVar33 = SUB164(auVar16 * auVar26,8);
    while (uVar38 = uVar32, iVar33 != 0) {
      puVar2 = (uint *)(lVar7 + (ulong)uVar31 * 4);
      *puVar1 = *puVar2;
      puVar3 = (undefined8 *)(lVar8 + lVar34 * 8);
      *puVar2 = uVar30;
      puVar4 = (undefined8 *)(lVar8 + (ulong)uVar31 * 8);
      uVar9 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar9;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = (ulong)(uVar38 + 1) * lVar35;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar36;
      lVar34 = SUB168(auVar19 * auVar29,8);
      puVar1 = (uint *)(lVar7 + lVar34 * 4);
      uVar32 = SUB164(auVar19 * auVar29,8);
      uVar30 = *puVar1;
      uVar31 = uVar38;
      if (uVar30 == 0) break;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)uVar30 * lVar35;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar36;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (ulong)((uVar32 + uVar6) - SUB164(auVar17 * auVar27,8)) * lVar35;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar36;
      iVar33 = SUB164(auVar18 * auVar28,8);
    }
  }
  uVar36 = (ulong)uVar31;
  plVar5 = (long *)(lVar8 + uVar36 * 8);
  *(undefined4 *)(lVar7 + uVar36 * 4) = 0;
  plVar39 = (long *)*plVar5;
  if (*(long **)(this + 0x18) == plVar39) {
    *(long *)(this + 0x18) = *plVar39;
    plVar39 = (long *)*plVar5;
  }
  if (*(long **)(this + 0x20) == plVar39) {
    *(long *)(this + 0x20) = plVar39[1];
    plVar39 = (long *)*plVar5;
  }
  if ((long *)plVar39[1] != (long *)0x0) {
    *(long *)plVar39[1] = *plVar39;
    plVar39 = (long *)*plVar5;
  }
  if (*plVar39 != 0) {
    *(long *)(*plVar39 + 8) = plVar39[1];
    plVar39 = (long *)*plVar5;
  }
  pvVar37 = (void *)plVar39[4];
  if (pvVar37 != (void *)0x0) {
    if (*(int *)((long)plVar39 + 0x44) != 0) {
      uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar39 + 8) * 4);
      if (uVar6 == 0) {
        *(undefined4 *)((long)plVar39 + 0x44) = 0;
        *(undefined1 (*) [16])(plVar39 + 6) = (undefined1  [16])0x0;
      }
      else {
        lVar35 = 0;
        do {
          if (*(int *)(plVar39[5] + lVar35) != 0) {
            *(int *)(plVar39[5] + lVar35) = 0;
            Memory::free_static(*(void **)((long)pvVar37 + lVar35 * 2),false);
            pvVar37 = (void *)plVar39[4];
            *(undefined8 *)((long)pvVar37 + lVar35 * 2) = 0;
          }
          lVar35 = lVar35 + 4;
        } while (lVar35 != (ulong)uVar6 << 2);
        *(undefined4 *)((long)plVar39 + 0x44) = 0;
        *(undefined1 (*) [16])(plVar39 + 6) = (undefined1  [16])0x0;
        if (pvVar37 == (void *)0x0) goto LAB_00104b15;
      }
    }
    Memory::free_static(pvVar37,false);
    Memory::free_static((void *)plVar39[5],false);
  }
LAB_00104b15:
  if ((StringName::configured != '\0') && (plVar39[2] != 0)) {
    StringName::unref();
  }
  Memory::free_static(plVar39,false);
  *(undefined8 *)(*(long *)(this + 8) + uVar36 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = __n;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RendererRD::MaterialStorage::global_shader_parameter_get(StringName const&) const */

StringName * RendererRD::MaterialStorage::global_shader_parameter_get(StringName *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  code *pcVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  long *in_RDX;
  long lVar22;
  long in_RSI;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  
  lVar20 = Engine::get_singleton();
  if (*(char *)(lVar20 + 0xc0) == '\0') {
    _err_print_error("global_shader_parameter_get",
                     "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x68c,
                     "Method/function failed. Returning: Variant()",
                     "This function should never be used outside the editor, it can severely damage performance."
                     ,0,0);
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    if ((*(long *)(in_RSI + 0x110) != 0) && (*(int *)(in_RSI + 0x134) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x130) * 4);
      lVar20 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x130) * 8);
      if (*in_RDX == 0) {
        uVar19 = StringName::get_empty_hash();
      }
      else {
        uVar19 = *(uint *)(*in_RDX + 0x20);
      }
      uVar24 = CONCAT44(0,uVar1);
      lVar27 = *(long *)(in_RSI + 0x118);
      if (uVar19 == 0) {
        uVar19 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar19 * lVar20;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar24;
      lVar22 = SUB168(auVar2 * auVar10,8);
      uVar23 = *(uint *)(lVar27 + lVar22 * 4);
      iVar21 = SUB164(auVar2 * auVar10,8);
      if (uVar23 != 0) {
        uVar25 = 0;
        do {
          if ((uVar19 == uVar23) &&
             (lVar22 = *(long *)(*(long *)(*(long *)(in_RSI + 0x110) + lVar22 * 8) + 0x10),
             lVar22 == *in_RDX)) {
            if ((*(long *)(in_RSI + 0x110) != 0) && (*(int *)(in_RSI + 0x134) != 0)) {
              uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x130) * 4);
              uVar24 = CONCAT44(0,uVar1);
              lVar20 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x130) * 8);
              if (lVar22 == 0) {
                uVar19 = StringName::get_empty_hash();
                lVar27 = *(long *)(in_RSI + 0x118);
              }
              else {
                uVar19 = *(uint *)(lVar22 + 0x20);
              }
              if (uVar19 == 0) {
                uVar19 = 1;
              }
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)uVar19 * lVar20;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = uVar24;
              lVar22 = SUB168(auVar6 * auVar14,8);
              uVar23 = *(uint *)(lVar27 + lVar22 * 4);
              uVar25 = SUB164(auVar6 * auVar14,8);
              if (uVar23 != 0) {
                uVar26 = 0;
                do {
                  if ((uVar19 == uVar23) &&
                     (*(long *)(*(long *)(*(long *)(in_RSI + 0x110) + lVar22 * 8) + 0x10) == *in_RDX
                     )) {
                    Variant::Variant((Variant *)param_1,
                                     (Variant *)
                                     (*(long *)(*(long *)(in_RSI + 0x110) + (ulong)uVar25 * 8) +
                                     0x48));
                    return param_1;
                  }
                  uVar26 = uVar26 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)(uVar25 + 1) * lVar20;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar24;
                  lVar22 = SUB168(auVar7 * auVar15,8);
                  uVar23 = *(uint *)(lVar27 + lVar22 * 4);
                  uVar25 = SUB164(auVar7 * auVar15,8);
                } while ((uVar23 != 0) &&
                        (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar23 * lVar20, auVar16._8_8_ = 0,
                        auVar16._0_8_ = uVar24, auVar9._8_8_ = 0,
                        auVar9._0_8_ = (ulong)((uVar1 + uVar25) - SUB164(auVar8 * auVar16,8)) *
                                       lVar20, auVar17._8_8_ = 0, auVar17._0_8_ = uVar24,
                        uVar26 <= SUB164(auVar9 * auVar17,8)));
              }
            }
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar18 = (code *)invalidInstructionException();
            (*pcVar18)();
          }
          uVar25 = uVar25 + 1;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)(iVar21 + 1) * lVar20;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar24;
          lVar22 = SUB168(auVar3 * auVar11,8);
          uVar23 = *(uint *)(lVar27 + lVar22 * 4);
          iVar21 = SUB164(auVar3 * auVar11,8);
        } while ((uVar23 != 0) &&
                (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar23 * lVar20, auVar12._8_8_ = 0,
                auVar12._0_8_ = uVar24, auVar5._8_8_ = 0,
                auVar5._0_8_ = (ulong)((uVar1 + iVar21) - SUB164(auVar4 * auVar12,8)) * lVar20,
                auVar13._8_8_ = 0, auVar13._0_8_ = uVar24, uVar25 <= SUB164(auVar5 * auVar13,8)));
      }
    }
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  return param_1;
}



/* RendererRD::MaterialStorage::ShaderData::get_instance_param_list(List<RendererMaterialStorage::InstanceShaderParam,
   DefaultAllocator>*) const */

void __thiscall
RendererRD::MaterialStorage::ShaderData::get_instance_param_list(ShaderData *this,List *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  char *__s;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  size_t sVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  long in_FS_OFFSET;
  bool bVar13;
  long local_f0;
  char *local_e8;
  size_t local_e0;
  long local_d8;
  undefined4 local_d0;
  long local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [8];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar2 = *(undefined8 **)(this + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    while( true ) {
      if (puVar2 == (undefined8 *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (*(int *)(puVar2 + 9) == 1) break;
LAB_00105130:
      puVar2 = (undefined8 *)*puVar2;
    }
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_60 = 0;
    local_90 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    ShaderLanguage::uniform_to_property_info((Uniform *)&local_e8);
    local_98 = CONCAT44(local_98._4_4_,local_e8._0_4_);
    uVar4 = local_90._0_8_;
    if (local_90._0_8_ != local_e0) {
      if (local_90._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_90._0_8_ - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = local_90._8_8_;
          local_90 = auVar6 << 0x40;
          Memory::free_static((void *)(uVar4 - 0x10),false);
        }
      }
      local_90._0_8_ = local_e0;
      local_e0 = 0;
    }
    if (local_90._8_8_ != local_d8) {
      StringName::unref();
      lVar3 = local_d8;
      local_d8 = 0;
      local_90._8_8_ = lVar3;
    }
    lVar5 = local_78;
    lVar3 = local_c8;
    local_80 = CONCAT44(local_80._4_4_,local_d0);
    if (local_78 == local_c8) {
      local_70 = local_c0;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
    }
    else {
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      local_78 = local_c8;
      local_70 = local_c0;
    }
    if ((StringName::configured != '\0') && (local_d8 != 0)) {
      StringName::unref();
    }
    sVar9 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 - 0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(sVar9 - 0x10),false);
      }
    }
    lVar3 = puVar2[2];
    if (lVar3 == 0) {
LAB_001055b1:
      local_f0 = 0;
      if (local_90._0_8_ != 0) {
LAB_001055bf:
        LOCK();
        plVar1 = (long *)(local_90._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          uVar4 = local_90._0_8_;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_90._8_8_;
          local_90 = auVar8 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
        goto LAB_0010532b;
      }
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_f0 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) == 0) goto LAB_001055b1;
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        do {
          lVar5 = *plVar1;
          if (lVar5 == 0) goto LAB_00105314;
          LOCK();
          lVar11 = *plVar1;
          bVar13 = lVar5 == lVar11;
          if (bVar13) {
            *plVar1 = lVar5 + 1;
            lVar11 = lVar5;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar11 != -1) {
          local_f0 = *(long *)(lVar3 + 0x10);
        }
      }
      else {
        local_e0 = strlen(__s);
        local_e8 = __s;
        String::parse_latin1((StrRange *)&local_f0);
      }
LAB_00105314:
      lVar3 = local_f0;
      if (local_90._0_8_ == local_f0) {
        if (local_f0 != 0) {
          LOCK();
          plVar1 = (long *)(local_f0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      else {
        if (local_90._0_8_ != 0) goto LAB_001055bf;
LAB_0010532b:
        local_90._0_8_ = local_f0;
      }
    }
    local_68 = *(undefined4 *)(puVar2 + 0xf);
    ShaderLanguage::constant_value_to_variant
              (local_b8,puVar2 + 7,*(undefined4 *)(puVar2 + 5),*(undefined4 *)(puVar2 + 6),
               *(undefined4 *)((long)puVar2 + 0x4c));
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    local_60 = CONCAT44(local_60._4_4_,local_b8[0]);
    if (*(long *)param_1 == 0) {
      pauVar12 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_1 = pauVar12;
      *(undefined4 *)pauVar12[1] = 0;
      *pauVar12 = (undefined1  [16])0x0;
    }
    puVar10 = (undefined4 *)operator_new(0x68,DefaultAllocator::alloc);
    *(undefined1 (*) [16])(puVar10 + 2) = (undefined1  [16])0x0;
    *puVar10 = 0;
    puVar10[6] = 0;
    *(undefined8 *)(puVar10 + 8) = 0;
    puVar10[10] = 6;
    puVar10[0xe] = 0;
    *(undefined8 *)(puVar10 + 0x18) = 0;
    *(undefined1 (*) [16])(puVar10 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar10 + 0x14) = (undefined1  [16])0x0;
    *puVar10 = (undefined4)local_98;
    if (local_90._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar10 + 2),(CowData *)local_90);
    }
    StringName::operator=((StringName *)(puVar10 + 4),(StringName *)(local_90 + 8));
    puVar10[6] = (undefined4)local_80;
    if (*(long *)(puVar10 + 8) != local_78) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar10 + 8),(CowData *)&local_78);
    }
    puVar10[10] = local_70;
    puVar10[0xc] = local_68;
    Variant::operator=((Variant *)(puVar10 + 0xe),(Variant *)&local_60);
    uVar4 = *(undefined8 *)(*(long *)param_1 + 8);
    *(long *)(puVar10 + 0x18) = *(long *)param_1;
    plVar1 = *(long **)param_1;
    *(undefined8 *)(puVar10 + 0x14) = 0;
    *(undefined8 *)(puVar10 + 0x16) = uVar4;
    if (plVar1[1] != 0) {
      *(undefined4 **)(plVar1[1] + 0x50) = puVar10;
    }
    plVar1[1] = (long)puVar10;
    if (*plVar1 == 0) {
      *plVar1 = (long)puVar10;
    }
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    lVar3 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_90._8_8_ != 0)) {
      StringName::unref();
    }
    uVar4 = local_90._0_8_;
    if (local_90._0_8_ == 0) goto LAB_00105130;
    LOCK();
    plVar1 = (long *)(local_90._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00105130;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_90._8_8_;
    local_90 = auVar7 << 0x40;
    Memory::free_static((void *)(uVar4 + -0x10),false);
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RendererRD::MaterialStorage::ShaderData::get_shader_uniform_list(List<PropertyInfo,
   DefaultAllocator>*) const */

void __thiscall
RendererRD::MaterialStorage::ShaderData::get_shader_uniform_list(ShaderData *this,List *param_1)

{
  StringName *pSVar1;
  uint uVar2;
  char *__s;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  StringName *this_00;
  undefined4 *puVar20;
  undefined1 (*pauVar21) [16];
  long lVar22;
  uint uVar23;
  ulong uVar24;
  StringName *pSVar25;
  uint uVar26;
  uint uVar27;
  StringName *pSVar28;
  long lVar29;
  long *plVar30;
  StringName *pSVar31;
  StringName *pSVar32;
  long in_FS_OFFSET;
  bool bVar33;
  String *local_f0;
  StringName *local_e8;
  uint local_c4;
  ulong local_a0;
  ulong local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  long local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  plVar30 = *(long **)(this + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar30 != (long *)0x0) {
    uVar17 = 0;
    uVar24 = 0;
    this_00 = (StringName *)0x0;
    do {
      if ((int)plVar30[9] == 0) {
        StringName::StringName((StringName *)&local_88,(StringName *)(plVar30 + 2));
        StringName::StringName((StringName *)&local_78,(StringName *)&local_88);
        local_70._0_4_ = *(undefined4 *)((long)plVar30 + 0x1c);
        if (uVar17 == (uint)uVar24) {
          uVar2 = uVar17 << 1;
          uVar17 = 1;
          if (uVar2 != 0) {
            uVar17 = uVar2;
          }
          this_00 = (StringName *)Memory::realloc_static(this_00,(ulong)uVar17 << 4,false);
          if (this_00 == (StringName *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
        }
        StringName::StringName(this_00 + uVar24 * 0x10,(StringName *)&local_78);
        bVar33 = StringName::configured != '\0';
        *(undefined4 *)(this_00 + uVar24 * 0x10 + 8) = local_70._0_4_;
        if ((bVar33) &&
           (((local_78 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
            (local_88 != (char *)0x0)))) {
          StringName::unref();
        }
        uVar24 = (ulong)((uint)uVar24 + 1);
      }
      plVar30 = (long *)*plVar30;
    } while (plVar30 != (long *)0x0);
    local_c4 = (uint)uVar24;
    lVar19 = (long)(int)local_c4;
    if (lVar19 != 0) {
      if (lVar19 == 1) {
        SortArray<Pair<StringName,int>,ShaderLanguage::UniformOrderComparator,true>::introsort
                  (0,1,(Pair_conflict *)this_00,0);
        local_c4 = 1;
      }
      else {
        lVar22 = 0;
        lVar29 = lVar19;
        do {
          lVar29 = lVar29 >> 1;
          lVar22 = lVar22 + 1;
        } while (lVar29 != 1);
        SortArray<Pair<StringName,int>,ShaderLanguage::UniformOrderComparator,true>::introsort
                  (0,lVar19,(Pair_conflict *)this_00,lVar22 * 2);
        pSVar32 = this_00 + 0x10;
        if (lVar19 < 0x11) {
          lVar29 = 1;
          pSVar28 = pSVar32;
          do {
            StringName::StringName((StringName *)&local_78,pSVar28);
            local_70._0_4_ = *(int *)(pSVar28 + 8);
            lVar22 = lVar29;
            pSVar31 = pSVar28;
            if (*(int *)(pSVar28 + 8) < *(int *)(this_00 + 8)) {
              do {
                StringName::operator=(pSVar31,pSVar31 + -0x10);
                *(undefined4 *)(pSVar31 + 8) = *(undefined4 *)(pSVar31 + -8);
                lVar22 = lVar22 + -1;
                pSVar31 = pSVar31 + -0x10;
              } while (lVar22 != 0);
              StringName::operator=(this_00,(StringName *)&local_78);
              *(undefined4 *)(this_00 + 8) = local_70._0_4_;
LAB_00105da0:
              if (StringName::configured != '\0') {
LAB_00105da4:
                if (local_78 != 0) {
                  StringName::unref();
                }
              }
            }
            else {
              StringName::StringName((StringName *)&local_88,(StringName *)&local_78);
              local_80 = CONCAT44(local_80._4_4_,local_70._0_4_);
              pSVar25 = pSVar28;
              if ((int)local_70._0_4_ < *(int *)(pSVar28 + -8)) {
                while (lVar22 = lVar22 + -1, lVar22 != 0) {
                  StringName::operator=(pSVar31,pSVar25 + -0x10);
                  *(undefined4 *)(pSVar31 + 8) = *(undefined4 *)(pSVar25 + -8);
                  if (*(int *)(pSVar31 + -0x18) <= (int)local_80) {
                    pSVar31 = this_00 + lVar22 * 0x10;
                    goto LAB_00106618;
                  }
                  pSVar31 = pSVar31 + -0x10;
                  pSVar25 = pSVar25 + -0x10;
                }
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                pSVar31 = pSVar32;
              }
LAB_00106618:
              StringName::operator=(pSVar31,(StringName *)&local_88);
              bVar33 = StringName::configured != '\0';
              *(int *)(pSVar31 + 8) = (int)local_80;
              if (bVar33) {
                if (local_88 != (char *)0x0) {
                  StringName::unref();
                  goto LAB_00105da0;
                }
                goto LAB_00105da4;
              }
            }
            lVar29 = lVar29 + 1;
            pSVar28 = pSVar28 + 0x10;
          } while (lVar19 != lVar29);
        }
        else {
          pSVar28 = pSVar32;
          lVar29 = 0;
          do {
            lVar22 = lVar29 + 1;
            StringName::StringName((StringName *)&local_78,pSVar28);
            local_70._0_4_ = *(int *)(pSVar28 + 8);
            pSVar31 = pSVar28;
            if (*(int *)(pSVar28 + 8) < *(int *)(this_00 + 8)) {
              do {
                pSVar25 = pSVar31 + -0x10;
                StringName::operator=(pSVar31,pSVar25);
                *(undefined4 *)(pSVar31 + 8) = *(undefined4 *)(pSVar31 + -8);
                pSVar31 = pSVar25;
              } while (this_00 != pSVar25);
              StringName::operator=(this_00,(StringName *)&local_78);
              *(undefined4 *)(this_00 + 8) = local_70._0_4_;
LAB_00105b1c:
              if (StringName::configured != '\0') {
LAB_00105b20:
                if (local_78 != 0) {
                  StringName::unref();
                }
              }
            }
            else {
              StringName::StringName((StringName *)&local_88,(StringName *)&local_78);
              local_80 = CONCAT44(local_80._4_4_,local_70._0_4_);
              pSVar25 = pSVar28;
              if ((int)local_70._0_4_ < *(int *)(pSVar28 + -8)) {
                while (lVar29 != 0) {
                  StringName::operator=(pSVar31,pSVar25 + -0x10);
                  *(undefined4 *)(pSVar31 + 8) = *(undefined4 *)(pSVar25 + -8);
                  if (*(int *)(pSVar31 + -0x18) <= (int)local_80) {
                    pSVar31 = this_00 + lVar29 * 0x10;
                    goto LAB_001066ef;
                  }
                  pSVar31 = pSVar31 + -0x10;
                  pSVar25 = pSVar25 + -0x10;
                  lVar29 = lVar29 + -1;
                }
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
                pSVar31 = pSVar32;
              }
LAB_001066ef:
              StringName::operator=(pSVar31,(StringName *)&local_88);
              bVar33 = StringName::configured != '\0';
              *(int *)(pSVar31 + 8) = (int)local_80;
              if (bVar33) {
                if (local_88 != (char *)0x0) {
                  StringName::unref();
                  goto LAB_00105b1c;
                }
                goto LAB_00105b20;
              }
            }
            pSVar28 = pSVar28 + 0x10;
            lVar29 = lVar22;
          } while (lVar22 != 0xf);
          local_e8 = this_00 + 0xf0;
          local_f0 = (String *)0x10;
          pSVar28 = this_00 + 0x100;
          do {
            StringName::StringName((StringName *)&local_78,pSVar28);
            local_70._0_4_ = *(int *)(pSVar28 + 8);
            pSVar31 = pSVar28;
            lVar29 = (long)local_f0 + -1;
            pSVar25 = local_e8;
            if (*(int *)(pSVar28 + 8) < *(int *)(pSVar28 + -8)) {
              do {
                lVar22 = lVar29 + -1;
                StringName::operator=(pSVar31,pSVar25);
                pSVar1 = pSVar25 + 8;
                pSVar25 = pSVar25 + (long)(pSVar28 + (-0x20 - (long)local_e8));
                *(undefined4 *)(pSVar31 + 8) = *(undefined4 *)pSVar1;
                if (*(int *)(pSVar31 + -0x18) <= (int)local_70._0_4_) {
                  pSVar31 = this_00 + lVar29 * 0x10;
                  goto LAB_00105c21;
                }
                pSVar31 = pSVar31 + -0x10;
                lVar29 = lVar22;
              } while (lVar22 != 0);
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              pSVar31 = pSVar32;
            }
LAB_00105c21:
            StringName::operator=(pSVar31,(StringName *)&local_78);
            bVar33 = StringName::configured != '\0';
            *(undefined4 *)(pSVar31 + 8) = local_70._0_4_;
            if ((bVar33) && (local_78 != 0)) {
              StringName::unref();
            }
            local_f0 = (String *)((long)local_f0 + 1);
            pSVar28 = pSVar28 + 0x10;
            local_e8 = local_e8 + 0x10;
          } while ((String *)lVar19 != local_f0);
        }
      }
      local_a0 = 0;
      uVar17 = 0;
      pSVar32 = this_00;
LAB_00105e01:
      if ((*(long *)(this + 0x18) == 0) || (*(int *)(this + 0x3c) == 0)) {
LAB_00106418:
        _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                         "FATAL: Condition \"!exists\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      uVar24 = CONCAT44(0,uVar2);
      lVar19 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x38) * 8);
      if (*(long *)pSVar32 == 0) {
        uVar18 = StringName::get_empty_hash();
      }
      else {
        uVar18 = *(uint *)(*(long *)pSVar32 + 0x20);
      }
      if (uVar18 == 0) {
        uVar18 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar18 * lVar19;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar24;
      lVar29 = SUB168(auVar3 * auVar7,8);
      uVar26 = *(uint *)(*(long *)(this + 0x20) + lVar29 * 4);
      uVar23 = SUB164(auVar3 * auVar7,8);
      if (uVar26 == 0) goto LAB_00106418;
      uVar27 = 0;
      while ((uVar18 != uVar26 ||
             (*(long *)(*(long *)(*(long *)(this + 0x18) + lVar29 * 8) + 0x10) != *(long *)pSVar32))
            ) {
        uVar27 = uVar27 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar23 + 1) * lVar19;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar24;
        lVar29 = SUB168(auVar4 * auVar8,8);
        uVar26 = *(uint *)(*(long *)(this + 0x20) + lVar29 * 4);
        uVar23 = SUB164(auVar4 * auVar8,8);
        if ((uVar26 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar26 * lVar19, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar24, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar2 + uVar23) - SUB164(auVar5 * auVar9,8)) * lVar19,
           auVar10._8_8_ = 0, auVar10._0_8_ = uVar24, SUB164(auVar6 * auVar10,8) < uVar27))
        goto LAB_00106418;
      }
      lVar19 = *(long *)(*(long *)(this + 0x18) + (ulong)uVar23 * 8);
      local_98 = 0;
      plVar30 = (long *)(*(long *)(lVar19 + 0x80) + -0x10);
      if (*(long *)(lVar19 + 0x80) != 0) {
        do {
          lVar29 = *plVar30;
          if (lVar29 == 0) goto LAB_00105f2b;
          LOCK();
          lVar22 = *plVar30;
          bVar33 = lVar29 == lVar22;
          if (bVar33) {
            *plVar30 = lVar29 + 1;
            lVar22 = lVar29;
          }
          UNLOCK();
        } while (!bVar33);
        if (lVar22 != -1) {
          local_98 = *(ulong *)(lVar19 + 0x80);
        }
      }
LAB_00105f2b:
      if (*(long *)(lVar19 + 0x88) != 0) {
        if (1 < *(uint *)(*(long *)(lVar19 + 0x88) + -8)) {
          operator+((char *)&local_78,(String *)&_LC52);
          String::operator+=((String *)&local_98,(String *)&local_78);
          lVar19 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar30 = (long *)(local_78 + -0x10);
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (*plVar30 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar19 + -0x10),false);
            }
          }
        }
      }
      local_e8 = (StringName *)&local_78;
      local_f0 = (String *)&local_98;
      cVar16 = String::operator!=(local_f0,(String *)&local_a0);
      if (cVar16 != '\0') {
        local_78 = 0;
        local_60 = 0;
        local_58 = 0;
        plVar30 = (long *)(local_98 - 0x10);
        local_50 = 0x40;
        local_70 = (undefined1  [16])0x0;
        if (local_98 != 0) {
          do {
            lVar19 = *plVar30;
            if (lVar19 == 0) goto LAB_00105ff9;
            LOCK();
            lVar29 = *plVar30;
            bVar33 = lVar19 == lVar29;
            if (bVar33) {
              *plVar30 = lVar19 + 1;
              lVar29 = lVar19;
            }
            UNLOCK();
          } while (!bVar33);
          if (lVar29 != -1) {
            local_70._8_8_ = 0;
            local_70._0_8_ = local_98;
          }
        }
LAB_00105ff9:
        if (*(long *)param_1 == 0) {
          pauVar21 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_1 = pauVar21;
          *(undefined4 *)pauVar21[1] = 0;
          *pauVar21 = (undefined1  [16])0x0;
        }
        puVar20 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar20 + 8) = 0;
        *(undefined1 (*) [16])(puVar20 + 2) = (undefined1  [16])0x0;
        *puVar20 = 0;
        puVar20[6] = 0;
        puVar20[10] = 6;
        *(undefined8 *)(puVar20 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
        *puVar20 = (undefined4)local_78;
        if (local_70._0_8_ != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 2),(CowData *)local_70);
        }
        StringName::operator=((StringName *)(puVar20 + 4),(StringName *)(local_70 + 8));
        puVar20[6] = (undefined4)local_60;
        if (*(long *)(puVar20 + 8) != local_58) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 8),(CowData *)&local_58);
        }
        puVar20[10] = local_50;
        plVar30 = *(long **)param_1;
        lVar19 = plVar30[1];
        *(undefined8 *)(puVar20 + 0xc) = 0;
        *(long **)(puVar20 + 0x10) = plVar30;
        *(long *)(puVar20 + 0xe) = lVar19;
        if (lVar19 != 0) {
          *(undefined4 **)(lVar19 + 0x30) = puVar20;
        }
        plVar30[1] = (long)puVar20;
        if (*plVar30 == 0) {
          *plVar30 = (long)puVar20;
        }
        *(int *)(plVar30 + 2) = (int)plVar30[2] + 1;
        if (local_a0 != local_98) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_f0);
        }
        lVar19 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar30 = (long *)(local_58 + -0x10);
          *plVar30 = *plVar30 + -1;
          UNLOCK();
          if (*plVar30 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar19 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
          StringName::unref();
        }
        uVar15 = local_70._0_8_;
        if (local_70._0_8_ != 0) {
          LOCK();
          plVar30 = (long *)(local_70._0_8_ + -0x10);
          *plVar30 = *plVar30 + -1;
          UNLOCK();
          if (*plVar30 == 0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = local_70._8_8_;
            local_70 = auVar12 << 0x40;
            Memory::free_static((void *)(uVar15 + -0x10),false);
          }
        }
      }
      ShaderLanguage::uniform_to_property_info((Uniform *)local_e8);
      lVar19 = *(long *)pSVar32;
      if (lVar19 == 0) {
LAB_001064b1:
        local_90 = 0;
        if (local_70._0_8_ == 0) goto LAB_0010620e;
LAB_001064c2:
        LOCK();
        plVar30 = (long *)(local_70._0_8_ + -0x10);
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 == 0) {
          uVar15 = local_70._0_8_;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_70._8_8_;
          local_70 = auVar14 << 0x40;
          Memory::free_static((void *)(uVar15 + -0x10),false);
        }
LAB_00106201:
        local_70._0_8_ = local_90;
LAB_0010620e:
        lVar19 = *(long *)param_1;
      }
      else {
        __s = *(char **)(lVar19 + 8);
        local_90 = 0;
        if (__s == (char *)0x0) {
          if (*(long *)(lVar19 + 0x10) == 0) goto LAB_001064b1;
          plVar30 = (long *)(*(long *)(lVar19 + 0x10) + -0x10);
          do {
            lVar29 = *plVar30;
            if (lVar29 == 0) goto LAB_001061e7;
            LOCK();
            lVar22 = *plVar30;
            bVar33 = lVar29 == lVar22;
            if (bVar33) {
              *plVar30 = lVar29 + 1;
              lVar22 = lVar29;
            }
            UNLOCK();
          } while (!bVar33);
          if (lVar22 != -1) {
            local_90 = *(long *)(lVar19 + 0x10);
          }
        }
        else {
          local_80 = strlen(__s);
          local_88 = __s;
          String::parse_latin1((StrRange *)&local_90);
        }
LAB_001061e7:
        lVar19 = local_90;
        if (local_70._0_8_ != local_90) {
          if (local_70._0_8_ != 0) goto LAB_001064c2;
          goto LAB_00106201;
        }
        if (local_90 == 0) goto LAB_0010620e;
        LOCK();
        plVar30 = (long *)(local_90 + -0x10);
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 != 0) goto LAB_0010620e;
        local_90 = 0;
        Memory::free_static((void *)(lVar19 + -0x10),false);
        lVar19 = *(long *)param_1;
      }
      if (lVar19 == 0) {
        pauVar21 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar21;
        *(undefined4 *)pauVar21[1] = 0;
        *pauVar21 = (undefined1  [16])0x0;
      }
      puVar20 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
      *(undefined8 *)(puVar20 + 8) = 0;
      *(undefined1 (*) [16])(puVar20 + 2) = (undefined1  [16])0x0;
      *puVar20 = 0;
      puVar20[6] = 0;
      puVar20[10] = 6;
      *(undefined8 *)(puVar20 + 0x10) = 0;
      *(undefined1 (*) [16])(puVar20 + 0xc) = (undefined1  [16])0x0;
      *puVar20 = (undefined4)local_78;
      if (local_70._0_8_ != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 2),(CowData *)local_70);
      }
      StringName::operator=((StringName *)(puVar20 + 4),(StringName *)(local_70 + 8));
      puVar20[6] = (undefined4)local_60;
      if (*(long *)(puVar20 + 8) != local_58) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar20 + 8),(CowData *)&local_58);
      }
      lVar29 = local_58;
      puVar20[10] = local_50;
      plVar30 = *(long **)param_1;
      lVar19 = plVar30[1];
      *(long **)(puVar20 + 0x10) = plVar30;
      *(undefined8 *)(puVar20 + 0xc) = 0;
      *(long *)(puVar20 + 0xe) = lVar19;
      if (lVar19 != 0) {
        *(undefined4 **)(lVar19 + 0x30) = puVar20;
      }
      plVar30[1] = (long)puVar20;
      if (*plVar30 == 0) {
        *plVar30 = (long)puVar20;
      }
      *(int *)(plVar30 + 2) = (int)plVar30[2] + 1;
      if (local_58 != 0) {
        LOCK();
        plVar30 = (long *)(local_58 + -0x10);
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar29 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
        StringName::unref();
      }
      uVar15 = local_70._0_8_;
      if (local_70._0_8_ != 0) {
        LOCK();
        plVar30 = (long *)(local_70._0_8_ + -0x10);
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 == 0) {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = local_70._8_8_;
          local_70 = auVar13 << 0x40;
          Memory::free_static((void *)(uVar15 + -0x10),false);
        }
      }
      uVar24 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar30 = (long *)(local_98 - 0x10);
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(uVar24 - 0x10),false);
        }
      }
      uVar24 = local_a0;
      uVar17 = uVar17 + 1;
      if (uVar17 != local_c4) goto code_r0x001063bd;
      if (local_a0 != 0) {
        LOCK();
        plVar30 = (long *)(local_a0 - 0x10);
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (*plVar30 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(uVar24 - 0x10),false);
        }
      }
      if (this_00 != (StringName *)0x0) {
        pSVar32 = this_00;
        do {
          if ((StringName::configured != '\0') && (*(long *)pSVar32 != 0)) {
            StringName::unref();
          }
          pSVar32 = pSVar32 + 0x10;
        } while (pSVar32 != this_00 + (ulong)local_c4 * 0x10);
        goto LAB_00106881;
      }
      goto LAB_001068b5;
    }
    if (this_00 != (StringName *)0x0) {
LAB_00106881:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(this_00,false);
        return;
      }
      goto LAB_00106907;
    }
  }
LAB_001068b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106907:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001063bd:
  pSVar32 = pSVar32 + 0x10;
  if (local_c4 <= uVar17) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar17,(ulong)local_c4,
               "p_index","count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  goto LAB_00105e01;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::MaterialStorage::ShaderData::blend_mode_to_blend_attachment(RendererRD::MaterialStorage::ShaderData::BlendMode)
    */

ShaderData * __thiscall
RendererRD::MaterialStorage::ShaderData::blend_mode_to_blend_attachment
          (ShaderData *this,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *this = (ShaderData)0x0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0x1010101;
  *(undefined1 (*) [16])(this + 4) = (undefined1  [16])0x0;
  if (param_2 < 6) {
    *this = (ShaderData)0x1;
    uVar5 = _UNK_00121f28;
    uVar4 = _LC56;
    uVar3 = _LC58;
    uVar2 = _LC55;
    uVar1 = _LC54;
    switch(param_2) {
    case 0:
      *(undefined8 *)(this + 4) = _LC54;
      *(undefined8 *)(this + 0x10) = _LC55;
      return this;
    case 1:
      *(undefined8 *)(this + 4) = _LC56;
      *(undefined8 *)(this + 0x10) = uVar4;
      return this;
    case 2:
      *(undefined8 *)(this + 4) = _LC56;
      *(undefined8 *)(this + 0xc) = uVar5;
      *(undefined8 *)(this + 0x14) = uVar3;
      return this;
    case 3:
      *(undefined4 *)(this + 4) = 4;
      *(undefined4 *)(this + 0x10) = 8;
      return this;
    case 4:
      *(undefined4 *)(this + 0x10) = 1;
      *(undefined8 *)(this + 4) = uVar1;
      return this;
    case 5:
      *(undefined8 *)(this + 4) = _LC55;
      *(undefined8 *)(this + 0x10) = uVar2;
    }
  }
  return this;
}



/* RendererRD::MaterialStorage::ShaderData::blend_mode_uses_blend_alpha(RendererRD::MaterialStorage::ShaderData::BlendMode)
    */

bool RendererRD::MaterialStorage::ShaderData::blend_mode_uses_blend_alpha(uint param_1)

{
  if (param_1 < 4) {
    return param_1 != 0;
  }
  return param_1 == 5;
}



/* RendererRD::MaterialStorage::MaterialData::~MaterialData() */

void __thiscall RendererRD::MaterialStorage::MaterialData::~MaterialData(MaterialData *this)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  MaterialData *pMVar15;
  long lVar16;
  uint uVar17;
  void *pvVar18;
  uint uVar19;
  long *plVar20;
  ulong uVar21;
  bool bVar22;
  
  *(undefined ***)this = &PTR___cxa_pure_virtual_00121ab0;
  lVar16 = singleton;
  pvVar18 = *(void **)(this + 0x20);
  if ((pvVar18 != (void *)0x0) && (plVar20 = *(long **)(singleton + 0x138), plVar20 != (long *)0x0))
  {
    if (plVar20 == *(long **)((long)pvVar18 + 0x18)) {
      lVar12 = *(long *)((long)pvVar18 + 8);
      if (pvVar18 == (void *)*plVar20) {
        *plVar20 = lVar12;
      }
      lVar14 = *(long *)((long)pvVar18 + 0x10);
      if (pvVar18 == (void *)plVar20[1]) {
        plVar20[1] = lVar14;
      }
      if (lVar14 != 0) {
        *(long *)(lVar14 + 8) = lVar12;
        lVar12 = *(long *)((long)pvVar18 + 8);
      }
      if (lVar12 != 0) {
        *(long *)(lVar12 + 0x10) = lVar14;
      }
      Memory::free_static(pvVar18,false);
      *(int *)(plVar20 + 2) = (int)plVar20[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(lVar16 + 0x138) + 0x10) == 0) {
      Memory::free_static(*(void **)(lVar16 + 0x138),false);
      *(undefined8 *)(lVar16 + 0x138) = 0;
    }
  }
  pvVar18 = *(void **)(this + 0x28);
  if (pvVar18 != (void *)0x0) {
    plVar20 = *(long **)(this + 0x50);
    if (plVar20 != (long *)0x0) {
      do {
        if ((*(long *)(lVar16 + 0x110) != 0) && (*(int *)(lVar16 + 0x134) != 0)) {
          uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar16 + 0x130) * 4);
          uVar21 = CONCAT44(0,uVar1);
          lVar12 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar16 + 0x130) * 8);
          if (plVar20[2] == 0) {
            uVar10 = StringName::get_empty_hash();
          }
          else {
            uVar10 = *(uint *)(plVar20[2] + 0x20);
          }
          if (uVar10 == 0) {
            uVar10 = 1;
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = (ulong)uVar10 * lVar12;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar21;
          lVar14 = SUB168(auVar2 * auVar6,8);
          uVar17 = *(uint *)(*(long *)(lVar16 + 0x118) + lVar14 * 4);
          uVar13 = SUB164(auVar2 * auVar6,8);
          if (uVar17 != 0) {
            uVar19 = 0;
            while ((uVar10 != uVar17 ||
                   (*(long *)(*(long *)(*(long *)(lVar16 + 0x110) + lVar14 * 8) + 0x10) !=
                    plVar20[2]))) {
              uVar19 = uVar19 + 1;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = (ulong)(uVar13 + 1) * lVar12;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar21;
              lVar14 = SUB168(auVar3 * auVar7,8);
              uVar17 = *(uint *)(*(long *)(lVar16 + 0x118) + lVar14 * 4);
              uVar13 = SUB164(auVar3 * auVar7,8);
              if ((uVar17 == 0) ||
                 (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar17 * lVar12, auVar8._8_8_ = 0,
                 auVar8._0_8_ = uVar21, auVar5._8_8_ = 0,
                 auVar5._0_8_ = (ulong)((uVar1 + uVar13) - SUB164(auVar4 * auVar8,8)) * lVar12,
                 auVar9._8_8_ = 0, auVar9._0_8_ = uVar21, SUB164(auVar5 * auVar9,8) < uVar19))
              goto LAB_00106bad;
            }
            HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase
                      ((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *)
                       (*(long *)(*(long *)(lVar16 + 0x110) + (ulong)uVar13 * 8) + 0x18),this + 0x18
                      );
          }
        }
LAB_00106bad:
        plVar20 = (long *)*plVar20;
      } while (plVar20 != (long *)0x0);
      pvVar18 = *(void **)(this + 0x28);
    }
    plVar20 = *(long **)(lVar16 + 0x140);
    if ((pvVar18 != (void *)0x0) && (plVar20 != (long *)0x0)) {
      if (plVar20 == *(long **)((long)pvVar18 + 0x18)) {
        lVar12 = *(long *)((long)pvVar18 + 8);
        if ((void *)*plVar20 == pvVar18) {
          *plVar20 = lVar12;
        }
        lVar14 = *(long *)((long)pvVar18 + 0x10);
        if ((void *)plVar20[1] == pvVar18) {
          plVar20[1] = lVar14;
        }
        if (lVar14 != 0) {
          *(long *)(lVar14 + 8) = lVar12;
          lVar12 = *(long *)((long)pvVar18 + 8);
        }
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x10) = lVar14;
        }
        Memory::free_static(pvVar18,false);
        *(int *)(plVar20 + 2) = (int)plVar20[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      if (*(int *)((long)*(void **)(lVar16 + 0x140) + 0x10) == 0) {
        Memory::free_static(*(void **)(lVar16 + 0x140),false);
        *(undefined8 *)(lVar16 + 0x140) = 0;
      }
    }
  }
  if (*(long *)(this + 0x88) != 0) {
    uVar11 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar11);
  }
  if (*(long *)(this + 0x90) != 0) {
    uVar11 = RenderingDevice::get_singleton();
    RenderingDevice::free(uVar11);
  }
  if (*(long *)(this + 0xa0) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(this + 0xa0) + -0x10);
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (*plVar20 == 0) {
      lVar16 = *(long *)(this + 0xa0);
      *(undefined8 *)(this + 0xa0) = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  pMVar15 = this + 0x78;
  do {
    if (*(long *)(pMVar15 + 8) != 0) {
      LOCK();
      plVar20 = (long *)(*(long *)(pMVar15 + 8) + -0x10);
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (*plVar20 == 0) {
        lVar16 = *(long *)(pMVar15 + 8);
        *(undefined8 *)(pMVar15 + 8) = 0;
        Memory::free_static((void *)(lVar16 + -0x10),false);
      }
    }
    pMVar15 = pMVar15 + -0x10;
  } while (this + 0x58 != pMVar15);
  pvVar18 = *(void **)(this + 0x40);
  if (pvVar18 != (void *)0x0) {
    if (*(int *)(this + 100) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 100) = 0;
        *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
      }
      else {
        lVar16 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x48) + lVar16) != 0) {
            bVar22 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0x48) + lVar16) = 0;
            pvVar18 = *(void **)((long)pvVar18 + lVar16 * 2);
            if ((bVar22) && (*(long *)((long)pvVar18 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar18,false);
            pvVar18 = *(void **)(this + 0x40);
            *(undefined8 *)((long)pvVar18 + lVar16 * 2) = 0;
          }
          lVar16 = lVar16 + 4;
        } while (lVar16 != (ulong)uVar1 * 4);
        *(undefined4 *)(this + 100) = 0;
        *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
        if (pvVar18 == (void *)0x0) goto LAB_00106ce8;
      }
    }
    Memory::free_static(pvVar18,false);
    Memory::free_static(*(void **)(this + 0x48),false);
  }
LAB_00106ce8:
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (*plVar20 == 0) {
      lVar16 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
      return;
    }
  }
  return;
}



/* RendererRD::MaterialStorage::MaterialData::~MaterialData() */

void __thiscall RendererRD::MaterialStorage::MaterialData::~MaterialData(MaterialData *this)

{
  ~MaterialData(this);
  operator_delete(this,0xa8);
  return;
}



/* RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set(RID) */

void __thiscall
RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set
          (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = RenderingDevice::get_singleton();
  cVar2 = RenderingDevice::uniform_set_is_valid(uVar1,param_2);
  if (cVar2 == '\0') {
    return;
  }
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::uniform_set_set_invalidation_callback(uVar1,param_2,0,0);
  uVar1 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar1,param_2);
  return;
}



/* RendererRD::MaterialStorage::MaterialData::set_as_used() */

void __thiscall RendererRD::MaterialStorage::MaterialData::set_as_used(MaterialData *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x10);
  if ((plVar3 != (long *)0x0) && (0 < plVar3[-1])) {
    plVar1 = plVar3 + plVar3[-1];
    do {
      lVar2 = *plVar3;
      plVar3 = plVar3 + 1;
      *(undefined1 *)(lVar2 + 0x138) = 1;
    } while (plVar1 != plVar3);
  }
  return;
}



/* RendererRD::MaterialStorage::Samplers::is_valid() const */

bool __thiscall RendererRD::MaterialStorage::Samplers::is_valid(Samplers *this)

{
  return *(long *)(this + 0x28) != 0;
}



/* RendererRD::MaterialStorage::Samplers::is_null() const */

bool __thiscall RendererRD::MaterialStorage::Samplers::is_null(Samplers *this)

{
  return *(long *)(this + 0x28) == 0;
}



/* RendererRD::MaterialStorage::get_singleton() */

undefined8 RendererRD::MaterialStorage::get_singleton(void)

{
  return singleton;
}



/* RendererRD::MaterialStorage::free(RID) */

undefined8 __thiscall RendererRD::MaterialStorage::free(MaterialStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  pthread_mutex_t *__mutex_00;
  int iVar1;
  uint uVar2;
  
  __mutex = (pthread_mutex_t *)(this + 0x200);
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 == 0) {
    uVar2 = (uint)(param_2 >> 0x20);
    if ((((uint)param_2 < *(uint *)(this + 0x1ec)) && (param_2 >> 0x20 != 0x7fffffff)) &&
       ((*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x80 +
                   *(long *)(*(long *)(this + 0x1d8) +
                            ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8) + 0x78) &
        0x7fffffff) == uVar2)) {
      pthread_mutex_unlock(__mutex);
      (**(code **)(*(long *)this + 0x80))(this,param_2);
    }
    else {
      __mutex_00 = (pthread_mutex_t *)(this + 0x280);
      pthread_mutex_unlock(__mutex);
      iVar1 = pthread_mutex_lock(__mutex_00);
      if (iVar1 != 0) goto LAB_001070d9;
      if (((*(uint *)(this + 0x26c) <= (uint)param_2) || (param_2 >> 0x20 == 0x7fffffff)) ||
         ((*(uint *)(((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
                     *(long *)(*(long *)(this + 600) +
                              ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8) + 0xb8)
          & 0x7fffffff) != uVar2)) {
        pthread_mutex_unlock(__mutex_00);
        return 0;
      }
      pthread_mutex_unlock(__mutex_00);
      (**(code **)(*(long *)this + 0xd8))(this,param_2);
    }
    return 1;
  }
LAB_001070d9:
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* RendererRD::MaterialStorage::_global_shader_uniform_allocate(unsigned int) */

int __thiscall
RendererRD::MaterialStorage::_global_shader_uniform_allocate(MaterialStorage *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(this + 0x16c);
  if (param_1 <= uVar1) {
    iVar4 = 0;
    do {
      while (iVar2 = *(int *)(*(long *)(this + 0x158) + (long)iVar4 * 4), iVar2 == 0) {
        if (param_1 < 2) {
          return iVar4;
        }
        uVar3 = iVar4 + 1;
        while (iVar2 = *(int *)(*(long *)(this + 0x158) + (ulong)uVar3 * 4), iVar2 == 0) {
          uVar3 = uVar3 + 1;
          if (iVar4 + param_1 == uVar3) {
            return iVar4;
          }
        }
        iVar4 = iVar2 + uVar3;
        if (uVar1 < param_1 + iVar4) {
          return -1;
        }
      }
      iVar4 = iVar4 + iVar2;
    } while (param_1 + iVar4 <= uVar1);
  }
  return -1;
}



/* RendererRD::MaterialStorage::_global_shader_uniform_mark_buffer_dirty(int, int) */

void __thiscall
RendererRD::MaterialStorage::_global_shader_uniform_mark_buffer_dirty
          (MaterialStorage *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar3 = param_2 + param_1;
    iVar1 = -1;
    do {
      iVar2 = param_1 + 0x3ff;
      if (-1 < param_1) {
        iVar2 = param_1;
      }
      iVar2 = iVar2 >> 10;
      if ((iVar2 != iVar1) && (*(char *)((long)iVar2 + *(long *)(this + 0x160)) == '\0')) {
        *(char *)((long)iVar2 + *(long *)(this + 0x160)) = '\x01';
        *(int *)(this + 0x168) = *(int *)(this + 0x168) + 1;
      }
      param_1 = param_1 + 1;
      iVar1 = iVar2;
    } while (iVar3 != param_1);
  }
  return;
}



/* RendererRD::MaterialStorage::global_shader_parameter_get_type_internal(StringName const&) const
    */

undefined4 __thiscall
RendererRD::MaterialStorage::global_shader_parameter_get_type_internal
          (MaterialStorage *this,StringName *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  
  if (*(long *)(this + 0x110) == 0) {
    return 0x1d;
  }
  if (*(int *)(this + 0x134) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x130) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x130) * 8);
    if (*(long *)param_1 == 0) {
      uVar20 = StringName::get_empty_hash();
    }
    else {
      uVar20 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar26 = CONCAT44(0,uVar1);
    lVar28 = *(long *)(this + 0x118);
    if (uVar20 == 0) {
      uVar20 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar20 * lVar2;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar26;
    lVar23 = SUB168(auVar3 * auVar11,8);
    uVar27 = *(uint *)(lVar28 + lVar23 * 4);
    uVar25 = (ulong)uVar27;
    iVar21 = SUB164(auVar3 * auVar11,8);
    if (uVar27 != 0) {
      uVar27 = 0;
      do {
        if ((uVar20 == (uint)uVar25) &&
           (lVar23 = *(long *)(*(long *)(*(long *)(this + 0x110) + lVar23 * 8) + 0x10),
           lVar23 == *(long *)param_1)) {
          if ((*(long *)(this + 0x110) != 0) && (*(int *)(this + 0x134) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x130) * 4);
            uVar26 = CONCAT44(0,uVar1);
            lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x130) * 8);
            if (lVar23 == 0) {
              uVar20 = StringName::get_empty_hash();
              lVar28 = *(long *)(this + 0x118);
            }
            else {
              uVar20 = *(uint *)(lVar23 + 0x20);
            }
            if (uVar20 == 0) {
              uVar20 = 1;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar20 * lVar2;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar26;
            lVar23 = SUB168(auVar7 * auVar15,8);
            uVar27 = *(uint *)(lVar28 + lVar23 * 4);
            uVar22 = SUB164(auVar7 * auVar15,8);
            if (uVar27 != 0) {
              uVar24 = 0;
              do {
                if ((uVar20 == uVar27) &&
                   (*(long *)(*(long *)(*(long *)(this + 0x110) + lVar23 * 8) + 0x10) ==
                    *(long *)param_1)) {
                  return *(undefined4 *)
                          (*(long *)(*(long *)(this + 0x110) + (ulong)uVar22 * 8) + 0x40);
                }
                uVar24 = uVar24 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(uVar22 + 1) * lVar2;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar26;
                lVar23 = SUB168(auVar8 * auVar16,8);
                uVar27 = *(uint *)(lVar28 + lVar23 * 4);
                uVar22 = SUB164(auVar8 * auVar16,8);
              } while ((uVar27 != 0) &&
                      (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar27 * lVar2, auVar17._8_8_ = 0,
                      auVar17._0_8_ = uVar26, auVar10._8_8_ = 0,
                      auVar10._0_8_ = (ulong)((uVar1 + uVar22) - SUB164(auVar9 * auVar17,8)) * lVar2
                      , auVar18._8_8_ = 0, auVar18._0_8_ = uVar26,
                      uVar24 <= SUB164(auVar10 * auVar18,8)));
            }
          }
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        uVar27 = uVar27 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar21 + 1) * lVar2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar26;
        lVar23 = SUB168(auVar4 * auVar12,8);
        uVar22 = *(uint *)(lVar28 + lVar23 * 4);
        uVar25 = (ulong)uVar22;
        iVar21 = SUB164(auVar4 * auVar12,8);
      } while ((uVar22 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar25 * lVar2, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar26, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar21) - SUB164(auVar5 * auVar13,8)) * lVar2,
              auVar14._8_8_ = 0, auVar14._0_8_ = uVar26, uVar27 <= SUB164(auVar6 * auVar14,8)));
    }
  }
  return 0x1d;
}



/* RendererRD::MaterialStorage::global_shader_parameter_get_type(StringName const&) const */

undefined8 __thiscall
RendererRD::MaterialStorage::global_shader_parameter_get_type
          (MaterialStorage *this,StringName *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = Engine::get_singleton();
  if (*(char *)(lVar1 + 0xc0) != '\0') {
    uVar2 = global_shader_parameter_get_type_internal(this,param_1);
    return uVar2;
  }
  _err_print_error("global_shader_parameter_get_type",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x6a0,
                   "Method/function failed. Returning: RenderingServer::GLOBAL_VAR_TYPE_MAX",
                   "This function should never be used outside the editor, it can severely damage performance."
                   ,0,0);
  return 0x1d;
}



/* RendererRD::MaterialStorage::global_shader_uniforms_get_storage_buffer() const */

undefined8 __thiscall
RendererRD::MaterialStorage::global_shader_uniforms_get_storage_buffer(MaterialStorage *this)

{
  return *(undefined8 *)(this + 0x148);
}



/* RendererRD::MaterialStorage::shader_free(RID) */

void __thiscall RendererRD::MaterialStorage::shader_free(MaterialStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  char *pcVar11;
  Shader *this_00;
  char *pcVar12;
  long lVar13;
  
  if (param_2 != 0) {
    uVar10 = (uint)param_2;
    if (uVar10 < *(uint *)(this + 0x1ec)) {
      puVar9 = (undefined8 *)
               (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x80 +
               *(long *)(*(long *)(this + 0x1d8) +
                        ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
      iVar1 = *(int *)(puVar9 + 0xf);
      if (iVar1 == (int)(param_2 >> 0x20)) {
        while (*(int *)((long)puVar9 + 0x74) != 0) {
          (**(code **)(*(long *)this + 0xe8))(this,**(undefined8 **)puVar9[10],0);
        }
        plVar2 = (long *)*puVar9;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x50))(plVar2);
          Memory::free_static(plVar2,false);
        }
        __mutex = (pthread_mutex_t *)(this + 0x200);
        iVar5 = pthread_mutex_lock(__mutex);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar5);
        }
        if (uVar10 < *(uint *)(this + 0x1ec)) {
          uVar4 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8);
          lVar13 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x80;
          this_00 = (Shader *)(*(long *)(*(long *)(this + 0x1d8) + uVar4 * 8) + lVar13);
          iVar5 = *(int *)(this_00 + 0x78);
          if (iVar5 < 0) {
            pthread_mutex_unlock(__mutex);
            _err_print_error(&_LC69,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                             "Attempted to free an uninitialized or invalid RID",0,0);
            return;
          }
          if (iVar1 == iVar5) {
            Shader::~Shader(this_00);
            lVar3 = *(long *)(this + 0x1e0);
            *(undefined4 *)(*(long *)(*(long *)(this + 0x1d8) + uVar4 * 8) + 0x78 + lVar13) =
                 0xffffffff;
            uVar6 = *(int *)(this + 0x1f0) - 1;
            *(uint *)(this + 0x1f0) = uVar6;
            *(uint *)(*(long *)(lVar3 + ((ulong)uVar6 / (ulong)*(uint *)(this + 0x1e8)) * 8) +
                     ((ulong)uVar6 % (ulong)*(uint *)(this + 0x1e8)) * 4) = uVar10;
            pthread_mutex_unlock(__mutex);
            return;
          }
          pthread_mutex_unlock(__mutex);
          uVar8 = 0x171;
        }
        else {
          pthread_mutex_unlock(__mutex);
          uVar8 = 0x161;
        }
        pcVar7 = "Method/function failed.";
        pcVar11 = "./core/templates/rid_owner.h";
        pcVar12 = "free";
        goto LAB_00107630;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  pcVar7 = "Parameter \"shader\" is null.";
  uVar8 = 0x790;
  pcVar11 = "servers/rendering/renderer_rd/storage_rd/material_storage.cpp";
  pcVar12 = "shader_free";
LAB_00107630:
  _err_print_error(pcVar12,pcVar11,uVar8,pcVar7,0,0);
  return;
}



/* RendererRD::MaterialStorage::shader_set_data_request_function(RendererRD::MaterialStorage::ShaderType,
   RendererRD::MaterialStorage::ShaderData* (*)()) */

void __thiscall
RendererRD::MaterialStorage::shader_set_data_request_function
          (MaterialStorage *this,uint param_2,undefined8 param_3)

{
  if (param_2 < 5) {
    *(undefined8 *)(this + (long)(int)param_2 * 8 + 0x1a8) = param_3;
    return;
  }
  _err_print_index_error
            ("shader_set_data_request_function",
             "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x832,(ulong)param_2,5,
             "p_shader_type","SHADER_TYPE_MAX","",false,false);
  return;
}



/* RendererRD::MaterialStorage::_material_queue_update(RendererRD::MaterialStorage::Material*, bool,
   bool) */

void __thiscall
RendererRD::MaterialStorage::_material_queue_update
          (MaterialStorage *this,Material *param_1,bool param_2,bool param_3)

{
  Material *pMVar1;
  pthread_mutex_t *__mutex;
  long lVar2;
  Material MVar3;
  int iVar4;
  
  __mutex = (pthread_mutex_t *)(this + 0x2b8);
  iVar4 = pthread_mutex_lock(__mutex);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  MVar3 = param_1[0x20];
  if (param_1[0x20] == (Material)0x0) {
    MVar3 = (Material)param_2;
  }
  param_1[0x20] = MVar3;
  MVar3 = param_1[0x21];
  if (param_1[0x21] == (Material)0x0) {
    MVar3 = (Material)param_3;
  }
  param_1[0x21] = MVar3;
  if (*(long *)(param_1 + 0x68) != 0) {
    pthread_mutex_unlock(__mutex);
    return;
  }
  pMVar1 = param_1 + 0x68;
  *(MaterialStorage **)(param_1 + 0x68) = this + 0x2a8;
  lVar2 = *(long *)(this + 0x2a8);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(long *)(param_1 + 0x78) = lVar2;
  if (lVar2 == 0) {
    *(Material **)(this + 0x2b0) = pMVar1;
  }
  else {
    *(Material **)(lVar2 + 0x18) = pMVar1;
  }
  *(Material **)(this + 0x2a8) = pMVar1;
  pthread_mutex_unlock(__mutex);
  return;
}



/* RendererRD::MaterialStorage::_update_global_shader_uniforms() */

void __thiscall RendererRD::MaterialStorage::_update_global_shader_uniforms(MaterialStorage *this)

{
  int iVar1;
  MaterialStorage *this_00;
  long lVar2;
  undefined8 uVar3;
  Material *pMVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  
  this_00 = singleton;
  if (*(uint *)(this + 0x168) != 0) {
    uVar7 = (*(uint *)(this + 0x16c) >> 10) + 1;
    if (uVar7 / *(uint *)(this + 0x168) < 5) {
      uVar3 = RenderingDevice::get_singleton();
      RenderingDevice::buffer_update
                (uVar3,*(undefined8 *)(this + 0x148),0,*(int *)(this + 0x16c) << 4,
                 *(undefined8 *)(this + 0x150));
      memset(*(void **)(this + 0x160),0,(ulong)uVar7);
      *(undefined4 *)(this + 0x168) = 0;
    }
    else {
      lVar2 = *(long *)(this + 0x160);
      uVar5 = 0;
      do {
        while (*(char *)(lVar2 + uVar5) != '\0') {
          uVar3 = RenderingDevice::get_singleton();
          RenderingDevice::buffer_update
                    (uVar3,*(undefined8 *)(this + 0x148),(int)uVar5 << 0xe,0x4000,
                     (ulong)(uint)((int)uVar5 << 10) * 0x10 + *(long *)(this + 0x150));
          lVar2 = *(long *)(this + 0x160);
          *(undefined1 *)(lVar2 + uVar5) = 0;
          uVar5 = uVar5 + 1;
          if (uVar7 == uVar5) goto LAB_001078ee;
        }
        uVar5 = uVar5 + 1;
      } while (uVar7 != uVar5);
LAB_001078ee:
      *(undefined4 *)(this + 0x168) = 0;
    }
  }
  if (this[0x171] != (MaterialStorage)0x0) {
    if (*(ulong **)(this + 0x138) != (ulong *)0x0) {
      for (puVar6 = (ulong *)**(ulong **)(this + 0x138); puVar6 != (ulong *)0x0;
          puVar6 = (ulong *)puVar6[1]) {
        while( true ) {
          uVar5 = *puVar6;
          if ((uVar5 == 0) || (*(uint *)(this_00 + 0x26c) <= (uint)uVar5)) goto LAB_00107985;
          pMVar4 = (Material *)
                   (((uVar5 & 0xffffffff) % (ulong)*(uint *)(this_00 + 0x268)) * 0xc0 +
                   *(long *)(*(long *)(this_00 + 600) +
                            ((uVar5 & 0xffffffff) / (ulong)*(uint *)(this_00 + 0x268)) * 8));
          iVar1 = *(int *)(pMVar4 + 0xb8);
          if (iVar1 != (int)(uVar5 >> 0x20)) break;
          _material_queue_update(this_00,pMVar4,true,false);
          puVar6 = (ulong *)puVar6[1];
          if (puVar6 == (ulong *)0x0) goto LAB_001079b8;
        }
        if (iVar1 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
LAB_00107985:
        _err_print_error("_update_global_shader_uniforms",
                         "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x76a,
                         "Condition \"!material\" is true. Continuing.",0);
      }
    }
LAB_001079b8:
    this[0x171] = (MaterialStorage)0x0;
  }
  if (this[0x170] != (MaterialStorage)0x0) {
    if (*(ulong **)(this + 0x140) != (ulong *)0x0) {
      for (puVar6 = (ulong *)**(ulong **)(this + 0x140); puVar6 != (ulong *)0x0;
          puVar6 = (ulong *)puVar6[1]) {
        while( true ) {
          uVar5 = *puVar6;
          if ((uVar5 == 0) || (*(uint *)(this_00 + 0x26c) <= (uint)uVar5)) goto LAB_00107a49;
          pMVar4 = (Material *)
                   (((uVar5 & 0xffffffff) % (ulong)*(uint *)(this_00 + 0x268)) * 0xc0 +
                   *(long *)(*(long *)(this_00 + 600) +
                            ((uVar5 & 0xffffffff) / (ulong)*(uint *)(this_00 + 0x268)) * 8));
          iVar1 = *(int *)(pMVar4 + 0xb8);
          if (iVar1 != (int)(uVar5 >> 0x20)) break;
          _material_queue_update(this_00,pMVar4,false,true);
          puVar6 = (ulong *)puVar6[1];
          if (puVar6 == (ulong *)0x0) goto LAB_00107a80;
        }
        if (iVar1 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
LAB_00107a49:
        _err_print_error("_update_global_shader_uniforms",
                         "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x777,
                         "Condition \"!material\" is true. Continuing.",0);
      }
    }
LAB_00107a80:
    this[0x170] = (MaterialStorage)0x0;
  }
  return;
}



/* RendererRD::MaterialStorage::shader_set_code(RID, String const&) */

void __thiscall
RendererRD::MaterialStorage::shader_set_code(MaterialStorage *this,ulong param_2,CowData *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Material *pMVar4;
  char cVar5;
  byte bVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1ec))) {
    puVar9 = (undefined8 *)
             (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x80 +
             *(long *)(*(long *)(this + 0x1d8) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
    if (*(int *)(puVar9 + 0xf) == (int)(param_2 >> 0x20)) {
      if (puVar9[1] != *(long *)param_3) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 1),param_3);
      }
      iVar11 = 0;
      ShaderLanguage::get_shader_type((String *)&local_48);
      cVar5 = String::operator==((String *)&local_48,"canvas_item");
      if (cVar5 == '\0') {
        iVar11 = 2;
        cVar5 = String::operator==((String *)&local_48,"particles");
        if (cVar5 == '\0') {
          iVar11 = 1;
          cVar5 = String::operator==((String *)&local_48,"spatial");
          if (cVar5 == '\0') {
            iVar11 = 3;
            cVar5 = String::operator==((String *)&local_48,"sky");
            if (cVar5 == '\0') {
              bVar6 = String::operator==((String *)&local_48,"fog");
              iVar11 = 5 - (uint)bVar6;
            }
          }
        }
      }
      plVar7 = (long *)*puVar9;
      if (*(int *)(puVar9 + 3) == iVar11) {
LAB_00107de4:
        if (plVar7 != (long *)0x0) {
LAB_00107de9:
          if (*(code **)*plVar7 == ShaderData::set_path_hint) {
            if (plVar7[1] != puVar9[2]) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(plVar7 + 1),(CowData *)(puVar9 + 2));
            }
          }
          else {
            (**(code **)*plVar7)();
          }
          (**(code **)(*(long *)*puVar9 + 0x30))();
        }
      }
      else {
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x50))();
          Memory::free_static(plVar7,false);
          *puVar9 = 0;
        }
        iVar1 = *(int *)((long)puVar9 + 0x74);
        if (iVar1 != 0) {
          lVar2 = puVar9[10];
          lVar12 = 0;
          while( true ) {
            lVar3 = *(long *)(lVar2 + lVar12 * 8);
            plVar7 = *(long **)(lVar3 + 8);
            *(int *)(lVar3 + 0x18) = iVar11;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x18))(plVar7);
              Memory::free_static(plVar7,false);
              *(undefined8 *)(lVar3 + 8) = 0;
            }
            if (iVar1 <= (int)lVar12 + 1) break;
            lVar12 = lVar12 + 1;
          }
        }
        *(int *)(puVar9 + 3) = iVar11;
        if ((iVar11 == 5) || (*(code **)(this + (long)iVar11 * 8 + 0x1a8) == (code *)0x0)) {
          *(undefined4 *)(puVar9 + 3) = 5;
          plVar7 = (long *)*puVar9;
        }
        else {
          plVar7 = (long *)(**(code **)(this + (long)iVar11 * 8 + 0x1a8))();
          *puVar9 = plVar7;
        }
        iVar1 = *(int *)((long)puVar9 + 0x74);
        if (iVar1 != 0) {
          lVar2 = puVar9[10];
          lVar12 = 0;
          while( true ) {
            plVar13 = *(long **)(lVar2 + lVar12 * 8);
            if (plVar7 != (long *)0x0) {
              if (iVar11 == 5) {
                _err_print_index_error
                          ("material_get_data_request_function",
                           "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x99c,5,5
                           ,"p_shader_type","SHADER_TYPE_MAX","",false,false);
                plVar7 = (long *)*puVar9;
                pcVar8 = (code *)0x0;
              }
              else {
                pcVar8 = *(code **)(this + ((long)iVar11 + 0x44) * 8 + 8);
              }
              plVar7 = (long *)(*pcVar8)(plVar7);
              lVar3 = plVar13[0xc];
              plVar13[1] = (long)plVar7;
              plVar7[3] = *plVar13;
              (**(code **)(*plVar7 + 8))(plVar7,lVar3);
              (*(code *)**(undefined8 **)plVar13[1])();
              plVar7 = (long *)*puVar9;
            }
            *(int *)(plVar13 + 3) = iVar11;
            if (iVar1 <= (int)lVar12 + 1) break;
            lVar12 = lVar12 + 1;
          }
        }
        if (plVar7 != (long *)0x0) {
          plVar13 = (long *)puVar9[7];
          if (plVar13 != (long *)0x0) {
            do {
              plVar10 = (long *)plVar13[6];
              if (plVar10 != (long *)0x0) {
                do {
                  (**(code **)(*plVar7 + 8))(plVar7,plVar13 + 2,plVar10[3],(int)plVar10[2]);
                  plVar10 = (long *)*plVar10;
                  plVar7 = (long *)*puVar9;
                } while (plVar10 != (long *)0x0);
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
            goto LAB_00107de4;
          }
          goto LAB_00107de9;
        }
      }
      iVar11 = *(int *)((long)puVar9 + 0x74);
      if (iVar11 != 0) {
        lVar2 = puVar9[10];
        lVar12 = 0;
        while( true ) {
          pMVar4 = *(Material **)(lVar2 + lVar12 * 8);
          Dependency::changed_notify(pMVar4 + 0x88,1);
          _material_queue_update(this,pMVar4,true,true);
          if (iVar11 <= (int)lVar12 + 1) break;
          lVar12 = lVar12 + 1;
        }
      }
      lVar2 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar7 = (long *)(local_48 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010804e;
    }
    if (*(int *)(puVar9 + 0xf) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("shader_set_code",
                     "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x7a0,
                     "Parameter \"shader\" is null.",0,0);
    return;
  }
LAB_0010804e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::MaterialStorage::_material_uniform_set_erased(void*) */

ulong RendererRD::MaterialStorage::_material_uniform_set_erased(void *param_1)

{
  uint uVar1;
  ulong in_RAX;
  ulong uVar2;
  Material *pMVar3;
  
                    /* WARNING: Load size is inaccurate */
  uVar2 = *param_1;
  if ((uVar2 == 0) || (in_RAX = uVar2 & 0xffffffff, *(uint *)(singleton + 0x26c) <= (uint)uVar2)) {
    return in_RAX;
  }
  pMVar3 = (Material *)
           ((in_RAX % (ulong)*(uint *)(singleton + 0x268)) * 0xc0 +
           *(long *)(*(long *)(singleton + 600) + (in_RAX / *(uint *)(singleton + 0x268)) * 8));
  if (*(int *)(pMVar3 + 0xb8) == (int)(uVar2 >> 0x20)) {
    if (*(long *)(pMVar3 + 8) != 0) {
      _material_queue_update(singleton,pMVar3,false,true);
    }
    uVar2 = Dependency::changed_notify(pMVar3 + 0x88,1);
    return uVar2;
  }
  uVar1 = *(int *)(pMVar3 + 0xb8) + 0x80000000;
  if (0x7ffffffe < uVar1) {
    return (ulong)uVar1;
  }
  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                   "Method/function failed. Returning: nullptr",
                   "Attempting to use an uninitialized RID",0);
  return 0;
}



/* RendererRD::MaterialStorage::_update_queued_materials() */

void __thiscall RendererRD::MaterialStorage::_update_queued_materials(MaterialStorage *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  
  iVar6 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x2b8));
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  do {
    lVar1 = *(long *)(this + 0x2a8);
    while( true ) {
      if (lVar1 == 0) {
        pthread_mutex_unlock((pthread_mutex_t *)(this + 0x2b8));
        return;
      }
      lVar1 = *(long *)(lVar1 + 8);
      cVar5 = '\0';
      plVar2 = *(long **)(lVar1 + 8);
      if (plVar2 != (long *)0x0) {
        cVar5 = (**(code **)(*plVar2 + 0x10))
                          (plVar2,lVar1 + 0x28,*(undefined1 *)(lVar1 + 0x20),
                           *(undefined1 *)(lVar1 + 0x21));
      }
      *(undefined2 *)(lVar1 + 0x20) = 0;
      if (*(MaterialStorage **)(lVar1 + 0x68) == this + 0x2a8) {
        lVar3 = *(long *)(lVar1 + 0x78);
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar1 + 0x80);
        }
        lVar4 = *(long *)(lVar1 + 0x80);
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        if (lVar1 + 0x68 == *(long *)(this + 0x2a8)) {
          *(undefined8 *)(this + 0x2a8) = *(undefined8 *)(lVar1 + 0x78);
          lVar3 = *(long *)(this + 0x2b0);
        }
        else {
          lVar3 = *(long *)(this + 0x2b0);
        }
        if (lVar1 + 0x68 == lVar3) {
          *(long *)(this + 0x2b0) = lVar4;
        }
        *(undefined8 *)(lVar1 + 0x68) = 0;
        *(undefined1 (*) [16])(lVar1 + 0x78) = (undefined1  [16])0x0;
      }
      else {
        _err_print_error("remove","./core/templates/self_list.h",0x50,
                         "Condition \"p_elem->_root != this\" is true.",0,0);
      }
      if (cVar5 == '\0') break;
      Dependency::changed_notify(lVar1 + 0x88,1);
      lVar1 = *(long *)(this + 0x2a8);
    }
  } while( true );
}



/* RendererRD::MaterialStorage::material_get_shader_data(RID) */

undefined8 __thiscall
RendererRD::MaterialStorage::material_get_shader_data(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(singleton + 0x26c))) {
    lVar3 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(singleton + 0x268)) * 0xc0 +
            *(long *)(*(long *)(singleton + 600) +
                     ((param_2 & 0xffffffff) / (ulong)*(uint *)(singleton + 0x268)) * 8);
    iVar1 = *(int *)(lVar3 + 0xb8);
    if (iVar1 == (int)(param_2 >> 0x20)) {
      puVar2 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        return *puVar2;
      }
    }
    else if (iVar1 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
      return 0;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::MaterialStorage::samplers_rd_allocate(float,
   RenderingServer::ViewportAnisotropicFiltering) const */

undefined1 (*) [16]
RendererRD::MaterialStorage::samplers_rd_allocate
          (undefined4 param_1,undefined1 (*param_2) [16],undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  long lVar12;
  SamplerState *pSVar13;
  undefined8 uVar14;
  int iVar15;
  long in_FS_OFFSET;
  float fVar16;
  undefined4 local_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pauVar10 = param_2;
  do {
    *pauVar10 = (undefined1  [16])0x0;
    pauVar11 = pauVar10 + 2;
    pauVar10[1] = (undefined1  [16])0x0;
    pauVar10 = pauVar11;
  } while (param_2 + 0xe != pauVar11);
  *(undefined4 *)(param_2[0xe] + 8) = param_4;
  *(undefined4 *)param_2[0xe] = param_1;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_98,"rendering/textures/default_filters/use_nearest_mipmap_filter",
             false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
  param_2[0xe][4] = bVar7;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    StringName::unref();
  }
  uVar2 = _LC90;
  uVar1 = _LC88;
  iVar15 = 1;
  uVar8 = (uint)!bVar7;
  fVar16 = (float)(1 << ((byte)param_4 & 0x1f));
  do {
    uStack_88 = (undefined4)uVar1;
    uVar5 = uStack_88;
    uStack_84 = (undefined4)((ulong)uVar1 >> 0x20);
    uVar6 = uStack_84;
    local_80 = local_80 & 0xffffff0000000000;
    local_78 = CONCAT35(local_78._5_3_,0x3f800000);
    local_60 = local_60 & 0xffffff00;
    local_98 = (undefined4)uVar2;
    uVar3 = local_98;
    uStack_94 = (undefined4)((ulong)uVar2 >> 0x20);
    uVar4 = uStack_94;
    switch(iVar15) {
    default:
      iVar9 = 1;
      while( true ) {
        local_68 = 0x200000000;
        local_70 = 7;
        local_98 = __LC87;
        uStack_94 = _UNK_00121f34;
        uStack_90 = _UNK_00121f38;
        if (iVar9 == 3) break;
        local_98 = __LC87;
        uStack_94 = _UNK_00121f34;
        uStack_90 = _UNK_00121f38;
        uStack_8c = _UNK_00121f3c;
        uStack_88 = uVar5;
        uStack_84 = uVar6;
        pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
        uVar14 = RenderingDevice::sampler_create(pSVar13);
        *(undefined8 *)(param_2[2] + 8) = uVar14;
        iVar9 = 2;
        while( true ) {
          local_80 = 0;
          local_78 = 0x3f800000;
          local_70 = 7;
          local_60 = 0;
          local_68 = 0x200000000;
          local_98 = __LC87;
          uStack_94 = _UNK_00121f34;
          uStack_90 = _UNK_00121f38;
          if (iVar9 != 2) break;
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
          uVar14 = RenderingDevice::sampler_create(pSVar13);
          *(undefined8 *)param_2[3] = uVar14;
          iVar9 = 3;
        }
      }
LAB_00108798:
      local_70 = 7;
      uStack_84 = 1;
      uStack_8c = uVar3;
      uStack_88 = uVar4;
      pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
      lVar12 = (long)iVar15;
      iVar15 = iVar15 + 1;
      uVar14 = RenderingDevice::sampler_create(pSVar13);
      *(undefined8 *)(param_2[lVar12 * 2 + 1] + 8) = uVar14;
      if (iVar15 == 7) {
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return param_2;
      }
      break;
    case 2:
      iVar9 = 1;
      do {
        local_70 = 7;
        local_68 = 0x200000000;
        uStack_90 = _UNK_00121f38;
        if (iVar9 == 2) {
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          local_98 = uVar3;
          uStack_94 = uVar4;
          pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
          uVar14 = RenderingDevice::sampler_create(pSVar13);
          *(undefined8 *)param_2[5] = uVar14;
          iVar9 = 3;
        }
        else {
          local_98 = uVar3;
          uStack_94 = uVar4;
          if (iVar9 == 3) goto LAB_00108798;
          uStack_8c = _UNK_00121f3c;
          uStack_88 = uVar5;
          uStack_84 = uVar6;
          pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
          uVar14 = RenderingDevice::sampler_create(pSVar13);
          *(undefined8 *)(param_2[4] + 8) = uVar14;
          iVar9 = iVar15;
        }
        local_80 = 0;
        local_78 = 0x3f800000;
        local_60 = 0;
      } while( true );
    case 3:
      iVar9 = 1;
      do {
        local_68 = 0x260ad78ec;
        local_70 = 7;
        local_80 = CONCAT44(local_80._4_4_,param_1);
        local_98 = __LC87;
        uStack_94 = _UNK_00121f34;
        if (iVar9 == 2) {
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_90 = uVar8;
          pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
          uVar14 = RenderingDevice::sampler_create(pSVar13);
          *(undefined8 *)param_2[7] = uVar14;
          iVar9 = iVar15;
        }
        else {
          uStack_90 = uVar8;
          if (iVar9 == 3) goto LAB_00108798;
          uStack_8c = _UNK_00121f3c;
          uStack_88 = uVar5;
          uStack_84 = uVar6;
          pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
          uVar14 = RenderingDevice::sampler_create(pSVar13);
          *(undefined8 *)(param_2[6] + 8) = uVar14;
          iVar9 = 2;
        }
        local_80 = 0;
        local_78 = 0x3f800000;
        local_60 = 0;
      } while( true );
    case 4:
      iVar9 = 1;
      do {
        local_68 = 0x260ad78ec;
        local_70 = 7;
        local_80 = CONCAT44(local_80._4_4_,param_1);
        if (iVar9 == 2) {
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          local_98 = uVar3;
          uStack_94 = uVar4;
          uStack_90 = uVar8;
          pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
          uVar14 = RenderingDevice::sampler_create(pSVar13);
          *(undefined8 *)param_2[9] = uVar14;
          iVar9 = 3;
        }
        else {
          local_98 = uVar3;
          uStack_94 = uVar4;
          uStack_90 = uVar8;
          if (iVar9 == 3) goto LAB_00108798;
          uStack_8c = _UNK_00121f3c;
          uStack_88 = uVar5;
          uStack_84 = uVar6;
          pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
          uVar14 = RenderingDevice::sampler_create(pSVar13);
          *(undefined8 *)(param_2[8] + 8) = uVar14;
          iVar9 = 2;
        }
        local_80 = 0;
        local_78 = 0x3f800000;
        local_60 = 0;
      } while( true );
    case 5:
      iVar9 = 1;
      do {
        local_68 = 0x260ad78ec;
        local_70 = 7;
        local_80 = CONCAT35(local_80._5_3_,0x100000000);
        local_80 = CONCAT44(local_80._4_4_,param_1);
        local_78 = CONCAT44(local_78._4_4_,fVar16);
        local_98 = __LC87;
        uStack_94 = _UNK_00121f34;
        if (iVar9 == 2) {
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_90 = uVar8;
          pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
          uVar14 = RenderingDevice::sampler_create(pSVar13);
          *(undefined8 *)param_2[0xb] = uVar14;
          iVar9 = 3;
        }
        else {
          uStack_90 = uVar8;
          if (iVar9 == 3) goto LAB_00108798;
          uStack_8c = _UNK_00121f3c;
          uStack_88 = uVar5;
          uStack_84 = uVar6;
          pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
          uVar14 = RenderingDevice::sampler_create(pSVar13);
          *(undefined8 *)(param_2[10] + 8) = uVar14;
          iVar9 = 2;
        }
        local_78 = 0;
        local_60 = 0;
      } while( true );
    case 6:
      iVar9 = 1;
      do {
        local_68 = 0x260ad78ec;
        local_70 = 7;
        local_80 = CONCAT35(local_80._5_3_,0x100000000);
        local_80 = CONCAT44(local_80._4_4_,param_1);
        local_78 = CONCAT44(local_78._4_4_,fVar16);
        if (iVar9 == 2) {
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          local_98 = uVar3;
          uStack_94 = uVar4;
          uStack_90 = uVar8;
          pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
          uVar14 = RenderingDevice::sampler_create(pSVar13);
          *(undefined8 *)param_2[0xd] = uVar14;
          iVar9 = 3;
        }
        else {
          local_98 = uVar3;
          uStack_94 = uVar4;
          uStack_90 = uVar8;
          if (iVar9 == 3) goto LAB_00108798;
          uStack_8c = _UNK_00121f3c;
          uStack_88 = uVar5;
          uStack_84 = uVar6;
          pSVar13 = (SamplerState *)RenderingDevice::get_singleton();
          uVar14 = RenderingDevice::sampler_create(pSVar13);
          *(undefined8 *)(param_2[0xc] + 8) = uVar14;
          iVar9 = 2;
        }
        local_78 = 0;
        local_60 = 0;
      } while( true );
    }
  } while( true );
}



/* RendererRD::MaterialStorage::samplers_rd_free(RendererRD::MaterialStorage::Samplers&) const */

void __thiscall
RendererRD::MaterialStorage::samplers_rd_free(MaterialStorage *this,Samplers *param_1)

{
  undefined8 uVar1;
  long lVar2;
  Samplers *pSVar3;
  int iVar4;
  
  iVar4 = 1;
  pSVar3 = param_1 + 0x20;
  do {
    lVar2 = 1;
    do {
      if (*(long *)(pSVar3 + lVar2 * 8) != 0) {
        uVar1 = RenderingDevice::get_singleton();
        RenderingDevice::free
                  (uVar1,*(undefined8 *)(param_1 + ((long)(int)lVar2 + (long)iVar4 * 4) * 8));
        *(undefined8 *)(pSVar3 + lVar2 * 8) = 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
    iVar4 = iVar4 + 1;
    pSVar3 = pSVar3 + 0x20;
  } while (iVar4 != 7);
  return;
}



/* RendererRD::MaterialStorage::material_set_data_request_function(RendererRD::MaterialStorage::ShaderType,
   RendererRD::MaterialStorage::MaterialData* (*)(RendererRD::MaterialStorage::ShaderData*)) */

void __thiscall
RendererRD::MaterialStorage::material_set_data_request_function
          (MaterialStorage *this,uint param_2,undefined8 param_3)

{
  if (param_2 < 5) {
    *(undefined8 *)(this + (long)(int)param_2 * 8 + 0x228) = param_3;
    return;
  }
  _err_print_index_error
            ("material_set_data_request_function",
             "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x997,(ulong)param_2,5,
             "p_shader_type","SHADER_TYPE_MAX","",false,false);
  return;
}



/* RendererRD::MaterialStorage::material_get_data_request_function(RendererRD::MaterialStorage::ShaderType)
    */

undefined8 __thiscall
RendererRD::MaterialStorage::material_get_data_request_function(MaterialStorage *this,uint param_2)

{
  if (param_2 < 5) {
    return *(undefined8 *)(this + (long)(int)param_2 * 8 + 0x228);
  }
  _err_print_index_error
            ("material_get_data_request_function",
             "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x99c,(ulong)param_2,5,
             "p_shader_type","SHADER_TYPE_MAX","",false,false);
  return 0;
}



/* RendererRD::MaterialStorage::global_shader_parameters_load_settings(bool) */

void __thiscall
RendererRD::MaterialStorage::global_shader_parameters_load_settings
          (MaterialStorage *this,bool param_1)

{
  String *pSVar1;
  Object *pOVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  Object *pOVar15;
  char cVar16;
  uint uVar17;
  List *pLVar18;
  Variant *pVVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long in_FS_OFFSET;
  long *local_b8;
  long local_b0;
  Variant local_a8 [8];
  long local_a0;
  long local_98;
  long local_90;
  Object *local_88;
  undefined8 local_80;
  int local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (long *)0x0;
  pLVar18 = (List *)ProjectSettings::get_singleton();
  Object::get_property_list(pLVar18,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_b8,0));
  if (local_b8 != (long *)0x0) {
    lVar5 = *local_b8;
joined_r0x00108b84:
    if (lVar5 != 0) {
      pSVar1 = (String *)(lVar5 + 8);
      cVar16 = String::begins_with((char *)pSVar1);
      if (cVar16 != '\0') {
        String::get_slice((char *)&local_88,(int)pSVar1);
        StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
        pOVar15 = local_88;
        if (local_88 != (Object *)0x0) {
          LOCK();
          pOVar2 = local_88 + -0x10;
          *(long *)pOVar2 = *(long *)pOVar2 + -1;
          UNLOCK();
          if (*(long *)pOVar2 == 0) {
            local_88 = (Object *)0x0;
            Memory::free_static(pOVar15 + -0x10,false);
          }
        }
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_88,pSVar1,false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        Variant::operator_cast_to_Dictionary(local_a8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
          StringName::unref();
        }
        Variant::Variant((Variant *)local_58,"type");
        cVar16 = Dictionary::has(local_a8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar16 != '\0') {
          Variant::Variant((Variant *)local_58,"value");
          cVar16 = Dictionary::has(local_a8);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (cVar16 == '\0') {
            _err_print_error("global_shader_parameters_load_settings",
                             "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x6b0,
                             "Condition \"!d.has(\"value\")\" is true. Continuing.",0,0);
            goto LAB_00108f24;
          }
          Variant::Variant((Variant *)local_58,"type");
          Dictionary::operator[](local_a8);
          Variant::operator_cast_to_String((Variant *)&local_a0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar25 = 0;
          do {
            cVar16 = operator==((&global_shader_parameters_load_settings(bool)::
                                  global_var_type_names)[lVar25],(String *)&local_a0);
            if (cVar16 != '\0') {
              Variant::Variant((Variant *)local_58,"value");
              pVVar19 = (Variant *)Dictionary::operator[](local_a8);
              Variant::Variant((Variant *)local_78,pVVar19);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (0x17 < (uint)lVar25) {
                Variant::operator_cast_to_String((Variant *)&local_98);
                if (((param_1) && (local_98 != 0)) && (1 < *(uint *)(local_98 + -8))) {
                  local_90 = 0;
                  local_88 = (Object *)&_LC24;
                  local_80 = 0;
                  String::parse_latin1((StrRange *)&local_90);
                  ResourceLoader::load
                            ((String *)&local_88,(Variant *)&local_98,(StrRange *)&local_90,1);
                  lVar6 = local_90;
                  if (local_90 != 0) {
                    LOCK();
                    plVar3 = (long *)(local_90 + -0x10);
                    *plVar3 = *plVar3 + -1;
                    UNLOCK();
                    if (*plVar3 == 0) {
                      local_90 = 0;
                      Memory::free_static((void *)(lVar6 + -0x10),false);
                    }
                  }
                  Variant::Variant((Variant *)local_58,local_88);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  local_78[0] = local_58[0];
                  local_70 = local_50;
                  uStack_68 = uStack_48;
                  if (((local_88 != (Object *)0x0) &&
                      (cVar16 = RefCounted::unreference(), pOVar15 = local_88, cVar16 != '\0')) &&
                     (cVar16 = predelete_handler(local_88), cVar16 != '\0')) {
                    (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
                    Memory::free_static(pOVar15,false);
                  }
                }
                else {
                  local_88 = (Object *)0x0;
                  Variant::Variant((Variant *)local_58,(String *)&local_88);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  local_78[0] = local_58[0];
                  local_70 = local_50;
                  uStack_68 = uStack_48;
                }
                lVar6 = local_98;
                if (local_98 != 0) {
                  LOCK();
                  plVar3 = (long *)(local_98 + -0x10);
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                    local_98 = 0;
                    Memory::free_static((void *)(lVar6 + -0x10),false);
                  }
                }
              }
              if ((*(long *)(this + 0x110) == 0) || (*(int *)(this + 0x134) == 0))
              goto LAB_00108fa0;
              uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x130) * 4);
              uVar24 = CONCAT44(0,uVar4);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x130) * 8);
              if (local_b0 == 0) {
                uVar17 = StringName::get_empty_hash();
              }
              else {
                uVar17 = *(uint *)(local_b0 + 0x20);
              }
              if (uVar17 == 0) {
                uVar17 = 1;
              }
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar17 * lVar6;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar24;
              lVar21 = SUB168(auVar7 * auVar11,8);
              uVar22 = *(uint *)(*(long *)(this + 0x118) + lVar21 * 4);
              iVar20 = SUB164(auVar7 * auVar11,8);
              if (uVar22 == 0) goto LAB_00108fa0;
              uVar23 = 0;
              goto LAB_00108eba;
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 != 0x1d);
          _err_print_error("global_shader_parameters_load_settings",
                           "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x6dd,
                           "Condition \"gvtype == RenderingServer::GLOBAL_VAR_TYPE_MAX\" is true. Continuing."
                           ,0,0);
          if (local_a0 == 0) goto LAB_00108f24;
          goto LAB_00108f03;
        }
        _err_print_error("global_shader_parameters_load_settings",
                         "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x6af,
                         "Condition \"!d.has(\"type\")\" is true. Continuing.",0,0);
        goto LAB_00108f24;
      }
      goto LAB_00108b98;
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_b8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    uVar23 = uVar23 + 1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)(iVar20 + 1) * lVar6;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar24;
    lVar21 = SUB168(auVar8 * auVar12,8);
    uVar22 = *(uint *)(*(long *)(this + 0x118) + lVar21 * 4);
    iVar20 = SUB164(auVar8 * auVar12,8);
    if ((uVar22 == 0) ||
       (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar22 * lVar6, auVar13._8_8_ = 0,
       auVar13._0_8_ = uVar24, auVar10._8_8_ = 0,
       auVar10._0_8_ = (ulong)((uVar4 + iVar20) - SUB164(auVar9 * auVar13,8)) * lVar6,
       auVar14._8_8_ = 0, auVar14._0_8_ = uVar24, SUB164(auVar10 * auVar14,8) < uVar23)) break;
LAB_00108eba:
    if ((uVar22 == uVar17) &&
       (*(long *)(*(long *)(*(long *)(this + 0x110) + lVar21 * 8) + 0x10) == local_b0)) {
      (**(code **)(*(long *)this + 0x28))(this,(StringName *)&local_b0,(Variant *)local_78);
      goto LAB_00108ee3;
    }
  }
LAB_00108fa0:
  (**(code **)(*(long *)this + 0x10))(this,(StringName *)&local_b0,(uint)lVar25,(Variant *)local_78)
  ;
LAB_00108ee3:
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_a0 != 0) {
LAB_00108f03:
    lVar25 = local_a0;
    LOCK();
    plVar3 = (long *)(local_a0 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar25 + -0x10),false);
    }
  }
LAB_00108f24:
  Dictionary::~Dictionary((Dictionary *)local_a8);
  if ((StringName::configured == '\0') || (local_b0 == 0)) {
LAB_00108b98:
    lVar5 = *(long *)(lVar5 + 0x30);
  }
  else {
    StringName::unref();
    lVar5 = *(long *)(lVar5 + 0x30);
  }
  goto joined_r0x00108b84;
}



/* RendererRD::MaterialStorage::material_update_dependency(RID, DependencyTracker*) */

void __thiscall
RendererRD::MaterialStorage::material_update_dependency
          (MaterialStorage *this,ulong param_2,Dependency *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  Dependency *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    if ((uint)param_2 < *(uint *)(this + 0x26c)) {
      lVar4 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
              *(long *)(*(long *)(this + 600) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8);
      if (*(int *)(lVar4 + 0xb8) == (int)(param_2 >> 0x20)) {
        HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert
                  (local_58);
        uVar1 = *(undefined4 *)(param_3 + 0x18);
        local_58[0] = param_3;
        puVar3 = (undefined4 *)
                 HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
                 ::operator[]((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
                               *)(lVar4 + 0x88),(DependencyTracker **)local_58);
        lVar2 = *(long *)(lVar4 + 0x60);
        *puVar3 = uVar1;
        if (lVar2 == 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010938c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)this + 0x128))(this,*(undefined8 *)(lVar4 + 0x60),param_3);
          return;
        }
        goto LAB_00109443;
      }
      if (*(int *)(lVar4 + 0xb8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("material_update_dependency",
                     "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x930,
                     "Parameter \"material\" is null.",0,0);
    return;
  }
LAB_00109443:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::MaterialStorage::material_free(RID) */

void __thiscall RendererRD::MaterialStorage::material_free(MaterialStorage *this,ulong param_2)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  Material *this_00;
  long lVar8;
  long in_FS_OFFSET;
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    uVar5 = (uint)param_2;
    if (uVar5 < *(uint *)(this + 0x26c)) {
      lVar8 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
              *(long *)(*(long *)(this + 600) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8);
      iVar6 = (int)(param_2 >> 0x20);
      if (*(int *)(lVar8 + 0xb8) == iVar6) {
        for (plVar7 = *(long **)(lVar8 + 0x40); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          while ((int)plVar7[3] != 0x1c) {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_00109518;
          }
          Variant::operator_cast_to_Array(local_38);
          Array::clear();
          Array::~Array((Array *)local_38);
        }
LAB_00109518:
        (**(code **)(*(long *)this + 0xe8))(this,param_2,0);
        Dependency::deleted_notify((RID *)(lVar8 + 0x88));
        __mutex = (pthread_mutex_t *)(this + 0x280);
        iVar3 = pthread_mutex_lock(__mutex);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar3);
        }
        if (uVar5 < *(uint *)(this + 0x26c)) {
          uVar2 = (param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268);
          lVar8 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0;
          this_00 = (Material *)(*(long *)(*(long *)(this + 600) + uVar2 * 8) + lVar8);
          iVar3 = *(int *)(this_00 + 0xb8);
          if (iVar3 < 0) {
            pthread_mutex_unlock(__mutex);
            _err_print_error(&_LC69,"./core/templates/rid_owner.h",0x16c,"Method/function failed.",
                             "Attempted to free an uninitialized or invalid RID",0,0);
          }
          else if (iVar6 == iVar3) {
            Material::~Material(this_00);
            lVar1 = *(long *)(this + 0x260);
            *(undefined4 *)(*(long *)(*(long *)(this + 600) + uVar2 * 8) + 0xb8 + lVar8) =
                 0xffffffff;
            uVar4 = *(int *)(this + 0x270) - 1;
            *(uint *)(this + 0x270) = uVar4;
            *(uint *)(*(long *)(lVar1 + ((ulong)uVar4 / (ulong)*(uint *)(this + 0x268)) * 8) +
                     ((ulong)uVar4 % (ulong)*(uint *)(this + 0x268)) * 4) = uVar5;
            pthread_mutex_unlock(__mutex);
          }
          else {
            pthread_mutex_unlock(__mutex);
            _err_print_error(&_LC69,"./core/templates/rid_owner.h",0x171,"Method/function failed.",0
                             ,0);
          }
        }
        else {
          pthread_mutex_unlock(__mutex);
          _err_print_error(&_LC69,"./core/templates/rid_owner.h",0x161,"Method/function failed.",0,0
                          );
        }
        goto LAB_001095f6;
      }
      if (*(int *)(lVar8 + 0xb8) + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("material_free","servers/rendering/renderer_rd/storage_rd/material_storage.cpp",
                   0x87b,"Parameter \"material\" is null.",0,0);
LAB_001095f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::MaterialStorage::global_shader_parameter_remove(StringName const&) */

void __thiscall
RendererRD::MaterialStorage::global_shader_parameter_remove
          (MaterialStorage *this,StringName *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  long lVar39;
  int iVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  long *plVar44;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  
  if (*(long *)(this + 0x110) == 0) {
    return;
  }
  if (*(int *)(this + 0x134) == 0) {
    return;
  }
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x130) * 4);
  uVar47 = CONCAT44(0,uVar6);
  lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x130) * 8);
  if (*(long *)param_1 == 0) {
    uVar38 = StringName::get_empty_hash();
  }
  else {
    uVar38 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = (ulong)uVar38 * lVar39;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar47;
  lVar42 = SUB168(auVar10 * auVar24,8);
  uVar41 = *(uint *)(*(long *)(this + 0x118) + lVar42 * 4);
  iVar40 = SUB164(auVar10 * auVar24,8);
  if (uVar41 == 0) {
    return;
  }
  uVar46 = 0;
  while ((uVar38 != uVar41 ||
         (*(long *)(*(long *)(*(long *)(this + 0x110) + lVar42 * 8) + 0x10) != *(long *)param_1))) {
    uVar46 = uVar46 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar40 + 1) * lVar39;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar47;
    lVar42 = SUB168(auVar11 * auVar25,8);
    uVar41 = *(uint *)(*(long *)(this + 0x118) + lVar42 * 4);
    iVar40 = SUB164(auVar11 * auVar25,8);
    if (uVar41 == 0) {
      return;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar41 * lVar39;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar47;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((uVar6 + iVar40) - SUB164(auVar12 * auVar26,8)) * lVar39;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar47;
    if (SUB164(auVar13 * auVar27,8) < uVar46) {
      return;
    }
  }
  lVar39 = HashMap<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable>>>
           ::operator[]((HashMap<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable>>>
                         *)(this + 0x108),param_1);
  if (*(int *)(lVar39 + 0x60) < 0) {
    this[0x170] = (MaterialStorage)0x1;
  }
  else {
    *(undefined4 *)(*(long *)(this + 0x158) + (long)*(int *)(lVar39 + 0x60) * 4) = 0;
    this[0x171] = (MaterialStorage)0x1;
  }
  if (*(long *)(this + 0x110) == 0) {
    return;
  }
  if (*(int *)(this + 0x134) == 0) {
    return;
  }
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x130) * 4);
  lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x130) * 8);
  if (*(long *)param_1 == 0) {
    uVar38 = StringName::get_empty_hash();
  }
  else {
    uVar38 = *(uint *)(*(long *)param_1 + 0x20);
  }
  uVar47 = CONCAT44(0,uVar6);
  lVar42 = *(long *)(this + 0x118);
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (ulong)uVar38 * lVar39;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar47;
  lVar43 = SUB168(auVar14 * auVar28,8);
  uVar41 = *(uint *)(lVar42 + lVar43 * 4);
  uVar46 = SUB164(auVar14 * auVar28,8);
  if (uVar41 == 0) {
    return;
  }
  uVar45 = 0;
  while ((uVar38 != uVar41 ||
         (lVar7 = *(long *)(this + 0x110),
         *(long *)(*(long *)(lVar7 + lVar43 * 8) + 0x10) != *(long *)param_1))) {
    uVar45 = uVar45 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(uVar46 + 1) * lVar39;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar47;
    lVar43 = SUB168(auVar15 * auVar29,8);
    uVar41 = *(uint *)(lVar42 + lVar43 * 4);
    uVar46 = SUB164(auVar15 * auVar29,8);
    if (uVar41 == 0) {
      return;
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar41 * lVar39;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar47;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar6 + uVar46) - SUB164(auVar16 * auVar30,8)) * lVar39;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar47;
    if (SUB164(auVar17 * auVar31,8) < uVar45) {
      return;
    }
  }
  lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x130) * 8);
  uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x130) * 4);
  uVar47 = CONCAT44(0,uVar6);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = (ulong)(uVar46 + 1) * lVar39;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar47;
  lVar43 = SUB168(auVar18 * auVar32,8);
  puVar4 = (uint *)(lVar42 + lVar43 * 4);
  uVar41 = SUB164(auVar18 * auVar32,8);
  uVar38 = *puVar4;
  if (uVar38 != 0) {
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)uVar38 * lVar39;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar47;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)((uVar6 + uVar41) - SUB164(auVar19 * auVar33,8)) * lVar39;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar47;
    iVar40 = SUB164(auVar20 * auVar34,8);
    while (uVar45 = uVar41, iVar40 != 0) {
      puVar5 = (uint *)(lVar42 + (ulong)uVar46 * 4);
      *puVar4 = *puVar5;
      puVar1 = (undefined8 *)(lVar7 + lVar43 * 8);
      *puVar5 = uVar38;
      puVar2 = (undefined8 *)(lVar7 + (ulong)uVar46 * 8);
      uVar8 = *puVar1;
      *puVar1 = *puVar2;
      *puVar2 = uVar8;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = (ulong)(uVar45 + 1) * lVar39;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar47;
      lVar43 = SUB168(auVar23 * auVar37,8);
      puVar4 = (uint *)(lVar42 + lVar43 * 4);
      uVar41 = SUB164(auVar23 * auVar37,8);
      uVar38 = *puVar4;
      uVar46 = uVar45;
      if (uVar38 == 0) break;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = (ulong)uVar38 * lVar39;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar47;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = (ulong)((uVar41 + uVar6) - SUB164(auVar21 * auVar35,8)) * lVar39;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar47;
      iVar40 = SUB164(auVar22 * auVar36,8);
    }
  }
  uVar47 = (ulong)uVar46;
  *(undefined4 *)(lVar42 + uVar47 * 4) = 0;
  plVar3 = (long *)(lVar7 + uVar47 * 8);
  plVar44 = (long *)*plVar3;
  if (*(long **)(this + 0x120) == plVar44) {
    *(long *)(this + 0x120) = *plVar44;
    plVar44 = (long *)*plVar3;
  }
  if (*(long **)(this + 0x128) == plVar44) {
    *(long *)(this + 0x128) = plVar44[1];
    plVar44 = (long *)*plVar3;
  }
  if ((long *)plVar44[1] != (long *)0x0) {
    *(long *)plVar44[1] = *plVar44;
    plVar44 = (long *)*plVar3;
  }
  if (*plVar44 != 0) {
    *(long *)(*plVar44 + 8) = plVar44[1];
    plVar44 = (long *)*plVar3;
  }
  if (Variant::needs_deinit[(int)plVar44[0xc]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)plVar44[9]] != '\0') {
    Variant::_clear_internal();
  }
  pvVar9 = (void *)plVar44[3];
  if (pvVar9 != (void *)0x0) {
    if (*(int *)((long)plVar44 + 0x3c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar44 + 7) * 4) != 0) {
        memset((void *)plVar44[6],0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar44 + 7) * 4) * 4);
      }
      *(undefined4 *)((long)plVar44 + 0x3c) = 0;
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static((void *)plVar44[5],false);
    Memory::free_static((void *)plVar44[4],false);
    Memory::free_static((void *)plVar44[6],false);
  }
  if ((StringName::configured != '\0') && (plVar44[2] != 0)) {
    StringName::unref();
  }
  Memory::free_static(plVar44,false);
  *(undefined8 *)(*(long *)(this + 0x110) + uVar47 * 8) = 0;
  *(int *)(this + 0x134) = *(int *)(this + 0x134) + -1;
  return;
}



/* RendererRD::MaterialStorage::global_shader_parameters_instance_allocate(RID) */

int __thiscall
RendererRD::MaterialStorage::global_shader_parameters_instance_allocate
          (MaterialStorage *this,long param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long local_40 [2];
  
  local_40[0] = param_2;
  if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4));
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
    uVar11 = param_2 * 0x3ffff - 1;
    uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
    uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
    uVar11 = uVar11 >> 0x16 ^ uVar11;
    uVar16 = uVar11 & 0xffffffff;
    if ((int)uVar11 == 0) {
      uVar16 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar16 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar18;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar17 = *(uint *)(*(long *)(this + 0x188) + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar17 != 0) {
      uVar19 = 0;
      do {
        if (((uint)uVar16 == uVar17) &&
           (param_2 == *(long *)(*(long *)(*(long *)(this + 0x180) + lVar15 * 8) + 0x10))) {
          _err_print_error("global_shader_parameters_instance_allocate",
                           "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x6ff,
                           "Condition \"global_shader_uniforms.instance_buffer_pos.has(p_instance)\" is true. Returning: -1"
                           ,0,0);
          return -1;
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar17 = *(uint *)(*(long *)(this + 0x188) + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar17 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar17 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0x1a0) * 4) + iVar14) -
                                    SUB164(auVar5 * auVar9,8)) * lVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar18, uVar19 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  uVar17 = *(uint *)(this + 0x16c);
  if (0xf < uVar17) {
    iVar14 = 0;
    do {
      while( true ) {
        iVar1 = *(int *)(*(long *)(this + 0x158) + (long)iVar14 * 4);
        if (iVar1 != 0) break;
        uVar19 = iVar14 + 1;
        while (iVar1 = *(int *)(*(long *)(this + 0x158) + (ulong)uVar19 * 4), iVar1 == 0) {
          uVar19 = uVar19 + 1;
          if (uVar19 == iVar14 + 0x10U) {
            piVar13 = (int *)HashMap<RID,int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,int>>>
                             ::operator[]((HashMap<RID,int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,int>>>
                                           *)(this + 0x178),(RID *)local_40);
            *piVar13 = iVar14;
            if (-1 < iVar14) {
              *(undefined4 *)(*(long *)(this + 0x158) + (long)iVar14 * 4) = 0x10;
              return iVar14;
            }
            goto LAB_00109de4;
          }
        }
        iVar14 = uVar19 + iVar1;
        if (uVar17 < iVar14 + 0x10U) goto LAB_00109dd0;
      }
      iVar14 = iVar14 + iVar1;
    } while (iVar14 + 0x10U <= uVar17);
  }
LAB_00109dd0:
  puVar12 = (undefined4 *)
            HashMap<RID,int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,int>>>
            ::operator[]((HashMap<RID,int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,int>>>
                          *)(this + 0x178),(RID *)local_40);
  *puVar12 = 0xffffffff;
LAB_00109de4:
  _err_print_error("global_shader_parameters_instance_allocate",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x702,
                   "Condition \"pos < 0\" is true. Returning: -1",
                   "Too many instances using shader instance variables. Increase buffer size in Project Settings."
                   ,0,0);
  return -1;
}



/* RendererRD::MaterialStorage::global_shader_parameters_instance_free(RID) */

ulong __thiscall
RendererRD::MaterialStorage::global_shader_parameters_instance_free
          (MaterialStorage *this,long param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ulong uVar34;
  int *piVar35;
  ulong uVar36;
  ulong uVar37;
  int iVar38;
  uint uVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  uint uVar43;
  long *plVar44;
  ulong uVar45;
  uint uVar46;
  uint uVar47;
  uint *puVar48;
  long local_40 [2];
  
  local_40[0] = param_2;
  if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
    uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4));
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
    uVar34 = param_2 * 0x3ffff - 1;
    uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
    uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
    uVar34 = uVar34 >> 0x16 ^ uVar34;
    uVar42 = uVar34 & 0xffffffff;
    if ((int)uVar34 == 0) {
      uVar42 = 1;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar42 * lVar5;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar45;
    lVar40 = SUB168(auVar8 * auVar21,8);
    uVar43 = *(uint *)(*(long *)(this + 0x188) + lVar40 * 4);
    iVar38 = SUB164(auVar8 * auVar21,8);
    if (uVar43 != 0) {
      uVar47 = 0;
      do {
        if (((uint)uVar42 == uVar43) &&
           (param_2 == *(long *)(*(long *)(*(long *)(this + 0x180) + lVar40 * 8) + 0x10))) {
          piVar35 = (int *)HashMap<RID,int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,int>>>
                           ::operator[]((HashMap<RID,int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,int>>>
                                         *)(this + 0x178),(RID *)local_40);
          iVar38 = *piVar35;
          if (-1 < iVar38) {
            *(undefined4 *)(*(long *)(this + 0x158) + (long)iVar38 * 4) = 0;
          }
          lVar5 = *(long *)(this + 0x180);
          if (lVar5 == 0) {
            return (long)iVar38;
          }
          if (*(uint *)(this + 0x1a4) == 0) {
            return (ulong)*(uint *)(this + 0x1a4);
          }
          lVar40 = *(long *)(this + 0x188);
          uVar43 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
          uVar45 = CONCAT44(0,uVar43);
          lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar42 * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          auVar12 = auVar12 * auVar25;
          uVar47 = *(uint *)(lVar40 + auVar12._8_8_ * 4);
          uVar34 = (ulong)auVar12._8_4_;
          if (uVar47 == 0) {
            return auVar12._0_8_;
          }
          uVar46 = 0;
          uVar37 = auVar12._8_8_;
          while( true ) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((int)uVar34 + 1) * lVar6;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            auVar15 = auVar15 * auVar28;
            uVar41 = auVar15._8_8_;
            uVar36 = auVar15._0_8_;
            uVar39 = auVar15._8_4_;
            if (((uint)uVar42 == uVar47) &&
               (uVar36 = *(ulong *)(lVar5 + uVar37 * 8), param_2 == *(long *)(uVar36 + 0x10)))
            break;
            uVar47 = *(uint *)(lVar40 + uVar41 * 4);
            uVar34 = uVar41 & 0xffffffff;
            uVar46 = uVar46 + 1;
            if (uVar47 == 0) {
              return uVar36;
            }
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar47 * lVar6;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar43 + uVar39) - SUB164(auVar13 * auVar26,8)) * lVar6;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = uVar41;
            if (SUB164(auVar14 * auVar27,8) < uVar46) {
              return SUB168(auVar14 * auVar27,0);
            }
          }
          puVar48 = (uint *)(lVar40 + uVar41 * 4);
          uVar47 = *puVar48;
          if ((uVar47 != 0) &&
             (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar47 * lVar6, auVar29._8_8_ = 0,
             auVar29._0_8_ = uVar45, auVar17._8_8_ = 0,
             auVar17._0_8_ = (ulong)((uVar39 + uVar43) - SUB164(auVar16 * auVar29,8)) * lVar6,
             auVar30._8_8_ = 0, auVar30._0_8_ = uVar45, uVar42 = (ulong)uVar39, uVar37 = uVar34,
             SUB164(auVar17 * auVar30,8) != 0)) {
            while( true ) {
              uVar34 = uVar42;
              puVar1 = (uint *)(lVar40 + uVar37 * 4);
              *puVar48 = *puVar1;
              puVar2 = (undefined8 *)(lVar5 + uVar41 * 8);
              *puVar1 = uVar47;
              puVar3 = (undefined8 *)(lVar5 + uVar37 * 8);
              uVar7 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar7;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = (ulong)((int)uVar34 + 1) * lVar6;
              auVar33._8_8_ = 0;
              auVar33._0_8_ = uVar45;
              uVar41 = SUB168(auVar20 * auVar33,8);
              puVar48 = (uint *)(lVar40 + uVar41 * 4);
              uVar47 = *puVar48;
              if ((uVar47 == 0) ||
                 (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar47 * lVar6, auVar31._8_8_ = 0,
                 auVar31._0_8_ = uVar45, auVar19._8_8_ = 0,
                 auVar19._0_8_ =
                      (ulong)((SUB164(auVar20 * auVar33,8) + uVar43) - SUB164(auVar18 * auVar31,8))
                      * lVar6, auVar32._8_8_ = 0, auVar32._0_8_ = uVar45,
                 SUB164(auVar19 * auVar32,8) == 0)) break;
              uVar42 = uVar41 & 0xffffffff;
              uVar37 = uVar34;
            }
          }
          plVar4 = (long *)(lVar5 + uVar34 * 8);
          *(undefined4 *)(lVar40 + uVar34 * 4) = 0;
          plVar44 = (long *)*plVar4;
          if (*(long **)(this + 400) == plVar44) {
            *(long *)(this + 400) = *plVar44;
            plVar44 = (long *)*plVar4;
            if (plVar44 != *(long **)(this + 0x198)) goto LAB_0010a15a;
          }
          else if (plVar44 != *(long **)(this + 0x198)) goto LAB_0010a15a;
          *(long *)(this + 0x198) = plVar44[1];
          plVar44 = (long *)*plVar4;
LAB_0010a15a:
          if ((long *)plVar44[1] != (long *)0x0) {
            *(long *)plVar44[1] = *plVar44;
            plVar44 = (long *)*plVar4;
          }
          if (*plVar44 != 0) {
            *(long *)(*plVar44 + 8) = plVar44[1];
            plVar44 = (long *)*plVar4;
          }
          Memory::free_static(plVar44,false);
          uVar42 = *(ulong *)(this + 0x180);
          *(undefined8 *)(uVar42 + uVar34 * 8) = 0;
          *(int *)(this + 0x1a4) = *(int *)(this + 0x1a4) + -1;
          return uVar42;
        }
        uVar47 = uVar47 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(iVar38 + 1) * lVar5;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar45;
        lVar40 = SUB168(auVar9 * auVar22,8);
        uVar43 = *(uint *)(*(long *)(this + 0x188) + lVar40 * 4);
        iVar38 = SUB164(auVar9 * auVar22,8);
      } while ((uVar43 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar43 * lVar5, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar45, auVar11._8_8_ = 0,
              auVar11._0_8_ =
                   (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4) +
                           iVar38) - SUB164(auVar10 * auVar23,8)) * lVar5, auVar24._8_8_ = 0,
              auVar24._0_8_ = uVar45, uVar47 <= SUB164(auVar11 * auVar24,8)));
    }
  }
  uVar34 = _err_print_error("global_shader_parameters_instance_free",
                            "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x708,
                            "Condition \"!global_shader_uniforms.instance_buffer_pos.has(p_instance)\" is true."
                            ,0,0);
  return uVar34;
}



/* RendererRD::MaterialStorage::material_set_shader(RID, RID) */

void __thiscall
RendererRD::MaterialStorage::material_set_shader(MaterialStorage *this,ulong param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  ulong uVar33;
  uint *puVar34;
  char *pcVar35;
  int iVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  undefined8 uVar40;
  Material *pMVar41;
  ulong uVar42;
  uint *puVar43;
  long *plVar44;
  uint *puVar45;
  uint uVar46;
  ulong uVar47;
  ulong uVar48;
  uint uVar49;
  long in_FS_OFFSET;
  Material *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x26c))) {
    pMVar41 = (Material *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
              *(long *)(*(long *)(this + 600) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8));
    if (*(int *)(pMVar41 + 0xb8) == (int)(param_2 >> 0x20)) {
      plVar44 = *(long **)(pMVar41 + 8);
      if (plVar44 != (long *)0x0) {
        (**(code **)(*plVar44 + 0x18))(plVar44);
        Memory::free_static(plVar44,false);
        *(undefined8 *)(pMVar41 + 8) = 0;
      }
      lVar6 = *(long *)(pMVar41 + 0x10);
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x50);
        if ((lVar7 != 0) && (*(int *)(lVar6 + 0x74) != 0)) {
          lVar8 = *(long *)(lVar6 + 0x68);
          uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar6 + 0x70) * 4);
          lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar6 + 0x70) * 8);
          uVar47 = CONCAT44(0,uVar32);
          uVar33 = (long)pMVar41 * 0x3ffff - 1;
          uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
          uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
          uVar33 = uVar33 >> 0x16 ^ uVar33;
          uVar42 = uVar33 & 0xffffffff;
          if ((int)uVar33 == 0) {
            uVar42 = 1;
          }
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar42 * lVar9;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar47;
          lVar38 = SUB168(auVar12 * auVar22,8);
          uVar49 = *(uint *)(lVar8 + lVar38 * 4);
          iVar36 = SUB164(auVar12 * auVar22,8);
          if (uVar49 != 0) {
            uVar46 = 0;
LAB_0010a3fc:
            if (uVar49 != (uint)uVar42) goto LAB_0010a3b0;
            lVar10 = *(long *)(lVar6 + 0x58);
            uVar49 = *(uint *)(lVar10 + lVar38 * 4);
            uVar33 = (ulong)uVar49;
            if (*(Material **)(lVar7 + uVar33 * 8) != pMVar41) goto LAB_0010a3b0;
            lVar11 = *(long *)(lVar6 + 0x60);
            puVar1 = (uint *)(lVar11 + uVar33 * 4);
            uVar46 = *puVar1;
            uVar42 = (ulong)uVar46;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(uVar46 + 1) * lVar9;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar47;
            lVar38 = SUB168(auVar16 * auVar26,8) * 4;
            uVar37 = SUB164(auVar16 * auVar26,8);
            uVar48 = (ulong)uVar37;
            puVar43 = (uint *)(lVar8 + lVar38);
            if ((*puVar43 == 0) ||
               (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)*puVar43 * lVar9, auVar27._8_8_ = 0,
               auVar27._0_8_ = uVar47, auVar18._8_8_ = 0,
               auVar18._0_8_ = (ulong)((uVar32 + uVar37) - SUB164(auVar17 * auVar27,8)) * lVar9,
               auVar28._8_8_ = 0, auVar28._0_8_ = uVar47, SUB164(auVar18 * auVar28,8) == 0)) {
              uVar48 = (ulong)uVar46;
            }
            else {
              while( true ) {
                puVar34 = (uint *)(lVar38 + lVar10);
                puVar2 = (uint *)(lVar10 + uVar42 * 4);
                puVar45 = (uint *)(uVar42 * 4 + lVar8);
                puVar3 = (undefined4 *)(lVar11 + (ulong)*puVar34 * 4);
                puVar4 = (undefined4 *)(lVar11 + (ulong)*puVar2 * 4);
                uVar5 = *puVar4;
                *puVar4 = *puVar3;
                *puVar3 = uVar5;
                uVar46 = *puVar43;
                *puVar43 = *puVar45;
                *puVar45 = uVar46;
                uVar46 = *puVar34;
                *puVar34 = *puVar2;
                *puVar2 = uVar46;
                auVar21._8_8_ = 0;
                auVar21._0_8_ = (ulong)((int)uVar48 + 1) * lVar9;
                auVar31._8_8_ = 0;
                auVar31._0_8_ = uVar47;
                uVar39 = SUB168(auVar21 * auVar31,8);
                lVar38 = uVar39 * 4;
                puVar43 = (uint *)(lVar8 + lVar38);
                if ((*puVar43 == 0) ||
                   (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)*puVar43 * lVar9, auVar29._8_8_ = 0,
                   auVar29._0_8_ = uVar47, auVar20._8_8_ = 0,
                   auVar20._0_8_ =
                        (ulong)((SUB164(auVar21 * auVar31,8) + uVar32) - SUB164(auVar19 * auVar29,8)
                               ) * lVar9, auVar30._8_8_ = 0, auVar30._0_8_ = uVar47,
                   SUB164(auVar20 * auVar30,8) == 0)) break;
                uVar42 = uVar48;
                uVar48 = uVar39 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar8 + uVar48 * 4) = 0;
            uVar32 = *(int *)(lVar6 + 0x74) - 1;
            *(uint *)(lVar6 + 0x74) = uVar32;
            if (uVar49 < uVar32) {
              uVar46 = *(uint *)(lVar11 + (ulong)uVar32 * 4);
              *(undefined8 *)(lVar7 + uVar33 * 8) = *(undefined8 *)(lVar7 + (ulong)uVar32 * 8);
              *puVar1 = uVar46;
              *(uint *)(lVar10 + (ulong)*(uint *)(lVar11 + (ulong)*(uint *)(lVar6 + 0x74) * 4) * 4)
                   = uVar49;
            }
          }
        }
        *(undefined8 *)(pMVar41 + 0x10) = 0;
        *(undefined4 *)(pMVar41 + 0x18) = 5;
      }
      goto LAB_0010a572;
    }
    if (*(int *)(pMVar41 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar40 = 0x88d;
    pcVar35 = "Parameter \"material\" is null.";
    goto LAB_0010a726;
  }
  goto LAB_0010a828;
LAB_0010a3b0:
  uVar46 = uVar46 + 1;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (ulong)(iVar36 + 1) * lVar9;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar47;
  lVar38 = SUB168(auVar13 * auVar23,8);
  uVar49 = *(uint *)(lVar8 + lVar38 * 4);
  iVar36 = SUB164(auVar13 * auVar23,8);
  if ((uVar49 == 0) ||
     (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar49 * lVar9, auVar24._8_8_ = 0,
     auVar24._0_8_ = uVar47, auVar15._8_8_ = 0,
     auVar15._0_8_ = (ulong)((uVar32 + iVar36) - SUB164(auVar14 * auVar24,8)) * lVar9,
     auVar25._8_8_ = 0, auVar25._0_8_ = uVar47, SUB164(auVar15 * auVar25,8) < uVar46))
  goto LAB_0010a6d0;
  goto LAB_0010a3fc;
LAB_0010a6d0:
  *(undefined8 *)(pMVar41 + 0x10) = 0;
  *(undefined4 *)(pMVar41 + 0x18) = 5;
LAB_0010a572:
  if (param_3 == 0) {
    Dependency::changed_notify(pMVar41 + 0x88,1);
    *(undefined4 *)(pMVar41 + 0x1c) = 0;
LAB_0010a6a8:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if ((uint)param_3 < *(uint *)(this + 0x1ec)) {
      plVar44 = (long *)(((param_3 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x80 +
                        *(long *)(*(long *)(this + 0x1d8) +
                                 ((param_3 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
      if ((int)plVar44[0xf] == (int)(param_3 >> 0x20)) {
        lVar6 = plVar44[3];
        *(long **)(pMVar41 + 0x10) = plVar44;
        *(ulong *)(pMVar41 + 0x18) = CONCAT44((uint)param_3,(int)lVar6);
        HashSet<RendererRD::MaterialStorage::Material*,HashMapHasherDefault,HashMapComparatorDefault<RendererRD::MaterialStorage::Material*>>
        ::insert(local_58);
        if ((int)plVar44[3] != 5) {
          if (*plVar44 == 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              uVar40 = 0x8ab;
              pcVar35 = "Parameter \"shader->data\" is null.";
              goto LAB_0010a726;
            }
          }
          else {
            plVar44 = (long *)(**(code **)(this + (long)(int)plVar44[3] * 8 + 0x228))();
            uVar40 = *(undefined8 *)(pMVar41 + 0x60);
            *(long **)(pMVar41 + 8) = plVar44;
            plVar44[3] = param_2;
            (**(code **)(*plVar44 + 8))(plVar44,uVar40);
            (**(code **)**(undefined8 **)(pMVar41 + 8))
                      (*(undefined8 **)(pMVar41 + 8),*(undefined4 *)(pMVar41 + 0x58));
            Dependency::changed_notify(pMVar41 + 0x88,1);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              _material_queue_update(this,pMVar41,true,true);
              return;
            }
          }
          goto LAB_0010a828;
        }
        goto LAB_0010a6a8;
      }
      if ((int)plVar44[0xf] + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar40 = 0x8a1;
      pcVar35 = "Parameter \"shader\" is null.";
LAB_0010a726:
      _err_print_error("material_set_shader",
                       "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",uVar40,
                       pcVar35,0,0);
      return;
    }
  }
LAB_0010a828:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::MaterialStorage::material_set_param(RID, StringName const&, Variant const&) */

void __thiscall
RendererRD::MaterialStorage::material_set_param
          (MaterialStorage *this,ulong param_2,StringName *param_3,Variant *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte bVar29;
  uint uVar30;
  Variant *this_00;
  char *pcVar31;
  byte bVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  undefined8 uVar36;
  Material *pMVar37;
  long *plVar38;
  uint uVar39;
  ulong uVar40;
  uint *puVar41;
  
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x26c))) {
    pMVar37 = (Material *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x268)) * 0xc0 +
              *(long *)(*(long *)(this + 600) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x268)) * 8));
    if (*(int *)(pMVar37 + 0xb8) == (int)(param_2 >> 0x20)) {
      if (*(int *)param_4 == 0) {
        if ((*(long *)(pMVar37 + 0x30) != 0) && (*(int *)(pMVar37 + 0x54) != 0)) {
          uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pMVar37 + 0x50) * 4);
          uVar40 = CONCAT44(0,uVar4);
          lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pMVar37 + 0x50) * 8);
          if (*(long *)param_3 == 0) {
            uVar30 = StringName::get_empty_hash();
          }
          else {
            uVar30 = *(uint *)(*(long *)param_3 + 0x20);
          }
          lVar7 = *(long *)(pMVar37 + 0x38);
          if (uVar30 == 0) {
            uVar30 = 1;
          }
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar30 * lVar6;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar40;
          lVar35 = SUB168(auVar9 * auVar19,8);
          uVar34 = *(uint *)(lVar7 + lVar35 * 4);
          uVar33 = SUB164(auVar9 * auVar19,8);
          uVar39 = 0;
          if (uVar34 != 0) {
            do {
              if ((uVar30 == uVar34) &&
                 (lVar8 = *(long *)(pMVar37 + 0x30),
                 *(long *)(*(long *)(lVar8 + lVar35 * 8) + 0x10) == *(long *)param_3)) {
                lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pMVar37 + 0x50) * 8)
                ;
                uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pMVar37 + 0x50) * 4);
                uVar40 = CONCAT44(0,uVar4);
                auVar13._8_8_ = 0;
                auVar13._0_8_ = (ulong)(uVar33 + 1) * lVar6;
                auVar23._8_8_ = 0;
                auVar23._0_8_ = uVar40;
                lVar35 = SUB168(auVar13 * auVar23,8);
                puVar41 = (uint *)(lVar7 + lVar35 * 4);
                uVar34 = SUB164(auVar13 * auVar23,8);
                uVar30 = *puVar41;
                if ((uVar30 == 0) ||
                   (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar30 * lVar6, auVar24._8_8_ = 0,
                   auVar24._0_8_ = uVar40, auVar15._8_8_ = 0,
                   auVar15._0_8_ = (ulong)((uVar4 + uVar34) - SUB164(auVar14 * auVar24,8)) * lVar6,
                   auVar25._8_8_ = 0, auVar25._0_8_ = uVar40, uVar39 = uVar33,
                   SUB164(auVar15 * auVar25,8) == 0)) goto LAB_0010aaf8;
                goto LAB_0010aaa5;
              }
              uVar39 = uVar39 + 1;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)(uVar33 + 1) * lVar6;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = uVar40;
              lVar35 = SUB168(auVar10 * auVar20,8);
              uVar34 = *(uint *)(lVar7 + lVar35 * 4);
              uVar33 = SUB164(auVar10 * auVar20,8);
            } while ((uVar34 != 0) &&
                    (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar34 * lVar6, auVar21._8_8_ = 0,
                    auVar21._0_8_ = uVar40, auVar12._8_8_ = 0,
                    auVar12._0_8_ = (ulong)((uVar4 + uVar33) - SUB164(auVar11 * auVar21,8)) * lVar6,
                    auVar22._8_8_ = 0, auVar22._0_8_ = uVar40, uVar39 <= SUB164(auVar12 * auVar22,8)
                    ));
          }
        }
LAB_0010a8d5:
        if ((*(long **)(pMVar37 + 0x10) == (long *)0x0) ||
           (plVar5 = (long *)**(long **)(pMVar37 + 0x10), plVar5 == (long *)0x0)) {
          bVar29 = true;
          bVar32 = true;
        }
        else {
          bVar29 = (**(code **)(*plVar5 + 0x28))(plVar5,param_3);
          bVar32 = bVar29 ^ 1;
        }
        _material_queue_update(this,pMVar37,(bool)bVar32,(bool)bVar29);
        return;
      }
      if (*(int *)param_4 != 0x18) {
        this_00 = (Variant *)
                  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                *)(pMVar37 + 0x28),param_3);
        Variant::operator=(this_00,param_4);
        goto LAB_0010a8d5;
      }
      uVar36 = 0x8c6;
      pcVar31 = "Condition \"p_value.get_type() == Variant::OBJECT\" is true.";
      goto LAB_0010abe2;
    }
    if (*(int *)(pMVar37 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  uVar36 = 0x8c1;
  pcVar31 = "Parameter \"material\" is null.";
LAB_0010abe2:
  _err_print_error("material_set_param",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",uVar36,pcVar31,0,
                   0);
  return;
  while (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar30 * lVar6, auVar26._8_8_ = 0,
        auVar26._0_8_ = uVar40, auVar17._8_8_ = 0,
        auVar17._0_8_ = (ulong)((uVar34 + uVar4) - SUB164(auVar16 * auVar26,8)) * lVar6,
        auVar27._8_8_ = 0, auVar27._0_8_ = uVar40, uVar39 = uVar33, SUB164(auVar17 * auVar27,8) != 0
        ) {
LAB_0010aaa5:
    uVar33 = uVar34;
    puVar3 = (uint *)(lVar7 + (ulong)uVar39 * 4);
    *puVar41 = *puVar3;
    puVar1 = (undefined8 *)(lVar8 + lVar35 * 8);
    *puVar3 = uVar30;
    puVar2 = (undefined8 *)(lVar8 + (ulong)uVar39 * 8);
    uVar36 = *puVar1;
    *puVar1 = *puVar2;
    *puVar2 = uVar36;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(uVar33 + 1) * lVar6;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    lVar35 = SUB168(auVar18 * auVar28,8);
    puVar41 = (uint *)(lVar7 + lVar35 * 4);
    uVar34 = SUB164(auVar18 * auVar28,8);
    uVar30 = *puVar41;
    if (uVar30 == 0) break;
  }
LAB_0010aaf8:
  uVar40 = (ulong)uVar33;
  *(undefined4 *)(lVar7 + uVar40 * 4) = 0;
  plVar5 = (long *)(lVar8 + uVar40 * 8);
  plVar38 = (long *)*plVar5;
  if (*(long **)(pMVar37 + 0x40) == plVar38) {
    *(long *)(pMVar37 + 0x40) = *plVar38;
    plVar38 = (long *)*plVar5;
  }
  if (*(long **)(pMVar37 + 0x48) == plVar38) {
    *(long *)(pMVar37 + 0x48) = plVar38[1];
    plVar38 = (long *)*plVar5;
  }
  if ((long *)plVar38[1] != (long *)0x0) {
    *(long *)plVar38[1] = *plVar38;
    plVar38 = (long *)*plVar5;
  }
  if (*plVar38 != 0) {
    *(long *)(*plVar38 + 8) = plVar38[1];
    plVar38 = (long *)*plVar5;
  }
  if (Variant::needs_deinit[(int)plVar38[3]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (plVar38[2] != 0)) {
    StringName::unref();
  }
  Memory::free_static(plVar38,false);
  *(undefined8 *)(*(long *)(pMVar37 + 0x30) + uVar40 * 8) = 0;
  *(int *)(pMVar37 + 0x54) = *(int *)(pMVar37 + 0x54) + -1;
  goto LAB_0010a8d5;
}



/* RendererRD::MaterialStorage::material_get_param(RID, StringName const&) const */

Variant * RendererRD::MaterialStorage::material_get_param
                    (Variant *param_1,long param_2,ulong param_3,StringName *param_4)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  Variant *pVVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  
  if ((param_3 != 0) && ((uint)param_3 < *(uint *)(param_2 + 0x26c))) {
    lVar18 = ((param_3 & 0xffffffff) % (ulong)*(uint *)(param_2 + 0x268)) * 0xc0 +
             *(long *)(*(long *)(param_2 + 600) +
                      ((param_3 & 0xffffffff) / (ulong)*(uint *)(param_2 + 0x268)) * 8);
    if (*(int *)(lVar18 + 0xb8) == (int)(param_3 >> 0x20)) {
      if ((*(long *)(lVar18 + 0x30) != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar18 + 0x50) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar18 + 0x50) * 8);
        if (*(long *)param_4 == 0) {
          uVar11 = StringName::get_empty_hash();
        }
        else {
          uVar11 = *(uint *)(*(long *)param_4 + 0x20);
        }
        uVar16 = CONCAT44(0,uVar1);
        if (uVar11 == 0) {
          uVar11 = 1;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)uVar11 * lVar2;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        lVar14 = SUB168(auVar3 * auVar7,8);
        uVar15 = *(uint *)(*(long *)(lVar18 + 0x38) + lVar14 * 4);
        iVar13 = SUB164(auVar3 * auVar7,8);
        if (uVar15 != 0) {
          uVar17 = 0;
          do {
            if ((uVar11 == uVar15) &&
               (*(long *)(*(long *)(*(long *)(lVar18 + 0x30) + lVar14 * 8) + 0x10) ==
                *(long *)param_4)) {
              pVVar12 = (Variant *)
                        HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                        ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                      *)(lVar18 + 0x28),param_4);
              Variant::Variant(param_1,pVVar12);
              return param_1;
            }
            uVar17 = uVar17 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar14 = SUB168(auVar4 * auVar8,8);
            uVar15 = *(uint *)(*(long *)(lVar18 + 0x38) + lVar14 * 4);
            iVar13 = SUB164(auVar4 * auVar8,8);
          } while ((uVar15 != 0) &&
                  (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
                  auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
                  auVar6._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
                  auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar17 <= SUB164(auVar6 * auVar10,8)));
        }
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      return param_1;
    }
    if (*(int *)(lVar18 + 0xb8) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("material_get_param",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x8d4,
                   "Parameter \"material\" is null.",0,0);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  return param_1;
}



/* RendererRD::MaterialStorage::~MaterialStorage() */

void __thiscall RendererRD::MaterialStorage::~MaterialStorage(MaterialStorage *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  Shader *this_00;
  uint uVar9;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__MaterialStorage_00121ae8;
  Memory::free_static(*(void **)(this + 0x150),true);
  Memory::free_static(*(void **)(this + 0x158),true);
  Memory::free_static(*(void **)(this + 0x160),true);
  uVar4 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar4,*(undefined8 *)(this + 0x148));
  uVar4 = RenderingDevice::get_singleton();
  RenderingDevice::free(uVar4,*(undefined8 *)(this + 0xf8));
  samplers_rd_free(this,(Samplers *)(this + 8));
  singleton = 0;
  RID_Alloc<RendererRD::MaterialStorage::Material,true>::~RID_Alloc
            ((RID_Alloc<RendererRD::MaterialStorage::Material,true> *)(this + 0x250));
  *(undefined ***)(this + 0x1d0) = &PTR__RID_Alloc_00121a00;
  uVar9 = *(uint *)(this + 0x1f0);
  if (uVar9 == 0) {
    uVar5 = (ulong)*(uint *)(this + 0x1ec);
    uVar9 = *(uint *)(this + 0x1e8);
    puVar6 = *(undefined8 **)(this + 0x1d8);
LAB_0010b0cc:
    if ((uint)uVar5 < uVar9) goto LAB_0010b114;
    lVar8 = 0;
    while( true ) {
      Memory::free_static((void *)puVar6[lVar8],false);
      lVar2 = lVar8 * 8;
      lVar8 = lVar8 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x1e0) + lVar2),false);
      if ((uint)(uVar5 / uVar9) <= (uint)lVar8) break;
      puVar6 = *(undefined8 **)(this + 0x1d8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar9);
    print_error((String *)&local_48);
    pcVar3 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar8 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
    }
    uVar9 = *(uint *)(this + 0x1e8);
    puVar6 = *(undefined8 **)(this + 0x1d8);
    if (*(int *)(this + 0x1ec) != 0) {
      uVar7 = 0;
      do {
        this_00 = (Shader *)(puVar6[uVar7 / uVar9] + (uVar7 % (ulong)uVar9) * 0x80);
        if (-1 < *(int *)(this_00 + 0x78)) {
          Shader::~Shader(this_00);
          uVar9 = *(uint *)(this + 0x1e8);
          puVar6 = *(undefined8 **)(this + 0x1d8);
        }
        uVar5 = (ulong)*(uint *)(this + 0x1ec);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      goto LAB_0010b0cc;
    }
    if (uVar9 != 0) goto LAB_0010b114;
    Memory::free_static((void *)*puVar6,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x1e0),false);
  }
  puVar6 = *(undefined8 **)(this + 0x1d8);
LAB_0010b114:
  if (puVar6 != (undefined8 *)0x0) {
    Memory::free_static(puVar6,false);
    Memory::free_static(*(void **)(this + 0x1e0),false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    GlobalShaderUniforms::~GlobalShaderUniforms((GlobalShaderUniforms *)(this + 0x108));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::MaterialStorage::~MaterialStorage() */

void __thiscall RendererRD::MaterialStorage::~MaterialStorage(MaterialStorage *this)

{
  ~MaterialStorage(this);
  operator_delete(this,0x2e0);
  return;
}



/* RendererRD::MaterialStorage::shader_allocate() */

void __thiscall RendererRD::MaterialStorage::shader_allocate(MaterialStorage *this)

{
  RID_Alloc<RendererRD::MaterialStorage::Shader,true>::allocate_rid
            ((RID_Alloc<RendererRD::MaterialStorage::Shader,true> *)(this + 0x1d0));
  return;
}



/* RendererRD::MaterialStorage::material_allocate() */

void __thiscall RendererRD::MaterialStorage::material_allocate(MaterialStorage *this)

{
  RID_Alloc<RendererRD::MaterialStorage::Material,true>::allocate_rid
            ((RID_Alloc<RendererRD::MaterialStorage::Material,true> *)(this + 0x250));
  return;
}



/* RendererRD::MaterialStorage::ShaderData::get_default_parameter(StringName const&) const */

StringName * RendererRD::MaterialStorage::ShaderData::get_default_parameter(StringName *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  code *pcVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  long *in_RDX;
  long lVar24;
  long in_RSI;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  long in_FS_OFFSET;
  bool bVar29;
  undefined1 auStack_c8 [8];
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined4 local_a0;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_RSI + 0x18) != 0) && (*(int *)(in_RSI + 0x3c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x38) * 4);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x38) * 8);
    if (*in_RDX == 0) {
      uVar21 = StringName::get_empty_hash();
    }
    else {
      uVar21 = *(uint *)(*in_RDX + 0x20);
    }
    uVar26 = CONCAT44(0,uVar2);
    lVar22 = *(long *)(in_RSI + 0x20);
    if (uVar21 == 0) {
      uVar21 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar21 * lVar3;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar26;
    lVar24 = SUB168(auVar4 * auVar12,8);
    uVar25 = *(uint *)(lVar22 + lVar24 * 4);
    iVar23 = SUB164(auVar4 * auVar12,8);
    if (uVar25 != 0) {
      uVar27 = 0;
      while ((uVar21 != uVar25 ||
             (lVar24 = *(long *)(*(long *)(*(long *)(in_RSI + 0x18) + lVar24 * 8) + 0x10),
             lVar24 != *in_RDX))) {
        uVar27 = uVar27 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar23 + 1) * lVar3;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar26;
        lVar24 = SUB168(auVar5 * auVar13,8);
        uVar25 = *(uint *)(lVar22 + lVar24 * 4);
        iVar23 = SUB164(auVar5 * auVar13,8);
        if ((uVar25 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar25 * lVar3, auVar14._8_8_ = 0,
           auVar14._0_8_ = uVar26, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((uVar2 + iVar23) - SUB164(auVar6 * auVar14,8)) * lVar3,
           auVar15._8_8_ = 0, auVar15._0_8_ = uVar26, SUB164(auVar7 * auVar15,8) < uVar27))
        goto LAB_0010b630;
      }
      if ((*(long *)(in_RSI + 0x18) == 0) || (*(int *)(in_RSI + 0x3c) == 0)) goto LAB_0010b680;
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x38) * 4);
      uVar26 = CONCAT44(0,uVar2);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x38) * 8);
      if (lVar24 == 0) {
        uVar21 = StringName::get_empty_hash();
        lVar22 = *(long *)(in_RSI + 0x20);
      }
      else {
        uVar21 = *(uint *)(lVar24 + 0x20);
      }
      if (uVar21 == 0) {
        uVar21 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar21 * lVar3;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar26;
      lVar24 = SUB168(auVar8 * auVar16,8);
      uVar25 = *(uint *)(lVar22 + lVar24 * 4);
      uVar27 = SUB164(auVar8 * auVar16,8);
      if (uVar25 == 0) goto LAB_0010b680;
      uVar28 = 0;
      while ((uVar25 != uVar21 ||
             (*(long *)(*(long *)(*(long *)(in_RSI + 0x18) + lVar24 * 8) + 0x10) != *in_RDX))) {
        uVar28 = uVar28 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar27 + 1) * lVar3;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar26;
        lVar24 = SUB168(auVar9 * auVar17,8);
        uVar25 = *(uint *)(lVar22 + lVar24 * 4);
        uVar27 = SUB164(auVar9 * auVar17,8);
        if ((uVar25 == 0) ||
           (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar25 * lVar3, auVar18._8_8_ = 0,
           auVar18._0_8_ = uVar26, auVar11._8_8_ = 0,
           auVar11._0_8_ = (ulong)((uVar2 + uVar27) - SUB164(auVar10 * auVar18,8)) * lVar3,
           auVar19._8_8_ = 0, auVar19._0_8_ = uVar26, SUB164(auVar11 * auVar19,8) < uVar28)) {
LAB_0010b680:
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
      }
      local_90 = 0;
      lVar3 = *(long *)(*(long *)(in_RSI + 0x18) + (ulong)uVar27 * 8);
      local_a8 = *(ulong *)(lVar3 + 0x28);
      local_b8 = *(undefined8 *)(lVar3 + 0x18);
      uStack_b0 = *(undefined8 *)(lVar3 + 0x20);
      local_a0 = *(undefined4 *)(lVar3 + 0x30);
      plVar1 = (long *)(*(long *)(lVar3 + 0x40) + -0x10);
      if (*(long *)(lVar3 + 0x40) != 0) {
        do {
          lVar22 = *plVar1;
          if (lVar22 == 0) goto LAB_0010b44f;
          LOCK();
          lVar24 = *plVar1;
          bVar29 = lVar22 == lVar24;
          if (bVar29) {
            *plVar1 = lVar22 + 1;
            lVar24 = lVar22;
          }
          UNLOCK();
        } while (!bVar29);
        if (lVar24 != -1) {
          local_90 = *(long *)(lVar3 + 0x40);
        }
      }
LAB_0010b44f:
      local_88 = *(undefined8 *)(lVar3 + 0x48);
      local_60 = 0;
      local_80 = *(undefined1 *)(lVar3 + 0x50);
      local_7c = *(undefined8 *)(lVar3 + 0x54);
      local_74 = *(undefined8 *)(lVar3 + 0x5c);
      local_6c = *(undefined4 *)(lVar3 + 100);
      if (*(long *)(lVar3 + 0x70) != 0) {
        CowData<String>::_unref((CowData<String> *)&local_60);
        if (*(long *)(lVar3 + 0x70) != 0) {
          plVar1 = (long *)(*(long *)(lVar3 + 0x70) + -0x10);
          do {
            lVar22 = *plVar1;
            if (lVar22 == 0) goto LAB_0010b4c5;
            LOCK();
            lVar24 = *plVar1;
            bVar29 = lVar22 == lVar24;
            if (bVar29) {
              *plVar1 = lVar22 + 1;
              lVar24 = lVar22;
            }
            UNLOCK();
          } while (!bVar29);
          if (lVar24 != -1) {
            local_60 = *(undefined8 *)(lVar3 + 0x70);
          }
        }
      }
LAB_0010b4c5:
      local_58 = *(undefined4 *)(lVar3 + 0x78);
      local_50 = 0;
      if (*(long *)(lVar3 + 0x80) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar3 + 0x80));
      }
      local_48 = 0;
      if (*(long *)(lVar3 + 0x88) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar3 + 0x88));
      }
      local_c0 = 0;
      plVar1 = (long *)(local_90 + -0x10);
      if (local_90 == 0) {
LAB_0010b6bd:
        ShaderLanguage::get_default_datatype_value
                  (param_1,local_a8 & 0xffffffff,local_a0,local_88._4_4_);
      }
      else {
        do {
          lVar3 = *plVar1;
          if (lVar3 == 0) goto LAB_0010b560;
          LOCK();
          lVar22 = *plVar1;
          bVar29 = lVar3 == lVar22;
          if (bVar29) {
            *plVar1 = lVar3 + 1;
            lVar22 = lVar3;
          }
          UNLOCK();
        } while (!bVar29);
        if (lVar22 != -1) {
          local_c0 = local_90;
        }
LAB_0010b560:
        if (local_c0 == 0) goto LAB_0010b6bd;
        ShaderLanguage::constant_value_to_variant(param_1,auStack_c8,local_a8 & 0xffffffff,local_a0)
        ;
      }
      lVar3 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_50 + -0x10),false);
        }
      }
      CowData<String>::_unref((CowData<String> *)&local_60);
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_90 + -0x10),false);
        }
      }
      goto LAB_0010b63f;
    }
  }
LAB_0010b630:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010b63f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RendererRD::MaterialStorage::global_shader_parameter_get_list() const */

long RendererRD::MaterialStorage::global_shader_parameter_get_list(void)

{
  int iVar1;
  long lVar2;
  StringName *pSVar3;
  StringName *pSVar4;
  long *plVar5;
  long in_RSI;
  long in_RDI;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60 [2];
  StringName *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Engine::get_singleton();
  if (*(char *)(lVar2 + 0xc0) == '\0') {
    _err_print_error("global_shader_parameter_get_list",
                     "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x64b,
                     "Method/function failed. Returning: Vector<StringName>()",
                     "This function should never be used outside the editor, it can severely damage performance."
                     ,0,0);
    *(undefined8 *)(in_RDI + 8) = 0;
    goto LAB_0010b915;
  }
  local_50[0] = (StringName *)0x0;
  plVar5 = *(long **)(in_RSI + 0x120);
  if (plVar5 == (long *)0x0) {
LAB_0010bb60:
    pSVar4 = (StringName *)0x0;
  }
  else {
    pSVar4 = (StringName *)0x0;
    do {
      StringName::StringName((StringName *)local_60,(StringName *)(plVar5 + 2));
      if (pSVar4 == (StringName *)0x0) {
        lVar2 = 1;
      }
      else {
        lVar2 = *(long *)(pSVar4 + -8) + 1;
      }
      iVar1 = CowData<StringName>::resize<false>((CowData<StringName> *)local_50,lVar2);
      pSVar4 = local_50[0];
      if (iVar1 == 0) {
        if (local_50[0] == (StringName *)0x0) {
          lVar8 = -1;
          lVar2 = 0;
        }
        else {
          lVar2 = *(long *)(local_50[0] + -8);
          lVar8 = lVar2 + -1;
          if (-1 < lVar8) {
            CowData<StringName>::_copy_on_write((CowData<StringName> *)local_50);
            pSVar4 = local_50[0];
            StringName::operator=(local_50[0] + lVar8 * 8,(StringName *)local_60);
            goto LAB_0010b8d5;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar2,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
        pSVar4 = local_50[0];
      }
LAB_0010b8d5:
      if ((StringName::configured != '\0') && (local_60[0] != 0)) {
        StringName::unref();
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    if (pSVar4 == (StringName *)0x0) goto LAB_0010bb60;
    lVar2 = *(long *)(pSVar4 + -8);
    if ((lVar2 != 0) &&
       (CowData<StringName>::_copy_on_write((CowData<StringName> *)local_50), pSVar4 = local_50[0],
       lVar2 != 1)) {
      lVar8 = 0;
      lVar6 = lVar2;
      do {
        lVar6 = lVar6 >> 1;
        lVar8 = lVar8 + 1;
      } while (lVar6 != 1);
      lVar8 = lVar8 * 2;
      lVar6 = 1;
      lVar7 = lVar2;
      if (lVar2 < 0x11) {
        do {
          lVar8 = lVar6 + 1;
          SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0,lVar6,pSVar4);
          lVar6 = lVar8;
        } while (lVar2 != lVar8);
      }
      else {
        do {
          lVar8 = lVar8 + -1;
          pSVar3 = (StringName *)
                   SortArray<StringName,StringName::AlphCompare,true>::median_of_3
                             (pSVar4,pSVar4 + (lVar7 >> 1) * 8,pSVar4 + lVar7 * 8 + -8);
          StringName::StringName((StringName *)local_60,pSVar3);
          lVar6 = SortArray<StringName,StringName::AlphCompare,true>::partitioner
                            (0,lVar7,(StringName *)local_60,pSVar4);
          if ((StringName::configured != '\0') && (local_60[0] != 0)) {
            StringName::unref();
          }
          SortArray<StringName,StringName::AlphCompare,true>::introsort(lVar6,lVar7,pSVar4,lVar8);
          lVar7 = 1;
          if (lVar6 < 0x11) goto LAB_0010ba38;
          lVar7 = lVar6;
        } while (lVar8 != 0);
        SortArray<StringName,StringName::AlphCompare,true>::partial_sort(0,lVar6,lVar6,pSVar4);
        lVar7 = 1;
LAB_0010ba38:
        do {
          lVar8 = lVar7 + 1;
          SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0,lVar7,pSVar4);
          lVar7 = lVar8;
        } while (lVar8 != 0x10);
        do {
          StringName::StringName((StringName *)local_60,pSVar4 + lVar8 * 8);
          SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
                    (lVar8,(StringName *)local_60,pSVar4);
          if ((StringName::configured != '\0') && (local_60[0] != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
      }
    }
  }
  *(StringName **)(in_RDI + 8) = pSVar4;
LAB_0010b915:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_RDI;
}



/* Vector<RID>::push_back(RID) [clone .isra.0] */

void __thiscall Vector<RID>::push_back(Vector<RID> *this,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<RID>::resize<false>((CowData<RID> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<RID>::_copy_on_write((CowData<RID> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Error CowData<int>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<int> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<int> *pCVar10;
  CowData<int> *pCVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    pCVar4 = (CowData<int> *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
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
    _copy_on_write(this);
    pCVar4 = (CowData<int> *)(lVar12 * 4);
    if (pCVar4 != (CowData<int> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<int> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 4 != 0) {
    uVar5 = param_1 * 4 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<int> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<int> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00115144();
        return;
      }
      if (pCVar10 != pCVar4) {
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
          if (puVar6 != (undefined8 *)0x0) {
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)this = puVar8;
            goto LAB_0010bd91;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_0010be82;
        }
        pCVar11 = this;
        iVar3 = _realloc(this,(long)pCVar10);
        if (iVar3 != 0) {
          return;
        }
      }
      puVar8 = *(undefined8 **)this;
      if (puVar8 == (undefined8 *)0x0) {
        resize<false>((long)pCVar11);
        return;
      }
LAB_0010bd91:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_0010be82:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDevice::Uniform>::_copy_on_write(CowData<RenderingDevice::Uniform> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x28 != 0) {
    uVar7 = lVar1 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    puVar8 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        puVar6 = (undefined8 *)((long)puVar8 + *(long *)this + (-0x10 - (long)puVar5));
        *puVar8 = *puVar6;
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar6 + 1);
        uVar2 = puVar6[2];
        puVar8[4] = 0;
        lVar3 = puVar6[4];
        puVar8[2] = uVar2;
        if (lVar3 != 0) {
          CowData<RID>::_ref((CowData<RID> *)(puVar8 + 4),(CowData *)(puVar6 + 4));
        }
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + 5;
      } while (lVar1 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RendererRD::MaterialStorage::ShaderData::set_default_texture_parameter(StringName const&, RID,
   int) */

long * __thiscall
RendererRD::MaterialStorage::ShaderData::set_default_texture_parameter
          (ShaderData *this,StringName *param_1,long param_3,uint param_4)

{
  HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
  *this_00;
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  long *plVar29;
  HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
  *pHVar30;
  ulong uVar31;
  int iVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint local_3c [3];
  
  plVar29 = *(long **)(this + 0x48);
  local_3c[0] = param_4;
  if (param_3 == 0) {
    if ((plVar29 != (long *)0x0) && (*(int *)(this + 0x6c) != 0)) {
      uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
      lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      uVar31 = CONCAT44(0,uVar28);
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar39 * lVar35;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar31;
      auVar4 = auVar4 * auVar16;
      lVar33 = auVar4._8_8_;
      plVar29 = auVar4._0_8_;
      uVar38 = *(uint *)(*(long *)(this + 0x50) + lVar33 * 4);
      iVar32 = auVar4._8_4_;
      if (uVar38 != 0) {
        uVar37 = 0;
        while ((uVar38 != uVar39 ||
               (*(long *)(*(long *)(*(long *)(this + 0x48) + lVar33 * 8) + 0x10) != *(long *)param_1
               ))) {
          uVar37 = uVar37 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(iVar32 + 1) * lVar35;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar31;
          auVar5 = auVar5 * auVar17;
          lVar33 = auVar5._8_8_;
          uVar38 = *(uint *)(*(long *)(this + 0x50) + lVar33 * 4);
          iVar32 = auVar5._8_4_;
          if (uVar38 == 0) {
            return auVar5._0_8_;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)uVar38 * lVar35;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar31;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)((uVar28 + iVar32) - SUB164(auVar6 * auVar18,8)) * lVar35;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar31;
          if (SUB164(auVar7 * auVar19,8) < uVar37) {
            return SUB168(auVar7 * auVar19,0);
          }
        }
        this_00 = (HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                   *)(this + 0x40);
        plVar29 = (long *)HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                          ::operator[](this_00,param_1);
        plVar1 = plVar29 + 1;
        if ((*plVar1 != 0) && (*(int *)((long)plVar29 + 0x2c) != 0)) {
          puVar2 = (uint *)(plVar29 + 5);
          uVar31 = *(ulong *)(hash_table_size_primes_inv + (ulong)*puVar2 * 8);
          uVar28 = (local_3c[0] >> 0x10 ^ local_3c[0]) * -0x7a143595;
          uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
          uVar39 = uVar28 ^ uVar28 >> 0x10;
          if (uVar28 == uVar28 >> 0x10) {
            uVar39 = 1;
            uVar34 = uVar31;
          }
          else {
            uVar34 = uVar39 * uVar31;
          }
          uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*puVar2 * 4));
          plVar3 = plVar29 + 2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar36;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar34;
          auVar8 = auVar8 * auVar20;
          lVar35 = auVar8._8_8_;
          plVar29 = auVar8._0_8_;
          uVar28 = *(uint *)(*plVar3 + lVar35 * 4);
          iVar32 = auVar8._8_4_;
          if (uVar28 != 0) {
            uVar38 = 0;
            do {
              if ((uVar39 == uVar28) &&
                 (local_3c[0] == *(uint *)(*(long *)(*plVar1 + lVar35 * 8) + 0x10))) {
                pHVar30 = (HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                           *)HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                             ::operator[](this_00,param_1);
                HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                ::erase(pHVar30,(int *)local_3c);
                lVar35 = HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                         ::operator[](this_00,param_1);
                if (*(uint *)(lVar35 + 0x2c) != 0) {
                  return (long *)(ulong)*(uint *)(lVar35 + 0x2c);
                }
                plVar29 = (long *)HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                                  ::erase(this_00,param_1);
                return plVar29;
              }
              uVar38 = uVar38 + 1;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (iVar32 + 1) * uVar31;
              auVar21._8_8_ = 0;
              auVar21._0_8_ = uVar36;
              auVar9 = auVar9 * auVar21;
              lVar35 = auVar9._8_8_;
              uVar28 = *(uint *)(*plVar3 + lVar35 * 4);
              iVar32 = auVar9._8_4_;
              if (uVar28 == 0) {
                return auVar9._0_8_;
              }
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar28 * uVar31;
              auVar22._8_8_ = 0;
              auVar22._0_8_ = uVar36;
              auVar11._8_8_ = 0;
              auVar11._0_8_ =
                   ((*(uint *)(hash_table_size_primes + (ulong)*puVar2 * 4) + iVar32) -
                   SUB164(auVar10 * auVar22,8)) * uVar31;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = uVar36;
            } while (uVar38 <= SUB164(auVar11 * auVar23,8));
            return SUB168(auVar11 * auVar23,0);
          }
        }
      }
    }
    return plVar29;
  }
  if ((plVar29 != (long *)0x0) && (*(int *)(this + 0x6c) != 0)) {
    uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x68) * 4);
    uVar31 = CONCAT44(0,uVar28);
    lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x68) * 8);
    if (*(long *)param_1 == 0) {
      uVar39 = StringName::get_empty_hash();
    }
    else {
      uVar39 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar39 == 0) {
      uVar39 = 1;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar39 * lVar35;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar31;
    lVar33 = SUB168(auVar12 * auVar24,8);
    uVar38 = *(uint *)(*(long *)(this + 0x50) + lVar33 * 4);
    iVar32 = SUB164(auVar12 * auVar24,8);
    if (uVar38 != 0) {
      uVar37 = 0;
      do {
        if ((uVar39 == uVar38) &&
           (*(long *)(*(long *)(*(long *)(this + 0x48) + lVar33 * 8) + 0x10) == *(long *)param_1))
        goto LAB_0010c3e2;
        uVar37 = uVar37 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)(iVar32 + 1) * lVar35;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar31;
        lVar33 = SUB168(auVar13 * auVar25,8);
        uVar38 = *(uint *)(*(long *)(this + 0x50) + lVar33 * 4);
        iVar32 = SUB164(auVar13 * auVar25,8);
      } while ((uVar38 != 0) &&
              (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar35, auVar26._8_8_ = 0,
              auVar26._0_8_ = uVar31, auVar15._8_8_ = 0,
              auVar15._0_8_ = (ulong)((uVar28 + iVar32) - SUB164(auVar14 * auVar26,8)) * lVar35,
              auVar27._8_8_ = 0, auVar27._0_8_ = uVar31, uVar37 <= SUB164(auVar15 * auVar27,8)));
    }
  }
  pHVar30 = (HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
             *)HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
               ::operator[]((HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                             *)(this + 0x40),param_1);
  if (*(int *)(pHVar30 + 0x2c) == 0) {
    uVar39 = *(uint *)(pHVar30 + 0x28);
    uVar28 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
LAB_0010c387:
    if (0x16 < uVar28) goto LAB_0010c3e2;
  }
  else {
    uVar39 = *(uint *)(pHVar30 + 0x28);
    uVar28 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
    if (*(long *)(pHVar30 + 8) == 0) goto LAB_0010c387;
    lVar35 = 0;
    if (uVar28 != 0) {
      do {
        if (*(int *)(*(long *)(pHVar30 + 0x10) + lVar35) != 0) {
          *(int *)(*(long *)(pHVar30 + 0x10) + lVar35) = 0;
          Memory::free_static(*(void **)(*(long *)(pHVar30 + 8) + lVar35 * 2),false);
          *(undefined8 *)(*(long *)(pHVar30 + 8) + lVar35 * 2) = 0;
        }
        lVar35 = lVar35 + 4;
      } while (lVar35 != (ulong)uVar28 << 2);
      uVar39 = *(uint *)(pHVar30 + 0x28);
      *(undefined4 *)(pHVar30 + 0x2c) = 0;
      *(undefined1 (*) [16])(pHVar30 + 0x18) = (undefined1  [16])0x0;
      uVar28 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
      goto LAB_0010c387;
    }
    *(undefined4 *)(pHVar30 + 0x2c) = 0;
    *(undefined1 (*) [16])(pHVar30 + 0x18) = (undefined1  [16])0x0;
  }
  if (uVar39 != 0x1c) {
    uVar31 = (ulong)uVar39;
    do {
      uVar28 = (int)uVar31 + 1;
      uVar31 = (ulong)uVar28;
      if (0x16 < *(uint *)(hash_table_size_primes + uVar31 * 4)) {
        if (uVar28 != uVar39) {
          if (*(long *)(pHVar30 + 8) == 0) {
            *(uint *)(pHVar30 + 0x28) = uVar28;
          }
          else {
            HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
            ::_resize_and_rehash(pHVar30,uVar28);
          }
        }
        goto LAB_0010c3e2;
      }
    } while (uVar28 != 0x1c);
  }
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_0010c3e2:
  pHVar30 = (HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
             *)HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
               ::operator[]((HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                             *)(this + 0x40),param_1);
  plVar29 = (long *)HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                    ::operator[](pHVar30,(int *)local_3c);
  *plVar29 = param_3;
  return plVar29;
}



/* RendererRD::MaterialStorage::shader_set_default_texture_parameter(RID, StringName const&, RID,
   int) */

ulong __thiscall
RendererRD::MaterialStorage::shader_set_default_texture_parameter
          (MaterialStorage *this,ulong param_2,StringName *param_3,ulong param_4,uint param_5)

{
  pthread_mutex_t *__mutex;
  HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
  *this_00;
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar26;
  uint uVar27;
  long lVar28;
  HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
  *pHVar29;
  ulong uVar30;
  ulong extraout_RDX;
  long lVar31;
  ulong uVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  long *plVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint local_3c [3];
  
  local_3c[0] = param_5;
  if ((param_2 == 0) || (*(uint *)(this + 0x1ec) <= (uint)param_2)) {
LAB_0010c8b8:
    uVar30 = _err_print_error("shader_set_default_texture_parameter",
                              "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x805,
                              "Parameter \"shader\" is null.",0,0);
    return uVar30;
  }
  uVar30 = (param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8);
  plVar37 = (long *)(uVar30 * 0x80 +
                    *(long *)(*(long *)(this + 0x1d8) +
                             ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8));
  uVar27 = *(uint *)(plVar37 + 0xf);
  if (uVar27 != (uint)(param_2 >> 0x20)) {
    if (uVar27 + 0x80000000 < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
    goto LAB_0010c8b8;
  }
  if (param_4 != 0) {
    lVar28 = RendererRD::TextureStorage::get_singleton();
    __mutex = (pthread_mutex_t *)(lVar28 + 0x138);
    iVar26 = pthread_mutex_lock(__mutex);
    if (iVar26 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar26);
    }
    if ((((uint)param_4 < *(uint *)(lVar28 + 0x124)) && (param_4 >> 0x20 != 0x7fffffff)) &&
       ((*(uint *)(((param_4 & 0xffffffff) % (ulong)*(uint *)(lVar28 + 0x120)) * 0x118 +
                   *(long *)(*(long *)(lVar28 + 0x110) +
                            ((param_4 & 0xffffffff) / (ulong)*(uint *)(lVar28 + 0x120)) * 8) + 0x110
                  ) & 0x7fffffff) == (uint)(param_4 >> 0x20))) {
      pthread_mutex_unlock(__mutex);
      if ((plVar37[5] != 0) && (*(int *)((long)plVar37 + 0x4c) != 0)) {
        uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar37 + 9) * 4);
        uVar30 = CONCAT44(0,uVar27);
        lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar37 + 9) * 8);
        if (*(long *)param_3 == 0) {
          uVar38 = StringName::get_empty_hash();
        }
        else {
          uVar38 = *(uint *)(*(long *)param_3 + 0x20);
        }
        uVar34 = 1;
        if (uVar38 != 0) {
          uVar34 = uVar38;
        }
        auVar39._8_8_ = 0;
        auVar39._0_8_ = (ulong)uVar34 * lVar28;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar30;
        lVar31 = SUB168(auVar39 * auVar21,8);
        uVar38 = *(uint *)(plVar37[6] + lVar31 * 4);
        iVar26 = SUB164(auVar39 * auVar21,8);
        if (uVar38 != 0) {
          uVar36 = 0;
          do {
            if ((uVar34 == uVar38) &&
               (*(long *)(*(long *)(plVar37[5] + lVar31 * 8) + 0x10) == *(long *)param_3))
            goto LAB_0010c9ed;
            uVar36 = uVar36 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar26 + 1) * lVar28;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar30;
            lVar31 = SUB168(auVar10 * auVar22,8);
            uVar38 = *(uint *)(plVar37[6] + lVar31 * 4);
            iVar26 = SUB164(auVar10 * auVar22,8);
          } while ((uVar38 != 0) &&
                  (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar38 * lVar28, auVar23._8_8_ = 0,
                  auVar23._0_8_ = uVar30, auVar12._8_8_ = 0,
                  auVar12._0_8_ = (ulong)((uVar27 + iVar26) - SUB164(auVar11 * auVar23,8)) * lVar28,
                  auVar24._8_8_ = 0, auVar24._0_8_ = uVar30, uVar36 <= SUB164(auVar12 * auVar24,8)))
          ;
        }
      }
      pHVar29 = (HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                 *)HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                   ::operator[]((HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                                 *)(plVar37 + 4),param_3);
      if ((*(int *)(pHVar29 + 0x2c) != 0) && (*(long *)(pHVar29 + 8) != 0)) {
        lVar28 = 0;
        uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar29 + 0x28) * 4);
        if (uVar27 != 0) {
          do {
            if (*(int *)(*(long *)(pHVar29 + 0x10) + lVar28) != 0) {
              *(int *)(*(long *)(pHVar29 + 0x10) + lVar28) = 0;
              Memory::free_static(*(void **)(*(long *)(pHVar29 + 8) + lVar28 * 2),false);
              *(undefined8 *)(*(long *)(pHVar29 + 8) + lVar28 * 2) = 0;
            }
            lVar28 = lVar28 + 4;
          } while (lVar28 != (ulong)uVar27 << 2);
        }
        *(undefined4 *)(pHVar29 + 0x2c) = 0;
        *(undefined1 (*) [16])(pHVar29 + 0x18) = (undefined1  [16])0x0;
      }
      uVar27 = *(uint *)(pHVar29 + 0x28);
      if (*(uint *)(hash_table_size_primes + (ulong)uVar27 * 4) < 0x17) {
        if (uVar27 != 0x1c) {
          uVar30 = (ulong)uVar27;
          do {
            uVar38 = (int)uVar30 + 1;
            uVar30 = (ulong)uVar38;
            if (0x16 < *(uint *)(hash_table_size_primes + uVar30 * 4)) {
              if (uVar27 != uVar38) {
                if (*(long *)(pHVar29 + 8) == 0) {
                  *(uint *)(pHVar29 + 0x28) = uVar38;
                }
                else {
                  HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                  ::_resize_and_rehash(pHVar29,uVar38);
                }
              }
              goto LAB_0010c9ed;
            }
          } while (uVar38 != 0x1c);
        }
        _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                         "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0
                         ,0);
      }
LAB_0010c9ed:
      pHVar29 = (HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                 *)HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                   ::operator[]((HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                                 *)(plVar37 + 4),param_3);
      auVar40 = HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                ::operator[](pHVar29,(int *)local_3c);
      *auVar40._0_8_ = param_4;
      goto LAB_0010c850;
    }
    uVar27 = pthread_mutex_unlock(__mutex);
    uVar30 = extraout_RDX;
  }
  auVar25._8_8_ = uVar30;
  auVar25._0_8_ = CONCAT44(0,uVar27);
  auVar40._8_8_ = uVar30;
  auVar40._0_8_ = CONCAT44(0,uVar27);
  if ((plVar37[5] != 0) && (auVar40 = auVar25, *(int *)((long)plVar37 + 0x4c) != 0)) {
    uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar37 + 9) * 4);
    lVar28 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar37 + 9) * 8);
    if (*(long *)param_3 == 0) {
      uVar38 = StringName::get_empty_hash();
    }
    else {
      uVar38 = *(uint *)(*(long *)param_3 + 0x20);
    }
    uVar30 = CONCAT44(0,uVar27);
    if (uVar38 == 0) {
      uVar38 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (ulong)uVar38 * lVar28;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar30;
    auVar40 = auVar2 * auVar13;
    lVar31 = auVar40._8_8_;
    uVar34 = *(uint *)(plVar37[6] + lVar31 * 4);
    iVar26 = auVar40._8_4_;
    if (uVar34 != 0) {
      uVar36 = 0;
      while ((uVar38 != uVar34 ||
             (*(long *)(*(long *)(plVar37[5] + lVar31 * 8) + 0x10) != *(long *)param_3))) {
        uVar36 = uVar36 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar26 + 1) * lVar28;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar30;
        auVar40 = auVar3 * auVar14;
        lVar31 = auVar40._8_8_;
        uVar34 = *(uint *)(plVar37[6] + lVar31 * 4);
        iVar26 = auVar40._8_4_;
        if ((uVar34 == 0) ||
           (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar34 * lVar28, auVar15._8_8_ = 0,
           auVar15._0_8_ = uVar30, auVar5._8_8_ = 0,
           auVar5._0_8_ = (ulong)((uVar27 + iVar26) - SUB164(auVar4 * auVar15,8)) * lVar28,
           auVar16._8_8_ = 0, auVar16._0_8_ = uVar30, auVar40 = auVar5 * auVar16,
           auVar40._8_4_ < uVar36)) goto LAB_0010c850;
      }
      this_00 = (HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                 *)(plVar37 + 4);
      auVar39 = HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                ::operator[](this_00,param_3);
      lVar31 = auVar39._0_8_;
      lVar28 = *(long *)(lVar31 + 8);
      auVar40._8_8_ = auVar39._8_8_;
      auVar40._0_8_ = lVar28;
      if ((lVar28 != 0) &&
         (auVar40._8_4_ = *(int *)(lVar31 + 0x2c), auVar40._12_4_ = 0, *(int *)(lVar31 + 0x2c) != 0)
         ) {
        uVar30 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar31 + 0x28) * 8);
        uVar27 = (local_3c[0] >> 0x10 ^ local_3c[0]) * -0x7a143595;
        uVar27 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51cb;
        uVar38 = uVar27 ^ uVar27 >> 0x10;
        if (uVar27 == uVar27 >> 0x10) {
          uVar38 = 1;
          uVar32 = uVar30;
        }
        else {
          uVar32 = uVar38 * uVar30;
        }
        uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar31 + 0x28) * 4))
        ;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar35;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar32;
        auVar40 = auVar6 * auVar17;
        lVar33 = auVar40._8_8_;
        uVar27 = *(uint *)(*(long *)(lVar31 + 0x10) + lVar33 * 4);
        iVar26 = auVar40._8_4_;
        if (uVar27 != 0) {
          uVar34 = 0;
          goto LAB_0010c7ff;
        }
      }
    }
  }
LAB_0010c850:
  plVar1 = (long *)*plVar37;
  if (plVar1 != (long *)0x0) {
    auVar40 = (**(code **)(*plVar1 + 8))(plVar1,param_3,param_4,local_3c[0]);
  }
  iVar26 = *(int *)((long)plVar37 + 0x74);
  if (iVar26 == 0) {
    return auVar40._0_8_;
  }
  lVar28 = plVar37[10];
  lVar31 = 0;
  while( true ) {
    _material_queue_update(this,*(Material **)(lVar28 + lVar31 * 8),false,true);
    uVar27 = (int)lVar31 + 1;
    if (iVar26 <= (int)uVar27) break;
    lVar31 = lVar31 + 1;
  }
  return (ulong)uVar27;
LAB_0010c7ff:
  if ((uVar38 == uVar27) && (local_3c[0] == *(uint *)(*(long *)(lVar28 + lVar33 * 8) + 0x10))) {
    pHVar29 = (HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
               *)HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                 ::operator[](this_00,param_3);
    HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
    ::erase(pHVar29,(int *)local_3c);
    auVar39 = HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
              ::operator[](this_00,param_3);
    uVar27 = *(uint *)(auVar39._0_8_ + 0x2c);
    auVar40._4_4_ = 0;
    auVar40._0_4_ = uVar27;
    auVar40._8_8_ = auVar39._8_8_;
    if (uVar27 == 0) {
      auVar40 = HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                ::erase(this_00,param_3);
    }
    goto LAB_0010c850;
  }
  uVar34 = uVar34 + 1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (iVar26 + 1) * uVar30;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar35;
  auVar40 = auVar7 * auVar18;
  lVar33 = auVar40._8_8_;
  uVar27 = *(uint *)(*(long *)(lVar31 + 0x10) + lVar33 * 4);
  iVar26 = auVar40._8_4_;
  if ((uVar27 == 0) ||
     (auVar8._8_8_ = 0, auVar8._0_8_ = uVar27 * uVar30, auVar19._8_8_ = 0, auVar19._0_8_ = uVar35,
     auVar9._8_8_ = 0,
     auVar9._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar31 + 0x28) * 4) +
                     iVar26) - SUB164(auVar8 * auVar19,8)) * uVar30, auVar20._8_8_ = 0,
     auVar20._0_8_ = uVar35, auVar40 = auVar9 * auVar20, auVar40._8_4_ < uVar34)) goto LAB_0010c850;
  goto LAB_0010c7ff;
}



/* RendererRD::MaterialStorage::shader_get_default_texture_parameter(RID, StringName const&, int)
   const */

undefined8 __thiscall
RendererRD::MaterialStorage::shader_get_default_texture_parameter
          (MaterialStorage *this,ulong param_2,StringName *param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  long lVar18;
  HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
  *this_00;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint local_3c [3];
  
  local_3c[0] = param_4;
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1ec))) {
    lVar23 = ((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x1e8)) * 0x80 +
             *(long *)(*(long *)(this + 0x1d8) +
                      ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x1e8)) * 8);
    if (*(int *)(lVar23 + 0x78) == (int)(param_2 >> 0x20)) {
      if ((*(long *)(lVar23 + 0x28) != 0) && (*(int *)(lVar23 + 0x4c) != 0)) {
        uVar17 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar23 + 0x48) * 4);
        lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar23 + 0x48) * 8);
        if (*(long *)param_3 == 0) {
          uVar28 = StringName::get_empty_hash();
        }
        else {
          uVar28 = *(uint *)(*(long *)param_3 + 0x20);
        }
        uVar24 = CONCAT44(0,uVar17);
        if (uVar28 == 0) {
          uVar28 = 1;
        }
        auVar1._8_8_ = 0;
        auVar1._0_8_ = (ulong)uVar28 * lVar18;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar24;
        lVar21 = SUB168(auVar1 * auVar9,8);
        uVar27 = *(uint *)(*(long *)(lVar23 + 0x30) + lVar21 * 4);
        iVar20 = SUB164(auVar1 * auVar9,8);
        if (uVar27 != 0) {
          uVar26 = 0;
          while ((uVar27 != uVar28 ||
                 (*(long *)(*(long *)(*(long *)(lVar23 + 0x28) + lVar21 * 8) + 0x10) !=
                  *(long *)param_3))) {
            uVar26 = uVar26 + 1;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = (ulong)(iVar20 + 1) * lVar18;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar24;
            lVar21 = SUB168(auVar2 * auVar10,8);
            uVar27 = *(uint *)(*(long *)(lVar23 + 0x30) + lVar21 * 4);
            iVar20 = SUB164(auVar2 * auVar10,8);
            if (uVar27 == 0) {
              return 0;
            }
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar27 * lVar18;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar24;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)((uVar17 + iVar20) - SUB164(auVar3 * auVar11,8)) * lVar18;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar24;
            if (SUB164(auVar4 * auVar12,8) < uVar26) {
              return 0;
            }
          }
          lVar18 = HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                   ::operator[]((HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                                 *)(lVar23 + 0x20),param_3);
          if ((*(long *)(lVar18 + 8) != 0) && (*(int *)(lVar18 + 0x2c) != 0)) {
            uVar24 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar18 + 0x28) * 8);
            uVar17 = (local_3c[0] >> 0x10 ^ local_3c[0]) * -0x7a143595;
            uVar17 = (uVar17 ^ uVar17 >> 0xd) * -0x3d4d51cb;
            uVar28 = uVar17 ^ uVar17 >> 0x10;
            if (uVar17 == uVar17 >> 0x10) {
              uVar28 = 1;
              uVar22 = uVar24;
            }
            else {
              uVar22 = uVar28 * uVar24;
            }
            uVar25 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(lVar18 + 0x28) * 4));
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar25;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar22;
            lVar21 = SUB168(auVar5 * auVar13,8);
            uVar17 = *(uint *)(*(long *)(lVar18 + 0x10) + lVar21 * 4);
            iVar20 = SUB164(auVar5 * auVar13,8);
            if (uVar17 != 0) {
              uVar27 = 0;
              do {
                if ((uVar28 == uVar17) &&
                   (local_3c[0] == *(uint *)(*(long *)(*(long *)(lVar18 + 8) + lVar21 * 8) + 0x10)))
                {
                  this_00 = (HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                             *)HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                               ::operator[]((HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                                             *)(lVar23 + 0x20),param_3);
                  puVar19 = (undefined8 *)
                            HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                            ::operator[](this_00,(int *)local_3c);
                  return *puVar19;
                }
                uVar27 = uVar27 + 1;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (iVar20 + 1) * uVar24;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = uVar25;
                lVar21 = SUB168(auVar6 * auVar14,8);
                uVar17 = *(uint *)(*(long *)(lVar18 + 0x10) + lVar21 * 4);
                iVar20 = SUB164(auVar6 * auVar14,8);
              } while ((uVar17 != 0) &&
                      (auVar7._8_8_ = 0, auVar7._0_8_ = uVar17 * uVar24, auVar15._8_8_ = 0,
                      auVar15._0_8_ = uVar25, auVar8._8_8_ = 0,
                      auVar8._0_8_ = ((*(uint *)(hash_table_size_primes +
                                                (ulong)*(uint *)(lVar18 + 0x28) * 4) + iVar20) -
                                     SUB164(auVar7 * auVar15,8)) * uVar24, auVar16._8_8_ = 0,
                      auVar16._0_8_ = uVar25, uVar27 <= SUB164(auVar8 * auVar16,8)));
            }
          }
        }
      }
      return 0;
    }
    if (*(int *)(lVar23 + 0x78) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to use an uninitialized RID",0,0);
    }
  }
  _err_print_error("shader_get_default_texture_parameter",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x820,
                   "Parameter \"shader\" is null.",0,0);
  return 0;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_0010d066:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_0010d066;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00115166();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_0010cfbc;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_0010cfbc:
  puVar8[-1] = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::MaterialStorage::MaterialStorage() */

void __thiscall RendererRD::MaterialStorage::MaterialStorage(MaterialStorage *this)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  MaterialStorage *pMVar6;
  MaterialStorage *pMVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  long local_138;
  undefined8 *local_130;
  int local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__MaterialStorage_00121ae8;
  pMVar6 = this + 8;
  do {
    *(undefined1 (*) [16])pMVar6 = (undefined1  [16])0x0;
    pMVar7 = pMVar6 + 0x20;
    *(undefined1 (*) [16])(pMVar6 + 0x10) = (undefined1  [16])0x0;
    uVar8 = _LC20;
    pMVar6 = pMVar7;
  } while (pMVar7 != this + 0xe8);
  *(undefined2 *)(this + 0x170) = 0;
  uVar3 = _UNK_00121f48;
  uVar2 = __LC159;
  *(undefined8 *)(this + 0x130) = uVar8;
  *(undefined8 *)(this + 0x1a0) = uVar8;
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0xe8) = 0;
  this[0xec] = (MaterialStorage)0x0;
  *(undefined4 *)(this + 0xf0) = 2;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined ***)(this + 0x1d0) = &PTR__RID_Alloc_00121a00;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x210) = 1;
  *(undefined1 (*) [16])(this + 0xf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x120) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x138) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x150) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1e8) = uVar2;
  *(undefined8 *)(this + 0x1f0) = uVar3;
  uVar8 = Memory::alloc_static(0xf08,false);
  *(undefined8 *)(this + 0x1d8) = uVar8;
  uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 500) << 3,false);
  *(undefined8 *)(this + 0x1e0) = uVar8;
  *(undefined1 (*) [16])(this + 0x290) = (undefined1  [16])0x0;
  *(undefined ***)(this + 0x250) = &PTR__RID_Alloc_00121a20;
  uVar2 = _UNK_00121f58;
  uVar8 = __LC160;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x290) = 1;
  *(undefined8 *)(this + 0x268) = uVar8;
  *(undefined8 *)(this + 0x270) = uVar2;
  *(undefined1 (*) [16])(this + 0x280) = (undefined1  [16])0x0;
  uVar8 = Memory::alloc_static(0x1708,false);
  *(undefined8 *)(this + 600) = uVar8;
  uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x274) << 3,false);
  *(undefined8 *)(this + 0x260) = uVar8;
  *(undefined1 (*) [16])(this + 0x2c8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2c8) = 1;
  *(undefined1 (*) [16])(this + 0x2b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2a8) = (undefined1  [16])0x0;
  singleton = this;
  samplers_rd_allocate(0,(StringName *)&local_128,this,2);
  local_130 = (undefined8 *)0x0;
  *(ulong *)(this + 8) = CONCAT44(uStack_124,local_128);
  *(undefined8 *)(this + 0x10) = uStack_120;
  *(undefined8 *)(this + 0x18) = local_118;
  *(undefined8 *)(this + 0x20) = uStack_110;
  *(undefined8 *)(this + 0x28) = local_108;
  *(undefined8 *)(this + 0x30) = uStack_100;
  *(undefined8 *)(this + 0x38) = local_f8;
  *(undefined8 *)(this + 0x40) = uStack_f0;
  *(undefined8 *)(this + 0x48) = local_e8;
  *(undefined8 *)(this + 0x50) = uStack_e0;
  *(undefined8 *)(this + 0x58) = local_d8;
  *(undefined8 *)(this + 0x60) = uStack_d0;
  *(undefined8 *)(this + 0x68) = local_c8;
  *(undefined8 *)(this + 0x70) = uStack_c0;
  *(undefined8 *)(this + 0x78) = local_b8;
  *(undefined8 *)(this + 0x80) = uStack_b0;
  *(undefined8 *)(this + 0x88) = local_a8;
  *(undefined8 *)(this + 0x90) = uStack_a0;
  *(undefined8 *)(this + 0xd8) = local_58;
  *(ulong *)(this + 0xe0) = CONCAT44(uStack_4c,uStack_50);
  *(undefined8 *)(this + 0x98) = local_98;
  *(undefined8 *)(this + 0xa0) = uStack_90;
  *(undefined8 *)(this + 0xa8) = local_88;
  *(undefined8 *)(this + 0xb0) = uStack_80;
  *(undefined8 *)(this + 0xb8) = local_78;
  *(undefined8 *)(this + 0xc0) = uStack_70;
  *(undefined8 *)(this + 200) = local_68;
  *(undefined8 *)(this + 0xd0) = uStack_60;
  *(ulong *)(this + 0xe4) = CONCAT44(uStack_48,uStack_4c);
  *(undefined8 *)(this + 0xec) = uStack_44;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_130,0xc);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_130);
  uVar8 = _LC161;
  *(undefined4 *)(local_130 + 1) = 0x30002;
  *local_130 = uVar8;
  uVar8 = RenderingDevice::get_singleton();
  uVar8 = RenderingDevice::index_buffer_create(uVar8,6,0,(StringName *)&local_138,0,0);
  *(undefined8 *)(this + 0xf8) = uVar8;
  uVar8 = RenderingDevice::get_singleton();
  uVar8 = RenderingDevice::index_array_create(uVar8,*(undefined8 *)(this + 0xf8),0,6);
  puVar4 = local_130;
  *(undefined8 *)(this + 0x100) = uVar8;
  if (local_130 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = local_130 + -2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = (undefined8 *)0x0;
      Memory::free_static(puVar4 + -2,false);
    }
  }
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_138,"rendering/limits/global_shader_variables/buffer_size",false);
  ProjectSettings::get_setting_with_override((StringName *)&local_128);
  iVar5 = Variant::operator_cast_to_int((Variant *)&local_128);
  if (iVar5 < 0x1000) {
    iVar5 = 0x1000;
  }
  *(int *)(this + 0x16c) = iVar5;
  if (Variant::needs_deinit[local_128] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  uVar11 = (ulong)*(uint *)(this + 0x16c);
  pvVar9 = (void *)0x0;
  if (uVar11 != 0) {
    pvVar9 = (void *)Memory::alloc_static(uVar11 << 4,true);
    if (pvVar9 == (void *)0x0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
      uVar11 = (ulong)*(uint *)(this + 0x16c);
    }
    else {
      *(ulong *)((long)pvVar9 + -8) = uVar11;
      uVar11 = (ulong)*(uint *)(this + 0x16c);
    }
  }
  *(void **)(this + 0x150) = pvVar9;
  memset(pvVar9,0,uVar11 << 4);
  uVar11 = (ulong)*(uint *)(this + 0x16c);
  if (uVar11 == 0) {
    uVar10 = 0;
    pvVar9 = (void *)0x0;
  }
  else {
    pvVar9 = (void *)Memory::alloc_static(uVar11 * 4,true);
    if (pvVar9 == (void *)0x0) {
      _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",
                       0,0);
      uVar10 = *(uint *)(this + 0x16c);
    }
    else {
      *(ulong *)((long)pvVar9 + -8) = uVar11;
      memset(pvVar9,0,uVar11 * 4);
      uVar10 = *(uint *)(this + 0x16c);
    }
  }
  *(void **)(this + 0x158) = pvVar9;
  uVar11 = (ulong)((uVar10 >> 10) + 1);
  pvVar9 = (void *)Memory::alloc_static(uVar11,true);
  if (pvVar9 == (void *)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    *(ulong *)((long)pvVar9 + -8) = uVar11;
  }
  *(void **)(this + 0x160) = pvVar9;
  memset(pvVar9,0,(ulong)((*(uint *)(this + 0x16c) >> 10) + 1));
  uVar8 = RenderingDevice::get_singleton();
  local_130 = (undefined8 *)0x0;
  uVar8 = RenderingDevice::storage_buffer_create
                    (uVar8,*(int *)(this + 0x16c) << 4,(StringName *)&local_138,0,0);
  puVar4 = local_130;
  *(undefined8 *)(this + 0x148) = uVar8;
  if (local_130 != (undefined8 *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_130 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_130 = (undefined8 *)0x0;
      Memory::free_static((void *)((long)puVar4 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<float>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<float>::resize<false>(CowData<float> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<float> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<float> *pCVar10;
  CowData<float> *pCVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    pCVar4 = (CowData<float> *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
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
    _copy_on_write(this);
    pCVar4 = (CowData<float> *)(lVar12 * 4);
    if (pCVar4 != (CowData<float> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<float> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 4 != 0) {
    uVar5 = param_1 * 4 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<float> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<float> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0011517e();
        return;
      }
      if (pCVar10 != pCVar4) {
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
          if (puVar6 != (undefined8 *)0x0) {
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)this = puVar8;
            goto LAB_0010d841;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_0010d932;
        }
        pCVar11 = this;
        iVar3 = _realloc(this,(long)pCVar10);
        if (iVar3 != 0) {
          return;
        }
      }
      puVar8 = *(undefined8 **)this;
      if (puVar8 == (undefined8 *)0x0) {
        resize<false>((long)pCVar11);
        return;
      }
LAB_0010d841:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_0010d932:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::MaterialStorage::_global_shader_uniform_store_in_buffer(int,
   RenderingServer::GlobalShaderParameterType, Variant const&) */

void __thiscall
RendererRD::MaterialStorage::_global_shader_uniform_store_in_buffer
          (MaterialStorage *this,int param_1,undefined4 param_3,Variant *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined4 *puVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  Variant *pVVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  float *pfVar14;
  uint *puVar15;
  long lVar16;
  long in_FS_OFFSET;
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  Variant local_88 [8];
  undefined4 *local_80;
  undefined1 local_78 [12];
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_30;
  
  auVar20._8_4_ = local_78._8_4_;
  auVar20._0_8_ = local_78._0_8_;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_3) {
  case 0:
    pfVar14 = (float *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    bVar6 = Variant::operator_cast_to_bool(param_4);
    fVar17 = 0.0;
    if (bVar6) {
      fVar17 = _LC91;
    }
    goto LAB_0010dbdb;
  case 1:
    pfVar14 = (float *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    uVar7 = Variant::operator_cast_to_unsigned_int(param_4);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    fVar17 = 0.0;
    if ((uVar7 & 1) != 0) {
      fVar17 = _LC91;
    }
    *pfVar14 = fVar17;
    fVar17 = 0.0;
    if ((uVar7 & 2) != 0) {
      fVar17 = _LC91;
    }
    pfVar14[2] = 0.0;
    pfVar14[3] = 0.0;
    pfVar14[1] = fVar17;
    break;
  case 2:
    pfVar14 = (float *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    uVar7 = Variant::operator_cast_to_unsigned_int(param_4);
    auVar4._8_4_ = local_78._8_4_;
    auVar4._0_8_ = local_78._0_8_;
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    fVar17 = 0.0;
    if ((uVar7 & 1) != 0) {
      fVar17 = _LC91;
    }
    *pfVar14 = fVar17;
    fVar17 = 0.0;
    if ((uVar7 & 2) != 0) {
      fVar17 = _LC91;
    }
    pfVar14[1] = fVar17;
    fVar17 = 0.0;
    if ((uVar7 & 4) != 0) {
      fVar17 = _LC91;
      auVar20 = auVar4;
    }
    goto LAB_0010db54;
  case 3:
    pfVar14 = (float *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    uVar7 = Variant::operator_cast_to_unsigned_int(param_4);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    fVar17 = 0.0;
    if ((uVar7 & 1) != 0) {
      fVar17 = _LC91;
    }
    *pfVar14 = fVar17;
    fVar17 = 0.0;
    if ((uVar7 & 2) != 0) {
      fVar17 = _LC91;
    }
    pfVar14[1] = fVar17;
    fVar17 = 0.0;
    if ((uVar7 & 4) != 0) {
      fVar17 = _LC91;
    }
    pfVar14[2] = fVar17;
    fVar17 = 0.0;
    if ((uVar7 & 8) != 0) {
      fVar17 = _LC91;
    }
    pfVar14[3] = fVar17;
    break;
  case 4:
    piVar13 = (int *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    iVar9 = Variant::operator_cast_to_int(param_4);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    piVar13[1] = 0;
    piVar13[2] = 0;
    *piVar13 = iVar9;
    piVar13[3] = 0;
    break;
  case 5:
  case 10:
    puVar11 = (undefined8 *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    uVar18 = convert_to_vector<Vector2i>(param_4,false);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    puVar11[1] = 0;
    *puVar11 = uVar18;
    break;
  case 6:
  case 0xb:
    puVar11 = (undefined8 *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    auVar20 = convert_to_vector<Vector3i>(param_4,false);
    *puVar11 = auVar20._0_8_;
    *(undefined4 *)((long)puVar11 + 0xc) = 0;
    *(int *)(puVar11 + 1) = auVar20._8_4_;
    break;
  case 7:
  case 0xc:
    lVar16 = *(long *)(this + 0x150);
    auVar19 = convert_to_vector<Vector4i>(param_4,false);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    *(undefined1 (*) [16])((long)param_1 * 0x10 + lVar16) = auVar19;
    break;
  case 8:
    lVar16 = *(long *)(this + 0x150);
    auVar19 = Variant::operator_cast_to_Rect2i(param_4);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    *(undefined1 (*) [16])((long)param_1 * 0x10 + lVar16) = auVar19;
    break;
  case 9:
    puVar15 = (uint *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    uVar7 = Variant::operator_cast_to_unsigned_int(param_4);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = uVar7;
    puVar15[3] = 0;
    break;
  case 0xd:
    pfVar14 = (float *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    fVar17 = Variant::operator_cast_to_float(param_4);
LAB_0010dbdb:
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    pfVar14[1] = 0.0;
    pfVar14[2] = 0.0;
    pfVar14[3] = 0.0;
    *pfVar14 = fVar17;
    break;
  case 0xe:
    puVar11 = (undefined8 *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    uVar18 = convert_to_vector<Vector2>(param_4,false);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    puVar11[1] = 0;
    *puVar11 = uVar18;
    break;
  case 0xf:
    pfVar14 = (float *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    auVar20 = convert_to_vector<Vector3>(param_4,false);
    *(long *)pfVar14 = auVar20._0_8_;
    fVar17 = auVar20._8_4_;
LAB_0010db54:
    pfVar14[3] = 0.0;
    pfVar14[2] = fVar17;
    break;
  case 0x10:
    lVar16 = *(long *)(this + 0x150);
    auVar19 = convert_to_vector<Vector4>(param_4,false);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    *(undefined1 (*) [16])((long)param_1 * 0x10 + lVar16) = auVar19;
    break;
  case 0x11:
    lVar16 = *(long *)(this + 0x150);
    auVar19 = Variant::operator_cast_to_Color(param_4);
    fVar17 = _LC114;
    local_a8 = auVar19._0_4_;
    fStack_a0 = auVar19._8_4_;
    fStack_a4 = auVar19._4_4_;
    pfVar14 = (float *)(*(long *)(this + 0x150) + 0x10 + (long)param_1 * 0x10);
    *(undefined1 (*) [16])(lVar16 + (long)param_1 * 0x10) = auVar19;
    if (fVar17 <= fStack_a0) {
      fStack_a0 = powf((float)(((double)fStack_a0 + __LC115) * __LC116),_LC117);
      fVar17 = _LC114;
    }
    else {
      fStack_a0 = _LC118 * fStack_a0;
    }
    if (fVar17 <= fStack_a4) {
      fStack_a4 = powf((float)(((double)fStack_a4 + __LC115) * __LC116),_LC117);
      fVar17 = _LC114;
    }
    else {
      fStack_a4 = fStack_a4 * _LC118;
    }
    if (fVar17 <= local_a8) {
      local_a8 = powf((float)(((double)local_a8 + __LC115) * __LC116),_LC117);
    }
    else {
      local_a8 = local_a8 * _LC118;
    }
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    *pfVar14 = local_a8;
    pfVar14[1] = fStack_a4;
    pfVar14[2] = fStack_a0;
    pfVar14[3] = auVar19._12_4_;
    break;
  case 0x12:
    lVar16 = *(long *)(this + 0x150);
    auVar19 = Variant::operator_cast_to_Rect2(param_4);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    *(undefined1 (*) [16])((long)param_1 * 0x10 + lVar16) = auVar19;
    break;
  case 0x13:
    puVar12 = (undefined4 *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    Variant::operator_cast_to_Vector(local_88);
    if ((local_80 == (undefined4 *)0x0) || (lVar16 = *(long *)(local_80 + -2), lVar16 < 4)) {
      CowData<float>::resize<false>((CowData<float> *)&local_80,4);
      if (local_80 == (undefined4 *)0x0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(long *)(local_80 + -2);
        if (0 < lVar16) {
          *puVar12 = *local_80;
          if (lVar16 == 1) {
            lVar8 = 1;
            lVar16 = 1;
            goto LAB_0010e14e;
          }
          uVar2 = local_80[1];
          *(undefined8 *)(puVar12 + 2) = 0;
          puVar12[1] = uVar2;
          if (lVar16 == 2) {
            lVar8 = 2;
            lVar16 = 2;
            goto LAB_0010e14e;
          }
          goto LAB_0010dd04;
        }
      }
      lVar8 = 0;
LAB_0010e14e:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar16,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *puVar12 = *local_80;
    uVar2 = local_80[1];
    *(undefined8 *)(puVar12 + 2) = 0;
    puVar12[1] = uVar2;
LAB_0010dd04:
    puVar5 = local_80;
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    puVar12[4] = local_80[2];
    if (lVar16 == 3) {
      lVar8 = 3;
      lVar16 = 3;
      goto LAB_0010e14e;
    }
    uVar2 = local_80[3];
    *(undefined8 *)(puVar12 + 6) = 0;
    puVar12[5] = uVar2;
    LOCK();
    plVar1 = (long *)(local_80 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = (undefined4 *)0x0;
      Memory::free_static(puVar5 + -4,false);
      auVar20._8_4_ = local_78._8_4_;
      auVar20._0_8_ = local_78._0_8_;
    }
    break;
  case 0x14:
    puVar11 = (undefined8 *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    Variant::operator_cast_to_Basis((Variant *)local_78);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    *puVar11 = CONCAT44(uStack_6c,(int)local_78._0_8_);
    *(undefined4 *)((long)puVar11 + 0xc) = 0;
    *(undefined4 *)(puVar11 + 1) = local_60;
    *(undefined4 *)(puVar11 + 2) = local_78._4_4_;
    *(undefined4 *)((long)puVar11 + 0x14) = local_68;
    *(undefined4 *)((long)puVar11 + 0x1c) = 0;
    *(undefined4 *)(puVar11 + 3) = local_5c;
    *(undefined4 *)(puVar11 + 4) = local_78._8_4_;
    *(undefined4 *)((long)puVar11 + 0x24) = uStack_64;
    *(undefined4 *)((long)puVar11 + 0x2c) = 0;
    *(undefined4 *)(puVar11 + 5) = local_58;
    break;
  case 0x15:
    lVar16 = (long)param_1 * 0x10 + *(long *)(this + 0x150);
    Variant::operator_cast_to_Projection((Variant *)local_78);
    iVar9 = 0;
    pVVar10 = (Variant *)local_78;
    do {
      lVar8 = 0;
      do {
        *(undefined4 *)(lVar16 + lVar8) = *(undefined4 *)(pVVar10 + lVar8);
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0x10);
      iVar9 = iVar9 + 4;
      pVVar10 = pVVar10 + 0x10;
      lVar16 = lVar16 + 0x10;
    } while (iVar9 != 0x10);
    Projection::~Projection((Projection *)local_78);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    break;
  case 0x16:
    puVar11 = (undefined8 *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    Variant::operator_cast_to_Transform2D((Variant *)local_78);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    puVar11[1] = 0;
    *puVar11 = local_78._0_8_;
    puVar11[3] = 0;
    puVar11[2] = CONCAT44(uStack_6c,local_78._8_4_);
    puVar11[5] = 0x3f800000;
    puVar11[4] = CONCAT44(uStack_64,local_68);
    break;
  case 0x17:
    puVar11 = (undefined8 *)((long)param_1 * 0x10 + *(long *)(this + 0x150));
    Variant::operator_cast_to_Transform3D((Variant *)local_78);
    auVar20._8_4_ = local_78._8_4_;
    auVar20._0_8_ = local_78._0_8_;
    *puVar11 = CONCAT44(uStack_6c,(int)local_78._0_8_);
    *(undefined4 *)((long)puVar11 + 0xc) = 0;
    *(undefined4 *)(puVar11 + 1) = local_60;
    *(undefined4 *)(puVar11 + 2) = local_78._4_4_;
    *(undefined4 *)((long)puVar11 + 0x14) = local_68;
    *(undefined4 *)((long)puVar11 + 0x1c) = 0;
    *(undefined4 *)(puVar11 + 3) = local_5c;
    *(undefined4 *)(puVar11 + 4) = local_78._8_4_;
    *(undefined4 *)((long)puVar11 + 0x24) = uStack_64;
    *(undefined4 *)((long)puVar11 + 0x2c) = 0;
    *(undefined4 *)(puVar11 + 5) = local_58;
    *(undefined4 *)((long)puVar11 + 0x3c) = 0x3f800000;
    puVar11[6] = local_54;
    *(undefined4 *)(puVar11 + 7) = local_4c;
    break;
  default:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_global_shader_uniform_store_in_buffer",
                       "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x5fe,
                       "Method/function failed.",0,0);
      return;
    }
    goto LAB_0010e2e6;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e2e6:
  local_78 = auVar20;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::MaterialStorage::global_shader_parameter_add(StringName const&,
   RenderingServer::GlobalShaderParameterType, Variant const&) */

void __thiscall
RendererRD::MaterialStorage::global_shader_parameter_add
          (MaterialStorage *this,StringName *param_1,uint param_3,Variant *param_4)

{
  long *plVar1;
  void *pvVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 (*pauVar16) [16];
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  bool bVar27;
  long local_c8;
  long local_c0;
  char *local_b8;
  size_t local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  uint local_80;
  int local_78 [2];
  undefined1 local_70 [16];
  int local_60 [2];
  undefined1 local_58 [16];
  int local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x110) != 0) && (*(int *)(this + 0x134) != 0)) {
    uVar15 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x130) * 4);
    uVar26 = CONCAT44(0,uVar15);
    lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x130) * 8);
    if (*(long *)param_1 == 0) {
      uVar14 = StringName::get_empty_hash();
    }
    else {
      uVar14 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar14 * lVar18;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar26;
    lVar23 = SUB168(auVar4 * auVar8,8);
    uVar24 = *(uint *)(*(long *)(this + 0x118) + lVar23 * 4);
    iVar22 = SUB164(auVar4 * auVar8,8);
    if (uVar24 != 0) {
      uVar25 = 0;
      do {
        if ((uVar14 == uVar24) &&
           (*(long *)(*(long *)(*(long *)(this + 0x110) + lVar23 * 8) + 0x10) == *(long *)param_1))
        {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            _err_print_error("global_shader_parameter_add",
                             "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x614,
                             "Condition \"global_shader_uniforms.variables.has(p_name)\" is true.",0
                             ,0);
            return;
          }
          goto LAB_0010ea18;
        }
        uVar25 = uVar25 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar22 + 1) * lVar18;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar26;
        lVar23 = SUB168(auVar5 * auVar9,8);
        uVar24 = *(uint *)(*(long *)(this + 0x118) + lVar23 * 4);
        iVar22 = SUB164(auVar5 * auVar9,8);
      } while ((uVar24 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar24 * lVar18, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar26, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar15 + iVar22) - SUB164(auVar6 * auVar10,8)) * lVar18,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar26, uVar25 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  local_88 = 2;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_60[0] = 0;
  local_70 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_80 = param_3;
  Variant::operator=((Variant *)local_78,param_4);
  local_48 = -1;
  if ((int)param_3 < 0x18) {
    param_3 = param_3 & 0xfffffffd;
    if (param_3 == 0x11) {
      uVar15 = 2;
    }
    else {
      uVar15 = 3;
      if (param_3 != 0x14) {
        uVar15 = (uint)(param_3 == 0x15) * 3 + 1;
      }
    }
    local_44 = uVar15;
    local_48 = _global_shader_uniform_allocate(this,uVar15);
    if (local_48 < 0) {
      lVar18 = *(long *)param_1;
      if (lVar18 == 0) {
LAB_0010e9cb:
        local_c8 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar18 + 8);
        local_c8 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar18 + 0x10) + -0x10);
          if (*(long *)(lVar18 + 0x10) != 0) {
            do {
              lVar23 = *plVar1;
              if (lVar23 == 0) goto LAB_0010e9cb;
              LOCK();
              lVar21 = *plVar1;
              bVar27 = lVar23 == lVar21;
              if (bVar27) {
                *plVar1 = lVar23 + 1;
                lVar21 = lVar23;
              }
              UNLOCK();
            } while (!bVar27);
            if (lVar21 != -1) {
              local_c8 = *(long *)(lVar18 + 0x10);
              goto LAB_0010e8b2;
            }
          }
          goto LAB_0010e9cb;
        }
        local_b0 = strlen(pcVar3);
        local_b8 = pcVar3;
        String::parse_latin1((StrRange *)&local_c8);
      }
LAB_0010e8b2:
      local_c0 = 0;
      local_b8 = 
      "Failed allocating global variable \'%s\' out of buffer memory. Consider increasing it in the Project Settings."
      ;
      local_b0 = 0x6c;
      String::parse_latin1((StrRange *)&local_c0);
      vformat<String>(&local_b8,(StrRange *)&local_c0,&local_c8);
      _err_print_error("global_shader_parameter_add",
                       "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x62e,
                       "Condition \"gv.buffer_index < 0\" is true.",&local_b8,0,0);
      pcVar3 = local_b8;
      if (local_b8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar18 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar1 = (long *)(local_c0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar18 + -0x10),false);
        }
      }
      lVar18 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar18 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010e695;
    }
    *(uint *)(*(long *)(this + 0x158) + (long)local_48 * 4) = uVar15;
    _global_shader_uniform_store_in_buffer(this,local_48,local_80,(Variant *)local_78);
    iVar22 = local_48;
    iVar12 = -1;
    if (0 < (int)local_44) {
      do {
        iVar13 = iVar22 + 0x3ff;
        if (-1 < iVar22) {
          iVar13 = iVar22;
        }
        iVar13 = iVar13 >> 10;
        if ((iVar12 != iVar13) && (*(char *)((long)iVar13 + *(long *)(this + 0x160)) == '\0')) {
          *(char *)((long)iVar13 + *(long *)(this + 0x160)) = '\x01';
          *(int *)(this + 0x168) = *(int *)(this + 0x168) + 1;
        }
        iVar22 = iVar22 + 1;
        iVar12 = iVar13;
      } while (iVar22 != local_44 + local_48);
    }
    this[0x171] = (MaterialStorage)0x1;
  }
  else {
    this[0x170] = (MaterialStorage)0x1;
  }
  pauVar16 = (undefined1 (*) [16])
             HashMap<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable>>>
             ::operator[]((HashMap<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable>>>
                           *)(this + 0x108),param_1);
  if (pauVar16 != &local_a8) {
    pvVar2 = *(void **)*pauVar16;
    if (pvVar2 != (void *)0x0) {
      if (*(int *)(pauVar16[2] + 4) != 0) {
        if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)pauVar16[2] * 4) != 0) {
          memset(*(void **)(pauVar16[1] + 8),0,
                 (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)pauVar16[2] * 4) * 4);
        }
        *(undefined4 *)(pauVar16[2] + 4) = 0;
      }
      Memory::free_static(pvVar2,false);
      Memory::free_static(*(void **)pauVar16[1],false);
      Memory::free_static(*(void **)(*pauVar16 + 8),false);
      Memory::free_static(*(void **)(pauVar16[1] + 8),false);
      *pauVar16 = (undefined1  [16])0x0;
      pauVar16[1] = (undefined1  [16])0x0;
    }
    *(ulong *)pauVar16[2] = local_88;
    if ((int)(local_88 >> 0x20) != 0) {
      uVar15 = *(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4);
      uVar26 = (ulong)uVar15 * 4;
      uVar17 = Memory::alloc_static(uVar26,false);
      *(undefined8 *)(pauVar16[1] + 8) = uVar17;
      uVar17 = Memory::alloc_static((ulong)uVar15 * 8,false);
      *(undefined8 *)*pauVar16 = uVar17;
      uVar17 = Memory::alloc_static(uVar26,false);
      *(undefined8 *)pauVar16[1] = uVar17;
      lVar18 = Memory::alloc_static(uVar26,false);
      iVar22 = *(int *)(pauVar16[2] + 4);
      *(long *)(*pauVar16 + 8) = lVar18;
      if (iVar22 != 0) {
        lVar23 = *(long *)*pauVar16;
        lVar19 = 0;
        lVar21 = *(long *)pauVar16[1];
        do {
          *(undefined8 *)(lVar23 + lVar19 * 8) = *(undefined8 *)(local_a8._0_8_ + lVar19 * 8);
          *(undefined4 *)(lVar21 + lVar19 * 4) = *(undefined4 *)(local_98._0_8_ + lVar19 * 4);
          lVar19 = lVar19 + 1;
        } while ((uint)lVar19 < *(uint *)(pauVar16[2] + 4));
      }
      if (uVar15 != 0) {
        lVar23 = *(long *)(pauVar16[1] + 8);
        uVar20 = 0;
        do {
          *(undefined4 *)(lVar23 + uVar20) = *(undefined4 *)(local_98._8_8_ + uVar20);
          *(undefined4 *)(lVar18 + uVar20) = *(undefined4 *)(local_a8._8_8_ + uVar20);
          uVar20 = uVar20 + 4;
        } while (uVar20 != uVar26);
      }
    }
  }
  *(uint *)(pauVar16[2] + 8) = local_80;
  Variant::operator=((Variant *)(pauVar16 + 3),(Variant *)local_78);
  Variant::operator=((Variant *)(pauVar16[4] + 8),(Variant *)local_60);
  *(int *)pauVar16[6] = local_48;
  *(uint *)(pauVar16[6] + 4) = local_44;
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010e695:
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar17 = local_a8._0_8_;
  if ((void *)local_a8._0_8_ != (void *)0x0) {
    if (local_88._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) != 0) {
        memset((void *)local_98._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) * 4);
      }
      local_88 = local_88 & 0xffffffff;
    }
    Memory::free_static((void *)uVar17,false);
    Memory::free_static((void *)local_98._0_8_,false);
    Memory::free_static((void *)local_a8._8_8_,false);
    Memory::free_static((void *)local_98._8_8_,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010ea18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::MaterialStorage::global_shader_parameter_set(StringName const&, Variant const&) */

void __thiscall
RendererRD::MaterialStorage::global_shader_parameter_set
          (MaterialStorage *this,StringName *param_1,Variant *param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  MaterialStorage *this_00;
  uint uVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  Material *pMVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  
  if ((*(long *)(this + 0x110) != 0) && (*(int *)(this + 0x134) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x130) * 4);
    uVar15 = CONCAT44(0,uVar1);
    lVar22 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x130) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar22;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar17 = SUB168(auVar3 * auVar7,8);
    uVar20 = *(uint *)(*(long *)(this + 0x118) + lVar17 * 4);
    iVar16 = SUB164(auVar3 * auVar7,8);
    if (uVar20 != 0) {
      uVar21 = 0;
      do {
        if ((uVar11 == uVar20) &&
           (*(long *)(*(long *)(*(long *)(this + 0x110) + lVar17 * 8) + 0x10) == *(long *)param_1))
        {
          plVar14 = (long *)HashMap<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable>>>
                            ::operator[]((HashMap<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable>>>
                                          *)(this + 0x108),param_1);
          Variant::operator=((Variant *)(plVar14 + 6),param_2);
          this_00 = singleton;
          if ((int)plVar14[9] == 0) {
            if ((int)plVar14[0xc] < 0) {
              iVar16 = *(int *)((long)plVar14 + 0x24);
              if (iVar16 != 0) {
                puVar2 = (ulong *)*plVar14;
                lVar22 = 0;
                uVar15 = *puVar2;
                if (uVar15 == 0) goto LAB_0010ec01;
                while( true ) {
                  if (*(uint *)(this_00 + 0x26c) <= (uint)uVar15) goto LAB_0010ec01;
                  pMVar19 = (Material *)
                            (((uVar15 & 0xffffffff) % (ulong)*(uint *)(this_00 + 0x268)) * 0xc0 +
                            *(long *)(*(long *)(this_00 + 600) +
                                     ((uVar15 & 0xffffffff) / (ulong)*(uint *)(this_00 + 0x268)) * 8
                                     ));
                  iVar12 = *(int *)(pMVar19 + 0xb8);
                  if (iVar12 != (int)(uVar15 >> 0x20)) break;
                  _material_queue_update(this_00,pMVar19,false,true);
                  iVar12 = (int)lVar22;
                  while( true ) {
                    if (iVar16 <= iVar12 + 1) {
                      return;
                    }
                    lVar22 = lVar22 + 1;
                    uVar15 = puVar2[lVar22];
                    if (uVar15 != 0) break;
LAB_0010ec01:
                    _err_print_error("global_shader_parameter_set",
                                     "servers/rendering/renderer_rd/storage_rd/material_storage.cpp"
                                     ,0x664,"Condition \"!material\" is true. Continuing.",0);
                    iVar12 = (int)lVar22;
                  }
                }
                if (0x7ffffffe < iVar12 + 0x80000000U) goto LAB_0010ec01;
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
                goto LAB_0010ec01;
              }
            }
            else {
              _global_shader_uniform_store_in_buffer
                        (this,(int)plVar14[0xc],(int)plVar14[5],(Variant *)(plVar14 + 6));
              iVar16 = (int)plVar14[0xc];
              if (0 < *(int *)((long)plVar14 + 100)) {
                iVar18 = *(int *)((long)plVar14 + 100) + iVar16;
                iVar12 = -1;
                do {
                  iVar13 = iVar16 + 0x3ff;
                  if (-1 < iVar16) {
                    iVar13 = iVar16;
                  }
                  iVar13 = iVar13 >> 10;
                  if ((iVar13 != iVar12) &&
                     (*(char *)((long)iVar13 + *(long *)(this + 0x160)) == '\0')) {
                    *(char *)((long)iVar13 + *(long *)(this + 0x160)) = '\x01';
                    *(int *)(this + 0x168) = *(int *)(this + 0x168) + 1;
                  }
                  iVar16 = iVar16 + 1;
                  iVar12 = iVar13;
                } while (iVar16 != iVar18);
                return;
              }
            }
          }
          return;
        }
        uVar21 = uVar21 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar16 + 1) * lVar22;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar20 = *(uint *)(*(long *)(this + 0x118) + lVar17 * 4);
        iVar16 = SUB164(auVar4 * auVar8,8);
      } while ((uVar20 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar20 * lVar22, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar16) - SUB164(auVar5 * auVar9,8)) * lVar22,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar21 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  _err_print_error("global_shader_parameter_set",
                   "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x657,
                   "Condition \"!global_shader_uniforms.variables.has(p_name)\" is true.",0,0);
  return;
}



/* RendererRD::MaterialStorage::global_shader_parameter_set_override(StringName const&, Variant
   const&) */

void __thiscall
RendererRD::MaterialStorage::global_shader_parameter_set_override
          (MaterialStorage *this,StringName *param_1,Variant *param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  MaterialStorage *this_00;
  int iVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  Material *pMVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  
  if (*(long *)(this + 0x110) == 0) {
    return;
  }
  if (*(int *)(this + 0x134) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x130) * 4);
    uVar15 = CONCAT44(0,uVar1);
    lVar22 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x130) * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar22;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar17 = SUB168(auVar3 * auVar7,8);
    uVar20 = *(uint *)(*(long *)(this + 0x118) + lVar17 * 4);
    iVar16 = SUB164(auVar3 * auVar7,8);
    if (uVar20 != 0) {
      uVar21 = 0;
      while ((uVar13 != uVar20 ||
             (*(long *)(*(long *)(*(long *)(this + 0x110) + lVar17 * 8) + 0x10) != *(long *)param_1)
             )) {
        uVar21 = uVar21 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar16 + 1) * lVar22;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar20 = *(uint *)(*(long *)(this + 0x118) + lVar17 * 4);
        iVar16 = SUB164(auVar4 * auVar8,8);
        if (uVar20 == 0) {
          return;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)uVar20 * lVar22;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)((uVar1 + iVar16) - SUB164(auVar5 * auVar9,8)) * lVar22;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar15;
        if (SUB164(auVar6 * auVar10,8) < uVar21) {
          return;
        }
      }
      if (*(int *)param_2 == 0x18) {
        _err_print_error("global_shader_parameter_set_override",
                         "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x670,
                         "Condition \"p_value.get_type() == Variant::OBJECT\" is true.",0,0);
        return;
      }
      plVar14 = (long *)HashMap<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable>>>
                        ::operator[]((HashMap<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable>>>
                                      *)(this + 0x108),param_1);
      Variant::operator=((Variant *)(plVar14 + 9),param_2);
      this_00 = singleton;
      iVar16 = (int)plVar14[0xc];
      if (iVar16 < 0) {
        iVar16 = *(int *)((long)plVar14 + 0x24);
        if (iVar16 != 0) {
          puVar2 = (ulong *)*plVar14;
          lVar22 = 0;
          uVar15 = *puVar2;
          if (uVar15 == 0) goto LAB_0010ef83;
          while( true ) {
            if (*(uint *)(this_00 + 0x26c) <= (uint)uVar15) goto LAB_0010ef83;
            pMVar19 = (Material *)
                      (((uVar15 & 0xffffffff) % (ulong)*(uint *)(this_00 + 0x268)) * 0xc0 +
                      *(long *)(*(long *)(this_00 + 600) +
                               ((uVar15 & 0xffffffff) / (ulong)*(uint *)(this_00 + 0x268)) * 8));
            iVar11 = *(int *)(pMVar19 + 0xb8);
            if (iVar11 != (int)(uVar15 >> 0x20)) break;
            _material_queue_update(this_00,pMVar19,false,true);
            while( true ) {
              if (iVar16 <= (int)lVar22 + 1) {
                return;
              }
              lVar22 = lVar22 + 1;
              uVar15 = puVar2[lVar22];
              if (uVar15 != 0) break;
LAB_0010ef83:
              _err_print_error("global_shader_parameter_set_override",
                               "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x684
                               ,"Condition \"!material\" is true. Continuing.",0);
            }
          }
          if (0x7ffffffe < iVar11 + 0x80000000U) goto LAB_0010ef83;
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
          goto LAB_0010ef83;
        }
      }
      else {
        if ((int)plVar14[9] == 0) {
          _global_shader_uniform_store_in_buffer(this,iVar16,(int)plVar14[5],plVar14 + 6);
        }
        else {
          _global_shader_uniform_store_in_buffer
                    (this,iVar16,(int)plVar14[5],(Variant *)(plVar14 + 9));
        }
        iVar16 = (int)plVar14[0xc];
        if (0 < *(int *)((long)plVar14 + 100)) {
          iVar18 = *(int *)((long)plVar14 + 100) + iVar16;
          iVar11 = -1;
          do {
            iVar12 = iVar16 + 0x3ff;
            if (-1 < iVar16) {
              iVar12 = iVar16;
            }
            iVar12 = iVar12 >> 10;
            if ((iVar12 != iVar11) && (*(char *)((long)iVar12 + *(long *)(this + 0x160)) == '\0')) {
              *(char *)((long)iVar12 + *(long *)(this + 0x160)) = '\x01';
              *(int *)(this + 0x168) = *(int *)(this + 0x168) + 1;
            }
            iVar16 = iVar16 + 1;
            iVar11 = iVar12;
          } while (iVar16 != iVar18);
        }
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::MaterialStorage::MaterialData::update_uniform_buffer(HashMap<StringName,
   ShaderLanguage::ShaderNode::Uniform, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, ShaderLanguage::ShaderNode::Uniform> > > const&,
   unsigned int const*, HashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   > const&, unsigned char*, unsigned int, bool) */

void __thiscall
RendererRD::MaterialStorage::MaterialData::update_uniform_buffer
          (MaterialData *this,HashMap *param_1,uint *param_2,HashMap *param_3,uchar *param_4,
          uint param_5,bool param_6)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  float *pfVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  code *pcVar25;
  int iVar26;
  uint uVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  undefined1 (*pauVar31) [16];
  uint uVar32;
  undefined4 uVar33;
  long lVar34;
  long *plVar35;
  char cVar36;
  uint uVar37;
  void *pvVar38;
  uint uVar39;
  float *__s;
  ulong uVar40;
  long in_FS_OFFSET;
  bool bVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  bool local_b9;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  size_t local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58 [6];
  long local_40;
  
  lVar6 = singleton;
  plVar35 = *(long **)(param_1 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar35 == (long *)0x0) {
    pvVar38 = *(void **)(this + 0x20);
    if (pvVar38 == (void *)0x0) goto LAB_001103e0;
    bVar41 = true;
    plVar35 = *(long **)(singleton + 0x138);
  }
  else {
    local_b9 = false;
    do {
      if (((-1 < (int)plVar35[3]) && ((int)plVar35[9] != 1)) &&
         (2 < *(int *)((long)plVar35 + 0x4c) - 0xfU)) {
        if ((int)plVar35[9] == 2) {
          if ((*(long *)(lVar6 + 0x110) != 0) && (*(int *)(lVar6 + 0x134) != 0)) {
            uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar6 + 0x130) * 4);
            uVar40 = CONCAT44(0,uVar4);
            lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar6 + 0x130) * 8);
            if (plVar35[2] == 0) {
              uVar27 = StringName::get_empty_hash();
            }
            else {
              uVar27 = *(uint *)(plVar35[2] + 0x20);
            }
            if (uVar27 == 0) {
              uVar27 = 1;
            }
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar27 * lVar30;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar40;
            lVar34 = SUB168(auVar13 * auVar21,8);
            uVar32 = *(uint *)(*(long *)(lVar6 + 0x118) + lVar34 * 4);
            uVar37 = SUB164(auVar13 * auVar21,8);
            if (uVar32 != 0) {
              uVar39 = 0;
              do {
                if ((uVar27 == uVar32) &&
                   (*(long *)(*(long *)(*(long *)(lVar6 + 0x110) + lVar34 * 8) + 0x10) == plVar35[2]
                   )) {
                  uVar33 = *(undefined4 *)
                            (*(long *)(*(long *)(lVar6 + 0x110) + (ulong)uVar37 * 8) + 0x78);
                  goto LAB_001105eb;
                }
                uVar39 = uVar39 + 1;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = (ulong)(uVar37 + 1) * lVar30;
                auVar22._8_8_ = 0;
                auVar22._0_8_ = uVar40;
                lVar34 = SUB168(auVar14 * auVar22,8);
                uVar32 = *(uint *)(*(long *)(lVar6 + 0x118) + lVar34 * 4);
                uVar37 = SUB164(auVar14 * auVar22,8);
              } while ((uVar32 != 0) &&
                      (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar32 * lVar30, auVar23._8_8_ = 0,
                      auVar23._0_8_ = uVar40, auVar16._8_8_ = 0,
                      auVar16._0_8_ =
                           (ulong)((uVar4 + uVar37) - SUB164(auVar15 * auVar23,8)) * lVar30,
                      auVar24._8_8_ = 0, auVar24._0_8_ = uVar40,
                      uVar39 <= SUB164(auVar16 * auVar24,8)));
            }
          }
          local_80 = 0;
          local_70 = 0x49;
          local_78 = "\', but it was removed at some point. Material will not display correctly.";
          String::parse_latin1((StrRange *)&local_80);
          lVar30 = plVar35[2];
          if (lVar30 == 0) {
LAB_00110912:
            local_90 = 0;
          }
          else {
            pcVar8 = *(char **)(lVar30 + 8);
            local_90 = 0;
            if (pcVar8 == (char *)0x0) {
              plVar1 = (long *)(*(long *)(lVar30 + 0x10) + -0x10);
              if (*(long *)(lVar30 + 0x10) == 0) goto LAB_00110912;
              do {
                lVar34 = *plVar1;
                if (lVar34 == 0) goto LAB_00110912;
                LOCK();
                lVar29 = *plVar1;
                bVar41 = lVar34 == lVar29;
                if (bVar41) {
                  *plVar1 = lVar34 + 1;
                  lVar29 = lVar34;
                }
                UNLOCK();
              } while (!bVar41);
              if (lVar29 != -1) {
                local_90 = *(long *)(lVar30 + 0x10);
              }
            }
            else {
              local_70 = strlen(pcVar8);
              local_78 = pcVar8;
              String::parse_latin1((StrRange *)&local_90);
            }
          }
          operator+((char *)&local_88,(String *)"Shader uses global parameter \'");
          String::operator+((String *)&local_78,(String *)&local_88);
          _err_print_error("update_uniform_buffer",
                           "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x2ff,
                           (String *)&local_78,0,1);
          pcVar8 = local_78;
          if (local_78 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = (char *)0x0;
              Memory::free_static(pcVar8 + -0x10,false);
            }
          }
          lVar30 = local_88;
          if (local_88 != 0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = 0;
              Memory::free_static((void *)(lVar30 + -0x10),false);
            }
          }
          lVar30 = local_90;
          if (local_90 != 0) {
            LOCK();
            plVar1 = (long *)(local_90 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_90 = 0;
              Memory::free_static((void *)(lVar30 + -0x10),false);
            }
          }
          lVar30 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar30 + -0x10),false);
            }
          }
          uVar33 = 0;
LAB_001105eb:
          local_b9 = true;
          *(undefined4 *)(param_4 + param_2[(int)plVar35[3]]) = uVar33;
        }
        else {
          uVar4 = param_2[(int)plVar35[3]];
          if ((int)plVar35[6] < 1) {
            uVar27 = ShaderLanguage::get_datatype_size((int)plVar35[5]);
          }
          else {
            iVar26 = ShaderLanguage::get_datatype_size((int)plVar35[5]);
            uVar27 = iVar26 * (int)plVar35[6];
            uVar37 = (int)plVar35[6] * 0x10;
            uVar32 = uVar27 % uVar37;
            if (uVar32 != 0) {
              uVar27 = (uVar37 + uVar27) - uVar32;
            }
          }
          if (param_5 < uVar27 + uVar4) {
            _err_print_error("update_uniform_buffer",
                             "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x317,
                             "Condition \"offset + size > p_buffer_size\" is true. Continuing.",0,0)
            ;
          }
          else {
            __s = (float *)(param_4 + uVar4);
            if ((*(long *)(param_3 + 8) != 0) && (*(int *)(param_3 + 0x2c) != 0)) {
              uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4);
              uVar40 = CONCAT44(0,uVar4);
              lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
              if (plVar35[2] == 0) {
                uVar27 = StringName::get_empty_hash();
              }
              else {
                uVar27 = *(uint *)(plVar35[2] + 0x20);
              }
              if (uVar27 == 0) {
                uVar27 = 1;
              }
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)uVar27 * lVar30;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar40;
              lVar34 = SUB168(auVar9 * auVar17,8);
              uVar32 = *(uint *)(*(long *)(param_3 + 0x10) + lVar34 * 4);
              uVar37 = SUB164(auVar9 * auVar17,8);
              if (uVar32 != 0) {
                uVar39 = 0;
                while ((uVar27 != uVar32 ||
                       (*(long *)(*(long *)(*(long *)(param_3 + 8) + lVar34 * 8) + 0x10) !=
                        plVar35[2]))) {
                  uVar39 = uVar39 + 1;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)(uVar37 + 1) * lVar30;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar40;
                  lVar34 = SUB168(auVar10 * auVar18,8);
                  uVar32 = *(uint *)(*(long *)(param_3 + 0x10) + lVar34 * 4);
                  uVar37 = SUB164(auVar10 * auVar18,8);
                  if ((uVar32 == 0) ||
                     (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar32 * lVar30, auVar19._8_8_ = 0,
                     auVar19._0_8_ = uVar40, auVar12._8_8_ = 0,
                     auVar12._0_8_ =
                          (ulong)((uVar4 + uVar37) - SUB164(auVar11 * auVar19,8)) * lVar30,
                     auVar20._8_8_ = 0, auVar20._0_8_ = uVar40, SUB164(auVar12 * auVar20,8) < uVar39
                     )) goto LAB_00110410;
                }
                lVar30 = *(long *)(*(long *)(param_3 + 8) + (ulong)uVar37 * 8);
                if (lVar30 != 0) {
                  _fill_std140_variant_ubo_value((int)plVar35[5],(int)plVar35[6],lVar30 + 0x18,__s);
                  goto switchD_00110452_caseD_0;
                }
              }
            }
LAB_00110410:
            fVar3 = _LC114;
            pfVar7 = (float *)plVar35[8];
            if ((pfVar7 == (float *)0x0) || (lVar30 = *(long *)(pfVar7 + -2), lVar30 == 0)) {
              if (((int)plVar35[5] - 0xfU < 2) && (*(int *)((long)plVar35 + 0x4c) == 3)) {
                local_68 = __LC186;
                uStack_60 = _UNK_00121fa8;
                Variant::Variant((Variant *)local_58,(Color *)&local_68);
                _fill_std140_variant_ubo_value
                          ((int)plVar35[5],(int)plVar35[6],(Variant *)local_58,__s);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              else {
                iVar26 = (int)plVar35[6];
                if (iVar26 < 1) {
                  iVar26 = 1;
                }
                switch((int)plVar35[5]) {
                case 1:
                case 5:
                case 9:
                case 0xd:
                  memset(__s,0,(long)(iVar26 << 2));
                  break;
                case 2:
                case 6:
                case 10:
                case 0xe:
                  memset(__s,0,(long)(iVar26 << 3));
                  break;
                case 3:
                case 7:
                case 0xb:
                case 0xf:
                  memset(__s,0,(long)(iVar26 * 0xc));
                  break;
                case 4:
                case 8:
                case 0xc:
                case 0x10:
                  memset(__s,0,(long)(iVar26 << 4));
                  break;
                case 0x11:
                  memset(__s,0,(long)(iVar26 << 5));
                  break;
                case 0x12:
                  memset(__s,0,(long)(iVar26 * 0x30));
                  break;
                case 0x13:
                  memset(__s,0,(long)(iVar26 << 6));
                }
              }
            }
            else {
              cVar36 = '\0';
              if (*(int *)((long)plVar35 + 0x4c) == 3) {
                cVar36 = param_6;
              }
              lVar34 = lVar30;
              switch((int)plVar35[5]) {
              case 1:
                if (lVar30 < 1) {
LAB_00110d9d:
                  lVar34 = 0;
LAB_00110ac3:
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,lVar34,lVar30,"p_index",
                             "size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar25 = (code *)invalidInstructionException();
                  (*pcVar25)();
                }
                *__s = (float)(uint)*(byte *)pfVar7;
                break;
              case 2:
                if (lVar30 < 1) goto LAB_00110d9d;
                *__s = (float)(uint)*(byte *)pfVar7;
                if (lVar30 == 1) {
LAB_00110eb7:
                  lVar34 = 1;
                  lVar30 = 1;
                  goto LAB_00110ac3;
                }
                __s[1] = (float)(uint)*(byte *)(pfVar7 + 1);
                break;
              case 3:
                if (lVar30 < 1) goto LAB_00110d9d;
                *__s = (float)(uint)*(byte *)pfVar7;
                if (lVar30 == 1) goto LAB_00110eb7;
                __s[1] = (float)(uint)*(byte *)(pfVar7 + 1);
                if (lVar30 == 2) {
LAB_00110f0e:
                  lVar34 = 2;
                  lVar30 = 2;
                  goto LAB_00110ac3;
                }
                __s[2] = (float)(uint)*(byte *)(pfVar7 + 2);
                break;
              case 4:
                if (lVar30 < 1) goto LAB_00110d9d;
                *__s = (float)(uint)*(byte *)pfVar7;
                if (lVar30 == 1) goto LAB_00110eb7;
                __s[1] = (float)(uint)*(byte *)(pfVar7 + 1);
                if (lVar30 == 2) goto LAB_00110f0e;
                __s[2] = (float)(uint)*(byte *)(pfVar7 + 2);
                if (lVar30 == 3) {
LAB_00110f43:
                  lVar34 = 3;
                  lVar30 = 3;
                  goto LAB_00110ac3;
                }
                __s[3] = (float)(uint)*(byte *)(pfVar7 + 3);
                break;
              case 5:
              case 9:
                if (lVar30 < 1) goto LAB_00110d9d;
                *__s = *pfVar7;
                break;
              case 6:
              case 10:
                if (lVar30 < 1) {
LAB_00110dbf:
                  lVar34 = 0;
                  goto LAB_00110ac3;
                }
                *__s = *pfVar7;
                if (lVar30 == 1) {
LAB_00110f39:
                  lVar34 = 1;
                  goto LAB_00110ac3;
                }
                __s[1] = pfVar7[1];
                break;
              case 7:
              case 0xb:
                if (lVar30 < 1) {
                  lVar34 = 0;
                  goto LAB_00110ac3;
                }
                *__s = *pfVar7;
                if (lVar30 == 1) {
                  lVar30 = 1;
                  goto LAB_00110ac3;
                }
                __s[1] = pfVar7[1];
                if (lVar30 == 2) {
                  lVar30 = 2;
                  goto LAB_00110ac3;
                }
                __s[2] = pfVar7[2];
                break;
              case 8:
                if (lVar30 < 1) goto LAB_00110dbf;
                *__s = *pfVar7;
                lVar29 = 1;
                do {
                  lVar2 = lVar29 + 1;
                  if (lVar30 == lVar29) goto LAB_00110ac3;
                  __s[lVar29] = pfVar7[lVar29];
                  lVar29 = lVar2;
                } while (lVar2 != 4);
                break;
              case 0xc:
                if (lVar30 < 1) goto LAB_00110dbf;
                *__s = *pfVar7;
                lVar29 = 1;
                do {
                  lVar2 = lVar29 + 1;
                  if (lVar30 == lVar29) goto LAB_00110ac3;
                  __s[lVar29] = pfVar7[lVar29];
                  lVar29 = lVar2;
                } while (lVar2 != 4);
                break;
              case 0xd:
                if (lVar30 < 1) goto LAB_00110d9d;
                *__s = *pfVar7;
                break;
              case 0xe:
                if (lVar30 < 1) goto LAB_00110dbf;
                *__s = *pfVar7;
                if (lVar30 == 1) goto LAB_00110f39;
                __s[1] = pfVar7[1];
                break;
              case 0xf:
                if (lVar30 < 3) {
                  lVar34 = 2;
                  goto LAB_00110ac3;
                }
                fVar46 = pfVar7[2];
                fVar43 = *pfVar7;
                fVar45 = pfVar7[1];
                if (cVar36 != '\0') {
                  if (_LC114 <= fVar46) {
                    fVar46 = powf((float)(((double)fVar46 + __LC115) * __LC116),_LC117);
                  }
                  else {
                    fVar46 = fVar46 * _LC118;
                  }
                  if (fVar3 <= fVar45) {
                    fVar45 = powf((float)(((double)fVar45 + __LC115) * __LC116),_LC117);
                  }
                  else {
                    fVar45 = _LC118 * fVar45;
                  }
                  if (fVar3 <= fVar43) {
                    fVar43 = powf((float)(((double)fVar43 + __LC115) * __LC116),_LC117);
                  }
                  else {
                    fVar43 = fVar43 * _LC118;
                  }
                }
                *__s = fVar43;
                __s[1] = fVar45;
                __s[2] = fVar46;
                break;
              case 0x10:
                if (lVar30 < 4) {
                  lVar34 = 3;
                  goto LAB_00110ac3;
                }
                fVar43 = *pfVar7;
                fVar45 = pfVar7[1];
                fVar42 = pfVar7[2];
                fVar46 = pfVar7[3];
                fVar44 = pfVar7[3];
                if (cVar36 != '\0') {
                  if (_LC114 <= fVar42) {
                    fVar42 = powf((float)(((double)fVar42 + __LC115) * __LC116),_LC117);
                  }
                  else {
                    fVar42 = fVar42 * _LC118;
                  }
                  if (fVar3 <= fVar45) {
                    fVar45 = powf((float)(((double)fVar45 + __LC115) * __LC116),_LC117);
                  }
                  else {
                    fVar45 = _LC118 * fVar45;
                  }
                  fVar44 = fVar46;
                  if (fVar3 <= fVar43) {
                    fVar43 = powf((float)(((double)fVar43 + __LC115) * __LC116),_LC117);
                  }
                  else {
                    fVar43 = fVar43 * _LC118;
                  }
                }
                *__s = fVar43;
                __s[1] = fVar45;
                __s[2] = fVar42;
                __s[3] = fVar44;
                break;
              case 0x11:
                if (lVar30 < 1) goto LAB_00110d9d;
                *__s = *pfVar7;
                if (lVar30 == 1) goto LAB_00110eb7;
                fVar3 = pfVar7[1];
                __s[2] = 0.0;
                __s[3] = 0.0;
                __s[1] = fVar3;
                if (lVar30 == 2) goto LAB_00110f0e;
                __s[4] = pfVar7[2];
                if (lVar30 == 3) goto LAB_00110f43;
                fVar3 = pfVar7[3];
                __s[6] = 0.0;
                __s[7] = 0.0;
                __s[5] = fVar3;
                break;
              case 0x12:
                if (lVar30 < 1) goto LAB_00110d9d;
                *__s = *pfVar7;
                if (lVar30 == 1) goto LAB_00110eb7;
                __s[1] = pfVar7[1];
                if (lVar30 == 2) goto LAB_00110f0e;
                fVar3 = pfVar7[2];
                __s[3] = 0.0;
                __s[2] = fVar3;
                if (lVar30 == 3) goto LAB_00110f43;
                __s[4] = pfVar7[3];
                if (lVar30 == 4) {
                  lVar34 = 4;
                  lVar30 = 4;
                  goto LAB_00110ac3;
                }
                __s[5] = pfVar7[4];
                if (lVar30 == 5) {
                  lVar34 = 5;
                  lVar30 = 5;
                  goto LAB_00110ac3;
                }
                fVar3 = pfVar7[5];
                __s[7] = 0.0;
                __s[6] = fVar3;
                if (lVar30 == 6) {
                  lVar34 = 6;
                  lVar30 = 6;
                  goto LAB_00110ac3;
                }
                __s[8] = pfVar7[6];
                if (lVar30 == 7) {
                  lVar34 = 7;
                  lVar30 = 7;
                  goto LAB_00110ac3;
                }
                __s[9] = pfVar7[7];
                if (lVar30 == 8) {
                  lVar34 = 8;
                  lVar30 = 8;
                  goto LAB_00110ac3;
                }
                fVar3 = pfVar7[8];
                __s[0xb] = 0.0;
                __s[10] = fVar3;
                break;
              case 0x13:
                if (lVar30 < 1) goto LAB_00110dbf;
                lVar29 = 1;
                while (__s[lVar29 + -1] = pfVar7[lVar29 + -1], lVar29 != 0x10) {
                  bVar41 = lVar30 == lVar29;
                  lVar29 = lVar29 + 1;
                  if (bVar41) goto LAB_00110ac3;
                }
              }
            }
          }
        }
      }
switchD_00110452_caseD_0:
      plVar35 = (long *)*plVar35;
    } while (plVar35 != (long *)0x0);
    pvVar38 = *(void **)(this + 0x20);
    bVar41 = pvVar38 != (void *)0x0;
    if (bVar41 == local_b9) goto LAB_001103e0;
    plVar35 = *(long **)(lVar6 + 0x138);
    if (local_b9 != false) {
      if (plVar35 == (long *)0x0) {
        pauVar31 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(lVar6 + 0x138) = pauVar31;
        *(undefined4 *)pauVar31[1] = 0;
        *pauVar31 = (undefined1  [16])0x0;
      }
      puVar28 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
      *puVar28 = 0;
      uVar5 = *(undefined8 *)(this + 0x18);
      puVar28[1] = 0;
      *puVar28 = uVar5;
      plVar35 = *(long **)(lVar6 + 0x138);
      lVar6 = plVar35[1];
      puVar28[2] = lVar6;
      puVar28[3] = plVar35;
      if (lVar6 != 0) {
        *(undefined8 **)(lVar6 + 8) = puVar28;
      }
      plVar35[1] = (long)puVar28;
      if (*plVar35 == 0) {
        *plVar35 = (long)puVar28;
      }
      *(int *)(plVar35 + 2) = (int)plVar35[2] + 1;
      *(undefined8 **)(this + 0x20) = puVar28;
      goto LAB_001103e0;
    }
  }
  if ((plVar35 != (long *)0x0) && (bVar41)) {
    if (plVar35 == *(long **)((long)pvVar38 + 0x18)) {
      lVar30 = *(long *)((long)pvVar38 + 8);
      if ((void *)*plVar35 == pvVar38) {
        *plVar35 = lVar30;
      }
      lVar34 = *(long *)((long)pvVar38 + 0x10);
      if ((void *)plVar35[1] == pvVar38) {
        plVar35[1] = lVar34;
      }
      if (lVar34 != 0) {
        *(long *)(lVar34 + 8) = lVar30;
        lVar30 = *(long *)((long)pvVar38 + 8);
      }
      if (lVar30 != 0) {
        *(long *)(lVar30 + 0x10) = lVar34;
      }
      Memory::free_static(pvVar38,false);
      *(int *)(plVar35 + 2) = (int)plVar35[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(lVar6 + 0x138) + 0x10) == 0) {
      Memory::free_static(*(void **)(lVar6 + 0x138),false);
      *(undefined8 *)(lVar6 + 0x138) = 0;
    }
  }
  *(undefined8 *)(this + 0x20) = 0;
LAB_001103e0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::MaterialStorage::global_shader_parameters_instance_update(RID, int, Variant const&,
   int) */

void __thiscall
RendererRD::MaterialStorage::global_shader_parameters_instance_update
          (MaterialStorage *this,long param_2,uint param_3,int *param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  int *piVar12;
  char *pcVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = param_2;
  if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
    uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4));
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
    uVar11 = param_2 * 0x3ffff - 1;
    uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
    uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
    uVar11 = uVar11 >> 0x16 ^ uVar11;
    uVar20 = uVar11 & 0xffffffff;
    if ((int)uVar11 == 0) {
      uVar20 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar20 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar18;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar17 = *(uint *)(*(long *)(this + 0x188) + lVar14 * 4);
    iVar16 = SUB164(auVar3 * auVar7,8);
    if (uVar17 != 0) {
      uVar19 = 0;
      while ((uVar17 != (uint)uVar20 ||
             (param_2 != *(long *)(*(long *)(*(long *)(this + 0x180) + lVar14 * 8) + 0x10)))) {
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar16 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar17 = *(uint *)(*(long *)(this + 0x188) + lVar14 * 4);
        iVar16 = SUB164(auVar4 * auVar8,8);
        if ((uVar17 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar17 * lVar2, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(this + 0x1a0) * 4) + iVar16) -
                                 SUB164(auVar5 * auVar9,8)) * lVar2, auVar10._8_8_ = 0,
           auVar10._0_8_ = uVar18, SUB164(auVar6 * auVar10,8) < uVar19)) goto LAB_00111500;
      }
      piVar12 = (int *)HashMap<RID,int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,int>>>
                       ::operator[]((HashMap<RID,int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,int>>>
                                     *)(this + 0x178),(RID *)&local_b0);
      if (-1 < *piVar12) {
        if (param_3 < 0x10) {
          iVar16 = *param_4;
          if (iVar16 < 0x15) {
            local_48 = 0x10;
            local_98 = __LC191;
            uStack_90 = _UNK_00121fb8;
            local_88 = __LC192;
            uStack_80 = _UNK_00121fc8;
            local_78 = __LC193;
            uStack_70 = _UNK_00121fd8;
            local_68 = __LC194;
            uStack_60 = _UNK_00121fe8;
            local_58 = __LC195;
            uStack_50 = _UNK_00121ff8;
            if (iVar16 == 2) {
              if (param_5 < 1) goto LAB_00111530;
              if (param_5 - 1U < 3) {
                param_5 = param_5 + 1;
                goto LAB_00111540;
              }
            }
            else {
LAB_00111530:
              param_5 = *(int *)((long)&local_98 + (long)iVar16 * 4);
              if (param_5 != 0x21) {
LAB_00111540:
                iVar16 = param_3 + *piVar12;
                _fill_std140_variant_ubo_value
                          (param_5,0,param_4,(long)iVar16 * 0x10 + *(long *)(this + 0x150),1);
                pcVar13 = (char *)((long)(iVar16 >> 10) + *(long *)(this + 0x160));
                if (*pcVar13 == '\0') {
                  *pcVar13 = '\x01';
                  *(int *)(this + 0x168) = *(int *)(this + 0x168) + 1;
                }
                goto LAB_00111500;
              }
            }
            Variant::get_type_name(&local_a8);
            operator+((char *)&local_a0,
                      (String *)"Unsupported variant type for instance parameter: ");
            pcVar13 = "Condition \"datatype == ShaderLanguage::TYPE_MAX\" is true.";
            uVar15 = 0x746;
          }
          else {
            Variant::get_type_name(&local_a8);
            operator+((char *)&local_a0,
                      (String *)"Unsupported variant type for instance parameter: ");
            pcVar13 = "Condition \"p_value.get_type() > Variant::COLOR\" is true.";
            uVar15 = 0x71c;
          }
          _err_print_error("global_shader_parameters_instance_update",
                           "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",uVar15,
                           pcVar13,&local_a0,0);
          lVar2 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar2 = local_a8;
          if (local_a8 != 0) {
            LOCK();
            plVar1 = (long *)(local_a8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a8 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
        }
        else {
          _err_print_index_error
                    ("global_shader_parameters_instance_update",
                     "servers/rendering/renderer_rd/storage_rd/material_storage.cpp",0x719,
                     (long)(int)param_3,0x10,"p_index",
                     "ShaderLanguage::MAX_INSTANCE_UNIFORM_INDICES","",false,false);
        }
      }
    }
  }
LAB_00111500:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::MaterialStorage::MaterialData::update_textures(HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, HashMap<StringName,
   HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > > > > > const&,
   Vector<ShaderCompiler::GeneratedCode::Texture> const&, RID*, bool, bool) */

void __thiscall
RendererRD::MaterialStorage::MaterialData::update_textures
          (MaterialData *this,HashMap *param_1,HashMap *param_2,Vector *param_3,RID *param_4,
          bool param_5,bool param_6)

{
  undefined1 (*pauVar1) [16];
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  code *pcVar102;
  char cVar103;
  long lVar104;
  int iVar105;
  int iVar106;
  uint uVar107;
  long lVar108;
  long lVar109;
  StringName *this_00;
  undefined8 *puVar110;
  long lVar111;
  long lVar112;
  Variant *pVVar113;
  ulong uVar114;
  long lVar115;
  undefined1 (*pauVar116) [16];
  long lVar117;
  int iVar118;
  long lVar119;
  undefined8 uVar120;
  long lVar121;
  ulong uVar122;
  int iVar123;
  long *plVar124;
  ulong uVar125;
  long lVar126;
  uint uVar127;
  ulong uVar128;
  ulong uVar129;
  char cVar130;
  uint uVar131;
  uint uVar132;
  long *plVar133;
  uint *puVar134;
  long lVar135;
  uint uVar136;
  long in_FS_OFFSET;
  bool bVar137;
  long local_118;
  ulong local_110;
  int local_e8;
  int local_e4;
  long local_e0;
  long local_d0;
  long lStack_b0;
  long local_80;
  long local_78;
  long local_70;
  Vector<RID> local_68 [8];
  long local_60;
  undefined1 (*local_58) [16];
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar108 = RendererRD::TextureStorage::get_singleton();
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
  lVar104 = singleton;
  lVar115 = *(long *)(param_3 + 8);
  if (lVar115 != 0) {
    lVar121 = 0;
    local_e4 = 0;
    cVar103 = '\0';
    local_d0 = 0;
    local_e8 = 0;
    local_e0 = 0;
LAB_001116f1:
    if (lVar121 < *(long *)(lVar115 + -8)) {
      local_60 = 0;
      lVar4 = lVar121 * 0x28;
      plVar133 = (long *)(lVar115 + lVar4);
      iVar106 = (int)plVar133[4];
      if (2 < *(int *)((long)plVar133 + 0xc) - 0xfU) {
        cVar130 = *(char *)((long)plVar133 + 0x1c);
        lVar115 = lVar121;
        if (cVar130 != '\0') {
          cVar103 = cVar130;
          if ((*(long *)(lVar104 + 0x110) != 0) && (*(int *)(lVar104 + 0x134) != 0)) {
            uVar136 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar104 + 0x130) * 4);
            uVar114 = CONCAT44(0,uVar136);
            lVar109 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar104 + 0x130) * 8);
            if (*plVar133 == 0) {
              uVar107 = StringName::get_empty_hash();
            }
            else {
              uVar107 = *(uint *)(*plVar133 + 0x20);
            }
            if (uVar107 == 0) {
              uVar107 = 1;
            }
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar107 * lVar109;
            auVar54._8_8_ = 0;
            auVar54._0_8_ = uVar114;
            lVar119 = SUB168(auVar6 * auVar54,8);
            uVar132 = SUB164(auVar6 * auVar54,8);
            uVar127 = *(uint *)(*(long *)(lVar104 + 0x118) + lVar119 * 4);
            if (uVar127 != 0) {
              uVar131 = 0;
              do {
                if (uVar107 == uVar127) {
                  lVar119 = *(long *)(*(long *)(*(long *)(lVar104 + 0x110) + lVar119 * 8) + 0x10);
                  if (lVar119 == *plVar133) {
                    lVar109 = *(long *)(*(long *)(lVar104 + 0x110) + (ulong)uVar132 * 8);
                    if (-1 < *(int *)(lVar109 + 0x78)) {
                      local_70 = 0;
                      local_50 = 0x33;
                      local_58 = (undefined1 (*) [16])0x114af8;
                      String::parse_latin1((StrRange *)&local_70);
                      lVar109 = *plVar133;
                      if (lVar109 == 0) goto LAB_00112c6c;
                      pauVar116 = *(undefined1 (**) [16])(lVar109 + 8);
                      local_80 = 0;
                      if (pauVar116 == (undefined1 (*) [16])0x0) {
                        plVar133 = (long *)(*(long *)(lVar109 + 0x10) + -0x10);
                        if (*(long *)(lVar109 + 0x10) == 0) goto LAB_00112c6c;
                        goto LAB_00112b91;
                      }
                      local_50 = strlen((char *)pauVar116);
                      local_58 = pauVar116;
                      String::parse_latin1((StrRange *)&local_80);
                      goto LAB_001118ff;
                    }
                    if ((*(long *)(this + 0x40) == 0) || (*(int *)(this + 100) == 0))
                    goto LAB_00112bd0;
                    uVar136 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4);
                    uVar114 = CONCAT44(0,uVar136);
                    lVar126 = *(long *)(hash_table_size_primes_inv +
                                       (ulong)*(uint *)(this + 0x60) * 8);
                    if (lVar119 == 0) {
                      uVar107 = StringName::get_empty_hash();
                    }
                    else {
                      uVar107 = *(uint *)(lVar119 + 0x20);
                    }
                    if (uVar107 == 0) {
                      uVar107 = 1;
                    }
                    auVar39._8_8_ = 0;
                    auVar39._0_8_ = (ulong)uVar107 * lVar126;
                    auVar87._8_8_ = 0;
                    auVar87._0_8_ = uVar114;
                    lVar119 = SUB168(auVar39 * auVar87,8);
                    uVar132 = SUB164(auVar39 * auVar87,8);
                    uVar127 = *(uint *)(*(long *)(this + 0x48) + lVar119 * 4);
                    if (uVar127 == 0) goto LAB_00112bd0;
                    uVar131 = 0;
                    goto LAB_00112a09;
                  }
                }
                uVar131 = uVar131 + 1;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (ulong)(uVar132 + 1) * lVar109;
                auVar55._8_8_ = 0;
                auVar55._0_8_ = uVar114;
                lVar119 = SUB168(auVar7 * auVar55,8);
                uVar127 = *(uint *)(*(long *)(lVar104 + 0x118) + lVar119 * 4);
                uVar132 = SUB164(auVar7 * auVar55,8);
              } while ((uVar127 != 0) &&
                      (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar127 * lVar109, auVar56._8_8_ = 0,
                      auVar56._0_8_ = uVar114, auVar9._8_8_ = 0,
                      auVar9._0_8_ = (ulong)((uVar136 + uVar132) - SUB164(auVar8 * auVar56,8)) *
                                     lVar109, auVar57._8_8_ = 0, auVar57._0_8_ = uVar114,
                      uVar131 <= SUB164(auVar9 * auVar57,8)));
            }
          }
          local_70 = 0;
          local_50 = 0x49;
          local_58 = (undefined1 (*) [16])0x114930;
          String::parse_latin1((StrRange *)&local_70);
          lVar109 = *plVar133;
          if (lVar109 == 0) {
LAB_00112ebc:
            local_80 = 0;
          }
          else {
            pauVar116 = *(undefined1 (**) [16])(lVar109 + 8);
            local_80 = 0;
            if (pauVar116 == (undefined1 (*) [16])0x0) {
              plVar133 = (long *)(*(long *)(lVar109 + 0x10) + -0x10);
              if (*(long *)(lVar109 + 0x10) == 0) goto LAB_00112ebc;
              do {
                lVar119 = *plVar133;
                if (lVar119 == 0) goto LAB_00112ebc;
                LOCK();
                lVar126 = *plVar133;
                bVar137 = lVar119 == lVar126;
                if (bVar137) {
                  *plVar133 = lVar119 + 1;
                  lVar126 = lVar119;
                }
                UNLOCK();
              } while (!bVar137);
              if (lVar126 != -1) {
                local_80 = *(long *)(lVar109 + 0x10);
              }
            }
            else {
              local_50 = strlen((char *)pauVar116);
              local_58 = pauVar116;
              String::parse_latin1((StrRange *)&local_80);
            }
          }
          operator+((char *)&local_78,(String *)"Shader uses global parameter texture \'");
          String::operator+((String *)&local_58,(String *)&local_78);
          uVar120 = 900;
          goto LAB_00111938;
        }
        if ((*(long *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
          uVar136 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4);
          uVar114 = CONCAT44(0,uVar136);
          lVar109 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x28) * 8);
          if (*plVar133 == 0) {
            uVar107 = StringName::get_empty_hash();
          }
          else {
            uVar107 = *(uint *)(*plVar133 + 0x20);
          }
          if (uVar107 == 0) {
            uVar107 = 1;
          }
          auVar24._8_8_ = 0;
          auVar24._0_8_ = (ulong)uVar107 * lVar109;
          auVar72._8_8_ = 0;
          auVar72._0_8_ = uVar114;
          lVar119 = SUB168(auVar24 * auVar72,8);
          uVar132 = SUB164(auVar24 * auVar72,8);
          uVar127 = *(uint *)(*(long *)(param_1 + 0x10) + lVar119 * 4);
          if (uVar127 != 0) {
            uVar131 = 0;
LAB_001121b6:
            if ((uVar127 != uVar107) ||
               (*(long *)(*(long *)(*(long *)(param_1 + 8) + lVar119 * 8) + 0x10) != *plVar133))
            goto LAB_00112170;
            lVar109 = *(long *)(*(long *)(param_1 + 8) + (ulong)uVar132 * 8);
            if (lVar109 != 0) {
              if (*(int *)(lVar109 + 0x18) < 0x1c) {
                Variant::operator_cast_to_RID((Variant *)(lVar109 + 0x18));
                Vector<RID>::push_back(local_68);
                lVar109 = local_60;
                if (0 < iVar106) goto LAB_0011259a;
LAB_00112dad:
                lVar109 = local_60;
                if (local_60 == 0) goto LAB_00112234;
                goto LAB_001125b5;
              }
              Variant::operator_cast_to_Array((Variant *)&local_58);
              iVar118 = (int)(Variant *)&local_58;
              if (iVar106 < 1) {
                iVar105 = Array::size();
                if (0 < iVar105) {
                  pVVar113 = (Variant *)Array::operator[](iVar118);
                  Variant::operator_cast_to_RID(pVVar113);
                  Vector<RID>::push_back(local_68);
                  Array::~Array((Array *)&local_58);
                  goto LAB_00112dad;
                }
                Array::~Array((Array *)&local_58);
                goto LAB_00112234;
              }
              iVar105 = Array::size();
              if (iVar106 < iVar105) {
                iVar105 = iVar106;
              }
              if (0 < iVar105) {
                iVar123 = 0;
                do {
                  iVar123 = iVar123 + 1;
                  pVVar113 = (Variant *)Array::operator[](iVar118);
                  Variant::operator_cast_to_RID(pVVar113);
                  Vector<RID>::push_back(local_68);
                  lVar109 = local_60;
                } while (iVar123 != iVar105);
                Array::~Array((Array *)&local_58);
LAB_0011259a:
                if (lVar109 == 0) goto LAB_00112f36;
                uVar114 = *(ulong *)(lVar109 + -8);
                if ((long)uVar114 < (long)iVar106) {
                  lStack_b0 = *(long *)(param_2 + 8);
                  if (lStack_b0 != 0) {
                    if (*(int *)(param_2 + 0x2c) == 0) {
                      lStack_b0 = 0;
                      goto LAB_00113056;
                    }
                    goto LAB_00112f70;
                  }
                  goto LAB_00113056;
                }
                goto LAB_001125b5;
              }
              Array::~Array((Array *)&local_58);
              goto LAB_00112f36;
            }
          }
        }
LAB_00112228:
        if (0 < iVar106) {
LAB_00112f36:
          lStack_b0 = *(long *)(param_2 + 8);
          if (lStack_b0 == 0) {
LAB_0011334a:
            local_110 = 0;
LAB_00113063:
            do {
              if (lStack_b0 != 0) {
                while( true ) {
                  lVar109 = *(long *)(lStack_b0 + 0x20);
                  if ((lVar109 == 0) || (*(int *)(lStack_b0 + 0x44) == 0)) break;
                  uVar136 = *(uint *)(hash_table_size_primes +
                                     (ulong)*(uint *)(lStack_b0 + 0x40) * 4);
                  uVar128 = CONCAT44(0,uVar136);
                  uVar114 = *(ulong *)(hash_table_size_primes_inv +
                                      (ulong)*(uint *)(lStack_b0 + 0x40) * 8);
                  uVar107 = ((uint)local_110 >> 0x10 ^ (uint)local_110) * -0x7a143595;
                  uVar107 = (uVar107 ^ uVar107 >> 0xd) * -0x3d4d51cb;
                  uVar127 = uVar107 ^ uVar107 >> 0x10;
                  if (uVar107 == uVar107 >> 0x10) {
                    uVar127 = 1;
                    uVar122 = uVar114;
                  }
                  else {
                    uVar122 = uVar127 * uVar114;
                  }
                  auVar47._8_8_ = 0;
                  auVar47._0_8_ = uVar128;
                  auVar95._8_8_ = 0;
                  auVar95._0_8_ = uVar122;
                  lVar126 = SUB168(auVar47 * auVar95,8);
                  lVar119 = *(long *)(lStack_b0 + 0x28);
                  uVar107 = *(uint *)(lVar119 + lVar126 * 4);
                  iVar118 = SUB164(auVar47 * auVar95,8);
                  if (uVar107 == 0) break;
                  uVar122 = (ulong)uVar107;
                  uVar132 = 0;
                  lVar117 = lVar126;
                  iVar105 = iVar118;
                  while (((uint)uVar122 != uVar127 ||
                         (*(uint *)(*(long *)(lVar109 + lVar117 * 8) + 0x10) != (uint)local_110))) {
                    uVar132 = uVar132 + 1;
                    auVar48._8_8_ = 0;
                    auVar48._0_8_ = (iVar105 + 1) * uVar114;
                    auVar96._8_8_ = 0;
                    auVar96._0_8_ = uVar128;
                    lVar117 = SUB168(auVar48 * auVar96,8);
                    uVar131 = *(uint *)(lVar119 + lVar117 * 4);
                    uVar122 = (ulong)uVar131;
                    iVar105 = SUB164(auVar48 * auVar96,8);
                    if ((uVar131 == 0) ||
                       (auVar49._8_8_ = 0, auVar49._0_8_ = uVar122 * uVar114, auVar97._8_8_ = 0,
                       auVar97._0_8_ = uVar128, auVar50._8_8_ = 0,
                       auVar50._0_8_ = ((uVar136 + iVar105) - SUB164(auVar49 * auVar97,8)) * uVar114
                       , auVar98._8_8_ = 0, auVar98._0_8_ = uVar128,
                       SUB164(auVar50 * auVar98,8) < uVar132)) goto LAB_0011326d;
                  }
                  uVar132 = 0;
                  while ((uVar107 != uVar127 ||
                         (*(uint *)(*(long *)(lVar109 + lVar126 * 8) + 0x10) != (uint)local_110))) {
                    uVar132 = uVar132 + 1;
                    auVar51._8_8_ = 0;
                    auVar51._0_8_ = (iVar118 + 1) * uVar114;
                    auVar99._8_8_ = 0;
                    auVar99._0_8_ = uVar128;
                    lVar126 = SUB168(auVar51 * auVar99,8);
                    uVar107 = *(uint *)(lVar119 + lVar126 * 4);
                    iVar118 = SUB164(auVar51 * auVar99,8);
                    if ((uVar107 == 0) ||
                       (auVar52._8_8_ = 0, auVar52._0_8_ = uVar107 * uVar114, auVar100._8_8_ = 0,
                       auVar100._0_8_ = uVar128, auVar53._8_8_ = 0,
                       auVar53._0_8_ =
                            ((uVar136 + iVar118) - SUB164(auVar52 * auVar100,8)) * uVar114,
                       auVar101._8_8_ = 0, auVar101._0_8_ = uVar128,
                       SUB164(auVar53 * auVar101,8) < uVar132)) goto LAB_00112e80;
                  }
                  Vector<RID>::push_back(local_68);
                  uVar136 = (uint)local_110 + 1;
                  local_110 = (ulong)uVar136;
                  if (iVar106 <= (int)uVar136) goto LAB_00111a27;
                }
              }
LAB_0011326d:
              uVar136 = (uint)local_110 + 1;
              local_110 = (ulong)uVar136;
              Vector<RID>::push_back(local_68);
            } while ((int)uVar136 < iVar106);
            goto LAB_00111a27;
          }
          if (*(int *)(param_2 + 0x2c) == 0) {
            lStack_b0 = 0;
            goto LAB_0011334a;
          }
          lVar109 = 0;
LAB_00112f70:
          uVar136 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar114 = CONCAT44(0,uVar136);
          lVar119 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          if (*plVar133 == 0) {
            uVar107 = StringName::get_empty_hash();
          }
          else {
            uVar107 = *(uint *)(*plVar133 + 0x20);
          }
          if (uVar107 == 0) {
            uVar107 = 1;
          }
          auVar43._8_8_ = 0;
          auVar43._0_8_ = (ulong)uVar107 * lVar119;
          auVar91._8_8_ = 0;
          auVar91._0_8_ = uVar114;
          lVar126 = SUB168(auVar43 * auVar91,8);
          uVar132 = SUB164(auVar43 * auVar91,8);
          uVar127 = *(uint *)(*(long *)(param_2 + 0x10) + lVar126 * 4);
          if (uVar127 != 0) {
            uVar131 = 0;
            do {
              if ((uVar107 == uVar127) &&
                 (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar126 * 8) + 0x10) == *plVar133)) {
                lStack_b0 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar132 * 8);
                goto LAB_00113049;
              }
              uVar131 = uVar131 + 1;
              auVar44._8_8_ = 0;
              auVar44._0_8_ = (ulong)(uVar132 + 1) * lVar119;
              auVar92._8_8_ = 0;
              auVar92._0_8_ = uVar114;
              lVar126 = SUB168(auVar44 * auVar92,8);
              uVar127 = *(uint *)(*(long *)(param_2 + 0x10) + lVar126 * 4);
              uVar132 = SUB164(auVar44 * auVar92,8);
            } while ((uVar127 != 0) &&
                    (auVar45._8_8_ = 0, auVar45._0_8_ = (ulong)uVar127 * lVar119, auVar93._8_8_ = 0,
                    auVar93._0_8_ = uVar114, auVar46._8_8_ = 0,
                    auVar46._0_8_ =
                         (ulong)((uVar136 + uVar132) - SUB164(auVar45 * auVar93,8)) * lVar119,
                    auVar94._8_8_ = 0, auVar94._0_8_ = uVar114,
                    uVar131 <= SUB164(auVar46 * auVar94,8)));
          }
          lStack_b0 = 0;
LAB_00113049:
          if (lVar109 == 0) goto LAB_0011334a;
          uVar114 = *(ulong *)(lVar109 + -8);
LAB_00113056:
          local_110 = uVar114 & 0xffffffff;
          lVar109 = local_60;
          if ((int)uVar114 < iVar106) goto LAB_00113063;
          goto LAB_001125b5;
        }
LAB_00112234:
        if ((*(long *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0x2c) != 0)) {
          uVar136 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar114 = CONCAT44(0,uVar136);
          lVar109 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          if (*plVar133 == 0) {
            uVar107 = StringName::get_empty_hash();
          }
          else {
            uVar107 = *(uint *)(*plVar133 + 0x20);
          }
          if (uVar107 == 0) {
            uVar107 = 1;
          }
          auVar28._8_8_ = 0;
          auVar28._0_8_ = (ulong)uVar107 * lVar109;
          auVar76._8_8_ = 0;
          auVar76._0_8_ = uVar114;
          lVar119 = SUB168(auVar28 * auVar76,8);
          uVar132 = SUB164(auVar28 * auVar76,8);
          uVar127 = *(uint *)(*(long *)(param_2 + 0x10) + lVar119 * 4);
          if (uVar127 != 0) {
            uVar131 = 0;
            while ((uVar127 != uVar107 ||
                   (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar119 * 8) + 0x10) != *plVar133))
                  ) {
              uVar131 = uVar131 + 1;
              auVar29._8_8_ = 0;
              auVar29._0_8_ = (ulong)(uVar132 + 1) * lVar109;
              auVar77._8_8_ = 0;
              auVar77._0_8_ = uVar114;
              lVar119 = SUB168(auVar29 * auVar77,8);
              uVar127 = *(uint *)(*(long *)(param_2 + 0x10) + lVar119 * 4);
              uVar132 = SUB164(auVar29 * auVar77,8);
              if ((uVar127 == 0) ||
                 (auVar30._8_8_ = 0, auVar30._0_8_ = (ulong)uVar127 * lVar109, auVar78._8_8_ = 0,
                 auVar78._0_8_ = uVar114, auVar31._8_8_ = 0,
                 auVar31._0_8_ =
                      (ulong)((uVar136 + uVar132) - SUB164(auVar30 * auVar78,8)) * lVar109,
                 auVar79._8_8_ = 0, auVar79._0_8_ = uVar114, SUB164(auVar31 * auVar79,8) < uVar131))
              goto LAB_00111a38;
            }
            lVar109 = *(long *)(*(long *)(param_2 + 8) + (ulong)uVar132 * 8);
            if (((lVar109 != 0) && (lVar119 = *(long *)(lVar109 + 0x20), lVar119 != 0)) &&
               (*(int *)(lVar109 + 0x44) != 0)) {
              lVar126 = *(long *)(lVar109 + 0x28);
              uVar136 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar109 + 0x40) * 4);
              uVar128 = CONCAT44(0,uVar136);
              uVar114 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar109 + 0x40) * 8
                                  );
              auVar32._8_8_ = 0;
              auVar32._0_8_ = uVar128;
              auVar80._8_8_ = 0;
              auVar80._0_8_ = uVar114;
              lVar109 = SUB168(auVar32 * auVar80,8);
              uVar107 = *(uint *)(lVar126 + lVar109 * 4);
              iVar118 = SUB164(auVar32 * auVar80,8);
              if (uVar107 != 0) {
                uVar132 = 0;
                lVar117 = lVar109;
                uVar127 = uVar107;
                iVar105 = iVar118;
                goto LAB_001123ea;
              }
            }
          }
        }
        goto LAB_00111a38;
      }
      goto joined_r0x00112ac5;
    }
    goto LAB_00111af2;
  }
  cVar103 = '\0';
LAB_00111af2:
  pauVar116 = (undefined1 (*) [16])0x0;
  local_58 = (undefined1 (*) [16])0x0;
  for (puVar110 = *(undefined8 **)(this + 0x50); puVar110 != (undefined8 *)0x0;
      puVar110 = (undefined8 *)*puVar110) {
    if (puVar110[3] != *(long *)(this + 0x30)) {
      if (pauVar116 == (undefined1 (*) [16])0x0) {
        pauVar116 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar116[1] = 0;
        *pauVar116 = (undefined1  [16])0x0;
        local_58 = pauVar116;
      }
      this_00 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
      StringName::operator=(this_00,(StringName *)(puVar110 + 2));
      lVar115 = *(long *)(*pauVar116 + 8);
      *(undefined1 (**) [16])(this_00 + 0x18) = pauVar116;
      *(undefined8 *)(this_00 + 8) = 0;
      *(long *)(this_00 + 0x10) = lVar115;
      if (lVar115 != 0) {
        *(StringName **)(lVar115 + 8) = this_00;
      }
      lVar115 = *(long *)*pauVar116;
      *(StringName **)(*pauVar116 + 8) = this_00;
      if (lVar115 == 0) {
        *(StringName **)*pauVar116 = this_00;
      }
      *(int *)pauVar116[1] = *(int *)pauVar116[1] + 1;
      if ((*(long *)(lVar104 + 0x110) != 0) && (*(int *)(lVar104 + 0x134) != 0)) {
        uVar136 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar104 + 0x130) * 4);
        uVar114 = CONCAT44(0,uVar136);
        lVar115 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar104 + 0x130) * 8);
        if (puVar110[2] == 0) {
          uVar107 = StringName::get_empty_hash();
        }
        else {
          uVar107 = *(uint *)(puVar110[2] + 0x20);
        }
        if (uVar107 == 0) {
          uVar107 = 1;
        }
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar107 * lVar115;
        auVar58._8_8_ = 0;
        auVar58._0_8_ = uVar114;
        lVar108 = SUB168(auVar10 * auVar58,8);
        uVar132 = SUB164(auVar10 * auVar58,8);
        uVar127 = *(uint *)(*(long *)(lVar104 + 0x118) + lVar108 * 4);
        if (uVar127 != 0) {
          uVar131 = 0;
          while ((uVar127 != uVar107 ||
                 (*(long *)(*(long *)(*(long *)(lVar104 + 0x110) + lVar108 * 8) + 0x10) !=
                  puVar110[2]))) {
            uVar131 = uVar131 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(uVar132 + 1) * lVar115;
            auVar59._8_8_ = 0;
            auVar59._0_8_ = uVar114;
            lVar108 = SUB168(auVar11 * auVar59,8);
            uVar127 = *(uint *)(*(long *)(lVar104 + 0x118) + lVar108 * 4);
            uVar132 = SUB164(auVar11 * auVar59,8);
            if ((uVar127 == 0) ||
               (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar127 * lVar115, auVar60._8_8_ = 0,
               auVar60._0_8_ = uVar114, auVar13._8_8_ = 0,
               auVar13._0_8_ = (ulong)((uVar136 + uVar132) - SUB164(auVar12 * auVar60,8)) * lVar115,
               auVar61._8_8_ = 0, auVar61._0_8_ = uVar114, SUB164(auVar13 * auVar61,8) < uVar131))
            goto LAB_00111c9f;
          }
          HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase
                    ((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *)
                     (*(long *)(*(long *)(lVar104 + 0x110) + (ulong)uVar132 * 8) + 0x18),this + 0x18
                    );
        }
      }
    }
LAB_00111c9f:
  }
  if (pauVar116 != (undefined1 (*) [16])0x0) {
    do {
      plVar133 = *(long **)*pauVar116;
      if (plVar133 == (long *)0x0) goto LAB_00111ff0;
      if ((*(long *)(this + 0x40) != 0) && (*(int *)(this + 100) != 0)) {
        uVar136 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4);
        uVar114 = CONCAT44(0,uVar136);
        lVar115 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x60) * 8);
        if (*plVar133 == 0) {
          uVar107 = StringName::get_empty_hash();
        }
        else {
          uVar107 = *(uint *)(*plVar133 + 0x20);
        }
        lVar108 = *(long *)(this + 0x48);
        if (uVar107 == 0) {
          uVar107 = 1;
        }
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)uVar107 * lVar115;
        auVar62._8_8_ = 0;
        auVar62._0_8_ = uVar114;
        lVar121 = SUB168(auVar14 * auVar62,8);
        uVar127 = *(uint *)(lVar108 + lVar121 * 4);
        uVar132 = SUB164(auVar14 * auVar62,8);
        if (uVar127 != 0) {
          uVar131 = 0;
LAB_00111d9a:
          uVar128 = (ulong)uVar132;
          if ((uVar127 != uVar107) ||
             (lVar4 = *(long *)(this + 0x40),
             *(long *)(*(long *)(lVar4 + lVar121 * 8) + 0x10) != *plVar133)) goto LAB_00111d50;
          uVar136 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x60) * 4);
          uVar125 = CONCAT44(0,uVar136);
          lVar115 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x60) * 8);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar132 + 1) * lVar115;
          auVar66._8_8_ = 0;
          auVar66._0_8_ = uVar125;
          uVar122 = SUB168(auVar18 * auVar66,8);
          puVar134 = (uint *)(lVar108 + uVar122 * 4);
          uVar107 = SUB164(auVar18 * auVar66,8);
          uVar114 = (ulong)uVar107;
          uVar129 = (ulong)*puVar134;
          if ((*puVar134 != 0) &&
             (auVar19._8_8_ = 0, auVar19._0_8_ = uVar129 * lVar115, auVar67._8_8_ = 0,
             auVar67._0_8_ = uVar125, auVar20._8_8_ = 0,
             auVar20._0_8_ = (ulong)((uVar136 + uVar107) - SUB164(auVar19 * auVar67,8)) * lVar115,
             auVar68._8_8_ = 0, auVar68._0_8_ = uVar125, SUB164(auVar20 * auVar68,8) != 0)) {
            while( true ) {
              puVar2 = (uint *)(lVar108 + uVar128 * 4);
              *puVar134 = *puVar2;
              puVar110 = (undefined8 *)(lVar4 + uVar122 * 8);
              *puVar2 = (uint)uVar129;
              puVar3 = (undefined8 *)(lVar4 + uVar128 * 8);
              uVar120 = *puVar110;
              *puVar110 = *puVar3;
              *puVar3 = uVar120;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = (ulong)((int)uVar114 + 1) * lVar115;
              auVar71._8_8_ = 0;
              auVar71._0_8_ = uVar125;
              uVar122 = SUB168(auVar23 * auVar71,8);
              puVar134 = (uint *)(lVar108 + uVar122 * 4);
              uVar129 = (ulong)*puVar134;
              uVar128 = uVar114;
              if ((*puVar134 == 0) ||
                 (auVar21._8_8_ = 0, auVar21._0_8_ = uVar129 * lVar115, auVar69._8_8_ = 0,
                 auVar69._0_8_ = uVar125, auVar22._8_8_ = 0,
                 auVar22._0_8_ =
                      (ulong)((SUB164(auVar23 * auVar71,8) + uVar136) - SUB164(auVar21 * auVar69,8))
                      * lVar115, auVar70._8_8_ = 0, auVar70._0_8_ = uVar125,
                 SUB164(auVar22 * auVar70,8) == 0)) break;
              uVar114 = uVar122 & 0xffffffff;
            }
          }
          plVar133 = (long *)(lVar4 + uVar128 * 8);
          *(undefined4 *)(lVar108 + uVar128 * 4) = 0;
          plVar124 = (long *)*plVar133;
          if (*(long **)(this + 0x50) == plVar124) {
            *(long *)(this + 0x50) = *plVar124;
            plVar124 = (long *)*plVar133;
          }
          if (*(long **)(this + 0x58) == plVar124) {
            *(long *)(this + 0x58) = plVar124[1];
            plVar124 = (long *)*plVar133;
          }
          if ((long *)plVar124[1] != (long *)0x0) {
            *(long *)plVar124[1] = *plVar124;
            plVar124 = (long *)*plVar133;
          }
          if (*plVar124 != 0) {
            *(long *)(*plVar124 + 8) = plVar124[1];
            plVar124 = (long *)*plVar133;
          }
          if ((StringName::configured != '\0') && (plVar124[2] != 0)) {
            StringName::unref();
          }
          Memory::free_static(plVar124,false);
          *(undefined8 *)(*(long *)(this + 0x40) + uVar128 * 8) = 0;
          *(int *)(this + 100) = *(int *)(this + 100) + -1;
        }
LAB_00111f21:
        plVar133 = *(long **)*pauVar116;
        if (plVar133 == (long *)0x0) goto LAB_00111ff0;
      }
      if ((undefined1 (*) [16])plVar133[3] == pauVar116) {
        lVar115 = plVar133[1];
        lVar108 = plVar133[2];
        *(long *)*pauVar116 = lVar115;
        if (plVar133 == *(long **)(*pauVar116 + 8)) {
          *(long *)(*pauVar116 + 8) = lVar108;
        }
        if (lVar108 != 0) {
          *(long *)(lVar108 + 8) = lVar115;
          lVar115 = plVar133[1];
        }
        if (lVar115 != 0) {
          *(long *)(lVar115 + 0x10) = lVar108;
        }
        if ((StringName::configured != '\0') && (*plVar133 != 0)) {
          StringName::unref();
        }
        Memory::free_static(plVar133,false);
        iVar106 = *(int *)pauVar116[1] + -1;
        *(int *)pauVar116[1] = iVar106;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0);
        iVar106 = *(int *)pauVar116[1];
      }
    } while (iVar106 != 0);
    Memory::free_static(pauVar116,false);
    local_58 = (undefined1 (*) [16])0x0;
  }
LAB_00111ff0:
  pvVar5 = *(void **)(this + 0x28);
  if ((pvVar5 != (void *)0x0) != (bool)cVar103) {
    plVar133 = *(long **)(lVar104 + 0x140);
    if (cVar103 == '\0') {
      if ((plVar133 != (long *)0x0) && (pvVar5 != (void *)0x0)) {
        if (*(long **)((long)pvVar5 + 0x18) == plVar133) {
          lVar115 = *(long *)((long)pvVar5 + 8);
          if (pvVar5 == (void *)*plVar133) {
            *plVar133 = lVar115;
          }
          lVar108 = *(long *)((long)pvVar5 + 0x10);
          if (pvVar5 == (void *)plVar133[1]) {
            plVar133[1] = lVar108;
          }
          if (lVar108 != 0) {
            *(long *)(lVar108 + 8) = lVar115;
            lVar115 = *(long *)((long)pvVar5 + 8);
          }
          if (lVar115 != 0) {
            *(long *)(lVar115 + 0x10) = lVar108;
          }
          Memory::free_static(pvVar5,false);
          *(int *)(plVar133 + 2) = (int)plVar133[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        if (*(int *)((long)*(void **)(lVar104 + 0x140) + 0x10) == 0) {
          Memory::free_static(*(void **)(lVar104 + 0x140),false);
          *(undefined8 *)(lVar104 + 0x140) = 0;
        }
      }
      *(undefined8 *)(this + 0x28) = 0;
    }
    else {
      if (plVar133 == (long *)0x0) {
        pauVar116 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(lVar104 + 0x140) = pauVar116;
        *(undefined4 *)pauVar116[1] = 0;
        *pauVar116 = (undefined1  [16])0x0;
      }
      puVar110 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
      *puVar110 = 0;
      uVar120 = *(undefined8 *)(this + 0x18);
      puVar110[1] = 0;
      *puVar110 = uVar120;
      plVar133 = *(long **)(lVar104 + 0x140);
      lVar115 = plVar133[1];
      puVar110[2] = lVar115;
      puVar110[3] = plVar133;
      if (lVar115 != 0) {
        *(undefined8 **)(lVar115 + 8) = puVar110;
      }
      plVar133[1] = (long)puVar110;
      if (*plVar133 == 0) {
        *plVar133 = (long)puVar110;
      }
      *(int *)(plVar133 + 2) = (int)plVar133[2] + 1;
      *(undefined8 **)(this + 0x28) = puVar110;
    }
  }
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while( true ) {
    LOCK();
    lVar126 = *plVar133;
    bVar137 = lVar119 == lVar126;
    if (bVar137) {
      *plVar133 = lVar119 + 1;
      lVar126 = lVar119;
    }
    UNLOCK();
    if (bVar137) break;
LAB_00112b91:
    lVar119 = *plVar133;
    if (lVar119 == 0) goto LAB_00112c6c;
  }
  if (lVar126 != -1) {
    local_80 = *(long *)(lVar109 + 0x10);
  }
LAB_001118ff:
  operator+((char *)&local_78,(String *)"Shader uses global parameter texture \'");
  String::operator+((String *)&local_58,(String *)&local_78);
  uVar120 = 0x375;
LAB_00111938:
  _err_print_error("update_textures","servers/rendering/renderer_rd/storage_rd/material_storage.cpp"
                   ,uVar120,&local_58);
  pauVar116 = local_58;
  if (local_58 != (undefined1 (*) [16])0x0) {
    LOCK();
    pauVar1 = local_58 + -1;
    *(long *)*pauVar1 = *(long *)*pauVar1 + -1;
    UNLOCK();
    if (*(long *)*pauVar1 == 0) {
      local_58 = (undefined1 (*) [16])0x0;
      Memory::free_static(pauVar116 + -1,false);
    }
  }
  lVar109 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar133 = (long *)(local_78 + -0x10);
    *plVar133 = *plVar133 + -1;
    UNLOCK();
    if (*plVar133 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar109 + -0x10),false);
    }
  }
  lVar109 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar133 = (long *)(local_80 + -0x10);
    *plVar133 = *plVar133 + -1;
    UNLOCK();
    if (*plVar133 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar109 + -0x10),false);
    }
  }
  lVar109 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar133 = (long *)(local_70 + -0x10);
    *plVar133 = *plVar133 + -1;
    UNLOCK();
    if (*plVar133 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar109 + -0x10),false);
    }
  }
LAB_00111a27:
  lVar109 = local_60;
  if (local_60 == 0) {
LAB_00111a38:
    lVar109 = *(long *)(param_3 + 8);
    if (lVar109 != 0) {
      lVar126 = *(long *)(lVar109 + -8);
      if (lVar121 < lVar126) {
        lVar109 = lVar109 + lVar4;
        switch(*(undefined4 *)(lVar109 + 8)) {
        case 0x14:
        case 0x15:
        case 0x16:
          switch(*(undefined4 *)(lVar109 + 0xc)) {
          case 4:
            FUN_00112a51();
            return;
          case 5:
            FUN_00112a51();
            return;
          default:
            FUN_00112a51();
            return;
          case 0xb:
            FUN_00112a51();
            return;
          case 0xd:
            FUN_00112a51();
            return;
          case 0xe:
            FUN_00112a51();
            return;
          }
        case 0x17:
        case 0x18:
        case 0x19:
          FUN_00112a51();
          return;
        case 0x1a:
        case 0x1b:
        case 0x1c:
          goto switchD_00111a7c_caseD_1a;
        case 0x1d:
          if (*(int *)(lVar109 + 0xc) == 0xb) {
            FUN_00112a51();
            return;
          }
          FUN_00112a51();
          return;
        case 0x1e:
          FUN_00112a51();
          return;
        default:
          FUN_00112a51();
          return;
        }
      }
      goto LAB_0011289e;
    }
LAB_00112d68:
    lVar126 = 0;
LAB_0011289e:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar115,lVar126,"p_index","size()","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar102 = (code *)invalidInstructionException();
    (*pcVar102)();
  }
LAB_001125b5:
  if (param_5) {
    lVar119 = *(long *)(param_3 + 8);
    if (lVar119 == 0) goto LAB_00112d68;
    lVar126 = *(long *)(lVar119 + -8);
    if (lVar126 <= lVar121) goto LAB_0011289e;
    cVar130 = *(char *)(lVar119 + 0x10 + lVar4);
  }
  else {
    cVar130 = '\0';
  }
  if (*(long *)(lVar109 + -8) < 1) {
LAB_00111ac1:
    LOCK();
    plVar133 = (long *)(local_60 + -0x10);
    *plVar133 = *plVar133 + -1;
    UNLOCK();
    if (*plVar133 == 0) {
      Memory::free_static((void *)(local_60 + -0x10),false);
    }
  }
  else {
    lVar119 = 0;
    local_118 = local_e0;
    lVar115 = 0;
    lVar117 = local_d0;
    do {
      lVar135 = lVar115;
      lVar111 = RendererRD::TextureStorage::get_singleton();
      lVar126 = *(long *)(lVar109 + -8);
      lVar115 = lVar135;
      if (lVar126 <= lVar135) goto LAB_0011289e;
      uVar114 = *(ulong *)(lVar109 + lVar135 * 8);
      local_d0 = lVar117;
      if ((uVar114 != 0) && ((uint)uVar114 < *(uint *)(lVar111 + 0x124))) {
        lVar111 = ((uVar114 & 0xffffffff) % (ulong)*(uint *)(lVar111 + 0x120)) * 0x118 +
                  *(long *)(*(long *)(lVar111 + 0x110) +
                           ((uVar114 & 0xffffffff) / (ulong)*(uint *)(lVar111 + 0x120)) * 8);
        if (*(int *)(lVar111 + 0x110) == (int)(uVar114 >> 0x20)) {
          if ((cVar130 == '\0') || (lVar119 = *(long *)(lVar111 + 0x18), lVar119 == 0)) {
            lVar119 = *(long *)(lVar111 + 0x10);
          }
          if ((*(code **)(lVar111 + 0xd8) != (code *)0x0) && (param_6)) {
            (**(code **)(lVar111 + 0xd8))(*(undefined8 *)(lVar111 + 0xe0));
          }
          if (*(code **)(lVar111 + 0xe8) == (code *)0x0) {
LAB_00112836:
            if (*(long *)(lVar111 + 0xf8) != 0) {
              lVar112 = *(long *)(param_3 + 8);
              if (lVar112 == 0) goto LAB_001128c8;
              lVar126 = *(long *)(lVar112 + -8);
              lVar115 = lVar121;
              if (lVar126 <= lVar121) goto LAB_0011289e;
LAB_00112729:
              local_e8 = *(int *)(lVar112 + 0xc + lVar4) + -6;
              local_118 = lVar111;
            }
          }
          else {
            lVar112 = *(long *)(param_3 + 8);
            if (lVar112 == 0) {
LAB_001128c8:
              lVar126 = 0;
              lVar115 = lVar121;
              goto LAB_0011289e;
            }
            lVar126 = *(long *)(lVar112 + -8);
            lVar115 = lVar121;
            if (lVar126 <= lVar121) goto LAB_0011289e;
            iVar106 = *(int *)(lVar112 + 0xc + lVar4);
            if ((iVar106 == 4) || (local_d0 = lVar111, iVar106 == 5)) {
              (**(code **)(lVar111 + 0xe8))(*(undefined8 *)(lVar111 + 0xf0));
              goto LAB_00112836;
            }
            local_d0 = lVar117;
            if (*(long *)(lVar111 + 0xf8) != 0) goto LAB_00112729;
          }
          lVar115 = *(long *)(lVar111 + 0x78);
          if (lVar115 != 0) {
            *(undefined1 *)(lVar115 + 0x138) = 1;
            if (*(long *)(this + 0x10) == 0) {
              lVar126 = 1;
            }
            else {
              lVar126 = *(long *)(*(long *)(this + 0x10) + -8) + 1;
            }
            iVar106 = CowData<RendererRD::TextureStorage::RenderTarget*>::resize<false>
                                ((CowData<RendererRD::TextureStorage::RenderTarget*> *)(this + 0x10)
                                 ,lVar126);
            if (iVar106 == 0) {
              if (*(long *)(this + 0x10) == 0) {
                lVar117 = -1;
                lVar126 = 0;
              }
              else {
                lVar126 = *(long *)(*(long *)(this + 0x10) + -8);
                lVar117 = lVar126 + -1;
                if (-1 < lVar117) {
                  CowData<RendererRD::TextureStorage::RenderTarget*>::_copy_on_write
                            ((CowData<RendererRD::TextureStorage::RenderTarget*> *)(this + 0x10));
                  *(long *)(*(long *)(this + 0x10) + lVar117 * 8) = lVar115;
                  goto LAB_001127bf;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar117,lVar126,"p_index","size()",
                         "",false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true");
            }
          }
        }
        else if (*(int *)(lVar111 + 0x110) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
LAB_001127bf:
      if (lVar119 == 0) {
        lVar119 = *(long *)(lVar108 + 0x18);
      }
      if ((((local_118 != 0) && (local_d0 != 0)) && (*(long *)(local_d0 + 0x90) != 0)) &&
         (1 < *(uint *)(*(long *)(local_d0 + 0x90) + -8))) {
        (**(code **)(local_118 + 0xf8))(*(undefined8 *)(local_118 + 0x100),local_d0 + 0x90,local_e8)
        ;
      }
      *(long *)(param_4 + lVar135 * 8 + (long)local_e4 * 8) = lVar119;
      lVar115 = lVar135 + 1;
      lVar117 = local_d0;
    } while (lVar135 + 1 < *(long *)(lVar109 + -8));
    local_e4 = local_e4 + 1 + (int)lVar135;
    local_e0 = local_118;
LAB_00111ab4:
    if (local_60 != 0) goto LAB_00111ac1;
  }
  lVar115 = *(long *)(param_3 + 8);
joined_r0x00112ac5:
  lVar121 = lVar121 + 1;
  if (lVar115 == 0) goto LAB_00111af2;
  goto LAB_001116f1;
LAB_00112c6c:
  local_80 = 0;
  goto LAB_001118ff;
LAB_00112a09:
  if ((uVar107 != uVar127) ||
     (*(long *)(*(long *)(*(long *)(this + 0x40) + lVar119 * 8) + 0x10) != *plVar133)) {
    uVar131 = uVar131 + 1;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = (ulong)(uVar132 + 1) * lVar126;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = uVar114;
    lVar119 = SUB168(auVar40 * auVar88,8);
    uVar127 = *(uint *)(*(long *)(this + 0x48) + lVar119 * 4);
    uVar132 = SUB164(auVar40 * auVar88,8);
    if ((uVar127 == 0) ||
       (auVar41._8_8_ = 0, auVar41._0_8_ = (ulong)uVar127 * lVar126, auVar89._8_8_ = 0,
       auVar89._0_8_ = uVar114, auVar42._8_8_ = 0,
       auVar42._0_8_ = (ulong)((uVar136 + uVar132) - SUB164(auVar41 * auVar89,8)) * lVar126,
       auVar90._8_8_ = 0, auVar90._0_8_ = uVar114, SUB164(auVar42 * auVar90,8) < uVar131))
    goto LAB_00112bd0;
    goto LAB_00112a09;
  }
  lVar119 = *(long *)(*(long *)(this + 0x40) + (ulong)uVar132 * 8);
  if (lVar119 != 0) {
    *(undefined8 *)(lVar119 + 0x18) = *(undefined8 *)(this + 0x30);
    goto LAB_00112c03;
  }
LAB_00112bd0:
  HashMap<StringName,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_long>>>
  ::insert((StringName *)&local_58,(ulong *)(this + 0x38),SUB81(plVar133,0));
  HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert((StringName *)&local_58);
LAB_00112c03:
  pVVar113 = (Variant *)(lVar109 + 0x48);
  if (*(int *)(lVar109 + 0x60) != 0) {
    pVVar113 = (Variant *)(lVar109 + 0x60);
  }
  Variant::operator_cast_to_RID(pVVar113);
  Vector<RID>::push_back(local_68);
  goto LAB_00111a27;
LAB_00112170:
  uVar131 = uVar131 + 1;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = (ulong)(uVar132 + 1) * lVar109;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = uVar114;
  lVar119 = SUB168(auVar25 * auVar73,8);
  uVar127 = *(uint *)(*(long *)(param_1 + 0x10) + lVar119 * 4);
  uVar132 = SUB164(auVar25 * auVar73,8);
  if ((uVar127 == 0) ||
     (auVar26._8_8_ = 0, auVar26._0_8_ = (ulong)uVar127 * lVar109, auVar74._8_8_ = 0,
     auVar74._0_8_ = uVar114, auVar27._8_8_ = 0,
     auVar27._0_8_ = (ulong)((uVar136 + uVar132) - SUB164(auVar26 * auVar74,8)) * lVar109,
     auVar75._8_8_ = 0, auVar75._0_8_ = uVar114, SUB164(auVar27 * auVar75,8) < uVar131))
  goto LAB_00112228;
  goto LAB_001121b6;
  while( true ) {
    uVar132 = uVar132 + 1;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = (iVar105 + 1) * uVar114;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = uVar128;
    lVar117 = SUB168(auVar33 * auVar81,8);
    uVar127 = *(uint *)(lVar126 + lVar117 * 4);
    iVar105 = SUB164(auVar33 * auVar81,8);
    if ((uVar127 == 0) ||
       (auVar34._8_8_ = 0, auVar34._0_8_ = uVar127 * uVar114, auVar82._8_8_ = 0,
       auVar82._0_8_ = uVar128, auVar35._8_8_ = 0,
       auVar35._0_8_ = ((uVar136 + iVar105) - SUB164(auVar34 * auVar82,8)) * uVar114,
       auVar83._8_8_ = 0, auVar83._0_8_ = uVar128, SUB164(auVar35 * auVar83,8) < uVar132)) break;
LAB_001123ea:
    if ((uVar127 == 1) && (*(int *)(*(long *)(lVar119 + lVar117 * 8) + 0x10) == 0)) {
      uVar127 = 0;
      while ((uVar107 != 1 || (*(int *)(*(long *)(lVar119 + lVar109 * 8) + 0x10) != 0))) {
        uVar127 = uVar127 + 1;
        auVar36._8_8_ = 0;
        auVar36._0_8_ = (iVar118 + 1) * uVar114;
        auVar84._8_8_ = 0;
        auVar84._0_8_ = uVar128;
        lVar109 = SUB168(auVar36 * auVar84,8);
        uVar107 = *(uint *)(lVar126 + lVar109 * 4);
        iVar118 = SUB164(auVar36 * auVar84,8);
        if ((uVar107 == 0) ||
           (auVar37._8_8_ = 0, auVar37._0_8_ = uVar107 * uVar114, auVar85._8_8_ = 0,
           auVar85._0_8_ = uVar128, auVar38._8_8_ = 0,
           auVar38._0_8_ = ((uVar136 + iVar118) - SUB164(auVar37 * auVar85,8)) * uVar114,
           auVar86._8_8_ = 0, auVar86._0_8_ = uVar128, SUB164(auVar38 * auVar86,8) < uVar127)) {
LAB_00112e80:
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar102 = (code *)invalidInstructionException();
          (*pcVar102)();
        }
      }
      Vector<RID>::push_back(local_68);
      goto LAB_00111a27;
    }
  }
  goto LAB_00111a38;
switchD_00111a7c_caseD_1a:
  uVar120 = *(undefined8 *)(lVar108 + 0x70);
  if (((local_e0 != 0) && (local_d0 != 0)) &&
     ((*(long *)(local_d0 + 0x90) != 0 && (1 < *(uint *)(*(long *)(local_d0 + 0x90) + -8))))) {
    (**(code **)(local_e0 + 0xf8))(*(undefined8 *)(local_e0 + 0x100),local_d0 + 0x90,local_e8);
  }
  if (iVar106 < 1) {
    *(undefined8 *)(param_4 + (long)local_e4 * 8) = uVar120;
    local_e4 = local_e4 + 1;
    lVar115 = *(long *)(param_3 + 8);
    goto joined_r0x00112ac5;
  }
  puVar110 = (undefined8 *)(param_4 + (long)local_e4 * 8);
  do {
    *puVar110 = uVar120;
    puVar110 = puVar110 + 1;
  } while (puVar110 != (undefined8 *)(param_4 + ((long)iVar106 + (long)local_e4) * 8));
  local_e4 = local_e4 + iVar106;
  goto LAB_00111ab4;
LAB_00111d50:
  uVar131 = uVar131 + 1;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (ulong)(uVar132 + 1) * lVar115;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = uVar114;
  lVar121 = SUB168(auVar15 * auVar63,8);
  uVar127 = *(uint *)(lVar108 + lVar121 * 4);
  uVar132 = SUB164(auVar15 * auVar63,8);
  if ((uVar127 == 0) ||
     (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar127 * lVar115, auVar64._8_8_ = 0,
     auVar64._0_8_ = uVar114, auVar17._8_8_ = 0,
     auVar17._0_8_ = (ulong)((uVar136 + uVar132) - SUB164(auVar16 * auVar64,8)) * lVar115,
     auVar65._8_8_ = 0, auVar65._0_8_ = uVar114, SUB164(auVar17 * auVar65,8) < uVar131))
  goto LAB_00111f21;
  goto LAB_00111d9a;
}



void FUN_00112a51(void)

{
  uint *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  code *pcVar101;
  int iVar102;
  int iVar103;
  uint uVar104;
  StringName *this;
  undefined8 *puVar105;
  long lVar106;
  long lVar107;
  Variant *pVVar108;
  ulong uVar109;
  long lVar110;
  undefined1 (*pauVar111) [16];
  long lVar112;
  int iVar113;
  long lVar114;
  undefined8 uVar115;
  long lVar116;
  long lVar117;
  ulong uVar118;
  int iVar119;
  long *plVar120;
  long unaff_RBX;
  ulong uVar121;
  undefined8 unaff_RBP;
  long lVar122;
  uint uVar123;
  ulong uVar124;
  ulong uVar125;
  char cVar126;
  uint uVar127;
  uint uVar128;
  long *plVar129;
  uint *puVar130;
  long lVar131;
  uint uVar132;
  long in_FS_OFFSET;
  bool bVar133;
  long in_stack_00000010;
  long in_stack_00000018;
  int in_stack_00000020;
  uint uStack0000000000000028;
  CowData<RendererRD::TextureStorage::RenderTarget*> *in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  int iStack0000000000000050;
  int iStack0000000000000054;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  char in_stack_00000080;
  long lStack0000000000000088;
  undefined8 in_stack_00000098;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d8;
  char *in_stack_000000e0;
  size_t in_stack_000000e8;
  long in_stack_000000f8;
  
  do {
    if ((((in_stack_00000058 != 0) && (in_stack_00000068 != 0)) &&
        (*(long *)(in_stack_00000068 + 0x90) != 0)) &&
       (1 < *(uint *)(*(long *)(in_stack_00000068 + 0x90) + -8))) {
      (**(code **)(in_stack_00000058 + 0xf8))
                (*(undefined8 *)(in_stack_00000058 + 0x100),in_stack_00000068 + 0x90,
                 iStack0000000000000050);
    }
    if (0 < in_stack_00000020) {
      puVar105 = (undefined8 *)(in_stack_00000060 + (long)iStack0000000000000054 * 8);
      do {
        *puVar105 = unaff_RBP;
        puVar105 = puVar105 + 1;
      } while (puVar105 !=
               (undefined8 *)
               (in_stack_00000060 + ((long)in_stack_00000020 + (long)iStack0000000000000054) * 8));
      iStack0000000000000054 = iStack0000000000000054 + in_stack_00000020;
      goto LAB_00111ab4;
    }
    *(undefined8 *)(in_stack_00000060 + (long)iStack0000000000000054 * 8) = unaff_RBP;
    iStack0000000000000054 = iStack0000000000000054 + 1;
    lVar110 = *(long *)(in_stack_00000018 + 8);
    _in_stack_00000020 = in_stack_00000058;
joined_r0x00112ac5:
    do {
      if ((lVar110 == 0) || (unaff_RBX = unaff_RBX + 1, *(long *)(lVar110 + -8) <= unaff_RBX)) {
        pauVar111 = (undefined1 (*) [16])0x0;
        in_stack_000000e0 = (char *)0x0;
        puVar105 = *(undefined8 **)(in_stack_00000010 + 0x50);
        goto joined_r0x00111b0d;
      }
      in_stack_000000d8 = 0;
      lVar116 = unaff_RBX * 0x28;
      plVar129 = (long *)(lVar110 + lVar116);
      iVar102 = (int)plVar129[4];
    } while (*(int *)((long)plVar129 + 0xc) - 0xfU < 3);
    cVar126 = *(char *)((long)plVar129 + 0x1c);
    lVar110 = unaff_RBX;
    in_stack_00000058 = _in_stack_00000020;
    if (cVar126 != '\0') {
      in_stack_00000080 = cVar126;
      if ((*(long *)(in_stack_00000048 + 0x110) != 0) && (*(int *)(in_stack_00000048 + 0x134) != 0))
      {
        uVar132 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_stack_00000048 + 0x130) * 4
                           );
        uVar109 = CONCAT44(0,uVar132);
        lVar117 = *(long *)(hash_table_size_primes_inv +
                           (ulong)*(uint *)(in_stack_00000048 + 0x130) * 8);
        if (*plVar129 == 0) {
          uVar104 = StringName::get_empty_hash();
        }
        else {
          uVar104 = *(uint *)(*plVar129 + 0x20);
        }
        if (uVar104 == 0) {
          uVar104 = 1;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)uVar104 * lVar117;
        auVar53._8_8_ = 0;
        auVar53._0_8_ = uVar109;
        lVar114 = SUB168(auVar5 * auVar53,8);
        uVar128 = SUB164(auVar5 * auVar53,8);
        uVar123 = *(uint *)(*(long *)(in_stack_00000048 + 0x118) + lVar114 * 4);
        if (uVar123 != 0) {
          uVar127 = 0;
          do {
            if (uVar104 == uVar123) {
              lVar114 = *(long *)(*(long *)(*(long *)(in_stack_00000048 + 0x110) + lVar114 * 8) +
                                 0x10);
              if (lVar114 == *plVar129) {
                lVar117 = *(long *)(*(long *)(in_stack_00000048 + 0x110) + (ulong)uVar128 * 8);
                if (-1 < *(int *)(lVar117 + 0x78)) {
                  in_stack_000000c8 = 0;
                  in_stack_000000e8 = 0x33;
                  in_stack_000000e0 = "\', but it changed type and is no longer a texture!.";
                  String::parse_latin1((StrRange *)&stack0x000000c8);
                  lVar117 = *plVar129;
                  if (lVar117 == 0) goto LAB_00112c6c;
                  pcVar3 = *(char **)(lVar117 + 8);
                  in_stack_000000b8 = 0;
                  if (pcVar3 == (char *)0x0) {
                    plVar129 = (long *)(*(long *)(lVar117 + 0x10) + -0x10);
                    if (*(long *)(lVar117 + 0x10) == 0) goto LAB_00112c6c;
                    goto LAB_00112b91;
                  }
                  in_stack_000000e8 = strlen(pcVar3);
                  in_stack_000000e0 = pcVar3;
                  String::parse_latin1((StrRange *)&stack0x000000b8);
                  goto LAB_001118ff;
                }
                if ((*(long *)(in_stack_00000010 + 0x40) == 0) ||
                   (*(int *)(in_stack_00000010 + 100) == 0)) goto LAB_00112bd0;
                uVar132 = *(uint *)(hash_table_size_primes +
                                   (ulong)*(uint *)(in_stack_00000010 + 0x60) * 4);
                uVar109 = CONCAT44(0,uVar132);
                lVar122 = *(long *)(hash_table_size_primes_inv +
                                   (ulong)*(uint *)(in_stack_00000010 + 0x60) * 8);
                if (lVar114 == 0) {
                  uVar104 = StringName::get_empty_hash();
                }
                else {
                  uVar104 = *(uint *)(lVar114 + 0x20);
                }
                if (uVar104 == 0) {
                  uVar104 = 1;
                }
                auVar38._8_8_ = 0;
                auVar38._0_8_ = (ulong)uVar104 * lVar122;
                auVar86._8_8_ = 0;
                auVar86._0_8_ = uVar109;
                lVar114 = SUB168(auVar38 * auVar86,8);
                uVar128 = SUB164(auVar38 * auVar86,8);
                uVar123 = *(uint *)(*(long *)(in_stack_00000010 + 0x48) + lVar114 * 4);
                if (uVar123 == 0) goto LAB_00112bd0;
                uVar127 = 0;
                goto LAB_00112a09;
              }
            }
            uVar127 = uVar127 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(uVar128 + 1) * lVar117;
            auVar54._8_8_ = 0;
            auVar54._0_8_ = uVar109;
            lVar114 = SUB168(auVar6 * auVar54,8);
            uVar123 = *(uint *)(*(long *)(in_stack_00000048 + 0x118) + lVar114 * 4);
            uVar128 = SUB164(auVar6 * auVar54,8);
          } while ((uVar123 != 0) &&
                  (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar123 * lVar117, auVar55._8_8_ = 0,
                  auVar55._0_8_ = uVar109, auVar8._8_8_ = 0,
                  auVar8._0_8_ = (ulong)((uVar132 + uVar128) - SUB164(auVar7 * auVar55,8)) * lVar117
                  , auVar56._8_8_ = 0, auVar56._0_8_ = uVar109,
                  uVar127 <= SUB164(auVar8 * auVar56,8)));
        }
      }
      in_stack_000000c8 = 0;
      in_stack_000000e8 = 0x49;
      in_stack_000000e0 =
           "\', but it was removed at some point. Material will not display correctly.";
      String::parse_latin1((StrRange *)&stack0x000000c8);
      lVar117 = *plVar129;
      if (lVar117 == 0) {
LAB_00112ebc:
        in_stack_000000b8 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar117 + 8);
        in_stack_000000b8 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar129 = (long *)(*(long *)(lVar117 + 0x10) + -0x10);
          if (*(long *)(lVar117 + 0x10) == 0) goto LAB_00112ebc;
          do {
            lVar114 = *plVar129;
            if (lVar114 == 0) goto LAB_00112ebc;
            LOCK();
            lVar122 = *plVar129;
            bVar133 = lVar114 == lVar122;
            if (bVar133) {
              *plVar129 = lVar114 + 1;
              lVar122 = lVar114;
            }
            UNLOCK();
          } while (!bVar133);
          if (lVar122 != -1) {
            in_stack_000000b8 = *(long *)(lVar117 + 0x10);
          }
        }
        else {
          in_stack_000000e8 = strlen(pcVar3);
          in_stack_000000e0 = pcVar3;
          String::parse_latin1((StrRange *)&stack0x000000b8);
        }
      }
      operator+((char *)&stack0x000000c0,(String *)"Shader uses global parameter texture \'");
      String::operator+((String *)&stack0x000000e0,(String *)&stack0x000000c0);
      uVar115 = 900;
      goto LAB_00111938;
    }
    if ((*(long *)(in_stack_00000070 + 8) != 0) && (*(int *)(in_stack_00000070 + 0x2c) != 0)) {
      uVar132 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_stack_00000070 + 0x28) * 4);
      uVar109 = CONCAT44(0,uVar132);
      lVar117 = *(long *)(hash_table_size_primes_inv +
                         (ulong)*(uint *)(in_stack_00000070 + 0x28) * 8);
      if (*plVar129 == 0) {
        uVar104 = StringName::get_empty_hash();
      }
      else {
        uVar104 = *(uint *)(*plVar129 + 0x20);
      }
      if (uVar104 == 0) {
        uVar104 = 1;
      }
      auVar23._8_8_ = 0;
      auVar23._0_8_ = (ulong)uVar104 * lVar117;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = uVar109;
      lVar114 = SUB168(auVar23 * auVar71,8);
      uVar128 = SUB164(auVar23 * auVar71,8);
      uVar123 = *(uint *)(*(long *)(in_stack_00000070 + 0x10) + lVar114 * 4);
      if (uVar123 != 0) {
        uVar127 = 0;
LAB_001121b6:
        if ((uVar123 != uVar104) ||
           (*(long *)(*(long *)(*(long *)(in_stack_00000070 + 8) + lVar114 * 8) + 0x10) != *plVar129
           )) goto LAB_00112170;
        lVar117 = *(long *)(*(long *)(in_stack_00000070 + 8) + (ulong)uVar128 * 8);
        if (lVar117 != 0) {
          if (*(int *)(lVar117 + 0x18) < 0x1c) {
            Variant::operator_cast_to_RID((Variant *)(lVar117 + 0x18));
            Vector<RID>::push_back((Vector<RID> *)&stack0x000000d0);
            lVar117 = in_stack_000000d8;
            if (0 < iVar102) goto LAB_0011259a;
LAB_00112dad:
            lVar117 = in_stack_000000d8;
            if (in_stack_000000d8 == 0) goto LAB_00112234;
            goto LAB_001125b5;
          }
          Variant::operator_cast_to_Array((Variant *)&stack0x000000e0);
          iVar113 = (int)(Variant *)&stack0x000000e0;
          if (iVar102 < 1) {
            iVar103 = Array::size();
            if (0 < iVar103) {
              pVVar108 = (Variant *)Array::operator[](iVar113);
              Variant::operator_cast_to_RID(pVVar108);
              Vector<RID>::push_back((Vector<RID> *)&stack0x000000d0);
              Array::~Array((Array *)&stack0x000000e0);
              goto LAB_00112dad;
            }
            Array::~Array((Array *)&stack0x000000e0);
            goto LAB_00112234;
          }
          iVar103 = Array::size();
          if (iVar102 < iVar103) {
            iVar103 = iVar102;
          }
          if (0 < iVar103) {
            iVar119 = 0;
            do {
              iVar119 = iVar119 + 1;
              pVVar108 = (Variant *)Array::operator[](iVar113);
              Variant::operator_cast_to_RID(pVVar108);
              Vector<RID>::push_back((Vector<RID> *)&stack0x000000d0);
              lVar117 = in_stack_000000d8;
            } while (iVar119 != iVar103);
            Array::~Array((Array *)&stack0x000000e0);
LAB_0011259a:
            if (lVar117 == 0) goto LAB_00112f36;
            uVar109 = *(ulong *)(lVar117 + -8);
            if ((long)uVar109 < (long)iVar102) {
              lStack0000000000000088 = *(long *)(in_stack_00000078 + 8);
              if (lStack0000000000000088 != 0) {
                if (*(int *)(in_stack_00000078 + 0x2c) == 0) {
                  lStack0000000000000088 = 0;
                  goto LAB_00113056;
                }
                goto LAB_00112f70;
              }
              goto LAB_00113056;
            }
            goto LAB_001125b5;
          }
          Array::~Array((Array *)&stack0x000000e0);
          goto LAB_00112f36;
        }
      }
    }
LAB_00112228:
    if (0 < iVar102) {
LAB_00112f36:
      lStack0000000000000088 = *(long *)(in_stack_00000078 + 8);
      if (lStack0000000000000088 == 0) {
LAB_0011334a:
        _uStack0000000000000028 = 0;
LAB_00113063:
        do {
          if (lStack0000000000000088 != 0) {
            while( true ) {
              lVar117 = *(long *)(lStack0000000000000088 + 0x20);
              if ((lVar117 == 0) || (*(int *)(lStack0000000000000088 + 0x44) == 0)) break;
              uVar132 = *(uint *)(hash_table_size_primes +
                                 (ulong)*(uint *)(lStack0000000000000088 + 0x40) * 4);
              uVar124 = CONCAT44(0,uVar132);
              uVar109 = *(ulong *)(hash_table_size_primes_inv +
                                  (ulong)*(uint *)(lStack0000000000000088 + 0x40) * 8);
              uVar104 = (uStack0000000000000028 >> 0x10 ^ uStack0000000000000028) * -0x7a143595;
              uVar104 = (uVar104 ^ uVar104 >> 0xd) * -0x3d4d51cb;
              uVar123 = uVar104 ^ uVar104 >> 0x10;
              if (uVar104 == uVar104 >> 0x10) {
                uVar123 = 1;
                uVar118 = uVar109;
              }
              else {
                uVar118 = uVar123 * uVar109;
              }
              auVar46._8_8_ = 0;
              auVar46._0_8_ = uVar124;
              auVar94._8_8_ = 0;
              auVar94._0_8_ = uVar118;
              lVar122 = SUB168(auVar46 * auVar94,8);
              lVar114 = *(long *)(lStack0000000000000088 + 0x28);
              uVar104 = *(uint *)(lVar114 + lVar122 * 4);
              iVar113 = SUB164(auVar46 * auVar94,8);
              if (uVar104 == 0) break;
              uVar118 = (ulong)uVar104;
              uVar128 = 0;
              lVar112 = lVar122;
              iVar103 = iVar113;
              while (((uint)uVar118 != uVar123 ||
                     (*(uint *)(*(long *)(lVar117 + lVar112 * 8) + 0x10) != uStack0000000000000028))
                    ) {
                uVar128 = uVar128 + 1;
                auVar47._8_8_ = 0;
                auVar47._0_8_ = (iVar103 + 1) * uVar109;
                auVar95._8_8_ = 0;
                auVar95._0_8_ = uVar124;
                lVar112 = SUB168(auVar47 * auVar95,8);
                uVar127 = *(uint *)(lVar114 + lVar112 * 4);
                uVar118 = (ulong)uVar127;
                iVar103 = SUB164(auVar47 * auVar95,8);
                if ((uVar127 == 0) ||
                   (auVar48._8_8_ = 0, auVar48._0_8_ = uVar118 * uVar109, auVar96._8_8_ = 0,
                   auVar96._0_8_ = uVar124, auVar49._8_8_ = 0,
                   auVar49._0_8_ = ((uVar132 + iVar103) - SUB164(auVar48 * auVar96,8)) * uVar109,
                   auVar97._8_8_ = 0, auVar97._0_8_ = uVar124, SUB164(auVar49 * auVar97,8) < uVar128
                   )) goto LAB_0011326d;
              }
              uVar128 = 0;
              while ((uVar104 != uVar123 ||
                     (*(uint *)(*(long *)(lVar117 + lVar122 * 8) + 0x10) != uStack0000000000000028))
                    ) {
                uVar128 = uVar128 + 1;
                auVar50._8_8_ = 0;
                auVar50._0_8_ = (iVar113 + 1) * uVar109;
                auVar98._8_8_ = 0;
                auVar98._0_8_ = uVar124;
                lVar122 = SUB168(auVar50 * auVar98,8);
                uVar104 = *(uint *)(lVar114 + lVar122 * 4);
                iVar113 = SUB164(auVar50 * auVar98,8);
                if ((uVar104 == 0) ||
                   (auVar51._8_8_ = 0, auVar51._0_8_ = uVar104 * uVar109, auVar99._8_8_ = 0,
                   auVar99._0_8_ = uVar124, auVar52._8_8_ = 0,
                   auVar52._0_8_ = ((uVar132 + iVar113) - SUB164(auVar51 * auVar99,8)) * uVar109,
                   auVar100._8_8_ = 0, auVar100._0_8_ = uVar124,
                   SUB164(auVar52 * auVar100,8) < uVar128)) goto LAB_00112e80;
              }
              Vector<RID>::push_back((Vector<RID> *)&stack0x000000d0);
              uVar132 = uStack0000000000000028 + 1;
              _uStack0000000000000028 = (ulong)uVar132;
              if (iVar102 <= (int)uVar132) goto LAB_00111a27;
            }
          }
LAB_0011326d:
          uVar132 = uStack0000000000000028 + 1;
          _uStack0000000000000028 = (ulong)uVar132;
          Vector<RID>::push_back((Vector<RID> *)&stack0x000000d0);
        } while ((int)uVar132 < iVar102);
        goto LAB_00111a27;
      }
      if (*(int *)(in_stack_00000078 + 0x2c) == 0) {
        lStack0000000000000088 = 0;
        goto LAB_0011334a;
      }
      lVar117 = 0;
LAB_00112f70:
      uVar132 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_stack_00000078 + 0x28) * 4);
      uVar109 = CONCAT44(0,uVar132);
      lVar114 = *(long *)(hash_table_size_primes_inv +
                         (ulong)*(uint *)(in_stack_00000078 + 0x28) * 8);
      if (*plVar129 == 0) {
        uVar104 = StringName::get_empty_hash();
      }
      else {
        uVar104 = *(uint *)(*plVar129 + 0x20);
      }
      if (uVar104 == 0) {
        uVar104 = 1;
      }
      auVar42._8_8_ = 0;
      auVar42._0_8_ = (ulong)uVar104 * lVar114;
      auVar90._8_8_ = 0;
      auVar90._0_8_ = uVar109;
      lVar122 = SUB168(auVar42 * auVar90,8);
      uVar128 = SUB164(auVar42 * auVar90,8);
      uVar123 = *(uint *)(*(long *)(in_stack_00000078 + 0x10) + lVar122 * 4);
      if (uVar123 != 0) {
        uVar127 = 0;
        do {
          if ((uVar104 == uVar123) &&
             (*(long *)(*(long *)(*(long *)(in_stack_00000078 + 8) + lVar122 * 8) + 0x10) ==
              *plVar129)) {
            lStack0000000000000088 =
                 *(long *)(*(long *)(in_stack_00000078 + 8) + (ulong)uVar128 * 8);
            goto LAB_00113049;
          }
          uVar127 = uVar127 + 1;
          auVar43._8_8_ = 0;
          auVar43._0_8_ = (ulong)(uVar128 + 1) * lVar114;
          auVar91._8_8_ = 0;
          auVar91._0_8_ = uVar109;
          lVar122 = SUB168(auVar43 * auVar91,8);
          uVar123 = *(uint *)(*(long *)(in_stack_00000078 + 0x10) + lVar122 * 4);
          uVar128 = SUB164(auVar43 * auVar91,8);
        } while ((uVar123 != 0) &&
                (auVar44._8_8_ = 0, auVar44._0_8_ = (ulong)uVar123 * lVar114, auVar92._8_8_ = 0,
                auVar92._0_8_ = uVar109, auVar45._8_8_ = 0,
                auVar45._0_8_ = (ulong)((uVar132 + uVar128) - SUB164(auVar44 * auVar92,8)) * lVar114
                , auVar93._8_8_ = 0, auVar93._0_8_ = uVar109, uVar127 <= SUB164(auVar45 * auVar93,8)
                ));
      }
      lStack0000000000000088 = 0;
LAB_00113049:
      if (lVar117 == 0) goto LAB_0011334a;
      uVar109 = *(ulong *)(lVar117 + -8);
LAB_00113056:
      _uStack0000000000000028 = uVar109 & 0xffffffff;
      lVar117 = in_stack_000000d8;
      if ((int)uVar109 < iVar102) goto LAB_00113063;
      goto LAB_001125b5;
    }
LAB_00112234:
    if ((*(long *)(in_stack_00000078 + 8) != 0) && (*(int *)(in_stack_00000078 + 0x2c) != 0)) {
      uVar132 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_stack_00000078 + 0x28) * 4);
      uVar109 = CONCAT44(0,uVar132);
      lVar117 = *(long *)(hash_table_size_primes_inv +
                         (ulong)*(uint *)(in_stack_00000078 + 0x28) * 8);
      if (*plVar129 == 0) {
        uVar104 = StringName::get_empty_hash();
      }
      else {
        uVar104 = *(uint *)(*plVar129 + 0x20);
      }
      if (uVar104 == 0) {
        uVar104 = 1;
      }
      auVar27._8_8_ = 0;
      auVar27._0_8_ = (ulong)uVar104 * lVar117;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = uVar109;
      lVar114 = SUB168(auVar27 * auVar75,8);
      uVar128 = SUB164(auVar27 * auVar75,8);
      uVar123 = *(uint *)(*(long *)(in_stack_00000078 + 0x10) + lVar114 * 4);
      if (uVar123 != 0) {
        uVar127 = 0;
        while ((uVar123 != uVar104 ||
               (*(long *)(*(long *)(*(long *)(in_stack_00000078 + 8) + lVar114 * 8) + 0x10) !=
                *plVar129))) {
          uVar127 = uVar127 + 1;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = (ulong)(uVar128 + 1) * lVar117;
          auVar76._8_8_ = 0;
          auVar76._0_8_ = uVar109;
          lVar114 = SUB168(auVar28 * auVar76,8);
          uVar123 = *(uint *)(*(long *)(in_stack_00000078 + 0x10) + lVar114 * 4);
          uVar128 = SUB164(auVar28 * auVar76,8);
          if ((uVar123 == 0) ||
             (auVar29._8_8_ = 0, auVar29._0_8_ = (ulong)uVar123 * lVar117, auVar77._8_8_ = 0,
             auVar77._0_8_ = uVar109, auVar30._8_8_ = 0,
             auVar30._0_8_ = (ulong)((uVar132 + uVar128) - SUB164(auVar29 * auVar77,8)) * lVar117,
             auVar78._8_8_ = 0, auVar78._0_8_ = uVar109, SUB164(auVar30 * auVar78,8) < uVar127))
          goto LAB_00111a38;
        }
        lVar117 = *(long *)(*(long *)(in_stack_00000078 + 8) + (ulong)uVar128 * 8);
        if (((lVar117 != 0) && (lVar114 = *(long *)(lVar117 + 0x20), lVar114 != 0)) &&
           (*(int *)(lVar117 + 0x44) != 0)) {
          lVar122 = *(long *)(lVar117 + 0x28);
          uVar132 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar117 + 0x40) * 4);
          uVar124 = CONCAT44(0,uVar132);
          uVar109 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar117 + 0x40) * 8);
          auVar31._8_8_ = 0;
          auVar31._0_8_ = uVar124;
          auVar79._8_8_ = 0;
          auVar79._0_8_ = uVar109;
          lVar117 = SUB168(auVar31 * auVar79,8);
          uVar104 = *(uint *)(lVar122 + lVar117 * 4);
          iVar113 = SUB164(auVar31 * auVar79,8);
          if (uVar104 != 0) {
            uVar128 = 0;
            lVar112 = lVar117;
            uVar123 = uVar104;
            iVar103 = iVar113;
            while ((uVar123 != 1 || (*(int *)(*(long *)(lVar114 + lVar112 * 8) + 0x10) != 0))) {
              uVar128 = uVar128 + 1;
              auVar32._8_8_ = 0;
              auVar32._0_8_ = (iVar103 + 1) * uVar109;
              auVar80._8_8_ = 0;
              auVar80._0_8_ = uVar124;
              lVar112 = SUB168(auVar32 * auVar80,8);
              uVar123 = *(uint *)(lVar122 + lVar112 * 4);
              iVar103 = SUB164(auVar32 * auVar80,8);
              if ((uVar123 == 0) ||
                 (auVar33._8_8_ = 0, auVar33._0_8_ = uVar123 * uVar109, auVar81._8_8_ = 0,
                 auVar81._0_8_ = uVar124, auVar34._8_8_ = 0,
                 auVar34._0_8_ = ((uVar132 + iVar103) - SUB164(auVar33 * auVar81,8)) * uVar109,
                 auVar82._8_8_ = 0, auVar82._0_8_ = uVar124, SUB164(auVar34 * auVar82,8) < uVar128))
              goto LAB_00111a38;
            }
            uVar123 = 0;
            while ((uVar104 != 1 || (*(int *)(*(long *)(lVar114 + lVar117 * 8) + 0x10) != 0))) {
              uVar123 = uVar123 + 1;
              auVar35._8_8_ = 0;
              auVar35._0_8_ = (iVar113 + 1) * uVar109;
              auVar83._8_8_ = 0;
              auVar83._0_8_ = uVar124;
              lVar117 = SUB168(auVar35 * auVar83,8);
              uVar104 = *(uint *)(lVar122 + lVar117 * 4);
              iVar113 = SUB164(auVar35 * auVar83,8);
              if ((uVar104 == 0) ||
                 (auVar36._8_8_ = 0, auVar36._0_8_ = uVar104 * uVar109, auVar84._8_8_ = 0,
                 auVar84._0_8_ = uVar124, auVar37._8_8_ = 0,
                 auVar37._0_8_ = ((uVar132 + iVar113) - SUB164(auVar36 * auVar84,8)) * uVar109,
                 auVar85._8_8_ = 0, auVar85._0_8_ = uVar124, SUB164(auVar37 * auVar85,8) < uVar123))
              {
LAB_00112e80:
                _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                                 "FATAL: Condition \"!exists\" is true.",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar101 = (code *)invalidInstructionException();
                (*pcVar101)();
              }
            }
            Vector<RID>::push_back((Vector<RID> *)&stack0x000000d0);
            goto LAB_00111a27;
          }
        }
      }
    }
LAB_00111a38:
    lVar117 = *(long *)(in_stack_00000018 + 8);
    if (lVar117 == 0) {
LAB_00112d68:
      lVar122 = 0;
LAB_0011289e:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar110,lVar122,"p_index","size()","",false
                 ,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar101 = (code *)invalidInstructionException();
      (*pcVar101)();
    }
    lVar122 = *(long *)(lVar117 + -8);
    if (lVar122 <= unaff_RBX) goto LAB_0011289e;
    lVar117 = lVar117 + lVar116;
    switch(*(undefined4 *)(lVar117 + 8)) {
    case 0x14:
    case 0x15:
    case 0x16:
      switch(*(undefined4 *)(lVar117 + 0xc)) {
      case 4:
        FUN_00112a51();
        return;
      case 5:
        FUN_00112a51();
        return;
      default:
        FUN_00112a51();
        return;
      case 0xb:
        FUN_00112a51();
        return;
      case 0xd:
        FUN_00112a51();
        return;
      case 0xe:
        FUN_00112a51();
        return;
      }
    case 0x17:
    case 0x18:
    case 0x19:
      FUN_00112a51();
      return;
    case 0x1a:
    case 0x1b:
    case 0x1c:
      unaff_RBP = *(undefined8 *)(in_stack_00000040 + 0x70);
      in_stack_00000020 = iVar102;
      break;
    case 0x1d:
      if (*(int *)(lVar117 + 0xc) == 0xb) {
        FUN_00112a51();
        return;
      }
      FUN_00112a51();
      return;
    case 0x1e:
      FUN_00112a51();
      return;
    default:
      FUN_00112a51();
      return;
    }
  } while( true );
joined_r0x00111b0d:
  if (puVar105 == (undefined8 *)0x0) goto LAB_00111caf;
  if (puVar105[3] != *(long *)(in_stack_00000010 + 0x30)) {
    if (pauVar111 == (undefined1 (*) [16])0x0) {
      pauVar111 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar111[1] = 0;
      *pauVar111 = (undefined1  [16])0x0;
      in_stack_000000e0 = (char *)pauVar111;
    }
    this = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
    StringName::operator=(this,(StringName *)(puVar105 + 2));
    lVar110 = *(long *)(*pauVar111 + 8);
    *(undefined1 (**) [16])(this + 0x18) = pauVar111;
    *(undefined8 *)(this + 8) = 0;
    *(long *)(this + 0x10) = lVar110;
    if (lVar110 != 0) {
      *(StringName **)(lVar110 + 8) = this;
    }
    lVar110 = *(long *)*pauVar111;
    *(StringName **)(*pauVar111 + 8) = this;
    if (lVar110 == 0) {
      *(StringName **)*pauVar111 = this;
    }
    *(int *)pauVar111[1] = *(int *)pauVar111[1] + 1;
    if ((*(long *)(in_stack_00000048 + 0x110) != 0) && (*(int *)(in_stack_00000048 + 0x134) != 0)) {
      uVar132 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_stack_00000048 + 0x130) * 4);
      uVar109 = CONCAT44(0,uVar132);
      lVar110 = *(long *)(hash_table_size_primes_inv +
                         (ulong)*(uint *)(in_stack_00000048 + 0x130) * 8);
      if (puVar105[2] == 0) {
        uVar104 = StringName::get_empty_hash();
      }
      else {
        uVar104 = *(uint *)(puVar105[2] + 0x20);
      }
      if (uVar104 == 0) {
        uVar104 = 1;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar104 * lVar110;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar109;
      lVar116 = SUB168(auVar9 * auVar57,8);
      uVar128 = SUB164(auVar9 * auVar57,8);
      uVar123 = *(uint *)(*(long *)(in_stack_00000048 + 0x118) + lVar116 * 4);
      if (uVar123 != 0) {
        uVar127 = 0;
        while ((uVar123 != uVar104 ||
               (*(long *)(*(long *)(*(long *)(in_stack_00000048 + 0x110) + lVar116 * 8) + 0x10) !=
                puVar105[2]))) {
          uVar127 = uVar127 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar128 + 1) * lVar110;
          auVar58._8_8_ = 0;
          auVar58._0_8_ = uVar109;
          lVar116 = SUB168(auVar10 * auVar58,8);
          uVar123 = *(uint *)(*(long *)(in_stack_00000048 + 0x118) + lVar116 * 4);
          uVar128 = SUB164(auVar10 * auVar58,8);
          if ((uVar123 == 0) ||
             (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar123 * lVar110, auVar59._8_8_ = 0,
             auVar59._0_8_ = uVar109, auVar12._8_8_ = 0,
             auVar12._0_8_ = (ulong)((uVar132 + uVar128) - SUB164(auVar11 * auVar59,8)) * lVar110,
             auVar60._8_8_ = 0, auVar60._0_8_ = uVar109, SUB164(auVar12 * auVar60,8) < uVar127))
          goto LAB_00111c9f;
        }
        HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase
                  ((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *)
                   (*(long *)(*(long *)(in_stack_00000048 + 0x110) + (ulong)uVar128 * 8) + 0x18),
                   (RID *)(in_stack_00000010 + 0x18));
      }
    }
  }
LAB_00111c9f:
  puVar105 = (undefined8 *)*puVar105;
  goto joined_r0x00111b0d;
LAB_00111d50:
  uVar127 = uVar127 + 1;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = (ulong)(uVar128 + 1) * lVar110;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = uVar109;
  lVar117 = SUB168(auVar14 * auVar62,8);
  uVar123 = *(uint *)(lVar116 + lVar117 * 4);
  uVar128 = SUB164(auVar14 * auVar62,8);
  if ((uVar123 == 0) ||
     (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar123 * lVar110, auVar63._8_8_ = 0,
     auVar63._0_8_ = uVar109, auVar16._8_8_ = 0,
     auVar16._0_8_ = (ulong)((uVar132 + uVar128) - SUB164(auVar15 * auVar63,8)) * lVar110,
     auVar64._8_8_ = 0, auVar64._0_8_ = uVar109, SUB164(auVar16 * auVar64,8) < uVar127))
  goto LAB_00111f21;
  goto LAB_00111d9a;
  while( true ) {
    LOCK();
    lVar122 = *plVar129;
    bVar133 = lVar114 == lVar122;
    if (bVar133) {
      *plVar129 = lVar114 + 1;
      lVar122 = lVar114;
    }
    UNLOCK();
    if (bVar133) break;
LAB_00112b91:
    lVar114 = *plVar129;
    if (lVar114 == 0) goto LAB_00112c6c;
  }
  if (lVar122 != -1) {
    in_stack_000000b8 = *(long *)(lVar117 + 0x10);
  }
LAB_001118ff:
  operator+((char *)&stack0x000000c0,(String *)"Shader uses global parameter texture \'");
  String::operator+((String *)&stack0x000000e0,(String *)&stack0x000000c0);
  uVar115 = 0x375;
LAB_00111938:
  _err_print_error("update_textures","servers/rendering/renderer_rd/storage_rd/material_storage.cpp"
                   ,uVar115,&stack0x000000e0);
  pcVar3 = in_stack_000000e0;
  if (in_stack_000000e0 != (char *)0x0) {
    LOCK();
    plVar129 = (long *)(in_stack_000000e0 + -0x10);
    *plVar129 = *plVar129 + -1;
    UNLOCK();
    if (*plVar129 == 0) {
      in_stack_000000e0 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
  }
  lVar117 = in_stack_000000c0;
  if (in_stack_000000c0 != 0) {
    LOCK();
    plVar129 = (long *)(in_stack_000000c0 + -0x10);
    *plVar129 = *plVar129 + -1;
    UNLOCK();
    if (*plVar129 == 0) {
      in_stack_000000c0 = 0;
      Memory::free_static((void *)(lVar117 + -0x10),false);
    }
  }
  lVar117 = in_stack_000000b8;
  if (in_stack_000000b8 != 0) {
    LOCK();
    plVar129 = (long *)(in_stack_000000b8 + -0x10);
    *plVar129 = *plVar129 + -1;
    UNLOCK();
    if (*plVar129 == 0) {
      in_stack_000000b8 = 0;
      Memory::free_static((void *)(lVar117 + -0x10),false);
    }
  }
  lVar117 = in_stack_000000c8;
  if (in_stack_000000c8 != 0) {
    LOCK();
    plVar129 = (long *)(in_stack_000000c8 + -0x10);
    *plVar129 = *plVar129 + -1;
    UNLOCK();
    if (*plVar129 == 0) {
      in_stack_000000c8 = 0;
      Memory::free_static((void *)(lVar117 + -0x10),false);
    }
  }
LAB_00111a27:
  lVar117 = in_stack_000000d8;
  if (in_stack_000000d8 == 0) goto LAB_00111a38;
LAB_001125b5:
  if (in_stack_00000098._3_1_ == '\0') {
    cVar126 = '\0';
  }
  else {
    lVar114 = *(long *)(in_stack_00000018 + 8);
    if (lVar114 == 0) goto LAB_00112d68;
    lVar122 = *(long *)(lVar114 + -8);
    if (lVar122 <= unaff_RBX) goto LAB_0011289e;
    cVar126 = *(char *)(lVar114 + 0x10 + lVar116);
  }
  if (0 < *(long *)(lVar117 + -8)) {
    lVar114 = 0;
    lVar110 = 0;
    lVar112 = in_stack_00000068;
    do {
      lVar131 = lVar110;
      lVar106 = RendererRD::TextureStorage::get_singleton();
      lVar122 = *(long *)(lVar117 + -8);
      lVar110 = lVar131;
      if (lVar122 <= lVar131) goto LAB_0011289e;
      uVar109 = *(ulong *)(lVar117 + lVar131 * 8);
      in_stack_00000068 = lVar112;
      if ((uVar109 != 0) && ((uint)uVar109 < *(uint *)(lVar106 + 0x124))) {
        lVar106 = ((uVar109 & 0xffffffff) % (ulong)*(uint *)(lVar106 + 0x120)) * 0x118 +
                  *(long *)(*(long *)(lVar106 + 0x110) +
                           ((uVar109 & 0xffffffff) / (ulong)*(uint *)(lVar106 + 0x120)) * 8);
        if (*(int *)(lVar106 + 0x110) == (int)(uVar109 >> 0x20)) {
          if ((cVar126 == '\0') || (lVar114 = *(long *)(lVar106 + 0x18), lVar114 == 0)) {
            lVar114 = *(long *)(lVar106 + 0x10);
          }
          if ((*(code **)(lVar106 + 0xd8) != (code *)0x0) && (in_stack_00000098._2_1_ != '\0')) {
            (**(code **)(lVar106 + 0xd8))(*(undefined8 *)(lVar106 + 0xe0));
          }
          if (*(code **)(lVar106 + 0xe8) == (code *)0x0) {
LAB_00112836:
            if (*(long *)(lVar106 + 0xf8) != 0) {
              lVar107 = *(long *)(in_stack_00000018 + 8);
              if (lVar107 == 0) goto LAB_001128c8;
              lVar122 = *(long *)(lVar107 + -8);
              lVar110 = unaff_RBX;
              if (lVar122 <= unaff_RBX) goto LAB_0011289e;
LAB_00112729:
              iStack0000000000000050 = *(int *)(lVar107 + 0xc + lVar116) + -6;
              _in_stack_00000020 = lVar106;
            }
          }
          else {
            lVar107 = *(long *)(in_stack_00000018 + 8);
            if (lVar107 == 0) {
LAB_001128c8:
              lVar122 = 0;
              lVar110 = unaff_RBX;
              goto LAB_0011289e;
            }
            lVar122 = *(long *)(lVar107 + -8);
            lVar110 = unaff_RBX;
            if (lVar122 <= unaff_RBX) goto LAB_0011289e;
            iVar102 = *(int *)(lVar107 + 0xc + lVar116);
            if ((iVar102 == 4) || (in_stack_00000068 = lVar106, iVar102 == 5)) {
              (**(code **)(lVar106 + 0xe8))(*(undefined8 *)(lVar106 + 0xf0));
              goto LAB_00112836;
            }
            in_stack_00000068 = lVar112;
            if (*(long *)(lVar106 + 0xf8) != 0) goto LAB_00112729;
          }
          lVar110 = *(long *)(lVar106 + 0x78);
          if (lVar110 != 0) {
            *(undefined1 *)(lVar110 + 0x138) = 1;
            if (*(long *)(in_stack_00000010 + 0x10) == 0) {
              lVar122 = 1;
            }
            else {
              lVar122 = *(long *)(*(long *)(in_stack_00000010 + 0x10) + -8) + 1;
            }
            iVar102 = CowData<RendererRD::TextureStorage::RenderTarget*>::resize<false>
                                (in_stack_00000038,lVar122);
            if (iVar102 == 0) {
              if (*(long *)(in_stack_00000010 + 0x10) == 0) {
                lVar112 = -1;
                lVar122 = 0;
              }
              else {
                lVar122 = *(long *)(*(long *)(in_stack_00000010 + 0x10) + -8);
                lVar112 = lVar122 + -1;
                if (-1 < lVar112) {
                  CowData<RendererRD::TextureStorage::RenderTarget*>::_copy_on_write
                            (in_stack_00000038);
                  *(long *)(*(long *)(in_stack_00000010 + 0x10) + lVar112 * 8) = lVar110;
                  goto LAB_001127bf;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar112,lVar122,"p_index","size()",
                         "",false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true");
            }
          }
        }
        else if (*(int *)(lVar106 + 0x110) + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
LAB_001127bf:
      if (lVar114 == 0) {
        lVar114 = *(long *)(in_stack_00000040 + 0x18);
      }
      if ((((_in_stack_00000020 != 0) && (in_stack_00000068 != 0)) &&
          (*(long *)(in_stack_00000068 + 0x90) != 0)) &&
         (1 < *(uint *)(*(long *)(in_stack_00000068 + 0x90) + -8))) {
        (**(code **)(_in_stack_00000020 + 0xf8))
                  (*(undefined8 *)(_in_stack_00000020 + 0x100),in_stack_00000068 + 0x90,
                   iStack0000000000000050);
      }
      *(long *)(in_stack_00000060 + (long)iStack0000000000000054 * 8 + lVar131 * 8) = lVar114;
      lVar110 = lVar131 + 1;
      lVar112 = in_stack_00000068;
    } while (lVar131 + 1 < *(long *)(lVar117 + -8));
    iStack0000000000000054 = iStack0000000000000054 + 1 + (int)lVar131;
    in_stack_00000058 = _in_stack_00000020;
LAB_00111ab4:
    if (in_stack_000000d8 == 0) goto LAB_00111adc;
  }
  LOCK();
  plVar129 = (long *)(in_stack_000000d8 + -0x10);
  *plVar129 = *plVar129 + -1;
  UNLOCK();
  if (*plVar129 == 0) {
    Memory::free_static((void *)(in_stack_000000d8 + -0x10),false);
  }
LAB_00111adc:
  lVar110 = *(long *)(in_stack_00000018 + 8);
  _in_stack_00000020 = in_stack_00000058;
  goto joined_r0x00112ac5;
LAB_00112c6c:
  in_stack_000000b8 = 0;
  goto LAB_001118ff;
LAB_00112a09:
  if ((uVar104 != uVar123) ||
     (*(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x40) + lVar114 * 8) + 0x10) != *plVar129))
  {
    uVar127 = uVar127 + 1;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = (ulong)(uVar128 + 1) * lVar122;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = uVar109;
    lVar114 = SUB168(auVar39 * auVar87,8);
    uVar123 = *(uint *)(*(long *)(in_stack_00000010 + 0x48) + lVar114 * 4);
    uVar128 = SUB164(auVar39 * auVar87,8);
    if ((uVar123 == 0) ||
       (auVar40._8_8_ = 0, auVar40._0_8_ = (ulong)uVar123 * lVar122, auVar88._8_8_ = 0,
       auVar88._0_8_ = uVar109, auVar41._8_8_ = 0,
       auVar41._0_8_ = (ulong)((uVar132 + uVar128) - SUB164(auVar40 * auVar88,8)) * lVar122,
       auVar89._8_8_ = 0, auVar89._0_8_ = uVar109, SUB164(auVar41 * auVar89,8) < uVar127))
    goto LAB_00112bd0;
    goto LAB_00112a09;
  }
  lVar114 = *(long *)(*(long *)(in_stack_00000010 + 0x40) + (ulong)uVar128 * 8);
  if (lVar114 != 0) {
    *(undefined8 *)(lVar114 + 0x18) = *(undefined8 *)(in_stack_00000010 + 0x30);
    goto LAB_00112c03;
  }
LAB_00112bd0:
  HashMap<StringName,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_long>>>
  ::insert((StringName *)&stack0x000000e0,(ulong *)(in_stack_00000010 + 0x38),SUB81(plVar129,0));
  HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert
            ((StringName *)&stack0x000000e0);
LAB_00112c03:
  pVVar108 = (Variant *)(lVar117 + 0x48);
  if (*(int *)(lVar117 + 0x60) != 0) {
    pVVar108 = (Variant *)(lVar117 + 0x60);
  }
  Variant::operator_cast_to_RID(pVVar108);
  Vector<RID>::push_back((Vector<RID> *)&stack0x000000d0);
  goto LAB_00111a27;
LAB_00112170:
  uVar127 = uVar127 + 1;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = (ulong)(uVar128 + 1) * lVar117;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = uVar109;
  lVar114 = SUB168(auVar24 * auVar72,8);
  uVar123 = *(uint *)(*(long *)(in_stack_00000070 + 0x10) + lVar114 * 4);
  uVar128 = SUB164(auVar24 * auVar72,8);
  if ((uVar123 == 0) ||
     (auVar25._8_8_ = 0, auVar25._0_8_ = (ulong)uVar123 * lVar117, auVar73._8_8_ = 0,
     auVar73._0_8_ = uVar109, auVar26._8_8_ = 0,
     auVar26._0_8_ = (ulong)((uVar132 + uVar128) - SUB164(auVar25 * auVar73,8)) * lVar117,
     auVar74._8_8_ = 0, auVar74._0_8_ = uVar109, SUB164(auVar26 * auVar74,8) < uVar127))
  goto LAB_00112228;
  goto LAB_001121b6;
LAB_00111caf:
  if (pauVar111 != (undefined1 (*) [16])0x0) {
    do {
      plVar129 = *(long **)*pauVar111;
      if (plVar129 == (long *)0x0) goto LAB_00111ff0;
      if ((*(long *)(in_stack_00000010 + 0x40) != 0) && (*(int *)(in_stack_00000010 + 100) != 0)) {
        uVar132 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_stack_00000010 + 0x60) * 4)
        ;
        uVar109 = CONCAT44(0,uVar132);
        lVar110 = *(long *)(hash_table_size_primes_inv +
                           (ulong)*(uint *)(in_stack_00000010 + 0x60) * 8);
        if (*plVar129 == 0) {
          uVar104 = StringName::get_empty_hash();
        }
        else {
          uVar104 = *(uint *)(*plVar129 + 0x20);
        }
        lVar116 = *(long *)(in_stack_00000010 + 0x48);
        if (uVar104 == 0) {
          uVar104 = 1;
        }
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)uVar104 * lVar110;
        auVar61._8_8_ = 0;
        auVar61._0_8_ = uVar109;
        lVar117 = SUB168(auVar13 * auVar61,8);
        uVar123 = *(uint *)(lVar116 + lVar117 * 4);
        uVar128 = SUB164(auVar13 * auVar61,8);
        if (uVar123 != 0) {
          uVar127 = 0;
LAB_00111d9a:
          uVar124 = (ulong)uVar128;
          if ((uVar123 != uVar104) ||
             (lVar114 = *(long *)(in_stack_00000010 + 0x40),
             *(long *)(*(long *)(lVar114 + lVar117 * 8) + 0x10) != *plVar129)) goto LAB_00111d50;
          uVar132 = *(uint *)(hash_table_size_primes +
                             (ulong)*(uint *)(in_stack_00000010 + 0x60) * 4);
          uVar121 = CONCAT44(0,uVar132);
          lVar110 = *(long *)(hash_table_size_primes_inv +
                             (ulong)*(uint *)(in_stack_00000010 + 0x60) * 8);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)(uVar128 + 1) * lVar110;
          auVar65._8_8_ = 0;
          auVar65._0_8_ = uVar121;
          uVar118 = SUB168(auVar17 * auVar65,8);
          puVar130 = (uint *)(lVar116 + uVar118 * 4);
          uVar104 = SUB164(auVar17 * auVar65,8);
          uVar109 = (ulong)uVar104;
          uVar125 = (ulong)*puVar130;
          if ((*puVar130 != 0) &&
             (auVar18._8_8_ = 0, auVar18._0_8_ = uVar125 * lVar110, auVar66._8_8_ = 0,
             auVar66._0_8_ = uVar121, auVar19._8_8_ = 0,
             auVar19._0_8_ = (ulong)((uVar132 + uVar104) - SUB164(auVar18 * auVar66,8)) * lVar110,
             auVar67._8_8_ = 0, auVar67._0_8_ = uVar121, SUB164(auVar19 * auVar67,8) != 0)) {
            while( true ) {
              puVar1 = (uint *)(lVar116 + uVar124 * 4);
              *puVar130 = *puVar1;
              puVar105 = (undefined8 *)(lVar114 + uVar118 * 8);
              *puVar1 = (uint)uVar125;
              puVar2 = (undefined8 *)(lVar114 + uVar124 * 8);
              uVar115 = *puVar105;
              *puVar105 = *puVar2;
              *puVar2 = uVar115;
              auVar22._8_8_ = 0;
              auVar22._0_8_ = (ulong)((int)uVar109 + 1) * lVar110;
              auVar70._8_8_ = 0;
              auVar70._0_8_ = uVar121;
              uVar118 = SUB168(auVar22 * auVar70,8);
              puVar130 = (uint *)(lVar116 + uVar118 * 4);
              uVar125 = (ulong)*puVar130;
              uVar124 = uVar109;
              if ((*puVar130 == 0) ||
                 (auVar20._8_8_ = 0, auVar20._0_8_ = uVar125 * lVar110, auVar68._8_8_ = 0,
                 auVar68._0_8_ = uVar121, auVar21._8_8_ = 0,
                 auVar21._0_8_ =
                      (ulong)((SUB164(auVar22 * auVar70,8) + uVar132) - SUB164(auVar20 * auVar68,8))
                      * lVar110, auVar69._8_8_ = 0, auVar69._0_8_ = uVar121,
                 SUB164(auVar21 * auVar69,8) == 0)) break;
              uVar109 = uVar118 & 0xffffffff;
            }
          }
          plVar129 = (long *)(lVar114 + uVar124 * 8);
          *(undefined4 *)(lVar116 + uVar124 * 4) = 0;
          plVar120 = (long *)*plVar129;
          if (*(long **)(in_stack_00000010 + 0x50) == plVar120) {
            *(long *)(in_stack_00000010 + 0x50) = *plVar120;
            plVar120 = (long *)*plVar129;
          }
          if (*(long **)(in_stack_00000010 + 0x58) == plVar120) {
            *(long *)(in_stack_00000010 + 0x58) = plVar120[1];
            plVar120 = (long *)*plVar129;
          }
          if ((long *)plVar120[1] != (long *)0x0) {
            *(long *)plVar120[1] = *plVar120;
            plVar120 = (long *)*plVar129;
          }
          if (*plVar120 != 0) {
            *(long *)(*plVar120 + 8) = plVar120[1];
            plVar120 = (long *)*plVar129;
          }
          if ((StringName::configured != '\0') && (plVar120[2] != 0)) {
            StringName::unref();
          }
          Memory::free_static(plVar120,false);
          *(undefined8 *)(*(long *)(in_stack_00000010 + 0x40) + uVar124 * 8) = 0;
          *(int *)(in_stack_00000010 + 100) = *(int *)(in_stack_00000010 + 100) + -1;
        }
LAB_00111f21:
        plVar129 = *(long **)*pauVar111;
        if (plVar129 == (long *)0x0) goto LAB_00111ff0;
      }
      if ((undefined1 (*) [16])plVar129[3] == pauVar111) {
        lVar110 = plVar129[1];
        lVar116 = plVar129[2];
        *(long *)*pauVar111 = lVar110;
        if (plVar129 == *(long **)(*pauVar111 + 8)) {
          *(long *)(*pauVar111 + 8) = lVar116;
        }
        if (lVar116 != 0) {
          *(long *)(lVar116 + 8) = lVar110;
          lVar110 = plVar129[1];
        }
        if (lVar110 != 0) {
          *(long *)(lVar110 + 0x10) = lVar116;
        }
        if ((StringName::configured != '\0') && (*plVar129 != 0)) {
          StringName::unref();
        }
        Memory::free_static(plVar129,false);
        iVar102 = *(int *)pauVar111[1] + -1;
        *(int *)pauVar111[1] = iVar102;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0);
        iVar102 = *(int *)pauVar111[1];
      }
    } while (iVar102 != 0);
    Memory::free_static(pauVar111,false);
    in_stack_000000e0 = (char *)0x0;
  }
LAB_00111ff0:
  pvVar4 = *(void **)(in_stack_00000010 + 0x28);
  if ((pvVar4 != (void *)0x0) != (bool)in_stack_00000080) {
    plVar129 = *(long **)(in_stack_00000048 + 0x140);
    if (in_stack_00000080 == '\0') {
      if ((plVar129 != (long *)0x0) && (pvVar4 != (void *)0x0)) {
        if (*(long **)((long)pvVar4 + 0x18) == plVar129) {
          lVar110 = *(long *)((long)pvVar4 + 8);
          if (pvVar4 == (void *)*plVar129) {
            *plVar129 = lVar110;
          }
          lVar116 = *(long *)((long)pvVar4 + 0x10);
          if (pvVar4 == (void *)plVar129[1]) {
            plVar129[1] = lVar116;
          }
          if (lVar116 != 0) {
            *(long *)(lVar116 + 8) = lVar110;
            lVar110 = *(long *)((long)pvVar4 + 8);
          }
          if (lVar110 != 0) {
            *(long *)(lVar110 + 0x10) = lVar116;
          }
          Memory::free_static(pvVar4,false);
          *(int *)(plVar129 + 2) = (int)plVar129[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        if (*(int *)((long)*(void **)(in_stack_00000048 + 0x140) + 0x10) == 0) {
          Memory::free_static(*(void **)(in_stack_00000048 + 0x140),false);
          *(undefined8 *)(in_stack_00000048 + 0x140) = 0;
        }
      }
      *(undefined8 *)(in_stack_00000010 + 0x28) = 0;
    }
    else {
      if (plVar129 == (long *)0x0) {
        pauVar111 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(in_stack_00000048 + 0x140) = pauVar111;
        *(undefined4 *)pauVar111[1] = 0;
        *pauVar111 = (undefined1  [16])0x0;
      }
      puVar105 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
      *puVar105 = 0;
      uVar115 = *(undefined8 *)(in_stack_00000010 + 0x18);
      puVar105[1] = 0;
      *puVar105 = uVar115;
      plVar129 = *(long **)(in_stack_00000048 + 0x140);
      lVar110 = plVar129[1];
      puVar105[2] = lVar110;
      puVar105[3] = plVar129;
      if (lVar110 != 0) {
        *(undefined8 **)(lVar110 + 8) = puVar105;
      }
      plVar129[1] = (long)puVar105;
      if (*plVar129 == 0) {
        *plVar129 = (long)puVar105;
      }
      *(int *)(plVar129 + 2) = (int)plVar129[2] + 1;
      *(undefined8 **)(in_stack_00000010 + 0x28) = puVar105;
    }
  }
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&stack0x000000e0);
  if (in_stack_000000f8 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void switchD_00111a7c::caseD_14(void)

{
  long in_RAX;
  
  switch(*(undefined4 *)(in_RAX + 0xc)) {
  case 4:
    FUN_00112a51();
    return;
  case 5:
    FUN_00112a51();
    return;
  default:
    FUN_00112a51();
    return;
  case 0xb:
    FUN_00112a51();
    return;
  case 0xd:
    FUN_00112a51();
    return;
  case 0xe:
    FUN_00112a51();
    return;
  }
}



/* Vector<RenderingDevice::Uniform>::push_back(RenderingDevice::Uniform) [clone .isra.0] */

void __thiscall
Vector<RenderingDevice::Uniform>::push_back
          (Vector<RenderingDevice::Uniform> *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar2 = CowData<RenderingDevice::Uniform>::resize<false>
                    ((CowData<RenderingDevice::Uniform> *)(this + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<RenderingDevice::Uniform>::_copy_on_write
                  ((CowData<RenderingDevice::Uniform> *)(this + 8));
        puVar1 = (undefined8 *)(*(long *)(this + 8) + lVar4 * 0x28);
        *puVar1 = *param_2;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
        puVar1[2] = param_2[2];
        if (puVar1[4] == param_2[4]) {
          return;
        }
        CowData<RID>::_ref((CowData<RID> *)(puVar1 + 4),(CowData *)(param_2 + 4));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* RendererRD::MaterialStorage::MaterialData::update_parameters_uniform_set(HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, bool, bool,
   HashMap<StringName, ShaderLanguage::ShaderNode::Uniform, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderLanguage::ShaderNode::Uniform> > > const&, unsigned int const*,
   Vector<ShaderCompiler::GeneratedCode::Texture> const&, HashMap<StringName, HashMap<int, RID,
   HashMapHasherDefault, HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   RID> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<int, RID, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, RID> > > > > > const&,
   unsigned int, RID&, RID, unsigned int, bool, bool) */

undefined8 __thiscall
RendererRD::MaterialStorage::MaterialData::update_parameters_uniform_set
          (MaterialData *this,HashMap *param_1,char param_2,char param_3,HashMap *param_4,
          uint *param_5,Vector *param_6,HashMap *param_7,uint param_8,long *param_9,
          undefined8 param_11,undefined4 param_12,bool param_13,bool param_14)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  size_t __n;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  ulong uVar18;
  Vector<RenderingDevice::Uniform> local_a8 [8];
  undefined8 local_a0;
  undefined4 local_98;
  int iStack_94;
  undefined1 local_90;
  long local_88;
  Vector<RID> local_80 [8];
  long local_78 [2];
  undefined8 local_68;
  ulong local_60;
  long local_58;
  long local_48;
  long local_40;
  
  uVar17 = (uint)param_13;
  lVar14 = (ulong)param_13 * 0x10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = *(long *)(this + lVar14 + 0x70);
  if (lVar12 == 0) {
    if (param_8 != 0) goto LAB_00113695;
  }
  else {
    if (param_8 == *(uint *)(lVar12 + -8)) {
      if (param_2 == '\0') goto LAB_001136e2;
    }
    else {
LAB_00113695:
      lVar12 = (long)(int)uVar17;
      if (*(long *)(this + lVar12 * 8 + 0x88) != 0) {
        uVar8 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar8,*(undefined8 *)(this + (lVar12 + 0x10) * 8 + 8));
        *(undefined8 *)(this + (lVar12 + 0x10) * 8 + 8) = 0;
      }
      CowData<unsigned_char>::resize<false>
                ((CowData<unsigned_char> *)(this + lVar14 + 0x70),(ulong)param_8);
      if ((*(long *)(this + lVar14 + 0x70) == 0) ||
         (*(long *)(*(long *)(this + lVar14 + 0x70) + -8) == 0)) {
        if (*param_9 == 0) goto LAB_001136e2;
LAB_00113d62:
        uVar8 = RenderingDevice::get_singleton();
        cVar5 = RenderingDevice::uniform_set_is_valid(uVar8,*param_9);
        if (cVar5 != '\0') {
          uVar8 = RenderingDevice::get_singleton();
          RenderingDevice::uniform_set_set_invalidation_callback(uVar8,*param_9,0,0);
          uVar8 = RenderingDevice::get_singleton();
          RenderingDevice::free(uVar8,*param_9);
          *param_9 = 0;
        }
      }
      else {
        uVar8 = RenderingDevice::get_singleton();
        local_60 = 0;
        if (*(long *)(this + lVar14 + 0x70) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(*(long *)(this + lVar14 + 0x70) + -8);
        }
        uVar8 = RenderingDevice::uniform_buffer_create(uVar8,uVar9,&local_68,0);
        uVar18 = local_60;
        *(undefined8 *)(this + (lVar12 + 0x10) * 8 + 8) = uVar8;
        if (local_60 != 0) {
          LOCK();
          plVar13 = (long *)(local_60 - 0x10);
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (*plVar13 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(uVar18 - 0x10),false);
          }
        }
        if (*(long *)(this + lVar14 + 0x70) == 0) {
          __n = 0;
        }
        else {
          __n = *(size_t *)(*(long *)(this + lVar14 + 0x70) + -8);
        }
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + lVar14 + 0x70));
        memset(*(void **)(this + lVar14 + 0x70),0,__n);
        if (*param_9 != 0) goto LAB_00113d62;
      }
      lVar12 = *(long *)(this + lVar14 + 0x70);
      if (lVar12 == 0) goto LAB_001136e2;
    }
    lVar12 = *(long *)(lVar12 + -8);
    if (lVar12 != 0) {
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + lVar14 + 0x70));
      uVar18 = (ulong)uVar17;
      update_uniform_buffer
                (this,param_4,param_5,param_1,*(uchar **)(this + lVar14 + 0x70),(uint)lVar12,
                 param_13);
      uVar8 = RenderingDevice::get_singleton();
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + lVar14 + 0x70));
      lVar12 = *(long *)(this + lVar14 + 0x70);
      if (lVar12 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(lVar12 + -8);
      }
      RenderingDevice::buffer_update
                (uVar8,*(undefined8 *)(this + (long)(int)uVar17 * 8 + 0x88),0,uVar9,lVar12,uVar18);
    }
  }
LAB_001136e2:
  lVar12 = *(long *)(param_6 + 8);
  if ((lVar12 == 0) || (*(long *)(lVar12 + -8) < 1)) {
    uVar16 = 0;
  }
  else {
    piVar10 = (int *)(lVar12 + 0x20);
    uVar16 = 0;
    piVar1 = piVar10 + *(long *)(lVar12 + -8) * 10;
    do {
      iVar6 = *piVar10;
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      piVar10 = piVar10 + 10;
      uVar16 = uVar16 + iVar6;
    } while (piVar1 != piVar10);
  }
  if (*(long *)(this + 0xa0) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(*(long *)(this + 0xa0) + -8);
  }
  if ((uVar16 == uVar7) && (param_3 == '\0')) {
    if (param_8 != 0) {
      if (*param_9 != 0) {
        uVar8 = RenderingDevice::get_singleton();
        cVar5 = RenderingDevice::uniform_set_is_valid(uVar8,*param_9);
        if (cVar5 != '\0') {
          uVar8 = 0;
          goto LAB_00113af9;
        }
      }
      goto LAB_001137d0;
    }
    if ((lVar12 == 0) || (*(long *)(lVar12 + -8) == 0)) {
LAB_00113d9a:
      uVar8 = 0;
      goto LAB_00113af9;
    }
    if (*param_9 != 0) {
      uVar8 = RenderingDevice::get_singleton();
      cVar5 = RenderingDevice::uniform_set_is_valid(uVar8,*param_9);
      if (cVar5 != '\0') {
        uVar8 = 0;
        goto LAB_00113af9;
      }
    }
    local_a0 = 0;
  }
  else {
    CowData<RID>::resize<false>((CowData<RID> *)(this + 0xa0),(ulong)uVar16);
    CowData<RendererRD::TextureStorage::RenderTarget*>::resize<false>
              ((CowData<RendererRD::TextureStorage::RenderTarget*> *)(this + 0x10),0);
    if (*param_9 != 0) {
      uVar8 = RenderingDevice::get_singleton();
      cVar5 = RenderingDevice::uniform_set_is_valid(uVar8,*param_9);
      if (cVar5 != '\0') {
        uVar8 = RenderingDevice::get_singleton();
        RenderingDevice::uniform_set_set_invalidation_callback(uVar8,*param_9,0,0);
        uVar8 = RenderingDevice::get_singleton();
        RenderingDevice::free(uVar8,*param_9);
        *param_9 = 0;
      }
    }
    if (uVar16 == 0) {
      if (param_8 == 0) {
        lVar12 = *(long *)(param_6 + 8);
        goto joined_r0x00113b42;
      }
    }
    else {
      CowData<RID>::_copy_on_write((CowData<RID> *)(this + 0xa0));
      update_textures(this,param_1,param_7,param_6,*(RID **)(this + 0xa0),param_13,param_14);
      if (param_8 == 0) {
        lVar12 = *(long *)(param_6 + 8);
joined_r0x00113b42:
        if ((lVar12 == 0) || (*(long *)(lVar12 + -8) == 0)) goto LAB_00113d9a;
        local_a0 = 0;
        goto LAB_00113815;
      }
    }
LAB_001137d0:
    local_a0 = 0;
    local_58 = *(long *)(this + (ulong)uVar17 * 8 + 0x88);
    local_68 = 7;
    local_60 = local_60 & 0xffffffffffffff00;
    local_48 = 0;
    Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
  }
LAB_00113815:
  CowData<RID>::_copy_on_write((CowData<RID> *)(this + 0xa0));
  lVar12 = *(long *)(this + 0xa0);
  lVar14 = *(long *)(param_6 + 8);
  iVar6 = 0;
  for (lVar15 = 0; (lVar14 != 0 && (lVar15 < *(long *)(lVar14 + -8))); lVar15 = lVar15 + 1) {
    iVar11 = iVar6 + 1;
    local_90 = 0;
    iVar3 = *(int *)(lVar14 + 0x20 + lVar15 * 0x28);
    local_98 = 2;
    local_88 = 0;
    local_78[0] = 0;
    iStack_94 = iVar11;
    if (iVar3 < 1) {
      local_88 = *(long *)(lVar12 + (long)iVar6 * 8);
      local_60 = local_60 & 0xffffffffffffff00;
      local_68 = CONCAT44(iVar11,2);
LAB_001138af:
      local_48 = 0;
      local_58 = local_88;
      Vector<RenderingDevice::Uniform>::push_back(local_a8,&local_68);
    }
    else {
      plVar13 = (long *)(lVar12 + (long)iVar6 * 8);
      plVar2 = (long *)(lVar12 + ((long)iVar3 + (long)iVar6) * 8);
      do {
        while (lVar14 = *plVar13, local_78[0] == 0) {
          while (local_88 == 0) {
            plVar13 = plVar13 + 1;
            local_88 = lVar14;
            if (plVar13 == plVar2) goto LAB_001139b8;
            lVar14 = *plVar13;
          }
          plVar13 = plVar13 + 1;
          Vector<RID>::push_back(local_80,local_88);
          Vector<RID>::push_back(local_80,lVar14);
          local_88 = 0;
          if (plVar13 == plVar2) goto LAB_001139b8;
        }
        plVar13 = plVar13 + 1;
        Vector<RID>::push_back(local_80,lVar14);
      } while (plVar13 != plVar2);
LAB_001139b8:
      lVar14 = local_78[0];
      local_68 = CONCAT44(iStack_94,local_98);
      local_48 = 0;
      iVar11 = iVar6 + iVar3;
      local_60 = CONCAT71(local_60._1_7_,local_90);
      local_58 = local_88;
      if (local_78[0] == 0) goto LAB_001138af;
      CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)local_78);
      lVar4 = local_48;
      Vector<RenderingDevice::Uniform>::push_back(local_a8);
      if (lVar4 == 0) {
LAB_00113a5e:
        LOCK();
        plVar13 = (long *)(lVar14 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          Memory::free_static((void *)(local_78[0] + -0x10),false);
        }
      }
      else {
        LOCK();
        plVar13 = (long *)(lVar4 + -0x10);
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (*plVar13 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
        lVar14 = local_78[0];
        if (local_78[0] != 0) goto LAB_00113a5e;
      }
    }
    lVar14 = *(long *)(param_6 + 8);
    iVar6 = iVar11;
  }
  uVar8 = RenderingDevice::get_singleton();
  lVar12 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                     (uVar8,local_a8,param_11,param_12,0);
  *param_9 = lVar12;
  uVar8 = RenderingDevice::get_singleton();
  RenderingDevice::uniform_set_set_invalidation_callback
            (uVar8,*param_9,_material_uniform_set_erased,this + 0x18);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_a0);
  uVar8 = 1;
LAB_00113af9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* RendererRD::MaterialStorage::shader_initialize(RID) */

void __thiscall
RendererRD::MaterialStorage::shader_initialize(MaterialStorage *this,undefined8 param_2)

{
  long in_FS_OFFSET;
  Shader local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = (Shader)0x0;
  local_88[1] = (Shader)0x0;
  local_88[2] = (Shader)0x0;
  local_88[3] = (Shader)0x0;
  local_88[4] = (Shader)0x0;
  local_88[5] = (Shader)0x0;
  local_88[6] = (Shader)0x0;
  local_88[7] = (Shader)0x0;
  local_88[8] = (Shader)0x0;
  local_88[9] = (Shader)0x0;
  local_88[10] = (Shader)0x0;
  local_88[0xb] = (Shader)0x0;
  local_88[0xc] = (Shader)0x0;
  local_88[0xd] = (Shader)0x0;
  local_88[0xe] = (Shader)0x0;
  local_88[0xf] = (Shader)0x0;
  local_70 = 5;
  local_40 = _LC20;
  local_18 = _LC20;
  local_78 = 0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  RID_Alloc<RendererRD::MaterialStorage::Shader,true>::initialize_rid
            ((RID_Alloc<RendererRD::MaterialStorage::Shader,true> *)(this + 0x1d0),param_2,local_88)
  ;
  Shader::~Shader(local_88);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* RendererRD::MaterialStorage::ShaderData::get_native_source_code() const */

ShaderData * __thiscall
RendererRD::MaterialStorage::ShaderData::get_native_source_code(ShaderData *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::MaterialStorage::material_initialize(RID) [clone .cold] */

void RendererRD::MaterialStorage::material_initialize
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  
  if (param_3 + 0x80000000U < 0x7fffffff) {
    _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                     "Method/function failed. Returning: nullptr",
                     "Attempting to use an uninitialized RID",0,0,param_3 + 0x80000000U);
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RendererRD::TextureStorage::RenderTarget*>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<RendererRD::TextureStorage::RenderTarget*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<int>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115144(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderingDevice::Uniform>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115166(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<float>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011517e(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::MaterialStorage::MaterialData::update_textures(HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, HashMap<StringName,
   HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > > > > > const&,
   Vector<ShaderCompiler::GeneratedCode::Texture> const&, RID*, bool, bool) [clone .cold] */

void RendererRD::MaterialStorage::MaterialData::update_textures
               (HashMap *param_1,HashMap *param_2,Vector *param_3,RID *param_4,bool param_5,
               bool param_6)

{
  FUN_00112a51();
  return;
}



/* void RendererRD::MaterialStorage::Samplers::append_uniforms<LocalVector<RenderingDevice::Uniform,
   unsigned int, false, false> >(LocalVector<RenderingDevice::Uniform, unsigned int, false, false>&,
   int) const */

void __thiscall
RendererRD::MaterialStorage::Samplers::
append_uniforms<LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>>
          (Samplers *this,LocalVector *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)param_1;
  uVar5 = *(uint *)(param_1 + 4);
  uVar2 = *(undefined8 *)(this + 0x28);
  pvVar7 = *(void **)(param_1 + 8);
  if (uVar9 == uVar5) {
    uVar6 = (ulong)(uVar9 * 2);
    if (uVar9 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_00115678;
    uVar5 = *(uint *)(param_1 + 4);
    uVar9 = *(uint *)param_1;
  }
  uVar8 = uVar9 + 1;
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar9 * 0x28);
  *(uint *)param_1 = uVar8;
  *(undefined8 *)(puVar1 + 4) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x48);
  *puVar1 = 0;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  if (uVar8 == uVar5) {
    uVar6 = (ulong)(uVar5 * 2);
    if (uVar5 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_00115678;
    uVar5 = *(uint *)(param_1 + 4);
    uVar8 = *(uint *)param_1;
  }
  uVar9 = uVar8 + 1;
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar8 * 0x28);
  *(uint *)param_1 = uVar9;
  puVar1[1] = param_2 + 1;
  *(undefined8 *)(puVar1 + 4) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  if (uVar9 == uVar5) {
    uVar6 = (ulong)(uVar5 * 2);
    if (uVar5 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_00115678;
    uVar5 = *(uint *)(param_1 + 4);
    uVar9 = *(uint *)param_1;
  }
  uVar8 = uVar9 + 1;
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar9 * 0x28);
  *(uint *)param_1 = uVar8;
  puVar1[1] = param_2 + 2;
  *(undefined8 *)(puVar1 + 4) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x88);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  if (uVar8 == uVar5) {
    uVar6 = (ulong)(uVar5 * 2);
    if (uVar5 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_00115678;
    uVar5 = *(uint *)(param_1 + 4);
    uVar8 = *(uint *)param_1;
  }
  uVar9 = uVar8 + 1;
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar8 * 0x28);
  *(uint *)param_1 = uVar9;
  puVar1[1] = param_2 + 3;
  *(undefined8 *)(puVar1 + 4) = uVar2;
  uVar2 = *(undefined8 *)(this + 0xa8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  if (uVar9 == uVar5) {
    uVar6 = (ulong)(uVar5 * 2);
    if (uVar5 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_00115678;
    uVar5 = *(uint *)(param_1 + 4);
    uVar9 = *(uint *)param_1;
  }
  uVar8 = uVar9 + 1;
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar9 * 0x28);
  *(uint *)param_1 = uVar8;
  puVar1[1] = param_2 + 4;
  *(undefined8 *)(puVar1 + 4) = uVar2;
  uVar2 = *(undefined8 *)(this + 200);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  if (uVar8 == uVar5) {
    uVar6 = (ulong)(uVar5 * 2);
    if (uVar5 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_00115678;
    uVar5 = *(uint *)(param_1 + 4);
    uVar8 = *(uint *)param_1;
  }
  uVar9 = uVar8 + 1;
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar8 * 0x28);
  *(uint *)param_1 = uVar9;
  puVar1[1] = param_2 + 5;
  *(undefined8 *)(puVar1 + 4) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x30);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  if (uVar9 == uVar5) {
    uVar6 = (ulong)(uVar5 * 2);
    if (uVar5 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_00115678;
    uVar5 = *(uint *)(param_1 + 4);
    uVar9 = *(uint *)param_1;
  }
  uVar8 = uVar9 + 1;
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar9 * 0x28);
  *(uint *)param_1 = uVar8;
  puVar1[1] = param_2 + 6;
  *(undefined8 *)(puVar1 + 4) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x50);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  if (uVar8 == uVar5) {
    uVar6 = (ulong)(uVar5 * 2);
    if (uVar5 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_00115678;
    uVar5 = *(uint *)(param_1 + 4);
    uVar8 = *(uint *)param_1;
  }
  uVar9 = uVar8 + 1;
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar8 * 0x28);
  *(uint *)param_1 = uVar9;
  puVar1[1] = param_2 + 7;
  *(undefined8 *)(puVar1 + 4) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x70);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  if (uVar9 == uVar5) {
    uVar6 = (ulong)(uVar5 * 2);
    if (uVar5 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_00115678;
    uVar5 = *(uint *)(param_1 + 4);
    uVar9 = *(uint *)param_1;
  }
  uVar8 = uVar9 + 1;
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar9 * 0x28);
  *(uint *)param_1 = uVar8;
  puVar1[1] = param_2 + 8;
  *(undefined8 *)(puVar1 + 4) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x90);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  if (uVar8 == uVar5) {
    uVar6 = (ulong)(uVar5 * 2);
    if (uVar5 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_00115678;
    uVar5 = *(uint *)(param_1 + 4);
    uVar8 = *(uint *)param_1;
  }
  uVar9 = uVar8 + 1;
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar8 * 0x28);
  *(uint *)param_1 = uVar9;
  puVar1[1] = param_2 + 9;
  *(undefined8 *)(puVar1 + 4) = uVar2;
  uVar2 = *(undefined8 *)(this + 0xb0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  if (uVar9 == uVar5) {
    uVar6 = (ulong)(uVar5 * 2);
    if (uVar5 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) goto LAB_00115678;
    uVar5 = *(uint *)(param_1 + 4);
    uVar9 = *(uint *)param_1;
  }
  uVar8 = uVar9 + 1;
  uVar3 = *(undefined8 *)(this + 0xd0);
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar9 * 0x28);
  *(uint *)param_1 = uVar8;
  *puVar1 = 0;
  puVar1[1] = param_2 + 10;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = uVar2;
  *(undefined8 *)(puVar1 + 8) = 0;
  if (uVar8 == uVar5) {
    uVar6 = (ulong)(uVar5 * 2);
    if (uVar5 * 2 == 0) {
      uVar6 = 1;
    }
    *(int *)(param_1 + 4) = (int)uVar6;
    pvVar7 = (void *)Memory::realloc_static(pvVar7,uVar6 * 0x28,false);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 == (void *)0x0) {
LAB_00115678:
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar8 = *(uint *)param_1;
  }
  *(uint *)param_1 = uVar8 + 1;
  puVar1 = (undefined4 *)((long)pvVar7 + (ulong)uVar8 * 0x28);
  *puVar1 = 0;
  puVar1[1] = param_2 + 0xb;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = uVar3;
  *(undefined8 *)(puVar1 + 8) = 0;
  return;
}



/* RendererRD::MaterialStorage::GlobalShaderUniforms::~GlobalShaderUniforms() */

void __thiscall
RendererRD::MaterialStorage::GlobalShaderUniforms::~GlobalShaderUniforms(GlobalShaderUniforms *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(this + 0x78);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x9c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x98) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x9c) = 0;
        *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x80) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x80) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar6 + lVar4 * 2),false);
            pvVar6 = *(void **)(this + 0x78);
            *(undefined8 *)((long)pvVar6 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x9c) = 0;
        *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00115a3e;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x80),false);
  }
LAB_00115a3e:
  plVar5 = *(long **)(this + 0x38);
  if (plVar5 != (long *)0x0) {
    do {
      pvVar6 = (void *)*plVar5;
      if (pvVar6 == (void *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00115aac;
        }
        break;
      }
      if (plVar5 == *(long **)((long)pvVar6 + 0x18)) {
        lVar4 = *(long *)((long)pvVar6 + 8);
        lVar2 = *(long *)((long)pvVar6 + 0x10);
        *plVar5 = lVar4;
        if (pvVar6 == (void *)plVar5[1]) {
          plVar5[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar4;
          lVar4 = *(long *)((long)pvVar6 + 8);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar6,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x38);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_00115aac:
  plVar5 = *(long **)(this + 0x30);
  if (plVar5 != (long *)0x0) {
    do {
      pvVar6 = (void *)*plVar5;
      if (pvVar6 == (void *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00115b18;
        }
        break;
      }
      if (*(long **)((long)pvVar6 + 0x18) == plVar5) {
        lVar4 = *(long *)((long)pvVar6 + 8);
        lVar2 = *(long *)((long)pvVar6 + 0x10);
        *plVar5 = lVar4;
        if (pvVar6 == (void *)plVar5[1]) {
          plVar5[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar4;
          lVar4 = *(long *)((long)pvVar6 + 8);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar2;
        }
        Memory::free_static(pvVar6,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x30);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_00115b18:
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar4) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar4 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar4) = 0;
          if (Variant::needs_deinit[*(int *)((long)pvVar6 + 0x60)] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[*(int *)((long)pvVar6 + 0x48)] != '\0') {
            Variant::_clear_internal();
          }
          pvVar3 = *(void **)((long)pvVar6 + 0x18);
          if (pvVar3 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x3c) != 0) {
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x38) * 4) != 0
                 ) {
                memset(*(void **)((long)pvVar6 + 0x30),0,
                       (ulong)*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)((long)pvVar6 + 0x38) * 4) << 2);
              }
              *(undefined4 *)((long)pvVar6 + 0x3c) = 0;
            }
            Memory::free_static(pvVar3,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x20),false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x30),false);
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* RendererRD::MaterialStorage::Shader::~Shader() */

void __thiscall RendererRD::MaterialStorage::Shader::~Shader(Shader *this)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  
  pvVar7 = *(void **)(this + 0x50);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x74) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x70) * 4) != 0) {
        memset(*(void **)(this + 0x68),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x70) * 4) * 4);
      }
      *(undefined4 *)(this + 0x74) = 0;
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x60),false);
    Memory::free_static(*(void **)(this + 0x58),false);
    Memory::free_static(*(void **)(this + 0x68),false);
  }
  pvVar7 = *(void **)(this + 0x28);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x4c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x48) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x4c) = 0;
        *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x30) + lVar8) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar8 * 2);
            *(int *)(*(long *)(this + 0x30) + lVar8) = 0;
            pvVar6 = *(void **)((long)pvVar7 + 0x20);
            if (pvVar6 != (void *)0x0) {
              if (*(int *)((long)pvVar7 + 0x44) != 0) {
                uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar7 + 0x40) * 4
                                 );
                if (uVar3 == 0) {
                  *(undefined4 *)((long)pvVar7 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar7 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar5 = 0;
                  do {
                    piVar4 = (int *)(*(long *)((long)pvVar7 + 0x28) + lVar5);
                    if (*piVar4 != 0) {
                      *piVar4 = 0;
                      Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
                      pvVar6 = *(void **)((long)pvVar7 + 0x20);
                      *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
                    }
                    lVar5 = lVar5 + 4;
                  } while (lVar5 != (ulong)uVar3 * 4);
                  *(undefined4 *)((long)pvVar7 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar7 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar6 == (void *)0x0) goto LAB_00115f63;
                }
              }
              Memory::free_static(pvVar6,false);
              Memory::free_static(*(void **)((long)pvVar7 + 0x28),false);
            }
LAB_00115f63:
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar7 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x28);
            *(undefined8 *)((long)pvVar7 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while ((ulong)uVar2 * 4 != lVar8);
        *(undefined4 *)(this + 0x4c) = 0;
        *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_00115fba;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x30),false);
  }
LAB_00115fba:
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
      return;
    }
  }
  return;
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Dependency*, HashMapHasherDefault, HashMapComparatorDefault<Dependency*>
   >::insert(Dependency* const&) */

undefined1  [16]
HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert
          (Dependency **param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  Dependency *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (Dependency *)*in_RSI;
  if (local_88 == (Dependency *)0x0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (Dependency *)*in_RSI;
    if (local_88 != (Dependency *)0x0) goto LAB_0011642f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_0011642f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_001168d1;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC101 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (Dependency *)*in_RSI;
      goto LAB_001168d1;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (Dependency *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_001168d1:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::operator[](DependencyTracker* const&) */

undefined1  [16] __thiscall
HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
::operator[](HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
             *this,DependencyTracker **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  int iVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  DependencyTracker *pDVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  pDVar56 = *param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar55 = CONCAT44(0,uVar47);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar55 * 4;
    uVar39 = uVar55 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x117082;
    local_70 = (void *)Memory::alloc_static(uVar39,false);
    *(void **)(this + 8) = local_70;
    if (uVar47 == 0) {
      iVar43 = *(int *)(this + 0x2c);
      pDVar56 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00116bab;
    }
    else {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)local_70 + uVar39)) &&
         (local_70 < (void *)((long)pvVar4 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar55 != uVar40);
        iVar43 = *(int *)(this + 0x2c);
        pDVar56 = *param_1;
      }
      else {
        memset(pvVar4,0,uVar40);
        lStack_90 = 0x1170ca;
        memset(local_70,0,uVar39);
        iVar43 = *(int *)(this + 0x2c);
        pDVar56 = *param_1;
      }
    }
    if (iVar43 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00116f53;
    }
  }
  else {
    iVar43 = *(int *)(this + 0x2c);
    if (iVar43 != 0) {
      lVar52 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pDVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar55;
      lVar45 = SUB168(auVar5 * auVar21,8);
      uVar44 = *(uint *)(lVar52 + lVar45 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar44 != 0) {
        uVar50 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar44) &&
             (pDVar56 == *(DependencyTracker **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_70 + (ulong)uVar53 * 8) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
          }
          uVar50 = uVar50 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar55;
          lVar45 = SUB168(auVar6 * auVar22,8);
          uVar44 = *(uint *)(lVar52 + lVar45 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar55, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar47) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar55, lVar46 = SUB168(auVar8 * auVar24,8),
                uVar50 <= SUB164(auVar8 * auVar24,8)));
      }
LAB_00116f53:
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (long)pDVar56 * 0x3ffff - 1;
      uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
      uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
        uVar54 = 1;
      }
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar54 * lVar3;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar51;
      lVar45 = SUB168(auVar17 * auVar33,8);
      uVar47 = *(uint *)(lVar52 + lVar45 * 4);
      uVar44 = SUB164(auVar17 * auVar33,8);
      if (uVar47 != 0) {
        uVar53 = 0;
        lVar46 = lVar45;
        do {
          if (((uint)uVar54 == uVar47) &&
             (*(DependencyTracker **)(*(long *)((long)local_70 + lVar45 * 8) + 0x10) == pDVar56)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar44 * 8);
            *(undefined4 *)(pauVar42[1] + 8) = 0;
            lStack_90 = lVar46;
            goto LAB_00116f34;
          }
          uVar53 = uVar53 + 1;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = (ulong)(uVar44 + 1) * lVar3;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = uVar51;
          lVar45 = SUB168(auVar18 * auVar34,8);
          uVar47 = *(uint *)(lVar52 + lVar45 * 4);
          uVar44 = SUB164(auVar18 * auVar34,8);
        } while ((uVar47 != 0) &&
                (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar47 * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar51, auVar20._8_8_ = 0,
                auVar20._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar44) -
                            SUB164(auVar19 * auVar35,8)) * lVar3, auVar36._8_8_ = 0,
                auVar36._0_8_ = uVar51, lVar46 = SUB168(auVar20 * auVar36,8),
                uVar53 <= SUB164(auVar20 * auVar36,8)));
      }
    }
  }
LAB_00116bab:
  if ((float)uVar55 * __LC101 < (float)(iVar43 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00116f34;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar44 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar39 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar4 = *(void **)(this + 0x10);
    uVar40 = uVar39 * 4;
    uVar55 = uVar39 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar39 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar4 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar53);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar47 * lVar3;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar55;
          lVar45 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar52 + lVar45 * 4);
          iVar43 = SUB164(auVar9 * auVar25,8);
          uVar50 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar50 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar50 * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar55;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar53 + iVar43) - SUB164(auVar10 * auVar26,8)) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar55;
            uVar38 = SUB164(auVar11 * auVar27,8);
            uVar48 = uVar41;
            if (uVar38 < uVar49) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar41;
              uVar47 = uVar50;
              uVar49 = uVar38;
            }
            uVar49 = uVar49 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar43 + 1) * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar55;
            lVar45 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar52 + lVar45 * 4);
            iVar43 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar48;
            uVar50 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar44);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar4,false);
    }
  }
  pDVar56 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
  *(DependencyTracker **)pauVar42[1] = pDVar56;
  *(undefined4 *)(pauVar42[1] + 8) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  lVar52 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar40 = (long)*param_1 * 0x3ffff - 1;
  uVar40 = (uVar40 ^ uVar40 >> 0x1f) * 0x15;
  uVar40 = (uVar40 ^ uVar40 >> 0xb) * 0x41;
  uVar40 = uVar40 >> 0x16 ^ uVar40;
  uVar55 = uVar40 & 0xffffffff;
  if ((int)uVar40 == 0) {
    uVar55 = 1;
  }
  uVar50 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar55;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar47);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar55 * lVar3;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar40;
  lStack_90 = SUB168(auVar13 * auVar29,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar43 = SUB164(auVar13 * auVar29,8);
  uVar44 = *puVar1;
  pauVar37 = pauVar42;
  while (uVar44 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar44 * lVar3;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar47 + iVar43) - SUB164(auVar14 * auVar30,8)) * lVar3;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar40;
    uVar53 = SUB164(auVar15 * auVar31,8);
    pauVar57 = pauVar37;
    if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8 *)(lVar45 + lStack_90 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
    }
    uVar53 = (uint)uVar55;
    uVar50 = uVar50 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar43 + 1) * lVar3;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar40;
    lStack_90 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar43 = SUB164(auVar16 * auVar32,8);
    pauVar37 = pauVar57;
    uVar44 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar45 + lStack_90 * 8) = pauVar37;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00116f34:
  auVar59._8_8_ = lStack_90;
  auVar59._0_8_ = pauVar42[1] + 8;
  return auVar59;
}



/* WARNING: Removing unreachable block (ram,0x00117358) */
/* WARNING: Removing unreachable block (ram,0x00117488) */
/* WARNING: Removing unreachable block (ram,0x00117650) */
/* WARNING: Removing unreachable block (ram,0x00117494) */
/* WARNING: Removing unreachable block (ram,0x0011749e) */
/* WARNING: Removing unreachable block (ram,0x00117630) */
/* WARNING: Removing unreachable block (ram,0x001174aa) */
/* WARNING: Removing unreachable block (ram,0x001174b4) */
/* WARNING: Removing unreachable block (ram,0x00117610) */
/* WARNING: Removing unreachable block (ram,0x001174c0) */
/* WARNING: Removing unreachable block (ram,0x001174ca) */
/* WARNING: Removing unreachable block (ram,0x001175f0) */
/* WARNING: Removing unreachable block (ram,0x001174d6) */
/* WARNING: Removing unreachable block (ram,0x001174e0) */
/* WARNING: Removing unreachable block (ram,0x001175d0) */
/* WARNING: Removing unreachable block (ram,0x001174ec) */
/* WARNING: Removing unreachable block (ram,0x001174f6) */
/* WARNING: Removing unreachable block (ram,0x001175b0) */
/* WARNING: Removing unreachable block (ram,0x00117502) */
/* WARNING: Removing unreachable block (ram,0x0011750c) */
/* WARNING: Removing unreachable block (ram,0x00117590) */
/* WARNING: Removing unreachable block (ram,0x00117514) */
/* WARNING: Removing unreachable block (ram,0x0011752a) */
/* WARNING: Removing unreachable block (ram,0x00117536) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void write_array_std140<Vector2i, int, unsigned int>(Vector<int> const&, unsigned int*, int, int)
    */

void write_array_std140<Vector2i,int,unsigned_int>
               (Vector *param_1,uint *param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar2 + -8);
  }
  iVar3 = param_3 * 2;
  puVar4 = (undefined4 *)memset(param_2,0,(long)(param_3 * param_4) << 2);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      while (iVar6 <= (int)lVar5 + 1) {
        lVar5 = lVar5 + 2;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + param_4;
        if (iVar3 <= (int)lVar5) {
          return;
        }
      }
      *puVar4 = *(undefined4 *)(lVar2 + lVar5 * 4);
      lVar1 = lVar5 * 4;
      lVar5 = lVar5 + 2;
      puVar4[1] = *(undefined4 *)(lVar2 + 4 + lVar1);
      puVar4 = puVar4 + param_4;
    } while ((int)lVar5 < iVar3);
  }
  return;
}



/* void write_array_std140<Vector3i, int, unsigned int>(Vector<int> const&, unsigned int*, int, int)
    */

void write_array_std140<Vector3i,int,unsigned_int>
               (Vector *param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar5 + -8);
  }
  iVar1 = param_3 * 3;
  puVar2 = (undefined8 *)memset(param_2,0,(long)(param_3 * param_4) << 2);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      while (iVar6 <= iVar4 + 2) {
        iVar4 = iVar4 + 3;
        *puVar2 = 0;
        lVar5 = lVar5 + 0xc;
        *(undefined4 *)(puVar2 + 1) = 0;
        puVar2 = (undefined8 *)((long)puVar2 + (long)param_4 * 4);
        if (iVar1 <= iVar4) {
          return;
        }
      }
      lVar3 = 0;
      do {
        *(undefined4 *)((long)puVar2 + lVar3) = *(undefined4 *)(lVar5 + lVar3);
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0xc);
      iVar4 = iVar4 + 3;
      puVar2 = (undefined8 *)((long)puVar2 + (long)param_4 * 4);
      lVar5 = lVar5 + 0xc;
    } while (iVar4 < iVar1);
  }
  return;
}



/* void write_array_std140<Vector4i, int, unsigned int>(Vector<int> const&, unsigned int*, int, int)
    */

void write_array_std140<Vector4i,int,unsigned_int>
               (Vector *param_1,uint *param_2,int param_3,int param_4)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar3 + -8);
  }
  iVar4 = param_3 * 4;
  pauVar1 = (undefined1 (*) [16])memset(param_2,0,(long)(param_3 * param_4) << 2);
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      while (iVar6 <= iVar5 + 3) {
        iVar5 = iVar5 + 4;
        *pauVar1 = (undefined1  [16])0x0;
        lVar3 = lVar3 + 0x10;
        pauVar1 = (undefined1 (*) [16])(*pauVar1 + (long)param_4 * 4);
        if (iVar4 <= iVar5) {
          return;
        }
      }
      lVar2 = 0;
      do {
        *(undefined4 *)(*pauVar1 + lVar2) = *(undefined4 *)(lVar3 + lVar2);
        lVar2 = lVar2 + 4;
      } while (lVar2 != 0x10);
      iVar5 = iVar5 + 4;
      pauVar1 = (undefined1 (*) [16])(*pauVar1 + (long)param_4 * 4);
      lVar3 = lVar3 + 0x10;
    } while (iVar5 < iVar4);
  }
  return;
}



/* void write_array_std140<Vector2i, int, int>(Vector<int> const&, int*, int, int) */

void write_array_std140<Vector2i,int,int>(Vector *param_1,int *param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar2 + -8);
  }
  iVar3 = param_3 * 2;
  puVar4 = (undefined4 *)memset(param_2,0,(long)(param_3 * param_4) << 2);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      while (iVar6 <= (int)lVar5 + 1) {
        lVar5 = lVar5 + 2;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + param_4;
        if (iVar3 <= (int)lVar5) {
          return;
        }
      }
      *puVar4 = *(undefined4 *)(lVar2 + lVar5 * 4);
      lVar1 = lVar5 * 4;
      lVar5 = lVar5 + 2;
      puVar4[1] = *(undefined4 *)(lVar2 + 4 + lVar1);
      puVar4 = puVar4 + param_4;
    } while ((int)lVar5 < iVar3);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector2i convert_to_vector<Vector2i>(Variant const&, bool) */

undefined8 convert_to_vector<Vector2i>(Variant *param_1,bool param_2)

{
  int iVar1;
  Variant *this;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float in_XMM1_Da;
  float fVar5;
  float fVar6;
  Variant local_50 [8];
  undefined8 local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)param_1;
  if (iVar1 == 0xf) {
    Variant::operator_cast_to_Quaternion((Variant *)local_48);
    uVar2 = CONCAT44((int)(float)((ulong)local_48[0] >> 0x20),(int)(float)local_48[0]);
  }
  else if (iVar1 == 0xe) {
    local_48[0] = Variant::operator_cast_to_Plane(param_1);
    uVar2 = CONCAT44((int)(float)((ulong)local_48[0] >> 0x20),(int)(float)local_48[0]);
  }
  else if (iVar1 - 7U < 2) {
    uVar2 = Variant::operator_cast_to_Rect2(param_1);
    uVar2 = CONCAT44((int)(float)((ulong)uVar2 >> 0x20),(int)(float)uVar2);
  }
  else if (iVar1 == 0x14) {
    Variant::operator_cast_to_Color(param_1);
    fVar5 = extraout_XMM0_Da;
    fVar6 = extraout_XMM0_Db;
    if (param_2) {
      if (_LC114 <= in_XMM1_Da) {
        powf((float)(((double)in_XMM1_Da + __LC115) * __LC116),_LC117);
      }
      if (_LC114 <= extraout_XMM0_Db) {
        fVar6 = powf((float)(((double)extraout_XMM0_Db + __LC115) * __LC116),_LC117);
      }
      else {
        fVar6 = extraout_XMM0_Db * _LC118;
      }
      if (_LC114 <= extraout_XMM0_Da) {
        fVar5 = powf((float)(((double)extraout_XMM0_Da + __LC115) * __LC116),_LC117);
      }
      else {
        fVar5 = extraout_XMM0_Da * _LC118;
      }
    }
    uVar2 = CONCAT44((int)fVar6,(int)fVar5);
  }
  else {
    if (iVar1 < 0x1c) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = Variant::operator_cast_to_Vector2i(param_1);
        return uVar2;
      }
      goto LAB_00117bb5;
    }
    Variant::operator_cast_to_Array(local_50);
    iVar1 = Array::size();
    local_48[0] = 0;
    if (0 < iVar1) {
      iVar3 = 2;
      if (iVar1 < 3) {
        iVar3 = iVar1;
      }
      lVar4 = 0;
      do {
        this = (Variant *)Array::get((int)local_50);
        iVar1 = Variant::operator_cast_to_int(this);
        *(int *)((long)local_48 + lVar4 * 4) = iVar1;
        iVar1 = (int)lVar4;
        lVar4 = 1;
      } while (iVar1 + 1 < iVar3);
    }
    uVar2 = local_48[0];
    Array::~Array((Array *)local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00117bb5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void write_array_std140<Vector3i, int, int>(Vector<int> const&, int*, int, int) */

void write_array_std140<Vector3i,int,int>(Vector *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar5 + -8);
  }
  iVar1 = param_3 * 3;
  puVar2 = (undefined8 *)memset(param_2,0,(long)(param_3 * param_4) << 2);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      while (iVar6 <= iVar4 + 2) {
        iVar4 = iVar4 + 3;
        *puVar2 = 0;
        lVar5 = lVar5 + 0xc;
        *(undefined4 *)(puVar2 + 1) = 0;
        puVar2 = (undefined8 *)((long)puVar2 + (long)param_4 * 4);
        if (iVar1 <= iVar4) {
          return;
        }
      }
      lVar3 = 0;
      do {
        *(undefined4 *)((long)puVar2 + lVar3) = *(undefined4 *)(lVar5 + lVar3);
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0xc);
      iVar4 = iVar4 + 3;
      puVar2 = (undefined8 *)((long)puVar2 + (long)param_4 * 4);
      lVar5 = lVar5 + 0xc;
    } while (iVar4 < iVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector3i convert_to_vector<Vector3i>(Variant const&, bool) */

undefined8 convert_to_vector<Vector3i>(Variant *param_1,bool param_2)

{
  int iVar1;
  float fVar2;
  Variant *this;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float in_XMM1_Da;
  float fVar6;
  Variant local_88 [12];
  undefined8 local_7c;
  float local_74;
  float local_58;
  float fStack_54;
  float fStack_50;
  float local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *(int *)param_1;
  if (iVar5 == 0xf) {
    Variant::operator_cast_to_Quaternion((Variant *)local_48);
LAB_00117d50:
    local_58 = (float)(int)local_48[0];
    fStack_54 = (float)(int)local_48[1];
    local_74 = (float)(int)local_48[2];
    local_7c = CONCAT44(fStack_54,local_58);
    fStack_50 = local_74;
  }
  else {
    if (iVar5 == 0xe) {
      uVar3 = Variant::operator_cast_to_Plane(param_1);
      local_48[0] = (float)uVar3;
      local_48[1] = (float)((ulong)uVar3 >> 0x20);
      local_48[2] = in_XMM1_Da;
      goto LAB_00117d50;
    }
    if (iVar5 - 7U < 2) {
      uVar3 = Variant::operator_cast_to_Rect2(param_1);
      local_58 = (float)(int)(float)uVar3;
      fStack_54 = (float)(int)(float)((ulong)uVar3 >> 0x20);
      local_74 = (float)(int)in_XMM1_Da;
      local_7c = CONCAT44(fStack_54,local_58);
      fStack_50 = local_74;
      local_48[0] = local_58;
      local_48[1] = fStack_54;
      local_48[2] = local_74;
    }
    else if (iVar5 == 0x14) {
      Variant::operator_cast_to_Color(param_1);
      fVar2 = extraout_XMM0_Da;
      fVar6 = extraout_XMM0_Db;
      if (param_2) {
        if (_LC114 <= in_XMM1_Da) {
          in_XMM1_Da = powf((float)(((double)in_XMM1_Da + __LC115) * __LC116),_LC117);
        }
        else {
          in_XMM1_Da = in_XMM1_Da * _LC118;
        }
        if (_LC114 <= extraout_XMM0_Db) {
          fVar6 = powf((float)(((double)extraout_XMM0_Db + __LC115) * __LC116),_LC117);
        }
        else {
          fVar6 = extraout_XMM0_Db * _LC118;
        }
        if (_LC114 <= extraout_XMM0_Da) {
          fVar2 = powf((float)(((double)extraout_XMM0_Da + __LC115) * __LC116),_LC117);
        }
        else {
          fVar2 = extraout_XMM0_Da * _LC118;
        }
      }
      local_58 = (float)(int)fVar2;
      fStack_54 = (float)(int)fVar6;
      local_74 = (float)(int)in_XMM1_Da;
      local_7c = CONCAT44(fStack_54,local_58);
      fStack_50 = local_74;
      local_48[0] = local_58;
      local_48[1] = fStack_54;
      local_48[2] = local_74;
    }
    else {
      if (iVar5 < 0x1c) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = Variant::operator_cast_to_Vector3i(param_1);
          return uVar3;
        }
        goto LAB_00117fe1;
      }
      Variant::operator_cast_to_Array(local_88);
      iVar1 = Array::size();
      local_48[2] = 0.0;
      local_48[0] = 0.0;
      local_48[1] = 0.0;
      iVar5 = 3;
      if (iVar1 < 4) {
        iVar5 = iVar1;
      }
      lVar4 = 0;
      if (0 < iVar1) {
        do {
          this = (Variant *)Array::get((int)local_88);
          fVar2 = (float)Variant::operator_cast_to_int(this);
          local_48[lVar4] = fVar2;
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < iVar5);
      }
      local_7c = CONCAT44(local_48[1],local_48[0]);
      local_74 = local_48[2];
      Array::~Array((Array *)local_88);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_7c;
  }
LAB_00117fe1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void write_array_std140<Vector4i, int, int>(Vector<int> const&, int*, int, int) */

void write_array_std140<Vector4i,int,int>(Vector *param_1,int *param_2,int param_3,int param_4)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar3 + -8);
  }
  iVar4 = param_3 * 4;
  pauVar1 = (undefined1 (*) [16])memset(param_2,0,(long)(param_3 * param_4) << 2);
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      while (iVar6 <= iVar5 + 3) {
        iVar5 = iVar5 + 4;
        *pauVar1 = (undefined1  [16])0x0;
        lVar3 = lVar3 + 0x10;
        pauVar1 = (undefined1 (*) [16])(*pauVar1 + (long)param_4 * 4);
        if (iVar4 <= iVar5) {
          return;
        }
      }
      lVar2 = 0;
      do {
        *(undefined4 *)(*pauVar1 + lVar2) = *(undefined4 *)(lVar3 + lVar2);
        lVar2 = lVar2 + 4;
      } while (lVar2 != 0x10);
      iVar5 = iVar5 + 4;
      pauVar1 = (undefined1 (*) [16])(*pauVar1 + (long)param_4 * 4);
      lVar3 = lVar3 + 0x10;
    } while (iVar5 < iVar4);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector4i convert_to_vector<Vector4i>(Variant const&, bool) */

undefined1  [16] convert_to_vector<Vector4i>(Variant *param_1,bool param_2)

{
  int iVar1;
  Variant *this;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  undefined8 uVar4;
  float extraout_XMM0_Db;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_78;
  float fStack_74;
  int iStack_70;
  int iStack_6c;
  Variant local_50 [8];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)param_1;
  if (iVar3 == 0xf) {
    Variant::operator_cast_to_Quaternion((Variant *)local_48);
    local_78 = (float)(int)(float)local_48._0_4_;
    fStack_74 = (float)(int)(float)local_48._4_4_;
    iStack_70 = (int)(float)uStack_40;
    iStack_6c = (int)uStack_40._4_4_;
  }
  else if (iVar3 == 0xe) {
    local_48 = (undefined1  [8])Variant::operator_cast_to_Plane(param_1);
    uStack_40._4_4_ = in_XMM1_Db;
    uStack_40._0_4_ = in_XMM1_Da;
    auVar7 = _local_48;
    local_48._4_4_ = (undefined4)((ulong)local_48 >> 0x20);
    local_78 = (float)(int)(float)local_48._0_4_;
    fStack_74 = (float)(int)(float)local_48._4_4_;
    iStack_70 = (int)in_XMM1_Da;
    iStack_6c = (int)in_XMM1_Db;
    _local_48 = auVar7;
  }
  else if (iVar3 - 7U < 2) {
    uVar4 = Variant::operator_cast_to_Rect2(param_1);
    local_78 = (float)uVar4;
    fStack_74 = (float)((ulong)uVar4 >> 0x20);
    local_78 = (float)(int)local_78;
    fStack_74 = (float)(int)fStack_74;
    iStack_70 = (int)in_XMM1_Da;
    iStack_6c = (int)in_XMM1_Db;
  }
  else if (iVar3 == 0x14) {
    Variant::operator_cast_to_Color(param_1);
    fVar6 = extraout_XMM0_Da;
    fVar5 = extraout_XMM0_Db;
    if (param_2) {
      if (_LC114 <= in_XMM1_Da) {
        in_XMM1_Da = powf((float)(((double)in_XMM1_Da + __LC115) * __LC116),_LC117);
      }
      else {
        in_XMM1_Da = in_XMM1_Da * _LC118;
      }
      if (_LC114 <= extraout_XMM0_Db) {
        fVar5 = powf((float)(((double)extraout_XMM0_Db + __LC115) * __LC116),_LC117);
      }
      else {
        fVar5 = extraout_XMM0_Db * _LC118;
      }
      if (_LC114 <= extraout_XMM0_Da) {
        fVar6 = powf((float)(((double)extraout_XMM0_Da + __LC115) * __LC116),_LC117);
      }
      else {
        fVar6 = extraout_XMM0_Da * _LC118;
      }
    }
    local_78 = (float)(int)fVar6;
    fStack_74 = (float)(int)fVar5;
    iStack_70 = (int)in_XMM1_Da;
    iStack_6c = (int)in_XMM1_Db;
  }
  else {
    if (iVar3 < 0x1c) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        auVar7 = Variant::operator_cast_to_Vector4i(param_1);
        return auVar7;
      }
      goto LAB_0011838f;
    }
    Variant::operator_cast_to_Array(local_50);
    iVar1 = Array::size();
    _local_48 = (undefined1  [16])0x0;
    iVar3 = 4;
    if (iVar1 < 5) {
      iVar3 = iVar1;
    }
    lVar2 = 0;
    if (0 < iVar1) {
      do {
        this = (Variant *)Array::get((int)local_50);
        iVar1 = Variant::operator_cast_to_int(this);
        *(int *)(local_48 + lVar2 * 4) = iVar1;
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < iVar3);
    }
    local_78 = SUB164(_local_48,0);
    fStack_74 = SUB164(_local_48,4);
    iStack_70 = SUB164(_local_48,8);
    iStack_6c = SUB164(_local_48,0xc);
    Array::~Array((Array *)local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._4_4_ = fStack_74;
    auVar7._0_4_ = local_78;
    auVar7._8_4_ = iStack_70;
    auVar7._12_4_ = iStack_6c;
    return auVar7;
  }
LAB_0011838f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void write_array_std140<Vector2, float, float>(Vector<float> const&, float*, int, int) */

void write_array_std140<Vector2,float,float>(Vector *param_1,float *param_2,int param_3,int param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lVar1 + -8);
  }
  puVar2 = (undefined4 *)memset(param_2,0,(long)(param_3 * param_4) << 2);
  if (0 < param_3 * 2) {
    lVar3 = 0;
    do {
      if ((int)lVar3 + 1 < iVar4) {
        *puVar2 = *(undefined4 *)(lVar1 + lVar3 * 4);
        uVar5 = *(undefined4 *)(lVar1 + 4 + lVar3 * 4);
      }
      else {
        *puVar2 = 0;
        uVar5 = 0;
      }
      lVar3 = lVar3 + 2;
      puVar2[1] = uVar5;
      puVar2 = puVar2 + param_4;
    } while ((int)lVar3 < param_3 * 2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector2 convert_to_vector<Vector2>(Variant const&, bool) */

void convert_to_vector<Vector2>(Variant *param_1,bool param_2)

{
  int iVar1;
  Variant *this;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  float fVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float in_XMM1_Da;
  Variant local_50 [8];
  undefined8 local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)param_1;
  if (iVar1 == 0xf) {
    Variant::operator_cast_to_Quaternion((Variant *)local_48);
  }
  else if (iVar1 == 0xe) {
    local_48[0] = Variant::operator_cast_to_Plane(param_1);
  }
  else if (iVar1 - 7U < 2) {
    Variant::operator_cast_to_Rect2(param_1);
  }
  else if (iVar1 == 0x14) {
    Variant::operator_cast_to_Color(param_1);
    if (param_2) {
      if (_LC114 <= in_XMM1_Da) {
        powf((float)(((double)in_XMM1_Da + __LC115) * __LC116),_LC117);
      }
      if (_LC114 <= extraout_XMM0_Db) {
        powf((float)(((double)extraout_XMM0_Db + __LC115) * __LC116),_LC117);
      }
      if (_LC114 <= extraout_XMM0_Da) {
        powf((float)(((double)extraout_XMM0_Da + __LC115) * __LC116),_LC117);
      }
    }
  }
  else {
    if (iVar1 < 0x1c) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Variant::operator_cast_to_Vector2(param_1);
        return;
      }
      goto LAB_001186af;
    }
    Variant::operator_cast_to_Array(local_50);
    iVar1 = Array::size();
    local_48[0] = 0;
    if (0 < iVar1) {
      iVar2 = 2;
      if (iVar1 < 3) {
        iVar2 = iVar1;
      }
      lVar3 = 0;
      do {
        this = (Variant *)Array::get((int)local_50);
        fVar4 = Variant::operator_cast_to_float(this);
        iVar1 = (int)lVar3;
        *(float *)((long)local_48 + lVar3 * 4) = fVar4;
        lVar3 = 1;
      } while (iVar1 + 1 < iVar2);
    }
    Array::~Array((Array *)local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001186af:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void write_array_std140<Vector3, float, float>(Vector<float> const&, float*, int, int) */

void write_array_std140<Vector3,float,float>(Vector *param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar5 + -8);
  }
  iVar1 = param_3 * 3;
  puVar2 = (undefined8 *)memset(param_2,0,(long)(param_3 * param_4) << 2);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      while (iVar6 <= iVar4 + 2) {
        iVar4 = iVar4 + 3;
        *puVar2 = 0;
        lVar5 = lVar5 + 0xc;
        *(undefined4 *)(puVar2 + 1) = 0;
        puVar2 = (undefined8 *)((long)puVar2 + (long)param_4 * 4);
        if (iVar1 <= iVar4) {
          return;
        }
      }
      lVar3 = 0;
      do {
        *(undefined4 *)((long)puVar2 + lVar3) = *(undefined4 *)(lVar5 + lVar3);
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0xc);
      iVar4 = iVar4 + 3;
      puVar2 = (undefined8 *)((long)puVar2 + (long)param_4 * 4);
      lVar5 = lVar5 + 0xc;
    } while (iVar4 < iVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector3 convert_to_vector<Vector3>(Variant const&, bool) */

undefined1  [16] convert_to_vector<Vector3>(Variant *param_1,bool param_2)

{
  int iVar1;
  Variant *this;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  float fVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM1_Da;
  undefined1 auVar5 [16];
  Variant local_80 [8];
  undefined1 local_78 [36];
  float local_54;
  float fStack_50;
  float fStack_4c;
  float local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)param_1;
  if (iVar3 == 0xf) {
    Variant::operator_cast_to_Quaternion((Variant *)local_48);
LAB_00118868:
    fStack_50 = local_48[1];
    fStack_4c = local_48[2];
    local_54 = local_48[0];
    local_78._4_4_ = local_48[1];
    local_78._0_4_ = local_48[0];
    local_78._8_4_ = local_48[2];
  }
  else {
    if (iVar3 == 0xe) {
      auVar5 = Variant::operator_cast_to_Plane(param_1);
      local_48[0] = auVar5._0_4_;
      local_48[1] = auVar5._4_4_;
      local_48[2] = auVar5._8_4_;
      local_48[3] = auVar5._12_4_;
      goto LAB_00118868;
    }
    if (iVar3 - 7U < 2) {
      local_78._0_12_ = Variant::operator_cast_to_Rect2(param_1);
      fStack_4c = SUB124(local_78._0_12_,8);
      local_54 = SUB124(local_78._0_12_,0);
      local_48[1] = SUB124(local_78._0_12_,4);
      fStack_50 = local_48[1];
      local_48[0] = local_54;
      local_48[2] = fStack_4c;
    }
    else if (iVar3 == 0x14) {
      Variant::operator_cast_to_Color(param_1);
      fVar4 = extraout_XMM1_Da;
      local_54 = extraout_XMM0_Da;
      fStack_50 = extraout_XMM0_Db;
      if (param_2) {
        if (_LC114 <= extraout_XMM1_Da) {
          fVar4 = powf((float)(((double)extraout_XMM1_Da + __LC115) * __LC116),_LC117);
        }
        else {
          fVar4 = extraout_XMM1_Da * _LC118;
        }
        if (_LC114 <= extraout_XMM0_Db) {
          fStack_50 = powf((float)(((double)extraout_XMM0_Db + __LC115) * __LC116),_LC117);
        }
        else {
          fStack_50 = extraout_XMM0_Db * _LC118;
        }
        if (_LC114 <= extraout_XMM0_Da) {
          local_54 = powf((float)(((double)extraout_XMM0_Da + __LC115) * __LC116),_LC117);
        }
        else {
          local_54 = extraout_XMM0_Da * _LC118;
        }
      }
      local_78._4_4_ = fStack_50;
      local_78._0_4_ = local_54;
      local_78._8_4_ = fVar4;
      fStack_4c = fVar4;
      local_48[0] = local_54;
      local_48[1] = fStack_50;
      local_48[2] = fVar4;
    }
    else {
      if (iVar3 < 0x1c) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          auVar5 = Variant::operator_cast_to_Vector3(param_1);
          return auVar5;
        }
        goto LAB_00118b0f;
      }
      Variant::operator_cast_to_Array(local_80);
      iVar1 = Array::size();
      local_48[2] = 0.0;
      local_48[0] = 0.0;
      local_48[1] = 0.0;
      iVar3 = 3;
      if (iVar1 < 4) {
        iVar3 = iVar1;
      }
      lVar2 = 0;
      if (0 < iVar1) {
        do {
          this = (Variant *)Array::get((int)local_80);
          fVar4 = Variant::operator_cast_to_float(this);
          local_48[lVar2] = fVar4;
          lVar2 = lVar2 + 1;
        } while ((int)lVar2 < iVar3);
      }
      local_78._0_8_ = CONCAT44(local_48[1],local_48[0]);
      local_78._8_4_ = local_48[2];
      Array::~Array((Array *)local_80);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._12_4_ = 0;
    auVar5._0_12_ = local_78._0_12_;
    return auVar5;
  }
LAB_00118b0f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void write_array_std140<Vector4, float, float>(Vector<float> const&, float*, int, int) */

void write_array_std140<Vector4,float,float>(Vector *param_1,float *param_2,int param_3,int param_4)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(lVar3 + -8);
  }
  iVar5 = param_3 * 4;
  pauVar1 = (undefined1 (*) [16])memset(param_2,0,(long)(param_3 * param_4) << 2);
  if (0 < iVar5) {
    iVar4 = 0;
    do {
      while (iVar6 <= iVar4 + 3) {
        iVar4 = iVar4 + 4;
        *pauVar1 = (undefined1  [16])0x0;
        lVar3 = lVar3 + 0x10;
        pauVar1 = (undefined1 (*) [16])(*pauVar1 + (long)param_4 * 4);
        if (iVar5 <= iVar4) {
          return;
        }
      }
      lVar2 = 0;
      do {
        *(undefined4 *)(*pauVar1 + lVar2) = *(undefined4 *)(lVar3 + lVar2);
        lVar2 = lVar2 + 4;
      } while (lVar2 != 0x10);
      iVar4 = iVar4 + 4;
      pauVar1 = (undefined1 (*) [16])(*pauVar1 + (long)param_4 * 4);
      lVar3 = lVar3 + 0x10;
    } while (iVar4 < iVar5);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector4 convert_to_vector<Vector4>(Variant const&, bool) */

undefined1  [16] convert_to_vector<Vector4>(Variant *param_1,bool param_2)

{
  int iVar1;
  Variant *this;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auVar5 [8];
  long in_FS_OFFSET;
  float fVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM1_Da;
  undefined4 extraout_XMM1_Db;
  undefined1 auVar7 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  Variant local_70 [8];
  undefined1 local_68 [8];
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *(int *)param_1;
  if (iVar4 == 0xf) {
    Variant::operator_cast_to_Quaternion((Variant *)local_68);
    local_48._8_8_ = uStack_60;
    local_48._0_8_ = local_68;
LAB_00118cb0:
    local_68 = local_48._0_8_;
    auVar5 = local_68;
    local_68._0_4_ = local_48._0_4_;
    local_68._4_4_ = local_48._4_4_;
    uStack_60._0_4_ = local_48._8_4_;
    uStack_60._4_4_ = local_48._12_4_;
    local_58 = (float)local_68._0_4_;
    fStack_54 = (float)local_68._4_4_;
    fStack_50 = (float)uStack_60;
    uStack_4c = uStack_60._4_4_;
    uVar3 = local_48._8_8_;
    _local_68 = local_48;
  }
  else {
    if (iVar4 == 0xe) {
      local_48 = Variant::operator_cast_to_Plane(param_1);
      goto LAB_00118cb0;
    }
    if (iVar4 - 7U < 2) {
      local_48 = Variant::operator_cast_to_Rect2(param_1);
      local_98 = local_48._0_4_;
      local_58 = local_98;
      fStack_94 = local_48._4_4_;
      fStack_54 = fStack_94;
      fStack_90 = local_48._8_4_;
      fStack_50 = fStack_90;
      uStack_8c = local_48._12_4_;
      uStack_4c = uStack_8c;
      uVar3 = local_48._8_8_;
      auVar5 = (undefined1  [8])local_48._0_8_;
    }
    else if (iVar4 == 0x14) {
      Variant::operator_cast_to_Color(param_1);
      fVar6 = extraout_XMM1_Da;
      local_58 = extraout_XMM0_Da;
      fStack_54 = extraout_XMM0_Db;
      if (param_2) {
        if (_LC114 <= extraout_XMM1_Da) {
          fVar6 = powf((float)(((double)extraout_XMM1_Da + __LC115) * __LC116),_LC117);
        }
        else {
          fVar6 = extraout_XMM1_Da * _LC118;
        }
        if (_LC114 <= extraout_XMM0_Db) {
          fStack_54 = powf((float)(((double)extraout_XMM0_Db + __LC115) * __LC116),_LC117);
        }
        else {
          fStack_54 = extraout_XMM0_Db * _LC118;
        }
        if (_LC114 <= extraout_XMM0_Da) {
          local_58 = powf((float)(((double)extraout_XMM0_Da + __LC115) * __LC116),_LC117);
        }
        else {
          local_58 = extraout_XMM0_Da * _LC118;
        }
      }
      local_48._8_4_ = fVar6;
      local_48._4_4_ = fStack_54;
      local_48._0_4_ = local_58;
      auVar5 = (undefined1  [8])local_48._0_8_;
      local_48._12_4_ = extraout_XMM1_Db;
      uVar3 = local_48._8_8_;
      fStack_50 = fVar6;
      uStack_4c = extraout_XMM1_Db;
    }
    else {
      if (iVar4 < 0x1c) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          auVar7 = Variant::operator_cast_to_Vector4(param_1);
          return auVar7;
        }
        goto LAB_00118f1f;
      }
      Variant::operator_cast_to_Array(local_70);
      iVar1 = Array::size();
      local_48 = (undefined1  [16])0x0;
      iVar4 = 4;
      if (iVar1 < 5) {
        iVar4 = iVar1;
      }
      lVar2 = 0;
      if (0 < iVar1) {
        do {
          this = (Variant *)Array::get((int)local_70);
          fVar6 = Variant::operator_cast_to_float(this);
          *(float *)(local_48 + lVar2 * 4) = fVar6;
          lVar2 = lVar2 + 1;
        } while ((int)lVar2 < iVar4);
      }
      auVar5 = (undefined1  [8])local_48._0_8_;
      uVar3 = local_48._8_8_;
      Array::~Array((Array *)local_70);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar7._8_8_ = uVar3;
    auVar7._0_8_ = auVar5;
    return auVar7;
  }
LAB_00118f1f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void write_array_std140<Projection, float, float>(Vector<float> const&, float*, int, int) */

void write_array_std140<Projection,float,float>
               (Vector *param_1,float *param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar2 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lVar2 + -8);
  }
  Projection::Projection((Projection *)&local_88);
  memset(param_2,0,(long)(param_3 * param_4) << 2);
  if (0 < param_3 << 4) {
    iVar3 = 0;
    do {
      while (iVar3 + 0xf < iVar4) {
        lVar1 = 0;
        do {
          *(undefined4 *)((long)param_2 + lVar1) = *(undefined4 *)(lVar2 + lVar1);
          lVar1 = lVar1 + 4;
        } while (lVar1 != 0x40);
        iVar3 = iVar3 + 0x10;
        param_2 = param_2 + param_4;
        lVar2 = lVar2 + 0x40;
        if (param_3 * 0x10 <= iVar3) goto LAB_0011902b;
      }
      iVar3 = iVar3 + 0x10;
      lVar2 = lVar2 + 0x40;
      *(undefined8 *)param_2 = local_88;
      *(undefined8 *)(param_2 + 2) = uStack_80;
      *(undefined8 *)(param_2 + 4) = local_78;
      *(undefined8 *)(param_2 + 6) = uStack_70;
      *(undefined8 *)(param_2 + 8) = local_68;
      *(undefined8 *)(param_2 + 10) = uStack_60;
      *(undefined8 *)(param_2 + 0xc) = local_58;
      *(undefined8 *)(param_2 + 0xe) = uStack_50;
      param_2 = param_2 + param_4;
    } while (iVar3 < param_3 * 0x10);
  }
LAB_0011902b:
  Projection::~Projection((Projection *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, unsigned long> > >::insert(StringName const&,
   unsigned long const&, bool) */

StringName *
HashMap<StringName,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,unsigned_long>>>
::insert(StringName *param_1,ulong *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  void *pvVar5;
  void *__s;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong *puVar30;
  undefined8 uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  void *__s_00;
  long lVar36;
  ulong uVar37;
  void *pvVar38;
  ulong *in_RCX;
  int iVar39;
  undefined7 in_register_00000011;
  StringName *pSVar40;
  long lVar41;
  undefined8 uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  ulong *puVar46;
  long in_FS_OFFSET;
  bool bVar47;
  ulong *local_b0;
  long local_58;
  ulong local_50;
  long local_40;
  
  pSVar40 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar32 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[5] * 4);
  if (param_2[1] == 0) {
    uVar35 = (ulong)uVar32;
    uVar34 = uVar35 * 4;
    uVar3 = uVar35 * 8;
    uVar37 = Memory::alloc_static(uVar34,false);
    param_2[2] = uVar37;
    pvVar38 = (void *)Memory::alloc_static(uVar3,false);
    param_2[1] = (ulong)pvVar38;
    if (uVar32 != 0) {
      pvVar5 = (void *)param_2[2];
      if ((pvVar5 < (void *)((long)pvVar38 + uVar3)) && (pvVar38 < (void *)((long)pvVar5 + uVar34)))
      {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar34 * 4) = 0;
          *(undefined8 *)((long)pvVar38 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar35 != uVar34);
      }
      else {
        memset(pvVar5,0,uVar34);
        memset(pvVar38,0,uVar3);
      }
      goto LAB_001190b8;
    }
    iVar39 = *(int *)((long)param_2 + 0x2c);
    if (pvVar38 == (void *)0x0) goto LAB_001191e0;
    if (*(int *)((long)param_2 + 0x2c) != 0) goto LAB_001190c4;
LAB_00119206:
    uVar32 = (uint)param_2[5];
    if (uVar32 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_b0 = (ulong *)0x0;
      goto LAB_00119199;
    }
    uVar34 = (ulong)(uVar32 + 1);
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
    if (uVar32 + 1 < 2) {
      uVar34 = 2;
    }
    uVar32 = *(uint *)(hash_table_size_primes + uVar34 * 4);
    uVar37 = (ulong)uVar32;
    *(int *)(param_2 + 5) = (int)uVar34;
    pvVar38 = (void *)param_2[1];
    uVar34 = uVar37 * 4;
    uVar3 = uVar37 * 8;
    pvVar5 = (void *)param_2[2];
    uVar35 = Memory::alloc_static(uVar34,false);
    param_2[2] = uVar35;
    __s_00 = (void *)Memory::alloc_static(uVar3,false);
    param_2[1] = (ulong)__s_00;
    if (uVar32 != 0) {
      __s = (void *)param_2[2];
      if ((__s < (void *)((long)__s_00 + uVar3)) && (__s_00 < (void *)((long)__s + uVar34))) {
        uVar34 = 0;
        do {
          *(undefined4 *)((long)__s + uVar34 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar34 * 8) = 0;
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar37);
      }
      else {
        memset(__s,0,uVar34);
        memset(__s_00,0,uVar3);
      }
    }
    if (uVar4 != 0) {
      uVar34 = 0;
      do {
        uVar32 = *(uint *)((long)pvVar5 + uVar34 * 4);
        if (uVar32 != 0) {
          uVar3 = param_2[2];
          uVar43 = 0;
          uVar33 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[5] * 4);
          uVar35 = CONCAT44(0,uVar33);
          lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[5] * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar32 * lVar36;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar35;
          lVar41 = SUB168(auVar10 * auVar22,8);
          puVar1 = (uint *)(uVar3 + lVar41 * 4);
          iVar39 = SUB164(auVar10 * auVar22,8);
          uVar44 = *puVar1;
          uVar31 = *(undefined8 *)((long)pvVar38 + uVar34 * 8);
          while (uVar44 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar44 * lVar36;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar35;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar33 + iVar39) - SUB164(auVar11 * auVar23,8)) * lVar36;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar35;
            uVar45 = SUB164(auVar12 * auVar24,8);
            uVar42 = uVar31;
            if (uVar45 < uVar43) {
              *puVar1 = uVar32;
              puVar2 = (undefined8 *)((long)__s_00 + lVar41 * 8);
              uVar42 = *puVar2;
              *puVar2 = uVar31;
              uVar32 = uVar44;
              uVar43 = uVar45;
            }
            uVar43 = uVar43 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar39 + 1) * lVar36;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar35;
            lVar41 = SUB168(auVar13 * auVar25,8);
            puVar1 = (uint *)(uVar3 + lVar41 * 4);
            iVar39 = SUB164(auVar13 * auVar25,8);
            uVar31 = uVar42;
            uVar44 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar41 * 8) = uVar31;
          *puVar1 = uVar32;
          *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
        }
        uVar34 = uVar34 + 1;
      } while (uVar4 != uVar34);
      Memory::free_static(pvVar38,false);
      Memory::free_static(pvVar5,false);
    }
  }
  else {
LAB_001190b8:
    iVar39 = *(int *)((long)param_2 + 0x2c);
    if (iVar39 != 0) {
LAB_001190c4:
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[5] * 4);
      uVar34 = CONCAT44(0,uVar4);
      lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[5] * 8);
      if (*(long *)pSVar40 == 0) {
        uVar33 = StringName::get_empty_hash();
      }
      else {
        uVar33 = *(uint *)(*(long *)pSVar40 + 0x20);
      }
      if (uVar33 == 0) {
        uVar33 = 1;
      }
      uVar45 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar33 * lVar36;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar34;
      lVar41 = SUB168(auVar6 * auVar18,8);
      uVar44 = *(uint *)(param_2[2] + lVar41 * 4);
      uVar43 = SUB164(auVar6 * auVar18,8);
      if (uVar44 != 0) {
        do {
          if ((uVar33 == uVar44) &&
             (*(long *)(*(long *)(param_2[1] + lVar41 * 8) + 0x10) == *(long *)pSVar40)) {
            local_b0 = *(ulong **)(param_2[1] + (ulong)uVar43 * 8);
            local_b0[3] = *in_RCX;
            goto LAB_00119199;
          }
          uVar45 = uVar45 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar43 + 1) * lVar36;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar34;
          lVar41 = SUB168(auVar7 * auVar19,8);
          uVar44 = *(uint *)(param_2[2] + lVar41 * 4);
          uVar43 = SUB164(auVar7 * auVar19,8);
        } while ((uVar44 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar44 * lVar36, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar34, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar4 + uVar43) - SUB164(auVar8 * auVar20,8)) * lVar36,
                auVar21._8_8_ = 0, auVar21._0_8_ = uVar34, uVar45 <= SUB164(auVar9 * auVar21,8)));
      }
      iVar39 = *(int *)((long)param_2 + 0x2c);
    }
LAB_001191e0:
    if ((float)uVar32 * __LC101 < (float)(iVar39 + 1)) goto LAB_00119206;
  }
  StringName::StringName((StringName *)&local_58,pSVar40);
  local_50 = *in_RCX;
  local_b0 = (ulong *)operator_new(0x20,"");
  *local_b0 = 0;
  local_b0[1] = 0;
  StringName::StringName((StringName *)(local_b0 + 2),(StringName *)&local_58);
  bVar47 = StringName::configured != '\0';
  local_b0[3] = local_50;
  if ((bVar47) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar2 = (undefined8 *)param_2[4];
  if (puVar2 == (undefined8 *)0x0) {
    param_2[3] = (ulong)local_b0;
    param_2[4] = (ulong)local_b0;
LAB_001194a7:
    lVar36 = *(long *)pSVar40;
    if (lVar36 != 0) goto LAB_001194b3;
LAB_001195b4:
    uVar32 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      uVar34 = param_2[3];
      *(ulong **)(uVar34 + 8) = local_b0;
      *local_b0 = uVar34;
      param_2[3] = (ulong)local_b0;
      goto LAB_001194a7;
    }
    *puVar2 = local_b0;
    local_b0[1] = (ulong)puVar2;
    lVar36 = *(long *)pSVar40;
    param_2[4] = (ulong)local_b0;
    if (lVar36 == 0) goto LAB_001195b4;
LAB_001194b3:
    uVar32 = *(uint *)(lVar36 + 0x20);
  }
  uVar34 = param_2[2];
  if (uVar32 == 0) {
    uVar32 = 1;
  }
  uVar35 = (ulong)uVar32;
  uVar44 = 0;
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)(uint)param_2[5] * 4);
  uVar37 = CONCAT44(0,uVar4);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)param_2[5] * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar35 * lVar36;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar37;
  lVar41 = SUB168(auVar14 * auVar26,8);
  uVar3 = param_2[1];
  puVar1 = (uint *)(uVar34 + lVar41 * 4);
  iVar39 = SUB164(auVar14 * auVar26,8);
  uVar33 = *puVar1;
  puVar30 = local_b0;
  while (uVar33 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar33 * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar37;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar4 + iVar39) - SUB164(auVar15 * auVar27,8)) * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar37;
    uVar32 = SUB164(auVar16 * auVar28,8);
    puVar46 = puVar30;
    if (uVar32 < uVar44) {
      *puVar1 = (uint)uVar35;
      uVar35 = (ulong)uVar33;
      puVar2 = (undefined8 *)(uVar3 + lVar41 * 8);
      puVar46 = (ulong *)*puVar2;
      *puVar2 = puVar30;
      uVar44 = uVar32;
    }
    uVar32 = (uint)uVar35;
    uVar44 = uVar44 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar39 + 1) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar37;
    lVar41 = SUB168(auVar17 * auVar29,8);
    puVar1 = (uint *)(uVar34 + lVar41 * 4);
    iVar39 = SUB164(auVar17 * auVar29,8);
    puVar30 = puVar46;
    uVar33 = *puVar1;
  }
  *(ulong **)(uVar3 + lVar41 * 8) = puVar30;
  *puVar1 = uVar32;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_00119199:
  *(ulong **)param_1 = local_b0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >::insert(RID const&) */

undefined1  [16]
HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(RID *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  lVar34 = *in_RSI;
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    local_70 = *in_RDX;
    uVar32 = *(uint *)(in_RSI + 4);
    if (lVar34 != 0) goto LAB_0011976f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_70 = *in_RDX;
LAB_0011976f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = local_70 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(lVar34 + uStack_98 * 8) == local_70) goto LAB_00119c21;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC101 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      lVar34 = *in_RSI;
      goto LAB_00119c21;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  lVar36 = *in_RDX;
  *(long *)(lVar34 + uVar42 * 8) = lVar36;
  uVar33 = lVar36 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar36 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar6 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar36);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar2;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar2;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar6 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar36 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar36 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar36 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar36);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar6 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar36) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_00119c21:
  *(uint *)(param_1 + 0xc) = uVar37;
  *(long *)param_1 = lVar34;
  *(uint *)(param_1 + 8) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* RendererRD::MaterialStorage::Material::~Material() */

void __thiscall RendererRD::MaterialStorage::Material::~Material(Material *this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  Dependency::~Dependency((Dependency *)(this + 0x88));
  plVar2 = *(long **)(this + 0x68);
  if (plVar2 != (long *)0x0) {
    lVar4 = *(long *)(this + 0x78);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(this + 0x80);
    }
    lVar3 = *(long *)(this + 0x80);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar4;
    }
    if (this + 0x68 == (Material *)*plVar2) {
      *plVar2 = *(long *)(this + 0x78);
    }
    if (this + 0x68 == (Material *)plVar2[1]) {
      plVar2[1] = lVar3;
    }
  }
  pvVar5 = *(void **)(this + 0x30);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x54) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x50) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x54) = 0;
      *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x38) + lVar4) != 0) {
          pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
          *(int *)(*(long *)(this + 0x38) + lVar4) = 0;
          if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar5,false);
          pvVar5 = *(void **)(this + 0x30);
          *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x54) = 0;
      *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x38),false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, RendererRD::MaterialStorage::GlobalShaderUniforms::Variable,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName,
   RendererRD::MaterialStorage::GlobalShaderUniforms::Variable> > >::operator[](StringName const&)
    */

undefined8 * __thiscall
HashMap<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable>>>
::operator[](HashMap<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,RendererRD::MaterialStorage::GlobalShaderUniforms::Variable>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 *puVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  long lVar42;
  ulong uVar43;
  long lVar44;
  void *pvVar45;
  long lVar46;
  int iVar47;
  long lVar48;
  long lVar49;
  undefined8 *puVar50;
  ulong uVar51;
  undefined8 uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  undefined8 *puVar56;
  long in_FS_OFFSET;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  int local_f0 [6];
  undefined8 uStack_d8;
  undefined1 local_c8 [16];
  long local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined4 local_88;
  int local_80 [6];
  int local_68 [6];
  undefined8 local_50;
  long local_40;
  
  lVar42 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (lVar42 == 0) {
LAB_0011a020:
    local_118 = 2;
    local_f0[0] = 0;
    local_f0[1] = 0;
    uStack_d8 = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    local_110 = (undefined1  [16])0x0;
    local_138 = (undefined1  [16])0x0;
    local_128 = (undefined1  [16])0x0;
    local_100 = (undefined1  [16])0x0;
    local_f0[2] = 0;
    local_f0[3] = 0;
    local_f0[4] = 0;
    local_f0[5] = 0;
    if (lVar42 != 0) goto LAB_0011a07b;
    uVar51 = (ulong)uVar38;
    uVar40 = uVar51 * 4;
    uVar43 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar45 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = pvVar45;
    if (uVar38 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar45 + uVar43)) && (pvVar45 < (void *)((long)pvVar3 + uVar40))
         ) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)pvVar45 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
      }
      else {
        memset(pvVar3,0,uVar40);
        memset(pvVar45,0,uVar43);
      }
      goto LAB_0011a07b;
    }
    iVar47 = *(int *)(this + 0x2c);
    if (pvVar45 == (void *)0x0) goto LAB_0011a256;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011a087;
LAB_0011a27c:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar50 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011a977;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar51 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar45 = *(void **)(this + 8);
    uVar40 = uVar51 * 4;
    uVar43 = uVar51 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar37 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar42 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar39);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar38 * lVar49;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar43;
          lVar48 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar42 + lVar48 * 4);
          iVar47 = SUB164(auVar12 * auVar28,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar45 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar53 * lVar49;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar43;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar39 + iVar47) - SUB164(auVar13 * auVar29,8)) * lVar49;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar43;
            uVar55 = SUB164(auVar14 * auVar30,8);
            uVar52 = uVar41;
            if (uVar55 < uVar54) {
              *puVar1 = uVar38;
              puVar50 = (undefined8 *)((long)__s_00 + lVar48 * 8);
              uVar52 = *puVar50;
              *puVar50 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar55;
            }
            uVar54 = uVar54 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar47 + 1) * lVar49;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar43;
            lVar48 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar42 + lVar48 * 4);
            iVar47 = SUB164(auVar15 * auVar31,8);
            uVar41 = uVar52;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar48 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar37 != uVar40);
      Memory::free_static(pvVar45,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar37 = StringName::get_empty_hash();
        lVar42 = *(long *)(this + 8);
      }
      else {
        uVar37 = *(uint *)(*(long *)param_1 + 0x20);
      }
      uVar40 = CONCAT44(0,uVar38);
      if (uVar37 == 0) {
        uVar37 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar37 * lVar49;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar48 = SUB168(auVar4 * auVar20,8);
      uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
      uVar53 = SUB164(auVar4 * auVar20,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar37) &&
             (*(long *)(*(long *)(lVar42 + lVar48 * 8) + 0x10) == *(long *)param_1)) {
            puVar50 = (undefined8 *)(*(long *)(lVar42 + (ulong)uVar53 * 8) + 0x18);
            goto LAB_00119fec;
          }
          uVar54 = uVar54 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar40;
          lVar48 = SUB168(auVar5 * auVar21,8);
          uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
          uVar53 = SUB164(auVar5 * auVar21,8);
        } while ((uVar39 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar39 * lVar49, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar40, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar6 * auVar22,8)) * lVar49,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar40, uVar54 <= SUB164(auVar7 * auVar23,8)));
      }
      goto LAB_0011a020;
    }
    local_118 = 2;
    local_f0[0] = 0;
    local_f0[1] = 0;
    uStack_d8 = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    local_110 = (undefined1  [16])0x0;
    local_138 = (undefined1  [16])0x0;
    local_128 = (undefined1  [16])0x0;
    local_100 = (undefined1  [16])0x0;
    local_f0[2] = 0;
    local_f0[3] = 0;
    local_f0[4] = 0;
    local_f0[5] = 0;
LAB_0011a07b:
    iVar47 = *(int *)(this + 0x2c);
    if (iVar47 != 0) {
LAB_0011a087:
      uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar40 = CONCAT44(0,uVar37);
      lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      uVar55 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar39 * lVar42;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar40;
      lVar49 = SUB168(auVar8 * auVar24,8);
      uVar53 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
      uVar54 = SUB164(auVar8 * auVar24,8);
      if (uVar53 != 0) {
        do {
          if ((uVar53 == uVar39) &&
             (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1)) {
            lVar42 = *(long *)(*(long *)(this + 8) + (ulong)uVar54 * 8);
            if (local_138 != (undefined1 *)(lVar42 + 0x18)) {
              pvVar45 = *(void **)(lVar42 + 0x18);
              if (pvVar45 != (void *)0x0) {
                if (*(int *)(lVar42 + 0x3c) != 0) {
                  if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar42 + 0x38) * 4) != 0)
                  {
                    memset(*(void **)(lVar42 + 0x30),0,
                           (ulong)*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(lVar42 + 0x38) * 4) * 4);
                  }
                  *(undefined4 *)(lVar42 + 0x3c) = 0;
                }
                Memory::free_static(pvVar45,false);
                Memory::free_static(*(void **)(lVar42 + 0x28),false);
                Memory::free_static(*(void **)(lVar42 + 0x20),false);
                Memory::free_static(*(void **)(lVar42 + 0x30),false);
                *(undefined1 (*) [16])(lVar42 + 0x18) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(lVar42 + 0x28) = (undefined1  [16])0x0;
              }
              *(ulong *)(lVar42 + 0x38) = local_118;
              if ((int)(local_118 >> 0x20) != 0) {
                uVar38 = *(uint *)(hash_table_size_primes + (local_118 & 0xffffffff) * 4);
                uVar40 = (ulong)uVar38 * 4;
                uVar41 = Memory::alloc_static(uVar40,false);
                *(undefined8 *)(lVar42 + 0x30) = uVar41;
                uVar41 = Memory::alloc_static((ulong)uVar38 * 8,false);
                *(undefined8 *)(lVar42 + 0x18) = uVar41;
                uVar41 = Memory::alloc_static(uVar40,false);
                *(undefined8 *)(lVar42 + 0x28) = uVar41;
                lVar49 = Memory::alloc_static(uVar40,false);
                *(long *)(lVar42 + 0x20) = lVar49;
                if (*(int *)(lVar42 + 0x3c) != 0) {
                  lVar48 = *(long *)(lVar42 + 0x18);
                  lVar46 = 0;
                  lVar44 = *(long *)(lVar42 + 0x28);
                  do {
                    *(undefined8 *)(lVar48 + lVar46 * 8) =
                         *(undefined8 *)(local_138._0_8_ + lVar46 * 8);
                    *(undefined4 *)(lVar44 + lVar46 * 4) =
                         *(undefined4 *)(local_128._0_8_ + lVar46 * 4);
                    lVar46 = lVar46 + 1;
                  } while ((uint)lVar46 < *(uint *)(lVar42 + 0x3c));
                }
                if (uVar38 != 0) {
                  lVar48 = *(long *)(lVar42 + 0x30);
                  lVar44 = 0;
                  do {
                    *(undefined4 *)(lVar48 + lVar44) = *(undefined4 *)(local_128._8_8_ + lVar44);
                    *(undefined4 *)(lVar49 + lVar44) = *(undefined4 *)(local_138._8_8_ + lVar44);
                    lVar44 = lVar44 + 4;
                  } while (uVar40 - lVar44 != 0);
                }
              }
            }
            *(undefined4 *)(lVar42 + 0x40) = local_110._0_4_;
            Variant::operator=((Variant *)(lVar42 + 0x48),(Variant *)(local_110 + 8));
            Variant::operator=((Variant *)(lVar42 + 0x60),(Variant *)local_f0);
            *(undefined8 *)(lVar42 + 0x78) = uStack_d8;
            puVar50 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar54 * 8);
            goto LAB_0011a977;
          }
          uVar55 = uVar55 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar54 + 1) * lVar42;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar40;
          lVar49 = SUB168(auVar9 * auVar25,8);
          uVar53 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
          uVar54 = SUB164(auVar9 * auVar25,8);
        } while ((uVar53 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar53 * lVar42, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar40, auVar11._8_8_ = 0,
                auVar11._0_8_ = (ulong)((uVar37 + uVar54) - SUB164(auVar10 * auVar26,8)) * lVar42,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar40, uVar55 <= SUB164(auVar11 * auVar27,8)));
      }
      iVar47 = *(int *)(this + 0x2c);
    }
    uVar51 = (ulong)uVar38;
LAB_0011a256:
    if ((float)uVar51 * __LC101 < (float)(iVar47 + 1)) goto LAB_0011a27c;
  }
  local_c8 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_b8,param_1);
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = local_118;
  if ((int)(local_118 >> 0x20) != 0) {
    uVar38 = *(uint *)(hash_table_size_primes + (local_118 & 0xffffffff) * 4);
    uVar40 = (ulong)uVar38 * 4;
    uVar41 = Memory::alloc_static(uVar40,false);
    local_a0._8_8_ = uVar41;
    uVar41 = Memory::alloc_static((ulong)uVar38 * 8,false);
    local_b0._0_8_ = uVar41;
    local_a0._0_8_ = Memory::alloc_static(uVar40,false);
    lVar42 = Memory::alloc_static(uVar40,false);
    local_b0._8_8_ = lVar42;
    if (local_90._4_4_ != 0) {
      lVar49 = 0;
      do {
        *(undefined8 *)(local_b0._0_8_ + lVar49 * 8) = *(undefined8 *)(local_138._0_8_ + lVar49 * 8)
        ;
        *(undefined4 *)(local_a0._0_8_ + lVar49 * 4) = *(undefined4 *)(local_128._0_8_ + lVar49 * 4)
        ;
        lVar49 = lVar49 + 1;
      } while ((uint)lVar49 < local_90._4_4_);
    }
    if (uVar38 != 0) {
      uVar43 = 0;
      do {
        *(undefined4 *)(local_a0._8_8_ + uVar43) = *(undefined4 *)(local_128._8_8_ + uVar43);
        *(undefined4 *)(lVar42 + uVar43) = *(undefined4 *)(local_138._8_8_ + uVar43);
        uVar43 = uVar43 + 4;
      } while (uVar43 != uVar40);
    }
  }
  local_88 = local_110._0_4_;
  Variant::Variant((Variant *)local_80,(Variant *)(local_110 + 8));
  Variant::Variant((Variant *)local_68,(Variant *)local_f0);
  local_50 = uStack_d8;
  puVar50 = (undefined8 *)operator_new(0x80,"");
  *puVar50 = local_c8._0_8_;
  puVar50[1] = local_c8._8_8_;
  StringName::StringName((StringName *)(puVar50 + 2),(StringName *)&local_b8);
  puVar50[7] = 0;
  *(undefined1 (*) [16])(puVar50 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar50 + 5) = (undefined1  [16])0x0;
  puVar50[7] = local_90;
  if ((int)(local_90 >> 0x20) != 0) {
    uVar38 = *(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4);
    uVar40 = (ulong)uVar38 * 4;
    uVar41 = Memory::alloc_static(uVar40,false);
    puVar50[6] = uVar41;
    uVar41 = Memory::alloc_static((ulong)uVar38 * 8,false);
    puVar50[3] = uVar41;
    uVar41 = Memory::alloc_static(uVar40,false);
    puVar50[5] = uVar41;
    lVar42 = Memory::alloc_static(uVar40,false);
    puVar50[4] = lVar42;
    if (*(int *)((long)puVar50 + 0x3c) != 0) {
      lVar49 = puVar50[3];
      lVar44 = 0;
      lVar48 = puVar50[5];
      do {
        *(undefined8 *)(lVar49 + lVar44 * 8) = *(undefined8 *)(local_b0._0_8_ + lVar44 * 8);
        *(undefined4 *)(lVar48 + lVar44 * 4) = *(undefined4 *)(local_a0._0_8_ + lVar44 * 4);
        lVar44 = lVar44 + 1;
      } while ((uint)lVar44 < *(uint *)((long)puVar50 + 0x3c));
    }
    if (uVar38 != 0) {
      lVar49 = puVar50[6];
      uVar43 = 0;
      do {
        *(undefined4 *)(lVar49 + uVar43) = *(undefined4 *)(local_a0._8_8_ + uVar43);
        *(undefined4 *)(lVar42 + uVar43) = *(undefined4 *)(local_b0._8_8_ + uVar43);
        uVar43 = uVar43 + 4;
      } while (uVar43 != uVar40);
    }
  }
  *(undefined4 *)(puVar50 + 8) = local_88;
  Variant::Variant((Variant *)(puVar50 + 9),(Variant *)local_80);
  Variant::Variant((Variant *)(puVar50 + 0xc),(Variant *)local_68);
  puVar50[0xf] = local_50;
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_80[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar41 = local_b0._0_8_;
  if ((void *)local_b0._0_8_ != (void *)0x0) {
    if (local_90._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4) != 0) {
        memset((void *)local_a0._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4) * 4);
      }
      local_90 = local_90 & 0xffffffff;
    }
    Memory::free_static((void *)uVar41,false);
    Memory::free_static((void *)local_a0._0_8_,false);
    Memory::free_static((void *)local_b0._8_8_,false);
    Memory::free_static((void *)local_a0._8_8_,false);
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    lVar42 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar50;
    *(undefined8 **)(this + 0x20) = puVar50;
    if (lVar42 == 0) goto LAB_0011aaac;
LAB_0011a880:
    uVar38 = *(uint *)(lVar42 + 0x20);
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar50;
    puVar50[1] = *(undefined8 *)(this + 0x20);
    lVar42 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar50;
    if (lVar42 != 0) goto LAB_0011a880;
LAB_0011aaac:
    uVar38 = StringName::get_empty_hash();
  }
  lVar42 = *(long *)(this + 0x10);
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar37);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar40 * lVar49;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar43;
  lVar44 = SUB168(auVar16 * auVar32,8);
  lVar48 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar42 + lVar44 * 4);
  iVar47 = SUB164(auVar16 * auVar32,8);
  uVar39 = *puVar1;
  puVar36 = puVar50;
  while (uVar39 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar39 * lVar49;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar43;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar37 + iVar47) - SUB164(auVar17 * auVar33,8)) * lVar49;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar43;
    uVar38 = SUB164(auVar18 * auVar34,8);
    puVar56 = puVar36;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar39;
      puVar2 = (undefined8 *)(lVar48 + lVar44 * 8);
      puVar56 = (undefined8 *)*puVar2;
      *puVar2 = puVar36;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar47 + 1) * lVar49;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar43;
    lVar44 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar42 + lVar44 * 4);
    iVar47 = SUB164(auVar19 * auVar35,8);
    puVar36 = puVar56;
    uVar39 = *puVar1;
  }
  *(undefined8 **)(lVar48 + lVar44 * 8) = puVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011a977:
  puVar50 = puVar50 + 3;
  if (Variant::needs_deinit[local_f0[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_110._8_4_] != '\0') {
    Variant::_clear_internal();
  }
  uVar41 = local_138._0_8_;
  if ((void *)local_138._0_8_ != (void *)0x0) {
    if (local_118._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_118 & 0xffffffff) * 4) != 0) {
        memset((void *)local_128._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_118 & 0xffffffff) * 4) * 4);
      }
      local_118 = local_118 & 0xffffffff;
    }
    Memory::free_static((void *)uVar41,false);
    Memory::free_static((void *)local_128._0_8_,false);
    Memory::free_static((void *)local_138._8_8_,false);
    Memory::free_static((void *)local_128._8_8_,false);
  }
LAB_00119fec:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar50;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<RID, int, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, int> > >::operator[](RID const&) */

undefined1  [16] __thiscall
HashMap<RID,int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,int>>>
::operator[](HashMap<RID,int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,int>>>
             *this,RID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  int iVar42;
  uint uVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  ulong uVar54;
  ulong uVar55;
  long lVar56;
  undefined1 (*pauVar57) [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  long lStack_b0;
  void *local_90;
  
  local_90 = *(void **)(this + 8);
  uVar39 = (ulong)*(uint *)(this + 0x28);
  lVar56 = *(long *)param_1;
  uVar47 = *(uint *)(hash_table_size_primes + uVar39 * 4);
  uVar55 = CONCAT44(0,uVar47);
  if (local_90 == (void *)0x0) {
    uVar39 = uVar55 * 4;
    uVar38 = uVar55 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    lStack_b0 = 0x11b352;
    local_90 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = local_90;
    if (uVar47 == 0) {
      iVar42 = *(int *)(this + 0x2c);
      lVar56 = *(long *)param_1;
      if (local_90 == (void *)0x0) goto LAB_0011ae6b;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_90 + uVar38)) &&
         (local_90 < (void *)((long)pvVar3 + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar39 * 4) = 0;
          *(undefined8 *)((long)local_90 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar55 != uVar39);
        iVar42 = *(int *)(this + 0x2c);
        lVar56 = *(long *)param_1;
      }
      else {
        memset(pvVar3,0,uVar39);
        lStack_b0 = 0x11b39a;
        memset(local_90,0,uVar38);
        iVar42 = *(int *)(this + 0x2c);
        lVar56 = *(long *)param_1;
      }
    }
    if (iVar42 != 0) {
      uVar39 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_0011b223;
    }
  }
  else {
    iVar42 = *(int *)(this + 0x2c);
    if (iVar42 != 0) {
      lVar52 = *(long *)(this + 0x10);
      lVar46 = *(long *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar38 = lVar56 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar54 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar54 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar54 * lVar46;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar55;
      lVar44 = SUB168(auVar4 * auVar20,8);
      uVar43 = *(uint *)(lVar52 + lVar44 * 4);
      uVar53 = SUB164(auVar4 * auVar20,8);
      if (uVar43 != 0) {
        uVar50 = 0;
        lVar45 = lVar44;
        do {
          if (((uint)uVar54 == uVar43) &&
             (lVar56 == *(long *)(*(long *)((long)local_90 + lVar44 * 8) + 0x10))) {
            auVar58._0_8_ = *(long *)((long)local_90 + (ulong)uVar53 * 8) + 0x18;
            auVar58._8_8_ = lVar45;
            return auVar58;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar53 + 1) * lVar46;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar55;
          lVar44 = SUB168(auVar5 * auVar21,8);
          uVar43 = *(uint *)(lVar52 + lVar44 * 4);
          uVar53 = SUB164(auVar5 * auVar21,8);
        } while ((uVar43 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar43 * lVar46, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar55, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar53 + uVar47) - SUB164(auVar6 * auVar22,8)) * lVar46,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar55, lVar45 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_0011b223:
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar39 * 4));
      lVar46 = *(long *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar38 = lVar56 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar54 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar54 = 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar54 * lVar46;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar51;
      lVar44 = SUB168(auVar16 * auVar32,8);
      uVar47 = *(uint *)(lVar52 + lVar44 * 4);
      uVar43 = SUB164(auVar16 * auVar32,8);
      if (uVar47 != 0) {
        uVar53 = 0;
        lVar45 = lVar44;
        do {
          if (((uint)uVar54 == uVar47) &&
             (*(long *)(*(long *)((long)local_90 + lVar44 * 8) + 0x10) == lVar56)) {
            pauVar41 = *(undefined1 (**) [16])((long)local_90 + (ulong)uVar43 * 8);
            *(undefined4 *)(pauVar41[1] + 8) = 0;
            lStack_b0 = lVar45;
            goto LAB_0011b204;
          }
          uVar53 = uVar53 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)(uVar43 + 1) * lVar46;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar51;
          lVar44 = SUB168(auVar17 * auVar33,8);
          uVar47 = *(uint *)(lVar52 + lVar44 * 4);
          uVar43 = SUB164(auVar17 * auVar33,8);
        } while ((uVar47 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar47 * lVar46, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar51, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar39 * 4) + uVar43) -
                            SUB164(auVar18 * auVar34,8)) * lVar46, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar51, lVar45 = SUB168(auVar19 * auVar35,8),
                uVar53 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_0011ae6b:
  if ((float)uVar55 * __LC101 < (float)(iVar42 + 1)) {
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011b204;
    }
    uVar39 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar43 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar39 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar38 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar3 = *(void **)(this + 0x10);
    uVar39 = uVar38 * 4;
    uVar55 = uVar38 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar38 != uVar39);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar43 != 0) {
      uVar39 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar3 + uVar39 * 4);
        if (uVar47 != 0) {
          lVar56 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar53 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar55 = CONCAT44(0,uVar53);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar47 * lVar52;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar55;
          lVar46 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar56 + lVar46 * 4);
          iVar42 = SUB164(auVar8 * auVar24,8);
          uVar50 = *puVar1;
          uVar40 = *(undefined8 *)((long)local_90 + uVar39 * 8);
          while (uVar50 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar50 * lVar52;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar55;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar53 + iVar42) - SUB164(auVar9 * auVar25,8)) * lVar52;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar55;
            uVar37 = SUB164(auVar10 * auVar26,8);
            uVar48 = uVar40;
            if (uVar37 < uVar49) {
              *puVar1 = uVar47;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar48 = *puVar2;
              *puVar2 = uVar40;
              uVar47 = uVar50;
              uVar49 = uVar37;
            }
            uVar49 = uVar49 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar42 + 1) * lVar52;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar55;
            lVar46 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar56 + lVar46 * 4);
            iVar42 = SUB164(auVar11 * auVar27,8);
            uVar40 = uVar48;
            uVar50 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar39 != uVar43);
      Memory::free_static(local_90,false);
      Memory::free_static(pvVar3,false);
    }
  }
  uVar40 = *(undefined8 *)param_1;
  pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
  *pauVar41 = (undefined1  [16])0x0;
  *(undefined4 *)(pauVar41[1] + 8) = 0;
  *(undefined8 *)pauVar41[1] = uVar40;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    *puVar2 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar2;
  }
  lVar56 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar39 = *(long *)param_1 * 0x3ffff - 1;
  uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
  uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
  uVar39 = uVar39 >> 0x16 ^ uVar39;
  uVar55 = uVar39 & 0xffffffff;
  if ((int)uVar39 == 0) {
    uVar55 = 1;
  }
  uVar50 = 0;
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar53 = (uint)uVar55;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar47);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar55 * lVar52;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar39;
  lStack_b0 = SUB168(auVar12 * auVar28,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar56 + lStack_b0 * 4);
  iVar42 = SUB164(auVar12 * auVar28,8);
  uVar43 = *puVar1;
  pauVar36 = pauVar41;
  while (uVar43 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar43 * lVar52;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar39;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar47 + iVar42) - SUB164(auVar13 * auVar29,8)) * lVar52;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar39;
    uVar53 = SUB164(auVar14 * auVar30,8);
    pauVar57 = pauVar36;
    if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar43;
      puVar2 = (undefined8 *)(lVar46 + lStack_b0 * 8);
      pauVar57 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar50 = uVar53;
    }
    uVar53 = (uint)uVar55;
    uVar50 = uVar50 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar42 + 1) * lVar52;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar39;
    lStack_b0 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar56 + lStack_b0 * 4);
    iVar42 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar57;
    uVar43 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lStack_b0 * 8) = pauVar36;
  *puVar1 = uVar53;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011b204:
  auVar59._8_8_ = lStack_b0;
  auVar59._0_8_ = pauVar41[1] + 8;
  return auVar59;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<RendererRD::MaterialStorage::Material*, HashMapHasherDefault,
   HashMapComparatorDefault<RendererRD::MaterialStorage::Material*>
   >::insert(RendererRD::MaterialStorage::Material* const&) */

undefined1  [16]
HashSet<RendererRD::MaterialStorage::Material*,HashMapHasherDefault,HashMapComparatorDefault<RendererRD::MaterialStorage::Material*>>
::insert(Material **param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  Material *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (Material *)*in_RSI;
  if (local_88 == (Material *)0x0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (Material *)*in_RSI;
    if (local_88 != (Material *)0x0) goto LAB_0011b4ef;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_0011b4ef:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_0011b991;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC101 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (Material *)*in_RSI;
      goto LAB_0011b991;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (Material *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_0011b991:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */

Variant * __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::operator[](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  undefined8 *puVar54;
  long in_FS_OFFSET;
  Variant *local_c8;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_78 [16];
  long local_68;
  int local_60 [8];
  long local_40;
  
  lVar53 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  if (lVar53 == 0) {
LAB_0011c218:
    local_90 = (undefined1  [16])0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    uVar43 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar42;
    if ((int)uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar42 + uVar48)) && (pvVar42 < (void *)((long)pvVar3 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
      }
      else {
        memset(pvVar3,0,uVar43);
        memset(pvVar42,0,uVar48);
      }
LAB_0011bc2e:
      iVar44 = *(int *)(this + 0x2c);
      if (iVar44 != 0) {
LAB_0011bc3e:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar43 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar38 = StringName::get_empty_hash();
        }
        else {
          uVar38 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar38 == 0) {
          uVar38 = 1;
        }
        uVar52 = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar38 * lVar53;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar43;
        lVar46 = SUB168(auVar8 * auVar24,8);
        uVar51 = SUB164(auVar8 * auVar24,8);
        uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
        if (uVar50 != 0) {
          do {
            if ((uVar38 == uVar50) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10) == *(long *)param_1))
            {
              Variant::operator=((Variant *)
                                 (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18),
                                 (Variant *)local_98);
              local_c8 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18);
              goto LAB_0011c15b;
            }
            uVar52 = uVar52 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar51 + 1) * lVar53;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar43;
            lVar46 = SUB168(auVar9 * auVar25,8);
            uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
            uVar51 = SUB164(auVar9 * auVar25,8);
          } while ((uVar50 != 0) &&
                  (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar50 * lVar53, auVar26._8_8_ = 0,
                  auVar26._0_8_ = uVar43, auVar11._8_8_ = 0,
                  auVar11._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar10 * auVar26,8)) * lVar53,
                  auVar27._8_8_ = 0, auVar27._0_8_ = uVar43, uVar52 <= SUB164(auVar11 * auVar27,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      goto LAB_0011bd65;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_0011bd65;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011bc3e;
LAB_0011bd8b:
    uVar37 = *(uint *)(this + 0x28);
    if (uVar37 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c8 = (Variant *)0x18;
      goto LAB_0011c15b;
    }
    uVar39 = (ulong)(uVar37 + 1);
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar37 + 1 < 2) {
      uVar39 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar37;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar43 = uVar48 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar38 != 0) {
      local_c8 = (Variant *)0x0;
      do {
        uVar37 = *(uint *)((long)pvVar3 + (long)local_c8 * 4);
        if (uVar37 != 0) {
          uVar52 = 0;
          lVar53 = *(long *)(this + 0x10);
          uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar39 = CONCAT44(0,uVar50);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar37 * lVar46;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar39;
          lVar45 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar53 + lVar45 * 4);
          iVar44 = SUB164(auVar12 * auVar28,8);
          uVar51 = *puVar1;
          uVar40 = *(undefined8 *)((long)pvVar42 + (long)local_c8 * 8);
          while (uVar51 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar51 * lVar46;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar50 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar39;
            uVar36 = SUB164(auVar14 * auVar30,8);
            uVar49 = uVar40;
            if (uVar36 < uVar52) {
              puVar41 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              *puVar1 = uVar37;
              uVar49 = *puVar41;
              *puVar41 = uVar40;
              uVar37 = uVar51;
              uVar52 = uVar36;
            }
            uVar52 = uVar52 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar39;
            lVar45 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar53 + lVar45 * 4);
            iVar44 = SUB164(auVar15 * auVar31,8);
            uVar40 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar1 = uVar37;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        local_c8 = (Variant *)((long)local_c8 + 1);
      } while ((Variant *)(ulong)uVar38 != local_c8);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar38 = StringName::get_empty_hash();
        lVar53 = *(long *)(this + 8);
      }
      else {
        uVar38 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar38 == 0) {
        uVar38 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar46;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar45 = SUB168(auVar4 * auVar20,8);
      uVar51 = SUB164(auVar4 * auVar20,8);
      uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
      if (uVar50 != 0) {
        uVar52 = 0;
        do {
          if ((uVar38 == uVar50) &&
             (*(long *)(*(long *)(lVar53 + lVar45 * 8) + 0x10) == *(long *)param_1)) {
            local_c8 = (Variant *)(*(long *)(lVar53 + (ulong)uVar51 * 8) + 0x18);
            goto LAB_0011bbd4;
          }
          uVar52 = uVar52 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar51 + 1) * lVar46;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar39;
          lVar45 = SUB168(auVar5 * auVar21,8);
          uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
          uVar51 = SUB164(auVar5 * auVar21,8);
        } while ((uVar50 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar50 * lVar46, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar39, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar51 + uVar37) - SUB164(auVar6 * auVar22,8)) * lVar46,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar39, uVar52 <= SUB164(auVar7 * auVar23,8)));
      }
      local_98[0] = 0;
      local_98[1] = 0;
      local_90 = (undefined1  [16])0x0;
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar53 == 0) goto LAB_0011c218;
      goto LAB_0011bc2e;
    }
    local_98[0] = 0;
    local_98[1] = 0;
    local_90 = (undefined1  [16])0x0;
    iVar44 = 0;
LAB_0011bd65:
    if ((float)uVar39 * __LC101 < (float)(iVar44 + 1)) goto LAB_0011bd8b;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_68,param_1);
  Variant::Variant((Variant *)local_60,(Variant *)local_98);
  puVar41 = (undefined8 *)operator_new(0x30,"");
  *puVar41 = local_78._0_8_;
  puVar41[1] = local_78._8_8_;
  StringName::StringName((StringName *)(puVar41 + 2),(StringName *)&local_68);
  local_c8 = (Variant *)(puVar41 + 3);
  Variant::Variant(local_c8,(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar41;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar41;
    puVar41[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar41;
  if (*(long *)param_1 == 0) {
    uVar37 = StringName::get_empty_hash();
  }
  else {
    uVar37 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar37 == 0) {
    uVar37 = 1;
  }
  uVar39 = (ulong)uVar37;
  uVar51 = 0;
  lVar53 = *(long *)(this + 0x10);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar38);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar39 * lVar46;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar43;
  lVar47 = SUB168(auVar16 * auVar32,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lVar47 * 4);
  iVar44 = SUB164(auVar16 * auVar32,8);
  uVar50 = *puVar1;
  while (uVar50 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar50 * lVar46;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar43;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar17 * auVar33,8)) * lVar46;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar43;
    uVar37 = SUB164(auVar18 * auVar34,8);
    puVar54 = puVar41;
    if (uVar37 < uVar51) {
      puVar2 = (undefined8 *)(lVar45 + lVar47 * 8);
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar50;
      puVar54 = (undefined8 *)*puVar2;
      *puVar2 = puVar41;
      uVar51 = uVar37;
    }
    uVar37 = (uint)uVar39;
    uVar51 = uVar51 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar43;
    lVar47 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar53 + lVar47 * 4);
    iVar44 = SUB164(auVar19 * auVar35,8);
    puVar41 = puVar54;
    uVar50 = *puVar1;
  }
  *(undefined8 **)(lVar45 + lVar47 * 8) = puVar41;
  *puVar1 = uVar37;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011c15b:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0011bbd4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0011c4b0) */
/* WARNING: Removing unreachable block (ram,0x0011c5e0) */
/* WARNING: Removing unreachable block (ram,0x0011c759) */
/* WARNING: Removing unreachable block (ram,0x0011c5ec) */
/* WARNING: Removing unreachable block (ram,0x0011c5f6) */
/* WARNING: Removing unreachable block (ram,0x0011c73b) */
/* WARNING: Removing unreachable block (ram,0x0011c602) */
/* WARNING: Removing unreachable block (ram,0x0011c60c) */
/* WARNING: Removing unreachable block (ram,0x0011c71d) */
/* WARNING: Removing unreachable block (ram,0x0011c618) */
/* WARNING: Removing unreachable block (ram,0x0011c622) */
/* WARNING: Removing unreachable block (ram,0x0011c6ff) */
/* WARNING: Removing unreachable block (ram,0x0011c62e) */
/* WARNING: Removing unreachable block (ram,0x0011c638) */
/* WARNING: Removing unreachable block (ram,0x0011c6e1) */
/* WARNING: Removing unreachable block (ram,0x0011c644) */
/* WARNING: Removing unreachable block (ram,0x0011c64e) */
/* WARNING: Removing unreachable block (ram,0x0011c6c3) */
/* WARNING: Removing unreachable block (ram,0x0011c656) */
/* WARNING: Removing unreachable block (ram,0x0011c660) */
/* WARNING: Removing unreachable block (ram,0x0011c6a8) */
/* WARNING: Removing unreachable block (ram,0x0011c668) */
/* WARNING: Removing unreachable block (ram,0x0011c67e) */
/* WARNING: Removing unreachable block (ram,0x0011c68a) */
/* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */

String * vformat<unsigned_int,char_const*>(String *param_1,uint param_2,char *param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *in_RCX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,(uint)param_3);
  Variant::Variant(local_70,in_RCX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RID_Alloc<RendererRD::MaterialStorage::Shader, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::MaterialStorage::Shader,true>::~RID_Alloc
          (RID_Alloc<RendererRD::MaterialStorage::Shader,true> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  Shader *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00121a00;
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_0011c8e3:
    if ((uint)uVar4 < uVar8) goto LAB_0011c92b;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar5[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar4 / uVar8) <= (uint)lVar7) break;
      puVar5 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar8);
    print_error((String *)&local_48);
    pcVar3 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar6 = 0;
      do {
        this_00 = (Shader *)(puVar5[uVar6 / uVar8] + (uVar6 % (ulong)uVar8) * 0x80);
        if (-1 < *(int *)(this_00 + 0x78)) {
          RendererRD::MaterialStorage::Shader::~Shader(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_0011c8e3;
    }
    if (uVar8 != 0) goto LAB_0011c92b;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_0011c92b:
  if (puVar5 == (undefined8 *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar5,false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::MaterialStorage::Material, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::MaterialStorage::Material,true>::~RID_Alloc
          (RID_Alloc<RendererRD::MaterialStorage::Material,true> *this)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  long lVar13;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00121a20;
  uVar2 = *(uint *)(this + 0x20);
  if (uVar2 == 0) {
    uVar6 = (ulong)*(uint *)(this + 0x1c);
    uVar10 = (ulong)*(uint *)(this + 0x18);
    puVar12 = *(undefined8 **)(this + 8);
LAB_0011cc4a:
    if ((uint)uVar6 < (uint)uVar10) goto LAB_0011cc8b;
    lVar8 = 0;
    while( true ) {
      Memory::free_static((void *)puVar12[lVar8],false);
      lVar13 = lVar8 * 8;
      lVar8 = lVar8 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar13),false);
      if ((uint)(uVar6 / uVar10) <= (uint)lVar8) break;
      puVar12 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_60 = 0;
    local_50 = 0x3b;
    local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_60);
    vformat<unsigned_int,char_const*>
              ((String *)&local_58,(uint)(StrRange *)&local_60,(char *)(ulong)uVar2);
    print_error((String *)&local_58);
    pcVar5 = local_58;
    if (local_58 == (char *)0x0) {
LAB_0011caab:
      if (local_60 == 0) goto LAB_0011cac1;
LAB_0011cab5:
      lVar8 = local_60;
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0011cac1;
      local_60 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
      iVar3 = *(int *)(this + 0x1c);
      uVar2 = *(uint *)(this + 0x18);
      puVar12 = *(undefined8 **)(this + 8);
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0011caab;
      local_58 = (char *)0x0;
      Memory::free_static(pcVar5 + -0x10,false);
      if (local_60 != 0) goto LAB_0011cab5;
LAB_0011cac1:
      iVar3 = *(int *)(this + 0x1c);
      uVar2 = *(uint *)(this + 0x18);
      puVar12 = *(undefined8 **)(this + 8);
    }
    if (iVar3 != 0) {
      uVar10 = (ulong)uVar2;
      uVar9 = 0;
      do {
        lVar8 = (uVar9 % uVar10) * 0xc0 + puVar12[uVar9 / uVar10];
        if (-1 < *(int *)(lVar8 + 0xb8)) {
          Dependency::~Dependency((Dependency *)(lVar8 + 0x88));
          plVar1 = *(long **)(lVar8 + 0x68);
          if (plVar1 != (long *)0x0) {
            lVar13 = *(long *)(lVar8 + 0x78);
            if (lVar13 != 0) {
              *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar8 + 0x80);
            }
            lVar4 = *(long *)(lVar8 + 0x80);
            if (lVar4 != 0) {
              *(long *)(lVar4 + 0x10) = lVar13;
            }
            if (lVar8 + 0x68 == *plVar1) {
              *plVar1 = *(long *)(lVar8 + 0x78);
            }
            if (lVar8 + 0x68 == plVar1[1]) {
              plVar1[1] = lVar4;
            }
          }
          pvVar11 = *(void **)(lVar8 + 0x30);
          if (pvVar11 != (void *)0x0) {
            if (*(int *)(lVar8 + 0x54) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar8 + 0x50) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)(lVar8 + 0x54) = 0;
                *(undefined1 (*) [16])(lVar8 + 0x40) = (undefined1  [16])0x0;
              }
              else {
                lVar13 = 0;
                do {
                  piVar7 = (int *)(*(long *)(lVar8 + 0x38) + lVar13);
                  if (*piVar7 != 0) {
                    *piVar7 = 0;
                    pvVar11 = *(void **)((long)pvVar11 + lVar13 * 2);
                    if (Variant::needs_deinit[*(int *)((long)pvVar11 + 0x18)] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (*(long *)((long)pvVar11 + 0x10) != 0))
                    {
                      StringName::unref();
                    }
                    Memory::free_static(pvVar11,false);
                    pvVar11 = *(void **)(lVar8 + 0x30);
                    *(undefined8 *)((long)pvVar11 + lVar13 * 2) = 0;
                  }
                  lVar13 = lVar13 + 4;
                } while ((ulong)uVar2 << 2 != lVar13);
                *(undefined4 *)(lVar8 + 0x54) = 0;
                *(undefined1 (*) [16])(lVar8 + 0x40) = (undefined1  [16])0x0;
                if (pvVar11 == (void *)0x0) goto LAB_0011cc1c;
              }
            }
            Memory::free_static(pvVar11,false);
            Memory::free_static(*(void **)(lVar8 + 0x38),false);
          }
LAB_0011cc1c:
          uVar10 = (ulong)*(uint *)(this + 0x18);
          puVar12 = *(undefined8 **)(this + 8);
        }
        uVar6 = (ulong)*(uint *)(this + 0x1c);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6);
      goto LAB_0011cc4a;
    }
    if (uVar2 != 0) goto LAB_0011cc8b;
    Memory::free_static((void *)*puVar12,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar12 = *(undefined8 **)(this + 8);
LAB_0011cc8b:
  if (puVar12 == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    Memory::free_static(puVar12,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x10),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::MaterialStorage::Material, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::MaterialStorage::Material,true>::~RID_Alloc
          (RID_Alloc<RendererRD::MaterialStorage::Material,true> *this)

{
  ~RID_Alloc(this);
  operator_delete(this,0x58);
  return;
}



/* RID_Alloc<RendererRD::MaterialStorage::Shader, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::MaterialStorage::Shader,true>::~RID_Alloc
          (RID_Alloc<RendererRD::MaterialStorage::Shader,true> *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  Shader *this_00;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__RID_Alloc_00121a00;
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == 0) {
    uVar4 = (ulong)*(uint *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
LAB_0011cf33:
    if ((uint)uVar4 < uVar8) goto LAB_0011cf7b;
    lVar7 = 0;
    while( true ) {
      Memory::free_static((void *)puVar5[lVar7],false);
      lVar2 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar2),false);
      if ((uint)(uVar4 / uVar8) <= (uint)lVar7) break;
      puVar5 = *(undefined8 **)(this + 8);
    }
  }
  else {
    local_50 = 0;
    local_40 = 0x3b;
    local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<unsigned_int,char_const*>
              ((String *)&local_48,(uint)(StrRange *)&local_50,(char *)(ulong)uVar8);
    print_error((String *)&local_48);
    pcVar3 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar7 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    uVar8 = *(uint *)(this + 0x18);
    puVar5 = *(undefined8 **)(this + 8);
    if (*(int *)(this + 0x1c) != 0) {
      uVar6 = 0;
      do {
        this_00 = (Shader *)(puVar5[uVar6 / uVar8] + (uVar6 % (ulong)uVar8) * 0x80);
        if (-1 < *(int *)(this_00 + 0x78)) {
          RendererRD::MaterialStorage::Shader::~Shader(this_00);
          uVar8 = *(uint *)(this + 0x18);
          puVar5 = *(undefined8 **)(this + 8);
        }
        uVar4 = (ulong)*(uint *)(this + 0x1c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      goto LAB_0011cf33;
    }
    if (uVar8 != 0) goto LAB_0011cf7b;
    Memory::free_static((void *)*puVar5,false);
    Memory::free_static((void *)**(undefined8 **)(this + 0x10),false);
  }
  puVar5 = *(undefined8 **)(this + 8);
LAB_0011cf7b:
  if (puVar5 != (undefined8 *)0x0) {
    Memory::free_static(puVar5,false);
    Memory::free_static(*(void **)(this + 0x10),false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    operator_delete(this,0x58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::MaterialStorage::Shader, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererRD::MaterialStorage::Shader,true>::allocate_rid
          (RID_Alloc<RendererRD::MaterialStorage::Shader,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = pthread_mutex_lock(__mutex);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  uVar8 = *(uint *)(this + 0x20);
  if (uVar8 == *(uint *)(this + 0x1c)) {
    if (uVar8 != 0) {
      uVar8 = uVar8 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar8) {
      pthread_mutex_unlock(__mutex);
      pcVar5 = *(char **)(this + 0x28);
      if (pcVar5 == (char *)0x0) {
        uVar13 = 0;
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar5);
        local_48 = pcVar5;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
        pcVar5 = local_48;
        if (local_48 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (char *)0x0;
            Memory::free_static(pcVar5 + -0x10,false);
          }
        }
        lVar3 = local_58;
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
        lVar3 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            uVar13 = 0;
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
            goto LAB_0011d258;
          }
        }
        uVar13 = 0;
      }
      goto LAB_0011d258;
    }
    lVar3 = *(long *)(this + 8);
    uVar13 = (ulong)uVar8;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) << 7,false);
    uVar8 = *(uint *)(this + 0x18);
    lVar4 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)uVar8 << 2,false);
    uVar8 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar4) = uVar9;
    if (uVar8 != 0) {
      lVar3 = *(long *)(*(long *)(this + 8) + uVar13 * 8);
      lVar4 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar10 = 0;
      do {
        *(undefined4 *)(lVar3 + 0x78 + lVar10 * 0x80) = 0xffffffff;
        *(int *)(lVar4 + lVar10 * 4) = *(int *)(this + 0x20) + (int)lVar10;
        uVar8 = *(uint *)(this + 0x18);
        lVar10 = lVar10 + 1;
      } while ((uint)lVar10 < uVar8);
    }
    *(uint *)(this + 0x1c) = uVar8 + *(int *)(this + 0x1c);
    uVar8 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar8 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar8 / (ulong)uVar2) * 8) +
                   ((ulong)uVar8 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar11 = (int)RID_AllocBase::base_id + 1;
  uVar12 = uVar11 & 0x7fffffff;
  if (uVar12 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar13 = CONCAT44(uVar11,uVar8) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(((ulong)uVar8 % (ulong)uVar2) * 0x80 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar8 / (ulong)uVar2) * 8) + 0x78) =
       uVar12 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_0011d258:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::MaterialStorage::Material, true>::allocate_rid() */

ulong __thiscall
RID_Alloc<RendererRD::MaterialStorage::Material,true>::allocate_rid
          (RID_Alloc<RendererRD::MaterialStorage::Material,true> *this)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  __mutex = (pthread_mutex_t *)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar7 = *(uint *)(this + 0x20);
  if (uVar7 == *(uint *)(this + 0x1c)) {
    if (uVar7 != 0) {
      uVar7 = uVar7 / *(uint *)(this + 0x18);
    }
    if (*(uint *)(this + 0x24) == uVar7) {
      pthread_mutex_unlock(__mutex);
      pcVar4 = *(char **)(this + 0x28);
      if (pcVar4 == (char *)0x0) {
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x85,
                         "Method/function failed. Returning: RID()","Element limit reached.",0,0);
      }
      else {
        local_50 = 0;
        local_40 = strlen(pcVar4);
        local_48 = pcVar4;
        String::parse_latin1((StrRange *)&local_50);
        local_40 = 0x2b;
        local_48 = "Element limit for RID of type \'%s\' reached.";
        local_58 = 0;
        String::parse_latin1((StrRange *)&local_58);
        vformat<String>(&local_48,&local_58,(StrRange *)&local_50);
        _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0x83,
                         "Method/function failed. Returning: RID()",&local_48,0,0);
        pcVar4 = local_48;
        if (local_48 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        lVar3 = local_58;
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
        lVar3 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      uVar13 = 0;
      goto LAB_0011d5b7;
    }
    uVar13 = (ulong)uVar7;
    lVar3 = *(long *)(this + 8);
    uVar8 = Memory::alloc_static((ulong)*(uint *)(this + 0x18) * 0xc0,false);
    uVar7 = *(uint *)(this + 0x18);
    lVar9 = *(long *)(this + 0x10);
    *(undefined8 *)(lVar3 + uVar13 * 8) = uVar8;
    uVar8 = Memory::alloc_static((ulong)uVar7 << 2,false);
    uVar7 = *(uint *)(this + 0x18);
    *(undefined8 *)(uVar13 * 8 + lVar9) = uVar8;
    if (uVar7 != 0) {
      lVar3 = *(long *)(*(long *)(this + 0x10) + uVar13 * 8);
      lVar9 = 0;
      puVar12 = (undefined4 *)(*(long *)(*(long *)(this + 8) + uVar13 * 8) + 0xb8);
      do {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 0x30;
        *(int *)(lVar3 + lVar9 * 4) = *(int *)(this + 0x20) + (int)lVar9;
        uVar7 = *(uint *)(this + 0x18);
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < uVar7);
    }
    *(uint *)(this + 0x1c) = uVar7 + *(int *)(this + 0x1c);
    uVar7 = *(uint *)(this + 0x20);
  }
  uVar2 = *(uint *)(this + 0x18);
  uVar7 = *(uint *)(*(long *)(*(long *)(this + 0x10) + ((ulong)uVar7 / (ulong)uVar2) * 8) +
                   ((ulong)uVar7 % (ulong)uVar2) * 4);
  LOCK();
  UNLOCK();
  uVar10 = (int)RID_AllocBase::base_id + 1;
  uVar11 = uVar10 & 0x7fffffff;
  if (uVar11 == 0x7fffffff) {
    RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
    _err_print_error("_allocate_rid","./core/templates/rid_owner.h",0xa9,
                     "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.",
                     "Overflow in RID validator",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar13 = CONCAT44(uVar10,uVar7) & 0x7fffffffffffffff;
  RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
  *(uint *)(((ulong)uVar7 % (ulong)uVar2) * 0xc0 +
            *(long *)(*(long *)(this + 8) + ((ulong)uVar7 / (ulong)uVar2) * 8) + 0xb8) =
       uVar11 | 0x80000000;
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  pthread_mutex_unlock(__mutex);
LAB_0011d5b7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
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
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011dcc0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_0011dcc0;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0011db9a:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0011db9a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_0011db67;
  }
  if (lVar8 == lVar5) {
LAB_0011dc3b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0011db67:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011dc1b;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0011dc3b;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0011dc1b:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<RID>::_realloc(long) */

undefined8 __thiscall CowData<RID>::_realloc(CowData<RID> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RID>::resize<false>(long) */

undefined8 __thiscall CowData<RID>::resize<false>(CowData<RID> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011dfd0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_0011dfd0;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_0011df3c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0011ded1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011df3c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_0011ded1:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* Vector<int> convert_array_std140<Vector4i, int>(Variant const&, bool) */

Variant * convert_array_std140<Vector4i,int>(Variant *param_1,bool param_2)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  int *piVar3;
  Variant *pVVar4;
  bool in_DL;
  int iVar5;
  undefined7 in_register_00000031;
  int iVar6;
  undefined1 (*pauVar7) [16];
  long in_FS_OFFSET;
  undefined1 auVar8 [16];
  Variant local_60 [16];
  undefined1 (*local_50 [2]) [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)CONCAT71(in_register_00000031,param_2);
  if ((iVar2 - 0x23U < 4) || (iVar2 == 0x1c)) {
    iVar5 = 0;
    Variant::operator_cast_to_Array(local_60);
    iVar2 = Array::size();
    if (0 < iVar2) {
LAB_0011e15c:
      iVar6 = (int)local_60;
      piVar3 = (int *)Array::get(iVar6);
      if (*piVar3 - 2U < 2) goto LAB_0011e150;
      iVar2 = Array::size();
      local_50[0] = (undefined1 (*) [16])0x0;
      CowData<int>::resize<false>((CowData<int> *)local_50,(long)(iVar2 * 4));
      iVar5 = 0;
      CowData<int>::_copy_on_write((CowData<int> *)local_50);
      pauVar1 = local_50[0];
      pauVar7 = local_50[0];
      if (0 < iVar2) {
        do {
          iVar5 = iVar5 + 1;
          pVVar4 = (Variant *)Array::get(iVar6);
          auVar8 = convert_to_vector<Vector4i>(pVVar4,in_DL);
          *pauVar7 = auVar8;
          pauVar7 = pauVar7 + 1;
        } while (iVar2 != iVar5);
      }
      *(undefined1 (**) [16])(param_1 + 8) = pauVar1;
      goto LAB_0011e1f2;
    }
LAB_0011e210:
    Variant::operator_cast_to_Vector(param_1);
LAB_0011e1f2:
    Array::~Array((Array *)local_60);
  }
  else if (iVar2 < 0x1c) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    Variant::operator_cast_to_Vector(param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_0011e150:
  iVar5 = iVar5 + 1;
  if (iVar2 == iVar5) goto LAB_0011e210;
  goto LAB_0011e15c;
}



/* Vector<int> convert_array_std140<Vector3i, int>(Variant const&, bool) */

Variant * convert_array_std140<Vector3i,int>(Variant *param_1,bool param_2)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  int *piVar3;
  Variant *pVVar4;
  bool in_DL;
  undefined7 in_register_00000031;
  int iVar5;
  int iVar6;
  undefined1 (*pauVar7) [12];
  long in_FS_OFFSET;
  undefined1 auVar8 [12];
  Variant local_70 [16];
  undefined1 (*local_60 [2]) [12];
  undefined1 local_4c [12];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)CONCAT71(in_register_00000031,param_2);
  if ((iVar2 - 0x23U < 4) || (iVar2 == 0x1c)) {
    iVar6 = 0;
    Variant::operator_cast_to_Array(local_70);
    iVar2 = Array::size();
    if (0 < iVar2) {
LAB_0011e2dc:
      iVar5 = (int)local_70;
      piVar3 = (int *)Array::get(iVar5);
      if (*piVar3 - 2U < 2) goto LAB_0011e2d0;
      iVar2 = Array::size();
      local_60[0] = (undefined1 (*) [12])0x0;
      CowData<int>::resize<false>((CowData<int> *)local_60,(long)(iVar2 * 3));
      CowData<int>::_copy_on_write((CowData<int> *)local_60);
      pauVar1 = local_60[0];
      auVar8._8_4_ = local_4c._8_4_;
      auVar8._0_8_ = local_4c._0_8_;
      if (0 < iVar2) {
        iVar6 = 0;
        pauVar7 = local_60[0];
        do {
          iVar6 = iVar6 + 1;
          local_4c = auVar8;
          pVVar4 = (Variant *)Array::get(iVar5);
          auVar8 = convert_to_vector<Vector3i>(pVVar4,in_DL);
          *pauVar7 = auVar8;
          pauVar7 = pauVar7 + 1;
        } while (iVar2 != iVar6);
      }
      *(undefined1 (**) [12])(param_1 + 8) = pauVar1;
      goto LAB_0011e38b;
    }
LAB_0011e3b0:
    Variant::operator_cast_to_Vector(param_1);
    auVar8._8_4_ = local_4c._8_4_;
    auVar8._0_8_ = local_4c._0_8_;
LAB_0011e38b:
    local_4c = auVar8;
    Array::~Array((Array *)local_70);
  }
  else if (iVar2 < 0x1c) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    Variant::operator_cast_to_Vector(param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_0011e2d0:
  iVar6 = iVar6 + 1;
  if (iVar2 == iVar6) goto LAB_0011e3b0;
  goto LAB_0011e2dc;
}



/* Vector<int> convert_array_std140<Vector2i, int>(Variant const&, bool) */

Variant * convert_array_std140<Vector2i,int>(Variant *param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  Variant *pVVar4;
  undefined8 uVar5;
  bool in_DL;
  int iVar6;
  long lVar7;
  undefined7 in_register_00000031;
  int iVar8;
  long in_FS_OFFSET;
  Variant local_60 [16];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)CONCAT71(in_register_00000031,param_2);
  if ((iVar2 - 0x23U < 4) || (iVar2 == 0x1c)) {
    iVar6 = 0;
    Variant::operator_cast_to_Array(local_60);
    iVar2 = Array::size();
    if (0 < iVar2) {
LAB_0011e47c:
      iVar8 = (int)local_60;
      piVar3 = (int *)Array::get(iVar8);
      if (*piVar3 - 2U < 2) goto LAB_0011e470;
      iVar2 = Array::size();
      local_50[0] = 0;
      CowData<int>::resize<false>((CowData<int> *)local_50,(long)(iVar2 * 2));
      lVar7 = 0;
      CowData<int>::_copy_on_write((CowData<int> *)local_50);
      lVar1 = local_50[0];
      if (0 < iVar2) {
        do {
          pVVar4 = (Variant *)Array::get(iVar8);
          uVar5 = convert_to_vector<Vector2i>(pVVar4,in_DL);
          *(undefined8 *)(lVar1 + lVar7 * 8) = uVar5;
          lVar7 = lVar7 + 1;
        } while (lVar7 != iVar2);
      }
      *(long *)(param_1 + 8) = lVar1;
      goto LAB_0011e4fe;
    }
LAB_0011e520:
    Variant::operator_cast_to_Vector(param_1);
LAB_0011e4fe:
    Array::~Array((Array *)local_60);
  }
  else if (iVar2 < 0x1c) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    Variant::operator_cast_to_Vector(param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_0011e470:
  iVar6 = iVar6 + 1;
  if (iVar2 == iVar6) goto LAB_0011e520;
  goto LAB_0011e47c;
}



/* CowData<RenderingDevice::Uniform>::_unref() */

void __thiscall CowData<RenderingDevice::Uniform>::_unref(CowData<RenderingDevice::Uniform> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* HashMap<StringName, HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > > > > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
::_resize_and_rehash
          (HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
::_resize_and_rehash
          (HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > >::insert(int const&, RID const&, bool) */

void HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
     ::insert(int *param_1,RID *param_2,bool param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 (*pauVar20) [16];
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 (*pauVar25) [16];
  undefined8 uVar26;
  void *__s_00;
  undefined8 *in_RCX;
  int iVar27;
  undefined7 in_register_00000011;
  uint *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  uint uVar33;
  char in_R8B;
  ulong uVar34;
  uint uVar35;
  undefined1 (*pauVar36) [16];
  
  puVar28 = (uint *)CONCAT71(in_register_00000011,param_3);
  __s_00 = *(void **)(param_2 + 8);
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (__s_00 == (void *)0x0) {
    uVar29 = (ulong)uVar22;
    uVar32 = uVar29 * 4;
    uVar34 = uVar29 * 8;
    uVar26 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar22 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar29 != uVar32);
        goto LAB_0011eac6;
      }
      memset(__s,0,uVar32);
      memset(__s_00,0,uVar34);
      iVar27 = *(int *)(param_2 + 0x2c);
      uVar23 = *puVar28;
      goto LAB_0011ead1;
    }
    iVar27 = *(int *)(param_2 + 0x2c);
    uVar23 = *puVar28;
    if (__s_00 != (void *)0x0) goto LAB_0011ead1;
  }
  else {
LAB_0011eac6:
    iVar27 = *(int *)(param_2 + 0x2c);
    uVar23 = *puVar28;
LAB_0011ead1:
    if (iVar27 != 0) {
      uVar34 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      uVar32 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar21 = (uVar23 >> 0x10 ^ uVar23) * -0x7a143595;
      uVar21 = (uVar21 ^ uVar21 >> 0xd) * -0x3d4d51cb;
      uVar33 = uVar21 ^ uVar21 >> 0x10;
      if (uVar21 == uVar21 >> 0x10) {
        uVar33 = 1;
        uVar29 = uVar32;
      }
      else {
        uVar29 = uVar33 * uVar32;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar34;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar29;
      lVar30 = SUB168(auVar4 * auVar12,8);
      uVar21 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar24 = SUB164(auVar4 * auVar12,8);
      if (uVar21 != 0) {
        uVar35 = 0;
        do {
          if ((uVar33 == uVar21) &&
             (*(uint *)(*(long *)((long)__s_00 + lVar30 * 8) + 0x10) == uVar23)) {
            pauVar25 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar24 * 8);
            *(undefined8 *)(pauVar25[1] + 8) = *in_RCX;
            goto LAB_0011ed70;
          }
          uVar35 = uVar35 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar24 + 1) * uVar32;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar34;
          lVar30 = SUB168(auVar5 * auVar13,8);
          uVar21 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar24 = SUB164(auVar5 * auVar13,8);
        } while ((uVar21 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar21 * uVar32, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar34, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar24) -
                               SUB164(auVar6 * auVar14,8)) * uVar32, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar34, uVar35 <= SUB164(auVar7 * auVar15,8)));
      }
    }
  }
  if ((float)uVar22 * __LC101 < (float)(iVar27 + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pauVar25 = (undefined1 (*) [16])0x0;
      goto LAB_0011ed70;
    }
    _resize_and_rehash((HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  uVar22 = *puVar28;
  uVar26 = *in_RCX;
  pauVar25 = (undefined1 (*) [16])operator_new(0x20,"");
  *pauVar25 = (undefined1  [16])0x0;
  *(uint *)pauVar25[1] = uVar22;
  *(undefined8 *)(pauVar25[1] + 8) = uVar26;
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar25;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar25;
  }
  else if (in_R8B == '\0') {
    *puVar1 = pauVar25;
    *(undefined8 **)(*pauVar25 + 8) = puVar1;
    *(undefined1 (**) [16])(param_2 + 0x20) = pauVar25;
  }
  else {
    lVar30 = *(long *)(param_2 + 0x18);
    *(undefined1 (**) [16])(lVar30 + 8) = pauVar25;
    *(long *)*pauVar25 = lVar30;
    *(undefined1 (**) [16])(param_2 + 0x18) = pauVar25;
  }
  uVar22 = (*puVar28 >> 0x10 ^ *puVar28) * -0x7a143595;
  uVar23 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
  uVar22 = uVar23 ^ uVar23 >> 0x10;
  if (uVar23 == uVar23 >> 0x10) {
    uVar32 = 1;
    uVar22 = 1;
  }
  else {
    uVar32 = (ulong)uVar22;
  }
  lVar30 = *(long *)(param_2 + 0x10);
  uVar33 = 0;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar23);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar32 * lVar2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar34;
  lVar31 = SUB168(auVar8 * auVar16,8);
  lVar3 = *(long *)(param_2 + 8);
  puVar28 = (uint *)(lVar30 + lVar31 * 4);
  iVar27 = SUB164(auVar8 * auVar16,8);
  uVar21 = *puVar28;
  pauVar20 = pauVar25;
  while (uVar21 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar21 * lVar2;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar34;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar23 + iVar27) - SUB164(auVar9 * auVar17,8)) * lVar2;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    uVar24 = SUB164(auVar10 * auVar18,8);
    pauVar36 = pauVar20;
    if (uVar24 < uVar33) {
      *puVar28 = uVar22;
      puVar1 = (undefined8 *)(lVar3 + lVar31 * 8);
      pauVar36 = (undefined1 (*) [16])*puVar1;
      *puVar1 = pauVar20;
      uVar22 = uVar21;
      uVar33 = uVar24;
    }
    uVar33 = uVar33 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar27 + 1) * lVar2;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    lVar31 = SUB168(auVar11 * auVar19,8);
    puVar28 = (uint *)(lVar30 + lVar31 * 4);
    iVar27 = SUB164(auVar11 * auVar19,8);
    pauVar20 = pauVar36;
    uVar21 = *puVar28;
  }
  *(undefined1 (**) [16])(lVar3 + lVar31 * 8) = pauVar20;
  *puVar28 = uVar22;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011ed70:
  *(undefined1 (**) [16])param_1 = pauVar25;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > >::operator[](int const&) */

undefined1  [16] __thiscall
HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
::operator[](HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
             *this,int *param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 (*pauVar28) [16];
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 (*pauVar32) [16];
  undefined8 uVar33;
  void *__s_00;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  int iVar39;
  uint uVar40;
  ulong uVar41;
  long lVar42;
  uint uVar43;
  uint uVar44;
  undefined1 (*pauVar45) [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long lStack_70;
  uint local_68;
  
  uVar38 = (ulong)*(uint *)(this + 0x28);
  __s_00 = *(void **)(this + 8);
  uVar31 = *param_1;
  uVar30 = *(uint *)(hash_table_size_primes + uVar38 * 4);
  uVar41 = CONCAT44(0,uVar30);
  if (__s_00 == (void *)0x0) {
    uVar38 = uVar41 * 4;
    uVar2 = uVar41 * 8;
    uVar33 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    lStack_70 = 0x11f2d0;
    __s_00 = (void *)Memory::alloc_static(uVar2,false);
    *(void **)(this + 8) = __s_00;
    if (uVar30 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar2)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar41 != uVar38);
        uVar31 = *param_1;
        iVar39 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar38);
        lStack_70 = 0x11f31a;
        memset(__s_00,0,uVar2);
        uVar31 = *param_1;
        iVar39 = *(int *)(this + 0x2c);
      }
LAB_0011f329:
      if (iVar39 == 0) goto LAB_0011f3e0;
      uVar38 = (ulong)*(uint *)(this + 0x28);
      lVar42 = *(long *)(this + 0x10);
      goto LAB_0011eff4;
    }
    uVar31 = *param_1;
    iVar39 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_0011f329;
  }
  else {
    iVar39 = *(int *)(this + 0x2c);
    if (iVar39 == 0) {
LAB_0011f3e0:
      iVar39 = 0;
    }
    else {
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar38 * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar43 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar43 = 1;
        uVar35 = uVar2;
      }
      else {
        uVar35 = uVar43 * uVar2;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar41;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar35;
      lVar36 = SUB168(auVar4 * auVar16,8);
      lVar42 = *(long *)(this + 0x10);
      uVar44 = SUB164(auVar4 * auVar16,8);
      uVar29 = *(uint *)(lVar42 + lVar36 * 4);
      if (uVar29 != 0) {
        uVar40 = 0;
        lVar37 = lVar36;
        do {
          if ((uVar43 == uVar29) &&
             (uVar31 == *(uint *)(*(long *)((long)__s_00 + lVar36 * 8) + 0x10))) {
            auVar46._0_8_ = *(long *)((long)__s_00 + (ulong)uVar44 * 8) + 0x18;
            auVar46._8_8_ = lVar37;
            return auVar46;
          }
          uVar40 = uVar40 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar44 + 1) * uVar2;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar41;
          lVar36 = SUB168(auVar5 * auVar17,8);
          uVar29 = *(uint *)(lVar42 + lVar36 * 4);
          uVar44 = SUB164(auVar5 * auVar17,8);
        } while ((uVar29 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar29 * uVar2, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar41, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar44 + uVar30) - SUB164(auVar6 * auVar18,8)) * uVar2,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar41, lVar37 = SUB168(auVar7 * auVar19,8),
                uVar40 <= SUB164(auVar7 * auVar19,8)));
      }
LAB_0011eff4:
      uVar35 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar38 * 4));
      uVar2 = *(ulong *)(hash_table_size_primes_inv + uVar38 * 8);
      uVar30 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
      uVar29 = uVar30 ^ uVar30 >> 0x10;
      if (uVar30 == uVar30 >> 0x10) {
        uVar29 = 1;
        uVar34 = uVar2;
      }
      else {
        uVar34 = uVar29 * uVar2;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar35;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      lVar36 = SUB168(auVar8 * auVar20,8);
      uVar30 = *(uint *)(lVar42 + lVar36 * 4);
      uVar43 = SUB164(auVar8 * auVar20,8);
      if (uVar30 != 0) {
        uVar44 = 0;
        lVar37 = lVar36;
        do {
          if ((uVar29 == uVar30) &&
             (uVar31 == *(uint *)(*(long *)((long)__s_00 + lVar36 * 8) + 0x10))) {
            pauVar32 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar43 * 8);
            *(undefined8 *)(pauVar32[1] + 8) = 0;
            lStack_70 = lVar37;
            goto LAB_0011f0c7;
          }
          uVar44 = uVar44 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (uVar43 + 1) * uVar2;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar35;
          lVar36 = SUB168(auVar9 * auVar21,8);
          uVar30 = *(uint *)(lVar42 + lVar36 * 4);
          uVar43 = SUB164(auVar9 * auVar21,8);
        } while ((uVar30 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = uVar30 * uVar2, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar35, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar38 * 4) + uVar43) -
                     SUB164(auVar10 * auVar22,8)) * uVar2, auVar23._8_8_ = 0, auVar23._0_8_ = uVar35
                , lVar37 = SUB168(auVar11 * auVar23,8), uVar44 <= SUB164(auVar11 * auVar23,8)));
      }
    }
  }
  if ((float)uVar41 * __LC101 < (float)(iVar39 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar32 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011f0c7;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  iVar39 = *param_1;
  pauVar32 = (undefined1 (*) [16])operator_new(0x20,"");
  *(int *)pauVar32[1] = iVar39;
  *(undefined8 *)(pauVar32[1] + 8) = 0;
  *pauVar32 = (undefined1  [16])0x0;
  puVar3 = *(undefined8 **)(this + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar32;
  }
  else {
    *puVar3 = pauVar32;
    *(undefined8 **)(*pauVar32 + 8) = puVar3;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar32;
  uVar31 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar30 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
  uVar31 = uVar30 ^ uVar30 >> 0x10;
  if (uVar30 == uVar30 >> 0x10) {
    uVar38 = 1;
    uVar31 = 1;
  }
  else {
    uVar38 = (ulong)uVar31;
  }
  uVar43 = 0;
  lVar42 = *(long *)(this + 0x10);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar30);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar38 * lVar36;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar41;
  lStack_70 = SUB168(auVar12 * auVar24,8);
  lVar37 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar42 + lStack_70 * 4);
  iVar39 = SUB164(auVar12 * auVar24,8);
  uVar29 = *puVar1;
  pauVar28 = pauVar32;
  while (uVar29 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar29 * lVar36;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar41;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar30 + iVar39) - SUB164(auVar13 * auVar25,8)) * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar41;
    local_68 = SUB164(auVar14 * auVar26,8);
    pauVar45 = pauVar28;
    if (local_68 < uVar43) {
      *puVar1 = uVar31;
      puVar3 = (undefined8 *)(lVar37 + lStack_70 * 8);
      pauVar45 = (undefined1 (*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar31 = uVar29;
      uVar43 = local_68;
    }
    uVar43 = uVar43 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar39 + 1) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar41;
    lStack_70 = SUB168(auVar15 * auVar27,8);
    puVar1 = (uint *)(lVar42 + lStack_70 * 4);
    iVar39 = SUB164(auVar15 * auVar27,8);
    pauVar28 = pauVar45;
    uVar29 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar37 + lStack_70 * 8) = pauVar28;
  *puVar1 = uVar31;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011f0c7:
  auVar47._8_8_ = lStack_70;
  auVar47._0_8_ = pauVar32[1] + 8;
  return auVar47;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > > > > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
::operator[](HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
             *this,StringName *param_1)

{
  undefined8 *puVar1;
  ulong __n;
  uint *puVar2;
  void *__s;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined8 uVar33;
  void *pvVar34;
  ulong uVar35;
  int *piVar36;
  int iVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined8 *puVar44;
  long *plVar45;
  long in_FS_OFFSET;
  int local_90 [2];
  undefined1 local_88 [16];
  long local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  lVar32 = *(long *)(this + 8);
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar30 = CONCAT44(0,uVar28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar32 == 0) {
LAB_0011fb30:
    uVar35 = uVar30 * 4;
    __n = uVar30 * 8;
    uVar33 = Memory::alloc_static(uVar35,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    pvVar34 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = pvVar34;
    if ((int)uVar30 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)pvVar34 + __n)) && (pvVar34 < (void *)((long)__s + uVar35))) {
        uVar35 = 0;
        do {
          *(undefined4 *)((long)__s + uVar35 * 4) = 0;
          *(undefined8 *)((long)pvVar34 + uVar35 * 8) = 0;
          uVar35 = uVar35 + 1;
        } while (uVar30 != uVar35);
      }
      else {
        memset(__s,0,uVar35);
        memset(pvVar34,0,__n);
      }
LAB_0011f95d:
      iVar37 = *(int *)(this + 0x2c);
      if (iVar37 != 0) {
LAB_0011f96d:
        uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar35 = CONCAT44(0,uVar28);
        lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar27 = StringName::get_empty_hash();
        }
        else {
          uVar27 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar27 == 0) {
          uVar27 = 1;
        }
        uVar43 = 0;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar27 * lVar32;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar35;
        lVar40 = SUB168(auVar11 * auVar23,8);
        uVar42 = SUB164(auVar11 * auVar23,8);
        uVar41 = *(uint *)(*(long *)(this + 0x10) + lVar40 * 4);
        if (uVar41 != 0) {
          do {
            if ((uVar41 == uVar27) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar40 * 8) + 0x10) == *(long *)param_1))
            {
              lVar32 = *(long *)(*(long *)(this + 8) + (ulong)uVar42 * 8);
              uVar28 = *(uint *)(lVar32 + 0x40);
              uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar28 * 4);
              if ((*(int *)(lVar32 + 0x44) == 0) || (*(long *)(lVar32 + 0x20) == 0))
              goto LAB_0011fa51;
              lVar40 = 0;
              if (uVar27 != 0) goto LAB_0011fc58;
              *(undefined4 *)(lVar32 + 0x44) = 0;
              *(undefined1 (*) [16])(lVar32 + 0x30) = (undefined1  [16])0x0;
              goto LAB_0011fa56;
            }
            uVar43 = uVar43 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(uVar42 + 1) * lVar32;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar35;
            lVar40 = SUB168(auVar12 * auVar24,8);
            uVar41 = *(uint *)(*(long *)(this + 0x10) + lVar40 * 4);
            uVar42 = SUB164(auVar12 * auVar24,8);
          } while ((uVar41 != 0) &&
                  (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar41 * lVar32, auVar25._8_8_ = 0,
                  auVar25._0_8_ = uVar35, auVar14._8_8_ = 0,
                  auVar14._0_8_ = (ulong)((uVar28 + uVar42) - SUB164(auVar13 * auVar25,8)) * lVar32,
                  auVar26._8_8_ = 0, auVar26._0_8_ = uVar35, uVar43 <= SUB164(auVar14 * auVar26,8)))
          ;
        }
        iVar37 = *(int *)(this + 0x2c);
      }
      goto LAB_0011f5bb;
    }
    iVar37 = *(int *)(this + 0x2c);
    if (pvVar34 == (void *)0x0) goto LAB_0011f5bb;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011f96d;
LAB_0011f5dd:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      puVar29 = (undefined8 *)0x18;
      goto LAB_0011f584;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    iVar37 = *(int *)(this + 0x2c);
    if (iVar37 != 0) {
      lVar40 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar27 = StringName::get_empty_hash();
        lVar32 = *(long *)(this + 8);
      }
      else {
        uVar27 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar27 == 0) {
        uVar27 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar27 * lVar40;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar30;
      lVar38 = SUB168(auVar3 * auVar15,8);
      uVar42 = SUB164(auVar3 * auVar15,8);
      uVar41 = *(uint *)(*(long *)(this + 0x10) + lVar38 * 4);
      if (uVar41 != 0) {
        uVar43 = 0;
        do {
          if ((uVar41 == uVar27) &&
             (*(long *)(*(long *)(lVar32 + lVar38 * 8) + 0x10) == *(long *)param_1)) {
            puVar29 = (undefined8 *)(*(long *)(lVar32 + (ulong)uVar42 * 8) + 0x18);
            goto LAB_0011f584;
          }
          uVar43 = uVar43 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar42 + 1) * lVar40;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar30;
          lVar38 = SUB168(auVar4 * auVar16,8);
          uVar41 = *(uint *)(*(long *)(this + 0x10) + lVar38 * 4);
          uVar42 = SUB164(auVar4 * auVar16,8);
        } while ((uVar41 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar41 * lVar40, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar30, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar42 + uVar28) - SUB164(auVar5 * auVar17,8)) * lVar40,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar30, uVar43 <= SUB164(auVar6 * auVar18,8)));
      }
      uVar30 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar32 == 0) goto LAB_0011fb30;
      goto LAB_0011f95d;
    }
LAB_0011f5bb:
    if ((float)uVar30 * __LC101 < (float)(iVar37 + 1)) goto LAB_0011f5dd;
  }
  local_88 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)local_78,param_1);
  uVar30 = 1;
  local_48 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  do {
    if (0x16 < *(uint *)(hash_table_size_primes + uVar30 * 4)) {
      local_48 = uVar30 & 0xffffffff;
      goto LAB_0011f67b;
    }
    uVar30 = uVar30 + 1;
  } while (uVar30 != 0x1d);
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_0011f67b:
  puVar31 = (undefined8 *)operator_new(0x48,"");
  *puVar31 = local_88._0_8_;
  puVar31[1] = local_88._8_8_;
  StringName::StringName((StringName *)(puVar31 + 2),(StringName *)local_78);
  puVar31[8] = 0;
  *(undefined1 (*) [16])(puVar31 + 4) = (undefined1  [16])0x0;
  uVar28 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
  *(undefined1 (*) [16])(puVar31 + 6) = (undefined1  [16])0x0;
  lVar32 = 1;
  if (5 < uVar28) {
    do {
      if (uVar28 <= *(uint *)(hash_table_size_primes + lVar32 * 4)) {
        *(int *)(puVar31 + 8) = (int)lVar32;
        goto LAB_0011f712;
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0011f712:
  pvVar34 = (void *)local_68._0_8_;
  if (local_48._4_4_ == 0) {
    if ((void *)local_68._0_8_ != (void *)0x0) goto LAB_0011f92b;
  }
  else if ((long *)local_58._0_8_ == (long *)0x0) {
    if ((void *)local_68._0_8_ != (void *)0x0) {
      uVar28 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      if (uVar28 != 0) goto LAB_0011f785;
LAB_0011fcce:
      local_48 = local_48 & 0xffffffff;
      local_58 = (undefined1  [16])0x0;
      pvVar34 = (void *)local_68._0_8_;
      goto LAB_0011f92b;
    }
  }
  else {
    plVar45 = (long *)local_58._0_8_;
    do {
      HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
      ::insert(local_90,(RID *)(puVar31 + 3),(bool)((char)plVar45 + '\x10'));
      plVar45 = (long *)*plVar45;
    } while (plVar45 != (long *)0x0);
    if ((void *)local_68._0_8_ != (void *)0x0) {
      pvVar34 = (void *)local_68._0_8_;
      if (local_48._4_4_ != 0) {
        uVar28 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
        if (uVar28 == 0) goto LAB_0011fcce;
LAB_0011f785:
        lVar32 = 0;
        do {
          if (*(int *)(local_68._8_8_ + lVar32) != 0) {
            *(int *)(local_68._8_8_ + lVar32) = 0;
            Memory::free_static(*(void **)((long)pvVar34 + lVar32 * 2),false);
            *(undefined8 *)(local_68._0_8_ + lVar32 * 2) = 0;
            pvVar34 = (void *)local_68._0_8_;
          }
          lVar32 = lVar32 + 4;
        } while (lVar32 != (ulong)uVar28 * 4);
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
        if (pvVar34 == (void *)0x0) goto LAB_0011f7df;
      }
LAB_0011f92b:
      Memory::free_static(pvVar34,false);
      Memory::free_static((void *)local_68._8_8_,false);
    }
  }
LAB_0011f7df:
  puVar29 = puVar31 + 3;
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  puVar44 = *(undefined8 **)(this + 0x20);
  if (puVar44 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar31;
  }
  else {
    *puVar44 = puVar31;
    puVar31[1] = puVar44;
  }
  *(undefined8 **)(this + 0x20) = puVar31;
  if (*(long *)param_1 == 0) {
    uVar28 = StringName::get_empty_hash();
  }
  else {
    uVar28 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar28 == 0) {
    uVar28 = 1;
  }
  uVar30 = (ulong)uVar28;
  uVar42 = 0;
  lVar32 = *(long *)(this + 0x10);
  lVar40 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar35 = CONCAT44(0,uVar27);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar30 * lVar40;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar35;
  lVar39 = SUB168(auVar7 * auVar19,8);
  lVar38 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar32 + lVar39 * 4);
  iVar37 = SUB164(auVar7 * auVar19,8);
  uVar41 = *puVar2;
  while (uVar41 != 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar41 * lVar40;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)((iVar37 + uVar27) - SUB164(auVar8 * auVar20,8)) * lVar40;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar35;
    uVar28 = SUB164(auVar9 * auVar21,8);
    puVar44 = puVar31;
    if (uVar28 < uVar42) {
      *puVar2 = (uint)uVar30;
      uVar30 = (ulong)uVar41;
      puVar1 = (undefined8 *)(lVar38 + lVar39 * 8);
      puVar44 = (undefined8 *)*puVar1;
      *puVar1 = puVar31;
      uVar42 = uVar28;
    }
    uVar28 = (uint)uVar30;
    uVar42 = uVar42 + 1;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)(iVar37 + 1) * lVar40;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar35;
    lVar39 = SUB168(auVar10 * auVar22,8);
    puVar2 = (uint *)(lVar32 + lVar39 * 4);
    iVar37 = SUB164(auVar10 * auVar22,8);
    puVar31 = puVar44;
    uVar41 = *puVar2;
  }
  *(undefined8 **)(lVar38 + lVar39 * 8) = puVar31;
  *puVar2 = uVar28;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011f584:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar29;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0011fc58:
  do {
    piVar36 = (int *)(*(long *)(lVar32 + 0x28) + lVar40);
    if (*piVar36 != 0) {
      *piVar36 = 0;
      Memory::free_static(*(void **)(*(long *)(lVar32 + 0x20) + lVar40 * 2),false);
      *(undefined8 *)(*(long *)(lVar32 + 0x20) + lVar40 * 2) = 0;
    }
    lVar40 = lVar40 + 4;
  } while (lVar40 != (ulong)uVar27 << 2);
  uVar28 = *(uint *)(lVar32 + 0x40);
  *(undefined4 *)(lVar32 + 0x44) = 0;
  *(undefined1 (*) [16])(lVar32 + 0x30) = (undefined1  [16])0x0;
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar28 * 4);
LAB_0011fa51:
  if (uVar27 < 0x17) {
LAB_0011fa56:
    if (uVar28 != 0x1c) {
      uVar30 = (ulong)uVar28;
      do {
        uVar27 = (int)uVar30 + 1;
        uVar30 = (ulong)uVar27;
        if (0x16 < *(uint *)(hash_table_size_primes + uVar30 * 4)) {
          if (uVar27 != uVar28) {
            if (*(long *)(lVar32 + 0x20) == 0) {
              *(uint *)(lVar32 + 0x40) = uVar27;
            }
            else {
              HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
              ::_resize_and_rehash
                        ((HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                          *)(lVar32 + 0x18),uVar27);
            }
          }
          goto LAB_0011faa2;
        }
      } while (uVar27 != 0x1c);
    }
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0011faa2:
  puVar29 = (undefined8 *)(*(long *)(*(long *)(this + 8) + (ulong)uVar42 * 8) + 0x18);
  goto LAB_0011f584;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* CowData<float>::_realloc(long) */

undefined8 __thiscall CowData<float>::_realloc(CowData<float> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* Vector<float> convert_array_std140<Vector4, float>(Variant const&, bool) */

Variant * convert_array_std140<Vector4,float>(Variant *param_1,bool param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  Variant *pVVar4;
  bool in_DL;
  int iVar5;
  undefined7 in_register_00000031;
  int iVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined8 uVar8;
  undefined8 in_XMM1_Qa;
  Variant local_60 [16];
  undefined8 *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)CONCAT71(in_register_00000031,param_2);
  if ((iVar2 - 0x23U < 4) || (iVar2 == 0x1c)) {
    iVar5 = 0;
    Variant::operator_cast_to_Array(local_60);
    iVar2 = Array::size();
    if (0 < iVar2) {
LAB_0011febc:
      iVar6 = (int)local_60;
      piVar3 = (int *)Array::get(iVar6);
      if (*piVar3 - 2U < 2) goto LAB_0011feb0;
      iVar2 = Array::size();
      local_50[0] = (undefined8 *)0x0;
      CowData<float>::resize<false>((CowData<float> *)local_50,(long)(iVar2 * 4));
      iVar5 = 0;
      CowData<float>::_copy_on_write((CowData<float> *)local_50);
      puVar1 = local_50[0];
      puVar7 = local_50[0];
      if (0 < iVar2) {
        do {
          iVar5 = iVar5 + 1;
          pVVar4 = (Variant *)Array::get(iVar6);
          uVar8 = convert_to_vector<Vector4>(pVVar4,in_DL);
          *puVar7 = uVar8;
          puVar7[1] = in_XMM1_Qa;
          puVar7 = puVar7 + 2;
        } while (iVar2 != iVar5);
      }
      *(undefined8 **)(param_1 + 8) = puVar1;
      goto LAB_0011ff56;
    }
LAB_0011ff78:
    Variant::operator_cast_to_Vector(param_1);
LAB_0011ff56:
    Array::~Array((Array *)local_60);
  }
  else if (iVar2 < 0x1c) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    Variant::operator_cast_to_Vector(param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_0011feb0:
  iVar5 = iVar5 + 1;
  if (iVar2 == iVar5) goto LAB_0011ff78;
  goto LAB_0011febc;
}



/* Vector<float> convert_array_std140<Vector3, float>(Variant const&, bool) */

Variant * convert_array_std140<Vector3,float>(Variant *param_1,bool param_2)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  int *piVar3;
  Variant *pVVar4;
  bool in_DL;
  undefined7 in_register_00000031;
  int iVar5;
  int iVar6;
  undefined1 (*pauVar7) [12];
  long in_FS_OFFSET;
  undefined1 auVar8 [12];
  Variant local_70 [16];
  undefined1 (*local_60 [2]) [12];
  undefined1 local_4c [12];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)CONCAT71(in_register_00000031,param_2);
  if ((iVar2 - 0x23U < 4) || (iVar2 == 0x1c)) {
    iVar6 = 0;
    Variant::operator_cast_to_Array(local_70);
    iVar2 = Array::size();
    if (0 < iVar2) {
LAB_0012003c:
      iVar5 = (int)local_70;
      piVar3 = (int *)Array::get(iVar5);
      if (*piVar3 - 2U < 2) goto LAB_00120030;
      iVar2 = Array::size();
      local_60[0] = (undefined1 (*) [12])0x0;
      CowData<float>::resize<false>((CowData<float> *)local_60,(long)(iVar2 * 3));
      CowData<float>::_copy_on_write((CowData<float> *)local_60);
      pauVar1 = local_60[0];
      auVar8._8_4_ = local_4c._8_4_;
      auVar8._0_8_ = local_4c._0_8_;
      if (0 < iVar2) {
        iVar6 = 0;
        pauVar7 = local_60[0];
        do {
          iVar6 = iVar6 + 1;
          local_4c = auVar8;
          pVVar4 = (Variant *)Array::get(iVar5);
          auVar8 = convert_to_vector<Vector3>(pVVar4,in_DL);
          *pauVar7 = auVar8;
          pauVar7 = pauVar7 + 1;
        } while (iVar2 != iVar6);
      }
      *(undefined1 (**) [12])(param_1 + 8) = pauVar1;
      goto LAB_001200f0;
    }
LAB_00120110:
    Variant::operator_cast_to_Vector(param_1);
    auVar8._8_4_ = local_4c._8_4_;
    auVar8._0_8_ = local_4c._0_8_;
LAB_001200f0:
    local_4c = auVar8;
    Array::~Array((Array *)local_70);
  }
  else if (iVar2 < 0x1c) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    Variant::operator_cast_to_Vector(param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_00120030:
  iVar6 = iVar6 + 1;
  if (iVar2 == iVar6) goto LAB_00120110;
  goto LAB_0012003c;
}



/* Vector<float> convert_array_std140<Vector2, float>(Variant const&, bool) */

Variant * convert_array_std140<Vector2,float>(Variant *param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  Variant *pVVar4;
  bool in_DL;
  int iVar5;
  long lVar6;
  undefined7 in_register_00000031;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 uVar8;
  Variant local_60 [16];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)CONCAT71(in_register_00000031,param_2);
  if ((iVar2 - 0x23U < 4) || (iVar2 == 0x1c)) {
    iVar5 = 0;
    Variant::operator_cast_to_Array(local_60);
    iVar2 = Array::size();
    if (0 < iVar2) {
LAB_001201dc:
      iVar7 = (int)local_60;
      piVar3 = (int *)Array::get(iVar7);
      if (*piVar3 - 2U < 2) goto LAB_001201d0;
      iVar2 = Array::size();
      local_50[0] = 0;
      CowData<float>::resize<false>((CowData<float> *)local_50,(long)(iVar2 * 2));
      lVar6 = 0;
      CowData<float>::_copy_on_write((CowData<float> *)local_50);
      lVar1 = local_50[0];
      if (0 < iVar2) {
        do {
          pVVar4 = (Variant *)Array::get(iVar7);
          uVar8 = convert_to_vector<Vector2>(pVVar4,in_DL);
          *(undefined8 *)(lVar1 + lVar6 * 8) = uVar8;
          lVar6 = lVar6 + 1;
        } while (lVar6 != iVar2);
      }
      *(long *)(param_1 + 8) = lVar1;
      goto LAB_0012025f;
    }
LAB_00120280:
    Variant::operator_cast_to_Vector(param_1);
LAB_0012025f:
    Array::~Array((Array *)local_60);
  }
  else if (iVar2 < 0x1c) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    Variant::operator_cast_to_Vector(param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_001201d0:
  iVar5 = iVar5 + 1;
  if (iVar2 == iVar5) goto LAB_00120280;
  goto LAB_001201dc;
}



/* CowData<RendererRD::TextureStorage::RenderTarget*>::_realloc(long) */

undefined8 __thiscall
CowData<RendererRD::TextureStorage::RenderTarget*>::_realloc
          (CowData<RendererRD::TextureStorage::RenderTarget*> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RendererRD::TextureStorage::RenderTarget*>::resize<false>(long) */

undefined8 __thiscall
CowData<RendererRD::TextureStorage::RenderTarget*>::resize<false>
          (CowData<RendererRD::TextureStorage::RenderTarget*> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00120520:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00120520;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_00120431;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00120431:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<RenderingDevice::Uniform>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::_realloc(CowData<RenderingDevice::Uniform> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RenderingDevice::Uniform>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::resize<false>
          (CowData<RenderingDevice::Uniform> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar9 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar8 * 0x28;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_001208b0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x28 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_001208b0;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00120741:
        if (lVar11 != lVar9) {
          uVar4 = _realloc(this,lVar11);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar2 = lVar8 + uVar10 * 0x28;
        if (*(long *)(lVar2 + 0x20) != 0) break;
        uVar10 = uVar10 + 1;
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00120741;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar2 + 0x20) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar8 = *(long *)(lVar2 + 0x20);
        *(undefined8 *)(lVar2 + 0x20) = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
      uVar10 = uVar10 + 1;
      lVar8 = *(long *)this;
    }
    goto LAB_00120906;
  }
  if (lVar11 == lVar9) {
LAB_00120823:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00120906:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00120800;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00120823;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar8 = 0;
  }
  uVar4 = _LC201;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_00120800:
  puVar7[-1] = param_1;
  return 0;
}



/* void RendererRD::MaterialStorage::Samplers::append_uniforms<Vector<RenderingDevice::Uniform>
   >(Vector<RenderingDevice::Uniform>&, int) const */

void __thiscall
RendererRD::MaterialStorage::Samplers::append_uniforms<Vector<RenderingDevice::Uniform>>
          (Samplers *this,Vector *param_1,int param_2)

{
  long in_FS_OFFSET;
  undefined4 local_58;
  int local_54;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *(undefined8 *)(this + 0x28);
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  local_54 = param_2;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  local_48 = *(undefined8 *)(this + 0x48);
  local_54 = param_2 + 1;
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  local_48 = *(undefined8 *)(this + 0x68);
  local_54 = param_2 + 2;
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  local_54 = param_2 + 3;
  local_48 = *(undefined8 *)(this + 0x88);
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  local_54 = param_2 + 4;
  local_48 = *(undefined8 *)(this + 0xa8);
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  local_54 = param_2 + 5;
  local_48 = *(undefined8 *)(this + 200);
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  local_48 = *(undefined8 *)(this + 0x30);
  local_54 = param_2 + 6;
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  local_48 = *(undefined8 *)(this + 0x50);
  local_54 = param_2 + 7;
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  local_48 = *(undefined8 *)(this + 0x70);
  local_54 = param_2 + 8;
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  local_54 = param_2 + 9;
  local_48 = *(undefined8 *)(this + 0x90);
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  local_54 = param_2 + 10;
  local_48 = *(undefined8 *)(this + 0xb0);
  local_50 = 0;
  local_38 = 0;
  local_58 = 0;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  local_50 = 0;
  local_48 = *(undefined8 *)(this + 0xd0);
  local_58 = 0;
  local_38 = 0;
  local_54 = param_2 + 0xb;
  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform> *)param_1,&local_58)
  ;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashMap<int, RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > > > > >::insert(StringName const&, HashMap<int,
   RID, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, RID> > > const&, bool) */

StringName *
HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
::insert(StringName *param_1,HashMap *param_2,bool param_3)

{
  HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
  *this;
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  void *pvVar28;
  HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
  *in_RCX;
  uint uVar29;
  int iVar30;
  undefined7 in_register_00000011;
  StringName *pSVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  char in_R8B;
  uint uVar35;
  ulong uVar36;
  uint uVar37;
  long *plVar38;
  long in_FS_OFFSET;
  int local_90 [2];
  undefined1 local_88 [16];
  long local_78;
  RID local_70 [8];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pSVar31 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar20 = (ulong)uVar22;
    uVar24 = uVar20 * 4;
    uVar36 = uVar20 * 8;
    uVar27 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 0x10) = uVar27;
    pvVar28 = (void *)Memory::alloc_static(uVar36,false);
    *(void **)(param_2 + 8) = pvVar28;
    if (uVar22 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)pvVar28 + uVar36)) && (pvVar28 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)pvVar28 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar20 != uVar24);
      }
      else {
        memset(__s,0,uVar24);
        memset(pvVar28,0,uVar36);
      }
      goto LAB_00120c19;
    }
    iVar30 = *(int *)(param_2 + 0x2c);
    if (pvVar28 == (void *)0x0) goto LAB_00120db9;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00120c25;
LAB_00120ddb:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      plVar25 = (long *)0x0;
      goto LAB_00121186;
    }
    _resize_and_rehash((HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00120c19:
    iVar30 = *(int *)(param_2 + 0x2c);
    if (iVar30 != 0) {
LAB_00120c25:
      uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar24 = CONCAT44(0,uVar21);
      lVar26 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar31 == 0) {
        uVar23 = StringName::get_empty_hash();
      }
      else {
        uVar23 = *(uint *)(*(long *)pSVar31 + 0x20);
      }
      if (uVar23 == 0) {
        uVar23 = 1;
      }
      uVar37 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar23 * lVar26;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar24;
      lVar32 = SUB168(auVar4 * auVar12,8);
      uVar35 = *(uint *)(*(long *)(param_2 + 0x10) + lVar32 * 4);
      uVar29 = SUB164(auVar4 * auVar12,8);
      if (uVar35 != 0) {
        do {
          if ((uVar23 == uVar35) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar32 * 8) + 0x10) == *(long *)pSVar31))
          {
            plVar25 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar29 * 8);
            this = (HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                    *)(plVar25 + 3);
            if (in_RCX != this) {
              uVar22 = *(uint *)(plVar25 + 8);
              uVar21 = *(uint *)(hash_table_size_primes + (ulong)uVar22 * 4);
              if ((*(int *)((long)plVar25 + 0x44) != 0) && (plVar25[4] != 0)) {
                if (uVar21 != 0) {
                  lVar26 = 0;
                  do {
                    if (*(int *)(plVar25[5] + lVar26) != 0) {
                      *(int *)(plVar25[5] + lVar26) = 0;
                      Memory::free_static(*(void **)(plVar25[4] + lVar26 * 2),false);
                      *(undefined8 *)(plVar25[4] + lVar26 * 2) = 0;
                    }
                    lVar26 = lVar26 + 4;
                  } while ((ulong)uVar21 << 2 != lVar26);
                  uVar22 = *(uint *)(plVar25 + 8);
                  uVar21 = *(uint *)(hash_table_size_primes + (ulong)uVar22 * 4);
                }
                *(undefined4 *)((long)plVar25 + 0x44) = 0;
                *(undefined1 (*) [16])(plVar25 + 6) = (undefined1  [16])0x0;
              }
              if (uVar21 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4))
              {
                if (uVar22 != 0x1c) {
                  uVar24 = (ulong)uVar22;
                  do {
                    uVar21 = (int)uVar24 + 1;
                    uVar24 = (ulong)uVar21;
                    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4) <=
                        *(uint *)(hash_table_size_primes + uVar24 * 4)) {
                      if (uVar21 != uVar22) {
                        if (plVar25[4] == 0) {
                          *(uint *)(plVar25 + 8) = uVar21;
                        }
                        else {
                          HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                          ::_resize_and_rehash(this,uVar21);
                        }
                      }
                      goto LAB_00120d63;
                    }
                  } while (uVar21 != 0x1c);
                }
                _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                                 "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true."
                                 ,0,0,0);
              }
LAB_00120d63:
              if (*(long *)(in_RCX + 8) != 0) {
                for (puVar2 = *(undefined8 **)(in_RCX + 0x18); puVar2 != (undefined8 *)0x0;
                    puVar2 = (undefined8 *)*puVar2) {
                  HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
                  ::insert((int *)local_88,this,(bool)((char)puVar2 + '\x10'));
                }
              }
              plVar25 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar29 * 8);
            }
            goto LAB_00121186;
          }
          uVar37 = uVar37 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar29 + 1) * lVar26;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar24;
          lVar32 = SUB168(auVar5 * auVar13,8);
          uVar35 = *(uint *)(*(long *)(param_2 + 0x10) + lVar32 * 4);
          uVar29 = SUB164(auVar5 * auVar13,8);
        } while ((uVar35 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar35 * lVar26, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar24, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar21 + uVar29) - SUB164(auVar6 * auVar14,8)) * lVar26,
                auVar15._8_8_ = 0, auVar15._0_8_ = uVar24, uVar37 <= SUB164(auVar7 * auVar15,8)));
      }
      iVar30 = *(int *)(param_2 + 0x2c);
    }
LAB_00120db9:
    if ((float)uVar22 * __LC101 < (float)(iVar30 + 1)) goto LAB_00120ddb;
  }
  local_88 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_78,pSVar31);
  local_48 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  uVar24 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RCX + 0x28) * 4) <=
          *(uint *)(hash_table_size_primes + uVar24 * 4)) {
        local_48 = uVar24 & 0xffffffff;
        iVar30 = *(int *)(in_RCX + 0x2c);
        goto joined_r0x00121242;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  iVar30 = *(int *)(in_RCX + 0x2c);
joined_r0x00121242:
  if ((iVar30 != 0) && (plVar25 = *(long **)(in_RCX + 0x18), plVar25 != (long *)0x0)) {
    do {
      HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
      ::insert(local_90,local_70,(bool)((char)plVar25 + '\x10'));
      plVar25 = (long *)*plVar25;
    } while (plVar25 != (long *)0x0);
  }
  plVar25 = (long *)operator_new(0x48,"");
  *plVar25 = local_88._0_8_;
  plVar25[1] = local_88._8_8_;
  StringName::StringName((StringName *)(plVar25 + 2),(StringName *)&local_78);
  plVar25[8] = 0;
  *(undefined1 (*) [16])(plVar25 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(plVar25 + 6) = (undefined1  [16])0x0;
  lVar26 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) <=
          *(uint *)(hash_table_size_primes + lVar26 * 4)) {
        *(int *)(plVar25 + 8) = (int)lVar26;
        goto joined_r0x00121224;
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
joined_r0x00121224:
  pvVar28 = (void *)local_68._0_8_;
  if (local_48._4_4_ == 0) {
joined_r0x001211c8:
    if (pvVar28 != (void *)0x0) goto LAB_001211ce;
  }
  else if ((long *)local_58._0_8_ == (long *)0x0) {
    if ((void *)local_68._0_8_ != (void *)0x0) {
LAB_00120fdf:
      uVar22 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      if (uVar22 != 0) {
        lVar26 = 0;
        do {
          if (*(int *)(local_68._8_8_ + lVar26) != 0) {
            *(int *)(local_68._8_8_ + lVar26) = 0;
            Memory::free_static(*(void **)((long)pvVar28 + lVar26 * 2),false);
            *(undefined8 *)(local_68._0_8_ + lVar26 * 2) = 0;
            pvVar28 = (void *)local_68._0_8_;
          }
          lVar26 = lVar26 + 4;
        } while ((ulong)uVar22 << 2 != lVar26);
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
        goto joined_r0x001211c8;
      }
      local_48 = local_48 & 0xffffffff;
      local_58 = (undefined1  [16])0x0;
      goto LAB_001211ce;
    }
  }
  else {
    plVar34 = (long *)local_58._0_8_;
    do {
      HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>
      ::insert(local_90,(RID *)(plVar25 + 3),(bool)((char)plVar34 + '\x10'));
      plVar34 = (long *)*plVar34;
    } while (plVar34 != (long *)0x0);
    if ((void *)local_68._0_8_ != (void *)0x0) {
      pvVar28 = (void *)local_68._0_8_;
      if (local_48._4_4_ != 0) goto LAB_00120fdf;
LAB_001211ce:
      Memory::free_static(pvVar28,false);
      Memory::free_static((void *)local_68._8_8_,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar25;
    *(long **)(param_2 + 0x20) = plVar25;
LAB_00121094:
    lVar26 = *(long *)pSVar31;
    if (lVar26 != 0) goto LAB_001210a0;
LAB_00121207:
    uVar22 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar26 = *(long *)(param_2 + 0x18);
      *(long **)(lVar26 + 8) = plVar25;
      *plVar25 = lVar26;
      *(long **)(param_2 + 0x18) = plVar25;
      goto LAB_00121094;
    }
    *puVar2 = plVar25;
    plVar25[1] = (long)puVar2;
    lVar26 = *(long *)pSVar31;
    *(long **)(param_2 + 0x20) = plVar25;
    if (lVar26 == 0) goto LAB_00121207;
LAB_001210a0:
    uVar22 = *(uint *)(lVar26 + 0x20);
  }
  lVar26 = *(long *)(param_2 + 0x10);
  if (uVar22 == 0) {
    uVar22 = 1;
  }
  uVar24 = (ulong)uVar22;
  uVar35 = 0;
  lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar36 = CONCAT44(0,uVar21);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar24 * lVar32;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar36;
  lVar33 = SUB168(auVar8 * auVar16,8);
  lVar3 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar26 + lVar33 * 4);
  iVar30 = SUB164(auVar8 * auVar16,8);
  uVar23 = *puVar1;
  plVar34 = plVar25;
  while (uVar23 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar23 * lVar32;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar36;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar21 + iVar30) - SUB164(auVar9 * auVar17,8)) * lVar32;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar36;
    uVar22 = SUB164(auVar10 * auVar18,8);
    plVar38 = plVar34;
    if (uVar22 < uVar35) {
      *puVar1 = (uint)uVar24;
      uVar24 = (ulong)uVar23;
      puVar2 = (undefined8 *)(lVar3 + lVar33 * 8);
      plVar38 = (long *)*puVar2;
      *puVar2 = plVar34;
      uVar35 = uVar22;
    }
    uVar22 = (uint)uVar24;
    uVar35 = uVar35 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar30 + 1) * lVar32;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar36;
    lVar33 = SUB168(auVar11 * auVar19,8);
    puVar1 = (uint *)(lVar26 + lVar33 * 4);
    iVar30 = SUB164(auVar11 * auVar19,8);
    plVar34 = plVar38;
    uVar23 = *puVar1;
  }
  *(long **)(lVar3 + lVar33 * 8) = plVar34;
  *puVar1 = uVar22;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00121186:
  *(long **)param_1 = plVar25;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RID_Alloc<RendererRD::MaterialStorage::Shader, true>::initialize_rid(RID,
   RendererRD::MaterialStorage::Shader const&) */

void __thiscall
RID_Alloc<RendererRD::MaterialStorage::Shader,true>::initialize_rid
          (RID_Alloc<RendererRD::MaterialStorage::Shader,true> *this,ulong param_2,
          undefined8 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  long in_FS_OFFSET;
  StringName aSStack_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && ((uint)param_2 < *(uint *)(this + 0x1c))) {
    puVar11 = (undefined8 *)
              (((param_2 & 0xffffffff) % (ulong)*(uint *)(this + 0x18)) * 0x80 +
              *(long *)(*(long *)(this + 8) +
                       ((param_2 & 0xffffffff) / (ulong)*(uint *)(this + 0x18)) * 8));
    if ((int)*(uint *)(puVar11 + 0xf) < 0) {
      uVar12 = (uint)(param_2 >> 0x20);
      if (uVar12 == (*(uint *)(puVar11 + 0xf) & 0x7fffffff)) {
        uVar7 = *param_3;
        puVar11[1] = 0;
        lVar6 = param_3[1];
        *(uint *)(puVar11 + 0xf) = uVar12;
        *puVar11 = uVar7;
        if (lVar6 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 1),(CowData *)(param_3 + 1));
        }
        puVar11[2] = 0;
        if (param_3[2] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 2),(CowData *)(param_3 + 2));
        }
        uVar2 = *(undefined4 *)(param_3 + 3);
        puVar11[9] = 0;
        *(undefined1 (*) [16])(puVar11 + 5) = (undefined1  [16])0x0;
        *(undefined4 *)(puVar11 + 3) = uVar2;
        uVar12 = *(uint *)(param_3 + 9);
        *(undefined1 (*) [16])(puVar11 + 7) = (undefined1  [16])0x0;
        lVar6 = 1;
        if (5 < *(uint *)(hash_table_size_primes + (ulong)uVar12 * 4)) {
          do {
            if (*(uint *)(hash_table_size_primes + (ulong)uVar12 * 4) <=
                *(uint *)(hash_table_size_primes + lVar6 * 4)) {
              *(int *)(puVar11 + 9) = (int)lVar6;
              goto LAB_00121592;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x1d);
          _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                           "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0
                           ,0,0);
        }
LAB_00121592:
        if ((*(int *)((long)param_3 + 0x4c) != 0) &&
           (plVar10 = (long *)param_3[7], plVar10 != (long *)0x0)) {
          do {
            HashMap<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>>
            ::insert(aSStack_48,(HashMap *)(puVar11 + 4),(bool)((char)plVar10 + '\x10'));
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        puVar11[0xe] = 0;
        *(undefined1 (*) [16])(puVar11 + 10) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
        uVar1 = param_3[0xe];
        puVar11[0xe] = uVar1;
        if ((int)(uVar1 >> 0x20) != 0) {
          uVar12 = *(uint *)(hash_table_size_primes + (uVar1 & 0xffffffff) * 4);
          uVar1 = (ulong)uVar12 * 4;
          uVar7 = Memory::alloc_static(uVar1,false);
          puVar11[0xd] = uVar7;
          uVar7 = Memory::alloc_static((ulong)uVar12 * 8,false);
          puVar11[10] = uVar7;
          uVar7 = Memory::alloc_static(uVar1,false);
          puVar11[0xc] = uVar7;
          lVar6 = Memory::alloc_static(uVar1,false);
          puVar11[0xb] = lVar6;
          if (*(int *)((long)puVar11 + 0x74) != 0) {
            lVar3 = puVar11[10];
            lVar4 = param_3[10];
            lVar8 = 0;
            lVar5 = param_3[0xc];
            lVar9 = puVar11[0xc];
            do {
              *(undefined8 *)(lVar3 + lVar8 * 8) = *(undefined8 *)(lVar4 + lVar8 * 8);
              *(undefined4 *)(lVar9 + lVar8 * 4) = *(undefined4 *)(lVar5 + lVar8 * 4);
              lVar8 = lVar8 + 1;
            } while ((uint)lVar8 < *(uint *)((long)puVar11 + 0x74));
          }
          if (uVar12 != 0) {
            lVar3 = param_3[0xd];
            lVar4 = puVar11[0xd];
            lVar9 = 0;
            lVar5 = param_3[0xb];
            do {
              *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
              *(undefined4 *)(lVar6 + lVar9) = *(undefined4 *)(lVar5 + lVar9);
              lVar9 = lVar9 + 4;
            } while (uVar1 - lVar9 != 0);
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0012179f;
      }
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0xfc,
                       "Method/function failed. Returning: nullptr",
                       "Attempting to initialize the wrong RID",0,0);
    }
    else {
      _err_print_error("get_or_null","./core/templates/rid_owner.h",0xf8,
                       "Method/function failed. Returning: nullptr",
                       "Initializing already initialized RID",0,0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("initialize_rid","./core/templates/rid_owner.h",0x128,
                     "Parameter \"mem\" is null.",0,0);
    return;
  }
LAB_0012179f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::MaterialStorage::Material, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::MaterialStorage::Material,true>::~RID_Alloc
          (RID_Alloc<RendererRD::MaterialStorage::Material,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RID_Alloc<RendererRD::MaterialStorage::Shader, true>::~RID_Alloc() */

void __thiscall
RID_Alloc<RendererRD::MaterialStorage::Shader,true>::~RID_Alloc
          (RID_Alloc<RendererRD::MaterialStorage::Shader,true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererRD::MaterialStorage::Material::~Material() */

void __thiscall RendererRD::MaterialStorage::Material::~Material(Material *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererRD::MaterialStorage::Shader::~Shader() */

void __thiscall RendererRD::MaterialStorage::Shader::~Shader(Shader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererRD::MaterialStorage::GlobalShaderUniforms::~GlobalShaderUniforms() */

void __thiscall
RendererRD::MaterialStorage::GlobalShaderUniforms::~GlobalShaderUniforms(GlobalShaderUniforms *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


