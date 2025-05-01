
/* WARNING: Unknown calling convention */

sa_handler_t get_handler(sigaction *a)

{
  return (a->__sigaction_handler).sa_handler;
}


