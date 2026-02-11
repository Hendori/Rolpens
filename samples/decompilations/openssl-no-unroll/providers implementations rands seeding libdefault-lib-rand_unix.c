
void cleanup_shm(void)

{
  shmdt(shm_addr);
  return;
}



int wait_random_seeded(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  ssize_t sVar6;
  long lVar7;
  fd_set *pfVar8;
  long in_FS_OFFSET;
  byte bVar9;
  undefined1 local_239;
  fd_set local_238;
  utsname local_1b8;
  long local_30;
  
  bVar9 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = seeded_1;
  if (seeded_1 != 0) goto LAB_0010003a;
  iVar1 = shmget(0x72,1,0);
  if (iVar1 == -1) {
    iVar1 = uname(&local_1b8);
    if (iVar1 == 0) {
      iVar2 = __isoc23_strtol(local_1b8.release,0,10);
      pcVar4 = strchr(local_1b8.release,0x2e);
      iVar1 = 0;
      if (pcVar4 == (char *)0x0) {
        if (4 < iVar2) goto LAB_0010003a;
      }
      else {
        iVar3 = __isoc23_strtol(pcVar4 + 1,0,10);
        if ((4 < iVar2) || ((iVar2 == 4 && (7 < iVar3)))) goto LAB_0010003a;
      }
    }
    iVar2 = open("/dev/random",0);
    iVar1 = seeded_1;
    if (iVar2 != -1) {
      if (iVar2 < 0x400) {
        pfVar8 = &local_238;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          pfVar8->fds_bits[0] = 0;
          pfVar8 = (fd_set *)((long)pfVar8 + ((ulong)bVar9 * -2 + 1) * 8);
        }
        lVar7 = __fdelt_chk((long)iVar2);
        local_238.fds_bits[lVar7] = local_238.fds_bits[lVar7] | 1L << ((byte)iVar2 & 0x3f);
        do {
          iVar3 = select(iVar2 + 1,&local_238,(fd_set *)0x0,(fd_set *)0x0,(timeval *)0x0);
          if (-1 < iVar3) goto LAB_00100196;
          piVar5 = __errno_location();
        } while (*piVar5 == 4);
      }
      else {
        do {
          sVar6 = read(iVar2,&local_239,1);
          iVar3 = (int)sVar6;
          if (-1 < iVar3) goto LAB_00100196;
          piVar5 = __errno_location();
        } while (*piVar5 == 4);
      }
      close(iVar2);
      iVar1 = seeded_1;
    }
    goto LAB_0010003a;
  }
LAB_00100080:
  seeded_1 = 1;
  shm_addr = shmat(iVar1,(void *)0x0,0x1000);
  if (shm_addr != (void *)0xffffffffffffffff) {
    OPENSSL_atexit(0x100000);
    iVar1 = seeded_1;
    goto LAB_0010003a;
  }
  goto LAB_001001d0;
LAB_00100196:
  close(iVar2);
  iVar1 = seeded_1;
  if (iVar3 != 1) goto LAB_0010003a;
  seeded_1 = 1;
  iVar1 = shmget(0x72,1,0x324);
  if (iVar1 != -1) goto LAB_00100080;
LAB_001001d0:
  iVar1 = 1;
LAB_0010003a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined8 ossl_rand_pool_init(void)

{
  random_devices = 0xffffffff;
  DAT_001009e8 = 0xffffffff;
  DAT_00100a10 = 0xffffffff;
  DAT_00100a38 = 0xffffffff;
  return 1;
}



void ossl_rand_pool_cleanup(void)

{
  int iVar1;
  long in_FS_OFFSET;
  stat local_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (random_devices != -1) {
    iVar1 = fstat(random_devices,&local_a8);
    if ((((iVar1 != -1) && (local_a8.st_dev == DAT_001009c8)) && (local_a8.st_ino == DAT_001009d0))
       && (((DAT_001009d8 ^ local_a8.st_mode) < 0x200 && (local_a8.st_rdev == DAT_001009e0)))) {
      close(random_devices);
    }
  }
  random_devices = 0xffffffff;
  if (DAT_001009e8 != -1) {
    iVar1 = fstat(DAT_001009e8,&local_a8);
    if (((iVar1 != -1) && (DAT_001009f0 == local_a8.st_dev)) &&
       ((DAT_001009f8 == local_a8.st_ino &&
        (((DAT_00100a00 ^ local_a8.st_mode) < 0x200 && (DAT_00100a08 == local_a8.st_rdev)))))) {
      close(DAT_001009e8);
    }
  }
  DAT_001009e8 = 0xffffffff;
  if (DAT_00100a10 != -1) {
    iVar1 = fstat(DAT_00100a10,&local_a8);
    if ((((iVar1 != -1) && (DAT_00100a18 == local_a8.st_dev)) && (DAT_00100a20 == local_a8.st_ino))
       && (((DAT_00100a28 ^ local_a8.st_mode) < 0x200 && (DAT_00100a30 == local_a8.st_rdev)))) {
      close(DAT_00100a10);
    }
  }
  DAT_00100a10 = 0xffffffff;
  if (DAT_00100a38 != -1) {
    iVar1 = fstat(DAT_00100a38,&local_a8);
    if (((iVar1 != -1) && (DAT_00100a40 == local_a8.st_dev)) &&
       ((DAT_00100a48 == local_a8.st_ino &&
        (((DAT_00100a50 ^ local_a8.st_mode) < 0x200 && (DAT_00100a58 == local_a8.st_rdev)))))) {
      close(DAT_00100a38);
    }
  }
  DAT_00100a38 = 0xffffffff;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_rand_pool_keep_random_devices_open(int param_1)

{
  if (param_1 != 0) {
    keep_random_devices_open = param_1;
    return;
  }
  ossl_rand_pool_cleanup();
  keep_random_devices_open = param_1;
  return;
}



long ossl_pool_acquire_entropy(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  size_t __nbytes;
  int *piVar7;
  void *__buf;
  ssize_t sVar8;
  long in_FS_OFFSET;
  bool bVar9;
  ulong local_e8;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = ossl_rand_pool_bytes_needed(param_1,1);
  if (lVar3 != 0) {
    iVar2 = 2;
LAB_0010058f:
    do {
      uVar4 = ossl_rand_pool_add_begin(param_1,lVar3);
      iVar1 = getentropy(uVar4,lVar3);
      if (iVar1 == 0) {
        if (0 < lVar3) {
          ossl_rand_pool_add_end(param_1,lVar3,lVar3 * 8);
          break;
        }
        piVar5 = __errno_location();
        if (*piVar5 != 4) break;
      }
      else {
        piVar5 = __errno_location();
        iVar1 = *piVar5;
        if (iVar1 == 0x26) {
          lVar6 = syscall(0x13e,uVar4,lVar3,0);
          if (0 < lVar6) {
            lVar3 = lVar3 - lVar6;
            ossl_rand_pool_add_end(param_1,lVar6,lVar6 * 8);
            if (lVar3 == 0) break;
            iVar2 = 2;
            goto LAB_0010058f;
          }
          if (lVar6 != 0) {
            piVar5 = __errno_location();
            iVar1 = *piVar5;
            goto LAB_00100667;
          }
        }
        else {
LAB_00100667:
          if (iVar1 != 4) break;
        }
        if (lVar3 == 0) break;
      }
      bVar9 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar9);
  }
  local_e8 = ossl_rand_pool_entropy_available(param_1);
  if (local_e8 == 0) {
    iVar2 = wait_random_seeded();
    if (iVar2 != 0) {
      piVar5 = &random_devices;
      __nbytes = ossl_rand_pool_bytes_needed(param_1);
      if (__nbytes != 0) {
        local_e8 = 0;
        do {
          if (((((*piVar5 == -1) || (iVar2 = fstat(*piVar5,&local_d8), iVar2 == -1)) ||
               (*(__dev_t *)(piVar5 + 2) != local_d8.st_dev)) ||
              ((*(__ino_t *)(piVar5 + 4) != local_d8.st_ino ||
               (0x1ff < (piVar5[6] ^ local_d8.st_mode))))) ||
             (*(__dev_t *)(piVar5 + 8) != local_d8.st_rdev)) {
            iVar2 = open(*(char **)(random_device_paths + local_e8 * 8),0);
            *piVar5 = iVar2;
            if (iVar2 != -1) {
              iVar2 = fstat(iVar2,&local_d8);
              if (iVar2 != -1) {
                piVar5[6] = local_d8.st_mode;
                *(__dev_t *)(piVar5 + 2) = local_d8.st_dev;
                *(__ino_t *)(piVar5 + 4) = local_d8.st_ino;
                *(__dev_t *)(piVar5 + 8) = local_d8.st_rdev;
                goto LAB_0010074b;
              }
              close(*piVar5);
              *piVar5 = -1;
            }
          }
          else {
LAB_0010074b:
            iVar2 = *piVar5;
            iVar1 = 2;
            if (iVar2 != -1) {
              do {
                while( true ) {
                  __buf = (void *)ossl_rand_pool_add_begin(param_1,__nbytes);
                  sVar8 = read(iVar2,__buf,__nbytes);
                  if (sVar8 < 1) break;
                  ossl_rand_pool_add_end(param_1,sVar8,sVar8 * 8);
                  __nbytes = __nbytes - sVar8;
                  if (__nbytes == 0) goto LAB_001007c5;
                  iVar1 = 2;
                }
                if ((sVar8 != 0) && (piVar7 = __errno_location(), *piVar7 != 4)) goto LAB_001007cf;
                bVar9 = iVar1 != 0;
                iVar1 = iVar1 + -1;
              } while (bVar9);
              if (sVar8 == 0) {
LAB_001007c5:
                if (keep_random_devices_open == 0) goto LAB_001007cf;
              }
              else {
LAB_001007cf:
                if ((((*piVar5 != -1) && (iVar2 = fstat(*piVar5,&local_d8), iVar2 != -1)) &&
                    (*(__dev_t *)(piVar5 + 2) == local_d8.st_dev)) &&
                   (((*(__ino_t *)(piVar5 + 4) == local_d8.st_ino &&
                     ((piVar5[6] ^ local_d8.st_mode) < 0x200)) &&
                    (*(__dev_t *)(piVar5 + 8) == local_d8.st_rdev)))) {
                  close(*piVar5);
                }
                *piVar5 = -1;
              }
              __nbytes = ossl_rand_pool_bytes_needed(param_1);
            }
          }
          local_e8 = local_e8 + 1;
          piVar5 = piVar5 + 10;
        } while ((__nbytes != 0) && (local_e8 < 4));
      }
      local_e8 = ossl_rand_pool_entropy_available(param_1);
      if (local_e8 != 0) goto LAB_00100629;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      lVar3 = ossl_rand_pool_entropy_available(param_1);
      return lVar3;
    }
  }
  else {
LAB_00100629:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return local_e8;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_pool_add_nonce_data(undefined8 param_1)

{
  __pid_t _Var1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  timespec local_48;
  undefined1 local_38 [16];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  _Var1 = getpid();
  local_38._0_4_ = _Var1;
  uVar3 = CRYPTO_THREAD_get_current_id();
  local_38._8_8_ = uVar3;
  iVar2 = clock_gettime(0,&local_48);
  if (iVar2 != 0) {
    iVar2 = gettimeofday((timeval *)&local_48,(__timezone_ptr_t)0x0);
    if (iVar2 != 0) {
      local_28 = time((time_t *)0x0);
      goto LAB_00100950;
    }
  }
  local_28 = (local_48.tv_sec << 0x20) + local_48.tv_nsec;
LAB_00100950:
  ossl_rand_pool_add(param_1,local_38,0x18,0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


