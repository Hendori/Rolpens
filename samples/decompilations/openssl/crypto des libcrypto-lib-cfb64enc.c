
void DES_cfb64_encrypt(uchar *in,uchar *out,long length,DES_key_schedule *schedule,DES_cblock *ivec,
                      int *num,int enc)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  DES_cblock local_48;
  long local_40;
  
  uVar4 = *num;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (enc == 0) {
    pbVar5 = in;
    if (length != 0) {
      do {
        if (uVar4 == 0) {
          local_48 = *ivec;
          DES_encrypt1((uint *)local_48,schedule,1);
          *ivec = local_48;
        }
        bVar3 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        bVar1 = (*ivec)[(int)uVar4];
        (*ivec)[(int)uVar4] = bVar3;
        uVar4 = uVar4 + 1 & 7;
        *out = bVar3 ^ bVar1;
        out = out + 1;
      } while (in + (length - (long)pbVar5) != (uchar *)0x0);
    }
  }
  else if (length != 0) {
    pbVar5 = in;
    do {
      if (uVar4 == 0) {
        local_48 = *ivec;
        DES_encrypt1((uint *)local_48,schedule,1);
        *ivec = local_48;
      }
      lVar2 = (long)(int)uVar4;
      bVar3 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar3 = bVar3 ^ (*ivec)[lVar2];
      uVar4 = uVar4 + 1 & 7;
      *out = bVar3;
      (*ivec)[lVar2] = bVar3;
      out = out + 1;
    } while (in + (length - (long)pbVar5) != (uchar *)0x0);
  }
  *num = uVar4;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


