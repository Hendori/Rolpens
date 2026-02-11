
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BIO_dump_indent_cb(cb *cb,void *u,char *s,int len,int indent)

{
  byte *buf;
  int iVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  byte *pbVar17;
  long in_FS_OFFSET;
  int local_198;
  uint local_180;
  int local_170;
  byte local_168 [296];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = 0x40;
  if (indent < 0x41) {
    uVar14 = indent;
  }
  if ((int)uVar14 < 0) {
    uVar14 = 0;
  }
  uVar9 = 6;
  if ((int)uVar14 < 7) {
    uVar9 = uVar14;
  }
  iVar1 = (uVar14 - uVar9) + 3;
  iVar5 = (uVar14 - uVar9) + 6;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  iVar1 = -(iVar5 >> 2);
  iVar5 = iVar1 + 0x10;
  iVar15 = len / iVar5 + (uint)(iVar5 * (len / iVar5) < len);
  if (iVar15 < 1) {
    iVar13 = 0;
  }
  else {
    local_180 = len - 1;
    uVar9 = 0;
    local_198 = 0;
    local_170 = 0;
    do {
      uVar2 = BIO_snprintf((char *)local_168,0x121,"%*s%04x - ",(ulong)uVar14,&_LC0,(ulong)uVar9);
      if (iVar5 == 0) {
        uVar10 = (ulong)(int)uVar2;
        uVar6 = 0x121 - uVar10;
        if (2 < uVar6) {
          uVar6 = 0x121;
          if (0x120 < uVar10) {
            uVar6 = uVar10;
          }
          uVar2 = uVar2 + 2;
          __memcpy_chk(local_168 + uVar10,&_LC6,3,uVar6 - uVar10);
          uVar10 = (ulong)(int)uVar2;
          uVar6 = 0x121 - uVar10;
        }
      }
      else {
        iVar13 = 0;
        pbVar17 = (byte *)s;
        while( true ) {
          uVar16 = (ulong)uVar2;
          uVar3 = (ulong)(int)uVar2;
          uVar6 = 0x121 - uVar3;
          if (uVar6 < 4) break;
          buf = local_168 + uVar3;
          if ((int)(iVar13 + uVar9) < len) {
            uVar12 = 0x2d;
            if (iVar13 != 7) {
              uVar12 = 0x20;
            }
            BIO_snprintf((char *)buf,4,"%02x%c",(ulong)*pbVar17,uVar12);
          }
          else {
            uVar10 = 0x121;
            if (0x120 < uVar3) {
              uVar10 = uVar3;
            }
            __memcpy_chk(buf,&_LC2,4,uVar10 - uVar3);
          }
          if (iVar5 == iVar13 + 1) {
            uVar2 = uVar2 + 3;
            uVar3 = (ulong)(int)uVar2;
            uVar6 = 0x121 - uVar3;
            uVar10 = uVar3;
            uVar16 = uVar3;
            goto joined_r0x001001b8;
          }
          uVar2 = uVar2 + 3;
          iVar13 = iVar13 + 1;
          pbVar17 = pbVar17 + 1;
        }
        iVar13 = iVar13 + 1;
        uVar10 = uVar3;
        if (iVar5 != iVar13) {
          if ((2 < (iVar1 - iVar13) + 0xfU) && (iVar13 <= iVar1 + 0xf)) {
            uVar7 = (iVar1 - iVar13) + 0x10;
            if (iVar1 + 0xf < iVar13) {
              uVar7 = 1;
            }
            if ((uVar7 & 3) == 0) {
              uVar10 = CONCAT44(-(uint)((int)uVar2 < 0),uVar2);
              uVar6 = _UNK_00100728 - CONCAT44(-(uint)((int)uVar2 < 0),uVar2);
            }
          }
        }
joined_r0x001001b8:
        if (uVar6 < 3) {
          uVar2 = (uint)uVar16;
        }
        else {
          uVar6 = 0x121;
          if (0x120 < uVar10) {
            uVar6 = uVar10;
          }
          uVar2 = uVar2 + 2;
          uVar16 = (ulong)uVar2;
          __memcpy_chk(local_168 + uVar10,&_LC6,3,uVar6 - uVar10);
          uVar3 = (ulong)(int)uVar2;
          uVar6 = 0x121 - uVar3;
          uVar10 = uVar3;
        }
        if ((int)uVar9 < len) {
          lVar8 = 1;
          while( true ) {
            uVar11 = 0x121 - uVar3;
            uVar6 = uVar11;
            uVar10 = uVar3;
            if (1 < uVar11) {
              bVar4 = ((byte *)s)[lVar8 + -1];
              if (0x5e < (byte)(bVar4 - 0x20)) {
                bVar4 = 0x2e;
              }
              uVar2 = (int)uVar16 + 1;
              uVar16 = (ulong)uVar2;
              uVar10 = (ulong)(int)uVar2;
              local_168[uVar3] = bVar4;
              local_168[uVar10] = 0;
              uVar6 = 0x121 - uVar10;
            }
            uVar2 = (uint)uVar16;
            if ((iVar5 <= (int)lVar8) || ((ulong)local_180 + 1 == lVar8)) goto LAB_00100338;
            lVar8 = lVar8 + 1;
            if (uVar11 < 2) break;
            uVar3 = (ulong)(int)uVar2;
          }
          uVar10 = (ulong)(int)uVar2;
          uVar6 = 0x121 - uVar10;
        }
      }
LAB_00100338:
      if (1 < uVar6) {
        uVar10 = (ulong)(int)(uVar2 + 1);
        *(undefined2 *)(local_168 + (int)uVar2) = _LC5;
      }
      iVar13 = (*cb)(local_168,uVar10,u);
      if (iVar13 < 0) break;
      iVar13 = local_170 + iVar13;
      uVar9 = uVar9 + iVar5;
      local_198 = local_198 + 1;
      local_180 = local_180 - iVar5;
      s = (char *)((byte *)s + iVar5);
      local_170 = iVar13;
    } while (iVar15 != local_198);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar13;
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
          if (param_5 - 1 == uVar2) goto LAB_0010068b;
        }
        uVar2 = uVar2 + 1;
      } while (param_5 - 1 != uVar2);
LAB_0010068b:
      if (iVar1 == 0) {
        BIO_printf(param_1,"%*s",(ulong)param_2,&_LC0);
      }
    }
    BIO_printf(param_1,"%02X",(ulong)*(byte *)(param_4 + -1 + (long)param_5));
  }
  return 1;
}


