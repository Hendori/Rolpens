
/* hb_ot_face_t::init0(hb_face_t*) */

void __thiscall hb_ot_face_t::init0(hb_ot_face_t *this,hb_face_t *param_1)

{
  *(hb_face_t **)this = param_1;
  return;
}



/* hb_ot_face_t::fini() */

void __thiscall hb_ot_face_t::fini(hb_ot_face_t *this)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int *__ptr;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 8) = 0;
  lVar6 = *(long *)(this + 0x10);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x10) = 0;
  puVar2 = *(undefined **)(this + 0x18);
  if ((puVar2 != (undefined *)0x0) && (puVar2 != &_hb_NullPool)) {
    hb_blob_destroy(*(undefined8 *)(puVar2 + 0x50));
    free(puVar2);
  }
  *(undefined8 *)(this + 0x18) = 0;
  lVar6 = *(long *)(this + 0x20);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x20) = 0;
  puVar2 = *(undefined **)(this + 0x28);
  if ((puVar2 != &_hb_NullPool) && (puVar2 != (undefined *)0x0)) {
    hb_blob_destroy(*(undefined8 *)(puVar2 + 0x18));
    *(undefined8 *)(puVar2 + 0x18) = 0;
    hb_blob_destroy(*(undefined8 *)(puVar2 + 0x20));
    free(puVar2);
  }
  *(undefined8 *)(this + 0x28) = 0;
  lVar6 = *(long *)(this + 0x30);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x30) = 0;
  puVar3 = *(undefined8 **)(this + 0x38);
  if ((puVar3 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)&_hb_NullPool)) {
    free((void *)puVar3[6]);
    hb_blob_destroy(*puVar3);
    if (*(int *)(puVar3 + 3) != 0) {
      free((void *)puVar3[4]);
    }
    free(puVar3);
  }
  *(undefined8 *)(this + 0x38) = 0;
  puVar2 = *(undefined **)(this + 0x40);
  if ((puVar2 != &_hb_NullPool) && (puVar2 != (undefined *)0x0)) {
    hb_blob_destroy(*(undefined8 *)(puVar2 + 0x10));
    if (*(int *)(puVar2 + 0x18) != 0) {
      free(*(void **)(puVar2 + 0x20));
    }
    free(puVar2);
  }
  *(undefined8 *)(this + 0x40) = 0;
  lVar6 = *(long *)(this + 0x48);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x48) = 0;
  puVar3 = *(undefined8 **)(this + 0x50);
  if ((puVar3 != (undefined8 *)&_hb_NullPool) && (puVar3 != (undefined8 *)0x0)) {
    hb_blob_destroy(*puVar3);
    free(puVar3);
  }
  *(undefined8 *)(this + 0x50) = 0;
  lVar6 = *(long *)(this + 0x58);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x58) = 0;
  puVar2 = *(undefined **)(this + 0x60);
  if ((puVar2 != (undefined *)0x0) && (puVar2 != &_hb_NullPool)) {
    hb_blob_destroy(*(undefined8 *)(puVar2 + 0x18));
    *(undefined8 *)(puVar2 + 0x18) = 0;
    hb_blob_destroy(*(undefined8 *)(puVar2 + 0x20));
    free(puVar2);
  }
  *(undefined8 *)(this + 0x60) = 0;
  lVar6 = *(long *)(this + 0x68);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x68) = 0;
  lVar6 = *(long *)(this + 0x70);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x70) = 0;
  puVar2 = *(undefined **)(this + 0x78);
  if ((puVar2 != &_hb_NullPool) && (puVar2 != (undefined *)0x0)) {
    hb_blob_destroy(*(undefined8 *)(puVar2 + 0x28));
    free(puVar2);
  }
  *(undefined8 *)(this + 0x78) = 0;
  puVar2 = *(undefined **)(this + 0x80);
  if ((puVar2 != &_hb_NullPool) && (puVar2 != (undefined *)0x0)) {
    __ptr = *(int **)(puVar2 + 0x130);
    if (__ptr != (int *)0x0) {
      if (*__ptr != 0) {
        free(*(void **)(__ptr + 2));
      }
      free(__ptr);
    }
    hb_blob_destroy(*(undefined8 *)(puVar2 + 0x30));
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined1 (*) [16])(puVar2 + 8) = (undefined1  [16])0x0;
    if (*(int *)(puVar2 + 0xa0) != 0) {
      free(*(void **)(puVar2 + 0xa8));
    }
    *(undefined8 *)(puVar2 + 0xa0) = 0;
    *(undefined8 *)(puVar2 + 0xa8) = 0;
    if (*(int *)(puVar2 + 0x108) != 0) {
      uVar1 = *(uint *)(puVar2 + 0x10c);
      pvVar5 = *(void **)(puVar2 + 0x110);
      lVar6 = (long)pvVar5 + (ulong)uVar1 * 0x28 + -0x28;
      if (uVar1 != 0) {
        lVar4 = ((ulong)(uVar1 - 1) + 1) * -0x28 + lVar6;
        do {
          while (lVar7 = lVar6 + -0x28, *(int *)(lVar6 + 8) == 0) {
            lVar6 = lVar7;
            if (lVar4 == lVar7) goto LAB_00100bcf;
          }
          free(*(void **)(lVar6 + 0x10));
          lVar6 = lVar7;
        } while (lVar4 != lVar7);
LAB_00100bcf:
        pvVar5 = *(void **)(puVar2 + 0x110);
      }
      free(pvVar5);
    }
    *(undefined8 *)(puVar2 + 0x108) = 0;
    *(undefined8 *)(puVar2 + 0x110) = 0;
    if (*(int *)(puVar2 + 0x118) != 0) {
      uVar1 = *(uint *)(puVar2 + 0x11c);
      pvVar5 = *(void **)(puVar2 + 0x120);
      lVar6 = (long)pvVar5 + (ulong)uVar1 * 0x28 + -0x28;
      if (uVar1 != 0) {
        lVar4 = ((ulong)(uVar1 - 1) + 1) * -0x28 + lVar6;
        do {
          while (lVar7 = lVar6 + -0x28, *(int *)(lVar6 + 8) == 0) {
            lVar6 = lVar7;
            if (lVar4 == lVar7) goto LAB_00100b5f;
          }
          free(*(void **)(lVar6 + 0x10));
          lVar6 = lVar7;
        } while (lVar4 != lVar7);
LAB_00100b5f:
        pvVar5 = *(void **)(puVar2 + 0x120);
      }
      free(pvVar5);
    }
    *(undefined8 *)(puVar2 + 0x118) = 0;
    *(undefined8 *)(puVar2 + 0x120) = 0;
    hb_blob_destroy(*(undefined8 *)(puVar2 + 0x40));
    *(undefined8 *)(puVar2 + 0x40) = 0;
    if (*(int *)(puVar2 + 0x118) != 0) {
      uVar1 = *(uint *)(puVar2 + 0x11c);
      pvVar5 = *(void **)(puVar2 + 0x120);
      lVar6 = (long)pvVar5 + (ulong)uVar1 * 0x28 + -0x28;
      if (uVar1 != 0) {
        lVar4 = ((ulong)(uVar1 - 1) + 1) * -0x28 + lVar6;
        do {
          while (lVar7 = lVar6 + -0x28, *(int *)(lVar6 + 8) == 0) {
            lVar6 = lVar7;
            if (lVar4 == lVar7) goto LAB_00100af0;
          }
          free(*(void **)(lVar6 + 0x10));
          lVar6 = lVar7;
        } while (lVar4 != lVar7);
LAB_00100af0:
        pvVar5 = *(void **)(puVar2 + 0x120);
      }
      free(pvVar5);
    }
    if (*(int *)(puVar2 + 0x108) != 0) {
      uVar1 = *(uint *)(puVar2 + 0x10c);
      pvVar5 = *(void **)(puVar2 + 0x110);
      lVar6 = (long)pvVar5 + (ulong)uVar1 * 0x28 + -0x28;
      if (uVar1 != 0) {
        lVar4 = ((ulong)(uVar1 - 1) + 1) * -0x28 + lVar6;
        do {
          while (lVar7 = lVar6 + -0x28, *(int *)(lVar6 + 8) == 0) {
            lVar6 = lVar7;
            if (lVar4 == lVar7) goto LAB_00100a80;
          }
          free(*(void **)(lVar6 + 0x10));
          lVar6 = lVar7;
        } while (lVar4 != lVar7);
LAB_00100a80:
        pvVar5 = *(void **)(puVar2 + 0x110);
      }
      free(pvVar5);
    }
    if (*(int *)(puVar2 + 0xa0) != 0) {
      free(*(void **)(puVar2 + 0xa8));
    }
    if (*(long *)(puVar2 + 0x30) != 0) {
      hb_blob_destroy();
    }
    free(puVar2);
  }
  *(undefined8 *)(this + 0x80) = 0;
  puVar2 = *(undefined **)(this + 0x88);
  if ((puVar2 != &_hb_NullPool) && (puVar2 != (undefined *)0x0)) {
    hb_blob_destroy(*(undefined8 *)(puVar2 + 0x30));
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined1 (*) [16])(puVar2 + 8) = (undefined1  [16])0x0;
    if (*(int *)(puVar2 + 0x50) != 0) {
      free(*(void **)(puVar2 + 0x58));
    }
    *(undefined8 *)(puVar2 + 0x50) = 0;
    *(undefined8 *)(puVar2 + 0x58) = 0;
    if (*(int *)(puVar2 + 0xa0) != 0) {
      uVar1 = *(uint *)(puVar2 + 0xa4);
      pvVar5 = *(void **)(puVar2 + 0xa8);
      lVar6 = (long)pvVar5 + (ulong)uVar1 * 0x28 + -0x28;
      if (uVar1 != 0) {
        lVar4 = ((ulong)(uVar1 - 1) + 1) * -0x28 + lVar6;
        do {
          while (lVar7 = lVar6 + -0x28, *(int *)(lVar6 + 8) == 0) {
            lVar6 = lVar7;
            if (lVar4 == lVar7) goto LAB_00100def;
          }
          free(*(void **)(lVar6 + 0x10));
          lVar6 = lVar7;
        } while (lVar4 != lVar7);
LAB_00100def:
        pvVar5 = *(void **)(puVar2 + 0xa8);
      }
      free(pvVar5);
    }
    *(undefined8 *)(puVar2 + 0xa0) = 0;
    *(undefined8 *)(puVar2 + 0xa8) = 0;
    if (*(int *)(puVar2 + 0xb0) != 0) {
      uVar1 = *(uint *)(puVar2 + 0xb4);
      pvVar5 = *(void **)(puVar2 + 0xb8);
      lVar6 = (long)pvVar5 + (ulong)uVar1 * 0x30 + -0x30;
      if (uVar1 != 0) {
        lVar4 = ((ulong)(uVar1 - 1) + 1) * -0x30 + lVar6;
        do {
          while (lVar7 = lVar6 + -0x30, *(int *)(lVar6 + 8) == 0) {
            lVar6 = lVar7;
            if (lVar7 == lVar4) goto LAB_00100d7f;
          }
          free(*(void **)(lVar6 + 0x10));
          lVar6 = lVar7;
        } while (lVar7 != lVar4);
LAB_00100d7f:
        pvVar5 = *(void **)(puVar2 + 0xb8);
      }
      free(pvVar5);
    }
    *(undefined8 *)(puVar2 + 0xb0) = 0;
    *(undefined8 *)(puVar2 + 0xb8) = 0;
    hb_blob_destroy(*(undefined8 *)(puVar2 + 0x40));
    *(undefined8 *)(puVar2 + 0x40) = 0;
    if (*(int *)(puVar2 + 0xb0) != 0) {
      uVar1 = *(uint *)(puVar2 + 0xb4);
      pvVar5 = *(void **)(puVar2 + 0xb8);
      lVar6 = (long)pvVar5 + (ulong)uVar1 * 0x30 + -0x30;
      if (uVar1 != 0) {
        lVar4 = ((ulong)(uVar1 - 1) + 1) * -0x30 + lVar6;
        do {
          while (lVar7 = lVar6 + -0x30, *(int *)(lVar6 + 8) == 0) {
            lVar6 = lVar7;
            if (lVar7 == lVar4) goto LAB_00100cff;
          }
          free(*(void **)(lVar6 + 0x10));
          lVar6 = lVar7;
        } while (lVar7 != lVar4);
LAB_00100cff:
        pvVar5 = *(void **)(puVar2 + 0xb8);
      }
      free(pvVar5);
    }
    if (*(int *)(puVar2 + 0xa0) != 0) {
      uVar1 = *(uint *)(puVar2 + 0xa4);
      pvVar5 = *(void **)(puVar2 + 0xa8);
      lVar6 = (long)pvVar5 + (ulong)uVar1 * 0x28 + -0x28;
      if (uVar1 != 0) {
        lVar4 = ((ulong)(uVar1 - 1) + 1) * -0x28 + lVar6;
        do {
          while (lVar7 = lVar6 + -0x28, *(int *)(lVar6 + 8) == 0) {
            lVar6 = lVar7;
            if (lVar7 == lVar4) goto LAB_00100c87;
          }
          free(*(void **)(lVar6 + 0x10));
          lVar6 = lVar7;
        } while (lVar7 != lVar4);
LAB_00100c87:
        pvVar5 = *(void **)(puVar2 + 0xa8);
      }
      free(pvVar5);
    }
    if (*(int *)(puVar2 + 0x50) != 0) {
      free(*(void **)(puVar2 + 0x58));
    }
    if (*(long *)(puVar2 + 0x30) != 0) {
      hb_blob_destroy();
    }
    free(puVar2);
  }
  *(undefined8 *)(this + 0x88) = 0;
  lVar6 = *(long *)(this + 0x90);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x90) = 0;
  lVar6 = *(long *)(this + 0x98);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x98) = 0;
  lVar6 = *(long *)(this + 0xa0);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0xa0) = 0;
  puVar3 = *(undefined8 **)(this + 0xa8);
  if ((puVar3 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)&_hb_NullPool)) {
    hb_blob_destroy(*puVar3);
    if (*(int *)(puVar3 + 2) != 0) {
      free((void *)puVar3[3]);
    }
    free(puVar3);
  }
  *(undefined8 *)(this + 0xa8) = 0;
  lVar6 = *(long *)(this + 0xb0);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0xb0) = 0;
  puVar3 = *(undefined8 **)(this + 0xb8);
  if ((puVar3 != (undefined8 *)&_hb_NullPool) && (puVar3 != (undefined8 *)0x0)) {
    hb_blob_destroy(*puVar3);
    if (*(int *)(puVar3 + 1) != 0) {
      free((void *)puVar3[2]);
    }
    free(puVar3);
  }
  *(undefined8 *)(this + 0xb8) = 0;
  puVar3 = *(undefined8 **)(this + 0xc0);
  if ((puVar3 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)&_hb_NullPool)) {
    hb_blob_destroy(*puVar3);
    if (*(int *)(puVar3 + 1) != 0) {
      free((void *)puVar3[2]);
    }
    free(puVar3);
  }
  *(undefined8 *)(this + 0xc0) = 0;
  puVar3 = *(undefined8 **)(this + 200);
  if ((puVar3 != (undefined8 *)&_hb_NullPool) && (puVar3 != (undefined8 *)0x0)) {
    lVar6 = 0;
    if (*(int *)(puVar3 + 1) != 0) {
      do {
        lVar4 = lVar6 * 8;
        lVar6 = lVar6 + 1;
        free(*(void **)(puVar3[2] + lVar4));
      } while ((uint)lVar6 < *(uint *)(puVar3 + 1));
    }
    free((void *)puVar3[2]);
    hb_blob_destroy(*puVar3);
    free(puVar3);
  }
  *(undefined8 *)(this + 200) = 0;
  puVar3 = *(undefined8 **)(this + 0xd0);
  if ((puVar3 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)&_hb_NullPool)) {
    lVar6 = 0;
    if (*(int *)(puVar3 + 1) != 0) {
      do {
        lVar4 = lVar6 * 8;
        lVar6 = lVar6 + 1;
        free(*(void **)(puVar3[2] + lVar4));
      } while ((uint)lVar6 < *(uint *)(puVar3 + 1));
    }
    free((void *)puVar3[2]);
    hb_blob_destroy(*puVar3);
    free(puVar3);
  }
  *(undefined8 *)(this + 0xd0) = 0;
  lVar6 = *(long *)(this + 0xd8);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0xd8) = 0;
  puVar3 = *(undefined8 **)(this + 0xe0);
  if ((puVar3 != (undefined8 *)&_hb_NullPool) && (puVar3 != (undefined8 *)0x0)) {
    lVar6 = 0;
    if (*(int *)(puVar3 + 1) != 0) {
      do {
        lVar4 = lVar6 * 8;
        lVar6 = lVar6 + 1;
        free(*(void **)(puVar3[2] + lVar4));
      } while ((uint)lVar6 < *(uint *)(puVar3 + 1));
    }
    free((void *)puVar3[2]);
    hb_blob_destroy(*puVar3);
    free(puVar3);
  }
  *(undefined8 *)(this + 0xe0) = 0;
  puVar3 = *(undefined8 **)(this + 0xe8);
  if ((puVar3 != (undefined8 *)&_hb_NullPool) && (puVar3 != (undefined8 *)0x0)) {
    lVar6 = 0;
    if (*(int *)(puVar3 + 1) != 0) {
      do {
        lVar4 = lVar6 * 8;
        lVar6 = lVar6 + 1;
        free(*(void **)(puVar3[2] + lVar4));
      } while ((uint)lVar6 < *(uint *)(puVar3 + 1));
    }
    free((void *)puVar3[2]);
    hb_blob_destroy(*puVar3);
    free(puVar3);
  }
  *(undefined8 *)(this + 0xe8) = 0;
  puVar3 = *(undefined8 **)(this + 0xf0);
  if ((puVar3 != (undefined8 *)&_hb_NullPool) && (puVar3 != (undefined8 *)0x0)) {
    hb_blob_destroy(*puVar3);
    if (*(int *)(puVar3 + 1) != 0) {
      free((void *)puVar3[2]);
    }
    free(puVar3);
  }
  *(undefined8 *)(this + 0xf0) = 0;
  lVar6 = *(long *)(this + 0xf8);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0xf8) = 0;
  lVar6 = *(long *)(this + 0x100);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x100) = 0;
  lVar6 = *(long *)(this + 0x108);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x108) = 0;
  lVar6 = *(long *)(this + 0x110);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x110) = 0;
  lVar6 = *(long *)(this + 0x118);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x118) = 0;
  lVar6 = *(long *)(this + 0x120);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x120) = 0;
  puVar3 = *(undefined8 **)(this + 0x128);
  if ((puVar3 != (undefined8 *)&_hb_NullPool) && (puVar3 != (undefined8 *)0x0)) {
    hb_blob_destroy(*puVar3);
    *puVar3 = 0;
    hb_blob_destroy(puVar3[1]);
    free(puVar3);
  }
  *(undefined8 *)(this + 0x128) = 0;
  puVar3 = *(undefined8 **)(this + 0x130);
  if ((puVar3 != (undefined8 *)&_hb_NullPool) && (puVar3 != (undefined8 *)0x0)) {
    hb_blob_destroy(*puVar3);
    free(puVar3);
  }
  *(undefined8 *)(this + 0x130) = 0;
  puVar3 = *(undefined8 **)(this + 0x138);
  if ((puVar3 != (undefined8 *)&_hb_NullPool) && (puVar3 != (undefined8 *)0x0)) {
    hb_blob_destroy(*puVar3);
    free(puVar3);
  }
  *(undefined8 *)(this + 0x138) = 0;
  lVar6 = *(long *)(this + 0x140);
  if ((lVar6 != 0) && (lVar4 = hb_blob_get_empty(), lVar6 != lVar4)) {
    hb_blob_destroy(lVar6);
  }
  *(undefined8 *)(this + 0x140) = 0;
  return;
}


