
/* WARNING: Unknown calling convention */

_Bool aclinfo_has_xattr(aclinfo *ai,char *xattr)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  size_t sVar4;
  char *pcVar5;
  char *__s;
  
  if (ai->size < 1) {
    return false;
  }
  __s = ai->buf;
  pcVar1 = __s + ai->size;
  if (__s < pcVar1) {
    cVar2 = *xattr;
    do {
      pcVar5 = xattr;
      cVar3 = cVar2;
      if (cVar2 == *__s) {
        do {
          if (cVar3 == '\0') {
            return true;
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
  return false;
}



/* WARNING: Unknown calling convention */

_Bool has_xattr(char *xattr,aclinfo *ai,char *name,int flags)

{
  _Bool _Var1;
  char cVar2;
  int iVar3;
  ssize_t sVar4;
  int *piVar5;
  
  if (ai != (aclinfo *)0x0) {
    _Var1 = aclinfo_has_xattr(ai,xattr);
    if (_Var1) {
      return true;
    }
    if (-1 < ai->size) {
      return _Var1;
    }
    iVar3 = (ai->u).err;
    cVar2 = acl_errno_valid(iVar3);
    if ((iVar3 != 7 && iVar3 != 0xd) && cVar2 == '\x01') {
      return false;
    }
  }
  if ((flags & 0x20000U) == 0) {
    sVar4 = lgetxattr(name,xattr,(void *)0x0,0);
    iVar3 = (int)sVar4;
  }
  else {
    sVar4 = getxattr(name,xattr,(void *)0x0,0);
    iVar3 = (int)sVar4;
  }
  if (-1 < iVar3) {
    return true;
  }
  piVar5 = __errno_location();
  return *piVar5 == 0x22 || *piVar5 == 7;
}



/* WARNING: Unknown calling convention */

void aclinfo_free(aclinfo *ai)

{
  if ((anon_union_152_2_13ba2bd2_for_u *)ai->buf != &ai->u) {
    free(ai->buf);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention */

int file_has_aclinfo(char *name,aclinfo *ai,int flags)

{
  anon_union_152_2_13ba2bd2_for_u *paVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  _Bool _Var5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  size_t sVar9;
  anon_union_152_2_13ba2bd2_for_u *paVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  size_t __size;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  code *pcVar20;
  long in_FS_OFFSET;
  int local_dc;
  uint32_t buf [38];
  
  paVar1 = &ai->u;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  piVar8 = __errno_location();
  ai->buf = (char *)paVar1;
  local_dc = *piVar8;
  if ((flags & 0x10000U) == 0) {
    ai->size = 0;
    ai->scontext_err = 0x5f;
    ai->scontext = "?";
LAB_001001fc:
    uVar16 = 0;
    iVar7 = local_dc;
LAB_00100208:
    *piVar8 = iVar7;
    goto LAB_0010020d;
  }
  if ((flags & 0x20000U) == 0) {
    pcVar20 = llistxattr;
  }
  else {
    pcVar20 = listxattr;
  }
  __size = 0x98;
  paVar10 = paVar1;
  while( true ) {
    sVar9 = (*pcVar20)(name,paVar10,__size);
    ai->size = sVar9;
    if (0 < (long)sVar9) break;
    if (sVar9 == 0) {
LAB_0010027b:
      *(undefined8 *)&ai->scontext_err = 0x5f;
      ai->scontext = "?";
      goto LAB_001001fc;
    }
    iVar7 = *piVar8;
    (ai->u).err = iVar7;
    if ((__size == 0x7fffffffffffffff) || (iVar7 != 0x22)) {
      ai->scontext_err = 0x5f;
      ai->scontext = "?";
LAB_0010035a:
      iVar7 = (ai->u).err;
      cVar4 = acl_errno_valid(iVar7);
      if ((iVar7 == 0xd || iVar7 == 7) || (uVar16 = (uint)sVar9, cVar4 != '\x01'))
      goto LAB_00100386;
      goto LAB_00100208;
    }
    sVar9 = (*pcVar20)(name,0,0);
    if ((long)sVar9 < 1) {
      ai->size = sVar9;
      if (sVar9 == 0) goto LAB_0010027b;
      iVar7 = *piVar8;
      ai->scontext_err = 0x5f;
      (ai->u).err = iVar7;
      ai->scontext = "?";
      goto LAB_0010035a;
    }
    if (paVar1 != (anon_union_152_2_13ba2bd2_for_u *)ai->buf) {
      free(ai->buf);
      ai->buf = (char *)paVar1;
    }
    uVar15 = __size + ((long)__size >> 1);
    if (((long)uVar15 < 0) || (uVar15 < (ulong)((long)__size >> 1))) {
      __size = 0x7fffffffffffffff;
    }
    else {
      __size = uVar15;
      if ((long)uVar15 < (long)sVar9) {
        __size = sVar9;
      }
    }
    paVar10 = (anon_union_152_2_13ba2bd2_for_u *)malloc(__size);
    if (paVar10 == (anon_union_152_2_13ba2bd2_for_u *)0x0) {
      iVar7 = *piVar8;
      sVar9 = ai->size;
      ai->scontext_err = 0x5f;
      (ai->u).err = iVar7;
      ai->scontext = "?";
      if ((long)sVar9 < 0) goto LAB_0010035a;
      if (sVar9 == 0) goto LAB_001001fc;
      goto LAB_00100386;
    }
    ai->buf = (char *)paVar10;
  }
  ai->scontext_err = 0x5f;
  ai->scontext = "?";
LAB_00100386:
  _Var5 = has_xattr("system.nfs4_acl",ai,name,flags);
  if (_Var5) {
    if ((flags & 0x20000U) == 0) {
      pcVar20 = lgetxattr;
    }
    else {
      pcVar20 = getxattr;
    }
    iVar7 = (*pcVar20)(name,"system.nfs4_acl",buf,0x98);
    if (-1 < iVar7) {
      if (iVar7 < 4) {
LAB_001004f0:
        local_dc = 0x16;
        uVar16 = 0xffffffff;
      }
      else {
        uVar16 = 1;
        uVar19 = buf[0] >> 0x18 | (buf[0] & 0xff0000) >> 8 | (buf[0] & 0xff00) << 8 | buf[0] << 0x18
        ;
        if (uVar19 < 7) {
          if (buf[0] != 0) {
            lVar14 = (long)iVar7 + -0x14;
            if (-1 < lVar14) {
              uVar18 = 0;
              uVar17 = 0;
              puVar11 = buf + 1;
              do {
                uVar16 = puVar11[3];
                uVar13 = *puVar11;
                puVar12 = puVar11 + 4;
                uVar2 = puVar11[1];
                uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                         uVar13 << 0x18;
                uVar15 = (ulong)((uint)((uVar16 & 0x3000000) != 0) +
                                ((uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8
                                 | uVar16 << 0x18) >> 2));
                if ((1 < uVar13) ||
                   ((((uVar2 >> 0x18 & 0xffffffbf) != 0 || (uVar2 & 0xff0000) != 0) ||
                    (uVar2 & 0xff00) != 0) || (uVar2 & 0xff) != 0)) {
LAB_0010048d:
                  uVar16 = 1;
                  goto LAB_00100492;
                }
                lVar14 = lVar14 + uVar15 * -4;
                if (lVar14 < 0) break;
                if (uVar16 == 0x6000000) {
                  if ((*puVar12 != 0x454e574f) || ((short)puVar11[5] != 0x4052)) {
                    if ((*puVar12 != 0x554f5247) || ((short)puVar11[5] != 0x4050))
                    goto LAB_0010048d;
                    uVar13 = uVar13 | 2;
                  }
                }
                else {
                  if (((uVar16 != 0x9000000) || (*(long *)puVar12 != 0x454e4f5952455645)) ||
                     ((char)puVar11[6] != '@')) goto LAB_0010048d;
                  uVar13 = uVar13 | 4;
                }
                uVar16 = 1 << ((byte)uVar13 & 0x1f);
                if ((uVar16 & uVar17) != 0) goto LAB_0010048d;
                uVar18 = uVar18 + 1;
                uVar17 = uVar17 | uVar16;
                puVar11 = puVar12 + uVar15;
                uVar16 = 0;
                if (uVar19 <= uVar18) goto LAB_00100492;
                lVar14 = lVar14 + -0x10;
              } while (-1 < lVar14);
            }
            goto LAB_001004f0;
          }
          uVar16 = 0;
        }
      }
LAB_00100492:
      *piVar8 = local_dc;
      goto LAB_0010020d;
    }
    if (*piVar8 == 0x22) goto LAB_001005b0;
    if (*piVar8 != 0x3d) {
      bVar6 = acl_errno_valid();
      uVar16 = -(uint)bVar6;
      goto LAB_0010020d;
    }
  }
  else {
    _Var5 = has_xattr("system.posix_acl_access",ai,name,flags);
    if (_Var5) {
LAB_001005b0:
      uVar16 = 1;
      goto LAB_0010020d;
    }
    if ((flags & 0xfbU) == 0) {
      _Var5 = has_xattr("system.posix_acl_default",ai,name,flags);
      uVar16 = (uint)_Var5;
      goto LAB_0010020d;
    }
  }
  uVar16 = 0;
LAB_0010020d:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}



/* WARNING: Unknown calling convention */

int file_has_acl(char *name,stat *sb)

{
  long lVar1;
  int iVar2;
  uint flags;
  long in_FS_OFFSET;
  aclinfo ai;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  flags = sb->st_mode >> 0xc & 0xf;
  if ((sb->st_mode & 0xf000) != 0x4000) {
    flags = (uint)CONCAT11(1,(char)flags);
  }
  iVar2 = file_has_aclinfo(name,&ai,flags);
  if ((anon_union_152_2_13ba2bd2_for_u *)ai.buf != &ai.u) {
    free(ai.buf);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


