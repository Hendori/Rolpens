
undefined8 ft_face_get_mm_service(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_2 = 0;
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0xf0) + 0x40);
    if (lVar2 != -2) {
      if (lVar2 != 0) {
        *param_2 = lVar2;
        return 0;
      }
      pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
      if (pcVar1 == (code *)0x0) {
        *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
        *param_2 = 0;
      }
      else {
        lVar2 = (*pcVar1)(*(long **)(param_1 + 0xb0),"multi-masters");
        if (lVar2 != 0) {
          *(long *)(*(long *)(param_1 + 0xf0) + 0x40) = lVar2;
          *param_2 = lVar2;
          return 0;
        }
        *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
        *param_2 = 0;
      }
    }
  }
  return 6;
}



void ft_face_get_mvar_service_constprop_0_isra_0(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_2 = 0;
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0xf0) + 0x48);
    if (lVar2 != -2) {
      if (lVar2 == 0) {
        pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
        if (pcVar1 == (code *)0x0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x48) = 0xfffffffffffffffe;
          *param_2 = 0;
          return;
        }
        lVar2 = (*pcVar1)(*(long **)(param_1 + 0xb0),"metrics-variations");
        if (lVar2 == 0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x48) = 0xfffffffffffffffe;
          *param_2 = 0;
          return;
        }
        *(long *)(*(long *)(param_1 + 0xf0) + 0x48) = lVar2;
      }
      *param_2 = lVar2;
    }
  }
  return;
}



undefined8 FT_Get_Multi_Master(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_2 == 0) {
    return 6;
  }
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xf0) + 0x40);
    if (puVar3 != (undefined8 *)0xfffffffffffffffe) {
      if (puVar3 == (undefined8 *)0x0) {
        pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
        if (pcVar1 == (code *)0x0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
          return 6;
        }
        puVar3 = (undefined8 *)(*pcVar1)(*(long **)(param_1 + 0xb0),"multi-masters");
        if (puVar3 == (undefined8 *)0x0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
          return 6;
        }
        *(undefined8 **)(*(long *)(param_1 + 0xf0) + 0x40) = puVar3;
      }
      if ((code *)*puVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001001ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)*puVar3)(param_1,param_2);
        return uVar2;
      }
    }
  }
  return 6;
}



undefined8 FT_Get_MM_Var(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return 6;
  }
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xf0) + 0x40);
    if (lVar3 != -2) {
      if (lVar3 == 0) {
        pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
        if (pcVar1 == (code *)0x0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
          return 6;
        }
        lVar3 = (*pcVar1)(*(long **)(param_1 + 0xb0),"multi-masters");
        if (lVar3 == 0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
          return 6;
        }
        *(long *)(*(long *)(param_1 + 0xf0) + 0x40) = lVar3;
      }
      if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001002a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar3 + 0x20))(param_1,param_2);
        return uVar2;
      }
    }
  }
  return 6;
}



undefined8 FT_Done_MM_Var(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    ft_mem_free(*param_1);
    return 0;
  }
  return 0x21;
}



ulong FT_Set_MM_Design_Coordinates(long param_1,int param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (param_3 != 0)) {
    uVar1 = ft_face_get_mm_service(param_1,&local_28);
    if ((int)uVar1 != 0) goto LAB_00100392;
    if (*(code **)(local_28 + 8) != (code *)0x0) {
      uVar1 = (**(code **)(local_28 + 8))(param_1,param_2,param_3);
      if ((int)uVar1 == 0) {
        uVar2 = *(ulong *)(param_1 + 0x10) & 0xffffffffffff7fff;
        if (param_2 != 0) {
          uVar2 = *(ulong *)(param_1 + 0x10) | 0x8000;
        }
        *(ulong *)(param_1 + 0x10) = uVar2;
        if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
          (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xd8));
          uVar1 = uVar1 & 0xffffffff;
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
      }
      goto LAB_00100392;
    }
  }
  uVar1 = 6;
LAB_00100392:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong FT_Set_MM_WeightVector(long param_1,int param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0) || (param_3 != 0)) {
    uVar1 = ft_face_get_mm_service(param_1,&local_28);
    if ((int)uVar1 != 0) goto LAB_00100462;
    if (*(code **)(local_28 + 0x48) != (code *)0x0) {
      uVar1 = (**(code **)(local_28 + 0x48))(param_1,param_2,param_3);
      if ((int)uVar1 == 0) {
        uVar2 = *(ulong *)(param_1 + 0x10) & 0xffffffffffff7fff;
        if (param_2 != 0) {
          uVar2 = *(ulong *)(param_1 + 0x10) | 0x8000;
        }
        *(ulong *)(param_1 + 0x10) = uVar2;
        if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
          (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xd8));
          uVar1 = uVar1 & 0xffffffff;
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
      }
      goto LAB_00100462;
    }
  }
  uVar1 = 6;
LAB_00100462:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 FT_Get_MM_WeightVector(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 == 0) || (param_3 != 0)) {
    if (param_1 == 0) {
      return 0x23;
    }
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0xf0) + 0x40);
      if (lVar3 != -2) {
        if (lVar3 == 0) {
          pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
          if (pcVar1 == (code *)0x0) {
            *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
            return 6;
          }
          lVar3 = (*pcVar1)(*(long **)(param_1 + 0xb0),"multi-masters");
          if (lVar3 == 0) {
            *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
            return 6;
          }
          *(long *)(*(long *)(param_1 + 0xf0) + 0x40) = lVar3;
        }
        if (*(code **)(lVar3 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010055e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(lVar3 + 0x50))(param_1,param_2,param_3);
          return uVar2;
        }
      }
    }
  }
  return 6;
}



int FT_Set_Var_Design_Coordinates(long param_1,int param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if ((param_2 == 0) || (param_3 != 0)) {
    iVar3 = ft_face_get_mm_service(param_1,&local_40);
    iVar6 = iVar3;
    if (iVar3 != 0) goto LAB_00100620;
    if (*(code **)(local_40 + 0x28) != (code *)0x0) {
      iVar4 = (**(code **)(local_40 + 0x28))(param_1,param_2,param_3);
      iVar6 = iVar4;
      if (iVar4 + 1U < 2) {
        uVar1 = *(ulong *)(param_1 + 0x10);
        uVar5 = uVar1 & 0xffffffffffff7fff;
        if (param_2 != 0) {
          uVar5 = uVar1 | 0x8000;
        }
        pcVar2 = *(code **)(local_40 + 0x58);
        *(ulong *)(param_1 + 0x10) = uVar5;
        if (pcVar2 == (code *)0x0) {
          iVar6 = iVar3;
          if (iVar4 == -1) goto LAB_00100620;
        }
        else {
          if (iVar4 == -1) {
            iVar6 = iVar3;
            if (((byte)(uVar1 >> 0xf) & 1) != ((byte)(uVar5 >> 0xf) & 1)) {
              (*pcVar2)(param_1);
            }
            goto LAB_00100620;
          }
          (*pcVar2)(param_1);
        }
        ft_face_get_mvar_service_constprop_0_isra_0(param_1,&local_38);
        if ((local_38 != 0) && (*(code **)(local_38 + 0x38) != (code *)0x0)) {
          (**(code **)(local_38 + 0x38))(param_1);
        }
        iVar6 = iVar3;
        if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
          (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xd8));
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
      }
      goto LAB_00100620;
    }
  }
  iVar6 = 6;
LAB_00100620:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



undefined8 FT_Get_Var_Design_Coordinates(long param_1,undefined4 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return 6;
  }
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xf0) + 0x40);
    if (lVar3 != -2) {
      if (lVar3 == 0) {
        pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
        if (pcVar1 == (code *)0x0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
          return 6;
        }
        lVar3 = (*pcVar1)(*(long **)(param_1 + 0xb0),"multi-masters");
        if (lVar3 == 0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
          return 6;
        }
        *(long *)(*(long *)(param_1 + 0xf0) + 0x40) = lVar3;
      }
      if (*(code **)(lVar3 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001007a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar3 + 0x30))(param_1,param_2,param_3);
        return uVar2;
      }
    }
  }
  return 6;
}



int FT_Set_MM_Blend_Coordinates(long param_1,int param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if ((param_2 == 0) || (param_3 != 0)) {
    iVar3 = ft_face_get_mm_service(param_1,&local_40);
    iVar6 = iVar3;
    if (iVar3 != 0) goto LAB_00100870;
    if (*(code **)(local_40 + 0x10) != (code *)0x0) {
      iVar4 = (**(code **)(local_40 + 0x10))(param_1,param_2,param_3);
      iVar6 = iVar4;
      if (iVar4 + 1U < 2) {
        uVar1 = *(ulong *)(param_1 + 0x10);
        uVar5 = uVar1 & 0xffffffffffff7fff;
        if (param_2 != 0) {
          uVar5 = uVar1 | 0x8000;
        }
        pcVar2 = *(code **)(local_40 + 0x58);
        *(ulong *)(param_1 + 0x10) = uVar5;
        if (pcVar2 == (code *)0x0) {
          iVar6 = iVar3;
          if (iVar4 == -1) goto LAB_00100870;
        }
        else {
          if (iVar4 == -1) {
            iVar6 = iVar3;
            if (((byte)(uVar1 >> 0xf) & 1) != ((byte)(uVar5 >> 0xf) & 1)) {
              (*pcVar2)(param_1);
            }
            goto LAB_00100870;
          }
          (*pcVar2)(param_1);
        }
        ft_face_get_mvar_service_constprop_0_isra_0(param_1,&local_38);
        if ((local_38 != 0) && (*(code **)(local_38 + 0x38) != (code *)0x0)) {
          (**(code **)(local_38 + 0x38))(param_1);
        }
        iVar6 = iVar3;
        if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
          (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xd8));
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
      }
      goto LAB_00100870;
    }
  }
  iVar6 = 6;
LAB_00100870:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



void FT_Set_Var_Blend_Coordinates(void)

{
  FT_Set_MM_Blend_Coordinates();
  return;
}



undefined8 FT_Get_MM_Blend_Coordinates(long param_1,undefined4 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return 6;
  }
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xf0) + 0x40);
    if (lVar3 != -2) {
      if (lVar3 == 0) {
        pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
        if (pcVar1 == (code *)0x0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
          return 6;
        }
        lVar3 = (*pcVar1)(*(long **)(param_1 + 0xb0),"multi-masters");
        if (lVar3 == 0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
          return 6;
        }
        *(long *)(*(long *)(param_1 + 0xf0) + 0x40) = lVar3;
      }
      if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar3 + 0x18))(param_1,param_2,param_3);
        return uVar2;
      }
    }
  }
  return 6;
}



undefined8 FT_Get_Var_Blend_Coordinates(long param_1,undefined4 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return 6;
  }
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xf0) + 0x40);
    if (lVar3 != -2) {
      if (lVar3 == 0) {
        pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
        if (pcVar1 == (code *)0x0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
          return 6;
        }
        lVar3 = (*pcVar1)(*(long **)(param_1 + 0xb0),"multi-masters");
        if (lVar3 == 0) {
          *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
          return 6;
        }
        *(long *)(*(long *)(param_1 + 0xf0) + 0x40) = lVar3;
      }
      if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar3 + 0x18))(param_1,param_2,param_3);
        return uVar2;
      }
    }
  }
  return 6;
}



undefined8 FT_Get_Var_Axis_Flags(uint *param_1,uint param_2,uint *param_3)

{
  if (((param_1 != (uint *)0x0) && (param_3 != (uint *)0x0)) && (param_2 < *param_1)) {
    *param_3 = (uint)*(ushort *)((long)param_1 + (ulong)param_2 * 2 + 0x20);
    return 0;
  }
  return 6;
}



int FT_Set_Named_Instance(long param_1,int param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  iVar3 = ft_face_get_mm_service(param_1,&local_40);
  iVar5 = iVar3;
  if (iVar3 == 0) {
    if (*(code **)(local_40 + 0x38) == (code *)0x0) {
      iVar5 = 6;
    }
    else {
      iVar4 = (**(code **)(local_40 + 0x38))(param_1,param_2);
      iVar5 = iVar4;
      if (iVar4 + 1U < 2) {
        uVar1 = *(ulong *)(param_1 + 0x10);
        *(ulong *)(param_1 + 0x10) = uVar1 & 0xffffffffffff7fff;
        *(ulong *)(param_1 + 8) = (ulong)(uint)(param_2 << 0x10) | (ulong)*(ushort *)(param_1 + 8);
        pcVar2 = *(code **)(local_40 + 0x58);
        if (pcVar2 == (code *)0x0) {
          iVar5 = iVar3;
          if (iVar4 == -1) goto LAB_00100c90;
        }
        else {
          if (iVar4 == -1) {
            iVar5 = iVar3;
            if ((uVar1 & 0x8000) != 0) {
              (*pcVar2)(param_1);
            }
            goto LAB_00100c90;
          }
          (*pcVar2)(param_1);
        }
        ft_face_get_mvar_service_constprop_0_isra_0(param_1,&local_38);
        if ((local_38 != 0) && (*(code **)(local_38 + 0x38) != (code *)0x0)) {
          (**(code **)(local_38 + 0x38))(param_1);
        }
        iVar5 = iVar3;
        if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
          (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 0xd8));
          *(undefined8 *)(param_1 + 0xd8) = 0;
        }
      }
    }
  }
LAB_00100c90:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



undefined8 FT_Get_Default_Named_Instance(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xf0) + 0x40);
    if (lVar3 != -2) {
      if (lVar3 != 0) {
LAB_00100d25:
        if (*(code **)(lVar3 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(lVar3 + 0x40))(param_1,param_2);
          return uVar2;
        }
        return 0;
      }
      pcVar1 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
      if (pcVar1 == (code *)0x0) {
        *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
      }
      else {
        lVar3 = (*pcVar1)(*(long **)(param_1 + 0xb0),"multi-masters");
        if (lVar3 != 0) {
          *(long *)(*(long *)(param_1 + 0xf0) + 0x40) = lVar3;
          goto LAB_00100d25;
        }
        *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x40) = 0xfffffffffffffffe;
      }
    }
  }
  return 6;
}


