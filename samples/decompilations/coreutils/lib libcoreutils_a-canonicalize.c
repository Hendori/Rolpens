
/* WARNING: Unknown calling convention */

char * canonicalize_filename_mode(char *name,canonicalize_mode_t can_mode)

{
  char (*pacVar1) [2];
  anon_union_1024_2_7bb2425f_for___space *paVar2;
  anon_union_1024_2_7bb2425f_for___space *paVar3;
  char cVar4;
  long lVar5;
  canonicalize_mode_t cVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  void *pvVar12;
  char *pcVar13;
  char *pcVar14;
  size_t sVar15;
  long lVar16;
  void *__dest;
  anon_union_1024_2_7bb2425f_for___space *__path;
  ulong uVar17;
  anon_union_1024_2_7bb2425f_for___space *paVar18;
  char *pcVar19;
  anon_union_1024_2_7bb2425f_for___space *paVar20;
  char *pcVar21;
  size_t sVar22;
  long in_FS_OFFSET;
  bool bVar23;
  int local_d24;
  long local_d18;
  stat st;
  realpath_bufs bufs;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  paVar20 = &bufs.rname.__space;
  bufs.rname.length = 0x400;
  paVar2 = &bufs.extra.__space;
  paVar3 = &bufs.link.__space;
  bufs.extra.data = paVar2;
  bufs.extra.length = 0x400;
  bufs.link.data = paVar3;
  bufs.link.length = 0x400;
  bufs.rname.data = paVar20;
  if ((((can_mode & (CAN_MISSING|CAN_ALL_BUT_LAST)) - CAN_ALL_BUT_LAST &
       can_mode & (CAN_MISSING|CAN_ALL_BUT_LAST)) == CAN_EXISTING) && (name != (char *)0x0)) {
    paVar18 = paVar20;
    if (*name != '\0') {
      if (*name == '/') {
        bufs.rname.__space.__c[0] = '/';
        pcVar10 = bufs.rname.__space.__c + 1;
        cVar8 = '/';
        __path = paVar20;
LAB_001001b0:
        cVar6 = can_mode & (CAN_MISSING|CAN_ALL_BUT_LAST);
        bVar7 = false;
        lVar16 = 0;
        local_d24 = 0;
LAB_001001d9:
        pcVar21 = name;
        if (cVar8 == '/') {
          do {
            cVar8 = name[1];
            name = name + 1;
          } while (cVar8 == '/');
          pcVar21 = name;
          if (cVar8 == '\0') goto LAB_00100278;
        }
        do {
          pcVar19 = pcVar21;
          cVar4 = pcVar19[1];
          pcVar21 = pcVar19 + 1;
          if (cVar4 == '\0') break;
        } while (cVar4 != '/');
        sVar22 = (long)pcVar21 - (long)name;
        if (sVar22 == 0) goto LAB_00100278;
        if (sVar22 == 1) {
          bVar23 = cVar8 != '.';
          cVar8 = cVar4;
          if (bVar23) goto LAB_001002d4;
          goto joined_r0x0010047a;
        }
        if (((cVar8 == '.') && (sVar22 == 2)) && (name[1] == '.')) {
          cVar8 = cVar4;
          if (((char *)((long)__path + 1) < pcVar10) && (pcVar10 = pcVar10 + -1, __path < pcVar10))
          {
            do {
              if ((*(char (*) [2])(pcVar10 + -1))[0] == '/') break;
              pcVar10 = pcVar10 + -1;
            } while ((anon_union_1024_2_7bb2425f_for___space *)pcVar10 != __path);
          }
          goto joined_r0x0010047a;
        }
LAB_001002d4:
        if ((*(char (*) [2])(pcVar10 + -1))[0] != '/') {
          *pcVar10 = '/';
          pcVar10 = pcVar10 + 1;
        }
        pcVar13 = __path->__c + (bufs.rname.length - (long)pcVar10);
        while (pcVar13 < (char *)(sVar22 + 2)) {
          paVar18 = (anon_union_1024_2_7bb2425f_for___space *)(pcVar10 + -(long)__path);
          cVar8 = gl_scratch_buffer_grow_preserve(&bufs);
          if (cVar8 == '\0') goto LAB_0010035e;
          pcVar10 = (char *)((long)bufs.rname.data + (long)paVar18);
          __path = (anon_union_1024_2_7bb2425f_for___space *)bufs.rname.data;
          pcVar13 = (char *)(bufs.rname.length - (long)paVar18->__c);
        }
        pcVar10 = (char *)mempcpy(pcVar10,name,sVar22);
        *pcVar10 = '\0';
        if ((can_mode & CAN_NOLINKS) == CAN_EXISTING) {
          while( true ) {
            pvVar12 = bufs.link.data;
            paVar18 = (anon_union_1024_2_7bb2425f_for___space *)(bufs.link.length - 1);
            sVar22 = readlink(__path->__c,(char *)bufs.link.data,(size_t)paVar18);
            if ((long)sVar22 < (long)paVar18) break;
            cVar8 = gl_scratch_buffer_grow(&bufs.link);
            if (cVar8 == '\0') goto LAB_0010035e;
          }
          if (-1 < (long)sVar22) {
            if (local_d24 < 0x14) {
              local_d24 = local_d24 + 1;
            }
            else if (*name != '\0') {
              pcVar10[(long)name - (long)pcVar21] = '\0';
              paVar18 = (anon_union_1024_2_7bb2425f_for___space *)&_LC0;
              if (__path->__c[0] != '\0') {
                paVar18 = __path;
              }
              iVar9 = stat(paVar18->__c,(stat *)&st);
              if (iVar9 != 0) goto LAB_0010058c;
              pcVar10[(long)name - (long)pcVar21] = *name;
              if ((lVar16 == 0) &&
                 (lVar16 = hash_initialize(7,0,&triple_hash,&triple_compare_ino_str,&triple_free),
                 paVar18 = paVar20, lVar16 == 0)) goto LAB_0010035e;
              cVar8 = seen_file(lVar16,name,&st);
              if (cVar8 != '\0') {
                if (cVar6 == CAN_MISSING) goto LAB_00100473;
                piVar11 = __errno_location();
                *piVar11 = 0x28;
                goto LAB_00100595;
              }
              record_file(lVar16,name,&st);
            }
            __dest = bufs.extra.data;
            *(undefined1 *)((long)pvVar12 + sVar22) = 0;
            if (bVar7) {
              local_d18 = (long)pcVar21 - (long)bufs.extra.data;
              sVar15 = strlen(pcVar21);
              uVar17 = sVar15 + sVar22;
              if (bufs.extra.length <= uVar17) {
LAB_001007e4:
                do {
                  cVar8 = gl_scratch_buffer_grow_preserve(&bufs.extra);
                  paVar18 = paVar20;
                  if (cVar8 == '\0') goto LAB_0010035e;
                } while (bufs.extra.length <= uVar17);
                __dest = bufs.extra.data;
                if (!bVar7) goto LAB_001008d4;
              }
              pcVar21 = (char *)((long)__dest + local_d18);
            }
            else {
              sVar15 = strlen(pcVar21);
              uVar17 = sVar15 + sVar22;
              if (bufs.extra.length <= uVar17) goto LAB_001007e4;
            }
LAB_001008d4:
            memmove((void *)((long)__dest + sVar22),pcVar21,sVar15 + 1);
            pcVar21 = (char *)memcpy(__dest,pvVar12,sVar22);
                    /* WARNING: Load size is inaccurate */
            if (*pvVar12 == '/') {
              __path->__c[0] = '/';
              bVar7 = true;
              cVar8 = *pcVar21;
              pcVar10 = __path->__c + 1;
            }
            else {
              bVar7 = true;
              cVar8 = *pcVar21;
              if (__path->__c + 1 < pcVar10) {
                do {
                  pcVar19 = pcVar10 + -1;
                  if (__path == (anon_union_1024_2_7bb2425f_for___space *)pcVar19) break;
                  pacVar1 = (char (*) [2])(pcVar10 + -2);
                  pcVar10 = pcVar19;
                } while ((*pacVar1)[0] != '/');
                bVar7 = true;
                pcVar10 = pcVar19;
              }
            }
            goto joined_r0x0010047a;
          }
          if (cVar6 != CAN_MISSING) {
            pcVar13 = pcVar21;
            if (*pcVar21 == '/') goto LAB_001003f0;
LAB_00100444:
            piVar11 = __errno_location();
            bVar23 = *piVar11 != 0x16;
LAB_0010046b:
            if (bVar23) goto LAB_0010053b;
          }
        }
        else if (cVar6 != CAN_MISSING) {
          pcVar13 = pcVar21;
          if (*pcVar21 == '/') {
LAB_001003f0:
            do {
              do {
                pcVar14 = pcVar13;
                cVar8 = pcVar14[1];
                pcVar13 = pcVar14 + 1;
              } while (cVar8 == '/');
              if (cVar8 == '\0') {
LAB_00100608:
                *(char (*) [2])pcVar10 = dir_suffix;
                iVar9 = faccessat(-100,__path->__c,0,0x200);
                bVar23 = iVar9 != 0;
                goto LAB_0010046b;
              }
              if (cVar8 != '.') break;
              cVar8 = pcVar14[2];
              if (cVar8 == '\0') goto LAB_00100608;
              if (cVar8 == '.') {
                if ((pcVar14[3] == '\0') || (pcVar14[3] == '/')) goto LAB_00100608;
                break;
              }
              pcVar13 = pcVar14 + 2;
            } while (cVar8 == '/');
            if ((can_mode & CAN_NOLINKS) == CAN_EXISTING) goto LAB_00100444;
          }
          cVar8 = *pcVar21;
          name = pcVar21;
          if (cVar8 != '\0') goto LAB_001001d9;
          iVar9 = faccessat(-100,__path->__c,0,0x200);
          if (iVar9 != 0) {
LAB_0010053b:
            if (((cVar6 == CAN_ALL_BUT_LAST) && (piVar11 = __errno_location(), *piVar11 == 2)) &&
               (sVar22 = strspn(pcVar21,"/"), pcVar21[sVar22] == '\0')) {
              cVar8 = pcVar19[1];
              goto joined_r0x0010047a;
            }
LAB_0010058c:
            if (lVar16 != 0) {
LAB_00100595:
              hash_free(lVar16);
            }
LAB_001000e8:
            pcVar10 = (char *)0x0;
            goto LAB_001000f0;
          }
        }
LAB_00100473:
        cVar8 = pcVar19[1];
joined_r0x0010047a:
        name = pcVar21;
        if (cVar8 == '\0') goto LAB_00100278;
        goto LAB_001001d9;
      }
      do {
        __path = (anon_union_1024_2_7bb2425f_for___space *)bufs.rname.data;
        pcVar10 = getcwd((char *)bufs.rname.data,bufs.rname.length);
        if (pcVar10 != (char *)0x0) {
          pcVar10 = (char *)rawmemchr(__path,0);
          cVar8 = *name;
          if (cVar8 != '\0') goto LAB_001001b0;
          if ((pcVar10 <= (char *)((long)&__path->__align + 1)) ||
             ((*(char (*) [2])(pcVar10 + -1))[0] != '/')) goto LAB_0010029a;
          goto LAB_001004cb;
        }
        piVar11 = __errno_location();
        if (*piVar11 == 0xc) break;
        if (*piVar11 != 0x22) goto LAB_001000e8;
        cVar8 = gl_scratch_buffer_grow(&bufs);
      } while (cVar8 != '\0');
      goto LAB_0010035e;
    }
    goto LAB_00100368;
  }
  piVar11 = __errno_location();
  *piVar11 = 0x16;
  goto LAB_0010015b;
LAB_00100278:
  if ((char *)((long)__path + 1) < pcVar10) {
    if ((*(char (*) [2])(pcVar10 + -1))[0] == '/') {
      if (lVar16 != 0) {
        hash_free(lVar16);
      }
LAB_001004cb:
      pcVar19 = pcVar10 + -1;
      pcVar21 = pcVar10;
    }
    else {
      pcVar21 = pcVar10 + 1;
      pcVar19 = pcVar10;
      if (lVar16 != 0) {
        hash_free(lVar16);
      }
    }
  }
  else {
    if (lVar16 != 0) {
      hash_free(lVar16);
    }
LAB_0010029a:
    pcVar21 = pcVar10 + 1;
    pcVar19 = pcVar10;
  }
  *pcVar19 = '\0';
  sVar22 = (long)pcVar21 - (long)__path;
  pvVar12 = malloc(sVar22);
  paVar18 = paVar20;
  if (pvVar12 != (void *)0x0) {
    pcVar10 = (char *)__memcpy_chk(pvVar12,__path,sVar22,sVar22);
LAB_001000f0:
    if ((anon_union_1024_2_7bb2425f_for___space *)bufs.link.data != paVar3) {
      free(bufs.link.data);
    }
    if ((anon_union_1024_2_7bb2425f_for___space *)bufs.extra.data != paVar2) {
      free(bufs.extra.data);
    }
    goto LAB_0010015d;
  }
LAB_0010035e:
  xalloc_die();
LAB_00100368:
  piVar11 = __errno_location();
  *piVar11 = 2;
  paVar20 = paVar18;
LAB_0010015b:
  pcVar10 = (char *)0x0;
LAB_0010015d:
  if ((anon_union_1024_2_7bb2425f_for___space *)bufs.rname.data != paVar20) {
    free(bufs.rname.data);
  }
  if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar10;
}


