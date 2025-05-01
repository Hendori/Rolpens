
/* WARNING: Unknown calling convention */

_Bool psame_inode(stat *a,stat *b)

{
  return a->st_dev == b->st_dev && a->st_ino == b->st_ino;
}


