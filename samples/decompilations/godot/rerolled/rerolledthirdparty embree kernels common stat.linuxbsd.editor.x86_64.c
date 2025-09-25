/* embree::Stat::~Stat() */void embree::Stat::~Stat(Stat *this) {
   return;
}
/* embree::Stat::Stat() */void embree::Stat::Stat(Stat *this) {
   Stat *pSVar1;
   LOCK();
   *(undefined8*)this = 0;
   UNLOCK();
   for (int i = 0; i < 4; i++) {
      LOCK();
      *(undefined8*)( this + ( 8*i + 8 ) ) = 0;
      UNLOCK();
   }

   pSVar1 = this + 0x28;
   do {
      LOCK();
      *(undefined8*)pSVar1 = 0;
      UNLOCK();
      pSVar1 = pSVar1 + 8;
   }
 while ( pSVar1 != this + 0x238 );
   LOCK();
   *(undefined8*)pSVar1 = 0;
   UNLOCK();
   LOCK();
   *(undefined8*)( this + 0x240 ) = 0;
   UNLOCK();
   LOCK();
   *(undefined8*)( this + 0x248 ) = 0;
   UNLOCK();
   for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 5; j++) {
         LOCK();
         *(undefined8*)( this + ( 592*i + ( 8*j + 592 ) ) ) = 0;
         UNLOCK();
      }

      for (pSVar1 = this + ( 592*i + 632 ); pSVar1 != this + ( 592*i + 1160 ); pSVar1 = pSVar1 + 8) {
         LOCK();
         *(undefined8*)pSVar1 = 0;
         UNLOCK();
      }

      LOCK();
      *(undefined8*)( this + ( 592*i + 1160 ) ) = 0;
      UNLOCK();
      LOCK();
      *(undefined8*)( this + ( 592*i + 1168 ) ) = 0;
      UNLOCK();
      LOCK();
      *(undefined8*)( this + ( 592*i + 1176 ) ) = 0;
      UNLOCK();
   }

   pSVar1 = this + 0x14d0;
   do {
      LOCK();
      *(undefined8*)pSVar1 = 0;
      UNLOCK();
      pSVar1 = pSVar1 + 8;
   }
 while ( pSVar1 != this + 0x1520 );
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* embree::Stat::print(std::ostream&) */void embree::Stat::print(ostream *param_1) {
   ulong uVar1;
   unkuint9 Var2;
   unkuint9 Var3;
   unkuint9 Var4;
   unkuint9 Var5;
   unkuint9 Var6;
   unkuint9 Var7;
   unkuint9 Var8;
   unkuint9 Var9;
   unkuint9 Var10;
   unkuint9 Var11;
   unkuint9 Var12;
   unkuint9 Var13;
   unkuint9 Var14;
   unkuint9 Var15;
   ostream *poVar16;
   long lVar17;
   long lVar18;
   long *plVar19;
   char cVar20;
   ulong uVar21;
   ulong *puVar22;
   ulong uVar23;
   float fVar24;
   float fVar25;
   ulong *local_58;
   std::__ostream_insert<char,std::char_traits<char>>(param_1, "--------- ABSOLUTE ---------", 0x1c);
   plVar19 = *(long**)( param_1 + *(long*)( *(long*)param_1 + -0x18 ) + 0xf0 );
   if (plVar19 != (long*)0x0) {
      if ((char)plVar19[7] == '\0') {
         std::ctype<char>::_M_widen_init();
         if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
            ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
         }

      }

      cVar20 = (char)param_1;
      std::ostream::put(cVar20);
      std::ostream::flush();
      std::__ostream_insert<char,std::char_traits<char>>(param_1, "  #normal_travs   = ", 0x14);
      poVar16 = std::ostream::_M_insert<double>((double)DAT_00104560 * __LC3);
      std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
      plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
      if (plVar19 != (long*)0x0) {
         if ((char)plVar19[7] == '\0') {
            std::ctype<char>::_M_widen_init();
            if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
               ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
            }

         }

         std::ostream::put((char)poVar16);
         std::ostream::flush();
         std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #nodes        = ", 0x14);
         poVar16 = std::ostream::_M_insert<double>((double)DAT_00104568 * __LC3);
         std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
         plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
         if (plVar19 != (long*)0x0) {
            if ((char)plVar19[7] == '\0') {
               std::ctype<char>::_M_widen_init();
               if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                  ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
               }

            }

            std::ostream::put((char)poVar16);
            std::ostream::flush();
            std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #nodes_xfm    = ", 0x14);
            poVar16 = std::ostream::_M_insert<double>((double)DAT_001047a8 * __LC3);
            std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
            plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
            if (plVar19 != (long*)0x0) {
               if ((char)plVar19[7] == '\0') {
                  std::ctype<char>::_M_widen_init();
                  if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                     ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                  }

               }

               std::ostream::put((char)poVar16);
               std::ostream::flush();
               std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #leaves       = ", 0x14);
               poVar16 = std::ostream::_M_insert<double>((double)DAT_00104570 * __LC3);
               std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
               plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
               if (plVar19 != (long*)0x0) {
                  if ((char)plVar19[7] == '\0') {
                     std::ctype<char>::_M_widen_init();
                     if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                        ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                     }

                  }

                  std::ostream::put((char)poVar16);
                  std::ostream::flush();
                  std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #prims        = ", 0x14);
                  poVar16 = std::ostream::_M_insert<double>((double)DAT_00104578 * __LC3);
                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                  plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                  if (plVar19 != (long*)0x0) {
                     if ((char)plVar19[7] == '\0') {
                        std::ctype<char>::_M_widen_init();
                        if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                           ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                        }

                     }

                     std::ostream::put((char)poVar16);
                     std::ostream::flush();
                     std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #prim_hits    = ", 0x14);
                     poVar16 = std::ostream::_M_insert<double>((double)DAT_00104580 * __LC3);
                     std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                     plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                     if (plVar19 != (long*)0x0) {
                        if ((char)plVar19[7] == '\0') {
                           std::ctype<char>::_M_widen_init();
                           if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                              ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                           }

                        }

                        std::ostream::put((char)poVar16);
                        std::ostream::flush();
                        std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #stack nodes  = ", 0x14);
                        poVar16 = std::ostream::_M_insert<double>((double)_DAT_001047a0 * __LC3);
                        std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                        plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                        if (plVar19 != (long*)0x0) {
                           if ((char)plVar19[7] == '\0') {
                              std::ctype<char>::_M_widen_init();
                              if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                 ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                              }

                           }

                           std::ostream::put((char)poVar16);
                           std::ostream::flush();
                           std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #stack pop    = ", 0x14);
                           poVar16 = std::ostream::_M_insert<double>((double)DAT_00104798 * __LC3);
                           std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                           plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                           if (plVar19 != (long*)0x0) {
                              if ((char)plVar19[7] == '\0') {
                                 std::ctype<char>::_M_widen_init();
                                 if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                    ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                 }

                              }

                              uVar23 = 0;
                              uVar21 = 0;
                              std::ostream::put((char)poVar16);
                              std::ostream::flush();
                              lVar17 = 0;
                              plVar19 = (long*)&DAT_00104588;
                              do {
                                 uVar21 = uVar21 + *plVar19;
                                 lVar18 = *plVar19 * lVar17;
                                 lVar17 = lVar17 + 1;
                                 uVar23 = uVar23 + lVar18;
                                 plVar19 = plVar19 + 1;
                              }
 while ( lVar17 != 0x41 );
                              lVar17 = 0;
                              std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #hit_boxes    = ", 0x14);
                              poVar16 = std::ostream::_M_insert<unsigned_long>((ulong)param_1);
                              std::__ostream_insert<char,std::char_traits<char>>(poVar16, " (total) distribution: ", 0x17);
                              puVar22 = (ulong*)&DAT_00104588;
                              fVar25 = 0.0;
                              do {
                                 fVar24 = (float)*puVar22 * _LC14;
                                 std::__ostream_insert<char,std::char_traits<char>>(param_1, "[", 1);
                                 poVar16 = std::ostream::_M_insert<unsigned_long>((ulong)param_1);
                                 std::__ostream_insert<char,std::char_traits<char>>(poVar16, "] ", 2);
                                 poVar16 = std::ostream::_M_insert<double>((double)( fVar24 / (float)uVar21 ));
                                 std::__ostream_insert<char,std::char_traits<char>>(poVar16, " ", 1);
                                 fVar24 = (float)lVar17;
                                 uVar1 = *puVar22;
                                 lVar17 = lVar17 + 1;
                                 puVar22 = puVar22 + 1;
                                 fVar25 = ( fVar24 * (float)uVar1 ) / (float)uVar21 + fVar25;
                              }
 while ( lVar17 != 0x41 );
                              puVar22 = (ulong*)&DAT_00104588;
                              std::__ostream_insert<char,std::char_traits<char>>(param_1, "    average = ", 0xe);
                              poVar16 = std::ostream::_M_insert<double>((double)fVar25);
                              plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                              if (plVar19 != (long*)0x0) {
                                 if ((char)plVar19[7] == '\0') {
                                    std::ctype<char>::_M_widen_init();
                                    if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                       ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                    }

                                 }

                                 lVar17 = 0;
                                 std::ostream::put((char)poVar16);
                                 std::ostream::flush();
                                 do {
                                    std::__ostream_insert<char,std::char_traits<char>>(param_1, "[", 1);
                                    poVar16 = std::ostream::_M_insert<unsigned_long>((ulong)param_1);
                                    std::__ostream_insert<char,std::char_traits<char>>(poVar16, "] ", 2);
                                    uVar21 = *puVar22;
                                    fVar25 = (float)lVar17;
                                    lVar17 = lVar17 + 1;
                                    puVar22 = puVar22 + 1;
                                    poVar16 = std::ostream::_M_insert<double>((double)( ( (float)uVar21 * _LC14 * fVar25 ) / (float)uVar23 ));
                                    std::__ostream_insert<char,std::char_traits<char>>(poVar16, " ", 1);
                                 }
 while ( lVar17 != 0x41 );
                                 plVar19 = *(long**)( param_1 + *(long*)( *(long*)param_1 + -0x18 ) + 0xf0 );
                                 if (plVar19 != (long*)0x0) {
                                    if ((char)plVar19[7] == '\0') {
                                       std::ctype<char>::_M_widen_init();
                                       if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                          ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                       }

                                    }

                                    std::ostream::put(cVar20);
                                    std::ostream::flush();
                                    if (DAT_001047b0 != 0) {
                                       std::__ostream_insert<char,std::char_traits<char>>(param_1, "  #shadow_travs = ", 0x12);
                                       poVar16 = std::ostream::_M_insert<double>((double)DAT_001047b0 * __LC3);
                                       std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                                       plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                       if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                       if ((char)plVar19[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                             ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                          }

                                       }

                                       std::ostream::put((char)poVar16);
                                       std::ostream::flush();
                                       std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #nodes      = ", 0x12);
                                       poVar16 = std::ostream::_M_insert<double>((double)DAT_001047b8 * __LC3);
                                       std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                                       plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                       if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                       if ((char)plVar19[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                             ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                          }

                                       }

                                       std::ostream::put((char)poVar16);
                                       std::ostream::flush();
                                       std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #nodes_xfm  = ", 0x12);
                                       poVar16 = std::ostream::_M_insert<double>((double)DAT_001049f8 * __LC3);
                                       std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                                       plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                       if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                       if ((char)plVar19[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                             ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                          }

                                       }

                                       std::ostream::put((char)poVar16);
                                       std::ostream::flush();
                                       std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #leaves     = ", 0x12);
                                       poVar16 = std::ostream::_M_insert<double>((double)DAT_001047c0 * __LC3);
                                       std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                                       plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                       if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                       if ((char)plVar19[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                             ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                          }

                                       }

                                       std::ostream::put((char)poVar16);
                                       std::ostream::flush();
                                       std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #prims      = ", 0x12);
                                       poVar16 = std::ostream::_M_insert<double>((double)DAT_001047c8 * __LC3);
                                       std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                                       plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                       if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                       if ((char)plVar19[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                             ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                          }

                                       }

                                       std::ostream::put((char)poVar16);
                                       std::ostream::flush();
                                       std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #prim_hits  = ", 0x12);
                                       poVar16 = std::ostream::_M_insert<double>((double)DAT_001047d0 * __LC3);
                                       std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                                       plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                       if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                       if ((char)plVar19[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                             ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                          }

                                       }

                                       std::ostream::put((char)poVar16);
                                       std::ostream::flush();
                                       std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #stack nodes = ", 0x13);
                                       poVar16 = std::ostream::_M_insert<double>((double)DAT_001049f0 * __LC3);
                                       std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                                       plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                       if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                       if ((char)plVar19[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                             ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                          }

                                       }

                                       std::ostream::put((char)poVar16);
                                       std::ostream::flush();
                                       std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #stack pop   = ", 0x13);
                                       poVar16 = std::ostream::_M_insert<double>((double)DAT_001049e8 * __LC3);
                                       std::__ostream_insert<char,std::char_traits<char>>(poVar16, "M", 1);
                                       plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                       if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                       if ((char)plVar19[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                             ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                          }

                                       }

                                       std::ostream::put((char)poVar16);
                                       std::ostream::flush();
                                       lVar17 = 0;
                                       uVar21 = 0;
                                       uVar23 = 0;
                                       plVar19 = &DAT_001047d8;
                                       do {
                                          uVar23 = uVar23 + *plVar19;
                                          lVar18 = *plVar19 * lVar17;
                                          lVar17 = lVar17 + 1;
                                          uVar21 = uVar21 + lVar18;
                                          plVar19 = plVar19 + 1;
                                       }
 while ( lVar17 != 0x41 );
                                       lVar17 = 0;
                                       puVar22 = &DAT_001047d8;
                                       std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #hit_boxes    = ", 0x14);
                                       local_58 = &DAT_001047d8;
                                       do {
                                          std::__ostream_insert<char,std::char_traits<char>>(param_1, "[", 1);
                                          poVar16 = std::ostream::_M_insert<unsigned_long>((ulong)param_1);
                                          std::__ostream_insert<char,std::char_traits<char>>(poVar16, "] ", 2);
                                          uVar1 = *puVar22;
                                          lVar17 = lVar17 + 1;
                                          puVar22 = puVar22 + 1;
                                          poVar16 = std::ostream::_M_insert<double>((double)( ( (float)uVar1 * _LC14 ) / (float)uVar23 ));
                                          std::__ostream_insert<char,std::char_traits<char>>(poVar16, " ", 1);
                                       }
 while ( lVar17 != 0x41 );
                                       plVar19 = *(long**)( param_1 + *(long*)( *(long*)param_1 + -0x18 ) + 0xf0 );
                                       if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                       if ((char)plVar19[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                             ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                          }

                                       }

                                       lVar17 = 0;
                                       std::ostream::put(cVar20);
                                       std::ostream::flush();
                                       do {
                                          std::__ostream_insert<char,std::char_traits<char>>(param_1, "[", 1);
                                          poVar16 = std::ostream::_M_insert<unsigned_long>((ulong)param_1);
                                          std::__ostream_insert<char,std::char_traits<char>>(poVar16, "] ", 2);
                                          uVar23 = *local_58;
                                          fVar25 = (float)lVar17;
                                          lVar17 = lVar17 + 1;
                                          local_58 = local_58 + 1;
                                          poVar16 = std::ostream::_M_insert<double>((double)( ( (float)uVar23 * _LC14 * fVar25 ) / (float)uVar21 ));
                                          std::__ostream_insert<char,std::char_traits<char>>(poVar16, " ", 1);
                                       }
 while ( lVar17 != 0x41 );
                                       plVar19 = *(long**)( param_1 + *(long*)( *(long*)param_1 + -0x18 ) + 0xf0 );
                                       if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                       if ((char)plVar19[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                             ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                          }

                                       }

                                       std::ostream::put(cVar20);
                                       std::ostream::flush();
                                    }

                                    plVar19 = *(long**)( param_1 + *(long*)( *(long*)param_1 + -0x18 ) + 0xf0 );
                                    if (plVar19 != (long*)0x0) {
                                       if ((char)plVar19[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                             ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                          }

                                       }

                                       std::ostream::put(cVar20);
                                       std::ostream::flush();
                                       std::__ostream_insert<char,std::char_traits<char>>(param_1, "--------- PER TRAVERSAL ---------", 0x21);
                                       plVar19 = *(long**)( param_1 + *(long*)( *(long*)param_1 + -0x18 ) + 0xf0 );
                                       if (plVar19 != (long*)0x0) {
                                          if ((char)plVar19[7] == '\0') {
                                             std::ctype<char>::_M_widen_init();
                                             if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                             }

                                          }

                                          std::ostream::put(cVar20);
                                          std::ostream::flush();
                                          Var13 = (unkuint9)_DAT_00103e70;
                                          Var7 = (unkuint9)instance;
                                          Var14 = (unkuint9)DAT_00103e78;
                                          Var8 = (unkuint9)DAT_00103788;
                                          Var4 = (unkuint9)DAT_001040b8;
                                          Var12 = (unkuint9)DAT_001039c8;
                                          Var3 = (unkuint9)DAT_00103e80;
                                          Var11 = (unkuint9)DAT_00103790;
                                          Var2 = (unkuint9)DAT_00103e88;
                                          Var10 = (unkuint9)DAT_00103798;
                                          Var15 = (unkuint9)DAT_00103e90;
                                          Var9 = (unkuint9)DAT_001037a0;
                                          Var6 = (unkuint9)DAT_001040a8;
                                          Var5 = (unkuint9)DAT_001039b8;
                                          std::__ostream_insert<char,std::char_traits<char>>(param_1, "  #normal_travs   = ", 0x14);
                                          poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_00104560 / (float)DAT_00104560 ));
                                          std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                          poVar16 = std::ostream::_M_insert<double>((double)( ( (float)(unkint9)Var13 / (float)(unkint9)Var7 ) * _LC14 ));
                                          std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                          plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                          if (plVar19 != (long*)0x0) {
                                             if ((char)plVar19[7] == '\0') {
                                                std::ctype<char>::_M_widen_init();
                                                if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                   ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                }

                                             }

                                             std::ostream::put((char)poVar16);
                                             std::ostream::flush();
                                             std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #nodes        = ", 0x14);
                                             poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_00104568 / (float)DAT_00104560 ));
                                             std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                             poVar16 = std::ostream::_M_insert<double>((double)( _LC14 * ( (float)(unkint9)Var14 / (float)(unkint9)Var8 ) ));
                                             std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                             plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                             if (plVar19 != (long*)0x0) {
                                                if ((char)plVar19[7] == '\0') {
                                                   std::ctype<char>::_M_widen_init();
                                                   if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                      ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                   }

                                                }

                                                std::ostream::put((char)poVar16);
                                                std::ostream::flush();
                                                std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #node_xfm     = ", 0x14);
                                                poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_001047a8 / (float)DAT_00104560 ));
                                                std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                                poVar16 = std::ostream::_M_insert<double>((double)( _LC14 * ( (float)(unkint9)Var4 / (float)(unkint9)Var12 ) ));
                                                std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                                plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                if (plVar19 != (long*)0x0) {
                                                   if ((char)plVar19[7] == '\0') {
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                         ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                      }

                                                   }

                                                   std::ostream::put((char)poVar16);
                                                   std::ostream::flush();
                                                   std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #leaves       = ", 0x14);
                                                   poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_00104570 / (float)DAT_00104560 ));
                                                   std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                                   poVar16 = std::ostream::_M_insert<double>((double)( ( (float)(unkint9)Var3 / (float)(unkint9)Var11 ) * _LC14 ));
                                                   std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                                   plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                   if (plVar19 != (long*)0x0) {
                                                      if ((char)plVar19[7] == '\0') {
                                                         std::ctype<char>::_M_widen_init();
                                                         if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                            ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                         }

                                                      }

                                                      std::ostream::put((char)poVar16);
                                                      std::ostream::flush();
                                                      std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #prims        = ", 0x14);
                                                      poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_00104578 / (float)DAT_00104560 ));
                                                      std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                                      poVar16 = std::ostream::_M_insert<double>((double)( _LC14 * ( (float)(unkint9)Var2 / (float)(unkint9)Var10 ) ));
                                                      std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                                      plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                      if (plVar19 != (long*)0x0) {
                                                         if ((char)plVar19[7] == '\0') {
                                                            std::ctype<char>::_M_widen_init();
                                                            if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                               ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                            }

                                                         }

                                                         std::ostream::put((char)poVar16);
                                                         std::ostream::flush();
                                                         std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #prim_hits    = ", 0x14);
                                                         poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_00104580 / (float)DAT_00104560 ));
                                                         std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                                         poVar16 = std::ostream::_M_insert<double>((double)( _LC14 * ( (float)(unkint9)Var15 / (float)(unkint9)Var9 ) ));
                                                         std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                                         plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                         if (plVar19 != (long*)0x0) {
                                                            if ((char)plVar19[7] == '\0') {
                                                               std::ctype<char>::_M_widen_init();
                                                               if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                  ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                               }

                                                            }

                                                            std::ostream::put((char)poVar16);
                                                            std::ostream::flush();
                                                            std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #stack_pop    = ", 0x14);
                                                            poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_00104798 / (float)DAT_00104560 ));
                                                            std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                                            poVar16 = std::ostream::_M_insert<double>((double)( _LC14 * ( (float)(unkint9)Var6 / (float)(unkint9)Var5 ) ));
                                                            std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                                            plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                            if (plVar19 != (long*)0x0) {
                                                               if ((char)plVar19[7] == '\0') {
                                                                  std::ctype<char>::_M_widen_init();
                                                                  if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                     ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                  }

                                                               }

                                                               std::ostream::put((char)poVar16);
                                                               std::ostream::flush();
                                                               if (DAT_001039d0 != 0) {
                                                                  Var12 = (unkuint9)DAT_001040c0;
                                                                  Var7 = (unkuint9)DAT_001039d0;
                                                                  Var4 = (unkuint9)DAT_001040c8;
                                                                  Var11 = (unkuint9)DAT_001039d8;
                                                                  Var3 = (unkuint9)DAT_00104308;
                                                                  Var10 = (unkuint9)DAT_00103c18;
                                                                  Var2 = (unkuint9)DAT_001040d0;
                                                                  Var9 = (unkuint9)DAT_001039e0;
                                                                  Var13 = (unkuint9)DAT_001040d8;
                                                                  Var8 = (unkuint9)DAT_001039e8;
                                                                  Var6 = (unkuint9)DAT_001040e0;
                                                                  Var5 = (unkuint9)DAT_001039f0;
                                                                  std::__ostream_insert<char,std::char_traits<char>>(param_1, "  #shadow_travs = ", 0x12);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_001047b0 / (float)DAT_001047b0 ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( ( (float)(unkint9)Var12 / (float)(unkint9)Var7 ) * _LC14 ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                                                  plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                                  if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                                                  if ((char)plVar19[7] == '\0') {
                                                                     std::ctype<char>::_M_widen_init();
                                                                     if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                        ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                     }

                                                                  }

                                                                  std::ostream::put((char)poVar16);
                                                                  std::ostream::flush();
                                                                  std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #nodes      = ", 0x12);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_001047b8 / (float)DAT_001047b0 ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( ( (float)(unkint9)Var4 / (float)(unkint9)Var11 ) * _LC14 ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                                                  plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                                  if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                                                  if ((char)plVar19[7] == '\0') {
                                                                     std::ctype<char>::_M_widen_init();
                                                                     if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                        ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                     }

                                                                  }

                                                                  std::ostream::put((char)poVar16);
                                                                  std::ostream::flush();
                                                                  std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #nodes_xfm  = ", 0x12);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_001049f8 / (float)DAT_001047b0 ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( _LC14 * ( (float)(unkint9)Var3 / (float)(unkint9)Var10 ) ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                                                  plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                                  if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                                                  if ((char)plVar19[7] == '\0') {
                                                                     std::ctype<char>::_M_widen_init();
                                                                     if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                        ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                     }

                                                                  }

                                                                  std::ostream::put((char)poVar16);
                                                                  std::ostream::flush();
                                                                  std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #leaves     = ", 0x12);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_001047c0 / (float)DAT_001047b0 ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( _LC14 * ( (float)(unkint9)Var2 / (float)(unkint9)Var9 ) ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                                                  plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                                  if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                                                  if ((char)plVar19[7] == '\0') {
                                                                     std::ctype<char>::_M_widen_init();
                                                                     if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                        ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                     }

                                                                  }

                                                                  std::ostream::put((char)poVar16);
                                                                  std::ostream::flush();
                                                                  std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #prims      = ", 0x12);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_001047c8 / (float)DAT_001047b0 ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( _LC14 * ( (float)(unkint9)Var13 / (float)(unkint9)Var8 ) ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                                                  plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                                  if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                                                  if ((char)plVar19[7] == '\0') {
                                                                     std::ctype<char>::_M_widen_init();
                                                                     if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                        ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                     }

                                                                  }

                                                                  std::ostream::put((char)poVar16);
                                                                  std::ostream::flush();
                                                                  std::__ostream_insert<char,std::char_traits<char>>(param_1, "    #prim_hits  = ", 0x12);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( (float)DAT_001047d0 / (float)DAT_001047b0 ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, ", ", 2);
                                                                  poVar16 = std::ostream::_M_insert<double>((double)( _LC14 * ( (float)(unkint9)Var6 / (float)(unkint9)Var5 ) ));
                                                                  std::__ostream_insert<char,std::char_traits<char>>(poVar16, "% active", 8);
                                                                  plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                                  if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                                                  if ((char)plVar19[7] == '\0') {
                                                                     std::ctype<char>::_M_widen_init();
                                                                     if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                        ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                     }

                                                                  }

                                                                  std::ostream::put((char)poVar16);
                                                                  std::ostream::flush();
                                                               }

                                                               plVar19 = *(long**)( param_1 + *(long*)( *(long*)param_1 + -0x18 ) + 0xf0 );
                                                               if (plVar19 != (long*)0x0) {
                                                                  if ((char)plVar19[7] == '\0') {
                                                                     std::ctype<char>::_M_widen_init();
                                                                     if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                        ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                     }

                                                                  }

                                                                  std::ostream::put(cVar20);
                                                                  std::ostream::flush();
                                                                  std::__ostream_insert<char,std::char_traits<char>>(param_1, "--------- USER ---------", 0x18);
                                                                  plVar19 = *(long**)( param_1 + *(long*)( *(long*)param_1 + -0x18 ) + 0xf0 );
                                                                  if (plVar19 != (long*)0x0) {
                                                                     if ((char)plVar19[7] == '\0') {
                                                                        std::ctype<char>::_M_widen_init();
                                                                        if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                           ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                        }

                                                                     }

                                                                     puVar22 = &DAT_00104c50;
                                                                     lVar17 = 0;
                                                                     std::ostream::put(cVar20);
                                                                     std::ostream::flush();
                                                                     do {
                                                                        std::__ostream_insert<char,std::char_traits<char>>(param_1, "#user", 5);
                                                                        poVar16 = std::ostream::_M_insert<unsigned_long>((ulong)param_1);
                                                                        std::__ostream_insert<char,std::char_traits<char>>(poVar16, " = ", 3);
                                                                        poVar16 = std::ostream::_M_insert<double>((double)( (float)*puVar22 / (float)( DAT_001039d0 + instance ) ));
                                                                        std::__ostream_insert<char,std::char_traits<char>>(poVar16, " per traversal", 0xe);
                                                                        plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                                        if (plVar19 == (long*)0x0) goto LAB_0010375c;
                                                                        if ((char)plVar19[7] == '\0') {
                                                                           std::ctype<char>::_M_widen_init();
                                                                           if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                              ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                           }

                                                                        }

                                                                        lVar17 = lVar17 + 1;
                                                                        puVar22 = puVar22 + 1;
                                                                        std::ostream::put((char)poVar16);
                                                                        std::ostream::flush();
                                                                     }
 while ( lVar17 != 10 );
                                                                     std::__ostream_insert<char,std::char_traits<char>>(param_1, "#user5/user3 ", 0xd);
                                                                     poVar16 = std::ostream::_M_insert<double>((double)( ( (float)DAT_00104c78 * _LC14 ) / (float)DAT_00104c68 ));
                                                                     std::__ostream_insert<char,std::char_traits<char>>(poVar16, "%", 1);
                                                                     plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                                     if (plVar19 != (long*)0x0) {
                                                                        if ((char)plVar19[7] == '\0') {
                                                                           std::ctype<char>::_M_widen_init();
                                                                           if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                              ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                           }

                                                                        }

                                                                        std::ostream::put((char)poVar16);
                                                                        std::ostream::flush();
                                                                        std::__ostream_insert<char,std::char_traits<char>>(param_1, "#user6/user3 ", 0xd);
                                                                        poVar16 = std::ostream::_M_insert<double>((double)( ( (float)DAT_00104c80 * _LC14 ) / (float)DAT_00104c68 ));
                                                                        std::__ostream_insert<char,std::char_traits<char>>(poVar16, "%", 1);
                                                                        plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                                        if (plVar19 != (long*)0x0) {
                                                                           if ((char)plVar19[7] == '\0') {
                                                                              std::ctype<char>::_M_widen_init();
                                                                              if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                                 ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                              }

                                                                           }

                                                                           std::ostream::put((char)poVar16);
                                                                           std::ostream::flush();
                                                                           std::__ostream_insert<char,std::char_traits<char>>(param_1, "#user7/user3 ", 0xd);
                                                                           poVar16 = std::ostream::_M_insert<double>((double)( ( (float)DAT_00104c88 * _LC14 ) / (float)DAT_00104c68 ));
                                                                           std::__ostream_insert<char,std::char_traits<char>>(poVar16, "%", 1);
                                                                           plVar19 = *(long**)( poVar16 + *(long*)( *(long*)poVar16 + -0x18 ) + 0xf0 );
                                                                           if (plVar19 != (long*)0x0) {
                                                                              if ((char)plVar19[7] == '\0') {
                                                                                 std::ctype<char>::_M_widen_init();
                                                                                 if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                                    ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                                 }

                                                                              }

                                                                              std::ostream::put((char)poVar16);
                                                                              std::ostream::flush();
                                                                              plVar19 = *(long**)( param_1 + *(long*)( *(long*)param_1 + -0x18 ) + 0xf0 );
                                                                              if (plVar19 != (long*)0x0) {
                                                                                 if ((char)plVar19[7] == '\0') {
                                                                                    std::ctype<char>::_M_widen_init();
                                                                                    if (*(code**)( *plVar19 + 0x30 ) != std::ctype<char>::do_widen) {
                                                                                       ( **(code**)( *plVar19 + 0x30 ) )(plVar19, 10);
                                                                                    }

                                                                                 }

                                                                                 std::ostream::put(cVar20);
                                                                                 std::ostream::flush();
                                                                                 return;
                                                                              }

                                                                           }

                                                                        }

                                                                     }

                                                                  }

                                                               }

                                                            }

                                                         }

                                                      }

                                                   }

                                                }

                                             }

                                          }

                                       }

                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   LAB_0010375c:std::__throw_bad_cast();
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* std::ctype<char>::do_widen(char) const */undefined4 std::ctype<char>::do_widen(ctype<char> *this, char param_1) {
   undefined3 in_register_00000031;
   return CONCAT31(in_register_00000031, param_1);
}
/* embree::Stat::Counters::clear() */void embree::Stat::Counters::clear(Counters *this) {
   Counters *pCVar1;
   LOCK();
   *(undefined8*)this = 0;
   UNLOCK();
   for (int i = 0; i < 4; i++) {
      LOCK();
      *(undefined8*)( this + ( 8*i + 8 ) ) = 0;
      UNLOCK();
   }

   pCVar1 = this + 0x28;
   do {
      LOCK();
      *(undefined8*)pCVar1 = 0;
      UNLOCK();
      pCVar1 = pCVar1 + 8;
   }
 while ( pCVar1 != this + 0x238 );
   LOCK();
   *(undefined8*)pCVar1 = 0;
   UNLOCK();
   LOCK();
   *(undefined8*)( this + 0x240 ) = 0;
   UNLOCK();
   LOCK();
   *(undefined8*)( this + 0x248 ) = 0;
   UNLOCK();
   for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 5; j++) {
         LOCK();
         *(undefined8*)( this + ( 592*i + ( 8*j + 592 ) ) ) = 0;
         UNLOCK();
      }

      for (pCVar1 = this + ( 592*i + 632 ); pCVar1 != this + ( 592*i + 1160 ); pCVar1 = pCVar1 + 8) {
         LOCK();
         *(undefined8*)pCVar1 = 0;
         UNLOCK();
      }

      LOCK();
      *(undefined8*)( this + ( 592*i + 1160 ) ) = 0;
      UNLOCK();
      LOCK();
      *(undefined8*)( this + ( 592*i + 1168 ) ) = 0;
      UNLOCK();
      LOCK();
      *(undefined8*)( this + ( 592*i + 1176 ) ) = 0;
      UNLOCK();
   }

   pCVar1 = this + 0x14d0;
   do {
      LOCK();
      *(undefined8*)pCVar1 = 0;
      UNLOCK();
      pCVar1 = pCVar1 + 8;
   }
 while ( pCVar1 != this + 0x1520 );
   return;
}
/* embree::Stat::instance */void embree::Stat::_GLOBAL__sub_I_instance(void) {
   Counters::clear((Counters*)&instance);
   __cxa_atexit(0x100000, &instance, &__dso_handle);
   return;
}

