
uchar * RIPEMD160(uchar *d,size_t n,uchar *md)

{
  int iVar1;
  undefined1 *md_00;
  long in_FS_OFFSET;
  RIPEMD160_CTX RStack_98;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  md_00 = m_0;
  if (md != (uchar *)0x0) {
    md_00 = md;
  }
  iVar1 = RIPEMD160_Init(&RStack_98);
  if (iVar1 == 0) {
    md_00 = (uchar *)0x0;
  }
  else {
    RIPEMD160_Update(&RStack_98,d,n);
    RIPEMD160_Final(md_00,&RStack_98);
    OPENSSL_cleanse(&RStack_98,0x60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return md_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


