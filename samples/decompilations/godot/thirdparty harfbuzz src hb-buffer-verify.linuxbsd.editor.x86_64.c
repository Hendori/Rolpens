
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* buffer_verify_error(hb_buffer_t*, hb_font_t*, char const*, ...) */

void buffer_verify_error(hb_buffer_t *param_1,hb_font_t *param_2,char *param_3,...)

{
  char in_AL;
  undefined8 in_RCX;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_d8 = 0x18;
  local_c8 = local_b8;
  local_d4 = 0x30;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  if (*(long *)(param_1 + 0xd0) == 0) {
    fwrite("harfbuzz ",1,9,_stderr);
    __vfprintf_chk(_stderr,2,param_3,&local_d8);
    fputc(10,_stderr);
  }
  else {
    hb_buffer_t::message_impl((hb_font_t *)param_1,(char *)param_2,(__va_list_tag *)param_3);
  }
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* hb_buffer_t::verify(hb_buffer_t*, hb_font_t*, hb_feature_t const*, unsigned int, char const*
   const*) */

undefined8 __thiscall
hb_buffer_t::verify(hb_buffer_t *this,hb_buffer_t *param_1,hb_font_t *param_2,hb_feature_t *param_3,
                   uint param_4,char **param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  void *__s;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  uint *local_108;
  uint local_c0;
  uint local_a0;
  uint local_9c;
  uint local_98 [8];
  uint local_78 [4];
  long local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(this + 0x1c) < 2) {
    uVar2 = hb_buffer_get_direction();
    lVar7 = hb_buffer_get_glyph_infos(this,local_98);
    if (1 < local_98[0]) {
      puVar11 = (uint *)(lVar7 + 0x1c);
      uVar3 = *(uint *)(lVar7 + 8);
      do {
        uVar4 = *puVar11;
        if ((uVar4 != uVar3) && (((uVar2 & 0xfffffffd) == 4) != uVar3 < uVar4)) {
          buffer_verify_error(this,param_2,"buffer verify error: clusters are not monotone.");
          bVar1 = false;
          goto LAB_001001fb;
        }
        puVar11 = puVar11 + 5;
        uVar3 = uVar4;
      } while ((uint *)(lVar7 + 0x30 + (ulong)(local_98[0] - 2) * 0x14) != puVar11);
    }
    bVar1 = true;
LAB_001001fb:
    if (*(uint *)(this + 0x1c) < 2) {
      lVar7 = hb_buffer_create_similar(this);
      uVar2 = hb_buffer_get_flags(lVar7);
      hb_buffer_set_flags(lVar7,uVar2 & 0xffffffdf);
      lVar8 = hb_buffer_create_similar(this);
      uVar2 = hb_buffer_get_flags(lVar8);
      hb_buffer_set_flags(lVar8,uVar2 & 0xffffffdf);
      lVar9 = hb_buffer_get_glyph_infos(this,&local_9c);
      lVar10 = hb_buffer_get_glyph_infos(param_1,local_98);
      uVar3 = hb_buffer_get_direction(this);
      uVar3 = uVar3 & 0xfffffffd;
      uVar2 = 0;
      if (uVar3 != 4) {
        uVar2 = local_98[0];
      }
      uVar16 = 1;
      local_108 = (uint *)(lVar9 + 0x1c);
      uVar4 = local_9c;
      if (1 < local_9c + 1) {
        do {
          uVar15 = uVar2;
          if (uVar16 < uVar4) {
            if ((*local_108 != *(uint *)(lVar9 + 8 + (ulong)(uVar16 - 1) * 0x14)) &&
               ((*(byte *)(lVar9 + 4 + (ulong)(uVar16 - (uVar3 != 4)) * 0x14) & 1) == 0)) {
LAB_00100303:
              if (uVar3 == 4) {
                if (uVar2 < local_98[0]) {
                  puVar11 = (uint *)(lVar10 + 8 + (ulong)uVar2 * 0x14);
                  do {
                    if (*local_108 <= *puVar11) break;
                    uVar15 = uVar15 + 1;
                    puVar11 = puVar11 + 5;
                  } while (uVar15 != local_98[0]);
                }
LAB_00100460:
                hb_buffer_clear_contents(lVar7);
                uVar4 = hb_buffer_get_flags(lVar7);
                uVar17 = uVar2;
                if (uVar2 == 0) goto LAB_0010035a;
              }
              else {
                uVar4 = uVar2;
                do {
                  uVar17 = uVar4;
                  if (uVar17 == 0) goto LAB_00100342;
                  uVar4 = uVar17 - 1;
                } while (*(uint *)(lVar9 + 8 + (ulong)(uVar16 - 1) * 0x14) <=
                         *(uint *)(lVar10 + 8 + (ulong)(uVar17 - 1) * 0x14));
                hb_buffer_clear_contents(lVar7);
                uVar4 = hb_buffer_get_flags(lVar7);
              }
              uVar4 = uVar4 & 0xfffffffe;
              goto LAB_0010035a;
            }
          }
          else {
            if (uVar4 != uVar16) goto LAB_00100303;
            uVar15 = local_98[0];
            if (uVar3 == 4) goto LAB_00100460;
LAB_00100342:
            hb_buffer_clear_contents(lVar7);
            uVar4 = hb_buffer_get_flags(lVar7);
            uVar17 = 0;
            uVar15 = uVar2;
LAB_0010035a:
            if (uVar15 < local_98[0]) {
              uVar4 = uVar4 & 0xfffffffd;
            }
            hb_buffer_set_flags(lVar7,uVar4);
            hb_buffer_append(lVar7,param_1,uVar17,uVar15);
            iVar5 = hb_shape_full(param_2,lVar7,param_3,param_4,param_5);
            if (((iVar5 == 0) || (*(char *)(lVar7 + 0x58) != '\0')) ||
               (*(char *)(lVar7 + 0x59) != '\0')) {
              hb_buffer_destroy(lVar8);
              hb_buffer_destroy();
              goto LAB_0010042a;
            }
            hb_buffer_append(lVar8,lVar7,0,0xffffffff);
            uVar2 = uVar17;
            uVar4 = local_9c;
            if (uVar3 == 4) {
              uVar2 = uVar15;
            }
          }
          uVar16 = uVar16 + 1;
          local_108 = local_108 + 5;
        } while (uVar16 < uVar4 + 1);
      }
      if ((*(char *)(lVar8 + 0x58) == '\0') ||
         (uVar2 = hb_buffer_diff(lVar8,this,0xffffffff,0), (uVar2 & 0xffffffbf) == 0)) {
        hb_buffer_destroy(lVar8);
        hb_buffer_destroy();
LAB_0010042a:
        if ((((byte)this[0x18] & 0x40) != 0) && (*(uint *)(this + 0x1c) < 2)) goto LAB_001005d0;
        goto LAB_001007c4;
      }
      buffer_verify_error(this,param_2,"buffer verify error: unsafe-to-break test failed.");
      hb_buffer_set_length(this,0);
      hb_buffer_append(this,lVar8,0,0xffffffff);
      hb_buffer_destroy(lVar8);
      hb_buffer_destroy();
      if ((((byte)this[0x18] & 0x40) != 0) && (*(uint *)(this + 0x1c) < 2)) {
        bVar1 = false;
LAB_001005d0:
        lVar7 = hb_buffer_create_similar(this);
        local_68[0] = lVar7;
        lVar8 = hb_buffer_create_similar(this);
        local_68[1] = lVar8;
        uVar2 = hb_buffer_get_flags(lVar7);
        hb_buffer_set_flags(lVar7,uVar2 & 0xffffffdf);
        uVar2 = hb_buffer_get_flags(lVar8);
        hb_buffer_set_flags(lVar8,uVar2 & 0xffffffdf);
        lVar9 = hb_buffer_create_similar(this);
        uVar2 = hb_buffer_get_flags(lVar9);
        hb_buffer_set_flags(lVar9,uVar2 & 0xffffffdf);
        hb_buffer_get_segment_properties(this,local_98);
        hb_buffer_set_segment_properties(lVar7,local_98);
        hb_buffer_set_segment_properties(lVar8,local_98);
        hb_buffer_set_segment_properties(lVar9,local_98);
        lVar10 = hb_buffer_get_glyph_infos(this,&local_a0);
        lVar12 = hb_buffer_get_glyph_infos(param_1);
        uVar2 = hb_buffer_get_direction(this);
        local_c0 = uVar2 & 0xfffffffd;
        if ((uVar2 & 0xfffffffd) != 4) {
          hb_buffer_reverse(this);
        }
        if (1 < local_a0 + 1) {
          puVar11 = (uint *)(lVar10 + 0x1c);
          uVar3 = 0;
          uVar4 = 1;
          uVar16 = 0;
          uVar2 = local_a0;
          do {
            if (uVar4 < uVar2) {
              uVar17 = *puVar11;
              if ((uVar17 != *(uint *)(lVar10 + 8 + (ulong)(uVar4 - 1) * 0x14)) &&
                 ((puVar11[-1] & 2) == 0)) {
LAB_00100716:
                uVar15 = uVar3;
                if (uVar3 < local_9c) {
                  puVar13 = (uint *)(lVar12 + 8 + (ulong)uVar3 * 0x14);
                  do {
                    if (uVar17 <= *puVar13) break;
                    uVar15 = uVar15 + 1;
                    puVar13 = puVar13 + 5;
                  } while (uVar15 != local_9c);
                }
                goto LAB_0010073f;
              }
            }
            else {
              uVar15 = local_9c;
              if (uVar2 != uVar4) {
                uVar17 = *puVar11;
                goto LAB_00100716;
              }
LAB_0010073f:
              uVar14 = (ulong)uVar16;
              uVar16 = uVar16 ^ 1;
              hb_buffer_append(local_68[uVar14],param_1,uVar3,uVar15);
              uVar2 = local_a0;
              uVar3 = uVar15;
            }
            uVar4 = uVar4 + 1;
            puVar11 = puVar11 + 5;
          } while (uVar4 < uVar2 + 1);
        }
        iVar5 = hb_shape_full(param_2,lVar7,param_3,param_4,param_5);
        if (((((iVar5 != 0) && (*(char *)(lVar7 + 0x58) != '\0')) &&
             (*(char *)(lVar7 + 0x59) == '\0')) &&
            ((iVar5 = hb_shape_full(param_2,lVar8,param_3,param_4), iVar5 != 0 &&
             (*(char *)(lVar8 + 0x58) != '\0')))) && (*(char *)(lVar8 + 0x59) == '\0')) {
          if (local_c0 != 4) {
            hb_buffer_reverse(lVar7);
            hb_buffer_reverse(lVar8);
          }
          local_78[0] = 0;
          local_78[1] = 0;
          local_68[2] = hb_buffer_get_glyph_infos(lVar7,local_78 + 2);
          local_68[3] = hb_buffer_get_glyph_infos(lVar8);
          uVar14 = 0;
          uVar2 = 0;
          while ((uVar2 < local_78[2] || (local_78[1] < local_78[3]))) {
            uVar2 = local_78[uVar14] + 1;
            if (uVar2 < local_78[uVar14 + 2]) {
              lVar8 = local_68[uVar14 + 2] + (ulong)uVar2 * 0x14;
              do {
                if ((*(int *)(lVar8 + 8) !=
                     *(int *)(local_68[uVar14 + 2] + 8 + (ulong)(uVar2 - 1) * 0x14)) &&
                   ((*(byte *)(lVar8 + 4) & 2) == 0)) break;
                uVar2 = uVar2 + 1;
                lVar8 = lVar8 + 0x14;
              } while (uVar2 < local_78[uVar14 + 2]);
            }
            hb_buffer_append(lVar9,local_68[uVar14],local_78[uVar14]);
            local_78[uVar14] = uVar2;
            uVar14 = (ulong)((uint)uVar14 ^ 1);
            uVar2 = local_78[0];
          }
          if (local_c0 != 4) {
            hb_buffer_reverse(this);
            hb_buffer_reverse(lVar9);
          }
          if ((*(char *)(lVar9 + 0x58) != '\0') &&
             (uVar2 = hb_buffer_diff(lVar9,this,0xffffffff,0), (uVar2 & 0xffffffbf) != 0)) {
            buffer_verify_error(this,param_2,"buffer verify error: unsafe-to-concat test failed.");
            hb_buffer_set_length(this,0);
            hb_buffer_append(this,lVar9,0,0xffffffff);
            hb_buffer_destroy(lVar9);
            hb_buffer_destroy(lVar7);
            hb_buffer_destroy();
            goto LAB_0010053a;
          }
        }
        hb_buffer_destroy(lVar9);
        hb_buffer_destroy(lVar7);
        hb_buffer_destroy();
        goto LAB_001007c4;
      }
    }
    else {
LAB_001007c4:
      if (bVar1) goto LAB_00100157;
    }
LAB_0010053a:
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar3 = uVar2 * 10 + 0x10;
    local_98[0] = uVar2;
    if ((int)uVar3 < 1) {
      hb_buffer_serialize_unicode(param_1,0,uVar2,0,0,local_98,0x54455854,1);
      buffer_verify_error(this,param_2,"buffer verify error: text was: %s.",&_LC5);
      uVar6 = 0;
    }
    else {
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      uVar14 = 0;
      do {
        uVar4 = (int)(uVar14 >> 1) + 8 + (int)uVar14;
        uVar14 = (ulong)uVar4;
      } while (uVar4 < uVar3);
      __s = malloc(uVar14);
      if (__s != (void *)0x0) {
        memset(__s,0,(long)(int)uVar3);
        hb_buffer_serialize_unicode(param_1,0,uVar2,__s,uVar3,local_98,0x54455854,1);
        buffer_verify_error(this,param_2,"buffer verify error: text was: %s.",__s);
      }
      free(__s);
      uVar6 = 0;
    }
  }
  else {
LAB_00100157:
    uVar6 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


