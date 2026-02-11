
undefined8 canonicalize_filename_mode(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  void *pvVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  size_t sVar12;
  long lVar13;
  undefined1 *__dest;
  char *__path;
  ulong uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  size_t sVar18;
  long in_FS_OFFSET;
  bool bVar19;
  int local_d24;
  long local_d18;
  stat local_d08;
  char *local_c78;
  size_t local_c70;
  char local_c68;
  char local_c67 [1023];
  undefined1 *local_868;
  ulong local_860;
  undefined1 local_858 [1024];
  char *local_458;
  long local_450;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar15 = &local_c68;
  local_c70 = 0x400;
  local_868 = local_858;
  local_860 = 0x400;
  local_458 = local_448;
  local_450 = 0x400;
  local_c78 = pcVar15;
  if ((((param_2 & 3) - 1 & param_2 & 3) == 0) && (param_1 != (char *)0x0)) {
    pcVar10 = pcVar15;
    if (*param_1 != '\0') {
      if (*param_1 == '/') {
        local_c68 = '/';
        pcVar6 = local_c67;
        cVar4 = '/';
        __path = pcVar15;
LAB_001001b0:
        uVar2 = param_2 & 3;
        bVar3 = false;
        lVar13 = 0;
        local_d24 = 0;
LAB_001001d9:
        pcVar17 = param_1;
        if (cVar4 == '/') {
          do {
            cVar4 = param_1[1];
            param_1 = param_1 + 1;
          } while (cVar4 == '/');
          pcVar17 = param_1;
          if (cVar4 == '\0') goto LAB_00100278;
        }
        do {
          pcVar16 = pcVar17;
          cVar1 = pcVar16[1];
          pcVar17 = pcVar16 + 1;
          if (cVar1 == '\0') break;
        } while (cVar1 != '/');
        sVar18 = (long)pcVar17 - (long)param_1;
        if (sVar18 == 0) goto LAB_00100278;
        if (sVar18 == 1) {
          bVar19 = cVar4 != '.';
          cVar4 = cVar1;
          if (bVar19) goto LAB_001002d4;
          goto joined_r0x0010047a;
        }
        if (((cVar4 == '.') && (sVar18 == 2)) && (param_1[1] == '.')) {
          cVar4 = cVar1;
          if ((__path + 1 < pcVar6) && (pcVar6 = pcVar6 + -1, __path < pcVar6)) {
            do {
              if (pcVar6[-1] == '/') break;
              pcVar6 = pcVar6 + -1;
            } while (pcVar6 != __path);
          }
          goto joined_r0x0010047a;
        }
LAB_001002d4:
        if (pcVar6[-1] != '/') {
          *pcVar6 = '/';
          pcVar6 = pcVar6 + 1;
        }
        pcVar10 = __path + (local_c70 - (long)pcVar6);
        for (; pcVar10 < (char *)(sVar18 + 2); pcVar10 = (char *)(local_c70 - (long)pcVar10)) {
          pcVar10 = pcVar6 + -(long)__path;
          cVar4 = gl_scratch_buffer_grow_preserve(&local_c78);
          if (cVar4 == '\0') goto LAB_0010035e;
          pcVar6 = local_c78 + (long)pcVar10;
          __path = local_c78;
        }
        pcVar6 = (char *)mempcpy(pcVar6,param_1,sVar18);
        *pcVar6 = '\0';
        if ((param_2 & 4) == 0) {
          while( true ) {
            pcVar11 = local_458;
            pcVar10 = (char *)(local_450 + -1);
            sVar18 = readlink(__path,local_458,(size_t)pcVar10);
            if ((long)sVar18 < (long)pcVar10) break;
            cVar4 = gl_scratch_buffer_grow(&local_458);
            if (cVar4 == '\0') goto LAB_0010035e;
          }
          if (-1 < (long)sVar18) {
            if (local_d24 < 0x14) {
              local_d24 = local_d24 + 1;
            }
            else if (*param_1 != '\0') {
              pcVar6[(long)param_1 - (long)pcVar17] = '\0';
              pcVar10 = ".";
              if (*__path != '\0') {
                pcVar10 = __path;
              }
              iVar5 = stat(pcVar10,&local_d08);
              if (iVar5 != 0) goto LAB_0010058c;
              pcVar6[(long)param_1 - (long)pcVar17] = *param_1;
              if ((lVar13 == 0) &&
                 (lVar13 = hash_initialize(7,0,&triple_hash,&triple_compare_ino_str,&triple_free),
                 pcVar10 = pcVar15, lVar13 == 0)) goto LAB_0010035e;
              cVar4 = seen_file(lVar13,param_1,&local_d08);
              if (cVar4 != '\0') {
                if (uVar2 == 2) goto LAB_00100473;
                piVar7 = __errno_location();
                *piVar7 = 0x28;
                goto LAB_00100595;
              }
              record_file(lVar13,param_1,&local_d08);
            }
            __dest = local_868;
            pcVar11[sVar18] = '\0';
            if (bVar3) {
              local_d18 = (long)pcVar17 - (long)local_868;
              sVar12 = strlen(pcVar17);
              uVar14 = sVar12 + sVar18;
              if (local_860 <= uVar14) {
LAB_001007e4:
                do {
                  cVar4 = gl_scratch_buffer_grow_preserve(&local_868);
                  pcVar10 = pcVar15;
                  if (cVar4 == '\0') goto LAB_0010035e;
                } while (local_860 <= uVar14);
                __dest = local_868;
                if (!bVar3) goto LAB_001008d4;
              }
              pcVar17 = __dest + local_d18;
            }
            else {
              sVar12 = strlen(pcVar17);
              uVar14 = sVar12 + sVar18;
              if (local_860 <= uVar14) goto LAB_001007e4;
            }
LAB_001008d4:
            memmove(__dest + sVar18,pcVar17,sVar12 + 1);
            pcVar17 = (char *)memcpy(__dest,pcVar11,sVar18);
            if (*pcVar11 == '/') {
              *__path = '/';
              bVar3 = true;
              cVar4 = *pcVar17;
              pcVar6 = __path + 1;
            }
            else {
              bVar3 = true;
              cVar4 = *pcVar17;
              if (__path + 1 < pcVar6) {
                do {
                  pcVar10 = pcVar6 + -1;
                  if (__path == pcVar10) break;
                  pcVar16 = pcVar6 + -2;
                  pcVar6 = pcVar10;
                } while (*pcVar16 != '/');
                bVar3 = true;
                pcVar6 = pcVar10;
              }
            }
            goto joined_r0x0010047a;
          }
          if (uVar2 != 2) {
            pcVar10 = pcVar17;
            if (*pcVar17 == '/') goto LAB_001003f0;
LAB_00100444:
            piVar7 = __errno_location();
            bVar19 = *piVar7 != 0x16;
LAB_0010046b:
            if (bVar19) goto LAB_0010053b;
          }
        }
        else if (uVar2 != 2) {
          pcVar10 = pcVar17;
          if (*pcVar17 == '/') {
LAB_001003f0:
            do {
              do {
                pcVar11 = pcVar10;
                cVar4 = pcVar11[1];
                pcVar10 = pcVar11 + 1;
              } while (cVar4 == '/');
              if (cVar4 == '\0') {
LAB_00100608:
                *(undefined2 *)pcVar6 = dir_suffix;
                iVar5 = faccessat(-100,__path,0,0x200);
                bVar19 = iVar5 != 0;
                goto LAB_0010046b;
              }
              if (cVar4 != '.') break;
              cVar4 = pcVar11[2];
              if (cVar4 == '\0') goto LAB_00100608;
              if (cVar4 == '.') {
                if ((pcVar11[3] == '\0') || (pcVar11[3] == '/')) goto LAB_00100608;
                break;
              }
              pcVar10 = pcVar11 + 2;
            } while (cVar4 == '/');
            if ((param_2 & 4) == 0) goto LAB_00100444;
          }
          cVar4 = *pcVar17;
          param_1 = pcVar17;
          if (cVar4 != '\0') goto LAB_001001d9;
          iVar5 = faccessat(-100,__path,0,0x200);
          if (iVar5 != 0) {
LAB_0010053b:
            if (((uVar2 == 1) && (piVar7 = __errno_location(), *piVar7 == 2)) &&
               (sVar18 = strspn(pcVar17,"/"), pcVar17[sVar18] == '\0')) {
              cVar4 = pcVar16[1];
              goto joined_r0x0010047a;
            }
LAB_0010058c:
            if (lVar13 != 0) {
LAB_00100595:
              hash_free(lVar13);
            }
LAB_001000e8:
            uVar9 = 0;
            goto LAB_001000f0;
          }
        }
LAB_00100473:
        cVar4 = pcVar16[1];
joined_r0x0010047a:
        param_1 = pcVar17;
        if (cVar4 == '\0') goto LAB_00100278;
        goto LAB_001001d9;
      }
      do {
        __path = local_c78;
        pcVar6 = getcwd(local_c78,local_c70);
        if (pcVar6 != (char *)0x0) {
          pcVar6 = (char *)rawmemchr(__path,0);
          cVar4 = *param_1;
          if (cVar4 != '\0') goto LAB_001001b0;
          if ((pcVar6 <= __path + 1) || (pcVar6[-1] != '/')) goto LAB_0010029a;
          goto LAB_001004cb;
        }
        piVar7 = __errno_location();
        if (*piVar7 == 0xc) break;
        if (*piVar7 != 0x22) goto LAB_001000e8;
        cVar4 = gl_scratch_buffer_grow(&local_c78);
      } while (cVar4 != '\0');
      goto LAB_0010035e;
    }
    goto LAB_00100368;
  }
  piVar7 = __errno_location();
  *piVar7 = 0x16;
  goto LAB_0010015b;
LAB_00100278:
  if (__path + 1 < pcVar6) {
    if (pcVar6[-1] == '/') {
      if (lVar13 != 0) {
        hash_free(lVar13);
      }
LAB_001004cb:
      pcVar17 = pcVar6 + -1;
      pcVar10 = pcVar6;
    }
    else {
      pcVar10 = pcVar6 + 1;
      pcVar17 = pcVar6;
      if (lVar13 != 0) {
        hash_free(lVar13);
      }
    }
  }
  else {
    if (lVar13 != 0) {
      hash_free(lVar13);
    }
LAB_0010029a:
    pcVar10 = pcVar6 + 1;
    pcVar17 = pcVar6;
  }
  *pcVar17 = '\0';
  sVar18 = (long)pcVar10 - (long)__path;
  pvVar8 = malloc(sVar18);
  pcVar10 = pcVar15;
  if (pvVar8 != (void *)0x0) {
    uVar9 = __memcpy_chk(pvVar8,__path,sVar18,sVar18);
LAB_001000f0:
    if (local_458 != local_448) {
      free(local_458);
    }
    if (local_868 != local_858) {
      free(local_868);
    }
    goto LAB_0010015d;
  }
LAB_0010035e:
  xalloc_die();
LAB_00100368:
  piVar7 = __errno_location();
  *piVar7 = 2;
  pcVar15 = pcVar10;
LAB_0010015b:
  uVar9 = 0;
LAB_0010015d:
  if (local_c78 != pcVar15) {
    free(local_c78);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


