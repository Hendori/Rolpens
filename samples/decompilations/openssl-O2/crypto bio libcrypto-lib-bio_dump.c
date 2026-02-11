
void write_fp(void *param_1,size_t param_2,FILE *param_3)

{
  fwrite(param_1,param_2,1,param_3);
  return;
}



void write_bio(void *param_1,int param_2,BIO *param_3)

{
  BIO_write(param_3,param_1,param_2);
  return;
}



int BIO_dump_indent_cb(cb *cb,void *u,char *s,int len,int indent)

{
  char *buf;
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  uint local_1a8;
  int local_198;
  uint local_194;
  int local_170;
  char local_168 [296];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0x40;
  if (indent < 0x41) {
    uVar1 = indent;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  uVar7 = 6;
  if ((int)uVar1 < 7) {
    uVar7 = uVar1;
  }
  iVar2 = (uVar1 - uVar7) + 3;
  iVar8 = (uVar1 - uVar7) + 6;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  uVar7 = 0x10 - (iVar8 >> 2);
  iVar8 = len / (int)uVar7 + (uint)((int)(uVar7 * (len / (int)uVar7)) < len);
  if (iVar8 < 1) {
    iVar2 = 0;
  }
  else {
    local_1a8 = 0;
    local_198 = 0;
    local_170 = 0;
    local_194 = len;
    do {
      iVar2 = BIO_snprintf(local_168,0x121,"%*s%04x - ",(ulong)uVar1,&_LC0,(ulong)local_1a8);
      if (uVar7 == 0) {
        uVar10 = (ulong)iVar2;
        uVar6 = 0x121 - uVar10;
        if (2 < uVar6) {
          uVar6 = 0x121;
          if (0x120 < uVar10) {
            uVar6 = uVar10;
          }
          iVar2 = iVar2 + 2;
          __memcpy_chk(local_168 + uVar10,&_LC5,3,uVar6 - uVar10);
          uVar10 = (ulong)iVar2;
          uVar6 = 0x121 - uVar10;
        }
      }
      else {
        uVar10 = 0;
        uVar3 = (ulong)iVar2;
        do {
          uVar6 = 0x121 - uVar3;
          if (3 < uVar6) {
            buf = local_168 + uVar3;
            if ((int)(local_1a8 + (int)uVar10) < len) {
              uVar9 = 0x2d;
              if (uVar10 != 7) {
                uVar9 = 0x20;
              }
              BIO_snprintf(buf,4,"%02x%c",(ulong)(byte)s[uVar10],uVar9);
            }
            else {
              uVar6 = 0x121;
              if (0x120 < uVar3) {
                uVar6 = uVar3;
              }
              __memcpy_chk(buf,&_LC2,4,uVar6 - uVar3);
            }
            iVar2 = iVar2 + 3;
            uVar3 = (ulong)iVar2;
            uVar6 = 0x121 - uVar3;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar7);
        if (2 < uVar6) {
          uVar10 = 0x121;
          if (0x120 < uVar3) {
            uVar10 = uVar3;
          }
          iVar2 = iVar2 + 2;
          __memcpy_chk(local_168 + uVar3,&_LC5,3,uVar10 - uVar3);
          uVar3 = (ulong)iVar2;
          uVar6 = 0x121 - uVar3;
        }
        uVar10 = uVar3;
        if ((int)local_1a8 < len) {
          uVar4 = 1;
          while( true ) {
            uVar6 = 0x121 - uVar3;
            uVar10 = uVar3;
            if (1 < uVar6) {
              cVar5 = s[uVar4 - 1];
              if (0x5e < (byte)(s[uVar4 - 1] - 0x20U)) {
                cVar5 = '.';
              }
              iVar2 = iVar2 + 1;
              uVar10 = (ulong)iVar2;
              local_168[uVar3] = cVar5;
              local_168[uVar10] = '\0';
              uVar6 = 0x121 - uVar10;
            }
            if (((int)uVar7 <= (int)uVar4) || (uVar4 == local_194)) break;
            uVar3 = (ulong)iVar2;
            uVar4 = uVar4 + 1;
          }
        }
      }
      if (1 < uVar6) {
        uVar10 = (ulong)(iVar2 + 1);
        *(undefined2 *)(local_168 + iVar2) = _LC4;
      }
      iVar2 = (*cb)(local_168,uVar10,u);
      if (iVar2 < 0) break;
      iVar2 = local_170 + iVar2;
      local_198 = local_198 + 1;
      local_1a8 = local_1a8 + uVar7;
      s = s + (int)uVar7;
      local_194 = local_194 - uVar7;
      local_170 = iVar2;
    } while (iVar8 != local_198);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int BIO_dump_cb(cb *cb,void *u,char *s,int len)

{
  int iVar1;
  
  iVar1 = BIO_dump_indent_cb(cb,u,s,len,0);
  return iVar1;
}



int BIO_dump_fp(FILE *fp,char *s,int len)

{
  int iVar1;
  
  iVar1 = BIO_dump_cb(write_fp,fp,s,len);
  return iVar1;
}



int BIO_dump_indent_fp(FILE *fp,char *s,int len,int indent)

{
  int iVar1;
  
  iVar1 = BIO_dump_indent_cb(write_fp,fp,s,len,indent);
  return iVar1;
}



int BIO_dump(BIO *b,char *bytes,int len)

{
  int iVar1;
  
  iVar1 = BIO_dump_cb(write_bio,b,bytes,len);
  return iVar1;
}



int BIO_dump_indent(BIO *b,char *bytes,int len,int indent)

{
  int iVar1;
  
  iVar1 = BIO_dump_indent_cb(write_bio,b,bytes,len,indent);
  return iVar1;
}



undefined8 BIO_hex_string(BIO *param_1,uint param_2,int param_3,long param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < param_5) {
    if (param_5 != 1) {
      uVar2 = 0;
      iVar1 = 0;
      do {
        while( true ) {
          if (((int)uVar2 != 0) && (iVar1 == 0)) {
            BIO_printf(param_1,"%*s",(ulong)param_2,&_LC0);
          }
          iVar1 = iVar1 + 1;
          BIO_printf(param_1,"%02X:",(ulong)*(byte *)(param_4 + uVar2));
          if (iVar1 < param_3) break;
          uVar2 = uVar2 + 1;
          BIO_printf(param_1,"\n");
          iVar1 = 0;
          if (uVar2 == param_5 - 1) goto LAB_001004eb;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != param_5 - 1);
LAB_001004eb:
      if (iVar1 == 0) {
        BIO_printf(param_1,"%*s",(ulong)param_2,&_LC0);
      }
    }
    BIO_printf(param_1,"%02X",(ulong)*(byte *)(param_4 + -1 + (long)param_5));
  }
  return 1;
}


