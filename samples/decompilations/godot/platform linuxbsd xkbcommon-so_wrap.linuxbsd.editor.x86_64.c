
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_xkbcommon(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = dlopen("libxkbcommon.so.0",1);
  if (lVar1 != 0) {
    dlerror();
    xkb_keysym_get_name_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_get_name");
    if (param_1 == 0) {
      xkb_keysym_from_name_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_from_name");
      xkb_keysym_to_utf8_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_utf8");
      xkb_keysym_to_utf32_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_utf32");
      xkb_utf32_to_keysym_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_utf32_to_keysym");
      xkb_keysym_to_upper_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_upper");
      xkb_keysym_to_lower_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_lower");
      xkb_context_new_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_new");
      xkb_context_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_ref");
      xkb_context_unref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_unref");
      xkb_context_set_user_data_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_set_user_data");
      xkb_context_get_user_data_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_get_user_data");
      xkb_context_include_path_append_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_include_path_append");
      xkb_context_include_path_append_default_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_include_path_append_default");
      xkb_context_include_path_reset_defaults_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_include_path_reset_defaults");
      xkb_context_include_path_clear_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_include_path_clear");
      xkb_context_num_include_paths_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_num_include_paths");
      xkb_context_include_path_get_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_include_path_get");
      xkb_context_set_log_level_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_set_log_level");
      xkb_context_get_log_level_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_get_log_level");
      xkb_context_set_log_verbosity_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_set_log_verbosity");
      xkb_context_get_log_verbosity_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_context_get_log_verbosity");
      xkb_context_set_log_fn_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_set_log_fn");
      xkb_keymap_new_from_names_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_new_from_names");
      xkb_keymap_new_from_file_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_new_from_file");
      xkb_keymap_new_from_string_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_new_from_string");
      xkb_keymap_new_from_buffer_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_new_from_buffer");
      xkb_keymap_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_ref");
      xkb_keymap_unref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_unref");
      xkb_keymap_get_as_string_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_get_as_string");
      xkb_keymap_min_keycode_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_min_keycode");
      xkb_keymap_max_keycode_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_max_keycode");
      xkb_keymap_key_for_each_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_key_for_each")
      ;
      xkb_keymap_key_get_name_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_key_get_name")
      ;
      xkb_keymap_key_by_name_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_key_by_name");
      xkb_keymap_num_mods_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_num_mods");
      xkb_keymap_mod_get_name_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_mod_get_name")
      ;
      xkb_keymap_mod_get_index_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_mod_get_index");
      xkb_keymap_num_layouts_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_num_layouts");
      xkb_keymap_layout_get_name_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_layout_get_name");
      xkb_keymap_layout_get_index_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_layout_get_index");
      xkb_keymap_num_leds_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_num_leds");
      xkb_keymap_led_get_name_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_led_get_name")
      ;
      xkb_keymap_led_get_index_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_led_get_index");
      xkb_keymap_num_layouts_for_key_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_num_layouts_for_key");
      xkb_keymap_num_levels_for_key_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_num_levels_for_key");
      xkb_keymap_key_get_mods_for_level_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_key_get_mods_for_level");
      xkb_keymap_key_get_syms_by_level_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_keymap_key_get_syms_by_level");
      xkb_keymap_key_repeats_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_key_repeats");
      xkb_state_new_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_new");
      xkb_state_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_ref");
      xkb_state_unref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_unref");
      xkb_state_get_keymap_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_get_keymap");
      xkb_state_update_key_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_update_key");
      xkb_state_update_mask_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_update_mask");
      xkb_state_key_get_syms_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_key_get_syms");
      xkb_state_key_get_utf8_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_key_get_utf8");
      xkb_state_key_get_utf32_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_key_get_utf32")
      ;
      xkb_state_key_get_one_sym_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_key_get_one_sym");
      xkb_state_key_get_layout_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_key_get_layout");
      xkb_state_key_get_level_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_key_get_level")
      ;
      xkb_state_serialize_mods_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_serialize_mods");
      xkb_state_serialize_layout_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_serialize_layout");
      xkb_state_mod_name_is_active_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_mod_name_is_active");
      xkb_state_mod_names_are_active_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_mod_names_are_active");
      xkb_state_mod_index_is_active_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_mod_index_is_active");
      xkb_state_mod_indices_are_active_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_mod_indices_are_active");
      xkb_state_key_get_consumed_mods2_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_key_get_consumed_mods2");
      xkb_state_key_get_consumed_mods_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_key_get_consumed_mods");
      xkb_state_mod_index_is_consumed2_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_mod_index_is_consumed2");
      xkb_state_mod_index_is_consumed_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_mod_index_is_consumed");
      xkb_state_mod_mask_remove_consumed_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_mod_mask_remove_consumed");
      xkb_state_layout_name_is_active_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_layout_name_is_active");
      xkb_state_layout_index_is_active_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_layout_index_is_active");
      xkb_state_led_name_is_active_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_led_name_is_active");
      xkb_state_led_index_is_active_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_state_led_index_is_active");
      xkb_compose_table_new_from_locale_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_compose_table_new_from_locale");
      xkb_compose_table_new_from_file_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_compose_table_new_from_file");
      xkb_compose_table_new_from_buffer_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_compose_table_new_from_buffer");
      xkb_compose_table_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_table_ref");
      xkb_compose_table_unref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_table_unref")
      ;
      xkb_compose_state_new_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_state_new");
      xkb_compose_state_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_state_ref");
      xkb_compose_state_unref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_state_unref")
      ;
      xkb_compose_state_get_compose_table_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_compose_state_get_compose_table");
      xkb_compose_state_feed_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_state_feed");
      xkb_compose_state_reset_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_state_reset")
      ;
      xkb_compose_state_get_status_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_compose_state_get_status");
      xkb_compose_state_get_utf8_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_compose_state_get_utf8");
      xkb_compose_state_get_one_sym_dylibloader_wrapper_xkbcommon =
           dlsym(lVar1,"xkb_compose_state_get_one_sym");
    }
    else {
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keysym_from_name_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_from_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keysym_from_name_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_from_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keysym_to_utf8_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_utf8");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keysym_to_utf8_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_utf8");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keysym_to_utf32_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_utf32");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keysym_to_utf32_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_utf32");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_utf32_to_keysym_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_utf32_to_keysym");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_utf32_to_keysym_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_utf32_to_keysym");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keysym_to_upper_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_upper");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keysym_to_upper_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_upper");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keysym_to_lower_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_lower");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keysym_to_lower_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keysym_to_lower");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_new_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_new");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_new_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_new");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_unref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_unref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_set_user_data_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_set_user_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_set_user_data_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_set_user_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_get_user_data_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_get_user_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_get_user_data_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_get_user_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_include_path_append_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_include_path_append");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_include_path_append_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_include_path_append");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_include_path_append_default_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_include_path_append_default");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_include_path_append_default_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_include_path_append_default");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_include_path_reset_defaults_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_include_path_reset_defaults");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_include_path_reset_defaults_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_include_path_reset_defaults");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_include_path_clear_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_include_path_clear");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_include_path_clear_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_include_path_clear");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_num_include_paths_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_num_include_paths");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_num_include_paths_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_num_include_paths");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_include_path_get_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_include_path_get");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_include_path_get_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_include_path_get");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_set_log_level_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_set_log_level");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_set_log_level_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_set_log_level");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_get_log_level_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_get_log_level");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_get_log_level_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_get_log_level");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_set_log_verbosity_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_set_log_verbosity");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_set_log_verbosity_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_set_log_verbosity");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_get_log_verbosity_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_get_log_verbosity");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_get_log_verbosity_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_context_get_log_verbosity");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_context_set_log_fn_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_set_log_fn")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_context_set_log_fn_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_context_set_log_fn")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_new_from_names_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_new_from_names");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_new_from_names_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_new_from_names");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_new_from_file_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_new_from_file");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_new_from_file_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_new_from_file");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_new_from_string_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_new_from_string");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_new_from_string_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_new_from_string");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_new_from_buffer_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_new_from_buffer");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_new_from_buffer_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_new_from_buffer");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_unref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_unref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_get_as_string_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_get_as_string");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_get_as_string_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_get_as_string");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_min_keycode_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_min_keycode")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_min_keycode_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_min_keycode")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_max_keycode_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_max_keycode")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_max_keycode_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_max_keycode")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_key_for_each_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_key_for_each");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_key_for_each_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_key_for_each");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_key_get_name_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_key_get_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_key_get_name_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_key_get_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_key_by_name_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_key_by_name")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_key_by_name_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_key_by_name")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_num_mods_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_num_mods");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_num_mods_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_num_mods");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_mod_get_name_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_mod_get_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_mod_get_name_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_mod_get_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_mod_get_index_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_mod_get_index");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_mod_get_index_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_mod_get_index");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_num_layouts_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_num_layouts")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_num_layouts_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_num_layouts")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_layout_get_name_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_layout_get_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_layout_get_name_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_layout_get_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_layout_get_index_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_layout_get_index");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_layout_get_index_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_layout_get_index");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_num_leds_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_num_leds");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_num_leds_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_num_leds");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_led_get_name_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_led_get_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_led_get_name_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_led_get_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_led_get_index_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_led_get_index");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_led_get_index_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_led_get_index");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_num_layouts_for_key_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_num_layouts_for_key");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_num_layouts_for_key_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_num_layouts_for_key");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_num_levels_for_key_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_num_levels_for_key");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_num_levels_for_key_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_num_levels_for_key");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_key_get_mods_for_level_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_key_get_mods_for_level");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_key_get_mods_for_level_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_key_get_mods_for_level");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_key_get_syms_by_level_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_key_get_syms_by_level");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_key_get_syms_by_level_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_keymap_key_get_syms_by_level");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_keymap_key_repeats_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_key_repeats")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_keymap_key_repeats_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_keymap_key_repeats")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_new_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_new");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_new_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_new");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_unref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_unref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_get_keymap_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_get_keymap");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_get_keymap_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_get_keymap");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_update_key_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_update_key");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_update_key_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_update_key");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_update_mask_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_update_mask");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_update_mask_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_update_mask");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_key_get_syms_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_key_get_syms")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_key_get_syms_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_key_get_syms")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_key_get_utf8_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_key_get_utf8")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_key_get_utf8_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_state_key_get_utf8")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_key_get_utf32_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_utf32");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_key_get_utf32_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_utf32");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_key_get_one_sym_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_one_sym");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_key_get_one_sym_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_one_sym");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_key_get_layout_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_layout");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_key_get_layout_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_layout");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_key_get_level_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_level");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_key_get_level_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_level");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_serialize_mods_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_serialize_mods");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_serialize_mods_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_serialize_mods");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_serialize_layout_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_serialize_layout");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_serialize_layout_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_serialize_layout");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_mod_name_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_name_is_active");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_mod_name_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_name_is_active");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_mod_names_are_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_names_are_active");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_mod_names_are_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_names_are_active");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_mod_index_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_index_is_active");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_mod_index_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_index_is_active");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_mod_indices_are_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_indices_are_active");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_mod_indices_are_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_indices_are_active");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_key_get_consumed_mods2_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_consumed_mods2");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_key_get_consumed_mods2_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_consumed_mods2");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_key_get_consumed_mods_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_consumed_mods");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_key_get_consumed_mods_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_key_get_consumed_mods");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_mod_index_is_consumed2_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_index_is_consumed2");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_mod_index_is_consumed2_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_index_is_consumed2");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_mod_index_is_consumed_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_index_is_consumed");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_mod_index_is_consumed_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_index_is_consumed");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_mod_mask_remove_consumed_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_mask_remove_consumed");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_mod_mask_remove_consumed_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_mod_mask_remove_consumed");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_layout_name_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_layout_name_is_active");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_layout_name_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_layout_name_is_active");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_layout_index_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_layout_index_is_active");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_layout_index_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_layout_index_is_active");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_led_name_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_led_name_is_active");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_led_name_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_led_name_is_active");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_state_led_index_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_led_index_is_active");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_state_led_index_is_active_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_state_led_index_is_active");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_table_new_from_locale_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_table_new_from_locale");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_table_new_from_locale_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_table_new_from_locale");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_table_new_from_file_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_table_new_from_file");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_table_new_from_file_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_table_new_from_file");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_table_new_from_buffer_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_table_new_from_buffer");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_table_new_from_buffer_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_table_new_from_buffer");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_table_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_table_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_table_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_table_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_table_unref_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_table_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_table_unref_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_table_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_state_new_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_state_new");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_state_new_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_state_new");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_state_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_state_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_state_ref_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_state_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_state_unref_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_state_unref_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_state_get_compose_table_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_get_compose_table");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_state_get_compose_table_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_get_compose_table");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_state_feed_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_state_feed")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_state_feed_dylibloader_wrapper_xkbcommon = dlsym(lVar1,"xkb_compose_state_feed")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_state_reset_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_reset");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_state_reset_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_reset");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_state_get_status_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_get_status");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_state_get_status_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_get_status");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_state_get_utf8_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_get_utf8");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_state_get_utf8_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_get_utf8");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        xkb_compose_state_get_one_sym_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_get_one_sym");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        xkb_compose_state_get_one_sym_dylibloader_wrapper_xkbcommon =
             dlsym(lVar1,"xkb_compose_state_get_one_sym");
      }
      lVar1 = dlerror();
      if (lVar1 != 0) {
        __fprintf_chk(_stderr,2,&_LC1,lVar1);
      }
    }
    return 0;
  }
  if (param_1 != 0) {
    uVar3 = dlerror();
    __fprintf_chk(_stderr,2,&_LC1,uVar3);
  }
  return 1;
}


