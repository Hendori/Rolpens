
int DES_random_key(DES_cblock *ret)

{
  int iVar1;
  
  do {
    iVar1 = RAND_priv_bytes(ret,8);
    if (iVar1 != 1) {
      return 0;
    }
    iVar1 = DES_is_weak_key(ret);
  } while (iVar1 != 0);
  DES_set_odd_parity(ret);
  return 1;
}


