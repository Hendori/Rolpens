
void recsig(undefined4 param_1)

{
  intr_signal = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 close_console(long param_1)

{
  if (tty_in != _stdin) {
    fclose(tty_in);
  }
  if (tty_out != _stderr) {
    fclose(tty_out);
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x30));
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 open_console(long param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    return 0;
  }
  is_a_tty = 1;
  tty_in = fopen("/dev/tty","r");
  if (tty_in == (FILE *)0x0) {
    tty_in = _stdin;
  }
  tty_out = fopen("/dev/tty","w");
  if (tty_out == (FILE *)0x0) {
    tty_out = _stderr;
  }
  iVar1 = fileno(tty_in);
  iVar1 = tcgetattr(iVar1,(termios *)tty_orig);
  if (iVar1 == -1) {
    puVar2 = (uint *)__errno_location();
    if ((0x19 < *puVar2) || ((0x2480062UL >> ((ulong)*puVar2 & 0x3f) & 1) == 0)) {
      ERR_new();
      ERR_set_debug("crypto/ui/ui_openssl.c",0x1cb,"open_console");
      ERR_set_error(0x28,0x6c,"errno=%d",*puVar2);
      return 0;
    }
    is_a_tty = 0;
  }
  return 1;
}



undefined8 write_string(undefined8 param_1,UI_STRING *param_2)

{
  FILE *__stream;
  UI_string_types UVar1;
  char *__s;
  
  UVar1 = UI_get_string_type(param_2);
  __stream = tty_out;
  if (1 < UVar1 - UIT_INFO) {
    return 1;
  }
  __s = UI_get0_output_string(param_2);
  fputs(__s,__stream);
  fflush(tty_out);
  return 1;
}



uint read_string_inner(UI *param_1,UI_STRING *param_2,int param_3,int param_4)

{
  FILE *pFVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  sigaction *__act;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  sigaction *__oact;
  long in_FS_OFFSET;
  _union_1457 local_20e8;
  undefined8 local_20e0 [18];
  char local_204d [5];
  char local_2048 [8200];
  long local_40;
  
  __act = (sigaction *)(savsig + 0x98);
  uVar8 = 1;
  __oact = (sigaction *)(savsig + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  intr_signal = 0;
  puVar6 = local_20e0;
  for (lVar5 = 0x12; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_20e8 = (_union_1457)0x100000;
  do {
    if ((0x1600UL >> (uVar8 & 0x3f) & 1) == 0) {
      sigaction((int)uVar8,(sigaction *)&local_20e8,__oact);
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar7;
    __oact = __oact + 1;
  } while (uVar7 != 0x20);
  signal(0x1c,(__sighandler_t)0x0);
  pFVar1 = tty_in;
  ps_1 = 1;
  if (param_3 == 0) {
    tty_new._0_8_ = tty_orig._0_8_;
    tty_new._32_8_ = tty_orig._32_8_;
    tty_new._40_4_ = tty_orig._40_4_;
    tty_new._8_8_ = tty_orig._8_8_ & 0xfffffff7ffffffff;
    tty_new._16_8_ = tty_orig._16_8_;
    tty_new._24_8_ = tty_orig._24_8_;
    tty_new._44_4_ = tty_orig._44_4_;
    tty_new._48_4_ = tty_orig._48_4_;
    tty_new._52_8_ = tty_orig._52_8_;
    if (is_a_tty == 0) goto LAB_00100329;
    iVar2 = fileno(tty_in);
    iVar2 = tcsetattr(iVar2,0,(termios *)tty_new);
    if (iVar2 != -1) goto LAB_00100329;
    uVar7 = -(uint)(intr_signal == 2);
LAB_00100460:
    fputc(10,tty_out);
    if (1 < ps_1) {
      tty_new._0_8_ = tty_orig._0_8_;
      tty_new._8_8_ = tty_orig._8_8_;
      tty_new._16_8_ = tty_orig._16_8_;
      tty_new._24_8_ = tty_orig._24_8_;
      tty_new._32_8_ = tty_orig._32_8_;
      tty_new._52_8_ = tty_orig._52_8_;
      tty_new._40_4_ = tty_orig._40_4_;
      tty_new._44_4_ = tty_orig._44_4_;
      tty_new._48_4_ = tty_orig._48_4_;
      if (is_a_tty != 0) {
        iVar2 = fileno(tty_in);
        iVar2 = tcsetattr(iVar2,0,(termios *)tty_new);
        if (iVar2 == -1) {
          uVar7 = 0;
        }
      }
      goto LAB_00100397;
    }
  }
  else {
LAB_00100329:
    ps_1 = 2;
    local_2048[0] = '\0';
    pcVar4 = fgets(local_2048,0x1fff,pFVar1);
    pFVar1 = tty_in;
    if (((pcVar4 == (char *)0x0) || (iVar2 = feof(tty_in), iVar2 != 0)) ||
       (iVar2 = ferror(pFVar1), iVar2 != 0)) {
LAB_0010036b:
      uVar7 = 0;
    }
    else {
      pcVar4 = strchr(local_2048,10);
      if (pcVar4 == (char *)0x0) {
        do {
          pcVar4 = fgets(local_204d,4,pFVar1);
          if (pcVar4 == (char *)0x0) goto LAB_0010036b;
          pcVar4 = strchr(local_204d,10);
        } while (pcVar4 == (char *)0x0);
      }
      else if (param_4 != 0) {
        *pcVar4 = '\0';
      }
      uVar7 = UI_set_result(param_1,param_2,local_2048);
      uVar7 = ~uVar7 >> 0x1f;
    }
    if (intr_signal == 2) {
      uVar7 = 0xffffffff;
    }
    if (param_3 == 0) goto LAB_00100460;
    if (1 < ps_1) goto LAB_00100397;
  }
  if (ps_1 != 1) {
LAB_00100488:
    OPENSSL_cleanse(local_2048,0x2000);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00100397:
  iVar2 = 1;
  do {
    uVar3 = iVar2 - 10;
    while ((uVar3 & 0xfffffffd) != 0) {
      sigaction(iVar2,__act,(sigaction *)0x0);
      if (iVar2 + 1 == 0x20) goto LAB_00100488;
      __act = __act + 1;
      uVar3 = iVar2 - 9;
      iVar2 = iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
    __act = __act + 1;
  } while( true );
}



undefined8 read_string(undefined8 param_1,UI_STRING *param_2)

{
  FILE *pFVar1;
  UI_string_types UVar2;
  int iVar3;
  uint uVar4;
  char *__s1;
  char *pcVar5;
  undefined8 uVar6;
  
  UVar2 = UI_get_string_type(param_2);
  pFVar1 = tty_out;
  if (UVar2 == UIT_VERIFY) {
    pcVar5 = UI_get0_output_string(param_2);
    __fprintf_chk(tty_out,2,"Verifying - %s",pcVar5);
    fflush(tty_out);
    uVar4 = UI_get_input_flags(param_2);
    uVar6 = read_string_inner(param_1,param_2,uVar4 & 1,1);
    if ((int)uVar6 < 1) {
      return uVar6;
    }
    pcVar5 = UI_get0_test_string(param_2);
    __s1 = UI_get0_result_string(param_2);
    iVar3 = strcmp(__s1,pcVar5);
    if (iVar3 != 0) {
      fwrite("Verify failure\n",1,0xf,tty_out);
      fflush(tty_out);
      return 0;
    }
  }
  else {
    if (UVar2 == UIT_BOOLEAN) {
      pcVar5 = UI_get0_output_string(param_2);
      fputs(pcVar5,pFVar1);
      pFVar1 = tty_out;
      pcVar5 = UI_get0_action_string(param_2);
      fputs(pcVar5,pFVar1);
      fflush(tty_out);
      uVar4 = UI_get_input_flags(param_2);
      uVar6 = read_string_inner(param_1,param_2,uVar4 & 1,0);
      return uVar6;
    }
    if (UVar2 == UIT_PROMPT) {
      pcVar5 = UI_get0_output_string(param_2);
      fputs(pcVar5,pFVar1);
      fflush(tty_out);
      uVar4 = UI_get_input_flags(param_2);
      uVar6 = read_string_inner(param_1,param_2,uVar4 & 1,1);
      return uVar6;
    }
  }
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

UI_METHOD * UI_OpenSSL(void)

{
  return (UI_METHOD *)ui_openssl;
}



void UI_set_default_method(UI_METHOD *meth)

{
  default_UI_meth = meth;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

UI_METHOD * UI_get_default_method(void)

{
  return (UI_METHOD *)default_UI_meth;
}


