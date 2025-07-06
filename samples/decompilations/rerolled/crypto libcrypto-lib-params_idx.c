uint ossl_param_find_pidx(undefined1 *param_1) {
   char cVar1;
   int iVar2;
   uint uVar3;
   switch (*param_1) {
      case 0x61:
    cVar1 = param_1[1];
    if (cVar1 == 'd') {
      uVar3 = 0x70;
      if ((param_1[2] != '\0') && (uVar3 = 0xffffffff, param_1[2] == 'd')) {
        iVar2 = strcmp("itional-random",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x147;
      }
    }
    else if (cVar1 < 'e') {
      uVar3 = 0xb7;
      if ((cVar1 != '\0') && (uVar3 = 0xffffffff, cVar1 == 'c')) {
        iVar2 = strcmp("vp-info",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0x92;
      }
    }
    else if (cVar1 == 'e') {
      if (((param_1[2] == 'a') && (param_1[3] == 'd')) && (param_1[4] == '\0')) {
        uVar3 = 0x22;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0xffffffff;
      if (cVar1 == 'l') {
        if (param_1[2] == 'g') {
          cVar1 = param_1[3];
          if (cVar1 == 'i') {
            iVar2 = strcmp("d-absent",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x4e;
          }
          else if (cVar1 == 'o') {
            if (param_1[4] == 'r') {
              if (param_1[5] == 'i') {
                if (param_1[6] == 't') {
                  if (param_1[7] == 'h') {
                    if (param_1[8] == 'm') {
                      if (param_1[9] == '-') {
                        if (param_1[10] == 'i') {
                          if (param_1[0xb] == 'd') {
                            if (param_1[0xc] == '\0') {
                              uVar3 = 0;
                            }
                            else {
                              uVar3 = 0xffffffff;
                              if (param_1[0xc] == '-') {
                                iVar2 = strcmp("params",param_1 + 0xd);
                                uVar3 = -(uint)(iVar2 != 0) | 1;
                              }
                            }
                          }
                          else {
                            uVar3 = 0xffffffff;
                          }
                        }
                        else {
                          uVar3 = 0xffffffff;
                        }
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
            if (cVar1 == '_') {
              iVar2 = strcmp("id_param",param_1 + 4);
              uVar3 = -(uint)(iVar2 != 0) | 0x2c;
            }
          }
        }
        else if (param_1[2] == 'i') {
          if (((param_1[3] != 'a') || (param_1[4] != 's')) || (uVar3 = 0x155, param_1[5] != '\0')) {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
    }
    break;
      case 0x62:
    cVar1 = param_1[1];
    if (cVar1 == 'i') {
      if (((param_1[2] == 't') && (param_1[3] == 's')) && (param_1[4] == '\0')) {
        uVar3 = 0xb0;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else if (cVar1 < 'j') {
      uVar3 = 0xb8;
      if ((cVar1 != '\0') && (uVar3 = 0xffffffff, cVar1 == 'a')) {
        iVar2 = strcmp("sis-type",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0xbe;
      }
    }
    else if (cVar1 == 'l') {
      if (param_1[2] == 'o') {
        if (param_1[3] == 'c') {
          if (param_1[4] == 'k') {
            cVar1 = param_1[5];
            if (cVar1 == '_') {
              iVar2 = strcmp("padding",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0x9a;
            }
            else if (cVar1 == 's') {
              iVar2 = strcmp("ize",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0x2d;
            }
            else {
              uVar3 = 0xffffffff;
              if (cVar1 == '-') {
                iVar2 = strcmp("size",param_1 + 6);
                uVar3 = -(uint)(iVar2 != 0) | 0xa4;
              }
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0xffffffff;
      if (cVar1 == 'u') {
        iVar2 = strcmp("ildinfo",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0x11c;
      }
    }
    break;
      case 99:
    if (param_1[1] == '-') {
      iVar2 = strcmp("rounds",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0xa6;
    }
    else {
      switch(param_1[1]) {
      case 0x65:
        iVar2 = strcmp("kalg",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0x74;
        break;
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
        uVar3 = 0xffffffff;
        break;
      case 0x69:
        iVar2 = strcmp("pher",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 2;
        break;
      case 0x6f:
        if (param_1[2] == 'f') {
          iVar2 = strcmp("actor",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0xbf;
        }
        else if (param_1[2] == 'n') {
          if (param_1[3] == 's') {
            iVar2 = strcmp("tant",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x75;
          }
          else if (param_1[3] == 't') {
            iVar2 = strcmp("ext-string",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x148;
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      case 0x74:
        if (param_1[2] == 's') {
          uVar3 = 0x2e;
          if ((param_1[3] != '\0') && (uVar3 = 0xffffffff, param_1[3] == '_')) {
            iVar2 = strcmp("mode",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x2f;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      case 0x75:
        if (param_1[2] == 's') {
          if (param_1[3] == 't') {
            if (param_1[4] == 'o') {
              if (param_1[5] == 'm') {
                uVar3 = 0xa5;
                if (((param_1[6] != '\0') && (uVar3 = 0xffffffff, param_1[6] == '-')) &&
                   ((param_1[7] != 'i' ||
                    ((param_1[8] != 'v' || (uVar3 = 0x30, param_1[9] != '\0')))))) {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      default:
        uVar3 = 0xffffffff;
      }
    }
    break;
      case 100:
    cVar1 = param_1[1];
    if (cVar1 < 't') {
      if (cVar1 < 'a') {
        uVar3 = 0xf5;
        if ((cVar1 != '\0') && (uVar3 = 0xffffffff, cVar1 == '-')) {
          iVar2 = strcmp("rounds",param_1 + 2);
          uVar3 = -(uint)(iVar2 != 0) | 0xa9;
        }
      }
      else {
        switch(cVar1) {
        case 'a':
          if (param_1[2] == 't') {
            if (param_1[3] == 'a') {
              uVar3 = 0x76;
              if ((param_1[4] != '\0') && (uVar3 = 0xffffffff, param_1[4] == '-')) {
                if (param_1[5] == 's') {
                  iVar2 = strcmp("tructure",param_1 + 6);
                  uVar3 = -(uint)(iVar2 != 0) | 0xab;
                }
                else if (param_1[5] == 't') {
                  iVar2 = strcmp("ype",param_1 + 6);
                  uVar3 = -(uint)(iVar2 != 0) | 0xac;
                }
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
          break;
        default:
          uVar3 = 0xffffffff;
          break;
        case 'e':
          cVar1 = param_1[2];
          if (cVar1 == 's') {
            iVar2 = strcmp("c",param_1 + 3);
            uVar3 = -(uint)(iVar2 != 0) | 0xad;
          }
          else if (cVar1 < 't') {
            if (cVar1 == 'c') {
              if (param_1[3] == 'o') {
                iVar2 = strcmp("ded-from-explicit",param_1 + 4);
                uVar3 = -(uint)(iVar2 != 0) | 0xc0;
              }
              else if (param_1[3] == 'r') {
                iVar2 = strcmp("ypt-only",param_1 + 4);
                uVar3 = -(uint)(iVar2 != 0) | 0x31;
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else if (cVar1 == 'f') {
              iVar2 = strcmp("ault-digest",param_1 + 3);
              uVar3 = -(uint)(iVar2 != 0) | 0xb1;
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else if (cVar1 == 't') {
            iVar2 = strcmp("erministic",param_1 + 3);
            uVar3 = -(uint)(iVar2 != 0) | 0x149;
          }
          else {
            uVar3 = 0xffffffff;
          }
          break;
        case 'h':
          iVar2 = strcmp("kem-ikm",param_1 + 2);
          uVar3 = -(uint)(iVar2 != 0) | 0xb2;
          break;
        case 'i':
          if (param_1[2] == 'g') {
            if (param_1[3] == 'e') {
              if (param_1[4] == 's') {
                if (param_1[5] == 't') {
                  uVar3 = 3;
                  if ((param_1[6] != '\0') && (uVar3 = 0xffffffff, param_1[6] == '-')) {
                    switch(param_1[7]) {
                    case 99:
                      iVar2 = strcmp("heck",param_1 + 8);
                      uVar3 = -(uint)(iVar2 != 0) | 0xd6;
                      break;
                    default:
                      uVar3 = 0xffffffff;
                      break;
                    case 0x6e:
                      iVar2 = strcmp("oinit",param_1 + 8);
                      uVar3 = -(uint)(iVar2 != 0) | 0xa7;
                      break;
                    case 0x6f:
                      iVar2 = strcmp("neshot",param_1 + 8);
                      uVar3 = -(uint)(iVar2 != 0) | 0xa8;
                      break;
                    case 0x70:
                      iVar2 = strcmp("rops",param_1 + 8);
                      uVar3 = -(uint)(iVar2 != 0) | 9;
                      break;
                    case 0x73:
                      iVar2 = strcmp("ize",param_1 + 8);
                      uVar3 = -(uint)(iVar2 != 0) | 0xb5;
                    }
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else if (param_1[2] == 's') {
            iVar2 = strcmp("tid",param_1 + 3);
            uVar3 = -(uint)(iVar2 != 0) | 0xb6;
          }
          else {
            uVar3 = 0xffffffff;
          }
          break;
        case 'r':
          iVar2 = strcmp("bg-no-trunc-md",param_1 + 2);
          uVar3 = -(uint)(iVar2 != 0) | 0x120;
          break;
        case 's':
          iVar2 = strcmp("a-sign-disabled",param_1 + 2);
          uVar3 = -(uint)(iVar2 != 0) | 0x121;
        }
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
    break;
      case 0x65:
    if (param_1[1] == '\0') {
      uVar3 = 0xf7;
    }
    else {
      switch(param_1[1]) {
      case 0x61:
        iVar2 = strcmp("rly_clean",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0x77;
        break;
      case 0x62:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
        uVar3 = 0xffffffff;
        break;
      case 99:
        if (param_1[2] == 'd') {
          if (param_1[3] == 'h') {
            if (param_1[4] == '-') {
              if (param_1[5] == 'c') {
                if (param_1[6] == 'o') {
                  if (param_1[7] == 'f') {
                    if (param_1[8] == 'a') {
                      if (param_1[9] == 'c') {
                        if (param_1[10] == 't') {
                          if (param_1[0xb] == 'o') {
                            if (param_1[0xc] == 'r') {
                              if (param_1[0xd] == '-') {
                                if (param_1[0xe] == 'c') {
                                  iVar2 = strcmp("heck",param_1 + 0xf);
                                  uVar3 = -(uint)(iVar2 != 0) | 0x122;
                                }
                                else if (param_1[0xe] == 'm') {
                                  iVar2 = strcmp("ode",param_1 + 0xf);
                                  uVar3 = -(uint)(iVar2 != 0) | 0x67;
                                }
                                else {
                                  uVar3 = 0xffffffff;
                                }
                              }
                              else {
                                uVar3 = 0xffffffff;
                              }
                            }
                            else {
                              uVar3 = 0xffffffff;
                            }
                          }
                          else {
                            uVar3 = 0xffffffff;
                          }
                        }
                        else {
                          uVar3 = 0xffffffff;
                        }
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      case 0x6d:
        iVar2 = strcmp("s_check",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0x78;
        break;
      case 0x6e:
        cVar1 = param_1[2];
        if (cVar1 == 'g') {
          iVar2 = strcmp("ine",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 4;
        }
        else if (cVar1 == 't') {
          if (param_1[3] == 'r') {
            if (param_1[4] == 'o') {
              if (param_1[5] == 'p') {
                if (param_1[6] == 'y') {
                  uVar3 = 0x79;
                  if ((param_1[7] != '\0') && (uVar3 = 0xffffffff, param_1[7] == '_')) {
                    iVar2 = strcmp("required",param_1 + 8);
                    uVar3 = -(uint)(iVar2 != 0) | 0x55;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
          if (cVar1 == 'c') {
            if (param_1[3] == 'o') {
              if (param_1[4] == 'd') {
                if (param_1[5] == 'e') {
                  iVar2 = strcmp("d-pub-key",param_1 + 6);
                  uVar3 = -(uint)(iVar2 != 0) | 0xca;
                }
                else if (param_1[5] == 'i') {
                  iVar2 = strcmp("ng",param_1 + 6);
                  uVar3 = -(uint)(iVar2 != 0) | 0xc1;
                }
              }
            }
            else if ((((param_1[3] == 'r') && (param_1[4] == 'y')) && (param_1[5] == 'p')) &&
                    ((param_1[6] == 't' && (param_1[7] == '-')))) {
              if (param_1[8] == 'c') {
                iVar2 = strcmp("heck",param_1 + 9);
                uVar3 = -(uint)(iVar2 != 0) | 0x32;
              }
              else if (param_1[8] == 'l') {
                iVar2 = strcmp("evel",param_1 + 9);
                uVar3 = -(uint)(iVar2 != 0) | 0x65;
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
          }
        }
        break;
      case 0x78:
        iVar2 = strcmp("pect",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0x156;
        break;
      default:
        uVar3 = 0xffffffff;
      }
    }
    break;
      case 0x66:
    if (param_1[1] == 'i') {
      cVar1 = param_1[2];
      if (cVar1 == 'n') {
        iVar2 = strcmp("gerprint",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x157;
      }
      else if (cVar1 == 'p') {
        iVar2 = strcmp("s-indicator",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 5;
      }
      else {
        uVar3 = 0xffffffff;
        if (cVar1 == 'e') {
          iVar2 = strcmp("ld-type",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0xc2;
        }
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
    break;
      case 0x67:
    cVar1 = param_1[1];
    if (cVar1 == 'i') {
      iVar2 = strcmp("ndex",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0xcd;
    }
    else if (cVar1 < 'j') {
      uVar3 = 0xcc;
      if ((cVar1 != '\0') && (uVar3 = 0xffffffff, cVar1 == 'e')) {
        if (param_1[2] == 'n') {
          if (param_1[3] == 'e') {
            if (param_1[4] == 'r') {
              if (param_1[5] == 'a') {
                if (param_1[6] == 't') {
                  if (param_1[7] == 'e') {
                    uVar3 = (-(uint)(param_1[8] == '\0') & 0x142) - 1;
                  }
                  else if (param_1[7] == 'o') {
                    if ((param_1[8] == 'r') && (param_1[9] == '\0')) {
                      uVar3 = 0xc3;
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
    }
    else {
      uVar3 = 0xffffffff;
      if (cVar1 == 'r') {
        if (param_1[2] == 'o') {
          if (param_1[3] == 'u') {
            if (param_1[4] == 'p') {
              uVar3 = 0xd9;
              if ((param_1[5] != '\0') && (uVar3 = 0xffffffff, param_1[5] == '-')) {
                iVar2 = strcmp("check",param_1 + 6);
                uVar3 = -(uint)(iVar2 != 0) | 0xc4;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
    }
    break;
      case 0x68:
    switch(param_1[1]) {
    case 0x61:
      iVar2 = strcmp("s-randkey",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0x33;
      break;
    default:
      uVar3 = 0xffffffff;
      break;
    case 0x69:
      iVar2 = strcmp("ndex",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0xce;
      break;
    case 0x6b:
      if (param_1[2] == 'd') {
        if (param_1[3] == 'f') {
          if (param_1[4] == '-') {
            if (param_1[5] == 'd') {
              iVar2 = strcmp("igest-check",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0x123;
            }
            else if (param_1[5] == 'k') {
              iVar2 = strcmp("ey-check",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0x124;
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    case 0x6d:
      iVar2 = strcmp("ac-key-check",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0x125;
      break;
    case 0x73:
      iVar2 = strcmp("_padding",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0x9b;
    }
    break;
      case 0x69:
    switch(param_1[1]) {
    case 100:
      uVar3 = (-(uint)(param_1[2] == '\0') & 0x85) - 1;
      break;
    default:
      uVar3 = 0xffffffff;
      break;
    case 0x6b:
      if (((param_1[2] == 'm') && (param_1[3] == 'e')) && (param_1[4] == '\0')) {
        uVar3 = 0x98;
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    case 0x6d:
      iVar2 = strcmp("plicit-rejection",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 8;
      break;
    case 0x6e:
      cVar1 = param_1[2];
      if (cVar1 == 'p') {
        iVar2 = strcmp("ut-type",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0xae;
      }
      else if (cVar1 < 'q') {
        if (cVar1 == 'c') {
          iVar2 = strcmp("lude-public",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0xc5;
        }
        else if (cVar1 == 'f') {
          if ((param_1[3] != 'o') || (uVar3 = 0x7b, param_1[4] != '\0')) {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else if (cVar1 == 's') {
        iVar2 = strcmp("tance",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x14c;
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    case 0x74:
      if (param_1[2] == 'e') {
        if (param_1[3] == 'r') {
          uVar3 = 0x7c;
          if ((param_1[4] != '\0') && (uVar3 = 0xffffffff, param_1[4] == 'a')) {
            iVar2 = strcmp("tion",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0x6e;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    case 0x76:
      cVar1 = param_1[2];
      if (cVar1 == '-') {
        iVar2 = strcmp("generated",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x23;
      }
      else if (cVar1 == 'l') {
        if (((param_1[3] != 'e') || (param_1[4] != 'n')) || (uVar3 = 0x35, param_1[5] != '\0')) {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = (-(uint)(cVar1 == '\0') & 0x35) - 1;
      }
    }
    break;
      case 0x6a:
    uVar3 = (-(uint)(param_1[1] == '\0') & 0xcc) - 1;
    break;
      case 0x6b:
    switch(param_1[1]) {
    case 0x31:
      uVar3 = (-(uint)(param_1[2] == '\0') & 0xbb) - 1;
      break;
    case 0x32:
      uVar3 = (-(uint)(param_1[2] == '\0') & 0xbc) - 1;
      break;
    case 0x33:
      uVar3 = (-(uint)(param_1[2] == '\0') & 0xbd) - 1;
      break;
    default:
      uVar3 = 0xffffffff;
      break;
    case 0x61:
      if ((param_1[2] == 't') && (param_1[3] == '\0')) {
        uVar3 = 0x14d;
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    case 0x62:
      iVar2 = strcmp("kdf-key-check",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0x126;
      break;
    case 100:
      if (param_1[2] == 'f') {
        if (param_1[3] == '-') {
          cVar1 = param_1[4];
          if (cVar1 == 't') {
            iVar2 = strcmp("ype",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0x6b;
          }
          else if (cVar1 < 'u') {
            if (cVar1 == 'd') {
              if (param_1[5] == 'i') {
                if (param_1[6] == 'g') {
                  if (param_1[7] == 'e') {
                    if (param_1[8] == 's') {
                      if (param_1[9] == 't') {
                        if (param_1[10] == '\0') {
                          uVar3 = 0x68;
                        }
                        else {
                          uVar3 = 0xffffffff;
                          if (param_1[10] == '-') {
                            iVar2 = strcmp("props",param_1 + 0xb);
                            uVar3 = -(uint)(iVar2 != 0) | 0x69;
                          }
                        }
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else if (cVar1 == 'o') {
              iVar2 = strcmp("utlen",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0x6a;
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else if (cVar1 == 'u') {
            iVar2 = strcmp("km",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0x6c;
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    case 0x65:
      if (param_1[2] == 'y') {
        cVar1 = param_1[3];
        if (cVar1 == 'b') {
          iVar2 = strcmp("its",param_1 + 4);
          uVar3 = -(uint)(iVar2 != 0) | 0x3c;
        }
        else if (cVar1 < 'c') {
          uVar3 = 0x80;
          if ((cVar1 != '\0') && (uVar3 = 0xffffffff, cVar1 == '-')) {
            if (param_1[4] == 'c') {
              iVar2 = strcmp("heck",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0xd7;
            }
            else if (param_1[4] == 'l') {
              iVar2 = strcmp("ength",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0x153;
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
        }
        else {
          uVar3 = 0xffffffff;
          if (cVar1 == 'l') {
            iVar2 = strcmp("en",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x36;
          }
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    case 0x6d:
      iVar2 = strcmp("ac-key-check",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0x127;
    }
    break;
      case 0x6c:
    if (param_1[1] == 'a') {
      if (param_1[2] == 'b') {
        if (((param_1[3] == 'e') && (param_1[4] == 'l')) && (param_1[5] == '\0')) {
          uVar3 = 0x81;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else if (param_1[2] == 'n') {
        if (((param_1[3] == 'e') && (param_1[4] == 's')) && (param_1[5] == '\0')) {
          uVar3 = 0x71;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
    break;
      case 0x6d:
    if (param_1[1] == '\0') {
      uVar3 = 0xb9;
    }
    else {
      switch(param_1[1]) {
      case 0x61:
        cVar1 = param_1[2];
        if (cVar1 == 'n') {
          iVar2 = strcmp("datory-digest",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0xda;
        }
        else if (cVar1 == 'x') {
          cVar1 = param_1[3];
          if (cVar1 == 'i') {
            iVar2 = strcmp("um_length",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x58;
          }
          else if (cVar1 < 'j') {
            if (cVar1 == '-') {
              iVar2 = strcmp("size",param_1 + 4);
              uVar3 = -(uint)(iVar2 != 0) | 0xdc;
            }
            else if (cVar1 == '_') {
              switch(param_1[4]) {
              case 0x61:
                iVar2 = strcmp("dinlen",param_1 + 5);
                uVar3 = -(uint)(iVar2 != 0) | 0x56;
                break;
              default:
                uVar3 = 0xffffffff;
                break;
              case 0x65:
                if (param_1[5] == 'a') {
                  iVar2 = strcmp("rly_data",param_1 + 6);
                  uVar3 = -(uint)(iVar2 != 0) | 0x9c;
                }
                else if (param_1[5] == 'n') {
                  iVar2 = strcmp("tropylen",param_1 + 6);
                  uVar3 = -(uint)(iVar2 != 0) | 0x57;
                }
                else {
                  uVar3 = 0xffffffff;
                }
                break;
              case 0x66:
                iVar2 = strcmp("rag_len",param_1 + 5);
                uVar3 = -(uint)(iVar2 != 0) | 0x9d;
                break;
              case 0x6e:
                iVar2 = strcmp("oncelen",param_1 + 5);
                uVar3 = -(uint)(iVar2 != 0) | 0x59;
                break;
              case 0x70:
                iVar2 = strcmp("erslen",param_1 + 5);
                uVar3 = -(uint)(iVar2 != 0) | 0x5a;
                break;
              case 0x72:
                iVar2 = strcmp("equest",param_1 + 5);
                uVar3 = -(uint)(iVar2 != 0) | 0x142;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else if (cVar1 == 'm') {
            iVar2 = strcmp("em_bytes",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x88;
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
          if (cVar1 == 'c') {
            cVar1 = param_1[3];
            if (cVar1 == 'k') {
              iVar2 = strcmp("ey",param_1 + 4);
              uVar3 = -(uint)(iVar2 != 0) | 0x24;
            }
            else if (cVar1 == 'l') {
              iVar2 = strcmp("en",param_1 + 4);
              uVar3 = -(uint)(iVar2 != 0) | 0x82;
            }
            else {
              uVar3 = (-(uint)(cVar1 == '\0') & 7) - 1;
            }
          }
        }
        break;
      case 0x62:
      case 99:
      case 100:
      case 0x66:
      case 0x68:
      case 0x6a:
      case 0x6b:
      case 0x6d:
      case 0x6e:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
        uVar3 = 0xffffffff;
        break;
      case 0x65:
        if (param_1[2] == 'm') {
          iVar2 = strcmp("cost",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0x72;
        }
        else if (param_1[2] == 's') {
          iVar2 = strcmp("sage-encoding",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0x14e;
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      case 0x67:
        if (param_1[2] == 'f') {
          uVar3 = 0xdb;
          if (((param_1[3] != '\0') && (uVar3 = 0xffffffff, param_1[3] == '1')) &&
             (param_1[4] == '-')) {
            if (param_1[5] == 'd') {
              iVar2 = strcmp("igest",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0xdd;
            }
            else if (param_1[5] == 'p') {
              iVar2 = strcmp("roperties",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0xde;
            }
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      case 0x69:
        if (param_1[2] == 'c') {
          iVar2 = strcmp("alg",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0x4f;
        }
        else if (param_1[2] == 'n') {
          if (param_1[3] == '_') {
            if (param_1[4] == 'e') {
              iVar2 = strcmp("ntropylen",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0x5b;
            }
            else if (param_1[4] == 'n') {
              iVar2 = strcmp("oncelen",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0x5d;
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else if (param_1[3] == 'i') {
            iVar2 = strcmp("um_length",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x5c;
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      case 0x6c:
        if (param_1[2] == '-') {
          if (param_1[3] == 'd') {
            if (param_1[4] == 's') {
              if (param_1[5] == 'a') {
                if (param_1[6] == '.') {
                  cVar1 = param_1[7];
                  if (cVar1 == 'p') {
                    iVar2 = strcmp("refer_seed",param_1 + 8);
                    uVar3 = -(uint)(iVar2 != 0) | 0xe1;
                  }
                  else if (cVar1 < 'q') {
                    if (cVar1 == 'i') {
                      iVar2 = strcmp("nput_formats",param_1 + 8);
                      uVar3 = -(uint)(iVar2 != 0) | 0xdf;
                    }
                    else if (cVar1 == 'o') {
                      iVar2 = strcmp("utput_formats",param_1 + 8);
                      uVar3 = -(uint)(iVar2 != 0) | 0xe0;
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else if (cVar1 == 'r') {
                    iVar2 = strcmp("etain_seed",param_1 + 8);
                    uVar3 = -(uint)(iVar2 != 0) | 0xe2;
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else if (param_1[3] == 'k') {
            if (param_1[4] == 'e') {
              if (param_1[5] == 'm') {
                if (param_1[6] == '.') {
                  cVar1 = param_1[7];
                  if (cVar1 == 'p') {
                    iVar2 = strcmp("refer_seed",param_1 + 8);
                    uVar3 = -(uint)(iVar2 != 0) | 0xe6;
                  }
                  else if (cVar1 < 'q') {
                    if (cVar1 == 'i') {
                      if (param_1[8] == 'm') {
                        iVar2 = strcmp("port_pct_type",param_1 + 9);
                        uVar3 = -(uint)(iVar2 != 0) | 0xe3;
                      }
                      else if (param_1[8] == 'n') {
                        iVar2 = strcmp("put_formats",param_1 + 9);
                        uVar3 = -(uint)(iVar2 != 0) | 0xe4;
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else if (cVar1 == 'o') {
                      iVar2 = strcmp("utput_formats",param_1 + 8);
                      uVar3 = -(uint)(iVar2 != 0) | 0xe5;
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else if (cVar1 == 'r') {
                    iVar2 = strcmp("etain_seed",param_1 + 8);
                    uVar3 = -(uint)(iVar2 != 0) | 0xe7;
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      case 0x6f:
        if (param_1[2] == 'd') {
          if (param_1[3] == 'e') {
            uVar3 = (-(uint)(param_1[4] == '\0') & 0x38) - 1;
          }
          else if (param_1[3] == 'u') {
            iVar2 = strcmp("le-filename",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x11d;
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      case 0x75:
        uVar3 = (-(uint)(param_1[2] == '\0') & 0x150) - 1;
        break;
      default:
        uVar3 = 0xffffffff;
      }
    }
    break;
      case 0x6e:
    cVar1 = param_1[1];
    if (cVar1 == 'o') {
      if (param_1[2] == '-') {
        iVar2 = strcmp("short-mac",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x129;
      }
      else if (param_1[2] == 'n') {
        if (param_1[3] == 'c') {
          if (param_1[4] == 'e') {
            uVar3 = 0x7a;
            if ((param_1[5] != '\0') && (uVar3 = 0xffffffff, param_1[5] == '-')) {
              iVar2 = strcmp("type",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0x150;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else if (cVar1 < 'p') {
      uVar3 = 0x89;
      if ((cVar1 != '\0') && (uVar3 = 0xffffffff, cVar1 == 'a')) {
        if ((param_1[2] == 'm') && ((param_1[3] == 'e' && (param_1[4] == '\0')))) {
          uVar3 = 0x128;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
    }
    else {
      uVar3 = 0xffffffff;
      if (cVar1 == 'u') {
        if ((param_1[2] == 'm') && (param_1[3] == '\0')) {
          uVar3 = 0x38;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
    }
    break;
      case 0x6f:
    cVar1 = param_1[1];
    if (cVar1 == 'p') {
      if (param_1[2] == 'e') {
        if (param_1[3] == 'n') {
          iVar2 = strcmp("ssl-version",param_1 + 4);
          uVar3 = -(uint)(iVar2 != 0) | 0x11f;
        }
        else if (param_1[3] == 'r') {
          iVar2 = strcmp("ation",param_1 + 4);
          uVar3 = -(uint)(iVar2 != 0) | 0x99;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else if (param_1[2] == 't') {
        iVar2 = strcmp("ions",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x9e;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else if (cVar1 == 'r') {
      iVar2 = strcmp("der",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0xc6;
    }
    else {
      uVar3 = 0xffffffff;
      if (cVar1 == 'a') {
        iVar2 = strcmp("ep-label",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 10;
      }
    }
    break;
      case 0x70:
    if (param_1[1] == '\0') {
      uVar3 = 0x8a;
    }
    else {
      switch(param_1[1]) {
      case 0x31:
        uVar3 = (-(uint)(param_1[2] == '\0') & 0x111) - 1;
        break;
      case 0x32:
        uVar3 = (-(uint)(param_1[2] == '\0') & 0x112) - 1;
        break;
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x6a:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x70:
      case 0x71:
      case 0x73:
      case 0x74:
        uVar3 = 0xffffffff;
        break;
      case 0x61:
        cVar1 = param_1[2];
        if (cVar1 == 'r') {
          if (param_1[3] == 't') {
            if (param_1[4] == 'y') {
              if (param_1[5] == 'u') {
                iVar2 = strcmp("-info",param_1 + 6);
                uVar3 = -(uint)(iVar2 != 0) | 0x93;
              }
              else if (param_1[5] == 'v') {
                iVar2 = strcmp("-info",param_1 + 6);
                uVar3 = -(uint)(iVar2 != 0) | 0x94;
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else if (cVar1 == 's') {
          iVar2 = strcmp("s",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0x83;
        }
        else {
          uVar3 = 0xffffffff;
          if (cVar1 == 'd') {
            cVar1 = param_1[3];
            if (cVar1 == '-') {
              if (param_1[4] == 'm') {
                iVar2 = strcmp("ode",param_1 + 5);
                uVar3 = -(uint)(iVar2 != 0) | 0xe8;
              }
              else if (param_1[4] == 't') {
                iVar2 = strcmp("ype",param_1 + 5);
                uVar3 = -(uint)(iVar2 != 0) | 0x50;
              }
            }
            else if (cVar1 == 'd') {
              iVar2 = strcmp("ing",param_1 + 4);
              uVar3 = -(uint)(iVar2 != 0) | 0x39;
            }
            else {
              uVar3 = (-(uint)(cVar1 == '\0') & 0x6e) - 1;
            }
          }
        }
        break;
      case 0x62:
        if (param_1[2] == 'i') {
          if (((param_1[3] != 't') || (param_1[4] != 's')) || (uVar3 = 0xcf, param_1[5] != '\0')) {
            uVar3 = 0xffffffff;
          }
        }
        else if (param_1[2] == 'k') {
          iVar2 = strcmp("df2-lower-bound-check",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0x12a;
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      case 99:
        iVar2 = strcmp("ounter",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0xd0;
        break;
      case 0x69:
        iVar2 = strcmp("peline-tag",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0x3a;
        break;
      case 0x6b:
        iVar2 = strcmp("cs5",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0x85;
        break;
      case 0x6f:
        if (param_1[2] == 'i') {
          iVar2 = strcmp("nt-format",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 199;
        }
        else if (param_1[2] == 't') {
          iVar2 = strcmp("ential",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0x6f;
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      case 0x72:
        cVar1 = param_1[2];
        if (cVar1 == 'i') {
          if (param_1[3] == 'm') {
            iVar2 = strcmp("es",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x10e;
          }
          else if (param_1[3] == 'v') {
            if (param_1[4] == '\0') {
              uVar3 = 0xe9;
            }
            else {
              uVar3 = 0xffffffff;
              if (param_1[4] == '_') {
                iVar2 = strcmp("len",param_1 + 5);
                uVar3 = -(uint)(iVar2 != 0) | 0xb4;
              }
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else if (cVar1 == 'o') {
          if (param_1[3] == 'p') {
            iVar2 = strcmp("erties",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 7;
          }
          else if (param_1[3] == 'v') {
            iVar2 = strcmp("ider-name",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x11e;
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
          if (cVar1 == 'e') {
            if (param_1[3] == 'd') {
              iVar2 = strcmp("iction_resistance",param_1 + 4);
              uVar3 = -(uint)(iVar2 != 0) | 0x5e;
            }
            else if (param_1[3] == 'f') {
              iVar2 = strcmp("ix",param_1 + 4);
              uVar3 = -(uint)(iVar2 != 0) | 0x86;
            }
          }
        }
        break;
      case 0x75:
        if ((param_1[2] == 'b') && (param_1[3] == '\0')) {
          uVar3 = 0xea;
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      default:
        uVar3 = 0xffffffff;
      }
    }
    break;
      case 0x71:
    cVar1 = param_1[1];
    if (cVar1 == 'b') {
      iVar2 = strcmp("its",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0xd2;
    }
    else if (cVar1 < 'c') {
      if (cVar1 == '1') {
        uVar3 = (-(uint)(param_1[2] == '\0') & 0x113) - 1;
      }
      else if (cVar1 == '2') {
        uVar3 = (-(uint)(param_1[2] == '\0') & 0x114) - 1;
      }
      else {
        uVar3 = (-(uint)(cVar1 == '\0') & 0xd2) - 1;
      }
    }
    else if (cVar1 == 'x') {
      uVar3 = (-(uint)(param_1[2] == '\0') & 0xc9) - 1;
    }
    else if (cVar1 == 'y') {
      uVar3 = (-(uint)(param_1[2] == '\0') & 0xca) - 1;
    }
    else {
      uVar3 = 0xffffffff;
    }
    break;
      case 0x72:
    cVar1 = param_1[1];
    if (cVar1 == 'e') {
      cVar1 = param_1[2];
      if (cVar1 == 'f') {
        iVar2 = strcmp("erence",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0xaf;
      }
      else if (cVar1 == 's') {
        if (param_1[3] == 'e') {
          if (param_1[4] == 'e') {
            if (param_1[5] == 'd') {
              if (param_1[6] == '_') {
                cVar1 = param_1[7];
                if (cVar1 == 'r') {
                  iVar2 = strcmp("equests",param_1 + 8);
                  uVar3 = -(uint)(iVar2 != 0) | 0x61;
                }
                else if (cVar1 == 't') {
                  if (param_1[8] == 'i') {
                    if (param_1[9] == 'm') {
                      if (param_1[10] == 'e') {
                        if (param_1[0xb] == '\0') {
                          uVar3 = 0x62;
                        }
                        else {
                          uVar3 = 0xffffffff;
                          if (param_1[0xb] == '_') {
                            iVar2 = strcmp("interval",param_1 + 0xc);
                            uVar3 = -(uint)(iVar2 != 0) | 99;
                          }
                        }
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                  if (cVar1 == 'c') {
                    iVar2 = strcmp("ounter",param_1 + 8);
                    uVar3 = -(uint)(iVar2 != 0) | 0x60;
                  }
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
        if (((cVar1 == 'a') && (param_1[3] == 'd')) && (param_1[4] == '_')) {
          if (param_1[5] == 'a') {
            iVar2 = strcmp("head",param_1 + 6);
            uVar3 = -(uint)(iVar2 != 0) | 0x9f;
          }
          else if (param_1[5] == 'b') {
            iVar2 = strcmp("uffer_len",param_1 + 6);
            uVar3 = -(uint)(iVar2 != 0) | 0xa3;
          }
        }
      }
    }
    else if (cVar1 < 'f') {
      uVar3 = 0x7d;
      if ((cVar1 != '\0') && (uVar3 = 0xffffffff, cVar1 == 'a')) {
        if (param_1[2] == 'n') {
          if (param_1[3] == 'd') {
            if (param_1[4] == 'k') {
              iVar2 = strcmp("ey",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0x3b;
            }
            else if (param_1[4] == 'o') {
              iVar2 = strcmp("m_data",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0x5f;
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else if (param_1[2] == 'w') {
          iVar2 = strcmp("-bytes",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0x154;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
    }
    else if (cVar1 == 'o') {
      iVar2 = strcmp("unds",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0x3d;
    }
    else {
      uVar3 = 0xffffffff;
      if (cVar1 == 's') {
        if (param_1[2] == 'a') {
          if (param_1[3] == '-') {
            switch(param_1[4]) {
            case 99:
              if (param_1[5] == 'o') {
                if (param_1[6] == 'e') {
                  if (param_1[7] == 'f') {
                    if (param_1[8] == 'f') {
                      if (param_1[9] == 'i') {
                        if (param_1[10] == 'c') {
                          if (param_1[0xb] == 'i') {
                            if (param_1[0xc] == 'e') {
                              if (param_1[0xd] == 'n') {
                                if (param_1[0xe] == 't') {
                                  switch(param_1[0xf]) {
                                  case 0:
                                    uVar3 = 0xeb;
                                    break;
                                  default:
                                    uVar3 = 0xffffffff;
                                    break;
                                  case 0x31:
                                    uVar3 = (-(uint)(param_1[0x10] == '\0') & 0xed) - 1;
                                    break;
                                  case 0x32:
                                    uVar3 = (-(uint)(param_1[0x10] == '\0') & 0xee) - 1;
                                    break;
                                  case 0x33:
                                    uVar3 = (-(uint)(param_1[0x10] == '\0') & 0xef) - 1;
                                    break;
                                  case 0x34:
                                    uVar3 = (-(uint)(param_1[0x10] == '\0') & 0xf0) - 1;
                                    break;
                                  case 0x35:
                                    uVar3 = (-(uint)(param_1[0x10] == '\0') & 0xf1) - 1;
                                    break;
                                  case 0x36:
                                    uVar3 = (-(uint)(param_1[0x10] == '\0') & 0xf2) - 1;
                                    break;
                                  case 0x37:
                                    uVar3 = (-(uint)(param_1[0x10] == '\0') & 0xf3) - 1;
                                    break;
                                  case 0x38:
                                    uVar3 = (-(uint)(param_1[0x10] == '\0') & 0xf4) - 1;
                                    break;
                                  case 0x39:
                                    uVar3 = (-(uint)(param_1[0x10] == '\0') & 0xf5) - 1;
                                  }
                                }
                                else {
                                  uVar3 = 0xffffffff;
                                }
                              }
                              else {
                                uVar3 = 0xffffffff;
                              }
                            }
                            else {
                              uVar3 = 0xffffffff;
                            }
                          }
                          else {
                            uVar3 = 0xffffffff;
                          }
                        }
                        else {
                          uVar3 = 0xffffffff;
                        }
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
              break;
            case 100:
              iVar2 = strcmp("erive-from-pq",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0xf6;
              break;
            case 0x65:
              if (param_1[5] == 'x') {
                if (param_1[6] == 'p') {
                  if (param_1[7] == 'o') {
                    if (param_1[8] == 'n') {
                      if (param_1[9] == 'e') {
                        if (param_1[10] == 'n') {
                          if (param_1[0xb] == 't') {
                            switch(param_1[0xc]) {
                            case 0:
                              uVar3 = 0xf8;
                              break;
                            default:
                              uVar3 = 0xffffffff;
                              break;
                            case 0x31:
                              if (param_1[0xd] == '\0') {
                                uVar3 = 0xf9;
                              }
                              else {
                                uVar3 = 0xffffffff;
                                if (param_1[0xd] == '0') {
                                  uVar3 = (-(uint)(param_1[0xe] == '\0') & 0xfb) - 1;
                                }
                              }
                              break;
                            case 0x32:
                              uVar3 = (-(uint)(param_1[0xd] == '\0') & 0xfc) - 1;
                              break;
                            case 0x33:
                              uVar3 = (-(uint)(param_1[0xd] == '\0') & 0xfd) - 1;
                              break;
                            case 0x34:
                              uVar3 = (-(uint)(param_1[0xd] == '\0') & 0xfe) - 1;
                              break;
                            case 0x35:
                              uVar3 = (-(uint)(param_1[0xd] == '\0') & 0xff) - 1;
                              break;
                            case 0x36:
                              uVar3 = (-(uint)(param_1[0xd] == '\0') & 0x100) - 1;
                              break;
                            case 0x37:
                              uVar3 = (-(uint)(param_1[0xd] == '\0') & 0x101) - 1;
                              break;
                            case 0x38:
                              uVar3 = (-(uint)(param_1[0xd] == '\0') & 0x102) - 1;
                              break;
                            case 0x39:
                              uVar3 = (-(uint)(param_1[0xd] == '\0') & 0x103) - 1;
                            }
                          }
                          else {
                            uVar3 = 0xffffffff;
                          }
                        }
                        else {
                          uVar3 = 0xffffffff;
                        }
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
              break;
            case 0x66:
              if (param_1[5] == 'a') {
                if (param_1[6] == 'c') {
                  if (param_1[7] == 't') {
                    if (param_1[8] == 'o') {
                      if (param_1[9] == 'r') {
                        switch(param_1[10]) {
                        case 0:
                          uVar3 = 0x103;
                          break;
                        default:
                          uVar3 = 0xffffffff;
                          break;
                        case 0x31:
                          if (param_1[0xb] == '\0') {
                            uVar3 = 0x104;
                          }
                          else {
                            uVar3 = 0xffffffff;
                            if (param_1[0xb] == '0') {
                              uVar3 = (-(uint)(param_1[0xc] == '\0') & 0x106) - 1;
                            }
                          }
                          break;
                        case 0x32:
                          uVar3 = (-(uint)(param_1[0xb] == '\0') & 0x107) - 1;
                          break;
                        case 0x33:
                          uVar3 = (-(uint)(param_1[0xb] == '\0') & 0x108) - 1;
                          break;
                        case 0x34:
                          uVar3 = (-(uint)(param_1[0xb] == '\0') & 0x109) - 1;
                          break;
                        case 0x35:
                          uVar3 = (-(uint)(param_1[0xb] == '\0') & 0x10a) - 1;
                          break;
                        case 0x36:
                          uVar3 = (-(uint)(param_1[0xb] == '\0') & 0x10b) - 1;
                          break;
                        case 0x37:
                          uVar3 = (-(uint)(param_1[0xb] == '\0') & 0x10c) - 1;
                          break;
                        case 0x38:
                          uVar3 = (-(uint)(param_1[0xb] == '\0') & 0x10d) - 1;
                          break;
                        case 0x39:
                          uVar3 = (-(uint)(param_1[0xb] == '\0') & 0x10e) - 1;
                        }
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
              break;
            default:
              uVar3 = 0xffffffff;
              break;
            case 0x70:
              if (param_1[5] == 'k') {
                iVar2 = strcmp("cs15-pad-disabled",param_1 + 6);
                uVar3 = -(uint)(iVar2 != 0) | 299;
              }
              else if (param_1[5] == 's') {
                iVar2 = strcmp("s-saltlen-check",param_1 + 6);
                uVar3 = -(uint)(iVar2 != 0) | 300;
              }
              else {
                uVar3 = 0xffffffff;
              }
              break;
            case 0x73:
              iVar2 = strcmp("ign-x931-pad-disabled",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0x12d;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
    }
    break;
      case 0x73:
    switch(param_1[1]) {
    case 0x61:
      cVar1 = param_1[2];
      if (cVar1 == 'l') {
        if (param_1[3] == 't') {
          uVar3 = 0x87;
          if ((param_1[4] != '\0') && (uVar3 = 0xffffffff, param_1[4] == 'l')) {
            iVar2 = strcmp("en",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0x10f;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else if (cVar1 == 'v') {
        iVar2 = strcmp("e-parameters",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x66;
      }
      else {
        uVar3 = 0xffffffff;
        if (cVar1 == 'f') {
          iVar2 = strcmp("eprime-generator",param_1 + 3);
          uVar3 = -(uint)(iVar2 != 0) | 0xb3;
        }
      }
      break;
    default:
      uVar3 = 0xffffffff;
      break;
    case 0x65:
      cVar1 = param_1[2];
      if (cVar1 == 'r') {
        iVar2 = strcmp("ial",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x158;
      }
      else if (cVar1 < 's') {
        if (cVar1 == 'c') {
          if (param_1[3] == 'r') {
            iVar2 = strcmp("et",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x8b;
          }
          else if (param_1[3] == 'u') {
            if (param_1[4] == 'r') {
              if (param_1[5] == 'i') {
                if (param_1[6] == 't') {
                  if (param_1[7] == 'y') {
                    if (param_1[8] == '-') {
                      if (param_1[9] == 'b') {
                        iVar2 = strcmp("its",param_1 + 10);
                        uVar3 = -(uint)(iVar2 != 0) | 0x11a;
                      }
                      else if (param_1[9] == 'c') {
                        iVar2 = strcmp("hecks",param_1 + 10);
                        uVar3 = -(uint)(iVar2 != 0) | 0x12e;
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else if (cVar1 == 'e') {
          if ((param_1[3] != 'd') || (uVar3 = 0x8c, param_1[4] != '\0')) {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else if (cVar1 == 's') {
        iVar2 = strcmp("sion_id",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x8d;
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    case 0x69:
      if (param_1[2] == 'g') {
        if (param_1[3] == 'n') {
          if (param_1[4] == '-') {
            if (param_1[5] == 'c') {
              iVar2 = strcmp("heck",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0xd8;
            }
            else if (param_1[5] == 'x') {
              iVar2 = strcmp("931-pad-check",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0x14a;
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else if (param_1[4] == 'a') {
            if (param_1[5] == 't') {
              if (param_1[6] == 'u') {
                if (param_1[7] == 'r') {
                  if (param_1[8] == 'e') {
                    if (param_1[9] == '\0') {
                      uVar3 = 0x151;
                    }
                    else {
                      uVar3 = 0xffffffff;
                      if (param_1[9] == '-') {
                        iVar2 = strcmp("digest-check",param_1 + 10);
                        uVar3 = -(uint)(iVar2 != 0) | 0x132;
                      }
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else if (param_1[2] == 'z') {
        if ((param_1[3] != 'e') || (uVar3 = 0x51, param_1[4] != '\0')) {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    case 0x70:
      iVar2 = strcmp("eed",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0x3e;
      break;
    case 0x73:
      cVar1 = param_1[2];
      if (cVar1 == 'k') {
        if (param_1[3] == 'd') {
          if (param_1[4] == 'f') {
            if (param_1[5] == '-') {
              if (param_1[6] == 'd') {
                iVar2 = strcmp("igest-check",param_1 + 7);
                uVar3 = -(uint)(iVar2 != 0) | 0x135;
              }
              else if (param_1[6] == 'k') {
                iVar2 = strcmp("ey-check",param_1 + 7);
                uVar3 = -(uint)(iVar2 != 0) | 0x136;
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else if (cVar1 == 'l') {
        iVar2 = strcmp("3-ms",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x52;
      }
      else {
        uVar3 = 0xffffffff;
        if ((((cVar1 == 'h') && (param_1[3] == 'k')) && (param_1[4] == 'd')) &&
           ((param_1[5] == 'f' && (param_1[6] == '-')))) {
          if (param_1[7] == 'd') {
            iVar2 = strcmp("igest-check",param_1 + 8);
            uVar3 = -(uint)(iVar2 != 0) | 0x133;
          }
          else if (param_1[7] == 'k') {
            iVar2 = strcmp("ey-check",param_1 + 8);
            uVar3 = -(uint)(iVar2 != 0) | 0x134;
          }
        }
      }
      break;
    case 0x74:
      cVar1 = param_1[2];
      if (cVar1 == 'a') {
        if (param_1[3] == 't') {
          if (param_1[4] == 'e') {
            uVar3 = (-(uint)(param_1[5] == '\0') & 0x144) - 1;
          }
          else if (param_1[4] == 'u') {
            iVar2 = strcmp("s",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0x137;
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else if (cVar1 == 'r') {
        if (param_1[3] == 'e') {
          if (param_1[4] == 'a') {
            iVar2 = strcmp("m_mac",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0xa0;
          }
          else if (param_1[4] == 'n') {
            iVar2 = strcmp("gth",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0x144;
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
        if (cVar1 == '-') {
          cVar1 = param_1[3];
          if (cVar1 == 'p') {
            iVar2 = strcmp("hase",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x130;
          }
          else if (cVar1 == 't') {
            iVar2 = strcmp("ype",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x131;
          }
          else if (cVar1 == 'd') {
            iVar2 = strcmp("esc",param_1 + 4);
            uVar3 = -(uint)(iVar2 != 0) | 0x12f;
          }
        }
      }
      break;
    case 0x75:
      if (param_1[2] == 'b') {
        iVar2 = strcmp("ject",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x159;
      }
      else if (param_1[2] == 'p') {
        if (param_1[3] == 'p') {
          if (param_1[4] == '-') {
            if (param_1[5] == 'p') {
              if (param_1[6] == 'r') {
                iVar2 = strcmp("ivinfo",param_1 + 7);
                uVar3 = -(uint)(iVar2 != 0) | 0x95;
              }
              else if (param_1[6] == 'u') {
                iVar2 = strcmp("binfo",param_1 + 7);
                uVar3 = -(uint)(iVar2 != 0) | 0x96;
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    break;
      case 0x74:
    switch(param_1[1]) {
    case 0x61:
      if (param_1[2] == 'g') {
        uVar3 = 0x25;
        if (((param_1[3] != '\0') && (uVar3 = 0xffffffff, param_1[3] == 'l')) &&
           ((param_1[4] != 'e' || ((param_1[5] != 'n' || (uVar3 = 0x26, param_1[6] != '\0')))))) {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    default:
      uVar3 = 0xffffffff;
      break;
    case 100:
      iVar2 = strcmp("es-encrypt-disabled",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0x138;
      break;
    case 0x65:
      if (param_1[2] == 's') {
        if (param_1[3] == 't') {
          if (param_1[4] == '-') {
            iVar2 = strcmp("entropy",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0x152;
          }
          else if (param_1[4] == '_') {
            if (param_1[5] == 'e') {
              iVar2 = strcmp("ntropy",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0x145;
            }
            else if (param_1[5] == 'n') {
              iVar2 = strcmp("once",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0x146;
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    case 0x68:
      iVar2 = strcmp("reads",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0x90;
      break;
    case 0x6c:
      if (param_1[2] == 's') {
        cVar1 = param_1[3];
        if (cVar1 == 'a') {
          if (param_1[4] == 'a') {
            if (param_1[5] == 'd') {
              if (param_1[6] == '\0') {
                uVar3 = 0x27;
              }
              else {
                uVar3 = 0xffffffff;
                if (param_1[6] == 'p') {
                  iVar2 = strcmp("ad",param_1 + 7);
                  uVar3 = -(uint)(iVar2 != 0) | 0x28;
                }
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else if (cVar1 < 'b') {
          if (cVar1 == '-') {
            switch(param_1[4]) {
            case 99:
              iVar2 = strcmp("lient-version",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0xb;
              break;
            case 100:
              iVar2 = strcmp("ata-size",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0xaa;
              break;
            default:
              uVar3 = 0xffffffff;
              break;
            case 0x67:
              if (param_1[5] == 'r') {
                if (param_1[6] == 'o') {
                  if (param_1[7] == 'u') {
                    if (param_1[8] == 'p') {
                      if (param_1[9] == '-') {
                        cVar1 = param_1[10];
                        if (cVar1 == 'n') {
                          if (param_1[0xb] == 'a') {
                            if (param_1[0xc] == 'm') {
                              if (param_1[0xd] == 'e') {
                                if (param_1[0xe] == '\0') {
                                  uVar3 = 0x14;
                                }
                                else {
                                  uVar3 = 0xffffffff;
                                  if (param_1[0xe] == '-') {
                                    iVar2 = strcmp("internal",param_1 + 0xf);
                                    uVar3 = -(uint)(iVar2 != 0) | 0x15;
                                  }
                                }
                              }
                              else {
                                uVar3 = 0xffffffff;
                              }
                            }
                            else {
                              uVar3 = 0xffffffff;
                            }
                          }
                          else {
                            uVar3 = 0xffffffff;
                          }
                        }
                        else if (cVar1 < 'o') {
                          if (cVar1 == 'a') {
                            iVar2 = strcmp("lg",param_1 + 0xb);
                            uVar3 = -(uint)(iVar2 != 0) | 0xd;
                          }
                          else if (cVar1 == 'i') {
                            if (param_1[0xb] == 'd') {
                              uVar3 = (-(uint)(param_1[0xc] == '\0') & 0xf) - 1;
                            }
                            else if (param_1[0xb] == 's') {
                              iVar2 = strcmp("-kem",param_1 + 0xc);
                              uVar3 = -(uint)(iVar2 != 0) | 0xf;
                            }
                            else {
                              uVar3 = 0xffffffff;
                            }
                          }
                          else {
                            uVar3 = 0xffffffff;
                          }
                        }
                        else if (cVar1 == 's') {
                          iVar2 = strcmp("ec-bits",param_1 + 0xb);
                          uVar3 = -(uint)(iVar2 != 0) | 0x16;
                        }
                        else {
                          uVar3 = 0xffffffff;
                        }
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
              break;
            case 0x6d:
              cVar1 = param_1[5];
              if (cVar1 == 'i') {
                if (param_1[6] == 'n') {
                  if (param_1[7] == '-') {
                    if (param_1[8] == 'd') {
                      iVar2 = strcmp("tls",param_1 + 9);
                      uVar3 = -(uint)(iVar2 != 0) | 0x12;
                    }
                    else if (param_1[8] == 't') {
                      iVar2 = strcmp("ls",param_1 + 9);
                      uVar3 = -(uint)(iVar2 != 0) | 0x13;
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else if (cVar1 == 'u') {
                iVar2 = strcmp("lti",param_1 + 6);
                uVar3 = -(uint)(iVar2 != 0) | 0x3f;
              }
              else {
                uVar3 = 0xffffffff;
                if (cVar1 == 'a') {
                  if (param_1[6] == 'c') {
                    if (param_1[7] == '\0') {
                      uVar3 = 0x48;
                    }
                    else if (param_1[7] == '-') {
                      iVar2 = strcmp("size",param_1 + 8);
                      uVar3 = -(uint)(iVar2 != 0) | 0x49;
                    }
                  }
                  else if ((param_1[6] == 'x') && (param_1[7] == '-')) {
                    if (param_1[8] == 'd') {
                      iVar2 = strcmp("tls",param_1 + 9);
                      uVar3 = -(uint)(iVar2 != 0) | 0x10;
                    }
                    else if (param_1[8] == 't') {
                      iVar2 = strcmp("ls",param_1 + 9);
                      uVar3 = -(uint)(iVar2 != 0) | 0x11;
                    }
                  }
                }
              }
              break;
            case 0x6e:
              iVar2 = strcmp("egotiated-version",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0xc;
              break;
            case 0x73:
              if (param_1[5] == 'i') {
                if (param_1[6] == 'g') {
                  if (param_1[7] == 'a') {
                    if (param_1[8] == 'l') {
                      if (param_1[9] == 'g') {
                        if (param_1[10] == '-') {
                          switch(param_1[0xb]) {
                          case 99:
                            iVar2 = strcmp("ode-point",param_1 + 0xc);
                            uVar3 = -(uint)(iVar2 != 0) | 0x17;
                            break;
                          default:
                            uVar3 = 0xffffffff;
                            break;
                          case 0x68:
                            if (param_1[0xc] == 'a') {
                              if (param_1[0xd] == 's') {
                                if (param_1[0xe] == 'h') {
                                  if (param_1[0xf] == '-') {
                                    if (param_1[0x10] == 'n') {
                                      iVar2 = strcmp("ame",param_1 + 0x11);
                                      uVar3 = -(uint)(iVar2 != 0) | 0x18;
                                    }
                                    else if (param_1[0x10] == 'o') {
                                      iVar2 = strcmp("id",param_1 + 0x11);
                                      uVar3 = -(uint)(iVar2 != 0) | 0x19;
                                    }
                                    else {
                                      uVar3 = 0xffffffff;
                                    }
                                  }
                                  else {
                                    uVar3 = 0xffffffff;
                                  }
                                }
                                else {
                                  uVar3 = 0xffffffff;
                                }
                              }
                              else {
                                uVar3 = 0xffffffff;
                              }
                            }
                            else {
                              uVar3 = 0xffffffff;
                            }
                            break;
                          case 0x69:
                            iVar2 = strcmp("ana-name",param_1 + 0xc);
                            uVar3 = -(uint)(iVar2 != 0) | 0x1a;
                            break;
                          case 0x6b:
                            if (param_1[0xc] == 'e') {
                              if (param_1[0xd] == 'y') {
                                if (param_1[0xe] == 't') {
                                  if (param_1[0xf] == 'y') {
                                    if (param_1[0x10] == 'p') {
                                      if (param_1[0x11] == 'e') {
                                        if (param_1[0x12] == '\0') {
                                          uVar3 = 0x1b;
                                        }
                                        else {
                                          uVar3 = 0xffffffff;
                                          if (param_1[0x12] == '-') {
                                            iVar2 = strcmp("oid",param_1 + 0x13);
                                            uVar3 = -(uint)(iVar2 != 0) | 0x1c;
                                          }
                                        }
                                      }
                                      else {
                                        uVar3 = 0xffffffff;
                                      }
                                    }
                                    else {
                                      uVar3 = 0xffffffff;
                                    }
                                  }
                                  else {
                                    uVar3 = 0xffffffff;
                                  }
                                }
                                else {
                                  uVar3 = 0xffffffff;
                                }
                              }
                              else {
                                uVar3 = 0xffffffff;
                              }
                            }
                            else {
                              uVar3 = 0xffffffff;
                            }
                            break;
                          case 0x6e:
                            iVar2 = strcmp("ame",param_1 + 0xc);
                            uVar3 = -(uint)(iVar2 != 0) | 0x1d;
                            break;
                          case 0x6f:
                            iVar2 = strcmp("id",param_1 + 0xc);
                            uVar3 = -(uint)(iVar2 != 0) | 0x1e;
                            break;
                          case 0x73:
                            if (param_1[0xc] == 'e') {
                              iVar2 = strcmp("c-bits",param_1 + 0xd);
                              uVar3 = -(uint)(iVar2 != 0) | 0x1f;
                            }
                            else if (param_1[0xc] == 'i') {
                              if (param_1[0xd] == 'g') {
                                if (param_1[0xe] == '-') {
                                  if (param_1[0xf] == 'n') {
                                    iVar2 = strcmp("ame",param_1 + 0x10);
                                    uVar3 = -(uint)(iVar2 != 0) | 0x20;
                                  }
                                  else if (param_1[0xf] == 'o') {
                                    iVar2 = strcmp("id",param_1 + 0x10);
                                    uVar3 = -(uint)(iVar2 != 0) | 0x21;
                                  }
                                  else {
                                    uVar3 = 0xffffffff;
                                  }
                                }
                                else {
                                  uVar3 = 0xffffffff;
                                }
                              }
                              else {
                                uVar3 = 0xffffffff;
                              }
                            }
                            else {
                              uVar3 = 0xffffffff;
                            }
                          }
                        }
                        else {
                          uVar3 = 0xffffffff;
                        }
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
              break;
            case 0x76:
              iVar2 = strcmp("ersion",param_1 + 5);
              uVar3 = -(uint)(iVar2 != 0) | 0x4a;
            }
          }
          else if (cVar1 == '1') {
            cVar1 = param_1[4];
            if (cVar1 == '3') {
              if (param_1[5] == '-') {
                if (param_1[6] == 'k') {
                  if (param_1[7] == 'd') {
                    if (param_1[8] == 'f') {
                      if (param_1[9] == '-') {
                        if (param_1[10] == 'd') {
                          iVar2 = strcmp("igest-check",param_1 + 0xb);
                          uVar3 = -(uint)(iVar2 != 0) | 0x139;
                        }
                        else if (param_1[10] == 'k') {
                          iVar2 = strcmp("ey-check",param_1 + 0xb);
                          uVar3 = -(uint)(iVar2 != 0) | 0x13a;
                        }
                        else {
                          uVar3 = 0xffffffff;
                        }
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else if (cVar1 == 'm') {
              if (param_1[5] == 'u') {
                if (param_1[6] == 'l') {
                  if (param_1[7] == 't') {
                    if (param_1[8] == 'i') {
                      if (param_1[9] == '_') {
                        cVar1 = param_1[10];
                        if (cVar1 == 'i') {
                          iVar2 = strcmp("nterleave",param_1 + 0xb);
                          uVar3 = -(uint)(iVar2 != 0) | 0x45;
                        }
                        else if (cVar1 < 'j') {
                          if (cVar1 == 'a') {
                            if (param_1[0xb] == 'a') {
                              if (param_1[0xc] == 'd') {
                                if (param_1[0xd] == '\0') {
                                  uVar3 = 0x40;
                                }
                                else {
                                  uVar3 = 0xffffffff;
                                  if (param_1[0xd] == 'p') {
                                    iVar2 = strcmp("acklen",param_1 + 0xe);
                                    uVar3 = -(uint)(iVar2 != 0) | 0x41;
                                  }
                                }
                              }
                              else {
                                uVar3 = 0xffffffff;
                              }
                            }
                            else {
                              uVar3 = 0xffffffff;
                            }
                          }
                          else if (cVar1 == 'e') {
                            if (param_1[0xb] == 'n') {
                              if (param_1[0xc] == 'c') {
                                cVar1 = param_1[0xd];
                                if (cVar1 == 'i') {
                                  iVar2 = strcmp("n",param_1 + 0xe);
                                  uVar3 = -(uint)(iVar2 != 0) | 0x43;
                                }
                                else if (cVar1 == 'l') {
                                  iVar2 = strcmp("en",param_1 + 0xe);
                                  uVar3 = -(uint)(iVar2 != 0) | 0x44;
                                }
                                else {
                                  uVar3 = (-(uint)(cVar1 == '\0') & 0x43) - 1;
                                }
                              }
                              else {
                                uVar3 = 0xffffffff;
                              }
                            }
                            else {
                              uVar3 = 0xffffffff;
                            }
                          }
                          else {
                            uVar3 = 0xffffffff;
                          }
                        }
                        else if (cVar1 == 'm') {
                          if (param_1[0xb] == 'a') {
                            if (param_1[0xc] == 'x') {
                              if (param_1[0xd] == 'b') {
                                iVar2 = strcmp("ufsz",param_1 + 0xe);
                                uVar3 = -(uint)(iVar2 != 0) | 0x46;
                              }
                              else if (param_1[0xd] == 's') {
                                iVar2 = strcmp("ndfrag",param_1 + 0xe);
                                uVar3 = -(uint)(iVar2 != 0) | 0x47;
                              }
                              else {
                                uVar3 = 0xffffffff;
                              }
                            }
                            else {
                              uVar3 = 0xffffffff;
                            }
                          }
                          else {
                            uVar3 = 0xffffffff;
                          }
                        }
                        else {
                          uVar3 = 0xffffffff;
                        }
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
              if ((cVar1 == '-') && (param_1[5] == 'p')) {
                if (param_1[6] == 'r') {
                  if (param_1[7] == 'f') {
                    if (param_1[8] == '-') {
                      cVar1 = param_1[9];
                      if (cVar1 == 'e') {
                        iVar2 = strcmp("ms-check",param_1 + 10);
                        uVar3 = -(uint)(iVar2 != 0) | 0x13c;
                      }
                      else if (cVar1 == 'k') {
                        iVar2 = strcmp("ey-check",param_1 + 10);
                        uVar3 = -(uint)(iVar2 != 0) | 0x13d;
                      }
                      else if (cVar1 == 'd') {
                        iVar2 = strcmp("igest-check",param_1 + 10);
                        uVar3 = -(uint)(iVar2 != 0) | 0x13b;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else if (cVar1 == 'i') {
          if (param_1[4] == 'v') {
            cVar1 = param_1[5];
            if (cVar1 == 'g') {
              iVar2 = strcmp("en",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0x29;
            }
            else if (cVar1 == 'i') {
              iVar2 = strcmp("nv",param_1 + 6);
              uVar3 = -(uint)(iVar2 != 0) | 0x2b;
            }
            else {
              uVar3 = 0xffffffff;
              if (cVar1 == 'f') {
                iVar2 = strcmp("ixed",param_1 + 6);
                uVar3 = -(uint)(iVar2 != 0) | 0x2a;
              }
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else if (cVar1 == 't') {
          iVar2 = strcmp("ree",param_1 + 4);
          uVar3 = -(uint)(iVar2 != 0) | 0xa1;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
      break;
    case 0x70:
      uVar3 = (-(uint)(param_1[2] == '\0') & 0xbe) - 1;
      break;
    case 0x79:
      if (((param_1[2] == 'p') && (param_1[3] == 'e')) && (param_1[4] == '\0')) {
        uVar3 = 0x8e;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    break;
      case 0x75:
    cVar1 = param_1[1];
    if (cVar1 == 'p') {
      iVar2 = strcmp("dated-iv",param_1 + 2);
      uVar3 = -(uint)(iVar2 != 0) | 0x4b;
    }
    else if (cVar1 == 's') {
      if (param_1[2] == 'e') {
        if (param_1[3] == '-') {
          switch(param_1[4]) {
          case 0x62:
            iVar2 = strcmp("its",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0x4c;
            break;
          case 99:
            iVar2 = strcmp("ofactor-flag",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0x11b;
            break;
          default:
            uVar3 = 0xffffffff;
            break;
          case 0x6b:
            iVar2 = strcmp("eybits",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0x97;
            break;
          case 0x6c:
            uVar3 = (-(uint)(param_1[5] == '\0') & 0x7f) - 1;
            break;
          case 0x73:
            iVar2 = strcmp("eparator",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 0x7f;
          }
        }
        else if (param_1[3] == '_') {
          if (param_1[4] == 'd') {
            iVar2 = strcmp("erivation_function",param_1 + 5);
            uVar3 = -(uint)(iVar2 != 0) | 100;
          }
          else if (param_1[4] == 'e') {
            if (((param_1[5] != 't') || (param_1[6] != 'm')) || (uVar3 = 0xa2, param_1[7] != '\0'))
            {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0xffffffff;
      if (cVar1 == 'k') {
        if ((param_1[2] == 'm') && (param_1[3] == '\0')) {
          uVar3 = 0x91;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
    }
    break;
      case 0x76:
    if (param_1[1] == 'a') {
      if (param_1[2] == 'l') {
        if (param_1[3] == 'i') {
          if (param_1[4] == 'd') {
            if (param_1[5] == 'a') {
              if (param_1[6] == 't') {
                if (param_1[7] == 'e') {
                  if (param_1[8] == '-') {
                    cVar1 = param_1[9];
                    if (cVar1 == 'l') {
                      iVar2 = strcmp("egacy",param_1 + 10);
                      uVar3 = -(uint)(iVar2 != 0) | 0xd4;
                    }
                    else if (cVar1 == 'p') {
                      if ((param_1[10] == 'q') && (param_1[0xb] == '\0')) {
                        uVar3 = 0xd5;
                      }
                      else {
                        uVar3 = 0xffffffff;
                      }
                    }
                    else {
                      uVar3 = 0xffffffff;
                      if (cVar1 == 'g') {
                        uVar3 = (-(uint)(param_1[10] == '\0') & 0xd4) - 1;
                      }
                    }
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else if (param_1[1] == 'e') {
      if (param_1[2] == 'r') {
        if (param_1[3] == 'i') {
          iVar2 = strcmp("fy-message",param_1 + 4);
          uVar3 = -(uint)(iVar2 != 0) | 0x14b;
        }
        else if (param_1[3] == 's') {
          iVar2 = strcmp("ion",param_1 + 4);
          uVar3 = -(uint)(iVar2 != 0) | 0x73;
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
    break;
      case 0x77:
    uVar3 = 0xffffffff;
    break;
      case 0x78:
    if (param_1[1] == '9') {
      if (param_1[2] == '4') {
        iVar2 = strcmp("2kdf-key-check",param_1 + 3);
        uVar3 = -(uint)(iVar2 != 0) | 0x13e;
      }
      else if (param_1[2] == '6') {
        if (param_1[3] == '3') {
          if (param_1[4] == 'k') {
            if (param_1[5] == 'd') {
              if (param_1[6] == 'f') {
                if (param_1[7] == '-') {
                  if (param_1[8] == 'd') {
                    iVar2 = strcmp("igest-check",param_1 + 9);
                    uVar3 = -(uint)(iVar2 != 0) | 0x13f;
                  }
                  else if (param_1[8] == 'k') {
                    iVar2 = strcmp("ey-check",param_1 + 9);
                    uVar3 = -(uint)(iVar2 != 0) | 0x140;
                  }
                  else {
                    uVar3 = 0xffffffff;
                  }
                }
                else {
                  uVar3 = 0xffffffff;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      switch(param_1[1]) {
      case 99:
        iVar2 = strcmp("ghash",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0x8f;
        break;
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x72:
      case 0x73:
        uVar3 = 0xffffffff;
        break;
      case 0x6f:
        if (param_1[2] == 'f') {
          uVar3 = 0x53;
          if (((param_1[3] != '\0') && (uVar3 = 0xffffffff, param_1[3] == 'l')) &&
             ((param_1[4] != 'e' || ((param_1[5] != 'n' || (uVar3 = 0x54, param_1[6] != '\0')))))) {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
        break;
      case 0x70:
        cVar1 = param_1[2];
        if (cVar1 == '1') {
          uVar3 = (-(uint)(param_1[3] == '\0') & 0x116) - 1;
        }
        else if (cVar1 == '2') {
          uVar3 = (-(uint)(param_1[3] == '\0') & 0x117) - 1;
        }
        else {
          uVar3 = (-(uint)(cVar1 == '\0') & 0x115) - 1;
        }
        break;
      case 0x71:
        cVar1 = param_1[2];
        if (cVar1 == '1') {
          uVar3 = (-(uint)(param_1[3] == '\0') & 0x119) - 1;
        }
        else if (cVar1 == '2') {
          uVar3 = (-(uint)(param_1[3] == '\0') & 0x11a) - 1;
        }
        else {
          uVar3 = (-(uint)(cVar1 == '\0') & 0x118) - 1;
        }
        break;
      case 0x74:
        iVar2 = strcmp("s_standard",param_1 + 2);
        uVar3 = -(uint)(iVar2 != 0) | 0x4d;
        break;
      default:
        uVar3 = 0xffffffff;
      }
    }
    break;
      default:
    return 0xffffffff;
   }
   return uVar3;
}
