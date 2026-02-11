
int X509_policy_tree_level_count(X509_POLICY_TREE *tree)

{
  if (tree != (X509_POLICY_TREE *)0x0) {
    return *(int *)(tree + 0x18);
  }
  return 0;
}



X509_POLICY_LEVEL * X509_policy_tree_get0_level(X509_POLICY_TREE *tree,int i)

{
  if (((tree != (X509_POLICY_TREE *)0x0) && (-1 < i)) && (i < *(int *)(tree + 0x18))) {
    return (X509_POLICY_LEVEL *)((long)i * 0x20 + *(long *)(tree + 0x10));
  }
  return (X509_POLICY_LEVEL *)0x0;
}



stack_st_X509_POLICY_NODE * X509_policy_tree_get0_policies(X509_POLICY_TREE *tree)

{
  if (tree != (X509_POLICY_TREE *)0x0) {
    return *(stack_st_X509_POLICY_NODE **)(tree + 0x28);
  }
  return (stack_st_X509_POLICY_NODE *)0x0;
}



stack_st_X509_POLICY_NODE * X509_policy_tree_get0_user_policies(X509_POLICY_TREE *tree)

{
  if (tree == (X509_POLICY_TREE *)0x0) {
    return (stack_st_X509_POLICY_NODE *)0x0;
  }
  if (((byte)tree[0x38] & 2) != 0) {
    return *(stack_st_X509_POLICY_NODE **)(tree + 0x28);
  }
  return *(stack_st_X509_POLICY_NODE **)(tree + 0x30);
}



int X509_policy_level_node_count(X509_POLICY_LEVEL *level)

{
  int iVar1;
  uint uVar2;
  
  if (level != (X509_POLICY_LEVEL *)0x0) {
    uVar2 = (uint)(*(long *)(level + 0x10) != 0);
    if (*(long *)(level + 8) != 0) {
      iVar1 = OPENSSL_sk_num();
      uVar2 = uVar2 + iVar1;
    }
    return uVar2;
  }
  return 0;
}



X509_POLICY_NODE * X509_policy_level_get0_node(X509_POLICY_LEVEL *level,int i)

{
  X509_POLICY_NODE *pXVar1;
  undefined4 in_register_00000034;
  ulong uVar2;
  
  uVar2 = CONCAT44(in_register_00000034,i);
  if (level == (X509_POLICY_LEVEL *)0x0) {
    return (X509_POLICY_NODE *)0x0;
  }
  if (*(X509_POLICY_NODE **)(level + 0x10) != (X509_POLICY_NODE *)0x0) {
    if (i == 0) {
      return *(X509_POLICY_NODE **)(level + 0x10);
    }
    uVar2 = (ulong)(i - 1);
  }
  pXVar1 = (X509_POLICY_NODE *)OPENSSL_sk_value(*(undefined8 *)(level + 8),uVar2);
  return pXVar1;
}



ASN1_OBJECT * X509_policy_node_get0_policy(X509_POLICY_NODE *node)

{
  if (node != (X509_POLICY_NODE *)0x0) {
    return *(ASN1_OBJECT **)(*(long *)node + 8);
  }
  return (ASN1_OBJECT *)0x0;
}



stack_st_POLICYQUALINFO * X509_policy_node_get0_qualifiers(X509_POLICY_NODE *node)

{
  if (node != (X509_POLICY_NODE *)0x0) {
    return *(stack_st_POLICYQUALINFO **)(*(long *)node + 0x10);
  }
  return (stack_st_POLICYQUALINFO *)0x0;
}



X509_POLICY_NODE * X509_policy_node_get0_parent(X509_POLICY_NODE *node)

{
  if (node != (X509_POLICY_NODE *)0x0) {
    return *(X509_POLICY_NODE **)(node + 8);
  }
  return (X509_POLICY_NODE *)0x0;
}


