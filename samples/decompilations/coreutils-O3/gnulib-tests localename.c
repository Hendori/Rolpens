
long * struniq(char *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  long *__ptr;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    lVar7 = 0;
  }
  else {
    uVar6 = 0;
    pcVar4 = param_1;
    do {
      pcVar4 = pcVar4 + 1;
      uVar6 = (uVar6 << 9 | uVar6 >> 0x37) + (long)cVar1;
      cVar1 = *pcVar4;
    } while (cVar1 != '\0');
    lVar7 = uVar6 - ((uVar6 / 0x101) * 0x100 + uVar6 / 0x101);
  }
  for (puVar2 = (undefined8 *)(&struniq_hash_table)[lVar7]; puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    iVar3 = strcmp((char *)(puVar2 + 1),param_1);
    if (iVar3 == 0) {
      return puVar2 + 1;
    }
  }
  sVar5 = strlen(param_1);
  uVar6 = sVar5 + 0x10 & 0xfffffffffffffff8;
  __ptr = (long *)malloc(uVar6);
  if (__ptr == (long *)0x0) {
    return (long *)&_LC0;
  }
  __memcpy_chk(__ptr + 1,param_1,sVar5 + 1,uVar6 - 8);
  cVar1 = __libc_single_threaded;
  if (__libc_single_threaded == '\0') {
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)struniq_lock);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar8 = (long *)(&struniq_hash_table)[lVar7];
    if (plVar8 != (long *)0x0) goto LAB_00100108;
    *__ptr = (&struniq_hash_table)[lVar7];
    (&struniq_hash_table)[lVar7] = __ptr;
  }
  else {
    plVar8 = (long *)(&struniq_hash_table)[lVar7];
    if (plVar8 == (long *)0x0) {
      *__ptr = (&struniq_hash_table)[lVar7];
      (&struniq_hash_table)[lVar7] = __ptr;
      goto LAB_00100125;
    }
LAB_00100108:
    do {
      iVar3 = strcmp((char *)(plVar8 + 1),param_1);
      if (iVar3 == 0) {
        free(__ptr);
        __ptr = plVar8;
        if (cVar1 == '\0') goto LAB_0010014b;
        goto LAB_00100125;
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
    *__ptr = (&struniq_hash_table)[lVar7];
    (&struniq_hash_table)[lVar7] = __ptr;
    if (cVar1 != '\0') goto LAB_00100125;
  }
LAB_0010014b:
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)struniq_lock);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    struniq_cold();
  }
LAB_00100125:
  return __ptr + 1;
}



undefined8 gl_locale_name_thread(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = gl_locale_name_thread_unsafe();
  if (lVar1 != 0) {
    uVar2 = struniq(lVar1);
    return uVar2;
  }
  return 0;
}



undefined8 gl_locale_name_posix(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = gl_locale_name_posix_unsafe();
  if (lVar1 != 0) {
    uVar2 = struniq(lVar1);
    return uVar2;
  }
  return 0;
}



void gl_locale_name(int param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 == 6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = gl_locale_name_thread_unsafe();
  if ((lVar1 != 0) && (lVar1 = struniq(lVar1), lVar1 != 0)) {
    return;
  }
  lVar1 = gl_locale_name_posix_unsafe(param_1,param_2);
  if ((lVar1 != 0) && (lVar1 = struniq(lVar1), lVar1 != 0)) {
    return;
  }
  gl_locale_name_default();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void struniq_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void gl_locale_name_thread_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void gl_locale_name_posix_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void gl_locale_name_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


