
/* WARNING: Unknown calling convention */

void set_simple_backup_suffix(char *s)

{
  char *pcVar1;
  
  if ((((s != (char *)0x0) || (s = getenv("SIMPLE_BACKUP_SUFFIX"), s != (char *)0x0)) &&
      (*s != '\0')) && (pcVar1 = (char *)last_component(s), s == pcVar1)) {
    simple_backup_suffix = s;
    return;
  }
  simple_backup_suffix = "~";
  return;
}



/* WARNING: Unknown calling convention */

char * backupfile_internal(int dir_fd,char *file,backup_type backup_type,_Bool rename)

{
  long lVar1;
  char (*pacVar2) [2];
  size_t sVar3;
  undefined2 uVar4;
  long lVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  size_t sVar12;
  ulong uVar13;
  char *pcVar14;
  dirent *pdVar15;
  size_t sVar16;
  ulong uVar17;
  char *pcVar18;
  undefined2 *puVar19;
  int *piVar20;
  DIR *__dirp;
  char cVar21;
  ulong uVar22;
  char *pcVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  byte bVar27;
  ulong local_b8;
  backup_type local_ac;
  size_t local_a8;
  size_t local_a0;
  int local_88;
  long local_70;
  int sdir;
  char tmp [2];
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar9 = (char *)last_component(file);
  lVar10 = base_len(pcVar9);
  uVar26 = (long)pcVar9 - (long)file;
  uVar11 = lVar10 + uVar26;
  pcVar14 = simple_backup_suffix;
  if (simple_backup_suffix == (char *)0x0) {
    pcVar18 = getenv("SIMPLE_BACKUP_SUFFIX");
    pcVar14 = "~";
    if (((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) &&
       (pcVar14 = (char *)last_component(pcVar18), pcVar18 != pcVar14)) {
      pcVar14 = "~";
    }
  }
  simple_backup_suffix = pcVar14;
  sVar12 = strlen(simple_backup_suffix);
  uVar13 = sVar12 + 1;
  uVar17 = 9;
  if (8 < uVar13) {
    uVar17 = uVar13;
  }
  sVar12 = uVar11 + 1 + uVar17;
  pcVar14 = (char *)malloc(sVar12);
  if (pcVar14 != (char *)0x0) {
    local_70 = 0;
    __dirp = (DIR *)0x0;
    sdir = -1;
    local_b8 = sVar12;
    local_ac = backup_type;
    local_88 = dir_fd;
    do {
      __memcpy_chk(pcVar14,file,uVar11,local_b8);
      if (local_ac == simple_backups) {
        bVar6 = true;
        uVar17 = local_b8;
        if (local_b8 <= uVar11) {
          uVar17 = uVar11;
        }
        __memcpy_chk(pcVar14 + uVar11,simple_backup_suffix,uVar13,uVar17 - uVar11);
      }
      else {
        if (__dirp == (DIR *)0x0) {
          pacVar2 = (char (*) [2])(pcVar14 + uVar26);
          tmp = *pacVar2;
          uVar17 = local_b8;
          if (local_b8 <= uVar26) {
            uVar17 = uVar26;
          }
          uVar22 = uVar17 - uVar26;
          __memcpy_chk(pacVar2,&_LC2,2,uVar22);
          __dirp = (DIR *)opendirat(local_88,pcVar14,0,&sdir);
          uVar24 = local_b8;
          if (local_b8 < uVar22) {
            uVar24 = uVar22;
          }
          pcVar18 = *pacVar2 + lVar10;
          uVar17 = (uVar26 - uVar17) + lVar10 + uVar24;
          if (uVar17 < uVar24) {
            uVar17 = uVar24;
          }
          lVar25 = uVar17 + (uVar22 - (lVar10 + uVar24));
          if (__dirp != (DIR *)0x0) {
            __memcpy_chk(pacVar2,tmp,2,uVar22);
            __memcpy_chk(pcVar18,&_LC5,5,lVar25);
            goto LAB_00100166;
          }
          piVar20 = __errno_location();
          if (*piVar20 == 0xc) {
            __memcpy_chk(pacVar2,tmp,2,uVar22);
            __memcpy_chk(pcVar18,&_LC5,5,lVar25);
            goto LAB_00100760;
          }
          __memcpy_chk(pacVar2,tmp,2,uVar22);
          __memcpy_chk(pcVar18,&_LC5,5,lVar25);
LAB_001006d2:
          if (local_ac == numbered_existing_backups) {
            uVar17 = local_b8;
            if (local_b8 <= uVar11) {
              uVar17 = uVar11;
            }
            __memcpy_chk(pcVar14 + uVar11,simple_backup_suffix,uVar13,uVar17 - uVar11);
            local_ac = simple_backups;
          }
        }
        else {
          rewinddir(__dirp);
LAB_00100166:
          local_a8 = 1;
          local_a0 = sVar12;
          bVar7 = 2;
LAB_00100188:
          bVar27 = bVar7;
          pdVar15 = readdir(__dirp);
          pcVar18 = pcVar14;
          bVar7 = bVar27;
          if (pdVar15 != (dirent *)0x0) {
            while( true ) {
              pcVar23 = pdVar15->d_name;
              sVar16 = strlen(pcVar23);
              pcVar14 = pcVar18;
              if (sVar16 < lVar10 + 4U) break;
              iVar8 = memcmp(pcVar18 + uVar26,pcVar23,lVar10 + 2U);
              if (iVar8 != 0) break;
              pcVar23 = pcVar23 + lVar10 + 2U;
              if (8 < (byte)(*pcVar23 - 0x31U)) break;
              bVar27 = *pcVar23 == '9';
              cVar21 = pcVar23[1];
              iVar8 = (int)cVar21;
              if (iVar8 - 0x30U < 10) {
                sVar16 = 1;
                do {
                  sVar16 = sVar16 + 1;
                  bVar27 = bVar27 & (char)iVar8 == '9';
                  cVar21 = pcVar23[sVar16];
                  iVar8 = (int)cVar21;
                } while (iVar8 - 0x30U < 10);
              }
              else {
                sVar16 = 1;
              }
              if (((cVar21 != '~') || (pcVar23[sVar16 + 1] != '\0')) ||
                 (((long)sVar16 <= (long)local_a8 &&
                  ((local_a8 != sVar16 ||
                   (iVar8 = memcmp(pcVar18 + uVar11 + 2,pcVar23,sVar16), 0 < iVar8)))))) break;
              local_a8 = bVar27 + sVar16;
              sVar3 = local_a8 + uVar11 + 4;
              if ((long)local_a0 < (long)sVar3) {
                local_a0 = sVar3;
                if (!SCARRY8((long)sVar3 >> 1,sVar3)) {
                  local_a0 = ((long)sVar3 >> 1) + sVar3;
                }
                local_b8 = 1;
                if (local_a0 != 0) {
                  local_b8 = local_a0;
                }
                pcVar14 = (char *)realloc(pcVar18,local_b8);
                if (pcVar14 == (char *)0x0) goto LAB_00100758;
              }
              pcVar18 = pcVar14 + uVar11;
              uVar17 = local_b8;
              if (local_b8 <= uVar11) {
                uVar17 = uVar11;
              }
              lVar25 = (ulong)bVar27 + 2;
              *(undefined2 *)pcVar18 = _LC3;
              pcVar18[2] = '0';
              uVar22 = uVar17 - uVar11;
              uVar24 = local_b8;
              if (local_b8 < uVar22) {
                uVar24 = uVar22;
              }
              lVar1 = lVar25 + uVar24;
              uVar17 = (uVar11 - uVar17) + lVar1;
              if (uVar17 < uVar24) {
                uVar17 = uVar24;
              }
              lVar25 = __memcpy_chk(pcVar18 + lVar25,pcVar23,sVar16 + 2,uVar17 + (uVar22 - lVar1));
              pcVar18 = (char *)(lVar25 + sVar16 + -1);
              cVar21 = *(char *)(lVar25 + sVar16 + -1);
              while (cVar21 == '9') {
                *pcVar18 = '0';
                pcVar23 = pcVar18 + -1;
                pcVar18 = pcVar18 + -1;
                cVar21 = *pcVar23;
              }
              *pcVar18 = cVar21 + '\x01';
              pdVar15 = readdir(__dirp);
              pcVar18 = pcVar14;
              bVar7 = bVar27;
              if (pdVar15 == (dirent *)0x0) goto LAB_00100370;
            }
            goto LAB_00100188;
          }
LAB_00100370:
          if (bVar27 == 2) goto LAB_001006d2;
          pcVar18 = pcVar14;
          if (bVar27 == 3) {
LAB_00100758:
            closedir(__dirp);
            pcVar14 = pcVar18;
LAB_00100760:
            free(pcVar14);
            piVar20 = __errno_location();
            *piVar20 = 0xc;
            goto LAB_001004c8;
          }
          bVar6 = true;
          if (bVar27 != 1) goto LAB_00100440;
        }
        bVar6 = true;
        puVar19 = (undefined2 *)last_component(pcVar14);
        lVar25 = base_len(puVar19);
        iVar8 = sdir;
        if (0xe < lVar25) {
          if (local_70 == 0) {
            if (sdir < 0) {
              uVar4 = *puVar19;
              *puVar19 = 0x2e;
              piVar20 = __errno_location();
              *piVar20 = 0;
              local_70 = pathconf(pcVar14,3);
              local_70 = local_70 - (ulong)(*piVar20 == 0);
              *puVar19 = uVar4;
            }
            else {
              piVar20 = __errno_location();
              *piVar20 = 0;
              local_70 = fpathconf(iVar8,3);
              local_70 = local_70 - (ulong)(*piVar20 == 0);
            }
            if (-1 < local_70) goto LAB_00100427;
            lVar1 = 0xe;
            if (local_70 == -1) {
              lVar1 = local_70;
            }
          }
          else {
LAB_00100427:
            bVar6 = true;
            lVar1 = local_70;
            if (lVar25 <= local_70) goto LAB_00100440;
          }
          local_70 = lVar1;
          pcVar18 = pcVar14 + (uVar11 - (long)puVar19);
          if (local_70 <= (long)(pcVar14 + (uVar11 - (long)puVar19))) {
            pcVar18 = (char *)(local_70 + -1);
          }
          bVar6 = false;
          ((char *)((long)puVar19 + (long)pcVar18))[0] = '~';
          ((char *)((long)puVar19 + (long)pcVar18))[1] = '\0';
        }
      }
LAB_00100440:
      if (!rename) {
LAB_00100778:
        if (__dirp != (DIR *)0x0) {
          closedir(__dirp);
        }
        goto LAB_001004cb;
      }
      pcVar18 = pcVar14;
      pcVar23 = file;
      if (-1 < sdir) {
        local_88 = sdir;
        pcVar18 = pcVar14 + uVar26;
        pcVar23 = pcVar9;
      }
      iVar8 = renameatu(local_88,pcVar23,local_88,pcVar18,local_ac != simple_backups);
      if (iVar8 == 0) goto LAB_00100778;
      piVar20 = __errno_location();
      iVar8 = *piVar20;
    } while ((iVar8 == 0x11) && (bVar6));
    if (__dirp != (DIR *)0x0) {
      closedir(__dirp);
    }
    free(pcVar14);
    *piVar20 = iVar8;
  }
LAB_001004c8:
  pcVar14 = (char *)0x0;
LAB_001004cb:
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


