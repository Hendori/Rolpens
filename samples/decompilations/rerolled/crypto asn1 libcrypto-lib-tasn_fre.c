void ossl_asn1_primitive_free(long *param_1, char *param_2, int param_3) {
   long lVar1;
   code *UNRECOVERED_JUMPTABLE;
   int *piVar2;
   int iVar3;
   ASN1_OBJECT *a;
   if (param_2 == (char*)0x0) {
      piVar2 = (int*)*param_1;
      a = *(ASN1_OBJECT**)( piVar2 + 2 );
      if (a == (ASN1_OBJECT*)0x0) {
         return;
      }
      iVar3 = *piVar2;
      if (iVar3 == 1) {
         piVar2[2] = -1;
         return;
      }
      param_1 = (long*)( piVar2 + 2 );
      if (iVar3 < 2) goto LAB_00100063;
      if (iVar3 == 5) goto LAB_001000c0;
      LAB_001000b1:if (iVar3 == 6) {
         ASN1_OBJECT_free(a);
         goto LAB_001000c0;
      }
   } else {
      lVar1 = *(long*)( param_2 + 0x20 );
      if (param_3 == 0) {
         if (lVar1 != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( lVar1 + 0x18 );
            goto joined_r0x0010003c;
         }
      } else if (lVar1 != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( lVar1 + 0x20 );
         joined_r0x0010003c:if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
            for (int i_1708 = 0; i_1708 < 2; i_1708++) {
               /* WARNING: Could not recover jumptable at 0x0010002b. Too many branches */
            }
            ( *UNRECOVERED_JUMPTABLE )(param_1);
            return;
         }
      }
      if (*param_2 == '\x05') {
         a = (ASN1_OBJECT*)*param_1;
         if (a == (ASN1_OBJECT*)0x0) {
            return;
         }
      } else {
         iVar3 = (int)*(undefined8*)( param_2 + 8 );
         if (iVar3 == 1) {
            *(int*)param_1 = (int)*(undefined8*)( param_2 + 0x28 );
            return;
         }
         a = (ASN1_OBJECT*)*param_1;
         if (a == (ASN1_OBJECT*)0x0) {
            return;
         }
         if (iVar3 == 5) goto LAB_001000c0;
         if (5 < iVar3) goto LAB_001000b1;
         LAB_00100063:if (iVar3 == -4) {
            ossl_asn1_primitive_free(param_1, 0, 0);
            CRYPTO_free((void*)*param_1);
            goto LAB_001000c0;
         }
      }
   }
   ossl_asn1_string_embed_free(a, param_3);
   LAB_001000c0:*param_1 = 0;
   return;
}void ossl_asn1_item_embed_free(long *param_1, char *param_2, int param_3) {
   char cVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   char *pcVar5;
   code *pcVar6;
   long lVar7;
   long lVar8;
   char *pcStack_58;
   undefined8 uStack_50;
   long local_40;
   lVar7 = *(long*)( param_2 + 0x20 );
   if (param_1 == (long*)0x0) {
      return;
   }
   cVar1 = *param_2;
   if (cVar1 == '\0') {
      if (*(long*)( param_2 + 0x10 ) != 0) {
         ossl_asn1_template_free();
         return;
      }
      switchD_00100160_caseD_5:ossl_asn1_primitive_free(param_1, param_2, param_3);
      return;
   }
   if (*param_1 == 0) {
      return;
   }
   if (lVar7 == 0) {
      if (cVar1 == '\x02') {
         LAB_001003f0:uStack_50 = 0x1003fb;
         iVar2 = ossl_asn1_get_choice_selector(param_1, param_2);
         if (( -1 < iVar2 ) && ( (long)iVar2 < *(long*)( param_2 + 0x18 ) )) {
            lVar7 = *(long*)( param_2 + 0x10 ) + (long)iVar2 * 0x28;
            uStack_50 = 0x100426;
            uVar4 = ossl_asn1_get_field_ptr(param_1, lVar7);
            uStack_50 = 0x100431;
            ossl_asn1_template_free(uVar4, lVar7);
         }
         goto LAB_001002d0;
      }
      if (cVar1 < '\x03') {
         if (cVar1 != '\x01') {
            return;
         }
      } else {
         if (cVar1 == '\x05') goto switchD_00100160_caseD_5;
         if (cVar1 != '\x06') {
            return;
         }
      }
      uStack_50 = 0x10034e;
      iVar2 = ossl_asn1_do_lock(param_1, 0xffffffff, param_2);
      if (iVar2 == 0) {
         LAB_00100356:pcVar6 = (code*)0x0;
         uStack_50 = 0x100364;
         ossl_asn1_enc_free(param_1, param_2);
         lVar7 = *(long*)( param_2 + 0x10 ) + *(long*)( param_2 + 0x18 ) * 0x28;
         if (0 < *(long*)( param_2 + 0x18 )) {
            LAB_0010037d:lVar8 = 0;
            do {
               while (true) {
                  lVar7 = lVar7 + -0x28;
                  uStack_50 = 0x100392;
                  lVar3 = ossl_asn1_do_adb(*param_1, lVar7, 0);
                  if (lVar3 == 0) break;
                  lVar8 = lVar8 + 1;
                  uStack_50 = 0x1003ab;
                  local_40 = lVar3;
                  uVar4 = ossl_asn1_get_field_ptr(param_1, lVar3);
                  uStack_50 = 0x1003b8;
                  ossl_asn1_template_free(uVar4, local_40);
                  if (*(long*)( param_2 + 0x18 ) <= lVar8) goto LAB_001003be;
               };
               lVar8 = lVar8 + 1;
            } while ( lVar8 < *(long*)( param_2 + 0x18 ) );
            LAB_001003be:if (pcVar6 != (code*)0x0) goto LAB_00100208;
         }
         goto LAB_00100218;
      }
      LAB_00100168:if (param_3 != 0) {
         pcVar5 = "assertion failed: embed == 0";
         uStack_50 = 0x10044e;
         OPENSSL_die("assertion failed: embed == 0", "crypto/asn1/tasn_fre.c", 0x5a);
         pcStack_58 = pcVar5;
         ossl_asn1_item_embed_free(&pcStack_58);
         return;
      }
      LAB_00100171:*param_1 = 0;
   } else {
      pcVar6 = *(code**)( lVar7 + 0x18 );
      switch (cVar1) {
         case '\x01':
         case '\x06':
      uStack_50 = 0x1001bd;
      iVar2 = ossl_asn1_do_lock(param_1,0xffffffff,param_2);
      if (iVar2 != 0) goto LAB_00100168;
      if (pcVar6 == (code *)0x0) goto LAB_00100356;
      uStack_50 = 0x1001da;
      iVar2 = (*pcVar6)(2,param_1,param_2,0);
      if (iVar2 == 2) {
        return;
      }
      uStack_50 = 0x1001ea;
      ossl_asn1_enc_free(param_1,param_2);
      lVar7 = *(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x18) * 0x28;
      if (0 < *(long *)(param_2 + 0x18)) goto LAB_0010037d;
LAB_00100208:
      uStack_50 = 0x100218;
      (*pcVar6)(3,param_1,param_2,0);
LAB_00100218:
      if (param_3 != 0) {
        return;
      }
      uStack_50 = 0x100236;
      CRYPTO_free((void *)*param_1);
      goto LAB_00100171;
         case '\x02':
      if (pcVar6 == (code *)0x0) goto LAB_001003f0;
      uStack_50 = 0x100279;
      iVar2 = (*pcVar6)(2,param_1,param_2,0);
      if (iVar2 == 2) {
        return;
      }
      uStack_50 = 0x10028d;
      iVar2 = ossl_asn1_get_choice_selector(param_1,param_2);
      if ((-1 < iVar2) && ((long)iVar2 < *(long *)(param_2 + 0x18))) {
        lVar7 = (long)iVar2 * 0x28 + *(long *)(param_2 + 0x10);
        uStack_50 = 0x1002af;
        uVar4 = ossl_asn1_get_field_ptr(param_1,lVar7);
        uStack_50 = 0x1002ba;
        ossl_asn1_template_free(uVar4,lVar7);
      }
      uStack_50 = 0x1002d0;
      (*pcVar6)(3,param_1,param_2,0);
LAB_001002d0:
      if (param_3 == 0) {
        uStack_50 = 0x1002ee;
        CRYPTO_free((void *)*param_1);
        *param_1 = 0;
      }
      break;
         case '\x04':
      if (*(code **)(lVar7 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010031b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x10))();
        return;
      }
      break;
         case '\x05':
      goto switchD_00100160_caseD_5;
      }
   }
   return;
}void ASN1_item_free(ASN1_VALUE *val, ASN1_ITEM *it) {
   ASN1_VALUE *local_10[2];
   local_10[0] = val;
   ossl_asn1_item_embed_free(local_10, it, 0);
   return;
}void ASN1_item_ex_free(ASN1_VALUE **pval, ASN1_ITEM *it) {
   ossl_asn1_item_embed_free(pval, it, 0);
   return;
}void ossl_asn1_template_free(undefined8 ***param_1, ulong *param_2) {
   ulong uVar1;
   undefined8 **ppuVar2;
   int iVar3;
   undefined8 uVar4;
   int iVar5;
   uint uVar6;
   long in_FS_OFFSET;
   undefined8 **local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *param_2;
   uVar6 = (uint)uVar1 & 0x1000;
   if (( uVar1 & 0x1000 ) != 0) {
      local_50 = param_1;
      param_1 = &local_50;
   }
   if (( uVar1 & 6 ) == 0) {
      uVar4 = ( *(code*)param_2[4] )();
      ossl_asn1_item_embed_free(param_1, uVar4, uVar6);
   } else {
      ppuVar2 = *param_1;
      iVar5 = 0;
      while (true) {
         iVar3 = OPENSSL_sk_num(ppuVar2);
         if (iVar3 <= iVar5) break;
         local_48 = OPENSSL_sk_value(ppuVar2, iVar5);
         uVar4 = ( *(code*)param_2[4] )();
         ossl_asn1_item_embed_free(&local_48, uVar4, uVar6);
         iVar5 = iVar5 + 1;
      };
      OPENSSL_sk_free(ppuVar2);
      *param_1 = (undefined8**)0x0;
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
