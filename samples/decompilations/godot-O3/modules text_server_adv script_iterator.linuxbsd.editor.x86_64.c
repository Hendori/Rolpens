
/* CowData<ScriptIterator::ScriptRange>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ScriptIterator::ScriptRange>::_copy_on_write(CowData<ScriptIterator::ScriptRange> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 0xc;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
    if (*(long *)this != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)this + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)this;
        *(undefined8 *)this = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* ScriptIterator::same_script(int, int) */

uint __thiscall ScriptIterator::same_script(ScriptIterator *this,int param_1,int param_2)

{
  undefined8 in_RAX;
  undefined3 uVar1;
  
  uVar1 = (undefined3)((uint)param_2 >> 8);
  return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),(int)this < 2) |
         CONCAT31(uVar1,(int)this == param_1) | CONCAT31(uVar1,param_1 < 2);
}



/* ScriptIterator::ScriptIterator(String const&, int, int) */

void __thiscall
ScriptIterator::ScriptIterator(ScriptIterator *this,String *param_1,int param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  long in_FS_OFFSET;
  void *local_60;
  int local_50;
  int local_4c;
  int local_44;
  long local_40;
  
  uVar18 = 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  if (param_3 <= param_2) {
    param_2 = param_3 + -1;
  }
  iVar13 = 0;
  if (-1 < param_2) {
    iVar13 = param_2;
  }
  local_60 = (void *)Memory::alloc_static(0x400,false);
  local_44 = 0;
  lVar4 = *(long *)param_1;
  local_50 = -1;
  local_4c = 0x80;
  do {
    iVar15 = iVar13;
    if (iVar13 < param_3) {
      iVar5 = 0;
      puVar19 = (undefined4 *)(lVar4 + (long)iVar13 * 4);
      do {
        uVar3 = *puVar19;
        iVar6 = uscript_getScript_76_godot(uVar3,&local_44);
        if (0 < local_44) {
          Memory::free_static(local_60,false);
          uVar10 = u_errorName_76_godot(local_44);
          _err_print_error("ScriptIterator","modules/text_server_adv/script_iterator.cpp",0x47,
                           "Method/function failed.",uVar10,0);
          goto LAB_001004b2;
        }
        iVar7 = u_getIntPropertyValue_76_godot(uVar3,0x1015);
        iVar8 = local_50;
        if (iVar7 != 0) {
          iVar7 = u_getIntPropertyValue_76_godot(uVar3,0x1015);
          iVar16 = (int)uVar18;
          if (iVar7 == 1) {
            uVar17 = iVar16 + 1;
            uVar18 = (ulong)uVar17;
            if (local_4c <= (int)uVar17) {
              local_4c = local_4c + 0x80;
              local_60 = (void *)Memory::realloc_static(local_60,(long)local_4c << 3,false);
            }
            *(ulong *)((long)local_60 + (long)(int)uVar17 * 8) = CONCAT44(iVar5,uVar3);
          }
          else if (-1 < iVar16) {
            iVar8 = u_getBidiPairedBracket_76_godot(uVar3);
            uVar12 = (ulong)iVar16;
            do {
              if (*(int *)((long)local_60 + uVar12 * 8) == iVar8) {
                iVar6 = (int)uVar12;
                uVar18 = uVar12 & 0xffffffff;
                iVar8 = iVar6;
                if (local_50 <= iVar6) {
                  iVar8 = local_50;
                }
                iVar6 = *(int *)((long)local_60 + (long)iVar6 * 8 + 4);
                goto joined_r0x00100355;
              }
              uVar12 = uVar12 - 1;
              uVar18 = uVar12 & 0xffffffff;
            } while ((int)uVar12 != -1);
            iVar8 = -1;
            if (local_50 < 0) {
              iVar8 = local_50;
            }
          }
        }
joined_r0x00100355:
        local_50 = (int)uVar18;
        if (iVar6 < 2) {
LAB_00100360:
          iVar6 = u_getIntPropertyValue_76_godot(uVar3,0x1015);
          if (((-1 < local_50) && (iVar6 == 2)) &&
             (uVar18 = (ulong)(local_50 - 1), local_50 = iVar8, iVar6 = iVar5, -1 < iVar8)) {
LAB_00100460:
            iVar8 = local_50 + -1;
            iVar5 = iVar6;
          }
        }
        else {
          if (1 < iVar5) {
            if (iVar6 == iVar5) goto LAB_00100360;
            break;
          }
          if (((iVar6 < 2) || (1 < iVar5)) || (iVar5 = iVar6, local_50 <= iVar8)) goto LAB_00100360;
          pvVar9 = (void *)((long)local_60 + (long)iVar8 * 8);
          pvVar2 = (void *)((long)local_60 + ((ulong)(uint)(local_50 - iVar8) + (long)iVar8) * 8);
          if (((int)pvVar2 - (int)pvVar9 & 8U) == 0) goto LAB_001003e0;
          *(int *)((long)pvVar9 + 0xc) = iVar6;
          for (pvVar9 = (void *)((long)pvVar9 + 8); pvVar9 != pvVar2;
              pvVar9 = (void *)((long)pvVar9 + 0x10)) {
LAB_001003e0:
            *(int *)((long)pvVar9 + 0xc) = iVar6;
            *(int *)((long)pvVar9 + 0x14) = iVar6;
          }
          iVar7 = u_getIntPropertyValue_76_godot(uVar3,0x1015);
          iVar8 = local_50;
          if ((iVar7 == 2) && (-1 < local_50)) {
            uVar18 = (ulong)(local_50 - 1);
            goto LAB_00100460;
          }
        }
        local_50 = iVar8;
        iVar15 = iVar15 + 1;
        puVar19 = puVar19 + 1;
        iVar8 = local_50;
      } while (param_3 != iVar15);
    }
    else {
      iVar5 = 0;
      iVar8 = local_50;
    }
    local_50 = iVar8;
    iVar8 = hb_icu_script_to_script(iVar5);
    if (*(long *)(this + 8) == 0) {
      lVar14 = 1;
    }
    else {
      lVar14 = *(long *)(*(long *)(this + 8) + -8) + 1;
    }
    iVar5 = CowData<ScriptIterator::ScriptRange>::resize<false>
                      ((CowData<ScriptIterator::ScriptRange> *)(this + 8),lVar14);
    if (iVar5 == 0) {
      if (*(long *)(this + 8) == 0) {
        lVar11 = -1;
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(*(long *)(this + 8) + -8);
        lVar11 = lVar14 + -1;
        if (-1 < lVar11) {
          CowData<ScriptIterator::ScriptRange>::_copy_on_write
                    ((CowData<ScriptIterator::ScriptRange> *)(this + 8));
          piVar1 = (int *)(*(long *)(this + 8) + lVar11 * 0xc);
          *piVar1 = iVar13;
          piVar1[1] = iVar15;
          piVar1[2] = iVar8;
          goto joined_r0x00100502;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar14,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true");
    }
joined_r0x00100502:
    iVar13 = iVar15;
    if (param_3 <= iVar15) {
      Memory::free_static(local_60,false);
LAB_001004b2:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* CowData<ScriptIterator::ScriptRange>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<ScriptIterator::ScriptRange>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<ScriptIterator::ScriptRange>::_realloc(long) */

undefined8 __thiscall
CowData<ScriptIterator::ScriptRange>::_realloc
          (CowData<ScriptIterator::ScriptRange> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<ScriptIterator::ScriptRange>::resize<false>(long) */

undefined8 __thiscall
CowData<ScriptIterator::ScriptRange>::resize<false>
          (CowData<ScriptIterator::ScriptRange> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar11 = 0;
    lVar3 = 0;
  }
  else {
    lVar11 = *(long *)(lVar3 + -8);
    if (param_1 == lVar11) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar11 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  lVar10 = param_1 * 0xc;
  if (lVar10 == 0) {
LAB_00100a30:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = lVar10 - 1U >> 1 | lVar10 - 1U;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_00100a30;
  if (param_1 <= lVar11) {
    if ((lVar9 != lVar3) && (uVar7 = _realloc(this,lVar9), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar9 == lVar3) {
LAB_0010099c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_00100927;
  }
  else {
    if (lVar11 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0010099c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar3 = 0;
  }
  puVar5 = (undefined8 *)((long)puVar8 + lVar3 * 0xc);
  do {
    *puVar5 = 0;
    puVar6 = (undefined8 *)((long)puVar5 + 0xc);
    *(undefined4 *)(puVar5 + 1) = 0x5a797979;
    puVar5 = puVar6;
  } while (puVar6 != (undefined8 *)(lVar10 + (long)puVar8));
LAB_00100927:
  puVar8[-1] = param_1;
  return 0;
}


