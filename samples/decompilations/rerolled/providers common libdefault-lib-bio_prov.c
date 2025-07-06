undefined8 bio_core_new(undefined8 param_1) {
   BIO_set_init(param_1, 1);
   return 1;
}undefined8 ossl_prov_bio_from_dispatch(int *param_1) {
   int *piVar1;
   int iVar2;
   iVar2 = *param_1;
   while (iVar2 != 0) {
      switch (iVar2) {
         case 0x28:
      if (c_bio_new_file == 0) {
        c_bio_new_file = *(long *)(param_1 + 2);
      }
      break;
         case 0x29:
      if (c_bio_new_membuf == 0) {
        c_bio_new_membuf = *(long *)(param_1 + 2);
      }
      break;
         case 0x2a:
      if (c_bio_read_ex == 0) {
        c_bio_read_ex = *(long *)(param_1 + 2);
      }
      break;
         case 0x2b:
      if (c_bio_write_ex == 0) {
        c_bio_write_ex = *(long *)(param_1 + 2);
      }
      break;
         case 0x2c:
      if (c_bio_up_ref == 0) {
        c_bio_up_ref = *(long *)(param_1 + 2);
      }
      break;
         case 0x2d:
      if (c_bio_free == 0) {
        c_bio_free = *(long *)(param_1 + 2);
      }
      break;
         case 0x2e:
      if (c_bio_vprintf == 0) {
        c_bio_vprintf = *(long *)(param_1 + 2);
      }
      break;
         case 0x30:
      if (c_bio_puts == 0) {
        c_bio_puts = *(long *)(param_1 + 2);
      }
      break;
         case 0x31:
      if (c_bio_gets == 0) {
        c_bio_gets = *(long *)(param_1 + 2);
      }
      break;
         case 0x32:
      if (c_bio_ctrl == 0) {
        c_bio_ctrl = *(long *)(param_1 + 2);
      }
      }
      piVar1 = param_1 + 4;
      param_1 = param_1 + 4;
      iVar2 = *piVar1;
   };
   return 1;
}undefined8 ossl_prov_bio_new_file(void) {
   undefined8 uVar1;
   if (c_bio_new_file != (code*)0x0) {
      for (int i_1913 = 0; i_1913 < 2; i_1913++) {
         /* WARNING: Could not recover jumptable at 0x001001b0. Too many branches */
      }
      uVar1 = ( *c_bio_new_file )();
      return uVar1;
   }
   return 0;
}undefined8 ossl_prov_bio_new_membuf(void) {
   undefined8 uVar1;
   if (c_bio_new_membuf != (code*)0x0) {
      for (int i_1914 = 0; i_1914 < 2; i_1914++) {
         /* WARNING: Could not recover jumptable at 0x001001d0. Too many branches */
      }
      uVar1 = ( *c_bio_new_membuf )();
      return uVar1;
   }
   return 0;
}undefined8 ossl_prov_bio_read_ex(void) {
   undefined8 uVar1;
   if (c_bio_read_ex != (code*)0x0) {
      for (int i_1915 = 0; i_1915 < 2; i_1915++) {
         /* WARNING: Could not recover jumptable at 0x001001f0. Too many branches */
      }
      uVar1 = ( *c_bio_read_ex )();
      return uVar1;
   }
   return 0;
}void bio_core_read_ex(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   undefined8 uVar1;
   uVar1 = BIO_get_data();
   ossl_prov_bio_read_ex(uVar1, param_2, param_3, param_4);
   return;
}undefined8 ossl_prov_bio_write_ex(void) {
   undefined8 uVar1;
   if (c_bio_write_ex != (code*)0x0) {
      for (int i_1916 = 0; i_1916 < 2; i_1916++) {
         /* WARNING: Could not recover jumptable at 0x00100240. Too many branches */
      }
      uVar1 = ( *c_bio_write_ex )();
      return uVar1;
   }
   return 0;
}void bio_core_write_ex(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
   undefined8 uVar1;
   uVar1 = BIO_get_data();
   ossl_prov_bio_write_ex(uVar1, param_2, param_3, param_4);
   return;
}undefined8 ossl_prov_bio_gets(void) {
   undefined8 uVar1;
   if (c_bio_gets != (code*)0x0) {
      for (int i_1917 = 0; i_1917 < 2; i_1917++) {
         /* WARNING: Could not recover jumptable at 0x00100290. Too many branches */
      }
      uVar1 = ( *c_bio_gets )();
      return uVar1;
   }
   return 0xffffffff;
}void bio_core_gets(undefined8 param_1, undefined8 param_2, undefined4 param_3) {
   undefined8 uVar1;
   uVar1 = BIO_get_data();
   ossl_prov_bio_gets(uVar1, param_2, param_3);
   return;
}undefined8 ossl_prov_bio_puts(void) {
   undefined8 uVar1;
   if (c_bio_puts != (code*)0x0) {
      for (int i_1918 = 0; i_1918 < 2; i_1918++) {
         /* WARNING: Could not recover jumptable at 0x001002e0. Too many branches */
      }
      uVar1 = ( *c_bio_puts )();
      return uVar1;
   }
   return 0xffffffff;
}void bio_core_puts(undefined8 param_1, undefined8 param_2) {
   undefined8 uVar1;
   uVar1 = BIO_get_data();
   ossl_prov_bio_puts(uVar1, param_2);
   return;
}undefined8 ossl_prov_bio_ctrl(void) {
   undefined8 uVar1;
   if (c_bio_ctrl != (code*)0x0) {
      for (int i_1919 = 0; i_1919 < 2; i_1919++) {
         /* WARNING: Could not recover jumptable at 0x00100320. Too many branches */
      }
      uVar1 = ( *c_bio_ctrl )();
      return uVar1;
   }
   return 0xffffffff;
}long bio_core_ctrl(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4) {
   int iVar1;
   undefined8 uVar2;
   uVar2 = BIO_get_data();
   iVar1 = ossl_prov_bio_ctrl(uVar2, param_2, param_3, param_4);
   return (long)iVar1;
}undefined8 ossl_prov_bio_up_ref(void) {
   undefined8 uVar1;
   if (c_bio_up_ref != (code*)0x0) {
      for (int i_1920 = 0; i_1920 < 2; i_1920++) {
         /* WARNING: Could not recover jumptable at 0x00100370. Too many branches */
      }
      uVar1 = ( *c_bio_up_ref )();
      return uVar1;
   }
   return 0;
}undefined8 ossl_prov_bio_free(void) {
   undefined8 uVar1;
   if (c_bio_free != (code*)0x0) {
      for (int i_1921 = 0; i_1921 < 2; i_1921++) {
         /* WARNING: Could not recover jumptable at 0x00100390. Too many branches */
      }
      uVar1 = ( *c_bio_free )();
      return uVar1;
   }
   return 0;
}undefined8 bio_core_free(undefined8 param_1) {
   undefined8 uVar1;
   BIO_set_init(param_1, 0);
   uVar1 = BIO_get_data(param_1);
   ossl_prov_bio_free(uVar1);
   return 1;
}undefined8 ossl_prov_bio_vprintf(void) {
   undefined8 uVar1;
   if (c_bio_vprintf != (code*)0x0) {
      for (int i_1922 = 0; i_1922 < 2; i_1922++) {
         /* WARNING: Could not recover jumptable at 0x001003e0. Too many branches */
      }
      uVar1 = ( *c_bio_vprintf )();
      return uVar1;
   }
   return 0xffffffff;
}void ossl_prov_bio_printf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14) {
   char in_AL;
   long in_FS_OFFSET;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined1 *local_d0;
   undefined1 *local_c8;
   long local_c0;
   undefined1 local_b8[16];
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
   local_c0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d0 = &stack0x00000008;
   local_d8 = 0x10;
   local_c8 = local_b8;
   local_d4 = 0x30;
   local_a8 = param_11;
   local_a0 = param_12;
   local_98 = param_13;
   local_90 = param_14;
   ossl_prov_bio_vprintf(param_9, param_10, &local_d8);
   if (local_c0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}long ossl_bio_prov_init_bio_method(void) {
   int iVar1;
   long lVar2;
   long lVar3;
   lVar2 = BIO_meth_new(0x419, "BIO to Core filter");
   if (( ( ( ( lVar2 == 0 ) || ( iVar1 = BIO_meth_set_write_ex(lVar2, bio_core_write_ex) ),iVar1 == 0 ) ) || ( iVar1 = BIO_meth_set_read_ex(lVar2, bio_core_read_ex) ),iVar1 == 0 )) {
      lVar3 = 0;
      BIO_meth_free(lVar2);
   }
   return lVar3;
}BIO *ossl_bio_new_from_core_bio(undefined8 param_1, undefined8 param_2) {
   int iVar1;
   BIO_METHOD *type;
   BIO *a;
   type = (BIO_METHOD*)ossl_prov_ctx_get0_core_bio_method();
   if (type != (BIO_METHOD*)0x0) {
      a = BIO_new(type);
      if (a != (BIO*)0x0) {
         iVar1 = ossl_prov_bio_up_ref(param_2);
         if (iVar1 != 0) {
            BIO_set_data(a, param_2);
            return a;
         }
         BIO_free(a);
      }
   }
   return (BIO*)0x0;
}
