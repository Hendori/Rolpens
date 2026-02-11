
/* hb_syllabic_insert_dotted_circles(hb_font_t*, hb_buffer_t*, unsigned int, unsigned int, int, int)
    */

undefined8
hb_syllabic_insert_dotted_circles
          (hb_font_t *param_1,hb_buffer_t *param_2,uint param_3,uint param_4,int param_5,int param_6
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long in_FS_OFFSET;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_2 + 0x18) & 0x10) == 0) {
    if (((byte)param_2[0xc0] & 0x40) == 0) {
      if (*(long *)(param_2 + 0xd0) != 0) {
        hb_buffer_t::message
                  (param_2,param_1,
                   "skipped inserting dotted-circles because there is no broken syllables");
      }
    }
    else if ((*(long *)(param_2 + 0xd0) == 0) ||
            (cVar7 = hb_buffer_t::message(param_2,param_1,"start inserting dotted-circles"),
            cVar7 != '\0')) {
      local_7c = 0;
      lVar14 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
      if (lVar14 != 0) {
        lVar14 = *(long *)(lVar14 + 0x10);
      }
      iVar8 = (**(code **)(*(long *)(param_1 + 0x90) + 0x30))
                        (param_1,*(undefined8 *)(param_1 + 0x98),0x25cc,&local_7c,lVar14);
      uVar5 = local_7c;
      if (iVar8 != 0) {
        local_68 = 0;
        local_78 = (undefined1  [16])0x0;
        if (param_6 == -1) {
          param_6 = 0;
        }
        hb_buffer_t::clear_output();
        *(undefined4 *)(param_2 + 0x5c) = 0;
        uVar9 = 0;
        uVar15 = 0;
        if (*(int *)(param_2 + 0x60) != 0) {
          do {
            auVar6 = local_78;
            if (param_2[0x58] == (hb_buffer_t)0x0) break;
            lVar11 = *(long *)(param_2 + 0x70);
            lVar14 = lVar11 + (ulong)uVar9 * 0x14;
            bVar3 = *(byte *)(lVar14 + 0xf);
            uVar13 = (uint)bVar3;
            uVar12 = (uint)param_2;
            if ((uVar15 == bVar3) || ((uVar13 & 0xf) != param_3)) {
              uVar13 = uVar15;
              if (param_2[0x5a] != (hb_buffer_t)0x0) {
                if ((lVar11 != *(long *)(param_2 + 0x78)) ||
                   (uVar15 = *(uint *)(param_2 + 100), uVar9 != uVar15)) {
                  cVar7 = hb_buffer_t::make_room_for(uVar12,1);
                  if (cVar7 == '\0') {
                    uVar9 = *(uint *)(param_2 + 0x5c);
                    goto LAB_00100199;
                  }
                  puVar1 = (undefined8 *)
                           (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14);
                  uVar10 = puVar1[1];
                  puVar2 = (undefined8 *)
                           (*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 100) * 0x14);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar10;
                  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
                  uVar15 = *(uint *)(param_2 + 100);
                }
                *(uint *)(param_2 + 100) = uVar15 + 1;
              }
              uVar9 = *(int *)(param_2 + 0x5c) + 1;
              *(uint *)(param_2 + 0x5c) = uVar9;
            }
            else {
              uVar10 = *(undefined8 *)(lVar14 + 4);
              local_78._0_4_ = uVar5;
              local_68 = CONCAT13((char)param_6,CONCAT12((char)param_4,(undefined2)local_68));
              local_58 = uVar5;
              uStack_54 = auVar6._4_4_;
              uStack_50 = auVar6._8_4_;
              uStack_4c = auVar6._12_4_;
              local_48 = local_68;
              if ((param_5 != -1) &&
                 (uVar9 = *(uint *)(param_2 + 0x5c), uVar9 < *(uint *)(param_2 + 0x60))) {
                while ((lVar14 = lVar11 + (ulong)uVar9 * 0x14, bVar3 == *(byte *)(lVar14 + 0xf) &&
                       ((uint)*(byte *)(lVar14 + 0x12) == param_5))) {
                  if (param_2[0x5a] == (hb_buffer_t)0x0) {
LAB_0010035f:
                    uVar9 = *(int *)(param_2 + 0x5c) + 1;
                    *(uint *)(param_2 + 0x5c) = uVar9;
                  }
                  else {
                    if ((lVar11 == *(long *)(param_2 + 0x78)) &&
                       (uVar15 = *(uint *)(param_2 + 100), uVar9 == uVar15)) {
LAB_00100359:
                      *(uint *)(param_2 + 100) = uVar15 + 1;
                      goto LAB_0010035f;
                    }
                    cVar7 = hb_buffer_t::make_room_for(uVar12,1);
                    if (cVar7 != '\0') {
                      puVar1 = (undefined8 *)
                               (*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 100) * 0x14);
                      puVar2 = (undefined8 *)
                               (*(long *)(param_2 + 0x70) + (ulong)*(uint *)(param_2 + 0x5c) * 0x14)
                      ;
                      uVar4 = puVar2[1];
                      *puVar1 = *puVar2;
                      puVar1[1] = uVar4;
                      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
                      uVar15 = *(uint *)(param_2 + 100);
                      goto LAB_00100359;
                    }
                    uVar9 = *(uint *)(param_2 + 0x5c);
                  }
                  if ((*(uint *)(param_2 + 0x60) <= uVar9) || (param_2[0x58] == (hb_buffer_t)0x0))
                  break;
                  lVar11 = *(long *)(param_2 + 0x70);
                }
              }
              cVar7 = hb_buffer_t::make_room_for(uVar12,0);
              if (cVar7 != '\0') {
                uStack_54 = (undefined4)uVar10;
                uStack_50 = (undefined4)((ulong)uVar10 >> 0x20);
                uStack_4c = CONCAT13(bVar3,(undefined3)uStack_4c);
                puVar1 = (undefined8 *)
                         (*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 100) * 0x14);
                *puVar1 = CONCAT44(uStack_54,local_58);
                puVar1[1] = CONCAT44(uStack_4c,uStack_50);
                *(undefined4 *)(puVar1 + 2) = local_48;
                *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              }
              uVar9 = *(uint *)(param_2 + 0x5c);
            }
LAB_00100199:
            uVar15 = uVar13;
          } while (uVar9 < *(uint *)(param_2 + 0x60));
        }
        hb_buffer_t::sync();
        if (*(long *)(param_2 + 0xd0) != 0) {
          hb_buffer_t::message(param_2,param_1,"end inserting dotted-circles");
        }
        uVar10 = 1;
        goto LAB_00100049;
      }
    }
  }
  uVar10 = 0;
LAB_00100049:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* hb_syllabic_clear_var(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8
hb_syllabic_clear_var(hb_ot_shape_plan_t *param_1,hb_font_t *param_2,hb_buffer_t *param_3)

{
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] & 0xf7);
  return 0;
}



/* hb_buffer_t::message(hb_font_t*, char const*, ...) */

undefined8 __thiscall hb_buffer_t::message(hb_buffer_t *this,hb_font_t *param_1,char *param_2,...)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 1;
  if (*(long *)(this + 0xd0) != 0) {
    uVar2 = hb_buffer_t::message_impl((hb_font_t *)this,(char *)param_1,(__va_list_tag *)param_2);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


