
void mlkem_compare(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  EVP_PKEY_eq(param_3,param_3);
  EVP_PKEY_eq(param_3,param_4);
  return;
}



void cleanup_mlkem_keys(EVP_PKEY *param_1,EVP_PKEY *param_2,EVP_PKEY *param_3,EVP_PKEY *param_4)

{
  EVP_PKEY_free(param_1);
  EVP_PKEY_free(param_2);
  EVP_PKEY_free(param_3);
  EVP_PKEY_free(param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mlkem_export_import(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  EVP_PKEY *local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = (EVP_PKEY *)0x0;
  local_18 = 0;
  iVar1 = EVP_PKEY_todata(param_3,0x87,&local_18);
  if (iVar1 == 0) {
    ctx = (EVP_PKEY_CTX *)0x0;
    fwrite("Failed todata\n",1,0xe,_stderr);
  }
  else {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,param_3,0);
    if (ctx == (EVP_PKEY_CTX *)0x0) {
      ctx = (EVP_PKEY_CTX *)0x0;
      fwrite("Failed new ctx\n",1,0xf,_stderr);
    }
    else {
      iVar1 = EVP_PKEY_fromdata(ctx,&local_20,0x87,local_18);
      if (iVar1 == 0) {
        fwrite("Failed fromdata\n",1,0x10,_stderr);
      }
    }
  }
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(local_20);
  OSSL_PARAM_free(local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mlkem_encap_decap(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  long in_FS_OFFSET;
  size_t local_6b0 [3];
  uchar local_698 [32];
  undefined1 local_678 [32];
  undefined1 local_658 [1576];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_6b0[0] = 0x20;
  local_6b0[1] = 0x20;
  local_6b0[2] = 0x620;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,param_3,0);
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    ctx = (EVP_PKEY_CTX *)0x0;
    fwrite("Failed to allocate ctx\n",1,0x17,_stderr);
  }
  else {
    iVar1 = EVP_PKEY_encapsulate_init(ctx,0);
    if (iVar1 == 0) {
      fwrite("Failed to init encap context\n",1,0x1d,_stderr);
    }
    else {
      iVar1 = RAND_bytes(local_698,(int)local_6b0[0]);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_encapsulate(ctx,local_658,local_6b0 + 2,local_698,local_6b0);
        if (iVar1 < 1) {
          fwrite("Failed to encapsulate key\n",1,0x1a,_stderr);
        }
        else {
          EVP_PKEY_CTX_free(ctx);
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,param_3,0);
          if (ctx == (EVP_PKEY_CTX *)0x0) {
            ctx = (EVP_PKEY_CTX *)0x0;
            fwrite("Failed to create context\n",1,0x19,_stderr);
          }
          else {
            iVar1 = EVP_PKEY_decapsulate_init(ctx,0);
            if (iVar1 == 0) {
              fwrite("Failed to init decap\n",1,0x15,_stderr);
            }
            else {
              iVar1 = EVP_PKEY_decapsulate(ctx,local_678,local_6b0 + 1,local_658,local_6b0[2]);
              if (iVar1 < 1) {
                fwrite("Failed to decap key\n",1,0x14,_stderr);
              }
              else {
                iVar1 = memcmp(local_678,local_698,local_6b0[0]);
                if (iVar1 != 0) {
                  fwrite("mismatch on secret comparison\n",1,0x1e,_stderr);
                }
              }
            }
          }
        }
      }
    }
  }
  EVP_PKEY_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void keygen_mlkem_real_key
               (undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  int iVar2;
  EVP_PKEY *pEVar3;
  EVP_PKEY_CTX *ctx;
  undefined8 *puVar4;
  char *pcVar5;
  
  *param_4 = 0;
  *param_3 = 0;
  puVar4 = param_3;
  do {
    pcVar5 = "ML-KEM-768";
    uVar1 = *(ushort *)*param_1;
    *param_1 = (ushort *)*param_1 + 1;
    *param_2 = *param_2 + -2;
    uVar1 = uVar1 % 3;
    if ((uVar1 != 1) && (pcVar5 = "ML-KEM-512", uVar1 == 2)) {
      pcVar5 = "ML-KEM-1024";
    }
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(0,pcVar5,0);
    if (ctx == (EVP_PKEY_CTX *)0x0) {
      fwrite("Failed to generate ctx\n",1,0x17,_stderr);
      return;
    }
    iVar2 = EVP_PKEY_keygen_init(ctx);
    if (iVar2 == 0) {
      fwrite("Failed to init keygen ctx\n",1,0x1a,_stderr);
LAB_0010052d:
      EVP_PKEY_CTX_free(ctx);
      return;
    }
    pEVar3 = EVP_PKEY_new();
    *puVar4 = pEVar3;
    if (pEVar3 == (EVP_PKEY *)0x0) goto LAB_0010052d;
    iVar2 = EVP_PKEY_generate(ctx,puVar4);
    if (iVar2 == 0) {
      fwrite("Failed to generate new real key\n",1,0x20,_stderr);
      goto LAB_0010052d;
    }
    if (puVar4 != param_3) goto LAB_0010052d;
    EVP_PKEY_CTX_free(ctx);
    puVar4 = param_4;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void do_derive_constprop_0(undefined8 param_1,EVP_PKEY *param_2,undefined8 *param_3,size_t *param_4)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  uchar *key;
  
  *param_3 = 0;
  *param_4 = 0;
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,param_1,0);
  if (ctx == (EVP_PKEY_CTX *)0x0) {
    fwrite("failed to create keygen context\n",1,0x20,_stderr);
  }
  else {
    iVar1 = EVP_PKEY_derive_init(ctx);
    if (iVar1 == 0) {
      fwrite("failed to init derive context\n",1,0x1e,_stderr);
    }
    else {
      iVar1 = EVP_PKEY_derive_set_peer(ctx,param_2);
      if (iVar1 == 0) {
        fwrite("failed to set peer\n",1,0x13,_stderr);
      }
      else {
        iVar1 = EVP_PKEY_derive(ctx,(uchar *)0x0,param_4);
        if (iVar1 == 0) {
          fwrite("Derive failed 1\n",1,0x10,_stderr);
        }
        else if (*param_4 != 0) {
          key = (uchar *)CRYPTO_zalloc(*param_4,"fuzz/ml-kem.c",0x173);
          *param_3 = key;
          if (key == (uchar *)0x0) {
            fwrite("Failed to alloc\n",1,0x10,_stderr);
          }
          else {
            iVar1 = EVP_PKEY_derive(ctx,key,param_4);
            if (iVar1 == 0) {
              fwrite("Derive failed 2\n",1,0x10,_stderr);
              CRYPTO_free((void *)*param_3);
              *param_3 = 0;
              *param_4 = 0;
            }
          }
        }
      }
    }
  }
  EVP_PKEY_CTX_free(ctx);
  return;
}



void mlkem_kex(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  void *local_30;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (void *)0x0;
  local_28 = (void *)0x0;
  do_derive_constprop_0(param_3,param_4,&local_28,local_38);
  do_derive_constprop_0(param_4,param_3,&local_30,local_40);
  CRYPTO_free(local_30);
  CRYPTO_free(local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void create_mlkem_raw_key(long *param_1,long *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint num;
  ushort *puVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  uchar auStack_1038 [4104];
  long local_30;
  
  puVar2 = (ushort *)*param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *puVar2;
  lVar3 = *param_2;
  puVar7 = puVar2 + 1;
  *param_1 = (long)puVar7;
  *param_2 = lVar3 + -2;
  switch((uint)uVar1 % 6) {
  case 0:
    num = 800;
    pcVar8 = "ML-KEM-512";
    if ((*puVar7 & 1) == 0) goto LAB_00100871;
    goto LAB_001008d9;
  case 1:
    num = 0x4a0;
    pcVar8 = "ML-KEM-768";
    break;
  case 2:
    num = 0x620;
    pcVar8 = "ML-KEM-1024";
    break;
  case 3:
    num = 0xd;
    pcVar8 = "ML-KEM-13";
    break;
  case 4:
    uVar1 = puVar2[1];
    puVar7 = puVar2 + 2;
    pcVar8 = "ML-KEM-1024";
    *param_1 = (long)puVar7;
    num = uVar1 & 0x3ff;
    *param_2 = lVar3 + -4;
    break;
  default:
    num = 0;
    pcVar8 = (char *)0x0;
  }
  if ((*puVar7 & 1) == 0) {
LAB_00100871:
    iVar5 = num * 2 + 0x20;
    iVar4 = RAND_bytes(auStack_1038,iVar5);
    if (iVar4 == 0) goto LAB_0010089d;
    uVar6 = EVP_PKEY_new_raw_private_key_ex(0,pcVar8,0,auStack_1038,iVar5);
  }
  else {
LAB_001008d9:
    iVar5 = RAND_bytes(auStack_1038,num);
    if (iVar5 == 0) goto LAB_0010089d;
    uVar6 = EVP_PKEY_new_raw_public_key_ex(0,pcVar8,0,auStack_1038,num);
  }
  *param_3 = uVar6;
LAB_0010089d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 FuzzerInitialize(void)

{
  return 0;
}



undefined8 FuzzerTestOneInput(byte *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_50;
  byte *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (param_2 < 0x20) {
    uVar1 = 0xffffffff;
    local_50 = param_2;
  }
  else {
    local_48 = param_1 + 1;
    local_50 = param_2 - 1;
    uVar2 = (ulong)((uint)*param_1 + (uint)(ushort)(*param_1 / 6) * -6 & 0xff);
    if (*(code **)(ops + uVar2 * 0x28 + 0x10) != (code *)0x0) {
      (**(code **)(ops + uVar2 * 0x28 + 0x10))(&local_48,&local_50,&local_40,&local_38);
    }
    if (*(code **)(ops + uVar2 * 0x28 + 0x18) != (code *)0x0) {
      (**(code **)(ops + uVar2 * 0x28 + 0x18))
                (&local_48,&local_50,local_40,local_38,&local_30,&local_28);
    }
    if (*(code **)(ops + uVar2 * 0x28 + 0x20) != (code *)0x0) {
      (**(code **)(ops + uVar2 * 0x28 + 0x20))(local_40,local_38,local_30,local_28);
    }
    uVar1 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  OPENSSL_cleanup();
  return;
}


