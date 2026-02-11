
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_dbus(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = dlopen("libdbus-1.so.3",1);
  if (lVar1 != 0) {
    dlerror();
    dbus_error_init_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_error_init");
    if (param_1 == 0) {
      dbus_error_free_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_error_free");
      dbus_set_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_set_error");
      dbus_set_error_const_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_set_error_const");
      dbus_move_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_move_error");
      dbus_error_has_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_error_has_name");
      dbus_error_is_set_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_error_is_set");
      dbus_parse_address_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_parse_address");
      dbus_address_entry_get_value_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_address_entry_get_value");
      dbus_address_entry_get_method_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_address_entry_get_method");
      dbus_address_entries_free_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_address_entries_free");
      dbus_address_escape_value_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_address_escape_value");
      dbus_address_unescape_value_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_address_unescape_value");
      dbus_malloc_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_malloc");
      dbus_malloc0_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_malloc0");
      dbus_realloc_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_realloc");
      dbus_free_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_free");
      dbus_free_string_array_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_free_string_array");
      dbus_shutdown_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_shutdown");
      dbus_message_new_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_new");
      dbus_message_new_method_call_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_new_method_call");
      dbus_message_new_method_return_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_new_method_return");
      dbus_message_new_signal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_new_signal");
      dbus_message_new_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_new_error");
      dbus_message_new_error_printf_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_new_error_printf");
      dbus_message_copy_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_copy");
      dbus_message_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_ref");
      dbus_message_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_unref");
      dbus_message_get_type_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_type");
      dbus_message_set_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_path");
      dbus_message_get_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_path");
      dbus_message_has_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_has_path");
      dbus_message_set_interface_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_set_interface");
      dbus_message_get_interface_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_get_interface");
      dbus_message_has_interface_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_has_interface");
      dbus_message_set_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_member");
      dbus_message_get_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_member");
      dbus_message_has_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_has_member");
      dbus_message_set_error_name_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_set_error_name");
      dbus_message_get_error_name_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_get_error_name");
      dbus_message_set_destination_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_set_destination");
      dbus_message_get_destination_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_get_destination");
      dbus_message_set_sender_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_sender");
      dbus_message_get_sender_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_sender");
      dbus_message_get_signature_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_get_signature");
      dbus_message_set_no_reply_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_no_reply");
      dbus_message_get_no_reply_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_no_reply");
      dbus_message_is_method_call_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_is_method_call");
      dbus_message_is_signal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_is_signal");
      dbus_message_is_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_is_error");
      dbus_message_has_destination_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_has_destination");
      dbus_message_has_sender_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_has_sender");
      dbus_message_has_signature_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_has_signature");
      dbus_message_get_serial_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_serial");
      dbus_message_set_serial_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_serial");
      dbus_message_set_reply_serial_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_set_reply_serial");
      dbus_message_get_reply_serial_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_get_reply_serial");
      dbus_message_set_auto_start_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_set_auto_start");
      dbus_message_get_auto_start_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_get_auto_start");
      dbus_message_get_path_decomposed_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_get_path_decomposed");
      dbus_message_append_args_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_append_args");
      dbus_message_append_args_valist_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_append_args_valist");
      dbus_message_get_args_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_args");
      dbus_message_get_args_valist_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_get_args_valist");
      dbus_message_contains_unix_fds_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_contains_unix_fds");
      dbus_message_iter_init_closed_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_init_closed");
      dbus_message_iter_init_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_iter_init");
      dbus_message_iter_has_next_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_has_next");
      dbus_message_iter_next_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_iter_next");
      dbus_message_iter_get_signature_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_get_signature");
      dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_get_arg_type");
      dbus_message_iter_get_element_type_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_get_element_type");
      dbus_message_iter_recurse_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_iter_recurse");
      dbus_message_iter_get_basic_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_get_basic");
      dbus_message_iter_get_element_count_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_get_element_count");
      dbus_message_iter_get_array_len_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_get_array_len");
      dbus_message_iter_get_fixed_array_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_get_fixed_array");
      dbus_message_iter_init_append_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_init_append");
      dbus_message_iter_append_basic_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_append_basic");
      dbus_message_iter_append_fixed_array_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_append_fixed_array");
      dbus_message_iter_open_container_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_open_container");
      dbus_message_iter_close_container_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_close_container");
      dbus_message_iter_abandon_container_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_abandon_container");
      dbus_message_iter_abandon_container_if_open_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_iter_abandon_container_if_open");
      dbus_message_lock_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_lock");
      dbus_set_error_from_message_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_set_error_from_message");
      dbus_message_allocate_data_slot_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_allocate_data_slot");
      dbus_message_free_data_slot_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_free_data_slot");
      dbus_message_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_data");
      dbus_message_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_data");
      dbus_message_type_from_string_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_type_from_string");
      dbus_message_type_to_string_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_type_to_string");
      dbus_message_marshal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_marshal");
      dbus_message_demarshal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_demarshal");
      dbus_message_demarshal_bytes_needed_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_demarshal_bytes_needed");
      dbus_message_set_allow_interactive_authorization_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_set_allow_interactive_authorization");
      dbus_message_get_allow_interactive_authorization_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_message_get_allow_interactive_authorization");
      dbus_connection_open_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_open");
      dbus_connection_open_private_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_open_private");
      dbus_connection_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_ref");
      dbus_connection_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_unref");
      dbus_connection_close_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_close");
      dbus_connection_get_is_connected_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_is_connected");
      dbus_connection_get_is_authenticated_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_is_authenticated");
      dbus_connection_get_is_anonymous_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_is_anonymous");
      dbus_connection_get_server_id_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_server_id");
      dbus_connection_can_send_type_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_can_send_type");
      dbus_connection_set_exit_on_disconnect_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_exit_on_disconnect");
      dbus_connection_flush_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_flush");
      dbus_connection_read_write_dispatch_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_read_write_dispatch");
      dbus_connection_read_write_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_read_write");
      dbus_connection_borrow_message_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_borrow_message");
      dbus_connection_return_message_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_return_message");
      dbus_connection_steal_borrowed_message_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_steal_borrowed_message");
      dbus_connection_pop_message_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_pop_message");
      dbus_connection_get_dispatch_status_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_dispatch_status");
      dbus_connection_dispatch_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_dispatch");
      dbus_connection_has_messages_to_send_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_has_messages_to_send");
      dbus_connection_send_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_send");
      dbus_connection_send_with_reply_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_send_with_reply");
      dbus_connection_send_with_reply_and_block_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_send_with_reply_and_block");
      dbus_connection_set_watch_functions_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_watch_functions");
      dbus_connection_set_timeout_functions_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_timeout_functions");
      dbus_connection_set_wakeup_main_function_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_wakeup_main_function");
      dbus_connection_set_dispatch_status_function_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_dispatch_status_function");
      dbus_connection_get_unix_user_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_unix_user");
      dbus_connection_get_unix_process_id_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_unix_process_id");
      dbus_connection_get_adt_audit_session_data_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_adt_audit_session_data");
      dbus_connection_set_unix_user_function_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_unix_user_function");
      dbus_connection_get_windows_user_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_windows_user");
      dbus_connection_set_windows_user_function_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_windows_user_function");
      dbus_connection_set_allow_anonymous_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_allow_anonymous");
      dbus_connection_set_route_peer_messages_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_route_peer_messages");
      dbus_connection_add_filter_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_add_filter");
      dbus_connection_remove_filter_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_remove_filter");
      dbus_connection_allocate_data_slot_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_allocate_data_slot");
      dbus_connection_free_data_slot_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_free_data_slot");
      dbus_connection_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_set_data");
      dbus_connection_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_get_data");
      dbus_connection_set_change_sigpipe_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_change_sigpipe");
      dbus_connection_set_max_message_size_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_max_message_size");
      dbus_connection_get_max_message_size_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_max_message_size");
      dbus_connection_set_max_received_size_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_max_received_size");
      dbus_connection_get_max_received_size_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_max_received_size");
      dbus_connection_set_max_message_unix_fds_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_max_message_unix_fds");
      dbus_connection_get_max_message_unix_fds_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_max_message_unix_fds");
      dbus_connection_set_max_received_unix_fds_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_set_max_received_unix_fds");
      dbus_connection_get_max_received_unix_fds_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_max_received_unix_fds");
      dbus_connection_get_outgoing_size_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_outgoing_size");
      dbus_connection_get_outgoing_unix_fds_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_outgoing_unix_fds");
      dbus_connection_preallocate_send_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_preallocate_send");
      dbus_connection_free_preallocated_send_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_free_preallocated_send");
      dbus_connection_send_preallocated_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_send_preallocated");
      dbus_connection_try_register_object_path_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_try_register_object_path");
      dbus_connection_register_object_path_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_register_object_path");
      dbus_connection_try_register_fallback_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_try_register_fallback");
      dbus_connection_register_fallback_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_register_fallback");
      dbus_connection_unregister_object_path_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_unregister_object_path");
      dbus_connection_get_object_path_data_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_object_path_data");
      dbus_connection_list_registered_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_list_registered");
      dbus_connection_get_unix_fd_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_unix_fd");
      dbus_connection_get_socket_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_connection_get_socket");
      dbus_watch_get_fd_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_fd");
      dbus_watch_get_unix_fd_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_unix_fd");
      dbus_watch_get_socket_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_socket");
      dbus_watch_get_flags_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_flags");
      dbus_watch_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_data");
      dbus_watch_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_set_data");
      dbus_watch_handle_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_handle");
      dbus_watch_get_enabled_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_enabled");
      dbus_timeout_get_interval_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_get_interval");
      dbus_timeout_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_get_data");
      dbus_timeout_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_set_data");
      dbus_timeout_handle_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_handle");
      dbus_timeout_get_enabled_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_get_enabled");
      dbus_bus_get_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get");
      dbus_bus_get_private_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_private");
      dbus_bus_register_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_register");
      dbus_bus_set_unique_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_set_unique_name");
      dbus_bus_get_unique_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_unique_name");
      dbus_bus_get_unix_user_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_unix_user");
      dbus_bus_get_id_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_id");
      dbus_bus_request_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_request_name");
      dbus_bus_release_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_release_name");
      dbus_bus_name_has_owner_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_name_has_owner");
      dbus_bus_start_service_by_name_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_bus_start_service_by_name");
      dbus_bus_add_match_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_add_match");
      dbus_bus_remove_match_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_remove_match");
      dbus_get_local_machine_id_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_get_local_machine_id");
      dbus_get_version_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_get_version");
      dbus_setenv_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_setenv");
      dbus_try_get_local_machine_id_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_try_get_local_machine_id");
      dbus_pending_call_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_ref");
      dbus_pending_call_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_unref");
      dbus_pending_call_set_notify_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_pending_call_set_notify");
      dbus_pending_call_cancel_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_cancel");
      dbus_pending_call_get_completed_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_pending_call_get_completed");
      dbus_pending_call_steal_reply_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_pending_call_steal_reply");
      dbus_pending_call_block_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_block");
      dbus_pending_call_allocate_data_slot_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_pending_call_allocate_data_slot");
      dbus_pending_call_free_data_slot_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_pending_call_free_data_slot");
      dbus_pending_call_set_data_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_pending_call_set_data");
      dbus_pending_call_get_data_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_pending_call_get_data");
      dbus_server_listen_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_listen");
      dbus_server_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_ref");
      dbus_server_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_unref");
      dbus_server_disconnect_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_disconnect");
      dbus_server_get_is_connected_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_server_get_is_connected");
      dbus_server_get_address_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_get_address");
      dbus_server_get_id_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_get_id");
      dbus_server_set_new_connection_function_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_server_set_new_connection_function");
      dbus_server_set_watch_functions_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_server_set_watch_functions");
      dbus_server_set_timeout_functions_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_server_set_timeout_functions");
      dbus_server_set_auth_mechanisms_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_server_set_auth_mechanisms");
      dbus_server_allocate_data_slot_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_server_allocate_data_slot");
      dbus_server_free_data_slot_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_server_free_data_slot");
      dbus_server_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_set_data");
      dbus_server_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_get_data");
      dbus_signature_iter_init_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_signature_iter_init");
      dbus_signature_iter_get_current_type_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_signature_iter_get_current_type");
      dbus_signature_iter_get_signature_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_signature_iter_get_signature");
      dbus_signature_iter_get_element_type_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_signature_iter_get_element_type");
      dbus_signature_iter_next_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_signature_iter_next");
      dbus_signature_iter_recurse_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_signature_iter_recurse");
      dbus_signature_validate_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_signature_validate");
      dbus_signature_validate_single_dylibloader_wrapper_dbus =
           dlsym(lVar1,"dbus_signature_validate_single");
      dbus_type_is_valid_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_valid");
      dbus_type_is_basic_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_basic");
      dbus_type_is_container_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_container");
      dbus_type_is_fixed_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_fixed");
      dbus_validate_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_path");
      dbus_validate_interface_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_interface");
      dbus_validate_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_member");
      dbus_validate_error_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_error_name");
      dbus_validate_bus_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_bus_name");
      dbus_validate_utf8_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_utf8");
      dbus_threads_init_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_threads_init");
      dbus_threads_init_default_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_threads_init_default");
    }
    else {
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_error_free_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_error_free");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_error_free_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_error_free");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_set_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_set_error");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_set_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_set_error");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_set_error_const_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_set_error_const");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_set_error_const_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_set_error_const");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_move_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_move_error");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_move_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_move_error");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_error_has_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_error_has_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_error_has_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_error_has_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_error_is_set_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_error_is_set");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_error_is_set_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_error_is_set");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_parse_address_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_parse_address");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_parse_address_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_parse_address");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_address_entry_get_value_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_address_entry_get_value");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_address_entry_get_value_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_address_entry_get_value");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_address_entry_get_method_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_address_entry_get_method");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_address_entry_get_method_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_address_entry_get_method");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_address_entries_free_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_address_entries_free");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_address_entries_free_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_address_entries_free");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_address_escape_value_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_address_escape_value");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_address_escape_value_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_address_escape_value");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_address_unescape_value_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_address_unescape_value");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_address_unescape_value_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_address_unescape_value");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_malloc_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_malloc");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_malloc_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_malloc");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_malloc0_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_malloc0");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_malloc0_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_malloc0");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_realloc_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_realloc");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_realloc_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_realloc");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_free_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_free");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_free_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_free");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_free_string_array_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_free_string_array");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_free_string_array_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_free_string_array");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_shutdown_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_shutdown");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_shutdown_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_shutdown");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_new_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_new");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_new_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_new");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_new_method_call_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_new_method_call");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_new_method_call_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_new_method_call");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_new_method_return_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_new_method_return");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_new_method_return_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_new_method_return");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_new_signal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_new_signal");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_new_signal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_new_signal");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_new_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_new_error");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_new_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_new_error");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_new_error_printf_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_new_error_printf");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_new_error_printf_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_new_error_printf");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_copy_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_copy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_copy_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_copy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_type_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_type");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_type_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_type");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_path");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_path");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_path");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_path");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_has_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_has_path");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_has_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_has_path");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_interface_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_interface");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_interface_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_interface");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_interface_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_interface");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_interface_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_interface");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_has_interface_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_has_interface");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_has_interface_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_has_interface");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_member");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_member");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_member");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_member");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_has_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_has_member");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_has_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_has_member");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_error_name_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_error_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_error_name_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_error_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_error_name_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_error_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_error_name_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_error_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_destination_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_destination");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_destination_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_destination");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_destination_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_destination");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_destination_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_destination");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_sender_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_sender");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_sender_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_sender");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_sender_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_sender");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_sender_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_sender");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_signature_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_signature");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_signature_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_signature");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_no_reply_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_no_reply");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_no_reply_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_no_reply");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_no_reply_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_no_reply");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_no_reply_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_no_reply");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_is_method_call_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_is_method_call");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_is_method_call_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_is_method_call");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_is_signal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_is_signal");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_is_signal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_is_signal");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_is_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_is_error");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_is_error_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_is_error");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_has_destination_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_has_destination");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_has_destination_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_has_destination");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_has_sender_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_has_sender");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_has_sender_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_has_sender");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_has_signature_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_has_signature");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_has_signature_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_has_signature");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_serial_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_serial");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_serial_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_serial");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_serial_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_serial");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_serial_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_serial");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_reply_serial_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_reply_serial");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_reply_serial_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_reply_serial");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_reply_serial_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_reply_serial");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_reply_serial_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_reply_serial");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_auto_start_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_auto_start");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_auto_start_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_auto_start");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_auto_start_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_auto_start");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_auto_start_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_auto_start");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_path_decomposed_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_path_decomposed");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_path_decomposed_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_path_decomposed");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_append_args_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_append_args");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_append_args_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_append_args");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_append_args_valist_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_append_args_valist");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_append_args_valist_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_append_args_valist");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_args_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_args");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_args_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_args");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_args_valist_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_args_valist");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_args_valist_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_args_valist");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_contains_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_contains_unix_fds");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_contains_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_contains_unix_fds");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_init_closed_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_init_closed");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_init_closed_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_init_closed");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_init_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_iter_init");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_init_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_iter_init");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_has_next_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_has_next");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_has_next_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_has_next");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_next_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_iter_next");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_next_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_iter_next");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_get_signature_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_signature");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_get_signature_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_signature");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_arg_type");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_get_arg_type_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_arg_type");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_get_element_type_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_element_type");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_get_element_type_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_element_type");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_recurse_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_recurse");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_recurse_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_recurse");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_get_basic_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_basic");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_get_basic_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_basic");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_get_element_count_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_element_count");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_get_element_count_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_element_count");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_get_array_len_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_array_len");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_get_array_len_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_array_len");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_get_fixed_array_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_fixed_array");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_get_fixed_array_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_get_fixed_array");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_init_append_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_init_append");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_init_append_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_init_append");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_append_basic_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_append_basic");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_append_basic_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_append_basic");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_append_fixed_array_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_append_fixed_array");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_append_fixed_array_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_append_fixed_array");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_open_container_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_open_container");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_open_container_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_open_container");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_close_container_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_close_container");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_close_container_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_close_container");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_abandon_container_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_abandon_container");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_abandon_container_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_abandon_container");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_iter_abandon_container_if_open_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_abandon_container_if_open");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_iter_abandon_container_if_open_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_iter_abandon_container_if_open");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_lock_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_lock");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_lock_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_lock");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_set_error_from_message_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_set_error_from_message");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_set_error_from_message_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_set_error_from_message");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_allocate_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_allocate_data_slot");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_allocate_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_allocate_data_slot");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_free_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_free_data_slot");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_free_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_free_data_slot");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_set_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_get_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_type_from_string_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_type_from_string");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_type_from_string_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_type_from_string");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_type_to_string_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_type_to_string");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_type_to_string_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_type_to_string");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_marshal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_marshal");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_marshal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_marshal");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_demarshal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_demarshal");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_demarshal_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_message_demarshal");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_demarshal_bytes_needed_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_demarshal_bytes_needed");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_demarshal_bytes_needed_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_demarshal_bytes_needed");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_set_allow_interactive_authorization_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_allow_interactive_authorization");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_set_allow_interactive_authorization_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_set_allow_interactive_authorization");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_message_get_allow_interactive_authorization_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_allow_interactive_authorization");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_message_get_allow_interactive_authorization_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_message_get_allow_interactive_authorization");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_open_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_open");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_open_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_open");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_open_private_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_open_private");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_open_private_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_open_private");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_close_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_close");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_close_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_close");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_is_connected_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_is_connected");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_is_connected_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_is_connected");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_is_authenticated_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_is_authenticated");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_is_authenticated_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_is_authenticated");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_is_anonymous_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_is_anonymous");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_is_anonymous_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_is_anonymous");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_server_id_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_server_id");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_server_id_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_server_id");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_can_send_type_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_can_send_type");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_can_send_type_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_can_send_type");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_exit_on_disconnect_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_exit_on_disconnect");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_exit_on_disconnect_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_exit_on_disconnect");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_flush_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_flush");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_flush_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_flush");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_read_write_dispatch_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_read_write_dispatch");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_read_write_dispatch_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_read_write_dispatch");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_read_write_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_read_write");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_read_write_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_read_write");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_borrow_message_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_borrow_message");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_borrow_message_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_borrow_message");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_return_message_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_return_message");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_return_message_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_return_message");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_steal_borrowed_message_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_steal_borrowed_message");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_steal_borrowed_message_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_steal_borrowed_message");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_pop_message_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_pop_message");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_pop_message_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_pop_message");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_dispatch_status_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_dispatch_status");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_dispatch_status_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_dispatch_status");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_dispatch_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_dispatch");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_dispatch_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_dispatch");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_has_messages_to_send_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_has_messages_to_send");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_has_messages_to_send_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_has_messages_to_send");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_send_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_send");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_send_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_send");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_send_with_reply_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_send_with_reply");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_send_with_reply_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_send_with_reply");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_send_with_reply_and_block_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_send_with_reply_and_block");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_send_with_reply_and_block_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_send_with_reply_and_block");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_watch_functions_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_watch_functions");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_watch_functions_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_watch_functions");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_timeout_functions_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_timeout_functions");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_timeout_functions_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_timeout_functions");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_wakeup_main_function_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_wakeup_main_function");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_wakeup_main_function_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_wakeup_main_function");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_dispatch_status_function_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_dispatch_status_function");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_dispatch_status_function_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_dispatch_status_function");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_unix_user_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_unix_user");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_unix_user_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_unix_user");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_unix_process_id_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_unix_process_id");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_unix_process_id_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_unix_process_id");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_adt_audit_session_data_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_adt_audit_session_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_adt_audit_session_data_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_adt_audit_session_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_unix_user_function_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_unix_user_function");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_unix_user_function_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_unix_user_function");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_windows_user_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_windows_user");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_windows_user_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_windows_user");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_windows_user_function_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_windows_user_function");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_windows_user_function_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_windows_user_function");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_allow_anonymous_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_allow_anonymous");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_allow_anonymous_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_allow_anonymous");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_route_peer_messages_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_route_peer_messages");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_route_peer_messages_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_route_peer_messages");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_add_filter_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_add_filter");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_add_filter_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_add_filter");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_remove_filter_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_remove_filter");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_remove_filter_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_remove_filter");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_allocate_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_allocate_data_slot");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_allocate_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_allocate_data_slot");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_free_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_free_data_slot");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_free_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_free_data_slot");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_set_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_set_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_get_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_connection_get_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_change_sigpipe_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_change_sigpipe");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_change_sigpipe_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_change_sigpipe");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_max_message_size_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_max_message_size");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_max_message_size_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_max_message_size");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_max_message_size_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_max_message_size");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_max_message_size_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_max_message_size");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_max_received_size_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_max_received_size");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_max_received_size_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_max_received_size");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_max_received_size_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_max_received_size");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_max_received_size_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_max_received_size");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_max_message_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_max_message_unix_fds");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_max_message_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_max_message_unix_fds");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_max_message_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_max_message_unix_fds");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_max_message_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_max_message_unix_fds");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_set_max_received_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_max_received_unix_fds");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_set_max_received_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_set_max_received_unix_fds");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_max_received_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_max_received_unix_fds");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_max_received_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_max_received_unix_fds");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_outgoing_size_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_outgoing_size");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_outgoing_size_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_outgoing_size");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_outgoing_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_outgoing_unix_fds");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_outgoing_unix_fds_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_outgoing_unix_fds");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_preallocate_send_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_preallocate_send");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_preallocate_send_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_preallocate_send");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_free_preallocated_send_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_free_preallocated_send");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_free_preallocated_send_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_free_preallocated_send");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_send_preallocated_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_send_preallocated");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_send_preallocated_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_send_preallocated");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_try_register_object_path_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_try_register_object_path");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_try_register_object_path_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_try_register_object_path");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_register_object_path_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_register_object_path");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_register_object_path_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_register_object_path");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_try_register_fallback_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_try_register_fallback");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_try_register_fallback_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_try_register_fallback");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_register_fallback_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_register_fallback");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_register_fallback_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_register_fallback");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_unregister_object_path_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_unregister_object_path");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_unregister_object_path_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_unregister_object_path");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_object_path_data_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_object_path_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_object_path_data_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_object_path_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_list_registered_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_list_registered");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_list_registered_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_list_registered");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_unix_fd_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_unix_fd");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_unix_fd_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_unix_fd");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_connection_get_socket_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_socket");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_connection_get_socket_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_connection_get_socket");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_watch_get_fd_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_fd");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_watch_get_fd_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_fd");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_watch_get_unix_fd_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_unix_fd");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_watch_get_unix_fd_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_unix_fd");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_watch_get_socket_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_socket");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_watch_get_socket_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_socket");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_watch_get_flags_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_flags");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_watch_get_flags_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_flags");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_watch_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_watch_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_watch_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_set_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_watch_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_set_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_watch_handle_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_handle");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_watch_handle_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_handle");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_watch_get_enabled_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_enabled");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_watch_get_enabled_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_watch_get_enabled");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_timeout_get_interval_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_timeout_get_interval");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_timeout_get_interval_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_timeout_get_interval");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_timeout_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_get_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_timeout_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_get_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_timeout_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_set_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_timeout_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_set_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_timeout_handle_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_handle");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_timeout_handle_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_handle");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_timeout_get_enabled_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_get_enabled");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_timeout_get_enabled_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_timeout_get_enabled");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_get_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_get_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_get_private_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_private");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_get_private_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_private");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_register_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_register");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_register_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_register");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_set_unique_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_set_unique_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_set_unique_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_set_unique_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_get_unique_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_unique_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_get_unique_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_unique_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_get_unix_user_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_unix_user");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_get_unix_user_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_unix_user");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_get_id_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_id");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_get_id_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_get_id");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_request_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_request_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_request_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_request_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_release_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_release_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_release_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_release_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_name_has_owner_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_name_has_owner");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_name_has_owner_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_name_has_owner");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_start_service_by_name_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_bus_start_service_by_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_start_service_by_name_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_bus_start_service_by_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_add_match_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_add_match");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_add_match_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_add_match");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_bus_remove_match_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_remove_match");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_bus_remove_match_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_bus_remove_match");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_get_local_machine_id_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_get_local_machine_id");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_get_local_machine_id_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_get_local_machine_id");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_get_version_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_get_version");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_get_version_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_get_version");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_setenv_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_setenv");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_setenv_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_setenv");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_try_get_local_machine_id_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_try_get_local_machine_id");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_try_get_local_machine_id_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_try_get_local_machine_id");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_pending_call_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_pending_call_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_pending_call_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_pending_call_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_pending_call_set_notify_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_set_notify");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_pending_call_set_notify_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_set_notify");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_pending_call_cancel_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_cancel");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_pending_call_cancel_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_cancel");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_pending_call_get_completed_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_get_completed");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_pending_call_get_completed_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_get_completed");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_pending_call_steal_reply_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_steal_reply");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_pending_call_steal_reply_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_steal_reply");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_pending_call_block_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_block");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_pending_call_block_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_pending_call_block");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_pending_call_allocate_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_allocate_data_slot");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_pending_call_allocate_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_allocate_data_slot");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_pending_call_free_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_free_data_slot");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_pending_call_free_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_free_data_slot");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_pending_call_set_data_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_set_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_pending_call_set_data_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_set_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_pending_call_get_data_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_get_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_pending_call_get_data_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_pending_call_get_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_listen_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_listen");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_listen_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_listen");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_ref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_ref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_ref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_unref");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_unref_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_unref");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_disconnect_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_disconnect");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_disconnect_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_disconnect");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_get_is_connected_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_get_is_connected");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_get_is_connected_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_get_is_connected");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_get_address_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_get_address");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_get_address_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_get_address");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_get_id_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_get_id");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_get_id_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_get_id");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_set_new_connection_function_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_set_new_connection_function");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_set_new_connection_function_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_set_new_connection_function");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_set_watch_functions_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_set_watch_functions");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_set_watch_functions_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_set_watch_functions");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_set_timeout_functions_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_set_timeout_functions");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_set_timeout_functions_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_set_timeout_functions");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_set_auth_mechanisms_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_set_auth_mechanisms");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_set_auth_mechanisms_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_set_auth_mechanisms");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_allocate_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_allocate_data_slot");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_allocate_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_allocate_data_slot");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_free_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_free_data_slot");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_free_data_slot_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_server_free_data_slot");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_set_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_set_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_set_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_server_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_get_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_server_get_data_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_server_get_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_signature_iter_init_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_signature_iter_init");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_signature_iter_init_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_signature_iter_init");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_signature_iter_get_current_type_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_signature_iter_get_current_type");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_signature_iter_get_current_type_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_signature_iter_get_current_type");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_signature_iter_get_signature_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_signature_iter_get_signature");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_signature_iter_get_signature_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_signature_iter_get_signature");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_signature_iter_get_element_type_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_signature_iter_get_element_type");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_signature_iter_get_element_type_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_signature_iter_get_element_type");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_signature_iter_next_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_signature_iter_next");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_signature_iter_next_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_signature_iter_next");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_signature_iter_recurse_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_signature_iter_recurse");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_signature_iter_recurse_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_signature_iter_recurse");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_signature_validate_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_signature_validate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_signature_validate_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_signature_validate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_signature_validate_single_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_signature_validate_single");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_signature_validate_single_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_signature_validate_single");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_type_is_valid_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_valid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_type_is_valid_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_valid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_type_is_basic_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_basic");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_type_is_basic_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_basic");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_type_is_container_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_container");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_type_is_container_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_container");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_type_is_fixed_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_fixed");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_type_is_fixed_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_type_is_fixed");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_validate_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_path");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_validate_path_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_path");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_validate_interface_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_interface");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_validate_interface_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_interface");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_validate_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_member");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_validate_member_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_member");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_validate_error_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_error_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_validate_error_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_error_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_validate_bus_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_bus_name");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_validate_bus_name_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_bus_name");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_validate_utf8_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_utf8");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_validate_utf8_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_validate_utf8");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_threads_init_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_threads_init");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_threads_init_dylibloader_wrapper_dbus = dlsym(lVar1,"dbus_threads_init");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        dbus_threads_init_default_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_threads_init_default");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        dbus_threads_init_default_dylibloader_wrapper_dbus =
             dlsym(lVar1,"dbus_threads_init_default");
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


