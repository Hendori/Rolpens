
/* JPH::AABBTreeBuilder::Node::GetMaxDepth(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&) const [clone .part.0] [clone .isra.0] */

int JPH::AABBTreeBuilder::Node::GetMaxDepth(Array *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_RDX;
  uint in_ESI;
  
  uVar2 = 1;
  lVar1 = *(long *)(in_RDX + 0x10);
  lVar4 = ((ulong)param_1 & 0xffffffff) * 0x30 + lVar1;
  if (*(long *)(lVar4 + 0x28) != -1) {
    uVar2 = GetMaxDepth((Array *)(ulong)*(uint *)(lVar4 + 0x28));
  }
  lVar1 = lVar1 + (ulong)in_ESI * 0x30;
  uVar3 = 1;
  if (*(long *)(lVar1 + 0x28) != -1) {
    uVar3 = GetMaxDepth((Array *)(ulong)*(uint *)(lVar1 + 0x28));
  }
  if (uVar3 < uVar2) {
    uVar3 = uVar2;
  }
  return uVar3 + 1;
}



/* JPH::AABBTreeBuilder::Node::GetMinDepth(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&) const [clone .part.0] [clone .isra.0] */

int JPH::AABBTreeBuilder::Node::GetMinDepth(Array *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_RDX;
  uint in_ESI;
  
  uVar2 = 1;
  lVar1 = *(long *)(in_RDX + 0x10);
  lVar4 = ((ulong)param_1 & 0xffffffff) * 0x30 + lVar1;
  if (*(long *)(lVar4 + 0x28) != -1) {
    uVar2 = GetMinDepth((Array *)(ulong)*(uint *)(lVar4 + 0x28));
  }
  lVar1 = lVar1 + (ulong)in_ESI * 0x30;
  uVar3 = 1;
  if (*(long *)(lVar1 + 0x28) != -1) {
    uVar3 = GetMinDepth((Array *)(ulong)*(uint *)(lVar1 + 0x28));
  }
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  return uVar3 + 1;
}



/* JPH::AABBTreeBuilder::Node::GetMinDepth(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&) const */

undefined8 JPH::AABBTreeBuilder::Node::GetMinDepth(Array *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != -1) {
    uVar1 = GetMinDepth((Array *)(ulong)*(uint *)(param_1 + 0x28));
    return uVar1;
  }
  return 1;
}



/* JPH::AABBTreeBuilder::Node::GetMaxDepth(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&) const */

undefined8 JPH::AABBTreeBuilder::Node::GetMaxDepth(Array *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != -1) {
    uVar1 = GetMaxDepth((Array *)(ulong)*(uint *)(param_1 + 0x28));
    return uVar1;
  }
  return 1;
}



/* JPH::AABBTreeBuilder::Node::GetNodeCount(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&) const */

int __thiscall JPH::AABBTreeBuilder::Node::GetNodeCount(Node *this,Array *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  if (*(long *)(this + 0x28) == -1) {
    return 1;
  }
  iVar13 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  do {
    lVar20 = lVar1 + (ulong)*(uint *)(this + 0x28) * 0x30;
    iVar11 = 0;
    if (*(long *)(lVar20 + 0x28) != -1) {
      iVar11 = 0;
      do {
        lVar19 = lVar1 + (ulong)*(uint *)(lVar20 + 0x28) * 0x30;
        iVar10 = 0;
        if (*(long *)(lVar19 + 0x28) != -1) {
          iVar10 = 0;
          do {
            iVar9 = 0;
            lVar17 = (ulong)*(uint *)(lVar19 + 0x28) * 0x30 + lVar1;
            lVar12 = *(long *)(lVar17 + 0x28);
            while (lVar12 != -1) {
              iVar8 = 0;
              lVar18 = (ulong)*(uint *)(lVar17 + 0x28) * 0x30 + lVar1;
              lVar12 = *(long *)(lVar18 + 0x28);
              while (lVar12 != -1) {
                iVar16 = 0;
                lVar6 = (ulong)*(uint *)(lVar18 + 0x28) * 0x30 + lVar1;
                lVar12 = *(long *)(lVar6 + 0x28);
                while (lVar12 != -1) {
                  iVar15 = 0;
                  lVar4 = (ulong)*(uint *)(lVar6 + 0x28) * 0x30 + lVar1;
                  lVar12 = *(long *)(lVar4 + 0x28);
                  while (lVar12 != -1) {
                    iVar5 = 0;
                    lVar12 = (ulong)*(uint *)(lVar4 + 0x28) * 0x30 + lVar1;
                    if (*(long *)(lVar12 + 0x28) != -1) {
                      iVar5 = 0;
                      do {
                        iVar14 = 0;
                        lVar7 = (ulong)*(uint *)(lVar12 + 0x28) * 0x30 + lVar1;
                        lVar2 = *(long *)(lVar7 + 0x28);
                        while (lVar2 != -1) {
                          iVar3 = GetNodeCount((Node *)((ulong)*(uint *)(lVar7 + 0x28) * 0x30 +
                                                       lVar1),param_1);
                          iVar14 = iVar14 + 1 + iVar3;
                          lVar7 = (ulong)*(uint *)(lVar7 + 0x2c) * 0x30 + lVar1;
                          lVar2 = *(long *)(lVar7 + 0x28);
                        }
                        iVar5 = iVar5 + 2 + iVar14;
                        lVar12 = (ulong)*(uint *)(lVar12 + 0x2c) * 0x30 + lVar1;
                      } while (*(long *)(lVar12 + 0x28) != -1);
                    }
                    iVar15 = iVar15 + 2 + iVar5;
                    lVar4 = (ulong)*(uint *)(lVar4 + 0x2c) * 0x30 + lVar1;
                    lVar12 = *(long *)(lVar4 + 0x28);
                  }
                  iVar16 = iVar16 + 2 + iVar15;
                  lVar6 = (ulong)*(uint *)(lVar6 + 0x2c) * 0x30 + lVar1;
                  lVar12 = *(long *)(lVar6 + 0x28);
                }
                iVar8 = iVar8 + 2 + iVar16;
                lVar18 = (ulong)*(uint *)(lVar18 + 0x2c) * 0x30 + lVar1;
                lVar12 = *(long *)(lVar18 + 0x28);
              }
              iVar9 = iVar9 + 2 + iVar8;
              lVar17 = (ulong)*(uint *)(lVar17 + 0x2c) * 0x30 + lVar1;
              lVar12 = *(long *)(lVar17 + 0x28);
            }
            iVar10 = iVar10 + 2 + iVar9;
            lVar19 = (ulong)*(uint *)(lVar19 + 0x2c) * 0x30 + lVar1;
          } while (*(long *)(lVar19 + 0x28) != -1);
        }
        iVar11 = iVar11 + 2 + iVar10;
        lVar20 = (ulong)*(uint *)(lVar20 + 0x2c) * 0x30 + lVar1;
      } while (*(long *)(lVar20 + 0x28) != -1);
    }
    iVar13 = iVar13 + 2 + iVar11;
    this = (Node *)(lVar1 + (ulong)*(uint *)(this + 0x2c) * 0x30);
  } while (*(long *)(this + 0x28) != -1);
  return iVar13 + 1;
}



/* JPH::AABBTreeBuilder::Node::GetLeafNodeCount(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&) const */

int __thiscall JPH::AABBTreeBuilder::Node::GetLeafNodeCount(Node *this,Array *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  if (*(long *)(this + 0x28) == -1) {
    return 1;
  }
  iVar13 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  do {
    lVar20 = lVar1 + (ulong)*(uint *)(this + 0x28) * 0x30;
    iVar11 = 0;
    if (*(long *)(lVar20 + 0x28) != -1) {
      iVar11 = 0;
      do {
        lVar19 = lVar1 + (ulong)*(uint *)(lVar20 + 0x28) * 0x30;
        iVar10 = 0;
        if (*(long *)(lVar19 + 0x28) != -1) {
          iVar10 = 0;
          do {
            iVar9 = 0;
            lVar17 = (ulong)*(uint *)(lVar19 + 0x28) * 0x30 + lVar1;
            lVar12 = *(long *)(lVar17 + 0x28);
            while (lVar12 != -1) {
              iVar8 = 0;
              lVar18 = (ulong)*(uint *)(lVar17 + 0x28) * 0x30 + lVar1;
              lVar12 = *(long *)(lVar18 + 0x28);
              while (lVar12 != -1) {
                iVar16 = 0;
                lVar6 = (ulong)*(uint *)(lVar18 + 0x28) * 0x30 + lVar1;
                lVar12 = *(long *)(lVar6 + 0x28);
                while (lVar12 != -1) {
                  iVar15 = 0;
                  lVar4 = (ulong)*(uint *)(lVar6 + 0x28) * 0x30 + lVar1;
                  lVar12 = *(long *)(lVar4 + 0x28);
                  while (lVar12 != -1) {
                    iVar5 = 0;
                    lVar12 = (ulong)*(uint *)(lVar4 + 0x28) * 0x30 + lVar1;
                    if (*(long *)(lVar12 + 0x28) != -1) {
                      iVar5 = 0;
                      do {
                        iVar14 = 0;
                        lVar7 = (ulong)*(uint *)(lVar12 + 0x28) * 0x30 + lVar1;
                        lVar2 = *(long *)(lVar7 + 0x28);
                        while (lVar2 != -1) {
                          iVar3 = GetLeafNodeCount((Node *)((ulong)*(uint *)(lVar7 + 0x28) * 0x30 +
                                                           lVar1),param_1);
                          iVar14 = iVar14 + iVar3;
                          lVar7 = (ulong)*(uint *)(lVar7 + 0x2c) * 0x30 + lVar1;
                          lVar2 = *(long *)(lVar7 + 0x28);
                        }
                        iVar5 = iVar5 + 1 + iVar14;
                        lVar12 = (ulong)*(uint *)(lVar12 + 0x2c) * 0x30 + lVar1;
                      } while (*(long *)(lVar12 + 0x28) != -1);
                    }
                    iVar15 = iVar15 + 1 + iVar5;
                    lVar4 = (ulong)*(uint *)(lVar4 + 0x2c) * 0x30 + lVar1;
                    lVar12 = *(long *)(lVar4 + 0x28);
                  }
                  iVar16 = iVar16 + 1 + iVar15;
                  lVar6 = (ulong)*(uint *)(lVar6 + 0x2c) * 0x30 + lVar1;
                  lVar12 = *(long *)(lVar6 + 0x28);
                }
                iVar8 = iVar8 + 1 + iVar16;
                lVar18 = (ulong)*(uint *)(lVar18 + 0x2c) * 0x30 + lVar1;
                lVar12 = *(long *)(lVar18 + 0x28);
              }
              iVar9 = iVar9 + 1 + iVar8;
              lVar17 = (ulong)*(uint *)(lVar17 + 0x2c) * 0x30 + lVar1;
              lVar12 = *(long *)(lVar17 + 0x28);
            }
            iVar10 = iVar10 + 1 + iVar9;
            lVar19 = (ulong)*(uint *)(lVar19 + 0x2c) * 0x30 + lVar1;
          } while (*(long *)(lVar19 + 0x28) != -1);
        }
        iVar11 = iVar11 + 1 + iVar10;
        lVar20 = (ulong)*(uint *)(lVar20 + 0x2c) * 0x30 + lVar1;
      } while (*(long *)(lVar20 + 0x28) != -1);
    }
    iVar13 = iVar13 + 1 + iVar11;
    this = (Node *)(lVar1 + (ulong)*(uint *)(this + 0x2c) * 0x30);
  } while (*(long *)(this + 0x28) != -1);
  return iVar13 + 1;
}



/* JPH::AABBTreeBuilder::Node::GetTriangleCountInTree(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&) const */

int __thiscall JPH::AABBTreeBuilder::Node::GetTriangleCountInTree(Node *this,Array *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  iVar16 = 0;
  if (*(long *)(this + 0x28) != -1) {
    lVar1 = *(long *)(param_1 + 0x10);
    do {
      lVar9 = lVar1 + (ulong)*(uint *)(this + 0x28) * 0x30;
      if (*(long *)(lVar9 + 0x28) != -1) {
        iVar4 = 0;
        do {
          lVar17 = lVar1 + (ulong)*(uint *)(lVar9 + 0x28) * 0x30;
          if (*(long *)(lVar17 + 0x28) != -1) {
            iVar14 = 0;
            do {
              lVar18 = (ulong)*(uint *)(lVar17 + 0x28) * 0x30 + lVar1;
              if (*(long *)(lVar18 + 0x28) != -1) {
                iVar15 = 0;
                do {
                  lVar8 = (ulong)*(uint *)(lVar18 + 0x28) * 0x30 + lVar1;
                  if (*(long *)(lVar8 + 0x28) != -1) {
                    iVar12 = 0;
                    do {
                      lVar5 = (ulong)*(uint *)(lVar8 + 0x28) * 0x30 + lVar1;
                      if (*(long *)(lVar5 + 0x28) != -1) {
                        iVar13 = 0;
                        do {
                          lVar10 = (ulong)*(uint *)(lVar5 + 0x28) * 0x30 + lVar1;
                          if (*(long *)(lVar10 + 0x28) != -1) {
                            iVar7 = 0;
                            do {
                              lVar19 = (ulong)*(uint *)(lVar10 + 0x28) * 0x30 + lVar1;
                              if (*(long *)(lVar19 + 0x28) != -1) {
                                iVar11 = 0;
                                do {
                                  lVar6 = (ulong)*(uint *)(lVar19 + 0x28) * 0x30 + lVar1;
                                  if (*(long *)(lVar6 + 0x28) != -1) {
                                    iVar3 = 0;
                                    do {
                                      iVar2 = GetTriangleCountInTree
                                                        ((Node *)((ulong)*(uint *)(lVar6 + 0x28) *
                                                                  0x30 + lVar1),param_1);
                                      iVar3 = iVar3 + iVar2;
                                      lVar6 = (ulong)*(uint *)(lVar6 + 0x2c) * 0x30 + lVar1;
                                    } while (*(long *)(lVar6 + 0x28) != -1);
                                    iVar11 = iVar11 + iVar3;
                                  }
                                  iVar11 = iVar11 + *(int *)(lVar6 + 0x24);
                                  lVar19 = (ulong)*(uint *)(lVar19 + 0x2c) * 0x30 + lVar1;
                                } while (*(long *)(lVar19 + 0x28) != -1);
                                iVar7 = iVar7 + iVar11;
                              }
                              iVar7 = iVar7 + *(int *)(lVar19 + 0x24);
                              lVar10 = (ulong)*(uint *)(lVar10 + 0x2c) * 0x30 + lVar1;
                            } while (*(long *)(lVar10 + 0x28) != -1);
                            iVar13 = iVar13 + iVar7;
                          }
                          iVar13 = iVar13 + *(int *)(lVar10 + 0x24);
                          lVar5 = (ulong)*(uint *)(lVar5 + 0x2c) * 0x30 + lVar1;
                        } while (*(long *)(lVar5 + 0x28) != -1);
                        iVar12 = iVar12 + iVar13;
                      }
                      iVar12 = iVar12 + *(int *)(lVar5 + 0x24);
                      lVar8 = (ulong)*(uint *)(lVar8 + 0x2c) * 0x30 + lVar1;
                    } while (*(long *)(lVar8 + 0x28) != -1);
                    iVar15 = iVar15 + iVar12;
                  }
                  iVar15 = iVar15 + *(int *)(lVar8 + 0x24);
                  lVar18 = (ulong)*(uint *)(lVar18 + 0x2c) * 0x30 + lVar1;
                } while (*(long *)(lVar18 + 0x28) != -1);
                iVar14 = iVar14 + iVar15;
              }
              iVar14 = iVar14 + *(int *)(lVar18 + 0x24);
              lVar17 = (ulong)*(uint *)(lVar17 + 0x2c) * 0x30 + lVar1;
            } while (*(long *)(lVar17 + 0x28) != -1);
            iVar4 = iVar4 + iVar14;
          }
          iVar4 = iVar4 + *(int *)(lVar17 + 0x24);
          lVar9 = (ulong)*(uint *)(lVar9 + 0x2c) * 0x30 + lVar1;
        } while (*(long *)(lVar9 + 0x28) != -1);
        iVar16 = iVar16 + iVar4;
      }
      iVar16 = iVar16 + *(int *)(lVar9 + 0x24);
      this = (Node *)(lVar1 + (ulong)*(uint *)(this + 0x2c) * 0x30);
    } while (*(long *)(this + 0x28) != -1);
  }
  return *(int *)(this + 0x24) + iVar16;
}



/* JPH::AABBTreeBuilder::Node::GetNChildren(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&, unsigned int,
   JPH::Array<JPH::AABBTreeBuilder::Node const*, JPH::STLAllocator<JPH::AABBTreeBuilder::Node
   const*> >&) const */

void __thiscall
JPH::AABBTreeBuilder::Node::GetNChildren(Node *this,Array *param_1,uint param_2,Array *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (*(long *)(this + 0x28) == -1) {
    return;
  }
  uVar11 = (ulong)param_2;
  uVar1 = *(uint *)(this + 0x28);
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)param_3;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar7 = *(ulong *)(param_3 + 8);
  uVar12 = lVar8 + 1;
  uVar10 = uVar7;
  if (uVar7 < uVar12) {
    uVar10 = uVar7 * 2;
    if (uVar7 * 2 < uVar12) {
      uVar10 = uVar12;
    }
    lVar6 = (*Reallocate)(lVar6,uVar7 << 3,uVar10 * 8);
    *(ulong *)(param_3 + 8) = uVar10;
    *(long *)(param_3 + 0x10) = lVar6;
    lVar8 = *(long *)param_3;
    uVar12 = lVar8 + 1;
  }
  uVar2 = *(uint *)(this + 0x2c);
  *(ulong *)param_3 = uVar12;
  *(ulong *)(lVar6 + lVar8 * 8) = (ulong)uVar1 * 0x30 + lVar3;
  uVar7 = lVar8 + 2;
  lVar8 = *(long *)(param_1 + 0x10);
  if (uVar10 < uVar7) {
    uVar9 = uVar10 * 2;
    if (uVar10 * 2 < uVar7) {
      uVar9 = uVar7;
    }
    lVar6 = (*Reallocate)(lVar6,uVar10 << 3,uVar9 * 8);
    uVar12 = *(ulong *)param_3;
    *(ulong *)(param_3 + 8) = uVar9;
    *(long *)(param_3 + 0x10) = lVar6;
    uVar7 = uVar12 + 1;
  }
  *(ulong *)param_3 = uVar7;
  *(ulong *)(lVar6 + uVar12 * 8) = (ulong)uVar2 * 0x30 + lVar8;
  if (uVar7 < uVar11) {
    bVar5 = true;
    uVar12 = 0;
    do {
      while( true ) {
        if (uVar12 < uVar7) {
          lVar6 = uVar12 * 8;
        }
        else {
          if (bVar5) {
            return;
          }
          lVar6 = 0;
          bVar5 = true;
          uVar12 = 0;
        }
        lVar8 = *(long *)(param_3 + 0x10);
        lVar3 = *(long *)(lVar8 + lVar6);
        if (*(long *)(lVar3 + 0x28) == -1) break;
        if ((lVar6 >> 3) + 1U < uVar7) {
          memmove((long *)(lVar8 + lVar6),(void *)(lVar8 + 8 + lVar6),
                  ((uVar7 - 1) - (lVar6 >> 3)) * 8);
          lVar8 = *(long *)(param_3 + 0x10);
        }
        uVar10 = *(ulong *)param_3;
        uVar1 = *(uint *)(lVar3 + 0x28);
        uVar7 = *(ulong *)(param_3 + 8);
        lVar6 = uVar10 - 1;
        *(long *)param_3 = lVar6;
        lVar4 = *(long *)(param_1 + 0x10);
        uVar9 = uVar7;
        if (uVar7 < uVar10) {
          uVar9 = uVar7 * 2;
          if (uVar7 * 2 < uVar10) {
            uVar9 = uVar10;
          }
          lVar8 = (*Reallocate)(lVar8,uVar7 << 3,uVar9 * 8);
          *(long *)(param_3 + 0x10) = lVar8;
          lVar6 = *(long *)param_3;
          *(ulong *)(param_3 + 8) = uVar9;
          uVar10 = lVar6 + 1;
        }
        uVar2 = *(uint *)(lVar3 + 0x2c);
        *(ulong *)param_3 = uVar10;
        *(ulong *)(lVar8 + lVar6 * 8) = (ulong)uVar1 * 0x30 + lVar4;
        uVar7 = lVar6 + 2;
        lVar6 = *(long *)(param_1 + 0x10);
        if (uVar9 < uVar7) {
          uVar13 = uVar9 * 2;
          if (uVar9 * 2 < uVar7) {
            uVar13 = uVar7;
          }
          lVar8 = (*Reallocate)(lVar8,uVar9 << 3,uVar13 * 8);
          uVar10 = *(ulong *)param_3;
          *(ulong *)(param_3 + 8) = uVar13;
          *(long *)(param_3 + 0x10) = lVar8;
          uVar7 = uVar10 + 1;
        }
        *(ulong *)param_3 = uVar7;
        *(ulong *)(lVar8 + uVar10 * 8) = (ulong)uVar2 * 0x30 + lVar6;
        bVar5 = false;
        if (uVar11 <= uVar7) {
          return;
        }
      }
      uVar7 = *(ulong *)param_3;
      uVar12 = uVar12 + 1;
    } while (uVar7 < uVar11);
  }
  return;
}



/* JPH::AABBTreeBuilder::Node::CalculateSAHCostInternal(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&, float, float) const */

float __thiscall
JPH::AABBTreeBuilder::Node::CalculateSAHCostInternal
          (Node *this,Array *param_1,float param_2,float param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (*(float *)(this + 0x10) - *(float *)this) *
          (*(float *)(this + 0x14) - *(float *)(this + 4)) +
          (*(float *)(this + 0x10) - *(float *)this) *
          (*(float *)(this + 0x18) - *(float *)(this + 8)) +
          (*(float *)(this + 0x14) - *(float *)(this + 4)) *
          (*(float *)(this + 0x18) - *(float *)(this + 8));
  fVar4 = fVar4 + fVar4;
  if (*(long *)(this + 0x28) == -1) {
    return (float)*(uint *)(this + 0x24) * param_3 * fVar4;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  fVar2 = (float)CalculateSAHCostInternal
                           ((Node *)((ulong)*(uint *)(this + 0x28) * 0x30 + lVar1),param_1,param_2,
                            param_3);
  fVar3 = (float)CalculateSAHCostInternal
                           ((Node *)(lVar1 + (ulong)*(uint *)(this + 0x2c) * 0x30),param_1,param_2,
                            param_3);
  return fVar3 + fVar4 * param_2 + fVar2;
}



/* JPH::AABBTreeBuilder::Node::CalculateSAHCost(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&, float, float) const */

undefined8 __thiscall
JPH::AABBTreeBuilder::Node::CalculateSAHCost(Node *this,Array *param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (*(float *)(this + 0x10) - *(float *)this) *
          (*(float *)(this + 0x14) - *(float *)(this + 4)) +
          (*(float *)(this + 0x10) - *(float *)this) *
          (*(float *)(this + 0x18) - *(float *)(this + 8)) +
          (*(float *)(this + 0x14) - *(float *)(this + 4)) *
          (*(float *)(this + 0x18) - *(float *)(this + 8));
  fVar2 = fVar2 + fVar2;
  if (fVar2 <= 0.0) {
    return 0;
  }
  uVar1 = CalculateSAHCostInternal(this,param_1,param_2 / fVar2,param_3 / fVar2);
  return uVar1;
}



/* JPH::AABBTreeBuilder::Node::GetTriangleCountPerNodeInternal(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&, float&, unsigned int&, unsigned int&,
   unsigned int&) const */

void __thiscall
JPH::AABBTreeBuilder::Node::GetTriangleCountPerNodeInternal
          (Node *this,Array *param_1,float *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  
  if (*(long *)(this + 0x28) != -1) {
    lVar1 = *(long *)(param_1 + 0x10);
    do {
      GetTriangleCountPerNodeInternal
                ((Node *)((ulong)*(uint *)(this + 0x28) * 0x30 + lVar1),param_1,param_2,param_3,
                 param_4,param_5);
      this = (Node *)((ulong)*(uint *)(this + 0x2c) * 0x30 + lVar1);
    } while (*(long *)(this + 0x28) != -1);
  }
  *param_2 = (float)*(uint *)(this + 0x24) + *param_2;
  *param_3 = *param_3 + 1;
  uVar2 = *param_4;
  if (*(uint *)(this + 0x24) < *param_4) {
    uVar2 = *(uint *)(this + 0x24);
  }
  *param_4 = uVar2;
  uVar2 = *param_5;
  if (*param_5 < *(uint *)(this + 0x24)) {
    uVar2 = *(uint *)(this + 0x24);
  }
  *param_5 = uVar2;
  return;
}



/* JPH::AABBTreeBuilder::Node::GetTriangleCountPerNode(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&, float&, unsigned int&, unsigned int&)
   const */

void __thiscall
JPH::AABBTreeBuilder::Node::GetTriangleCountPerNode
          (Node *this,Array *param_1,float *param_2,uint *param_3,uint *param_4)

{
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0x7fffffff;
  *param_4 = 0;
  *param_2 = 0.0;
  local_14 = 0;
  GetTriangleCountPerNodeInternal(this,param_1,param_2,&local_14,param_3,param_4);
  if (local_14 != 0) {
    *param_2 = *param_2 / (float)local_14;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::AABBTreeBuilder::AABBTreeBuilder(JPH::TriangleSplitter&, unsigned int) */

void __thiscall
JPH::AABBTreeBuilder::AABBTreeBuilder(AABBTreeBuilder *this,TriangleSplitter *param_1,uint param_2)

{
  *(TriangleSplitter **)this = param_1;
  *(uint *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AABBTreeBuilder::BuildInternal(JPH::TriangleSplitter::Range const&) */

undefined4 __thiscall JPH::AABBTreeBuilder::BuildInternal(AABBTreeBuilder *this,Range *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  long lVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  uVar10 = *(uint *)(param_1 + 4);
  uVar9 = *(uint *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar20 = uVar10 - uVar9;
  if (*(uint *)(this + 8) < uVar20) {
    cVar7 = (**(code **)(**(long **)this + 0x18))
                      (*(long **)this,param_1,(Range *)&local_88,(Range *)&local_80);
    if (cVar7 == '\0') {
      iVar3 = *(int *)param_1;
      iVar8 = ((uint)(*(int *)(param_1 + 4) - iVar3) >> 1) + iVar3;
      local_88 = CONCAT44(iVar8,iVar3);
      local_80 = CONCAT44(*(int *)(param_1 + 4),iVar8);
    }
    uVar19 = *(ulong *)(this + 0x10);
    uVar4 = *(ulong *)(this + 0x18);
    local_58 = 0;
    lVar11 = *(long *)(this + 0x20);
    uVar13 = uVar19 + 1;
    local_8c = (undefined4)uVar19;
    uVar15 = uVar19;
    if (uVar4 < uVar13) {
      if (uVar13 <= uVar4 * 2) {
        uVar13 = uVar4 * 2;
      }
      lVar11 = (*Reallocate)(lVar11,uVar4 * 0x30,uVar13 * 0x30);
      uVar15 = *(ulong *)(this + 0x10);
      *(ulong *)(this + 0x18) = uVar13;
      *(long *)(this + 0x20) = lVar11;
      uVar13 = uVar15 + 1;
    }
    *(ulong *)(this + 0x10) = uVar13;
    uVar2 = _LC4;
    puVar21 = (undefined8 *)(lVar11 + uVar15 * 0x30);
    if (puVar21 != (undefined8 *)0x0) {
      uStack_50 = 0xffffffffffffffff;
      local_78 = _LC2;
      uStack_74 = _LC2;
      uStack_70 = _LC2;
      uStack_6c = _LC2;
      puVar21[4] = local_58;
      puVar21[5] = 0xffffffffffffffff;
      uVar5 = _UNK_001017e8;
      local_68 = uVar2;
      uStack_64 = uVar2;
      uStack_60 = uVar2;
      uStack_5c = uVar2;
      *puVar21 = CONCAT44(_UNK_001017e4,_LC2);
      puVar21[1] = uVar5;
      uVar5 = _UNK_001017f8;
      puVar21[2] = CONCAT44(_UNK_001017f4,_LC4);
      puVar21[3] = uVar5;
    }
    uVar9 = BuildInternal(this,(Range *)&local_88);
    uVar10 = BuildInternal(this,(Range *)&local_80);
    lVar11 = *(long *)(this + 0x20);
    puVar21 = (undefined8 *)((ulong)uVar9 * 0x30 + lVar11);
    pauVar18 = (undefined1 (*) [16])((uVar19 & 0xffffffff) * 0x30 + lVar11);
    uVar5 = *puVar21;
    uVar6 = puVar21[1];
    *(uint *)(pauVar18[2] + 0xc) = uVar10;
    *(undefined8 *)*pauVar18 = uVar5;
    *(undefined8 *)(*pauVar18 + 8) = uVar6;
    uVar5 = puVar21[2];
    uVar6 = puVar21[3];
    auVar23 = *pauVar18;
    *(uint *)(pauVar18[2] + 8) = uVar9;
    pauVar17 = (undefined1 (*) [16])(lVar11 + (ulong)uVar10 * 0x30);
    *(undefined8 *)pauVar18[1] = uVar5;
    *(undefined8 *)(pauVar18[1] + 8) = uVar6;
    auVar23 = minps(auVar23,*pauVar17);
    *pauVar18 = auVar23;
    auVar23 = maxps(pauVar18[1],pauVar17[1]);
    pauVar18[1] = auVar23;
  }
  else {
    lVar11 = *(long *)(this + 0x10);
    uVar19 = *(ulong *)(this + 0x18);
    local_58 = 0;
    lVar12 = *(long *)(this + 0x20);
    uVar13 = lVar11 + 1;
    local_8c = (undefined4)lVar11;
    if (uVar19 < uVar13) {
      if (uVar13 <= uVar19 * 2) {
        uVar13 = uVar19 * 2;
      }
      lVar12 = (*Reallocate)(lVar12,uVar19 * 0x30,uVar13 * 0x30);
      uVar10 = *(uint *)(param_1 + 4);
      uVar9 = *(uint *)param_1;
      *(ulong *)(this + 0x18) = uVar13;
      lVar11 = *(long *)(this + 0x10);
      *(long *)(this + 0x20) = lVar12;
      uVar20 = uVar10 - uVar9;
      uVar13 = lVar11 + 1;
    }
    *(ulong *)(this + 0x10) = uVar13;
    uVar2 = _LC4;
    pauVar17 = (undefined1 (*) [16])(lVar12 + lVar11 * 0x30);
    if (pauVar17 != (undefined1 (*) [16])0x0) {
      uStack_50 = 0xffffffffffffffff;
      local_78 = _LC2;
      uStack_74 = _LC2;
      uStack_70 = _LC2;
      uStack_6c = _LC2;
      *(undefined8 *)pauVar17[2] = local_58;
      *(undefined8 *)(pauVar17[2] + 8) = 0xffffffffffffffff;
      uVar5 = _UNK_001017e8;
      local_68 = uVar2;
      uStack_64 = uVar2;
      uStack_60 = uVar2;
      uStack_5c = uVar2;
      *(ulong *)*pauVar17 = CONCAT44(_UNK_001017e4,_LC2);
      *(undefined8 *)(*pauVar17 + 8) = uVar5;
      uVar5 = _UNK_001017f8;
      *(ulong *)pauVar17[1] = CONCAT44(_UNK_001017f4,_LC4);
      *(undefined8 *)(pauVar17[1] + 8) = uVar5;
    }
    uVar13 = *(ulong *)(this + 0x28);
    lVar11 = *(long *)this;
    *(uint *)(pauVar17[2] + 4) = uVar20;
    *(int *)pauVar17[2] = (int)uVar13;
    lVar12 = *(long *)(lVar11 + 8);
    if (uVar9 < uVar10) {
      lVar14 = *(long *)(this + 0x38);
      lVar22 = (ulong)uVar9 << 2;
      while( true ) {
        uVar4 = *(ulong *)(this + 0x30);
        uVar19 = uVar13 + 1;
        puVar16 = (uint *)(*(long *)(*(long *)(lVar11 + 0x10) + 0x10) +
                          (ulong)*(uint *)(*(long *)(lVar11 + 0x40) + lVar22) * 0x14);
        uVar15 = uVar13;
        uVar13 = uVar19;
        if (uVar4 < uVar19) {
          uVar13 = uVar4 * 2;
          if (uVar4 * 2 < uVar19) {
            uVar13 = uVar19;
          }
          lVar14 = (*Reallocate)(lVar14,uVar4 * 0x14,uVar13 * 0x14);
          *(long *)(this + 0x38) = lVar14;
          uVar15 = *(ulong *)(this + 0x28);
          *(ulong *)(this + 0x30) = uVar13;
          uVar13 = uVar15 + 1;
        }
        *(ulong *)(this + 0x28) = uVar13;
        puVar21 = (undefined8 *)(lVar14 + uVar15 * 0x14);
        if (puVar21 != (undefined8 *)0x0) {
          uVar5 = *(undefined8 *)(puVar16 + 2);
          *puVar21 = *(undefined8 *)puVar16;
          puVar21[1] = uVar5;
          *(uint *)(puVar21 + 2) = puVar16[4];
        }
        lVar11 = *(long *)(lVar12 + 0x10);
        auVar23 = *pauVar17;
        puVar1 = puVar16 + 3;
        auVar25 = pauVar17[1];
        do {
          uVar19 = (ulong)*puVar16;
          puVar16 = puVar16 + 1;
          uVar2 = *(undefined4 *)(lVar11 + 8 + uVar19 * 0xc);
          auVar24._4_4_ = *(undefined4 *)(lVar11 + 4 + uVar19 * 0xc);
          auVar24._0_4_ = *(undefined4 *)(lVar11 + uVar19 * 0xc);
          auVar24._8_4_ = uVar2;
          auVar24._12_4_ = uVar2;
          auVar23 = minps(auVar23,auVar24);
          auVar25 = maxps(auVar25,auVar24);
          *pauVar17 = auVar23;
          pauVar17[1] = auVar25;
        } while (puVar1 != puVar16);
        uVar9 = uVar9 + 1;
        lVar22 = lVar22 + 4;
        if (*(uint *)(param_1 + 4) <= uVar9) break;
        lVar11 = *(long *)this;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_8c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::AABBTreeBuilder::Build(JPH::AABBTreeBuilderStats&) */

Node * __thiscall JPH::AABBTreeBuilder::Build(AABBTreeBuilder *this,AABBTreeBuilderStats *param_1)

{
  Array *pAVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  AABBTreeBuilderStats *pAVar9;
  ulong uVar10;
  Node *pNVar11;
  ulong uVar12;
  Node *this_00;
  long in_FS_OFFSET;
  float fVar13;
  float local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  long local_40;
  
  pAVar1 = (Array *)(this + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_44 = (int)*(ulong *)(*(long *)this + 0x30);
  uVar10 = *(ulong *)(*(long *)this + 0x30) & 0xffffffff;
  uVar12 = (ulong)(uint)(local_44 * 2);
  if (*(ulong *)(this + 0x18) < uVar12) {
    uVar7 = (*Reallocate)(*(undefined8 *)(this + 0x20),*(ulong *)(this + 0x18) * 0x30,uVar12 * 0x30)
    ;
    *(ulong *)(this + 0x18) = uVar12;
    *(undefined8 *)(this + 0x20) = uVar7;
    uVar10 = (ulong)(uint)(local_44 - local_48);
  }
  if (*(ulong *)(this + 0x30) < uVar10) {
    uVar7 = (*Reallocate)(*(undefined8 *)(this + 0x38),*(ulong *)(this + 0x30) * 0x14,uVar10 * 0x14)
    ;
    *(ulong *)(this + 0x30) = uVar10;
    *(undefined8 *)(this + 0x38) = uVar7;
  }
  uVar4 = BuildInternal(this,(Range *)&local_48);
  local_54 = 0x7fffffff;
  local_50 = 0;
  this_00 = (Node *)((ulong)uVar4 * 0x30 + *(long *)(this + 0x20));
  local_58 = 0.0;
  local_4c = 0;
  Node::GetTriangleCountPerNodeInternal(this_00,pAVar1,&local_58,&local_4c,&local_54,&local_50);
  if (local_4c != 0) {
    local_58 = local_58 / (float)local_4c;
  }
  (**(code **)(**(long **)this + 0x10))(*(long **)this,param_1);
  fVar13 = (*(float *)(this_00 + 0x10) - *(float *)this_00) *
           (*(float *)(this_00 + 0x14) - *(float *)(this_00 + 4)) +
           (*(float *)(this_00 + 0x10) - *(float *)this_00) *
           (*(float *)(this_00 + 0x18) - *(float *)(this_00 + 8)) +
           (*(float *)(this_00 + 0x14) - *(float *)(this_00 + 4)) *
           (*(float *)(this_00 + 0x18) - *(float *)(this_00 + 8));
  fVar13 = fVar13 + fVar13;
  if (0.0 < fVar13) {
    fVar13 = _LC8 / fVar13;
    uVar5 = Node::CalculateSAHCostInternal(this_00,pAVar1,fVar13,fVar13);
  }
  else {
    uVar5 = 0;
  }
  lVar3 = *(long *)(this_00 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  if (lVar3 == -1) {
    *(undefined8 *)(param_1 + 0x14) = _LC9;
    iVar8 = 1;
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  else {
    uVar5 = Node::GetMinDepth((Array *)(ulong)*(uint *)(this_00 + 0x28));
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    uVar2 = *(uint *)(this_00 + 0x28);
    pAVar9 = param_1;
    uVar5 = Node::GetMaxDepth((Array *)(ulong)uVar2);
    lVar3 = *(long *)(this + 0x20);
    *(undefined4 *)(pAVar9 + 0x18) = uVar5;
    iVar8 = 0;
    pNVar11 = this_00;
    uVar4 = uVar2;
    while( true ) {
      iVar6 = Node::GetNodeCount((Node *)((ulong)uVar4 * 0x30 + lVar3),pAVar1);
      iVar6 = iVar6 + iVar8;
      iVar8 = iVar6 + 1;
      pNVar11 = (Node *)((ulong)*(uint *)(pNVar11 + 0x2c) * 0x30 + lVar3);
      if (*(long *)(pNVar11 + 0x28) == -1) break;
      uVar4 = *(uint *)(pNVar11 + 0x28);
    }
    iVar8 = 0;
    *(int *)(param_1 + 0x1c) = iVar6 + 2;
    pNVar11 = this_00;
    while( true ) {
      iVar6 = Node::GetLeafNodeCount((Node *)((ulong)uVar2 * 0x30 + lVar3),pAVar1);
      iVar8 = iVar8 + iVar6;
      pNVar11 = (Node *)((ulong)*(uint *)(pNVar11 + 0x2c) * 0x30 + lVar3);
      if (*(long *)(pNVar11 + 0x28) == -1) break;
      uVar2 = *(uint *)(pNVar11 + 0x28);
    }
    iVar8 = iVar8 + 1;
  }
  *(ulong *)(param_1 + 0x20) = CONCAT44(*(undefined4 *)(this + 8),iVar8);
  *(ulong *)(param_1 + 0x28) = CONCAT44(local_50,local_54);
  *(float *)(param_1 + 0x30) = local_58;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::AABBTreeBuilder::Node::GetMinDepth(JPH::Array<JPH::AABBTreeBuilder::Node,
   JPH::STLAllocator<JPH::AABBTreeBuilder::Node> > const&) const */

void JPH::AABBTreeBuilder::Node::_GLOBAL__sub_I_GetMinDepth(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC10;
  }
  return;
}


