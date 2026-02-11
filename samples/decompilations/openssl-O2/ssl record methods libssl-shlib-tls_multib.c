
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
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
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
    plVar6 = (long *)(param_2 + 8);
    uVar10 = 1;
    cVar2 = *param_2;
    do {
      plVar1 = plVar6 + 2;
      if ((((char)*plVar1 != cVar2) || (plVar6[1] != plVar6[4])) ||
         (plVar6[3] != plVar6[1] + *plVar6)) goto LAB_00100170;
      uVar10 = uVar10 + 1;
      plVar6 = plVar6 + 3;
      cVar2 = (char)*plVar1;
    } while (uVar10 < param_3);
    if ((((*param_2 == '\x17') &&
         (uVar10 = param_3 * *(long *)(param_2 + 0x10),
         (ulong)(*(long *)(param_2 + 0x10) << 2) <= uVar10)) &&
        ((*(long *)(param_1 + 0x1040) == 0 &&
         ((*(long *)(param_1 + 0x1128) == 0 && (*(int *)(param_1 + 0x10b0) == 0)))))) &&
       ((uVar5 = *(uint *)(param_1 + 0x14), (uVar5 & 0xfffffffd) == 0xfefd || uVar5 == 0x100 ||
        (uVar5 - 0x302 < 2)))) {
      uVar7 = EVP_CIPHER_CTX_get0_cipher(*(undefined8 *)(param_1 + 0x1020));
      uVar8 = EVP_CIPHER_get_flags(uVar7);
      if ((uVar8 & 0x400000) != 0) {
        iVar3 = EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)(param_1 + 0x1020),0x1c,
                                    *(int *)(param_2 + 0x10),(void *)0x0);
        iVar3 = tls_setup_write_buffer(param_1,1,(long)iVar3 * param_3,(long)iVar3 * param_3);
        bVar11 = false;
        if (iVar3 != 0) {
          local_4e = *(undefined8 *)(param_1 + 0x1000);
          local_60 = (uint)param_3;
          local_44 = (undefined1)*(undefined4 *)(param_2 + 4);
          local_46 = CONCAT11((char)((uint)*(undefined4 *)(param_2 + 4) >> 8),*param_2);
          local_78 = 0;
          local_43 = 0;
          puStack_70 = &local_4e;
          local_68 = uVar10;
          iVar3 = EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)(param_1 + 0x1020),0x19,0x20,&local_78);
          if ((iVar3 < 1) || (*(ulong *)(param_1 + 0x70) < (ulong)(long)iVar3)) {
            ERR_new();
            uVar7 = 0x89;
          }
          else {
            local_78 = *(undefined8 *)(param_1 + 0x60);
            puStack_70 = *(undefined8 **)(param_2 + 8);
            local_68 = uVar10;
            iVar4 = EVP_CIPHER_CTX_ctrl(*(EVP_CIPHER_CTX **)(param_1 + 0x1020),0x1a,0x20,&local_78);
            if (0 < iVar4) {
              uVar5 = *(byte *)(param_1 + 0x1007) + local_60;
              *(char *)(param_1 + 0x1007) = (char)uVar5;
              if ((uVar5 & 0xff) < local_60) {
                pcVar9 = (char *)(param_1 + 0x1006);
                do {
                  if ((char *)(param_1 + 0xfff) == pcVar9) break;
                  cVar2 = *pcVar9;
                  *pcVar9 = cVar2 + '\x01';
                  pcVar9 = pcVar9 + -1;
                } while ((char)(cVar2 + '\x01') == '\0');
              }
              *(undefined8 *)(param_1 + 0x78) = 0;
              bVar11 = true;
              *(long *)(param_1 + 0x80) = (long)iVar3;
              goto LAB_00100187;
            }
            ERR_new();
            uVar7 = 0x94;
          }
          ERR_set_debug("ssl/record/methods/tls_multib.c",uVar7,"tls_write_records_multiblock_int");
          ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
        }
        goto LAB_00100187;
      }
    }
  }
LAB_00100170:
  iVar3 = tls_write_records_default(param_1,param_2,param_3);
  bVar11 = iVar3 != 0;
LAB_00100187:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar11;
}


