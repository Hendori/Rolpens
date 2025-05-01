
/* int& std::deque<int, std::allocator<int> >::emplace_back<int>(int&&) [clone .isra.0] */

int * __thiscall
std::deque<int,std::allocator<int>>::emplace_back<int>
          (deque<int,std::allocator<int>> *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  void *pvVar5;
  size_t sVar6;
  long *__src;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *__dest;
  void *unaff_R15;
  undefined1 uVar11;
  
  piVar2 = *(int **)(this + 0x30);
  if (piVar2 != (int *)(*(long *)(this + 0x40) + -4)) {
    piVar4 = piVar2 + 1;
    *piVar2 = *param_1;
    goto LAB_0010002e;
  }
  plVar8 = *(long **)(this + 0x48);
  __src = *(long **)(this + 0x28);
  lVar10 = (long)plVar8 - (long)__src;
  if (((long)piVar2 - *(long *)(this + 0x38) >> 2) +
      ((lVar10 >> 3) + -1 + (ulong)(plVar8 == (long *)0x0)) * 0x80 +
      (*(long *)(this + 0x20) - *(long *)(this + 0x10) >> 2) == 0x1fffffffffffffff) {
LAB_0010026b:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::deque larger than max_size()");
  }
  uVar7 = *(ulong *)(this + 8);
  if (uVar7 - ((long)plVar8 - *(long *)this >> 3) < 2) {
    __dest = (long *)((lVar10 >> 3) + 2);
    if ((ulong)((long)__dest * 2) < uVar7) {
      __dest = (long *)(*(long *)this + (uVar7 - (long)__dest >> 1) * 8);
      sVar6 = (long)plVar8 + (8 - (long)__src);
      if (__dest < __src) {
        if ((long)sVar6 < 9) {
          if (sVar6 == 8) {
            *__dest = *__src;
          }
        }
        else {
          memmove(__dest,__src,sVar6);
        }
      }
      else if ((long)sVar6 < 9) {
        if (sVar6 == 8) {
          *(long *)((long)__dest + lVar10) = *__src;
        }
      }
      else {
        memmove((void *)((long)__dest + ((lVar10 + 8) - sVar6)),__src,sVar6);
      }
    }
    else {
      if (uVar7 == 0) {
        uVar7 = 0x18;
        uVar9 = 3;
LAB_00100133:
        unaff_R15 = operator_new(uVar7);
        __src = *(long **)(this + 0x28);
        __dest = (long *)((long)unaff_R15 + (uVar9 - (long)__dest >> 1) * 8);
        sVar6 = (*(long *)(this + 0x48) + 8) - (long)__src;
        uVar11 = sVar6 == 8;
        if ((long)sVar6 < 9) goto LAB_00100232;
        memmove(__dest,__src,sVar6);
      }
      else {
        uVar9 = (uVar7 + 1) * 2;
        if (uVar9 >> 0x3c == 0) {
          uVar7 = (uVar7 + 1) * 0x10;
          goto LAB_00100133;
        }
        uVar11 = uVar9 == 0x1fffffffffffffff;
        if (uVar9 < 0x2000000000000000) {
          std::__throw_bad_alloc();
          goto LAB_0010026b;
        }
        std::__throw_bad_array_new_length();
LAB_00100232:
        if ((bool)uVar11) {
          *__dest = *__src;
        }
      }
      operator_delete(*(void **)this,*(long *)(this + 8) * 8);
      *(void **)this = unaff_R15;
      *(ulong *)(this + 8) = uVar9;
    }
    lVar3 = *__dest;
    plVar8 = (long *)((long)__dest + lVar10);
    *(long **)(this + 0x28) = __dest;
    *(long **)(this + 0x48) = plVar8;
    *(long *)(this + 0x18) = lVar3;
    *(long *)(this + 0x20) = lVar3 + 0x200;
    lVar10 = *plVar8;
    *(long *)(this + 0x38) = lVar10;
    *(long *)(this + 0x40) = lVar10 + 0x200;
  }
  pvVar5 = operator_new(0x200);
  iVar1 = *param_1;
  plVar8[1] = (long)pvVar5;
  **(int **)(this + 0x30) = iVar1;
  piVar4 = *(int **)(*(long *)(this + 0x48) + 8);
  *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
  *(int **)(this + 0x38) = piVar4;
  *(int **)(this + 0x40) = piVar4 + 0x80;
LAB_0010002e:
  *(int **)(this + 0x30) = piVar4;
  return piVar4;
}



/* manifold::defaultEps() */

undefined8 manifold::defaultEps(void)

{
  return _LC1;
}



/* manifold::MeshBuilder::addHalfedge() */

long __thiscall manifold::MeshBuilder::addHalfedge(MeshBuilder *this)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  size_t sVar8;
  ulong uVar9;
  size_t local_48;
  
  uVar3 = *(ulong *)(this + 0x80);
  if (uVar3 != 0) {
    puVar4 = *(undefined8 **)(this + 0x78);
    sVar8 = uVar3 * 8;
    uVar7 = uVar3 - 1;
    lVar1 = puVar4[uVar3 - 1];
    if (*(ulong *)(this + 0x88) < uVar7) {
      puVar6 = (undefined8 *)malloc(uVar7 * 8);
      if ((long)sVar8 < 9) {
        if (sVar8 == 8) {
          *puVar6 = *puVar4;
          goto LAB_00100569;
        }
        uVar9 = uVar3;
        if (puVar4 != (undefined8 *)0x0) goto LAB_00100569;
      }
      else {
        puVar6 = (undefined8 *)memmove(puVar6,puVar4,sVar8);
LAB_00100569:
        free(puVar4);
        uVar9 = *(ulong *)(this + 0x80);
      }
      *(undefined8 **)(this + 0x78) = puVar6;
      *(ulong *)(this + 0x88) = uVar7;
      if ((uVar9 < uVar7) && (puVar6 + uVar9 != puVar6 + uVar7)) {
        memset(puVar6 + uVar9,0,uVar7 * 8 + uVar9 * -8);
      }
      *(ulong *)(this + 0x80) = uVar7;
      if (uVar3 <= uVar7 * 2) {
        return lVar1;
      }
LAB_001005c3:
      local_48 = uVar7 * 8;
      puVar6 = (undefined8 *)malloc(local_48);
      puVar4 = *(undefined8 **)(this + 0x78);
      if ((long)local_48 < 9) {
        if (local_48 != 8) goto LAB_0010044c;
        *puVar6 = *puVar4;
      }
      else {
        memmove(puVar6,puVar4,local_48);
      }
    }
    else {
      *(ulong *)(this + 0x80) = uVar7;
      if (uVar3 <= uVar7 * 2) {
        return lVar1;
      }
      if (uVar7 != 0) goto LAB_001005c3;
      puVar6 = (undefined8 *)0x0;
LAB_0010044c:
      if (puVar4 == (undefined8 *)0x0) goto LAB_00100455;
    }
    free(puVar4);
LAB_00100455:
    *(undefined8 **)(this + 0x78) = puVar6;
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(this + 0x80);
    return lVar1;
  }
  uVar3 = *(ulong *)(this + 0x20);
  uVar7 = *(ulong *)(this + 0x28);
  if (uVar3 < uVar7) {
    *(ulong *)(this + 0x20) = uVar3 + 1;
    uVar7 = *(ulong *)(this + 0x38);
    puVar4 = (undefined8 *)(*(long *)(this + 0x18) + uVar3 * 0xc);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    uVar3 = *(ulong *)(this + 0x40);
    if (uVar7 < uVar3) goto LAB_001002fa;
LAB_0010039a:
    if (uVar3 == 0) {
      sVar8 = 0x200;
      uVar9 = 0x80;
LAB_001004bb:
      puVar5 = (undefined4 *)malloc(sVar8);
      puVar2 = *(undefined4 **)(this + 0x30);
      if (uVar7 == 0) {
LAB_001004d0:
        if (puVar2 != (undefined4 *)0x0) goto LAB_0010064d;
      }
      else {
        sVar8 = uVar7 * 4;
        if ((long)sVar8 < 5) {
          if (sVar8 != 4) goto LAB_001004d0;
          *puVar5 = *puVar2;
        }
        else {
          memmove(puVar5,puVar2,sVar8);
        }
LAB_0010064d:
        free(puVar2);
        uVar7 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar5;
      *(ulong *)(this + 0x40) = uVar9;
    }
    else {
      uVar9 = uVar3 * 2;
      if (uVar3 < uVar9) {
        sVar8 = uVar3 * 8;
        goto LAB_001004bb;
      }
      puVar5 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar7 + 1;
    uVar3 = *(ulong *)(this + 0x58);
    puVar5[uVar7] = 0;
    uVar7 = *(ulong *)(this + 0x50);
    if (uVar3 <= uVar7) goto LAB_001003d5;
  }
  else {
    if (uVar7 == 0) {
      sVar8 = 0x600;
      uVar9 = 0x80;
LAB_0010047b:
      puVar4 = (undefined8 *)malloc(sVar8);
      puVar6 = *(undefined8 **)(this + 0x18);
      if (uVar3 == 0) {
LAB_00100490:
        if (puVar6 != (undefined8 *)0x0) goto LAB_0010067a;
      }
      else {
        sVar8 = uVar3 * 0xc;
        if ((long)sVar8 < 0xd) {
          if (sVar8 != 0xc) goto LAB_00100490;
          *puVar4 = *puVar6;
          *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
        }
        else {
          memmove(puVar4,puVar6,sVar8);
        }
LAB_0010067a:
        free(puVar6);
        uVar3 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar4;
      *(ulong *)(this + 0x28) = uVar9;
    }
    else {
      uVar9 = uVar7 * 2;
      if (uVar7 < uVar9) {
        sVar8 = uVar7 * 0x18;
        goto LAB_0010047b;
      }
      puVar4 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar3 + 1;
    uVar7 = *(ulong *)(this + 0x38);
    puVar4 = (undefined8 *)((long)puVar4 + uVar3 * 0xc);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    uVar3 = *(ulong *)(this + 0x40);
    if (uVar3 <= uVar7) goto LAB_0010039a;
LAB_001002fa:
    *(ulong *)(this + 0x38) = uVar7 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar7 * 4) = 0;
    uVar7 = *(ulong *)(this + 0x50);
    uVar3 = *(ulong *)(this + 0x58);
    if (uVar3 <= uVar7) {
LAB_001003d5:
      if (uVar3 == 0) {
        sVar8 = 0x200;
        uVar9 = 0x80;
LAB_001004fb:
        puVar5 = (undefined4 *)malloc(sVar8);
        puVar2 = *(undefined4 **)(this + 0x48);
        if (uVar7 == 0) {
LAB_00100510:
          if (puVar2 != (undefined4 *)0x0) goto LAB_0010061d;
        }
        else {
          sVar8 = uVar7 * 4;
          if ((long)sVar8 < 5) {
            if (sVar8 != 4) goto LAB_00100510;
            *puVar5 = *puVar2;
          }
          else {
            memmove(puVar5,puVar2,sVar8);
          }
LAB_0010061d:
          free(puVar2);
          uVar7 = *(ulong *)(this + 0x50);
        }
        *(undefined4 **)(this + 0x48) = puVar5;
        *(ulong *)(this + 0x58) = uVar9;
      }
      else {
        uVar9 = uVar3 * 2;
        if (uVar3 < uVar9) {
          sVar8 = uVar3 * 8;
          goto LAB_001004fb;
        }
        puVar5 = *(undefined4 **)(this + 0x48);
      }
      *(ulong *)(this + 0x50) = uVar7 + 1;
      puVar5[uVar7] = 0;
      goto LAB_00100331;
    }
  }
  *(ulong *)(this + 0x50) = uVar7 + 1;
  *(undefined4 *)(*(long *)(this + 0x48) + uVar7 * 4) = 0;
LAB_00100331:
  return *(long *)(this + 0x20) + -1;
}



/* manifold::MeshBuilder::getVertexIndicesOfFace(manifold::MeshBuilder::Face const&) const */

undefined8 __thiscall manifold::MeshBuilder::getVertexIndicesOfFace(MeshBuilder *this,Face *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(this + 0x18);
  lVar2 = (long)*(int *)(*(long *)(this + 0x48) + (long)*(int *)param_1 * 4);
  lVar3 = (long)*(int *)(*(long *)(this + 0x48) + lVar2 * 4);
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(*(undefined4 *)(lVar1 + 4 + lVar2 * 0xc),
                    *(undefined4 *)(lVar1 + 4 + (long)*(int *)param_1 * 0xc));
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this,lVar3 * 3,*(undefined4 *)(lVar1 + 4 + lVar3 * 0xc));
}



/* manifold::QuickHull::getExtremeValues() */

void manifold::QuickHull::getExtremeValues(void)

{
  double dVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  bool bVar10;
  double *pdVar11;
  ulong uVar12;
  ulong unaff_RBX;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  ulong in_R10;
  ulong in_R11;
  ulong unaff_R12;
  ulong unaff_R13;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ulong local_38;
  
  pdVar11 = *(double **)(in_RSI + 0x38);
  uVar2 = *(ulong *)(in_RSI + 0x40);
  *in_RDI = (undefined1  [16])0x0;
  dVar15 = *pdVar11;
  dVar14 = pdVar11[1];
  in_RDI[1] = (undefined1  [16])0x0;
  dVar16 = pdVar11[2];
  in_RDI[2] = (undefined1  [16])0x0;
  if (uVar2 < 2) {
    return;
  }
  pdVar11 = pdVar11 + 3;
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  bVar3 = false;
  uVar9 = 1;
  dVar17 = dVar14;
  dVar18 = dVar15;
  dVar19 = dVar16;
  bVar10 = false;
  do {
    while( true ) {
      bVar4 = bVar10;
      uVar12 = uVar9;
      dVar1 = *pdVar11;
      if (dVar15 < dVar1) {
        bVar8 = true;
        unaff_RBX = uVar12;
        dVar15 = dVar1;
      }
      else if (dVar1 < dVar18) {
        bVar7 = true;
        dVar18 = dVar1;
        local_38 = uVar12;
      }
      dVar1 = pdVar11[1];
      if (dVar14 < dVar1) break;
      if (dVar1 < dVar17) {
        bVar5 = true;
        unaff_R13 = uVar12;
        dVar17 = dVar1;
      }
      dVar13 = pdVar11[2];
      if (dVar13 <= dVar16) goto LAB_00100836;
LAB_0010089b:
      dVar16 = dVar13;
      bVar4 = true;
      pdVar11 = pdVar11 + 3;
      uVar9 = uVar12 + 1;
      in_R10 = uVar12;
      bVar10 = true;
      if (uVar2 == uVar12 + 1) goto LAB_001008b4;
    }
    dVar13 = pdVar11[2];
    bVar6 = true;
    in_R11 = uVar12;
    dVar14 = dVar1;
    if (dVar16 < dVar13) goto LAB_0010089b;
LAB_00100836:
    if (dVar13 < dVar19) {
      bVar3 = true;
      unaff_R12 = uVar12;
      dVar19 = dVar13;
    }
    pdVar11 = pdVar11 + 3;
    uVar9 = uVar12 + 1;
    bVar10 = bVar4;
  } while (uVar2 != uVar12 + 1);
LAB_001008b4:
  if (bVar3) {
    *(ulong *)(in_RDI[2] + 8) = unaff_R12;
  }
  if (bVar4) {
    *(ulong *)in_RDI[2] = in_R10;
  }
  if (bVar5) {
    *(ulong *)(in_RDI[1] + 8) = unaff_R13;
  }
  if (bVar6) {
    *(ulong *)in_RDI[1] = in_R11;
  }
  if (bVar7) {
    *(ulong *)(*in_RDI + 8) = local_38;
  }
  if (bVar8) {
    *(ulong *)*in_RDI = unaff_RBX;
  }
  return;
}



/* manifold::QuickHull::reorderHorizonEdges(manifold::VecView<unsigned long>&) */

undefined8 __thiscall manifold::QuickHull::reorderHorizonEdges(QuickHull *this,VecView *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (1 < uVar1) {
    lVar2 = *(long *)(this + 0x60);
    uVar8 = 1;
    plVar4 = *(long **)param_1;
    do {
      plVar7 = plVar4 + 1;
      plVar5 = plVar7;
      uVar6 = uVar8;
      if (uVar1 == uVar8) {
        return 0;
      }
      while (*(int *)(lVar2 + 4 + *plVar4 * 0xc) !=
             *(int *)(lVar2 + 4 + (long)*(int *)(lVar2 + 8 + *plVar5 * 0xc) * 0xc)) {
        uVar6 = uVar6 + 1;
        plVar5 = plVar5 + 1;
        if (uVar1 <= uVar6) {
          return 0;
        }
      }
      lVar3 = *plVar7;
      uVar8 = uVar8 + 1;
      *plVar7 = *plVar5;
      *plVar5 = lVar3;
      plVar4 = plVar7;
    } while (uVar8 != uVar1);
  }
  return 1;
}



/* manifold::QuickHull::getScale(std::array<unsigned long, 6ul> const&) */

void __thiscall manifold::QuickHull::getScale(QuickHull *this,array *param_1)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = 0;
  dVar4 = 0.0;
  do {
    uVar2 = uVar1 + 1;
    dVar3 = (double)(*(ulong *)(*(long *)(this + 0x38) +
                               (uVar1 >> 1) * 8 + *(long *)(param_1 + uVar1 * 8) * 0x18) & _LC3);
    if (dVar3 <= dVar4) {
      dVar3 = dVar4;
    }
    uVar1 = uVar2;
    dVar4 = dVar3;
  } while (uVar2 != 6);
  return;
}



/* manifold::MeshBuilder::addFace() */

long __thiscall manifold::MeshBuilder::addFace(MeshBuilder *this)

{
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  size_t local_50;
  
  uVar2 = *(ulong *)(this + 0x68);
  if (uVar2 == 0) {
    puVar3 = *(undefined4 **)(this + 8);
    if (puVar3 == *(undefined4 **)(this + 0x10)) {
      std::vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>::
      _M_realloc_insert<>();
      puVar7 = *(undefined4 **)(this + 8);
    }
    else {
      *(byte *)(puVar3 + 0x12) = *(byte *)(puVar3 + 0x12) & 0xe0;
      puVar7 = puVar3 + 0x16;
      *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar3 + 6) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar3 + 10) = (undefined1  [16])0x0;
      *puVar3 = 0xffffffff;
      *(undefined1 (*) [16])(puVar3 + 0xe) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar3 + 0x14) = 0;
      *(undefined4 **)(this + 8) = puVar7;
    }
    return ((long)puVar7 - *(long *)this >> 3) * 0x2e8ba2e8ba2e8ba3 + -1;
  }
  puVar8 = *(undefined8 **)(this + 0x60);
  __n = uVar2 * 8;
  uVar1 = uVar2 - 1;
  lVar4 = puVar8[uVar2 - 1];
  *(undefined8 *)(*(long *)this + lVar4 * 0x58 + 0x30) = 0;
  if (*(ulong *)(this + 0x70) < uVar1) {
    puVar6 = (undefined8 *)malloc(uVar1 * 8);
    if ((long)__n < 9) {
      if (__n == 8) {
        *puVar6 = *puVar8;
        goto LAB_00100b66;
      }
      uVar5 = uVar2;
      if (puVar8 != (undefined8 *)0x0) goto LAB_00100b66;
    }
    else {
      memmove(puVar6,puVar8,__n);
LAB_00100b66:
      free(puVar8);
      uVar5 = *(ulong *)(this + 0x68);
    }
    *(undefined8 **)(this + 0x60) = puVar6;
    *(ulong *)(this + 0x70) = uVar1;
    if ((uVar5 < uVar1) && (puVar6 + uVar5 != puVar6 + uVar1)) {
      memset(puVar6 + uVar5,0,uVar1 * 8 + uVar5 * -8);
    }
    *(ulong *)(this + 0x68) = uVar1;
    if (uVar2 <= uVar1 * 2) {
      return lVar4;
    }
LAB_00100bae:
    local_50 = uVar1 * 8;
    puVar6 = (undefined8 *)malloc(local_50);
    puVar8 = *(undefined8 **)(this + 0x60);
    if ((long)local_50 < 9) {
      if (local_50 != 8) goto LAB_00100af1;
      *puVar6 = *puVar8;
    }
    else {
      memmove(puVar6,puVar8,local_50);
    }
  }
  else {
    *(ulong *)(this + 0x68) = uVar1;
    if (uVar2 <= uVar1 * 2) {
      return lVar4;
    }
    if (uVar1 != 0) goto LAB_00100bae;
    puVar8 = *(undefined8 **)(this + 0x60);
    puVar6 = (undefined8 *)0x0;
LAB_00100af1:
    if (puVar8 == (undefined8 *)0x0) goto LAB_00100afa;
  }
  free(puVar8);
LAB_00100afa:
  *(undefined8 **)(this + 0x60) = puVar6;
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x68);
  return lVar4;
}



/* manifold::MeshBuilder::Face& std::vector<manifold::MeshBuilder::Face,
   std::allocator<manifold::MeshBuilder::Face> >::emplace_back<int>(int&&) [clone .isra.0] */

Face * __thiscall
std::vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>::
emplace_back<int>(vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>
                  *this,int *param_1)

{
  uint uVar1;
  uint *puVar2;
  Face *extraout_RAX;
  
  puVar2 = *(uint **)(this + 8);
  if (puVar2 != *(uint **)(this + 0x10)) {
    uVar1 = *param_1;
    *(byte *)(puVar2 + 0x12) = (byte)puVar2[0x12] & 0xe0;
    *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 6) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
    *puVar2 = uVar1;
    *(undefined1 (*) [16])(puVar2 + 0xe) = (undefined1  [16])0x0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    *(uint **)(this + 8) = puVar2 + 0x16;
    return (Face *)(ulong)uVar1;
  }
  _M_realloc_insert<int>();
  return extraout_RAX;
}



/* manifold::MeshBuilder::setup(int, int, int, int) */

void __thiscall
manifold::MeshBuilder::setup(MeshBuilder *this,int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  size_t sVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar23 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)this;
  lVar22 = lVar2;
  if (lVar2 != lVar23) {
    do {
      puVar15 = *(undefined8 **)(lVar22 + 0x50);
      if (puVar15 != (undefined8 *)0x0) {
        if ((void *)*puVar15 != (void *)0x0) {
          free((void *)*puVar15);
        }
        operator_delete(puVar15,0x18);
      }
      lVar22 = lVar22 + 0x58;
    } while (lVar23 != lVar22);
    *(long *)(this + 8) = lVar2;
  }
  *(undefined8 *)(this + 0x20) = 0;
  uVar12 = 0;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    free(*(void **)(this + 0x18));
    uVar12 = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 *)(this + 0x28) = uVar12;
  uVar12 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    free(*(void **)(this + 0x30));
    uVar12 = *(undefined8 *)(this + 0x38);
  }
  *(undefined8 *)(this + 0x40) = uVar12;
  uVar12 = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  if (*(void **)(this + 0x48) != (void *)0x0) {
    free(*(void **)(this + 0x48));
    uVar12 = *(undefined8 *)(this + 0x50);
  }
  *(undefined8 *)(this + 0x58) = uVar12;
  uVar12 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  if (*(void **)(this + 0x60) != (void *)0x0) {
    free(*(void **)(this + 0x60));
    uVar12 = *(undefined8 *)(this + 0x68);
  }
  *(undefined8 *)(this + 0x70) = uVar12;
  uVar12 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  if (*(void **)(this + 0x78) != (void *)0x0) {
    free(*(void **)(this + 0x78));
    uVar12 = *(undefined8 *)(this + 0x80);
  }
  *(undefined8 *)(this + 0x88) = uVar12;
  lVar23 = *(long *)this;
  *(undefined8 *)(this + 0x78) = 0;
  if ((ulong)(*(long *)(this + 0x10) - lVar23) < 0x109) {
    lVar2 = *(long *)(this + 8);
    puVar13 = (undefined4 *)operator_new(0x160);
    puVar4 = *(undefined4 **)(this + 8);
    puVar14 = *(undefined4 **)this;
    puVar11 = puVar13;
    for (puVar19 = puVar14; puVar4 != puVar19; puVar19 = puVar19 + 0x16) {
      uVar5 = *(undefined8 *)(puVar19 + 2);
      uVar6 = *(undefined8 *)(puVar19 + 4);
      uVar7 = *(undefined8 *)(puVar19 + 6);
      uVar8 = *(undefined8 *)(puVar19 + 8);
      uVar12 = *(undefined8 *)(puVar19 + 0xc);
      uVar9 = *(undefined8 *)(puVar19 + 0xe);
      uVar10 = *(undefined8 *)(puVar19 + 0x10);
      *puVar11 = *puVar19;
      uVar3 = *(undefined8 *)(puVar19 + 10);
      *(undefined8 *)(puVar11 + 2) = uVar5;
      *(undefined8 *)(puVar11 + 4) = uVar6;
      *(undefined8 *)(puVar11 + 6) = uVar7;
      *(undefined8 *)(puVar11 + 8) = uVar8;
      *(undefined8 *)(puVar11 + 10) = uVar3;
      bVar1 = *(byte *)(puVar19 + 0x12);
      *(undefined8 *)(puVar11 + 0xc) = uVar12;
      *(undefined8 *)(puVar11 + 0xe) = uVar9;
      *(undefined8 *)(puVar11 + 0x10) = uVar10;
      *(byte *)(puVar11 + 0x12) = bVar1 & 0x1f | *(byte *)(puVar11 + 0x12) & 0xe0;
      *(undefined8 *)(puVar11 + 0x14) = *(undefined8 *)(puVar19 + 0x14);
      puVar11 = puVar11 + 0x16;
    }
    if (puVar14 != (undefined4 *)0x0) {
      operator_delete(puVar14,*(long *)(this + 0x10) - (long)puVar14);
    }
    uVar16 = *(ulong *)(this + 0x28);
    *(undefined4 **)this = puVar13;
    *(long *)(this + 8) = (lVar2 - lVar23) + (long)puVar13;
    *(undefined4 **)(this + 0x10) = puVar13 + 0x58;
    if (uVar16 < 0xc) goto LAB_00101507;
LAB_00100ded:
    uVar18 = *(ulong *)(this + 0x20);
    if (uVar18 < uVar16) {
      lVar23 = uVar18 * 2;
      goto LAB_00100dfe;
    }
    uVar21 = uVar16 * 2;
    lVar23 = uVar18 * 2;
    if (uVar16 < uVar21) {
LAB_001026dd:
      puVar17 = (undefined8 *)malloc((uVar21 + uVar16) * 8);
      puVar15 = *(undefined8 **)(this + 0x18);
      sVar20 = (lVar23 + uVar18) * 4;
      if ((long)sVar20 < 0xd) {
        if (sVar20 == 0xc) {
          *puVar17 = *puVar15;
          *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar15 + 1);
          goto LAB_00102725;
        }
        if (puVar15 != (undefined8 *)0x0) goto LAB_00102725;
      }
      else {
        puVar17 = (undefined8 *)memmove(puVar17,puVar15,sVar20);
LAB_00102725:
        free(puVar15);
        uVar18 = *(ulong *)(this + 0x20);
        lVar23 = uVar18 * 2;
      }
      *(undefined8 **)(this + 0x18) = puVar17;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      puVar17 = *(undefined8 **)(this + 0x18);
      lVar23 = uVar18 * 2;
    }
    *(ulong *)(this + 0x20) = uVar18 + 1;
    puVar14 = (undefined4 *)((long)puVar17 + (lVar23 + uVar18) * 4);
    *puVar14 = 0;
    puVar14[1] = param_2;
    puVar14[2] = 6;
  }
  else {
    uVar16 = *(ulong *)(this + 0x28);
    if (0xb < uVar16) goto LAB_00100ded;
LAB_00101507:
    puVar17 = (undefined8 *)malloc(0x90);
    uVar18 = *(ulong *)(this + 0x20);
    puVar15 = *(undefined8 **)(this + 0x18);
    if (uVar18 != 0) {
      sVar20 = uVar18 * 0xc;
      if ((long)sVar20 < 0xd) {
        if (sVar20 == 0xc) {
          *puVar17 = *puVar15;
          *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar15 + 1);
          goto LAB_001026a8;
        }
        if (puVar15 != (undefined8 *)0x0) goto LAB_001026a8;
      }
      else {
        memmove(puVar17,puVar15,sVar20);
LAB_001026a8:
        free(puVar15);
        uVar18 = *(ulong *)(this + 0x20);
      }
      lVar23 = uVar18 * 2;
      *(undefined8 **)(this + 0x18) = puVar17;
      *(undefined8 *)(this + 0x28) = 0xc;
      if (uVar18 < 0xc) goto LAB_00100dfe;
      uVar16 = 0xc;
      uVar21 = 0x18;
      goto LAB_001026dd;
    }
    if (puVar15 != (undefined8 *)0x0) goto LAB_001026a8;
    *(undefined8 **)(this + 0x18) = puVar17;
    lVar23 = 0;
    *(undefined8 *)(this + 0x28) = 0xc;
LAB_00100dfe:
    *(ulong *)(this + 0x20) = uVar18 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + (lVar23 + uVar18) * 4);
    *puVar14 = 0;
    puVar14[1] = param_2;
    puVar14[2] = 6;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 0;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_001021e0:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_001021ff:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102881;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_001021ff;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102881:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_001021e0;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 0;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 1;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00102184:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x48);
      if (uVar16 == 0) {
LAB_001021a3:
        if (puVar4 != (undefined4 *)0x0) goto LAB_001028cd;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_001021a3;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_001028cd:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x50);
      }
      *(undefined4 **)(this + 0x48) = puVar14;
      *(ulong *)(this + 0x58) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00102184;
      }
      puVar14 = *(undefined4 **)(this + 0x48);
    }
    *(ulong *)(this + 0x50) = uVar16 + 1;
    puVar14[uVar16] = 1;
  }
  uVar16 = *(ulong *)(this + 0x20);
  uVar18 = *(ulong *)(this + 0x28);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_3;
    puVar14[2] = 9;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x600;
      uVar21 = 0x80;
LAB_00102113:
      puVar15 = (undefined8 *)malloc(sVar20);
      puVar17 = *(undefined8 **)(this + 0x18);
      if (uVar16 == 0) {
LAB_00102132:
        if (puVar17 != (undefined8 *)0x0) goto LAB_00102916;
      }
      else {
        sVar20 = uVar16 * 0xc;
        if ((long)sVar20 < 0xd) {
          if (sVar20 != 0xc) goto LAB_00102132;
          *puVar15 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          memmove(puVar15,puVar17,sVar20);
        }
LAB_00102916:
        free(puVar17);
        uVar16 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 0x18;
        goto LAB_00102113;
      }
      puVar15 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)((long)puVar15 + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_3;
    puVar14[2] = 9;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 0;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_001020b4:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_001020d3:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102962;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_001020d3;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102962:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_001020b4;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 0;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 2;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00102054:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x48);
      if (uVar16 == 0) {
LAB_00102073:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102d36;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00102073;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102d36:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x50);
      }
      *(undefined4 **)(this + 0x48) = puVar14;
      *(ulong *)(this + 0x58) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00102054;
      }
      puVar14 = *(undefined4 **)(this + 0x48);
    }
    *(ulong *)(this + 0x50) = uVar16 + 1;
    puVar14[uVar16] = 2;
  }
  uVar16 = *(ulong *)(this + 0x20);
  uVar18 = *(ulong *)(this + 0x28);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_1;
    puVar14[2] = 3;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x600;
      uVar21 = 0x80;
LAB_00101fe3:
      puVar15 = (undefined8 *)malloc(sVar20);
      puVar17 = *(undefined8 **)(this + 0x18);
      if (uVar16 == 0) {
LAB_00102002:
        if (puVar17 != (undefined8 *)0x0) goto LAB_00102d7f;
      }
      else {
        sVar20 = uVar16 * 0xc;
        if ((long)sVar20 < 0xd) {
          if (sVar20 != 0xc) goto LAB_00102002;
          *puVar15 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          memmove(puVar15,puVar17,sVar20);
        }
LAB_00102d7f:
        free(puVar17);
        uVar16 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 0x18;
        goto LAB_00101fe3;
      }
      puVar15 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)((long)puVar15 + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_1;
    puVar14[2] = 3;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 0;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101f84:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_00101fa3:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102dcb;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101fa3;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102dcb:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101f84;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 0;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 0;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101f24:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x48);
      if (uVar16 == 0) {
LAB_00101f43:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102e17;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101f43;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102e17:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x50);
      }
      *(undefined4 **)(this + 0x48) = puVar14;
      *(ulong *)(this + 0x58) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101f24;
      }
      puVar14 = *(undefined4 **)(this + 0x48);
    }
    *(ulong *)(this + 0x50) = uVar16 + 1;
    puVar14[uVar16] = 0;
  }
  uVar16 = *(ulong *)(this + 0x20);
  uVar18 = *(ulong *)(this + 0x28);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_3;
    puVar14[2] = 2;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x600;
      uVar21 = 0x80;
LAB_00101eb3:
      puVar15 = (undefined8 *)malloc(sVar20);
      puVar17 = *(undefined8 **)(this + 0x18);
      if (uVar16 == 0) {
LAB_00101ed2:
        if (puVar17 != (undefined8 *)0x0) goto LAB_00102b15;
      }
      else {
        sVar20 = uVar16 * 0xc;
        if ((long)sVar20 < 0xd) {
          if (sVar20 != 0xc) goto LAB_00101ed2;
          *puVar15 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          memmove(puVar15,puVar17,sVar20);
        }
LAB_00102b15:
        free(puVar17);
        uVar16 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 0x18;
        goto LAB_00101eb3;
      }
      puVar15 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)((long)puVar15 + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_3;
    puVar14[2] = 2;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 1;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101e54:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_00101e73:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102b61;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101e73;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102b61:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101e54;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 1;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 4;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101df4:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x48);
      if (uVar16 == 0) {
LAB_00101e13:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102c09;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101e13;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102c09:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x50);
      }
      *(undefined4 **)(this + 0x48) = puVar14;
      *(ulong *)(this + 0x58) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101df4;
      }
      puVar14 = *(undefined4 **)(this + 0x48);
    }
    *(ulong *)(this + 0x50) = uVar16 + 1;
    puVar14[uVar16] = 4;
  }
  uVar16 = *(ulong *)(this + 0x20);
  uVar18 = *(ulong *)(this + 0x28);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_4;
    puVar14[2] = 0xb;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x600;
      uVar21 = 0x80;
LAB_00101d83:
      puVar15 = (undefined8 *)malloc(sVar20);
      puVar17 = *(undefined8 **)(this + 0x18);
      if (uVar16 == 0) {
LAB_00101da2:
        if (puVar17 != (undefined8 *)0x0) goto LAB_00102c52;
      }
      else {
        sVar20 = uVar16 * 0xc;
        if ((long)sVar20 < 0xd) {
          if (sVar20 != 0xc) goto LAB_00101da2;
          *puVar15 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          memmove(puVar15,puVar17,sVar20);
        }
LAB_00102c52:
        free(puVar17);
        uVar16 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 0x18;
        goto LAB_00101d83;
      }
      puVar15 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)((long)puVar15 + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_4;
    puVar14[2] = 0xb;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 1;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101d24:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_00101d43:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102c9e;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101d43;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102c9e:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101d24;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 1;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 5;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101cc4:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x48);
      if (uVar16 == 0) {
LAB_00101ce3:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102cea;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101ce3;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102cea:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x50);
      }
      *(undefined4 **)(this + 0x48) = puVar14;
      *(ulong *)(this + 0x58) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101cc4;
      }
      puVar14 = *(undefined4 **)(this + 0x48);
    }
    *(ulong *)(this + 0x50) = uVar16 + 1;
    puVar14[uVar16] = 5;
  }
  uVar16 = *(ulong *)(this + 0x20);
  uVar18 = *(ulong *)(this + 0x28);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_1;
    puVar14[2] = 7;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x600;
      uVar21 = 0x80;
LAB_00101c53:
      puVar15 = (undefined8 *)malloc(sVar20);
      puVar17 = *(undefined8 **)(this + 0x18);
      if (uVar16 == 0) {
LAB_00101c72:
        if (puVar17 != (undefined8 *)0x0) goto LAB_00102e60;
      }
      else {
        sVar20 = uVar16 * 0xc;
        if ((long)sVar20 < 0xd) {
          if (sVar20 != 0xc) goto LAB_00101c72;
          *puVar15 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          memmove(puVar15,puVar17,sVar20);
        }
LAB_00102e60:
        free(puVar17);
        uVar16 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 0x18;
        goto LAB_00101c53;
      }
      puVar15 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)((long)puVar15 + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_1;
    puVar14[2] = 7;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 1;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101bf4:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_00101c13:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102eac;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101c13;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102eac:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101bf4;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 1;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 3;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101b94:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x48);
      if (uVar16 == 0) {
LAB_00101bb3:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102ef8;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101bb3;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102ef8:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x50);
      }
      *(undefined4 **)(this + 0x48) = puVar14;
      *(ulong *)(this + 0x58) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101b94;
      }
      puVar14 = *(undefined4 **)(this + 0x48);
    }
    *(ulong *)(this + 0x50) = uVar16 + 1;
    puVar14[uVar16] = 3;
  }
  uVar16 = *(ulong *)(this + 0x20);
  uVar18 = *(ulong *)(this + 0x28);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_1;
    puVar14[2] = 0;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x600;
      uVar21 = 0x80;
LAB_00101b23:
      puVar15 = (undefined8 *)malloc(sVar20);
      puVar17 = *(undefined8 **)(this + 0x18);
      if (uVar16 == 0) {
LAB_00101b42:
        if (puVar17 != (undefined8 *)0x0) goto LAB_00102f41;
      }
      else {
        sVar20 = uVar16 * 0xc;
        if ((long)sVar20 < 0xd) {
          if (sVar20 != 0xc) goto LAB_00101b42;
          *puVar15 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          memmove(puVar15,puVar17,sVar20);
        }
LAB_00102f41:
        free(puVar17);
        uVar16 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 0x18;
        goto LAB_00101b23;
      }
      puVar15 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)((long)puVar15 + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_1;
    puVar14[2] = 0;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 2;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101ad4:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_00101ae9:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102f83;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101ae9;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102f83:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101ad4;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 2;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 7;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101a84:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x48);
      if (uVar16 == 0) {
LAB_00101a99:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102fbb;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101a99;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102fbb:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x50);
      }
      *(undefined4 **)(this + 0x48) = puVar14;
      *(ulong *)(this + 0x58) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101a84;
      }
      puVar14 = *(undefined4 **)(this + 0x48);
    }
    *(ulong *)(this + 0x50) = uVar16 + 1;
    puVar14[uVar16] = 7;
  }
  uVar16 = *(ulong *)(this + 0x20);
  uVar18 = *(ulong *)(this + 0x28);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_4;
    puVar14[2] = 5;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x600;
      uVar21 = 0x80;
LAB_00101a23:
      puVar15 = (undefined8 *)malloc(sVar20);
      puVar17 = *(undefined8 **)(this + 0x18);
      if (uVar16 == 0) {
LAB_00101a38:
        if (puVar17 != (undefined8 *)0x0) goto LAB_00102ff3;
      }
      else {
        sVar20 = uVar16 * 0xc;
        if ((long)sVar20 < 0xd) {
          if (sVar20 != 0xc) goto LAB_00101a38;
          *puVar15 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          memmove(puVar15,puVar17,sVar20);
        }
LAB_00102ff3:
        free(puVar17);
        uVar16 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 0x18;
        goto LAB_00101a23;
      }
      puVar15 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)((long)puVar15 + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_4;
    puVar14[2] = 5;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 2;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_001019d4:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_001019e9:
        if (puVar4 != (undefined4 *)0x0) goto LAB_0010302b;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_001019e9;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_0010302b:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_001019d4;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 2;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 8;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101984:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x48);
      if (uVar16 == 0) {
LAB_00101999:
        if (puVar4 != (undefined4 *)0x0) goto LAB_001029a4;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101999;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_001029a4:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x50);
      }
      *(undefined4 **)(this + 0x48) = puVar14;
      *(ulong *)(this + 0x58) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101984;
      }
      puVar14 = *(undefined4 **)(this + 0x48);
    }
    *(ulong *)(this + 0x50) = uVar16 + 1;
    puVar14[uVar16] = 8;
  }
  uVar16 = *(ulong *)(this + 0x20);
  uVar18 = *(ulong *)(this + 0x28);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_2;
    puVar14[2] = 10;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x600;
      uVar21 = 0x80;
LAB_00101923:
      puVar15 = (undefined8 *)malloc(sVar20);
      puVar17 = *(undefined8 **)(this + 0x18);
      if (uVar16 == 0) {
LAB_00101938:
        if (puVar17 != (undefined8 *)0x0) goto LAB_001029dc;
      }
      else {
        sVar20 = uVar16 * 0xc;
        if ((long)sVar20 < 0xd) {
          if (sVar20 != 0xc) goto LAB_00101938;
          *puVar15 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          memmove(puVar15,puVar17,sVar20);
        }
LAB_001029dc:
        free(puVar17);
        uVar16 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 0x18;
        goto LAB_00101923;
      }
      puVar15 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)((long)puVar15 + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_2;
    puVar14[2] = 10;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 2;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_001018d4:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_001018e9:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102a14;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_001018e9;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102a14:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_001018d4;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 2;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 6;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_00101884:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x48);
      if (uVar16 == 0) {
LAB_00101899:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102a4c;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101899;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102a4c:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x50);
      }
      *(undefined4 **)(this + 0x48) = puVar14;
      *(ulong *)(this + 0x58) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_00101884;
      }
      puVar14 = *(undefined4 **)(this + 0x48);
    }
    *(ulong *)(this + 0x50) = uVar16 + 1;
    puVar14[uVar16] = 6;
  }
  uVar16 = *(ulong *)(this + 0x20);
  uVar18 = *(ulong *)(this + 0x28);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_2;
    puVar14[2] = 1;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x600;
      uVar21 = 0x80;
LAB_00101823:
      puVar15 = (undefined8 *)malloc(sVar20);
      puVar17 = *(undefined8 **)(this + 0x18);
      if (uVar16 == 0) {
LAB_00101838:
        if (puVar17 != (undefined8 *)0x0) goto LAB_001027b5;
      }
      else {
        sVar20 = uVar16 * 0xc;
        if ((long)sVar20 < 0xd) {
          if (sVar20 != 0xc) goto LAB_00101838;
          *puVar15 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          memmove(puVar15,puVar17,sVar20);
        }
LAB_001027b5:
        free(puVar17);
        uVar16 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 0x18;
        goto LAB_00101823;
      }
      puVar15 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)((long)puVar15 + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_2;
    puVar14[2] = 1;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 3;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_001017d4:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_001017e9:
        if (puVar4 != (undefined4 *)0x0) goto LAB_001027e3;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_001017e9;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_001027e3:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_001017d4;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 3;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 10;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_0010177c:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x48);
      if (uVar16 == 0) {
LAB_00101791:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102811;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101791;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102811:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x50);
      }
      *(undefined4 **)(this + 0x48) = puVar14;
      *(ulong *)(this + 0x58) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_0010177c;
      }
      puVar14 = *(undefined4 **)(this + 0x48);
    }
    *(ulong *)(this + 0x50) = uVar16 + 1;
    puVar14[uVar16] = 10;
  }
  uVar16 = *(ulong *)(this + 0x20);
  uVar18 = *(ulong *)(this + 0x28);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_4;
    puVar14[2] = 8;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x600;
      uVar21 = 0x80;
LAB_00101714:
      puVar15 = (undefined8 *)malloc(sVar20);
      puVar17 = *(undefined8 **)(this + 0x18);
      if (uVar16 == 0) {
LAB_00101729:
        if (puVar17 != (undefined8 *)0x0) goto LAB_0010283f;
      }
      else {
        sVar20 = uVar16 * 0xc;
        if ((long)sVar20 < 0xd) {
          if (sVar20 != 0xc) goto LAB_00101729;
          *puVar15 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          memmove(puVar15,puVar17,sVar20);
        }
LAB_0010283f:
        free(puVar17);
        uVar16 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 0x18;
        goto LAB_00101714;
      }
      puVar15 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)((long)puVar15 + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_4;
    puVar14[2] = 8;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 3;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_001016c4:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_001016d9:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102b99;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_001016d9;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102b99:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_001016c4;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 3;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 0xb;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_0010166c:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x48);
      if (uVar16 == 0) {
LAB_00101681:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102bc7;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_00101681;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102bc7:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x50);
      }
      *(undefined4 **)(this + 0x48) = puVar14;
      *(ulong *)(this + 0x58) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_0010166c;
      }
      puVar14 = *(undefined4 **)(this + 0x48);
    }
    *(ulong *)(this + 0x50) = uVar16 + 1;
    puVar14[uVar16] = 0xb;
  }
  uVar16 = *(ulong *)(this + 0x20);
  uVar18 = *(ulong *)(this + 0x28);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)(*(long *)(this + 0x18) + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_3;
    puVar14[2] = 4;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x600;
      uVar21 = 0x80;
LAB_00101604:
      puVar15 = (undefined8 *)malloc(sVar20);
      puVar17 = *(undefined8 **)(this + 0x18);
      if (uVar16 == 0) {
LAB_00101619:
        if (puVar17 != (undefined8 *)0x0) goto LAB_00102ad6;
      }
      else {
        sVar20 = uVar16 * 0xc;
        if ((long)sVar20 < 0xd) {
          if (sVar20 != 0xc) goto LAB_00101619;
          *puVar15 = *puVar17;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          memmove(puVar15,puVar17,sVar20);
        }
LAB_00102ad6:
        free(puVar17);
        uVar16 = *(ulong *)(this + 0x20);
      }
      *(undefined8 **)(this + 0x18) = puVar15;
      *(ulong *)(this + 0x28) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 0x18;
        goto LAB_00101604;
      }
      puVar15 = *(undefined8 **)(this + 0x18);
    }
    *(ulong *)(this + 0x20) = uVar16 + 1;
    puVar14 = (undefined4 *)((long)puVar15 + uVar16 * 0xc);
    *puVar14 = 0;
    puVar14[1] = param_3;
    puVar14[2] = 4;
  }
  uVar16 = *(ulong *)(this + 0x38);
  uVar18 = *(ulong *)(this + 0x40);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x38) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x30) + uVar16 * 4) = 3;
  }
  else {
    if (uVar18 == 0) {
      sVar20 = 0x200;
      uVar21 = 0x80;
LAB_001015b4:
      puVar14 = (undefined4 *)malloc(sVar20);
      puVar4 = *(undefined4 **)(this + 0x30);
      if (uVar16 == 0) {
LAB_001015c9:
        if (puVar4 != (undefined4 *)0x0) goto LAB_00102a7a;
      }
      else {
        sVar20 = uVar16 * 4;
        if ((long)sVar20 < 5) {
          if (sVar20 != 4) goto LAB_001015c9;
          *puVar14 = *puVar4;
        }
        else {
          memmove(puVar14,puVar4,sVar20);
        }
LAB_00102a7a:
        free(puVar4);
        uVar16 = *(ulong *)(this + 0x38);
      }
      *(undefined4 **)(this + 0x30) = puVar14;
      *(ulong *)(this + 0x40) = uVar21;
    }
    else {
      uVar21 = uVar18 * 2;
      if (uVar18 < uVar21) {
        sVar20 = uVar18 * 8;
        goto LAB_001015b4;
      }
      puVar14 = *(undefined4 **)(this + 0x30);
    }
    *(ulong *)(this + 0x38) = uVar16 + 1;
    puVar14[uVar16] = 3;
  }
  uVar16 = *(ulong *)(this + 0x50);
  uVar18 = *(ulong *)(this + 0x58);
  if (uVar16 < uVar18) {
    *(ulong *)(this + 0x50) = uVar16 + 1;
    *(undefined4 *)(*(long *)(this + 0x48) + uVar16 * 4) = 9;
    goto LAB_001013db;
  }
  if (uVar18 == 0) {
    sVar20 = 0x200;
    uVar21 = 0x80;
LAB_0010155c:
    puVar14 = (undefined4 *)malloc(sVar20);
    puVar4 = *(undefined4 **)(this + 0x48);
    if (uVar16 == 0) {
LAB_00101571:
      if (puVar4 != (undefined4 *)0x0) goto LAB_00102aa8;
    }
    else {
      sVar20 = uVar16 * 4;
      if ((long)sVar20 < 5) {
        if (sVar20 != 4) goto LAB_00101571;
        *puVar14 = *puVar4;
      }
      else {
        memmove(puVar14,puVar4,sVar20);
      }
LAB_00102aa8:
      free(puVar4);
      uVar16 = *(ulong *)(this + 0x50);
    }
    *(undefined4 **)(this + 0x48) = puVar14;
    *(ulong *)(this + 0x58) = uVar21;
  }
  else {
    uVar21 = uVar18 * 2;
    if (uVar18 < uVar21) {
      sVar20 = uVar18 * 8;
      goto LAB_0010155c;
    }
    puVar14 = *(undefined4 **)(this + 0x48);
  }
  *(ulong *)(this + 0x50) = uVar16 + 1;
  puVar14[uVar16] = 9;
LAB_001013db:
  local_44 = 0;
  std::vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>::
  emplace_back<int>((vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>
                     *)this,&local_44);
  local_44 = 3;
  std::vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>::
  emplace_back<int>((vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>
                     *)this,&local_44);
  local_44 = 6;
  std::vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>::
  emplace_back<int>((vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>
                     *)this,&local_44);
  local_44 = 9;
  std::vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>::
  emplace_back<int>((vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>
                     *)this,&local_44);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* manifold::QuickHull::setupInitialTetrahedron() */

void __thiscall manifold::QuickHull::setupInitialTetrahedron(QuickHull *this)

{
  long lVar1;
  char cVar2;
  long lVar3;
  double *pdVar4;
  double *pdVar5;
  ulong uVar6;
  void *__dest;
  void *__dest_00;
  int iVar7;
  int iVar8;
  int iVar9;
  Face *pFVar10;
  int iVar11;
  long lVar12;
  double *pdVar13;
  long lVar14;
  double *pdVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  Face *pFVar20;
  Face *pFVar21;
  size_t __size;
  double *pdVar22;
  ulong uVar23;
  Face *pFVar24;
  long lVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [12];
  
  uVar26 = *(ulong *)(this + 0x40);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (4 < uVar26) {
    dVar29 = *(double *)(this + 8);
    pdVar22 = *(double **)(this + 0x38);
    lVar12 = 0;
    lVar14 = 0;
    lVar17 = 1;
    dVar33 = dVar29;
    do {
      pdVar5 = pdVar22 + *(long *)(this + lVar17 * 8 + 0xd0) * 3;
      lVar3 = lVar17;
      do {
        pdVar13 = pdVar22 + *(long *)(this + lVar3 * 8 + 0xd8) * 3;
        dVar27 = (*pdVar5 - *pdVar13) * (*pdVar5 - *pdVar13) + 0.0 +
                 (pdVar5[1] - pdVar13[1]) * (pdVar5[1] - pdVar13[1]) +
                 (pdVar5[2] - pdVar13[2]) * (pdVar5[2] - pdVar13[2]);
        if (dVar33 < dVar27) {
          lVar12 = *(long *)(this + lVar17 * 8 + 0xd0);
          lVar14 = *(long *)(this + lVar3 * 8 + 0xd8);
          dVar33 = dVar27;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 6);
      lVar17 = lVar17 + 1;
    } while (lVar17 != 6);
    if (dVar29 == dVar33) {
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001049be;
      iVar7 = 2;
      iVar8 = 1;
      iVar11 = 0;
      iVar16 = 3;
      goto LAB_00103ab0;
    }
    uVar18 = 0;
    pdVar5 = pdVar22 + lVar12 * 3;
    uVar23 = 0xffffffffffffffff;
    pdVar13 = pdVar22 + lVar14 * 3;
    dVar33 = *pdVar5;
    dVar27 = pdVar5[1];
    dVar31 = *pdVar13;
    dVar43 = pdVar13[1];
    dVar45 = pdVar13[2];
    dVar41 = pdVar5[2];
    dVar35 = dVar31 - dVar33;
    dVar40 = dVar43 - dVar27;
    dVar32 = dVar45 - dVar41;
    pdVar5 = pdVar22;
    dVar36 = dVar29;
    do {
      dVar30 = *pdVar5 - dVar33;
      dVar28 = pdVar5[1] - dVar27;
      dVar42 = pdVar5[2] - dVar41;
      dVar44 = dVar32 * dVar42 + dVar40 * dVar28 + dVar35 * dVar30 + 0.0;
      dVar28 = (dVar42 * dVar42 + dVar28 * dVar28 + dVar30 * dVar30 + 0.0) -
               dVar44 * dVar44 *
               (_LC8 / (dVar35 * dVar35 + 0.0 + dVar40 * dVar40 + dVar32 * dVar32));
      if (dVar36 < dVar28) {
        uVar23 = uVar18;
        dVar36 = dVar28;
      }
      uVar18 = uVar18 + 1;
      pdVar5 = pdVar5 + 3;
    } while (uVar26 != uVar18);
    if (dVar29 != dVar36) {
      uVar18 = 0;
      pdVar5 = pdVar22 + uVar23 * 3;
      dVar36 = *pdVar5;
      dVar28 = pdVar5[1];
      dVar29 = pdVar5[2];
      uVar6 = 0;
      dVar42 = (dVar27 - dVar28) * (dVar45 - dVar29) - (dVar41 - dVar29) * (dVar43 - dVar28);
      dVar45 = (dVar41 - dVar29) * (dVar31 - dVar36) - (dVar45 - dVar29) * (dVar33 - dVar36);
      dVar43 = (dVar33 - dVar36) * (dVar43 - dVar28) - (dVar27 - dVar28) * (dVar31 - dVar36);
      dVar31 = SQRT(dVar42 * dVar42 + 0.0 + dVar45 * dVar45 + dVar43 * dVar43);
      dVar42 = dVar42 / dVar31;
      dVar45 = dVar45 / dVar31;
      dVar43 = dVar43 / dVar31;
      dVar30 = ((0.0 - dVar33 * dVar42) - dVar45 * dVar27) - dVar43 * dVar41;
      pdVar5 = pdVar22;
      dVar31 = *(double *)this;
      do {
        dVar44 = (double)((ulong)(pdVar5[2] * dVar43 + *pdVar5 * dVar42 + 0.0 + pdVar5[1] * dVar45 +
                                 dVar30) & _LC3);
        if (dVar31 < dVar44) {
          uVar18 = uVar6;
          dVar31 = dVar44;
        }
        uVar6 = uVar6 + 1;
        pdVar5 = pdVar5 + 3;
      } while (uVar26 != uVar6);
      if (*(double *)this == dVar31) {
        this[0x18] = (QuickHull)0x1;
        __size = uVar26 * 0x18;
        dVar31 = dVar40 * (dVar29 - dVar41) - dVar32 * (dVar28 - dVar27);
        dVar41 = dVar32 * (dVar36 - dVar33) - (dVar29 - dVar41) * dVar35;
        dVar27 = dVar35 * (dVar28 - dVar27) - dVar40 * (dVar36 - dVar33);
        dVar29 = SQRT(dVar31 * dVar31 + 0.0 + dVar41 * dVar41 + dVar27 * dVar27);
        __dest = malloc(__size);
        if (0x18 < (long)__size) {
          __dest = memmove(__dest,pdVar22,__size);
        }
        if (*(void **)(this + 0x20) != (void *)0x0) {
          free(*(void **)(this + 0x20));
          pdVar22 = *(double **)(this + 0x38);
        }
        *(void **)(this + 0x20) = __dest;
        dVar33 = dVar41 / dVar29 + pdVar22[1];
        *(ulong *)(this + 0x28) = uVar26;
        *(ulong *)(this + 0x30) = uVar26;
        dVar27 = dVar27 / dVar29 + pdVar22[2];
        dVar29 = dVar31 / dVar29 + *pdVar22;
        __dest_00 = __dest;
        if (uVar26 < uVar26 * 2) {
          __dest_00 = malloc(uVar26 * 0x30);
          if ((long)__size < 0x19) {
            if (__dest != (void *)0x0) goto LAB_00104622;
          }
          else {
            memcpy(__dest_00,__dest,__size);
LAB_00104622:
            free(__dest);
          }
          *(void **)(this + 0x20) = __dest_00;
          *(ulong *)(this + 0x30) = uVar26 * 2;
        }
        pdVar22 = (double *)(__size + (long)__dest_00);
        *(ulong *)(this + 0x28) = uVar26 + 1;
        *pdVar22 = dVar29;
        pdVar22[1] = dVar33;
        pdVar22[2] = dVar27;
        *(void **)(this + 0x38) = __dest_00;
        *(ulong *)(this + 0x40) = uVar26 + 1;
        uVar18 = uVar26;
      }
      else {
        pdVar22 = pdVar22 + uVar18 * 3;
        dVar29 = *pdVar22;
        dVar33 = pdVar22[1];
        dVar27 = pdVar22[2];
      }
      lVar17 = lVar12;
      if (0.0 <= dVar29 * dVar42 + 0.0 + dVar33 * dVar45 + dVar27 * dVar43 + dVar30) {
        lVar17 = lVar14;
        lVar14 = lVar12;
      }
      MeshBuilder::setup((MeshBuilder *)(this + 0x48),(int)lVar17,(int)lVar14,(int)uVar23,
                         (int)uVar18);
      pFVar10 = *(Face **)(this + 0x48);
      pFVar24 = *(Face **)(this + 0x50);
      if (pFVar24 != pFVar10) {
        lVar12 = *(long *)(this + 0x38);
        pFVar20 = pFVar10;
        do {
          pFVar21 = pFVar20 + 0x58;
          auVar46 = MeshBuilder::getVertexIndicesOfFace((MeshBuilder *)(this + 0x48),pFVar20);
          pdVar22 = (double *)(lVar12 + (long)auVar46._8_4_ * 0x18);
          pdVar5 = (double *)(lVar12 + (long)auVar46._0_4_ * 0x18);
          pdVar13 = (double *)(lVar12 + (auVar46._0_8_ >> 0x20) * 0x18);
          dVar33 = pdVar5[1];
          dVar27 = pdVar5[2];
          dVar29 = *pdVar5;
          dVar41 = dVar33 - pdVar22[1];
          dVar45 = *pdVar13 - *pdVar22;
          dVar31 = dVar29 - *pdVar22;
          dVar43 = pdVar13[1] - pdVar22[1];
          auVar38._0_8_ = (pdVar13[2] - pdVar22[2]) * dVar41 - (pdVar5[2] - pdVar22[2]) * dVar43;
          auVar38._8_8_ = dVar45 * (dVar27 - pdVar22[2]) - dVar31 * (pdVar13[2] - pdVar22[2]);
          dVar31 = dVar31 * dVar43 - dVar45 * dVar41;
          dVar43 = SQRT(dVar31 * dVar31 +
                        auVar38._0_8_ * auVar38._0_8_ + 0.0 + auVar38._8_8_ * auVar38._8_8_);
          dVar31 = dVar31 / dVar43;
          auVar39._8_8_ = dVar43;
          auVar39._0_8_ = dVar43;
          auVar39 = divpd(auVar38,auVar39);
          dVar36 = auVar39._0_8_;
          dVar32 = auVar39._8_8_;
          dVar43 = (double)((ulong)dVar36 ^ __LC7);
          *(undefined1 (*) [16])(pFVar20 + 8) = auVar39;
          dVar45 = (double)((ulong)dVar32 ^ __LC7);
          dVar41 = (double)((ulong)dVar31 ^ __LC7);
          *(double *)(pFVar20 + 0x28) = dVar32 * dVar32 + dVar36 * dVar36 + 0.0 + dVar31 * dVar31;
          *(double *)(pFVar20 + 0x18) = dVar31;
          *(double *)(pFVar20 + 0x20) = dVar33 * dVar45 + dVar43 * dVar29 + 0.0 + dVar41 * dVar27;
          pFVar20 = pFVar21;
        } while (pFVar24 != pFVar21);
      }
      uVar23 = 0;
      while( true ) {
        while ((pFVar24 != pFVar10 && (cVar2 = addPointToFace(this,pFVar10,uVar23), cVar2 == '\0')))
        {
          pFVar10 = pFVar10 + 0x58;
        }
        uVar23 = uVar23 + 1;
        if (uVar23 == uVar26) break;
        pFVar24 = *(Face **)(this + 0x50);
        pFVar10 = *(Face **)(this + 0x48);
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001049be;
    }
    pdVar5 = pdVar22 + uVar26 * 3;
    lVar19 = ((long)(uVar26 * 0x18) >> 3) * -0x5555555555555555 >> 2;
    lVar17 = lVar12;
    lVar3 = lVar12;
    if (0 < lVar19) {
      pdVar15 = pdVar22 + lVar19 * 0xc;
      pdVar13 = pdVar22;
      do {
        pdVar4 = pdVar13;
        if ((((dVar33 != *pdVar4) || (dVar27 != pdVar4[1])) || (dVar41 != pdVar4[2])) &&
           (((pdVar13 = pdVar4, dVar31 != *pdVar4 || (dVar43 != pdVar4[1])) || (dVar45 != pdVar4[2])
            ))) goto LAB_001038c0;
        pdVar13 = pdVar4 + 3;
        if ((((dVar33 != pdVar4[3]) || (dVar27 != pdVar4[4])) || (dVar41 != pdVar4[5])) &&
           (((dVar31 != pdVar4[3] || (dVar43 != pdVar4[4])) || (dVar45 != pdVar4[5]))))
        goto LAB_001038c0;
        pdVar13 = pdVar4 + 6;
        if ((((dVar33 != pdVar4[6]) || (dVar27 != pdVar4[7])) || (dVar41 != pdVar4[8])) &&
           (((dVar31 != pdVar4[6] || (dVar43 != pdVar4[7])) || (dVar45 != pdVar4[8]))))
        goto LAB_001038c0;
        pdVar13 = pdVar4 + 9;
        if ((((dVar33 != pdVar4[9]) || (dVar27 != pdVar4[10])) || (dVar41 != pdVar4[0xb])) &&
           (((dVar31 != pdVar4[9] || (dVar43 != pdVar4[10])) || (dVar45 != pdVar4[0xb]))))
        goto LAB_001038c0;
        pdVar13 = pdVar4 + 0xc;
      } while (pdVar13 != pdVar15);
      lVar25 = (long)pdVar5 - (long)pdVar15;
      if (lVar25 == 0x30) {
LAB_00104801:
        if ((((dVar33 == *pdVar15) && (dVar27 == pdVar15[1])) && (dVar41 == pdVar15[2])) ||
           (((pdVar13 = pdVar15, dVar31 == *pdVar15 && (dVar43 == pdVar15[1])) &&
            (dVar45 == pdVar15[2])))) {
          pdVar15 = pdVar15 + 3;
LAB_00104357:
          if ((((dVar33 == *pdVar15) && (dVar27 == pdVar15[1])) && (dVar41 == pdVar15[2])) ||
             (((pdVar13 = pdVar15, dVar31 == *pdVar15 && (dVar43 == pdVar15[1])) &&
              (dVar45 == pdVar15[2])))) goto LAB_001038e1;
        }
LAB_001038c0:
        if (pdVar5 != pdVar13) {
          lVar17 = ((long)pdVar13 - (long)pdVar22 >> 3) * -0x5555555555555555;
        }
      }
      else {
        if (lVar25 == 0x48) {
          if ((((dVar33 == *pdVar15) && (dVar27 == pdVar15[1])) && (dVar41 == pdVar15[2])) ||
             (((dVar31 == *pdVar15 && (dVar43 == pdVar4[0xd])) && (dVar45 == pdVar4[0xe])))) {
            pdVar15 = pdVar4 + 0xf;
            goto LAB_00104801;
          }
          goto LAB_001038c0;
        }
        if (lVar25 == 0x18) goto LAB_00104357;
      }
LAB_001038e1:
      pdVar15 = pdVar22 + lVar17 * 3;
      pdVar13 = pdVar22;
      do {
        pdVar4 = pdVar13;
        dVar29 = *pdVar4;
        if ((((dVar33 != dVar29) || (dVar27 != pdVar4[1])) || (dVar41 != pdVar4[2])) &&
           (((dVar31 != dVar29 || (dVar43 != pdVar4[1])) || (dVar45 != pdVar4[2])))) {
          pdVar13 = pdVar4;
          if (dVar29 != *pdVar15) goto LAB_00103a40;
          if ((pdVar4[1] != pdVar15[1]) || (pdVar4[2] != pdVar15[2])) goto LAB_00103a40;
        }
        dVar29 = pdVar4[3];
        pdVar13 = pdVar4 + 3;
        if (((dVar33 != dVar29) || ((dVar27 != pdVar4[4] || (dVar41 != pdVar4[5])))) &&
           ((dVar31 != dVar29 || ((dVar43 != pdVar4[4] || (dVar45 != pdVar4[5])))))) {
          if (dVar29 != *pdVar15) goto LAB_00103a40;
          if ((pdVar4[4] != pdVar15[1]) || (pdVar4[5] != pdVar15[2])) goto LAB_00103a40;
        }
        dVar29 = pdVar4[6];
        pdVar13 = pdVar4 + 6;
        if (((dVar33 != dVar29) || ((dVar27 != pdVar4[7] || (dVar41 != pdVar4[8])))) &&
           ((dVar31 != dVar29 || ((dVar43 != pdVar4[7] || (dVar45 != pdVar4[8])))))) {
          if (dVar29 != *pdVar15) goto LAB_00103a40;
          if ((pdVar4[7] != pdVar15[1]) || (pdVar4[8] != pdVar15[2])) goto LAB_00103a40;
        }
        dVar29 = pdVar4[9];
        pdVar13 = pdVar4 + 9;
        if (((dVar33 != dVar29) || ((dVar27 != pdVar4[10] || (dVar41 != pdVar4[0xb])))) &&
           ((dVar31 != dVar29 || ((dVar43 != pdVar4[10] || (dVar45 != pdVar4[0xb])))))) {
          if (dVar29 != *pdVar15) goto LAB_00103a40;
          if ((pdVar4[10] != pdVar15[1]) || (pdVar4[0xb] != pdVar15[2])) goto LAB_00103a40;
        }
        pdVar13 = pdVar4 + 0xc;
      } while (pdVar22 + lVar19 * 0xc != pdVar13);
      lVar19 = (long)pdVar5 - (long)pdVar13;
      if (lVar19 == 0x30) {
LAB_00104773:
        dVar29 = *pdVar13;
        if ((((dVar33 == dVar29) && (dVar27 == pdVar13[1])) && (dVar41 == pdVar13[2])) ||
           ((((dVar31 == dVar29 && (dVar43 == pdVar13[1])) && (dVar45 == pdVar13[2])) ||
            (((pdVar15 = pdVar22 + lVar17 * 3, dVar29 == *pdVar15 && (pdVar13[1] == pdVar15[1])) &&
             (pdVar13[2] == pdVar15[2])))))) {
          pdVar13 = pdVar13 + 3;
LAB_0010469e:
          dVar29 = *pdVar13;
          if (((((dVar33 == dVar29) && (dVar27 == pdVar13[1])) && (dVar41 == pdVar13[2])) ||
              (((dVar31 == dVar29 && (dVar43 == pdVar13[1])) && (dVar45 == pdVar13[2])))) ||
             (((pdVar15 = pdVar22 + lVar17 * 3, dVar29 == *pdVar15 && (pdVar13[1] == pdVar15[1])) &&
              (pdVar13[2] == pdVar15[2])))) goto LAB_00103a61;
        }
      }
      else {
        if (lVar19 != 0x48) {
          if (lVar19 != 0x18) goto LAB_00103a61;
          goto LAB_0010469e;
        }
        dVar29 = *pdVar13;
        if (((((dVar33 == dVar29) && (dVar27 == pdVar4[0xd])) && (dVar41 == pdVar4[0xe])) ||
            (((dVar31 == dVar29 && (dVar43 == pdVar4[0xd])) && (dVar45 == pdVar4[0xe])))) ||
           (((pdVar15 = pdVar22 + lVar17 * 3, dVar29 == *pdVar15 && (pdVar4[0xd] == pdVar15[1])) &&
            (pdVar4[0xe] == pdVar15[2])))) {
          pdVar13 = pdVar4 + 0xf;
          goto LAB_00104773;
        }
      }
LAB_00103a40:
      if (pdVar5 != pdVar13) {
        lVar3 = ((long)pdVar13 - (long)pdVar22 >> 3) * -0x5555555555555555;
      }
    }
LAB_00103a61:
    iVar16 = (int)lVar3;
    iVar7 = (int)lVar17;
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001049be;
    iVar8 = (int)lVar14;
    iVar11 = (int)lVar12;
    goto LAB_00103ab0;
  }
  uVar26 = uVar26 - 1;
  if (uVar26 == 0) {
    lVar12 = 0;
    lVar14 = 0;
    iVar9 = 0;
    iVar7 = 0;
LAB_00103bb8:
    uVar23 = 3;
    if (uVar26 < 4) {
      uVar23 = uVar26;
    }
    iVar16 = (int)uVar23;
    lVar17 = uVar23 * 0x18;
  }
  else {
    iVar9 = 1;
    if (uVar26 != 1) {
      iVar7 = 2;
      lVar12 = 0x18;
      lVar14 = 0x30;
      goto LAB_00103bb8;
    }
    lVar17 = 0x18;
    lVar12 = 0x18;
    lVar14 = 0x18;
    iVar7 = 1;
    iVar16 = 1;
  }
  pdVar22 = *(double **)(this + 0x38);
  pdVar13 = (double *)(lVar12 + (long)pdVar22);
  pdVar15 = (double *)(lVar14 + (long)pdVar22);
  pdVar5 = (double *)((long)pdVar22 + lVar17);
  dVar31 = pdVar22[1] - pdVar15[1];
  dVar29 = pdVar13[1] - pdVar15[1];
  dVar27 = *pdVar22 - *pdVar15;
  dVar33 = *pdVar13 - *pdVar15;
  auVar37._0_8_ = (pdVar13[2] - pdVar15[2]) * dVar31 - (pdVar22[2] - pdVar15[2]) * dVar29;
  auVar37._8_8_ = dVar33 * (pdVar22[2] - pdVar15[2]) - dVar27 * (pdVar13[2] - pdVar15[2]);
  dVar33 = dVar29 * dVar27 - dVar33 * dVar31;
  dVar29 = SQRT(auVar37._0_8_ * auVar37._0_8_ + 0.0 + auVar37._8_8_ * auVar37._8_8_ +
                dVar33 * dVar33);
  auVar34._8_8_ = dVar29;
  auVar34._0_8_ = dVar29;
  auVar39 = divpd(auVar37,auVar34);
  iVar11 = 0;
  iVar8 = iVar9;
  if (0.0 <= *pdVar5 * auVar39._0_8_ + 0.0 + pdVar5[1] * auVar39._8_8_ +
             pdVar5[2] * (dVar33 / dVar29) +
             (((0.0 - *pdVar22 * auVar39._0_8_) - auVar39._8_8_ * pdVar22[1]) -
             (dVar33 / dVar29) * pdVar22[2])) {
    iVar8 = 0;
    iVar11 = iVar9;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001049be:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00103ab0:
  MeshBuilder::setup((MeshBuilder *)(this + 0x48),iVar11,iVar8,iVar7,iVar16);
  return;
}



/* manifold::QuickHull::createConvexHalfedgeMesh() */

void __thiscall manifold::QuickHull::createConvexHalfedgeMesh(QuickHull *this)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  byte *pbVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char cVar23;
  uint uVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 uVar27;
  void *__dest;
  undefined8 *puVar28;
  void *pvVar29;
  int *piVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  long lVar34;
  undefined8 *puVar35;
  ulong uVar36;
  long lVar37;
  long *plVar38;
  size_t sVar39;
  long lVar40;
  void *pvVar41;
  long lVar42;
  ulong uVar43;
  int iVar44;
  undefined4 uVar45;
  long lVar46;
  undefined4 *puVar47;
  int *piVar48;
  ulong uVar49;
  long *plVar50;
  long *plVar51;
  long in_FS_OFFSET;
  bool bVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  undefined4 local_d8;
  long local_c8;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar27 = 0;
  *(undefined8 *)(this + 0x148) = 0;
  if (*(void **)(this + 0x140) != (void *)0x0) {
    free(*(void **)(this + 0x140));
    uVar27 = *(undefined8 *)(this + 0x148);
  }
  *(undefined8 *)(this + 0x150) = uVar27;
  uVar27 = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  if (*(void **)(this + 0x158) != (void *)0x0) {
    free(*(void **)(this + 0x158));
    uVar27 = *(undefined8 *)(this + 0x160);
  }
  *(undefined8 *)(this + 0x168) = uVar27;
  uVar27 = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  if (*(void **)(this + 0x170) != (void *)0x0) {
    free(*(void **)(this + 0x170));
    uVar27 = *(undefined8 *)(this + 0x178);
  }
  *(undefined8 *)(this + 0x180) = uVar27;
  *(undefined8 *)(this + 0x170) = 0;
  setupInitialTetrahedron(this);
  uVar27 = *(undefined8 *)(this + 0x1c0);
  lVar46 = *(long *)(this + 0x1c8);
  uVar21 = *(undefined8 *)(this + 0x1b0);
  uVar22 = *(undefined8 *)(this + 0x1b8);
  lVar34 = *(long *)(this + 0x1e8);
  for (puVar33 = (undefined8 *)(lVar46 + 8); puVar33 < (undefined8 *)(lVar34 + 8U);
      puVar33 = puVar33 + 1) {
    operator_delete((void *)*puVar33,0x200);
  }
  *(undefined8 *)(this + 0x1d0) = uVar21;
  *(undefined8 *)(this + 0x1d8) = uVar22;
  lVar37 = 0;
  lVar34 = 0;
  *(undefined8 *)(this + 0x1e0) = uVar27;
  *(long *)(this + 0x1e8) = lVar46;
  do {
    lVar46 = *(long *)(this + 0x48);
    lVar40 = *(long *)(lVar46 + lVar37 + 0x50);
    if ((lVar40 != 0) && (*(long *)(lVar40 + 8) != 0)) {
      local_58 = (long *)CONCAT44(local_58._4_4_,(int)lVar34);
      std::deque<int,std::allocator<int>>::emplace_back<int>
                ((deque<int,std::allocator<int>> *)(this + 0x1a0),(int *)&local_58);
      pbVar5 = (byte *)(lVar46 + lVar37 + 0x48);
      *pbVar5 = *pbVar5 | 2;
    }
    lVar34 = lVar34 + 1;
    lVar37 = lVar37 + 0x58;
  } while (lVar34 != 4);
  local_c8 = 0;
  piVar30 = *(int **)(this + 0x1b0);
  if (*(int **)(this + 0x1d0) != piVar30) {
LAB_00104bb4:
    do {
      lVar34 = local_c8 + 1;
      iVar44 = *piVar30;
      local_c8 = 0;
      if (lVar34 != -1) {
        local_c8 = lVar34;
      }
      if (piVar30 == (int *)(*(long *)(this + 0x1c0) + -4)) {
        operator_delete(*(void **)(this + 0x1b8),0x200);
        piVar30 = *(int **)(*(long *)(this + 0x1c8) + 8);
        *(long *)(this + 0x1c8) = *(long *)(this + 0x1c8) + 8;
        *(int **)(this + 0x1b8) = piVar30;
        *(int **)(this + 0x1c0) = piVar30 + 0x80;
      }
      else {
        piVar30 = piVar30 + 1;
      }
      *(int **)(this + 0x1b0) = piVar30;
      piVar1 = (int *)(*(long *)(this + 0x48) + (long)iVar44 * 0x58);
      *(byte *)(piVar1 + 0x12) = *(byte *)(piVar1 + 0x12) & 0xfd;
      if ((*(long *)(piVar1 + 0x14) == 0) || (*piVar1 == -1)) goto LAB_00104ba0;
      lVar34 = *(long *)(piVar1 + 0xe);
      *(undefined8 *)(this + 0x160) = 0;
      pdVar2 = (double *)(*(long *)(this + 0x38) + lVar34 * 0x18);
      uVar27 = 0;
      if (*(void **)(this + 0x158) != (void *)0x0) {
        free(*(void **)(this + 0x158));
        uVar27 = *(undefined8 *)(this + 0x160);
      }
      uVar25 = 0;
      *(undefined8 *)(this + 0x158) = 0;
      *(undefined8 *)(this + 0x168) = uVar27;
      *(undefined8 *)(this + 0x178) = 0;
      if (*(void **)(this + 0x170) != (void *)0x0) {
        free(*(void **)(this + 0x170));
        uVar25 = *(ulong *)(this + 0x178);
      }
      *(undefined8 *)(this + 0x170) = 0;
      *(ulong *)(this + 0x180) = uVar25;
      *(undefined8 *)(this + 0x148) = 0;
      if (*(void **)(this + 0x140) == (void *)0x0) {
        *(undefined8 *)(this + 0x150) = 0;
        uVar32 = uVar25;
LAB_0010611b:
        if (uVar25 == 0) {
          sVar39 = 0x400;
          uVar49 = 0x80;
        }
        else {
          uVar49 = uVar25 * 2;
          if (uVar49 <= uVar25) {
            puVar33 = *(undefined8 **)(this + 0x170);
            goto LAB_00106138;
          }
          sVar39 = uVar25 << 4;
        }
        puVar33 = (undefined8 *)malloc(sVar39);
        puVar28 = *(undefined8 **)(this + 0x170);
        if (uVar32 == 0) {
LAB_001062f5:
          if (puVar28 == (undefined8 *)0x0) {
            *(undefined8 **)(this + 0x170) = puVar33;
            *(ulong *)(this + 0x180) = uVar49;
            goto LAB_00106138;
          }
        }
        else {
          sVar39 = uVar32 * 8;
          if ((long)sVar39 < 9) {
            if (sVar39 != 8) goto LAB_001062f5;
            *puVar33 = *puVar28;
          }
          else {
            puVar33 = (undefined8 *)memmove(puVar33,puVar28,sVar39);
          }
        }
        free(puVar28);
        *(ulong *)(this + 0x180) = uVar49;
        uVar32 = *(ulong *)(this + 0x178);
        *(undefined8 **)(this + 0x170) = puVar33;
LAB_00106138:
        uVar25 = uVar32 + 1;
        *(ulong *)(this + 0x178) = uVar25;
        *(int *)(puVar33 + uVar32) = iVar44;
        *(int *)((long)(puVar33 + uVar32) + 4) = -1;
        goto joined_r0x00106153;
      }
      free(*(void **)(this + 0x140));
      uVar32 = *(ulong *)(this + 0x178);
      *(undefined8 *)(this + 0x140) = 0;
      uVar25 = *(ulong *)(this + 0x180);
      *(undefined8 *)(this + 0x150) = *(undefined8 *)(this + 0x148);
      if (uVar25 <= uVar32) goto LAB_0010611b;
      uVar25 = uVar32 + 1;
      *(ulong *)(this + 0x178) = uVar25;
      piVar30 = (int *)(*(long *)(this + 0x170) + uVar32 * 8);
      *piVar30 = iVar44;
      piVar30[1] = -1;
      do {
        puVar33 = *(undefined8 **)(this + 0x170);
        sVar39 = uVar25 * 8;
        uVar32 = uVar25 - 1;
        lVar46 = puVar33[uVar25 - 1];
        if (*(ulong *)(this + 0x180) < uVar32) {
          puVar28 = (undefined8 *)malloc(uVar32 * 8);
          if ((long)sVar39 < 9) {
            if (sVar39 == 8) {
              *puVar28 = *puVar33;
              goto LAB_00104faa;
            }
            if (puVar33 != (undefined8 *)0x0) goto LAB_00104faa;
          }
          else {
            puVar28 = (undefined8 *)memmove(puVar28,puVar33,sVar39);
LAB_00104faa:
            free(puVar33);
          }
          puVar33 = puVar28;
          uVar49 = *(ulong *)(this + 0x178);
          *(undefined8 **)(this + 0x170) = puVar33;
          *(ulong *)(this + 0x180) = uVar32;
          if (uVar49 < uVar32) goto LAB_00104eb0;
LAB_00104ef8:
          *(ulong *)(this + 0x178) = uVar32;
          if (uVar32 * 2 < uVar25) {
LAB_00104f08:
            sVar39 = uVar32 * 8;
            puVar28 = (undefined8 *)malloc(sVar39);
            puVar33 = *(undefined8 **)(this + 0x170);
            if ((long)sVar39 < 9) {
              if (sVar39 != 8) goto LAB_00104e52;
              *puVar28 = *puVar33;
            }
            else {
              memmove(puVar28,puVar33,sVar39);
            }
LAB_00104f3c:
            free(puVar33);
LAB_00104e5b:
            *(undefined8 **)(this + 0x170) = puVar28;
            *(undefined8 *)(this + 0x180) = *(undefined8 *)(this + 0x178);
          }
        }
        else {
          uVar49 = *(ulong *)(this + 0x178);
          if (uVar49 < uVar32) {
LAB_00104eb0:
            puVar28 = puVar33 + uVar32;
            puVar33 = puVar33 + uVar49;
            if (puVar28 != puVar33) {
              if (((int)puVar28 - (int)puVar33 & 8U) != 0) {
                *puVar33 = 0;
                puVar33 = puVar33 + 1;
                if (puVar28 == puVar33) goto LAB_00104ef8;
              }
              do {
                *puVar33 = 0;
                puVar35 = puVar33 + 2;
                puVar33[1] = 0;
                puVar33 = puVar35;
              } while (puVar28 != puVar35);
            }
            goto LAB_00104ef8;
          }
          *(ulong *)(this + 0x178) = uVar32;
          if (uVar32 * 2 < uVar25) {
            if (uVar32 != 0) goto LAB_00104f08;
            puVar28 = (undefined8 *)0x0;
LAB_00104e52:
            if (puVar33 != (undefined8 *)0x0) goto LAB_00104f3c;
            goto LAB_00104e5b;
          }
        }
        lVar40 = (long)(int)lVar46;
        lVar37 = *(long *)(this + 0x48);
        piVar30 = (int *)(lVar37 + lVar40 * 0x58);
        iVar44 = (int)((ulong)lVar46 >> 0x20);
        if (*(long *)(piVar30 + 0x10) == local_c8) {
          if ((*(byte *)(piVar30 + 0x12) & 1) == 0) {
LAB_00104d64:
            *(byte *)(piVar30 + 0x12) = *(byte *)(piVar30 + 0x12) & 0xfe;
            uVar25 = *(ulong *)(this + 0x160);
            uVar32 = *(ulong *)(this + 0x168);
            lVar46 = lVar46 >> 0x20;
            if (uVar25 < uVar32) {
              *(ulong *)(this + 0x160) = uVar25 + 1;
              *(long *)(*(long *)(this + 0x158) + uVar25 * 8) = lVar46;
            }
            else {
              if (uVar32 == 0) {
                sVar39 = 0x400;
                uVar49 = 0x80;
LAB_00105028:
                puVar33 = (undefined8 *)malloc(sVar39);
                puVar28 = *(undefined8 **)(this + 0x158);
                if (uVar25 == 0) {
LAB_0010504a:
                  if (puVar28 != (undefined8 *)0x0) goto LAB_001060e1;
                }
                else {
                  sVar39 = uVar25 * 8;
                  if ((long)sVar39 < 9) {
                    if (sVar39 != 8) goto LAB_0010504a;
                    *puVar33 = *puVar28;
                  }
                  else {
                    puVar33 = (undefined8 *)memmove(puVar33,puVar28,sVar39);
                  }
LAB_001060e1:
                  free(puVar28);
                  uVar25 = *(ulong *)(this + 0x160);
                  lVar37 = *(long *)(this + 0x48);
                }
                *(undefined8 **)(this + 0x158) = puVar33;
                *(ulong *)(this + 0x168) = uVar49;
              }
              else {
                uVar49 = uVar32 * 2;
                if (uVar32 < uVar49) {
                  sVar39 = uVar32 << 4;
                  goto LAB_00105028;
                }
                puVar33 = *(undefined8 **)(this + 0x158);
              }
              *(ulong *)(this + 0x160) = uVar25 + 1;
              puVar33[uVar25] = lVar46;
            }
            piVar30 = (int *)(lVar37 + (long)*(int *)(*(long *)(this + 0x78) + lVar46 * 4) * 0x58);
            uVar24 = 1;
            if (iVar44 != *piVar30) {
              bVar52 = *(int *)(*(long *)(this + 0x90) + (long)*piVar30 * 4) != iVar44;
              uVar24 = bVar52 + 2 + (uint)bVar52;
            }
            *(byte *)(piVar30 + 0x12) =
                 *(byte *)(piVar30 + 0x12) & 0xe3 |
                 (byte)(((uVar24 | *(byte *)(piVar30 + 0x12) >> 2) & 7) << 2);
          }
        }
        else {
          dVar54 = *pdVar2;
          dVar53 = pdVar2[1];
          *(long *)(piVar30 + 0x10) = local_c8;
          if (*(double *)(piVar30 + 2) * dVar54 + 0.0 + *(double *)(piVar30 + 4) * dVar53 +
              pdVar2[2] * *(double *)(piVar30 + 6) + *(double *)(piVar30 + 8) <= 0.0)
          goto LAB_00104d64;
          uVar25 = *(ulong *)(this + 0x148);
          *(byte *)(piVar30 + 0x12) = *(byte *)(piVar30 + 0x12) & 0xe2 | 1;
          uVar32 = *(ulong *)(this + 0x150);
          if (uVar25 < uVar32) {
            *(ulong *)(this + 0x148) = uVar25 + 1;
            *(long *)(*(long *)(this + 0x140) + uVar25 * 8) = lVar40;
          }
          else {
            if (uVar32 == 0) {
              sVar39 = 0x400;
              uVar49 = 0x80;
LAB_00106371:
              puVar33 = (undefined8 *)malloc(sVar39);
              puVar28 = *(undefined8 **)(this + 0x140);
              if (uVar25 == 0) {
LAB_00106393:
                if (puVar28 != (undefined8 *)0x0) goto LAB_00106717;
              }
              else {
                sVar39 = uVar25 * 8;
                if ((long)sVar39 < 9) {
                  if (sVar39 != 8) goto LAB_00106393;
                  *puVar33 = *puVar28;
                }
                else {
                  puVar33 = (undefined8 *)memmove(puVar33,puVar28,sVar39);
                }
LAB_00106717:
                free(puVar28);
                uVar25 = *(ulong *)(this + 0x148);
              }
              *(undefined8 **)(this + 0x140) = puVar33;
              *(ulong *)(this + 0x150) = uVar49;
            }
            else {
              uVar49 = uVar32 * 2;
              if (uVar32 < uVar49) {
                sVar39 = uVar32 << 4;
                goto LAB_00106371;
              }
              puVar33 = *(undefined8 **)(this + 0x140);
            }
            *(ulong *)(this + 0x148) = uVar25 + 1;
            puVar33[uVar25] = lVar40;
          }
          piVar48 = (int *)&local_50;
          iVar8 = *(int *)(*(long *)(this + 0x90) + (long)*piVar30 * 4);
          local_48 = *(undefined4 *)(*(long *)(this + 0x90) + (long)iVar8 * 4);
          local_50 = CONCAT44(iVar8,*piVar30);
          do {
            iVar8 = *(int *)(*(long *)(this + 0x60) + (long)*piVar48 * 0xc + 8);
            if (iVar8 != iVar44) {
              uVar25 = *(ulong *)(this + 0x178);
              uVar32 = *(ulong *)(this + 0x180);
              uVar27 = CONCAT44(*piVar48,*(undefined4 *)(*(long *)(this + 0x78) + (long)iVar8 * 4));
              if (uVar25 < uVar32) {
                *(ulong *)(this + 0x178) = uVar25 + 1;
                *(undefined8 *)(*(long *)(this + 0x170) + uVar25 * 8) = uVar27;
              }
              else {
                if (uVar32 == 0) {
                  sVar39 = 0x400;
                  uVar49 = 0x80;
LAB_0010631c:
                  puVar33 = (undefined8 *)malloc(sVar39);
                  puVar28 = *(undefined8 **)(this + 0x170);
                  if (uVar25 == 0) {
LAB_0010634a:
                    if (puVar28 != (undefined8 *)0x0) goto LAB_0010666d;
                  }
                  else {
                    sVar39 = uVar25 * 8;
                    if ((long)sVar39 < 9) {
                      if (sVar39 != 8) goto LAB_0010634a;
                      *puVar33 = *puVar28;
                    }
                    else {
                      puVar33 = (undefined8 *)memmove(puVar33,puVar28,sVar39);
                    }
LAB_0010666d:
                    free(puVar28);
                    uVar25 = *(ulong *)(this + 0x178);
                  }
                  *(undefined8 **)(this + 0x170) = puVar33;
                  *(ulong *)(this + 0x180) = uVar49;
                }
                else {
                  uVar49 = uVar32 * 2;
                  if (uVar32 < uVar49) {
                    sVar39 = uVar32 << 4;
                    goto LAB_0010631c;
                  }
                  puVar33 = *(undefined8 **)(this + 0x170);
                }
                *(ulong *)(this + 0x178) = uVar25 + 1;
                puVar33[uVar25] = uVar27;
              }
            }
            piVar48 = piVar48 + 1;
          } while (&local_44 != piVar48);
        }
        uVar25 = *(ulong *)(this + 0x178);
joined_r0x00106153:
      } while (uVar25 != 0);
      lVar46 = *(long *)(this + 0x160);
      cVar23 = reorderHorizonEdges(this,(VecView *)(this + 0x158));
      if (cVar23 != '\0') {
        uVar27 = 0;
        *(undefined8 *)(this + 0x118) = 0;
        if (*(void **)(this + 0x110) != (void *)0x0) {
          free(*(void **)(this + 0x110));
          uVar27 = *(undefined8 *)(this + 0x118);
        }
        *(undefined8 *)(this + 0x120) = uVar27;
        uVar27 = 0;
        *(undefined8 *)(this + 0x110) = 0;
        *(undefined8 *)(this + 0x130) = 0;
        if (*(void **)(this + 0x128) != (void *)0x0) {
          free(*(void **)(this + 0x128));
          uVar27 = *(undefined8 *)(this + 0x130);
        }
        *(undefined8 *)(this + 0x138) = uVar27;
        puVar33 = *(undefined8 **)(this + 0x188);
        puVar28 = *(undefined8 **)(this + 400);
        *(undefined8 *)(this + 0x128) = 0;
        puVar35 = puVar33;
        if (puVar33 != puVar28) {
          do {
            puVar9 = (undefined8 *)*puVar35;
            if (puVar9 != (undefined8 *)0x0) {
              if ((void *)*puVar9 != (void *)0x0) {
                free((void *)*puVar9);
              }
              operator_delete(puVar9,0x18);
            }
            puVar35 = puVar35 + 1;
          } while (puVar28 != puVar35);
          *(undefined8 **)(this + 400) = puVar33;
        }
        plVar51 = *(long **)(this + 0x140);
        plVar38 = plVar51 + *(long *)(this + 0x148);
        uVar25 = lVar46 * 2;
        if (plVar38 == plVar51) {
          uVar32 = uVar25;
          if (uVar25 != 0) goto LAB_001063c0;
        }
        else {
          uVar49 = 0;
          do {
            lVar37 = *plVar51;
            lVar40 = 0;
            piVar30 = (int *)(*(long *)(this + 0x48) + lVar37 * 0x58);
            iVar44 = *(int *)(*(long *)(this + 0x90) + (long)*piVar30 * 4);
            local_48 = *(undefined4 *)(*(long *)(this + 0x90) + (long)iVar44 * 4);
            local_50 = CONCAT44(iVar44,*piVar30);
            do {
              if (((*(byte *)(piVar30 + 0x12) >> 2 & 7) >> ((uint)lVar40 & 0x1f) & 1) == 0) {
                lVar42 = (long)*(int *)((long)&local_50 + lVar40 * 4);
                if (uVar49 < uVar25) {
                  uVar32 = *(ulong *)(this + 0x130);
                  uVar31 = *(ulong *)(this + 0x138);
                  if (uVar32 < uVar31) {
                    *(ulong *)(this + 0x130) = uVar32 + 1;
                    *(long *)(*(long *)(this + 0x128) + uVar32 * 8) = lVar42;
                  }
                  else {
                    if (uVar31 == 0) {
                      sVar39 = 0x400;
                      uVar43 = 0x80;
LAB_00105ead:
                      puVar33 = (undefined8 *)malloc(sVar39);
                      puVar28 = *(undefined8 **)(this + 0x128);
                      if (uVar32 == 0) {
LAB_00105ef3:
                        if (puVar28 == (undefined8 *)0x0) {
                          *(undefined8 **)(this + 0x128) = puVar33;
                          *(ulong *)(this + 0x138) = uVar43;
                          goto LAB_001058c8;
                        }
                      }
                      else {
                        sVar39 = uVar32 * 8;
                        if ((long)sVar39 < 9) {
                          if (sVar39 != 8) goto LAB_00105ef3;
                          *puVar33 = *puVar28;
                        }
                        else {
                          puVar33 = (undefined8 *)memmove(puVar33,puVar28,sVar39);
                        }
                      }
                      free(puVar28);
                      uVar32 = *(ulong *)(this + 0x130);
                      *(undefined8 **)(this + 0x128) = puVar33;
                      *(ulong *)(this + 0x138) = uVar43;
                    }
                    else {
                      uVar43 = uVar31 * 2;
                      if (uVar31 < uVar43) {
                        sVar39 = uVar31 << 4;
                        goto LAB_00105ead;
                      }
                      puVar33 = *(undefined8 **)(this + 0x128);
                    }
LAB_001058c8:
                    *(ulong *)(this + 0x130) = uVar32 + 1;
                    puVar33[uVar32] = lVar42;
                  }
                  uVar49 = uVar49 + 1;
                }
                else {
                  uVar32 = *(ulong *)(this + 200);
                  *(undefined4 *)(*(long *)(this + 0x60) + lVar42 * 0xc + 8) = 0xffffffff;
                  uVar31 = *(ulong *)(this + 0xd0);
                  if (uVar32 < uVar31) {
                    *(ulong *)(this + 200) = uVar32 + 1;
                    *(long *)(*(long *)(this + 0xc0) + uVar32 * 8) = lVar42;
                    goto LAB_0010545e;
                  }
                  if (uVar31 == 0) {
                    sVar39 = 0x400;
                    uVar43 = 0x80;
LAB_00105fa8:
                    puVar33 = (undefined8 *)malloc(sVar39);
                    puVar28 = *(undefined8 **)(this + 0xc0);
                    if (uVar32 == 0) {
LAB_00105fee:
                      if (puVar28 == (undefined8 *)0x0) {
                        *(undefined8 **)(this + 0xc0) = puVar33;
                        *(ulong *)(this + 0xd0) = uVar43;
                        goto LAB_00105897;
                      }
                    }
                    else {
                      sVar39 = uVar32 * 8;
                      if ((long)sVar39 < 9) {
                        if (sVar39 != 8) goto LAB_00105fee;
                        *puVar33 = *puVar28;
                      }
                      else {
                        puVar33 = (undefined8 *)memmove(puVar33,puVar28,sVar39);
                      }
                    }
                    free(puVar28);
                    uVar32 = *(ulong *)(this + 200);
                    *(undefined8 **)(this + 0xc0) = puVar33;
                    *(ulong *)(this + 0xd0) = uVar43;
                  }
                  else {
                    uVar43 = uVar31 * 2;
                    if (uVar31 < uVar43) {
                      sVar39 = uVar31 << 4;
                      goto LAB_00105fa8;
                    }
                    puVar33 = *(undefined8 **)(this + 0xc0);
                  }
LAB_00105897:
                  *(ulong *)(this + 200) = uVar32 + 1;
                  puVar33[uVar32] = lVar42;
                }
              }
LAB_0010545e:
              lVar40 = lVar40 + 1;
            } while (lVar40 != 3);
            uVar32 = *(ulong *)(this + 0xb0);
            uVar31 = *(ulong *)(this + 0xb8);
            puVar47 = (undefined4 *)(lVar37 * 0x58 + *(long *)(this + 0x48));
            *puVar47 = 0xffffffff;
            if (uVar32 < uVar31) {
              *(ulong *)(this + 0xb0) = uVar32 + 1;
              *(long *)(*(long *)(this + 0xa8) + uVar32 * 8) = lVar37;
            }
            else {
              if (uVar31 == 0) {
                sVar39 = 0x400;
                uVar43 = 0x80;
LAB_001058e7:
                puVar33 = (undefined8 *)malloc(sVar39);
                puVar28 = *(undefined8 **)(this + 0xa8);
                if (uVar32 == 0) {
LAB_0010591d:
                  if (puVar28 != (undefined8 *)0x0) goto LAB_001061ef;
                }
                else {
                  sVar39 = uVar32 * 8;
                  if ((long)sVar39 < 9) {
                    if (sVar39 != 8) goto LAB_0010591d;
                    *puVar33 = *puVar28;
                  }
                  else {
                    memmove(puVar33,puVar28,sVar39);
                  }
LAB_001061ef:
                  free(puVar28);
                  uVar32 = *(ulong *)(this + 0xb0);
                }
                *(undefined8 **)(this + 0xa8) = puVar33;
                *(ulong *)(this + 0xb8) = uVar43;
              }
              else {
                uVar43 = uVar31 * 2;
                if (uVar31 < uVar43) {
                  sVar39 = uVar31 << 4;
                  goto LAB_001058e7;
                }
                puVar33 = *(undefined8 **)(this + 0xa8);
              }
              *(ulong *)(this + 0xb0) = uVar32 + 1;
              puVar33[uVar32] = lVar37;
            }
            local_58 = *(long **)(puVar47 + 0x14);
            *(undefined8 *)(puVar47 + 0x14) = 0;
            if (local_58 != (long *)0x0) {
              puVar33 = *(undefined8 **)(this + 400);
              if (puVar33 == *(undefined8 **)(this + 0x198)) {
                std::
                vector<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>,std::allocator<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>>
                ::
                _M_realloc_insert<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>
                          ((vector<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>,std::allocator<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>>
                            *)(this + 0x188),puVar33,&local_58);
                plVar14 = local_58;
                if (local_58 != (long *)0x0) {
                  if ((void *)*local_58 != (void *)0x0) {
                    free((void *)*local_58);
                  }
                  operator_delete(plVar14,0x18);
                }
              }
              else {
                *puVar33 = local_58;
                *(undefined8 **)(this + 400) = puVar33 + 1;
              }
            }
            plVar51 = plVar51 + 1;
          } while (plVar38 != plVar51);
          uVar32 = uVar25 - uVar49;
          if (uVar49 < uVar25) {
LAB_001063c0:
            uVar49 = 0;
            do {
              while( true ) {
                uVar27 = MeshBuilder::addHalfedge((MeshBuilder *)(this + 0x48));
                uVar31 = *(ulong *)(this + 0x130);
                uVar43 = *(ulong *)(this + 0x138);
                if (uVar31 < uVar43) break;
                if (uVar43 == 0) {
                  sVar39 = 0x400;
                  uVar36 = 0x80;
LAB_00106467:
                  puVar33 = (undefined8 *)malloc(sVar39);
                  puVar28 = *(undefined8 **)(this + 0x128);
                  if (uVar31 == 0) {
LAB_00106489:
                    if (puVar28 == (undefined8 *)0x0) {
                      *(undefined8 **)(this + 0x128) = puVar33;
                      *(ulong *)(this + 0x138) = uVar36;
                      goto LAB_00106433;
                    }
                  }
                  else {
                    sVar39 = uVar31 * 8;
                    if ((long)sVar39 < 9) {
                      if (sVar39 != 8) goto LAB_00106489;
                      *puVar33 = *puVar28;
                    }
                    else {
                      memmove(puVar33,puVar28,sVar39);
                    }
                  }
                  free(puVar28);
                  *(undefined8 **)(this + 0x128) = puVar33;
                  uVar31 = *(ulong *)(this + 0x130);
                  *(ulong *)(this + 0x138) = uVar36;
                }
                else {
                  uVar36 = uVar43 * 2;
                  if (uVar43 < uVar36) {
                    sVar39 = uVar43 << 4;
                    goto LAB_00106467;
                  }
                  puVar33 = *(undefined8 **)(this + 0x128);
                }
LAB_00106433:
                uVar49 = uVar49 + 1;
                *(ulong *)(this + 0x130) = uVar31 + 1;
                puVar33[uVar31] = uVar27;
                if (uVar49 == uVar32) goto LAB_0010550e;
              }
              uVar49 = uVar49 + 1;
              *(ulong *)(this + 0x130) = uVar31 + 1;
              *(undefined8 *)(*(long *)(this + 0x128) + uVar31 * 8) = uVar27;
            } while (uVar49 != uVar32);
          }
        }
LAB_0010550e:
        if (lVar46 != 0) {
          local_d8 = (undefined4)lVar34;
          lVar37 = *(long *)(this + 0x60);
          lVar40 = 0;
          do {
            lVar13 = *(long *)(*(long *)(this + 0x158) + lVar40 * 8);
            lVar42 = lVar37 + lVar13 * 0xc;
            iVar44 = *(int *)(lVar42 + 4);
            iVar8 = *(int *)(lVar37 + 4 + (long)*(int *)(lVar42 + 8) * 0xc);
            lVar42 = MeshBuilder::addFace((MeshBuilder *)(this + 0x48));
            uVar32 = *(ulong *)(this + 0x118);
            uVar49 = *(ulong *)(this + 0x120);
            if (uVar32 < uVar49) {
              *(ulong *)(this + 0x118) = uVar32 + 1;
              *(long *)(*(long *)(this + 0x110) + uVar32 * 8) = lVar42;
            }
            else {
              if (uVar49 == 0) {
                sVar39 = 0x400;
                uVar31 = 0x80;
LAB_00105943:
                puVar33 = (undefined8 *)malloc(sVar39);
                puVar28 = *(undefined8 **)(this + 0x110);
                if (uVar32 == 0) {
LAB_00105983:
                  if (puVar28 != (undefined8 *)0x0) goto LAB_0010625a;
                }
                else {
                  sVar39 = uVar32 * 8;
                  if ((long)sVar39 < 9) {
                    if (sVar39 != 8) goto LAB_00105983;
                    *puVar33 = *puVar28;
                  }
                  else {
                    puVar33 = (undefined8 *)memmove(puVar33,puVar28,sVar39);
                  }
LAB_0010625a:
                  free(puVar28);
                  uVar32 = *(ulong *)(this + 0x118);
                }
                *(undefined8 **)(this + 0x110) = puVar33;
                *(ulong *)(this + 0x120) = uVar31;
              }
              else {
                uVar31 = uVar49 * 2;
                if (uVar49 < uVar31) {
                  sVar39 = uVar49 << 4;
                  goto LAB_00105943;
                }
                puVar33 = *(undefined8 **)(this + 0x110);
              }
              *(ulong *)(this + 0x118) = uVar32 + 1;
              puVar33[uVar32] = lVar42;
            }
            dVar54 = *pdVar2;
            lVar10 = *(long *)(this + 0x128);
            dVar53 = pdVar2[2];
            lVar37 = *(long *)(this + 0x90);
            dVar15 = pdVar2[1];
            dVar16 = pdVar2[2];
            lVar11 = *(long *)(lVar10 + lVar40 * 0x10);
            lVar12 = *(long *)(lVar10 + 8 + lVar40 * 0x10);
            *(int *)(lVar37 + lVar13 * 4) = (int)lVar12;
            *(int *)(lVar37 + lVar12 * 4) = (int)lVar11;
            *(int *)(lVar37 + lVar11 * 4) = (int)lVar13;
            lVar37 = *(long *)(this + 0x78);
            uVar45 = (undefined4)lVar42;
            *(undefined4 *)(lVar37 + lVar12 * 4) = uVar45;
            *(undefined4 *)(lVar37 + lVar11 * 4) = uVar45;
            *(undefined4 *)(lVar37 + lVar13 * 4) = uVar45;
            lVar37 = *(long *)(this + 0x60);
            lVar11 = lVar37 + lVar11 * 0xc;
            *(int *)(lVar11 + 4) = iVar8;
            lVar12 = lVar37 + lVar12 * 0xc;
            *(undefined4 *)(lVar12 + 4) = local_d8;
            puVar47 = (undefined4 *)(*(long *)(this + 0x48) + lVar42 * 0x58);
            pdVar3 = (double *)(*(long *)(this + 0x38) + (long)iVar44 * 0x18);
            pdVar4 = (double *)(*(long *)(this + 0x38) + (long)iVar8 * 0x18);
            dVar55 = pdVar3[2];
            dVar58 = pdVar4[2];
            dVar17 = pdVar3[1];
            dVar18 = pdVar3[2];
            dVar19 = pdVar4[1];
            dVar20 = pdVar4[2];
            dVar6 = *pdVar3;
            dVar7 = *pdVar4;
            *puVar47 = (int)lVar13;
            auVar56._0_8_ =
                 (dVar55 - dVar53) * (dVar19 - dVar15) - (dVar17 - dVar15) * (dVar58 - dVar53);
            auVar56._8_8_ =
                 (dVar6 - dVar54) * (dVar20 - dVar16) - (dVar18 - dVar16) * (dVar7 - dVar54);
            dVar53 = (dVar17 - dVar15) * (dVar7 - dVar54) - (dVar6 - dVar54) * (dVar19 - dVar15);
            dVar55 = SQRT(auVar56._0_8_ * auVar56._0_8_ + 0.0 + auVar56._8_8_ * auVar56._8_8_ +
                          dVar53 * dVar53);
            dVar53 = dVar53 / dVar55;
            auVar57._8_8_ = dVar55;
            auVar57._0_8_ = dVar55;
            auVar57 = divpd(auVar56,auVar57);
            *(double *)(puVar47 + 6) = dVar53;
            dVar55 = auVar57._0_8_;
            dVar58 = auVar57._8_8_;
            *(undefined1 (*) [16])(puVar47 + 2) = auVar57;
            *(double *)(puVar47 + 8) = ((0.0 - dVar54 * dVar55) - dVar15 * dVar58) - dVar16 * dVar53
            ;
            *(double *)(puVar47 + 10) = dVar53 * dVar53 + dVar55 * dVar55 + 0.0 + dVar58 * dVar58;
            uVar32 = uVar25;
            if (lVar40 != 0) {
              uVar32 = lVar40 * 2;
            }
            lVar40 = lVar40 + 1;
            *(int *)(lVar11 + 8) = (int)*(undefined8 *)(lVar10 + (uVar32 - 1) * 8);
            *(int *)(lVar12 + 8) = (int)*(undefined8 *)(lVar10 + ((ulong)(lVar40 * 2) % uVar25) * 8)
            ;
          } while (lVar40 != lVar46);
        }
        plVar38 = *(long **)(this + 400);
        for (plVar51 = *(long **)(this + 0x188); plVar38 != plVar51; plVar51 = plVar51 + 1) {
          plVar26 = (long *)*plVar51;
          plVar50 = (long *)*plVar26;
          lVar37 = plVar26[1];
          plVar14 = plVar50 + lVar37;
          if (plVar14 != plVar50) {
            do {
              lVar37 = *plVar50;
              if ((lVar34 != lVar37) && (lVar46 != 0)) {
                do {
                  lVar40 = 0;
                  pdVar2 = (double *)(*(long *)(this + 0x38) + lVar37 * 0x18);
                  do {
                    lVar42 = *(long *)(this + 0x48) +
                             *(long *)(*(long *)(this + 0x110) + lVar40 * 8) * 0x58;
                    dVar54 = *(double *)(lVar42 + 8) * *pdVar2 + 0.0 +
                             *(double *)(lVar42 + 0x10) * pdVar2[1] +
                             *(double *)(lVar42 + 0x18) * pdVar2[2] + *(double *)(lVar42 + 0x20);
                    if ((0.0 < dVar54) &&
                       (*(double *)(this + 8) * *(double *)(lVar42 + 0x28) < dVar54 * dVar54)) {
                      plVar26 = *(long **)(lVar42 + 0x50);
                      if (plVar26 == (long *)0x0) {
                        lVar40 = *(long *)(this + 0x1f8);
                        if (lVar40 == *(long *)(this + 0x1f0)) {
                          plVar26 = (long *)operator_new(0x18);
                          *(undefined1 (*) [16])(plVar26 + 1) = (undefined1  [16])0x0;
                          *plVar26 = 0;
                          plVar26[1] = 0;
                          puVar33 = *(undefined8 **)(lVar42 + 0x50);
                        }
                        else {
                          plVar26 = *(long **)(lVar40 + -8);
                          *(long *)(this + 0x1f8) = lVar40 + -8;
                          lVar40 = plVar26[1];
                          plVar26[1] = 0;
                          puVar33 = (undefined8 *)0x0;
                          local_58 = plVar26;
                          if (lVar40 != 0) {
                            lVar40 = 0;
                            if ((void *)*plVar26 != (void *)0x0) {
                              free((void *)*plVar26);
                              puVar33 = *(undefined8 **)(lVar42 + 0x50);
                              lVar40 = plVar26[1];
                            }
                            *plVar26 = 0;
                            plVar26[2] = lVar40;
                          }
                        }
                        *(long **)(lVar42 + 0x50) = plVar26;
                        if (puVar33 != (undefined8 *)0x0) {
                          if ((void *)*puVar33 != (void *)0x0) {
                            free((void *)*puVar33);
                          }
                          operator_delete(puVar33,0x18);
                          plVar26 = *(long **)(lVar42 + 0x50);
                        }
                      }
                      uVar25 = plVar26[1];
                      uVar32 = plVar26[2];
                      if (uVar25 < uVar32) {
                        plVar26[1] = uVar25 + 1;
                        *(long *)(*plVar26 + uVar25 * 8) = lVar37;
                      }
                      else {
                        if (uVar32 == 0) {
                          sVar39 = 0x400;
                          uVar49 = 0x80;
LAB_00105d5b:
                          puVar33 = (undefined8 *)malloc(sVar39);
                          puVar28 = (undefined8 *)*plVar26;
                          if (uVar25 == 0) {
LAB_00105d9e:
                            if (puVar28 != (undefined8 *)0x0) goto LAB_00105da3;
                          }
                          else {
                            sVar39 = uVar25 * 8;
                            if (8 < (long)sVar39) {
                              puVar33 = (undefined8 *)memmove(puVar33,puVar28,sVar39);
                              puVar28 = (undefined8 *)*plVar26;
                              goto LAB_00105d9e;
                            }
                            if (sVar39 != 8) goto LAB_00105d9e;
                            *puVar33 = *puVar28;
LAB_00105da3:
                            free(puVar28);
                          }
                          *plVar26 = (long)puVar33;
                          uVar25 = plVar26[1];
                          plVar26[2] = uVar49;
                        }
                        else {
                          uVar49 = uVar32 * 2;
                          if (uVar32 < uVar49) {
                            sVar39 = uVar32 << 4;
                            goto LAB_00105d5b;
                          }
                          puVar33 = (undefined8 *)*plVar26;
                        }
                        plVar26[1] = uVar25 + 1;
                        puVar33[uVar25] = lVar37;
                      }
                      if (*(double *)(lVar42 + 0x30) <= dVar54 &&
                          dVar54 != *(double *)(lVar42 + 0x30)) {
                        *(long *)(lVar42 + 0x38) = lVar37;
                        *(double *)(lVar42 + 0x30) = dVar54;
                      }
                      goto LAB_00105b32;
                    }
                    lVar40 = lVar40 + 1;
                  } while (lVar40 != lVar46);
                  plVar50 = plVar50 + 1;
                  if (plVar14 == plVar50) goto LAB_00105b3f;
                  lVar37 = *plVar50;
                } while (lVar34 != lVar37);
              }
LAB_00105b32:
              plVar50 = plVar50 + 1;
            } while (plVar14 != plVar50);
LAB_00105b3f:
            plVar26 = (long *)*plVar51;
            lVar37 = plVar26[1];
          }
          if ((ulong)((lVar37 + 1) * 0x80) < (ulong)plVar26[2]) {
            pvVar41 = (void *)*plVar26;
            *plVar51 = 0;
            if (pvVar41 != (void *)0x0) {
              free(pvVar41);
            }
            operator_delete(plVar26,0x18);
          }
          else {
            plVar14 = *(long **)(this + 0x1f8);
            if (plVar14 == *(long **)(this + 0x200)) {
              std::
              vector<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>,std::allocator<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>>
              ::
              _M_realloc_insert<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>
                        ((vector<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>,std::allocator<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>>
                          *)(this + 0x1f0),plVar14,plVar51);
            }
            else {
              *plVar14 = *plVar51;
              *plVar51 = 0;
              *(long **)(this + 0x1f8) = plVar14 + 1;
            }
          }
        }
        plVar51 = *(long **)(this + 0x110);
        plVar38 = plVar51 + *(long *)(this + 0x118);
        for (; plVar38 != plVar51; plVar51 = plVar51 + 1) {
          lVar34 = *(long *)(this + 0x48) + *plVar51 * 0x58;
          if ((*(long *)(lVar34 + 0x50) != 0) && ((*(byte *)(lVar34 + 0x48) & 2) == 0)) {
            local_58._4_4_ = (undefined4)((ulong)local_58 >> 0x20);
            local_58 = (long *)CONCAT44(local_58._4_4_,(int)*plVar51);
            std::deque<int,std::allocator<int>>::emplace_back<int>
                      ((deque<int,std::allocator<int>> *)(this + 0x1a0),(int *)&local_58);
            *(byte *)(lVar34 + 0x48) = *(byte *)(lVar34 + 0x48) | 2;
          }
        }
        goto LAB_00104ba0;
      }
      plVar38 = *(long **)(piVar1 + 0x14);
      *(long *)(this + 0x108) = *(long *)(this + 0x108) + 1;
      if (plVar38[1] != 0) {
        pvVar41 = (void *)*plVar38;
        uVar25 = 0;
        iVar44 = 0;
        do {
          while (lVar46 = *(long *)((long)pvVar41 + uVar25 * 8), lVar34 == lVar46) {
            uVar32 = plVar38[1];
            uVar25 = uVar25 + 1;
            iVar44 = 1;
            if (uVar32 <= uVar25) goto LAB_001050e7;
          }
          if (iVar44 == 1) {
            *(long *)((long)pvVar41 + uVar25 * 8 + -8) = lVar46;
            iVar44 = 2;
          }
          uVar32 = plVar38[1];
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar32);
LAB_001050e7:
        if (iVar44 == 1) {
          uVar25 = uVar32 - 1;
          uVar49 = uVar25 * 2;
          if ((ulong)plVar38[2] < uVar25) {
            __dest = malloc(uVar25 * 8);
            if ((uVar32 == 0) || ((long)(uVar32 * 8) < 9)) {
LAB_001065d0:
              free(pvVar41);
            }
            else {
              __dest = memmove(__dest,pvVar41,uVar32 * 8);
              pvVar41 = (void *)*plVar38;
              if (pvVar41 != (void *)0x0) goto LAB_001065d0;
            }
            *plVar38 = (long)__dest;
            plVar38[2] = uVar25;
            if ((ulong)plVar38[1] < uVar25) {
              pvVar29 = (void *)((long)__dest + uVar25 * 8);
              pvVar41 = (void *)((long)__dest + plVar38[1] * 8);
              if (pvVar29 != pvVar41) goto LAB_00106784;
              plVar38[1] = uVar25;
            }
            else {
              plVar38[1] = uVar25;
            }
            if (uVar49 < uVar32) {
LAB_00106605:
              sVar39 = uVar25 * 8;
              puVar28 = (undefined8 *)malloc(sVar39);
              puVar33 = (undefined8 *)*plVar38;
              if ((long)sVar39 < 9) {
                if (sVar39 != 8) goto LAB_001064fc;
                *puVar28 = *puVar33;
LAB_00106501:
                free(puVar33);
              }
              else {
                memmove(puVar28,puVar33,sVar39);
                puVar33 = (undefined8 *)*plVar38;
LAB_001064fc:
                if (puVar33 != (undefined8 *)0x0) goto LAB_00106501;
              }
              *plVar38 = (long)puVar28;
              plVar38[2] = plVar38[1];
            }
            plVar38 = *(long **)(piVar1 + 0x14);
            uVar32 = plVar38[1];
          }
          else {
            if (uVar32 < uVar25) {
              pvVar29 = (void *)((long)pvVar41 + -8);
LAB_00106784:
              memset(pvVar41,0,(long)pvVar29 - (long)pvVar41);
              plVar38[1] = uVar25;
              if (uVar49 < uVar32) goto LAB_00106605;
              plVar38 = *(long **)(piVar1 + 0x14);
            }
            else {
              plVar38[1] = uVar25;
              if (uVar49 < uVar32) {
                if (uVar25 != 0) goto LAB_00106605;
                puVar33 = (undefined8 *)*plVar38;
                puVar28 = (undefined8 *)0x0;
                goto LAB_001064fc;
              }
            }
            uVar32 = plVar38[1];
          }
        }
        if (uVar32 != 0) goto LAB_00104ba0;
      }
      if (0x80 < (ulong)plVar38[2]) {
        piVar1[0x14] = 0;
        piVar1[0x15] = 0;
        if ((void *)*plVar38 != (void *)0x0) {
          free((void *)*plVar38);
        }
        operator_delete(plVar38,0x18);
LAB_00104ba0:
        piVar30 = *(int **)(this + 0x1b0);
        if (*(int **)(this + 0x1d0) == piVar30) break;
        goto LAB_00104bb4;
      }
      puVar33 = *(undefined8 **)(this + 0x1f8);
      if (puVar33 == *(undefined8 **)(this + 0x200)) {
        std::
        vector<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>,std::allocator<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>>
        ::
        _M_realloc_insert<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>
                  ((vector<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>,std::allocator<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>>
                    *)(this + 0x1f0),puVar33,piVar1 + 0x14);
        goto LAB_00104ba0;
      }
      *puVar33 = *(undefined8 *)(piVar1 + 0x14);
      piVar30 = *(int **)(this + 0x1b0);
      piVar1[0x14] = 0;
      piVar1[0x15] = 0;
      *(undefined8 **)(this + 0x1f8) = puVar33 + 1;
    } while (*(int **)(this + 0x1d0) != piVar30);
  }
  puVar33 = *(undefined8 **)(this + 0x1f0);
  puVar28 = *(undefined8 **)(this + 0x1f8);
  puVar35 = puVar33;
  if (puVar33 != puVar28) {
    do {
      puVar9 = (undefined8 *)*puVar35;
      if (puVar9 != (undefined8 *)0x0) {
        if ((void *)*puVar9 != (void *)0x0) {
          free((void *)*puVar9);
        }
        operator_delete(puVar9,0x18);
      }
      puVar35 = puVar35 + 1;
    } while (puVar28 != puVar35);
    *(undefined8 **)(this + 0x1f8) = puVar33;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::QuickHull::buildMesh(double) */

undefined8 * manifold::QuickHull::buildMesh(double param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  void *__ptr;
  undefined4 *__src;
  void *pvVar11;
  int *piVar12;
  int *__src_00;
  undefined4 *__s;
  int iVar13;
  long lVar14;
  undefined4 *puVar15;
  QuickHull *in_RSI;
  long lVar16;
  undefined8 *in_RDI;
  long lVar17;
  int *piVar18;
  size_t sVar19;
  ulong uVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  double dVar22;
  double dVar23;
  ulong local_d0;
  undefined4 *local_c8;
  int *local_b8;
  void *local_a8;
  ulong local_a0;
  size_t local_98;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_44;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x40) == 0) {
    *in_RDI = 0;
    in_RDI[3] = 0;
    *(undefined1 (*) [16])(in_RDI + 1) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(in_RDI + 4) = (undefined1  [16])0x0;
    goto LAB_0010697d;
  }
  getExtremeValues();
  uVar21 = _LC3;
  *(undefined8 *)(in_RSI + 0xd8) = local_78;
  *(undefined8 *)(in_RSI + 0xe0) = uStack_70;
  *(undefined8 *)(in_RSI + 0xe8) = local_68;
  *(undefined8 *)(in_RSI + 0xf0) = uStack_60;
  *(undefined8 *)(in_RSI + 0xf8) = local_58;
  *(undefined8 *)(in_RSI + 0x100) = uStack_50;
  uVar20 = 0;
  dVar23 = 0.0;
  do {
    uVar5 = uVar20 + 1;
    dVar22 = (double)(*(ulong *)(*(long *)(in_RSI + 0x38) +
                                (uVar20 >> 1) * 8 + *(long *)(in_RSI + uVar20 * 8 + 0xd8) * 0x18) &
                     uVar21);
    if (dVar22 <= dVar23) {
      dVar22 = dVar23;
    }
    uVar20 = uVar5;
    dVar23 = dVar22;
  } while (uVar5 != 6);
  dVar23 = param_1 * dVar22;
  *(double *)(in_RSI + 0x10) = dVar22;
  in_RSI[0x18] = (QuickHull)0x0;
  *(double *)in_RSI = dVar23;
  *(double *)(in_RSI + 8) = dVar23 * dVar23;
  createConvexHalfedgeMesh(in_RSI);
  if (in_RSI[0x18] == (QuickHull)0x0) {
    uVar21 = *(ulong *)(in_RSI + 0x68);
    if (uVar21 == 0) goto LAB_00106a75;
LAB_00106d4a:
    sVar19 = uVar21 * 4;
    __src_00 = (int *)malloc(uVar21 * 0xc);
    local_c8 = (undefined4 *)malloc(sVar19);
    piVar10 = (int *)calloc(sVar19,1);
    __ptr = malloc(sVar19);
    lVar17 = (*(long *)(in_RSI + 0x50) - *(long *)(in_RSI + 0x48) >> 3) * 0x2e8ba2e8ba2e8ba3;
    if (lVar17 != 0) goto LAB_00106fe1;
    local_a8 = (void *)0x0;
LAB_00106dc9:
    __src = local_c8;
    local_44 = 0;
    uVar20 = 0;
    do {
      if (-1 < *(int *)(*(long *)(in_RSI + 0x60) + 8 + uVar20 * 0xc)) {
        lVar17 = (long)*(int *)(*(long *)(in_RSI + 0x78) + uVar20 * 4);
        if (*(int *)(*(long *)(in_RSI + 0x48) + lVar17 * 0x58) != -1) {
          LOCK();
          piVar12 = piVar10 + lVar17;
          iVar13 = *piVar12;
          *piVar12 = *piVar12 + 1;
          UNLOCK();
          if (iVar13 < 1) {
            LOCK();
            UNLOCK();
            lVar17 = *(long *)(in_RSI + 0x60);
            uVar9 = *(undefined8 *)(lVar17 + uVar20 * 0xc);
            lVar16 = (long)local_44;
            *(int *)((long)__ptr + uVar20 * 4) = local_44;
            piVar12 = __src_00 + lVar16 * 3;
            *(undefined8 *)piVar12 = uVar9;
            piVar12[2] = *(int *)(lVar17 + 8 + uVar20 * 0xc);
            lVar8 = *(long *)(in_RSI + 0x78);
            local_c8[lVar16] = *(undefined4 *)(lVar8 + uVar20 * 4);
            lVar14 = (long)*(int *)(*(long *)(in_RSI + 0x90) + uVar20 * 4);
            *(int *)((long)__ptr + lVar14 * 4) = local_44 + 1;
            piVar18 = __src_00 + lVar16 * 3 + 3;
            puVar1 = (undefined8 *)(lVar17 + lVar14 * 0xc);
            *(undefined8 *)piVar18 = *puVar1;
            piVar18[2] = *(int *)(puVar1 + 1);
            local_c8[lVar16 + 1] = *(undefined4 *)(lVar8 + lVar14 * 4);
            lVar14 = (long)*(int *)(*(long *)(in_RSI + 0x90) + lVar14 * 4);
            *(int *)((long)__ptr + lVar14 * 4) = local_44 + 2;
            piVar7 = __src_00 + lVar16 * 3 + 6;
            puVar1 = (undefined8 *)(lVar17 + lVar14 * 0xc);
            *(undefined8 *)piVar7 = *puVar1;
            piVar7[2] = *(int *)(puVar1 + 1);
            local_c8[lVar16 + 2] = *(undefined4 *)(lVar8 + lVar14 * 4);
            *piVar12 = piVar7[1];
            *piVar18 = piVar12[1];
            *piVar7 = piVar18[1];
            local_44 = local_44 + 3;
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar21 != uVar20);
    local_d0 = (ulong)local_44;
    uVar5 = local_d0 * 2;
    local_a0 = local_d0 / 3;
    local_b8 = (int *)(local_d0 * 0xc);
    if (uVar21 < local_d0) {
      piVar12 = (int *)malloc((size_t)local_b8);
      sVar19 = uVar21 * 0xc;
      if ((long)sVar19 < 0xd) {
        if (sVar19 == 0xc) {
          *(undefined8 *)piVar12 = *(undefined8 *)__src_00;
          piVar12[2] = __src_00[2];
          goto LAB_00107073;
        }
        if (__src_00 != (int *)0x0) goto LAB_00107073;
      }
      else {
        piVar12 = (int *)memcpy(piVar12,__src_00,sVar19);
LAB_00107073:
        free(__src_00);
      }
      __src_00 = piVar12;
      for (piVar12 = __src_00 + uVar21 * 3; __src_00 + local_d0 * 3 != piVar12;
          piVar12 = piVar12 + 3) {
        piVar12[0] = 0;
        piVar12[1] = 0;
        piVar12[2] = 0;
      }
      piVar12 = __src_00;
      uVar20 = local_d0;
      if (uVar21 <= uVar5) goto LAB_001070c7;
LAB_001072c4:
      __src_00 = (int *)malloc((size_t)local_b8);
      if ((long)local_b8 < 0xd) {
        if (local_b8 == (int *)0xc) {
          *(undefined8 *)__src_00 = *(undefined8 *)piVar12;
          __src_00[2] = piVar12[2];
          goto LAB_00107308;
        }
        if (piVar12 != (int *)0x0) goto LAB_00107308;
      }
      else {
        __src_00 = (int *)memcpy(__src_00,piVar12,(size_t)local_b8);
LAB_00107308:
        free(piVar12);
      }
      uVar20 = local_d0;
      if (uVar21 < local_d0) {
        __s = (undefined4 *)malloc(local_d0 * 4);
LAB_0010735e:
        local_c8 = __s;
        sVar19 = uVar21 * 4;
        if ((long)sVar19 < 5) {
          if (sVar19 == 4) {
            *local_c8 = *__src;
            goto LAB_00107393;
          }
          if (__src != (undefined4 *)0x0) goto LAB_00107393;
        }
        else {
          memcpy(local_c8,__src,sVar19);
LAB_00107393:
          free(__src);
        }
LAB_001073af:
        puVar15 = local_c8 + local_d0;
        __s = (undefined4 *)((long)local_c8 + sVar19);
        __src = local_c8;
        if (puVar15 != __s) goto LAB_001073c5;
      }
joined_r0x001073e1:
      local_c8 = __src;
      if (uVar5 < uVar21) {
        local_98 = local_d0 * 4;
        local_c8 = (undefined4 *)malloc(local_98);
        if ((long)local_98 < 5) {
          if (local_98 != 4) goto LAB_00106fad;
          *local_c8 = *__src;
        }
        else {
          local_c8 = (undefined4 *)memcpy(local_c8,__src,local_98);
        }
        goto LAB_00106fb6;
      }
    }
    else {
      if (uVar21 <= uVar5) {
LAB_001070c7:
        if (local_d0 <= uVar21) goto LAB_00106ae0;
        __s = (undefined4 *)malloc(local_d0 * 4);
        if (uVar21 != 0) goto LAB_0010735e;
        if (local_c8 != (undefined4 *)0x0) {
          free(local_c8);
          sVar19 = 0;
          local_c8 = __s;
          goto LAB_001073af;
        }
        puVar15 = __s + local_d0;
        local_c8 = __s;
LAB_001073c5:
        memset(__s,0,(long)puVar15 - (long)__s);
        __src = local_c8;
        goto joined_r0x001073e1;
      }
      piVar12 = __src_00;
      if (local_d0 != 0) goto LAB_001072c4;
      if (__src_00 != (int *)0x0) {
        free(__src_00);
      }
      uVar20 = 0;
      __src_00 = (int *)0x0;
      local_c8 = (undefined4 *)0x0;
LAB_00106fad:
      if (__src != (undefined4 *)0x0) {
LAB_00106fb6:
        free(__src);
      }
    }
  }
  else {
    iVar13 = *(int *)(in_RSI + 0x28);
    uVar21 = *(ulong *)(in_RSI + 0x68);
    lVar8 = *(long *)(in_RSI + 0x60);
    lVar17 = lVar8 + uVar21 * 0xc;
    for (; lVar8 != lVar17; lVar8 = lVar8 + 0xc) {
      if (*(int *)(lVar8 + 4) == iVar13 + -1) {
        *(undefined4 *)(lVar8 + 4) = 0;
      }
    }
    *(undefined8 *)(in_RSI + 0x28) = 0;
    uVar9 = 0;
    if (*(void **)(in_RSI + 0x20) != (void *)0x0) {
      free(*(void **)(in_RSI + 0x20));
      uVar9 = *(undefined8 *)(in_RSI + 0x28);
      uVar21 = *(ulong *)(in_RSI + 0x68);
    }
    *(undefined8 *)(in_RSI + 0x20) = 0;
    *(undefined8 *)(in_RSI + 0x30) = uVar9;
    if (uVar21 != 0) goto LAB_00106d4a;
LAB_00106a75:
    lVar17 = (*(long *)(in_RSI + 0x50) - *(long *)(in_RSI + 0x48) >> 3) * 0x2e8ba2e8ba2e8ba3;
    if (lVar17 == 0) {
      local_a8 = (void *)0x0;
      __ptr = (void *)0x0;
      piVar10 = (int *)0x0;
      __src_00 = (int *)0x0;
      local_c8 = (undefined4 *)0x0;
    }
    else {
      local_c8 = (undefined4 *)0x0;
      __ptr = (void *)0x0;
      __src_00 = (int *)0x0;
      piVar10 = (int *)0x0;
LAB_00106fe1:
      local_a8 = malloc(lVar17 << 2);
      if (uVar21 != 0) goto LAB_00106dc9;
    }
    local_a0 = 0;
    uVar20 = 0;
    local_d0 = 0;
    local_b8 = (int *)0x0;
  }
LAB_00106ae0:
  piVar18 = (int *)((long)local_b8 + (long)__src_00);
  for (piVar12 = __src_00; piVar18 != piVar12; piVar12 = piVar12 + 3) {
    piVar12[2] = *(int *)((long)__ptr + (long)piVar12[2] * 4);
  }
  lVar17 = *(long *)(in_RSI + 0x40);
  uVar5 = lVar17 + 1;
  sVar19 = uVar5 * 4;
  if (uVar21 < uVar5) {
    piVar12 = (int *)malloc(sVar19);
    if (uVar21 == 0) {
      if (piVar10 == (int *)0x0) {
        if (piVar12 != piVar12 + uVar5) {
          memset(piVar12,0,sVar19);
        }
      }
      else {
        free(piVar10);
        piVar10 = piVar12;
        if (piVar12 != piVar12 + uVar5) goto LAB_001071ac;
      }
    }
    else {
      __n = uVar21 * 4;
      if ((long)__n < 5) {
        if (__n == 4) {
          *piVar12 = *piVar10;
          goto LAB_0010747a;
        }
        if (piVar10 != (int *)0x0) goto LAB_0010747a;
      }
      else {
        memcpy(piVar12,piVar10,__n);
LAB_0010747a:
        free(piVar10);
      }
      piVar10 = piVar12 + uVar21;
      if (piVar12 + uVar5 != piVar10) {
LAB_001071ac:
        memset(piVar10,0,(long)piVar12 + (sVar19 - (long)piVar10));
      }
      local_b8 = piVar12;
      if (uVar5 * 2 < uVar21) goto LAB_00107221;
    }
  }
  else {
    piVar12 = piVar10;
    if (uVar21 <= uVar5 * 2) goto LAB_00106b45;
    local_b8 = piVar10;
    if (uVar5 == 0) {
      piVar12 = (int *)0x0;
LAB_00106b39:
      if (local_b8 == (int *)0x0) goto LAB_00106b45;
    }
    else {
LAB_00107221:
      piVar12 = (int *)malloc(sVar19);
      if ((long)sVar19 < 5) {
        if (sVar19 != 4) goto LAB_00106b39;
        *piVar12 = *local_b8;
      }
      else {
        memcpy(piVar12,local_b8,sVar19);
      }
    }
    free(local_b8);
  }
LAB_00106b45:
  piVar10 = piVar12 + uVar5;
  if (piVar10 == piVar12) {
    if (2 < local_d0) goto LAB_00106b85;
  }
  else {
    memset(piVar12,0,sVar19);
    if (2 < local_d0) {
LAB_00106b85:
      piVar7 = __src_00;
      do {
        LOCK();
        piVar12[*piVar7] = piVar12[*piVar7] + 1;
        UNLOCK();
        LOCK();
        piVar12[piVar7[3]] = piVar12[piVar7[3]] + 1;
        UNLOCK();
        LOCK();
        piVar12[piVar7[6]] = piVar12[piVar7[6]] + 1;
        UNLOCK();
        piVar7 = piVar7 + 9;
      } while (piVar7 != __src_00 + local_a0 * 9);
      if (piVar10 == piVar12) goto LAB_00106be4;
    }
    piVar7 = piVar12;
    iVar13 = 0;
    do {
      iVar3 = *piVar7;
      piVar6 = piVar7 + 1;
      *piVar7 = iVar13;
      piVar7 = piVar6;
      iVar13 = iVar13 + (uint)(0 < iVar3);
    } while (piVar10 != piVar6);
  }
LAB_00106be4:
  lVar17 = (long)piVar12[lVar17];
  pvVar11 = (void *)0x0;
  if (lVar17 != 0) {
    pvVar11 = malloc(lVar17 * 0x18);
  }
  lVar8 = *(long *)(in_RSI + 0x40);
  piVar10 = __src_00;
  if (lVar8 != 0) {
    piVar7 = piVar12 + 1;
    lVar14 = 0;
    iVar13 = *piVar12;
    do {
      iVar3 = *piVar7;
      if (iVar13 < iVar3) {
        lVar16 = *(long *)(in_RSI + 0x38);
        puVar1 = (undefined8 *)((long)pvVar11 + (long)iVar13 * 0x18);
        puVar2 = (undefined8 *)(lVar16 + lVar14);
        uVar9 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar9;
        puVar1[2] = *(undefined8 *)(lVar16 + 0x10 + lVar14);
      }
      piVar7 = piVar7 + 1;
      lVar14 = lVar14 + 0x18;
      iVar13 = iVar3;
    } while (piVar7 != piVar12 + lVar8 + 1);
  }
  for (; piVar18 != piVar10; piVar10 = piVar10 + 3) {
    *(ulong *)piVar10 = CONCAT44(piVar12[piVar10[1]],piVar12[*piVar10]);
  }
  *in_RDI = __src_00;
  in_RDI[2] = uVar20;
  in_RDI[1] = local_d0;
  in_RDI[3] = pvVar11;
  in_RDI[4] = lVar17;
  in_RDI[5] = lVar17;
  if (local_a8 != (void *)0x0) {
    free(local_a8);
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (piVar12 != (int *)0x0) {
    free(piVar12);
  }
  if (local_c8 != (undefined4 *)0x0) {
    free(local_c8);
  }
LAB_0010697d:
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::Manifold::Impl::Hull(manifold::VecView<linalg::vec<double, 3> >) */

void __thiscall manifold::Manifold::Impl::Hull(Impl *this,undefined8 *param_2)

{
  void *pvVar1;
  long in_FS_OFFSET;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  QuickHull local_228 [32];
  undefined8 local_208;
  undefined1 local_200 [16];
  undefined8 local_1f0;
  ulong local_1e8;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined8 local_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined1 local_190 [16];
  undefined8 local_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined1 local_160 [16];
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  void *pvStack_70;
  long local_68;
  undefined8 *puStack_60;
  void *local_58;
  void *pvStack_50;
  long local_48;
  undefined8 *puStack_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((ulong)param_2[1] < 4) {
    *(undefined4 *)(this + 0x40) = 0xb;
  }
  else {
    local_1f0 = *param_2;
    local_208 = 0;
    local_200 = (undefined1  [16])0x0;
    local_1e0 = (undefined1  [16])0x0;
    local_1d0 = (undefined1  [16])0x0;
    local_1c0 = (undefined1  [16])0x0;
    local_1a8 = (undefined1  [16])0x0;
    local_190 = (undefined1  [16])0x0;
    local_178 = (undefined1  [16])0x0;
    local_160 = (undefined1  [16])0x0;
    local_110 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    local_e0 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    local_1b0 = 0;
    local_198 = 0;
    local_180 = 0;
    local_168 = 0;
    local_120 = 0;
    local_118 = 0;
    local_100 = 0;
    local_e8 = 0;
    local_d0 = 0;
    local_b8 = 0;
    local_90 = 0;
    local_80 = 8;
    local_1e8 = param_2[1];
    pvVar1 = operator_new(0x40);
    local_88 = pvVar1;
    local_78 = operator_new(0x200);
    puStack_60 = (undefined8 *)((long)pvVar1 + 0x18);
    *puStack_60 = local_78;
    local_68 = (long)local_78 + 0x200;
    local_38 = (undefined1  [16])0x0;
    local_28 = 0;
    pvStack_70 = local_78;
    local_58 = local_78;
    pvStack_50 = local_78;
    local_48 = local_68;
    puStack_40 = puStack_60;
    QuickHull::buildMesh(_LC1);
    if (*(void **)(this + 0x60) != (void *)0x0) {
      free(*(void **)(this + 0x60));
    }
    *(undefined8 *)(this + 0x60) = local_258;
    *(undefined8 *)(this + 0x68) = local_250;
    *(undefined8 *)(this + 0x70) = uStack_248;
    if (*(void **)(this + 0x48) != (void *)0x0) {
      free(*(void **)(this + 0x48));
    }
    *(undefined8 *)(this + 0x48) = local_240;
    *(undefined8 *)(this + 0x50) = local_238;
    *(undefined8 *)(this + 0x58) = uStack_230;
    manifold::Manifold::Impl::CalculateBBox();
    manifold::Manifold::Impl::SetEpsilon(_LC9,SUB81(this,0));
    manifold::Manifold::Impl::CalculateNormals();
    manifold::Manifold::Impl::InitializeOriginal(SUB81(this,0));
    manifold::Manifold::Impl::Finish();
    manifold::Manifold::Impl::CreateFaces();
    QuickHull::~QuickHull(local_228);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* manifold::HalfEdgeMesh::HalfEdgeMesh(manifold::MeshBuilder const&,
   manifold::VecView<linalg::vec<double, 3> > const&) */

void __thiscall
manifold::HalfEdgeMesh::HalfEdgeMesh(HalfEdgeMesh *this,MeshBuilder *param_1,VecView *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  ulong *puVar21;
  undefined4 *puVar22;
  size_t sVar23;
  undefined4 uVar24;
  ulong uVar25;
  ulong uVar26;
  int *piVar27;
  int *piVar28;
  long in_FS_OFFSET;
  undefined8 uVar29;
  _Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
  *local_180;
  ulong local_118;
  ulong local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined8 *local_88;
  ulong local_80;
  undefined8 *local_78;
  long local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_108 = local_d8;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  local_e8 = _LC10;
  local_c8 = local_98;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  local_100 = 1;
  local_f8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d8[0] = 0;
  piVar27 = *(int **)param_1;
  piVar5 = *(int **)(param_1 + 8);
  local_88 = &local_58;
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98[0] = 0;
  local_80 = 1;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_118 = 0;
  local_a8 = local_e8;
  local_68 = local_e8;
  if (piVar5 != piVar27) {
    uVar13 = 1;
    do {
      uVar16 = uVar13;
      uVar13 = (ulong)*piVar27;
      if (*piVar27 != -1) {
        puVar15 = *(ulong **)(this + 0x20);
        local_110 = uVar13;
        if (puVar15 == *(ulong **)(this + 0x28)) {
          std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_realloc_insert<unsigned_long>
                    ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x18),puVar15,
                     &local_110);
          puVar15 = *(ulong **)(this + 0x20);
        }
        else {
          *puVar15 = uVar13;
          puVar15 = puVar15 + 1;
          *(ulong **)(this + 0x20) = puVar15;
        }
        lVar6 = *(long *)(this + 0x18);
        plVar14 = (long *)std::__detail::
                          _Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                          ::operator[]((_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                        *)&local_108,&local_118);
        lVar20 = *(long *)(param_1 + 0x48);
        iVar3 = *piVar27;
        *plVar14 = ((long)puVar15 - lVar6 >> 3) + -1;
        piVar28 = (int *)&local_50;
        iVar4 = *(int *)(lVar20 + (long)*piVar27 * 4);
        local_48 = *(undefined4 *)(lVar20 + (long)iVar4 * 4);
        local_50 = CONCAT44(iVar4,iVar3);
LAB_00107b24:
        do {
          uVar13 = (ulong)*(int *)(*(long *)(param_1 + 0x18) + (long)*piVar28 * 0xc + 4);
          puVar18 = local_78;
          if (local_70 == 0) {
            for (; puVar18 != (undefined8 *)0x0; puVar18 = (undefined8 *)*puVar18) {
              if (uVar13 == puVar18[1]) goto LAB_00107b6a;
            }
          }
          else {
            plVar14 = (long *)local_88[uVar13 % local_80];
            if (plVar14 != (long *)0x0) {
              uVar19 = ((long *)*plVar14)[1];
              plVar12 = (long *)*plVar14;
              while (uVar13 != uVar19) {
                plVar7 = (long *)*plVar12;
                if ((plVar7 == (long *)0x0) ||
                   (uVar19 = plVar7[1], plVar14 = plVar12, plVar12 = plVar7,
                   uVar13 % local_80 != uVar19 % local_80)) goto LAB_00107be8;
              }
              if (*plVar14 != 0) goto LAB_00107b6a;
            }
          }
LAB_00107be8:
          puVar18 = (undefined8 *)(*(long *)param_2 + uVar13 * 0x18);
          uVar19 = *(ulong *)(this + 8);
          uVar26 = *(ulong *)(this + 0x10);
          if (uVar19 < uVar26) {
            uVar29 = *puVar18;
            uVar9 = puVar18[1];
            *(ulong *)(this + 8) = uVar19 + 1;
            puVar1 = (undefined8 *)(*(long *)this + uVar19 * 0x18);
            *puVar1 = uVar29;
            puVar1[1] = uVar9;
            puVar1[2] = puVar18[2];
          }
          else {
            uVar9 = *puVar18;
            uVar10 = puVar18[1];
            uVar29 = puVar18[2];
            if (uVar26 == 0) {
              sVar23 = 0xc00;
              uVar25 = 0x80;
LAB_001080a1:
              puVar18 = (undefined8 *)malloc(sVar23);
              puVar1 = *(undefined8 **)this;
              if (uVar19 == 0) {
LAB_001080f5:
                if (puVar1 != (undefined8 *)0x0) goto LAB_00108340;
              }
              else {
                sVar23 = uVar19 * 0x18;
                if ((long)sVar23 < 0x19) {
                  if (sVar23 != 0x18) goto LAB_001080f5;
                  uVar11 = puVar1[1];
                  *puVar18 = *puVar1;
                  puVar18[1] = uVar11;
                  puVar18[2] = puVar1[2];
                }
                else {
                  puVar18 = (undefined8 *)memmove(puVar18,puVar1,sVar23);
                }
LAB_00108340:
                free(puVar1);
                uVar19 = *(ulong *)(this + 8);
              }
              *(undefined8 **)this = puVar18;
              *(ulong *)(this + 0x10) = uVar25;
            }
            else {
              uVar25 = uVar26 * 2;
              if (uVar26 < uVar25) {
                sVar23 = uVar26 * 0x30;
                goto LAB_001080a1;
              }
              puVar18 = *(undefined8 **)this;
            }
            *(ulong *)(this + 8) = uVar19 + 1;
            puVar18 = puVar18 + uVar19 * 3;
            *puVar18 = uVar9;
            puVar18[1] = uVar10;
            puVar18[2] = uVar29;
          }
          piVar28 = piVar28 + 1;
          local_110 = uVar13;
          puVar15 = (ulong *)std::__detail::
                             _Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                             ::operator[]((_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                           *)&local_88,&local_110);
          *puVar15 = uVar19;
        } while (&local_44 != piVar28);
      }
LAB_00107a80:
      piVar27 = piVar27 + 0x16;
      uVar13 = uVar16 + 1;
      local_118 = uVar16;
    } while (piVar5 != piVar27);
  }
  local_180 = (_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
               *)&local_88;
  lVar20 = *(long *)(param_1 + 0x18);
  local_118 = 0;
  lVar6 = lVar20 + *(long *)(param_1 + 0x20) * 0xc;
  uVar13 = local_118;
  do {
    local_118 = uVar13;
    if (lVar6 == lVar20) {
      puVar15 = *(ulong **)(this + 0x20);
      for (puVar21 = *(ulong **)(this + 0x18); puVar15 != puVar21; puVar21 = puVar21 + 1) {
        puVar17 = (ulong *)std::__detail::
                           _Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                           ::operator[]((_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                         *)&local_c8,puVar21);
        *puVar21 = *puVar17;
      }
      uVar13 = 0;
      if (*(long *)(this + 0x38) != 0) {
        do {
          lVar6 = *(long *)(this + 0x30) + uVar13 * 0xc;
          local_110 = (ulong)*(int *)(*(long *)(this + 0x48) + uVar13 * 4);
          puVar18 = (undefined8 *)
                    std::__detail::
                    _Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                    ::operator[]((_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                  *)&local_108,&local_110);
          *(int *)(*(long *)(this + 0x48) + uVar13 * 4) = (int)*puVar18;
          local_110 = (ulong)*(int *)(lVar6 + 8);
          puVar18 = (undefined8 *)
                    std::__detail::
                    _Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                    ::operator[]((_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                  *)&local_c8,&local_110);
          *(int *)(lVar6 + 8) = (int)*puVar18;
          local_110 = (ulong)*(int *)(*(long *)(this + 0x60) + uVar13 * 4);
          puVar18 = (undefined8 *)
                    std::__detail::
                    _Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                    ::operator[]((_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                  *)&local_c8,&local_110);
          *(int *)(*(long *)(this + 0x60) + uVar13 * 4) = (int)*puVar18;
          local_110 = (ulong)*(int *)(lVar6 + 4);
          uVar13 = uVar13 + 1;
          puVar18 = (undefined8 *)
                    std::__detail::
                    _Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                    ::operator[](local_180,&local_110);
          *(int *)(lVar6 + 4) = (int)*puVar18;
        } while (uVar13 < *(ulong *)(this + 0x38));
      }
      std::
      _Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
      ::~_Hashtable((_Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                     *)local_180);
      std::
      _Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
      ::~_Hashtable((_Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                     *)&local_c8);
      std::
      _Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
      ::~_Hashtable((_Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                     *)&local_108);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(lVar20 + 8) != -1) {
      uVar16 = *(ulong *)(this + 0x38);
      lVar2 = uVar13 * 4;
      uVar19 = *(ulong *)(this + 0x40);
      puVar22 = (undefined4 *)(*(long *)(param_1 + 0x30) + lVar2);
      uVar24 = *puVar22;
      uVar29 = CONCAT44(*(int *)(lVar20 + 8),*(undefined4 *)(lVar20 + 4));
      if (uVar16 < uVar19) {
        *(ulong *)(this + 0x38) = uVar16 + 1;
        puVar18 = (undefined8 *)(*(long *)(this + 0x30) + uVar16 * 0xc);
        uVar19 = *(ulong *)(this + 0x50);
        *(undefined4 *)(puVar18 + 1) = uVar24;
        *puVar18 = uVar29;
        uVar16 = *(ulong *)(this + 0x58);
        uVar24 = *puVar22;
        if (uVar19 < uVar16) goto LAB_00107cf8;
LAB_00107de0:
        if (uVar16 == 0) {
          sVar23 = 0x200;
          uVar26 = 0x80;
LAB_0010803b:
          puVar22 = (undefined4 *)malloc(sVar23);
          puVar8 = *(undefined4 **)(this + 0x48);
          if (uVar19 == 0) {
LAB_0010806e:
            if (puVar8 != (undefined4 *)0x0) goto LAB_00108179;
          }
          else {
            sVar23 = uVar19 * 4;
            if ((long)sVar23 < 5) {
              if (sVar23 != 4) goto LAB_0010806e;
              *puVar22 = *puVar8;
            }
            else {
              puVar22 = (undefined4 *)memmove(puVar22,puVar8,sVar23);
            }
LAB_00108179:
            free(puVar8);
            uVar19 = *(ulong *)(this + 0x50);
          }
          *(undefined4 **)(this + 0x48) = puVar22;
          *(ulong *)(this + 0x58) = uVar26;
        }
        else {
          uVar26 = uVar16 * 2;
          if (uVar16 < uVar26) {
            sVar23 = uVar16 * 8;
            goto LAB_0010803b;
          }
          puVar22 = *(undefined4 **)(this + 0x48);
        }
        puVar22[uVar19] = uVar24;
        *(ulong *)(this + 0x50) = uVar19 + 1;
      }
      else {
        if (uVar19 == 0) {
          sVar23 = 0x600;
          uVar26 = 0x80;
LAB_00107fcb:
          puVar18 = (undefined8 *)malloc(sVar23);
          puVar1 = *(undefined8 **)(this + 0x30);
          if (uVar16 == 0) {
LAB_00108014:
            if (puVar1 != (undefined8 *)0x0) goto LAB_00108255;
          }
          else {
            sVar23 = uVar16 * 0xc;
            if ((long)sVar23 < 0xd) {
              if (sVar23 != 0xc) goto LAB_00108014;
              *puVar18 = *puVar1;
              *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar1 + 1);
            }
            else {
              puVar18 = (undefined8 *)memmove(puVar18,puVar1,sVar23);
            }
LAB_00108255:
            free(puVar1);
            uVar16 = *(ulong *)(this + 0x38);
            puVar22 = (undefined4 *)(*(long *)(param_1 + 0x30) + lVar2);
          }
          *(undefined8 **)(this + 0x30) = puVar18;
          *(ulong *)(this + 0x40) = uVar26;
        }
        else {
          uVar26 = uVar19 * 2;
          if (uVar19 < uVar26) {
            sVar23 = uVar19 * 0x18;
            goto LAB_00107fcb;
          }
          puVar18 = *(undefined8 **)(this + 0x30);
        }
        *(ulong *)(this + 0x38) = uVar16 + 1;
        uVar19 = *(ulong *)(this + 0x50);
        puVar18 = (undefined8 *)((long)puVar18 + uVar16 * 0xc);
        *(undefined4 *)(puVar18 + 1) = uVar24;
        *puVar18 = uVar29;
        uVar16 = *(ulong *)(this + 0x58);
        uVar24 = *puVar22;
        if (uVar16 <= uVar19) goto LAB_00107de0;
LAB_00107cf8:
        *(ulong *)(this + 0x50) = uVar19 + 1;
        *(undefined4 *)(*(long *)(this + 0x48) + uVar19 * 4) = uVar24;
      }
      uVar24 = *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar2);
      uVar16 = *(ulong *)(this + 0x68);
      uVar19 = *(ulong *)(this + 0x70);
      if (uVar16 < uVar19) {
        *(ulong *)(this + 0x68) = uVar16 + 1;
        *(undefined4 *)(*(long *)(this + 0x60) + uVar16 * 4) = uVar24;
      }
      else {
        if (uVar19 == 0) {
          sVar23 = 0x200;
          uVar26 = 0x80;
LAB_00107f7b:
          puVar22 = (undefined4 *)malloc(sVar23);
          puVar8 = *(undefined4 **)(this + 0x60);
          if (uVar16 == 0) {
LAB_00107fa2:
            if (puVar8 != (undefined4 *)0x0) goto LAB_001081e1;
          }
          else {
            sVar23 = uVar16 * 4;
            if ((long)sVar23 < 5) {
              if (sVar23 != 4) goto LAB_00107fa2;
              *puVar22 = *puVar8;
            }
            else {
              puVar22 = (undefined4 *)memmove(puVar22,puVar8,sVar23);
            }
LAB_001081e1:
            free(puVar8);
            uVar16 = *(ulong *)(this + 0x68);
          }
          *(undefined4 **)(this + 0x60) = puVar22;
          *(ulong *)(this + 0x70) = uVar26;
        }
        else {
          uVar26 = uVar19 * 2;
          if (uVar19 < uVar26) {
            sVar23 = uVar19 * 8;
            goto LAB_00107f7b;
          }
          puVar22 = *(undefined4 **)(this + 0x60);
        }
        puVar22[uVar16] = uVar24;
        *(ulong *)(this + 0x68) = uVar16 + 1;
      }
      lVar2 = *(long *)(this + 0x38);
      plVar14 = (long *)std::__detail::
                        _Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                        ::operator[]((_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
                                      *)&local_c8,&local_118);
      *plVar14 = lVar2 + -1;
    }
    uVar13 = uVar13 + 1;
    lVar20 = lVar20 + 0xc;
  } while( true );
LAB_00107b6a:
  piVar28 = piVar28 + 1;
  if (&local_44 == piVar28) goto LAB_00107a80;
  goto LAB_00107b24;
}



/* manifold::QuickHull::addPointToFace(manifold::MeshBuilder::Face&, unsigned long) */

undefined8 __thiscall
manifold::QuickHull::addPointToFace(QuickHull *this,Face *param_1,ulong param_2)

{
  double *pdVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  size_t sVar6;
  undefined8 *__src;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  
  pdVar1 = (double *)(*(long *)(this + 0x38) + param_2 * 0x18);
  dVar9 = *pdVar1 * *(double *)(param_1 + 8) + 0.0 + pdVar1[1] * *(double *)(param_1 + 0x10) +
          pdVar1[2] * *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x20);
  if ((dVar9 <= 0.0) || (dVar9 * dVar9 <= *(double *)(this + 8) * *(double *)(param_1 + 0x28))) {
    return 0;
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 == (long *)0x0) {
    lVar4 = *(long *)(this + 0x1f8);
    if (lVar4 == *(long *)(this + 0x1f0)) {
      plVar5 = (long *)operator_new(0x18);
      puVar3 = *(undefined8 **)(param_1 + 0x50);
      *(undefined1 (*) [16])(plVar5 + 1) = (undefined1  [16])0x0;
      *plVar5 = 0;
      plVar5[1] = 0;
    }
    else {
      plVar5 = *(long **)(lVar4 + -8);
      *(long *)(this + 0x1f8) = lVar4 + -8;
      lVar4 = plVar5[1];
      plVar5[1] = 0;
      puVar3 = (undefined8 *)0x0;
      if (lVar4 != 0) {
        lVar4 = 0;
        if ((void *)*plVar5 != (void *)0x0) {
          free((void *)*plVar5);
          lVar4 = plVar5[1];
          puVar3 = *(undefined8 **)(param_1 + 0x50);
        }
        *plVar5 = 0;
        plVar5[2] = lVar4;
      }
    }
    *(long **)(param_1 + 0x50) = plVar5;
    if (puVar3 != (undefined8 *)0x0) {
      if ((void *)*puVar3 != (void *)0x0) {
        free((void *)*puVar3);
      }
      operator_delete(puVar3,0x18);
      plVar5 = *(long **)(param_1 + 0x50);
    }
  }
  uVar7 = plVar5[1];
  uVar2 = plVar5[2];
  if (uVar7 < uVar2) {
    plVar5[1] = uVar7 + 1;
    *(ulong *)(*plVar5 + uVar7 * 8) = param_2;
    goto LAB_001084e8;
  }
  if (uVar2 == 0) {
    sVar6 = 0x400;
    uVar8 = 0x80;
LAB_00108524:
    puVar3 = (undefined8 *)malloc(sVar6);
    __src = (undefined8 *)*plVar5;
    if (uVar7 == 0) {
LAB_00108545:
      if (__src != (undefined8 *)0x0) goto LAB_0010854a;
    }
    else {
      sVar6 = uVar7 * 8;
      if (8 < (long)sVar6) {
        memmove(puVar3,__src,sVar6);
        __src = (undefined8 *)*plVar5;
        goto LAB_00108545;
      }
      if (sVar6 != 8) goto LAB_00108545;
      *puVar3 = *__src;
LAB_0010854a:
      free(__src);
    }
    *plVar5 = (long)puVar3;
    uVar7 = plVar5[1];
    plVar5[2] = uVar8;
  }
  else {
    uVar8 = uVar2 * 2;
    if (uVar2 < uVar8) {
      sVar6 = uVar2 << 4;
      goto LAB_00108524;
    }
    puVar3 = (undefined8 *)*plVar5;
  }
  plVar5[1] = uVar7 + 1;
  puVar3[uVar7] = param_2;
LAB_001084e8:
  if (*(double *)(param_1 + 0x30) <= dVar9 && dVar9 != *(double *)(param_1 + 0x30)) {
    *(ulong *)(param_1 + 0x38) = param_2;
    *(double *)(param_1 + 0x30) = dVar9;
  }
  return 1;
}



/* manifold::QuickHull::~QuickHull() */

void __thiscall manifold::QuickHull::~QuickHull(QuickHull *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  
  puVar3 = *(undefined8 **)(this + 0x1f8);
  puVar4 = *(undefined8 **)(this + 0x1f0);
  if (puVar3 != puVar4) {
    do {
      puVar1 = (undefined8 *)*puVar4;
      if (puVar1 != (undefined8 *)0x0) {
        if ((void *)*puVar1 != (void *)0x0) {
          free((void *)*puVar1);
        }
        operator_delete(puVar1,0x18);
      }
      puVar4 = puVar4 + 1;
    } while (puVar3 != puVar4);
    puVar4 = *(undefined8 **)(this + 0x1f0);
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x200) - (long)puVar4);
  }
  pvVar6 = *(void **)(this + 0x1a0);
  if (pvVar6 != (void *)0x0) {
    lVar2 = *(long *)(this + 0x1e8);
    puVar3 = *(undefined8 **)(this + 0x1c8);
    if (puVar3 < (undefined8 *)(lVar2 + 8U)) {
      do {
        pvVar6 = (void *)*puVar3;
        puVar3 = puVar3 + 1;
        operator_delete(pvVar6,0x200);
      } while (puVar3 < (undefined8 *)(lVar2 + 8U));
      pvVar6 = *(void **)(this + 0x1a0);
    }
    operator_delete(pvVar6,*(long *)(this + 0x1a8) * 8);
  }
  puVar3 = *(undefined8 **)(this + 400);
  puVar4 = *(undefined8 **)(this + 0x188);
  if (puVar3 != puVar4) {
    do {
      puVar1 = (undefined8 *)*puVar4;
      if (puVar1 != (undefined8 *)0x0) {
        if ((void *)*puVar1 != (void *)0x0) {
          free((void *)*puVar1);
        }
        operator_delete(puVar1,0x18);
      }
      puVar4 = puVar4 + 1;
    } while (puVar3 != puVar4);
    puVar4 = *(undefined8 **)(this + 0x188);
  }
  if (puVar4 != (undefined8 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x198) - (long)puVar4);
  }
  if (*(void **)(this + 0x170) != (void *)0x0) {
    free(*(void **)(this + 0x170));
  }
  if (*(void **)(this + 0x158) != (void *)0x0) {
    free(*(void **)(this + 0x158));
  }
  if (*(void **)(this + 0x140) != (void *)0x0) {
    free(*(void **)(this + 0x140));
  }
  if (*(void **)(this + 0x128) != (void *)0x0) {
    free(*(void **)(this + 0x128));
  }
  if (*(void **)(this + 0x110) != (void *)0x0) {
    free(*(void **)(this + 0x110));
  }
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    free(*(void **)(this + 0xc0));
  }
  if (*(void **)(this + 0xa8) != (void *)0x0) {
    free(*(void **)(this + 0xa8));
  }
  if (*(void **)(this + 0x90) != (void *)0x0) {
    free(*(void **)(this + 0x90));
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    free(*(void **)(this + 0x78));
  }
  if (*(void **)(this + 0x60) != (void *)0x0) {
    free(*(void **)(this + 0x60));
  }
  pvVar6 = *(void **)(this + 0x50);
  pvVar5 = *(void **)(this + 0x48);
  if (pvVar6 != pvVar5) {
    do {
      puVar3 = *(undefined8 **)((long)pvVar5 + 0x50);
      if (puVar3 != (undefined8 *)0x0) {
        if ((void *)*puVar3 != (void *)0x0) {
          free((void *)*puVar3);
        }
        operator_delete(puVar3,0x18);
      }
      pvVar5 = (void *)((long)pvVar5 + 0x58);
    } while (pvVar6 != pvVar5);
    pvVar5 = *(void **)(this + 0x48);
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5,*(long *)(this + 0x58) - (long)pvVar5);
  }
  if (*(void **)(this + 0x20) == (void *)0x0) {
    return;
  }
  free(*(void **)(this + 0x20));
  return;
}



/* std::_Hashtable<unsigned long, std::pair<unsigned long const, unsigned long>,
   std::allocator<std::pair<unsigned long const, unsigned long> >, std::__detail::_Select1st,
   std::equal_to<unsigned long>, std::hash<unsigned long>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::~_Hashtable() */

void __thiscall
std::
_Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
::~_Hashtable(_Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
              *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x10);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    operator_delete(puVar2,0x18);
    puVar2 = puVar1;
  }
  memset(*(void **)this,0,*(long *)(this + 8) * 8);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (*(_Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
        **)this != this + 0x30) {
    operator_delete(*(_Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
                      **)this,*(long *)(this + 8) << 3);
    return;
  }
  return;
}



/* void std::vector<manifold::MeshBuilder::Face, std::allocator<manifold::MeshBuilder::Face>
   >::_M_realloc_insert<>(__gnu_cxx::__normal_iterator<manifold::MeshBuilder::Face*,
   std::vector<manifold::MeshBuilder::Face, std::allocator<manifold::MeshBuilder::Face> > >) */

void __thiscall
std::vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>::
_M_realloc_insert<>(vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>
                    *this,undefined4 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  
  puVar3 = *(undefined4 **)(this + 8);
  puVar4 = *(undefined4 **)this;
  lVar12 = (long)puVar3 - (long)puVar4 >> 3;
  uVar13 = lVar12 * 0x2e8ba2e8ba2e8ba3;
  if (uVar13 == 0x1745d1745d1745d) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar4 == puVar3) {
    uVar16 = uVar13 + 1;
    if (0xfffffffffffffffe < uVar13) goto LAB_00108c10;
    if (0x1745d1745d1745d < uVar16) {
      uVar16 = 0x1745d1745d1745d;
    }
    uVar16 = uVar16 * 0x58;
  }
  else {
    uVar16 = lVar12 * 0x5d1745d1745d1746;
    if (uVar16 < uVar13) {
LAB_00108c10:
      uVar16 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar16 == 0) {
        puVar19 = (undefined4 *)0x58;
        lVar12 = 0;
        puVar15 = (undefined4 *)0x0;
        goto LAB_00108a5b;
      }
      if (0x1745d1745d1745d < uVar16) {
        uVar16 = 0x1745d1745d1745d;
      }
      uVar16 = uVar16 * 0x58;
    }
  }
  puVar15 = (undefined4 *)operator_new(uVar16);
  lVar12 = uVar16 + (long)puVar15;
  puVar19 = puVar15 + 0x16;
LAB_00108a5b:
  puVar14 = (undefined4 *)((long)puVar15 + ((long)param_2 - (long)puVar4));
  *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar14 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar14 + 10) = (undefined1  [16])0x0;
  *(byte *)(puVar14 + 0x12) = *(byte *)(puVar14 + 0x12) & 0xe0;
  *puVar14 = 0xffffffff;
  *(undefined8 *)(puVar14 + 0x14) = 0;
  *(undefined1 (*) [16])(puVar14 + 0xe) = (undefined1  [16])0x0;
  puVar14 = puVar15;
  puVar17 = puVar4;
  if (param_2 != puVar4) {
    do {
      puVar19 = puVar17 + 0x16;
      uVar6 = *(undefined8 *)(puVar17 + 2);
      uVar7 = *(undefined8 *)(puVar17 + 4);
      uVar8 = *(undefined8 *)(puVar17 + 6);
      uVar9 = *(undefined8 *)(puVar17 + 8);
      uVar1 = *(undefined8 *)(puVar17 + 0xc);
      uVar10 = *(undefined8 *)(puVar17 + 0xe);
      uVar11 = *(undefined8 *)(puVar17 + 0x10);
      *puVar14 = *puVar17;
      uVar5 = *(undefined8 *)(puVar17 + 10);
      *(undefined8 *)(puVar14 + 2) = uVar6;
      *(undefined8 *)(puVar14 + 4) = uVar7;
      *(undefined8 *)(puVar14 + 6) = uVar8;
      *(undefined8 *)(puVar14 + 8) = uVar9;
      *(undefined8 *)(puVar14 + 10) = uVar5;
      bVar2 = *(byte *)(puVar17 + 0x12);
      *(undefined8 *)(puVar14 + 0xc) = uVar1;
      *(undefined8 *)(puVar14 + 0xe) = uVar10;
      *(undefined8 *)(puVar14 + 0x10) = uVar11;
      *(byte *)(puVar14 + 0x12) = bVar2 & 0x1f | *(byte *)(puVar14 + 0x12) & 0xe0;
      *(undefined8 *)(puVar14 + 0x14) = *(undefined8 *)(puVar17 + 0x14);
      puVar14 = puVar14 + 0x16;
      puVar17 = puVar19;
    } while (param_2 != puVar19);
    puVar19 = puVar15 + (((ulong)((long)param_2 + (-0x58 - (long)puVar4)) >> 3) * 0xe8ba2e8ba2e8ba3
                        & 0x1fffffffffffffff) * 0x16 + 0x2c;
  }
  puVar14 = puVar19;
  puVar17 = param_2;
  if (param_2 != puVar3) {
    do {
      puVar18 = puVar17 + 0x16;
      uVar6 = *(undefined8 *)(puVar17 + 2);
      uVar7 = *(undefined8 *)(puVar17 + 4);
      uVar8 = *(undefined8 *)(puVar17 + 6);
      uVar9 = *(undefined8 *)(puVar17 + 8);
      uVar1 = *(undefined8 *)(puVar17 + 0xc);
      uVar10 = *(undefined8 *)(puVar17 + 0xe);
      uVar11 = *(undefined8 *)(puVar17 + 0x10);
      *puVar14 = *puVar17;
      uVar5 = *(undefined8 *)(puVar17 + 10);
      *(undefined8 *)(puVar14 + 2) = uVar6;
      *(undefined8 *)(puVar14 + 4) = uVar7;
      *(undefined8 *)(puVar14 + 6) = uVar8;
      *(undefined8 *)(puVar14 + 8) = uVar9;
      *(undefined8 *)(puVar14 + 10) = uVar5;
      bVar2 = *(byte *)(puVar17 + 0x12);
      *(undefined8 *)(puVar14 + 0xc) = uVar1;
      *(undefined8 *)(puVar14 + 0xe) = uVar10;
      *(undefined8 *)(puVar14 + 0x10) = uVar11;
      *(byte *)(puVar14 + 0x12) = bVar2 & 0x1f | *(byte *)(puVar14 + 0x12) & 0xe0;
      *(undefined8 *)(puVar14 + 0x14) = *(undefined8 *)(puVar17 + 0x14);
      puVar14 = puVar14 + 0x16;
      puVar17 = puVar18;
    } while (puVar3 != puVar18);
    puVar19 = puVar19 + ((((ulong)((long)puVar3 + (-0x58 - (long)param_2)) >> 3) * 0xe8ba2e8ba2e8ba3
                         & 0x1fffffffffffffff) + 1) * 0x16;
  }
  if (puVar4 != (undefined4 *)0x0) {
    operator_delete(puVar4,*(long *)(this + 0x10) - (long)puVar4);
  }
  *(undefined4 **)this = puVar15;
  *(undefined4 **)(this + 8) = puVar19;
  *(long *)(this + 0x10) = lVar12;
  return;
}



/* void std::vector<manifold::MeshBuilder::Face, std::allocator<manifold::MeshBuilder::Face>
   >::_M_realloc_insert<int>(__gnu_cxx::__normal_iterator<manifold::MeshBuilder::Face*,
   std::vector<manifold::MeshBuilder::Face, std::allocator<manifold::MeshBuilder::Face> > >, int&&)
    */

void __thiscall
std::vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>>::
_M_realloc_insert<int>
          (vector<manifold::MeshBuilder::Face,std::allocator<manifold::MeshBuilder::Face>> *this,
          undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulong uVar19;
  undefined4 *puVar20;
  
  puVar4 = *(undefined4 **)(this + 8);
  puVar5 = *(undefined4 **)this;
  lVar13 = (long)puVar4 - (long)puVar5 >> 3;
  uVar14 = lVar13 * 0x2e8ba2e8ba2e8ba3;
  if (uVar14 == 0x1745d1745d1745d) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar5 == puVar4) {
    uVar19 = uVar14 + 1;
    if (0xfffffffffffffffe < uVar14) goto LAB_00108ec0;
    if (0x1745d1745d1745d < uVar19) {
      uVar19 = 0x1745d1745d1745d;
    }
    uVar19 = uVar19 * 0x58;
  }
  else {
    uVar19 = lVar13 * 0x5d1745d1745d1746;
    if (uVar19 < uVar14) {
LAB_00108ec0:
      uVar19 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar19 == 0) {
        puVar20 = (undefined4 *)0x58;
        lVar13 = 0;
        puVar16 = (undefined4 *)0x0;
        goto LAB_00108d0b;
      }
      if (0x1745d1745d1745d < uVar19) {
        uVar19 = 0x1745d1745d1745d;
      }
      uVar19 = uVar19 * 0x58;
    }
  }
  puVar16 = (undefined4 *)operator_new(uVar19);
  lVar13 = uVar19 + (long)puVar16;
  puVar20 = puVar16 + 0x16;
LAB_00108d0b:
  puVar15 = (undefined4 *)((long)puVar16 + ((long)param_2 - (long)puVar5));
  uVar3 = *param_3;
  *(undefined1 (*) [16])(puVar15 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar15 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar15 + 10) = (undefined1  [16])0x0;
  *(byte *)(puVar15 + 0x12) = *(byte *)(puVar15 + 0x12) & 0xe0;
  *puVar15 = uVar3;
  *(undefined8 *)(puVar15 + 0x14) = 0;
  *(undefined1 (*) [16])(puVar15 + 0xe) = (undefined1  [16])0x0;
  puVar15 = puVar16;
  puVar17 = puVar5;
  if (param_2 != puVar5) {
    do {
      puVar20 = puVar17 + 0x16;
      uVar7 = *(undefined8 *)(puVar17 + 2);
      uVar8 = *(undefined8 *)(puVar17 + 4);
      uVar9 = *(undefined8 *)(puVar17 + 6);
      uVar10 = *(undefined8 *)(puVar17 + 8);
      uVar1 = *(undefined8 *)(puVar17 + 0xc);
      uVar11 = *(undefined8 *)(puVar17 + 0xe);
      uVar12 = *(undefined8 *)(puVar17 + 0x10);
      *puVar15 = *puVar17;
      uVar6 = *(undefined8 *)(puVar17 + 10);
      *(undefined8 *)(puVar15 + 2) = uVar7;
      *(undefined8 *)(puVar15 + 4) = uVar8;
      *(undefined8 *)(puVar15 + 6) = uVar9;
      *(undefined8 *)(puVar15 + 8) = uVar10;
      *(undefined8 *)(puVar15 + 10) = uVar6;
      bVar2 = *(byte *)(puVar17 + 0x12);
      *(undefined8 *)(puVar15 + 0xc) = uVar1;
      *(undefined8 *)(puVar15 + 0xe) = uVar11;
      *(undefined8 *)(puVar15 + 0x10) = uVar12;
      *(byte *)(puVar15 + 0x12) = bVar2 & 0x1f | *(byte *)(puVar15 + 0x12) & 0xe0;
      *(undefined8 *)(puVar15 + 0x14) = *(undefined8 *)(puVar17 + 0x14);
      puVar15 = puVar15 + 0x16;
      puVar17 = puVar20;
    } while (param_2 != puVar20);
    puVar20 = puVar16 + (((ulong)((long)param_2 + (-0x58 - (long)puVar5)) >> 3) * 0xe8ba2e8ba2e8ba3
                        & 0x1fffffffffffffff) * 0x16 + 0x2c;
  }
  puVar15 = puVar20;
  puVar17 = param_2;
  if (param_2 != puVar4) {
    do {
      puVar18 = puVar17 + 0x16;
      uVar7 = *(undefined8 *)(puVar17 + 2);
      uVar8 = *(undefined8 *)(puVar17 + 4);
      uVar9 = *(undefined8 *)(puVar17 + 6);
      uVar10 = *(undefined8 *)(puVar17 + 8);
      uVar1 = *(undefined8 *)(puVar17 + 0xc);
      uVar11 = *(undefined8 *)(puVar17 + 0xe);
      uVar12 = *(undefined8 *)(puVar17 + 0x10);
      *puVar15 = *puVar17;
      uVar6 = *(undefined8 *)(puVar17 + 10);
      *(undefined8 *)(puVar15 + 2) = uVar7;
      *(undefined8 *)(puVar15 + 4) = uVar8;
      *(undefined8 *)(puVar15 + 6) = uVar9;
      *(undefined8 *)(puVar15 + 8) = uVar10;
      *(undefined8 *)(puVar15 + 10) = uVar6;
      bVar2 = *(byte *)(puVar17 + 0x12);
      *(undefined8 *)(puVar15 + 0xc) = uVar1;
      *(undefined8 *)(puVar15 + 0xe) = uVar11;
      *(undefined8 *)(puVar15 + 0x10) = uVar12;
      *(byte *)(puVar15 + 0x12) = bVar2 & 0x1f | *(byte *)(puVar15 + 0x12) & 0xe0;
      *(undefined8 *)(puVar15 + 0x14) = *(undefined8 *)(puVar17 + 0x14);
      puVar15 = puVar15 + 0x16;
      puVar17 = puVar18;
    } while (puVar4 != puVar18);
    puVar20 = puVar20 + ((((ulong)((long)puVar4 + (-0x58 - (long)param_2)) >> 3) * 0xe8ba2e8ba2e8ba3
                         & 0x1fffffffffffffff) + 1) * 0x16;
  }
  if (puVar5 != (undefined4 *)0x0) {
    operator_delete(puVar5,*(long *)(this + 0x10) - (long)puVar5);
  }
  *(undefined4 **)this = puVar16;
  *(undefined4 **)(this + 8) = puVar20;
  *(long *)(this + 0x10) = lVar13;
  return;
}



/* void std::vector<unsigned long, std::allocator<unsigned long> >::_M_realloc_insert<unsigned
   long>(__gnu_cxx::__normal_iterator<unsigned long*, std::vector<unsigned long,
   std::allocator<unsigned long> > >, unsigned long&&) */

void __thiscall
std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_realloc_insert<unsigned_long>
          (vector<unsigned_long,std::allocator<unsigned_long>> *this,void *param_2,
          undefined8 *param_3)

{
  void *__dest;
  void *pvVar1;
  void *__src;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  long lVar4;
  size_t __n_00;
  
  pvVar1 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar2 = (long)pvVar1 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar1) {
    if (0xfffffffffffffffe < uVar2) goto LAB_00109010;
    uVar3 = 0xfffffffffffffff;
    if (uVar2 + 1 < 0x1000000000000000) {
      uVar3 = uVar2 + 1;
    }
    uVar3 = uVar3 << 3;
LAB_0010901a:
    __dest_00 = operator_new(uVar3);
    lVar4 = uVar3 + (long)__dest_00;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
LAB_00109010:
      uVar3 = 0x7ffffffffffffff8;
      goto LAB_0010901a;
    }
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_0010901a;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = (long)pvVar1 - (long)param_2;
  *(undefined8 *)((long)__dest_00 + __n) = *param_3;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00108fec;
  }
  else {
    __dest_00 = memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) {
      memcpy(__dest,param_2,__n_00);
    }
  }
  operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
LAB_00108fec:
  *(void **)this = __dest_00;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  *(long *)(this + 0x10) = lVar4;
  return;
}



/* void std::vector<std::unique_ptr<manifold::Vec<unsigned long>,
   std::default_delete<manifold::Vec<unsigned long> > >,
   std::allocator<std::unique_ptr<manifold::Vec<unsigned long>,
   std::default_delete<manifold::Vec<unsigned long> > > >
   >::_M_realloc_insert<std::unique_ptr<manifold::Vec<unsigned long>,
   std::default_delete<manifold::Vec<unsigned long> > >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<manifold::Vec<unsigned long>,
   std::default_delete<manifold::Vec<unsigned long> > >*,
   std::vector<std::unique_ptr<manifold::Vec<unsigned long>,
   std::default_delete<manifold::Vec<unsigned long> > >,
   std::allocator<std::unique_ptr<manifold::Vec<unsigned long>,
   std::default_delete<manifold::Vec<unsigned long> > > > > >,
   std::unique_ptr<manifold::Vec<unsigned long>, std::default_delete<manifold::Vec<unsigned long> >
   >&&) */

void __thiscall
std::
vector<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>,std::allocator<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>>
::
_M_realloc_insert<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>
          (vector<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>,std::allocator<std::unique_ptr<manifold::Vec<unsigned_long>,std::default_delete<manifold::Vec<unsigned_long>>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long local_50;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar4 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar4 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (puVar2 == puVar1) {
    if (0xfffffffffffffffe < uVar4) goto LAB_001091e0;
    uVar8 = 0xfffffffffffffff;
    if (uVar4 + 1 < 0x1000000000000000) {
      uVar8 = uVar4 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_001091ea:
    puVar5 = (undefined8 *)operator_new(uVar8);
    local_50 = (long)puVar5 + uVar8;
    uVar3 = *param_3;
    puVar6 = puVar5 + 1;
    *param_3 = 0;
    *(undefined8 *)((long)puVar5 + ((long)param_2 - (long)puVar2)) = uVar3;
    if (param_2 != puVar2) {
LAB_00109164:
      puVar6 = puVar2;
      puVar7 = puVar5;
      do {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
      } while (puVar6 != param_2);
      puVar6 = (undefined8 *)((long)puVar5 + (long)param_2 + (8 - (long)puVar2));
    }
    puVar7 = puVar6;
    if (param_2 == puVar1) goto LAB_001091a2;
  }
  else {
    uVar8 = uVar4 * 2;
    if (uVar8 < uVar4) {
LAB_001091e0:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_001091ea;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_001091ea;
    }
    uVar3 = *param_3;
    puVar5 = (undefined8 *)0x0;
    *param_3 = 0;
    puVar6 = (undefined8 *)0x8;
    local_50 = 0;
    *(undefined8 *)((long)param_2 - (long)puVar2) = uVar3;
    if (param_2 != puVar2) goto LAB_00109164;
  }
  puVar7 = (undefined8 *)((long)puVar6 + ((long)puVar1 - (long)param_2));
  memcpy(puVar6,param_2,(long)puVar1 - (long)param_2);
LAB_001091a2:
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar7;
  *(long *)(this + 0x10) = local_50;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Hashtable<unsigned long, std::pair<unsigned long const, unsigned long>,
   std::allocator<std::pair<unsigned long const, unsigned long> >, std::__detail::_Select1st,
   std::equal_to<unsigned long>, std::hash<unsigned long>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::_M_insert_unique_node(unsigned long,
   unsigned long, std::__detail::_Hash_node<std::pair<unsigned long const, unsigned long>, false>*,
   unsigned long) */

ulong std::
      _Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
      ::_M_insert_unique_node(ulong param_1,ulong param_2,_Hash_node *param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  void *__s;
  ulong extraout_RDX;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  cVar3 = std::__detail::_Prime_rehash_policy::_M_need_rehash
                    (param_1 + 0x20,*(ulong *)(param_1 + 8),*(ulong *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    __s = *(void **)param_1;
    plVar5 = (long *)((long)__s + param_2 * 8);
    puVar2 = (undefined8 *)*plVar5;
  }
  else {
    if (extraout_RDX == 1) {
      __s = (void *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      if (extraout_RDX >> 0x3c != 0) {
        if (extraout_RDX >> 0x3d != 0) {
          std::__throw_bad_array_new_length();
        }
        std::__throw_bad_alloc();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      __s = operator_new(extraout_RDX * 8);
      memset(__s,0,extraout_RDX * 8);
    }
    plVar5 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar4 = 0;
    while (uVar7 = uVar4, plVar6 = plVar5, plVar5 != (long *)0x0) {
      while( true ) {
        plVar5 = (long *)*plVar6;
        uVar4 = (ulong)plVar6[1] % extraout_RDX;
        plVar1 = (long *)((long)__s + uVar4 * 8);
        if ((long *)*plVar1 == (long *)0x0) break;
        *plVar6 = *(long *)*plVar1;
        *(long **)*plVar1 = plVar6;
        plVar6 = plVar5;
        if (plVar5 == (long *)0x0) goto LAB_00109382;
      }
      *plVar6 = *(long *)(param_1 + 0x10);
      *(long **)(param_1 + 0x10) = plVar6;
      *plVar1 = param_1 + 0x10;
      if (*plVar6 != 0) {
        *(long **)((long)__s + uVar7 * 8) = plVar6;
      }
    }
LAB_00109382:
    if (*(void **)param_1 != (void *)(param_1 + 0x30)) {
      operator_delete(*(void **)param_1,*(long *)(param_1 + 8) << 3);
    }
    *(ulong *)(param_1 + 8) = extraout_RDX;
    *(void **)param_1 = __s;
    plVar5 = (long *)((long)__s + ((ulong)param_3 % extraout_RDX) * 8);
    puVar2 = (undefined8 *)*plVar5;
  }
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = param_4;
    if (*(long *)param_4 != 0) {
      *(ulong *)((long)__s + (*(ulong *)(*(long *)param_4 + 8) % *(ulong *)(param_1 + 8)) * 8) =
           param_4;
    }
    *plVar5 = param_1 + 0x10;
  }
  else {
    *(undefined8 *)param_4 = *puVar2;
    *(ulong *)*plVar5 = param_4;
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return param_4;
}



/* std::__detail::_Map_base<unsigned long, std::pair<unsigned long const, unsigned long>,
   std::allocator<std::pair<unsigned long const, unsigned long> >, std::__detail::_Select1st,
   std::equal_to<unsigned long>, std::hash<unsigned long>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>, true>::operator[](unsigned long const&) */

long __thiscall
std::__detail::
_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *this,ulong *param_1)

{
  _Hash_node *p_Var1;
  long *plVar2;
  _Hash_node *p_Var3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  
  p_Var1 = (_Hash_node *)*param_1;
  uVar9 = (ulong)p_Var1 % *(ulong *)(this + 8);
  plVar2 = *(long **)(*(long *)this + uVar9 * 8);
  if (plVar2 != (long *)0x0) {
    p_Var3 = (_Hash_node *)((long *)*plVar2)[1];
    plVar6 = (long *)*plVar2;
    while (p_Var1 != p_Var3) {
      plVar4 = (long *)*plVar6;
      if ((plVar4 == (long *)0x0) ||
         (p_Var3 = (_Hash_node *)plVar4[1], plVar2 = plVar6, plVar6 = plVar4,
         uVar9 != (ulong)p_Var3 % *(ulong *)(this + 8))) goto LAB_001094c0;
    }
    if (*plVar2 != 0) {
      return *plVar2 + 0x10;
    }
  }
LAB_001094c0:
  puVar7 = (undefined8 *)operator_new(0x18);
  *puVar7 = 0;
  uVar5 = *param_1;
  puVar7[2] = 0;
  puVar7[1] = uVar5;
  lVar8 = _Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
          ::_M_insert_unique_node((ulong)this,uVar9,p_Var1,(ulong)puVar7);
  return lVar8 + 0x10;
}



/* std::__detail::_Map_base<unsigned long, std::pair<unsigned long const, unsigned long>,
   std::allocator<std::pair<unsigned long const, unsigned long> >, std::__detail::_Select1st,
   std::equal_to<unsigned long>, std::hash<unsigned long>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true>, true>::operator[](unsigned long&&) */

long __thiscall
std::__detail::
_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
::operator[](_Map_base<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>
             *this,ulong *param_1)

{
  _Hash_node *p_Var1;
  long *plVar2;
  _Hash_node *p_Var3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  
  p_Var1 = (_Hash_node *)*param_1;
  uVar9 = (ulong)p_Var1 % *(ulong *)(this + 8);
  plVar2 = *(long **)(*(long *)this + uVar9 * 8);
  if (plVar2 != (long *)0x0) {
    p_Var3 = (_Hash_node *)((long *)*plVar2)[1];
    plVar6 = (long *)*plVar2;
    while (p_Var1 != p_Var3) {
      plVar4 = (long *)*plVar6;
      if ((plVar4 == (long *)0x0) ||
         (p_Var3 = (_Hash_node *)plVar4[1], plVar2 = plVar6, plVar6 = plVar4,
         uVar9 != (ulong)p_Var3 % *(ulong *)(this + 8))) goto LAB_00109590;
    }
    if (*plVar2 != 0) {
      return *plVar2 + 0x10;
    }
  }
LAB_00109590:
  puVar7 = (undefined8 *)operator_new(0x18);
  *puVar7 = 0;
  uVar5 = *param_1;
  puVar7[2] = 0;
  puVar7[1] = uVar5;
  lVar8 = _Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
          ::_M_insert_unique_node((ulong)this,uVar9,p_Var1,(ulong)puVar7);
  return lVar8 + 0x10;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::_Hashtable<unsigned long, std::pair<unsigned long const, unsigned long>,
   std::allocator<std::pair<unsigned long const, unsigned long> >, std::__detail::_Select1st,
   std::equal_to<unsigned long>, std::hash<unsigned long>, std::__detail::_Mod_range_hashing,
   std::__detail::_Default_ranged_hash, std::__detail::_Prime_rehash_policy,
   std::__detail::_Hashtable_traits<false, false, true> >::~_Hashtable() */

void __thiscall
std::
_Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
::~_Hashtable(_Hashtable<unsigned_long,std::pair<unsigned_long_const,unsigned_long>,std::allocator<std::pair<unsigned_long_const,unsigned_long>>,std::__detail::_Select1st,std::equal_to<unsigned_long>,std::hash<unsigned_long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* manifold::QuickHull::~QuickHull() */

void __thiscall manifold::QuickHull::~QuickHull(QuickHull *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


