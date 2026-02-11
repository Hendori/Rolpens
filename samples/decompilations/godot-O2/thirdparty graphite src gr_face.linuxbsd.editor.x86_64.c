
Face * gr_make_face_with_ops(void *param_1,gr_face_ops *param_2)

{
  char cVar1;
  Face *this;
  long in_FS_OFFSET;
  Table aTStack_58 [8];
  long local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (gr_face_ops *)0x0) {
    this = (Face *)malloc(0xb0);
    graphite2::Face::Face(this,param_1,param_2);
    graphite2::Face::Table::Table(aTStack_58,this,0x53696c66,0x50000);
    if ((((local_50 != 0) && (cVar1 = graphite2::Face::readGlyphs((uint)this), cVar1 != '\0')) &&
        (local_50 != 0)) &&
       ((cVar1 = graphite2::Face::readFeatures(), cVar1 != '\0' &&
        (cVar1 = graphite2::Face::readGraphite((Table *)this), cVar1 != '\0')))) {
      graphite2::Face::Table::release();
      goto LAB_001000a3;
    }
    graphite2::Face::Table::release();
    (**(code **)(*(long *)this + 8))(this);
  }
  this = (Face *)0x0;
LAB_001000a3:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



void gr_make_face(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  local_28 = 0x18;
  local_20 = param_2;
  gr_make_face_with_ops(param_1,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gr_make_face_with_seg_cache_and_ops
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  gr_make_face_with_ops(param_1,param_2,param_4);
  return;
}



void gr_make_face_with_seg_cache
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  local_28 = 0x18;
  local_20 = param_2;
  gr_make_face_with_ops(param_1,&local_28,param_4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint gr_str_to_tag(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if (4 < sVar1) {
    return 0;
  }
  return (int)*param_1 << 0x18 | (int)param_1[2] << 8 | (int)param_1[1] << 0x10 | (int)param_1[3];
}



void gr_tag_to_str(uint param_1,uint *param_2)

{
  if (param_2 != (uint *)0x0) {
    *(undefined1 *)(param_2 + 1) = 0;
    *param_2 = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 |
               param_1 << 0x18;
  }
  return;
}



void gr_face_featureval_for_lang(int param_1,uint param_2)

{
  if (param_2 == 0x20202020) {
    graphite2::SillMap::cloneFeatures(param_1 + 8);
    return;
  }
  if ((param_2 & 0xffffff) != 0x202020) {
    if ((short)param_2 != 0x2020) {
      graphite2::SillMap::cloneFeatures(param_1 + 8);
      return;
    }
    graphite2::SillMap::cloneFeatures(param_1 + 8);
    return;
  }
  graphite2::SillMap::cloneFeatures(param_1 + 8);
  return;
}



void gr_face_find_fref(int param_1,uint param_2)

{
  if (param_2 == 0x20202020) {
    graphite2::FeatureMap::findFeatureRef(param_1 + 8);
    return;
  }
  if ((param_2 & 0xffffff) != 0x202020) {
    if ((short)param_2 != 0x2020) {
      graphite2::FeatureMap::findFeatureRef(param_1 + 8);
      return;
    }
    graphite2::FeatureMap::findFeatureRef(param_1 + 8);
    return;
  }
  graphite2::FeatureMap::findFeatureRef(param_1 + 8);
  return;
}



uint gr_face_n_fref(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  
  uVar1 = *(ushort *)(param_1 + 8);
  uVar2 = (uint)uVar1;
  if (uVar1 != 0) {
    puVar3 = (ushort *)(*(long *)(param_1 + 0x10) + 0x20);
    uVar2 = 0;
    do {
      uVar2 = uVar2 + ((*puVar3 & 0x800) == 0);
      puVar3 = puVar3 + 0x14;
    } while ((ushort *)(*(long *)(param_1 + 0x10) + 0x48 + (ulong)(uVar1 - 1) * 0x28) != puVar3);
  }
  return uVar2;
}



long gr_face_fref(long param_1,ushort param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  
  if (*(ushort *)(param_1 + 8) != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    lVar1 = lVar2 + 0x28;
    uVar3 = 0;
    do {
      if (((*(byte *)(lVar2 + 0x21) & 8) == 0) &&
         (bVar4 = param_2 == uVar3, uVar3 = uVar3 + 1, bVar4)) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != lVar1 + (ulong)(*(ushort *)(param_1 + 8) - 1) * 0x28);
  }
  return 0;
}



undefined2 gr_face_n_languages(long param_1)

{
  return *(undefined2 *)(param_1 + 0x48);
}



undefined4 gr_face_lang_by_index(long param_1,ushort param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < *(ushort *)(param_1 + 0x48)) {
    uVar1 = *(undefined4 *)((ulong)param_2 * 0x10 + *(long *)(param_1 + 0x40));
  }
  return uVar1;
}



void gr_face_destroy(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001003cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



undefined8 gr_face_name_lang_for_locale(char *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (char *)0x0) {
    uVar1 = graphite2::Face::languageForLocale(param_1);
    return uVar1;
  }
  return 0;
}



undefined2 gr_face_n_glyphs(long param_1)

{
  return *(undefined2 *)(*(long *)(param_1 + 0x78) + 0x28);
}



long gr_face_info(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = graphite2::Face::chooseSilf((uint)param_1);
  if (lVar1 != 0) {
    return lVar1 + 0x44;
  }
  return 0;
}



bool gr_face_is_char_supported(long param_1)

{
  code *pcVar1;
  short sVar2;
  uint uVar3;
  
  pcVar1 = *(code **)(**(long **)(param_1 + 0x80) + 0x10);
  if (pcVar1 != graphite2::Cmap::operator[]) {
    sVar2 = (*pcVar1)();
    if (sVar2 != 0) {
      return sVar2 != 0;
    }
  }
  uVar3 = graphite2::Face::chooseSilf((uint)param_1);
  sVar2 = graphite2::Silf::findPseudo(uVar3);
  return sVar2 != 0;
}



/* graphite2::Cmap::operator[](unsigned int) const */

undefined8 graphite2::Cmap::operator[](uint param_1)

{
  return 0;
}


