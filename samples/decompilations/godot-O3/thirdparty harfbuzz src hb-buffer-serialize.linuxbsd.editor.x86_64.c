
undefined ** hb_buffer_serialize_list_formats(void)

{
  return &_hb_buffer_serialize_formats;
}



uint hb_buffer_serialize_format_from_string(void)

{
  uint uVar1;
  
  uVar1 = hb_tag_from_string();
  return uVar1 & 0xdfdfdfdf;
}



undefined * hb_buffer_serialize_format_to_string(int param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0x4a534f4e) {
    puVar1 = (undefined *)0x0;
    if (param_1 == 0x54455854) {
      puVar1 = _hb_buffer_serialize_formats;
    }
    return puVar1;
  }
  return PTR_DAT_00104a28;
}



undefined8
hb_buffer_serialize_glyphs
          (long param_1,ulong param_2,uint param_3,undefined1 *param_4,ulong param_5,
          undefined4 *param_6,long param_7,int param_8,uint param_9)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar3 = (uint)param_2;
  if (param_3 < uVar3) {
    param_3 = uVar3;
    if (uVar1 < uVar3) {
LAB_00101a24:
      param_2 = param_2 & 0xffffffff;
      param_3 = uVar1;
      if (uVar1 < uVar3) {
        param_2 = (ulong)uVar1;
      }
    }
  }
  else if (uVar1 < param_3) goto LAB_00101a24;
  if (param_6 == (undefined4 *)0x0) {
    param_6 = &local_24;
  }
  *param_6 = 0;
  if ((int)param_5 != 0) {
    *param_4 = 0;
  }
  if (*(char *)(param_1 + 0x5b) == '\0') {
    param_9 = param_9 | 2;
  }
  if ((uint)param_2 != param_3) {
    if (param_7 == 0) {
      param_7 = hb_font_get_empty();
      param_5 = param_5 & 0xffffffff;
      param_2 = param_2 & 0xffffffff;
    }
    if (param_8 == 0x4a534f4e) {
      uVar2 = _hb_buffer_serialize_glyphs_json
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9);
      goto LAB_00101a05;
    }
    if (param_8 == 0x54455854) {
      uVar2 = _hb_buffer_serialize_glyphs_text(param_1,param_2,param_3);
      goto LAB_00101a05;
    }
  }
  uVar2 = 0;
LAB_00101a05:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8
hb_buffer_serialize_unicode
          (long param_1,uint param_2,uint param_3,undefined1 *param_4,int param_5,
          undefined4 *param_6,int param_7)

{
  uint uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(param_1 + 0x60);
  if (param_3 < param_2) {
    if (uVar1 < param_2) {
LAB_00101b50:
      param_3 = uVar1;
      if (uVar1 < param_2) {
        param_2 = uVar1;
      }
      goto LAB_00101b14;
    }
    if (param_6 == (undefined4 *)0x0) {
      local_14 = 0;
      if (param_5 == 0) goto LAB_00101b48;
LAB_00101acd:
      *param_4 = 0;
      param_3 = param_2;
      goto LAB_00101ad0;
    }
    *param_6 = 0;
    if (param_5 != 0) goto LAB_00101acd;
  }
  else {
    if (uVar1 < param_3) goto LAB_00101b50;
LAB_00101b14:
    if (param_6 == (undefined4 *)0x0) {
      param_6 = &local_14;
    }
    *param_6 = 0;
    if (param_5 != 0) {
      *param_4 = 0;
    }
LAB_00101ad0:
    if (param_3 != param_2) {
      if (param_7 == 0x4a534f4e) {
        uVar2 = _hb_buffer_serialize_unicode_json();
        goto LAB_00101afa;
      }
      if (param_7 == 0x54455854) {
        uVar2 = _hb_buffer_serialize_unicode_text();
        goto LAB_00101afa;
      }
    }
  }
LAB_00101b48:
  uVar2 = 0;
LAB_00101afa:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8
hb_buffer_serialize(long param_1,undefined8 param_2,undefined4 param_3,undefined2 *param_4,
                   uint param_5,undefined4 *param_6,undefined8 param_7,int param_8)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x30) == 1) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar1 = hb_buffer_serialize_unicode(param_1,param_2,param_3);
      return uVar1;
    }
  }
  else if (*(int *)(param_1 + 0x30) == 2) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar1 = hb_buffer_serialize_glyphs(param_1,param_2,param_3);
      return uVar1;
    }
  }
  else {
    if (param_6 == (undefined4 *)0x0) {
      param_6 = &local_14;
    }
    if (2 < param_5) {
      if (param_8 == 0x4a534f4e) {
        *(undefined1 *)(param_4 + 1) = 0;
        *param_4 = 0x5d5b;
      }
      else if (param_8 == 0x54455854) {
        *(undefined1 *)(param_4 + 1) = 0;
        *param_4 = 0x2121;
      }
      *param_6 = 2;
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong hb_buffer_deserialize_glyphs
                (hb_glyph_info_t *param_1,byte *param_2,uint param_3,char **param_4,
                hb_font_t *param_5,int param_6)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  size_t sVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  byte *pbVar13;
  long in_FS_OFFSET;
  uint local_8c;
  char *local_88;
  byte *local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (char **)0x0) {
    param_4 = &local_88;
  }
  *param_4 = (char *)param_2;
  if (*(int *)(param_1 + 4) != 0) {
    uVar8 = (ulong)param_3;
    if (param_3 == 0xffffffff) {
      sVar5 = strlen((char *)param_2);
      uVar8 = sVar5 & 0xffffffff;
    }
    if ((uint)uVar8 == 0) {
      *param_4 = (char *)param_2;
    }
    else {
      hb_buffer_set_content_type(param_1,2);
      if (param_5 == (hb_font_t *)0x0) {
        param_5 = (hb_font_t *)hb_font_get_empty();
      }
      if (param_6 == 0x4a534f4e) {
        uVar8 = _hb_buffer_deserialize_json
                          ((hb_buffer_t *)param_1,(char *)param_2,(uint)uVar8,param_4,param_5);
        goto LAB_00101cf8;
      }
      if (param_6 == 0x54455854) {
        pbVar1 = param_2 + uVar8;
        hb_buffer_get_glyph_positions(param_1,0);
        if (param_2 < pbVar1) {
          do {
            bVar2 = *param_2;
            if (((0x20 < bVar2) || ((0x100003400U >> ((ulong)bVar2 & 0x3f) & 1) == 0)) &&
               ((bVar2 & 0xfd) != 9)) {
              if ((param_2 < pbVar1) &&
                 ((int)(char)*param_2 ==
                  (-(uint)(*(int *)(param_1 + 0x60) == 0) & 0xffffffdf) + 0x7c)) {
                param_2 = param_2 + 1;
                *param_4 = (char *)param_2;
              }
              break;
            }
            param_2 = param_2 + 1;
          } while (pbVar1 != param_2);
        }
        pbVar6 = (byte *)strchr((char *)param_2,0x5d);
        if ((pbVar6 != (byte *)0x0) ||
           (pbVar6 = (byte *)strrchr((char *)param_2,0x7c), pbVar6 != (byte *)0x0)) {
          local_68 = 0;
          local_48 = 0;
          local_78 = (undefined1  [16])0x0;
          local_58 = (undefined1  [16])0x0;
          if (param_2 != pbVar6) {
            pbVar13 = (byte *)0x0;
            iVar12 = 0xe;
            lVar7 = 0x74;
            lVar11 = 0xde;
            do {
              if ('\0' < (char)lVar7) {
                iVar10 = (int)(char)*param_2;
                if (((int)(uint)(byte)_deserialize_text_glyphs_trans_keys[iVar12 * 2] <= iVar10) &&
                   (iVar10 <= (int)(uint)(byte)_deserialize_text_glyphs_trans_keys
                                               [(long)(iVar12 * 2) + 1])) {
                  lVar7 = (long)(int)(iVar10 - (uint)(byte)_deserialize_text_glyphs_trans_keys
                                                           [iVar12 * 2]);
                }
              }
              cVar4 = _deserialize_text_glyphs_trans_targs
                      [(char)_deserialize_text_glyphs_indicies[lVar7 + lVar11]];
              iVar12 = (int)cVar4;
              switch(_deserialize_text_glyphs_trans_actions
                     [(char)_deserialize_text_glyphs_indicies[lVar7 + lVar11]]) {
              case 1:
                goto switchD_00101e94_caseD_1;
              case 2:
                local_80 = pbVar13;
                cVar3 = hb_parse_int((char **)&local_80,(char *)param_2,(int *)&local_8c,true);
                if (cVar3 == '\0') goto LAB_00101cf6;
                local_58._8_4_ = local_8c;
                break;
              case 3:
                local_68 = 0;
                local_48 = 0;
                local_78 = (undefined1  [16])0x0;
                local_58 = (undefined1  [16])0x0;
                iVar10 = hb_font_glyph_from_string(param_5,param_2,0,local_78);
                if ((iVar10 != 0) &&
                   (hb_buffer_t::add_info(param_1), param_1[0x58] != (hb_glyph_info_t)0x0)) {
                  puVar9 = (undefined8 *)
                           (*(long *)(param_1 + 0x80) + (ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14
                           );
                  *puVar9 = local_58._0_8_;
                  puVar9[1] = local_58._8_8_;
                  *(undefined4 *)(puVar9 + 2) = local_48;
                  *param_4 = (char *)param_2;
                  goto switchD_00101e94_caseD_1;
                }
                goto LAB_00101cf6;
              case 4:
                local_68 = 0;
                local_48 = 0;
                local_78 = (undefined1  [16])0x0;
                local_58 = (undefined1  [16])0x0;
                goto switchD_00101e94_caseD_1;
              case 5:
                local_68 = 0;
                local_48 = 0;
                local_78 = (undefined1  [16])0x0;
                local_58 = (undefined1  [16])0x0;
                iVar10 = hb_font_glyph_from_string(param_5,param_2,0,local_78);
                if (iVar10 == 0) goto LAB_00101cf6;
switchD_00101e94_caseD_1:
                pbVar13 = param_2;
                break;
              case 6:
                iVar10 = hb_font_glyph_from_string(param_5,pbVar13,(int)param_2 - (int)pbVar13);
                if ((iVar10 == 0) ||
                   (hb_buffer_t::add_info(param_1), param_1[0x58] == (hb_glyph_info_t)0x0))
                goto LAB_00101cf6;
                puVar9 = (undefined8 *)
                         (*(long *)(param_1 + 0x80) + (ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14);
                *puVar9 = local_58._0_8_;
                puVar9[1] = local_58._8_8_;
                *(undefined4 *)(puVar9 + 2) = local_48;
                *param_4 = (char *)param_2;
                break;
              case 7:
                iVar10 = hb_font_glyph_from_string
                                   (param_5,pbVar13,(int)param_2 - (int)pbVar13,local_78);
                if (iVar10 == 0) goto LAB_00101cf6;
                break;
              case 8:
                local_80 = pbVar13;
                cVar3 = hb_parse_uint((char **)&local_80,(char *)param_2,&local_8c,true,10);
                if (cVar3 == '\0') goto LAB_00101cf6;
                local_78._4_4_ = local_8c;
                hb_buffer_t::add_info(param_1);
                if (param_1[0x58] == (hb_glyph_info_t)0x0) goto LAB_00101cf6;
                puVar9 = (undefined8 *)
                         (*(long *)(param_1 + 0x80) + (ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14);
                *puVar9 = local_58._0_8_;
                puVar9[1] = local_58._8_8_;
                *(undefined4 *)(puVar9 + 2) = local_48;
                *param_4 = (char *)param_2;
                break;
              case 9:
                local_80 = pbVar13;
                cVar3 = hb_parse_int((char **)&local_80,(char *)param_2,(int *)&local_8c,true);
                if (cVar3 == '\0') goto LAB_00101cf6;
                local_58._0_4_ = local_8c;
                hb_buffer_t::add_info(param_1);
                if (param_1[0x58] == (hb_glyph_info_t)0x0) goto LAB_00101cf6;
                puVar9 = (undefined8 *)
                         (*(long *)(param_1 + 0x80) + (ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14);
                *puVar9 = local_58._0_8_;
                puVar9[1] = local_58._8_8_;
                *(undefined4 *)(puVar9 + 2) = local_48;
                *param_4 = (char *)param_2;
                break;
              case 10:
                local_80 = pbVar13;
                cVar3 = hb_parse_int((char **)&local_80,(char *)param_2,(int *)&local_8c,true);
                if (cVar3 == '\0') goto LAB_00101cf6;
                local_58._0_4_ = local_8c;
                break;
              case 0xb:
                local_80 = pbVar13;
                cVar3 = hb_parse_int((char **)&local_80,(char *)param_2,(int *)&local_8c,true);
                if (cVar3 == '\0') goto LAB_00101cf6;
                local_58._4_4_ = local_8c;
                hb_buffer_t::add_info(param_1);
                if (param_1[0x58] == (hb_glyph_info_t)0x0) goto LAB_00101cf6;
                puVar9 = (undefined8 *)
                         (*(long *)(param_1 + 0x80) + (ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14);
                *puVar9 = local_58._0_8_;
                puVar9[1] = local_58._8_8_;
                *(undefined4 *)(puVar9 + 2) = local_48;
                *param_4 = (char *)param_2;
                break;
              case 0xc:
                local_80 = pbVar13;
                cVar3 = hb_parse_int((char **)&local_80,(char *)param_2,(int *)&local_8c,true);
                if (cVar3 == '\0') goto LAB_00101cf6;
                local_58._4_4_ = local_8c;
                break;
              case 0xd:
                local_80 = pbVar13;
                cVar3 = hb_parse_uint((char **)&local_80,(char *)param_2,&local_8c,true,10);
                if (cVar3 == '\0') goto LAB_00101cf6;
                local_78._8_4_ = local_8c;
                hb_buffer_t::add_info(param_1);
                if (param_1[0x58] == (hb_glyph_info_t)0x0) goto LAB_00101cf6;
                puVar9 = (undefined8 *)
                         (*(long *)(param_1 + 0x80) + (ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14);
                *puVar9 = local_58._0_8_;
                puVar9[1] = local_58._8_8_;
                *(undefined4 *)(puVar9 + 2) = local_48;
                *param_4 = (char *)param_2;
                break;
              case 0xe:
                local_80 = pbVar13;
                cVar3 = hb_parse_uint((char **)&local_80,(char *)param_2,&local_8c,true,10);
                if (cVar3 == '\0') goto LAB_00101cf6;
                local_78._8_4_ = local_8c;
                break;
              case 0xf:
                local_80 = pbVar13;
                cVar3 = hb_parse_int((char **)&local_80,(char *)param_2,(int *)&local_8c,true);
                if (cVar3 == '\0') goto LAB_00101cf6;
                local_58._12_4_ = local_8c;
                hb_buffer_t::add_info(param_1);
                if (param_1[0x58] == (hb_glyph_info_t)0x0) goto LAB_00101cf6;
                puVar9 = (undefined8 *)
                         (*(long *)(param_1 + 0x80) + (ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14);
                *puVar9 = local_58._0_8_;
                puVar9[1] = local_58._8_8_;
                *(undefined4 *)(puVar9 + 2) = local_48;
                *param_4 = (char *)param_2;
                break;
              case 0x10:
                local_80 = pbVar13;
                cVar3 = hb_parse_int((char **)&local_80,(char *)param_2,(int *)&local_8c,true);
                if (cVar3 == '\0') goto LAB_00101cf6;
                local_58._12_4_ = local_8c;
              }
              if (cVar4 == '\0') goto LAB_001024d0;
              param_2 = param_2 + 1;
              if (pbVar6 == param_2) goto LAB_00102518;
              lVar11 = (long)*(short *)(_deserialize_text_glyphs_index_offsets + (long)iVar12 * 2);
              lVar7 = (long)(char)_deserialize_text_glyphs_key_spans[iVar12];
            } while( true );
          }
        }
        goto switchD_00102557_caseD_3;
      }
    }
  }
LAB_00101cf6:
  uVar8 = 0;
LAB_00101cf8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102518:
  switch(_deserialize_text_glyphs_eof_actions[iVar12]) {
  case 3:
switchD_00102557_caseD_3:
    pbVar6 = param_2;
    local_68 = 0;
    local_48 = 0;
    local_78 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    iVar12 = hb_font_glyph_from_string(param_5,pbVar6,0,local_78);
    if ((iVar12 != 0) && (hb_buffer_t::add_info(param_1), param_1[0x58] != (hb_glyph_info_t)0x0)) {
      puVar9 = (undefined8 *)
               ((ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14 + *(long *)(param_1 + 0x80));
      *(undefined4 *)(puVar9 + 2) = local_48;
      *puVar9 = local_58._0_8_;
      puVar9[1] = local_58._8_8_;
      *param_4 = (char *)pbVar6;
      param_2 = pbVar6;
      goto LAB_001024d0;
    }
    break;
  default:
switchD_00102557_caseD_4:
    pbVar6 = param_2;
LAB_001024d0:
    if ((pbVar6 < pbVar1) && (*pbVar6 == 0x5d)) {
      pbVar1 = pbVar6 + 2;
      pbVar6 = pbVar6 + 1;
      if (pbVar6 == param_2) {
        param_2 = pbVar1;
      }
    }
    *param_4 = (char *)param_2;
    uVar8 = (ulong)(param_2 == pbVar6);
    goto LAB_00101cf8;
  case 6:
    iVar12 = hb_font_glyph_from_string(param_5,pbVar13,(int)param_2 - (int)pbVar13,local_78);
    if ((iVar12 != 0) && (hb_buffer_t::add_info(param_1), param_1[0x58] != (hb_glyph_info_t)0x0)) {
      puVar9 = (undefined8 *)
               ((ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14 + *(long *)(param_1 + 0x80));
      *(undefined4 *)(puVar9 + 2) = local_48;
      *puVar9 = local_58._0_8_;
      puVar9[1] = local_58._8_8_;
      *param_4 = (char *)param_2;
      goto switchD_00102557_caseD_4;
    }
    break;
  case 8:
    local_80 = pbVar13;
    cVar4 = hb_parse_uint((char **)&local_80,(char *)param_2,&local_8c,true,10);
    if (cVar4 != '\0') {
      local_78._4_4_ = local_8c;
      hb_buffer_t::add_info(param_1);
      if (param_1[0x58] != (hb_glyph_info_t)0x0) {
        puVar9 = (undefined8 *)
                 ((ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14 + *(long *)(param_1 + 0x80));
        *(undefined4 *)(puVar9 + 2) = local_48;
        *puVar9 = local_58._0_8_;
        puVar9[1] = local_58._8_8_;
        *param_4 = (char *)param_2;
        goto switchD_00102557_caseD_4;
      }
    }
    break;
  case 9:
    local_80 = pbVar13;
    cVar4 = hb_parse_int((char **)&local_80,(char *)param_2,(int *)&local_8c,true);
    if (cVar4 != '\0') {
      local_58._0_4_ = local_8c;
      hb_buffer_t::add_info(param_1);
      if (param_1[0x58] != (hb_glyph_info_t)0x0) {
        puVar9 = (undefined8 *)
                 ((ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14 + *(long *)(param_1 + 0x80));
        *(undefined4 *)(puVar9 + 2) = local_48;
        *puVar9 = local_58._0_8_;
        puVar9[1] = local_58._8_8_;
        *param_4 = (char *)param_2;
        goto switchD_00102557_caseD_4;
      }
    }
    break;
  case 0xb:
    local_80 = pbVar13;
    cVar4 = hb_parse_int((char **)&local_80,(char *)param_2,(int *)&local_8c,true);
    if (cVar4 != '\0') {
      local_58._4_4_ = local_8c;
      hb_buffer_t::add_info(param_1);
      if (param_1[0x58] != (hb_glyph_info_t)0x0) {
        puVar9 = (undefined8 *)
                 ((ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14 + *(long *)(param_1 + 0x80));
        *(undefined4 *)(puVar9 + 2) = local_48;
        *puVar9 = local_58._0_8_;
        puVar9[1] = local_58._8_8_;
        *param_4 = (char *)param_2;
        goto switchD_00102557_caseD_4;
      }
    }
    break;
  case 0xd:
    local_80 = pbVar13;
    cVar4 = hb_parse_uint((char **)&local_80,(char *)param_2,&local_8c,true,10);
    if (cVar4 != '\0') {
      local_78._8_4_ = local_8c;
      hb_buffer_t::add_info(param_1);
      if (param_1[0x58] != (hb_glyph_info_t)0x0) {
        puVar9 = (undefined8 *)
                 ((ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14 + *(long *)(param_1 + 0x80));
        *(undefined4 *)(puVar9 + 2) = local_48;
        *puVar9 = local_58._0_8_;
        puVar9[1] = local_58._8_8_;
        *param_4 = (char *)param_2;
        goto switchD_00102557_caseD_4;
      }
    }
    break;
  case 0xf:
    local_80 = pbVar13;
    cVar4 = hb_parse_int((char **)&local_80,(char *)param_2,(int *)&local_8c,true);
    if (cVar4 != '\0') {
      local_58._12_4_ = local_8c;
      hb_buffer_t::add_info(param_1);
      if (param_1[0x58] != (hb_glyph_info_t)0x0) {
        puVar9 = (undefined8 *)
                 ((ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14 + *(long *)(param_1 + 0x80));
        *(undefined4 *)(puVar9 + 2) = local_48;
        *puVar9 = local_58._0_8_;
        puVar9[1] = local_58._8_8_;
        *param_4 = (char *)param_2;
        goto switchD_00102557_caseD_4;
      }
    }
  }
  goto LAB_00101cf6;
}



ulong hb_buffer_deserialize_unicode
                (hb_glyph_info_t *param_1,byte *param_2,uint param_3,char **param_4,int param_5)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  size_t sVar6;
  hb_font_t *phVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  byte *pbVar13;
  int iVar14;
  long in_FS_OFFSET;
  byte *local_b0;
  uint local_8c;
  char *local_88;
  byte *local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (char **)0x0) {
    param_4 = &local_88;
  }
  *param_4 = (char *)param_2;
  if (*(int *)(param_1 + 4) != 0) {
    uVar10 = (ulong)param_3;
    if (param_3 == 0xffffffff) {
      sVar6 = strlen((char *)param_2);
      uVar10 = sVar6 & 0xffffffff;
    }
    if ((uint)uVar10 == 0) {
      *param_4 = (char *)param_2;
    }
    else {
      hb_buffer_set_content_type(param_1,1);
      phVar7 = (hb_font_t *)hb_font_get_empty();
      if (param_5 == 0x4a534f4e) {
        uVar10 = _hb_buffer_deserialize_json
                           ((hb_buffer_t *)param_1,(char *)param_2,(uint)uVar10,param_4,phVar7);
        goto LAB_00102881;
      }
      if (param_5 == 0x54455854) {
        pbVar1 = param_2 + uVar10;
        if (param_2 < pbVar1) {
          do {
            bVar3 = *param_2;
            if (((0x20 < bVar3) || ((0x100003400U >> ((ulong)bVar3 & 0x3f) & 1) == 0)) &&
               ((bVar3 & 0xfd) != 9)) {
              if ((param_2 < pbVar1) &&
                 ((int)(char)*param_2 ==
                  (-(uint)(*(int *)(param_1 + 0x60) == 0) & 0xffffffc0) + 0x7c)) {
                param_2 = param_2 + 1;
                *param_4 = (char *)param_2;
              }
              break;
            }
            param_2 = param_2 + 1;
          } while (pbVar1 != param_2);
        }
        pbVar8 = (byte *)strchr((char *)param_2,0x3e);
        pbVar13 = param_2;
        if ((pbVar8 != (byte *)0x0) ||
           (pbVar8 = (byte *)strrchr((char *)param_2,0x7c), pbVar8 != (byte *)0x0)) {
          local_68 = 0;
          local_48 = 0;
          local_78 = (undefined1  [16])0x0;
          local_58 = (undefined1  [16])0x0;
          if (param_2 != pbVar8) {
            local_b0 = (byte *)0x0;
            lVar12 = 0;
            lVar9 = 0x6d;
            iVar14 = 1;
            do {
              if ('\0' < (char)lVar9) {
                iVar11 = (int)(char)*pbVar13;
                if (((int)(uint)(byte)_deserialize_text_unicode_trans_keys[iVar14 * 2] <= iVar11) &&
                   (iVar11 <= (int)(uint)(byte)_deserialize_text_unicode_trans_keys
                                               [(long)(iVar14 * 2) + 1])) {
                  lVar9 = (long)(int)(iVar11 - (uint)(byte)_deserialize_text_unicode_trans_keys
                                                           [iVar14 * 2]);
                }
              }
              cVar5 = _deserialize_text_unicode_trans_targs
                      [(char)_deserialize_text_unicode_indicies[lVar9 + lVar12]];
              iVar14 = (int)cVar5;
              switch(_deserialize_text_unicode_trans_actions
                     [(char)_deserialize_text_unicode_indicies[lVar9 + lVar12]]) {
              case 1:
                local_68 = 0;
                local_78 = (undefined1  [16])0x0;
                break;
              case 2:
                local_b0 = pbVar13;
                break;
              case 3:
                local_80 = local_b0;
                cVar4 = hb_parse_uint((char **)&local_80,(char *)pbVar13,&local_8c,true,0x10);
                if (cVar4 != '\0') {
                  local_78._0_4_ = local_8c;
                  hb_buffer_t::add_info(param_1);
                  if (param_1[0x58] != (hb_glyph_info_t)0x0) {
                    if (param_1[0x5b] != (hb_glyph_info_t)0x0) {
                      puVar2 = (undefined8 *)
                               (*(long *)(param_1 + 0x80) +
                               (ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14);
                      *(undefined4 *)(puVar2 + 2) = local_48;
                      *puVar2 = local_58._0_8_;
                      puVar2[1] = local_58._8_8_;
                    }
                    goto LAB_00102adc;
                  }
                }
                goto LAB_0010287f;
              case 4:
                local_80 = local_b0;
                cVar4 = hb_parse_uint((char **)&local_80,(char *)pbVar13,&local_8c,true,0x10);
                if (cVar4 == '\0') goto LAB_0010287f;
                local_78._0_4_ = local_8c;
                break;
              case 5:
                local_80 = local_b0;
                cVar4 = hb_parse_uint((char **)&local_80,(char *)pbVar13,&local_8c,true,10);
                if (cVar4 == '\0') goto LAB_0010287f;
                local_78._8_4_ = local_8c;
                hb_buffer_t::add_info(param_1);
                if (param_1[0x58] == (hb_glyph_info_t)0x0) goto LAB_0010287f;
                if (param_1[0x5b] != (hb_glyph_info_t)0x0) {
                  puVar2 = (undefined8 *)
                           (*(long *)(param_1 + 0x80) + (ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14
                           );
                  *(undefined4 *)(puVar2 + 2) = local_48;
                  *puVar2 = local_58._0_8_;
                  puVar2[1] = local_58._8_8_;
                }
LAB_00102adc:
                *param_4 = (char *)pbVar13;
              }
              param_2 = pbVar8;
              if (cVar5 == '\0') break;
              param_2 = pbVar13 + 1;
              pbVar13 = param_2;
              if (pbVar8 == param_2) goto LAB_00102c70;
              lVar12 = (long)*(short *)(_deserialize_text_unicode_index_offsets + (long)iVar14 * 2);
              lVar9 = (long)(char)_deserialize_text_unicode_key_spans[iVar14];
            } while( true );
          }
        }
        goto LAB_00102c28;
      }
    }
  }
LAB_0010287f:
  uVar10 = 0;
LAB_00102881:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
LAB_00102c70:
  if (_deserialize_text_unicode_eof_actions[iVar14] == '\x03') {
    local_80 = local_b0;
    cVar5 = hb_parse_uint((char **)&local_80,(char *)param_2,&local_8c,true,0x10);
    if (cVar5 != '\0') {
      local_78._0_4_ = local_8c;
      hb_buffer_t::add_info(param_1);
      if (param_1[0x58] != (hb_glyph_info_t)0x0) {
        if (param_1[0x5b] != (hb_glyph_info_t)0x0) {
          puVar2 = (undefined8 *)
                   (*(long *)(param_1 + 0x80) + (ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14);
          *(undefined4 *)(puVar2 + 2) = local_48;
          *puVar2 = local_58._0_8_;
          puVar2[1] = local_58._8_8_;
        }
LAB_00102d1a:
        *param_4 = (char *)param_2;
        goto LAB_00102c28;
      }
    }
  }
  else {
    if (_deserialize_text_unicode_eof_actions[iVar14] != '\x05') {
LAB_00102c28:
      if ((param_2 < pbVar1) && (*param_2 == 0x3e)) {
        pbVar1 = param_2 + 2;
        param_2 = param_2 + 1;
        if (param_2 == pbVar13) {
          pbVar13 = pbVar1;
        }
      }
      *param_4 = (char *)pbVar13;
      uVar10 = (ulong)(pbVar13 == param_2);
      goto LAB_00102881;
    }
    local_80 = local_b0;
    cVar5 = hb_parse_uint((char **)&local_80,(char *)param_2,&local_8c,true,10);
    if (cVar5 != '\0') {
      local_78._8_4_ = local_8c;
      hb_buffer_t::add_info(param_1);
      if (param_1[0x58] != (hb_glyph_info_t)0x0) {
        if (param_1[0x5b] != (hb_glyph_info_t)0x0) {
          puVar2 = (undefined8 *)
                   (*(long *)(param_1 + 0x80) + (ulong)(*(int *)(param_1 + 0x60) - 1) * 0x14);
          *puVar2 = local_58._0_8_;
          puVar2[1] = local_58._8_8_;
          *(undefined4 *)(puVar2 + 2) = local_48;
        }
        goto LAB_00102d1a;
      }
    }
  }
  goto LAB_0010287f;
}


