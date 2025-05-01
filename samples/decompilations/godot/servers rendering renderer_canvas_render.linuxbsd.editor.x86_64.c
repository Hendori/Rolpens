
/* RendererCanvasRender::Item::CommandMesh::~CommandMesh() */

void __thiscall RendererCanvasRender::Item::CommandMesh::~CommandMesh(CommandMesh *this)

{
  *(undefined ***)this = &PTR__CommandMesh_001008b8;
  if (*(long *)(this + 0x48) != 0) {
    (**(code **)(*RenderingServerGlobals::mesh_storage + 0xd8))
              (RenderingServerGlobals::mesh_storage,*(undefined8 *)(this + 0x48));
  }
  operator_delete(this,0x58);
  return;
}



/* RendererCanvasRender::Item::CommandMesh::~CommandMesh() */

void __thiscall RendererCanvasRender::Item::CommandMesh::~CommandMesh(CommandMesh *this)

{
  *(undefined ***)this = &PTR__CommandMesh_001008b8;
  if (*(long *)(this + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010006d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*RenderingServerGlobals::mesh_storage + 0xd8))
              (RenderingServerGlobals::mesh_storage,*(undefined8 *)(this + 0x48),
               *(code **)(*RenderingServerGlobals::mesh_storage + 0xd8));
    return;
  }
  return;
}



/* RendererCanvasRender::Item::get_rect() const */

Item * __thiscall RendererCanvasRender::Item::get_rect(Item *this)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_58;
  float local_54;
  float fStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0x54] == (Item)0x0) &&
     (((this[0x55] != (Item)0x0 || (((byte)this[0x38] & 8) != 0)) || (*(long *)(this + 0x70) != 0)))
     ) {
    lVar3 = *(long *)(this + 0x110);
    if (lVar3 == 0) {
      *(undefined8 *)(this + 0x58) = 0;
      *(undefined8 *)(this + 0x60) = 0;
      this[0x55] = (Item)0x0;
    }
    else {
      local_98 = 0.0;
      bVar1 = false;
      bVar2 = true;
      local_94 = 0.0;
      local_9c = 0.0;
      local_a4 = 0.0;
      local_a0 = _LC1;
      local_90 = _LC1;
      do {
        switch(*(undefined4 *)(lVar3 + 0x10)) {
        case 0:
        case 1:
          fVar7 = *(float *)(lVar3 + 0x14);
          fVar10 = *(float *)(lVar3 + 0x18);
          fVar12 = *(float *)(lVar3 + 0x1c);
          fVar16 = *(float *)(lVar3 + 0x20);
          break;
        case 2:
          fVar7 = *(float *)(lVar3 + 0x20);
          fVar10 = *(float *)(lVar3 + 0x24);
          fVar12 = *(float *)(lVar3 + 0x28);
          fVar16 = *(float *)(lVar3 + 0x2c);
          break;
        case 3:
          fVar7 = 0.0;
          fVar10 = 0.0;
          fVar12 = 0.0;
          fVar16 = 0.0;
          if (*(int *)(lVar3 + 0x14) != 0) {
            fVar16 = 0.0;
            fVar7 = *(float *)(lVar3 + 0x18);
            fVar10 = *(float *)(lVar3 + 0x1c);
            fVar12 = 0.0;
            uVar5 = 1;
            fVar8 = fVar7;
            if (1 < *(uint *)(lVar3 + 0x14)) {
              do {
                if ((fVar12 < 0.0) || (fVar16 < 0.0)) {
                  _err_print_error("expand_to","./core/math/rect2.h",0x100,
                                   "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                                   ,0,0);
                }
                uVar4 = (int)uVar5 + 1;
                fVar7 = *(float *)(lVar3 + 8 + (uVar5 + 2) * 8);
                fVar9 = *(float *)(lVar3 + 0xc + (uVar5 + 2) * 8);
                fVar15 = fVar7;
                if (fVar7 <= fVar12 + fVar8) {
                  fVar15 = fVar12 + fVar8;
                }
                if (fVar8 <= fVar7) {
                  fVar7 = fVar8;
                }
                fVar8 = fVar9;
                if (fVar9 <= fVar16 + fVar10) {
                  fVar8 = fVar16 + fVar10;
                }
                if (fVar10 <= fVar9) {
                  fVar9 = fVar10;
                }
                fVar10 = fVar9;
                fVar12 = fVar15 - fVar7;
                fVar16 = fVar8 - fVar10;
                uVar5 = (ulong)uVar4;
                fVar8 = fVar7;
              } while (uVar4 < *(uint *)(lVar3 + 0x14));
            }
          }
          break;
        case 4:
          (**(code **)(*RenderingServerGlobals::mesh_storage + 0x98))
                    (&local_58,RenderingServerGlobals::mesh_storage,*(undefined8 *)(lVar3 + 0x18),
                     *(undefined8 *)(this + 0x70));
          goto LAB_001001d0;
        case 5:
          (**(code **)(*RenderingServerGlobals::mesh_storage + 0x1e0))
                    (&local_58,RenderingServerGlobals::mesh_storage,*(undefined8 *)(lVar3 + 0x18));
LAB_001001d0:
          fVar16 = (float)local_40;
          fVar7 = local_58;
          fVar10 = local_54;
          fVar12 = fStack_44;
          break;
        case 6:
          fVar7 = 0.0;
          fVar10 = 0.0;
          fVar12 = 0.0;
          fVar16 = 0.0;
          if (*(long *)(lVar3 + 0x18) != 0) {
            (**(code **)(*RenderingServerGlobals::particles_storage + 0x130))
                      (&local_58,RenderingServerGlobals::particles_storage,
                       *(undefined8 *)(lVar3 + 0x18));
            goto LAB_001001d0;
          }
          break;
        case 7:
          local_a0 = *(float *)(lVar3 + 0x14);
          local_98 = *(float *)(lVar3 + 0x28);
          bVar1 = true;
          local_a4 = *(float *)(lVar3 + 0x18);
          local_9c = *(float *)(lVar3 + 0x1c);
          local_90 = *(float *)(lVar3 + 0x20);
          local_94 = *(float *)(lVar3 + 0x24);
        default:
          lVar3 = *(long *)(lVar3 + 8);
          goto LAB_00100172;
        }
        if (bVar1) {
          fVar15 = local_90 * fVar16;
          fVar9 = fVar16 * local_9c;
          fVar8 = local_a4 * fVar7 + local_90 * fVar10 + local_98;
          fVar18 = local_a4 * fVar12 + fVar8;
          fVar7 = fVar7 * local_a0 + fVar10 * local_9c + local_94;
          fVar10 = fVar18;
          if (fVar18 <= fVar8 + 0.0) {
            fVar10 = fVar8 + 0.0;
          }
          fVar11 = fVar18;
          if (fVar8 <= fVar18) {
            fVar11 = fVar8;
          }
          fVar8 = fVar8 + fVar15;
          fVar13 = fVar12 * local_a0 + fVar7;
          fVar12 = fVar13;
          if (fVar13 <= fVar7 + 0.0) {
            fVar12 = fVar7 + 0.0;
          }
          fVar6 = fVar13;
          if (fVar7 <= fVar13) {
            fVar6 = fVar7;
          }
          fVar7 = fVar7 + fVar9;
          if ((fVar12 - fVar6 < 0.0) || (fVar10 - fVar11 < 0.0)) {
            _err_print_error("expand_to","./core/math/rect2.h",0x100,
                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                             ,0,0);
            fVar16 = 0.0;
          }
          fVar12 = (fVar12 - fVar6) + fVar6;
          fVar17 = (fVar10 - fVar11) + fVar11;
          fVar10 = fVar7;
          if (fVar6 <= fVar7) {
            fVar10 = fVar6;
          }
          fVar15 = fVar15 + fVar18;
          fVar18 = fVar8;
          if (fVar11 <= fVar8) {
            fVar18 = fVar11;
          }
          fVar9 = fVar9 + fVar13;
          if (fVar7 <= fVar12) {
            fVar7 = fVar12;
          }
          if (fVar8 <= fVar17) {
            fVar8 = fVar17;
          }
          if ((fVar7 - fVar10 < 0.0) || (fVar8 - fVar18 < 0.0)) {
            _err_print_error("expand_to","./core/math/rect2.h",0x100,
                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                             ,0,0);
            fVar16 = 0.0;
          }
          fVar7 = (fVar7 - fVar10) + fVar10;
          fVar12 = (fVar8 - fVar18) + fVar18;
          auVar14._4_4_ = fVar16;
          auVar14._0_4_ = fVar9;
          auVar14._8_4_ = fVar16;
          auVar14._12_4_ = fVar16;
          if (fVar10 <= fVar9) {
            auVar14._0_4_ = fVar10;
          }
          fVar10 = fVar15;
          if (fVar18 <= fVar15) {
            fVar10 = fVar18;
          }
          if (fVar9 <= fVar7) {
            fVar9 = fVar7;
          }
          if (fVar15 <= fVar12) {
            fVar15 = fVar12;
          }
          fVar7 = auVar14._0_4_;
          fVar12 = fVar9 - fVar7;
          fVar16 = fVar15 - fVar10;
        }
        fVar8 = fVar10;
        if (!bVar2) {
          fVar9 = *(float *)(this + 0x60);
          if ((((fVar9 < 0.0) || (fVar15 = *(float *)(this + 100), fVar15 < 0.0)) || (fVar12 < 0.0))
             || (fVar16 < 0.0)) {
            _err_print_error("merge","./core/math/rect2.h",0xa8,
                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                             ,0,0);
            fVar15 = *(float *)(this + 100);
            fVar9 = *(float *)(this + 0x60);
          }
          fVar18 = *(float *)(this + 0x5c);
          fVar11 = *(float *)(this + 0x58);
          fVar12 = fVar12 + fVar7;
          if (fVar18 <= fVar10) {
            fVar8 = fVar18;
          }
          if (fVar11 <= fVar7) {
            fVar7 = fVar11;
          }
          if (fVar12 <= fVar11 + fVar9) {
            fVar12 = fVar11 + fVar9;
          }
          fVar9 = fVar10 + fVar16;
          if (fVar10 + fVar16 <= fVar18 + fVar15) {
            fVar9 = fVar18 + fVar15;
          }
          fVar12 = fVar12 - fVar7;
          fVar16 = fVar9 - fVar8;
        }
        lVar3 = *(long *)(lVar3 + 8);
        *(float *)(this + 0x58) = fVar7;
        *(float *)(this + 0x5c) = fVar8;
        *(float *)(this + 0x60) = fVar12;
        *(float *)(this + 100) = fVar16;
        bVar2 = false;
LAB_00100172:
      } while (lVar3 != 0);
      this[0x55] = (Item)0x0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this + 0x58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


