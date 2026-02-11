
undefined * OSSL_trace_get_category_name(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0x15) {
    puVar1 = (&trace_categories)[(long)(int)param_1 * 2];
    if (puVar1 != (undefined *)0x0) {
      if ((&DAT_00100368)[(long)(int)param_1 * 4] != param_1) {
        puVar1 = (undefined *)0x0;
      }
      return puVar1;
    }
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



undefined4 OSSL_trace_get_category_num(long param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  ppuVar3 = &trace_categories;
  lVar2 = 0;
  do {
    iVar1 = OPENSSL_strcasecmp(param_1,*ppuVar3);
    if (iVar1 == 0) {
      return (&DAT_00100368)[lVar2 * 4];
    }
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 2;
  } while (lVar2 != 0x15);
  return 0xffffffff;
}



void ossl_trace_cleanup(void)

{
  return;
}



undefined8 OSSL_trace_set_channel(void)

{
  return 0;
}



undefined8 OSSL_trace_set_callback(void)

{
  return 0;
}



undefined8 OSSL_trace_set_prefix(void)

{
  return 0;
}



undefined8 OSSL_trace_set_suffix(void)

{
  return 0;
}



undefined8 OSSL_trace_enabled(void)

{
  return 0;
}



undefined8 OSSL_trace_begin(void)

{
  return 0;
}



void OSSL_trace_end(void)

{
  return;
}



void OSSL_trace_string(BIO *param_1,int param_2,int param_3,char *param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  char *local_a0;
  char local_98 [88];
  long local_40;
  
  uVar5 = (uint)param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == 0) && (0x50 < param_5)) {
    uVar5 = 0x50;
    BIO_printf(param_1,"[len %zu limited to %d]: ",param_5,0x50);
    if (param_2 != 0) goto LAB_001001f0;
LAB_00100188:
    pcVar6 = local_98;
    pcVar3 = param_4;
    do {
      cVar4 = *pcVar3;
      if (cVar4 != '\n') {
        iVar1 = ossl_ctype_check(cVar4,0x40);
        cVar4 = ' ';
        if (iVar1 == 0) {
          cVar4 = *pcVar3;
        }
      }
      pcVar3 = pcVar3 + 1;
      *pcVar6 = cVar4;
      pcVar6 = pcVar6 + 1;
    } while (pcVar3 != param_4 + (int)uVar5);
    param_4 = param_4 + uVar5;
LAB_001001d5:
    local_a0 = local_98;
    pcVar6 = param_4 + -1;
    param_4 = local_a0;
    if (*pcVar6 == '\n') goto LAB_001001f0;
  }
  else {
    if (param_2 != 0) goto LAB_001001f0;
    if (0 < (int)uVar5) goto LAB_00100188;
    if (uVar5 != 0) goto LAB_001001d5;
  }
  local_a0 = local_98;
  lVar2 = (long)(int)uVar5;
  uVar5 = uVar5 + 1;
  local_98[lVar2] = '\n';
  param_4 = local_a0;
LAB_001001f0:
  BIO_printf(param_1,"%.*s",(ulong)uVar5,param_4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


