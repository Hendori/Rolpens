
int mbedtls_x509_write_set_san_common(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  void *__ptr;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  ulong local_60;
  size_t local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = 0;
  pbVar7 = param_2;
  if (param_2 == (byte *)0x0) {
    __ptr = calloc(1,5);
    if (__ptr == (void *)0x0) {
LAB_001002d0:
      iVar4 = -0x6a;
      goto LAB_001001f1;
    }
    local_48 = (void *)((long)__ptr + 5);
    local_50 = 5;
    local_60 = 0;
  }
  else {
    do {
      iVar4 = *(int *)pbVar7;
      if (iVar4 == 4) {
        pbVar1 = pbVar7 + 8;
        uVar5 = uVar6;
        do {
          if (((0xfffffffffffffff5 < uVar5) ||
              (uVar6 = uVar5 + 10 + *(ulong *)(pbVar1 + 8),
              CARRY8(uVar5 + 10,*(ulong *)(pbVar1 + 8)))) ||
             (uVar5 = uVar6 + *(ulong *)(pbVar1 + 0x20), CARRY8(uVar6,*(ulong *)(pbVar1 + 0x20))))
          goto LAB_00100253;
          pbVar1 = *(byte **)(pbVar1 + 0x30);
        } while (pbVar1 != (byte *)0x0);
      }
      else {
        if (iVar4 < 5) {
          uVar9 = iVar4 - 1;
        }
        else {
          uVar9 = iVar4 - 6;
        }
        if (1 < uVar9) {
          iVar4 = -0x2080;
          goto LAB_001001f1;
        }
        uVar5 = uVar6 + *(ulong *)(pbVar7 + 0x10);
        if (CARRY8(uVar6,*(ulong *)(pbVar7 + 0x10))) goto LAB_00100253;
      }
      if (0xfffffffffffffffa < uVar5) goto LAB_00100253;
      pbVar1 = pbVar7 + 0x50;
      uVar6 = uVar5 + 5;
      pbVar7 = *(byte **)pbVar1;
    } while (*(byte **)pbVar1 != (byte *)0x0);
    if (0xfffffffffffffffa < uVar6) {
LAB_00100253:
      iVar4 = -0x2800;
      goto LAB_001001f1;
    }
    local_50 = uVar5 + 10;
    __ptr = calloc(1,local_50);
    if (__ptr == (void *)0x0) goto LAB_001002d0;
    local_60 = 0;
    local_48 = (void *)((long)__ptr + local_50);
    do {
      iVar4 = *(int *)param_2;
      if (iVar4 == 4) {
        iVar4 = mbedtls_x509_write_names(&local_48,__ptr,param_2 + 8);
        if (iVar4 < 0) goto LAB_001001cf;
        lVar10 = (long)iVar4;
        iVar4 = mbedtls_asn1_write_len(&local_48,__ptr,lVar10);
        if (iVar4 < 0) goto LAB_001001cf;
        bVar8 = 0xa4;
        lVar10 = lVar10 + iVar4;
      }
      else {
        if (iVar4 < 5) {
          uVar9 = iVar4 - 1;
        }
        else {
          uVar9 = iVar4 - 6;
        }
        if (1 < uVar9) {
          iVar4 = -0x2080;
          goto LAB_001001cf;
        }
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        iVar3 = mbedtls_asn1_write_raw_buffer(&local_48,__ptr,*(undefined8 *)(param_2 + 0x18),uVar2)
        ;
        iVar4 = iVar3;
        if (iVar3 < 0) goto LAB_001001cf;
        iVar4 = mbedtls_asn1_write_len(&local_48,__ptr,uVar2);
        if (iVar4 < 0) goto LAB_001001cf;
        bVar8 = *param_2 | 0x80;
        lVar10 = (long)iVar3 + (long)iVar4;
      }
      iVar4 = mbedtls_asn1_write_tag(&local_48,__ptr,bVar8);
      if (iVar4 < 0) goto LAB_001001cf;
      param_2 = *(byte **)(param_2 + 0x50);
      bVar11 = CARRY8(iVar4 + lVar10,local_60);
      local_60 = iVar4 + lVar10 + local_60;
      if (bVar11) {
        iVar4 = -0x2800;
        goto LAB_001001cf;
      }
    } while (param_2 != (byte *)0x0);
  }
  iVar3 = mbedtls_asn1_write_len(&local_48,__ptr,local_60);
  iVar4 = iVar3;
  if (((-1 < iVar3) && (iVar4 = mbedtls_asn1_write_tag(&local_48,__ptr,0x30), -1 < iVar4)) &&
     (iVar4 = mbedtls_x509_set_extension
                        (param_1,&_LC0,3,0,
                         (long)__ptr + (local_50 - ((long)iVar4 + (long)iVar3 + local_60))),
     local_48 < __ptr)) {
    iVar4 = -0x66;
  }
LAB_001001cf:
  free(__ptr);
LAB_001001f1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


