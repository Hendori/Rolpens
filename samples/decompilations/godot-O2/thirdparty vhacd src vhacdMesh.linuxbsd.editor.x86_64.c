
/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */

void std::__cxx11::string::_M_construct<char_const*>
               (ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00100044;
    }
    if (__n == 0) goto LAB_00100044;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100044:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::Mesh::SaveVRML2(std::ofstream&, VHACD::Material const&) const [clone .part.0] */

long __thiscall VHACD::Mesh::SaveVRML2(Mesh *this,ofstream *param_1,Material *param_2)

{
  long lVar1;
  long *plVar2;
  ostream *poVar3;
  ostream *poVar4;
  Mesh *pMVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  
  lVar8 = *(long *)(this + 0x608);
  lVar1 = *(long *)(*(long *)param_1 + -0x18);
  *(undefined8 *)(param_1 + lVar1 + 8) = 6;
  *(uint *)(param_1 + lVar1 + 0x18) = *(uint *)(param_1 + lVar1 + 0x18) & 0xfffffefb | 0x404;
  lVar1 = *(long *)(this + 0x920);
  poVar4 = (ostream *)param_1;
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)param_1,"#VRML V2.0 utf8",0xf);
  plVar2 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar2 + 0x30))(plVar2,10);
      }
    }
    cVar7 = (char)param_1;
    std::ostream::put(cVar7);
    std::ostream::flush();
    poVar4 = (ostream *)param_1;
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)param_1,"",0);
    plVar2 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
    if (plVar2 != (long *)0x0) {
      if ((char)plVar2[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar2 + 0x30))(plVar2,10);
        }
      }
      std::ostream::put(cVar7);
      std::ostream::flush();
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)param_1,"# Vertices: ",0xc);
      poVar3 = std::ostream::_M_insert<unsigned_long>((ulong)param_1);
      poVar4 = *(ostream **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
      if (poVar4 != (ostream *)0x0) {
        if (poVar4[0x38] == (ostream)0x0) {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*(long *)poVar4 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*(long *)poVar4 + 0x30))(poVar4,10);
          }
        }
        std::ostream::put((char)poVar3);
        std::ostream::flush();
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)param_1,"# Triangles: ",0xd);
        poVar3 = std::ostream::_M_insert<unsigned_long>((ulong)param_1);
        poVar4 = *(ostream **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
        if (poVar4 != (ostream *)0x0) {
          if (poVar4[0x38] == (ostream)0x0) {
            std::ctype<char>::_M_widen_init();
            if (*(code **)(*(long *)poVar4 + 0x30) != std::ctype<char>::do_widen) {
              (**(code **)(*(long *)poVar4 + 0x30))(poVar4,10);
            }
          }
          std::ostream::put((char)poVar3);
          std::ostream::flush();
          poVar4 = (ostream *)param_1;
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)param_1,"",0);
          plVar2 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
          if (plVar2 != (long *)0x0) {
            if ((char)plVar2[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                (**(code **)(*plVar2 + 0x30))(plVar2,10);
              }
            }
            std::ostream::put(cVar7);
            std::ostream::flush();
            poVar4 = (ostream *)param_1;
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)param_1,"Group {",7);
            plVar2 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
            if (plVar2 != (long *)0x0) {
              if ((char)plVar2[7] == '\0') {
                std::ctype<char>::_M_widen_init();
                if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                  (**(code **)(*plVar2 + 0x30))(plVar2,10);
                }
              }
              std::ostream::put(cVar7);
              std::ostream::flush();
              poVar4 = (ostream *)param_1;
              std::__ostream_insert<char,std::char_traits<char>>
                        ((ostream *)param_1,"    children [",0xe);
              plVar2 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
              if (plVar2 != (long *)0x0) {
                if ((char)plVar2[7] == '\0') {
                  std::ctype<char>::_M_widen_init();
                  if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                    (**(code **)(*plVar2 + 0x30))(plVar2,10);
                  }
                }
                std::ostream::put(cVar7);
                std::ostream::flush();
                poVar4 = (ostream *)param_1;
                std::__ostream_insert<char,std::char_traits<char>>
                          ((ostream *)param_1,"        Shape {",0xf);
                plVar2 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
                if (plVar2 != (long *)0x0) {
                  if ((char)plVar2[7] == '\0') {
                    std::ctype<char>::_M_widen_init();
                    if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                      (**(code **)(*plVar2 + 0x30))(plVar2,10);
                    }
                  }
                  std::ostream::put(cVar7);
                  std::ostream::flush();
                  poVar4 = (ostream *)param_1;
                  std::__ostream_insert<char,std::char_traits<char>>
                            ((ostream *)param_1,"            appearance Appearance {",0x23);
                  plVar2 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
                  if (plVar2 != (long *)0x0) {
                    if ((char)plVar2[7] == '\0') {
                      std::ctype<char>::_M_widen_init();
                      if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                        (**(code **)(*plVar2 + 0x30))(plVar2,10);
                      }
                    }
                    std::ostream::put(cVar7);
                    std::ostream::flush();
                    poVar4 = (ostream *)param_1;
                    std::__ostream_insert<char,std::char_traits<char>>
                              ((ostream *)param_1,"                material Material {",0x23);
                    plVar2 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0xf0);
                    if (plVar2 != (long *)0x0) {
                      if ((char)plVar2[7] == '\0') {
                        std::ctype<char>::_M_widen_init();
                        if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                          (**(code **)(*plVar2 + 0x30))(plVar2,10);
                        }
                      }
                      std::ostream::put(cVar7);
                      std::ostream::flush();
                      std::__ostream_insert<char,std::char_traits<char>>
                                ((ostream *)param_1,"                    diffuseColor ",0x21);
                      poVar4 = std::ostream::_M_insert<double>(*(double *)param_2);
                      std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
                      poVar4 = std::ostream::_M_insert<double>(*(double *)(param_2 + 8));
                      std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
                      poVar3 = std::ostream::_M_insert<double>(*(double *)(param_2 + 0x10));
                      poVar4 = *(ostream **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
                      if (poVar4 != (ostream *)0x0) {
                        if (poVar4[0x38] == (ostream)0x0) {
                          std::ctype<char>::_M_widen_init();
                          if (*(code **)(*(long *)poVar4 + 0x30) != std::ctype<char>::do_widen) {
                            (**(code **)(*(long *)poVar4 + 0x30))(poVar4,10);
                          }
                        }
                        std::ostream::put((char)poVar3);
                        std::ostream::flush();
                        std::__ostream_insert<char,std::char_traits<char>>
                                  ((ostream *)param_1,"                    ambientIntensity ",0x25);
                        poVar3 = std::ostream::_M_insert<double>(*(double *)(param_2 + 0x18));
                        poVar4 = *(ostream **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
                        if (poVar4 != (ostream *)0x0) {
                          if (poVar4[0x38] == (ostream)0x0) {
                            std::ctype<char>::_M_widen_init();
                            if (*(code **)(*(long *)poVar4 + 0x30) != std::ctype<char>::do_widen) {
                              (**(code **)(*(long *)poVar4 + 0x30))(poVar4,10);
                            }
                          }
                          std::ostream::put((char)poVar3);
                          std::ostream::flush();
                          std::__ostream_insert<char,std::char_traits<char>>
                                    ((ostream *)param_1,"                    specularColor ",0x22);
                          poVar4 = std::ostream::_M_insert<double>(*(double *)(param_2 + 0x20));
                          std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
                          poVar4 = std::ostream::_M_insert<double>(*(double *)(param_2 + 0x28));
                          std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
                          poVar3 = std::ostream::_M_insert<double>(*(double *)(param_2 + 0x30));
                          plVar2 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
                          if (plVar2 != (long *)0x0) {
                            if ((char)plVar2[7] == '\0') {
                              std::ctype<char>::_M_widen_init();
                              if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                                (**(code **)(*plVar2 + 0x30))(plVar2,10);
                              }
                            }
                            std::ostream::put((char)poVar3);
                            std::ostream::flush();
                            std::__ostream_insert<char,std::char_traits<char>>
                                      ((ostream *)param_1,"                    emissiveColor ",0x22)
                            ;
                            poVar4 = std::ostream::_M_insert<double>(*(double *)(param_2 + 0x38));
                            std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
                            poVar4 = std::ostream::_M_insert<double>(*(double *)(param_2 + 0x40));
                            std::__ostream_insert<char,std::char_traits<char>>(poVar4," ",1);
                            poVar3 = std::ostream::_M_insert<double>(*(double *)(param_2 + 0x48));
                            plVar2 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0);
                            if (plVar2 != (long *)0x0) {
                              if ((char)plVar2[7] == '\0') {
                                std::ctype<char>::_M_widen_init();
                                if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                                  (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                }
                              }
                              std::ostream::put((char)poVar3);
                              std::ostream::flush();
                              std::__ostream_insert<char,std::char_traits<char>>
                                        ((ostream *)param_1,"                    shininess ",0x1e);
                              poVar4 = (ostream *)param_1;
                              poVar3 = std::ostream::_M_insert<double>(*(double *)(param_2 + 0x50));
                              plVar2 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) + 0xf0
                                                 );
                              if (plVar2 != (long *)0x0) {
                                if ((char)plVar2[7] == '\0') {
                                  std::ctype<char>::_M_widen_init();
                                  if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                                    (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                  }
                                }
                                std::ostream::put((char)poVar3);
                                std::ostream::flush();
                                std::__ostream_insert<char,std::char_traits<char>>
                                          ((ostream *)param_1,"                    transparency ",
                                           0x21);
                                poVar4 = (ostream *)param_1;
                                poVar3 = std::ostream::_M_insert<double>
                                                   (*(double *)(param_2 + 0x58));
                                plVar2 = *(long **)(poVar3 + *(long *)(*(long *)poVar3 + -0x18) +
                                                             0xf0);
                                if (plVar2 != (long *)0x0) {
                                  if ((char)plVar2[7] == '\0') {
                                    std::ctype<char>::_M_widen_init();
                                    if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
                                      (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                    }
                                  }
                                  std::ostream::put((char)poVar3);
                                  std::ostream::flush();
                                  poVar4 = (ostream *)param_1;
                                  std::__ostream_insert<char,std::char_traits<char>>
                                            ((ostream *)param_1,"                }",0x11);
                                  plVar2 = *(long **)(param_1 +
                                                     *(long *)(*(long *)param_1 + -0x18) + 0xf0);
                                  if (plVar2 != (long *)0x0) {
                                    if ((char)plVar2[7] == '\0') {
                                      std::ctype<char>::_M_widen_init();
                                      if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen)
                                      {
                                        (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                      }
                                    }
                                    std::ostream::put(cVar7);
                                    std::ostream::flush();
                                    poVar4 = (ostream *)param_1;
                                    std::__ostream_insert<char,std::char_traits<char>>
                                              ((ostream *)param_1,"            }",0xd);
                                    plVar2 = *(long **)(param_1 +
                                                       *(long *)(*(long *)param_1 + -0x18) + 0xf0);
                                    if (plVar2 != (long *)0x0) {
                                      if ((char)plVar2[7] == '\0') {
                                        std::ctype<char>::_M_widen_init();
                                        if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen
                                           ) {
                                          (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                        }
                                      }
                                      std::ostream::put(cVar7);
                                      std::ostream::flush();
                                      poVar4 = (ostream *)param_1;
                                      std::__ostream_insert<char,std::char_traits<char>>
                                                ((ostream *)param_1,
                                                 "            geometry IndexedFaceSet {",0x25);
                                      plVar2 = *(long **)(param_1 +
                                                         *(long *)(*(long *)param_1 + -0x18) + 0xf0)
                                      ;
                                      if (plVar2 != (long *)0x0) {
                                        if ((char)plVar2[7] == '\0') {
                                          std::ctype<char>::_M_widen_init();
                                          if (*(code **)(*plVar2 + 0x30) !=
                                              std::ctype<char>::do_widen) {
                                            (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                          }
                                        }
                                        std::ostream::put(cVar7);
                                        std::ostream::flush();
                                        poVar4 = (ostream *)param_1;
                                        std::__ostream_insert<char,std::char_traits<char>>
                                                  ((ostream *)param_1,"                ccw TRUE",
                                                   0x18);
                                        plVar2 = *(long **)(param_1 +
                                                           *(long *)(*(long *)param_1 + -0x18) +
                                                           0xf0);
                                        if (plVar2 != (long *)0x0) {
                                          if ((char)plVar2[7] == '\0') {
                                            std::ctype<char>::_M_widen_init();
                                            if (*(code **)(*plVar2 + 0x30) !=
                                                std::ctype<char>::do_widen) {
                                              (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                            }
                                          }
                                          std::ostream::put(cVar7);
                                          std::ostream::flush();
                                          poVar4 = (ostream *)param_1;
                                          std::__ostream_insert<char,std::char_traits<char>>
                                                    ((ostream *)param_1,"                solid TRUE"
                                                     ,0x1a);
                                          plVar2 = *(long **)(param_1 +
                                                             *(long *)(*(long *)param_1 + -0x18) +
                                                             0xf0);
                                          if (plVar2 != (long *)0x0) {
                                            if ((char)plVar2[7] == '\0') {
                                              std::ctype<char>::_M_widen_init();
                                              if (*(code **)(*plVar2 + 0x30) !=
                                                  std::ctype<char>::do_widen) {
                                                (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                              }
                                            }
                                            std::ostream::put(cVar7);
                                            std::ostream::flush();
                                            poVar4 = (ostream *)param_1;
                                            std::__ostream_insert<char,std::char_traits<char>>
                                                      ((ostream *)param_1,
                                                       "                convex TRUE",0x1b);
                                            plVar2 = *(long **)(param_1 +
                                                               *(long *)(*(long *)param_1 + -0x18) +
                                                               0xf0);
                                            if (plVar2 != (long *)0x0) {
                                              if ((char)plVar2[7] == '\0') {
                                                std::ctype<char>::_M_widen_init();
                                                if (*(code **)(*plVar2 + 0x30) !=
                                                    std::ctype<char>::do_widen) {
                                                  (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                }
                                              }
                                              std::ostream::put(cVar7);
                                              std::ostream::flush();
                                              if (lVar8 != 0) {
                                                poVar4 = (ostream *)param_1;
                                                std::__ostream_insert<char,std::char_traits<char>>
                                                          ((ostream *)param_1,
                                                                                                                      
                                                  "                coord DEF co Coordinate {",0x29);
                                                plVar2 = *(long **)(param_1 +
                                                                   *(long *)(*(long *)param_1 +
                                                                            -0x18) + 0xf0);
                                                if (plVar2 == (long *)0x0) goto LAB_001015ea;
                                                if ((char)plVar2[7] == '\0') {
                                                  std::ctype<char>::_M_widen_init();
                                                  if (*(code **)(*plVar2 + 0x30) !=
                                                      std::ctype<char>::do_widen) {
                                                    (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                  }
                                                }
                                                std::ostream::put(cVar7);
                                                std::ostream::flush();
                                                poVar4 = (ostream *)param_1;
                                                std::__ostream_insert<char,std::char_traits<char>>
                                                          ((ostream *)param_1,
                                                           "                    point [",0x1b);
                                                plVar2 = *(long **)(param_1 +
                                                                   *(long *)(*(long *)param_1 +
                                                                            -0x18) + 0xf0);
                                                if (plVar2 == (long *)0x0) goto LAB_001015ea;
                                                if ((char)plVar2[7] == '\0') {
                                                  std::ctype<char>::_M_widen_init();
                                                  if (*(code **)(*plVar2 + 0x30) !=
                                                      std::ctype<char>::do_widen) {
                                                    (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                  }
                                                }
                                                lVar6 = 0;
                                                std::ostream::put(cVar7);
                                                std::ostream::flush();
                                                do {
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)param_1,
                                                             "                        ",0x18);
                                                  pMVar5 = this;
                                                  if (*(long *)(this + 0x610) != 0x40) {
                                                    pMVar5 = *(Mesh **)(this + 0x600);
                                                  }
                                                  poVar4 = std::ostream::_M_insert<double>
                                                                     (*(double *)
                                                                       (pMVar5 + lVar6 * 0x18));
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            (poVar4," ",1);
                                                  pMVar5 = this;
                                                  if (*(long *)(this + 0x610) != 0x40) {
                                                    pMVar5 = *(Mesh **)(this + 0x600);
                                                  }
                                                  poVar4 = std::ostream::_M_insert<double>
                                                                     (*(double *)
                                                                       (pMVar5 + lVar6 * 0x18 + 8));
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            (poVar4," ",1);
                                                  pMVar5 = this;
                                                  if (*(long *)(this + 0x610) != 0x40) {
                                                    pMVar5 = *(Mesh **)(this + 0x600);
                                                  }
                                                  poVar3 = std::ostream::_M_insert<double>
                                                                     (*(double *)
                                                                       (pMVar5 + lVar6 * 0x18 + 0x10
                                                                       ));
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            (poVar3,",",1);
                                                  poVar4 = *(ostream **)
                                                            (poVar3 + *(long *)(*(long *)poVar3 +
                                                                               -0x18) + 0xf0);
                                                  if (poVar4 == (ostream *)0x0) goto LAB_001015ea;
                                                  if (poVar4[0x38] == (ostream)0x0) {
                                                    std::ctype<char>::_M_widen_init();
                                                    if (*(code **)(*(long *)poVar4 + 0x30) !=
                                                        std::ctype<char>::do_widen) {
                                                      (**(code **)(*(long *)poVar4 + 0x30))
                                                                (poVar4,10);
                                                    }
                                                  }
                                                  lVar6 = lVar6 + 1;
                                                  std::ostream::put((char)poVar3);
                                                  std::ostream::flush();
                                                } while (lVar8 != lVar6);
                                                poVar4 = (ostream *)param_1;
                                                std::__ostream_insert<char,std::char_traits<char>>
                                                          ((ostream *)param_1,
                                                           "                    ]",0x15);
                                                plVar2 = *(long **)(param_1 +
                                                                   *(long *)(*(long *)param_1 +
                                                                            -0x18) + 0xf0);
                                                if (plVar2 == (long *)0x0) goto LAB_001015ea;
                                                if ((char)plVar2[7] == '\0') {
                                                  std::ctype<char>::_M_widen_init();
                                                  if (*(code **)(*plVar2 + 0x30) !=
                                                      std::ctype<char>::do_widen) {
                                                    (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                  }
                                                }
                                                std::ostream::put(cVar7);
                                                std::ostream::flush();
                                                poVar4 = (ostream *)param_1;
                                                std::__ostream_insert<char,std::char_traits<char>>
                                                          ((ostream *)param_1,"                }",
                                                           0x11);
                                                plVar2 = *(long **)(param_1 +
                                                                   *(long *)(*(long *)param_1 +
                                                                            -0x18) + 0xf0);
                                                if (plVar2 == (long *)0x0) goto LAB_001015ea;
                                                if ((char)plVar2[7] == '\0') {
                                                  std::ctype<char>::_M_widen_init();
                                                  if (*(code **)(*plVar2 + 0x30) !=
                                                      std::ctype<char>::do_widen) {
                                                    (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                  }
                                                }
                                                std::ostream::put(cVar7);
                                                std::ostream::flush();
                                              }
                                              if (lVar1 != 0) {
                                                poVar4 = (ostream *)param_1;
                                                std::__ostream_insert<char,std::char_traits<char>>
                                                          ((ostream *)param_1,
                                                           "                coordIndex [ ",0x1d);
                                                plVar2 = *(long **)(param_1 +
                                                                   *(long *)(*(long *)param_1 +
                                                                            -0x18) + 0xf0);
                                                if (plVar2 == (long *)0x0) goto LAB_001015ea;
                                                if ((char)plVar2[7] == '\0') {
                                                  std::ctype<char>::_M_widen_init();
                                                  if (*(code **)(*plVar2 + 0x30) !=
                                                      std::ctype<char>::do_widen) {
                                                    (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                  }
                                                }
                                                lVar8 = 0;
                                                std::ostream::put(cVar7);
                                                std::ostream::flush();
                                                do {
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)param_1,
                                                             "                        ",0x18);
                                                  pMVar5 = this + 0x618;
                                                  if (*(long *)(this + 0x928) != 0x40) {
                                                    pMVar5 = *(Mesh **)(this + 0x918);
                                                  }
                                                  poVar4 = (ostream *)
                                                           std::ostream::operator<<
                                                                     ((ostream *)param_1,
                                                                      *(int *)(pMVar5 + lVar8 * 0xc)
                                                                     );
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            (poVar4,", ",2);
                                                  pMVar5 = this + 0x618;
                                                  if (*(long *)(this + 0x928) != 0x40) {
                                                    pMVar5 = *(Mesh **)(this + 0x918);
                                                  }
                                                  poVar4 = (ostream *)
                                                           std::ostream::operator<<
                                                                     (poVar4,*(int *)(pMVar5 + lVar8
                                                                                               * 0xc
                                                                                               + 4))
                                                  ;
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            (poVar4,", ",2);
                                                  pMVar5 = this + 0x618;
                                                  if (*(long *)(this + 0x928) != 0x40) {
                                                    pMVar5 = *(Mesh **)(this + 0x918);
                                                  }
                                                  poVar3 = (ostream *)
                                                           std::ostream::operator<<
                                                                     (poVar4,*(int *)(pMVar5 + lVar8
                                                                                               * 0xc
                                                                                               + 8))
                                                  ;
                                                  poVar4 = poVar3;
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            (poVar3,", -1,",5);
                                                  plVar2 = *(long **)(poVar3 + *(long *)(*(long *)
                                                  poVar3 + -0x18) + 0xf0);
                                                  if (plVar2 == (long *)0x0) goto LAB_001015ea;
                                                  if ((char)plVar2[7] == '\0') {
                                                    std::ctype<char>::_M_widen_init();
                                                    if (*(code **)(*plVar2 + 0x30) !=
                                                        std::ctype<char>::do_widen) {
                                                      (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                    }
                                                  }
                                                  lVar8 = lVar8 + 1;
                                                  std::ostream::put((char)poVar3);
                                                  std::ostream::flush();
                                                } while (lVar1 != lVar8);
                                                poVar4 = (ostream *)param_1;
                                                std::__ostream_insert<char,std::char_traits<char>>
                                                          ((ostream *)param_1,"                ]",
                                                           0x11);
                                                plVar2 = *(long **)(param_1 +
                                                                   *(long *)(*(long *)param_1 +
                                                                            -0x18) + 0xf0);
                                                if (plVar2 == (long *)0x0) goto LAB_001015ea;
                                                if ((char)plVar2[7] == '\0') {
                                                  std::ctype<char>::_M_widen_init();
                                                  if (*(code **)(*plVar2 + 0x30) !=
                                                      std::ctype<char>::do_widen) {
                                                    (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                  }
                                                }
                                                std::ostream::put(cVar7);
                                                std::ostream::flush();
                                              }
                                              poVar4 = (ostream *)param_1;
                                              std::__ostream_insert<char,std::char_traits<char>>
                                                        ((ostream *)param_1,"            }",0xd);
                                              plVar2 = *(long **)(param_1 +
                                                                 *(long *)(*(long *)param_1 + -0x18)
                                                                 + 0xf0);
                                              if (plVar2 != (long *)0x0) {
                                                if ((char)plVar2[7] == '\0') {
                                                  std::ctype<char>::_M_widen_init();
                                                  if (*(code **)(*plVar2 + 0x30) !=
                                                      std::ctype<char>::do_widen) {
                                                    (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                  }
                                                }
                                                std::ostream::put(cVar7);
                                                std::ostream::flush();
                                                poVar4 = (ostream *)param_1;
                                                std::__ostream_insert<char,std::char_traits<char>>
                                                          ((ostream *)param_1,"        }",9);
                                                plVar2 = *(long **)(param_1 +
                                                                   *(long *)(*(long *)param_1 +
                                                                            -0x18) + 0xf0);
                                                if (plVar2 != (long *)0x0) {
                                                  if ((char)plVar2[7] == '\0') {
                                                    std::ctype<char>::_M_widen_init();
                                                    if (*(code **)(*plVar2 + 0x30) !=
                                                        std::ctype<char>::do_widen) {
                                                      (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                    }
                                                  }
                                                  std::ostream::put(cVar7);
                                                  std::ostream::flush();
                                                  poVar4 = (ostream *)param_1;
                                                  std::__ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)param_1,"    ]",5);
                                                  plVar2 = *(long **)(param_1 +
                                                                     *(long *)(*(long *)param_1 +
                                                                              -0x18) + 0xf0);
                                                  if (plVar2 != (long *)0x0) {
                                                    if ((char)plVar2[7] == '\0') {
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*plVar2 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                      }
                                                    }
                                                    std::ostream::put(cVar7);
                                                    std::ostream::flush();
                                                    poVar4 = (ostream *)param_1;
                                                    std::
                                                  __ostream_insert<char,std::char_traits<char>>
                                                            ((ostream *)param_1,"}",1);
                                                  plVar2 = *(long **)(param_1 +
                                                                     *(long *)(*(long *)param_1 +
                                                                              -0x18) + 0xf0);
                                                  if (plVar2 != (long *)0x0) {
                                                    if ((char)plVar2[7] == '\0') {
                                                      std::ctype<char>::_M_widen_init();
                                                      if (*(code **)(*plVar2 + 0x30) !=
                                                          std::ctype<char>::do_widen) {
                                                        (**(code **)(*plVar2 + 0x30))(plVar2,10);
                                                      }
                                                    }
                                                    std::ostream::put(cVar7);
                                                    std::ostream::flush();
                                                    return 1;
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
LAB_001015ea:
  std::__throw_bad_cast();
  lVar6 = _LC35;
  lVar1 = _UNK_00103928;
  lVar8 = __LC34;
  *(long *)(poVar4 + 0x600) = 0;
  *(long *)(poVar4 + 0x918) = 0;
  *(long *)(poVar4 + 0x978) = lVar6;
  *(long *)(poVar4 + 0x608) = lVar8;
  *(long *)(poVar4 + 0x610) = lVar1;
  *(long *)(poVar4 + 0x920) = lVar8;
  *(long *)(poVar4 + 0x928) = lVar1;
  return lVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::Mesh::Mesh() */

void __thiscall VHACD::Mesh::Mesh(Mesh *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _LC35;
  uVar2 = _UNK_00103928;
  uVar1 = __LC34;
  *(undefined8 *)(this + 0x600) = 0;
  *(undefined8 *)(this + 0x918) = 0;
  *(undefined8 *)(this + 0x978) = uVar3;
  *(undefined8 *)(this + 0x608) = uVar1;
  *(undefined8 *)(this + 0x610) = uVar2;
  *(undefined8 *)(this + 0x920) = uVar1;
  *(undefined8 *)(this + 0x928) = uVar2;
  return;
}



/* VHACD::Mesh::~Mesh() */

void __thiscall VHACD::Mesh::~Mesh(Mesh *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x918);
  if (lVar1 != 0) {
    operator_delete__((void *)(lVar1 + -8),*(long *)(lVar1 + -8) * 0xc + 8);
  }
  lVar1 = *(long *)(this + 0x600);
  if (lVar1 != 0) {
    operator_delete__((void *)(lVar1 + -8),*(long *)(lVar1 + -8) * 0x18 + 8);
    return;
  }
  return;
}



/* VHACD::Mesh::ComputeCenter() */

Mesh * __thiscall VHACD::Mesh::ComputeCenter(Mesh *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Mesh *pMVar8;
  Mesh *pMVar9;
  long in_FS_OFFSET;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long local_20;
  
  lVar4 = *(long *)(this + 0x608);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 != 0) {
    pMVar9 = this;
    if (*(long *)(this + 0x610) != 0x40) {
      pMVar9 = *(Mesh **)(this + 0x600);
    }
    pMVar8 = this + 0x618;
    if (*(long *)(this + 0x928) != 0x40) {
      pMVar8 = *(Mesh **)(this + 0x918);
    }
    FLOAT_MATH::fm_computeCentroid
              ((uint)lVar4,(double *)pMVar9,*(uint *)(this + 0x920),(uint *)pMVar8,&local_38);
    *(double *)(this + 0x960) = local_38;
    *(undefined8 *)(this + 0x968) = uStack_30;
    *(undefined8 *)(this + 0x970) = local_28;
    pMVar9 = this;
    if (*(long *)(this + 0x610) != 0x40) {
      pMVar9 = *(Mesh **)(this + 0x600);
    }
    dVar10 = *(double *)pMVar9;
    dVar11 = *(double *)(pMVar9 + 8);
    uVar5 = *(undefined8 *)(pMVar9 + 8);
    dVar12 = *(double *)(pMVar9 + 0x10);
    uVar6 = *(undefined8 *)(pMVar9 + 8);
    uVar7 = *(undefined8 *)(pMVar9 + 0x10);
    *(undefined8 *)(this + 0x930) = *(undefined8 *)pMVar9;
    *(undefined8 *)(this + 0x938) = uVar5;
    *(double *)(this + 0x940) = dVar12;
    *(double *)(this + 0x948) = dVar10;
    *(undefined8 *)(this + 0x950) = uVar6;
    *(undefined8 *)(this + 0x958) = uVar7;
    if (lVar4 != 1) {
      pMVar8 = pMVar9 + 0x18;
      dVar13 = dVar10;
      dVar14 = dVar11;
      dVar15 = dVar12;
      while( true ) {
        dVar1 = *(double *)pMVar8;
        dVar2 = *(double *)(pMVar8 + 8);
        dVar3 = *(double *)(pMVar8 + 0x10);
        if (dVar1 < dVar10) {
          *(double *)(this + 0x930) = dVar1;
        }
        if (dVar2 < dVar11) {
          *(double *)(this + 0x938) = dVar2;
        }
        if (dVar3 < dVar12) {
          *(double *)(this + 0x940) = dVar3;
        }
        if (dVar13 < dVar1) {
          *(double *)(this + 0x948) = dVar1;
        }
        if (dVar14 < dVar2) {
          *(double *)(this + 0x950) = dVar2;
        }
        if (dVar15 < dVar3) {
          *(double *)(this + 0x958) = dVar3;
        }
        pMVar8 = pMVar8 + 0x18;
        if (pMVar8 == pMVar9 + lVar4 * 0x18) break;
        dVar10 = *(double *)(this + 0x930);
        dVar11 = *(double *)(this + 0x938);
        dVar12 = *(double *)(this + 0x940);
        dVar13 = *(double *)(this + 0x948);
        dVar14 = *(double *)(this + 0x950);
        dVar15 = *(double *)(this + 0x958);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this + 0x960;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::Mesh::ComputeVolume() const */

double __thiscall VHACD::Mesh::ComputeVolume(Mesh *this)

{
  Mesh *pMVar1;
  Mesh *pMVar2;
  ulong uVar3;
  Mesh *pMVar4;
  ulong uVar5;
  Mesh *pMVar6;
  long lVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar3 = *(ulong *)(this + 0x608);
  if ((uVar3 != 0) && (*(long *)(this + 0x920) != 0)) {
    dVar12 = 0.0;
    lVar7 = 0;
    uVar5 = 0;
    dVar10 = 0.0;
    dVar11 = dVar10;
    do {
      pMVar6 = this;
      if (*(long *)(this + 0x610) != 0x40) {
        pMVar6 = *(Mesh **)(this + 0x600);
      }
      pMVar4 = pMVar6 + lVar7;
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x18;
      dVar10 = dVar10 + *(double *)pMVar4;
      dVar11 = dVar11 + *(double *)(pMVar4 + 8);
      dVar12 = dVar12 + *(double *)(pMVar4 + 0x10);
    } while (uVar5 < uVar3);
    dVar9 = (double)uVar3;
    dVar10 = dVar10 / dVar9;
    dVar11 = dVar11 / dVar9;
    dVar12 = dVar12 / dVar9;
    iVar8 = (int)*(long *)(this + 0x920);
    if (0 < iVar8) {
      lVar7 = 0;
      dVar9 = 0.0;
      do {
        pMVar4 = this + 0x618;
        if (*(long *)(this + 0x928) != 0x40) {
          pMVar4 = *(Mesh **)(this + 0x918);
        }
        pMVar4 = pMVar4 + lVar7;
        lVar7 = lVar7 + 0xc;
        pMVar1 = pMVar6 + (long)*(int *)(pMVar4 + 4) * 0x18;
        pMVar2 = pMVar6 + (long)*(int *)(pMVar4 + 8) * 0x18;
        pMVar4 = pMVar6 + (long)*(int *)pMVar4 * 0x18;
        dVar9 = dVar9 + ((*(double *)(pMVar2 + 8) - dVar11) * (*(double *)pMVar1 - dVar10) -
                        (*(double *)pMVar2 - dVar10) * (*(double *)(pMVar1 + 8) - dVar11)) *
                        (*(double *)(pMVar4 + 0x10) - dVar12) +
                        ((*(double *)(pMVar1 + 0x10) - dVar12) * (*(double *)pMVar2 - dVar10) -
                        (*(double *)(pMVar2 + 0x10) - dVar12) * (*(double *)pMVar1 - dVar10)) *
                        (*(double *)(pMVar4 + 8) - dVar11) +
                        ((*(double *)(pMVar2 + 0x10) - dVar12) * (*(double *)(pMVar1 + 8) - dVar11)
                        - (*(double *)(pMVar2 + 8) - dVar11) * (*(double *)(pMVar1 + 0x10) - dVar12)
                        ) * (*(double *)pMVar4 - dVar10);
      } while (lVar7 != ((ulong)(iVar8 - 1) * 3 + 3) * 4);
      return dVar9 / __LC37;
    }
  }
  return 0.0;
}



/* VHACD::Mesh::ComputeConvexHull(double const*, unsigned long) */

void VHACD::Mesh::ComputeConvexHull(double *param_1,ulong param_2)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  double *pdVar7;
  double dVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  ulong uVar12;
  void *pvVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  long local_b8;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  void *local_98;
  char local_90;
  undefined8 local_84;
  void *local_78;
  char local_70;
  undefined8 local_64;
  void *local_58;
  char local_50;
  long local_40;
  
  fVar1 = _LC38;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = '\x01';
  param_1[0xc1] = 0.0;
  param_1[0x124] = 0.0;
  local_98 = (void *)0x0;
  local_a4 = 0;
  local_70 = '\x01';
  local_78 = (void *)0x0;
  local_84 = 0;
  local_50 = '\x01';
  local_58 = (void *)0x0;
  local_64 = 0;
  VHACD::btConvexHullComputer::compute(local_a8,SUB81(param_2,0),1,0x18,fVar1,fVar1);
  if (0 < (int)local_a4) {
    lVar16 = 0;
    dVar8 = param_1[0xc1];
    dVar11 = param_1[0xc2];
    do {
      puVar6 = (undefined8 *)(lVar16 * 0x10 + (long)local_98);
      fVar1 = *(float *)(puVar6 + 1);
      uVar2 = *puVar6;
      dVar10 = dVar11;
      if (dVar8 == dVar11) {
        dVar10 = (double)((long)dVar11 * 2);
        if ((ulong)dVar10 < 0x555555555555556) {
          lVar17 = (long)dVar11 * 0x30;
          uVar12 = lVar17 + 8;
        }
        else {
          lVar17 = -9;
          uVar12 = 0xffffffffffffffff;
        }
        pdVar7 = (double *)operator_new__(uVar12);
        *pdVar7 = dVar10;
        pdVar9 = param_1;
        if (param_1[0xc2] != 3.16202013338398e-322) {
          pdVar9 = (double *)param_1[0xc0];
        }
        __memcpy_chk(pdVar7 + 1,pdVar9,(long)param_1[0xc2] * 0x18,lVar17);
        dVar8 = param_1[0xc0];
        if (dVar8 != 0.0) {
          operator_delete__((void *)((long)dVar8 + -8),*(long *)((long)dVar8 + -8) * 0x18 + 8);
        }
        param_1[0xc0] = (double)(pdVar7 + 1);
        dVar8 = param_1[0xc1];
        param_1[0xc2] = dVar10;
      }
      pdVar9 = param_1;
      if (dVar10 != 3.16202013338398e-322) {
        pdVar9 = (double *)param_1[0xc0];
      }
      lVar16 = lVar16 + 1;
      pdVar9 = pdVar9 + (long)dVar8 * 3;
      param_1[0xc1] = (double)((long)dVar8 + 1U);
      *pdVar9 = (double)(float)uVar2;
      pdVar9[1] = (double)(float)((ulong)uVar2 >> 0x20);
      pdVar9[2] = (double)fVar1;
      dVar8 = (double)((long)dVar8 + 1U);
      dVar11 = dVar10;
    } while ((int)lVar16 < (int)local_a4);
  }
  lVar16 = (long)(int)local_64;
  local_b8 = 0;
  pvVar13 = local_58;
  if (0 < (int)local_64) {
    do {
      iVar3 = *(int *)((long)pvVar13 + local_b8);
      piVar14 = (int *)((long)local_78 +
                       (long)*(int *)((long)local_78 + (long)iVar3 * 0xc + 4) * 0xc +
                       (long)iVar3 * 0xc);
      iVar4 = piVar14[2];
      piVar14 = piVar14 + (long)*piVar14 * 3;
      if (piVar14[2] != iVar4) {
        dVar8 = param_1[0x124];
        dVar11 = param_1[0x125];
        iVar5 = piVar14[2];
        iVar3 = *(int *)((long)local_78 + (long)iVar3 * 0xc + 8);
        do {
          iVar15 = iVar5;
          dVar10 = dVar11;
          if (dVar8 == dVar11) {
            dVar10 = (double)((long)dVar11 * 2);
            if ((ulong)dVar10 < 0xaaaaaaaaaaaaaab) {
              lVar17 = (long)dVar11 * 0x18;
              uVar12 = lVar17 + 8;
            }
            else {
              lVar17 = -9;
              uVar12 = 0xffffffffffffffff;
            }
            pdVar7 = (double *)operator_new__(uVar12);
            pdVar9 = param_1 + 0xc3;
            *pdVar7 = dVar10;
            if (param_1[0x125] != 3.16202013338398e-322) {
              pdVar9 = (double *)param_1[0x123];
            }
            __memcpy_chk(pdVar7 + 1,pdVar9,(long)param_1[0x125] * 0xc,lVar17);
            dVar8 = param_1[0x123];
            if (dVar8 != 0.0) {
              operator_delete__((void *)((long)dVar8 + -8),*(long *)((long)dVar8 + -8) * 0xc + 8);
            }
            param_1[0x123] = (double)(pdVar7 + 1);
            dVar8 = param_1[0x124];
            param_1[0x125] = dVar10;
          }
          pdVar9 = param_1 + 0xc3;
          if (dVar10 != 3.16202013338398e-322) {
            pdVar9 = (double *)param_1[0x123];
          }
          puVar6 = (undefined8 *)((long)pdVar9 + (long)dVar8 * 0xc);
          param_1[0x124] = (double)((long)dVar8 + 1U);
          *puVar6 = CONCAT44(iVar3,iVar4);
          *(int *)(puVar6 + 1) = iVar15;
          piVar14 = piVar14 + (long)piVar14[1] * 3 + (long)piVar14[(long)piVar14[1] * 3] * 3;
          dVar8 = (double)((long)dVar8 + 1U);
          pvVar13 = local_58;
          dVar11 = dVar10;
          iVar5 = piVar14[2];
          iVar3 = iVar15;
        } while (iVar4 != piVar14[2]);
      }
      local_b8 = local_b8 + 4;
    } while (local_b8 != lVar16 * 4);
  }
  if ((pvVar13 != (void *)0x0) && (local_50 != '\0')) {
    VHACD::btAlignedFreeInternal(pvVar13);
  }
  if ((local_78 != (void *)0x0) && (local_70 != '\0')) {
    VHACD::btAlignedFreeInternal(local_78);
  }
  if ((local_98 != (void *)0x0) && (local_90 != '\0')) {
    VHACD::btAlignedFreeInternal(local_98);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VHACD::Mesh::Clip(VHACD::Plane const&, VHACD::SArray<VHACD::Vec3<double>, 64ul>&,
   VHACD::SArray<VHACD::Vec3<double>, 64ul>&) const */

void __thiscall VHACD::Mesh::Clip(Mesh *this,Plane *param_1,SArray *param_2,SArray *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  SArray *pSVar4;
  long lVar5;
  Mesh *pMVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar1 = *(long *)(this + 0x608);
  if (lVar1 != 0) {
    lVar7 = 0;
    do {
      while( true ) {
        pMVar6 = this;
        if (*(long *)(this + 0x610) != 0x40) {
          pMVar6 = *(Mesh **)(this + 0x600);
        }
        pMVar6 = pMVar6 + lVar7 * 0x18;
        dVar12 = *(double *)pMVar6;
        dVar13 = *(double *)(pMVar6 + 8);
        dVar11 = *(double *)(pMVar6 + 0x10);
        dVar10 = *(double *)param_1 * *(double *)pMVar6 + *(double *)(param_1 + 8) * dVar13 +
                 *(double *)(param_1 + 0x10) * dVar11 + *(double *)(param_1 + 0x18);
        if (dVar10 <= 0.0) break;
        uVar8 = *(ulong *)(param_2 + 0x608);
        uVar2 = *(ulong *)(param_2 + 0x610);
        uVar9 = uVar2;
        if (uVar8 == uVar2) {
          uVar9 = uVar2 * 2;
          if (uVar9 < 0x555555555555556) {
            lVar5 = uVar2 * 0x30;
            uVar8 = lVar5 + 8;
          }
          else {
            lVar5 = -9;
            uVar8 = 0xffffffffffffffff;
          }
          puVar3 = (ulong *)operator_new__(uVar8);
          *puVar3 = uVar9;
          pSVar4 = param_2;
          if (*(long *)(param_2 + 0x610) != 0x40) {
            pSVar4 = *(SArray **)(param_2 + 0x600);
          }
          __memcpy_chk(puVar3 + 1,pSVar4,*(long *)(param_2 + 0x610) * 0x18,lVar5);
          lVar5 = *(long *)(param_2 + 0x600);
          if (lVar5 != 0) {
            operator_delete__((void *)(lVar5 + -8),*(long *)(lVar5 + -8) * 0x18 + 8);
          }
          *(ulong *)(param_2 + 0x610) = uVar9;
          dVar12 = *(double *)pMVar6;
          dVar13 = *(double *)(pMVar6 + 8);
          dVar11 = *(double *)(pMVar6 + 0x10);
          *(ulong **)(param_2 + 0x600) = puVar3 + 1;
          uVar8 = *(ulong *)(param_2 + 0x608);
        }
        pSVar4 = param_2;
        if (uVar9 != 0x40) {
          pSVar4 = *(SArray **)(param_2 + 0x600);
        }
        lVar7 = lVar7 + 1;
        pSVar4 = pSVar4 + uVar8 * 0x18;
        *(ulong *)(param_2 + 0x608) = uVar8 + 1;
        *(double *)pSVar4 = dVar12;
        *(double *)(pSVar4 + 8) = dVar13;
        *(double *)(pSVar4 + 0x10) = dVar11;
        if (lVar1 == lVar7) {
          return;
        }
      }
      if (dVar10 < 0.0) {
        uVar8 = *(ulong *)(param_3 + 0x608);
        uVar2 = *(ulong *)(param_3 + 0x610);
        uVar9 = uVar2;
        if (uVar8 == uVar2) {
          uVar9 = uVar2 * 2;
          if (uVar9 < 0x555555555555556) {
            lVar5 = uVar2 * 0x30;
            uVar8 = lVar5 + 8;
          }
          else {
            lVar5 = -9;
            uVar8 = 0xffffffffffffffff;
          }
          puVar3 = (ulong *)operator_new__(uVar8);
          *puVar3 = uVar9;
          pSVar4 = param_3;
          if (*(long *)(param_3 + 0x610) != 0x40) {
            pSVar4 = *(SArray **)(param_3 + 0x600);
          }
          __memcpy_chk(puVar3 + 1,pSVar4,*(long *)(param_3 + 0x610) * 0x18,lVar5);
          lVar5 = *(long *)(param_3 + 0x600);
          if (lVar5 != 0) {
            operator_delete__((void *)(lVar5 + -8),*(long *)(lVar5 + -8) * 0x18 + 8);
          }
          dVar12 = *(double *)pMVar6;
          dVar13 = *(double *)(pMVar6 + 8);
          *(ulong *)(param_3 + 0x610) = uVar9;
          dVar11 = *(double *)(pMVar6 + 0x10);
          *(ulong **)(param_3 + 0x600) = puVar3 + 1;
          uVar8 = *(ulong *)(param_3 + 0x608);
        }
        pSVar4 = param_3;
        if (uVar9 != 0x40) {
          pSVar4 = *(SArray **)(param_3 + 0x600);
        }
        pSVar4 = pSVar4 + uVar8 * 0x18;
        *(ulong *)(param_3 + 0x608) = uVar8 + 1;
        *(double *)pSVar4 = dVar12;
        *(double *)(pSVar4 + 8) = dVar13;
        *(double *)(pSVar4 + 0x10) = dVar11;
      }
      else {
        uVar8 = *(ulong *)(param_2 + 0x608);
        uVar2 = *(ulong *)(param_2 + 0x610);
        uVar9 = uVar2;
        if (uVar8 == uVar2) {
          uVar9 = uVar2 * 2;
          if (uVar9 < 0x555555555555556) {
            lVar5 = uVar2 * 0x30;
            uVar8 = lVar5 + 8;
          }
          else {
            lVar5 = -9;
            uVar8 = 0xffffffffffffffff;
          }
          puVar3 = (ulong *)operator_new__(uVar8);
          *puVar3 = uVar9;
          pSVar4 = param_2;
          if (*(long *)(param_2 + 0x610) != 0x40) {
            pSVar4 = *(SArray **)(param_2 + 0x600);
          }
          __memcpy_chk(puVar3 + 1,pSVar4,*(long *)(param_2 + 0x610) * 0x18,lVar5);
          lVar5 = *(long *)(param_2 + 0x600);
          if (lVar5 != 0) {
            operator_delete__((void *)(lVar5 + -8),*(long *)(lVar5 + -8) * 0x18 + 8);
          }
          *(ulong *)(param_2 + 0x610) = uVar9;
          dVar12 = *(double *)pMVar6;
          dVar13 = *(double *)(pMVar6 + 8);
          dVar11 = *(double *)(pMVar6 + 0x10);
          *(ulong **)(param_2 + 0x600) = puVar3 + 1;
          uVar8 = *(ulong *)(param_2 + 0x608);
        }
        pSVar4 = param_2;
        if (uVar9 != 0x40) {
          pSVar4 = *(SArray **)(param_2 + 0x600);
        }
        uVar2 = *(ulong *)(param_3 + 0x610);
        pSVar4 = pSVar4 + uVar8 * 0x18;
        *(ulong *)(param_2 + 0x608) = uVar8 + 1;
        *(double *)pSVar4 = dVar12;
        *(double *)(pSVar4 + 8) = dVar13;
        *(double *)(pSVar4 + 0x10) = dVar11;
        uVar8 = *(ulong *)(param_3 + 0x608);
        uVar9 = uVar2;
        if (uVar8 == uVar2) {
          uVar9 = uVar2 * 2;
          if (uVar9 < 0x555555555555556) {
            lVar5 = uVar2 * 0x30;
            uVar8 = lVar5 + 8;
          }
          else {
            lVar5 = -9;
            uVar8 = 0xffffffffffffffff;
          }
          puVar3 = (ulong *)operator_new__(uVar8);
          *puVar3 = uVar9;
          pSVar4 = param_3;
          if (*(long *)(param_3 + 0x610) != 0x40) {
            pSVar4 = *(SArray **)(param_3 + 0x600);
          }
          __memcpy_chk(puVar3 + 1,pSVar4,*(long *)(param_3 + 0x610) * 0x18,lVar5);
          lVar5 = *(long *)(param_3 + 0x600);
          if (lVar5 != 0) {
            operator_delete__((void *)(lVar5 + -8),*(long *)(lVar5 + -8) * 0x18 + 8);
          }
          *(ulong *)(param_3 + 0x610) = uVar9;
          *(ulong **)(param_3 + 0x600) = puVar3 + 1;
          uVar8 = *(ulong *)(param_3 + 0x608);
        }
        pSVar4 = param_3;
        if (uVar9 != 0x40) {
          pSVar4 = *(SArray **)(param_3 + 0x600);
        }
        dVar11 = *(double *)pMVar6;
        dVar12 = *(double *)(pMVar6 + 8);
        pSVar4 = pSVar4 + uVar8 * 0x18;
        *(ulong *)(param_3 + 0x608) = uVar8 + 1;
        *(double *)pSVar4 = dVar11;
        *(double *)(pSVar4 + 8) = dVar12;
        *(double *)(pSVar4 + 0x10) = *(double *)(pMVar6 + 0x10);
      }
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
  }
  return;
}



/* VHACD::Mesh::IsInside(VHACD::Vec3<double> const&) const */

ulong __thiscall VHACD::Mesh::IsInside(Mesh *this,Vec3 *param_1)

{
  Mesh *pMVar1;
  Mesh *pMVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  Mesh *pMVar7;
  Mesh *pMVar8;
  long lVar9;
  bool bVar10;
  undefined8 in_R11;
  ulong uVar11;
  
  bVar10 = *(long *)(this + 0x608) == 0 || *(long *)(this + 0x920) == 0;
  if (bVar10) {
    uVar11 = 0;
  }
  else {
    iVar6 = (int)*(long *)(this + 0x920);
    if (0 < iVar6) {
      dVar3 = *(double *)(param_1 + 0x10);
      dVar4 = *(double *)(param_1 + 8);
      dVar5 = *(double *)param_1;
      lVar9 = 0;
      while( true ) {
        pMVar7 = this + 0x618;
        if (*(long *)(this + 0x928) != 0x40) {
          pMVar7 = *(Mesh **)(this + 0x918);
        }
        pMVar7 = pMVar7 + lVar9;
        pMVar8 = this;
        if (*(long *)(this + 0x610) != 0x40) {
          pMVar8 = *(Mesh **)(this + 0x600);
        }
        pMVar1 = pMVar8 + (long)*(int *)pMVar7 * 0x18;
        pMVar2 = pMVar8 + (long)*(int *)(pMVar7 + 8) * 0x18;
        pMVar8 = pMVar8 + (long)*(int *)(pMVar7 + 4) * 0x18;
        if (((*(double *)(pMVar2 + 8) - dVar4) * (*(double *)pMVar8 - dVar5) -
            (*(double *)pMVar2 - dVar5) * (*(double *)(pMVar8 + 8) - dVar4)) *
            (*(double *)(pMVar1 + 0x10) - dVar3) +
            ((*(double *)(pMVar8 + 0x10) - dVar3) * (*(double *)pMVar2 - dVar5) -
            (*(double *)(pMVar2 + 0x10) - dVar3) * (*(double *)pMVar8 - dVar5)) *
            (*(double *)(pMVar1 + 8) - dVar4) +
            ((*(double *)(pMVar2 + 0x10) - dVar3) * (*(double *)(pMVar8 + 8) - dVar4) -
            (*(double *)(pMVar2 + 8) - dVar4) * (*(double *)(pMVar8 + 0x10) - dVar3)) *
            (*(double *)pMVar1 - dVar5) < 0.0) break;
        lVar9 = lVar9 + 0xc;
        if (lVar9 == ((ulong)(iVar6 - 1) * 3 + 3) * 4) {
          return 1;
        }
      }
      return CONCAT71((int7)((ulong)in_R11 >> 8),bVar10) & 0xffffffff;
    }
    uVar11 = 1;
  }
  return uVar11;
}



/* VHACD::Mesh::ComputeDiagBB() */

double __thiscall VHACD::Mesh::ComputeDiagBB(Mesh *this)

{
  double dVar1;
  double dVar2;
  long lVar3;
  Mesh *pMVar4;
  Mesh *pMVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar3 = *(long *)(this + 0x608);
  dVar6 = 0.0;
  if (lVar3 != 0) {
    pMVar5 = this;
    if (*(long *)(this + 0x610) != 0x40) {
      pMVar5 = *(Mesh **)(this + 0x600);
    }
    dVar6 = *(double *)pMVar5;
    dVar8 = *(double *)(pMVar5 + 8);
    dVar9 = *(double *)(pMVar5 + 0x10);
    dVar10 = dVar9;
    dVar7 = dVar8;
    dVar12 = dVar6;
    if (lVar3 != 1) {
      pMVar4 = pMVar5 + 0x18;
      dVar11 = dVar8;
      do {
        while( true ) {
          dVar1 = *(double *)pMVar4;
          dVar7 = *(double *)(pMVar4 + 8);
          dVar2 = *(double *)(pMVar4 + 0x10);
          if (dVar12 <= dVar1) break;
          dVar12 = dVar1;
          if (dVar8 <= dVar7) goto LAB_0010269e;
LAB_001026dd:
          dVar8 = dVar7;
          dVar7 = dVar11;
          if (dVar9 <= dVar2) goto LAB_001026ac;
LAB_001026e7:
          pMVar4 = pMVar4 + 0x18;
          dVar9 = dVar2;
          dVar11 = dVar7;
          if (pMVar5 + lVar3 * 0x18 == pMVar4) goto LAB_001026f4;
        }
        if (dVar1 <= dVar6) {
          dVar1 = dVar6;
        }
        dVar6 = dVar1;
        if (dVar7 < dVar8) goto LAB_001026dd;
LAB_0010269e:
        if (dVar7 <= dVar11) {
          dVar7 = dVar11;
        }
        if (dVar2 < dVar9) goto LAB_001026e7;
LAB_001026ac:
        if (dVar2 <= dVar10) {
          dVar2 = dVar10;
        }
        dVar10 = dVar2;
        pMVar4 = pMVar4 + 0x18;
        dVar11 = dVar7;
      } while (pMVar5 + lVar3 * 0x18 != pMVar4);
    }
LAB_001026f4:
    dVar6 = SQRT((dVar6 - dVar12) * (dVar6 - dVar12) + (dVar7 - dVar8) * (dVar7 - dVar8) +
                 (dVar10 - dVar9) * (dVar10 - dVar9));
    *(double *)(this + 0x978) = dVar6;
  }
  return dVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::Mesh::SaveVRML2(std::__cxx11::string const&) const */

char __thiscall VHACD::Mesh::SaveVRML2(Mesh *this,string *param_1)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  streambuf *psVar5;
  long in_FS_OFFSET;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined *local_248;
  code *apcStack_240 [3];
  uint auStack_228 [8];
  locale local_208 [48];
  __basic_file<char> local_1d8 [136];
  code *local_150 [27];
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)param_1;
  std::ios_base::ios_base((ios_base *)local_150);
  lVar2 = _init;
  local_70 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_150[0] = (code *)&std::filebuf::vtable;
  psVar5 = (streambuf *)((ofstream *)&local_248 + *(long *)(_init + -0x18));
  local_248 = (undefined *)_init;
  local_78 = 0;
  *(undefined8 *)psVar5 = _filebuf;
  std::ios::init(psVar5);
  local_248 = &std::ofstream::VTT;
  local_150[0] = std::__basic_file<char>::is_open;
  std::filebuf::filebuf((filebuf *)apcStack_240);
  std::ios::init((streambuf *)local_150);
  lVar4 = std::filebuf::open((filebuf *)apcStack_240,uVar1,0x10);
  if (lVar4 == 0) {
    std::ios::clear((ofstream *)&local_248 + *(long *)(local_248 + -0x18),
                    *(uint *)((long)auStack_228 + *(long *)(local_248 + -0x18)) | 4);
  }
  else {
    std::ios::clear((ofstream *)&local_248 + *(long *)(local_248 + -0x18),0);
  }
  cVar3 = std::__basic_file<char>::is_open();
  if (cVar3 != '\0') {
    local_298 = _LC40;
    uStack_290 = _UNK_00103938;
    local_2a8 = _LC40;
    uStack_2a0 = _LC40;
    local_288 = _LC40;
    uStack_280 = _LC40;
    local_278 = _LC42;
    uStack_270 = 0;
    local_268 = (undefined1  [16])0x0;
    local_258 = _LC43;
    uStack_250 = 0;
    cVar3 = std::__basic_file<char>::is_open();
    if (cVar3 != '\0') {
      cVar3 = SaveVRML2(this,(ofstream *)&local_248,(Material *)&local_2a8);
      if (cVar3 != '\0') {
        lVar4 = std::filebuf::close();
        if (lVar4 == 0) {
          std::ios::clear((ofstream *)&local_248 + *(long *)(local_248 + -0x18),
                          *(uint *)((long)auStack_228 + *(long *)(local_248 + -0x18)) | 4);
        }
        goto LAB_0010288c;
      }
    }
    cVar3 = '\0';
  }
LAB_0010288c:
  local_150[0] = std::__basic_file<char>::is_open;
  local_248 = &std::ofstream::VTT;
  apcStack_240[0] = (code *)&std::ofstream::VTT;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file(local_1d8);
  apcStack_240[0] = std::ios_base::~ios_base;
  std::locale::~locale(local_208);
  local_248 = (undefined *)lVar2;
  *(undefined8 *)((long)apcStack_240 + *(long *)(lVar2 + -0x18) + -8) = _filebuf;
  local_150[0] = (code *)&std::filebuf::vtable;
  std::ios_base::~ios_base((ios_base *)local_150);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VHACD::Mesh::SaveVRML2(std::ofstream&, VHACD::Material const&) const */

undefined8 __thiscall VHACD::Mesh::SaveVRML2(Mesh *this,ofstream *param_1,Material *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = std::__basic_file<char>::is_open();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = SaveVRML2(this,param_1,param_2);
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VHACD::Mesh::SaveOFF(std::__cxx11::string const&) const */

uint __thiscall VHACD::Mesh::SaveOFF(Mesh *this,string *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  ostream *poVar6;
  long *plVar7;
  Mesh *pMVar8;
  streambuf *psVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined *local_248;
  code *apcStack_240 [3];
  uint auStack_228 [8];
  locale local_208 [48];
  __basic_file<char> local_1d8 [128];
  long lStack_158;
  code *local_150 [27];
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  uVar1 = *(undefined8 *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  std::ios_base::ios_base((ios_base *)local_150);
  local_150[0] = (code *)&std::filebuf::vtable;
  local_70 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_248 = _init;
  local_78 = 0;
  psVar9 = (streambuf *)((ostream *)&local_248 + *(long *)(_init + -0x18));
  *(undefined8 *)psVar9 = _filebuf;
  std::ios::init(psVar9);
  local_248 = &std::ofstream::VTT;
  local_150[0] = std::__basic_file<char>::is_open;
  std::filebuf::filebuf((filebuf *)apcStack_240);
  std::ios::init((streambuf *)local_150);
  lVar5 = std::filebuf::open((filebuf *)apcStack_240,uVar1,0x10);
  if (lVar5 == 0) {
    std::ios::clear((ostream *)&local_248 + *(long *)(local_248 + -0x18),
                    *(uint *)((long)auStack_228 + *(long *)(local_248 + -0x18)) | 4);
  }
  else {
    std::ios::clear((ostream *)&local_248 + *(long *)(local_248 + -0x18),0);
  }
  uVar4 = std::__basic_file<char>::is_open();
  if ((char)uVar4 == '\0') {
LAB_00102b8b:
    local_150[0] = std::__basic_file<char>::is_open;
    local_248 = &std::ofstream::VTT;
    apcStack_240[0] = (code *)&std::ofstream::VTT;
    std::filebuf::close();
    std::__basic_file<char>::~__basic_file(local_1d8);
    apcStack_240[0] = std::ios_base::~ios_base;
    std::locale::~locale(local_208);
    local_248 = _init;
    *(undefined8 *)((long)apcStack_240 + *(long *)(_init + -0x18) + -8) = _filebuf;
    local_150[0] = (code *)&std::filebuf::vtable;
    std::ios_base::~ios_base((ios_base *)local_150);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar4;
    }
  }
  else {
    lVar5 = *(long *)(this + 0x608);
    lVar2 = *(long *)(this + 0x920);
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_248,"OFF",3);
    plVar3 = *(long **)((long)&lStack_158 + *(long *)(local_248 + -0x18));
    if (plVar3 != (long *)0x0) {
      if ((char)plVar3[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar3 + 0x30))(plVar3,10);
        }
      }
      std::ostream::put((char)(ostream *)&local_248);
      std::ostream::flush();
      poVar6 = std::ostream::_M_insert<unsigned_long>((ulong)&local_248);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6," ",1);
      poVar6 = std::ostream::_M_insert<unsigned_long>((ulong)poVar6);
      std::__ostream_insert<char,std::char_traits<char>>(poVar6," ",1);
      plVar7 = (long *)std::ostream::operator<<(poVar6,0);
      plVar3 = *(long **)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0xf0);
      if (plVar3 != (long *)0x0) {
        if ((char)plVar3[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
            (**(code **)(*plVar3 + 0x30))(plVar3,10);
          }
        }
        lVar10 = 0;
        std::ostream::put((char)plVar7);
        std::ostream::flush();
        if (lVar5 != 0) {
          do {
            pMVar8 = this;
            if (*(long *)(this + 0x610) != 0x40) {
              pMVar8 = *(Mesh **)(this + 0x600);
            }
            poVar6 = std::ostream::_M_insert<double>(*(double *)(pMVar8 + lVar10 * 0x18));
            std::__ostream_insert<char,std::char_traits<char>>(poVar6," ",1);
            pMVar8 = this;
            if (*(long *)(this + 0x610) != 0x40) {
              pMVar8 = *(Mesh **)(this + 0x600);
            }
            poVar6 = std::ostream::_M_insert<double>(*(double *)(pMVar8 + lVar10 * 0x18 + 8));
            std::__ostream_insert<char,std::char_traits<char>>(poVar6," ",1);
            pMVar8 = this;
            if (*(long *)(this + 0x610) != 0x40) {
              pMVar8 = *(Mesh **)(this + 0x600);
            }
            poVar6 = std::ostream::_M_insert<double>(*(double *)(pMVar8 + lVar10 * 0x18 + 0x10));
            plVar3 = *(long **)(poVar6 + *(long *)(*(long *)poVar6 + -0x18) + 0xf0);
            if (plVar3 == (long *)0x0) goto LAB_00103085;
            if ((char)plVar3[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
                (**(code **)(*plVar3 + 0x30))(plVar3,10);
              }
            }
            lVar10 = lVar10 + 1;
            std::ostream::put((char)poVar6);
            std::ostream::flush();
          } while (lVar5 != lVar10);
          uVar4 = uVar4 & 0xff;
        }
        lVar5 = 0;
        if (lVar2 != 0) {
          do {
            std::__ostream_insert<char,std::char_traits<char>>((ostream *)&local_248,"3 ",2);
            pMVar8 = this + 0x618;
            if (*(long *)(this + 0x928) != 0x40) {
              pMVar8 = *(Mesh **)(this + 0x918);
            }
            poVar6 = (ostream *)
                     std::ostream::operator<<((ostream *)&local_248,*(int *)(pMVar8 + lVar5 * 0xc));
            std::__ostream_insert<char,std::char_traits<char>>(poVar6," ",1);
            pMVar8 = this + 0x618;
            if (*(long *)(this + 0x928) != 0x40) {
              pMVar8 = *(Mesh **)(this + 0x918);
            }
            poVar6 = (ostream *)std::ostream::operator<<(poVar6,*(int *)(pMVar8 + lVar5 * 0xc + 4));
            std::__ostream_insert<char,std::char_traits<char>>(poVar6," ",1);
            pMVar8 = this + 0x618;
            if (*(long *)(this + 0x928) != 0x40) {
              pMVar8 = *(Mesh **)(this + 0x918);
            }
            plVar7 = (long *)std::ostream::operator<<(poVar6,*(int *)(pMVar8 + lVar5 * 0xc + 8));
            plVar3 = *(long **)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0xf0);
            if (plVar3 == (long *)0x0) goto LAB_00103085;
            if ((char)plVar3[7] == '\0') {
              std::ctype<char>::_M_widen_init();
              if (*(code **)(*plVar3 + 0x30) != std::ctype<char>::do_widen) {
                (**(code **)(*plVar3 + 0x30))(plVar3,10);
              }
            }
            lVar5 = lVar5 + 1;
            std::ostream::put((char)plVar7);
            std::ostream::flush();
          } while (lVar5 != lVar2);
          uVar4 = uVar4 & 0xff;
        }
        lVar5 = std::filebuf::close();
        if (lVar5 == 0) {
          std::ios::clear((ostream *)&local_248 + *(long *)(local_248 + -0x18),
                          *(uint *)((long)auStack_228 + *(long *)(local_248 + -0x18)) | 4);
        }
        goto LAB_00102b8b;
      }
    }
LAB_00103085:
    std::__throw_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* VHACD::Mesh::LoadOFF(std::__cxx11::string const&, bool) */

undefined8 __thiscall VHACD::Mesh::LoadOFF(Mesh *this,string *param_1,bool param_2)

{
  long *plVar1;
  int iVar2;
  FILE *__stream;
  size_t sVar3;
  ulong *puVar4;
  undefined8 uVar5;
  Mesh *pMVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_4d8;
  int local_4b0;
  int local_4ac [2];
  float local_4a4;
  float local_4a0;
  float local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  int local_48c;
  long *local_488;
  size_t local_480;
  long local_478 [2];
  long *local_468;
  size_t local_460;
  long local_458 [2];
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = fopen64(*(char **)param_1,"r");
  if (__stream != (FILE *)0x0) {
    local_488 = local_478;
    std::__cxx11::string::_M_construct<char_const*>(&local_488,&_LC46);
    __isoc23_fscanf(__stream,&_LC49,local_448);
    local_468 = local_458;
    sVar3 = strlen(local_448);
    std::__cxx11::string::_M_construct<char_const*>(&local_468,local_448,local_448 + sVar3);
    plVar1 = local_468;
    if (local_460 == local_480) {
      if ((local_460 == 0) || (iVar2 = memcmp(local_468,local_488,local_460), iVar2 == 0)) {
        if (plVar1 != local_458) {
          operator_delete(plVar1,local_458[0] + 1);
        }
        local_4b0 = 0;
        local_4ac[0] = 0;
        local_4ac[1] = 0;
        __isoc23_fscanf(__stream,&_LC50,&local_4b0);
        __isoc23_fscanf(__stream,&_LC50,local_4ac);
        __isoc23_fscanf(__stream,&_LC50,local_4ac + 1);
        uVar8 = (ulong)local_4b0;
        if (*(ulong *)(this + 0x610) < uVar8) {
          if (uVar8 < 0x555555555555556) {
            lVar11 = uVar8 * 0x18;
            uVar7 = lVar11 + 8;
          }
          else {
            lVar11 = -9;
            uVar7 = 0xffffffffffffffff;
          }
          puVar4 = (ulong *)operator_new__(uVar7);
          *puVar4 = uVar8;
          pMVar6 = this;
          if (*(long *)(this + 0x610) != 0x40) {
            pMVar6 = *(Mesh **)(this + 0x600);
          }
          __memcpy_chk(puVar4 + 1,pMVar6,*(long *)(this + 0x608) * 0x18,lVar11);
          lVar11 = *(long *)(this + 0x600);
          if (lVar11 != 0) {
            operator_delete__((void *)(lVar11 + -8),*(long *)(lVar11 + -8) * 0x18 + 8);
          }
          *(ulong **)(this + 0x600) = puVar4 + 1;
          *(ulong *)(this + 0x610) = uVar8;
        }
        *(ulong *)(this + 0x608) = uVar8;
        uVar8 = (ulong)local_4ac[0];
        if (*(ulong *)(this + 0x928) < uVar8) {
          if (uVar8 < 0xaaaaaaaaaaaaaab) {
            lVar11 = uVar8 * 0xc;
            uVar7 = lVar11 + 8;
          }
          else {
            lVar11 = -9;
            uVar7 = 0xffffffffffffffff;
          }
          puVar4 = (ulong *)operator_new__(uVar7);
          pMVar6 = this + 0x618;
          *puVar4 = uVar8;
          if (*(long *)(this + 0x928) != 0x40) {
            pMVar6 = *(Mesh **)(this + 0x918);
          }
          __memcpy_chk(puVar4 + 1,pMVar6,*(long *)(this + 0x920) * 0xc,lVar11);
          lVar11 = *(long *)(this + 0x918);
          if (lVar11 != 0) {
            operator_delete__((void *)(lVar11 + -8),*(long *)(lVar11 + -8) * 0xc + 8);
          }
          *(ulong **)(this + 0x918) = puVar4 + 1;
          *(ulong *)(this + 0x928) = uVar8;
        }
        *(ulong *)(this + 0x920) = uVar8;
        if (0 < local_4b0) {
          lVar11 = 0;
          do {
            __isoc23_fscanf(__stream,&_LC51,&local_4a4);
            __isoc23_fscanf(__stream,&_LC51,&local_4a0);
            __isoc23_fscanf(__stream,&_LC51,&local_49c);
            pMVar6 = this;
            if (*(long *)(this + 0x610) != 0x40) {
              pMVar6 = *(Mesh **)(this + 0x600);
            }
            lVar9 = lVar11 + 1;
            pMVar6 = pMVar6 + lVar11 * 0x18;
            *(double *)pMVar6 = (double)local_4a4;
            *(double *)(pMVar6 + 8) = (double)local_4a0;
            *(double *)(pMVar6 + 0x10) = (double)local_49c;
            lVar11 = lVar9;
          } while ((int)lVar9 < local_4b0);
        }
        local_4d8 = 0;
        iVar2 = 0;
        if (0 < local_4ac[0]) {
          do {
            while( true ) {
              while (__isoc23_fscanf(__stream,&_LC50,&local_48c), local_48c != 3) {
                iVar10 = 0;
                if (0 < local_48c) {
                  do {
                    __isoc23_fscanf(__stream,&_LC50,&local_48c);
                    iVar10 = iVar10 + 1;
                  } while (iVar10 < local_48c);
                }
                local_4d8 = local_4d8 + 0xc;
                iVar2 = iVar2 + 1;
                if (local_4ac[0] <= iVar2) goto LAB_001034db;
              }
              __isoc23_fscanf(__stream,&_LC50,&local_498);
              __isoc23_fscanf(__stream,&_LC50,&local_494);
              __isoc23_fscanf(__stream,&_LC50,&local_490);
              pMVar6 = this + 0x618;
              if (*(long *)(this + 0x928) != 0x40) {
                pMVar6 = *(Mesh **)(this + 0x918);
              }
              pMVar6 = pMVar6 + local_4d8;
              *(undefined4 *)pMVar6 = local_498;
              if (!param_2) break;
              local_4d8 = local_4d8 + 0xc;
              iVar2 = iVar2 + 1;
              *(undefined4 *)(pMVar6 + 4) = local_490;
              *(undefined4 *)(pMVar6 + 8) = local_494;
              if (local_4ac[0] <= iVar2) goto LAB_001034db;
            }
            local_4d8 = local_4d8 + 0xc;
            iVar2 = iVar2 + 1;
            *(undefined4 *)(pMVar6 + 4) = local_494;
            *(undefined4 *)(pMVar6 + 8) = local_490;
          } while (iVar2 < local_4ac[0]);
        }
LAB_001034db:
        fclose(__stream);
        if (local_488 != local_478) {
          operator_delete(local_488,local_478[0] + 1);
        }
        uVar5 = 1;
        goto LAB_00103505;
      }
      if (plVar1 != local_458) {
        operator_delete(plVar1,local_458[0] + 1);
      }
    }
    else if (local_468 != local_458) {
      operator_delete(local_468,local_458[0] + 1);
    }
    fclose(__stream);
    if (local_488 != local_478) {
      operator_delete(local_488,local_478[0] + 1);
    }
  }
  uVar5 = 0;
LAB_00103505:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
}


