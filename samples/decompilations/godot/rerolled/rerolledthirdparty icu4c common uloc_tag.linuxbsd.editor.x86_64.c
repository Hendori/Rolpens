/* (anonymous namespace)::_addVariantToList((anonymous namespace)::VariantListEntry**,
   icu_76_godot::LocalPointer<(anonymous namespace)::VariantListEntry>) */undefined8(anonymous_namespace) {
   undefined8 *puVar1;
   char *__s1;
   undefined8 *puVar2;
   int iVar3;
   undefined8 *puVar4;
   puVar1 = (undefined8*)*param_2;
   if ((undefined8*)*param_1 == (undefined8*)0x0) {
      puVar1[1] = 0;
      *param_2 = 0;
      *param_1 = (long)puVar1;
   }
 else {
      __s1 = (char*)*puVar1;
      puVar2 = (undefined8*)*param_1;
      do {
         puVar4 = puVar2;
         iVar3 = strcmp(__s1, (char*)*puVar4);
         if (iVar3 == 0) {
            return 0;
         }

         puVar2 = (undefined8*)puVar4[1];
      }
 while ( (undefined8*)puVar4[1] != (undefined8*)0x0 );
      puVar1[1] = 0;
      *param_2 = 0;
      puVar4[1] = puVar1;
   }

   return 1;
}
/* (anonymous namespace)::_addAttributeToList((anonymous namespace)::AttributeListEntry**,
   (anonymous namespace)::AttributeListEntry*) */undefined8(anonymous_namespace) {
   char *__s1;
   AttributeListEntry *pAVar1;
   int iVar2;
   AttributeListEntry *pAVar3;
   AttributeListEntry *pAVar4;
   if (*param_1 == (AttributeListEntry*)0x0) {
      *(undefined8*)( param_2 + 8 ) = 0;
      *param_1 = param_2;
   }
 else {
      __s1 = *(char**)param_2;
      pAVar1 = *param_1;
      pAVar4 = (AttributeListEntry*)0x0;
      do {
         pAVar3 = pAVar1;
         iVar2 = strcmp(__s1, *(char**)pAVar3);
         if (iVar2 < 0) {
            if (pAVar4 == (AttributeListEntry*)0x0) {
               *param_1 = param_2;
            }
 else {
               *(AttributeListEntry**)( pAVar4 + 8 ) = param_2;
            }

            *(AttributeListEntry**)( param_2 + 8 ) = pAVar3;
            return 1;
         }

         if (iVar2 == 0) {
            return 0;
         }

         pAVar1 = *(AttributeListEntry**)( pAVar3 + 8 );
         pAVar4 = pAVar3;
      }
 while ( *(AttributeListEntry**)( pAVar3 + 8 ) != (AttributeListEntry*)0x0 );
      *(AttributeListEntry**)( pAVar3 + 8 ) = param_2;
      *(undefined8*)( param_2 + 8 ) = 0;
   }

   return 1;
}
/* (anonymous namespace)::_addExtensionToList((anonymous namespace)::ExtensionListEntry**,
   (anonymous namespace)::ExtensionListEntry*, bool) */bool (anonymous_namespace)::_addExtensionToList(ExtensionListEntry **param_1, ExtensionListEntry *param_2, bool param_3) {
   char cVar1;
   char cVar2;
   char *__s1;
   int iVar3;
   int iVar4;
   size_t sVar5;
   size_t sVar6;
   ExtensionListEntry *pEVar7;
   char *__s2;
   ExtensionListEntry *pEVar8;
   int iVar9;
   ExtensionListEntry *pEVar10;
   pEVar10 = *param_1;
   if (pEVar10 == (ExtensionListEntry*)0x0) {
      *(undefined8*)( param_2 + 0x10 ) = 0;
      *param_1 = param_2;
      return true;
   }

   pEVar8 = (ExtensionListEntry*)0x0;
   __s1 = *(char**)param_2;
   LAB_00100190:__s2 = *(char**)pEVar10;
   pEVar7 = pEVar8;
   if (param_3) {
      do {
         pEVar8 = pEVar10;
         sVar5 = strlen(__s1);
         sVar6 = strlen(__s2);
         iVar9 = (int)sVar5;
         iVar3 = (int)sVar6;
         if (iVar9 == 1 && iVar3 == 1) {
            cVar1 = *__s1;
            iVar3 = (int)cVar1;
            cVar2 = *__s2;
            if (cVar1 == cVar2) {
               return false;
            }

            if (cVar1 != 'x') goto code_r0x001001d7;
         }
 else {
            if (iVar9 == 1) {
               iVar3 = *__s1 + -0x75;
               goto joined_r0x0010017b;
            }

            if (iVar3 == 1) {
               cVar2 = *__s2;
               iVar3 = 0x75;
               goto LAB_001001e0;
            }

            iVar4 = strcmp(__s1, __s2);
            if (iVar4 == 0) {
               return iVar9 == 1 && iVar3 == 1;
            }

            iVar3 = strcmp(__s2, "attribute");
            if (( iVar3 != 0 ) && ( ( iVar3 = strcmp(__s1, "attribute") ),iVar4 < 0 || ( iVar3 == 0 ) )) goto LAB_001001f0;
         }

         pEVar10 = *(ExtensionListEntry**)( pEVar8 + 0x10 );
         if (pEVar10 == (ExtensionListEntry*)0x0) goto LAB_00100310;
         __s2 = *(char**)pEVar10;
         pEVar7 = pEVar8;
      }
 while ( true );
   }

   iVar3 = strcmp(__s1, __s2);
   pEVar8 = pEVar10;
   goto joined_r0x0010017b;
   code_r0x001001d7:if (cVar2 != 'x') {
      LAB_001001e0:iVar3 = iVar3 - cVar2;
      joined_r0x0010017b:if (-1 < iVar3) {
         if (iVar3 == 0) {
            return false;
         }

         pEVar10 = *(ExtensionListEntry**)( pEVar8 + 0x10 );
         if (pEVar10 == (ExtensionListEntry*)0x0) {
            LAB_00100310:*(ExtensionListEntry**)( pEVar8 + 0x10 ) = param_2;
            *(undefined8*)( param_2 + 0x10 ) = 0;
            return true;
         }

         goto LAB_00100190;
      }

   }

   LAB_001001f0:if (pEVar7 == (ExtensionListEntry*)0x0) {
      *param_1 = param_2;
   }
 else {
      *(ExtensionListEntry**)( pEVar7 + 0x10 ) = param_2;
   }

   *(ExtensionListEntry**)( param_2 + 0x10 ) = pEVar8;
   return true;
}
/* (anonymous namespace)::_isExtensionSingleton(char const*, int) */bool (anonymous_namespace)::_isExtensionSingleton(char *param_1, int param_2) {
   char cVar1;
   size_t sVar2;
   if (param_2 < 0) {
      sVar2 = strlen(param_1);
      param_2 = (int)sVar2;
   }

   if (param_2 == 1) {
      cVar1 = uprv_isASCIILetter_76_godot((int)*param_1);
      if (( cVar1 != '\0' ) || ( ( byte )(*param_1 - 0x30U) < 10 )) {
         cVar1 = uprv_asciitolower_76_godot();
         return cVar1 != 'x';
      }

   }

   return false;
}
/* (anonymous namespace)::ultag_close((anonymous namespace)::ULanguageTag*) */void ultag_close(_anonymous_namespace_ *this, ULanguageTag *param_1) {
   UMemory *pUVar1;
   UMemory *pUVar2;
   if (this == (_anonymous_namespace_*)0x0) {
      return;
   }

   uprv_free_76_godot(*(undefined8*)this);
   pUVar2 = *(UMemory**)( this + 0x38 );
   while (pUVar2 != (UMemory*)0x0) {
      pUVar1 = *(UMemory**)( pUVar2 + 8 );
      icu_76_godot::UMemory::operator_delete(pUVar2, param_1);
      pUVar2 = pUVar1;
   }
;
   pUVar2 = *(UMemory**)( this + 0x40 );
   while (pUVar2 != (UMemory*)0x0) {
      pUVar1 = *(UMemory**)( pUVar2 + 0x10 );
      icu_76_godot::UMemory::operator_delete(pUVar2, param_1);
      pUVar2 = pUVar1;
   }
;
   uprv_free_76_godot(this);
   return;
}
/* (anonymous namespace)::_isAlphaNumericStringLimitedLength(char const*, int, int, int) [clone
   .constprop.0] */ulong(anonymous_namespace) {
   char cVar1;
   size_t sVar2;
   long lVar3;
   bool bVar4;
   undefined8 unaff_R13;
   if (param_2 < 0) {
      sVar2 = strlen(param_1);
      param_2 = (int)sVar2;
   }

   bVar4 = param_3 <= param_2 && param_2 < 9;
   if (bVar4) {
      lVar3 = 0;
      do {
         cVar1 = uprv_isASCIILetter_76_godot((int)param_1[lVar3]);
         if (( cVar1 == '\0' ) && ( 9 < ( byte )(param_1[lVar3] - 0x30U) )) {
            return 0;
         }

         lVar3 = lVar3 + 1;
      }
 while ( (int)lVar3 < param_2 );
   }

   return CONCAT71(( int7 )((ulong)unaff_R13 >> 8), bVar4) & 0xffffffff;
}
/* (anonymous namespace)::_isVariantSubtag(char const*, int) */undefined4(anonymous_namespace) {
   char cVar1;
   undefined4 uVar2;
   size_t sVar3;
   int in_ECX;
   char *pcVar4;
   if (param_2 < 0) {
      sVar3 = strlen(param_1);
      param_2 = (int)sVar3;
   }

   uVar2 = _isAlphaNumericStringLimitedLength(param_1, param_2, 5, in_ECX);
   if (( ( (char)uVar2 == '\0' ) && ( param_2 == 4 ) ) && ( ( byte )(*param_1 - 0x30U) < 10 )) {
      pcVar4 = param_1 + 1;
      do {
         cVar1 = uprv_isASCIILetter_76_godot((int)*pcVar4);
         if (( cVar1 == '\0' ) && ( 9 < ( byte )(*pcVar4 - 0x30U) )) {
            return uVar2;
         }

         pcVar4 = pcVar4 + 1;
      }
 while ( pcVar4 != param_1 + 4 );
      uVar2 = 1;
   }

   return uVar2;
}
/* (anonymous namespace)::_isPrivateuseValueSubtag(char const*, int) */void (anonymous_namespace)::_isPrivateuseValueSubtag(char *param_1, int param_2) {
   int in_ECX;
   _isAlphaNumericStringLimitedLength(param_1, param_2, 1, in_ECX);
   return;
}
/* ultag_isLanguageSubtag_76_godot(char const*, int) */undefined8 ultag_isLanguageSubtag_76_godot(char *param_1, int param_2) {
   char *pcVar1;
   char cVar2;
   size_t sVar3;
   if (param_2 < 0) {
      sVar3 = strlen(param_1);
      param_2 = (int)sVar3;
   }

   if (6 < param_2 - 2U) {
      return 0;
   }

   pcVar1 = param_1 + param_2;
   do {
      cVar2 = uprv_isASCIILetter_76_godot((int)*param_1);
      if (cVar2 == '\0') {
         return 0;
      }

      param_1 = param_1 + 1;
   }
 while ( param_1 != pcVar1 );
   return 1;
}
/* ultag_isScriptSubtag_76_godot(char const*, int) */undefined8 ultag_isScriptSubtag_76_godot(char *param_1, int param_2) {
   char *pcVar1;
   char cVar2;
   size_t sVar3;
   undefined8 uVar4;
   if (param_2 < 0) {
      sVar3 = strlen(param_1);
      param_2 = (int)sVar3;
   }

   uVar4 = 0;
   if (param_2 == 4) {
      pcVar1 = param_1 + 4;
      do {
         cVar2 = uprv_isASCIILetter_76_godot((int)*param_1);
         if (cVar2 == '\0') {
            return 0;
         }

         param_1 = param_1 + 1;
      }
 while ( param_1 != pcVar1 );
      uVar4 = 1;
   }

   return uVar4;
}
/* ultag_isRegionSubtag_76_godot(char const*, int) */bool ultag_isRegionSubtag_76_godot(char *param_1, int param_2) {
   char *pcVar1;
   char cVar2;
   size_t sVar3;
   if (param_2 < 0) {
      sVar3 = strlen(param_1);
      param_2 = (int)sVar3;
   }

   if (param_2 == 2) {
      cVar2 = uprv_isASCIILetter_76_godot((int)*param_1);
      if (cVar2 != '\0') {
         cVar2 = uprv_isASCIILetter_76_godot((int)param_1[1]);
         return cVar2 != '\0';
      }

   }
 else if (param_2 == 3) {
      pcVar1 = param_1 + 3;
      while (( byte )(*param_1 - 0x30U) < 10) {
         param_1 = param_1 + 1;
         if (pcVar1 == param_1) {
            return true;
         }

      }
;
   }

   return false;
}
/* (anonymous namespace)::_isTransformedExtensionSubtag(int&, char const*, int) */undefined8 _isTransformedExtensionSubtag(_anonymous_namespace_ *this, int *param_1, char *param_2, int param_3) {
   undefined4 uVar1;
   char cVar2;
   size_t sVar3;
   undefined8 uVar4;
   int iVar5;
   uVar1 = *(undefined4*)this;
   iVar5 = (int)param_2;
   if (-1 < iVar5) {
      switch (uVar1) {
         case 0:
      cVar2 = ultag_isLanguageSubtag_76_godot((char *)param_1,iVar5);
      if (cVar2 != '\0') {
LAB_001007fb:
        if (iVar5 == 4) {
          return 0;
        }
        *(undefined4 *)this = 1;
        return 1;
      }
      break;
         case 1:
switchD_001006a5_caseD_1:
      cVar2 = ultag_isScriptSubtag_76_godot((char *)param_1,iVar5);
      if (cVar2 != '\0') {
        *(undefined4 *)this = 2;
        return 1;
      }
         case 2:
switchD_001006a5_caseD_2:
      cVar2 = ultag_isRegionSubtag_76_godot((char *)param_1,iVar5);
      if (cVar2 != '\0') {
        *(undefined4 *)this = 3;
        return 1;
      }
switchD_00100774_caseD_3:
      cVar2 = _isVariantSubtag((char *)param_1,iVar5);
      if (cVar2 != '\0') {
LAB_00100793:
        *(undefined4 *)this = 4;
        return 1;
      }
      if (iVar5 < 0) {
LAB_001006ee:
        sVar3 = strlen((char *)param_1);
        iVar5 = (int)sVar3;
      }
      break;
         case 3:
         case 4:
      cVar2 = _isVariantSubtag((char *)param_1,iVar5);
      if (cVar2 != '\0') goto LAB_00100793;
      break;
         default:
      goto switchD_001006a5_caseD_5;
         case 6:
switchD_001006a5_caseD_6:
      if (((iVar5 != 2) || (cVar2 = uprv_isASCIILetter_76_godot((int)(char)*param_1), cVar2 == '\0')
          ) || (9 < (byte)(*(char *)((long)param_1 + 1) - 0x30U))) {
        uVar4 = _isAlphaNumericStringLimitedLength((char *)param_1,iVar5,3,param_3);
        return uVar4;
      }
      goto LAB_00100717;
         case 0xffffffff:
switchD_001006a5_caseD_ffffffff:
      cVar2 = _isAlphaNumericStringLimitedLength((char *)param_1,iVar5,3,param_3);
      if (cVar2 == '\0') {
        return 0;
      }
      *(undefined4 *)this = 6;
      return 1;
      }

      LAB_001006f9:if (( ( iVar5 != 2 ) || ( cVar2 = uprv_isASCIILetter_76_godot((int)(char)*param_1) ),cVar2 == '\0' )) {
         switchD_001006a5_caseD_5:return 0;
      }

      LAB_00100717:*(undefined4*)this = 0xffffffff;
      return 1;
   }

   sVar3 = strlen((char*)param_1);
   iVar5 = (int)sVar3;
   switch (uVar1) {
      case 0:
    cVar2 = ultag_isLanguageSubtag_76_godot((char *)param_1,iVar5);
    if (cVar2 != '\0') goto LAB_001007fb;
    if (-1 < iVar5) goto LAB_001006f9;
    break;
      case 1:
    goto switchD_001006a5_caseD_1;
      case 2:
    goto switchD_001006a5_caseD_2;
      case 3:
      case 4:
    goto switchD_00100774_caseD_3;
      default:
    goto switchD_001006a5_caseD_5;
      case 6:
    goto switchD_001006a5_caseD_6;
      case 0xffffffff:
    goto switchD_001006a5_caseD_ffffffff;
   }

   goto LAB_001006ee;
}
/* ultag_isVariantSubtags_76_godot(char const*, int) */undefined8 ultag_isVariantSubtags_76_godot(char *param_1, int param_2) {
   char cVar1;
   size_t sVar2;
   undefined8 uVar3;
   int iVar4;
   char *pcVar5;
   char *pcVar6;
   if (param_2 < 0) {
      sVar2 = strlen(param_1);
      param_2 = (int)sVar2;
   }

   pcVar6 = (char*)0x0;
   pcVar5 = param_1;
   if (0 < param_2) {
      do {
         while (iVar4 = (int)pcVar5,*pcVar5 == '-') {
            if (pcVar6 == (char*)0x0) {
               return 0;
            }

            cVar1 = (anonymous_namespace)::_isVariantSubtag(pcVar6, iVar4 - (int)pcVar6);
            if (cVar1 == '\0') {
               return 0;
            }

            pcVar5 = pcVar5 + 1;
            pcVar6 = (char*)0x0;
            if ((long)param_2 <= (long)pcVar5 - (long)param_1) goto LAB_001008e6;
         }
;
         if (pcVar6 == (char*)0x0) {
            pcVar6 = pcVar5;
         }

         pcVar5 = pcVar5 + 1;
      }
 while ( (long)pcVar5 - (long)param_1 < (long)param_2 );
      LAB_001008e6:if (pcVar6 != (char*)0x0) {
         uVar3 = (anonymous_namespace)::_isVariantSubtag(pcVar6, ( iVar4 + 1 ) - (int)pcVar6);
         return uVar3;
      }

   }

   return 0;
}
/* ultag_isExtensionSubtags_76_godot(char const*, int) */undefined8 ultag_isExtensionSubtags_76_godot(char *param_1, int param_2) {
   char cVar1;
   size_t sVar2;
   undefined8 uVar3;
   int in_ECX;
   int iVar4;
   char *pcVar5;
   char *pcVar6;
   if (param_2 < 0) {
      sVar2 = strlen(param_1);
      param_2 = (int)sVar2;
   }

   pcVar6 = (char*)0x0;
   pcVar5 = param_1;
   if (0 < param_2) {
      do {
         while (iVar4 = (int)pcVar5,*pcVar5 == '-') {
            if (pcVar6 == (char*)0x0) {
               return 0;
            }

            cVar1 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength(pcVar6, iVar4 - (int)pcVar6, 2, in_ECX);
            if (cVar1 == '\0') {
               return 0;
            }

            pcVar5 = pcVar5 + 1;
            pcVar6 = (char*)0x0;
            if ((long)param_2 <= (long)pcVar5 - (long)param_1) goto LAB_0010097b;
         }
;
         if (pcVar6 == (char*)0x0) {
            pcVar6 = pcVar5;
         }

         pcVar5 = pcVar5 + 1;
      }
 while ( (long)pcVar5 - (long)param_1 < (long)param_2 );
      LAB_0010097b:if (pcVar6 != (char*)0x0) {
         uVar3 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength(pcVar6, ( iVar4 + 1 ) - (int)pcVar6, 2, in_ECX);
         return uVar3;
      }

   }

   return 0;
}
/* ultag_isPrivateuseValueSubtags_76_godot(char const*, int) */undefined8 ultag_isPrivateuseValueSubtags_76_godot(char *param_1, int param_2) {
   char cVar1;
   size_t sVar2;
   undefined8 uVar3;
   int in_ECX;
   int iVar4;
   char *pcVar5;
   char *pcVar6;
   if (param_2 < 0) {
      sVar2 = strlen(param_1);
      param_2 = (int)sVar2;
   }

   pcVar6 = (char*)0x0;
   pcVar5 = param_1;
   if (0 < param_2) {
      do {
         while (iVar4 = (int)pcVar5,*pcVar5 == '-') {
            if (pcVar6 == (char*)0x0) {
               return 0;
            }

            cVar1 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength(pcVar6, iVar4 - (int)pcVar6, 1, in_ECX);
            if (cVar1 == '\0') {
               return 0;
            }

            pcVar5 = pcVar5 + 1;
            pcVar6 = (char*)0x0;
            if ((long)param_2 <= (long)pcVar5 - (long)param_1) goto LAB_00100a0b;
         }
;
         if (pcVar6 == (char*)0x0) {
            pcVar6 = pcVar5;
         }

         pcVar5 = pcVar5 + 1;
      }
 while ( (long)pcVar5 - (long)param_1 < (long)param_2 );
      LAB_00100a0b:if (pcVar6 != (char*)0x0) {
         uVar3 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength(pcVar6, ( iVar4 + 1 ) - (int)pcVar6, 1, in_ECX);
         return uVar3;
      }

   }

   return 0;
}
/* ultag_isUnicodeLocaleAttribute_76_godot(char const*, int) */void ultag_isUnicodeLocaleAttribute_76_godot(char *param_1, int param_2) {
   int in_ECX;
   (anonymous_namespace)::_isAlphaNumericStringLimitedLength(param_1, param_2, 3, in_ECX);
   return;
}
/* ultag_isUnicodeLocaleAttributes_76_godot(char const*, int) */undefined8 ultag_isUnicodeLocaleAttributes_76_godot(char *param_1, int param_2) {
   char cVar1;
   size_t sVar2;
   undefined8 uVar3;
   int in_ECX;
   int iVar4;
   char *pcVar5;
   char *pcVar6;
   if (param_2 < 0) {
      sVar2 = strlen(param_1);
      param_2 = (int)sVar2;
   }

   pcVar6 = (char*)0x0;
   pcVar5 = param_1;
   if (0 < param_2) {
      do {
         while (iVar4 = (int)pcVar5,*pcVar5 == '-') {
            if (pcVar6 == (char*)0x0) {
               return 0;
            }

            cVar1 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength(pcVar6, iVar4 - (int)pcVar6, 3, in_ECX);
            if (cVar1 == '\0') {
               return 0;
            }

            pcVar5 = pcVar5 + 1;
            pcVar6 = (char*)0x0;
            if ((long)param_2 <= (long)pcVar5 - (long)param_1) goto LAB_00100aab;
         }
;
         if (pcVar6 == (char*)0x0) {
            pcVar6 = pcVar5;
         }

         pcVar5 = pcVar5 + 1;
      }
 while ( (long)pcVar5 - (long)param_1 < (long)param_2 );
      LAB_00100aab:if (pcVar6 != (char*)0x0) {
         uVar3 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength(pcVar6, ( iVar4 + 1 ) - (int)pcVar6, 3, in_ECX);
         return uVar3;
      }

   }

   return 0;
}
/* ultag_isUnicodeLocaleKey_76_godot(char const*, int) */bool ultag_isUnicodeLocaleKey_76_godot(char *param_1, int param_2) {
   char cVar1;
   size_t sVar2;
   if (param_2 < 0) {
      sVar2 = strlen(param_1);
      param_2 = (int)sVar2;
   }

   if (param_2 == 2) {
      cVar1 = uprv_isASCIILetter_76_godot((int)*param_1);
      if (( cVar1 != '\0' ) || ( ( byte )(*param_1 - 0x30U) < 10 )) {
         cVar1 = uprv_isASCIILetter_76_godot((int)param_1[1]);
         return cVar1 != '\0';
      }

   }

   return false;
}
/* (anonymous namespace)::_isUnicodeExtensionSubtag(int&, char const*, int) */undefined8 _isUnicodeExtensionSubtag(_anonymous_namespace_ *this, int *param_1, char *param_2, int param_3) {
   int iVar1;
   char cVar2;
   undefined8 uVar3;
   int iVar4;
   iVar4 = (int)param_2;
   iVar1 = *(int*)this;
   if (iVar1 == 1) {
      cVar2 = ultag_isUnicodeLocaleKey_76_godot((char*)param_1, iVar4);
      if (cVar2 == '\0') {
         cVar2 = _isAlphaNumericStringLimitedLength((char*)param_1, iVar4, 3, param_3);
         if (cVar2 == '\0') {
            return 0;
         }

         *(undefined4*)this = 2;
      }

   }
 else {
      if (( iVar1 != 2 ) && ( iVar1 != 0 )) {
         return 0;
      }

      cVar2 = ultag_isUnicodeLocaleKey_76_godot((char*)param_1, iVar4);
      if (cVar2 == '\0') {
         uVar3 = _isAlphaNumericStringLimitedLength((char*)param_1, iVar4, 3, param_3);
         return uVar3;
      }

      *(undefined4*)this = 1;
   }

   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ulocimp_forLanguageTag_76_godot(char const*, int, icu_76_godot::ByteSink&, int*, UErrorCode&)
   [clone .part.0] */void ulocimp_forLanguageTag_76_godot(char *param_1, int param_2, ByteSink *param_3, int *param_4, UErrorCode *param_5) {
   AttributeListEntry *pAVar1;
   code *pcVar2;
   byte bVar3;
   AttributeListEntry *pAVar4;
   undefined8 *puVar5;
   char cVar6;
   undefined1 uVar7;
   ULanguageTag UVar8;
   char cVar9;
   ExtensionListEntry EVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   undefined4 uVar14;
   ULanguageTag *pUVar15;
   ulong uVar16;
   undefined8 uVar17;
   undefined8 *puVar18;
   undefined8 *puVar19;
   long *plVar20;
   ExtensionListEntry *pEVar21;
   ExtensionListEntry *pEVar22;
   UMemory *pUVar23;
   ExtensionListEntry *pEVar24;
   size_t __n;
   ExtensionListEntry *pEVar25;
   ExtensionListEntry *pEVar26;
   uint uVar27;
   ExtensionListEntry *pEVar28;
   _anonymous_namespace_ *p_Var29;
   bool bVar30;
   uint uVar31;
   ByteSink *extraout_RDX;
   long lVar32;
   uint uVar33;
   char *pcVar34;
   undefined8 *puVar35;
   ULanguageTag *pUVar36;
   char *pcVar37;
   byte bVar38;
   AttributeListEntry *pAVar39;
   undefined4 in_register_00000034;
   ULanguageTag *pUVar40;
   char *pcVar41;
   ULanguageTag *pUVar42;
   UErrorCode *pUVar43;
   long lVar44;
   ULanguageTag *pUVar45;
   int iVar46;
   uint uVar47;
   long lVar48;
   size_t sVar49;
   undefined8 *puVar50;
   ExtensionListEntry *pEVar51;
   long in_FS_OFFSET;
   bool bVar52;
   _anonymous_namespace_ *local_278;
   UMemory *local_270;
   ULanguageTag *local_260;
   ULanguageTag *local_250;
   ULanguageTag *local_248;
   int local_238;
   ExtensionListEntry *local_208;
   ExtensionListEntry *local_200;
   AttributeListEntry *local_1f8;
   ExtensionListEntry *local_1f0;
   byte local_1e8;
   UMemory *local_1d8;
   uint local_1d0;
   undefined4 uStack_1cc;
   char local_1c8;
   int local_1b8;
   ExtensionListEntry *local_1b0;
   int local_1a8;
   char local_1a4;
   ExtensionListEntry local_1a0[72];
   int local_158;
   ExtensionListEntry *local_150;
   int local_148;
   char local_144;
   ExtensionListEntry local_140[72];
   int local_f8;
   ExtensionListEntry *local_f0;
   int local_e8;
   char local_e4;
   ExtensionListEntry local_e0[72];
   int local_98;
   ExtensionListEntry *local_90;
   int local_88;
   char local_84;
   ExtensionListEntry local_80[64];
   long local_40;
   pcVar41 = (char*)CONCAT44(in_register_00000034, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_5 < 1) {
      if (param_4 != (int*)0x0) {
         *param_4 = 0;
      }

      pUVar43 = param_5;
      if (param_2 < 0) {
         sVar49 = strlen(param_1);
         param_2 = (int)sVar49;
      }

      local_260 = (ULanguageTag*)(long)( param_2 + 1 );
      pUVar15 = (ULanguageTag*)uprv_malloc_76_godot(local_260);
      if (pUVar15 != (ULanguageTag*)0x0) {
         if (0 < param_2) {
            pcVar41 = param_1;
            __memcpy_chk(pUVar15, param_1, (long)param_2, local_260);
         }

         pUVar15[param_2] = (ULanguageTag)0x0;
         local_278 = (_anonymous_namespace_*)uprv_malloc_76_godot(0x58);
         if (local_278 == (_anonymous_namespace_*)0x0) {
            uprv_free_76_godot(pUVar15);
            goto LAB_00101ddc;
         }

         *(undefined1**)( local_278 + 8 ) = &(anonymous_namespace)::EMPTY;
         for (int i = 0; i < 3; i++) {
            *(undefined8*)( local_278 + ( 8*i + 16 ) ) = 0;
         }

         *(undefined1**)( local_278 + 0x28 ) = &(anonymous_namespace)::EMPTY;
         *(undefined1**)( local_278 + 0x30 ) = &(anonymous_namespace)::EMPTY;
         *(undefined8*)( local_278 + 0x38 ) = 0;
         *(undefined8*)( local_278 + 0x40 ) = 0;
         *(undefined1**)( local_278 + 0x50 ) = &(anonymous_namespace)::EMPTY;
         *(undefined1**)( local_278 + 0x48 ) = &(anonymous_namespace)::EMPTY;
         *(ULanguageTag**)local_278 = pUVar15;
         if (1 < param_2) {
            lVar48 = 0;
            uVar16 = 10;
            p_Var29 = local_278;
            while (true) {
               iVar12 = (int)uVar16;
               iVar13 = param_2;
               if (( iVar12 <= param_2 ) && ( ( ( param_2 <= iVar12 || ( pUVar15[iVar12] == (ULanguageTag)0x2d ) ) && ( iVar11 = uprv_strnicmp_76_godot(( &(anonymous_namespace)::LEGACY )[lVar48], pUVar15, uVar16 & 0xffffffff) ),iVar11 == 0 ) )) {
                  pcVar41 = ( &(anonymous_namespace)::LEGACY )[(int)lVar48 + 1];
                  sVar49 = strlen(pcVar41);
                  iVar11 = (int)sVar49;
                  iVar46 = ( param_2 + iVar11 ) - iVar12;
                  if (param_2 < iVar46) {
                     uprv_free_76_godot(pUVar15);
                     local_260 = (ULanguageTag*)(long)( iVar46 + 1 );
                     pUVar15 = (ULanguageTag*)uprv_malloc_76_godot(local_260);
                     *(ULanguageTag**)local_278 = pUVar15;
                     pUVar40 = pUVar15;
                     iVar13 = iVar46;
                     if (pUVar15 == (ULanguageTag*)0x0) {
                        *(undefined4*)param_5 = 7;
                        (anonymous_namespace)::ultag_close(local_278, (ULanguageTag*)pcVar41);
                        goto LAB_00101ed0;
                     }

                  }
 else {
                     pUVar40 = *(ULanguageTag**)local_278;
                  }

                  local_238 = iVar12 - iVar11;
                  strcpy((char*)pUVar40, pcVar41);
                  if (iVar12 == iVar13) goto LAB_00100d62;
                  pcVar41 = param_1 + iVar12;
                  memcpy((void*)( (long)iVar11 + *(long*)local_278 ), pcVar41, (long)( param_2 - iVar12 ));
                  *(undefined1*)( *(long*)local_278 + (long)iVar46 ) = 0;
                  if (iVar12 != 0) goto LAB_00100d62;
                  goto LAB_00100d0c;
               }

               lVar48 = lVar48 + 2;
               if (lVar48 == 0x32) break;
               uVar16 = strlen(( &(anonymous_namespace)::LEGACY )[lVar48]);
            }
;
            local_238 = 0;
            LAB_00100d0c:lVar48 = 0;
            sVar49 = 6;
            LAB_00100d2c:pUVar40 = pUVar15;
            iVar12 = uprv_strnicmp_76_godot(( &(anonymous_namespace)::REDUNDANT )[lVar48], pUVar15, sVar49 & 0xffffffff);
            if (iVar12 != 0) {
               LAB_00100d58:lVar48 = lVar48 + 2;
               pcVar41 = (char*)pUVar40;
               if (lVar48 == 0x34) goto LAB_00100d62;
               sVar49 = strlen(( &(anonymous_namespace)::REDUNDANT )[lVar48]);
               goto LAB_00100d2c;
            }

            pcVar41 = (char*)( pUVar15 + sVar49 );
            if (( ( ULanguageTag ) * pcVar41 != (ULanguageTag)0x0 ) && ( ( ULanguageTag ) * pcVar41 != (ULanguageTag)0x2d )) goto LAB_00100d58;
            pUVar40 = (ULanguageTag*)( &(anonymous_namespace)::REDUNDANT )[(int)lVar48 + 1];
            __n = strlen((char*)pUVar40);
            memcpy(*(void**)local_278, pUVar40, __n);
            if (( ULanguageTag ) * pcVar41 == (ULanguageTag)0x2d) {
               if (local_260 <= __n) {
                  local_260 = (ULanguageTag*)__n;
               }

               p_Var29 = (_anonymous_namespace_*)( (long)local_260 - __n );
               __memmove_chk(pUVar15 + __n, pcVar41, ( (long)iVar13 + 1 ) - sVar49);
            }
 else {
               pUVar15[__n] = (ULanguageTag)0x0;
               pcVar41 = (char*)pUVar40;
            }

            local_238 = (int)sVar49 - (int)__n;
            LAB_00100d62:bVar30 = false;
            iVar13 = 0;
            bVar38 = 0x81;
            bVar52 = true;
            local_270 = (UMemory*)0x0;
            local_250 = (ULanguageTag*)0x0;
            local_248 = (ULanguageTag*)0x0;
            pUVar40 = pUVar15;
            LAB_00100d8e:UVar8 = *pUVar40;
            pUVar45 = pUVar40;
            if (UVar8 == (ULanguageTag)0x0) {
               local_260 = (ULanguageTag*)0x0;
               pUVar42 = (ULanguageTag*)0x0;
            }
 else {
               do {
                  if (UVar8 == (ULanguageTag)0x2d) {
                     local_260 = pUVar45 + 1;
                     pUVar42 = (ULanguageTag*)( ulong )(uint)((int)pUVar45 - (int)pUVar40);
                     goto LAB_00100dc6;
                  }

                  UVar8 = pUVar45[1];
                  pUVar45 = pUVar45 + 1;
               }
 while ( UVar8 != (ULanguageTag)0x0 );
               local_260 = (ULanguageTag*)0x0;
               pUVar42 = (ULanguageTag*)( ulong )(uint)((int)pUVar45 - (int)pUVar40);
            }

            LAB_00100dc6:iVar12 = (int)pUVar42;
            if (( bVar52 ) && ( pcVar41 = (char*)pUVar42 ),cVar6 = ultag_isLanguageSubtag_76_godot((char*)pUVar40, iVar12),cVar6 != '\0') {
               *pUVar45 = (ULanguageTag)0x0;
               uVar17 = T_CString_toLowerCase_76_godot(pUVar40);
               *(undefined8*)( local_278 + 8 ) = uVar17;
               bVar38 = ( iVar12 < 4 ) * '\x02' + 0xbc;
               pUVar15 = pUVar45;
               pcVar41 = (char*)local_278;
               goto LAB_001023b8;
            }

            if (( bVar38 & 2 ) != 0) {
               iVar11 = iVar12;
               if (iVar12 < 0) {
                  sVar49 = strlen((char*)pUVar40);
                  iVar11 = (int)sVar49;
               }

               if (iVar11 == 3) {
                  pUVar36 = pUVar40;
                  do {
                     cVar6 = uprv_isASCIILetter_76_godot((int)(char)*pUVar36);
                     if (cVar6 == '\0') goto LAB_00100dda;
                     pUVar36 = pUVar36 + 1;
                  }
 while ( pUVar36 != pUVar40 + 3 );
                  *pUVar45 = (ULanguageTag)0x0;
                  uVar17 = T_CString_toLowerCase_76_godot(pUVar40);
                  *(undefined8*)( local_278 + (long)iVar13 * 8 + 0x10 ) = uVar17;
                  iVar13 = iVar13 + 1;
                  bVar38 = ( iVar13 < 3 ) * '\x02' + 0xbc;
                  p_Var29 = local_278;
                  pUVar15 = pUVar45;
                  goto LAB_001023b8;
               }

            }

            LAB_00100dda:if (( ( bVar38 & 4 ) != 0 ) && ( pcVar41 = (char*)pUVar42 ),cVar6 = ultag_isScriptSubtag_76_godot((char*)pUVar40, iVar12),cVar6 != '\0') {
               *pUVar45 = (ULanguageTag)0x0;
               UVar8 = (ULanguageTag)uprv_toupper_76_godot((int)(char)*pUVar40);
               *pUVar40 = UVar8;
               UVar8 = pUVar40[1];
               pUVar15 = pUVar40 + 1;
               while (UVar8 != (ULanguageTag)0x0) {
                  UVar8 = (ULanguageTag)uprv_asciitolower_76_godot((int)(char)UVar8);
                  *pUVar15 = UVar8;
                  UVar8 = pUVar15[1];
                  pUVar15 = pUVar15 + 1;
               }
;
               bVar38 = 0xb8;
               *(ULanguageTag**)( local_278 + 0x28 ) = pUVar40;
               pUVar15 = pUVar45;
               LAB_001023b8:bVar52 = false;
               pUVar40 = local_260;
               if (local_260 == (ULanguageTag*)0x0) goto LAB_00101d68;
               goto LAB_00100d8e;
            }

            if (( ( bVar38 & 8 ) != 0 ) && ( pcVar41 = (char*)pUVar42 ),cVar6 = ultag_isRegionSubtag_76_godot((char*)pUVar40, iVar12),cVar6 != '\0') {
               *pUVar45 = (ULanguageTag)0x0;
               uVar17 = T_CString_toUpperCase_76_godot(pUVar40);
               *(undefined8*)( local_278 + 0x30 ) = uVar17;
               pcVar41 = (char*)local_278;
               LAB_001012a1:bVar38 = 0xb0;
               pUVar15 = pUVar45;
               goto LAB_001023b8;
            }

            if (( ( bVar38 & 0x10 ) == 0 ) || ( ( pcVar41 = (char*)pUVar42 ),cVar6 = (anonymous_namespace)::_isVariantSubtag((char*)pUVar40, iVar12),cVar6 == '\0' && ( ( !bVar30 || ( pcVar41 = (char*)pUVar42 ),cVar6 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength((char*)pUVar40, iVar12, 1, (int)p_Var29),cVar6 == '\0' ) ) )) {
               pUVar36 = pUVar15;
               if (( ( bVar38 & 0x20 ) != 0 ) && ( pcVar41 = (char*)pUVar42 ),cVar6 = (anonymous_namespace)::_isExtensionSingleton((char*)pUVar40, iVar12),cVar6 != '\0') {
                  pUVar42 = pUVar15;
                  if (local_270 != (UMemory*)0x0) {
                     if (( local_248 == (ULanguageTag*)0x0 ) || ( local_250 == (ULanguageTag*)0x0 )) {
                        LAB_00102f2a:icu_76_godot::UMemory::operator_delete(local_270, pcVar41);
                        goto LAB_0010231e;
                     }

                     *local_250 = (ULanguageTag)0x0;
                     uVar17 = T_CString_toLowerCase_76_godot(local_248);
                     *(undefined8*)( local_270 + 8 ) = uVar17;
                     pcVar41 = (char*)local_270;
                     cVar6 = (anonymous_namespace)::_addExtensionToList((ExtensionListEntry**)( local_278 + 0x40 ), (ExtensionListEntry*)local_270, false);
                     pUVar42 = local_250;
                     if (cVar6 == '\0') {
                        LAB_00102364:icu_76_godot::UMemory::operator_delete(local_270, pcVar41);
                        goto joined_r0x00102374;
                     }

                  }

                  local_250 = pUVar42;
                  pUVar15 = local_250;
                  local_270 = (UMemory*)icu_76_godot::UMemory::operator_new((UMemory*)0x18, (ulong)pcVar41);
                  pUVar42 = (ULanguageTag*)param_5;
                  if (*(int*)param_5 < 1) {
                     if (local_270 != (UMemory*)0x0) {
                        *pUVar45 = (ULanguageTag)0x0;
                        bVar38 = 0x40;
                        uVar17 = T_CString_toLowerCase_76_godot(pUVar40);
                        local_248 = (ULanguageTag*)0x0;
                        local_250 = (ULanguageTag*)0x0;
                        *(undefined8*)local_270 = uVar17;
                        *(undefined8*)( local_270 + 8 ) = 0;
                        pcVar41 = (char*)local_270;
                        goto LAB_001023b8;
                     }

                     *(undefined4*)param_5 = 7;
                  }
 else if (( local_270 != (UMemory*)0x0 ) && ( icu_76_godot::UMemory::operator_delete(local_270, param_5),*(int*)param_5 < 1 )) {
                     ulocimp_forLanguageTag_76_godot((char*)local_270, (int)pUVar42, extraout_RDX, (int*)p_Var29, pUVar43);
                     return;
                  }

                  (anonymous_namespace)::ultag_close(local_278, pUVar42);
                  goto LAB_00101ed0;
               }

               if (( ( bVar38 & 0x40 ) == 0 ) || ( cVar6 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength((char*)pUVar40, iVar12, 2, (int)p_Var29) ),pcVar41 = (char*)pUVar42,cVar6 == '\0') {
                  if (( bVar38 & 0x80 ) != 0) {
                     cVar6 = uprv_asciitolower_76_godot((int)(char)*pUVar40);
                     bVar30 = cVar6 == 'x' && iVar12 == 1;
                     if (cVar6 == 'x' && iVar12 == 1) {
                        if (local_270 != (UMemory*)0x0) {
                           if (( local_248 == (ULanguageTag*)0x0 ) || ( local_250 == (ULanguageTag*)0x0 )) goto LAB_00102f2a;
                           *local_250 = (ULanguageTag)0x0;
                           uVar17 = T_CString_toLowerCase_76_godot(local_248);
                           *(undefined8*)( local_270 + 8 ) = uVar17;
                           pcVar41 = (char*)local_270;
                           cVar6 = (anonymous_namespace)::_addExtensionToList((ExtensionListEntry**)( local_278 + 0x40 ), (ExtensionListEntry*)local_270, false);
                           pUVar36 = local_250;
                           if (cVar6 == '\0') goto LAB_00102364;
                        }

                        pUVar15 = local_260;
                        if (local_260 != (ULanguageTag*)0x0) {
                           do {
                              UVar8 = *pUVar15;
                              pUVar42 = (ULanguageTag*)0x0;
                              pUVar40 = (ULanguageTag*)0x0;
                              pUVar45 = pUVar15;
                              if (UVar8 != (ULanguageTag)0x0) {
                                 do {
                                    if (UVar8 == (ULanguageTag)0x2d) {
                                       pUVar40 = pUVar45 + 1;
                                       pUVar42 = (ULanguageTag*)( ulong )(uint)((int)pUVar45 - (int)pUVar15);
                                       goto LAB_00100ee7;
                                    }

                                    UVar8 = pUVar45[1];
                                    pUVar45 = pUVar45 + 1;
                                 }
 while ( UVar8 != (ULanguageTag)0x0 );
                                 pUVar40 = (ULanguageTag*)0x0;
                                 pUVar42 = (ULanguageTag*)( ulong )(uint)((int)pUVar45 - (int)pUVar15);
                              }

                              LAB_00100ee7:pcVar41 = "lvariant";
                              iVar12 = strncmp((char*)pUVar15, "lvariant", 8);
                              if (iVar12 == 0) goto LAB_001023a5;
                              cVar6 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength((char*)pUVar15, (int)pUVar42, 1, (int)p_Var29);
                              if (( cVar6 == '\0' ) || ( pUVar36 = pUVar45 ),pUVar15 = pUVar40,pUVar40 == (ULanguageTag*)0x0) {
                                 pcVar41 = (char*)pUVar42;
                                 if (pUVar36 != local_260 && -1 < (long)pUVar36 - (long)local_260) {
                                    *pUVar36 = (ULanguageTag)0x0;
                                    uVar17 = T_CString_toLowerCase_76_godot(local_260);
                                    *(undefined8*)( local_278 + 0x48 ) = uVar17;
                                    pcVar41 = (char*)local_278;
                                 }

                                 break;
                              }

                           }
 while ( true );
                        }

                        goto LAB_0010231e;
                     }

                  }

                  goto LAB_00101d68;
               }

               if (local_248 == (ULanguageTag*)0x0) {
                  local_248 = pUVar40;
               }

               bVar38 = 0xe0;
               local_250 = pUVar45;
               goto LAB_001023b8;
            }

            pUVar23 = (UMemory*)icu_76_godot::UMemory::operator_new((UMemory*)&DAT_00000010, (ulong)pcVar41);
            if (pUVar23 == (UMemory*)0x0) {
               if (*(int*)param_5 < 1) {
                  *(undefined4*)param_5 = 7;
               }

            }
 else {
               if (*(int*)param_5 < 1) {
                  *pUVar45 = (ULanguageTag)0x0;
                  uVar17 = T_CString_toUpperCase_76_godot(pUVar40);
                  pcVar41 = (char*)&local_1d8;
                  *(undefined8*)pUVar23 = uVar17;
                  local_1d8 = pUVar23;
                  cVar6 = (anonymous_namespace)::_addVariantToList(local_278 + 0x38);
                  if (local_1d8 != (UMemory*)0x0) {
                     icu_76_godot::UMemory::operator_delete(local_1d8, pcVar41);
                  }

                  if (cVar6 != '\0') goto LAB_001012a1;
                  goto LAB_00101d68;
               }

               icu_76_godot::UMemory::operator_delete(pUVar23, pcVar41);
            }

            (anonymous_namespace)::ultag_close(local_278, (ULanguageTag*)pcVar41);
            if (local_270 != (UMemory*)0x0) {
               icu_76_godot::UMemory::operator_delete(local_270, pcVar41);
            }

            LAB_00101ed0:if (0 < *(int*)param_5) goto LAB_00101de7;
            local_278 = (_anonymous_namespace_*)0x0;
            pEVar22 = _DAT_00000010;
            goto LAB_0010234f;
         }

         if (0 < *(int*)param_5) goto LAB_00101140;
         pEVar22 = (ExtensionListEntry*)0x0;
         bVar52 = false;
         goto LAB_00100f55;
      }

      LAB_00101ddc:*(undefined4*)param_5 = 7;
   }

   LAB_00101de7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   goto LAB_00103191;
   LAB_001023a5:*pUVar45 = (ULanguageTag)0x0;
   bVar38 = 0x10;
   local_270 = (UMemory*)0x0;
   pUVar15 = pUVar36;
   local_260 = pUVar40;
   goto LAB_001023b8;
   LAB_00101d68:pUVar36 = pUVar15;
   if (local_270 == (UMemory*)0x0) {
      LAB_0010231e:iVar13 = (int)pUVar36;
      if (param_4 == (int*)0x0) goto LAB_0010237a;
      LAB_00102326:*param_4 = local_238 + ( iVar13 - (int)*(undefined8*)local_278 );
      pcVar41 = (char*)local_278;
      if (*(int*)param_5 < 1) {
         pEVar22 = *(ExtensionListEntry**)( local_278 + 0x10 );
         LAB_0010234f:bVar52 = *(long*)( local_278 + 0x10 ) != 0;
         LAB_00100f55:if (( ( *(long*)( local_278 + 0x18 ) == 0 ) && ( *(long*)( local_278 + 0x20 ) == 0 ) ) && ( !bVar52 )) {
            pEVar22 = *(ExtensionListEntry**)( local_278 + 8 );
         }

         pcVar41 = (char*)&(anonymous_namespace)::LANG_UND;
         iVar13 = strcmp((char*)pEVar22, "und");
         bVar52 = true;
         if (iVar13 != 0) {
            sVar49 = strlen((char*)pEVar22);
            if (0 < (int)sVar49) {
               ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, pEVar22, sVar49 & 0xffffffff);
               bVar52 = false;
               pcVar41 = (char*)pEVar22;
            }

         }

         pcVar34 = *(char**)( local_278 + 0x28 );
         sVar49 = strlen(pcVar34);
         if (0 < (int)sVar49) {
            ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, &_LC0, 1);
            uVar7 = uprv_toupper_76_godot((int)*pcVar34);
            local_1d8 = (UMemory*)CONCAT71(local_1d8._1_7_, uVar7);
            ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, &local_1d8, 1);
            pcVar41 = pcVar34 + 1;
            ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, pcVar41, (int)sVar49 + -1);
            bVar52 = false;
         }

         pcVar34 = *(char**)( local_278 + 0x30 );
         sVar49 = strlen(pcVar34);
         if ((int)sVar49 < 1) {
            puVar19 = *(undefined8**)( local_278 + 0x38 );
            if (puVar19 != (undefined8*)0x0) {
               puVar18 = (undefined8*)puVar19[1];
               bVar30 = true;
               puVar5 = puVar18;
               puVar35 = puVar19;
               if (puVar18 != (undefined8*)0x0) goto LAB_001010c8;
               uVar47 = 0;
               LAB_00101304:( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, &_LC0, 1);
               puVar19 = *(undefined8**)( local_278 + 0x38 );
               if (puVar19 == (undefined8*)0x0) {
                  ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, &_LC0, 1);
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               bVar52 = false;
               goto LAB_0010132e;
            }

            LAB_001013dd:if (*(long*)( local_278 + 0x40 ) == 0) {
               LAB_00101124:if (**(char**)( local_278 + 0x48 ) == '\0') goto LAB_00101140;
            }
 else if (bVar52) {
               pcVar41 = (char*)&(anonymous_namespace)::LANG_UND;
               ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, &(anonymous_namespace)::LANG_UND, 3);
            }

         }
 else {
            pcVar41 = &_LC0;
            ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, &_LC0, 1);
            cVar6 = *pcVar34;
            while (cVar6 != '\0') {
               pcVar34 = pcVar34 + 1;
               uVar7 = uprv_toupper_76_godot((int)cVar6);
               local_1d8 = (UMemory*)CONCAT71(local_1d8._1_7_, uVar7);
               pcVar41 = (char*)&local_1d8;
               ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, (ExtensionListEntry*)&local_1d8, 1);
               cVar6 = *pcVar34;
            }
;
            puVar19 = *(undefined8**)( local_278 + 0x38 );
            if (puVar19 != (undefined8*)0x0) {
               puVar18 = (undefined8*)puVar19[1];
               if (puVar18 == (undefined8*)0x0) {
                  bVar52 = false;
                  uVar47 = 0;
               }
 else {
                  bVar52 = false;
                  bVar30 = false;
                  puVar5 = puVar18;
                  puVar35 = puVar19;
                  LAB_001010c8:do {
                     puVar50 = puVar5;
                     pcVar41 = (char*)*puVar18;
                     pcVar34 = (char*)*puVar35;
                     iVar13 = strcmp(pcVar34, pcVar41);
                     if (0 < iVar13) {
                        *puVar35 = pcVar41;
                        *puVar18 = pcVar34;
                     }

                     puVar18 = (undefined8*)puVar18[1];
                     puVar5 = puVar50;
                  }
 while ( ( puVar18 != (undefined8*)0x0 ) || ( puVar18 = (undefined8*)puVar50[1] ),puVar5 = puVar18,puVar35 = puVar50,puVar18 != (undefined8*)0x0 );
                  puVar18 = puVar19;
                  uVar27 = 0;
                  do {
                     uVar47 = uVar27;
                     puVar18 = (undefined8*)puVar18[1];
                     uVar27 = uVar47 + 1;
                  }
 while ( puVar18 != (undefined8*)0x0 );
                  if (bVar30) goto LAB_00101304;
               }

               LAB_0010132e:uVar27 = 0;
               while (true) {
                  uVar33 = uVar27;
                  pcVar41 = (char*)*puVar19;
                  ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, &_LC0, 1);
                  cVar6 = *pcVar41;
                  while (cVar6 != '\0') {
                     uVar7 = uprv_toupper_76_godot();
                     pcVar41 = pcVar41 + 1;
                     local_1d8 = (UMemory*)CONCAT71(local_1d8._1_7_, uVar7);
                     ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, &local_1d8, 1);
                     cVar6 = *pcVar41;
                  }
;
                  pcVar41 = (char*)( ulong )(uVar33 + 1);
                  if (uVar47 == uVar33) break;
                  puVar19 = *(undefined8**)( local_278 + 0x38 );
                  if (puVar19 == (undefined8*)0x0) {
                     FUN_001062e6();
                     return;
                  }

                  uVar31 = 0;
                  do {
                     puVar19 = (undefined8*)puVar19[1];
                     if (puVar19 == (undefined8*)0x0) {
                        FUN_001062e6();
                        return;
                     }

                     bVar30 = uVar33 != uVar31;
                     uVar27 = uVar33 + 1;
                     uVar31 = uVar31 + 1;
                  }
 while ( bVar30 );
               }
;
               goto LAB_001013dd;
            }

            if (*(long*)( local_278 + 0x40 ) == 0) goto LAB_00101124;
         }

         if (*(int*)param_5 < 1) {
            local_1b0 = local_1a0;
            local_208 = (ExtensionListEntry*)0x0;
            local_150 = local_140;
            local_1b8 = 0;
            pcVar34 = *(char**)( local_278 + 0x40 );
            local_1a8 = 8;
            local_1a4 = '\0';
            local_158 = 0;
            local_148 = 8;
            local_144 = '\0';
            if (pcVar34 == (char*)0x0) {
               pcVar34 = *(char**)( local_278 + 0x48 );
               sVar49 = strlen(pcVar34);
               if ((int)sVar49 < 1) {
                  iVar13 = *(int*)param_5;
                  LAB_00102427:pEVar22 = local_208;
                  if (( iVar13 < 1 ) && ( local_208 != (ExtensionListEntry*)0x0 )) {
                     ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, &_LC1, 1);
                     while (true) {
                        pcVar41 = *(char**)pEVar22;
                        sVar49 = strlen(pcVar41);
                        ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, pcVar41, sVar49 & 0xffffffff);
                        ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, &_LC2, 1);
                        pcVar41 = *(char**)( pEVar22 + 8 );
                        sVar49 = strlen(pcVar41);
                        ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, pcVar41, sVar49 & 0xffffffff);
                        pEVar22 = *(ExtensionListEntry**)( pEVar22 + 0x10 );
                        if (pEVar22 == (ExtensionListEntry*)0x0) break;
                        ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, &_LC3, 1);
                     }
;
                  }

               }
 else {
                  local_260._0_1_ = '\0';
                  LAB_00102a91:pcVar41 = (char*)icu_76_godot::UMemory::operator_new((UMemory*)0x18, (ulong)pcVar41);
                  if ((ExtensionListEntry*)pcVar41 == (ExtensionListEntry*)0x0) {
                     LAB_00103126:lVar48 = (long)local_1b8;
                     pcVar41 = (char*)0x0;
                     local_1b8 = local_1b8 + 1;
                     *(undefined8*)( local_1b0 + lVar48 * 8 ) = 0;
                     LAB_00102746:*(undefined4*)param_5 = 7;
                  }
 else {
                     *(undefined8*)( (ExtensionListEntry*)pcVar41 + 0x10 ) = 0;
                     lVar48 = (long)local_1b8;
                     local_1b8 = local_1b8 + 1;
                     *(char**)( local_1b0 + lVar48 * 8 ) = pcVar41;
                     *(undefined2**)pcVar41 = &(anonymous_namespace)::PRIVATEUSE_KEY;
                     *(char**)( (ExtensionListEntry*)pcVar41 + 8 ) = pcVar34;
                     cVar6 = (anonymous_namespace)::_addExtensionToList(&local_208, (ExtensionListEntry*)pcVar41, false);
                     if (cVar6 == '\0') {
                        LAB_00102af2:*(undefined4*)param_5 = 1;
                     }
 else {
                        LAB_001023f8:iVar13 = *(int*)param_5;
                        if (iVar13 < 1) {
                           if ((char)local_260 != '\0') {
                              pcVar41 = "_POSIX";
                              ( **(code**)( *(long*)param_3 + 0x10 ) )(param_3, "_POSIX", 6);
                              iVar13 = *(int*)param_5;
                           }

                           goto LAB_00102427;
                        }

                     }

                  }

               }

            }
 else {
               pcVar41 = pcVar34;
               iVar13 = 0;
               do {
                  iVar12 = iVar13;
                  pcVar41 = *(char**)( pcVar41 + 0x10 );
                  iVar13 = iVar12 + 1;
               }
 while ( pcVar41 != (char*)0x0 );
               local_260 = (ULanguageTag*)0x0;
               pcVar37 = *(char**)pcVar34;
               iVar13 = 0;
               pcVar41 = (char*)&local_208;
               LAB_001014d8:pEVar21 = *(ExtensionListEntry**)( pcVar34 + 8 );
               pEVar22 = pEVar21;
               iVar11 = iVar13;
               if (*pcVar37 == 'u') goto LAB_001016bd;
               LAB_001014f1:iVar13 = local_1a8;
               if (local_1a8 == local_1b8) {
                  if (local_1a8 == 8) {
                     pEVar22 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                     if (pEVar22 != (ExtensionListEntry*)0x0) {
                        iVar46 = 0x20;
                        LAB_001015a0:if (local_1a8 < iVar13) {
                           iVar13 = local_1a8;
                        }

                        if (iVar46 < iVar13) {
                           iVar13 = iVar46;
                        }

                        pcVar41 = (char*)local_1b0;
                        __memcpy_chk(pEVar22, local_1b0, (long)iVar13 << 3);
                        goto joined_r0x001015d7;
                     }

                  }
 else {
                     iVar46 = local_1a8 * 2;
                     if (( 0 < iVar46 ) && ( pEVar22 = (ExtensionListEntry*)uprv_malloc_76_godot((long)iVar46 << 3) ),pEVar22 != (ExtensionListEntry*)0x0) {
                        if (iVar13 != 0) goto LAB_001015a0;
                        joined_r0x001015d7:if (local_1a4 != '\0') {
                           uprv_free_76_godot(local_1b0);
                        }

                        local_1a4 = '\x01';
                        local_1b0 = pEVar22;
                        local_1a8 = iVar46;
                        goto LAB_001015f5;
                     }

                  }

                  LAB_0010151b:uVar14 = 7;
               }
 else {
                  LAB_001015f5:pcVar41 = (char*)icu_76_godot::UMemory::operator_new((UMemory*)0x18, (ulong)pcVar41);
                  if ((ExtensionListEntry*)pcVar41 == (ExtensionListEntry*)0x0) {
                     lVar48 = (long)local_1b8;
                     local_1b8 = local_1b8 + 1;
                     *(undefined8*)( local_1b0 + lVar48 * 8 ) = 0;
                     goto LAB_0010151b;
                  }

                  *(undefined8*)( (ExtensionListEntry*)pcVar41 + 0x10 ) = 0;
                  lVar48 = (long)local_1b8;
                  local_1b8 = local_1b8 + 1;
                  *(char**)( local_1b0 + lVar48 * 8 ) = pcVar41;
                  *(char**)pcVar41 = pcVar37;
                  *(ExtensionListEntry**)( (ExtensionListEntry*)pcVar41 + 8 ) = pEVar21;
                  cVar6 = (anonymous_namespace)::_addExtensionToList((ExtensionListEntry**)&local_208, (ExtensionListEntry*)pcVar41, false);
                  if (cVar6 != '\0') {
                     do {
                        iVar13 = iVar11 + 1;
                        if (iVar12 == iVar11) {
                           if (0 < *(int*)param_5) goto LAB_00101530;
                           pcVar34 = *(char**)( local_278 + 0x48 );
                           sVar49 = strlen(pcVar34);
                           iVar13 = local_1a8;
                           if ((int)sVar49 < 1) goto LAB_001023f8;
                           if (local_1a8 != local_1b8) goto LAB_00102a91;
                           if (local_1a8 == 8) {
                              pEVar22 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                              if (pEVar22 == (ExtensionListEntry*)0x0) goto LAB_00102746;
                              iVar12 = 0x20;
                              lVar48 = 0x100;
                              LAB_00103025:if (local_1a8 < iVar13) {
                                 iVar13 = local_1a8;
                              }

                              if (iVar12 < iVar13) {
                                 iVar13 = iVar12;
                              }

                              pcVar41 = (char*)local_1b0;
                              __memcpy_chk(pEVar22, local_1b0, (long)iVar13 << 3, lVar48);
                           }
 else {
                              iVar12 = local_1a8 * 2;
                              if (iVar12 < 1) goto LAB_00102746;
                              lVar48 = (long)iVar12 << 3;
                              pEVar22 = (ExtensionListEntry*)uprv_malloc_76_godot(lVar48);
                              if (pEVar22 == (ExtensionListEntry*)0x0) goto LAB_00102746;
                              if (iVar13 != 0) goto LAB_00103025;
                           }

                           if (local_1a4 != '\0') {
                              uprv_free_76_godot(local_1b0);
                           }

                           local_1a4 = '\x01';
                           local_1b0 = pEVar22;
                           local_1a8 = iVar12;
                           goto LAB_00102a91;
                        }

                        pcVar34 = *(char**)( local_278 + 0x40 );
                        if (pcVar34 == (char*)0x0) {
                           FUN_00106303();
                           return;
                        }

                        pcVar37 = pcVar34;
                        iVar46 = 0;
                        do {
                           pcVar37 = *(char**)( pcVar37 + 0x10 );
                           if (pcVar37 == (char*)0x0) goto LAB_0010168f;
                           bVar52 = iVar46 != iVar11;
                           iVar46 = iVar46 + 1;
                        }
 while ( bVar52 );
                        pcVar37 = *(char**)pcVar37;
                        LAB_0010168f:iVar46 = 0;
                        while (true) {
                           pcVar34 = *(char**)( pcVar34 + 0x10 );
                           if (pcVar34 == (char*)0x0) break;
                           bVar52 = iVar11 == iVar46;
                           iVar46 = iVar46 + 1;
                           if (bVar52) goto LAB_001014d8;
                        }
;
                        pEVar21 = (ExtensionListEntry*)0x0;
                        pEVar22 = (ExtensionListEntry*)0x0;
                        iVar11 = iVar13;
                        if (*pcVar37 != 'u') goto LAB_001014f1;
                        LAB_001016bd:if (*(long*)( local_278 + 0x38 ) != 0) {
                           local_260 = (ULanguageTag*)0x1;
                        }

                        cVar6 = (char)local_260;
                        pcVar41 = (char*)local_260;
                        if (0 < *(int*)param_5) goto LAB_00101530;
                        local_f0 = local_e0;
                        local_200 = (ExtensionListEntry*)0x0;
                        local_90 = local_80;
                        local_1f8 = (AttributeListEntry*)0x0;
                        local_f8 = 0;
                        local_e8 = 8;
                        local_e4 = '\0';
                        local_98 = 0;
                        local_88 = 8;
                        local_84 = '\0';
                        while (*pEVar22 != (ExtensionListEntry)0x0) {
                           pUVar43 = (UErrorCode*)0x0;
                           pEVar21 = pEVar22 + 1;
                           pEVar24 = pEVar22;
                           if (*pEVar22 != (ExtensionListEntry)0x2d) {
                              do {
                                 pEVar24 = pEVar21;
                                 if (*pEVar24 == (ExtensionListEntry)0x0) break;
                                 pEVar21 = pEVar24 + 1;
                              }
 while ( *pEVar24 != (ExtensionListEntry)0x2d );
                              pUVar43 = (UErrorCode*)( ulong )(uint)(( 1 - (int)( pEVar22 + 1 ) ) + (int)pEVar24);
                           }

                           pcVar41 = (char*)pUVar43;
                           cVar9 = ultag_isUnicodeLocaleKey_76_godot((char*)pEVar22, (int)pUVar43);
                           iVar13 = local_88;
                           if (cVar9 != '\0') goto LAB_00101a6c;
                           if (local_88 == local_98) {
                              if (local_98 == 8) {
                                 pEVar21 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                                 if (pEVar21 != (ExtensionListEntry*)0x0) {
                                    iVar46 = 0x20;
                                    lVar48 = 0x100;
                                    LAB_001018c1:if (local_88 < iVar13) {
                                       iVar13 = local_88;
                                    }

                                    if (iVar46 < iVar13) {
                                       iVar13 = iVar46;
                                    }

                                    pcVar41 = (char*)local_90;
                                    pEVar21 = (ExtensionListEntry*)__memcpy_chk(pEVar21, local_90, (long)iVar13 << 3, lVar48);
                                    joined_r0x001018fb:if (local_84 != '\0') {
                                       uprv_free_76_godot(local_90);
                                    }

                                    local_84 = '\x01';
                                    local_90 = pEVar21;
                                    local_88 = iVar46;
                                    goto LAB_00101919;
                                 }

                              }
 else {
                                 iVar46 = local_98 * 2;
                                 if (0 < iVar46) {
                                    lVar48 = (long)iVar46 << 3;
                                    pEVar21 = (ExtensionListEntry*)uprv_malloc_76_godot(lVar48);
                                    if (pEVar21 != (ExtensionListEntry*)0x0) {
                                       if (iVar13 != 0) goto LAB_001018c1;
                                       goto joined_r0x001018fb;
                                    }

                                 }

                              }

                              LAB_001017e3:*(undefined4*)param_5 = 7;
                              pcVar41 = (char*)param_5;
                              goto LAB_001017ee;
                           }

                           LAB_00101919:local_260 = (ULanguageTag*)icu_76_godot::UMemory::operator_new((UMemory*)&DAT_00000010, (ulong)pcVar41);
                           iVar13 = local_e8;
                           if (local_260 == (ULanguageTag*)0x0) {
                              lVar48 = (long)local_98;
                              local_98 = local_98 + 1;
                              *(undefined8*)( local_90 + lVar48 * 8 ) = 0;
                              goto LAB_001017e3;
                           }

                           *(undefined1(*) [16])local_260 = (undefined1[16])0x0;
                           lVar48 = (long)local_98;
                           local_98 = local_98 + 1;
                           *(ULanguageTag**)( local_90 + lVar48 * 8 ) = local_260;
                           if (local_e8 == local_f8) {
                              if (local_e8 == 8) {
                                 pEVar21 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                                 if (pEVar21 != (ExtensionListEntry*)0x0) {
                                    lVar48 = 0x20;
                                    LAB_00101af1:iVar46 = (int)lVar48;
                                    if (local_e8 < iVar13) {
                                       iVar13 = local_e8;
                                    }

                                    lVar44 = (long)iVar13;
                                    if (iVar46 < iVar13) {
                                       lVar44 = lVar48;
                                    }

                                    pcVar41 = (char*)local_f0;
                                    pEVar21 = (ExtensionListEntry*)__memcpy_chk(pEVar21, local_f0, lVar44 << 3);
                                    joined_r0x00101b32:if (local_e4 != '\0') {
                                       uprv_free_76_godot(local_f0);
                                    }

                                    local_e4 = '\x01';
                                    local_f0 = pEVar21;
                                    local_e8 = iVar46;
                                    goto LAB_001019db;
                                 }

                              }
 else {
                                 iVar46 = local_e8 * 2;
                                 if (0 < iVar46) {
                                    pEVar21 = (ExtensionListEntry*)uprv_malloc_76_godot((long)iVar46 << 3);
                                    lVar48 = (long)iVar46;
                                    if (pEVar21 != (ExtensionListEntry*)0x0) {
                                       if (iVar13 != 0) goto LAB_00101af1;
                                       goto joined_r0x00101b32;
                                    }

                                 }

                              }

                              goto LAB_001017e3;
                           }

                           LAB_001019db:plVar20 = (long*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)pcVar41);
                           if (plVar20 == (long*)0x0) {
                              lVar48 = (long)local_f8;
                              local_f8 = local_f8 + 1;
                              *(undefined8*)( local_f0 + lVar48 * 8 ) = 0;
                              goto LAB_001017e3;
                           }

                           *plVar20 = (long)plVar20 + 0xd;
                           *(undefined4*)( plVar20 + 1 ) = 0x28;
                           *(undefined4*)( plVar20 + 7 ) = 0;
                           *(undefined2*)( (long)plVar20 + 0xc ) = 0;
                           icu_76_godot::CharString::append((char*)plVar20, (int)pEVar22, pUVar43);
                           lVar48 = (long)local_f8;
                           local_f8 = local_f8 + 1;
                           *(long**)( local_f0 + lVar48 * 8 ) = plVar20;
                           pcVar41 = (char*)pEVar22;
                           if (0 < *(int*)param_5) goto LAB_001017ee;
                           *(long*)local_260 = *plVar20;
                           (anonymous_namespace)::_addAttributeToList(&local_1f8, (AttributeListEntry*)local_260);
                           if (*pEVar24 == (ExtensionListEntry)0x0) break;
                           pEVar22 = pEVar24 + 1;
                        }
;
                        pEVar22 = (ExtensionListEntry*)0x0;
                        pcVar41 = (char*)local_260;
                        LAB_00101a6c:iVar13 = local_1a8;
                        pAVar4 = local_1f8;
                        if (local_1f8 == (AttributeListEntry*)0x0) {
                           LAB_00102215:lVar48 = 0;
                           if (0 < local_98) {
                              do {
                                 if (*(UMemory**)( local_90 + lVar48 * 8 ) != (UMemory*)0x0) {
                                    icu_76_godot::UMemory::operator_delete(*(UMemory**)( local_90 + lVar48 * 8 ), pcVar41);
                                 }

                                 lVar48 = lVar48 + 1;
                              }
 while ( (int)lVar48 < local_98 );
                           }

                           if (local_84 != '\0') {
                              uprv_free_76_godot(local_90);
                           }

                           lVar48 = 0;
                           if (0 < local_f8) {
                              do {
                                 pUVar23 = *(UMemory**)( local_f0 + lVar48 * 8 );
                                 if (pUVar23 != (UMemory*)0x0) {
                                    if (pUVar23[0xc] != (UMemory)0x0) {
                                       uprv_free_76_godot(*(undefined8*)pUVar23);
                                    }

                                    icu_76_godot::UMemory::operator_delete(pUVar23, pcVar41);
                                 }

                                 lVar48 = lVar48 + 1;
                              }
 while ( (int)lVar48 < local_f8 );
                           }

                           if (local_e4 != '\0') {
                              uprv_free_76_godot(local_f0);
                           }

                           if (pEVar22 != (ExtensionListEntry*)0x0) {
                              bVar38 = 0;
                              pEVar24 = (ExtensionListEntry*)0x0;
                              pEVar21 = (ExtensionListEntry*)0x0;
                              local_248 = (ULanguageTag*)0x0;
                              uVar47 = 0;
                              LAB_0010257a:uVar27 = (uint)pEVar21;
                              EVar10 = *pEVar22;
                              pEVar26 = pEVar22;
                              pEVar25 = pEVar24;
                              if (EVar10 != (ExtensionListEntry)0x0) goto LAB_001026a6;
                              do {
                                 bVar52 = true;
                                 pEVar28 = pEVar21;
                                 pEVar24 = (ExtensionListEntry*)0x0;
                                 pEVar51 = (ExtensionListEntry*)0x0;
                                 bVar3 = bVar38;
                                 LAB_00102591:if ((int)pEVar28 != 2) goto LAB_00102af2;
                                 pcVar41 = (char*)0x2;
                                 ulocimp_toLegacyKeyWithFallback_76_godot(&local_1f8, 2, pEVar25);
                                 iVar13 = local_148;
                                 bVar38 = local_1e8;
                                 if (local_1e8 == 0) goto LAB_00102af2;
                                 pEVar21 = local_1f0;
                                 if (local_1f0 == pEVar25) {
                                    if (local_148 == local_158) {
                                       if (local_148 == 8) {
                                          pEVar21 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                                          if (pEVar21 == (ExtensionListEntry*)0x0) goto LAB_00102746;
                                          lVar44 = 0x20;
                                          lVar48 = 0x100;
                                          LAB_00102ebb:iVar46 = (int)lVar44;
                                          if (local_148 < iVar13) {
                                             iVar13 = local_148;
                                          }

                                          lVar32 = (long)iVar13;
                                          if (iVar46 < iVar13) {
                                             lVar32 = lVar44;
                                          }

                                          pcVar41 = (char*)local_150;
                                          pEVar21 = (ExtensionListEntry*)__memcpy_chk(pEVar21, local_150, lVar32 << 3, lVar48);
                                       }
 else {
                                          iVar46 = local_148 * 2;
                                          if (iVar46 < 1) goto LAB_00102746;
                                          lVar48 = (long)iVar46 << 3;
                                          pEVar21 = (ExtensionListEntry*)uprv_malloc_76_godot(lVar48);
                                          if (pEVar21 == (ExtensionListEntry*)0x0) goto LAB_00102746;
                                          lVar44 = (long)iVar46;
                                          if (iVar13 != 0) goto LAB_00102ebb;
                                       }

                                       if (local_144 != '\0') {
                                          uprv_free_76_godot(local_150);
                                       }

                                       local_144 = '\x01';
                                       local_150 = pEVar21;
                                       local_148 = iVar46;
                                    }

                                    plVar20 = (long*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)pcVar41);
                                    if (plVar20 != (long*)0x0) {
                                       *plVar20 = (long)plVar20 + 0xd;
                                       *(undefined4*)( plVar20 + 1 ) = 0x28;
                                       *(undefined4*)( plVar20 + 7 ) = 0;
                                       *(undefined2*)( (long)plVar20 + 0xc ) = 0;
                                       icu_76_godot::CharString::append((char*)plVar20, (int)pEVar25, (UErrorCode*)0x2);
                                       lVar48 = (long)local_158;
                                       local_158 = local_158 + 1;
                                       *(long**)( local_150 + lVar48 * 8 ) = plVar20;
                                       pcVar41 = (char*)pEVar25;
                                       if (*(int*)param_5 < 1) {
                                          T_CString_toLowerCase_76_godot(*plVar20);
                                          pEVar21 = (ExtensionListEntry*)*plVar20;
                                          pcVar41 = (char*)pEVar25;
                                          goto LAB_001025d1;
                                       }

                                       goto LAB_00101530;
                                    }

                                    LAB_00103100:lVar48 = (long)local_158;
                                    local_158 = local_158 + 1;
                                    *(undefined8*)( local_150 + lVar48 * 8 ) = 0;
                                    goto LAB_00102746;
                                 }

                                 LAB_001025d1:if (local_248 == (ULanguageTag*)0x0) {
                                    pEVar26 = (ExtensionListEntry*)&(anonymous_namespace)::LOCALE_TYPE_YES;
                                 }
 else {
                                    pcVar41 = (char*)strlen((char*)pEVar21);
                                    ulocimp_toLegacyTypeWithFallback_76_godot(&local_1d8, pcVar41, pEVar21);
                                    iVar13 = local_148;
                                    pEVar26 = (ExtensionListEntry*)CONCAT44(uStack_1cc, local_1d0);
                                    if (local_1c8 == '\0') goto LAB_00102af2;
                                    if (pEVar26 == (ExtensionListEntry*)local_248) {
                                       if (local_148 == local_158) {
                                          if (local_148 == 8) {
                                             pEVar26 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                                             if (pEVar26 == (ExtensionListEntry*)0x0) goto LAB_00102746;
                                             lVar44 = 0x20;
                                             lVar48 = 0x100;
                                             LAB_00102f8d:iVar46 = (int)lVar44;
                                             if (local_148 < iVar13) {
                                                iVar13 = local_148;
                                             }

                                             lVar32 = (long)iVar13;
                                             if (iVar46 < iVar13) {
                                                lVar32 = lVar44;
                                             }

                                             pcVar41 = (char*)local_150;
                                             pEVar26 = (ExtensionListEntry*)__memcpy_chk(pEVar26, local_150, lVar32 << 3, lVar48);
                                          }
 else {
                                             iVar46 = local_148 * 2;
                                             if (iVar46 < 1) goto LAB_00102746;
                                             lVar48 = (long)iVar46 << 3;
                                             pEVar26 = (ExtensionListEntry*)uprv_malloc_76_godot(lVar48);
                                             if (pEVar26 == (ExtensionListEntry*)0x0) goto LAB_00102746;
                                             lVar44 = (long)iVar46;
                                             if (iVar13 != 0) goto LAB_00102f8d;
                                          }

                                          if (local_144 != '\0') {
                                             uprv_free_76_godot(local_150);
                                          }

                                          local_144 = '\x01';
                                          local_150 = pEVar26;
                                          local_148 = iVar46;
                                       }

                                       plVar20 = (long*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)pcVar41);
                                       if (plVar20 == (long*)0x0) goto LAB_00103100;
                                       *plVar20 = (long)plVar20 + 0xd;
                                       *(undefined4*)( plVar20 + 1 ) = 0x28;
                                       *(undefined4*)( plVar20 + 7 ) = 0;
                                       *(undefined2*)( (long)plVar20 + 0xc ) = 0;
                                       icu_76_godot::CharString::append((char*)plVar20, (int)local_248, (UErrorCode*)(ulong)uVar47);
                                       lVar48 = (long)local_158;
                                       local_158 = local_158 + 1;
                                       *(long**)( local_150 + lVar48 * 8 ) = plVar20;
                                       pcVar41 = (char*)(ExtensionListEntry*)local_248;
                                       if (0 < *(int*)param_5) goto LAB_00101530;
                                       T_CString_toLowerCase_76_godot(*plVar20);
                                       pEVar26 = (ExtensionListEntry*)*plVar20;
                                       pcVar41 = (char*)local_248;
                                    }

                                 }

                                 if (( ( ( cVar6 == '\0' ) && ( *pEVar21 == (ExtensionListEntry)0x76 ) ) && ( pEVar21[1] == (ExtensionListEntry)0x61 ) ) && ( pEVar21[2] == (ExtensionListEntry)0x0 )) {
                                    pcVar41 = "posix";
                                    iVar13 = strcmp((char*)pEVar26, "posix");
                                    if (iVar13 != 0) goto LAB_00102720;
                                 }
 else {
                                    LAB_00102720:iVar13 = local_1a8;
                                    if (local_1a8 == local_1b8) {
                                       if (local_1a8 == 8) {
                                          pEVar25 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                                          if (pEVar25 == (ExtensionListEntry*)0x0) goto LAB_00102746;
                                          lVar48 = 0x20;
                                          LAB_0010277c:iVar46 = (int)lVar48;
                                          if (local_1a8 < iVar13) {
                                             iVar13 = local_1a8;
                                          }

                                          lVar44 = (long)iVar13;
                                          if (iVar46 < iVar13) {
                                             lVar44 = lVar48;
                                          }

                                          pcVar41 = (char*)local_1b0;
                                          pEVar25 = (ExtensionListEntry*)__memcpy_chk(pEVar25, local_1b0, lVar44 << 3);
                                       }
 else {
                                          iVar46 = local_1a8 * 2;
                                          if (( iVar46 < 1 ) || ( pEVar25 = (ExtensionListEntry*)uprv_malloc_76_godot((long)iVar46 << 3) ),pEVar25 == (ExtensionListEntry*)0x0) goto LAB_00102746;
                                          lVar48 = (long)iVar46;
                                          if (iVar13 != 0) goto LAB_0010277c;
                                       }

                                       if (local_1a4 != '\0') {
                                          uprv_free_76_godot(local_1b0);
                                       }

                                       local_1a4 = '\x01';
                                       local_1b0 = pEVar25;
                                       local_1a8 = iVar46;
                                    }

                                    pcVar41 = (char*)icu_76_godot::UMemory::operator_new((UMemory*)0x18, (ulong)pcVar41);
                                    if ((ExtensionListEntry*)pcVar41 == (ExtensionListEntry*)0x0) goto LAB_00103126;
                                    *(undefined8*)( (ExtensionListEntry*)pcVar41 + 0x10 ) = 0;
                                    lVar48 = (long)local_1b8;
                                    local_1b8 = local_1b8 + 1;
                                    *(char**)( local_1b0 + lVar48 * 8 ) = pcVar41;
                                    *(ExtensionListEntry**)pcVar41 = pEVar21;
                                    *(ExtensionListEntry**)( (ExtensionListEntry*)pcVar41 + 8 ) = pEVar26;
                                    (anonymous_namespace)::_addExtensionToList(&local_200, (ExtensionListEntry*)pcVar41, false);
                                    bVar38 = bVar3;
                                 }

                                 pEVar21 = (ExtensionListEntry*)0x0;
                                 if (pEVar51 != (ExtensionListEntry*)0x0) {
                                    pEVar21 = pEVar24;
                                 }

                                 uVar27 = (uint)pEVar21;
                                 if (bVar52) goto LAB_00102d13;
                                 EVar10 = *pEVar22;
                                 uVar47 = 0;
                                 local_248 = (ULanguageTag*)0x0;
                                 pEVar26 = pEVar22;
                                 pEVar25 = pEVar51;
                              }
 while ( EVar10 == (ExtensionListEntry)0x0 );
                              LAB_001026a6:if (EVar10 == (ExtensionListEntry)0x2d) {
                                 pEVar21 = (ExtensionListEntry*)0x0;
                                 pEVar22 = pEVar26;
                              }
 else {
                                 pEVar21 = pEVar26 + 1;
                                 do {
                                    pEVar22 = pEVar21;
                                    if (*pEVar22 == (ExtensionListEntry)0x0) break;
                                    pEVar21 = pEVar22 + 1;
                                 }
 while ( *pEVar22 != (ExtensionListEntry)0x2d );
                                 pEVar21 = (ExtensionListEntry*)( ulong )(uint)(( 1 - (int)( pEVar26 + 1 ) ) + (int)pEVar22);
                              }

                              uVar33 = (uint)pEVar21;
                              pcVar41 = (char*)pEVar21;
                              cVar9 = ultag_isUnicodeLocaleKey_76_godot((char*)pEVar26, uVar33);
                              pEVar28 = (ExtensionListEntry*)(ulong)uVar27;
                              if (cVar9 == '\0') {
                                 pEVar21 = pEVar28;
                                 pEVar24 = pEVar25;
                                 pUVar15 = (ULanguageTag*)pEVar26;
                                 if (local_248 != (ULanguageTag*)0x0) {
                                    pUVar15 = local_248;
                                    uVar33 = uVar47 + 1 + uVar33;
                                 }

                                 LAB_00102853:local_248 = pUVar15;
                                 pEVar22 = pEVar22 + ( *pEVar22 != (ExtensionListEntry)0x0 );
                                 uVar47 = uVar33;
                                 goto LAB_0010257a;
                              }

                              pEVar24 = pEVar26;
                              pUVar15 = local_248;
                              uVar33 = uVar47;
                              if (pEVar25 == (ExtensionListEntry*)0x0) goto LAB_00102853;
                              pEVar24 = pEVar21;
                              pEVar51 = pEVar26;
                              bVar3 = bVar38;
                              if (*pEVar22 == (ExtensionListEntry)0x0) {
                                 bVar52 = false;
                              }
 else {
                                 pEVar22 = pEVar22 + 1;
                                 bVar52 = false;
                              }

                              goto LAB_00102591;
                           }

                           bVar38 = 0;
                           LAB_00102d13:pEVar22 = local_200;
                           while (pEVar22 != (ExtensionListEntry*)0x0) {
                              pEVar21 = *(ExtensionListEntry**)( pEVar22 + 0x10 );
                              (anonymous_namespace)::_addExtensionToList(&local_208, pEVar22, false);
                              pEVar22 = pEVar21;
                           }
;
                           pcVar41 = (char*)(ulong)bVar38;
                           iVar13 = *(int*)param_5;
                           local_260 = (ULanguageTag*)(ulong)bVar38;
                        }
 else {
                           if (local_1a8 == local_1b8) {
                              if (local_1a8 == 8) {
                                 pEVar21 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                                 if (pEVar21 != (ExtensionListEntry*)0x0) {
                                    iVar46 = 0x20;
                                    LAB_00102dd5:if (local_1a8 < iVar13) {
                                       iVar13 = local_1a8;
                                    }

                                    if (iVar46 < iVar13) {
                                       iVar13 = iVar46;
                                    }

                                    pcVar41 = (char*)local_1b0;
                                    __memcpy_chk(pEVar21, local_1b0, (long)iVar13 << 3);
                                    goto LAB_00102020;
                                 }

                              }
 else {
                                 iVar46 = local_1a8 * 2;
                                 if (( 0 < iVar46 ) && ( pEVar21 = (ExtensionListEntry*)uprv_malloc_76_godot((long)iVar46 << 3) ),pEVar21 != (ExtensionListEntry*)0x0) {
                                    if (iVar13 != 0) goto LAB_00102dd5;
                                    LAB_00102020:if (local_1a4 != '\0') {
                                       uprv_free_76_godot(local_1b0);
                                    }

                                    local_1a4 = '\x01';
                                    local_1b0 = pEVar21;
                                    local_1a8 = iVar46;
                                    goto LAB_00102046;
                                 }

                              }

                              LAB_00101aab:*(undefined4*)param_5 = 7;
                           }
 else {
                              LAB_00102046:pEVar21 = (ExtensionListEntry*)icu_76_godot::UMemory::operator_new((UMemory*)0x18, (ulong)pcVar41);
                              iVar13 = local_148;
                              if (pEVar21 == (ExtensionListEntry*)0x0) {
                                 lVar48 = (long)local_1b8;
                                 local_1b8 = local_1b8 + 1;
                                 *(undefined8*)( local_1b0 + lVar48 * 8 ) = 0;
                                 goto LAB_00101aab;
                              }

                              *(undefined8*)( pEVar21 + 0x10 ) = 0;
                              *(undefined1(*) [16])pEVar21 = (undefined1[16])0x0;
                              lVar48 = (long)local_1b8;
                              local_1b8 = local_1b8 + 1;
                              *(ExtensionListEntry**)( local_1b0 + lVar48 * 8 ) = pEVar21;
                              if (local_148 == local_158) {
                                 if (local_148 == 8) {
                                    pEVar24 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                                    if (pEVar24 != (ExtensionListEntry*)0x0) {
                                       iVar46 = 0x20;
                                       LAB_00102b2d:if (local_148 < iVar13) {
                                          iVar13 = local_148;
                                       }

                                       if (iVar46 < iVar13) {
                                          iVar13 = iVar46;
                                       }

                                       pcVar41 = (char*)local_150;
                                       __memcpy_chk(pEVar24, local_150, (long)iVar13 << 3);
                                       goto LAB_001020eb;
                                    }

                                 }
 else {
                                    iVar46 = local_148 * 2;
                                    if (( 0 < iVar46 ) && ( pEVar24 = (ExtensionListEntry*)uprv_malloc_76_godot((long)iVar46 << 3) ),pEVar24 != (ExtensionListEntry*)0x0) {
                                       if (iVar13 != 0) goto LAB_00102b2d;
                                       LAB_001020eb:if (local_144 != '\0') {
                                          uprv_free_76_godot(local_150);
                                       }

                                       local_144 = '\x01';
                                       local_150 = pEVar24;
                                       local_148 = iVar46;
                                       goto LAB_00102111;
                                    }

                                 }

                                 goto LAB_00101aab;
                              }

                              LAB_00102111:plVar20 = (long*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)pcVar41);
                              if (plVar20 == (long*)0x0) {
                                 lVar48 = (long)local_158;
                                 local_158 = local_158 + 1;
                                 *(undefined8*)( local_150 + lVar48 * 8 ) = 0;
                                 goto LAB_00101aab;
                              }

                              *plVar20 = (long)plVar20 + 0xd;
                              lVar48 = (long)local_158;
                              *(undefined2*)( (long)plVar20 + 0xc ) = 0;
                              local_158 = local_158 + 1;
                              *(undefined4*)( plVar20 + 1 ) = 0x28;
                              *(undefined4*)( plVar20 + 7 ) = 0;
                              *(long**)( local_150 + lVar48 * 8 ) = plVar20;
                              pAVar39 = pAVar4;
                              do {
                                 pAVar1 = *(AttributeListEntry**)( pAVar39 + 8 );
                                 if (pAVar4 != pAVar39) {
                                    icu_76_godot::CharString::append((char)plVar20, (UErrorCode*)0x2d);
                                 }

                                 icu_76_godot::StringPiece::StringPiece((StringPiece*)&local_1d8, *(char**)pAVar39);
                                 icu_76_godot::CharString::append((char*)plVar20, (int)local_1d8, (UErrorCode*)(ulong)local_1d0);
                                 pAVar39 = pAVar1;
                              }
 while ( pAVar1 != (AttributeListEntry*)0x0 );
                              pcVar41 = (char*)param_5;
                              if (*(int*)param_5 < 1) {
                                 *(char**)pEVar21 = "attribute";
                                 lVar48 = *plVar20;
                                 *(undefined8*)( pEVar21 + 0x10 ) = 0;
                                 *(long*)( pEVar21 + 8 ) = lVar48;
                                 local_200 = pEVar21;
                                 goto LAB_00102215;
                              }

                           }

                           LAB_001017ee:lVar48 = 0;
                           if (0 < local_98) {
                              do {
                                 if (*(UMemory**)( local_90 + lVar48 * 8 ) != (UMemory*)0x0) {
                                    icu_76_godot::UMemory::operator_delete(*(UMemory**)( local_90 + lVar48 * 8 ), pcVar41);
                                 }

                                 lVar48 = lVar48 + 1;
                              }
 while ( (int)lVar48 < local_98 );
                           }

                           if (local_84 != '\0') {
                              uprv_free_76_godot(local_90);
                           }

                           lVar48 = 0;
                           if (0 < local_f8) {
                              do {
                                 pUVar23 = *(UMemory**)( local_f0 + lVar48 * 8 );
                                 if (pUVar23 != (UMemory*)0x0) {
                                    if (pUVar23[0xc] != (UMemory)0x0) {
                                       uprv_free_76_godot(*(undefined8*)pUVar23);
                                    }

                                    icu_76_godot::UMemory::operator_delete(pUVar23, pcVar41);
                                 }

                                 lVar48 = lVar48 + 1;
                              }
 while ( (int)lVar48 < local_f8 );
                           }

                           if (local_e4 != '\0') {
                              uprv_free_76_godot(local_f0);
                           }

                           local_260 = (ULanguageTag*)0x0;
                           iVar13 = *(int*)param_5;
                        }

                        if (0 < iVar13) goto LAB_00101530;
                     }
 while ( true );
                  }

                  uVar14 = 1;
               }

               *(undefined4*)param_5 = uVar14;
               pcVar41 = (char*)param_5;
            }

            LAB_00101530:lVar48 = 0;
            if (0 < local_158) {
               do {
                  pUVar23 = *(UMemory**)( local_150 + lVar48 * 8 );
                  if (pUVar23 != (UMemory*)0x0) {
                     if (pUVar23[0xc] != (UMemory)0x0) {
                        uprv_free_76_godot(*(undefined8*)pUVar23);
                     }

                     icu_76_godot::UMemory::operator_delete(pUVar23, pcVar41);
                  }

                  lVar48 = lVar48 + 1;
               }
 while ( (int)lVar48 < local_158 );
            }

            if (local_144 != '\0') {
               uprv_free_76_godot(local_150);
            }

            lVar48 = 0;
            if (0 < local_1b8) {
               do {
                  if (*(UMemory**)( local_1b0 + lVar48 * 8 ) != (UMemory*)0x0) {
                     icu_76_godot::UMemory::operator_delete(*(UMemory**)( local_1b0 + lVar48 * 8 ), pcVar41);
                  }

                  lVar48 = lVar48 + 1;
               }
 while ( (int)lVar48 < local_1b8 );
            }

            if (local_1a4 != '\0') {
               uprv_free_76_godot(local_1b0);
            }

         }

      }

   }
 else {
      if (( local_248 != (ULanguageTag*)0x0 ) && ( local_250 != (ULanguageTag*)0x0 )) {
         *local_250 = (ULanguageTag)0x0;
         uVar17 = T_CString_toLowerCase_76_godot(local_248);
         *(undefined8*)( local_270 + 8 ) = uVar17;
         pcVar41 = (char*)local_270;
         cVar6 = (anonymous_namespace)::_addExtensionToList((ExtensionListEntry**)( local_278 + 0x40 ), (ExtensionListEntry*)local_270, false);
         pUVar36 = local_250;
         if (cVar6 != '\0') goto LAB_0010231e;
      }

      icu_76_godot::UMemory::operator_delete(local_270, pcVar41);
      joined_r0x00102374:if (param_4 != (int*)0x0) {
         iVar13 = (int)pUVar15;
         goto LAB_00102326;
      }

      LAB_0010237a:if (*(int*)param_5 < 1) {
         pEVar22 = *(ExtensionListEntry**)( local_278 + 0x10 );
         goto LAB_0010234f;
      }

   }

   LAB_00101140:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      (anonymous_namespace)::ultag_close(local_278, (ULanguageTag*)pcVar41);
      return;
   }

   LAB_00103191:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ultag_isUnicodeLocaleType_76_godot(char const*, int) */undefined8 ultag_isUnicodeLocaleType_76_godot(char *param_1, int param_2) {
   char cVar1;
   size_t sVar2;
   undefined8 uVar3;
   int in_ECX;
   int iVar4;
   char *pcVar5;
   char *pcVar6;
   if (param_2 < 0) {
      sVar2 = strlen(param_1);
      param_2 = (int)sVar2;
   }

   pcVar6 = (char*)0x0;
   pcVar5 = param_1;
   if (0 < param_2) {
      do {
         while (iVar4 = (int)pcVar5,*pcVar5 == '-') {
            if (pcVar6 == (char*)0x0) {
               return 0;
            }

            cVar1 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength(pcVar6, iVar4 - (int)pcVar6, 3, in_ECX);
            if (cVar1 == '\0') {
               return 0;
            }

            pcVar5 = pcVar5 + 1;
            pcVar6 = (char*)0x0;
            if ((long)param_2 <= (long)pcVar5 - (long)param_1) goto LAB_0010324b;
         }
;
         if (pcVar6 == (char*)0x0) {
            pcVar6 = pcVar5;
         }

         pcVar5 = pcVar5 + 1;
      }
 while ( (long)pcVar5 - (long)param_1 < (long)param_2 );
      LAB_0010324b:if (pcVar6 != (char*)0x0) {
         uVar3 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength(pcVar6, ( iVar4 + 1 ) - (int)pcVar6, 3, in_ECX);
         return uVar3;
      }

   }

   return 0;
}
/* ultag_getTKeyStart_76_godot(char const*) */char *ultag_getTKeyStart_76_godot(char *param_1) {
   char cVar1;
   char *pcVar2;
   size_t sVar3;
   int iVar4;
   while (pcVar2 = strchr(param_1, 0x2d),pcVar2 != (char*)0x0) {
      iVar4 = (int)pcVar2 - (int)param_1;
      if (iVar4 < 0) {
         sVar3 = strlen(param_1);
         iVar4 = (int)sVar3;
      }

      if (( ( iVar4 == 2 ) && ( cVar1 = uprv_isASCIILetter_76_godot((int)*param_1) ),cVar1 != '\0' )) goto LAB_001032ca;
      param_1 = pcVar2 + 1;
   }
;
   sVar3 = strlen(param_1);
   pcVar2 = (char*)0x0;
   if (( ( (int)sVar3 == 2 ) && ( cVar1 = uprv_isASCIILetter_76_godot((int)*param_1) ),cVar1 != '\0' )) {
      LAB_001032ca:pcVar2 = param_1;
   }

   return pcVar2;
}
/* ultag_isTransformedExtensionSubtags_76_godot(char const*, int) */uint ultag_isTransformedExtensionSubtags_76_godot(char *param_1, int param_2) {
   int *piVar1;
   int *piVar2;
   char cVar3;
   uint uVar4;
   size_t sVar5;
   int in_ECX;
   char *pcVar6;
   int *piVar7;
   long in_FS_OFFSET;
   uint local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_34 = 0;
   if (param_2 < 0) {
      sVar5 = strlen(param_1);
      param_2 = (int)sVar5;
   }

   if (param_2 < 1) {
      pcVar6 = (char*)0x0;
   }
 else {
      pcVar6 = (char*)0x0;
      piVar1 = (int*)( param_1 + ( ulong )(param_2 - 1) + 2 );
      piVar2 = (int*)( param_1 + 1 );
      do {
         while (piVar7 = piVar2,*(char*)( (long)piVar7 + -1 ) == '-') {
            cVar3 = (anonymous_namespace)::_isTransformedExtensionSubtag((_anonymous_namespace_*)&local_34, (int*)param_1, pcVar6, in_ECX);
            if (cVar3 == '\0') goto LAB_001033a6;
            pcVar6 = (char*)0x0;
            piVar2 = (int*)( (long)piVar7 + 1 );
            param_1 = (char*)piVar7;
            if ((int*)( (long)piVar7 + 1 ) == piVar1) goto LAB_00103397;
         }
;
         pcVar6 = (char*)( ulong )((int)pcVar6 + 1);
         piVar2 = (int*)( (long)piVar7 + 1 );
      }
 while ( (int*)( (long)piVar7 + 1 ) != piVar1 );
   }

   LAB_00103397:cVar3 = (anonymous_namespace)::_isTransformedExtensionSubtag((_anonymous_namespace_*)&local_34, (int*)param_1, pcVar6, in_ECX);
   if (cVar3 == '\0') {
      LAB_001033a6:uVar4 = 0;
   }
 else {
      uVar4 = ~local_34 >> 0x1f;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ultag_isUnicodeExtensionSubtags_76_godot(char const*, int) */uint ultag_isUnicodeExtensionSubtags_76_godot(char *param_1, int param_2) {
   int *piVar1;
   int *piVar2;
   char cVar3;
   uint uVar4;
   size_t sVar5;
   int in_ECX;
   char *pcVar6;
   int *piVar7;
   long in_FS_OFFSET;
   uint local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_34 = 0;
   if (param_2 < 0) {
      sVar5 = strlen(param_1);
      param_2 = (int)sVar5;
   }

   if (param_2 < 1) {
      pcVar6 = (char*)0x0;
   }
 else {
      pcVar6 = (char*)0x0;
      piVar1 = (int*)( param_1 + ( ulong )(param_2 - 1) + 2 );
      piVar2 = (int*)( param_1 + 1 );
      do {
         while (piVar7 = piVar2,*(char*)( (long)piVar7 + -1 ) == '-') {
            cVar3 = (anonymous_namespace)::_isUnicodeExtensionSubtag((_anonymous_namespace_*)&local_34, (int*)param_1, pcVar6, in_ECX);
            if (cVar3 == '\0') goto LAB_00103486;
            pcVar6 = (char*)0x0;
            piVar2 = (int*)( (long)piVar7 + 1 );
            param_1 = (char*)piVar7;
            if ((int*)( (long)piVar7 + 1 ) == piVar1) goto LAB_00103477;
         }
;
         pcVar6 = (char*)( ulong )((int)pcVar6 + 1);
         piVar2 = (int*)( (long)piVar7 + 1 );
      }
 while ( (int*)( (long)piVar7 + 1 ) != piVar1 );
   }

   LAB_00103477:cVar3 = (anonymous_namespace)::_isUnicodeExtensionSubtag((_anonymous_namespace_*)&local_34, (int*)param_1, pcVar6, in_ECX);
   if (cVar3 == '\0') {
      LAB_00103486:uVar4 = 0;
   }
 else {
      uVar4 = ~local_34 >> 0x1f;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ulocimp_toLanguageTag_76_godot(char const*, icu_76_godot::ByteSink&, bool, UErrorCode&) */void ulocimp_toLanguageTag_76_godot(char *param_1, ByteSink *param_2, bool param_3, UErrorCode *param_4) {
   UMemory *pUVar1;
   bool bVar2;
   UMemory *pUVar3;
   uint uVar4;
   char cVar5;
   char cVar6;
   char cVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   ExtensionListEntry *pEVar11;
   long lVar12;
   ExtensionListEntry *pEVar13;
   size_t sVar14;
   ExtensionListEntry *pEVar15;
   UMemory *pUVar16;
   ExtensionListEntry *pEVar17;
   AttributeListEntry *pAVar18;
   long *plVar19;
   ExtensionListEntry *pEVar20;
   ExtensionListEntry *pEVar21;
   ExtensionListEntry *pEVar22;
   char cVar23;
   long lVar24;
   long lVar25;
   UMemory *pUVar26;
   undefined1 *puVar27;
   uint uVar28;
   char *pcVar29;
   char *pcVar30;
   char *pcVar31;
   char *pcVar32;
   uint uVar33;
   UMemory *pUVar34;
   ExtensionListEntry *pEVar35;
   long in_FS_OFFSET;
   char local_339;
   char *local_318;
   ExtensionListEntry *local_2f0;
   ExtensionListEntry *local_2e8;
   int local_2d0;
   int local_2cc;
   ExtensionListEntry *local_2c8;
   AttributeListEntry *local_2c0;
   UMemory *local_2b8;
   ExtensionListEntry *local_2b0;
   char local_2a8;
   UMemory *local_298;
   ExtensionListEntry *local_290;
   char local_288;
   ExtensionListEntry *local_278;
   char local_26c;
   ExtensionListEntry *local_238;
   char local_22c;
   uint local_200;
   ExtensionListEntry *local_1f8;
   undefined4 local_1f0;
   undefined2 local_1ec;
   uint local_1c0;
   int local_1b8;
   ExtensionListEntry *local_1b0;
   int local_1a8;
   char local_1a4;
   ExtensionListEntry local_1a0[72];
   int local_158;
   ExtensionListEntry *local_150;
   int local_148;
   char local_144;
   ExtensionListEntry local_140[72];
   int local_f8;
   ExtensionListEntry *local_f0;
   int local_e8;
   char local_e4;
   ExtensionListEntry local_e0[72];
   int local_98;
   undefined4 uStack_94;
   undefined8 local_90;
   int local_88;
   char local_84;
   ExtensionListEntry local_80[32];
   int local_60;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < *(int*)param_4) goto LAB_00103507;
   local_2d0 = 0;
   pEVar20 = (ExtensionListEntry*)param_4;
   ulocimp_canonicalize_76_godot((char*)&local_278, (UErrorCode*)param_1);
   if (local_2d0 < 1) {
      pEVar11 = (ExtensionListEntry*)locale_getKeywordsStart_76_godot(local_278);
      if (pEVar11 == local_278) {
         lVar12 = uloc_openKeywords_76_godot(pEVar11, &local_2d0);
         if (( local_2d0 < 1 ) && ( iVar8 = iVar8 == 1 )) {
            local_298 = (UMemory*)( (ulong)local_298 & 0xffffffff00000000 );
            pEVar11 = (ExtensionListEntry*)uenum_next_76_godot(lVar12, &local_298, &local_2d0);
            if (( (int)local_298 == 1 ) && ( *pEVar11 == (ExtensionListEntry)0x78 )) {
               sVar14 = strlen((char*)pEVar11);
               ulocimp_getKeywordValue_76_godot(&local_98, param_1, sVar14, pEVar11, &local_2d0);
               if (local_2d0 < 1) {
                  pcVar29 = (char*)CONCAT44(uStack_94, local_98);
                  pEVar20 = pEVar11;
                  iVar8 = local_60;
                  if (local_60 < 0) {
                     sVar14 = strlen(pcVar29);
                     iVar8 = (int)sVar14;
                     pEVar20 = pEVar11;
                  }

                  pcVar31 = (char*)0x0;
                  pcVar32 = pcVar29;
                  while (true) {
                     if ((long)iVar8 <= (long)pcVar32 - (long)pcVar29) break;
                     if (*pcVar32 == '-') {
                        if (( pcVar31 == (char*)0x0 ) || ( cVar23 = (anonymous_namespace)::_isPrivateuseValueSubtag(pcVar31, (int)pcVar32 - (int)pcVar31) ),cVar23 == '\0') goto LAB_0010547d;
                        pcVar31 = (char*)0x0;
                     }
 else if (pcVar31 == (char*)0x0) {
                        pcVar31 = pcVar32;
                     }

                     pcVar32 = pcVar32 + 1;
                  }
;
                  if (( pcVar31 == (char*)0x0 ) || ( cVar23 = (anonymous_namespace)::_isPrivateuseValueSubtag(pcVar31, (int)pcVar32 - (int)pcVar31) ),cVar23 == '\0') {
                     LAB_0010547d:if (!param_3) {
                        if (local_90._4_1_ != '\0') {
                           uprv_free_76_godot(CONCAT44(uStack_94, local_98));
                        }

                        goto LAB_001039aa;
                     }

                     goto LAB_001046b8;
                  }

                  ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, "und-x-", 6);
                  ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, CONCAT44(uStack_94, local_98), local_60);
               }
 else {
                  LAB_001046b8:*(undefined4*)param_4 = 1;
               }

               if (local_90._4_1_ != '\0') {
                  uprv_free_76_godot(CONCAT44(uStack_94, local_98));
               }

               if (lVar12 != 0) {
                  uenum_close_76_godot(lVar12);
               }

               goto LAB_00103563;
            }

         }

         LAB_001039aa:if (lVar12 != 0) {
            uenum_close_76_godot(lVar12);
         }

      }

      local_298 = (UMemory*)( (ulong)local_298 & 0xffffffff00000000 );
      if (*(int*)param_4 < 1) {
         ulocimp_getLanguage_76_godot((char*)&local_98, (UErrorCode*)local_278);
         if (( (int)local_298 < 1 ) || ( !param_3 )) {
            if (local_60 != 0) {
               cVar23 = ultag_isLanguageSubtag_76_godot((char*)CONCAT44(uStack_94, local_98), local_60);
               iVar8 = local_60;
               if (cVar23 != '\0') {
                  iVar9 = 0;
                  pcVar29 = (char*)CONCAT44(uStack_94, local_98);
                  puVar27 = (anonymous_namespace)::DEPRECATEDLANGS;
                  do {
                     sVar14 = strlen(puVar27);
                     if (iVar8 < (int)sVar14) break;
                     iVar10 = strcmp(pcVar29, puVar27);
                     if (iVar10 == 0) {
                        sVar14 = strlen((anonymous_namespace)::DEPRECATEDLANGS + (long)( iVar9 + 1 ) * 4);
                        pEVar20 = *(ExtensionListEntry**)param_2;
                        ( **(code**)( pEVar20 + 0x10 ) )(param_2, (anonymous_namespace)::DEPRECATEDLANGS + (long)( iVar9 + 1 ) * 4, sVar14 & 0xffffffff);
                        goto LAB_001035ef;
                     }

                     iVar9 = iVar9 + 2;
                     puVar27 = puVar27 + 8;
                  }
 while ( iVar9 != 0x9c );
                  ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, pcVar29, iVar8);
                  goto LAB_001035ef;
               }

               if (param_3) goto LAB_001035e9;
            }

            ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &(anonymous_namespace)::LANG_UND, 3);
         }
 else {
            LAB_001035e9:*(undefined4*)param_4 = 1;
         }

         LAB_001035ef:if (local_90._4_1_ != '\0') {
            uprv_free_76_godot(CONCAT44(uStack_94, local_98));
         }

         local_298 = (UMemory*)( (ulong)local_298 & 0xffffffff00000000 );
         if (*(int*)param_4 < 1) {
            ulocimp_getScript_76_godot((char*)&local_98, (UErrorCode*)local_278);
            if ((int)local_298 < 1) {
               if (local_60 != 0) {
                  cVar23 = ultag_isScriptSubtag_76_godot((char*)CONCAT44(uStack_94, local_98), local_60);
                  if (cVar23 == '\0') goto LAB_00103ce8;
                  ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &_LC6, 1);
                  ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, CONCAT44(uStack_94, local_98), local_60);
               }

            }
 else {
               LAB_00103ce8:if (param_3) {
                  *(undefined4*)param_4 = 1;
               }

            }

            if (local_90._4_1_ != '\0') {
               uprv_free_76_godot(CONCAT44(uStack_94, local_98));
            }

            local_298 = (UMemory*)( (ulong)local_298 & 0xffffffff00000000 );
            if (*(int*)param_4 < 1) {
               ulocimp_getRegion_76_godot((char*)&local_98, (UErrorCode*)local_278);
               if ((int)local_298 < 1) {
                  if (local_60 != 0) {
                     cVar23 = ultag_isRegionSubtag_76_godot((char*)CONCAT44(uStack_94, local_98), local_60);
                     if (cVar23 == '\0') goto LAB_00103cd0;
                     iVar8 = 0;
                     puVar27 = (anonymous_namespace)::DEPRECATEDREGIONS;
                     ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &_LC6, 1);
                     pcVar29 = (char*)CONCAT44(uStack_94, local_98);
                     do {
                        iVar9 = strcmp(pcVar29, puVar27);
                        if (iVar9 == 0) {
                           sVar14 = strlen((anonymous_namespace)::DEPRECATEDREGIONS + (long)( iVar8 + 1 ) * 3);
                           pEVar20 = *(ExtensionListEntry**)param_2;
                           ( **(code**)( pEVar20 + 0x10 ) )(param_2, (anonymous_namespace)::DEPRECATEDREGIONS + (long)( iVar8 + 1 ) * 3, sVar14 & 0xffffffff);
                           goto LAB_0010369f;
                        }

                        iVar8 = iVar8 + 2;
                        puVar27 = puVar27 + 6;
                     }
 while ( iVar8 != 0xc );
                     ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, pcVar29, local_60);
                  }

               }
 else {
                  LAB_00103cd0:if (param_3) {
                     *(undefined4*)param_4 = 1;
                  }

               }

               LAB_0010369f:if (local_90._4_1_ != '\0') {
                  uprv_free_76_godot(CONCAT44(uStack_94, local_98));
               }

               if (*(int*)param_4 < 1) {
                  local_2c0 = (AttributeListEntry*)( (ulong)local_2c0 & 0xffffffff00000000 );
                  pcVar29 = (char*)local_278;
                  ulocimp_getVariant_76_godot((char*)&local_98, (UErrorCode*)local_278);
                  cVar23 = 0 < (int)local_2c0 || (int)local_2c0 == -0x7c;
                  if (0 < (int)local_2c0 || (int)local_2c0 == -0x7c) {
                     if (param_3) {
                        *(undefined4*)param_4 = 1;
                     }

                     cVar23 = '\0';
                  }
 else if (local_60 != 0) {
                     local_2b8 = (UMemory*)0x0;
                     pcVar31 = (char*)CONCAT44(uStack_94, local_98);
                     LAB_00103d28:pcVar32 = (char*)0x0;
                     do {
                        while (true) {
                           pcVar30 = pcVar31;
                           cVar5 = *pcVar30;
                           if (cVar5 != '-' && cVar5 != '_') break;
                           *pcVar30 = '\0';
                           if (pcVar32 != (char*)0x0) goto LAB_00103e10;
                           if (param_3) goto LAB_00104c59;
                           LAB_00103dfd:pcVar31 = pcVar30 + 1;
                        }
;
                        if (cVar5 == '\0') goto code_r0x00103d4c;
                        if (pcVar32 != (char*)0x0) goto LAB_00103dfd;
                        pcVar31 = pcVar30 + 1;
                        pcVar32 = pcVar30;
                     }
 while ( true );
                  }

                  goto LAB_00103712;
               }

            }

         }

      }

   }
 else {
      *(int*)param_4 = local_2d0;
   }

   goto LAB_00103563;
   code_r0x00103d4c:if (pcVar32 != (char*)0x0) {
      LAB_00103e10:cVar6 = *pcVar32;
      pcVar29 = pcVar32;
      while (cVar6 != '\0') {
         cVar6 = uprv_asciitolower_76_godot();
         *pcVar29 = cVar6;
         cVar6 = pcVar29[1];
         pcVar29 = pcVar29 + 1;
      }
;
      pcVar29 = (char*)0xffffffff;
      cVar6 = (anonymous_namespace)::_isVariantSubtag(pcVar32, -1);
      if (cVar6 == '\0') {
         if (param_3) goto LAB_00104c59;
         pcVar29 = (char*)0xffffffff;
         cVar7 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength(pcVar32, -1, 1, (int)pEVar20);
         cVar6 = cVar23;
         if (cVar7 != '\0') goto LAB_00103d5e;
      }
 else {
         pcVar29 = "posix";
         iVar8 = strcmp(pcVar32, "posix");
         if (( iVar8 != 0 ) || ( local_60 != 5 )) {
            pUVar16 = (UMemory*)icu_76_godot::UMemory::operator_new((UMemory*)&DAT_00000010, (ulong)pcVar29);
            if (pUVar16 == (UMemory*)0x0) {
               pUVar16 = local_2b8;
               if (*(int*)param_4 < 1) {
                  *(undefined4*)param_4 = 7;
               }

               goto joined_r0x0010445c;
            }

            if (0 < *(int*)param_4) {
               icu_76_godot::UMemory::operator_delete(pUVar16, pcVar29);
               goto LAB_00103d5e;
            }

            *(char**)pUVar16 = pcVar32;
            pcVar29 = (char*)&local_298;
            local_298 = pUVar16;
            cVar7 = (anonymous_namespace)::_addVariantToList(&local_2b8);
            if (local_298 != (UMemory*)0x0) {
               icu_76_godot::UMemory::operator_delete(local_298, pcVar29);
            }

            cVar6 = cVar23;
            if (( cVar7 != '\x01' ) && ( param_3 )) goto LAB_00104c59;
         }

      }

      cVar23 = cVar6;
      pcVar31 = pcVar30 + 1;
      if (cVar5 != '-' && cVar5 != '_') goto LAB_00103d5e;
      goto LAB_00103d28;
   }

   if (!param_3) goto LAB_00103d5e;
   LAB_00104c59:*(undefined4*)param_4 = 1;
   pUVar16 = local_2b8;
   goto joined_r0x0010445c;
   LAB_00103d5e:pUVar16 = local_2b8;
   if (*(int*)param_4 < 1) {
      if (local_2b8 != (UMemory*)0x0) {
         pUVar26 = *(UMemory**)( local_2b8 + 8 );
         pUVar1 = local_2b8;
         while (pUVar3 = pUVar26,pUVar26 = pUVar3,pUVar34 = pUVar16,pUVar3 != (UMemory*)0x0) {
            do {
               pcVar29 = *(char**)pUVar26;
               pcVar31 = *(char**)pUVar1;
               iVar8 = strcmp(pcVar31, pcVar29);
               if (0 < iVar8) {
                  *(char**)pUVar1 = pcVar29;
                  *(char**)pUVar26 = pcVar31;
               }

               pUVar34 = pUVar26 + 8;
               pUVar26 = *(UMemory**)pUVar34;
            }
 while ( *(UMemory**)pUVar34 != (UMemory*)0x0 );
            pUVar1 = pUVar3;
            pUVar26 = *(UMemory**)( pUVar3 + 8 );
         }
;
         do {
            ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &_LC6, 1);
            pcVar29 = *(char**)pUVar34;
            sVar14 = strlen(pcVar29);
            pEVar20 = *(ExtensionListEntry**)param_2;
            ( **(code**)( pEVar20 + 0x10 ) )(param_2, pcVar29, sVar14 & 0xffffffff);
            pUVar1 = pUVar34 + 8;
            pUVar34 = *(UMemory**)pUVar1;
            if (*(UMemory**)pUVar1 == (UMemory*)0x0) goto LAB_00104468;
         }
 while ( true );
      }

   }
 else {
      joined_r0x0010445c:while (pUVar16 != (UMemory*)0x0) {
         LAB_00104468:pUVar1 = *(UMemory**)( pUVar16 + 8 );
         icu_76_godot::UMemory::operator_delete(pUVar16, pcVar29);
         pUVar16 = pUVar1;
      }
;
   }

   LAB_00103712:if (local_90._4_1_ != '\0') {
      uprv_free_76_godot(CONCAT44(uStack_94, local_98));
   }

   pEVar11 = local_278;
   if (*(int*)param_4 < 1) {
      local_1b0 = local_1a0;
      local_1b8 = 0;
      local_150 = local_140;
      local_f0 = local_e0;
      local_1a8 = 8;
      local_1a4 = '\0';
      local_158 = 0;
      local_148 = 8;
      local_144 = '\0';
      local_f8 = 0;
      local_e8 = 8;
      local_e4 = '\0';
      pcVar29 = (char*)param_4;
      lVar12 = uloc_openKeywords_76_godot(local_278);
      if (*(int*)param_4 < 1) {
         if (( lVar12 != 0 ) || ( cVar23 != '\0' )) goto LAB_001037ea;
         LAB_001039e8:lVar12 = 0;
         if (0 < local_f8) {
            do {
               pUVar16 = *(UMemory**)( local_f0 + lVar12 * 8 );
               if (pUVar16 != (UMemory*)0x0) {
                  if (pUVar16[0xc] != (UMemory)0x0) {
                     uprv_free_76_godot(*(undefined8*)pUVar16);
                  }

                  icu_76_godot::UMemory::operator_delete(pUVar16, pcVar29);
               }

               lVar12 = lVar12 + 1;
            }
 while ( (int)lVar12 < local_f8 );
         }

         if (local_e4 != '\0') {
            uprv_free_76_godot(local_f0);
         }

         lVar12 = 0;
         if (0 < local_158) {
            do {
               if (*(UMemory**)( local_150 + lVar12 * 8 ) != (UMemory*)0x0) {
                  icu_76_godot::UMemory::operator_delete(*(UMemory**)( local_150 + lVar12 * 8 ), pcVar29);
               }

               lVar12 = lVar12 + 1;
            }
 while ( (int)lVar12 < local_158 );
         }

         if (local_144 != '\0') {
            uprv_free_76_godot(local_150);
         }

         lVar12 = 0;
         if (0 < local_1b8) {
            do {
               if (*(UMemory**)( local_1b0 + lVar12 * 8 ) != (UMemory*)0x0) {
                  icu_76_godot::UMemory::operator_delete(*(UMemory**)( local_1b0 + lVar12 * 8 ), pcVar29);
               }

               lVar12 = lVar12 + 1;
            }
 while ( (int)lVar12 < local_1b8 );
         }

      }
 else {
         if (cVar23 != '\0') {
            LAB_001037ea:local_90 = local_80;
            local_2c8 = (ExtensionListEntry*)0x0;
            local_2c0 = (AttributeListEntry*)0x0;
            local_98 = 0;
            local_88 = 8;
            local_84 = '\0';
            local_2cc = 0;
            local_2f0 = (ExtensionListEntry*)0x0;
            local_2e8 = (ExtensionListEntry*)0x0;
            while (true) {
               pcVar29 = (char*)0x0;
               pEVar13 = (ExtensionListEntry*)uenum_next_76_godot(lVar12, 0, param_4);
               if (pEVar13 == (ExtensionListEntry*)0x0) break;
               sVar14 = strlen((char*)pEVar13);
               pEVar21 = (ExtensionListEntry*)&local_2cc;
               pEVar20 = pEVar13;
               pEVar17 = pEVar11;
               ulocimp_getKeywordValue_76_godot(&local_238, pEVar11, sVar14);
               uVar4 = local_200;
               if (local_2cc < 1) {
                  pEVar15 = (ExtensionListEntry*)strlen((char*)pEVar13);
                  pcVar29 = "attribute";
                  iVar8 = strcmp((char*)pEVar13, "attribute");
                  pEVar22 = local_238;
                  if (iVar8 == 0) {
                     if (0 < (int)uVar4) {
                        pEVar13 = (ExtensionListEntry*)( (long)&local_1ec + 1 );
                        uVar33 = 0;
                        while (true) {
                           local_1f0 = 0x28;
                           local_1c0 = 0;
                           local_1ec = 0;
                           local_1f8 = pEVar13;
                           if ((int)uVar4 <= (int)uVar33) break;
                           lVar25 = (long)(int)uVar33;
                           do {
                              uVar33 = uVar33 + 1;
                              pcVar29 = (char*)(ulong)(uint)(int)(char)local_238[lVar25];
                              if (local_238[lVar25] == (ExtensionListEntry)0x2d) break;
                              lVar25 = lVar25 + 1;
                              icu_76_godot::CharString::append((char)&local_1f8, (UErrorCode*)pcVar29);
                           }
 while ( uVar4 != uVar33 );
                           iVar8 = local_1a8;
                           if (0 < *(int*)param_4) {
                              if ((char)local_1ec != '\0') {
                                 uprv_free_76_godot(local_1f8);
                              }

                              goto LAB_00104d2b;
                           }

                           pcVar29 = (char*)(ulong)local_1c0;
                           if (( local_1c0 == 0 ) && ( (int)uVar4 <= (int)uVar33 )) goto LAB_0010496d;
                           pEVar21 = pEVar20;
                           if (local_1a8 == local_1b8) {
                              if (local_1a8 == 8) {
                                 pEVar17 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                                 if (pEVar17 != (ExtensionListEntry*)0x0) {
                                    iVar9 = 0x20;
                                    pEVar21 = (ExtensionListEntry*)0x100;
                                    LAB_001049b2:if (local_1a8 < iVar8) {
                                       iVar8 = local_1a8;
                                    }

                                    if (iVar9 < iVar8) {
                                       iVar8 = iVar9;
                                    }

                                    pcVar29 = (char*)local_1b0;
                                    pEVar17 = (ExtensionListEntry*)__memcpy_chk(pEVar17, local_1b0, (long)iVar8 << 3);
                                    LAB_001049e4:if (local_1a4 != '\0') {
                                       uprv_free_76_godot(local_1b0);
                                    }

                                    local_1a4 = '\x01';
                                    local_1b0 = pEVar17;
                                    local_1a8 = iVar9;
                                    goto LAB_00104a0a;
                                 }

                              }
 else {
                                 iVar9 = local_1a8 * 2;
                                 if (0 < iVar9) {
                                    pEVar21 = (ExtensionListEntry*)( (long)iVar9 << 3 );
                                    pEVar20 = pEVar21;
                                    pEVar17 = (ExtensionListEntry*)uprv_malloc_76_godot(pEVar21);
                                    if (pEVar17 != (ExtensionListEntry*)0x0) {
                                       if (iVar8 != 0) goto LAB_001049b2;
                                       goto LAB_001049e4;
                                    }

                                 }

                              }

                              LAB_00104967:*(undefined4*)param_4 = 7;
                              goto LAB_0010496d;
                           }

                           LAB_00104a0a:pAVar18 = (AttributeListEntry*)icu_76_godot::UMemory::operator_new((UMemory*)&DAT_00000010, (ulong)pcVar29);
                           iVar8 = local_e8;
                           if (pAVar18 == (AttributeListEntry*)0x0) {
                              lVar25 = (long)local_1b8;
                              local_1b8 = local_1b8 + 1;
                              *(undefined8*)( local_1b0 + lVar25 * 8 ) = 0;
                              pEVar20 = (ExtensionListEntry*)0x0;
                              goto LAB_00104967;
                           }

                           *(undefined1(*) [16])pAVar18 = (undefined1[16])0x0;
                           lVar25 = (long)local_1b8;
                           local_1b8 = local_1b8 + 1;
                           *(AttributeListEntry**)( local_1b0 + lVar25 * 8 ) = pAVar18;
                           if (local_e8 == local_f8) {
                              if (local_e8 == 8) {
                                 pEVar17 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                                 pEVar20 = pEVar21;
                                 if (pEVar17 != (ExtensionListEntry*)0x0) {
                                    lVar25 = 0x20;
                                    pEVar21 = (ExtensionListEntry*)0x100;
                                    LAB_00104ba6:iVar9 = (int)lVar25;
                                    if (local_e8 < iVar8) {
                                       iVar8 = local_e8;
                                    }

                                    lVar24 = (long)iVar8;
                                    if (iVar9 < iVar8) {
                                       lVar24 = lVar25;
                                    }

                                    pcVar29 = (char*)local_f0;
                                    pEVar17 = (ExtensionListEntry*)__memcpy_chk(pEVar17, local_f0, lVar24 << 3);
                                    LAB_00104aa6:if (local_e4 != '\0') {
                                       uprv_free_76_godot(local_f0);
                                    }

                                    local_e4 = '\x01';
                                    local_f0 = pEVar17;
                                    local_e8 = iVar9;
                                    goto LAB_00104acc;
                                 }

                              }
 else {
                                 iVar9 = local_e8 * 2;
                                 pEVar20 = pEVar21;
                                 if (0 < iVar9) {
                                    pEVar21 = (ExtensionListEntry*)( (long)iVar9 << 3 );
                                    pEVar20 = pEVar21;
                                    pEVar17 = (ExtensionListEntry*)uprv_malloc_76_godot(pEVar21);
                                    if (pEVar17 != (ExtensionListEntry*)0x0) {
                                       lVar25 = (long)iVar9;
                                       if (iVar8 != 0) goto LAB_00104ba6;
                                       goto LAB_00104aa6;
                                    }

                                 }

                              }

                              goto LAB_00104967;
                           }

                           LAB_00104acc:plVar19 = (long*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)pcVar29);
                           if (plVar19 == (long*)0x0) {
                              lVar25 = (long)local_f8;
                              local_f8 = local_f8 + 1;
                              *(undefined8*)( local_f0 + lVar25 * 8 ) = 0;
                              pEVar20 = pEVar21;
                              goto LAB_00104967;
                           }

                           *plVar19 = (long)plVar19 + 0xd;
                           *(undefined4*)( plVar19 + 1 ) = 0x28;
                           *(undefined2*)( (long)plVar19 + 0xc ) = 0;
                           *(undefined4*)( plVar19 + 7 ) = 0;
                           pEVar20 = (ExtensionListEntry*)param_4;
                           pcVar29 = (char*)local_1f8;
                           icu_76_godot::CharString::append((char*)plVar19, (int)local_1f8, (UErrorCode*)(ulong)local_1c0);
                           lVar25 = (long)local_f8;
                           local_f8 = local_f8 + 1;
                           *(long**)( local_f0 + lVar25 * 8 ) = plVar19;
                           if (0 < *(int*)param_4) goto LAB_0010496d;
                           *(long*)pAVar18 = *plVar19;
                           cVar5 = (anonymous_namespace)::_addAttributeToList(&local_2c0, pAVar18);
                           if (( cVar5 != '\x01' ) && ( param_3 )) {
                              *(undefined4*)param_4 = 1;
                              pcVar29 = (char*)pAVar18;
                              goto LAB_0010496d;
                           }

                           if ((char)local_1ec != '\0') {
                              uprv_free_76_godot(local_1f8);
                           }

                        }
;
                        pcVar29 = (char*)( ulong ) * (uint*)param_4;
                        if (0 < (int)*(uint*)param_4) {
                           LAB_00104d2b:if (local_22c != '\0') {
                              uprv_free_76_godot(local_238);
                           }

                           goto LAB_001044bd;
                        }

                        LAB_0010496d:if ((char)local_1ec != '\0') {
                           uprv_free_76_godot(local_1f8);
                        }

                        local_2f0 = (ExtensionListEntry*)0x0;
                        local_2e8 = (ExtensionListEntry*)0x105fe8;
                     }

                     LAB_00103c75:iVar8 = local_148;
                     if (local_148 == local_158) {
                        if (local_148 == 8) {
                           pEVar13 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                           pEVar22 = pEVar20;
                           pEVar17 = (ExtensionListEntry*)pcVar29;
                           if (pEVar13 != (ExtensionListEntry*)0x0) {
                              iVar9 = 0x20;
                              pEVar21 = (ExtensionListEntry*)0x100;
                              LAB_0010416a:pEVar20 = pEVar21;
                              if (local_148 < iVar8) {
                                 iVar8 = local_148;
                              }

                              if (iVar9 < iVar8) {
                                 iVar8 = iVar9;
                              }

                              pcVar29 = (char*)local_150;
                              __memcpy_chk(pEVar13, local_150, (long)iVar8 << 3);
                              LAB_00104199:if (local_144 != '\0') {
                                 uprv_free_76_godot(local_150);
                              }

                              local_144 = '\x01';
                              local_150 = pEVar13;
                              local_148 = iVar9;
                              goto LAB_001041bf;
                           }

                        }
 else {
                           iVar9 = local_148 * 2;
                           pEVar22 = pEVar20;
                           pEVar17 = (ExtensionListEntry*)pcVar29;
                           if (0 < iVar9) {
                              pEVar13 = (ExtensionListEntry*)uprv_malloc_76_godot((ExtensionListEntry*)( (long)iVar9 << 3 ));
                              pEVar22 = pEVar20;
                              pEVar17 = (ExtensionListEntry*)pcVar29;
                              if (pEVar13 != (ExtensionListEntry*)0x0) {
                                 pEVar21 = (ExtensionListEntry*)( (long)iVar9 << 3 );
                                 if (iVar8 != 0) goto LAB_0010416a;
                                 goto LAB_00104199;
                              }

                           }

                        }

                     }
 else {
                        LAB_001041bf:pEVar17 = (ExtensionListEntry*)icu_76_godot::UMemory::operator_new((UMemory*)0x18, (ulong)pcVar29);
                        if (pEVar17 != (ExtensionListEntry*)0x0) {
                           *(undefined8*)( pEVar17 + 0x10 ) = 0;
                           lVar25 = (long)local_158;
                           local_158 = local_158 + 1;
                           *(ExtensionListEntry**)( local_150 + lVar25 * 8 ) = pEVar17;
                           *(ExtensionListEntry**)pEVar17 = local_2e8;
                           *(ExtensionListEntry**)( pEVar17 + 8 ) = local_2f0;
                           cVar5 = (anonymous_namespace)::_addExtensionToList(&local_2c8, pEVar17, true);
                           pEVar21 = pEVar20;
                           if (cVar5 == '\x01') goto LAB_0010422d;
                           goto joined_r0x0010427d;
                        }

                        lVar25 = (long)local_158;
                        local_158 = local_158 + 1;
                        *(undefined8*)( local_150 + lVar25 * 8 ) = 0;
                        pEVar22 = pEVar20;
                        pEVar17 = (ExtensionListEntry*)0x0;
                     }

                     LAB_00103ca0:*(undefined4*)param_4 = 7;
                     pEVar20 = pEVar22;
                     pcVar29 = (char*)pEVar17;
                  }
 else {
                     pEVar17 = (ExtensionListEntry*)( (ulong)pEVar15 & 0xffffffff );
                     if ((int)pEVar15 < 2) {
                        if (*pEVar13 == (ExtensionListEntry)0x78) {
                           uVar33 = uVar4;
                           if ((int)uVar4 < 0) {
                              sVar14 = strlen((char*)local_238);
                              uVar33 = (uint)sVar14;
                           }

                           pEVar15 = (ExtensionListEntry*)0x0;
                           pEVar20 = pEVar22;
                           pEVar35 = pEVar22;
                           if (0 < (int)uVar33) {
                              do {
                                 if (*pEVar35 == (ExtensionListEntry)0x2d) {
                                    if (pEVar15 == (ExtensionListEntry*)0x0) goto joined_r0x0010427d;
                                    uVar28 = (int)pEVar35 - (int)pEVar15;
                                    pEVar17 = (ExtensionListEntry*)(ulong)uVar28;
                                    cVar5 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength((char*)pEVar15, uVar28, 1, (int)pEVar20);
                                    if (cVar5 == '\0') goto joined_r0x0010427d;
                                    pEVar15 = (ExtensionListEntry*)0x0;
                                 }
 else if (pEVar15 == (ExtensionListEntry*)0x0) {
                                    pEVar15 = pEVar35;
                                 }

                                 pEVar35 = pEVar35 + 1;
                              }
 while ( (long)pEVar35 - (long)pEVar22 < (long)(int)uVar33 );
                              if (pEVar15 != (ExtensionListEntry*)0x0) {
                                 iVar8 = 1;
                                 LAB_00104f73:uVar33 = (int)pEVar35 - (int)pEVar15;
                                 pEVar17 = (ExtensionListEntry*)(ulong)uVar33;
                                 cVar5 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength((char*)pEVar15, uVar33, iVar8, (int)pEVar20);
                                 iVar8 = local_88;
                                 pcVar29 = (char*)local_238;
                                 if (cVar5 != '\0') {
                                    if (local_88 == local_98) {
                                       if (local_88 == 8) {
                                          pEVar15 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                                          pEVar22 = pEVar20;
                                          if (pEVar15 != (ExtensionListEntry*)0x0) {
                                             iVar9 = 0x20;
                                             pEVar20 = (ExtensionListEntry*)0x100;
                                             LAB_00105117:iVar10 = local_88;
                                             if (iVar8 <= local_88) {
                                                iVar10 = iVar8;
                                             }

                                             if (iVar9 < iVar10) {
                                                iVar10 = iVar9;
                                             }

                                             pEVar17 = local_90;
                                             pEVar15 = (ExtensionListEntry*)__memcpy_chk(pEVar15, local_90, (long)iVar10 << 3);
                                             LAB_00104fe8:if (local_84 != '\0') {
                                                uprv_free_76_godot(local_90);
                                             }

                                             local_84 = '\x01';
                                             local_90 = pEVar15;
                                             local_88 = iVar9;
                                             goto LAB_0010500e;
                                          }

                                       }
 else {
                                          iVar9 = local_88 * 2;
                                          pEVar22 = pEVar20;
                                          if (0 < iVar9) {
                                             pEVar20 = (ExtensionListEntry*)( (long)iVar9 << 3 );
                                             pEVar22 = pEVar20;
                                             pEVar15 = (ExtensionListEntry*)uprv_malloc_76_godot(pEVar20);
                                             if (pEVar15 != (ExtensionListEntry*)0x0) {
                                                if (iVar8 != 0) goto LAB_00105117;
                                                goto LAB_00104fe8;
                                             }

                                          }

                                       }

                                    }
 else {
                                       LAB_0010500e:plVar19 = (long*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)pEVar17);
                                       if (plVar19 != (long*)0x0) {
                                          *plVar19 = (long)plVar19 + 0xd;
                                          *(undefined4*)( plVar19 + 1 ) = 0x28;
                                          *(undefined4*)( plVar19 + 7 ) = 0;
                                          *(undefined2*)( (long)plVar19 + 0xc ) = 0;
                                          icu_76_godot::CharString::append((char*)plVar19, (int)pcVar29, (UErrorCode*)(ulong)uVar4);
                                          lVar25 = (long)local_98;
                                          local_98 = local_98 + 1;
                                          *(long**)( local_90 + lVar25 * 8 ) = plVar19;
                                          iVar8 = local_2cc;
                                          if (local_2cc < 1) {
                                             local_2f0 = (ExtensionListEntry*)*plVar19;
                                             pEVar20 = pEVar21;
                                             local_2e8 = pEVar13;
                                             goto LAB_00103c75;
                                          }

                                          goto LAB_00104865;
                                       }

                                       lVar25 = (long)local_98;
                                       local_98 = local_98 + 1;
                                       *(undefined8*)( local_90 + lVar25 * 8 ) = 0;
                                       pEVar22 = pEVar20;
                                    }

                                    goto LAB_00103ca0;
                                 }

                              }

                           }

                        }
 else {
                           cVar5 = (anonymous_namespace)::_isExtensionSingleton((char*)pEVar13, (int)pEVar15);
                           pEVar22 = local_238;
                           if (cVar5 != '\0') {
                              uVar33 = uVar4;
                              if ((int)uVar4 < 0) {
                                 sVar14 = strlen((char*)local_238);
                                 uVar33 = (uint)sVar14;
                              }

                              pEVar15 = (ExtensionListEntry*)0x0;
                              pEVar20 = pEVar22;
                              pEVar35 = pEVar22;
                              if (0 < (int)uVar33) {
                                 do {
                                    if (*pEVar35 == (ExtensionListEntry)0x2d) {
                                       if (pEVar15 == (ExtensionListEntry*)0x0) goto joined_r0x0010427d;
                                       uVar28 = (int)pEVar35 - (int)pEVar15;
                                       pEVar17 = (ExtensionListEntry*)(ulong)uVar28;
                                       cVar5 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength((char*)pEVar15, uVar28, 2, (int)pEVar20);
                                       if (cVar5 == '\0') goto joined_r0x0010427d;
                                       pEVar15 = (ExtensionListEntry*)0x0;
                                    }
 else if (pEVar15 == (ExtensionListEntry*)0x0) {
                                       pEVar15 = pEVar35;
                                    }

                                    pEVar35 = pEVar35 + 1;
                                 }
 while ( (long)pEVar35 - (long)pEVar22 < (long)(int)uVar33 );
                                 if (pEVar15 != (ExtensionListEntry*)0x0) {
                                    iVar8 = 2;
                                    goto LAB_00104f73;
                                 }

                              }

                           }

                        }

                        joined_r0x0010427d:pEVar21 = pEVar20;
                        if (param_3) goto LAB_001038bf;
                        goto LAB_0010422d;
                     }

                     ulocimp_toBcpKeyWithFallback_76_godot(&local_2b8, pEVar15, pEVar13);
                     pcVar29 = (char*)pEVar15;
                     if (local_2a8 == '\0') {
                        LAB_00104855:pEVar21 = pEVar20;
                        if (!param_3) goto LAB_0010422d;
                        iVar8 = 1;
                     }
 else {
                        pEVar20 = (ExtensionListEntry*)(long)(int)local_200;
                        local_2e8 = local_2b0;
                        pcVar29 = (char*)strlen((char*)pEVar13);
                        ulocimp_toBcpTypeWithFallback_76_godot((UErrorCode*)&local_298, pcVar29, pEVar13, pEVar20, local_238);
                        iVar8 = local_88;
                        if (local_288 == '\0') goto LAB_00104855;
                        local_2f0 = local_290;
                        if (local_290 != local_238) goto LAB_00103c75;
                        if (local_88 == local_98) {
                           if (local_88 == 8) {
                              pEVar13 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                              if (pEVar13 != (ExtensionListEntry*)0x0) {
                                 iVar9 = 0x20;
                                 LAB_0010519b:if (local_88 < iVar8) {
                                    iVar8 = local_88;
                                 }

                                 if (iVar9 < iVar8) {
                                    iVar8 = iVar9;
                                 }

                                 pcVar29 = (char*)local_90;
                                 __memcpy_chk(pEVar13, local_90, (long)iVar8 << 3);
                                 LAB_001051c7:if (local_84 != '\0') {
                                    uprv_free_76_godot(local_90);
                                 }

                                 local_84 = '\x01';
                                 local_90 = pEVar13;
                                 local_88 = iVar9;
                                 goto LAB_001051ed;
                              }

                           }
 else {
                              iVar9 = local_88 * 2;
                              if (0 < iVar9) {
                                 pEVar20 = (ExtensionListEntry*)( (long)iVar9 << 3 );
                                 pEVar13 = (ExtensionListEntry*)uprv_malloc_76_godot(pEVar20);
                                 if (pEVar13 != (ExtensionListEntry*)0x0) {
                                    if (iVar8 != 0) goto LAB_0010519b;
                                    goto LAB_001051c7;
                                 }

                              }

                           }

                           LAB_00104e64:*(undefined4*)param_4 = 7;
                           goto LAB_001038c5;
                        }

                        LAB_001051ed:plVar19 = (long*)icu_76_godot::UMemory::operator_new((UMemory*)0x40, (ulong)pcVar29);
                        if (plVar19 == (long*)0x0) {
                           lVar25 = (long)local_98;
                           pEVar20 = (ExtensionListEntry*)0x0;
                           local_98 = local_98 + 1;
                           *(undefined8*)( local_90 + lVar25 * 8 ) = 0;
                           goto LAB_00104e64;
                        }

                        *(undefined2*)( (long)plVar19 + 0xc ) = 0;
                        *plVar19 = (long)plVar19 + 0xd;
                        *(undefined4*)( plVar19 + 1 ) = 0x28;
                        *(undefined4*)( plVar19 + 7 ) = 0;
                        pcVar29 = (char*)local_238;
                        icu_76_godot::CharString::append((char*)plVar19, (int)local_238, (UErrorCode*)(ulong)local_200);
                        lVar25 = (long)local_98;
                        local_98 = local_98 + 1;
                        *(long**)( local_90 + lVar25 * 8 ) = plVar19;
                        iVar8 = local_2cc;
                        if (local_2cc < 1) {
                           T_CString_toLowerCase_76_godot(*plVar19);
                           local_2f0 = (ExtensionListEntry*)*plVar19;
                           pEVar20 = pEVar21;
                           goto LAB_00103c75;
                        }

                     }

                     LAB_00104865:*(int*)param_4 = iVar8;
                     pEVar20 = pEVar21;
                  }

                  LAB_001038c5:if (local_22c != '\0') {
                     uprv_free_76_godot(local_238);
                  }

                  break;
               }

               pEVar22 = pEVar20;
               if (local_2cc == 7) goto LAB_00103ca0;
               if (param_3) {
                  LAB_001038bf:*(undefined4*)param_4 = 1;
                  pcVar29 = (char*)pEVar17;
                  goto LAB_001038c5;
               }

               local_2cc = 0;
               pEVar21 = pEVar20;
               LAB_0010422d:pEVar20 = pEVar21;
               if (local_22c != '\0') {
                  uprv_free_76_godot(local_238);
                  pEVar20 = pEVar21;
               }

            }
;
            iVar8 = local_148;
            if (cVar23 == '\0') {
               LAB_001038de:if (( *(int*)param_4 < 1 ) && ( local_2c8 != (ExtensionListEntry*)0x0 )) {
                  local_318 = "attribute";
                  bVar2 = false;
                  pEVar11 = local_2c8;
                  do {
                     pcVar31 = *(char**)pEVar11;
                     if (( !bVar2 ) && ( sVar14 = 1 < sVar14 )) {
                        ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &_LC7, 2);
                        bVar2 = true;
                        pcVar31 = *(char**)pEVar11;
                     }

                     pcVar29 = local_318;
                     iVar8 = strcmp(pcVar31, "attribute");
                     pAVar18 = local_2c0;
                     if (iVar8 == 0) {
                        for (; pAVar18 != (AttributeListEntry*)0x0; pAVar18 = *(AttributeListEntry**)( pAVar18 + 8 )) {
                           ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &_LC6, 1);
                           pcVar29 = *(char**)pAVar18;
                           sVar14 = strlen(pcVar29);
                           pEVar20 = *(ExtensionListEntry**)param_2;
                           ( **(code**)( pEVar20 + 0x10 ) )(param_2, pcVar29, sVar14 & 0xffffffff);
                        }

                     }
 else {
                        ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &_LC6, 1);
                        pcVar29 = *(char**)pEVar11;
                        sVar14 = strlen(pcVar29);
                        ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, pcVar29, sVar14 & 0xffffffff);
                        pcVar31 = *(char**)( pEVar11 + 8 );
                        pcVar29 = &_LC8;
                        iVar8 = strcmp(pcVar31, "true");
                        if (iVar8 != 0) {
                           pcVar29 = &_LC9;
                           iVar8 = strcmp(pcVar31, "yes");
                           if (iVar8 != 0) {
                              ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &_LC6, 1);
                              pcVar29 = *(char**)( pEVar11 + 8 );
                              sVar14 = strlen(pcVar29);
                              ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, pcVar29, sVar14 & 0xffffffff);
                           }

                        }

                     }

                     pEVar11 = *(ExtensionListEntry**)( pEVar11 + 0x10 );
                  }
 while ( pEVar11 != (ExtensionListEntry*)0x0 );
               }

               lVar25 = 0;
               if (0 < local_98) {
                  do {
                     pUVar16 = *(UMemory**)( local_90 + lVar25 * 8 );
                     if (pUVar16 != (UMemory*)0x0) {
                        if (pUVar16[0xc] != (UMemory)0x0) {
                           uprv_free_76_godot(*(undefined8*)pUVar16);
                        }

                        icu_76_godot::UMemory::operator_delete(pUVar16, pcVar29);
                     }

                     lVar25 = lVar25 + 1;
                  }
 while ( (int)lVar25 < local_98 );
               }

               if (local_84 != '\0') {
                  uprv_free_76_godot(local_90);
               }

               if (lVar12 != 0) {
                  uenum_close_76_godot(lVar12);
               }

               goto LAB_001039e8;
            }

            if (local_148 == local_158) {
               if (local_148 == 8) {
                  pEVar11 = (ExtensionListEntry*)uprv_malloc_76_godot(0x100);
                  if (pEVar11 != (ExtensionListEntry*)0x0) {
                     iVar9 = 0x20;
                     LAB_0010452b:if (local_148 < iVar8) {
                        iVar8 = local_148;
                     }

                     if (iVar9 < iVar8) {
                        iVar8 = iVar9;
                     }

                     pcVar29 = (char*)local_150;
                     __memcpy_chk(pEVar11, local_150, (long)iVar8 << 3);
                     goto LAB_0010455a;
                  }

               }
 else {
                  iVar9 = local_148 * 2;
                  if (( 0 < iVar9 ) && ( pEVar11 = (ExtensionListEntry*)uprv_malloc_76_godot((long)iVar9 * 8) ),pEVar11 != (ExtensionListEntry*)0x0) {
                     if (iVar8 != 0) goto LAB_0010452b;
                     LAB_0010455a:if (local_144 != '\0') {
                        uprv_free_76_godot(local_150);
                     }

                     local_144 = '\x01';
                     local_150 = pEVar11;
                     local_148 = iVar9;
                     goto LAB_00104580;
                  }

               }

            }
 else {
               LAB_00104580:pcVar29 = (char*)icu_76_godot::UMemory::operator_new((UMemory*)0x18, (ulong)pcVar29);
               if ((ExtensionListEntry*)pcVar29 != (ExtensionListEntry*)0x0) {
                  *(undefined8*)( (ExtensionListEntry*)pcVar29 + 0x10 ) = 0;
                  lVar25 = (long)local_158;
                  pEVar20 = (ExtensionListEntry*)&(anonymous_namespace)::POSIX_KEY;
                  local_158 = local_158 + 1;
                  *(char**)( local_150 + lVar25 * 8 ) = pcVar29;
                  *(undefined3**)pcVar29 = &(anonymous_namespace)::POSIX_KEY;
                  *(char**)( (ExtensionListEntry*)pcVar29 + 8 ) = "posix";
                  (anonymous_namespace)::_addExtensionToList(&local_2c8, (ExtensionListEntry*)pcVar29, true);
                  goto LAB_001038de;
               }

               lVar25 = (long)local_158;
               pEVar20 = (ExtensionListEntry*)0x0;
               local_158 = local_158 + 1;
               *(undefined8*)( local_150 + lVar25 * 8 ) = 0;
               pcVar29 = (char*)0x0;
            }

            *(undefined4*)param_4 = 7;
            LAB_001044bd:lVar25 = 0;
            if (0 < local_98) {
               do {
                  pUVar16 = *(UMemory**)( local_90 + lVar25 * 8 );
                  if (pUVar16 != (UMemory*)0x0) {
                     if (pUVar16[0xc] != (UMemory)0x0) {
                        uprv_free_76_godot(*(undefined8*)pUVar16);
                     }

                     icu_76_godot::UMemory::operator_delete(pUVar16, pcVar29);
                  }

                  lVar25 = lVar25 + 1;
               }
 while ( (int)lVar25 < local_98 );
            }

            if (local_84 != '\0') {
               uprv_free_76_godot(local_90);
            }

         }

         if (lVar12 != 0) {
            uenum_close_76_godot(lVar12);
         }

         lVar12 = 0;
         if (0 < local_f8) {
            do {
               pUVar16 = *(UMemory**)( local_f0 + lVar12 * 8 );
               if (pUVar16 != (UMemory*)0x0) {
                  if (pUVar16[0xc] != (UMemory)0x0) {
                     uprv_free_76_godot(*(undefined8*)pUVar16);
                  }

                  icu_76_godot::UMemory::operator_delete(pUVar16, pcVar29);
               }

               lVar12 = lVar12 + 1;
            }
 while ( (int)lVar12 < local_f8 );
         }

         if (local_e4 != '\0') {
            uprv_free_76_godot(local_f0);
         }

         lVar12 = 0;
         if (0 < local_158) {
            do {
               if (*(UMemory**)( local_150 + lVar12 * 8 ) != (UMemory*)0x0) {
                  icu_76_godot::UMemory::operator_delete(*(UMemory**)( local_150 + lVar12 * 8 ), pcVar29);
               }

               lVar12 = lVar12 + 1;
            }
 while ( (int)lVar12 < local_158 );
         }

         if (local_144 != '\0') {
            uprv_free_76_godot(local_150);
         }

         lVar12 = 0;
         if (0 < local_1b8) {
            do {
               if (*(UMemory**)( local_1b0 + lVar12 * 8 ) != (UMemory*)0x0) {
                  icu_76_godot::UMemory::operator_delete(*(UMemory**)( local_1b0 + lVar12 * 8 ), pcVar29);
               }

               lVar12 = lVar12 + 1;
            }
 while ( (int)lVar12 < local_1b8 );
         }

      }

      if (local_1a4 != '\0') {
         uprv_free_76_godot(local_1b0);
      }

      if (*(int*)param_4 < 1) {
         local_298 = (UMemory*)( (ulong)local_298 & 0xffffffff00000000 );
         ulocimp_getVariant_76_godot((char*)&local_98, (UErrorCode*)local_278);
         if ((int)local_298 < 1) {
            if (local_60 != 0) {
               local_339 = '\x01';
               pcVar29 = (char*)CONCAT44(uStack_94, local_98);
               pcVar31 = (char*)0x0;
               do {
                  while (true) {
                     pcVar32 = pcVar29;
                     cVar23 = *pcVar32;
                     if (cVar23 != '-' && cVar23 != '_') break;
                     *pcVar32 = '\0';
                     if (pcVar31 == (char*)0x0) {
                        LAB_00103b91:pcVar29 = pcVar32 + 1;
                     }
 else {
                        LAB_00103ba0:cVar5 = *pcVar31;
                        pcVar29 = pcVar31;
                        while (cVar5 != '\0') {
                           cVar5 = uprv_asciitolower_76_godot();
                           *pcVar29 = cVar5;
                           cVar5 = pcVar29[1];
                           pcVar29 = pcVar29 + 1;
                        }
;
                        cVar5 = (anonymous_namespace)::_isAlphaNumericStringLimitedLength(pcVar31, -1, 1, (int)pEVar20);
                        if (cVar5 == '\0') goto LAB_00103cb8;
                        if (local_339 == '\0') {
                           LAB_00103beb:( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &_LC6, 1);
                           sVar14 = strlen(pcVar31);
                           pEVar20 = *(ExtensionListEntry**)param_2;
                           ( **(code**)( pEVar20 + 0x10 ) )(param_2, pcVar31, sVar14 & 0xffffffff);
                           local_339 = '\0';
                        }
 else {
                           local_339 = (anonymous_namespace)::_isVariantSubtag(pcVar31, -1);
                           if (local_339 == '\0') {
                              ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &_LC6, 1);
                              ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &(anonymous_namespace)::PRIVATEUSE_KEY, 1);
                              ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, &_LC6, 1);
                              ( **(code**)( *(long*)param_2 + 0x10 ) )(param_2, "lvariant", 8);
                              goto LAB_00103beb;
                           }

                        }

                        if (cVar23 != '-' && cVar23 != '_') goto LAB_00103b61;
                        pcVar29 = pcVar32 + 1;
                        pcVar31 = (char*)0x0;
                     }

                  }
;
                  if (cVar23 == '\0') {
                     if (pcVar31 != (char*)0x0) goto LAB_00103ba0;
                     break;
                  }

                  if (pcVar31 != (char*)0x0) goto LAB_00103b91;
                  pcVar29 = pcVar32 + 1;
                  pcVar31 = pcVar32;
               }
 while ( true );
            }

         }
 else {
            LAB_00103cb8:if (param_3) {
               *(undefined4*)param_4 = 1;
            }

         }

         LAB_00103b61:if (local_90._4_1_ != '\0') {
            uprv_free_76_godot(CONCAT44(uStack_94, local_98));
         }

      }

   }

   LAB_00103563:if (local_26c != '\0') {
      uprv_free_76_godot(local_278);
   }

   LAB_00103507:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ulocimp_forLanguageTag_76_godot(char const*, int, icu_76_godot::ByteSink&, int*, UErrorCode&) */void ulocimp_forLanguageTag_76_godot(char *param_1, int param_2, ByteSink *param_3, int *param_4, UErrorCode *param_5) {
   if (0 < *(int*)param_5) {
      return;
   }

   ulocimp_forLanguageTag_76_godot(param_1, param_2, param_3, param_4, param_5);
   return;
}
undefined4 uloc_toLanguageTag_76_godot(char *param_1, char *param_2, int param_3, char param_4, UErrorCode *param_5) {
   undefined4 uVar1;
   long in_FS_OFFSET;
   CheckedArrayByteSink local_68[24];
   undefined4 local_50;
   char local_4c;
   long local_40;
   uVar1 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_5 < 1) {
      icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(local_68, param_2, param_3);
      ulocimp_toLanguageTag_76_godot(param_1, (ByteSink*)local_68, param_4 != '\0', param_5);
      if (*(int*)param_5 < 1) {
         if (local_4c == '\0') {
            uVar1 = u_terminateChars_76_godot(param_2, param_3, local_50, param_5);
            icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_68);
            goto LAB_001054ff;
         }

         *(undefined4*)param_5 = 0xf;
         uVar1 = local_50;
      }

      icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_68);
   }

   LAB_001054ff:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined4 uloc_forLanguageTag_76_godot(char *param_1, char *param_2, int param_3, int *param_4, UErrorCode *param_5) {
   undefined4 uVar1;
   long in_FS_OFFSET;
   CheckedArrayByteSink local_68[24];
   undefined4 local_50;
   char local_4c;
   long local_40;
   uVar1 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < *(int*)param_5) goto LAB_001055df;
   icu_76_godot::CheckedArrayByteSink::CheckedArrayByteSink(local_68, param_2, param_3);
   if (*(int*)param_5 < 1) {
      ulocimp_forLanguageTag_76_godot(param_1, -1, (ByteSink*)local_68, param_4, param_5);
      if (0 < *(int*)param_5) goto LAB_0010562b;
      if (local_4c == '\0') {
         uVar1 = u_terminateChars_76_godot(param_2, param_3, local_50, param_5);
      }
 else {
         *(undefined4*)param_5 = 0xf;
         uVar1 = local_50;
      }

   }
 else {
      LAB_0010562b:uVar1 = 0;
   }

   icu_76_godot::CheckedArrayByteSink::~CheckedArrayByteSink(local_68);
   LAB_001055df:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ulocimp_toLanguageTag_76_godot(char const*, bool, UErrorCode&) */char *ulocimp_toLanguageTag_76_godot(char *param_1, bool param_2, UErrorCode *param_3) {
   UErrorCode *in_RCX;
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   CharStringByteSink aCStack_98[16];
   long local_88;
   undefined4 local_80;
   undefined2 local_7c;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)in_RCX < 1) {
      local_88 = (long)&local_7c + 1;
      local_7c = 0;
      local_80 = 0x28;
      local_50 = 0;
      icu_76_godot::CharStringByteSink::CharStringByteSink(aCStack_98, (CharString*)&local_88);
      ulocimp_toLanguageTag_76_godot((char*)CONCAT71(in_register_00000031, param_2), (ByteSink*)aCStack_98, SUB81(param_3, 0), in_RCX);
      icu_76_godot::CharString::CharString((CharString*)param_1, (CharString*)&local_88);
      icu_76_godot::CharStringByteSink::~CharStringByteSink(aCStack_98);
      if ((char)local_7c != '\0') {
         uprv_free_76_godot(local_88);
      }

   }
 else {
      param_1[8] = '(';
      for (int i = 0; i < 3; i++) {
         param_1[( i + 9 )] = '\0';
      }

      *(char**)param_1 = param_1 + 0xd;
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ulocimp_forLanguageTag_76_godot(char const*, int, int*, UErrorCode&) */char *ulocimp_forLanguageTag_76_godot(char *param_1, int param_2, int *param_3, UErrorCode *param_4) {
   undefined4 in_register_00000034;
   UErrorCode *in_R8;
   long in_FS_OFFSET;
   CharStringByteSink local_98[16];
   long local_88;
   undefined4 local_80;
   undefined2 local_7c;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)in_R8 < 1) {
      local_88 = (long)&local_7c + 1;
      local_80 = 0x28;
      local_50 = 0;
      local_7c = 0;
      icu_76_godot::CharStringByteSink::CharStringByteSink(local_98, (CharString*)&local_88);
      if (*(int*)in_R8 < 1) {
         ulocimp_forLanguageTag_76_godot((char*)CONCAT44(in_register_00000034, param_2), (int)param_3, (ByteSink*)local_98, (int*)param_4, in_R8);
      }

      icu_76_godot::CharString::CharString((CharString*)param_1, (CharString*)&local_88);
      icu_76_godot::CharStringByteSink::~CharStringByteSink(local_98);
      if ((char)local_7c != '\0') {
         uprv_free_76_godot(local_88);
      }

   }
 else {
      param_1[8] = '(';
      for (int i = 0; i < 3; i++) {
         param_1[( i + 9 )] = '\0';
      }

      *(char**)param_1 = param_1 + 0xd;
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this) {
   *(undefined4*)( this + 8 ) = 0x28;
   *(MaybeStackArray<char,40>**)this = this + 0xd;
   this[0xc] = (MaybeStackArray<char,40>)0x0;
   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this, int param_1, int param_3) {
   long lVar1;
   *(undefined4*)( this + 8 ) = 0x28;
   *(MaybeStackArray<char,40>**)this = this + 0xd;
   this[0xc] = (MaybeStackArray<char,40>)0x0;
   if (( 0x28 < param_1 ) && ( param_3 < 1 )) {
      lVar1 = uprv_malloc_76_godot((long)param_1);
      if (lVar1 != 0) {
         if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
            uprv_free_76_godot(*(undefined8*)this);
         }

         *(long*)this = lVar1;
         *(int*)( this + 8 ) = param_1;
         this[0xc] = (MaybeStackArray<char,40>)0x1;
      }

      return;
   }

   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */void icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this) {
   if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
      return;
   }

   uprv_free_76_godot(*(undefined8*)this);
   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this, MaybeStackArray *param_1) {
   int iVar1;
   MaybeStackArray *__src;
   __src = *(MaybeStackArray**)param_1;
   iVar1 = *(int*)( param_1 + 8 );
   *(MaybeStackArray*)( this + 0xc ) = param_1[0xc];
   *(MaybeStackArray**)this = __src;
   *(int*)( this + 8 ) = iVar1;
   if (__src != param_1 + 0xd) {
      *(MaybeStackArray**)param_1 = param_1 + 0xd;
      *(undefined4*)( param_1 + 8 ) = 0x28;
      param_1[0xc] = (MaybeStackArray)0x0;
      return;
   }

   *(MaybeStackArray<char,40>**)this = this + 0xd;
   memcpy(this + 0xd, __src, (long)iVar1);
   return;
}
/* icu_76_godot::MaybeStackArray<char,
   40>::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::MaybeStackArray<char, 40>&&) */MaybeStackArray<char,40> * __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator=
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1){
   int iVar1;
   MaybeStackArray *__src;
   if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
      uprv_free_76_godot(*(undefined8*)this);
   }

   *(undefined4*)( this + 8 ) = *(undefined4*)( param_1 + 8 );
   *(MaybeStackArray*)( this + 0xc ) = param_1[0xc];
   __src = *(MaybeStackArray**)param_1;
   if (__src != param_1 + 0xd) {
      *(MaybeStackArray**)this = __src;
      *(MaybeStackArray**)param_1 = param_1 + 0xd;
      *(undefined4*)( param_1 + 8 ) = 0x28;
      param_1[0xc] = (MaybeStackArray)0x0;
      return this;
   }

   iVar1 = *(int*)( param_1 + 8 );
   *(MaybeStackArray<char,40>**)this = this + 0xd;
   memcpy(this + 0xd, __src, (long)iVar1);
   return this;
}
/* icu_76_godot::MaybeStackArray<char, 40>::getCapacity() const */undefined4 icu_76_godot::MaybeStackArray<char,40>::getCapacity(MaybeStackArray<char,40> *this) {
   return *(undefined4*)( this + 8 );
}
/* icu_76_godot::MaybeStackArray<char, 40>::getAlias() const */undefined8 icu_76_godot::MaybeStackArray<char,40>::getAlias(MaybeStackArray<char,40> *this) {
   return *(undefined8*)this;
}
/* icu_76_godot::MaybeStackArray<char, 40>::getArrayLimit() const */long icu_76_godot::MaybeStackArray<char,40>::getArrayLimit(MaybeStackArray<char,40> *this) {
   return (long)*(int*)( this + 8 ) + *(long*)this;
}
/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) const */long icu_76_godot::MaybeStackArray<char,40>::operator [](MaybeStackArray<char,40> *this, long param_1) {
   return *(long*)this + param_1;
}
/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) */long icu_76_godot::MaybeStackArray<char,40>::operator [](MaybeStackArray<char,40> *this, long param_1) {
   return *(long*)this + param_1;
}
/* icu_76_godot::MaybeStackArray<char, 40>::aliasInstead(char*, int) */void icu_76_godot::MaybeStackArray<char,40>::aliasInstead(MaybeStackArray<char,40> *this, char *param_1, int param_2) {
   if (( param_1 != (char*)0x0 ) && ( 0 < param_2 )) {
      if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
         *(char**)this = param_1;
         *(int*)( this + 8 ) = param_2;
         this[0xc] = (MaybeStackArray<char,40>)0x0;
         return;
      }

      uprv_free_76_godot(*(undefined8*)this);
      this[0xc] = (MaybeStackArray<char,40>)0x0;
      *(char**)this = param_1;
      *(int*)( this + 8 ) = param_2;
      return;
   }

   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::resize(int, int) */long icu_76_godot::MaybeStackArray<char,40>::resize(MaybeStackArray<char,40> *this, int param_1, int param_2) {
   MaybeStackArray<char,40> MVar1;
   long lVar2;
   if (0 < param_1) {
      lVar2 = uprv_malloc_76_godot((long)param_1);
      if (lVar2 != 0) {
         if (param_2 < 1) {
            MVar1 = this[0xc];
         }
 else {
            if (*(int*)( this + 8 ) < param_2) {
               param_2 = *(int*)( this + 8 );
            }

            if (param_1 < param_2) {
               param_2 = param_1;
            }

            __memcpy_chk(lVar2, *(undefined8*)this, (long)param_2, (long)param_1);
            MVar1 = this[0xc];
         }

         if (MVar1 != (MaybeStackArray<char,40>)0x0) {
            uprv_free_76_godot(*(undefined8*)this);
         }

         *(long*)this = lVar2;
         *(int*)( this + 8 ) = param_1;
         this[0xc] = (MaybeStackArray<char,40>)0x1;
         return lVar2;
      }

   }

   return 0;
}
/* icu_76_godot::MaybeStackArray<char, 40>::orphanOrClone(int, int&) */undefined8 icu_76_godot::MaybeStackArray<char,40>::orphanOrClone(MaybeStackArray<char,40> *this, int param_1, int *param_2) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
      uVar2 = *(undefined8*)this;
      LAB_00105b8f:*param_2 = param_1;
      *(MaybeStackArray<char,40>**)this = this + 0xd;
      *(undefined4*)( this + 8 ) = 0x28;
      this[0xc] = (MaybeStackArray<char,40>)0x0;
      return uVar2;
   }

   if (0 < param_1) {
      if (*(int*)( this + 8 ) < param_1) {
         param_1 = *(int*)( this + 8 );
      }

      lVar3 = (long)param_1;
      lVar1 = uprv_malloc_76_godot(lVar3);
      if (lVar1 != 0) {
         uVar2 = __memcpy_chk(lVar1, *(undefined8*)this, lVar3, lVar3);
         goto LAB_00105b8f;
      }

   }

   return 0;
}
/* icu_76_godot::MaybeStackArray<char, 40>::copyFrom(icu_76_godot::MaybeStackArray<char, 40> const&,
   UErrorCode&) */void icu_76_godot::MaybeStackArray<char,40>::copyFrom(MaybeStackArray<char,40> *this, MaybeStackArray *param_1, UErrorCode *param_2) {
   int iVar1;
   void *__src;
   void *__dest;
   if (0 < *(int*)param_2) {
      return;
   }

   iVar1 = *(int*)( param_1 + 8 );
   if (0 < iVar1) {
      __dest = (void*)uprv_malloc_76_godot((long)iVar1);
      if (__dest != (void*)0x0) {
         if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
            uprv_free_76_godot(*(undefined8*)this);
         }

         *(void**)this = __dest;
         this[0xc] = (MaybeStackArray<char,40>)0x1;
         __src = *(void**)param_1;
         *(int*)( this + 8 ) = iVar1;
         memcpy(__dest, __src, (long)iVar1);
         return;
      }

   }

   *(undefined4*)param_2 = 7;
   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::releaseArray() */void icu_76_godot::MaybeStackArray<char,40>::releaseArray(MaybeStackArray<char,40> *this) {
   if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
      return;
   }

   uprv_free_76_godot(*(undefined8*)this);
   return;
}
/* icu_76_godot::MaybeStackArray<char, 40>::resetToStackArray() */void icu_76_godot::MaybeStackArray<char,40>::resetToStackArray(MaybeStackArray<char,40> *this) {
   *(undefined4*)( this + 8 ) = 0x28;
   *(MaybeStackArray<char,40>**)this = this + 0xd;
   this[0xc] = (MaybeStackArray<char,40>)0x0;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ulocimp_forLanguageTag_76_godot(char const*, int, icu_76_godot::ByteSink&, int*, UErrorCode&)
   [clone .part.0] [clone .cold] */void ulocimp_forLanguageTag_76_godot(char *param_1, int param_2, ByteSink *param_3, int *param_4, UErrorCode *param_5) {
   code *pcVar1;
   undefined1 *unaff_R15;
   *unaff_R15 = 0;
   _DAT_00000000 = T_CString_toLowerCase_76_godot();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
void FUN_001062e6(void) {
   code *pcVar1;
   long *in_stack_00000030;
   ( **(code**)( *in_stack_00000030 + 0x10 ) )();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
void FUN_00106303(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */void icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

