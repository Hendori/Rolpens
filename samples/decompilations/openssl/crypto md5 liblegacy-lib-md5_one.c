
uchar * MD5(uchar *d,size_t n,uchar *md)

{
  int iVar1;
  undefined1 *md_00;
  long in_FS_OFFSET;
  MD5_CTX MStack_98;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  md_00 = m_0;
  if (md != (uchar *)0x0) {
    md_00 = md;
  }
  iVar1 = MD5_Init(&MStack_98);
  if (iVar1 == 0) {
    md_00 = (uchar *)0x0;
  }
  else {
    MD5_Update(&MStack_98,d,n);
    MD5_Final(md_00,&MStack_98);
    OPENSSL_cleanse(&MStack_98,0x5c);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return md_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


