
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_speechd(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = dlopen("libspeechd.so.2",1);
  if (lVar1 != 0) {
    dlerror();
    SPDConnectionAddress__free_dylibloader_wrapper_speechd =
         dlsym(lVar1,"SPDConnectionAddress__free");
    if (param_1 == 0) {
      spd_get_default_address_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_default_address");
      spd_open_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_open");
      spd_open2_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_open2");
      spd_close_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_close");
      spd_say_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_say");
      spd_sayf_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_sayf");
      spd_stop_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_stop");
      spd_stop_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_stop_all");
      spd_stop_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_stop_uid");
      spd_cancel_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_cancel");
      spd_cancel_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_cancel_all");
      spd_cancel_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_cancel_uid");
      spd_pause_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_pause");
      spd_pause_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_pause_all");
      spd_pause_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_pause_uid");
      spd_resume_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_resume");
      spd_resume_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_resume_all");
      spd_resume_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_resume_uid");
      spd_key_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_key");
      spd_char_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_char");
      spd_wchar_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_wchar");
      spd_sound_icon_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_sound_icon");
      spd_set_voice_type_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_type");
      spd_set_voice_type_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_type_all");
      spd_set_voice_type_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_type_uid");
      spd_get_voice_type_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_voice_type");
      spd_set_synthesis_voice_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_synthesis_voice");
      spd_set_synthesis_voice_all_dylibloader_wrapper_speechd =
           dlsym(lVar1,"spd_set_synthesis_voice_all");
      spd_set_synthesis_voice_uid_dylibloader_wrapper_speechd =
           dlsym(lVar1,"spd_set_synthesis_voice_uid");
      spd_set_data_mode_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_data_mode");
      spd_set_notification_on_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_notification_on");
      spd_set_notification_off_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_notification_off")
      ;
      spd_set_notification_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_notification");
      spd_set_voice_rate_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_rate");
      spd_set_voice_rate_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_rate_all");
      spd_set_voice_rate_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_rate_uid");
      spd_get_voice_rate_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_voice_rate");
      spd_set_voice_pitch_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_pitch");
      spd_set_voice_pitch_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_pitch_all");
      spd_set_voice_pitch_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_pitch_uid");
      spd_get_voice_pitch_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_voice_pitch");
      spd_set_volume_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_volume");
      spd_set_volume_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_volume_all");
      spd_set_volume_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_volume_uid");
      spd_get_volume_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_volume");
      spd_set_punctuation_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_punctuation");
      spd_set_punctuation_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_punctuation_all");
      spd_set_punctuation_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_punctuation_uid");
      spd_set_capital_letters_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_capital_letters");
      spd_set_capital_letters_all_dylibloader_wrapper_speechd =
           dlsym(lVar1,"spd_set_capital_letters_all");
      spd_set_capital_letters_uid_dylibloader_wrapper_speechd =
           dlsym(lVar1,"spd_set_capital_letters_uid");
      spd_set_spelling_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_spelling");
      spd_set_spelling_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_spelling_all");
      spd_set_spelling_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_spelling_uid");
      spd_set_language_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_language");
      spd_set_language_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_language_all");
      spd_set_language_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_language_uid");
      spd_get_language_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_language");
      spd_set_output_module_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_output_module");
      spd_set_output_module_all_dylibloader_wrapper_speechd =
           dlsym(lVar1,"spd_set_output_module_all");
      spd_set_output_module_uid_dylibloader_wrapper_speechd =
           dlsym(lVar1,"spd_set_output_module_uid");
      spd_get_message_list_fd_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_message_list_fd");
      spd_list_modules_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_list_modules");
      free_spd_modules_dylibloader_wrapper_speechd = dlsym(lVar1,"free_spd_modules");
      spd_get_output_module_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_output_module");
      spd_list_voices_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_list_voices");
      spd_list_synthesis_voices_dylibloader_wrapper_speechd =
           dlsym(lVar1,"spd_list_synthesis_voices");
      free_spd_voices_dylibloader_wrapper_speechd = dlsym(lVar1,"free_spd_voices");
      spd_execute_command_with_list_reply_dylibloader_wrapper_speechd =
           dlsym(lVar1,"spd_execute_command_with_list_reply");
      spd_execute_command_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_execute_command");
      spd_execute_command_with_reply_dylibloader_wrapper_speechd =
           dlsym(lVar1,"spd_execute_command_with_reply");
      spd_execute_command_wo_mutex_dylibloader_wrapper_speechd =
           dlsym(lVar1,"spd_execute_command_wo_mutex");
      spd_send_data_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_send_data");
      spd_send_data_wo_mutex_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_send_data_wo_mutex");
    }
    else {
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_get_default_address_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_default_address")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_get_default_address_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_default_address")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_open_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_open");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_open_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_open");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_open2_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_open2");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_open2_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_open2");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_close_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_close");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_close_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_close");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_say_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_say");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_say_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_say");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_sayf_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_sayf");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_sayf_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_sayf");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_stop_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_stop");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_stop_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_stop");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_stop_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_stop_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_stop_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_stop_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_stop_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_stop_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_stop_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_stop_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_cancel_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_cancel");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_cancel_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_cancel");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_cancel_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_cancel_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_cancel_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_cancel_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_cancel_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_cancel_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_cancel_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_cancel_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_pause_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_pause");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_pause_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_pause");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_pause_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_pause_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_pause_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_pause_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_pause_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_pause_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_pause_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_pause_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_resume_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_resume");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_resume_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_resume");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_resume_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_resume_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_resume_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_resume_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_resume_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_resume_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_resume_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_resume_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_key_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_key");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_key_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_key");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_char_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_char");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_char_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_char");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_wchar_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_wchar");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_wchar_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_wchar");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_sound_icon_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_sound_icon");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_sound_icon_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_sound_icon");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_voice_type_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_type");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_voice_type_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_type");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_voice_type_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_type_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_voice_type_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_type_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_voice_type_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_type_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_voice_type_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_type_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_get_voice_type_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_voice_type");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_get_voice_type_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_voice_type");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_synthesis_voice_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_synthesis_voice")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_synthesis_voice_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_synthesis_voice")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_synthesis_voice_all_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_synthesis_voice_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_synthesis_voice_all_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_synthesis_voice_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_synthesis_voice_uid_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_synthesis_voice_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_synthesis_voice_uid_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_synthesis_voice_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_data_mode_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_data_mode");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_data_mode_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_data_mode");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_notification_on_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_notification_on")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_notification_on_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_notification_on")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_notification_off_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_notification_off");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_notification_off_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_notification_off");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_notification_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_notification");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_notification_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_notification");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_voice_rate_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_rate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_voice_rate_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_rate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_voice_rate_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_rate_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_voice_rate_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_rate_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_voice_rate_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_rate_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_voice_rate_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_rate_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_get_voice_rate_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_voice_rate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_get_voice_rate_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_voice_rate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_voice_pitch_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_pitch");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_voice_pitch_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_pitch");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_voice_pitch_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_pitch_all")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_voice_pitch_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_pitch_all")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_voice_pitch_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_pitch_uid")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_voice_pitch_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_voice_pitch_uid")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_get_voice_pitch_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_voice_pitch");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_get_voice_pitch_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_voice_pitch");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_volume_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_volume");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_volume_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_volume");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_volume_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_volume_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_volume_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_volume_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_volume_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_volume_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_volume_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_volume_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_get_volume_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_volume");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_get_volume_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_volume");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_punctuation_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_punctuation");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_punctuation_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_punctuation");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_punctuation_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_punctuation_all")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_punctuation_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_punctuation_all")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_punctuation_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_punctuation_uid")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_punctuation_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_punctuation_uid")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_capital_letters_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_capital_letters")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_capital_letters_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_capital_letters")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_capital_letters_all_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_capital_letters_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_capital_letters_all_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_capital_letters_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_capital_letters_uid_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_capital_letters_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_capital_letters_uid_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_capital_letters_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_spelling_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_spelling");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_spelling_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_spelling");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_spelling_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_spelling_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_spelling_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_spelling_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_spelling_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_spelling_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_spelling_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_spelling_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_language_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_language");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_language_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_language");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_language_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_language_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_language_all_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_language_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_language_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_language_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_language_uid_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_language_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_get_language_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_language");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_get_language_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_language");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_output_module_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_output_module");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_output_module_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_set_output_module");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_output_module_all_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_output_module_all");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_output_module_all_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_output_module_all");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_set_output_module_uid_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_output_module_uid");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_set_output_module_uid_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_set_output_module_uid");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_get_message_list_fd_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_message_list_fd")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_get_message_list_fd_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_message_list_fd")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_list_modules_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_list_modules");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_list_modules_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_list_modules");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        free_spd_modules_dylibloader_wrapper_speechd = dlsym(lVar1,"free_spd_modules");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        free_spd_modules_dylibloader_wrapper_speechd = dlsym(lVar1,"free_spd_modules");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_get_output_module_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_output_module");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_get_output_module_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_get_output_module");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_list_voices_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_list_voices");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_list_voices_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_list_voices");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_list_synthesis_voices_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_list_synthesis_voices");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_list_synthesis_voices_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_list_synthesis_voices");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        free_spd_voices_dylibloader_wrapper_speechd = dlsym(lVar1,"free_spd_voices");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        free_spd_voices_dylibloader_wrapper_speechd = dlsym(lVar1,"free_spd_voices");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_execute_command_with_list_reply_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_execute_command_with_list_reply");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_execute_command_with_list_reply_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_execute_command_with_list_reply");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_execute_command_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_execute_command");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_execute_command_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_execute_command");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_execute_command_with_reply_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_execute_command_with_reply");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_execute_command_with_reply_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_execute_command_with_reply");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_execute_command_wo_mutex_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_execute_command_wo_mutex");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_execute_command_wo_mutex_dylibloader_wrapper_speechd =
             dlsym(lVar1,"spd_execute_command_wo_mutex");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_send_data_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_send_data");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_send_data_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_send_data");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        spd_send_data_wo_mutex_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_send_data_wo_mutex");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        spd_send_data_wo_mutex_dylibloader_wrapper_speechd = dlsym(lVar1,"spd_send_data_wo_mutex");
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


