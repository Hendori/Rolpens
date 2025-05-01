
void mbedtls_debug_print_mpi_part_0
               (long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,long *param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined2 local_248;
  undefined1 local_246;
  undefined1 local_245 [517];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = mbedtls_mpi_bitlen(param_6);
  __snprintf_chk(&local_248,0x200,2,0x200,"value of \'%s\' (%u bits) is:\n",param_5);
  (**(code **)(*param_1 + 0x28))
            (*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4,&local_248);
  if (lVar2 == 0) {
    local_246 = 0x30;
    lVar2 = 0x1fd;
    uVar4 = 3;
    local_248 = 0x3020;
  }
  else {
    uVar4 = 0;
    uVar3 = lVar2 - 1U >> 3;
    iVar1 = (int)uVar3;
    uVar3 = uVar3 & 0xffffffff;
    uVar6 = (ulong)iVar1;
    if (iVar1 < 0) goto LAB_001000e1;
    do {
      while( true ) {
        uVar7 = (uint)uVar3;
        lVar2 = (long)&local_248 + uVar4;
        lVar5 = 0x200 - uVar4;
        uVar4 = uVar4 + 3;
        __snprintf_chk(lVar2,lVar5,2,lVar5," %02x",
                       *(ulong *)(*param_6 + (uVar6 & 0xfffffffffffffff8)) >>
                       (sbyte)((uVar7 & 7) << 3) & 0xff);
        if (0x2f < uVar4) break;
        uVar3 = (ulong)(uVar7 - 1);
        uVar6 = uVar6 - 1;
        if (uVar7 - 1 == 0xffffffff) goto LAB_001001da;
      }
      lVar2 = (long)&local_248 + uVar4;
      uVar3 = (ulong)(uVar7 - 1);
      lVar5 = 0x200 - uVar4;
      uVar4 = 0;
      uVar6 = uVar6 - 1;
      __snprintf_chk(lVar2,lVar5,2,lVar5,&_LC3);
      (**(code **)(*param_1 + 0x28))
                (*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4,&local_248);
    } while (uVar7 - 1 != 0xffffffff);
LAB_001001da:
    if (uVar4 == 0) goto LAB_001000e1;
    lVar2 = 0x200 - uVar4;
  }
  __snprintf_chk((long)&local_248 + uVar4,lVar2,2,lVar2,&_LC3);
  (**(code **)(*param_1 + 0x28))
            (*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4,&local_248);
LAB_001000e1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void mbedtls_debug_print_ecp_part_0
               (long *param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
               long param_6)

{
  long in_FS_OFFSET;
  undefined1 local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __snprintf_chk(local_248,0x200,2,0x200,"%s(X)",param_5);
  if (param_1 == (long *)0x0) {
    __snprintf_chk(local_248,0x200,2,0x200,"%s(Y)",param_5);
  }
  else {
    if ((((*param_1 != 0) && (*(long *)(*param_1 + 0x28) != 0)) && (param_6 != 0)) &&
       (param_2 <= debug_threshold)) {
      mbedtls_debug_print_mpi_part_0(param_1,param_2,param_3,param_4,local_248,param_6);
    }
    __snprintf_chk(local_248,0x200,2,0x200,"%s(Y)",param_5);
    if (((*param_1 != 0) && (*(long *)(*param_1 + 0x28) != 0)) && (param_2 <= debug_threshold)) {
      mbedtls_debug_print_mpi_part_0(param_1,param_2,param_3,param_4,local_248,param_6 + 0x10);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_debug_set_threshold(undefined4 param_1)

{
  debug_threshold = param_1;
  return;
}



void mbedtls_debug_print_msg
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,int param_10,undefined8 param_11,undefined4 param_12,
               undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined1 *local_2f8;
  undefined1 *local_2f0;
  undefined2 local_2e8 [260];
  long local_e0;
  undefined1 local_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  if (in_AL != '\0') {
    local_a8 = param_1;
    local_98 = param_2;
    local_88 = param_3;
    local_78 = param_4;
    local_68 = param_5;
    local_58 = param_6;
    local_48 = param_7;
    local_38 = param_8;
  }
  local_e0 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = param_14;
  if ((((param_9 != (long *)0x0) && (*param_9 != 0)) && (*(long *)(*param_9 + 0x28) != 0)) &&
     (param_10 <= debug_threshold)) {
    local_2f8 = &stack0x00000008;
    local_300 = 0x28;
    local_2f0 = local_d8;
    local_2fc = 0x30;
    iVar1 = __vsnprintf_chk(local_2e8,0x200,2,0x200,param_13,&local_300);
    if (0x1fe < iVar1) {
      iVar1 = 0x1fe;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    *(undefined2 *)((long)local_2e8 + (long)iVar1) = 10;
    (**(code **)(*param_9 + 0x28))
              (*(undefined8 *)(*param_9 + 0x30),param_10,param_11,param_12,local_2e8);
  }
  if (local_e0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_debug_print_ret
               (long *param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
               undefined8 param_6)

{
  long in_FS_OFFSET;
  undefined1 auStack_238 [520];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) && (*(long *)(*param_1 + 0x28) != 0)) &&
     ((param_2 <= debug_threshold && ((int)param_6 != -0x6900)))) {
    __snprintf_chk(auStack_238,0x200,2,0x200,"%s() returned %d (-0x%04x)\n",param_5,param_6,
                   -(int)param_6);
    (**(code **)(*param_1 + 0x28))
              (*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4,auStack_238);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_debug_print_buf
               (long *param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
               long param_6,ulong param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 local_268 [16];
  undefined1 local_258;
  undefined1 local_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x28) == 0)) ||
     (debug_threshold < param_2)) goto LAB_001005d5;
  __snprintf_chk(local_248,0x200,2,0x200,"dumping \'%s\' (%u bytes)\n",param_5,(undefined4)param_7);
  uVar5 = 0;
  uVar9 = 0;
  (**(code **)(*param_1 + 0x28))(*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4,local_248)
  ;
  local_258 = 0;
  local_268 = (undefined1  [16])0x0;
  if (param_7 == 0) goto LAB_001005d5;
  do {
    uVar8 = (uint)uVar9;
    if ((uVar9 & 0xf) == 0) {
      puVar7 = local_248 + uVar5;
      lVar6 = 0x200 - uVar5;
      uVar4 = 0x200;
      if (0x1ff < uVar5) {
        uVar4 = uVar5;
      }
      lVar3 = uVar4 - uVar5;
      if (uVar9 != 0) {
        __snprintf_chk(puVar7,lVar6,2,lVar3,"  %s\n",local_268);
        (**(code **)(*param_1 + 0x28))
                  (*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4,local_248);
        local_258 = 0;
        lVar3 = 0x200;
        local_268 = (undefined1  [16])0x0;
        uVar5 = 0;
        lVar6 = 0x200;
        puVar7 = local_248;
      }
      iVar2 = __snprintf_chk(puVar7,lVar6,2,lVar3,"%04x: ",uVar9 & 0xffffffff);
      uVar5 = uVar5 + (long)iVar2;
    }
    uVar4 = 0x200;
    if (0x1ff < uVar5) {
      uVar4 = uVar5;
    }
    iVar2 = __snprintf_chk(local_248 + uVar5,0x200 - uVar5,2,uVar4 - uVar5," %02x",
                           *(undefined1 *)(param_6 + uVar9));
    uVar5 = uVar5 + (long)iVar2;
    cVar1 = *(char *)(param_6 + uVar9);
    if (0x5e < (byte)(*(char *)(param_6 + uVar9) - 0x20U)) {
      cVar1 = '.';
    }
    uVar9 = uVar9 + 1;
    local_268[uVar8 & 0xf] = cVar1;
    if (param_7 == uVar9) goto joined_r0x001007a1;
  } while (uVar9 != 0x1000);
  goto LAB_001007eb;
joined_r0x001007a1:
  for (; (uVar9 & 0xf) != 0; uVar9 = uVar9 + 1) {
    uVar4 = 0x200;
    if (0x1ff < uVar5) {
      uVar4 = uVar5;
    }
    iVar2 = __snprintf_chk(local_248 + uVar5,0x200 - uVar5,2,uVar4 - uVar5,&_LC11);
    uVar5 = uVar5 + (long)iVar2;
  }
LAB_001007eb:
  uVar9 = 0x200;
  if (0x1ff < uVar5) {
    uVar9 = uVar5;
  }
  __snprintf_chk(local_248 + uVar5,0x200 - uVar5,2,uVar9 - uVar5,"  %s\n",local_268);
  (**(code **)(*param_1 + 0x28))(*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4,local_248)
  ;
LAB_001005d5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void mbedtls_debug_print_ecp(long *param_1,int param_2)

{
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) && (*(long *)(*param_1 + 0x28) != 0)) &&
     (param_2 <= debug_threshold)) {
    mbedtls_debug_print_ecp_part_0();
    return;
  }
  return;
}



void mbedtls_debug_print_mpi(long *param_1,int param_2)

{
  long in_R9;
  
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) && (*(long *)(*param_1 + 0x28) != 0)) &&
     ((in_R9 != 0 && (param_2 <= debug_threshold)))) {
    mbedtls_debug_print_mpi_part_0();
    return;
  }
  return;
}



void mbedtls_debug_print_crt
               (long *param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
               long param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  byte bVar10;
  int local_8bc;
  undefined1 local_898 [16];
  undefined1 local_888 [16];
  undefined1 local_878 [16];
  undefined1 local_868 [16];
  undefined8 local_858;
  int local_850 [2];
  undefined1 local_848 [512];
  char local_648 [512];
  char local_448 [1032];
  long local_40;
  
  bVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) && (*(long *)(*param_1 + 0x28) != 0)) &&
     ((param_6 != 0 && (param_2 <= debug_threshold)))) {
    local_8bc = 0;
LAB_00100968:
    do {
      local_8bc = local_8bc + 1;
      __snprintf_chk(local_848,0x200,2,0x200,"%s #%d:\n",param_5,local_8bc);
      (**(code **)(*param_1 + 0x28))
                (*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4,local_848);
      mbedtls_x509_crt_info(local_448,0x3ff,&_LC13,param_6);
      pcVar8 = local_448;
      cVar1 = local_448[0];
      while (pcVar3 = pcVar8, cVar1 != '\0') {
        while (pcVar6 = pcVar3 + 1, cVar1 != '\n') {
          cVar1 = *pcVar6;
          pcVar3 = pcVar6;
          if (cVar1 == '\0') goto LAB_00100a90;
        }
        pcVar3 = pcVar3 + (1 - (long)pcVar8);
        if ((char *)0x1ff < pcVar3) {
          pcVar3 = (char *)0x1ff;
        }
        pcVar9 = local_648;
        if (7 < (uint)pcVar3) {
          for (uVar4 = (ulong)pcVar3 >> 3 & 0x1fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined8 *)pcVar9 = *(undefined8 *)pcVar8;
            pcVar8 = pcVar8 + (ulong)bVar10 * -0x10 + 8;
            pcVar9 = pcVar9 + ((ulong)bVar10 * -2 + 1) * 8;
          }
        }
        lVar5 = 0;
        if (((ulong)pcVar3 & 4) != 0) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          lVar5 = 4;
        }
        if (((ulong)pcVar3 & 2) != 0) {
          *(undefined2 *)(pcVar9 + lVar5) = *(undefined2 *)(pcVar8 + lVar5);
          lVar5 = lVar5 + 2;
        }
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar9[lVar5] = pcVar8[lVar5];
        }
        local_648[(long)pcVar3] = '\0';
        (**(code **)(*param_1 + 0x28))
                  (*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4,local_648);
        pcVar8 = pcVar6;
        cVar1 = *pcVar6;
      }
LAB_00100a90:
      local_858 = 0;
      local_898 = (undefined1  [16])0x0;
      local_888 = (undefined1  [16])0x0;
      local_878 = (undefined1  [16])0x0;
      local_868 = (undefined1  [16])0x0;
      iVar2 = mbedtls_pk_debug(param_6 + 0x168,local_898);
      if (iVar2 == 0) {
        piVar7 = (int *)local_898;
        do {
          if (*piVar7 == 0) break;
          __snprintf_chk(local_648,0x10,2,0x10,&_LC16,"crt->");
          local_648[0xf] = 0;
          if (*piVar7 == 1) {
            if (((*param_1 != 0) && (*(long *)(*param_1 + 0x28) != 0)) &&
               ((*(long *)(piVar7 + 4) != 0 && (param_2 <= debug_threshold)))) {
              mbedtls_debug_print_mpi_part_0(param_1,param_2,param_3,param_4,local_648);
            }
          }
          else {
            lVar5 = *param_1;
            if (*piVar7 == 2) {
              if (((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) && (param_2 <= debug_threshold))
              {
                mbedtls_debug_print_ecp_part_0
                          (param_1,param_2,param_3,param_4,local_648,*(undefined8 *)(piVar7 + 4));
              }
            }
            else {
              (**(code **)(lVar5 + 0x28))
                        (*(undefined8 *)(lVar5 + 0x30),param_2,param_3,param_4,"should not happen\n"
                        );
            }
          }
          piVar7 = piVar7 + 6;
        } while (local_850 != piVar7);
        param_6 = *(long *)(param_6 + 0x2e0);
        if (param_6 == 0) break;
        goto LAB_00100968;
      }
      (**(code **)(*param_1 + 0x28))
                (*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4,"invalid PK context\n");
      param_6 = *(long *)(param_6 + 0x2e0);
    } while (param_6 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_debug_printf_ecdh(long *param_1,int param_2)

{
  int in_R9D;
  
  if (in_R9D == 1) {
    if ((((param_1 != (long *)0x0) && (*param_1 != 0)) && (*(long *)(*param_1 + 0x28) != 0)) &&
       (param_2 <= debug_threshold)) {
      mbedtls_debug_print_ecp_part_0();
      return;
    }
  }
  else if (in_R9D == 2) {
    if (((param_1 != (long *)0x0) && (*param_1 != 0)) &&
       ((*(long *)(*param_1 + 0x28) != 0 && (param_2 <= debug_threshold)))) {
      mbedtls_debug_print_mpi_part_0();
      return;
    }
  }
  else if (((in_R9D == 0) && (param_1 != (long *)0x0)) &&
          ((*param_1 != 0 && ((*(long *)(*param_1 + 0x28) != 0 && (param_2 <= debug_threshold))))))
  {
    mbedtls_debug_print_ecp_part_0();
    return;
  }
  return;
}


