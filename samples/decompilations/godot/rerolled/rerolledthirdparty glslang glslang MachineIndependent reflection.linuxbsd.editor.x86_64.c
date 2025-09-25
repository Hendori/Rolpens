/* glslang::TReflectionTraverser::mapToGlType(glslang::TType const&) [clone .isra.0] */int glslang::TReflectionTraverser::mapToGlType(TType *param_1) {
   TType TVar1;
   TType TVar2;
   TType TVar3;
   char cVar4;
   char cVar5;
   byte bVar6;
   uint uVar7;
   long lVar8;
   TType *pTVar9;
   uint uVar10;
   if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
      uVar10 = (uint)(byte)param_1[8];
   }
 else {
      uVar10 = ( **(code**)( *(long*)param_1 + 0x38 ) )();
   }

   if (uVar10 == 0xe) {
      if (*(code**)( *(long*)param_1 + 0x40 ) == TType::getSampler) {
         pTVar9 = param_1 + 0x80;
      }
 else {
         pTVar9 = (TType*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
      }

      TVar1 = pTVar9[2];
      TVar2 = *pTVar9;
      TVar3 = pTVar9[1];
      uVar7 = (byte)TVar1 & 1;
      uVar10 = (byte)TVar1 >> 1 & 1;
      bVar6 = (byte)TVar1 >> 2 & 1;
      cVar5 = (char)uVar7;
      if (( (byte)TVar1 & 8 ) == 0) {
         if (TVar2 == (TType)0x8) {
            switch (TVar3) {
               default:
          return 0;
               case (TType)0x1:
          return (-(uint)(cVar5 == '\0') & 0xfffffffb) + 0x8dce;
               case (TType)0x2:
          goto switchD_001007a7_caseD_2;
               case (TType)0x3:
          return 0x8dcb;
               case (TType)0x4:
          return (-(uint)(cVar5 == '\0') & 0xfffffdbe) + 0x900e;
               case (TType)0x5:
          return 0x8dcd;
               case (TType)0x6:
          return 0x8dd0;
            }

         }

         if (8 < (byte)TVar2) {
            if (TVar2 == (TType)0x9) {
               switch (TVar3) {
                  default:
            return 0;
                  case (TType)0x1:
            return (-(uint)(cVar5 == '\0') & 0xfffffffb) + 0x8dd6;
                  case (TType)0x2:
            goto switchD_00100343_caseD_2;
                  case (TType)0x3:
            return 0x8dd3;
                  case (TType)0x4:
            return (-(uint)(cVar5 == '\0') & 0xfffffdc5) + 0x900f;
                  case (TType)0x5:
            return 0x8dd5;
                  case (TType)0x6:
            return 0x8dd8;
               }

            }

            return 0;
         }

         cVar4 = (char)uVar10;
         if (TVar2 != (TType)0x1) {
            if (TVar2 != (TType)0x3) {
               return 0;
            }

            switch (TVar3) {
               default:
          return 0;
               case (TType)0x1:
          if (cVar4 == '\0') {
            return (-(uint)(cVar5 == '\0') & 0xfffffffb) + 0x91d3;
          }
          return (-(uint)(cVar5 == '\0') & 0xfffffffd) + 0x91dc;
               case (TType)0x2:
          goto switchD_00100135_caseD_2;
               case (TType)0x3:
          return 0x91d0;
               case (TType)0x4:
          if (cVar4 == '\0') {
            return (-(uint)(cVar5 == '\0') & 0xfffffffc) + 0x91d5;
          }
          return uVar7 + 0x91de;
               case (TType)0x5:
          return (-(uint)(cVar4 == '\0') & 0xfffffff7) + 0x91db;
               case (TType)0x6:
          return 0x91d6;
            }

         }

         switch (TVar3) {
            default:
        return 0;
            case (TType)0x1:
        if (cVar4 == '\0') {
          return (-(uint)(cVar5 == '\0') & 0xfffffd9d) + 0x8dc0;
        }
        return (-(uint)(cVar5 == '\0') & 0xfffffd9e) + 0x8dc3;
            case (TType)0x2:
        goto switchD_00100707_caseD_2;
            case (TType)0x3:
        return 0x8b5f;
            case (TType)0x4:
        if (cVar4 == '\0') {
          return (-(uint)(cVar5 == '\0') & 0xfffffb54) + 0x900c;
        }
        return (-(uint)(cVar5 == '\0') & 0xfffffdb8) + 0x900d;
            case (TType)0x5:
        return uVar10 + 0x8b63;
            case (TType)0x6:
        return 0x8dc2;
         }

      }

      if (TVar2 == (TType)0x8) {
         switch (TVar3) {
            default:
        return 0;
            case (TType)0x1:
        return (-(uint)(cVar5 == '\0') & 0xfffffffa) + 0x905d;
            case (TType)0x2:
        goto switchD_00100827_caseD_2;
            case (TType)0x3:
        return 0x9059;
            case (TType)0x4:
        return (-(uint)(cVar5 == '\0') & 0xfffffffc) + 0x905f;
            case (TType)0x5:
        return 0x905a;
            case (TType)0x6:
        return 0x905c;
         }

      }

      if ((byte)TVar2 < 9) {
         if (TVar2 == (TType)0x1) {
            switch (TVar3) {
               default:
          return 0;
               case (TType)0x1:
          return (-(uint)(cVar5 == '\0') & 0xfffffffa) + 0x9052;
               case (TType)0x2:
          goto switchD_00100667_caseD_2;
               case (TType)0x3:
          return 0x904e;
               case (TType)0x4:
          return (-(uint)(cVar5 == '\0') & 0xfffffffc) + 0x9054;
               case (TType)0x5:
          return 0x904f;
               case (TType)0x6:
          return 0x9051;
            }

         }

         if (TVar2 == (TType)0x3) {
            switch (TVar3) {
               default:
          return 0;
               case (TType)0x1:
          return (-(uint)(cVar5 == '\0') & 0xfffffffb) + 0x91e5;
               case (TType)0x2:
          goto switchD_0010018d_caseD_2;
               case (TType)0x3:
          return 0x91e2;
               case (TType)0x4:
          return (-(uint)(cVar5 == '\0') & 0xfffffffd) + 0x91e7;
               case (TType)0x5:
          return 0x91e3;
               case (TType)0x6:
          return 0x91e8;
            }

         }

         return 0;
      }

      if (TVar2 == (TType)0x9) {
         switch (TVar3) {
            default:
        return 0;
            case (TType)0x1:
        return (-(uint)(cVar5 == '\0') & 0xfffffffa) + 0x9068;
            case (TType)0x2:
        goto switchD_00100313_caseD_2;
            case (TType)0x3:
        return 0x9064;
            case (TType)0x4:
        return (-(uint)(cVar5 == '\0') & 0xfffffffc) + 0x906a;
            case (TType)0x5:
        return 0x9065;
            case (TType)0x6:
        return 0x9067;
         }

      }

      return 0;
   }

   if (uVar10 < 0xf) {
      if (uVar10 == 0) {
         return 0;
      }

   }
 else if (uVar10 - 0xf < 2) {
      return 0;
   }

   lVar8 = *(long*)param_1;
   if (*(code**)( lVar8 + 0xd8 ) == TType::isVector) {
      if (1 < ( (byte)param_1[9] & 0xf )) goto LAB_0010006d;
      bVar6 = (byte)param_1[10] >> 4 & 1;
   }
 else {
      bVar6 = ( **(code**)( lVar8 + 0xd8 ) )(param_1);
      lVar8 = *(long*)param_1;
   }

   if (bVar6 != 0) {
      LAB_0010006d:if (*(code**)( lVar8 + 0x60 ) == TType::getVectorSize) {
         uVar10 = (byte)param_1[9] & 0xf;
      }
 else {
         uVar10 = ( **(code**)( lVar8 + 0x60 ) )(param_1);
         lVar8 = *(long*)param_1;
      }

      if (*(code**)( lVar8 + 0x38 ) == TType::getBasicType) {
         uVar7 = (uint)(byte)param_1[8];
      }
 else {
         uVar7 = ( **(code**)( lVar8 + 0x38 ) )(param_1);
      }

      switch (uVar7) {
         default:
      return 0;
         case 1:
      return uVar10 + 0x8b4e;
         case 2:
      return uVar10 + 0x8ffa;
         case 3:
      return uVar10 + 0x8ff7;
         case 8:
      return uVar10 + 0x8b51;
         case 9:
      return uVar10 + 0x8dc4;
         case 10:
      return uVar10 + 0x8fe7;
         case 0xb:
      return uVar10 + 0x8ff3;
         case 0xc:
      return uVar10 + 0x8b55;
         case 0xd:
      return uVar10 + 0x92d9;
      }

   }

   if (*(code**)( lVar8 + 0xe0 ) == TType::isMatrix) {
      if ((byte)param_1[9] < 0x10) {
         LAB_00100278:if (*(code**)( lVar8 + 0x60 ) == TType::getVectorSize) {
            uVar10 = (byte)param_1[9] & 0xf;
         }
 else {
            uVar10 = ( **(code**)( lVar8 + 0x60 ) )(param_1);
         }

         if (uVar10 != 1) {
            return 0;
         }

         if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
            uVar10 = (uint)(byte)param_1[8];
         }
 else {
            uVar10 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
         }

         switch (uVar10) {
            default:
        return 0;
            case 1:
        return 0x1406;
            case 2:
        return 0x140a;
            case 3:
        return 0x8ff8;
            case 8:
        return 0x1404;
            case 9:
        return 0x1405;
            case 10:
        return 0x140e;
            case 0xb:
        return 0x140f;
            case 0xc:
        return 0x8b56;
            case 0xd:
        return 0x92db;
         }

      }

   }
 else {
      cVar5 = ( **(code**)( lVar8 + 0xe0 ) )(param_1);
      lVar8 = *(long*)param_1;
      if (cVar5 == '\0') goto LAB_00100278;
   }

   if (*(code**)( lVar8 + 0x38 ) == TType::getBasicType) {
      uVar10 = (uint)(byte)param_1[8];
   }
 else {
      uVar10 = ( **(code**)( lVar8 + 0x38 ) )(param_1);
   }

   if (uVar10 == 2) {
      if (*(code**)( *(long*)param_1 + 0x68 ) == TType::getMatrixCols) {
         uVar10 = ( uint )((byte)param_1[9] >> 4);
      }
 else {
         uVar10 = ( **(code**)( *(long*)param_1 + 0x68 ) )(param_1);
      }

      if (uVar10 == 3) {
         if (*(code**)( *(long*)param_1 + 0x70 ) == TType::getMatrixRows) {
            uVar10 = (byte)param_1[10] & 0xf;
         }
 else {
            uVar10 = ( **(code**)( *(long*)param_1 + 0x70 ) )(param_1);
         }

         if (2 < uVar10 - 2) {
            return 0;
         }

         return *(int*)( CSWTCH_680 + ( ulong )(uVar10 - 2) * 4 );
      }

      if (uVar10 == 4) {
         if (*(code**)( *(long*)param_1 + 0x70 ) == TType::getMatrixRows) {
            uVar10 = (byte)param_1[10] & 0xf;
         }
 else {
            uVar10 = ( **(code**)( *(long*)param_1 + 0x70 ) )(param_1);
         }

         if (2 < uVar10 - 2) {
            return 0;
         }

         return *(int*)( CSWTCH_681 + ( ulong )(uVar10 - 2) * 4 );
      }

      if (uVar10 != 2) {
         return 0;
      }

      if (*(code**)( *(long*)param_1 + 0x70 ) == TType::getMatrixRows) {
         uVar10 = (byte)param_1[10] & 0xf;
      }
 else {
         uVar10 = ( **(code**)( *(long*)param_1 + 0x70 ) )(param_1);
      }

      if (2 < uVar10 - 2) {
         return 0;
      }

      return *(int*)( CSWTCH_679 + ( ulong )(uVar10 - 2) * 4 );
   }

   if (uVar10 == 3) {
      if (*(code**)( *(long*)param_1 + 0x68 ) == TType::getMatrixCols) {
         uVar10 = ( uint )((byte)param_1[9] >> 4);
      }
 else {
         uVar10 = ( **(code**)( *(long*)param_1 + 0x68 ) )(param_1);
      }

      if (uVar10 == 3) {
         if (*(code**)( *(long*)param_1 + 0x70 ) == TType::getMatrixRows) {
            uVar10 = (byte)param_1[10] & 0xf;
         }
 else {
            uVar10 = ( **(code**)( *(long*)param_1 + 0x70 ) )(param_1);
         }

         if (2 < uVar10 - 2) {
            return 0;
         }

         return *(int*)( CSWTCH_683 + ( ulong )(uVar10 - 2) * 4 );
      }

      if (uVar10 == 4) {
         if (*(code**)( *(long*)param_1 + 0x70 ) == TType::getMatrixRows) {
            uVar10 = (byte)param_1[10] & 0xf;
         }
 else {
            uVar10 = ( **(code**)( *(long*)param_1 + 0x70 ) )(param_1);
         }

         if (2 < uVar10 - 2) {
            return 0;
         }

         return *(int*)( CSWTCH_684 + ( ulong )(uVar10 - 2) * 4 );
      }

      if (uVar10 != 2) {
         return 0;
      }

      if (*(code**)( *(long*)param_1 + 0x70 ) == TType::getMatrixRows) {
         uVar10 = (byte)param_1[10] & 0xf;
      }
 else {
         uVar10 = ( **(code**)( *(long*)param_1 + 0x70 ) )(param_1);
      }

      if (2 < uVar10 - 2) {
         return 0;
      }

      return *(int*)( CSWTCH_682 + ( ulong )(uVar10 - 2) * 4 );
   }

   if (uVar10 != 1) {
      return 0;
   }

   if (*(code**)( *(long*)param_1 + 0x68 ) == TType::getMatrixCols) {
      uVar10 = ( uint )((byte)param_1[9] >> 4);
   }
 else {
      uVar10 = ( **(code**)( *(long*)param_1 + 0x68 ) )(param_1);
   }

   if (uVar10 == 3) {
      if (*(code**)( *(long*)param_1 + 0x70 ) == TType::getMatrixRows) {
         uVar10 = (byte)param_1[10] & 0xf;
      }
 else {
         uVar10 = ( **(code**)( *(long*)param_1 + 0x70 ) )(param_1);
      }

      if (2 < uVar10 - 2) {
         return 0;
      }

      return *(int*)( CSWTCH_677 + ( ulong )(uVar10 - 2) * 4 );
   }

   if (uVar10 == 4) {
      if (*(code**)( *(long*)param_1 + 0x70 ) == TType::getMatrixRows) {
         uVar10 = (byte)param_1[10] & 0xf;
      }
 else {
         uVar10 = ( **(code**)( *(long*)param_1 + 0x70 ) )(param_1);
      }

      if (2 < uVar10 - 2) {
         return 0;
      }

      return *(int*)( CSWTCH_678 + ( ulong )(uVar10 - 2) * 4 );
   }

   if (uVar10 != 2) {
      return 0;
   }

   if (*(code**)( *(long*)param_1 + 0x70 ) == TType::getMatrixRows) {
      uVar10 = (byte)param_1[10] & 0xf;
   }
 else {
      uVar10 = ( **(code**)( *(long*)param_1 + 0x70 ) )(param_1);
   }

   if (2 < uVar10 - 2) {
      return 0;
   }

   return *(int*)( CSWTCH_676 + ( ulong )(uVar10 - 2) * 4 );
   switchD_001007a7_caseD_2:if (bVar6 == 0) {
      return ( -(uint)(cVar5 == '\0') & 0xfffffffb ) + 0x8dcf;
   }

   return ( -(uint)(cVar5 == '\0') & 0xfffffffd ) + 0x910c;
   switchD_00100343_caseD_2:if (bVar6 == 0) {
      return ( -(uint)(cVar5 == '\0') & 0xfffffffb ) + 0x8dd7;
   }

   return ( -(uint)(cVar5 == '\0') & 0xfffffffd ) + 0x910d;
   switchD_00100827_caseD_2:if (bVar6 == 0) {
      return ( -(uint)(cVar5 == '\0') & 0xfffffffa ) + 0x905e;
   }

   return uVar7 + 0x9060;
   switchD_00100313_caseD_2:if (bVar6 == 0) {
      return ( -(uint)(cVar5 == '\0') & 0xfffffffa ) + 0x9069;
   }

   return uVar7 + 0x906b;
   switchD_00100667_caseD_2:if (bVar6 == 0) {
      return ( -(uint)(cVar5 == '\0') & 0xfffffffa ) + 0x9053;
   }

   return uVar7 + 0x9055;
   switchD_0010018d_caseD_2:if (bVar6 == 0) {
      return ( -(uint)(cVar5 == '\0') & 0xfffffffb ) + 0x91e6;
   }

   return uVar7 + 0x91e9;
   switchD_00100135_caseD_2:if (bVar6 != 0) {
      return uVar7 + 0x91d7;
   }

   if (cVar4 == '\0') {
      return ( -(uint)(cVar5 == '\0') & 0xfffffffb ) + 0x91d4;
   }

   return ( -(uint)(cVar5 == '\0') & 0xfffffffd ) + 0x91dd;
   switchD_00100707_caseD_2:if (bVar6 != 0) {
      return ( -(uint)(cVar5 == '\0') & 0xfffffffd ) + 0x910b;
   }

   if (cVar4 == '\0') {
      return ( -(uint)(cVar5 == '\0') & 0xfffffd9d ) + 0x8dc1;
   }

   return ( -(uint)(cVar5 == '\0') & 0xfffffd9e ) + 0x8dc4;
}
/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.0] */void std::__cxx11::string::_M_construct<char*>(ulong *param_1, undefined1 *param_2, long param_3) {
   undefined1 *__dest;
   ulong __n;
   long in_FS_OFFSET;
   ulong local_28;
   long local_20;
   __n = param_3 - (long)param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = __n;
   if (__n < 0x10) {
      __dest = (undefined1*)*param_1;
      if (__n == 1) {
         *__dest = *param_2;
         __dest = (undefined1*)*param_1;
         goto LAB_00100c74;
      }

      if (__n == 0) goto LAB_00100c74;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_00100c74:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,
   std::pair<glslang::TVector<glslang::TTypeLoc>* const, glslang::TVector<glslang::TTypeLoc>*>,
   std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>* const,
   glslang::TVector<glslang::TTypeLoc>*> >, std::less<glslang::TVector<glslang::TTypeLoc>*>,
   glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>* const,
   glslang::TVector<glslang::TTypeLoc>*> >
   >::_M_erase(std::_Rb_tree_node<std::pair<glslang::TVector<glslang::TTypeLoc>* const,
   glslang::TVector<glslang::TTypeLoc>*> >*) [clone .isra.0] */void std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>,std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>>::_M_erase(_Rb_tree_node *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   if (param_1 != (_Rb_tree_node*)0x0) {
      do {
         for (lVar1 = *(long*)( param_1 + 0x18 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 0x10 )) {
            for (lVar2 = *(long*)( lVar1 + 0x18 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 0x10 )) {
               for (lVar3 = *(long*)( lVar2 + 0x18 ); lVar3 != 0; lVar3 = *(long*)( lVar3 + 0x10 )) {
                  for (lVar4 = *(long*)( lVar3 + 0x18 ); lVar4 != 0; lVar4 = *(long*)( lVar4 + 0x10 )) {
                     for (lVar5 = *(long*)( lVar4 + 0x18 ); lVar5 != 0; lVar5 = *(long*)( lVar5 + 0x10 )) {
                        for (lVar6 = *(long*)( lVar5 + 0x18 ); lVar6 != 0; lVar6 = *(long*)( lVar6 + 0x10 )) {
                           for (lVar7 = *(long*)( lVar6 + 0x18 ); lVar7 != 0; lVar7 = *(long*)( lVar7 + 0x10 )) {
                              for (lVar8 = *(long*)( lVar7 + 0x18 ); lVar8 != 0; lVar8 = *(long*)( lVar8 + 0x10 )) {
                                 _M_erase(*(_Rb_tree_node**)( lVar8 + 0x18 ));
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

         param_1 = *(_Rb_tree_node**)( param_1 + 0x10 );
      }
 while ( param_1 != (_Rb_tree_node*)0x0 );
      return;
   }

   return;
}
/* std::_Rb_tree<TIntermNode const*, TIntermNode const*, std::_Identity<TIntermNode const*>,
   std::less<TIntermNode const*>, std::allocator<TIntermNode const*>
   >::_M_erase(std::_Rb_tree_node<TIntermNode const*>*) [clone .isra.0] */void std::_Rb_tree<TIntermNode_const*,TIntermNode_const*,std::_Identity<TIntermNode_const*>,std::less<TIntermNode_const*>,std::allocator<TIntermNode_const*>>::_M_erase(_Rb_tree_node *param_1) {
   void *pvVar1;
   void *pvVar2;
   void *pvVar3;
   void *pvVar4;
   void *pvVar5;
   void *pvVar6;
   void *pvVar7;
   void *pvVar8;
   _Rb_tree_node *p_Var9;
   void *pvVar10;
   _Rb_tree_node *local_48;
   local_48 = param_1;
   if (param_1 != (_Rb_tree_node*)0x0) {
      do {
         pvVar10 = *(void**)( local_48 + 0x18 );
         while (pvVar10 != (void*)0x0) {
            pvVar8 = *(void**)( (long)pvVar10 + 0x18 );
            while (pvVar8 != (void*)0x0) {
               pvVar7 = *(void**)( (long)pvVar8 + 0x18 );
               while (pvVar7 != (void*)0x0) {
                  pvVar5 = *(void**)( (long)pvVar7 + 0x18 );
                  while (pvVar5 != (void*)0x0) {
                     pvVar3 = *(void**)( (long)pvVar5 + 0x18 );
                     while (pvVar3 != (void*)0x0) {
                        pvVar4 = *(void**)( (long)pvVar3 + 0x18 );
                        while (pvVar4 != (void*)0x0) {
                           pvVar6 = *(void**)( (long)pvVar4 + 0x18 );
                           while (pvVar6 != (void*)0x0) {
                              pvVar2 = *(void**)( (long)pvVar6 + 0x18 );
                              while (pvVar2 != (void*)0x0) {
                                 _M_erase(*(_Rb_tree_node**)( (long)pvVar2 + 0x18 ));
                                 pvVar1 = *(void**)( (long)pvVar2 + 0x10 );
                                 operator_delete(pvVar2, 0x28);
                                 pvVar2 = pvVar1;
                              }
;
                              pvVar2 = *(void**)( (long)pvVar6 + 0x10 );
                              operator_delete(pvVar6, 0x28);
                              pvVar6 = pvVar2;
                           }
;
                           pvVar6 = *(void**)( (long)pvVar4 + 0x10 );
                           operator_delete(pvVar4, 0x28);
                           pvVar4 = pvVar6;
                        }
;
                        pvVar4 = *(void**)( (long)pvVar3 + 0x10 );
                        operator_delete(pvVar3, 0x28);
                        pvVar3 = pvVar4;
                     }
;
                     pvVar3 = *(void**)( (long)pvVar5 + 0x10 );
                     operator_delete(pvVar5, 0x28);
                     pvVar5 = pvVar3;
                  }
;
                  pvVar5 = *(void**)( (long)pvVar7 + 0x10 );
                  operator_delete(pvVar7, 0x28);
                  pvVar7 = pvVar5;
               }
;
               pvVar7 = *(void**)( (long)pvVar8 + 0x10 );
               operator_delete(pvVar8, 0x28);
               pvVar8 = pvVar7;
            }
;
            pvVar8 = *(void**)( (long)pvVar10 + 0x10 );
            operator_delete(pvVar10, 0x28);
            pvVar10 = pvVar8;
         }
;
         p_Var9 = *(_Rb_tree_node**)( local_48 + 0x10 );
         operator_delete(local_48, 0x28);
         local_48 = p_Var9;
      }
 while ( p_Var9 != (_Rb_tree_node*)0x0 );
   }

   return;
}
/* void std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_construct<char const*>(char const*, char const*, std::forward_iterator_tag) [clone .isra.0]
    */void std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(ulong *param_1, undefined1 *param_2, long param_3) {
   undefined1 *__dest;
   ulong __n;
   __n = param_3 - (long)param_2;
   if (__n < 0x10) {
      __dest = (undefined1*)param_1[1];
      if (__n == 1) {
         *__dest = *param_2;
         param_1[2] = 1;
         *(undefined1*)( param_1[1] + 1 ) = 0;
         return;
      }

      if (__n == 0) {
         param_1[2] = 0;
         *__dest = 0;
         return;
      }

   }
 else {
      if ((long)__n < 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::_M_create");
      }

      __dest = (undefined1*)glslang::TPoolAllocator::allocate(*param_1);
      param_1[3] = __n;
      param_1[1] = (ulong)__dest;
   }

   memcpy(__dest, param_2, __n);
   param_1[2] = __n;
   *(undefined1*)( param_1[1] + __n ) = 0;
   return;
}
/* glslang::TObjectReflection::getBinding() const */ulong glslang::TObjectReflection::getBinding(TObjectReflection *this) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   plVar1 = *(long**)( this + 0x48 );
   if (plVar1 != (long*)0x0) {
      if (*(code**)( *plVar1 + 0x58 ) == TType::getQualifier) {
         if (*(ushort*)( plVar1 + 6 ) != 0xffff) {
            return ( ulong ) * (ushort*)( plVar1 + 6 );
         }

      }
 else {
         lVar3 = ( **(code**)( *plVar1 + 0x58 ) )();
         if (*(short*)( lVar3 + 0x20 ) != -1) {
            pcVar2 = *(code**)( **(long**)( this + 0x48 ) + 0x58 );
            if (pcVar2 == TType::getQualifier) {
               return ( ulong ) * (ushort*)( *(long**)( this + 0x48 ) + 6 );
            }

            lVar3 = ( *pcVar2 )();
            return ( ulong ) * (ushort*)( lVar3 + 0x20 );
         }

      }

   }

   return 0xffffffff;
}
/* glslang::TObjectReflection::dump() const */void glslang::TObjectReflection::dump(TObjectReflection *this) {
   undefined4 uVar1;
   int iVar2;
   undefined8 uVar3;
   uVar1 = *(undefined4*)( this + 0x44 );
   uVar3 = getBinding(this);
   __printf_chk(2, "%s: offset %d, type %x, size %d, index %d, binding %d, stages %d", *(undefined8*)this, *(undefined4*)( this + 0x20 ), *(undefined4*)( this + 0x24 ), *(undefined4*)( this + 0x28 ), *(undefined4*)( this + 0x2c ), uVar3, uVar1);
   if (*(int*)( this + 0x30 ) != -1) {
      __printf_chk(2, ", counter %d");
   }

   if (*(int*)( this + 0x34 ) != -1) {
      __printf_chk(2, ", numMembers %d");
   }

   if (*(int*)( this + 0x38 ) == 0) {
      iVar2 = *(int*)( this + 0x40 );
   }
 else {
      __printf_chk(2, ", arrayStride %d");
      iVar2 = *(int*)( this + 0x40 );
   }

   if (iVar2 == 0) {
      putchar(10);
      return;
   }

   __printf_chk(2, ", topLevelArrayStride %d");
   putchar(10);
   return;
}
/* glslang::TReflection::buildAttributeReflection(EShLanguage, glslang::TIntermediate const&) */void glslang::TReflection::buildAttributeReflection(TReflection *this, int param_2, long param_3) {
   if (param_2 != 5) {
      return;
   }

   for (int i = 0; i < 3; i++) {
      *(undefined4*)( this + ( 4*i + 416 ) ) = *(undefined4*)( param_3 + ( 4*i + 632 ) );
   }

   return;
}
/* glslang::TReflection::buildCounterIndices(glslang::TIntermediate const&) */void glslang::TReflection::buildCounterIndices(TIntermediate *param_1) {
   return;
}
/* glslang::TReflection::buildUniformStageMask(glslang::TIntermediate const&) */void glslang::TReflection::buildUniformStageMask(TReflection *this, TIntermediate *param_1) {
   uint *puVar1;
   undefined4 uVar2;
   long lVar3;
   uint *puVar4;
   uint uVar5;
   int iVar6;
   if (( (byte)this[8] & 0x10 ) != 0) {
      return;
   }

   uVar2 = *(undefined4*)param_1;
   lVar3 = *(long*)( this + 0xf8 );
   iVar6 = (int)( *(long*)( this + 0x100 ) - lVar3 >> 4 ) * -0x33333333;
   if (0 < iVar6) {
      puVar4 = (uint*)( lVar3 + 0x44 );
      uVar5 = 1 << ( (byte)uVar2 & 0x1f );
      puVar1 = (uint*)( lVar3 + 0x94 + ( ulong )(iVar6 - 1) * 0x50 );
      if (( (int)puVar1 - (int)puVar4 & 0x10U ) != 0) {
         *puVar4 = *puVar4 | uVar5;
         puVar4 = (uint*)( lVar3 + 0x94 );
         if (puVar4 == puVar1) goto LAB_00101290;
      }

      do {
         *puVar4 = *puVar4 | uVar5;
         puVar4[0x14] = puVar4[0x14] | uVar5;
         puVar4 = puVar4 + 0x28;
      }
 while ( puVar4 != puVar1 );
   }

   LAB_00101290:lVar3 = *(long*)( this + 0x128 );
   iVar6 = (int)( *(long*)( this + 0x130 ) - lVar3 >> 4 ) * -0x33333333;
   if (0 < iVar6) {
      puVar4 = (uint*)( lVar3 + 0x44 );
      uVar5 = 1 << ( (byte)uVar2 & 0x1f );
      puVar1 = (uint*)( lVar3 + 0x94 + ( ulong )(iVar6 - 1) * 0x50 );
      if (( (int)puVar1 - (int)puVar4 & 0x10U ) != 0) {
         *puVar4 = *puVar4 | uVar5;
         puVar4 = (uint*)( lVar3 + 0x94 );
         if (puVar1 == puVar4) {
            return;
         }

      }

      do {
         *puVar4 = *puVar4 | uVar5;
         puVar4[0x14] = puVar4[0x14] | uVar5;
         puVar4 = puVar4 + 0x28;
      }
 while ( puVar1 != puVar4 );
   }

   return;
}
/* glslang::TReflection::addStage(EShLanguage, glslang::TIntermediate const&) */undefined8 glslang::TReflection::addStage(TReflection *this, int param_2, TIntermediate *param_3) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   byte bVar3;
   byte bVar4;
   uint uVar5;
   long *plVar6;
   long lVar7;
   ulong uVar8;
   undefined8 uVar9;
   long lVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   long in_FS_OFFSET;
   undefined **local_c8;
   undefined4 local_c0;
   undefined8 local_bc;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   TIntermediate *local_90;
   TReflection *local_88;
   undefined4 local_78[2];
   _Rb_tree_node *local_70;
   undefined4 *local_68;
   undefined4 *local_60;
   undefined8 local_58;
   undefined1 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = 0;
   if (*(long*)( param_3 + 0x80 ) == 0) {
      uVar9 = 0;
   }
 else if (( *(int*)( param_3 + 0x260 ) == 1 ) && ( param_3[0x26c] == (TIntermediate)0x0 )) {
      if (param_2 == 5) {
         for (int i = 0; i < 3; i++) {
            *(undefined4*)( this + ( 4*i + 416 ) ) = *(undefined4*)( param_3 + ( 4*i + 632 ) );
         }

      }

      local_c0 = 1;
      local_c8 = &PTR__TIntermTraverser_00110318;
      local_bc = 0;
      local_b0 = glslang::GetThreadPoolAllocator();
      local_a8 = 0;
      local_c8 = &PTR__TReflectionTraverser_00110380;
      local_68 = local_78;
      local_a0 = 0;
      local_98 = 0;
      local_78[0] = 0;
      local_70 = (_Rb_tree_node*)0x0;
      local_58 = 0;
      local_50 = 1;
      local_90 = param_3;
      local_88 = this;
      local_60 = local_68;
      plVar6 = (long*)( **(code**)( **(long**)( param_3 + 0x80 ) + 0x30 ) )();
      if (*(code**)( *plVar6 + 400 ) == TIntermAggregate::getSequence) {
         plVar6 = plVar6 + 0x18;
      }
 else {
         plVar6 = (long*)( **(code**)( *plVar6 + 400 ) )(plVar6);
      }

      puVar1 = (undefined8*)plVar6[2];
      for (puVar12 = (undefined8*)plVar6[1]; puVar12 != puVar1; puVar12 = puVar12 + 1) {
         lVar7 = ( **(code**)( *(long*)*puVar12 + 0x30 ) )();
         if (lVar7 != 0) {
            lVar7 = ( **(code**)( *(long*)*puVar12 + 0x30 ) )();
            if (*(int*)( lVar7 + 0xb8 ) == 3) {
               local_50 = 0;
               plVar6 = (long*)( **(code**)( *(long*)*puVar12 + 0x30 ) )();
               if (*(code**)( *plVar6 + 400 ) == TIntermAggregate::getSequence) {
                  plVar6 = plVar6 + 0x18;
               }
 else {
                  plVar6 = (long*)( **(code**)( *plVar6 + 400 ) )(plVar6);
               }

               puVar11 = (undefined8*)plVar6[1];
               puVar2 = (undefined8*)plVar6[2];
               if (puVar11 != puVar2) {
                  do {
                     plVar6 = (long*)( **(code**)( *(long*)*puVar11 + 0x60 ) )();
                     if (plVar6 == (long*)0x0) goto LAB_00101580;
                     lVar7 = *plVar6;
                     if (*(code**)( lVar7 + 0x108 ) == TIntermTyped::getQualifier) {
                        bVar3 = *(byte*)( plVar6 + 7 );
                        uVar5 = *(uint*)( this + 8 );
                        bVar4 = bVar3 & 0x7f;
                        if (bVar4 == 5) {
                           if (( uVar5 & 0x100 ) != 0) goto LAB_001015dc;
                           LAB_001016bc:bVar4 = bVar3 & 0x7f;
                        }

                        LAB_001015c6:if (( bVar4 == 6 ) && ( ( uVar5 & 0x80 ) != 0 )) {
                           lVar7 = *plVar6;
                           goto LAB_001015dc;
                        }

                        if (( uVar5 & 0x40 ) != 0) {
                           lVar7 = *plVar6;
                           if (*(code**)( lVar7 + 0x108 ) == TIntermTyped::getQualifier) {
                              uVar8 = ( ulong )(*(byte*)( plVar6 + 7 ) & 0x7f);
                              bVar3 = ( byte )(*(byte*)( plVar6 + 7 ) & 0x7f);
                              if (bVar3 < 0x1c) {
                                 if (( 0xe300008UL >> ( uVar8 & 0x3f ) & 1 ) == 0) {
                                    LAB_00101780:if (( 0x71c00010UL >> ( uVar8 & 0x3f ) & 1 ) == 0) goto LAB_00101580;
                                    lVar7 = *plVar6;
                                 }

                              }
 else if (0x1e < bVar3) goto LAB_00101580;
                           }
 else {
                              lVar7 = ( **(code**)( lVar7 + 0x108 ) )(plVar6);
                              uVar5 = *(byte*)( lVar7 + 8 ) & 0x7f;
                              if (( 0x1b < (byte)uVar5 ) || ( ( 0xe300008UL >> ( (ulong)uVar5 & 0x3f ) & 1 ) == 0 )) {
                                 if (*(code**)( *plVar6 + 0x108 ) == TIntermTyped::getQualifier) {
                                    bVar3 = *(byte*)( plVar6 + 7 );
                                 }
 else {
                                    lVar7 = ( **(code**)( *plVar6 + 0x108 ) )(plVar6);
                                    bVar3 = *(byte*)( lVar7 + 8 );
                                 }

                                 uVar8 = ( ulong )(bVar3 & 0x7f);
                                 if (( byte )(bVar3 & 0x7f) < 0x1f) goto LAB_00101780;
                                 goto LAB_00101580;
                              }

                              lVar7 = *plVar6;
                           }

                           ( **(code**)( lVar7 + 0x10 ) )(plVar6, &local_c8);
                        }

                     }
 else {
                        lVar10 = ( **(code**)( lVar7 + 0x108 ) )(plVar6);
                        lVar7 = *plVar6;
                        if (( ( *(byte*)( lVar10 + 8 ) & 0x7f ) != 5 ) || ( ( (byte)this[9] & 1 ) == 0 )) {
                           if (*(code**)( lVar7 + 0x108 ) == TIntermTyped::getQualifier) {
                              bVar3 = *(byte*)( plVar6 + 7 );
                              uVar5 = *(uint*)( this + 8 );
                              goto LAB_001016bc;
                           }

                           lVar7 = ( **(code**)( lVar7 + 0x108 ) )(plVar6);
                           uVar5 = *(uint*)( this + 8 );
                           bVar4 = *(byte*)( lVar7 + 8 ) & 0x7f;
                           goto LAB_001015c6;
                        }

                        LAB_001015dc:if (*(code**)( lVar7 + 0x100 ) == TIntermTyped::getBasicType) {
                           uVar5 = ( uint ) * (byte*)( plVar6 + 5 );
                        }
 else {
                           uVar5 = ( **(code**)( lVar7 + 0x100 ) )(plVar6);
                        }

                        if (uVar5 == 0x10) {
                           lVar7 = *plVar6;
                           if (*(code**)( lVar7 + 0x108 ) == TIntermTyped::getQualifier) {
                              bVar3 = *(byte*)( plVar6 + 8 ) & 0xf;
                              if (bVar3 != 2) {
                                 LAB_0010161b:if (bVar3 != 1) goto LAB_00101580;
                                 goto LAB_00101623;
                              }

                           }
 else {
                              lVar7 = ( **(code**)( lVar7 + 0x108 ) )(plVar6);
                              if (( *(byte*)( lVar7 + 0x10 ) & 0xf ) != 2) {
                                 if (*(code**)( *plVar6 + 0x108 ) == TIntermTyped::getQualifier) {
                                    bVar3 = *(byte*)( plVar6 + 8 ) & 0xf;
                                 }
 else {
                                    lVar7 = ( **(code**)( *plVar6 + 0x108 ) )(plVar6);
                                    bVar3 = *(byte*)( lVar7 + 0x10 ) & 0xf;
                                 }

                                 goto LAB_0010161b;
                              }

                              LAB_00101623:lVar7 = *plVar6;
                           }

                           ( **(code**)( lVar7 + 0x10 ) )(plVar6, &local_c8);
                        }

                     }

                     LAB_00101580:puVar11 = puVar11 + 1;
                  }
 while ( puVar2 != puVar11 );
               }

            }
 else {
               local_50 = 1;
               plVar6 = (long*)( **(code**)( *(long*)*puVar12 + 0x30 ) )();
               ( **(code**)( *plVar6 + 0x10 ) )(plVar6, &local_c8);
            }

         }

      }

      local_50 = 1;
      buildUniformStageMask(this, param_3);
      local_c8 = &PTR__TReflectionTraverser_00110380;
      std::_Rb_tree<TIntermNode_const*,TIntermNode_const*,std::_Identity<TIntermNode_const*>,std::less<TIntermNode_const*>,std::allocator<TIntermNode_const*>>::_M_erase(local_70);
      uVar9 = 1;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TReflection::dump() */void glslang::TReflection::dump(TReflection *this) {
   TReflection *pTVar1;
   undefined **ppuVar2;
   long lVar3;
   ulong uVar4;
   ulong uVar5;
   puts("Uniform reflection:");
   lVar3 = *(long*)( this + 0xf8 );
   if (*(long*)( this + 0x100 ) != lVar3) {
      uVar5 = 0;
      do {
         uVar4 = uVar5 + 1;
         TObjectReflection::dump((TObjectReflection*)( lVar3 + uVar5 * 0x50 ));
         lVar3 = *(long*)( this + 0xf8 );
         uVar5 = uVar4;
      }
 while ( uVar4 < ( ulong )(( *(long*)( this + 0x100 ) - lVar3 >> 4 ) * -0x3333333333333333) );
   }

   putchar(10);
   puts("Uniform block reflection:");
   lVar3 = *(long*)( this + 0x110 );
   if (*(long*)( this + 0x118 ) != lVar3) {
      uVar5 = 0;
      do {
         uVar4 = uVar5 + 1;
         TObjectReflection::dump((TObjectReflection*)( lVar3 + uVar5 * 0x50 ));
         lVar3 = *(long*)( this + 0x110 );
         uVar5 = uVar4;
      }
 while ( uVar4 < ( ulong )(( *(long*)( this + 0x118 ) - lVar3 >> 4 ) * -0x3333333333333333) );
   }

   putchar(10);
   puts("Buffer variable reflection:");
   lVar3 = *(long*)( this + 0x128 );
   if (*(long*)( this + 0x130 ) != lVar3) {
      uVar5 = 0;
      do {
         uVar4 = uVar5 + 1;
         TObjectReflection::dump((TObjectReflection*)( lVar3 + uVar5 * 0x50 ));
         lVar3 = *(long*)( this + 0x128 );
         uVar5 = uVar4;
      }
 while ( uVar4 < ( ulong )(( *(long*)( this + 0x130 ) - lVar3 >> 4 ) * -0x3333333333333333) );
   }

   putchar(10);
   puts("Buffer block reflection:");
   lVar3 = *(long*)( this + 0x140 );
   if (*(long*)( this + 0x148 ) != lVar3) {
      uVar5 = 0;
      do {
         uVar4 = uVar5 + 1;
         TObjectReflection::dump((TObjectReflection*)( lVar3 + uVar5 * 0x50 ));
         lVar3 = *(long*)( this + 0x140 );
         uVar5 = uVar4;
      }
 while ( uVar4 < ( ulong )(( *(long*)( this + 0x148 ) - lVar3 >> 4 ) * -0x3333333333333333) );
   }

   putchar(10);
   puts("Pipeline input reflection:");
   lVar3 = *(long*)( this + 0x158 );
   if (*(long*)( this + 0x160 ) != lVar3) {
      uVar5 = 0;
      do {
         uVar4 = uVar5 + 1;
         TObjectReflection::dump((TObjectReflection*)( lVar3 + uVar5 * 0x50 ));
         lVar3 = *(long*)( this + 0x158 );
         uVar5 = uVar4;
      }
 while ( uVar4 < ( ulong )(( *(long*)( this + 0x160 ) - lVar3 >> 4 ) * -0x3333333333333333) );
   }

   putchar(10);
   puts("Pipeline output reflection:");
   lVar3 = *(long*)( this + 0x170 );
   if (*(long*)( this + 0x178 ) != lVar3) {
      uVar5 = 0;
      do {
         uVar4 = uVar5 + 1;
         TObjectReflection::dump((TObjectReflection*)( lVar3 + uVar5 * 0x50 ));
         lVar3 = *(long*)( this + 0x170 );
         uVar5 = uVar4;
      }
 while ( uVar4 < ( ulong )(( *(long*)( this + 0x178 ) - lVar3 >> 4 ) * -0x3333333333333333) );
   }

   putchar(10);
   if (1 < *(uint*)( this + 0x1a0 )) {
      ppuVar2= &dump()::axis;
      pTVar1 = this + 0x1a0;
      do {
         if (1 < *(uint*)pTVar1) {
            __printf_chk(2, "Local size %s: %u\n", *ppuVar2);
         }

         ppuVar2 = ppuVar2 + 1;
         pTVar1 = pTVar1 + 4;
      }
 while ( ppuVar2 != (undefined**)&_LC22 );
      putchar(10);
      return;
   }

   return;
}
/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSampler()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */undefined8 * std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSampler ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const&)_1_>>
          (undefined8 *param_1,undefined8 *param_2), {
      bool bVar1;
      long lVar2;
      undefined8 *puVar3;
      lVar2 = (long)param_2 - (long)param_1;
      if (0 < lVar2 >> 7) {
         puVar3 = param_1 + ( lVar2 >> 7 ) * 0x10;
         do {
            bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*param_1);
            if (bVar1) {
               return param_1;
            }

            for (int i = 0; i < 3; i++) {
               bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(param_1[( 4*i + 4 )]);
               if (bVar1) {
                  return param_1 + ( 4*i + 4 );
               }

            }

            param_1 = param_1 + 0x10;
         }
 while ( param_1 != puVar3 );
         lVar2 = (long)param_2 - (long)param_1;
      }

      lVar2 = lVar2 >> 5;
      if (lVar2 != 2) {
         if (lVar2 != 3) {
            if (lVar2 != 1) {
               return param_2;
            }

            goto LAB_00101c21;
         }

         bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*param_1);
         if (bVar1) {
            return param_1;
         }

         param_1 = param_1 + 4;
      }

      bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*param_1);
      if (bVar1) {
         return param_1;
      }

      param_1 = param_1 + 4;
      LAB_00101c21:bVar1 = glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const*)_1_>(*param_1);
      if (!bVar1) {
         return param_2;
      }

      return param_1;
   }
, /* glslang::TObjectReflection& std::vector<glslang::TObjectReflection,
   std::allocator<glslang::TObjectReflection>
   >::emplace_back<glslang::TObjectReflection>(glslang::TObjectReflection&&) [clone .isra.0] */, TObjectReflection * __thiscall
std::vector<glslang::TObjectReflection, std::allocator<glslang::TObjectReflection>>::
emplace_back<glslang::TObjectReflection>
          (vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>> *this,
          TObjectReflection *param_1), {
      TObjectReflection *pTVar1;
      long *plVar2;
      long lVar3;
      long lVar4;
      long lVar5;
      long lVar6;
      TObjectReflection *extraout_RAX;
      uint uVar7;
      long lVar8;
      ulong uVar9;
      uint uVar10;
      plVar2 = *(long**)( this + 8 );
      if (plVar2 == *(long**)( this + 0x10 )) {
         _M_realloc_insert<glslang::TObjectReflection>();
         return extraout_RAX;
      }

      pTVar1 = param_1 + 0x10;
      *plVar2 = (long)( plVar2 + 2 );
      if (*(TObjectReflection**)param_1 == pTVar1) {
         lVar8 = *(long*)( param_1 + 8 );
         uVar9 = lVar8 + 1;
         uVar10 = (uint)uVar9;
         if (uVar10 < 8) {
            if (( uVar9 & 4 ) != 0) {
               *(undefined4*)( plVar2 + 2 ) = *(undefined4*)( param_1 + 0x10 );
               *(undefined4*)( (long)plVar2 + ( uVar9 & 0xffffffff ) + 0xc ) = *(undefined4*)( param_1 + ( uVar9 & 0xffffffff ) + 0xc );
               lVar8 = *(long*)( param_1 + 8 );
               goto LAB_00101c90;
            }

            if (uVar10 == 0) goto LAB_00101c90;
            *(TObjectReflection*)( plVar2 + 2 ) = param_1[0x10];
            if (( uVar9 & 2 ) != 0) {
               *(undefined2*)( (long)plVar2 + ( uVar9 & 0xffffffff ) + 0xe ) = *(undefined2*)( param_1 + ( uVar9 & 0xffffffff ) + 0xe );
               lVar8 = *(long*)( param_1 + 8 );
               goto LAB_00101c90;
            }

         }
 else {
            plVar2[2] = *(long*)( param_1 + 0x10 );
            *(undefined8*)( (long)plVar2 + ( uVar9 & 0xffffffff ) + 8 ) = *(undefined8*)( param_1 + ( uVar9 & 0xffffffff ) + 8 );
            lVar8 = (long)( plVar2 + 2 ) - ( ( ulong )(plVar2 + 3) & 0xfffffffffffffff8 );
            uVar10 = uVar10 + (int)lVar8 & 0xfffffff8;
            if (7 < uVar10) {
               uVar7 = 0;
               do {
                  uVar9 = (ulong)uVar7;
                  uVar7 = uVar7 + 8;
                  *(undefined8*)( ( ( ulong )(plVar2 + 3) & 0xfffffffffffffff8 ) + uVar9 ) = *(undefined8*)( pTVar1 + ( uVar9 - lVar8 ) );
               }
 while ( uVar7 < uVar10 );
            }

         }

      }
 else {
         *plVar2 = (long)*(TObjectReflection**)param_1;
         plVar2[2] = *(long*)( param_1 + 0x10 );
      }

      lVar8 = *(long*)( param_1 + 8 );
      LAB_00101c90:lVar3 = *(long*)( param_1 + 0x20 );
      lVar4 = *(long*)( param_1 + 0x28 );
      lVar5 = *(long*)( param_1 + 0x30 );
      lVar6 = *(long*)( param_1 + 0x38 );
      *(TObjectReflection**)param_1 = pTVar1;
      *(undefined8*)( param_1 + 8 ) = 0;
      pTVar1 = *(TObjectReflection**)( param_1 + 0x48 );
      plVar2[1] = lVar8;
      param_1[0x10] = (TObjectReflection)0x0;
      lVar8 = *(long*)( param_1 + 0x40 );
      plVar2[9] = (long)pTVar1;
      plVar2[8] = lVar8;
      plVar2[4] = lVar3;
      plVar2[5] = lVar4;
      plVar2[6] = lVar5;
      plVar2[7] = lVar6;
      *(long*)( this + 8 ) = *(long*)( this + 8 ) + 0x50;
      return pTVar1;
   }
, /* std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>
   >::_M_replace(unsigned long, unsigned long, char const*, unsigned long) [clone .isra.0] */, void __thiscall
std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char>>::_M_replace
          (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4), {
      basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *__dest;
      long lVar1;
      basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *pbVar2;
      ulong uVar3;
      ulong uVar4;
      lVar1 = *(long*)( this + 0x10 );
      if (param_4 <= ( param_2 + 0x7fffffffffffffff ) - lVar1) {
         pbVar2 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 8 );
         uVar3 = ( param_4 - param_2 ) + lVar1;
         if (pbVar2 == this + 0x18) {
            uVar4 = 0xf;
         }
 else {
            uVar4 = *(ulong*)( this + 0x18 );
         }

         if (uVar4 < uVar3) {
            _M_mutate(this, param_1, param_2, param_3, param_4);
         }
 else {
            __dest = pbVar2 + param_1;
            uVar4 = lVar1 - ( param_1 + param_2 );
            if (( param_3 < pbVar2 ) || ( pbVar2 + lVar1 < param_3 )) {
               if (( uVar4 != 0 ) && ( param_2 != param_4 )) {
                  if (uVar4 == 1) {
                     __dest[param_4] = __dest[param_2];
                  }
 else {
                     memmove(__dest + param_4, __dest + param_2, uVar4);
                  }

               }

               if (param_4 != 0) {
                  if (param_4 == 1) {
                     *__dest = ( basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> ) * param_3;
                  }
 else {
                     memcpy(__dest, param_3, param_4);
                  }

               }

            }
 else {
               _M_replace_cold(this, (char*)__dest, param_2, param_3, param_4, uVar4);
            }

         }

         *(ulong*)( this + 0x10 ) = uVar3;
         *(undefined1*)( *(long*)( this + 8 ) + uVar3 ) = 0;
         return;
      }

      /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_replace");
   }
, /* glslang::TObjectReflection::TObjectReflection(std::__cxx11::string const&, glslang::TType const&,
   int, int, int, int) */, void __thiscall
glslang::TObjectReflection::TObjectReflection
          (TObjectReflection *this, string * param_1, TType * param_2, int, param_3, int, param_4, int, param_5, int, param_6) * this_00 ;long lVar3long in_FS_OFFSETundefined8 local_68[2]undefined4 local_58[2]long local_50undefined4 *local_48undefined4 *local_40undefined8 local_38long local_30local_30 = *(long*)( in_FS_OFFSET + 0x28 );*(TObjectReflection**)this = this + 0x10;std::__cxx11::string::_M_construct<char*>(this, *(long*)param_1, *(long*)( param_1 + 8 ) + *(long*)param_1);uVar1 = _LC22;*(undefined4*)( this + 0x38 ) = 0;*(undefined8*)( this + 0x40 ) = 0;*(undefined8*)( this + 0x30 ) = uVar1;*(ulong*)( this + 0x20 ) = CONCAT44(param_4, param_3);*(ulong*)( this + 0x28 ) = CONCAT44(param_6, param_5);uVar2 = glslang::GetThreadPoolAllocator();this_00 = (TType*)glslang::TPoolAllocator::allocate(uVar2);*(undefined***)this_00 = &PTR__TType_00110130;*(uint*)( this_00 + 0x80 ) = *(uint*)( this_00 + 0x80 ) & 0x9fc00000;this_00[0x20] = ( TType )((byte)this_00[0x20] & 0xf0);*(undefined8*)( this_00 + 0x10 ) = 0;*(uint*)( this_00 + 8 ) = CONCAT22((short)( ( uint ) * (undefined4*)( this_00 + 8 ) >> 0x10 ), 0x100) & 0xf800ffff;*(undefined8*)( this_00 + 0x44 ) = 0xfffff800;*(undefined2*)( this_00 + 0x58 ) = 0;*(undefined8*)( this_00 + 0x24 ) = uVar1;*(ulong*)( this_00 + 0x2d ) = *(ulong*)( this_00 + 0x2d ) & 0xffffff0000ffc07f | 0xffff001f80;this_00[0x40] = (TType)0x0;*(undefined4*)( this_00 + 0x4c ) = 0xffffffff;*(undefined8*)( this_00 + 0x50 ) = 0;*(ulong*)( this_00 + 0x38 ) = ( ulong )(( uint ) * (undefined8*)( this_00 + 0x38 ) & 0xfe07ff00) | 0x1f800ff;*(undefined1(*) [16])( this_00 + 0x88 ) = (undefined1[16])0x0;*(ulong*)( this_00 + 0x2c ) = *(ulong*)( this_00 + 0x2c ) & 0xffffffff8000 | 0xffff000000004fff;*(ulong*)( this_00 + 0x34 ) = *(ulong*)( this_00 + 0x34 ) | 0x7ff007fffffff;*(ulong*)( this_00 + 0x18 ) = *(ulong*)( this_00 + 0x18 ) & 0x8000000400000000;*(undefined1(*) [16])( this_00 + 0x60 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this_00 + 0x70 ) = (undefined1[16])0x0;local_68[0] = glslang::GetThreadPoolAllocator();local_48 = local_58;local_58[0] = 0;local_50 = 0;local_38 = 0;local_40 = local_48;TType::deepCopy(this_00, param_2, (TMap*)local_68);for (lVar3 = local_50; lVar3 != 0; lVar3 = *(long*)( lVar3 + 0x10 )) {
   std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>,std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector < glslang::TTypeLoc>*>>,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>> > ::_M_erase(*(_Rb_tree_node**)( lVar3 + 0x18 ));
}
*(TType**)( this + 0x48 ) = this_00;if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* glslang::TReflectionTraverser::visitBinary(glslang::TVisit, glslang::TIntermBinary*) */undefined8 glslang::TReflectionTraverser::visitBinary(TReflectionTraverser *this, undefined8 param_2, TIntermBinary *param_3) {
   if (2 < *(int*)( param_3 + 0xb8 ) - 0xb6U) {
      return 1;
   }

   addDereferencedUniform(this, param_3);
   return 1;
}
/* glslang::TReflectionTraverser::visitSymbol(glslang::TIntermSymbol*) */void glslang::TReflectionTraverser::visitSymbol(TReflectionTraverser *this, TIntermSymbol *param_1) {
   TIntermSymbol TVar1;
   byte bVar2;
   uint uVar3;
   TIntermSymbol *pTVar4;
   long lVar5;
   int iVar6;
   if (*(code**)( *(long*)param_1 + 0x108 ) == TIntermTyped::getQualifier) {
      pTVar4 = param_1 + 0x30;
   }
 else {
      pTVar4 = (TIntermSymbol*)( **(code**)( *(long*)param_1 + 0x108 ) )(param_1);
   }

   if (( (byte)pTVar4[8] & 0x7f ) == 5) {
      if (*(code**)( *(long*)param_1 + 0x100 ) == TIntermTyped::getBasicType) {
         uVar3 = (uint)(byte)param_1[0x28];
      }
 else {
         uVar3 = ( **(code**)( *(long*)param_1 + 0x100 ) )(param_1);
      }

      if (uVar3 != 0x10) {
         LAB_001021d3:addUniform(this, param_1);
         goto LAB_00102147;
      }

      lVar5 = *(long*)( this + 0x40 );
      uVar3 = *(uint*)( lVar5 + 8 );
      if (( uVar3 & 0x100 ) != 0) goto LAB_001021d3;
   }
 else {
      LAB_00102147:lVar5 = *(long*)( this + 0x40 );
      uVar3 = *(uint*)( lVar5 + 8 );
   }

   if (( uVar3 & 0x80 ) == 0) goto LAB_00102180;
   if (*(code**)( *(long*)param_1 + 0x108 ) == TIntermTyped::getQualifier) {
      TVar1 = param_1[0x38];
   }
 else {
      lVar5 = ( **(code**)( *(long*)param_1 + 0x108 ) )(param_1);
      TVar1 = *(TIntermSymbol*)( lVar5 + 8 );
   }

   if (( (byte)TVar1 & 0x7f ) == 6) {
      if (*(code**)( *(long*)param_1 + 0x100 ) == TIntermTyped::getBasicType) {
         uVar3 = (uint)(byte)param_1[0x28];
      }
 else {
         uVar3 = ( **(code**)( *(long*)param_1 + 0x100 ) )(param_1);
      }

      if (uVar3 == 0x10) {
         if (*(code**)( *(long*)param_1 + 0x108 ) == TIntermTyped::getQualifier) {
            bVar2 = (byte)param_1[0x40] & 0xf;
            if (bVar2 != 2) {
               LAB_001022dd:if (bVar2 != 1) goto LAB_0010217c;
            }

         }
 else {
            lVar5 = ( **(code**)( *(long*)param_1 + 0x108 ) )(param_1);
            if (( *(byte*)( lVar5 + 0x10 ) & 0xf ) != 2) {
               if (*(code**)( *(long*)param_1 + 0x108 ) == TIntermTyped::getQualifier) {
                  bVar2 = (byte)param_1[0x40] & 0xf;
               }
 else {
                  lVar5 = ( **(code**)( *(long*)param_1 + 0x108 ) )(param_1);
                  bVar2 = *(byte*)( lVar5 + 0x10 ) & 0xf;
               }

               goto LAB_001022dd;
            }

         }

         addUniform(this, param_1);
      }

   }

   LAB_0010217c:lVar5 = *(long*)( this + 0x40 );
   LAB_00102180:iVar6 = **(int**)( this + 0x38 );
   if (*(int*)( lVar5 + 0xc ) == iVar6) {
      if (*(code**)( *(long*)param_1 + 0x108 ) == TIntermTyped::getQualifier) {
         pTVar4 = param_1 + 0x30;
      }
 else {
         pTVar4 = (TIntermSymbol*)( **(code**)( *(long*)param_1 + 0x108 ) )(param_1);
      }

      if (( ( byte )((byte)pTVar4[8] & 0x7f) < 0x1c ) && ( ( 0xe300008UL >> ( ( ulong )((byte)pTVar4[8] & 0x7f) & 0x3f ) & 1 ) != 0 )) {
         addPipeIOVariable(this, param_1);
         return;
      }

      lVar5 = *(long*)( this + 0x40 );
      iVar6 = **(int**)( this + 0x38 );
   }

   if (*(int*)( lVar5 + 0x10 ) == iVar6) {
      if (*(code**)( *(long*)param_1 + 0x108 ) == TIntermTyped::getQualifier) {
         pTVar4 = param_1 + 0x30;
      }
 else {
         pTVar4 = (TIntermSymbol*)( **(code**)( *(long*)param_1 + 0x108 ) )(param_1);
      }

      if (( ( byte )((byte)pTVar4[8] & 0x7f) < 0x1f ) && ( ( 0x71c00010UL >> ( ( ulong )((byte)pTVar4[8] & 0x7f) & 0x3f ) & 1 ) != 0 )) {
         addPipeIOVariable(this, param_1);
         return;
      }

   }

   return;
}
/* glslang::TSmallArrayVector::~TSmallArrayVector() */void glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this) {
   return;
}
/* glslang::TType::~TType() */void glslang::TType::~TType(TType *this) {
   return;
}
/* glslang::TType::hideMember() */void glslang::TType::hideMember(TType *this) {
   *(ushort*)( this + 8 ) = *(ushort*)( this + 8 ) & 0xf000 | 0x100;
   return;
}
/* glslang::TType::hiddenMember() const */bool glslang::TType::hiddenMember(TType *this) {
   return this[8] == (TType)0x0;
}
/* glslang::TType::getTypeName[abi:cxx11]() const */undefined8 glslang::TType::getTypeName_abi_cxx11_(TType *this) {
   return *(undefined8*)( this + 0x78 );
}
/* glslang::TType::getFieldName[abi:cxx11]() const */undefined8 glslang::TType::getFieldName_abi_cxx11_(TType *this) {
   return *(undefined8*)( this + 0x70 );
}
/* glslang::TType::getBasicType() const */TType glslang::TType::getBasicType(TType *this) {
   return this[8];
}
/* glslang::TType::getSampler() const */TType * __thiscall glslang::TType::getSampler(TType *this){
   return this + 0x80;
}
/* glslang::TType::getSampler() */TType * __thiscall glslang::TType::getSampler(TType *this){
   return this + 0x80;
}
/* glslang::TType::getQualifier() */TType * __thiscall glslang::TType::getQualifier(TType *this){
   return this + 0x10;
}
/* glslang::TType::getQualifier() const */TType * __thiscall glslang::TType::getQualifier(TType *this){
   return this + 0x10;
}
/* glslang::TType::getVectorSize() const */byte glslang::TType::getVectorSize(TType *this) {
   return (byte)this[9] & 0xf;
}
/* glslang::TType::getMatrixCols() const */byte glslang::TType::getMatrixCols(TType *this) {
   return (byte)this[9] >> 4;
}
/* glslang::TType::getMatrixRows() const */byte glslang::TType::getMatrixRows(TType *this) {
   return (byte)this[10] & 0xf;
}
/* glslang::TType::getOuterArraySize() const */undefined4 glslang::TType::getOuterArraySize(TType *this) {
   return **(undefined4**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
}
/* glslang::TType::getOuterArrayNode() const */undefined8 glslang::TType::getOuterArrayNode(TType *this) {
   return *(undefined8*)( *(long*)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 ) + 8 );
}
/* glslang::TType::getImplicitArraySize() const */int glslang::TType::getImplicitArraySize(TType *this) {
   int iVar1;
   iVar1 = *(int*)( *(long*)( this + 0x60 ) + 0x10 );
   if (iVar1 < 1) {
      iVar1 = 1;
   }

   return iVar1;
}
/* glslang::TType::getArraySizes() const */undefined8 glslang::TType::getArraySizes(TType *this) {
   return *(undefined8*)( this + 0x60 );
}
/* glslang::TType::getArraySizes() */undefined8 glslang::TType::getArraySizes(TType *this) {
   return *(undefined8*)( this + 0x60 );
}
/* glslang::TType::getReferentType() const */undefined8 glslang::TType::getReferentType(TType *this) {
   return *(undefined8*)( this + 0x68 );
}
/* glslang::TType::getTypeParameters() const */undefined8 glslang::TType::getTypeParameters(TType *this) {
   return *(undefined8*)( this + 0x88 );
}
/* glslang::TType::getTypeParameters() */undefined8 glslang::TType::getTypeParameters(TType *this) {
   return *(undefined8*)( this + 0x88 );
}
/* glslang::TType::isVector() const */byte glslang::TType::isVector(TType *this) {
   if (1 < ( (byte)this[9] & 0xf )) {
      return 1;
   }

   return (byte)this[10] >> 4 & 1;
}
/* glslang::TType::isMatrix() const */bool glslang::TType::isMatrix(TType *this) {
   return 0xf < (byte)this[9];
}
/* glslang::TType::isArray() const */bool glslang::TType::isArray(TType *this) {
   return *(long*)( this + 0x60 ) != 0;
}
/* glslang::TType::isArrayVariablyIndexed() const */undefined1 glslang::TType::isArrayVariablyIndexed(TType *this) {
   return *(undefined1*)( *(long*)( this + 0x60 ) + 0x15 );
}
/* glslang::TType::setArrayVariablyIndexed() */void glslang::TType::setArrayVariablyIndexed(TType *this) {
   *(undefined1*)( *(long*)( this + 0x60 ) + 0x15 ) = 1;
   return;
}
/* glslang::TType::updateImplicitArraySize(int) */void glslang::TType::updateImplicitArraySize(TType *this, int param_1) {
   int iVar1;
   iVar1 = *(int*)( *(long*)( this + 0x60 ) + 0x10 );
   if (iVar1 < param_1) {
      iVar1 = param_1;
   }

   *(int*)( *(long*)( this + 0x60 ) + 0x10 ) = iVar1;
   return;
}
/* glslang::TType::setImplicitlySized(bool) */void glslang::TType::setImplicitlySized(TType *this, bool param_1) {
   *(bool*)( *(long*)( this + 0x60 ) + 0x14 ) = param_1;
   return;
}
/* glslang::TType::isStruct() const */undefined4 glslang::TType::isStruct(TType *this) {
   return CONCAT31(( int3 )((byte)this[8] - 0xf >> 8), ( byte )((byte)this[8] - 0xf) < 2);
}
/* glslang::TType::isFloatingDomain() const */undefined4 glslang::TType::isFloatingDomain(TType *this) {
   return CONCAT31(( int3 )((byte)this[8] - 1 >> 8), ( byte )((byte)this[8] - 1) < 3);
}
/* glslang::TType::isIntegerDomain() const */bool glslang::TType::isIntegerDomain(TType *this) {
   TType TVar1;
   TVar1 = this[8];
   if ((byte)TVar1 < 0xc) {
      return 3 < (byte)TVar1;
   }

   return TVar1 == (TType)0xd;
}
/* glslang::TType::isOpaque() const */undefined8 glslang::TType::isOpaque(TType *this) {
   undefined8 uVar1;
   uVar1 = 0;
   if ((byte)this[8] < 0x15) {
      uVar1 = CONCAT71(0x1a60, ( 0x1a6000UL >> ( (ulong)(byte)this[8] & 0x3f ) & 1 ) != 0);
   }

   return uVar1;
}
/* glslang::TType::isParameterized() const */bool glslang::TType::isParameterized(TType *this) {
   return *(long*)( this + 0x88 ) != 0;
}
/* glslang::TIntermTyped::getType() const */TIntermTyped * __thiscall glslang::TIntermTyped::getType(TIntermTyped *this){
   return this + 0x20;
}
/* glslang::TIntermTyped::getBasicType() const */TIntermTyped glslang::TIntermTyped::getBasicType(TIntermTyped *this) {
   return this[0x28];
}
/* glslang::TIntermTyped::getQualifier() */TIntermTyped * __thiscall glslang::TIntermTyped::getQualifier(TIntermTyped *this){
   return this + 0x30;
}
/* glslang::TIntermTyped::getQualifier() const */TIntermTyped * __thiscall glslang::TIntermTyped::getQualifier(TIntermTyped *this){
   return this + 0x30;
}
/* glslang::TIntermTyped::isArray() const */bool glslang::TIntermTyped::isArray(TIntermTyped *this) {
   return *(long*)( this + 0x80 ) != 0;
}
/* glslang::TIntermSymbol::getName[abi:cxx11]() const */TIntermSymbol * __thiscall glslang::TIntermSymbol::getName_abi_cxx11_(TIntermSymbol *this){
   return this + 200;
}
/* glslang::TIntermBinary::getLeft() const */undefined8 glslang::TIntermBinary::getLeft(TIntermBinary *this) {
   return *(undefined8*)( this + 0xc0 );
}
/* glslang::TIntermBinary::getRight() const */undefined8 glslang::TIntermBinary::getRight(TIntermBinary *this) {
   return *(undefined8*)( this + 200 );
}
/* glslang::TIntermAggregate::getSequence() */TIntermAggregate * __thiscall glslang::TIntermAggregate::getSequence(TIntermAggregate *this){
   return this + 0xc0;
}
/* glslang::TIntermTraverser::~TIntermTraverser() */void glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this) {
   return;
}
/* glslang::TIntermTraverser::visitSymbol(glslang::TIntermSymbol*) */void glslang::TIntermTraverser::visitSymbol(TIntermSymbol *param_1) {
   return;
}
/* glslang::TIntermTraverser::visitConstantUnion(glslang::TIntermConstantUnion*) */void glslang::TIntermTraverser::visitConstantUnion(TIntermConstantUnion *param_1) {
   return;
}
/* glslang::TIntermTraverser::visitBinary(glslang::TVisit, glslang::TIntermBinary*) */undefined8 glslang::TIntermTraverser::visitBinary(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitUnary(glslang::TVisit, glslang::TIntermUnary*) */undefined8 glslang::TIntermTraverser::visitUnary(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitSelection(glslang::TVisit, glslang::TIntermSelection*) */undefined8 glslang::TIntermTraverser::visitSelection(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitAggregate(glslang::TVisit, glslang::TIntermAggregate*) */undefined8 glslang::TIntermTraverser::visitAggregate(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitLoop(glslang::TVisit, glslang::TIntermLoop*) */undefined8 glslang::TIntermTraverser::visitLoop(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitBranch(glslang::TVisit, glslang::TIntermBranch*) */undefined8 glslang::TIntermTraverser::visitBranch(void) {
   return 1;
}
/* glslang::TIntermTraverser::visitSwitch(glslang::TVisit, glslang::TIntermSwitch*) */undefined8 glslang::TIntermTraverser::visitSwitch(void) {
   return 1;
}
/* std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,
   std::pair<glslang::TVector<glslang::TTypeLoc>* const, glslang::TVector<glslang::TTypeLoc>*>,
   std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>* const,
   glslang::TVector<glslang::TTypeLoc>*> >, std::less<glslang::TVector<glslang::TTypeLoc>*>,
   glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>* const,
   glslang::TVector<glslang::TTypeLoc>*> >
   >::_M_get_insert_unique_pos(glslang::TVector<glslang::TTypeLoc>* const&) [clone .isra.0] */undefined1[16];std::_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>,std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>>::_M_get_insert_unique_pos (_Rb_tree<glslang::TVector<glslang::TTypeLoc>*,std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>,std::_Select1st<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>>
           *this,TVector **param_1) {
   undefined1 auVar1[16];
   _Rb_tree_node_base *p_Var2;
   _Rb_tree_node_base *p_Var3;
   _Rb_tree_node_base *p_Var4;
   TVector **ppTVar5;
   undefined1 auVar6[16];
   p_Var2 = *(_Rb_tree_node_base**)( this + 0x18 );
   if (*(_Rb_tree_node_base**)( this + 0x18 ) == (_Rb_tree_node_base*)0x0) {
      p_Var2 = (_Rb_tree_node_base*)( this + 0x10 );
   }
 else {
      do {
         p_Var4 = p_Var2;
         ppTVar5 = *(TVector***)( p_Var4 + 0x20 );
         p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x18 );
         if (param_1 < ppTVar5) {
            p_Var2 = *(_Rb_tree_node_base**)( p_Var4 + 0x10 );
         }

      }
 while ( p_Var2 != (_Rb_tree_node_base*)0x0 );
      p_Var2 = p_Var4;
      if (param_1 >= ppTVar5) goto LAB_001027ca;
   }

   if (*(_Rb_tree_node_base**)( this + 0x20 ) == p_Var2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = p_Var2;
      return auVar1 << 0x40;
   }

   p_Var4 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var2);
   ppTVar5 = *(TVector***)( p_Var4 + 0x20 );
   LAB_001027ca:p_Var3 = (_Rb_tree_node_base*)0x0;
   if (ppTVar5 < param_1) {
      p_Var4 = p_Var3;
      p_Var3 = p_Var2;
   }

   auVar6._8_8_ = p_Var3;
   auVar6._0_8_ = p_Var4;
   return auVar6;
}
/* std::vector<glslang::TSpirvTypeParameter, glslang::pool_allocator<glslang::TSpirvTypeParameter>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<glslang::TSpirvTypeParameter,
   glslang::pool_allocator<glslang::TSpirvTypeParameter> > const&) [clone .isra.0] */void std::vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>::operator =(vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>> *this, vector *param_1) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   size_t __n;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *__dest;
   ulong __n_00;
   long lVar6;
   undefined8 *puVar7;
   if (param_1 == (vector*)this) {
      return;
   }

   puVar7 = *(undefined8**)( param_1 + 0x10 );
   puVar5 = *(undefined8**)( param_1 + 8 );
   __dest = *(undefined8**)( this + 8 );
   __n_00 = (long)puVar7 - (long)puVar5;
   if (( ulong )(*(long*)( this + 0x18 ) - (long)__dest) < __n_00) {
      lVar2 = glslang::TPoolAllocator::allocate(*(ulong*)this);
      uVar4 = 0;
      if (puVar7 != puVar5) {
         do {
            uVar1 = ( (undefined8*)( (long)puVar5 + uVar4 ) )[1];
            *(undefined8*)( lVar2 + uVar4 ) = *(undefined8*)( (long)puVar5 + uVar4 );
            ( (undefined8*)( lVar2 + uVar4 ) )[1] = uVar1;
            uVar4 = uVar4 + 0x10;
         }
 while ( uVar4 != __n_00 );
      }

      *(long*)( this + 8 ) = lVar2;
      *(ulong*)( this + 0x18 ) = __n_00 + lVar2;
      *(ulong*)( this + 0x10 ) = __n_00 + lVar2;
      return;
   }

   lVar2 = *(long*)( this + 0x10 );
   __n = lVar2 - (long)__dest;
   if (__n < __n_00) {
      if ((long)__n < 0x11) {
         if (__n == 0x10) {
            uVar1 = puVar5[1];
            *__dest = *puVar5;
            __dest[1] = uVar1;
         }

      }
 else {
         memmove(__dest, puVar5, __n);
         lVar2 = *(long*)( this + 0x10 );
         __dest = *(undefined8**)( this + 8 );
         puVar7 = *(undefined8**)( param_1 + 0x10 );
         puVar5 = *(undefined8**)( param_1 + 8 );
         __n = lVar2 - (long)__dest;
      }

      puVar5 = (undefined8*)( (long)puVar5 + __n );
      lVar6 = __n_00 + (long)__dest;
      if (puVar5 != puVar7) {
         lVar3 = 0;
         do {
            uVar1 = ( (undefined8*)( (long)puVar5 + lVar3 ) )[1];
            *(undefined8*)( lVar2 + lVar3 ) = *(undefined8*)( (long)puVar5 + lVar3 );
            ( (undefined8*)( lVar2 + lVar3 ) )[1] = uVar1;
            lVar3 = lVar3 + 0x10;
         }
 while ( lVar3 != (long)puVar7 - (long)puVar5 );
         *(long*)( this + 0x10 ) = lVar6;
         return;
      }

   }
 else if ((long)__n_00 < 0x11) {
      if (__n_00 == 0x10) {
         uVar1 = puVar5[1];
         *__dest = *puVar5;
         __dest[1] = uVar1;
      }

      lVar6 = __n_00 + (long)__dest;
   }
 else {
      memmove(__dest, puVar5, __n_00);
      lVar6 = __n_00 + *(long*)( this + 8 );
   }

   *(long*)( this + 0x10 ) = lVar6;
   return;
}
/* glslang::TType::isBuiltIn() const */bool glslang::TType::isBuiltIn(TType *this) {
   long lVar1;
   if (*(code**)( *(long*)this + 0x58 ) == getQualifier) {
      return 0x7f < *(ushort*)( this + 0x18 );
   }

   lVar1 = ( **(code**)( *(long*)this + 0x58 ) )();
   return 0x7f < *(ushort*)( lVar1 + 8 );
}
/* glslang::TType::isAttachmentEXT() const */bool glslang::TType::isAttachmentEXT(TType *this) {
   long lVar1;
   if (this[8] != (TType)0xe) {
      return false;
   }

   if (*(code**)( *(long*)this + 0x40 ) == getSampler) {
      return this[0x81] == (TType)0x8;
   }

   lVar1 = ( **(code**)( *(long*)this + 0x40 ) )();
   return *(char*)( lVar1 + 1 ) == '\b';
}
/* glslang::TType::isImage() const */undefined4 glslang::TType::isImage(TType *this) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   if (this[8] == (TType)0xe) {
      if (*(code**)( *(long*)this + 0x40 ) != getSampler) {
         lVar3 = ( **(code**)( *(long*)this + 0x40 ) )();
         uVar2 = 0;
         if (( *(byte*)( lVar3 + 2 ) & 8 ) != 0) {
            iVar1 = *(byte*)( lVar3 + 1 ) - 7;
            uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), 1 < (byte)iVar1);
         }

         return uVar2;
      }

      if (( (byte)this[0x82] & 8 ) != 0) {
         return CONCAT31(( int3 )((byte)this[0x81] - 7 >> 8), 1 < ( byte )((byte)this[0x81] - 7));
      }

   }

   return 0;
}
/* glslang::TType::isSubpass() const */bool glslang::TType::isSubpass(TType *this) {
   long lVar1;
   if (this[8] != (TType)0xe) {
      return false;
   }

   if (*(code**)( *(long*)this + 0x40 ) == getSampler) {
      return this[0x81] == (TType)0x7;
   }

   lVar1 = ( **(code**)( *(long*)this + 0x40 ) )();
   return *(char*)( lVar1 + 1 ) == '\a';
}
/* glslang::TType::isTexture() const */byte glslang::TType::isTexture(TType *this) {
   byte bVar1;
   long lVar2;
   if (this[8] == (TType)0xe) {
      if (*(code**)( *(long*)this + 0x40 ) != getSampler) {
         lVar2 = ( **(code**)( *(long*)this + 0x40 ) )();
         if (( *(byte*)( lVar2 + 2 ) & 0x20 ) == 0) {
            bVar1 = *(byte*)( lVar2 + 2 ) >> 3 & 1 ^ 1;
         }
 else {
            bVar1 = 0;
         }

         return bVar1;
      }

      if (( (byte)this[0x82] & 0x20 ) == 0) {
         return (byte)this[0x82] >> 3 & 1 ^ 1;
      }

   }

   return 0;
}
/* glslang::TReflectionTraverser::getArrayStride(glslang::TType const&, glslang::TType const&)
   [clone .isra.0] */undefined4 glslang::TReflectionTraverser::getArrayStride(TType *param_1, TType *param_2) {
   undefined4 uVar1;
   uint uVar2;
   code *pcVar3;
   TType *pTVar4;
   long in_FS_OFFSET;
   bool bVar5;
   undefined1 local_28[4];
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)param_2 + 0x38 ) == TType::getBasicType) {
      uVar2 = (uint)(byte)param_2[8];
   }
 else {
      uVar2 = ( **(code**)( *(long*)param_2 + 0x38 ) )(param_2);
   }

   uVar1 = 0;
   if (uVar2 == 0x10) goto LAB_00102bf0;
   if (*(code**)( *(long*)param_2 + 0x58 ) == TType::getQualifier) {
      pTVar4 = param_2 + 0x10;
   }
 else {
      pTVar4 = (TType*)( **(code**)( *(long*)param_2 + 0x58 ) )(param_2);
   }

   pcVar3 = *(code**)( *(long*)param_1 + 0x58 );
   if (( (byte)pTVar4[0xf] >> 4 & 7 ) == 0) {
      if (pcVar3 == TType::getQualifier) {
         pTVar4 = param_1 + 0x10;
      }
 else {
         pTVar4 = (TType*)( *pcVar3 )(param_1);
         pcVar3 = *(code**)( *(long*)param_1 + 0x58 );
      }

      bVar5 = ( (byte)pTVar4[0xf] & 0x70 ) == 0x10;
      if (pcVar3 == TType::getQualifier) goto LAB_00102bcf;
      LAB_00102c1f:pTVar4 = (TType*)( *pcVar3 )(param_1);
   }
 else {
      bVar5 = ( (byte)pTVar4[0xf] >> 4 & 7 ) == 1;
      if (pcVar3 != TType::getQualifier) goto LAB_00102c1f;
      LAB_00102bcf:pTVar4 = param_1 + 0x10;
   }

   glslang::TIntermediate::getMemberAlignment(param_2, local_28, &local_24, (byte)pTVar4[0x10] & 0xf, bVar5);
   uVar1 = local_24;
   LAB_00102bf0:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TType::isSizedArray() const */undefined4 glslang::TType::isSizedArray(TType *this) {
   int iVar1;
   undefined4 uVar2;
   char cVar3;
   if (*(code**)( *(long*)this + 0xe8 ) == isArray) {
      if (*(long*)( this + 0x60 ) == 0) {
         return 0;
      }

      iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
      uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 != 0);
   }
 else {
      cVar3 = ( **(code**)( *(long*)this + 0xe8 ) )();
      if (cVar3 == '\0') {
         return 0;
      }

      iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
      uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 != 0);
   }

   return uVar2;
}
/* glslang::TType::isUnsizedArray() const */undefined4 glslang::TType::isUnsizedArray(TType *this) {
   int iVar1;
   undefined4 uVar2;
   char cVar3;
   if (*(code**)( *(long*)this + 0xe8 ) == isArray) {
      if (*(long*)( this + 0x60 ) == 0) {
         return 0;
      }

      iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
      uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 == 0);
   }
 else {
      cVar3 = ( **(code**)( *(long*)this + 0xe8 ) )();
      if (cVar3 == '\0') {
         return 0;
      }

      iVar1 = **(int**)( *(long*)( *(long*)( this + 0x60 ) + 8 ) + 8 );
      uVar2 = CONCAT31(( int3 )((uint)iVar1 >> 8), iVar1 == 0);
   }

   return uVar2;
}
/* glslang::TType::isImplicitlySizedArray() const */undefined1 glslang::TType::isImplicitlySizedArray(TType *this) {
   undefined1 uVar1;
   char cVar2;
   if (*(code**)( *(long*)this + 0xe8 ) == isArray) {
      if (*(long*)( this + 0x60 ) == 0) {
         return 0;
      }

      uVar1 = *(undefined1*)( *(long*)( this + 0x60 ) + 0x14 );
   }
 else {
      cVar2 = ( **(code**)( *(long*)this + 0xe8 ) )();
      if (cVar2 == '\0') {
         return 0;
      }

      uVar1 = *(undefined1*)( *(long*)( this + 0x60 ) + 0x14 );
   }

   return uVar1;
}
/* glslang::TType::isUnusableName() const */bool glslang::TType::isUnusableName(TType *this) {
   char cVar1;
   if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
      if (1 < ( byte )((char)this[8] - 0xfU)) {
         return false;
      }

   }
 else {
      cVar1 = ( **(code**)( *(long*)this + 0x128 ) )();
      if (cVar1 == '\0') {
         return false;
      }

   }

   return *(long*)( this + 0x68 ) == 0;
}
/* glslang::TType::isScalar() const */uint glslang::TType::isScalar(TType *this) {
   byte bVar1;
   char cVar2;
   uint uVar3;
   long lVar4;
   if (*(code**)( *(long*)this + 0xd8 ) == isVector) {
      if (1 < ( (byte)this[9] & 0xf )) {
         return 0;
      }

      bVar1 = (byte)this[10] >> 4 & 1;
   }
 else {
      bVar1 = ( **(code**)( *(long*)this + 0xd8 ) )();
   }

   if (bVar1 == 0) {
      lVar4 = *(long*)this;
      if (*(code**)( lVar4 + 0xe0 ) == isMatrix) {
         if (0xf < (byte)this[9]) {
            return 0;
         }

      }
 else {
         cVar2 = ( **(code**)( lVar4 + 0xe0 ) )(this);
         if (cVar2 != '\0') {
            return 0;
         }

         lVar4 = *(long*)this;
      }

      if (*(code**)( lVar4 + 0x128 ) == isStruct) {
         if (1 < ( byte )((char)this[8] - 0xfU)) {
            LAB_00103051:if (*(code**)( lVar4 + 0xe8 ) == isArray) {
               uVar3 = (uint)CONCAT71(0x1025, *(long*)( this + 0x60 ) != 0);
            }
 else {
               uVar3 = ( **(code**)( lVar4 + 0xe8 ) )(this);
            }

            return uVar3 ^ 1;
         }

      }
 else {
         cVar2 = ( **(code**)( lVar4 + 0x128 ) )(this);
         if (cVar2 == '\0') {
            lVar4 = *(long*)this;
            goto LAB_00103051;
         }

      }

   }

   return 0;
}
/* glslang::TType::isScalarOrVector() const */uint glslang::TType::isScalarOrVector(TType *this) {
   char cVar1;
   uint uVar2;
   long lVar3;
   lVar3 = *(long*)this;
   if (*(code**)( lVar3 + 0xe0 ) == isMatrix) {
      if (0xf < (byte)this[9]) {
         return 0;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar3 + 0xe0 ) )();
      if (cVar1 != '\0') {
         return 0;
      }

      lVar3 = *(long*)this;
   }

   if (*(code**)( lVar3 + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         return 0;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar3 + 0x128 ) )(this);
      if (cVar1 != '\0') {
         return 0;
      }

      lVar3 = *(long*)this;
   }

   if (*(code**)( lVar3 + 0xe8 ) == isArray) {
      uVar2 = (uint)CONCAT71(0x1025, *(long*)( this + 0x60 ) != 0);
   }
 else {
      uVar2 = ( **(code**)( lVar3 + 0xe8 ) )(this);
   }

   return uVar2 ^ 1;
}
/* glslang::TType::getCumulativeArraySize() const */int glslang::TType::getCumulativeArraySize(TType *this) {
   int *piVar1;
   long lVar2;
   int *piVar3;
   int iVar4;
   lVar2 = *(long*)( *(long*)( this + 0x60 ) + 8 );
   if (lVar2 != 0) {
      piVar3 = *(int**)( lVar2 + 8 );
      iVar4 = (int)( *(long*)( lVar2 + 0x10 ) - (long)piVar3 >> 4 );
      if (0 < iVar4) {
         piVar1 = piVar3 + ( ulong )(iVar4 - 1) * 4 + 4;
         iVar4 = 1;
         do {
            iVar4 = iVar4 * *piVar3;
            piVar3 = piVar3 + 4;
         }
 while ( piVar3 != piVar1 );
         return iVar4;
      }

   }

   return 1;
}
/* std::vector<glslang::TArraySize, glslang::pool_allocator<glslang::TArraySize>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<glslang::TArraySize,
   glslang::pool_allocator<glslang::TArraySize> > const&) [clone .isra.0] */void std::vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>>::operator =(vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>> *this, vector *param_1) {
   undefined8 uVar1;
   long lVar2;
   long lVar3;
   size_t __n;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *__dest;
   ulong __n_00;
   long lVar6;
   undefined8 *puVar7;
   if (param_1 == (vector*)this) {
      return;
   }

   puVar7 = *(undefined8**)( param_1 + 0x10 );
   puVar5 = *(undefined8**)( param_1 + 8 );
   __dest = *(undefined8**)( this + 8 );
   __n_00 = (long)puVar7 - (long)puVar5;
   if (( ulong )(*(long*)( this + 0x18 ) - (long)__dest) < __n_00) {
      lVar2 = glslang::TPoolAllocator::allocate(*(ulong*)this);
      uVar4 = 0;
      if (puVar7 != puVar5) {
         do {
            uVar1 = ( (undefined8*)( (long)puVar5 + uVar4 ) )[1];
            *(undefined8*)( lVar2 + uVar4 ) = *(undefined8*)( (long)puVar5 + uVar4 );
            ( (undefined8*)( lVar2 + uVar4 ) )[1] = uVar1;
            uVar4 = uVar4 + 0x10;
         }
 while ( uVar4 != __n_00 );
      }

      *(long*)( this + 8 ) = lVar2;
      *(ulong*)( this + 0x18 ) = __n_00 + lVar2;
      *(ulong*)( this + 0x10 ) = __n_00 + lVar2;
      return;
   }

   lVar2 = *(long*)( this + 0x10 );
   __n = lVar2 - (long)__dest;
   if (__n < __n_00) {
      if ((long)__n < 0x11) {
         if (__n == 0x10) {
            uVar1 = puVar5[1];
            *__dest = *puVar5;
            __dest[1] = uVar1;
         }

      }
 else {
         memmove(__dest, puVar5, __n);
         lVar2 = *(long*)( this + 0x10 );
         __dest = *(undefined8**)( this + 8 );
         puVar7 = *(undefined8**)( param_1 + 0x10 );
         puVar5 = *(undefined8**)( param_1 + 8 );
         __n = lVar2 - (long)__dest;
      }

      puVar5 = (undefined8*)( (long)puVar5 + __n );
      lVar6 = __n_00 + (long)__dest;
      if (puVar5 != puVar7) {
         lVar3 = 0;
         do {
            uVar1 = ( (undefined8*)( (long)puVar5 + lVar3 ) )[1];
            *(undefined8*)( lVar2 + lVar3 ) = *(undefined8*)( (long)puVar5 + lVar3 );
            ( (undefined8*)( lVar2 + lVar3 ) )[1] = uVar1;
            lVar3 = lVar3 + 0x10;
         }
 while ( lVar3 != (long)puVar7 - (long)puVar5 );
         *(long*)( this + 0x10 ) = lVar6;
         return;
      }

   }
 else if ((long)__n_00 < 0x11) {
      if (__n_00 == 0x10) {
         uVar1 = puVar5[1];
         *__dest = *puVar5;
         __dest[1] = uVar1;
      }

      lVar6 = __n_00 + (long)__dest;
   }
 else {
      memmove(__dest, puVar5, __n_00);
      lVar6 = __n_00 + *(long*)( this + 8 );
   }

   *(long*)( this + 0x10 ) = lVar6;
   return;
}
/* glslang::TType::isBindlessTexture() const */TType glslang::TType::isBindlessTexture(TType *this) {
   code *pcVar1;
   char cVar2;
   TType *pTVar3;
   pcVar1 = *(code**)( *(long*)this + 0x168 );
   if (pcVar1 == isTexture) {
      if (this[8] == (TType)0xe) {
         pcVar1 = *(code**)( *(long*)this + 0x40 );
         if (pcVar1 == getSampler) {
            pTVar3 = this + 0x80;
         }
 else {
            pTVar3 = (TType*)( *pcVar1 )();
         }

         if (( ( (byte)pTVar3[2] & 0x20 ) == 0 ) && ( ( (byte)pTVar3[2] & 8 ) == 0 )) {
            return this[0x58];
         }

      }

   }
 else {
      cVar2 = ( *pcVar1 )();
      if (cVar2 != '\0') {
         return this[0x58];
      }

   }

   return (TType)0x0;
}
/* glslang::TType::isBindlessImage() const */TType glslang::TType::isBindlessImage(TType *this) {
   code *pcVar1;
   char cVar2;
   TType *pTVar3;
   pcVar1 = *(code**)( *(long*)this + 0x158 );
   if (pcVar1 == isImage) {
      if (this[8] == (TType)0xe) {
         pcVar1 = *(code**)( *(long*)this + 0x40 );
         if (pcVar1 == getSampler) {
            pTVar3 = this + 0x80;
         }
 else {
            pTVar3 = (TType*)( *pcVar1 )();
         }

         if (( ( (byte)pTVar3[2] & 8 ) != 0 ) && ( 1 < ( byte )((char)pTVar3[1] - 7U) )) {
            return this[0x59];
         }

      }

   }
 else {
      cVar2 = ( *pcVar1 )();
      if (cVar2 != '\0') {
         return this[0x59];
      }

   }

   return (TType)0x0;
}
/* std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermTyped const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermTyped const*> > > >::_M_erase(std::_Rb_tree_node<std::pair<int
   const, glslang::TVector<glslang::TIntermTyped const*> > >*) [clone .isra.0] */void std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_M_erase(_Rb_tree_node *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   if (param_1 != (_Rb_tree_node*)0x0) {
      do {
         for (lVar1 = *(long*)( param_1 + 0x18 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 0x10 )) {
            for (lVar2 = *(long*)( lVar1 + 0x18 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 0x10 )) {
               for (lVar3 = *(long*)( lVar2 + 0x18 ); lVar3 != 0; lVar3 = *(long*)( lVar3 + 0x10 )) {
                  for (lVar4 = *(long*)( lVar3 + 0x18 ); lVar4 != 0; lVar4 = *(long*)( lVar4 + 0x10 )) {
                     for (lVar5 = *(long*)( lVar4 + 0x18 ); lVar5 != 0; lVar5 = *(long*)( lVar5 + 0x10 )) {
                        for (lVar6 = *(long*)( lVar5 + 0x18 ); lVar6 != 0; lVar6 = *(long*)( lVar6 + 0x10 )) {
                           for (lVar7 = *(long*)( lVar6 + 0x18 ); lVar7 != 0; lVar7 = *(long*)( lVar7 + 0x10 )) {
                              for (lVar8 = *(long*)( lVar7 + 0x18 ); lVar8 != 0; lVar8 = *(long*)( lVar8 + 0x10 )) {
                                 _M_erase(*(_Rb_tree_node**)( lVar8 + 0x18 ));
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

         param_1 = *(_Rb_tree_node**)( param_1 + 0x10 );
      }
 while ( param_1 != (_Rb_tree_node*)0x0 );
      return;
   }

   return;
}
/* std::_Rb_tree<int, std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> >,
   std::_Select1st<std::pair<int const, glslang::TVector<glslang::TIntermConstantUnion const*> > >,
   std::less<int>, glslang::pool_allocator<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const,
   glslang::TVector<glslang::TIntermConstantUnion const*> > >*) [clone .isra.0] */void std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::_M_erase(_Rb_tree_node *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   if (param_1 != (_Rb_tree_node*)0x0) {
      do {
         for (lVar1 = *(long*)( param_1 + 0x18 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 0x10 )) {
            for (lVar2 = *(long*)( lVar1 + 0x18 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 0x10 )) {
               for (lVar3 = *(long*)( lVar2 + 0x18 ); lVar3 != 0; lVar3 = *(long*)( lVar3 + 0x10 )) {
                  for (lVar4 = *(long*)( lVar3 + 0x18 ); lVar4 != 0; lVar4 = *(long*)( lVar4 + 0x10 )) {
                     for (lVar5 = *(long*)( lVar4 + 0x18 ); lVar5 != 0; lVar5 = *(long*)( lVar5 + 0x10 )) {
                        for (lVar6 = *(long*)( lVar5 + 0x18 ); lVar6 != 0; lVar6 = *(long*)( lVar6 + 0x10 )) {
                           for (lVar7 = *(long*)( lVar6 + 0x18 ); lVar7 != 0; lVar7 = *(long*)( lVar7 + 0x10 )) {
                              for (lVar8 = *(long*)( lVar7 + 0x18 ); lVar8 != 0; lVar8 = *(long*)( lVar8 + 0x10 )) {
                                 _M_erase(*(_Rb_tree_node**)( lVar8 + 0x18 ));
                              }

                           }

                        }

                     }

                  }

               }

            }

         }

         param_1 = *(_Rb_tree_node**)( param_1 + 0x10 );
      }
 while ( param_1 != (_Rb_tree_node*)0x0 );
      return;
   }

   return;
}
/* glslang::TType::isScalarOrVec1() const */byte glslang::TType::isScalarOrVec1(TType *this) {
   TType TVar1;
   code *pcVar2;
   byte bVar3;
   char cVar4;
   long lVar5;
   pcVar2 = *(code**)( *(long*)this + 0xc0 );
   if (pcVar2 == isScalar) {
      pcVar2 = *(code**)( *(long*)this + 0xd8 );
      if (pcVar2 == isVector) {
         TVar1 = this[10];
         bVar3 = (byte)TVar1 >> 4 & 1;
         if (1 < ( (byte)this[9] & 0xf )) goto LAB_00103683;
      }
 else {
         bVar3 = ( *pcVar2 )();
      }

      if (bVar3 == 0) {
         lVar5 = *(long*)this;
         if (*(code**)( lVar5 + 0xe0 ) == isMatrix) {
            if ((byte)this[9] < 0x10) {
               LAB_001036ac:if (*(code**)( lVar5 + 0x128 ) == isStruct) {
                  if (1 < ( byte )((char)this[8] - 0xfU)) {
                     LAB_001036cb:if (*(code**)( lVar5 + 0xe8 ) == isArray) {
                        if (*(long*)( this + 0x60 ) == 0) {
                           return 1;
                        }

                     }
 else {
                        cVar4 = ( **(code**)( lVar5 + 0xe8 ) )(this);
                        if (cVar4 == '\0') {
                           return 1;
                        }

                     }

                  }

               }
 else {
                  cVar4 = ( **(code**)( lVar5 + 0x128 ) )(this);
                  if (cVar4 == '\0') {
                     lVar5 = *(long*)this;
                     goto LAB_001036cb;
                  }

               }

            }

         }
 else {
            cVar4 = ( **(code**)( lVar5 + 0xe0 ) )(this);
            if (cVar4 == '\0') {
               lVar5 = *(long*)this;
               goto LAB_001036ac;
            }

         }

      }

   }
 else {
      cVar4 = ( *pcVar2 )();
      if (cVar4 != '\0') {
         return 1;
      }

   }

   TVar1 = this[10];
   LAB_00103683:return (byte)TVar1 >> 4 & 1;
}
/* glslang::TReflectionTraverser::~TReflectionTraverser() */void glslang::TReflectionTraverser::~TReflectionTraverser(TReflectionTraverser *this) {
   void *pvVar1;
   void *pvVar2;
   *(undefined***)this = &PTR__TReflectionTraverser_00110380;
   pvVar2 = *(void**)( this + 0x58 );
   while (pvVar2 != (void*)0x0) {
      std::_Rb_tree<TIntermNode_const*,TIntermNode_const*,std::_Identity<TIntermNode_const*>,std::less<TIntermNode_const*>,std::allocator<TIntermNode_const*>>::_M_erase(*(_Rb_tree_node**)( (long)pvVar2 + 0x18 ));
      pvVar1 = *(void**)( (long)pvVar2 + 0x10 );
      operator_delete(pvVar2, 0x28);
      pvVar2 = pvVar1;
   }
;
   return;
}
/* glslang::TType::setFieldName(std::__cxx11::basic_string<char, std::char_traits<char>,
   glslang::std::allocator<char> > const&) */void glslang::TType::setFieldName(TType *this, basic_string *param_1) {
   char *__s;
   ulong uVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   size_t sVar4;
   __s = *(char**)( param_1 + 8 );
   uVar1 = glslang::GetThreadPoolAllocator();
   puVar2 = (undefined8*)glslang::TPoolAllocator::allocate(uVar1);
   uVar3 = glslang::GetThreadPoolAllocator();
   *puVar2 = uVar3;
   puVar2[1] = puVar2 + 3;
   if (__s != (char*)0x0) {
      sVar4 = strlen(__s);
      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar2, __s, __s + sVar4);
      *(undefined8**)( this + 0x70 ) = puVar2;
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_logic_error("basic_string: construction from null is not valid");
}
/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsNonOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2) {
   byte bVar1;
   long *plVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   lVar5 = (long)param_2 - (long)param_1;
   if (0 < lVar5 >> 7) {
      plVar6 = param_1 + ( lVar5 >> 7 ) * 0x10;
      do {
         plVar2 = (long*)*param_1;
         bVar1 = *(byte*)( plVar2 + 1 );
         if (bVar1 < 0xd) {
            return param_1;
         }

         if (bVar1 == 0x12) {
            return param_1;
         }

         if (*(code**)( *plVar2 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(bVar1 - 0xf) < 2) {
               LAB_00103aed:lVar5 = *(long*)( plVar2[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar2[0xd] + 8 ),lVar5 ));
               if (lVar5 != lVar4) {
                  return param_1;
               }

            }

         }
 else {
            cVar3 = ( **(code**)( *plVar2 + 0x128 ) )(plVar2);
            if (cVar3 != '\0') goto LAB_00103aed;
         }

         plVar2 = (long*)param_1[4];
         bVar1 = *(byte*)( plVar2 + 1 );
         if (( bVar1 < 0xd ) || ( bVar1 == 0x12 )) goto LAB_001039ef;
         if (*(code**)( *plVar2 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(bVar1 - 0xf) < 2) {
               LAB_00103b2d:lVar5 = *(long*)( plVar2[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar2[0xd] + 8 ),lVar5 ));
               if (lVar5 != lVar4) {
                  LAB_001039ef:return param_1 + 4;
               }

            }

         }
 else {
            cVar3 = ( **(code**)( *plVar2 + 0x128 ) )(plVar2);
            if (cVar3 != '\0') goto LAB_00103b2d;
         }

         plVar2 = (long*)param_1[8];
         bVar1 = *(byte*)( plVar2 + 1 );
         if (( bVar1 < 0xd ) || ( bVar1 == 0x12 )) goto LAB_00103a2f;
         if (*(code**)( *plVar2 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(bVar1 - 0xf) < 2) {
               LAB_00103b5d:lVar5 = *(long*)( plVar2[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar2[0xd] + 8 ),lVar5 ));
               if (lVar5 != lVar4) {
                  LAB_00103a2f:return param_1 + 8;
               }

            }

         }
 else {
            cVar3 = ( **(code**)( *plVar2 + 0x128 ) )(plVar2);
            if (cVar3 != '\0') goto LAB_00103b5d;
         }

         plVar2 = (long*)param_1[0xc];
         bVar1 = *(byte*)( plVar2 + 1 );
         if (( bVar1 < 0xd ) || ( bVar1 == 0x12 )) goto LAB_00103a6f;
         if (*(code**)( *plVar2 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(bVar1 - 0xf) < 2) {
               LAB_00103b8d:lVar5 = *(long*)( plVar2[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar2[0xd] + 8 ),lVar5 ));
               if (lVar5 != lVar4) {
                  LAB_00103a6f:return param_1 + 0xc;
               }

            }

         }
 else {
            cVar3 = ( **(code**)( *plVar2 + 0x128 ) )(plVar2);
            if (cVar3 != '\0') goto LAB_00103b8d;
         }

         param_1 = param_1 + 0x10;
      }
 while ( param_1 != plVar6 );
      lVar5 = (long)param_2 - (long)param_1;
   }

   lVar5 = lVar5 >> 5;
   if (lVar5 != 2) {
      if (lVar5 != 3) {
         if (lVar5 != 1) {
            return param_2;
         }

         goto LAB_00103c29;
      }

      plVar6 = (long*)*param_1;
      bVar1 = *(byte*)( plVar6 + 1 );
      if (bVar1 < 0xd) {
         return param_1;
      }

      if (bVar1 == 0x12) {
         return param_1;
      }

      if (*(code**)( *plVar6 + 0x128 ) == glslang::TType::isStruct) {
         if (( byte )(bVar1 - 0xf) < 2) {
            LAB_00103ccb:lVar5 = *(long*)( plVar6[0xd] + 0x10 );
            lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar6[0xd] + 8 ),lVar5 ));
            if (lVar5 != lVar4) {
               return param_1;
            }

         }

      }
 else {
         cVar3 = ( **(code**)( *plVar6 + 0x128 ) )(plVar6);
         if (cVar3 != '\0') goto LAB_00103ccb;
      }

      param_1 = param_1 + 4;
   }

   plVar6 = (long*)*param_1;
   bVar1 = *(byte*)( plVar6 + 1 );
   if (bVar1 < 0xd) {
      return param_1;
   }

   if (bVar1 == 0x12) {
      return param_1;
   }

   if (*(code**)( *plVar6 + 0x128 ) == glslang::TType::isStruct) {
      if (( byte )(bVar1 - 0xf) < 2) {
         LAB_00103c8d:lVar5 = *(long*)( plVar6[0xd] + 0x10 );
         lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar6[0xd] + 8 ),lVar5 ));
         if (lVar5 != lVar4) {
            return param_1;
         }

      }

   }
 else {
      cVar3 = ( **(code**)( *plVar6 + 0x128 ) )(plVar6);
      if (cVar3 != '\0') goto LAB_00103c8d;
   }

   param_1 = param_1 + 4;
   LAB_00103c29:plVar6 = (long*)*param_1;
   bVar1 = *(byte*)( plVar6 + 1 );
   if (bVar1 < 0xd) {
      return param_1;
   }

   if (bVar1 == 0x12) {
      return param_1;
   }

   if (*(code**)( *plVar6 + 0x128 ) == glslang::TType::isStruct) {
      if (1 < ( byte )(bVar1 - 0xf)) {
         return param_2;
      }

   }
 else {
      cVar3 = ( **(code**)( *plVar6 + 0x128 ) )(plVar6);
      if (cVar3 == '\0') {
         return param_2;
      }

   }

   lVar5 = *(long*)( plVar6[0xd] + 0x10 );
   lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar6[0xd] + 8 ),lVar5 ));
   if (lVar5 == lVar4) {
      return param_2;
   }

   return param_1;
}
/* glslang::TType::containsNonOpaque() const */ulong glslang::TType::containsNonOpaque(TType *this) {
   TType TVar1;
   long lVar2;
   char cVar3;
   undefined1 auVar4[16];
   TVar1 = this[8];
   if (( (byte)TVar1 < 0xd ) || ( TVar1 == (TType)0x12 )) {
      return 1;
   }

   if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
      if (( byte )((char)TVar1 - 0xfU) < 2) {
         LAB_00103d50:lVar2 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         auVar4 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsNonOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsNonOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar2 ));
         return CONCAT71(auVar4._9_7_, lVar2 != auVar4._0_8_) & 0xffffffff;
      }

   }
 else {
      cVar3 = ( **(code**)( *(long*)this + 0x128 ) )();
      if (cVar3 != '\0') goto LAB_00103d50;
   }

   return 0;
}
/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBasicType(glslang::TBasicType)
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2, uint param_3) {
   long *plVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   lVar4 = (long)param_2 - (long)param_1;
   if (0 < lVar4 >> 7) {
      plVar5 = param_1 + ( lVar4 >> 7 ) * 0x10;
      do {
         plVar1 = (long*)*param_1;
         if (*(byte*)( plVar1 + 1 ) == param_3) {
            return param_1;
         }

         if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
               LAB_00103ebd:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
               if (lVar4 != lVar3) {
                  return param_1;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00103ebd;
         }

         plVar1 = (long*)param_1[4];
         if (*(byte*)( plVar1 + 1 ) == param_3) goto LAB_00103f0c;
         if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
               LAB_00103eed:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
               if (lVar4 != lVar3) {
                  LAB_00103f0c:return param_1 + 4;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00103eed;
         }

         plVar1 = (long*)param_1[8];
         if (*(byte*)( plVar1 + 1 ) == param_3) goto LAB_00103f44;
         if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
               LAB_00103f25:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
               if (lVar4 != lVar3) {
                  LAB_00103f44:return param_1 + 8;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00103f25;
         }

         plVar1 = (long*)param_1[0xc];
         if (*(byte*)( plVar1 + 1 ) == param_3) goto LAB_00103f7c;
         if (*(code**)( *plVar1 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )(*(byte*)( plVar1 + 1 ) - 0xf) < 2) {
               LAB_00103f5d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4,param_3 ));
               if (lVar4 != lVar3) {
                  LAB_00103f7c:return param_1 + 0xc;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( *plVar1 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00103f5d;
         }

         param_1 = param_1 + 0x10;
      }
 while ( param_1 != plVar5 );
      lVar4 = (long)param_2 - (long)param_1;
   }

   lVar4 = lVar4 >> 5;
   if (lVar4 != 2) {
      if (lVar4 != 3) {
         if (lVar4 != 1) {
            return param_2;
         }

         goto LAB_0010401e;
      }

      plVar5 = (long*)*param_1;
      if (*(byte*)( plVar5 + 1 ) == param_3) {
         return param_1;
      }

      if (*(code**)( *plVar5 + 0x128 ) == glslang::TType::isStruct) {
         if (( byte )(*(byte*)( plVar5 + 1 ) - 0xf) < 2) {
            LAB_001040c2:lVar4 = *(long*)( plVar5[0xd] + 0x10 );
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4,param_3 ));
            if (lVar4 != lVar3) {
               return param_1;
            }

         }

      }
 else {
         cVar2 = ( **(code**)( *plVar5 + 0x128 ) )(plVar5);
         if (cVar2 != '\0') goto LAB_001040c2;
      }

      param_1 = param_1 + 4;
   }

   plVar5 = (long*)*param_1;
   if (*(byte*)( plVar5 + 1 ) == param_3) {
      return param_1;
   }

   if (*(code**)( *plVar5 + 0x128 ) == glslang::TType::isStruct) {
      if (( byte )(*(byte*)( plVar5 + 1 ) - 0xf) < 2) {
         LAB_00104081:lVar4 = *(long*)( plVar5[0xd] + 0x10 );
         lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4,param_3 ));
         if (lVar4 != lVar3) {
            return param_1;
         }

      }

   }
 else {
      cVar2 = ( **(code**)( *plVar5 + 0x128 ) )(plVar5);
      if (cVar2 != '\0') goto LAB_00104081;
   }

   param_1 = param_1 + 4;
   LAB_0010401e:plVar5 = (long*)*param_1;
   if (param_3 == *(byte*)( plVar5 + 1 )) {
      return param_1;
   }

   if (*(code**)( *plVar5 + 0x128 ) == glslang::TType::isStruct) {
      if (1 < ( byte )(*(byte*)( plVar5 + 1 ) - 0xf)) {
         return param_2;
      }

   }
 else {
      cVar2 = ( **(code**)( *plVar5 + 0x128 ) )(plVar5);
      if (cVar2 == '\0') {
         return param_2;
      }

   }

   lVar4 = *(long*)( plVar5[0xd] + 0x10 );
   lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4,param_3 ));
   if (lVar4 == lVar3) {
      return param_2;
   }

   return param_1;
}
/* glslang::TType::containsBasicType(glslang::TBasicType) const */ulong glslang::TType::containsBasicType(TType *this, uint param_2) {
   long lVar1;
   char cVar2;
   undefined1 auVar3[16];
   if ((byte)this[8] == param_2) {
      return 1;
   }

   if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_00104146:lVar1 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         auVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBasicType(glslang::TBasicType)const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBasicType (glslang::TBasicType)const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar1,param_2 ));
         return CONCAT71(auVar3._9_7_, lVar1 != auVar3._0_8_) & 0xffffffff;
      }

   }
 else {
      cVar2 = ( **(code**)( *(long*)this + 0x128 ) )();
      if (cVar2 != '\0') goto LAB_00104146;
   }

   return 0;
}
/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2) {
   long *plVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   lVar4 = (long)param_2 - (long)param_1;
   if (0 < lVar4 >> 7) {
      plVar5 = param_1 + ( lVar4 >> 7 ) * 0x10;
      do {
         plVar1 = (long*)*param_1;
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
            if (plVar1[0xc] != 0) {
               return param_1;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
            if (cVar2 != '\0') {
               return param_1;
            }

            lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_001043bd:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  return param_1;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_001043bd;
         }

         plVar1 = (long*)param_1[4];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
            if (plVar1[0xc] != 0) goto LAB_00104333;
         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00104333;
            lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_00104315:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_00104333:return param_1 + 4;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00104315;
         }

         plVar1 = (long*)param_1[8];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
            if (plVar1[0xc] != 0) goto LAB_0010436b;
         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_0010436b;
            lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_0010434d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_0010436b:return param_1 + 8;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_0010434d;
         }

         plVar1 = (long*)param_1[0xc];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
            if (plVar1[0xc] != 0) goto LAB_001043a3;
         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_001043a3;
            lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_00104385:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_001043a3:return param_1 + 0xc;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00104385;
         }

         param_1 = param_1 + 0x10;
      }
 while ( param_1 != plVar5 );
      lVar4 = (long)param_2 - (long)param_1;
   }

   lVar4 = lVar4 >> 5;
   if (lVar4 != 2) {
      if (lVar4 != 3) {
         if (lVar4 != 1) {
            return param_2;
         }

         goto LAB_0010448e;
      }

      plVar5 = (long*)*param_1;
      lVar4 = *plVar5;
      if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
         if (plVar5[0xc] != 0) {
            return param_1;
         }

      }
 else {
         cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar5);
         if (cVar2 != '\0') {
            return param_1;
         }

         lVar4 = *plVar5;
      }

      if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
         if (( byte )((char)plVar5[1] - 0xfU) < 2) {
            LAB_0010462c:lVar4 = *(long*)( plVar5[0xd] + 0x10 );
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
            if (lVar4 != lVar3) {
               return param_1;
            }

         }

      }
 else {
         cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
         if (cVar2 != '\0') goto LAB_0010462c;
      }

      param_1 = param_1 + 4;
   }

   plVar5 = (long*)*param_1;
   lVar4 = *plVar5;
   if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
      if (plVar5[0xc] != 0) {
         return param_1;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar5);
      if (cVar2 != '\0') {
         return param_1;
      }

      lVar4 = *plVar5;
   }

   if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
      if (( byte )((char)plVar5[1] - 0xfU) < 2) {
         LAB_001045d3:lVar4 = *(long*)( plVar5[0xd] + 0x10 );
         lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
         if (lVar4 != lVar3) {
            return param_1;
         }

      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
      if (cVar2 != '\0') goto LAB_001045d3;
   }

   param_1 = param_1 + 4;
   LAB_0010448e:plVar5 = (long*)*param_1;
   lVar4 = *plVar5;
   if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
      if (plVar5[0xc] != 0) {
         return param_1;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar5);
      if (cVar2 != '\0') {
         return param_1;
      }

      lVar4 = *plVar5;
   }

   if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
      if (1 < ( byte )((char)plVar5[1] - 0xfU)) {
         return param_2;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
      if (cVar2 == '\0') {
         return param_2;
      }

   }

   lVar4 = *(long*)( plVar5[0xd] + 0x10 );
   lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
   if (lVar4 == lVar3) {
      return param_2;
   }

   return param_1;
}
/* glslang::TType::containsArray() const */bool glslang::TType::containsArray(TType *this) {
   char cVar1;
   long lVar2;
   long lVar3;
   lVar2 = *(long*)this;
   if (*(code**)( lVar2 + 0xe8 ) == isArray) {
      if (*(long*)( this + 0x60 ) != 0) {
         return true;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0xe8 ) )();
      if (cVar1 != '\0') {
         return true;
      }

      lVar2 = *(long*)this;
   }

   if (*(code**)( lVar2 + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_001046a9:lVar2 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         lVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar2 ));
         return lVar2 != lVar3;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0x128 ) )(this);
      if (cVar1 != '\0') goto LAB_001046a9;
   }

   return false;
}
/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsBuiltIn()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2) {
   code *pcVar1;
   char cVar2;
   long *plVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   long *plVar7;
   lVar6 = (long)param_2 - (long)param_1;
   if (0 < lVar6 >> 7) {
      plVar7 = param_1 + ( lVar6 >> 7 ) * 0x10;
      do {
         plVar5 = (long*)*param_1;
         pcVar1 = *(code**)( *plVar5 + 0x148 );
         if (pcVar1 == glslang::TType::isBuiltIn) {
            pcVar1 = *(code**)( *plVar5 + 0x58 );
            if (pcVar1 == glslang::TType::getQualifier) {
               plVar3 = plVar5 + 2;
            }
 else {
               plVar3 = (long*)( *pcVar1 )(plVar5);
            }

            if (0x7f < *(ushort*)( plVar3 + 1 )) {
               return param_1;
            }

         }
 else {
            cVar2 = ( *pcVar1 )(plVar5);
            if (cVar2 != '\0') {
               return param_1;
            }

         }

         if (*(code**)( *plVar5 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar5[1] - 0xfU) < 2) {
               LAB_00104955:lVar6 = *(long*)( plVar5[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar6 ));
               if (lVar6 != lVar4) {
                  return param_1;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( *plVar5 + 0x128 ) )(plVar5);
            if (cVar2 != '\0') goto LAB_00104955;
         }

         plVar5 = (long*)param_1[4];
         pcVar1 = *(code**)( *plVar5 + 0x148 );
         if (pcVar1 == glslang::TType::isBuiltIn) {
            pcVar1 = *(code**)( *plVar5 + 0x58 );
            if (pcVar1 == glslang::TType::getQualifier) {
               plVar3 = plVar5 + 2;
            }
 else {
               plVar3 = (long*)( *pcVar1 )(plVar5);
            }

            if (0x7f < *(ushort*)( plVar3 + 1 )) goto LAB_001048da;
         }
 else {
            cVar2 = ( *pcVar1 )(plVar5);
            if (cVar2 != '\0') {
               return param_1 + 4;
            }

         }

         if (*(code**)( *plVar5 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar5[1] - 0xfU) < 2) {
               LAB_001048bd:lVar6 = *(long*)( plVar5[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar6 ));
               if (lVar6 != lVar4) {
                  LAB_001048da:return param_1 + 4;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( *plVar5 + 0x128 ) )(plVar5);
            if (cVar2 != '\0') goto LAB_001048bd;
         }

         plVar5 = (long*)param_1[8];
         pcVar1 = *(code**)( *plVar5 + 0x148 );
         if (pcVar1 == glslang::TType::isBuiltIn) {
            pcVar1 = *(code**)( *plVar5 + 0x58 );
            if (pcVar1 == glslang::TType::getQualifier) {
               plVar3 = plVar5 + 2;
            }
 else {
               plVar3 = (long*)( *pcVar1 )(plVar5);
            }

            if (0x7f < *(ushort*)( plVar3 + 1 )) goto LAB_0010490a;
         }
 else {
            cVar2 = ( *pcVar1 )(plVar5);
            if (cVar2 != '\0') {
               return param_1 + 8;
            }

         }

         if (*(code**)( *plVar5 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar5[1] - 0xfU) < 2) {
               LAB_001048ed:lVar6 = *(long*)( plVar5[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar6 ));
               if (lVar6 != lVar4) {
                  LAB_0010490a:return param_1 + 8;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( *plVar5 + 0x128 ) )(plVar5);
            if (cVar2 != '\0') goto LAB_001048ed;
         }

         plVar5 = (long*)param_1[0xc];
         pcVar1 = *(code**)( *plVar5 + 0x148 );
         if (pcVar1 == glslang::TType::isBuiltIn) {
            pcVar1 = *(code**)( *plVar5 + 0x58 );
            if (pcVar1 == glslang::TType::getQualifier) {
               plVar3 = plVar5 + 2;
            }
 else {
               plVar3 = (long*)( *pcVar1 )(plVar5);
            }

            if (0x7f < *(ushort*)( plVar3 + 1 )) goto LAB_0010493a;
         }
 else {
            cVar2 = ( *pcVar1 )(plVar5);
            if (cVar2 != '\0') {
               return param_1 + 0xc;
            }

         }

         if (*(code**)( *plVar5 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar5[1] - 0xfU) < 2) {
               LAB_0010491d:lVar6 = *(long*)( plVar5[0xd] + 0x10 );
               lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar6 ));
               if (lVar6 != lVar4) {
                  LAB_0010493a:return param_1 + 0xc;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( *plVar5 + 0x128 ) )(plVar5);
            if (cVar2 != '\0') goto LAB_0010491d;
         }

         param_1 = param_1 + 0x10;
      }
 while ( param_1 != plVar7 );
      lVar6 = (long)param_2 - (long)param_1;
   }

   lVar6 = lVar6 >> 5;
   if (lVar6 != 2) {
      if (lVar6 != 3) {
         if (lVar6 != 1) {
            return param_2;
         }

         goto LAB_00104a68;
      }

      plVar7 = (long*)*param_1;
      pcVar1 = *(code**)( *plVar7 + 0x148 );
      if (pcVar1 == glslang::TType::isBuiltIn) {
         pcVar1 = *(code**)( *plVar7 + 0x58 );
         if (pcVar1 == glslang::TType::getQualifier) {
            plVar5 = plVar7 + 2;
         }
 else {
            plVar5 = (long*)( *pcVar1 )(plVar7);
         }

         if (0x7f < *(ushort*)( plVar5 + 1 )) {
            return param_1;
         }

      }
 else {
         cVar2 = ( *pcVar1 )(plVar7);
         if (cVar2 != '\0') {
            return param_1;
         }

      }

      if (*(code**)( *plVar7 + 0x128 ) == glslang::TType::isStruct) {
         if (( byte )((char)plVar7[1] - 0xfU) < 2) {
            LAB_00104c66:lVar6 = *(long*)( plVar7[0xd] + 0x10 );
            lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar7[0xd] + 8 ),lVar6 ));
            if (lVar6 != lVar4) {
               return param_1;
            }

         }

      }
 else {
         cVar2 = ( **(code**)( *plVar7 + 0x128 ) )(plVar7);
         if (cVar2 != '\0') goto LAB_00104c66;
      }

      param_1 = param_1 + 4;
   }

   plVar7 = (long*)*param_1;
   pcVar1 = *(code**)( *plVar7 + 0x148 );
   if (pcVar1 == glslang::TType::isBuiltIn) {
      pcVar1 = *(code**)( *plVar7 + 0x58 );
      if (pcVar1 == glslang::TType::getQualifier) {
         plVar5 = plVar7 + 2;
      }
 else {
         plVar5 = (long*)( *pcVar1 )(plVar7);
      }

      if (0x7f < *(ushort*)( plVar5 + 1 )) {
         return param_1;
      }

   }
 else {
      cVar2 = ( *pcVar1 )(plVar7);
      if (cVar2 != '\0') {
         return param_1;
      }

   }

   if (*(code**)( *plVar7 + 0x128 ) == glslang::TType::isStruct) {
      if (( byte )((char)plVar7[1] - 0xfU) < 2) {
         LAB_00104bef:lVar6 = *(long*)( plVar7[0xd] + 0x10 );
         lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar7[0xd] + 8 ),lVar6 ));
         if (lVar6 != lVar4) {
            return param_1;
         }

      }

   }
 else {
      cVar2 = ( **(code**)( *plVar7 + 0x128 ) )(plVar7);
      if (cVar2 != '\0') goto LAB_00104bef;
   }

   param_1 = param_1 + 4;
   LAB_00104a68:plVar7 = (long*)*param_1;
   pcVar1 = *(code**)( *plVar7 + 0x148 );
   if (pcVar1 == glslang::TType::isBuiltIn) {
      pcVar1 = *(code**)( *plVar7 + 0x58 );
      if (pcVar1 == glslang::TType::getQualifier) {
         plVar5 = plVar7 + 2;
      }
 else {
         plVar5 = (long*)( *pcVar1 )(plVar7);
      }

      if (0x7f < *(ushort*)( plVar5 + 1 )) {
         return param_1;
      }

   }
 else {
      cVar2 = ( *pcVar1 )(plVar7);
      if (cVar2 != '\0') {
         return param_1;
      }

   }

   if (*(code**)( *plVar7 + 0x128 ) == glslang::TType::isStruct) {
      if (1 < ( byte )((char)plVar7[1] - 0xfU)) {
         return param_2;
      }

   }
 else {
      cVar2 = ( **(code**)( *plVar7 + 0x128 ) )(plVar7);
      if (cVar2 == '\0') {
         return param_2;
      }

   }

   lVar6 = *(long*)( plVar7[0xd] + 0x10 );
   lVar4 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar7[0xd] + 8 ),lVar6 ));
   if (lVar6 == lVar4) {
      return param_2;
   }

   return param_1;
}
/* glslang::TType::containsBuiltIn() const */bool glslang::TType::containsBuiltIn(TType *this) {
   code *pcVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   TType *pTVar5;
   pcVar1 = *(code**)( *(long*)this + 0x148 );
   if (pcVar1 == isBuiltIn) {
      pcVar1 = *(code**)( *(long*)this + 0x58 );
      if (pcVar1 == getQualifier) {
         pTVar5 = this + 0x10;
      }
 else {
         pTVar5 = (TType*)( *pcVar1 )();
      }

      if (0x7f < *(ushort*)( pTVar5 + 8 )) {
         return true;
      }

   }
 else {
      cVar3 = ( *pcVar1 )();
      if (cVar3 != '\0') {
         return true;
      }

   }

   if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_00104d09:lVar2 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         lVar4 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsBuiltIn()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsBuiltIn ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar2 ));
         return lVar2 != lVar4;
      }

   }
 else {
      cVar3 = ( **(code**)( *(long*)this + 0x128 ) )(this);
      if (cVar3 != '\0') goto LAB_00104d09;
   }

   return false;
}
/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsSpecializationSize()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2) {
   long *plVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   lVar4 = (long)param_2 - (long)param_1;
   if (0 < lVar4 >> 7) {
      plVar5 = param_1 + ( lVar4 >> 7 ) * 0x10;
      do {
         plVar1 = (long*)*param_1;
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
            lVar3 = plVar1[0xc];
            if (lVar3 != 0) {
               LAB_00104da8:if (*(long*)( *(long*)( *(long*)( lVar3 + 8 ) + 8 ) + 8 ) != 0) {
                  return param_1;
               }

               goto LAB_00104dd0;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
            if (cVar2 != '\0') {
               lVar3 = plVar1[0xc];
               goto LAB_00104da8;
            }

            LAB_00104dd0:lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_00104fed:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  return param_1;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00104fed;
         }

         plVar1 = (long*)param_1[4];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
            lVar3 = plVar1[0xc];
            if (lVar3 != 0) {
               LAB_00104e14:if (*(long*)( *(long*)( *(long*)( lVar3 + 8 ) + 8 ) + 8 ) != 0) goto LAB_00104e23;
               goto LAB_00104e30;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
            if (cVar2 != '\0') {
               lVar3 = plVar1[0xc];
               goto LAB_00104e14;
            }

            LAB_00104e30:lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_0010501d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_00104e23:return param_1 + 4;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_0010501d;
         }

         plVar1 = (long*)param_1[8];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
            lVar3 = plVar1[0xc];
            if (lVar3 != 0) {
               LAB_00104e74:if (*(long*)( *(long*)( *(long*)( lVar3 + 8 ) + 8 ) + 8 ) != 0) goto LAB_00104e83;
               goto LAB_00104e90;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
            if (cVar2 != '\0') {
               lVar3 = plVar1[0xc];
               goto LAB_00104e74;
            }

            LAB_00104e90:lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_0010504d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_00104e83:return param_1 + 8;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_0010504d;
         }

         plVar1 = (long*)param_1[0xc];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
            lVar3 = plVar1[0xc];
            if (lVar3 != 0) {
               LAB_00104ed4:if (*(long*)( *(long*)( *(long*)( lVar3 + 8 ) + 8 ) + 8 ) != 0) goto LAB_00104ee3;
               goto LAB_00104ef0;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
            if (cVar2 != '\0') {
               lVar3 = plVar1[0xc];
               goto LAB_00104ed4;
            }

            LAB_00104ef0:lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_0010507d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_00104ee3:return param_1 + 0xc;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_0010507d;
         }

         param_1 = param_1 + 0x10;
      }
 while ( param_1 != plVar5 );
      lVar4 = (long)param_2 - (long)param_1;
   }

   lVar4 = lVar4 >> 5;
   if (lVar4 == 2) {
      LAB_0010517e:plVar5 = (long*)*param_1;
      lVar4 = *plVar5;
      if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
         lVar3 = plVar5[0xc];
         if (lVar3 != 0) {
            LAB_0010519e:if (*(long*)( *(long*)( *(long*)( lVar3 + 8 ) + 8 ) + 8 ) != 0) {
               return param_1;
            }

            goto LAB_001051b1;
         }

      }
 else {
         cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar5);
         if (cVar2 != '\0') {
            lVar3 = plVar5[0xc];
            goto LAB_0010519e;
         }

         LAB_001051b1:lVar4 = *plVar5;
      }

      if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
         if (( byte )((char)plVar5[1] - 0xfU) < 2) {
            LAB_001051f7:lVar4 = *(long*)( plVar5[0xd] + 0x10 );
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
            if (lVar4 != lVar3) {
               return param_1;
            }

         }

      }
 else {
         cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
         if (cVar2 != '\0') goto LAB_001051f7;
      }

      param_1 = param_1 + 4;
   }
 else {
      if (lVar4 == 3) {
         plVar5 = (long*)*param_1;
         lVar4 = *plVar5;
         if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
            lVar3 = plVar5[0xc];
            if (lVar3 != 0) {
               LAB_0010513d:if (*(long*)( *(long*)( *(long*)( lVar3 + 8 ) + 8 ) + 8 ) != 0) {
                  return param_1;
               }

               goto LAB_00105150;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar5);
            if (cVar2 != '\0') {
               lVar3 = plVar5[0xc];
               goto LAB_0010513d;
            }

            LAB_00105150:lVar4 = *plVar5;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar5[1] - 0xfU) < 2) {
               LAB_00105265:lVar4 = *(long*)( plVar5[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  return param_1;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
            if (cVar2 != '\0') goto LAB_00105265;
         }

         param_1 = param_1 + 4;
         goto LAB_0010517e;
      }

      if (lVar4 != 1) {
         return param_2;
      }

   }

   plVar5 = (long*)*param_1;
   lVar4 = *plVar5;
   if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
      lVar3 = plVar5[0xc];
      if (lVar3 == 0) goto LAB_00104f89;
      LAB_00104f72:if (*(long*)( *(long*)( *(long*)( lVar3 + 8 ) + 8 ) + 8 ) != 0) {
         return param_1;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar5);
      if (cVar2 != '\0') {
         lVar3 = plVar5[0xc];
         goto LAB_00104f72;
      }

   }

   lVar4 = *plVar5;
   LAB_00104f89:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
      if (1 < ( byte )((char)plVar5[1] - 0xfU)) {
         return param_2;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
      if (cVar2 == '\0') {
         return param_2;
      }

   }

   lVar4 = *(long*)( plVar5[0xd] + 0x10 );
   lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
   if (lVar4 == lVar3) {
      return param_2;
   }

   return param_1;
}
/* glslang::TType::containsSpecializationSize() const */bool glslang::TType::containsSpecializationSize(TType *this) {
   char cVar1;
   long lVar2;
   long lVar3;
   lVar2 = *(long*)this;
   if (*(code**)( lVar2 + 0xe8 ) == isArray) {
      lVar3 = *(long*)( this + 0x60 );
      if (lVar3 != 0) {
         LAB_001052ea:if (*(long*)( *(long*)( *(long*)( lVar3 + 8 ) + 8 ) + 8 ) != 0) {
            return true;
         }

         goto LAB_001052fe;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0xe8 ) )();
      if (cVar1 != '\0') {
         lVar3 = *(long*)( this + 0x60 );
         goto LAB_001052ea;
      }

      LAB_001052fe:lVar2 = *(long*)this;
   }

   if (*(code**)( lVar2 + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_00105311:lVar2 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         lVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsSpecializationSize()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsSpecializationSize ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar2 ));
         return lVar2 != lVar3;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0x128 ) )(this);
      if (cVar1 != '\0') goto LAB_00105311;
   }

   return false;
}
/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsOpaque()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsOpaque()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2) {
   long *plVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   lVar4 = (long)param_2 - (long)param_1;
   if (0 < lVar4 >> 7) {
      plVar5 = param_1 + ( lVar4 >> 7 ) * 0x10;
      do {
         plVar1 = (long*)*param_1;
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0x140 ) == glslang::TType::isOpaque) {
            if (( *(byte*)( plVar1 + 1 ) < 0x15 ) && ( ( 0x1a6000UL >> ( ( ulong ) * (byte*)( plVar1 + 1 ) & 0x3f ) & 1 ) != 0 )) {
               return param_1;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x140 ) )(plVar1);
            if (cVar2 != '\0') {
               return param_1;
            }

            lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_001055ed:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  return param_1;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_001055ed;
         }

         plVar1 = (long*)param_1[4];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0x140 ) == glslang::TType::isOpaque) {
            if (( *(byte*)( plVar1 + 1 ) < 0x15 ) && ( ( 0x1a6000UL >> ( ( ulong ) * (byte*)( plVar1 + 1 ) & 0x3f ) & 1 ) != 0 )) goto LAB_00105410;
         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x140 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00105410;
            lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_0010561d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_00105410:return param_1 + 4;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_0010561d;
         }

         plVar1 = (long*)param_1[8];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0x140 ) == glslang::TType::isOpaque) {
            if (( *(byte*)( plVar1 + 1 ) < 0x15 ) && ( ( 0x1a6000UL >> ( ( ulong ) * (byte*)( plVar1 + 1 ) & 0x3f ) & 1 ) != 0 )) goto LAB_00105478;
         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x140 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00105478;
            lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_0010564d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_00105478:return param_1 + 8;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_0010564d;
         }

         plVar1 = (long*)param_1[0xc];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0x140 ) == glslang::TType::isOpaque) {
            if (( *(byte*)( plVar1 + 1 ) < 0x15 ) && ( ( 0x1a6000UL >> ( ( ulong ) * (byte*)( plVar1 + 1 ) & 0x3f ) & 1 ) != 0 )) goto LAB_001054e0;
         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x140 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_001054e0;
            lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_0010567d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_001054e0:return param_1 + 0xc;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_0010567d;
         }

         param_1 = param_1 + 0x10;
      }
 while ( param_1 != plVar5 );
      lVar4 = (long)param_2 - (long)param_1;
   }

   lVar4 = lVar4 >> 5;
   if (lVar4 != 2) {
      if (lVar4 != 3) {
         if (lVar4 != 1) {
            return param_2;
         }

         goto LAB_0010555d;
      }

      plVar5 = (long*)*param_1;
      lVar4 = *plVar5;
      if (*(code**)( lVar4 + 0x140 ) == glslang::TType::isOpaque) {
         if (( *(byte*)( plVar5 + 1 ) < 0x15 ) && ( ( 0x1a6000UL >> ( ( ulong ) * (byte*)( plVar5 + 1 ) & 0x3f ) & 1 ) != 0 )) {
            return param_1;
         }

      }
 else {
         cVar2 = ( **(code**)( lVar4 + 0x140 ) )(plVar5);
         if (cVar2 != '\0') {
            return param_1;
         }

         lVar4 = *plVar5;
      }

      if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
         if (( byte )((char)plVar5[1] - 0xfU) < 2) {
            LAB_001057e8:lVar4 = *(long*)( plVar5[0xd] + 0x10 );
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
            if (lVar4 != lVar3) {
               return param_1;
            }

         }

      }
 else {
         cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
         if (cVar2 != '\0') goto LAB_001057e8;
      }

      param_1 = param_1 + 4;
   }

   plVar5 = (long*)*param_1;
   lVar4 = *plVar5;
   if (*(code**)( lVar4 + 0x140 ) == glslang::TType::isOpaque) {
      if (( *(byte*)( plVar5 + 1 ) < 0x15 ) && ( ( 0x1a6000UL >> ( ( ulong ) * (byte*)( plVar5 + 1 ) & 0x3f ) & 1 ) != 0 )) {
         return param_1;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0x140 ) )(plVar5);
      if (cVar2 != '\0') {
         return param_1;
      }

      lVar4 = *plVar5;
   }

   if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
      if (( byte )((char)plVar5[1] - 0xfU) < 2) {
         LAB_0010578f:lVar4 = *(long*)( plVar5[0xd] + 0x10 );
         lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
         if (lVar4 != lVar3) {
            return param_1;
         }

      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
      if (cVar2 != '\0') goto LAB_0010578f;
   }

   param_1 = param_1 + 4;
   LAB_0010555d:plVar5 = (long*)*param_1;
   lVar4 = *plVar5;
   if (*(code**)( lVar4 + 0x140 ) == glslang::TType::isOpaque) {
      if (( *(byte*)( plVar5 + 1 ) < 0x15 ) && ( ( 0x1a6000UL >> ( ( ulong ) * (byte*)( plVar5 + 1 ) & 0x3f ) & 1 ) != 0 )) {
         return param_1;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0x140 ) )(plVar5);
      if (cVar2 != '\0') {
         return param_1;
      }

      lVar4 = *plVar5;
   }

   if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
      if (1 < ( byte )((char)plVar5[1] - 0xfU)) {
         return param_2;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
      if (cVar2 == '\0') {
         return param_2;
      }

   }

   lVar4 = *(long*)( plVar5[0xd] + 0x10 );
   lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
   if (lVar4 == lVar3) {
      return param_2;
   }

   return param_1;
}
/* glslang::TType::containsOpaque() const */bool glslang::TType::containsOpaque(TType *this) {
   char cVar1;
   long lVar2;
   long lVar3;
   lVar2 = *(long*)this;
   if (*(code**)( lVar2 + 0x140 ) == isOpaque) {
      if (( (byte)this[8] < 0x15 ) && ( ( 0x1a6000UL >> ( (ulong)(byte)this[8] & 0x3f ) & 1 ) != 0 )) {
         return true;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0x140 ) )();
      if (cVar1 != '\0') {
         return true;
      }

      lVar2 = *(long*)this;
   }

   if (*(code**)( lVar2 + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_00105889:lVar2 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         lVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsOpaque()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsOpaque ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar2 ));
         return lVar2 != lVar3;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0x128 ) )(this);
      if (cVar1 != '\0') goto LAB_00105889;
   }

   return false;
}
/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsUnsizedArray()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2) {
   long *plVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   lVar4 = (long)param_2 - (long)param_1;
   if (0 < lVar4 >> 7) {
      plVar5 = param_1 + ( lVar4 >> 7 ) * 0x10;
      do {
         plVar1 = (long*)*param_1;
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xf8 ) == glslang::TType::isUnsizedArray) {
            if (*(code**)( lVar4 + 0xe8 ) != glslang::TType::isArray) {
               cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
               if (cVar2 != '\0') {
                  lVar3 = plVar1[0xc];
                  goto LAB_0010592b;
               }

               goto LAB_00105959;
            }

            lVar3 = plVar1[0xc];
            if (lVar3 != 0) {
               LAB_0010592b:if (**(int**)( *(long*)( lVar3 + 8 ) + 8 ) == 0) {
                  return param_1;
               }

               goto LAB_00105959;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xf8 ) )(plVar1);
            if (cVar2 != '\0') {
               return param_1;
            }

            LAB_00105959:lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_00105bd5:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsUnsizedArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  return param_1;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00105bd5;
         }

         plVar1 = (long*)param_1[4];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xf8 ) == glslang::TType::isUnsizedArray) {
            if (*(code**)( lVar4 + 0xe8 ) != glslang::TType::isArray) {
               cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
               if (cVar2 != '\0') {
                  lVar3 = plVar1[0xc];
                  goto LAB_001059a8;
               }

               goto LAB_001059d1;
            }

            lVar3 = plVar1[0xc];
            if (lVar3 != 0) {
               LAB_001059a8:if (**(int**)( *(long*)( lVar3 + 8 ) + 8 ) == 0) goto LAB_001059b8;
               goto LAB_001059d1;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xf8 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_001059b8;
            LAB_001059d1:lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_00105c0d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsUnsizedArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_001059b8:return param_1 + 4;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00105c0d;
         }

         plVar1 = (long*)param_1[8];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xf8 ) == glslang::TType::isUnsizedArray) {
            if (*(code**)( lVar4 + 0xe8 ) != glslang::TType::isArray) {
               cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
               if (cVar2 != '\0') {
                  lVar3 = plVar1[0xc];
                  goto LAB_00105a20;
               }

               goto LAB_00105a49;
            }

            lVar3 = plVar1[0xc];
            if (lVar3 != 0) {
               LAB_00105a20:if (**(int**)( *(long*)( lVar3 + 8 ) + 8 ) == 0) goto LAB_00105a2e;
               goto LAB_00105a49;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xf8 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00105a2e;
            LAB_00105a49:lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_00105c3d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsUnsizedArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_00105a2e:return param_1 + 8;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00105c3d;
         }

         plVar1 = (long*)param_1[0xc];
         lVar4 = *plVar1;
         if (*(code**)( lVar4 + 0xf8 ) == glslang::TType::isUnsizedArray) {
            if (*(code**)( lVar4 + 0xe8 ) != glslang::TType::isArray) {
               cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar1);
               if (cVar2 != '\0') {
                  lVar3 = plVar1[0xc];
                  goto LAB_00105a98;
               }

               goto LAB_00105ab9;
            }

            lVar3 = plVar1[0xc];
            if (lVar3 != 0) {
               LAB_00105a98:if (**(int**)( *(long*)( lVar3 + 8 ) + 8 ) == 0) goto LAB_00105aa6;
               goto LAB_00105ab9;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xf8 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00105aa6;
            LAB_00105ab9:lVar4 = *plVar1;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               LAB_00105c6d:lVar4 = *(long*)( plVar1[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsUnsizedArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  LAB_00105aa6:return param_1 + 0xc;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar1);
            if (cVar2 != '\0') goto LAB_00105c6d;
         }

         param_1 = param_1 + 0x10;
      }
 while ( param_1 != plVar5 );
      lVar4 = (long)param_2 - (long)param_1;
   }

   lVar4 = lVar4 >> 5;
   if (lVar4 == 2) {
      LAB_00105d87:plVar5 = (long*)*param_1;
      lVar4 = *plVar5;
      if (*(code**)( lVar4 + 0xf8 ) == glslang::TType::isUnsizedArray) {
         if (*(code**)( lVar4 + 0xe8 ) != glslang::TType::isArray) {
            cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar5);
            if (cVar2 != '\0') {
               lVar3 = plVar5[0xc];
               goto LAB_00105dbf;
            }

            goto LAB_00105dd1;
         }

         lVar3 = plVar5[0xc];
         if (lVar3 != 0) {
            LAB_00105dbf:if (**(int**)( *(long*)( lVar3 + 8 ) + 8 ) == 0) {
               return param_1;
            }

            goto LAB_00105dd1;
         }

      }
 else {
         cVar2 = ( **(code**)( lVar4 + 0xf8 ) )(plVar5);
         if (cVar2 != '\0') {
            return param_1;
         }

         LAB_00105dd1:lVar4 = *plVar5;
      }

      if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
         if (( byte )((char)plVar5[1] - 0xfU) < 2) {
            LAB_00105e19:lVar4 = *(long*)( plVar5[0xd] + 0x10 );
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsUnsizedArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
            if (lVar4 != lVar3) {
               return param_1;
            }

         }

      }
 else {
         cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
         if (cVar2 != '\0') goto LAB_00105e19;
      }

      param_1 = param_1 + 4;
   }
 else {
      if (lVar4 == 3) {
         plVar5 = (long*)*param_1;
         lVar4 = *plVar5;
         if (*(code**)( lVar4 + 0xf8 ) == glslang::TType::isUnsizedArray) {
            if (*(code**)( lVar4 + 0xe8 ) != glslang::TType::isArray) {
               cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar5);
               if (cVar2 != '\0') {
                  lVar3 = plVar5[0xc];
                  goto LAB_00105d45;
               }

               goto LAB_00105d57;
            }

            lVar3 = plVar5[0xc];
            if (lVar3 != 0) {
               LAB_00105d45:if (**(int**)( *(long*)( lVar3 + 8 ) + 8 ) == 0) {
                  return param_1;
               }

               goto LAB_00105d57;
            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0xf8 ) )(plVar5);
            if (cVar2 != '\0') {
               return param_1;
            }

            LAB_00105d57:lVar4 = *plVar5;
         }

         if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
            if (( byte )((char)plVar5[1] - 0xfU) < 2) {
               LAB_00105eaa:lVar4 = *(long*)( plVar5[0xd] + 0x10 );
               lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsUnsizedArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
               if (lVar4 != lVar3) {
                  return param_1;
               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
            if (cVar2 != '\0') goto LAB_00105eaa;
         }

         param_1 = param_1 + 4;
         goto LAB_00105d87;
      }

      if (lVar4 != 1) {
         return param_2;
      }

   }

   plVar5 = (long*)*param_1;
   lVar4 = *plVar5;
   if (*(code**)( lVar4 + 0xf8 ) == glslang::TType::isUnsizedArray) {
      if (*(code**)( lVar4 + 0xe8 ) == glslang::TType::isArray) {
         lVar3 = plVar5[0xc];
         if (lVar3 == 0) goto LAB_00105b6f;
      }
 else {
         cVar2 = ( **(code**)( lVar4 + 0xe8 ) )(plVar5);
         if (cVar2 == '\0') goto LAB_00105b6b;
         lVar3 = plVar5[0xc];
      }

      if (**(int**)( *(long*)( lVar3 + 8 ) + 8 ) == 0) {
         return param_1;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0xf8 ) )(plVar5);
      if (cVar2 != '\0') {
         return param_1;
      }

   }

   LAB_00105b6b:lVar4 = *plVar5;
   LAB_00105b6f:if (*(code**)( lVar4 + 0x128 ) == glslang::TType::isStruct) {
      if (1 < ( byte )((char)plVar5[1] - 0xfU)) {
         return param_2;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar4 + 0x128 ) )(plVar5);
      if (cVar2 == '\0') {
         return param_2;
      }

   }

   lVar4 = *(long*)( plVar5[0xd] + 0x10 );
   lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsUnsizedArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar5[0xd] + 8 ),lVar4 ));
   if (lVar4 == lVar3) {
      return param_2;
   }

   return param_1;
}
/* glslang::TType::containsUnsizedArray() const */bool glslang::TType::containsUnsizedArray(TType *this) {
   char cVar1;
   long lVar2;
   long lVar3;
   lVar2 = *(long*)this;
   if (*(code**)( lVar2 + 0xf8 ) == isUnsizedArray) {
      if (*(code**)( lVar2 + 0xe8 ) != isArray) {
         cVar1 = ( **(code**)( lVar2 + 0xe8 ) )();
         if (cVar1 != '\0') {
            lVar3 = *(long*)( this + 0x60 );
            goto LAB_00105f5a;
         }

         goto LAB_00105f76;
      }

      lVar3 = *(long*)( this + 0x60 );
      if (lVar3 != 0) {
         LAB_00105f5a:if (**(int**)( *(long*)( lVar3 + 8 ) + 8 ) == 0) {
            return true;
         }

         goto LAB_00105f76;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0xf8 ) )();
      if (cVar1 != '\0') {
         return true;
      }

      LAB_00105f76:lVar2 = *(long*)this;
   }

   if (*(code**)( lVar2 + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_00105f89:lVar2 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         lVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsUnsizedArray()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsUnsizedArray ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar2 ));
         return lVar2 != lVar3;
      }

   }
 else {
      cVar1 = ( **(code**)( lVar2 + 0x128 ) )(this);
      if (cVar1 != '\0') goto LAB_00105f89;
   }

   return false;
}
/* __gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >
   std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>
   >(__gnu_cxx::__normal_iterator<glslang::TTypeLoc*, std::vector<glslang::TTypeLoc,
   glslang::pool_allocator<glslang::TTypeLoc> > >, __gnu_cxx::__normal_iterator<glslang::TTypeLoc*,
   std::vector<glslang::TTypeLoc, glslang::pool_allocator<glslang::TTypeLoc> > >,
   __gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}>(glslang::TType::containsStructure()
   const::{lambda(glslang::TType const*)#1}) const::{lambda(glslang::TTypeLoc const&)#1}>,
   std::random_access_iterator_tag) [clone .isra.0] */long *std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_>(glslang::TType::containsStructure()const::_lambda(glslang::TType_const*)_1_)const::_lambda(glslang::TTypeLoc_const&)_1_>(long *param_1, long *param_2, long *param_3) {
   long *plVar1;
   char cVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   long *plVar6;
   long lVar7;
   lVar7 = (long)param_2 - (long)param_1;
   if (0 < lVar7 >> 7) {
      plVar1 = param_1;
      LAB_00105ff0:do {
         plVar6 = plVar1;
         plVar1 = (long*)*plVar6;
         lVar5 = *plVar1;
         if (plVar1 == param_3) {
            LAB_00106040:if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0010605d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
                  if (lVar5 != lVar3) {
                     return plVar6;
                  }

               }

            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0010605d;
            }

         }
 else {
            if (*(code**)( lVar5 + 0x128 ) != glslang::TType::isStruct) {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') {
                  return plVar6;
               }

               lVar5 = *plVar1;
               goto LAB_00106040;
            }

            if (( byte )((char)plVar1[1] - 0xfU) < 2) {
               return plVar6;
            }

         }

         plVar1 = (long*)plVar6[4];
         lVar5 = *plVar1;
         if (plVar1 == param_3) {
            LAB_001060c0:if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_001060dd:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
                  if (lVar5 != lVar3) {
                     LAB_001060a6:return plVar6 + 4;
                  }

               }

            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_001060dd;
            }

         }
 else {
            if (*(code**)( lVar5 + 0x128 ) != glslang::TType::isStruct) {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_001060a6;
               lVar5 = *plVar1;
               goto LAB_001060c0;
            }

            if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_001060a6;
         }

         plVar1 = (long*)plVar6[8];
         lVar5 = *plVar1;
         if (plVar1 == param_3) {
            LAB_00106140:if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
               if (( byte )((char)plVar1[1] - 0xfU) < 2) {
                  LAB_0010615d:lVar5 = *(long*)( plVar1[0xd] + 0x10 );
                  lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
                  if (lVar5 != lVar3) {
                     LAB_00106126:return plVar6 + 8;
                  }

               }

            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_0010615d;
            }

         }
 else {
            if (*(code**)( lVar5 + 0x128 ) != glslang::TType::isStruct) {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_00106126;
               lVar5 = *plVar1;
               goto LAB_00106140;
            }

            if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_00106126;
         }

         plVar1 = (long*)plVar6[0xc];
         lVar5 = *plVar1;
         if (plVar1 == param_3) {
            LAB_001061c0:if (*(code**)( lVar5 + 0x128 ) == glslang::TType::isStruct) {
               if (1 < ( byte )((char)plVar1[1] - 0xfU)) goto LAB_001061fa;
            }
 else {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 == '\0') {
                  plVar1 = plVar6 + 0x10;
                  if (plVar6 + 0x10 == param_1 + ( lVar7 >> 7 ) * 0x10) break;
                  goto LAB_00105ff0;
               }

            }

            lVar5 = *(long*)( plVar1[0xd] + 0x10 );
            lVar3 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar5,param_3 ));
            if (lVar5 != lVar3) {
               LAB_001061a6:return plVar6 + 0xc;
            }

         }
 else {
            if (*(code**)( lVar5 + 0x128 ) != glslang::TType::isStruct) {
               cVar2 = ( **(code**)( lVar5 + 0x128 ) )(plVar1);
               if (cVar2 != '\0') goto LAB_001061a6;
               lVar5 = *plVar1;
               goto LAB_001061c0;
            }

            if (( byte )((char)plVar1[1] - 0xfU) < 2) goto LAB_001061a6;
         }

         LAB_001061fa:plVar1 = plVar6 + 0x10;
      }
 while ( plVar6 + 0x10 != param_1 + ( lVar7 >> 7 ) * 0x10 );
      param_1 = plVar6 + 0x10;
      lVar7 = (long)param_2 - (long)param_1;
   }

   lVar7 = lVar7 >> 5;
   if (lVar7 != 2) {
      if (lVar7 != 3) {
         if (lVar7 != 1) {
            return param_2;
         }

         goto LAB_00106232;
      }

      plVar1 = (long*)*param_1;
      pcVar4 = *(code**)( *plVar1 + 0x128 );
      if (param_3 == plVar1) {
         LAB_00106372:if (pcVar4 == glslang::TType::isStruct) {
            cVar2 = (char)plVar1[1];
            goto LAB_00106349;
         }

         cVar2 = ( *pcVar4 )(plVar1);
         if (cVar2 != '\0') goto LAB_0010644b;
      }
 else {
         if (pcVar4 != glslang::TType::isStruct) {
            cVar2 = ( *pcVar4 )(plVar1);
            if (cVar2 != '\0') {
               return param_1;
            }

            pcVar4 = *(code**)( *plVar1 + 0x128 );
            goto LAB_00106372;
         }

         cVar2 = (char)plVar1[1];
         if (( byte )(cVar2 - 0xfU) < 2) {
            return param_1;
         }

         LAB_00106349:if (( byte )(cVar2 - 0xfU) < 2) {
            LAB_0010644b:lVar7 = *(long*)( plVar1[0xd] + 0x10 );
            lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar7,param_3 ));
            if (lVar7 != lVar5) {
               return param_1;
            }

         }

      }

      param_1 = param_1 + 4;
   }

   plVar1 = (long*)*param_1;
   lVar7 = *plVar1;
   if (plVar1 == param_3) {
      LAB_00106394:if (*(code**)( lVar7 + 0x128 ) == glslang::TType::isStruct) {
         if (( byte )((char)plVar1[1] - 0xfU) < 2) {
            LAB_001063b5:lVar7 = *(long*)( plVar1[0xd] + 0x10 );
            lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar7,param_3 ));
            if (lVar7 != lVar5) {
               return param_1;
            }

         }

      }
 else {
         cVar2 = ( **(code**)( lVar7 + 0x128 ) )(plVar1);
         if (cVar2 != '\0') goto LAB_001063b5;
      }

   }
 else {
      if (*(code**)( lVar7 + 0x128 ) != glslang::TType::isStruct) {
         cVar2 = ( **(code**)( lVar7 + 0x128 ) )(plVar1);
         if (cVar2 != '\0') {
            return param_1;
         }

         lVar7 = *plVar1;
         goto LAB_00106394;
      }

      if (( byte )((char)plVar1[1] - 0xfU) < 2) {
         return param_1;
      }

   }

   param_1 = param_1 + 4;
   LAB_00106232:plVar1 = (long*)*param_1;
   lVar7 = *plVar1;
   if (plVar1 != param_3) {
      if (*(code**)( lVar7 + 0x128 ) == glslang::TType::isStruct) {
         if (1 < ( byte )((char)plVar1[1] - 0xfU)) {
            return param_2;
         }

         return param_1;
      }

      cVar2 = ( **(code**)( lVar7 + 0x128 ) )(plVar1);
      if (cVar2 != '\0') {
         return param_1;
      }

      lVar7 = *plVar1;
   }

   if (*(code**)( lVar7 + 0x128 ) == glslang::TType::isStruct) {
      if (1 < ( byte )((char)plVar1[1] - 0xfU)) {
         return param_2;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar7 + 0x128 ) )(plVar1);
      if (cVar2 == '\0') {
         return param_2;
      }

   }

   lVar7 = *(long*)( plVar1[0xd] + 0x10 );
   lVar5 = __find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( plVar1[0xd] + 8 ),lVar7,param_3 ));
   if (lVar7 == lVar5) {
      return param_2;
   }

   return param_1;
}
/* glslang::TType::containsStructure() const */bool glslang::TType::containsStructure(TType *this) {
   long lVar1;
   char cVar2;
   long lVar3;
   if (*(code**)( *(long*)this + 0x128 ) == isStruct) {
      if (( byte )((char)this[8] - 0xfU) < 2) {
         LAB_001064d6:lVar1 = *(long*)( *(long*)( this + 0x68 ) + 0x10 );
         lVar3 = std::__find_if<__gnu_cxx::__normal_iterator<glslang::TTypeLoc*,std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>>,__gnu_cxx::__ops::_Iter_pred<glslang::TType::contains<glslang::TType::containsStructure()const::_lambda(glslang::TType_const *)_1_>(glslang::TType::containsStructure ()const::_lambda(glslang::TType_const*) _1_)const::_lambda(glslang::TTypeLoc_const & _1_ >> ( *(undefined8*)( *(long*)( this + 0x68 ) + 8 ),lVar1,this ));
         return lVar1 != lVar3;
      }

   }
 else {
      cVar2 = ( **(code**)( *(long*)this + 0x128 ) )();
      if (cVar2 != '\0') goto LAB_001064d6;
   }

   return false;
}
/* glslang::TType::TType(glslang::TType const&, int, bool) */void glslang::TType::TType(TType *this, TType *param_1, int param_2, bool param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   TType TVar4;
   TType TVar5;
   ushort uVar6;
   uint uVar7;
   uint uVar8;
   undefined4 uVar9;
   code *pcVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   undefined8 uVar18;
   char cVar19;
   ulong uVar20;
   undefined8 *puVar21;
   ulong *puVar22;
   long lVar23;
   uint uVar24;
   long lVar25;
   long lVar26;
   byte bVar27;
   ulong uVar28;
   lVar26 = *(long*)param_1;
   *(undefined***)this = &PTR__TType_00110130;
   if (*(code**)( lVar26 + 0xe8 ) == isArray) {
      lVar23 = *(long*)( param_1 + 0x60 );
      if (lVar23 != 0) {
         LAB_0010667d:uVar9 = *(undefined4*)( param_1 + 0x80 );
         uVar7 = *(uint*)( param_1 + 8 );
         *(long*)( this + 0x60 ) = lVar23;
         uVar1 = *(undefined8*)( param_1 + 0x10 );
         uVar13 = *(undefined8*)( param_1 + 0x18 );
         uVar17 = *(undefined8*)( param_1 + 0x20 );
         uVar18 = *(undefined8*)( param_1 + 0x28 );
         *(undefined4*)( this + 0x80 ) = uVar9;
         uVar2 = *(undefined8*)( param_1 + 0x30 );
         uVar3 = *(undefined8*)( param_1 + 0x38 );
         uVar11 = *(undefined8*)( param_1 + 0x40 );
         uVar12 = *(undefined8*)( param_1 + 0x48 );
         *(undefined8*)( this + 0x10 ) = uVar1;
         *(undefined8*)( this + 0x18 ) = uVar13;
         uVar13 = *(undefined8*)( param_1 + 0x50 );
         uVar14 = *(undefined8*)( param_1 + 0x58 );
         uVar15 = *(undefined8*)( param_1 + 0x70 );
         uVar16 = *(undefined8*)( param_1 + 0x78 );
         *(undefined8*)( this + 0x20 ) = uVar17;
         *(undefined8*)( this + 0x28 ) = uVar18;
         uVar1 = *(undefined8*)( param_1 + 0x68 );
         *(undefined8*)( this + 0x30 ) = uVar2;
         *(undefined8*)( this + 0x38 ) = uVar3;
         *(uint*)( this + 8 ) = *(uint*)( this + 8 ) & 0xffe00000 | uVar7 & 0x1fffff;
         *(undefined8*)( this + 0x68 ) = uVar1;
         uVar6 = *(ushort*)( param_1 + 10 );
         uVar1 = *(undefined8*)( param_1 + 0x88 );
         uVar2 = *(undefined8*)( param_1 + 0x90 );
         *(undefined8*)( this + 0x40 ) = uVar11;
         *(undefined8*)( this + 0x48 ) = uVar12;
         *(undefined8*)( this + 0x50 ) = uVar13;
         *(undefined8*)( this + 0x58 ) = uVar14;
         *(undefined8*)( this + 0x70 ) = uVar15;
         *(undefined8*)( this + 0x78 ) = uVar16;
         *(ushort*)( this + 10 ) = *(ushort*)( this + 10 ) & 0xf81f | uVar6 & 0x7e0;
         pcVar10 = *(code**)( lVar26 + 0x98 );
         *(undefined8*)( this + 0x88 ) = uVar1;
         *(undefined8*)( this + 0x90 ) = uVar2;
         if (pcVar10 != getArraySizes) {
            lVar23 = ( *pcVar10 )(param_1);
         }

         lVar26 = *(long*)( lVar23 + 8 );
         if (( lVar26 != 0 ) && ( (int)( *(long*)( lVar26 + 0x10 ) - *(long*)( lVar26 + 8 ) >> 4 ) == 1 )) {
            *(undefined8*)( this + 0x60 ) = 0;
            return;
         }

         uVar20 = glslang::GetThreadPoolAllocator();
         puVar21 = (undefined8*)glslang::TPoolAllocator::allocate(uVar20);
         *puVar21 = &PTR__TSmallArrayVector_00110110;
         puVar21[1] = 0;
         *(undefined4*)( puVar21 + 2 ) = 0;
         *(undefined2*)( (long)puVar21 + 0x14 ) = 1;
         *(undefined8**)( this + 0x60 ) = puVar21;
         lVar26 = *(long*)( param_1 + 0x60 );
         lVar23 = *(long*)( lVar26 + 8 );
         if (lVar23 == 0) {
            return;
         }

         if ((int)( *(long*)( lVar23 + 0x10 ) - *(long*)( lVar23 + 8 ) >> 4 ) < 2) {
            return;
         }

         uVar20 = glslang::GetThreadPoolAllocator();
         puVar22 = (ulong*)glslang::TPoolAllocator::allocate(uVar20);
         uVar20 = glslang::GetThreadPoolAllocator();
         for (int i = 0; i < 3; i++) {
            puVar22[( i + 1 )] = 0;
         }

         *puVar22 = uVar20;
         puVar21[1] = puVar22;
         lVar26 = *(long*)( lVar26 + 8 );
         lVar23 = *(long*)( lVar26 + 8 );
         lVar26 = *(long*)( lVar26 + 0x10 );
         if (lVar26 == lVar23 + 0x10) {
            return;
         }

         uVar28 = lVar26 - ( lVar23 + 0x10 );
         if (uVar28 < 0x7ffffffffffffff1) {
            if (uVar28 == 0) {
               uVar20 = 0;
            }
 else {
               uVar20 = glslang::TPoolAllocator::allocate(uVar20);
            }

            lVar25 = 0;
            lVar26 = ( lVar26 + -0x10 ) - lVar23;
            do {
               puVar21 = (undefined8*)( lVar23 + 0x10 + lVar25 );
               uVar1 = puVar21[1];
               *(undefined8*)( uVar20 + lVar25 ) = *puVar21;
               ( (undefined8*)( uVar20 + lVar25 ) )[1] = uVar1;
               lVar25 = lVar25 + 0x10;
            }
 while ( lVar26 != lVar25 );
            puVar22[1] = uVar20;
            puVar22[2] = lVar26 + uVar20;
            puVar22[3] = uVar20 + uVar28;
            return;
         }

         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_range_insert");
      }

   }
 else {
      cVar19 = ( **(code**)( lVar26 + 0xe8 ) )(param_1);
      if (cVar19 != '\0') {
         lVar26 = *(long*)param_1;
         lVar23 = *(long*)( param_1 + 0x60 );
         goto LAB_0010667d;
      }

   }

   lVar26 = *(long*)( param_1 + 0x68 );
   if (( byte )((char)param_1[8] - 0xfU) < 2) {
      lVar26 = *(long*)( (long)param_2 * 0x20 + *(long*)( lVar26 + 8 ) );
      uVar7 = *(uint*)( lVar26 + 8 );
      uVar1 = *(undefined8*)( lVar26 + 0x10 );
      uVar2 = *(undefined8*)( lVar26 + 0x18 );
      uVar3 = *(undefined8*)( lVar26 + 0x20 );
      uVar11 = *(undefined8*)( lVar26 + 0x28 );
      *(undefined4*)( this + 0x80 ) = *(undefined4*)( lVar26 + 0x80 );
      uVar12 = *(undefined8*)( lVar26 + 0x30 );
      uVar13 = *(undefined8*)( lVar26 + 0x38 );
      uVar14 = *(undefined8*)( lVar26 + 0x70 );
      uVar15 = *(undefined8*)( lVar26 + 0x78 );
      *(undefined8*)( this + 0x10 ) = uVar1;
      *(undefined8*)( this + 0x18 ) = uVar2;
      uVar16 = *(undefined8*)( lVar26 + 0x40 );
      uVar17 = *(undefined8*)( lVar26 + 0x48 );
      *(undefined8*)( this + 0x20 ) = uVar3;
      *(undefined8*)( this + 0x28 ) = uVar11;
      uVar3 = *(undefined8*)( lVar26 + 0x50 );
      uVar11 = *(undefined8*)( lVar26 + 0x58 );
      uVar1 = *(undefined8*)( lVar26 + 0x68 );
      *(undefined8*)( this + 0x30 ) = uVar12;
      *(undefined8*)( this + 0x38 ) = uVar13;
      *(uint*)( this + 8 ) = *(uint*)( this + 8 ) & 0xffe00000 | uVar7 & 0x1fffff;
      uVar2 = *(undefined8*)( lVar26 + 0x60 );
      *(undefined8*)( this + 0x68 ) = uVar1;
      uVar1 = *(undefined8*)( lVar26 + 0x88 );
      uVar12 = *(undefined8*)( lVar26 + 0x90 );
      *(undefined8*)( this + 0x60 ) = uVar2;
      uVar6 = *(ushort*)( lVar26 + 10 );
      *(undefined8*)( this + 0x40 ) = uVar16;
      *(undefined8*)( this + 0x48 ) = uVar17;
      *(undefined8*)( this + 0x50 ) = uVar3;
      *(undefined8*)( this + 0x58 ) = uVar11;
      *(undefined8*)( this + 0x70 ) = uVar14;
      *(undefined8*)( this + 0x78 ) = uVar15;
      *(undefined8*)( this + 0x88 ) = uVar1;
      *(undefined8*)( this + 0x90 ) = uVar12;
      *(ushort*)( this + 10 ) = uVar6 & 0x7e0 | *(ushort*)( this + 10 ) & 0xf81f;
      return;
   }

   uVar3 = *(undefined8*)( param_1 + 0x10 );
   uVar11 = *(undefined8*)( param_1 + 0x18 );
   uVar7 = *(uint*)( param_1 + 8 );
   uVar1 = *(undefined8*)( param_1 + 0x70 );
   uVar2 = *(undefined8*)( param_1 + 0x60 );
   uVar12 = *(undefined8*)( param_1 + 0x20 );
   uVar13 = *(undefined8*)( param_1 + 0x28 );
   *(undefined4*)( this + 0x80 ) = *(undefined4*)( param_1 + 0x80 );
   TVar4 = param_1[9];
   uVar14 = *(undefined8*)( param_1 + 0x30 );
   uVar15 = *(undefined8*)( param_1 + 0x38 );
   *(undefined8*)( this + 0x10 ) = uVar3;
   *(undefined8*)( this + 0x18 ) = uVar11;
   uVar24 = uVar7 & 0x7ffffff;
   uVar11 = *(undefined8*)( param_1 + 0x40 );
   uVar16 = *(undefined8*)( param_1 + 0x48 );
   uVar3 = *(undefined8*)( param_1 + 0x78 );
   *(undefined8*)( this + 0x20 ) = uVar12;
   *(undefined8*)( this + 0x28 ) = uVar13;
   uVar12 = *(undefined8*)( param_1 + 0x50 );
   uVar13 = *(undefined8*)( param_1 + 0x58 );
   *(undefined8*)( this + 0x30 ) = uVar14;
   *(undefined8*)( this + 0x38 ) = uVar15;
   TVar5 = param_1[10];
   *(undefined8*)( this + 0x40 ) = uVar11;
   *(undefined8*)( this + 0x48 ) = uVar16;
   uVar11 = *(undefined8*)( param_1 + 0x88 );
   uVar14 = *(undefined8*)( param_1 + 0x90 );
   *(undefined8*)( this + 0x50 ) = uVar12;
   *(undefined8*)( this + 0x58 ) = uVar13;
   uVar8 = *(uint*)( this + 8 );
   *(undefined8*)( this + 0x60 ) = uVar2;
   *(long*)( this + 0x68 ) = lVar26;
   *(undefined8*)( this + 0x70 ) = uVar1;
   *(undefined8*)( this + 0x78 ) = uVar3;
   *(undefined8*)( this + 0x88 ) = uVar11;
   *(undefined8*)( this + 0x90 ) = uVar14;
   *(uint*)( this + 8 ) = uVar8 & 0xf8000000 | uVar24;
   if (( byte )(uVar24 >> 8) < 0x10) {
      if (( 1 < ( (byte)TVar4 & 0xf ) ) || ( ( (byte)TVar5 >> 4 & 1 ) != 0 )) {
         *(uint*)( this + 8 ) = *(uint*)( this + 8 ) & 0xffeff0ff | 0x100;
         return;
      }

      if (( ( (byte)TVar5 >> 5 & 1 ) != 0 ) || ( ( (byte)TVar5 >> 6 & 1 ) != 0 )) {
         *(ushort*)( this + 10 ) = *(ushort*)( this + 10 ) & 0xf81f;
         *(undefined8*)( this + 0x88 ) = 0;
      }

   }
 else {
      bVar27 = (byte)TVar5 & 0xf;
      if (param_3) {
         bVar27 = (byte)TVar4 >> 4;
      }

      *(uint*)( this + 8 ) = uVar8 & 0xf8000000 | uVar7 & 0x7f000ff | (uint)bVar27 << 8;
      if (bVar27 == 1) {
         this[10] = ( TType )((byte)this[10] | 0x10);
      }

   }

   return;
}
/* glslang::TReflectionTraverser::countAggregateMembers(glslang::TType const&) */int glslang::TReflectionTraverser::countAggregateMembers(TReflectionTraverser *this, TType *param_1) {
   uint uVar1;
   char cVar2;
   int iVar3;
   uint uVar4;
   int *piVar5;
   int *piVar6;
   TType *pTVar7;
   long lVar8;
   long lVar9;
   int iVar10;
   ulong uVar11;
   int iVar12;
   bool bVar13;
   lVar9 = *(long*)param_1;
   if (*(code**)( lVar9 + 0x128 ) == TType::isStruct) {
      if (1 < ( byte )((char)param_1[8] - 0xfU)) {
         return 1;
      }

   }
 else {
      cVar2 = ( **(code**)( lVar9 + 0x128 ) )(param_1);
      if (cVar2 == '\0') {
         return 1;
      }

      lVar9 = *(long*)param_1;
   }

   uVar1 = *(uint*)( *(long*)( this + 0x40 ) + 8 );
   if (*(code**)( lVar9 + 0x38 ) == TType::getBasicType) {
      uVar4 = (uint)(byte)param_1[8];
   }
 else {
      uVar4 = ( **(code**)( lVar9 + 0x38 ) )(param_1);
   }

   bVar13 = false;
   if (uVar4 == 0x10) {
      if (*(code**)( *(long*)param_1 + 0x58 ) == TType::getQualifier) {
         pTVar7 = param_1 + 0x10;
      }
 else {
         pTVar7 = (TType*)( **(code**)( *(long*)param_1 + 0x58 ) )(param_1);
      }

      bVar13 = ( (byte)pTVar7[8] & 0x7f ) == 6;
   }

   lVar9 = *(long*)( param_1 + 0x68 );
   iVar12 = 0;
   lVar8 = *(long*)( lVar9 + 8 );
   if (lVar8 != *(long*)( lVar9 + 0x10 )) {
      uVar11 = 0;
      do {
         pTVar7 = *(TType**)( lVar8 + uVar11 * 0x20 );
         iVar3 = countAggregateMembers(this, pTVar7);
         lVar8 = *(long*)pTVar7;
         if (*(code**)( lVar8 + 0xe8 ) == TType::isArray) {
            if (*(long*)( pTVar7 + 0x60 ) != 0) {
               LAB_00106a79:if (*(code**)( lVar8 + 0x98 ) == TType::getArraySizes) {
                  lVar8 = *(long*)( pTVar7 + 0x60 );
               }
 else {
                  lVar8 = ( **(code**)( lVar8 + 0x98 ) )(pTVar7);
               }

               piVar6 = *(int**)( *(long*)( lVar8 + 8 ) + 8 );
               if (*piVar6 != 0) {
                  iVar10 = (int)( *(long*)( *(long*)( lVar8 + 8 ) + 0x10 ) - (long)piVar6 >> 4 );
                  if (1 < iVar10) {
                     piVar5 = piVar6 + 4;
                     do {
                        if (*piVar5 == 0) goto LAB_00106ae0;
                        piVar5 = piVar5 + 4;
                     }
 while ( piVar6 + ( ulong )(iVar10 - 2) * 4 + 8 != piVar5 );
                  }

                  if (*(code**)( *(long*)pTVar7 + 0x128 ) == TType::isStruct) {
                     if (( byte )((char)pTVar7[8] - 0xfU) < 2) {
                        LAB_00106b39:if (( ( uVar1 & 1 ) == 0 ) || ( !bVar13 )) {
                           if (*(code**)( *(long*)pTVar7 + 0x98 ) == TType::getArraySizes) {
                              lVar8 = *(long*)( pTVar7 + 0x60 );
                           }
 else {
                              lVar8 = ( **(code**)( *(long*)pTVar7 + 0x98 ) )(pTVar7);
                           }

                           lVar8 = *(long*)( lVar8 + 8 );
                           if (lVar8 != 0) {
                              piVar6 = *(int**)( lVar8 + 8 );
                              iVar10 = (int)( *(long*)( lVar8 + 0x10 ) - (long)piVar6 >> 4 );
                              if (iVar10 < 1) {
                                 iVar10 = 1;
                              }
 else {
                                 piVar5 = piVar6 + ( ulong )(iVar10 - 1) * 4 + 4;
                                 iVar10 = 1;
                                 do {
                                    iVar10 = iVar10 * *piVar6;
                                    piVar6 = piVar6 + 4;
                                 }
 while ( piVar6 != piVar5 );
                              }

                              iVar3 = iVar3 * iVar10;
                           }

                        }

                     }

                  }
 else {
                     cVar2 = ( **(code**)( *(long*)pTVar7 + 0x128 ) )(pTVar7);
                     if (cVar2 != '\0') goto LAB_00106b39;
                  }

               }

            }

         }
 else {
            cVar2 = ( **(code**)( lVar8 + 0xe8 ) )(pTVar7);
            if (cVar2 != '\0') {
               lVar8 = *(long*)pTVar7;
               goto LAB_00106a79;
            }

         }

         LAB_00106ae0:lVar8 = *(long*)( lVar9 + 8 );
         uVar11 = uVar11 + 1;
         iVar12 = iVar12 + iVar3;
      }
 while ( uVar11 < ( ulong )(*(long*)( lVar9 + 0x10 ) - lVar8 >> 5) );
   }

   return iVar12;
}
/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&) */void std::__cxx11::string::string<std::allocator<char>>(string *this, char *param_1, allocator *param_2) {
   size_t __n;
   string *__dest;
   long in_FS_OFFSET;
   size_t local_38;
   long local_30;
   __dest = this + 0x10;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(string**)this = __dest;
   if (param_1 == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   __n = strlen(param_1);
   local_38 = __n;
   if (__n < 0x10) {
      if (__n == 1) {
         this[0x10] = ( string ) * param_1;
         goto LAB_00106d57;
      }

      if (__n == 0) goto LAB_00106d57;
   }
 else {
      __dest = (string*)std::__cxx11::string::_M_create((ulong*)this, ( ulong ) & local_38);
      *(string**)this = __dest;
      *(size_t*)( this + 0x10 ) = local_38;
   }

   memcpy(__dest, param_1, __n);
   __dest = *(string**)this;
   LAB_00106d57:*(size_t*)( this + 8 ) = local_38;
   __dest[local_38] = (string)0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* bool glslang::TType::contains<glslang::TType::containsSampler() const::{lambda(glslang::TType
   const*)#1}>(glslang::TType::containsSampler() const::{lambda(glslang::TType const*)#1}) const */bool glslang::TType::contains<glslang::TType::containsSampler()const::_lambda(glslang::TType_const *)_1_ > ( long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x168) == isTexture) {
    if ((char)param_1[1] == '\x0e') {
      if (*(code **)(lVar2 + 0x40) == getSampler) {
        plVar4 = param_1 + 0x10;
      }
      else {
        plVar4 = (long *)(**(code **)(lVar2 + 0x40))();
      }
      if (((*plVar4 & 0x200000) == 0) && ((*plVar4 & 0x80000) == 0)) {
        return true;
      }
      goto LAB_00106eb0;
    }
    pcVar5 = *(code **)(lVar2 + 0x158);
    if (pcVar5 != isImage) goto LAB_00106f00;
  } ) ;*(undefined4*)( this_00 + 0x80 ) = 0;*(undefined8*)( this_00 + 0x70 ) = uVar17;*(undefined8*)( this_00 + 0x88 ) = 0;*(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this_00 + 0x90 ) = this_00 + 0x80;*(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this_00 + 0x98 ) = this_00 + 0x80;*(undefined8*)( this_00 + 0xa0 ) = 0;*(_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>**)( this + 0x50 ) = this_00;p_Var6 = *(_Rb_tree**)( param_1 + 0x50 );if (p_Var6 != (_Rb_tree*)this_00) {
   std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::operator =(this_00, p_Var6);
}
p_Var3 = (_Rb_tree*)( this_00 + 0x38 );if (p_Var3 != p_Var6 + 0x38) {
   local_68 = *(_Rb_tree_node**)( this_00 + 0x50 );
   lStack_60 = *(long*)( this_00 + 0x60 );
   if (local_68 == (_Rb_tree_node*)0x0) {
      lStack_60 = 0;
   }
 else {
      lVar29 = *(long*)( lStack_60 + 0x10 );
      *(undefined8*)( local_68 + 8 ) = 0;
      if (lVar29 != 0) {
         lStack_60 = lVar29;
      }

   }

   *(undefined8*)( this_00 + 0x50 ) = 0;
   p_Var7 = *(_Rb_tree_node**)( p_Var6 + 0x50 );
   *(_Rb_tree_node_base**)( this_00 + 0x58 ) = p_Var2;
   *(_Rb_tree_node_base**)( this_00 + 0x60 ) = p_Var2;
   *(undefined8*)( this_00 + 0x68 ) = 0;
   p_Stack_58 = p_Var3;
   if (p_Var7 != (_Rb_tree_node*)0x0) {
      p_Var18 = std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_M_copy<false,std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_Reuse_or_alloc_node>(p_Var7, p_Var2, (_Reuse_or_alloc_node*)&local_68);
      p_Var7 = p_Var18;
      do {
         p_Var27 = p_Var7;
         p_Var7 = *(_Rb_tree_node**)( p_Var27 + 0x10 );
      }
 while ( p_Var7 != (_Rb_tree_node*)0x0 );
      *(_Rb_tree_node**)( this_00 + 0x58 ) = p_Var27;
      p_Var7 = p_Var18;
      do {
         p_Var27 = p_Var7;
         p_Var7 = *(_Rb_tree_node**)( p_Var27 + 0x18 );
      }
 while ( p_Var7 != (_Rb_tree_node*)0x0 );
      uVar17 = *(undefined8*)( p_Var6 + 0x68 );
      *(_Rb_tree_node**)( this_00 + 0x60 ) = p_Var27;
      *(_Rb_tree_node**)( this_00 + 0x50 ) = p_Var18;
      *(undefined8*)( this_00 + 0x68 ) = uVar17;
   }

   std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermTyped_const*>>>>::_M_erase(local_68);
}
if (p_Var6 + 0x70 != (_Rb_tree*)( this_00 + 0x70 )) {
   std::_Rb_tree<int,std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>,std::_Select1st<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>,std::less<int>,glslang::pool_allocator<std::pair<int_const,glslang::TVector<glslang::TIntermConstantUnion_const*>>>>::operator =(this_00 + 0x70, p_Var6 + 0x70);
}
}if (*(long*)( param_1 + 0x90 ) != 0) {
   uVar16 = glslang::GetThreadPoolAllocator();
   pbVar19 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)glslang::TPoolAllocator::allocate(uVar16);
   uVar17 = glslang::GetThreadPoolAllocator();
   pbVar19[0x18] = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>)0x0;
   *(undefined8*)pbVar19 = uVar17;
   *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( pbVar19 + 8 ) = pbVar19 + 0x18;
   *(undefined8*)( pbVar19 + 0x10 ) = 0;
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace(pbVar19, 0, 0, "", 0);
   *(undefined4*)( pbVar19 + 0x28 ) = 0xffffffff;
   uVar17 = glslang::GetThreadPoolAllocator();
   *(undefined8*)( pbVar19 + 0x38 ) = 0;
   *(undefined8*)( pbVar19 + 0x30 ) = uVar17;
   *(undefined8*)( pbVar19 + 0x40 ) = 0;
   *(undefined8*)( pbVar19 + 0x48 ) = 0;
   *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( this + 0x90 ) = pbVar19;
   pbVar8 = *(basic_string**)( param_1 + 0x90 );
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign(pbVar19, pbVar8);
   *(undefined4*)( pbVar19 + 0x28 ) = *(undefined4*)( pbVar8 + 0x28 );
   std::vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>::operator =((vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>*)( pbVar19 + 0x30 ), (vector*)( pbVar8 + 0x30 ));
}
if (*(long*)( param_1 + 0x60 ) != 0) {
   uVar16 = glslang::GetThreadPoolAllocator();
   puVar20 = (undefined8*)glslang::TPoolAllocator::allocate(uVar16);
   *(undefined4*)( puVar20 + 2 ) = 0;
   *(undefined2*)( (long)puVar20 + 0x14 ) = 1;
   *puVar20 = &PTR__TSmallArrayVector_00110110;
   puVar20[1] = 0;
   *(undefined8**)( this + 0x60 ) = puVar20;
   lVar29 = *(long*)( param_1 + 0x60 );
   lVar28 = *(long*)( lVar29 + 8 );
   *(undefined4*)( puVar20 + 2 ) = *(undefined4*)( lVar29 + 0x10 );
   *(undefined1*)( (long)puVar20 + 0x15 ) = *(undefined1*)( lVar29 + 0x15 );
   if (lVar28 == 0) {
      puVar20[1] = 0;
   }
 else {
      uVar16 = glslang::GetThreadPoolAllocator();
      pvVar21 = (vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>>*)glslang::TPoolAllocator::allocate(uVar16);
      uVar17 = glslang::GetThreadPoolAllocator();
      *(undefined8*)( pvVar21 + 8 ) = 0;
      *(undefined8*)pvVar21 = uVar17;
      *(undefined8*)( pvVar21 + 0x10 ) = 0;
      *(undefined8*)( pvVar21 + 0x18 ) = 0;
      puVar20[1] = pvVar21;
      std::vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>>::operator =(pvVar21, *(vector**)( lVar29 + 8 ));
   }

   *(undefined1*)( (long)puVar20 + 0x14 ) = *(undefined1*)( lVar29 + 0x14 );
}
if (*(long*)( param_1 + 0x88 ) != 0) {
   uVar16 = glslang::GetThreadPoolAllocator();
   puVar22 = (undefined4*)glslang::TPoolAllocator::allocate(uVar16);
   *(undefined1(*) [16])( puVar22 + 2 ) = (undefined1[16])0x0;
   *puVar22 = 0;
   *(undefined4**)( this + 0x88 ) = puVar22;
   uVar16 = glslang::GetThreadPoolAllocator();
   puVar20 = (undefined8*)glslang::TPoolAllocator::allocate(uVar16);
   *(undefined2*)( (long)puVar20 + 0x14 ) = 1;
   lVar28 = *(long*)( param_1 + 0x88 );
   *puVar20 = &PTR__TSmallArrayVector_00110110;
   lVar23 = *(long*)( this + 0x88 );
   *(undefined4*)( puVar20 + 2 ) = 0;
   puVar20[1] = 0;
   *(undefined8**)( lVar23 + 8 ) = puVar20;
   lVar29 = *(long*)( lVar28 + 8 );
   lVar11 = *(long*)( lVar29 + 8 );
   *(undefined4*)( puVar20 + 2 ) = *(undefined4*)( lVar29 + 0x10 );
   *(undefined1*)( (long)puVar20 + 0x15 ) = *(undefined1*)( lVar29 + 0x15 );
   if (lVar11 == 0) {
      puVar20[1] = 0;
   }
 else {
      uVar16 = glslang::GetThreadPoolAllocator();
      pvVar21 = (vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>>*)glslang::TPoolAllocator::allocate(uVar16);
      uVar17 = glslang::GetThreadPoolAllocator();
      *(undefined8*)( pvVar21 + 8 ) = 0;
      *(undefined8*)pvVar21 = uVar17;
      *(undefined8*)( pvVar21 + 0x10 ) = 0;
      *(undefined8*)( pvVar21 + 0x18 ) = 0;
      puVar20[1] = pvVar21;
      std::vector<glslang::TArraySize,glslang::pool_allocator<glslang::TArraySize>>::operator =(pvVar21, *(vector**)( lVar29 + 8 ));
      lVar28 = *(long*)( param_1 + 0x88 );
      lVar23 = *(long*)( this + 0x88 );
   }

   pbVar8 = *(basic_string**)( lVar28 + 0x10 );
   *(undefined1*)( (long)puVar20 + 0x14 ) = *(undefined1*)( lVar29 + 0x14 );
   pbVar19 = *(basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>**)( lVar23 + 0x10 );
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign(pbVar19, pbVar8);
   *(undefined4*)( pbVar19 + 0x28 ) = *(undefined4*)( pbVar8 + 0x28 );
   std::vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>::operator =((vector<glslang::TSpirvTypeParameter,glslang::pool_allocator<glslang::TSpirvTypeParameter>>*)( pbVar19 + 0x30 ), (vector*)( pbVar8 + 0x30 ));
   **(uint**)( this + 0x88 ) = (uint)(byte)param_1[8];
}
if (*(code**)( *(long*)param_1 + 0x128 ) == isStruct) {
   if (( byte )((char)param_1[8] - 0xfU) < 2) {
      LAB_00109add:uVar16 = *(ulong*)( param_1 + 0x68 );
      if (uVar16 != 0) {
         pTVar13 = *(TMap**)( param_2 + 0x18 );
         pTVar30 = param_2 + 0x10;
         if (*(TMap**)( param_2 + 0x18 ) != (TMap*)0x0) {
            do {
               while (true) {
                  pTVar31 = pTVar13;
                  pTVar1 = pTVar31 + 0x18;
                  if (uVar16 <= *(ulong*)( pTVar31 + 0x20 )) break;
                  pTVar13 = *(TMap**)pTVar1;
                  pTVar31 = pTVar30;
                  if (*(TMap**)pTVar1 == (TMap*)0x0) goto LAB_00109b29;
               }
;
               pTVar13 = *(TMap**)( pTVar31 + 0x10 );
               pTVar30 = pTVar31;
            }
 while ( *(TMap**)( pTVar31 + 0x10 ) != (TMap*)0x0 );
            LAB_00109b29:if (( param_2 + 0x10 != pTVar31 ) && ( *(ulong*)( pTVar31 + 0x20 ) <= uVar16 )) {
               *(undefined8*)( this + 0x68 ) = *(undefined8*)( pTVar31 + 0x28 );
               goto LAB_001099fa;
            }

         }

         uVar16 = glslang::GetThreadPoolAllocator();
         puVar20 = (undefined8*)glslang::TPoolAllocator::allocate(uVar16);
         uVar17 = glslang::GetThreadPoolAllocator();
         puVar20[1] = 0;
         *puVar20 = uVar17;
         puVar20[2] = 0;
         puVar20[3] = 0;
         *(undefined8**)( this + 0x68 ) = puVar20;
         plVar25 = (long*)std::map<glslang::TVector<glslang::TTypeLoc>*,glslang::TVector<glslang::TTypeLoc>*,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector<glslang::TTypeLoc>*>>>::operator [](( map<glslang::TVector<glslang::TTypeLoc>*,glslang::TVector<glslang::TTypeLoc>*,std::less<glslang::TVector<glslang::TTypeLoc>*>,glslang::pool_allocator<std::pair<glslang::TVector<glslang::TTypeLoc>*const,glslang::TVector < glslang::TTypeLoc>*>> > *)param_2,(TVector**)( param_1 + 0x68 ) ));
         *plVar25 = (long)puVar20;
         uVar17 = _LC22;
         lVar29 = *(long*)( *(long*)( param_1 + 0x68 ) + 8 );
         if (lVar29 != *(long*)( *(long*)( param_1 + 0x68 ) + 0x10 )) {
            uVar16 = 0;
            do {
               lVar28 = uVar16 * 0x20;
               plVar25 = (long*)( lVar29 + 8 + lVar28 );
               lStack_60 = *plVar25;
               p_Stack_58 = (_Rb_tree*)plVar25[1];
               uStack_50 = *(undefined8*)( lVar29 + 0x18 + lVar28 );
               uVar26 = glslang::GetThreadPoolAllocator();
               local_68 = (_Rb_tree_node*)glslang::TPoolAllocator::allocate(uVar26);
               *(undefined***)local_68 = &PTR__TType_00110130;
               ( (TType*)local_68 )[0x20] = ( TType )(( byte )((TType*)local_68)[0x20] & 0xf0);
               *(undefined1(*) [16])( (TType*)local_68 + 0x88 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( (TType*)local_68 + 0x60 ) = (undefined1[16])0x0;
               *(uint*)( (TType*)local_68 + 8 ) = CONCAT22((short)( ( uint ) * (undefined4*)( (TType*)local_68 + 8 ) >> 0x10 ), 0x100) & 0xf800ffff;
               *(undefined8*)( (TType*)local_68 + 0x44 ) = 0xfffff800;
               *(undefined2*)( (TType*)local_68 + 0x58 ) = 0;
               *(undefined1(*) [16])( (TType*)local_68 + 0x70 ) = (undefined1[16])0x0;
               *(ulong*)( (TType*)local_68 + 0x2d ) = *(ulong*)( (TType*)local_68 + 0x2d ) & 0xffffff0000ffc07f | 0xffff001f80;
               *(uint*)( (TType*)local_68 + 0x80 ) = *(uint*)( (TType*)local_68 + 0x80 ) & 0x9fc00000;
               *(undefined8*)( (TType*)local_68 + 0x10 ) = 0;
               *(undefined8*)( (TType*)local_68 + 0x24 ) = uVar17;
               *(ulong*)( (TType*)local_68 + 0x38 ) = ( ulong )(( uint ) * (undefined8*)( (TType*)local_68 + 0x38 ) & 0xfe07ff00) | 0x1f800ff;
               ( (TType*)local_68 )[0x40] = (TType)0x0;
               *(ulong*)( (TType*)local_68 + 0x2c ) = *(ulong*)( (TType*)local_68 + 0x2c ) & 0xffffffff8000 | 0xffff000000004fff;
               *(ulong*)( (TType*)local_68 + 0x34 ) = *(ulong*)( (TType*)local_68 + 0x34 ) | 0x7ff007fffffff;
               *(undefined4*)( (TType*)local_68 + 0x4c ) = 0xffffffff;
               *(ulong*)( (TType*)local_68 + 0x18 ) = *(ulong*)( (TType*)local_68 + 0x18 ) & 0x8000000400000000;
               lVar29 = *(long*)( param_1 + 0x68 );
               *(undefined8*)( (TType*)local_68 + 0x50 ) = 0;
               deepCopy((TType*)local_68, *(TType**)( *(long*)( lVar29 + 8 ) + lVar28 ), param_2);
               pvVar10 = *(vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>**)( this + 0x68 );
               puVar20 = *(undefined8**)( pvVar10 + 0x10 );
               if (puVar20 == *(undefined8**)( pvVar10 + 0x18 )) {
                  std::vector<glslang::TTypeLoc,glslang::pool_allocator<glslang::TTypeLoc>>::_M_realloc_insert<glslang::TTypeLoc_const&>(pvVar10, puVar20, &local_68);
               }
 else {
                  *puVar20 = local_68;
                  puVar20[1] = lStack_60;
                  puVar20[2] = p_Stack_58;
                  puVar20[3] = uStack_50;
                  *(undefined8**)( pvVar10 + 0x10 ) = puVar20 + 4;
               }

               uVar16 = ( ulong )((int)uVar16 + 1);
               lVar29 = *(long*)( *(long*)( param_1 + 0x68 ) + 8 );
            }
 while ( uVar16 < ( ulong )(*(long*)( *(long*)( param_1 + 0x68 ) + 0x10 ) - lVar29 >> 5) );
         }

      }

   }

}
 else {
   cVar15 = ( **(code**)( *(long*)param_1 + 0x128 ) )(param_1);
   if (cVar15 != '\0') goto LAB_00109add;
}
LAB_001099fa:if (*(long*)( param_1 + 0x70 ) != 0) {
   pcVar9 = *(char**)( *(long*)( param_1 + 0x70 ) + 8 );
   uVar16 = glslang::GetThreadPoolAllocator();
   puVar20 = (undefined8*)glslang::TPoolAllocator::allocate(uVar16);
   uVar17 = glslang::GetThreadPoolAllocator();
   *puVar20 = uVar17;
   puVar20[1] = puVar20 + 3;
   if (pcVar9 == (char*)0x0) goto LAB_00109d94;
   sVar24 = strlen(pcVar9);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar20, pcVar9, pcVar9 + sVar24);
   *(undefined8**)( this + 0x70 ) = puVar20;
}
if (*(long*)( param_1 + 0x78 ) != 0) {
   pcVar9 = *(char**)( *(long*)( param_1 + 0x78 ) + 8 );
   uVar16 = glslang::GetThreadPoolAllocator();
   puVar20 = (undefined8*)glslang::TPoolAllocator::allocate(uVar16);
   uVar17 = glslang::GetThreadPoolAllocator();
   *puVar20 = uVar17;
   puVar20[1] = puVar20 + 3;
   if (pcVar9 == (char*)0x0) {
      LAB_00109d94:/* WARNING: Subroutine does not return */std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   sVar24 = strlen(pcVar9);
   std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(puVar20, pcVar9, pcVar9 + sVar24);
   *(undefined8**)( this + 0x78 ) = puVar20;
}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* glslang::TReflectionTraverser::addBlockName(std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&, glslang::TType const&, int) */int glslang::TReflectionTraverser::addBlockName(TReflectionTraverser *this, basic_string *param_1, TType *param_2, int param_3) {
   uint *puVar1;
   undefined1 *puVar2;
   TReflectionTraverser TVar3;
   long lVar4;
   char *pcVar5;
   char ***pppcVar6;
   char cVar7;
   int iVar8;
   undefined4 uVar9;
   char ****ppppcVar10;
   long lVar11;
   long lVar12;
   size_t sVar13;
   char ****ppppcVar14;
   TType *pTVar15;
   int *piVar16;
   char ****ppppcVar17;
   ulong uVar18;
   undefined8 *puVar19;
   int iVar20;
   vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>> *this_00;
   int iVar21;
   uint uVar22;
   char ****ppppcVar23;
   uint uVar24;
   char ****__dest;
   char ****ppppcVar25;
   long in_FS_OFFSET;
   long local_1f0;
   char ***local_1d8[20];
   undefined8 *local_138;
   char ***local_130;
   undefined8 local_128;
   char ***apppcStack_120[3];
   char ***local_108;
   char ***local_100;
   char ***local_f8;
   char **local_f0[3];
   undefined8 *local_d8;
   char ***local_d0;
   undefined8 local_c8;
   char ***apppcStack_c0[3];
   undefined8 *local_a8;
   char ***local_a0;
   undefined8 local_98;
   char ***local_90[7];
   char local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar11 = *(long*)param_2;
   if (*(code**)( lVar11 + 0xe8 ) == TType::isArray) {
      if (*(long*)( param_2 + 0x60 ) != 0) {
         LAB_0010a055:iVar20 = 0;
         iVar21 = 0;
         TType::TType((TType*)local_1d8, param_2, 0, false);
         do {
            if (*(code**)( *(long*)param_2 + 0x78 ) == TType::getOuterArraySize) {
               iVar8 = **(int**)( *(long*)( *(long*)( param_2 + 0x60 ) + 8 ) + 8 );
            }
 else {
               iVar8 = ( **(code**)( *(long*)param_2 + 0x78 ) )(param_2);
            }

            if (iVar8 <= iVar20) goto LAB_00109fcb;
            __snprintf_chk(local_58, 0x10, 2, 0x10, &_LC24, iVar20);
            local_108 = (char***)glslang::GetThreadPoolAllocator();
            local_100 = local_f0;
            sVar13 = strlen(local_58);
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_108, local_58, local_58 + sVar13);
            ppppcVar17 = *(char*****)( param_1 + 0x10 );
            pcVar5 = *(char**)( param_1 + 8 );
            local_138 = (undefined8*)glslang::GetThreadPoolAllocator();
            pppcVar6 = apppcStack_120[0];
            ppppcVar10 = (char****)( (long)ppppcVar17 + 1 );
            local_128 = (char****)0x0;
            apppcStack_120[0] = (char***)( (ulong)apppcStack_120[0] & 0xffffffffffffff00 );
            local_130 = (char***)apppcStack_120;
            if (ppppcVar10 < (char****)0x10) {
               ppppcVar14 = apppcStack_120;
               if (ppppcVar17 == (char****)0xffffffffffffffff) goto LAB_0010a466;
               if (ppppcVar17 != (char****)0x0) {
                  __dest = apppcStack_120;
                  ppppcVar25 = ppppcVar17;
                  if (ppppcVar17 != (char****)0x1) goto LAB_0010a1f4;
                  apppcStack_120[0] = (char***)CONCAT71(SUB87(pppcVar6, 1), *pcVar5);
               }

            }
 else {
               if ((long)ppppcVar10 < 0) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_length_error("basic_string::_M_create");
               }

               if (ppppcVar10 < (char****)0x1e) {
                  ppppcVar10 = (char****)0x1e;
               }

               ppppcVar14 = (char****)glslang::TPoolAllocator::allocate((ulong)local_138);
               if (local_128 == (char****)0x0) {
                  *(undefined1*)ppppcVar14 = *(undefined1*)local_130;
                  ppppcVar23 = local_128;
               }
 else {
                  ppppcVar23 = (char****)0xffffffffffffffff;
                  if ((undefined1*)( (long)local_128 + 1U ) != (undefined1*)0x0) {
                     ppppcVar14 = (char****)memcpy(ppppcVar14, local_130, (long)local_128 + 1U);
                     ppppcVar23 = local_128;
                  }

               }

               apppcStack_120[0] = (char***)ppppcVar10;
               if ((char****)( 0x7fffffffffffffff - (long)ppppcVar23 ) < ppppcVar17) {
                  LAB_0010a466:local_130 = (char***)ppppcVar14;
                  /* WARNING: Subroutine does not return */
                  std::__throw_length_error("basic_string::append");
               }

               ppppcVar25 = (char****)( (long)ppppcVar17 + (long)ppppcVar23 );
               if (ppppcVar14 == apppcStack_120) {
                  ppppcVar10 = (char****)0xf;
               }

               __dest = (char****)( (long)ppppcVar14 + (long)ppppcVar23 );
               local_130 = (char***)ppppcVar14;
               if (ppppcVar10 < ppppcVar25) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_138, (ulong)ppppcVar23, 0, pcVar5, (ulong)ppppcVar17);
                  ppppcVar17 = ppppcVar25;
               }
 else {
                  LAB_0010a1f4:memcpy(__dest, pcVar5, (size_t)ppppcVar17);
                  ppppcVar17 = ppppcVar25;
               }

            }

            *(undefined1*)( (long)local_130 + (long)ppppcVar17 ) = 0;
            ppppcVar14 = (char****)local_130;
            local_128 = ppppcVar17;
            if (ppppcVar17 == (char****)0x7fffffffffffffff) goto LAB_0010a466;
            ppppcVar10 = (char****)( (long)ppppcVar17 + 1 );
            ppppcVar14 = (char****)apppcStack_120[0];
            if ((char****)local_130 == apppcStack_120) {
               ppppcVar14 = (char****)0xf;
            }

            if (ppppcVar14 < ppppcVar10) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_138, (ulong)ppppcVar17, 0, "[", 1);
            }
 else {
               *(undefined1*)( (long)local_130 + (long)ppppcVar17 ) = 0x5b;
            }

            ( (undefined1*)( (long)local_130 + 1 ) )[(long)ppppcVar17] = 0;
            ppppcVar14 = (char****)local_130;
            local_128 = ppppcVar10;
            if ((char****)( 0x7fffffffffffffff - (long)ppppcVar10 ) < local_f8) goto LAB_0010a466;
            ppppcVar17 = (char****)( (long)local_f8 + (long)ppppcVar10 );
            ppppcVar14 = (char****)apppcStack_120[0];
            if ((char****)local_130 == apppcStack_120) {
               ppppcVar14 = (char****)0xf;
            }

            if (ppppcVar14 < ppppcVar17) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_138, (ulong)ppppcVar10, 0, (char*)local_100, (ulong)local_f8);
            }
 else if ((char****)local_f8 != (char****)0x0) {
               if ((char****)local_f8 == (char****)0x1) {
                  *(undefined1*)( (long)local_130 + (long)ppppcVar10 ) = *(undefined1*)local_100;
               }
 else {
                  memcpy((undefined1*)( (long)local_130 + (long)ppppcVar10 ), local_100, (size_t)local_f8);
               }

            }

            pppcVar6 = apppcStack_120[0];
            local_128 = ppppcVar17;
            *(undefined1*)( (long)local_130 + (long)ppppcVar17 ) = 0;
            local_d0 = (char***)apppcStack_c0;
            local_d8 = local_138;
            local_c8 = ppppcVar17;
            if ((char****)local_130 == apppcStack_120) {
               puVar2 = (undefined1*)( (long)ppppcVar17 + 1 );
               uVar22 = (uint)puVar2;
               uVar18 = (ulong)puVar2 & 0xffffffff;
               if (uVar22 < 8) {
                  if (( (ulong)puVar2 & 4 ) == 0) {
                     if (uVar22 != 0) {
                        apppcStack_c0[0] = (char***)CONCAT71(apppcStack_c0[0]._1_7_, apppcStack_120[0]._0_1_);
                        if (( (ulong)puVar2 & 2 ) != 0) {
                           *(undefined2*)( (long)apppcStack_c0 + ( uVar18 - 2 ) ) = *(undefined2*)( (long)apppcStack_120 + ( uVar18 - 2 ) );
                        }

                     }

                  }
 else {
                     apppcStack_c0[0] = (char***)CONCAT44(apppcStack_c0[0]._4_4_, apppcStack_120[0]._0_4_);
                     *(undefined4*)( (long)apppcStack_c0 + ( uVar18 - 4 ) ) = *(undefined4*)( (long)apppcStack_120 + ( uVar18 - 4 ) );
                  }

               }
 else {
                  *(undefined8*)( (long)apppcStack_c0 + ( ( (ulong)puVar2 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)apppcStack_120 + ( ( (ulong)puVar2 & 0xffffffff ) - 8 ) );
                  if (7 < uVar22 - 1) {
                     uVar24 = 0;
                     do {
                        uVar18 = (ulong)uVar24;
                        uVar24 = uVar24 + 8;
                        *(undefined8*)( (long)apppcStack_c0 + uVar18 ) = *(undefined8*)( (long)local_130 + uVar18 );
                     }
 while ( uVar24 < ( uVar22 - 1 & 0xfffffff8 ) );
                  }

               }

               local_128 = (char****)0x0;
               apppcStack_120[0] = (char***)( (ulong)apppcStack_120[0] & 0xffffffffffffff00 );
               ppppcVar10 = (char****)0xf;
            }
 else {
               local_d0 = local_130;
               local_128 = (char****)0x0;
               apppcStack_120[0] = (char***)( (ulong)apppcStack_120[0] & 0xffffffffffffff00 );
               apppcStack_c0[0] = pppcVar6;
               ppppcVar14 = apppcStack_120;
               if (ppppcVar17 == (char****)0x7fffffffffffffff) goto LAB_0010a466;
               ppppcVar10 = (char****)pppcVar6;
               if ((char****)local_130 == apppcStack_c0) {
                  ppppcVar10 = (char****)0xf;
               }

            }

            apppcStack_120[0] = (char***)( (ulong)pppcVar6 & 0xffffffffffffff00 );
            ppppcVar14 = (char****)( (long)ppppcVar17 + 1 );
            local_128 = (char****)0x0;
            if (ppppcVar10 < ppppcVar14) {
               local_130 = (char***)apppcStack_120;
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_d8, (ulong)ppppcVar17, 0, "]", 1);
            }
 else {
               *(undefined1*)( (long)local_d0 + (long)ppppcVar17 ) = 0x5d;
               local_130 = (char***)apppcStack_120;
            }

            local_c8 = ppppcVar14;
            *(undefined1*)( (long)local_d0 + (long)ppppcVar14 ) = 0;
            local_a0 = (char***)local_90;
            local_a8 = local_d8;
            if ((char****)local_d0 == apppcStack_c0) {
               puVar2 = (undefined1*)( (long)ppppcVar17 + 2 );
               uVar22 = (uint)puVar2;
               if (uVar22 < 8) {
                  if (( (ulong)puVar2 & 4 ) == 0) {
                     if (uVar22 != 0) {
                        local_90[0] = (char***)CONCAT71(local_90[0]._1_7_, apppcStack_c0[0]._0_1_);
                        if (( (ulong)puVar2 & 2 ) != 0) {
                           *(undefined2*)( (long)local_90 + ( ( (ulong)puVar2 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)apppcStack_c0 + ( ( (ulong)puVar2 & 0xffffffff ) - 2 ) );
                        }

                     }

                  }
 else {
                     local_90[0] = (char***)CONCAT44(local_90[0]._4_4_, apppcStack_c0[0]._0_4_);
                     *(undefined4*)( (long)local_90 + ( ( (ulong)puVar2 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)apppcStack_c0 + ( ( (ulong)puVar2 & 0xffffffff ) - 4 ) );
                  }

               }
 else {
                  *(undefined8*)( (long)local_90 + ( ( (ulong)puVar2 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)apppcStack_c0 + ( ( (ulong)puVar2 & 0xffffffff ) - 8 ) );
                  if (7 < uVar22 - 1) {
                     uVar24 = 0;
                     do {
                        uVar18 = (ulong)uVar24;
                        uVar24 = uVar24 + 8;
                        *(undefined8*)( (long)local_90 + uVar18 ) = *(undefined8*)( (long)local_d0 + uVar18 );
                     }
 while ( uVar24 < ( uVar22 - 1 & 0xfffffff8 ) );
                  }

               }

            }
 else {
               local_a0 = local_d0;
               local_90[0] = apppcStack_c0[0];
            }

            local_c8 = (char****)0x0;
            apppcStack_c0[0] = (char***)( (ulong)apppcStack_c0[0] & 0xffffffffffffff00 );
            local_d0 = (char***)apppcStack_c0;
            local_98 = ppppcVar14;
            iVar8 = addBlockName(this, (basic_string*)&local_a8, (TType*)local_1d8, param_3);
            if (iVar20 == 0) {
               iVar21 = iVar8;
            }

            iVar20 = iVar20 + 1;
         }
 while ( true );
      }

   }
 else {
      cVar7 = ( **(code**)( lVar11 + 0xe8 ) )(param_2);
      if (cVar7 != '\0') goto LAB_0010a055;
      lVar11 = *(long*)param_2;
   }

   lVar4 = *(long*)( this + 0x40 );
   if (*(code**)( lVar11 + 0x58 ) == TType::getQualifier) {
      pTVar15 = param_2 + 0x10;
      local_1f0 = lVar4;
   }
 else {
      pTVar15 = (TType*)( **(code**)( lVar11 + 0x58 ) )(param_2);
      local_1f0 = *(long*)( this + 0x40 );
   }

   if (( ( *(byte*)( lVar4 + 8 ) & 8 ) == 0 ) || ( ( (byte)pTVar15[8] & 0x7f ) != 6 )) {
      this_00 = (vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>*)( lVar4 + 0x110 );
   }
 else {
      this_00 = (vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>*)( lVar4 + 0x140 );
   }

   pcVar5 = *(char**)( param_1 + 8 );
   local_138 = &local_128;
   if (pcVar5 == (char*)0x0) goto LAB_0010aaeb;
   ppppcVar10 = (char****)strlen(pcVar5);
   local_1d8[0] = (char***)ppppcVar10;
   if (ppppcVar10 < (char****)0x10) {
      puVar19 = &local_128;
      if (ppppcVar10 == (char****)0x1) {
         local_128 = (char****)CONCAT71(local_128._1_7_, *pcVar5);
      }
 else if (ppppcVar10 != (char****)0x0) goto LAB_0010a027;
   }
 else {
      local_138 = (undefined8*)std::__cxx11::string::_M_create((ulong*)&local_138, (ulong)local_1d8);
      local_128 = (char****)local_1d8[0];
      puVar19 = local_138;
      LAB_0010a027:memcpy(puVar19, pcVar5, (size_t)ppppcVar10);
      puVar19 = local_138;
   }

   *(undefined1*)( (long)puVar19 + (long)local_1d8[0] ) = 0;
   local_130 = local_1d8[0];
   lVar11 = std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::find((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)( local_1f0 + 0x68 ), (string*)&local_138);
   if (local_138 != &local_128) {
      operator_delete(local_138, ( ulong )((long)local_128 + 1));
   }

   lVar4 = *(long*)( this + 0x40 );
   pcVar5 = *(char**)( param_1 + 8 );
   local_108 = (char***)&local_f8;
   if (pcVar5 == (char*)0x0) goto LAB_0010aaeb;
   ppppcVar10 = (char****)strlen(pcVar5);
   local_1d8[0] = (char***)ppppcVar10;
   if (ppppcVar10 < (char****)0x10) {
      ppppcVar17 = &local_f8;
      if (ppppcVar10 == (char****)0x1) {
         local_f8 = (char***)CONCAT71(local_f8._1_7_, *pcVar5);
      }
 else if (ppppcVar10 != (char****)0x0) goto LAB_0010a5c1;
   }
 else {
      local_108 = (char***)std::__cxx11::string::_M_create((ulong*)&local_108, (ulong)local_1d8);
      local_f8 = local_1d8[0];
      ppppcVar17 = (char****)local_108;
      LAB_0010a5c1:memcpy(ppppcVar17, pcVar5, (size_t)ppppcVar10);
      ppppcVar17 = (char****)local_108;
   }

   *(undefined1*)( (long)ppppcVar17 + (long)local_1d8[0] ) = 0;
   local_100 = local_1d8[0];
   lVar12 = std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::find((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)( lVar4 + 0x68 ), (string*)&local_108);
   if ((char****)local_108 != &local_f8) {
      operator_delete(local_108, ( ulong )((long)local_f8 + 1));
   }

   if (lVar4 + 0x70 != lVar12) {
      iVar21 = *(int*)( lVar11 + 0x40 );
      if (this[0x78] != (TReflectionTraverser)0x0) {
         puVar1 = (uint*)( (long)iVar21 * 0x50 + *(long*)this_00 + 0x44 );
         *puVar1 = *puVar1 | 1 << ( ( byte ) * *(undefined4**)( this + 0x38 ) & 0x1f );
      }

      goto LAB_00109fcb;
   }

   iVar21 = (int)( *(long*)( this_00 + 8 ) - *(long*)this_00 >> 4 ) * -0x33333333;
   lVar11 = *(long*)( this + 0x40 );
   pcVar5 = *(char**)( param_1 + 8 );
   local_a8 = &local_98;
   if (pcVar5 == (char*)0x0) goto LAB_0010aaeb;
   ppppcVar10 = (char****)strlen(pcVar5);
   local_1d8[0] = (char***)ppppcVar10;
   if (ppppcVar10 < (char****)0x10) {
      puVar19 = &local_98;
      if (ppppcVar10 == (char****)0x1) {
         local_98 = (char****)CONCAT71(local_98._1_7_, *pcVar5);
      }
 else if (ppppcVar10 != (char****)0x0) goto LAB_0010aa18;
   }
 else {
      local_a8 = (undefined8*)std::__cxx11::string::_M_create((ulong*)&local_a8, (ulong)local_1d8);
      local_98 = (char****)local_1d8[0];
      puVar19 = local_a8;
      LAB_0010aa18:memcpy(puVar19, pcVar5, (size_t)ppppcVar10);
      puVar19 = local_a8;
   }

   *(undefined1*)( (long)puVar19 + (long)local_1d8[0] ) = 0;
   local_a0 = local_1d8[0];
   piVar16 = (int*)std::map<std::__cxx11::string,int,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::operator []((map<std::__cxx11::string,int,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)( lVar11 + 0x68 ), (string*)&local_a8);
   *piVar16 = iVar21;
   if (local_a8 != &local_98) {
      operator_delete(local_a8, ( ulong )((long)local_98 + 1));
   }

   pcVar5 = *(char**)( param_1 + 8 );
   local_d8 = &local_c8;
   if (pcVar5 == (char*)0x0) {
      LAB_0010aaeb:/* WARNING: Subroutine does not return */std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   ppppcVar10 = (char****)strlen(pcVar5);
   local_1d8[0] = (char***)ppppcVar10;
   if (ppppcVar10 < (char****)0x10) {
      puVar19 = &local_c8;
      if (ppppcVar10 == (char****)0x1) {
         local_c8 = (char****)CONCAT71(local_c8._1_7_, *pcVar5);
      }
 else if (ppppcVar10 != (char****)0x0) goto LAB_0010a9e8;
   }
 else {
      local_d8 = (undefined8*)std::__cxx11::string::_M_create((ulong*)&local_d8, (ulong)local_1d8);
      local_c8 = (char****)local_1d8[0];
      puVar19 = local_d8;
      LAB_0010a9e8:memcpy(puVar19, pcVar5, (size_t)ppppcVar10);
      puVar19 = local_d8;
   }

   *(undefined1*)( (long)puVar19 + (long)local_1d8[0] ) = 0;
   local_d0 = local_1d8[0];
   TObjectReflection::TObjectReflection((TObjectReflection*)&local_a8, (string*)&local_d8, param_2, -1, -1, param_3, iVar21);
   std::vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>::emplace_back<glslang::TObjectReflection>(this_00, (TObjectReflection*)&local_a8);
   if (local_a8 != &local_98) {
      operator_delete(local_a8, ( ulong )((long)local_98 + 1));
   }

   if (local_d8 != &local_c8) {
      operator_delete(local_d8, ( ulong )((long)local_c8 + 1));
   }

   uVar9 = countAggregateMembers(this, param_2);
   TVar3 = this[0x78];
   lVar11 = *(long*)( this_00 + 8 );
   *(undefined4*)( lVar11 + -0x1c ) = uVar9;
   if (TVar3 != (TReflectionTraverser)0x0) {
      puVar1 = (uint*)( lVar11 + -0xc );
      *puVar1 = *puVar1 | 1 << ( ( byte ) * *(undefined4**)( this + 0x38 ) & 0x1f );
   }

   LAB_00109fcb:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar21;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* glslang::TReflectionTraverser::blowUpActiveAggregate(glslang::TType const&,
   std::__cxx11::basic_string<char, std::char_traits<char>, glslang::std::allocator<char> > const&,
   glslang::TList<glslang::TIntermBinary*> const&,
   std::_List_const_iterator<glslang::TIntermBinary*>, int, int, int, int, int,
   glslang::TStorageQualifier, bool) */void glslang::TReflectionTraverser::blowUpActiveAggregate(TReflectionTraverser *this, TType *param_1, long param_2, long param_3, long *param_5, int param_6, int param_7, int param_8, int param_9, int param_10, uint param_11, char param_12) {
   uint *puVar1;
   TType TVar2;
   undefined4 uVar3;
   undefined1 *__src;
   char *__src_00;
   ulong *puVar4;
   byte bVar5;
   char cVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   int iVar10;
   long lVar11;
   size_t sVar12;
   ulong uVar13;
   long *plVar14;
   TType *pTVar15;
   code *pcVar16;
   long *plVar17;
   long *plVar18;
   ulong uVar19;
   long lVar20;
   int *piVar21;
   void *pvVar22;
   long lVar23;
   TType *pTVar24;
   uint uVar25;
   ulong *puVar26;
   ulong uVar27;
   uint uVar28;
   uint uVar29;
   long lVar30;
   int iVar31;
   vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>> *this_00;
   long lVar32;
   long in_FS_OFFSET;
   bool bVar33;
   bool bVar34;
   ulong *local_550;
   int local_548;
   uint local_520;
   undefined4 local_4fc;
   int local_4e8[2];
   char local_4e0;
   long local_488;
   int local_448[40];
   ulong local_3a8;
   ulong *local_3a0;
   ulong local_398;
   ulong local_390[3];
   ulong local_378;
   ulong *local_370;
   ulong local_368;
   ulong local_360[3];
   undefined8 local_348;
   ulong *local_340;
   ulong local_338;
   ulong local_330[3];
   undefined8 local_318;
   ulong *local_310;
   undefined8 local_308;
   uint uStack_300;
   undefined4 uStack_2fc;
   undefined8 local_2e8;
   char *local_2e0;
   ulong local_2d8;
   char local_2d0[24];
   undefined8 local_2b8;
   ulong *local_2b0;
   undefined8 local_2a8;
   ulong auStack_2a0[4];
   ulong *local_280;
   undefined8 local_278;
   ulong local_270[4];
   char *local_250;
   ulong local_248;
   char local_240[24];
   undefined8 local_228;
   ulong *local_220;
   undefined8 local_218;
   uint uStack_210;
   undefined4 uStack_20c;
   undefined8 local_1f8;
   char *local_1f0;
   ulong local_1e8;
   char local_1e0[24];
   undefined8 local_1c8;
   ulong *local_1c0;
   undefined8 local_1b8;
   ulong auStack_1b0[4];
   ulong *local_190;
   undefined8 local_188;
   ulong local_180[3];
   ulong local_168;
   ulong *local_160;
   ulong local_158;
   ulong local_150[3];
   undefined8 *local_138;
   ulong *local_130;
   undefined8 local_128;
   uint uStack_120;
   undefined4 uStack_11c;
   undefined8 local_108;
   char *local_100;
   ulong local_f8;
   char local_f0[24];
   undefined8 *local_d8;
   ulong *local_d0;
   undefined8 local_c8;
   ulong auStack_c0[3];
   undefined8 *local_a8;
   ulong *local_a0;
   undefined8 local_98;
   ulong local_90[7];
   char local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = *(uint*)( *(long*)( this + 0x40 ) + 8 );
   local_520 = uVar9 & 1;
   if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
      uVar28 = (uint)(byte)param_1[8];
   }
 else {
      uVar28 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
   }

   bVar34 = false;
   if (uVar28 == 0x10) {
      if (*(code**)( *(long*)param_1 + 0x58 ) == TType::getQualifier) {
         pTVar15 = param_1 + 0x10;
      }
 else {
         pTVar15 = (TType*)( **(code**)( *(long*)param_1 + 0x58 ) )(param_1);
      }

      bVar34 = ( (byte)pTVar15[8] & 0x7f ) == 6;
   }

   local_3a8 = glslang::GetThreadPoolAllocator();
   __src = *(undefined1**)( param_2 + 8 );
   uVar19 = *(ulong*)( param_2 + 0x10 );
   local_3a0 = local_390;
   if (uVar19 < 0x10) {
      if (uVar19 == 1) {
         local_390[0] = CONCAT71(local_390[0]._1_7_, *__src);
      }
 else if (uVar19 != 0) goto LAB_0010c010;
   }
 else {
      if ((long)uVar19 < 0) {
         LAB_0010d60c:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
      }

      local_3a0 = (ulong*)glslang::TPoolAllocator::allocate(local_3a8);
      local_390[0] = uVar19;
      LAB_0010c010:memcpy(local_3a0, __src, uVar19);
   }

   *(undefined1*)( (long)local_3a0 + uVar19 ) = 0;
   plVar14 = (long*)( param_3 + 8 );
   pTVar15 = param_1;
   local_398 = uVar19;
   if (param_5 != plVar14) {
      LAB_0010ac5c:do {
         plVar18 = (long*)param_5[2];
         if (*(code**)( *plVar18 + 0xf0 ) == TIntermTyped::getType) {
            pTVar15 = (TType*)( plVar18 + 4 );
         }
 else {
            pTVar15 = (TType*)( **(code**)( *plVar18 + 0xf0 ) )(plVar18);
         }

         iVar7 = (int)plVar18[0x17];
         if (iVar7 == 0xb7) {
            if (*(code**)( *plVar18 + 400 ) == TIntermBinary::getLeft) {
               plVar14 = (long*)plVar18[0x18];
            }
 else {
               plVar14 = (long*)( **(code**)( *plVar18 + 400 ) )(plVar18);
            }

            if (*(code**)( *plVar14 + 0xf0 ) == TIntermTyped::getType) {
               plVar14 = plVar14 + 4;
            }
 else {
               plVar14 = (long*)( **(code**)( *plVar14 + 0xf0 ) )();
            }

            if (*(code**)( *plVar14 + 0x38 ) == TType::getBasicType) {
               uVar28 = ( uint ) * (byte*)( plVar14 + 1 );
            }
 else {
               uVar28 = ( **(code**)( *plVar14 + 0x38 ) )(plVar14);
            }

            iVar7 = 0;
            if (uVar28 != 0x10) {
               if (*(code**)( *plVar14 + 0x58 ) == TType::getQualifier) {
                  plVar17 = plVar14 + 2;
               }
 else {
                  plVar17 = (long*)( **(code**)( *plVar14 + 0x58 ) )(plVar14);
               }

               bVar5 = *(byte*)( (long)plVar17 + 0xf ) >> 4;
               pcVar16 = *(code**)( *(long*)param_1 + 0x58 );
               if (( bVar5 & 7 ) == 0) {
                  if (pcVar16 == TType::getQualifier) {
                     pTVar24 = param_1 + 0x10;
                  }
 else {
                     pTVar24 = (TType*)( *pcVar16 )(param_1);
                     pcVar16 = *(code**)( *(long*)param_1 + 0x58 );
                  }

                  bVar33 = ( (byte)pTVar24[0xf] & 0x70 ) == 0x10;
                  if (pcVar16 == TType::getQualifier) goto LAB_0010b70c;
                  LAB_0010c05b:pTVar24 = (TType*)( *pcVar16 )(param_1);
               }
 else {
                  bVar33 = ( bVar5 & 7 ) == 1;
                  if (pcVar16 != TType::getQualifier) goto LAB_0010c05b;
                  LAB_0010b70c:pTVar24 = param_1 + 0x10;
               }

               glslang::TIntermediate::getMemberAlignment(plVar14, local_4e8, local_448, (byte)pTVar24[0x10] & 0xf, bVar33);
               iVar7 = local_448[0];
            }

            iVar10 = iVar7;
            if (param_10 != 0) {
               iVar10 = param_10;
            }

            iVar31 = 0;
            goto LAB_0010b764;
         }

         if (iVar7 == 0xb8) {
            if (*(code**)( *plVar18 + 0x198 ) == TIntermBinary::getRight) {
               plVar17 = (long*)plVar18[0x19];
            }
 else {
               plVar17 = (long*)( **(code**)( *plVar18 + 0x198 ) )(plVar18);
            }

            lVar11 = ( **(code**)( *plVar17 + 0x28 ) )();
            iVar7 = **(int**)( *(long*)( lVar11 + 0xc0 ) + 8 );
            if (-1 < param_6) {
               if (*(code**)( *plVar18 + 400 ) == TIntermBinary::getLeft) {
                  plVar17 = (long*)plVar18[0x18];
               }
 else {
                  plVar17 = (long*)( **(code**)( *plVar18 + 400 ) )(plVar18);
               }

               if (*(code**)( *plVar17 + 0xf0 ) == TIntermTyped::getType) {
                  pTVar24 = (TType*)( plVar17 + 4 );
               }
 else {
                  pTVar24 = (TType*)( **(code**)( *plVar17 + 0xf0 ) )();
               }

               iVar10 = glslang::TIntermediate::getOffset(pTVar24, iVar7);
               param_6 = param_6 + iVar10;
            }

            uVar19 = local_398;
            if (local_398 != 0) {
               puVar4 = local_310;
               if (local_398 == 0x7fffffffffffffff) goto LAB_0010d536;
               uVar27 = local_398 + 1;
               uVar13 = local_390[0];
               if (local_3a0 == local_390) {
                  uVar13 = 0xf;
               }

               if (uVar13 < uVar27) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_3a8, local_398, 0, ".", 1);
               }
 else {
                  *(undefined1*)( (long)local_3a0 + local_398 ) = 0x2e;
               }

               *(undefined1*)( (long)local_3a0 + uVar19 + 1 ) = 0;
               local_398 = uVar27;
            }

            if (*(code**)( *plVar18 + 400 ) == TIntermBinary::getLeft) {
               plVar17 = (long*)plVar18[0x18];
               pcVar16 = *(code**)( *plVar17 + 0xf0 );
               if (pcVar16 != TIntermTyped::getType) goto LAB_0010c560;
               LAB_0010bd88:plVar17 = plVar17 + 4;
            }
 else {
               plVar17 = (long*)( **(code**)( *plVar18 + 400 ) )(plVar18);
               pcVar16 = *(code**)( *plVar17 + 0xf0 );
               if (pcVar16 == TIntermTyped::getType) goto LAB_0010bd88;
               LAB_0010c560:plVar17 = (long*)( *pcVar16 )();
            }

            plVar17 = *(long**)( (long)iVar7 * 0x20 + *(long*)( plVar17[0xd] + 8 ) );
            pcVar16 = *(code**)( *plVar17 + 0x30 );
            if (pcVar16 == TType::getFieldName_abi_cxx11_) {
               lVar11 = plVar17[0xe];
            }
 else {
               lVar11 = ( *pcVar16 )();
            }

            uVar19 = *(ulong*)( lVar11 + 0x10 );
            __src_00 = *(char**)( lVar11 + 8 );
            puVar4 = local_310;
            if (0x7fffffffffffffff - local_398 < uVar19) goto LAB_0010d536;
            uVar27 = uVar19 + local_398;
            uVar13 = local_390[0];
            if (local_3a0 == local_390) {
               uVar13 = 0xf;
            }

            if (uVar13 < uVar27) {
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_3a8, local_398, 0, __src_00, uVar19);
            }
 else if (uVar19 != 0) {
               if (uVar19 == 1) {
                  *(char*)( (long)local_3a0 + local_398 ) = *__src_00;
               }
 else {
                  memcpy((char*)( (long)local_3a0 + local_398 ), __src_00, uVar19);
               }

            }

            *(undefined1*)( (long)local_3a0 + uVar27 ) = 0;
            local_398 = uVar27;
            if (*(code**)( *plVar18 + 400 ) == TIntermBinary::getLeft) {
               plVar18 = (long*)plVar18[0x18];
            }
 else {
               plVar18 = (long*)( **(code**)( *plVar18 + 400 ) )(plVar18);
            }

            if (*(code**)( *plVar18 + 0xf0 ) == TIntermTyped::getType) {
               plVar18 = plVar18 + 4;
            }
 else {
               plVar18 = (long*)( **(code**)( *plVar18 + 0xf0 ) )();
            }

            if (*(code**)( *plVar18 + 0x38 ) == TType::getBasicType) {
               uVar28 = ( uint ) * (byte*)( plVar18 + 1 );
            }
 else {
               uVar28 = ( **(code**)( *plVar18 + 0x38 ) )();
            }

            if (uVar28 != 0x10) {
               pcVar16 = *(code**)( *(long*)pTVar15 + 0xe8 );
               pTVar24 = pTVar15;
               if (pcVar16 == TType::isArray) {
                  param_5 = (long*)*param_5;
                  if (*(long*)( pTVar15 + 0x60 ) != 0) {
                     bVar34 = false;
                  }

               }
 else {
                  LAB_0010c113:cVar6 = ( *pcVar16 )(pTVar24);
                  param_5 = (long*)*param_5;
                  if (cVar6 != '\0') {
                     bVar34 = false;
                  }

               }

               if (param_5 == plVar14) break;
               goto LAB_0010ac5c;
            }

         }
 else if (iVar7 == 0xb6) {
            if (*(code**)( *plVar18 + 400 ) == TIntermBinary::getLeft) {
               plVar17 = (long*)plVar18[0x18];
            }
 else {
               plVar17 = (long*)( **(code**)( *plVar18 + 400 ) )(plVar18);
            }

            if (*(code**)( *plVar17 + 0xf0 ) == TIntermTyped::getType) {
               pTVar24 = (TType*)( plVar17 + 4 );
            }
 else {
               pTVar24 = (TType*)( **(code**)( *plVar17 + 0xf0 ) )();
            }

            iVar7 = getArrayStride(param_1, pTVar24);
            if (*(code**)( *plVar18 + 0x198 ) == TIntermBinary::getRight) {
               plVar17 = (long*)plVar18[0x19];
            }
 else {
               plVar17 = (long*)( **(code**)( *plVar18 + 0x198 ) )(plVar18);
            }

            lVar11 = ( **(code**)( *plVar17 + 0x28 ) )();
            iVar10 = **(int**)( *(long*)( lVar11 + 0xc0 ) + 8 );
            if (*(code**)( *(long*)pTVar15 + 0x38 ) == TType::getBasicType) {
               uVar28 = (uint)(byte)pTVar15[8];
            }
 else {
               uVar28 = ( **(code**)( *(long*)pTVar15 + 0x38 ) )(pTVar15);
            }

            if (uVar28 != 0x10) {
               if (( ( uVar9 & 1 ) == 0 ) || ( !bVar34 )) {
                  if (local_520 == 0) {
                     if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
                        uVar28 = (uint)(byte)param_1[8];
                     }
 else {
                        uVar28 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
                     }

                     if (uVar28 == 0x10) goto LAB_0010b08f;
                  }

                  __snprintf_chk(local_58, 0x10, 2, 0x10, &_LC24, iVar10);
                  local_1f8 = glslang::GetThreadPoolAllocator();
                  local_1f0 = local_1e0;
                  sVar12 = strlen(local_58);
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_1f8, local_58, local_58 + sVar12);
                  local_228 = glslang::GetThreadPoolAllocator();
                  local_220 = (ulong*)&uStack_210;
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_228, &_LC25);
                  puVar4 = local_310;
                  if (0x7fffffffffffffff - local_218 < local_1e8) goto LAB_0010d536;
                  uVar19 = local_1e8 + local_218;
                  if (local_220 == (ulong*)&uStack_210) {
                     uVar27 = 0xf;
                  }
 else {
                     uVar27 = CONCAT44(uStack_20c, uStack_210);
                  }

                  if (uVar27 < uVar19) {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_228, local_218, 0, local_1f0, local_1e8);
                  }
 else if (local_1e8 != 0) {
                     if (local_1e8 == 1) {
                        *(char*)( (long)local_220 + local_218 ) = *local_1f0;
                     }
 else {
                        memcpy((char*)( (long)local_220 + local_218 ), local_1f0, local_1e8);
                     }

                  }

                  uVar28 = uStack_210;
                  puVar26 = local_220;
                  *(char*)( (long)local_220 + uVar19 ) = '\0';
                  local_1c0 = auStack_1b0;
                  local_1c8 = local_228;
                  local_1b8 = uVar19;
                  if (local_220 == (ulong*)&uStack_210) {
                     uVar27 = uVar19 + 1;
                     uVar29 = (uint)uVar27;
                     uVar13 = uVar27 & 0xffffffff;
                     if (uVar29 < 8) {
                        if (( uVar27 & 4 ) == 0) {
                           if (uVar29 != 0) {
                              auStack_1b0[0] = CONCAT71(auStack_1b0[0]._1_7_, (undefined1)uStack_210);
                              if (( uVar27 & 2 ) != 0) {
                                 *(undefined2*)( (long)auStack_1b0 + ( uVar13 - 2 ) ) = *(undefined2*)( (long)&local_218 + uVar13 + 6 );
                              }

                           }

                        }
 else {
                           auStack_1b0[0] = CONCAT44(auStack_1b0[0]._4_4_, uStack_210);
                           *(undefined4*)( (long)auStack_1b0 + ( uVar13 - 4 ) ) = *(undefined4*)( (long)&local_218 + uVar13 + 4 );
                        }

                     }
 else {
                        *(undefined8*)( (long)auStack_1b0 + ( ( uVar27 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)&local_218 + ( uVar27 & 0xffffffff ) );
                        if (7 < uVar29 - 1) {
                           uVar25 = 0;
                           do {
                              uVar27 = (ulong)uVar25;
                              uVar25 = uVar25 + 8;
                              *(undefined8*)( (long)auStack_1b0 + uVar27 ) = *(undefined8*)( (long)local_220 + uVar27 );
                           }
 while ( uVar25 < ( uVar29 - 1 & 0xfffffff8 ) );
                        }

                     }

                     uVar27 = 0xf;
                     local_220 = (ulong*)&uStack_210;
                     local_218 = 0;
                     uStack_210 = uStack_210 & 0xffffff00;
                  }
 else {
                     local_1c0 = local_220;
                     uVar27 = CONCAT44(uStack_20c, uStack_210);
                     local_220 = (ulong*)&uStack_210;
                     local_218 = 0;
                     uStack_210 = uStack_210 & 0xffffff00;
                     auStack_1b0[0] = uVar27;
                     puVar4 = local_310;
                     if (uVar19 == 0x7fffffffffffffff) goto LAB_0010d536;
                     if (puVar26 == auStack_1b0) {
                        uVar27 = 0xf;
                     }

                  }

                  uStack_210 = uVar28 & 0xffffff00;
                  uVar13 = uVar19 + 1;
                  local_218 = 0;
                  if (uVar27 < uVar13) {
                     local_220 = (ulong*)&uStack_210;
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_1c8, uVar19, 0, "]", 1);
                  }
 else {
                     *(char*)( (long)local_1c0 + uVar19 ) = ']';
                     local_220 = (ulong*)&uStack_210;
                  }

                  local_1b8 = uVar13;
                  *(char*)( (long)local_1c0 + uVar13 ) = '\0';
                  auStack_1b0[3] = local_1c8;
                  local_190 = local_180;
                  if (local_1c0 == auStack_1b0) {
                     uVar19 = uVar19 + 2;
                     uVar28 = (uint)uVar19;
                     if (uVar28 < 8) {
                        if (( uVar19 & 4 ) == 0) {
                           if (uVar28 != 0) {
                              local_180[0] = CONCAT71(local_180[0]._1_7_, (undefined1)auStack_1b0[0]);
                              if (( uVar19 & 2 ) != 0) {
                                 *(undefined2*)( (long)local_180 + ( ( uVar19 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)auStack_1b0 + ( ( uVar19 & 0xffffffff ) - 2 ) );
                              }

                           }

                        }
 else {
                           local_180[0] = CONCAT44(local_180[0]._4_4_, (undefined4)auStack_1b0[0]);
                           *(undefined4*)( (long)local_180 + ( ( uVar19 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)auStack_1b0 + ( ( uVar19 & 0xffffffff ) - 4 ) );
                        }

                     }
 else {
                        *(undefined8*)( (long)local_180 + ( ( uVar19 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)auStack_1b0 + ( ( uVar19 & 0xffffffff ) - 8 ) );
                        if (7 < uVar28 - 1) {
                           uVar29 = 0;
                           do {
                              uVar19 = (ulong)uVar29;
                              uVar29 = uVar29 + 8;
                              *(undefined8*)( (long)local_190 + uVar19 ) = *(undefined8*)( (long)local_1c0 + uVar19 );
                           }
 while ( uVar29 < ( uVar28 - 1 & 0xfffffff8 ) );
                        }

                     }

                  }
 else {
                     local_190 = local_1c0;
                     local_180[0] = auStack_1b0[0];
                  }

                  local_188 = uVar13;
                  local_1c0 = auStack_1b0;
                  auStack_1b0[0] = auStack_1b0[0] & 0xffffffffffffff00;
                  local_1b8 = 0;
                  puVar4 = local_310;
                  if (0x7fffffffffffffff - local_398 < uVar13) goto LAB_0010d536;
                  uVar19 = uVar13 + local_398;
                  uVar27 = local_390[0];
                  if (local_3a0 == local_390) {
                     uVar27 = 0xf;
                  }

                  if (uVar27 < uVar19) {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_3a8, local_398, 0, (char*)local_190, uVar13);
                  }
 else if (uVar13 != 0) {
                     if (uVar13 == 1) {
                        *(char*)( (long)local_3a0 + local_398 ) = (char)*local_190;
                     }
 else {
                        memcpy((char*)( (long)local_3a0 + local_398 ), local_190, uVar13);
                     }

                  }

                  *(undefined1*)( (long)local_3a0 + uVar19 ) = 0;
                  local_398 = uVar19;
                  if (-1 < param_6) {
                     param_6 = param_6 + iVar10 * iVar7;
                  }

               }
 else {
                  local_270[3] = glslang::GetThreadPoolAllocator();
                  local_250 = local_240;
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(local_270 + 3, &_LC27);
                  puVar4 = local_310;
                  if (0x7fffffffffffffff - local_398 < local_248) goto LAB_0010d536;
                  uVar19 = local_248 + local_398;
                  uVar27 = local_390[0];
                  if (local_3a0 == local_390) {
                     uVar27 = 0xf;
                  }

                  if (uVar27 < uVar19) {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_3a8, local_398, 0, local_250, local_248);
                  }
 else if (local_248 != 0) {
                     if (local_248 == 1) {
                        *(char*)( (long)local_3a0 + local_398 ) = *local_250;
                     }
 else {
                        memcpy((char*)( (long)local_3a0 + local_398 ), local_250, local_248);
                     }

                  }

                  *(undefined1*)( (long)local_3a0 + uVar19 ) = 0;
                  local_398 = uVar19;
               }

            }

            LAB_0010b08f:iVar10 = param_10;
            if (( param_10 != 0 ) || ( iVar10 = iVar7 != 0 )) {
               param_10 = iVar10;
               if (*(code**)( *plVar18 + 400 ) == TIntermBinary::getLeft) {
                  plVar18 = (long*)plVar18[0x18];
               }
 else {
                  plVar18 = (long*)( **(code**)( *plVar18 + 400 ) )(plVar18);
               }

               if (*(code**)( *plVar18 + 0xf0 ) == TIntermTyped::getType) {
                  pTVar24 = (TType*)( plVar18 + 4 );
               }
 else {
                  pTVar24 = (TType*)( **(code**)( *plVar18 + 0xf0 ) )();
               }

               pcVar16 = *(code**)( *(long*)pTVar24 + 0xe8 );
               if (pcVar16 == TType::isArray) {
                  if (*(long*)( pTVar24 + 0x60 ) != 0) {
                     bVar34 = false;
                  }

                  goto LAB_0010b105;
               }

               goto LAB_0010c113;
            }

         }

         LAB_0010b105:param_5 = (long*)*param_5;
      }
 while ( param_5 != plVar14 );
   }

   lVar11 = *(long*)pTVar15;
   if (*(code**)( lVar11 + 0x38 ) == TType::getBasicType) {
      uVar28 = (uint)(byte)pTVar15[8];
      if (pTVar15[8] != (TType)0x10) {
         LAB_0010b139:if (( uVar28 == 0xf ) || ( ( ( lVar11 = *(long*)( pTVar15 + 0x60 ) ),lVar11 != 0 && ( lVar32 = *(long*)( lVar11 + 8 ) ),lVar32 != 0 ) ) && ( 1 < (int)( *(long*)( lVar32 + 0x10 ) - *(long*)( lVar32 + 8 ) >> 4 ) )) goto LAB_0010b16d;
         if (( *(byte*)( *(long*)( this + 0x40 ) + 8 ) & 2 ) != 0) {
            if (*(code**)( *(long*)pTVar15 + 0xe8 ) == TType::isArray) {
               if (lVar11 != 0) {
                  LAB_0010c853:local_a8 = (undefined8*)glslang::GetThreadPoolAllocator();
                  local_a0 = local_90;
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_a8, &_LC27);
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_3a8, (char*)local_a0, local_98);
               }

            }
 else {
               cVar6 = ( **(code**)( *(long*)pTVar15 + 0xe8 ) )(pTVar15);
               if (cVar6 != '\0') goto LAB_0010c853;
            }

         }

         if (param_8 == 0) {
            lVar11 = *(long*)pTVar15;
            if (*(code**)( lVar11 + 0xe8 ) == TType::isArray) {
               if (*(long*)( pTVar15 + 0x60 ) != 0) {
                  LAB_0010d165:if (*(code**)( lVar11 + 0x78 ) == TType::getOuterArraySize) {
                     param_8 = **(int**)( *(long*)( *(long*)( pTVar15 + 0x60 ) + 8 ) + 8 );
                  }
 else {
                     param_8 = ( **(code**)( lVar11 + 0x78 ) )(pTVar15);
                  }

                  goto LAB_0010c42a;
               }

            }
 else {
               cVar6 = ( **(code**)( lVar11 + 0xe8 ) )(pTVar15);
               if (cVar6 != '\0') {
                  lVar11 = *(long*)pTVar15;
                  goto LAB_0010d165;
               }

            }

            param_8 = 1;
         }

         LAB_0010c42a:lVar11 = *(long*)( this + 0x40 );
         if (( ( *(byte*)( lVar11 + 8 ) & 8 ) == 0 ) || ( this_00 = (vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>*)( lVar11 + 0x128 ) ),param_11 != 6) {
            this_00 = (vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>*)( lVar11 + 0xf8 );
         }

         std::__cxx11::string::string<std::allocator<char>>((string*)&local_a8, (char*)local_3a0, (allocator*)local_448);
         lVar11 = std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::find((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)( lVar11 + 0x68 ), (string*)&local_a8);
         if (local_a8 != &local_98) {
            operator_delete(local_a8, local_98 + 1);
         }

         lVar32 = *(long*)( this + 0x40 );
         if (lVar11 != lVar32 + 0x70) {
            if (1 < param_8) {
               lVar20 = (long)*(int*)( lVar11 + 0x40 ) * 0x50 + *(long*)this_00;
               iVar7 = *(int*)( lVar20 + 0x28 );
               if (iVar7 < param_8) {
                  iVar7 = param_8;
               }

               *(int*)( lVar20 + 0x28 ) = iVar7;
            }

            if (( ( *(byte*)( lVar32 + 8 ) & 0x10 ) != 0 ) && ( param_12 != '\0' )) {
               puVar1 = (uint*)( (long)*(int*)( lVar11 + 0x40 ) * 0x50 + *(long*)this_00 + 0x44 );
               *puVar1 = *puVar1 | 1 << ( ( byte ) * *(undefined4**)( this + 0x38 ) & 0x1f );
            }

            goto LAB_0010b610;
         }

         iVar7 = (int)( *(long*)( this_00 + 8 ) - *(long*)this_00 >> 4 ) * -0x33333333;
         local_448[0] = iVar7;
         std::__cxx11::string::string<std::allocator<char>>((string*)&local_a8, (char*)local_3a0, (allocator*)local_4e8);
         piVar21 = (int*)std::map<std::__cxx11::string,int,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::operator []((map<std::__cxx11::string,int,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)( lVar32 + 0x68 ), (string*)&local_a8);
         *piVar21 = iVar7;
         std::__cxx11::string::_M_dispose();
         iVar10 = mapToGlType(pTVar15);
         std::__cxx11::string::string<std::allocator<char>>((string*)&local_d8, (char*)local_3a0, (allocator*)local_4e8);
         TObjectReflection::TObjectReflection((TObjectReflection*)&local_a8, (string*)&local_d8, pTVar15, param_6, iVar10, param_8, param_7);
         std::vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>::emplace_back<glslang::TObjectReflection>(this_00, (TObjectReflection*)&local_a8);
         std::__cxx11::string::_M_dispose();
         std::__cxx11::string::_M_dispose();
         if (*(code**)( *(long*)pTVar15 + 0xe8 ) == TType::isArray) {
            if (*(long*)( pTVar15 + 0x60 ) == 0) goto LAB_0010d0f3;
            LAB_0010d4fa:iVar10 = getArrayStride(param_1, pTVar15);
            *(int*)( *(long*)( this_00 + 8 ) + -0x18 ) = iVar10;
            if (param_10 != 0) goto LAB_0010d0f3;
         }
 else {
            cVar6 = ( **(code**)( *(long*)pTVar15 + 0xe8 ) )(pTVar15);
            if (cVar6 != '\0') goto LAB_0010d4fa;
            LAB_0010d0f3:iVar10 = param_10;
         }

         lVar11 = *(long*)( this + 0x40 );
         uVar9 = *(uint*)( lVar11 + 8 );
         if (( ( uVar9 & 8 ) != 0 ) && ( pTVar15[8] == (TType)0xd )) {
            piVar21 = *(int**)( lVar11 + 400 );
            if (piVar21 == *(int**)( lVar11 + 0x198 )) {
               std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>((vector<int,std::allocator<int>>*)( lVar11 + 0x188 ), piVar21, (allocator*)local_448);
               uVar9 = *(uint*)( *(long*)( this + 0x40 ) + 8 );
            }
 else {
               *piVar21 = iVar7;
               *(int**)( lVar11 + 400 ) = piVar21 + 1;
            }

         }

         lVar11 = *(long*)( this_00 + 8 );
         *(int*)( lVar11 + -0x14 ) = param_9;
         *(int*)( lVar11 + -0x10 ) = iVar10;
         if (( ( uVar9 & 0x10 ) != 0 ) && ( param_12 != '\0' )) {
            *(uint*)( lVar11 + -0xc ) = *(uint*)( lVar11 + -0xc ) | 1 << ( ( byte ) * *(undefined4**)( this + 0x38 ) & 0x1f );
         }

         goto LAB_0010b610;
      }

   }
 else {
      iVar7 = ( **(code**)( lVar11 + 0x38 ) )(pTVar15);
      if (iVar7 != 0x10) {
         if (*(code**)( *(long*)pTVar15 + 0x38 ) == TType::getBasicType) {
            uVar28 = (uint)(byte)pTVar15[8];
         }
 else {
            uVar28 = ( **(code**)( *(long*)pTVar15 + 0x38 ) )(pTVar15);
         }

         goto LAB_0010b139;
      }

      LAB_0010b16d:lVar11 = *(long*)pTVar15;
   }

   if (*(code**)( lVar11 + 0xe8 ) == TType::isArray) {
      if (*(long*)( pTVar15 + 0x60 ) == 0) {
         LAB_0010cb84:lVar11 = *(long*)( pTVar15 + 0x68 );
         uVar19 = glslang::GetThreadPoolAllocator();
         if (param_6 < 0) {
            pvVar22 = (void*)0x0;
            iVar7 = (int)( *(long*)( lVar11 + 0x10 ) - *(long*)( lVar11 + 8 ) >> 5 );
         }
 else {
            lVar32 = *(long*)( lVar11 + 0x10 );
            pvVar22 = (void*)0x0;
            lVar30 = lVar32 - *(long*)( lVar11 + 8 );
            lVar20 = lVar30 >> 5;
            iVar7 = (int)lVar20;
            if (lVar32 != *(long*)( lVar11 + 8 )) {
               if (lVar30 < 0) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_length_error("vector::_M_default_append");
               }

               if (lVar20 == 0) {
                  iVar7 = (int)( lVar32 - *(long*)( lVar11 + 8 ) >> 5 );
               }
 else {
                  uVar27 = 0;
                  pvVar22 = (void*)glslang::TPoolAllocator::allocate(uVar19);
                  pvVar22 = memset(pvVar22, 0, lVar20 * 4);
                  lVar32 = *(long*)( pTVar15 + 0x68 );
                  local_4e8[0] = 0;
                  local_448[0] = 0;
                  do {
                     lVar30 = uVar27 * 0x20;
                     pTVar24 = *(TType**)( *(long*)( lVar32 + 8 ) + lVar30 );
                     if (*(code**)( *(long*)pTVar24 + 0x50 ) == TType::getQualifier) {
                        iVar7 = *(int*)( pTVar24 + 0x24 );
                        if (iVar7 != -1) goto LAB_0010d388;
                     }
 else {
                        lVar23 = ( **(code**)( *(long*)pTVar24 + 0x50 ) )(pTVar24);
                        pTVar24 = *(TType**)( *(long*)( lVar32 + 8 ) + lVar30 );
                        if (*(int*)( lVar23 + 0x14 ) != -1) {
                           if (*(code**)( *(long*)pTVar24 + 0x50 ) == TType::getQualifier) {
                              iVar7 = *(int*)( pTVar24 + 0x24 );
                           }
 else {
                              lVar23 = ( **(code**)( *(long*)pTVar24 + 0x50 ) )(pTVar24);
                              iVar7 = *(int*)( lVar23 + 0x14 );
                              pTVar24 = *(TType**)( *(long*)( lVar32 + 8 ) + lVar30 );
                           }

                           LAB_0010d388:local_448[0] = iVar7;
                        }

                     }

                     glslang::TIntermediate::updateOffset(pTVar15, pTVar24, local_448, local_4e8);
                     *(int*)( (long)pvVar22 + uVar27 * 4 ) = local_448[0];
                     uVar27 = uVar27 + 1;
                     local_448[0] = local_448[0] + local_4e8[0];
                  }
 while ( uVar27 < ( ulong )(lVar20 * 4 >> 2) );
                  iVar7 = (int)( *(long*)( lVar11 + 0x10 ) - *(long*)( lVar11 + 8 ) >> 5 );
               }

            }

         }

         if (0 < iVar7) {
            lVar32 = 0;
            iVar7 = param_6;
            do {
               local_a8 = (undefined8*)glslang::GetThreadPoolAllocator();
               uVar19 = local_398;
               puVar4 = local_3a0;
               local_a0 = local_90;
               if (local_398 < 0x10) {
                  if (local_398 == 1) {
                     local_90[0] = CONCAT71(local_90[0]._1_7_, (char)*local_3a0);
                  }
 else if (local_398 != 0) goto LAB_0010cea2;
               }
 else {
                  if ((long)local_398 < 0) goto LAB_0010d60c;
                  local_a0 = (ulong*)glslang::TPoolAllocator::allocate((ulong)local_a8);
                  local_90[0] = uVar19;
                  LAB_0010cea2:memcpy(local_a0, puVar4, uVar19);
               }

               local_98 = uVar19;
               *(char*)( (long)local_a0 + uVar19 ) = '\0';
               if (uVar19 != 0) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_a8, ".");
               }

               plVar18 = *(long**)( lVar32 * 0x20 + *(long*)( lVar11 + 8 ) );
               pcVar16 = *(code**)( *plVar18 + 0x30 );
               if (pcVar16 == TType::getFieldName_abi_cxx11_) {
                  lVar20 = plVar18[0xe];
               }
 else {
                  lVar20 = ( *pcVar16 )();
               }

               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_a8, *(char**)( lVar20 + 8 ), *(ulong*)( lVar20 + 0x10 ));
               TType::TType((TType*)local_4e8, pTVar15, (int)lVar32, false);
               if (-1 < iVar7) {
                  iVar7 = param_6 + *(int*)( (long)pvVar22 + lVar32 * 4 );
               }

               if (*(code**)( *(long*)pTVar15 + 0x38 ) == TType::getBasicType) {
                  uVar28 = (uint)(byte)pTVar15[8];
               }
 else {
                  uVar28 = ( **(code**)( *(long*)pTVar15 + 0x38 ) )(pTVar15);
               }

               iVar10 = param_10;
               if (uVar28 == 0x10) {
                  if (*(code**)( *(long*)pTVar15 + 0x58 ) == TType::getQualifier) {
                     pTVar24 = pTVar15 + 0x10;
                  }
 else {
                     pTVar24 = (TType*)( **(code**)( *(long*)pTVar15 + 0x58 ) )(pTVar15);
                  }

                  if (( ( (byte)pTVar24[8] & 0x7f ) == 6 ) && ( local_488 != 0 )) {
                     iVar10 = getArrayStride(param_1, (TType*)local_4e8);
                  }

               }

               iVar31 = iVar7;
               uVar28 = param_11;
               cVar6 = param_12;
               if (( param_9 == -1 ) && ( iVar10 == 0 )) {
                  if (bVar34) {
                     param_9 = 1;
                     goto LAB_0010cd07;
                  }

                  param_9 = -1;
                  iVar8 = param_9;
                  LAB_0010cd84:blowUpActiveAggregate(this, (TType*)local_4e8, (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_a8, param_3, plVar14, iVar31, param_7, 0, iVar8, iVar10, uVar28, cVar6);
               }
 else {
                  LAB_0010cd07:iVar8 = param_9;
                  if (( ( uVar9 & 1 ) == 0 ) || ( !bVar34 )) goto LAB_0010cd84;
                  if (local_488 == 0) {
                     if (*(code**)( *(long*)pTVar15 + 0x58 ) == TType::getQualifier) {
                        pTVar24 = pTVar15 + 0x10;
                     }
 else {
                        pTVar24 = (TType*)( **(code**)( *(long*)pTVar15 + 0x58 ) )(pTVar15);
                     }

                     iVar10 = 0;
                     iVar31 = *(int*)( (long)pvVar22 + lVar32 * 4 );
                     iVar8 = 1;
                     uVar28 = (byte)pTVar24[8] & 0x7f;
                     cVar6 = '\0';
                     goto LAB_0010cd84;
                  }

                  if (1 < ( byte )(local_4e0 - 0xfU)) {
                     iVar8 = **(int**)( *(long*)( local_488 + 8 ) + 8 );
                     if (*(code**)( *(long*)pTVar15 + 0x58 ) == TType::getQualifier) {
                        pTVar24 = pTVar15 + 0x10;
                     }
 else {
                        pTVar24 = (TType*)( **(code**)( *(long*)pTVar15 + 0x58 ) )(pTVar15);
                     }

                     iVar10 = 0;
                     iVar31 = *(int*)( (long)pvVar22 + lVar32 * 4 );
                     uVar28 = (byte)pTVar24[8] & 0x7f;
                     cVar6 = '\0';
                     goto LAB_0010cd84;
                  }

                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::append((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_a8, "[0]");
                  lVar20 = _DAT_00000008;
                  if (local_488 == 0) {
                     LAB_0010d1bd:local_4fc = **(undefined4**)( lVar20 + 8 );
                  }
 else {
                     local_4fc = 0;
                     lVar20 = *(long*)( local_488 + 8 );
                     if (**(int**)( *(long*)( local_488 + 8 ) + 8 ) != 0) goto LAB_0010d1bd;
                  }

                  if (*(code**)( *(long*)pTVar15 + 0x58 ) == TType::getQualifier) {
                     pTVar24 = pTVar15 + 0x10;
                  }
 else {
                     pTVar24 = (TType*)( **(code**)( *(long*)pTVar15 + 0x58 ) )(pTVar15);
                  }

                  TVar2 = pTVar24[8];
                  uVar3 = *(undefined4*)( (long)pvVar22 + lVar32 * 4 );
                  TType::TType((TType*)local_448, (TType*)local_4e8, 0, false);
                  blowUpActiveAggregate(this, (TType*)local_448, (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_a8, param_3, plVar14, uVar3, param_7, 0, local_4fc, iVar10, (byte)TVar2 & 0x7f, 0);
               }

               lVar32 = lVar32 + 1;
            }
 while ( (int)lVar32 < (int)( *(long*)( lVar11 + 0x10 ) - *(long*)( lVar11 + 8 ) >> 5 ) );
         }

         goto LAB_0010b610;
      }

   }
 else {
      cVar6 = ( **(code**)( lVar11 + 0xe8 ) )(pTVar15);
      if (cVar6 == '\0') goto LAB_0010cb84;
   }

   if (param_6 < 0) {
      local_548 = 0;
   }
 else {
      local_548 = getArrayStride(param_1, pTVar15);
   }

   if (*(code**)( *(long*)pTVar15 + 0x78 ) == TType::getOuterArraySize) {
      iVar7 = **(int**)( *(long*)( *(long*)( pTVar15 + 0x60 ) + 8 ) + 8 );
   }
 else {
      iVar7 = ( **(code**)( *(long*)pTVar15 + 0x78 ) )(pTVar15);
   }

   if (( ( uVar9 & 1 ) == 0 ) || ( iVar10 = !bVar34 )) {
      iVar10 = 1;
      if (0 < iVar7) {
         iVar10 = iVar7;
      }

      if (( param_9 != iVar10 ) || ( param_10 != 0 )) goto LAB_0010b1e8;
      iVar10 = 1;
      param_10 = local_548;
      iVar7 = param_10;
   }
 else {
      LAB_0010b1e8:iVar7 = local_548;
      if (param_10 != 0) {
         iVar7 = param_10;
      }

   }

   param_10 = iVar7;
   iVar31 = 0;
   iVar7 = param_6;
   do {
      local_168 = glslang::GetThreadPoolAllocator();
      uVar19 = local_398;
      puVar4 = local_3a0;
      local_160 = local_150;
      if (local_398 < 0x10) {
         if (local_398 == 1) {
            local_150[0] = CONCAT71(local_150[0]._1_7_, (char)*local_3a0);
         }
 else if (local_398 != 0) goto LAB_0010c9b2;
      }
 else {
         if ((long)local_398 < 0) goto LAB_0010d60c;
         local_160 = (ulong*)glslang::TPoolAllocator::allocate(local_168);
         local_150[0] = uVar19;
         LAB_0010c9b2:memcpy(local_160, puVar4, uVar19);
      }

      local_158 = uVar19;
      *(undefined1*)( (long)local_160 + uVar19 ) = 0;
      if (*(code**)( *(long*)pTVar15 + 0x38 ) == TType::getBasicType) {
         uVar9 = (uint)(byte)pTVar15[8];
      }
 else {
         uVar9 = ( **(code**)( *(long*)pTVar15 + 0x38 ) )(pTVar15);
      }

      if (uVar9 != 0x10) {
         __snprintf_chk(local_58, 0x10, 2, 0x10, &_LC24, iVar31);
         local_108 = glslang::GetThreadPoolAllocator();
         local_100 = local_f0;
         sVar12 = strlen(local_58);
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_108, local_58, local_58 + sVar12);
         local_138 = (undefined8*)glslang::GetThreadPoolAllocator();
         local_130 = (ulong*)&uStack_120;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_138, &_LC25);
         puVar4 = local_310;
         if (0x7fffffffffffffff - local_128 < local_f8) {
            LAB_0010d536:local_310 = puVar4;
            /* WARNING: Subroutine does not return */
            std::__throw_length_error("basic_string::append");
         }

         uVar19 = local_f8 + local_128;
         if (local_130 == (ulong*)&uStack_120) {
            uVar27 = 0xf;
         }
 else {
            uVar27 = CONCAT44(uStack_11c, uStack_120);
         }

         if (uVar27 < uVar19) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_138, local_128, 0, local_100, local_f8);
         }
 else if (local_f8 != 0) {
            if (local_f8 == 1) {
               *(char*)( (long)local_130 + local_128 ) = *local_100;
            }
 else {
               memcpy((char*)( (long)local_130 + local_128 ), local_100, local_f8);
            }

         }

         uVar9 = uStack_120;
         puVar26 = local_130;
         *(char*)( (long)local_130 + uVar19 ) = '\0';
         local_d0 = auStack_c0;
         local_d8 = local_138;
         local_c8 = uVar19;
         if (local_130 == (ulong*)&uStack_120) {
            uVar27 = uVar19 + 1;
            uVar28 = (uint)uVar27;
            uVar13 = uVar27 & 0xffffffff;
            if (uVar28 < 8) {
               if (( uVar27 & 4 ) == 0) {
                  if (uVar28 != 0) {
                     auStack_c0[0] = CONCAT71(auStack_c0[0]._1_7_, (undefined1)uStack_120);
                     if (( uVar27 & 2 ) != 0) {
                        *(undefined2*)( (long)auStack_c0 + ( uVar13 - 2 ) ) = *(undefined2*)( (long)&local_128 + uVar13 + 6 );
                     }

                  }

               }
 else {
                  auStack_c0[0] = CONCAT44(auStack_c0[0]._4_4_, uStack_120);
                  *(undefined4*)( (long)auStack_c0 + ( uVar13 - 4 ) ) = *(undefined4*)( (long)&local_128 + uVar13 + 4 );
               }

            }
 else {
               *(undefined8*)( (long)auStack_c0 + ( ( uVar27 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)&local_128 + ( uVar27 & 0xffffffff ) );
               if (7 < uVar28 - 1) {
                  uVar29 = 0;
                  do {
                     uVar27 = (ulong)uVar29;
                     uVar29 = uVar29 + 8;
                     *(undefined8*)( (long)auStack_c0 + uVar27 ) = *(undefined8*)( (long)local_130 + uVar27 );
                  }
 while ( uVar29 < ( uVar28 - 1 & 0xfffffff8 ) );
               }

            }

            uVar27 = 0xf;
            local_130 = (ulong*)&uStack_120;
            local_128 = 0;
            uStack_120 = uStack_120 & 0xffffff00;
         }
 else {
            local_d0 = local_130;
            uVar27 = CONCAT44(uStack_11c, uStack_120);
            local_130 = (ulong*)&uStack_120;
            local_128 = 0;
            uStack_120 = uStack_120 & 0xffffff00;
            auStack_c0[0] = uVar27;
            puVar4 = local_310;
            if (uVar19 == 0x7fffffffffffffff) goto LAB_0010d536;
            if (puVar26 == auStack_c0) {
               uVar27 = 0xf;
            }

         }

         uStack_120 = uVar9 & 0xffffff00;
         uVar13 = uVar19 + 1;
         local_128 = 0;
         if (uVar27 < uVar13) {
            local_130 = (ulong*)&uStack_120;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_d8, uVar19, 0, "]", 1);
         }
 else {
            *(char*)( (long)local_d0 + uVar19 ) = ']';
            local_130 = (ulong*)&uStack_120;
         }

         local_c8 = uVar13;
         *(char*)( (long)local_d0 + uVar13 ) = '\0';
         local_a8 = local_d8;
         local_a0 = local_90;
         if (local_d0 == auStack_c0) {
            uVar19 = uVar19 + 2;
            uVar9 = (uint)uVar19;
            if (uVar9 < 8) {
               if (( uVar19 & 4 ) == 0) {
                  if (uVar9 != 0) {
                     local_90[0] = CONCAT71(local_90[0]._1_7_, (undefined1)auStack_c0[0]);
                     if (( uVar19 & 2 ) != 0) {
                        *(undefined2*)( (long)local_90 + ( ( uVar19 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)auStack_c0 + ( ( uVar19 & 0xffffffff ) - 2 ) );
                     }

                  }

               }
 else {
                  local_90[0] = CONCAT44(local_90[0]._4_4_, (undefined4)auStack_c0[0]);
                  *(undefined4*)( (long)local_90 + ( ( uVar19 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)auStack_c0 + ( ( uVar19 & 0xffffffff ) - 4 ) );
               }

            }
 else {
               *(undefined8*)( (long)local_90 + ( ( uVar19 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)auStack_c0 + ( ( uVar19 & 0xffffffff ) - 8 ) );
               if (7 < uVar9 - 1) {
                  uVar28 = 0;
                  do {
                     uVar19 = (ulong)uVar28;
                     uVar28 = uVar28 + 8;
                     *(undefined8*)( (long)local_a0 + uVar19 ) = *(undefined8*)( (long)local_d0 + uVar19 );
                  }
 while ( uVar28 < ( uVar9 - 1 & 0xfffffff8 ) );
               }

            }

         }
 else {
            local_a0 = local_d0;
            local_90[0] = auStack_c0[0];
         }

         local_98 = uVar13;
         local_d0 = auStack_c0;
         auStack_c0[0] = auStack_c0[0] & 0xffffffffffffff00;
         local_c8 = 0;
         puVar4 = local_310;
         if (0x7fffffffffffffff - local_158 < uVar13) goto LAB_0010d536;
         uVar19 = uVar13 + local_158;
         uVar27 = local_150[0];
         if (local_160 == local_150) {
            uVar27 = 0xf;
         }

         if (uVar27 < uVar19) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_168, local_158, 0, (char*)local_a0, uVar13);
         }
 else if (uVar13 != 0) {
            if (uVar13 == 1) {
               *(char*)( (long)local_160 + local_158 ) = (char)*local_a0;
            }
 else {
               memcpy((char*)( (long)local_160 + local_158 ), local_a0, uVar13);
            }

         }

         *(undefined1*)( (long)local_160 + uVar19 ) = 0;
         local_158 = uVar19;
      }

      local_550 = &local_168;
      TType::TType((TType*)local_448, pTVar15, 0, false);
      if (-1 < param_6) {
         param_6 = iVar7;
      }

      iVar31 = iVar31 + 1;
      blowUpActiveAggregate(this, (TType*)local_448, local_550, param_3, plVar14, param_6, param_7, 0, param_9, param_10, param_11, param_12);
      iVar7 = iVar7 + local_548;
   }
 while ( iVar31 != iVar10 );
   LAB_0010b610:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_0010b764:if (*(code**)( *plVar18 + 400 ) == TIntermBinary::getLeft) {
      plVar14 = (long*)plVar18[0x18];
   }
 else {
      plVar14 = (long*)( **(code**)( *plVar18 + 400 ) )(plVar18);
   }

   if (*(code**)( *plVar14 + 0xf0 ) == TIntermTyped::getType) {
      plVar14 = plVar14 + 4;
   }
 else {
      plVar14 = (long*)( **(code**)( *plVar14 + 0xf0 ) )();
   }

   if (*(code**)( *plVar14 + 0x78 ) == TType::getOuterArraySize) {
      iVar8 = **(int**)( *(long*)( plVar14[0xc] + 8 ) + 8 );
   }
 else {
      iVar8 = ( **(code**)( *plVar14 + 0x78 ) )();
   }

   if (iVar8 < 1) {
      iVar8 = 1;
   }

   if (iVar8 <= iVar31) goto LAB_0010b610;
   local_378 = glslang::GetThreadPoolAllocator();
   uVar19 = local_398;
   puVar4 = local_3a0;
   local_370 = local_360;
   if (local_398 < 0x10) {
      if (local_398 == 1) {
         local_360[0] = CONCAT71(local_360[0]._1_7_, (char)*local_3a0);
      }
 else if (local_398 != 0) goto LAB_0010bc92;
   }
 else {
      if ((long)local_398 < 0) goto LAB_0010d60c;
      local_370 = (ulong*)glslang::TPoolAllocator::allocate(local_378);
      local_360[0] = uVar19;
      LAB_0010bc92:memcpy(local_370, puVar4, uVar19);
   }

   local_368 = uVar19;
   *(undefined1*)( (long)local_370 + uVar19 ) = 0;
   if (*(code**)( *(long*)pTVar15 + 0x38 ) == TType::getBasicType) {
      uVar28 = (uint)(byte)pTVar15[8];
   }
 else {
      uVar28 = ( **(code**)( *(long*)pTVar15 + 0x38 ) )(pTVar15);
   }

   if (uVar28 != 0x10) {
      if (( ( uVar9 & 1 ) == 0 ) || ( !bVar34 )) {
         if (local_520 == 0) {
            if (*(code**)( *(long*)param_1 + 0x38 ) == TType::getBasicType) {
               uVar28 = (uint)(byte)param_1[8];
            }
 else {
               uVar28 = ( **(code**)( *(long*)param_1 + 0x38 ) )(param_1);
            }

            if (uVar28 == 0x10) goto LAB_0010b92a;
         }

         __snprintf_chk(local_58, 0x10, 2, 0x10, &_LC24, iVar31);
         local_2e8 = glslang::GetThreadPoolAllocator();
         local_2e0 = local_2d0;
         sVar12 = strlen(local_58);
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_2e8, local_58, local_58 + sVar12);
         local_318 = glslang::GetThreadPoolAllocator();
         local_310 = (ulong*)&uStack_300;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_318, &_LC25);
         puVar4 = local_310;
         if (0x7fffffffffffffff - local_308 < local_2d8) goto LAB_0010d536;
         uVar19 = local_2d8 + local_308;
         if (local_310 == (ulong*)&uStack_300) {
            uVar27 = 0xf;
         }
 else {
            uVar27 = CONCAT44(uStack_2fc, uStack_300);
         }

         if (uVar27 < uVar19) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_318, local_308, 0, local_2e0, local_2d8);
         }
 else if (local_2d8 != 0) {
            if (local_2d8 == 1) {
               *(char*)( (long)local_310 + local_308 ) = *local_2e0;
            }
 else {
               memcpy((char*)( (long)local_310 + local_308 ), local_2e0, local_2d8);
            }

         }

         uVar28 = uStack_300;
         *(char*)( (long)local_310 + uVar19 ) = '\0';
         local_2b8 = local_318;
         local_2a8 = uVar19;
         if (local_310 == (ulong*)&uStack_300) {
            uVar27 = uVar19 + 1;
            uVar29 = (uint)uVar27;
            uVar13 = uVar27 & 0xffffffff;
            if (uVar29 < 8) {
               if (( uVar27 & 4 ) == 0) {
                  if (uVar29 != 0) {
                     auStack_2a0[0] = CONCAT71(auStack_2a0[0]._1_7_, (undefined1)uStack_300);
                     if (( uVar27 & 2 ) != 0) {
                        *(undefined2*)( (long)auStack_2a0 + ( uVar13 - 2 ) ) = *(undefined2*)( (long)&local_308 + uVar13 + 6 );
                     }

                  }

               }
 else {
                  auStack_2a0[0] = CONCAT44(auStack_2a0[0]._4_4_, uStack_300);
                  *(undefined4*)( (long)auStack_2a0 + ( uVar13 - 4 ) ) = *(undefined4*)( (long)&local_308 + uVar13 + 4 );
               }

            }
 else {
               *(undefined8*)( (long)auStack_2a0 + ( ( uVar27 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)&local_308 + ( uVar27 & 0xffffffff ) );
               if (7 < uVar29 - 1) {
                  uVar25 = 0;
                  do {
                     uVar27 = (ulong)uVar25;
                     uVar25 = uVar25 + 8;
                     *(undefined8*)( (long)auStack_2a0 + uVar27 ) = *(undefined8*)( (long)local_310 + uVar27 );
                  }
 while ( uVar25 < ( uVar29 - 1 & 0xfffffff8 ) );
               }

            }

            uVar27 = 0xf;
            local_2b0 = auStack_2a0;
         }
 else {
            local_2b0 = local_310;
            uVar27 = CONCAT44(uStack_2fc, uStack_300);
            local_308 = 0;
            uStack_300 = uStack_300 & 0xffffff00;
            auStack_2a0[0] = uVar27;
            puVar4 = (ulong*)&uStack_300;
            if (uVar19 == 0x7fffffffffffffff) goto LAB_0010d536;
            if (local_310 == auStack_2a0) {
               uVar27 = 0xf;
            }

         }

         uStack_300 = uVar28 & 0xffffff00;
         uVar13 = uVar19 + 1;
         local_308 = 0;
         if (uVar27 < uVar13) {
            local_310 = (ulong*)&uStack_300;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_2b8, uVar19, 0, "]", 1);
         }
 else {
            *(char*)( (long)local_2b0 + uVar19 ) = ']';
            local_310 = (ulong*)&uStack_300;
         }

         local_2a8 = uVar13;
         *(char*)( (long)local_2b0 + uVar13 ) = '\0';
         auStack_2a0[3] = local_2b8;
         puVar26 = local_270;
         local_280 = puVar26;
         if (local_2b0 == auStack_2a0) {
            uVar19 = uVar19 + 2;
            uVar28 = (uint)uVar19;
            if (uVar28 < 8) {
               if (( uVar19 & 4 ) == 0) {
                  if (uVar28 != 0) {
                     local_270[0] = CONCAT71(local_270[0]._1_7_, (undefined1)auStack_2a0[0]);
                     if (( uVar19 & 2 ) != 0) {
                        *(undefined2*)( (long)local_270 + ( ( uVar19 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)auStack_2a0 + ( ( uVar19 & 0xffffffff ) - 2 ) );
                     }

                  }

               }
 else {
                  local_270[0] = CONCAT44(local_270[0]._4_4_, (undefined4)auStack_2a0[0]);
                  *(undefined4*)( (long)local_270 + ( ( uVar19 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)auStack_2a0 + ( ( uVar19 & 0xffffffff ) - 4 ) );
               }

            }
 else {
               *(undefined8*)( (long)local_270 + ( ( uVar19 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)auStack_2a0 + ( ( uVar19 & 0xffffffff ) - 8 ) );
               if (7 < uVar28 - 1) {
                  uVar29 = 0;
                  do {
                     uVar19 = (ulong)uVar29;
                     uVar29 = uVar29 + 8;
                     *(undefined8*)( (long)puVar26 + uVar19 ) = *(undefined8*)( (long)local_2b0 + uVar19 );
                  }
 while ( uVar29 < ( uVar28 - 1 & 0xfffffff8 ) );
               }

            }

         }
 else {
            local_280 = local_2b0;
            local_270[0] = auStack_2a0[0];
            puVar26 = local_2b0;
         }

         local_278 = uVar13;
         local_2a8 = 0;
         auStack_2a0[0] = auStack_2a0[0] & 0xffffffffffffff00;
         local_2b0 = auStack_2a0;
         local_280 = puVar26;
      }
 else {
         local_348 = glslang::GetThreadPoolAllocator();
         local_340 = local_330;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_348, &_LC27);
         puVar26 = local_340;
         uVar13 = local_338;
      }

      puVar4 = local_310;
      if (0x7fffffffffffffff - local_368 < uVar13) goto LAB_0010d536;
      uVar19 = local_368 + uVar13;
      uVar27 = local_360[0];
      if (local_370 == local_360) {
         uVar27 = 0xf;
      }

      if (uVar27 < uVar19) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_378, local_368, 0, (char*)puVar26, uVar13);
      }
 else if (uVar13 != 0) {
         if (uVar13 == 1) {
            *(char*)( (long)local_370 + local_368 ) = (char)*puVar26;
         }
 else {
            memcpy((char*)( (long)local_370 + local_368 ), puVar26, uVar13);
         }

      }

      *(undefined1*)( (long)local_370 + uVar19 ) = 0;
      local_368 = uVar19;
   }

   LAB_0010b92a:blowUpActiveAggregate(this, pTVar15, &local_378, param_3, *param_5, param_6, param_7, param_8, param_9, iVar10, param_11, param_12);
   iVar8 = iVar7 + param_6;
   if (param_6 < 0) {
      iVar8 = param_6;
   }

   iVar31 = iVar31 + 1;
   param_6 = iVar8;
   goto LAB_0010b764;
}
/* glslang::TReflectionTraverser::addDereferencedUniform(glslang::TIntermBinary*) */void glslang::TReflectionTraverser::addDereferencedUniform(TReflectionTraverser *this, TIntermBinary *param_1) {
   _Rb_tree_node_base *p_Var1;
   ulong uVar2;
   undefined8 *****pppppuVar3;
   byte bVar4;
   char cVar5;
   int iVar6;
   uint uVar7;
   long *plVar8;
   _Rb_tree_node_base *p_Var9;
   _List_node_base *p_Var10;
   _Rb_tree_node_base *p_Var11;
   TIntermBinary *pTVar12;
   long lVar13;
   long *plVar14;
   TType *pTVar15;
   code *pcVar16;
   basic_string *pbVar17;
   TIntermBinary *pTVar18;
   _Rb_tree_node_base *p_Var19;
   size_t __n;
   long in_FS_OFFSET;
   bool bVar20;
   bool bVar21;
   basic_string<char,std::char_traits<char>,glslang::std::allocator<char>> *local_c0;
   uint local_b0;
   undefined4 local_ac;
   ulong *local_a8;
   undefined4 local_94;
   undefined1 *local_90;
   ulong local_88;
   undefined8 *****local_80;
   undefined8 *****local_78;
   long local_70;
   undefined8 local_68;
   undefined1 *local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)param_1 + 400 ) == TIntermBinary::getLeft) {
      plVar8 = *(long**)( param_1 + 0xc0 );
   }
 else {
      plVar8 = (long*)( **(code**)( *(long*)param_1 + 400 ) )(param_1);
   }

   if (*(code**)( *plVar8 + 0xf0 ) == TIntermTyped::getType) {
      plVar8 = plVar8 + 4;
   }
 else {
      plVar8 = (long*)( **(code**)( *plVar8 + 0xf0 ) )();
   }

   lVar13 = *plVar8;
   pTVar12 = param_1;
   if (*(code**)( lVar13 + 0xd8 ) == TType::isVector) {
      if (( *(byte*)( (long)plVar8 + 9 ) & 0xf ) < 2) {
         bVar4 = *(byte*)( (long)plVar8 + 10 ) >> 4 & 1;
         goto LAB_0010dd5b;
      }

      LAB_0010d736:if (*(code**)( lVar13 + 0xe8 ) == TType::isArray) {
         if (plVar8[0xc] == 0) goto LAB_0010dd10;
      }
 else {
         cVar5 = ( **(code**)( lVar13 + 0xe8 ) )(plVar8);
         if (cVar5 == '\0') goto LAB_0010dd10;
      }

   }
 else {
      bVar4 = ( **(code**)( lVar13 + 0xd8 ) )(plVar8);
      lVar13 = *plVar8;
      LAB_0010dd5b:if (bVar4 != 0) goto LAB_0010d736;
      if (*(code**)( lVar13 + 0xe0 ) == TType::isMatrix) {
         if (0xf < *(byte*)( (long)plVar8 + 9 )) goto LAB_0010d736;
      }
 else {
         cVar5 = ( **(code**)( lVar13 + 0xe0 ) )(plVar8);
         if (cVar5 != '\0') {
            lVar13 = *plVar8;
            goto LAB_0010d736;
         }

      }

   }

   do {
      if (*(code**)( *(long*)pTVar12 + 400 ) == TIntermBinary::getLeft) {
         plVar8 = (long*)( **(code**)( **(long**)( pTVar12 + 0xc0 ) + 0x60 ) )();
      }
 else {
         plVar8 = (long*)( **(code**)( *(long*)pTVar12 + 400 ) )(pTVar12);
         plVar8 = (long*)( **(code**)( *plVar8 + 0x60 ) )();
      }

      if (plVar8 != (long*)0x0) {
         if (*(code**)( *plVar8 + 0x108 ) == TIntermTyped::getQualifier) {
            plVar14 = plVar8 + 6;
         }
 else {
            plVar14 = (long*)( **(code**)( *plVar8 + 0x108 ) )(plVar8);
         }

         if (( *(byte*)( plVar14 + 1 ) & 0x7f ) - 5 < 2) {
            p_Var1 = (_Rb_tree_node_base*)( this + 0x50 );
            p_Var11 = *(_Rb_tree_node_base**)( this + 0x58 );
            p_Var19 = p_Var1;
            if (*(_Rb_tree_node_base**)( this + 0x58 ) != (_Rb_tree_node_base*)0x0) goto LAB_0010d818;
            goto LAB_0010d841;
         }

         break;
      }

      if (*(code**)( *(long*)pTVar12 + 400 ) == TIntermBinary::getLeft) {
         plVar8 = *(long**)( pTVar12 + 0xc0 );
      }
 else {
         plVar8 = (long*)( **(code**)( *(long*)pTVar12 + 400 ) )(pTVar12);
      }

      pTVar12 = (TIntermBinary*)( **(code**)( *plVar8 + 0x40 ) )();
   }
 while ( pTVar12 != (TIntermBinary*)0x0 );
   goto LAB_0010dd10;
   while (p_Var11 = *(_Rb_tree_node_base**)( p_Var9 + 0x18 ),*(_Rb_tree_node_base**)( p_Var9 + 0x18 ) != (_Rb_tree_node_base*)0x0) {
      LAB_0010d818:p_Var9 = p_Var11;
      if (param_1 <= *(TIntermBinary**)( p_Var9 + 0x20 )) {
         p_Var11 = *(_Rb_tree_node_base**)( p_Var9 + 0x10 );
         p_Var19 = p_Var9;
         if (*(_Rb_tree_node_base**)( p_Var9 + 0x10 ) == (_Rb_tree_node_base*)0x0) break;
         goto LAB_0010d818;
      }

   }
;
   if (( p_Var1 != p_Var19 ) && ( *(TIntermBinary**)( p_Var19 + 0x20 ) <= param_1 )) goto LAB_0010dd10;
   LAB_0010d841:if (*(code**)( *plVar8 + 0x100 ) == TIntermTyped::getBasicType) {
      local_b0 = ( uint ) * (byte*)( plVar8 + 5 );
   }
 else {
      local_b0 = ( **(code**)( *plVar8 + 0x100 ) )(plVar8);
   }

   if (local_b0 == 0x10) {
      lVar13 = *plVar8;
      if (*(code**)( lVar13 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
         plVar14 = plVar8 + 0x19;
      }
 else {
         plVar14 = (long*)( **(code**)( lVar13 + 400 ) )(plVar8);
         lVar13 = *plVar8;
      }

      uVar2 = plVar14[2];
      bVar21 = false;
      iVar6 = -5;
      if (uVar2 != 0) {
         __n = 5;
         if (uVar2 < 6) {
            __n = uVar2;
         }

         iVar6 = memcmp((void*)plVar14[1], "anon@", __n);
         if (iVar6 == 0) {
            iVar6 = (int)__n + -5;
            bVar21 = iVar6 == 0;
         }

      }

      if (*(code**)( lVar13 + 0xf0 ) == TIntermTyped::getType) {
         plVar14 = plVar8 + 4;
      }
 else {
         plVar14 = (long*)( **(code**)( lVar13 + 0xf0 ) )(plVar8);
      }

      if (*(code**)( *plVar14 + 0x28 ) == TType::getTypeName_abi_cxx11_) {
         pbVar17 = (basic_string*)plVar14[0xf];
      }
 else {
         pbVar17 = (basic_string*)( **(code**)( *plVar14 + 0x28 ) )();
      }

      local_68 = glslang::GetThreadPoolAllocator();
      local_50[0] = 0;
      local_60 = local_50;
      local_58 = 0;
      if (iVar6 != 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, pbVar17);
      }

      local_c0 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68;
      if (*(code**)( *plVar8 + 0xf0 ) == TIntermTyped::getType) {
         pTVar15 = (TType*)( plVar8 + 4 );
      }
 else {
         pTVar15 = (TType*)( **(code**)( *plVar8 + 0xf0 ) )(plVar8);
      }

      iVar6 = glslang::TIntermediate::getBlockSize(pTVar15);
      if (*(code**)( *plVar8 + 0xf0 ) == TIntermTyped::getType) {
         pTVar15 = (TType*)( plVar8 + 4 );
      }
 else {
         pTVar15 = (TType*)( **(code**)( *plVar8 + 0xf0 ) )(plVar8);
      }

      local_ac = addBlockName(this, pbVar17, pTVar15, iVar6);
      if (( *(byte*)( *(long*)( this + 0x40 ) + 8 ) & 0x10 ) != 0) {
         local_88 = glslang::GetThreadPoolAllocator();
         lVar13 = *plVar8;
         local_70 = 0;
         local_80 = &local_80;
         local_78 = &local_80;
         if (*(code**)( lVar13 + 0x108 ) == TIntermTyped::getQualifier) {
            plVar14 = plVar8 + 6;
         }
 else {
            plVar14 = (long*)( **(code**)( lVar13 + 0x108 ) )(plVar8);
            lVar13 = *plVar8;
         }

         bVar4 = *(byte*)( plVar14 + 1 );
         if (*(code**)( lVar13 + 0xf0 ) == TIntermTyped::getType) {
            plVar14 = plVar8 + 4;
         }
 else {
            plVar14 = (long*)( **(code**)( lVar13 + 0xf0 ) )(plVar8);
         }

         blowUpActiveAggregate(this, plVar14, local_c0, &local_88, &local_80, 0, local_ac, 0, 0xffffffffffffffff, 0, bVar4 & 0x7f, 0);
      }

      local_94 = 0;
   }
 else {
      bVar21 = false;
      local_ac = 0xffffffff;
      local_94 = 0xffffffff;
   }

   local_90 = local_50;
   local_a8 = &local_88;
   local_c0 = (basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68;
   local_88 = glslang::GetThreadPoolAllocator();
   local_70 = 0;
   pTVar12 = param_1;
   local_80 = &local_80;
   local_78 = &local_80;
   do {
      if (*(code**)( *(long*)pTVar12 + 400 ) == TIntermBinary::getLeft) {
         plVar14 = *(long**)( pTVar12 + 0xc0 );
      }
 else {
         plVar14 = (long*)( **(code**)( *(long*)pTVar12 + 400 ) )(pTVar12);
      }

      if (*(code**)( *plVar14 + 0xf0 ) == TIntermTyped::getType) {
         plVar14 = plVar14 + 4;
      }
 else {
         plVar14 = (long*)( **(code**)( *plVar14 + 0xf0 ) )();
      }

      if (*(code**)( *plVar14 + 0x38 ) == TType::getBasicType) {
         uVar7 = ( uint ) * (byte*)( plVar14 + 1 );
         if (*(byte*)( plVar14 + 1 ) == 0x10) goto LAB_0010da86;
         LAB_0010da52:if (( uVar7 == 0xf ) || ( ( ( plVar14[0xc] != 0 && ( lVar13 = *(long*)( plVar14[0xc] + 8 ) ),lVar13 != 0 ) ) && ( 1 < (int)( *(long*)( lVar13 + 0x10 ) - *(long*)( lVar13 + 8 ) >> 4 ) ) )) goto LAB_0010da86;
      }
 else {
         iVar6 = ( **(code**)( *plVar14 + 0x38 ) )(plVar14);
         if (iVar6 != 0x10) {
            if (*(code**)( *plVar14 + 0x38 ) == TType::getBasicType) {
               uVar7 = ( uint ) * (byte*)( plVar14 + 1 );
            }
 else {
               uVar7 = ( **(code**)( *plVar14 + 0x38 ) )(plVar14);
            }

            goto LAB_0010da52;
         }

         LAB_0010da86:p_Var10 = (_List_node_base*)glslang::TPoolAllocator::allocate(local_88);
         *(TIntermBinary**)( p_Var10 + 0x10 ) = pTVar12;
         std::__detail::_List_node_base::_M_hook(p_Var10);
         local_70 = local_70 + 1;
         p_Var11 = *(_Rb_tree_node_base**)( this + 0x58 );
         if (*(_Rb_tree_node_base**)( this + 0x58 ) == (_Rb_tree_node_base*)0x0) {
            p_Var19 = p_Var1;
            if (p_Var1 != *(_Rb_tree_node_base**)( this + 0x60 )) {
               LAB_0010df7a:lVar13 = std::_Rb_tree_decrement(p_Var19);
               pTVar18 = *(TIntermBinary**)( lVar13 + 0x20 );
               LAB_0010dae5:if (pTVar12 <= pTVar18) goto LAB_0010db1f;
               goto LAB_0010daea;
            }

            bVar20 = true;
         }
 else {
            do {
               p_Var19 = p_Var11;
               pTVar18 = *(TIntermBinary**)( p_Var19 + 0x20 );
               p_Var11 = *(_Rb_tree_node_base**)( p_Var19 + 0x18 );
               if (pTVar12 < pTVar18) {
                  p_Var11 = *(_Rb_tree_node_base**)( p_Var19 + 0x10 );
               }

            }
 while ( p_Var11 != (_Rb_tree_node_base*)0x0 );
            if (pTVar12 >= pTVar18) goto LAB_0010dae5;
            if (*(_Rb_tree_node_base**)( this + 0x60 ) != p_Var19) goto LAB_0010df7a;
            LAB_0010daea:bVar20 = true;
            if (p_Var1 != p_Var19) {
               bVar20 = pTVar12 < *(TIntermBinary**)( p_Var19 + 0x20 );
            }

         }

         p_Var11 = (_Rb_tree_node_base*)operator_new(0x28);
         *(TIntermBinary**)( p_Var11 + 0x20 ) = pTVar12;
         std::_Rb_tree_insert_and_rebalance(bVar20, p_Var11, p_Var19, p_Var1);
         *(long*)( this + 0x70 ) = *(long*)( this + 0x70 ) + 1;
      }

      LAB_0010db1f:if (*(code**)( *(long*)pTVar12 + 400 ) == TIntermBinary::getLeft) {
         plVar14 = *(long**)( pTVar12 + 0xc0 );
      }
 else {
         plVar14 = (long*)( **(code**)( *(long*)pTVar12 + 400 ) )(pTVar12);
      }

      pTVar12 = (TIntermBinary*)( **(code**)( *plVar14 + 0x40 ) )();
   }
 while ( pTVar12 != (TIntermBinary*)0x0 );
   p_Var11 = *(_Rb_tree_node_base**)( this + 0x58 );
   p_Var19 = p_Var1;
   if (*(_Rb_tree_node_base**)( this + 0x58 ) == (_Rb_tree_node_base*)0x0) {
      LAB_0010dfab:if (p_Var19 != *(_Rb_tree_node_base**)( this + 0x60 )) {
         lVar13 = std::_Rb_tree_decrement(p_Var19);
         plVar14 = *(long**)( lVar13 + 0x20 );
         goto LAB_0010db8d;
      }

      LAB_0010db92:bVar20 = true;
      if (p_Var1 != p_Var19) {
         bVar20 = plVar8 < *(long**)( p_Var19 + 0x20 );
      }

      p_Var11 = (_Rb_tree_node_base*)operator_new(0x28);
      *(long**)( p_Var11 + 0x20 ) = plVar8;
      std::_Rb_tree_insert_and_rebalance(bVar20, p_Var11, p_Var19, p_Var1);
      *(long*)( this + 0x70 ) = *(long*)( this + 0x70 ) + 1;
   }
 else {
      do {
         p_Var19 = p_Var11;
         plVar14 = *(long**)( p_Var19 + 0x20 );
         p_Var11 = *(_Rb_tree_node_base**)( p_Var19 + 0x18 );
         if (plVar8 < plVar14) {
            p_Var11 = *(_Rb_tree_node_base**)( p_Var19 + 0x10 );
         }

      }
 while ( p_Var11 != (_Rb_tree_node_base*)0x0 );
      if (plVar8 < plVar14) goto LAB_0010dfab;
      LAB_0010db8d:if (plVar14 < plVar8) goto LAB_0010db92;
   }

   if (*(code**)( *(long*)param_1 + 400 ) == TIntermBinary::getLeft) {
      plVar14 = *(long**)( param_1 + 0xc0 );
   }
 else {
      plVar14 = (long*)( **(code**)( *(long*)param_1 + 400 ) )(param_1);
   }

   if (*(code**)( *plVar14 + 0xf0 ) == TIntermTyped::getType) {
      plVar14 = plVar14 + 4;
   }
 else {
      plVar14 = (long*)( **(code**)( *plVar14 + 0xf0 ) )();
   }

   if (*(code**)( *plVar14 + 0x38 ) == TType::getBasicType) {
      uVar7 = ( uint ) * (byte*)( plVar14 + 1 );
      if (*(byte*)( plVar14 + 1 ) == 0x10) goto LAB_0010dc33;
      LAB_0010de41:if (( uVar7 == 0xf ) || ( ( ( plVar14[0xc] != 0 && ( lVar13 = *(long*)( plVar14[0xc] + 8 ) ),lVar13 != 0 ) ) && ( 1 < (int)( *(long*)( lVar13 + 0x10 ) - *(long*)( lVar13 + 8 ) >> 4 ) ) )) goto LAB_0010dc33;
      if (*(code**)( *(long*)param_1 + 400 ) == TIntermBinary::getLeft) {
         plVar14 = *(long**)( param_1 + 0xc0 );
      }
 else {
         plVar14 = (long*)( **(code**)( *(long*)param_1 + 400 ) )(param_1);
      }

      if (*(code**)( *plVar14 + 0x150 ) != TIntermTyped::isArray) {
         cVar5 = ( **(code**)( *plVar14 + 0x150 ) )();
         if (cVar5 != '\0') goto LAB_0010deb3;
         goto LAB_0010dc33;
      }

      if (plVar14[0x10] == 0) goto LAB_0010dc33;
      LAB_0010deb3:if (*(int*)( param_1 + 0xb8 ) != 0xb6) goto LAB_0010dc33;
      if (*(code**)( *(long*)param_1 + 0x198 ) == TIntermBinary::getRight) {
         plVar14 = *(long**)( param_1 + 200 );
      }
 else {
         plVar14 = (long*)( **(code**)( *(long*)param_1 + 0x198 ) )(param_1);
      }

      lVar13 = ( **(code**)( *plVar14 + 0x28 ) )();
      iVar6 = **(int**)( *(long*)( lVar13 + 0xc0 ) + 8 ) + 1;
   }
 else {
      iVar6 = ( **(code**)( *plVar14 + 0x38 ) )(plVar14);
      if (iVar6 != 0x10) {
         if (*(code**)( *plVar14 + 0x38 ) == TType::getBasicType) {
            uVar7 = ( uint ) * (byte*)( plVar14 + 1 );
         }
 else {
            uVar7 = ( **(code**)( *plVar14 + 0x38 ) )(plVar14);
         }

         goto LAB_0010de41;
      }

      LAB_0010dc33:iVar6 = 0;
   }

   local_68 = glslang::GetThreadPoolAllocator();
   local_50[0] = 0;
   local_58 = 0;
   local_60 = local_90;
   if (!bVar21) {
      if (local_b0 == 0x10) {
         pcVar16 = *(code**)( *plVar8 + 0xf0 );
         if (pcVar16 == TIntermTyped::getType) {
            plVar14 = plVar8 + 4;
         }
 else {
            plVar14 = (long*)( *pcVar16 )(plVar8);
         }

         pcVar16 = *(code**)( *plVar14 + 0x28 );
         if (pcVar16 != TType::getTypeName_abi_cxx11_) goto LAB_0010e23b;
         pbVar17 = (basic_string*)plVar14[0xf];
      }
 else {
         pcVar16 = *(code**)( *plVar8 + 400 );
         plVar14 = plVar8;
         if (pcVar16 == TIntermSymbol::getName_abi_cxx11_) {
            pbVar17 = (basic_string*)( plVar8 + 0x19 );
         }
 else {
            LAB_0010e23b:pbVar17 = (basic_string*)( *pcVar16 )(plVar14);
         }

      }

      std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign(local_c0, pbVar17);
   }

   lVar13 = *plVar8;
   if (*(code**)( lVar13 + 0x108 ) == TIntermTyped::getQualifier) {
      plVar14 = plVar8 + 6;
   }
 else {
      plVar14 = (long*)( **(code**)( lVar13 + 0x108 ) )(plVar8);
      lVar13 = *plVar8;
   }

   pppppuVar3 = local_80;
   bVar4 = *(byte*)( plVar14 + 1 );
   if (*(code**)( lVar13 + 0xf0 ) == TIntermTyped::getType) {
      plVar8 = plVar8 + 4;
   }
 else {
      plVar8 = (long*)( **(code**)( lVar13 + 0xf0 ) )(plVar8);
   }

   blowUpActiveAggregate(this, plVar8, local_c0, local_a8, pppppuVar3, local_94, local_ac, iVar6, 0xffffffffffffffff, 0, bVar4 & 0x7f, 1);
   LAB_0010dd10:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* glslang::TReflectionTraverser::addUniform(glslang::TIntermSymbol const&) */void glslang::TReflectionTraverser::addUniform(TReflectionTraverser *this, TIntermSymbol *param_1) {
   _Rb_tree_node_base *p_Var1;
   TReflectionTraverser TVar2;
   TIntermSymbol TVar3;
   undefined1 *__src;
   ulong __n;
   _Rb_tree_node_base *p_Var4;
   int iVar5;
   undefined4 uVar6;
   uint uVar7;
   _Rb_tree_node_base *p_Var8;
   _Rb_tree_node_base *p_Var9;
   long lVar10;
   TIntermSymbol *pTVar11;
   basic_string *pbVar12;
   TType *pTVar13;
   size_t __n_00;
   _Rb_tree_node_base *p_Var14;
   undefined4 uVar15;
   long in_FS_OFFSET;
   bool bVar16;
   undefined8 local_88;
   undefined8 ***local_80;
   undefined8 ***local_78;
   undefined8 local_70;
   ulong local_68;
   ulong *local_60;
   ulong local_58;
   ulong local_50[2];
   long local_40;
   p_Var1 = (_Rb_tree_node_base*)( this + 0x50 );
   p_Var9 = *(_Rb_tree_node_base**)( this + 0x58 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   p_Var4 = p_Var9;
   p_Var14 = p_Var1;
   if (p_Var9 == (_Rb_tree_node_base*)0x0) {
      LAB_0010e513:if (p_Var14 != *(_Rb_tree_node_base**)( this + 0x60 )) {
         lVar10 = std::_Rb_tree_decrement(p_Var14);
         pTVar11 = *(TIntermSymbol**)( lVar10 + 0x20 );
         goto LAB_0010e393;
      }

      LAB_0010e398:bVar16 = true;
      if (p_Var14 != p_Var1) {
         bVar16 = param_1 < *(TIntermSymbol**)( p_Var14 + 0x20 );
      }

      p_Var9 = (_Rb_tree_node_base*)operator_new(0x28);
      *(TIntermSymbol**)( p_Var9 + 0x20 ) = param_1;
      std::_Rb_tree_insert_and_rebalance(bVar16, p_Var9, p_Var14, p_Var1);
      *(long*)( this + 0x70 ) = *(long*)( this + 0x70 ) + 1;
   }
 else {
      do {
         while (true) {
            p_Var8 = p_Var4;
            if (*(TIntermSymbol**)( p_Var8 + 0x20 ) < param_1) break;
            p_Var4 = *(_Rb_tree_node_base**)( p_Var8 + 0x10 );
            p_Var14 = p_Var8;
            if (*(_Rb_tree_node_base**)( p_Var8 + 0x10 ) == (_Rb_tree_node_base*)0x0) goto LAB_0010e339;
         }
;
         p_Var4 = *(_Rb_tree_node_base**)( p_Var8 + 0x18 );
      }
 while ( *(_Rb_tree_node_base**)( p_Var8 + 0x18 ) != (_Rb_tree_node_base*)0x0 );
      LAB_0010e339:if (( p_Var1 != p_Var14 ) && ( *(TIntermSymbol**)( p_Var14 + 0x20 ) <= param_1 )) goto LAB_0010e344;
      do {
         p_Var14 = p_Var9;
         pTVar11 = *(TIntermSymbol**)( p_Var14 + 0x20 );
         p_Var9 = *(_Rb_tree_node_base**)( p_Var14 + 0x18 );
         if (param_1 < pTVar11) {
            p_Var9 = *(_Rb_tree_node_base**)( p_Var14 + 0x10 );
         }

      }
 while ( p_Var9 != (_Rb_tree_node_base*)0x0 );
      if (param_1 < pTVar11) goto LAB_0010e513;
      LAB_0010e393:if (pTVar11 < param_1) goto LAB_0010e398;
   }

   local_88 = glslang::GetThreadPoolAllocator();
   local_70 = 0;
   local_80 = &local_80;
   local_78 = &local_80;
   if (*(code**)( *(long*)param_1 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
      pTVar11 = param_1 + 200;
   }
 else {
      pTVar11 = (TIntermSymbol*)( **(code**)( *(long*)param_1 + 400 ) )(param_1);
   }

   local_68 = glslang::GetThreadPoolAllocator();
   local_60 = local_50;
   __src = *(undefined1**)( pTVar11 + 8 );
   __n = *(ulong*)( pTVar11 + 0x10 );
   if (__n < 0x10) {
      if (__n == 1) {
         local_50[0] = CONCAT71(local_50[0]._1_7_, *__src);
      }
 else if (__n != 0) goto LAB_0010e562;
   }
 else {
      if ((long)__n < 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("basic_string::_M_create");
      }

      local_60 = (ulong*)glslang::TPoolAllocator::allocate(local_68);
      local_50[0] = __n;
      LAB_0010e562:memcpy(local_60, __src, __n);
   }

   *(undefined1*)( (long)local_60 + __n ) = 0;
   local_58 = __n;
   if (*(code**)( *(long*)param_1 + 0xf0 ) == TIntermTyped::getType) {
      pTVar11 = param_1 + 0x20;
   }
 else {
      pTVar11 = (TIntermSymbol*)( **(code**)( *(long*)param_1 + 0xf0 ) )(param_1);
   }

   if (*(code**)( *(long*)pTVar11 + 0x38 ) == TType::getBasicType) {
      uVar7 = (uint)(byte)pTVar11[8];
   }
 else {
      uVar7 = ( **(code**)( *(long*)pTVar11 + 0x38 ) )();
   }

   if (uVar7 == 0x10) {
      iVar5 = -5;
      if (local_58 != 0) {
         __n_00 = 5;
         if (local_58 < 6) {
            __n_00 = local_58;
         }

         iVar5 = memcmp(local_60, "anon@", __n_00);
         if (iVar5 == 0) {
            iVar5 = (int)__n_00 + -5;
         }

      }

      if (*(code**)( *(long*)param_1 + 0xf0 ) == TIntermTyped::getType) {
         pTVar11 = param_1 + 0x20;
      }
 else {
         pTVar11 = (TIntermSymbol*)( **(code**)( *(long*)param_1 + 0xf0 ) )(param_1);
      }

      if (*(code**)( *(long*)pTVar11 + 0x28 ) == TType::getTypeName_abi_cxx11_) {
         pbVar12 = *(basic_string**)( pTVar11 + 0x78 );
      }
 else {
         pbVar12 = (basic_string*)( **(code**)( *(long*)pTVar11 + 0x28 ) )();
      }

      if (iVar5 == 0) {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_replace((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, 0, local_58, "", 0);
      }
 else {
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_68, pbVar12);
      }

      if (*(code**)( *(long*)param_1 + 0xf0 ) == TIntermTyped::getType) {
         pTVar11 = param_1 + 0x20;
      }
 else {
         pTVar11 = (TIntermSymbol*)( **(code**)( *(long*)param_1 + 0xf0 ) )(param_1);
      }

      iVar5 = glslang::TIntermediate::getBlockSize((TType*)pTVar11);
      if (*(code**)( *(long*)param_1 + 0xf0 ) == TIntermTyped::getType) {
         pTVar13 = (TType*)( param_1 + 0x20 );
      }
 else {
         pTVar13 = (TType*)( **(code**)( *(long*)param_1 + 0xf0 ) )(param_1);
      }

      uVar6 = addBlockName(this, pbVar12, pTVar13, iVar5);
      uVar15 = 0;
   }
 else {
      uVar15 = 0xffffffff;
      uVar6 = 0xffffffff;
   }

   lVar10 = *(long*)param_1;
   TVar2 = this[0x78];
   if (*(code**)( lVar10 + 0x110 ) == TIntermTyped::getQualifier) {
      pTVar11 = param_1 + 0x30;
   }
 else {
      pTVar11 = (TIntermSymbol*)( **(code**)( lVar10 + 0x110 ) )(param_1);
      lVar10 = *(long*)param_1;
   }

   TVar3 = pTVar11[8];
   if (*(code**)( lVar10 + 0xf0 ) == TIntermTyped::getType) {
      pTVar11 = param_1 + 0x20;
   }
 else {
      pTVar11 = (TIntermSymbol*)( **(code**)( lVar10 + 0xf0 ) )(param_1);
   }

   blowUpActiveAggregate(this, pTVar11, &local_68, &local_88, &local_80, uVar15, uVar6, 0, 0xffffffffffffffff, 0, (byte)TVar3 & 0x7f, TVar2);
   LAB_0010e344:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TReflectionTraverser::blowUpIOAggregate(bool, std::__cxx11::basic_string<char,
   std::char_traits<char>, glslang::std::allocator<char> > const&, glslang::TType const&) */void glslang::TReflectionTraverser::blowUpIOAggregate(TReflectionTraverser *this, bool param_1, basic_string *param_2, TType *param_3) {
   _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>> *this_00;
   uint *puVar1;
   long *plVar2;
   char *__src;
   undefined8 ***pppuVar3;
   undefined8 ***pppuVar4;
   ulong *puVar5;
   char cVar6;
   int iVar7;
   uint uVar8;
   size_t sVar9;
   undefined8 ****ppppuVar10;
   code *pcVar11;
   long lVar12;
   int *piVar13;
   undefined8 ****ppppuVar14;
   long lVar15;
   uint uVar16;
   ulong uVar17;
   ulong uVar18;
   ulong uVar19;
   int iVar20;
   long lVar21;
   vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>> *this_01;
   uint uVar22;
   undefined1 *puVar23;
   long in_FS_OFFSET;
   int local_2d8;
   undefined8 ***local_2b8[20];
   long *local_218;
   long local_210;
   long local_208[2];
   ulong local_1f8;
   undefined8 ***local_1f0;
   undefined8 ***local_1e8;
   undefined8 ***local_1e0[3];
   ulong local_1c8;
   undefined8 ***local_1c0;
   undefined8 ***local_1b8;
   undefined8 ***local_1b0[3];
   undefined8 local_198;
   ulong *local_190;
   undefined8 local_188;
   uint uStack_180;
   undefined4 uStack_17c;
   undefined8 local_168;
   char *local_160;
   ulong local_158;
   char local_150[24];
   undefined8 local_138;
   ulong *local_130;
   undefined8 local_128;
   ulong auStack_120[4];
   ulong *local_100;
   undefined8 local_f8;
   ulong local_f0[3];
   undefined8 ***local_d8;
   undefined8 ***local_d0;
   undefined8 ***local_c8;
   undefined8 ***local_c0[3];
   ulong *local_a8;
   char *local_a0;
   ulong local_98;
   char local_90[56];
   char local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1f8 = glslang::GetThreadPoolAllocator();
   puVar23 = *(undefined1**)( param_2 + 8 );
   ppppuVar14 = *(undefined8*****)( param_2 + 0x10 );
   local_1f0 = local_1e0;
   if (ppppuVar14 < (undefined8****)0x10) {
      if (ppppuVar14 == (undefined8****)0x1) {
         local_1e0[0] = (undefined8***)CONCAT71(local_1e0[0]._1_7_, *puVar23);
      }
 else if (ppppuVar14 != (undefined8****)0x0) goto LAB_0010f030;
   }
 else {
      if ((long)ppppuVar14 < 0) {
         LAB_0010f78e:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
      }

      local_1f0 = (undefined8***)glslang::TPoolAllocator::allocate(local_1f8);
      local_1e0[0] = ppppuVar14;
      LAB_0010f030:memcpy(local_1f0, puVar23, (size_t)ppppuVar14);
   }

   *(undefined1*)( (long)local_1f0 + (long)ppppuVar14 ) = 0;
   lVar15 = *(long*)param_3;
   local_1e8 = ppppuVar14;
   if (*(code**)( lVar15 + 0x38 ) == TType::getBasicType) {
      uVar8 = (uint)(byte)param_3[8];
      if (param_3[8] != (TType)0x10) {
         LAB_0010e7ed:if (( uVar8 == 0xf ) || ( ( ( lVar15 = *(long*)( param_3 + 0x60 ) ),lVar15 != 0 && ( lVar12 = *(long*)( lVar15 + 8 ) ),lVar12 != 0 ) ) && ( 1 < (int)( *(long*)( lVar12 + 0x10 ) - *(long*)( lVar12 + 8 ) >> 4 ) )) goto LAB_0010e821;
         lVar12 = *(long*)( this + 0x40 );
         if (( *(byte*)( lVar12 + 8 ) & 2 ) != 0) {
            if (*(code**)( *(long*)param_3 + 0xe8 ) == TType::isArray) {
               if (lVar15 == 0) goto LAB_0010eef7;
               LAB_0010ee35:local_a8 = (ulong*)glslang::GetThreadPoolAllocator();
               local_a0 = local_90;
               std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_a8, &_LC27);
               puVar5 = local_190;
               if (0x7fffffffffffffffU - (long)local_1e8 < local_98) goto LAB_0010f77d;
               ppppuVar14 = (undefined8****)( local_98 + (long)local_1e8 );
               ppppuVar10 = (undefined8****)local_1e0[0];
               if ((undefined8****)local_1f0 == local_1e0) {
                  ppppuVar10 = (undefined8****)0xf;
               }

               if (ppppuVar10 < ppppuVar14) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_1f8, (ulong)local_1e8, 0, local_a0, local_98);
               }
 else if (local_98 != 0) {
                  if (local_98 == 1) {
                     *(char*)( (long)local_1f0 + (long)local_1e8 ) = *local_a0;
                  }
 else {
                     memcpy((char*)( (long)local_1f0 + (long)local_1e8 ), local_a0, local_98);
                  }

               }

               *(undefined1*)( (long)local_1f0 + (long)ppppuVar14 ) = 0;
               local_1e8 = ppppuVar14;
            }
 else {
               cVar6 = ( **(code**)( *(long*)param_3 + 0xe8 ) )(param_3);
               if (cVar6 != '\0') goto LAB_0010ee35;
            }

            lVar12 = *(long*)( this + 0x40 );
         }

         LAB_0010eef7:if (param_1) {
            this_01 = (vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>*)( lVar12 + 0x158 );
            local_210 = 3;
            puVar23 = &_LC31;
         }
 else {
            this_01 = (vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>*)( lVar12 + 0x170 );
            local_210 = 4;
            puVar23 = &_LC32;
         }

         if ((uint)local_210 != 0) {
            uVar8 = 0;
            do {
               uVar19 = (ulong)uVar8;
               uVar8 = uVar8 + 1;
               *(undefined1*)( (long)local_208 + uVar19 ) = puVar23[uVar19];
            }
 while ( uVar8 < (uint)local_210 );
         }

         pppuVar3 = local_1f0;
         *(undefined1*)( (long)local_208 + local_210 ) = 0;
         local_218 = local_208;
         sVar9 = strlen((char*)local_1f0);
         puVar5 = local_190;
         if (0x3fffffffffffffffU - local_210 < sVar9) {
            LAB_0010f77d:local_190 = puVar5;
            /* WARNING: Subroutine does not return */
            std::__throw_length_error("basic_string::append");
         }

         std::__cxx11::string::_M_append((char*)&local_218, (ulong)pppuVar3);
         lVar15 = *(long*)( this + 0x40 );
         this_00 = (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)( lVar15 + 0x68 );
         lVar12 = std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::find(this_00, (string*)&local_218);
         if (lVar12 == lVar15 + 0x70) {
            lVar15 = *(long*)( this_01 + 8 );
            lVar12 = *(long*)this_01;
            piVar13 = (int*)std::map<std::__cxx11::string,int,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::operator []((map<std::__cxx11::string,int,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)this_00, (string*)&local_218);
            *piVar13 = (int)( lVar15 - lVar12 >> 4 ) * -0x33333333;
            lVar15 = *(long*)param_3;
            if (*(code**)( lVar15 + 0xe8 ) == TType::isArray) {
               if (*(long*)( param_3 + 0x60 ) != 0) goto LAB_0010f660;
               LAB_0010f46c:local_2d8 = 1;
            }
 else {
               cVar6 = ( **(code**)( lVar15 + 0xe8 ) )(param_3);
               if (cVar6 == '\0') goto LAB_0010f46c;
               lVar15 = *(long*)param_3;
               LAB_0010f660:if (*(code**)( lVar15 + 0x78 ) == TType::getOuterArraySize) {
                  local_2d8 = **(int**)( *(long*)( *(long*)( param_3 + 0x60 ) + 8 ) + 8 );
               }
 else {
                  local_2d8 = ( **(code**)( lVar15 + 0x78 ) )(param_3);
               }

            }

            iVar20 = mapToGlType(param_3);
            pppuVar3 = local_1f0;
            local_d8 = &local_c8;
            if ((undefined8****)local_1f0 == (undefined8****)0x0) {
               /* WARNING: Subroutine does not return */
               std::__throw_logic_error("basic_string: construction from null is not valid");
            }

            ppppuVar14 = (undefined8****)strlen((char*)local_1f0);
            local_2b8[0] = ppppuVar14;
            if (ppppuVar14 < (undefined8****)0x10) {
               ppppuVar10 = &local_c8;
               if (ppppuVar14 == (undefined8****)0x1) {
                  local_c8 = (undefined8***)CONCAT71(local_c8._1_7_, *(undefined1*)pppuVar3);
               }
 else if (ppppuVar14 != (undefined8****)0x0) goto LAB_0010f6a0;
            }
 else {
               local_d8 = (undefined8***)std::__cxx11::string::_M_create((ulong*)&local_d8, (ulong)local_2b8);
               local_c8 = local_2b8[0];
               ppppuVar10 = (undefined8****)local_d8;
               LAB_0010f6a0:memcpy(ppppuVar10, pppuVar3, (size_t)ppppuVar14);
               ppppuVar10 = (undefined8****)local_d8;
            }

            *(undefined1*)( (long)ppppuVar10 + (long)local_2b8[0] ) = 0;
            local_d0 = local_2b8[0];
            TObjectReflection::TObjectReflection((TObjectReflection*)&local_a8, (string*)&local_d8, param_3, 0, iVar20, local_2d8, 0);
            std::vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>::emplace_back<glslang::TObjectReflection>(this_01, (TObjectReflection*)&local_a8);
            if (local_a8 != &local_98) {
               operator_delete(local_a8, local_98 + 1);
            }

            if ((undefined8****)local_d8 != &local_c8) {
               operator_delete(local_d8, (long)local_c8 + 1);
            }

            *(uint*)( *(long*)( this_01 + 8 ) + -0xc ) = *(uint*)( *(long*)( this_01 + 8 ) + -0xc ) | 1 << ( ( byte ) * *(undefined4**)( this + 0x38 ) & 0x1f );
         }
 else {
            puVar1 = (uint*)( (long)*(int*)( lVar12 + 0x40 ) * 0x50 + *(long*)this_01 + 0x44 );
            *puVar1 = *puVar1 | 1 << ( ( byte ) * *(undefined4**)( this + 0x38 ) & 0x1f );
         }

         if (local_218 != local_208) {
            operator_delete(local_218, local_208[0] + 1);
         }

         goto LAB_0010ec10;
      }

   }
 else {
      iVar20 = ( **(code**)( lVar15 + 0x38 ) )(param_3);
      if (iVar20 != 0x10) {
         if (*(code**)( *(long*)param_3 + 0x38 ) == TType::getBasicType) {
            uVar8 = (uint)(byte)param_3[8];
         }
 else {
            uVar8 = ( **(code**)( *(long*)param_3 + 0x38 ) )(param_3);
         }

         goto LAB_0010e7ed;
      }

      LAB_0010e821:lVar15 = *(long*)param_3;
   }

   if (*(code**)( lVar15 + 0xe8 ) == TType::isArray) {
      if (*(long*)( param_3 + 0x60 ) == 0) {
         LAB_0010ec65:lVar15 = *(long*)( param_3 + 0x68 );
         if (0 < (int)( *(long*)( lVar15 + 0x10 ) - *(long*)( lVar15 + 8 ) >> 5 )) {
            lVar12 = 0;
            do {
               local_d8 = (undefined8***)glslang::GetThreadPoolAllocator();
               pppuVar4 = local_1e8;
               pppuVar3 = local_1f0;
               local_d0 = local_c0;
               if (local_1e8 < (undefined8****)0x10) {
                  if ((undefined8****)local_1e8 == (undefined8****)0x1) {
                     local_c0[0] = (undefined8***)CONCAT71(local_c0[0]._1_7_, *(undefined1*)local_1f0);
                  }
 else if ((undefined8****)local_1e8 != (undefined8****)0x0) goto LAB_0010f213;
               }
 else {
                  if ((long)local_1e8 < 0) goto LAB_0010f78e;
                  local_d0 = (undefined8***)glslang::TPoolAllocator::allocate((ulong)local_d8);
                  local_c0[0] = pppuVar4;
                  LAB_0010f213:memcpy(local_d0, pppuVar3, (size_t)pppuVar4);
               }

               local_c8 = pppuVar4;
               *(undefined1*)( (long)local_d0 + (long)pppuVar4 ) = 0;
               if ((undefined8****)pppuVar4 != (undefined8****)0x0) {
                  puVar5 = local_190;
                  if ((undefined8****)pppuVar4 == (undefined8****)0x7fffffffffffffff) goto LAB_0010f77d;
                  ppppuVar14 = (undefined8****)local_c0[0];
                  if ((undefined8****)local_d0 == local_c0) {
                     ppppuVar14 = (undefined8****)0xf;
                  }

                  if (ppppuVar14 < (undefined8****)( (long)pppuVar4 + 1U )) {
                     std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_d8, (ulong)pppuVar4, 0, ".", 1);
                  }
 else {
                     *(undefined1*)( (long)local_d0 + (long)pppuVar4 ) = 0x2e;
                  }

                  *(undefined1*)( (long)local_d0 + 1U + (long)pppuVar4 ) = 0;
                  local_c8 = (undefined8****)( (long)pppuVar4 + 1U );
               }

               plVar2 = *(long**)( lVar12 * 0x20 + *(long*)( lVar15 + 8 ) );
               pcVar11 = *(code**)( *plVar2 + 0x30 );
               if (pcVar11 == TType::getFieldName_abi_cxx11_) {
                  lVar21 = plVar2[0xe];
               }
 else {
                  lVar21 = ( *pcVar11 )();
               }

               uVar19 = *(ulong*)( lVar21 + 0x10 );
               __src = *(char**)( lVar21 + 8 );
               puVar5 = local_190;
               if (0x7fffffffffffffffU - (long)local_c8 < uVar19) goto LAB_0010f77d;
               ppppuVar14 = (undefined8****)( uVar19 + (long)local_c8 );
               ppppuVar10 = (undefined8****)local_c0[0];
               if ((undefined8****)local_d0 == local_c0) {
                  ppppuVar10 = (undefined8****)0xf;
               }

               if (ppppuVar10 < ppppuVar14) {
                  std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_d8, (ulong)local_c8, 0, __src, uVar19);
               }
 else if (uVar19 != 0) {
                  if (uVar19 == 1) {
                     *(char*)( (long)local_d0 + (long)local_c8 ) = *__src;
                  }
 else {
                     memcpy((char*)( (long)local_d0 + (long)local_c8 ), __src, uVar19);
                  }

               }

               lVar21 = lVar12 + 1;
               *(undefined1*)( (long)local_d0 + (long)ppppuVar14 ) = 0;
               local_c8 = ppppuVar14;
               TType::TType((TType*)local_2b8, param_3, (int)lVar12, false);
               blowUpIOAggregate(this, param_1, (basic_string*)&local_d8, (TType*)local_2b8);
               lVar12 = lVar21;
            }
 while ( (int)lVar21 < (int)( *(long*)( lVar15 + 0x10 ) - *(long*)( lVar15 + 8 ) >> 5 ) );
         }

         goto LAB_0010ec10;
      }

   }
 else {
      cVar6 = ( **(code**)( lVar15 + 0xe8 ) )(param_3);
      if (cVar6 == '\0') goto LAB_0010ec65;
      lVar15 = *(long*)param_3;
   }

   pcVar11 = *(code**)( lVar15 + 0x78 );
   iVar20 = 0;
   if (pcVar11 != TType::getOuterArraySize) goto LAB_0010ebef;
   LAB_0010e866:iVar7 = **(int**)( *(long*)( *(long*)( param_3 + 0x60 ) + 8 ) + 8 );
   if (iVar7 < 1) {
      iVar7 = 1;
   }

   if (iVar20 < iVar7) {
      do {
         local_1c8 = glslang::GetThreadPoolAllocator();
         pppuVar4 = local_1e8;
         pppuVar3 = local_1f0;
         local_1c0 = local_1b0;
         if (local_1e8 < (undefined8****)0x10) {
            if ((undefined8****)local_1e8 == (undefined8****)0x1) {
               local_1b0[0] = (undefined8***)CONCAT71(local_1b0[0]._1_7_, *(undefined1*)local_1f0);
            }
 else if ((undefined8****)local_1e8 != (undefined8****)0x0) goto LAB_0010f088;
         }
 else {
            if ((long)local_1e8 < 0) goto LAB_0010f78e;
            local_1c0 = (undefined8***)glslang::TPoolAllocator::allocate(local_1c8);
            local_1b0[0] = pppuVar4;
            LAB_0010f088:memcpy(local_1c0, pppuVar3, (size_t)pppuVar4);
         }

         local_1b8 = pppuVar4;
         *(undefined1*)( (long)local_1c0 + (long)pppuVar4 ) = 0;
         __snprintf_chk(local_58, 0x10, 2, 0x10, &_LC24, iVar20);
         local_168 = glslang::GetThreadPoolAllocator();
         local_160 = local_150;
         sVar9 = strlen(local_58);
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>(&local_168, local_58, local_58 + sVar9);
         local_198 = glslang::GetThreadPoolAllocator();
         local_190 = (ulong*)&uStack_180;
         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_construct<char_const*>((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_198, &_LC25);
         puVar5 = local_190;
         if (0x7fffffffffffffff - local_188 < local_158) goto LAB_0010f77d;
         uVar19 = local_158 + local_188;
         if (local_190 == (ulong*)&uStack_180) {
            uVar18 = 0xf;
         }
 else {
            uVar18 = CONCAT44(uStack_17c, uStack_180);
         }

         if (uVar18 < uVar19) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_198, local_188, 0, local_160, local_158);
         }
 else if (local_158 != 0) {
            if (local_158 == 1) {
               *(char*)( (long)local_190 + local_188 ) = *local_160;
            }
 else {
               memcpy((char*)( (long)local_190 + local_188 ), local_160, local_158);
            }

         }

         uVar8 = uStack_180;
         *(char*)( (long)local_190 + uVar19 ) = '\0';
         local_138 = local_198;
         local_128 = uVar19;
         if (local_190 == (ulong*)&uStack_180) {
            uVar18 = uVar19 + 1;
            uVar22 = (uint)uVar18;
            uVar17 = uVar18 & 0xffffffff;
            if (uVar22 < 8) {
               if (( uVar18 & 4 ) == 0) {
                  if (uVar22 != 0) {
                     auStack_120[0] = CONCAT71(auStack_120[0]._1_7_, (undefined1)uStack_180);
                     if (( uVar18 & 2 ) != 0) {
                        *(undefined2*)( (long)auStack_120 + ( uVar17 - 2 ) ) = *(undefined2*)( (long)&local_188 + uVar17 + 6 );
                     }

                  }

               }
 else {
                  auStack_120[0] = CONCAT44(auStack_120[0]._4_4_, uStack_180);
                  *(undefined4*)( (long)auStack_120 + ( uVar17 - 4 ) ) = *(undefined4*)( (long)&local_188 + uVar17 + 4 );
               }

            }
 else {
               *(undefined8*)( (long)auStack_120 + ( ( uVar18 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)&local_188 + ( uVar18 & 0xffffffff ) );
               if (7 < uVar22 - 1) {
                  uVar16 = 0;
                  do {
                     uVar18 = (ulong)uVar16;
                     uVar16 = uVar16 + 8;
                     *(undefined8*)( (long)auStack_120 + uVar18 ) = *(undefined8*)( (long)local_190 + uVar18 );
                  }
 while ( uVar16 < ( uVar22 - 1 & 0xfffffff8 ) );
               }

            }

            uVar18 = 0xf;
            local_130 = auStack_120;
         }
 else {
            local_130 = local_190;
            uVar18 = CONCAT44(uStack_17c, uStack_180);
            local_188 = 0;
            uStack_180 = uStack_180 & 0xffffff00;
            auStack_120[0] = uVar18;
            puVar5 = (ulong*)&uStack_180;
            if (uVar19 == 0x7fffffffffffffff) goto LAB_0010f77d;
            if (local_190 == auStack_120) {
               uVar18 = 0xf;
            }

         }

         uStack_180 = uVar8 & 0xffffff00;
         uVar17 = uVar19 + 1;
         local_188 = 0;
         if (uVar18 < uVar17) {
            local_190 = (ulong*)&uStack_180;
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_138, uVar19, 0, "]", 1);
         }
 else {
            *(char*)( (long)local_130 + uVar19 ) = ']';
            local_190 = (ulong*)&uStack_180;
         }

         local_128 = uVar17;
         *(char*)( (long)local_130 + uVar17 ) = '\0';
         auStack_120[3] = local_138;
         local_100 = local_f0;
         if (local_130 == auStack_120) {
            uVar19 = uVar19 + 2;
            uVar8 = (uint)uVar19;
            if (uVar8 < 8) {
               if (( uVar19 & 4 ) == 0) {
                  if (uVar8 != 0) {
                     local_f0[0] = CONCAT71(local_f0[0]._1_7_, (undefined1)auStack_120[0]);
                     if (( uVar19 & 2 ) != 0) {
                        *(undefined2*)( (long)local_f0 + ( ( uVar19 & 0xffffffff ) - 2 ) ) = *(undefined2*)( (long)auStack_120 + ( ( uVar19 & 0xffffffff ) - 2 ) );
                     }

                  }

               }
 else {
                  local_f0[0] = CONCAT44(local_f0[0]._4_4_, (undefined4)auStack_120[0]);
                  *(undefined4*)( (long)local_f0 + ( ( uVar19 & 0xffffffff ) - 4 ) ) = *(undefined4*)( (long)auStack_120 + ( ( uVar19 & 0xffffffff ) - 4 ) );
               }

            }
 else {
               *(undefined8*)( (long)local_f0 + ( ( uVar19 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)auStack_120 + ( ( uVar19 & 0xffffffff ) - 8 ) );
               if (7 < uVar8 - 1) {
                  uVar22 = 0;
                  do {
                     uVar19 = (ulong)uVar22;
                     uVar22 = uVar22 + 8;
                     *(undefined8*)( (long)local_100 + uVar19 ) = *(undefined8*)( (long)local_130 + uVar19 );
                  }
 while ( uVar22 < ( uVar8 - 1 & 0xfffffff8 ) );
               }

            }

         }
 else {
            local_100 = local_130;
            local_f0[0] = auStack_120[0];
         }

         local_f8 = uVar17;
         auStack_120[0] = auStack_120[0] & 0xffffffffffffff00;
         local_128 = 0;
         puVar5 = local_190;
         local_130 = auStack_120;
         if (0x7fffffffffffffffU - (long)local_1b8 < uVar17) goto LAB_0010f77d;
         ppppuVar14 = (undefined8****)( uVar17 + (long)local_1b8 );
         ppppuVar10 = (undefined8****)local_1b0[0];
         if ((undefined8****)local_1c0 == local_1b0) {
            ppppuVar10 = (undefined8****)0xf;
         }

         if (ppppuVar10 < ppppuVar14) {
            std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_mutate((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_1c8, (ulong)local_1b8, 0, (char*)local_100, uVar17);
         }
 else if (uVar17 != 0) {
            if (uVar17 == 1) {
               *(char*)( (long)local_1c0 + (long)local_1b8 ) = (char)*local_100;
            }
 else {
               memcpy((char*)( (long)local_1c0 + (long)local_1b8 ), local_100, uVar17);
            }

         }

         *(undefined1*)( (long)local_1c0 + (long)ppppuVar14 ) = 0;
         iVar20 = iVar20 + 1;
         local_1b8 = ppppuVar14;
         TType::TType((TType*)local_2b8, param_3, 0, false);
         blowUpIOAggregate(this, param_1, (basic_string*)&local_1c8, (TType*)local_2b8);
         pcVar11 = *(code**)( *(long*)param_3 + 0x78 );
         if (pcVar11 == TType::getOuterArraySize) goto LAB_0010e866;
         LAB_0010ebef:iVar7 = ( *pcVar11 )(param_3);
         if (iVar7 < 1) {
            iVar7 = 1;
         }

         if (iVar7 <= iVar20) break;
      }
 while ( true );
   }

   LAB_0010ec10:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* glslang::TReflectionTraverser::addPipeIOVariable(glslang::TIntermSymbol const&) */void glslang::TReflectionTraverser::addPipeIOVariable(TReflectionTraverser *this, TIntermSymbol *param_1) {
   _Rb_tree_node_base *p_Var1;
   uint *puVar2;
   ulong uVar3;
   undefined1 *puVar4;
   char *__s;
   long lVar5;
   char cVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   _Rb_tree_node_base *p_Var10;
   _Rb_tree_node_base *p_Var11;
   undefined8 ****ppppuVar12;
   _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>> *p_Var13;
   TIntermSymbol *pTVar14;
   TType *pTVar15;
   int *piVar16;
   long lVar17;
   size_t __n;
   undefined8 ****ppppuVar18;
   _Rb_tree_node_base *p_Var19;
   _Rb_tree_node_base *p_Var20;
   TIntermSymbol *pTVar21;
   _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>> *this_00;
   vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>> *this_01;
   long in_FS_OFFSET;
   bool bVar22;
   undefined8 ***local_198[20];
   undefined8 local_f8;
   undefined1 *local_f0;
   undefined8 local_e8;
   undefined1 local_e0[24];
   ulong *local_c8;
   ulong *local_c0;
   ulong local_b8;
   ulong local_b0[3];
   undefined8 ***local_98;
   undefined8 ***local_90;
   undefined8 ***local_88;
   undefined8 ***local_80[8];
   long local_40;
   p_Var1 = (_Rb_tree_node_base*)( this + 0x50 );
   p_Var11 = *(_Rb_tree_node_base**)( this + 0x58 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   p_Var19 = p_Var11;
   p_Var20 = p_Var1;
   if (p_Var11 == (_Rb_tree_node_base*)0x0) {
      p_Var19 = p_Var1;
      if (p_Var1 == *(_Rb_tree_node_base**)( this + 0x60 )) {
         bVar22 = true;
         goto LAB_0010f88f;
      }

      LAB_0010fab5:lVar17 = std::_Rb_tree_decrement(p_Var19);
      pTVar14 = *(TIntermSymbol**)( lVar17 + 0x20 );
      LAB_0010f87b:if (pTVar14 < param_1) goto LAB_0010f880;
   }
 else {
      do {
         while (true) {
            p_Var10 = p_Var19;
            if (*(TIntermSymbol**)( p_Var10 + 0x20 ) < param_1) break;
            p_Var19 = *(_Rb_tree_node_base**)( p_Var10 + 0x10 );
            p_Var20 = p_Var10;
            if (*(_Rb_tree_node_base**)( p_Var10 + 0x10 ) == (_Rb_tree_node_base*)0x0) goto LAB_0010f821;
         }
;
         p_Var19 = *(_Rb_tree_node_base**)( p_Var10 + 0x18 );
      }
 while ( *(_Rb_tree_node_base**)( p_Var10 + 0x18 ) != (_Rb_tree_node_base*)0x0 );
      LAB_0010f821:if (( p_Var1 != p_Var20 ) && ( *(TIntermSymbol**)( p_Var20 + 0x20 ) <= param_1 )) goto LAB_0010f82c;
      do {
         p_Var19 = p_Var11;
         pTVar14 = *(TIntermSymbol**)( p_Var19 + 0x20 );
         p_Var11 = *(_Rb_tree_node_base**)( p_Var19 + 0x18 );
         if (param_1 < pTVar14) {
            p_Var11 = *(_Rb_tree_node_base**)( p_Var19 + 0x10 );
         }

      }
 while ( p_Var11 != (_Rb_tree_node_base*)0x0 );
      if (param_1 >= pTVar14) goto LAB_0010f87b;
      if (*(_Rb_tree_node_base**)( this + 0x60 ) != p_Var19) goto LAB_0010fab5;
      LAB_0010f880:bVar22 = true;
      if (p_Var1 != p_Var19) {
         bVar22 = param_1 < *(TIntermSymbol**)( p_Var19 + 0x20 );
      }

      LAB_0010f88f:p_Var11 = (_Rb_tree_node_base*)operator_new(0x28);
      *(TIntermSymbol**)( p_Var11 + 0x20 ) = param_1;
      std::_Rb_tree_insert_and_rebalance(bVar22, p_Var11, p_Var19, p_Var1);
      *(long*)( this + 0x70 ) = *(long*)( this + 0x70 ) + 1;
   }

   lVar17 = *(long*)param_1;
   if (*(code**)( lVar17 + 400 ) == TIntermSymbol::getName_abi_cxx11_) {
      pTVar14 = param_1 + 200;
   }
 else {
      pTVar14 = (TIntermSymbol*)( **(code**)( lVar17 + 400 ) )(param_1);
      lVar17 = *(long*)param_1;
   }

   if (*(code**)( lVar17 + 0xf0 ) == TIntermTyped::getType) {
      pTVar15 = (TType*)( param_1 + 0x20 );
   }
 else {
      pTVar15 = (TType*)( **(code**)( lVar17 + 0xf0 ) )(param_1);
      lVar17 = *(long*)param_1;
   }

   if (*(code**)( lVar17 + 0x110 ) == TIntermTyped::getQualifier) {
      pTVar21 = param_1 + 0x30;
   }
 else {
      pTVar21 = (TIntermSymbol*)( **(code**)( lVar17 + 0x110 ) )(param_1);
   }

   lVar17 = *(long*)( this + 0x40 );
   if (( ( byte )((byte)pTVar21[8] & 0x7f) < 0x1c ) && ( bVar22 = bVar22 )) {
      this_01 = (vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>*)( lVar17 + 0x158 );
      this_00 = (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)( lVar17 + 0x98 );
   }
 else {
      this_01 = (vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>*)( lVar17 + 0x170 );
      this_00 = (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)( lVar17 + 200 );
      bVar22 = false;
   }

   if (( *(byte*)( lVar17 + 8 ) & 0x20 ) != 0) {
      uVar3 = *(ulong*)( pTVar14 + 0x10 );
      iVar7 = -5;
      if (uVar3 != 0) {
         __n = 5;
         if (uVar3 < 6) {
            __n = uVar3;
         }

         iVar7 = memcmp(*(void**)( pTVar14 + 8 ), "anon@", __n);
         if (iVar7 == 0) {
            iVar7 = (int)__n + -5;
         }

      }

      local_f8 = glslang::GetThreadPoolAllocator();
      local_e0[0] = 0;
      local_f0 = local_e0;
      local_e8 = 0;
      if (*(code**)( *(long*)pTVar15 + 0x38 ) == TType::getBasicType) {
         uVar9 = (uint)(byte)pTVar15[8];
      }
 else {
         uVar9 = ( **(code**)( *(long*)pTVar15 + 0x38 ) )(pTVar15);
      }

      if (uVar9 == 0x10) {
         if (iVar7 == 0) {
            local_c8 = (ulong*)glslang::GetThreadPoolAllocator();
            local_b0[0] = local_b0[0] & 0xffffffffffffff00;
            local_c0 = local_b0;
            local_b8 = 0;
         }
 else {
            if (*(code**)( *(long*)pTVar15 + 0x28 ) == TType::getTypeName_abi_cxx11_) {
               lVar17 = *(long*)( pTVar15 + 0x78 );
            }
 else {
               lVar17 = ( **(code**)( *(long*)pTVar15 + 0x28 ) )(pTVar15);
            }

            local_c8 = (ulong*)glslang::GetThreadPoolAllocator();
            local_c0 = local_b0;
            puVar4 = *(undefined1**)( lVar17 + 8 );
            uVar3 = *(ulong*)( lVar17 + 0x10 );
            if (uVar3 < 0x10) {
               if (uVar3 == 1) {
                  local_b0[0] = CONCAT71(local_b0[0]._1_7_, *puVar4);
               }
 else if (uVar3 != 0) goto LAB_0010ffa6;
            }
 else {
               if ((long)uVar3 < 0) goto LAB_0010ffe5;
               local_c0 = (ulong*)glslang::TPoolAllocator::allocate((ulong)local_c8);
               local_b0[0] = uVar3;
               LAB_0010ffa6:memcpy(local_c0, puVar4, uVar3);
            }

            *(undefined1*)( (long)local_c0 + uVar3 ) = 0;
            local_b8 = uVar3;
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_f8, (basic_string*)&local_c8);
      }
 else {
         if (iVar7 == 0) {
            local_98 = (undefined8***)glslang::GetThreadPoolAllocator();
            local_80[0] = (undefined8***)( (ulong)local_80[0] & 0xffffffffffffff00 );
            local_90 = local_80;
            local_88 = (undefined8****)0x0;
         }
 else {
            local_98 = (undefined8***)glslang::GetThreadPoolAllocator();
            local_90 = local_80;
            puVar4 = *(undefined1**)( pTVar14 + 8 );
            ppppuVar12 = *(undefined8*****)( pTVar14 + 0x10 );
            if (ppppuVar12 < (undefined8****)0x10) {
               if (ppppuVar12 == (undefined8****)0x1) {
                  local_80[0] = (undefined8***)CONCAT71(local_80[0]._1_7_, *puVar4);
               }
 else if (ppppuVar12 != (undefined8****)0x0) goto LAB_0010ff1e;
            }
 else {
               if ((long)ppppuVar12 < 0) {
                  LAB_0010ffe5:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::_M_create");
               }

               local_90 = (undefined8***)glslang::TPoolAllocator::allocate((ulong)local_98);
               local_80[0] = ppppuVar12;
               LAB_0010ff1e:memcpy(local_90, puVar4, (size_t)ppppuVar12);
            }

            *(undefined1*)( (long)local_90 + (long)ppppuVar12 ) = 0;
            local_88 = ppppuVar12;
         }

         std::__cxx11::basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>::_M_assign((basic_string<char,std::char_traits<char>,glslang::std::allocator<char>>*)&local_f8, (basic_string*)&local_98);
      }

      lVar17 = *(long*)pTVar15;
      if (*(code**)( lVar17 + 0xe8 ) == TType::isArray) {
         if (*(long*)( pTVar15 + 0x60 ) != 0) {
            LAB_0010fa72:if (*(code**)( lVar17 + 0x38 ) == TType::getBasicType) {
               uVar9 = (uint)(byte)pTVar15[8];
            }
 else {
               uVar9 = ( **(code**)( lVar17 + 0x38 ) )(pTVar15);
            }

            if (uVar9 == 0x10) {
               TType::TType((TType*)local_198, pTVar15, 0, false);
               blowUpIOAggregate(this, bVar22, (basic_string*)&local_f8, (TType*)local_198);
               goto LAB_0010f82c;
            }

         }

      }
 else {
         cVar6 = ( **(code**)( lVar17 + 0xe8 ) )(pTVar15);
         if (cVar6 != '\0') {
            lVar17 = *(long*)pTVar15;
            goto LAB_0010fa72;
         }

      }

      blowUpIOAggregate(this, bVar22, (basic_string*)&local_f8, pTVar15);
      goto LAB_0010f82c;
   }

   __s = *(char**)( pTVar14 + 8 );
   local_98 = &local_88;
   if (__s == (char*)0x0) {
      /* WARNING: Subroutine does not return */
      std::__throw_logic_error("basic_string: construction from null is not valid");
   }

   ppppuVar12 = (undefined8****)strlen(__s);
   local_198[0] = ppppuVar12;
   if (ppppuVar12 < (undefined8****)0x10) {
      ppppuVar18 = &local_88;
      if (ppppuVar12 == (undefined8****)0x1) {
         local_88 = (undefined8***)CONCAT71(local_88._1_7_, *__s);
      }
 else if (ppppuVar12 != (undefined8****)0x0) goto LAB_0010fcff;
   }
 else {
      local_98 = (undefined8***)std::__cxx11::string::_M_create((ulong*)&local_98, (ulong)local_198);
      local_88 = local_198[0];
      ppppuVar18 = (undefined8****)local_98;
      LAB_0010fcff:memcpy(ppppuVar18, __s, (size_t)ppppuVar12);
      ppppuVar18 = (undefined8****)local_98;
   }

   *(undefined1*)( (long)ppppuVar18 + (long)local_198[0] ) = 0;
   local_90 = local_198[0];
   p_Var13 = (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)std::_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,int>,std::_Select1st<std::pair<std::__cxx11::string_const,int>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::find(this_00, (string*)&local_98);
   if ((undefined8****)local_98 != &local_88) {
      operator_delete(local_98, (long)local_88 + 1);
   }

   if (p_Var13 != this_00 + 8) {
      puVar2 = (uint*)( (long)*(int*)( p_Var13 + 0x40 ) * 0x50 + *(long*)this_01 + 0x44 );
      *puVar2 = *puVar2 | 1 << ( ( byte ) * *(undefined4**)( this + 0x38 ) & 0x1f );
      goto LAB_0010f82c;
   }

   lVar17 = *(long*)( this_01 + 8 );
   lVar5 = *(long*)this_01;
   std::__cxx11::string::string<std::allocator<char>>((string*)&local_98, *(char**)( pTVar14 + 8 ), (allocator*)local_198);
   piVar16 = (int*)std::map<std::__cxx11::string,int,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>::operator []((map<std::__cxx11::string,int,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,int>>>*)this_00, (string*)&local_98);
   *piVar16 = (int)( lVar17 - lVar5 >> 4 ) * -0x33333333;
   std::__cxx11::string::_M_dispose();
   lVar17 = *(long*)pTVar15;
   if (*(code**)( lVar17 + 0xe8 ) == TType::isArray) {
      if (*(long*)( pTVar15 + 0x60 ) != 0) goto LAB_0010ff4e;
      LAB_0010fdbf:iVar7 = 1;
   }
 else {
      cVar6 = ( **(code**)( lVar17 + 0xe8 ) )(pTVar15);
      if (cVar6 == '\0') goto LAB_0010fdbf;
      lVar17 = *(long*)pTVar15;
      LAB_0010ff4e:if (*(code**)( lVar17 + 0x78 ) == TType::getOuterArraySize) {
         iVar7 = **(int**)( *(long*)( *(long*)( pTVar15 + 0x60 ) + 8 ) + 8 );
      }
 else {
         iVar7 = ( **(code**)( lVar17 + 0x78 ) )(pTVar15);
      }

   }

   iVar8 = mapToGlType(pTVar15);
   std::__cxx11::string::string<std::allocator<char>>((string*)&local_c8, *(char**)( pTVar14 + 8 ), (allocator*)local_198);
   TObjectReflection::TObjectReflection((TObjectReflection*)&local_98, (string*)&local_c8, pTVar15, 0, iVar8, iVar7, 0);
   std::vector<glslang::TObjectReflection,std::allocator<glslang::TObjectReflection>>::emplace_back<glslang::TObjectReflection>(this_01, (TObjectReflection*)&local_98);
   if ((undefined8****)local_98 != &local_88) {
      operator_delete(local_98, (long)local_88 + 1);
   }

   if (local_c8 != &local_b8) {
      operator_delete(local_c8, local_b8 + 1);
   }

   *(uint*)( *(long*)( this_01 + 8 ) + -0xc ) = *(uint*)( *(long*)( this_01 + 8 ) + -0xc ) | 1 << ( ( byte ) * *(undefined4**)( this + 0x38 ) & 0x1f );
   LAB_0010f82c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TType::~TType() */void glslang::TType::~TType(TType *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TSmallArrayVector::~TSmallArrayVector() */void glslang::TSmallArrayVector::~TSmallArrayVector(TSmallArrayVector *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&) */void std::__cxx11::string::string<std::allocator<char>>(string *this, char *param_1, allocator *param_2) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TType::TType(glslang::TType const&, int, bool) */void glslang::TType::TType(TType *this, TType *param_1, int param_2, bool param_3) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TReflectionTraverser::~TReflectionTraverser() */void glslang::TReflectionTraverser::~TReflectionTraverser(TReflectionTraverser *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* glslang::TIntermTraverser::~TIntermTraverser() */void glslang::TIntermTraverser::~TIntermTraverser(TIntermTraverser *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

