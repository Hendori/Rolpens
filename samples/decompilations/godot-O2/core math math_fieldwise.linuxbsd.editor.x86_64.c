
/* fieldwise_assign(Variant const&, Variant const&, String const&) */

Variant * fieldwise_assign(Variant *param_1,Variant *param_2,String *param_3)

{
  char cVar1;
  String *in_RCX;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 in_XMM1_Qa;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 local_78 [4] [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 == *(int *)param_3) {
    switch(*(int *)param_3) {
    case 5:
      uVar3 = Variant::operator_cast_to_Vector2((Variant *)param_3);
      local_78[0]._0_8_ = Variant::operator_cast_to_Vector2(param_2);
      cVar1 = String::operator==(in_RCX,"x");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"y");
        if (cVar1 != '\0') {
          local_78[0]._4_4_ = (int)((ulong)uVar3 >> 0x20);
        }
      }
      else {
        local_78[0]._0_4_ = (int)uVar3;
      }
      Variant::Variant(param_1,local_78[0]);
      break;
    case 6:
      uVar3 = Variant::operator_cast_to_Vector2i((Variant *)param_3);
      local_78[0]._0_8_ = Variant::operator_cast_to_Vector2i(param_2);
      cVar1 = String::operator==(in_RCX,"x");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"y");
        if (cVar1 != '\0') {
          local_78[0]._4_4_ = (int)((ulong)uVar3 >> 0x20);
        }
      }
      else {
        local_78[0]._0_4_ = (int)uVar3;
      }
      Variant::Variant(param_1,local_78[0]);
      break;
    case 7:
      uVar4 = Variant::operator_cast_to_Rect2((Variant *)param_3);
      uVar3 = in_XMM1_Qa;
      local_78[0]._0_8_ = Variant::operator_cast_to_Rect2(param_2);
      local_78[0]._8_8_ = uVar3;
      cVar1 = String::operator==(in_RCX,"x");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"y");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"w");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(in_RCX,"h");
            if (cVar1 != '\0') {
              local_78[0]._12_4_ = SUB84(in_XMM1_Qa,4);
            }
          }
          else {
            local_78[0]._8_4_ = (int)in_XMM1_Qa;
          }
        }
        else {
          local_78[0]._4_4_ = (int)((ulong)uVar4 >> 0x20);
        }
      }
      else {
        local_78[0]._0_4_ = (int)uVar4;
      }
      Variant::Variant(param_1,local_78[0]);
      break;
    case 8:
      auVar6 = Variant::operator_cast_to_Rect2i((Variant *)param_3);
      local_78[0] = Variant::operator_cast_to_Rect2i(param_2);
      cVar1 = String::operator==(in_RCX,"x");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"y");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"w");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(in_RCX,"h");
            if (cVar1 != '\0') {
              local_78[0]._12_4_ = auVar6._12_4_;
            }
          }
          else {
            local_78[0]._8_4_ = auVar6._8_4_;
          }
        }
        else {
          local_78[0]._4_4_ = auVar6._4_4_;
        }
      }
      else {
        local_78[0]._0_4_ = auVar6._0_4_;
      }
      Variant::Variant(param_1,local_78[0]);
      break;
    case 9:
      local_b8 = Variant::operator_cast_to_Vector3((Variant *)param_3);
      uVar5 = (undefined4)in_XMM1_Qa;
      local_b0 = uVar5;
      local_78[0]._0_8_ = Variant::operator_cast_to_Vector3(param_2);
      local_78[0]._8_4_ = uVar5;
      cVar1 = String::operator==(in_RCX,"x");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"y");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"z");
          if (cVar1 != '\0') {
            local_78[0]._8_4_ = local_b0;
          }
        }
        else {
          local_78[0]._4_4_ = local_b8._4_4_;
        }
      }
      else {
        local_78[0]._0_4_ = (undefined4)local_b8;
      }
      Variant::Variant(param_1,local_78[0]);
      break;
    case 10:
      auVar7 = Variant::operator_cast_to_Vector3i((Variant *)param_3);
      local_b8 = auVar7._0_8_;
      local_b0 = auVar7._8_4_;
      auVar7 = Variant::operator_cast_to_Vector3i(param_2);
      local_78[0]._0_8_ = auVar7._0_8_;
      local_78[0]._8_4_ = auVar7._8_4_;
      cVar1 = String::operator==(in_RCX,"x");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"y");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"z");
          if (cVar1 != '\0') {
            local_78[0]._8_4_ = local_b0;
          }
        }
        else {
          local_78[0]._4_4_ = local_b8._4_4_;
        }
      }
      else {
        local_78[0]._0_4_ = (undefined4)local_b8;
      }
      Variant::Variant(param_1,local_78[0]);
      break;
    case 0xb:
      Variant::operator_cast_to_Transform2D((Variant *)&local_b8);
      Variant::operator_cast_to_Transform2D((Variant *)local_78);
      cVar1 = String::operator==(in_RCX,"xx");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"xy");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"yx");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(in_RCX,"yy");
            if (cVar1 == '\0') {
              cVar1 = String::operator==(in_RCX,"ox");
              if (cVar1 == '\0') {
                String::operator==(in_RCX,"oy");
              }
            }
            else {
              local_78[0]._12_4_ = uStack_ac;
            }
          }
          else {
            local_78[0]._8_4_ = local_b0;
          }
        }
        else {
          local_78[0]._4_4_ = local_b8._4_4_;
        }
      }
      else {
        local_78[0]._0_4_ = (undefined4)local_b8;
      }
      Variant::Variant(param_1,(Variant *)local_78);
      break;
    case 0xc:
      uVar4 = Variant::operator_cast_to_Vector4((Variant *)param_3);
      uVar3 = in_XMM1_Qa;
      local_78[0]._0_8_ = Variant::operator_cast_to_Vector4(param_2);
      local_78[0]._8_8_ = uVar3;
      cVar1 = String::operator==(in_RCX,"x");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"y");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"z");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(in_RCX,"w");
            if (cVar1 != '\0') {
              local_78[0]._12_4_ = SUB84(in_XMM1_Qa,4);
            }
          }
          else {
            local_78[0]._8_4_ = (int)in_XMM1_Qa;
          }
        }
        else {
          local_78[0]._4_4_ = (int)((ulong)uVar4 >> 0x20);
        }
      }
      else {
        local_78[0]._0_4_ = (int)uVar4;
      }
      Variant::Variant(param_1,local_78[0]);
      break;
    case 0xd:
      auVar6 = Variant::operator_cast_to_Vector4i((Variant *)param_3);
      local_78[0] = Variant::operator_cast_to_Vector4i(param_2);
      cVar1 = String::operator==(in_RCX,"x");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"y");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"z");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(in_RCX,"w");
            if (cVar1 != '\0') {
              local_78[0]._12_4_ = auVar6._12_4_;
            }
          }
          else {
            local_78[0]._8_4_ = auVar6._8_4_;
          }
        }
        else {
          local_78[0]._4_4_ = auVar6._4_4_;
        }
      }
      else {
        local_78[0]._0_4_ = auVar6._0_4_;
      }
      Variant::Variant(param_1,local_78[0]);
      break;
    case 0xe:
      local_b8 = Variant::operator_cast_to_Plane((Variant *)param_3);
      _local_b0 = in_XMM1_Qa;
      local_78[0]._0_8_ = Variant::operator_cast_to_Plane(param_2);
      local_78[0]._8_8_ = in_XMM1_Qa;
      cVar1 = String::operator==(in_RCX,"x");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"y");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"z");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(in_RCX,"d");
            if (cVar1 != '\0') {
              local_78[0]._12_4_ = uStack_ac;
            }
          }
          else {
            local_78[0]._8_4_ = local_b0;
          }
        }
        else {
          local_78[0]._4_4_ = local_b8._4_4_;
        }
      }
      else {
        local_78[0]._0_4_ = (undefined4)local_b8;
      }
      Variant::Variant(param_1,local_78[0]);
      break;
    case 0xf:
      Variant::operator_cast_to_Quaternion((Variant *)&local_b8);
      Variant::operator_cast_to_Quaternion((Variant *)local_78);
      cVar1 = String::operator==(in_RCX,"x");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"y");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"z");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(in_RCX,"w");
            if (cVar1 != '\0') {
              local_78[0]._12_4_ = uStack_ac;
            }
          }
          else {
            local_78[0]._8_4_ = local_b0;
          }
        }
        else {
          local_78[0]._4_4_ = local_b8._4_4_;
        }
      }
      else {
        local_78[0]._0_4_ = (undefined4)local_b8;
      }
      Variant::Variant(param_1,(Variant *)local_78);
      break;
    case 0x10:
      Variant::operator_cast_to_AABB((Variant *)&local_b8);
      Variant::operator_cast_to_AABB((Variant *)local_78);
      cVar1 = String::operator==(in_RCX,"px");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"py");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"pz");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(in_RCX,"sx");
            if (cVar1 == '\0') {
              cVar1 = String::operator==(in_RCX,"sy");
              if (cVar1 == '\0') {
                String::operator==(in_RCX,"sz");
              }
            }
            else {
              local_78[0]._12_4_ = uStack_ac;
            }
          }
          else {
            local_78[0]._8_4_ = local_b0;
          }
        }
        else {
          local_78[0]._4_4_ = local_b8._4_4_;
        }
      }
      else {
        local_78[0]._0_4_ = (undefined4)local_b8;
      }
      Variant::Variant(param_1,(Variant *)local_78);
      break;
    case 0x11:
      Variant::operator_cast_to_Basis((Variant *)&local_b8);
      Variant::operator_cast_to_Basis((Variant *)local_78);
      cVar1 = String::operator==(in_RCX,"xx");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"xy");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"xz");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(in_RCX,"yx");
            if (cVar1 == '\0') {
              cVar1 = String::operator==(in_RCX,"yy");
              if (((cVar1 == '\0') && (cVar1 = String::operator==(in_RCX,"yz"), cVar1 == '\0')) &&
                 ((cVar1 = String::operator==(in_RCX,"zx"), cVar1 == '\0' &&
                  (cVar1 = String::operator==(in_RCX,"zy"), cVar1 == '\0')))) {
                String::operator==(in_RCX,"zz");
              }
            }
            else {
              local_78[0]._12_4_ = uStack_ac;
            }
          }
          else {
            local_78[0]._8_4_ = local_b0;
          }
        }
        else {
          local_78[0]._4_4_ = local_b8._4_4_;
        }
      }
      else {
        local_78[0]._0_4_ = (undefined4)local_b8;
      }
      Variant::Variant(param_1,(Variant *)local_78);
      break;
    case 0x12:
      Variant::operator_cast_to_Transform3D((Variant *)&local_b8);
      Variant::operator_cast_to_Transform3D((Variant *)local_78);
      cVar1 = String::operator==(in_RCX,"xx");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"xy");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"xz");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(in_RCX,"yx");
            if (cVar1 == '\0') {
              cVar1 = String::operator==(in_RCX,"yy");
              if ((((cVar1 == '\0') && (cVar1 = String::operator==(in_RCX,"yz"), cVar1 == '\0')) &&
                  (cVar1 = String::operator==(in_RCX,"zx"), cVar1 == '\0')) &&
                 (((cVar1 = String::operator==(in_RCX,"zy"), cVar1 == '\0' &&
                   (cVar1 = String::operator==(in_RCX,"zz"), cVar1 == '\0')) &&
                  ((cVar1 = String::operator==(in_RCX,"xo"), cVar1 == '\0' &&
                   (cVar1 = String::operator==(in_RCX,"yo"), cVar1 == '\0')))))) {
                String::operator==(in_RCX,"zo");
              }
            }
            else {
              local_78[0]._12_4_ = uStack_ac;
            }
          }
          else {
            local_78[0]._8_4_ = local_b0;
          }
        }
        else {
          local_78[0]._4_4_ = local_b8._4_4_;
        }
      }
      else {
        local_78[0]._0_4_ = (undefined4)local_b8;
      }
      Variant::Variant(param_1,(Variant *)local_78);
      break;
    case 0x13:
      Variant::operator_cast_to_Projection((Variant *)&local_b8);
      Variant::operator_cast_to_Projection((Variant *)local_78);
      cVar1 = String::operator==(in_RCX,"xx");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(in_RCX,"xy");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(in_RCX,"xz");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(in_RCX,"xw");
            if (cVar1 == '\0') {
              cVar1 = String::operator==(in_RCX,"yx");
              if (((((cVar1 == '\0') && (cVar1 = String::operator==(in_RCX,"yy"), cVar1 == '\0')) &&
                   (cVar1 = String::operator==(in_RCX,"yz"), cVar1 == '\0')) &&
                  ((cVar1 = String::operator==(in_RCX,"yw"), cVar1 == '\0' &&
                   (cVar1 = String::operator==(in_RCX,"zx"), cVar1 == '\0')))) &&
                 ((((cVar1 = String::operator==(in_RCX,"zy"), cVar1 == '\0' &&
                    ((cVar1 = String::operator==(in_RCX,"zz"), cVar1 == '\0' &&
                     (cVar1 = String::operator==(in_RCX,"zw"), cVar1 == '\0')))) &&
                   (cVar1 = String::operator==(in_RCX,"xo"), cVar1 == '\0')) &&
                  ((cVar1 = String::operator==(in_RCX,"yo"), cVar1 == '\0' &&
                   (cVar1 = String::operator==(in_RCX,"zo"), cVar1 == '\0')))))) {
                String::operator==(in_RCX,"wo");
              }
            }
            else {
              local_78[0]._12_4_ = uStack_ac;
            }
          }
          else {
            local_78[0]._8_4_ = local_b0;
          }
        }
        else {
          local_78[0]._4_4_ = local_b8._4_4_;
        }
      }
      else {
        local_78[0]._0_4_ = (undefined4)local_b8;
      }
      Variant::Variant(param_1,(Variant *)local_78);
      Projection::~Projection((Projection *)local_78);
      Projection::~Projection((Projection *)&local_b8);
      break;
    default:
      uVar3 = 0xef;
      pcVar2 = "Method/function failed. Returning: p_target";
      goto LAB_00100552;
    }
  }
  else {
    uVar3 = 0x2c;
    pcVar2 = "Condition \"p_target.get_type() != p_source.get_type()\" is true. Returning: p_target"
    ;
LAB_00100552:
    _err_print_error("fieldwise_assign","core/math/math_fieldwise.cpp",uVar3,pcVar2,0,0);
    Variant::Variant(param_1,param_2);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


