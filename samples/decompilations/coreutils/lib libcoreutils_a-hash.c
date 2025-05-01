
/* WARNING: Unknown calling convention */

size_t raw_hasher(void *data,size_t n)

{
  return ((ulong)data >> 3 | (long)data << 0x3d) % n;
}



/* WARNING: Unknown calling convention */

_Bool raw_comparator(void *a,void *b)

{
  return b == a;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

_Bool check_tuning(Hash_table *table)

{
  float fVar1;
  Hash_tuning *pHVar2;
  float fVar3;
  
  pHVar2 = table->tuning;
  if (pHVar2 == &default_tuning) {
    return true;
  }
  fVar1 = pHVar2->growth_threshold;
  if ((((__LC0 < fVar1) && (fVar1 < _LC1)) && (__LC2 < pHVar2->growth_factor)) &&
     (0.0 <= pHVar2->shrink_threshold)) {
    fVar3 = pHVar2->shrink_threshold + __LC0;
    if (((fVar3 < pHVar2->shrink_factor) && (pHVar2->shrink_factor <= _LC4)) && (fVar3 < fVar1)) {
      return true;
    }
  }
  table->tuning = &default_tuning;
  return false;
}



/* WARNING: Unknown calling convention */

void * hash_find_entry(Hash_table *table,void *entry,hash_entry **bucket_head,_Bool delete)

{
  void *pvVar1;
  hash_entry *phVar2;
  hash_entry *phVar3;
  hash_entry *phVar4;
  _Bool _Var5;
  size_t sVar6;
  hash_entry *phVar7;
  
  sVar6 = (*table->hasher)(entry,table->n_buckets);
  if (table->n_buckets <= sVar6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  phVar7 = table->bucket + sVar6;
  *bucket_head = phVar7;
  pvVar1 = phVar7->data;
  if (pvVar1 == (void *)0x0) {
    return (void *)0x0;
  }
  if (pvVar1 != entry) {
    _Var5 = (*table->comparator)(entry,pvVar1);
    if (!_Var5) {
      while( true ) {
        if (phVar7->next == (hash_entry *)0x0) {
          return (void *)0x0;
        }
        pvVar1 = phVar7->next->data;
        if ((pvVar1 == entry) || (_Var5 = (*table->comparator)(entry,pvVar1), _Var5)) break;
        phVar7 = phVar7->next;
      }
      phVar2 = phVar7->next;
      pvVar1 = phVar2->data;
      if (delete) {
        phVar7->next = phVar2->next;
        phVar7 = table->free_entry_list;
        phVar2->data = (void *)0x0;
        phVar2->next = phVar7;
        table->free_entry_list = phVar2;
        return pvVar1;
      }
      return pvVar1;
    }
    entry = phVar7->data;
  }
  if (delete) {
    phVar2 = phVar7->next;
    if (phVar2 == (hash_entry *)0x0) {
      phVar7->data = (void *)0x0;
    }
    else {
      phVar4 = phVar2->next;
      phVar3 = table->free_entry_list;
      phVar7->data = phVar2->data;
      phVar7->next = phVar4;
      phVar2->data = (void *)0x0;
      phVar2->next = phVar3;
      table->free_entry_list = phVar2;
    }
  }
  return entry;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

size_t compute_bucket_size(size_t candidate,Hash_tuning *tuning)

{
  undefined1 auVar1 [16];
  float fVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  float in_XMM0_Da;
  
  if ((char)tuning == '\0') {
    fVar2 = (float)candidate / in_XMM0_Da;
    if (__LC6 <= fVar2) goto LAB_0010030b;
    if (fVar2 < __LC7) {
      candidate = (size_t)fVar2;
    }
    else {
      candidate = (long)(fVar2 - __LC7) ^ 0x8000000000000000;
    }
  }
  uVar5 = 10;
  if (9 < candidate) {
    uVar5 = candidate;
  }
  for (uVar5 = uVar5 | 1; uVar5 != 0xffffffffffffffff; uVar5 = uVar5 + 2) {
    for (; auVar1._8_8_ = 0, auVar1._0_8_ = uVar5,
        uVar4 = (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar5 / 3,
        uVar5 < 10; uVar5 = uVar5 + 2) {
      if (uVar5 != uVar4) goto LAB_001002c4;
    }
    if (uVar5 != uVar4) {
      lVar7 = 0x10;
      uVar6 = 9;
      uVar4 = 3;
      do {
        uVar4 = uVar4 + 2;
        uVar6 = uVar6 + lVar7;
        if (uVar5 <= uVar6) {
          if (uVar5 % uVar4 != 0) goto LAB_001002c4;
          break;
        }
        lVar7 = lVar7 + 8;
      } while (uVar5 % uVar4 != 0);
    }
  }
LAB_001002c4:
  if (((uVar5 >> 0x3c & 1) == 0) && (uVar5 >> 0x3d == 0)) {
    return uVar5;
  }
LAB_0010030b:
  piVar3 = __errno_location();
  *piVar3 = 0xc;
  return 0;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

_Bool transfer_entries(Hash_table *dst,Hash_table *src,_Bool safe)

{
  size_t sVar1;
  hash_entry *phVar2;
  size_t sVar3;
  hash_entry *phVar4;
  void *pvVar5;
  hash_entry *phVar6;
  hash_entry *phVar7;
  
  phVar6 = src->bucket;
  if (src->bucket_limit <= phVar6) {
    return true;
  }
  do {
    while (pvVar5 = phVar6->data, pvVar5 == (void *)0x0) {
LAB_00100368:
      phVar6 = phVar6 + 1;
      if (src->bucket_limit <= phVar6) {
        return true;
      }
    }
    if (phVar6->next != (hash_entry *)0x0) {
      sVar3 = dst->n_buckets;
      phVar7 = phVar6->next;
      do {
        pvVar5 = phVar7->data;
        sVar1 = (*dst->hasher)(pvVar5,sVar3);
        sVar3 = dst->n_buckets;
        if (sVar3 <= sVar1) goto transfer_entries_cold;
        phVar2 = dst->bucket + sVar1;
        phVar4 = phVar7->next;
        if (phVar2->data == (void *)0x0) {
          phVar2->data = pvVar5;
          phVar2 = dst->free_entry_list;
          dst->n_buckets_used = dst->n_buckets_used + 1;
          phVar7->data = (void *)0x0;
          phVar7->next = phVar2;
          dst->free_entry_list = phVar7;
        }
        else {
          phVar7->next = phVar2->next;
          phVar2->next = phVar7;
        }
        phVar7 = phVar4;
      } while (phVar4 != (hash_entry *)0x0);
      pvVar5 = phVar6->data;
    }
    phVar6->next = (hash_entry *)0x0;
    if (safe) goto LAB_00100368;
    sVar3 = (*dst->hasher)(pvVar5,dst->n_buckets);
    if (dst->n_buckets <= sVar3) {
transfer_entries_cold:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    phVar7 = dst->bucket + sVar3;
    if (phVar7->data == (void *)0x0) {
      phVar7->data = pvVar5;
      dst->n_buckets_used = dst->n_buckets_used + 1;
    }
    else {
      phVar4 = dst->free_entry_list;
      if (phVar4 == (hash_entry *)0x0) {
        phVar4 = (hash_entry *)malloc(0x10);
        if (phVar4 == (hash_entry *)0x0) {
          return false;
        }
      }
      else {
        dst->free_entry_list = phVar4->next;
      }
      phVar2 = phVar7->next;
      phVar4->data = pvVar5;
      phVar4->next = phVar2;
      phVar7->next = phVar4;
    }
    phVar6->data = (void *)0x0;
    phVar6 = phVar6 + 1;
    src->n_buckets_used = src->n_buckets_used - 1;
    if (src->bucket_limit <= phVar6) {
      return true;
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

size_t hash_get_n_buckets(Hash_table *table)

{
  return table->n_buckets;
}



/* WARNING: Unknown calling convention */

size_t hash_get_n_buckets_used(Hash_table *table)

{
  return table->n_buckets_used;
}



/* WARNING: Unknown calling convention */

size_t hash_get_n_entries(Hash_table *table)

{
  return table->n_entries;
}



/* WARNING: Unknown calling convention */

size_t hash_get_max_bucket_length(Hash_table *table)

{
  hash_entry *phVar1;
  hash_entry *phVar2;
  ulong uVar3;
  size_t sVar4;
  
  phVar2 = table->bucket;
  sVar4 = 0;
  do {
    if (table->bucket_limit <= phVar2) {
      return sVar4;
    }
    while (phVar2->data != (void *)0x0) {
      uVar3 = 1;
      for (phVar1 = phVar2->next; phVar1 != (hash_entry *)0x0; phVar1 = phVar1->next) {
        uVar3 = uVar3 + 1;
      }
      if (sVar4 < uVar3) {
        sVar4 = uVar3;
      }
      phVar2 = phVar2 + 1;
      if (table->bucket_limit <= phVar2) {
        return sVar4;
      }
    }
    phVar2 = phVar2 + 1;
  } while( true );
}



/* WARNING: Unknown calling convention */

_Bool hash_table_ok(Hash_table *table)

{
  hash_entry *phVar1;
  hash_entry *phVar2;
  size_t sVar3;
  size_t sVar4;
  
  phVar2 = table->bucket;
  sVar3 = 0;
  sVar4 = 0;
  do {
    while( true ) {
      if (table->bucket_limit <= phVar2) {
        if (table->n_buckets_used != sVar4) {
          return false;
        }
        return table->n_entries == sVar3;
      }
      if (phVar2->data != (void *)0x0) break;
LAB_00100550:
      phVar2 = phVar2 + 1;
    }
    phVar1 = phVar2->next;
    sVar4 = sVar4 + 1;
    sVar3 = sVar3 + 1;
    if (phVar1 == (hash_entry *)0x0) goto LAB_00100550;
    do {
      phVar1 = phVar1->next;
      sVar3 = sVar3 + 1;
    } while (phVar1 != (hash_entry *)0x0);
    phVar2 = phVar2 + 1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void hash_print_statistics(Hash_table *table,FILE *stream)

{
  ulong uVar1;
  ulong uVar2;
  hash_entry *phVar3;
  hash_entry *phVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = 0;
  uVar1 = table->n_buckets;
  uVar2 = table->n_buckets_used;
  for (phVar4 = table->bucket; phVar4 < table->bucket_limit; phVar4 = phVar4 + 1) {
    while (phVar4->data == (void *)0x0) {
      phVar4 = phVar4 + 1;
      if (table->bucket_limit <= phVar4) goto LAB_0010060d;
    }
    uVar5 = 1;
    for (phVar3 = phVar4->next; phVar3 != (hash_entry *)0x0; phVar3 = phVar3->next) {
      uVar5 = uVar5 + 1;
    }
    if (uVar6 < uVar5) {
      uVar6 = uVar5;
    }
  }
LAB_0010060d:
  __fprintf_chk(stream,2,"# entries:         %lu\n",table->n_entries);
  __fprintf_chk(stream,2,"# buckets:         %lu\n",uVar1);
  __fprintf_chk(((double)uVar2 * __LC11) / (double)uVar1,stream,2,
                "# buckets used:    %lu (%.2f%%)\n",uVar2);
  __fprintf_chk(stream,2,"max bucket length: %lu\n",uVar6);
  return;
}



/* WARNING: Unknown calling convention */

void * hash_lookup(Hash_table *table,void *entry)

{
  _Bool _Var1;
  size_t sVar2;
  hash_entry *phVar3;
  void *pvVar4;
  
  sVar2 = (*table->hasher)(entry,table->n_buckets);
  if (table->n_buckets <= sVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  phVar3 = table->bucket + sVar2;
  pvVar4 = phVar3->data;
  if (pvVar4 != (void *)0x0) {
    while( true ) {
      if (pvVar4 == entry) {
        return entry;
      }
      _Var1 = (*table->comparator)(entry,pvVar4);
      if (_Var1) break;
      phVar3 = phVar3->next;
      if (phVar3 == (hash_entry *)0x0) {
        return (void *)0x0;
      }
      pvVar4 = phVar3->data;
    }
    return phVar3->data;
  }
  return (void *)0x0;
}



/* WARNING: Unknown calling convention */

void * hash_get_first(Hash_table *table)

{
  void *pvVar1;
  hash_entry *phVar2;
  
  if (table->n_entries == 0) {
    return (void *)0x0;
  }
  phVar2 = table->bucket;
  if (table->bucket_limit <= phVar2) {
    pvVar1 = (void *)hash_get_first_cold();
    return pvVar1;
  }
  do {
    if (phVar2->data != (void *)0x0) {
      return phVar2->data;
    }
    phVar2 = phVar2 + 1;
  } while (phVar2 < table->bucket_limit);
  pvVar1 = (void *)hash_get_first_cold();
  return pvVar1;
}



/* WARNING: Unknown calling convention */

void * hash_get_next(Hash_table *table,void *entry)

{
  void **ppvVar1;
  size_t sVar2;
  hash_entry *phVar3;
  hash_entry *phVar4;
  
  sVar2 = (*table->hasher)(entry,table->n_buckets);
  if (table->n_buckets <= sVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  phVar3 = table->bucket + sVar2;
  phVar4 = phVar3;
  do {
    ppvVar1 = &phVar4->data;
    phVar4 = phVar4->next;
    if (*ppvVar1 == entry) {
      if (phVar4 != (hash_entry *)0x0) {
        return phVar4->data;
      }
      break;
    }
  } while (phVar4 != (hash_entry *)0x0);
  do {
    phVar3 = phVar3 + 1;
    if (table->bucket_limit <= phVar3) {
      return (void *)0x0;
    }
  } while (phVar3->data == (void *)0x0);
  return phVar3->data;
}



/* WARNING: Unknown calling convention */

size_t hash_get_entries(Hash_table *table,void **buffer,size_t buffer_size)

{
  size_t sVar1;
  hash_entry *phVar3;
  hash_entry *phVar4;
  void *pvVar5;
  size_t sVar2;
  
  phVar3 = table->bucket;
  if (table->bucket_limit <= phVar3) {
    return 0;
  }
  sVar1 = 0;
  do {
    pvVar5 = phVar3->data;
    if (pvVar5 != (void *)0x0) {
      sVar2 = sVar1;
      phVar4 = phVar3;
      if (buffer_size <= sVar1) {
        return sVar1;
      }
      while( true ) {
        sVar1 = sVar2 + 1;
        buffer[sVar2] = pvVar5;
        phVar4 = phVar4->next;
        if (phVar4 == (hash_entry *)0x0) break;
        if (buffer_size == sVar1) {
          return buffer_size;
        }
        pvVar5 = phVar4->data;
        sVar2 = sVar1;
      }
    }
    phVar3 = phVar3 + 1;
  } while (phVar3 < table->bucket_limit);
  return sVar1;
}



/* WARNING: Unknown calling convention */

size_t hash_do_for_each(Hash_table *table,Hash_processor processor,void *processor_data)

{
  _Bool _Var1;
  hash_entry *phVar2;
  size_t sVar3;
  void *pvVar4;
  hash_entry *phVar5;
  
  phVar5 = table->bucket;
  if (phVar5 < table->bucket_limit) {
    sVar3 = 0;
    do {
      pvVar4 = phVar5->data;
      phVar2 = phVar5;
      if (pvVar4 != (void *)0x0) {
        while( true ) {
          _Var1 = (*processor)(pvVar4,processor_data);
          if (!_Var1) {
            return sVar3;
          }
          phVar2 = phVar2->next;
          sVar3 = sVar3 + 1;
          if (phVar2 == (hash_entry *)0x0) break;
          pvVar4 = phVar2->data;
        }
      }
      phVar5 = phVar5 + 1;
    } while (phVar5 < table->bucket_limit);
  }
  else {
    sVar3 = 0;
  }
  return sVar3;
}



/* WARNING: Unknown calling convention */

size_t hash_string(char *string,size_t n_buckets)

{
  byte bVar1;
  size_t sVar2;
  
  sVar2 = 0;
  bVar1 = *string;
  while (bVar1 != 0) {
    string = (char *)((byte *)string + 1);
    sVar2 = (sVar2 * 0x1f + (ulong)bVar1) % n_buckets;
    bVar1 = *string;
  }
  return sVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void hash_reset_tuning(Hash_tuning *tuning)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = _UNK_001012c8;
  uVar4 = __LC17;
  tuning->is_n_buckets = false;
  uVar3 = __LC17;
  __LC17 = (undefined4)uVar4;
  _LC4 = SUB84(uVar4,4);
  uVar1 = _LC4;
  tuning->shrink_threshold = (float)__LC17;
  __LC17 = uVar3;
  uVar4 = _UNK_001012c8;
  tuning->shrink_factor = (float)uVar1;
  _UNK_001012c8 = (undefined4)uVar2;
  _UNK_001012cc = SUB84(uVar2,4);
  uVar1 = _UNK_001012cc;
  tuning->growth_threshold = (float)_UNK_001012c8;
  _UNK_001012c8 = uVar4;
  tuning->growth_factor = (float)uVar1;
  return;
}



/* WARNING: Unknown calling convention */

Hash_table *
hash_initialize(size_t candidate,Hash_tuning *tuning,Hash_hasher hasher,Hash_comparator comparator,
               Hash_data_freer data_freer)

{
  _Bool _Var1;
  Hash_table *table;
  size_t __nmemb;
  hash_entry *phVar2;
  int *piVar3;
  
  if (hasher == (Hash_hasher)0x0) {
    hasher = raw_hasher;
  }
  if (comparator == (Hash_comparator)0x0) {
    comparator = raw_comparator;
  }
  table = (Hash_table *)malloc(0x50);
  if (table != (Hash_table *)0x0) {
    if (tuning == (Hash_tuning *)0x0) {
      tuning = &default_tuning;
    }
    table->tuning = tuning;
    _Var1 = check_tuning(table);
    if (_Var1) {
      __nmemb = compute_bucket_size(candidate,(Hash_tuning *)(ulong)tuning->is_n_buckets);
      table->n_buckets = __nmemb;
      if (__nmemb != 0) {
        phVar2 = (hash_entry *)calloc(__nmemb,0x10);
        table->bucket = phVar2;
        if (phVar2 != (hash_entry *)0x0) {
          table->hasher = hasher;
          table->comparator = comparator;
          table->bucket_limit = phVar2 + __nmemb;
          table->data_freer = data_freer;
          table->free_entry_list = (hash_entry *)0x0;
          table->n_buckets_used = 0;
          table->n_entries = 0;
          return table;
        }
      }
    }
    else {
      piVar3 = __errno_location();
      *piVar3 = 0x16;
    }
    free(table);
  }
  return (Hash_table *)0x0;
}



/* WARNING: Unknown calling convention */

void hash_clear(Hash_table *table)

{
  hash_entry *phVar1;
  hash_entry *phVar2;
  Hash_data_freer p_Var3;
  hash_entry *phVar4;
  hash_entry *phVar5;
  
  phVar4 = table->bucket;
  if (table->bucket < table->bucket_limit) {
    do {
      while (phVar4->data != (void *)0x0) {
        p_Var3 = table->data_freer;
        phVar5 = phVar4->next;
        while (phVar5 != (hash_entry *)0x0) {
          if (p_Var3 != (Hash_data_freer)0x0) {
            (*p_Var3)(phVar5->data);
            p_Var3 = table->data_freer;
          }
          phVar1 = phVar5->next;
          phVar2 = table->free_entry_list;
          phVar5->data = (void *)0x0;
          phVar5->next = phVar2;
          table->free_entry_list = phVar5;
          phVar5 = phVar1;
        }
        if (p_Var3 != (Hash_data_freer)0x0) {
          (*p_Var3)(phVar4->data);
        }
        phVar5 = phVar4 + 1;
        phVar4->data = (void *)0x0;
        phVar4->next = (hash_entry *)0x0;
        phVar4 = phVar5;
        if (table->bucket_limit <= phVar5) goto LAB_00100b34;
      }
      phVar4 = phVar4 + 1;
    } while (phVar4 < table->bucket_limit);
  }
LAB_00100b34:
  table->n_buckets_used = 0;
  table->n_entries = 0;
  return;
}



/* WARNING: Unknown calling convention */

void hash_free(Hash_table *table)

{
  int iVar1;
  int *piVar2;
  hash_entry *phVar3;
  hash_entry *phVar4;
  void *pvVar5;
  hash_entry *phVar6;
  
  piVar2 = __errno_location();
  phVar6 = table->bucket;
  iVar1 = *piVar2;
  phVar3 = table->bucket_limit;
  if ((table->data_freer != (Hash_data_freer)0x0) && (table->n_entries != 0)) {
    if (phVar3 <= phVar6) goto LAB_00100c03;
    do {
      while (pvVar5 = phVar6->data, phVar4 = phVar6, pvVar5 != (void *)0x0) {
        while( true ) {
          (*table->data_freer)(pvVar5);
          phVar4 = phVar4->next;
          if (phVar4 == (hash_entry *)0x0) break;
          pvVar5 = phVar4->data;
        }
        phVar3 = table->bucket_limit;
        phVar6 = phVar6 + 1;
        if (phVar3 <= phVar6) goto LAB_00100bcc;
      }
      phVar6 = phVar6 + 1;
    } while (phVar6 < phVar3);
LAB_00100bcc:
    phVar6 = table->bucket;
  }
  if (phVar6 < phVar3) {
    do {
      phVar3 = phVar6->next;
      while (phVar3 != (hash_entry *)0x0) {
        phVar4 = phVar3->next;
        free(phVar3);
        phVar3 = phVar4;
      }
      phVar6 = phVar6 + 1;
    } while (phVar6 < table->bucket_limit);
  }
LAB_00100c03:
  phVar6 = table->free_entry_list;
  while (phVar6 != (hash_entry *)0x0) {
    phVar3 = phVar6->next;
    free(phVar6);
    phVar6 = phVar3;
  }
  free(table->bucket);
  free(table);
  *piVar2 = iVar1;
  return;
}



/* WARNING: Unknown calling convention */

_Bool hash_rehash(Hash_table *table,size_t candidate)

{
  int iVar1;
  Hash_tuning *pHVar2;
  long lVar3;
  _Bool _Var4;
  size_t __nmemb;
  int *piVar5;
  long in_FS_OFFSET;
  Hash_table storage;
  
  pHVar2 = table->tuning;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  __nmemb = compute_bucket_size(candidate,(Hash_tuning *)(ulong)pHVar2->is_n_buckets);
  if (__nmemb != 0) {
    if (table->n_buckets == __nmemb) {
LAB_00100da3:
      _Var4 = true;
      goto LAB_00100d62;
    }
    storage.bucket = (hash_entry *)calloc(__nmemb,0x10);
    if (storage.bucket != (hash_entry *)0x0) {
      storage.hasher = table->hasher;
      storage.comparator = table->comparator;
      storage.bucket_limit = storage.bucket + __nmemb;
      storage.n_buckets_used = 0;
      storage.data_freer = table->data_freer;
      storage.n_entries = 0;
      storage.free_entry_list = table->free_entry_list;
      storage.n_buckets = __nmemb;
      storage.tuning = pHVar2;
      _Var4 = transfer_entries(&storage,table,false);
      if (_Var4) {
        free(table->bucket);
        table->free_entry_list = storage.free_entry_list;
        table->bucket = storage.bucket;
        table->bucket_limit = storage.bucket_limit;
        table->n_buckets = storage.n_buckets;
        table->n_buckets_used = storage.n_buckets_used;
        goto LAB_00100da3;
      }
      piVar5 = __errno_location();
      iVar1 = *piVar5;
      table->free_entry_list = storage.free_entry_list;
      _Var4 = transfer_entries(table,&storage,true);
      if (!_Var4) {
hash_rehash_cold:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      _Var4 = transfer_entries(table,&storage,false);
      if (!_Var4) goto hash_rehash_cold;
      free(storage.bucket);
      *piVar5 = iVar1;
    }
  }
  _Var4 = false;
LAB_00100d62:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int hash_insert_if_absent(Hash_table *table,void *entry,void **matched_ent)

{
  hash_entry *phVar1;
  ulong uVar2;
  Hash_tuning *pHVar3;
  _Bool _Var4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  int *piVar8;
  hash_entry *phVar9;
  long in_FS_OFFSET;
  size_t sVar10;
  size_t sVar11;
  float fVar12;
  float fVar13;
  hash_entry *bucket;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (entry == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar6 = hash_find_entry(table,entry,&bucket,false);
  if (pvVar6 != (void *)0x0) {
    if (matched_ent != (void **)0x0) {
      *matched_ent = pvVar6;
    }
    iVar5 = 0;
    goto LAB_00100dfd;
  }
  uVar2 = table->n_buckets_used;
  if ((long)uVar2 < 0) {
    uVar7 = table->n_buckets;
    fVar13 = (float)uVar2;
    if (-1 < (long)uVar7) goto LAB_00100e3f;
LAB_00100ece:
    fVar12 = (float)uVar7;
  }
  else {
    fVar13 = (float)(long)uVar2;
    uVar7 = table->n_buckets;
    if ((long)uVar7 < 0) goto LAB_00100ece;
LAB_00100e3f:
    fVar12 = (float)(long)uVar7;
  }
  if (table->tuning->growth_threshold * fVar12 < fVar13) {
    check_tuning(table);
    pHVar3 = table->tuning;
    if (fVar13 <= fVar12 * pHVar3->growth_threshold) goto LAB_00100e5e;
    fVar12 = fVar12 * pHVar3->growth_factor;
    if (pHVar3->is_n_buckets == false) {
      fVar12 = fVar12 * pHVar3->growth_threshold;
    }
    if (fVar12 < __LC6) {
      if (__LC7 <= fVar12) {
        sVar10 = (long)(fVar12 - __LC7) ^ 0x8000000000000000;
      }
      else {
        sVar10 = (size_t)fVar12;
      }
      _Var4 = hash_rehash(table,sVar10);
      if (_Var4) {
        pvVar6 = hash_find_entry(table,entry,&bucket,false);
        if (pvVar6 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          hash_insert_if_absent_cold();
        }
        goto LAB_00100e5e;
      }
    }
    else {
      piVar8 = __errno_location();
      *piVar8 = 0xc;
    }
LAB_00100f30:
    iVar5 = -1;
  }
  else {
LAB_00100e5e:
    if (bucket->data == (void *)0x0) {
      sVar10 = table->n_buckets_used + __LC19;
      sVar11 = table->n_entries + _UNK_001012d8;
      bucket->data = entry;
      table->n_buckets_used = sVar10;
      table->n_entries = sVar11;
    }
    else {
      phVar9 = table->free_entry_list;
      if (phVar9 == (hash_entry *)0x0) {
        phVar9 = (hash_entry *)malloc(0x10);
        if (phVar9 == (hash_entry *)0x0) goto LAB_00100f30;
      }
      else {
        table->free_entry_list = phVar9->next;
      }
      phVar1 = bucket->next;
      phVar9->data = entry;
      phVar9->next = phVar1;
      bucket->next = phVar9;
      table->n_entries = table->n_entries + 1;
    }
    iVar5 = 1;
  }
LAB_00100dfd:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



/* WARNING: Unknown calling convention */

void * hash_insert(Hash_table *table,void *entry)

{
  int iVar1;
  long in_FS_OFFSET;
  void *matched_ent;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = hash_insert_if_absent(table,entry,&matched_ent);
  if (iVar1 == -1) {
    entry = (void *)0x0;
  }
  else if (iVar1 == 0) {
    entry = matched_ent;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return entry;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void * hash_remove(Hash_table *table,void *entry)

{
  Hash_tuning *pHVar1;
  hash_entry *phVar2;
  hash_entry *__ptr;
  _Bool _Var3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  size_t candidate;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  hash_entry *bucket;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar4 = hash_find_entry(table,entry,&bucket,true);
  if ((pvVar4 == (void *)0x0) ||
     (table->n_entries = table->n_entries - 1, bucket->data != (void *)0x0)) goto LAB_001010a3;
  uVar5 = table->n_buckets_used - 1;
  table->n_buckets_used = uVar5;
  if ((long)uVar5 < 0) {
    uVar6 = table->n_buckets;
    fVar8 = (float)uVar5;
    if (-1 < (long)uVar6) goto LAB_001010f0;
LAB_001011a6:
    fVar7 = (float)uVar6;
  }
  else {
    fVar8 = (float)(long)uVar5;
    uVar6 = table->n_buckets;
    if ((long)uVar6 < 0) goto LAB_001011a6;
LAB_001010f0:
    fVar7 = (float)(long)uVar6;
  }
  if (fVar8 < table->tuning->shrink_threshold * fVar7) {
    check_tuning(table);
    pHVar1 = table->tuning;
    if (fVar8 < pHVar1->shrink_threshold * fVar7) {
      fVar7 = fVar7 * pHVar1->shrink_factor;
      if (pHVar1->is_n_buckets == false) {
        fVar7 = fVar7 * pHVar1->growth_threshold;
      }
      if (__LC7 <= fVar7) {
        candidate = (long)(fVar7 - __LC7) ^ 0x8000000000000000;
      }
      else {
        candidate = (size_t)fVar7;
      }
      _Var3 = hash_rehash(table,candidate);
      if (!_Var3) {
        __ptr = table->free_entry_list;
        while (__ptr != (hash_entry *)0x0) {
          phVar2 = __ptr->next;
          free(__ptr);
          __ptr = phVar2;
        }
        table->free_entry_list = (hash_entry *)0x0;
      }
    }
  }
LAB_001010a3:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar4;
}



/* WARNING: Unknown calling convention */

void * hash_delete(Hash_table *table,void *entry)

{
  void *pvVar1;
  
  pvVar1 = hash_remove(table,entry);
  return pvVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_find_entry_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void transfer_entries_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_lookup_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



void hash_get_first_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_get_next_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_rehash_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hash_insert_if_absent_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


