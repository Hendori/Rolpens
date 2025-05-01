
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int dtoastr(char *buf,size_t bufsize,int flags,int width,double x)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  long in_FS_OFFSET;
  double dVar6;
  char format [11];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  format[0] = '%';
  format[1] = '-';
  pcVar4 = format + (ulong)(flags & 1) + 1;
  *pcVar4 = '+';
  pcVar4[(uint)flags >> 1 & 1] = ' ';
  pcVar4 = pcVar4 + ((uint)flags >> 1 & 1) + ((uint)flags >> 2 & 1);
  *pcVar4 = '0';
  uVar3 = (ulong)((uint)flags >> 3 & 1);
  (pcVar4 + uVar3)[0] = '*';
  (pcVar4 + uVar3)[1] = '.';
  pcVar4[uVar3 + 2] = '*';
  pcVar4[uVar3 + 4] = '\0';
  pcVar4[uVar3 + 3] = (-((flags & 0x10U) == 0) & 0x20U) + 0x47;
  iVar5 = 1;
  if (_LC4 <= (double)(((ulong)x ^ __LC1) & -(ulong)(x < 0.0) | ~-(ulong)(x < 0.0) & (ulong)x)) {
    iVar5 = 0xf;
  }
  while (((iVar2 = __snprintf_chk(x,buf,bufsize,2,0xffffffffffffffff,format,width,iVar5), -1 < iVar2
          && (iVar5 < 0x11)) &&
         ((bufsize <= (ulong)(long)iVar2 || (dVar6 = strtod(buf,(char **)0x0), dVar6 != x))))) {
    iVar5 = iVar5 + 1;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


