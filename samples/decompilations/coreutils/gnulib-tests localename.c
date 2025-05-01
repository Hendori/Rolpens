
/* WARNING: Unknown calling convention */

char * struniq(char *string)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  struniq_hash_node *psVar5;
  ulong uVar6;
  long lVar7;
  struniq_hash_node *psVar8;
  
  cVar1 = *string;
  if (cVar1 == '\0') {
    lVar7 = 0;
  }
  else {
    uVar6 = 0;
    pcVar3 = string;
    do {
      pcVar3 = pcVar3 + 1;
      uVar6 = (uVar6 << 9 | uVar6 >> 0x37) + (long)cVar1;
      cVar1 = *pcVar3;
    } while (cVar1 != '\0');
    lVar7 = uVar6 - ((uVar6 / 0x101) * 0x100 + uVar6 / 0x101);
  }
  for (psVar5 = struniq_hash_table[lVar7]; psVar5 != (struniq_hash_node *)0x0; psVar5 = psVar5->next
      ) {
    iVar2 = strcmp((char *)(psVar5 + 1),string);
    if (iVar2 == 0) {
      return (char *)(psVar5 + 1);
    }
  }
  sVar4 = strlen(string);
  uVar6 = sVar4 + 0x10 & 0xfffffffffffffff8;
  psVar5 = (struniq_hash_node *)malloc(uVar6);
  if (psVar5 == (struniq_hash_node *)0x0) {
    return "C";
  }
  __memcpy_chk(psVar5 + 1,string,sVar4 + 1,uVar6 - 8);
  cVar1 = __libc_single_threaded;
  if (__libc_single_threaded == '\0') {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&struniq_lock);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    psVar8 = struniq_hash_table[lVar7];
    if (psVar8 != (struniq_hash_node *)0x0) goto LAB_00100108;
    psVar5->next = struniq_hash_table[lVar7];
    struniq_hash_table[lVar7] = psVar5;
  }
  else {
    psVar8 = struniq_hash_table[lVar7];
    if (psVar8 == (struniq_hash_node *)0x0) {
      psVar5->next = struniq_hash_table[lVar7];
      struniq_hash_table[lVar7] = psVar5;
      goto LAB_00100125;
    }
LAB_00100108:
    do {
      iVar2 = strcmp((char *)(psVar8 + 1),string);
      if (iVar2 == 0) {
        free(psVar5);
        psVar5 = psVar8;
        if (cVar1 == '\0') goto LAB_0010014b;
        goto LAB_00100125;
      }
      psVar8 = psVar8->next;
    } while (psVar8 != (struniq_hash_node *)0x0);
    psVar5->next = struniq_hash_table[lVar7];
    struniq_hash_table[lVar7] = psVar5;
    if (cVar1 != '\0') goto LAB_00100125;
  }
LAB_0010014b:
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&struniq_lock);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    struniq_cold();
  }
LAB_00100125:
  return (char *)(psVar5 + 1);
}



/* WARNING: Unknown calling convention */

char * gl_locale_name_thread(int category,char *categoryname)

{
  char *pcVar1;
  
  if (category == 6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar1 = (char *)gl_locale_name_thread_unsafe();
  if (pcVar1 != (char *)0x0) {
    pcVar1 = struniq(pcVar1);
    return pcVar1;
  }
  return (char *)0x0;
}



/* WARNING: Unknown calling convention */

char * gl_locale_name_posix(int category,char *categoryname)

{
  char *pcVar1;
  
  if (category == 6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar1 = (char *)gl_locale_name_posix_unsafe();
  if (pcVar1 != (char *)0x0) {
    pcVar1 = struniq(pcVar1);
    return pcVar1;
  }
  return (char *)0x0;
}



/* WARNING: Unknown calling convention */

char * gl_locale_name(int category,char *categoryname)

{
  char *pcVar1;
  
  if (category == 6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar1 = (char *)gl_locale_name_thread_unsafe();
  if ((pcVar1 != (char *)0x0) && (pcVar1 = struniq(pcVar1), pcVar1 != (char *)0x0)) {
    return pcVar1;
  }
  pcVar1 = (char *)gl_locale_name_posix_unsafe(category,categoryname);
  if ((pcVar1 != (char *)0x0) && (pcVar1 = struniq(pcVar1), pcVar1 != (char *)0x0)) {
    return pcVar1;
  }
  pcVar1 = (char *)gl_locale_name_default();
  return pcVar1;
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


