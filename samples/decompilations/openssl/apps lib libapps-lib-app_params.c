
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 print_param_types(undefined8 param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  size_t n;
  char *pcVar3;
  char *buf;
  long in_FS_OFFSET;
  char *local_120;
  char local_108 [200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (long *)0x0) {
    if (*param_2 == 0) {
      BIO_printf(_bio_out,"%*sEmpty list of %s (!!!)\n",param_3,&_LC1,param_1);
    }
    else {
      BIO_printf(_bio_out,"%*s%s:\n",param_3,&_LC1,param_1);
      if (*param_2 != 0) {
        do {
          switch((int)param_2[1]) {
          default:
            bVar1 = true;
            pcVar3 = "unknown type";
            local_120 = "";
            break;
          case 1:
            bVar1 = false;
            pcVar3 = "integer";
            local_120 = "";
            break;
          case 2:
            bVar1 = false;
            pcVar3 = "integer";
            local_120 = "unsigned ";
            break;
          case 4:
            bVar1 = false;
            pcVar3 = "UTF8 encoded string";
            local_120 = "";
            break;
          case 5:
            bVar1 = false;
            pcVar3 = "octet string";
            local_120 = "";
            break;
          case 6:
            bVar1 = false;
            pcVar3 = "UTF8 encoded string";
            local_120 = "pointer to a ";
            break;
          case 7:
            bVar1 = false;
            pcVar3 = "octet string";
            local_120 = "pointer to an ";
          }
          iVar2 = BIO_snprintf(local_108,200,"%s: ");
          if (iVar2 < 1) {
            n = 200;
            buf = local_108;
          }
          else {
            n = 200 - (long)iVar2;
            buf = local_108 + iVar2;
          }
          iVar2 = BIO_snprintf(buf,n,"%s%s",local_120,pcVar3);
          if (0 < iVar2) {
            buf = buf + iVar2;
            n = n - (long)iVar2;
          }
          if ((bVar1) &&
             (iVar2 = BIO_snprintf(buf,n," [%d]",(ulong)*(uint *)(param_2 + 1)), 0 < iVar2)) {
            buf = buf + iVar2;
            n = n - (long)iVar2;
          }
          if (param_2[3] == 0) {
            iVar2 = BIO_snprintf(buf,n," (arbitrary size)");
            if (iVar2 < 1) goto LAB_00100299;
LAB_00100152:
            buf[iVar2] = '\0';
          }
          else {
            iVar2 = BIO_snprintf(buf,n," (max %zu bytes large)");
            if (0 < iVar2) goto LAB_00100152;
LAB_00100299:
            *buf = '\0';
          }
          param_2 = param_2 + 5;
          BIO_printf(_bio_out,"%*s  %s\n",param_3 & 0xffffffff,&_LC1,local_108);
        } while (*param_2 != 0);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_param_value(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __printf_chk(2,"%*s%s: ",param_2,&_LC1,*param_1);
  switch(*(uint *)(param_1 + 1)) {
  default:
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      BIO_printf(_bio_out,"unknown type (%u) of %zu bytes\n",(ulong)*(uint *)(param_1 + 1),
                 param_1[3]);
      return;
    }
    break;
  case 1:
    iVar1 = OSSL_PARAM_get_int64(param_1,&local_18);
    if (iVar1 == 0) {
LAB_001004b8:
      BIO_printf(_bio_out,"error getting value\n");
    }
    else {
      BIO_printf(_bio_out,"%lld\n",local_18);
    }
    goto LAB_0010040f;
  case 2:
    iVar1 = OSSL_PARAM_get_uint64(param_1,&local_18);
    if (iVar1 == 0) goto LAB_001004b8;
    BIO_printf(_bio_out,"%llu\n",local_18);
LAB_0010040f:
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    break;
  case 4:
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar2 = param_1[2];
LAB_001003c3:
      BIO_printf(_bio_out,"\'%s\'\n",uVar2);
      return;
    }
    break;
  case 5:
  case 7:
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      BIO_printf(_bio_out,"<%zu bytes>\n",param_1[3]);
      return;
    }
    break;
  case 6:
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar2 = *(undefined8 *)param_1[2];
      goto LAB_001003c3;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


