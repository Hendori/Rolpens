
ushort * u_strFindLast_76_godot_part_0(ushort *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  if (param_1 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  if (param_2 < -1) {
    return (ushort *)0x0;
  }
  if (param_4 == -1) {
    puVar3 = param_3;
    if (*param_3 == 0) {
      return param_1;
    }
    do {
      puVar3 = puVar3 + 1;
    } while (*puVar3 != 0);
    param_4 = (int)((long)puVar3 - (long)param_3 >> 1);
  }
  if (param_4 == 0) {
    return param_1;
  }
  uVar1 = param_3[(long)param_4 + -1];
  puVar3 = param_1;
  if (param_4 == 1) {
    if ((uVar1 & 0xf800) != 0xd800) {
      if (param_2 == -1) {
        puVar3 = (ushort *)0x0;
        while( true ) {
          if (uVar1 == *param_1) {
            puVar3 = param_1;
          }
          if (*param_1 == 0) break;
          param_1 = param_1 + 1;
        }
        return puVar3;
      }
      if (param_2 == 0) {
        return (ushort *)0x0;
      }
      puVar3 = param_1 + param_2;
      do {
        puVar3 = puVar3 + -1;
        if (uVar1 == *puVar3) {
          return puVar3;
        }
      } while (param_1 != puVar3);
      return (ushort *)0x0;
    }
    if (param_2 != -1) goto LAB_00100371;
    if (*param_1 == 0) {
      return (ushort *)0x0;
    }
  }
  else {
    if (param_2 != -1) goto LAB_00100371;
    if (*param_1 == 0) {
      param_2 = 0;
      goto LAB_00100371;
    }
  }
  do {
    puVar3 = puVar3 + 1;
  } while (*puVar3 != 0);
  param_2 = (int)((long)puVar3 - (long)param_1 >> 1);
LAB_00100371:
  if (param_2 <= param_4 + -1) {
    return (ushort *)0x0;
  }
  puVar3 = param_1 + param_2;
  if (puVar3 != param_1 + (long)param_4 + -1) {
    puVar4 = puVar3;
    do {
      puVar5 = puVar4 + -1;
      puVar2 = puVar5;
      puVar6 = param_3 + (long)param_4 + -1;
      if (uVar1 == puVar4[-1]) {
        do {
          if (param_3 == puVar6) {
            if (((((*puVar2 & 0xfc00) != 0xdc00) || (param_1 == puVar2)) ||
                ((puVar2[-1] & 0xfc00) != 0xd800)) &&
               ((((puVar4[-1] & 0xfc00) != 0xd800 || (puVar3 == puVar4)) ||
                ((*puVar4 & 0xfc00) != 0xdc00)))) {
              return puVar2;
            }
            break;
          }
          puVar2 = puVar2 + -1;
          puVar6 = puVar6 + -1;
        } while (*puVar2 == *puVar6);
      }
      puVar4 = puVar5;
    } while (param_1 + (long)param_4 + -1 != puVar5);
  }
  return (ushort *)0x0;
}



ushort * u_strFindFirst_76_godot_part_0(ushort *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  if ((param_1 == (ushort *)0x0) || (param_2 < -1)) {
    return (ushort *)0x0;
  }
  if ((param_2 == -1) && (param_4 < 0)) {
    uVar1 = *param_3;
    if (uVar1 == 0) {
      return param_1;
    }
    uVar2 = *param_1;
    if ((param_3[1] == 0) && ((uVar1 & 0xf800) != 0xd800)) {
      while( true ) {
        if (uVar1 == uVar2) {
          return param_1;
        }
        if (uVar2 == 0) break;
        uVar2 = param_1[1];
        param_1 = param_1 + 1;
      }
    }
    else if (uVar2 != 0) {
      puVar6 = param_1 + 1;
      puVar5 = param_1;
      do {
        puVar3 = puVar6;
        uVar4 = param_3[1];
        puVar6 = param_3 + 1;
        puVar8 = puVar3;
        if (uVar1 == uVar2) {
          while (uVar4 != 0) {
            if (*puVar8 == 0) {
              return (ushort *)0x0;
            }
            if (*puVar8 != uVar4) goto LAB_00100690;
            uVar4 = puVar6[1];
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          if ((((uVar2 & 0xfc00) != 0xdc00) || (param_1 == puVar5)) ||
             ((puVar5[-1] & 0xfc00) != 0xd800)) {
            if ((puVar8[-1] & 0xfc00) != 0xd800) {
              return puVar5;
            }
            if ((*puVar8 & 0xfc00) != 0xdc00) {
              return puVar5;
            }
          }
        }
LAB_00100690:
        uVar2 = *puVar3;
        if (uVar2 == 0) {
          return (ushort *)0x0;
        }
        puVar6 = puVar3 + 1;
        puVar5 = puVar3;
      } while( true );
    }
  }
  else {
    if (param_4 == -1) {
      puVar5 = param_3;
      if (*param_3 == 0) {
        return param_1;
      }
      do {
        puVar5 = puVar5 + 1;
      } while (*puVar5 != 0);
      param_4 = (int)((long)puVar5 - (long)param_3 >> 1);
    }
    if (param_4 == 0) {
      return param_1;
    }
    uVar1 = *param_3;
    param_4 = param_4 + -1;
    if ((param_4 == 0) && ((uVar1 & 0xf800) != 0xd800)) {
      if (param_2 == -1) {
        uVar2 = *param_1;
        while( true ) {
          if (uVar2 == uVar1) {
            return param_1;
          }
          if (uVar2 == 0) break;
          uVar2 = param_1[1];
          param_1 = param_1 + 1;
        }
      }
      else if (param_2 != 0) {
        puVar5 = param_1 + param_2;
        do {
          if (uVar1 == *param_1) {
            return param_1;
          }
          param_1 = param_1 + 1;
        } while (puVar5 != param_1);
      }
    }
    else {
      param_3 = param_3 + 1;
      if (param_2 == -1) {
        uVar2 = *param_1;
        puVar5 = param_1;
        while (uVar2 != 0) {
          puVar8 = puVar5 + 1;
          puVar6 = param_3;
          puVar3 = puVar8;
          if (uVar1 == uVar2) {
            for (; puVar6 != param_3 + param_4; puVar6 = puVar6 + 1) {
              if (*puVar3 == 0) {
                return (ushort *)0x0;
              }
              if (*puVar3 != *puVar6) goto LAB_001007d8;
              puVar3 = puVar3 + 1;
            }
            if ((((uVar2 & 0xfc00) != 0xdc00) || (param_1 == puVar5)) ||
               ((puVar5[-1] & 0xfc00) != 0xd800)) {
              if ((puVar3[-1] & 0xfc00) != 0xd800) {
                return puVar5;
              }
              if ((*puVar3 & 0xfc00) != 0xdc00) {
                return puVar5;
              }
            }
          }
LAB_001007d8:
          puVar5 = puVar8;
          uVar2 = *puVar8;
        }
      }
      else if (param_4 < param_2) {
        puVar5 = param_1 + param_2;
        puVar6 = param_1;
        if (param_1 != puVar5 + -(long)param_4) {
          do {
            puVar7 = puVar6 + 1;
            puVar3 = param_3;
            puVar8 = puVar7;
            if (uVar1 == *puVar6) {
              for (; puVar3 != param_3 + param_4; puVar3 = puVar3 + 1) {
                if (*puVar8 != *puVar3) goto LAB_001005e0;
                puVar8 = puVar8 + 1;
              }
              if ((((*puVar6 & 0xfc00) != 0xdc00) || (param_1 == puVar6)) ||
                 ((puVar6[-1] & 0xfc00) != 0xd800)) {
                if ((puVar8[-1] & 0xfc00) != 0xd800) {
                  return puVar6;
                }
                if (puVar8 == puVar5) {
                  return puVar6;
                }
                if ((*puVar8 & 0xfc00) != 0xdc00) {
                  return puVar6;
                }
              }
            }
LAB_001005e0:
            puVar6 = puVar7;
          } while (puVar5 + -(long)param_4 != puVar7);
        }
      }
    }
  }
  return (ushort *)0x0;
}



undefined8 u_strFindFirst_76_godot(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_3 != 0) && (-2 < param_4)) {
    uVar1 = u_strFindFirst_76_godot_part_0();
    return uVar1;
  }
  return param_1;
}



undefined8 u_strstr_76_godot(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = u_strFindFirst_76_godot_part_0(param_1,0xffffffff,param_2,0xffffffff);
    return uVar1;
  }
  return param_1;
}



ushort * u_strchr_76_godot(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort local_4 [2];
  
  if ((param_2 & 0xf800) == 0xd800) {
    local_4[0] = param_2;
    puVar2 = (ushort *)u_strFindFirst_76_godot_part_0(param_1,0xffffffff,local_4,1);
    return puVar2;
  }
  uVar1 = *param_1;
  while( true ) {
    if (param_2 == uVar1) {
      return param_1;
    }
    if (uVar1 == 0) break;
    uVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return (ushort *)0x0;
}



ushort * u_strchr32_76_godot(ushort *param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  long in_FS_OFFSET;
  ushort local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (ushort)param_2;
  if (param_2 < 0x10000) {
    local_12 = uVar3;
    if ((param_2 & 0xfffff800) == 0xd800) {
      param_1 = (ushort *)u_strFindFirst_76_godot_part_0(param_1,0xffffffff,&local_12,1);
    }
    else {
      uVar2 = *param_1;
      while (uVar3 != uVar2) {
        if (uVar2 == 0) goto LAB_00100a98;
        puVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        uVar2 = *puVar1;
      }
    }
  }
  else {
    if (param_2 < 0x110000) {
      uVar2 = *param_1;
      while (uVar2 != 0) {
        if (((ushort)((short)((int)param_2 >> 10) + 0xd7c0U) == uVar2) &&
           (param_1[1] == (uVar3 & 0x3ff | 0xdc00))) goto LAB_00100a48;
        puVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        uVar2 = *puVar1;
      }
    }
LAB_00100a98:
    param_1 = (ushort *)0x0;
  }
LAB_00100a48:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ushort * u_memchr_76_godot(ushort *param_1,ushort param_2,int param_3)

{
  ushort *puVar1;
  ushort local_4 [2];
  
  if (0 < param_3) {
    puVar1 = param_1 + param_3;
    if ((param_2 & 0xf800) == 0xd800) {
      local_4[0] = param_2;
      puVar1 = (ushort *)u_strFindFirst_76_godot_part_0(param_1,(long)param_3,local_4,1);
      return puVar1;
    }
    do {
      if (param_2 == *param_1) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (puVar1 != param_1);
  }
  return (ushort *)0x0;
}



ushort * u_memchr32_76_godot(ushort *param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  long lVar3;
  long in_FS_OFFSET;
  ushort local_12;
  long local_10;
  
  lVar3 = (long)param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (ushort)param_2;
  if (param_2 < 0x10000) {
    local_12 = uVar2;
    if (0 < param_3) {
      if ((param_2 & 0xfffff800) == 0xd800) {
        param_1 = (ushort *)u_strFindFirst_76_godot_part_0(param_1,lVar3,&local_12,1);
        goto LAB_00100ba2;
      }
      puVar1 = param_1 + lVar3;
      do {
        if (uVar2 == *param_1) goto LAB_00100ba2;
        param_1 = param_1 + 1;
      } while (puVar1 != param_1);
    }
  }
  else if ((param_2 < 0x110000) && (1 < param_3)) {
    puVar1 = param_1 + lVar3 + -1;
    do {
      while (*param_1 != (ushort)((short)((int)param_2 >> 10) + 0xd7c0U)) {
        param_1 = param_1 + 1;
        if (puVar1 == param_1) goto LAB_00100ba0;
      }
      if (param_1[1] == (uVar2 & 0x3ff | 0xdc00)) goto LAB_00100ba2;
      param_1 = param_1 + 1;
    } while (puVar1 != param_1);
  }
LAB_00100ba0:
  param_1 = (ushort *)0x0;
LAB_00100ba2:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



undefined8 u_strFindLast_76_godot(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_3 != 0) && (-2 < param_4)) {
    uVar1 = u_strFindLast_76_godot_part_0();
    return uVar1;
  }
  return param_1;
}



undefined8 u_strrstr_76_godot(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = u_strFindLast_76_godot_part_0(param_1,0xffffffff,param_2,0xffffffff);
    return uVar1;
  }
  return param_1;
}



ushort * u_strrchr_76_godot(ushort *param_1,ushort param_2)

{
  ushort *puVar1;
  ushort local_4 [2];
  
  puVar1 = (ushort *)0x0;
  if ((param_2 & 0xf800) == 0xd800) {
    local_4[0] = param_2;
    puVar1 = (ushort *)u_strFindLast_76_godot_part_0(param_1,0xffffffff,local_4,1);
    return puVar1;
  }
  while( true ) {
    if (param_2 == *param_1) {
      puVar1 = param_1;
    }
    if (*param_1 == 0) break;
    param_1 = param_1 + 1;
  }
  return puVar1;
}



ushort * u_strrchr32_76_godot(ushort *param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort uVar6;
  long in_FS_OFFSET;
  ushort local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (ushort *)0x0;
  uVar5 = (ushort)param_2;
  if (param_2 < 0x10000) {
    local_12 = uVar5;
    if ((param_2 & 0xfffff800) == 0xd800) {
      puVar3 = (ushort *)u_strFindLast_76_godot_part_0(param_1,0xffffffff,&local_12,1);
    }
    else {
      while( true ) {
        if (uVar5 == *param_1) {
          puVar3 = param_1;
        }
        if (*param_1 == 0) break;
        param_1 = param_1 + 1;
      }
    }
  }
  else {
    puVar3 = (ushort *)0x0;
    if (param_2 < 0x110000) {
      uVar1 = *param_1;
joined_r0x00100d09:
      puVar2 = puVar3;
      puVar4 = param_1;
      uVar6 = uVar1;
      if (uVar1 != 0) {
        do {
          puVar3 = puVar2;
          uVar1 = puVar4[1];
          param_1 = puVar4 + 1;
          if ((ushort)((short)((int)param_2 >> 10) + 0xd7c0U) != uVar6) break;
          puVar2 = puVar4;
          puVar4 = param_1;
          uVar6 = uVar1;
        } while ((uVar5 & 0x3ff | 0xdc00) == uVar1);
        goto joined_r0x00100d09;
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}



ushort * u_memrchr_76_godot(ushort *param_1,ushort param_2,int param_3)

{
  ushort *puVar1;
  ushort local_4 [2];
  
  if (0 < param_3) {
    if ((param_2 & 0xf800) == 0xd800) {
      local_4[0] = param_2;
      puVar1 = (ushort *)u_strFindLast_76_godot_part_0(param_1,(long)param_3,local_4,1);
      return puVar1;
    }
    puVar1 = param_1 + param_3;
    do {
      puVar1 = puVar1 + -1;
      if (param_2 == *puVar1) {
        return puVar1;
      }
    } while (param_1 != puVar1);
  }
  return (ushort *)0x0;
}



ushort * u_memrchr32_76_godot(ushort *param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  long in_FS_OFFSET;
  ushort local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (ushort)param_2;
  if (param_2 < 0x10000) {
    local_12 = uVar2;
    if (0 < param_3) {
      if ((param_2 & 0xfffff800) == 0xd800) {
        puVar1 = (ushort *)u_strFindLast_76_godot_part_0(param_1,param_3,&local_12,1);
        goto LAB_00100eb2;
      }
      puVar1 = param_1 + param_3;
      do {
        puVar1 = puVar1 + -1;
        if (uVar2 == *puVar1) goto LAB_00100eb2;
      } while (param_1 != puVar1);
    }
  }
  else if ((1 < param_3) && (param_2 < 0x110000)) {
    puVar1 = param_1 + (long)param_3 + -1;
    do {
      if ((*puVar1 == (uVar2 & 0x3ff | 0xdc00)) &&
         (puVar1[-1] == (ushort)((short)((int)param_2 >> 10) + 0xd7c0U))) {
        puVar1 = puVar1 + -1;
        goto LAB_00100eb2;
      }
      puVar1 = puVar1 + -1;
    } while (param_1 != puVar1);
  }
  puVar1 = (ushort *)0x0;
LAB_00100eb2:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long u_strpbrk_76_godot(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = _matchFromSet(param_1,param_2,1);
  lVar2 = 0;
  if (-1 < iVar1) {
    lVar2 = param_1 + (long)iVar1 * 2;
  }
  return lVar2;
}



uint u_strcspn_76_godot(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = _matchFromSet(param_1,param_2,1);
  return (int)uVar1 >> 0x1f ^ uVar1;
}



uint u_strspn_76_godot(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = _matchFromSet(param_1,param_2,0);
  return (int)uVar1 >> 0x1f ^ uVar1;
}



short * u_strtok_r_76_godot(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  
  if (param_1 == 0) {
    param_1 = *param_3;
    if (param_1 == 0) {
      return (short *)0x0;
    }
  }
  else {
    *param_3 = param_1;
  }
  uVar1 = _matchFromSet(param_1,param_2,0);
  psVar3 = (short *)(param_1 + (long)(int)((int)uVar1 >> 0x1f ^ uVar1) * 2);
  if (*psVar3 == 0) {
    *param_3 = 0;
  }
  else {
    iVar2 = _matchFromSet(psVar3,param_2,1);
    if (-1 < iVar2) {
      psVar3[iVar2] = 0;
      *param_3 = (long)(psVar3 + iVar2 + 1);
      return psVar3;
    }
    if (*param_3 != 0) {
      *param_3 = 0;
      return psVar3;
    }
  }
  return (short *)0x0;
}



short * u_strcat_76_godot(short *param_1,long param_2)

{
  short sVar1;
  short *psVar2;
  long lVar3;
  
  psVar2 = param_1;
  sVar1 = *param_1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  lVar3 = 0;
  do {
    sVar1 = *(short *)(param_2 + lVar3);
    *(short *)((long)param_1 + lVar3) = sVar1;
    lVar3 = lVar3 + 2;
  } while (sVar1 != 0);
  return psVar2;
}



short * u_strncat_76_godot(short *param_1,short *param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  
  psVar3 = param_1;
  if (0 < param_3) {
    sVar2 = *param_1;
    while (sVar2 != 0) {
      param_1 = param_1 + 1;
      sVar2 = *param_1;
    }
    sVar2 = *param_2;
    *param_1 = sVar2;
    if (sVar2 != 0) {
      param_1 = param_1 + 1;
      if (param_3 != 1) {
        psVar1 = param_2 + (param_3 - 1);
        do {
          sVar2 = param_2[1];
          param_2 = param_2 + 1;
          *param_1 = sVar2;
          if (sVar2 == 0) {
            return psVar3;
          }
          param_1 = param_1 + 1;
        } while (param_2 != psVar1);
      }
      *param_1 = 0;
      return psVar3;
    }
  }
  return psVar3;
}



int u_strcmp_76_godot(long param_1,long param_2)

{
  ushort *puVar1;
  ushort uVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    uVar2 = *(ushort *)(param_1 + lVar3);
    puVar1 = (ushort *)(param_2 + lVar3);
    lVar3 = lVar3 + 2;
    if (uVar2 != *puVar1) break;
  } while (uVar2 != 0);
  return (uint)uVar2 - (uint)*puVar1;
}



int uprv_strCompare_76_godot
              (ushort *param_1,uint param_2,ushort *param_3,uint param_4,char param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  
  puVar3 = param_3;
  puVar4 = param_1;
  if ((int)(param_2 & param_4) < 0) {
    if (param_1 == param_3) {
      return 0;
    }
    uVar5 = *param_1;
    uVar6 = *param_3;
    if (uVar6 == uVar5) {
      do {
        if (uVar5 == 0) {
          return 0;
        }
        uVar5 = puVar4[1];
        uVar6 = puVar3[1];
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar5 == uVar6);
    }
    puVar9 = (ushort *)0x0;
    puVar7 = (ushort *)0x0;
  }
  else if (param_5 == '\0') {
    if ((int)param_2 < 0) {
      puVar7 = param_1;
      if (*param_1 == 0) {
        param_2 = 0;
      }
      else {
        do {
          puVar7 = puVar7 + 1;
        } while (*puVar7 != 0);
        param_2 = (uint)((long)puVar7 - (long)param_1 >> 1);
      }
LAB_00101191:
      if ((int)param_4 <= (int)param_2) goto LAB_001012d0;
      puVar7 = param_1 + (int)param_2;
      iVar1 = -1;
    }
    else {
      if (-1 < (int)param_4) goto LAB_00101191;
      puVar7 = param_3;
      if (*param_3 != 0) {
        do {
          puVar7 = puVar7 + 1;
        } while (*puVar7 != 0);
        param_4 = (uint)((long)puVar7 - (long)param_3 >> 1);
        goto LAB_00101191;
      }
      param_4 = 0;
LAB_001012d0:
      if (param_2 == param_4) {
        puVar7 = param_1 + (int)param_2;
        iVar1 = 0;
      }
      else {
        puVar7 = param_1 + (int)param_4;
        iVar1 = 1;
      }
    }
    if (param_1 == param_3) {
      return iVar1;
    }
    if (puVar7 == param_1) {
      return iVar1;
    }
    while( true ) {
      uVar5 = *puVar4;
      uVar6 = *puVar3;
      if (uVar5 != uVar6) break;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      if (puVar7 == puVar4) {
        return iVar1;
      }
    }
    puVar7 = param_1 + (int)param_2;
    puVar9 = param_3 + (int)param_4;
  }
  else {
    if (param_1 == param_3) {
      return 0;
    }
    puVar7 = param_1 + (int)param_2;
    if (param_1 == puVar7) {
      return 0;
    }
    while( true ) {
      uVar5 = *puVar4;
      uVar6 = *puVar3;
      if (uVar5 != uVar6) break;
      if (uVar5 == 0) {
        return 0;
      }
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      if (puVar7 == puVar4) {
        return 0;
      }
    }
    puVar9 = param_3 + (int)param_2;
  }
  uVar2 = (uint)uVar5;
  uVar8 = (uint)uVar6;
  if ((uVar5 < 0xd800 || uVar6 < 0xd800) || (param_6 == '\0')) goto LAB_00101218;
  if (uVar5 < 0xdc00) {
    if ((puVar7 == puVar4 + 1) || ((puVar4[1] & 0xfc00) != 0xdc00)) goto LAB_00101288;
  }
  else if (((uVar2 & 0xfffffc00) != 0xdc00) ||
          ((puVar4 == param_1 || ((puVar4[-1] & 0xfc00) != 0xd800)))) {
LAB_00101288:
    uVar2 = (uint)(ushort)(uVar5 + 0xd800);
  }
  if (uVar6 < 0xdc00) {
    if ((puVar9 != puVar3 + 1) && (uVar8 = (uint)uVar6, (puVar3[1] & 0xfc00) == 0xdc00))
    goto LAB_00101218;
  }
  else {
    uVar8 = (uint)uVar6;
    if ((((uVar6 & 0xfc00) == 0xdc00) && (puVar3 != param_3)) && ((puVar3[-1] & 0xfc00) == 0xd800))
    goto LAB_00101218;
  }
  uVar8 = (uint)(ushort)(uVar6 + 0xd800);
LAB_00101218:
  return uVar2 - uVar8;
}



int u_strCompareIter_76_godot(long param_1,long param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != 0 && param_1 != param_2) && (param_2 != 0)) {
    (**(code **)(param_1 + 0x28))(param_1,0,0);
    (**(code **)(param_2 + 0x28))(param_2,0,0);
    do {
      uVar1 = (**(code **)(param_1 + 0x48))(param_1);
      uVar2 = (**(code **)(param_2 + 0x48))(param_2);
      if (uVar1 != uVar2) {
        if (((int)uVar1 < 0xd800 || (int)uVar2 < 0xd800) || (param_3 == '\0')) goto LAB_00101452;
        if ((int)uVar1 < 0xdc00) {
          uVar3 = (**(code **)(param_1 + 0x40))(param_1);
          if ((uVar3 & 0xfffffc00) != 0xdc00) goto LAB_0010142a;
        }
        else {
          if ((uVar1 & 0xfffffc00) == 0xdc00) {
            (**(code **)(param_1 + 0x50))(param_1);
            uVar3 = (**(code **)(param_1 + 0x50))(param_1);
            if ((uVar3 & 0xfffffc00) == 0xd800) goto LAB_00101430;
          }
LAB_0010142a:
          uVar1 = uVar1 - 0x2800;
        }
LAB_00101430:
        if ((int)uVar2 < 0xdc00) {
          uVar3 = (**(code **)(param_2 + 0x40))(param_2);
          if ((uVar3 & 0xfffffc00) == 0xdc00) goto LAB_00101452;
        }
        else if ((uVar2 & 0xfffffc00) == 0xdc00) {
          (**(code **)(param_2 + 0x50))(param_2);
          uVar3 = (**(code **)(param_2 + 0x50))(param_2);
          if ((uVar3 & 0xfffffc00) == 0xd800) goto LAB_00101452;
        }
        uVar2 = uVar2 - 0x2800;
LAB_00101452:
        return uVar1 - uVar2;
      }
    } while (uVar1 != 0xffffffff);
  }
  return 0;
}



undefined8 u_strCompare_76_godot(long param_1,int param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((((param_1 != 0) && (-2 < param_2)) && (param_3 != 0)) && (-2 < param_4)) {
    uVar1 = uprv_strCompare_76_godot();
    return uVar1;
  }
  return 0;
}



void u_strcmpCodePointOrder_76_godot(undefined8 param_1,undefined8 param_2)

{
  uprv_strCompare_76_godot(param_1,0xffffffff,param_2,0xffffffff,0,1);
  return;
}



int u_strncmp_76_godot(ushort *param_1,ushort *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  iVar4 = 0;
  if (0 < param_3) {
    uVar3 = (uint)*param_1;
    iVar4 = uVar3 - *param_2;
    if (iVar4 == 0) {
      lVar6 = 0;
      while (((short)uVar3 != 0 && (lVar6 != (ulong)(param_3 - 1) * 2))) {
        lVar1 = lVar6 + 2;
        lVar2 = lVar6 + 2;
        lVar6 = lVar6 + 2;
        uVar3 = (uint)*(ushort *)((long)param_1 + lVar1);
        iVar5 = uVar3 - *(ushort *)((long)param_2 + lVar2);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
    }
  }
  return iVar4;
}



void u_strncmpCodePointOrder_76_godot(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uprv_strCompare_76_godot(param_1,param_3,param_2,param_3,1,1);
  return;
}



void u_strcpy_76_godot(long param_1,long param_2)

{
  short sVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    sVar1 = *(short *)(param_2 + lVar2);
    *(short *)(param_1 + lVar2) = sVar1;
    lVar2 = lVar2 + 2;
  } while (sVar1 != 0);
  return;
}



void u_strncpy_76_godot(long param_1,long param_2,uint param_3)

{
  short sVar1;
  ulong uVar2;
  
  if (0 < (int)param_3) {
    uVar2 = 0;
    do {
      sVar1 = *(short *)(param_2 + uVar2 * 2);
      *(short *)(param_1 + uVar2 * 2) = sVar1;
      if (sVar1 == 0) {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_3);
  }
  return;
}



long u_strlen_76_godot(short *param_1)

{
  short *psVar1;
  
  psVar1 = param_1;
  if (*param_1 == 0) {
    return 0;
  }
  do {
    psVar1 = psVar1 + 1;
  } while (*psVar1 != 0);
  return (long)psVar1 - (long)param_1 >> 1;
}



int u_countChar32_76_godot(ushort *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  
  if ((param_1 != (ushort *)0x0) && (-2 < param_2)) {
    if (param_2 == -1) {
      uVar2 = *param_1;
      puVar1 = param_1 + 1;
      iVar3 = 0;
      if (uVar2 != 0) {
        iVar3 = 1;
        while( true ) {
          puVar4 = puVar1;
          if (((uVar2 & 0xfc00) == 0xd800) &&
             (puVar4 = param_1 + 2, (param_1[1] & 0xfc00) != 0xdc00)) {
            puVar4 = puVar1;
          }
          uVar2 = *puVar4;
          puVar1 = puVar4 + 1;
          if (uVar2 == 0) break;
          iVar3 = iVar3 + 1;
          param_1 = puVar4;
        }
      }
    }
    else {
      iVar3 = 0;
      for (; param_2 != 0; param_2 = param_2 + -2) {
        while( true ) {
          while ((iVar3 = iVar3 + 1, (*param_1 & 0xfc00) != 0xd800 || (param_2 == 1))) {
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
            if (param_2 == 0) {
              return iVar3;
            }
          }
          if ((param_1[1] & 0xfc00) == 0xdc00) break;
          param_1 = param_1 + 1;
          param_2 = param_2 + -1;
        }
        param_1 = param_1 + 2;
      }
    }
    return iVar3;
  }
  return 0;
}



undefined8 u_strHasMoreChar32Than_76_godot(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (param_3 < 0) {
    return 1;
  }
  if ((param_1 != (ushort *)0x0) && (-2 < param_2)) {
    if (param_2 != -1) {
      if (param_3 < param_2 + 1 >> 1) {
        return 1;
      }
      iVar5 = param_2 - param_3;
      if (iVar5 < 1) {
        return 0;
      }
      if (param_3 == 0) {
        return 1;
      }
      puVar3 = param_1;
      iVar4 = param_3 + -1;
      do {
        puVar2 = puVar3 + 1;
        if (((*puVar3 & 0xfc00) == 0xd800) && (param_1 + param_2 != puVar2)) {
          if ((puVar3[1] & 0xfc00) == 0xdc00) {
            iVar5 = iVar5 + -1;
            puVar2 = puVar3 + 2;
            if (iVar5 < 1) {
              return 0;
            }
            goto LAB_00101753;
          }
        }
        else {
LAB_00101753:
          if (puVar2 == param_1 + param_2) {
            return 0;
          }
        }
        bVar6 = iVar4 == 0;
        puVar3 = puVar2;
        iVar4 = iVar4 + -1;
        if (bVar6) {
          return 1;
        }
      } while( true );
    }
    uVar1 = *param_1;
    puVar3 = param_1 + 1;
    if (uVar1 != 0) {
      if (param_3 == 0) {
        return 1;
      }
      while( true ) {
        puVar2 = puVar3;
        if (((uVar1 & 0xfc00) == 0xd800) && (puVar2 = param_1 + 2, (param_1[1] & 0xfc00) != 0xdc00))
        {
          puVar2 = puVar3;
        }
        uVar1 = *puVar2;
        param_3 = param_3 + -1;
        puVar3 = puVar2 + 1;
        if (uVar1 == 0) break;
        param_1 = puVar2;
        if (param_3 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



void * u_memcpy_76_godot(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 < 1) {
    return param_1;
  }
  pvVar1 = memcpy(param_1,param_2,(long)param_3 * 2);
  return pvVar1;
}



void * u_memmove_76_godot(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 < 1) {
    return param_1;
  }
  pvVar1 = memmove(param_1,param_2,(long)param_3 * 2);
  return pvVar1;
}



undefined2 * u_memset_76_godot(undefined2 *param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar2 = param_1;
  if ((0 < param_3) && (puVar1 = param_1 + param_3, param_1 < puVar1)) {
    do {
      puVar3 = param_1 + 1;
      *param_1 = param_2;
      param_1 = puVar3;
    } while (puVar3 < puVar1);
  }
  return puVar2;
}



int u_memcmp_76_godot(ushort *param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  
  if (0 < param_3) {
    puVar1 = param_1 + param_3;
    if (puVar1 <= param_1) {
      return 0;
    }
    do {
      if ((uint)*param_1 - (uint)*param_2 != 0) {
        return (uint)*param_1 - (uint)*param_2;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_1 < puVar1);
  }
  return 0;
}



void u_memcmpCodePointOrder_76_godot(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uprv_strCompare_76_godot(param_1,param_3,param_2,param_3,0,1);
  return;
}



uint u_unescapeAt_76_godot(code *param_1,int *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  sbyte sVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  long in_FS_OFFSET;
  char local_4f;
  byte local_4d;
  int local_44;
  long local_40;
  
  iVar1 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((iVar1 < param_3) && (-1 < iVar1)) {
    *param_2 = iVar1 + 1;
    uVar3 = (*param_1)(iVar1,param_4);
    if (uVar3 == 0x75) {
      bVar2 = false;
      iVar9 = *param_2;
      sVar7 = 4;
      bVar10 = 0;
      local_4f = '\x04';
      uVar11 = 0;
      local_4d = 4;
    }
    else if (uVar3 == 0x78) {
      if (param_3 <= *param_2) goto LAB_00101ba0;
      sVar4 = (*param_1)(*param_2,param_4);
      if (sVar4 == 0x7b) {
        bVar2 = true;
        sVar7 = 4;
        bVar10 = 0;
        local_4f = '\b';
        uVar11 = 0;
        iVar9 = *param_2 + 1;
        local_4d = 1;
        *param_2 = iVar9;
      }
      else {
        bVar2 = false;
        iVar9 = *param_2;
        sVar7 = 4;
        bVar10 = 0;
        local_4f = '\x02';
        uVar11 = 0;
        local_4d = 1;
      }
    }
    else if (uVar3 == 0x55) {
      bVar2 = false;
      iVar9 = *param_2;
      sVar7 = 4;
      bVar10 = 0;
      local_4f = '\b';
      uVar11 = 0;
      local_4d = 8;
    }
    else {
      uVar11 = (uint)uVar3;
      uVar8 = (uint)uVar3;
      if (7 < (ushort)(uVar3 - 0x30)) {
        lVar6 = 0;
        do {
          if (uVar3 == (&UNESCAPE_MAP)[lVar6]) {
            uVar11 = (uint)(ushort)(&UNESCAPE_MAP)[(int)lVar6 + 1];
            goto LAB_00101ac8;
          }
        } while (((ushort)(&UNESCAPE_MAP)[lVar6] <= uVar3) && (lVar6 = lVar6 + 2, lVar6 != 0x10));
        if (uVar8 == 99) {
          iVar1 = *param_2;
          if (iVar1 < param_3) {
            *param_2 = iVar1 + 1;
            uVar8 = (*param_1)(iVar1,param_4);
            uVar11 = uVar8 & 0xffff;
            if ((((uVar8 & 0xfc00) == 0xd800) && (*param_2 < param_3)) &&
               (uVar8 = (*param_1)(*param_2,param_4), (uVar8 & 0xfc00) == 0xdc00)) {
              *param_2 = *param_2 + 1;
              uVar11 = (uVar8 & 0xffff) + 0xfca02400;
            }
            uVar11 = uVar11 & 0x1f;
          }
        }
        else if ((((uVar8 & 0xfffffc00) == 0xd800) && (*param_2 < param_3)) &&
                (uVar5 = (*param_1)(*param_2,param_4), (uVar5 & 0xfc00) == 0xdc00)) {
          *param_2 = *param_2 + 1;
          uVar11 = (uVar5 & 0xffff) + 0xfca02400 + uVar8 * 0x400;
        }
        goto LAB_00101ac8;
      }
      bVar2 = false;
      iVar9 = *param_2;
      uVar11 = uVar8 - 0x30;
      sVar7 = 3;
      local_4f = '\x03';
      bVar10 = 1;
      local_4d = 1;
    }
    if (iVar9 < param_3) {
      do {
        uVar3 = (*param_1)(iVar9,param_4);
        uVar8 = (uint)uVar3;
        if (sVar7 == 3) {
          if (7 < (ushort)(uVar3 - 0x30)) goto LAB_00101a80;
LAB_00101a24:
          uVar5 = uVar8 - 0x30;
        }
        else {
          if ((ushort)(uVar3 - 0x30) < 10) goto LAB_00101a24;
          if ((ushort)(uVar3 - 0x41) < 6) {
            uVar5 = uVar8 - 0x37;
          }
          else {
            if (5 < (ushort)(uVar3 - 0x61)) goto LAB_00101a80;
            uVar5 = uVar8 - 0x57;
          }
        }
        bVar10 = bVar10 + 1;
        uVar11 = uVar11 << sVar7 | uVar5;
        iVar9 = *param_2 + 1;
        *param_2 = iVar9;
        if ((param_3 <= iVar9) || (local_4f <= (char)bVar10)) goto LAB_00101a80;
      } while( true );
    }
    if ((local_4d <= bVar10) && (!bVar2)) goto LAB_00101ac8;
  }
LAB_00101ba0:
  uVar11 = 0xffffffff;
  *param_2 = iVar1;
LAB_00101ac8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
LAB_00101a80:
  if ((char)local_4d <= (char)bVar10) {
    if (bVar2) {
      if (uVar8 != 0x7d) goto LAB_00101ba0;
      *param_2 = *param_2 + 1;
    }
    if (uVar11 < 0x110000) {
      iVar1 = *param_2;
      if ((iVar1 < param_3) && ((uVar11 & 0xfffffc00) == 0xd800)) {
        local_44 = iVar1 + 1;
        uVar3 = (*param_1)(iVar1,param_4);
        uVar8 = (uint)uVar3;
        if (uVar3 == 0x5c) {
          if (param_3 <= iVar1 + 1) goto LAB_00101ac8;
          if (iVar1 + 0xc <= param_3) {
            param_3 = iVar1 + 0xc;
          }
          uVar8 = u_unescapeAt_76_godot(param_1,&local_44,param_3,param_4);
        }
        if ((uVar8 & 0xfffffc00) == 0xdc00) {
          *param_2 = local_44;
          uVar11 = uVar8 + 0xfca02400 + uVar11 * 0x400;
        }
      }
      goto LAB_00101ac8;
    }
  }
  goto LAB_00101ba0;
}



ulong u_unescape_76_godot(char *param_1,undefined2 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  char *__s;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  uint uVar8;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar8 = 0;
    pcVar7 = param_1;
    do {
      while (__s = param_1 + 1, cVar1 == '\\') {
        local_44 = 0;
        if (param_1 != pcVar7) {
          iVar2 = (int)((long)param_1 - (long)pcVar7);
          if (param_2 != (undefined2 *)0x0) {
            uVar4 = param_3 - uVar8;
            if ((int)uVar4 < 0) {
              uVar4 = 0;
            }
            uVar6 = (ulong)uVar4;
            if (iVar2 < (int)uVar4) {
              uVar6 = (long)param_1 - (long)pcVar7 & 0xffffffff;
            }
            u_charsToUChars_76_godot(pcVar7,param_2 + (int)uVar8,uVar6);
          }
          uVar8 = uVar8 + iVar2;
        }
        sVar3 = strlen(__s);
        uVar4 = u_unescapeAt_76_godot(_charPtr_charAt,&local_44,sVar3 & 0xffffffff,__s);
        uVar6 = (ulong)local_44;
        if (local_44 == 0) {
          if ((param_2 != (undefined2 *)0x0) && (0 < param_3)) {
            *param_2 = 0;
          }
          goto LAB_00101e48;
        }
        __s = __s + uVar6;
        if (param_2 == (undefined2 *)0x0) {
          iVar2 = (0xffff < uVar4) + 1;
LAB_00101de8:
          uVar8 = uVar8 + iVar2;
        }
        else if (uVar4 < 0x10000) {
          if ((int)(param_3 - uVar8) < 1) {
            iVar2 = 1;
            goto LAB_00101de8;
          }
          param_2[(int)uVar8] = (ushort)uVar4;
          uVar8 = uVar8 + 1;
        }
        else {
          if ((int)(param_3 - uVar8) < 2) {
            iVar2 = 2;
            goto LAB_00101de8;
          }
          param_2[(long)(int)uVar8 + 1] = (ushort)uVar4 & 0x3ff | 0xdc00;
          param_2[(int)uVar8] = (short)((int)uVar4 >> 10) + -0x2840;
          uVar8 = uVar8 + 2;
        }
        cVar1 = *__s;
        param_1 = __s;
        pcVar7 = __s;
        if (cVar1 == '\0') goto LAB_00101df9;
      }
      cVar1 = *__s;
      param_1 = __s;
    } while (cVar1 != '\0');
LAB_00101df9:
    uVar4 = uVar8;
    if (pcVar7 != __s) {
      iVar2 = (int)((long)__s - (long)pcVar7);
      uVar4 = uVar8 + iVar2;
      uVar6 = (ulong)uVar4;
      if (param_2 == (undefined2 *)0x0) goto LAB_00101e48;
      uVar5 = param_3 - uVar8;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      uVar6 = (ulong)uVar5;
      if (iVar2 < (int)uVar5) {
        uVar6 = (long)__s - (long)pcVar7 & 0xffffffff;
      }
      u_charsToUChars_76_godot(pcVar7,param_2 + (int)uVar8,uVar6);
    }
  }
  if ((param_2 != (undefined2 *)0x0) && ((int)uVar4 < param_3)) {
    param_2[(int)uVar4] = 0;
  }
  uVar6 = (ulong)uVar4;
LAB_00101e48:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int u_asciiToUpper_76_godot(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x20;
  if (0x19 < (ushort)((short)param_1 - 0x61U)) {
    iVar1 = param_1;
  }
  return iVar1;
}



void u_terminateUChars_76_godot(long param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if (((param_4 != (int *)0x0) && (iVar1 = *param_4, -1 < param_3)) && (iVar1 < 1)) {
    if (param_2 <= param_3) {
      iVar1 = 0xf;
      if (param_3 == param_2) {
        iVar1 = -0x7c;
      }
      *param_4 = iVar1;
      return;
    }
    *(undefined2 *)(param_1 + (long)param_3 * 2) = 0;
    if (iVar1 == -0x7c) {
      *param_4 = 0;
      return;
    }
  }
  return;
}



void u_terminateChars_76_godot(long param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if (((param_4 != (int *)0x0) && (*param_4 < 1)) && (-1 < param_3)) {
    if (param_2 <= param_3) {
      iVar1 = 0xf;
      if (param_3 == param_2) {
        iVar1 = -0x7c;
      }
      *param_4 = iVar1;
      return;
    }
    *(undefined1 *)(param_1 + param_3) = 0;
    if (*param_4 == -0x7c) {
      *param_4 = 0;
      return;
    }
  }
  return;
}



void u_terminateUChar32s_76_godot(long param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if (((param_4 != (int *)0x0) && (iVar1 = *param_4, -1 < param_3)) && (iVar1 < 1)) {
    if (param_2 <= param_3) {
      iVar1 = 0xf;
      if (param_3 == param_2) {
        iVar1 = -0x7c;
      }
      *param_4 = iVar1;
      return;
    }
    *(undefined4 *)(param_1 + (long)param_3 * 4) = 0;
    if (iVar1 == -0x7c) {
      *param_4 = 0;
      return;
    }
  }
  return;
}



void u_terminateWChars_76_godot(long param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if (((param_4 != (int *)0x0) && (iVar1 = *param_4, -1 < param_3)) && (iVar1 < 1)) {
    if (param_2 <= param_3) {
      iVar1 = 0xf;
      if (param_3 == param_2) {
        iVar1 = -0x7c;
      }
      *param_4 = iVar1;
      return;
    }
    *(undefined4 *)(param_1 + (long)param_3 * 4) = 0;
    if (iVar1 == -0x7c) {
      *param_4 = 0;
      return;
    }
  }
  return;
}



int ustr_hashUCharsN_76_godot(ushort *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (param_1 != (ushort *)0x0) {
    iVar4 = param_2 + -1;
    if (-1 < param_2 + -0x20) {
      iVar4 = param_2 + -0x20;
    }
    puVar1 = param_1 + param_2;
    if (param_1 < puVar1) {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + ((iVar4 >> 5) + 1);
        iVar3 = (uint)uVar2 + iVar3 * 0x25;
      } while (param_1 < puVar1);
    }
  }
  return iVar3;
}



int ustr_hashCharsN_76_godot(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (param_1 != (byte *)0x0) {
    iVar4 = param_2 + -1;
    if (-1 < param_2 + -0x20) {
      iVar4 = param_2 + -0x20;
    }
    pbVar1 = param_1 + param_2;
    if (param_1 < pbVar1) {
      do {
        bVar2 = *param_1;
        param_1 = param_1 + ((iVar4 >> 5) + 1);
        iVar3 = (uint)bVar2 + iVar3 * 0x25;
      } while (param_1 < pbVar1);
    }
  }
  return iVar3;
}



int ustr_hashICharsN_76_godot(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1 + param_2;
    iVar5 = param_2 + -1;
    if (-1 < param_2 + -0x20) {
      iVar5 = param_2 + -0x20;
    }
    if (param_1 < pcVar1) {
      do {
        cVar2 = *param_1;
        param_1 = param_1 + ((iVar5 >> 5) + 1);
        bVar3 = uprv_asciitolower_76_godot((int)cVar2);
        iVar4 = (uint)bVar3 + iVar4 * 0x25;
      } while (param_1 < pcVar1);
    }
    return iVar4;
  }
  return 0;
}


