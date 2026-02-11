
/* OpenXRUtil::get_view_configuration_name(XrViewConfigurationType) */

OpenXRUtil * __thiscall OpenXRUtil::get_view_configuration_name(OpenXRUtil *this,uint param_2)

{
  long *plVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0x3b9b5a88) {
    *(undefined8 *)this = 0;
    local_38 = "XR_VIEW_CONFIGURATION_TYPE_PRIMARY_STEREO_WITH_FOVEATED_INSET";
    local_30 = 0x3d;
    String::parse_latin1((StrRange *)this);
    goto LAB_001000a8;
  }
  if (param_2 < 0x3b9b5a89) {
    if (param_2 == 1) {
      *(undefined8 *)this = 0;
      local_38 = "XR_VIEW_CONFIGURATION_TYPE_PRIMARY_MONO";
      local_30 = 0x27;
      String::parse_latin1((StrRange *)this);
      goto LAB_001000a8;
    }
    if (param_2 == 2) {
      *(undefined8 *)this = 0;
      local_38 = "XR_VIEW_CONFIGURATION_TYPE_PRIMARY_STEREO";
      local_30 = 0x29;
      String::parse_latin1((StrRange *)this);
      goto LAB_001000a8;
    }
  }
  else {
    if (param_2 == 0x3b9b9cf0) {
      *(undefined8 *)this = 0;
      local_38 = "XR_VIEW_CONFIGURATION_TYPE_SECONDARY_MONO_FIRST_PERSON_OBSERVER_MSFT";
      local_30 = 0x44;
      String::parse_latin1((StrRange *)this);
      goto LAB_001000a8;
    }
    if (param_2 == 0x7fffffff) {
      *(undefined8 *)this = 0;
      local_38 = "XR_VIEW_CONFIGURATION_TYPE_MAX_ENUM";
      local_30 = 0x23;
      String::parse_latin1((StrRange *)this);
      goto LAB_001000a8;
    }
  }
  String::num_int64((long)&local_38,param_2,true);
  operator+((char *)this,(String *)"Unknown XrViewConfigurationType: ");
  pcVar2 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
LAB_001000a8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRUtil::get_reference_space_name(XrReferenceSpaceType) */

OpenXRUtil * __thiscall OpenXRUtil::get_reference_space_name(OpenXRUtil *this,uint param_2)

{
  long *plVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0x3b9ca2a8) {
    *(undefined8 *)this = 0;
    local_38 = "XR_REFERENCE_SPACE_TYPE_COMBINED_EYE_VARJO";
    local_30 = 0x2a;
    String::parse_latin1((StrRange *)this);
    goto LAB_00100270;
  }
  if (param_2 < 0x3b9ca2a9) {
    if (param_2 == 3) {
      *(undefined8 *)this = 0;
      local_38 = "XR_REFERENCE_SPACE_TYPE_STAGE";
LAB_0010020a:
      local_30 = 0x1d;
      String::parse_latin1((StrRange *)this);
      goto LAB_00100270;
    }
    if (param_2 < 4) {
      if (param_2 == 1) {
        *(undefined8 *)this = 0;
        local_38 = "XR_REFERENCE_SPACE_TYPE_VIEW";
        local_30 = 0x1c;
        String::parse_latin1((StrRange *)this);
        goto LAB_00100270;
      }
      if (param_2 == 2) {
        *(undefined8 *)this = 0;
        local_38 = "XR_REFERENCE_SPACE_TYPE_LOCAL";
        goto LAB_0010020a;
      }
    }
    else if (param_2 == 0x3b9b5e70) {
      *(undefined8 *)this = 0;
      local_38 = "XR_REFERENCE_SPACE_TYPE_UNBOUNDED_MSFT";
      local_30 = 0x26;
      String::parse_latin1((StrRange *)this);
      goto LAB_00100270;
    }
  }
  else {
    if (param_2 == 0x3ba14a10) {
      *(undefined8 *)this = 0;
      local_38 = "XR_REFERENCE_SPACE_TYPE_LOCAL_FLOOR";
      local_30 = 0x23;
      String::parse_latin1((StrRange *)this);
      goto LAB_00100270;
    }
    if (param_2 == 0x7fffffff) {
      *(undefined8 *)this = 0;
      local_38 = "XR_REFERENCE_SPACE_TYPE_MAX_ENUM";
      local_30 = 0x20;
      String::parse_latin1((StrRange *)this);
      goto LAB_00100270;
    }
    if (param_2 == 0x3b9ce8f8) {
      *(undefined8 *)this = 0;
      local_38 = "XR_REFERENCE_SPACE_TYPE_LOCALIZATION_MAP_ML";
      local_30 = 0x2b;
      String::parse_latin1((StrRange *)this);
      goto LAB_00100270;
    }
  }
  String::num_int64((long)&local_38,param_2,true);
  operator+((char *)this,(String *)"Unknown XrReferenceSpaceType: ");
  pcVar2 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
LAB_00100270:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRUtil::get_structure_type_name(XrStructureType) */

OpenXRUtil * __thiscall OpenXRUtil::get_structure_type_name(OpenXRUtil *this,uint param_2)

{
  long *plVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x3b9c970e < param_2) {
    if (param_2 == 0x3b9e19a8) {
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_PASSTHROUGH_PREFERENCES_META";
      local_30 = 0x24;
      String::parse_latin1((StrRange *)this);
      goto LAB_001009f8;
    }
    if (param_2 < 0x3b9e19a9) {
      if (param_2 == 0x3b9cf4b1) {
        *(undefined8 *)this = 0;
        local_38 = "XR_TYPE_SPATIAL_ANCHOR_FROM_PERSISTED_ANCHOR_CREATE_INFO_MSFT";
        local_30 = 0x3d;
        String::parse_latin1((StrRange *)this);
        goto LAB_001009f8;
      }
      if (param_2 < 0x3b9cf4b2) {
        if (param_2 < 0x3b9ce519) {
          if (0x3b9ce50f < param_2) {
            if (param_2 + 0xc4631aef < 8) {
              *(undefined8 *)this = 0;
              switch(param_2) {
              case 0x3b9ce511:
                local_30 = 0x26;
                local_38 = "XR_TYPE_MARKER_DETECTOR_CREATE_INFO_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9ce512:
                local_30 = 0x25;
                local_38 = "XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9ce513:
                local_30 = 0x24;
                local_38 = "XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9ce514:
                local_30 = 0x29;
                local_38 = "XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9ce515:
                local_30 = 0x2e;
                local_38 = "XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9ce516:
                local_30 = 0x28;
                local_38 = "XR_TYPE_MARKER_DETECTOR_SNAPSHOT_INFO_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9ce517:
                local_30 = 0x20;
                local_38 = "XR_TYPE_MARKER_DETECTOR_STATE_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9ce518:
                local_30 = 0x23;
                local_38 = "XR_TYPE_MARKER_SPACE_CREATE_INFO_ML";
                String::parse_latin1((StrRange *)this);
              }
            }
            else {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML";
              local_30 = 0x31;
              String::parse_latin1((StrRange *)this);
            }
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9ca2a9) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO";
            local_30 = 0x2e;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 < 0x3b9ca2aa) {
            if (param_2 < 0x3b9c9ade) {
              if (0x3b9c9ad7 < param_2) {
                if (param_2 + 0xc4636527 < 5) {
                  *(undefined8 *)this = 0;
                  switch(param_2) {
                  case 0x3b9c9ad9:
                    local_30 = 0x22;
                    local_38 = "XR_TYPE_RENDER_MODEL_PROPERTIES_FB";
                    String::parse_latin1((StrRange *)this);
                    break;
                  case 0x3b9c9ada:
                    local_30 = 0x1e;
                    local_38 = "XR_TYPE_RENDER_MODEL_BUFFER_FB";
                    String::parse_latin1((StrRange *)this);
                    break;
                  case 0x3b9c9adb:
                    local_30 = 0x21;
                    local_38 = "XR_TYPE_RENDER_MODEL_LOAD_INFO_FB";
                    String::parse_latin1((StrRange *)this);
                    break;
                  case 0x3b9c9adc:
                    local_30 = 0x29;
                    local_38 = "XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB";
                    String::parse_latin1((StrRange *)this);
                    break;
                  case 0x3b9c9add:
                    local_30 = 0x2c;
                    local_38 = "XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB";
                    String::parse_latin1((StrRange *)this);
                  }
                }
                else {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_RENDER_MODEL_PATH_INFO_FB";
                  local_30 = 0x21;
                  String::parse_latin1((StrRange *)this);
                }
                goto LAB_001009f8;
              }
            }
            else {
              if (param_2 == 0x3b9c9ec0) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_BINDING_MODIFICATIONS_KHR";
                local_30 = 0x21;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 == 0x3b9ca2a8) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO";
                local_30 = 0x2c;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
            }
          }
          else {
            if (param_2 == 0x3b9cae62) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_MARKER_SPACE_CREATE_INFO_VARJO";
              local_30 = 0x26;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 < 0x3b9cae63) {
              if (param_2 == 0x3b9cae60) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO";
                local_30 = 0x2f;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 == 0x3b9cae61) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_EVENT_DATA_MARKER_TRACKING_UPDATE_VARJO";
                local_30 = 0x2f;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 == 0x3b9ca2aa) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO";
                local_30 = 0x32;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 == 0x3b9ca690) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_VARJO";
                local_30 = 0x2a;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
            }
            else {
              if (param_2 == 0x3b9cdd40) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML";
                local_30 = 0x27;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 == 0x3b9ce128) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_COORDINATE_SPACE_CREATE_INFO_ML";
                local_30 = 0x27;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 == 0x3b9cd958) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_FRAME_END_INFO_ML";
                local_30 = 0x19;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
            }
          }
        }
        else if (param_2 < 0x3b9cf0d5) {
          if (0x3b9cf0c7 < param_2) {
            if (param_2 + 0xc4630f37 < 0xc) {
              *(undefined8 *)this = 0;
              switch(param_2) {
              case 0x3b9cf0c9:
                local_30 = 0x2c;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_QUERY_INFO_RADIUS_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9cf0ca:
                local_30 = 0x2b;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_QUERY_COMPLETION_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9cf0cb:
                local_30 = 0x31;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_UUIDS_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9cf0cc:
                local_30 = 0x27;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_PUBLISH_INFO_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9cf0cd:
                local_30 = 0x2d;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9cf0ce:
                local_30 = 0x26;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_DELETE_INFO_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9cf0cf:
                local_30 = 0x2c;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9cf0d0:
                local_30 = 0x31;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_INFO_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9cf0d1:
                local_30 = 0x37;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9cf0d2:
                local_30 = 0x35;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9cf0d3:
                local_30 = 0x34;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9cf0d4:
                local_30 = 0x3f;
                local_38 = "XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML";
                String::parse_latin1((StrRange *)this);
              }
            }
            else {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPATIAL_ANCHORS_CREATE_STORAGE_INFO_ML";
              local_30 = 0x2e;
              String::parse_latin1((StrRange *)this);
            }
            goto LAB_001009f8;
          }
          if (param_2 < 0x3b9ce8fd) {
            if (0x3b9ce8f7 < param_2) {
              if (param_2 + 0xc4631707 < 4) {
                *(undefined8 *)this = 0;
                switch(param_2) {
                case 0x3b9ce8f9:
                  local_30 = 0x2a;
                  local_38 = "XR_TYPE_EVENT_DATA_LOCALIZATION_CHANGED_ML";
                  String::parse_latin1((StrRange *)this);
                  break;
                case 0x3b9ce8fa:
                  local_30 = 0x28;
                  local_38 = "XR_TYPE_MAP_LOCALIZATION_REQUEST_INFO_ML";
                  String::parse_latin1((StrRange *)this);
                  break;
                case 0x3b9ce8fb:
                  local_30 = 0x27;
                  local_38 = "XR_TYPE_LOCALIZATION_MAP_IMPORT_INFO_ML";
                  String::parse_latin1((StrRange *)this);
                  break;
                case 0x3b9ce8fc:
                  local_30 = 0x2a;
                  local_38 = "XR_TYPE_LOCALIZATION_ENABLE_EVENTS_INFO_ML";
                  String::parse_latin1((StrRange *)this);
                }
              }
              else {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_LOCALIZATION_MAP_ML";
                local_30 = 0x1b;
                String::parse_latin1((StrRange *)this);
              }
              goto LAB_001009f8;
            }
          }
          else {
            if (param_2 == 0x3b9cece1) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_CREATE_SPATIAL_ANCHORS_COMPLETION_ML";
              local_30 = 0x2c;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 == 0x3b9cece2) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPATIAL_ANCHOR_STATE_ML";
              local_30 = 0x1f;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 == 0x3b9cece0) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_POSE_ML";
              local_30 = 0x30;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
          }
        }
        else if (param_2 == 0x3b9cf4b0) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_SPATIAL_ANCHOR_PERSISTENCE_INFO_MSFT";
          local_30 = 0x2c;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
      }
      else {
        if (param_2 == 0x3b9d7599) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_ROOM_LAYOUT_FB";
          local_30 = 0x16;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 < 0x3b9d759a) {
          if (param_2 == 0x3b9d339a) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_EVENT_DATA_SPACE_SAVE_COMPLETE_FB";
            local_30 = 0x29;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 < 0x3b9d339b) {
            if (param_2 == 0x3b9d2b94) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPACE_COMPONENT_FILTER_INFO_FB";
              local_30 = 0x26;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 < 0x3b9d2b95) {
              if (param_2 == 0x3b9d2b61) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_SPACE_QUERY_INFO_FB";
                local_30 = 0x1b;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 < 0x3b9d2b62) {
                if (param_2 == 0x3b9d0839) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT";
                  local_30 = 0x25;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9d083a) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SCENE_MARKER_QR_CODES_MSFT";
                  local_30 = 0x22;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9d0838) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SCENE_MARKERS_MSFT";
                  local_30 = 0x1a;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
              else {
                if (param_2 == 0x3b9d2b62) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SPACE_QUERY_RESULTS_FB";
                  local_30 = 0x1e;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9d2b63) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SPACE_STORAGE_LOCATION_FILTER_INFO_FB";
                  local_30 = 0x2d;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
            }
            else {
              if (param_2 == 0x3b9d2bc8) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_EVENT_DATA_SPACE_QUERY_COMPLETE_FB";
                local_30 = 0x2a;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 < 0x3b9d2bc9) {
                if (param_2 == 0x3b9d2b96) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SPACE_UUID_FILTER_INFO_FB";
                  local_30 = 0x21;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9d2bc7) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_EVENT_DATA_SPACE_QUERY_RESULTS_AVAILABLE_FB";
                  local_30 = 0x33;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
              else {
                if (param_2 == 0x3b9d3330) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SPACE_SAVE_INFO_FB";
                  local_30 = 0x1a;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9d3331) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SPACE_ERASE_INFO_FB";
                  local_30 = 0x1b;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
            }
          }
          else {
            if (param_2 == 0x3b9d5e29) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPACE_SHARE_INFO_FB";
              local_30 = 0x1b;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 < 0x3b9d5e2a) {
              if (param_2 == 0x3b9d3ee8) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_SWAPCHAIN_STATE_ANDROID_SURFACE_DIMENSIONS_FB";
                local_30 = 0x35;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 < 0x3b9d3ee9) {
                if (param_2 == 0x3b9d339b) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_EVENT_DATA_SPACE_ERASE_COMPLETE_FB";
                  local_30 = 0x2a;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9d3b00) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SWAPCHAIN_IMAGE_FOVEATION_VULKAN_FB";
                  local_30 = 0x2b;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
              else {
                if (param_2 == 0x3b9d42d0) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SWAPCHAIN_STATE_SAMPLER_OPENGL_ES_FB";
                  local_30 = 0x2c;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9d46b8) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SWAPCHAIN_STATE_SAMPLER_VULKAN_FB";
                  local_30 = 0x29;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
            }
            else {
              if (param_2 == 0x3b9d65f9) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB";
                local_30 = 0x27;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 < 0x3b9d65fa) {
                if (param_2 == 0x3b9d5e2a) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_EVENT_DATA_SPACE_SHARE_COMPLETE_FB";
                  local_30 = 0x2a;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9d65f8) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB";
                  local_30 = 0x2c;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
              else {
                if (param_2 == 0x3b9d6dc9) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_HAPTIC_AMPLITUDE_ENVELOPE_VIBRATION_FB";
                  local_30 = 0x2e;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9d7598) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SEMANTIC_LABELS_FB";
                  local_30 = 0x1a;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
            }
          }
        }
        else {
          if (param_2 == 0x3b9ddb2d) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_FACE_TRACKER_CREATE_INFO_FB";
            local_30 = 0x23;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 < 0x3b9ddb2e) {
            if (param_2 == 0x3b9dd358) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPACE_CONTAINER_FB";
              local_30 = 0x1a;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 < 0x3b9dd359) {
              if (param_2 == 0x3b9dc7a0) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_DIGITAL_LENS_CONTROL_ALMALENCE";
                local_30 = 0x26;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 < 0x3b9dc7a1) {
                if (param_2 == 0x3b9d759a) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_BOUNDARY_2D_FB";
                  local_30 = 0x16;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9d75a2) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SEMANTIC_LABELS_SUPPORT_INFO_FB";
                  local_30 = 0x27;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
              else {
                if (param_2 == 0x3b9dcf71) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_EVENT_DATA_SCENE_CAPTURE_COMPLETE_FB";
                  local_30 = 0x2c;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9dcfa2) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SCENE_CAPTURE_REQUEST_INFO_FB";
                  local_30 = 0x25;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
            }
            else {
              if (param_2 == 0x3b9dd742) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META";
                local_30 = 0x34;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 < 0x3b9dd743) {
                if (param_2 == 0x3b9dd740) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_FOVEATION_EYE_TRACKED_PROFILE_CREATE_INFO_META";
                  local_30 = 0x36;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9dd741) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META";
                  local_30 = 0x28;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
              else {
                if (param_2 == 0x3b9ddb2a) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_FACE_EXPRESSION_INFO_FB";
                  local_30 = 0x1f;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9ddb2c) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB";
                  local_30 = 0x2a;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
            }
          }
          else {
            if (param_2 == 0x3b9de2fa) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_PASSTHROUGH_KEYBOARD_HANDS_INTENSITY_FB";
              local_30 = 0x2f;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 < 0x3b9de2fb) {
              if (param_2 == 0x3b9ddf12) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_EYE_GAZES_INFO_FB";
                local_30 = 0x19;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 < 0x3b9ddf13) {
                if (param_2 == 0x3b9ddb2e) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_FACE_EXPRESSION_WEIGHTS_FB";
                  local_30 = 0x22;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9ddf11) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_EYE_TRACKER_CREATE_INFO_FB";
                  local_30 = 0x22;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
              else {
                if (param_2 == 0x3b9ddf13) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_EYE_GAZES_FB";
                  local_30 = 0x14;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9ddf14) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB";
                  local_30 = 0x29;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
            }
            else {
              if (param_2 == 0x3b9dfa6a) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_DEVICE_PCM_SAMPLE_RATE_STATE_FB";
                local_30 = 0x27;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 < 0x3b9dfa6b) {
                if (param_2 == 0x3b9de6e0) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB";
                  local_30 = 0x25;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9dfa69) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_HAPTIC_PCM_VIBRATION_FB";
                  local_30 = 0x1f;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
              else {
                if (param_2 == 0x3b9e0620) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB";
                  local_30 = 0x27;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
                if (param_2 == 0x3b9e15c0) {
                  *(undefined8 *)this = 0;
                  local_38 = "XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META";
                  local_30 = 0x29;
                  String::parse_latin1((StrRange *)this);
                  goto LAB_001009f8;
                }
              }
            }
          }
        }
      }
      goto switchD_0010043e_caseD_e;
    }
    if (param_2 == 0x3b9fa430) {
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_FOVEATION_APPLY_INFO_HTC";
      local_30 = 0x20;
      String::parse_latin1((StrRange *)this);
      goto LAB_001009f8;
    }
    if (0x3b9fa430 < param_2) {
      if (param_2 == 0x3ba1f20a) {
        *(undefined8 *)this = 0;
        local_38 = "XR_TYPE_FUTURE_COMPLETION_EXT";
        local_30 = 0x1d;
        String::parse_latin1((StrRange *)this);
        goto LAB_001009f8;
      }
      if (param_2 < 0x3ba1f20b) {
        if (param_2 == 0x3ba082d9) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_FORCE_FEEDBACK_CURL_APPLY_LOCATIONS_MNDX";
          local_30 = 0x30;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 < 0x3ba082da) {
          if (param_2 < 0x3b9fac05) {
            if (0x3b9fabff < param_2) {
              if (param_2 + 0xc46053ff < 4) {
                *(undefined8 *)this = 0;
                switch(param_2) {
                case 0x3b9fac01:
                  local_30 = 0x24;
                  local_38 = "XR_TYPE_BODY_TRACKER_CREATE_INFO_HTC";
                  String::parse_latin1((StrRange *)this);
                  break;
                case 0x3b9fac02:
                  local_30 = 0x23;
                  local_38 = "XR_TYPE_BODY_JOINTS_LOCATE_INFO_HTC";
                  String::parse_latin1((StrRange *)this);
                  break;
                case 0x3b9fac03:
                  local_30 = 0x20;
                  local_38 = "XR_TYPE_BODY_JOINT_LOCATIONS_HTC";
                  String::parse_latin1((StrRange *)this);
                  break;
                case 0x3b9fac04:
                  local_30 = 0x19;
                  local_38 = "XR_TYPE_BODY_SKELETON_HTC";
                  String::parse_latin1((StrRange *)this);
                }
              }
              else {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC";
                local_30 = 0x2b;
                String::parse_latin1((StrRange *)this);
              }
              goto LAB_001009f8;
            }
            if (param_2 == 0x3b9fa818) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC";
              local_30 = 0x24;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 < 0x3b9fa819) {
              if (param_2 == 0x3b9fa431) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_FOVEATION_DYNAMIC_MODE_INFO_HTC";
                local_30 = 0x27;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
              if (param_2 == 0x3b9fa432) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_FOVEATION_CUSTOM_MODE_INFO_HTC";
                local_30 = 0x26;
                String::parse_latin1((StrRange *)this);
                goto LAB_001009f8;
              }
            }
            else if (param_2 == 0x3b9fa819) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_HTC";
              local_30 = 0x26;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
          }
          else {
            if (param_2 == 0x3ba07b08) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT";
              local_30 = 0x28;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 == 0x3ba082d8) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX";
              local_30 = 0x32;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
          }
        }
        else if (param_2 < 0x3ba155d0) {
          if (0x3ba155c8 < param_2) {
            if (param_2 + 0xc45eaa36 < 6) {
              *(undefined8 *)this = 0;
              switch(param_2) {
              case 0x3ba155ca:
                local_30 = 0x25;
                local_38 = "XR_TYPE_PLANE_DETECTOR_BEGIN_INFO_EXT";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3ba155cb:
                local_30 = 0x23;
                local_38 = "XR_TYPE_PLANE_DETECTOR_GET_INFO_EXT";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3ba155cc:
                local_30 = 0x24;
                local_38 = "XR_TYPE_PLANE_DETECTOR_LOCATIONS_EXT";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3ba155cd:
                local_30 = 0x23;
                local_38 = "XR_TYPE_PLANE_DETECTOR_LOCATION_EXT";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3ba155ce:
                local_30 = 0x29;
                local_38 = "XR_TYPE_PLANE_DETECTOR_POLYGON_BUFFER_EXT";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3ba155cf:
                local_30 = 0x2d;
                local_38 = "XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT";
                String::parse_latin1((StrRange *)this);
              }
            }
            else {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_PLANE_DETECTOR_CREATE_INFO_EXT";
              local_30 = 0x26;
              String::parse_latin1((StrRange *)this);
            }
            goto LAB_001009f8;
          }
          if (param_2 == 0x3ba151e0) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT";
            local_30 = 0x2a;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3ba151e1) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT";
            local_30 = 0x2b;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
        else {
          if (param_2 == 0x3ba1f208) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_FUTURE_CANCEL_INFO_EXT";
            local_30 = 0x1e;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3ba1f209) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_FUTURE_POLL_INFO_EXT";
            local_30 = 0x1c;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
      }
      else if (param_2 < 0x3ba2059d) {
        if (0x3ba20590 < param_2) {
          if (param_2 + 0xc45dfa6e < 0xb) {
            *(undefined8 *)this = 0;
            switch(param_2) {
            case 0x3ba20592:
              local_30 = 0x28;
              local_38 = "XR_TYPE_WORLD_MESH_STATE_REQUEST_INFO_ML";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3ba20593:
              local_30 = 0x21;
              local_38 = "XR_TYPE_WORLD_MESH_BLOCK_STATE_ML";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3ba20594:
              local_30 = 0x2e;
              local_38 = "XR_TYPE_WORLD_MESH_STATE_REQUEST_COMPLETION_ML";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3ba20595:
              local_30 = 0x32;
              local_38 = "XR_TYPE_WORLD_MESH_BUFFER_RECOMMENDED_SIZE_INFO_ML";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3ba20596:
              local_30 = 0x21;
              local_38 = "XR_TYPE_WORLD_MESH_BUFFER_SIZE_ML";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3ba20597:
              local_30 = 0x1c;
              local_38 = "XR_TYPE_WORLD_MESH_BUFFER_ML";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3ba20598:
              local_30 = 0x23;
              local_38 = "XR_TYPE_WORLD_MESH_BLOCK_REQUEST_ML";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3ba20599:
              local_30 = 0x1e;
              local_38 = "XR_TYPE_WORLD_MESH_GET_INFO_ML";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3ba2059a:
              local_30 = 0x1b;
              local_38 = "XR_TYPE_WORLD_MESH_BLOCK_ML";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3ba2059b:
              local_30 = 0x28;
              local_38 = "XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_ML";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3ba2059c:
              local_30 = 0x2d;
              local_38 = "XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_INFO_ML";
              String::parse_latin1((StrRange *)this);
            }
          }
          else {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_WORLD_MESH_DETECTOR_CREATE_INFO_ML";
            local_30 = 0x2a;
            String::parse_latin1((StrRange *)this);
          }
          goto LAB_001009f8;
        }
        if (param_2 == 0x3ba1f9da) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_SPACE_VELOCITIES";
          local_30 = 0x18;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 < 0x3ba1f9db) {
          if (param_2 == 0x3ba1f5f1) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT";
            local_30 = 0x2b;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 < 0x3ba1f5f2) {
            if (param_2 == 0x3ba1f20b) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_FUTURE_POLL_RESULT_EXT";
              local_30 = 0x1e;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 == 0x3ba1f5f0) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_EVENT_DATA_USER_PRESENCE_CHANGED_EXT";
              local_30 = 0x2c;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
          }
          else {
            if (param_2 == 0x3ba1f9d8) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPACES_LOCATE_INFO";
              local_30 = 0x1a;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 == 0x3ba1f9d9) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPACE_LOCATIONS";
              local_30 = 0x17;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
          }
        }
        else {
          if (param_2 == 0x3ba1fdc2) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_USER_CALIBRATION_ENABLE_EVENTS_INFO_ML";
            local_30 = 0x2e;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 < 0x3ba1fdc3) {
            if (param_2 == 0x3ba1fdc0) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_EVENT_DATA_HEADSET_FIT_CHANGED_ML";
              local_30 = 0x29;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 == 0x3ba1fdc1) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_EVENT_DATA_EYE_CALIBRATION_CHANGED_ML";
              local_30 = 0x2d;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
          }
          else if (param_2 == 0x3ba201a8) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SYSTEM_NOTIFICATIONS_SET_INFO_ML";
            local_30 = 0x28;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
      }
      else if (param_2 == 0x7fffffff) {
        *(undefined8 *)this = 0;
        local_38 = "XR_STRUCTURE_TYPE_MAX_ENUM";
        local_30 = 0x1a;
        String::parse_latin1((StrRange *)this);
        goto LAB_001009f8;
      }
      goto switchD_0010043e_caseD_e;
    }
    if (param_2 == 0x3b9eaa31) {
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_GET_INFO_META";
      local_30 = 0x32;
      String::parse_latin1((StrRange *)this);
      goto LAB_001009f8;
    }
    if (param_2 < 0x3b9eaa32) {
      if (param_2 < 0x3b9e218b) {
        if (0x3b9e2178 < param_2) {
          switch(param_2) {
          case 0x3b9e2179:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META";
            local_30 = 0x2f;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e217a:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VIRTUAL_KEYBOARD_CREATE_INFO_META";
            local_30 = 0x29;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e217b:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VIRTUAL_KEYBOARD_SPACE_CREATE_INFO_META";
            local_30 = 0x2f;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e217c:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VIRTUAL_KEYBOARD_LOCATION_INFO_META";
            local_30 = 0x2b;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e217d:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VIRTUAL_KEYBOARD_MODEL_VISIBILITY_SET_INFO_META";
            local_30 = 0x37;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e217e:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VIRTUAL_KEYBOARD_ANIMATION_STATE_META";
            local_30 = 0x2d;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e217f:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VIRTUAL_KEYBOARD_MODEL_ANIMATION_STATES_META";
            local_30 = 0x34;
            String::parse_latin1((StrRange *)this);
            break;
          default:
            goto switchD_0010043e_caseD_e;
          case 0x3b9e2181:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VIRTUAL_KEYBOARD_TEXTURE_DATA_META";
            local_30 = 0x2a;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e2182:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VIRTUAL_KEYBOARD_INPUT_INFO_META";
            local_30 = 0x28;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e2183:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VIRTUAL_KEYBOARD_TEXT_CONTEXT_CHANGE_INFO_META";
            local_30 = 0x36;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e2186:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_COMMIT_TEXT_META";
            local_30 = 0x34;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e2187:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_BACKSPACE_META";
            local_30 = 0x32;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e2188:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_ENTER_META";
            local_30 = 0x2e;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e2189:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_SHOWN_META";
            local_30 = 0x2e;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9e218a:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_HIDDEN_META";
            local_30 = 0x2f;
            String::parse_latin1((StrRange *)this);
          }
          goto LAB_001009f8;
        }
      }
      else {
        if (param_2 == 0x3b9e6bb0) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_SPACE_LIST_SAVE_INFO_FB";
          local_30 = 0x1f;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 < 0x3b9e6bb1) {
          if (param_2 == 0x3b9e5441) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_PERFORMANCE_METRICS_STATE_META";
            local_30 = 0x26;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 < 0x3b9e5442) {
            if (param_2 == 0x3b9e3cd0) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_EXTERNAL_CAMERA_OCULUS";
              local_30 = 0x1e;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 == 0x3b9e40b8) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META";
              local_30 = 0x29;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
          }
          else if (param_2 == 0x3b9e5442) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_PERFORMANCE_METRICS_COUNTER_META";
            local_30 = 0x28;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
        else {
          if (param_2 == 0x3b9e8708) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META";
            local_30 = 0x29;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 < 0x3b9e8709) {
            if (param_2 == 0x3b9e6bb1) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_EVENT_DATA_SPACE_LIST_SAVE_COMPLETE_FB";
              local_30 = 0x2e;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 == 0x3b9e7769) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPACE_USER_CREATE_INFO_FB";
              local_30 = 0x21;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
          }
          else if (param_2 == 0x3b9eaa30) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_META";
            local_30 = 0x29;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
      }
    }
    else if (param_2 < 0x3b9f3ac0) {
      if (0x3b9f3ab7 < param_2) {
        if (param_2 + 0xc460c547 < 7) {
          *(undefined8 *)this = 0;
          switch(param_2) {
          case 0x3b9f3ab9:
            local_30 = 0x34;
            local_38 = "XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_CREATE_INFO_META";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9f3aba:
            local_30 = 0x2e;
            local_38 = "XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_STATE_META";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9f3abb:
            local_30 = 0x31;
            local_38 = "XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_ACQUIRE_INFO_META";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9f3abc:
            local_30 = 0x29;
            local_38 = "XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_VIEW_META";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9f3abd:
            local_30 = 0x24;
            local_38 = "XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_META";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9f3abe:
            local_30 = 0x34;
            local_38 = "XR_TYPE_ENVIRONMENT_DEPTH_HAND_REMOVAL_SET_INFO_META";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9f3abf:
            local_30 = 0x30;
            local_38 = "XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META";
            String::parse_latin1((StrRange *)this);
          }
        }
        else {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_ENVIRONMENT_DEPTH_PROVIDER_CREATE_INFO_META";
          local_30 = 0x33;
          String::parse_latin1((StrRange *)this);
        }
        goto LAB_001009f8;
      }
      if (param_2 == 0x3b9ee4c9) {
        *(undefined8 *)this = 0;
        local_38 = "XR_TYPE_SPACE_TRIANGLE_MESH_GET_INFO_META";
        local_30 = 0x29;
        String::parse_latin1((StrRange *)this);
        goto LAB_001009f8;
      }
      if (param_2 < 0x3b9ee4ca) {
        if (param_2 == 0x3b9ed912) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_PASSTHROUGH_COLOR_LUT_UPDATE_INFO_META";
          local_30 = 0x2e;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 < 0x3b9ed913) {
          if (param_2 == 0x3b9ed910) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META";
            local_30 = 0x34;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9ed911) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_PASSTHROUGH_COLOR_LUT_CREATE_INFO_META";
            local_30 = 0x2e;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
        else {
          if (param_2 == 0x3b9ed974) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META";
            local_30 = 0x26;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9ed975) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META";
            local_30 = 0x33;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
      }
      else {
        if (param_2 == 0x3b9f2b26) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_FACE_TRACKER_CREATE_INFO2_FB";
          local_30 = 0x24;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 < 0x3b9f2b27) {
          if (param_2 == 0x3b9ee4ca) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SPACE_TRIANGLE_MESH_META";
            local_30 = 0x20;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9f2b25) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB";
            local_30 = 0x2b;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
        else {
          if (param_2 == 0x3b9f2b27) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_FACE_EXPRESSION_INFO2_FB";
            local_30 = 0x20;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9f2b28) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_FACE_EXPRESSION_WEIGHTS2_FB";
            local_30 = 0x23;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
      }
    }
    else {
      if (param_2 == 0x3b9fa04b) {
        *(undefined8 *)this = 0;
        local_38 = "XR_TYPE_PASSTHROUGH_MESH_TRANSFORM_INFO_HTC";
        local_30 = 0x2b;
        String::parse_latin1((StrRange *)this);
        goto LAB_001009f8;
      }
      if (param_2 < 0x3b9fa04c) {
        if (param_2 == 0x3b9fa049) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_PASSTHROUGH_CREATE_INFO_HTC";
          local_30 = 0x23;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 == 0x3b9fa04a) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_PASSTHROUGH_COLOR_HTC";
          local_30 = 0x1d;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
      }
      else if (param_2 == 0x3b9fa04c) {
        *(undefined8 *)this = 0;
        local_38 = "XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC";
        local_30 = 0x29;
        String::parse_latin1((StrRange *)this);
        goto LAB_001009f8;
      }
    }
    goto switchD_0010043e_caseD_e;
  }
  if (0x3b9c96ef < param_2) {
    switch(param_2) {
    case 0x3b9c96f0:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB";
      local_30 = 0x28;
      String::parse_latin1((StrRange *)this);
      break;
    case 0x3b9c96f1:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_PASSTHROUGH_CREATE_INFO_FB";
      local_30 = 0x22;
      String::parse_latin1((StrRange *)this);
      break;
    case 0x3b9c96f2:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB";
      local_30 = 0x28;
      String::parse_latin1((StrRange *)this);
      break;
    case 0x3b9c96f3:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB";
      local_30 = 0x28;
      String::parse_latin1((StrRange *)this);
      break;
    case 0x3b9c96f4:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_GEOMETRY_INSTANCE_CREATE_INFO_FB";
      local_30 = 0x28;
      String::parse_latin1((StrRange *)this);
      break;
    case 0x3b9c96f5:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_GEOMETRY_INSTANCE_TRANSFORM_FB";
      local_30 = 0x26;
      String::parse_latin1((StrRange *)this);
      break;
    case 0x3b9c96f6:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB";
      local_30 = 0x29;
      String::parse_latin1((StrRange *)this);
      break;
    default:
      goto switchD_0010043e_caseD_e;
    case 0x3b9c9704:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_PASSTHROUGH_STYLE_FB";
      local_30 = 0x1c;
      String::parse_latin1((StrRange *)this);
      break;
    case 0x3b9c9705:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB";
      local_30 = 0x2d;
      String::parse_latin1((StrRange *)this);
      break;
    case 0x3b9c9706:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB";
      local_30 = 0x2d;
      String::parse_latin1((StrRange *)this);
      break;
    case 0x3b9c9707:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB";
      local_30 = 0x35;
      String::parse_latin1((StrRange *)this);
      break;
    case 0x3b9c970e:
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_EVENT_DATA_PASSTHROUGH_STATE_CHANGED_FB";
      local_30 = 0x2f;
      String::parse_latin1((StrRange *)this);
    }
    goto LAB_001009f8;
  }
  if (param_2 == 0x3b9b6a29) {
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB";
    local_30 = 0x28;
    String::parse_latin1((StrRange *)this);
    goto LAB_001009f8;
  }
  if (0x3b9b6a29 < param_2) {
    if (param_2 < 0x3b9c44fb) {
      if (0x3b9c44e7 < param_2) {
        if (param_2 + 0xc463bb17 < 0x12) {
          *(undefined8 *)this = 0;
          switch(param_2) {
          case 0x3b9c44e9:
            local_30 = 0x1e;
            local_38 = "XR_TYPE_SCENE_CREATE_INFO_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44ea:
            local_30 = 0x23;
            local_38 = "XR_TYPE_NEW_SCENE_COMPUTE_INFO_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44eb:
            local_30 = 0x29;
            local_38 = "XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44ec:
            local_30 = 0x1d;
            local_38 = "XR_TYPE_SCENE_COMPONENTS_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44ed:
            local_30 = 0x26;
            local_38 = "XR_TYPE_SCENE_COMPONENTS_GET_INFO_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44ee:
            local_30 = 0x26;
            local_38 = "XR_TYPE_SCENE_COMPONENT_LOCATIONS_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44ef:
            local_30 = 0x29;
            local_38 = "XR_TYPE_SCENE_COMPONENTS_LOCATE_INFO_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44f0:
            local_30 = 0x1a;
            local_38 = "XR_TYPE_SCENE_OBJECTS_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44f1:
            local_30 = 0x2f;
            local_38 = "XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44f2:
            local_30 = 0x2b;
            local_38 = "XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44f3:
            local_30 = 0x19;
            local_38 = "XR_TYPE_SCENE_PLANES_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44f4:
            local_30 = 0x2e;
            local_38 = "XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44f5:
            local_30 = 0x19;
            local_38 = "XR_TYPE_SCENE_MESHES_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44f6:
            local_30 = 0x28;
            local_38 = "XR_TYPE_SCENE_MESH_BUFFERS_GET_INFO_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44f7:
            local_30 = 0x1f;
            local_38 = "XR_TYPE_SCENE_MESH_BUFFERS_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44f8:
            local_30 = 0x25;
            local_38 = "XR_TYPE_SCENE_MESH_VERTEX_BUFFER_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44f9:
            local_30 = 0x26;
            local_38 = "XR_TYPE_SCENE_MESH_INDICES_UINT32_MSFT";
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9c44fa:
            local_30 = 0x26;
            local_38 = "XR_TYPE_SCENE_MESH_INDICES_UINT16_MSFT";
            String::parse_latin1((StrRange *)this);
          }
        }
        else {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_SCENE_OBSERVER_CREATE_INFO_MSFT";
          local_30 = 0x27;
          String::parse_latin1((StrRange *)this);
        }
        goto LAB_001009f8;
      }
      if (param_2 < 0x3b9ba0dd) {
        if (0x3b9ba0d7 < param_2) {
          if (param_2 + 0xc4645f27 < 4) {
            *(undefined8 *)this = 0;
            switch(param_2) {
            case 0x3b9ba0d9:
              local_30 = 0x2d;
              local_38 = "XR_TYPE_CONTROLLER_MODEL_NODE_PROPERTIES_MSFT";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3b9ba0da:
              local_30 = 0x28;
              local_38 = "XR_TYPE_CONTROLLER_MODEL_PROPERTIES_MSFT";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3b9ba0db:
              local_30 = 0x28;
              local_38 = "XR_TYPE_CONTROLLER_MODEL_NODE_STATE_MSFT";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3b9ba0dc:
              local_30 = 0x23;
              local_38 = "XR_TYPE_CONTROLLER_MODEL_STATE_MSFT";
              String::parse_latin1((StrRange *)this);
            }
          }
          else {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_CONTROLLER_MODEL_KEY_STATE_MSFT";
            local_30 = 0x27;
            String::parse_latin1((StrRange *)this);
          }
          goto LAB_001009f8;
        }
        if (param_2 < 0x3b9b9525) {
          if (0x3b9b951f < param_2) {
            if (param_2 + 0xc4646adf < 4) {
              *(undefined8 *)this = 0;
              switch(param_2) {
              case 0x3b9b9521:
                local_30 = 0x28;
                local_38 = "XR_TYPE_HAND_MESH_SPACE_CREATE_INFO_MSFT";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9b9522:
                local_30 = 0x22;
                local_38 = "XR_TYPE_HAND_MESH_UPDATE_INFO_MSFT";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9b9523:
                local_30 = 0x16;
                local_38 = "XR_TYPE_HAND_MESH_MSFT";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9b9524:
                local_30 = 0x20;
                local_38 = "XR_TYPE_HAND_POSE_TYPE_INFO_MSFT";
                String::parse_latin1((StrRange *)this);
              }
            }
            else {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT";
              local_30 = 0x31;
              String::parse_latin1((StrRange *)this);
            }
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9b896b) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_MSFT";
            local_30 = 0x32;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 < 0x3b9b896c) {
            if (param_2 == 0x3b9b8968) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPATIAL_GRAPH_NODE_SPACE_CREATE_INFO_MSFT";
              local_30 = 0x31;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (0x3b9b8968 < param_2) {
              if (param_2 == 0x3b9b8969) {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_SPATIAL_GRAPH_STATIC_NODE_BINDING_CREATE_INFO_MSFT";
                local_30 = 0x3a;
                String::parse_latin1((StrRange *)this);
              }
              else {
                *(undefined8 *)this = 0;
                local_38 = "XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_GET_INFO_MSFT";
                local_30 = 0x3b;
                String::parse_latin1((StrRange *)this);
              }
              goto LAB_001009f8;
            }
            if (param_2 == 0x3b9b7db0) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT";
              local_30 = 0x2a;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 == 0x3b9b8584) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_GRAPHICS_BINDING_EGL_MNDX";
              local_30 = 0x21;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
          }
          else if (param_2 + 0xc4646ec8 < 5) {
            if (param_2 + 0xc4646ec7 < 4) {
              *(undefined8 *)this = 0;
              switch(param_2) {
              case 0x3b9b9139:
                local_30 = 0x24;
                local_38 = "XR_TYPE_HAND_TRACKER_CREATE_INFO_EXT";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9b913a:
                local_30 = 0x23;
                local_38 = "XR_TYPE_HAND_JOINTS_LOCATE_INFO_EXT";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9b913b:
                local_30 = 0x20;
                local_38 = "XR_TYPE_HAND_JOINT_LOCATIONS_EXT";
                String::parse_latin1((StrRange *)this);
                break;
              case 0x3b9b913c:
                local_30 = 0x21;
                local_38 = "XR_TYPE_HAND_JOINT_VELOCITIES_EXT";
                String::parse_latin1((StrRange *)this);
              }
            }
            else {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT";
              local_30 = 0x2b;
              String::parse_latin1((StrRange *)this);
            }
            goto LAB_001009f8;
          }
        }
        else if (param_2 + 0xc46466f8 < 6) {
          if (param_2 + 0xc46466f7 < 5) {
            *(undefined8 *)this = 0;
            switch(param_2) {
            case 0x3b9b9909:
              local_30 = 0x2f;
              local_38 = "XR_TYPE_SECONDARY_VIEW_CONFIGURATION_STATE_MSFT";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3b9b990a:
              local_30 = 0x35;
              local_38 = "XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3b9b990b:
              local_30 = 0x38;
              local_38 = "XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3b9b990c:
              local_30 = 0x34;
              local_38 = "XR_TYPE_SECONDARY_VIEW_CONFIGURATION_LAYER_INFO_MSFT";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3b9b990d:
              local_30 = 0x3f;
              local_38 = "XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT";
              String::parse_latin1((StrRange *)this);
            }
          }
          else {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT";
            local_30 = 0x3c;
            String::parse_latin1((StrRange *)this);
          }
          goto LAB_001009f8;
        }
      }
      else if (param_2 < 0x3b9bf2e7) {
        if (0x3b9bf2e0 < param_2) {
          switch(param_2) {
          case 0x3b9bf2e1:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_BODY_TRACKER_CREATE_INFO_FB";
            local_30 = 0x23;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9bf2e2:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_BODY_JOINTS_LOCATE_INFO_FB";
            local_30 = 0x22;
            String::parse_latin1((StrRange *)this);
            break;
          default:
            goto switchD_0010043e_caseD_e;
          case 0x3b9bf2e4:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB";
            local_30 = 0x2a;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9bf2e5:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_BODY_JOINT_LOCATIONS_FB";
            local_30 = 0x1f;
            String::parse_latin1((StrRange *)this);
            break;
          case 0x3b9bf2e6:
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_BODY_SKELETON_FB";
            local_30 = 0x18;
            String::parse_latin1((StrRange *)this);
          }
          goto LAB_001009f8;
        }
        if (param_2 == 0x3b9bcbd1) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_COMPOSITION_LAYER_REPROJECTION_PLANE_OVERRIDE_MSFT";
          local_30 = 0x3a;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 < 0x3b9bcbd2) {
          if (param_2 == 0x3b9bc018) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT";
            local_30 = 0x2a;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9bcbd0) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_COMPOSITION_LAYER_REPROJECTION_INFO_MSFT";
            local_30 = 0x30;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9bb078) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC";
            local_30 = 0x28;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
        else {
          if (param_2 == 0x3b9bdb70) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_ANDROID_SURFACE_SWAPCHAIN_CREATE_INFO_FB";
            local_30 = 0x30;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9be340) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB";
            local_30 = 0x2b;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
      }
      else {
        if (param_2 == 0x3b9c2990) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_VULKAN_INSTANCE_CREATE_INFO_KHR";
          local_30 = 0x27;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 < 0x3b9c2991) {
          if (param_2 == 0x3b9c0280) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT";
            local_30 = 0x29;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 < 0x3b9c0281) {
            if (param_2 == 0x3b9bfab0) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_INTERACTION_PROFILE_DPAD_BINDING_EXT";
              local_30 = 0x2c;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
            if (param_2 == 0x3b9bfe98) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_INTERACTION_PROFILE_ANALOG_THRESHOLD_VALVE";
              local_30 = 0x32;
              String::parse_latin1((StrRange *)this);
              goto LAB_001009f8;
            }
          }
          else if (param_2 == 0x3b9c25a8) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_LOADER_INIT_INFO_ANDROID_KHR";
            local_30 = 0x24;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
        else {
          if (param_2 == 0x3b9c2993) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VULKAN_GRAPHICS_DEVICE_GET_INFO_KHR";
            local_30 = 0x2b;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9c2d78) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR";
            local_30 = 0x27;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9c2991) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_VULKAN_DEVICE_CREATE_INFO_KHR";
            local_30 = 0x25;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
      }
    }
    else if (param_2 < 0x3b9c8370) {
      if (0x3b9c8368 < param_2) {
        switch(param_2) {
        case 0x3b9c8369:
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_SPACE_COMPONENT_STATUS_FB";
          local_30 = 0x21;
          String::parse_latin1((StrRange *)this);
          break;
        default:
          goto switchD_0010043e_caseD_e;
        case 0x3b9c836b:
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_FB";
          local_30 = 0x25;
          String::parse_latin1((StrRange *)this);
          break;
        case 0x3b9c836c:
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB";
          local_30 = 0x2b;
          String::parse_latin1((StrRange *)this);
          break;
        case 0x3b9c836d:
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_EVENT_DATA_SPATIAL_ANCHOR_CREATE_COMPLETE_FB";
          local_30 = 0x34;
          String::parse_latin1((StrRange *)this);
          break;
        case 0x3b9c836e:
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_EVENT_DATA_SPACE_SET_STATUS_COMPLETE_FB";
          local_30 = 0x2f;
          String::parse_latin1((StrRange *)this);
          break;
        case 0x3b9c836f:
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_SPACE_COMPONENT_STATUS_SET_INFO_FB";
          local_30 = 0x2a;
          String::parse_latin1((StrRange *)this);
        }
        goto LAB_001009f8;
      }
      if (param_2 == 0x3b9c6041) {
        *(undefined8 *)this = 0;
        local_38 = "XR_TYPE_FACIAL_TRACKER_CREATE_INFO_HTC";
        local_30 = 0x26;
        String::parse_latin1((StrRange *)this);
        goto LAB_001009f8;
      }
      if (param_2 < 0x3b9c6042) {
        if (param_2 == 0x3b9c5c58) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_VIVE_TRACKER_PATHS_HTCX";
          local_30 = 0x1f;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 < 0x3b9c5c59) {
          if (param_2 == 0x3b9c48d1) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SCENE_DESERIALIZE_INFO_MSFT";
            local_30 = 0x23;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9c5488) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB";
            local_30 = 0x32;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9c48d0) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SERIALIZED_SCENE_FRAGMENT_DATA_GET_INFO_MSFT";
            local_30 = 0x34;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
        else {
          if (param_2 == 0x3b9c5c59) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_EVENT_DATA_VIVE_TRACKER_CONNECTED_HTCX";
            local_30 = 0x2e;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9c6040) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC";
            local_30 = 0x2d;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
      }
      else {
        if (param_2 == 0x3b9c77b3) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_HAND_TRACKING_SCALE_FB";
          local_30 = 0x1e;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 < 0x3b9c77b4) {
          if (param_2 == 0x3b9c6fe0) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB";
            local_30 = 0x28;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9c77b1) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_HAND_TRACKING_MESH_FB";
            local_30 = 0x1d;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9c6042) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_FACIAL_EXPRESSIONS_HTC";
            local_30 = 0x1e;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
        else {
          if (param_2 == 0x3b9c7b99) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_HAND_TRACKING_AIM_STATE_FB";
            local_30 = 0x22;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9c7f80) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB";
            local_30 = 0x27;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
      }
    }
    else {
      if (param_2 == 0x3b9c8f22) {
        *(undefined8 *)this = 0;
        local_38 = "XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB";
        local_30 = 0x2e;
        String::parse_latin1((StrRange *)this);
        goto LAB_001009f8;
      }
      if (param_2 < 0x3b9c8f23) {
        if (param_2 == 0x3b9c8752) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_SWAPCHAIN_STATE_FOVEATION_FB";
          local_30 = 0x24;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 < 0x3b9c8753) {
          if (param_2 == 0x3b9c8750) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_FOVEATION_PROFILE_CREATE_INFO_FB";
            local_30 = 0x28;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
          if (param_2 == 0x3b9c8751) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB";
            local_30 = 0x2a;
            String::parse_latin1((StrRange *)this);
            goto LAB_001009f8;
          }
        }
        else if (param_2 == 0x3b9c8b38) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB";
          local_30 = 0x2e;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
      }
      else {
        if (param_2 == 0x3b9c8f29) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_KEYBOARD_SPACE_CREATE_INFO_FB";
          local_30 = 0x25;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 == 0x3b9c9309) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_TRIANGLE_MESH_CREATE_INFO_FB";
          local_30 = 0x24;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
        if (param_2 == 0x3b9c8f24) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_KEYBOARD_TRACKING_QUERY_FB";
          local_30 = 0x22;
          String::parse_latin1((StrRange *)this);
          goto LAB_001009f8;
        }
      }
    }
    goto switchD_0010043e_caseD_e;
  }
  switch(param_2) {
  case 0:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_UNKNOWN";
    local_30 = 0xf;
    String::parse_latin1((StrRange *)this);
    break;
  case 1:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_API_LAYER_PROPERTIES";
    local_30 = 0x1c;
    String::parse_latin1((StrRange *)this);
    break;
  case 2:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_EXTENSION_PROPERTIES";
    local_30 = 0x1c;
    String::parse_latin1((StrRange *)this);
    break;
  case 3:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_INSTANCE_CREATE_INFO";
    local_30 = 0x1c;
    String::parse_latin1((StrRange *)this);
    break;
  case 4:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_SYSTEM_GET_INFO";
    local_30 = 0x17;
    String::parse_latin1((StrRange *)this);
    break;
  case 5:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_SYSTEM_PROPERTIES";
    local_30 = 0x19;
    String::parse_latin1((StrRange *)this);
    break;
  case 6:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_VIEW_LOCATE_INFO";
    local_30 = 0x18;
    String::parse_latin1((StrRange *)this);
    break;
  case 7:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_VIEW";
    local_30 = 0xc;
    String::parse_latin1((StrRange *)this);
    break;
  case 8:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_SESSION_CREATE_INFO";
    local_30 = 0x1b;
    String::parse_latin1((StrRange *)this);
    break;
  case 9:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_SWAPCHAIN_CREATE_INFO";
    local_30 = 0x1d;
    String::parse_latin1((StrRange *)this);
    break;
  case 10:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_SESSION_BEGIN_INFO";
    local_30 = 0x1a;
    String::parse_latin1((StrRange *)this);
    break;
  case 0xb:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_VIEW_STATE";
    local_30 = 0x12;
    String::parse_latin1((StrRange *)this);
    break;
  case 0xc:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_FRAME_END_INFO";
    local_30 = 0x16;
    String::parse_latin1((StrRange *)this);
    break;
  case 0xd:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_HAPTIC_VIBRATION";
    local_30 = 0x18;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x10:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_EVENT_DATA_BUFFER";
    local_30 = 0x19;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x11:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_EVENT_DATA_INSTANCE_LOSS_PENDING";
    local_30 = 0x28;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x12:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_EVENT_DATA_SESSION_STATE_CHANGED";
    local_30 = 0x28;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x17:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_ACTION_STATE_BOOLEAN";
    local_30 = 0x1c;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x18:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_ACTION_STATE_FLOAT";
    local_30 = 0x1a;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x19:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_ACTION_STATE_VECTOR2F";
    local_30 = 0x1d;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x1b:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_ACTION_STATE_POSE";
    local_30 = 0x19;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x1c:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_ACTION_SET_CREATE_INFO";
    local_30 = 0x1e;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x1d:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_ACTION_CREATE_INFO";
    local_30 = 0x1a;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x20:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_INSTANCE_PROPERTIES";
    local_30 = 0x1b;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x21:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_FRAME_WAIT_INFO";
    local_30 = 0x17;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x23:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_COMPOSITION_LAYER_PROJECTION";
    local_30 = 0x24;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x24:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_COMPOSITION_LAYER_QUAD";
    local_30 = 0x1e;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x25:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_REFERENCE_SPACE_CREATE_INFO";
    local_30 = 0x23;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x26:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_ACTION_SPACE_CREATE_INFO";
    local_30 = 0x20;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x28:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_EVENT_DATA_REFERENCE_SPACE_CHANGE_PENDING";
    local_30 = 0x31;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x29:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_VIEW_CONFIGURATION_VIEW";
    local_30 = 0x1f;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x2a:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_SPACE_LOCATION";
    local_30 = 0x16;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x2b:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_SPACE_VELOCITY";
    local_30 = 0x16;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x2c:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_FRAME_STATE";
    local_30 = 0x13;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x2d:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_VIEW_CONFIGURATION_PROPERTIES";
    local_30 = 0x25;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x2e:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_FRAME_BEGIN_INFO";
    local_30 = 0x18;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x30:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW";
    local_30 = 0x29;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x31:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_EVENT_DATA_EVENTS_LOST";
    local_30 = 0x1e;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x33:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_INTERACTION_PROFILE_SUGGESTED_BINDING";
    local_30 = 0x2d;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x34:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_EVENT_DATA_INTERACTION_PROFILE_CHANGED";
    local_30 = 0x2e;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x35:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_INTERACTION_PROFILE_STATE";
    local_30 = 0x21;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x37:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_SWAPCHAIN_IMAGE_ACQUIRE_INFO";
    local_30 = 0x24;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x38:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_SWAPCHAIN_IMAGE_WAIT_INFO";
    local_30 = 0x21;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x39:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_SWAPCHAIN_IMAGE_RELEASE_INFO";
    local_30 = 0x24;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x3a:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_ACTION_STATE_GET_INFO";
    local_30 = 0x1d;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x3b:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_HAPTIC_ACTION_INFO";
    local_30 = 0x1a;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x3c:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_SESSION_ACTION_SETS_ATTACH_INFO";
    local_30 = 0x27;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x3d:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_ACTIONS_SYNC_INFO";
    local_30 = 0x19;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x3e:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_BOUND_SOURCES_FOR_ACTION_ENUMERATE_INFO";
    local_30 = 0x2f;
    String::parse_latin1((StrRange *)this);
    break;
  case 0x3f:
    *(undefined8 *)this = 0;
    local_38 = "XR_TYPE_INPUT_SOURCE_LOCALIZED_NAME_GET_INFO";
    local_30 = 0x2c;
    String::parse_latin1((StrRange *)this);
    break;
  default:
    if (param_2 == 0x3b9b2ba9) {
      *(undefined8 *)this = 0;
      local_38 = "XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR";
      local_30 = 0x22;
      String::parse_latin1((StrRange *)this);
      break;
    }
    if (param_2 < 0x3b9b2baa) {
      if (param_2 == 0x3b9b143b) {
        *(undefined8 *)this = 0;
        local_38 = "XR_TYPE_DEBUG_UTILS_LABEL_EXT";
        local_30 = 0x1d;
        String::parse_latin1((StrRange *)this);
        break;
      }
      if (param_2 < 0x3b9b143c) {
        if (param_2 == 0x3b9b0c68) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR";
          local_30 = 0x26;
          String::parse_latin1((StrRange *)this);
          break;
        }
        if (param_2 < 0x3b9b0c69) {
          if (param_2 == 0x3b9af110) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR";
            local_30 = 0x28;
            String::parse_latin1((StrRange *)this);
            break;
          }
          if (param_2 < 0x3b9af111) {
            if (param_2 == 0x3b9ae170) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_COMPOSITION_LAYER_CUBE_KHR";
              local_30 = 0x22;
              String::parse_latin1((StrRange *)this);
              break;
            }
            if (param_2 == 0x3b9ae940) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_INSTANCE_CREATE_INFO_ANDROID_KHR";
              local_30 = 0x28;
              String::parse_latin1((StrRange *)this);
              break;
            }
          }
          else {
            if (param_2 == 0x3b9b00b0) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_VULKAN_SWAPCHAIN_FORMAT_LIST_CREATE_INFO_KHR";
              local_30 = 0x34;
              String::parse_latin1((StrRange *)this);
              break;
            }
            if (param_2 == 0x3b9b0498) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT";
              local_30 = 0x24;
              String::parse_latin1((StrRange *)this);
              break;
            }
          }
        }
        else {
          if (param_2 == 0x3b9b1439) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT";
            local_30 = 0x2f;
            String::parse_latin1((StrRange *)this);
            break;
          }
          if (param_2 == 0x3b9b143a) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT";
            local_30 = 0x2d;
            String::parse_latin1((StrRange *)this);
            break;
          }
          if (param_2 == 0x3b9b1050) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR";
            local_30 = 0x26;
            String::parse_latin1((StrRange *)this);
            break;
          }
          if (param_2 == 0x3b9b1438) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT";
            local_30 = 0x28;
            String::parse_latin1((StrRange *)this);
            break;
          }
        }
      }
      else if (param_2 < 0x3b9b23de) {
        if (0x3b9b23d7 < param_2) {
          if (param_2 + 0xc464dc27 < 5) {
            *(undefined8 *)this = 0;
            switch(param_2) {
            case 0x3b9b23d9:
              local_30 = 0x28;
              local_38 = "XR_TYPE_GRAPHICS_BINDING_OPENGL_XLIB_KHR";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3b9b23da:
              local_30 = 0x27;
              local_38 = "XR_TYPE_GRAPHICS_BINDING_OPENGL_XCB_KHR";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3b9b23db:
              local_30 = 0x2b;
              local_38 = "XR_TYPE_GRAPHICS_BINDING_OPENGL_WAYLAND_KHR";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3b9b23dc:
              local_30 = 0x22;
              local_38 = "XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_KHR";
              String::parse_latin1((StrRange *)this);
              break;
            case 0x3b9b23dd:
              local_30 = 0x28;
              local_38 = "XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_KHR";
              String::parse_latin1((StrRange *)this);
            }
          }
          else {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR";
            local_30 = 0x29;
            String::parse_latin1((StrRange *)this);
          }
          break;
        }
      }
      else {
        if (param_2 == 0x3b9b27c3) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_ES_KHR";
          local_30 = 0x2b;
          String::parse_latin1((StrRange *)this);
          break;
        }
        if (param_2 < 0x3b9b27c4) {
          if (param_2 == 0x3b9b27c1) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_GRAPHICS_BINDING_OPENGL_ES_ANDROID_KHR";
            local_30 = 0x2e;
            String::parse_latin1((StrRange *)this);
            break;
          }
          if (param_2 == 0x3b9b27c2) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_ES_KHR";
            local_30 = 0x25;
            String::parse_latin1((StrRange *)this);
            break;
          }
        }
        else if (param_2 == 0x3b9b2ba8) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR";
          local_30 = 0x23;
          String::parse_latin1((StrRange *)this);
          break;
        }
      }
    }
    else {
      if (param_2 == 0x3b9b3f30) {
        *(undefined8 *)this = 0;
        local_38 = "XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT";
        local_30 = 0x32;
        String::parse_latin1((StrRange *)this);
        break;
      }
      if (param_2 < 0x3b9b3f31) {
        if (param_2 == 0x3b9b3761) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_SWAPCHAIN_IMAGE_D3D12_KHR";
          local_30 = 0x21;
          String::parse_latin1((StrRange *)this);
          break;
        }
        if (param_2 < 0x3b9b3762) {
          if (param_2 == 0x3b9b3379) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SWAPCHAIN_IMAGE_D3D11_KHR";
            local_30 = 0x21;
            String::parse_latin1((StrRange *)this);
            break;
          }
          if (param_2 < 0x3b9b337a) {
            if (param_2 == 0x3b9b2baa) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR";
              local_30 = 0x28;
              String::parse_latin1((StrRange *)this);
              break;
            }
            if (param_2 == 0x3b9b3378) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_GRAPHICS_BINDING_D3D11_KHR";
              local_30 = 0x22;
              String::parse_latin1((StrRange *)this);
              break;
            }
          }
          else {
            if (param_2 == 0x3b9b337a) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_GRAPHICS_REQUIREMENTS_D3D11_KHR";
              local_30 = 0x27;
              String::parse_latin1((StrRange *)this);
              break;
            }
            if (param_2 == 0x3b9b3760) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_GRAPHICS_BINDING_D3D12_KHR";
              local_30 = 0x22;
              String::parse_latin1((StrRange *)this);
              break;
            }
          }
        }
        else {
          if (param_2 == 0x3b9b3b49) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SWAPCHAIN_IMAGE_METAL_KHR";
            local_30 = 0x21;
            String::parse_latin1((StrRange *)this);
            break;
          }
          if (param_2 < 0x3b9b3b4a) {
            if (param_2 == 0x3b9b3762) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_GRAPHICS_REQUIREMENTS_D3D12_KHR";
              local_30 = 0x27;
              String::parse_latin1((StrRange *)this);
              break;
            }
            if (param_2 == 0x3b9b3b48) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_GRAPHICS_BINDING_METAL_KHR";
              local_30 = 0x22;
              String::parse_latin1((StrRange *)this);
              break;
            }
          }
          else if (param_2 == 0x3b9b3b4a) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_GRAPHICS_REQUIREMENTS_METAL_KHR";
            local_30 = 0x27;
            String::parse_latin1((StrRange *)this);
            break;
          }
        }
      }
      else {
        if (param_2 == 0x3b9b4aeb) {
          *(undefined8 *)this = 0;
          local_38 = "XR_TYPE_EVENT_DATA_MAIN_SESSION_VISIBILITY_CHANGED_EXTX";
          local_30 = 0x37;
          String::parse_latin1((StrRange *)this);
          break;
        }
        if (param_2 < 0x3b9b4aec) {
          if (param_2 == 0x3b9b4319) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR";
            local_30 = 0x2e;
            String::parse_latin1((StrRange *)this);
            break;
          }
          if (param_2 < 0x3b9b431a) {
            if (param_2 == 0x3b9b3f31) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT";
              local_30 = 0x20;
              String::parse_latin1((StrRange *)this);
              break;
            }
            if (param_2 == 0x3b9b4318) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_VISIBILITY_MASK_KHR";
              local_30 = 0x1b;
              String::parse_latin1((StrRange *)this);
              break;
            }
          }
          else if (param_2 == 0x3b9b4ae8) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX";
            local_30 = 0x28;
            String::parse_latin1((StrRange *)this);
            break;
          }
        }
        else {
          if (param_2 == 0x3b9b6259) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_SPATIAL_ANCHOR_SPACE_CREATE_INFO_MSFT";
            local_30 = 0x2d;
            String::parse_latin1((StrRange *)this);
            break;
          }
          if (param_2 < 0x3b9b625a) {
            if (param_2 == 0x3b9b4ed0) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR";
              local_30 = 0x2e;
              String::parse_latin1((StrRange *)this);
              break;
            }
            if (param_2 == 0x3b9b6258) {
              *(undefined8 *)this = 0;
              local_38 = "XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_MSFT";
              local_30 = 0x27;
              String::parse_latin1((StrRange *)this);
              break;
            }
          }
          else if (param_2 == 0x3b9b6640) {
            *(undefined8 *)this = 0;
            local_38 = "XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB";
            local_30 = 0x29;
            String::parse_latin1((StrRange *)this);
            break;
          }
        }
      }
    }
  case 0xe:
  case 0xf:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1a:
  case 0x1e:
  case 0x1f:
  case 0x22:
  case 0x27:
  case 0x2f:
  case 0x32:
  case 0x36:
switchD_0010043e_caseD_e:
    String::num_int64((long)&local_38,param_2,true);
    operator+((char *)this,(String *)"Unknown XrStructureType: ");
    pcVar2 = local_38;
    if (local_38 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = (char *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
  }
LAB_001009f8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRUtil::get_session_state_name(XrSessionState) */

OpenXRUtil * __thiscall OpenXRUtil::get_session_state_name(OpenXRUtil *this,uint param_2)

{
  long *plVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (8 < param_2) {
    if (param_2 != 0x7fffffff) {
      String::num_int64((long)&local_38,param_2,true);
      operator+((char *)this,(String *)"Unknown XrSessionState: ");
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      goto LAB_00105080;
    }
    *(undefined8 *)this = 0;
    local_38 = "XR_SESSION_STATE_MAX_ENUM";
LAB_0010514f:
    local_30 = 0x19;
    String::parse_latin1((StrRange *)this);
    goto LAB_00105080;
  }
  *(undefined8 *)this = 0;
  switch(param_2) {
  case 0:
    local_38 = "XR_SESSION_STATE_UNKNOWN";
    break;
  case 1:
    local_30 = 0x15;
    local_38 = "XR_SESSION_STATE_IDLE";
    String::parse_latin1((StrRange *)this);
    goto LAB_00105080;
  case 2:
    local_30 = 0x16;
    local_38 = "XR_SESSION_STATE_READY";
    String::parse_latin1((StrRange *)this);
    goto LAB_00105080;
  case 3:
    local_38 = "XR_SESSION_STATE_SYNCHRONIZED";
    goto LAB_00105067;
  case 4:
    local_38 = "XR_SESSION_STATE_VISIBLE";
    break;
  case 5:
    local_38 = "XR_SESSION_STATE_FOCUSED";
    break;
  case 6:
    local_38 = "XR_SESSION_STATE_STOPPING";
    goto LAB_0010514f;
  case 7:
    local_38 = "XR_SESSION_STATE_LOSS_PENDING";
LAB_00105067:
    local_30 = 0x1d;
    String::parse_latin1((StrRange *)this);
    goto LAB_00105080;
  case 8:
    local_38 = "XR_SESSION_STATE_EXITING";
  }
  local_30 = 0x18;
  String::parse_latin1((StrRange *)this);
LAB_00105080:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRUtil::get_action_type_name(XrActionType) */

OpenXRUtil * __thiscall OpenXRUtil::get_action_type_name(OpenXRUtil *this,uint param_2)

{
  long *plVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 4) {
    *(undefined8 *)this = 0;
    local_38 = "XR_ACTION_TYPE_POSE_INPUT";
    local_30 = 0x19;
    String::parse_latin1((StrRange *)this);
    goto LAB_001052a8;
  }
  if (param_2 < 5) {
    if (param_2 == 2) {
      *(undefined8 *)this = 0;
      local_38 = "XR_ACTION_TYPE_FLOAT_INPUT";
      local_30 = 0x1a;
      String::parse_latin1((StrRange *)this);
      goto LAB_001052a8;
    }
    if (param_2 == 3) {
      *(undefined8 *)this = 0;
      local_38 = "XR_ACTION_TYPE_VECTOR2F_INPUT";
      local_30 = 0x1d;
      String::parse_latin1((StrRange *)this);
      goto LAB_001052a8;
    }
    if (param_2 == 1) {
      *(undefined8 *)this = 0;
      local_38 = "XR_ACTION_TYPE_BOOLEAN_INPUT";
      local_30 = 0x1c;
      String::parse_latin1((StrRange *)this);
      goto LAB_001052a8;
    }
  }
  else {
    if (param_2 == 100) {
      *(undefined8 *)this = 0;
      local_38 = "XR_ACTION_TYPE_VIBRATION_OUTPUT";
      local_30 = 0x1f;
      String::parse_latin1((StrRange *)this);
      goto LAB_001052a8;
    }
    if (param_2 == 0x7fffffff) {
      *(undefined8 *)this = 0;
      local_38 = "XR_ACTION_TYPE_MAX_ENUM";
      local_30 = 0x17;
      String::parse_latin1((StrRange *)this);
      goto LAB_001052a8;
    }
  }
  String::num_int64((long)&local_38,param_2,true);
  operator+((char *)this,(String *)"Unknown XrActionType: ");
  pcVar2 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
LAB_001052a8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRUtil::get_environment_blend_mode_name(XrEnvironmentBlendMode) */

OpenXRUtil * __thiscall OpenXRUtil::get_environment_blend_mode_name(OpenXRUtil *this,uint param_2)

{
  long *plVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 3) {
    *(undefined8 *)this = 0;
    local_38 = "XR_ENVIRONMENT_BLEND_MODE_ALPHA_BLEND";
    local_30 = 0x25;
    String::parse_latin1((StrRange *)this);
    goto LAB_0010545e;
  }
  if (param_2 < 4) {
    if (param_2 == 1) {
      *(undefined8 *)this = 0;
      local_38 = "XR_ENVIRONMENT_BLEND_MODE_OPAQUE";
      local_30 = 0x20;
      String::parse_latin1((StrRange *)this);
      goto LAB_0010545e;
    }
    if (param_2 != 2) goto LAB_00105480;
    *(undefined8 *)this = 0;
    local_38 = "XR_ENVIRONMENT_BLEND_MODE_ADDITIVE";
  }
  else {
    if (param_2 != 0x7fffffff) {
LAB_00105480:
      String::num_int64((long)&local_38,param_2,true);
      operator+((char *)this,(String *)"Unknown XrEnvironmentBlendMode: ");
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      goto LAB_0010545e;
    }
    *(undefined8 *)this = 0;
    local_38 = "XR_ENVIRONMENT_BLEND_MODE_MAX_ENUM";
  }
  local_30 = 0x22;
  String::parse_latin1((StrRange *)this);
LAB_0010545e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRUtil::make_xr_version_string(unsigned long) */

OpenXRUtil * __thiscall OpenXRUtil::make_xr_version_string(OpenXRUtil *this,ulong param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::num_int64((long)&local_48,(uint)(ushort)(param_1 >> 0x30),true);
  String::operator+=((String *)this,(String *)&local_48);
  puVar3 = local_48;
  if (local_48 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (undefined *)0x0;
      Memory::free_static((void *)((long)puVar3 + -0x10),false);
    }
  }
  local_50 = 0;
  local_48 = &_LC430;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_50);
  String::operator+=((String *)this,(String *)&local_50);
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  String::num_int64((long)&local_48,(uint)(param_1 >> 0x20) & 0xffff,true);
  String::operator+=((String *)this,(String *)&local_48);
  puVar3 = local_48;
  if (local_48 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  local_48 = &_LC430;
  local_50 = 0;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_50);
  String::operator+=((String *)this,(String *)&local_50);
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  String::num_int64((long)&local_48,(int)param_1,true);
  String::operator+=((String *)this,(String *)&local_48);
  puVar3 = local_48;
  if (local_48 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRUtil::XrMatrix4x4f_CreateProjection(OpenXRUtil::XrMatrix4x4f*, OpenXRUtil::GraphicsAPI,
   float, float, float, float, float, float) */

void OpenXRUtil::XrMatrix4x4f_CreateProjection
               (float param_1_00,float param_2,float param_3,float param_4,float param_5,
               float param_6,float *param_1,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_8 == 0) {
    fVar4 = param_4 - param_3;
    fVar2 = 0.0;
  }
  else {
    fVar4 = param_3 - param_4;
    fVar2 = 0.0;
    if (param_8 - 1U < 2) {
      fVar2 = param_5;
    }
  }
  fVar5 = _LC433 / (param_2 - param_1_00);
  fVar3 = _LC433 / fVar4;
  if (param_5 < param_6) {
    fVar1 = (float)((uint)(fVar2 + param_6) ^ _LC434) / (param_6 - param_5);
    fVar2 = (float)((uint)((fVar2 + param_5) * param_6) ^ _LC434) / (param_6 - param_5);
  }
  else {
    fVar2 = (float)((uint)(fVar2 + param_5) ^ _LC434);
    fVar1 = _LC432;
  }
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = -1.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xf] = 0.0;
  *param_1 = fVar5;
  param_1[8] = (param_2 + param_1_00) / (param_2 - param_1_00);
  param_1[5] = fVar3;
  param_1[9] = (param_3 + param_4) / fVar4;
  param_1[10] = fVar1;
  param_1[0xe] = fVar2;
  return;
}



/* OpenXRUtil::XrMatrix4x4f_CreateProjectionFov(OpenXRUtil::XrMatrix4x4f*, OpenXRUtil::GraphicsAPI,
   XrFovf, float, float) */

void __thiscall
OpenXRUtil::XrMatrix4x4f_CreateProjectionFov
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          OpenXRUtil *this,undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = tanf((float)param_1);
  fVar2 = tanf((float)((ulong)param_1 >> 0x20));
  fVar3 = tanf((float)((ulong)param_2 >> 0x20));
  fVar4 = tanf((float)param_2);
  XrMatrix4x4f_CreateProjection(fVar1,fVar2,fVar4,fVar3,param_3,param_4,this,param_6);
  return;
}


