
long tls_get_max_records_multiblock
               (long param_1,char param_2,ulong param_3,undefined8 param_4,ulong *param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((((param_2 == '\x17') && (*param_5 << 2 <= param_3)) && (*(long *)(param_1 + 0x1040) == 0)) &&
     ((*(long *)(param_1 + 0x1128) == 0 && (*(int *)(param_1 + 0x10b0) == 0)))) {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (((uVar1 & 0xfffffffd) == 0xfefd || uVar1 == 0x100) || (uVar1 - 0x302 < 2)) {
      uVar3 = EVP_CIPHER_CTX_get0_cipher(*(undefined8 *)(param_1 + 0x1020));
      uVar4 = EVP_CIPHER_get_flags(uVar3);
      if ((uVar4 & 0x400000) != 0) {
        uVar4 = *param_5;
        if ((uVar4 & 0xfff) == 0) {
          uVar4 = uVar4 - 0x200;
          *param_5 = uVar4;
        }
        return (-(ulong)(param_3 < uVar4 << 3) & 0xfffffffffffffffc) + 8;
      }
    }
  }
  lVar2 = tls_get_max_records_default(param_1,param_2,param_3,param_4);
  return lVar2;
}



bool tls_write_records_multiblock(long param_1,char *param_2,ulong param_3)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined8 local_78;
  undefined8 *puStack_70;
  ulong local_68;
  uint local_60;
  undefined8 local_4e;
  undefined2 local_46;
  undefined1 local_44;
  undefined2 local_43;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 - 4 & 0xfffffffffffffffb) == 0) {
    plVar7 = (long *)(param_2 + 8);
    uVar10 = 1;
    cVar3 = *param_2;
    do {
      plVar1 = plVar7 + 2;
      if ((((char)*plVar1 != cVar3) || (plVar7[1] != plVar7[4])) ||
         (plVar7[3] != plVar7[1] + *plVar7)) goto LAB_00100170;
      uVar10 = uVar10 + 1;
      plVar7 = plVar7 + 3;
      cVar3 = (char)*plVar1;
    } while (uVar10 < param_3);
    if ((((*param_2 == '\x17') &&
         (uVar10 = param_3 * *(long *)(param_2 + 0x10),
         (ulong)(*(long *)(param_2 + 0x10) << 2) <= uVar10)) &&
        ((*(long *)(param_1 + 0x1040) == 0 &&
         ((*(long *)(param_1 + 0x1128) == 0 && (*(int *)(param_1 + 0x10b0) == 0)))))) &&
       ((uVar6 = *(uint *)(param_1 + 0x14), (uVar6 & 0xfffffffd) == 0xfefd || uVar6 == 0x100 ||
        (uVar6 - 0x302 < 2)))) {
      uVar8 = EVP_CIPHER_CTX_get0_cipher(*(undefined8 *)(param_1 + 0x1020));
      uVar9 = EVP_CIPHER_get_flags(uVar8);
      if ((uVar9 & 0x400000) != 0) {
        iVar4 = EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)(param_1 + 0x1020),0x1c,
                                    *(int *)(param_2 + 0x10),(void *)0x0);
        iVar4 = tls_setup_write_buffer(param_1,1,(long)iVar4 * param_3,(long)iVar4 * param_3);
        bVar11 = false;
        if (iVar4 != 0) {
          local_4e = *(undefined8 *)(param_1 + 0x1000);
          local_60 = (uint)param_3;
          local_44 = (undefined1)*(undefined4 *)(param_2 + 4);
          local_46 = CONCAT11((char)((uint)*(undefined4 *)(param_2 + 4) >> 8),*param_2);
          local_78 = 0;
          local_43 = 0;
          puStack_70 = &local_4e;
          local_68 = uVar10;
          iVar4 = EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)(param_1 + 0x1020),0x19,0x20,&local_78);
          if ((iVar4 < 1) || (*(ulong *)(param_1 + 0x70) < (ulong)(long)iVar4)) {
            ERR_new();
            uVar8 = 0x89;
          }
          else {
            local_78 = *(undefined8 *)(param_1 + 0x60);
            puStack_70 = *(undefined8 **)(param_2 + 8);
            local_68 = uVar10;
            iVar5 = EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)(param_1 + 0x1020),0x1a,0x20,&local_78);
            if (0 < iVar5) {
              uVar6 = *(byte *)(param_1 + 0x1007) + local_60;
              *(char *)(param_1 + 0x1007) = (char)uVar6;
              if ((uVar6 & 0xff) < local_60) {
                pcVar2 = (char *)(param_1 + 0x1006);
                *pcVar2 = *pcVar2 + '\x01';
                if (*pcVar2 == '\0') {
                  pcVar2 = (char *)(param_1 + 0x1005);
                  *pcVar2 = *pcVar2 + '\x01';
                  if (*pcVar2 == '\0') {
                    pcVar2 = (char *)(param_1 + 0x1004);
                    *pcVar2 = *pcVar2 + '\x01';
                    if (*pcVar2 == '\0') {
                      pcVar2 = (char *)(param_1 + 0x1003);
                      *pcVar2 = *pcVar2 + '\x01';
                      if (*pcVar2 == '\0') {
                        pcVar2 = (char *)(param_1 + 0x1002);
                        *pcVar2 = *pcVar2 + '\x01';
                        if (*pcVar2 == '\0') {
                          pcVar2 = (char *)(param_1 + 0x1001);
                          *pcVar2 = *pcVar2 + '\x01';
                          if (*pcVar2 == '\0') {
                            *(char *)(param_1 + 0x1000) = *(char *)(param_1 + 0x1000) + '\x01';
                          }
                        }
                      }
                    }
                  }
                }
              }
              *(undefined8 *)(param_1 + 0x78) = 0;
              bVar11 = true;
              *(long *)(param_1 + 0x80) = (long)iVar4;
              goto LAB_00100187;
            }
            ERR_new();
            uVar8 = 0x94;
          }
          ERR_set_debug("ssl/record/methods/tls_multib.c",uVar8,"tls_write_records_multiblock_int");
          ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
        }
        goto LAB_00100187;
      }
    }
  }
LAB_00100170:
  iVar4 = tls_write_records_default(param_1,param_2,param_3);
  bVar11 = iVar4 != 0;
LAB_00100187:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar11;
}


