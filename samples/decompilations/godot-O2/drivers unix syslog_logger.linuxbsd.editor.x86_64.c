
/* SyslogLogger::~SyslogLogger() */

void __thiscall SyslogLogger::~SyslogLogger(SyslogLogger *this)

{
  return;
}



/* SyslogLogger::~SyslogLogger() */

void __thiscall SyslogLogger::~SyslogLogger(SyslogLogger *this)

{
  operator_delete(this,8);
  return;
}



/* SyslogLogger::logv(char const*, __va_list_tag*, bool) */

void __thiscall
SyslogLogger::logv(SyslogLogger *this,char *param_1,__va_list_tag *param_2,bool param_3)

{
  char cVar1;
  
  cVar1 = Logger::should_log(SUB81(this,0));
  if (cVar1 != '\0') {
    __vsyslog_chk((-!param_3 & 3U) + 3,2,param_1,param_2);
    return;
  }
  return;
}



/* SyslogLogger::print_error(char const*, char const*, int, char const*, char const*,
   Logger::ErrorType) */

void __thiscall
SyslogLogger::print_error
          (bool param_1_00,undefined8 param_1,undefined8 param_2,undefined4 param_3,char *param_4,
          char *param_5,uint param_7)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  cVar1 = Logger::should_log(param_1_00);
  if (cVar1 == '\0') {
    return;
  }
  if (param_7 == 2) {
    if (param_5 == (char *)0x0) {
      pcVar2 = "**SCRIPT ERROR**";
      uVar3 = 3;
      param_5 = param_4;
    }
    else {
      pcVar2 = "**SCRIPT ERROR**";
      uVar3 = 3;
      if (*param_5 == '\0') {
        param_5 = param_4;
      }
    }
    goto LAB_00100110;
  }
  if (2 < param_7) {
    if (param_7 == 3) {
      if (param_5 == (char *)0x0) {
        pcVar2 = "**SHADER ERROR**";
        uVar3 = 3;
        param_5 = param_4;
      }
      else {
        pcVar2 = "**SHADER ERROR**";
        uVar3 = 3;
        if (*param_5 == '\0') {
          param_5 = param_4;
        }
      }
      goto LAB_00100110;
    }
    _err_print_error("print_error","drivers/unix/syslog_logger.cpp",0x43,"Unknown error type",0,0);
    if (param_5 != (char *)0x0) goto LAB_0010014d;
    goto LAB_00100152;
  }
  if (param_7 != 0) {
    if (param_5 == (char *)0x0) {
      pcVar2 = "**WARNING**";
      uVar3 = 4;
      param_5 = param_4;
    }
    else {
      pcVar2 = "**WARNING**";
      uVar3 = 4;
      if (*param_5 == '\0') {
        param_5 = param_4;
      }
    }
    goto LAB_00100110;
  }
  if (param_5 == (char *)0x0) {
LAB_00100152:
    param_5 = param_4;
  }
  else {
LAB_0010014d:
    if (*param_5 == '\0') goto LAB_00100152;
  }
  pcVar2 = "**ERROR**";
  uVar3 = 3;
LAB_00100110:
  __syslog_chk(uVar3,2,"%s: %s\n   At: %s:%i:%s() - %s",pcVar2,param_5,param_2,param_3,param_1,
               param_4);
  return;
}


