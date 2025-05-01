
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_shapers_lazy_loader_t::create() */

char * hb_shapers_lazy_loader_t::create(void)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  char *__s;
  char *pcVar12;
  size_t sVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  char *__s_00;
  ulong uVar17;
  long in_FS_OFFSET;
  uint local_6c;
  char *local_68;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  __s = getenv("HB_SHAPER_LIST");
  if ((__s != (char *)0x0) && (*__s != '\0')) {
    local_68 = (char *)calloc(1,0x48);
    uVar9 = ram0x001002b8;
    uVar8 = s_fallback_001002b0._0_8_;
    uVar7 = uRam00000000001002a8;
    uVar6 = _DAT_001002a0;
    uVar5 = uRam0000000000100298;
    uVar4 = _DAT_00100290;
    uVar3 = ram0x00100288;
    if (local_68 != (char *)0x0) {
      local_6c = 0;
      *(undefined8 *)local_68 = _hb_all_shapers._0_8_;
      *(undefined8 *)(local_68 + 8) = uVar3;
      *(undefined8 *)(local_68 + 0x10) = uVar4;
      *(undefined8 *)(local_68 + 0x18) = uVar5;
      *(undefined8 *)(local_68 + 0x20) = uVar6;
      *(undefined8 *)(local_68 + 0x28) = uVar7;
      *(undefined8 *)(local_68 + 0x30) = uVar8;
      *(undefined8 *)(local_68 + 0x38) = uVar9;
      *(undefined8 *)(local_68 + 0x40) = _DAT_001002c0;
      while( true ) {
        pcVar12 = strchr(__s,0x2c);
        if (pcVar12 == (char *)0x0) {
          sVar13 = strlen(__s);
          pcVar12 = __s + sVar13;
        }
        if (local_6c < 3) {
          __s_00 = local_68 + (ulong)local_6c * 0x18;
          uVar14 = (ulong)local_6c;
          uVar15 = local_6c;
          do {
            sVar13 = strlen(__s_00);
            uVar17 = uVar14;
            if ((long)(int)sVar13 == (long)pcVar12 - (long)__s) {
              iVar10 = strncmp(__s_00,__s,(long)pcVar12 - (long)__s);
              if (iVar10 == 0) {
                uVar3 = *(undefined8 *)(__s_00 + 0x10);
                uVar4 = *(undefined8 *)__s_00;
                uVar5 = *(undefined8 *)(__s_00 + 8);
                uVar11 = uVar15 - local_6c;
                local_6c = local_6c + 1;
                uVar17 = (ulong)local_6c;
                pcVar1 = local_68 + uVar14 * 0x18;
                uVar16 = uVar17 * 0x18;
                uVar14 = 0x48;
                if (0x47 < uVar16) {
                  uVar14 = uVar16;
                }
                __memmove_chk(local_68 + uVar16,pcVar1,(ulong)uVar11 * 0x18,uVar14 + uVar17 * -0x18)
                ;
                *(undefined8 *)pcVar1 = uVar4;
                *(undefined8 *)(pcVar1 + 8) = uVar5;
                *(undefined8 *)(pcVar1 + 0x10) = uVar3;
              }
            }
            uVar15 = uVar15 + 1;
            __s_00 = __s_00 + 0x18;
            uVar14 = uVar17;
          } while (uVar15 != 3);
        }
        if (*pcVar12 == '\0') break;
        __s = pcVar12 + 1;
      }
      goto LAB_00100241;
    }
  }
  local_68 = (char *)0x0;
LAB_00100241:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_68;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


