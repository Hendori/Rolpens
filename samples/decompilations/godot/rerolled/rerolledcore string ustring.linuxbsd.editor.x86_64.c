/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* double built_in_strtod<char32_t>(char32_t const*, char32_t**) */double built_in_strtod<char32_t>(wchar32 *param_1, wchar32 **param_2) {
   wchar32 *pwVar1;
   int iVar2;
   bool bVar3;
   wchar32 *pwVar4;
   double *pdVar5;
   wchar32 *pwVar6;
   byte bVar7;
   wchar32 wVar8;
   uint uVar9;
   byte bVar10;
   wchar32 wVar11;
   uint uVar12;
   ulong uVar13;
   int iVar14;
   double dVar15;
   double dVar16;
   wVar8 = *param_1;
   pwVar4 = param_1;
   if (1 < ( uint )(wVar8 + L'\xfffffff7')) goto LAB_0010002f;
   do {
      byte *pbVar1;
      byte bVar2;
      uint uVar3;
      byte *pbVar4;
      double *pdVar5;
      byte *pbVar6;
      char cVar7;
      int iVar8;
      byte bVar9;
      byte bVar10;
      int iVar11;
      uint uVar12;
      int iVar13;
      double dVar14;
      double dVar15;
      cVar7 = *param_1;
      if (1 < ( byte )(cVar7 - 9U)) goto LAB_00103d40;
      do {
         wchar_t *pwVar1;
         int iVar2;
         bool bVar3;
         wchar_t *pwVar4;
         double *pdVar5;
         wchar_t *pwVar6;
         byte bVar7;
         wchar_t wVar8;
         uint uVar9;
         byte bVar10;
         wchar_t wVar11;
         uint uVar12;
         ulong uVar13;
         int iVar14;
         double dVar15;
         double dVar16;
         wVar8 = *param_1;
         pwVar4 = param_1;
         if (1 < ( uint )(wVar8 + L'\xfffffff7')) goto LAB_00104047;
         do if (in_DL != '\0') {
            long *plVar1;
            float fVar2;
            bool bVar3;
            bool bVar4;
            bool bVar5;
            bool bVar6;
            double dVar7;
            bool bVar8;
            undefined4 extraout_EAX;
            int iVar9;
            int iVar10;
            wchar32 wVar11;
            wchar32 *pwVar12;
            int *piVar13;
            Variant *pVVar14;
            ulong uVar15;
            uint *puVar16;
            undefined1 uVar17;
            undefined1 *in_RCX;
            int in_EDX;
            String *pSVar18;
            char *pcVar19;
            uint uVar20;
            char *pcVar21;
            ulong uVar22;
            int iVar23;
            int iVar24;
            long lVar25;
            long in_FS_OFFSET;
            bool bVar26;
            bool bVar27;
            undefined1 auVar28[16];
            double in_XMM1_Qa;
            uint local_e4;
            String *local_d8;
            int local_c0;
            long local_80;
            char *local_78;
            char *local_70;
            char *local_68;
            undefined8 local_60;
            undefined8 local_58;
            double local_50;
            long local_40;
            undefined8 extraout_XMM0_Qb;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            if (( sprintf(Array_const&,bool*):: ) && ( iVar9 = __cxa_guard_acquire(&sprintf(Array_const & ::ZERO), iVar9 != 0) ) {
               local_60 = 1;
               sprintf(Array_const &, bool *)
               local_68 = "0";
               parse_latin1((String*)&sprintf(Array_const & ::ZERO, (StrRange*)&local_68));
               __cxa_atexit(~String, &sprintf(Array_const & ::ZERO, &__dso_handle));
               __cxa_guard_release (&sprintf(Array_const&,bool*)::ZERO);
            }

            if (( sprintf(Array_const&,bool*):: ) && ( iVar9 = __cxa_guard_acquire(&sprintf(Array_const & ::SPACE), iVar9 != 0) ) {
               local_60 = 1;
               sprintf(Array_const &, bool *)
               local_68 = " ";
               parse_latin1((String*)&sprintf(Array_const & ::SPACE, (StrRange*)&local_68));
               __cxa_atexit(~String, &sprintf(Array_const & ::SPACE, &__dso_handle));
               __cxa_guard_release (&sprintf(Array_const&,bool*)::SPACE);
            }

            if (( sprintf(Array_const&,bool*):: ) && ( iVar9 = __cxa_guard_acquire(&sprintf(Array_const & ::MINUS), iVar9 != 0) ) {
               local_60 = 1;
               sprintf(Array_const &, bool *)
               local_68 = "-";
               parse_latin1((String*)&sprintf(Array_const & ::MINUS, (StrRange*)&local_68));
               __cxa_atexit(~String, &sprintf(Array_const & ::MINUS, &__dso_handle));
               __cxa_guard_release (&sprintf(Array_const&,bool*)::MINUS);
            }

            if (( sprintf(Array_const&,bool*):: ) && ( iVar9 = __cxa_guard_acquire(&sprintf(Array_const & ::PLUS), iVar9 != 0) ) {
               local_60 = 1;
               sprintf(Array_const &, bool *)
               local_68 = "+";
               parse_latin1((String*)&sprintf(Array_const & ::PLUS, (StrRange*)&local_68));
               __cxa_atexit(~String, &sprintf(Array_const & ::PLUS, &__dso_handle));
               __cxa_guard_release (&sprintf(Array_const&,bool*)::PLUS);
            }

            local_80 = 0;
            pwVar12 = (wchar32*)get_data((String*)param_2);
            if (in_RCX != (undefined1*)0x0) {
               *in_RCX = 1;
            }

            wVar11 = *pwVar12;
            if (wVar11 == L'\0') {
               lVar25 = 0;
               iVar9 = 0;
               LAB_0010d5c5:iVar10 = Array::size();
               if (iVar10 == iVar9) {
                  if (in_RCX != (undefined1*)0x0) {
                     *in_RCX = 0;
                  }

                  *(long*)param_1 = lVar25;
                  goto LAB_0010c916;
               }

               local_60 = 0x34;
               local_68 = "not all arguments converted during string formatting";
               *(undefined8*)param_1 = 0;
               parse_latin1((String*)param_1, (StrRange*)&local_68);
            }
 else {
               bVar6 = false;
               bVar27 = false;
               bVar5 = false;
               iVar9 = 0;
               bVar3 = false;
               local_e4 = 0;
               bVar26 = false;
               do {
                  bVar4 = bVar26;
                  bVar8 = bVar27;
                  if (!bVar27) {
                     if (wVar11 == L'%') {
                        local_e4 = 0;
                        bVar3 = false;
                        bVar4 = false;
                        bVar5 = false;
                        bVar8 = true;
                     }
 else {
                        operator+=((String *)&
                        local_80,wVar11;
                     }

                     goto LAB_0010c839;
                  }

                  switch (wVar11) {
                     case L'%':
                     operator+=((String *)&
                     local_80,L'%';
                     bVar8 = false;
                     break;
                     default:
        local_60 = 0x1c;
        local_68 = "unsupported format character";
        *(undefined8 *)param_1 = 0;
        parse_latin1((String *)param_1,(StrRange *)&local_68);
        lVar25 = local_80;
        goto LAB_0010c8f9;
                     case L'*':
        iVar10 = Array::size();
        if (iVar10 <= iVar9) {
LAB_0010db71:
          *(undefined8 *)param_1 = 0;
          parse_latin1((String *)param_1,"not enough arguments for format string");
          lVar25 = local_80;
          goto LAB_0010c8f9;
        }
        puVar16 = (uint *)Array::operator[](in_EDX);
        uVar20 = *puVar16;
        piVar13 = (int *)Array::operator[](in_EDX);
        if ((1 < *piVar13 - 2U) &&
           ((0xd < uVar20 || ((0x3660UL >> ((ulong)uVar20 & 0x3f) & 1) == 0)))) {
          *(undefined8 *)param_1 = 0;
          parse_latin1((String *)param_1,"* wants number or vector");
          lVar25 = local_80;
          goto LAB_0010c8f9;
        }
        pVVar14 = (Variant *)Array::operator[](in_EDX);
        uVar20 = Variant::operator_cast_to_int(pVVar14);
        if (bVar26) {
          uVar20 = local_e4;
        }
        iVar9 = iVar9 + 1;
        local_e4 = uVar20;
        break;
                     case L'+':
        bVar5 = bVar27;
        break;
                     case L'-':
        bVar3 = bVar27;
        break;
                     case L'.':
        bVar4 = bVar27;
        if (bVar26) {
          *(undefined8 *)param_1 = 0;
          parse_latin1((String *)param_1,"too many decimal points in format");
          lVar25 = local_80;
          goto LAB_0010c8f9;
        }
        break;
                     case L'0':
                     case L'1':
                     case L'2':
                     case L'3':
                     case L'4':
                     case L'5':
                     case L'6':
                     case L'7':
                     case L'8':
                     case L'9':
        bVar8 = bVar26;
        if (!bVar26) {
          bVar26 = local_e4 == 0;
          if (wVar11 == L'0' && bVar26) {
            if (bVar3) {
              _err_print_error("sprintf","core/string/ustring.cpp",0x1624,
                               "\'0\' flag ignored with \'-\' flag in string format",0,1);
              local_e4 = 0;
              bVar8 = bVar3;
            }
            else {
              local_e4 = 0;
              bVar8 = wVar11 == L'0' && bVar26;
            }
          }
          else {
            local_e4 = wVar11 + L'\xffffffd0' + local_e4 * 10;
            bVar8 = bVar27;
          }
        }
        break;
                     case L'X':
                     case L'd':
                     case L'o':
                     case L'x':
        iVar10 = Array::size();
        if (iVar10 <= iVar9) goto LAB_0010db2a;
        piVar13 = (int *)Array::operator[](in_EDX);
        if (*piVar13 - 2U < 2) {
          uVar20 = wVar11 + L'\xffffffa8';
          pVVar14 = (Variant *)Array::operator[](in_EDX);
          uVar15 = Variant::operator_cast_to_long(pVVar14);
          uVar22 = uVar15;
          if (uVar20 < 0x18) {
            iVar10 = *(int *)(CSWTCH_1289 + (ulong)uVar20 * 4);
            uVar17 = CSWTCH_1290[uVar20];
            if (!bVar6) goto LAB_0010d62f;
            if (iVar10 == 0x10) goto LAB_0010c9e0;
LAB_0010d34a:
            local_70 = (char *)0x0;
            num_uint64((String *)&local_68,uVar22,iVar10,(bool)uVar17);
            pcVar19 = local_70;
            if (local_68 == (char *)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              if (pcVar19 != (char *)0x0) goto LAB_0010d397;
LAB_0010d684:
              pcVar19 = (char *)0x0;
            }
            else {
LAB_0010d36b:
              pcVar19 = local_68;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              local_70 = pcVar19;
              local_68 = (char *)0x0;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_0010d397:
              if (((long)uVar15 < 0) && (!bVar6)) goto LAB_0010d901;
            }
            if (bVar5) goto LAB_0010d901;
            bVar27 = false;
            uVar20 = local_e4;
          }
          else {
            if (bVar6) {
              uVar17 = 0;
LAB_0010c9e0:
              iVar10 = 0x10;
              if (0xffffffff7fffffff < uVar15) {
                uVar22 = uVar15 & 0xffffffff;
              }
              goto LAB_0010d34a;
            }
            uVar17 = false;
            iVar10 = 0x10;
LAB_0010d62f:
            local_70 = (char *)0x0;
            uVar22 = -uVar15;
            if (0 < (long)uVar15) {
              uVar22 = uVar15;
            }
            num_int64((String *)&local_68,uVar22,iVar10,(bool)uVar17);
            pcVar19 = local_70;
            if (local_68 != (char *)0x0) goto LAB_0010d36b;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if (pcVar19 != (char *)0x0) goto LAB_0010d397;
            if (-1 < (long)uVar15) goto LAB_0010d684;
LAB_0010d901:
            uVar20 = local_e4 - 1;
          }
          local_d8 = (String *)&local_70;
          if (bVar3) {
            rpad((String *)&local_68,(int)local_d8,(String *)(ulong)uVar20);
            pcVar21 = local_68;
            if (local_68 != pcVar19) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
              local_68 = (char *)0x0;
              local_70 = pcVar21;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if (bVar27) goto LAB_0010d448;
          }
          else {
            lpad((String *)&local_68,(int)local_d8,(String *)(ulong)uVar20);
            pcVar21 = local_68;
            if (local_68 != pcVar19) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
              local_68 = (char *)0x0;
              local_70 = pcVar21;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            if (bVar27) goto LAB_0010d507;
          }
          goto LAB_0010cf23;
        }
LAB_0010db54:
        *(undefined8 *)param_1 = 0;
        parse_latin1((String *)param_1,"a number is required");
        lVar25 = local_80;
        goto LAB_0010c8f9;
                     case L'c':
        iVar10 = Array::size();
        if (iVar10 <= iVar9) goto LAB_0010db2a;
        local_78 = (char *)0x0;
        piVar13 = (int *)Array::operator[](in_EDX);
        if (*piVar13 - 2U < 2) {
          pVVar14 = (Variant *)Array::operator[](in_EDX);
          iVar10 = Variant::operator_cast_to_int(pVVar14);
          if (iVar10 < 0) {
            *(undefined8 *)param_1 = 0;
            parse_latin1((String *)param_1,"unsigned integer is lower than minimum");
          }
          else if (iVar10 - 0xd800U < 0x800) {
            *(undefined8 *)param_1 = 0;
            parse_latin1((String *)param_1,"unsigned integer is invalid Unicode character");
          }
          else {
            if (iVar10 < 0x110000) {
              pVVar14 = (Variant *)Array::operator[](in_EDX);
              wVar11 = Variant::operator_cast_to_char32_t(pVVar14);
              chr((String *)&local_68,wVar11);
              pcVar19 = local_68;
              if (local_68 != (char *)0x0) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                pcVar19 = local_68;
                local_68 = (char *)0x0;
                local_78 = pcVar19;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              goto LAB_0010d86f;
            }
            *(undefined8 *)param_1 = 0;
            parse_latin1((String *)param_1,"unsigned integer is greater than maximum");
          }
        }
        else {
          piVar13 = (int *)Array::operator[](in_EDX);
          if (*piVar13 == 4) {
            Array::operator[](in_EDX);
            Variant::operator_cast_to_String((Variant *)&local_68);
            if (local_68 == (char *)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            }
            else {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              pcVar19 = local_68;
              local_68 = (char *)0x0;
              local_78 = pcVar19;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              if ((pcVar19 != (char *)0x0) && (*(int *)(pcVar19 + -8) == 2)) {
LAB_0010d86f:
                local_d8 = (String *)&local_78;
                local_70 = (char *)0x0;
                local_68 = " ";
                local_60 = 1;
                if (bVar3) {
                  parse_latin1((String *)&local_70,(StrRange *)&local_68);
                  rpad((String *)&local_68,(int)local_d8,(String *)(ulong)local_e4);
                  pcVar21 = local_68;
                }
                else {
                  parse_latin1((String *)&local_70,(StrRange *)&local_68);
                  lpad((String *)&local_68,(int)local_d8,(String *)(ulong)local_e4);
                  pcVar21 = local_68;
                }
                local_68 = pcVar21;
                if (pcVar21 != pcVar19) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
                  local_68 = (char *)0x0;
                  local_78 = pcVar21;
                }
                goto LAB_0010cf09;
              }
            }
            local_60 = 0x2d;
            local_68 = "%c requires number or single-character string";
            *(undefined8 *)param_1 = 0;
            parse_latin1((String *)param_1,(StrRange *)&local_68);
          }
          else {
            *(undefined8 *)param_1 = 0;
            parse_latin1((String *)param_1,"%c requires number or single-character string");
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        lVar25 = local_80;
        goto LAB_0010c8f9;
                     case L'f':
        iVar10 = Array::size();
        if (iVar10 <= iVar9) goto LAB_0010db2a;
        piVar13 = (int *)Array::operator[](in_EDX);
        if (1 < *piVar13 - 2U) goto LAB_0010db54;
        local_d8 = (String *)&local_70;
        pVVar14 = (Variant *)Array::operator[](in_EDX);
        auVar28._0_8_ = Variant::operator_cast_to_double(pVVar14);
        auVar28._8_8_ = extraout_XMM0_Qb;
        uVar20 = movmskpd(extraout_EAX,auVar28);
        bVar27 = (uVar20 & 1) == 0;
        iVar10 = (int)local_d8;
        num(ABS(auVar28._0_8_),iVar10);
        pcVar19 = local_70;
        in_XMM1_Qa = _LC30;
        if ((double)((ulong)auVar28._0_8_ & _LC29) <= _LC30) {
          pad_decimals((int)(CowData<char32_t> *)&local_68);
          pcVar19 = local_68;
          if (local_70 != local_68) {
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
            pcVar19 = local_68;
            local_68 = (char *)0x0;
            local_70 = pcVar19;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
        pSVar18 = (String *)(ulong)((local_e4 - 1) + (uint)(bVar27 && !bVar5));
        if (bVar3) {
          rpad((String *)&local_68,iVar10,pSVar18);
          pcVar21 = local_68;
          if (pcVar19 != local_68) {
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
            local_68 = (char *)0x0;
            local_70 = pcVar21;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if (bVar27 && !bVar5) goto LAB_0010cf23;
LAB_0010d448:
          insert((int)&local_68,(String *)&local_70);
          if (local_70 != local_68) {
            pcVar19 = local_68;
            if (local_70 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_70 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_70 + -0x10,false);
                pcVar19 = local_68;
              }
            }
            local_68 = (char *)0x0;
            local_70 = pcVar19;
          }
        }
        else {
          lpad((String *)&local_68,iVar10,pSVar18);
          pcVar21 = local_68;
          if (pcVar19 != local_68) {
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
            local_68 = (char *)0x0;
            local_70 = pcVar21;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if (bVar27 && !bVar5) goto LAB_0010cf23;
LAB_0010d507:
          pcVar19 = local_70;
          insert((int)&local_68,(String *)&local_70);
          pcVar21 = local_68;
          if (local_68 != pcVar19) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            local_70 = pcVar21;
            local_68 = (char *)0x0;
          }
        }
        local_d8 = (String *)&local_70;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        goto LAB_0010cf23;
                     case L's':
        iVar10 = Array::size();
        if (iVar10 <= iVar9) goto LAB_0010db71;
        Array::operator[](in_EDX);
        Variant::operator_cast_to_String((Variant *)&local_78);
        local_70 = (char *)0x0;
        local_68 = " ";
        local_60 = 1;
        iVar10 = (int)(Variant *)&local_78;
        if (bVar3) {
          parse_latin1((String *)&local_70,(StrRange *)&local_68);
          rpad((String *)&local_68,iVar10,(String *)(ulong)local_e4);
          if (local_78 != local_68) {
LAB_0010ceed:
            pcVar19 = local_68;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            local_78 = pcVar19;
            local_68 = (char *)0x0;
          }
        }
        else {
          parse_latin1((String *)&local_70,(StrRange *)&local_68);
          lpad((String *)&local_68,iVar10,(String *)(ulong)local_e4);
          if (local_78 != local_68) goto LAB_0010ceed;
        }
LAB_0010cf09:
        local_d8 = (String *)&local_78;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010cf23:
        iVar9 = iVar9 + 1;
                     operator+=((String *)&
                     local_80,local_d8;
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
                     bVar8 = false;
                     break;
                     case L'u':
        bVar6 = bVar27;
        break;
                     case L'v':
        iVar10 = Array::size();
        if (iVar9 < iVar10) {
          puVar16 = (uint *)Array::operator[](in_EDX);
          uVar20 = *puVar16;
          if (uVar20 < 0xb) {
            if (uVar20 < 9) {
              if (1 < uVar20 - 5) goto LAB_0010da61;
              local_c0 = 1;
              iVar10 = 2;
            }
            else {
              local_c0 = 2;
              iVar10 = 3;
            }
          }
          else {
            if (1 < uVar20 - 0xc) {
LAB_0010da61:
              local_60 = 0x30;
              local_68 = "%v requires a vector type (Vector2/3/4/2i/3i/4i)";
              *(undefined8 *)param_1 = 0;
              parse_latin1((String *)param_1,(StrRange *)&local_68);
              lVar25 = local_80;
              goto LAB_0010c8f9;
            }
            local_c0 = 3;
            iVar10 = 4;
          }
          lVar25 = 0;
          pVVar14 = (Variant *)Array::operator[](in_EDX);
          local_58 = Variant::operator_cast_to_Vector4(pVVar14);
          local_78 = (char *)0x0;
          local_68 = "(";
          local_d8 = (String *)&local_78;
          local_60 = 1;
          local_50 = in_XMM1_Qa;
          parse_latin1(local_d8,(StrRange *)&local_68);
          dVar7 = _LC30;
          in_XMM1_Qa = _LC30;
          do {
            fVar2 = *(float *)((long)&local_58 + lVar25 * 4);
            iVar23 = (int)(CowData<char32_t> *)&local_70;
            num(ABS((double)fVar2),iVar23);
            iVar24 = (int)(String *)&local_68;
            pcVar19 = local_70;
            if ((double)((ulong)(double)fVar2 & _LC29) <= dVar7) {
              pad_decimals(iVar24);
              pcVar19 = local_68;
              if (local_70 != local_68) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                pcVar19 = local_68;
                local_68 = (char *)0x0;
                local_70 = pcVar19;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            }
            uVar20 = local_e4 - 1;
            if (0.0 <= fVar2) {
              uVar20 = local_e4;
            }
            if (bVar3) {
              rpad((String *)&local_68,iVar23,(String *)(ulong)uVar20);
              pcVar21 = local_68;
              if (local_68 != pcVar19) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                local_70 = pcVar21;
                local_68 = (char *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              if (fVar2 < 0.0) {
                insert(iVar24,(String *)&local_70);
                bVar27 = pcVar21 != local_68;
                pcVar21 = local_68;
                if (bVar27) {
LAB_0010d733:
                  pcVar21 = local_68;
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                  local_70 = pcVar21;
                  local_68 = (char *)0x0;
                }
LAB_0010d74f:
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              }
            }
            else {
              lpad((String *)&local_68,iVar23,(String *)(ulong)uVar20);
              pcVar21 = local_68;
              if (local_68 != pcVar19) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                local_70 = pcVar21;
                local_68 = (char *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              if (fVar2 < 0.0) {
                insert(iVar24,(String *)&local_70);
                bVar27 = local_68 != pcVar21;
                pcVar21 = local_68;
                if (bVar27) goto LAB_0010d733;
                goto LAB_0010d74f;
              }
            }
            operator+=(local_d8,(String *)&local_70);
            if ((int)lVar25 < local_c0) {
              operator+=(local_d8,", ");
            }
            if (pcVar21 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(pcVar21 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static(local_70 + -0x10,false);
              }
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 != iVar10);
          operator+=(local_d8,")");
          goto LAB_0010cf23;
        }
LAB_0010db2a:
        *(undefined8 *)param_1 = 0;
        parse_latin1((String *)param_1,"not enough arguments for format string");
        lVar25 = local_80;
        goto LAB_0010c8f9;
                  }

                  LAB_0010c839:bVar27 = bVar8;
                  lVar25 = local_80;
                  wVar11 = pwVar12[1];
                  pwVar12 = pwVar12 + 1;
                  bVar26 = bVar4;
               }
 while ( wVar11 != L'\0' );
               if (!bVar27) goto LAB_0010d5c5;
               local_60 = 0x11;
               local_68 = "incomplete format";
               *(undefined8*)param_1 = 0;
               parse_latin1((String*)param_1, (StrRange*)&local_68);
            }

            LAB_0010c8f9:if (lVar25 != 0) {
               LOCK();
               plVar1 = (long*)( lVar25 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_80 + -0x10 ), false);
               }

            }

            LAB_0010c916:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return param_1;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
 while ( !bVar5 );
         if (lVar4 != -1) {
            local_40 = *(long*)param_1;
         }

      }
 while ( !bVar6 );
      if (lVar4 != -1) {
         local_30 = *(long*)param_1;
      }

   }
 while ( *(int*)( puVar5 + 4 ) != 0 );
   if (puVar5 + 4 != &_LC153) {
      copy_from_unchecked((String*)&local_38, (wchar32*)&_LC153, (int)( (long)( puVar5 + -0x123dec ) >> 2 ));
   }

   vformat<String>((String*)&local_28, &local_38, &local_30);
   print_error((String*)&local_28);
   lVar2 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_30;
   if (local_38 != 0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_38 + -0x10 ), false);
         lVar2 = local_30;
      }

   }

   local_30 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_30 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

}
else if = (local_20 == *(long*)( in_FS_OFFSET + 0x28 )){
   print_unicode_error(param_1, param_2);
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* String::utf16() const */void String::utf16(void) {
   long *plVar1;
   uint *puVar2;
   uint uVar3;
   long lVar4;
   code *pcVar5;
   undefined4 uVar6;
   ushort *puVar7;
   uint *puVar8;
   undefined8 *in_RSI;
   undefined8 *in_RDI;
   int iVar9;
   int iVar10;
   uint *puVar11;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar11 = (uint*)*in_RSI;
   if (puVar11 != (uint*)0x0) {
      lVar4 = *(long*)( puVar11 + -2 );
      iVar9 = (int)lVar4;
      if (( iVar9 != 0 ) && ( iVar9 != 1 )) {
         if (lVar4 < 1) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar4, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         if (0 < iVar9 + -1) {
            iVar10 = 0;
            puVar2 = puVar11 + ( ulong )(iVar9 - 2) + 1;
            puVar8 = puVar11;
            do {
               while (uVar3 = *puVar8,uVar3 < 0x10000) {
                  if (( uVar3 & 0xfffff800 ) == 0xd800) {
                     local_60 = 0;
                     local_58 = "Unpaired surrogate (%x)";
                     local_50 = 0x17;
                     parse_latin1((String*)&local_60, (StrRange*)&local_58);
                     vformat<unsigned_int>((String*)&local_58, (uint)(String*)&local_60);
                     print_unicode_error((String*)&local_58, false);
                     if (local_58 != (char*)0x0) {
                        LOCK();
                        plVar1 = (long*)( local_58 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           Memory::free_static(local_58 + -0x10, false);
                        }

                     }

                     if (local_60 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_60 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           Memory::free_static((void*)( local_60 + -0x10 ), false);
                        }

                     }

                  }

                  LAB_0010e016:iVar10 = iVar10 + 1;
                  puVar8 = puVar8 + 1;
                  if (puVar2 == puVar8) goto LAB_0010e042;
               }
;
               if (0x10ffff < uVar3) {
                  local_60 = 0;
                  local_58 = "Invalid unicode codepoint (%x), cannot represent as UTF-16";
                  local_50 = 0x3a;
                  parse_latin1((String*)&local_60, (StrRange*)&local_58);
                  vformat<unsigned_int>((String*)&local_58, (uint)(String*)&local_60);
                  print_unicode_error((String*)&local_58, true);
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_58 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static(local_58 + -0x10, false);
                     }

                  }

                  if (local_60 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_60 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_60 + -0x10 ), false);
                     }

                  }

                  goto LAB_0010e016;
               }

               puVar8 = puVar8 + 1;
               iVar10 = iVar10 + 2;
            }
 while ( puVar2 != puVar8 );
            LAB_0010e042:local_58 = (char*)0x0;
            if (iVar10 != 0) {
               CowData<char16_t>::resize<false>((CowData<char16_t>*)&local_58, (long)( iVar10 + 1 ));
               puVar7 = (ushort*)Char16String::get_data((Char16String*)&local_58);
               uVar6 = _LC156;
               do {
                  uVar3 = *puVar11;
                  if (uVar3 < 0x10000) {
                     *puVar7 = (ushort)uVar3;
                     puVar7 = puVar7 + 1;
                  }
 else {
                     if (uVar3 < 0x110000) {
                        puVar7[1] = (ushort)uVar3 & 0x3ff | 0xdc00;
                        *puVar7 = (short)( uVar3 >> 10 ) + 0xd7c0;
                     }
 else {
                        *(undefined4*)puVar7 = uVar6;
                     }

                     puVar7 = puVar7 + 2;
                  }

                  puVar11 = puVar11 + 1;
               }
 while ( puVar2 != puVar11 );
               *puVar7 = 0;
               *in_RDI = local_58;
               goto LAB_0010e0d0;
            }

         }

      }

   }

   *in_RDI = 0;
   LAB_0010e0d0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* String::to_utf16_buffer() const */void String::to_utf16_buffer(void) {
   long *plVar1;
   void *pvVar2;
   long *in_RSI;
   long in_RDI;
   int iVar3;
   size_t __n;
   long in_FS_OFFSET;
   void *local_50;
   void *local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *in_RSI == 0 ) || ( *(uint*)( *in_RSI + -8 ) < 2 )) {
      *(undefined8*)( in_RDI + 8 ) = 0;
   }
 else {
      utf16();
      local_40[0] = (void*)0x0;
      if (( local_50 == (void*)0x0 ) || ( iVar3 = iVar3 == 0 )) {
         __n = 0;
      }
 else {
         __n = (long)( iVar3 + -1 ) * 2;
      }

      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_40, __n);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_40);
      pvVar2 = memcpy(local_40[0], local_50, __n);
      *(void**)( in_RDI + 8 ) = pvVar2;
      LOCK();
      plVar1 = (long*)( (long)local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( (long)local_50 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::utf8() const */void String::utf8(void) {
   uint *puVar1;
   uint uVar2;
   long lVar3;
   code *pcVar4;
   uint uVar5;
   int iVar6;
   uint *puVar7;
   byte bVar8;
   uint *puVar9;
   undefined8 *in_RSI;
   undefined8 *in_RDI;
   uint *puVar10;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   puVar9 = (uint*)*in_RSI;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (puVar9 != (uint*)0x0) {
      lVar3 = *(long*)( puVar9 + -2 );
      iVar6 = (int)lVar3;
      if (( iVar6 != 0 ) && ( iVar6 != 1 )) {
         if (lVar3 < 1) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar3, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         if (0 < iVar6 + -1) {
            puVar1 = puVar9 + ( ulong )(iVar6 - 2) + 1;
            iVar6 = 0;
            puVar7 = puVar9;
            LAB_0010e43c:do {
               uVar2 = *puVar7;
               if (uVar2 < 0x80) {
                  iVar6 = iVar6 + 1;
               }
 else {
                  if (uVar2 < 0x800) {
                     puVar7 = puVar7 + 1;
                     iVar6 = iVar6 + 2;
                     if (puVar7 == puVar1) break;
                     goto LAB_0010e43c;
                  }

                  if (uVar2 < 0x10000) {
                     iVar6 = iVar6 + 3;
                  }
 else if (uVar2 < 0x200000) {
                     iVar6 = iVar6 + 4;
                  }
 else {
                     if (uVar2 < 0x4000000) {
                        iVar6 = iVar6 + 5;
                     }
 else {
                        if ((int)uVar2 < 0) {
                           iVar6 = iVar6 + 1;
                           local_60 = 0;
                           local_58 = "Invalid unicode codepoint (%x), cannot represent as UTF-8";
                           local_50 = 0x39;
                           parse_latin1((String*)&local_60, (StrRange*)&local_58);
                           vformat<unsigned_int>((String*)&local_58, (uint)(String*)&local_60);
                           print_unicode_error((String*)&local_58, true);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                           goto LAB_0010e433;
                        }

                        iVar6 = iVar6 + 6;
                     }

                     local_60 = 0;
                     local_58 = "Invalid unicode codepoint (%x)";
                     local_50 = 0x1e;
                     parse_latin1((String*)&local_60, (StrRange*)&local_58);
                     vformat<unsigned_int>((String*)&local_58, (uint)(String*)&local_60);
                     print_unicode_error((String*)&local_58, false);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  }

               }

               LAB_0010e433:puVar7 = puVar7 + 1;
            }
 while ( puVar7 != puVar1 );
            local_68 = 0;
            if (iVar6 != 0) {
               CowData<char>::resize<false>((CowData<char>*)&local_68, (long)( iVar6 + 1 ));
               puVar7 = (uint*)CharString::get_data((CharString*)&local_68);
               do {
                  uVar5 = _LC162;
                  uVar2 = *puVar9;
                  bVar8 = (byte)uVar2;
                  if (uVar2 < 0x80) {
                     *(byte*)puVar7 = bVar8;
                     puVar10 = (uint*)( (long)puVar7 + 1 );
                  }
 else if (uVar2 < 0x800) {
                     puVar10 = (uint*)( (long)puVar7 + 2 );
                     *(byte*)( (long)puVar7 + 1 ) = bVar8 & 0x3f | 0x80;
                     *(byte*)puVar7 = ( byte )(uVar2 >> 6) | 0xc0;
                  }
 else if (uVar2 < 0x10000) {
                     puVar10 = (uint*)( (long)puVar7 + 3 );
                     *(byte*)puVar7 = ( byte )(uVar2 >> 0xc) | 0xe0;
                     *(byte*)( (long)puVar7 + 2 ) = bVar8 & 0x3f | 0x80;
                     *(byte*)( (long)puVar7 + 1 ) = ( byte )(uVar2 >> 6) & 0x3f | 0x80;
                  }
 else if (uVar2 < 0x200000) {
                     puVar10 = puVar7 + 1;
                     *puVar7 = ( ( ( uVar2 & 0x3f ) << 8 | uVar2 >> 6 & 0x3f ) << 8 | uVar2 >> 0xc & 0x3f ) << 8 | uVar2 >> 0x12 & 0xff | _LC161;
                  }
 else if (uVar2 < 0x4000000) {
                     puVar10 = (uint*)( (long)puVar7 + 5 );
                     *(byte*)( puVar7 + 1 ) = bVar8 & 0x3f | 0x80;
                     *puVar7 = ( ( uVar2 * 4 & 0x3f00 | uVar2 >> 0xc & 0x3f ) << 8 | uVar2 >> 0x12 & 0x3f ) << 8 | uVar2 >> 0x18 | uVar5;
                  }
 else if ((int)uVar2 < 0) {
                     puVar10 = (uint*)( (long)puVar7 + 3 );
                     local_60 = 0;
                     parse_latin1((String*)&local_60, "Non scalar value (%x)");
                     vformat<unsigned_int>((String*)&local_58, (uint)(String*)&local_60);
                     print_unicode_error((String*)&local_58, true);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     *(byte*)( (long)puVar7 + 2 ) = 0xbd;
                     *(undefined2*)puVar7 = 0xbfef;
                  }
 else {
                     puVar10 = (uint*)( (long)puVar7 + 6 );
                     *puVar7 = ( ( uVar2 >> 4 & 0x3f00 | uVar2 >> 0x12 & 0x3f ) << 8 | uVar2 >> 0x18 & 0x3f ) << 8 | uVar2 >> 0x1e | _LC163;
                     *(byte*)( (long)puVar7 + 5 ) = bVar8 & 0x3f | 0x80;
                     *(byte*)( puVar7 + 1 ) = ( byte )(uVar2 >> 6) & 0x3f | 0x80;
                  }

                  puVar9 = puVar9 + 1;
                  puVar7 = puVar10;
               }
 while ( puVar9 != puVar1 );
               *(byte*)puVar10 = 0;
               *in_RDI = local_68;
               goto LAB_0010e4e8;
            }

         }

      }

   }

   *in_RDI = 0;
   LAB_0010e4e8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::md5_text() const */String * __thiscall String::md5_text(String *this){
   long *plVar1;
   int *piVar2;
   int *piVar3;
   byte *pbVar4;
   byte *pbVar5;
   int iVar6;
   long in_FS_OFFSET;
   uchar *local_40;
   byte local_38[16];
   byte local_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   utf8();
   if (local_40 == (uchar*)0x0) {
      iVar6 = 0;
   }
 else {
      iVar6 = (int)*(undefined8*)( local_40 + -8 ) + -1 + ( uint )((int)*(undefined8*)( local_40 + -8 ) == 0);
   }

   CryptoCore::md5(local_40, iVar6, local_38);
   *(undefined8*)this = 0;
   CowData<char32_t>::resize<false>((CowData<char32_t>*)this, 0x21);
   CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
   piVar2 = *(int**)this;
   piVar3 = piVar2;
   pbVar4 = local_38;
   do {
      pbVar5 = pbVar4 + 1;
      *piVar3 = (int)"0123456789ABCDEF0123456789abcdef"[( ulong )(*pbVar4 >> 4) + 0x10];
      piVar3[1] = (int)"0123456789ABCDEF0123456789abcdef"[( ulong )(*pbVar4 & 0xf) + 0x10];
      piVar3 = piVar3 + 2;
      pbVar4 = pbVar5;
   }
 while ( pbVar5 != local_28 );
   piVar2[0x20] = 0;
   if (local_40 != (uchar*)0x0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_40 + -0x10, false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::sha1_text() const */String * __thiscall String::sha1_text(String *this){
   long *plVar1;
   int *piVar2;
   int *piVar3;
   byte *pbVar4;
   byte *pbVar5;
   int iVar6;
   long in_FS_OFFSET;
   uchar *local_40;
   byte local_38[20];
   byte local_24[4];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   utf8();
   if (local_40 == (uchar*)0x0) {
      iVar6 = 0;
   }
 else {
      iVar6 = (int)*(undefined8*)( local_40 + -8 ) + -1 + ( uint )((int)*(undefined8*)( local_40 + -8 ) == 0);
   }

   CryptoCore::sha1(local_40, iVar6, local_38);
   *(undefined8*)this = 0;
   CowData<char32_t>::resize<false>((CowData<char32_t>*)this, 0x29);
   CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
   piVar2 = *(int**)this;
   piVar3 = piVar2;
   pbVar4 = local_38;
   do {
      pbVar5 = pbVar4 + 1;
      *piVar3 = (int)"0123456789ABCDEF0123456789abcdef"[( ulong )(*pbVar4 >> 4) + 0x10];
      piVar3[1] = (int)"0123456789ABCDEF0123456789abcdef"[( ulong )(*pbVar4 & 0xf) + 0x10];
      piVar3 = piVar3 + 2;
      pbVar4 = pbVar5;
   }
 while ( pbVar5 != local_24 );
   piVar2[0x28] = 0;
   if (local_40 != (uchar*)0x0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_40 + -0x10, false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::sha256_text() const */String * __thiscall String::sha256_text(String *this){
   long *plVar1;
   int *piVar2;
   int *piVar3;
   byte *pbVar4;
   byte *pbVar5;
   int iVar6;
   long in_FS_OFFSET;
   uchar *local_50;
   byte local_48[32];
   byte local_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   utf8();
   if (local_50 == (uchar*)0x0) {
      iVar6 = 0;
   }
 else {
      iVar6 = (int)*(undefined8*)( local_50 + -8 ) + -1 + ( uint )((int)*(undefined8*)( local_50 + -8 ) == 0);
   }

   CryptoCore::sha256(local_50, iVar6, local_48);
   *(undefined8*)this = 0;
   CowData<char32_t>::resize<false>((CowData<char32_t>*)this, 0x41);
   CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
   piVar2 = *(int**)this;
   piVar3 = piVar2;
   pbVar4 = local_48;
   do {
      pbVar5 = pbVar4 + 1;
      *piVar3 = (int)"0123456789ABCDEF0123456789abcdef"[( ulong )(*pbVar4 >> 4) + 0x10];
      piVar3[1] = (int)"0123456789ABCDEF0123456789abcdef"[( ulong )(*pbVar4 & 0xf) + 0x10];
      piVar3 = piVar3 + 2;
      pbVar4 = pbVar5;
   }
 while ( pbVar5 != local_28 );
   piVar2[0x40] = 0;
   if (local_50 != (uchar*)0x0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_50 + -0x10, false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::md5_buffer() const */String * __thiscall String::md5_buffer(String *this){
   long *plVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   long in_FS_OFFSET;
   uchar *local_50;
   uchar local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   utf8();
   if (local_50 == (uchar*)0x0) {
      iVar4 = 0;
   }
 else {
      iVar4 = (int)*(undefined8*)( local_50 + -8 ) + -1 + ( uint )((int)*(undefined8*)( local_50 + -8 ) == 0);
   }

   CryptoCore::md5(local_50, iVar4, local_48);
   *(undefined8*)( this + 8 ) = 0;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 8 ), 0x10);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 8 ));
   lVar2 = *(long*)( this + 8 );
   lVar3 = 0;
   do {
      *(uchar*)( lVar2 + lVar3 ) = local_48[lVar3];
      lVar3 = lVar3 + 1;
   }
 while ( lVar3 != 0x10 );
   if (local_50 != (uchar*)0x0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_50 + -0x10, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::sha1_buffer() const */String * __thiscall String::sha1_buffer(String *this){
   long *plVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   long in_FS_OFFSET;
   uchar *local_50;
   uchar local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   utf8();
   if (local_50 == (uchar*)0x0) {
      iVar4 = 0;
   }
 else {
      iVar4 = (int)*(undefined8*)( local_50 + -8 ) + -1 + ( uint )((int)*(undefined8*)( local_50 + -8 ) == 0);
   }

   CryptoCore::sha1(local_50, iVar4, local_48);
   *(undefined8*)( this + 8 ) = 0;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 8 ), 0x14);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 8 ));
   lVar2 = *(long*)( this + 8 );
   lVar3 = 0;
   do {
      *(uchar*)( lVar2 + lVar3 ) = local_48[lVar3];
      lVar3 = lVar3 + 1;
   }
 while ( lVar3 != 0x14 );
   if (local_50 != (uchar*)0x0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_50 + -0x10, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::sha256_buffer() const */String * __thiscall String::sha256_buffer(String *this){
   long *plVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   long in_FS_OFFSET;
   uchar *local_60;
   uchar local_58[40];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   utf8();
   if (local_60 == (uchar*)0x0) {
      iVar4 = 0;
   }
 else {
      iVar4 = (int)*(undefined8*)( local_60 + -8 ) + -1 + ( uint )((int)*(undefined8*)( local_60 + -8 ) == 0);
   }

   CryptoCore::sha256(local_60, iVar4, local_58);
   *(undefined8*)( this + 8 ) = 0;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 8 ), 0x20);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 8 ));
   lVar2 = *(long*)( this + 8 );
   lVar3 = 0;
   do {
      *(uchar*)( lVar2 + lVar3 ) = local_58[lVar3];
      lVar3 = lVar3 + 1;
   }
 while ( lVar3 != 0x20 );
   if (local_60 != (uchar*)0x0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_60 + -0x10, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::to_utf8_buffer() const */void String::to_utf8_buffer(void) {
   long *plVar1;
   void *pvVar2;
   int iVar3;
   long *in_RSI;
   size_t __n;
   long in_RDI;
   long in_FS_OFFSET;
   void *local_50;
   void *local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *in_RSI == 0 ) || ( *(uint*)( *in_RSI + -8 ) < 2 )) {
      *(undefined8*)( in_RDI + 8 ) = 0;
   }
 else {
      utf8();
      local_40[0] = (void*)0x0;
      if (( local_50 == (void*)0x0 ) || ( iVar3 = iVar3 == 0 )) {
         __n = 0;
      }
 else {
         __n = (size_t)( iVar3 + -1 );
      }

      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_40, __n);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_40);
      pvVar2 = memcpy(local_40[0], local_50, __n);
      *(void**)( in_RDI + 8 ) = pvVar2;
      LOCK();
      plVar1 = (long*)( (long)local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( (long)local_50 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::ascii(bool) const */long *String::ascii(bool param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   char in_DL;
   long lVar5;
   uint uVar6;
   long *in_RSI;
   undefined7 in_register_00000039;
   long *plVar7;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   plVar7 = (long*)CONCAT71(in_register_00000039, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *in_RSI == 0 ) || ( uVar6 = uVar6 < 2 )) {
      *plVar7 = 0;
   }
 else {
      local_68 = 0;
      CowData<char>::resize<false>((CowData<char>*)&local_68, (long)(int)uVar6);
      CowData<char>::_copy_on_write((CowData<char>*)&local_68);
      lVar4 = local_68;
      lVar2 = *in_RSI;
      lVar3 = lVar2;
      for (lVar5 = 0; ( lVar3 != 0 && ( (int)lVar5 < *(int*)( lVar3 + -8 ) ) ); lVar5 = lVar5 + 1) {
         uVar6 = *(uint*)( lVar2 + lVar5 * 4 );
         if (( 0x7f < uVar6 ) && ( ( 0xff < uVar6 || ( in_DL == '\0' ) ) )) {
            local_58 = "Invalid unicode codepoint (%x), cannot represent as ASCII/Latin-1";
            local_60 = 0;
            local_50 = 0x41;
            parse_latin1((String*)&local_60, (StrRange*)&local_58);
            vformat<unsigned_int>((String*)&local_58, (uint)(String*)&local_60);
            print_unicode_error((String*)&local_58, false);
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static(local_58 + -0x10, false);
               }

            }

            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_60 + -0x10 ), false);
               }

            }

            uVar6 = 0x20;
         }

         *(char*)( lVar4 + lVar5 ) = (char)uVar6;
         lVar3 = *in_RSI;
      }

      *plVar7 = lVar4;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return plVar7;
}
/* String::to_ascii_buffer() const */void String::to_ascii_buffer(void) {
   long *plVar1;
   void *__src;
   void *pvVar2;
   int iVar3;
   long *in_RSI;
   size_t __n;
   long in_RDI;
   long in_FS_OFFSET;
   void *local_50[2];
   void *local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *in_RSI == 0 ) || ( *(uint*)( *in_RSI + -8 ) < 2 )) {
      *(undefined8*)( in_RDI + 8 ) = 0;
   }
 else {
      ascii(SUB81(local_50, 0));
      __src = local_50[0];
      local_40[0] = (void*)0x0;
      if (( local_50[0] == (void*)0x0 ) || ( iVar3 = iVar3 == 0 )) {
         __n = 0;
      }
 else {
         __n = (size_t)( iVar3 + -1 );
      }

      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_40, __n);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)local_40);
      pvVar2 = memcpy(local_40[0], __src, __n);
      *(void**)( in_RDI + 8 ) = pvVar2;
      LOCK();
      plVar1 = (long*)( (long)__src + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( (long)local_50[0] + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::TEMPNAMEPLACEHOLDERVALUE(char const*) [clone .part.0] */void String::operator +=(String *this, char *param_1) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   size_t sVar4;
   ulong uVar5;
   int iVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)this == 0 ) || ( iVar6 = iVar6 == 0 )) {
      lVar7 = 0;
      iVar6 = 0;
   }
 else {
      iVar6 = iVar6 + -1;
      lVar7 = (long)iVar6 << 2;
   }

   sVar4 = strlen(param_1);
   CowData<char32_t>::resize<false>((CowData<char32_t>*)this, (long)( iVar6 + 1 + (int)sVar4 ));
   CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
   lVar2 = *(long*)this;
   uVar5 = 0;
   do {
      uVar3 = (uint)(byte)param_1[uVar5];
      if (( param_1[uVar5] == 0 ) && ( uVar5 < sVar4 )) {
         local_58 = "NUL character";
         local_60 = 0;
         local_50 = 0xd;
         parse_latin1((String*)&local_60, (StrRange*)&local_58);
         print_unicode_error((String*)&local_60, true);
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_60 + -0x10 ), false);
            }

         }

         uVar3 = 0xfffd;
      }

      *(uint*)( lVar7 + lVar2 + uVar5 * 4 ) = uVar3;
      bVar8 = sVar4 != uVar5;
      uVar5 = uVar5 + 1;
   }
 while ( bVar8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* String::TEMPNAMEPLACEHOLDERVALUE(char const*) */String * __thiscall String::operator+=(String *this,char *param_1){
   if (( param_1 != (char*)0x0 ) && ( *param_1 != '\0' )) {
      operator+=(this,param_1)
      ;;
   }

   return this;
}
/* String::copy_from_unchecked(char32_t const*, int) */void String::copy_from_unchecked(String *this, wchar32 *param_1, int param_2) {
   long *plVar1;
   wchar32 *pwVar2;
   wchar32 wVar3;
   wchar32 *pwVar4;
   wchar32 *pwVar5;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   CowData<char32_t>::resize<false>((CowData<char32_t>*)this, (long)( param_2 + 1 ));
   pwVar2 = param_1 + param_2;
   CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
   pwVar4 = *(wchar32**)this;
   if (param_1 < pwVar2) {
      pwVar5 = pwVar4;
      do {
         while (wVar3 = *param_1,( wVar3 & 0xfffff800U ) == 0xd800) {
            local_58 = "Unpaired surrogate (%x)";
            local_50 = 0x17;
            LAB_0010f3d2:local_60 = 0;
            parse_latin1((String*)&local_60, (StrRange*)&local_58);
            vformat<unsigned_int>((String*)&local_58, (uint)(String*)&local_60);
            print_unicode_error((String*)&local_58, false);
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static(local_58 + -0x10, false);
               }

            }

            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_60 + -0x10 ), false);
               }

            }

            param_1 = param_1 + 1;
            *pwVar5 = L'�';
            pwVar5 = pwVar5 + 1;
            if (pwVar2 <= param_1) goto LAB_0010f458;
         }
;
         if (0x10ffff < (uint)wVar3) {
            local_58 = "Invalid unicode codepoint (%x)";
            local_50 = 0x1e;
            goto LAB_0010f3d2;
         }

         param_1 = param_1 + 1;
         *pwVar5 = wVar3;
         pwVar5 = pwVar5 + 1;
      }
 while ( param_1 < pwVar2 );
      LAB_0010f458:pwVar4 = pwVar4 + param_2;
   }

   *pwVar4 = L'\0';
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::parse_utf32(StrRange<char32_t> const&) */void String::parse_utf32(String *this, StrRange *param_1) {
   long *plVar1;
   long lVar2;
   if (*(long*)( param_1 + 8 ) != 0) {
      copy_from_unchecked(this, *(wchar32**)param_1, (int)*(long*)( param_1 + 8 ));
      return;
   }

   lVar2 = *(long*)this;
   if (( lVar2 != 0 ) && ( *(long*)( lVar2 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
         *(undefined8*)this = 0;
         return;
      }

      lVar2 = *(long*)this;
      *(undefined8*)this = 0;
      Memory::free_static((void*)( lVar2 + -0x10 ), false);
      return;
   }

   return;
}
/* String::substr(int, int) const */String *String::substr(int param_1, int param_2) {
   int iVar1;
   long lVar2;
   int in_ECX;
   int in_EDX;
   undefined4 in_register_00000034;
   CowData *this;
   undefined4 in_register_0000003c;
   String *this_00;
   long in_FS_OFFSET;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   this_00 = (String*)CONCAT44(in_register_0000003c, param_1);
   this(CowData * CONCAT44(in_register_00000034, param_2));
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)this;
   if (in_ECX == -1) {
      if (lVar2 != 0) {
         iVar1 = (int)*(undefined8*)( lVar2 + -8 );
         if (iVar1 != 0) {
            in_ECX = ( iVar1 + -1 ) - in_EDX;
            goto LAB_0010f5b2;
         }

      }

   }
 else if (( lVar2 != 0 ) && ( iVar1 = iVar1 != 0 )) {
      LAB_0010f5b2:iVar1 = iVar1 + -1;
      if (( ( in_EDX < iVar1 && iVar1 != 0 ) && -1 < in_EDX ) && ( 0 < in_ECX )) {
         if (iVar1 < in_EDX + in_ECX) {
            in_ECX = iVar1 - in_EDX;
         }

         if (( in_EDX == 0 ) && ( iVar1 <= in_ECX )) {
            *(undefined8*)this_00 = 0;
            if (*(long*)this != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)this_00, this);
            }

         }
 else {
            local_38 = (undefined*)0x0;
            lVar2 = get_data((String*)this);
            copy_from_unchecked((String*)&local_38, (wchar32*)( lVar2 + (long)in_EDX * 4 ), in_ECX);
            *(undefined**)this_00 = local_38;
         }

         goto LAB_0010f57f;
      }

   }

   *(undefined8*)this_00 = 0;
   local_38 = &_LC16;
   local_30 = 0;
   parse_latin1(this_00, (StrRange*)&local_38);
   LAB_0010f57f:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this_00;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::_camelcase_to_underscore() const */CowData<char32_t> *String::_camelcase_to_underscore(void) {
   long *plVar1;
   bool bVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   bool bVar6;
   bool bVar7;
   bool bVar8;
   bool bVar9;
   bool bVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   uint *puVar14;
   int iVar15;
   bool bVar16;
   undefined8 uVar17;
   long lVar18;
   String *in_RSI;
   CowData<char32_t> *in_RDI;
   uint uVar19;
   int iVar20;
   uint uVar21;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar14 = (uint*)get_data(in_RSI);
   lVar18 = *(long*)in_RSI;
   local_70 = 0;
   if (( lVar18 == 0 ) || ( uVar17 = *(undefined8*)( lVar18 + -8 ) ),(uint)uVar17 < 2) {
      *(undefined8*)in_RDI = 0;
      if (*(long*)in_RSI != 0) {
         CowData<char32_t>::_ref(in_RDI, (CowData*)in_RSI);
      }

   }
 else {
      uVar21 = *puVar14;
      uVar19 = 0x1e60;
      iVar20 = 0;
      iVar13 = 0x28f;
      iVar11 = 0x147;
      while (true) {
         if (uVar21 < uVar19) {
            iVar13 = iVar11 + -1;
         }
 else {
            if (uVar21 <= *(uint*)( uppercase_letter + (long)iVar11 * 8 + 4 )) {
               bVar10 = true;
               goto LAB_0010f73f;
            }

            iVar20 = iVar11 + 1;
         }

         iVar11 = ( iVar20 + iVar13 ) / 2;
         if (iVar13 < iVar20) break;
         uVar19 = *(uint*)( uppercase_letter + (long)iVar11 * 8 );
      }
;
      bVar10 = false;
      LAB_0010f73f:uVar19 = 0x1e71;
      iVar13 = 0x2a2;
      iVar20 = 0;
      iVar11 = 0x151;
      while (true) {
         if (uVar21 < uVar19) {
            iVar13 = iVar11 + -1;
         }
 else {
            if (uVar21 <= *(uint*)( lowercase_letter + (long)iVar11 * 8 + 4 )) {
               bVar7 = true;
               goto LAB_0010f79b;
            }

            iVar20 = iVar11 + 1;
         }

         iVar11 = ( iVar20 + iVar13 ) / 2;
         if (iVar13 < iVar20) break;
         uVar19 = *(uint*)( lowercase_letter + (long)iVar11 * 8 );
      }
;
      bVar7 = false;
      LAB_0010f79b:iVar20 = 1;
      bVar9 = uVar21 - 0x30 < 10;
      while (true) {
         if (( (int)uVar17 == 0 ) || ( iVar11 = iVar11 <= iVar20 )) break;
         uVar21 = puVar14[1];
         uVar19 = 0x1e60;
         iVar15 = 0x28f;
         iVar13 = 0;
         iVar12 = 0x147;
         while (true) {
            if (uVar21 < uVar19) {
               iVar15 = iVar12 + -1;
            }
 else {
               if (uVar21 <= *(uint*)( uppercase_letter + (long)iVar12 * 8 + 4 )) {
                  bVar5 = true;
                  bVar8 = bVar7;
                  goto LAB_0010f850;
               }

               iVar13 = iVar12 + 1;
            }

            iVar12 = ( iVar13 + iVar15 ) / 2;
            if (iVar15 < iVar13) break;
            uVar19 = *(uint*)( uppercase_letter + (long)iVar12 * 8 );
         }
;
         bVar5 = false;
         bVar8 = false;
         LAB_0010f850:uVar19 = 0x1e71;
         iVar15 = 0x2a2;
         iVar13 = 0;
         iVar12 = 0x151;
         while (true) {
            if (uVar21 < uVar19) {
               iVar15 = iVar12 + -1;
            }
 else {
               if (uVar21 <= *(uint*)( lowercase_letter + (long)iVar12 * 8 + 4 )) {
                  bVar6 = true;
                  goto LAB_0010f8a5;
               }

               iVar13 = iVar12 + 1;
            }

            iVar12 = ( iVar13 + iVar15 ) / 2;
            if (iVar15 < iVar13) break;
            uVar19 = *(uint*)( lowercase_letter + (long)iVar12 * 8 );
         }
;
         bVar6 = false;
         LAB_0010f8a5:iVar20 = iVar20 + 1;
         bVar2 = uVar21 - 0x30 < 10;
         if (iVar20 < iVar11) {
            uVar21 = 0x1e71;
            iVar12 = 0x2a2;
            iVar11 = 0;
            iVar13 = 0x151;
            while (true) {
               if (puVar14[2] < uVar21) {
                  iVar12 = iVar13 + -1;
               }
 else {
                  if (puVar14[2] <= *(uint*)( lowercase_letter + (long)iVar13 * 8 + 4 )) {
                     bVar4 = true;
                     goto LAB_0010f9aa;
                  }

                  iVar11 = iVar13 + 1;
               }

               iVar13 = ( iVar11 + iVar12 ) / 2;
               if (iVar12 < iVar11) break;
               uVar21 = *(uint*)( lowercase_letter + (long)iVar13 * 8 );
            }
;
         }

         bVar4 = false;
         LAB_0010f9aa:bVar16 = false;
         bVar3 = (bool)( bVar10 | bVar9 );
         if ((bool)( bVar10 | bVar9 )) {
            bVar16 = (bool)( bVar5 & bVar4 );
            bVar3 = (bool)( bVar9 & bVar6 );
            if ((bool)( bVar9 & bVar6 )) {
               bVar3 = bVar4;
            }

         }

         if (( ( ( bVar7 || bVar10 ) && ( bVar2 ) ) || ( bVar16 || bVar8 ) ) || ( bVar3 )) {
            local_60 = 0;
            local_58 = &_LC125;
            local_50 = 1;
            parse_latin1((String*)&local_60, (StrRange*)&local_58);
            substr((int)(CowData*)&local_68, (int)in_RSI);
            lVar18 = local_68;
            local_58 = (undefined*)0x0;
            if (local_68 == 0) {
               operator+=((String *)&
               local_58,(String*)&local_60;
               operator+=((String *)&
               local_70,(String*)&local_58;
               if (local_58 != (undefined*)0x0) goto LAB_0010faae;
            }
 else {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_68);
               operator+=((String *)&
               local_58,(String*)&local_60;
               operator+=((String *)&
               local_70,(String*)&local_58;
               if (local_58 != (undefined*)0x0) {
                  LAB_0010faae:LOCK();
                  plVar1 = (long*)( (long)local_58 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( (long)local_58 + -0x10 ), false);
                  }

                  lVar18 = local_68;
                  if (local_68 == 0) goto LAB_0010fae8;
               }

               LOCK();
               plVar1 = (long*)( lVar18 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_68 + -0x10 ), false);
               }

            }

            LAB_0010fae8:if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_60 + -0x10 ), false);
               }

            }

            lVar18 = *(long*)in_RSI;
         }

         if (lVar18 == 0) break;
         uVar17 = *(undefined8*)( lVar18 + -8 );
         puVar14 = puVar14 + 1;
         bVar7 = bVar6;
         bVar9 = bVar2;
         bVar10 = bVar5;
      }
;
      substr((int)(StrRange*)&local_58, (int)in_RSI);
      operator+=((String *)&
      local_70,(String*)&local_58;
      if (local_58 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_58 + -0x10 ), false);
         }

      }

      to_lower();
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_70 + -0x10 ), false);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_RDI;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::get_slice(String const&, int) const */String *String::get_slice(String *param_1, int param_2) {
   int iVar1;
   int iVar2;
   int in_ECX;
   int iVar3;
   String *in_RDX;
   undefined4 in_register_00000034;
   String *this;
   int iVar4;
   long in_FS_OFFSET;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   this(String * CONCAT44(in_register_00000034, param_2));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( *(long*)this != 0 ) && ( 1 < *(uint*)( *(long*)this + -8 ) ) ) && ( *(long*)in_RDX != 0 ) ) && ( ( 1 < *(uint*)( *(long*)in_RDX + -8 ) && ( -1 < in_ECX ) ) )) {
      iVar4 = 0;
      iVar3 = 0;
      iVar2 = find(this, in_RDX, 0);
      if (iVar2 == -1) {
         *(undefined8*)param_1 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)this);
         goto LAB_0010fc07;
      }

      while (iVar2 = find(this, in_RDX, iVar3),iVar2 != -1) {
         if (iVar4 == in_ECX) goto LAB_0010fd00;
         if (*(long*)this == 0) {
            iVar3 = 0;
         }
 else {
            iVar3 = (int)*(undefined8*)( *(long*)this + -8 );
            if (iVar3 != 0) goto LAB_0010fce8;
         }

         LAB_0010fc93:if (iVar3 == iVar2) goto LAB_0010fbe1;
         iVar3 = iVar2;
         if (( *(long*)in_RDX != 0 ) && ( iVar1 = (int)*(undefined8*)( *(long*)in_RDX + -8 ) ),iVar3 = iVar2 + -1 + iVar1,iVar1 == 0) {
            iVar3 = iVar2;
         }

         iVar4 = iVar4 + 1;
      }
;
      if (( *(long*)this != 0 ) && ( iVar3 = iVar3 != 0 )) {
         iVar2 = iVar3 + -1;
         if (iVar4 != in_ECX) {
            LAB_0010fce8:iVar3 = iVar3 + -1;
            goto LAB_0010fc93;
         }

         LAB_0010fd00:substr((int)param_1, param_2);
         goto LAB_0010fc07;
      }

      if (iVar4 == in_ECX) goto LAB_0010fd00;
   }

   LAB_0010fbe1:*(undefined8*)param_1 = 0;
   local_58 = &_LC16;
   local_50 = 0;
   parse_latin1(param_1, (StrRange*)&local_58);
   LAB_0010fc07:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::get_slice(char const*, int) const */char *String::get_slice(char *param_1, int param_2) {
   int iVar1;
   size_t sVar2;
   int in_ECX;
   int iVar3;
   char *in_RDX;
   undefined4 in_register_00000034;
   String *this;
   int iVar4;
   long in_FS_OFFSET;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   this(String * CONCAT44(in_register_00000034, param_2));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( ( *(long*)this != 0 ) && ( 1 < *(uint*)( *(long*)this + -8 ) ) ) && ( in_RDX != (char*)0x0 ) ) && ( ( *in_RDX != '\0' && ( -1 < in_ECX ) ) )) {
      iVar1 = find(this, in_RDX, 0);
      if (iVar1 == -1) {
         for (int i = 0; i < 8; i++) {
            param_1[i] = '\0';
         }

         if (*(long*)this != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)this);
         }

         goto LAB_0010fdb2;
      }

      iVar4 = 0;
      iVar1 = 0;
      sVar2 = strlen(in_RDX);
      while (iVar1 = find(this, in_RDX, iVar1),iVar1 != -1) {
         if (iVar4 == in_ECX) goto LAB_0010fe98;
         if (*(long*)this == 0) {
            iVar3 = 0;
         }
 else {
            iVar3 = (int)*(undefined8*)( *(long*)this + -8 );
            if (iVar3 != 0) goto LAB_0010fe7e;
         }

         LAB_0010fe3c:if (iVar3 == iVar1) goto LAB_0010fd89;
         iVar4 = iVar4 + 1;
         iVar1 = (int)sVar2 + iVar1;
      }
;
      if (( *(long*)this != 0 ) && ( iVar3 = iVar3 != 0 )) {
         iVar1 = iVar3 + -1;
         if (iVar4 != in_ECX) {
            LAB_0010fe7e:iVar3 = iVar3 + -1;
            goto LAB_0010fe3c;
         }

         LAB_0010fe98:substr((int)param_1, param_2);
         goto LAB_0010fdb2;
      }

      if (iVar4 == in_ECX) goto LAB_0010fe98;
   }

   LAB_0010fd89:param_1[0] = '\0';
   for (int i = 0; i < 7; i++) {
      param_1[( i + 1 )] = '\0';
   }

   local_58 = &_LC16;
   local_50 = 0;
   parse_latin1((String*)param_1, (StrRange*)&local_58);
   LAB_0010fdb2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* String::get_slicec(char32_t, int) const */undefined8 *String::get_slicec(wchar32 param_1, int param_2) {
   int *piVar1;
   long lVar2;
   int iVar3;
   int in_ECX;
   int in_EDX;
   undefined4 in_register_00000034;
   int iVar4;
   undefined4 in_register_0000003c;
   long lVar5;
   int iVar6;
   long in_FS_OFFSET;
   piVar1 = *(int**)CONCAT44(in_register_00000034, param_2);
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( piVar1 != (int*)0x0 ) && ( 1 < (uint)piVar1[-2] ) ) && ( -1 < in_ECX )) {
      iVar4 = *piVar1;
      if (iVar4 == 0) {
         iVar6 = 0;
      }
 else {
         iVar3 = 1;
         iVar6 = 0;
         do {
            if (in_EDX == iVar4) {
               if (in_ECX == iVar6) goto LAB_0010ff4d;
               iVar6 = iVar6 + 1;
            }

            lVar5 = (long)iVar3;
            iVar3 = iVar3 + 1;
            iVar4 = piVar1[lVar5];
         }
 while ( iVar4 != 0 );
      }

      if (in_ECX == iVar6) {
         LAB_0010ff4d:substr(param_1, param_2);
         goto LAB_0010ff14;
      }

   }

   *(undefined8*)CONCAT44(in_register_0000003c, param_1) = 0;
   LAB_0010ff14:if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return (undefined8*)CONCAT44(in_register_0000003c, param_1);
}
/* String::_count(String const&, int, int, bool) const */ulong String::_count(String *this, String *param_1, int param_2, int param_3, bool param_4) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   uint uVar5;
   ulong uVar6;
   uint uVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_1 == 0) goto LAB_00110028;
   uVar6 = *(ulong*)( *(long*)param_1 + -8 );
   iVar3 = (int)uVar6;
   uVar6 = uVar6 & 0xffffffff;
   if (iVar3 == 0) goto LAB_0011002a;
   uVar5 = iVar3 - 1;
   uVar6 = (ulong)uVar5;
   if (uVar5 == 0) goto LAB_0011002a;
   lVar8 = *(long*)this;
   if (lVar8 == 0) {
      iVar3 = 0;
   }
 else {
      iVar3 = (int)*(undefined8*)( lVar8 + -8 );
      iVar3 = iVar3 + -1 + ( uint )(iVar3 == 0);
   }

   if (( iVar3 < (int)uVar5 ) || ( local_40 = 0(param_2 | param_3) < 0 )) {
      LAB_00110028:uVar6 = 0;
   }
 else {
      if (param_3 == 0) {
         bVar9 = true;
      }
 else {
         if (param_3 <= param_2) goto LAB_00110028;
         bVar9 = param_3 == iVar3;
      }

      if (( param_2 == 0 ) && ( bVar9 )) {
         if (lVar8 != 0) {
            plVar1 = (long*)( lVar8 + -0x10 );
            do {
               lVar2 = *plVar1;
               lVar8 = local_40;
               if (lVar2 == 0) goto LAB_001100a8;
               LOCK();
               lVar4 = *plVar1;
               bVar9 = lVar2 == lVar4;
               if (bVar9) {
                  *plVar1 = lVar2 + 1;
                  lVar4 = lVar2;
               }

               UNLOCK();
            }
 while ( !bVar9 );
            if (lVar4 != -1) {
               local_40 = *(long*)this;
               lVar8 = local_40;
            }

         }

      }
 else {
         substr((int)(CowData<char32_t>*)&local_38, (int)this);
         lVar8 = local_38;
         if (local_38 != 0) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
            local_40 = local_38;
            local_38 = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
      }

      LAB_001100a8:iVar3 = 0;
      uVar7 = 0;
      if (param_4) {
         while (iVar3 = findn((String*)&local_40, param_1, iVar3),iVar3 != -1) {
            iVar3 = iVar3 + uVar5;
            uVar7 = uVar7 + 1;
         }
;
      }
 else {
         while (iVar3 = find((String*)&local_40, param_1, iVar3),iVar3 != -1) {
            iVar3 = iVar3 + uVar5;
            uVar7 = uVar7 + 1;
         }
;
      }

      if (lVar8 != 0) {
         LOCK();
         plVar1 = (long*)( lVar8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_40 + -0x10 ), false);
         }

      }

      uVar6 = (ulong)uVar7;
   }

   LAB_0011002a:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}
/* String::count(String const&, int, int) const */void String::count(String *this, String *param_1, int param_2, int param_3) {
   _count(this, param_1, param_2, param_3, false);
   return;
}
/* String::countn(String const&, int, int) const */void String::countn(String *this, String *param_1, int param_2, int param_3) {
   _count(this, param_1, param_2, param_3, true);
   return;
}
/* String::_count(char const*, int, int, bool) const */ulong String::_count(String *this, char *param_1, int param_2, int param_3, bool param_4) {
   long *plVar1;
   long lVar2;
   int iVar3;
   size_t sVar4;
   long lVar5;
   int iVar6;
   ulong uVar7;
   uint uVar8;
   long lVar9;
   long in_FS_OFFSET;
   bool bVar10;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar4 = strlen(param_1);
   iVar3 = (int)sVar4;
   uVar7 = sVar4 & 0xffffffff;
   if (iVar3 == 0) goto LAB_00110310;
   lVar9 = *(long*)this;
   if (lVar9 == 0) {
      iVar6 = 0;
   }
 else {
      iVar6 = (int)*(undefined8*)( lVar9 + -8 );
      iVar6 = iVar6 + -1 + ( uint )(iVar6 == 0);
   }

   if (( iVar6 < iVar3 ) || ( local_50 = 0(param_3 | param_2) < 0 )) {
      LAB_00110338:uVar7 = 0;
   }
 else {
      if (param_3 == 0) {
         bVar10 = true;
      }
 else {
         if (param_3 <= param_2) goto LAB_00110338;
         bVar10 = param_3 == iVar6;
      }

      if (( param_2 == 0 ) && ( bVar10 )) {
         if (lVar9 != 0) {
            plVar1 = (long*)( lVar9 + -0x10 );
            do {
               lVar2 = *plVar1;
               lVar9 = local_50;
               if (lVar2 == 0) goto LAB_001102b0;
               LOCK();
               lVar5 = *plVar1;
               bVar10 = lVar2 == lVar5;
               if (bVar10) {
                  *plVar1 = lVar2 + 1;
                  lVar5 = lVar2;
               }

               UNLOCK();
            }
 while ( !bVar10 );
            if (lVar5 != -1) {
               local_50 = *(long*)this;
               lVar9 = local_50;
            }

         }

      }
 else {
         substr((int)&local_48, (int)this);
         lVar9 = local_48;
         if (local_48 != 0) {
            local_50 = local_48;
         }

      }

      LAB_001102b0:iVar6 = 0;
      uVar8 = 0;
      if (param_4) {
         while (iVar6 = findn((String*)&local_50, param_1, iVar6),iVar6 != -1) {
            iVar6 = iVar3 + iVar6;
            uVar8 = uVar8 + 1;
         }
;
      }
 else {
         while (iVar6 = find((String*)&local_50, param_1, iVar6),iVar6 != -1) {
            iVar6 = iVar3 + iVar6;
            uVar8 = uVar8 + 1;
         }
;
      }

      if (lVar9 != 0) {
         LOCK();
         plVar1 = (long*)( lVar9 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_50 + -0x10 ), false);
         }

      }

      uVar7 = (ulong)uVar8;
   }

   LAB_00110310:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
/* String::count(char const*, int, int) const */void String::count(String *this, char *param_1, int param_2, int param_3) {
   _count(this, param_1, param_2, param_3, false);
   return;
}
/* String::countn(char const*, int, int) const */void String::countn(String *this, char *param_1, int param_2, int param_3) {
   _count(this, param_1, param_2, param_3, true);
   return;
}
/* String::strip_edges(bool, bool) const */CowData<char32_t> *String::strip_edges(bool param_1, bool param_2) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   code *pcVar4;
   int iVar5;
   char in_CL;
   ulong uVar6;
   char in_DL;
   int iVar7;
   undefined7 in_register_00000031;
   CowData *pCVar8;
   undefined7 in_register_00000039;
   CowData<char32_t> *this;
   int iVar9;
   int iVar10;
   long in_FS_OFFSET;
   bool bVar11;
   this(CowData<char32_t> * CONCAT71(in_register_00000039, param_1));
   pCVar8 = (CowData*)CONCAT71(in_register_00000031, param_2);
   lVar1 = *(long*)pCVar8;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 != 0) {
      uVar3 = *(ulong*)( lVar1 + -8 );
      iVar9 = (int)uVar3;
      if (iVar9 != 0) {
         iVar10 = iVar9 + -1;
         if (in_DL == '\0') {
            if (( in_CL != '\0' ) && ( -1 < iVar9 + -2 )) {
               iVar7 = 0;
               LAB_001104fe:uVar6 = ( ulong )(iVar9 + -2);
               iVar5 = iVar10;
               do {
                  if (uVar6 != uVar3) {
                     if ((long)uVar3 <= (long)uVar6) {
                        LAB_001104b0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar6, uVar3, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar4 = (code*)invalidInstructionException();
                        ( *pcVar4 )();
                     }

                     if (0x20 < *(uint*)( lVar1 + uVar6 * 4 )) {
                        in_DL = iVar5 == iVar10;
                        goto LAB_00110557;
                     }

                     if ((int)uVar6 + -1 < 0) goto LAB_00110580;
                  }

                  iVar5 = iVar5 + -1;
                  uVar6 = uVar6 - 1;
               }
 while ( true );
            }

         }
 else if (0 < iVar10) {
            uVar6 = 0;
            do {
               if (uVar6 != uVar3) {
                  if ((long)uVar3 <= (long)uVar6) goto LAB_001104b0;
                  if (0x20 < *(uint*)( lVar1 + uVar6 * 4 )) {
                     iVar7 = (int)uVar6;
                     goto LAB_0011044f;
                  }

               }

               bVar11 = iVar9 - 2 != uVar6;
               uVar6 = uVar6 + 1;
            }
 while ( bVar11 );
            iVar7 = iVar9 + -1;
            LAB_0011044f:if (in_CL != '\0') goto LAB_001104fe;
            goto LAB_00110557;
         }

      }

   }

   goto LAB_00110470;
   LAB_00110580:in_DL = iVar5 == iVar9;
   LAB_00110557:if (( iVar7 != 0 ) || ( in_DL == '\0' )) {
      substr((int)this, (int)pCVar8);
      goto LAB_00110488;
   }

   LAB_00110470:*(undefined8*)this = 0;
   if (*(long*)pCVar8 != 0) {
      CowData<char32_t>::_ref(this, pCVar8);
   }

   LAB_00110488:if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* String::to_snake_case() const */String * __thiscall String::to_snake_case(String *this){
   long *plVar1;
   long in_FS_OFFSET;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   _camelcase_to_underscore();
   _replace_common((String*)&local_28, (char*)&local_30, " ", true);
   strip_edges(SUB81(this, 0), SUB81((String*)&local_28, 0));
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_28 + -0x10 ), false);
      }

   }

   if (local_30 != 0) {
      LOCK();
      plVar1 = (long*)( local_30 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_30 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::is_valid_filename() const */undefined4 String::is_valid_filename(String *this) {
   long *plVar1;
   long lVar2;
   undefined4 uVar3;
   int iVar4;
   undefined **ppuVar5;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   strip_edges(SUB81(&local_38, 0), SUB81(this, 0));
   uVar3 = operator == ( this,(String*)&local_38 );
   lVar2 = local_38;
   if ((char)uVar3 == '\0') {
      if (local_38 == 0) goto LAB_001106f5;
   }
 else {
      if (local_38 == 0) {
         uVar3 = 0;
         goto LAB_001106f5;
      }

      if (*(uint*)( local_38 + -8 ) < 2) {
         LAB_001106dc:uVar3 = 0;
      }
 else {
         ppuVar5 = &invalid_filename_characters;
         do {
            iVar4 = find(this, *ppuVar5, 0);
            if (iVar4 != -1) goto LAB_001106dc;
            ppuVar5 = ppuVar5 + 1;
         }
 while ( ppuVar5 != (undefined**)&TranslationServer::singleton );
      }

   }

   LOCK();
   plVar1 = (long*)( lVar2 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_38 + -0x10 ), false);
   }

   LAB_001106f5:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* String::validate_filename() const */void String::validate_filename(void) {
   long *plVar1;
   long lVar2;
   undefined **ppuVar3;
   bool in_SIL;
   long *in_RDI;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   ppuVar3 = &invalid_filename_characters;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   strip_edges(SUB81(in_RDI, 0), in_SIL);
   do {
      _replace_common((String*)&local_38, (char*)in_RDI, *ppuVar3, true);
      lVar2 = *in_RDI;
      if (lVar2 == local_38) {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_38 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *in_RDI;
               *in_RDI = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *in_RDI = local_38;
      }

      ppuVar3 = ppuVar3 + 1;
   }
 while ( ppuVar3 != (undefined**)&TranslationServer::singleton );
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::capitalize() const */String * __thiscall String::capitalize(String *this){
   long *plVar1;
   long lVar2;
   code *pcVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int *piVar8;
   int iVar9;
   ulong uVar10;
   int iVar11;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   int *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _camelcase_to_underscore();
   _replace_common((String*)&local_48, (char*)&local_50, "_", true);
   strip_edges(SUB81((String*)&local_58, 0), SUB81((String*)&local_48, 0));
   if (local_48 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_48 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_48 + -4, false);
      }

   }

   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_50 + -0x10 ), false);
      }

   }

   *(undefined8*)this = 0;
   iVar9 = 0;
   do {
      iVar4 = get_slice_count((String*)&local_58, " ");
      if (iVar4 <= iVar9) {
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_58 + -0x10 ), false);
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return this;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      get_slicec((wchar32)(String*)&local_48, (int)(String*)&local_58);
      if (local_48 != (int*)0x0) {
         lVar2 = *(long*)( local_48 + -2 );
         piVar8 = local_48;
         if (1 < (int)lVar2) {
            if (lVar2 < 1) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            iVar6 = *local_48;
            iVar11 = 0x1f74;
            iVar7 = 0x5c4;
            iVar4 = 0;
            uVar10 = 0x5c4;
            LAB_00110992:iVar5 = (int)( uVar10 >> 0x1f ) + (int)uVar10 >> 1;
            if (iVar6 < iVar11) {
               iVar7 = iVar5 + -1;
               if (iVar7 < iVar4) goto LAB_001109a9;
               LAB_0011097f:uVar10 = ( ulong )(uint)(iVar4 + iVar7);
               iVar11 = *(int*)( caps_table + (long)( ( iVar4 + iVar7 ) / 2 ) * 8 );
               goto LAB_00110992;
            }

            if (iVar11 < iVar6) {
               iVar4 = iVar5 + 1;
               if (iVar7 < iVar4) goto LAB_001109a9;
               goto LAB_0011097f;
            }

            iVar6 = *(int*)( caps_table + (long)iVar5 * 8 + 4 );
            LAB_001109a9:CowData<char32_t>::_copy_on_write((CowData<char32_t>*)&local_48);
            piVar8 = local_48;
            *local_48 = iVar6;
            if (iVar9 != 0) {
               operator+=(this," ")
               ;;
            }

            operator+=(this,(String *)&local_48);
         }

         LOCK();
         plVar1 = (long*)( piVar8 + -4 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static(local_48 + -4, false);
         }

      }

      iVar9 = iVar9 + 1;
   }
 while ( true );
}
/* String::to_pascal_case() const */String * __thiscall String::to_pascal_case(String *this){
   long *plVar1;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   capitalize((String*)&local_28);
   _replace_common(this, (char*)&local_28, " ", true);
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_28 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::to_camel_case() const */String * __thiscall String::to_camel_case(String *this){
   long *plVar1;
   int iVar2;
   undefined4 uVar3;
   int *piVar4;
   long lVar5;
   code *pcVar6;
   int iVar7;
   int iVar8;
   ulong uVar9;
   int iVar10;
   int iVar11;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   capitalize((String*)&local_28);
   _replace_common(this, (char*)&local_28, " ", true);
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_28 + -0x10 ), false);
      }

   }

   piVar4 = *(int**)this;
   if (( piVar4 != (int*)0x0 ) && ( lVar5 = *(long*)( piVar4 + -2 ) ),1 < (uint)lVar5) {
      if (lVar5 < 1) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar5, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar6 = (code*)invalidInstructionException();
         ( *pcVar6 )();
      }

      iVar2 = *piVar4;
      iVar11 = 0x1eb6;
      iVar8 = 0x5b3;
      iVar10 = 0;
      uVar9 = 0x5b3;
      do {
         iVar7 = (int)( uVar9 >> 0x1f ) + (int)uVar9 >> 1;
         if (iVar2 < iVar11) {
            iVar8 = iVar7 + -1;
            if (iVar8 < iVar10) goto LAB_00110c4f;
         }
 else {
            if (iVar2 <= iVar11) {
               uVar3 = *(undefined4*)( reverse_caps_table + (long)iVar7 * 8 + 4 );
               CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
               **(undefined4**)this = uVar3;
               break;
            }

            iVar10 = iVar7 + 1;
            if (iVar8 < iVar10) goto LAB_00110c4f;
         }

         uVar9 = ( ulong )(uint)(iVar10 + iVar8);
         iVar11 = *(int*)( reverse_caps_table + (long)( ( iVar10 + iVar8 ) / 2 ) * 8 );
      }
 while ( true );
   }

   LAB_00110bbc:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00110c4f:CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
   **(int**)this = iVar2;
   goto LAB_00110bbc;
}
/* String::lstrip(String const&) const */String *String::lstrip(String *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   ulong uVar7;
   long *in_RDX;
   CowData *in_RSI;
   int iVar8;
   long in_FS_OFFSET;
   bool bVar9;
   lVar1 = *(long*)in_RSI;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      iVar8 = (int)lVar3;
      if (( iVar8 != 0 ) && ( 0 < iVar8 + -1 )) {
         uVar7 = 0;
         do {
            if (lVar3 <= (long)uVar7) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar7, lVar3, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }

            lVar4 = *in_RDX;
            if (( lVar4 == 0 ) || ( *(long*)( lVar4 + -8 ) < 1 )) {
               LAB_00110d6e:if ((int)uVar7 == 0) goto LAB_00110d78;
               break;
            }

            lVar6 = 0;
            while (*(int*)( lVar1 + uVar7 * 4 ) != *(int*)( lVar4 + lVar6 * 4 )) {
               lVar6 = lVar6 + 1;
               if (*(long*)( lVar4 + -8 ) == lVar6) goto LAB_00110d6e;
            }
;
            if ((int)lVar6 == -1) goto LAB_00110d6e;
            bVar9 = iVar8 - 2 != uVar7;
            uVar7 = uVar7 + 1;
         }
 while ( bVar9 );
         substr((int)param_1, (int)in_RSI);
         goto LAB_00110d91;
      }

   }

   LAB_00110d78:*(undefined8*)param_1 = 0;
   if (*(long*)in_RSI != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_RSI);
   }

   LAB_00110d91:if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* String::rstrip(String const&) const */String *String::rstrip(String *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long *in_RDX;
   CowData *in_RSI;
   int iVar7;
   long lVar8;
   int iVar9;
   long in_FS_OFFSET;
   bool bVar10;
   lVar1 = *(long*)in_RSI;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      if (( (int)lVar3 != 0 ) && ( iVar9 = -1 < iVar9 )) {
         lVar8 = (long)iVar9;
         iVar7 = iVar9;
         while (true) {
            if (lVar3 <= lVar8) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar3, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }

            lVar4 = *in_RDX;
            if (( lVar4 == 0 ) || ( *(long*)( lVar4 + -8 ) < 1 )) break;
            lVar6 = 0;
            while (*(int*)( lVar1 + lVar8 * 4 ) != *(int*)( lVar4 + lVar6 * 4 )) {
               lVar6 = lVar6 + 1;
               if (*(long*)( lVar4 + -8 ) == lVar6) goto LAB_00110ee0;
            }
;
            if ((int)lVar6 == -1) break;
            bVar10 = iVar7 == 0;
            iVar7 = iVar7 + -1;
            if (bVar10) goto LAB_00110ee5;
            lVar8 = lVar8 + -1;
         }
;
         LAB_00110ee0:if (iVar7 != iVar9) {
            LAB_00110ee5:substr((int)param_1, (int)in_RSI);
            goto LAB_00110ef6;
         }

      }

   }

   *(undefined8*)param_1 = 0;
   if (*(long*)in_RSI != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_RSI);
   }

   LAB_00110ef6:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::trim_prefix(String const&) const */String *String::trim_prefix(String *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   String *in_RDX;
   long lVar4;
   int iVar5;
   long *in_RSI;
   int iVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   iVar6 = (int)param_1;
   iVar5 = (int)&local_38;
   if (*in_RSI == 0) {
      cVar2 = begins_with((String*)&local_38, in_RDX);
      lVar4 = 0;
      if (cVar2 != '\0') {
         lVar4 = 0;
         if (*(long*)in_RDX == 0) {
            substr(iVar6, iVar5);
            goto LAB_00111015;
         }

         LAB_00110fee:substr(iVar6, iVar5);
         if (lVar4 == 0) goto LAB_00111015;
         goto LAB_00110ffe;
      }

   }
 else {
      plVar1 = (long*)( *in_RSI + -0x10 );
      do {
         lVar4 = *plVar1;
         if (lVar4 == 0) goto LAB_00110fa4;
         LOCK();
         lVar3 = *plVar1;
         bVar7 = lVar4 == lVar3;
         if (bVar7) {
            *plVar1 = lVar4 + 1;
            lVar3 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar3 != -1) {
         local_38 = *in_RSI;
      }

      LAB_00110fa4:lVar4 = local_38;
      cVar2 = begins_with((String*)&local_38, in_RDX);
      if (cVar2 != '\0') {
         if (( ( lVar4 == 0 ) || ( (int)*(undefined8*)( lVar4 + -8 ) == 0 ) ) || ( *(long*)in_RDX != 0 )) goto LAB_00110fee;
         substr(iVar6, iVar5);
         LAB_00110ffe:LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_38 + -0x10 ), false);
         }

         goto LAB_00111015;
      }

   }

   *(long*)param_1 = lVar4;
   LAB_00111015:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* String::trim_prefix(char const*) const */char *String::trim_prefix(char *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   char *in_RDX;
   long lVar4;
   int iVar5;
   long *in_RSI;
   int iVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   iVar5 = (int)&local_38;
   iVar6 = (int)param_1;
   if (*in_RSI == 0) {
      cVar2 = begins_with((String*)&local_38, in_RDX);
      lVar4 = 0;
      if (cVar2 == '\0') goto LAB_001111c2;
      strlen(in_RDX);
   }
 else {
      plVar1 = (long*)( *in_RSI + -0x10 );
      do {
         lVar4 = *plVar1;
         if (lVar4 == 0) goto LAB_00111130;
         LOCK();
         lVar3 = *plVar1;
         bVar7 = lVar4 == lVar3;
         if (bVar7) {
            *plVar1 = lVar4 + 1;
            lVar3 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar3 != -1) {
         local_38 = *in_RSI;
      }

      LAB_00111130:lVar4 = local_38;
      cVar2 = begins_with((String*)&local_38, in_RDX);
      if (cVar2 == '\0') {
         LAB_001111c2:*(long*)param_1 = lVar4;
         goto LAB_00111187;
      }

      strlen(in_RDX);
      if (lVar4 != 0) {
         if ((int)*(undefined8*)( lVar4 + -8 ) == 0) {
            substr(iVar6, iVar5);
         }
 else {
            substr(iVar6, iVar5);
         }

         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_38 + -0x10 ), false);
         }

         goto LAB_00111187;
      }

   }

   substr(iVar6, iVar5);
   LAB_00111187:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* String::trim_suffix(String const&) const */String *String::trim_suffix(String *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   String *in_RDX;
   long lVar4;
   int iVar5;
   long *in_RSI;
   int iVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   iVar5 = (int)&local_38;
   iVar6 = (int)param_1;
   if (*in_RSI == 0) {
      cVar2 = ends_with((String*)&local_38, in_RDX);
      lVar4 = 0;
      if (cVar2 != '\0') {
         lVar4 = 0;
         if (*(long*)in_RDX == 0) {
            substr(iVar6, iVar5);
            goto LAB_001112e8;
         }

         LAB_001112bf:substr(iVar6, iVar5);
         if (lVar4 == 0) goto LAB_001112e8;
         goto LAB_001112d1;
      }

   }
 else {
      plVar1 = (long*)( *in_RSI + -0x10 );
      do {
         lVar4 = *plVar1;
         if (lVar4 == 0) goto LAB_00111274;
         LOCK();
         lVar3 = *plVar1;
         bVar7 = lVar4 == lVar3;
         if (bVar7) {
            *plVar1 = lVar4 + 1;
            lVar3 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar3 != -1) {
         local_38 = *in_RSI;
      }

      LAB_00111274:lVar4 = local_38;
      cVar2 = ends_with((String*)&local_38, in_RDX);
      if (cVar2 != '\0') {
         if (( ( lVar4 == 0 ) || ( (int)*(undefined8*)( lVar4 + -8 ) == 0 ) ) || ( *(long*)in_RDX != 0 )) goto LAB_001112bf;
         substr(iVar6, iVar5);
         LAB_001112d1:LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_38 + -0x10 ), false);
         }

         goto LAB_001112e8;
      }

   }

   *(long*)param_1 = lVar4;
   LAB_001112e8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* String::trim_suffix(char const*) const */char *String::trim_suffix(char *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   char *in_RDX;
   long lVar4;
   long *in_RSI;
   long in_FS_OFFSET;
   bool bVar5;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   plVar1 = (long*)( *in_RSI + -0x10 );
   if (*in_RSI == 0) {
      cVar2 = ends_with((String*)&local_38, in_RDX);
      lVar4 = 0;
      if (cVar2 == '\0') goto LAB_001114b2;
   }
 else {
      do {
         lVar4 = *plVar1;
         if (lVar4 == 0) goto LAB_00111406;
         LOCK();
         lVar3 = *plVar1;
         bVar5 = lVar4 == lVar3;
         if (bVar5) {
            *plVar1 = lVar4 + 1;
            lVar3 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar5 );
      if (lVar3 != -1) {
         local_38 = *in_RSI;
      }

      LAB_00111406:lVar4 = local_38;
      cVar2 = ends_with((String*)&local_38, in_RDX);
      if (cVar2 == '\0') {
         LAB_001114b2:*(long*)param_1 = lVar4;
         goto LAB_00111469;
      }

      if (lVar4 != 0) {
         strlen(in_RDX);
         substr((int)param_1, (int)&local_38);
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_38 + -0x10 ), false);
         }

         goto LAB_00111469;
      }

   }

   strlen(in_RDX);
   substr((int)param_1, (int)&local_38);
   LAB_00111469:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::get_base_dir() const */void String::get_base_dir(void) {
   long *plVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   CowData<char32_t> *pCVar8;
   String *in_RSI;
   CowData<char32_t> *in_RDI;
   long lVar9;
   CowData<char32_t> *pCVar10;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> *local_48;
   CowData<char32_t> *local_40;
   CowData<char32_t> *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = find(in_RSI, "://", 0);
   if (( ( iVar4 == -1 ) || ( iVar4 == -3 ) ) && ( ( ( iVar4 = find(in_RSI, ":/", 0) ),iVar4 == -1 && ( iVar4 = find(in_RSI, ":\\", 0) ),iVar4 == -1 ) ) || ( iVar4 == -2 )) {
      cVar3 = begins_with(in_RSI, "//");
      if (( ( ( cVar3 != '\0' ) || ( cVar3 = begins_with(in_RSI, "\\\\") ),cVar3 != '\0' ) ) && ( lVar2 = lVar2 != 0 )) {
         if (lVar7 < 3) {
            lVar9 = 0;
            lVar6 = lVar9;
            if (lVar7 < 1) goto LAB_00111827;
         }
 else {
            lVar6 = 2;
            do {
               if (*(int*)( lVar2 + lVar6 * 4 ) == 0x2f) {
                  if ((int)lVar6 != -1) goto LAB_0011169c;
                  break;
               }

               lVar6 = lVar6 + 1;
            }
 while ( lVar7 != lVar6 );
            lVar6 = 2;
            do {
               if (*(int*)( lVar2 + lVar6 * 4 ) == 0x5c) goto LAB_0011169c;
               lVar6 = lVar6 + 1;
            }
 while ( lVar7 != lVar6 );
            lVar9 = 0;
            lVar6 = lVar9;
         }

         LAB_001116cd:do {
            if (*(int*)( lVar2 + lVar9 * 4 ) == 0x2f) {
               if ((int)lVar9 != -1) goto LAB_00111553;
               break;
            }

            lVar9 = lVar9 + 1;
         }
 while ( lVar7 != lVar9 );
         if (lVar6 < lVar7) {
            do {
               if (*(int*)( lVar2 + lVar6 * 4 ) == 0x5c) {
                  if ((int)lVar6 != -1) goto LAB_00111553;
                  break;
               }

               lVar6 = lVar6 + 1;
            }
 while ( lVar7 != lVar6 );
         }

      }

      goto LAB_00111827;
   }

   LAB_00111553:local_40 = (CowData<char32_t>*)0x0;
   local_48 = (CowData<char32_t>*)0x0;
   substr((int)&local_38, (int)in_RSI);
   if (local_38 != (CowData<char32_t>*)0x0) {
      local_48 = local_38;
   }

   substr((int)&local_38, (int)in_RSI);
   pCVar10 = local_38;
   if (local_38 != (CowData<char32_t>*)0x0) {
      local_40 = local_38;
   }

   LAB_00111595:pCVar8 = local_48;
   iVar5 = CowData<char32_t>::rfind(local_48, (wchar32*)0x5c, -1);
   iVar4 = CowData<char32_t>::rfind(pCVar8, (wchar32*)0x2f, -1);
   if (iVar4 < iVar5) {
      iVar4 = iVar5;
   }

   if (iVar4 == -1) {
      *(CowData<char32_t>**)in_RDI = pCVar10;
   }
 else {
      substr((int)(String*)&local_38, (int)&local_48);
      *(undefined8*)in_RDI = 0;
      if (pCVar10 == (CowData<char32_t>*)0x0) goto LAB_001117ea;
      CowData<char32_t>::_ref(in_RDI, (CowData*)&local_40);
      operator+=((String *)
      in_RDI,(String*)&local_38;
      if (local_38 != (CowData<char32_t>*)0x0) goto LAB_00111745;
      LAB_00111757:LOCK();
      pCVar10 = pCVar10 + -0x10;
      *(long*)pCVar10 = *(long*)pCVar10 + -1;
      UNLOCK();
      pCVar8 = local_48;
      if (*(long*)pCVar10 == 0) {
         Memory::free_static(local_40 + -0x10, false);
         pCVar8 = local_48;
      }

   }

   LAB_001115d5:if (pCVar8 != (CowData<char32_t>*)0x0) {
      LOCK();
      pCVar8 = pCVar8 + -0x10;
      *(long*)pCVar8 = *(long*)pCVar8 + -1;
      UNLOCK();
      if (*(long*)pCVar8 == 0) {
         Memory::free_static(local_48 + -0x10, false);
      }

   }

   LAB_001115f1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_0011169c:iVar4 = (int)lVar6 + 1;
   lVar9 = (long)iVar4;
   if (( -1 < iVar4 ) && ( lVar6 = lVar9 < lVar7 )) goto LAB_001116cd;
   LAB_00111827:cVar3 = begins_with(in_RSI, "/");
   local_48 = (CowData<char32_t>*)0x0;
   local_40 = (CowData<char32_t>*)0x0;
   if (cVar3 != '\0') goto LAB_00111553;
   plVar1 = (long*)( *(long*)in_RSI + -0x10 );
   if (*(long*)in_RSI != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_001118e0;
         LOCK();
         lVar7 = *plVar1;
         bVar11 = lVar2 == lVar7;
         if (bVar11) {
            *plVar1 = lVar2 + 1;
            lVar7 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar11 );
      if (lVar7 == -1) {
         LAB_001118e0:pCVar10 = (CowData<char32_t>*)0x0;
      }
 else {
         local_48 = *(CowData<char32_t>**)in_RSI;
         pCVar10 = (CowData<char32_t>*)0x0;
      }

      goto LAB_00111595;
   }

   iVar5 = CowData<char32_t>::rfind((CowData<char32_t>*)0x0, (wchar32*)0x5c, -1);
   iVar4 = CowData<char32_t>::rfind((CowData<char32_t>*)0x0, (wchar32*)0x2f, -1);
   if (iVar4 <= iVar5) {
      iVar4 = iVar5;
   }

   if (iVar4 == -1) {
      *(undefined8*)in_RDI = 0;
      goto LAB_001115f1;
   }

   substr((int)&local_38, (int)&local_48);
   *(undefined8*)in_RDI = 0;
   LAB_001117ea:operator += ( (String*)in_RDI,(String*)&local_38 );
   pCVar8 = local_48;
   if (local_38 != (CowData<char32_t>*)0x0) {
      LAB_00111745:LOCK();
      pCVar10 = local_38 + -0x10;
      *(long*)pCVar10 = *(long*)pCVar10 + -1;
      UNLOCK();
      if (*(long*)pCVar10 == 0) {
         Memory::free_static(local_38 + -0x10, false);
      }

      pCVar8 = local_48;
      pCVar10 = local_40;
      if (local_40 != (CowData<char32_t>*)0x0) goto LAB_00111757;
   }

   goto LAB_001115d5;
}
/* String::get_file() const */void String::get_file(void) {
   long lVar1;
   int iVar2;
   int iVar3;
   CowData *in_RSI;
   CowData<char32_t> *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = CowData<char32_t>::rfind(*(CowData<char32_t>**)in_RSI, (wchar32*)0x5c, -1);
   iVar3 = CowData<char32_t>::rfind(*(CowData<char32_t>**)in_RSI, (wchar32*)0x2f, -1);
   if (iVar3 < iVar2) {
      iVar3 = iVar2;
   }

   if (iVar3 == -1) {
      *(undefined8*)in_RDI = 0;
      if (*(long*)in_RSI != 0) {
         CowData<char32_t>::_ref(in_RDI, in_RSI);
      }

   }
 else {
      substr((int)in_RDI, (int)in_RSI);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::get_extension() const */void String::get_extension(void) {
   int iVar1;
   int iVar2;
   int iVar3;
   undefined8 *in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = CowData<char32_t>::rfind((CowData<char32_t>*)*in_RSI, (wchar32*)0x2e, -1);
   if (-1 < iVar1) {
      iVar2 = CowData<char32_t>::rfind((CowData<char32_t>*)*in_RSI, (wchar32*)0x5c, -1);
      iVar3 = CowData<char32_t>::rfind((CowData<char32_t>*)*in_RSI, (wchar32*)0x2f, -1);
      if (iVar3 < iVar2) {
         iVar3 = iVar2;
      }

      if (iVar3 <= iVar1) {
         substr((int)in_RDI, (int)in_RSI);
         goto LAB_00111af0;
      }

   }

   *(undefined8*)in_RDI = 0;
   local_48 = &_LC16;
   local_40 = 0;
   parse_latin1(in_RDI, (StrRange*)&local_48);
   LAB_00111af0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::get_basename() const */void String::get_basename(void) {
   long lVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   CowData *in_RSI;
   CowData<char32_t> *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = CowData<char32_t>::rfind(*(CowData<char32_t>**)in_RSI, (wchar32*)0x2e, -1);
   if (-1 < iVar2) {
      iVar3 = CowData<char32_t>::rfind(*(CowData<char32_t>**)in_RSI, (wchar32*)0x5c, -1);
      iVar4 = CowData<char32_t>::rfind(*(CowData<char32_t>**)in_RSI, (wchar32*)0x2f, -1);
      if (iVar4 < iVar3) {
         iVar4 = iVar3;
      }

      if (iVar4 <= iVar2) {
         substr((int)in_RDI, (int)in_RSI);
         goto LAB_00111be3;
      }

   }

   *(undefined8*)in_RDI = 0;
   if (*(long*)in_RSI != 0) {
      CowData<char32_t>::_ref(in_RDI, in_RSI);
   }

   LAB_00111be3:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::unquote() const */void String::unquote(void) {
   long lVar1;
   char cVar2;
   String *in_RSI;
   CowData<char32_t> *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar2 = is_quoted(in_RSI);
   if (cVar2 == '\0') {
      *(undefined8*)in_RDI = 0;
      if (*(long*)in_RSI != 0) {
         CowData<char32_t>::_ref(in_RDI, (CowData*)in_RSI);
      }

   }
 else {
      substr((int)in_RDI, (int)in_RSI);
   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* String::dedent() const */void String::dedent(void) {
   long *plVar1;
   code *pcVar2;
   int iVar3;
   long lVar4;
   byte bVar5;
   uint uVar6;
   int iVar7;
   long lVar8;
   byte bVar9;
   long lVar10;
   byte bVar11;
   int iVar12;
   long *in_RSI;
   int iVar13;
   String *in_RDI;
   uint uVar14;
   int iVar15;
   int iVar16;
   long lVar17;
   long lVar18;
   int iVar19;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   lVar4 = *in_RSI;
   if (lVar4 != 0) {
      iVar19 = 1;
      lVar8 = 0;
      lVar18 = 0;
      iVar13 = -1;
      iVar15 = 0;
      bVar11 = 0;
      bVar9 = 0;
      do {
         lVar10 = *(long*)( lVar4 + -8 );
         iVar7 = (int)lVar8;
         iVar12 = (int)in_RSI;
         if (( (int)lVar10 == 0 ) || ( (int)lVar10 + -1 <= iVar7 )) break;
         iVar3 = iVar13;
         if (lVar10 == lVar8) {
            uVar6 = 0;
            if (bVar11 == 0) {
               LAB_00111d9c:bVar5 = ( byte )((uint)iVar13 >> 0x1f) & bVar9;
               if (bVar5 != 0) {
                  iVar16 = iVar7 - iVar15;
                  bVar9 = bVar5;
                  if (lVar18 == 0) {
                     iVar3 = iVar7;
                     if (iVar16 < 0) {
                        lVar10 = 0;
                        LAB_00111f06:lVar8 = (long)iVar16;
                        LAB_00111e9e:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar10, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar2 = (code*)invalidInstructionException();
                        ( *pcVar2 )();
                     }

                  }
 else {
                     lVar10 = *(long*)( lVar18 + -8 );
                     if ((int)lVar10 == 0) {
                        iVar3 = iVar7;
                        if (iVar16 < 0) goto LAB_00111f06;
                     }
 else {
                        iVar3 = iVar7;
                        if (iVar16 < (int)lVar10 + -1) {
                           lVar17 = (long)iVar16;
                           if (lVar10 == lVar17) {
                              uVar14 = 0;
                           }
 else {
                              if (( lVar17 < 0 ) || ( lVar10 <= lVar17 )) goto LAB_00111f06;
                              uVar14 = *(uint*)( lVar18 + lVar17 * 4 );
                           }

                           iVar3 = iVar13;
                           if (uVar14 != uVar6) {
                              iVar3 = iVar7;
                           }

                        }

                     }

                  }

               }

            }

         }
 else {
            if (lVar10 <= lVar8) goto LAB_00111e9e;
            uVar6 = *(uint*)( lVar4 + lVar8 * 4 );
            if (uVar6 == 10) {
               if (bVar11 != 0) {
                  substr((int)(String*)&local_48, iVar12);
                  operator+=(in_RDI,(String *)&local_48);
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_48 + -0x10 ), false);
                     }

                  }

               }

               operator+=(in_RDI,
               "\n";
               lVar4 = *in_RSI;
               bVar11 = 0;
               iVar3 = -1;
               iVar15 = iVar19;
            }
 else if (bVar11 == 0) {
               if (( uVar6 < 0x21 ) || ( bVar11 = bVar9 != 0 )) goto LAB_00111d9c;
               substr((int)&local_48, iVar12);
               lVar10 = local_48;
               if (lVar18 == local_48) {
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_48 + -0x10 ), false);
                     }

                  }

               }
 else if (lVar18 != 0) {
                  plVar1 = (long*)( lVar18 + -0x10 );
                  LOCK();
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static(plVar1, false);
                     lVar10 = local_48;
                  }

               }

               lVar4 = *in_RSI;
               bVar11 = 1;
               lVar18 = lVar10;
               iVar3 = iVar7;
               bVar9 = 1;
            }

         }

         iVar13 = iVar3;
         lVar8 = lVar8 + 1;
         iVar19 = iVar19 + 1;
      }
 while ( lVar4 != 0 );
      if (bVar11 != 0) {
         substr((int)(CowData<char32_t>*)&local_48, iVar12);
         operator+=(in_RDI,(String *)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      }

      if (lVar18 != 0) {
         plVar1 = (long*)( lVar18 + -0x10 );
         LOCK();
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static(plVar1, false);
         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DTR(String const&, String const&) */String *DTR(String *param_1, String *param_2) {
   long *plVar1;
   char *__s;
   long lVar2;
   StringName *pSVar3;
   long lVar4;
   String *in_RDX;
   long in_FS_OFFSET;
   bool bVar5;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   String::dedent();
   String::strip_edges(SUB81((String*)&local_80, 0), SUB81((StrRange*)&local_58, 0));
   pSVar3 = TranslationServer::singleton;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      pSVar3 = TranslationServer::singleton;
      if (*plVar1 == 0) {
         Memory::free_static(local_58 + -0x10, false);
         pSVar3 = TranslationServer::singleton;
      }

   }

   TranslationServer::singleton = pSVar3;
   if (pSVar3 == (StringName*)0x0) {
      _replace_common(param_1, (char*)&local_80, "$DOCS_URL", true);
      goto LAB_001121df;
   }

   StringName::StringName((StringName*)&local_70, in_RDX, false);
   StringName::StringName((StringName*)&local_78, (String*)&local_80, false);
   TranslationServer::doc_translate((StringName*)&local_68, pSVar3);
   if (local_68 == 0) {
      LAB_00112281:local_60 = 0;
      _replace_common(param_1, (char*)&local_60, "$DOCS_URL", true);
   }
 else {
      __s = *(char**)( local_68 + 8 );
      local_60 = 0;
      if (__s == (char*)0x0) {
         if (*(long*)( local_68 + 0x10 ) == 0) goto LAB_00112281;
         plVar1 = (long*)( *(long*)( local_68 + 0x10 ) + -0x10 );
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0011215a;
            LOCK();
            lVar4 = *plVar1;
            bVar5 = lVar2 == lVar4;
            if (bVar5) {
               *plVar1 = lVar2 + 1;
               lVar4 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar5 );
         if (lVar4 != -1) {
            local_60 = *(long*)( local_68 + 0x10 );
         }

      }
 else {
         local_50 = strlen(__s);
         local_58 = __s;
         String::parse_latin1((String*)&local_60, (StrRange*)&local_58);
      }

      LAB_0011215a:lVar2 = local_60;
      _replace_common(param_1, (char*)&local_60, "$DOCS_URL", true);
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }

      }

   }

   if (( ( ( StringName::configured != '\0' ) && ( ( local_68 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_78 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_001121df:lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DTRN(String const&, String const&, int, String const&) */String *DTRN(String *param_1, String *param_2, int param_3, String *param_4) {
   long *plVar1;
   char *__s;
   long lVar2;
   StringName *pSVar3;
   long lVar4;
   String *in_R8;
   long in_FS_OFFSET;
   bool bVar5;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   String::dedent();
   bVar5 = SUB81((StrRange*)&local_58, 0);
   String::strip_edges(SUB81((String*)&local_90, 0), bVar5);
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_58 + -0x10, false);
      }

   }

   String::dedent();
   String::strip_edges(SUB81((String*)&local_88, 0), bVar5);
   pSVar3 = TranslationServer::singleton;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      pSVar3 = TranslationServer::singleton;
      if (*plVar1 == 0) {
         Memory::free_static(local_58 + -0x10, false);
         pSVar3 = TranslationServer::singleton;
      }

   }

   TranslationServer::singleton = pSVar3;
   if (pSVar3 == (StringName*)0x0) {
      if ((int)param_4 == 1) {
         _replace_common(param_1, (char*)&local_90, "$DOCS_URL", true);
      }
 else {
         _replace_common(param_1, (char*)&local_88, "$DOCS_URL", true);
      }

      goto LAB_001124f2;
   }

   StringName::StringName((StringName*)&local_70, in_R8, false);
   StringName::StringName((StringName*)&local_78, (String*)&local_88, false);
   StringName::StringName((StringName*)&local_80, (String*)&local_90, false);
   TranslationServer::doc_translate_plural((StringName*)&local_68, pSVar3, (int)(StringName*)&local_80, (StringName*)&local_78);
   if (local_68 == 0) {
      LAB_001125f9:local_60 = 0;
      _replace_common(param_1, (char*)&local_60, "$DOCS_URL", true);
   }
 else {
      __s = *(char**)( local_68 + 8 );
      local_60 = 0;
      if (__s == (char*)0x0) {
         if (*(long*)( local_68 + 0x10 ) == 0) goto LAB_001125f9;
         plVar1 = (long*)( *(long*)( local_68 + 0x10 ) + -0x10 );
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_0011245f;
            LOCK();
            lVar4 = *plVar1;
            bVar5 = lVar2 == lVar4;
            if (bVar5) {
               *plVar1 = lVar2 + 1;
               lVar4 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar5 );
         if (lVar4 != -1) {
            local_60 = *(long*)( local_68 + 0x10 );
         }

      }
 else {
         local_50 = strlen(__s);
         local_58 = __s;
         String::parse_latin1((String*)&local_60, (StrRange*)&local_58);
      }

      LAB_0011245f:lVar2 = local_60;
      _replace_common(param_1, (char*)&local_60, "$DOCS_URL", true);
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }

      }

   }

   if (( ( ( StringName::configured != '\0' ) && ( ( local_68 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_80 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_78 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_70 != 0 ) ) )) {
      StringName::unref();
   }

   LAB_001124f2:lVar2 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::pad_decimals(int) const */CowData<char32_t> *String::pad_decimals(int param_1) {
   long *plVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   uint uVar5;
   int iVar6;
   int in_EDX;
   long lVar7;
   long *in_RSI;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   long in_FS_OFFSET;
   bool bVar8;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   if (*in_RSI == 0) {
      LAB_00112829:lVar7 = 0;
   }
 else {
      plVar1 = (long*)( *in_RSI + -0x10 );
      do {
         lVar7 = *plVar1;
         if (lVar7 == 0) goto LAB_001126f5;
         LOCK();
         lVar3 = *plVar1;
         bVar8 = lVar7 == lVar3;
         if (bVar8) {
            *plVar1 = lVar7 + 1;
            lVar3 = lVar7;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar3 != -1) {
         local_58 = *in_RSI;
      }

      LAB_001126f5:lVar7 = local_58;
      if (local_58 == 0) goto LAB_00112829;
      lVar3 = *(long*)( local_58 + -8 );
      if (0 < lVar3) {
         lVar4 = 0;
         do {
            if (*(int*)( local_58 + lVar4 * 4 ) == 0x2e) {
               uVar5 = (uint)lVar4;
               if (uVar5 != 0xffffffff) {
                  iVar2 = uVar5 + 1;
                  if (0 < in_EDX) goto LAB_0011273c;
                  substr(param_1, (int)&local_58);
                  goto LAB_001127e5;
               }

               break;
            }

            lVar4 = lVar4 + 1;
         }
 while ( lVar3 != lVar4 );
      }

   }

   if (in_EDX < 1) {
      *(long*)this = lVar7;
      goto LAB_001127fc;
   }

   operator+=((String *)&
   local_58,".";
   if (local_58 == 0) {
      local_50 = 0;
      local_40 = 1;
      local_48 = &_LC124;
      parse_latin1((String*)&local_50, (StrRange*)&local_48);
      repeat((int)(StrRange*)&local_48);
      *(undefined8*)this = 0;
      LAB_001127a5:operator += ( (String*)this,(String*)&local_48 );
      if (local_48 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static(local_48 + -0x10, false);
         }

      }

      lVar7 = local_58;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_50 + -0x10 ), false);
            lVar7 = local_58;
         }

      }

   }
 else {
      lVar3 = *(long*)( local_58 + -8 );
      iVar6 = (int)lVar3;
      if (iVar6 == 0) {
         LAB_00112750:local_50 = 0;
         local_40 = 1;
         local_48 = &_LC124;
         parse_latin1((String*)&local_50, (StrRange*)&local_48);
         repeat((int)(StrRange*)&local_48);
         *(undefined8*)this = 0;
         CowData<char32_t>::_ref(this, (CowData*)&local_58);
         goto LAB_001127a5;
      }

      iVar2 = iVar6 + -1;
      uVar5 = iVar6 - 2;
      LAB_0011273c:lVar7 = local_58;
      if ((int)lVar3 == 0) {
         uVar5 = ~uVar5;
      }
 else {
         uVar5 = ( (int)lVar3 + -1 ) - iVar2;
      }

      if ((int)uVar5 <= in_EDX) goto LAB_00112750;
      substr(param_1, (int)&local_58);
   }

   if (lVar7 != 0) {
      LAB_001127e5:LOCK();
      plVar1 = (long*)( lVar7 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_58 + -0x10 ), false);
      }

   }

   LAB_001127fc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00112c20) *//* String::humanize_size(unsigned long) */String * __thiscall String::humanize_size(String *this,ulong param_1){
   long *plVar1;
   undefined8 *puVar2;
   ulong uVar3;
   ulong uVar4;
   int iVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_80;
   undefined8 *local_78;
   long local_70;
   long local_68;
   long local_60;
   undefined8 *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 0x401) {
      local_68 = 0;
      local_50 = 0;
      local_58 = (undefined8*)&_LC16;
      parse_latin1((String*)&local_68, (StrRange*)&local_58);
      local_58 = (undefined8*)&_LC169;
      local_70 = 0;
      local_50 = 1;
      parse_latin1((String*)&local_70, (StrRange*)&local_58);
      RTR((String*)&local_60, (String*)&local_70);
      local_58 = (undefined8*)&_LC126;
      local_78 = (undefined8*)0x0;
      local_50 = 1;
      parse_latin1((String*)&local_78, (StrRange*)&local_58);
      num_uint64((String*)&local_80, param_1, 10, false);
      lVar6 = local_80;
      local_58 = (undefined8*)0x0;
      if (local_80 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_80);
      }

      operator+=((String *)&
      local_58,(String*)&local_78;
      puVar2 = local_58;
      *(undefined8*)this = 0;
      if (local_58 == (undefined8*)0x0) {
         operator+=(this,(String *)&local_60);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)&local_58);
         operator+=(this,(String *)&local_60);
         LOCK();
         plVar1 = (long*)( (long)puVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         lVar6 = local_80;
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_58 + -0x10 ), false);
            lVar6 = local_80;
         }

      }

      if (lVar6 != 0) {
         LOCK();
         plVar1 = (long*)( lVar6 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_80 + -0x10 ), false);
         }

      }

      if (local_78 != (undefined8*)0x0) {
         LOCK();
         plVar1 = local_78 + -2;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static(local_78 + -2, false);
         }

      }

      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }

      }

      lVar6 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      lVar6 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else {
      iVar5 = 0;
      uVar4 = 0x400;
      do {
         uVar3 = uVar4;
         uVar4 = uVar3 << 10;
         iVar5 = iVar5 + 1;
         if (param_1 <= uVar4) {
            local_78 = (undefined8*)0x0;
            switch (iVar5) {
               default:
          local_60 = 0;
          local_50 = 0;
          local_58 = (undefined8 *)&_LC16;
          parse_latin1((String *)&local_60,(StrRange *)&local_58);
          local_58 = (undefined8 *)&_LC170;
          goto LAB_001129f0;
               case 2:
          local_60 = 0;
          local_50 = 0;
          local_58 = (undefined8 *)&_LC16;
          parse_latin1((String *)&local_60,(StrRange *)&local_58);
          local_58 = &_LC171;
          goto LAB_001129f0;
               case 3:
          local_60 = 0;
          local_50 = 0;
          local_58 = (undefined8 *)&_LC16;
          parse_latin1((String *)&local_60,(StrRange *)&local_58);
          local_58 = (undefined8 *)0x11bddd;
          goto LAB_001129f0;
               case 4:
          local_60 = 0;
          local_50 = 0;
          local_58 = (undefined8 *)&_LC16;
          parse_latin1((String *)&local_60,(StrRange *)&local_58);
          local_58 = (undefined8 *)&_LC173;
          goto LAB_001129f0;
               case 5:
          local_60 = 0;
          local_50 = 0;
          local_58 = (undefined8 *)&_LC16;
          parse_latin1((String *)&local_60,(StrRange *)&local_58);
          local_58 = (undefined8 *)&_LC174;
          goto LAB_001129f0;
               case 6:
          goto switchD_00112c60_caseD_6;
            }

         }

      }
 while ( iVar5 != 6 );
      switchD_00112c60_caseD_6:local_78 = (undefined8*)0x0;
      local_60 = 0;
      local_50 = 0;
      local_58 = (undefined8*)&_LC16;
      parse_latin1((String*)&local_60, (StrRange*)&local_58);
      local_58 = (undefined8*)&_LC175;
      LAB_001129f0:local_68 = 0;
      local_50 = 3;
      parse_latin1((String*)&local_68, (StrRange*)&local_58);
      RTR((String*)&local_58, (String*)&local_68);
      puVar2 = local_58;
      if (local_58 != (undefined8*)0x0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_58 = (undefined8*)0x0;
         local_78 = puVar2;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      local_60 = 0;
      local_58 = (undefined8*)&_LC126;
      local_50 = 1;
      parse_latin1((String*)&local_60, (StrRange*)&local_58);
      num((double)param_1 / (double)uVar3, (int)&local_70);
      pad_decimals((int)(String*)&local_68);
      lVar6 = local_68;
      local_58 = (undefined8*)0x0;
      if (local_68 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_68);
      }

      operator+=((String *)&
      local_58,(String*)&local_60;
      puVar2 = local_58;
      *(undefined8*)this = 0;
      if (local_58 == (undefined8*)0x0) {
         operator+=(this,(String *)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)&local_58);
         operator+=(this,(String *)&local_78);
         LOCK();
         plVar1 = (long*)( (long)puVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         lVar6 = local_68;
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_58 + -0x10 ), false);
            lVar6 = local_68;
         }

      }

      if (lVar6 != 0) {
         LOCK();
         plVar1 = (long*)( lVar6 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_68 + -0x10 ), false);
         }

      }

      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_70 + -0x10 ), false);
         }

      }

      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }

      }

      if (local_78 != (undefined8*)0x0) {
         LOCK();
         plVar1 = local_78 + -2;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static(local_78 + -2, false);
         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* String::left(int) const */CowData<char32_t> *String::left(int param_1) {
   int iVar1;
   wchar32 *pwVar2;
   int in_EDX;
   CowData *in_RSI;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   long in_FS_OFFSET;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 0) {
      if (( ( *(long*)in_RSI != 0 ) && ( iVar1 = (int)*(undefined8*)( *(long*)in_RSI + -8 ) ),iVar1 != 0 )) goto LAB_00113108;
   }
 else if (in_EDX != 0) {
      if (( ( *(long*)in_RSI == 0 ) || ( iVar1 = (int)*(undefined8*)( *(long*)in_RSI + -8 ) ),iVar1 == 0 )) {
         *(undefined8*)this = 0;
         if (*(long*)in_RSI != 0) {
            CowData<char32_t>::_ref(this, in_RSI);
         }

         goto LAB_001130d2;
      }

      LAB_00113108:local_38 = (undefined*)0x0;
      pwVar2 = (wchar32*)get_data((String*)in_RSI);
      copy_from_unchecked((String*)&local_38, pwVar2, in_EDX);
      *(undefined**)this = local_38;
      goto LAB_001130d2;
   }

   *(undefined8*)this = 0;
   local_38 = &_LC16;
   local_30 = 0;
   parse_latin1((String*)this, (StrRange*)&local_38);
   LAB_001130d2:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* String::right(int) const */CowData<char32_t> *String::right(int param_1) {
   long lVar1;
   int in_EDX;
   int iVar2;
   String *in_RSI;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   long in_FS_OFFSET;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 0) {
      if (( ( *(long*)in_RSI != 0 ) && ( iVar2 = (int)*(undefined8*)( *(long*)in_RSI + -8 ) ),iVar2 != 0 )) goto LAB_00113218;
   }
 else if (in_EDX != 0) {
      if (( ( *(long*)in_RSI == 0 ) || ( iVar2 = (int)*(undefined8*)( *(long*)in_RSI + -8 ) ),iVar2 == 0 )) {
         *(undefined8*)this = 0;
         if (*(long*)in_RSI != 0) {
            CowData<char32_t>::_ref(this, (CowData*)in_RSI);
         }

         goto LAB_001131db;
      }

      LAB_00113218:local_38 = (undefined*)0x0;
      lVar1 = get_data(in_RSI);
      if (*(long*)in_RSI == 0) {
         iVar2 = 0;
      }
 else {
         iVar2 = (int)*(undefined8*)( *(long*)in_RSI + -8 );
         iVar2 = iVar2 + -1 + ( uint )(iVar2 == 0);
      }

      copy_from_unchecked((String*)&local_38, (wchar32*)( lVar1 + (long)( iVar2 - in_EDX ) * 4 ), in_EDX);
      *(undefined**)this = local_38;
      goto LAB_001131db;
   }

   *(undefined8*)this = 0;
   local_38 = &_LC16;
   local_30 = 0;
   parse_latin1((String*)this, (StrRange*)&local_38);
   LAB_001131db:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* String::get_invalid_node_name_characters(bool) */String * __thiscall String::get_invalid_node_name_characters(String *this,bool param_1){
   long *plVar1;
   long lVar2;
   wchar32 wVar3;
   wchar32 *pwVar4;
   long in_FS_OFFSET;
   long local_50;
   wchar32 local_48[2];
   long local_40;
   pwVar4 = L".:@/\"%";
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   wVar3 = L'.';
   do undefined8 * String::xml_unescape(void){int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  String *in_RSI;
  undefined8 *in_RDI;
  int *piVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long in_FS_OFFSET;
  int *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (int *)0x0;
  if ((*(long *)in_RSI == 0) || (iVar16 = (int)*(undefined8 *)(*(long *)in_RSI + -8), iVar16 == 0))
  {
    get_data(in_RSI);
  }else{iVar16 = iVar16 + -1;
    piVar1 = (int *)get_data(in_RSI);
    if (iVar16 != 0){iVar8 = iVar16;
      iVar14 = 0;
      do{while (iVar10 = iVar14, iVar14 = iVar10 + 1, *piVar1 != 0x26) {
          iVar8 = iVar8 + -1;
          piVar1 = piVar1 + 1;
          if (iVar8 == 0) goto LAB_0011520e;
        }
        if (iVar8 < 4) {
LAB_001151f8:
          lVar15 = 4;
          iVar11 = 1;
        }else{iVar11 = piVar1[1];
          if (iVar11 == 0x23) {
            uVar6 = 3;
            if (piVar1[2] == 0x78) {
              uVar7 = 0;
              uVar6 = 4;
              do {
                uVar4 = uVar6;
                iVar11 = piVar1[uVar4 - 1];
                if (iVar11 == 0x3b) break;
                uVar12 = iVar11 - 0x30;
                if (9 < uVar12) {
                  if (iVar11 - 0x61U < 6) {
                    uVar12 = iVar11 - 0x57;
                  }
                  else {
                    if (5 < iVar11 - 0x41U) break;
                    uVar12 = iVar11 - 0x37;
                  }
                }
                if (0xfffffff < uVar7) goto LAB_001151f8;
                uVar7 = uVar7 << 4 | uVar12;
                uVar6 = uVar4 + 1;
              } while ((ulong)(iVar8 + 1) != uVar4 + 1);
              if (uVar7 != 0) {
                iVar11 = (int)uVar4;
                lVar15 = (long)iVar11;
                piVar9 = piVar1 + lVar15 + -1;
LAB_00115568:
                lVar15 = lVar15 * 4;
                if (*piVar9 == 0x3b) goto LAB_00115204;
              }
            }
            else {
              do {
                uVar4 = uVar6;
                if (9 < piVar1[uVar4 - 1] - 0x30U) break;
                uVar6 = uVar4 + 1;
              } while ((ulong)(iVar8 + 1) != uVar4 + 1);
              iVar11 = (int)uVar4;
              lVar15 = (long)iVar11;
              piVar9 = piVar1 + lVar15 + -1;
              if ((((*piVar9 == 0x3b) && (iVar11 + -3 != 0)) && (piVar1[2] != 0)) &&
                 (lVar5 = to_int(piVar1 + 2,iVar11 + -3,false), lVar5 - 1U < 0xffffffff))
              gotoLAB_00115568;}goto LAB_001151f8;}if ((iVar11 != 0x67) && (iVar11 != 0x6c)) {
            if (iVar8 != 4) {
              if (iVar11 == 0x61) {
                if (piVar1[2] == 0x6d) {
                  if ((piVar1[3] == 0x70) && (piVar1[4] == 0x3b)) {
                    lVar15 = 0x14;
                    iVar11 = 5;
                    goto LAB_00115204;}}(( ( ( iVar8 != 5 ) && ( piVar1[2] == 0x70 ) ) && ( piVar1[3] == 0x6f ) ) && ( piVar1[4] == 0x73 ))goto LAB_001155e0;}(( ( iVar8 != 5 ) && ( iVar11 == 0x71 ) ) && ( ( piVar1[2] == 0x75 && ( ( piVar1[3] == 0x6f && ( piVar1[4] == 0x74 ) ) ) ) ))(piVar1[5] == 0x3b) = 0x18(( piVar1[2] != 0x74 ) || ( piVar1[3] != 0x3b )) = 0x10 - iVar11(int *)((long)piVar1 + lVar15)(iVar8 != 0) < false > ( (CowData<char32_t>*)&local_48,(long)( iVar10 + 2 ) ), ;
      CowData<char32_t>::_copy_on_write((CowData<char32_t> *) & local_48; while ( *piVar2 == 0x26 );
   {
      iVar8 = 0x26;
      if (iVar16 < 4) goto LAB_00115398;
      iVar10 = piVar2[1];
      if (iVar10 == 0x23) {
         if (piVar2[2] == 0x78) {
            uVar6 = 0;
            uVar4 = 4;
            do {
               uVar3 = uVar4;
               iVar10 = piVar2[uVar3 - 1];
               if (iVar10 == 0x3b) break;
               uVar7 = iVar10 - 0x30;
               uVar12 = (uint)uVar6;
               if (9 < uVar7) {
                  if (iVar10 - 0x61U < 6) {
                     uVar7 = iVar10 - 0x57;
                  }
 else {
                     if (5 < iVar10 - 0x41U) goto joined_r0x00115782;
                     uVar7 = iVar10 - 0x37;
                  }

               }

               if (0xfffffff < uVar12) goto LAB_00115398;
               uVar6 = ( ulong )(uVar12 << 4 | uVar7);
               uVar4 = uVar3 + 1;
            }
 while ( uVar3 + 1 != ( ulong )(iVar16 + 1) );
            uVar12 = (uint)uVar6;
            joined_r0x00115782:if (uVar12 == 0) goto LAB_00115398;
            lVar15 = (long)(int)uVar3;
            piVar13 = piVar2 + lVar15 + -1;
            LAB_001156e6:lVar15 = lVar15 * 4;
            iVar8 = (int)uVar6;
            iVar10 = (int)uVar3;
            if (*piVar13 != 0x3b) goto LAB_001156f0;
         }
 else {
            uVar6 = 3;
            do {
               uVar3 = uVar6;
               if (9 < piVar2[uVar3 - 1] - 0x30U) break;
               uVar6 = uVar3 + 1;
            }
 while ( uVar3 + 1 != ( ulong )(iVar16 + 1) );
            iVar10 = (int)uVar3;
            lVar15 = (long)iVar10;
            piVar13 = piVar2 + lVar15 + -1;
            if (( ( *piVar13 == 0x3b ) && ( iVar10 != 3 ) ) && ( piVar2[2] != 0 )) {
               uVar6 = to_int(piVar2 + 2, iVar10 + -3, false);
               if (uVar6 - 1 < 0xffffffff) goto LAB_001156e6;
               LAB_001156f0:iVar8 = *piVar2;
            }

            LAB_00115398:lVar15 = 4;
            iVar10 = 1;
         }

         LAB_001153a3:if (piVar9 != (int*)0x0) {
            LAB_001153a8:*piVar9 = iVar8;
            piVar9 = piVar9 + 1;
         }

      }
 else {
         if (iVar10 != 0x67) {
            if (iVar10 == 0x6c) {
               if (( piVar2[2] == 0x74 ) && ( piVar2[3] == 0x3b )) {
                  if (piVar9 != (int*)0x0) {
                     iVar8 = 0x3c;
                     lVar15 = 0x10;
                     iVar10 = 4;
                     goto LAB_001153a8;
                  }

                  goto LAB_00115770;
               }

               goto LAB_00115398;
            }

            if (iVar16 == 4) goto LAB_00115398;
            if (iVar10 == 0x61) {
               if (piVar2[2] == 0x6d) {
                  if (piVar2[3] == 0x70) {
                     lVar15 = 0x14;
                     iVar10 = 5;
                     if (piVar2[4] == 0x3b) goto LAB_001153a3;
                  }

               }
 else if (( ( ( iVar16 != 5 ) && ( piVar2[2] == 0x70 ) ) && ( piVar2[3] == 0x6f ) ) && ( ( piVar2[4] == 0x73 && ( piVar2[5] == 0x3b ) ) )) {
                  if (piVar9 == (int*)0x0) goto LAB_0011578d;
                  iVar8 = 0x27;
                  lVar15 = 0x18;
                  iVar10 = 6;
                  goto LAB_001153a8;
               }

               goto LAB_00115398;
            }

            if (( ( iVar10 != 0x71 ) || ( iVar16 == 5 ) ) || ( ( piVar2[2] != 0x75 || ( ( ( piVar2[3] != 0x6f || ( piVar2[4] != 0x74 ) ) || ( piVar2[5] != 0x3b ) ) ) ) )) goto LAB_00115398;
            if (piVar9 == (int*)0x0) {
               LAB_0011578d:lVar15 = 0x18;
               iVar10 = 6;
               goto LAB_001153af;
            }

            iVar8 = 0x22;
            lVar15 = 0x18;
            iVar10 = 6;
            goto LAB_001153a8;
         }

         if (( piVar2[2] != 0x74 ) || ( piVar2[3] != 0x3b )) goto LAB_00115398;
         if (piVar9 != (int*)0x0) {
            iVar8 = 0x3e;
            lVar15 = 0x10;
            iVar10 = 4;
            goto LAB_001153a8;
         }

         LAB_00115770:lVar15 = 0x10;
         iVar10 = 4;
      }

      LAB_001153af:iVar16 = iVar16 - iVar10;
      piVar2 = (int*)( (long)piVar2 + lVar15 );
      if (iVar16 == 0) goto LAB_001153be;
   }

   if (piVar9 != (int*)0x0) {
      *piVar9 = *piVar2;
      piVar9 = piVar9 + 1;
   }

   iVar16 = iVar16 + -1;
   piVar2 = piVar2 + 1;
}
while (iVar16 != 0) ;;;LAB_001153be:piVar1[iVar14] = 0;*in_RDI = piVar1;goto LAB_00115313;}
  }*in_RDI = 0;LAB_00115313:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return in_RDI;}/* String::indent(String const&) const */String *String::indent(String *param_1) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long lVar4;
   int iVar5;
   CowData *in_RDX;
   long *in_RSI;
   int iVar6;
   int iVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   lVar4 = *in_RSI;
   if (lVar4 != 0) {
      lVar8 = 0;
      iVar5 = 0;
      do {
         lVar2 = *(long*)( lVar4 + -8 );
         iVar7 = (int)lVar8;
         iVar6 = (int)lVar2;
         if (( iVar6 == 0 ) || ( iVar6 + -1 <= iVar7 )) {
            if (iVar5 == iVar6 + -1 + ( uint )(iVar6 == 0)) goto LAB_001158b0;
            goto LAB_00115821;
         }

         if (lVar2 != lVar8) {
            if (lVar2 <= lVar8) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            if (*(int*)( lVar4 + lVar8 * 4 ) == 10) {
               if (iVar5 == iVar7) {
                  operator+=(param_1,L
                  '\n';
                  lVar4 = *in_RSI;
                  iVar5 = iVar7 + 1;
               }
 else {
                  substr((int)(String*)&local_50, (int)in_RSI);
                  local_48 = 0;
                  if (*(long*)in_RDX != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, in_RDX);
                  }

                  operator+=((String *)&
                  local_48,(String*)&local_50;
                  operator+=(param_1,(String *)&local_48);
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_48 + -0x10 ), false);
                     }

                  }

                  if (local_50 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_50 + -0x10 ), false);
                        lVar4 = *in_RSI;
                        iVar5 = iVar7 + 1;
                        goto LAB_001158ff;
                     }

                  }

                  lVar4 = *in_RSI;
                  iVar5 = iVar7 + 1;
               }

            }

         }

         LAB_001158ff:lVar8 = lVar8 + 1;
      }
 while ( lVar4 != 0 );
      if (iVar5 != 0) {
         LAB_00115821:substr((int)(String*)&local_50, (int)in_RSI);
         local_48 = 0;
         if (*(long*)in_RDX != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, in_RDX);
         }

         operator+=((String *)&
         local_48,(String*)&local_50;
         operator+=(param_1,(String *)&local_48);
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }

         }

         if (local_50 != 0) {
            LOCK();
            plVar1 = (long*)( local_50 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_50 + -0x10 ), false);
            }

         }

      }

   }

   LAB_001158b0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* String::strip_escapes() const */void String::strip_escapes(void) {
   wchar32 wVar1;
   long lVar2;
   code *pcVar3;
   long lVar4;
   long lVar5;
   long *in_RSI;
   String *in_RDI;
   *(undefined8*)in_RDI = 0;
   lVar4 = *in_RSI;
   if (lVar4 != 0) {
      lVar5 = 0;
      while (( lVar2 = *(long*)( lVar4 + -8 ) ),(int)lVar2 != 0 && ( (int)lVar5 < (int)lVar2 + -1 )) {
         if (lVar2 != lVar5) {
            if (lVar2 <= lVar5) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            wVar1 = *(wchar32*)( lVar4 + lVar5 * 4 );
            if (0x1f < (uint)wVar1) {
               operator+=(in_RDI,wVar1)
               ;;
               lVar4 = *in_RSI;
            }

         }

         lVar5 = lVar5 + 1;
         if (lVar4 == 0) {
            return;
         }

      }
;
   }

   return;
}
/* String::uri_encode() const */String * __thiscall String::uri_encode(String *this){
   long *plVar1;
   char cVar2;
   long lVar3;
   code *pcVar4;
   undefined2 uVar5;
   wchar32 wVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_50;
   undefined4 local_44;
   long local_40;
   lVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   utf8();
   *(undefined8*)this = 0;
   if (local_50 != 0) {
      while (true) {
         lVar3 = *(long*)( local_50 + -8 );
         if (( (int)lVar3 == 0 ) || ( (int)lVar3 + -1 <= (int)lVar7 )) break;
         uVar5 = _LC182;
         if (lVar3 == lVar7) {
            LAB_00115c2b:local_44 = (uint)CONCAT21(uVar5, 0x25);
            operator+=(this,(char *)&local_44);
         }
 else {
            if (lVar3 <= lVar7) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar3, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            cVar2 = *(char*)( local_50 + lVar7 );
            wVar6 = (wchar32)cVar2;
            if (( 1 < ( byte )(cVar2 - 0x2dU) ) && ( cVar2 != '~' )) {
               if (cVar2 < ':') {
                  if (cVar2 < '0') goto LAB_00115c16;
               }
 else if (( 0x39 < ( byte )(wVar6 + L'\xffffffbf') ) || ( ( 0x3ffffff43ffffffU >> ( ( ulong )(uint)(wVar6 + L'\xffffffbf') & 0x3f ) & 1 ) == 0 )) {
                  LAB_00115c16:uVar5 = CONCAT11("0123456789ABCDEF0123456789abcdef"[( uint )(wVar6 & 0xf)], "0123456789ABCDEF0123456789abcdef"[(uint)wVar6 >> 4 & 0xf]);
                  goto LAB_00115c2b;
               }

            }

            operator+=(this,wVar6)
            ;;
         }

         lVar7 = lVar7 + 1;
      }
;
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_50 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* String::hex_decode() const */void String::hex_decode(void) {
   long *plVar1;
   ulong uVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   char cVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   char cVar10;
   long *in_RSI;
   long lVar11;
   long in_RDI;
   long lVar12;
   String *this;
   long lVar13;
   int iVar14;
   wchar32 wVar15;
   int iVar16;
   long in_FS_OFFSET;
   bool bVar17;
   String *local_c8;
   String *local_b0;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   long local_88;
   long local_80;
   undefined8 local_78;
   undefined8 local_70[2];
   long local_60;
   char *local_58;
   undefined8 local_50;
   wchar32 local_48[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*in_RSI == 0) {
      LAB_00115d70:local_60 = 0;
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, 0);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
   }
 else {
      uVar2 = *(ulong*)( *in_RSI + -8 );
      iVar14 = (int)uVar2;
      if (iVar14 == 0) goto LAB_00115d70;
      iVar14 = iVar14 + -1;
      if (( uVar2 & 1 ) == 0) {
         _err_print_error("hex_decode", "core/string/ustring.cpp", 0x748, "Condition \"length() % 2 != 0\" is true. Returning: Vector<uint8_t>()", "Hexadecimal string of uneven length.", 0, 0);
         *(undefined8*)( in_RDI + 8 ) = 0;
         goto LAB_00115d3e;
      }

      local_60 = 0;
      iVar16 = iVar14 / 2;
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, (long)iVar16);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
      lVar7 = local_60;
      if (1 < iVar14) {
         lVar11 = 0;
         lVar12 = 1;
         lVar8 = 0;
         do {
            lVar3 = *in_RSI;
            lVar9 = lVar11;
            if (lVar3 == 0) {
               if (lVar8 != 0) {
                  lVar13 = 0;
                  goto LAB_0011630a;
               }

               LAB_001160e0:wVar15 = L'\0';
               LAB_001160e3:local_70[0] = 0;
               local_58 = ".";
               local_50 = 1;
               parse_latin1((String*)local_70, (StrRange*)&local_58);
               local_88 = 0;
               local_58 = "\" at index ";
               this(String * ) & local_88;
               local_50 = 0xb;
               parse_latin1(this, (StrRange*)&local_58);
               local_48[1] = 0;
               local_98 = 0;
               local_48[0] = wVar15;
               if (wVar15 != L'\0') {
                  copy_from_unchecked((String*)&local_98, local_48, 1);
               }

               local_c8 = (String*)&local_98;
               local_90 = 0;
               local_58 = "Invalid hexadecimal character \"";
               local_50 = 0x1f;
               parse_latin1((String*)&local_90, (StrRange*)&local_58);
               operator+=((String *)&
               local_90,local_c8;
               operator+((String *)&
               local_80,(String*)&local_90;
               local_78 = 0;
               if (local_80 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_80);
               }

               operator+=((String *)&
               local_78,(wchar32)lVar11;
               operator+((String *)&
               local_58,(String*)&local_78;
               _err_print_error("hex_decode", "core/string/ustring.cpp", 0x75d, "Method/function failed. Returning: Vector<uint8_t>()", (String*)&local_58, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
               LAB_00116299:CowData<char32_t>::_unref((CowData<char32_t>*)this);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
               *(undefined8*)( in_RDI + 8 ) = 0;
               if (lVar7 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar7 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_60 + -0x10 ), false);
                  }

               }

               goto LAB_00115d3e;
            }

            lVar13 = *(long*)( lVar3 + -8 );
            if (lVar11 == lVar13) goto LAB_001160e0;
            if (lVar13 <= lVar11) goto LAB_0011630a;
            wVar15 = *(wchar32*)( lVar3 + lVar8 * 8 );
            iVar14 = wVar15 + L'\xffffffd0';
            if (9 < ( uint )(wVar15 + L'\xffffffd0')) {
               if (( uint )(wVar15 + L'\xffffff9f') < 6) {
                  iVar14 = wVar15 + L'\xffffffa9';
                  lVar4 = lVar13 - lVar12;
                  bVar17 = lVar4 == 0;
                  if (bVar17) goto LAB_00115e88;
                  goto LAB_00115df9;
               }

               if (( uint )(wVar15 + L'\xffffffbf') < 6) {
                  iVar14 = wVar15 + L'\xffffffc9';
                  goto LAB_00115df0;
               }

               goto LAB_001160e3;
            }

            LAB_00115df0:lVar4 = lVar13 - lVar12;
            bVar17 = lVar13 == lVar12;
            if (bVar17) {
               LAB_00115e88:wVar15 = L'\0';
               LAB_00115e8b = (String*)&local_90;
               local_70[0] = 0;
               local_58 = ".";
               local_50 = 1;
               parse_latin1((String*)local_70, (StrRange*)&local_58);
               local_90 = 0;
               local_58 = "\" at index ";
               local_50 = 0xb;
               parse_latin1(this, (StrRange*)&local_58);
               local_48[1] = 0;
               local_a0 = 0;
               local_48[0] = wVar15;
               if (wVar15 != L'\0') {
                  copy_from_unchecked((String*)&local_a0, local_48, 1);
               }

               local_b0 = (String*)&local_a0;
               local_98 = 0;
               local_58 = "Invalid hexadecimal character \"";
               local_50 = 0x1f;
               parse_latin1((String*)&local_98, (StrRange*)&local_58);
               operator+=((String *)&
               local_98,local_b0;
               operator+((String *)&
               local_88,(String*)&local_98;
               local_80 = 0;
               if (local_88 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_88);
               }

               operator+=((String *)&
               local_80,(wchar32)lVar11;
               local_78 = 0;
               if (local_80 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_80);
               }

               operator+=((String *)&
               local_78,L'\x01';
               operator+((String *)&
               local_58,(String*)&local_78;
               _err_print_error("hex_decode", "core/string/ustring.cpp", 0x75e, "Method/function failed. Returning: Vector<uint8_t>()", (String*)&local_58, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_b0);
               goto LAB_00116299;
            }

            LAB_00115df9:lVar9 = lVar12;
            if (bVar17 || SBORROW8(lVar13, lVar12) != lVar4 < 0) {
               LAB_0011630a:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar13, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }

            wVar15 = *(wchar32*)( lVar3 + lVar12 * 4 );
            cVar6 = (char)wVar15;
            cVar10 = cVar6 + -0x30;
            if (9 < ( uint )(wVar15 + L'\xffffffd0')) {
               if (( uint )(wVar15 + L'\xffffff9f') < 6) {
                  cVar10 = cVar6 + -0x57;
               }
 else {
                  if (5 < ( uint )(wVar15 + L'\xffffffbf')) goto LAB_00115e8b;
                  cVar10 = cVar6 + -0x37;
               }

            }

            lVar12 = lVar12 + 2;
            lVar11 = lVar11 + 2;
            *(char*)( local_60 + lVar8 ) = (char)( iVar14 << 4 ) + cVar10;
            lVar8 = lVar8 + 1;
         }
 while ( (int)lVar8 < iVar16 );
      }

   }

   *(long*)( in_RDI + 8 ) = local_60;
   LAB_00115d3e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* String::erase(int, int) const */CowData<char32_t> *String::erase(int param_1, int param_2) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   int in_ECX;
   int in_EDX;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 0) {
      local_60 = 0;
      local_50 = 0x5f;
      local_58 = "Invalid starting position for `String.erase()`: %d. Starting position must be positive or zero.";
      parse_latin1((String*)&local_60, (StrRange*)&local_58);
      vformat<int>((String*)&local_58, (int)(String*)&local_60);
      _err_print_error("erase", "core/string/ustring.cpp", 0xc00, "Condition \"p_pos < 0\" is true. Returning: \"\"", (String*)&local_58, 0, 0);
      pcVar3 = local_58;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }

      }

      *(undefined8*)this = 0;
      local_58 = "";
      local_50 = 0;
      parse_latin1((String*)this, (StrRange*)&local_58);
   }
 else if (in_ECX < 0) {
      local_60 = 0;
      local_58 = "Invalid character count for `String.erase()`: %d. Character count must be positive or zero.";
      local_50 = 0x5b;
      parse_latin1((String*)&local_60, (StrRange*)&local_58);
      vformat<int>((String*)&local_58, (int)(String*)&local_60);
      _err_print_error("erase", "core/string/ustring.cpp", 0xc01, "Condition \"p_chars < 0\" is true. Returning: \"\"", (String*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      *(undefined8*)this = 0;
      local_50 = 0;
      local_58 = "";
      parse_latin1((String*)this, (StrRange*)&local_58);
   }
 else {
      substr((int)(String*)&local_58, param_2);
      left((int)(CowData*)&local_60);
      lVar2 = local_60;
      *(undefined8*)this = 0;
      if (local_60 == 0) {
         operator+=((String *)
         this,(String*)&local_58;
      }
 else {
         CowData<char32_t>::_ref(this, (CowData*)&local_60);
         operator+=((String *)
         this,(String*)&local_58;
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }

      }

      if (local_58 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static(local_58 + -0x10, false);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::parse_utf8(char const*, int, bool) */undefined8 String::parse_utf8(String *this, char *param_1, int param_2, bool param_3) {
   long *plVar1;
   bool bVar2;
   bool bVar3;
   byte bVar4;
   uint uVar5;
   undefined8 uVar6;
   byte bVar7;
   byte *pbVar8;
   byte bVar9;
   uchar uVar10;
   uint uVar11;
   uint uVar12;
   int iVar13;
   byte *pbVar14;
   int iVar15;
   uint *puVar16;
   int iVar17;
   long in_FS_OFFSET;
   int local_90;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (char*)0x0) {
      LAB_00116b90:uVar6 = 0x1e;
      goto LAB_00116a37;
   }

   if ((uint)param_2 < 3) {
      LAB_00116690:pbVar8 = (byte*)param_1 + param_2;
      if (pbVar8 != (byte*)param_1) goto LAB_0011669f;
      LAB_00116c50:CowData<char32_t>::resize<false>((CowData<char32_t>*)this, 0);
   }
 else {
      if (( ( *param_1 == -0x11 ) && ( param_1[1] == -0x45 ) ) && ( param_1[2] == -0x41 )) {
         param_1 = param_1 + 3;
         if (param_2 < 0) goto LAB_00116b21;
         param_2 = param_2 + -3;
         goto LAB_00116690;
      }

      if (-1 < param_2) goto LAB_00116690;
      LAB_00116b21:pbVar8 = (byte*)0x0;
      LAB_0011669f:bVar2 = false;
      iVar15 = 0;
      iVar17 = 0;
      bVar3 = false;
      bVar4 = 0;
      local_90 = 0;
      pbVar14 = (byte*)param_1;
      do {
         bVar9 = *pbVar14;
         if (bVar9 == 0) break;
         pbVar14 = pbVar14 + 1;
         if (iVar15 == 0) {
            if (( bVar9 != 0xd ) || ( !param_3 )) {
               if ((char)bVar9 < '\0') {
                  if (( bVar9 & 0xe0 ) == 0xc0) {
                     iVar15 = 1;
                     if (( bVar9 & 0x1e ) == 0) {
                        local_60 = 0;
                        local_58 = "Overlong encoding (%x ...)";
                        local_50 = 0x1a;
                        parse_latin1((String*)&local_60, (StrRange*)&local_58);
                        vformat<unsigned_char>((String*)&local_58, (uchar)(String*)&local_60);
                        print_unicode_error((String*)&local_58, false);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        bVar3 = true;
                     }

                  }
 else if (( bVar9 & 0xf0 ) == 0xe0) {
                     iVar15 = 2;
                  }
 else if (( bVar9 & 0xf8 ) == 0xf0) {
                     iVar15 = 3;
                  }
 else if (( bVar9 & 0xfc ) == 0xf8) {
                     iVar15 = 4;
                  }
 else if (( bVar9 & 0xfe ) == 0xfc) {
                     iVar15 = 5;
                  }
 else {
                     local_60 = 0;
                     local_58 = "Invalid UTF-8 leading byte (%x)";
                     local_50 = 0x1f;
                     parse_latin1((String*)&local_60, (StrRange*)&local_58);
                     vformat<unsigned_char>((String*)&local_58, (uchar)(String*)&local_60);
                     print_unicode_error((String*)&local_58, true);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     bVar2 = true;
                  }

               }

               local_90 = local_90 + 1;
               goto LAB_001166fe;
            }

         }
 else {
            uVar10 = (uchar)(String*)&local_60;
            if (( bVar4 == 0xe0 ) && ( iVar15 == 2 )) {
               if (bVar9 < 0xa0) goto LAB_00116742;
            }
 else if (( bVar4 == 0xf0 ) && ( iVar15 == 3 )) {
               if (bVar9 < 0x90) goto LAB_00116742;
            }
 else if (( bVar4 == 0xf8 ) && ( iVar15 == 4 )) {
               if (bVar9 < 0x88) {
                  LAB_00116742:local_60 = 0;
                  local_58 = "Overlong encoding (%x %x ...)";
                  local_50 = 0x1d;
                  parse_latin1((String*)&local_60, (StrRange*)&local_58);
                  vformat<unsigned_char,unsigned_char>((String*)&local_58, uVar10, bVar4);
                  print_unicode_error((String*)&local_58, false);
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_58 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static(local_58 + -0x10, false);
                     }

                  }

                  if (local_60 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_60 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_60 + -0x10 ), false);
                     }

                  }

                  bVar3 = true;
               }

            }
 else if (( bVar4 == 0xfc && iVar15 == 5 ) && ( bVar9 < 0x84 )) goto LAB_00116742;
            bVar7 = bVar9 + 0x80;
            iVar15 = iVar15 + -1;
            bVar9 = bVar4;
            if (0x3f < bVar7) {
               local_60 = 0;
               local_58 = "Invalid UTF-8 continuation byte (%x ... %x ...)";
               local_50 = 0x2f;
               parse_latin1((String*)&local_60, (StrRange*)&local_58);
               vformat<unsigned_char,unsigned_char>((String*)&local_58, uVar10, bVar4);
               print_unicode_error((String*)&local_58, true);
               if (local_58 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_58 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static(local_58 + -0x10, false);
                  }

               }

               if (local_60 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_60 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     iVar15 = 0;
                     Memory::free_static((void*)( local_60 + -0x10 ), false);
                     bVar2 = true;
                     goto LAB_001166fe;
                  }

               }

               bVar2 = true;
               iVar15 = 0;
            }

            LAB_001166fe:iVar17 = iVar17 + 1;
            bVar4 = bVar9;
         }

      }
 while ( pbVar8 != pbVar14 );
      if (iVar15 != 0) {
         local_60 = 0;
         local_50 = 0x25;
         local_58 = "Missing %d UTF-8 continuation byte(s)";
         parse_latin1((String*)&local_60, (StrRange*)&local_58);
         vformat<int>((String*)&local_58, (int)(String*)&local_60);
         print_unicode_error((String*)&local_58, true);
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(local_58 + -0x10, false);
            }

         }

         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_60 + -0x10 ), false);
            }

         }

         bVar2 = true;
      }

      if (local_90 == 0) goto LAB_00116c50;
      CowData<char32_t>::resize<false>((CowData<char32_t>*)this, (long)( local_90 + 1 ));
      CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
      puVar16 = *(uint**)this;
      puVar16[local_90] = 0;
      if (iVar17 != 0) {
         uVar12 = 0;
         iVar15 = 0;
         do {
            while (true) {
               bVar4 = *param_1;
               uVar5 = (uint)(char)bVar4;
               param_1 = (char*)( (byte*)param_1 + 1 );
               if (iVar15 == 0) break;
               if (( byte )(bVar4 + 0x80) < 0x40) {
                  uVar11 = uVar12 << 6;
                  uVar12 = uVar11 | uVar5 & 0x3f;
                  iVar15 = iVar15 + -1;
                  if (iVar15 == 0) {
                     if (uVar12 == 0) {
                        local_60 = 0;
                        local_58 = "NUL character";
                        local_50 = 0xd;
                        parse_latin1((String*)&local_60, (StrRange*)&local_58);
                        print_unicode_error((String*)&local_60, true);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        LAB_00116d35:bVar2 = true;
                        uVar12 = 0xfffd;
                     }
 else {
                        if (( uVar11 & 0xfffff800 ) == 0xd800) {
                           local_58 = "Unpaired surrogate (%x)";
                           local_50 = 0x17;
                           LAB_00116e1b:local_60 = 0;
                           parse_latin1((String*)&local_60, (StrRange*)&local_58);
                           vformat<unsigned_int>((String*)&local_58, (uint)(String*)&local_60);
                           print_unicode_error((String*)&local_58, true);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                           goto LAB_00116d35;
                        }

                        if (0x10ffff < uVar12) {
                           local_58 = "Invalid unicode codepoint (%x)";
                           local_50 = 0x1e;
                           goto LAB_00116e1b;
                        }

                     }

                     *puVar16 = uVar12;
                     puVar16 = puVar16 + 1;
                  }

               }
 else {
                  *puVar16 = 0xfffd;
                  iVar15 = 0;
                  puVar16 = puVar16 + 1;
               }

               LAB_001169ca:iVar17 = iVar17 + -1;
               iVar13 = iVar15;
               if (iVar17 == 0) goto LAB_00116a10;
            }
;
            while (( bVar4 == 0xd && ( param_3 ) )) {
               bVar4 = *param_1;
               uVar5 = (uint)(char)bVar4;
               param_1 = (char*)( (byte*)param_1 + 1 );
            }
;
            bVar4 = (byte)uVar5;
            if ((char)bVar4 < '\0') {
               if (( bVar4 & 0xe0 ) == 0xc0) {
                  iVar15 = 1;
                  uVar12 = uVar5 & 0x1f;
               }
 else if (( bVar4 & 0xf0 ) == 0xe0) {
                  iVar15 = 2;
                  uVar12 = uVar5 & 0xf;
               }
 else if (( bVar4 & 0xf8 ) == 0xf0) {
                  iVar15 = 3;
                  uVar12 = uVar5 & 7;
               }
 else if (( bVar4 & 0xfc ) == 0xf8) {
                  iVar15 = 4;
                  uVar12 = uVar5 & 3;
               }
 else if (( bVar4 & 0xfe ) == 0xfc) {
                  iVar15 = 5;
                  uVar12 = uVar5 & 1;
               }
 else {
                  *puVar16 = 0xfffd;
                  uVar12 = 0;
                  puVar16 = puVar16 + 1;
               }

               goto LAB_001169ca;
            }

            *puVar16 = uVar5;
            uVar12 = 0;
            puVar16 = puVar16 + 1;
            iVar17 = iVar17 + -1;
            iVar13 = 0;
         }
 while ( iVar17 != 0 );
         LAB_00116a10:if (iVar13 != 0) {
            *puVar16 = 0x20;
         }

      }

      if (bVar2) goto LAB_00116b90;
      uVar6 = 0x2b;
      if (bVar3) goto LAB_00116a37;
   }

   uVar6 = 0;
   LAB_00116a37:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::utf8(char const*, int) */String * __thiscall String::utf8(String *this,char *param_1,int param_2){
   *(undefined8*)this = 0;
   parse_utf8(this, param_1, param_2, false);
   return this;
}
/* String::uri_decode() const */String * __thiscall String::uri_decode(String *this){
   long *plVar1;
   char cVar2;
   code *pcVar3;
   int iVar4;
   char cVar5;
   int iVar6;
   char *pcVar7;
   long lVar8;
   int iVar9;
   long lVar10;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   undefined2 local_34;
   undefined1 local_32;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   utf8();
   local_40 = 0;
   if (local_48 == 0) {
      pcVar7 = (char*)CharString::get_data((CharString*)&local_40);
      *(undefined8*)this = 0;
      parse_utf8(this, pcVar7, -1, false);
      if (local_40 == 0) goto LAB_00117196;
      LAB_0011715e:LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_40 + -0x10 ), false);
      }

      if (local_48 == 0) goto LAB_00117196;
   }
 else {
      lVar10 = *(long*)( local_48 + -8 );
      iVar4 = 0;
      LAB_00116f6c:iVar9 = iVar4;
      if ((int)lVar10 != 0) {
         iVar6 = (int)lVar10 + -1;
         if (iVar6 <= iVar9) goto LAB_00117130;
         lVar8 = (long)iVar9;
         if (lVar10 == lVar8) {
            cVar5 = '\0';
            LAB_00116ff5:CharString::operator +=((CharString*)&local_40, cVar5);
            lVar10 = *(long*)( local_48 + -8 );
            iVar4 = iVar9 + 1;
         }
 else {
            if (( lVar10 <= lVar8 ) || ( lVar8 < 0 )) goto LAB_00116f97;
            cVar5 = *(char*)( local_48 + lVar8 );
            iVar4 = iVar9 + 1;
            if (cVar5 == '%') {
               if (iVar6 <= iVar9 + 2) {
                  cVar5 = '%';
                  goto LAB_00116ff5;
               }

               lVar8 = (long)iVar4;
               if (lVar10 != lVar8) {
                  if (lVar10 <= lVar8) goto LAB_00116f97;
                  cVar5 = *(char*)( local_48 + lVar8 );
                  if (( (int)cVar5 - 0x30U < 10 ) || ( (int)cVar5 - 0x41U < 0x1a )) {
                     lVar8 = (long)( iVar9 + 2 );
                     if (lVar10 != lVar8) {
                        if (lVar10 <= lVar8) goto LAB_00116f97;
                        cVar2 = *(char*)( local_48 + lVar8 );
                        if (( (int)cVar2 - 0x30U < 10 ) || ( (int)cVar2 - 0x41U < 0x1a )) {
                           local_32 = 0;
                           local_34 = CONCAT11(cVar2, cVar5);
                           cVar5 = __isoc23_strtol(&local_34, 0, 0x10);
                           CharString::operator +=((CharString*)&local_40, cVar5);
                           lVar10 = *(long*)( local_48 + -8 );
                           iVar4 = iVar9 + 3;
                        }

                     }

                     goto LAB_00116f6c;
                  }

               }

               CharString::operator +=((CharString*)&local_40, '%');
               lVar10 = *(long*)( local_48 + -8 );
            }
 else {
               if (cVar5 != '+') goto LAB_00116ff5;
               CharString::operator +=((CharString*)&local_40, ' ');
               lVar10 = *(long*)( local_48 + -8 );
            }

         }

         goto LAB_00116f6c;
      }

      if (iVar9 < 0) {
         lVar8 = (long)iVar9;
         LAB_00116f97:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar10, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      LAB_00117130:pcVar7 = (char*)CharString::get_data((CharString*)&local_40);
      *(undefined8*)this = 0;
      parse_utf8(this, pcVar7, -1, false);
      if (local_40 != 0) goto LAB_0011715e;
   }

   LOCK();
   plVar1 = (long*)( local_48 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_48 + -0x10 ), false);
   }

   LAB_00117196:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* String::hex_to_int() const */long String::hex_to_int(String *this) {
   long *plVar1;
   bool bVar2;
   char *pcVar3;
   long lVar4;
   uint uVar5;
   int iVar6;
   int iVar7;
   ulong uVar8;
   int *piVar9;
   long lVar10;
   long in_FS_OFFSET;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar9 = *(int**)this;
   if (( ( piVar9 == (int*)0x0 ) || ( iVar6 = iVar6 == 0 ) ) || ( iVar6 == 1 )) {
      LAB_001173b0:lVar4 = 0;
   }
 else {
      iVar7 = *piVar9;
      if (iVar7 == 0x2d) {
         iVar7 = piVar9[1];
         piVar9 = piVar9 + 1;
         lVar10 = -1;
      }
 else {
         lVar10 = 1;
      }

      if (( iVar6 + -1 < 3 ) || ( iVar7 != 0x30 )) {
         LAB_00117268:if (iVar7 == 0) goto LAB_001173b0;
      }
 else {
         iVar6 = piVar9[1];
         if (iVar6 - 0x41U < 0x1a) {
            iVar6 = iVar6 + 0x20;
         }

         if (iVar6 == 0x78) {
            iVar7 = piVar9[2];
            piVar9 = piVar9 + 2;
            goto LAB_00117268;
         }

      }

      lVar4 = 0;
      do {
         uVar5 = iVar7 - 0x41;
         if (uVar5 < 0x1a) {
            iVar7 = iVar7 + 0x20;
            LAB_00117293:if (5 < uVar5) {
               local_60 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)this);
               iVar6 = *piVar9;
               local_68 = 0;
               local_58 = "Invalid hexadecimal notation character \"%c\" (U+%04X) in string \"%s\".";
               local_50 = 0x44;
               parse_latin1((String*)&local_68, (StrRange*)&local_58);
               vformat<char32_t,int,String>((CowData<char32_t>*)&local_58, (String*)&local_68, iVar6, iVar6, (CowData<char32_t>*)&local_60);
               _err_print_error("hex_to_int", "core/string/ustring.cpp", 0x962, "Method/function failed. Returning: 0", (CowData<char32_t>*)&local_58, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               goto LAB_001173b0;
            }

            uVar8 = ( ulong )(iVar7 - 0x57);
            if (0x7ffffffffffffff < lVar4) {
               LAB_00117420:if (lVar10 == 1) goto LAB_00117640;
               bVar2 = false;
               local_58 = "too small.";
               goto LAB_0011743d;
            }

         }
 else {
            if (9 < iVar7 - 0x30U) {
               uVar5 = iVar7 - 0x61;
               goto LAB_00117293;
            }

            if (0x7ffffffffffffff < lVar4) {
               if (iVar7 != 0x30 || lVar4 != 0x800000000000000) goto LAB_00117420;
               if (lVar10 != 1) {
                  uVar8 = 0;
                  goto LAB_001172a4;
               }

               LAB_00117640:bVar2 = true;
               local_58 = "too large.";
               LAB_0011743d:local_60 = 0;
               local_50 = 10;
               parse_latin1((String*)&local_60, (StrRange*)&local_58);
               local_58 = " as a 64-bit signed integer, since the value is ";
               local_70 = 0;
               local_50 = 0x30;
               parse_latin1((String*)&local_70, (StrRange*)&local_58);
               local_58 = "Cannot represent ";
               local_78 = 0;
               local_50 = 0x11;
               parse_latin1((String*)&local_78, (StrRange*)&local_58);
               operator+=((String *)&
               local_78,this;
               local_68 = 0;
               if (local_78 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_78);
               }

               operator+=((String *)&
               local_68,(String*)&local_70;
               lVar10 = local_68;
               local_58 = (char*)0x0;
               if (local_68 == 0) {
                  operator+=((String *)&
                  local_58,(String*)&local_60;
                  _err_print_error("hex_to_int", "core/string/ustring.cpp", 0x966, "Condition \"overflow\" is true. Returning: sign == 1 ? (9223372036854775807L) : (-9223372036854775807L-1)", (CowData<char32_t>*)&local_58, 0, 0);
                  if (local_58 != (char*)0x0) goto LAB_00117553;
               }
 else {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_68);
                  operator+=((String *)&
                  local_58,(String*)&local_60;
                  _err_print_error("hex_to_int", "core/string/ustring.cpp", 0x966, "Condition \"overflow\" is true. Returning: sign == 1 ? (9223372036854775807L) : (-9223372036854775807L-1)", (CowData<char32_t>*)&local_58, 0, 0);
                  if (local_58 != (char*)0x0) {
                     LAB_00117553:pcVar3 = local_58;
                     LOCK();
                     plVar1 = (long*)( local_58 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar3 + -0x10, false);
                     }

                     lVar10 = local_68;
                     if (local_68 == 0) goto LAB_00117597;
                  }

                  LOCK();
                  plVar1 = (long*)( lVar10 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_68 + -0x10 ), false);
                  }

               }

               LAB_00117597:if (local_78 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_78 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_78 + -0x10 ), false);
                  }

               }

               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_70 + -0x10 ), false);
                  }

               }

               if (local_60 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_60 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_60 + -0x10 ), false);
                  }

               }

               lVar4 = -0x8000000000000000;
               if (bVar2) {
                  lVar4 = 0x7fffffffffffffff;
               }

               goto LAB_001173b8;
            }

            uVar8 = ( ulong )(iVar7 - 0x30U);
         }

         LAB_001172a4:piVar9 = piVar9 + 1;
         lVar4 = lVar4 * 0x10 + uVar8;
         iVar7 = *piVar9;
      }
 while ( iVar7 != 0 );
      lVar4 = lVar4 * lVar10;
   }

   LAB_001173b8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar4;
}
/* String::parse_url(String&, String&, int&, String&, String&) const */undefined8 String::parse_url(String *this, String *param_1, String *param_2, int *param_3, String *param_4, String *param_5) {
   uint uVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   int iVar8;
   int iVar9;
   CowData<char32_t> *pCVar10;
   CowData<char32_t> *pCVar11;
   undefined8 uVar12;
   CowData<char32_t> *pCVar13;
   long in_FS_OFFSET;
   bool bVar14;
   CowData<char32_t> *local_68;
   CowData<char32_t> local_60[8];
   CowData<char32_t> *local_58;
   undefined8 local_50;
   long local_40;
   pCVar10 = *(CowData<char32_t>**)this;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (CowData<char32_t>*)0x0;
   if (pCVar10 != (CowData<char32_t>*)0x0) {
      pCVar11 = pCVar10 + -0x10;
      do {
         lVar5 = *(long*)pCVar11;
         pCVar10 = local_68;
         if (lVar5 == 0) goto LAB_00117724;
         LOCK();
         lVar6 = *(long*)pCVar11;
         bVar14 = lVar5 == lVar6;
         if (bVar14) {
            *(long*)pCVar11 = lVar5 + 1;
            lVar6 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar14 );
      if (lVar6 != -1) {
         local_68 = *(CowData<char32_t>**)this;
         pCVar10 = local_68;
      }

   }

   LAB_00117724:local_50 = 0;
   local_58 = (CowData<char32_t>*)&_LC16;
   parse_latin1(param_1, (StrRange*)&local_58);
   local_58 = (CowData<char32_t>*)&_LC16;
   local_50 = 0;
   parse_latin1(param_2, (StrRange*)&local_58);
   local_58 = (CowData<char32_t>*)&_LC16;
   *param_3 = 0;
   local_50 = 0;
   parse_latin1(param_4, (StrRange*)&local_58);
   local_58 = (CowData<char32_t>*)&_LC16;
   local_50 = 0;
   parse_latin1(param_5, (StrRange*)&local_58);
   iVar4 = find((String*)&local_68, "://", 0);
   iVar8 = (int)(String*)&local_68;
   iVar9 = (int)(CowData<char32_t>*)&local_58;
   pCVar11 = pCVar10;
   if (iVar4 == -1) {
      LAB_00117d28:if (pCVar11 == (CowData<char32_t>*)0x0) goto LAB_001177d5;
      LAB_00117a05:lVar5 = *(long*)( pCVar11 + -8 );
      pCVar10 = local_68;
      if (0 < lVar5) {
         lVar6 = 0;
         do {
            if (*(int*)( pCVar11 + lVar6 * 4 ) == 0x23) {
               lVar7 = lVar5;
               if ((int)lVar6 != -1) {
                  substr(iVar9, iVar8);
                  pCVar10 = local_58;
                  if (*(CowData<char32_t>**)param_5 != local_58) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)param_5);
                     local_58 = (CowData<char32_t>*)0x0;
                     *(CowData<char32_t>**)param_5 = pCVar10;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  substr(iVar9, iVar8);
                  pCVar13 = local_58;
                  if (local_58 == pCVar11) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     pCVar13 = pCVar11;
                  }
 else {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     local_68 = pCVar13;
                     local_58 = (CowData<char32_t>*)0x0;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     if (pCVar13 == (CowData<char32_t>*)0x0) goto LAB_001177d5;
                  }

                  lVar7 = *(long*)( pCVar13 + -8 );
                  pCVar11 = pCVar13;
                  pCVar10 = local_68;
                  if (*(long*)( pCVar13 + -8 ) < 1) goto LAB_00117ba2;
               }

               break;
            }

            lVar6 = lVar6 + 1;
            lVar7 = lVar6;
         }
 while ( lVar5 != lVar6 );
         lVar5 = 0;
         do {
            pCVar10 = local_68;
            if (*(int*)( pCVar11 + lVar5 * 4 ) == 0x2f) {
               if ((int)lVar5 != -1) {
                  substr(iVar9, iVar8);
                  pCVar10 = local_58;
                  if (*(CowData<char32_t>**)param_4 != local_58) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)param_4);
                     local_58 = (CowData<char32_t>*)0x0;
                     *(CowData<char32_t>**)param_4 = pCVar10;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  substr(iVar9, iVar8);
                  pCVar10 = local_58;
                  if (local_58 != pCVar11) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     local_68 = pCVar10;
                     local_58 = (CowData<char32_t>*)0x0;
                  }

                  pCVar10 = local_68;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  if (pCVar10 == (CowData<char32_t>*)0x0) goto LAB_001177d5;
               }

               break;
            }

            lVar5 = lVar5 + 1;
         }
 while ( lVar7 != lVar5 );
      }

      LAB_00117ba2:pCVar11 = local_68;
      if (0 < *(long*)( pCVar10 + -8 )) {
         lVar5 = 0;
         do {
            if (*(int*)( pCVar10 + lVar5 * 4 ) == 0x40) {
               if ((int)lVar5 != -1) {
                  substr(iVar9, iVar8);
                  pCVar11 = local_58;
                  if (local_58 != pCVar10) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     local_68 = pCVar11;
                     local_58 = (CowData<char32_t>*)0x0;
                  }

                  pCVar11 = local_68;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               }

               break;
            }

            lVar5 = lVar5 + 1;
         }
 while ( *(long*)( pCVar10 + -8 ) != lVar5 );
      }

   }
 else {
      if (iVar4 < 1) {
         LAB_00117c4f:substr((int)local_60, iVar8);
         to_lower();
         pCVar11 = local_58;
         if (*(CowData<char32_t>**)param_1 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            local_58 = (CowData<char32_t>*)0x0;
            *(CowData<char32_t>**)param_1 = pCVar11;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref(local_60);
         substr(iVar9, iVar8);
         pCVar11 = local_58;
         if (local_58 != pCVar10) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            local_68 = pCVar11;
            local_58 = (CowData<char32_t>*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         goto LAB_00117d28;
      }

      if (pCVar10 != (CowData<char32_t>*)0x0) {
         lVar5 = *(long*)( pCVar10 + -8 );
         for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
            if (lVar5 <= lVar6) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar5, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            uVar1 = *(uint*)( pCVar10 + lVar6 * 4 );
            if (( 0x19 < ( uVar1 & 0xffffffdf ) - 0x41 ) && ( ( 0x39 < uVar1 || ( ( 0xfc0097ffffffffffU >> ( (ulong)uVar1 & 0x3f ) & 1 ) != 0 ) ) )) break;
            if (lVar6 + 1 == (long)iVar4) goto LAB_00117c4f;
         }

         goto LAB_00117a05;
      }

      LAB_001177d5:pCVar11 = (CowData<char32_t>*)0x0;
   }

   cVar3 = begins_with((String*)&local_68, "[");
   if (cVar3 == '\0') {
      iVar4 = get_slice_count((String*)&local_68, ":");
      if (2 < iVar4) goto LAB_001179a0;
      iVar4 = CowData<char32_t>::rfind(pCVar11, (wchar32*)0x3a, -1);
      if (iVar4 != -1) {
         substr(iVar9, iVar8);
         pCVar10 = local_58;
         if (*(CowData<char32_t>**)param_2 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_2);
            *(CowData<char32_t>**)param_2 = pCVar10;
            local_58 = (CowData<char32_t>*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         goto LAB_0011786f;
      }

      if (pCVar11 != *(CowData<char32_t>**)param_2) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_2, (CowData*)&local_68);
      }

      local_58 = (CowData<char32_t>*)&_LC16;
      local_50 = 0;
      parse_latin1((String*)&local_68, (StrRange*)&local_58);
      pCVar10 = local_68;
   }
 else {
      iVar4 = CowData<char32_t>::rfind(pCVar11, (wchar32*)0x5d, -1);
      if (iVar4 == -1) {
         LAB_001179a0:uVar12 = 0x1f;
         goto LAB_001178bb;
      }

      substr(iVar9, iVar8);
      pCVar10 = local_58;
      if (*(CowData<char32_t>**)param_2 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_2);
         *(CowData<char32_t>**)param_2 = pCVar10;
         local_58 = (CowData<char32_t>*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      LAB_0011786f:substr(iVar9, iVar8);
      pCVar10 = local_58;
      if (pCVar11 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         local_68 = pCVar10;
         local_58 = (CowData<char32_t>*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   }

   uVar12 = 0x1f;
   pCVar11 = pCVar10;
   if (( *(long*)param_2 != 0 ) && ( 1 < *(uint*)( *(long*)param_2 + -8 ) )) {
      to_lower();
      pCVar13 = local_58;
      if (*(CowData<char32_t>**)param_2 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_2);
         *(CowData<char32_t>**)param_2 = pCVar13;
         local_58 = (CowData<char32_t>*)0x0;
      }

      uVar12 = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      cVar3 = begins_with((String*)&local_68, ":");
      if (cVar3 != '\0') {
         substr(iVar9, iVar8);
         pCVar11 = local_58;
         if (local_58 != pCVar10) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            local_68 = pCVar11;
            local_58 = (CowData<char32_t>*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         cVar3 = is_valid_int((String*)&local_68);
         if (cVar3 != '\0') {
            uVar12 = 0;
            iVar4 = to_int((String*)&local_68);
            *param_3 = iVar4;
            if (iVar4 - 1U < 0xffff) goto LAB_001178bb;
         }

         uVar12 = 0x1f;
      }

   }

   LAB_001178bb:if (pCVar11 != (CowData<char32_t>*)0x0) {
      LOCK();
      pCVar11 = pCVar11 + -0x10;
      *(long*)pCVar11 = *(long*)pCVar11 + -1;
      UNLOCK();
      if (*(long*)pCVar11 == 0) {
         Memory::free_static(local_68 + -0x10, false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar12;
}
/* String::parse_utf16(char16_t const*, int, bool) */undefined8 String::parse_utf16(String *this, wchar16 *param_1, int param_2, bool param_3) {
   long *plVar1;
   wchar16 wVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   undefined8 uVar6;
   uint uVar7;
   wchar16 *pwVar8;
   uint uVar9;
   uint *puVar10;
   wchar16 *pwVar11;
   uint uVar12;
   ulong uVar13;
   int iVar14;
   bool bVar15;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (wchar16*)0x0) {
      uVar6 = 0x1e;
      goto LAB_001180b3;
   }

   if (param_2 == 0) {
      LAB_00118110:if (( *(long*)this != 0 ) && ( *(long*)( *(long*)this + -8 ) != 0 )) {
         CowData<char32_t>::_unref((CowData<char32_t>*)this);
      }

   }
 else {
      if (*param_1 == L'\xfeff') {
         bVar15 = false;
         LAB_001180e6:param_1 = param_1 + 1;
         if (param_2 < 0) goto LAB_00117f61;
         param_2 = param_2 + -1;
         LAB_001180f5:pwVar11 = param_1 + param_2;
         if (pwVar11 == param_1) goto LAB_00118110;
      }
 else {
         if (*param_1 == L'\xfffe') {
            bVar15 = true;
            goto LAB_001180e6;
         }

         bVar15 = !param_3;
         if (-1 < param_2) goto LAB_001180f5;
         LAB_00117f61:pwVar11 = (wchar16*)0x0;
      }

      bVar3 = false;
      bVar5 = false;
      iVar14 = 0;
      uVar13 = 0;
      pwVar8 = param_1;
      uVar9 = 0;
      do {
         while (true) {
            wVar2 = *pwVar8;
            bVar4 = bVar3;
            if (wVar2 == L'\0') goto LAB_00117ff0;
            if (bVar15) {
               wVar2 = wVar2 << 8 | (ushort)wVar2 >> 8;
            }

            uVar7 = (uint)(ushort)wVar2;
            if (( uVar7 & 0xfffffc00 ) == 0xd800) break;
            if (( uVar7 & 0xfffffc00 ) == 0xdc00) {
               if (bVar3) {
                  bVar3 = false;
               }
 else {
                  local_58 = "Unpaired trail surrogate (%x [lead?] %x)";
                  local_60 = 0;
                  local_50 = 0x28;
                  parse_latin1((String*)&local_60, (StrRange*)&local_58);
                  vformat<unsigned_int,unsigned_int>((String*)&local_58, (uint)(String*)&local_60, uVar9);
                  print_unicode_error((String*)&local_58, false);
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_58 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static(local_58 + -0x10, false);
                     }

                  }

                  if (local_60 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_60 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_60 + -0x10 ), false);
                     }

                  }

                  iVar14 = iVar14 + 1;
                  bVar5 = true;
               }

            }
 else {
               iVar14 = iVar14 + 1;
               bVar3 = false;
            }

            LAB_00117f93:pwVar8 = pwVar8 + 1;
            uVar13 = ( ulong )((int)uVar13 + 1);
            uVar9 = uVar7;
            bVar4 = bVar3;
            if (pwVar11 == pwVar8) goto LAB_00117ff0;
         }
;
         iVar14 = iVar14 + 1;
         if (bVar3) {
            local_58 = "Unpaired lead surrogate (%x [trail?] %x)";
            local_60 = 0;
            local_50 = 0x28;
            parse_latin1((String*)&local_60, (StrRange*)&local_58);
            vformat<unsigned_int,unsigned_int>((String*)&local_58, (uint)(String*)&local_60, uVar9);
            print_unicode_error((String*)&local_58, false);
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static(local_58 + -0x10, false);
               }

            }

            bVar5 = bVar3;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_60 + -0x10 ), false);
               }

            }

            goto LAB_00117f93;
         }

         pwVar8 = pwVar8 + 1;
         bVar3 = true;
         bVar4 = true;
         uVar13 = ( ulong )((int)uVar13 + 1);
         uVar9 = uVar7;
      }
 while ( pwVar11 != pwVar8 );
      LAB_00117ff0:if (bVar4) {
         local_58 = "Unpaired lead surrogate (%x [eol])";
         local_60 = 0;
         local_50 = 0x22;
         parse_latin1((String*)&local_60, (StrRange*)&local_58);
         vformat<unsigned_int>((String*)&local_58, (uint)(String*)&local_60);
         print_unicode_error((String*)&local_58, false);
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(local_58 + -0x10, false);
            }

         }

         bVar5 = bVar4;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_60 + -0x10 ), false);
            }

         }

      }

      if (iVar14 == 0) goto LAB_00118110;
      CowData<char32_t>::resize<false>((CowData<char32_t>*)this, (long)( iVar14 + 1 ));
      CowData<char32_t>::_copy_on_write((CowData<char32_t>*)this);
      puVar10 = *(uint**)this;
      puVar10[iVar14] = 0;
      if ((int)uVar13 != 0) {
         pwVar11 = param_1 + uVar13;
         bVar3 = false;
         uVar9 = 0;
         while (true) {
            wVar2 = *param_1;
            if (bVar15) {
               wVar2 = wVar2 << 8 | (ushort)wVar2 >> 8;
            }

            uVar7 = (uint)(ushort)wVar2;
            if (( uVar7 & 0xfffffc00 ) == 0xd800) {
               if (bVar3) {
                  *puVar10 = uVar9;
                  puVar10 = puVar10 + 1;
               }
 else {
                  bVar3 = true;
               }

            }
 else {
               uVar12 = uVar7;
               if (( ( uVar7 & 0xfffffc00 ) == 0xdc00 ) && ( bVar3 )) {
                  uVar12 = uVar7 + 0xfca02400 + uVar9 * 0x400;
               }

               *puVar10 = uVar12;
               bVar3 = false;
               puVar10 = puVar10 + 1;
            }

            if (param_1 + 1 == pwVar11) break;
            param_1 = param_1 + 1;
            uVar9 = uVar7;
         }
;
         if (bVar3) {
            *puVar10 = uVar7;
         }

      }

      uVar6 = 0x2b;
      if (bVar5) goto LAB_001180b3;
   }

   uVar6 = 0;
   LAB_001180b3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::utf16(char16_t const*, int) */String * __thiscall String::utf16(String *this,wchar16 *param_1,int param_2){
   *(undefined8*)this = 0;
   parse_utf16(this, param_1, param_2, true);
   return this;
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* String::bigrams() const */void String::bigrams(void) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long *in_RSI;
   long in_RDI;
   int iVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *in_RSI == 0 ) || ( iVar4 = iVar4 == 0 )) {
      *(undefined8*)( in_RDI + 8 ) = 0;
   }
 else {
      *(undefined8*)( in_RDI + 8 ) = 0;
      if (0 < iVar4 + -2) {
         CowData<String>::resize<false>((CowData<String>*)( in_RDI + 8 ), (long)( iVar4 + -2 ));
         CowData<String>::_copy_on_write((CowData<String>*)( in_RDI + 8 ));
         lVar2 = *(long*)( in_RDI + 8 );
         uVar5 = 0;
         do {
            substr((int)&local_48, (int)in_RSI);
            lVar3 = *(long*)( lVar2 + uVar5 * 8 );
            if (lVar3 == local_48) {
               if (lVar3 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar3 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_48 + -0x10 ), false);
                  }

               }

            }
 else {
               if (lVar3 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar3 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar2 + uVar5 * 8 );
                     *(undefined8*)( lVar2 + uVar5 * 8 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               *(long*)( lVar2 + uVar5 * 8 ) = local_48;
            }

            bVar6 = uVar5 != iVar4 - 3;
            uVar5 = uVar5 + 1;
         }
 while ( bVar6 );
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
   CowData<char32_t> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
            this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }

            CowData<char32_t>::_ref(this_00, param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* String::rsplit(char const*, bool, int) const */char *String::rsplit(char *param_1, bool param_2, int param_3) {
   long *plVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   size_t sVar5;
   char in_CL;
   undefined4 in_register_00000014;
   char *__s;
   undefined7 in_register_00000031;
   String *this;
   int in_R8D;
   int iVar6;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   this(String * CONCAT71(in_register_00000031, param_2));
   __s = (char*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)this;
   for (int i = 0; i < 8; i++) {
      param_1[( i + 8 )] = '\0';
   }

   if (lVar2 == 0) {
      iVar6 = 0;
   }
 else {
      iVar6 = (int)*(undefined8*)( lVar2 + -8 );
      iVar6 = iVar6 + -1 + ( uint )(iVar6 == 0);
   }

   sVar5 = strlen(__s);
   iVar3 = (int)sVar5;
   if (iVar3 <= iVar6) {
      do {
         if (( ( 0 < in_R8D ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( (long)in_R8D == *(long*)( *(long*)( param_1 + 8 ) + -8 ) )) break;
         if (*__s == '\0') {
            iVar4 = iVar6 + -1;
            if (iVar4 == 0) goto LAB_001188d8;
         }
 else {
            iVar4 = rfind(this, __s, iVar6 - iVar3);
         }

         if (iVar4 < 0) goto LAB_001188d8;
         if (( iVar4 + iVar3 < iVar6 ) || ( in_CL != '\0' )) {
            substr((int)&local_48, (int)this);
            Vector<String>::push_back((Vector<String>*)param_1);
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_48 + -0x10 ), false);
               }

            }

         }

         iVar6 = iVar4;
      }
 while ( iVar3 <= iVar4 );
   }

   if (( 0 < iVar6 ) || ( in_CL != '\0' )) {
      LAB_001188d8:substr((int)&local_48, (int)this);
      Vector<String>::push_back((Vector<String>*)param_1);
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_48 + -0x10 ), false);
         }

      }

   }

   Vector<String>::reverse((Vector<String>*)param_1);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00118ae7) *//* String::rsplit(String const&, bool, int) const */String *String::rsplit(String *param_1, bool param_2, int param_3) {
   long *plVar1;
   undefined8 uVar2;
   int iVar3;
   long lVar4;
   char in_CL;
   undefined4 in_register_00000014;
   String *pSVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   undefined7 in_register_00000031;
   String *this;
   int in_R8D;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   this(String * CONCAT71(in_register_00000031, param_2));
   pSVar5 = (String*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)this;
   *(undefined8*)( param_1 + 8 ) = 0;
   if (lVar4 == 0) {
      iVar6 = 0;
   }
 else {
      iVar6 = (int)*(undefined8*)( lVar4 + -8 );
      iVar6 = iVar6 + -1 + ( uint )(iVar6 == 0);
   }

   lVar4 = *(long*)pSVar5;
   iVar8 = (int)this;
   if (lVar4 == 0) {
      if (-1 < iVar6) goto LAB_00118b7a;
   }
 else {
      LAB_00118a4d:uVar2 = *(undefined8*)( lVar4 + -8 );
      iVar7 = iVar6;
      if ((int)uVar2 == 0) {
         if (-1 < iVar6) goto LAB_00118ac8;
      }
 else {
         LAB_00118a5b:iVar3 = (int)uVar2 + -1;
         iVar6 = iVar7;
         if (iVar3 <= iVar7) {
            if (0 < in_R8D) {
               if (( *(long*)( param_1 + 8 ) != 0 ) && ( (long)in_R8D == *(long*)( *(long*)( param_1 + 8 ) + -8 ) )) goto LAB_00118ba0;
            }

            if (iVar3 == 0) goto LAB_00118a8c;
            iVar6 = rfind(this, pSVar5, iVar7 - iVar3);
            if (-1 < iVar6) {
               do {
                  lVar4 = *(long*)pSVar5;
                  if (lVar4 == 0) {
                     if (( iVar6 < iVar7 ) || ( in_CL != '\0' )) goto LAB_00118b02;
                     LAB_00118b7a:iVar7 = iVar6;
                     if (0 < in_R8D) {
                        if (( *(long*)( param_1 + 8 ) != 0 ) && ( (long)in_R8D == *(long*)( *(long*)( param_1 + 8 ) + -8 ) )) goto LAB_00118ba0;
                     }

                  }
 else {
                     iVar3 = (int)*(undefined8*)( lVar4 + -8 );
                     if (iVar3 == 0) {
                        if (( iVar6 < iVar7 ) || ( in_CL != '\0' )) goto LAB_00118b02;
                     }
 else {
                        if (( iVar7 <= iVar6 + -1 + iVar3 ) && ( in_CL == '\0' )) goto LAB_00118a4d;
                        LAB_00118b02:substr((int)&local_48, iVar8);
                        Vector<String>::push_back((Vector<String>*)param_1);
                        if (local_48 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_48 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              Memory::free_static((void*)( local_48 + -0x10 ), false);
                           }

                        }

                        if (*(long*)pSVar5 == 0) goto LAB_00118b7a;
                        uVar2 = *(undefined8*)( *(long*)pSVar5 + -8 );
                        iVar7 = iVar6;
                        if ((int)uVar2 != 0) goto LAB_00118a5b;
                     }

                     LAB_00118ac8:iVar7 = iVar6;
                     if (( ( 0 < in_R8D ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( (long)in_R8D == *(long*)( *(long*)( param_1 + 8 ) + -8 ) )) goto LAB_00118ba0;
                  }

                  LAB_00118a8c:iVar6 = iVar7 + -1;
                  if (( iVar6 == 0 ) || ( iVar6 < 0 )) break;
               }
 while ( true );
            }

            substr((int)&local_48, iVar8);
            goto LAB_00118c2a;
         }

      }

   }

   LAB_00118ba0:if (( 0 < iVar6 ) || ( in_CL != '\0' )) {
      substr((int)&local_48, iVar8);
      LAB_00118c2a:Vector<String>::push_back((Vector<String>*)param_1);
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_48 + -0x10 ), false);
         }

      }

   }

   Vector<String>::reverse((Vector<String>*)param_1);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::split(char const*, bool, int) const */char *String::split(char *param_1, bool param_2, int param_3) {
   long *plVar1;
   long lVar2;
   int iVar3;
   size_t sVar4;
   char in_CL;
   int iVar5;
   undefined4 in_register_00000014;
   char *__s;
   undefined7 in_register_00000031;
   String *this;
   int in_R8D;
   int iVar6;
   long in_FS_OFFSET;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   this(String * CONCAT71(in_register_00000031, param_2));
   __s = (char*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)this;
   for (int i = 0; i < 8; i++) {
      param_1[( i + 8 )] = '\0';
   }

   if (( ( lVar2 == 0 ) || ( iVar6 = iVar6 == 0 ) ) || ( iVar6 = iVar6 == 0 )) {
      if (in_CL != '\0') {
         local_60 = 0;
         local_58 = &_LC16;
         local_50 = 0;
         parse_latin1((String*)&local_60, (StrRange*)&local_58);
         Vector<String>::push_back((Vector<String>*)param_1);
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_60 + -0x10 ), false);
            }

         }

      }

      LAB_00118e04:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   sVar4 = strlen(__s);
   iVar5 = 0;
   do {
      iVar3 = iVar5 + 1;
      if (*__s == '\0') {
         LAB_00118d50:if (( ( 0 < in_R8D ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( (long)in_R8D == *(long*)( *(long*)( param_1 + 8 ) + -8 ) )) {
            substr((int)(CowData<char32_t>*)&local_58, (int)this);
            Vector<String>::push_back((Vector<String>*)param_1, (CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            goto LAB_00118e04;
         }

         substr((int)&local_58, (int)this);
         Vector<String>::push_back((Vector<String>*)param_1);
         if (local_58 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(local_58 + -0x10, false);
            }

         }

      }
 else {
         iVar3 = find(this, __s, iVar5);
         if (iVar3 < 0) {
            iVar3 = iVar6;
            if (( iVar5 < iVar6 ) || ( in_CL != '\0' )) goto LAB_00118d50;
            goto LAB_00118e04;
         }

         if (( iVar5 < iVar3 ) || ( in_CL != '\0' )) goto LAB_00118d50;
      }

      if (iVar6 == iVar3) goto LAB_00118e04;
      iVar5 = (int)sVar4 + iVar3;
   }
 while ( true );
}
/* String::get_with_code_lines() const */void String::get_with_code_lines(void) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   long lVar4;
   long lVar5;
   bool in_SIL;
   String *in_RDI;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_78;
   long local_70;
   char local_68[8];
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   split(local_68, in_SIL, 0x11bcb9);
   *(undefined8*)in_RDI = 0;
   if (( local_60 != 0 ) && ( 0 < *(long*)( local_60 + -8 ) )) {
      lVar5 = 0;
      lVar6 = local_60;
      do {
         local_70 = 0;
         plVar2 = (long*)( lVar6 + lVar5 * 8 );
         lVar6 = *plVar2;
         plVar1 = (long*)( lVar6 + -0x10 );
         if (lVar6 != 0) {
            do {
               lVar6 = *plVar1;
               if (lVar6 == 0) goto LAB_00118faa;
               LOCK();
               lVar4 = *plVar1;
               bVar7 = lVar6 == lVar4;
               if (bVar7) {
                  *plVar1 = lVar6 + 1;
                  lVar4 = lVar6;
               }

               UNLOCK();
            }
 while ( !bVar7 );
            if (lVar4 != -1) {
               local_70 = *plVar2;
            }

         }

         LAB_00118faa:local_58 = "%4d | %s";
         local_78 = 0;
         local_50 = 8;
         parse_latin1((String*)&local_78, (StrRange*)&local_58);
         vformat<int,String>((StrRange*)&local_58, (String*)&local_78, (int)lVar5 + 1, &local_70);
         operator+=(in_RDI,(String *)&local_58);
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(local_58 + -0x10, false);
            }

         }

         if (local_78 != 0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_78 + -0x10 ), false);
            }

         }

         lVar6 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         lVar6 = local_60;
         lVar5 = lVar5 + 1;
         if (( local_60 == 0 ) || ( *(long*)( local_60 + -8 ) <= lVar5 )) break;
         operator+=(in_RDI,
         "\n";
         if (*(long*)( lVar6 + -8 ) <= lVar5) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, *(long*)( lVar6 + -8 ), "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

      }
 while ( true );
   }

   CowData<String>::_unref((CowData<String>*)&local_60);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* String::path_to(String const&) const */String *String::path_to(String *param_1) {
   long *plVar1;
   CowData *pCVar2;
   long lVar3;
   code *pcVar4;
   undefined *puVar5;
   undefined *puVar6;
   char cVar7;
   CowData *in_RDX;
   bool bVar8;
   int iVar9;
   char *in_RSI;
   int iVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   char *pcVar15;
   long lVar16;
   long lVar17;
   long in_FS_OFFSET;
   String *local_c0;
   int local_a4;
   undefined *local_98;
   undefined *local_90;
   long local_88;
   long local_80;
   String local_78[8];
   long local_70;
   String local_68[8];
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   int iVar10;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _replace_common((String*)&local_98, in_RSI, "\\", true);
   _replace_common((String*)&local_90, (char*)in_RDX, "\\", true);
   cVar7 = ends_with((String*)&local_98, "/");
   if (cVar7 == '\0') {
      operator+=((String *)&
      local_98,"/";
      cVar7 = ends_with((String*)&local_90, "/");
   }
 else {
      cVar7 = ends_with((String*)&local_90, "/");
   }

   if (cVar7 == '\0') {
      operator+=((String *)&
      local_90,"/";
   }

   pcVar15 = "res://";
   cVar7 = begins_with((String*)&local_98, "res://");
   iVar9 = (int)(String*)&local_98;
   iVar10 = (int)(String*)&local_90;
   if (( cVar7 == '\0' ) || ( cVar7 = begins_with((String*)&local_90, "res://") ),cVar7 == '\0') {
      pcVar15 = "user://";
      cVar7 = begins_with((String*)&local_98, "user://");
      if (( cVar7 != '\0' ) && ( cVar7 = begins_with((String*)&local_90, "user://") ),cVar7 != '\0') goto LAB_00119418;
      cVar7 = begins_with((String*)&local_98, "/");
      if (( cVar7 == '\0' ) || ( cVar7 = begins_with((String*)&local_90, "/") ),cVar7 == '\0') {
         get_slicec((wchar32)local_78, iVar9);
         get_slicec((wchar32)local_68, iVar10);
         cVar7 = operator == ( local_78,local_68 );
         puVar5 = local_98;
         if (cVar7 == '\0') {
            *(undefined8*)param_1 = 0;
            if (*(long*)in_RDX != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_RDX);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
            goto LAB_001193b7;
         }

         iVar11 = (int)(CowData<char32_t>*)&local_58;
         substr(iVar11, iVar9);
         if (puVar5 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            local_98 = local_58;
            local_58 = (undefined*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         puVar5 = local_90;
         substr(iVar11, iVar10);
         puVar6 = local_58;
         if (puVar5 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            local_58 = (undefined*)0x0;
            local_90 = puVar6;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
      }

   }
 else {
      LAB_00119418:_replace_common((String*)&local_58, (char*)&local_98, pcVar15, true);
      if (local_98 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         local_98 = local_58;
         local_58 = (undefined*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      _replace_common((String*)&local_58, (char*)&local_90, pcVar15, true);
      puVar5 = local_58;
      if (local_90 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         local_90 = puVar5;
         local_58 = (undefined*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   }

   local_c0 = local_68;
   iVar11 = (int)(CowData<char32_t>*)&local_58;
   substr(iVar11, iVar9);
   bVar8 = SUB81((CowData<char32_t>*)&local_58, 0);
   split((char*)local_78, bVar8, 0x11bbdd);
   if (local_58 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_58 + -0x10, false);
      }

   }

   substr(iVar11, iVar10);
   split((char*)local_c0, bVar8, 0x11bbdd);
   if (local_58 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_58 + -0x10, false);
      }

   }

   lVar16 = local_60;
   if (local_70 == 0) {
      local_a4 = 0;
      lVar12 = 0;
      LAB_00119633:local_58 = &_LC212;
      local_80 = 0;
      local_50 = 3;
      parse_latin1((String*)&local_80, (StrRange*)&local_58);
      repeat((int)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      lVar17 = lVar12;
      if (lVar16 != 0) {
         LAB_0011968c:local_c0 = (String*)&local_88;
         lVar13 = (long)local_a4;
         do {
            lVar13 = lVar13 + 1;
            if (*(long*)( lVar16 + -8 ) <= lVar17) break;
            local_58 = &_LC67;
            local_80 = 0;
            local_50 = 1;
            parse_latin1((String*)&local_80, (StrRange*)&local_58);
            lVar12 = *(long*)( lVar16 + -8 );
            if (lVar12 <= lVar17) {
               LAB_00119810:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar17, lVar12, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            local_58 = (undefined*)0x0;
            pCVar2 = (CowData*)( lVar16 + -8 + lVar13 * 8 );
            if (*(long*)pCVar2 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, pCVar2);
            }

            operator+=((String *)&
            local_58,(String*)&local_80;
            operator+=(local_c0,(String *)&local_58);
            if (local_58 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static(local_58 + -0x10, false);
               }

            }

            if (local_80 != 0) {
               LOCK();
               plVar1 = (long*)( local_80 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_80 + -0x10 ), false);
               }

            }

            lVar16 = local_60;
            lVar17 = lVar13;
         }
 while ( local_60 != 0 );
      }

   }
 else {
      lVar13 = *(long*)( local_70 + -8 );
      if (lVar13 == 0) {
         local_a4 = 0;
         lVar12 = 0;
         goto LAB_00119633;
      }

      if (local_60 != 0) {
         lVar3 = *(long*)( local_60 + -8 );
         local_a4 = 0;
         lVar14 = lVar13;
         lVar17 = 0;
         LAB_001195c0:do {
            if (lVar17 == lVar3) {
               LAB_001198c8:local_80 = 0;
               local_50 = 3;
               local_58 = &_LC212;
               parse_latin1((String*)&local_80, (StrRange*)&local_58);
               repeat((int)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               goto LAB_0011968c;
            }

            lVar12 = lVar3;
            if (lVar3 <= lVar17) goto LAB_00119810;
            lVar12 = lVar14;
            if (lVar14 <= lVar17) goto LAB_00119810;
            lVar12 = lVar17 + 1;
            cVar7 = operator == ( (String*)( lVar17 * 8 + local_70 ),(String*)( lVar16 + lVar17 * 8 ) );
            if (cVar7 == '\0') goto LAB_001198c8;
            local_a4 = (int)lVar12;
            lVar17 = lVar12;
            if (local_70 == 0) {
               if (local_a4 == 0) {
                  local_a4 = 0;
                  lVar12 = 0;
                  break;
               }

               lVar14 = 0;
               goto LAB_001195c0;
            }

            lVar14 = lVar13;
         }
 while ( lVar12 != lVar13 );
         goto LAB_00119633;
      }

      local_58 = &_LC212;
      local_80 = 0;
      local_50 = 3;
      parse_latin1((String*)&local_80, (StrRange*)&local_58);
      repeat((int)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   }

   local_c0 = (String*)&local_88;
   if (( local_88 == 0 ) || ( *(uint*)( local_88 + -8 ) < 2 )) {
      local_50 = 2;
      local_58 = &_LC213;
      parse_latin1(local_c0, (StrRange*)&local_58);
   }

   *(long*)param_1 = local_88;
   CowData<String>::_unref((CowData<String>*)&local_60);
   CowData<String>::_unref((CowData<String>*)&local_70);
   LAB_001193b7:if (local_90 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_90 + -0x10, false);
      }

   }

   if (local_98 != (undefined*)0x0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_98 + -0x10, false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* String::path_to_file(String const&) const */String *String::path_to_file(String *param_1) {
   long *plVar1;
   char cVar2;
   CowData *in_RDX;
   char *in_RSI;
   long lVar3;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _replace_common((String*)&local_60, in_RSI, "\\", true);
   _replace_common((String*)&local_48, (char*)in_RDX, "\\", true);
   get_base_dir();
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_48 + -0x10 ), false);
      }

   }

   path_to((String*)&local_50);
   cVar2 = operator == ( (String*)&local_50,(String*)&local_58 );
   lVar3 = local_50;
   if (cVar2 == '\0') {
      get_file();
      lVar3 = local_50;
      *(undefined8*)param_1 = 0;
      if (local_50 == 0) {
         operator+=(param_1,(String *)&local_48);
         if (local_48 == 0) goto LAB_00119ae1;
         LAB_00119bd0:LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         lVar3 = local_50;
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_48 + -0x10 ), false);
            lVar3 = local_50;
         }

         goto LAB_00119acf;
      }

      CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)&local_50);
      operator+=(param_1,(String *)&local_48);
      if (local_48 != 0) goto LAB_00119bd0;
   }
 else {
      *(undefined8*)param_1 = 0;
      if (*(long*)in_RDX != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_RDX);
      }

      LAB_00119acf:if (lVar3 == 0) goto LAB_00119ae1;
   }

   LOCK();
   plVar1 = (long*)( lVar3 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_50 + -0x10 ), false);
   }

   LAB_00119ae1:if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_58 + -0x10 ), false);
      }

   }

   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_60 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* String::is_valid_ip_address() const */undefined8 String::is_valid_ip_address(String *this) {
   String *pSVar1;
   long lVar2;
   char cVar3;
   uint uVar4;
   ulong uVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   char acStack_38[8];
   long local_30[2];
   long local_20;
   lVar8 = *(long*)this;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = 0;
   if (( lVar8 != 0 ) && ( 0 < *(long*)( lVar8 + -8 ) )) {
      do {
         if (*(int*)( lVar8 + lVar7 * 4 ) == 0x3a) {
            if (-1 < (int)lVar7) {
               split(acStack_38, SUB81(this, 0), 0x11be71);
               if (local_30[0] == 0) goto LAB_00119da2;
               lVar8 = *(long*)( local_30[0] + -8 );
               lVar7 = 0;
               goto LAB_00119cc4;
            }

            break;
         }

         lVar7 = lVar7 + 1;
      }
 while ( *(long*)( lVar8 + -8 ) != lVar7 );
   }

   split(acStack_38, SUB81(this, 0), 0x123248);
   if (( local_30[0] == 0 ) || ( *(long*)( local_30[0] + -8 ) != 4 )) {
      LAB_00119d00:CowData<String>::_unref((CowData<String>*)local_30);
      uVar6 = 0;
   }
 else {
      lVar8 = 0;
      do {
         pSVar1 = (String*)( local_30[0] + lVar8 * 8 );
         cVar3 = is_valid_int(pSVar1);
         if (( cVar3 == '\0' ) || ( uVar4 = 0xff < uVar4 )) goto LAB_00119d00;
         lVar8 = lVar8 + 1;
      }
 while ( lVar8 < *(long*)( local_30[0] + -8 ) );
      LAB_00119da2:CowData<String>::_unref((CowData<String>*)local_30);
      uVar6 = 1;
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
   LAB_00119cc4:if (lVar8 <= lVar7) goto LAB_00119da2;
   lVar2 = *(long*)( local_30[0] + lVar7 * 8 );
   if (( lVar2 != 0 ) && ( 1 < *(uint*)( lVar2 + -8 ) )) {
      pSVar1 = (String*)( local_30[0] + lVar7 * 8 );
      cVar3 = is_valid_hex_number(pSVar1, false);
      if (cVar3 == '\0') {
         cVar3 = is_valid_ip_address(pSVar1);
         if (cVar3 == '\0') goto LAB_00119d00;
      }
 else {
         uVar5 = hex_to_int(pSVar1);
         if (0xffff < uVar5) goto LAB_00119d00;
      }

      lVar8 = *(long*)( local_30[0] + -8 );
   }

   lVar7 = lVar7 + 1;
   goto LAB_00119cc4;
}
/* String::split(String const&, bool, int) const */String *String::split(String *param_1, bool param_2, int param_3) {
   long *plVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   char in_CL;
   int iVar5;
   undefined4 in_register_00000014;
   String *pSVar6;
   undefined7 in_register_00000031;
   String *this;
   int in_R8D;
   int iVar7;
   long in_FS_OFFSET;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   this(String * CONCAT71(in_register_00000031, param_2));
   pSVar6 = (String*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)this;
   *(undefined8*)( param_1 + 8 ) = 0;
   if (( ( lVar4 != 0 ) && ( iVar7 = (int)*(undefined8*)( lVar4 + -8 ) ),iVar7 != 0 )) {
      lVar4 = *(long*)pSVar6;
      iVar5 = 0;
      if (lVar4 != 0) goto LAB_00119ee4;
      LAB_00119e58:iVar3 = iVar5 + 1;
      LAB_00119e5c:do {
         if (0 < in_R8D) {
            if (( *(long*)( param_1 + 8 ) != 0 ) && ( (long)in_R8D == *(long*)( *(long*)( param_1 + 8 ) + -8 ) )) {
               substr((int)(CowData<char32_t>*)&local_58, (int)this);
               Vector<String>::push_back((Vector<String>*)param_1, (CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               goto LAB_00119e0d;
            }

         }

         substr((int)&local_58, (int)this);
         Vector<String>::push_back((Vector<String>*)param_1);
         if (local_58 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static(local_58 + -0x10, false);
            }

         }

         while (true) {
            if (iVar7 == iVar3) goto LAB_00119e0d;
            lVar4 = *(long*)pSVar6;
            iVar5 = iVar3;
            if (lVar4 == 0) goto LAB_00119e58;
            iVar2 = (int)*(undefined8*)( lVar4 + -8 );
            iVar5 = iVar3 + -1 + iVar2;
            if (iVar2 == 0) {
               iVar5 = iVar3;
            }

            LAB_00119ee4:if (*(uint*)( lVar4 + -8 ) < 2) goto LAB_00119e58;
            iVar3 = find(this, pSVar6, iVar5);
            if (iVar3 < 0) break;
            if (( iVar5 < iVar3 ) || ( in_CL != '\0' )) goto LAB_00119e5c;
         }
;
         iVar3 = iVar7;
         if (( iVar7 <= iVar5 ) && ( in_CL == '\0' )) goto LAB_00119e0d;
      }
 while ( true );
   }

   if (in_CL != '\0') {
      local_60 = 0;
      local_58 = &_LC16;
      local_50 = 0;
      parse_latin1((String*)&local_60, (StrRange*)&local_58);
      Vector<String>::push_back((Vector<String>*)param_1);
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }

      }

   }

   LAB_00119e0d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* String::split_spaces() const */void String::split_spaces(void) {
   long *plVar1;
   bool bVar2;
   bool bVar3;
   code *pcVar4;
   bool bVar5;
   bool bVar6;
   long lVar7;
   uint uVar8;
   long lVar9;
   int iVar10;
   long *in_RSI;
   long in_RDI;
   uint uVar11;
   long lVar12;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = *in_RSI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (lVar7 != 0) {
      lVar12 = *(long*)( lVar7 + -8 );
      uVar11 = (uint)lVar12;
      if (1 < uVar11) {
         lVar9 = 0;
         iVar10 = 0;
         bVar3 = false;
         do {
            if (lVar12 <= lVar9) {
               LAB_0011a163:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar12, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar9 = (long)iVar10;
            uVar8 = *(uint*)( lVar7 + lVar9 * 4 );
            bVar2 = uVar8 < 0x21;
            if (iVar10 == 0) {
               bVar3 = 0x20 < uVar8;
            }

            do {
               lVar9 = lVar9 + 1;
               bVar5 = (bool)( 0x20 < uVar8 & ( bVar3 ^ 1U ) );
               bVar6 = bVar5;
               if (( ( !bVar5 ) && ( bVar6 = bVar3 ) ) && ( bVar2 )) {
                  substr((int)&local_48, (int)in_RSI);
                  Vector<String>::push_back();
                  bVar6 = bVar5;
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_48 + -0x10 ), false);
                     }

                  }

               }

               bVar3 = bVar6;
               if (uVar11 - 1 == iVar10) goto LAB_0011a108;
               lVar7 = *in_RSI;
               iVar10 = iVar10 + 1;
               if (lVar7 == 0) {
                  lVar12 = 0;
                  goto LAB_0011a163;
               }

               lVar12 = *(long*)( lVar7 + -8 );
               uVar8 = 0;
               bVar2 = true;
            }
 while ( lVar9 == lVar12 );
         }
 while ( true );
      }

   }

   LAB_0011a108:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* String::simplify_path() const */String *String::simplify_path(void) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   long *plVar8;
   int iVar9;
   String *in_RSI;
   String *in_RDI;
   long lVar10;
   long lVar11;
   undefined *puVar12;
   undefined *puVar13;
   long lVar14;
   long in_FS_OFFSET;
   bool bVar15;
   undefined *local_78;
   undefined *local_70;
   char local_68[8];
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   puVar12 = *(undefined**)in_RSI;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = (undefined*)0x0;
   if (puVar12 != (undefined*)0x0) {
      plVar8 = (long*)( puVar12 + -0x10 );
      do {
         lVar14 = *plVar8;
         puVar12 = local_78;
         if (lVar14 == 0) goto LAB_0011a218;
         LOCK();
         lVar11 = *plVar8;
         bVar15 = lVar14 == lVar11;
         if (bVar15) {
            *plVar8 = lVar14 + 1;
            lVar11 = lVar14;
         }

         UNLOCK();
      }
 while ( !bVar15 );
      if (lVar11 != -1) {
         local_78 = *(undefined**)in_RSI;
         puVar12 = local_78;
      }

   }

   LAB_0011a218:local_70 = (undefined*)0x0;
   iVar5 = find((String*)&local_78, "://", 0);
   iVar9 = (int)(String*)&local_78;
   if (( 0 < iVar5 ) && ( puVar12 != (undefined*)0x0 )) {
      lVar10 = 0;
      lVar14 = *(long*)( puVar12 + -8 );
      lVar11 = lVar14;
      while (lVar11 != 0) {
         if (lVar11 == 0 || SBORROW8(lVar14, lVar10) != lVar11 < 0) goto LAB_0011a75c;
         if (( 0x19 < ( *(uint*)( puVar12 + lVar10 * 4 ) & 0xffffffdf ) - 0x41 ) && ( 9 < *(uint*)( puVar12 + lVar10 * 4 ) - 0x30 )) break;
         if (lVar10 + 1 == (long)iVar5) {
            iVar5 = (int)(CowData<char32_t>*)&local_58;
            substr(iVar5, iVar9);
            if (local_58 != (undefined*)0x0) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               local_70 = local_58;
               local_58 = (undefined*)0x0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            substr(iVar5, iVar9);
            puVar13 = local_58;
            if (local_58 != puVar12) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               local_78 = puVar13;
               local_58 = (undefined*)0x0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            puVar12 = puVar13;
            goto LAB_0011a339;
         }

         lVar10 = lVar10 + 1;
         lVar11 = lVar14 - lVar10;
      }
;
   }

   cVar4 = begins_with(in_RSI, "//");
   if (( cVar4 != '\0' ) || ( cVar4 = cVar4 != '\0' )) {
      iVar5 = (int)(CowData<char32_t>*)&local_58;
      substr(iVar5, iVar9);
      if (local_58 != (undefined*)0x0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         local_70 = local_58;
         local_58 = (undefined*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      substr(iVar5, iVar9);
      puVar13 = local_58;
      if (local_58 != puVar12) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = puVar13;
         local_58 = (undefined*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      puVar12 = puVar13;
      goto LAB_0011a339;
   }

   cVar4 = begins_with((String*)&local_78, "/");
   if (( cVar4 == '\0' ) && ( cVar4 = begins_with((String*)&local_78, "\\") ),cVar4 == '\0') {
      iVar5 = find((String*)&local_78, ":/", 0);
      if (( iVar5 == -1 ) && ( iVar5 = iVar5 == -1 )) goto LAB_0011a339;
      if (( puVar12 != (undefined*)0x0 ) && ( 0 < *(long*)( puVar12 + -8 ) )) {
         lVar14 = 0;
         do {
            if (*(int*)( puVar12 + lVar14 * 4 ) == 0x2f) goto LAB_0011ab44;
            lVar14 = lVar14 + 1;
         }
 while ( *(long*)( puVar12 + -8 ) != lVar14 );
      }

      lVar14 = 0xffffffff;
      LAB_0011ab44:if ((int)lVar14 <= iVar5) goto LAB_0011a339;
      iVar5 = (int)(CowData<char32_t>*)&local_58;
      substr(iVar5, iVar9);
      if (local_58 != (undefined*)0x0) {
         local_70 = local_58;
         local_58 = (undefined*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      substr(iVar5, iVar9);
      puVar13 = local_58;
      if (local_58 != puVar12) {
         if (puVar12 != (undefined*)0x0) {
            LOCK();
            plVar8 = (long*)( puVar12 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               Memory::free_static(local_78 + -0x10, false);
               puVar13 = local_58;
            }

         }

         local_58 = (undefined*)0x0;
         local_78 = puVar13;
      }

   }
 else {
      iVar5 = (int)(CowData<char32_t>*)&local_58;
      substr(iVar5, iVar9);
      if (local_58 != (undefined*)0x0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         local_70 = local_58;
         local_58 = (undefined*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      substr(iVar5, iVar9);
      puVar13 = local_58;
      if (local_58 != puVar12) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = puVar13;
         local_58 = (undefined*)0x0;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   puVar12 = puVar13;
   LAB_0011a339:_replace_common((String*)&local_58, (char*)&local_78, "\\", true);
   puVar13 = local_58;
   if (local_58 == puVar12) {
      if (puVar12 != (undefined*)0x0) {
         LOCK();
         plVar8 = (long*)( puVar12 + -0x10 );
         *plVar8 = *plVar8 + -1;
         UNLOCK();
         if (*plVar8 == 0) {
            Memory::free_static(local_58 + -0x10, false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = puVar13;
   }

   while (true) {
      _replace_common((String*)&local_58, (char*)&local_78, "//", true);
      cVar4 = operator == ( (String*)&local_78,(String*)&local_58 );
      puVar12 = local_58;
      if (cVar4 != '\0') break;
      if (local_78 != local_58) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_58);
      }

      if (puVar12 != (undefined*)0x0) {
         LOCK();
         plVar8 = (long*)( puVar12 + -0x10 );
         *plVar8 = *plVar8 + -1;
         UNLOCK();
         if (*plVar8 == 0) {
            Memory::free_static(local_58 + -0x10, false);
         }

      }

   }
;
   if (local_58 != (undefined*)0x0) {
      LOCK();
      plVar8 = (long*)( local_58 + -0x10 );
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         Memory::free_static(local_58 + -0x10, false);
      }

   }

   split(local_68, SUB81((String*)&local_78, 0), 0x11bbdd);
   if (local_60 != 0) {
      iVar5 = 0;
      lVar11 = 0;
      do {
         if (*(long*)( local_60 + -8 ) <= lVar11) {
            local_50 = 0;
            local_58 = &_LC16;
            lVar10 = 0;
            parse_latin1((String*)&local_78, (StrRange*)&local_58);
            goto LAB_0011aaa8;
         }

         local_58 = (undefined*)0x0;
         lVar10 = (long)iVar5;
         lVar2 = lVar10 * 8;
         lVar14 = *(long*)( local_60 + lVar2 );
         plVar8 = (long*)( lVar14 + -0x10 );
         if (lVar14 != 0) {
            do {
               lVar14 = *plVar8;
               if (lVar14 == 0) goto LAB_0011a54e;
               LOCK();
               lVar6 = *plVar8;
               bVar15 = lVar14 == lVar6;
               if (bVar15) {
                  *plVar8 = lVar14 + 1;
                  lVar6 = lVar14;
               }

               UNLOCK();
            }
 while ( !bVar15 );
            if (lVar6 != -1) {
               local_58 = *(undefined**)( local_60 + lVar2 );
            }

         }

         LAB_0011a54e:cVar4 = operator == ( (String*)&local_58,"." );
         if (cVar4 == '\0') {
            cVar4 = operator == ( (String*)&local_58,".." );
            lVar6 = local_60;
            if (cVar4 == '\0') {
               LAB_0011a71d:lVar10 = (long)( iVar5 + 1 );
               iVar5 = iVar5 + 1;
            }
 else {
               if (iVar5 == 0) {
                  lVar10 = 1;
                  iVar5 = 1;
                  goto LAB_0011a60e;
               }

               iVar9 = iVar5 + -1;
               lVar10 = (long)iVar9;
               if (local_60 == 0) {
                  lVar14 = 0;
                  goto LAB_0011a75c;
               }

               lVar14 = *(long*)( local_60 + -8 );
               if (lVar14 <= lVar10) goto LAB_0011a75c;
               cVar4 = operator == ( (String*)( local_60 + -8 + lVar2 ),".." );
               if (cVar4 != '\0') goto LAB_0011a71d;
               iVar5 = iVar9;
               if (lVar11 < *(long*)( lVar6 + -8 )) {
                  CowData<String>::_copy_on_write((CowData<String>*)&local_60);
                  if (local_60 == 0) {
                     lVar14 = -1;
                  }
 else {
                     lVar14 = *(long*)( local_60 + -8 ) + -1;
                  }

                  plVar8 = (long*)( local_60 + lVar11 * 8 );
                  if (lVar11 < lVar14) {
                     do {
                        lVar6 = *plVar8;
                        lVar7 = plVar8[1];
                        if (lVar6 != lVar7) {
                           if (lVar6 != 0) {
                              LOCK();
                              plVar1 = (long*)( lVar6 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 lVar6 = *plVar8;
                                 *plVar8 = 0;
                                 Memory::free_static((void*)( lVar6 + -0x10 ), false);
                              }

                              lVar7 = plVar8[1];
                           }

                           *plVar8 = lVar7;
                           plVar8[1] = 0;
                        }

                        lVar11 = lVar11 + 1;
                        plVar8 = plVar8 + 1;
                     }
 while ( lVar11 != lVar14 );
                  }

                  CowData<String>::resize<false>((CowData<String>*)&local_60, lVar14);
                  lVar6 = local_60;
                  if (local_60 != 0) goto LAB_0011a9a4;
                  lVar14 = 0;
               }
 else {
                  _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar11, *(long*)( lVar6 + -8 ), "p_index", "size()", "", false, false);
                  LAB_0011a9a4:lVar14 = *(long*)( lVar6 + -8 );
                  if (lVar10 < lVar14) {
                     CowData<String>::_copy_on_write((CowData<String>*)&local_60);
                     if (local_60 == 0) {
                        lVar14 = -1;
                     }
 else {
                        lVar14 = *(long*)( local_60 + -8 ) + -1;
                     }

                     plVar8 = (long*)( lVar2 + local_60 );
                     lVar11 = lVar10;
                     if (lVar10 < lVar14) {
                        do {
                           lVar2 = plVar8[-1];
                           lVar6 = *plVar8;
                           if (lVar2 != lVar6) {
                              if (lVar2 != 0) {
                                 LOCK();
                                 plVar1 = (long*)( lVar2 + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    lVar2 = plVar8[-1];
                                    plVar8[-1] = 0;
                                    Memory::free_static((void*)( lVar2 + -0x10 ), false);
                                 }

                                 lVar6 = *plVar8;
                              }

                              plVar8[-1] = lVar6;
                              *plVar8 = 0;
                           }

                           lVar11 = lVar11 + 1;
                           plVar8 = plVar8 + 1;
                        }
 while ( lVar11 != lVar14 );
                     }

                     CowData<String>::resize<false>((CowData<String>*)&local_60, lVar14);
                     goto LAB_0011a60e;
                  }

               }

               _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar10, lVar14, "p_index", "size()", "", false, false);
            }

         }
 else {
            if (local_60 == 0) {
               lVar14 = 0;
            }
 else {
               lVar14 = *(long*)( local_60 + -8 );
               if (lVar11 < lVar14) {
                  CowData<String>::_copy_on_write((CowData<String>*)&local_60);
                  if (local_60 == 0) {
                     lVar14 = -1;
                  }
 else {
                     lVar14 = *(long*)( local_60 + -8 ) + -1;
                  }

                  plVar8 = (long*)( local_60 + lVar11 * 8 );
                  if (lVar11 < lVar14) {
                     do {
                        lVar2 = *plVar8;
                        lVar6 = plVar8[1];
                        if (lVar2 != lVar6) {
                           if (lVar2 != 0) {
                              LOCK();
                              plVar1 = (long*)( lVar2 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 lVar2 = *plVar8;
                                 *plVar8 = 0;
                                 Memory::free_static((void*)( lVar2 + -0x10 ), false);
                              }

                              lVar6 = plVar8[1];
                           }

                           *plVar8 = lVar6;
                           plVar8[1] = 0;
                        }

                        lVar11 = lVar11 + 1;
                        plVar8 = plVar8 + 1;
                     }
 while ( lVar11 != lVar14 );
                  }

                  CowData<String>::resize<false>((CowData<String>*)&local_60, lVar14);
                  goto LAB_0011a60e;
               }

            }

            _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar11, lVar14, "p_index", "size()", "", false, false);
         }

         LAB_0011a60e:if (local_58 != (undefined*)0x0) {
            LOCK();
            plVar8 = (long*)( local_58 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               Memory::free_static(local_58 + -0x10, false);
            }

         }

         lVar11 = lVar10;
      }
 while ( local_60 != 0 );
   }

   local_50 = 0;
   local_58 = &_LC16;
   parse_latin1((String*)&local_78, (StrRange*)&local_58);
   LAB_0011a660:operator + ( in_RDI,(String*)&local_70 );
   CowData<String>::_unref((CowData<String>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
   LAB_0011aaa8:if (*(long*)( local_60 + -8 ) <= lVar10) goto LAB_0011a660;
   if (lVar10 != 0) {
      operator+=((String *)&
      local_78,"/";
      lVar14 = *(long*)( local_60 + -8 );
      if (lVar14 <= lVar10) {
         LAB_0011a75c:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar14, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

   }

   lVar14 = lVar10 * 8;
   lVar10 = lVar10 + 1;
   operator+=((String *)&
   local_78,(String*)( local_60 + lVar14 );
   goto LAB_0011aaa8;
}
/* Vector<int>::push_back(int) [clone .isra.0] */void Vector<int>::push_back(Vector<int> *this, int param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
            *(int*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* String::split_ints_mk(Vector<String> const&, bool) const */Vector *String::split_ints_mk(Vector *param_1, bool param_2) {
   wchar32 *pwVar1;
   code *pcVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   char in_CL;
   Vector *in_RDX;
   int iVar6;
   int iVar7;
   undefined7 in_register_00000031;
   String *this;
   int iVar8;
   int iVar9;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   this(String * CONCAT71(in_register_00000031, param_2));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)this;
   *(undefined8*)( param_1 + 8 ) = 0;
   if (lVar5 == 0) {
      iVar8 = 0;
   }
 else {
      iVar8 = (int)*(undefined8*)( lVar5 + -8 );
      iVar8 = iVar8 + -1 + ( uint )(iVar8 == 0);
   }

   iVar9 = 0;
   do {
      iVar3 = findmk(this, in_RDX, iVar9, &local_44);
      if (-1 < iVar3) {
         lVar4 = (long)local_44;
         lVar5 = *(long*)( in_RDX + 8 );
         if (lVar4 < 0) {
            if (lVar5 != 0) {
               LAB_0011af55:lVar5 = *(long*)( lVar5 + -8 );
               goto LAB_0011af59;
            }

         }
 else if (lVar5 != 0) {
            if (*(long*)( lVar5 + -8 ) <= lVar4) goto LAB_0011af55;
            lVar5 = *(long*)( lVar5 + lVar4 * 8 );
            if (lVar5 == 0) {
               iVar6 = 0;
            }
 else {
               iVar6 = (int)*(undefined8*)( lVar5 + -8 );
               iVar6 = iVar6 + -1 + ( uint )(iVar6 == 0);
            }

            if (( iVar9 < iVar3 ) || ( in_CL != '\0' )) goto LAB_0011af08;
            goto LAB_0011aea8;
         }

         lVar5 = 0;
         LAB_0011af59:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      if (( iVar8 <= iVar9 ) && ( in_CL == '\0' )) {
         LAB_0011aed7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      iVar6 = 1;
      iVar3 = iVar8;
      LAB_0011af08:iVar7 = iVar3 - iVar9;
      lVar5 = get_data(this);
      if (iVar7 != 0) {
         pwVar1 = (wchar32*)( lVar5 + (long)iVar9 * 4 );
         if (*pwVar1 == L'\0') {
            iVar7 = 0;
         }
 else {
            iVar7 = to_int(pwVar1, iVar7, false);
         }

      }

      Vector<int>::push_back((Vector<int>*)param_1, iVar7);
      LAB_0011aea8:if (iVar8 == iVar3) goto LAB_0011aed7;
      iVar9 = iVar3 + iVar6;
   }
 while ( true );
}
/* String::split_ints(String const&, bool) const */String *String::split_ints(String *param_1, bool param_2) {
   wchar32 *pwVar1;
   int iVar2;
   long lVar3;
   char in_CL;
   String *in_RDX;
   int iVar4;
   undefined7 in_register_00000031;
   String *this;
   int iVar5;
   int iVar6;
   this(String * CONCAT71(in_register_00000031, param_2));
   lVar3 = *(long*)this;
   *(undefined8*)( param_1 + 8 ) = 0;
   if (lVar3 == 0) {
      iVar5 = 0;
   }
 else {
      iVar5 = (int)*(undefined8*)( lVar3 + -8 );
      iVar5 = iVar5 + -1 + ( uint )(iVar5 == 0);
   }

   iVar6 = 0;
   do {
      iVar2 = find(this, in_RDX, iVar6);
      if (iVar2 < 0) {
         iVar2 = iVar5;
         if (( iVar5 <= iVar6 ) && ( in_CL == '\0' )) {
            return param_1;
         }

         LAB_0011b07b:iVar4 = iVar2 - iVar6;
         lVar3 = get_data(this);
         if (iVar4 != 0) {
            pwVar1 = (wchar32*)( lVar3 + (long)iVar6 * 4 );
            if (*pwVar1 == L'\0') {
               iVar4 = 0;
            }
 else {
               iVar4 = to_int(pwVar1, iVar4, false);
            }

         }

         Vector<int>::push_back((Vector<int>*)param_1, iVar4);
      }
 else if (( iVar6 < iVar2 ) || ( in_CL != '\0' )) goto LAB_0011b07b;
      if (iVar5 == iVar2) {
         return param_1;
      }

      iVar6 = iVar2;
      if (( *(long*)in_RDX != 0 ) && ( iVar4 = iVar4 != 0 )) {
         iVar6 = iVar2 + -1 + iVar4;
      }

   }
 while ( true );
}
/* String::split_floats(String const&, bool) const */String *String::split_floats(String *param_1, bool param_2) {
   long *plVar1;
   code *pcVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   char in_CL;
   String *in_RDX;
   long lVar7;
   long lVar8;
   undefined7 in_register_00000031;
   String *this;
   long lVar9;
   int iVar10;
   long in_FS_OFFSET;
   bool bVar11;
   double dVar12;
   String *local_68;
   long local_48;
   long local_40;
   this(String * CONCAT71(in_register_00000031, param_2));
   lVar6 = *(long*)this;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 8 ) = 0;
   if (lVar6 == 0) {
      local_48 = 0;
      iVar10 = 0;
   }
 else {
      iVar10 = (int)*(undefined8*)( lVar6 + -8 );
      if (iVar10 != 0) {
         iVar10 = iVar10 + -1;
      }

      local_48 = 0;
      plVar1 = (long*)( lVar6 + -0x10 );
      do {
         lVar6 = *plVar1;
         if (lVar6 == 0) goto LAB_0011b160;
         LOCK();
         lVar8 = *plVar1;
         bVar11 = lVar6 == lVar8;
         if (bVar11) {
            *plVar1 = lVar6 + 1;
            lVar8 = lVar6;
         }

         UNLOCK();
      }
 while ( !bVar11 );
      if (lVar8 != -1) {
         local_48 = *(long*)this;
      }

   }

   LAB_0011b160:lVar6 = local_48;
   iVar5 = 0;
   while (iVar4 = find(this, in_RDX, iVar5),-1 < iVar4) {
      if (( iVar5 < iVar4 ) || ( in_CL != '\0' )) {
         lVar8 = (long)iVar4;
         if (lVar6 == 0) goto LAB_0011b378;
         LAB_0011b24c:lVar6 = *(long*)( lVar6 + -8 );
         if (lVar6 <= lVar8) goto LAB_0011b37b;
         CowData<char32_t>::_copy_on_write((CowData<char32_t>*)&local_48);
         *(undefined4*)( local_48 + (long)iVar4 * 4 ) = 0;
         goto LAB_0011b277;
      }

      LAB_0011b19c:if (iVar4 == iVar10) goto LAB_0011b1f4;
      iVar5 = iVar4;
      if (( *(long*)in_RDX != 0 ) && ( iVar3 = (int)*(undefined8*)( *(long*)in_RDX + -8 ) ),iVar5 = iVar4 + -1 + iVar3,iVar3 == 0) {
         iVar5 = iVar4;
      }

   }
;
   if (( iVar5 < iVar10 ) || ( in_CL != '\0' )) {
      lVar8 = (long)iVar10;
      iVar4 = iVar10;
      if (iVar10 < 0) {
         if (lVar6 != 0) {
            lVar6 = *(long*)( lVar6 + -8 );
            goto LAB_0011b37b;
         }

      }
 else if (lVar6 != 0) goto LAB_0011b24c;
      LAB_0011b378:lVar6 = 0;
      LAB_0011b37b:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar6, "p_index", "size()", "", false, false);
      LAB_0011b277:local_68 = (String*)&local_48;
      lVar6 = get_data(local_68);
      dVar12 = built_in_strtod<char32_t>((wchar32*)( lVar6 + (long)iVar5 * 4 ), (wchar32**)0x0);
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar6 = 1;
      }
 else {
         lVar6 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
      }

      iVar5 = CowData<double>::resize<false>((CowData<double>*)( param_1 + 8 ), lVar6);
      if (iVar5 == 0) {
         if (*(long*)( param_1 + 8 ) == 0) {
            lVar7 = -1;
            lVar6 = 0;
         }
 else {
            lVar6 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
            lVar7 = lVar6 + -1;
            if (-1 < lVar7) {
               CowData<double>::_copy_on_write((CowData<double>*)( param_1 + 8 ));
               *(double*)( *(long*)( param_1 + 8 ) + lVar7 * 8 ) = dVar12;
               goto LAB_0011b2eb;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar6, "p_index", "size()", "", false, false);
      }
 else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }

      LAB_0011b2eb:lVar6 = local_48;
      lVar7 = *(long*)this;
      if (lVar8 < 0) {
         if (lVar7 != 0) {
            LAB_0011b3cd:lVar6 = *(long*)( lVar7 + -8 );
            goto LAB_0011b3d1;
         }

      }
 else if (lVar7 != 0) {
         if (*(long*)( lVar7 + -8 ) <= lVar8) goto LAB_0011b3cd;
         if (local_48 == 0) {
            lVar9 = 0;
         }
 else {
            lVar9 = *(long*)( local_48 + -8 );
            if (lVar8 < lVar9) {
               CowData<char32_t>::_copy_on_write((CowData<char32_t>*)local_68);
               *(undefined4*)( local_48 + (long)iVar4 * 4 ) = *(undefined4*)( lVar7 + (long)iVar4 * 4 );
               lVar6 = local_48;
               goto LAB_0011b19c;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar9, "p_index", "size()", "", false, false);
         goto LAB_0011b19c;
      }

      lVar6 = 0;
      LAB_0011b3d1:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar6, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   LAB_0011b1f4:if (lVar6 != 0) {
      LOCK();
      plVar1 = (long*)( lVar6 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_48 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* String::split_floats_mk(Vector<String> const&, bool) const */Vector *String::split_floats_mk(Vector *param_1, bool param_2) {
   long *plVar1;
   code *pcVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   char in_CL;
   long lVar6;
   Vector *in_RDX;
   long lVar7;
   undefined7 in_register_00000031;
   String *this;
   int iVar8;
   int iVar9;
   long in_FS_OFFSET;
   bool bVar10;
   double dVar11;
   String *local_80;
   int local_4c;
   long local_48;
   long local_40;
   this(String * CONCAT71(in_register_00000031, param_2));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = *(long*)this;
   *(undefined8*)( param_1 + 8 ) = 0;
   if (lVar5 == 0) {
      local_48 = 0;
      iVar9 = 0;
   }
 else {
      iVar9 = (int)*(undefined8*)( lVar5 + -8 );
      if (iVar9 != 0) {
         iVar9 = iVar9 + -1;
      }

      local_48 = 0;
      plVar1 = (long*)( lVar5 + -0x10 );
      do {
         lVar5 = *plVar1;
         if (lVar5 == 0) goto LAB_0011b5ad;
         LOCK();
         lVar6 = *plVar1;
         bVar10 = lVar5 == lVar6;
         if (bVar10) {
            *plVar1 = lVar5 + 1;
            lVar6 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar10 );
      if (lVar6 != -1) {
         local_48 = *(long*)this;
      }

   }

   LAB_0011b5ad:iVar4 = 0;
   while (iVar3 = findmk(this, in_RDX, iVar4, &local_4c),-1 < iVar3) {
      lVar6 = (long)local_4c;
      lVar5 = *(long*)( in_RDX + 8 );
      if (lVar6 < 0) {
         if (lVar5 != 0) {
            LAB_0011b859:lVar5 = *(long*)( lVar5 + -8 );
            goto LAB_0011b878;
         }

         LAB_0011b8f0:lVar5 = 0;
         goto LAB_0011b878;
      }

      if (lVar5 == 0) goto LAB_0011b8f0;
      if (*(long*)( lVar5 + -8 ) <= lVar6) goto LAB_0011b859;
      lVar5 = *(long*)( lVar5 + lVar6 * 8 );
      if (lVar5 == 0) {
         if (iVar4 < iVar3 || in_CL != '\0') {
            iVar8 = 0;
            goto LAB_0011b652;
         }

         iVar8 = 0;
      }
 else {
         iVar8 = (int)*(undefined8*)( lVar5 + -8 );
         if (iVar8 != 0) {
            iVar8 = iVar8 + -1;
         }

         if (iVar4 < iVar3 || in_CL != '\0') {
            LAB_0011b652:lVar6 = (long)iVar3;
            goto joined_r0x0011b7ed;
         }

      }

      LAB_0011b779:if (iVar3 == iVar9) goto LAB_0011b79c;
      iVar4 = iVar3 + iVar8;
   }
;
   if (( iVar4 < iVar9 ) || ( in_CL != '\0' )) {
      lVar6 = (long)iVar9;
      iVar3 = iVar9;
      if (iVar9 < 0) {
         if (local_48 == 0) {
            iVar8 = 1;
            goto LAB_0011b7f3;
         }

         lVar5 = *(long*)( local_48 + -8 );
         iVar8 = 1;
         LAB_0011b7f6:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar6, lVar5, "p_index", "size()", "", false, false);
      }
 else {
         iVar8 = 1;
         joined_r0x0011b7ed:if (local_48 == 0) {
            LAB_0011b7f3:lVar5 = 0;
            goto LAB_0011b7f6;
         }

         lVar5 = *(long*)( local_48 + -8 );
         if (lVar5 <= lVar6) goto LAB_0011b7f6;
         CowData<char32_t>::_copy_on_write((CowData<char32_t>*)&local_48);
         *(undefined4*)( local_48 + (long)iVar3 * 4 ) = 0;
      }

      local_80 = (String*)&local_48;
      lVar5 = get_data(local_80);
      dVar11 = built_in_strtod<char32_t>((wchar32*)( lVar5 + (long)iVar4 * 4 ), (wchar32**)0x0);
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar5 = 1;
      }
 else {
         lVar5 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
      }

      iVar4 = CowData<float>::resize<false>((CowData<float>*)( param_1 + 8 ), lVar5);
      if (iVar4 == 0) {
         if (*(long*)( param_1 + 8 ) == 0) {
            lVar7 = -1;
            lVar5 = 0;
         }
 else {
            lVar5 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
            lVar7 = lVar5 + -1;
            if (-1 < lVar7) {
               CowData<float>::_copy_on_write((CowData<float>*)( param_1 + 8 ));
               *(float*)( *(long*)( param_1 + 8 ) + lVar7 * 4 ) = (float)dVar11;
               goto LAB_0011b715;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar5, "p_index", "size()", "", false, false);
      }
 else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }

      LAB_0011b715:lVar5 = *(long*)this;
      if (lVar6 < 0) {
         if (lVar5 != 0) {
            LAB_0011b8a9:lVar5 = *(long*)( lVar5 + -8 );
            goto LAB_0011b878;
         }

      }
 else if (lVar5 != 0) {
         if (*(long*)( lVar5 + -8 ) <= lVar6) goto LAB_0011b8a9;
         if (local_48 == 0) {
            lVar7 = 0;
         }
 else {
            lVar7 = *(long*)( local_48 + -8 );
            if (lVar6 < lVar7) {
               CowData<char32_t>::_copy_on_write((CowData<char32_t>*)local_80);
               *(undefined4*)( local_48 + (long)iVar3 * 4 ) = *(undefined4*)( lVar5 + (long)iVar3 * 4 );
               goto LAB_0011b779;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar6, lVar7, "p_index", "size()", "", false, false);
         goto LAB_0011b779;
      }

      lVar5 = 0;
      LAB_0011b878:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar5, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   LAB_0011b79c:CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<float>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<double>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<double>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<char16_t>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<char16_t>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0011befc(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<char32_t>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<char32_t>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<char32_t>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<char32_t>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* String::~String() */void String::~String(String *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
   long in_FS_OFFSET;
   char *local_38;
   size_t local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   if (param_1 != (char*)0x0) {
      local_30 = strlen(param_1);
   }

   local_38 = param_1;
   parse_latin1(this, (StrRange*)&local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<char16_t>::resize<false>(long) */undefined8 CowData<char16_t>::resize<false>(CowData<char16_t> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   ulong uVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar7 = 0;
      lVar4 = 0;
   }
 else {
      lVar7 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar7) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar4 = lVar7 * 2;
      if (lVar4 != 0) {
         uVar3 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar3 = uVar3 | uVar3 >> 2;
         uVar3 = uVar3 | uVar3 >> 4;
         uVar3 = uVar3 | uVar3 >> 8;
         uVar3 = uVar3 | uVar3 >> 0x10;
         lVar4 = ( uVar3 | uVar3 >> 0x20 ) + 1;
      }

   }

   uVar3 = param_1 * 2 - 1;
   uVar3 = uVar3 | uVar3 >> 1;
   uVar3 = uVar3 | uVar3 >> 2;
   uVar3 = uVar3 | uVar3 >> 4;
   uVar3 = uVar3 | uVar3 >> 8;
   uVar3 = uVar3 | uVar3 >> 0x10;
   uVar3 = uVar3 | uVar3 >> 0x20;
   if (uVar3 == 0xffffffffffffffff) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   if (lVar7 < param_1) {
      if (uVar3 + 1 == lVar4) {
         puVar5 = *(undefined8**)this;
         if (puVar5 == (undefined8*)0x0) {
            LAB_0011cb91:_DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

      }
 else {
         if (lVar7 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar3 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            *puVar5 = 1;
            puVar5[1] = 0;
         }
 else {
            puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar3 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) goto LAB_0011cc70;
            *puVar5 = 1;
         }

         puVar5 = puVar5 + 2;
         *(undefined8**)this = puVar5;
      }

      puVar5[-1] = param_1;
   }
 else {
      puVar5 = *(undefined8**)this;
      if (uVar3 + 1 == lVar4) {
         if (puVar5 == (undefined8*)0x0) goto LAB_0011cb91;
      }
 else {
         puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar3 + 0x11, false);
         if (puVar6 == (undefined8*)0x0) {
            LAB_0011cc70:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar5 = puVar6 + 2;
         *puVar6 = 1;
         *(undefined8**)this = puVar5;
      }

      puVar5[-1] = param_1;
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<char>::resize<false>(long) */undefined8 CowData<char>::resize<false>(CowData<char> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   ulong uVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      LAB_0011ce9e:lVar7 = 0;
      lVar4 = 0;
   }
 else {
      lVar7 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar7) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      if (lVar7 == 0) goto LAB_0011ce9e;
      uVar3 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar4 = ( uVar3 | uVar3 >> 0x20 ) + 1;
   }

   uVar3 = param_1 - 1U | param_1 - 1U >> 1;
   uVar3 = uVar3 | uVar3 >> 2;
   uVar3 = uVar3 | uVar3 >> 4;
   uVar3 = uVar3 | uVar3 >> 8;
   uVar3 = uVar3 | uVar3 >> 0x10;
   uVar3 = uVar3 | uVar3 >> 0x20;
   if (lVar7 < param_1) {
      if (uVar3 + 1 == lVar4) {
         puVar5 = *(undefined8**)this;
         if (puVar5 == (undefined8*)0x0) {
            LAB_0011ce49:_DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

      }
 else {
         if (lVar7 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar3 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            *puVar5 = 1;
            puVar5[1] = 0;
         }
 else {
            puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar3 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) goto LAB_0011cf00;
            *puVar5 = 1;
         }

         puVar5 = puVar5 + 2;
         *(undefined8**)this = puVar5;
      }

      puVar5[-1] = param_1;
   }
 else {
      puVar5 = *(undefined8**)this;
      if (uVar3 + 1 == lVar4) {
         if (puVar5 == (undefined8*)0x0) goto LAB_0011ce49;
      }
 else {
         puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar3 + 0x11, false);
         if (puVar6 == (undefined8*)0x0) {
            LAB_0011cf00:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar5 = puVar6 + 2;
         *puVar6 = 1;
         *(undefined8**)this = puVar5;
      }

      puVar5[-1] = param_1;
   }

   return 0;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      pvVar2 = (void*)*plVar5;
      if (pvVar2 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar2 + 0x40 ) == plVar5) {
         lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         lVar3 = *(long*)( (long)pvVar2 + 0x38 );
         *plVar5 = lVar4;
         if (pvVar2 == (void*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x30 ) = lVar4;
            lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x38 ) = lVar3;
         }

         if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 0x20 );
               *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         if (*(long*)( (long)pvVar2 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 8 );
               *(undefined8*)( (long)pvVar2 + 8 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(pvVar2, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}
/* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   int *piVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)this;
   if (puVar2 == (undefined8*)0x0) {
      return;
   }

   do {
      piVar1 = (int*)*puVar2;
      if (piVar1 == (int*)0x0) {
         if (*(int*)( puVar2 + 2 ) != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(undefined8**)( piVar1 + 10 ) == puVar2) {
         *puVar2 = *(undefined8*)( piVar1 + 6 );
         if (piVar1 == (int*)puVar2[1]) {
            puVar2[1] = *(undefined8*)( piVar1 + 8 );
         }

         if (*(long*)( piVar1 + 8 ) != 0) {
            *(undefined8*)( *(long*)( piVar1 + 8 ) + 0x18 ) = *(undefined8*)( piVar1 + 6 );
         }

         if (*(long*)( piVar1 + 6 ) != 0) {
            *(undefined8*)( *(long*)( piVar1 + 6 ) + 0x20 ) = *(undefined8*)( piVar1 + 8 );
         }

         if (Variant::needs_deinit[*piVar1] != '\0') {
            Variant::_clear_internal();
         }

         Memory::free_static(piVar1, false);
         *(int*)( puVar2 + 2 ) = *(int*)( puVar2 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      puVar2 = *(undefined8**)this;
   }
 while ( *(int*)( puVar2 + 2 ) != 0 );
   Memory::free_static(puVar2, false);
   return;
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* WARNING: Removing unreachable block (ram,0x001233d8) *//* WARNING: Removing unreachable block (ram,0x001234a0) *//* WARNING: Removing unreachable block (ram,0x001234ad) *//* WARNING: Removing unreachable block (ram,0x001234ce) *//* WARNING: Removing unreachable block (ram,0x001234d9) *//* WARNING: Removing unreachable block (ram,0x00123501) *//* WARNING: Removing unreachable block (ram,0x0012350c) *//* WARNING: Removing unreachable block (ram,0x00123648) *//* WARNING: Removing unreachable block (ram,0x00123533) *//* WARNING: Removing unreachable block (ram,0x00123630) *//* WARNING: Removing unreachable block (ram,0x0012359b) *//* WARNING: Removing unreachable block (ram,0x001235df) *//* WARNING: Removing unreachable block (ram,0x001235eb) *//* String vformat<unsigned int>(String const&, unsigned int const) */String *vformat<unsigned_int>(String *param_1, uint param_2) {
   char cVar1;
   Variant *this;
   uint in_EDX;
   undefined4 in_register_00000034;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_EDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x001237f0) *//* WARNING: Removing unreachable block (ram,0x001238be) *//* WARNING: Removing unreachable block (ram,0x001238cb) *//* WARNING: Removing unreachable block (ram,0x001238f6) *//* WARNING: Removing unreachable block (ram,0x00123901) *//* WARNING: Removing unreachable block (ram,0x00123926) *//* WARNING: Removing unreachable block (ram,0x00123933) *//* WARNING: Removing unreachable block (ram,0x00123952) *//* WARNING: Removing unreachable block (ram,0x0012395d) *//* WARNING: Removing unreachable block (ram,0x001239dc) *//* WARNING: Removing unreachable block (ram,0x00123a1b) *//* WARNING: Removing unreachable block (ram,0x001239e4) *//* WARNING: Removing unreachable block (ram,0x001239fa) *//* WARNING: Removing unreachable block (ram,0x00123a06) *//* String vformat<int, String>(String const&, int const, String const) */undefined8 *vformat<int,String>(undefined8 *param_1, bool *param_2, int param_3, String *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00123b58) *//* WARNING: Removing unreachable block (ram,0x00123c27) *//* WARNING: Removing unreachable block (ram,0x00123c34) *//* WARNING: Removing unreachable block (ram,0x00123c5e) *//* WARNING: Removing unreachable block (ram,0x00123c6b) *//* WARNING: Removing unreachable block (ram,0x00123c95) *//* WARNING: Removing unreachable block (ram,0x00123ca2) *//* WARNING: Removing unreachable block (ram,0x00123cc6) *//* WARNING: Removing unreachable block (ram,0x00123cd3) *//* WARNING: Removing unreachable block (ram,0x00123d31) *//* WARNING: Removing unreachable block (ram,0x00123dd0) *//* WARNING: Removing unreachable block (ram,0x00123d3e) *//* WARNING: Removing unreachable block (ram,0x00123d70) *//* WARNING: Removing unreachable block (ram,0x00123d7c) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00124038) *//* WARNING: Removing unreachable block (ram,0x00124107) *//* WARNING: Removing unreachable block (ram,0x00124114) *//* WARNING: Removing unreachable block (ram,0x0012413f) *//* WARNING: Removing unreachable block (ram,0x0012414a) *//* WARNING: Removing unreachable block (ram,0x0012416f) *//* WARNING: Removing unreachable block (ram,0x0012417c) *//* WARNING: Removing unreachable block (ram,0x0012419b) *//* WARNING: Removing unreachable block (ram,0x001241a8) *//* WARNING: Removing unreachable block (ram,0x0012421d) *//* WARNING: Removing unreachable block (ram,0x001242a0) *//* WARNING: Removing unreachable block (ram,0x00124225) *//* WARNING: Removing unreachable block (ram,0x00124243) *//* WARNING: Removing unreachable block (ram,0x0012424f) *//* String vformat<unsigned char>(String const&, unsigned char const) */String *vformat<unsigned_char>(String *param_1, uchar param_2) {
   char cVar1;
   Variant *this;
   uchar in_DL;
   undefined7 in_register_00000031;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_DL);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)CONCAT71(in_register_00000031, param_2));
   *(undefined8*)param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00124410) *//* WARNING: Removing unreachable block (ram,0x001244de) *//* WARNING: Removing unreachable block (ram,0x001244eb) *//* WARNING: Removing unreachable block (ram,0x00124516) *//* WARNING: Removing unreachable block (ram,0x00124521) *//* WARNING: Removing unreachable block (ram,0x00124546) *//* WARNING: Removing unreachable block (ram,0x00124553) *//* WARNING: Removing unreachable block (ram,0x00124572) *//* WARNING: Removing unreachable block (ram,0x0012457d) *//* WARNING: Removing unreachable block (ram,0x00124610) *//* WARNING: Removing unreachable block (ram,0x0012461c) *//* String vformat<unsigned char, unsigned char>(String const&, unsigned char const, unsigned char
   const) */String *vformat<unsigned_char,unsigned_char>(String *param_1, uchar param_2, uchar param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   uchar in_CL;
   undefined7 in_register_00000031;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, in_CL);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT71(in_register_00000031, param_2));
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00124758) *//* WARNING: Removing unreachable block (ram,0x00124820) *//* WARNING: Removing unreachable block (ram,0x0012482d) *//* WARNING: Removing unreachable block (ram,0x0012484e) *//* WARNING: Removing unreachable block (ram,0x00124859) *//* WARNING: Removing unreachable block (ram,0x00124881) *//* WARNING: Removing unreachable block (ram,0x0012488c) *//* WARNING: Removing unreachable block (ram,0x001249c8) *//* WARNING: Removing unreachable block (ram,0x001248b3) *//* WARNING: Removing unreachable block (ram,0x001249b0) *//* WARNING: Removing unreachable block (ram,0x0012491b) *//* WARNING: Removing unreachable block (ram,0x0012495f) *//* WARNING: Removing unreachable block (ram,0x0012496b) *//* String vformat<int>(String const&, int const) */String *vformat<int>(String *param_1, int param_2) {
   char cVar1;
   Variant *this;
   int in_EDX;
   undefined4 in_register_00000034;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_EDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00124b70) *//* WARNING: Removing unreachable block (ram,0x00124c3f) *//* WARNING: Removing unreachable block (ram,0x00124c4c) *//* WARNING: Removing unreachable block (ram,0x00124c77) *//* WARNING: Removing unreachable block (ram,0x00124c82) *//* WARNING: Removing unreachable block (ram,0x00124ca7) *//* WARNING: Removing unreachable block (ram,0x00124cb4) *//* WARNING: Removing unreachable block (ram,0x00124cd3) *//* WARNING: Removing unreachable block (ram,0x00124ce0) *//* WARNING: Removing unreachable block (ram,0x00124d55) *//* WARNING: Removing unreachable block (ram,0x00124d9c) *//* WARNING: Removing unreachable block (ram,0x00124d5d) *//* WARNING: Removing unreachable block (ram,0x00124d7b) *//* WARNING: Removing unreachable block (ram,0x00124d87) *//* String vformat<unsigned int, unsigned int>(String const&, unsigned int const, unsigned int const)
    */String *vformat<unsigned_int,unsigned_int>(String *param_1, uint param_2, uint param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   uint in_ECX;
   undefined4 in_register_00000034;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, in_ECX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00124f20) *//* WARNING: Removing unreachable block (ram,0x00124fee) *//* WARNING: Removing unreachable block (ram,0x00124ffb) *//* WARNING: Removing unreachable block (ram,0x00125026) *//* WARNING: Removing unreachable block (ram,0x00125031) *//* WARNING: Removing unreachable block (ram,0x00125056) *//* WARNING: Removing unreachable block (ram,0x00125063) *//* WARNING: Removing unreachable block (ram,0x00125082) *//* WARNING: Removing unreachable block (ram,0x0012508d) *//* WARNING: Removing unreachable block (ram,0x00125120) *//* WARNING: Removing unreachable block (ram,0x0012512c) *//* String vformat<char32_t, int, String>(String const&, char32_t const, int const, String const) */undefined8 *vformat<char32_t,int,String>(undefined8 *param_1, bool *param_2, uint param_3, int param_4, String *param_5) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   Array local_f8[8];
   undefined8 local_f0[9];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   iVar4 = 0;
   Variant::Variant(local_90, param_4);
   Variant::Variant(local_78, param_5);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar3 = (int)local_f8;
   Array::resize(iVar3);
   pVVar2 = local_a8;
   do {
      iVar4 = iVar4 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar1, pVVar2);
      pVVar2 = pVVar2 + 0x18;
   }
 while ( iVar4 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   pVVar2 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* Vector<String>::reverse() */void Vector<String>::reverse(Vector<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   lVar3 = *(long*)( this + 8 );
   if (lVar3 == 0) {
      return;
   }

   lVar5 = 0;
   do {
      if (*(long*)( lVar3 + -8 ) / 2 <= lVar5) {
         return;
      }

      CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
      lVar3 = *(long*)( this + 8 );
      if (lVar3 == 0) {
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( lVar3 + -8 );
      }

      plVar2 = (long*)( lVar3 + -8 + ( lVar4 - lVar5 ) * 8 );
      plVar1 = (long*)( lVar3 + lVar5 * 8 );
      lVar4 = *plVar1;
      *plVar1 = 0;
      if (*plVar2 != 0) {
         *plVar1 = *plVar2;
         *plVar2 = 0;
      }

      if (lVar4 != 0) {
         *plVar2 = lVar4;
      }

      lVar5 = lVar5 + 1;
   }
 while ( lVar3 != 0 );
   return;
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar6 = 0;
      lVar7 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar6) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar6 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00125580:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 8 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar10 = uVar8 + 1;
   if (lVar10 == 0) goto LAB_00125580;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00125459:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            plVar2 = (long*)( lVar6 + uVar8 * 8 );
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00125459;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar6 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_001255d6;
   }

   if (lVar10 == lVar7) {
      LAB_001254ff:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_001255d6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_001254ea;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_001254ff;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar6 = 0;
   }

   memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
   LAB_001254ea:puVar9[-1] = param_1;
   return 0;
}
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar9 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_00125860:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 4 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_00125860;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_00125771;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00125771:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* CowData<double>::_realloc(long) */undefined8 CowData<double>::_realloc(CowData<double> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<double>::resize<false>(long) */undefined8 CowData<double>::resize<false>(CowData<double> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar9 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00125b40:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_00125b40;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_00125a51;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00125a51:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* CowData<float>::_realloc(long) */undefined8 CowData<float>::_realloc(CowData<float> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<float>::resize<false>(long) */undefined8 CowData<float>::resize<false>(CowData<float> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar9 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_00125e20:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 4 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_00125e20;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_00125d31;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00125d31:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

