
undefined8 dynamic_init(void)

{
  return 0;
}



void int_free_str(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void dynamic_data_ctx_free_func(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    DSO_free((DSO *)*param_2);
    CRYPTO_free((void *)param_2[3]);
    CRYPTO_free((void *)param_2[5]);
    OPENSSL_sk_pop_free(param_2[10],int_free_str);
    CRYPTO_free(param_2);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool dynamic_ctrl(ENGINE *param_1,undefined4 param_2,ulong param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  long *arg;
  long lVar3;
  DSO *pDVar4;
  char *pcVar5;
  long *plVar6;
  DSO_FUNC_TYPE pDVar7;
  ulong uVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  void *local_148;
  m *local_140;
  r *local_138;
  f *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (dynamic_ex_data_idx < 0) {
    iVar2 = CRYPTO_get_ex_new_index
                      (10,0,(void *)0x0,(undefined1 *)0x0,(undefined1 *)0x0,
                       dynamic_data_ctx_free_func);
    if (iVar2 == -1) {
      ERR_new();
      ERR_set_debug("crypto/engine/eng_dyn.c",0xd5,"dynamic_get_data_ctx");
      ERR_set_error(0x26,0x90,0);
    }
    else {
      iVar1 = CRYPTO_THREAD_write_lock(_global_engine_lock);
      if (iVar1 != 0) {
        if (dynamic_ex_data_idx < 0) {
          dynamic_ex_data_idx = iVar2;
          CRYPTO_THREAD_unlock(_global_engine_lock);
        }
        else {
          CRYPTO_THREAD_unlock(_global_engine_lock);
        }
        arg = (long *)ENGINE_get_ex_data(param_1,dynamic_ex_data_idx);
        if (arg == (long *)0x0) goto LAB_0010019d;
        goto LAB_00100101;
      }
    }
LAB_00100230:
    ERR_new();
    ERR_set_debug("crypto/engine/eng_dyn.c",0x12d,"dynamic_ctrl");
    ERR_set_error(0x26,0x70,0);
    goto LAB_00100260;
  }
  arg = (long *)ENGINE_get_ex_data(param_1,dynamic_ex_data_idx);
  if (arg != (long *)0x0) goto LAB_00100101;
LAB_0010019d:
  arg = (long *)CRYPTO_zalloc(0x58,"crypto/engine/eng_dyn.c",0x9f);
  if (arg == (long *)0x0) goto LAB_00100230;
  lVar3 = OPENSSL_sk_new_null();
  arg[10] = lVar3;
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_dyn.c",0xa6,"dynamic_set_data_ctx");
    ERR_set_error(0x26,0x8000f,0);
LAB_00100215:
    OPENSSL_sk_free(arg[10]);
    CRYPTO_free(arg);
    goto LAB_00100230;
  }
  *(undefined4 *)(arg + 9) = 1;
  uVar9 = _global_engine_lock;
  arg[7] = (long)"v_check";
  arg[8] = (long)"bind_engine";
  iVar2 = CRYPTO_THREAD_write_lock(uVar9);
  if (iVar2 == 0) goto LAB_00100215;
  plVar6 = (long *)ENGINE_get_ex_data(param_1,dynamic_ex_data_idx);
  if (plVar6 == (long *)0x0) {
    iVar2 = ENGINE_set_ex_data(param_1,dynamic_ex_data_idx,arg);
    if (iVar2 == 0) {
      CRYPTO_THREAD_unlock();
      goto LAB_00100215;
    }
    CRYPTO_THREAD_unlock();
    CRYPTO_free((void *)0x0);
  }
  else {
    CRYPTO_THREAD_unlock(_global_engine_lock);
    OPENSSL_sk_free(arg[10]);
    CRYPTO_free(arg);
    arg = plVar6;
  }
LAB_00100101:
  if (*arg != 0) {
    ERR_new();
    ERR_set_debug("crypto/engine/eng_dyn.c",0x133,"dynamic_ctrl");
    ERR_set_error(0x26,100,0);
    goto LAB_00100260;
  }
  switch(param_2) {
  case 200:
    if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
      CRYPTO_free((void *)arg[3]);
      bVar10 = false;
      pcVar5 = (char *)0x0;
    }
    else {
      CRYPTO_free((void *)arg[3]);
      pcVar5 = CRYPTO_strdup(param_4,"crypto/engine/eng_dyn.c",0x13d);
      bVar10 = pcVar5 != (char *)0x0;
    }
    arg[3] = (long)pcVar5;
    goto LAB_00100262;
  case 0xc9:
    *(uint *)(arg + 4) = (uint)(param_3 != 0);
    break;
  case 0xca:
    if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
      CRYPTO_free((void *)arg[5]);
      bVar10 = false;
      pcVar5 = (char *)0x0;
    }
    else {
      CRYPTO_free((void *)arg[5]);
      pcVar5 = CRYPTO_strdup(param_4,"crypto/engine/eng_dyn.c",0x14a);
      bVar10 = pcVar5 != (char *)0x0;
    }
    arg[5] = (long)pcVar5;
    goto LAB_00100262;
  case 0xcb:
    if (2 < param_3) {
      ERR_new();
      uVar9 = 0x150;
LAB_001004e9:
      ERR_set_debug("crypto/engine/eng_dyn.c",uVar9,"dynamic_ctrl");
      ERR_set_error(0x26,0x8f,0);
      goto LAB_00100260;
    }
    *(int *)(arg + 6) = (int)param_3;
    break;
  case 0xcc:
    if (2 < param_3) {
      ERR_new();
      uVar9 = 0x159;
      goto LAB_001004e9;
    }
    *(int *)(arg + 9) = (int)param_3;
    break;
  case 0xcd:
    if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
      ERR_new();
      uVar9 = 0x161;
      goto LAB_001004e9;
    }
    pcVar5 = CRYPTO_strdup(param_4,"crypto/engine/eng_dyn.c",0x165);
    if (pcVar5 != (char *)0x0) {
      iVar2 = OPENSSL_sk_push(arg[10],pcVar5);
      if (iVar2 != 0) break;
      CRYPTO_free(pcVar5);
      ERR_new();
      ERR_set_debug("crypto/engine/eng_dyn.c",0x16a,"dynamic_ctrl");
      ERR_set_error(0x26,0x8000f,0);
    }
    goto LAB_00100260;
  case 0xce:
    pDVar4 = DSO_new();
    *arg = (long)pDVar4;
    if (pDVar4 != (DSO *)0x0) {
      if (arg[3] == 0) {
        if (arg[5] == 0) goto LAB_00100260;
        DSO_ctrl(pDVar4,2,2,(void *)0x0);
        pcVar5 = DSO_convert_filename((DSO *)*arg,(char *)arg[5]);
        arg[3] = (long)pcVar5;
      }
      if ((int)arg[9] == 2) {
LAB_0010030f:
        iVar2 = OPENSSL_sk_num(arg[10]);
        if (0 < iVar2) {
          iVar1 = 0;
          do {
            pcVar5 = (char *)OPENSSL_sk_value(arg[10],iVar1);
            pcVar5 = DSO_merge((DSO *)*arg,(char *)arg[3],pcVar5);
            if (pcVar5 == (char *)0x0) break;
            pDVar4 = DSO_load((DSO *)*arg,pcVar5,(DSO_METHOD *)0x0,0);
            if (pDVar4 != (DSO *)0x0) {
              CRYPTO_free(pcVar5);
              goto LAB_00100745;
            }
            iVar1 = iVar1 + 1;
            CRYPTO_free(pcVar5);
          } while (iVar2 != iVar1);
        }
      }
      else {
        pDVar4 = DSO_load((DSO *)*arg,(char *)arg[3],(DSO_METHOD *)0x0,0);
        if (pDVar4 != (DSO *)0x0) {
LAB_00100745:
          pDVar7 = DSO_bind_func((DSO *)*arg,(char *)arg[8]);
          arg[2] = (long)pDVar7;
          if (pDVar7 == (DSO_FUNC_TYPE)0x0) {
            DSO_free((DSO *)*arg);
            *arg = 0;
            ERR_new();
            ERR_set_debug("crypto/engine/eng_dyn.c",0x1c3,"dynamic_load");
            ERR_set_error(0x26,0x68,0);
            goto LAB_00100260;
          }
          if ((int)arg[4] == 0) {
            pDVar7 = DSO_bind_func((DSO *)*arg,(char *)arg[7]);
            arg[1] = (long)pDVar7;
            if ((pDVar7 != (DSO_FUNC_TYPE)0x0) && (uVar8 = (*pDVar7)(0x30000), 0x2ffff < uVar8)) {
              ERR_set_mark();
              pDVar7 = DSO_bind_func((DSO *)*arg,"EVP_PKEY_base_id");
              ERR_pop_to_mark();
              if (pDVar7 == (DSO_FUNC_TYPE)0x0) goto LAB_001007b7;
            }
            *(undefined1 (*) [16])(arg + 1) = (undefined1  [16])0x0;
            DSO_free((DSO *)*arg);
            *arg = 0;
            ERR_new();
            ERR_set_debug("crypto/engine/eng_dyn.c",0x1dd,"dynamic_load");
            ERR_set_error(0x26,0x91,0);
          }
          else {
LAB_001007b7:
            local_128 = *(undefined8 *)param_1;
            uStack_120 = *(undefined8 *)(param_1 + 8);
            local_118 = *(undefined8 *)(param_1 + 0x10);
            uStack_110 = *(undefined8 *)(param_1 + 0x18);
            local_108 = *(undefined8 *)(param_1 + 0x20);
            uStack_100 = *(undefined8 *)(param_1 + 0x28);
            local_f8 = *(undefined8 *)(param_1 + 0x30);
            uStack_f0 = *(undefined8 *)(param_1 + 0x38);
            local_e8 = *(undefined8 *)(param_1 + 0x40);
            uStack_e0 = *(undefined8 *)(param_1 + 0x48);
            local_d8 = *(undefined8 *)(param_1 + 0x50);
            uStack_d0 = *(undefined8 *)(param_1 + 0x58);
            local_c8 = *(undefined8 *)(param_1 + 0x60);
            uStack_c0 = *(undefined8 *)(param_1 + 0x68);
            local_b8 = *(undefined8 *)(param_1 + 0x70);
            uStack_b0 = *(undefined8 *)(param_1 + 0x78);
            local_a8 = *(undefined8 *)(param_1 + 0x80);
            uStack_a0 = *(undefined8 *)(param_1 + 0x88);
            local_98 = *(undefined8 *)(param_1 + 0x90);
            uStack_90 = *(undefined8 *)(param_1 + 0x98);
            local_88 = *(undefined8 *)(param_1 + 0xa0);
            uStack_80 = *(undefined8 *)(param_1 + 0xa8);
            local_78 = *(undefined8 *)(param_1 + 0xb0);
            uStack_70 = *(undefined8 *)(param_1 + 0xb8);
            local_68 = *(undefined8 *)(param_1 + 0xc0);
            uStack_60 = *(undefined8 *)(param_1 + 200);
            local_58 = *(undefined8 *)(param_1 + 0xd0);
            uStack_50 = *(undefined8 *)(param_1 + 0xd8);
            local_148 = ENGINE_get_static_state();
            CRYPTO_get_mem_functions(&local_140,&local_138,&local_130);
            engine_set_all_null(param_1);
            iVar2 = engine_add_dynamic_id(param_1,arg[2],1);
            if ((iVar2 != 0) && (iVar2 = (*(code *)arg[2])(param_1,arg[5],&local_148), iVar2 != 0))
            {
              if ((0 < (int)arg[6]) && (iVar2 = ENGINE_add(param_1), iVar2 == 0)) {
                if (1 < (int)arg[6]) {
                  ERR_new();
                  ERR_set_debug("crypto/engine/eng_dyn.c",0x20e,"dynamic_load");
                  ERR_set_error(0x26,0x67,0);
                  goto LAB_00100260;
                }
                ERR_clear_error();
              }
              break;
            }
            engine_remove_dynamic_id(param_1,1);
            *(undefined1 (*) [16])(arg + 1) = (undefined1  [16])0x0;
            DSO_free((DSO *)*arg);
            *arg = 0;
            ERR_new();
            ERR_set_debug("crypto/engine/eng_dyn.c",0x1fe,"dynamic_load");
            ERR_set_error(0x26,0x6d,0);
            *(undefined8 *)param_1 = local_128;
            *(undefined8 *)(param_1 + 8) = uStack_120;
            *(undefined8 *)(param_1 + 0x10) = local_118;
            *(undefined8 *)(param_1 + 0x18) = uStack_110;
            *(undefined8 *)(param_1 + 0x20) = local_108;
            *(undefined8 *)(param_1 + 0x28) = uStack_100;
            *(undefined8 *)(param_1 + 0x30) = local_f8;
            *(undefined8 *)(param_1 + 0x38) = uStack_f0;
            *(undefined8 *)(param_1 + 0x40) = local_e8;
            *(undefined8 *)(param_1 + 0x48) = uStack_e0;
            *(undefined8 *)(param_1 + 0x50) = local_d8;
            *(undefined8 *)(param_1 + 0x58) = uStack_d0;
            *(undefined8 *)(param_1 + 0x60) = local_c8;
            *(undefined8 *)(param_1 + 0x68) = uStack_c0;
            *(undefined8 *)(param_1 + 0x70) = local_b8;
            *(undefined8 *)(param_1 + 0x78) = uStack_b0;
            *(undefined8 *)(param_1 + 0x80) = local_a8;
            *(undefined8 *)(param_1 + 0x88) = uStack_a0;
            *(undefined8 *)(param_1 + 0x90) = local_98;
            *(undefined8 *)(param_1 + 0x98) = uStack_90;
            *(undefined8 *)(param_1 + 0xa0) = local_88;
            *(undefined8 *)(param_1 + 0xa8) = uStack_80;
            *(undefined8 *)(param_1 + 0xb0) = local_78;
            *(undefined8 *)(param_1 + 0xb8) = uStack_70;
            *(undefined8 *)(param_1 + 0xc0) = local_68;
            *(undefined8 *)(param_1 + 200) = uStack_60;
            *(undefined8 *)(param_1 + 0xd0) = local_58;
            *(undefined8 *)(param_1 + 0xd8) = uStack_50;
          }
          goto LAB_00100260;
        }
        if ((int)arg[9] != 0) goto LAB_0010030f;
      }
      ERR_new();
      ERR_set_debug("crypto/engine/eng_dyn.c",0x1b6,"dynamic_load");
      ERR_set_error(0x26,0x84,0);
      DSO_free((DSO *)*arg);
      *arg = 0;
    }
    goto LAB_00100260;
  default:
    ERR_new();
    ERR_set_debug("crypto/engine/eng_dyn.c",0x172,"dynamic_ctrl");
    ERR_set_error(0x26,0x77,0);
LAB_00100260:
    bVar10 = false;
    goto LAB_00100262;
  }
  bVar10 = true;
LAB_00100262:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar10;
}



undefined8 dynamic_finish(void)

{
  return 0;
}



void engine_load_dynamic_int(void)

{
  int iVar1;
  ENGINE *e;
  
  e = ENGINE_new();
  if (e == (ENGINE *)0x0) {
    return;
  }
  iVar1 = ENGINE_set_id(e,"dynamic");
  if (iVar1 != 0) {
    iVar1 = ENGINE_set_name(e,"Dynamic engine loading support");
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_init_function(e,dynamic_init);
      if (iVar1 != 0) {
        iVar1 = ENGINE_set_finish_function(e,dynamic_finish);
        if (iVar1 != 0) {
          iVar1 = ENGINE_set_ctrl_function(e,dynamic_ctrl);
          if (iVar1 != 0) {
            iVar1 = ENGINE_set_flags(e,4);
            if (iVar1 != 0) {
              iVar1 = ENGINE_set_cmd_defns(e,(ENGINE_CMD_DEFN *)dynamic_cmd_defns);
              if (iVar1 != 0) {
                ERR_set_mark();
                ENGINE_add(e);
                ENGINE_free(e);
                ERR_pop_to_mark();
                return;
              }
            }
          }
        }
      }
    }
  }
  ENGINE_free(e);
  return;
}


