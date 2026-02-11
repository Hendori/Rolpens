
undefined8 aclinfo_has_xattr(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  size_t sVar4;
  char *pcVar5;
  char *__s;
  
  if ((long)param_1[1] < 1) {
    return 0;
  }
  __s = (char *)*param_1;
  pcVar1 = __s + param_1[1];
  if (__s < pcVar1) {
    cVar2 = *param_2;
    do {
      pcVar5 = param_2;
      cVar3 = cVar2;
      if (cVar2 == *__s) {
        do {
          if (cVar3 == '\0') {
            return 1;
          }
          __s = __s + 1;
          pcVar5 = pcVar5 + 1;
          cVar3 = *pcVar5;
        } while (cVar3 == *__s);
      }
      sVar4 = strlen(__s);
      __s = __s + sVar4 + 1;
    } while (__s < pcVar1);
  }
  return 0;
}



ulong has_xattr(char *param_1,long param_2,char *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ssize_t sVar6;
  int *piVar7;
  ulong uVar8;
  
  if (param_2 != 0) {
    uVar8 = param_4;
    uVar4 = aclinfo_has_xattr(param_2,param_1);
    if ((char)uVar4 != '\0') {
      return 1;
    }
    if (-1 < *(long *)(param_2 + 8)) {
      return uVar4;
    }
    iVar3 = *(int *)(param_2 + 0x1c);
    uVar5 = acl_errno_valid(iVar3);
    uVar2 = (uint)CONCAT71((int7)((ulong)uVar5 >> 8),iVar3 == 7) |
            (uint)CONCAT71((int7)(uVar8 >> 8),iVar3 == 0xd);
    bVar1 = (byte)uVar2 | (byte)uVar5 ^ 1;
    if (bVar1 == 0) {
      return (ulong)CONCAT31((int3)(uVar2 >> 8),bVar1);
    }
  }
  if ((param_4 & 0x20000) == 0) {
    sVar6 = lgetxattr(param_3,param_1,(void *)0x0,0);
    iVar3 = (int)sVar6;
  }
  else {
    sVar6 = getxattr(param_3,param_1,(void *)0x0,0);
    iVar3 = (int)sVar6;
  }
  if (-1 < iVar3) {
    return 1;
  }
  piVar7 = __errno_location();
  iVar3 = *piVar7;
  return (ulong)((uint)CONCAT71((int7)((ulong)piVar7 >> 8),iVar3 == 0x22) |
                CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == 7));
}



void aclinfo_free(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)((long)param_1 + 0x1c)) {
    free((void *)*param_1);
    return;
  }
  return;
}



ulong file_has_aclinfo(undefined8 param_1,long *param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  void *pvVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  size_t __size;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  code *pcVar18;
  long in_FS_OFFSET;
  int local_dc;
  uint local_d8;
  uint local_d4 [37];
  long local_40;
  
  pvVar1 = (void *)((long)param_2 + 0x1c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar6 = __errno_location();
  *param_2 = (long)pvVar1;
  local_dc = *piVar6;
  if ((param_3 & 0x10000) == 0) {
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 3) = 0x5f;
    param_2[2] = (long)&UNKNOWN_SECURITY_CONTEXT;
LAB_001001fc:
    uVar7 = 0;
    iVar5 = local_dc;
LAB_00100208:
    *piVar6 = iVar5;
    uVar7 = uVar7 & 0xffffffff;
    goto LAB_0010020d;
  }
  if ((param_3 & 0x20000) == 0) {
    pcVar18 = llistxattr;
  }
  else {
    pcVar18 = listxattr;
  }
  __size = 0x98;
  pvVar8 = pvVar1;
  while( true ) {
    uVar7 = (*pcVar18)(param_1,pvVar8,__size);
    param_2[1] = uVar7;
    if (0 < (long)uVar7) break;
    if (uVar7 == 0) {
LAB_0010027b:
      param_2[3] = 0x5f;
      param_2[2] = (long)&UNKNOWN_SECURITY_CONTEXT;
      goto LAB_001001fc;
    }
    iVar5 = *piVar6;
    *(int *)((long)param_2 + 0x1c) = iVar5;
    if ((__size == 0x7fffffffffffffff) || (iVar5 != 0x22)) {
      *(undefined4 *)(param_2 + 3) = 0x5f;
      param_2[2] = (long)&UNKNOWN_SECURITY_CONTEXT;
LAB_0010035a:
      iVar5 = *(int *)((long)param_2 + 0x1c);
      cVar3 = acl_errno_valid(iVar5);
      if ((iVar5 == 0xd || iVar5 == 7) || (cVar3 != '\x01')) goto LAB_00100386;
      goto LAB_00100208;
    }
    uVar7 = (*pcVar18)(param_1,0,0);
    if ((long)uVar7 < 1) {
      param_2[1] = uVar7;
      if (uVar7 == 0) goto LAB_0010027b;
      iVar5 = *piVar6;
      *(undefined4 *)(param_2 + 3) = 0x5f;
      *(int *)((long)param_2 + 0x1c) = iVar5;
      param_2[2] = (long)&UNKNOWN_SECURITY_CONTEXT;
      goto LAB_0010035a;
    }
    if (pvVar1 != (void *)*param_2) {
      free((void *)*param_2);
      *param_2 = (long)pvVar1;
    }
    uVar13 = __size + ((long)__size >> 1);
    if (((long)uVar13 < 0) || (uVar13 < (ulong)((long)__size >> 1))) {
      __size = 0x7fffffffffffffff;
    }
    else {
      __size = uVar13;
      if ((long)uVar13 < (long)uVar7) {
        __size = uVar7;
      }
    }
    pvVar8 = malloc(__size);
    if (pvVar8 == (void *)0x0) {
      iVar5 = *piVar6;
      uVar7 = param_2[1];
      *(undefined4 *)(param_2 + 3) = 0x5f;
      *(int *)((long)param_2 + 0x1c) = iVar5;
      param_2[2] = (long)&UNKNOWN_SECURITY_CONTEXT;
      if ((long)uVar7 < 0) goto LAB_0010035a;
      if (uVar7 == 0) goto LAB_001001fc;
      goto LAB_00100386;
    }
    *param_2 = (long)pvVar8;
  }
  *(undefined4 *)(param_2 + 3) = 0x5f;
  param_2[2] = (long)&UNKNOWN_SECURITY_CONTEXT;
LAB_00100386:
  cVar3 = has_xattr("system.nfs4_acl",param_2,param_1,param_3);
  if (cVar3 == '\0') {
    cVar3 = has_xattr("system.posix_acl_access",param_2,param_1,param_3);
    if (cVar3 != '\0') {
LAB_001005b0:
      uVar7 = 1;
      goto LAB_0010020d;
    }
    if ((param_3 & 0xfb) == 0) {
      bVar4 = has_xattr("system.posix_acl_default",param_2,param_1,param_3);
      uVar7 = (ulong)bVar4;
      goto LAB_0010020d;
    }
  }
  else {
    if ((param_3 & 0x20000) == 0) {
      pcVar18 = lgetxattr;
    }
    else {
      pcVar18 = getxattr;
    }
    iVar5 = (*pcVar18)(param_1,"system.nfs4_acl",&local_d8,0x98);
    if (-1 < iVar5) {
      if (iVar5 < 4) {
LAB_001004f0:
        local_dc = 0x16;
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = 1;
        uVar17 = local_d8 >> 0x18 | (local_d8 & 0xff0000) >> 8 | (local_d8 & 0xff00) << 8 |
                 local_d8 << 0x18;
        if (uVar17 < 7) {
          if (local_d8 != 0) {
            lVar12 = (long)iVar5 + -0x14;
            if (-1 < lVar12) {
              uVar16 = 0;
              uVar15 = 0;
              puVar9 = local_d4;
              do {
                uVar14 = puVar9[3];
                uVar11 = *puVar9;
                puVar10 = puVar9 + 4;
                uVar2 = puVar9[1];
                uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                         uVar11 << 0x18;
                uVar13 = (ulong)((uint)((uVar14 & 0x3000000) != 0) +
                                ((uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8
                                 | uVar14 << 0x18) >> 2));
                if ((1 < uVar11) ||
                   ((((uVar2 >> 0x18 & 0xffffffbf) != 0 || (uVar2 & 0xff0000) != 0) ||
                    (uVar2 & 0xff00) != 0) || (uVar2 & 0xff) != 0)) {
LAB_0010048d:
                  uVar7 = 1;
                  goto LAB_00100492;
                }
                lVar12 = lVar12 + uVar13 * -4;
                if (lVar12 < 0) break;
                if (uVar14 == 0x6000000) {
                  if ((*puVar10 != 0x454e574f) || ((short)puVar9[5] != 0x4052)) {
                    if ((*puVar10 != 0x554f5247) || ((short)puVar9[5] != 0x4050)) goto LAB_0010048d;
                    uVar11 = uVar11 | 2;
                  }
                }
                else {
                  if (((uVar14 != 0x9000000) || (*(long *)puVar10 != 0x454e4f5952455645)) ||
                     ((char)puVar9[6] != '@')) goto LAB_0010048d;
                  uVar11 = uVar11 | 4;
                }
                uVar14 = 1 << ((byte)uVar11 & 0x1f);
                uVar11 = uVar14 & uVar15;
                uVar7 = (ulong)uVar11;
                if (uVar11 != 0) goto LAB_0010048d;
                uVar16 = uVar16 + 1;
                uVar15 = uVar15 | uVar14;
                puVar9 = puVar10 + uVar13;
                if (uVar17 <= uVar16) goto LAB_00100492;
                lVar12 = lVar12 + -0x10;
              } while (-1 < lVar12);
            }
            goto LAB_001004f0;
          }
          uVar7 = 0;
        }
      }
LAB_00100492:
      *piVar6 = local_dc;
      goto LAB_0010020d;
    }
    if (*piVar6 == 0x22) goto LAB_001005b0;
    if (*piVar6 != 0x3d) {
      bVar4 = acl_errno_valid();
      uVar7 = (ulong)-(uint)bVar4;
      goto LAB_0010020d;
    }
  }
  uVar7 = 0;
LAB_0010020d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined4 file_has_acl(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long in_FS_OFFSET;
  undefined1 *local_c8 [3];
  undefined1 local_ac [156];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_2 + 0x18) >> 0xc & 0xf;
  if ((*(uint *)(param_2 + 0x18) & 0xf000) != 0x4000) {
    uVar2 = (uint)CONCAT11(1,(char)uVar2);
  }
  uVar1 = file_has_aclinfo(param_1,local_c8,uVar2);
  if (local_c8[0] != local_ac) {
    free(local_c8[0]);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


