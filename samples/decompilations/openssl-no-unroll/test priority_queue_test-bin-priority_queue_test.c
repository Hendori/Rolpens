
ulong size_t_compare(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_2 <= *param_1) {
    uVar1 = (ulong)(*param_2 < *param_1);
  }
  return uVar1;
}



ulong qsort_size_t_compare(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_2 <= *param_1) {
    uVar1 = (ulong)(*param_2 < *param_1);
  }
  return uVar1;
}



ulong qsort_size_t_compare_rev(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_1 <= *param_2) {
    uVar1 = (ulong)(*param_1 < *param_2);
  }
  return uVar1;
}



void free_checker(void)

{
  num_rec_freed = num_rec_freed + 1;
  return;
}



bool test_22644(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  byte bVar9;
  undefined8 local_338;
  long local_330;
  undefined8 local_328;
  undefined8 local_320 [2];
  undefined8 local_310;
  undefined8 local_308 [2];
  undefined8 local_2f8;
  undefined8 local_2f0 [2];
  undefined8 local_2e0;
  undefined8 local_2d8 [2];
  undefined8 local_2c8;
  undefined8 local_2c0 [2];
  undefined8 local_2b0;
  undefined8 local_2a8 [2];
  undefined8 local_298;
  undefined8 local_290 [2];
  undefined8 local_280;
  undefined8 local_278 [2];
  undefined8 local_268 [71];
  long local_30;
  
  bVar9 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_pqueue_new(cmp);
  plVar6 = &local_330;
  lVar3 = 0;
  puVar7 = &local_338;
  for (lVar5 = 0x60; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
  }
  do {
    *plVar6 = lVar3;
    lVar3 = lVar3 + 1;
    plVar6 = plVar6 + 3;
  } while (lVar3 != 0x20);
  local_338 = 0xfb000000600404;
  iVar1 = ossl_pqueue_push(uVar2,&local_338,&local_328);
  iVar1 = test_true("test/priority_queue_test.c",0xc0,
                    "ossl_pqueue_INFO_push(pq, &infos[0], &infos[0].idx)",iVar1 != 0);
  if ((iVar1 != 0) &&
     (iVar1 = test_size_t_eq("test/priority_queue_test.c",0xc1,"infos[0].idx",&_LC2,local_328,7),
     iVar1 != 0)) {
    uVar4 = ossl_pqueue_remove(uVar2,local_328);
    iVar1 = test_ptr("test/priority_queue_test.c",0xc2,"ossl_pqueue_INFO_remove(pq, infos[0].idx)",
                     uVar4);
    if (iVar1 != 0) {
      local_320[0] = 0x404040404040404;
      iVar1 = ossl_pqueue_push(uVar2,local_320,&local_310);
      iVar1 = test_true("test/priority_queue_test.c",0xc6,
                        "ossl_pqueue_INFO_push(pq, &infos[1], &infos[1].idx)",iVar1 != 0);
      if ((iVar1 != 0) &&
         (iVar1 = test_size_t_eq("test/priority_queue_test.c",199,"infos[1].idx",&_LC2,local_310,7),
         iVar1 != 0)) {
        uVar4 = ossl_pqueue_remove(uVar2,local_310);
        iVar1 = test_ptr("test/priority_queue_test.c",200,
                         "ossl_pqueue_INFO_remove(pq, infos[1].idx)",uVar4);
        if (iVar1 != 0) {
          local_308[0] = 0x404040404040404;
          iVar1 = ossl_pqueue_push(uVar2,local_308,&local_2f8);
          iVar1 = test_true("test/priority_queue_test.c",0xcc,
                            "ossl_pqueue_INFO_push(pq, &infos[2], &infos[2].idx)",iVar1 != 0);
          if ((iVar1 != 0) &&
             (iVar1 = test_size_t_eq("test/priority_queue_test.c",0xcd,"infos[2].idx",&_LC2,
                                     local_2f8,7), iVar1 != 0)) {
            local_2f0[0] = 0x404040404040404;
            iVar1 = ossl_pqueue_push(uVar2,local_2f0,&local_2e0);
            iVar1 = test_true("test/priority_queue_test.c",0xd1,
                              "ossl_pqueue_INFO_push(pq, &infos[3], &infos[3].idx)",iVar1 != 0);
            if ((iVar1 != 0) &&
               (iVar1 = test_size_t_eq("test/priority_queue_test.c",0xd2,"infos[3].idx",&_LC11,
                                       local_2e0,6), iVar1 != 0)) {
              local_2d8[0] = 0x404040404040404;
              iVar1 = ossl_pqueue_push(uVar2,local_2d8,&local_2c8);
              iVar1 = test_true("test/priority_queue_test.c",0xd6,
                                "ossl_pqueue_INFO_push(pq, &infos[4], &infos[4].idx)",iVar1 != 0);
              if ((iVar1 != 0) &&
                 (iVar1 = test_size_t_eq("test/priority_queue_test.c",0xd7,"infos[4].idx",&_LC14,
                                         local_2c8,5), iVar1 != 0)) {
                local_2c0[0] = 0x404040404040404;
                iVar1 = ossl_pqueue_push(uVar2,local_2c0,&local_2b0);
                iVar1 = test_true("test/priority_queue_test.c",0xdb,
                                  "ossl_pqueue_INFO_push(pq, &infos[5], &infos[5].idx)",iVar1 != 0);
                if ((iVar1 != 0) &&
                   (iVar1 = test_size_t_eq("test/priority_queue_test.c",0xdc,"infos[5].idx",&_LC17,
                                           local_2b0,4), iVar1 != 0)) {
                  local_2a8[0] = 0x404040404040404;
                  iVar1 = ossl_pqueue_push(uVar2,local_2a8,&local_298);
                  iVar1 = test_true("test/priority_queue_test.c",0xe0,
                                    "ossl_pqueue_INFO_push(pq, &infos[6], &infos[6].idx)",iVar1 != 0
                                   );
                  if ((iVar1 != 0) &&
                     (iVar1 = test_size_t_eq("test/priority_queue_test.c",0xe1,"infos[6].idx",&_LC20
                                             ,local_298,3), iVar1 != 0)) {
                    local_290[0] = 0x404040404040404;
                    iVar1 = ossl_pqueue_push(uVar2,local_290,&local_280);
                    iVar1 = test_true("test/priority_queue_test.c",0xe5,
                                      "ossl_pqueue_INFO_push(pq, &infos[7], &infos[7].idx)",
                                      iVar1 != 0);
                    if ((iVar1 != 0) &&
                       (iVar1 = test_size_t_eq("test/priority_queue_test.c",0xe6,"infos[7].idx",
                                               &_LC23,local_280,2), iVar1 != 0)) {
                      local_278[0] = 0x404040404040404;
                      iVar1 = ossl_pqueue_push(uVar2,local_278,local_268);
                      iVar1 = test_true("test/priority_queue_test.c",0xea,
                                        "ossl_pqueue_INFO_push(pq, &infos[8], &infos[8].idx)",
                                        iVar1 != 0);
                      if ((iVar1 != 0) &&
                         (iVar1 = test_size_t_eq("test/priority_queue_test.c",0xeb,"infos[8].idx",
                                                 &_LC26,local_268[0],1), iVar1 != 0)) {
                        uVar4 = ossl_pqueue_pop(uVar2);
                        iVar1 = test_ptr("test/priority_queue_test.c",0xee,
                                         "ossl_pqueue_INFO_pop(pq)",uVar4);
                        if (iVar1 != 0) {
                          uVar4 = ossl_pqueue_pop(uVar2);
                          iVar1 = test_ptr("test/priority_queue_test.c",0xef,
                                           "ossl_pqueue_INFO_pop(pq)",uVar4);
                          bVar8 = iVar1 != 0;
                          goto LAB_00100114;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar8 = false;
LAB_00100114:
  ossl_pqueue_free(uVar2);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong test_size_t_priority_queue_int
                (int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  size_t __nmemb;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long local_50;
  
  puVar9 = &_LC30;
  if (param_6 != 0) {
    puVar9 = &_LC29;
  }
  pcVar4 = "deterministic";
  pcVar13 = "grow";
  if (param_5 != 0) {
    pcVar4 = "random";
  }
  if (param_1 != 0) {
    pcVar13 = "reserve";
  }
  test_info("test/priority_queue_test.c",0x3c,
            "testing count %d, %s, %s, values %s, remove %d, %sfree",param_3,
            *(undefined8 *)(orders_3 + (long)param_2 * 8),pcVar13,pcVar4,param_4,puVar9);
  __nmemb = (size_t)(int)param_3;
  uVar5 = test_size_t_le("test/priority_queue_test.c",0x41,"count","MAX_SAMPLES",__nmemb,500000);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  memset(&values_2,0,4000000);
  memset(&sorted_1,0,4000000);
  memset(ref_0,0,4000000);
  iVar2 = _UNK_00c72dfc;
  iVar1 = _UNK_00c72df8;
  iVar15 = _UNK_00c72df4;
  iVar3 = __LC39;
  if (0 < (int)param_3) {
    if (param_5 == 0) {
      uVar14 = 0;
      if (2 < param_3 - 1) {
        puVar16 = &values_2;
        iVar18 = __LC35;
        iVar19 = _UNK_00c72de4;
        iVar20 = _UNK_00c72de8;
        iVar21 = _UNK_00c72dec;
        do {
          puVar8 = puVar16 + 4;
          *puVar16 = CONCAT44(-(uint)((int)(param_3 - iVar18) < 0),param_3 - iVar18);
          *(uint *)(puVar16 + 2) = param_3 - iVar19;
          *(uint *)((long)puVar16 + 0x14) = -(uint)((int)(param_3 - iVar19) < 0);
          *(uint *)(puVar16 + 2) = param_3 - iVar20;
          *(uint *)((long)puVar16 + 0x14) = -(uint)((int)(param_3 - iVar20) < 0);
          *(uint *)(puVar16 + 3) = param_3 - iVar21;
          *(uint *)((long)puVar16 + 0x1c) = -(uint)((int)(param_3 - iVar21) < 0);
          puVar16 = puVar8;
          iVar18 = iVar18 + iVar3;
          iVar19 = iVar19 + iVar15;
          iVar20 = iVar20 + iVar1;
          iVar21 = iVar21 + iVar2;
        } while (puVar8 != &values_2 + (ulong)(param_3 >> 2) * 4);
        uVar14 = param_3 & 0xfffffffc;
        if ((param_3 & 3) == 0) goto LAB_00100796;
      }
      (&values_2)[(int)uVar14] = (long)(int)(param_3 - uVar14);
      iVar3 = uVar14 + 1;
      if (iVar3 < (int)param_3) {
        iVar15 = uVar14 + 2;
        (&values_2)[iVar3] = (long)(int)(param_3 - iVar3);
        if (iVar15 < (int)param_3) {
          (&values_2)[iVar15] = (long)(int)(param_3 - iVar15);
        }
      }
    }
    else {
      puVar11 = &values_2;
      do {
        uVar14 = test_random();
        puVar12 = puVar11 + 1;
        *puVar11 = (ulong)uVar14;
        puVar11 = puVar12;
      } while (puVar12 != &values_2 + __nmemb);
    }
  }
LAB_00100796:
  local_50 = __nmemb * 8;
  __memcpy_chk(&sorted_1,&values_2,local_50,4000000);
  qsort(&sorted_1,__nmemb,8,qsort_size_t_compare);
  if (param_2 == 1) {
    __memcpy_chk(&values_2,&sorted_1,local_50,4000000);
  }
  else if (param_2 == 2) {
    qsort(&values_2,__nmemb,8,qsort_size_t_compare_rev);
  }
  uVar6 = ossl_pqueue_new(0x100000);
  iVar3 = test_ptr("test/priority_queue_test.c",0x52,"pq = ossl_pqueue_size_t_new(&size_t_compare)",
                   uVar6);
  if (iVar3 != 0) {
    uVar7 = ossl_pqueue_num(uVar6);
    iVar3 = test_size_t_eq("test/priority_queue_test.c",0x53,"ossl_pqueue_size_t_num(pq)",&_LC41,
                           uVar7,0);
    if (iVar3 != 0) {
      if (param_1 != 0) {
        iVar3 = ossl_pqueue_reserve(uVar6,__nmemb);
        iVar3 = test_true("test/priority_queue_test.c",0x56,"ossl_pqueue_size_t_reserve(pq, count)",
                          iVar3 != 0);
        if (iVar3 == 0) {
          uVar14 = 0;
          goto LAB_0010080b;
        }
      }
      puVar16 = &values_2;
      if (0 < (int)param_3) {
        puVar10 = ref_0;
        do {
          iVar3 = ossl_pqueue_push(uVar6,puVar16,puVar10);
          iVar3 = test_true("test/priority_queue_test.c",0x5a,
                            "ossl_pqueue_size_t_push(pq, values + i, ref + i)",iVar3 != 0);
          if (iVar3 == 0) goto LAB_00100809;
          puVar16 = puVar16 + 1;
          puVar10 = puVar10 + 8;
        } while (puVar16 != &values_2 + __nmemb);
      }
      uVar7 = sorted_1;
      puVar16 = (undefined8 *)ossl_pqueue_peek(uVar6);
      iVar3 = test_size_t_eq("test/priority_queue_test.c",0x5d,"*ossl_pqueue_size_t_peek(pq)",
                             "*sorted",*puVar16,uVar7);
      if (iVar3 != 0) {
        uVar7 = ossl_pqueue_num(uVar6);
        iVar3 = test_size_t_eq("test/priority_queue_test.c",0x5e,"ossl_pqueue_size_t_num(pq)",
                               "count",uVar7,__nmemb);
        if (iVar3 != 0) {
          if (param_4 != 0) {
            if (0 < param_4) {
              do {
                param_4 = param_4 + -1;
                uVar5 = test_random();
                lVar17 = (long)(int)((uVar5 & 0xffffffff) % (ulong)param_3);
                if ((&values_2)[lVar17] != -1) {
                  uVar7 = ossl_pqueue_remove(uVar6,*(undefined8 *)(ref_0 + lVar17 * 8));
                  iVar3 = test_ptr_eq("test/priority_queue_test.c",0x65,
                                      "ossl_pqueue_size_t_remove(pq, ref[i])","values + i",uVar7,
                                      &values_2 + lVar17);
                  if (iVar3 == 0) goto LAB_00100809;
                  (&values_2)[lVar17] = 0xffffffffffffffff;
                }
              } while (param_4 != 0);
            }
            __memcpy_chk(&sorted_1,&values_2,local_50,4000000);
            qsort(&sorted_1,__nmemb,8,qsort_size_t_compare);
          }
          puVar16 = &sorted_1;
          do {
            lVar17 = ossl_pqueue_peek(uVar6);
            if (lVar17 == 0) {
              uVar14 = 1;
              if (param_6 != 0) {
                num_rec_freed = 0;
                uVar7 = ossl_pqueue_num(uVar6);
                ossl_pqueue_pop_free(uVar6,free_checker);
                iVar3 = test_size_t_eq("test/priority_queue_test.c",0x78,"num_rec_freed",&_LC51,
                                       num_rec_freed,uVar7);
                uVar6 = 0;
                uVar14 = (uint)(iVar3 != 0);
              }
              goto LAB_0010080b;
            }
            uVar7 = *puVar16;
            puVar8 = (undefined8 *)ossl_pqueue_peek(uVar6);
            iVar3 = test_size_t_eq("test/priority_queue_test.c",0x6f,"*ossl_pqueue_size_t_peek(pq)",
                                   "sorted[i]",*puVar8,uVar7);
            if (iVar3 == 0) break;
            uVar7 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar8 = (undefined8 *)ossl_pqueue_pop(uVar6);
            iVar3 = test_size_t_eq("test/priority_queue_test.c",0x70,"*ossl_pqueue_size_t_pop(pq)",
                                   "sorted[i]",*puVar8,uVar7);
          } while (iVar3 != 0);
        }
      }
    }
  }
LAB_00100809:
  uVar14 = 0;
LAB_0010080b:
  ossl_pqueue_free(uVar6);
  return (ulong)uVar14;
}



void test_large_priority_queue(void)

{
  test_size_t_priority_queue_int(0,0,500000,5000,1,1);
  return;
}



void test_size_t_priority_queue(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)((ulong)(long)(int)param_1 >> 3);
  iVar2 = (int)((ulong)(((long)(int)param_1 >> 3) * 0x55555556) >> 0x20) - (iVar4 >> 0x1f);
  iVar1 = iVar2 - (iVar2 >> 0x1f) >> 0x1f;
  iVar3 = iVar2 / 2 - iVar1 >> 1;
  test_size_t_priority_queue_int
            ((iVar2 / 2 - iVar1 & 1U) + iVar1,iVar4 + iVar2 * -3,
             *(undefined4 *)(test_size_t_priority_counts + (ulong)(param_1 & 7) * 4),iVar3 % 6,
             iVar2 % 2,(iVar3 / 6) % 2);
  return;
}



int cmp(void *param_1,void *param_2)

{
  uint uVar1;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar1 = 0xffffffff;
  if ((*param_2 <= *param_1) && (uVar1 = 1, *param_1 <= *param_2)) {
    uVar1 = 0xffffffff;
    if (*(ulong *)((long)param_2 + 8) <= *(ulong *)((long)param_1 + 8)) {
      uVar1 = (uint)(*(ulong *)((long)param_2 + 8) < *(ulong *)((long)param_1 + 8));
    }
  }
  return uVar1;
}



undefined8 setup_tests(void)

{
  add_all_tests("test_size_t_priority_queue",test_size_t_priority_queue,0x480,1);
  add_test("test_large_priority_queue",test_large_priority_queue);
  add_test("test_22644",test_22644);
  return 1;
}


