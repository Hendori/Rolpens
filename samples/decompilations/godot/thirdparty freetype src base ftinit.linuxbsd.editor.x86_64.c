
void FT_Add_Default_Modules(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  puVar2 = &autofit_module_class;
  puVar1 = ft_default_modules;
  do {
    puVar1 = (undefined1 *)((long)puVar1 + 8);
    FT_Add_Module(param_1,puVar2);
    puVar2 = *(undefined **)puVar1;
  } while (puVar2 != (undefined *)0x0);
  return;
}



void FT_Set_Default_Properties(undefined8 param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  long in_FS_OFFSET;
  byte local_1c8 [144];
  byte local_138 [144];
  byte local_a8 [136];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar2 = (byte *)getenv("FREETYPE_PROPERTIES");
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    while (bVar1 != 0) {
      if ((bVar1 != 0x20) && (bVar1 != 9)) {
        lVar4 = 0;
        pbVar6 = pbVar2;
        do {
          bVar1 = *pbVar6;
          if ((bVar1 == 0) || (bVar1 == 0x3a)) break;
          local_1c8[lVar4] = bVar1;
          lVar4 = lVar4 + 1;
          pbVar6 = pbVar6 + 1;
        } while (lVar4 != 0x80);
        local_1c8[(int)lVar4] = 0;
        if ((*pbVar6 != 0x3a) || (pbVar6 == pbVar2)) break;
        iVar3 = 0;
        pbVar5 = pbVar6 + 1;
        pbVar2 = local_138;
        do {
          bVar1 = *pbVar5;
          if ((bVar1 == 0) || (bVar1 == 0x3d)) break;
          iVar3 = iVar3 + 1;
          *pbVar2 = bVar1;
          pbVar5 = pbVar5 + 1;
          pbVar2 = pbVar2 + 1;
        } while (iVar3 != 0x80);
        local_138[iVar3] = 0;
        if ((*pbVar5 != 0x3d) || (pbVar6 + 1 == pbVar5)) break;
        iVar3 = 0;
        pbVar2 = pbVar5 + 1;
        pbVar6 = local_a8;
        do {
          bVar1 = *pbVar2;
          if ((bVar1 < 0x21) && ((0x100000201U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) break;
          iVar3 = iVar3 + 1;
          *pbVar6 = bVar1;
          pbVar2 = pbVar2 + 1;
          pbVar6 = pbVar6 + 1;
        } while (iVar3 != 0x80);
        local_a8[iVar3] = 0;
        if (((((*pbVar2 & 0xdf) != 0) && (*pbVar2 != 9)) || (pbVar5 + 1 == pbVar2)) ||
           (ft_property_string_set(param_1,local_1c8,local_138,local_a8), *pbVar2 == 0)) break;
      }
      pbVar6 = pbVar2 + 1;
      pbVar2 = pbVar2 + 1;
      bVar1 = *pbVar6;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int FT_Init_FreeType(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  
  lVar3 = FT_New_Memory();
  if (lVar3 == 0) {
    return 7;
  }
  iVar2 = FT_New_Library(lVar3,param_1);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    puVar4 = ft_default_modules;
    puVar5 = &autofit_module_class;
    do {
      puVar4 = (undefined1 *)((long)puVar4 + 8);
      FT_Add_Module(uVar1,puVar5);
      puVar5 = *(undefined **)puVar4;
    } while (puVar5 != (undefined *)0x0);
  }
  else {
    FT_Done_Memory(lVar3);
  }
  FT_Set_Default_Properties(*param_1);
  return iVar2;
}



undefined8 FT_Done_FreeType(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FT_Done_Library();
    FT_Done_Memory(uVar1);
    return 0;
  }
  return 0x21;
}


