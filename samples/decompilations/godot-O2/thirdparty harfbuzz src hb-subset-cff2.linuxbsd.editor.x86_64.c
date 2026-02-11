
/* fasthash64(void const*, unsigned long, unsigned long) [clone .constprop.0] */

ulong fasthash64(void *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  puVar3 = (ulong *)((param_2 & 0xfffffffffffffff8) + (long)param_1);
  uVar1 = param_2 * -0x77fcaa0de192e69b ^ 0xf437ffe6;
  if (((ulong)param_1 & 7) == 0) {
    if ((ulong *)param_1 != puVar3) {
      do {
                    /* WARNING: Load size is inaccurate */
        uVar2 = *param_1;
        param_1 = (void *)((long)param_1 + 8);
        uVar2 = (uVar2 >> 0x17 ^ uVar2) * 0x2127599bf4325c37;
        uVar1 = (uVar2 ^ uVar2 >> 0x2f ^ uVar1) * -0x77fcaa0de192e69b;
      } while (puVar3 != (ulong *)param_1);
    }
  }
  else if ((ulong *)param_1 != puVar3) {
    do {
                    /* WARNING: Load size is inaccurate */
      uVar2 = *param_1;
      param_1 = (void *)((long)param_1 + 8);
      uVar2 = (uVar2 >> 0x17 ^ uVar2) * 0x2127599bf4325c37;
      uVar1 = (uVar2 ^ uVar2 >> 0x2f ^ uVar1) * -0x77fcaa0de192e69b;
    } while (puVar3 != (ulong *)param_1);
  }
  switch((uint)param_2 & 7) {
  case 0:
    goto switchD_00100080_caseD_0;
  case 1:
    uVar2 = 0;
    goto LAB_001000c1;
  case 2:
    uVar2 = 0;
    goto LAB_001000b6;
  case 3:
    uVar2 = 0;
    goto LAB_001000ab;
  case 4:
    uVar2 = 0;
    goto LAB_001000a0;
  case 5:
    uVar2 = 0;
    goto LAB_00100095;
  case 6:
    uVar2 = 0;
    break;
  case 7:
    uVar2 = (ulong)*(byte *)((long)puVar3 + 6) << 0x30;
  }
  uVar2 = (ulong)*(byte *)((long)puVar3 + 5) << 0x28 ^ uVar2;
LAB_00100095:
  uVar2 = (ulong)*(byte *)((long)puVar3 + 4) << 0x20 ^ uVar2;
LAB_001000a0:
  uVar2 = (ulong)*(byte *)((long)puVar3 + 3) << 0x18 ^ uVar2;
LAB_001000ab:
  uVar2 = (ulong)*(byte *)((long)puVar3 + 2) << 0x10 ^ uVar2;
LAB_001000b6:
  uVar2 = (ulong)*(byte *)((long)puVar3 + 1) << 8 ^ uVar2;
LAB_001000c1:
  uVar2 = (uVar2 >> 0x17 ^ (byte)*puVar3 ^ uVar2) * 0x2127599bf4325c37;
  uVar1 = (uVar2 ^ uVar1 ^ uVar2 >> 0x2f) * -0x77fcaa0de192e69b;
switchD_00100080_caseD_0:
  uVar1 = (uVar1 >> 0x17 ^ uVar1) * 0x2127599bf4325c37;
  return uVar1 >> 0x2f ^ uVar1;
}



/* hb_memset(void*, int, unsigned int) [clone .constprop.0] [clone .isra.0] */

void hb_memset(void *param_1,int param_2,uint param_3)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulong)(uint)param_2);
    return;
  }
  return;
}



/* void hb_object_fini<hb_hashmap_t<unsigned int, unsigned int, true> >(hb_hashmap_t<unsigned int,
   unsigned int, true>*) */

void hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(hb_hashmap_t *param_1)

{
  long lVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  code *pcVar3;
  undefined8 uVar4;
  
  *(undefined4 *)param_1 = 0xffff2153;
  __mutex = *(pthread_mutex_t **)(param_1 + 8);
  if (__mutex == (pthread_mutex_t *)0x0) {
    return;
  }
  if (*(int *)((long)__mutex + 0x2c) != 0) {
    do {
      pthread_mutex_lock(__mutex);
      iVar2 = *(int *)((long)__mutex + 0x2c);
      while( true ) {
        if (iVar2 == 0) {
          if (__mutex[1].__data.__lock != 0) {
            free(*(void **)((long)__mutex + 0x30));
          }
          __mutex[1].__align = 0;
          *(undefined8 *)((long)__mutex + 0x30) = 0;
          pthread_mutex_unlock(__mutex);
          goto LAB_00100293;
        }
        lVar1 = *(long *)((long)__mutex + 0x30) + (ulong)(iVar2 - 1U) * 0x18;
        pcVar3 = *(code **)(lVar1 + 0x10);
        uVar4 = *(undefined8 *)(lVar1 + 8);
        *(uint *)((long)__mutex + 0x2c) = iVar2 - 1U;
        pthread_mutex_unlock(__mutex);
        if (pcVar3 == (code *)0x0) break;
        (*pcVar3)(uVar4);
        pthread_mutex_lock(__mutex);
        iVar2 = *(int *)((long)__mutex + 0x2c);
      }
    } while( true );
  }
  if (__mutex[1].__data.__lock != 0) {
    free(*(void **)((long)__mutex + 0x30));
  }
  __mutex[1].__align = 0;
  *(undefined8 *)((long)__mutex + 0x30) = 0;
LAB_00100293:
  pthread_mutex_destroy(__mutex);
  free(__mutex);
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* bool OT::CFFIndex<OT::IntType<unsigned int, 4u>
   >::serialize_header<hb_array_t<hb_vector_t<unsigned char, false> const>,
   (void*)0>(hb_serialize_context_t*, hb_array_t<hb_vector_t<unsigned char, false> const>, unsigned
   int, unsigned int) [clone .isra.0] */

bool OT::CFFIndex<OT::IntType<unsigned_int,4u>>::
     serialize_header<hb_array_t<hb_vector_t<unsigned_char,false>const>,(void*)0>
               (uint *param_1,long param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  uint *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  size_t __n;
  undefined1 *puVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar10 = (ulong)param_4;
  uVar9 = param_5 + 1;
  if (uVar9 != 0) {
    iVar6 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    uVar9 = iVar6 + 8U >> 3;
    if (param_6 < uVar9) {
      param_6 = uVar9;
    }
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    return false;
  }
  pvVar8 = *(void **)(param_2 + 8);
  puVar1 = param_1 + 1;
  uVar12 = (long)puVar1 - (long)pvVar8;
  if ((uVar12 < 0x80000000) && (puVar1 <= *(uint **)(param_2 + 0x10))) {
    if ((int)uVar12 != 0) {
      memset(pvVar8,0,uVar12);
      pvVar8 = *(void **)(param_2 + 8);
      puVar1 = (uint *)((long)pvVar8 + uVar12);
    }
    *(uint **)(param_2 + 8) = puVar1;
    if (pvVar8 == (void *)0x0) {
      return false;
    }
    *param_1 = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
               param_4 << 0x18;
    if (param_4 == 0) {
      return true;
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      return false;
    }
    pvVar8 = *(void **)(param_2 + 8);
    puVar3 = (undefined1 *)((long)param_1 + 5);
    __n = (long)puVar3 - (long)pvVar8;
    if ((__n < 0x80000000) && (puVar3 <= *(undefined1 **)(param_2 + 0x10))) {
      puVar7 = puVar3;
      if ((int)__n != 0) {
        memset(pvVar8,0,__n);
        pvVar8 = *(void **)(param_2 + 8);
        puVar7 = (undefined1 *)(__n + (long)pvVar8);
      }
      *(undefined1 **)(param_2 + 8) = puVar7;
      if (pvVar8 == (void *)0x0) {
        return false;
      }
      uVar9 = *param_1;
      *(char *)(param_1 + 1) = (char)param_6;
      uVar12 = (ulong)(((uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                        uVar9 << 0x18) + 1) * param_6);
      if (*(int *)(param_2 + 0x2c) != 0) {
        return false;
      }
      if ((uVar12 < 0x80000000) && ((long)uVar12 <= *(long *)(param_2 + 0x10) - (long)puVar7)) {
        *(undefined1 **)(param_2 + 8) = puVar7 + uVar12;
        if (param_6 == 3) {
          iVar6 = 1;
          lVar4 = param_3;
          puVar7 = puVar3;
          do {
            puVar7[1] = (char)((uint)iVar6 >> 8);
            lVar2 = lVar4 + 0x10;
            puVar7[2] = (char)iVar6;
            *puVar7 = (char)((uint)iVar6 >> 0x10);
            iVar6 = iVar6 + *(int *)(lVar4 + 4);
            lVar4 = lVar2;
            puVar7 = puVar7 + 3;
          } while (lVar2 != param_3 + uVar10 * 0x10);
          puVar3[((lVar2 - param_3) - 0x10U >> 4) * 3 + 3] = (char)((uint)iVar6 >> 0x10);
          *(ushort *)(puVar3 + ((lVar2 - param_3) - 0x10U >> 4) * 3 + 3 + 1) =
               (ushort)iVar6 << 8 | (ushort)iVar6 >> 8;
          return true;
        }
        if (3 < param_6) {
          if (param_6 != 4) {
            return true;
          }
          *(undefined4 *)((long)param_1 + 5) = 0x1000000;
          lVar4 = param_3 + uVar10 * 0x10;
          uVar9 = *(int *)(param_3 + 4) + 1;
          if (lVar4 != param_3 + 0x10) {
            lVar2 = 0;
            do {
              *(uint *)((long)param_1 + lVar2 + 9) =
                   uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
              uVar9 = uVar9 + *(int *)(param_3 + 0x14 + lVar2 * 4);
              lVar2 = lVar2 + 4;
            } while (((lVar4 - param_3) - 0x20U >> 4) * 4 + 4 != lVar2);
          }
          *(uint *)((long)param_1 + ((lVar4 - param_3) - 0x10U >> 4) * 4 + 9) =
               uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          return true;
        }
        if (param_6 == 1) {
          lVar4 = param_3 + uVar10 * 0x10;
          iVar6 = 1;
          lVar2 = param_3;
          do {
            *puVar3 = (char)iVar6;
            lVar11 = lVar2 + 0x10;
            puVar3 = puVar3 + 1;
            iVar6 = iVar6 + *(int *)(lVar2 + 4);
            lVar2 = lVar11;
          } while (lVar4 != lVar11);
          *(char *)((long)param_1 + ((lVar4 - param_3) - 0x10U >> 4) + 6) = (char)iVar6;
          return true;
        }
        if (param_6 != 2) {
          return true;
        }
        *(undefined2 *)((long)param_1 + 5) = 0x100;
        lVar4 = param_3 + uVar10 * 0x10;
        iVar6 = *(int *)(param_3 + 4) + 1;
        uVar5 = (ushort)iVar6;
        if (lVar4 != param_3 + 0x10) {
          lVar2 = 0;
          do {
            *(ushort *)((long)param_1 + lVar2 + 7) = (ushort)iVar6 << 8 | (ushort)iVar6 >> 8;
            iVar6 = iVar6 + *(int *)(param_3 + 0x14 + lVar2 * 8);
            uVar5 = (ushort)iVar6;
            lVar2 = lVar2 + 2;
          } while (lVar2 != ((lVar4 - param_3) - 0x20U >> 4) * 2 + 2);
        }
        *(ushort *)((long)param_1 + ((lVar4 - param_3) - 0x10U >> 4) * 2 + 7) =
             uVar5 << 8 | uVar5 >> 8;
        return true;
      }
    }
  }
  *(undefined4 *)(param_2 + 0x2c) = 4;
  return false;
}



/* bool OT::CFFIndex<OT::IntType<unsigned int, 4u> >::serialize<hb_vector_t<hb_vector_t<unsigned
   char, false>, false>, (void*)0>(hb_serialize_context_t*, hb_vector_t<hb_vector_t<unsigned char,
   false>, false> const&, unsigned int const*, unsigned int) [clone .isra.0] */

bool __thiscall
OT::CFFIndex<OT::IntType<unsigned_int,4u>>::
serialize<hb_vector_t<hb_vector_t<unsigned_char,false>,false>,(void*)0>
          (CFFIndex<OT::IntType<unsigned_int,4u>> *this,hb_serialize_context_t *param_1,
          hb_vector_t *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  void *pvVar4;
  uint *puVar5;
  undefined1 *__dest;
  ulong uVar6;
  undefined4 in_register_00000084;
  ulong uVar7;
  
  uVar7 = (ulong)param_2 & 0xffffffff;
  if ((uint *)CONCAT44(in_register_00000084,param_4) == (uint *)0x0) {
    uVar6 = 0;
    if ((int)param_2 != 0) {
      puVar5 = param_3;
      do {
        uVar6 = (ulong)((int)uVar6 + puVar5[1]);
        puVar5 = puVar5 + 4;
      } while (param_3 + uVar7 * 4 != puVar5);
    }
  }
  else {
    uVar6 = (ulong)*(uint *)CONCAT44(in_register_00000084,param_4);
  }
  bVar3 = serialize_header<hb_array_t<hb_vector_t<unsigned_char,false>const>,(void*)0>
                    (this,param_1,param_3,uVar7,uVar6);
  if ((bVar3) && (*(int *)(param_1 + 0x2c) == 0)) {
    if ((uVar6 < 0x80000000) &&
       (__dest = *(undefined1 **)(param_1 + 8),
       (long)uVar6 <= *(long *)(param_1 + 0x10) - (long)__dest)) {
      *(undefined1 **)(param_1 + 8) = __dest + uVar6;
      if (__dest != (undefined1 *)0x0) {
        puVar5 = param_3 + uVar7 * 4;
        if (puVar5 != param_3) {
          do {
            while( true ) {
              uVar2 = param_3[1];
              if (uVar2 != 0) break;
LAB_001006cb:
              param_3 = param_3 + 4;
              if (puVar5 == param_3) {
                return bVar3;
              }
            }
            puVar1 = param_3 + 2;
            if (uVar2 != 1) {
              pvVar4 = memcpy(__dest,*(undefined1 **)puVar1,(ulong)uVar2);
              __dest = (undefined1 *)((long)pvVar4 + (ulong)uVar2);
              goto LAB_001006cb;
            }
            param_3 = param_3 + 4;
            *__dest = **(undefined1 **)puVar1;
            __dest = __dest + 1;
          } while (puVar5 != param_3);
        }
        return bVar3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 4;
    }
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_inc_bimap_t::add(unsigned int) [clone .isra.0] */

void __thiscall hb_inc_bimap_t::add(hb_inc_bimap_t *this,uint param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  lVar10 = *(long *)(this + 0x28);
  uVar11 = *(uint *)(this + 0x20);
  puVar8 = (uint *)&minus_1;
  if (lVar10 == 0) {
LAB_001007d3:
    uVar13 = *puVar8;
    if (*puVar8 != 0xffffffff) {
      return;
    }
  }
  else {
    uVar9 = (ulong)(param_1 * -0x61c8864f & 0x3fffffff) % (ulong)uVar11;
    puVar5 = (uint *)(lVar10 + uVar9 * 0xc);
    bVar1 = (byte)puVar5[1];
    if ((bVar1 & 2) == 0) goto LAB_001007d3;
    iVar12 = 0;
    do {
      if (*puVar5 == param_1) {
        puVar8 = (uint *)&minus_1;
        if ((bVar1 & 1) != 0) {
          puVar8 = puVar5 + 2;
        }
        goto LAB_001007d3;
      }
      iVar12 = iVar12 + 1;
      uVar9 = (ulong)((int)uVar9 + iVar12 & *(uint *)(this + 0x1c));
      puVar5 = (uint *)(lVar10 + uVar9 * 0xc);
      bVar1 = (byte)puVar5[1];
    } while ((bVar1 & 2) != 0);
    uVar13 = _minus_1;
    if (_minus_1 != 0xffffffff) {
      return;
    }
  }
  uVar3 = *(uint *)(this + 0x34);
  if (this[0x10] == (hb_inc_bimap_t)0x0) goto LAB_001008da;
  uVar7 = *(uint *)(this + 0x18);
  if ((uVar7 >> 1) + uVar7 < *(uint *)(this + 0x1c)) {
LAB_0010081e:
    iVar12 = *(int *)(this + 0x14);
    uVar9 = (ulong)(param_1 * -0x61c8864f & 0x3fffffff) % (ulong)uVar11;
    lVar6 = uVar9 * 0xc;
    puVar8 = (uint *)(lVar10 + lVar6);
    bVar1 = (byte)puVar8[1];
    if ((bVar1 & 2) == 0) {
      *puVar8 = param_1;
      puVar8[2] = uVar3;
      puVar8[1] = param_1 * 0x78dde6c4 + 3;
      *(uint *)(this + 0x18) = uVar7 + 1;
      *(int *)(this + 0x14) = iVar12 + 1;
    }
    else {
      uVar11 = 0;
      do {
        if (*puVar8 == param_1) {
          if (uVar13 == 0xffffffff) goto LAB_0010089e;
          goto LAB_00100893;
        }
        if (((bVar1 & 1) == 0) && (uVar13 == 0xffffffff)) {
          uVar13 = (uint)uVar9;
        }
        uVar11 = uVar11 + 1;
        uVar9 = (ulong)((uint)uVar9 + uVar11 & *(uint *)(this + 0x1c));
        lVar6 = uVar9 * 0xc;
        puVar8 = (uint *)(lVar10 + lVar6);
        bVar1 = (byte)puVar8[1];
      } while ((bVar1 & 2) != 0);
      if (uVar13 == 0xffffffff) {
LAB_00100906:
        uVar7 = uVar7 + 1;
      }
      else {
LAB_00100893:
        lVar6 = (ulong)uVar13 * 0xc;
LAB_0010089e:
        puVar8 = (uint *)(lVar10 + lVar6);
        if (((byte)puVar8[1] & 2) == 0) goto LAB_00100906;
        iVar12 = iVar12 - ((byte)puVar8[1] & 1);
      }
      uVar2 = *(ushort *)(this + 0x12);
      *puVar8 = param_1;
      puVar8[2] = uVar3;
      puVar8[1] = param_1 * 0x78dde6c4 + 3;
      *(uint *)(this + 0x18) = uVar7;
      *(int *)(this + 0x14) = iVar12 + 1;
      if ((uVar2 < uVar11) && (*(uint *)(this + 0x1c) < uVar7 << 3)) {
        hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                  ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)this,*(uint *)(this + 0x1c) - 8);
      }
    }
  }
  else {
    cVar4 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                      ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)this,0);
    if (cVar4 != '\0') {
      lVar10 = *(long *)(this + 0x28);
      uVar11 = *(uint *)(this + 0x20);
      uVar7 = *(uint *)(this + 0x18);
      goto LAB_0010081e;
    }
  }
  uVar3 = *(uint *)(this + 0x34);
LAB_001008da:
  if (*(int *)(this + 0x30) <= (int)uVar3) {
    cVar4 = hb_vector_t<unsigned_int,false>::alloc
                      ((hb_vector_t<unsigned_int,false> *)(this + 0x30),uVar3 + 1,false);
    if (cVar4 == '\0') {
      __hb_CrapPool = __hb_NullPool;
      return;
    }
    uVar3 = *(uint *)(this + 0x34);
  }
  *(uint *)(this + 0x34) = uVar3 + 1;
  *(uint *)(*(long *)(this + 0x38) + (ulong)uVar3 * 4) = param_1;
  return;
}



/* CFF::str_encoder_t::encode_byte(unsigned char) [clone .isra.0] */

void __thiscall CFF::str_encoder_t::encode_byte(str_encoder_t *this,uchar param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *(uint *)(this + 4);
  if ((int)uVar1 < *(int *)this) {
    *(uint *)(this + 4) = uVar1 + 1;
    *(uchar *)(*(long *)(this + 8) + (ulong)uVar1) = param_1;
  }
  else {
    cVar2 = hb_vector_t<unsigned_char,false>::alloc
                      ((hb_vector_t<unsigned_char,false> *)this,uVar1 + 1,false);
    if (cVar2 == '\0') {
      _hb_CrapPool = _hb_NullPool;
    }
    else {
      uVar1 = *(uint *)(this + 4);
      *(uint *)(this + 4) = uVar1 + 1;
      *(uchar *)(*(long *)(this + 8) + (ulong)uVar1) = param_1;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::cff2::accelerator_subset_t::serialize(hb_serialize_context_t*, OT::cff2_subset_plan&,
   hb_array_t<int>) const */

bool OT::cff2::accelerator_subset_t::serialize
               (long param_1,hb_serialize_context_t *param_2,long param_3,undefined8 param_4,
               undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long *plVar13;
  long lVar14;
  void *pvVar15;
  uint *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  uint *puVar19;
  int *piVar20;
  ulong uVar21;
  ulong uVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  undefined1 *puVar28;
  uint uVar29;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  undefined *puVar30;
  FDSelect *pFVar31;
  uint *puVar32;
  size_t __n;
  uint uVar33;
  int iVar34;
  int *piVar35;
  int *piVar36;
  long lVar37;
  CFFIndex<OT::IntType<unsigned_int,4u>> *this;
  ulong uVar38;
  undefined1 *puVar39;
  uint *puVar40;
  long lVar41;
  long in_FS_OFFSET;
  byte bVar42;
  long lStack_b8;
  void *pvStack_80;
  uint uStack_6c;
  undefined8 uStack_68;
  int *piStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_40;
  
  bVar42 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_2 + 0x2c) == 0) {
    plVar13 = (long *)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc
                                ((hb_pool_t<hb_serialize_context_t::object_t,32u> *)(param_2 + 0x30)
                                );
    if (plVar13 == (long *)0x0) {
      if (*(int *)(param_2 + 0x2c) == 0) {
        *(undefined4 *)(param_2 + 0x2c) = 1;
      }
      goto LAB_001015ff;
    }
    lVar27 = *(long *)(param_2 + 8);
    lVar37 = *(long *)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x48);
    uVar29 = *(uint *)(param_3 + 0x84);
    uVar21 = (ulong)uVar29;
    uVar33 = *(uint *)(param_3 + 0xb4);
    uVar10 = *(uint *)(param_2 + 0x2c);
    uVar22 = (ulong)uVar10;
    *plVar13 = lVar27;
    plVar13[1] = lVar37;
    lVar41 = *(long *)(param_3 + 0x88);
    plVar13[6] = lVar14;
    *(long **)(param_2 + 0x48) = plVar13;
    if (uVar29 != 0) goto LAB_00100a97;
    if (uVar10 != 0) goto LAB_00101620;
    uVar38 = 4;
LAB_00100b0b:
    if ((long)uVar38 <= lVar37 - lVar27) {
      *(long *)(param_2 + 0x20) = lVar27;
      lVar37 = lVar37 - uVar38;
      plVar13 = *(long **)(param_2 + 0x48);
      *(long *)(param_2 + 8) = lVar37;
      *plVar13 = lVar37;
      plVar13[1] = lVar37;
      bVar6 = CFFIndex<OT::IntType<unsigned_int,4u>>::
              serialize_header<hb_array_t<hb_vector_t<unsigned_char,false>const>,(void*)0>
                        (lVar37,param_2,lVar41,uVar21,uVar22);
      if ((bVar6) && (*(int *)(param_2 + 0x2c) == 0)) {
        if ((uVar22 < 0x80000000) &&
           (puVar28 = *(undefined1 **)(param_2 + 8),
           (long)uVar22 <= *(long *)(param_2 + 0x10) - (long)puVar28)) {
          *(undefined1 **)(param_2 + 8) = puVar28 + uVar22;
          if (puVar28 != (undefined1 *)0x0) {
            lVar14 = uVar21 * 0x10 + lVar41;
joined_r0x00100b97:
            if (lVar14 != lVar41) {
              do {
                uVar33 = *(uint *)(lVar41 + 4);
                if (uVar33 != 0) {
                  puVar17 = (undefined8 *)(lVar41 + 8);
                  if (uVar33 == 1) goto code_r0x00100bcd;
                  pvVar15 = memcpy(puVar28,(undefined1 *)*puVar17,(ulong)uVar33);
                  puVar28 = (undefined1 *)((long)pvVar15 + (ulong)uVar33);
                }
                lVar41 = lVar41 + 0x10;
                if (lVar14 == lVar41) break;
              } while( true );
            }
            uVar21 = 0;
            uVar11 = hb_serialize_context_t::pop_pack(param_2,false);
            uStack_6c = 0;
            *(undefined4 *)(param_3 + 0x10) = uVar11;
            uVar33 = *(uint *)(param_3 + 0x20);
            pvStack_80 = (void *)0x0;
            uVar29 = 0;
            if (-1 < (int)uVar33) {
              uVar29 = uVar33;
            }
            if (0 < (int)uVar33) {
              do {
                uStack_6c = (int)(uVar21 >> 1) + 8 + (int)uVar21;
                uVar21 = (ulong)uStack_6c;
              } while (uStack_6c < uVar29);
              if ((uStack_6c < 0x15555556) &&
                 (pvStack_80 = malloc(uVar21 * 0xc), pvStack_80 != (void *)0x0)) {
                hb_memset(pvStack_80,uVar29 * 0xc,extraout_EDX_00);
                goto LAB_00100c18;
              }
              pvStack_80 = (void *)0x0;
              bVar6 = false;
              goto LAB_001013c8;
            }
LAB_00100c18:
            uVar33 = *(int *)(param_1 + 0xb4) - 1;
            lStack_b8 = (long)(int)uVar33 << 4;
            if ((int)uVar33 < 0) goto LAB_00100f63;
LAB_00100c50:
            lVar41 = *(long *)(param_3 + 0x68);
            if (lVar41 != 0) {
              uVar21 = (ulong)(uVar33 * -0x61c8864f & 0x3fffffff) % (ulong)*(uint *)(param_3 + 0x60)
              ;
              puVar16 = (uint *)(lVar41 + uVar21 * 0xc);
              bVar1 = (byte)puVar16[1];
              if ((bVar1 & 2) != 0) {
                iVar24 = 0;
                do {
                  if (*puVar16 == uVar33) {
                    if ((bVar1 & 1) != 0) {
                      uVar10 = *(uint *)(param_3 + 0xa4);
                      if (uVar33 < uVar10) {
                        puVar30 = (undefined *)(lStack_b8 + *(long *)(param_3 + 0xa8));
                      }
                      else {
                        _pthread_mutex_lock = __hb_CrapPool;
                        puVar30 = &_hb_CrapPool;
                        __hb_CrapPool = CONCAT44(_DAT_00110014,__hb_NullPool);
                      }
                      uVar9 = *(uint *)(puVar30 + 4);
                      if (uVar9 != 0) {
                        if (*(int *)(param_2 + 0x2c) == 0) {
                          puVar17 = (undefined8 *)
                                    hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc
                                              ((hb_pool_t<hb_serialize_context_t::object_t,32u> *)
                                               (param_2 + 0x30));
                          this = *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(param_2 + 8);
                          if (puVar17 == (undefined8 *)0x0) {
                            if (*(int *)(param_2 + 0x2c) == 0) {
                              *(undefined4 *)(param_2 + 0x2c) = 1;
                            }
                          }
                          else {
                            uVar5 = *(undefined8 *)(param_2 + 0x10);
                            uVar2 = *(undefined8 *)(param_2 + 0x48);
                            *puVar17 = *(undefined8 *)(param_2 + 8);
                            puVar17[1] = uVar5;
                            puVar17[6] = uVar2;
                            *(undefined8 **)(param_2 + 0x48) = puVar17;
                          }
                          uVar10 = *(uint *)(param_3 + 0xa4);
                        }
                        else {
                          this = *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(param_2 + 8);
                        }
                        if (uVar33 < uVar10) {
                          puVar30 = (undefined *)(lStack_b8 + *(long *)(param_3 + 0xa8));
                        }
                        else {
                          _pthread_mutex_lock = __hb_CrapPool;
                          puVar30 = &_hb_CrapPool;
                          __hb_CrapPool = CONCAT44(_DAT_00110014,__hb_NullPool);
                        }
                        bVar6 = CFFIndex<OT::IntType<unsigned_int,4u>>::
                                serialize<hb_vector_t<hb_vector_t<unsigned_char,false>,false>,(void*)0>
                                          (this,param_2,(hb_vector_t *)(ulong)*(uint *)(puVar30 + 4)
                                           ,*(uint **)(puVar30 + 8),0);
                        if (!bVar6) goto LAB_00100e4f;
                        uVar9 = hb_serialize_context_t::pop_pack(param_2,false);
                      }
                      if (*(int *)(param_2 + 0x2c) == 0) {
                        puVar17 = (undefined8 *)
                                  hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc
                                            ((hb_pool_t<hb_serialize_context_t::object_t,32u> *)
                                             (param_2 + 0x30));
                        if (puVar17 == (undefined8 *)0x0) {
                          if (*(int *)(param_2 + 0x2c) == 0) {
                            *(undefined4 *)(param_2 + 0x2c) = 1;
                          }
                        }
                        else {
                          uVar5 = *(undefined8 *)(param_2 + 0x10);
                          uVar2 = *(undefined8 *)(param_2 + 0x48);
                          *puVar17 = *(undefined8 *)(param_2 + 8);
                          puVar17[1] = uVar5;
                          puVar17[6] = uVar2;
                          *(undefined8 **)(param_2 + 0x48) = puVar17;
                        }
                      }
                      puVar30 = &_hb_NullPool;
                      piStack_60 = *(int **)(param_1 + 0x78);
                      uStack_68 = CONCAT62(CONCAT51(uStack_68._3_5_,*(undefined1 *)(param_3 + 0x2c))
                                           ,CONCAT11(*(undefined1 *)(param_3 + 0xb0),
                                                     *(undefined1 *)(param_3 + 0xb1)));
                      if (uVar33 < *(uint *)(param_1 + 0xb4)) {
                        puVar30 = (undefined *)(lStack_b8 * 3 + *(long *)(param_1 + 0xb8));
                      }
                      lVar41 = 0;
                      uStack_58 = param_4;
                      uStack_50 = param_5;
                      if (*(int *)(puVar30 + 0xc) == 0) goto LAB_00100e94;
                      goto LAB_00100e32;
                    }
                    break;
                  }
                  iVar24 = iVar24 + 1;
                  uVar21 = (ulong)((int)uVar21 + iVar24 & *(uint *)(param_3 + 0x5c));
                  puVar16 = (uint *)(lVar41 + uVar21 * 0xc);
                  bVar1 = (byte)puVar16[1];
                } while ((bVar1 & 2) != 0);
              }
            }
            goto LAB_00100f52;
          }
        }
        else {
          *(undefined4 *)(param_2 + 0x2c) = 4;
        }
      }
      hb_serialize_context_t::pop_discard(param_2);
      bVar6 = false;
      goto LAB_00100e65;
    }
LAB_00101630:
    *(undefined4 *)(param_2 + 0x2c) = 4;
    bVar6 = false;
  }
  else {
LAB_001015ff:
    uVar21 = (ulong)*(uint *)(param_3 + 0x84);
    uVar33 = *(uint *)(param_3 + 0xb4);
    lVar41 = *(long *)(param_3 + 0x88);
    if (*(uint *)(param_3 + 0x84) != 0) {
LAB_00100a97:
      uVar22 = 0;
      lVar14 = lVar41;
      do {
        piVar20 = (int *)(lVar14 + 4);
        lVar14 = lVar14 + 0x10;
        uVar29 = *piVar20 + (int)uVar22;
        uVar22 = (ulong)uVar29;
      } while (uVar21 * 0x10 + lVar41 != lVar14);
      uVar9 = uVar29 + 1;
      uVar10 = uVar33;
      if (uVar9 != 0) {
        iVar24 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar24 == 0; iVar24 = iVar24 + -1) {
          }
        }
        uVar10 = iVar24 + 8U >> 3;
        if (uVar10 < uVar33) {
          uVar10 = uVar33;
        }
      }
      uVar38 = (ulong)(uVar29 + 5 + uVar10 * ((int)uVar21 + 1));
      if (*(int *)(param_2 + 0x2c) == 0) {
        if (uVar38 < 0x80000000) {
          lVar37 = *(long *)(param_2 + 0x10);
          lVar27 = *(long *)(param_2 + 8);
          goto LAB_00100b0b;
        }
        goto LAB_00101630;
      }
    }
LAB_00101620:
    bVar6 = false;
  }
  goto LAB_00100e65;
code_r0x00100bcd:
  lVar41 = lVar41 + 0x10;
  *puVar28 = *(undefined1 *)*puVar17;
  puVar28 = puVar28 + 1;
  goto joined_r0x00100b97;
  while (lVar41 = lVar41 + 1, (uint)lVar41 < *(uint *)(puVar30 + 0xc)) {
LAB_00100e32:
    cVar7 = cff2_private_dict_op_serializer_t::serialize
                      ((cff2_private_dict_op_serializer_t *)&uStack_68,param_2,
                       (op_str_t *)(lVar41 * 0x10 + *(long *)(puVar30 + 0x10)),uVar9);
    if (cVar7 == '\0') goto LAB_00100e4f;
  }
LAB_00100e94:
  lVar41 = *(long *)(param_3 + 0x68);
  puVar16 = (uint *)&minus_1;
  if (lVar41 != 0) {
    uVar21 = ((ulong)(uVar33 * -0x61c8864f) & 0x3fffffff) % (ulong)*(uint *)(param_3 + 0x60);
    puVar18 = (uint *)(lVar41 + uVar21 * 0xc);
    bVar1 = (byte)puVar18[1];
    if ((bVar1 & 2) != 0) {
      iVar24 = 0;
      do {
        if (*puVar18 == uVar33) {
          puVar16 = (uint *)&minus_1;
          if ((bVar1 & 1) != 0) {
            puVar16 = puVar18 + 2;
          }
          goto LAB_00100f0f;
        }
        iVar24 = iVar24 + 1;
        uVar21 = (ulong)((int)uVar21 + iVar24 & *(uint *)(param_3 + 0x5c));
        puVar18 = (uint *)(lVar41 + uVar21 * 0xc);
        bVar1 = (byte)puVar18[1];
      } while ((bVar1 & 2) != 0);
      piVar20 = *(int **)(param_2 + 0x48);
      uVar10 = _minus_1;
      goto joined_r0x00100f18;
    }
  }
LAB_00100f0f:
  piVar20 = *(int **)(param_2 + 0x48);
  uVar10 = *puVar16;
joined_r0x00100f18:
  if (piVar20 == (int *)0x0) {
    iVar24 = 0;
  }
  else {
    iVar24 = (int)*(undefined8 *)(param_2 + 8) - *piVar20;
  }
  if (uVar10 < uVar29) {
    puVar30 = (undefined *)((long)pvStack_80 + (ulong)uVar10 * 0xc);
    *(int *)(puVar30 + 4) = iVar24;
    uVar12 = hb_serialize_context_t::pop_pack(param_2,true);
  }
  else {
    uVar2 = CONCAT44(_DAT_00110014,__hb_NullPool);
    uVar11 = __hb_CrapPool;
    _pthread_mutex_lock = __hb_CrapPool;
    __hb_CrapPool = CONCAT44(iVar24,__hb_NullPool);
    uVar12 = hb_serialize_context_t::pop_pack(param_2,true);
    puVar30 = &_hb_CrapPool;
    _pthread_mutex_lock = CONCAT44(_DAT_00110024,uVar11);
    __hb_CrapPool = uVar2;
  }
  *(undefined4 *)(puVar30 + 8) = uVar12;
LAB_00100f52:
  uVar33 = uVar33 - 1;
  lStack_b8 = lStack_b8 + -0x10;
  if (uVar33 == 0xffffffff) goto LAB_00100f63;
  goto LAB_00100c50;
LAB_00100f63:
  pFVar31 = *(FDSelect **)(param_1 + 0x90);
  iVar24 = *(int *)(param_2 + 0x2c);
  if (pFVar31 != (FDSelect *)&_hb_NullPool) {
    if (iVar24 == 0) {
      puVar17 = (undefined8 *)
                hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc
                          ((hb_pool_t<hb_serialize_context_t::object_t,32u> *)(param_2 + 0x30));
      if (puVar17 == (undefined8 *)0x0) {
        pFVar31 = *(FDSelect **)(param_1 + 0x90);
        if (*(int *)(param_2 + 0x2c) == 0) {
          *(undefined4 *)(param_2 + 0x2c) = 1;
        }
      }
      else {
        uVar2 = *(undefined8 *)(param_2 + 8);
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        puVar17[6] = *(undefined8 *)(param_2 + 0x48);
        *puVar17 = uVar2;
        puVar17[1] = uVar5;
        *(undefined8 **)(param_2 + 0x48) = puVar17;
        pFVar31 = *(FDSelect **)(param_1 + 0x90);
      }
    }
    cVar7 = hb_serialize_cff_fdselect
                      (param_2,*(uint *)(param_3 + 0x18),pFVar31,*(uint *)(param_3 + 0x1c),
                       *(uint *)(param_3 + 0x28),*(uint *)(param_3 + 0x24),
                       (hb_vector_t *)(param_3 + 0x30));
    if (cVar7 != '\0') {
      uVar11 = hb_serialize_context_t::pop_pack(param_2,true);
      *(undefined4 *)(param_3 + 8) = uVar11;
      iVar24 = *(int *)(param_2 + 0x2c);
      goto LAB_00100ffa;
    }
    goto LAB_00100e4f;
  }
LAB_00100ffa:
  if (iVar24 == 0) {
    puVar17 = (undefined8 *)
              hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc
                        ((hb_pool_t<hb_serialize_context_t::object_t,32u> *)(param_2 + 0x30));
    if (puVar17 == (undefined8 *)0x0) {
      iVar24 = *(int *)(param_2 + 0x2c);
      puVar16 = *(uint **)(param_2 + 8);
      if (iVar24 == 0) {
        *(undefined4 *)(param_2 + 0x2c) = 1;
        iVar24 = 1;
      }
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      puVar16 = *(uint **)(param_2 + 8);
      iVar24 = *(int *)(param_2 + 0x2c);
      puVar17[6] = *(undefined8 *)(param_2 + 0x48);
      *puVar17 = uVar2;
      puVar17[1] = uVar5;
      *(undefined8 **)(param_2 + 0x48) = puVar17;
    }
    iVar34 = *(int *)(param_1 + 0xa4);
    lVar41 = *(long *)(param_1 + 0xa8);
    lVar14 = lVar41;
    if (iVar34 != 0) {
LAB_0010104b:
      lVar37 = *(long *)(param_3 + 0x68);
      lVar41 = lVar14;
      do {
        iVar25 = (int)(lVar41 - lVar14 >> 3);
        if (lVar37 != 0) {
          uVar21 = (ulong)(iVar25 * -0x138e8143 & 0x3fffffff) % (ulong)*(uint *)(param_3 + 0x60);
          piVar20 = (int *)(lVar37 + uVar21 * 0xc);
          bVar1 = *(byte *)(piVar20 + 1);
          if ((bVar1 & 2) != 0) {
            iVar26 = 0;
            do {
              if (iVar25 * -0x33333333 == *piVar20) {
                if ((bVar1 & 1) != 0) goto LAB_001010f5;
                break;
              }
              iVar26 = iVar26 + 1;
              uVar21 = (ulong)((int)uVar21 + iVar26 & *(uint *)(param_3 + 0x5c));
              piVar20 = (int *)(lVar37 + uVar21 * 0xc);
              bVar1 = *(byte *)(piVar20 + 1);
            } while ((bVar1 & 2) != 0);
          }
        }
        lVar41 = lVar41 + 0x28;
        iVar34 = iVar34 + -1;
      } while (iVar34 != 0);
    }
LAB_001010f5:
    uStack_68 = 0;
    piStack_60 = (int *)0x0;
    if (iVar24 != 0) {
      puVar18 = *(uint **)(param_2 + 8);
      goto LAB_00101b95;
    }
    puVar17 = (undefined8 *)
              hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc
                        ((hb_pool_t<hb_serialize_context_t::object_t,32u> *)(param_2 + 0x30));
    puVar18 = *(uint **)(param_2 + 8);
    if (puVar17 == (undefined8 *)0x0) {
      if (*(int *)(param_2 + 0x2c) == 0) {
        *(undefined4 *)(param_2 + 0x2c) = 1;
      }
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      uVar2 = *(undefined8 *)(param_2 + 0x48);
      *puVar17 = *(undefined8 *)(param_2 + 8);
      puVar17[1] = uVar5;
      puVar17[6] = uVar2;
      *(undefined8 **)(param_2 + 0x48) = puVar17;
    }
  }
  else {
    puVar18 = *(uint **)(param_2 + 8);
    iVar34 = *(int *)(param_1 + 0xa4);
    lVar41 = *(long *)(param_1 + 0xa8);
    lVar14 = lVar41;
    puVar16 = puVar18;
    if (iVar34 != 0) goto LAB_0010104b;
LAB_00101b95:
    piStack_60 = (int *)0x0;
    uStack_68 = 0;
  }
  iVar24 = 0;
  puVar40 = (uint *)((long)pvStack_80 + 4);
  puVar23 = puVar18;
  iVar25 = 0;
  if (iVar34 != 0) {
LAB_00101168:
    iVar24 = iVar25;
    if (puVar40 != (uint *)((long)pvStack_80 + (long)(int)uVar29 * 0xc + 4)) {
      if (*(int *)(lVar41 + 0xc) == 0) {
        iVar25 = 0;
      }
      else {
        lVar14 = 0;
        puVar32 = puVar23;
        do {
          plVar13 = (long *)(lVar14 * 0x10 + *(long *)(lVar41 + 0x10));
          iVar25 = (int)puVar23;
          if ((int)plVar13[1] == 0x12) {
            if (*(int *)(param_2 + 0x2c) == 0) {
              uVar33 = *puVar40;
              if (*(uint **)(param_2 + 0x10) != puVar32 &&
                  -1 < (long)*(uint **)(param_2 + 0x10) - (long)puVar32) {
                *(undefined1 *)puVar32 = 0;
                puVar28 = *(undefined1 **)(param_2 + 8);
                puVar32 = (uint *)(puVar28 + 1);
                *(uint **)(param_2 + 8) = puVar32;
                if (puVar28 == (undefined1 *)0x0) {
                  puVar23 = (uint *)0x1;
                  iVar25 = 1 - iVar25;
                  goto LAB_00101236;
                }
                *puVar28 = 0x1c;
                if (*(int *)(param_2 + 0x2c) != 0) break;
                if (1 < *(long *)(param_2 + 0x10) - (long)puVar32) {
                  *(undefined2 *)(puVar28 + 1) = 0;
                  puVar4 = *(ushort **)(param_2 + 8);
                  *(ushort **)(param_2 + 8) = puVar4 + 1;
                  if (puVar4 == (ushort *)0x0) {
                    puVar23 = (uint *)0x2;
                    iVar25 = 2 - iVar25;
                    goto LAB_00101236;
                  }
                  uVar8 = (ushort)uVar33;
                  *puVar4 = uVar8 << 8 | uVar8 >> 8;
                  if ((long)(short)((uVar8 >> 8) << 8 | uVar8 & 0xff) == (ulong)uVar33) {
                    bVar6 = CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>
                                      (param_2,(int)plVar13[1],puVar40[1],2);
                    puVar32 = *(uint **)(param_2 + 8);
                    if (bVar6) goto LAB_00101222;
                  }
                  else {
                    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 8;
                    puVar32 = *(uint **)(param_2 + 8);
                  }
                  break;
                }
              }
LAB_00101848:
              *(undefined4 *)(param_2 + 0x2c) = 4;
            }
            break;
          }
          if (*(int *)(param_2 + 0x2c) != 0) break;
          bVar1 = *(byte *)((long)plVar13 + 0xc);
          uVar21 = (ulong)bVar1;
          if (*(long *)(param_2 + 0x10) - (long)puVar32 < (long)uVar21) goto LAB_00101848;
          puVar19 = puVar32;
          if (bVar1 != 0) {
            if (bVar1 < 8) {
              if ((bVar1 & 4) == 0) {
                if ((bVar1 != 0) && (*(undefined1 *)puVar32 = 0, (bVar1 & 2) != 0)) {
                  *(undefined2 *)((long)puVar32 + (uVar21 - 2)) = 0;
                }
              }
              else {
                *puVar32 = 0;
                *(undefined4 *)((long)puVar32 + (uVar21 - 4)) = 0;
              }
            }
            else {
              puVar32[0] = 0;
              puVar32[1] = 0;
              *(undefined8 *)((long)puVar32 + (uVar21 - 8)) = 0;
              puVar17 = (undefined8 *)((ulong)(puVar32 + 2) & 0xfffffffffffffff8);
              for (uVar22 = (ulong)((uint)bVar1 +
                                    ((int)puVar32 -
                                    (int)(undefined8 *)((ulong)(puVar32 + 2) & 0xfffffffffffffff8))
                                   >> 3); uVar22 != 0; uVar22 = uVar22 - 1) {
                *puVar17 = 0;
                puVar17 = puVar17 + (ulong)bVar42 * -2 + 1;
              }
            }
            puVar19 = *(uint **)(param_2 + 8);
          }
          puVar32 = (uint *)(uVar21 + (long)puVar19);
          *(uint **)(param_2 + 8) = puVar32;
          if (puVar19 == (uint *)0x0) {
            iVar25 = (int)puVar32 - iVar25;
            puVar23 = puVar32;
            goto LAB_00101236;
          }
          if (*(char *)((long)plVar13 + 0xc) != '\0') {
            lVar37 = 0;
            do {
              *(undefined1 *)((long)puVar19 + lVar37) = *(undefined1 *)(*plVar13 + lVar37);
              lVar37 = lVar37 + 1;
            } while ((uint)lVar37 < (uint)*(byte *)((long)plVar13 + 0xc));
            puVar32 = *(uint **)(param_2 + 8);
          }
LAB_00101222:
          lVar14 = lVar14 + 1;
        } while ((uint)lVar14 < *(uint *)(lVar41 + 0xc));
        iVar25 = (int)puVar32 - iVar25;
        puVar23 = puVar32;
      }
LAB_00101236:
      if (iVar24 <= (int)uStack_68._4_4_) {
        cVar7 = hb_vector_t<unsigned_int,false>::alloc
                          ((hb_vector_t<unsigned_int,false> *)&uStack_68,uStack_68._4_4_ + 1,false);
        iVar24 = (int)uStack_68;
        if (cVar7 == '\0') {
          puVar23 = *(uint **)(param_2 + 8);
          __hb_CrapPool = CONCAT44(_DAT_0011001c,__hb_NullPool);
          goto LAB_00101261;
        }
        puVar23 = *(uint **)(param_2 + 8);
      }
      uVar21 = (ulong)uStack_68._4_4_;
      uStack_68 = CONCAT44(uStack_68._4_4_ + 1,(int)uStack_68);
      piStack_60[uVar21] = iVar25;
LAB_00101261:
      do {
        iVar34 = iVar34 + -1;
        lVar41 = lVar41 + 0x28;
        if (iVar34 == 0) break;
        puVar30 = &_hb_NullPool;
        if (*(int *)(param_1 + 0xa4) != 0) {
          puVar30 = *(undefined **)(param_1 + 0xa8);
        }
        lVar14 = *(long *)(param_3 + 0x68);
        iVar25 = (int)(lVar41 - (long)puVar30 >> 3);
        if (lVar14 != 0) {
          uVar21 = (ulong)(iVar25 * -0x138e8143 & 0x3fffffff) % (ulong)*(uint *)(param_3 + 0x60);
          piVar20 = (int *)(lVar14 + uVar21 * 0xc);
          bVar1 = *(byte *)(piVar20 + 1);
          if ((bVar1 & 2) != 0) {
            iVar26 = 0;
            do {
              if (iVar25 * -0x33333333 == *piVar20) {
                if ((bVar1 & 1) != 0) {
                  puVar40 = puVar40 + 3;
                  iVar25 = iVar24;
                  goto LAB_00101168;
                }
                break;
              }
              iVar26 = iVar26 + 1;
              uVar21 = (ulong)((int)uVar21 + iVar26 & *(uint *)(param_3 + 0x5c));
              piVar20 = (int *)(lVar14 + uVar21 * 0xc);
              bVar1 = *(byte *)(piVar20 + 1);
            } while ((bVar1 & 2) != 0);
          }
        }
      } while( true );
    }
  }
  hb_serialize_context_t::pop_pack(param_2,false);
  piVar20 = piStack_60;
  if (iVar24 < 0) {
LAB_00101b50:
    free(piVar20);
    goto LAB_00100e4f;
  }
  uVar33 = uStack_68._4_4_;
  uVar21 = (ulong)uStack_68._4_4_;
  uVar29 = ((int)puVar23 - (int)puVar18) + 1;
  if (uVar29 != 0) {
    iVar34 = 0x1f;
    if (uVar29 != 0) {
      for (; uVar29 >> iVar34 == 0; iVar34 = iVar34 + -1) {
      }
    }
    uVar29 = iVar34 + 8U >> 3;
  }
  if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00101b48;
  pvVar15 = *(void **)(param_2 + 8);
  puVar18 = puVar16 + 1;
  __n = (long)puVar18 - (long)pvVar15;
  if ((0x7fffffff < __n) || (*(uint **)(param_2 + 0x10) < puVar18)) goto LAB_00101b41;
  if ((int)__n != 0) {
    memset(pvVar15,0,__n);
    pvVar15 = *(void **)(param_2 + 8);
    puVar18 = (uint *)((long)pvVar15 + __n);
  }
  *(uint **)(param_2 + 8) = puVar18;
  if ((pvVar15 == (void *)0x0) || (puVar16 == (uint *)0x0)) {
LAB_00101b48:
    if (iVar24 != 0) goto LAB_00101b50;
LAB_00100e4f:
    hb_serialize_context_t::pop_discard(param_2);
LAB_00100e57:
    bVar6 = false;
  }
  else {
    *puVar16 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
    if (uVar33 != 0) {
      if (*(int *)(param_2 + 0x2c) == 0) {
        puVar28 = (undefined1 *)((long)puVar16 + 5);
        uVar22 = (long)puVar28 - (long)*(void **)(param_2 + 8);
        if ((uVar22 < 0x80000000) && (puVar28 <= *(undefined1 **)(param_2 + 0x10))) {
          hb_memset(*(void **)(param_2 + 8),(int)uVar22,(uint)puVar28);
          lVar41 = *(long *)(param_2 + 8);
          lVar14 = uVar22 + lVar41;
          *(long *)(param_2 + 8) = lVar14;
          if (lVar41 != 0) {
            uVar33 = *puVar16;
            *(char *)(puVar16 + 1) = (char)uVar29;
            uVar22 = (ulong)(((uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                              uVar33 << 0x18) + 1) * uVar29);
            if (*(int *)(param_2 + 0x2c) == 0) {
              if ((uVar22 < 0x80000000) && ((long)uVar22 <= *(long *)(param_2 + 0x10) - lVar14)) {
                *(ulong *)(param_2 + 8) = lVar14 + uVar22;
                if (uVar29 == 3) {
                  iVar34 = 1;
                  piVar35 = piVar20;
                  puVar39 = puVar28;
                  do {
                    puVar39[1] = (char)((uint)iVar34 >> 8);
                    piVar36 = piVar35 + 1;
                    puVar39[2] = (char)iVar34;
                    *puVar39 = (char)((uint)iVar34 >> 0x10);
                    iVar34 = iVar34 + *piVar35;
                    piVar35 = piVar36;
                    puVar39 = puVar39 + 3;
                  } while (piVar36 != piVar20 + uVar21);
                  *(ushort *)
                   (puVar28 + ((ulong)((long)piVar36 + (-4 - (long)piVar20)) >> 2) * 3 + 3 + 1) =
                       (ushort)iVar34 << 8 | (ushort)iVar34 >> 8;
                  puVar28[((ulong)((long)piVar36 + (-4 - (long)piVar20)) >> 2) * 3 + 3] =
                       (char)((uint)iVar34 >> 0x10);
                }
                else if (uVar29 == 4) {
                  *(undefined4 *)((long)puVar16 + 5) = 0x1000000;
                  uVar33 = *piVar20 + 1;
                  if (piVar20 + uVar21 != piVar20 + 1) {
                    lVar41 = 0;
                    do {
                      *(uint *)((long)puVar16 + lVar41 + 9) =
                           uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                           uVar33 << 0x18;
                      uVar33 = uVar33 + *(int *)((long)piVar20 + lVar41 + 4);
                      lVar41 = lVar41 + 4;
                    } while (lVar41 != (long)(piVar20 + uVar21) + (-4 - (long)piVar20));
                  }
                  *(uint *)(puVar28 + uVar21 * 4) =
                       uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                       uVar33 << 0x18;
                }
                else if (uVar29 == 1) {
                  uVar22 = uVar21 * 4 - 4 >> 2;
                  iVar34 = 1;
                  uVar21 = 0;
                  do {
                    *(char *)((long)puVar16 + uVar21 + 5) = (char)iVar34;
                    iVar34 = iVar34 + piVar20[uVar21];
                    bVar6 = uVar21 != uVar22;
                    uVar21 = uVar21 + 1;
                  } while (bVar6);
                  *(char *)((long)puVar16 + uVar22 + 6) = (char)iVar34;
                }
                else if (uVar29 == 2) {
                  piVar35 = piVar20 + uVar21;
                  *(undefined2 *)((long)puVar16 + 5) = 0x100;
                  iVar34 = *piVar20 + 1;
                  uVar8 = (ushort)iVar34;
                  if (piVar35 != piVar20 + 1) {
                    lVar41 = 0;
                    do {
                      *(ushort *)((long)puVar16 + lVar41 + 7) =
                           (ushort)iVar34 << 8 | (ushort)iVar34 >> 8;
                      iVar34 = iVar34 + *(int *)((long)piVar20 + lVar41 * 2 + 4);
                      uVar8 = (ushort)iVar34;
                      lVar41 = lVar41 + 2;
                    } while (lVar41 != ((ulong)((long)piVar35 + (-8 - (long)piVar20)) >> 2) * 2 + 2)
                    ;
                  }
                  *(ushort *)
                   ((long)puVar16 + ((ulong)((long)piVar35 + (-4 - (long)piVar20)) >> 2) * 2 + 7) =
                       uVar8 << 8 | uVar8 >> 8;
                }
                goto joined_r0x00101c6f;
              }
              goto LAB_00101b41;
            }
          }
        }
        else {
LAB_00101b41:
          *(undefined4 *)(param_2 + 0x2c) = 4;
        }
      }
      goto LAB_00101b48;
    }
joined_r0x00101c6f:
    if (iVar24 != 0) {
      free(piVar20);
    }
    uVar11 = hb_serialize_context_t::pop_pack(param_2,false);
    *(undefined4 *)(param_3 + 0xc) = uVar11;
    uVar33 = extraout_EDX;
    if ((*(undefined **)(param_1 + 0x78) != &_hb_NullPool) && (*(char *)(param_3 + 0x2c) == '\0')) {
      if (*(int *)(param_2 + 0x2c) == 0) {
        puVar17 = (undefined8 *)
                  hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc
                            ((hb_pool_t<hb_serialize_context_t::object_t,32u> *)(param_2 + 0x30));
        if (puVar17 == (undefined8 *)0x0) {
          if (*(int *)(param_2 + 0x2c) == 0) {
            *(undefined4 *)(param_2 + 0x2c) = 1;
          }
        }
        else {
          uVar2 = *(undefined8 *)(param_2 + 8);
          uVar5 = *(undefined8 *)(param_2 + 0x10);
          lVar41 = *(long *)(param_2 + 0x10);
          pvVar15 = *(void **)(param_2 + 8);
          puVar17[6] = *(undefined8 *)(param_2 + 0x48);
          iVar24 = *(int *)(param_2 + 0x2c);
          *puVar17 = uVar2;
          puVar17[1] = uVar5;
          *(undefined8 **)(param_2 + 0x48) = puVar17;
          puVar4 = *(ushort **)(param_1 + 0x78);
          uVar8 = *puVar4;
          uVar33 = (ushort)(uVar8 << 8 | uVar8 >> 8) + 2;
          uVar21 = (ulong)uVar33;
          if (iVar24 == 0) {
            if (lVar41 - (long)pvVar15 < (long)uVar21) {
              *(undefined4 *)(param_2 + 0x2c) = 4;
            }
            else {
              hb_memset(pvVar15,uVar33,(uint)lVar41);
              pvVar15 = *(void **)(param_2 + 8);
              *(ulong *)(param_2 + 8) = (long)pvVar15 + uVar21;
              if (pvVar15 != (void *)0x0) {
                memcpy(pvVar15,puVar4,uVar21);
                uVar11 = hb_serialize_context_t::pop_pack(param_2,false);
                *(undefined4 *)(param_3 + 0x14) = uVar11;
                uVar33 = extraout_EDX_01;
                goto LAB_001014cc;
              }
            }
          }
        }
      }
      goto LAB_00100e4f;
    }
LAB_001014cc:
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00100e57;
    if (*(long *)(param_2 + 0x10) - (long)*(void **)(param_2 + 8) < 5) {
LAB_00101882:
      *(undefined4 *)(param_2 + 0x2c) = 4;
      goto LAB_00100e57;
    }
    hb_memset(*(void **)(param_2 + 8),5,uVar33);
    puVar3 = *(undefined2 **)(param_2 + 8);
    *(long *)(param_2 + 8) = (long)puVar3 + 5;
    if (puVar3 == (undefined2 *)0x0) goto LAB_00100e57;
    *(undefined1 *)(puVar3 + 1) = 5;
    *puVar3 = 2;
    if (*(int *)(param_1 + 0x54) == 0) {
      uVar8 = 0;
    }
    else {
      lVar41 = 0;
      do {
        plVar13 = (long *)(lVar41 * 0x10 + *(long *)(param_1 + 0x58));
        iVar24 = (int)plVar13[1];
        if (iVar24 == 0x18) {
          if (*(int *)(param_3 + 0x14) != 0) {
            bVar6 = CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>
                              (param_2,0x18,*(int *)(param_3 + 0x14),0);
            goto LAB_001015a1;
          }
        }
        else {
          if (iVar24 == 0x124) {
            bVar6 = CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>
                              (param_2,0x124,*(undefined4 *)(param_3 + 0xc),2);
          }
          else if (iVar24 == 0x125) {
            bVar6 = CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>
                              (param_2,0x125,*(undefined4 *)(param_3 + 8),2);
          }
          else {
            if (iVar24 != 0x11) {
              bVar42 = *(byte *)((long)plVar13 + 0xc);
              if (*(int *)(param_2 + 0x2c) == 0) {
                if ((long)(ulong)bVar42 <= *(long *)(param_2 + 0x10) - (long)*(void **)(param_2 + 8)
                   ) {
                  hb_memset(*(void **)(param_2 + 8),(uint)bVar42,(uint)bVar42);
                  lVar14 = *(long *)(param_2 + 8);
                  *(ulong *)(param_2 + 8) = (ulong)bVar42 + lVar14;
                  if (lVar14 != 0) {
                    if (*(char *)((long)plVar13 + 0xc) != '\0') {
                      lVar37 = 0;
                      do {
                        *(undefined1 *)(lVar14 + lVar37) = *(undefined1 *)(*plVar13 + lVar37);
                        lVar37 = lVar37 + 1;
                      } while ((uint)lVar37 < (uint)*(byte *)((long)plVar13 + 0xc));
                    }
                    goto LAB_0010154b;
                  }
                  goto LAB_00100e57;
                }
                goto LAB_00101882;
              }
              goto LAB_00100e57;
            }
            bVar6 = CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>
                              (param_2,0x11,*(undefined4 *)(param_3 + 0x10),2);
          }
LAB_001015a1:
          if (bVar6 == false) goto LAB_00100e57;
        }
LAB_0010154b:
        lVar41 = lVar41 + 1;
      } while ((uint)lVar41 < *(uint *)(param_1 + 0x54));
      uVar8 = (short)*(undefined8 *)(param_2 + 8) - (short)((long)puVar3 + 5);
      uVar8 = uVar8 * 0x100 | uVar8 >> 8;
    }
    *(ushort *)((long)puVar3 + 3) = uVar8;
    bVar6 = CFFIndex<OT::IntType<unsigned_int,4u>>::
            serialize<hb_vector_t<hb_vector_t<unsigned_char,false>,false>,(void*)0>
                      (*(CFFIndex<OT::IntType<unsigned_int,4u>> **)(param_2 + 8),param_2,
                       (hb_vector_t *)(ulong)*(uint *)(param_3 + 0x94),*(uint **)(param_3 + 0x98),0)
    ;
  }
  if (uStack_6c != 0) {
LAB_001013c8:
    free(pvStack_80);
  }
LAB_00100e65:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::cff2::accelerator_subset_t::subset(hb_subset_context_t*) const */

undefined4 __thiscall
OT::cff2::accelerator_subset_t::subset(accelerator_subset_t *this,hb_subset_context_t *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  void *__ptr;
  int *piVar8;
  long in_FS_OFFSET;
  bool bVar9;
  cff2_subset_plan local_f8 [16];
  undefined8 local_e8;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined1 local_cc;
  undefined8 local_c8;
  void *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined2 local_a6;
  undefined1 local_a4 [16];
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined2 local_48;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_cc = 0;
  local_e8 = 0;
  local_c8 = 0;
  local_c0 = (void *)0x0;
  local_f8[0] = (cff2_subset_plan)0x0;
  local_f8[1] = (cff2_subset_plan)0x0;
  local_f8[2] = (cff2_subset_plan)0x0;
  local_f8[3] = (cff2_subset_plan)0x0;
  local_f8[4] = (cff2_subset_plan)0x0;
  local_f8[5] = (cff2_subset_plan)0x0;
  local_f8[6] = (cff2_subset_plan)0x0;
  local_f8[7] = (cff2_subset_plan)0x0;
  local_f8[8] = (cff2_subset_plan)0x0;
  local_f8[9] = (cff2_subset_plan)0x0;
  local_f8[10] = (cff2_subset_plan)0x0;
  local_f8[0xb] = (cff2_subset_plan)0x0;
  local_f8[0xc] = (cff2_subset_plan)0x0;
  local_f8[0xd] = (cff2_subset_plan)0x0;
  local_f8[0xe] = (cff2_subset_plan)0x0;
  local_f8[0xf] = (cff2_subset_plan)0x0;
  local_dc = __LC26;
  uStack_d4 = _UNK_0010ee38;
  local_b8 = 1;
  local_b4 = 1;
  local_b0 = 0;
  local_a8 = 1;
  local_a6 = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_a4 = (undefined1  [16])0x0;
  local_78 = 0;
  local_48 = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_44 = 0;
  uVar4 = cff2_subset_plan::create(local_f8,this,*(hb_subset_plan_t **)(param_1 + 0x10));
  if ((char)uVar4 != '\0') {
    uVar4 = serialize(this,*(undefined8 *)(param_1 + 0x18),local_f8,
                      *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x890),
                      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x88c));
  }
  if ((int)local_58 == 0) {
    uVar3 = local_68;
  }
  else {
    piVar7 = (int *)((long)local_50 + (ulong)local_58._4_4_ * 0x10 + -0x10);
    if (local_58._4_4_ != 0) {
      piVar1 = piVar7 + (ulong)(local_58._4_4_ - 1) * -4 + -4;
      do {
        while (*piVar7 != 0) {
          uVar5 = piVar7[1];
          __ptr = *(void **)(piVar7 + 2);
          piVar6 = (int *)((long)__ptr + (ulong)uVar5 * 0x10 + -0x10);
          if (uVar5 != 0) {
            piVar8 = piVar6 + (ulong)(uVar5 - 1) * -4 + -4;
            do {
              while (*piVar6 != 0) {
                piVar2 = piVar6 + 2;
                piVar6 = piVar6 + -4;
                free(*(void **)piVar2);
                if (piVar8 == piVar6) goto LAB_0010201b;
              }
              piVar6 = piVar6 + -4;
            } while (piVar8 != piVar6);
LAB_0010201b:
            __ptr = *(void **)(piVar7 + 2);
          }
          free(__ptr);
          piVar7 = piVar7 + -4;
          if (piVar1 == piVar7) goto LAB_00102035;
        }
        piVar7 = piVar7 + -4;
      } while (piVar1 != piVar7);
    }
LAB_00102035:
    free(local_50);
    uVar3 = local_68;
  }
  local_68 = uVar3;
  if ((int)local_68 == 0) {
    uVar3 = local_78;
  }
  else {
    local_68._4_4_ = (uint)((ulong)uVar3 >> 0x20);
    piVar7 = (int *)((long)local_60 + (ulong)local_68._4_4_ * 0x10 + -0x10);
    uVar5 = local_68._4_4_ - 1;
    bVar9 = local_68._4_4_ != 0;
    if (bVar9) {
      piVar1 = piVar7 + (ulong)uVar5 * -4 + -4;
      do {
        while (*piVar7 != 0) {
          piVar6 = piVar7 + 2;
          piVar7 = piVar7 + -4;
          free(*(void **)piVar6);
          if (piVar1 == piVar7) goto LAB_001020a9;
        }
        piVar7 = piVar7 + -4;
      } while (piVar1 != piVar7);
    }
LAB_001020a9:
    free(local_60);
    uVar3 = local_78;
  }
  local_78 = uVar3;
  if ((int)local_78 == 0) {
  }
  else {
    local_78._4_4_ = (uint)((ulong)uVar3 >> 0x20);
    piVar7 = (int *)((long)local_70 + (ulong)local_78._4_4_ * 0x10 + -0x10);
    uVar5 = local_78._4_4_ - 1;
    bVar9 = local_78._4_4_ != 0;
    if (bVar9) {
      piVar1 = piVar7 + (ulong)uVar5 * -4 + -4;
      do {
        while (*piVar7 != 0) {
          piVar6 = piVar7 + 2;
          piVar7 = piVar7 + -4;
          free(*(void **)piVar6);
          if (piVar1 == piVar7) goto LAB_00102119;
        }
        piVar7 = piVar7 + -4;
      } while (piVar1 != piVar7);
    }
LAB_00102119:
    free(local_70);
  }
  if ((int)local_88 != 0) {
    free(local_80);
  }
  hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>((hb_hashmap_t *)&local_b8);
  if (local_90 != (void *)0x0) {
    free(local_90);
  }
  if ((int)local_c8 != 0) {
    free(local_c0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* char* hb_vector_t<char, false>::push<int>(int&&) [clone .isra.0] */

char * __thiscall hb_vector_t<char,false>::push<int>(hb_vector_t<char,false> *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  void *__ptr;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(this + 4);
  uVar4 = (ulong)uVar1;
  uVar2 = *(uint *)this;
  uVar3 = uVar1 + 1;
  if ((int)uVar1 < (int)uVar2) {
    __ptr = *(void **)(this + 8);
  }
  else {
    if ((int)uVar2 < 0) {
LAB_001021f8:
      uVar2 = (uint)_hb_NullPool;
      _hb_CrapPool = _hb_NullPool;
      goto LAB_001021a3;
    }
    __ptr = *(void **)(this + 8);
    if (uVar2 < uVar3) {
      do {
        uVar2 = (uVar2 >> 1) + 8 + uVar2;
      } while (uVar2 < uVar3);
      __ptr = realloc(__ptr,(ulong)uVar2);
      if (__ptr == (void *)0x0) {
        if (*(uint *)this < uVar2) {
          *(uint *)this = ~*(uint *)this;
          goto LAB_001021f8;
        }
        uVar4 = (ulong)*(uint *)(this + 4);
        __ptr = *(void **)(this + 8);
        uVar3 = *(uint *)(this + 4) + 1;
      }
      else {
        uVar4 = (ulong)*(uint *)(this + 4);
        *(void **)(this + 8) = __ptr;
        *(uint *)this = uVar2;
        uVar3 = *(uint *)(this + 4) + 1;
      }
    }
  }
  *(uint *)(this + 4) = uVar3;
  uVar2 = *param_1;
  *(char *)((long)__ptr + uVar4) = (char)uVar2;
LAB_001021a3:
  return (char *)(ulong)uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::subr_subsetter_t<cff2_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned int, 4u> >,
   OT::cff2::accelerator_subset_t const, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,
   cff2_cs_opset_subr_subset_t, 65535u>::drop_hints_in_str(CFF::parsed_cs_str_t&,
   CFF::subr_subset_param_t const&, CFF::subr_subsetter_t<cff2_subr_subsetter_t,
   CFF::Subrs<OT::IntType<unsigned int, 4u> >, OT::cff2::accelerator_subset_t const,
   CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>, cff2_cs_opset_subr_subset_t,
   65535u>::drop_hints_param_t&) [clone .isra.0] */

undefined8
CFF::
subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
::drop_hints_in_str(parsed_cs_str_t *param_1,subr_subset_param_t *param_2,
                   drop_hints_param_t *param_3)

{
  ushort uVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  parsed_cs_str_t *ppVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar13 = (ulong)*(uint *)(param_1 + 0xc);
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0xc) == 0) {
    param_3[2] = (drop_hints_param_t)0x1;
    uVar10 = 0;
  }
  else {
    lVar12 = 0x10;
    uVar7 = 0;
    uVar10 = 0;
    do {
      while (uVar8 = *(uint *)(lVar4 + -8 + lVar12), 0x1d < uVar8) {
        if (uVar8 != 0x100) goto joined_r0x001023d0;
LAB_0010240a:
        *(undefined1 *)(lVar4 + -3 + lVar12) = 1;
joined_r0x0010241b:
        lVar12 = lVar12 + 0x10;
        uVar7 = uVar7 + 1;
        if (uVar13 == uVar7) goto LAB_0010231c;
      }
      if (uVar8 == 0) goto switchD_0010228d_caseD_2;
      uVar6 = (uint)uVar7;
      switch(uVar8) {
      default:
        goto switchD_0010228d_caseD_2;
      case 4:
      case 0x15:
      case 0x16:
        *param_3 = (drop_hints_param_t)0x1;
        goto joined_r0x0010241b;
      case 10:
        lVar2 = *(long *)(param_2 + 0x18);
        uVar1 = *(ushort *)(lVar4 + -2 + lVar12);
        param_3[1] = (drop_hints_param_t)0x0;
        if ((uint)uVar1 < *(uint *)(lVar2 + 4)) {
          ppVar9 = (parsed_cs_str_t *)(*(long *)(lVar2 + 8) + (ulong)uVar1 * 0x28);
        }
        else {
          uVar14 = __hb_CrapPool;
          uVar15 = _pthread_mutex_lock;
          uVar16 = _pthread_mutex_unlock;
          ppVar9 = (parsed_cs_str_t *)&_hb_CrapPool;
          _free = _pthread_mutex_destroy;
          __hb_CrapPool = __hb_NullPool;
          _pthread_mutex_lock = uVar14;
          _pthread_mutex_unlock = uVar15;
          _pthread_mutex_destroy = uVar16;
        }
        cVar3 = drop_hints_in_str(ppVar9,param_2,param_3);
        uVar14 = __hb_CrapPool;
        if (param_3[1] == (drop_hints_param_t)0x0) {
          if (param_3[2] != (drop_hints_param_t)0x0) {
            if (uVar6 < *(uint *)(param_1 + 0xc)) {
LAB_001022fe:
              puVar11 = (undefined *)(uVar7 * 0x10 + *(long *)(param_1 + 0x10));
            }
            else {
              puVar11 = &_hb_CrapPool;
              __hb_CrapPool = __hb_NullPool;
              _pthread_mutex_lock = uVar14;
            }
LAB_00102302:
            puVar11[0xd] = 1;
          }
        }
        else {
          uVar8 = *(uint *)(param_1 + 0xc);
          if (uVar6 < uVar8) {
LAB_0010243e:
            puVar11 = (undefined *)(uVar7 * 0x10 + *(long *)(param_1 + 0x10));
          }
          else {
            puVar11 = &_hb_CrapPool;
            __hb_CrapPool = __hb_NullPool;
            _pthread_mutex_lock = uVar14;
            uVar8 = *(uint *)(param_1 + 0xc);
          }
LAB_00102442:
          puVar11[0xd] = 1;
          if ((uVar6 + 1 < uVar8) && (*(int *)(*(long *)(param_1 + 0x10) + 8 + lVar12) != 0xb)) {
            param_3[1] = (drop_hints_param_t)0x0;
          }
        }
        goto joined_r0x00102309;
      case 0x13:
      case 0x14:
        if (*param_3 != (drop_hints_param_t)0x0) goto LAB_0010240a;
      case 1:
      case 3:
      case 0x12:
      case 0x17:
        *(undefined1 *)(lVar4 + -3 + lVar12) = 1;
        if ((*(uint *)(param_1 + 0xc) <= uVar6 + 1) ||
           (*(int *)(*(long *)(param_1 + 0x10) + 8 + lVar12) == 0xb)) {
          param_3[1] = (drop_hints_param_t)0x1;
        }
LAB_00102383:
        uVar6 = uVar6 - 1;
        if (-1 < (int)uVar6) {
          pcVar5 = (char *)(lVar4 + 0xd + (ulong)uVar6 * 0x10);
          do {
            if (*pcVar5 != '\0') break;
            *pcVar5 = '\x01';
            if (*(int *)(pcVar5 + -5) == 0xf) {
              param_3[3] = (drop_hints_param_t)0x1;
            }
            uVar6 = uVar6 - 1;
            pcVar5 = pcVar5 + -0x10;
          } while (uVar6 != 0xffffffff);
        }
        uVar10 = 1;
        break;
      case 0x1d:
        lVar2 = *(long *)(param_2 + 0x10);
        uVar1 = *(ushort *)(lVar4 + -2 + lVar12);
        param_3[1] = (drop_hints_param_t)0x0;
        if ((uint)uVar1 < *(uint *)(lVar2 + 4)) {
          ppVar9 = (parsed_cs_str_t *)(*(long *)(lVar2 + 8) + (ulong)uVar1 * 0x28);
        }
        else {
          uVar14 = __hb_CrapPool;
          uVar15 = _pthread_mutex_lock;
          uVar16 = _pthread_mutex_unlock;
          ppVar9 = (parsed_cs_str_t *)&_hb_CrapPool;
          _free = _pthread_mutex_destroy;
          __hb_CrapPool = __hb_NullPool;
          _pthread_mutex_lock = uVar14;
          _pthread_mutex_unlock = uVar15;
          _pthread_mutex_destroy = uVar16;
        }
        cVar3 = drop_hints_in_str(ppVar9,param_2,param_3);
        if (param_3[1] != (drop_hints_param_t)0x0) {
          uVar8 = *(uint *)(param_1 + 0xc);
          if (uVar6 < uVar8) goto LAB_0010243e;
          _pthread_mutex_lock = __hb_CrapPool;
          puVar11 = &_hb_CrapPool;
          uVar8 = *(uint *)(param_1 + 0xc);
          __hb_CrapPool = __hb_NullPool;
          goto LAB_00102442;
        }
        if (param_3[2] != (drop_hints_param_t)0x0) {
          if (uVar6 < *(uint *)(param_1 + 0xc)) goto LAB_001022fe;
          _pthread_mutex_lock = __hb_CrapPool;
          puVar11 = &_hb_CrapPool;
          __hb_CrapPool = __hb_NullPool;
          goto LAB_00102302;
        }
joined_r0x00102309:
        if (cVar3 != '\0') goto LAB_00102383;
switchD_0010228d_caseD_2:
      }
joined_r0x001023d0:
      lVar12 = lVar12 + 0x10;
      uVar7 = uVar7 + 1;
    } while (uVar13 != uVar7);
LAB_0010231c:
    param_3[2] = (drop_hints_param_t)0x1;
    lVar12 = uVar13 * 0x10 + lVar4;
    do {
      if (*(int *)(lVar4 + 8) == 0xb) {
        return uVar10;
      }
      if (*(char *)(lVar4 + 0xd) == '\0') {
        param_3[2] = (drop_hints_param_t)0x0;
        return uVar10;
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar12);
  }
  return uVar10;
}



/* hb_bit_set_t::resize(unsigned int, bool, bool) */

hb_bit_set_t __thiscall
hb_bit_set_t::resize(hb_bit_set_t *this,uint param_1,bool param_2,bool param_3)

{
  hb_bit_set_t hVar1;
  uint uVar2;
  void *pvVar3;
  hb_bit_set_t hVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  hVar1 = *this;
  if (hVar1 == (hb_bit_set_t)0x0) {
    return (hb_bit_set_t)0x0;
  }
  uVar5 = *(uint *)(this + 0x24);
  uVar7 = (ulong)uVar5;
  uVar2 = *(uint *)(this + 0x20);
  hVar4 = (hb_bit_set_t)(param_1 == 1 && uVar5 == 0);
  if (param_1 != 1 || uVar5 != 0) {
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    if ((int)uVar2 < 0) goto LAB_001027bc;
    hVar4 = (hb_bit_set_t)param_3;
    if (param_3) {
      uVar8 = param_1;
      if (param_1 <= uVar5) {
        uVar8 = uVar5;
      }
      if (uVar2 < uVar8) {
        if (uVar8 < 0x38e38e4) goto LAB_00102949;
      }
      else {
        if (uVar2 >> 2 <= uVar8) goto LAB_00102703;
        if (uVar8 < 0x38e38e4) {
          pvVar3 = *(void **)(this + 0x28);
          if (uVar8 != 0) goto LAB_00102950;
          free(pvVar3);
          uVar8 = 0;
          pvVar3 = (void *)0x0;
          goto LAB_0010296c;
        }
      }
    }
    else {
      uVar8 = uVar2;
      if (param_1 <= uVar2) goto LAB_00102703;
      do {
        uVar8 = (uVar8 >> 1) + 8 + uVar8;
      } while (uVar8 < param_1);
      if (uVar8 < 0x38e38e4) {
        pvVar3 = *(void **)(this + 0x28);
        goto LAB_00102950;
      }
    }
LAB_001027b7:
    *(uint *)(this + 0x20) = ~uVar2;
    goto LAB_001027bc;
  }
  if ((int)uVar2 < 0) goto LAB_001027bc;
  if (uVar2 == 0) {
    param_1 = 1;
    uVar8 = 1;
LAB_00102949:
    pvVar3 = *(void **)(this + 0x28);
    param_3 = (bool)hVar1;
LAB_00102950:
    pvVar3 = realloc(pvVar3,(ulong)uVar8 * 0x48);
    if (pvVar3 == (void *)0x0) {
      uVar2 = *(uint *)(this + 0x20);
      if (uVar2 < uVar8) goto LAB_001027b7;
    }
    else {
LAB_0010296c:
      *(void **)(this + 0x28) = pvVar3;
      *(uint *)(this + 0x20) = uVar8;
    }
    uVar7 = (ulong)*(uint *)(this + 0x24);
    hVar4 = (hb_bit_set_t)param_3;
  }
  else {
    if (7 < uVar2) {
      pvVar3 = *(void **)(this + 0x28);
      uVar8 = 1;
      param_1 = 1;
      param_3 = (bool)hVar4;
      goto LAB_00102950;
    }
    uVar7 = 0;
    param_1 = 1;
  }
LAB_00102703:
  if (((uint)uVar7 < param_1) && (param_2)) {
    uVar5 = (param_1 - (uint)uVar7) * 0x48;
    if (uVar5 != 0) {
      memset((void *)(*(long *)(this + 0x28) + uVar7 * 0x48),0,(ulong)uVar5);
    }
  }
  uVar5 = *(uint *)(this + 0x10);
  *(uint *)(this + 0x24) = param_1;
  if (-1 < (int)uVar5) {
    if (hVar4 == (hb_bit_set_t)0x0) {
      uVar2 = uVar5;
      if (uVar5 < param_1) {
        do {
          uVar2 = uVar2 + 8 + (uVar2 >> 1);
        } while (uVar2 < param_1);
        if (uVar2 < 0x20000000) {
          pvVar3 = *(void **)(this + 0x18);
          uVar7 = (ulong)uVar2;
          goto LAB_001029b4;
        }
        *(uint *)(this + 0x10) = ~uVar5;
        uVar2 = *(uint *)(this + 0x20);
        if ((int)uVar2 < 0) goto LAB_001027bc;
        uVar7 = (ulong)uVar2;
        uVar5 = 0;
        if (-1 < (int)*(uint *)(this + 0x14)) {
          uVar5 = *(uint *)(this + 0x14);
        }
        goto LAB_0010282b;
      }
    }
    else {
      uVar8 = *(uint *)(this + 0x14);
      uVar6 = (ulong)uVar8;
      uVar2 = param_1;
      if (param_1 <= uVar8) {
        uVar2 = uVar8;
      }
      uVar7 = (ulong)uVar2;
      if (uVar5 < uVar2) {
        if (0x1fffffff < uVar2) {
          *(uint *)(this + 0x10) = ~uVar5;
          uVar2 = *(uint *)(this + 0x20);
          if ((int)uVar2 < 0) goto LAB_001027bc;
          uVar6 = 0;
          if (-1 < (int)uVar8) {
            uVar6 = (ulong)uVar8;
          }
          goto LAB_001028b6;
        }
        pvVar3 = *(void **)(this + 0x18);
LAB_001029b4:
        uVar5 = (uint)uVar7;
        pvVar3 = realloc(pvVar3,uVar7 << 3);
        if (pvVar3 == (void *)0x0) {
          uVar2 = *(uint *)(this + 0x14);
          uVar6 = (ulong)uVar2;
          if (uVar5 <= *(uint *)(this + 0x10)) goto LAB_001027cf;
          *(uint *)(this + 0x10) = ~*(uint *)(this + 0x10);
          goto LAB_00102a13;
        }
      }
      else {
        if (uVar5 >> 2 <= uVar2) goto LAB_001027cf;
        pvVar3 = *(void **)(this + 0x18);
        if (uVar2 != 0) goto LAB_001029b4;
        free(pvVar3);
        uVar5 = 0;
        pvVar3 = (void *)0x0;
      }
      *(void **)(this + 0x18) = pvVar3;
      *(uint *)(this + 0x10) = uVar5;
    }
    uVar6 = (ulong)*(uint *)(this + 0x14);
LAB_001027cf:
    if (((uint)uVar6 < param_1) && (param_2)) {
      uVar5 = (param_1 - (uint)uVar6) * 8;
      if (uVar5 != 0) {
        memset((void *)(*(long *)(this + 0x18) + uVar6 * 8),0,(ulong)uVar5);
      }
    }
    *(uint *)(this + 0x14) = param_1;
    return hVar1;
  }
  uVar2 = *(uint *)(this + 0x14);
LAB_00102a13:
  uVar5 = 0;
  if (-1 < (int)uVar2) {
    uVar5 = uVar2;
  }
  uVar6 = (ulong)uVar5;
  uVar2 = *(uint *)(this + 0x20);
  if ((int)uVar2 < 0) goto LAB_001027bc;
  uVar7 = (ulong)uVar2;
  if (hVar4 == (hb_bit_set_t)0x0) {
LAB_0010282b:
    uVar6 = uVar7;
    if (uVar2 < uVar5) {
      do {
        uVar8 = (int)uVar6 + 8 + (int)(uVar6 >> 1);
        uVar6 = (ulong)uVar8;
      } while (uVar8 < uVar5);
      goto LAB_00102840;
    }
LAB_00102874:
    uVar8 = *(uint *)(this + 0x24);
  }
  else {
LAB_001028b6:
    uVar8 = *(uint *)(this + 0x24);
    uVar5 = (uint)uVar6;
    if (uVar5 <= uVar8) {
      uVar6 = (ulong)uVar8;
    }
    uVar9 = (uint)uVar6;
    if (uVar2 < uVar9) {
LAB_00102840:
      if (0x38e38e3 < (uint)uVar6) goto LAB_001027b7;
      pvVar3 = *(void **)(this + 0x28);
LAB_00102851:
      uVar8 = (uint)uVar6;
      pvVar3 = realloc(pvVar3,uVar6 * 0x48);
      if (pvVar3 == (void *)0x0) {
        uVar2 = *(uint *)(this + 0x20);
        if (uVar2 < uVar8) goto LAB_001027b7;
      }
      else {
LAB_0010286d:
        *(void **)(this + 0x28) = pvVar3;
        *(uint *)(this + 0x20) = uVar8;
      }
      goto LAB_00102874;
    }
    if (uVar9 < uVar2 >> 2) {
      if (0x38e38e3 < uVar9) goto LAB_001027b7;
      pvVar3 = *(void **)(this + 0x28);
      if (uVar9 != 0) goto LAB_00102851;
      free(pvVar3);
      uVar8 = 0;
      pvVar3 = (void *)0x0;
      goto LAB_0010286d;
    }
  }
  if ((uVar8 < uVar5) && (param_2)) {
    hb_memset((void *)(*(long *)(this + 0x28) + (ulong)uVar8 * 0x48),(uVar5 - uVar8) * 0x48,
              uVar8 * 9);
  }
  *(uint *)(this + 0x24) = uVar5;
LAB_001027bc:
  *this = (hb_bit_set_t)0x0;
  return (hb_bit_set_t)0x0;
}



/* hb_bit_set_t::next(unsigned int*) const */

undefined8 __thiscall hb_bit_set_t::next(hb_bit_set_t *this,uint *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  
  uVar3 = *param_1;
  if (uVar3 == 0xffffffff) {
    uVar3 = *(uint *)(this + 0x24);
    if (uVar3 != 0) {
      uVar8 = 0;
      do {
        piVar15 = (int *)&_hb_NullPool;
        if ((uint)uVar8 < *(uint *)(this + 0x14)) {
          piVar15 = (int *)(*(long *)(this + 0x18) + uVar8 * 8);
        }
        piVar11 = (int *)&_hb_NullPool;
        if ((uint)piVar15[1] < uVar3) {
          piVar11 = (int *)(*(long *)(this + 0x28) + (ulong)(uint)piVar15[1] * 0x48);
        }
        if (*piVar11 == -1) {
          plVar6 = (long *)(piVar11 + 2);
          do {
            if (*plVar6 != 0) goto LAB_00102c7f;
            plVar6 = plVar6 + 1;
          } while (plVar6 != (long *)(piVar11 + 0x12));
        }
        else if (*piVar11 != 0) {
LAB_00102c7f:
          uVar8 = 0;
          goto LAB_00102c87;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    uVar7 = 0;
    uVar3 = 0xffffffff;
LAB_00102d1a:
    *param_1 = uVar3;
    return uVar7;
  }
  lVar5 = *(long *)(this + 0x18);
  uVar9 = *(uint *)(this + 8);
  uVar2 = *(uint *)(this + 0x14);
  uVar16 = uVar3 >> 9;
  if (uVar9 < uVar2) {
    puVar13 = (uint *)(lVar5 + (ulong)uVar9 * 8);
    if (*puVar13 != uVar16) {
      if (-1 < (int)(uVar2 - 1)) goto LAB_00102cb1;
      uVar9 = 0;
      goto LAB_00102ce4;
    }
    lVar14 = *(long *)(this + 0x28);
LAB_00102b0a:
    uVar2 = uVar3 + 1 & 0x1ff;
    if (uVar2 != 0) {
      uVar4 = (ulong)(uVar2 >> 6);
      lVar1 = lVar14 + (ulong)puVar13[1] * 0x48;
      uVar8 = -(1L << ((byte)(uVar3 + 1) & 0x3f)) & *(ulong *)(lVar1 + 8 + uVar4 * 8);
      while( true ) {
        if (uVar8 != 0) {
          iVar12 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            iVar12 = iVar12 + 1;
          }
          uVar3 = (int)uVar4 * 0x40 + iVar12;
          *param_1 = uVar3;
          *param_1 = uVar3 + *puVar13 * 0x200;
          return 1;
        }
        uVar4 = uVar4 + 1;
        if ((int)uVar4 == 8) break;
        uVar8 = *(ulong *)(lVar1 + 8 + uVar4 * 8);
      }
    }
    *param_1 = 0xffffffff;
    uVar9 = uVar9 + 1;
  }
  else {
    if ((int)(uVar2 - 1) < 0) {
      uVar9 = 0;
    }
    else {
LAB_00102cb1:
      iVar12 = uVar2 - 1;
      uVar9 = 0;
      do {
        while( true ) {
          uVar10 = iVar12 + uVar9 >> 1;
          uVar3 = *(uint *)(lVar5 + (ulong)uVar10 * 8);
          if ((int)(uVar16 - uVar3) < 0) break;
          uVar9 = uVar10;
          if ((uVar16 == uVar3) || (uVar9 = uVar10 + 1, iVar12 < (int)uVar9)) goto LAB_00102cdb;
        }
        iVar12 = uVar10 - 1;
      } while ((int)uVar9 <= iVar12);
    }
LAB_00102cdb:
    if (uVar2 <= uVar9) goto LAB_00102bc8;
LAB_00102ce4:
    *(uint *)(this + 8) = uVar9;
    puVar13 = (uint *)(lVar5 + (ulong)uVar9 * 8);
    lVar14 = *(long *)(this + 0x28);
    if (*puVar13 == uVar16) {
      uVar3 = *param_1;
      goto LAB_00102b0a;
    }
  }
  if (uVar9 < *(uint *)(this + 0x14)) {
    piVar15 = (int *)(lVar5 + (ulong)uVar9 * 8);
    do {
      lVar5 = 0;
      do {
        uVar8 = *(ulong *)(lVar14 + (ulong)(uint)piVar15[1] * 0x48 + 8 + lVar5 * 8);
        if (uVar8 != 0) {
          iVar12 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
            iVar12 = iVar12 + 1;
          }
          *param_1 = (int)lVar5 * 0x40 + *piVar15 * 0x200 + iVar12;
          *(uint *)(this + 8) = uVar9;
          return 1;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 8);
      uVar9 = uVar9 + 1;
      piVar15 = piVar15 + 2;
    } while (uVar9 != *(uint *)(this + 0x14));
  }
LAB_00102bc8:
  *param_1 = 0xffffffff;
  return 0;
LAB_00102c87:
  uVar4 = *(ulong *)(piVar11 + uVar8 * 2 + 2);
  if (uVar4 != 0) {
    iVar12 = 0;
    for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
      iVar12 = iVar12 + 1;
    }
    uVar3 = (int)uVar8 * 0x40;
    uVar8 = (ulong)uVar3;
    iVar12 = uVar3 + iVar12;
LAB_00102c9f:
    uVar3 = iVar12 + *piVar15 * 0x200;
    uVar7 = CONCAT71((int7)(uVar8 >> 8),uVar3 != 0xffffffff);
    goto LAB_00102d1a;
  }
  uVar8 = uVar8 + 1;
  iVar12 = -1;
  if (uVar8 == 8) goto LAB_00102c9f;
  goto LAB_00102c87;
}



/* hb_bit_set_t::page_for(unsigned int, bool) */

long __thiscall hb_bit_set_t::page_for(hb_bit_set_t *this,uint param_1,bool param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  
  uVar9 = param_1 >> 9;
  if ((*(uint *)(this + 8) < *(uint *)(this + 0x14)) &&
     (puVar1 = (uint *)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 8) * 8), *puVar1 == uVar9))
  {
    return *(long *)(this + 0x28) + (ulong)puVar1[1] * 0x48;
  }
  uVar4 = *(uint *)(this + 0x24);
  iVar10 = *(uint *)(this + 0x14) - 1;
  if (iVar10 < 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      while( true ) {
        uVar7 = iVar10 + uVar8 >> 1;
        lVar11 = (ulong)uVar7 * 8;
        uVar3 = *(uint *)(*(long *)(this + 0x18) + (ulong)uVar7 * 8);
        if (-1 < (int)(uVar9 - uVar3)) break;
        iVar10 = uVar7 - 1;
        if (iVar10 < (int)uVar8) goto LAB_00102dbc;
      }
      if (uVar9 == uVar3) goto LAB_00102e55;
      uVar8 = uVar7 + 1;
    } while ((int)uVar8 <= iVar10);
  }
LAB_00102dbc:
  if (param_2) {
    cVar6 = resize(this,uVar4 + 1,true,false);
    if (cVar6 != '\0') {
      lVar11 = (ulong)uVar8 * 8;
      puVar2 = (undefined4 *)(*(long *)(this + 0x28) + (ulong)uVar4 * 0x48);
      *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 6) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar2 + 0xe) = (undefined1  [16])0x0;
      lVar5 = *(long *)(this + 0x18);
      *puVar2 = 0;
      memmove((void *)(lVar5 + 8 + lVar11),(void *)(lVar5 + lVar11),
              (ulong)((~uVar8 + *(int *)(this + 0x14)) * 8));
      *(ulong *)(*(long *)(this + 0x18) + (ulong)uVar8 * 8) = CONCAT44(uVar4,uVar9);
      uVar7 = uVar8;
LAB_00102e55:
      *(uint *)(this + 8) = uVar7;
      return *(long *)(this + 0x28) + (ulong)*(uint *)(*(long *)(this + 0x18) + 4 + lVar11) * 0x48;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::subr_subsetter_t<cff2_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned int, 4u> >,
   OT::cff2::accelerator_subset_t const, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,
   cff2_cs_opset_subr_subset_t, 65535u>::collect_subr_refs_in_subr(unsigned int,
   CFF::parsed_cs_str_vec_t&, hb_set_t*, CFF::subr_subset_param_t const&) [clone .isra.0] */

void CFF::
     subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
     ::collect_subr_refs_in_subr
               (uint param_1,parsed_cs_str_vec_t *param_2,hb_set_t *param_3,
               subr_subset_param_t *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar3 = param_1 >> 9;
  if ((*(uint *)(param_3 + 0x18) < *(uint *)(param_3 + 0x24)) &&
     (puVar1 = (uint *)(*(long *)(param_3 + 0x28) + (ulong)*(uint *)(param_3 + 0x18) * 8),
     uVar3 == *puVar1)) {
    lVar7 = *(long *)(param_3 + 0x38) + (ulong)puVar1[1] * 0x48;
LAB_00102fe5:
    if (lVar7 == 0) goto LAB_00102f31;
    uVar11 = 1L << ((byte)param_1 & 0x3f);
    uVar12 = (ulong)(param_1 >> 6 & 7);
    if (param_3[0x40] != (hb_set_t)((uVar11 & *(ulong *)(lVar7 + 8 + uVar12 * 8)) != 0)) {
      return;
    }
    if (param_3[0x40] == (hb_set_t)0x0) goto LAB_00102f3b;
    if ((param_3[0x10] != (hb_set_t)0x0) &&
       (puVar5 = (undefined4 *)
                 hb_bit_set_t::page_for((hb_bit_set_t *)(param_3 + 0x10),param_1,false),
       puVar5 != (undefined4 *)0x0)) {
      *(undefined4 *)(param_3 + 0x14) = 0xffffffff;
      *(ulong *)(puVar5 + uVar12 * 2 + 2) = *(ulong *)(puVar5 + uVar12 * 2 + 2) & ~uVar11;
      *puVar5 = 0xffffffff;
    }
LAB_00102f83:
    if (param_1 < *(uint *)(param_2 + 4)) {
      puVar6 = (undefined *)(*(long *)(param_2 + 8) + (ulong)param_1 * 0x28);
      goto LAB_00102f9a;
    }
  }
  else {
    iVar9 = *(uint *)(param_3 + 0x24) - 1;
    if (-1 < iVar9) {
      iVar10 = 0;
      do {
        while( true ) {
          uVar4 = (uint)(iVar10 + iVar9) >> 1;
          uVar2 = *(uint *)(*(long *)(param_3 + 0x28) + (ulong)uVar4 * 8);
          if (-1 < (int)(uVar3 - uVar2)) break;
          iVar9 = uVar4 - 1;
          if (iVar9 < iVar10) goto LAB_00102f31;
        }
        if (uVar3 == uVar2) {
          *(uint *)(param_3 + 0x18) = uVar4;
          puVar6 = &_hb_NullPool;
          if (uVar4 < *(uint *)(param_3 + 0x24)) {
            puVar6 = (undefined *)(*(long *)(param_3 + 0x28) + (ulong)uVar4 * 8);
          }
          lVar7 = *(long *)(param_3 + 0x38) + (ulong)*(uint *)(puVar6 + 4) * 0x48;
          goto LAB_00102fe5;
        }
        iVar10 = uVar4 + 1;
      } while (iVar10 <= iVar9);
    }
LAB_00102f31:
    if (param_3[0x40] != (hb_set_t)0x0) {
      return;
    }
LAB_00102f3b:
    if (param_3[0x10] == (hb_set_t)0x0) goto LAB_00102f83;
    if (param_1 != 0xffffffff) {
      *(undefined4 *)(param_3 + 0x14) = 0xffffffff;
      puVar5 = (undefined4 *)hb_bit_set_t::page_for((hb_bit_set_t *)(param_3 + 0x10),param_1,true);
      if (puVar5 != (undefined4 *)0x0) {
        *(ulong *)(puVar5 + (ulong)(param_1 >> 6 & 7) * 2 + 2) =
             *(ulong *)(puVar5 + (ulong)(param_1 >> 6 & 7) * 2 + 2) | 1L << ((byte)param_1 & 0x3f);
        *puVar5 = 0xffffffff;
      }
      goto LAB_00102f83;
    }
  }
  _free = _pthread_mutex_destroy;
  uVar13 = __hb_CrapPool;
  uVar14 = _pthread_mutex_lock;
  _pthread_mutex_destroy = _pthread_mutex_unlock;
  puVar6 = &_hb_CrapPool;
  __hb_CrapPool = __hb_NullPool;
  _pthread_mutex_lock = uVar13;
  _pthread_mutex_unlock = uVar14;
LAB_00102f9a:
  if ((puVar6[0x18] & 0x10) != 0) {
    lVar7 = *(long *)(puVar6 + 0x10);
    lVar8 = (ulong)*(uint *)(puVar6 + 0xc) * 0x10 + lVar7;
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x10) {
      if ((param_4[0x30] == (subr_subset_param_t)0x0) || (*(char *)(lVar7 + 0xd) == '\0')) {
        if (*(int *)(lVar7 + 8) == 10) {
          collect_subr_refs_in_subr
                    ((uint)*(ushort *)(lVar7 + 0xe),*(parsed_cs_str_vec_t **)(param_4 + 0x18),
                     *(hb_set_t **)(param_4 + 0x28),param_4);
        }
        else if (*(int *)(lVar7 + 8) == 0x1d) {
          collect_subr_refs_in_subr
                    ((uint)*(ushort *)(lVar7 + 0xe),*(parsed_cs_str_vec_t **)(param_4 + 0x10),
                     *(hb_set_t **)(param_4 + 0x20),param_4);
        }
      }
    }
  }
  return;
}



/* hb_serialize_context_t::pop_discard() */

void __thiscall hb_serialize_context_t::pop_discard(hb_serialize_context_t *this)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  void *__s2;
  void *__s2_00;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  
  plVar5 = *(long **)(this + 0x48);
  if (plVar5 != (long *)0x0) {
    uVar10 = *(uint *)(this + 0x2c);
    if (uVar10 == 0) {
      lVar2 = plVar5[1];
      *(long *)(this + 0x48) = plVar5[6];
      lVar11 = *(long *)(this + 0x20);
      if (lVar11 == 0) {
        lVar11 = *plVar5;
      }
      uVar10 = *(uint *)(this + 0x54);
      *(long *)(this + 8) = lVar11;
      *(long *)(this + 0x10) = lVar2;
      while (1 < uVar10) {
        plVar1 = (long *)(*(long *)(this + 0x58) + (ulong)(uVar10 - 1) * 8);
        puVar19 = (undefined8 *)*plVar1;
        __s2 = (void *)*puVar19;
        if (*(void **)(this + 0x10) <= __s2) break;
        lVar2 = *(long *)(this + 0x88);
        if (lVar2 == 0) {
LAB_0010339a:
          iVar4 = *(int *)(puVar19 + 2);
        }
        else {
          uVar16 = puVar19[1] - (long)__s2;
          uVar12 = 0x80;
          if ((long)uVar16 < 0x81) {
            uVar12 = uVar16;
          }
          uVar12 = fasthash64(__s2,uVar12 & 0xffffffff,(ulong)(uVar10 - 1));
          __s2_00 = (void *)puVar19[3];
          iVar4 = *(int *)((long)puVar19 + 0x14);
          uVar7 = iVar4 * 0xc;
          uVar13 = fasthash64(__s2_00,(ulong)uVar7,uVar12 >> 0x20);
          uVar10 = *(uint *)(this + 0x7c);
          uVar17 = ((int)uVar13 - (int)((ulong)uVar13 >> 0x20) ^ (int)uVar12 - (int)(uVar12 >> 0x20)
                   ) & 0x3fffffff;
          uVar12 = (ulong)uVar17 % (ulong)*(uint *)(this + 0x80);
          plVar15 = (long *)(lVar2 + uVar12 * 0x10);
          bVar3 = *(byte *)(plVar15 + 1);
          if ((bVar3 & 2) == 0) goto LAB_0010339a;
          iVar18 = 0;
          do {
            if (uVar17 == *(uint *)(plVar15 + 1) >> 2) {
              puVar6 = (undefined8 *)*plVar15;
              if (((((uVar16 == puVar6[1] - (long)*puVar6) &&
                    (iVar9 = *(int *)((long)puVar6 + 0x14), iVar4 == iVar9)) &&
                   (((int)uVar16 == 0 ||
                    (iVar8 = memcmp((void *)*puVar6,__s2,uVar16 & 0xffffffff), iVar8 == 0)))) &&
                  (uVar7 == iVar9 * 0xc)) &&
                 ((uVar7 == 0 ||
                  (iVar9 = memcmp((void *)puVar6[3],__s2_00,(ulong)uVar7), iVar9 == 0)))) {
                if ((bVar3 & 1) != 0) {
                  *(byte *)(plVar15 + 1) = *(byte *)(plVar15 + 1) & 0xfe;
                  puVar19 = (undefined8 *)*plVar1;
                  *(int *)(this + 0x74) = *(int *)(this + 0x74) + -1;
                }
                goto LAB_0010339a;
              }
            }
            iVar18 = iVar18 + 1;
            uVar14 = (int)uVar12 + iVar18 & uVar10;
            uVar12 = (ulong)uVar14;
            plVar15 = (long *)((ulong)uVar14 * 0x10 + lVar2);
            bVar3 = *(byte *)(plVar15 + 1);
          } while ((bVar3 & 2) != 0);
          iVar4 = *(int *)(puVar19 + 2);
        }
        if (iVar4 != 0) {
          free((void *)puVar19[3]);
        }
        puVar19[2] = 0;
        puVar19[3] = 0;
        if (*(int *)(puVar19 + 4) != 0) {
          free((void *)puVar19[5]);
        }
        puVar19[4] = 0;
        iVar4 = *(int *)(this + 0x54);
        puVar19[5] = 0;
        if (iVar4 == 0) break;
        uVar10 = iVar4 - 1;
        *(uint *)(this + 0x54) = uVar10;
      }
    }
    else {
      if (0x10 < uVar10) {
        return;
      }
      if ((0x10104UL >> ((ulong)uVar10 & 0x3f) & 1) == 0) {
        return;
      }
      *(long *)(this + 0x48) = plVar5[6];
    }
    lVar2 = plVar5[2];
    *(undefined8 *)(this + 0x20) = 0;
    if ((int)lVar2 != 0) {
      free((void *)plVar5[3]);
    }
    plVar5[2] = 0;
    plVar5[3] = 0;
    if ((int)plVar5[4] != 0) {
      free((void *)plVar5[5]);
    }
    plVar5[4] = 0;
    lVar2 = *(long *)(this + 0x30);
    plVar5[5] = 0;
    *plVar5 = lVar2;
    *(long **)(this + 0x30) = plVar5;
  }
  return;
}



/* OT::ItemVariationStore::get_region_scalars(unsigned int, int const*, unsigned int, float*,
   unsigned int) const */

void __thiscall
OT::ItemVariationStore::get_region_scalars
          (ItemVariationStore *this,uint param_1,int *param_2,uint param_3,float *param_4,
          uint param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  int iVar7;
  ItemVariationStore *pIVar8;
  ItemVariationStore *pIVar9;
  int iVar10;
  ItemVariationStore *pIVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  ushort uVar15;
  float fVar16;
  float fVar17;
  
  pIVar8 = (ItemVariationStore *)&_hb_NullPool;
  if (param_1 < (ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8)) {
    pIVar8 = this + (ulong)param_1 * 4 + 8;
  }
  uVar3 = *(uint *)pIVar8;
  pIVar8 = (ItemVariationStore *)&_hb_NullPool;
  if (uVar3 != 0) {
    pIVar8 = this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    );
  }
  uVar3 = *(uint *)(this + 2);
  pIVar11 = (ItemVariationStore *)&_hb_NullPool;
  if (uVar3 != 0) {
    pIVar11 = this + (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                     uVar3 << 0x18);
  }
  uVar3 = (uint)(ushort)(*(ushort *)(pIVar8 + 4) << 8 | *(ushort *)(pIVar8 + 4) >> 8);
  if (param_5 < uVar3) {
    uVar3 = param_5;
  }
  if (uVar3 != 0) {
    uVar1 = *(ushort *)(pIVar11 + 2);
    lVar14 = 0;
    do {
      uVar4 = (uint)(ushort)(*(ushort *)(pIVar8 + lVar14 + 6) << 8 |
                            *(ushort *)(pIVar8 + lVar14 + 6) >> 8);
      if (uVar4 < (ushort)(uVar1 << 8 | uVar1 >> 8)) {
        uVar15 = *(ushort *)pIVar11 << 8 | *(ushort *)pIVar11 >> 8;
        fVar17 = _LC0;
        if (uVar15 != 0) {
          pIVar9 = pIVar11 + (ulong)(uVar4 * uVar15) * 6 + 4;
          lVar5 = 0;
          do {
            uVar6 = *(ushort *)(pIVar9 + 2);
            if ((uint)lVar5 < param_3) {
              iVar2 = param_2[lVar5];
              iVar10 = (int)(short)(uVar6 << 8 | uVar6 >> 8);
              if ((uVar6 != 0) && (iVar2 != iVar10)) {
                if (iVar2 == 0) goto LAB_00103680;
                uVar6 = *(ushort *)pIVar9 << 8 | *(ushort *)pIVar9 >> 8;
                uVar12 = *(ushort *)(pIVar9 + 4) << 8 | *(ushort *)(pIVar9 + 4) >> 8;
                iVar7 = (int)(short)uVar6;
                iVar13 = (int)(short)uVar12;
                if (((iVar7 <= iVar10) && (iVar10 <= iVar13)) &&
                   ((-1 < (short)uVar6 || ((short)uVar12 < 1)))) {
                  if ((iVar2 <= iVar7) || (iVar13 <= iVar2)) goto LAB_00103680;
                  if (iVar2 < iVar10) {
                    fVar16 = (float)(iVar2 - iVar7) / (float)(iVar10 - iVar7);
                  }
                  else {
                    fVar16 = (float)(iVar13 - iVar2) / (float)(iVar13 - iVar10);
                  }
                  if (fVar16 == 0.0) goto LAB_00103680;
                  fVar17 = fVar17 * fVar16;
                }
              }
            }
            else if (uVar6 != 0) goto LAB_00103680;
            lVar5 = lVar5 + 1;
            pIVar9 = pIVar9 + 6;
          } while ((uint)lVar5 < (uint)uVar15);
        }
      }
      else {
LAB_00103680:
        fVar17 = 0.0;
      }
      *(float *)((long)param_4 + lVar14 * 2) = fVar17;
      lVar14 = lVar14 + 2;
    } while ((ulong)uVar3 * 2 != lVar14);
  }
  if (uVar3 < param_5) {
    memset(param_4 + uVar3,0,(ulong)((param_5 - 1) - uVar3) * 4 + 4);
    return;
  }
  return;
}



/* CFF::CFF2FDSelect::get_fd(unsigned int) const */

ushort __thiscall CFF::CFF2FDSelect::get_fd(CFF2FDSelect *this,uint param_1)

{
  CFF2FDSelect CVar1;
  uint uVar2;
  uint uVar3;
  CFF2FDSelect *pCVar4;
  CFF2FDSelect *pCVar5;
  int iVar6;
  int iVar7;
  
  pCVar4 = (CFF2FDSelect *)&_hb_NullPool;
  if (this != (CFF2FDSelect *)&_hb_NullPool) {
    CVar1 = *this;
    if (CVar1 == (CFF2FDSelect)0x3) {
      pCVar4 = (CFF2FDSelect *)&_hb_NullPool;
      if (*(short *)(this + 1) != 0) {
        pCVar4 = this + 3;
      }
      iVar6 = (ushort)(*(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8) - 2;
      if (-1 < iVar6) {
        iVar7 = 0;
        do {
          while( true ) {
            uVar3 = (uint)(iVar7 + iVar6) >> 1;
            pCVar5 = pCVar4 + (ulong)uVar3 * 3;
            if ((ushort)(*(ushort *)pCVar5 << 8 | *(ushort *)pCVar5 >> 8) <= param_1) break;
            iVar6 = uVar3 - 1;
            if (iVar6 < iVar7) goto LAB_0010384e;
          }
          if (param_1 < (ushort)(*(ushort *)(pCVar5 + 3) << 8 | *(ushort *)(pCVar5 + 3) >> 8))
          goto LAB_0010387a;
          iVar7 = uVar3 + 1;
        } while (iVar7 <= iVar6);
      }
LAB_0010384e:
      pCVar5 = (CFF2FDSelect *)&_hb_NullPool;
      uVar3 = (ushort)(*(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8) - 1;
      if (uVar3 < (ushort)(*(ushort *)(this + 1) << 8 | *(ushort *)(this + 1) >> 8)) {
        pCVar5 = this + (ulong)uVar3 * 3 + 3;
      }
LAB_0010387a:
      return (ushort)(byte)pCVar5[2];
    }
    if (CVar1 == (CFF2FDSelect)0x4) {
      uVar3 = *(uint *)(this + 1);
      if (*(int *)(this + 1) != 0) {
        pCVar4 = this + 5;
      }
      iVar6 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) - 2;
      if (-1 < iVar6) {
        iVar7 = 0;
        do {
          while( true ) {
            uVar2 = (uint)(iVar7 + iVar6) >> 1;
            pCVar5 = pCVar4 + (ulong)uVar2 * 6;
            uVar3 = *(uint *)pCVar5;
            if ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) <=
                param_1) break;
            iVar6 = uVar2 - 1;
            if (iVar6 < iVar7) goto LAB_001037a5;
          }
          uVar3 = *(uint *)(pCVar5 + 6);
          if (param_1 < (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18)) goto LAB_001037c1;
          iVar7 = uVar2 + 1;
        } while (iVar7 <= iVar6);
      }
LAB_001037a5:
      uVar3 = *(uint *)(this + 1);
      pCVar5 = (CFF2FDSelect *)&_hb_NullPool;
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      if (uVar3 != 0) {
        pCVar5 = this + (ulong)(uVar3 - 1) * 6 + 5;
      }
LAB_001037c1:
      return *(ushort *)(pCVar5 + 4) << 8 | *(ushort *)(pCVar5 + 4) >> 8;
    }
    if (CVar1 == (CFF2FDSelect)0x0) {
      return (ushort)(byte)this[(ulong)param_1 + 1];
    }
  }
  return 0;
}



/* CFF::subr_subsetter_t<cff2_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned int, 4u> >,
   OT::cff2::accelerator_subset_t const, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,
   cff2_cs_opset_subr_subset_t, 65535u>::~subr_subsetter_t() */

void __thiscall
CFF::
subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
::~subr_subsetter_t(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                    *this)

{
  int *piVar1;
  hb_hashmap_t *phVar2;
  hb_hashmap_t *phVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  hb_hashmap_t *phVar8;
  void *pvVar9;
  int *piVar10;
  long lVar11;
  
  if (*(int *)(this + 0x100) == 0) {
    iVar4 = *(int *)(this + 0xf0);
  }
  else {
    uVar5 = *(uint *)(this + 0x104);
    pvVar9 = *(void **)(this + 0x108);
    piVar10 = (int *)((long)pvVar9 + (ulong)uVar5 * 0x10 + -0x10);
    if (uVar5 != 0) {
      piVar1 = piVar10 + (ulong)(uVar5 - 1) * -4 + -4;
      do {
        while (*piVar10 == 0) {
          piVar10 = piVar10 + -4;
          if (piVar1 == piVar10) goto LAB_00103a11;
        }
        uVar5 = piVar10[1];
        pvVar9 = *(void **)(piVar10 + 2);
        lVar6 = (long)pvVar9 + (ulong)uVar5 * 0x28 + -0x28;
        if (uVar5 != 0) {
          lVar11 = ((ulong)(uVar5 - 1) + 1) * -0x28 + lVar6;
          do {
            while (lVar7 = lVar6 + -0x28, *(int *)(lVar6 + 8) == 0) {
              lVar6 = lVar7;
              if (lVar7 == lVar11) goto LAB_001039fe;
            }
            free(*(void **)(lVar6 + 0x10));
            lVar6 = lVar7;
          } while (lVar7 != lVar11);
LAB_001039fe:
          pvVar9 = *(void **)(piVar10 + 2);
        }
        free(pvVar9);
        piVar10 = piVar10 + -4;
      } while (piVar1 != piVar10);
LAB_00103a11:
      pvVar9 = *(void **)(this + 0x108);
    }
    free(pvVar9);
    iVar4 = *(int *)(this + 0xf0);
  }
  if (iVar4 == 0) {
    iVar4 = *(int *)(this + 0xe0);
  }
  else {
    uVar5 = *(uint *)(this + 0xf4);
    pvVar9 = *(void **)(this + 0xf8);
    lVar6 = (long)pvVar9 + (ulong)uVar5 * 0x28 + -0x28;
    if (uVar5 != 0) {
      lVar11 = ((ulong)(uVar5 - 1) + 1) * -0x28 + lVar6;
      do {
        while (lVar7 = lVar6 + -0x28, *(int *)(lVar6 + 8) == 0) {
          lVar6 = lVar7;
          if (lVar7 == lVar11) goto LAB_00103a7e;
        }
        free(*(void **)(lVar6 + 0x10));
        lVar6 = lVar7;
      } while (lVar7 != lVar11);
LAB_00103a7e:
      pvVar9 = *(void **)(this + 0xf8);
    }
    free(pvVar9);
    iVar4 = *(int *)(this + 0xe0);
  }
  if (iVar4 == 0) {
    iVar4 = *(int *)(this + 0xd0);
  }
  else {
    uVar5 = *(uint *)(this + 0xe4);
    pvVar9 = *(void **)(this + 0xe8);
    lVar6 = (long)pvVar9 + (ulong)uVar5 * 0x28 + -0x28;
    if (uVar5 != 0) {
      lVar11 = ((ulong)(uVar5 - 1) + 1) * -0x28 + lVar6;
      do {
        while (lVar7 = lVar6 + -0x28, *(int *)(lVar6 + 8) == 0) {
          lVar6 = lVar7;
          if (lVar7 == lVar11) goto LAB_00103aee;
        }
        free(*(void **)(lVar6 + 0x10));
        lVar6 = lVar7;
      } while (lVar7 != lVar11);
LAB_00103aee:
      pvVar9 = *(void **)(this + 0xe8);
    }
    free(pvVar9);
    iVar4 = *(int *)(this + 0xd0);
  }
  if (iVar4 != 0) {
    uVar5 = *(uint *)(this + 0xd4);
    pvVar9 = *(void **)(this + 0xd8);
    phVar8 = (hb_hashmap_t *)((long)pvVar9 + (ulong)uVar5 * 0x48 + -0x48);
    if (uVar5 != 0) {
      phVar2 = phVar8 + (ulong)(uVar5 - 1) * -0x48 + -0x48;
      do {
        if (*(int *)(phVar8 + 0x30) != 0) {
          free(*(void **)(phVar8 + 0x38));
        }
        hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(phVar8);
        if (*(void **)(phVar8 + 0x28) != (void *)0x0) {
          free(*(void **)(phVar8 + 0x28));
        }
        phVar8 = phVar8 + -0x48;
      } while (phVar8 != phVar2);
      pvVar9 = *(void **)(this + 0xd8);
    }
    free(pvVar9);
  }
  if (*(int *)(this + 0xb8) != 0) {
    free(*(void **)(this + 0xc0));
  }
  hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>((hb_hashmap_t *)(this + 0x88));
  if (*(void **)(this + 0xb0) != (void *)0x0) {
    free(*(void **)(this + 0xb0));
  }
  if (*(int *)(this + 0x68) != 0) {
    free(*(void **)(this + 0x70));
  }
  if (*(int *)(this + 0x58) != 0) {
    uVar5 = *(uint *)(this + 0x5c);
    pvVar9 = *(void **)(this + 0x60);
    phVar8 = (hb_hashmap_t *)((long)pvVar9 + (ulong)uVar5 * 0x48 + -0x48);
    if (uVar5 != 0) {
      phVar2 = phVar8 + (ulong)(uVar5 - 1) * -0x48 + -0x48;
      do {
        while( true ) {
          hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(phVar8);
          if (*(int *)(phVar8 + 0x20) != 0) {
            free(*(void **)(phVar8 + 0x28));
          }
          *(undefined4 *)(phVar8 + 0x20) = 0;
          *(undefined8 *)(phVar8 + 0x28) = 0;
          if ((*(int *)(phVar8 + 0x30) != 0) &&
             (free(*(void **)(phVar8 + 0x38)), *(int *)(phVar8 + 0x20) != 0)) break;
          phVar8 = phVar8 + -0x48;
          if (phVar2 == phVar8) goto LAB_00103c52;
        }
        phVar3 = phVar8 + 0x28;
        phVar8 = phVar8 + -0x48;
        free(*(void **)phVar3);
      } while (phVar2 != phVar8);
LAB_00103c52:
      pvVar9 = *(void **)(this + 0x60);
    }
    free(pvVar9);
  }
  hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>((hb_hashmap_t *)(this + 0x10));
  if (*(int *)(this + 0x30) != 0) {
    free(*(void **)(this + 0x38));
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if ((*(int *)(this + 0x40) != 0) && (free(*(void **)(this + 0x48)), *(int *)(this + 0x30) != 0)) {
    free(*(void **)(this + 0x38));
    return;
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cff2_private_dict_blend_opset_t::process_blend(CFF::cff2_priv_dict_interp_env_t&,
   cff2_private_blend_encoder_param_t&) */

void cff2_private_dict_blend_opset_t::process_blend
               (cff2_priv_dict_interp_env_t *param_1,cff2_private_blend_encoder_param_t *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *extraout_RDX;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ItemVariationStore *this;
  float *pfVar16;
  cff2_priv_dict_interp_env_t *pcVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  
  if (param_2[8] != (cff2_private_blend_encoder_param_t)0x0) {
    uVar10 = *(uint *)(param_1 + 0x14);
    uVar13 = *(uint *)(param_2 + 0x10);
    goto joined_r0x00103f3c;
  }
  lVar5 = *(long *)(param_2 + 0x28);
  puVar15 = (uint *)&_hb_NullPool;
  if (*(uint *)(param_2 + 0xc) <
      (uint)(ushort)(*(ushort *)(lVar5 + 8) << 8 | *(ushort *)(lVar5 + 8) >> 8)) {
    puVar15 = (uint *)(lVar5 + 10 + (ulong)*(uint *)(param_2 + 0xc) * 4);
  }
  uVar10 = *puVar15;
  puVar11 = &_hb_NullPool;
  if (uVar10 != 0) {
    puVar11 = (undefined *)
              (lVar5 + 2 +
              (ulong)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                     uVar10 << 0x18));
  }
  uVar10 = *(uint *)(param_2 + 0x18);
  uVar14 = *(uint *)(param_2 + 0x1c);
  uVar8 = (ulong)uVar14;
  uVar12 = *(ushort *)(puVar11 + 4) << 8 | *(ushort *)(puVar11 + 4) >> 8;
  uVar13 = (uint)uVar12;
  *(uint *)(param_2 + 0x10) = uVar13;
  if ((int)uVar10 < 0) {
LAB_00103f90:
    this = (ItemVariationStore *)(*(long *)(param_2 + 0x28) + 2);
    if (uVar14 != 0) goto LAB_00103f1c;
LAB_00103ff3:
    pfVar16 = (float *)&_hb_CrapPool;
    __hb_CrapPool = (double)CONCAT44(_DAT_0011001c,__hb_NullPool);
  }
  else {
    uVar13 = (uint)uVar12;
    uVar18 = (uint)uVar12;
    if (uVar13 < uVar14) {
      if (uVar14 <= uVar10) {
        if (uVar14 < uVar10 >> 2) goto LAB_00104034;
LAB_00103f89:
        *(uint *)(param_2 + 0x1c) = uVar18;
        uVar13 = *(uint *)(param_2 + 0x10);
        uVar14 = (uint)uVar12;
        goto LAB_00103f90;
      }
      if (uVar14 < 0x40000000) {
LAB_00104034:
        pvVar9 = *(void **)(param_2 + 0x20);
        goto LAB_00103ece;
      }
      *(uint *)(param_2 + 0x18) = ~uVar10;
      this = (ItemVariationStore *)(*(long *)(param_2 + 0x28) + 2);
    }
    else {
      if (uVar13 <= uVar10) {
        if (uVar10 >> 2 <= uVar13) goto LAB_00103eef;
        pvVar9 = *(void **)(param_2 + 0x20);
        if (uVar18 != 0) {
          uVar8 = (ulong)uVar18;
          goto LAB_00103ece;
        }
        free(pvVar9);
        uVar13 = *(uint *)(param_2 + 0x10);
        *(undefined8 *)(param_2 + 0x18) = 0;
        *(undefined8 *)(param_2 + 0x20) = 0;
        this = (ItemVariationStore *)(*(long *)(param_2 + 0x28) + 2);
        goto LAB_00103ff3;
      }
      pvVar9 = *(void **)(param_2 + 0x20);
      uVar8 = (ulong)uVar18;
LAB_00103ece:
      pvVar9 = realloc(pvVar9,uVar8 << 2);
      if (pvVar9 == (void *)0x0) {
        if (*(uint *)(param_2 + 0x18) < (uint)uVar8) {
          uVar13 = *(uint *)(param_2 + 0x10);
          uVar14 = *(uint *)(param_2 + 0x1c);
          *(uint *)(param_2 + 0x18) = ~*(uint *)(param_2 + 0x18);
          goto LAB_00103f90;
        }
      }
      else {
        *(void **)(param_2 + 0x20) = pvVar9;
        *(uint *)(param_2 + 0x18) = (uint)uVar8;
      }
      uVar8 = (ulong)*(uint *)(param_2 + 0x1c);
      puVar11 = extraout_RDX;
LAB_00103eef:
      if (uVar18 <= (uint)uVar8) goto LAB_00103f89;
      hb_memset((void *)(*(long *)(param_2 + 0x20) + uVar8 * 4),(uVar18 - (uint)uVar8) * 4,
                (uint)puVar11);
      uVar13 = *(uint *)(param_2 + 0x10);
      *(uint *)(param_2 + 0x1c) = uVar18;
      this = (ItemVariationStore *)(*(long *)(param_2 + 0x28) + 2);
    }
LAB_00103f1c:
    pfVar16 = *(float **)(param_2 + 0x20);
  }
  OT::ItemVariationStore::get_region_scalars
            (this,*(uint *)(param_2 + 0xc),*(int **)(param_2 + 0x30),*(uint *)(param_2 + 0x38),
             pfVar16,uVar13);
  uVar10 = *(uint *)(param_1 + 0x14);
  uVar13 = *(uint *)(param_2 + 0x10);
  param_2[8] = (cff2_private_blend_encoder_param_t)0x1;
joined_r0x00103f3c:
  if (uVar10 == 0) {
    __hb_CrapPool = (double)CONCAT44(_DAT_00110014,__hb_NullPool);
    param_1[0x10] = (cff2_priv_dict_interp_env_t)0x1;
    uVar14 = 0;
    dVar21 = __hb_CrapPool;
  }
  else {
    uVar14 = uVar10 - 1;
    dVar21 = *(double *)(param_1 + (ulong)uVar10 * 8 + 0x10);
    *(uint *)(param_1 + 0x14) = uVar14;
  }
  iVar6 = (int)dVar21;
  if (iVar6 < 0) {
    param_1[0x10] = (cff2_priv_dict_interp_env_t)0x1;
  }
  else {
    uVar10 = (uVar13 + 1) * iVar6;
    uVar18 = uVar14 - uVar10;
    if (uVar14 < uVar10) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8) + 1;
      return;
    }
    if (iVar6 != 0) {
      uVar4 = *(uint *)(param_2 + 0x1c);
      uVar2 = uVar18 + iVar6;
      lVar5 = *(long *)(param_2 + 0x20);
      uVar19 = 0x201 - uVar2;
      uVar20 = uVar2;
      do {
        uVar7 = uVar19;
        if (uVar13 <= uVar19) {
          uVar7 = uVar13;
        }
        pcVar17 = param_1 + (ulong)uVar18 * 8 + 0x18;
        if (0x201 < uVar20) {
          uVar7 = 0;
        }
        if (uVar14 <= uVar18) {
          __hb_CrapPool = (double)CONCAT44(_DAT_00110014,__hb_NullPool);
          param_1[0x10] = (cff2_priv_dict_interp_env_t)0x1;
          pcVar17 = (cff2_priv_dict_interp_env_t *)&_hb_CrapPool;
        }
        if ((uVar4 == uVar7) && (uVar4 != 0)) {
          uVar8 = 0;
          dVar21 = 0.0;
          do {
            lVar1 = uVar8 * 4;
            lVar3 = uVar8 * 8;
            uVar8 = uVar8 + 1;
            dVar21 = dVar21 + (double)*(float *)(lVar5 + lVar1) *
                              *(double *)(param_1 + lVar3 + (ulong)uVar20 * 8 + 0x18);
          } while (uVar8 != uVar4);
        }
        else {
          dVar21 = 0.0;
        }
        uVar20 = uVar20 + uVar13;
        uVar18 = uVar18 + 1;
        uVar19 = uVar19 - uVar13;
        dVar21 = round(*(double *)pcVar17 + dVar21);
        *(double *)pcVar17 = (double)(int)dVar21;
      } while (uVar2 != uVar18);
      if (uVar14 < uVar10 - iVar6) {
        param_1[0x10] = (cff2_priv_dict_interp_env_t)0x1;
        return;
      }
      uVar14 = uVar14 + (iVar6 - uVar10);
    }
  }
  *(uint *)(param_1 + 0x14) = uVar14;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_vector_t<hb_serialize_context_t::object_t::link_t, false>::push() */

undefined * __thiscall
hb_vector_t<hb_serialize_context_t::object_t::link_t,false>::push
          (hb_vector_t<hb_serialize_context_t::object_t::link_t,false> *this)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)this;
  uVar1 = *(uint *)(this + 4);
  if ((int)uVar4 < 0) goto LAB_0010411c;
  uVar5 = uVar1 + 1;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  uVar6 = uVar4;
  if (uVar5 <= uVar4) {
LAB_00104099:
    pvVar3 = *(void **)(this + 8);
LAB_0010409d:
    if (uVar1 < uVar5) {
      uVar4 = (uVar5 - uVar1) * 0xc;
      if (uVar4 != 0) {
        memset((void *)((long)pvVar3 + (ulong)uVar1 * 0xc),0,(ulong)uVar4);
        pvVar3 = *(void **)(this + 8);
      }
    }
    *(uint *)(this + 4) = uVar5;
    return (undefined *)((long)pvVar3 + (ulong)(uVar5 - 1) * 0xc);
  }
  do {
    uVar6 = (uVar6 >> 1) + 8 + uVar6;
  } while (uVar6 < uVar5);
  if (uVar6 < 0x15555556) {
    pvVar3 = realloc(*(void **)(this + 8),(ulong)uVar6 * 0xc);
    if (pvVar3 != (void *)0x0) {
      *(void **)(this + 8) = pvVar3;
      uVar1 = *(uint *)(this + 4);
      *(uint *)this = uVar6;
      goto LAB_0010409d;
    }
    uVar4 = *(uint *)this;
    if (uVar6 <= uVar4) {
      uVar1 = *(uint *)(this + 4);
      goto LAB_00104099;
    }
  }
  *(uint *)this = ~uVar4;
LAB_0010411c:
  __hb_CrapPool = __hb_NullPool;
  uVar2 = __hb_CrapPool;
  __hb_CrapPool = (undefined4)__hb_NullPool;
  _pthread_mutex_lock = __hb_CrapPool;
  __hb_CrapPool = uVar2;
  return &_hb_CrapPool;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_hashmap_t<unsigned int, unsigned int, true>::alloc(unsigned int) */

hb_hashmap_t<unsigned_int,unsigned_int,true> __thiscall
hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
          (hb_hashmap_t<unsigned_int,unsigned_int,true> *this,uint param_1)

{
  byte bVar1;
  int *__ptr;
  long lVar2;
  char cVar3;
  void *pvVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  hb_hashmap_t<unsigned_int,unsigned_int,true> hVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  size_t __size;
  uint uVar16;
  int iVar17;
  short sVar18;
  long in_FS_OFFSET;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_40;
  
  hVar10 = this[0x10];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (hVar10 == (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
LAB_001044b3:
    hVar10 = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
  }
  else {
    if (param_1 == 0) {
      param_1 = *(uint *)(this + 0x14);
    }
    else {
      if ((param_1 >> 1) + param_1 < *(uint *)(this + 0x1c)) goto LAB_0010441d;
      if (param_1 < *(uint *)(this + 0x14)) {
        param_1 = *(uint *)(this + 0x14);
      }
    }
    uVar14 = param_1 * 2 + 8;
    uVar9 = (ulong)uVar14;
    if (uVar14 == 0) {
      pvVar4 = malloc(0xc);
      if (pvVar4 == (void *)0x0) goto LAB_001044af;
      iVar17 = 0;
      sVar18 = 0;
      iVar7 = 0xc;
      __size = 0xc;
LAB_001041f9:
      pvVar4 = (void *)__memset_chk(pvVar4,0,iVar7,__size);
    }
    else {
      iVar7 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      uVar14 = iVar7 + 1;
      uVar9 = (ulong)uVar14;
      uVar16 = 1 << ((byte)uVar14 & 0x1f);
      __size = (ulong)uVar16 * 0xc;
      pvVar4 = malloc(__size);
      if (pvVar4 == (void *)0x0) {
LAB_001044af:
        this[0x10] = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
        goto LAB_001044b3;
      }
      sVar18 = (short)uVar14 * 2;
      iVar17 = uVar16 - 1;
      iVar7 = 0xc << ((byte)uVar14 & 0x1f);
      if (iVar7 != 0) goto LAB_001041f9;
    }
    uStack_c0 = _UNK_0010edb8;
    uStack_c8 = __LC23;
    iVar7 = *(int *)(this + 0x1c);
    *(undefined8 *)(this + 0x14) = 0;
    *(int *)(this + 0x1c) = iVar17;
    __ptr = *(int **)(this + 0x28);
    uVar14 = (iVar7 + 1) - (uint)(iVar7 == 0);
    uStack_b8 = __LC4;
    uStack_b0 = _UNK_0010edc8;
    uStack_a8 = __LC5;
    uStack_a0 = _UNK_0010edd8;
    uStack_98 = __LC6;
    uStack_90 = _UNK_0010ede8;
    uStack_88 = __LC7;
    uStack_80 = _UNK_0010edf8;
    uStack_78 = __LC8;
    uStack_70 = _UNK_0010ee08;
    uStack_68 = __LC9;
    uStack_60 = _UNK_0010ee18;
    uStack_58 = __LC10;
    uStack_50 = _UNK_0010ee28;
    if ((int)uVar9 == 0x20) {
      uVar8 = 0x7fffffff;
    }
    else {
      uVar8 = *(undefined4 *)((long)&uStack_c8 + uVar9 * 4);
    }
    *(undefined4 *)(this + 0x20) = uVar8;
    *(short *)(this + 0x12) = sVar18;
    *(void **)(this + 0x28) = pvVar4;
    if (uVar14 != 0) {
      piVar15 = __ptr;
      do {
        if (((*(byte *)(piVar15 + 1) & 1) != 0) &&
           (uVar16 = (uint)piVar15[1] >> 2,
           this[0x10] != (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0)) {
          uVar13 = *(uint *)(this + 0x18);
          if (*(uint *)(this + 0x1c) <= (uVar13 >> 1) + uVar13) {
            cVar3 = alloc(this,0);
            if (cVar3 == '\0') goto LAB_001042c0;
            uVar13 = *(uint *)(this + 0x18);
          }
          lVar2 = *(long *)(this + 0x28);
          iVar17 = *piVar15;
          uVar9 = (ulong)uVar16 % (ulong)*(uint *)(this + 0x20);
          iVar7 = *(int *)(this + 0x14);
          lVar5 = uVar9 * 0xc;
          piVar6 = (int *)(lVar2 + lVar5);
          bVar1 = *(byte *)(piVar6 + 1);
          if ((bVar1 & 2) == 0) {
            *piVar6 = iVar17;
            piVar6[2] = piVar15[2];
            piVar6[1] = uVar16 * 4 + 3;
            *(uint *)(this + 0x18) = uVar13 + 1;
            *(int *)(this + 0x14) = iVar7 + 1;
          }
          else {
            uVar11 = 0;
            uVar12 = 0xffffffff;
            do {
              if (*piVar6 == iVar17) {
                if (uVar12 == 0xffffffff) goto LAB_0010437f;
                goto LAB_00104374;
              }
              if (((bVar1 & 1) == 0) && (uVar12 == 0xffffffff)) {
                uVar12 = (uint)uVar9;
              }
              uVar11 = uVar11 + 1;
              uVar9 = (ulong)((uint)uVar9 + uVar11 & *(uint *)(this + 0x1c));
              lVar5 = uVar9 * 0xc;
              piVar6 = (int *)(lVar2 + lVar5);
              bVar1 = *(byte *)(piVar6 + 1);
            } while ((bVar1 & 2) != 0);
            if (uVar12 == 0xffffffff) {
LAB_0010445a:
              uVar13 = uVar13 + 1;
            }
            else {
LAB_00104374:
              lVar5 = (ulong)uVar12 * 0xc;
LAB_0010437f:
              piVar6 = (int *)(lVar2 + lVar5);
              if ((*(byte *)(piVar6 + 1) & 2) == 0) goto LAB_0010445a;
              iVar7 = iVar7 - (*(byte *)(piVar6 + 1) & 1);
              *(uint *)(this + 0x18) = uVar13 - 1;
              *(int *)(this + 0x14) = iVar7;
              iVar17 = *piVar15;
            }
            *piVar6 = iVar17;
            iVar17 = piVar15[2];
            piVar6[1] = uVar16 * 4 + 3;
            piVar6[2] = iVar17;
            *(uint *)(this + 0x18) = uVar13;
            *(int *)(this + 0x14) = iVar7 + 1;
            if ((*(ushort *)(this + 0x12) < uVar11) && (*(uint *)(this + 0x1c) < uVar13 << 3)) {
              alloc(this,*(uint *)(this + 0x1c) - 8);
            }
          }
        }
LAB_001042c0:
        piVar15 = piVar15 + 3;
      } while (__ptr + (ulong)uVar14 * 3 != piVar15);
    }
    free(__ptr);
  }
LAB_0010441d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return hVar10;
}



/* hb_vector_t<unsigned int, false>::alloc(unsigned int, bool) */

undefined8 __thiscall
hb_vector_t<unsigned_int,false>::alloc
          (hb_vector_t<unsigned_int,false> *this,uint param_1,bool param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar1 = *(uint *)this;
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (param_2) {
    uVar3 = *(uint *)(this + 4);
    if (*(uint *)(this + 4) <= param_1) {
      uVar3 = param_1;
    }
    if (uVar1 < uVar3) {
      if (0x3fffffff < uVar3) goto LAB_00104546;
      pvVar2 = *(void **)(this + 8);
    }
    else {
      if (uVar1 >> 2 <= uVar3) {
        return 1;
      }
      pvVar2 = *(void **)(this + 8);
      if (uVar3 == 0) {
        free(pvVar2);
        uVar3 = 0;
        pvVar2 = (void *)0x0;
        goto LAB_00104599;
      }
    }
  }
  else {
    uVar3 = uVar1;
    if (param_1 <= uVar1) {
      return 1;
    }
    do {
      uVar3 = (uVar3 >> 1) + 8 + uVar3;
    } while (uVar3 < param_1);
    if (0x3fffffff < uVar3) goto LAB_00104546;
    pvVar2 = *(void **)(this + 8);
  }
  pvVar2 = realloc(pvVar2,(ulong)uVar3 << 2);
  if (pvVar2 != (void *)0x0) {
LAB_00104599:
    *(void **)(this + 8) = pvVar2;
    *(uint *)this = uVar3;
    return 1;
  }
  uVar1 = *(uint *)this;
  if (uVar3 <= uVar1) {
    return 1;
  }
LAB_00104546:
  *(uint *)this = ~uVar1;
  return 0;
}



/* CFF::subr_remap_t::create(hb_set_t const*) */

void __thiscall CFF::subr_remap_t::create(subr_remap_t *this,hb_set_t *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  hb_bit_set_t *phVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  long in_FS_OFFSET;
  hb_bit_set_t *local_98;
  undefined8 *local_90;
  int local_84;
  uint local_70;
  uint local_6c;
  hb_bit_set_t *local_68;
  uint local_60;
  int local_5c;
  hb_bit_set_t *local_58;
  undefined8 local_50;
  long local_40;
  
  uVar11 = *(uint *)(param_1 + 0x14);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[0x40] == (hb_set_t)0x0) {
    if (uVar11 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x34) == 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
                  ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)this,0);
        goto LAB_001046b6;
      }
      uVar11 = 0;
      puVar13 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      puVar8 = puVar13 + (ulong)*(uint *)(param_1 + 0x34) * 9;
      do {
        iVar14 = *(int *)(puVar13 + -9);
        if (iVar14 == -1) {
          iVar14 = 0;
          puVar9 = puVar12;
          do {
            uVar1 = *puVar9;
            puVar9 = puVar9 + 1;
            iVar3 = __popcountdi2(uVar1);
            iVar14 = iVar14 + iVar3;
          } while (puVar9 != puVar13);
          *(int *)(puVar13 + -9) = iVar14;
        }
        puVar13 = puVar13 + 9;
        uVar11 = uVar11 + iVar14;
        puVar12 = puVar12 + 9;
      } while (puVar13 != puVar8);
      *(uint *)(param_1 + 0x14) = uVar11;
    }
LAB_00104696:
    hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
              ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)this,uVar11);
    uVar7 = *(uint *)(this + 0x30);
    if (((int)uVar7 < 0) || (uVar6 = uVar7, uVar11 <= uVar7)) goto LAB_001046b6;
  }
  else {
    if (uVar11 != 0xffffffff) {
      uVar11 = ~uVar11;
      goto LAB_00104696;
    }
    if (*(uint *)(param_1 + 0x34) != 0) {
      uVar11 = 0;
      puVar13 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      puVar8 = puVar13 + (ulong)*(uint *)(param_1 + 0x34) * 9;
      do {
        iVar14 = *(int *)(puVar13 + -9);
        if (iVar14 == -1) {
          iVar14 = 0;
          puVar9 = puVar12;
          do {
            uVar1 = *puVar9;
            puVar9 = puVar9 + 1;
            iVar3 = __popcountdi2(uVar1);
            iVar14 = iVar14 + iVar3;
          } while (puVar9 != puVar13);
          *(int *)(puVar13 + -9) = iVar14;
        }
        puVar13 = puVar13 + 9;
        uVar11 = uVar11 + iVar14;
        puVar12 = puVar12 + 9;
      } while (puVar13 != puVar8);
      *(uint *)(param_1 + 0x14) = uVar11;
      uVar11 = ~uVar11;
      goto LAB_00104696;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
              ((hb_hashmap_t<unsigned_int,unsigned_int,true> *)this,0xffffffff);
    uVar7 = *(uint *)(this + 0x30);
    uVar6 = uVar7;
    if ((int)uVar7 < 0) goto LAB_001046b6;
  }
  do {
    uVar6 = (uVar6 >> 1) + 8 + uVar6;
  } while (uVar6 < uVar11);
  if (uVar6 < 0x40000000) {
    pvVar5 = realloc(*(void **)(this + 0x38),(ulong)uVar6 << 2);
    if (pvVar5 == (void *)0x0) {
      if (*(uint *)(this + 0x30) < uVar6) {
        *(uint *)(this + 0x30) = ~*(uint *)(this + 0x30);
      }
    }
    else {
      *(void **)(this + 0x38) = pvVar5;
      *(uint *)(this + 0x30) = uVar6;
    }
  }
  else {
    *(uint *)(this + 0x30) = ~uVar7;
  }
LAB_001046b6:
  local_98 = (hb_bit_set_t *)(param_1 + 0x10);
  iVar14 = *(int *)(param_1 + 0x14);
  local_50 = _LC11;
  local_58 = local_98;
  if (param_1[0x40] == (hb_set_t)0x0) {
    if (iVar14 == -1) {
      if (*(uint *)(param_1 + 0x34) == 0) {
        iVar3 = 1;
        iVar14 = 0;
      }
      else {
        iVar14 = 0;
        puVar13 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
        puVar12 = puVar8 + (ulong)*(uint *)(param_1 + 0x34) * 9;
        do {
          iVar3 = *(int *)(puVar8 + -9);
          if (iVar3 == -1) {
            iVar3 = 0;
            puVar9 = puVar13;
            do {
              uVar1 = *puVar9;
              puVar9 = puVar9 + 1;
              iVar4 = __popcountdi2(uVar1);
              iVar3 = iVar3 + iVar4;
            } while (puVar8 != puVar9);
            *(int *)(puVar8 + -9) = iVar3;
          }
          iVar14 = iVar14 + iVar3;
          puVar13 = puVar13 + 9;
          puVar8 = puVar8 + 9;
        } while (puVar12 != puVar8);
        iVar3 = iVar14 + 1;
      }
      *(int *)(param_1 + 0x14) = iVar14;
      local_50._4_4_ = iVar3;
    }
    else {
      local_50._0_4_ = (uint)_LC11;
      local_50._4_4_ = iVar14 + 1;
    }
    hb_bit_set_t::next(local_98,(uint *)&local_50);
    phVar10 = local_58;
    uVar11 = (uint)local_50;
    iVar14 = local_50._4_4_;
  }
  else {
    if (iVar14 == -1) {
      if (*(uint *)(param_1 + 0x34) == 0) {
        iVar14 = 0;
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        puVar13 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
        puVar12 = puVar8 + (ulong)*(uint *)(param_1 + 0x34) * 9;
        do {
          iVar14 = *(int *)(puVar8 + -9);
          if (iVar14 == -1) {
            iVar14 = 0;
            puVar9 = puVar13;
            do {
              uVar1 = *puVar9;
              puVar9 = puVar9 + 1;
              iVar4 = __popcountdi2(uVar1);
              iVar14 = iVar14 + iVar4;
            } while (puVar8 != puVar9);
            *(int *)(puVar8 + -9) = iVar14;
          }
          iVar3 = iVar3 + iVar14;
          puVar13 = puVar13 + 9;
          puVar8 = puVar8 + 9;
        } while (puVar12 != puVar8);
        iVar14 = -iVar3;
      }
      *(int *)(param_1 + 0x14) = iVar3;
    }
    else {
      iVar14 = -iVar14;
    }
    local_50 = CONCAT44(iVar14,(uint)local_50);
    local_6c = 0xffffffff;
    hb_bit_set_t::next(local_98,&local_6c);
    uVar11 = local_6c;
    phVar10 = local_98;
    if (local_6c == 0) {
      local_6c = 0xffffffff;
      local_68 = (hb_bit_set_t *)CONCAT44(local_68._4_4_,0xffffffff);
      cVar2 = hb_bit_set_t::next(local_98,(uint *)&local_68);
      if (cVar2 != '\0') {
        uVar7 = (uint)local_68;
        do {
          uVar11 = uVar7 + 1;
          local_6c = uVar7;
          cVar2 = hb_bit_set_t::next(local_98,(uint *)&local_68);
          if (cVar2 == '\0') break;
          uVar7 = uVar11;
        } while ((uint)local_68 == uVar11);
      }
    }
    else {
      uVar11 = 0;
    }
  }
  local_5c = iVar14 + -1 + (uint)(iVar14 == 0);
  local_50 = _LC11;
  iVar14 = *(int *)(param_1 + 0x14);
  local_68 = phVar10;
  local_60 = uVar11;
  if (param_1[0x40] == (hb_set_t)0x0) {
    if (iVar14 == -1) {
      if (*(uint *)(param_1 + 0x34) == 0) {
        iVar14 = 1;
        local_84 = 0;
        local_58 = local_98;
      }
      else {
        local_84 = 0;
        local_90 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        puVar12 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
        puVar13 = puVar12 + (ulong)*(uint *)(param_1 + 0x34) * 9;
        local_58 = local_98;
        do {
          iVar14 = *(int *)(puVar12 + -9);
          if (iVar14 == -1) {
            iVar14 = 0;
            puVar8 = local_90;
            do {
              uVar1 = *puVar8;
              puVar8 = puVar8 + 1;
              iVar3 = __popcountdi2(uVar1);
              iVar14 = iVar14 + iVar3;
            } while (puVar12 != puVar8);
            *(int *)(puVar12 + -9) = iVar14;
          }
          local_84 = local_84 + iVar14;
          puVar12 = puVar12 + 9;
          local_90 = local_90 + 9;
        } while (puVar13 != puVar12);
        iVar14 = local_84 + 1;
      }
      local_50 = CONCAT44(iVar14,(uint)local_50);
      *(int *)(param_1 + 0x14) = local_84;
    }
    else {
      local_50._0_4_ = (uint)_LC11;
      local_50 = CONCAT44(iVar14 + 1,(uint)local_50);
      local_58 = local_98;
    }
    hb_bit_set_t::next(local_98,(uint *)&local_50);
    local_98 = local_58;
  }
  else {
    if (iVar14 == -1) {
      if (*(uint *)(param_1 + 0x34) == 0) {
        iVar14 = 0;
        local_84 = 0;
        local_58 = local_98;
      }
      else {
        local_84 = 0;
        puVar13 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
        local_90 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        puVar12 = puVar13 + (ulong)*(uint *)(param_1 + 0x34) * 9;
        local_58 = local_98;
        do {
          iVar14 = *(int *)(puVar13 + -9);
          if (iVar14 == -1) {
            iVar14 = 0;
            puVar8 = local_90;
            do {
              uVar1 = *puVar8;
              puVar8 = puVar8 + 1;
              iVar3 = __popcountdi2(uVar1);
              iVar14 = iVar14 + iVar3;
            } while (puVar8 != puVar13);
            *(int *)(puVar13 + -9) = iVar14;
          }
          puVar13 = puVar13 + 9;
          local_84 = local_84 + iVar14;
          local_90 = local_90 + 9;
        } while (puVar13 != puVar12);
        iVar14 = -local_84;
      }
      *(int *)(param_1 + 0x14) = local_84;
    }
    else {
      iVar14 = -iVar14;
      local_58 = local_98;
    }
    local_50 = CONCAT44(iVar14,(uint)local_50);
    local_70 = 0xffffffff;
    hb_bit_set_t::next(local_98,&local_70);
    if (local_70 == 0) {
      local_70 = 0xffffffff;
      local_6c = 0xffffffff;
      cVar2 = hb_bit_set_t::next(local_98,&local_6c);
      uVar7 = local_6c;
      if (cVar2 != '\0') {
        do {
          local_70 = uVar7;
          cVar2 = hb_bit_set_t::next(local_98,&local_6c);
          if (cVar2 == '\0') break;
          uVar7 = uVar7 + 1;
        } while (uVar7 == local_6c);
      }
    }
  }
LAB_00104959:
  if (uVar11 != 0xffffffff) goto LAB_00104920;
  do {
    if (phVar10 == local_98) {
      iVar14 = 0x6b;
      if (0x4d7 < *(uint *)(this + 0x14)) {
        iVar14 = (-(uint)(*(uint *)(this + 0x14) < 0x846c) & 0xffff846b) + 0x8000;
      }
      *(int *)(this + 0x40) = iVar14;
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    hb_inc_bimap_t::add((hb_inc_bimap_t *)this,0xffffffff);
    if (phVar10[0x30] == (hb_bit_set_t)0x0) {
LAB_00104936:
      hb_bit_set_t::next(phVar10,&local_60);
      phVar10 = local_68;
      uVar7 = local_60;
      goto LAB_0010494a;
    }
    uVar11 = 0xffffffff;
    do {
      uVar7 = uVar11;
      while( true ) {
        local_6c = uVar7;
        hb_bit_set_t::next(phVar10,&local_6c);
        uVar11 = uVar7 + 1;
        if (uVar11 < local_6c) break;
        local_58 = (hb_bit_set_t *)CONCAT44(local_58._4_4_,uVar7);
        cVar2 = hb_bit_set_t::next(phVar10,(uint *)&local_58);
        if (cVar2 != '\0') {
          uVar11 = (uint)local_58;
          goto LAB_00104c5e;
        }
        local_60 = 0;
        if (local_5c != 0) goto LAB_00104952;
        hb_inc_bimap_t::add((hb_inc_bimap_t *)this,0);
        if (phVar10[0x30] == (hb_bit_set_t)0x0) goto LAB_00104936;
        uVar7 = 0;
      }
      local_60 = uVar11;
      if (local_5c != 0) goto LAB_00104952;
LAB_00104920:
      hb_inc_bimap_t::add((hb_inc_bimap_t *)this,uVar11);
      if (phVar10[0x30] == (hb_bit_set_t)0x0) goto LAB_00104936;
    } while (uVar11 != 0xfffffffe);
    local_60 = 0xffffffff;
  } while (local_5c == 0);
  goto LAB_00104952;
  while (uVar11 = uVar7, uVar7 == (uint)local_58) {
LAB_00104c5e:
    uVar7 = uVar11 + 1;
    local_6c = uVar11;
    cVar2 = hb_bit_set_t::next(phVar10,(uint *)&local_58);
    if (cVar2 == '\0') break;
  }
LAB_0010494a:
  local_60 = uVar7;
  uVar11 = local_60;
  if (local_5c != 0) {
LAB_00104952:
    local_5c = local_5c + -1;
    uVar11 = local_60;
  }
  goto LAB_00104959;
}



/* OT::CFFIndex<OT::IntType<unsigned int, 4u> >::operator[](unsigned int) const */

undefined1  [16] __thiscall
OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[]
          (CFFIndex<OT::IntType<unsigned_int,4u>> *this,uint param_1)

{
  CFFIndex<OT::IntType<unsigned_int,4u>> CVar1;
  uint uVar2;
  uint uVar3;
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar3 = *(uint *)this;
  if (param_1 < (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)) {
    CVar1 = this[4];
    if (CVar1 == (CFFIndex<OT::IntType<unsigned_int,4u>>)0x3) {
      pCVar4 = this + (ulong)param_1 * 3 + 5;
      uVar7 = (uint)(byte)*pCVar4 * 0x10000 + (uint)(byte)pCVar4[1] * 0x100 + (uint)(byte)pCVar4[2];
      pCVar4 = this + (ulong)(param_1 + 1) * 3 + 5;
      uVar3 = (uint)(byte)*pCVar4 * 0x10000 + (uint)(byte)pCVar4[1] * 0x100 + (uint)(byte)pCVar4[2];
      if (uVar3 < uVar7) goto LAB_00104ec0;
      uVar2 = *(uint *)this;
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      pCVar4 = this + (ulong)uVar2 * 3 + 5;
      uVar5 = (uint)(byte)*pCVar4 * 0x10000 + (uint)(byte)pCVar4[1] * 0x100 + (uint)(byte)pCVar4[2];
    }
    else if ((byte)CVar1 < 4) {
      if (CVar1 == (CFFIndex<OT::IntType<unsigned_int,4u>>)0x1) {
        uVar7 = (uint)(byte)this[(ulong)param_1 + 5];
        uVar3 = (uint)(byte)this[(ulong)(param_1 + 1) + 5];
        if (uVar3 < uVar7) goto LAB_00104ec0;
        uVar2 = *(uint *)this;
        uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        uVar5 = (uint)(byte)this[(ulong)uVar2 + 5];
      }
      else {
        if (CVar1 != (CFFIndex<OT::IntType<unsigned_int,4u>>)0x2) goto LAB_00104ec8;
        uVar6 = *(ushort *)(this + (ulong)param_1 * 2 + 5) << 8 |
                *(ushort *)(this + (ulong)param_1 * 2 + 5) >> 8;
        uVar7 = (uint)uVar6;
        uVar3 = (uint)(ushort)(*(ushort *)(this + (ulong)(param_1 + 1) * 2 + 5) << 8 |
                              *(ushort *)(this + (ulong)(param_1 + 1) * 2 + 5) >> 8);
        if (uVar3 < uVar6) goto LAB_00104ec0;
        uVar2 = *(uint *)this;
        uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        uVar5 = (uint)(ushort)(*(ushort *)(this + (ulong)uVar2 * 2 + 5) << 8 |
                              *(ushort *)(this + (ulong)uVar2 * 2 + 5) >> 8);
      }
    }
    else {
      if (CVar1 != (CFFIndex<OT::IntType<unsigned_int,4u>>)0x4) {
LAB_00104ec8:
        uVar3 = *(uint *)this;
        auVar10._0_8_ =
             this + (ulong)(((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                             uVar3 << 0x18) + 1) * (uint)(byte)CVar1) + 4;
        auVar10._8_8_ = 0;
        return auVar10;
      }
      uVar3 = *(uint *)(this + (ulong)param_1 * 4 + 5);
      uVar2 = *(uint *)(this + (ulong)(param_1 + 1) * 4 + 5);
      uVar7 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar3 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      if (uVar3 < uVar7) goto LAB_00104ec0;
      uVar2 = *(uint *)this;
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar5 = *(uint *)(this + (ulong)uVar2 * 4 + 5);
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    }
    if (uVar3 <= uVar5) {
      auVar8._8_4_ = uVar3 - uVar7;
      auVar8._0_8_ = this + (ulong)((uVar2 + 1) * (uint)(byte)CVar1) + (ulong)uVar7 + 4;
      auVar8._12_4_ = 0;
      return auVar8;
    }
  }
LAB_00104ec0:
  auVar9._12_4_ = 0;
  auVar9._0_12_ = ZEXT812(0);
  return auVar9;
}



/* hb_vector_t<unsigned char, false>::alloc(unsigned int, bool) */

undefined8 __thiscall
hb_vector_t<unsigned_char,false>::alloc
          (hb_vector_t<unsigned_char,false> *this,uint param_1,bool param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)this;
  if ((int)uVar2 < 0) {
    return 0;
  }
  if (param_2) {
    uVar3 = *(uint *)(this + 4);
    if (*(uint *)(this + 4) <= param_1) {
      uVar3 = param_1;
    }
    if (uVar2 < uVar3) {
      pvVar1 = *(void **)(this + 8);
      uVar2 = uVar3;
    }
    else {
      if (uVar2 >> 2 <= uVar3) {
        return 1;
      }
      pvVar1 = *(void **)(this + 8);
      uVar2 = uVar3;
      if (uVar3 == 0) {
        free(pvVar1);
        uVar2 = 0;
        pvVar1 = (void *)0x0;
        goto LAB_00104fbd;
      }
    }
  }
  else {
    if (param_1 <= uVar2) {
      return 1;
    }
    do {
      uVar2 = (uVar2 >> 1) + 8 + uVar2;
    } while (uVar2 < param_1);
    pvVar1 = *(void **)(this + 8);
  }
  pvVar1 = realloc(pvVar1,(ulong)uVar2);
  if (pvVar1 == (void *)0x0) {
    if (uVar2 <= *(uint *)this) {
      return 1;
    }
    *(uint *)this = ~*(uint *)this;
    return 0;
  }
LAB_00104fbd:
  *(void **)(this + 8) = pvVar1;
  *(uint *)this = uVar2;
  return 1;
}



/* CFF::str_encoder_t::encode_int(int) */

void __thiscall CFF::str_encoder_t::encode_int(str_encoder_t *this,int param_1)

{
  uint uVar1;
  str_encoder_t *this_00;
  hb_vector_t<unsigned_char,false> *phVar2;
  char cVar3;
  int iVar4;
  uchar uVar5;
  undefined1 uVar6;
  
  this_00 = *(str_encoder_t **)this;
  if (0x8d6 < param_1 + 0x46bU) {
    iVar4 = 0x7fff;
    if (param_1 < 0x8000) {
      iVar4 = param_1;
    }
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    uVar1 = *(uint *)(this_00 + 4);
    if ((int)uVar1 < *(int *)this_00) {
      *(uint *)(this_00 + 4) = uVar1 + 1;
      *(undefined1 *)(*(long *)(this_00 + 8) + (ulong)uVar1) = 0x1c;
    }
    else {
      cVar3 = hb_vector_t<unsigned_char,false>::alloc
                        ((hb_vector_t<unsigned_char,false> *)this_00,uVar1 + 1,false);
      if (cVar3 == '\0') {
        _hb_CrapPool = _hb_NullPool;
      }
      else {
        uVar1 = *(uint *)(this_00 + 4);
        *(uint *)(this_00 + 4) = uVar1 + 1;
        *(undefined1 *)(*(long *)(this_00 + 8) + (ulong)uVar1) = 0x1c;
      }
    }
    phVar2 = *(hb_vector_t<unsigned_char,false> **)this;
    uVar1 = *(uint *)(phVar2 + 4);
    uVar6 = (undefined1)((uint)iVar4 >> 8);
    if ((int)uVar1 < *(int *)phVar2) {
      *(uint *)(phVar2 + 4) = uVar1 + 1;
      *(undefined1 *)(*(long *)(phVar2 + 8) + (ulong)uVar1) = uVar6;
    }
    else {
      cVar3 = hb_vector_t<unsigned_char,false>::alloc(phVar2,uVar1 + 1,false);
      if (cVar3 == '\0') {
        _hb_CrapPool = _hb_NullPool;
      }
      else {
        uVar1 = *(uint *)(phVar2 + 4);
        *(uint *)(phVar2 + 4) = uVar1 + 1;
        *(undefined1 *)(*(long *)(phVar2 + 8) + (ulong)uVar1) = uVar6;
      }
    }
    phVar2 = *(hb_vector_t<unsigned_char,false> **)this;
    uVar1 = *(uint *)(phVar2 + 4);
    if ((int)uVar1 < *(int *)phVar2) {
      *(uint *)(phVar2 + 4) = uVar1 + 1;
      *(char *)(*(long *)(phVar2 + 8) + (ulong)uVar1) = (char)iVar4;
    }
    else {
      cVar3 = hb_vector_t<unsigned_char,false>::alloc(phVar2,uVar1 + 1,false);
      if (cVar3 == '\0') {
        _hb_CrapPool = _hb_NullPool;
      }
      else {
        uVar1 = *(uint *)(phVar2 + 4);
        *(uint *)(phVar2 + 4) = uVar1 + 1;
        *(char *)(*(long *)(phVar2 + 8) + (ulong)uVar1) = (char)iVar4;
      }
    }
    return;
  }
  if (0xd6 < param_1 + 0x6bU) {
    if (param_1 < 1) {
      iVar4 = -0x6c - param_1;
      uVar5 = (char)((uint)iVar4 >> 8) + 0xfb;
    }
    else {
      iVar4 = param_1 + -0x6c;
      uVar5 = (char)((uint)iVar4 >> 8) + 0xf7;
    }
    encode_byte(this_00,uVar5);
    encode_byte(*(str_encoder_t **)this,(uchar)iVar4);
    return;
  }
  encode_byte(this_00,(char)param_1 + 0x8b);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cff2_cs_opset_flatten_t::flush_args(CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>&,
   CFF::flatten_param_t&) */

void cff2_cs_opset_flatten_t::flush_args(cff2_cs_interp_env_t *param_1,flatten_param_t *param_2)

{
  double dVar1;
  hb_vector_t<unsigned_char,false> *this;
  str_encoder_t *this_00;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  cff2_cs_interp_env_t *pcVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  ulong uVar14;
  undefined1 uVar15;
  long in_FS_OFFSET;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int local_50;
  hb_vector_t<unsigned_char,false> *local_48;
  long local_40;
  
  uVar14 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = *(uint *)(param_1 + 0x14);
  if (uVar7 != 0) {
    do {
      iVar13 = (int)uVar14;
      if (*(int *)(param_1 + uVar14 * 0x20 + 0x2c) == 0) {
        dVar16 = *(double *)(param_1 + uVar14 * 0x20 + 0x18);
        this_00 = *(str_encoder_t **)param_2;
        local_48 = (hb_vector_t<unsigned_char,false> *)this_00;
        if (dVar16 == (double)(int)(short)(int)dVar16) {
          CFF::str_encoder_t::encode_int((str_encoder_t *)&local_48,(int)dVar16);
        }
        else {
          iVar5 = (int)(dVar16 * _LC12);
          CFF::str_encoder_t::encode_byte(this_00,0xff);
          uVar7 = *(uint *)(this_00 + 4);
          uVar15 = (undefined1)((uint)iVar5 >> 0x18);
          if ((int)uVar7 < *(int *)this_00) {
            *(uint *)(this_00 + 4) = uVar7 + 1;
            *(undefined1 *)(*(long *)(this_00 + 8) + (ulong)uVar7) = uVar15;
          }
          else {
            cVar4 = hb_vector_t<unsigned_char,false>::alloc
                              ((hb_vector_t<unsigned_char,false> *)this_00,uVar7 + 1,false);
            if (cVar4 == '\0') {
              __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
            }
            else {
              uVar7 = *(uint *)(this_00 + 4);
              *(uint *)(this_00 + 4) = uVar7 + 1;
              *(undefined1 *)(*(long *)(this_00 + 8) + (ulong)uVar7) = uVar15;
            }
          }
          uVar7 = *(uint *)(this_00 + 4);
          uVar15 = (undefined1)((uint)iVar5 >> 0x10);
          if ((int)uVar7 < *(int *)this_00) {
            *(uint *)(this_00 + 4) = uVar7 + 1;
            *(undefined1 *)(*(long *)(this_00 + 8) + (ulong)uVar7) = uVar15;
          }
          else {
            cVar4 = hb_vector_t<unsigned_char,false>::alloc
                              ((hb_vector_t<unsigned_char,false> *)this_00,uVar7 + 1,false);
            if (cVar4 == '\0') {
              __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
            }
            else {
              uVar7 = *(uint *)(this_00 + 4);
              *(uint *)(this_00 + 4) = uVar7 + 1;
              *(undefined1 *)(*(long *)(this_00 + 8) + (ulong)uVar7) = uVar15;
            }
          }
          uVar7 = *(uint *)(this_00 + 4);
          uVar15 = (undefined1)((uint)iVar5 >> 8);
          if ((int)uVar7 < *(int *)this_00) {
            *(uint *)(this_00 + 4) = uVar7 + 1;
            *(undefined1 *)(*(long *)(this_00 + 8) + (ulong)uVar7) = uVar15;
          }
          else {
            cVar4 = hb_vector_t<unsigned_char,false>::alloc
                              ((hb_vector_t<unsigned_char,false> *)this_00,uVar7 + 1,false);
            if (cVar4 == '\0') {
              __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
            }
            else {
              uVar7 = *(uint *)(this_00 + 4);
              *(uint *)(this_00 + 4) = uVar7 + 1;
              *(undefined1 *)(*(long *)(this_00 + 8) + (ulong)uVar7) = uVar15;
            }
          }
          CFF::str_encoder_t::encode_byte(this_00,(uchar)iVar5);
        }
        uVar11 = iVar13 + 1;
      }
      else {
        uVar11 = *(uint *)(param_1 + uVar14 * 0x20 + 0x20);
        if (uVar7 <= uVar11 - 1) {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8) + 1;
          goto LAB_0010574b;
        }
        this = *(hb_vector_t<unsigned_char,false> **)param_2;
        uVar7 = 0;
        local_48 = this;
        do {
          pcVar10 = param_1 + (ulong)(uVar7 + iVar13) * 0x20 + 0x18;
          if (*(uint *)(param_1 + 0x14) <= uVar7 + iVar13) {
            uVar2 = CONCAT71(uRam0000000000110011,_hb_NullPool);
            uVar17 = __hb_CrapPool;
            uVar18 = _pthread_mutex_lock;
            _pthread_mutex_destroy = _pthread_mutex_unlock;
            param_1[0x10] = (cff2_cs_interp_env_t)0x1;
            pcVar10 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
            __hb_CrapPool = uVar2;
            _pthread_mutex_lock = uVar17;
            _pthread_mutex_unlock = uVar18;
          }
          if ((((*(int *)(pcVar10 + 0x14) == 0) || (*(uint *)(pcVar10 + 8) != uVar11)) ||
              (*(uint *)(pcVar10 + 0xc) != uVar7)) ||
             (*(int *)(pcVar10 + 0x14) != *(int *)(param_1 + 0x41a0))) {
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8) + 1;
            goto LAB_0010557b;
          }
          dVar16 = *(double *)pcVar10;
          if (dVar16 == (double)(int)(short)(int)dVar16) {
            CFF::str_encoder_t::encode_int((str_encoder_t *)&local_48,(int)dVar16);
          }
          else {
            uVar11 = *(uint *)(this + 4);
            iVar5 = (int)(dVar16 * _LC12);
            if ((int)uVar11 < *(int *)this) {
              *(uint *)(this + 4) = uVar11 + 1;
              *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = 0xff;
            }
            else {
              cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar11 + 1,false);
              if (cVar4 == '\0') {
                __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
              }
              else {
                uVar11 = *(uint *)(this + 4);
                *(uint *)(this + 4) = uVar11 + 1;
                *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = 0xff;
              }
            }
            uVar11 = *(uint *)(this + 4);
            uVar15 = (undefined1)((uint)iVar5 >> 0x18);
            if ((int)uVar11 < *(int *)this) {
              *(uint *)(this + 4) = uVar11 + 1;
              *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar15;
            }
            else {
              cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar11 + 1,false);
              if (cVar4 == '\0') {
                __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
              }
              else {
                uVar11 = *(uint *)(this + 4);
                *(uint *)(this + 4) = uVar11 + 1;
                *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar15;
              }
            }
            uVar11 = *(uint *)(this + 4);
            uVar15 = (undefined1)((uint)iVar5 >> 0x10);
            if ((int)uVar11 < *(int *)this) {
              *(uint *)(this + 4) = uVar11 + 1;
              *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar15;
            }
            else {
              cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar11 + 1,false);
              if (cVar4 == '\0') {
                __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
              }
              else {
                uVar11 = *(uint *)(this + 4);
                *(uint *)(this + 4) = uVar11 + 1;
                *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar15;
              }
            }
            uVar11 = *(uint *)(this + 4);
            uVar15 = (undefined1)((uint)iVar5 >> 8);
            if ((int)uVar11 < *(int *)this) {
              *(uint *)(this + 4) = uVar11 + 1;
              *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar15;
            }
            else {
              cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar11 + 1,false);
              if (cVar4 == '\0') {
                __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
              }
              else {
                uVar11 = *(uint *)(this + 4);
                *(uint *)(this + 4) = uVar11 + 1;
                *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar15;
              }
            }
            uVar11 = *(uint *)(this + 4);
            if ((int)uVar11 < *(int *)this) {
              *(uint *)(this + 4) = uVar11 + 1;
              *(char *)(*(long *)(this + 8) + (ulong)uVar11) = (char)iVar5;
            }
            else {
              cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar11 + 1,false);
              if (cVar4 == '\0') {
                __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
              }
              else {
                uVar11 = *(uint *)(this + 4);
                *(uint *)(this + 4) = uVar11 + 1;
                *(char *)(*(long *)(this + 8) + (ulong)uVar11) = (char)iVar5;
              }
            }
          }
          uVar11 = *(uint *)(param_1 + uVar14 * 0x20 + 0x20);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar11);
        if (uVar11 == 0) {
          uVar7 = 0;
        }
        else {
          uVar11 = 0;
          dVar16 = _LC12;
          do {
            pcVar10 = param_1 + (ulong)(uVar11 + iVar13) * 0x20 + 0x18;
            if (*(uint *)(param_1 + 0x14) <= uVar11 + iVar13) {
              uVar2 = CONCAT71(uRam0000000000110011,_hb_NullPool);
              uVar17 = __hb_CrapPool;
              uVar18 = _pthread_mutex_lock;
              _pthread_mutex_destroy = _pthread_mutex_unlock;
              param_1[0x10] = (cff2_cs_interp_env_t)0x1;
              pcVar10 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
              __hb_CrapPool = uVar2;
              _pthread_mutex_lock = uVar17;
              _pthread_mutex_unlock = uVar18;
            }
            lVar8 = 0;
            if (*(int *)(pcVar10 + 0x14) != 0) {
              do {
                while( true ) {
                  dVar1 = *(double *)(*(long *)(pcVar10 + 0x18) + lVar8 * 8);
                  iVar5 = (int)dVar1;
                  if (dVar1 != (double)(int)(short)iVar5) break;
                  if (0x8d6 < iVar5 + 0x46bU) {
                    local_50 = 0x7fff;
                    if (iVar5 < 0x8000) {
                      local_50 = iVar5;
                    }
                    if (local_50 < -0x8000) {
                      local_50 = -0x8000;
                    }
                    uVar7 = *(uint *)(this + 4);
                    if ((int)uVar7 < *(int *)this) {
                      *(uint *)(this + 4) = uVar7 + 1;
                      *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = 0x1c;
                    }
                    else {
                      cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar7 + 1,false);
                      dVar16 = _LC12;
                      if (cVar4 == '\0') goto LAB_00105b81;
                      uVar7 = *(uint *)(this + 4);
                      *(uint *)(this + 4) = uVar7 + 1;
                      *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = 0x1c;
                    }
                    goto LAB_00105468;
                  }
                  if (0xd6 < iVar5 + 0x6bU) {
                    if (0 < iVar5) {
                      local_50 = iVar5 + -0x6c;
                      uVar7 = *(uint *)(this + 4);
                      uVar9 = uVar7 + 1;
                      cVar4 = (char)((uint)local_50 >> 8) + -9;
                      if (*(int *)this <= (int)uVar7) {
                        cVar3 = hb_vector_t<unsigned_char,false>::alloc(this,uVar9,false);
                        dVar16 = _LC12;
                        goto joined_r0x001054b9;
                      }
                      goto LAB_001053b0;
                    }
                    CFF::str_encoder_t::encode_byte
                              ((str_encoder_t *)this,(char)((uint)(-0x6c - iVar5) >> 8) + 0xfb);
                    CFF::str_encoder_t::encode_byte((str_encoder_t *)this,(uchar)(-0x6c - iVar5));
                    dVar16 = _LC12;
                    goto LAB_001053d4;
                  }
                  cVar12 = (char)iVar5 + -0x75;
                  uVar7 = *(uint *)(this + 4);
                  uVar6 = (ulong)uVar7;
                  uVar9 = uVar7 + 1;
                  if ((int)uVar7 < *(int *)this) goto LAB_001053c9;
                  cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar9,false);
                  if (cVar4 == '\0') goto LAB_001057fb;
LAB_00105518:
                  dVar16 = _LC12;
                  uVar7 = *(uint *)(this + 4);
                  lVar8 = lVar8 + 1;
                  *(uint *)(this + 4) = uVar7 + 1;
                  *(char *)(*(long *)(this + 8) + (ulong)uVar7) = cVar12;
                  if (*(uint *)(pcVar10 + 0x14) <= (uint)lVar8) goto LAB_00105540;
                }
                uVar7 = *(uint *)(this + 4);
                local_50 = (int)(dVar1 * dVar16);
                if ((int)uVar7 < *(int *)this) {
                  *(uint *)(this + 4) = uVar7 + 1;
                  *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = 0xff;
                }
                else {
                  cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar7 + 1,false);
                  dVar16 = _LC12;
                  if (cVar4 == '\0') {
                    __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                  }
                  else {
                    uVar7 = *(uint *)(this + 4);
                    *(uint *)(this + 4) = uVar7 + 1;
                    *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = 0xff;
                  }
                }
                uVar7 = *(uint *)(this + 4);
                uVar15 = (undefined1)((uint)local_50 >> 0x18);
                if ((int)uVar7 < *(int *)this) {
                  *(uint *)(this + 4) = uVar7 + 1;
                  *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = uVar15;
                }
                else {
                  cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar7 + 1,false);
                  dVar16 = _LC12;
                  if (cVar4 == '\0') {
                    __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                  }
                  else {
                    uVar7 = *(uint *)(this + 4);
                    *(uint *)(this + 4) = uVar7 + 1;
                    *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = uVar15;
                  }
                }
                uVar7 = *(uint *)(this + 4);
                uVar15 = (undefined1)((uint)local_50 >> 0x10);
                if ((int)uVar7 < *(int *)this) {
                  *(uint *)(this + 4) = uVar7 + 1;
                  *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = uVar15;
                }
                else {
                  cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar7 + 1,false);
                  dVar16 = _LC12;
                  if (cVar4 == '\0') {
LAB_00105b81:
                    __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                    dVar16 = _LC12;
                  }
                  else {
                    uVar7 = *(uint *)(this + 4);
                    *(uint *)(this + 4) = uVar7 + 1;
                    *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = uVar15;
                  }
                }
LAB_00105468:
                uVar7 = *(uint *)(this + 4);
                cVar4 = (char)((uint)local_50 >> 8);
                uVar9 = uVar7 + 1;
                if ((int)uVar7 < *(int *)this) {
LAB_001053b0:
                  cVar12 = (char)local_50;
                  *(uint *)(this + 4) = uVar9;
                  *(char *)(*(long *)(this + 8) + (ulong)uVar7) = cVar4;
LAB_001053bb:
                  uVar7 = *(uint *)(this + 4);
                  uVar6 = (ulong)uVar7;
                  uVar9 = uVar7 + 1;
                  if (*(int *)this <= (int)uVar7) goto LAB_001054e0;
LAB_001053c9:
                  *(uint *)(this + 4) = uVar9;
                  *(char *)(*(long *)(this + 8) + uVar6) = cVar12;
                }
                else {
                  cVar3 = hb_vector_t<unsigned_char,false>::alloc(this,uVar9,false);
                  dVar16 = _LC12;
joined_r0x001054b9:
                  cVar12 = (char)local_50;
                  _LC12 = dVar16;
                  if (cVar3 == '\0') {
                    _hb_CrapPool_1 = (undefined7)((ulong)__hb_CrapPool >> 8);
                    __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                    goto LAB_001053bb;
                  }
                  uVar7 = *(uint *)(this + 4);
                  *(uint *)(this + 4) = uVar7 + 1;
                  *(char *)(*(long *)(this + 8) + (ulong)uVar7) = cVar4;
                  uVar7 = *(uint *)(this + 4);
                  uVar6 = (ulong)uVar7;
                  uVar9 = uVar7 + 1;
                  if ((int)uVar7 < *(int *)this) goto LAB_001053c9;
LAB_001054e0:
                  cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar9,false);
                  if (cVar4 != '\0') goto LAB_00105518;
LAB_001057fb:
                  __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                  dVar16 = _LC12;
                }
LAB_001053d4:
                lVar8 = lVar8 + 1;
              } while ((uint)lVar8 < *(uint *)(pcVar10 + 0x14));
            }
LAB_00105540:
            uVar7 = *(uint *)(param_1 + uVar14 * 0x20 + 0x20);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar7);
        }
        CFF::str_encoder_t::encode_int((str_encoder_t *)&local_48,uVar7);
        CFF::str_encoder_t::encode_byte((str_encoder_t *)this,'\x10');
LAB_0010557b:
        uVar11 = iVar13 + *(int *)(param_1 + uVar14 * 0x20 + 0x20);
      }
      uVar14 = (ulong)uVar11;
      uVar7 = *(uint *)(param_1 + 0x14);
    } while (uVar11 < uVar7);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_0010574b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cff2_cs_opset_flatten_t::flush_args_and_op(unsigned int,
   CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>&, CFF::flatten_param_t&) */

void cff2_cs_opset_flatten_t::flush_args_and_op
               (uint param_1,cff2_cs_interp_env_t *param_2,flatten_param_t *param_3)

{
  ulong uVar1;
  str_encoder_t *this;
  
  if (param_1 < 0x18) {
    uVar1 = 1L << ((byte)param_1 & 0x3f);
    if ((uVar1 & 0x9c000a) == 0) {
      if ((uVar1 & 0x4800) == 0) {
        flush_args(param_2,param_3);
        this = *(str_encoder_t **)param_3;
        if ((param_1 != 0xb) && (param_1 != 0xe)) goto LAB_00105d1c;
      }
      return;
    }
    if (param_3[8] != (flatten_param_t)0x0) {
      *(undefined4 *)(param_2 + 0x14) = 0;
      return;
    }
    flush_args(param_2,param_3);
    this = *(str_encoder_t **)param_3;
  }
  else {
    flush_args(param_2,param_3);
    this = *(str_encoder_t **)param_3;
    if (0xff < param_1) {
      CFF::str_encoder_t::encode_byte(this,'\f');
    }
  }
LAB_00105d1c:
  CFF::str_encoder_t::encode_byte(this,(byte)param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool CFF::Dict::serialize_link_op<OT::IntType<int, 4u>, 29>(hb_serialize_context_t*, unsigned
   int, unsigned int, hb_serialize_context_t::whence_t) */

bool CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>
               (long param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  if (*(int *)(param_1 + 0x2c) != 0) {
    return false;
  }
  if (*(undefined1 **)(param_1 + 0x10) == puVar3 ||
      (long)*(undefined1 **)(param_1 + 0x10) - (long)puVar3 < 0) {
LAB_00105f38:
    *(undefined4 *)(param_1 + 0x2c) = 4;
    return false;
  }
  *puVar3 = 0;
  puVar4 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar4 + 1;
  if (puVar4 == (undefined1 *)0x0) {
    return false;
  }
  *puVar4 = 0x1d;
  if (*(int *)(param_1 + 0x2c) != 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x10) - (long)(puVar4 + 1) < 4) goto LAB_00105f38;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar5 = *(undefined4 **)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = puVar5 + 1;
  if (puVar5 == (undefined4 *)0x0) {
    return false;
  }
  *puVar5 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    return false;
  }
  puVar4 = *(undefined1 **)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) - (long)puVar4 < (long)(ulong)(2 - (param_2 < 0x100)))
  goto LAB_00105f38;
  *(undefined1 **)(param_1 + 8) = puVar4 + (2 - (ulong)(param_2 < 0x100));
  if (puVar4 == (undefined1 *)0x0) {
    return false;
  }
  if (param_2 < 0x100) {
    *puVar4 = (char)param_2;
  }
  else {
    *puVar4 = 0xc;
    puVar4[1] = (char)param_2;
  }
  if (param_3 == 0) {
    return true;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x48);
  uVar1 = *(uint *)(puVar10 + 2);
  uVar2 = *(uint *)((long)puVar10 + 0x14);
  if (-1 < (int)uVar1) {
    uVar11 = uVar2 + 1;
    if ((int)uVar11 < 0) {
      uVar11 = 0;
    }
    uVar9 = uVar1;
    if (uVar11 <= uVar1) {
LAB_00105ecf:
      pvVar7 = (void *)puVar10[3];
LAB_00105ed3:
      if (uVar2 < uVar11) {
        hb_memset((void *)((long)pvVar7 + (ulong)uVar2 * 0xc),(uVar11 - uVar2) * 0xc,(uint)pvVar7);
        pvVar7 = (void *)puVar10[3];
      }
      *(uint *)((long)puVar10 + 0x14) = uVar11;
      puVar10 = *(undefined8 **)(param_1 + 0x48);
      puVar8 = (uint *)((long)pvVar7 + (ulong)(uVar11 - 1) * 0xc);
      goto LAB_00105f08;
    }
    do {
      uVar9 = uVar9 + 8 + (uVar9 >> 1);
    } while (uVar9 < uVar11);
    if (uVar9 < 0x15555556) {
      pvVar7 = realloc((void *)puVar10[3],(ulong)uVar9 * 0xc);
      if (pvVar7 != (void *)0x0) {
        puVar10[3] = pvVar7;
        uVar2 = *(uint *)((long)puVar10 + 0x14);
        *(uint *)(puVar10 + 2) = uVar9;
        goto LAB_00105ed3;
      }
      if (uVar9 <= *(uint *)(puVar10 + 2)) {
        uVar2 = *(uint *)((long)puVar10 + 0x14);
        goto LAB_00105ecf;
      }
      *(uint *)(puVar10 + 2) = ~*(uint *)(puVar10 + 2);
      puVar10 = *(undefined8 **)(param_1 + 0x48);
    }
    else {
      *(uint *)(puVar10 + 2) = ~uVar1;
    }
  }
  __hb_CrapPool = (undefined4)__hb_NullPool;
  _pthread_mutex_lock = __hb_CrapPool;
  puVar8 = (uint *)&_hb_CrapPool;
  __hb_CrapPool = __hb_NullPool;
LAB_00105f08:
  if (*(int *)(puVar10 + 2) < 0) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
  }
  uVar6 = *puVar10;
  puVar8[2] = param_3;
  puVar8[1] = ((int)puVar3 + 1) - (int)uVar6;
  *puVar8 = (param_4 & 3) << 4 | 0xc;
  return true;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::cs_opset_t<CFF::blend_arg_t, cff2_cs_opset_flatten_t,
   CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>, CFF::flatten_param_t,
   CFF::path_procs_null_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>, CFF::flatten_param_t>
   >::flush_args_and_op(unsigned int, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>&,
   CFF::flatten_param_t&) */

void CFF::
     cs_opset_t<CFF::blend_arg_t,cff2_cs_opset_flatten_t,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,CFF::flatten_param_t,CFF::path_procs_null_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,CFF::flatten_param_t>>
     ::flush_args_and_op(uint param_1,cff2_cs_interp_env_t *param_2,flatten_param_t *param_3)

{
  double dVar1;
  hb_vector_t<unsigned_char,false> *this;
  str_encoder_t *psVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  cff2_cs_interp_env_t *pcVar10;
  uint uVar11;
  undefined1 uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uchar local_50;
  hb_vector_t<unsigned_char,false> *local_48;
  long local_40;
  
  uVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = *(uint *)(param_2 + 0x14);
  if (uVar7 != 0) {
    do {
      iVar14 = (int)uVar15;
      if (*(int *)(param_2 + uVar15 * 0x20 + 0x2c) == 0) {
        dVar16 = *(double *)(param_2 + uVar15 * 0x20 + 0x18);
        psVar2 = *(str_encoder_t **)param_3;
        local_48 = (hb_vector_t<unsigned_char,false> *)psVar2;
        if (dVar16 == (double)(int)(short)(int)dVar16) {
          str_encoder_t::encode_int((str_encoder_t *)&local_48,(int)dVar16);
        }
        else {
          iVar8 = (int)(dVar16 * _LC12);
          str_encoder_t::encode_byte(psVar2,0xff);
          uVar7 = *(uint *)(psVar2 + 4);
          uVar12 = (undefined1)((uint)iVar8 >> 0x18);
          if ((int)uVar7 < *(int *)psVar2) {
            *(uint *)(psVar2 + 4) = uVar7 + 1;
            *(undefined1 *)(*(long *)(psVar2 + 8) + (ulong)uVar7) = uVar12;
          }
          else {
            cVar5 = hb_vector_t<unsigned_char,false>::alloc
                              ((hb_vector_t<unsigned_char,false> *)psVar2,uVar7 + 1,false);
            if (cVar5 == '\0') {
              __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
            }
            else {
              uVar7 = *(uint *)(psVar2 + 4);
              *(uint *)(psVar2 + 4) = uVar7 + 1;
              *(undefined1 *)(*(long *)(psVar2 + 8) + (ulong)uVar7) = uVar12;
            }
          }
          str_encoder_t::encode_byte(psVar2,(uchar)((uint)iVar8 >> 0x10));
          str_encoder_t::encode_byte(psVar2,(uchar)((uint)iVar8 >> 8));
          uVar7 = *(uint *)(psVar2 + 4);
          if ((int)uVar7 < *(int *)psVar2) {
            *(uint *)(psVar2 + 4) = uVar7 + 1;
            *(char *)(*(long *)(psVar2 + 8) + (ulong)uVar7) = (char)iVar8;
          }
          else {
            cVar5 = hb_vector_t<unsigned_char,false>::alloc
                              ((hb_vector_t<unsigned_char,false> *)psVar2,uVar7 + 1,false);
            if (cVar5 == '\0') {
              __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
            }
            else {
              uVar7 = *(uint *)(psVar2 + 4);
              *(uint *)(psVar2 + 4) = uVar7 + 1;
              *(char *)(*(long *)(psVar2 + 8) + (ulong)uVar7) = (char)iVar8;
            }
          }
        }
        uVar11 = iVar14 + 1;
      }
      else {
        uVar11 = *(uint *)(param_2 + uVar15 * 0x20 + 0x20);
        if (uVar7 <= uVar11 - 1) {
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8) + 1;
          goto joined_r0x001064a2;
        }
        uVar7 = 0;
        this = *(hb_vector_t<unsigned_char,false> **)param_3;
        local_48 = this;
        do {
          pcVar10 = param_2 + (ulong)(iVar14 + uVar7) * 0x20 + 0x18;
          if (*(uint *)(param_2 + 0x14) <= iVar14 + uVar7) {
            uVar3 = CONCAT71(uRam0000000000110011,_hb_NullPool);
            uVar17 = __hb_CrapPool;
            uVar18 = _pthread_mutex_lock;
            _pthread_mutex_destroy = _pthread_mutex_unlock;
            param_2[0x10] = (cff2_cs_interp_env_t)0x1;
            pcVar10 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
            __hb_CrapPool = uVar3;
            _pthread_mutex_lock = uVar17;
            _pthread_mutex_unlock = uVar18;
          }
          if ((((*(int *)(pcVar10 + 0x14) == 0) || (*(uint *)(pcVar10 + 8) != uVar11)) ||
              (*(uint *)(pcVar10 + 0xc) != uVar7)) ||
             (*(int *)(pcVar10 + 0x14) != *(int *)(param_2 + 0x41a0))) {
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 8) + 1;
            goto LAB_001062a3;
          }
          dVar16 = *(double *)pcVar10;
          if (dVar16 == (double)(int)(short)(int)dVar16) {
            str_encoder_t::encode_int((str_encoder_t *)&local_48,(int)dVar16);
          }
          else {
            uVar11 = *(uint *)(this + 4);
            iVar8 = (int)(dVar16 * _LC12);
            if ((int)uVar11 < *(int *)this) {
              *(uint *)(this + 4) = uVar11 + 1;
              *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = 0xff;
            }
            else {
              cVar5 = hb_vector_t<unsigned_char,false>::alloc(this,uVar11 + 1,false);
              if (cVar5 == '\0') {
                __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
              }
              else {
                uVar11 = *(uint *)(this + 4);
                *(uint *)(this + 4) = uVar11 + 1;
                *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = 0xff;
              }
            }
            uVar11 = *(uint *)(this + 4);
            uVar12 = (undefined1)((uint)iVar8 >> 0x18);
            if ((int)uVar11 < *(int *)this) {
              *(uint *)(this + 4) = uVar11 + 1;
              *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar12;
            }
            else {
              cVar5 = hb_vector_t<unsigned_char,false>::alloc(this,uVar11 + 1,false);
              if (cVar5 == '\0') {
                __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
              }
              else {
                uVar11 = *(uint *)(this + 4);
                *(uint *)(this + 4) = uVar11 + 1;
                *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar12;
              }
            }
            uVar11 = *(uint *)(this + 4);
            uVar12 = (undefined1)((uint)iVar8 >> 0x10);
            if ((int)uVar11 < *(int *)this) {
              *(uint *)(this + 4) = uVar11 + 1;
              *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar12;
            }
            else {
              cVar5 = hb_vector_t<unsigned_char,false>::alloc(this,uVar11 + 1,false);
              if (cVar5 == '\0') {
                __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
              }
              else {
                uVar11 = *(uint *)(this + 4);
                *(uint *)(this + 4) = uVar11 + 1;
                *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar12;
              }
            }
            uVar11 = *(uint *)(this + 4);
            uVar12 = (undefined1)((uint)iVar8 >> 8);
            if ((int)uVar11 < *(int *)this) {
              *(uint *)(this + 4) = uVar11 + 1;
              *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar12;
            }
            else {
              cVar5 = hb_vector_t<unsigned_char,false>::alloc(this,uVar11 + 1,false);
              if (cVar5 == '\0') {
                __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
              }
              else {
                uVar11 = *(uint *)(this + 4);
                *(uint *)(this + 4) = uVar11 + 1;
                *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar11) = uVar12;
              }
            }
            uVar11 = *(uint *)(this + 4);
            if ((int)uVar11 < *(int *)this) {
              *(uint *)(this + 4) = uVar11 + 1;
              *(char *)(*(long *)(this + 8) + (ulong)uVar11) = (char)iVar8;
            }
            else {
              cVar5 = hb_vector_t<unsigned_char,false>::alloc(this,uVar11 + 1,false);
              if (cVar5 == '\0') {
                __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
              }
              else {
                uVar11 = *(uint *)(this + 4);
                *(uint *)(this + 4) = uVar11 + 1;
                *(char *)(*(long *)(this + 8) + (ulong)uVar11) = (char)iVar8;
              }
            }
          }
          uVar11 = *(uint *)(param_2 + uVar15 * 0x20 + 0x20);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar11);
        if (uVar11 == 0) {
          uVar7 = 0;
        }
        else {
          uVar11 = 0;
          dVar16 = _LC12;
          do {
            pcVar10 = param_2 + (ulong)(uVar11 + iVar14) * 0x20 + 0x18;
            if (*(uint *)(param_2 + 0x14) <= uVar11 + iVar14) {
              uVar3 = CONCAT71(uRam0000000000110011,_hb_NullPool);
              uVar17 = __hb_CrapPool;
              uVar18 = _pthread_mutex_lock;
              _pthread_mutex_destroy = _pthread_mutex_unlock;
              param_2[0x10] = (cff2_cs_interp_env_t)0x1;
              pcVar10 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
              __hb_CrapPool = uVar3;
              _pthread_mutex_lock = uVar17;
              _pthread_mutex_unlock = uVar18;
            }
            lVar13 = 0;
            if (*(int *)(pcVar10 + 0x14) != 0) {
              do {
                dVar1 = *(double *)(*(long *)(pcVar10 + 0x18) + lVar13 * 8);
                iVar8 = (int)dVar1;
                if (dVar1 == (double)(int)(short)iVar8) {
                  if (0x8d6 < iVar8 + 0x46bU) {
                    if (0x7fff < iVar8) {
                      iVar8 = 0x7fff;
                    }
                    if (iVar8 < -0x8000) {
                      iVar8 = -0x8000;
                    }
                    uVar7 = *(uint *)(this + 4);
                    if ((int)uVar7 < *(int *)this) {
                      *(uint *)(this + 4) = uVar7 + 1;
                      *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = 0x1c;
                    }
                    else {
                      cVar5 = hb_vector_t<unsigned_char,false>::alloc(this,uVar7 + 1,false);
                      dVar16 = _LC12;
                      if (cVar5 == '\0') goto LAB_001068ff;
                      uVar7 = *(uint *)(this + 4);
                      *(uint *)(this + 4) = uVar7 + 1;
                      *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = 0x1c;
                    }
                    goto LAB_00106230;
                  }
                  if (iVar8 + 0x6bU < 0xd7) {
                    uVar7 = *(uint *)(this + 4);
                    cVar6 = (char)iVar8 + -0x75;
                    uVar9 = uVar7 + 1;
                    if (*(int *)this <= (int)uVar7) goto LAB_001065a0;
                    goto LAB_00106191;
                  }
                  if (0 < iVar8) {
                    iVar8 = iVar8 + -0x6c;
                    cVar5 = (char)((uint)iVar8 >> 8) + -9;
                    uVar7 = *(uint *)(this + 4);
                    uVar9 = uVar7 + 1;
                    if (*(int *)this <= (int)uVar7) {
                      cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar9,false);
                      dVar16 = _LC12;
                      goto joined_r0x00106277;
                    }
                    goto LAB_00106178;
                  }
                  str_encoder_t::encode_byte
                            ((str_encoder_t *)this,(char)((uint)(-0x6c - iVar8) >> 8) + 0xfb);
                  str_encoder_t::encode_byte((str_encoder_t *)this,(uchar)(-0x6c - iVar8));
                  dVar16 = _LC12;
                }
                else {
                  uVar7 = *(uint *)(this + 4);
                  iVar8 = (int)(dVar1 * dVar16);
                  if ((int)uVar7 < *(int *)this) {
                    *(uint *)(this + 4) = uVar7 + 1;
                    *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = 0xff;
                  }
                  else {
                    cVar5 = hb_vector_t<unsigned_char,false>::alloc(this,uVar7 + 1,false);
                    dVar16 = _LC12;
                    if (cVar5 == '\0') {
                      __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                    }
                    else {
                      uVar7 = *(uint *)(this + 4);
                      *(uint *)(this + 4) = uVar7 + 1;
                      *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = 0xff;
                    }
                  }
                  uVar7 = *(uint *)(this + 4);
                  uVar12 = (undefined1)((uint)iVar8 >> 0x18);
                  if ((int)uVar7 < *(int *)this) {
                    *(uint *)(this + 4) = uVar7 + 1;
                    *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = uVar12;
                  }
                  else {
                    cVar5 = hb_vector_t<unsigned_char,false>::alloc(this,uVar7 + 1,false);
                    dVar16 = _LC12;
                    if (cVar5 == '\0') {
                      __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                    }
                    else {
                      uVar7 = *(uint *)(this + 4);
                      *(uint *)(this + 4) = uVar7 + 1;
                      *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = uVar12;
                    }
                  }
                  uVar7 = *(uint *)(this + 4);
                  uVar12 = (undefined1)((uint)iVar8 >> 0x10);
                  if ((int)uVar7 < *(int *)this) {
                    *(uint *)(this + 4) = uVar7 + 1;
                    *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = uVar12;
                  }
                  else {
                    cVar5 = hb_vector_t<unsigned_char,false>::alloc(this,uVar7 + 1,false);
                    dVar16 = _LC12;
                    if (cVar5 == '\0') {
LAB_001068ff:
                      __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                      dVar16 = _LC12;
                    }
                    else {
                      uVar7 = *(uint *)(this + 4);
                      *(uint *)(this + 4) = uVar7 + 1;
                      *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar7) = uVar12;
                    }
                  }
LAB_00106230:
                  uVar7 = *(uint *)(this + 4);
                  cVar5 = (char)((uint)iVar8 >> 8);
                  uVar9 = uVar7 + 1;
                  if ((int)uVar7 < *(int *)this) {
LAB_00106178:
                    cVar6 = (char)iVar8;
                    *(uint *)(this + 4) = uVar9;
                    *(char *)(*(long *)(this + 8) + (ulong)uVar7) = cVar5;
                  }
                  else {
                    cVar4 = hb_vector_t<unsigned_char,false>::alloc(this,uVar9,false);
                    dVar16 = _LC12;
joined_r0x00106277:
                    cVar6 = (char)iVar8;
                    _LC12 = dVar16;
                    if (cVar4 == '\0') {
                      _hb_CrapPool_1 = (undefined7)((ulong)__hb_CrapPool >> 8);
                      __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                    }
                    else {
                      uVar7 = *(uint *)(this + 4);
                      *(uint *)(this + 4) = uVar7 + 1;
                      *(char *)(*(long *)(this + 8) + (ulong)uVar7) = cVar5;
                    }
                  }
                  uVar7 = *(uint *)(this + 4);
                  uVar9 = uVar7 + 1;
                  if ((int)uVar7 < *(int *)this) {
LAB_00106191:
                    *(uint *)(this + 4) = uVar9;
                    *(char *)(*(long *)(this + 8) + (ulong)uVar7) = cVar6;
                  }
                  else {
LAB_001065a0:
                    cVar5 = hb_vector_t<unsigned_char,false>::alloc(this,uVar9,false);
                    dVar16 = _LC12;
                    if (cVar5 == '\0') {
                      __hb_CrapPool = CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                    }
                    else {
                      uVar7 = *(uint *)(this + 4);
                      *(uint *)(this + 4) = uVar7 + 1;
                      *(char *)(*(long *)(this + 8) + (ulong)uVar7) = cVar6;
                    }
                  }
                }
                lVar13 = lVar13 + 1;
              } while ((uint)lVar13 < *(uint *)(pcVar10 + 0x14));
            }
            uVar7 = *(uint *)(param_2 + uVar15 * 0x20 + 0x20);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar7);
        }
        str_encoder_t::encode_int((str_encoder_t *)&local_48,uVar7);
        str_encoder_t::encode_byte((str_encoder_t *)this,'\x10');
LAB_001062a3:
        uVar11 = iVar14 + *(int *)(param_2 + uVar15 * 0x20 + 0x20);
      }
      uVar15 = (ulong)uVar11;
      uVar7 = *(uint *)(param_2 + 0x14);
    } while (uVar11 < uVar7);
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
joined_r0x001064a2:
  if ((param_1 == 0xb) || (param_1 == 0xe)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    psVar2 = *(str_encoder_t **)param_3;
    local_50 = (uchar)param_1;
    if (param_1 < 0x100) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001064e6;
    }
    else {
      str_encoder_t::encode_byte(psVar2,'\f');
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001064e6:
        str_encoder_t::encode_byte(psVar2,local_50);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::cs_interp_env_t<CFF::blend_arg_t, CFF::Subrs<OT::IntType<unsigned int, 4u> >
   >::call_subr(CFF::biased_subrs_t<CFF::Subrs<OT::IntType<unsigned int, 4u> > > const&,
   CFF::cs_type_t) */

void __thiscall
CFF::cs_interp_env_t<CFF::blend_arg_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>>::call_subr
          (cs_interp_env_t<CFF::blend_arg_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>> *this,
          int *param_1,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  CFFIndex<OT::IntType<unsigned_int,4u>> *this_00;
  uint uVar3;
  cs_interp_env_t<CFF::blend_arg_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>> *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
  
  if (*(int *)(this + 0x14) == 0) {
    uVar5 = __hb_NullPool;
    uVar6 = __hb_CrapPool;
    uVar7 = _pthread_mutex_lock;
    _pthread_mutex_destroy = _pthread_mutex_unlock;
    this[0x10] = (cs_interp_env_t<CFF::blend_arg_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>>)0x1;
    pcVar4 = (cs_interp_env_t<CFF::blend_arg_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>> *)
             &_hb_CrapPool;
    __hb_CrapPool = uVar5;
    _pthread_mutex_lock = uVar6;
    _pthread_mutex_unlock = uVar7;
  }
  else {
    uVar3 = *(int *)(this + 0x14) - 1;
    *(uint *)(this + 0x14) = uVar3;
    pcVar4 = this + (ulong)uVar3 * 0x20 + 0x18;
  }
  uVar3 = (int)*(double *)pcVar4 + *param_1;
  if (((-1 < (int)uVar3) &&
      (this_00 = *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(param_1 + 2),
      this_00 != (CFFIndex<OT::IntType<unsigned_int,4u>> *)0x0)) &&
     (uVar2 = *(uint *)this_00,
     uVar3 < (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18))) {
    uVar2 = *(uint *)(this + 0x4064);
    if (uVar2 < 10) {
      uVar5 = *(undefined8 *)(this + 8);
      lVar1 = (ulong)uVar2 * 0x18;
      *(uint *)(this + 0x4064) = uVar2 + 1;
      *(undefined8 *)(this + 0x4038) = *(undefined8 *)this;
      *(undefined8 *)(this + 0x4040) = uVar5;
      *(undefined8 *)(this + lVar1 + 0x4068) = *(undefined8 *)this;
      *(undefined8 *)(this + lVar1 + 0x4070) = uVar5;
      *(undefined8 *)(this + lVar1 + 0x4078) = *(undefined8 *)(this + 0x4048);
      auVar8 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](this_00,uVar3);
      *(undefined4 *)(this + 0x4048) = param_3;
      *(undefined1 (*) [12])(this + 0x4038) = auVar8;
      *(undefined4 *)(this + 0x4044) = 0;
      *(uint *)(this + 0x404c) = uVar3;
      *(undefined8 *)this = *(undefined8 *)(this + 0x4038);
      *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x4040);
      return;
    }
  }
  *(int *)(this + 0xc) = *(int *)(this + 8) + 1;
  return;
}



/* CFF::subr_subsetter_t<cff2_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned int, 4u> >,
   OT::cff2::accelerator_subset_t const, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,
   cff2_cs_opset_subr_subset_t, 65535u>::subr_subsetter_t(OT::cff2::accelerator_subset_t const&,
   hb_subset_plan_t const*) */

void __thiscall
CFF::
subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
::subr_subsetter_t(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                   *this,accelerator_subset_t *param_1,hb_subset_plan_t *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x98);
  *(accelerator_subset_t **)this = param_1;
  *(hb_subset_plan_t **)(this + 8) = param_2;
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined4 *)(this + 0x14) = 1;
  uVar5 = 0;
  if (-1 < (int)uVar2) {
    uVar5 = uVar2;
  }
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                )0x1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x50] = (subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                )0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if ((int)uVar2 < 1) {
LAB_00106c44:
    *(uint *)(this + 0x5c) = uVar5;
  }
  else {
    if (((int)uVar2 < 0x38e38e4) &&
       (pvVar4 = malloc((long)(int)uVar5 * 0x48), pvVar4 != (void *)0x0)) {
      *(uint *)(this + 0x58) = uVar5;
      *(void **)(this + 0x60) = pvVar4;
      uVar3 = 0;
      do {
        puVar1 = (undefined4 *)(*(long *)(this + 0x60) + uVar3 * 0x48);
        *puVar1 = 1;
        puVar1[1] = 1;
        *(undefined8 *)(puVar1 + 2) = 0;
        *(undefined1 *)(puVar1 + 4) = 1;
        puVar1[5] = 0;
        puVar1[6] = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        *(undefined8 *)(puVar1 + 10) = 0;
        *(undefined8 *)(puVar1 + 0xc) = 0;
        *(undefined8 *)(puVar1 + 0xe) = 0;
        *(undefined1 *)(puVar1 + 0x10) = 0;
        uVar2 = *(int *)(this + 0x5c) + 1;
        uVar3 = (ulong)uVar2;
        *(uint *)(this + 0x5c) = uVar2;
      } while (uVar2 < uVar5);
      goto LAB_00106c44;
    }
    *(undefined4 *)(this + 0x58) = 0xffffffff;
  }
  *(undefined8 *)(this + 0x68) = 0;
  uVar2 = *(uint *)(param_1 + 0x98);
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x88) = 1;
  *(undefined4 *)(this + 0x8c) = 1;
  *(undefined8 *)(this + 0x90) = 0;
  uVar5 = 0;
  if (-1 < (int)uVar2) {
    uVar5 = uVar2;
  }
  this[0x98] = (subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                )0x1;
  *(undefined2 *)(this + 0x9a) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined1 (*) [16])(this + 0x9c) = (undefined1  [16])0x0;
  if (0 < (int)uVar2) {
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 8 + (uVar2 >> 1);
    } while (uVar2 < uVar5);
    if ((0x38e38e3 < uVar2) || (pvVar4 = malloc((ulong)uVar2 * 0x48), pvVar4 == (void *)0x0)) {
      *(undefined4 *)(this + 0xd0) = 0xffffffff;
      goto LAB_00106cdd;
    }
    *(void **)(this + 0xd8) = pvVar4;
    uVar3 = 0;
    *(uint *)(this + 0xd0) = uVar2;
    while( true ) {
      puVar1 = (undefined4 *)((long)pvVar4 + uVar3 * 0x48);
      *(undefined1 (*) [16])(puVar1 + 4) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *puVar1 = 1;
      puVar1[1] = 1;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined1 *)(puVar1 + 4) = 1;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined1 (*) [16])(puVar1 + 5) = (undefined1  [16])0x0;
      uVar2 = *(int *)(this + 0xd4) + 1;
      uVar3 = (ulong)uVar2;
      *(uint *)(this + 0xd4) = uVar2;
      if (uVar5 <= uVar2) break;
      pvVar4 = *(void **)(this + 0xd8);
    }
  }
  *(uint *)(this + 0xd4) = uVar5;
LAB_00106cdd:
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::dict_interpreter_t<cff2_private_dict_blend_opset_t, cff2_private_blend_encoder_param_t,
   CFF::cff2_priv_dict_interp_env_t>::interpret(cff2_private_blend_encoder_param_t&) */

undefined8 __thiscall
CFF::
dict_interpreter_t<cff2_private_dict_blend_opset_t,cff2_private_blend_encoder_param_t,CFF::cff2_priv_dict_interp_env_t>
::interpret(dict_interpreter_t<cff2_private_dict_blend_opset_t,cff2_private_blend_encoder_param_t,CFF::cff2_priv_dict_interp_env_t>
            *this,cff2_private_blend_encoder_param_t *param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  char *pcVar9;
  size_t sVar10;
  ulong uVar11;
  size_t sVar12;
  void *pvVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  cff2_priv_dict_interp_env_t *pcVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  undefined *puVar23;
  char cVar24;
  undefined1 uVar25;
  uint uVar26;
  uint uVar27;
  char *pcVar28;
  uint uVar29;
  byte *pbVar30;
  char *pcVar31;
  long lVar32;
  uint uVar33;
  cff2_priv_dict_interp_env_t *pcVar34;
  cff2_priv_dict_interp_env_t *pcVar35;
  long in_FS_OFFSET;
  double dVar36;
  int local_94;
  str_encoder_t *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  pcVar35 = *(cff2_priv_dict_interp_env_t **)this;
  uVar29 = *(uint *)(pcVar35 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar21 = *(uint *)(pcVar35 + 0xc);
  pcVar34 = pcVar35;
LAB_00106e6e:
  uVar20 = uVar21 + 1;
  if (uVar20 <= uVar29) {
    lVar32 = *(long *)pcVar34;
    bVar19 = *(byte *)(lVar32 + (ulong)uVar21);
    uVar26 = (uint)bVar19;
    *(uint *)(pcVar34 + 0xc) = uVar20;
    uVar15 = (uint)bVar19;
    if (bVar19 == 0xc) {
      if (uVar29 < uVar21 + 2) {
        uVar26 = 0xffff;
LAB_001073f0:
        *(undefined4 *)(pcVar34 + 0x14) = 0;
        if (uVar29 < *(uint *)(pcVar34 + 0xc)) goto LAB_00107404;
      }
      else {
        bVar19 = *(byte *)(lVar32 + (ulong)uVar20);
        *(uint *)(pcVar34 + 0xc) = uVar21 + 2;
        uVar26 = bVar19 + 0x100;
        if (uVar26 < 0x10e) {
          if (uVar26 < 0x109) goto LAB_001073f0;
        }
        else if (1 < bVar19 - 0x11) goto LAB_001073f0;
      }
LAB_00106f92:
      if (pcVar34[0x10] != (cff2_priv_dict_interp_env_t)0x0) {
LAB_00107404:
        uVar29 = *(uint *)(pcVar35 + 8);
        pcVar34 = pcVar35;
        goto LAB_00106f12;
      }
      local_88 = (char *)0x0;
      uVar21 = *(uint *)(pcVar34 + 0x14);
      local_80 = (void *)0x0;
      uVar25 = (undefined1)uVar26;
      local_90 = (str_encoder_t *)&local_88;
      if (uVar21 != 0) {
        pcVar35 = pcVar34 + 0x18;
        uVar20 = 0;
        uVar29 = uVar21;
        do {
          pcVar18 = pcVar35;
          if (uVar29 <= uVar20) {
            __hb_CrapPool = (double)CONCAT71(uRam0000000000110011,_hb_NullPool);
            pcVar34[0x10] = (cff2_priv_dict_interp_env_t)0x1;
            pcVar18 = (cff2_priv_dict_interp_env_t *)&_hb_CrapPool;
          }
          dVar36 = *(double *)pcVar18;
          if (dVar36 == (double)(int)(short)(int)dVar36) {
            str_encoder_t::encode_int((str_encoder_t *)&local_90,(int)dVar36);
            pcVar9 = local_88;
          }
          else {
            str_encoder_t::encode_byte((str_encoder_t *)&local_88,'\x1e');
            __snprintf_chk(dVar36,local_68,0x10,2,0x10,&_LC14);
            pcVar9 = strchr(local_68,0x2c);
            if (pcVar9 != (char *)0x0) {
              *pcVar9 = '.';
            }
            cVar7 = local_68[0];
            if (local_68[0] == '0') {
              if (local_68[1] != '.') goto LAB_001070a7;
              pcVar9 = local_68 + 1;
              cVar7 = '.';
              if (local_68[2] == '0') {
                cVar24 = '.';
                lVar32 = 0xf;
                pcVar9 = local_68 + 1;
                goto LAB_00107491;
              }
LAB_001076e6:
              local_78 = 0.0;
              local_70 = (void *)0x0;
LAB_0010720a:
              do {
                while( true ) {
                  pcVar28 = pcVar9 + 1;
                  uVar29 = (uint)local_78;
                  uVar15 = local_78._4_4_;
                  if (cVar7 != '.') break;
                  uVar11 = (ulong)local_78._4_4_;
                  uVar15 = local_78._4_4_ + 1;
                  if ((int)(uint)local_78 <= (int)local_78._4_4_) {
                    if ((int)(uint)local_78 < 0) {
LAB_00107b15:
                      cVar7 = pcVar9[1];
                      __hb_CrapPool = (double)CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                      goto LAB_00107206;
                    }
                    uVar33 = (uint)local_78;
                    if ((uint)local_78 < uVar15) {
                      do {
                        uVar33 = uVar33 + 8 + (uVar33 >> 1);
                      } while (uVar33 < uVar15);
                      pvVar13 = realloc(local_70,(ulong)uVar33);
                      if (pvVar13 == (void *)0x0) {
LAB_00107b0f:
                        local_78 = (double)CONCAT44(local_78._4_4_,~uVar29);
                        goto LAB_00107b15;
                      }
                      local_78 = (double)(ulong)uVar33;
                      local_70 = pvVar13;
                    }
                  }
                  local_78 = (double)CONCAT44(uVar15,(uint)local_78);
                  *(undefined1 *)((long)local_70 + uVar11) = 10;
                  cVar7 = pcVar9[1];
LAB_00107206:
                  pcVar9 = pcVar28;
                  if (cVar7 == '\0') goto LAB_00107270;
                }
                if (cVar7 != 'E') {
                  if (cVar7 == '-') {
                    uVar11 = (ulong)local_78._4_4_;
                    uVar15 = local_78._4_4_ + 1;
                    if ((int)(uint)local_78 <= (int)local_78._4_4_) {
                      if ((int)(uint)local_78 < 0) goto LAB_00107b15;
                      uVar33 = (uint)local_78;
                      if ((uint)local_78 < uVar15) {
                        do {
                          uVar33 = (uVar33 >> 1) + 8 + uVar33;
                        } while (uVar33 < uVar15);
                        pvVar13 = realloc(local_70,(ulong)uVar33);
                        if (pvVar13 == (void *)0x0) goto LAB_00107b0f;
                        local_78 = (double)(ulong)uVar33;
                        local_70 = pvVar13;
                      }
                    }
                    local_78 = (double)CONCAT44(uVar15,(uint)local_78);
                    *(undefined1 *)((long)local_70 + uVar11) = 0xe;
                    cVar7 = pcVar9[1];
                  }
                  else {
                    uVar33 = local_78._4_4_ + 1;
                    if ((int)(uint)local_78 <= (int)local_78._4_4_) {
                      if ((int)(uint)local_78 < 0) goto LAB_00107b15;
                      uVar27 = (uint)local_78;
                      if ((uint)local_78 < uVar33) {
                        do {
                          uVar27 = uVar27 + 8 + (uVar27 >> 1);
                        } while (uVar27 < uVar33);
                        pvVar13 = realloc(local_70,(ulong)uVar27);
                        if (pvVar13 == (void *)0x0) {
                          local_78 = (double)CONCAT44(local_78._4_4_,~uVar29);
                          goto LAB_00107b15;
                        }
                        local_78 = (double)(ulong)uVar27;
                        local_70 = pvVar13;
                      }
                    }
                    local_78 = (double)CONCAT44(uVar33,(uint)local_78);
                    *(char *)((long)local_70 + (ulong)uVar15) = cVar7 + -0x30;
                    cVar7 = pcVar9[1];
                  }
                  goto LAB_00107206;
                }
                if (pcVar9[1] == '-') {
                  local_94 = 0xc;
                  hb_vector_t<char,false>::push<int>((hb_vector_t<char,false> *)&local_78,&local_94)
                  ;
                  pcVar28 = pcVar9 + 2;
                }
                else {
                  uVar11 = (ulong)local_78._4_4_;
                  if (pcVar9[1] == '+') {
                    pcVar28 = pcVar9 + 2;
                  }
                  uVar15 = local_78._4_4_ + 1;
                  if ((int)(uint)local_78 <= (int)local_78._4_4_) {
                    if ((int)(uint)local_78 < 0) {
LAB_00107e4e:
                      __hb_CrapPool = (double)CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                      goto LAB_00107255;
                    }
                    uVar33 = (uint)local_78;
                    if ((uint)local_78 < uVar15) {
                      do {
                        uVar33 = (uVar33 >> 1) + 8 + uVar33;
                      } while (uVar33 < uVar15);
                      pvVar13 = realloc(local_70,(ulong)uVar33);
                      if (pvVar13 == (void *)0x0) {
                        local_78 = (double)CONCAT44(local_78._4_4_,~uVar29);
                        goto LAB_00107e4e;
                      }
                      local_78 = (double)(ulong)uVar33;
                      local_70 = pvVar13;
                    }
                  }
                  local_78 = (double)CONCAT44(uVar15,(uint)local_78);
                  *(undefined1 *)((long)local_70 + uVar11) = 0xb;
                }
LAB_00107255:
                cVar7 = *pcVar28;
                if (cVar7 != '0') goto LAB_00107206;
                cVar7 = pcVar28[1];
                pcVar9 = pcVar28 + 1;
              } while (cVar7 != '\0');
LAB_00107270:
              uVar11 = (ulong)local_78._4_4_;
              uVar29 = local_78._4_4_ + 1;
              if ((int)(uint)local_78 <= (int)local_78._4_4_) {
                uVar15 = local_78._4_4_;
                if ((int)(uint)local_78 < 0) goto LAB_001080b2;
                pvVar13 = local_70;
                uVar33 = (uint)local_78;
                uVar27 = local_78._4_4_;
                uVar15 = (uint)local_78;
                if ((uint)local_78 < uVar29) goto LAB_0010756d;
              }
              local_78 = (double)CONCAT44(uVar29,(uint)local_78);
              *(undefined1 *)((long)local_70 + uVar11) = 0xf;
LAB_00107294:
              if ((uVar29 & 1) != 0) {
LAB_001075c0:
                local_94 = 0xf;
                hb_vector_t<char,false>::push<int>((hb_vector_t<char,false> *)&local_78,&local_94);
                uVar29 = local_78._4_4_;
              }
              if (uVar29 != 0) goto LAB_001072a3;
            }
            else {
              if (((local_68[0] == '-') && (local_68[1] == '0')) && (local_68[2] == '.')) {
                local_68._0_2_ = 0x2d2d;
                lVar32 = 0xf;
                pcVar9 = local_68 + 1;
LAB_001071a3:
                if (pcVar9[1] != '.') {
                  local_78 = 0.0;
                  cVar7 = '-';
                  local_70 = (void *)0x0;
                  goto LAB_0010720a;
                }
                cVar7 = '-';
                cVar24 = '-';
                if (pcVar9[2] != '0') goto LAB_001076e6;
LAB_00107491:
                uVar11 = (ulong)(cVar24 == '-');
                pcVar28 = pcVar9 + uVar11 + 1;
                cVar7 = *pcVar28;
                while (cVar7 == '0') {
                  pcVar28 = pcVar28 + 1;
                  cVar7 = *pcVar28;
                }
                sVar10 = strlen(pcVar28);
                pcVar28 = (char *)__memmove_chk(pcVar9 + uVar11,pcVar28,sVar10,lVar32 - uVar11);
                sVar12 = strlen(pcVar28);
                lVar1 = uVar11 + sVar10 + 0x10;
                uVar17 = lVar1 - lVar32;
                if (uVar17 < 0x10) {
                  uVar17 = 0x10;
                }
                __snprintf_chk(pcVar9 + uVar11 + sVar10,local_58 + -(long)(pcVar9 + uVar11 + sVar10)
                               ,2,uVar17 + (lVar32 - lVar1),&_LC19,(int)sVar12 + -1);
                cVar7 = *pcVar9;
              }
              else {
LAB_001070a7:
                sVar10 = strlen(local_68);
                pcVar9 = local_68;
                if ((sVar10 < 4) || (iVar8 = strcmp(local_68 + (sVar10 - 3),"000"), iVar8 != 0)) {
                  pcVar28 = strchr(local_68,0x2e);
                  pcVar31 = strchr(local_68,0x45);
                  if ((pcVar28 == (char *)0x0) || (pcVar31 == (char *)0x0)) goto LAB_00107188;
                  sVar10 = (long)pcVar31 - (long)(pcVar28 + 1);
                  memmove(pcVar28,pcVar28 + 1,sVar10);
                  iVar8 = __isoc23_strtol(pcVar31 + 1,0,10);
                  if (iVar8 - (int)sVar10 != 1) {
                    __snprintf_chk(pcVar31 + -1,local_58 + -(long)(pcVar31 + -1),2,
                                   0xffffffffffffffff,&_LC18);
                    cVar7 = local_68[0];
                    goto LAB_00107188;
                  }
                  *(undefined2 *)(pcVar31 + -1) = _LC17;
                  cVar7 = local_68[0];
                  if (local_68[0] != '.') goto LAB_00107191;
LAB_00107678:
                  if (local_68[1] != '0') {
                    local_78 = 0.0;
                    local_70 = (void *)0x0;
                    goto LAB_0010720a;
                  }
                  lVar32 = 0x10;
                  cVar24 = cVar7;
                  goto LAB_00107491;
                }
                uVar29 = (int)sVar10 - 3;
                uVar17 = (ulong)uVar29;
                uVar11 = 0x10 - (uVar17 - 1);
                pcVar28 = local_68 + (uVar17 - 1);
                if ((*pcVar28 == '0') && (1 < uVar29)) {
                  do {
                    pcVar31 = pcVar28;
                    uVar22 = 0x10;
                    if (0xf < uVar11) {
                      uVar22 = uVar11;
                    }
                    uVar16 = (uVar22 - uVar11) - 1;
                    if (uVar16 < uVar22) {
                      uVar16 = uVar22;
                    }
                    uVar29 = (int)uVar17 + 1;
                    uVar17 = (ulong)uVar29;
                    uVar11 = (uVar11 - uVar22) + 1 + uVar16;
                  } while ((pcVar31[-1] == '0') && (pcVar28 = pcVar31 + -1, 1 < uVar29));
                }
                else {
                  pcVar31 = local_68 + uVar17;
                }
                uVar17 = 0x10;
                if (0xf < uVar11) {
                  uVar17 = uVar11;
                }
                uVar22 = (uVar17 - uVar11) + 1;
                if (uVar22 < uVar17) {
                  uVar22 = uVar17;
                }
                __snprintf_chk(pcVar31,local_58 + -(long)pcVar31,2,uVar22 + ((uVar11 - 1) - uVar17),
                               &_LC16);
                cVar7 = local_68[0];
LAB_00107188:
                if (cVar7 == '.') goto LAB_00107678;
LAB_00107191:
                if (cVar7 == '-') {
                  lVar32 = 0x10;
                  goto LAB_001071a3;
                }
              }
              local_78 = 0.0;
              local_70 = (void *)0x0;
              if (cVar7 != '\0') goto LAB_0010720a;
              uVar29 = 1;
              pvVar13 = (void *)0x0;
              uVar33 = 0;
              uVar27 = 0;
              uVar15 = 0;
LAB_0010756d:
              do {
                uVar15 = (uVar15 >> 1) + 8 + uVar15;
              } while (uVar15 < uVar29);
              pvVar13 = realloc(pvVar13,(ulong)uVar15);
              if (pvVar13 == (void *)0x0) {
                local_78 = (double)CONCAT44(local_78._4_4_,~uVar33);
                uVar15 = local_78._4_4_;
LAB_001080b2:
                uVar29 = uVar15;
                __hb_CrapPool = (double)CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                goto LAB_00107294;
              }
              local_78 = (double)CONCAT44(uVar29,uVar15);
              *(undefined1 *)((long)pvVar13 + (ulong)uVar27) = 0xf;
              local_70 = pvVar13;
              if ((uVar29 & 1) != 0) goto LAB_001075c0;
LAB_001072a3:
              pvVar13 = local_70;
              uVar15 = 0;
              do {
                pbVar30 = (byte *)((ulong)(uVar15 + 1) + (long)pvVar13);
                if (uVar29 <= uVar15 + 1) {
                  pbVar30 = &_hb_CrapPool;
                  __hb_CrapPool = (double)CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                }
                bVar19 = *(char *)((long)pvVar13 + (ulong)uVar15) << 4 | *pbVar30;
                uVar11 = (ulong)local_88._4_4_;
                if ((int)local_88._4_4_ < (int)local_88) {
                  local_88 = (char *)CONCAT44(local_88._4_4_ + 1,(int)local_88);
                  *(byte *)((long)local_80 + uVar11) = bVar19;
                }
                else {
                  cVar7 = hb_vector_t<unsigned_char,false>::alloc
                                    ((hb_vector_t<unsigned_char,false> *)&local_88,
                                     local_88._4_4_ + 1,false);
                  if (cVar7 == '\0') {
                    __hb_CrapPool = (double)CONCAT71(_hb_CrapPool_1,_hb_NullPool);
                  }
                  else {
                    uVar11 = (ulong)local_88._4_4_;
                    local_88 = (char *)CONCAT44(local_88._4_4_ + 1,(int)local_88);
                    *(byte *)((long)local_80 + uVar11) = bVar19;
                  }
                }
                uVar15 = uVar15 + 2;
              } while (uVar15 < uVar29);
            }
            pcVar9 = local_88;
            if ((uint)local_78 != 0) {
              free(local_70);
              pcVar9 = local_88;
            }
          }
          local_88 = pcVar9;
          if (uVar21 == uVar20 + 1) goto LAB_00107320;
          uVar20 = uVar20 + 1;
          pcVar35 = pcVar35 + 8;
          uVar29 = *(uint *)(pcVar34 + 0x14);
        } while( true );
      }
      uVar21 = 1;
      if (uVar26 < 0x100) goto LAB_0010791a;
      uVar21 = 1;
      pcVar9 = local_88;
      goto LAB_00107c63;
    }
    if (bVar19 != 0x17) {
      if (bVar19 < 0x18) {
        if (bVar19 < 0xc) {
          if (5 < bVar19) goto LAB_00106f92;
LAB_00107acc:
          if (0xd6 < uVar15 - 0x20) goto LAB_001073f0;
          uVar21 = *(uint *)(pcVar34 + 0x14);
          if (uVar21 < 0x201) {
            *(uint *)(pcVar34 + 0x14) = uVar21 + 1;
            *(double *)(pcVar34 + (ulong)uVar21 * 8 + 0x18) = (double)(int)(uVar15 - 0x8b);
          }
          else {
            pcVar34[0x10] = (cff2_priv_dict_interp_env_t)0x1;
            __hb_CrapPool = (double)(int)(uVar15 - 0x8b);
          }
        }
        else {
          if (bVar19 == 0x16) {
            pcVar18 = pcVar34;
            if (pcVar34[0x1024] == (cff2_priv_dict_interp_env_t)0x0) {
              if (*(uint *)(pcVar34 + 0x14) == 0) {
                __hb_CrapPool = (double)CONCAT71(uRam0000000000110011,_hb_NullPool);
                pcVar34[0x10] = (cff2_priv_dict_interp_env_t)0x1;
                pcVar35 = *(cff2_priv_dict_interp_env_t **)this;
                pcVar18 = pcVar35;
                dVar36 = __hb_CrapPool;
              }
              else {
                dVar36 = *(double *)(pcVar34 + (ulong)*(uint *)(pcVar34 + 0x14) * 8 + 0x10);
              }
              iVar8 = (int)dVar36;
              if (iVar8 < 0) {
                pcVar34[0x10] = (cff2_priv_dict_interp_env_t)0x1;
                iVar8 = 0;
              }
              *(int *)(pcVar34 + 0x1020) = iVar8;
              uVar29 = *(uint *)(pcVar18 + 8);
            }
            else {
              iVar8 = *(int *)(pcVar34 + 0x1020);
            }
            pcVar34[0x1024] = (cff2_priv_dict_interp_env_t)0x1;
            *(int *)(param_1 + 0xc) = iVar8;
            *(undefined4 *)(pcVar34 + 0x14) = 0;
            pcVar34 = pcVar18;
            goto LAB_00106f12;
          }
LAB_00107cda:
          if (uVar15 < 0xf7) {
            if (uVar15 != 0x1c) goto LAB_00107acc;
            uVar21 = *(uint *)(pcVar34 + 0xc);
            puVar23 = (undefined *)((ulong)uVar21 + lVar32);
            if (uVar29 <= uVar21) {
              uVar21 = uVar29 + 1;
              puVar23 = &_hb_NullPool;
              *(uint *)(pcVar34 + 0xc) = uVar21;
            }
            uVar25 = *puVar23;
            puVar23 = (undefined *)((ulong)(uVar21 + 1) + lVar32);
            if (uVar29 <= uVar21 + 1) {
              uVar21 = uVar29 + 1;
              puVar23 = &_hb_NullPool;
              *(uint *)(pcVar34 + 0xc) = uVar21;
            }
            uVar5 = *puVar23;
            uVar29 = *(uint *)(pcVar34 + 0x14);
            if (uVar29 < 0x201) {
              pcVar18 = pcVar34 + (ulong)uVar29 * 8 + 0x18;
              *(uint *)(pcVar34 + 0x14) = uVar29 + 1;
            }
            else {
              __hb_CrapPool = (double)CONCAT71(uRam0000000000110011,_hb_NullPool);
              pcVar34[0x10] = (cff2_priv_dict_interp_env_t)0x1;
              pcVar18 = (cff2_priv_dict_interp_env_t *)&_hb_CrapPool;
              pcVar35 = *(cff2_priv_dict_interp_env_t **)this;
            }
            *(double *)pcVar18 = (double)(int)CONCAT11(uVar25,uVar5);
            *(uint *)(pcVar34 + 0xc) = uVar21 + 2;
          }
          else {
            uVar21 = *(uint *)(pcVar34 + 0xc);
            pbVar30 = (byte *)(lVar32 + (ulong)uVar21);
            if (uVar29 <= uVar21) {
              uVar21 = uVar29 + 1;
              pbVar30 = &_hb_NullPool;
              *(uint *)(pcVar34 + 0xc) = uVar21;
            }
            bVar4 = *pbVar30;
            uVar29 = *(uint *)(pcVar34 + 0x14);
            if (uVar29 < 0x201) {
              pcVar18 = pcVar34 + (ulong)uVar29 * 8 + 0x18;
              *(uint *)(pcVar34 + 0x14) = uVar29 + 1;
            }
            else {
              __hb_CrapPool = (double)CONCAT71(uRam0000000000110011,_hb_NullPool);
              pcVar34[0x10] = (cff2_priv_dict_interp_env_t)0x1;
              pcVar18 = (cff2_priv_dict_interp_env_t *)&_hb_CrapPool;
              pcVar35 = *(cff2_priv_dict_interp_env_t **)this;
            }
            *(double *)pcVar18 =
                 (double)(int)(short)((bVar19 - 0xf7) * 0x100 + 0x6c + (ushort)bVar4);
            *(uint *)(pcVar34 + 0xc) = uVar21 + 1;
          }
        }
      }
      else if (bVar19 == 0x1d) {
        pbVar30 = (byte *)((ulong)uVar20 + lVar32);
        if (uVar20 == uVar29) {
          uVar20 = uVar21 + 2;
          pbVar30 = &_hb_NullPool;
          *(uint *)(pcVar34 + 0xc) = uVar20;
        }
        bVar19 = *pbVar30;
        pbVar30 = (byte *)((ulong)(uVar20 + 1) + lVar32);
        if (uVar29 <= uVar20 + 1) {
          uVar20 = uVar29 + 1;
          pbVar30 = &_hb_NullPool;
          *(uint *)(pcVar34 + 0xc) = uVar20;
        }
        bVar4 = *pbVar30;
        pbVar30 = (byte *)((ulong)(uVar20 + 2) + lVar32);
        if (uVar29 <= uVar20 + 2) {
          uVar20 = uVar29 + 1;
          pbVar30 = &_hb_NullPool;
          *(uint *)(pcVar34 + 0xc) = uVar20;
        }
        bVar2 = *pbVar30;
        pbVar30 = (byte *)(lVar32 + (ulong)(uVar20 + 3));
        if (uVar29 <= uVar20 + 3) {
          uVar20 = uVar29 + 1;
          pbVar30 = &_hb_NullPool;
          *(uint *)(pcVar34 + 0xc) = uVar20;
        }
        bVar3 = *pbVar30;
        uVar21 = *(uint *)(pcVar34 + 0x14);
        if (uVar21 < 0x201) {
          pcVar18 = pcVar34 + (ulong)uVar21 * 8 + 0x18;
          *(uint *)(pcVar34 + 0x14) = uVar21 + 1;
        }
        else {
          __hb_CrapPool = (double)CONCAT71(uRam0000000000110011,_hb_NullPool);
          pcVar34[0x10] = (cff2_priv_dict_interp_env_t)0x1;
          pcVar18 = (cff2_priv_dict_interp_env_t *)&_hb_CrapPool;
          pcVar35 = *(cff2_priv_dict_interp_env_t **)this;
        }
        *(double *)pcVar18 =
             (double)(int)((uint)bVar3 |
                          (uint)bVar2 << 8 | (uint)bVar4 << 0x10 | (uint)bVar19 << 0x18);
        *(uint *)(pcVar34 + 0xc) = uVar20 + 4;
      }
      else if (bVar19 == 0x1e) {
        uVar11 = 0;
        uVar21 = 0;
        bVar19 = 0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        do {
          if ((bool)(bVar19 & 1)) {
            uVar20 = uVar21 & 0xf;
          }
          else {
            uVar21 = *(uint *)(pcVar34 + 0xc);
            uVar20 = uVar21 + 1;
            if (uVar29 < uVar20) break;
            if (uVar21 < uVar29) {
              pbVar30 = (byte *)((ulong)uVar21 + *(long *)pcVar34);
            }
            else {
              uVar20 = uVar29 + 2;
              *(uint *)(pcVar34 + 0xc) = uVar29 + 1;
              pbVar30 = &_hb_NullPool;
            }
            bVar4 = *pbVar30;
            uVar21 = (uint)bVar4;
            *(uint *)(pcVar34 + 0xc) = uVar20;
            uVar20 = (uint)(bVar4 >> 4);
          }
          if (uVar20 == 0xd) break;
          if (uVar20 == 0xf) {
            local_88 = local_68;
            cVar7 = hb_parse_double((char **)&local_88,local_88 + uVar11,(double *)&local_78,true);
            if (cVar7 != '\0') {
              pcVar35 = *(cff2_priv_dict_interp_env_t **)this;
              dVar36 = local_78;
              goto LAB_00107bd2;
            }
            pcVar35 = *(cff2_priv_dict_interp_env_t **)this;
            break;
          }
          local_68[uVar11] = "0123456789.EE?-?"[uVar20];
          if (uVar20 == 0xc) {
            if ((int)uVar11 == 0x1f) break;
            uVar11 = (ulong)((int)uVar11 + 1);
            local_68[uVar11] = 0x2d;
          }
          uVar20 = (int)uVar11 + 1;
          uVar11 = (ulong)uVar20;
          bVar19 = bVar19 + 1;
        } while (uVar20 != 0x20);
        *(int *)(pcVar34 + 0xc) = *(int *)(pcVar34 + 8) + 1;
        dVar36 = 0.0;
LAB_00107bd2:
        uVar21 = *(uint *)(pcVar34 + 0x14);
        if (uVar21 < 0x201) {
          *(uint *)(pcVar34 + 0x14) = uVar21 + 1;
          *(double *)(pcVar34 + (ulong)uVar21 * 8 + 0x18) = dVar36;
        }
        else {
          pcVar34[0x10] = (cff2_priv_dict_interp_env_t)0x1;
          __hb_CrapPool = dVar36;
        }
      }
      else {
        if (uVar15 < 0xfb) goto LAB_00107cda;
        if (uVar15 == 0xff) goto LAB_001073f0;
        pbVar30 = (byte *)(lVar32 + (ulong)uVar20);
        if (uVar29 <= uVar20) {
          uVar20 = uVar29 + 1;
          pbVar30 = &_hb_NullPool;
          *(uint *)(pcVar34 + 0xc) = uVar20;
        }
        bVar4 = *pbVar30;
        uVar21 = *(uint *)(pcVar34 + 0x14);
        if (uVar21 < 0x201) {
          pcVar18 = pcVar34 + (ulong)uVar21 * 8 + 0x18;
          *(uint *)(pcVar34 + 0x14) = uVar21 + 1;
        }
        else {
          __hb_CrapPool = (double)CONCAT71(uRam0000000000110011,_hb_NullPool);
          pcVar34[0x10] = (cff2_priv_dict_interp_env_t)0x1;
          pcVar18 = (cff2_priv_dict_interp_env_t *)&_hb_CrapPool;
          pcVar35 = *(cff2_priv_dict_interp_env_t **)this;
        }
        *(double *)pcVar18 =
             (double)(int)(((uint)(ushort)(bVar19 - 0xfb) * -0x100 - (uint)bVar4) + -0x6c);
        *(uint *)(pcVar34 + 0xc) = uVar20 + 1;
      }
      goto LAB_00107404;
    }
    cff2_private_dict_blend_opset_t::process_blend(pcVar34,param_1);
    pcVar35 = *(cff2_priv_dict_interp_env_t **)this;
    uVar29 = *(uint *)(pcVar35 + 8);
    pcVar34 = pcVar35;
    goto LAB_00106f12;
  }
  uVar14 = 1;
  goto LAB_00106f32;
LAB_00107320:
  local_88._4_4_ = (uint)((ulong)pcVar9 >> 0x20);
  uVar11 = (ulong)local_88._4_4_;
  local_88._0_4_ = (int)pcVar9;
  uVar21 = local_88._4_4_ + 1;
  if (uVar26 < 0x100) {
    bVar6 = (int)local_88._4_4_ < (int)local_88;
    if (bVar6) {
LAB_00107366:
      local_88 = (char *)CONCAT44(uVar21,(int)local_88);
      *(undefined1 *)((long)local_80 + uVar11) = uVar25;
      goto LAB_00107373;
    }
LAB_0010791a:
    cVar7 = hb_vector_t<unsigned_char,false>::alloc
                      ((hb_vector_t<unsigned_char,false> *)&local_88,uVar21,false);
    if (cVar7 != '\0') {
      uVar11 = (ulong)local_88._4_4_;
      local_88 = (char *)CONCAT44(local_88._4_4_ + 1,(int)local_88);
      *(undefined1 *)((long)local_80 + uVar11) = uVar25;
      goto LAB_00107373;
    }
  }
  else {
    if ((int)local_88._4_4_ < (int)local_88) {
      local_88 = (char *)CONCAT44(uVar21,(int)local_88);
      *(undefined1 *)((long)local_80 + uVar11) = 0xc;
LAB_00107355:
      uVar11 = (ulong)local_88._4_4_;
      uVar21 = local_88._4_4_ + 1;
      bVar6 = (int)local_88._4_4_ < (int)local_88;
      if (bVar6) goto LAB_00107366;
    }
    else {
LAB_00107c63:
      local_88 = pcVar9;
      cVar7 = hb_vector_t<unsigned_char,false>::alloc
                        ((hb_vector_t<unsigned_char,false> *)&local_88,uVar21,false);
      if (cVar7 == '\0') {
        __hb_CrapPool = (double)CONCAT71(_hb_CrapPool_1,_hb_NullPool);
        goto LAB_00107355;
      }
      uVar21 = local_88._4_4_;
      uVar11 = (ulong)local_88._4_4_;
      uVar29 = local_88._4_4_ + 1;
      local_88 = (char *)CONCAT44(uVar29,(int)local_88);
      *(undefined1 *)((long)local_80 + uVar11) = 0xc;
      uVar11 = (ulong)uVar29;
      uVar21 = uVar21 + 2;
      if ((int)uVar29 < (int)local_88) goto LAB_00107366;
    }
    cVar7 = hb_vector_t<unsigned_char,false>::alloc
                      ((hb_vector_t<unsigned_char,false> *)&local_88,uVar21,false);
    if (cVar7 != '\0') {
      uVar11 = (ulong)local_88._4_4_;
      local_88 = (char *)CONCAT44(local_88._4_4_ + 1,(int)local_88);
      *(undefined1 *)((long)local_80 + uVar11) = uVar25;
      goto LAB_00107373;
    }
  }
  __hb_CrapPool = (double)CONCAT71(_hb_CrapPool_1,_hb_NullPool);
LAB_00107373:
  uVar11 = (ulong)local_88 >> 0x20;
  lVar32 = *(long *)param_1;
  if (*(int *)(lVar32 + 0x2c) == 0) {
    if ((uVar11 < 0x80000000) &&
       (pvVar13 = *(void **)(lVar32 + 8), (long)uVar11 <= *(long *)(lVar32 + 0x10) - (long)pvVar13))
    {
      *(ulong *)(lVar32 + 8) = (long)pvVar13 + uVar11;
      if ((pvVar13 != (void *)0x0) && (uVar11 != 0)) {
        memcpy(pvVar13,local_80,uVar11);
      }
    }
    else {
      *(undefined4 *)(lVar32 + 0x2c) = 4;
    }
  }
  *(undefined4 *)(pcVar34 + 0x14) = 0;
  if ((int)local_88 != 0) {
    free(local_80);
  }
  pcVar35 = *(cff2_priv_dict_interp_env_t **)this;
  uVar29 = *(uint *)(pcVar35 + 8);
  pcVar34 = pcVar35;
LAB_00106f12:
  uVar21 = *(uint *)(pcVar34 + 0xc);
  if ((uVar29 < uVar21) || (pcVar34[0x10] != (cff2_priv_dict_interp_env_t)0x0)) {
    uVar14 = 0;
LAB_00106f32:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar14;
  }
  goto LAB_00106e6e;
}



/* cff2_private_dict_op_serializer_t::serialize(hb_serialize_context_t*, CFF::op_str_t const&,
   unsigned int) const */

ulong __thiscall
cff2_private_dict_op_serializer_t::serialize
          (cff2_private_dict_op_serializer_t *this,hb_serialize_context_t *param_1,op_str_t *param_2
          ,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  op_str_t *poVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  undefined8 *local_1090;
  hb_serialize_context_t *local_1088;
  undefined1 local_1080;
  undefined8 local_107c;
  undefined8 local_1070;
  void *local_1068;
  undefined8 local_1060;
  undefined8 local_1058;
  undefined8 local_1050;
  undefined8 local_1048;
  ulong local_1040;
  undefined8 local_1038;
  undefined8 local_1030 [513];
  undefined4 local_28;
  undefined1 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = *(uint *)(param_2 + 8);
  poVar10 = param_2;
  if (this[1] == (cff2_private_dict_op_serializer_t)0x0) {
LAB_00108150:
    if (uVar12 == 0x13) {
      if ((*this != (cff2_private_dict_op_serializer_t)0x0) || (param_3 == 0)) goto LAB_0010823e;
      puVar2 = *(undefined1 **)(param_1 + 8);
      if (*(int *)(param_1 + 0x2c) == 0) {
        if (*(undefined1 **)(param_1 + 0x10) == puVar2 ||
            (long)*(undefined1 **)(param_1 + 0x10) - (long)puVar2 < 0) {
LAB_001082e0:
          *(undefined4 *)(param_1 + 0x2c) = 4;
        }
        else {
          *puVar2 = 0;
          puVar3 = *(undefined1 **)(param_1 + 8);
          puVar1 = puVar3 + 1;
          *(undefined1 **)(param_1 + 8) = puVar1;
          if ((puVar3 != (undefined1 *)0x0) && (*puVar3 = 0x1c, *(int *)(param_1 + 0x2c) == 0)) {
            if (*(long *)(param_1 + 0x10) - (long)puVar1 < 2) goto LAB_001082e0;
            hb_memset(puVar1,2,(uint)poVar10);
            puVar4 = *(undefined2 **)(param_1 + 8);
            *(undefined2 **)(param_1 + 8) = puVar4 + 1;
            if ((puVar4 != (undefined2 *)0x0) && (*puVar4 = 0, *(int *)(param_1 + 0x2c) == 0)) {
              puVar1 = *(undefined1 **)(param_1 + 8);
              if (*(undefined1 **)(param_1 + 0x10) == puVar1 ||
                  (long)*(undefined1 **)(param_1 + 0x10) - (long)puVar1 < 0) goto LAB_001082e0;
              *(undefined1 **)(param_1 + 8) = puVar1 + 1;
              if (puVar1 != (undefined1 *)0x0) {
                *puVar1 = 0x13;
                puVar8 = (undefined4 *)
                         hb_vector_t<hb_serialize_context_t::object_t::link_t,false>::push
                                   ((hb_vector_t<hb_serialize_context_t::object_t::link_t,false> *)
                                    (*(long *)(param_1 + 0x48) + 0x10));
                if (*(int *)(*(undefined8 **)(param_1 + 0x48) + 2) < 0) {
                  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
                }
                uVar5 = **(undefined8 **)(param_1 + 0x48);
                puVar8[2] = param_3;
                puVar8[1] = ((int)puVar2 + 1) - (int)uVar5;
                *puVar8 = 10;
                goto LAB_0010823e;
              }
            }
          }
        }
      }
    }
    else {
      uVar11 = (uint)(byte)param_2[0xc];
      uVar12 = uVar11;
      if (this[2] != (cff2_private_dict_op_serializer_t)0x0) {
LAB_00108168:
        local_1048 = *(undefined8 *)param_2;
        puVar13 = local_1030;
        for (lVar9 = 0x201; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        local_1050 = *(undefined8 *)(this + 0x18);
        local_1060 = *(undefined8 *)(this + 8);
        local_1058 = *(undefined8 *)(this + 0x10);
        local_1040 = (ulong)uVar11;
        local_1090 = &local_1048;
        local_1038 = 0;
        local_28 = 0;
        local_24 = 0;
        local_1080 = 0;
        local_107c = 0;
        local_1070 = 0;
        local_1068 = (void *)0x0;
        local_1088 = param_1;
        uVar6 = CFF::
                dict_interpreter_t<cff2_private_dict_blend_opset_t,cff2_private_blend_encoder_param_t,CFF::cff2_priv_dict_interp_env_t>
                ::interpret((dict_interpreter_t<cff2_private_dict_blend_opset_t,cff2_private_blend_encoder_param_t,CFF::cff2_priv_dict_interp_env_t>
                             *)&local_1090,(cff2_private_blend_encoder_param_t *)&local_1088);
        if ((int)local_1070 != 0) {
          free(local_1068);
          uVar6 = uVar6 & 0xff;
        }
        goto LAB_0010820d;
      }
LAB_00108261:
      if (*(int *)(param_1 + 0x2c) == 0) {
        if (*(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8) < (long)(ulong)(byte)uVar12)
        goto LAB_001082e0;
        hb_memset(*(void **)(param_1 + 8),uVar12,(uint)poVar10);
        lVar9 = *(long *)(param_1 + 8);
        *(ulong *)(param_1 + 8) = (ulong)(byte)uVar12 + lVar9;
        if (lVar9 != 0) {
          if (param_2[0xc] != (op_str_t)0x0) {
            lVar7 = 0;
            do {
              *(undefined1 *)(lVar9 + lVar7) = *(undefined1 *)(*(long *)param_2 + lVar7);
              lVar7 = lVar7 + 1;
            } while ((uint)lVar7 < (uint)(byte)param_2[0xc]);
            uVar6 = 1;
            goto LAB_0010820d;
          }
          goto LAB_0010823e;
        }
      }
    }
    uVar6 = 0;
  }
  else {
    if (uVar12 < 0x10f) {
      if ((uVar12 < 0x109) && (poVar10 = (op_str_t *)(ulong)(uVar12 - 6), 5 < uVar12 - 6))
      goto LAB_00108150;
    }
    else if (1 < uVar12 - 0x111) {
      uVar12 = (uint)(byte)param_2[0xc];
      uVar11 = (uint)(byte)param_2[0xc];
      if (this[2] == (cff2_private_dict_op_serializer_t)0x0) goto LAB_00108261;
      goto LAB_00108168;
    }
LAB_0010823e:
    uVar6 = 1;
  }
LAB_0010820d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_hashmap_t<hb_serialize_context_t::object_t const*, unsigned int, false>::alloc(unsigned int)
    */

hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> __thiscall
hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc
          (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> *this,
          uint param_1)

{
  byte bVar1;
  int iVar2;
  long *__ptr;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> hVar18;
  uint uVar19;
  size_t __size;
  short sVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  long *local_118;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_40;
  
  hVar18 = this[0x10];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (hVar18 == (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0) {
LAB_00108877:
    hVar18 = (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0;
  }
  else {
    if (param_1 == 0) {
      param_1 = *(uint *)(this + 0x14);
    }
    else {
      if ((param_1 >> 1) + param_1 < *(uint *)(this + 0x1c)) goto LAB_001087eb;
      if (param_1 < *(uint *)(this + 0x14)) {
        param_1 = *(uint *)(this + 0x14);
      }
    }
    uVar12 = param_1 * 2 + 8;
    uVar13 = (ulong)uVar12;
    if (uVar12 == 0) {
      pvVar8 = malloc(0x10);
      if (pvVar8 == (void *)0x0) goto LAB_00108872;
      iVar16 = 0;
      sVar20 = 0;
      iVar9 = 0x10;
      __size = 0x10;
LAB_00108466:
      pvVar8 = (void *)__memset_chk(pvVar8,0,iVar9,__size);
    }
    else {
      iVar9 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      uVar12 = iVar9 + 1;
      uVar13 = (ulong)uVar12;
      uVar15 = 1 << ((byte)uVar12 & 0x1f);
      __size = (ulong)uVar15 << 4;
      pvVar8 = malloc(__size);
      if (pvVar8 == (void *)0x0) {
LAB_00108872:
        this[0x10] = (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0;
        goto LAB_00108877;
      }
      sVar20 = (short)uVar12 * 2;
      iVar16 = uVar15 - 1;
      iVar9 = 0x10 << ((byte)uVar12 & 0x1f);
      if (iVar9 != 0) goto LAB_00108466;
    }
    uStack_c0 = _UNK_0010edb8;
    uStack_c8 = __LC23;
    iVar9 = *(int *)(this + 0x1c);
    *(undefined8 *)(this + 0x14) = 0;
    *(int *)(this + 0x1c) = iVar16;
    __ptr = *(long **)(this + 0x28);
    uVar12 = (iVar9 + 1) - (uint)(iVar9 == 0);
    uStack_b8 = __LC4;
    uStack_b0 = _UNK_0010edc8;
    uStack_a8 = __LC5;
    uStack_a0 = _UNK_0010edd8;
    uStack_98 = __LC6;
    uStack_90 = _UNK_0010ede8;
    uStack_88 = __LC7;
    uStack_80 = _UNK_0010edf8;
    uStack_78 = __LC8;
    uStack_70 = _UNK_0010ee08;
    uStack_68 = __LC9;
    uStack_60 = _UNK_0010ee18;
    uStack_58 = __LC10;
    uStack_50 = _UNK_0010ee28;
    if ((int)uVar13 == 0x20) {
      uVar10 = 0x7fffffff;
    }
    else {
      uVar10 = *(undefined4 *)((long)&uStack_c8 + uVar13 * 4);
    }
    *(undefined4 *)(this + 0x20) = uVar10;
    *(short *)(this + 0x12) = sVar20;
    *(void **)(this + 0x28) = pvVar8;
    if (uVar12 != 0) {
      local_118 = __ptr;
      do {
        if (((*(byte *)(local_118 + 1) & 1) != 0) &&
           (uVar15 = *(uint *)(local_118 + 1) >> 2,
           this[0x10] !=
           (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0)) {
          uVar17 = *(uint *)(this + 0x18);
          if (*(uint *)(this + 0x1c) <= (uVar17 >> 1) + uVar17) {
            cVar6 = alloc(this,0);
            if (cVar6 == '\0') goto LAB_00108550;
            uVar17 = *(uint *)(this + 0x18);
          }
          lVar3 = *(long *)(this + 0x28);
          iVar9 = *(int *)(this + 0x14);
          uVar13 = (ulong)uVar15 % (ulong)*(uint *)(this + 0x20);
          puVar4 = (undefined8 *)*local_118;
          plVar14 = (long *)(uVar13 * 0x10 + lVar3);
          bVar1 = *(byte *)(plVar14 + 1);
          if ((bVar1 & 2) == 0) {
            *plVar14 = (long)puVar4;
            *(undefined4 *)((long)plVar14 + 0xc) = *(undefined4 *)((long)local_118 + 0xc);
            *(uint *)(plVar14 + 1) = uVar15 * 4 + 3;
            *(uint *)(this + 0x18) = uVar17 + 1;
            *(int *)(this + 0x14) = iVar9 + 1;
          }
          else {
            uVar19 = 0;
            uVar21 = 0xffffffff;
            do {
              if (uVar15 == *(uint *)(plVar14 + 1) >> 2) {
                puVar5 = (undefined8 *)*plVar14;
                uVar11 = puVar5[1] - (long)*puVar5;
                if (uVar11 == puVar4[1] - (long)*puVar4) {
                  iVar16 = *(int *)((long)puVar5 + 0x14);
                  iVar2 = *(int *)((long)puVar4 + 0x14);
                  if ((iVar16 == iVar2) &&
                     (((int)uVar11 == 0 ||
                      (iVar7 = memcmp((void *)*puVar5,(void *)*puVar4,uVar11 & 0xffffffff),
                      iVar7 == 0)))) {
                    if ((iVar2 * 0xc == iVar16 * 0xc) &&
                       (((iVar2 * 3 & 0x3fffffffU) == 0 ||
                        (iVar16 = memcmp((void *)puVar5[3],(void *)puVar4[3],
                                         (ulong)(uint)(iVar2 * 0xc)), iVar16 == 0)))) {
                      if ((int)uVar21 == -1) goto LAB_00108710;
                      goto LAB_00108706;
                    }
                  }
                }
              }
              if (((int)uVar21 == -1) && ((bVar1 & 1) == 0)) {
                uVar21 = uVar13;
              }
              uVar19 = uVar19 + 1;
              uVar13 = (ulong)((int)uVar13 + uVar19 & *(uint *)(this + 0x1c));
              plVar14 = (long *)(uVar13 * 0x10 + lVar3);
              bVar1 = *(byte *)(plVar14 + 1);
            } while ((bVar1 & 2) != 0);
            if ((int)uVar21 == -1) {
LAB_001087c8:
              uVar17 = uVar17 + 1;
            }
            else {
LAB_00108706:
              plVar14 = (long *)(uVar21 * 0x10 + lVar3);
LAB_00108710:
              if ((*(byte *)(plVar14 + 1) & 2) == 0) goto LAB_001087c8;
              iVar9 = iVar9 - (*(byte *)(plVar14 + 1) & 1);
              *(uint *)(this + 0x18) = uVar17 - 1;
              *(int *)(this + 0x14) = iVar9;
            }
            *plVar14 = (long)puVar4;
            *(undefined4 *)((long)plVar14 + 0xc) = *(undefined4 *)((long)local_118 + 0xc);
            *(uint *)(plVar14 + 1) = uVar15 * 4 + 3;
            *(int *)(this + 0x14) = iVar9 + 1;
            *(uint *)(this + 0x18) = uVar17;
            if ((*(ushort *)(this + 0x12) < uVar19) && (*(uint *)(this + 0x1c) < uVar17 * 8)) {
              alloc(this,*(uint *)(this + 0x1c) - 8);
            }
          }
        }
LAB_00108550:
        local_118 = local_118 + 2;
      } while (__ptr + (ulong)uVar12 * 2 != local_118);
    }
    free(__ptr);
  }
LAB_001087eb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return hVar18;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_serialize_context_t::pop_pack(bool) */

uint __thiscall hb_serialize_context_t::pop_pack(hb_serialize_context_t *this,bool param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  void *pvVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  long *plVar19;
  ulong uVar20;
  void *pvVar21;
  uint *puVar22;
  uint uVar23;
  hb_serialize_context_t *phVar24;
  ulong uVar25;
  uint local_88;
  
  plVar3 = *(long **)(this + 0x48);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  uVar16 = *(uint *)(this + 0x2c);
  if (uVar16 != 0) {
    if (0x10 < uVar16) {
      return 0;
    }
    if ((0x10104UL >> ((ulong)uVar16 & 0x3f) & 1) == 0) {
      return 0;
    }
  }
  pvVar12 = (void *)*plVar3;
  *(long *)(this + 0x48) = plVar3[6];
  lVar10 = *(long *)(this + 8);
  pvVar4 = *(void **)(this + 0x20);
  plVar3[6] = 0;
  plVar3[1] = lVar10;
  uVar20 = lVar10 - (long)pvVar12;
  pvVar21 = pvVar4;
  if (pvVar4 == (void *)0x0) {
    pvVar21 = pvVar12;
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(void **)(this + 8) = pvVar21;
  if ((int)lVar10 == (int)pvVar12) {
    return 0;
  }
  if (param_1) {
    uVar25 = 0x80;
    if ((long)uVar20 < 0x81) {
      uVar25 = uVar20;
    }
    phVar24 = this;
    uVar25 = fasthash64(pvVar12,uVar25 & 0xffffffff,(ulong)pvVar21);
    pvVar21 = (void *)plVar3[3];
    iVar18 = *(int *)((long)plVar3 + 0x14);
    uVar23 = iVar18 * 0xc;
    uVar11 = fasthash64(pvVar21,(ulong)uVar23,uVar25 >> 0x20);
    local_88 = (int)uVar11 - (int)((ulong)uVar11 >> 0x20) ^ (int)uVar25 - (int)(uVar25 >> 0x20);
    lVar10 = *(long *)(phVar24 + 0x88);
    uVar16 = *(uint *)(phVar24 + 0x7c);
    puVar22 = (uint *)&_hb_NullPool;
    if (lVar10 == 0) {
LAB_00108be2:
      uVar13 = *puVar22;
    }
    else {
      uVar25 = (ulong)(local_88 & 0x3fffffff) % (ulong)*(uint *)(phVar24 + 0x80);
      plVar19 = (long *)(uVar25 * 0x10 + lVar10);
      bVar2 = *(byte *)(plVar19 + 1);
      if ((bVar2 & 2) == 0) goto LAB_00108be2;
      iVar9 = 0;
      do {
        if ((local_88 & 0x3fffffff) == *(uint *)(plVar19 + 1) >> 2) {
          puVar5 = (undefined8 *)*plVar19;
          if (((((uVar20 == puVar5[1] - (long)*puVar5) &&
                (iVar7 = *(int *)((long)puVar5 + 0x14), iVar18 == iVar7)) &&
               (((int)uVar20 == 0 ||
                (iVar8 = memcmp((void *)*puVar5,pvVar12,uVar20 & 0xffffffff), iVar8 == 0)))) &&
              (uVar23 == iVar7 * 0xc)) &&
             ((uVar23 == 0 || (iVar7 = memcmp((void *)puVar5[3],pvVar21,(ulong)uVar23), iVar7 == 0))
             )) {
            puVar22 = (uint *)&_hb_NullPool;
            if ((bVar2 & 1) != 0) {
              puVar22 = (uint *)((long)plVar19 + 0xc);
            }
            goto LAB_00108be2;
          }
        }
        iVar9 = iVar9 + 1;
        uVar25 = (ulong)((int)uVar25 + iVar9 & uVar16);
        plVar19 = (long *)(uVar25 * 0x10 + lVar10);
        bVar2 = *(byte *)(plVar19 + 1);
        uVar13 = __hb_NullPool;
      } while ((bVar2 & 2) != 0);
    }
    if (uVar13 != 0) {
      if (uVar13 < *(uint *)(this + 0x54)) {
        plVar19 = (long *)(*(long *)(this + 0x58) + (ulong)uVar13 * 8);
      }
      else {
        __hb_CrapPool = CONCAT44(_DAT_00110014,__hb_NullPool);
        plVar19 = (long *)&_hb_CrapPool;
      }
      lVar10 = *plVar19;
      puVar17 = (undefined8 *)plVar3[5];
      puVar5 = (undefined8 *)((long)puVar17 + (ulong)*(uint *)((long)plVar3 + 0x24) * 0xc);
      do {
        if (puVar17 == puVar5) {
          if ((int)plVar3[2] != 0) {
            free((void *)plVar3[3]);
          }
          plVar3[2] = 0;
          plVar3[3] = 0;
          if ((int)plVar3[4] != 0) {
            free((void *)plVar3[5]);
          }
          plVar3[4] = 0;
          plVar3[5] = 0;
          return uVar13;
        }
        uVar16 = *(uint *)(lVar10 + 0x24);
        uVar20 = (ulong)uVar16;
        uVar23 = *(uint *)(lVar10 + 0x20);
        uVar15 = uVar16 + 1;
        if ((int)uVar16 < (int)uVar23) {
LAB_00108c41:
          pvVar12 = *(void **)(lVar10 + 0x28);
LAB_00108c45:
          *(uint *)(lVar10 + 0x24) = uVar15;
          puVar1 = (undefined8 *)((long)pvVar12 + uVar20 * 0xc);
          *puVar1 = *puVar17;
          *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar17 + 1);
        }
        else {
          if (-1 < (int)uVar23) {
            uVar16 = uVar23;
            if (uVar15 <= uVar23) goto LAB_00108c41;
            do {
              uVar16 = (uVar16 >> 1) + 8 + uVar16;
            } while (uVar16 < uVar15);
            if (0x15555555 < uVar16) {
              *(uint *)(lVar10 + 0x20) = ~uVar23;
              goto LAB_001091c5;
            }
            pvVar12 = realloc(*(void **)(lVar10 + 0x28),(ulong)uVar16 * 0xc);
            if (pvVar12 == (void *)0x0) {
              if (*(uint *)(lVar10 + 0x20) < uVar16) {
                *(uint *)(lVar10 + 0x20) = ~*(uint *)(lVar10 + 0x20);
                goto LAB_001091c5;
              }
              uVar20 = (ulong)*(uint *)(lVar10 + 0x24);
              pvVar12 = *(void **)(lVar10 + 0x28);
              uVar15 = *(uint *)(lVar10 + 0x24) + 1;
            }
            else {
              *(void **)(lVar10 + 0x28) = pvVar12;
              uVar20 = (ulong)*(uint *)(lVar10 + 0x24);
              *(uint *)(lVar10 + 0x20) = uVar16;
              uVar15 = *(uint *)(lVar10 + 0x24) + 1;
            }
            goto LAB_00108c45;
          }
LAB_001091c5:
          __hb_CrapPool = CONCAT44(_DAT_00110014,__hb_NullPool);
          _pthread_mutex_lock = __hb_NullPool;
        }
        puVar17 = (undefined8 *)((long)puVar17 + 0xc);
      } while( true );
    }
  }
  else {
    local_88 = 0;
  }
  uVar20 = uVar20 & 0xffffffff;
  lVar10 = *(long *)(this + 0x10);
  pvVar21 = (void *)(lVar10 - uVar20);
  *(void **)(this + 0x10) = pvVar21;
  if (pvVar4 == (void *)0x0) {
    memmove(pvVar21,pvVar12,uVar20);
    pvVar21 = *(void **)(this + 0x10);
    lVar10 = (long)pvVar21 + uVar20;
  }
  plVar3[1] = lVar10;
  *plVar3 = (long)pvVar21;
  uVar16 = *(uint *)(this + 0x54);
  uVar20 = (ulong)uVar16;
  uVar23 = *(uint *)(this + 0x50);
  uVar13 = uVar16 + 1;
  if ((int)uVar23 <= (int)uVar16) {
    if (-1 < (int)uVar23) {
      uVar16 = uVar23;
      if (uVar13 <= uVar23) goto LAB_00108996;
      do {
        uVar16 = (uVar16 >> 1) + 8 + uVar16;
      } while (uVar16 < uVar13);
      if (0x1fffffff < uVar16) {
LAB_001091e4:
        __hb_CrapPool = CONCAT44(_DAT_00110014,__hb_NullPool);
        iVar18 = *(int *)(this + 0x2c);
        *(uint *)(this + 0x50) = ~uVar23;
        goto joined_r0x00109200;
      }
      pvVar12 = realloc(*(void **)(this + 0x58),(ulong)uVar16 << 3);
      if (pvVar12 == (void *)0x0) {
        uVar23 = *(uint *)(this + 0x50);
        if (uVar23 < uVar16) goto LAB_001091e4;
        pvVar12 = *(void **)(this + 0x58);
        uVar20 = (ulong)*(uint *)(this + 0x54);
        uVar13 = *(uint *)(this + 0x54) + 1;
      }
      else {
        *(void **)(this + 0x58) = pvVar12;
        *(uint *)(this + 0x50) = uVar16;
        uVar20 = (ulong)*(uint *)(this + 0x54);
        uVar13 = *(uint *)(this + 0x54) + 1;
        uVar23 = uVar16;
      }
      goto LAB_0010899f;
    }
    __hb_CrapPool = CONCAT44(_DAT_00110014,__hb_NullPool);
    iVar18 = *(int *)(this + 0x2c);
joined_r0x00109200:
    if (iVar18 != 0) goto LAB_001089b8;
LAB_00108d20:
    *(undefined4 *)(this + 0x2c) = 1;
LAB_001089b8:
    if ((int)plVar3[2] != 0) {
      free((void *)plVar3[3]);
    }
    plVar3[2] = 0;
    plVar3[3] = 0;
    if ((int)plVar3[4] != 0) {
      free((void *)plVar3[5]);
    }
    plVar3[4] = 0;
    plVar3[5] = 0;
    return 0;
  }
LAB_00108996:
  pvVar12 = *(void **)(this + 0x58);
LAB_0010899f:
  iVar18 = *(int *)(this + 0x2c);
  *(uint *)(this + 0x54) = uVar13;
  *(long **)((long)pvVar12 + uVar20 * 8) = plVar3;
  if (iVar18 != 0) goto LAB_001089b8;
  if ((int)uVar23 < 0) goto LAB_00108d20;
  uVar16 = *(int *)(this + 0x54) - 1;
  iVar18 = 0;
  if (param_1) {
    if (this[0x70] == (hb_serialize_context_t)0x0) goto LAB_00108cdd;
    uVar23 = *(uint *)(this + 0x78);
    if ((uVar23 >> 1) + uVar23 < *(uint *)(this + 0x7c)) {
LAB_00108d64:
      lVar10 = *(long *)(this + 0x88);
      iVar18 = *(int *)(this + 0x74);
      uVar20 = (ulong)(local_88 & 0x3fffffff) % (ulong)*(uint *)(this + 0x80);
      plVar19 = (long *)(lVar10 + uVar20 * 0x10);
      bVar2 = *(byte *)(plVar19 + 1);
      if ((bVar2 & 2) == 0) {
        *plVar19 = (long)plVar3;
        *(uint *)((long)plVar19 + 0xc) = uVar16;
        *(uint *)(plVar19 + 1) = local_88 * 4 + 3;
        *(uint *)(this + 0x78) = uVar23 + 1;
        *(int *)(this + 0x74) = iVar18 + 1;
      }
      else {
        uVar25 = 0xffffffff;
        uVar13 = 0;
        do {
          if ((local_88 & 0x3fffffff) == *(uint *)(plVar19 + 1) >> 2) {
            puVar5 = (undefined8 *)*plVar19;
            uVar14 = puVar5[1] - (long)*puVar5;
            if (uVar14 == plVar3[1] - *plVar3) {
              iVar9 = *(int *)((long)puVar5 + 0x14);
              iVar7 = *(int *)((long)plVar3 + 0x14);
              if ((iVar9 == iVar7) &&
                 (((int)uVar14 == 0 ||
                  (iVar8 = memcmp((void *)*puVar5,(void *)*plVar3,uVar14 & 0xffffffff), iVar8 == 0))
                 )) {
                if ((iVar7 * 0xc == iVar9 * 0xc) &&
                   (((iVar7 * 3 & 0x3fffffffU) == 0 ||
                    (iVar9 = memcmp((void *)puVar5[3],(void *)plVar3[3],(ulong)(uint)(iVar7 * 0xc)),
                    iVar9 == 0)))) {
                  if ((int)uVar25 == -1) goto LAB_00108f41;
                  goto LAB_00108f36;
                }
              }
            }
          }
          if (((int)uVar25 == -1) && ((bVar2 & 1) == 0)) {
            uVar25 = uVar20;
          }
          uVar13 = uVar13 + 1;
          uVar15 = (int)uVar20 + uVar13 & *(uint *)(this + 0x7c);
          uVar20 = (ulong)uVar15;
          plVar19 = (long *)((ulong)uVar15 * 0x10 + lVar10);
          bVar2 = *(byte *)(plVar19 + 1);
        } while ((bVar2 & 2) != 0);
        if ((int)uVar25 == -1) {
LAB_00108fd8:
          uVar23 = uVar23 + 1;
        }
        else {
LAB_00108f36:
          plVar19 = (long *)(lVar10 + uVar25 * 0x10);
LAB_00108f41:
          if ((*(byte *)(plVar19 + 1) & 2) == 0) goto LAB_00108fd8;
          iVar18 = iVar18 - (*(byte *)(plVar19 + 1) & 1);
        }
        *plVar19 = (long)plVar3;
        *(uint *)((long)plVar19 + 0xc) = uVar16;
        *(uint *)(plVar19 + 1) = local_88 * 4 + 3;
        *(int *)(this + 0x74) = iVar18 + 1;
        *(uint *)(this + 0x78) = uVar23;
        if ((*(ushort *)(this + 0x72) < uVar13) && (*(uint *)(this + 0x7c) < uVar23 * 8)) {
          hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc
                    ((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> *)
                     (this + 0x60),*(uint *)(this + 0x7c) - 8);
          iVar18 = *(int *)(this + 0x2c);
          goto LAB_00108cc5;
        }
      }
    }
    else {
      cVar6 = hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc
                        ((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> *
                         )(this + 0x60),0);
      if (cVar6 != '\0') {
        uVar23 = *(uint *)(this + 0x78);
        goto LAB_00108d64;
      }
    }
    iVar18 = *(int *)(this + 0x2c);
  }
LAB_00108cc5:
  if (this[0x70] != (hb_serialize_context_t)0x0) {
    return uVar16;
  }
  if (iVar18 != 0) {
    return uVar16;
  }
LAB_00108cdd:
  *(undefined4 *)(this + 0x2c) = 1;
  return uVar16;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_pool_t<hb_serialize_context_t::object_t, 32u>::alloc() */

undefined1 (*) [16] __thiscall
hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc
          (hb_pool_t<hb_serialize_context_t::object_t,32u> *this)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pauVar1 = *(undefined1 (**) [16])this;
  if (pauVar1 != (undefined1 (*) [16])0x0) goto LAB_00109253;
  uVar7 = *(uint *)(this + 8);
  if ((int)uVar7 < 0) {
    return (undefined1 (*) [16])0x0;
  }
  uVar8 = uVar7;
  if (uVar7 < *(int *)(this + 0xc) + 1U) {
    do {
      uVar8 = (uVar8 >> 1) + 8 + uVar8;
    } while (uVar8 < *(int *)(this + 0xc) + 1U);
    if (0x1fffffff < uVar8) {
      *(uint *)(this + 8) = ~uVar7;
      return (undefined1 (*) [16])0x0;
    }
    pvVar5 = realloc(*(void **)(this + 0x10),(ulong)uVar8 << 3);
    if (pvVar5 == (void *)0x0) {
      if (*(uint *)(this + 8) < uVar8) {
        *(uint *)(this + 8) = ~*(uint *)(this + 8);
        return (undefined1 (*) [16])0x0;
      }
    }
    else {
      *(void **)(this + 0x10) = pvVar5;
      *(uint *)(this + 8) = uVar8;
    }
  }
  pauVar1 = (undefined1 (*) [16])malloc(0x700);
  if (pauVar1 == (undefined1 (*) [16])0x0) {
    return (undefined1 (*) [16])0x0;
  }
  uVar7 = *(uint *)(this + 0xc);
  uVar2 = (ulong)uVar7;
  uVar8 = *(uint *)(this + 8);
  uVar6 = uVar7 + 1;
  if ((int)uVar7 < (int)uVar8) {
LAB_001092b7:
    *(uint *)(this + 0xc) = uVar6;
    *(undefined1 (**) [16])(*(long *)(this + 0x10) + uVar2 * 8) = pauVar1;
  }
  else {
    if (-1 < (int)uVar8) {
      uVar7 = uVar8;
      if (uVar8 < uVar6) {
        do {
          uVar7 = uVar7 + 8 + (uVar7 >> 1);
        } while (uVar7 < uVar6);
        if (0x1fffffff < uVar7) {
          *(uint *)(this + 8) = ~uVar8;
          goto LAB_001093a7;
        }
        pvVar5 = realloc(*(void **)(this + 0x10),(ulong)uVar7 << 3);
        if (pvVar5 == (void *)0x0) {
          if (*(uint *)(this + 8) < uVar7) {
            *(uint *)(this + 8) = ~*(uint *)(this + 8);
            goto LAB_001093a7;
          }
        }
        else {
          *(void **)(this + 0x10) = pvVar5;
          *(uint *)(this + 8) = uVar7;
        }
        uVar2 = (ulong)*(uint *)(this + 0xc);
        uVar6 = *(uint *)(this + 0xc) + 1;
      }
      goto LAB_001092b7;
    }
LAB_001093a7:
    __hb_CrapPool = __hb_NullPool;
  }
  *(undefined1 **)*pauVar1 = pauVar1[3] + 8;
  pauVar3 = pauVar1 + 7;
  do {
    *(undefined1 (**) [16])(pauVar3[-4] + 8) = pauVar3;
    pauVar4 = pauVar3 + 7;
    *(undefined1 **)*pauVar3 = pauVar3[3] + 8;
    pauVar3 = pauVar4;
  } while (pauVar1 + 0x70 != pauVar4);
  *(undefined8 *)(pauVar1[0x6c] + 8) = 0;
  *(undefined1 (**) [16])this = pauVar1;
LAB_00109253:
  *(undefined8 *)this = *(undefined8 *)*pauVar1;
  *(undefined8 *)pauVar1[3] = 0;
  *pauVar1 = (undefined1  [16])0x0;
  pauVar1[1] = (undefined1  [16])0x0;
  pauVar1[2] = (undefined1  [16])0x0;
  return pauVar1;
}



/* hb_vector_t<CFF::parsed_cs_op_t, false>::alloc(unsigned int, bool) */

undefined8 __thiscall
hb_vector_t<CFF::parsed_cs_op_t,false>::alloc
          (hb_vector_t<CFF::parsed_cs_op_t,false> *this,uint param_1,bool param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar1 = *(uint *)this;
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (param_2) {
    uVar3 = *(uint *)(this + 4);
    if (*(uint *)(this + 4) <= param_1) {
      uVar3 = param_1;
    }
    if (uVar1 < uVar3) {
      if (0xfffffff < uVar3) goto LAB_00109426;
      pvVar2 = *(void **)(this + 8);
    }
    else {
      if (uVar1 >> 2 <= uVar3) {
        return 1;
      }
      if (0xfffffff < uVar3) goto LAB_00109426;
      pvVar2 = *(void **)(this + 8);
      if (uVar3 == 0) {
        free(pvVar2);
        uVar3 = 0;
        pvVar2 = (void *)0x0;
        goto LAB_00109496;
      }
    }
  }
  else {
    uVar3 = uVar1;
    if (param_1 <= uVar1) {
      return 1;
    }
    do {
      uVar3 = uVar3 + 8 + (uVar3 >> 1);
    } while (uVar3 < param_1);
    if (0xfffffff < uVar3) goto LAB_00109426;
    pvVar2 = *(void **)(this + 8);
  }
  pvVar2 = realloc(pvVar2,(ulong)uVar3 << 4);
  if (pvVar2 != (void *)0x0) {
LAB_00109496:
    *(void **)(this + 8) = pvVar2;
    *(uint *)this = uVar3;
    return 1;
  }
  uVar1 = *(uint *)this;
  if (uVar3 <= uVar1) {
    return 1;
  }
LAB_00109426:
  *(uint *)this = ~uVar1;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cff2_cs_opset_subr_subset_t::process_call_subr(unsigned int, CFF::cs_type_t,
   CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>&, CFF::subr_subset_param_t&,
   CFF::biased_subrs_t<CFF::Subrs<OT::IntType<unsigned int, 4u> > >&, hb_set_t*) */

void cff2_cs_opset_subr_subset_t::process_call_subr
               (undefined4 param_1,undefined4 param_2,long *param_3,long *param_4,int *param_5,
               long param_6)

{
  uint uVar1;
  int iVar2;
  CFFIndex<OT::IntType<unsigned_int,4u>> *this;
  uint *puVar3;
  byte bVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long *plVar10;
  double *pdVar11;
  long lVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [12];
  
  lVar12 = *param_3;
  uVar17 = *(uint *)(param_3 + 1);
  uVar1 = *(uint *)((long)param_3 + 0xc);
  if (*(int *)((long)param_3 + 0x14) == 0) {
    uVar18 = __hb_NullPool;
    uVar19 = __hb_CrapPool;
    uVar20 = _pthread_mutex_lock;
    _pthread_mutex_destroy = _pthread_mutex_unlock;
    *(undefined1 *)(param_3 + 2) = 1;
    pdVar11 = (double *)&_hb_CrapPool;
    __hb_CrapPool = uVar18;
    _pthread_mutex_lock = uVar19;
    _pthread_mutex_unlock = uVar20;
  }
  else {
    uVar7 = *(int *)((long)param_3 + 0x14) - 1;
    *(uint *)((long)param_3 + 0x14) = uVar7;
    pdVar11 = (double *)(param_3 + (ulong)uVar7 * 4 + 3);
  }
  uVar7 = (int)*pdVar11 + *param_5;
  if ((((int)uVar7 < 0) ||
      (this = *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(param_5 + 2),
      this == (CFFIndex<OT::IntType<unsigned_int,4u>> *)0x0)) ||
     (uVar16 = *(uint *)this,
     (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18) <= uVar7)
     ) {
LAB_00109760:
    uVar7 = *(uint *)((long)param_3 + 0x404c);
    *(int *)((long)param_3 + 0xc) = (int)param_3[1] + 1;
  }
  else {
    uVar16 = *(uint *)((long)param_3 + 0x4064);
    uVar8 = (ulong)uVar16;
    if (9 < uVar16) goto LAB_00109760;
    lVar5 = param_3[1];
    *(uint *)((long)param_3 + 0x4064) = uVar16 + 1;
    param_3[0x807] = *param_3;
    param_3[0x808] = lVar5;
    param_3[uVar8 * 3 + 0x80d] = *param_3;
    param_3[uVar8 * 3 + 0x80e] = lVar5;
    param_3[uVar8 * 3 + 0x80f] = param_3[0x809];
    auVar21 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](this,uVar7);
    *(undefined4 *)(param_3 + 0x809) = param_2;
    *(undefined1 (*) [12])(param_3 + 0x807) = auVar21;
    *(undefined4 *)((long)param_3 + 0x4044) = 0;
    *(uint *)((long)param_3 + 0x404c) = uVar7;
    *param_3 = param_3[0x807];
    param_3[1] = param_3[0x808];
  }
  puVar3 = (uint *)*param_4;
  if (((byte)puVar3[6] & 1) == 0) {
    *(byte *)(puVar3 + 6) = (byte)puVar3[6] | 0x10;
    uVar16 = puVar3[3];
    uVar15 = 1;
    uVar14 = uVar16;
    if (uVar16 != 0) {
      uVar14 = uVar16 - 1;
      puVar3[3] = uVar14;
      uVar15 = uVar16;
    }
    uVar16 = uVar7;
    if ((int)uVar14 < (int)puVar3[2]) {
LAB_001096b5:
      plVar10 = (long *)((ulong)uVar14 * 0x10 + *(long *)(puVar3 + 4));
      puVar3[3] = uVar15;
      *plVar10 = 0;
      *(undefined4 *)(plVar10 + 1) = 0xffff;
      *(undefined2 *)((long)plVar10 + 0xc) = 0;
      *(short *)((long)plVar10 + 0xe) = (short)uVar7;
      uVar7 = uVar16;
    }
    else {
      cVar6 = hb_vector_t<CFF::parsed_cs_op_t,false>::alloc
                        ((hb_vector_t<CFF::parsed_cs_op_t,false> *)(puVar3 + 2),uVar15,false);
      if (cVar6 != '\0') {
        uVar14 = puVar3[3];
        uVar16 = *(uint *)((long)param_3 + 0x404c);
        uVar15 = uVar14 + 1;
        goto LAB_001096b5;
      }
      _pthread_mutex_lock = __hb_CrapPool;
      uVar7 = *(uint *)((long)param_3 + 0x404c);
      plVar10 = (long *)&_hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
    }
    uVar16 = *puVar3;
    *(undefined4 *)(plVar10 + 1) = param_1;
    if (uVar17 < uVar16) {
      uVar13 = 0;
    }
    else {
      uVar17 = uVar17 - uVar16;
      uVar14 = uVar1 - uVar16;
      uVar13 = (undefined1)uVar14;
      if (uVar17 < uVar14) {
        uVar13 = (undefined1)uVar17;
      }
    }
    *(undefined1 *)((long)plVar10 + 0xc) = uVar13;
    *plVar10 = lVar12 + (ulong)uVar16;
    *puVar3 = uVar1;
  }
  if (*(char *)(param_6 + 0x40) == '\0') {
    if ((uVar7 != 0xffffffff) && (*(char *)(param_6 + 0x10) == '\x01')) {
      *(undefined4 *)(param_6 + 0x14) = 0xffffffff;
      puVar9 = (undefined4 *)hb_bit_set_t::page_for((hb_bit_set_t *)(param_6 + 0x10),uVar7,true);
      if (puVar9 != (undefined4 *)0x0) {
        *(ulong *)(puVar9 + (ulong)(uVar7 >> 6 & 7) * 2 + 2) =
             *(ulong *)(puVar9 + (ulong)(uVar7 >> 6 & 7) * 2 + 2) | 1L << ((byte)uVar7 & 0x3f);
        *puVar9 = 0xffffffff;
      }
    }
  }
  else if ((*(char *)(param_6 + 0x10) != '\0') &&
          (puVar9 = (undefined4 *)
                    hb_bit_set_t::page_for((hb_bit_set_t *)(param_6 + 0x10),uVar7,false),
          puVar9 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_6 + 0x14) = 0xffffffff;
    bVar4 = (byte)uVar7 & 0x3f;
    *(ulong *)(puVar9 + (ulong)(uVar7 >> 6 & 7) * 2 + 2) =
         *(ulong *)(puVar9 + (ulong)(uVar7 >> 6 & 7) * 2 + 2) &
         (-2L << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4);
    *puVar9 = 0xffffffff;
  }
  iVar2 = (int)param_3[0x809];
  if (iVar2 == 1) {
    lVar12 = param_4[2];
    uVar17 = *(uint *)((long)param_3 + 0x404c);
    if (*(uint *)(lVar12 + 4) <= uVar17) goto LAB_00109636;
LAB_0010965f:
    lVar12 = *(long *)(lVar12 + 8) + (ulong)uVar17 * 0x28;
  }
  else {
    if (iVar2 == 2) {
      lVar12 = param_4[3];
      uVar17 = *(uint *)((long)param_3 + 0x404c);
      if (*(uint *)(lVar12 + 4) <= uVar17) goto LAB_00109636;
      goto LAB_0010965f;
    }
    if (iVar2 != 0) goto LAB_00109636;
    lVar12 = param_4[1];
  }
  if (lVar12 != 0) {
    if ((*(byte *)(lVar12 + 0x18) & 1) != 0) {
      *param_4 = lVar12;
      return;
    }
    if (*(int *)(lVar12 + 0xc) != 0) {
      *(uint *)((long)param_3 + 0xc) = *(uint *)(param_3 + 1) + 1;
      return;
    }
    hb_vector_t<CFF::parsed_cs_op_t,false>::alloc
              ((hb_vector_t<CFF::parsed_cs_op_t,false> *)(lVar12 + 8),*(uint *)(param_3 + 1),true);
    *param_4 = lVar12;
    return;
  }
LAB_00109636:
  *(int *)((long)param_3 + 0xc) = (int)param_3[1] + 1;
  return;
}



/* hb_vector_t<CFF::parsed_cs_str_t, false>::alloc(unsigned int, bool) */

undefined8 __thiscall
hb_vector_t<CFF::parsed_cs_str_t,false>::alloc
          (hb_vector_t<CFF::parsed_cs_str_t,false> *this,uint param_1,bool param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined4 *puVar10;
  void *__ptr;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  
  uVar13 = *(uint *)this;
  if ((int)uVar13 < 0) {
    return 0;
  }
  if (param_2) {
    uVar12 = (ulong)*(uint *)(this + 4);
    if (*(uint *)(this + 4) <= param_1) {
      uVar12 = (ulong)param_1;
    }
    uVar11 = (uint)uVar12;
    if (uVar11 <= uVar13) {
      if (uVar13 >> 2 <= uVar11) {
        return 1;
      }
      if (0x6666666 < uVar11) goto LAB_001098f9;
      if (uVar11 == 0) {
        puVar6 = (undefined4 *)0x0;
        free(*(void **)(this + 8));
        goto LAB_00109a6d;
      }
      goto LAB_00109aa4;
    }
    if ((0x6666666 < uVar11) ||
       (puVar6 = (undefined4 *)malloc(uVar12 * 0x28), puVar6 == (undefined4 *)0x0))
    goto LAB_001098f9;
  }
  else {
    if (param_1 <= uVar13) {
      return 1;
    }
    uVar12 = (ulong)uVar13;
    do {
      uVar11 = (int)uVar12 + 8 + (int)(uVar12 >> 1);
      uVar12 = (ulong)uVar11;
    } while (uVar11 < param_1);
    if (0x6666666 < uVar11) goto LAB_001098f9;
LAB_00109aa4:
    uVar11 = (uint)uVar12;
    puVar6 = (undefined4 *)malloc(uVar12 * 0x28);
    if (puVar6 == (undefined4 *)0x0) {
      if (uVar11 <= uVar13) {
        return 1;
      }
LAB_001098f9:
      *(uint *)this = ~uVar13;
      return 0;
    }
  }
  __ptr = *(void **)(this + 8);
  lVar14 = 0;
  uVar13 = 0;
  puVar10 = puVar6;
  if (*(int *)(this + 4) != 0) {
    do {
      puVar1 = (undefined4 *)((long)__ptr + lVar14);
      *(byte *)(puVar10 + 6) = *(byte *)(puVar10 + 6) & 0xe4;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      uVar5 = *puVar1;
      *(undefined8 *)(puVar10 + 4) = 0;
      *puVar10 = uVar5;
      uVar5 = puVar1[2];
      *(undefined8 *)(puVar10 + 8) = 0;
      puVar10[2] = uVar5;
      puVar1[2] = 0;
      puVar10[3] = puVar1[3];
      *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(puVar1 + 4);
      *(undefined8 *)(puVar1 + 4) = 0;
      bVar3 = *(byte *)(puVar10 + 6);
      bVar7 = *(byte *)(puVar1 + 6) & 1;
      *(byte *)(puVar10 + 6) = bVar3 & 0xfe | bVar7;
      bVar8 = *(byte *)(puVar1 + 6) & 2;
      *(byte *)(puVar10 + 6) = bVar3 & 0xfc | bVar7 | bVar8;
      bVar9 = *(byte *)(puVar1 + 6) & 4;
      *(byte *)(puVar10 + 6) = bVar3 & 0xf8 | bVar7 | bVar8 | bVar9;
      bVar4 = *(byte *)(puVar1 + 6);
      *(byte *)(puVar10 + 6) = bVar3 & 0xf0 | bVar7 | bVar8 | bVar9 | bVar4 & 8;
      *(byte *)(puVar10 + 6) =
           bVar3 & 0xe0 | bVar7 | bVar8 | bVar9 | bVar4 & 8 | *(byte *)(puVar1 + 6) & 0x10;
      uVar2 = *(undefined8 *)(puVar1 + 8);
      puVar10[7] = puVar1[7];
      *(undefined8 *)(puVar10 + 8) = uVar2;
      if (puVar1[2] != 0) {
        free(*(void **)(puVar1 + 4));
        __ptr = *(void **)(this + 8);
      }
      uVar13 = uVar13 + 1;
      puVar10 = puVar10 + 10;
      lVar14 = lVar14 + 0x28;
    } while (uVar13 < *(uint *)(this + 4));
  }
  free(__ptr);
LAB_00109a6d:
  *(undefined4 **)(this + 8) = puVar6;
  *(uint *)this = uVar11;
  return 1;
}



/* hb_vector_t<CFF::parsed_cs_str_vec_t, false>::resize(int, bool, bool) */

undefined8 __thiscall
hb_vector_t<CFF::parsed_cs_str_vec_t,false>::resize
          (hb_vector_t<CFF::parsed_cs_str_vec_t,false> *this,int param_1,bool param_2,bool param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  
  uVar3 = 0;
  if (-1 < param_1) {
    uVar3 = param_1;
  }
  uVar4 = *(uint *)this;
  if ((int)uVar4 < 0) {
    return 0;
  }
  if (param_3) {
    uVar8 = *(uint *)(this + 4);
    uVar2 = uVar8;
    if (uVar8 <= uVar3) {
      uVar2 = uVar3;
    }
    uVar9 = (ulong)uVar2;
    if (uVar4 < uVar2) {
      if (0xfffffff < uVar2) goto LAB_00109b9a;
      pvVar7 = *(void **)(this + 8);
LAB_00109ca4:
      uVar8 = (uint)uVar9;
      pvVar7 = realloc(pvVar7,uVar9 << 4);
      if (pvVar7 == (void *)0x0) {
        uVar4 = *(uint *)this;
        if (uVar4 < uVar8) {
LAB_00109b9a:
          *(uint *)this = ~uVar4;
          return 0;
        }
        goto LAB_00109b09;
      }
    }
    else {
      if (uVar4 >> 2 <= uVar2) goto LAB_00109b0c;
      if (0xfffffff < uVar2) goto LAB_00109b9a;
      pvVar7 = *(void **)(this + 8);
      if (uVar2 != 0) goto LAB_00109ca4;
      free(pvVar7);
      uVar8 = 0;
      pvVar7 = (void *)0x0;
    }
    *(void **)(this + 8) = pvVar7;
    *(uint *)this = uVar8;
  }
  else {
    uVar8 = uVar4;
    if (uVar4 < uVar3) {
      do {
        uVar8 = (uVar8 >> 1) + 8 + uVar8;
      } while (uVar8 < uVar3);
      if (0xfffffff < uVar8) goto LAB_00109b9a;
      pvVar7 = *(void **)(this + 8);
      uVar9 = (ulong)uVar8;
      goto LAB_00109ca4;
    }
  }
LAB_00109b09:
  uVar8 = *(uint *)(this + 4);
LAB_00109b0c:
  if (uVar8 < uVar3) {
    if (param_2) {
      lVar10 = *(long *)(this + 8);
      puVar5 = (undefined4 *)((ulong)uVar8 * 0x10 + lVar10);
      do {
        *puVar5 = 0;
        puVar6 = puVar5 + 4;
        puVar5[1] = 0;
        *(undefined8 *)(puVar5 + 2) = 0;
        puVar5 = puVar6;
      } while ((undefined4 *)(lVar10 + 0x10 + ((ulong)((uVar3 - 1) - uVar8) + (ulong)uVar8) * 0x10)
               != puVar6);
    }
  }
  else if ((uVar3 < uVar8) && (param_2)) {
    piVar1 = (int *)(*(long *)(this + 8) + -0x10 + (ulong)uVar8 * 0x10);
    piVar13 = piVar1;
    do {
      piVar14 = piVar13 + -4;
      if (*piVar13 != 0) {
        uVar4 = piVar13[1];
        pvVar7 = *(void **)(piVar13 + 2);
        lVar10 = (long)pvVar7 + (ulong)uVar4 * 0x28 + -0x28;
        if (uVar4 != 0) {
          lVar12 = ((ulong)(uVar4 - 1) + 1) * -0x28 + lVar10;
          do {
            while (lVar11 = lVar10 + -0x28, *(int *)(lVar10 + 8) != 0) {
              free(*(void **)(lVar10 + 0x10));
              lVar10 = lVar11;
              if (lVar12 == lVar11) goto LAB_00109c61;
            }
            lVar10 = lVar11;
          } while (lVar12 != lVar11);
LAB_00109c61:
          pvVar7 = *(void **)(piVar13 + 2);
        }
        free(pvVar7);
      }
      piVar13 = piVar14;
    } while (piVar1 + (ulong)(uVar8 - uVar3) * -4 != piVar14);
  }
  *(uint *)(this + 4) = uVar3;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::subr_subsetter_t<cff2_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned int, 4u> >,
   OT::cff2::accelerator_subset_t const, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,
   cff2_cs_opset_subr_subset_t, 65535u>::closure_subroutines(CFF::parsed_cs_str_vec_t const&,
   hb_vector_t<CFF::parsed_cs_str_vec_t, false> const&) */

undefined8 __thiscall
CFF::
subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
::closure_subroutines
          (subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
           *this,parsed_cs_str_vec_t *param_1,hb_vector_t *param_2)

{
  ushort *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *local_78;
  undefined *local_70;
  parsed_cs_str_vec_t *local_68;
  parsed_cs_str_vec_t *local_60;
  subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
  *local_58;
  hb_set_t *local_50;
  byte local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  hb_bit_set_t::resize((hb_bit_set_t *)(this + 0x20),0,true,false);
  if (this[0x20] !=
      (subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
       )0x0) {
    *(undefined4 *)(this + 0x24) = 0;
    this[0x50] = (subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                  )0x0;
  }
  lVar7 = 0;
  if (*(int *)(this + 0x5c) != 0) {
    do {
      lVar10 = *(long *)(this + 0x60) + lVar7 * 0x48;
      hb_bit_set_t::resize((hb_bit_set_t *)(lVar10 + 0x10),0,true,false);
      if (*(char *)(lVar10 + 0x10) != '\0') {
        *(undefined4 *)(lVar10 + 0x14) = 0;
        *(undefined1 *)(lVar10 + 0x40) = 0;
      }
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(this + 0x5c));
  }
  puVar8 = *(uint **)(*(long *)(this + 8) + 200);
  puVar2 = puVar8 + (ulong)*(uint *)(*(long *)(this + 8) + 0xc4) * 2;
  do {
    if (puVar2 == puVar8) {
      uVar5 = 1;
LAB_00109f6a:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar5;
    }
    uVar3 = *puVar8;
    uVar4 = CFF2FDSelect::get_fd(*(CFF2FDSelect **)(*(long *)this + 0x90),puVar8[1]);
    if (*(uint *)(*(long *)this + 0x98) <= uVar4) {
      uVar5 = 0;
      goto LAB_00109f6a;
    }
    local_48 = (byte)*(undefined4 *)(*(long *)(this + 8) + 0x14) & 1;
    if (uVar4 < *(uint *)(this + 0x5c)) {
      local_50 = (hb_set_t *)(*(long *)(this + 0x60) + (ulong)uVar4 * 0x48);
    }
    else {
      _round = _memcmp;
      uVar5 = __hb_CrapPool;
      uVar11 = _pthread_mutex_lock;
      uVar12 = _pthread_mutex_unlock;
      uVar13 = _pthread_mutex_destroy;
      uVar14 = _free;
      uVar15 = _memcpy;
      _memcmp = _memmove;
      local_50 = (hb_set_t *)&_hb_CrapPool;
      __hb_CrapPool = __hb_NullPool;
      _pthread_mutex_lock = uVar5;
      _pthread_mutex_unlock = uVar11;
      _pthread_mutex_destroy = uVar12;
      _free = uVar13;
      _memcpy = uVar14;
      _memmove = uVar15;
    }
    local_60 = (parsed_cs_str_vec_t *)&_hb_NullPool;
    if (uVar4 < *(uint *)(param_2 + 4)) {
      local_60 = (parsed_cs_str_vec_t *)((ulong)uVar4 * 0x10 + *(long *)(param_2 + 8));
    }
    if (*(uint *)(this + 0x6c) == 0) {
      puVar6 = &_hb_NullPool;
      local_70 = puVar6;
      if (uVar3 < *(uint *)(this + 0xe4)) {
        puVar6 = (undefined *)(*(long *)(this + 0xe8) + (ulong)uVar3 * 0x28);
        local_70 = puVar6;
      }
    }
    else {
      puVar9 = (undefined8 *)&_hb_NullPool;
      if (uVar3 < *(uint *)(this + 0x6c)) {
        puVar9 = (undefined8 *)(*(long *)(this + 0x70) + (ulong)uVar3 * 8);
      }
      puVar6 = (undefined *)*puVar9;
      local_70 = (undefined *)*puVar9;
    }
    local_78 = local_70;
    local_68 = param_1;
    local_58 = this + 0x10;
    if ((puVar6[0x18] & 0x10) != 0) {
      lVar10 = *(long *)(puVar6 + 0x10);
      lVar7 = lVar10 + (ulong)*(uint *)(puVar6 + 0xc) * 0x10;
      for (; lVar10 != lVar7; lVar10 = lVar10 + 0x10) {
        while( true ) {
          if ((local_48 != 0) && (*(char *)(lVar10 + 0xd) != '\0')) goto LAB_00109eac;
          if (*(int *)(lVar10 + 8) != 10) break;
          puVar1 = (ushort *)(lVar10 + 0xe);
          lVar10 = lVar10 + 0x10;
          collect_subr_refs_in_subr
                    ((uint)*puVar1,local_60,local_50,(subr_subset_param_t *)&local_78);
          if (lVar7 == lVar10) goto LAB_00109ef0;
        }
        if (*(int *)(lVar10 + 8) == 0x1d) {
          collect_subr_refs_in_subr
                    ((uint)*(ushort *)(lVar10 + 0xe),local_68,(hb_set_t *)local_58,
                     (subr_subset_param_t *)&local_78);
        }
LAB_00109eac:
      }
    }
LAB_00109ef0:
    puVar8 = puVar8 + 2;
  } while( true );
}



/* CFF::subr_subsetter_t<cff2_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned int, 4u> >,
   OT::cff2::accelerator_subset_t const, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,
   cff2_cs_opset_subr_subset_t, 65535u>::encode_str(CFF::parsed_cs_str_t const&, unsigned int,
   hb_vector_t<unsigned char, false>&, bool) const */

uint __thiscall
CFF::
subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
::encode_str(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
             *this,parsed_cs_str_t *param_1,uint param_2,hb_vector_t *param_3,bool param_4)

{
  double dVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined1 uVar19;
  long in_FS_OFFSET;
  byte bVar20;
  hb_vector_t *local_48;
  long local_40;
  
  bVar20 = 0;
  uVar6 = *(uint *)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)uVar6 < 0) {
    uVar6 = ~uVar6;
    *(uint *)param_3 = uVar6;
  }
  lVar11 = *(long *)(this + 8);
  *(undefined4 *)(param_3 + 4) = 0;
  uVar3 = *(uint *)(lVar11 + 0x14);
  local_48 = param_3;
  if (param_4) {
    uVar16 = 0;
    if (((((byte)param_1[0x18] & 8) != 0) && (uVar16 = 0, (uVar3 & 1) != 0)) &&
       (((byte)param_1[0x18] & 2) != 0)) {
      dVar1 = *(double *)(param_1 + 0x20);
      if (dVar1 == (double)(int)(short)(int)dVar1) {
        str_encoder_t::encode_int((str_encoder_t *)&local_48,(int)dVar1);
      }
      else {
        iVar13 = (int)(dVar1 * _LC12);
        if (uVar6 == 0) {
          cVar5 = hb_vector_t<unsigned_char,false>::alloc
                            ((hb_vector_t<unsigned_char,false> *)param_3,1,false);
          if (cVar5 == '\0') {
            _hb_CrapPool = _hb_NullPool;
          }
          else {
            uVar6 = *(uint *)(param_3 + 4);
            *(uint *)(param_3 + 4) = uVar6 + 1;
            *(undefined1 *)(*(long *)(param_3 + 8) + (ulong)uVar6) = 0xff;
          }
        }
        else {
          *(undefined4 *)(param_3 + 4) = 1;
          **(undefined1 **)(param_3 + 8) = 0xff;
        }
        uVar6 = *(uint *)(param_3 + 4);
        uVar19 = (undefined1)((uint)iVar13 >> 0x18);
        if ((int)uVar6 < *(int *)param_3) {
          *(uint *)(param_3 + 4) = uVar6 + 1;
          *(undefined1 *)(*(long *)(param_3 + 8) + (ulong)uVar6) = uVar19;
        }
        else {
          cVar5 = hb_vector_t<unsigned_char,false>::alloc
                            ((hb_vector_t<unsigned_char,false> *)param_3,uVar6 + 1,false);
          if (cVar5 == '\0') {
            _hb_CrapPool = _hb_NullPool;
          }
          else {
            uVar6 = *(uint *)(param_3 + 4);
            *(uint *)(param_3 + 4) = uVar6 + 1;
            *(undefined1 *)(*(long *)(param_3 + 8) + (ulong)uVar6) = uVar19;
          }
        }
        uVar6 = *(uint *)(param_3 + 4);
        uVar19 = (undefined1)((uint)iVar13 >> 0x10);
        if ((int)uVar6 < *(int *)param_3) {
          *(uint *)(param_3 + 4) = uVar6 + 1;
          *(undefined1 *)(*(long *)(param_3 + 8) + (ulong)uVar6) = uVar19;
        }
        else {
          cVar5 = hb_vector_t<unsigned_char,false>::alloc
                            ((hb_vector_t<unsigned_char,false> *)param_3,uVar6 + 1,false);
          if (cVar5 == '\0') {
            _hb_CrapPool = _hb_NullPool;
          }
          else {
            uVar6 = *(uint *)(param_3 + 4);
            *(uint *)(param_3 + 4) = uVar6 + 1;
            *(undefined1 *)(*(long *)(param_3 + 8) + (ulong)uVar6) = uVar19;
          }
        }
        uVar6 = *(uint *)(param_3 + 4);
        uVar19 = (undefined1)((uint)iVar13 >> 8);
        if ((int)uVar6 < *(int *)param_3) {
          *(uint *)(param_3 + 4) = uVar6 + 1;
          *(undefined1 *)(*(long *)(param_3 + 8) + (ulong)uVar6) = uVar19;
        }
        else {
          cVar5 = hb_vector_t<unsigned_char,false>::alloc
                            ((hb_vector_t<unsigned_char,false> *)param_3,uVar6 + 1,false);
          if (cVar5 == '\0') {
            _hb_CrapPool = _hb_NullPool;
          }
          else {
            uVar6 = *(uint *)(param_3 + 4);
            *(uint *)(param_3 + 4) = uVar6 + 1;
            *(undefined1 *)(*(long *)(param_3 + 8) + (ulong)uVar6) = uVar19;
          }
        }
        uVar6 = *(uint *)(param_3 + 4);
        if ((int)uVar6 < *(int *)param_3) {
          *(uint *)(param_3 + 4) = uVar6 + 1;
          *(char *)(*(long *)(param_3 + 8) + (ulong)uVar6) = (char)iVar13;
        }
        else {
          cVar5 = hb_vector_t<unsigned_char,false>::alloc
                            ((hb_vector_t<unsigned_char,false> *)param_3,uVar6 + 1,false);
          if (cVar5 == '\0') {
            _hb_CrapPool = _hb_NullPool;
          }
          else {
            uVar6 = *(uint *)(param_3 + 4);
            *(uint *)(param_3 + 4) = uVar6 + 1;
            *(char *)(*(long *)(param_3 + 8) + (ulong)uVar6) = (char)iVar13;
          }
        }
      }
      uVar6 = *(uint *)(param_1 + 0x1c);
      if (uVar6 == 0xffff) {
        uVar16 = *(uint *)(param_3 + 4);
        uVar6 = *(uint *)param_3;
      }
      else {
        if (0xff < uVar6) {
          str_encoder_t::encode_byte((str_encoder_t *)param_3,'\f');
          uVar6 = uVar6 & 0xff;
        }
        str_encoder_t::encode_byte((str_encoder_t *)param_3,(uchar)uVar6);
        uVar16 = *(uint *)(param_3 + 4);
        uVar6 = *(uint *)param_3;
      }
    }
  }
  else {
    uVar16 = 0;
  }
  puVar14 = *(undefined8 **)(param_1 + 0x10);
  puVar18 = puVar14 + (ulong)*(uint *)(param_1 + 0xc) * 2;
  uVar4 = uVar16;
  if (puVar14 != puVar18) {
    iVar13 = 0;
    puVar7 = puVar14;
    do {
      while( true ) {
        iVar13 = iVar13 + (uint)*(byte *)((long)puVar7 + 0xc);
        if ((*(int *)(puVar7 + 1) != 0x1d) && (*(int *)(puVar7 + 1) != 10)) break;
        puVar7 = puVar7 + 2;
        iVar13 = iVar13 + 3;
        if (puVar18 == puVar7) goto LAB_0010a098;
      }
      puVar7 = puVar7 + 2;
    } while (puVar18 != puVar7);
LAB_0010a098:
    uVar4 = iVar13 + uVar16;
  }
  if ((int)uVar6 < 0) {
    uVar6 = 0;
    goto LAB_0010a238;
  }
  if (uVar16 <= uVar4) {
    uVar16 = uVar4;
  }
  if (uVar6 < uVar16) {
    pvVar8 = *(void **)(param_3 + 8);
LAB_0010a0ba:
    pvVar8 = realloc(pvVar8,(ulong)uVar16);
    if (pvVar8 == (void *)0x0) {
      if (*(uint *)param_3 < uVar16) {
        *(uint *)param_3 = ~*(uint *)param_3;
        uVar6 = 0;
        goto LAB_0010a238;
      }
    }
    else {
LAB_0010a0d5:
      *(void **)(param_3 + 8) = pvVar8;
      *(uint *)param_3 = uVar16;
    }
    puVar14 = *(undefined8 **)(param_1 + 0x10);
    puVar18 = puVar14 + (ulong)*(uint *)(param_1 + 0xc) * 2;
  }
  else if (uVar16 < uVar6 >> 2) {
    pvVar8 = *(void **)(param_3 + 8);
    if (uVar16 != 0) goto LAB_0010a0ba;
    free(pvVar8);
    pvVar8 = (void *)0x0;
    goto LAB_0010a0d5;
  }
  if (puVar14 != puVar18) {
    do {
      if ((uVar3 & 1) != 0) {
        while (*(char *)((long)puVar14 + 0xd) != '\0') {
          puVar14 = puVar14 + 2;
          if (puVar18 == puVar14) goto LAB_0010a230;
        }
      }
      if (*(int *)(puVar14 + 1) == 10) {
        puVar15 = &_hb_NullPool;
        if (param_2 < *(uint *)(this + 0xd4)) {
          puVar15 = (undefined *)((ulong)param_2 * 0x48 + *(long *)(this + 0xd8));
        }
        lVar11 = *(long *)(puVar15 + 0x28);
        puVar17 = (uint *)&minus_1;
        if (lVar11 != 0) {
          uVar12 = (ulong)((uint)*(ushort *)((long)puVar14 + 0xe) * -0x61c8864f & 0x3fffffff) %
                   (ulong)*(uint *)(puVar15 + 0x20);
          puVar9 = (uint *)(lVar11 + uVar12 * 0xc);
          bVar2 = (byte)puVar9[1];
          if ((bVar2 & 2) != 0) {
            iVar13 = 0;
            do {
              if ((uint)*(ushort *)((long)puVar14 + 0xe) == *puVar9) {
                puVar17 = (uint *)&minus_1;
                if ((bVar2 & 1) != 0) {
                  puVar17 = puVar9 + 2;
                }
                goto LAB_0010a406;
              }
              iVar13 = iVar13 + 1;
              uVar12 = (ulong)((int)uVar12 + iVar13 & *(uint *)(puVar15 + 0x1c));
              puVar9 = (uint *)(lVar11 + uVar12 * 0xc);
              bVar2 = (byte)puVar9[1];
            } while ((bVar2 & 2) != 0);
            puVar17 = (uint *)&minus_1;
          }
        }
LAB_0010a406:
        str_encoder_t::encode_int((str_encoder_t *)&local_48,*puVar17 - *(int *)(puVar15 + 0x40));
      }
      else if (*(int *)(puVar14 + 1) == 0x1d) {
        lVar11 = *(long *)(this + 0xb0);
        puVar17 = (uint *)&minus_1;
        if (lVar11 != 0) {
          uVar12 = (ulong)((uint)*(ushort *)((long)puVar14 + 0xe) * -0x61c8864f & 0x3fffffff) %
                   (ulong)*(uint *)(this + 0xa8);
          puVar9 = (uint *)(lVar11 + uVar12 * 0xc);
          bVar2 = (byte)puVar9[1];
          if ((bVar2 & 2) != 0) {
            iVar13 = 0;
            do {
              if ((uint)*(ushort *)((long)puVar14 + 0xe) == *puVar9) {
                puVar17 = (uint *)&minus_1;
                if ((bVar2 & 1) != 0) {
                  puVar17 = puVar9 + 2;
                }
                goto LAB_0010a1c9;
              }
              iVar13 = iVar13 + 1;
              uVar12 = (ulong)((int)uVar12 + iVar13 & *(uint *)(this + 0xa4));
              puVar9 = (uint *)(lVar11 + uVar12 * 0xc);
              bVar2 = (byte)puVar9[1];
            } while ((bVar2 & 2) != 0);
            puVar17 = (uint *)&minus_1;
          }
        }
LAB_0010a1c9:
        str_encoder_t::encode_int((str_encoder_t *)&local_48,*puVar17 - *(int *)(this + 200));
      }
      uVar6 = *(uint *)(param_3 + 4);
      bVar2 = *(byte *)((long)puVar14 + 0xc);
      uVar12 = (ulong)bVar2;
      puVar7 = (undefined8 *)*puVar14;
      puVar10 = (undefined8 *)((ulong)uVar6 + *(long *)(param_3 + 8));
      if (uVar12 != 0) {
        if (bVar2 < 8) {
          if ((bVar2 & 4) == 0) {
            if (bVar2 != 0) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
              if ((bVar2 & 2) == 0) goto LAB_0010a21a;
              *(undefined2 *)((long)puVar10 + (uVar12 - 2)) =
                   *(undefined2 *)((long)puVar7 + (uVar12 - 2));
              uVar6 = *(uint *)(param_3 + 4);
            }
          }
          else {
            *(undefined4 *)puVar10 = *(undefined4 *)puVar7;
            *(undefined4 *)((long)puVar10 + (uVar12 - 4)) =
                 *(undefined4 *)((long)puVar7 + (uVar12 - 4));
            uVar6 = *(uint *)(param_3 + 4);
          }
        }
        else {
          *puVar10 = *puVar7;
          *(undefined8 *)((long)puVar10 + (uVar12 - 8)) =
               *(undefined8 *)((long)puVar7 + (uVar12 - 8));
          lVar11 = (long)puVar10 - (long)((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
          puVar7 = (undefined8 *)((long)puVar7 - lVar11);
          puVar10 = (undefined8 *)((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
          for (uVar12 = (ulong)((int)lVar11 + (uint)bVar2 >> 3); uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar10 = *puVar7;
            puVar7 = puVar7 + (ulong)bVar20 * -2 + 1;
            puVar10 = puVar10 + (ulong)bVar20 * -2 + 1;
          }
LAB_0010a21a:
          uVar6 = *(uint *)(param_3 + 4);
        }
      }
      puVar14 = puVar14 + 2;
      *(uint *)(param_3 + 4) = uVar6 + bVar2;
    } while (puVar18 != puVar14);
  }
LAB_0010a230:
  uVar6 = ~*(uint *)param_3 >> 0x1f;
LAB_0010a238:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::opset_t<CFF::blend_arg_t>::process_op(unsigned int, CFF::interp_env_t<CFF::blend_arg_t>&) */

void CFF::opset_t<CFF::blend_arg_t>::process_op(uint param_1,interp_env_t *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  uint uVar7;
  interp_env_t *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 < 0xfb) {
    if (param_1 < 0xf7) {
      if (param_1 == 0x1c) {
        uVar4 = *(uint *)(param_2 + 0xc);
        uVar7 = *(uint *)(param_2 + 8);
        if (uVar4 < uVar7) {
          puVar6 = (undefined *)((ulong)uVar4 + *(long *)param_2);
        }
        else {
          uVar4 = uVar7 + 1;
          puVar6 = &_hb_NullPool;
          *(uint *)(param_2 + 0xc) = uVar4;
        }
        uVar1 = *puVar6;
        if (uVar4 + 1 < uVar7) {
          puVar6 = (undefined *)((ulong)(uVar4 + 1) + *(long *)param_2);
        }
        else {
          puVar6 = &_hb_NullPool;
          *(uint *)(param_2 + 0xc) = uVar7 + 1;
        }
        uVar2 = *puVar6;
        uVar4 = *(uint *)(param_2 + 0x14);
        if (uVar4 < 0x201) {
          *(uint *)(param_2 + 0x14) = uVar4 + 1;
          piVar8 = param_2 + (ulong)uVar4 * 0x20 + 0x18;
        }
        else {
          uVar9 = __hb_NullPool;
          uVar10 = __hb_CrapPool;
          uVar11 = _pthread_mutex_lock;
          _pthread_mutex_destroy = _pthread_mutex_unlock;
          param_2[0x10] = (interp_env_t)0x1;
          piVar8 = (interp_env_t *)&_hb_CrapPool;
          __hb_CrapPool = uVar9;
          _pthread_mutex_lock = uVar10;
          _pthread_mutex_unlock = uVar11;
        }
        *(undefined8 *)(piVar8 + 8) = 0;
        if (*(int *)(piVar8 + 0x14) != 0) {
          *(undefined4 *)(piVar8 + 0x14) = 0;
          if ((-1 < (int)*(uint *)(piVar8 + 0x10)) && (*(uint *)(piVar8 + 0x10) >> 2 != 0)) {
            free(*(void **)(piVar8 + 0x18));
            *(undefined8 *)(piVar8 + 0x18) = 0;
            *(undefined4 *)(piVar8 + 0x10) = 0;
          }
        }
        *(double *)piVar8 = (double)(int)CONCAT11(uVar1,uVar2);
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 2;
        return;
      }
      if (param_1 - 0x20 < 0xd7) {
        uVar4 = *(uint *)(param_2 + 0x14);
        if (uVar4 < 0x201) {
          *(uint *)(param_2 + 0x14) = uVar4 + 1;
          piVar8 = param_2 + (ulong)uVar4 * 0x20 + 0x18;
        }
        else {
          uVar9 = __hb_NullPool;
          _pthread_mutex_lock = __hb_CrapPool;
          param_2[0x10] = (interp_env_t)0x1;
          piVar8 = (interp_env_t *)&_hb_CrapPool;
          uVar10 = __hb_CrapPool;
          _pthread_mutex_destroy = _pthread_mutex_unlock;
          __hb_CrapPool = uVar9;
          _pthread_mutex_unlock = uVar10;
        }
        *(undefined8 *)(piVar8 + 8) = 0;
        if (*(int *)(piVar8 + 0x14) != 0) {
          *(undefined4 *)(piVar8 + 0x14) = 0;
          if ((-1 < (int)*(uint *)(piVar8 + 0x10)) && (*(uint *)(piVar8 + 0x10) >> 2 != 0)) {
            free(*(void **)(piVar8 + 0x18));
            *(undefined8 *)(piVar8 + 0x18) = 0;
            *(undefined4 *)(piVar8 + 0x10) = 0;
          }
        }
        *(double *)piVar8 = (double)(int)(param_1 - 0x8b);
        return;
      }
LAB_0010a9c0:
      *(undefined4 *)(param_2 + 0x14) = 0;
      return;
    }
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 8)) {
      pbVar5 = (byte *)((ulong)*(uint *)(param_2 + 0xc) + *(long *)param_2);
    }
    else {
      pbVar5 = &_hb_NullPool;
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 8) + 1;
    }
    uVar4 = *(uint *)(param_2 + 0x14);
    uVar7 = (param_1 - 0xf7) * 0x100 + 0x6c + (uint)*pbVar5 & 0xffff;
    if (0x200 < uVar4) {
      uVar9 = __hb_NullPool;
      uVar10 = __hb_CrapPool;
      uVar11 = _pthread_mutex_lock;
      _pthread_mutex_destroy = _pthread_mutex_unlock;
      param_2[0x10] = (interp_env_t)0x1;
      piVar8 = (interp_env_t *)&_hb_CrapPool;
      __hb_CrapPool = uVar9;
      _pthread_mutex_lock = uVar10;
      _pthread_mutex_unlock = uVar11;
      goto LAB_0010a7f3;
    }
  }
  else {
    if (3 < param_1 - 0xfb) goto LAB_0010a9c0;
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 8)) {
      pbVar5 = (byte *)((ulong)*(uint *)(param_2 + 0xc) + *(long *)param_2);
    }
    else {
      pbVar5 = &_hb_NullPool;
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 8) + 1;
    }
    uVar3 = _pthread_mutex_unlock;
    uVar11 = _pthread_mutex_lock;
    uVar10 = __hb_CrapPool;
    uVar9 = __hb_NullPool;
    uVar4 = *(uint *)(param_2 + 0x14);
    uVar7 = ((param_1 - 0xfb & 0xffff) * -0x100 - (uint)*pbVar5) - 0x6c;
    if (0x200 < uVar4) {
      param_2[0x10] = (interp_env_t)0x1;
      piVar8 = (interp_env_t *)&_hb_CrapPool;
      __hb_CrapPool = uVar9;
      _pthread_mutex_lock = uVar10;
      _pthread_mutex_unlock = uVar11;
      _pthread_mutex_destroy = uVar3;
      goto LAB_0010a7f3;
    }
  }
  *(uint *)(param_2 + 0x14) = uVar4 + 1;
  piVar8 = param_2 + (ulong)uVar4 * 0x20 + 0x18;
LAB_0010a7f3:
  *(undefined8 *)(piVar8 + 8) = 0;
  if (*(int *)(piVar8 + 0x14) != 0) {
    *(undefined4 *)(piVar8 + 0x14) = 0;
    if ((-1 < (int)*(uint *)(piVar8 + 0x10)) && (*(uint *)(piVar8 + 0x10) >> 2 != 0)) {
      free(*(void **)(piVar8 + 0x18));
      *(undefined8 *)(piVar8 + 0x18) = 0;
      *(undefined4 *)(piVar8 + 0x10) = 0;
    }
  }
  *(double *)piVar8 = (double)(int)uVar7;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::cs_opset_t<CFF::blend_arg_t, cff2_cs_opset_subr_subset_t,
   CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>, CFF::subr_subset_param_t,
   CFF::path_procs_null_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>, CFF::subr_subset_param_t>
   >::process_op(unsigned int, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>&,
   CFF::subr_subset_param_t&) [clone .isra.0] */

void CFF::
     cs_opset_t<CFF::blend_arg_t,cff2_cs_opset_subr_subset_t,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,CFF::subr_subset_param_t,CFF::path_procs_null_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,CFF::subr_subset_param_t>>
     ::process_op(uint param_1,cff2_cs_interp_env_t *param_2,subr_subset_param_t *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  cff2_cs_interp_env_t *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (0x1f < param_1) {
    if (param_1 == 0xff) {
      uVar3 = *(uint *)(param_2 + 0xc);
      uVar1 = *(uint *)(param_2 + 8);
      if (uVar1 < uVar3 + 4) {
        return;
      }
      if (uVar3 < uVar1) {
        puVar4 = (uint *)((ulong)uVar3 + *(long *)param_2);
      }
      else {
        puVar4 = (uint *)&_hb_NullPool;
        *(uint *)(param_2 + 0xc) = uVar1 + 1;
      }
      uVar3 = *puVar4;
      uVar1 = *(uint *)(param_2 + 0x14);
      if (uVar1 < 0x201) {
        *(uint *)(param_2 + 0x14) = uVar1 + 1;
        pcVar6 = param_2 + (ulong)uVar1 * 0x20 + 0x18;
      }
      else {
        uVar5 = __hb_NullPool;
        uVar7 = __hb_CrapPool;
        uVar8 = _pthread_mutex_lock;
        _pthread_mutex_destroy = _pthread_mutex_unlock;
        param_2[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        __hb_CrapPool = uVar5;
        _pthread_mutex_lock = uVar7;
        _pthread_mutex_unlock = uVar8;
      }
      *(undefined8 *)(pcVar6 + 8) = 0;
      if (*(int *)(pcVar6 + 0x14) != 0) {
        *(undefined4 *)(pcVar6 + 0x14) = 0;
        if ((-1 < (int)*(uint *)(pcVar6 + 0x10)) && (*(uint *)(pcVar6 + 0x10) >> 2 != 0)) {
          free(*(void **)(pcVar6 + 0x18));
          *(undefined8 *)(pcVar6 + 0x18) = 0;
          *(undefined4 *)(pcVar6 + 0x10) = 0;
        }
      }
      *(double *)pcVar6 =
           (double)(int)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                        uVar3 << 0x18) * __LC22;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 4;
      return;
    }
    if (3 < param_1 - 0x122) goto switchD_0010aa7d_caseD_2;
    goto switchD_0010aa7d_caseD_5;
  }
  switch(param_1) {
  case 1:
  case 0x12:
    uVar3 = *(uint *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(uint *)(param_2 + 0x4054) = *(int *)(param_2 + 0x4054) + (uVar3 >> 1);
    break;
  default:
switchD_0010aa7d_caseD_2:
    opset_t<CFF::blend_arg_t>::process_op(param_1,(interp_env_t *)param_2);
    return;
  case 3:
  case 0x17:
    uVar3 = *(uint *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(uint *)(param_2 + 0x4058) = *(int *)(param_2 + 0x4058) + (uVar3 >> 1);
    break;
  case 4:
  case 0x15:
  case 0x16:
    if (param_2[0x4051] == (cff2_cs_interp_env_t)0x0) {
      if (param_2[0x4052] == (cff2_cs_interp_env_t)0x0) {
        param_2[0x4052] = (cff2_cs_interp_env_t)0x1;
        iVar2 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x4058);
        *(int *)(param_2 + 0x4058) = iVar2;
        *(uint *)(param_2 + 0x405c) = (uint)(iVar2 + 7 + *(int *)(param_2 + 0x4054)) >> 3;
      }
      param_2[0x4051] = (cff2_cs_interp_env_t)0x1;
    }
  case 5:
  case 6:
  case 7:
  case 8:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1e:
  case 0x1f:
switchD_0010aa7d_caseD_5:
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 10:
    pcVar6 = param_2 + 0x4168;
    uVar5 = 2;
    goto LAB_0010abd4;
  case 0xb:
    if (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 0xc)) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 8) + 1;
    }
    if (*(int *)(param_2 + 0x4064) == 0) {
      _pthread_mutex_unlock = _pthread_mutex_lock;
      uVar5 = __hb_NullPool;
      _pthread_mutex_lock = __hb_CrapPool;
      param_2[0x4060] = (cff2_cs_interp_env_t)0x1;
      pcVar6 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      __hb_CrapPool = uVar5;
    }
    else {
      uVar3 = *(int *)(param_2 + 0x4064) - 1;
      *(uint *)(param_2 + 0x4064) = uVar3;
      pcVar6 = param_2 + (ulong)uVar3 * 0x18 + 0x4068;
    }
    uVar7 = *(undefined8 *)pcVar6;
    uVar8 = *(undefined8 *)(pcVar6 + 8);
    *(undefined8 *)(param_2 + 0x4038) = uVar7;
    *(undefined8 *)(param_2 + 0x4040) = uVar8;
    uVar5 = *(undefined8 *)(pcVar6 + 0x10);
    *(undefined8 *)param_2 = uVar7;
    *(undefined8 *)(param_2 + 8) = uVar8;
    *(undefined8 *)(param_2 + 0x4048) = uVar5;
    break;
  case 0xe:
    param_2[0x4050] = (cff2_cs_interp_env_t)0x1;
    *(undefined4 *)(param_2 + 0x14) = 0;
    break;
  case 0x13:
  case 0x14:
    if (param_2[0x4052] == (cff2_cs_interp_env_t)0x0) {
      param_2[0x4052] = (cff2_cs_interp_env_t)0x1;
      iVar2 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x4058);
      *(int *)(param_2 + 0x4058) = iVar2;
      uVar3 = (uint)(iVar2 + 7 + *(int *)(param_2 + 0x4054)) >> 3;
      *(uint *)(param_2 + 0x405c) = uVar3;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x405c);
    }
    if (uVar3 + *(int *)(param_2 + 0xc) <= *(uint *)(param_2 + 8)) {
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(uint *)(param_2 + 0xc) = uVar3 + *(int *)(param_2 + 0xc);
    }
    break;
  case 0x1d:
    pcVar6 = param_2 + 0x4158;
    uVar5 = 1;
LAB_0010abd4:
    cs_interp_env_t<CFF::blend_arg_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>>::call_subr
              ((cs_interp_env_t<CFF::blend_arg_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>> *)param_2
               ,pcVar6,uVar5);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>::process_blend() */

void __thiscall
CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>::process_blend
          (cff2_cs_interp_env_t<CFF::blend_arg_t> *this)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined *extraout_RDX;
  ushort uVar6;
  uint uVar7;
  uint *puVar9;
  ItemVariationStore *this_00;
  float *pfVar10;
  ulong uVar11;
  uint uVar8;
  
  if (this[0x41ba] != (cff2_cs_interp_env_t<CFF::blend_arg_t>)0x0) {
    return;
  }
  puVar9 = (uint *)&_hb_NullPool;
  lVar2 = *(long *)(this + 0x4198);
  if (*(uint *)(this + 0x41a4) <
      (uint)(ushort)(*(ushort *)(lVar2 + 8) << 8 | *(ushort *)(lVar2 + 8) >> 8)) {
    puVar9 = (uint *)(lVar2 + 10 + (ulong)*(uint *)(this + 0x41a4) * 4);
  }
  uVar3 = *puVar9;
  puVar5 = &_hb_NullPool;
  if (uVar3 != 0) {
    puVar5 = (undefined *)
             (lVar2 + 2 +
             (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    ));
  }
  uVar6 = *(ushort *)(puVar5 + 4) << 8 | *(ushort *)(puVar5 + 4) >> 8;
  *(uint *)(this + 0x41a0) = (uint)uVar6;
  if (this[0x41b8] == (cff2_cs_interp_env_t<CFF::blend_arg_t>)0x0) goto LAB_0010ae32;
  uVar3 = *(uint *)(this + 0x41a8);
  if ((int)uVar3 < 0) {
LAB_0010afa1:
    *(int *)(this + 0xc) = *(int *)(this + 8) + 1;
    goto LAB_0010ae32;
  }
  uVar1 = *(uint *)(this + 0x41ac);
  uVar11 = (ulong)uVar1;
  uVar7 = (uint)uVar6;
  uVar8 = (uint)uVar6;
  if (uVar6 < uVar1) {
    if (uVar3 < uVar1) {
      if (uVar1 < 0x40000000) goto LAB_0010afaf;
LAB_0010af99:
      *(uint *)(this + 0x41a8) = ~uVar3;
      goto LAB_0010afa1;
    }
    if (uVar1 < uVar3 >> 2) {
LAB_0010afaf:
      pvVar4 = *(void **)(this + 0x41b0);
      goto LAB_0010af22;
    }
LAB_0010aed5:
    *(uint *)(this + 0x41ac) = uVar7;
    uVar3 = *(uint *)(this + 0x41a0);
    this_00 = (ItemVariationStore *)(*(long *)(this + 0x4198) + 2);
    if (uVar7 == 0) goto LAB_0010aea3;
LAB_0010aef1:
    pfVar10 = *(float **)(this + 0x41b0);
  }
  else {
    if (uVar3 < uVar8) {
      pvVar4 = *(void **)(this + 0x41b0);
      uVar11 = (ulong)uVar8;
LAB_0010af22:
      pvVar4 = realloc(pvVar4,uVar11 << 2);
      if (pvVar4 == (void *)0x0) {
        uVar3 = *(uint *)(this + 0x41a8);
        if (uVar3 < (uint)uVar11) goto LAB_0010af99;
      }
      else {
        *(void **)(this + 0x41b0) = pvVar4;
        *(uint *)(this + 0x41a8) = (uint)uVar11;
      }
      uVar11 = (ulong)*(uint *)(this + 0x41ac);
      puVar5 = extraout_RDX;
LAB_0010af4c:
      if (uVar8 <= (uint)uVar11) goto LAB_0010aed5;
      hb_memset((void *)(*(long *)(this + 0x41b0) + uVar11 * 4),(uVar8 - (uint)uVar11) * 4,
                (uint)puVar5);
      *(uint *)(this + 0x41ac) = uVar7;
      uVar3 = *(uint *)(this + 0x41a0);
      this_00 = (ItemVariationStore *)(*(long *)(this + 0x4198) + 2);
      goto LAB_0010aef1;
    }
    if (uVar3 >> 2 <= uVar8) goto LAB_0010af4c;
    pvVar4 = *(void **)(this + 0x41b0);
    if (uVar8 != 0) {
      uVar11 = (ulong)uVar8;
      goto LAB_0010af22;
    }
    free(pvVar4);
    uVar3 = *(uint *)(this + 0x41a0);
    *(undefined8 *)(this + 0x41a8) = 0;
    *(undefined8 *)(this + 0x41b0) = 0;
    this_00 = (ItemVariationStore *)(*(long *)(this + 0x4198) + 2);
LAB_0010aea3:
    pfVar10 = (float *)&_hb_CrapPool;
    __hb_CrapPool = __hb_NullPool;
  }
  OT::ItemVariationStore::get_region_scalars
            (this_00,*(uint *)(this + 0x41a4),*(int **)(this + 0x4188),*(uint *)(this + 0x4190),
             pfVar10,uVar3);
LAB_0010ae32:
  this[0x41ba] = (cff2_cs_interp_env_t<CFF::blend_arg_t>)0x1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::cs_interpreter_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>, cff2_cs_opset_subr_subset_t,
   CFF::subr_subset_param_t>::interpret(CFF::subr_subset_param_t&) */

cff2_cs_interp_env_t __thiscall
CFF::
cs_interpreter_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,CFF::subr_subset_param_t>
::interpret(cs_interpreter_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,CFF::subr_subset_param_t>
            *this,subr_subset_param_t *param_1)

{
  cff2_cs_interp_env_t cVar1;
  subr_subset_param_t sVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  void *pvVar14;
  double *pdVar15;
  cff2_cs_interp_env_t *pcVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  subr_subset_param_t *psVar20;
  long lVar21;
  cff2_cs_interp_env_t *pcVar22;
  uint uVar23;
  undefined1 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  cff2_cs_interp_env_t *pcVar29;
  cff2_cs_interp_env_t *this_00;
  int iVar30;
  int iVar31;
  double dVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  iVar30 = 200000;
  this_00 = *(cff2_cs_interp_env_t **)this;
  psVar20 = (subr_subset_param_t *)(ulong)*(uint *)(this_00 + 0xc);
  uVar7 = *(uint *)(this_00 + 8);
  this_00[0x4050] = (cff2_cs_interp_env_t)0x0;
  uVar17 = *(uint *)(this_00 + 0xc) + 1;
  if (uVar17 <= uVar7) goto LAB_0010b084;
LAB_0010b018:
  iVar8 = *(int *)(this_00 + 0x4064);
  lVar21 = *(long *)param_1;
  if (iVar8 != 0) {
    *(byte *)(lVar21 + 0x18) = *(byte *)(lVar21 + 0x18) | 1;
    if ((uint)psVar20 <= uVar7) goto LAB_0010b12c;
    *(uint *)(this_00 + 0xc) = uVar7 + 1;
    goto LAB_0010b12c;
  }
LAB_0010b02a:
  *(byte *)(lVar21 + 0x18) = *(byte *)(lVar21 + 0x18) | 1;
  this_00[0x4050] = (cff2_cs_interp_env_t)0x1;
  *(undefined4 *)(this_00 + 0x14) = 0;
LAB_0010b03e:
  do {
    cVar1 = this_00[0x4060];
joined_r0x0010b046:
    if (cVar1 != (cff2_cs_interp_env_t)0x0) {
LAB_0010b100:
      *(uint *)(this_00 + 0xc) = uVar7 + 1;
      return (cff2_cs_interp_env_t)0x0;
    }
    uVar17 = *(uint *)(this_00 + 0xc);
    psVar20 = (subr_subset_param_t *)(ulong)uVar17;
    if (((uVar7 < uVar17) || (this_00[0x10] != (cff2_cs_interp_env_t)0x0)) ||
       (iVar30 = iVar30 + -1, iVar30 == 0)) goto LAB_0010b100;
    if (this_00[0x4050] != (cff2_cs_interp_env_t)0x0) {
      return this_00[0x4050];
    }
    uVar17 = uVar17 + 1;
    if (uVar7 < uVar17) goto LAB_0010b018;
LAB_0010b084:
    sVar2 = psVar20[*(long *)this_00];
    uVar25 = (uint)(byte)sVar2;
    *(uint *)(this_00 + 0xc) = uVar17;
    if (sVar2 == (subr_subset_param_t)0xc) {
      uVar25 = (int)psVar20 + 2;
      psVar20 = (subr_subset_param_t *)(ulong)uVar25;
      if (uVar7 < uVar25) {
        uVar25 = 0xffff;
      }
      else {
        bVar3 = *(byte *)(*(long *)this_00 + (ulong)uVar17);
        *(uint *)(this_00 + 0xc) = uVar25;
        uVar25 = bVar3 + 0x100;
      }
      goto LAB_0010b1aa;
    }
    if (sVar2 != (subr_subset_param_t)0xb) {
      if ((byte)sVar2 < 0xc) {
        if (sVar2 != (subr_subset_param_t)0xa) goto LAB_0010b1aa;
        cff2_cs_opset_subr_subset_t::process_call_subr
                  (10,2,this_00,param_1,this_00 + 0x4168,*(undefined8 *)(param_1 + 0x28));
        this_00 = *(cff2_cs_interp_env_t **)this;
        uVar7 = *(uint *)(this_00 + 8);
        goto LAB_0010b03e;
      }
      if (sVar2 == (subr_subset_param_t)0xe) {
        lVar21 = *(long *)param_1;
        goto LAB_0010b02a;
      }
      if (sVar2 != (subr_subset_param_t)0x1d) break;
      cff2_cs_opset_subr_subset_t::process_call_subr
                (0x1d,1,this_00,param_1,this_00 + 0x4158,*(undefined8 *)(param_1 + 0x20));
      this_00 = *(cff2_cs_interp_env_t **)this;
      cVar1 = this_00[0x4060];
      uVar7 = *(uint *)(this_00 + 8);
      goto joined_r0x0010b046;
    }
    *(byte *)(*(long *)param_1 + 0x18) = *(byte *)(*(long *)param_1 + 0x18) | 1;
    iVar8 = *(int *)(this_00 + 0x4064);
    if (iVar8 == 0) {
      _pthread_mutex_unlock = _pthread_mutex_lock;
      uVar33 = __hb_NullPool;
      _pthread_mutex_lock = __hb_CrapPool;
      this_00[0x4060] = (cff2_cs_interp_env_t)0x1;
      pcVar16 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      __hb_CrapPool = uVar33;
    }
    else {
LAB_0010b12c:
      *(uint *)(this_00 + 0x4064) = iVar8 - 1U;
      pcVar16 = this_00 + (ulong)(iVar8 - 1U) * 0x18 + 0x4068;
    }
    uVar34 = *(undefined8 *)pcVar16;
    uVar35 = *(undefined8 *)(pcVar16 + 8);
    *(undefined8 *)(this_00 + 0x4038) = uVar34;
    *(undefined8 *)(this_00 + 0x4040) = uVar35;
    uVar33 = *(undefined8 *)(pcVar16 + 0x10);
    *(undefined8 *)this_00 = uVar34;
    *(undefined8 *)(this_00 + 8) = uVar35;
    *(undefined8 *)(this_00 + 0x4048) = uVar33;
    iVar8 = (int)uVar33;
    if (iVar8 == 1) {
      lVar21 = *(long *)(param_1 + 0x10);
      uVar7 = *(uint *)(this_00 + 0x404c);
      if (uVar7 < *(uint *)(lVar21 + 4)) {
LAB_0010b21c:
        lVar21 = *(long *)(lVar21 + 8) + (ulong)uVar7 * 0x28;
LAB_0010b228:
        if (lVar21 != 0) {
          if ((*(byte *)(lVar21 + 0x18) & 1) == 0) {
            hb_vector_t<CFF::parsed_cs_op_t,false>::alloc
                      ((hb_vector_t<CFF::parsed_cs_op_t,false> *)(lVar21 + 8),*(uint *)(this_00 + 8)
                       ,true);
          }
          this_00 = *(cff2_cs_interp_env_t **)this;
          *(long *)param_1 = lVar21;
          uVar7 = *(uint *)(this_00 + 8);
          goto LAB_0010b03e;
        }
      }
    }
    else if (iVar8 == 2) {
      lVar21 = *(long *)(param_1 + 0x18);
      uVar7 = *(uint *)(this_00 + 0x404c);
      if (uVar7 < *(uint *)(lVar21 + 4)) goto LAB_0010b21c;
    }
    else if (iVar8 == 0) {
      lVar21 = *(long *)(param_1 + 8);
      goto LAB_0010b228;
    }
    *(int *)(this_00 + 0xc) = *(int *)(this_00 + 8) + 1;
    this_00 = *(cff2_cs_interp_env_t **)this;
    uVar7 = *(uint *)(this_00 + 8);
  } while( true );
  if (sVar2 == (subr_subset_param_t)0x10) {
    cff2_cs_interp_env_t<CFF::blend_arg_t>::process_blend
              ((cff2_cs_interp_env_t<CFF::blend_arg_t> *)this_00);
    uVar7 = *(uint *)(this_00 + 0x41a0);
    if (*(int *)(this_00 + 0x14) == 0) {
      uVar33 = __hb_NullPool;
      uVar34 = __hb_CrapPool;
      uVar35 = _pthread_mutex_lock;
      _pthread_mutex_destroy = _pthread_mutex_unlock;
      this_00[0x10] = (cff2_cs_interp_env_t)0x1;
      pcVar16 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      uVar11 = (ulong)*(uint *)(this_00 + 0x14);
      __hb_CrapPool = uVar33;
      _pthread_mutex_lock = uVar34;
      _pthread_mutex_unlock = uVar35;
    }
    else {
      uVar17 = *(int *)(this_00 + 0x14) - 1;
      uVar11 = (ulong)uVar17;
      *(uint *)(this_00 + 0x14) = uVar17;
      pcVar16 = this_00 + uVar11 * 0x20 + 0x18;
    }
    uVar17 = (uint)uVar11;
    iVar8 = (int)*(double *)pcVar16;
    if (iVar8 < 0) {
      this_00[0x10] = (cff2_cs_interp_env_t)0x1;
    }
    else {
      uVar26 = (uVar7 + 1) * iVar8;
      uVar23 = uVar17 - uVar26;
      if (uVar17 < uVar26) {
        *(int *)(this_00 + 0xc) = *(int *)(this_00 + 8) + 1;
        goto LAB_0010b1b5;
      }
      if (iVar8 != 0) {
        uVar27 = uVar23 + iVar8;
        uVar18 = 0x201 - uVar27;
        iVar31 = 0;
        do {
          uVar17 = uVar18;
          if (uVar7 <= uVar18) {
            uVar17 = uVar7;
          }
          uVar28 = (ulong)uVar17;
          if (0x201 < uVar27) {
            uVar28 = 0;
          }
          pcVar22 = this_00 + (ulong)uVar27 * 0x20 + 0x18;
          pcVar16 = this_00 + (ulong)uVar23 * 0x20 + 0x18;
          if ((uint)uVar11 <= uVar23) {
            uVar33 = __hb_NullPool;
            uVar34 = __hb_CrapPool;
            uVar35 = _pthread_mutex_lock;
            _pthread_mutex_destroy = _pthread_mutex_unlock;
            this_00[0x10] = (cff2_cs_interp_env_t)0x1;
            pcVar16 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
            __hb_CrapPool = uVar33;
            _pthread_mutex_lock = uVar34;
            _pthread_mutex_unlock = uVar35;
          }
          uVar17 = (uint)uVar28;
          if (*(int *)(this_00 + 0x4190) == 0) {
            *(int *)(pcVar16 + 0xc) = iVar31;
            *(int *)(pcVar16 + 8) = iVar8;
            uVar9 = *(uint *)(pcVar16 + 0x10);
            if (-1 < (int)uVar9) {
              uVar4 = *(uint *)(pcVar16 + 0x14);
              uVar19 = uVar4;
              if (uVar4 <= uVar17) {
                uVar19 = uVar17;
              }
              if (uVar9 < uVar19) {
                if (uVar19 < 0x20000000) {
                  pvVar14 = *(void **)(pcVar16 + 0x18);
LAB_0010b5dc:
                  pvVar14 = realloc(pvVar14,(ulong)uVar19 << 3);
                  if (pvVar14 != (void *)0x0) goto LAB_0010b614;
                  uVar9 = *(uint *)(pcVar16 + 0x10);
                  if (uVar19 <= uVar9) goto LAB_0010b61c;
                }
                *(uint *)(pcVar16 + 0x10) = ~uVar9;
              }
              else {
                if (uVar19 < uVar9 >> 2) {
                  pvVar14 = *(void **)(pcVar16 + 0x18);
                  if (uVar19 != 0) goto LAB_0010b5dc;
                  free(pvVar14);
                  pvVar14 = (void *)0x0;
LAB_0010b614:
                  *(void **)(pcVar16 + 0x18) = pvVar14;
                  *(uint *)(pcVar16 + 0x10) = uVar19;
LAB_0010b61c:
                  uVar4 = *(uint *)(pcVar16 + 0x14);
                }
                if (uVar4 < uVar17) {
                  memset((void *)((long)*(double *)(pcVar16 + 0x18) + (ulong)uVar4 * 8),0,
                         (ulong)((uVar17 - 1) - uVar4) * 8 + 8);
                }
                *(uint *)(pcVar16 + 0x14) = uVar17;
                if (uVar17 != 0) {
                  pcVar29 = pcVar22 + uVar28 * 0x20;
                  pdVar15 = *(double **)(pcVar16 + 0x18);
                  do {
                    dVar32 = *(double *)pcVar22;
                    pcVar22 = pcVar22 + 0x20;
                    *pdVar15 = dVar32;
                    pdVar15 = pdVar15 + 1;
                  } while (pcVar29 != pcVar22);
                }
              }
            }
          }
          else {
            dVar32 = 0.0;
            if (((this_00[0x41b8] != (cff2_cs_interp_env_t)0x0) &&
                (*(uint *)(this_00 + 0x41ac) == uVar17)) && (uVar17 != 0)) {
              pfVar12 = *(float **)(this_00 + 0x41b0);
              do {
                pfVar13 = pfVar12 + 1;
                dVar32 = dVar32 + (double)*pfVar12 * *(double *)pcVar22;
                pfVar12 = pfVar13;
                pcVar22 = pcVar22 + 0x20;
              } while (*(float **)(this_00 + 0x41b0) + uVar28 != pfVar13);
            }
            dVar32 = round(*(double *)pcVar16 + dVar32);
            *(double *)(pcVar16 + 8) = 0.0;
            if (*(int *)(pcVar16 + 0x14) != 0) {
              *(undefined4 *)(pcVar16 + 0x14) = 0;
              if ((-1 < (int)*(uint *)(pcVar16 + 0x10)) && (*(uint *)(pcVar16 + 0x10) >> 2 != 0)) {
                free(*(void **)(pcVar16 + 0x18));
                *(double *)(pcVar16 + 0x18) = 0.0;
                *(undefined4 *)(pcVar16 + 0x10) = 0;
              }
            }
            *(double *)pcVar16 = (double)(int)dVar32;
          }
          iVar31 = iVar31 + 1;
          uVar17 = *(uint *)(this_00 + 0x14);
          uVar11 = (ulong)uVar17;
          uVar27 = uVar27 + uVar7;
          uVar23 = uVar23 + 1;
          uVar18 = uVar18 - uVar7;
        } while (iVar31 != iVar8);
        if (uVar17 < uVar26 - iVar31) {
          this_00[0x10] = (cff2_cs_interp_env_t)0x1;
          goto LAB_0010b1b5;
        }
        uVar17 = uVar17 + (iVar31 - uVar26);
      }
    }
    *(uint *)(this_00 + 0x14) = uVar17;
  }
  else {
    if ((byte)sVar2 < 0x11) {
      if (sVar2 == (subr_subset_param_t)0xf) {
        if (*(int *)(this_00 + 0x14) == 0) {
          uVar33 = __hb_NullPool;
          uVar34 = __hb_CrapPool;
          uVar35 = _pthread_mutex_lock;
          _pthread_mutex_destroy = _pthread_mutex_unlock;
          this_00[0x10] = (cff2_cs_interp_env_t)0x1;
          pcVar16 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
          __hb_CrapPool = uVar33;
          _pthread_mutex_lock = uVar34;
          _pthread_mutex_unlock = uVar35;
        }
        else {
          uVar7 = *(int *)(this_00 + 0x14) - 1;
          *(uint *)(this_00 + 0x14) = uVar7;
          pcVar16 = this_00 + (ulong)uVar7 * 0x20 + 0x18;
        }
        iVar8 = (int)*(double *)pcVar16;
        if (iVar8 < 0) {
          this_00[0x10] = (cff2_cs_interp_env_t)0x1;
          iVar8 = 0;
        }
        if ((this_00[0x41b9] == (cff2_cs_interp_env_t)0x0) &&
           (this_00[0x41ba] == (cff2_cs_interp_env_t)0x0)) {
          *(int *)(this_00 + 0x41a4) = iVar8;
        }
        else {
          *(int *)(this_00 + 0xc) = *(int *)(this_00 + 8) + 1;
        }
        this_00[0x41b9] = (cff2_cs_interp_env_t)0x1;
        *(undefined4 *)(this_00 + 0x14) = 0;
        goto LAB_0010b1b5;
      }
      uVar25 = 0xd;
    }
LAB_0010b1aa:
    cs_opset_t<CFF::blend_arg_t,cff2_cs_opset_subr_subset_t,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,CFF::subr_subset_param_t,CFF::path_procs_null_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,CFF::subr_subset_param_t>>
    ::process_op(uVar25,this_00,psVar20);
  }
LAB_0010b1b5:
  puVar5 = *(uint **)param_1;
  if ((puVar5[6] & 1) != 0) goto LAB_0010b1c2;
  uVar7 = puVar5[3];
  if ((int)uVar7 < (int)puVar5[2]) {
LAB_0010b25c:
    plVar10 = (long *)((ulong)uVar7 * 0x10 + *(long *)(puVar5 + 4));
    puVar5[3] = uVar7 + 1;
    *plVar10 = 0;
    plVar10[1] = 0xffff;
  }
  else {
    cVar6 = hb_vector_t<CFF::parsed_cs_op_t,false>::alloc
                      ((hb_vector_t<CFF::parsed_cs_op_t,false> *)(puVar5 + 2),uVar7 + 1,false);
    if (cVar6 != '\0') {
      uVar7 = puVar5[3];
      goto LAB_0010b25c;
    }
    _pthread_mutex_lock = __hb_CrapPool;
    plVar10 = (long *)&_hb_CrapPool;
    __hb_CrapPool = __hb_NullPool;
  }
  uVar7 = *puVar5;
  uVar17 = *(uint *)(this_00 + 0xc);
  *(uint *)(plVar10 + 1) = uVar25;
  lVar21 = *(long *)this_00;
  if (*(uint *)(this_00 + 8) < uVar7) {
    uVar24 = 0;
  }
  else {
    uVar25 = *(uint *)(this_00 + 8) - uVar7;
    uVar26 = uVar17 - uVar7;
    uVar24 = (undefined1)uVar25;
    if (uVar26 <= uVar25) {
      uVar24 = (undefined1)uVar26;
    }
  }
  *(undefined1 *)((long)plVar10 + 0xc) = uVar24;
  *plVar10 = (ulong)uVar7 + lVar21;
  *puVar5 = uVar17;
LAB_0010b1c2:
  this_00 = *(cff2_cs_interp_env_t **)this;
  uVar7 = *(uint *)(this_00 + 8);
  goto LAB_0010b03e;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::subr_subsetter_t<cff2_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned int, 4u> >,
   OT::cff2::accelerator_subset_t const, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,
   cff2_cs_opset_subr_subset_t, 65535u>::subset() */

undefined8 __thiscall
CFF::
subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
::subset(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
         *this)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  CFFIndex<OT::IntType<unsigned_int,4u>> *this_00;
  CFF2FDSelect *this_01;
  uint *puVar4;
  uint *puVar5;
  hb_vector_t *phVar6;
  parsed_cs_str_vec_t *ppVar7;
  char cVar8;
  uint uVar9;
  void *pvVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined *puVar16;
  long *plVar17;
  int *piVar18;
  long lVar19;
  hb_vector_t<CFF::parsed_cs_str_t,false> *phVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  size_t sVar23;
  ulong uVar24;
  undefined *puVar25;
  ulong uVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  long *plVar30;
  undefined *puVar31;
  int *piVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  long lVar35;
  long lVar36;
  undefined4 *puVar37;
  uint uVar38;
  hb_set_t *phVar39;
  parsed_cs_str_t *ppVar40;
  undefined1 (*pauVar41) [16];
  uint uVar42;
  int iVar43;
  uint uVar44;
  int iVar45;
  hb_vector_t<CFF::parsed_cs_str_vec_t,false> *this_02;
  undefined4 *puVar46;
  uint *puVar47;
  long lVar48;
  long in_FS_OFFSET;
  bool bVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  undefined1 auVar54 [16];
  undefined1 local_4030 [16384];
  
  puVar34 = &stack0xffffffffffffffd0;
  do {
    puVar33 = puVar34;
    *(undefined8 *)(puVar33 + -0x1000) = *(undefined8 *)(puVar33 + -0x1000);
    puVar34 = puVar33 + -0x1000;
  } while (puVar33 + -0x1000 != local_4030);
  *(undefined8 *)(puVar33 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  iVar43 = *(int *)(*(long *)this + 0x98);
  lVar35 = *(long *)(*(long *)this + 200);
  uVar42 = *(uint *)(*(long *)(this + 8) + 0x58);
  if ((int)uVar42 < 0) {
    uVar42 = 0;
  }
  if (lVar35 == 0) {
    *(undefined8 *)(puVar33 + -0x12a0) = 0x10c17c;
    cVar8 = hb_vector_t<CFF::parsed_cs_str_t,false>::alloc
                      ((hb_vector_t<CFF::parsed_cs_str_t,false> *)(this + 0xe0),uVar42,true);
    if (cVar8 != '\0') {
      uVar38 = *(uint *)(this + 0xe4);
      if (uVar38 < uVar42) {
        lVar36 = *(long *)(this + 0xe8);
        puVar46 = (undefined4 *)(lVar36 + (ulong)uVar38 * 0x28);
        do {
          *(byte *)(puVar46 + 6) = *(byte *)(puVar46 + 6) & 0xe4;
          puVar37 = puVar46 + 10;
          puVar46[2] = 0;
          puVar46[3] = 0;
          *(undefined8 *)(puVar46 + 4) = 0;
          *(undefined8 *)(puVar46 + 8) = 0;
          *puVar46 = 0;
          puVar46 = puVar37;
        } while (puVar37 !=
                 (undefined4 *)
                 (lVar36 + 0x28 + ((ulong)((uVar42 - uVar38) - 1) + (ulong)uVar38) * 0x28));
      }
      else if (uVar42 < uVar38) {
        lVar36 = *(long *)(this + 0xe8) + -0x28 + (ulong)uVar38 * 0x28;
        lVar19 = lVar36;
        do {
          lVar11 = lVar19 + -0x28;
          if (*(int *)(lVar19 + 8) != 0) {
            pvVar10 = *(void **)(lVar19 + 0x10);
            *(undefined8 *)(puVar33 + -0x12a0) = 0x10c91e;
            free(pvVar10);
          }
          lVar19 = lVar11;
        } while (lVar11 != (ulong)(uVar38 - uVar42) * -0x28 + lVar36);
      }
      *(uint *)(this + 0xe4) = uVar42;
    }
    phVar20 = (hb_vector_t<CFF::parsed_cs_str_t,false> *)(this + 0xf0);
    uVar42 = **(uint **)(*(long *)this + 0x70);
    uVar42 = uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 | uVar42 << 0x18;
    if ((int)uVar42 < 0) {
      uVar42 = 0;
    }
    *(undefined8 *)(puVar33 + -0x12a0) = 0x10c21d;
    cVar8 = hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar20,uVar42,true);
    if (cVar8 != '\0') {
      uVar38 = *(uint *)(this + 0xf4);
      if (uVar38 < uVar42) {
        lVar36 = *(long *)(this + 0xf8);
        puVar46 = (undefined4 *)(lVar36 + (ulong)uVar38 * 0x28);
        do {
          *(byte *)(puVar46 + 6) = *(byte *)(puVar46 + 6) & 0xe4;
          puVar37 = puVar46 + 10;
          puVar46[2] = 0;
          puVar46[3] = 0;
          *(undefined8 *)(puVar46 + 4) = 0;
          *(undefined8 *)(puVar46 + 8) = 0;
          *puVar46 = 0;
          puVar46 = puVar37;
        } while (puVar37 !=
                 (undefined4 *)
                 (lVar36 + 0x28 + ((ulong)((uVar42 - uVar38) - 1) + (ulong)uVar38) * 0x28));
      }
      else if (uVar42 < uVar38) {
        *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
          **)(puVar33 + -0x1298) = this;
        lVar36 = *(long *)(this + 0xf8) + -0x28 + (ulong)uVar38 * 0x28;
        lVar19 = lVar36;
        do {
          lVar11 = lVar19 + -0x28;
          if (*(int *)(lVar19 + 8) != 0) {
            pvVar10 = *(void **)(lVar19 + 0x10);
            *(undefined8 *)(puVar33 + -0x12a0) = 0x10c96e;
            free(pvVar10);
          }
          lVar19 = lVar11;
        } while (lVar11 != (ulong)(uVar38 - uVar42) * -0x28 + lVar36);
        this = *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                 **)(puVar33 + -0x1298);
      }
      *(uint *)(this + 0xf4) = uVar42;
    }
    this_02 = (hb_vector_t<CFF::parsed_cs_str_vec_t,false> *)(this + 0x100);
    *(undefined8 *)(puVar33 + -0x12a0) = 0x10c2aa;
    cVar8 = hb_vector_t<CFF::parsed_cs_str_vec_t,false>::resize(this_02,iVar43,true,false);
    if (cVar8 != '\0') {
      lVar36 = *(long *)this;
      if (*(int *)(lVar36 + 0x98) != 0) {
        *(undefined8 *)(puVar33 + -0x1290) = 0;
        uVar42 = *(uint *)(this + 0x104);
        lVar35 = 0;
        *(hb_vector_t<CFF::parsed_cs_str_vec_t,false> **)(puVar33 + -0x1280) = this_02;
        *(hb_vector_t<CFF::parsed_cs_str_t,false> **)(puVar33 + -0x1288) = phVar20;
        do {
          uVar38 = (uint)lVar35;
          puVar25 = &_hb_NullPool;
          if (uVar38 < *(uint *)(lVar36 + 0xb4)) {
            puVar25 = (undefined *)(lVar35 * 0x30 + *(long *)(lVar36 + 0xb8));
          }
          uVar9 = **(uint **)(puVar25 + 0x20);
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          if (uVar38 < uVar42) {
            phVar20 = (hb_vector_t<CFF::parsed_cs_str_t,false> *)
                      (lVar35 * 0x10 + *(long *)(this + 0x108));
          }
          else {
            _pthread_mutex_lock = __hb_CrapPool;
            phVar20 = (hb_vector_t<CFF::parsed_cs_str_t,false> *)&_hb_CrapPool;
            __hb_CrapPool = __hb_NullPool;
          }
          if ((int)uVar9 < 0) {
            uVar9 = 0;
          }
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10c33b;
          cVar8 = hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar20,uVar9,false);
          if (cVar8 != '\0') {
            uVar42 = *(uint *)(phVar20 + 4);
            if (uVar42 < uVar9) {
              lVar36 = *(long *)(phVar20 + 8);
              puVar46 = (undefined4 *)(lVar36 + (ulong)uVar42 * 0x28);
              do {
                *(byte *)(puVar46 + 6) = *(byte *)(puVar46 + 6) & 0xe4;
                puVar37 = puVar46 + 10;
                puVar46[2] = 0;
                puVar46[3] = 0;
                *(undefined8 *)(puVar46 + 4) = 0;
                *(undefined8 *)(puVar46 + 8) = 0;
                *puVar46 = 0;
                puVar46 = puVar37;
              } while (puVar37 !=
                       (undefined4 *)
                       (lVar36 + 0x28 + ((ulong)((uVar9 - 1) - uVar42) + (ulong)uVar42) * 0x28));
            }
            else if (uVar9 < uVar42) {
              lVar36 = *(long *)(phVar20 + 8) + -0x28 + (ulong)uVar42 * 0x28;
              lVar19 = lVar36;
              do {
                lVar11 = lVar19 + -0x28;
                if (*(int *)(lVar19 + 8) != 0) {
                  pvVar10 = *(void **)(lVar19 + 0x10);
                  *(long *)(puVar33 + -0x1298) = lVar11;
                  *(undefined8 *)(puVar33 + -0x12a0) = 0x10c441;
                  free(pvVar10);
                  lVar11 = *(long *)(puVar33 + -0x1298);
                }
                lVar19 = lVar11;
              } while (lVar11 != lVar36 + (ulong)(uVar42 - uVar9) * -0x28);
            }
            *(uint *)(phVar20 + 4) = uVar9;
          }
          uVar42 = *(uint *)(this + 0x104);
          if (uVar38 < uVar42) {
            piVar18 = (int *)(lVar35 * 0x10 + *(long *)(this + 0x108));
          }
          else {
            _pthread_mutex_lock = __hb_CrapPool;
            piVar18 = (int *)&_hb_CrapPool;
            __hb_CrapPool = __hb_NullPool;
          }
          if (*piVar18 < 0) goto LAB_0010bba0;
          lVar36 = *(long *)this;
          lVar35 = lVar35 + 1;
        } while ((uint)lVar35 < *(uint *)(lVar36 + 0x98));
        lVar35 = *(long *)(puVar33 + -0x1290);
        this_02 = *(hb_vector_t<CFF::parsed_cs_str_vec_t,false> **)(puVar33 + -0x1280);
        phVar20 = *(hb_vector_t<CFF::parsed_cs_str_t,false> **)(puVar33 + -0x1288);
      }
      goto LAB_0010b94e;
    }
  }
  else {
    uVar38 = *(uint *)(this + 0x68);
    if (-1 < (int)uVar38) {
      uVar9 = *(uint *)(this + 0x6c);
      uVar44 = uVar9;
      if (uVar9 <= uVar42) {
        uVar44 = uVar42;
      }
      if (uVar38 < uVar44) {
        if (uVar44 < 0x20000000) {
          pvVar10 = *(void **)(this + 0x70);
LAB_0010b90b:
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10b917;
          pvVar10 = realloc(pvVar10,(ulong)uVar44 << 3);
          if (pvVar10 != (void *)0x0) goto LAB_0010b920;
          uVar38 = *(uint *)(this + 0x68);
          if (uVar44 <= uVar38) goto LAB_0010b928;
        }
        *(uint *)(this + 0x68) = ~uVar38;
      }
      else {
        if (uVar44 < uVar38 >> 2) {
          pvVar10 = *(void **)(this + 0x70);
          if (uVar44 != 0) goto LAB_0010b90b;
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10d2c5;
          free(pvVar10);
          pvVar10 = (void *)0x0;
LAB_0010b920:
          *(void **)(this + 0x70) = pvVar10;
          *(uint *)(this + 0x68) = uVar44;
LAB_0010b928:
          uVar9 = *(uint *)(this + 0x6c);
        }
        if (uVar9 < uVar42) {
          lVar36 = *(long *)(this + 0x70);
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10b943;
          hb_memset((void *)(lVar36 + (ulong)uVar9 * 8),(uVar42 - uVar9) * 8,uVar9);
        }
        *(uint *)(this + 0x6c) = uVar42;
      }
    }
    phVar20 = (hb_vector_t<CFF::parsed_cs_str_t,false> *)(lVar35 + 0x10);
    this_02 = (hb_vector_t<CFF::parsed_cs_str_vec_t,false> *)(lVar35 + 0x20);
LAB_0010b94e:
    *(hb_vector_t<CFF::parsed_cs_str_t,false> **)(this + 0x78) = phVar20;
    *(hb_vector_t<CFF::parsed_cs_str_vec_t,false> **)(this + 0x80) = this_02;
    if ((((-1 < *(int *)(this + 0xd0)) && (-1 < *(int *)(this + 0x68))) &&
        (-1 < *(int *)(this + 0xe0))) && ((-1 < *(int *)phVar20 && (-1 < *(int *)(this + 0x58))))) {
      puVar47 = *(uint **)(*(long *)(this + 8) + 200);
      uVar42 = *(uint *)(*(long *)(this + 8) + 0xc4);
      *(uint **)(puVar33 + -0x1290) = puVar47 + (ulong)uVar42 * 2;
      if (puVar47 + (ulong)uVar42 * 2 != puVar47) {
        *(undefined1 **)(puVar33 + -0x1288) = puVar33 + -0x11d8;
        *(undefined1 **)(puVar33 + -0x1280) = puVar33 + 0x2f80;
        do {
          uVar42 = puVar47[1];
          uVar38 = *puVar47;
          this_00 = *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(*(long *)this + 0x80);
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10ba36;
          auVar54 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](this_00,uVar42);
          *(long *)(puVar33 + -0x1298) = auVar54._0_8_;
          this_01 = *(CFF2FDSelect **)(*(long *)this + 0x90);
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10ba4e;
          uVar9 = CFF2FDSelect::get_fd(this_01,uVar42);
          lVar36 = *(long *)this;
          if (*(uint *)(lVar36 + 0x98) <= uVar9) goto LAB_0010bba0;
          if (lVar35 == 0) {
            puVar25 = &_hb_NullPool;
            if (uVar9 < *(uint *)(lVar36 + 0xb4)) {
              puVar25 = (undefined *)((ulong)uVar9 * 0x30 + *(long *)(lVar36 + 0xb8));
            }
            puVar4 = *(uint **)(puVar25 + 0x20);
            puVar5 = *(uint **)(lVar36 + 0x70);
            *(undefined8 *)(puVar33 + -0x11c8) = 0;
            *(undefined1 **)(puVar33 + -0x1270) = puVar33 + -0x11c0;
            puVar22 = (undefined8 *)(puVar33 + 0x2e60);
            puVar12 = (undefined8 *)(puVar33 + -0x11c0);
            do {
              *puVar12 = 0;
              puVar13 = puVar12 + 4;
              *(undefined4 *)(puVar12 + 2) = 0;
              *(undefined4 *)((long)puVar12 + 0x14) = 0;
              puVar12[3] = 0;
              puVar12 = puVar13;
            } while (puVar13 != puVar22);
            pauVar41 = *(undefined1 (**) [16])(puVar33 + -0x1280);
            *(long *)(puVar33 + -0x11d0) = auVar54._8_8_;
            puVar33[0x2e88] = 0;
            *(undefined8 *)(puVar33 + -0x11d8) = *(undefined8 *)(puVar33 + -0x1298);
            *(undefined4 *)(puVar33 + -0x11cc) = 0;
            *(undefined4 *)(puVar33 + 0x2e8c) = 0;
            pauVar14 = (undefined1 (*) [16])(puVar33 + 0x2e90);
            if (((ulong)pauVar41 & 8) == 0) {
LAB_0010bcb0:
              do {
                pauVar15 = pauVar14 + 3;
                *pauVar14 = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(pauVar14[1] + 8) = (undefined1  [16])0x0;
                pauVar14 = pauVar15;
              } while (pauVar41 != pauVar15);
            }
            else {
              pauVar41 = *(undefined1 (**) [16])(puVar33 + -0x1280);
              *(undefined1 (*) [16])(puVar33 + 0x2e90) = (undefined1  [16])0x0;
              pauVar14 = (undefined1 (*) [16])(puVar33 + 0x2ea8);
              if (*(undefined1 (**) [16])(puVar33 + -0x1280) !=
                  (undefined1 (*) [16])(puVar33 + 0x2ea8)) goto LAB_0010bcb0;
            }
            *(uint *)(puVar33 + 0x2e68) = auVar54._8_4_;
            *(undefined4 *)(puVar33 + 0x2e6c) = 0;
            iVar43 = 0x6b;
            *(undefined8 *)(puVar33 + 0x2e60) = *(undefined8 *)(puVar33 + -0x1298);
            *(undefined8 *)(puVar33 + 0x2e70) = 0;
            *(undefined2 *)(puVar33 + 0x2e79) = _LC23;
            *(undefined8 *)(puVar33 + 0x2e7c) = 0;
            *(undefined4 *)(puVar33 + 0x2e84) = 0;
            *(uint **)(puVar33 + 0x2f88) = puVar5;
            *(undefined1 (*) [16])(puVar33 + 0x2fa0) = (undefined1  [16])0x0;
            if (puVar5 != (uint *)0x0) {
              uVar42 = *puVar5;
              uVar42 = uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                       uVar42 << 0x18;
              if (0x4d7 < uVar42) {
                iVar43 = (-(uint)(uVar42 < 0x846c) & 0xffff846b) + 0x8000;
              }
            }
            *(int *)(puVar33 + 0x2f80) = iVar43;
            iVar43 = 0x6b;
            *(uint **)(puVar33 + 0x2f98) = puVar4;
            if (puVar4 != (uint *)0x0) {
              uVar42 = *puVar4;
              uVar42 = uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                       uVar42 << 0x18;
              if (0x4d7 < uVar42) {
                iVar43 = (-(uint)(uVar42 < 0x846c) & 0xffff846b) + 0x8000;
              }
            }
            uVar21 = *(undefined8 *)(lVar36 + 0x78);
            *(undefined8 *)(puVar33 + 0x2fd0) = 0;
            *(int *)(puVar33 + 0x2f90) = iVar43;
            *(undefined8 *)(puVar33 + 0x2fc0) = uVar21;
            *(undefined2 *)(puVar33 + 0x2fe0) = 0;
            uVar3 = *(undefined4 *)(puVar25 + 0x28);
            *(undefined8 *)(puVar33 + 0x2fb0) = 0;
            *(undefined4 *)(puVar33 + 0x2fb8) = 0;
            *(undefined8 *)(puVar33 + 0x2fd8) = 0;
            puVar33[0x2fe2] = 0;
            *(undefined4 *)(puVar33 + 0x2fcc) = uVar3;
            *(undefined8 *)(puVar33 + -0x1260) = *(undefined8 *)(puVar33 + -0x1288);
            if (uVar38 < *(uint *)(this + 0xe4)) {
              puVar25 = (undefined *)(*(long *)(this + 0xe8) + (ulong)uVar38 * 0x28);
            }
            else {
              uVar24 = __hb_CrapPool;
              uVar26 = _pthread_mutex_lock;
              uVar50 = _pthread_mutex_unlock;
              puVar25 = &_hb_CrapPool;
              _free = _pthread_mutex_destroy;
              __hb_CrapPool = __hb_NullPool;
              _pthread_mutex_lock = uVar24;
              _pthread_mutex_unlock = uVar26;
              _pthread_mutex_destroy = uVar50;
            }
            *(uint *)(puVar33 + -0x1298) = uVar9;
            *(undefined8 *)(puVar33 + -0x12a0) = 0x10be3a;
            hb_vector_t<CFF::parsed_cs_op_t,false>::alloc
                      ((hb_vector_t<CFF::parsed_cs_op_t,false> *)(puVar25 + 8),auVar54._8_4_,true);
            uVar42 = *(uint *)(puVar33 + -0x1298);
            uVar3 = *(undefined4 *)(*(long *)(this + 8) + 0x14);
            if (uVar42 < *(uint *)(this + 0x5c)) {
              puVar25 = (undefined *)(*(long *)(this + 0x60) + (ulong)uVar42 * 0x48);
            }
            else {
              uVar53 = __hb_CrapPool;
              uVar24 = _pthread_mutex_lock;
              uVar26 = _pthread_mutex_unlock;
              puVar25 = &_hb_CrapPool;
              uVar50 = _pthread_mutex_destroy;
              uVar51 = _free;
              _round = _memcmp;
              uVar52 = _memcpy;
              _memcmp = _memmove;
              __hb_CrapPool = __hb_NullPool;
              _pthread_mutex_lock = uVar53;
              _pthread_mutex_unlock = uVar24;
              _pthread_mutex_destroy = uVar26;
              _free = uVar50;
              _memcpy = uVar51;
              _memmove = uVar52;
            }
            if (uVar42 < *(uint *)(this + 0x104)) {
              puVar16 = (undefined *)((ulong)uVar42 * 0x10 + *(long *)(this + 0x108));
            }
            else {
              _pthread_mutex_lock = __hb_CrapPool;
              puVar16 = &_hb_CrapPool;
              __hb_CrapPool = __hb_NullPool;
            }
            if (uVar38 < *(uint *)(this + 0xe4)) {
              puVar31 = (undefined *)(*(long *)(this + 0xe8) + (ulong)uVar38 * 0x28);
            }
            else {
              _free = _pthread_mutex_destroy;
              uVar24 = __hb_CrapPool;
              uVar26 = _pthread_mutex_lock;
              _pthread_mutex_destroy = _pthread_mutex_unlock;
              puVar31 = &_hb_CrapPool;
              __hb_CrapPool = __hb_NullPool;
              _pthread_mutex_lock = uVar24;
              _pthread_mutex_unlock = uVar26;
            }
            *(undefined **)(puVar33 + -0x1230) = puVar25;
            puVar33[-0x1228] = (byte)uVar3 & 1;
            *(uint *)(puVar33 + -0x1278) = uVar42;
            *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
              **)(puVar33 + -0x1248) = this + 0xf0;
            *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
              **)(puVar33 + -0x1298) = this + 0xf0;
            *(undefined **)(puVar33 + -0x1240) = puVar16;
            *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
              **)(puVar33 + -0x1238) = this + 0x10;
            *(undefined **)(puVar33 + -0x1258) = puVar31;
            *(undefined **)(puVar33 + -0x1250) = puVar31;
            *(undefined8 *)(puVar33 + -0x12a0) = 0x10bedf;
            cVar8 = cs_interpreter_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,CFF::subr_subset_param_t>
                    ::interpret((cs_interpreter_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,CFF::subr_subset_param_t>
                                 *)(puVar33 + -0x1260),(subr_subset_param_t *)(puVar33 + -0x1258));
            uVar21 = *(undefined8 *)(puVar33 + -0x1298);
            uVar42 = *(uint *)(puVar33 + -0x1278);
            if (cVar8 != '\0') {
              uVar9 = *(uint *)(this + 0xe4);
              if (uVar38 < uVar9) {
                ppVar40 = (parsed_cs_str_t *)(*(long *)(this + 0xe8) + (ulong)uVar38 * 0x28);
              }
              else {
                uVar24 = __hb_CrapPool;
                uVar26 = _pthread_mutex_lock;
                uVar50 = _pthread_mutex_unlock;
                ppVar40 = (parsed_cs_str_t *)&_hb_CrapPool;
                _free = _pthread_mutex_destroy;
                __hb_CrapPool = __hb_NullPool;
                _pthread_mutex_lock = uVar24;
                _pthread_mutex_unlock = uVar26;
                _pthread_mutex_destroy = uVar50;
              }
              if (puVar33[0x2fe1] != '\0') {
                iVar43 = *(int *)(puVar33 + 0x2fcc);
                ppVar40[0x18] = (parsed_cs_str_t)((byte)ppVar40[0x18] | 8);
                *(undefined4 *)(ppVar40 + 0x1c) = 0xf;
                *(double *)(ppVar40 + 0x20) = (double)iVar43;
              }
              uVar44 = *(uint *)(*(long *)(this + 8) + 0x14);
              if (((uVar44 & 1) == 0) && (*(long *)(*(long *)(this + 8) + 0xad8) == 0)) {
LAB_0010c014:
                if (uVar38 < uVar9) {
                  lVar36 = *(long *)(this + 0xe8);
                  goto LAB_0010c027;
                }
                uVar50 = __hb_CrapPool;
                uVar24 = _pthread_mutex_lock;
                uVar26 = _pthread_mutex_unlock;
                puVar25 = &_hb_CrapPool;
                _free = _pthread_mutex_destroy;
                __hb_CrapPool = __hb_NullPool;
                _pthread_mutex_lock = uVar50;
                _pthread_mutex_unlock = uVar24;
                _pthread_mutex_destroy = uVar26;
              }
              else {
                if (uVar42 < *(uint *)(this + 0x5c)) {
                  puVar25 = (undefined *)(*(long *)(this + 0x60) + (ulong)uVar42 * 0x48);
                }
                else {
                  uVar53 = __hb_CrapPool;
                  _round = _memcmp;
                  uVar24 = _pthread_mutex_lock;
                  uVar26 = _pthread_mutex_unlock;
                  uVar50 = _pthread_mutex_destroy;
                  uVar51 = _free;
                  uVar52 = _memcpy;
                  _memcmp = _memmove;
                  puVar25 = &_hb_CrapPool;
                  __hb_CrapPool = __hb_NullPool;
                  _pthread_mutex_lock = uVar53;
                  _pthread_mutex_unlock = uVar24;
                  _pthread_mutex_destroy = uVar26;
                  _free = uVar50;
                  _memcpy = uVar51;
                  _memmove = uVar52;
                }
                if (uVar42 < *(uint *)(this + 0x104)) {
                  puVar16 = (undefined *)((ulong)uVar42 * 0x10 + *(long *)(this + 0x108));
                }
                else {
                  _pthread_mutex_lock = __hb_CrapPool;
                  puVar16 = &_hb_CrapPool;
                  __hb_CrapPool = __hb_NullPool;
                }
                *(undefined8 *)(puVar33 + -0x1208) = uVar21;
                *(undefined **)(puVar33 + -0x1200) = puVar16;
                *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                  **)(puVar33 + -0x11f8) = this + 0x10;
                *(undefined **)(puVar33 + -0x11f0) = puVar25;
                puVar33[-0x11e8] = (byte)uVar44 & 1;
                *(undefined4 *)(puVar33 + -0x1264) = 0;
                *(parsed_cs_str_t **)(puVar33 + -0x1218) = ppVar40;
                *(parsed_cs_str_t **)(puVar33 + -0x1210) = ppVar40;
                if (uVar9 <= uVar38) {
                  uVar24 = __hb_CrapPool;
                  uVar26 = _pthread_mutex_lock;
                  uVar50 = _pthread_mutex_unlock;
                  _free = _pthread_mutex_destroy;
                  __hb_CrapPool = __hb_NullPool;
                  _pthread_mutex_lock = uVar24;
                  _pthread_mutex_unlock = uVar26;
                  _pthread_mutex_destroy = uVar50;
                }
                *(undefined8 *)(puVar33 + -0x12a0) = 0x10bfdd;
                cVar8 = drop_hints_in_str(ppVar40,(subr_subset_param_t *)(puVar33 + -0x1218),
                                          (drop_hints_param_t *)(puVar33 + -0x1264));
                uVar9 = *(uint *)(this + 0xe4);
                if (cVar8 == '\0') goto LAB_0010c014;
                cVar8 = puVar33[-0x1261];
                if (uVar9 <= uVar38) {
                  uVar26 = __hb_CrapPool;
                  uVar24 = _pthread_mutex_lock;
                  puVar25 = &_hb_CrapPool;
                  _free = _pthread_mutex_destroy;
                  __hb_CrapPool = __hb_NullPool;
                  _pthread_mutex_lock = uVar26;
                  _pthread_mutex_destroy = _pthread_mutex_unlock;
                  if (cVar8 != '\0') goto LAB_0010c010;
                  _pthread_mutex_destroy = _pthread_mutex_unlock | 2;
                  _pthread_mutex_unlock = uVar24;
                  goto LAB_0010c014;
                }
                lVar36 = *(long *)(this + 0xe8);
                puVar25 = (undefined *)(lVar36 + (ulong)uVar38 * 0x28);
                puVar25[0x18] = puVar25[0x18] | 2;
                uVar24 = _pthread_mutex_unlock;
                if (cVar8 != '\0') {
LAB_0010c010:
                  _pthread_mutex_unlock = uVar24;
                  puVar25[0x18] = puVar25[0x18] | 4;
                  goto LAB_0010c014;
                }
LAB_0010c027:
                puVar25 = (undefined *)(lVar36 + (ulong)uVar38 * 0x28);
              }
              uVar42 = *(uint *)(puVar25 + 0xc);
              if (1 < uVar42) {
                lVar36 = *(long *)(puVar25 + 0x10);
                uVar26 = 0;
                uVar24 = 0;
                plVar17 = (long *)(lVar36 + 0x10);
                do {
                  plVar30 = (long *)(uVar24 * 0x10 + lVar36);
                  if (((((int)plVar30[1] == 10) || ((int)plVar30[1] == 0x1d)) ||
                      ((int)plVar17[1] == 10)) ||
                     ((((int)plVar17[1] == 0x1d ||
                       (*(char *)((long)plVar30 + 0xd) != *(char *)((long)plVar17 + 0xd))) ||
                      ((bVar1 = *(byte *)((long)plVar30 + 0xc), *plVar17 != (ulong)bVar1 + *plVar30
                       || (bVar2 = *(byte *)((long)plVar17 + 0xc), 0xff < (uint)bVar1 + (uint)bVar2)
                       ))))) {
                    uVar26 = (ulong)((int)uVar26 + 1);
                    lVar19 = plVar17[1];
                    plVar30 = (long *)(lVar36 + uVar26 * 0x10);
                    *plVar30 = *plVar17;
                    plVar30[1] = lVar19;
                    uVar24 = uVar26;
                  }
                  else {
                    *(undefined4 *)(plVar30 + 1) = 0xffff;
                    *(byte *)((long)plVar30 + 0xc) = bVar1 + bVar2;
                  }
                  plVar17 = plVar17 + 2;
                } while ((long *)(lVar36 + 0x20 + (ulong)(uVar42 - 2) * 0x10) != plVar17);
                uVar38 = (int)uVar26 + 1;
                if ((int)uVar38 < 0) {
                  uVar38 = 0;
                }
                if (uVar38 < uVar42) {
                  *(uint *)(puVar25 + 0xc) = uVar38;
                  *(undefined8 *)(puVar33 + -0x12a0) = 0x10c0df;
                  hb_vector_t<CFF::parsed_cs_op_t,false>::alloc
                            ((hb_vector_t<CFF::parsed_cs_op_t,false> *)(puVar25 + 8),uVar38,true);
                }
              }
              if (*(int *)(puVar33 + 0x2fd0) != 0) {
                *(undefined8 *)(puVar33 + -0x12a0) = 0x10c454;
                free(*(void **)(puVar33 + 0x2fd8));
              }
              lVar36 = *(long *)(puVar33 + -0x1288);
              puVar34 = puVar33 + 0x2e40;
              do {
                if (*(int *)(puVar34 + 0x10) != 0) {
                  pvVar10 = *(void **)(puVar34 + 0x18);
                  *(undefined8 *)(puVar33 + -0x12a0) = 0x10c127;
                  free(pvVar10);
                }
                puVar34 = puVar34 + -0x20;
              } while ((undefined1 *)(lVar36 + -8) != puVar34);
              goto LAB_0010ba0f;
            }
            puVar12 = *(undefined8 **)(puVar33 + -0x1270);
            if (*(int *)(puVar33 + 0x2fd0) != 0) {
              *(undefined8 **)(puVar33 + -0x1298) = puVar12;
              *(undefined8 *)(puVar33 + -0x12a0) = 0x10d2a9;
              free(*(void **)(puVar33 + 0x2fd8));
              puVar12 = *(undefined8 **)(puVar33 + -0x1298);
            }
            do {
              puVar13 = puVar22 + -4;
              if (*(int *)(puVar22 + -2) != 0) {
                pvVar10 = (void *)puVar22[-1];
                *(undefined8 *)(puVar33 + -0x12a0) = 0x10ca97;
                free(pvVar10);
              }
              puVar22 = puVar13;
            } while (puVar13 != puVar12);
            goto LAB_0010bba0;
          }
          if (*(uint *)(this + 0x6c) == 0) {
            puVar46 = (undefined4 *)&_hb_NullPool;
            if (uVar42 < *(uint *)(lVar35 + 4)) {
              puVar46 = (undefined4 *)(*(long *)(lVar35 + 8) + (ulong)uVar42 * 0x28);
            }
            if (uVar38 < *(uint *)(this + 0xe4)) {
              puVar37 = (undefined4 *)(*(long *)(this + 0xe8) + (ulong)uVar38 * 0x28);
            }
            else {
              _pthread_mutex_lock = __hb_CrapPool;
              _free = _pthread_mutex_destroy;
              puVar37 = (undefined4 *)&_hb_CrapPool;
              uVar24 = __hb_CrapPool;
              _pthread_mutex_destroy = _pthread_mutex_unlock;
              __hb_CrapPool = __hb_NullPool;
              _pthread_mutex_unlock = uVar24;
            }
            *puVar37 = *puVar46;
            if ((int)puVar37[2] < 0) {
              puVar37[2] = ~puVar37[2];
            }
            *(undefined8 *)(puVar33 + -0x12a0) = 0x10bad0;
            cVar8 = hb_vector_t<CFF::parsed_cs_op_t,false>::alloc
                              ((hb_vector_t<CFF::parsed_cs_op_t,false> *)(puVar37 + 2),0,false);
            if (cVar8 != '\0') {
              puVar37[3] = 0;
            }
            uVar42 = puVar46[3];
            *(undefined8 *)(puVar33 + -0x12a0) = 0x10baed;
            hb_vector_t<CFF::parsed_cs_op_t,false>::alloc
                      ((hb_vector_t<CFF::parsed_cs_op_t,false> *)(puVar37 + 2),uVar42,true);
            if (-1 < (int)puVar37[2]) {
              uVar42 = puVar46[3];
              lVar36 = *(long *)(puVar46 + 4);
              puVar37[3] = uVar42;
              if (uVar42 != 0) {
                lVar19 = *(long *)(puVar37 + 4);
                lVar11 = 0;
                do {
                  uVar21 = ((undefined8 *)(lVar36 + lVar11))[1];
                  *(undefined8 *)(lVar19 + lVar11) = *(undefined8 *)(lVar36 + lVar11);
                  ((undefined8 *)(lVar19 + lVar11))[1] = uVar21;
                  lVar11 = lVar11 + 0x10;
                } while (lVar11 != (ulong)uVar42 << 4);
              }
            }
            bVar1 = *(byte *)(puVar37 + 6);
            bVar27 = *(byte *)(puVar46 + 6) & 1;
            *(byte *)(puVar37 + 6) = bVar1 & 0xfe | bVar27;
            bVar28 = *(byte *)(puVar46 + 6) & 2;
            *(byte *)(puVar37 + 6) = bVar1 & 0xfc | bVar27 | bVar28;
            bVar29 = *(byte *)(puVar46 + 6) & 4;
            *(byte *)(puVar37 + 6) = bVar1 & 0xf8 | bVar27 | bVar28 | bVar29;
            bVar2 = *(byte *)(puVar46 + 6);
            *(byte *)(puVar37 + 6) = bVar1 & 0xf0 | bVar27 | bVar28 | bVar29 | bVar2 & 8;
            *(byte *)(puVar37 + 6) =
                 bVar1 & 0xe0 | bVar27 | bVar28 | bVar29 | bVar2 & 8 | *(byte *)(puVar46 + 6) & 0x10
            ;
            uVar21 = *(undefined8 *)(puVar46 + 8);
            puVar37[7] = puVar46[7];
            *(undefined8 *)(puVar37 + 8) = uVar21;
          }
          else {
            puVar25 = &_hb_NullPool;
            if (uVar42 < *(uint *)(lVar35 + 4)) {
              puVar25 = (undefined *)(*(long *)(lVar35 + 8) + (ulong)uVar42 * 0x28);
            }
            if (uVar38 < *(uint *)(this + 0x6c)) {
              puVar22 = (undefined8 *)(*(long *)(this + 0x70) + (ulong)uVar38 * 8);
            }
            else {
              __hb_CrapPool = __hb_NullPool;
              puVar22 = (undefined8 *)&_hb_CrapPool;
            }
            *puVar22 = puVar25;
          }
LAB_0010ba0f:
          puVar47 = puVar47 + 2;
        } while (*(uint **)(puVar33 + -0x1290) != puVar47);
      }
      if ((lVar35 != 0) || ((*(byte *)(*(long *)(this + 8) + 0x14) & 1) != 0)) {
        phVar6 = *(hb_vector_t **)(this + 0x80);
        ppVar7 = *(parsed_cs_str_vec_t **)(this + 0x78);
        *(undefined8 *)(puVar33 + -0x12a0) = 0x10c4c2;
        cVar8 = closure_subroutines(this,ppVar7,phVar6);
        if (cVar8 == '\0') goto LAB_0010bba0;
      }
      lVar35 = 0;
      *(undefined8 *)(puVar33 + -0x12a0) = 0x10c4dc;
      subr_remap_t::create((subr_remap_t *)(this + 0x88),(hb_set_t *)(this + 0x10));
      if (*(int *)(this + 0xd4) != 0) {
        do {
          lVar36 = *(long *)(this + 0xd8);
          if ((uint)lVar35 < *(uint *)(this + 0x5c)) {
            phVar39 = (hb_set_t *)(lVar35 * 0x48 + *(long *)(this + 0x60));
          }
          else {
            uVar51 = __hb_CrapPool;
            uVar52 = _pthread_mutex_lock;
            uVar53 = _pthread_mutex_unlock;
            phVar39 = (hb_set_t *)&_hb_CrapPool;
            uVar24 = _pthread_mutex_destroy;
            uVar26 = _free;
            _round = _memcmp;
            uVar50 = _memcpy;
            _memcmp = _memmove;
            __hb_CrapPool = __hb_NullPool;
            _pthread_mutex_lock = uVar51;
            _pthread_mutex_unlock = uVar52;
            _pthread_mutex_destroy = uVar53;
            _free = uVar24;
            _memcpy = uVar26;
            _memmove = uVar50;
          }
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10c50d;
          subr_remap_t::create((subr_remap_t *)(lVar36 + lVar35 * 0x48),phVar39);
          lVar35 = lVar35 + 1;
        } while ((uint)lVar35 < *(uint *)(this + 0xd4));
      }
      if (*(long *)(*(long *)(this + 8) + 0xad8) != 0) {
        lVar36 = *(long *)(this + 0xf8);
        lVar35 = lVar36 + (ulong)*(uint *)(this + 0xf4) * 0x28;
        for (; lVar36 != lVar35; lVar36 = lVar36 + 0x28) {
          uVar42 = *(uint *)(lVar36 + 0xc);
          if (1 < uVar42) {
            lVar19 = *(long *)(lVar36 + 0x10);
            uVar26 = 0;
            uVar24 = 0;
            plVar17 = (long *)(lVar19 + 0x10);
            do {
              plVar30 = (long *)(uVar24 * 0x10 + lVar19);
              if ((((((int)plVar30[1] == 10) || ((int)plVar30[1] == 0x1d)) ||
                   ((int)plVar17[1] == 10)) ||
                  (((int)plVar17[1] == 0x1d ||
                   (*(char *)((long)plVar30 + 0xd) != *(char *)((long)plVar17 + 0xd))))) ||
                 ((bVar1 = *(byte *)((long)plVar30 + 0xc), *plVar17 != (ulong)bVar1 + *plVar30 ||
                  (bVar2 = *(byte *)((long)plVar17 + 0xc), 0xff < (uint)bVar1 + (uint)bVar2)))) {
                uVar26 = (ulong)((int)uVar26 + 1);
                lVar11 = plVar17[1];
                plVar30 = (long *)(lVar19 + uVar26 * 0x10);
                *plVar30 = *plVar17;
                plVar30[1] = lVar11;
                uVar24 = uVar26;
              }
              else {
                *(undefined4 *)(plVar30 + 1) = 0xffff;
                *(byte *)((long)plVar30 + 0xc) = bVar1 + bVar2;
              }
              plVar17 = plVar17 + 2;
            } while (plVar17 != (long *)(lVar19 + 0x20 + (ulong)(uVar42 - 2) * 0x10));
            uVar38 = (int)uVar26 + 1;
            if ((int)uVar38 < 0) {
              uVar38 = 0;
            }
            if (uVar38 < uVar42) {
              *(uint *)(lVar36 + 0xc) = uVar38;
              *(undefined8 *)(puVar33 + -0x12a0) = 0x10c5f0;
              hb_vector_t<CFF::parsed_cs_op_t,false>::alloc
                        ((hb_vector_t<CFF::parsed_cs_op_t,false> *)(lVar36 + 8),uVar38,true);
            }
          }
        }
        lVar36 = *(long *)(this + 0x108);
        lVar35 = lVar36 + (ulong)*(uint *)(this + 0x104) * 0x10;
        for (; lVar36 != lVar35; lVar36 = lVar36 + 0x10) {
          lVar11 = *(long *)(lVar36 + 8);
          lVar19 = lVar11 + (ulong)*(uint *)(lVar36 + 4) * 0x28;
          for (; lVar11 != lVar19; lVar11 = lVar11 + 0x28) {
            uVar42 = *(uint *)(lVar11 + 0xc);
            if (1 < uVar42) {
              pvVar10 = *(void **)(lVar11 + 0x10);
              uVar26 = 0;
              uVar24 = 0;
              plVar17 = (long *)((long)pvVar10 + 0x10);
              do {
                plVar30 = (long *)(uVar24 * 0x10 + (long)pvVar10);
                if ((((int)plVar30[1] == 10) || ((int)plVar30[1] == 0x1d)) ||
                   (((int)plVar17[1] == 10 ||
                    ((((int)plVar17[1] == 0x1d ||
                      (*(char *)((long)plVar30 + 0xd) != *(char *)((long)plVar17 + 0xd))) ||
                     (bVar1 = *(byte *)((long)plVar30 + 0xc), *plVar17 != (ulong)bVar1 + *plVar30)))
                    ))) {
LAB_0010c6b0:
                  uVar26 = (ulong)((int)uVar26 + 1);
                  lVar48 = plVar17[1];
                  plVar30 = (long *)((long)pvVar10 + uVar26 * 0x10);
                  *plVar30 = *plVar17;
                  plVar30[1] = lVar48;
                  uVar24 = uVar26;
                }
                else {
                  bVar2 = *(byte *)((long)plVar17 + 0xc);
                  *(uint *)(puVar33 + -0x1298) = (uint)bVar2;
                  puVar33[-0x1290] = bVar2;
                  if (0xff < (int)((uint)bVar1 + *(int *)(puVar33 + -0x1298))) goto LAB_0010c6b0;
                  cVar8 = puVar33[-0x1290];
                  *(undefined4 *)(plVar30 + 1) = 0xffff;
                  *(byte *)((long)plVar30 + 0xc) = bVar1 + cVar8;
                }
                plVar17 = plVar17 + 2;
              } while ((long *)((long)pvVar10 + (ulong)(uVar42 - 2) * 0x10 + 0x20) != plVar17);
              uVar9 = (int)uVar26 + 1;
              uVar38 = 0;
              if (-1 < (int)uVar9) {
                uVar38 = uVar9;
              }
              if (uVar38 < uVar42) {
                uVar42 = *(uint *)(lVar11 + 8);
                *(uint *)(lVar11 + 0xc) = uVar38;
                if (-1 < (int)uVar42) {
                  if (uVar42 < uVar38) {
                    if ((int)uVar9 < 0x10000000) {
LAB_0010c700:
                      *(undefined8 *)(puVar33 + -0x12a0) = 0x10c70c;
                      pvVar10 = realloc(pvVar10,(long)(int)uVar38 << 4);
                      if (pvVar10 != (void *)0x0) {
LAB_0010c715:
                        *(void **)(lVar11 + 0x10) = pvVar10;
                        *(uint *)(lVar11 + 8) = uVar38;
                        goto LAB_0010c720;
                      }
                      uVar42 = *(uint *)(lVar11 + 8);
                      if (uVar38 <= uVar42) goto LAB_0010c720;
                    }
                  }
                  else {
                    if (uVar42 >> 2 <= uVar38) goto LAB_0010c720;
                    if ((int)uVar9 < 0x10000000) {
                      if (0 < (int)uVar9) goto LAB_0010c700;
                      *(undefined8 *)(puVar33 + -0x12a0) = 0x10cc79;
                      free(pvVar10);
                      pvVar10 = (void *)0x0;
                      goto LAB_0010c715;
                    }
                  }
                  *(uint *)(lVar11 + 8) = ~uVar42;
                }
              }
            }
LAB_0010c720:
          }
        }
        lVar35 = *(long *)this;
        *(undefined8 *)(puVar33 + -0x1278) = *(undefined8 *)(lVar35 + 0x40);
        *(undefined8 *)(puVar33 + -0x12a0) = 0x10c753;
        phVar20 = (hb_vector_t<CFF::parsed_cs_str_t,false> *)malloc(0x40);
        if (phVar20 != (hb_vector_t<CFF::parsed_cs_str_t,false> *)0x0) {
          *(undefined8 *)phVar20 = 0;
          *(undefined8 *)(phVar20 + 8) = 0;
          *(undefined8 *)(phVar20 + 0x10) = 0;
          *(undefined8 *)(phVar20 + 0x18) = 0;
          *(undefined8 *)(phVar20 + 0x20) = 0;
          *(undefined1 (*) [16])(phVar20 + 0x28) = (undefined1  [16])0x0;
          *(hb_vector_t<CFF::parsed_cs_str_t,false> **)(puVar33 + -0x1298) = phVar20;
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10c79e;
          cVar8 = hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar20,0,false);
          phVar20 = *(hb_vector_t<CFF::parsed_cs_str_t,false> **)(puVar33 + -0x1298);
          if (cVar8 != '\0') {
            uVar42 = *(uint *)(phVar20 + 4);
            if (uVar42 != 0) {
              lVar36 = *(long *)(phVar20 + 8) + -0x28 + (ulong)uVar42 * 0x28;
              lVar19 = lVar36;
              do {
                lVar11 = lVar19 + -0x28;
                if (*(int *)(lVar19 + 8) != 0) {
                  pvVar10 = *(void **)(lVar19 + 0x10);
                  *(undefined8 *)(puVar33 + -0x12a0) = 0x10c7ee;
                  free(pvVar10);
                }
                lVar19 = lVar11;
              } while (lVar11 != lVar36 + (ulong)uVar42 * -0x28);
            }
            *(undefined4 *)(phVar20 + 4) = 0;
          }
          uVar42 = *(uint *)(this + 0xe4);
          *(hb_vector_t<CFF::parsed_cs_str_t,false> **)(puVar33 + -0x1298) = phVar20;
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10cca1;
          hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar20,uVar42,true);
          piVar18 = *(int **)(puVar33 + -0x1298);
          if (-1 < *piVar18) {
            iVar43 = *(int *)(this + 0xe4);
            piVar18[1] = 0;
            puVar46 = *(undefined4 **)(this + 0xe8);
            if (iVar43 != 0) {
              puVar37 = *(undefined4 **)(piVar18 + 2);
              *(long *)(puVar33 + -0x1298) = lVar35;
              *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                **)(puVar33 + -0x1290) = this;
              iVar45 = 1;
              do {
                piVar18[1] = iVar45;
                uVar3 = *puVar46;
                puVar37[2] = 0;
                *puVar37 = uVar3;
                uVar42 = puVar46[3];
                puVar37[3] = 0;
                *(undefined8 *)(puVar37 + 4) = 0;
                if (uVar42 != 0) {
                  if (uVar42 < 0x10000000) {
                    *(uint *)(puVar33 + -0x1288) = uVar42;
                    *(undefined8 *)(puVar33 + -0x12a0) = 0x10cd35;
                    pvVar10 = malloc((ulong)uVar42 << 4);
                    uVar3 = *(undefined4 *)(puVar33 + -0x1288);
                    if (pvVar10 != (void *)0x0) {
                      puVar37[2] = uVar3;
                      puVar37[3] = uVar3;
                      *(void **)(puVar37 + 4) = pvVar10;
                      lVar35 = *(long *)(puVar46 + 4);
                      sVar23 = 0;
                      do {
                        uVar21 = ((undefined8 *)(lVar35 + sVar23))[1];
                        *(undefined8 *)((long)pvVar10 + sVar23) = *(undefined8 *)(lVar35 + sVar23);
                        ((undefined8 *)((long)pvVar10 + sVar23))[1] = uVar21;
                        sVar23 = sVar23 + 0x10;
                      } while ((ulong)uVar42 << 4 != sVar23);
                      goto LAB_0010cd6a;
                    }
                  }
                  puVar37[2] = 0xffffffff;
                }
LAB_0010cd6a:
                bVar1 = *(byte *)(puVar46 + 6);
                *(undefined8 *)(puVar37 + 8) = *(undefined8 *)(puVar46 + 8);
                *(byte *)(puVar37 + 6) = *(byte *)(puVar37 + 6) & 0xe0 | bVar1 & 0x1f;
                puVar37[7] = puVar46[7];
                bVar49 = iVar45 != iVar43;
                puVar37 = puVar37 + 10;
                puVar46 = puVar46 + 10;
                iVar45 = iVar45 + 1;
              } while (bVar49);
              lVar35 = *(long *)(puVar33 + -0x1298);
              this = *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                       **)(puVar33 + -0x1290);
            }
          }
          if (piVar18[4] < 0) {
            piVar18[4] = ~piVar18[4];
          }
          *(int **)(puVar33 + -0x1298) = piVar18;
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10cde3;
          cVar8 = hb_vector_t<CFF::parsed_cs_str_t,false>::alloc
                            ((hb_vector_t<CFF::parsed_cs_str_t,false> *)(piVar18 + 4),0,false);
          lVar36 = *(long *)(puVar33 + -0x1298);
          if (cVar8 != '\0') {
            uVar42 = *(uint *)(lVar36 + 0x14);
            if (uVar42 != 0) {
              lVar19 = *(long *)(lVar36 + 0x18) + -0x28 + (ulong)uVar42 * 0x28;
              lVar11 = lVar19;
              do {
                lVar48 = lVar11 + -0x28;
                if (*(int *)(lVar11 + 8) != 0) {
                  pvVar10 = *(void **)(lVar11 + 0x10);
                  *(undefined8 *)(puVar33 + -0x12a0) = 0x10ce26;
                  free(pvVar10);
                }
                lVar11 = lVar48;
              } while (lVar48 != lVar19 + (ulong)uVar42 * -0x28);
            }
            *(undefined4 *)(lVar36 + 0x14) = 0;
          }
          uVar42 = *(uint *)(this + 0xf4);
          *(long *)(puVar33 + -0x1298) = lVar36;
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10ce49;
          hb_vector_t<CFF::parsed_cs_str_t,false>::alloc
                    ((hb_vector_t<CFF::parsed_cs_str_t,false> *)(piVar18 + 4),uVar42,true);
          lVar36 = *(long *)(puVar33 + -0x1298);
          if (-1 < *(int *)(lVar36 + 0x10)) {
            iVar43 = *(int *)(this + 0xf4);
            *(undefined4 *)(lVar36 + 0x14) = 0;
            puVar46 = *(undefined4 **)(this + 0xf8);
            if (iVar43 != 0) {
              puVar37 = *(undefined4 **)(lVar36 + 0x18);
              *(long *)(puVar33 + -0x1298) = lVar35;
              iVar45 = 0;
              *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                **)(puVar33 + -0x1290) = this;
              do {
                iVar45 = iVar45 + 1;
                *(int *)(lVar36 + 0x14) = iVar45;
                uVar3 = *puVar46;
                puVar37[2] = 0;
                *puVar37 = uVar3;
                uVar42 = puVar46[3];
                puVar37[3] = 0;
                *(undefined8 *)(puVar37 + 4) = 0;
                if (uVar42 != 0) {
                  if (uVar42 < 0x10000000) {
                    *(uint *)(puVar33 + -0x1288) = uVar42;
                    *(undefined8 *)(puVar33 + -0x12a0) = 0x10cedd;
                    pvVar10 = malloc((ulong)uVar42 << 4);
                    uVar3 = *(undefined4 *)(puVar33 + -0x1288);
                    if (pvVar10 != (void *)0x0) {
                      puVar37[2] = uVar3;
                      puVar37[3] = uVar3;
                      *(void **)(puVar37 + 4) = pvVar10;
                      lVar35 = *(long *)(puVar46 + 4);
                      sVar23 = 0;
                      do {
                        uVar21 = ((undefined8 *)(lVar35 + sVar23))[1];
                        *(undefined8 *)((long)pvVar10 + sVar23) = *(undefined8 *)(lVar35 + sVar23);
                        ((undefined8 *)((long)pvVar10 + sVar23))[1] = uVar21;
                        sVar23 = sVar23 + 0x10;
                      } while (sVar23 != (ulong)uVar42 << 4);
                      goto LAB_0010cf12;
                    }
                  }
                  puVar37[2] = 0xffffffff;
                }
LAB_0010cf12:
                bVar1 = *(byte *)(puVar46 + 6);
                *(undefined8 *)(puVar37 + 8) = *(undefined8 *)(puVar46 + 8);
                *(byte *)(puVar37 + 6) = *(byte *)(puVar37 + 6) & 0xe0 | bVar1 & 0x1f;
                puVar37[7] = puVar46[7];
                puVar37 = puVar37 + 10;
                puVar46 = puVar46 + 10;
              } while (iVar43 != iVar45);
              lVar35 = *(long *)(puVar33 + -0x1298);
              this = *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                       **)(puVar33 + -0x1290);
            }
          }
          if ((int)*(uint *)(lVar36 + 0x20) < 0) {
            *(uint *)(lVar36 + 0x20) = ~*(uint *)(lVar36 + 0x20);
          }
          uVar42 = *(uint *)(lVar36 + 0x24);
          if (uVar42 != 0) {
            lVar19 = *(long *)(lVar36 + 0x28);
            *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
              **)(puVar33 + -0x1298) = this;
            piVar32 = (int *)(lVar19 + -0x10 + (ulong)uVar42 * 0x10);
            piVar18 = piVar32 + (ulong)(uVar42 - 1) * -4 + -4;
            do {
              if (*piVar32 != 0) {
                uVar42 = piVar32[1];
                pvVar10 = *(void **)(piVar32 + 2);
                lVar19 = (long)pvVar10 + (ulong)uVar42 * 0x28 + -0x28;
                if (uVar42 != 0) {
                  lVar11 = lVar19;
                  do {
                    lVar48 = lVar11 + -0x28;
                    if (*(int *)(lVar11 + 8) != 0) {
                      pvVar10 = *(void **)(lVar11 + 0x10);
                      *(undefined8 *)(puVar33 + -0x12a0) = 0x10cff8;
                      free(pvVar10);
                    }
                    lVar11 = lVar48;
                  } while (((ulong)(uVar42 - 1) + 1) * -0x28 + lVar19 != lVar48);
                  pvVar10 = *(void **)(piVar32 + 2);
                }
                *(undefined8 *)(puVar33 + -0x12a0) = 0x10d2bb;
                free(pvVar10);
              }
              piVar32 = piVar32 + -4;
            } while (piVar18 != piVar32);
            this = *(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                     **)(puVar33 + -0x1298);
          }
          uVar42 = *(uint *)(lVar36 + 0x20);
          *(undefined4 *)(lVar36 + 0x24) = 0;
          uVar38 = *(uint *)(this + 0x104);
          if (-1 < (int)uVar42) {
            if (uVar42 < uVar38) {
              if (uVar38 < 0x10000000) {
                pvVar10 = *(void **)(lVar36 + 0x28);
LAB_0010d041:
                *(long *)(puVar33 + -0x1290) = lVar36;
                *(uint *)(puVar33 + -0x1298) = uVar38;
                *(undefined8 *)(puVar33 + -0x12a0) = 0x10d056;
                pvVar10 = realloc(pvVar10,(ulong)uVar38 << 4);
                uVar38 = *(uint *)(puVar33 + -0x1298);
                lVar36 = *(long *)(puVar33 + -0x1290);
                if (pvVar10 != (void *)0x0) {
LAB_0010d068:
                  *(void **)(lVar36 + 0x28) = pvVar10;
                  *(uint *)(lVar36 + 0x20) = uVar38;
                  uVar38 = *(uint *)(this + 0x104);
                  goto LAB_0010d077;
                }
                uVar42 = *(uint *)(lVar36 + 0x20);
                if (uVar38 <= uVar42) {
                  if (-1 < (int)uVar42) {
                    uVar38 = *(uint *)(this + 0x104);
                    goto LAB_0010d077;
                  }
                  goto LAB_0010c7f8;
                }
              }
            }
            else {
              if (uVar42 >> 2 <= uVar38) {
LAB_0010d077:
                uVar21 = *(undefined8 *)(this + 0x108);
                *(undefined4 *)(lVar36 + 0x24) = 0;
                *(long *)(puVar33 + -0x1270) = lVar35;
                *(uint *)(puVar33 + -0x1288) = uVar38;
                *(undefined8 *)(puVar33 + -0x1280) = uVar21;
                uVar24 = 0;
                while ((uint)uVar24 < *(uint *)(puVar33 + -0x1288)) {
                  lVar35 = *(long *)(puVar33 + -0x1280);
                  *(uint *)(lVar36 + 0x24) = (uint)uVar24 + 1;
                  phVar20 = (hb_vector_t<CFF::parsed_cs_str_t,false> *)
                            (*(long *)(lVar36 + 0x28) + uVar24 * 0x10);
                  lVar35 = lVar35 + uVar24 * 0x10;
                  *(undefined8 *)phVar20 = 0;
                  uVar42 = *(uint *)(lVar35 + 4);
                  *(undefined8 *)(phVar20 + 8) = 0;
                  *(undefined8 *)(puVar33 + -0x12a0) = 0x10d0e1;
                  hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar20,uVar42,true);
                  if (-1 < *(int *)phVar20) {
                    iVar43 = *(int *)(lVar35 + 4);
                    puVar46 = *(undefined4 **)(lVar35 + 8);
                    *(undefined4 *)(phVar20 + 4) = 0;
                    if (iVar43 != 0) {
                      iVar45 = 0;
                      puVar37 = *(undefined4 **)(phVar20 + 8);
                      do {
                        iVar45 = iVar45 + 1;
                        *(int *)(phVar20 + 4) = iVar45;
                        uVar3 = *puVar46;
                        puVar37[2] = 0;
                        *puVar37 = uVar3;
                        uVar42 = puVar46[3];
                        puVar37[3] = 0;
                        *(undefined8 *)(puVar37 + 4) = 0;
                        if (uVar42 != 0) {
                          if (uVar42 < 0x10000000) {
                            *(int *)(puVar33 + -0x1290) = iVar43;
                            *(uint *)(puVar33 + -0x1298) = uVar42;
                            *(undefined8 *)(puVar33 + -0x12a0) = 0x10d15d;
                            pvVar10 = malloc((ulong)uVar42 << 4);
                            uVar3 = *(undefined4 *)(puVar33 + -0x1298);
                            iVar43 = *(int *)(puVar33 + -0x1290);
                            if (pvVar10 != (void *)0x0) {
                              *(void **)(puVar37 + 4) = pvVar10;
                              lVar35 = *(long *)(puVar46 + 4);
                              puVar37[2] = uVar3;
                              puVar37[3] = uVar3;
                              sVar23 = 0;
                              do {
                                uVar21 = ((undefined8 *)(lVar35 + sVar23))[1];
                                *(undefined8 *)((long)pvVar10 + sVar23) =
                                     *(undefined8 *)(lVar35 + sVar23);
                                ((undefined8 *)((long)pvVar10 + sVar23))[1] = uVar21;
                                sVar23 = sVar23 + 0x10;
                              } while (sVar23 != (ulong)uVar42 << 4);
                              goto LAB_0010d192;
                            }
                          }
                          puVar37[2] = 0xffffffff;
                        }
LAB_0010d192:
                        bVar1 = *(byte *)(puVar46 + 6);
                        *(undefined8 *)(puVar37 + 8) = *(undefined8 *)(puVar46 + 8);
                        *(byte *)(puVar37 + 6) = *(byte *)(puVar37 + 6) & 0xe0 | bVar1 & 0x1f;
                        puVar37[7] = puVar46[7];
                        puVar37 = puVar37 + 10;
                        puVar46 = puVar46 + 10;
                      } while (iVar43 != iVar45);
                    }
                  }
                  uVar24 = (ulong)*(uint *)(lVar36 + 0x24);
                }
                lVar35 = *(long *)(puVar33 + -0x1270);
                goto LAB_0010c7f8;
              }
              if (uVar38 < 0x10000000) {
                pvVar10 = *(void **)(lVar36 + 0x28);
                if (uVar38 != 0) goto LAB_0010d041;
                *(undefined4 *)(puVar33 + -0x1290) = 0;
                *(long *)(puVar33 + -0x1298) = lVar36;
                *(undefined8 *)(puVar33 + -0x12a0) = 0x10d283;
                free(pvVar10);
                lVar36 = *(long *)(puVar33 + -0x1298);
                uVar38 = *(uint *)(puVar33 + -0x1290);
                pvVar10 = (void *)0x0;
                goto LAB_0010d068;
              }
            }
            *(uint *)(lVar36 + 0x20) = ~uVar42;
          }
LAB_0010c7f8:
          *(long *)(puVar33 + -0x1298) = lVar36;
          *(undefined8 *)(puVar33 + -0x12a0) = 0x10c806;
          uVar21 = hb_blob_reference(*(undefined8 *)(puVar33 + -0x1278));
          phVar20 = *(hb_vector_t<CFF::parsed_cs_str_t,false> **)(puVar33 + -0x1298);
          *(undefined8 *)(phVar20 + 0x38) = uVar21;
        }
        *(hb_vector_t<CFF::parsed_cs_str_t,false> **)(lVar35 + 200) = phVar20;
      }
      uVar21 = 1;
      goto LAB_0010bba2;
    }
  }
LAB_0010bba0:
  uVar21 = 0;
LAB_0010bba2:
  if (*(long *)(puVar33 + 0x2ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar33 + -0x12a0) = 0x10d2f6;
    __stack_chk_fail();
  }
  return uVar21;
}



/* hb_vector_t<hb_vector_t<unsigned char, false>, false>::resize(int, bool, bool) */

undefined8 __thiscall
hb_vector_t<hb_vector_t<unsigned_char,false>,false>::resize
          (hb_vector_t<hb_vector_t<unsigned_char,false>,false> *this,int param_1,bool param_2,
          bool param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  
  uVar3 = 0;
  if (-1 < param_1) {
    uVar3 = param_1;
  }
  uVar5 = *(uint *)this;
  if ((int)uVar5 < 0) {
    return 0;
  }
  if (param_3) {
    uVar6 = *(uint *)(this + 4);
    uVar2 = uVar6;
    if (uVar6 <= uVar3) {
      uVar2 = uVar3;
    }
    uVar7 = (ulong)uVar2;
    if (uVar5 < uVar2) {
      if (0xfffffff < uVar2) goto LAB_0010d392;
      pvVar4 = *(void **)(this + 8);
LAB_0010d45c:
      uVar6 = (uint)uVar7;
      pvVar4 = realloc(pvVar4,uVar7 << 4);
      if (pvVar4 == (void *)0x0) {
        uVar5 = *(uint *)this;
        if (uVar5 < uVar6) {
LAB_0010d392:
          *(uint *)this = ~uVar5;
          return 0;
        }
        goto LAB_0010d34d;
      }
    }
    else {
      if (uVar5 >> 2 <= uVar2) goto LAB_0010d350;
      if (0xfffffff < uVar2) goto LAB_0010d392;
      pvVar4 = *(void **)(this + 8);
      if (uVar2 != 0) goto LAB_0010d45c;
      free(pvVar4);
      uVar6 = 0;
      pvVar4 = (void *)0x0;
    }
    *(void **)(this + 8) = pvVar4;
    *(uint *)this = uVar6;
  }
  else {
    uVar6 = uVar5;
    if (uVar5 < uVar3) {
      do {
        uVar6 = uVar6 + 8 + (uVar6 >> 1);
      } while (uVar6 < uVar3);
      if (0xfffffff < uVar6) goto LAB_0010d392;
      pvVar4 = *(void **)(this + 8);
      uVar7 = (ulong)uVar6;
      goto LAB_0010d45c;
    }
  }
LAB_0010d34d:
  uVar6 = *(uint *)(this + 4);
LAB_0010d350:
  if (uVar6 < uVar3) {
    if (param_2) {
      uVar5 = (uVar3 - uVar6) * 0x10;
      if (uVar5 != 0) {
        memset((void *)(*(long *)(this + 8) + (ulong)uVar6 * 0x10),0,(ulong)uVar5);
      }
    }
  }
  else if ((uVar3 < uVar6) && (param_2)) {
    piVar1 = (int *)(*(long *)(this + 8) + -0x10 + (ulong)uVar6 * 0x10);
    piVar8 = piVar1;
    do {
      piVar9 = piVar8 + -4;
      if (*piVar8 != 0) {
        free(*(void **)(piVar8 + 2));
      }
      piVar8 = piVar9;
    } while (piVar1 + (ulong)(uVar6 - uVar3) * -4 != piVar9);
  }
  *(uint *)(this + 4) = uVar3;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::cs_opset_t<CFF::blend_arg_t, cff2_cs_opset_flatten_t,
   CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>, CFF::flatten_param_t,
   CFF::path_procs_null_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>, CFF::flatten_param_t>
   >::process_op(unsigned int, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>&, CFF::flatten_param_t&)
    */

void CFF::
     cs_opset_t<CFF::blend_arg_t,cff2_cs_opset_flatten_t,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,CFF::flatten_param_t,CFF::path_procs_null_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,CFF::flatten_param_t>>
     ::process_op(uint param_1,cff2_cs_interp_env_t *param_2,flatten_param_t *param_3)

{
  str_encoder_t *this;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uchar *puVar4;
  cff2_cs_interp_env_t *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (0x1f < param_1) {
    switch(param_1) {
    case 0xff:
      uVar2 = *(uint *)(param_2 + 0xc);
      uVar7 = *(uint *)(param_2 + 8);
      if (uVar7 < uVar2 + 4) {
        return;
      }
      if (uVar2 < uVar7) {
        puVar3 = (uint *)((ulong)uVar2 + *(long *)param_2);
      }
      else {
        puVar3 = (uint *)&_hb_NullPool;
        *(uint *)(param_2 + 0xc) = uVar7 + 1;
      }
      uVar2 = *puVar3;
      uVar7 = *(uint *)(param_2 + 0x14);
      if (uVar7 < 0x201) {
        *(uint *)(param_2 + 0x14) = uVar7 + 1;
        pcVar5 = param_2 + (ulong)uVar7 * 0x20 + 0x18;
      }
      else {
        uVar6 = __hb_NullPool;
        uVar8 = __hb_CrapPool;
        uVar9 = _pthread_mutex_lock;
        _pthread_mutex_destroy = _pthread_mutex_unlock;
        param_2[0x10] = (cff2_cs_interp_env_t)0x1;
        pcVar5 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
        __hb_CrapPool = uVar6;
        _pthread_mutex_lock = uVar8;
        _pthread_mutex_unlock = uVar9;
      }
      *(undefined8 *)(pcVar5 + 8) = 0;
      if (*(int *)(pcVar5 + 0x14) != 0) {
        *(undefined4 *)(pcVar5 + 0x14) = 0;
        if ((-1 < (int)*(uint *)(pcVar5 + 0x10)) && (*(uint *)(pcVar5 + 0x10) >> 2 != 0)) {
          free(*(void **)(pcVar5 + 0x18));
          *(undefined8 *)(pcVar5 + 0x18) = 0;
          *(undefined4 *)(pcVar5 + 0x10) = 0;
        }
      }
      *(double *)pcVar5 =
           (double)(int)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                        uVar2 << 0x18) * __LC22;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 4;
      return;
    case 0x122:
      flush_args_and_op(0x122,param_2,param_3);
      return;
    case 0x123:
      flush_args_and_op(0x123,param_2,param_3);
      return;
    case 0x124:
      flush_args_and_op(0x124,param_2,param_3);
      return;
    case 0x125:
      flush_args_and_op(0x125,param_2,param_3);
      return;
    }
switchD_0010d4fc_caseD_2:
    opset_t<CFF::blend_arg_t>::process_op(param_1,(interp_env_t *)param_2);
    return;
  }
  switch(param_1) {
  case 1:
  case 0x12:
    *(uint *)(param_2 + 0x4054) = *(int *)(param_2 + 0x4054) + (*(uint *)(param_2 + 0x14) >> 1);
    goto LAB_0010d57b;
  default:
    goto switchD_0010d4fc_caseD_2;
  case 3:
  case 0x17:
    *(uint *)(param_2 + 0x4058) = *(int *)(param_2 + 0x4058) + (*(uint *)(param_2 + 0x14) >> 1);
LAB_0010d57b:
    cff2_cs_opset_flatten_t::flush_args_and_op(param_1,param_2,param_3);
    return;
  case 4:
    if (param_2[0x4051] == (cff2_cs_interp_env_t)0x0) {
      if (param_2[0x4052] == (cff2_cs_interp_env_t)0x0) {
        param_2[0x4052] = (cff2_cs_interp_env_t)0x1;
        iVar1 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x4058);
        *(int *)(param_2 + 0x4058) = iVar1;
        *(uint *)(param_2 + 0x405c) = (uint)(iVar1 + 7 + *(int *)(param_2 + 0x4054)) >> 3;
      }
      param_2[0x4051] = (cff2_cs_interp_env_t)0x1;
    }
    cff2_cs_opset_flatten_t::flush_args(param_2,param_3);
    str_encoder_t::encode_byte(*(str_encoder_t **)param_3,'\x04');
    return;
  case 5:
    flush_args_and_op(5,param_2,param_3);
    return;
  case 6:
    flush_args_and_op(6,param_2,param_3);
    return;
  case 7:
    flush_args_and_op(7,param_2,param_3);
    return;
  case 8:
    flush_args_and_op(8,param_2,param_3);
    return;
  case 10:
    pcVar5 = param_2 + 0x4168;
    uVar6 = 2;
    goto LAB_0010d5c4;
  case 0xb:
    if (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 0xc)) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 8) + 1;
    }
    if (*(int *)(param_2 + 0x4064) == 0) {
      _pthread_mutex_unlock = _pthread_mutex_lock;
      uVar6 = __hb_NullPool;
      _pthread_mutex_lock = __hb_CrapPool;
      param_2[0x4060] = (cff2_cs_interp_env_t)0x1;
      pcVar5 = (cff2_cs_interp_env_t *)&_hb_CrapPool;
      __hb_CrapPool = uVar6;
    }
    else {
      uVar2 = *(int *)(param_2 + 0x4064) - 1;
      *(uint *)(param_2 + 0x4064) = uVar2;
      pcVar5 = param_2 + (ulong)uVar2 * 0x18 + 0x4068;
    }
    uVar8 = *(undefined8 *)pcVar5;
    uVar9 = *(undefined8 *)(pcVar5 + 8);
    *(undefined8 *)(param_2 + 0x4038) = uVar8;
    *(undefined8 *)(param_2 + 0x4040) = uVar9;
    uVar6 = *(undefined8 *)(pcVar5 + 0x10);
    *(undefined8 *)param_2 = uVar8;
    *(undefined8 *)(param_2 + 8) = uVar9;
    *(undefined8 *)(param_2 + 0x4048) = uVar6;
    break;
  case 0xe:
    param_2[0x4050] = (cff2_cs_interp_env_t)0x1;
    break;
  case 0x13:
  case 0x14:
    if (param_2[0x4052] == (cff2_cs_interp_env_t)0x0) {
      param_2[0x4052] = (cff2_cs_interp_env_t)0x1;
      iVar1 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x4058);
      *(int *)(param_2 + 0x4058) = iVar1;
      uVar2 = (uint)(iVar1 + 7 + *(int *)(param_2 + 0x4054)) >> 3;
      *(uint *)(param_2 + 0x405c) = uVar2;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x405c);
    }
    if (uVar2 + *(int *)(param_2 + 0xc) <= *(uint *)(param_2 + 8)) {
      cff2_cs_opset_flatten_t::flush_args_and_op(param_1,param_2,param_3);
      if (param_3[8] == (flatten_param_t)0x0) {
        uVar2 = *(uint *)(param_2 + 0x405c);
        this = *(str_encoder_t **)param_3;
        if (uVar2 != 0) {
          uVar7 = 0;
          do {
            if (uVar7 + *(int *)(param_2 + 0xc) < *(uint *)(param_2 + 8)) {
              puVar4 = (uchar *)((ulong)(uVar7 + *(int *)(param_2 + 0xc)) + *(long *)param_2);
            }
            else {
              puVar4 = &_hb_NullPool;
              *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 8) + 1;
            }
            uVar7 = uVar7 + 1;
            str_encoder_t::encode_byte(this,*puVar4);
            uVar2 = *(uint *)(param_2 + 0x405c);
          } while (uVar7 < uVar2);
        }
      }
      else {
        uVar2 = *(uint *)(param_2 + 0x405c);
      }
      *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + uVar2;
    }
    break;
  case 0x15:
    if (param_2[0x4051] == (cff2_cs_interp_env_t)0x0) {
      if (param_2[0x4052] == (cff2_cs_interp_env_t)0x0) {
        param_2[0x4052] = (cff2_cs_interp_env_t)0x1;
        iVar1 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x4058);
        *(int *)(param_2 + 0x4058) = iVar1;
        *(uint *)(param_2 + 0x405c) = (uint)(iVar1 + 7 + *(int *)(param_2 + 0x4054)) >> 3;
      }
      param_2[0x4051] = (cff2_cs_interp_env_t)0x1;
    }
    cff2_cs_opset_flatten_t::flush_args(param_2,param_3);
    str_encoder_t::encode_byte(*(str_encoder_t **)param_3,'\x15');
    return;
  case 0x16:
    if (param_2[0x4051] == (cff2_cs_interp_env_t)0x0) {
      if (param_2[0x4052] == (cff2_cs_interp_env_t)0x0) {
        param_2[0x4052] = (cff2_cs_interp_env_t)0x1;
        iVar1 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x4058);
        *(int *)(param_2 + 0x4058) = iVar1;
        *(uint *)(param_2 + 0x405c) = (uint)(iVar1 + 7 + *(int *)(param_2 + 0x4054)) >> 3;
      }
      param_2[0x4051] = (cff2_cs_interp_env_t)0x1;
    }
    cff2_cs_opset_flatten_t::flush_args(param_2,param_3);
    str_encoder_t::encode_byte(*(str_encoder_t **)param_3,'\x16');
    return;
  case 0x18:
    flush_args_and_op(0x18,param_2,param_3);
    return;
  case 0x19:
    flush_args_and_op(0x19,param_2,param_3);
    return;
  case 0x1a:
    flush_args_and_op(0x1a,param_2,param_3);
    return;
  case 0x1b:
    flush_args_and_op(0x1b,param_2,param_3);
    return;
  case 0x1d:
    pcVar5 = param_2 + 0x4158;
    uVar6 = 1;
LAB_0010d5c4:
    cs_interp_env_t<CFF::blend_arg_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>>::call_subr
              ((cs_interp_env_t<CFF::blend_arg_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>> *)param_2
               ,pcVar5,uVar6);
    return;
  case 0x1e:
    flush_args_and_op(0x1e,param_2,param_3);
    return;
  case 0x1f:
    flush_args_and_op(0x1f,param_2,param_3);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::subr_flattener_t<OT::cff2::accelerator_subset_t const,
   CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>, cff2_cs_opset_flatten_t,
   65535u>::flatten(hb_vector_t<hb_vector_t<unsigned char, false>, false>&) */

uint __thiscall
CFF::
subr_flattener_t<OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_flatten_t,65535u>
::flatten(subr_flattener_t<OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_flatten_t,65535u>
          *this,hb_vector_t *param_1)

{
  double *pdVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  CFFIndex<OT::IntType<unsigned_int,4u>> *this_00;
  CFF2FDSelect *this_01;
  long lVar6;
  uint *puVar7;
  long lVar8;
  short *psVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  float *pfVar21;
  float *pfVar22;
  void *pvVar23;
  double *pdVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined *puVar29;
  cff2_cs_interp_env_t<CFF::blend_arg_t> *pcVar30;
  undefined1 *puVar31;
  undefined8 *puVar32;
  long lVar33;
  double *pdVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined8 *puVar38;
  long in_FS_OFFSET;
  bool bVar39;
  double dVar40;
  double dVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 local_4030 [16384];
  
  puVar10 = &stack0xffffffffffffffd0;
  do {
    puVar31 = puVar10;
    *(undefined8 *)(puVar31 + -0x1000) = *(undefined8 *)(puVar31 + -0x1000);
    puVar10 = puVar31 + -0x1000;
  } while (puVar31 + -0x1000 != local_4030);
  *(hb_vector_t **)(puVar31 + -0x1228) = param_1;
  *(undefined8 *)(puVar31 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar12 = *(uint *)(*(long *)(this + 8) + 0x58);
  *(undefined8 *)(puVar31 + -0x1260) = 0x10dbb2;
  uVar11 = hb_vector_t<hb_vector_t<unsigned_char,false>,false>::resize
                     ((hb_vector_t<hb_vector_t<unsigned_char,false>,false> *)param_1,uVar12,true,
                      true);
  if ((char)uVar11 == '\0') {
LAB_0010e077:
    uVar11 = 0;
  }
  else {
    *(undefined4 *)(puVar31 + -0x124c) = 0;
    lVar33 = 0;
    *(ulong *)(puVar31 + -0x1238) = (ulong)uVar12;
    if (uVar12 != 0) {
      puVar31[-0x11fd] = (char)uVar11;
      do {
        lVar4 = *(long *)(*(long *)(this + 8) + 0x30);
        lVar5 = *(long *)(lVar4 + 0x28);
        puVar25 = (uint *)&minus_1;
        if (lVar5 != 0) {
          uVar28 = (ulong)(*(uint *)(puVar31 + -0x124c) & 0x3fffffff) %
                   (ulong)*(uint *)(lVar4 + 0x20);
          piVar16 = (int *)(lVar5 + uVar28 * 0xc);
          bVar2 = *(byte *)(piVar16 + 1);
          if ((bVar2 & 2) != 0) {
            iVar14 = 0;
            do {
              if (*piVar16 == (int)lVar33) {
                puVar25 = (uint *)&minus_1;
                if ((bVar2 & 1) != 0) {
                  puVar25 = (uint *)(piVar16 + 2);
                }
                goto LAB_0010dc5e;
              }
              iVar14 = iVar14 + 1;
              uVar28 = (ulong)((int)uVar28 + iVar14 & *(uint *)(lVar4 + 0x1c));
              piVar16 = (int *)(lVar5 + uVar28 * 0xc);
              bVar2 = *(byte *)(piVar16 + 1);
            } while ((bVar2 & 2) != 0);
            puVar25 = (uint *)&minus_1;
          }
        }
LAB_0010dc5e:
        uVar12 = *puVar25;
        if (uVar12 != 0xffffffff) {
          this_00 = *(CFFIndex<OT::IntType<unsigned_int,4u>> **)(*(long *)this + 0x80);
          *(undefined8 *)(puVar31 + -0x1260) = 0x10dc7d;
          auVar44 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](this_00,uVar12);
          this_01 = *(CFF2FDSelect **)(*(long *)this + 0x90);
          *(undefined8 *)(puVar31 + -0x1260) = 0x10dc95;
          uVar12 = CFF2FDSelect::get_fd(this_01,uVar12);
          lVar4 = *(long *)this;
          if (*(uint *)(lVar4 + 0x98) <= uVar12) goto LAB_0010e077;
          lVar5 = *(long *)(this + 8);
          puVar29 = &_hb_NullPool;
          iVar14 = *(int *)(lVar5 + 0x88c);
          lVar6 = *(long *)(lVar5 + 0x890);
          if (uVar12 < *(uint *)(lVar4 + 0xb4)) {
            puVar29 = (undefined *)((ulong)uVar12 * 0x30 + *(long *)(lVar4 + 0xb8));
          }
          puVar38 = (undefined8 *)(puVar31 + -0x11c0);
          puVar25 = *(uint **)(puVar29 + 0x20);
          *(undefined8 *)(puVar31 + -0x11c8) = 0;
          puVar7 = *(uint **)(lVar4 + 0x70);
          *(undefined1 **)(puVar31 + -0x1258) = puVar31 + -0x11d8;
          puVar32 = (undefined8 *)(puVar31 + 0x2e60);
          puVar17 = puVar38;
          do {
            *puVar17 = 0;
            puVar18 = puVar17 + 4;
            *(undefined4 *)(puVar17 + 2) = 0;
            *(undefined4 *)((long)puVar17 + 0x14) = 0;
            puVar17[3] = 0;
            puVar17 = puVar18;
          } while (puVar32 != puVar18);
          lVar8 = *(long *)(puVar31 + -0x1258);
          *(undefined1 (*) [16])(puVar31 + -0x11d8) = auVar44;
          puVar31[0x2e88] = 0;
          *(undefined4 *)(puVar31 + -0x11cc) = 0;
          *(undefined4 *)(puVar31 + 0x2e8c) = 0;
          pauVar19 = (undefined1 (*) [16])(puVar31 + 0x2e90);
          do {
            pauVar20 = pauVar19 + 3;
            *pauVar19 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pauVar19[1] + 8) = (undefined1  [16])0x0;
            pauVar19 = pauVar20;
          } while ((undefined1 (*) [16])(lVar8 + 0x4158) != pauVar20);
          *(long *)(puVar31 + 0x2e60) = auVar44._0_8_;
          *(int *)(puVar31 + 0x2e68) = auVar44._8_4_;
          *(undefined2 *)(puVar31 + 0x2e79) = _LC23;
          iVar13 = 0x6b;
          *(undefined4 *)(puVar31 + 0x2e6c) = 0;
          *(undefined8 *)(puVar31 + 0x2e70) = 0;
          *(undefined8 *)(puVar31 + 0x2e7c) = 0;
          *(undefined4 *)(puVar31 + 0x2e84) = 0;
          *(uint **)(puVar31 + 0x2f88) = puVar7;
          *(undefined1 (*) [16])(puVar31 + 0x2fa0) = (undefined1  [16])0x0;
          if (puVar7 != (uint *)0x0) {
            uVar12 = *puVar7;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            if (0x4d7 < uVar12) {
              iVar13 = (-(uint)(uVar12 < 0x846c) & 0xffff846b) + 0x8000;
            }
          }
          *(int *)(puVar31 + 0x2f80) = iVar13;
          iVar13 = 0x6b;
          *(uint **)(puVar31 + 0x2f98) = puVar25;
          if (puVar25 != (uint *)0x0) {
            uVar12 = *puVar25;
            uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
            if (0x4d7 < uVar12) {
              iVar13 = (-(uint)(uVar12 < 0x846c) & 0xffff846b) + 0x8000;
            }
          }
          *(int *)(puVar31 + 0x2f90) = iVar13;
          psVar9 = *(short **)(lVar4 + 0x78);
          *(undefined8 *)(puVar31 + 0x2fd0) = 0;
          *(undefined2 *)(puVar31 + 0x2fe1) = 0;
          *(undefined8 *)(puVar31 + 0x2fd8) = 0;
          *(long *)(puVar31 + 0x2fb0) = lVar6;
          *(int *)(puVar31 + 0x2fb8) = iVar14;
          *(short **)(puVar31 + 0x2fc0) = psVar9;
          bVar39 = iVar14 != 0 && lVar6 != 0;
          if (iVar14 != 0 && lVar6 != 0) {
            bVar39 = *psVar9 != 0;
          }
          puVar31[0x2fe0] = bVar39;
          uVar3 = *(undefined4 *)(puVar29 + 0x28);
          *(long *)(puVar31 + -0x11e8) = lVar5;
          *(undefined4 *)(puVar31 + 0x2fcc) = uVar3;
          lVar4 = *(long *)(*(long *)(puVar31 + -0x1228) + 8);
          *(long *)(puVar31 + -0x1220) = lVar33;
          *(long *)(puVar31 + -0x11f8) = lVar33 * 0x10 + lVar4;
          uVar3 = *(undefined4 *)(lVar5 + 0x14);
          uVar12 = *(uint *)(puVar31 + -0x11d0);
          puVar31[0x2e78] = 0;
          puVar31[-0x11f0] = (char)uVar3;
          uVar11 = *(uint *)(puVar31 + -0x11cc);
          puVar31[-0x11f0] = puVar31[-0x11f0] & 1;
          *(undefined4 *)(puVar31 + -0x122c) = 200000;
          do {
            uVar26 = uVar11 + 1;
            if (uVar12 < uVar26) {
              uVar37 = (-(uint)(*(int *)(puVar31 + 0x2e8c) == 0) & 3) + 0xb;
LAB_0010df33:
              *(undefined8 *)(puVar31 + -0x1260) = 0x10df41;
              cs_opset_t<CFF::blend_arg_t,cff2_cs_opset_flatten_t,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,CFF::flatten_param_t,CFF::path_procs_null_t<CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,CFF::flatten_param_t>>
              ::process_op(uVar37,*(cff2_cs_interp_env_t **)(puVar31 + -0x1258),
                           (flatten_param_t *)(puVar31 + -0x11f8));
              uVar12 = *(uint *)(puVar31 + -0x11d0);
            }
            else {
              *(uint *)(puVar31 + -0x11cc) = uVar26;
              bVar2 = *(byte *)(*(long *)(puVar31 + -0x11d8) + (ulong)uVar11);
              uVar37 = (uint)bVar2;
              if (bVar2 == 0xc) {
                if (uVar12 < uVar11 + 2) {
                  uVar37 = 0xffff;
                }
                else {
                  *(uint *)(puVar31 + -0x11cc) = uVar11 + 2;
                  uVar37 = *(byte *)(*(long *)(puVar31 + -0x11d8) + (ulong)uVar26) + 0x100;
                }
                goto LAB_0010df33;
              }
              if (bVar2 != 0x10) {
                if (((bVar2 < 0x11) && (bVar2 != 10)) && (bVar2 == 0xf)) {
                  if (*(int *)(puVar31 + -0x11c4) == 0) {
                    uVar43 = __hb_CrapPool;
                    uVar42 = _pthread_mutex_lock;
                    _pthread_mutex_destroy = _pthread_mutex_unlock;
                    puVar31[-0x11c8] = 1;
                    pdVar24 = (double *)&_hb_CrapPool;
                    __hb_CrapPool = __hb_NullPool;
                    _pthread_mutex_lock = uVar43;
                    _pthread_mutex_unlock = uVar42;
                  }
                  else {
                    uVar11 = *(int *)(puVar31 + -0x11c4) - 1;
                    *(uint *)(puVar31 + -0x11c4) = uVar11;
                    pdVar24 = (double *)(*(long *)(puVar31 + -0x1258) + 0x18 + (ulong)uVar11 * 0x20)
                    ;
                  }
                  iVar14 = (int)*pdVar24;
                  if (iVar14 < 0) {
                    puVar31[-0x11c8] = 1;
                    iVar14 = 0;
                  }
                  if ((puVar31[0x2fe1] == '\0') && (puVar31[0x2fe2] == '\0')) {
                    *(int *)(puVar31 + 0x2fcc) = iVar14;
                  }
                  else {
                    *(uint *)(puVar31 + -0x11cc) = uVar12 + 1;
                  }
                  puVar31[0x2fe1] = 1;
                  *(undefined4 *)(puVar31 + -0x11c4) = 0;
                  goto LAB_0010df49;
                }
                goto LAB_0010df33;
              }
              pcVar30 = *(cff2_cs_interp_env_t<CFF::blend_arg_t> **)(puVar31 + -0x1258);
              *(undefined8 *)(puVar31 + -0x1260) = 0x10e144;
              cff2_cs_interp_env_t<CFF::blend_arg_t>::process_blend(pcVar30);
              uVar11 = *(uint *)(puVar31 + 0x2fc8);
              if (*(int *)(puVar31 + -0x11c4) == 0) {
                uVar42 = __hb_CrapPool;
                uVar43 = _pthread_mutex_lock;
                _pthread_mutex_destroy = _pthread_mutex_unlock;
                puVar31[-0x11c8] = 1;
                pcVar30 = (cff2_cs_interp_env_t<CFF::blend_arg_t> *)&_hb_CrapPool;
                uVar26 = 0;
                __hb_CrapPool = __hb_NullPool;
                _pthread_mutex_lock = uVar42;
                _pthread_mutex_unlock = uVar43;
              }
              else {
                uVar26 = *(int *)(puVar31 + -0x11c4) - 1;
                *(uint *)(puVar31 + -0x11c4) = uVar26;
                pcVar30 = pcVar30 + (ulong)uVar26 * 0x20 + 0x18;
              }
              iVar14 = (int)*(double *)pcVar30;
              uVar12 = *(uint *)(puVar31 + -0x11d0);
              if (iVar14 < 0) {
                puVar31[-0x11c8] = 1;
LAB_0010e34e:
                *(uint *)(puVar31 + -0x11c4) = uVar26;
              }
              else {
                uVar35 = (uVar11 + 1) * iVar14;
                uVar37 = uVar26 - uVar35;
                if (uVar35 <= uVar26) {
                  if (iVar14 != 0) {
                    *(uint *)(puVar31 + -0x1218) = uVar12;
                    uVar12 = uVar37 + iVar14;
                    *(uint *)(puVar31 + -0x1214) = uVar35;
                    iVar13 = 0;
                    *(int *)(puVar31 + -0x1250) = iVar14;
                    uVar35 = 0x201 - uVar12;
                    *(uint *)(puVar31 + -0x1240) = uVar26;
                    *(subr_flattener_t<OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_flatten_t,65535u>
                      **)(puVar31 + -0x1210) = this;
                    *(undefined8 **)(puVar31 + -0x1208) = puVar32;
                    *(undefined8 **)(puVar31 + -0x1248) = puVar38;
                    do {
                      uVar26 = uVar35;
                      if (uVar11 <= uVar35) {
                        uVar26 = uVar11;
                      }
                      uVar28 = (ulong)uVar26;
                      if (0x201 < uVar12) {
                        uVar28 = 0;
                      }
                      pdVar34 = (double *)((ulong)uVar12 * 0x20 + *(long *)(puVar31 + -0x1248));
                      pdVar24 = (double *)
                                (*(long *)(puVar31 + -0x1258) + 0x18 + (ulong)uVar37 * 0x20);
                      if (*(uint *)(puVar31 + -0x1240) <= uVar37) {
                        uVar42 = __hb_CrapPool;
                        uVar43 = _pthread_mutex_lock;
                        _pthread_mutex_destroy = _pthread_mutex_unlock;
                        puVar31[-0x11c8] = 1;
                        pdVar24 = (double *)&_hb_CrapPool;
                        __hb_CrapPool = __hb_NullPool;
                        _pthread_mutex_lock = uVar42;
                        _pthread_mutex_unlock = uVar43;
                      }
                      uVar26 = (uint)uVar28;
                      if (*(int *)(puVar31 + 0x2fb8) == 0) {
                        uVar3 = *(undefined4 *)(puVar31 + -0x1250);
                        *(int *)((long)pdVar24 + 0xc) = iVar13;
                        *(undefined4 *)(pdVar24 + 1) = uVar3;
                        uVar15 = *(uint *)(pdVar24 + 2);
                        if (-1 < (int)uVar15) {
                          uVar36 = *(uint *)((long)pdVar24 + 0x14);
                          uVar27 = uVar36;
                          if (uVar36 <= uVar26) {
                            uVar27 = uVar26;
                          }
                          if (uVar15 < uVar27) {
                            if (uVar27 < 0x20000000) {
                              pvVar23 = (void *)pdVar24[3];
LAB_0010e39c:
                              *(uint *)(puVar31 + -0x11fc) = uVar12;
                              *(uint *)(puVar31 + -0x1230) = uVar37;
                              *(uint *)(puVar31 + -0x123c) = uVar27;
                              *(undefined8 *)(puVar31 + -0x1260) = 0x10e3b5;
                              pvVar23 = realloc(pvVar23,(ulong)uVar27 << 3);
                              uVar36 = *(uint *)(puVar31 + -0x123c);
                              uVar37 = *(uint *)(puVar31 + -0x1230);
                              uVar12 = *(uint *)(puVar31 + -0x11fc);
                              if (pvVar23 != (void *)0x0) goto LAB_0010e3cc;
                              uVar15 = *(uint *)(pdVar24 + 2);
                              if (uVar36 <= uVar15) goto LAB_0010e3d4;
                            }
                            *(uint *)(pdVar24 + 2) = ~uVar15;
                          }
                          else {
                            if (uVar27 < uVar15 >> 2) {
                              pvVar23 = (void *)pdVar24[3];
                              if (uVar27 != 0) goto LAB_0010e39c;
                              *(uint *)(puVar31 + -0x11fc) = uVar12;
                              *(uint *)(puVar31 + -0x1230) = uVar37;
                              *(undefined4 *)(puVar31 + -0x123c) = 0;
                              *(undefined8 *)(puVar31 + -0x1260) = 0x10e512;
                              free(pvVar23);
                              uVar36 = *(uint *)(puVar31 + -0x123c);
                              uVar37 = *(uint *)(puVar31 + -0x1230);
                              pvVar23 = (void *)0x0;
                              uVar12 = *(uint *)(puVar31 + -0x11fc);
LAB_0010e3cc:
                              pdVar24[3] = (double)pvVar23;
                              *(uint *)(pdVar24 + 2) = uVar36;
LAB_0010e3d4:
                              uVar36 = *(uint *)((long)pdVar24 + 0x14);
                            }
                            if (uVar36 < uVar26) {
                              *(uint *)(puVar31 + -0x1230) = uVar12;
                              *(uint *)(puVar31 + -0x123c) = uVar37;
                              dVar40 = pdVar24[3];
                              *(undefined8 *)(puVar31 + -0x1260) = 0x10e406;
                              memset((void *)((long)dVar40 + (ulong)uVar36 * 8),0,
                                     (ulong)((uVar26 - 1) - uVar36) * 8 + 8);
                              uVar12 = *(uint *)(puVar31 + -0x1230);
                              uVar37 = *(uint *)(puVar31 + -0x123c);
                            }
                            *(uint *)((long)pdVar24 + 0x14) = uVar26;
                            if (uVar26 != 0) {
                              pdVar1 = pdVar34 + uVar28 * 4;
                              pdVar24 = (double *)pdVar24[3];
                              do {
                                dVar40 = *pdVar34;
                                pdVar34 = pdVar34 + 4;
                                *pdVar24 = dVar40;
                                pdVar24 = pdVar24 + 1;
                              } while (pdVar34 != pdVar1);
                            }
                          }
                        }
                      }
                      else {
                        dVar40 = *pdVar24;
                        dVar41 = 0.0;
                        if (((puVar31[0x2fe0] != '\0') && (*(uint *)(puVar31 + 0x2fd4) == uVar26))
                           && (uVar26 != 0)) {
                          pfVar21 = *(float **)(puVar31 + 0x2fd8);
                          do {
                            pfVar22 = pfVar21 + 1;
                            dVar41 = dVar41 + (double)*pfVar21 * *pdVar34;
                            pfVar21 = pfVar22;
                            pdVar34 = pdVar34 + 4;
                          } while (*(float **)(puVar31 + 0x2fd8) + uVar28 != pfVar22);
                        }
                        *(uint *)(puVar31 + -0x1230) = uVar12;
                        *(uint *)(puVar31 + -0x123c) = uVar37;
                        *(undefined8 *)(puVar31 + -0x1260) = 0x10e29e;
                        dVar40 = round(dVar40 + dVar41);
                        uVar37 = *(uint *)(puVar31 + -0x123c);
                        pdVar24[1] = 0.0;
                        uVar12 = *(uint *)(puVar31 + -0x1230);
                        if (*(int *)((long)pdVar24 + 0x14) != 0) {
                          *(undefined4 *)((long)pdVar24 + 0x14) = 0;
                          if ((-1 < (int)*(uint *)(pdVar24 + 2)) &&
                             (*(uint *)(pdVar24 + 2) >> 2 != 0)) {
                            pvVar23 = (void *)pdVar24[3];
                            *(undefined8 *)(puVar31 + -0x1260) = 0x10e2da;
                            free(pvVar23);
                            uVar12 = *(uint *)(puVar31 + -0x1230);
                            uVar37 = *(uint *)(puVar31 + -0x123c);
                            pdVar24[3] = 0.0;
                            *(undefined4 *)(pdVar24 + 2) = 0;
                          }
                        }
                        *pdVar24 = (double)(int)dVar40;
                      }
                      iVar13 = iVar13 + 1;
                      uVar12 = uVar12 + uVar11;
                      uVar37 = uVar37 + 1;
                      uVar35 = uVar35 - uVar11;
                    } while (iVar13 != *(int *)(puVar31 + -0x1250));
                    uVar12 = *(uint *)(puVar31 + -0x1218);
                    this = *(subr_flattener_t<OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_flatten_t,65535u>
                             **)(puVar31 + -0x1210);
                    puVar32 = *(undefined8 **)(puVar31 + -0x1208);
                    puVar38 = *(undefined8 **)(puVar31 + -0x1248);
                    if (*(uint *)(puVar31 + -0x1240) < (uint)(*(int *)(puVar31 + -0x1214) - iVar13))
                    {
                      puVar31[-0x11c8] = 1;
                      goto LAB_0010df49;
                    }
                    uVar26 = *(uint *)(puVar31 + -0x1240) + (iVar13 - *(int *)(puVar31 + -0x1214));
                  }
                  goto LAB_0010e34e;
                }
                *(uint *)(puVar31 + -0x11cc) = uVar12 + 1;
              }
            }
LAB_0010df49:
            if (((puVar31[0x2e88] != '\0') ||
                (uVar11 = *(uint *)(puVar31 + -0x11cc), uVar12 < uVar11)) ||
               (puVar31[-0x11c8] != '\0')) {
LAB_0010e030:
              if (*(int *)(puVar31 + 0x2fd0) != 0) {
                *(undefined8 *)(puVar31 + -0x1260) = 0x10e59f;
                free(*(void **)(puVar31 + 0x2fd8));
              }
              iVar14 = *(int *)(puVar32 + -2);
              while( true ) {
                if (iVar14 != 0) {
                  pvVar23 = (void *)puVar32[-1];
                  *(undefined8 *)(puVar31 + -0x1260) = 0x10e072;
                  free(pvVar23);
                }
                if (puVar32 + -4 == puVar38) break;
                iVar14 = *(int *)(puVar32 + -6);
                puVar32 = puVar32 + -4;
              }
              goto LAB_0010e077;
            }
            piVar16 = (int *)(puVar31 + -0x122c);
            *piVar16 = *piVar16 + -1;
            if (*piVar16 == 0) goto LAB_0010e030;
          } while (puVar31[0x2e78] == '\0');
          lVar33 = *(long *)(puVar31 + -0x1220);
          if (*(int *)(puVar31 + 0x2fd0) != 0) {
            *(undefined8 **)(puVar31 + -0x1258) = puVar32;
            *(undefined8 *)(puVar31 + -0x1260) = 0x10dfb1;
            free(*(void **)(puVar31 + 0x2fd8));
            puVar32 = *(undefined8 **)(puVar31 + -0x1258);
          }
          do {
            while (puVar17 = puVar32 + -4, *(int *)(puVar32 + -2) != 0) {
              pvVar23 = (void *)puVar32[-1];
              *(undefined8 *)(puVar31 + -0x1260) = 0x10dfda;
              free(pvVar23);
              puVar32 = puVar17;
              if (puVar17 == puVar38) goto LAB_0010dfdf;
            }
            puVar32 = puVar17;
          } while (puVar17 != puVar38);
        }
LAB_0010dfdf:
        *(int *)(puVar31 + -0x124c) = *(int *)(puVar31 + -0x124c) + -0x61c8864f;
        lVar33 = lVar33 + 1;
      } while (*(long *)(puVar31 + -0x1238) != lVar33);
      uVar11 = (uint)(byte)puVar31[-0x11fd];
    }
  }
  if (*(long *)(puVar31 + 0x2ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar31 + -0x1260) = 0x10e5c4;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::cff2_subset_plan::create(OT::cff2::accelerator_subset_t const&, hb_subset_plan_t*) */

undefined8 __thiscall
OT::cff2_subset_plan::create
          (cff2_subset_plan *this,accelerator_subset_t *param_1,hb_subset_plan_t *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  cff2_subset_plan cVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int iVar11;
  hb_vector_t *phVar12;
  uint uVar13;
  int *piVar14;
  undefined *puVar15;
  int *piVar16;
  int *piVar17;
  uint *puVar18;
  long lVar19;
  parsed_cs_str_t *ppVar20;
  undefined8 *puVar21;
  uint uVar22;
  ulong uVar23;
  undefined *puVar24;
  int *piVar25;
  hb_vector_t<hb_vector_t<unsigned_char,false>,false> *this_00;
  long in_FS_OFFSET;
  accelerator_subset_t *local_158;
  hb_subset_plan_t *local_150;
  uint local_ec;
  long local_e8;
  long local_e0;
  long local_d8;
  uint local_bc;
  uint local_9c;
  long local_98;
  uint local_84;
  long local_80;
  uint local_74;
  long local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar14 = (int *)&minus_1;
  piVar16 = *(int **)(*(long *)(param_2 + 0x30) + 0x28);
  if ((piVar16 != (int *)0x0) && (bVar3 = *(byte *)(piVar16 + 1), (bVar3 & 2) != 0)) {
    uVar6 = 0;
    iVar11 = 0;
    piVar14 = piVar16;
    do {
      if (*piVar14 == 0) {
        piVar14 = piVar14 + 2;
        if ((bVar3 & 1) == 0) {
          piVar14 = (int *)&minus_1;
        }
        goto LAB_0010e66a;
      }
      iVar11 = iVar11 + 1;
      uVar6 = uVar6 + iVar11 & *(uint *)(*(long *)(param_2 + 0x30) + 0x1c);
      piVar14 = piVar16 + (ulong)uVar6 * 3;
      bVar3 = *(byte *)(piVar14 + 1);
    } while ((bVar3 & 2) != 0);
    piVar14 = (int *)&minus_1;
  }
LAB_0010e66a:
  if (*piVar14 == 0) {
    uVar6 = **(uint **)(param_1 + 0x88);
    *(ulong *)(this + 0x18) =
         CONCAT44(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18,
                  *(undefined4 *)(param_2 + 0x58));
    uVar6 = *(uint *)(param_2 + 0x14);
    iVar11 = *(int *)(param_2 + 0x88c);
    this[0xb0] = SUB41(uVar6,0);
    this[0xb0] = (cff2_subset_plan)((byte)this[0xb0] & 1);
    this[0x2c] = (cff2_subset_plan)(iVar11 != 0);
    if ((uVar6 & 4) == 0 && iVar11 == 0) {
      this[0xb1] = (cff2_subset_plan)0x0;
      *(undefined4 *)(this + 0xb4) = 0;
      CFF::
      subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
      ::subr_subsetter_t((subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                          *)&local_158,param_1,param_2);
      cVar5 = CFF::
              subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
              ::subset((subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                        *)&local_158);
      if (cVar5 != '\0') {
        cVar4 = this[0x2c];
        cVar5 = hb_vector_t<hb_vector_t<unsigned_char,false>,false>::resize
                          ((hb_vector_t<hb_vector_t<unsigned_char,false>,false> *)(this + 0x80),
                           *(int *)(local_150 + 0x58),true,true);
        if (cVar5 != '\0') {
          puVar18 = *(uint **)(local_150 + 200);
          puVar8 = puVar18 + (ulong)*(uint *)(local_150 + 0xc4) * 2;
          lVar19 = local_e0;
          uVar6 = local_bc;
          for (; puVar18 != puVar8; puVar18 = puVar18 + 2) {
            uVar13 = *puVar18;
            local_e0 = lVar19;
            local_bc = uVar6;
            uVar6 = CFF::CFF2FDSelect::get_fd(*(CFF2FDSelect **)(local_158 + 0x90),puVar18[1]);
            if (*(uint *)(local_158 + 0x98) <= uVar6) goto LAB_0010e758;
            uVar23 = (ulong)uVar13;
            if (local_ec == 0) {
              ppVar20 = (parsed_cs_str_t *)&_hb_NullPool;
              if (uVar13 < local_74) {
                ppVar20 = (parsed_cs_str_t *)(local_70 + uVar23 * 0x28);
              }
            }
            else {
              puVar21 = (undefined8 *)&_hb_NullPool;
              if (uVar13 < local_ec) {
                puVar21 = (undefined8 *)(local_e8 + uVar23 * 8);
              }
              ppVar20 = (parsed_cs_str_t *)*puVar21;
            }
            cVar5 = CFF::
                    subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                    ::encode_str((subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                                  *)&local_158,ppVar20,uVar6,
                                 (hb_vector_t *)(uVar23 * 0x10 + *(long *)(this + 0x88)),
                                 (bool)((byte)cVar4 ^ 1));
            if (cVar5 == '\0') goto LAB_0010e758;
            lVar19 = local_e0;
            uVar6 = local_bc;
          }
          cVar5 = hb_vector_t<hb_vector_t<unsigned_char,false>,false>::resize
                            ((hb_vector_t<hb_vector_t<unsigned_char,false>,false> *)(this + 0x90),
                             uVar6,true,true);
          if (cVar5 != '\0') {
            uVar23 = 0;
            if (uVar6 != 0) {
              do {
                puVar8 = (uint *)&_hb_NullPool;
                if ((uint)uVar23 < local_9c) {
                  puVar8 = (uint *)(local_98 + uVar23 * 4);
                }
                if ((uint)uVar23 < *(uint *)(this + 0x94)) {
                  phVar12 = (hb_vector_t *)(uVar23 * 0x10 + *(long *)(this + 0x98));
                }
                else {
                  _pthread_mutex_lock = __hb_CrapPool;
                  phVar12 = (hb_vector_t *)&_hb_CrapPool;
                  __hb_CrapPool = __hb_NullPool;
                }
                ppVar20 = (parsed_cs_str_t *)&_hb_NullPool;
                if (*puVar8 < *(uint *)(lVar19 + 4)) {
                  ppVar20 = (parsed_cs_str_t *)(*(long *)(lVar19 + 8) + (ulong)*puVar8 * 0x28);
                }
                cVar5 = CFF::
                        subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                        ::encode_str((subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                                      *)&local_158,ppVar20,0,phVar12,true);
                if (cVar5 == '\0') goto LAB_0010e758;
                uVar23 = uVar23 + 1;
              } while (uVar6 != uVar23);
            }
            uVar6 = *(uint *)(this + 0xa0);
            uVar13 = *(uint *)(this + 0x1c);
            if (-1 < (int)uVar6) {
              uVar23 = (ulong)uVar6;
              if ((int)uVar13 < 0) {
                uVar13 = 0;
              }
              if (uVar6 < uVar13) {
                do {
                  uVar22 = (int)uVar23 + 8 + (int)(uVar23 >> 1);
                  uVar23 = (ulong)uVar22;
                } while (uVar22 < uVar13);
                if (0xfffffff < uVar22) {
LAB_0010ed7e:
                  *(uint *)(this + 0xa0) = ~uVar6;
                  goto LAB_0010e758;
                }
                pvVar10 = realloc(*(void **)(this + 0xa8),uVar23 << 4);
                if (pvVar10 == (void *)0x0) {
                  uVar6 = *(uint *)(this + 0xa0);
                  if (uVar6 < uVar22) goto LAB_0010ed7e;
                }
                else {
                  *(void **)(this + 0xa8) = pvVar10;
                  *(uint *)(this + 0xa0) = uVar22;
                }
              }
              uVar6 = *(uint *)(this + 0xa4);
              if (uVar6 < uVar13) {
                hb_memset((void *)((ulong)uVar6 * 0x10 + *(long *)(this + 0xa8)),
                          (uVar13 - uVar6) * 0x10,uVar13);
              }
              else if (uVar13 < uVar6) {
                piVar14 = (int *)(*(long *)(this + 0xa8) + -0x10 + (ulong)uVar6 * 0x10);
                piVar16 = piVar14;
                do {
                  piVar17 = piVar16 + -4;
                  if (*piVar16 != 0) {
                    uVar22 = piVar16[1];
                    pvVar10 = *(void **)(piVar16 + 2);
                    piVar25 = (int *)((long)pvVar10 + (ulong)uVar22 * 0x10 + -0x10);
                    if (uVar22 != 0) {
                      piVar2 = piVar25 + (ulong)(uVar22 - 1) * -4 + -4;
                      do {
                        if (*piVar25 != 0) {
                          free(*(void **)(piVar25 + 2));
                        }
                        piVar25 = piVar25 + -4;
                      } while (piVar2 != piVar25);
                      pvVar10 = *(void **)(piVar16 + 2);
                    }
                    free(pvVar10);
                  }
                  piVar16 = piVar17;
                } while (piVar14 + (ulong)(uVar6 - uVar13) * -4 != piVar17);
              }
              *(uint *)(this + 0xa4) = uVar13;
              if (*(int *)(this + 0x1c) != 0) {
                lVar19 = 0;
                while( true ) {
                  uVar6 = (uint)lVar19;
                  if (uVar6 < uVar13) {
                    this_00 = (hb_vector_t<hb_vector_t<unsigned_char,false>,false> *)
                              (lVar19 * 0x10 + *(long *)(this + 0xa8));
                    *(undefined8 *)this_00 = 0;
                    *(undefined8 *)(this_00 + 8) = 0;
                  }
                  else {
                    _pthread_mutex_lock = __hb_CrapPool;
                    this_00 = (hb_vector_t<hb_vector_t<unsigned_char,false>,false> *)&_hb_CrapPool;
                    __hb_CrapPool = __hb_NullPool;
                  }
                  puVar24 = &_hb_NullPool;
                  if (uVar6 < local_84) {
                    puVar24 = (undefined *)(local_80 + lVar19 * 0x48);
                  }
                  puVar15 = &_hb_NullPool;
                  if (uVar6 < *(uint *)(local_d8 + 4)) {
                    puVar15 = (undefined *)(*(long *)(local_d8 + 8) + lVar19 * 0x10);
                  }
                  uVar13 = *(uint *)(puVar24 + 0x14);
                  cVar5 = hb_vector_t<hb_vector_t<unsigned_char,false>,false>::resize
                                    (this_00,uVar13,true,true);
                  if (cVar5 == '\0') goto LAB_0010e758;
                  uVar23 = 0;
                  if (uVar13 != 0) {
                    do {
                      puVar8 = (uint *)&_hb_NullPool;
                      if ((uint)uVar23 < *(uint *)(puVar24 + 0x34)) {
                        puVar8 = (uint *)(*(long *)(puVar24 + 0x38) + uVar23 * 4);
                      }
                      if ((uint)uVar23 < *(uint *)(this_00 + 4)) {
                        phVar12 = (hb_vector_t *)(uVar23 * 0x10 + *(long *)(this_00 + 8));
                      }
                      else {
                        _pthread_mutex_lock = __hb_CrapPool;
                        phVar12 = (hb_vector_t *)&_hb_CrapPool;
                        __hb_CrapPool = __hb_NullPool;
                      }
                      ppVar20 = (parsed_cs_str_t *)&_hb_NullPool;
                      if (*puVar8 < *(uint *)(puVar15 + 4)) {
                        ppVar20 = (parsed_cs_str_t *)
                                  (*(long *)(puVar15 + 8) + (ulong)*puVar8 * 0x28);
                      }
                      cVar5 = CFF::
                              subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                              ::encode_str((subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                                            *)&local_158,ppVar20,uVar6,phVar12,true);
                      if (cVar5 == '\0') goto LAB_0010e758;
                      uVar23 = uVar23 + 1;
                    } while (uVar23 != uVar13);
                  }
                  lVar19 = lVar19 + 1;
                  if (*(uint *)(this + 0x1c) <= (uint)lVar19) break;
                  uVar13 = *(uint *)(this + 0xa4);
                }
              }
              CFF::
              subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
              ::~subr_subsetter_t((subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                                   *)&local_158);
              goto LAB_0010e6e6;
            }
          }
        }
      }
LAB_0010e758:
      CFF::
      subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
      ::~subr_subsetter_t((subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                           *)&local_158);
    }
    else {
      this[0xb1] = (cff2_subset_plan)0x1;
      *(undefined4 *)(this + 0xb4) = 0;
      local_158 = param_1;
      local_150 = param_2;
      cVar5 = CFF::
              subr_flattener_t<OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_flatten_t,65535u>
              ::flatten((subr_flattener_t<OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_flatten_t,65535u>
                         *)&local_158,(hb_vector_t *)(this + 0x80));
      if (cVar5 != '\0') {
LAB_0010e6e6:
        if (*(FDSelect **)(param_1 + 0x90) == (FDSelect *)&_hb_NullPool) {
          if (this[0x50] != (cff2_subset_plan)0x0) {
            if (*(int *)(this + 0x5c) != 0) {
              puVar9 = *(undefined4 **)(this + 0x68);
              puVar1 = puVar9 + (ulong)(*(int *)(this + 0x5c) + 1) * 3;
              for (; puVar9 != puVar1; puVar9 = puVar9 + 3) {
                *puVar9 = 0;
                puVar9[1] = 0;
                puVar9[2] = 0;
              }
            }
            *(undefined8 *)(this + 0x54) = 0;
          }
          cVar5 = hb_vector_t<unsigned_int,false>::alloc
                            ((hb_vector_t<unsigned_int,false> *)(this + 0x70),0,false);
          if (cVar5 != '\0') {
            *(undefined4 *)(this + 0x74) = 0;
          }
          hb_inc_bimap_t::add((hb_inc_bimap_t *)(this + 0x40),0);
          uVar7 = 1;
        }
        else {
          uVar7 = hb_plan_subset_cff_fdselect
                            (param_2,*(uint *)(this + 0x1c),*(FDSelect **)(param_1 + 0x90),
                             (uint *)(this + 0x20),(uint *)(this + 0x24),(uint *)(this + 0x28),
                             (hb_vector_t *)(this + 0x30),(hb_inc_bimap_t *)(this + 0x40));
        }
        goto LAB_0010e768;
      }
    }
  }
  uVar7 = 0;
LAB_0010e768:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* WARNING: Control flow encountered bad instruction data */
/* CFF::subr_subsetter_t<cff2_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned int, 4u> >,
   OT::cff2::accelerator_subset_t const, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,
   cff2_cs_opset_subr_subset_t, 65535u>::subr_subsetter_t(OT::cff2::accelerator_subset_t const&,
   hb_subset_plan_t const*) */

void CFF::
     subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
     ::subr_subsetter_t(accelerator_subset_t *param_1,hb_subset_plan_t *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CFF::subr_subsetter_t<cff2_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned int, 4u> >,
   OT::cff2::accelerator_subset_t const, CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,
   cff2_cs_opset_subr_subset_t, 65535u>::~subr_subsetter_t() */

void __thiscall
CFF::
subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
::~subr_subsetter_t(subr_subsetter_t<cff2_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_int,4u>>,OT::cff2::accelerator_subset_t_const,CFF::cff2_cs_interp_env_t<CFF::blend_arg_t>,cff2_cs_opset_subr_subset_t,65535u>
                    *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


