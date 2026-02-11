
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
  undefined2 uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  char *pcVar10;
  dirent *pdVar11;
  size_t sVar12;
  ulong uVar13;
  char *pcVar14;
  undefined2 *puVar15;
  int *piVar16;
  long lVar17;
  DIR *__dirp;
  char cVar18;
  ulong uVar19;
  char *pcVar20;
  size_t sVar21;
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
  lVar5 = last_component(param_2);
  lVar6 = base_len(lVar5);
  uVar24 = lVar5 - param_2;
  uVar7 = lVar6 + uVar24;
  pcVar10 = simple_backup_suffix;
  if (simple_backup_suffix == (char *)0x0) {
    pcVar14 = getenv("SIMPLE_BACKUP_SUFFIX");
    pcVar10 = "~";
    if (((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) &&
       (pcVar10 = (char *)last_component(pcVar14), pcVar14 != pcVar10)) {
      pcVar10 = "~";
    }
  }
  simple_backup_suffix = pcVar10;
  sVar8 = strlen(simple_backup_suffix);
  uVar9 = sVar8 + 1;
  uVar13 = 9;
  if (8 < uVar9) {
    uVar13 = uVar9;
  }
  sVar8 = uVar7 + 1 + uVar13;
  pcVar10 = (char *)malloc(sVar8);
  if (pcVar10 != (char *)0x0) {
    local_70 = 0;
    __dirp = (DIR *)0x0;
    local_48 = -1;
    local_b8 = sVar8;
    local_ac = param_3;
    local_88 = param_1;
    do {
      __memcpy_chk(pcVar10,param_2,uVar7,local_b8);
      if (local_ac == 1) {
        uVar13 = local_b8;
        if (local_b8 <= uVar7) {
          uVar13 = uVar7;
        }
        bVar2 = false;
        __memcpy_chk(pcVar10 + uVar7,simple_backup_suffix,uVar9,uVar13 - uVar7);
      }
      else {
        if (__dirp == (DIR *)0x0) {
          pcVar14 = pcVar10 + uVar24;
          local_42 = *(undefined2 *)pcVar14;
          uVar13 = local_b8;
          if (local_b8 <= uVar24) {
            uVar13 = uVar24;
          }
          uVar19 = uVar13 - uVar24;
          __memcpy_chk(pcVar14,&_LC2,2,uVar19);
          __dirp = (DIR *)opendirat(local_88,pcVar10,0,&local_48);
          uVar22 = local_b8;
          if (local_b8 < uVar19) {
            uVar22 = uVar19;
          }
          pcVar20 = pcVar14 + lVar6;
          uVar13 = (uVar24 - uVar13) + lVar6 + uVar22;
          if (uVar13 < uVar22) {
            uVar13 = uVar22;
          }
          lVar23 = uVar13 + (uVar19 - (lVar6 + uVar22));
          if (__dirp != (DIR *)0x0) {
            __memcpy_chk(pcVar14,&local_42,2,uVar19);
            __memcpy_chk(pcVar20,&_LC5,5,lVar23);
            goto LAB_00100166;
          }
          piVar16 = __errno_location();
          if (*piVar16 == 0xc) {
            __memcpy_chk(pcVar14,&local_42,2,uVar19);
            __memcpy_chk(pcVar20,&_LC5,5,lVar23);
            goto LAB_0010074b;
          }
          __memcpy_chk(pcVar14,&local_42,2,uVar19);
          __memcpy_chk(pcVar20,&_LC5,5,lVar23);
LAB_001006ba:
          if (local_ac == 2) {
            uVar13 = local_b8;
            if (local_b8 <= uVar7) {
              uVar13 = uVar7;
            }
            __memcpy_chk(pcVar10 + uVar7,simple_backup_suffix,uVar9,uVar13 - uVar7);
            local_ac = 1;
          }
        }
        else {
          rewinddir(__dirp);
LAB_00100166:
          local_a8 = 1;
          local_a0 = sVar8;
          bVar3 = 2;
LAB_00100188:
          bVar25 = bVar3;
          pdVar11 = readdir(__dirp);
          pcVar14 = pcVar10;
          bVar3 = bVar25;
          if (pdVar11 != (dirent *)0x0) {
            while( true ) {
              pcVar20 = pdVar11->d_name;
              sVar12 = strlen(pcVar20);
              pcVar10 = pcVar14;
              if (sVar12 < lVar6 + 4U) break;
              iVar4 = memcmp(pcVar14 + uVar24,pcVar20,lVar6 + 2U);
              if (iVar4 != 0) break;
              pcVar20 = pcVar20 + lVar6 + 2U;
              if (8 < (byte)(*pcVar20 - 0x31U)) break;
              bVar25 = *pcVar20 == '9';
              cVar18 = pcVar20[1];
              iVar4 = (int)cVar18;
              if (iVar4 - 0x30U < 10) {
                sVar12 = 1;
                do {
                  sVar12 = sVar12 + 1;
                  bVar25 = bVar25 & (char)iVar4 == '9';
                  cVar18 = pcVar20[sVar12];
                  iVar4 = (int)cVar18;
                } while (iVar4 - 0x30U < 10);
              }
              else {
                sVar12 = 1;
              }
              if (((cVar18 != '~') || (pcVar20[sVar12 + 1] != '\0')) ||
                 (((long)sVar12 <= (long)local_a8 &&
                  ((local_a8 != sVar12 ||
                   (iVar4 = memcmp(pcVar14 + uVar7 + 2,pcVar20,sVar12), 0 < iVar4)))))) break;
              local_a8 = bVar25 + sVar12;
              sVar21 = local_a8 + uVar7 + 4;
              if ((long)local_a0 < (long)sVar21) {
                if (!SCARRY8((long)sVar21 >> 1,sVar21)) {
                  sVar21 = ((long)sVar21 >> 1) + sVar21;
                }
                local_b8 = 1;
                if (sVar21 != 0) {
                  local_b8 = sVar21;
                }
                pcVar10 = (char *)realloc(pcVar14,local_b8);
                local_a0 = sVar21;
                if (pcVar10 == (char *)0x0) goto LAB_00100743;
              }
              pcVar14 = pcVar10 + uVar7;
              uVar13 = local_b8;
              if (local_b8 <= uVar7) {
                uVar13 = uVar7;
              }
              lVar23 = (ulong)bVar25 + 2;
              *(undefined2 *)pcVar14 = _LC3;
              pcVar14[2] = '0';
              uVar19 = uVar13 - uVar7;
              uVar22 = local_b8;
              if (local_b8 < uVar19) {
                uVar22 = uVar19;
              }
              lVar17 = lVar23 + uVar22;
              uVar13 = (uVar7 - uVar13) + lVar17;
              if (uVar13 < uVar22) {
                uVar13 = uVar22;
              }
              lVar23 = __memcpy_chk(pcVar14 + lVar23,pcVar20,sVar12 + 2,uVar13 + (uVar19 - lVar17));
              pcVar14 = (char *)(lVar23 + sVar12 + -1);
              cVar18 = *(char *)(lVar23 + sVar12 + -1);
              while (cVar18 == '9') {
                *pcVar14 = '0';
                pcVar20 = pcVar14 + -1;
                pcVar14 = pcVar14 + -1;
                cVar18 = *pcVar20;
              }
              *pcVar14 = cVar18 + '\x01';
              pdVar11 = readdir(__dirp);
              pcVar14 = pcVar10;
              bVar3 = bVar25;
              if (pdVar11 == (dirent *)0x0) goto LAB_00100370;
            }
            goto LAB_00100188;
          }
LAB_00100370:
          if (bVar25 == 2) goto LAB_001006ba;
          pcVar14 = pcVar10;
          if (bVar25 == 3) {
LAB_00100743:
            closedir(__dirp);
            pcVar10 = pcVar14;
LAB_0010074b:
            free(pcVar10);
            piVar16 = __errno_location();
            *piVar16 = 0xc;
            goto LAB_001004b8;
          }
          bVar2 = false;
          if (bVar25 != 1) goto LAB_00100430;
        }
        bVar2 = false;
        puVar15 = (undefined2 *)last_component(pcVar10);
        lVar23 = base_len(puVar15);
        iVar4 = local_48;
        if (0xe < lVar23) {
          if (local_70 == 0) {
            if (local_48 < 0) {
              uVar1 = *puVar15;
              *puVar15 = 0x2e;
              piVar16 = __errno_location();
              *piVar16 = 0;
              lVar17 = pathconf(pcVar10,3);
              lVar17 = lVar17 - (ulong)(*piVar16 == 0);
              *puVar15 = uVar1;
            }
            else {
              piVar16 = __errno_location();
              *piVar16 = 0;
              lVar17 = fpathconf(iVar4,3);
              lVar17 = lVar17 - (ulong)(*piVar16 == 0);
            }
            local_70 = lVar17;
            if (-1 < lVar17) goto LAB_0010041b;
            local_70 = 0xe;
            if (lVar17 == -1) {
              local_70 = lVar17;
            }
          }
          else {
LAB_0010041b:
            bVar2 = false;
            if (lVar23 <= local_70) goto LAB_00100430;
          }
          bVar2 = true;
          pcVar14 = pcVar10 + (uVar7 - (long)puVar15);
          if (local_70 <= (long)(pcVar10 + (uVar7 - (long)puVar15))) {
            pcVar14 = (char *)(local_70 + -1);
          }
          ((char *)((long)puVar15 + (long)pcVar14))[0] = '~';
          ((char *)((long)puVar15 + (long)pcVar14))[1] = '\0';
        }
      }
LAB_00100430:
      if (param_4 == '\0') {
LAB_00100763:
        if (__dirp != (DIR *)0x0) {
          closedir(__dirp);
        }
        goto LAB_001004bb;
      }
      pcVar14 = pcVar10;
      lVar23 = param_2;
      if (-1 < local_48) {
        local_88 = local_48;
        pcVar14 = pcVar10 + uVar24;
        lVar23 = lVar5;
      }
      iVar4 = renameatu(local_88,lVar23,local_88,pcVar14,local_ac != 1);
      if (iVar4 == 0) goto LAB_00100763;
      piVar16 = __errno_location();
      iVar4 = *piVar16;
    } while ((iVar4 == 0x11) && (!bVar2));
    if (__dirp != (DIR *)0x0) {
      closedir(__dirp);
    }
    free(pcVar10);
    *piVar16 = iVar4;
  }
LAB_001004b8:
  pcVar10 = (char *)0x0;
LAB_001004bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


