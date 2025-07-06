int der_cmp(undefined8 *param_1, undefined8 *param_2) {
   int iVar1;
   int iVar2;
   int iVar3;
   iVar1 = *(int*)( param_2 + 1 );
   iVar2 = *(int*)( param_1 + 1 );
   iVar3 = iVar2;
   if (iVar1 <= iVar2) {
      iVar3 = iVar1;
   }
   iVar3 = memcmp((void*)*param_1, (void*)*param_2, (long)iVar3);
   if (iVar3 == 0) {
      iVar3 = iVar2 - iVar1;
   }
   return iVar3;
}/* WARNING: Type propagation algorithm not settling */ulong asn1_i2d_ex_primitive(long *param_1, uchar **param_2, char *param_3, int param_4, int param_5) {
   int iVar1;
   code *pcVar2;
   undefined1 *__src;
   bool bVar3;
   long *plVar4;
   uint uVar5;
   ulong uVar6;
   long lVar7;
   int *piVar8;
   size_t __n;
   uchar *******pppppppuVar9;
   int constructed;
   int tag;
   int length;
   long in_FS_OFFSET;
   undefined1 local_4d;
   int local_4c;
   uchar *******local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = *(long*)( param_3 + 8 );
   local_4c = (int)lVar7;
   if (( *(long*)( param_3 + 0x20 ) == 0 ) || ( pcVar2 = *(code**)( *(long*)( param_3 + 0x20 ) + 0x30 ) ),pcVar2 == (code*)0x0) {
      plVar4 = param_1;
      if (*param_3 == '\0') {
         if (lVar7 == 1) {
            if ((int)*param_1 != -1) {
               if ((int)*param_1 == 0) {
                  if (*(long*)( param_3 + 0x28 ) != 0) goto LAB_00100460;
               } else if (*(long*)( param_3 + 0x28 ) < 1) {
                  LAB_00100460:uVar6 = 1;
                  tag = 1;
                  bVar3 = true;
                  goto LAB_001000e5;
               }
            }
         } else {
            piVar8 = (int*)*param_1;
            if (piVar8 != (int*)0x0) goto LAB_001001d6;
         }
      } else {
         piVar8 = (int*)*param_1;
         if (piVar8 != (int*)0x0) {
            if (*param_3 == '\x05') {
               local_4c = piVar8[1];
            } else {
               LAB_001001d6:if (lVar7 == -4) {
                  local_4c = *piVar8;
                  plVar4 = (long*)( piVar8 + 2 );
               }
            }
            if (local_4c + 1U < 0xc) {
               for (int i_404 = 0; i_404 < 2; i_404++) {
                  /* WARNING: Could not recover jumptable at 0x001001bc. Too many branches */
               }
               uVar6 = ( *(code*)( &DAT_001013a0 + *(int*)( &DAT_001013a0 + ( ulong )(local_4c + 1U) * 4 ) ) )(param_1, plVar4, &DAT_001013a0 + *(int*)( &DAT_001013a0 + ( ulong )(local_4c + 1U) * 4 ));
               return uVar6;
            }
            if (( *(long*)( param_3 + 0x28 ) != 0x800 ) || ( ( ( (uint*)*plVar4 )[4] & 0x10 ) == 0 )) {
               uVar5 = *(uint*)*plVar4;
               goto LAB_001000b5;
            }
            bVar3 = 1 < local_4c - 0x10U && local_4c != -3;
            goto LAB_0010026d;
         }
      }
   } else {
      uVar5 = ( *pcVar2 )(param_1, 0, &local_4c, param_3);
      LAB_001000b5:uVar6 = (ulong)uVar5;
      bVar3 = 1 < local_4c - 0x10U && local_4c != -3;
      if (uVar5 != 0xffffffff) {
         tag = local_4c;
         if (uVar5 == 0xfffffffe) {
            LAB_0010026d:constructed = 2;
            uVar6 = 0;
            tag = local_4c;
         } else {
            LAB_001000e5:constructed = 0;
         }
         if (param_4 != -1) {
            tag = param_4;
         }
         length = (int)uVar6;
         if (param_2 != (uchar**)0x0) {
            if (bVar3) {
               ASN1_put_object(param_2, constructed, length, tag, param_5);
            }
            local_48 = (uchar*******)*param_2;
            if (( *(long*)( param_3 + 0x20 ) == 0 ) || ( pcVar2 = *(code**)( *(long*)( param_3 + 0x20 ) + 0x30 ) ),pcVar2 == (code*)0x0) {
               if (*param_3 == '\0') {
                  lVar7 = *(long*)( param_3 + 8 );
                  if (lVar7 != 1) {
                     piVar8 = (int*)*param_1;
                     if (piVar8 == (int*)0x0) goto switchD_00100261_caseD_ffffffff;
                     LAB_00100239:if (lVar7 == -4) {
                        local_4c = *piVar8;
                        param_1 = (long*)( piVar8 + 2 );
                     }
                  }
               } else {
                  piVar8 = (int*)*param_1;
                  if (piVar8 == (int*)0x0) goto switchD_00100261_caseD_ffffffff;
                  if (*param_3 != '\x05') {
                     lVar7 = *(long*)( param_3 + 8 );
                     goto LAB_00100239;
                  }
                  local_4c = piVar8[1];
               }
               switch (local_4c) {
                  default:
            piVar8 = (int *)*param_1;
            if ((*(long *)(param_3 + 0x28) == 0x800) && ((*(byte *)(piVar8 + 4) & 0x10) != 0)) {
              if (local_48 != (uchar *******)0x0) {
                *(uchar ********)(piVar8 + 2) = local_48;
                *piVar8 = 0;
              }
            }
            else {
              __n = (size_t)*piVar8;
              __src = *(undefined1 **)(piVar8 + 2);
              if (*piVar8 != 0) goto joined_r0x001004a9;
            }
            break;
                  case 1:
            iVar1 = (int)*param_1;
            if (iVar1 != -1) {
              if (*(long *)(param_3 + 8) == -4) {
LAB_0010050c:
                local_4d = (undefined1)iVar1;
                __n = 1;
                __src = &local_4d;
                goto joined_r0x001004a9;
              }
              if (iVar1 == 0) {
                if (*(long *)(param_3 + 0x28) != 0) goto LAB_0010050c;
              }
              else if (*(long *)(param_3 + 0x28) < 1) goto LAB_0010050c;
            }
            break;
                  case 2:
                  case 10:
            pppppppuVar9 = local_48;
            if (local_48 != (uchar *******)0x0) {
              pppppppuVar9 = (uchar *******)&local_48;
            }
            ossl_i2c_ASN1_INTEGER(*param_1,pppppppuVar9);
            break;
                  case 3:
            pppppppuVar9 = local_48;
            if (local_48 != (uchar *******)0x0) {
              pppppppuVar9 = (uchar *******)&local_48;
            }
            ossl_i2c_ASN1_BIT_STRING(*param_1,pppppppuVar9);
            break;
                  case 6:
            __src = *(undefined1 **)(*param_1 + 0x18);
            iVar1 = *(int *)(*param_1 + 0x14);
            __n = (size_t)iVar1;
            if (__src != (undefined1 *)0x0 && iVar1 != 0) {
joined_r0x001004a9:
              if (local_48 != (uchar *******)0x0) {
                memcpy(local_48,__src,__n);
              }
            }
            break;
                  case -1:
                  case 5:
            break;
               }
            } else {
               ( *pcVar2 )(param_1, local_48, &local_4c, param_3);
            }
            switchD_00100261_caseD_ffffffff:if (constructed == 0) {
               *param_2 = *param_2 + length;
            } else {
               ASN1_put_eoc(param_2);
            }
         }
         if (bVar3) {
            uVar5 = ASN1_object_size(constructed, length, tag);
            uVar6 = (ulong)uVar5;
         }
         goto LAB_00100150;
      }
   }
   uVar6 = 0;
   LAB_00100150:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}int ASN1_item_ex_i2d(ASN1_VALUE **pval, uchar **out, ASN1_ITEM *it, int tag, int aclass) {
   void *pvVar1;
   int iVar2;
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   undefined4 in_register_0000000c;
   ASN1_TEMPLATE *pAVar6;
   ulong uVar7;
   undefined4 in_register_00000084;
   ulong uVar8;
   long lVar9;
   long in_FS_OFFSET;
   code *local_58;
   int local_4c;
   int local_44;
   long local_40;
   uVar8 = CONCAT44(in_register_00000084, aclass);
   uVar4 = CONCAT44(in_register_0000000c, tag);
   uVar7 = (ulong)(uint)aclass;
   pvVar1 = it->funcs;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (it->itype == '\0') {
      pAVar6 = it->templates;
      if (pAVar6 != (ASN1_TEMPLATE*)0x0) {
         uVar7 = uVar8;
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00100a54;
         goto LAB_001005ee;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         LAB_0010080d:iVar2 = asn1_i2d_ex_primitive(pval, out, it, uVar4, uVar8);
         return iVar2;
      }
      goto LAB_00100a54;
   }
   if (*pval == (ASN1_VALUE*)0x0) goto switchD_00100641_caseD_0;
   local_58 = (code*)0x0;
   if (pvVar1 != (void*)0x0) {
      if (( *(byte*)( (long)pvVar1 + 8 ) & 8 ) == 0) {
         local_58 = *(code**)( (long)pvVar1 + 0x18 );
      } else {
         local_58 = *(code**)( (long)pvVar1 + 0x28 );
      }
   }
   switch (it->itype) {
      case '\x01':
    local_4c = 1;
    goto LAB_001006f2;
      case '\x02':
    if (tag != -1) {
      ERR_new();
      uVar4 = 0x7b;
      goto LAB_00100a02;
    }
    if (local_58 == (code *)0x0) {
      iVar2 = ossl_asn1_get_choice_selector_const(pval,it);
      if ((-1 < iVar2) && (lVar9 = (long)iVar2, lVar9 < it->tcount)) {
LAB_0010089c:
        pAVar6 = it->templates + lVar9;
        pval = (ASN1_VALUE **)ossl_asn1_get_const_field_ptr(pval,pAVar6);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = 0xffffffff;
LAB_001005ee:
          iVar2 = asn1_template_ex_i2d(pval,out,pAVar6,uVar4,uVar7);
          return iVar2;
        }
        goto LAB_00100a54;
      }
    }
    else {
      iVar2 = (*local_58)(6,pval,it,0);
      if (iVar2 != 0) {
        iVar2 = ossl_asn1_get_choice_selector_const(pval,it);
        if ((-1 < iVar2) && (lVar9 = (long)iVar2, lVar9 < it->tcount)) goto LAB_0010089c;
        (*local_58)(7,pval,it,0);
      }
    }
      default:
switchD_00100641_caseD_0:
    iVar3 = 0;
    break;
      case '\x04':
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010085e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)((long)pvVar1 + 0x28))(pval,out,it,tag,uVar7);
      return iVar2;
    }
    goto LAB_00100a54;
      case '\x05':
    if (tag == -1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = 0xffffffff;
        uVar8 = uVar7;
        goto LAB_0010080d;
      }
      goto LAB_00100a54;
    }
    ERR_new();
    uVar4 = 0x70;
LAB_00100a02:
    ERR_set_debug("crypto/asn1/tasn_enc.c",uVar4,"ASN1_item_ex_i2d");
    ERR_set_error(0xd,0xe6,0);
LAB_00100a28:
    iVar3 = -1;
    break;
      case '\x06':
    local_4c = ((aclass & 0x800U) != 0) + 1;
LAB_001006f2:
    iVar2 = ossl_asn1_enc_restore(&local_44,out,pval,it);
    if (iVar2 < 0) goto switchD_00100641_caseD_0;
    iVar3 = local_44;
    if (iVar2 == 0) {
      local_44 = 0;
      if (tag == -1) {
        uVar7 = uVar7 & 0xffffff3f;
        tag = 0x10;
      }
      if ((local_58 != (code *)0x0) && (iVar2 = (*local_58)(6,pval,it,0), iVar2 == 0))
      goto switchD_00100641_caseD_0;
      lVar9 = 0;
      pAVar6 = it->templates;
      if (0 < it->tcount) {
        do {
          lVar5 = ossl_asn1_do_adb(*pval,pAVar6,1);
          if (lVar5 == 0) goto switchD_00100641_caseD_0;
          uVar4 = ossl_asn1_get_const_field_ptr(pval,lVar5);
          iVar2 = asn1_template_ex_i2d(uVar4,0,lVar5,0xffffffff,uVar7);
          if ((iVar2 == -1) || (0x7fffffff - local_44 < iVar2)) goto LAB_00100a28;
          local_44 = local_44 + iVar2;
          pAVar6 = pAVar6 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 < it->tcount);
      }
      iVar3 = ASN1_object_size(local_4c,local_44,tag);
      if ((out != (uchar **)0x0) && (iVar3 != -1)) {
        lVar9 = 0;
        ASN1_put_object(out,local_4c,local_44,tag,(int)uVar7);
        pAVar6 = it->templates;
        if (0 < it->tcount) {
          do {
            lVar5 = ossl_asn1_do_adb(*pval,pAVar6,1);
            if (lVar5 == 0) goto switchD_00100641_caseD_0;
            pAVar6 = pAVar6 + 1;
            uVar4 = ossl_asn1_get_const_field_ptr(pval,lVar5);
            lVar9 = lVar9 + 1;
            asn1_template_ex_i2d(uVar4,out,lVar5,0xffffffff,uVar7);
          } while (lVar9 < it->tcount);
        }
        if (local_4c == 2) {
          ASN1_put_eoc(out);
        }
        if ((local_58 != (code *)0x0) && (iVar2 = (*local_58)(7,pval,it,0), iVar2 == 0))
        goto switchD_00100641_caseD_0;
      }
    }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }
   LAB_00100a54:/* WARNING: Subroutine does not return */__stack_chk_fail();
}int ASN1_item_i2d(ASN1_VALUE *val, uchar **out, ASN1_ITEM *it) {
   int num;
   uchar *puVar1;
   long in_FS_OFFSET;
   ASN1_VALUE *local_40;
   uchar *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = val;
   if (( out == (uchar**)0x0 ) || ( *out != (uchar*)0x0 )) {
      num = ASN1_item_ex_i2d(&local_40, out, it, -1, 0);
   } else {
      num = ASN1_item_ex_i2d(&local_40, (uchar**)0x0, it, -1, 0);
      if (0 < num) {
         puVar1 = (uchar*)CRYPTO_malloc(num, "crypto/asn1/tasn_enc.c", 0x41);
         if (puVar1 == (uchar*)0x0) {
            num = -1;
         } else {
            local_38 = puVar1;
            ASN1_item_ex_i2d(&local_40, &local_38, it, -1, 0);
            *out = puVar1;
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return num;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}uint asn1_template_ex_i2d(ASN1_VALUE *param_1, uchar **param_2, ulong *param_3, int param_4, uint param_5) {
   undefined8 *puVar1;
   ulong uVar2;
   int iVar3;
   uint length;
   int iVar4;
   uint uVar5;
   ASN1_ITEM *pAVar6;
   undefined8 *__base;
   uchar *ptr;
   int iVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   uint xclass;
   int constructed;
   uint aclass;
   long in_FS_OFFSET;
   bool bVar10;
   uint local_98;
   int local_90;
   uint local_8c;
   ASN1_VALUE *local_60;
   ASN1_VALUE *local_58;
   ASN1_VALUE *local_50;
   uchar *local_48;
   long local_40;
   uVar2 = *param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( uVar2 & 0x1000 ) != 0) {
      local_60 = param_1;
      param_1 = (ASN1_VALUE*)&local_60;
   }
   local_8c = (uint)uVar2;
   if (( uVar2 & 0x18 ) == 0) {
      xclass = local_8c & 0x18;
      if (param_4 != -1) {
         xclass = param_5 & 0xc0;
      }
      LAB_00100bb8:constructed = 1;
      aclass = param_5 & 0xffffff3f;
      if (( uVar2 & 0x800 ) != 0) {
         constructed = ( ( param_5 & 0x800 ) != 0 ) + 1;
      }
      if (( uVar2 & 6 ) == 0) {
         if (( uVar2 & 0x10 ) == 0) {
            pAVar6 = (ASN1_ITEM*)( *(code*)param_3[4] )();
            uVar5 = ASN1_item_ex_i2d((ASN1_VALUE**)param_1, param_2, pAVar6, param_4, aclass | xclass);
            if (( uVar5 != 0 ) || ( uVar5 = local_8c & 6(*param_3 & 1) != 0 )) goto LAB_00100c95;
            ERR_new();
            uVar9 = 0x174;
         } else {
            pAVar6 = (ASN1_ITEM*)( *(code*)param_3[4] )();
            iVar7 = ASN1_item_ex_i2d((ASN1_VALUE**)param_1, (uchar**)0x0, pAVar6, -1, aclass);
            if (iVar7 != 0) {
               uVar5 = ASN1_object_size(constructed, iVar7, param_4);
               if (( param_2 == (uchar**)0x0 ) || ( uVar5 == 0xffffffff )) goto LAB_00100c95;
               ASN1_put_object(param_2, constructed, iVar7, param_4, xclass);
               pAVar6 = (ASN1_ITEM*)( *(code*)param_3[4] )();
               ASN1_item_ex_i2d((ASN1_VALUE**)param_1, param_2, pAVar6, -1, aclass);
               if (constructed != 2) goto LAB_00100c95;
               LAB_00100fb7:ASN1_put_eoc(param_2);
               goto LAB_00100c95;
            }
            uVar5 = local_8c & 6;
            if (( *param_3 & 1 ) != 0) goto LAB_00100c95;
            ERR_new();
            uVar9 = 0x15f;
         }
         LAB_00100fe1:ERR_set_debug("crypto/asn1/tasn_enc.c", uVar9, "asn1_template_ex_i2d");
         ERR_set_error(0xd, 0xde, 0);
      } else {
         param_1 = *(ASN1_VALUE**)param_1;
         if (param_1 == (ASN1_VALUE*)0x0) {
            uVar5 = 0;
            goto LAB_00100c95;
         }
         local_98 = local_8c & 2;
         if (( uVar2 & 2 ) == 0) {
            if (( param_4 == -1 ) || ( local_8c = local_8c & 0x10 ),local_90 = param_4,uVar5 = xclass,( uVar2 & 0x10 ) != 0) {
               local_8c = 0;
               local_90 = 0x10;
               uVar5 = local_98;
            }
         } else {
            local_98 = local_8c & 4;
            if (( uVar2 & 4 ) == 0) {
               local_8c = 1;
               uVar5 = local_98;
               if (param_4 == -1) {
                  local_90 = 0x11;
               } else {
                  local_90 = 0x11;
                  if (( uVar2 & 0x10 ) == 0) {
                     local_90 = param_4;
                     uVar5 = xclass;
                  }
               }
            } else if (param_4 == -1) {
               local_8c = 2;
               local_98 = 0;
               local_90 = 0x11;
               uVar5 = local_98;
            } else {
               bVar10 = ( uVar2 & 0x10 ) == 0;
               local_8c = 2;
               uVar5 = 0;
               if (bVar10) {
                  uVar5 = xclass;
               }
               local_90 = 0x11;
               if (bVar10) {
                  local_90 = param_4;
               }
            }
         }
         local_98 = uVar5;
         iVar4 = 0;
         for (iVar7 = 0; iVar3 = OPENSSL_sk_num(param_1),iVar7 < iVar3; iVar7 = iVar7 + 1) {
            local_58 = (ASN1_VALUE*)OPENSSL_sk_value(param_1);
            pAVar6 = (ASN1_ITEM*)( *(code*)param_3[4] )();
            iVar3 = ASN1_item_ex_i2d(&local_58, (uchar**)0x0, pAVar6, -1, aclass);
            if (( iVar3 == -1 ) || ( 0x7fffffff - iVar3 < iVar4 )) goto LAB_00101000;
            if (( iVar3 == 0 ) && ( ( *param_3 & 1 ) == 0 )) {
               ERR_new();
               uVar9 = 0x136;
               goto LAB_00100fe1;
            }
            iVar4 = iVar4 + iVar3;
         }
         length = ASN1_object_size(constructed, iVar4, local_90);
         if (length != 0xffffffff) {
            if (( uVar2 & 0x10 ) == 0) {
               uVar5 = length;
               if (param_2 == (uchar**)0x0) goto LAB_00100c95;
            } else {
               uVar5 = ASN1_object_size(constructed, length, param_4);
               if (( param_2 == (uchar**)0x0 ) || ( uVar5 == 0xffffffff )) goto LAB_00100c95;
               ASN1_put_object(param_2, constructed, length, param_4, xclass);
            }
            ASN1_put_object(param_2, constructed, iVar4, local_90, local_98);
            pAVar6 = (ASN1_ITEM*)( *(code*)param_3[4] )();
            local_48 = (uchar*)0x0;
            if (( local_8c == 0 ) || ( iVar7 = iVar7 < 2 )) {
               for (iVar7 = 0; iVar4 = OPENSSL_sk_num(param_1),iVar7 < iVar4; iVar7 = iVar7 + 1) {
                  local_50 = (ASN1_VALUE*)OPENSSL_sk_value(param_1, iVar7);
                  ASN1_item_ex_i2d(&local_50, param_2, pAVar6, -1, aclass);
               }
            } else {
               iVar7 = OPENSSL_sk_num(param_1);
               __base = (undefined8*)CRYPTO_malloc(iVar7 * 0x18, "crypto/asn1/tasn_enc.c", 0x19e);
               if (__base != (undefined8*)0x0) {
                  ptr = (uchar*)CRYPTO_malloc(iVar4, "crypto/asn1/tasn_enc.c", 0x1a2);
                  if (ptr != (uchar*)0x0) {
                     puVar8 = __base;
                     local_48 = ptr;
                     for (iVar7 = 0; iVar4 = OPENSSL_sk_num(param_1),iVar7 < iVar4; iVar7 = iVar7 + 1) {
                        local_50 = (ASN1_VALUE*)OPENSSL_sk_value(param_1, iVar7);
                        *puVar8 = local_48;
                        iVar4 = ASN1_item_ex_i2d(&local_50, &local_48, pAVar6, -1, aclass);
                        *(int*)( puVar8 + 1 ) = iVar4;
                        puVar8[2] = local_50;
                        puVar8 = puVar8 + 3;
                     }
                     iVar7 = OPENSSL_sk_num(param_1);
                     qsort(__base, (long)iVar7, 0x18, der_cmp);
                     local_48 = *param_2;
                     puVar8 = __base;
                     for (iVar7 = 0; iVar4 = OPENSSL_sk_num(param_1),iVar7 < iVar4; iVar7 = iVar7 + 1) {
                        memcpy(local_48, (void*)*puVar8, (long)*(int*)( puVar8 + 1 ));
                        local_48 = local_48 + *(int*)( puVar8 + 1 );
                        puVar8 = puVar8 + 3;
                     }
                     *param_2 = local_48;
                     if (local_8c == 2) {
                        puVar8 = __base;
                        for (iVar7 = 0; iVar4 = OPENSSL_sk_num(param_1),iVar7 < iVar4; iVar7 = iVar7 + 1) {
                           puVar1 = puVar8 + 2;
                           puVar8 = puVar8 + 3;
                           OPENSSL_sk_set(param_1, iVar7, *puVar1);
                        }
                     }
                  }
                  CRYPTO_free(__base);
                  CRYPTO_free(ptr);
               }
            }
            if (( constructed != 2 ) || ( ASN1_put_eoc(param_2),( uVar2 & 0x10 ) == 0 )) goto LAB_00100c95;
            goto LAB_00100fb7;
         }
      }
   } else if (param_4 == -1) {
      param_4 = (int)param_3[1];
      xclass = local_8c & 0xc0;
      goto LAB_00100bb8;
   }
   LAB_00101000:uVar5 = 0xffffffff;
   LAB_00100c95:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int ASN1_item_ndef_i2d(ASN1_VALUE *val, uchar **out, ASN1_ITEM *it) {
   int num;
   uchar *puVar1;
   long in_FS_OFFSET;
   ASN1_VALUE *local_40;
   uchar *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = val;
   if (( out == (uchar**)0x0 ) || ( *out != (uchar*)0x0 )) {
      num = ASN1_item_ex_i2d(&local_40, out, it, -1, 0x800);
   } else {
      num = ASN1_item_ex_i2d(&local_40, (uchar**)0x0, it, -1, 0x800);
      if (0 < num) {
         puVar1 = (uchar*)CRYPTO_malloc(num, "crypto/asn1/tasn_enc.c", 0x41);
         if (puVar1 == (uchar*)0x0) {
            num = -1;
         } else {
            local_38 = puVar1;
            ASN1_item_ex_i2d(&local_40, &local_38, it, -1, 0x800);
            *out = puVar1;
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return num;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
