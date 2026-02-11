
void set_simple_backup_suffix(char *param_1)

{
  char *pcVar1;
  
  if ((((param_1 != (char *)0x0) ||
       (param_1 = getenv("SIMPLE_BACKUP_SUFFIX"), param_1 != (char *)0x0)) && (*param_1 != '\0')) &&
     (pcVar1 = (char *)last_component(param_1), param_1 == pcVar1)) {
    simple_backup_suffix = param_1;
    return;
  }
  simple_backup_suffix = &_LC0;
  return;
}



char * backupfile_internal(int param_1,long param_2,int param_3,char param_4)

{
  long lVar1;
  size_t sVar2;
  undefined2 uVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  size_t sVar10;
  ulong uVar11;
  char *pcVar12;
  dirent *pdVar13;
  size_t sVar14;
  ulong uVar15;
  char *pcVar16;
  undefined2 *puVar17;
  int *piVar18;
  DIR *__dirp;
  char cVar19;
  ulong uVar20;
  char *pcVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  byte bVar25;
  ulong local_b8;
  int local_ac;
  size_t local_a8;
  size_t local_a0;
  int local_88;
  long local_70;
  int local_48;
  undefined2 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = last_component(param_2);
  lVar8 = base_len(lVar7);
  uVar24 = lVar7 - param_2;
  uVar9 = lVar8 + uVar24;
  pcVar12 = simple_backup_suffix;
  if (simple_backup_suffix == (char *)0x0) {
    pcVar16 = getenv("SIMPLE_BACKUP_SUFFIX");
    pcVar12 = "~";
    if (((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) &&
       (pcVar12 = (char *)last_component(pcVar16), pcVar16 != pcVar12)) {
      pcVar12 = "~";
    }
  }
  simple_backup_suffix = pcVar12;
  sVar10 = strlen(simple_backup_suffix);
  uVar11 = sVar10 + 1;
  uVar15 = 9;
  if (8 < uVar11) {
    uVar15 = uVar11;
  }
  sVar10 = uVar9 + 1 + uVar15;
  pcVar12 = (char *)malloc(sVar10);
  if (pcVar12 != (char *)0x0) {
    local_70 = 0;
    __dirp = (DIR *)0x0;
    local_48 = -1;
    local_b8 = sVar10;
    local_ac = param_3;
    local_88 = param_1;
    do {
      __memcpy_chk(pcVar12,param_2,uVar9,local_b8);
      if (local_ac == 1) {
        bVar4 = true;
        uVar15 = local_b8;
        if (local_b8 <= uVar9) {
          uVar15 = uVar9;
        }
        __memcpy_chk(pcVar12 + uVar9,simple_backup_suffix,uVar11,uVar15 - uVar9);
      }
      else {
        if (__dirp == (DIR *)0x0) {
          pcVar16 = pcVar12 + uVar24;
          local_42 = *(undefined2 *)pcVar16;
          uVar15 = local_b8;
          if (local_b8 <= uVar24) {
            uVar15 = uVar24;
          }
          uVar20 = uVar15 - uVar24;
          __memcpy_chk(pcVar16,&_LC2,2,uVar20);
          __dirp = (DIR *)opendirat(local_88,pcVar12,0,&local_48);
          uVar22 = local_b8;
          if (local_b8 < uVar20) {
            uVar22 = uVar20;
          }
          pcVar21 = pcVar16 + lVar8;
          uVar15 = (uVar24 - uVar15) + lVar8 + uVar22;
          if (uVar15 < uVar22) {
            uVar15 = uVar22;
          }
          lVar23 = uVar15 + (uVar20 - (lVar8 + uVar22));
          if (__dirp != (DIR *)0x0) {
            __memcpy_chk(pcVar16,&local_42,2,uVar20);
            __memcpy_chk(pcVar21,&_LC5,5,lVar23);
            goto LAB_00100166;
          }
          piVar18 = __errno_location();
          if (*piVar18 == 0xc) {
            __memcpy_chk(pcVar16,&local_42,2,uVar20);
            __memcpy_chk(pcVar21,&_LC5,5,lVar23);
            goto LAB_00100760;
          }
          __memcpy_chk(pcVar16,&local_42,2,uVar20);
          __memcpy_chk(pcVar21,&_LC5,5,lVar23);
LAB_001006d2:
          if (local_ac == 2) {
            uVar15 = local_b8;
            if (local_b8 <= uVar9) {
              uVar15 = uVar9;
            }
            __memcpy_chk(pcVar12 + uVar9,simple_backup_suffix,uVar11,uVar15 - uVar9);
            local_ac = 1;
          }
        }
        else {
          rewinddir(__dirp);
LAB_00100166:
          local_a8 = 1;
          local_a0 = sVar10;
          bVar5 = 2;
LAB_00100188:
          bVar25 = bVar5;
          pdVar13 = readdir(__dirp);
          pcVar16 = pcVar12;
          bVar5 = bVar25;
          if (pdVar13 != (dirent *)0x0) {
            while( true ) {
              pcVar21 = pdVar13->d_name;
              sVar14 = strlen(pcVar21);
              pcVar12 = pcVar16;
              if (sVar14 < lVar8 + 4U) break;
              iVar6 = memcmp(pcVar16 + uVar24,pcVar21,lVar8 + 2U);
              if (iVar6 != 0) break;
              pcVar21 = pcVar21 + lVar8 + 2U;
              if (8 < (byte)(*pcVar21 - 0x31U)) break;
              bVar25 = *pcVar21 == '9';
              cVar19 = pcVar21[1];
              iVar6 = (int)cVar19;
              if (iVar6 - 0x30U < 10) {
                sVar14 = 1;
                do {
                  sVar14 = sVar14 + 1;
                  bVar25 = bVar25 & (char)iVar6 == '9';
                  cVar19 = pcVar21[sVar14];
                  iVar6 = (int)cVar19;
                } while (iVar6 - 0x30U < 10);
              }
              else {
                sVar14 = 1;
              }
              if (((cVar19 != '~') || (pcVar21[sVar14 + 1] != '\0')) ||
                 (((long)sVar14 <= (long)local_a8 &&
                  ((local_a8 != sVar14 ||
                   (iVar6 = memcmp(pcVar16 + uVar9 + 2,pcVar21,sVar14), 0 < iVar6)))))) break;
              local_a8 = bVar25 + sVar14;
              sVar2 = local_a8 + uVar9 + 4;
              if ((long)local_a0 < (long)sVar2) {
                local_a0 = sVar2;
                if (!SCARRY8((long)sVar2 >> 1,sVar2)) {
                  local_a0 = ((long)sVar2 >> 1) + sVar2;
                }
                local_b8 = 1;
                if (local_a0 != 0) {
                  local_b8 = local_a0;
                }
                pcVar12 = (char *)realloc(pcVar16,local_b8);
                if (pcVar12 == (char *)0x0) goto LAB_00100758;
              }
              pcVar16 = pcVar12 + uVar9;
              uVar15 = local_b8;
              if (local_b8 <= uVar9) {
                uVar15 = uVar9;
              }
              lVar23 = (ulong)bVar25 + 2;
              *(undefined2 *)pcVar16 = _LC3;
              pcVar16[2] = '0';
              uVar20 = uVar15 - uVar9;
              uVar22 = local_b8;
              if (local_b8 < uVar20) {
                uVar22 = uVar20;
              }
              lVar1 = lVar23 + uVar22;
              uVar15 = (uVar9 - uVar15) + lVar1;
              if (uVar15 < uVar22) {
                uVar15 = uVar22;
              }
              lVar23 = __memcpy_chk(pcVar16 + lVar23,pcVar21,sVar14 + 2,uVar15 + (uVar20 - lVar1));
              pcVar16 = (char *)(lVar23 + sVar14 + -1);
              cVar19 = *(char *)(lVar23 + sVar14 + -1);
              while (cVar19 == '9') {
                *pcVar16 = '0';
                pcVar21 = pcVar16 + -1;
                pcVar16 = pcVar16 + -1;
                cVar19 = *pcVar21;
              }
              *pcVar16 = cVar19 + '\x01';
              pdVar13 = readdir(__dirp);
              pcVar16 = pcVar12;
              bVar5 = bVar25;
              if (pdVar13 == (dirent *)0x0) goto LAB_00100370;
            }
            goto LAB_00100188;
          }
LAB_00100370:
          if (bVar25 == 2) goto LAB_001006d2;
          pcVar16 = pcVar12;
          if (bVar25 == 3) {
LAB_00100758:
            closedir(__dirp);
            pcVar12 = pcVar16;
LAB_00100760:
            free(pcVar12);
            piVar18 = __errno_location();
            *piVar18 = 0xc;
            goto LAB_001004c8;
          }
          bVar4 = true;
          if (bVar25 != 1) goto LAB_00100440;
        }
        bVar4 = true;
        puVar17 = (undefined2 *)last_component(pcVar12);
        lVar23 = base_len(puVar17);
        iVar6 = local_48;
        if (0xe < lVar23) {
          if (local_70 == 0) {
            if (local_48 < 0) {
              uVar3 = *puVar17;
              *puVar17 = 0x2e;
              piVar18 = __errno_location();
              *piVar18 = 0;
              local_70 = pathconf(pcVar12,3);
              local_70 = local_70 - (ulong)(*piVar18 == 0);
              *puVar17 = uVar3;
            }
            else {
              piVar18 = __errno_location();
              *piVar18 = 0;
              local_70 = fpathconf(iVar6,3);
              local_70 = local_70 - (ulong)(*piVar18 == 0);
            }
            if (-1 < local_70) goto LAB_00100427;
            lVar1 = 0xe;
            if (local_70 == -1) {
              lVar1 = local_70;
            }
          }
          else {
LAB_00100427:
            bVar4 = true;
            lVar1 = local_70;
            if (lVar23 <= local_70) goto LAB_00100440;
          }
          local_70 = lVar1;
          pcVar16 = pcVar12 + (uVar9 - (long)puVar17);
          if (local_70 <= (long)(pcVar12 + (uVar9 - (long)puVar17))) {
            pcVar16 = (char *)(local_70 + -1);
          }
          bVar4 = false;
          ((char *)((long)puVar17 + (long)pcVar16))[0] = '~';
          ((char *)((long)puVar17 + (long)pcVar16))[1] = '\0';
        }
      }
LAB_00100440:
      if (param_4 == '\0') {
LAB_00100778:
        if (__dirp != (DIR *)0x0) {
          closedir(__dirp);
        }
        goto LAB_001004cb;
      }
      pcVar16 = pcVar12;
      lVar23 = param_2;
      if (-1 < local_48) {
        local_88 = local_48;
        pcVar16 = pcVar12 + uVar24;
        lVar23 = lVar7;
      }
      iVar6 = renameatu(local_88,lVar23,local_88,pcVar16,local_ac != 1);
      if (iVar6 == 0) goto LAB_00100778;
      piVar18 = __errno_location();
      iVar6 = *piVar18;
    } while ((iVar6 == 0x11) && (bVar4));
    if (__dirp != (DIR *)0x0) {
      closedir(__dirp);
    }
    free(pcVar12);
    *piVar18 = iVar6;
  }
LAB_001004c8:
  pcVar12 = (char *)0x0;
LAB_001004cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


