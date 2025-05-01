
/* WARNING: Unknown calling convention */

int chmod_or_fchmod(char *name,int desc,mode_t mode)

{
  int iVar1;
  
  if (desc != -1) {
    iVar1 = fchmod(desc,mode);
    return iVar1;
  }
  iVar1 = chmod(name,mode);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int set_permissions(permission_context *ctx,char *name,int desc)

{
  int iVar1;
  
  if (desc != -1) {
    iVar1 = fchmod(desc,ctx->mode);
    return -(uint)(iVar1 != 0);
  }
  iVar1 = chmod(name,ctx->mode);
  return -(uint)(iVar1 != 0);
}


