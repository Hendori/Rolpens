
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_libudev(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = dlopen("libudev.so.1",1);
  if (lVar1 != 0) {
    dlerror();
    udev_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_ref");
    if (param_1 == 0) {
      udev_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_unref");
      udev_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_new");
      udev_set_log_fn_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_set_log_fn");
      udev_get_log_priority_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_get_log_priority");
      udev_set_log_priority_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_set_log_priority");
      udev_get_userdata_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_get_userdata");
      udev_set_userdata_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_set_userdata");
      udev_list_entry_get_next_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_list_entry_get_next")
      ;
      udev_list_entry_get_by_name_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_list_entry_get_by_name");
      udev_list_entry_get_name_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_list_entry_get_name")
      ;
      udev_list_entry_get_value_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_list_entry_get_value");
      udev_device_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_ref");
      udev_device_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_unref");
      udev_device_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_udev");
      udev_device_new_from_syspath_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_new_from_syspath");
      udev_device_new_from_devnum_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_new_from_devnum");
      udev_device_new_from_subsystem_sysname_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_new_from_subsystem_sysname");
      udev_device_new_from_device_id_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_new_from_device_id");
      udev_device_new_from_environment_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_new_from_environment");
      udev_device_get_parent_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_parent");
      udev_device_get_parent_with_subsystem_devtype_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_get_parent_with_subsystem_devtype");
      udev_device_get_devpath_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devpath");
      udev_device_get_subsystem_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_get_subsystem");
      udev_device_get_devtype_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devtype");
      udev_device_get_syspath_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_syspath");
      udev_device_get_sysname_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_sysname");
      udev_device_get_sysnum_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_sysnum");
      udev_device_get_devnode_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devnode");
      udev_device_get_is_initialized_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_get_is_initialized");
      udev_device_get_devlinks_list_entry_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_get_devlinks_list_entry");
      udev_device_get_properties_list_entry_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_get_properties_list_entry");
      udev_device_get_tags_list_entry_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_get_tags_list_entry");
      udev_device_get_sysattr_list_entry_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_get_sysattr_list_entry");
      udev_device_get_property_value_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_get_property_value");
      udev_device_get_driver_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_driver");
      udev_device_get_devnum_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devnum");
      udev_device_get_action_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_action");
      udev_device_get_seqnum_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_seqnum");
      udev_device_get_usec_since_initialized_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_get_usec_since_initialized");
      udev_device_get_sysattr_value_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_get_sysattr_value");
      udev_device_set_sysattr_value_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_device_set_sysattr_value");
      udev_device_has_tag_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_has_tag");
      udev_monitor_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_ref");
      udev_monitor_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_unref");
      udev_monitor_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_get_udev");
      udev_monitor_new_from_netlink_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_monitor_new_from_netlink");
      udev_monitor_enable_receiving_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_monitor_enable_receiving");
      udev_monitor_set_receive_buffer_size_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_monitor_set_receive_buffer_size");
      udev_monitor_get_fd_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_get_fd");
      udev_monitor_receive_device_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_monitor_receive_device");
      udev_monitor_filter_add_match_subsystem_devtype_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_monitor_filter_add_match_subsystem_devtype");
      udev_monitor_filter_add_match_tag_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_monitor_filter_add_match_tag");
      udev_monitor_filter_update_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_monitor_filter_update");
      udev_monitor_filter_remove_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_monitor_filter_remove");
      udev_enumerate_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_ref");
      udev_enumerate_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_unref");
      udev_enumerate_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_get_udev");
      udev_enumerate_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_new");
      udev_enumerate_add_match_subsystem_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_add_match_subsystem");
      udev_enumerate_add_nomatch_subsystem_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_add_nomatch_subsystem");
      udev_enumerate_add_match_sysattr_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_add_match_sysattr");
      udev_enumerate_add_nomatch_sysattr_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_add_nomatch_sysattr");
      udev_enumerate_add_match_property_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_add_match_property");
      udev_enumerate_add_match_sysname_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_add_match_sysname");
      udev_enumerate_add_match_tag_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_add_match_tag");
      udev_enumerate_add_match_parent_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_add_match_parent");
      udev_enumerate_add_match_is_initialized_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_add_match_is_initialized");
      udev_enumerate_add_syspath_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_add_syspath");
      udev_enumerate_scan_devices_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_scan_devices");
      udev_enumerate_scan_subsystems_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_scan_subsystems");
      udev_enumerate_get_list_entry_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_enumerate_get_list_entry");
      udev_queue_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_ref");
      udev_queue_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_unref");
      udev_queue_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_get_udev");
      udev_queue_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_new");
      udev_queue_get_kernel_seqnum_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_queue_get_kernel_seqnum");
      udev_queue_get_udev_seqnum_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_queue_get_udev_seqnum");
      udev_queue_get_udev_is_active_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_queue_get_udev_is_active");
      udev_queue_get_queue_is_empty_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_queue_get_queue_is_empty");
      udev_queue_get_seqnum_is_finished_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_queue_get_seqnum_is_finished");
      udev_queue_get_seqnum_sequence_is_finished_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_queue_get_seqnum_sequence_is_finished");
      udev_queue_get_fd_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_get_fd");
      udev_queue_flush_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_flush");
      udev_queue_get_queued_list_entry_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_queue_get_queued_list_entry");
      udev_hwdb_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_hwdb_new");
      udev_hwdb_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_hwdb_ref");
      udev_hwdb_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_hwdb_unref");
      udev_hwdb_get_properties_list_entry_dylibloader_wrapper_libudev =
           dlsym(lVar1,"udev_hwdb_get_properties_list_entry");
      udev_util_encode_string_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_util_encode_string");
    }
    else {
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_new");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_new");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_set_log_fn_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_set_log_fn");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_set_log_fn_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_set_log_fn");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_get_log_priority_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_get_log_priority");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_get_log_priority_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_get_log_priority");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_set_log_priority_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_set_log_priority");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_set_log_priority_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_set_log_priority");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_get_userdata_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_get_userdata");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_get_userdata_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_get_userdata");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_set_userdata_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_set_userdata");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_set_userdata_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_set_userdata");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_list_entry_get_next_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_list_entry_get_next");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_list_entry_get_next_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_list_entry_get_next");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_list_entry_get_by_name_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_list_entry_get_by_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_list_entry_get_by_name_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_list_entry_get_by_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_list_entry_get_name_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_list_entry_get_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_list_entry_get_name_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_list_entry_get_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_list_entry_get_value_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_list_entry_get_value");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_list_entry_get_value_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_list_entry_get_value");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_udev");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_udev");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_new_from_syspath_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_new_from_syspath");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_new_from_syspath_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_new_from_syspath");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_new_from_devnum_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_new_from_devnum");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_new_from_devnum_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_new_from_devnum");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_new_from_subsystem_sysname_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_new_from_subsystem_sysname");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_new_from_subsystem_sysname_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_new_from_subsystem_sysname");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_new_from_device_id_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_new_from_device_id");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_new_from_device_id_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_new_from_device_id");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_new_from_environment_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_new_from_environment");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_new_from_environment_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_new_from_environment");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_parent_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_parent");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_parent_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_parent");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_parent_with_subsystem_devtype_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_parent_with_subsystem_devtype");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_parent_with_subsystem_devtype_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_parent_with_subsystem_devtype");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_devpath_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devpath")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_devpath_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devpath")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_subsystem_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_subsystem");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_subsystem_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_subsystem");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_devtype_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devtype")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_devtype_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devtype")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_syspath_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_syspath")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_syspath_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_syspath")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_sysname_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_sysname")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_sysname_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_sysname")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_sysnum_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_sysnum");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_sysnum_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_sysnum");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_devnode_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devnode")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_devnode_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devnode")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_is_initialized_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_is_initialized");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_is_initialized_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_is_initialized");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_devlinks_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_devlinks_list_entry");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_devlinks_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_devlinks_list_entry");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_properties_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_properties_list_entry");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_properties_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_properties_list_entry");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_tags_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_tags_list_entry");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_tags_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_tags_list_entry");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_sysattr_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_sysattr_list_entry");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_sysattr_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_sysattr_list_entry");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_property_value_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_property_value");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_property_value_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_property_value");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_driver_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_driver");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_driver_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_driver");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_devnum_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devnum");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_devnum_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_devnum");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_action_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_action");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_action_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_action");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_seqnum_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_seqnum");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_seqnum_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_get_seqnum");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_usec_since_initialized_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_usec_since_initialized");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_usec_since_initialized_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_usec_since_initialized");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_get_sysattr_value_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_sysattr_value");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_get_sysattr_value_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_get_sysattr_value");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_set_sysattr_value_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_set_sysattr_value");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_set_sysattr_value_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_device_set_sysattr_value");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_device_has_tag_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_has_tag");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_device_has_tag_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_device_has_tag");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_get_udev");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_get_udev");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_new_from_netlink_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_new_from_netlink");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_new_from_netlink_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_new_from_netlink");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_enable_receiving_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_enable_receiving");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_enable_receiving_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_enable_receiving");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_set_receive_buffer_size_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_set_receive_buffer_size");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_set_receive_buffer_size_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_set_receive_buffer_size");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_get_fd_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_get_fd");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_get_fd_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_monitor_get_fd");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_receive_device_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_receive_device");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_receive_device_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_receive_device");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_filter_add_match_subsystem_devtype_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_filter_add_match_subsystem_devtype");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_filter_add_match_subsystem_devtype_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_filter_add_match_subsystem_devtype");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_filter_add_match_tag_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_filter_add_match_tag");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_filter_add_match_tag_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_filter_add_match_tag");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_filter_update_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_filter_update");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_filter_update_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_filter_update");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_monitor_filter_remove_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_filter_remove");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_monitor_filter_remove_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_monitor_filter_remove");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_get_udev")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_get_udev")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_new");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_enumerate_new");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_add_match_subsystem_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_subsystem");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_add_match_subsystem_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_subsystem");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_add_nomatch_subsystem_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_nomatch_subsystem");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_add_nomatch_subsystem_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_nomatch_subsystem");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_add_match_sysattr_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_sysattr");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_add_match_sysattr_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_sysattr");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_add_nomatch_sysattr_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_nomatch_sysattr");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_add_nomatch_sysattr_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_nomatch_sysattr");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_add_match_property_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_property");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_add_match_property_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_property");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_add_match_sysname_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_sysname");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_add_match_sysname_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_sysname");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_add_match_tag_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_tag");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_add_match_tag_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_tag");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_add_match_parent_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_parent");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_add_match_parent_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_parent");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_add_match_is_initialized_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_is_initialized");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_add_match_is_initialized_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_match_is_initialized");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_add_syspath_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_syspath");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_add_syspath_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_add_syspath");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_scan_devices_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_scan_devices");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_scan_devices_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_scan_devices");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_scan_subsystems_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_scan_subsystems");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_scan_subsystems_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_scan_subsystems");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_enumerate_get_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_get_list_entry");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_enumerate_get_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_enumerate_get_list_entry");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_get_udev");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_get_udev_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_get_udev");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_new");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_new");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_get_kernel_seqnum_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_kernel_seqnum");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_get_kernel_seqnum_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_kernel_seqnum");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_get_udev_seqnum_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_udev_seqnum");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_get_udev_seqnum_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_udev_seqnum");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_get_udev_is_active_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_udev_is_active");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_get_udev_is_active_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_udev_is_active");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_get_queue_is_empty_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_queue_is_empty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_get_queue_is_empty_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_queue_is_empty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_get_seqnum_is_finished_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_seqnum_is_finished");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_get_seqnum_is_finished_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_seqnum_is_finished");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_get_seqnum_sequence_is_finished_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_seqnum_sequence_is_finished");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_get_seqnum_sequence_is_finished_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_seqnum_sequence_is_finished");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_get_fd_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_get_fd");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_get_fd_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_get_fd");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_flush_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_flush");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_flush_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_queue_flush");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_queue_get_queued_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_queued_list_entry");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_queue_get_queued_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_queue_get_queued_list_entry");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_hwdb_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_hwdb_new");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_hwdb_new_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_hwdb_new");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_hwdb_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_hwdb_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_hwdb_ref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_hwdb_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_hwdb_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_hwdb_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_hwdb_unref_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_hwdb_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_hwdb_get_properties_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_hwdb_get_properties_list_entry");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_hwdb_get_properties_list_entry_dylibloader_wrapper_libudev =
             dlsym(lVar1,"udev_hwdb_get_properties_list_entry");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        udev_util_encode_string_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_util_encode_string")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        udev_util_encode_string_dylibloader_wrapper_libudev = dlsym(lVar1,"udev_util_encode_string")
        ;
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


