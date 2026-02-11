
/* NetSocket::create() */

undefined8 NetSocket::create(void)

{
  undefined8 uVar1;
  
  if (_create != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*_create)();
    return uVar1;
  }
  _err_print_error("create","core/io/net_socket.cpp",0x28,
                   "Unable to create network socket, platform not supported",0,0);
  return 0;
}


