
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
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long in_FS_OFFSET;
  void *local_60;
  int local_50;
  int local_4c;
  int local_44;
  long local_40;
  
  uVar17 = 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  if (param_3 <= param_2) {
    param_2 = param_3 + -1;
  }
  iVar12 = 0;
  if (-1 < param_2) {
    iVar12 = param_2;
  }
  local_60 = (void *)Memory::alloc_static(0x400,false);
  local_44 = 0;
  lVar3 = *(long *)param_1;
  local_50 = -1;
  local_4c = 0x80;
  do {
    iVar14 = iVar12;
    if (iVar12 < param_3) {
      iVar4 = 0;
      puVar18 = (undefined4 *)(lVar3 + (long)iVar12 * 4);
      do {
        uVar2 = *puVar18;
        iVar5 = uscript_getScript_76_godot(uVar2,&local_44);
        if (0 < local_44) {
          Memory::free_static(local_60,false);
          uVar9 = u_errorName_76_godot(local_44);
          _err_print_error("ScriptIterator","modules/text_server_adv/script_iterator.cpp",0x47,
                           "Method/function failed.",uVar9,0);
          goto LAB_001004a2;
        }
        iVar6 = u_getIntPropertyValue_76_godot(uVar2,0x1015);
        iVar7 = local_50;
        if (iVar6 != 0) {
          iVar6 = u_getIntPropertyValue_76_godot(uVar2,0x1015);
          iVar15 = (int)uVar17;
          if (iVar6 == 1) {
            uVar16 = iVar15 + 1;
            uVar17 = (ulong)uVar16;
            if (local_4c <= (int)uVar16) {
              local_4c = local_4c + 0x80;
              local_60 = (void *)Memory::realloc_static(local_60,(long)local_4c << 3,false);
            }
            *(ulong *)((long)local_60 + (long)(int)uVar16 * 8) = CONCAT44(iVar4,uVar2);
          }
          else if (-1 < iVar15) {
            iVar7 = u_getBidiPairedBracket_76_godot(uVar2);
            uVar11 = (ulong)iVar15;
            do {
              if (*(int *)((long)local_60 + uVar11 * 8) == iVar7) {
                iVar5 = (int)uVar11;
                uVar17 = uVar11 & 0xffffffff;
                iVar7 = iVar5;
                if (local_50 <= iVar5) {
                  iVar7 = local_50;
                }
                iVar5 = *(int *)((long)local_60 + (long)iVar5 * 8 + 4);
                goto joined_r0x00100355;
              }
              uVar11 = uVar11 - 1;
              uVar17 = uVar11 & 0xffffffff;
            } while ((int)uVar11 != -1);
            iVar7 = -1;
            if (local_50 < 0) {
              iVar7 = local_50;
            }
          }
        }
joined_r0x00100355:
        local_50 = (int)uVar17;
        if (iVar5 < 2) {
LAB_00100360:
          iVar5 = u_getIntPropertyValue_76_godot(uVar2,0x1015);
          if (((-1 < local_50) && (iVar5 == 2)) &&
             (uVar17 = (ulong)(local_50 - 1), local_50 = iVar7, iVar5 = iVar4, -1 < iVar7)) {
LAB_00100450:
            iVar7 = local_50 + -1;
            iVar4 = iVar5;
          }
        }
        else {
          if (1 < iVar4) {
            if (iVar5 == iVar4) goto LAB_00100360;
            break;
          }
          if (((iVar5 < 2) || (1 < iVar4)) || (iVar4 = iVar5, local_50 <= iVar7)) goto LAB_00100360;
          pvVar8 = (void *)((long)local_60 + (long)iVar7 * 8);
          do {
            *(int *)((long)pvVar8 + 0xc) = iVar5;
            pvVar8 = (void *)((long)pvVar8 + 8);
          } while (pvVar8 != (void *)((long)local_60 +
                                     ((ulong)(uint)(local_50 - iVar7) + (long)iVar7) * 8));
          iVar6 = u_getIntPropertyValue_76_godot(uVar2,0x1015);
          iVar7 = local_50;
          if ((iVar6 == 2) && (-1 < local_50)) {
            uVar17 = (ulong)(local_50 - 1);
            goto LAB_00100450;
          }
        }
        local_50 = iVar7;
        iVar14 = iVar14 + 1;
        puVar18 = puVar18 + 1;
        iVar7 = local_50;
      } while (param_3 != iVar14);
    }
    else {
      iVar4 = 0;
      iVar7 = local_50;
    }
    local_50 = iVar7;
    iVar7 = hb_icu_script_to_script(iVar4);
    if (*(long *)(this + 8) == 0) {
      lVar13 = 1;
    }
    else {
      lVar13 = *(long *)(*(long *)(this + 8) + -8) + 1;
    }
    iVar4 = CowData<ScriptIterator::ScriptRange>::resize<false>
                      ((CowData<ScriptIterator::ScriptRange> *)(this + 8),lVar13);
    if (iVar4 == 0) {
      if (*(long *)(this + 8) == 0) {
        lVar10 = -1;
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(*(long *)(this + 8) + -8);
        lVar10 = lVar13 + -1;
        if (-1 < lVar10) {
          CowData<ScriptIterator::ScriptRange>::_copy_on_write
                    ((CowData<ScriptIterator::ScriptRange> *)(this + 8));
          piVar1 = (int *)(*(long *)(this + 8) + lVar10 * 0xc);
          *piVar1 = iVar12;
          piVar1[1] = iVar14;
          piVar1[2] = iVar7;
          goto joined_r0x001004f2;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar13,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true");
    }
joined_r0x001004f2:
    iVar12 = iVar14;
    if (param_3 <= iVar14) {
      Memory::free_static(local_60,false);
LAB_001004a2:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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
LAB_00100a20:
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
  if (lVar9 == 0) goto LAB_00100a20;
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
LAB_0010098c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar8[-1];
    if (param_1 <= lVar3) goto LAB_00100917;
  }
  else {
    if (lVar11 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0010098c;
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
LAB_00100917:
  puVar8[-1] = param_1;
  return 0;
}


