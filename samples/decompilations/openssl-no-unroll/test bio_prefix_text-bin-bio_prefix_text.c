
ulong run_pipe(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_1048;
  long local_1040;
  undefined1 local_1038 [4104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    uVar2 = BIO_ctrl(bio_in,2,0,(void *)0x0);
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) break;
    iVar1 = BIO_read_ex(bio_in,local_1038,0x1000);
    if (iVar1 == 0) goto LAB_001000b0;
    if (local_1048 != 0) {
      uVar2 = 0;
      do {
        iVar1 = BIO_write_ex(*(undefined8 *)(chain + -8 + amount * 8),local_1038);
        if (iVar1 == 0) goto LAB_001000b0;
        uVar2 = uVar2 + local_1040;
      } while (uVar2 < local_1048);
    }
  }
  uVar3 = 1;
LAB_001000b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void opt_printf_stderr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                      undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = &stack0x00000008;
  local_c8 = local_b8;
  local_d8 = 8;
  local_d4 = 0x30;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  BIO_vprintf(bio_err,param_9,&local_d8);
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool main(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  BIO_METHOD *type;
  BIO *pBVar7;
  char *pcVar8;
  ulong larg;
  long lVar9;
  BIO *append;
  long in_FS_OFFSET;
  bool bVar10;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  opt_init(param_1,param_2,options);
  uVar4 = opt_getprog();
  bio_in = BIO_new_fp(_stdin,0x10);
  bio_out = BIO_new_fp(_stdout,0x10);
  bio_err = BIO_new_fp(_stderr,0x10);
  if (bio_in != (BIO *)0x0) {
    if (bio_out != (BIO *)0x0) {
      if (bio_err != (BIO *)0x0) {
LAB_00100523:
        do {
          while( true ) {
            iVar3 = opt_next();
            if (iVar3 == 0) {
              iVar3 = run_pipe();
              bVar10 = iVar3 == 0;
              goto LAB_00100550;
            }
            if (iVar3 != 2) break;
            if (chain == (void *)0x0) {
              BIO_printf(bio_err,"%s: -i given before -n",uVar4);
              goto LAB_0010054b;
            }
            pcVar5 = (char *)opt_arg();
            pcVar8 = strchr(pcVar5,0x3a);
            if (pcVar8 == (char *)0x0) {
              uVar6 = 0;
              pcVar8 = pcVar5;
            }
            else {
              uVar6 = strtoul(pcVar5,&local_48,10);
              if (*local_48 != ':') {
                BIO_printf(bio_err,"%s: -i index isn\'t a decimal number: %s",uVar4,pcVar5);
                goto LAB_0010054b;
              }
              pcVar8 = pcVar8 + 1;
            }
            larg = strtoul(pcVar8,&local_48,10);
            if (*local_48 != '\0') {
              BIO_printf(bio_err,"%s: -i value isn\'t a decimal number: %s",uVar4,pcVar5);
              goto LAB_0010054b;
            }
            if (amount <= uVar6) {
LAB_00100911:
              BIO_printf(bio_err,"%s: index (%zu) not within range 0..%zu",uVar4,uVar6,amount - 1);
              goto LAB_0010054b;
            }
            lVar9 = BIO_ctrl(*(BIO **)((long)chain + uVar6 * 8),0x50,larg,(void *)0x0);
            if (lVar9 < 1) {
              BIO_printf(bio_err,"%s: failed setting indentation: %s",uVar4,pcVar5);
              goto LAB_0010054b;
            }
          }
          if (iVar3 == 3) {
            if (chain == (void *)0x0) {
              BIO_printf(bio_err,"%s: -p given before -n",uVar4);
              goto LAB_0010054b;
            }
            pcVar5 = (char *)opt_arg();
            pcVar8 = strchr(pcVar5,0x3a);
            if (pcVar8 == (char *)0x0) {
              uVar6 = 0;
              pcVar8 = pcVar5;
            }
            else {
              uVar6 = strtoul(pcVar5,&local_48,10);
              if (*local_48 != ':') {
                BIO_printf(bio_err,"%s: -p index isn\'t a decimal number: %s",uVar4,pcVar5);
                goto LAB_0010054b;
              }
              pcVar8 = pcVar8 + 1;
            }
            if (amount <= uVar6) goto LAB_00100911;
            lVar9 = BIO_ctrl(*(BIO **)((long)chain + uVar6 * 8),0x4f,0,pcVar8);
            if (lVar9 < 1) {
              BIO_printf(bio_err,"%s: failed setting prefix: %s",uVar4,pcVar5);
              goto LAB_0010054b;
            }
            goto LAB_00100523;
          }
          if (iVar3 != 1) goto LAB_0010054b;
          pcVar5 = (char *)opt_arg();
          uVar6 = strtoul(pcVar5,&local_48,10);
          amount = uVar6;
          if (*local_48 != '\0') {
            BIO_printf(bio_err,"%s: -n argument isn\'t a decimal number: %s",uVar4,pcVar5);
            goto LAB_0010054b;
          }
          if (uVar6 == 0) {
            BIO_printf(bio_err,"%s: must set up at least one filter",uVar4);
            goto LAB_0010054b;
          }
          chain = (void *)CRYPTO_zalloc(uVar6 * 8,"test/bio_prefix_text.c",99);
          if (chain == (void *)0x0) break;
          iVar3 = BIO_up_ref(bio_out);
          if (iVar3 == 0) {
            append = (BIO *)0x0;
LAB_00100830:
            BIO_free_all(append);
            CRYPTO_free(chain);
            break;
          }
          lVar9 = 0;
          append = bio_out;
          do {
            type = (BIO_METHOD *)BIO_f_prefix();
            pBVar7 = BIO_new(type);
            pvVar2 = chain;
            if (pBVar7 == (BIO *)0x0) goto LAB_00100830;
            pBVar7 = BIO_push(pBVar7,append);
            pvVar1 = chain;
            *(BIO **)((long)pvVar2 + lVar9) = pBVar7;
            pBVar7 = *(BIO **)((long)pvVar1 + lVar9);
            if (pBVar7 == (BIO *)0x0) goto LAB_00100830;
            lVar9 = lVar9 + 8;
            uVar6 = uVar6 - 1;
            append = pBVar7;
          } while (uVar6 != 0);
        } while (pvVar1 != (void *)0x0);
        BIO_printf(bio_err,"%s: failed setting up filter chain",uVar4);
LAB_0010054b:
        bVar10 = true;
LAB_00100550:
        if (chain != (void *)0x0) {
          BIO_free_all(*(BIO **)((long)chain + amount * 8 + -8));
          CRYPTO_free(chain);
        }
        BIO_free_all(bio_in);
        BIO_free_all(bio_out);
        BIO_free_all(bio_err);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return bVar10;
        }
        goto LAB_001009df;
      }
      OPENSSL_die("assertion failed: bio_err != NULL","test/bio_prefix_text.c",0x9f);
    }
    OPENSSL_die("assertion failed: bio_out != NULL","test/bio_prefix_text.c",0x9e);
  }
  OPENSSL_die("assertion failed: bio_in != NULL","test/bio_prefix_text.c",0x9d);
LAB_001009df:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


