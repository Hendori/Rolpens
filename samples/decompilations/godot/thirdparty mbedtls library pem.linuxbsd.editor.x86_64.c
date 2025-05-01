
int pem_aes_decrypt(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  byte bVar6;
  undefined1 local_1b8 [32];
  undefined1 local_198 [288];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [24];
  long local_40;
  
  bVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_aes_init(local_198);
  mbedtls_md_init(local_1b8);
  uVar2 = mbedtls_md_info_from_type(3);
  iVar1 = mbedtls_md_setup(local_1b8,uVar2,0);
  if ((((iVar1 != 0) || (iVar1 = mbedtls_md_starts(local_1b8), iVar1 != 0)) ||
      (iVar1 = mbedtls_md_update(local_1b8,param_5,param_6), iVar1 != 0)) ||
     (iVar1 = mbedtls_md_update(local_1b8,param_1,8), iVar1 != 0)) {
    mbedtls_md_free(local_1b8);
    mbedtls_platform_zeroize(&local_78,0x10);
    goto LAB_00100098;
  }
  iVar1 = mbedtls_md_finish(local_1b8,&local_78);
  if (iVar1 == 0) {
    local_68 = local_78;
    uStack_60 = uStack_70;
    if (param_2 != 0x10) {
      iVar1 = mbedtls_md_starts(local_1b8);
      if (((iVar1 != 0) || (iVar1 = mbedtls_md_update(local_1b8,&local_78,0x10), iVar1 != 0)) ||
         ((iVar1 = mbedtls_md_update(local_1b8,param_5,param_6), iVar1 != 0 ||
          ((iVar1 = mbedtls_md_update(local_1b8,param_1,8), iVar1 != 0 ||
           (iVar1 = mbedtls_md_finish(local_1b8,&local_78), iVar1 != 0)))))) goto LAB_00100278;
      puVar4 = &local_78;
      puVar5 = local_58;
      for (lVar3 = (ulong)(param_2 == 0x20) * 8 + 8; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined8 *)((long)puVar4 + (ulong)bVar6 * -2 + 1);
        puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
      }
    }
    mbedtls_md_free(local_1b8);
    mbedtls_platform_zeroize(&local_78,0x10);
    iVar1 = mbedtls_aes_setkey_dec(local_198,&local_68,param_2 * 8);
    if (iVar1 == 0) {
      iVar1 = mbedtls_aes_crypt_cbc(local_198,0,param_4,param_1,param_3,param_3);
    }
  }
  else {
LAB_00100278:
    mbedtls_md_free(local_1b8);
    mbedtls_platform_zeroize(&local_78,0x10);
  }
LAB_00100098:
  mbedtls_aes_free(local_198);
  mbedtls_platform_zeroize(&local_68,param_2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void mbedtls_pem_init(undefined1 (*param_1) [16])

{
  *(undefined8 *)param_1[1] = 0;
  *param_1 = (undefined1  [16])0x0;
  return;
}



int mbedtls_pem_read_buffer
              (undefined8 *param_1,char *param_2,char *param_3,char *param_4,long param_5,
              undefined8 param_6,undefined8 *param_7)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  size_t sVar8;
  char *pcVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  int iVar15;
  long in_FS_OFFSET;
  size_t local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (undefined8 *)0x0) {
LAB_0010082f:
    iVar4 = -0x1480;
    goto LAB_001004e1;
  }
  plVar6 = (long *)strstr(param_4,param_2);
  if (((plVar6 != (long *)0x0) && (plVar7 = (long *)strstr(param_4,param_3), plVar7 != (long *)0x0))
     && (plVar6 < plVar7)) {
    sVar8 = strlen(param_2);
    pcVar14 = (char *)((long)plVar6 + sVar8);
    cVar2 = *pcVar14;
    if (cVar2 == ' ') {
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 1;
    }
    if (cVar2 == '\r') {
      cVar2 = pcVar14[1];
      pcVar14 = pcVar14 + 1;
    }
    if (cVar2 == '\n') {
      plVar6 = (long *)(pcVar14 + 1);
      sVar8 = strlen(param_3);
      pcVar9 = (char *)(sVar8 + (long)plVar7);
      cVar2 = *pcVar9;
      if (cVar2 == ' ') {
        cVar2 = pcVar9[1];
        pcVar9 = pcVar9 + 1;
      }
      if (cVar2 == '\r') {
        cVar2 = pcVar9[1];
        pcVar9 = pcVar9 + 1;
      }
      *param_7 = pcVar9 + ((ulong)(cVar2 == '\n') - (long)param_4);
      if ((((long)plVar7 - (long)plVar6 < 0x16) ||
          (*plVar6 != 0x7079542d636f7250 || *(long *)(pcVar14 + 9) != 0x434e452c34203a65)) ||
         (*(long *)(pcVar14 + 0xf) != 0x444554505952434e)) {
        bVar1 = false;
        iVar15 = 0;
LAB_001003e1:
        if (plVar6 < plVar7) {
          iVar4 = mbedtls_base64_decode(0,0,&local_60,plVar6,(long)plVar7 - (long)plVar6);
          sVar8 = local_60;
          if (iVar4 == -0x2c) {
            iVar4 = -0x112c;
            goto LAB_001004e1;
          }
          if (local_60 == 0) goto LAB_0010082f;
          pvVar10 = calloc(1,local_60);
          if (pvVar10 == (void *)0x0) {
            iVar4 = -0x1180;
            goto LAB_001004e1;
          }
          iVar4 = mbedtls_base64_decode(pvVar10,sVar8,&local_60,plVar6,(long)plVar7 - (long)plVar6);
          if (iVar4 != 0) {
            iVar4 = iVar4 + -0x1100;
            mbedtls_zeroize_and_free(pvVar10,local_60);
            goto LAB_001004e1;
          }
          sVar8 = local_60;
          if (bVar1) {
            if (param_5 == 0) {
              iVar4 = -0x1300;
              mbedtls_zeroize_and_free(pvVar10);
              goto LAB_001004e1;
            }
            if (iVar15 == 5) {
              iVar4 = pem_aes_decrypt(local_58,0x10,pvVar10,local_60,param_5,param_6);
LAB_00100756:
              if (iVar4 != 0) {
                mbedtls_zeroize_and_free(pvVar10,local_60);
                goto LAB_001004e1;
              }
            }
            else {
              if (iVar15 == 6) {
                iVar4 = pem_aes_decrypt(local_58,0x18,pvVar10,local_60,param_5,param_6);
                goto LAB_00100756;
              }
              if (iVar15 == 7) {
                iVar4 = pem_aes_decrypt(local_58,0x20,pvVar10,local_60,param_5,param_6);
                goto LAB_00100756;
              }
            }
            bVar3 = *(byte *)((long)pvVar10 + (local_60 - 1));
            if (local_60 < bVar3) {
LAB_001004bf:
              iVar4 = -0x1380;
              mbedtls_zeroize_and_free(pvVar10,local_60);
              goto LAB_001004e1;
            }
            sVar8 = local_60 - bVar3;
            for (uVar11 = sVar8; uVar11 < local_60; uVar11 = uVar11 + 1) {
              if (bVar3 != *(byte *)((long)pvVar10 + uVar11)) goto LAB_001004bf;
            }
          }
          *param_1 = pvVar10;
          param_1[1] = sVar8;
          iVar4 = 0;
          goto LAB_001004e1;
        }
      }
      else {
        cVar2 = pcVar14[0x17];
        pcVar9 = pcVar14 + 0x17;
        if (cVar2 == '\r') {
          cVar2 = pcVar14[0x18];
          pcVar9 = pcVar14 + 0x18;
        }
        if (cVar2 == '\n') {
          plVar6 = (long *)(pcVar9 + 1);
          if (0xd < (long)plVar7 - (long)plVar6) {
            if ((*(long *)(pcVar9 + 1) == 0x6f666e492d4b4544) &&
               (*(long *)(pcVar9 + 7) == 0x2d534541203a6f66)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((!bVar1) && (0x15 < (long)plVar7 - (long)plVar6)) {
              if (((*plVar6 != 0x6f666e492d4b4544 || *(long *)(pcVar9 + 9) != 0x32312d534541203a) ||
                  (iVar15 = 5, *(long *)(pcVar9 + 0xf) != 0x2c4342432d383231)) &&
                 ((*plVar6 != 0x6f666e492d4b4544 || *(long *)(pcVar9 + 9) != 0x39312d534541203a ||
                  (iVar15 = 6, *(long *)(pcVar9 + 0xf) != 0x2c4342432d323931)))) {
                if ((*plVar6 != 0x6f666e492d4b4544 || *(long *)(pcVar9 + 9) != 0x35322d534541203a)
                   || (*(long *)(pcVar9 + 0xf) != 0x2c4342432d363532)) goto LAB_00100604;
                iVar15 = 7;
              }
              if ((long)plVar7 - (long)(pcVar9 + 0x17) < 0x20) {
LAB_00100840:
                iVar4 = -0x1200;
                goto LAB_001004e1;
              }
              local_58 = (undefined1  [16])0x0;
              uVar11 = 0;
              do {
                bVar3 = pcVar9[uVar11 + 0x17];
                uVar5 = (uint)bVar3;
                if ((byte)(bVar3 - 0x30) < 10) {
                  lVar12 = (long)(int)(uVar5 - 0x30);
                }
                else if ((byte)(bVar3 + 0xbf) < 6) {
                  lVar12 = (long)(int)(uVar5 - 0x37);
                }
                else {
                  if (5 < (byte)(bVar3 + 0x9f)) goto LAB_00100840;
                  lVar12 = (long)(int)(uVar5 - 0x57);
                }
                bVar3 = (byte)lVar12;
                if ((uVar11 & 1) == 0) {
                  bVar3 = (byte)(lVar12 << 4);
                }
                uVar13 = uVar11 + 1;
                local_58[uVar11 >> 1] = local_58[uVar11 >> 1] | bVar3;
                uVar11 = uVar13;
              } while (uVar13 != 0x20);
              cVar2 = pcVar9[0x37];
              pcVar14 = pcVar9 + 0x37;
              if (cVar2 == '\r') {
                cVar2 = pcVar9[0x38];
                pcVar14 = pcVar9 + 0x38;
              }
              if (cVar2 == '\n') {
                bVar1 = true;
                plVar6 = (long *)(pcVar14 + 1);
                goto LAB_001003e1;
              }
              goto LAB_00100802;
            }
          }
LAB_00100604:
          iVar4 = -0x1280;
          goto LAB_001004e1;
        }
      }
LAB_00100802:
      iVar4 = -0x1100;
      goto LAB_001004e1;
    }
  }
  iVar4 = -0x1080;
LAB_001004e1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_pem_free(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      mbedtls_zeroize_and_free(*param_1,param_1[1]);
    }
    free((void *)param_1[2]);
    mbedtls_platform_zeroize(param_1,0x18);
    return;
  }
  return;
}



int mbedtls_pem_write_buffer
              (char *param_1,char *param_2,undefined8 param_3,undefined8 param_4,void *param_5,
              ulong param_6,ulong *param_7)

{
  undefined8 *__dest;
  undefined1 *puVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *__ptr;
  uint uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_base64_encode(0,0,&local_48,param_3,param_4);
  sVar3 = strlen(param_1);
  sVar4 = strlen(param_2);
  uVar6 = local_48;
  uVar5 = 2;
  if (1 < local_48) {
    uVar5 = local_48;
  }
  uVar5 = local_48 + 1 + (uVar5 - 2 >> 6) + sVar3 + sVar4;
  if (param_6 < uVar5) {
    iVar2 = -0x2a;
    *param_7 = uVar5;
  }
  else {
    if (local_48 == 0) {
      __ptr = (undefined8 *)0x0;
    }
    else {
      __ptr = (undefined8 *)calloc(1,local_48);
      if (__ptr == (undefined8 *)0x0) {
        iVar2 = -0x1180;
        goto LAB_00100a3f;
      }
    }
    iVar2 = mbedtls_base64_encode(__ptr,uVar6,&local_48,param_3,param_4);
    if (iVar2 == 0) {
      sVar3 = strlen(param_1);
      memcpy(param_5,param_1,sVar3);
      sVar3 = strlen(param_1);
      __dest = (undefined8 *)((long)param_5 + sVar3);
      puVar10 = __ptr;
      for (; local_48 != 0; local_48 = local_48 - uVar6) {
        uVar6 = 0x40;
        if (local_48 < 0x41) {
          uVar6 = local_48;
        }
        uVar7 = (uint)uVar6;
        if (uVar7 < 8) {
          if ((uVar6 & 4) == 0) {
            if ((uVar7 != 0) && (*(undefined1 *)__dest = *(undefined1 *)puVar10, (uVar6 & 2) != 0))
            {
              *(undefined2 *)((long)__dest + ((uVar6 & 0xffffffff) - 2)) =
                   *(undefined2 *)((long)puVar10 + ((uVar6 & 0xffffffff) - 2));
            }
          }
          else {
            *(undefined4 *)__dest = *(undefined4 *)puVar10;
            *(undefined4 *)((long)__dest + ((uVar6 & 0xffffffff) - 4)) =
                 *(undefined4 *)((long)puVar10 + ((uVar6 & 0xffffffff) - 4));
          }
        }
        else {
          *__dest = *puVar10;
          *(undefined8 *)((long)__dest + ((uVar6 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)puVar10 + ((uVar6 & 0xffffffff) - 8));
          lVar8 = (long)__dest - ((ulong)(__dest + 1) & 0xfffffffffffffff8);
          uVar7 = (int)lVar8 + uVar7 & 0xfffffff8;
          if (7 < uVar7) {
            uVar9 = 0;
            do {
              uVar5 = (ulong)uVar9;
              uVar9 = uVar9 + 8;
              *(undefined8 *)(((ulong)(__dest + 1) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)puVar10 + (uVar5 - lVar8));
            } while (uVar9 < uVar7);
          }
        }
        puVar1 = (undefined1 *)((long)__dest + uVar6);
        puVar10 = (undefined8 *)((long)puVar10 + uVar6);
        __dest = (undefined8 *)(puVar1 + 1);
        *puVar1 = 10;
      }
      sVar3 = strlen(param_2);
      memcpy(__dest,param_2,sVar3);
      sVar3 = strlen(param_2);
      puVar1 = (undefined1 *)((long)__dest + sVar3) + 1;
      *(undefined1 *)((long)__dest + sVar3) = 0;
      uVar6 = (long)puVar1 - (long)param_5;
      *param_7 = uVar6;
      memset(puVar1,0,param_6 - uVar6);
    }
    free(__ptr);
  }
LAB_00100a3f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


