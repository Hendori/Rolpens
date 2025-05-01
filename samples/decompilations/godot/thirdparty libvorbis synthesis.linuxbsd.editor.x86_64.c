
undefined8 vorbis_synthesis(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_1 == (long *)0x0) {
    return 0xffffff78;
  }
  lVar9 = param_1[0xd];
  if (lVar9 != 0) {
    lVar4 = *(long *)(lVar9 + 8);
    lVar9 = *(long *)(lVar9 + 0x88);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x30);
      plVar1 = param_1 + 1;
      if ((lVar9 != 0) && (lVar5 != 0)) {
        _vorbis_block_ripcord();
        oggpack_readinit(plVar1,*param_2,*(undefined4 *)(param_2 + 1));
        lVar8 = oggpack_read(plVar1,1);
        if (lVar8 != 0) {
          return 0xffffff79;
        }
        iVar7 = oggpack_read(plVar1,*(undefined4 *)(lVar9 + 0x50));
        if (iVar7 != -1) {
          *(int *)((long)param_1 + 0x4c) = iVar7;
          piVar6 = *(int **)(lVar5 + 0x28 + (long)iVar7 * 8);
          if (piVar6 != (int *)0x0) {
            lVar9 = (long)*piVar6;
            param_1[7] = lVar9;
            if (lVar9 == 0) {
              param_1[6] = 0;
              param_1[8] = 0;
              lVar9 = 0;
            }
            else {
              lVar9 = oggpack_read(plVar1,1);
              param_1[6] = lVar9;
              lVar9 = oggpack_read(plVar1,1);
              param_1[8] = lVar9;
              if (lVar9 == -1) {
                return 0xffffff78;
              }
              lVar9 = param_1[7];
            }
            lVar8 = param_2[5];
            iVar3 = *(int *)(lVar4 + 4);
            param_1[0xb] = param_2[4];
            param_1[0xc] = lVar8;
            uVar10 = *(undefined8 *)(lVar5 + lVar9 * 8);
            *(int *)(param_1 + 10) = (int)param_2[3];
            *(int *)(param_1 + 9) = (int)uVar10;
            lVar9 = _vorbis_block_alloc(param_1,(long)iVar3 << 3);
            iVar3 = *(int *)(lVar4 + 4);
            *param_1 = lVar9;
            if (0 < iVar3) {
              lVar8 = 0;
              while( true ) {
                lVar2 = lVar8 * 8;
                lVar8 = lVar8 + 1;
                uVar10 = _vorbis_block_alloc(param_1,(long)(int)param_1[9] << 2);
                *(undefined8 *)(lVar9 + lVar2) = uVar10;
                if (*(int *)(lVar4 + 4) <= (int)lVar8) break;
                lVar9 = *param_1;
              }
            }
            lVar9 = (long)*(int *)(*(long *)(lVar5 + 0x28 + (long)iVar7 * 8) + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0010016e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar10 = (**(code **)(*(long *)(&_mapping_P +
                                           (long)*(int *)(lVar5 + 0x228 + lVar9 * 4) * 8) + 0x20))
                               (param_1,*(undefined8 *)(lVar5 + 0x328 + lVar9 * 8));
            return uVar10;
          }
        }
      }
    }
  }
  return 0xffffff78;
}



undefined8 vorbis_synthesis_trackonly(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = param_1 + 1;
  lVar6 = *(long *)(param_1[0xd] + 0x88);
  lVar2 = *(long *)(*(long *)(param_1[0xd] + 8) + 0x30);
  _vorbis_block_ripcord();
  oggpack_readinit(puVar1,*param_2,*(undefined4 *)(param_2 + 1));
  lVar5 = oggpack_read(puVar1,1);
  if (lVar5 != 0) {
    return 0xffffff79;
  }
  iVar4 = oggpack_read(puVar1,*(undefined4 *)(lVar6 + 0x50));
  if (iVar4 != -1) {
    *(int *)((long)param_1 + 0x4c) = iVar4;
    piVar3 = *(int **)(lVar2 + 0x28 + (long)iVar4 * 8);
    if (piVar3 != (int *)0x0) {
      lVar6 = (long)*piVar3;
      param_1[7] = lVar6;
      if (lVar6 == 0) {
        param_1[6] = 0;
        param_1[8] = 0;
      }
      else {
        uVar7 = oggpack_read(puVar1,1);
        param_1[6] = uVar7;
        lVar6 = oggpack_read(puVar1,1);
        param_1[8] = lVar6;
        if (lVar6 == -1) {
          return 0xffffff78;
        }
      }
      uVar7 = param_2[5];
      param_1[0xb] = param_2[4];
      param_1[0xc] = uVar7;
      uVar7 = param_2[3];
      *(undefined4 *)(param_1 + 9) = 0;
      *param_1 = 0;
      *(int *)(param_1 + 10) = (int)uVar7;
      return 0;
    }
  }
  return 0xffffff78;
}



undefined8 vorbis_packet_blocksize(long param_1,undefined8 *param_2)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_48 [40];
  long local_20;
  
  lVar1 = *(long *)(param_1 + 0x30);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x10) < 1)) {
    uVar6 = 0xffffffffffffff7f;
  }
  else {
    oggpack_readinit(auStack_48,*param_2,*(undefined4 *)(param_2 + 1));
    lVar5 = oggpack_read(auStack_48,1);
    if (lVar5 == 0) {
      uVar3 = ov_ilog(*(int *)(lVar1 + 0x10) + -1);
      iVar4 = oggpack_read(auStack_48,uVar3);
      if ((iVar4 == -1) ||
         (piVar2 = *(int **)(lVar1 + 0x28 + (long)iVar4 * 8), piVar2 == (int *)0x0)) {
        uVar6 = 0xffffffffffffff78;
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + (long)*piVar2 * 8);
      }
    }
    else {
      uVar6 = 0xffffffffffffff79;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 vorbis_synthesis_halfrate(long param_1,int param_2)

{
  if ((**(long **)(param_1 + 0x30) < 0x41) && (param_2 != 0)) {
    return 0xffffffff;
  }
  *(uint *)(*(long **)(param_1 + 0x30) + 0x2d2) = (uint)(param_2 != 0);
  return 0;
}



undefined4 vorbis_synthesis_halfrate_p(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1690);
}


