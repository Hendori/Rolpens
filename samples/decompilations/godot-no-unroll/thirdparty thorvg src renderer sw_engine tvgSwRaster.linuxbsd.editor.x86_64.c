
/* opBlendNormal(unsigned int, unsigned int, unsigned char) */

int opBlendNormal(uint param_1,uint param_2,uchar param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (param_1 >> 8 & 0xff00ff) * (param_3 + 1) & 0xff00ff00 |
          (param_1 & 0xff00ff) * (param_3 + 1) >> 8 & 0xff00ff;
  iVar2 = (~uVar1 >> 0x18) + 1;
  return ((param_2 >> 8 & 0xff00ff) * iVar2 & 0xff00ff00 |
         (param_2 & 0xff00ff) * iVar2 >> 8 & 0xff00ff) + uVar1;
}



/* opBlendPreNormal(unsigned int, unsigned int, unsigned char) */

int opBlendPreNormal(uint param_1,uint param_2,uchar param_3)

{
  int iVar1;
  
  iVar1 = (~param_1 >> 0x18) + 1;
  return ((param_2 >> 8 & 0xff00ff) * iVar1 & 0xff00ff00 |
         (param_2 & 0xff00ff) * iVar1 >> 8 & 0xff00ff) + param_1;
}



/* opBlendSrcOver(unsigned int, unsigned int, unsigned char) */

uint opBlendSrcOver(uint param_1,uint param_2,uchar param_3)

{
  return param_1;
}



void FUN_00100904(undefined8 param_1,int param_2,long param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  long unaff_RBX;
  ushort *unaff_RBP;
  long unaff_R12;
  SwSurface *unaff_R14;
  uint uVar6;
  SwFill *in_stack_00000008;
  _func_uchar_uchar_uchar_uchar *in_stack_00000010;
  
  iVar5 = *(int *)(param_3 + 0x38);
  if (param_2 != 0) {
    uVar6 = 0;
    do {
      puVar1 = unaff_RBP + 1;
      uVar4 = *unaff_RBP;
      puVar2 = unaff_RBP + 3;
      puVar3 = unaff_RBP + 2;
      uVar6 = uVar6 + 1;
      unaff_RBP = unaff_RBP + 4;
      fillLinear(in_stack_00000008,
                 (uchar *)((ulong)(iVar5 * (uint)*puVar1 + (uint)uVar4) + unaff_R12),(uint)*puVar1,
                 (uint)uVar4,(uint)*puVar3,in_stack_00000010,(uchar)*puVar2);
    } while (uVar6 < *(uint *)(unaff_RBX + 0xc));
    param_3 = *(long *)(unaff_R14 + 0x70);
  }
  _compositeMaskImage(unaff_R14,(SwImage *)(param_3 + 0x18),(SwBBox *)(param_3 + 0x50));
  return;
}



void switchD_0010070a::caseD_6(void)

{
  code *pcStack0000000000000010;
  
  pcStack0000000000000010 = _opMaskAdd;
  FUN_00100904();
  return;
}



/* opBlendInterp(unsigned int, unsigned int, unsigned char) */

uint opBlendInterp(uint param_1,uint param_2,uchar param_3)

{
  return ((param_1 >> 8 & 0xff00ff) - (param_2 >> 8 & 0xff00ff)) * (uint)param_3 +
         (param_2 & 0xff00ff00) & 0xff00ff00 |
         (((param_1 & 0xff00ff) - (param_2 & 0xff00ff)) * (uint)param_3 >> 8) + (param_2 & 0xff00ff)
         & 0xff00ff;
}



void FUN_001017d3(byte param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  uint uVar5;
  long in_RAX;
  SwSurface *unaff_RBX;
  undefined8 *in_R10;
  code *unaff_R13;
  ushort *puVar6;
  long lVar7;
  uint uStack0000000000000008;
  
  puVar6 = (ushort *)*in_R10;
  lVar3 = *(long *)(in_RAX + 0x28);
  iVar2 = *(int *)(in_RAX + 0x38);
  if (*(int *)((long)in_R10 + 0xc) != 0) {
    uStack0000000000000008 = 0;
    do {
      lVar1 = lVar3 + (ulong)((uint)puVar6[1] * iVar2 + (uint)*puVar6);
      uVar5 = (uint)param_1;
      if ((byte)puVar6[3] != 0xff) {
        uVar5 = (int)((uint)(byte)puVar6[3] * (uint)param_1 + 0xff) >> 8;
      }
      lVar7 = 0;
      if (puVar6[2] != 0) {
        do {
          uVar4 = (*unaff_R13)(uVar5,*(undefined1 *)(lVar1 + lVar7),0xff - uVar5);
          *(undefined1 *)(lVar1 + lVar7) = uVar4;
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)(uint)puVar6[2]);
      }
      uStack0000000000000008 = uStack0000000000000008 + 1;
      puVar6 = puVar6 + 4;
    } while (uStack0000000000000008 < *(uint *)((long)in_R10 + 0xc));
    in_RAX = *(long *)(unaff_RBX + 0x70);
  }
  _compositeMaskImage(unaff_RBX,(SwImage *)(in_RAX + 0x18),(SwBBox *)(in_RAX + 0x50));
  return;
}



void switchD_00101434::caseD_6(void)

{
  FUN_001017d3();
  return;
}



void FUN_001020b4(undefined8 param_1,int param_2,long param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  long unaff_RBX;
  ushort *unaff_RBP;
  long unaff_R12;
  SwSurface *unaff_R14;
  uint uVar6;
  SwFill *in_stack_00000008;
  _func_uchar_uchar_uchar_uchar *in_stack_00000010;
  
  iVar5 = *(int *)(param_3 + 0x38);
  if (param_2 != 0) {
    uVar6 = 0;
    do {
      puVar1 = unaff_RBP + 1;
      uVar4 = *unaff_RBP;
      puVar2 = unaff_RBP + 3;
      puVar3 = unaff_RBP + 2;
      uVar6 = uVar6 + 1;
      unaff_RBP = unaff_RBP + 4;
      fillRadial(in_stack_00000008,
                 (uchar *)((ulong)(iVar5 * (uint)*puVar1 + (uint)uVar4) + unaff_R12),(uint)*puVar1,
                 (uint)uVar4,(uint)*puVar3,in_stack_00000010,(uchar)*puVar2);
    } while (uVar6 < *(uint *)(unaff_RBX + 0xc));
    param_3 = *(long *)(unaff_R14 + 0x70);
  }
  _compositeMaskImage(unaff_R14,(SwImage *)(param_3 + 0x18),(SwBBox *)(param_3 + 0x50));
  return;
}



void switchD_00101eba::caseD_6(void)

{
  code *pcStack0000000000000010;
  
  pcStack0000000000000010 = _opMaskAdd;
  FUN_001020b4();
  return;
}



/* rasterTranslucentPixel32(unsigned int*, unsigned int*, unsigned int, unsigned char) */

void rasterTranslucentPixel32(uint *param_1,uint *param_2,uint param_3,uchar param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_4 == 0xff) {
    if (param_3 != 0) {
      puVar1 = param_2 + param_3;
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        iVar3 = (~uVar2 >> 0x18) + 1;
        *param_1 = ((*param_1 >> 8 & 0xff00ff) * iVar3 & 0xff00ff00 |
                   (*param_1 & 0xff00ff) * iVar3 >> 8 & 0xff00ff) + uVar2;
        param_1 = param_1 + 1;
      } while (param_2 != puVar1);
      return;
    }
  }
  else {
    if (param_3 == 0) {
      return;
    }
    iVar3 = param_4 + 1;
    puVar1 = param_2 + param_3;
    do {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = (uVar2 >> 8 & 0xff00ff) * iVar3 & 0xff00ff00 |
              (uVar2 & 0xff00ff) * iVar3 >> 8 & 0xff00ff;
      iVar4 = (~uVar2 >> 0x18) + 1;
      *param_1 = ((*param_1 >> 8 & 0xff00ff) * iVar4 & 0xff00ff00 |
                 (*param_1 & 0xff00ff) * iVar4 >> 8 & 0xff00ff) + uVar2;
      param_1 = param_1 + 1;
    } while (param_2 != puVar1);
  }
  return;
}



/* rasterPixel32(unsigned int*, unsigned int*, unsigned int, unsigned char) */

void rasterPixel32(uint *param_1,uint *param_2,uint param_3,uchar param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_4 == 0xff) {
    if (param_3 != 0) {
      lVar2 = 0;
      do {
        *(undefined4 *)((long)param_1 + lVar2) = *(undefined4 *)((long)param_2 + lVar2);
        lVar2 = lVar2 + 4;
      } while ((ulong)param_3 << 2 != lVar2);
      return;
    }
  }
  else {
    if (param_3 == 0) {
      return;
    }
    iVar4 = param_4 + 1;
    puVar1 = param_2 + param_3;
    do {
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = (uVar3 >> 8 & 0xff00ff) * iVar4 & 0xff00ff00 |
              (uVar3 & 0xff00ff) * iVar4 >> 8 & 0xff00ff;
      iVar5 = (~uVar3 >> 0x18) + 1;
      *param_1 = ((*param_1 >> 8 & 0xff00ff) * iVar5 & 0xff00ff00 |
                 (*param_1 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + uVar3;
      param_1 = param_1 + 1;
    } while (param_2 != puVar1);
  }
  return;
}



/* rasterGrayscale8(unsigned char*, unsigned char, unsigned int, int) */

void rasterGrayscale8(uchar *param_1,uchar param_2,uint param_3,int param_4)

{
  uchar *puVar1;
  uchar *puVar2;
  uint uVar3;
  ulong __n;
  uchar *__s;
  uint uVar4;
  
  __n = (ulong)(uint)param_4;
  __s = param_1 + param_3;
  if (0 < (long)__s % 8) {
    if (param_4 < 1) goto LAB_00104f6b;
    puVar1 = __s + (8 - (long)__s % 8);
    puVar2 = __s;
    do {
      __s = puVar2 + 1;
      uVar3 = (int)__n - 1;
      __n = (ulong)uVar3;
      *puVar2 = param_2;
      if (puVar1 == __s || (long)puVar1 - (long)__s < 0) break;
      puVar2 = __s;
    } while (0 < (int)uVar3);
  }
  if (7 < (int)__n) {
    uVar3 = (int)__n - 8;
    uVar4 = uVar3 >> 3;
    puVar1 = __s + (ulong)(uVar4 + 1) * 8;
    do {
      *(ulong *)__s = CONCAT44((uint)param_2 * 0x1010101,(uint)param_2 * 0x1010101);
      __s = __s + 8;
    } while (__s != puVar1);
    __n = (ulong)(uVar3 + uVar4 * -8);
    __s = puVar1;
  }
LAB_00104f6b:
  if ((int)__n == 0) {
    return;
  }
  memset(__s,(uint)param_2,__n);
  return;
}



/* rasterPixel32(unsigned int*, unsigned int, unsigned int, int) */

void rasterPixel32(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1 + param_3;
  if (((0 < (long)puVar2 % 8) && (3 < (long)puVar2 % 8)) && (0 < param_4)) {
    *puVar2 = param_2;
    puVar2 = puVar2 + 1;
    param_4 = param_4 + -1;
  }
  if (1 < param_4) {
    uVar3 = param_4 - 2U >> 1;
    puVar1 = puVar2 + (ulong)(uVar3 + 1) * 2;
    do {
      *(ulong *)puVar2 = CONCAT44(param_2,param_2);
      puVar2 = puVar2 + 2;
    } while (puVar2 != puVar1);
    param_4 = (param_4 - 2U) + uVar3 * -2;
    puVar2 = puVar1;
  }
  if (param_4 != 0) {
    *puVar2 = param_2;
  }
  return;
}



/* rasterCompositor(SwSurface*) */

undefined8 rasterCompositor(SwSurface *param_1)

{
  *(code **)(param_1 + 0x48) = _alpha;
  *(code **)(param_1 + 0x50) = _ialpha;
  if (((byte)param_1[0x3c] & 0xfd) == 0) {
    *(code **)(param_1 + 0x40) = _abgrJoin;
    *(code **)(param_1 + 0x58) = _abgrLuma;
    *(code **)(param_1 + 0x60) = _abgrInvLuma;
  }
  else {
    if (((byte)param_1[0x3c] & 0xfd) != 1) {
      return 0;
    }
    *(code **)(param_1 + 0x40) = _argbJoin;
    *(code **)(param_1 + 0x58) = _argbLuma;
    *(code **)(param_1 + 0x60) = _argbInvLuma;
  }
  return 1;
}



/* rasterClear(SwSurface*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

undefined4
rasterClear(SwSurface *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  uint *puVar2;
  void *pvVar3;
  uint uVar4;
  size_t sVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  
  if (param_1 == (SwSurface *)0x0) {
    return 0;
  }
  lVar11 = *(long *)param_1;
  if (lVar11 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  if (uVar4 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return 0;
  }
  if (param_1[0x3d] == (SwSurface)0x4) {
    if (uVar4 != param_4) {
      if (param_5 == 0) {
        return 1;
      }
      uVar10 = param_5 + param_3;
      while( true ) {
        puVar2 = (uint *)(lVar11 + (ulong)(uVar4 * param_3 + param_2) * 4);
        uVar4 = param_4;
        if (((0 < (long)puVar2 % 8) && (3 < (long)puVar2 % 8)) && (0 < (int)param_4)) {
          *puVar2 = param_6;
          puVar2 = puVar2 + 1;
          uVar4 = param_4 - 1;
        }
        if (1 < (int)uVar4) {
          uVar12 = uVar4 - 2 >> 1;
          puVar1 = puVar2 + (ulong)(uVar12 + 1) * 2;
          do {
            *(ulong *)puVar2 = CONCAT44(param_6,param_6);
            puVar2 = puVar2 + 2;
          } while (puVar2 != puVar1);
          uVar4 = (uVar4 - 2) + uVar12 * -2;
          puVar2 = puVar1;
        }
        if (uVar4 != 0) {
          *puVar2 = param_6;
        }
        param_3 = param_3 + 1;
        if (uVar10 == param_3) break;
        uVar4 = *(uint *)(param_1 + 0x30);
      }
      return 1;
    }
    iVar9 = param_5 * uVar4;
    puVar2 = (uint *)(lVar11 + (ulong)(uVar4 * param_3) * 4);
    if (((0 < (long)puVar2 % 8) && (3 < (long)puVar2 % 8)) && (0 < iVar9)) {
      *puVar2 = param_6;
      puVar2 = puVar2 + 1;
      iVar9 = iVar9 + -1;
    }
    if (1 < iVar9) {
      uVar4 = iVar9 - 2U >> 1;
      puVar1 = puVar2 + (ulong)(uVar4 + 1) * 2;
      do {
        *(ulong *)puVar2 = CONCAT44(param_6,param_6);
        puVar2 = puVar2 + 2;
      } while (puVar2 != puVar1);
      iVar9 = (iVar9 - 2U) + uVar4 * -2;
      puVar2 = puVar1;
    }
    if (iVar9 == 0) {
      return 1;
    }
    *puVar2 = param_6;
    return 1;
  }
  if (param_1[0x3d] != (SwSurface)0x1) {
    return 1;
  }
  if (uVar4 != param_4) {
    uVar10 = param_5 + param_3;
    if (param_5 == 0) {
      return 1;
    }
    do {
      puVar7 = (undefined1 *)((ulong)(uVar4 * param_3 + param_2) + lVar11);
      if ((long)puVar7 % 8 < 1) {
        sVar5 = (size_t)param_4;
LAB_0010528a:
        if (7 < (int)sVar5) {
          uVar4 = (int)sVar5 - 8;
          uVar12 = uVar4 >> 3;
          sVar5 = (ulong)(uVar12 + 1) * 8;
          pvVar3 = memset(puVar7,0,sVar5);
          puVar7 = (undefined1 *)((long)pvVar3 + sVar5);
          sVar5 = (size_t)(uVar4 + uVar12 * -8);
        }
      }
      else {
        sVar5 = (size_t)param_4;
        if (0 < (int)param_4) {
          sVar5 = (size_t)param_4;
          puVar6 = puVar7 + (8 - (long)puVar7 % 8);
          puVar8 = puVar7;
          do {
            puVar7 = puVar8 + 1;
            uVar4 = (int)sVar5 - 1;
            sVar5 = (size_t)uVar4;
            *puVar8 = 0;
            if (puVar6 == puVar7 || (long)puVar6 - (long)puVar7 < 0) break;
            puVar8 = puVar7;
          } while (0 < (int)uVar4);
          goto LAB_0010528a;
        }
      }
      if ((int)sVar5 != 0) {
        memset(puVar7,0,sVar5);
      }
      param_3 = param_3 + 1;
      if (uVar10 == param_3) {
        return 1;
      }
      uVar4 = *(uint *)(param_1 + 0x30);
      lVar11 = *(long *)param_1;
    } while( true );
  }
  uVar10 = param_5 * uVar4;
  puVar7 = (undefined1 *)(lVar11 + (ulong)(uVar4 * param_3));
  if (0 < (long)puVar7 % 8) {
    if ((int)uVar10 < 1) goto LAB_0010540a;
    puVar6 = puVar7 + (8 - (long)puVar7 % 8);
    puVar8 = puVar7;
    do {
      puVar7 = puVar8 + 1;
      uVar10 = uVar10 - 1;
      *puVar8 = 0;
      if (puVar6 == puVar7 || (long)puVar6 - (long)puVar7 < 0) break;
      puVar8 = puVar7;
    } while (0 < (int)uVar10);
  }
  if (7 < (int)uVar10) {
    uVar4 = uVar10 - 8 >> 3;
    sVar5 = (ulong)(uVar4 + 1) * 8;
    pvVar3 = memset(puVar7,0,sVar5);
    uVar10 = (uVar10 - 8) + uVar4 * -8;
    puVar7 = (undefined1 *)((long)pvVar3 + sVar5);
  }
LAB_0010540a:
  if (uVar10 != 0) {
    memset(puVar7,0,(ulong)uVar10);
  }
  return 1;
}



/* rasterUnpremultiply(unsigned int) */

uint rasterUnpremultiply(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1 >> 0x18;
  if ((byte)((char)(param_1 >> 0x18) - 1U) < 0xfe) {
    uVar3 = (param_1 >> 8 & 0xff00) / uVar1;
    uVar4 = (param_1 & 0xff00) / uVar1;
    uVar1 = ((param_1 & 0xff) << 8) / uVar1;
    uVar2 = uVar3 << 0x10;
    if (0xff < uVar3) {
      uVar2 = 0xff0000;
    }
    uVar3 = uVar4 << 8;
    if (0xff < uVar4) {
      uVar3 = 0xff00;
    }
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    param_1 = param_1 & 0xff000000 | uVar2 | uVar3 | uVar1;
  }
  return param_1;
}



/* rasterUnpremultiply(tvg::RenderSurface*) */

void rasterUnpremultiply(RenderSurface *param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1[0x3d] != (RenderSurface)0x4) {
    return;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar1 = *(long *)param_1;
    uVar3 = 0;
    do {
      if (*(int *)(param_1 + 0x34) != 0) {
        lVar5 = lVar1 + (ulong)(uVar3 * *(int *)(param_1 + 0x30)) * 4;
        lVar4 = 0;
        do {
          uVar2 = rasterUnpremultiply(*(uint *)(lVar5 + lVar4 * 4));
          *(undefined4 *)(lVar5 + lVar4 * 4) = uVar2;
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 < *(uint *)(param_1 + 0x34));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x38));
    param_1[0x3e] = (RenderSurface)0x0;
    return;
  }
  param_1[0x3e] = (RenderSurface)0x0;
  return;
}



/* rasterPremultiply(tvg::RenderSurface*) */

void rasterPremultiply(RenderSurface *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  pthread_mutex_t *__mutex;
  long lVar4;
  uint uVar5;
  
  __mutex = (pthread_mutex_t *)0x0;
  iVar2 = tvg::TaskScheduler::threads();
  if (iVar2 != 0) {
    __mutex = (pthread_mutex_t *)(param_1 + 8);
    iVar2 = pthread_mutex_lock(__mutex);
    if (iVar2 != 0) {
      std::__throw_system_error(iVar2);
      goto LAB_00105608;
    }
  }
  if ((param_1[0x3e] == (RenderSurface)0x0) && (param_1[0x3d] == (RenderSurface)0x4)) {
    lVar4 = *(long *)param_1;
    param_1[0x3e] = (RenderSurface)0x1;
    uVar5 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      do {
        lVar3 = 0;
        if (*(int *)(param_1 + 0x34) != 0) {
          do {
            uVar1 = *(uint *)(lVar4 + lVar3 * 4);
            *(uint *)(lVar4 + lVar3 * 4) =
                 ((uVar1 & 0xff00ff) * (uVar1 >> 0x18) >> 8 & 0xff00ff) +
                 ((uVar1 >> 8 & 0xff) * (uVar1 >> 0x18) & 0xff00 | uVar1 & 0xff000000);
            lVar3 = lVar3 + 1;
          } while ((uint)lVar3 < *(uint *)(param_1 + 0x34));
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + (ulong)*(uint *)(param_1 + 0x30) * 4;
      } while (uVar5 < *(uint *)(param_1 + 0x38));
    }
  }
  iVar2 = tvg::TaskScheduler::threads();
  if (iVar2 == 0) {
    return;
  }
LAB_00105608:
  pthread_mutex_unlock(__mutex);
  return;
}



/* rasterGradientStroke(SwSurface*, SwShape*, tvg::Fill const*, unsigned char) */

undefined8 rasterGradientStroke(SwSurface *param_1,SwShape *param_2,Fill *param_3,uchar param_4)

{
  SwFill *pSVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  
  if (*(long *)(param_2 + 8) == 0) {
    return 0;
  }
  pSVar1 = *(SwFill **)(*(long *)(param_2 + 8) + 0x68);
  if ((pSVar1 != (SwFill *)0x0) && (*(long *)(param_2 + 0x20) != 0)) {
    lVar3 = fillFetchSolid(pSVar1,param_3);
    if (lVar3 != 0) {
      iVar8 = (uint)*(byte *)(lVar3 + 7) * (uint)param_4 + 0xff;
      iVar9 = iVar8 >> 8;
      if (iVar9 == 0) {
        return 1;
      }
      bVar6 = *(byte *)(lVar3 + 4);
      bVar5 = *(byte *)(lVar3 + 5);
      bVar7 = *(byte *)(lVar3 + 6);
      if (iVar9 != 0xff) {
        bVar6 = (byte)((uint)bVar6 * iVar9 + 0xff >> 8);
        bVar5 = (byte)((uint)bVar5 * iVar9 + 0xff >> 8);
        bVar7 = (byte)((uint)bVar7 * iVar9 + 0xff >> 8);
      }
      uVar4 = _rasterRle(param_1,*(SwRle **)(param_2 + 0x20),bVar6,bVar5,bVar7,
                         (uchar)((uint)iVar8 >> 8));
      return uVar4;
    }
    cVar2 = (**(code **)(*(long *)param_3 + 0x10))(param_3);
    if (cVar2 == '\n') {
      uVar4 = _rasterLinearGradientRle
                        (param_1,*(SwRle **)(param_2 + 0x20),
                         *(SwFill **)(*(long *)(param_2 + 8) + 0x68));
      return uVar4;
    }
    if (cVar2 == '\v') {
      uVar4 = _rasterRadialGradientRle
                        (param_1,*(SwRle **)(param_2 + 0x20),
                         *(SwFill **)(*(long *)(param_2 + 8) + 0x68));
      return uVar4;
    }
  }
  return 0;
}



/* rasterShape(SwSurface*, SwShape*, unsigned char, unsigned char, unsigned char, unsigned char) */

ulong rasterShape(SwSurface *param_1,SwShape *param_2,uchar param_3,uchar param_4,uchar param_5,
                 uchar param_6)

{
  undefined8 *puVar1;
  size_t __n;
  undefined4 *puVar2;
  SwShape SVar3;
  SwSurface SVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  uchar uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  ulong uVar14;
  void *pvVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  uint *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  uint *puVar24;
  uint *puVar25;
  uchar *puVar26;
  uchar *puVar27;
  byte *pbVar28;
  byte *pbVar29;
  uchar *puVar30;
  byte *pbVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  undefined1 *puVar36;
  int iVar37;
  uint uVar38;
  long lVar39;
  code *pcVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  undefined1 *puVar46;
  uint local_88;
  byte *local_78;
  
  uVar18 = (uint)param_4;
  uVar35 = (uint)param_6;
  if (param_6 != 0xff) {
    uVar18 = (uint)param_4 * (uint)param_6 + 0xff >> 8 & 0xff;
    param_3 = (uchar)((uint)param_3 * (uint)param_6 + 0xff >> 8);
    param_5 = (uchar)((uint)param_5 * (uint)param_6 + 0xff >> 8);
  }
  SVar3 = param_2[0x48];
  uVar17 = (ulong)(byte)SVar3;
  if (SVar3 == (SwShape)0x0) {
    uVar17 = _rasterRle(param_1,*(SwRle **)(param_2 + 0x18),param_3,(uchar)uVar18,param_5,param_6);
    return uVar17;
  }
  piVar13 = *(int **)(param_1 + 0x70);
  SVar4 = param_1[0x3d];
  if ((piVar13 == (int *)0x0) || (iVar32 = *piVar13, iVar32 < 2)) {
    if (*(long *)(param_1 + 0x68) == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x38);
      lVar34 = *(long *)(param_2 + 0x28);
      lVar33 = *(long *)(param_2 + 0x30);
      uVar38 = (int)uVar6 - (int)lVar34;
      uVar10 = (int)*(undefined8 *)(param_2 + 0x40) - (int)lVar33;
      if (param_6 != 0xff) {
        if (SVar4 == (SwSurface)0x4) {
          iVar32 = (**(code **)(param_1 + 0x40))(param_3,uVar18,param_5,param_6);
          uVar17 = (ulong)*(uint *)(param_1 + 0x30);
          lVar34 = *(long *)param_1;
          lVar39 = uVar17 * *(long *)(param_2 + 0x30);
          lVar33 = *(long *)(param_2 + 0x28);
          if (uVar10 == 0) {
            return (ulong)(byte)SVar3;
          }
          uVar18 = 0;
          while( true ) {
            puVar24 = (uint *)(lVar34 + ((ulong)((int)uVar17 * uVar18) + lVar39 + lVar33) * 4);
            puVar19 = puVar24;
            if (uVar38 != 0) {
              do {
                puVar25 = puVar19 + 1;
                *puVar19 = ((*puVar19 >> 8 & 0xff00ff) * (0x100 - uVar35) & 0xff00ff00 |
                           (*puVar19 & 0xff00ff) * (0x100 - uVar35) >> 8 & 0xff00ff) + iVar32;
                puVar19 = puVar25;
              } while (puVar25 != puVar24 + uVar38);
            }
            uVar18 = uVar18 + 1;
            if (uVar18 == uVar10) break;
            uVar17 = (ulong)*(uint *)(param_1 + 0x30);
          }
          return (ulong)(byte)SVar3;
        }
        if (SVar4 != (SwSurface)0x1) {
          return uVar17;
        }
        uVar14 = (ulong)*(uint *)(param_1 + 0x30);
        lVar39 = *(long *)param_1;
        lVar23 = lVar33 * uVar14;
        if ((int)*(undefined8 *)(param_2 + 0x40) == (int)lVar33) {
          return uVar17;
        }
        uVar18 = 0;
        while( true ) {
          lVar22 = 0;
          lVar33 = (ulong)((int)uVar14 * uVar18) + lVar34 + lVar23 + lVar39;
          if ((int)uVar6 != (int)lVar34) {
            do {
              *(uchar *)(lVar33 + lVar22) =
                   param_6 + (char)((uint)*(byte *)(lVar33 + lVar22) * (~uVar35 & 0xff) + 0xff >> 8)
              ;
              lVar22 = lVar22 + 1;
            } while ((uint)lVar22 < uVar38);
          }
          uVar18 = uVar18 + 1;
          if (uVar10 <= uVar18) break;
          uVar14 = (ulong)*(uint *)(param_1 + 0x30);
        }
        return uVar17;
      }
      if (SVar4 == (SwSurface)0x4) {
        uVar11 = (**(code **)(param_1 + 0x40))(param_3,uVar18,param_5,0xff);
        uVar17 = (ulong)*(uint *)(param_1 + 0x30);
        lVar34 = *(long *)param_1;
        lVar33 = uVar17 * *(long *)(param_2 + 0x30);
        if (uVar10 == 0) {
          return (ulong)(byte)SVar3;
        }
        uVar18 = 0;
        while( true ) {
          puVar16 = (undefined8 *)
                    (lVar34 + ((ulong)*(uint *)(param_2 + 0x28) + lVar33 +
                              (ulong)((int)uVar17 * uVar18)) * 4);
          uVar35 = uVar38;
          if (((0 < (long)puVar16 % 8) && (3 < (long)puVar16 % 8)) && (0 < (int)uVar38)) {
            *(undefined4 *)puVar16 = uVar11;
            puVar16 = (undefined8 *)((long)puVar16 + 4);
            uVar35 = uVar38 - 1;
          }
          if (1 < (int)uVar35) {
            uVar45 = uVar35 - 2 >> 1;
            puVar1 = puVar16 + (uVar45 + 1);
            do {
              *puVar16 = CONCAT44(uVar11,uVar11);
              puVar16 = puVar16 + 1;
            } while (puVar16 != puVar1);
            uVar35 = (uVar35 - 2) + uVar45 * -2;
            puVar16 = puVar1;
          }
          if (uVar35 != 0) {
            *(undefined4 *)puVar16 = uVar11;
          }
          uVar18 = uVar18 + 1;
          if (uVar18 == uVar10) break;
          uVar17 = (ulong)*(uint *)(param_1 + 0x30);
        }
        return (ulong)(byte)SVar3;
      }
      if (SVar4 == (SwSurface)0x1) {
        if (uVar10 == 0) {
          return uVar17;
        }
        uVar17 = 0;
        do {
          puVar36 = (undefined1 *)
                    ((ulong)(uint)(((int)lVar33 + (int)uVar17) * *(int *)(param_1 + 0x30) +
                                  (int)lVar34) + *(long *)param_1);
          uVar18 = uVar38;
          if ((long)puVar36 % 8 < 1) {
LAB_00106052:
            if (7 < (int)uVar18) {
              uVar35 = uVar18 - 8 >> 3;
              __n = (ulong)(uVar35 + 1) * 8;
              pvVar15 = memset(puVar36,0xff,__n);
              puVar36 = (undefined1 *)((long)pvVar15 + __n);
              uVar18 = (uVar18 - 8) + uVar35 * -8;
            }
          }
          else if (0 < (int)uVar38) {
            puVar46 = puVar36 + (8 - (long)puVar36 % 8);
            puVar21 = puVar36;
            do {
              puVar36 = puVar21 + 1;
              uVar18 = uVar18 - 1;
              *puVar21 = 0xff;
              if (puVar46 == puVar36 || (long)puVar46 - (long)puVar36 < 0) break;
              puVar21 = puVar36;
            } while (0 < (int)uVar18);
            goto LAB_00106052;
          }
          if (uVar18 != 0) {
            memset(puVar36,0xff,(ulong)uVar18);
          }
          uVar17 = uVar17 + 1;
          if (uVar10 == uVar17) {
            return (ulong)(byte)SVar3;
          }
          lVar33 = *(long *)(param_2 + 0x30);
          lVar34 = *(long *)(param_2 + 0x28);
        } while( true );
      }
    }
    else if (SVar4 == (SwSurface)0x4) {
      uVar6 = *(undefined8 *)(param_2 + 0x40);
      uVar35 = (int)*(undefined8 *)(param_2 + 0x38) - *(int *)(param_2 + 0x28);
      iVar32 = *(int *)(param_2 + 0x30);
      uVar11 = (**(code **)(param_1 + 0x40))(param_3,uVar18,param_5,param_6);
      uVar17 = (ulong)*(uint *)(param_1 + 0x30);
      lVar34 = *(long *)param_1;
      lVar39 = uVar17 * *(long *)(param_2 + 0x30);
      lVar33 = *(long *)(param_2 + 0x28);
      if ((int)uVar6 == iVar32) {
        return (ulong)(byte)SVar3;
      }
      iVar43 = 0;
      while( true ) {
        puVar41 = (undefined4 *)
                  (lVar34 + ((ulong)(uint)((int)uVar17 * iVar43) + lVar39 + lVar33) * 4);
        puVar2 = puVar41 + uVar35;
        if (uVar35 != 0) {
          do {
            puVar42 = puVar41 + 1;
            uVar12 = (**(code **)(param_1 + 0x68))(uVar11,*puVar41,0xff);
            *puVar41 = uVar12;
            puVar41 = puVar42;
          } while (puVar42 != puVar2);
        }
        iVar43 = iVar43 + 1;
        if ((int)uVar6 - iVar32 == iVar43) break;
        uVar17 = (ulong)*(uint *)(param_1 + 0x30);
      }
      return (ulong)(byte)SVar3;
    }
  }
  else {
    if (iVar32 < 6) {
      lVar34 = *(long *)(param_2 + 0x28);
      lVar33 = *(long *)(param_2 + 0x30);
      uVar38 = piVar13[0xe];
      uVar10 = *(int *)(param_2 + 0x38) - (int)lVar34;
      iVar43 = *(int *)(param_2 + 0x40);
      iVar44 = (int)lVar33;
      bVar8 = *(byte *)(piVar13 + 0x12);
      uVar14 = (ulong)bVar8;
      lVar39 = ((ulong)uVar38 * lVar33 + lVar34) * uVar14 + *(long *)(piVar13 + 10);
      pcVar40 = *(code **)(param_1 + (long)(iVar32 + -2) * 8 + 0x48);
      if (SVar4 == (SwSurface)0x4) {
        uVar18 = (**(code **)(param_1 + 0x40))(param_3,uVar18,param_5,param_6);
        uVar17 = (ulong)*(uint *)(param_1 + 0x30);
        lVar34 = *(long *)param_1;
        lVar23 = uVar17 * *(long *)(param_2 + 0x30);
        lVar33 = *(long *)(param_2 + 0x28);
        if (iVar43 == iVar44) {
          return (ulong)(byte)SVar3;
        }
        iVar32 = 0;
        local_88 = uVar18 >> 8 & 0xff00ff;
        while( true ) {
          puVar24 = (uint *)(lVar34 + ((ulong)(uint)((int)uVar17 * iVar32) + lVar23 + lVar33) * 4);
          lVar22 = lVar39 + (ulong)((uint)bVar8 * *(int *)(*(long *)(param_1 + 0x70) + 0x38) *
                                   iVar32);
          puVar19 = puVar24 + uVar10;
          if (uVar10 != 0) {
            do {
              puVar25 = puVar24 + 1;
              bVar9 = (*pcVar40)(lVar22);
              uVar35 = (bVar9 + 1) * (uVar18 & 0xff00ff) >> 8 & 0xff00ff |
                       (bVar9 + 1) * local_88 & 0xff00ff00;
              iVar37 = (~uVar35 >> 0x18) + 1;
              *puVar24 = ((*puVar24 >> 8 & 0xff00ff) * iVar37 & 0xff00ff00 |
                         (*puVar24 & 0xff00ff) * iVar37 >> 8 & 0xff00ff) + uVar35;
              puVar24 = puVar25;
              lVar22 = lVar22 + uVar14;
            } while (puVar25 != puVar19);
          }
          iVar32 = iVar32 + 1;
          if (iVar43 - iVar44 == iVar32) break;
          uVar17 = (ulong)*(uint *)(param_1 + 0x30);
        }
        return (ulong)(byte)SVar3;
      }
      if (SVar4 != (SwSurface)0x1) {
        return uVar17;
      }
      uVar20 = (ulong)*(uint *)(param_1 + 0x30);
      lVar23 = *(long *)param_1;
      lVar33 = uVar20 * lVar33;
      if (iVar43 == iVar44) {
        return uVar17;
      }
      iVar32 = 0;
      while( true ) {
        pbVar28 = (byte *)(lVar23 + (ulong)(uint)((int)uVar20 * iVar32) + lVar34 + lVar33);
        lVar22 = lVar39 + (ulong)(uVar38 * iVar32 * (uint)bVar8);
        pbVar31 = pbVar28 + uVar10;
        if (uVar10 != 0) {
          do {
            pbVar29 = pbVar28 + 1;
            bVar9 = (*pcVar40)(lVar22);
            *pbVar28 = (char)(bVar9 * uVar35 + 0xff >> 8) +
                       (char)((uint)*pbVar28 * ~(uint)bVar9 + 0xff >> 8);
            pbVar28 = pbVar29;
            lVar22 = lVar22 + uVar14;
          } while (pbVar29 != pbVar31);
        }
        iVar32 = iVar32 + 1;
        if (iVar43 - iVar44 == iVar32) break;
        uVar20 = (ulong)*(uint *)(param_1 + 0x30);
        uVar38 = *(uint *)(*(long *)(param_1 + 0x70) + 0x38);
      }
      return (ulong)(byte)SVar3;
    }
    if (SVar4 == (SwSurface)0x1) {
      switch(iVar32) {
      case 6:
        uVar17 = FUN_00105cc7();
        return uVar17;
      case 7:
        pcVar40 = _opMaskSubtract;
        break;
      case 8:
        pcVar40 = _opMaskIntersect;
        break;
      case 9:
        uVar17 = FUN_00105cc7();
        return uVar17;
      case 10:
        uVar18 = piVar13[0xe];
        uVar6 = *(undefined8 *)(param_2 + 0x40);
        uVar35 = *(int *)(param_2 + 0x38) - (int)*(long *)(param_2 + 0x28);
        iVar32 = (int)*(long *)(param_2 + 0x30);
        if ((int)uVar6 != iVar32) {
          iVar43 = 0;
          puVar30 = (uchar *)(*(long *)(piVar13 + 10) +
                             (ulong)uVar18 * *(long *)(param_2 + 0x30) + *(long *)(param_2 + 0x28) +
                             (ulong)uVar35);
          do {
            puVar26 = puVar30 + -(ulong)uVar35;
            if (uVar35 != 0) {
              do {
                puVar27 = puVar26 + 1;
                uVar7 = _opMaskLighten(param_6,*puVar26,0xff - param_6);
                *puVar26 = uVar7;
                puVar26 = puVar27;
              } while (puVar27 != puVar30);
            }
            iVar43 = iVar43 + 1;
            puVar30 = puVar30 + uVar18;
          } while ((int)uVar6 - iVar32 != iVar43);
          piVar13 = *(int **)(param_1 + 0x70);
        }
        uVar17 = _compositeMaskImage(param_1,(SwImage *)(piVar13 + 6),(SwBBox *)(piVar13 + 0x14));
        return uVar17;
      case 0xb:
        pcVar40 = _opMaskDarken;
        break;
      default:
        uVar17 = FUN_00105cc7();
        return uVar17;
      }
      lVar34 = *(long *)(param_2 + 0x28);
      lVar33 = *(long *)(param_2 + 0x30);
      uVar18 = *(int *)(param_2 + 0x38) - (int)lVar34;
      uVar6 = *(undefined8 *)(param_2 + 0x40);
      uVar14 = (ulong)*(uint *)(param_1 + 0x30);
      puVar36 = (undefined1 *)
                ((ulong)(uint)piVar13[0xe] * lVar33 + lVar34 + *(long *)(piVar13 + 10));
      local_78 = (byte *)(uVar14 * lVar33 + lVar34 + *(long *)param_1);
      if ((int)uVar6 == (int)lVar33) {
        return uVar17;
      }
      local_88 = 0;
      do {
        if (uVar18 != 0) {
          pbVar28 = local_78;
          puVar46 = puVar36;
          do {
            uVar5 = *puVar46;
            puVar46 = puVar46 + 1;
            bVar8 = (*pcVar40)(uVar35,uVar5,0);
            *pbVar28 = bVar8 + (char)((uint)*pbVar28 * (uint)(byte)~bVar8 + 0xff >> 8);
            pbVar28 = pbVar28 + 1;
          } while (puVar46 != puVar36 + uVar18);
          piVar13 = *(int **)(param_1 + 0x70);
          uVar14 = (ulong)*(uint *)(param_1 + 0x30);
        }
        local_88 = local_88 + 1;
        local_78 = local_78 + uVar14;
        puVar36 = puVar36 + (uint)piVar13[0xe];
      } while ((int)uVar6 - (int)lVar33 != local_88);
      return (ulong)(byte)SVar3;
    }
  }
  return 0;
}



void FUN_00105cc7(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long in_RAX;
  uint uVar3;
  SwSurface *unaff_RBX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_RBP;
  undefined1 *puVar6;
  int iVar7;
  byte in_R9B;
  int iVar8;
  code *unaff_R12;
  int iVar9;
  
  uVar1 = *(uint *)(param_2 + 0x38);
  uVar3 = *(int *)(unaff_RBP + 0x38) - (int)*(long *)(unaff_RBP + 0x28);
  iVar7 = (int)*(long *)(unaff_RBP + 0x30);
  iVar8 = (int)*(undefined8 *)(unaff_RBP + 0x40);
  if (iVar8 != iVar7) {
    iVar9 = 0;
    puVar6 = (undefined1 *)
             (*(long *)(param_2 + 0x28) +
             (ulong)uVar1 * *(long *)(unaff_RBP + 0x30) + *(long *)(unaff_RBP + 0x28) + (ulong)uVar3
             );
    do {
      puVar4 = puVar6 + -(ulong)uVar3;
      if (uVar3 != 0) {
        do {
          puVar5 = puVar4 + 1;
          uVar2 = (*unaff_R12)((uint)in_R9B,*puVar4,0xff - (uint)in_R9B);
          *puVar4 = uVar2;
          puVar4 = puVar5;
        } while (puVar5 != puVar6);
      }
      iVar9 = iVar9 + 1;
      puVar6 = puVar6 + uVar1;
    } while (iVar8 - iVar7 != iVar9);
    in_RAX = *(long *)(unaff_RBX + 0x70);
  }
  _compositeMaskImage(unaff_RBX,(SwImage *)(in_RAX + 0x18),(SwBBox *)(in_RAX + 0x50));
  return;
}



void switchD_001058c6::caseD_6(void)

{
  FUN_00105cc7();
  return;
}



/* rasterGradientShape(SwSurface*, SwShape*, tvg::Fill const*, unsigned char) */

undefined8 rasterGradientShape(SwSurface *param_1,SwShape *param_2,Fill *param_3,uchar param_4)

{
  byte bVar1;
  SwSurface SVar2;
  int iVar3;
  SwFill *pSVar4;
  long lVar5;
  _func_uchar_uchar_ptr *p_Var6;
  char cVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  code *pcVar18;
  _func_uint_uint_uint_uchar *p_Var19;
  int iVar20;
  int iVar21;
  uchar *puVar22;
  uint uVar23;
  uchar *puVar24;
  uint uVar25;
  
  if (*(SwFill **)(param_2 + 0x10) == (SwFill *)0x0) {
    return 0;
  }
  lVar8 = fillFetchSolid(*(SwFill **)(param_2 + 0x10),param_3);
  if (lVar8 != 0) {
    iVar20 = (uint)*(byte *)(lVar8 + 7) * (uint)param_4 + 0xff;
    if (iVar20 >> 8 == 0) {
      return 1;
    }
    uVar9 = rasterShape(param_1,param_2,*(uchar *)(lVar8 + 4),*(uchar *)(lVar8 + 5),
                        *(uchar *)(lVar8 + 6),(uchar)((uint)iVar20 >> 8));
    return uVar9;
  }
  cVar7 = (**(code **)(*(long *)param_3 + 0x10))(param_3);
  if (param_2[0x48] == (SwShape)0x0) {
    if (cVar7 == '\n') {
      uVar9 = _rasterLinearGradientRle
                        (param_1,*(SwRle **)(param_2 + 0x18),*(SwFill **)(param_2 + 0x10));
      return uVar9;
    }
    if (cVar7 != '\v') {
      return 0;
    }
    uVar9 = _rasterRadialGradientRle
                      (param_1,*(SwRle **)(param_2 + 0x18),*(SwFill **)(param_2 + 0x10));
    return uVar9;
  }
  if (cVar7 == '\n') {
    lVar12 = *(long *)(param_2 + 0x28);
    lVar8 = *(long *)(param_2 + 0x30);
    piVar11 = *(int **)(param_1 + 0x70);
    iVar21 = (int)*(undefined8 *)(param_2 + 0x40);
    pSVar4 = *(SwFill **)(param_2 + 0x10);
    uVar16 = *(int *)(param_2 + 0x38) - (int)lVar12;
    iVar20 = (int)lVar8;
    uVar25 = iVar21 - iVar20;
    if ((piVar11 == (int *)0x0) || (iVar3 = *piVar11, iVar3 < 2)) {
      p_Var19 = *(_func_uint_uint_uint_uchar **)(param_1 + 0x68);
      if (p_Var19 != (_func_uint_uint_uint_uchar *)0x0) {
        uVar10 = (ulong)*(uint *)(param_1 + 0x30);
        lVar5 = *(long *)param_1 + (lVar8 * uVar10 + lVar12) * 4;
        if (pSVar4[0x45] != (SwFill)0x0) {
          if (iVar21 == iVar20) {
            return 1;
          }
          uVar23 = 0;
          while( true ) {
            uVar13 = (int)uVar10 * uVar23;
            uVar14 = uVar23 + (int)lVar8;
            uVar23 = uVar23 + 1;
            fillLinear(pSVar4,(uint *)(lVar5 + (ulong)uVar13 * 4),uVar14,(uint)lVar12,uVar16,
                       opBlendPreNormal,p_Var19,0xff);
            if (uVar23 == uVar25) break;
            p_Var19 = *(_func_uint_uint_uint_uchar **)(param_1 + 0x68);
            lVar12 = *(long *)(param_2 + 0x28);
            lVar8 = *(long *)(param_2 + 0x30);
            uVar10 = (ulong)*(uint *)(param_1 + 0x30);
          }
          return 1;
        }
        uVar23 = 0;
        if (iVar21 == iVar20) {
          return 1;
        }
        while( true ) {
          uVar13 = (int)uVar10 * uVar23;
          uVar14 = uVar23 + (int)lVar8;
          uVar23 = uVar23 + 1;
          fillLinear(pSVar4,(uint *)(lVar5 + (ulong)uVar13 * 4),uVar14,(uint)lVar12,uVar16,
                     opBlendSrcOver,p_Var19,0xff);
          if (uVar23 == uVar25) break;
          p_Var19 = *(_func_uint_uint_uint_uchar **)(param_1 + 0x68);
          lVar12 = *(long *)(param_2 + 0x28);
          lVar8 = *(long *)(param_2 + 0x30);
          uVar10 = (ulong)*(uint *)(param_1 + 0x30);
        }
        return 1;
      }
      SVar2 = param_1[0x3d];
      if (pSVar4[0x45] != (SwFill)0x0) {
        if (SVar2 == (SwSurface)0x4) {
          puVar15 = (uint *)(*(long *)param_1 +
                            ((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12) * 4);
          if (iVar21 == iVar20) {
            return 1;
          }
          uVar23 = 0;
          while( true ) {
            uVar13 = uVar23 + (int)lVar8;
            uVar23 = uVar23 + 1;
            fillLinear(pSVar4,puVar15,uVar13,(uint)lVar12,uVar16,opBlendPreNormal,0xff);
            puVar15 = puVar15 + *(uint *)(param_1 + 0x30);
            if (uVar23 == uVar25) break;
            lVar8 = *(long *)(param_2 + 0x30);
            lVar12 = *(long *)(param_2 + 0x28);
          }
          return 1;
        }
        if (SVar2 != (SwSurface)0x1) {
          return 1;
        }
        puVar24 = (uchar *)((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12 + *(long *)param_1);
        if (iVar21 == iVar20) {
          return 1;
        }
        uVar23 = 0;
        while( true ) {
          uVar13 = uVar23 + (int)lVar8;
          uVar23 = uVar23 + 1;
          fillLinear(pSVar4,puVar24,uVar13,(uint)lVar12,uVar16,_opMaskAdd,0xff);
          puVar24 = puVar24 + *(uint *)(param_1 + 0x30);
          if (uVar23 == uVar25) break;
          lVar8 = *(long *)(param_2 + 0x30);
          lVar12 = *(long *)(param_2 + 0x28);
        }
        return 1;
      }
      if (SVar2 == (SwSurface)0x4) {
        uVar23 = 0;
        puVar15 = (uint *)(*(long *)param_1 +
                          ((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12) * 4);
        if (iVar21 == iVar20) {
          return 0;
        }
        while( true ) {
          uVar13 = uVar23 + (int)lVar8;
          uVar23 = uVar23 + 1;
          fillLinear(pSVar4,puVar15,uVar13,(uint)lVar12,uVar16,opBlendSrcOver,0xff);
          puVar15 = puVar15 + *(uint *)(param_1 + 0x30);
          if (uVar23 == uVar25) break;
          lVar8 = *(long *)(param_2 + 0x30);
          lVar12 = *(long *)(param_2 + 0x28);
        }
        return 0;
      }
      if (SVar2 != (SwSurface)0x1) {
        return 0;
      }
      puVar24 = (uchar *)((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12 + *(long *)param_1);
      if (iVar21 == iVar20) {
        return 0;
      }
      uVar23 = 0;
      while( true ) {
        uVar13 = uVar23 + (int)lVar8;
        uVar23 = uVar23 + 1;
        fillLinear(pSVar4,puVar24,uVar13,(uint)lVar12,uVar16,_opMaskNone,0xff);
        puVar24 = puVar24 + *(uint *)(param_1 + 0x30);
        if (uVar23 == uVar25) break;
        lVar8 = *(long *)(param_2 + 0x30);
        lVar12 = *(long *)(param_2 + 0x28);
      }
      return 0;
    }
    uVar23 = piVar11[0xe];
    lVar5 = *(long *)(piVar11 + 10);
    lVar17 = (ulong)uVar23 * lVar8 + lVar12;
    if (iVar3 < 6) {
      bVar1 = *(byte *)(piVar11 + 0x12);
      puVar15 = (uint *)(*(long *)param_1 + ((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12) * 4)
      ;
      puVar24 = (uchar *)((ulong)bVar1 * lVar17 + lVar5);
      p_Var6 = *(_func_uchar_uchar_ptr **)(param_1 + (long)(iVar3 + -2) * 8 + 0x48);
      if (iVar21 == iVar20) {
        return 1;
      }
      uVar23 = 0;
      while( true ) {
        uVar13 = uVar23 + (int)lVar8;
        uVar23 = uVar23 + 1;
        fillLinear(pSVar4,puVar15,uVar13,(uint)lVar12,uVar16,puVar24,p_Var6,bVar1,0xff);
        puVar15 = puVar15 + *(uint *)(param_1 + 0x30);
        puVar24 = puVar24 + *(uint *)(param_1 + 0x30) * (uint)bVar1;
        if (uVar23 == uVar25) break;
        lVar12 = *(long *)(param_2 + 0x28);
        lVar8 = *(long *)(param_2 + 0x30);
      }
      return 1;
    }
    switch(iVar3) {
    case 6:
      uVar9 = FUN_00106681(lVar8,_opMaskAdd);
      return uVar9;
    case 7:
      pcVar18 = _opMaskSubtract;
      break;
    case 8:
      pcVar18 = _opMaskIntersect;
      break;
    case 9:
      uVar9 = FUN_00106681(lVar8,_opMaskDifference);
      return uVar9;
    case 10:
      puVar24 = (uchar *)(lVar17 + lVar5);
      if (iVar21 == iVar20) goto LAB_001066ef;
      uVar23 = 0;
      while( true ) {
        uVar13 = (int)lVar8 + uVar23;
        uVar23 = uVar23 + 1;
        fillLinear(pSVar4,puVar24,uVar13,(uint)lVar12,uVar16,_opMaskLighten,0xff);
        puVar24 = puVar24 + *(uint *)(param_1 + 0x30);
        if (uVar23 == uVar25) break;
        lVar12 = *(long *)(param_2 + 0x28);
        lVar8 = *(long *)(param_2 + 0x30);
      }
      goto LAB_001066eb;
    case 0xb:
      pcVar18 = _opMaskDarken;
      break;
    default:
      uVar9 = FUN_00106681(lVar8,0);
      return uVar9;
    }
    puVar24 = (uchar *)((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12 + *(long *)param_1);
    if (iVar21 != iVar20) {
      uVar13 = 0;
      puVar22 = (uchar *)(lVar5 + lVar17);
      while( true ) {
        uVar14 = (int)lVar8 + uVar13;
        uVar13 = uVar13 + 1;
        fillLinear(pSVar4,puVar24,uVar14,(uint)lVar12,uVar16,puVar22,pcVar18,0xff);
        puVar24 = puVar24 + *(uint *)(param_1 + 0x30);
        if (uVar25 <= uVar13) break;
        lVar12 = *(long *)(param_2 + 0x28);
        lVar8 = *(long *)(param_2 + 0x30);
        puVar22 = puVar22 + uVar23;
      }
    }
  }
  else {
    if (cVar7 != '\v') {
      return 0;
    }
    lVar12 = *(long *)(param_2 + 0x28);
    lVar8 = *(long *)(param_2 + 0x30);
    piVar11 = *(int **)(param_1 + 0x70);
    iVar21 = (int)*(undefined8 *)(param_2 + 0x40);
    pSVar4 = *(SwFill **)(param_2 + 0x10);
    uVar16 = *(int *)(param_2 + 0x38) - (int)lVar12;
    iVar20 = (int)lVar8;
    uVar25 = iVar21 - iVar20;
    if ((piVar11 == (int *)0x0) || (iVar3 = *piVar11, iVar3 < 2)) {
      p_Var19 = *(_func_uint_uint_uint_uchar **)(param_1 + 0x68);
      if (p_Var19 != (_func_uint_uint_uint_uchar *)0x0) {
        uVar10 = (ulong)*(uint *)(param_1 + 0x30);
        lVar5 = *(long *)param_1 + (lVar8 * uVar10 + lVar12) * 4;
        if (pSVar4[0x45] != (SwFill)0x0) {
          if (iVar21 == iVar20) {
            return 1;
          }
          uVar23 = 0;
          while( true ) {
            uVar14 = uVar23 + (int)lVar8;
            uVar13 = (int)uVar10 * uVar23;
            uVar23 = uVar23 + 1;
            fillRadial(pSVar4,(uint *)(lVar5 + (ulong)uVar13 * 4),uVar14,(uint)lVar12,uVar16,
                       opBlendPreNormal,p_Var19,0xff);
            if (uVar23 == uVar25) break;
            p_Var19 = *(_func_uint_uint_uint_uchar **)(param_1 + 0x68);
            lVar12 = *(long *)(param_2 + 0x28);
            lVar8 = *(long *)(param_2 + 0x30);
            uVar10 = (ulong)*(uint *)(param_1 + 0x30);
          }
          return 1;
        }
        uVar23 = 0;
        if (iVar21 == iVar20) {
          return 1;
        }
        while( true ) {
          uVar14 = uVar23 + (int)lVar8;
          uVar13 = (int)uVar10 * uVar23;
          uVar23 = uVar23 + 1;
          fillRadial(pSVar4,(uint *)(lVar5 + (ulong)uVar13 * 4),uVar14,(uint)lVar12,uVar16,
                     opBlendSrcOver,p_Var19,0xff);
          if (uVar23 == uVar25) break;
          p_Var19 = *(_func_uint_uint_uint_uchar **)(param_1 + 0x68);
          lVar12 = *(long *)(param_2 + 0x28);
          lVar8 = *(long *)(param_2 + 0x30);
          uVar10 = (ulong)*(uint *)(param_1 + 0x30);
        }
        return 1;
      }
      SVar2 = param_1[0x3d];
      if (pSVar4[0x45] != (SwFill)0x0) {
        if (SVar2 == (SwSurface)0x4) {
          puVar15 = (uint *)(*(long *)param_1 +
                            ((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12) * 4);
          if (iVar21 == iVar20) {
            return 1;
          }
          uVar23 = 0;
          while( true ) {
            uVar13 = uVar23 + (int)lVar8;
            uVar23 = uVar23 + 1;
            fillRadial(pSVar4,puVar15,uVar13,(uint)lVar12,uVar16,opBlendPreNormal,0xff);
            puVar15 = puVar15 + *(uint *)(param_1 + 0x30);
            if (uVar23 == uVar25) break;
            lVar8 = *(long *)(param_2 + 0x30);
            lVar12 = *(long *)(param_2 + 0x28);
          }
          return 1;
        }
        if (SVar2 != (SwSurface)0x1) {
          return 1;
        }
        puVar24 = (uchar *)((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12 + *(long *)param_1);
        if (iVar21 == iVar20) {
          return 1;
        }
        uVar23 = 0;
        while( true ) {
          uVar13 = uVar23 + (int)lVar8;
          uVar23 = uVar23 + 1;
          fillRadial(pSVar4,puVar24,uVar13,(uint)lVar12,uVar16,_opMaskAdd,0xff);
          puVar24 = puVar24 + *(uint *)(param_1 + 0x30);
          if (uVar23 == uVar25) break;
          lVar8 = *(long *)(param_2 + 0x30);
          lVar12 = *(long *)(param_2 + 0x28);
        }
        return 1;
      }
      if (SVar2 == (SwSurface)0x4) {
        uVar23 = 0;
        puVar15 = (uint *)(*(long *)param_1 +
                          ((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12) * 4);
        if (iVar21 == iVar20) {
          return 0;
        }
        while( true ) {
          uVar13 = uVar23 + (int)lVar8;
          uVar23 = uVar23 + 1;
          fillRadial(pSVar4,puVar15,uVar13,(uint)lVar12,uVar16,opBlendSrcOver,0xff);
          puVar15 = puVar15 + *(uint *)(param_1 + 0x30);
          if (uVar23 == uVar25) break;
          lVar8 = *(long *)(param_2 + 0x30);
          lVar12 = *(long *)(param_2 + 0x28);
        }
        return 0;
      }
      if (SVar2 != (SwSurface)0x1) {
        return 0;
      }
      puVar24 = (uchar *)((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12 + *(long *)param_1);
      if (iVar21 == iVar20) {
        return 0;
      }
      uVar23 = 0;
      while( true ) {
        uVar13 = uVar23 + (int)lVar8;
        uVar23 = uVar23 + 1;
        fillRadial(pSVar4,puVar24,uVar13,(uint)lVar12,uVar16,_opMaskNone,0xff);
        puVar24 = puVar24 + *(uint *)(param_1 + 0x30);
        if (uVar23 == uVar25) break;
        lVar8 = *(long *)(param_2 + 0x30);
        lVar12 = *(long *)(param_2 + 0x28);
      }
      return 0;
    }
    uVar23 = piVar11[0xe];
    lVar5 = *(long *)(piVar11 + 10);
    lVar17 = (ulong)uVar23 * lVar8 + lVar12;
    if (iVar3 < 6) {
      bVar1 = *(byte *)(piVar11 + 0x12);
      puVar15 = (uint *)(*(long *)param_1 + ((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12) * 4)
      ;
      puVar24 = (uchar *)((ulong)bVar1 * lVar17 + lVar5);
      p_Var6 = *(_func_uchar_uchar_ptr **)(param_1 + (long)(iVar3 + -2) * 8 + 0x48);
      if (iVar21 == iVar20) {
        return 1;
      }
      uVar23 = 0;
      while( true ) {
        uVar13 = uVar23 + (int)lVar8;
        uVar23 = uVar23 + 1;
        fillRadial(pSVar4,puVar15,uVar13,(uint)lVar12,uVar16,puVar24,p_Var6,bVar1,0xff);
        puVar15 = puVar15 + *(uint *)(param_1 + 0x30);
        puVar24 = puVar24 + *(uint *)(param_1 + 0x30) * (uint)bVar1;
        if (uVar23 == uVar25) break;
        lVar12 = *(long *)(param_2 + 0x28);
        lVar8 = *(long *)(param_2 + 0x30);
      }
      return 1;
    }
    switch(iVar3) {
    case 6:
      uVar9 = FUN_001067fc(lVar8,_opMaskAdd);
      return uVar9;
    case 7:
      pcVar18 = _opMaskSubtract;
      break;
    case 8:
      pcVar18 = _opMaskIntersect;
      break;
    case 9:
      puVar24 = (uchar *)(lVar17 + lVar5);
      if (iVar21 == iVar20) goto LAB_001066ef;
      uVar23 = 0;
      while( true ) {
        uVar13 = uVar23 + (int)lVar8;
        uVar23 = uVar23 + 1;
        fillRadial(pSVar4,puVar24,uVar13,(uint)lVar12,uVar16,_opMaskDifference,0xff);
        puVar24 = puVar24 + *(uint *)(param_1 + 0x30);
        if (uVar23 == uVar25) break;
        lVar12 = *(long *)(param_2 + 0x28);
        lVar8 = *(long *)(param_2 + 0x30);
      }
LAB_001066eb:
      piVar11 = *(int **)(param_1 + 0x70);
LAB_001066ef:
      uVar9 = _compositeMaskImage(param_1,(SwImage *)(piVar11 + 6),(SwBBox *)(piVar11 + 0x14));
      return uVar9;
    case 10:
      uVar9 = FUN_001067fc(lVar8,_opMaskLighten);
      return uVar9;
    case 0xb:
      pcVar18 = _opMaskDarken;
      break;
    default:
      uVar9 = FUN_001067fc(lVar8,0);
      return uVar9;
    }
    puVar24 = (uchar *)((ulong)*(uint *)(param_1 + 0x30) * lVar8 + lVar12 + *(long *)param_1);
    if (iVar21 != iVar20) {
      uVar13 = 0;
      puVar22 = (uchar *)(lVar5 + lVar17);
      while( true ) {
        uVar14 = uVar13 + (int)lVar8;
        uVar13 = uVar13 + 1;
        fillRadial(pSVar4,puVar24,uVar14,(uint)lVar12,uVar16,puVar22,pcVar18,0xff);
        puVar24 = puVar24 + *(uint *)(param_1 + 0x30);
        if (uVar25 <= uVar13) break;
        lVar12 = *(long *)(param_2 + 0x28);
        lVar8 = *(long *)(param_2 + 0x30);
        puVar22 = puVar22 + uVar23;
      }
    }
  }
  return 1;
}



void FUN_00106681(undefined8 param_1,_func_uchar_uchar_uchar_uchar *param_2,undefined8 param_3,
                 long param_4,undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 in_RAX;
  uint uVar1;
  long unaff_RBX;
  SwSurface *unaff_RBP;
  long unaff_R12;
  int iVar2;
  uchar *puVar3;
  int unaff_R14D;
  SwFill *unaff_R15;
  uint unaff_retaddr;
  
  puVar3 = (uchar *)(param_7 + unaff_R12);
  if (unaff_R14D != 0) {
    iVar2 = 0;
    while( true ) {
      uVar1 = (int)in_RAX + iVar2;
      iVar2 = iVar2 + 1;
      fillLinear(unaff_R15,puVar3,uVar1,(uint)param_3,unaff_retaddr,param_2,0xff);
      puVar3 = puVar3 + *(uint *)(unaff_RBP + 0x30);
      if (iVar2 == unaff_R14D) break;
      param_3 = *(undefined8 *)(unaff_RBX + 0x28);
      in_RAX = *(undefined8 *)(unaff_RBX + 0x30);
    }
    param_4 = *(long *)(unaff_RBP + 0x70);
  }
  _compositeMaskImage(unaff_RBP,(SwImage *)(param_4 + 0x18),(SwBBox *)(param_4 + 0x50));
  return;
}



void switchD_00106677::caseD_6(undefined8 param_1)

{
  FUN_00106681(param_1,_opMaskAdd);
  return;
}



void FUN_001067fc(undefined8 param_1,_func_uchar_uchar_uchar_uchar *param_2,undefined8 param_3,
                 long param_4,undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 in_RAX;
  uint uVar1;
  long unaff_RBX;
  SwSurface *unaff_RBP;
  int iVar2;
  SwFill *unaff_R12;
  long unaff_R13;
  uchar *puVar3;
  int unaff_R15D;
  uint unaff_retaddr;
  
  puVar3 = (uchar *)(param_7 + unaff_R13);
  if (unaff_R15D != 0) {
    iVar2 = 0;
    while( true ) {
      uVar1 = iVar2 + (int)in_RAX;
      iVar2 = iVar2 + 1;
      fillRadial(unaff_R12,puVar3,uVar1,(uint)param_3,unaff_retaddr,param_2,0xff);
      puVar3 = puVar3 + *(uint *)(unaff_RBP + 0x30);
      if (iVar2 == unaff_R15D) break;
      param_3 = *(undefined8 *)(unaff_RBX + 0x28);
      in_RAX = *(undefined8 *)(unaff_RBX + 0x30);
    }
    param_4 = *(long *)(unaff_RBP + 0x70);
  }
  _compositeMaskImage(unaff_RBP,(SwImage *)(param_4 + 0x18),(SwBBox *)(param_4 + 0x50));
  return;
}



void switchD_001067f2::caseD_6(undefined8 param_1)

{
  FUN_001067fc(param_1,_opMaskAdd);
  return;
}



/* rasterStroke(SwSurface*, SwShape*, unsigned char, unsigned char, unsigned char, unsigned char) */

void rasterStroke(SwSurface *param_1,SwShape *param_2,uchar param_3,uchar param_4,uchar param_5,
                 uchar param_6)

{
  if (param_6 != 0xff) {
    param_3 = (uchar)((uint)param_3 * (uint)param_6 + 0xff >> 8);
    param_4 = (uchar)((uint)param_4 * (uint)param_6 + 0xff >> 8);
    param_5 = (uchar)((uint)param_5 * (uint)param_6 + 0xff >> 8);
  }
  _rasterRle(param_1,*(SwRle **)(param_2 + 0x20),param_3,param_4,param_5,param_6);
  return;
}



/* rasterImage(SwSurface*, SwImage*, tvg::Matrix const&, SwBBox const&, unsigned char) */

ulong rasterImage(SwSurface *param_1,SwImage *param_2,Matrix *param_3,SwBBox *param_4,uchar param_5)

{
  SwImage SVar1;
  byte bVar2;
  SwSurface SVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  undefined8 uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint *puVar20;
  code *pcVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  uint *puVar25;
  ulong uVar26;
  long lVar27;
  ushort *puVar28;
  byte *pbVar29;
  uint *puVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined8 *puVar35;
  int iVar36;
  uint uVar37;
  uint *puVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  uint *puVar42;
  long lVar43;
  ulong uVar44;
  long in_FS_OFFSET;
  float fVar45;
  uint local_f0;
  uint *local_e0;
  long local_d8;
  ulong local_98;
  float local_68 [2];
  float local_60;
  float local_58;
  float local_54;
  long local_40;
  
  lVar40 = *(long *)(param_4 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((lVar40 < 0) || (lVar12 = *(long *)(param_4 + 0x18), lVar12 < 0)) ||
      (lVar41 = *(long *)param_4, (long)(ulong)*(uint *)(param_1 + 0x34) <= lVar41)) ||
     (lVar43 = *(long *)(param_4 + 8), (long)(ulong)*(uint *)(param_1 + 0x38) <= lVar43)) {
LAB_00106e5d:
    local_98 = 1;
  }
  else {
    puVar35 = *(undefined8 **)(param_2 + 8);
    if (puVar35 == (undefined8 *)0x0) {
      if (param_2[0x31] != (SwImage)0x0) {
        piVar19 = *(int **)(param_1 + 0x70);
        iVar10 = (int)lVar40;
        iVar36 = (int)lVar41;
        if ((piVar19 == (int *)0x0) || (iVar32 = *piVar19, iVar32 < 2)) {
          SVar3 = param_1[0x3d];
          if (*(long *)(param_1 + 0x68) == 0) {
            uVar13 = (ulong)*(uint *)(param_2 + 0x20);
            puVar20 = (uint *)(*(long *)(param_2 + 0x10) +
                              ((*(int *)(param_2 + 0x28) + lVar43) * uVar13 +
                              *(int *)(param_2 + 0x24) + lVar41) * 4);
            if (SVar3 == (SwSurface)0x4) {
              uVar26 = (ulong)*(uint *)(param_1 + 0x30);
              puVar38 = (uint *)(*(long *)param_1 + (uVar26 * lVar43 + lVar41) * 4);
              if (lVar43 < lVar12) {
                uVar39 = iVar10 - iVar36;
                do {
                  if (param_5 == 0xff) {
                    if (uVar39 != 0) {
                      puVar25 = puVar20;
                      puVar30 = puVar38;
                      do {
                        uVar23 = *puVar25;
                        puVar25 = puVar25 + 1;
                        iVar32 = (~uVar23 >> 0x18) + 1;
                        *puVar30 = ((*puVar30 >> 8 & 0xff00ff) * iVar32 & 0xff00ff00 |
                                   (*puVar30 & 0xff00ff) * iVar32 >> 8 & 0xff00ff) + uVar23;
                        puVar30 = puVar30 + 1;
                      } while (puVar20 + uVar39 != puVar25);
                      uVar13 = (ulong)*(uint *)(param_2 + 0x20);
                      uVar26 = (ulong)*(uint *)(param_1 + 0x30);
                    }
                  }
                  else {
                    lVar40 = 0;
                    if (iVar10 != iVar36) {
                      do {
                        uVar23 = (puVar20[lVar40] >> 8 & 0xff00ff) * (param_5 + 1) & 0xff00ff00 |
                                 (puVar20[lVar40] & 0xff00ff) * (param_5 + 1) >> 8 & 0xff00ff;
                        iVar32 = (~uVar23 >> 0x18) + 1;
                        puVar38[lVar40] =
                             ((puVar38[lVar40] >> 8 & 0xff00ff) * iVar32 & 0xff00ff00 |
                             (puVar38[lVar40] & 0xff00ff) * iVar32 >> 8 & 0xff00ff) + uVar23;
                        lVar40 = lVar40 + 1;
                      } while ((uint)lVar40 < uVar39);
                      uVar13 = (ulong)*(uint *)(param_2 + 0x20);
                      uVar26 = (ulong)*(uint *)(param_1 + 0x30);
                    }
                  }
                  puVar38 = puVar38 + uVar26;
                  puVar20 = puVar20 + uVar13;
                  lVar43 = lVar43 + 1;
                } while (lVar12 != lVar43);
              }
            }
            else if (SVar3 == (SwSurface)0x1) {
              uVar26 = (ulong)*(uint *)(param_1 + 0x30);
              lVar27 = uVar26 * lVar43 + lVar41 + *(long *)param_1;
              if (lVar43 < lVar12) {
                do {
                  if (param_5 == 0xff) {
                    if (lVar41 < lVar40) {
                      lVar40 = lVar41;
                      do {
                        *(char *)((lVar27 - lVar41) + lVar40) =
                             (char)puVar20[lVar40 - lVar41] +
                             (char)((~puVar20[lVar40 - lVar41] >> 0x18) *
                                    (uint)*(byte *)((lVar27 - lVar41) + lVar40) + 0xff >> 8);
                        lVar40 = lVar40 + 1;
                      } while (lVar40 < *(long *)(param_4 + 0x10));
                      goto LAB_00108c48;
                    }
                  }
                  else if (lVar41 < lVar40) {
                    lVar12 = lVar27 - lVar41;
                    lVar40 = lVar41 * -4;
                    do {
                      *(char *)(lVar12 + lVar41) =
                           (char)((uint)*(byte *)(lVar12 + lVar41) * ~(uint)param_5 + 0xff >> 8) +
                           (char)((uint)*(byte *)((long)puVar20 + lVar41 * 4 + lVar40 + 3) *
                                  (uint)param_5 + 0xff >> 8);
                      lVar41 = lVar41 + 1;
                    } while (lVar41 < *(long *)(param_4 + 0x10));
LAB_00108c48:
                    uVar13 = (ulong)*(uint *)(param_2 + 0x20);
                    uVar26 = (ulong)*(uint *)(param_1 + 0x30);
                  }
                  lVar43 = lVar43 + 1;
                  lVar27 = lVar27 + uVar26;
                  puVar20 = puVar20 + uVar13;
                  if (*(long *)(param_4 + 0x18) <= lVar43) break;
                  lVar40 = *(long *)(param_4 + 0x10);
                  lVar41 = *(long *)param_4;
                } while( true );
              }
            }
          }
          else {
            local_98 = 0;
            if (SVar3 == (SwSurface)0x1) goto LAB_00106e63;
            uVar26 = (ulong)*(uint *)(param_1 + 0x30);
            puVar20 = (uint *)(*(long *)param_1 + (uVar26 * lVar43 + lVar41) * 4);
            uVar13 = (ulong)*(uint *)(param_2 + 0x20);
            lVar27 = *(long *)(param_2 + 0x10) +
                     (lVar41 + *(int *)(param_2 + 0x24) +
                     (*(int *)(param_2 + 0x28) + lVar43) * uVar13) * 4;
            if (lVar43 < lVar12) {
              while( true ) {
                if (param_5 == 0xff) {
                  if (lVar41 < lVar40) {
                    lVar40 = lVar27 + lVar41 * -4;
                    puVar38 = puVar20;
                    do {
                      uVar23 = (**(code **)(param_1 + 0x68))
                                         (*(undefined4 *)(lVar40 + lVar41 * 4),*puVar38,0xff);
                      uVar39 = *puVar38;
                      lVar12 = lVar41 * 4;
                      lVar41 = lVar41 + 1;
                      uVar17 = (uint)*(byte *)(lVar40 + 3 + lVar12);
                      *puVar38 = ((uVar23 >> 8 & 0xff00ff) - (uVar39 >> 8 & 0xff00ff)) * uVar17 +
                                 (uVar39 & 0xff00ff00) & 0xff00ff00 |
                                 (((uVar23 & 0xff00ff) - (uVar39 & 0xff00ff)) * uVar17 >> 8) +
                                 (uVar39 & 0xff00ff) & 0xff00ff;
                      puVar38 = puVar38 + 1;
                    } while (lVar41 < *(long *)(param_4 + 0x10));
                    uVar13 = (ulong)*(uint *)(param_2 + 0x20);
                    uVar26 = (ulong)*(uint *)(param_1 + 0x30);
                  }
                }
                else if (lVar41 < lVar40) {
                  lVar40 = lVar27 + lVar41 * -4;
                  puVar38 = puVar20;
                  do {
                    uVar23 = (**(code **)(param_1 + 0x68))
                                       (*(undefined4 *)(lVar40 + lVar41 * 4),*puVar38,0xff);
                    lVar12 = lVar41 * 4;
                    uVar39 = *puVar38;
                    lVar41 = lVar41 + 1;
                    iVar36 = (int)((uint)*(byte *)(lVar40 + 3 + lVar12) * (uint)param_5 + 0xff) >> 8
                    ;
                    *puVar38 = ((uVar23 >> 8 & 0xff00ff) - (uVar39 >> 8 & 0xff00ff)) * iVar36 +
                               (uVar39 & 0xff00ff00) & 0xff00ff00 |
                               (((uVar23 & 0xff00ff) - (uVar39 & 0xff00ff)) * iVar36 >> 8) +
                               (uVar39 & 0xff00ff) & 0xff00ff;
                    puVar38 = puVar38 + 1;
                  } while (lVar41 < *(long *)(param_4 + 0x10));
                  uVar13 = (ulong)*(uint *)(param_2 + 0x20);
                  uVar26 = (ulong)*(uint *)(param_1 + 0x30);
                }
                puVar20 = puVar20 + uVar26;
                lVar27 = lVar27 + uVar13 * 4;
                lVar43 = lVar43 + 1;
                if (*(long *)(param_4 + 0x18) <= lVar43) break;
                lVar41 = *(long *)param_4;
                lVar40 = *(long *)(param_4 + 0x10);
              }
            }
          }
        }
        else {
          if (5 < iVar32) goto LAB_001079d0;
          SVar3 = param_1[0x3d];
          iVar34 = (int)lVar43;
          iVar33 = (int)lVar12;
          if (*(long *)(param_1 + 0x68) == 0) {
            pcVar14 = *(code **)(param_1 + (long)(iVar32 + -2) * 8 + 0x48);
            uVar13 = (ulong)*(uint *)(param_2 + 0x20);
            uVar39 = iVar10 - iVar36;
            bVar2 = *(byte *)(piVar19 + 0x12);
            uVar26 = (ulong)bVar2;
            puVar20 = (uint *)(*(long *)(param_2 + 0x10) +
                              ((*(int *)(param_2 + 0x28) + lVar43) * uVar13 +
                              *(int *)(param_2 + 0x24) + lVar41) * 4);
            local_d8 = ((ulong)(uint)piVar19[0xe] * lVar43 + lVar41) * uVar26 +
                       *(long *)(piVar19 + 10);
            if (SVar3 == (SwSurface)0x4) {
              uVar44 = (ulong)*(uint *)(param_1 + 0x30);
              puVar38 = (uint *)(*(long *)param_1 + (lVar41 + lVar43 * uVar44) * 4);
              if (iVar33 != iVar34) {
                iVar36 = 0;
                do {
                  if (param_5 == 0xff) {
                    if (uVar39 != 0) {
                      puVar25 = puVar38;
                      puVar30 = puVar20;
                      lVar40 = local_d8;
                      do {
                        puVar42 = puVar30 + 1;
                        bVar9 = (*pcVar14)(lVar40);
                        uVar23 = (*puVar30 >> 8 & 0xff00ff) * (bVar9 + 1) & 0xff00ff00 |
                                 (*puVar30 & 0xff00ff) * (bVar9 + 1) >> 8 & 0xff00ff;
                        iVar10 = (~uVar23 >> 0x18) + 1;
                        *puVar25 = ((*puVar25 >> 8 & 0xff00ff) * iVar10 & 0xff00ff00 |
                                   (*puVar25 & 0xff00ff) * iVar10 >> 8 & 0xff00ff) + uVar23;
                        puVar25 = puVar25 + 1;
                        puVar30 = puVar42;
                        lVar40 = lVar40 + uVar26;
                      } while (puVar42 != puVar20 + uVar39);
                      goto LAB_00109528;
                    }
                  }
                  else if (uVar39 != 0) {
                    lVar40 = local_d8;
                    puVar25 = puVar38;
                    puVar30 = puVar20;
                    do {
                      puVar42 = puVar30 + 1;
                      bVar9 = (*pcVar14)(lVar40);
                      iVar10 = ((int)((uint)bVar9 * (uint)param_5 + 0xff) >> 8) + 1;
                      uVar23 = iVar10 * (*puVar30 & 0xff00ff) >> 8 & 0xff00ff |
                               (*puVar30 >> 8 & 0xff00ff) * iVar10 & 0xff00ff00;
                      iVar10 = (~uVar23 >> 0x18) + 1;
                      *puVar25 = ((*puVar25 >> 8 & 0xff00ff) * iVar10 & 0xff00ff00 |
                                 (*puVar25 & 0xff00ff) * iVar10 >> 8 & 0xff00ff) + uVar23;
                      lVar40 = lVar40 + uVar26;
                      puVar25 = puVar25 + 1;
                      puVar30 = puVar42;
                    } while (puVar42 != puVar20 + uVar39);
LAB_00109528:
                    piVar19 = *(int **)(param_1 + 0x70);
                    uVar13 = (ulong)*(uint *)(param_2 + 0x20);
                    uVar44 = (ulong)*(uint *)(param_1 + 0x30);
                  }
                  iVar36 = iVar36 + 1;
                  puVar38 = puVar38 + uVar44;
                  puVar20 = puVar20 + uVar13;
                  local_d8 = local_d8 + (ulong)((uint)bVar2 * piVar19[0xe]);
                } while (iVar36 != iVar33 - iVar34);
              }
            }
            else if (SVar3 == (SwSurface)0x1) {
              uVar44 = (ulong)*(uint *)(param_1 + 0x30);
              pbVar16 = (byte *)(lVar41 + lVar43 * uVar44 + *(long *)param_1);
              if (iVar33 != iVar34) {
                iVar36 = 0;
                do {
                  if (param_5 == 0xff) {
                    if (uVar39 != 0) {
                      pbVar29 = pbVar16;
                      puVar38 = puVar20;
                      lVar40 = local_d8;
                      do {
                        puVar25 = puVar38 + 1;
                        bVar9 = (*pcVar14)(lVar40);
                        iVar10 = (*puVar38 >> 0x18) * (uint)bVar9 + 0xff;
                        *pbVar29 = (char)((uint)iVar10 >> 8) +
                                   (char)((uint)*pbVar29 * (~(iVar10 >> 8) & 0xffU) + 0xff >> 8);
                        pbVar29 = pbVar29 + 1;
                        puVar38 = puVar25;
                        lVar40 = lVar40 + uVar26;
                      } while (puVar25 != puVar20 + uVar39);
                      goto LAB_00108ec9;
                    }
                  }
                  else if (uVar39 != 0) {
                    lVar40 = local_d8;
                    pbVar29 = pbVar16;
                    puVar38 = puVar20;
                    do {
                      puVar25 = puVar38 + 1;
                      bVar9 = (*pcVar14)(lVar40);
                      iVar10 = ((int)((uint)bVar9 * (uint)param_5 + 0xff) >> 8) * (*puVar38 >> 0x18)
                               + 0xff;
                      *pbVar29 = (char)((uint)iVar10 >> 8) +
                                 (char)((uint)*pbVar29 * (~(iVar10 >> 8) & 0xffU) + 0xff >> 8);
                      lVar40 = lVar40 + uVar26;
                      pbVar29 = pbVar29 + 1;
                      puVar38 = puVar25;
                    } while (puVar25 != puVar20 + uVar39);
LAB_00108ec9:
                    piVar19 = *(int **)(param_1 + 0x70);
                    uVar13 = (ulong)*(uint *)(param_2 + 0x20);
                    uVar44 = (ulong)*(uint *)(param_1 + 0x30);
                  }
                  iVar36 = iVar36 + 1;
                  pbVar16 = pbVar16 + uVar44;
                  local_d8 = local_d8 + (ulong)((uint)bVar2 * piVar19[0xe]);
                  puVar20 = puVar20 + uVar13;
                } while (iVar36 != iVar33 - iVar34);
              }
            }
          }
          else {
            local_98 = 0;
            if (SVar3 == (SwSurface)0x1) goto LAB_00106e63;
            bVar2 = *(byte *)(piVar19 + 0x12);
            uVar39 = iVar10 - iVar36;
            pcVar14 = *(code **)(param_1 + (long)(iVar32 + -2) * 8 + 0x48);
            uVar13 = (ulong)*(uint *)(param_2 + 0x20);
            uVar44 = (ulong)*(uint *)(param_1 + 0x30);
            puVar20 = (uint *)(*(long *)(param_2 + 0x10) +
                              ((*(int *)(param_2 + 0x28) + lVar43) * uVar13 +
                              *(int *)(param_2 + 0x24) + lVar41) * 4);
            uVar26 = (ulong)bVar2;
            lVar40 = *(long *)(piVar19 + 10) +
                     ((ulong)(uint)piVar19[0xe] * lVar43 + lVar41) * uVar26;
            puVar38 = (uint *)(*(long *)param_1 + (lVar41 + uVar44 * lVar43) * 4);
            if (iVar33 != iVar34) {
              iVar36 = 0;
              do {
                if (param_5 == 0xff) {
                  puVar25 = puVar38;
                  lVar12 = lVar40;
                  puVar30 = puVar20;
                  if (uVar39 != 0) {
                    do {
                      local_e0 = puVar20 + uVar39;
                      puVar42 = puVar30 + 1;
                      bVar9 = (*pcVar14)(lVar12);
                      uVar23 = *puVar25;
                      uVar22 = (*puVar30 >> 8 & 0xff00ff) * (bVar9 + 1);
                      uVar17 = (**(code **)(param_1 + 0x68))
                                         ((*puVar30 & 0xff00ff) * (bVar9 + 1) >> 8 & 0xff00ff |
                                          uVar22 & 0xff00ff00,uVar23,0xff);
                      uVar22 = uVar22 >> 0x18;
                      *puVar25 = ((uVar17 >> 8 & 0xff00ff) - (uVar23 >> 8 & 0xff00ff)) * uVar22 +
                                 (uVar23 & 0xff00ff00) & 0xff00ff00 |
                                 (((uVar17 & 0xff00ff) - (uVar23 & 0xff00ff)) * uVar22 >> 8) +
                                 (uVar23 & 0xff00ff) & 0xff00ff;
                      puVar25 = puVar25 + 1;
                      lVar12 = lVar12 + uVar26;
                      puVar30 = puVar42;
                    } while (puVar42 != local_e0);
                    goto LAB_00107787;
                  }
                }
                else if (uVar39 != 0) {
                  puVar25 = puVar20;
                  lVar12 = lVar40;
                  puVar30 = puVar38;
                  do {
                    bVar9 = (*pcVar14)(lVar12);
                    uVar23 = *puVar30;
                    uVar22 = (*puVar25 >> 8 & 0xff00ff) * (bVar9 + 1);
                    uVar17 = (**(code **)(param_1 + 0x68))
                                       (uVar22 & 0xff00ff00 |
                                        (*puVar25 & 0xff00ff) * (bVar9 + 1) >> 8 & 0xff00ff,uVar23,
                                        0xff);
                    iVar10 = (int)((uVar22 >> 0x18) * (uint)param_5 + 0xff) >> 8;
                    puVar25 = puVar25 + 1;
                    *puVar30 = ((uVar17 >> 8 & 0xff00ff) - (uVar23 >> 8 & 0xff00ff)) * iVar10 +
                               (uVar23 & 0xff00ff00) & 0xff00ff00 |
                               (((uVar17 & 0xff00ff) - (uVar23 & 0xff00ff)) * iVar10 >> 8) +
                               (uVar23 & 0xff00ff) & 0xff00ff;
                    lVar12 = lVar12 + uVar26;
                    puVar30 = puVar30 + 1;
                  } while (puVar25 != puVar20 + uVar39);
LAB_00107787:
                  piVar19 = *(int **)(param_1 + 0x70);
                  uVar13 = (ulong)*(uint *)(param_2 + 0x20);
                  uVar44 = (ulong)*(uint *)(param_1 + 0x30);
                }
                iVar36 = iVar36 + 1;
                puVar38 = puVar38 + uVar44;
                puVar20 = puVar20 + uVar13;
                lVar40 = lVar40 + (ulong)((uint)bVar2 * piVar19[0xe]);
              } while (iVar36 != iVar33 - iVar34);
            }
          }
        }
        goto LAB_00106e5d;
      }
      SVar1 = param_2[0x32];
      local_98 = (ulong)(byte)SVar1;
      if (SVar1 == (SwImage)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00107545;
        goto LAB_00109847;
      }
      cVar8 = tvg::inverse(param_3,(Matrix *)local_68);
      fVar7 = _LC17;
      fVar6 = _LC16;
      fVar5 = _LC15;
      if (cVar8 != '\0') {
        piVar19 = *(int **)(param_1 + 0x70);
        if ((piVar19 == (int *)0x0) || (iVar36 = *piVar19, iVar36 < 2)) {
          SVar3 = param_1[0x3d];
          if (*(long *)(param_1 + 0x68) == 0) {
            pcVar14 = _interpUpScaler;
            if (*(float *)(param_2 + 0x2c) < _LC15) {
              pcVar14 = _interpDownScaler;
            }
            iVar10 = (int)(long)(_LC15 / *(float *)(param_2 + 0x2c));
            iVar36 = 1;
            if (iVar10 != 0) {
              iVar36 = iVar10;
            }
            if (SVar3 == (SwSurface)0x4) {
              uVar13 = (ulong)*(uint *)(param_1 + 0x30);
              lVar12 = *(long *)(param_4 + 8);
              lVar40 = *(long *)param_1 + (uVar13 * lVar12 + *(long *)param_4) * 4;
              if (lVar12 < *(long *)(param_4 + 0x18)) {
                iVar10 = 0;
                uVar39 = 0;
                do {
                  fVar45 = ((float)lVar12 * local_58 + local_54) - fVar6;
                  if ((fVar7 < fVar45) &&
                     (uVar23 = *(uint *)(param_2 + 0x1c), (uint)(long)(fVar5 + fVar45) < uVar23)) {
                    if (pcVar14 == _interpDownScaler) {
                      fVar45 = nearbyintf(fVar45);
                      iVar10 = (int)fVar45 - iVar36;
                      if (iVar10 < 0) {
                        iVar10 = 0;
                      }
                      uVar17 = (int)fVar45 + iVar36;
                      uVar39 = uVar23;
                      if ((int)uVar17 <= (int)uVar23) {
                        uVar39 = uVar17;
                      }
                    }
                    lVar41 = *(long *)param_4;
                    if (lVar41 < *(long *)(param_4 + 0x10)) {
                      lVar43 = lVar40 + lVar41 * -4;
                      do {
                        fVar45 = ((float)lVar41 * local_68[0] + local_60) - fVar6;
                        if ((fVar7 < fVar45) &&
                           ((uint)(long)(fVar5 + fVar45) < *(uint *)(param_2 + 0x18))) {
                          uVar23 = (*pcVar14)(*(undefined8 *)(param_2 + 0x10),
                                              *(undefined4 *)(param_2 + 0x20),
                                              *(uint *)(param_2 + 0x18),
                                              *(undefined4 *)(param_2 + 0x1c),iVar10,uVar39,iVar36);
                          if (param_5 != 0xff) {
                            uVar23 = (uVar23 & 0xff00ff) * (param_5 + 1) >> 8 & 0xff00ff |
                                     (uVar23 >> 8 & 0xff00ff) * (param_5 + 1) & 0xff00ff00;
                          }
                          uVar17 = *(uint *)(lVar43 + lVar41 * 4);
                          iVar32 = (~uVar23 >> 0x18) + 1;
                          *(uint *)(lVar43 + lVar41 * 4) =
                               ((uVar17 >> 8 & 0xff00ff) * iVar32 & 0xff00ff00 |
                               (uVar17 & 0xff00ff) * iVar32 >> 8 & 0xff00ff) + uVar23;
                        }
                        lVar41 = lVar41 + 1;
                      } while (lVar41 < *(long *)(param_4 + 0x10));
                      uVar13 = (ulong)*(uint *)(param_1 + 0x30);
                    }
                  }
                  lVar12 = lVar12 + 1;
                  lVar40 = lVar40 + uVar13 * 4;
                } while (lVar12 < *(long *)(param_4 + 0x18));
                local_98 = (ulong)(byte)SVar1;
              }
            }
            else if (SVar3 == (SwSurface)0x1) {
              uVar13 = (ulong)*(uint *)(param_1 + 0x30);
              lVar40 = *(long *)(param_4 + 8);
              lVar12 = *(long *)param_1 + uVar13 * lVar40 + *(long *)param_4;
              if (lVar40 < *(long *)(param_4 + 0x18)) {
                iVar10 = 0;
                uVar39 = 0;
                do {
                  fVar45 = ((float)lVar40 * local_58 + local_54) - fVar6;
                  if ((fVar7 < fVar45) &&
                     (uVar23 = *(uint *)(param_2 + 0x1c), (uint)(long)(fVar45 + fVar5) < uVar23)) {
                    if (pcVar14 == _interpDownScaler) {
                      fVar45 = nearbyintf(fVar45);
                      iVar10 = (int)fVar45 - iVar36;
                      if (iVar10 < 0) {
                        iVar10 = 0;
                      }
                      uVar39 = (int)fVar45 + iVar36;
                      if ((int)uVar23 < (int)uVar39) {
                        uVar39 = uVar23;
                      }
                    }
                    lVar41 = *(long *)param_4;
                    if (lVar41 < *(long *)(param_4 + 0x10)) {
                      lVar43 = lVar12 - lVar41;
                      do {
                        fVar45 = ((float)lVar41 * local_68[0] + local_60) - fVar6;
                        if ((fVar7 < fVar45) &&
                           ((uint)(long)(fVar45 + fVar5) < *(uint *)(param_2 + 0x18))) {
                          uVar23 = (*pcVar14)(*(undefined8 *)(param_2 + 0x10),
                                              *(undefined4 *)(param_2 + 0x20),
                                              *(uint *)(param_2 + 0x18),
                                              *(undefined4 *)(param_2 + 0x1c),iVar10,uVar39,iVar36);
                          *(char *)(lVar43 + lVar41) =
                               (char)((uVar23 >> 0x18) * (uint)param_5 + 0xff >> 8);
                        }
                        lVar41 = lVar41 + 1;
                      } while (lVar41 < *(long *)(param_4 + 0x10));
                      uVar13 = (ulong)*(uint *)(param_1 + 0x30);
                    }
                  }
                  lVar40 = lVar40 + 1;
                  lVar12 = lVar12 + uVar13;
                } while (lVar40 < *(long *)(param_4 + 0x18));
                local_98 = (ulong)(byte)SVar1;
              }
            }
          }
          else {
            if (SVar3 == (SwSurface)0x1) goto LAB_001079d0;
            uVar13 = (ulong)*(uint *)(param_1 + 0x30);
            pcVar14 = _interpDownScaler;
            lVar40 = *(long *)(param_4 + 8);
            puVar20 = (uint *)(*(long *)param_1 + (uVar13 * lVar40 + *(long *)param_4) * 4);
            if (_LC15 <= *(float *)(param_2 + 0x2c)) {
              pcVar14 = _interpUpScaler;
            }
            iVar10 = (int)(long)(_LC15 / *(float *)(param_2 + 0x2c));
            iVar36 = 1;
            if (iVar10 != 0) {
              iVar36 = iVar10;
            }
            if (lVar40 < *(long *)(param_4 + 0x18)) {
              uVar39 = 0;
              iVar10 = 0;
              local_98 = (ulong)(byte)SVar1;
              do {
                fVar45 = ((float)lVar40 * local_58 + local_54) - fVar6;
                if ((fVar7 < fVar45) &&
                   (uVar23 = *(uint *)(param_2 + 0x1c), (uint)(long)(fVar45 + fVar5) < uVar23)) {
                  if (pcVar14 == _interpDownScaler) {
                    fVar45 = nearbyintf(fVar45);
                    iVar32 = (int)fVar45 - iVar36;
                    iVar10 = 0;
                    if (-1 < iVar32) {
                      iVar10 = iVar32;
                    }
                    uVar17 = (int)fVar45 + iVar36;
                    uVar39 = uVar23;
                    if ((int)uVar17 <= (int)uVar23) {
                      uVar39 = uVar17;
                    }
                  }
                  lVar12 = *(long *)param_4;
                  puVar38 = puVar20;
                  if (lVar12 < *(long *)(param_4 + 0x10)) {
                    do {
                      fVar45 = ((float)lVar12 * local_68[0] + local_60) - fVar6;
                      if ((fVar7 < fVar45) &&
                         ((uint)(long)(fVar5 + fVar45) < *(uint *)(param_2 + 0x18))) {
                        uVar17 = (*pcVar14)(*(undefined8 *)(param_2 + 0x10),
                                            *(undefined4 *)(param_2 + 0x20),
                                            *(uint *)(param_2 + 0x18),
                                            *(undefined4 *)(param_2 + 0x1c),iVar10,uVar39,iVar36);
                        uVar22 = (**(code **)(param_1 + 0x68))(uVar17,*puVar38,0xff);
                        uVar23 = *puVar38;
                        iVar32 = (int)((uVar17 >> 0x18) * (uint)param_5 + 0xff) >> 8;
                        *puVar38 = ((uVar22 >> 8 & 0xff00ff) - (uVar23 >> 8 & 0xff00ff)) * iVar32 +
                                   (uVar23 & 0xff00ff00) & 0xff00ff00 |
                                   (((uVar22 & 0xff00ff) - (uVar23 & 0xff00ff)) * iVar32 >> 8) +
                                   (uVar23 & 0xff00ff) & 0xff00ff;
                      }
                      lVar12 = lVar12 + 1;
                      puVar38 = puVar38 + 1;
                    } while (lVar12 < *(long *)(param_4 + 0x10));
                    uVar13 = (ulong)*(uint *)(param_1 + 0x30);
                  }
                }
                lVar40 = lVar40 + 1;
                puVar20 = puVar20 + uVar13;
              } while (lVar40 < *(long *)(param_4 + 0x18));
            }
          }
        }
        else {
          if ((5 < iVar36) || (param_1[0x3d] == (SwSurface)0x1)) goto LAB_001079d0;
          lVar12 = *(long *)(param_4 + 8);
          uVar13 = (ulong)*(uint *)(param_1 + 0x30);
          bVar2 = *(byte *)(piVar19 + 0x12);
          pcVar14 = *(code **)(param_1 + (long)(iVar36 + -2) * 8 + 0x48);
          pcVar21 = _interpUpScaler;
          lVar40 = *(long *)param_1 + (uVar13 * lVar12 + *(long *)param_4) * 4;
          lVar41 = *(long *)(piVar19 + 10) +
                   ((ulong)(uint)piVar19[0xe] * lVar12 + *(long *)param_4) * (ulong)bVar2;
          if (*(float *)(param_2 + 0x2c) < _LC15) {
            pcVar21 = _interpDownScaler;
          }
          iVar10 = (int)(long)(_LC15 / *(float *)(param_2 + 0x2c));
          iVar36 = 1;
          if (iVar10 != 0) {
            iVar36 = iVar10;
          }
          if (lVar12 < *(long *)(param_4 + 0x18)) {
            uVar39 = 0;
            iVar10 = 0;
            do {
              fVar45 = ((float)lVar12 * local_58 + local_54) - fVar6;
              if ((fVar7 < fVar45) &&
                 (uVar23 = *(uint *)(param_2 + 0x1c), (uint)(long)(fVar45 + fVar5) < uVar23)) {
                if (pcVar21 == _interpDownScaler) {
                  fVar45 = nearbyintf(fVar45);
                  iVar32 = (int)fVar45 - iVar36;
                  iVar10 = 0;
                  if (-1 < iVar32) {
                    iVar10 = iVar32;
                  }
                  uVar17 = (int)fVar45 + iVar36;
                  uVar39 = uVar23;
                  if ((int)uVar17 <= (int)uVar23) {
                    uVar39 = uVar17;
                  }
                }
                lVar43 = *(long *)param_4;
                if (lVar43 < *(long *)(param_4 + 0x10)) {
                  lVar27 = lVar40 + lVar43 * -4;
                  lVar24 = lVar41;
                  do {
                    fVar45 = ((float)lVar43 * local_68[0] + local_60) - fVar6;
                    if ((fVar7 < fVar45) &&
                       ((uint)(long)(fVar5 + fVar45) < *(uint *)(param_2 + 0x18))) {
                      uVar23 = (*pcVar21)(*(undefined8 *)(param_2 + 0x10),
                                          *(undefined4 *)(param_2 + 0x20),*(uint *)(param_2 + 0x18),
                                          *(undefined4 *)(param_2 + 0x1c),iVar10,uVar39,iVar36);
                      if (param_5 == 0xff) {
                        bVar9 = (*pcVar14)();
                        uVar17 = (uint)bVar9;
                      }
                      else {
                        bVar9 = (*pcVar14)(lVar24);
                        uVar17 = (int)((uint)bVar9 * (uint)param_5 + 0xff) >> 8;
                      }
                      uVar22 = *(uint *)(lVar27 + lVar43 * 4);
                      uVar23 = (uVar23 >> 8 & 0xff00ff) * (uVar17 + 1) & 0xff00ff00 |
                               (uVar23 & 0xff00ff) * (uVar17 + 1) >> 8 & 0xff00ff;
                      iVar32 = (~uVar23 >> 0x18) + 1;
                      *(uint *)(lVar27 + lVar43 * 4) =
                           ((uVar22 >> 8 & 0xff00ff) * iVar32 & 0xff00ff00 |
                           (uVar22 & 0xff00ff) * iVar32 >> 8 & 0xff00ff) + uVar23;
                    }
                    lVar43 = lVar43 + 1;
                    lVar24 = lVar24 + (ulong)bVar2;
                  } while (lVar43 < *(long *)(param_4 + 0x10));
                  piVar19 = *(int **)(param_1 + 0x70);
                  uVar13 = (ulong)*(uint *)(param_1 + 0x30);
                }
                lVar40 = lVar40 + uVar13 * 4;
                lVar41 = lVar41 + (ulong)((uint)bVar2 * piVar19[0xe]);
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < *(long *)(param_4 + 0x18));
            local_98 = (ulong)(byte)SVar1;
          }
        }
      }
    }
    else if (param_2[0x31] == (SwImage)0x0) {
      SVar1 = param_2[0x32];
      local_98 = (ulong)(byte)SVar1;
      if (SVar1 == (SwImage)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          param_4 = (SwBBox *)0x0;
LAB_00107545:
          uVar13 = _rasterTexmapPolygon(param_1,param_2,param_3,param_4,param_5);
          return uVar13;
        }
        goto LAB_00109847;
      }
      if (param_1[0x3d] == (SwSurface)0x1) {
LAB_001079d0:
        local_98 = 0;
      }
      else {
        cVar8 = tvg::inverse(param_3,(Matrix *)local_68);
        fVar7 = _LC17;
        fVar6 = _LC16;
        fVar5 = _LC15;
        if (cVar8 != '\0') {
          piVar19 = *(int **)(param_1 + 0x70);
          if ((piVar19 == (int *)0x0) || (iVar36 = *piVar19, iVar36 < 2)) {
            puVar35 = *(undefined8 **)(param_2 + 8);
            fVar45 = *(float *)(param_2 + 0x2c);
            puVar28 = (ushort *)*puVar35;
            if (*(long *)(param_1 + 0x68) == 0) {
              pcVar14 = _interpUpScaler;
              if (fVar45 < _LC15) {
                pcVar14 = _interpDownScaler;
              }
              iVar10 = (int)(long)(_LC15 / fVar45);
              iVar36 = 1;
              if (iVar10 != 0) {
                iVar36 = iVar10;
              }
              if (*(int *)((long)puVar35 + 0xc) != 0) {
                local_98 = (ulong)(byte)SVar1;
                uVar23 = 0;
                uVar39 = 0;
                iVar10 = 0;
                do {
                  uVar4 = puVar28[1];
                  fVar45 = ((float)uVar4 * local_58 + local_54) - fVar6;
                  if ((fVar7 < fVar45) &&
                     (uVar17 = *(uint *)(param_2 + 0x1c), (uint)(long)(fVar45 + fVar5) < uVar17)) {
                    if (pcVar14 == _interpDownScaler) {
                      fVar45 = nearbyintf(fVar45);
                      iVar32 = (int)fVar45 - iVar36;
                      iVar10 = 0;
                      if (-1 < iVar32) {
                        iVar10 = iVar32;
                      }
                      uVar22 = (int)fVar45 + iVar36;
                      uVar39 = uVar17;
                      if ((int)uVar22 <= (int)uVar17) {
                        uVar39 = uVar22;
                      }
                    }
                    uVar17 = (uint)*puVar28;
                    uVar22 = (uint)puVar28[2];
                    puVar20 = (uint *)(*(long *)param_1 +
                                      (ulong)((uint)uVar4 * *(int *)(param_1 + 0x30) + uVar17) * 4);
                    iVar32 = (int)((uint)(byte)puVar28[3] * (uint)param_5 + 0xff) >> 8;
                    if (uVar17 < uVar22 + uVar17) {
                      iVar33 = iVar32 + 1;
                      uVar31 = uVar17;
                      do {
                        fVar45 = ((float)(int)uVar31 * local_68[0] + local_60) - fVar6;
                        if ((fVar7 < fVar45) &&
                           ((uint)(long)(fVar5 + fVar45) < *(uint *)(param_2 + 0x18))) {
                          uVar15 = (*pcVar14)(*(undefined8 *)(param_2 + 0x10),
                                              *(undefined4 *)(param_2 + 0x20),
                                              *(uint *)(param_2 + 0x18),
                                              *(undefined4 *)(param_2 + 0x1c),iVar10,uVar39,iVar36);
                          uVar37 = (uint)uVar15;
                          if (iVar32 != 0xff) {
                            uVar37 = (uVar37 & 0xff00ff) * iVar33 >> 8 & 0xff00ff |
                                     ((uint)((ulong)uVar15 >> 8) & 0xff00ff) * iVar33 & 0xff00ff00;
                          }
                          uVar17 = (uint)*puVar28;
                          uVar22 = (uint)puVar28[2];
                          iVar34 = (~uVar37 >> 0x18) + 1;
                          *puVar20 = ((*puVar20 >> 8 & 0xff00ff) * iVar34 & 0xff00ff00 |
                                     (*puVar20 & 0xff00ff) * iVar34 >> 8 & 0xff00ff) + uVar37;
                        }
                        uVar31 = uVar31 + 1;
                        puVar20 = puVar20 + 1;
                      } while (uVar31 < uVar17 + uVar22);
                      puVar35 = *(undefined8 **)(param_2 + 8);
                    }
                  }
                  uVar23 = uVar23 + 1;
                  puVar28 = puVar28 + 4;
                } while (uVar23 < *(uint *)((long)puVar35 + 0xc));
              }
            }
            else {
              pcVar14 = _interpUpScaler;
              if (fVar45 < _LC15) {
                pcVar14 = _interpDownScaler;
              }
              iVar10 = (int)(long)(_LC15 / fVar45);
              iVar36 = 1;
              if (iVar10 != 0) {
                iVar36 = iVar10;
              }
              if (*(int *)((long)puVar35 + 0xc) != 0) {
                local_98 = (ulong)(byte)SVar1;
                uVar23 = 0;
                uVar39 = 0;
                iVar10 = 0;
                do {
                  uVar4 = puVar28[1];
                  fVar45 = ((float)uVar4 * local_58 + local_54) - fVar6;
                  if ((fVar7 < fVar45) &&
                     (uVar17 = *(uint *)(param_2 + 0x1c), (uint)(long)(fVar45 + fVar5) < uVar17)) {
                    if (pcVar14 == _interpDownScaler) {
                      fVar45 = nearbyintf(fVar45);
                      iVar32 = (int)fVar45 - iVar36;
                      iVar10 = 0;
                      if (-1 < iVar32) {
                        iVar10 = iVar32;
                      }
                      uVar22 = (int)fVar45 + iVar36;
                      uVar39 = uVar17;
                      if ((int)uVar22 <= (int)uVar17) {
                        uVar39 = uVar22;
                      }
                    }
                    uVar17 = (uint)*puVar28;
                    puVar20 = (uint *)(*(long *)param_1 +
                                      (ulong)((uint)uVar4 * *(int *)(param_1 + 0x30) + uVar17) * 4);
                    uVar22 = (uint)puVar28[2];
                    iVar32 = (int)((uint)(byte)puVar28[3] * (uint)param_5 + 0xff) >> 8;
                    if (iVar32 == 0xff) {
                      uVar31 = uVar17;
                      if (uVar17 < uVar22 + uVar17) {
                        do {
                          fVar45 = ((float)(int)uVar31 * local_68[0] + local_60) - fVar6;
                          if ((fVar7 < fVar45) &&
                             ((uint)(long)(fVar5 + fVar45) < *(uint *)(param_2 + 0x18))) {
                            uVar37 = (*pcVar14)(*(undefined8 *)(param_2 + 0x10),
                                                *(undefined4 *)(param_2 + 0x20),
                                                *(uint *)(param_2 + 0x18),
                                                *(undefined4 *)(param_2 + 0x1c),iVar10,uVar39,iVar36
                                               );
                            uVar18 = (**(code **)(param_1 + 0x68))(uVar37,*puVar20,0xff);
                            uVar17 = *puVar20;
                            uVar22 = (uint)puVar28[2];
                            *puVar20 = ((uVar18 >> 8 & 0xff00ff) - (uVar17 >> 8 & 0xff00ff)) *
                                       (uVar37 >> 0x18) + (uVar17 & 0xff00ff00) & 0xff00ff00 |
                                       (((uVar18 & 0xff00ff) - (uVar17 & 0xff00ff)) *
                                        (uVar37 >> 0x18) >> 8) + (uVar17 & 0xff00ff) & 0xff00ff;
                            uVar17 = (uint)*puVar28;
                          }
                          uVar31 = uVar31 + 1;
                          puVar20 = puVar20 + 1;
                        } while (uVar31 < uVar17 + uVar22);
                        puVar35 = *(undefined8 **)(param_2 + 8);
                      }
                    }
                    else {
                      uVar31 = uVar17;
                      if (uVar17 < uVar22 + uVar17) {
                        do {
                          fVar45 = ((float)(int)uVar31 * local_68[0] + local_60) - fVar6;
                          if ((fVar7 < fVar45) &&
                             ((uint)(long)(fVar5 + fVar45) < *(uint *)(param_2 + 0x18))) {
                            uVar22 = (*pcVar14)(*(undefined8 *)(param_2 + 0x10),
                                                *(undefined4 *)(param_2 + 0x20),
                                                *(uint *)(param_2 + 0x18),
                                                *(undefined4 *)(param_2 + 0x1c),iVar10,uVar39,iVar36
                                               );
                            uVar37 = (**(code **)(param_1 + 0x68))(uVar22,*puVar20,0xff);
                            uVar17 = *puVar20;
                            iVar33 = (int)((uVar22 >> 0x18) * iVar32 + 0xff) >> 8;
                            uVar22 = (uint)puVar28[2];
                            *puVar20 = ((uVar37 >> 8 & 0xff00ff) - (uVar17 >> 8 & 0xff00ff)) *
                                       iVar33 + (uVar17 & 0xff00ff00) & 0xff00ff00 |
                                       (((uVar37 & 0xff00ff) - (uVar17 & 0xff00ff)) * iVar33 >> 8) +
                                       (uVar17 & 0xff00ff) & 0xff00ff;
                            uVar17 = (uint)*puVar28;
                          }
                          uVar31 = uVar31 + 1;
                          puVar20 = puVar20 + 1;
                        } while (uVar31 < uVar17 + uVar22);
                        puVar35 = *(undefined8 **)(param_2 + 8);
                      }
                    }
                  }
                  uVar23 = uVar23 + 1;
                  puVar28 = puVar28 + 4;
                } while (uVar23 < *(uint *)((long)puVar35 + 0xc));
              }
            }
          }
          else {
            if (5 < iVar36) goto LAB_001079d0;
            bVar2 = *(byte *)(piVar19 + 0x12);
            puVar35 = *(undefined8 **)(param_2 + 8);
            puVar28 = (ushort *)*puVar35;
            pcVar14 = *(code **)(param_1 + (long)(iVar36 + -2) * 8 + 0x48);
            pcVar21 = _interpUpScaler;
            if (*(float *)(param_2 + 0x2c) < _LC15) {
              pcVar21 = _interpDownScaler;
            }
            uVar23 = (uint)(long)(_LC15 / *(float *)(param_2 + 0x2c));
            uVar39 = 1;
            if (uVar23 != 0) {
              uVar39 = uVar23;
            }
            if (*(int *)((long)puVar35 + 0xc) != 0) {
              uVar23 = 0;
              uVar17 = 0;
              iVar36 = 0;
              do {
                uVar4 = puVar28[1];
                fVar45 = ((float)uVar4 * local_58 + local_54) - fVar6;
                if ((fVar7 < fVar45) &&
                   (uVar22 = *(uint *)(param_2 + 0x1c), (uint)(long)(fVar45 + fVar5) < uVar22)) {
                  if (pcVar21 == _interpDownScaler) {
                    fVar45 = nearbyintf(fVar45);
                    iVar10 = (int)fVar45 - uVar39;
                    iVar36 = 0;
                    if (-1 < iVar10) {
                      iVar36 = iVar10;
                    }
                    uVar31 = (int)fVar45 + uVar39;
                    uVar23 = uVar22;
                    if ((int)uVar31 <= (int)uVar22) {
                      uVar23 = uVar31;
                    }
                  }
                  uVar37 = (uint)*puVar28;
                  puVar20 = (uint *)(*(long *)param_1 +
                                    (ulong)(*(int *)(param_1 + 0x30) * (uint)uVar4 + uVar37) * 4);
                  lVar40 = (ulong)((uint)bVar2 *
                                  ((uint)uVar4 * *(int *)(*(long *)(param_1 + 0x70) + 0x38) + uVar37
                                  )) + *(long *)(*(long *)(param_1 + 0x70) + 0x28);
                  uVar31 = (uint)puVar28[2];
                  iVar10 = (int)((uint)(byte)puVar28[3] * (uint)param_5 + 0xff) >> 8;
                  uVar22 = uVar37;
                  if (uVar37 < uVar31 + uVar37) {
                    do {
                      fVar45 = ((float)(int)uVar22 * local_68[0] + local_60) - fVar6;
                      if ((fVar7 < fVar45) &&
                         ((uint)(long)(fVar5 + fVar45) < *(uint *)(param_2 + 0x18))) {
                        uVar13 = (ulong)uVar39;
                        uVar31 = (*pcVar21)(*(undefined8 *)(param_2 + 0x10),
                                            *(undefined4 *)(param_2 + 0x20),
                                            *(uint *)(param_2 + 0x18),
                                            *(undefined4 *)(param_2 + 0x1c),iVar36,uVar23);
                        if (iVar10 == 0xff) {
                          bVar9 = (*pcVar14)();
                          uVar18 = (uint)bVar9;
                        }
                        else {
                          bVar9 = (*pcVar14)(lVar40,uVar13);
                          uVar18 = (int)((uint)bVar9 * iVar10 + 0xff) >> 8;
                        }
                        uVar37 = (uint)*puVar28;
                        uVar18 = (uVar31 >> 8 & 0xff00ff) * (uVar18 + 1) & 0xff00ff00 |
                                 (uVar31 & 0xff00ff) * (uVar18 + 1) >> 8 & 0xff00ff;
                        iVar32 = (~uVar18 >> 0x18) + 1;
                        uVar31 = (uint)puVar28[2];
                        *puVar20 = ((*puVar20 >> 8 & 0xff00ff) * iVar32 & 0xff00ff00 |
                                   (*puVar20 & 0xff00ff) * iVar32 >> 8 & 0xff00ff) + uVar18;
                      }
                      uVar22 = uVar22 + 1;
                      puVar20 = puVar20 + 1;
                      lVar40 = lVar40 + (ulong)bVar2;
                    } while (uVar22 < uVar37 + uVar31);
                    puVar35 = *(undefined8 **)(param_2 + 8);
                  }
                }
                uVar17 = uVar17 + 1;
                puVar28 = puVar28 + 4;
              } while (uVar17 < *(uint *)((long)puVar35 + 0xc));
              local_98 = (ulong)(byte)SVar1;
            }
          }
        }
      }
    }
    else {
      local_98 = 0;
      if (param_1[0x3d] != (SwSurface)0x1) {
        piVar19 = *(int **)(param_1 + 0x70);
        if ((piVar19 == (int *)0x0) || (iVar36 = *piVar19, iVar36 < 2)) {
          puVar28 = (ushort *)*puVar35;
          if (*(long *)(param_1 + 0x68) == 0) {
            if (*(int *)((long)puVar35 + 0xc) != 0) {
              lVar40 = *(long *)(param_2 + 0x10);
              lVar12 = *(long *)param_1;
              uVar39 = 0;
              do {
                iVar36 = (int)((uint)(byte)puVar28[3] * (uint)param_5 + 0xff) >> 8;
                lVar41 = lVar12 + (ulong)(*(int *)(param_1 + 0x30) * (uint)puVar28[1] +
                                         (uint)*puVar28) * 4;
                lVar43 = lVar40 + ((ulong)(((uint)puVar28[1] + *(int *)(param_2 + 0x28)) *
                                          *(int *)(param_2 + 0x20)) +
                                  (long)(int)((uint)*puVar28 + *(int *)(param_2 + 0x24))) * 4;
                uVar23 = (uint)puVar28[2];
                if (iVar36 == 0xff) {
                  if (uVar23 != 0) {
                    lVar27 = 0;
                    do {
                      uVar17 = *(uint *)(lVar43 + lVar27 * 4);
                      uVar22 = *(uint *)(lVar41 + lVar27 * 4);
                      iVar36 = (~uVar17 >> 0x18) + 1;
                      *(uint *)(lVar41 + lVar27 * 4) =
                           ((uVar22 >> 8 & 0xff00ff) * iVar36 & 0xff00ff00 |
                           (uVar22 & 0xff00ff) * iVar36 >> 8 & 0xff00ff) + uVar17;
                      lVar27 = lVar27 + 1;
                    } while ((uint)lVar27 < uVar23);
                  }
                }
                else {
                  iVar36 = iVar36 + 1;
                  lVar27 = 0;
                  if (uVar23 != 0) {
                    do {
                      uVar17 = *(uint *)(lVar43 + lVar27 * 4);
                      uVar22 = *(uint *)(lVar41 + lVar27 * 4);
                      uVar17 = (uVar17 >> 8 & 0xff00ff) * iVar36 & 0xff00ff00 |
                               (uVar17 & 0xff00ff) * iVar36 >> 8 & 0xff00ff;
                      iVar10 = (~uVar17 >> 0x18) + 1;
                      *(uint *)(lVar41 + lVar27 * 4) =
                           ((uVar22 >> 8 & 0xff00ff) * iVar10 & 0xff00ff00 |
                           (uVar22 & 0xff00ff) * iVar10 >> 8 & 0xff00ff) + uVar17;
                      lVar27 = lVar27 + 1;
                    } while ((uint)lVar27 < uVar23);
                  }
                }
                uVar39 = uVar39 + 1;
                puVar28 = puVar28 + 4;
              } while (uVar39 < *(uint *)((long)puVar35 + 0xc));
            }
          }
          else if (*(int *)((long)puVar35 + 0xc) != 0) {
            local_f0 = 0;
            do {
              lVar40 = *(long *)param_1 +
                       (ulong)(*(int *)(param_1 + 0x30) * (uint)puVar28[1] + (uint)*puVar28) * 4;
              lVar12 = *(long *)(param_2 + 0x10) +
                       ((ulong)(((uint)puVar28[1] + *(int *)(param_2 + 0x28)) *
                               *(int *)(param_2 + 0x20)) +
                       (long)(int)((uint)*puVar28 + *(int *)(param_2 + 0x24))) * 4;
              iVar36 = (int)((uint)(byte)puVar28[3] * (uint)param_5 + 0xff) >> 8;
              if (iVar36 == 0xff) {
                if (puVar28[2] != 0) {
                  lVar41 = 0;
                  do {
                    uVar11 = (**(code **)(param_1 + 0x68))
                                       (*(undefined4 *)(lVar12 + lVar41 * 4),
                                        *(undefined4 *)(lVar40 + lVar41 * 4),0xff);
                    *(undefined4 *)(lVar40 + lVar41 * 4) = uVar11;
                    lVar41 = lVar41 + 1;
                  } while ((uint)lVar41 < (uint)puVar28[2]);
                  goto LAB_00107c0b;
                }
              }
              else {
                lVar41 = 0;
                if (puVar28[2] != 0) {
                  do {
                    uVar23 = (**(code **)(param_1 + 0x68))
                                       (*(undefined4 *)(lVar12 + lVar41 * 4),
                                        *(undefined4 *)(lVar40 + lVar41 * 4),0xff);
                    uVar39 = *(uint *)(lVar40 + lVar41 * 4);
                    iVar10 = (int)((uint)*(byte *)(lVar12 + 3 + lVar41 * 4) * iVar36 + 0xff) >> 8;
                    uVar4 = puVar28[2];
                    *(uint *)(lVar40 + lVar41 * 4) =
                         ((uVar23 >> 8 & 0xff00ff) - (uVar39 >> 8 & 0xff00ff)) * iVar10 +
                         (uVar39 & 0xff00ff00) & 0xff00ff00 |
                         (((uVar23 & 0xff00ff) - (uVar39 & 0xff00ff)) * iVar10 >> 8) +
                         (uVar39 & 0xff00ff) & 0xff00ff;
                    lVar41 = lVar41 + 1;
                  } while ((uint)lVar41 < (uint)uVar4);
LAB_00107c0b:
                  puVar35 = *(undefined8 **)(param_2 + 8);
                }
              }
              local_f0 = local_f0 + 1;
              puVar28 = puVar28 + 4;
            } while (local_f0 < *(uint *)((long)puVar35 + 0xc));
          }
        }
        else {
          if (5 < iVar36) goto LAB_00106e63;
          lVar40 = *(long *)(piVar19 + 10);
          puVar28 = (ushort *)*puVar35;
          bVar2 = *(byte *)(piVar19 + 0x12);
          pcVar14 = *(code **)(param_1 + (long)(iVar36 + -2) * 8 + 0x48);
          if (*(int *)((long)puVar35 + 0xc) != 0) {
            uVar39 = 0;
            while( true ) {
              uVar4 = puVar28[1];
              uVar23 = (uint)*puVar28;
              lVar12 = *(long *)param_1 +
                       (ulong)(*(int *)(param_1 + 0x30) * (uint)uVar4 + uVar23) * 4;
              lVar41 = *(long *)(param_2 + 0x10) +
                       ((ulong)(((uint)uVar4 + *(int *)(param_2 + 0x28)) * *(int *)(param_2 + 0x20))
                       + (long)(int)(uVar23 + *(int *)(param_2 + 0x24))) * 4;
              lVar43 = (ulong)((piVar19[0xe] * (uint)uVar4 + uVar23) * (uint)bVar2) + lVar40;
              iVar36 = (int)((uint)(byte)puVar28[3] * (uint)param_5 + 0xff) >> 8;
              if (iVar36 == 0xff) {
                if (puVar28[2] != 0) {
                  lVar27 = 0;
                  do {
                    bVar9 = (*pcVar14)(lVar43);
                    uVar23 = *(uint *)(lVar41 + lVar27 * 4);
                    uVar17 = (uVar23 >> 8 & 0xff00ff) * (bVar9 + 1) & 0xff00ff00 |
                             (uVar23 & 0xff00ff) * (bVar9 + 1) >> 8 & 0xff00ff;
                    uVar23 = *(uint *)(lVar12 + lVar27 * 4);
                    iVar36 = (~uVar17 >> 0x18) + 1;
                    *(uint *)(lVar12 + lVar27 * 4) =
                         ((uVar23 >> 8 & 0xff00ff) * iVar36 & 0xff00ff00 |
                         (uVar23 & 0xff00ff) * iVar36 >> 8 & 0xff00ff) + uVar17;
                    lVar27 = lVar27 + 1;
                    lVar43 = lVar43 + (ulong)bVar2;
                  } while ((uint)lVar27 < (uint)puVar28[2]);
                  puVar35 = *(undefined8 **)(param_2 + 8);
                }
              }
              else {
                lVar27 = 0;
                if (puVar28[2] != 0) {
                  do {
                    bVar9 = (*pcVar14)(lVar43);
                    uVar23 = *(uint *)(lVar41 + lVar27 * 4);
                    iVar10 = ((int)((uint)bVar9 * iVar36 + 0xff) >> 8) + 1;
                    uVar17 = *(uint *)(lVar12 + lVar27 * 4);
                    uVar23 = (uVar23 >> 8 & 0xff00ff) * iVar10 & 0xff00ff00 |
                             iVar10 * (uVar23 & 0xff00ff) >> 8 & 0xff00ff;
                    iVar10 = (~uVar23 >> 0x18) + 1;
                    *(uint *)(lVar12 + lVar27 * 4) =
                         ((uVar17 >> 8 & 0xff00ff) * iVar10 & 0xff00ff00 |
                         (uVar17 & 0xff00ff) * iVar10 >> 8 & 0xff00ff) + uVar23;
                    lVar27 = lVar27 + 1;
                    lVar43 = lVar43 + (ulong)bVar2;
                  } while ((uint)lVar27 < (uint)puVar28[2]);
                  puVar35 = *(undefined8 **)(param_2 + 8);
                }
              }
              uVar39 = uVar39 + 1;
              puVar28 = puVar28 + 4;
              if (*(uint *)((long)puVar35 + 0xc) <= uVar39) break;
              piVar19 = *(int **)(param_1 + 0x70);
            }
          }
        }
        goto LAB_00106e5d;
      }
    }
  }
LAB_00106e63:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_98;
  }
LAB_00109847:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* rasterConvertCS(tvg::RenderSurface*, tvg::ColorSpace) */

undefined8 rasterConvertCS(long *param_1,byte param_2)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  pthread_mutex_t *__mutex;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  
  __mutex = (pthread_mutex_t *)0x0;
  iVar3 = tvg::TaskScheduler::threads();
  if (iVar3 == 0) {
LAB_00109961:
    bVar1 = *(byte *)((long)param_1 + 0x3c);
    if (bVar1 != param_2) {
      if ((bVar1 & 0xfd) == 0) {
        if ((param_2 & 0xfd) == 1) {
          uVar4 = *(uint *)((long)param_1 + 0x34);
          lVar9 = *param_1;
          *(byte *)((long)param_1 + 0x3c) = param_2;
          iVar3 = (int)param_1[7];
          if ((uVar4 & 1) == 0) {
            if (iVar3 != 0) {
              uVar11 = *(uint *)(param_1 + 6);
              uVar7 = (ulong)(uVar4 >> 1);
              puVar8 = (ulong *)(lVar9 + uVar7 * 8);
              iVar12 = 0;
              if (uVar4 >> 1 == 0) {
                do {
                  iVar12 = iVar12 + 1;
                } while (iVar12 != iVar3);
              }
              else {
                iVar12 = 0;
                puVar5 = puVar8 + -uVar7;
                while( true ) {
                  do {
                    uVar2 = *puVar5;
                    puVar6 = puVar5 + 1;
                    *puVar5 = ((uVar2 & 0xff000000ff) << 0x10 | uVar2 & 0xff000000ff00) +
                              (uVar2 & 0xff000000ff000000 | uVar2 >> 0x10 & 0xff000000ff);
                    puVar5 = puVar6;
                  } while (puVar6 != puVar8);
                  iVar12 = iVar12 + 1;
                  puVar8 = puVar6 + (uVar11 >> 1);
                  if (iVar12 == iVar3) break;
                  puVar5 = puVar8 + -uVar7;
                }
              }
            }
          }
          else {
            uVar11 = 0;
            if (iVar3 != 0) {
              while( true ) {
                lVar10 = 0;
                if (uVar4 != 0) {
                  do {
                    uVar4 = *(uint *)(lVar9 + lVar10 * 4);
                    *(uint *)(lVar9 + lVar10 * 4) =
                         (uVar4 >> 0x10 & 0xff | uVar4 & 0xff000000) +
                         (uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10);
                    lVar10 = lVar10 + 1;
                  } while ((uint)lVar10 < *(uint *)((long)param_1 + 0x34));
                }
                uVar11 = uVar11 + 1;
                lVar9 = lVar9 + (ulong)*(uint *)(param_1 + 6) * 4;
                if (*(uint *)(param_1 + 7) <= uVar11) break;
                uVar4 = *(uint *)((long)param_1 + 0x34);
              }
            }
          }
          goto LAB_00109a80;
        }
      }
      else if (((bVar1 & 0xfd) == 1) && ((param_2 & 0xfd) == 0)) goto LAB_00109ad0;
      uVar13 = 0;
      iVar3 = tvg::TaskScheduler::threads();
      goto joined_r0x00109a8d;
    }
  }
  else {
    __mutex = (pthread_mutex_t *)(param_1 + 1);
    iVar3 = pthread_mutex_lock(__mutex);
    if (iVar3 == 0) goto LAB_00109961;
    std::__throw_system_error(iVar3);
LAB_00109ad0:
    uVar4 = *(uint *)((long)param_1 + 0x34);
    lVar9 = *param_1;
    *(byte *)((long)param_1 + 0x3c) = param_2;
    iVar3 = (int)param_1[7];
    if ((uVar4 & 1) == 0) {
      if (iVar3 != 0) {
        uVar11 = *(uint *)(param_1 + 6);
        uVar7 = (ulong)(uVar4 >> 1);
        puVar8 = (ulong *)(lVar9 + uVar7 * 8);
        iVar12 = 0;
        if (uVar4 >> 1 == 0) {
          do {
            iVar12 = iVar12 + 1;
          } while (iVar12 != iVar3);
        }
        else {
          iVar12 = 0;
          puVar5 = puVar8 + -uVar7;
          while( true ) {
            do {
              uVar2 = *puVar5;
              puVar6 = puVar5 + 1;
              *puVar5 = (uVar2 >> 0x10 & 0xff000000ff | uVar2 & 0xff000000ff000000) +
                        (uVar2 & 0xff000000ff00 | (uVar2 & 0xff000000ff) << 0x10);
              puVar5 = puVar6;
            } while (puVar6 != puVar8);
            iVar12 = iVar12 + 1;
            puVar8 = puVar6 + (uVar11 >> 1);
            if (iVar12 == iVar3) break;
            puVar5 = puVar8 + -uVar7;
          }
        }
      }
    }
    else {
      uVar11 = 0;
      if (iVar3 != 0) {
        while( true ) {
          lVar10 = 0;
          if (uVar4 != 0) {
            do {
              uVar4 = *(uint *)(lVar9 + lVar10 * 4);
              *(uint *)(lVar9 + lVar10 * 4) =
                   (uVar4 >> 0x10 & 0xff | uVar4 & 0xff000000) +
                   (uVar4 & 0xff00 | (uVar4 & 0xff) << 0x10);
              lVar10 = lVar10 + 1;
            } while ((uint)lVar10 < *(uint *)((long)param_1 + 0x34));
          }
          uVar11 = uVar11 + 1;
          lVar9 = lVar9 + (ulong)*(uint *)(param_1 + 6) * 4;
          if (*(uint *)(param_1 + 7) <= uVar11) break;
          uVar4 = *(uint *)((long)param_1 + 0x34);
        }
      }
    }
  }
LAB_00109a80:
  uVar13 = 1;
  iVar3 = tvg::TaskScheduler::threads();
joined_r0x00109a8d:
  if (iVar3 != 0) {
    pthread_mutex_unlock(__mutex);
    return uVar13;
  }
  return uVar13;
}



/* rasterXYFlip(unsigned int*, unsigned int*, int, int, int, SwBBox const&, bool) */

void rasterXYFlip(uint *param_1,uint *param_2,int param_3,int param_4,int param_5,SwBBox *param_6,
                 bool param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  
  lVar15 = (long)param_3;
  lVar7 = (*(long *)(param_6 + 8) * lVar15 + *(long *)param_6) * 4;
  lVar4 = (*(long *)param_6 * lVar15 + *(long *)(param_6 + 8)) * 4;
  lVar10 = lVar4;
  if (param_7) {
    lVar10 = lVar7;
    lVar7 = lVar4;
  }
  puVar18 = (undefined4 *)((long)param_1 + lVar7);
  puVar12 = (undefined4 *)((long)param_2 + lVar10);
  if (0 < param_4) {
    iVar11 = 0;
    do {
      iVar1 = iVar11 + 8;
      if (param_4 < iVar11 + 8) {
        iVar1 = param_4;
      }
      iVar2 = 0;
      puVar8 = puVar12;
      puVar13 = puVar18;
      if (0 < param_5) {
        do {
          iVar3 = iVar2 + 8;
          iVar17 = param_5;
          if (iVar3 <= param_5) {
            iVar17 = iVar3;
          }
          iVar17 = iVar17 - iVar2;
          if (0 < iVar1 - iVar11) {
            lVar10 = (ulong)(iVar17 - 1) + 1;
            iVar2 = 0;
            puVar14 = puVar8;
            puVar16 = puVar13;
            do {
              puVar5 = puVar14;
              puVar9 = puVar16;
              if (0 < iVar17) {
                do {
                  puVar6 = puVar5 + 1;
                  *puVar5 = *puVar9;
                  puVar5 = puVar6;
                  puVar9 = puVar9 + lVar15;
                } while (puVar14 + iVar17 != puVar6);
                puVar16 = (undefined4 *)((long)puVar16 + lVar15 * 4 * lVar10);
                puVar14 = puVar14 + lVar10;
              }
              iVar2 = iVar2 + 1;
              puVar16 = puVar16 + (1 - param_3 * iVar17);
              puVar14 = puVar14 + (param_3 - iVar17);
            } while (iVar1 - iVar11 != iVar2);
          }
          puVar8 = puVar8 + 8;
          puVar13 = puVar13 + (param_3 << 3);
          iVar2 = iVar3;
        } while (iVar3 < param_5);
      }
      iVar11 = iVar11 + 8;
      puVar18 = puVar18 + 8;
      puVar12 = puVar12 + (param_3 << 3);
    } while (iVar11 < param_4);
  }
  return;
}



/* rasterShape(SwSurface*, SwShape*, unsigned char, unsigned char, unsigned char, unsigned char)
   [clone .cold] */

void rasterShape(SwSurface *param_1,SwShape *param_2,uchar param_3,uchar param_4,uchar param_5,
                uchar param_6)

{
  FUN_00105cc7();
  return;
}



/* rasterGradientShape(SwSurface*, SwShape*, tvg::Fill const*, unsigned char) [clone .cold] */

void rasterGradientShape(SwSurface *param_1,SwShape *param_2,Fill *param_3,uchar param_4)

{
  FUN_001067fc(param_1,0);
  return;
}


